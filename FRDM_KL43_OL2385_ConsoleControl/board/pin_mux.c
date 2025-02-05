/*
 * Copyright (c) 2015, Freescale Semiconductor, Inc.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *
 * o Redistributions of source code must retain the above copyright notice, this list
 *   of conditions and the following disclaimer.
 *
 * o Redistributions in binary form must reproduce the above copyright notice, this
 *   list of conditions and the following disclaimer in the documentation and/or
 *   other materials provided with the distribution.
 *
 * o Neither the name of Freescale Semiconductor, Inc. nor the names of its
 *   contributors may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON
 * ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include "fsl_common.h"
#include "fsl_port.h"
#include "pin_mux.h"

/*******************************************************************************
 * Code
 ******************************************************************************/

/* Function Name : BOARD_InitPins */
void BOARD_InitPins(void)
{
    /* Ungate the port clock */
    CLOCK_EnableClock(kCLOCK_PortA);
    CLOCK_EnableClock(kCLOCK_PortD);
    CLOCK_EnableClock(kCLOCK_PortE);
    CLOCK_EnableClock(kCLOCK_Uart2);

    CLOCK_EnableClock(kCLOCK_BusClk);

    /* Initialize LPUART0 pins below */
    /* Affects PORTA_PCR1 register */
    PORT_SetPinMux(PORTA, 1u, kPORT_MuxAlt2);
    /* Affects PORTA_PCR2 register */
    PORT_SetPinMux(PORTA, 2u, kPORT_MuxAlt2);

    /* Sigfox SPI configuration. */
    PORT_SetPinMux(PORTD, 5U, kPORT_MuxAlt2);               /* CLK */
    PORT_SetPinMux(PORTD, 6U, kPORT_MuxAlt2);               /* MOSI */
    PORT_SetPinMux(PORTD, 7U, kPORT_MuxAlt2);               /* MISO */
    PORT_SetPinMux(SF_CS_PORT, SF_CS_PIN, kPORT_MuxAsGpio); /* CS pin. */

    /* Sigfox ACK pin. */
    PORT_SetPinMux(SF_ACK_PORT, SF_ACK_PIN, kPORT_MuxAsGpio);

    PORT_SetPinMux(PORTE, 22u, kPORT_MuxAlt4);            /* PORTD2 (pin 59) is configured as UART2_RX */
    PORT_SetPinMux(PORTE, 23u, kPORT_MuxAlt4);            /* PORTD3 (pin 60) is configured as UART2_TX */
}
