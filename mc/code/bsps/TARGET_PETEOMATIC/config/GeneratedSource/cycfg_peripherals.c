/*******************************************************************************
 * File Name: cycfg_peripherals.c
 *
 * Description:
 * Peripheral Hardware Block configuration
 * This file was automatically generated and should not be modified.
 * Configurator Backend 3.40.0
 * device-db 4.20.0.7450
 * mtb-pdl-cat2 2.14.0.14518
 *
 *******************************************************************************
 * Copyright 2025 Cypress Semiconductor Corporation (an Infineon company) or
 * an affiliate of Cypress Semiconductor Corporation.
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 ******************************************************************************/

#include "cycfg_peripherals.h"

#define QUAD_DEC_INPUT_DISABLED 0x7U
#define SERVO_DEC_INPUT_DISABLED 0x7U
#define PWM_LHS_INPUT_DISABLED 0x7U
#define PWM_RHS_INPUT_DISABLED 0x7U

const cy_stc_sar_channel_config_t POT_ADC_channel_0_config =
{
    .addr = (cy_en_sar_chan_config_port_pin_addr_t)(SAR0_VPLUS0_PIN | (SAR0_VPLUS0_PORT << SAR_CHAN_CONFIG_PORT_ADDR_Pos)),
    .differential = false,
    .resolution = CY_SAR_MAX_RES,
    .avgEn = true,
    .sampleTimeSel = CY_SAR_SAMPLE_TIME_0,
    .rangeIntrEn = false,
    .satIntrEn = false,
};
const cy_stc_sar_config_t POT_ADC_config =
{
    .vrefSel = CY_SAR_VREF_SEL_VDDA,
    .vrefBypCapEn = false,
    .negSel = CY_SAR_NEG_SEL_VSSA_KELVIN,
    .negVref = CY_SAR_NEGVREF_HW,
    .boostPump = false,
    .power = CY_SAR_HALF_PWR,
    .sarMuxDsEn = false,
    .switchDisable = false,
    .subResolution = CY_SAR_SUB_RESOLUTION_8B,
    .leftAlign = false,
    .singleEndedSigned = true,
    .differentialSigned = true,
    .avgCnt = CY_SAR_AVG_CNT_256,
    .avgShift = true,
    .trigMode = CY_SAR_TRIGGER_MODE_FW_ONLY,
    .eosEn = false,
    .sampleTime0 = 3,
    .sampleTime1 = 2,
    .sampleTime2 = 2,
    .sampleTime3 = 2,
    .rangeThresLow = 0UL,
    .rangeThresHigh = 0UL,
    .rangeCond = CY_SAR_RANGE_COND_BELOW,
    .chanEn = 1UL,
    .channelConfig = {&POT_ADC_channel_0_config, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL},
    .routingConfig = NULL,
    .vrefMvValue = POT_ADC_VREF_MV,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t POT_ADC_obj =
{
    .type = CYHAL_RSC_ADC,
    .block_num = 0,
    .channel_num = 0,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_scb_uart_config_t DBG_UART_config =
{
    .uartMode = CY_SCB_UART_STANDARD,
    .enableMutliProcessorMode = false,
    .smartCardRetryOnNack = false,
    .irdaInvertRx = false,
    .irdaEnableLowPowerReceiver = false,
    .enableLinMode = false,
    .oversample = 8,
    .enableMsbFirst = false,
    .dataWidth = 8UL,
    .parity = CY_SCB_UART_PARITY_NONE,
    .stopBits = CY_SCB_UART_STOP_BITS_1,
    .enableInputFilter = false,
    .breakWidth = 11UL,
    .dropOnFrameError = false,
    .dropOnParityError = false,
    .receiverAddress = 0x0UL,
    .receiverAddressMask = 0x0UL,
    .acceptAddrInFifo = false,
    .enableCts = false,
    .ctsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rtsRxFifoLevel = 0UL,
    .rtsPolarity = CY_SCB_UART_ACTIVE_LOW,
    .rxFifoTriggerLevel = 7UL,
    .rxFifoIntEnableMask = 0UL,
    .txFifoTriggerLevel = 0UL,
    .txFifoIntEnableMask = 0UL,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DBG_UART_obj =
{
    .type = CYHAL_RSC_SCB,
    .block_num = 1U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_quaddec_config_t QUAD_DEC_config =
{
    .resolution = CY_TCPWM_QUADDEC_X4,
    .interruptSources = CY_TCPWM_INT_NONE,
    .indexInputMode = QUAD_DEC_INPUT_DISABLED & 0x3U,
    .indexInput = CY_TCPWM_INPUT_0,
    .stopInputMode = QUAD_DEC_INPUT_DISABLED & 0x3U,
    .stopInput = CY_TCPWM_INPUT_0,
    .phiAInput = TCPWM_CNT0_COUNT_VALUE,
    .phiBInput = TCPWM_CNT0_START_VALUE,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t QUAD_DEC_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 0U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_counter_config_t SERVO_DEC_config =
{
    .period = 65535,
    .clockPrescaler = CY_TCPWM_COUNTER_PRESCALER_DIVBY_1,
    .runMode = CY_TCPWM_COUNTER_CONTINUOUS,
    .countDirection = CY_TCPWM_COUNTER_COUNT_UP,
    .compareOrCapture = CY_TCPWM_COUNTER_MODE_CAPTURE,
    .compare0 = 16384,
    .compare1 = 16384,
    .enableCompareSwap = false,
    .interruptSources = CY_TCPWM_INT_ON_CC,
    .captureInputMode = CY_TCPWM_INPUT_FALLINGEDGE,
    .captureInput = TCPWM_CNT1_CAPTURE_VALUE,
    .reloadInputMode = CY_TCPWM_INPUT_RISINGEDGE,
    .reloadInput = TCPWM_CNT1_RELOAD_VALUE,
    .startInputMode = CY_TCPWM_INPUT_RISINGEDGE,
    .startInput = TCPWM_CNT1_START_VALUE,
    .stopInputMode = CY_TCPWM_INPUT_FALLINGEDGE,
    .stopInput = TCPWM_CNT1_STOP_VALUE,
    .countInputMode = SERVO_DEC_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SERVO_DEC_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 1U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_pwm_config_t PWM_LHS_config =
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_CONTINUOUS,
    .period0 = 1000,
    .period1 = 0,
    .enablePeriodSwap = false,
    .compare0 = 0,
    .compare1 = 0,
    .enableCompareSwap = true,
    .interruptSources = CY_TCPWM_INT_NONE,
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = CY_TCPWM_INPUT_RISINGEDGE,
    .swapInput = TCPWM_CNT2_CAPTURE_VALUE,
    .reloadInputMode = PWM_LHS_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = PWM_LHS_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = PWM_LHS_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = PWM_LHS_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PWM_LHS_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 2U,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_tcpwm_pwm_config_t PWM_RHS_config =
{
    .pwmMode = CY_TCPWM_PWM_MODE_PWM,
    .clockPrescaler = CY_TCPWM_PWM_PRESCALER_DIVBY_1,
    .pwmAlignment = CY_TCPWM_PWM_LEFT_ALIGN,
    .deadTimeClocks = 0,
    .runMode = CY_TCPWM_PWM_CONTINUOUS,
    .period0 = 1000,
    .period1 = 32768,
    .enablePeriodSwap = false,
    .compare0 = 0,
    .compare1 = 0,
    .enableCompareSwap = true,
    .interruptSources = CY_TCPWM_INT_NONE,
    .invertPWMOut = CY_TCPWM_PWM_INVERT_DISABLE,
    .invertPWMOutN = CY_TCPWM_PWM_INVERT_DISABLE,
    .killMode = CY_TCPWM_PWM_STOP_ON_KILL,
    .swapInputMode = CY_TCPWM_INPUT_RISINGEDGE,
    .swapInput = TCPWM_CNT4_CAPTURE_VALUE,
    .reloadInputMode = PWM_RHS_INPUT_DISABLED & 0x3U,
    .reloadInput = CY_TCPWM_INPUT_0,
    .startInputMode = PWM_RHS_INPUT_DISABLED & 0x3U,
    .startInput = CY_TCPWM_INPUT_0,
    .killInputMode = PWM_RHS_INPUT_DISABLED & 0x3U,
    .killInput = CY_TCPWM_INPUT_0,
    .countInputMode = PWM_RHS_INPUT_DISABLED & 0x3U,
    .countInput = CY_TCPWM_INPUT_1,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PWM_RHS_obj =
{
    .type = CYHAL_RSC_TCPWM,
    .block_num = 0U,
    .channel_num = 4U,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void)
{
    Cy_CTB_SetPumpClkSource(CTBM0, CY_CTB_CLK_PUMP_HF_DIV_2);
    SAR_MUX_SWITCH0(SAR0) = CY_SAR_MUX_FW_VSSA_VMINUS;
    SAR_MUX_SWITCH_HW_CTRL(SAR0) |= CY_SAR_MUX_HW_CTRL_VSSA;
    Cy_SysClk_PeriphAssignDivider(PCLK_PASS0_CLOCK_SAR, CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphAssignDivider(PCLK_SCB1_CLOCK, CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS0, CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS1, CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS2, CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphAssignDivider(PCLK_TCPWM_CLOCKS4, CY_SYSCLK_DIV_16_BIT, 2U);
}
void reserve_cycfg_peripherals(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&POT_ADC_obj);
    cyhal_hwmgr_reserve(&DBG_UART_obj);
    cyhal_hwmgr_reserve(&QUAD_DEC_obj);
    cyhal_hwmgr_reserve(&SERVO_DEC_obj);
    cyhal_hwmgr_reserve(&PWM_LHS_obj);
    cyhal_hwmgr_reserve(&PWM_RHS_obj);
#endif /* defined (CY_USING_HAL) */
}
