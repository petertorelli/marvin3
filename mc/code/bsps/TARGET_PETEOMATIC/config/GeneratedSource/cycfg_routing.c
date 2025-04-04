/*******************************************************************************
 * File Name: cycfg_routing.c
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

#include "cycfg_routing.h"
#include "cy_trigmux.h"
#include "cy_device_headers.h"

void init_cycfg_routing(void)
{
    Cy_TrigMux_Connect(TRIG0_IN_TCPWM_TR_OVERFLOW2, TRIG0_OUT_TCPWM_TR_IN12);
    Cy_TrigMux_Connect(TRIG0_IN_TCPWM_TR_OVERFLOW4, TRIG0_OUT_TCPWM_TR_IN13);
    SAR0->MUX_SWITCH0 = SAR_MUX_SWITCH0_MUX_FW_P1_VPLUS_Msk;
    SAR0->MUX_SWITCH_HW_CTRL = SAR_MUX_SWITCH_HW_CTRL_MUX_HW_CTRL_P1_Msk;
    SAR0->CTRL |= SAR_CTRL_ENABLED_Msk;
}
