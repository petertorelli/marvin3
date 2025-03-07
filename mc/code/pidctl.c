#include "pidctl.h"

uint32_t current_systick(void);

// This depends on your BSP
#define TICKS_PER_MILLISECOND 1u
#define TICK_FUNCTION    current_systick()

// TODO: make tick function assignamble on init, and create init()

static uint32_t
_get_tick_ms(void)
{
    return TICK_FUNCTION / TICKS_PER_MILLISECOND;
}

bool
pidctl_needs_update(pidctl_t *p)
{
    return (_get_tick_ms() - p->_tlast_ms) >= p->period_ms;
}

void
pidctl_prime(pidctl_t *p)
{
    p->_tlast_ms = _get_tick_ms();
}

float
pidctl_compute(pidctl_t *p, float _x)
{
    float d;
    float y;

    p->error     = p->target - _x;
    p->_acc      = p->_acc + p->ki * p->error;
    p->_acc      = CLAMP(p->_acc, p->ymin, p->ymax);
    d            = _x - p->_xlast;
    y            = (p->kp * p->error) + p->_acc - (p->kd * d);
    y            = CLAMP(y, p->ymin, p->ymax);
    p->_xlast    = _x;
    p->_tlast_ms = _get_tick_ms();

    return y;
}
