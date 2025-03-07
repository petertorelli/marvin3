/**
 * Motor Controller using a PSoC 4100S (CY8C4146LQI_S422)
 */
#include <stdlib.h>
#include "cy_pdl.h"
#include "cybsp.h"
#include "cy_retarget_io.h"
#include "pidctl.h"

#define MAX_QUADDEC_VALUE 120u
#define MAX_QUADDEC_HEADROOM (MAX_QUADDEC_VALUE + 12u)
#define SERVO_MID_MS 1500
#define SERVO_HALF_MS 500
#define MAX_PWM 950u /* 95% duty cycle max */

#define FAIL_TRAP(ms) { \
    while (1) { \
        Cy_GPIO_Inv(DBG_LED_PORT, DBG_LED_PIN); \
        Cy_SysLib_Delay(ms); }}

#define CY_CHECK(x) do { \
        if (CY_RSLT_SUCCESS != x) { \
            FAIL_TRAP(125); \
        }\
    } while (0)

#define IN_DEAD_ZONE(x) ((x >= -10) && ( x <= 10))

static volatile uint32_t g_ms = 0u;
static volatile uint32_t g_servo_count = 0u;

static void 
SysTick_Callback(void)
{
    ++g_ms;
}

// used by pid routine
uint32_t
current_systick(void)
{
    return g_ms;
}

static void
debug__use_direct_pot(void)
{
    uint32_t compare = 0;
    int16_t val;
    static int16_t last_val = INT16_MAX;

    Cy_SAR_StartConvert(POT_ADC_HW, CY_SAR_START_CONVERT_SINGLE_SHOT);
    Cy_SAR_IsEndConversion(POT_ADC_HW, CY_SAR_WAIT_FOR_RESULT);
    val = Cy_SAR_GetResult16(POT_ADC_HW, 0);
    /* Clip to 0,2047 due to negative noise */
    val = val < 0 ? 0 : (val > 0x7ff ? 0x7ff : val);
    /* Center between -1024,0,1023 */
    val = val - (0x7ff >> 1);

    /* Enforce a "STOP" if we swing from FWD<>REV w/o passing deadzone. */
    if (last_val != INT16_MAX)
    {
        if ((last_val > 0 && val < 0) || (last_val < 0 && val > 0))
        {
            val = 0;
        }
    }
    last_val = val;

    if (IN_DEAD_ZONE(val))
    {
        //printf("DEAD ZONE Value %d\r\n", val);
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_LHS_NUM, 0);
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_RHS_NUM, 0);
    }
    else
    {
        if (val < 0)
        {
            //printf("FWD Value %d\r\n", val);
            val *= -1;
            /* Scale from [0:2047] to [0:950], up to 95% duty cycle. */
            compare = (val * 950u) / 1023u;
            Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_LHS_NUM, 0);
            Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_RHS_NUM, compare);
        }
        else
        {
            //printf("REV Value %d\r\n", val);
            /* Scale from [0:2047] to [0:950], up to 95% duty cycle. */
            compare = (val * 950u) / 1023u;
            Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_LHS_NUM, compare);
            Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_RHS_NUM, 0);
        }
    }
    /* Don't burn out the bridge transistors! */
    /* TODO: Move this up above the previous SetC...*/
    if (compare > 950)
    {
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_LHS_NUM, 0);
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_RHS_NUM, 0);
        FAIL_TRAP(50);
    }
}

static void
update_pid(pidctl_t *pid)
{
    int32_t count = 0;
    int32_t delta = 0;
    static volatile int32_t last_count = 0;
    static volatile int32_t last_delta = 0;

    float y = 0.0f;
    uint32_t lhs = 0u;
    uint32_t rhs = 0u;

    if (pidctl_needs_update(pid))
    {
        count = Cy_TCPWM_QuadDec_GetCounter(TCPWM, QUAD_DEC_NUM);
        /* Key learning: make sure count sign matches PID sign! */
        delta = last_count - count;
        last_count = count;

        /* Prevent power-on spike since delta will be -32768 */
        if (delta > 1000 || delta < -1000)
        {
            /* Prevent counter overflow since this is unsigned. */
            /* Also supresses turn-on spike from first decoder read. */
            delta = last_delta;
        }
        last_delta = delta;

        /* Note: The acc can be nonzero at the same time error is zero */
        /* Note: This causes y to be nonzero with delta = 0 */
        /* TODO: Don't leave PWMs running at very low values. */
        y = pidctl_compute(pid, (float)delta);

        if (y < 0)
        {
            lhs = (uint32_t)(y * -1);
            rhs = 0u;
        }
        else
        {
            lhs = 0u;
            rhs = (uint32_t)y;
        }
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_LHS_NUM, lhs);
        Cy_TCPWM_PWM_SetCompare1(TCPWM, PWM_RHS_NUM, rhs);

        printf("%5.3f,%5.3f,%5.3f\r\n", 
            (float)g_ms/1000.0f,
            pid->target, (float)delta);
    }
}

static void
servo_width_isr(void)
{
    uint32_t cause;
    cause = Cy_TCPWM_GetInterruptStatusMasked(SERVO_DEC_HW, SERVO_DEC_NUM);
    /* Key learning: latch the value in the ISR, don't read later! */
    g_servo_count = Cy_TCPWM_Counter_GetCounter(TCPWM, SERVO_DEC_NUM);
    Cy_TCPWM_ClearInterrupt(SERVO_DEC_HW, SERVO_DEC_NUM, cause);
}

int
main(void)
{
    CY_CHECK(cybsp_init());

    __enable_irq();

    Cy_SCB_UART_Init(DBG_UART_HW, &DBG_UART_config, NULL);
    Cy_SCB_UART_Enable(DBG_UART_HW);
    CY_CHECK(cy_retarget_io_init(DBG_UART_HW));

    /* Key learnings: 256 sample averaging. */
    /* Questions: why is a 12-bit SAR range 0x000 to 0x7ff if vneg=vss? */
    /* Questions: really noisy at 2-samp avg, cap issue? */
    /* Questiosn: seeing negative values even though vneg=vss */
    CY_CHECK(Cy_SAR_Init(POT_ADC_HW, &POT_ADC_config));
    Cy_SAR_Enable(POT_ADC_HW);

    /* Key learnings: Need to call EnableCompareSwap() to uh, enable swap */
    /* Key learnings: Don't forget to call TriggerStart() */
    /* The IR2184 HO floats to ~Vcc when SD# is pulled low. Weird? */
    /* So we need two PWMs instead of sharing one and using SD# */
    /* Key learnings: need to discharge HO via LO on same half-bridge! */
    CY_CHECK(Cy_TCPWM_PWM_Init(TCPWM, PWM_LHS_NUM, &PWM_LHS_config));
    Cy_TCPWM_PWM_Enable(TCPWM, PWM_LHS_NUM);
    Cy_TCPWM_PWM_EnableCompareSwap(TCPWM, PWM_LHS_MASK, true);
    CY_CHECK(Cy_TCPWM_PWM_Init(TCPWM, PWM_RHS_NUM, &PWM_RHS_config));
    Cy_TCPWM_PWM_Enable(TCPWM, PWM_RHS_NUM);
    Cy_TCPWM_PWM_EnableCompareSwap(TCPWM, PWM_RHS_MASK, true);
    /* These must be synched to prevent shoot-through current. */
    Cy_TCPWM_TriggerStart(TCPWM, PWM_LHS_MASK | PWM_RHS_MASK);

    Cy_TCPWM_QuadDec_Init(TCPWM, QUAD_DEC_NUM, &QUAD_DEC_config);
    Cy_TCPWM_QuadDec_Enable(TCPWM, QUAD_DEC_NUM);
    Cy_TCPWM_TriggerReloadOrIndex(TCPWM, QUAD_DEC_MASK);

    /* Default 1 msec */
    Cy_SysTick_Enable();
    Cy_SysTick_SetCallback(0UL, &SysTick_Callback);

    Cy_TCPWM_Counter_Init(TCPWM, SERVO_DEC_NUM, &SERVO_DEC_config);
    Cy_TCPWM_Counter_Enable(TCPWM, SERVO_DEC_NUM);
    cy_stc_sysint_t servo_cnt_config =
    {
        .intrSrc = SERVO_DEC_IRQ,
        .intrPriority = 3
    };
    Cy_SysInt_Init(&servo_cnt_config, servo_width_isr);
    NVIC_ClearPendingIRQ(SERVO_DEC_IRQ);
    NVIC_EnableIRQ(SERVO_DEC_IRQ);
    
    pidctl_t pid =
    {
        .target    = 0.0f,
        .kp        = 5.0f, // 4.0f, // 1.0f,
        .ki        = 3.0f, // 2.5f, // 5.0f,
        .kd        = 1.5, // 0.05f,
        .ymin      = (float)MAX_PWM * -1.0f,
        .ymax      = (float)MAX_PWM,
        .period_ms = 50
    };
    pidctl_prime(&pid);

    while (1)
    {
        //Cy_GPIO_Inv(DBG_LED_PORT, DBG_LED_PIN);
        // All the int conversions b/c math between unsigned & signed is ?huh?
        // BUG: Why doesn't servo count ever hit 2000 ms? Scope says it does?
        int scaled_value = (int)SERVO_MID_MS - (int)g_servo_count;
        // Do this BEFORE the divide since we're using INTs
        scaled_value *= (int)MAX_QUADDEC_VALUE;
        scaled_value /= (int)SERVO_HALF_MS;
        if (IN_DEAD_ZONE(scaled_value))
        {
            pid.target = 0.0f;
        }
        else
        {
            pid.target = (float)scaled_value;
        }
        update_pid(&pid);
    }
}
