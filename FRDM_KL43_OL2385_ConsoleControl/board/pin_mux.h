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

#ifndef _PIN_MUX_H_
#define _PIN_MUX_H_

#include "fsl_common.h"
#include "board.h"

/*******************************************************************************
 * OL2385 Freedom board connection to the KL43Z freedom board
 *
 * Pin function  | OL2385 pos. | FRDM-KL43 pin | FRDM-KL43 pos.
 * -----------------------------------------------------------------------------
 * CLK           | P14         | PTD5          | J2-12
 * MISO          | P13         | PTD7          | J2-10
 * MOSI          | P16         | PTD6          | J2-8
 * CS            | P15         | PTD4          | J2-6
 * ACK           | P17         | PTD2          | J2-4
 *******************************************************************************/

/*! @name ACK GPIO pin
 * GPIO pin used by Sigfox device
 * @} */
#define SF_ACK_INST                 instanceD
#define SF_ACK_GPIO                 GPIOD
#define SF_ACK_PORT                 PORTD
#define SF_ACK_PIN                  2U
/*! @} */

/*! @name CS GPIO pin
 * GPIO pin used by Sigfox device
 * @} */
#define SF_CS_INST                 instanceD
#define SF_CS_GPIO                 GPIOD
#define SF_CS_PORT                 PORTD
#define SF_CS_PIN                  4U
/*! @} */

/*! SPI used by Sigfox device (SPI 1). */
#define SF_SPI_INST                1U

#if defined(__cplusplus)
extern "C" {
#endif /* __cplusplus*/
       /*!
        * @brief configure all pins for this demo/example
        *
        */
void BOARD_InitPins(void);

#if defined(__cplusplus)
}
#endif /* __cplusplus*/

#endif /* _PIN_MUX_H_ */
