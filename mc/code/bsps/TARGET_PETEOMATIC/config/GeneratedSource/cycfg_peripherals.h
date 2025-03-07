/*******************************************************************************
 * File Name: cycfg_peripherals.h
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

#if !defined(CYCFG_PERIPHERALS_H)
#define CYCFG_PERIPHERALS_H

#include "cycfg_notices.h"
#include "cy_ctb.h"
#include "cy_sar.h"
#include "cycfg_routing.h"
#include "cy_sysclk.h"
#include "cy_scb_uart.h"
#include "cy_tcpwm_quaddec.h"
#include "cy_tcpwm_counter.h"
#include "cy_tcpwm_pwm.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define pass_0_ENABLED 1U
#define POT_ADC_ENABLED 1U
#define POT_ADC_HW SAR0
#define POT_ADC_IRQ pass_0_interrupt_sar_IRQn
#define POT_ADC_VREF_MV 5000UL
#define DBG_UART_ENABLED 1U
#define DBG_UART_HW SCB1
#define DBG_UART_IRQ scb_1_interrupt_IRQn
#define QUAD_DEC_ENABLED 1U
#define QUAD_DEC_HW TCPWM
#define QUAD_DEC_NUM 0UL
#define QUAD_DEC_MASK (1UL << 0)
#define SERVO_DEC_ENABLED 1U
#define SERVO_DEC_HW TCPWM
#define SERVO_DEC_NUM 1UL
#define SERVO_DEC_MASK (1UL << 1)
#define SERVO_DEC_IRQ tcpwm_interrupts_1_IRQn
#define PWM_LHS_ENABLED 1U
#define PWM_LHS_HW TCPWM
#define PWM_LHS_NUM 2UL
#define PWM_LHS_MASK (1UL << 2)
#define PWM_RHS_ENABLED 1U
#define PWM_RHS_HW TCPWM
#define PWM_RHS_NUM 4UL
#define PWM_RHS_MASK (1UL << 4)

extern const cy_stc_sar_channel_config_t POT_ADC_channel_0_config;
extern const cy_stc_sar_config_t POT_ADC_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t POT_ADC_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_scb_uart_config_t DBG_UART_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DBG_UART_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_quaddec_config_t QUAD_DEC_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t QUAD_DEC_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_counter_config_t SERVO_DEC_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SERVO_DEC_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_pwm_config_t PWM_LHS_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PWM_LHS_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_tcpwm_pwm_config_t PWM_RHS_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PWM_RHS_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_peripherals(void);
void reserve_cycfg_peripherals(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PERIPHERALS_H */
