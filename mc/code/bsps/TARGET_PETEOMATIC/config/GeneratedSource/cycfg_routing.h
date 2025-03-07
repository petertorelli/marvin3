/*******************************************************************************
 * File Name: cycfg_routing.h
 *
 * Description:
 * Establishes all necessary connections between hardware elements.
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

#if !defined(CYCFG_ROUTING_H)
#define CYCFG_ROUTING_H

#include "cycfg_notices.h"

#if defined(__cplusplus)
extern "C" {
#endif /* defined(__cplusplus) */

#define ioss_0_port_0_pin_0_HSIOM P0_0_TCPWM_TR_IN0
#define ioss_0_port_1_pin_0_HSIOM P1_0_TCPWM_LINE2
#define ioss_0_port_1_pin_2_HSIOM P1_2_TCPWM_TR_IN2
#define ioss_0_port_1_pin_3_HSIOM P1_3_TCPWM_TR_IN3
#define ioss_0_port_2_pin_0_HSIOM P2_0_TCPWM_LINE4
#define ioss_0_port_2_pin_1_ANALOG P2_1_PASS0_SARMUX_PADS1
#define ioss_0_port_3_pin_0_HSIOM P3_0_SCB1_UART_RX
#define ioss_0_port_3_pin_1_HSIOM P3_1_SCB1_UART_TX
#define ioss_0_port_3_pin_2_HSIOM P3_2_CPUSS_SWD_DATA
#define ioss_0_port_3_pin_3_HSIOM P3_3_CPUSS_SWD_CLK
#define PWM_LHS_capture_0_TRIGGER_OUT TRIG0_OUT_TCPWM_TR_IN12
#define PWM_LHS_tr_overflow_0_TRIGGER_IN TRIG0_IN_TCPWM_TR_OVERFLOW2
#define PWM_RHS_capture_0_TRIGGER_OUT TRIG0_OUT_TCPWM_TR_IN13
#define PWM_RHS_tr_overflow_0_TRIGGER_IN TRIG0_IN_TCPWM_TR_OVERFLOW4
#define SAR0_VPLUS0_PIN 1
#define SAR0_VPLUS0_PORT 0
#define TCPWM_CNT0_COUNT_VALUE 0x4
#define TCPWM_CNT0_START_VALUE 0x5
#define TCPWM_CNT1_CAPTURE_VALUE 0x2
#define TCPWM_CNT1_RELOAD_VALUE 0x2
#define TCPWM_CNT1_START_VALUE 0x2
#define TCPWM_CNT1_STOP_VALUE 0x2
#define TCPWM_CNT2_CAPTURE_VALUE 0xe
#define TCPWM_CNT4_CAPTURE_VALUE 0xf

void init_cycfg_routing(void);

#if defined(__cplusplus)
}
#endif /* defined(__cplusplus) */

#endif /* CYCFG_ROUTING_H */
