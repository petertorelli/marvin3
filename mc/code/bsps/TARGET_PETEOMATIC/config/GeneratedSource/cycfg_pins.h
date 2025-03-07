/*******************************************************************************
 * File Name: cycfg_pins.h
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

#if !defined(CYCFG_PINS_H)
#define CYCFG_PINS_H

#include "cycfg_notices.h"
#include "cy_gpio.h"
#include "cycfg_routing.h"

#if defined (CY_USING_HAL)
#include "cyhal_hwmgr.h"
#endif /* defined (CY_USING_HAL) */

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define SERVO_IN_ENABLED 1U
#define SERVO_IN_PORT GPIO_PRT0
#define SERVO_IN_PORT_NUM 0U
#define SERVO_IN_PIN 0U
#define SERVO_IN_NUM 0U
#define SERVO_IN_DRIVEMODE CY_GPIO_DM_HIGHZ
#define SERVO_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_0_pin_0_HSIOM
    #define ioss_0_port_0_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define SERVO_IN_HSIOM ioss_0_port_0_pin_0_HSIOM
#define SERVO_IN_IRQ ioss_interrupts_gpio_0_IRQn

#if defined (CY_USING_HAL)
#define SERVO_IN_HAL_PORT_PIN P0_0
#define SERVO_IN P0_0
#define SERVO_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define SERVO_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define SERVO_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define PWM_LHS_OUT_ENABLED 1U
#define PWM_LHS_OUT_PORT GPIO_PRT1
#define PWM_LHS_OUT_PORT_NUM 1U
#define PWM_LHS_OUT_PIN 0U
#define PWM_LHS_OUT_NUM 0U
#define PWM_LHS_OUT_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_LHS_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_0_HSIOM
    #define ioss_0_port_1_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_LHS_OUT_HSIOM ioss_0_port_1_pin_0_HSIOM
#define PWM_LHS_OUT_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define PWM_LHS_OUT_HAL_PORT_PIN P1_0
#define PWM_LHS_OUT P1_0
#define PWM_LHS_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PWM_LHS_OUT_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PWM_LHS_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define QUAD_COUNT_ENABLED 1U
#define QUAD_COUNT_PORT GPIO_PRT1
#define QUAD_COUNT_PORT_NUM 1U
#define QUAD_COUNT_PIN 2U
#define QUAD_COUNT_NUM 2U
#define QUAD_COUNT_DRIVEMODE CY_GPIO_DM_HIGHZ
#define QUAD_COUNT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_2_HSIOM
    #define ioss_0_port_1_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define QUAD_COUNT_HSIOM ioss_0_port_1_pin_2_HSIOM
#define QUAD_COUNT_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define QUAD_COUNT_HAL_PORT_PIN P1_2
#define QUAD_COUNT P1_2
#define QUAD_COUNT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define QUAD_COUNT_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define QUAD_COUNT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define QUAD_START_ENABLED 1U
#define QUAD_START_PORT GPIO_PRT1
#define QUAD_START_PORT_NUM 1U
#define QUAD_START_PIN 3U
#define QUAD_START_NUM 3U
#define QUAD_START_DRIVEMODE CY_GPIO_DM_HIGHZ
#define QUAD_START_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_3_HSIOM
    #define ioss_0_port_1_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define QUAD_START_HSIOM ioss_0_port_1_pin_3_HSIOM
#define QUAD_START_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define QUAD_START_HAL_PORT_PIN P1_3
#define QUAD_START P1_3
#define QUAD_START_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define QUAD_START_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define QUAD_START_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define DBG_LED_ENABLED 1U
#define DBG_LED_PORT GPIO_PRT1
#define DBG_LED_PORT_NUM 1U
#define DBG_LED_PIN 7U
#define DBG_LED_NUM 7U
#define DBG_LED_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define DBG_LED_INIT_DRIVESTATE 1
#ifndef ioss_0_port_1_pin_7_HSIOM
    #define ioss_0_port_1_pin_7_HSIOM HSIOM_SEL_GPIO
#endif
#define DBG_LED_HSIOM ioss_0_port_1_pin_7_HSIOM
#define DBG_LED_IRQ ioss_interrupts_gpio_1_IRQn

#if defined (CY_USING_HAL)
#define DBG_LED_HAL_PORT_PIN P1_7
#define DBG_LED P1_7
#define DBG_LED_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define DBG_LED_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define DBG_LED_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define PWM_RHS_OUT_ENABLED 1U
#define PWM_RHS_OUT_PORT GPIO_PRT2
#define PWM_RHS_OUT_PORT_NUM 2U
#define PWM_RHS_OUT_PIN 0U
#define PWM_RHS_OUT_NUM 0U
#define PWM_RHS_OUT_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define PWM_RHS_OUT_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_0_HSIOM
    #define ioss_0_port_2_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define PWM_RHS_OUT_HSIOM ioss_0_port_2_pin_0_HSIOM
#define PWM_RHS_OUT_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define PWM_RHS_OUT_HAL_PORT_PIN P2_0
#define PWM_RHS_OUT P2_0
#define PWM_RHS_OUT_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define PWM_RHS_OUT_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define PWM_RHS_OUT_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define ADC_IN_ENABLED 1U
#define ADC_IN_PORT GPIO_PRT2
#define ADC_IN_PORT_NUM 2U
#define ADC_IN_PIN 1U
#define ADC_IN_NUM 1U
#define ADC_IN_DRIVEMODE CY_GPIO_DM_ANALOG
#define ADC_IN_INIT_DRIVESTATE 1
#ifndef ioss_0_port_2_pin_1_HSIOM
    #define ioss_0_port_2_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define ADC_IN_HSIOM ioss_0_port_2_pin_1_HSIOM
#define ADC_IN_IRQ ioss_interrupts_gpio_2_IRQn

#if defined (CY_USING_HAL)
#define ADC_IN_HAL_PORT_PIN P2_1
#define ADC_IN P2_1
#define ADC_IN_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define ADC_IN_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define ADC_IN_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_ANALOG
#endif /* defined (CY_USING_HAL) */

#define UART_RX_ENABLED 1U
#define UART_RX_PORT GPIO_PRT3
#define UART_RX_PORT_NUM 3U
#define UART_RX_PIN 0U
#define UART_RX_NUM 0U
#define UART_RX_DRIVEMODE CY_GPIO_DM_HIGHZ
#define UART_RX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_0_HSIOM
    #define ioss_0_port_3_pin_0_HSIOM HSIOM_SEL_GPIO
#endif
#define UART_RX_HSIOM ioss_0_port_3_pin_0_HSIOM
#define UART_RX_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define UART_RX_HAL_PORT_PIN P3_0
#define UART_RX P3_0
#define UART_RX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define UART_RX_HAL_DIR CYHAL_GPIO_DIR_INPUT 
#define UART_RX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_NONE
#endif /* defined (CY_USING_HAL) */

#define UART_TX_ENABLED 1U
#define UART_TX_PORT GPIO_PRT3
#define UART_TX_PORT_NUM 3U
#define UART_TX_PIN 1U
#define UART_TX_NUM 1U
#define UART_TX_DRIVEMODE CY_GPIO_DM_STRONG_IN_OFF
#define UART_TX_INIT_DRIVESTATE 1
#ifndef ioss_0_port_3_pin_1_HSIOM
    #define ioss_0_port_3_pin_1_HSIOM HSIOM_SEL_GPIO
#endif
#define UART_TX_HSIOM ioss_0_port_3_pin_1_HSIOM
#define UART_TX_IRQ ioss_interrupts_gpio_3_IRQn

#if defined (CY_USING_HAL)
#define UART_TX_HAL_PORT_PIN P3_1
#define UART_TX P3_1
#define UART_TX_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define UART_TX_HAL_DIR CYHAL_GPIO_DIR_OUTPUT 
#define UART_TX_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#endif /* defined (CY_USING_HAL) */

#define SWDIO_ENABLED 1U
#define CYBSP_SWDIO_ENABLED SWDIO_ENABLED
#define SWDIO_PORT GPIO_PRT3
#define CYBSP_SWDIO_PORT SWDIO_PORT
#define SWDIO_PORT_NUM 3U
#define CYBSP_SWDIO_PORT_NUM SWDIO_PORT_NUM
#define SWDIO_PIN 2U
#define CYBSP_SWDIO_PIN SWDIO_PIN
#define SWDIO_NUM 2U
#define CYBSP_SWDIO_NUM SWDIO_NUM
#define SWDIO_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWDIO_DRIVEMODE SWDIO_DRIVEMODE
#define SWDIO_INIT_DRIVESTATE 1
#define CYBSP_SWDIO_INIT_DRIVESTATE SWDIO_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_2_HSIOM
    #define ioss_0_port_3_pin_2_HSIOM HSIOM_SEL_GPIO
#endif
#define SWDIO_HSIOM ioss_0_port_3_pin_2_HSIOM
#define CYBSP_SWDIO_HSIOM SWDIO_HSIOM
#define SWDIO_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWDIO_IRQ SWDIO_IRQ

#if defined (CY_USING_HAL)
#define SWDIO_HAL_PORT_PIN P3_2
#define CYBSP_SWDIO_HAL_PORT_PIN SWDIO_HAL_PORT_PIN
#define SWDIO P3_2
#define CYBSP_SWDIO SWDIO
#define SWDIO_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWDIO_HAL_IRQ SWDIO_HAL_IRQ
#define SWDIO_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWDIO_HAL_DIR SWDIO_HAL_DIR
#define SWDIO_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_SWDIO_HAL_DRIVEMODE SWDIO_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

#define SWCLK_ENABLED 1U
#define CYBSP_SWCLK_ENABLED SWCLK_ENABLED
#define SWCLK_PORT GPIO_PRT3
#define CYBSP_SWCLK_PORT SWCLK_PORT
#define SWCLK_PORT_NUM 3U
#define CYBSP_SWCLK_PORT_NUM SWCLK_PORT_NUM
#define SWCLK_PIN 3U
#define CYBSP_SWCLK_PIN SWCLK_PIN
#define SWCLK_NUM 3U
#define CYBSP_SWCLK_NUM SWCLK_NUM
#define SWCLK_DRIVEMODE CY_GPIO_DM_STRONG
#define CYBSP_SWCLK_DRIVEMODE SWCLK_DRIVEMODE
#define SWCLK_INIT_DRIVESTATE 1
#define CYBSP_SWCLK_INIT_DRIVESTATE SWCLK_INIT_DRIVESTATE
#ifndef ioss_0_port_3_pin_3_HSIOM
    #define ioss_0_port_3_pin_3_HSIOM HSIOM_SEL_GPIO
#endif
#define SWCLK_HSIOM ioss_0_port_3_pin_3_HSIOM
#define CYBSP_SWCLK_HSIOM SWCLK_HSIOM
#define SWCLK_IRQ ioss_interrupts_gpio_3_IRQn
#define CYBSP_SWCLK_IRQ SWCLK_IRQ

#if defined (CY_USING_HAL)
#define SWCLK_HAL_PORT_PIN P3_3
#define CYBSP_SWCLK_HAL_PORT_PIN SWCLK_HAL_PORT_PIN
#define SWCLK P3_3
#define CYBSP_SWCLK SWCLK
#define SWCLK_HAL_IRQ CYHAL_GPIO_IRQ_NONE
#define CYBSP_SWCLK_HAL_IRQ SWCLK_HAL_IRQ
#define SWCLK_HAL_DIR CYHAL_GPIO_DIR_BIDIRECTIONAL 
#define CYBSP_SWCLK_HAL_DIR SWCLK_HAL_DIR
#define SWCLK_HAL_DRIVEMODE CYHAL_GPIO_DRIVE_STRONG
#define CYBSP_SWCLK_HAL_DRIVEMODE SWCLK_HAL_DRIVEMODE
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SERVO_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SERVO_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PWM_LHS_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PWM_LHS_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t QUAD_COUNT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t QUAD_COUNT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t QUAD_START_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t QUAD_START_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t DBG_LED_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t DBG_LED_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t PWM_RHS_OUT_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t PWM_RHS_OUT_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t ADC_IN_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t ADC_IN_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t UART_RX_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t UART_RX_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t UART_TX_config;

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t UART_TX_obj;
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWDIO_config;

#define CYBSP_SWDIO_config SWDIO_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWDIO_obj;
#define CYBSP_SWDIO_obj SWDIO_obj
#endif /* defined (CY_USING_HAL) */

extern const cy_stc_gpio_pin_config_t SWCLK_config;

#define CYBSP_SWCLK_config SWCLK_config

#if defined (CY_USING_HAL)
extern const cyhal_resource_inst_t SWCLK_obj;
#define CYBSP_SWCLK_obj SWCLK_obj
#endif /* defined (CY_USING_HAL) */

void init_cycfg_pins(void);
void reserve_cycfg_pins(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_PINS_H */
