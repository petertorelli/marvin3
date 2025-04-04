#ifndef PIDCTL_H_
#define PIDCTL_H_

#include <stdbool.h>
#include <stdint.h>

typedef struct pidctl_s
{
    float target;
    float kp;
    float ki;
    float kd;
    float ymin;
    float ymax;
    uint32_t period_ms;
    float error;

    float _acc;
    float _xlast;
    uint32_t _tlast_ms;

    float _prev_error;
} pidctl_t;

void  pidctl_prime(pidctl_t *p);
bool  pidctl_needs_update(pidctl_t *p);
float pidctl_compute(pidctl_t *p, float _x);

#define CLAMP(x, min, max) ((x > max) ? max : ((x < min) ? min : x))

#endif /* PIDCTL_H_ */
