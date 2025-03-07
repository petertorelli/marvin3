/*******************************************************************************
 * File Name: cycfg_clocks.h
 *
 * Description:
 * Clock configuration
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

#if !defined(CYCFG_CLOCKS_H)
#define CYCFG_CLOCKS_H

#include "cycfg_notices.h"
#include "cy_sysclk.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define UART_CLK_ENABLED 1U
#define UART_CLK_HW CY_SYSCLK_DIV_16_BIT
#define UART_CLK_NUM 0U
#define QUAD_SERVO_CLK_ENABLED 1U
#define QUAD_SERVO_CLK_HW CY_SYSCLK_DIV_16_BIT
#define QUAD_SERVO_CLK_NUM 1U
#define PWM_CLK_ENABLED 1U
#define PWM_CLK_HW CY_SYSCLK_DIV_16_BIT
#define PWM_CLK_NUM 2U
#define SAR_CLK_ENABLED 1U
#define SAR_CLK_HW CY_SYSCLK_DIV_16_BIT
#define SAR_CLK_NUM 3U

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t UART_CLK_obj;
extern const cyhal_resource_inst_t QUAD_SERVO_CLK_obj;
extern const cyhal_resource_inst_t PWM_CLK_obj;
extern const cyhal_resource_inst_t SAR_CLK_obj;
#endif /* defined (CY_USING_HAL) */

void init_cycfg_clocks(void);
void reserve_cycfg_clocks(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_CLOCKS_H */
