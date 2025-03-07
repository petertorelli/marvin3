/*******************************************************************************
 * File Name: cycfg_pins.c
 *
 * Description:
 * Pin configuration
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

#include "cycfg_pins.h"

const cy_stc_gpio_pin_config_t SERVO_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = SERVO_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SERVO_IN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SERVO_IN_PORT_NUM,
    .channel_num = SERVO_IN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PWM_LHS_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PWM_LHS_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PWM_LHS_OUT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PWM_LHS_OUT_PORT_NUM,
    .channel_num = PWM_LHS_OUT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t QUAD_COUNT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = QUAD_COUNT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t QUAD_COUNT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = QUAD_COUNT_PORT_NUM,
    .channel_num = QUAD_COUNT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t QUAD_START_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = QUAD_START_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t QUAD_START_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = QUAD_START_PORT_NUM,
    .channel_num = QUAD_START_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t DBG_LED_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = DBG_LED_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t DBG_LED_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = DBG_LED_PORT_NUM,
    .channel_num = DBG_LED_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t PWM_RHS_OUT_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = PWM_RHS_OUT_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t PWM_RHS_OUT_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = PWM_RHS_OUT_PORT_NUM,
    .channel_num = PWM_RHS_OUT_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t ADC_IN_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_ANALOG,
    .hsiom = ADC_IN_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t ADC_IN_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = ADC_IN_PORT_NUM,
    .channel_num = ADC_IN_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t UART_RX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_HIGHZ,
    .hsiom = UART_RX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t UART_RX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = UART_RX_PORT_NUM,
    .channel_num = UART_RX_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t UART_TX_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG_IN_OFF,
    .hsiom = UART_TX_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t UART_TX_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = UART_TX_PORT_NUM,
    .channel_num = UART_TX_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t SWDIO_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWDIO_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SWDIO_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SWDIO_PORT_NUM,
    .channel_num = SWDIO_PIN,
};
#endif /* defined (CY_USING_HAL) */

const cy_stc_gpio_pin_config_t SWCLK_config =
{
    .outVal = 1,
    .driveMode = CY_GPIO_DM_STRONG,
    .hsiom = SWCLK_HSIOM,
    .intEdge = CY_GPIO_INTR_DISABLE,
    .vtrip = CY_GPIO_VTRIP_CMOS,
    .slewRate = CY_GPIO_SLEW_FAST,
};

#if defined (CY_USING_HAL)
const cyhal_resource_inst_t SWCLK_obj =
{
    .type = CYHAL_RSC_GPIO,
    .block_num = SWCLK_PORT_NUM,
    .channel_num = SWCLK_PIN,
};
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void)
{
    Cy_GPIO_Pin_Init(SERVO_IN_PORT, SERVO_IN_PIN, &SERVO_IN_config);
    Cy_GPIO_Pin_Init(PWM_LHS_OUT_PORT, PWM_LHS_OUT_PIN, &PWM_LHS_OUT_config);
    Cy_GPIO_Pin_Init(QUAD_COUNT_PORT, QUAD_COUNT_PIN, &QUAD_COUNT_config);
    Cy_GPIO_Pin_Init(QUAD_START_PORT, QUAD_START_PIN, &QUAD_START_config);
    Cy_GPIO_Pin_Init(DBG_LED_PORT, DBG_LED_PIN, &DBG_LED_config);
    Cy_GPIO_Pin_Init(PWM_RHS_OUT_PORT, PWM_RHS_OUT_PIN, &PWM_RHS_OUT_config);
    Cy_GPIO_Pin_Init(ADC_IN_PORT, ADC_IN_PIN, &ADC_IN_config);
    Cy_GPIO_Pin_Init(UART_RX_PORT, UART_RX_PIN, &UART_RX_config);
    Cy_GPIO_Pin_Init(UART_TX_PORT, UART_TX_PIN, &UART_TX_config);
    Cy_GPIO_Pin_Init(SWDIO_PORT, SWDIO_PIN, &SWDIO_config);
    Cy_GPIO_Pin_Init(SWCLK_PORT, SWCLK_PIN, &SWCLK_config);
}
void reserve_cycfg_pins(void)
{
#if defined (CY_USING_HAL)
    cyhal_hwmgr_reserve(&SERVO_IN_obj);
    cyhal_hwmgr_reserve(&PWM_LHS_OUT_obj);
    cyhal_hwmgr_reserve(&QUAD_COUNT_obj);
    cyhal_hwmgr_reserve(&QUAD_START_obj);
    cyhal_hwmgr_reserve(&DBG_LED_obj);
    cyhal_hwmgr_reserve(&PWM_RHS_OUT_obj);
    cyhal_hwmgr_reserve(&ADC_IN_obj);
    cyhal_hwmgr_reserve(&UART_RX_obj);
    cyhal_hwmgr_reserve(&UART_TX_obj);
    cyhal_hwmgr_reserve(&SWDIO_obj);
    cyhal_hwmgr_reserve(&SWCLK_obj);
#endif /* defined (CY_USING_HAL) */
}
