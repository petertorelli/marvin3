/*******************************************************************************
 * File Name: cycfg_clocks.c
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

#include "cycfg_clocks.h"

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t UART_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = UART_CLK_HW,
    .channel_num = UART_CLK_NUM,
};
const cyhal_resource_inst_t QUAD_SERVO_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = QUAD_SERVO_CLK_HW,
    .channel_num = QUAD_SERVO_CLK_NUM,
};
const cyhal_resource_inst_t PWM_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = PWM_CLK_HW,
    .channel_num = PWM_CLK_NUM,
};
const cyhal_resource_inst_t SAR_CLK_obj =
{
    .type = CYHAL_RSC_CLOCK,
    .block_num = SAR_CLK_HW,
    .channel_num = SAR_CLK_NUM,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_clocks(void)
{
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 0U, 51U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 0U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 1U, 47U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 1U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 2U, 1U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 2U);
    Cy_SysClk_PeriphDisableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
    Cy_SysClk_PeriphSetDivider(CY_SYSCLK_DIV_16_BIT, 3U, 5U);
    Cy_SysClk_PeriphEnableDivider(CY_SYSCLK_DIV_16_BIT, 3U);
}
void reserve_cycfg_clocks(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&UART_CLK_obj);
    cyhal_hwmgr_reserve(&QUAD_SERVO_CLK_obj);
    cyhal_hwmgr_reserve(&PWM_CLK_obj);
    cyhal_hwmgr_reserve(&SAR_CLK_obj);
#endif /* defined (CY_USING_HAL) */
}
