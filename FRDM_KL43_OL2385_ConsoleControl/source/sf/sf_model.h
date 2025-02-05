/*
 * Copyright (c) 2016, NXP B.V.
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
 * o Neither the name of  NXP B.V. nor the names of its
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

/*!
 * @file sf_model.h
 *
 * SIGFOX model selection. Supported models are OL2361 and OL2385.
 * This header is used to determine which features of this driver will be used
 * or not.
 *
 */

#ifndef SOURCE_SF_MODEL_H_
#define SOURCE_SF_MODEL_H_

/*******************************************************************************
 * Defines
 ******************************************************************************/
/*!
 * @addtogroup models_group
 * @{
 */

/*! @brief SIGFOX models supported by this driver. */

#define SF_MODEL_OL2361             1U  /*!< Model OL2361. */
#define SF_MODEL_OL2385             2U  /*!< Model OL2385. */

/*! @brief Selection of SIGFOX device model. */
#define SF_MODEL                    SF_MODEL_OL2385

#if ((SF_MODEL != SF_MODEL_OL2361) && (SF_MODEL != SF_MODEL_OL2385))
#warning SF_MODEL does not comply with supported models, OL2385 selected by default.
#undef SF_MODEL
#define SF_MODEL SF_MODEL_OL2385
#endif

#if (SF_MODEL == SF_MODEL_OL2361)
#pragma message("Model OL2361 is selected.")
#elif (SF_MODEL == SF_MODEL_OL2385)
#pragma message("Model OL2385 is selected.")
#endif /* END of model check. */

/*! @} */
#endif /* SOURCE_SF_MODEL_H_ */

/*******************************************************************************
 * EOF
 ******************************************************************************/

