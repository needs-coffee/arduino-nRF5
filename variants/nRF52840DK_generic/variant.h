/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.
  Copyright (c) 2016 Sandeep Mistry All right reserved.
  Copyright (c) 2024 Joe Campbell All right reserved.
  
  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.
  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.
  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef _VARIANT_NRF52840_GENERIC_DK_
#define _VARIANT_NRF52840_GENERIC_DK_

/** Master clock frequency */
#define VARIANT_MCK       (64000000ul)

/*----------------------------------------------------------------------------
 *        Headers
 *----------------------------------------------------------------------------*/

#include "WVariant.h"

#ifdef __cplusplus
extern "C"
{
#endif // __cplusplus

// Number of pins defined in PinDescription array
#define PINS_COUNT           (48u)
#define NUM_DIGITAL_PINS     (48u)
#define NUM_ANALOG_INPUTS    (6u)
#define NUM_ANALOG_OUTPUTS   (0u)

// LEDs
#define PIN_LED1                (13)
#define PIN_LED2                (14)
#define PIN_LED3                (15)
#define PIN_LED4                (16)
#define LED_BUILTIN             PIN_LED1

// Buttons
#define PIN_BUTTON1             (11)
#define PIN_BUTTON2             (12)
#define PIN_BUTTON3             (24)
#define PIN_BUTTON4             (25)

#define PIN_NFC_1	            (9)
#define PIN_NFC_2	            (10)

/*
 * Analog pins
 */
#define PIN_A0               (3)
#define PIN_A1               (4)
#define PIN_A2               (28)
#define PIN_A3               (29)
#define PIN_A4               (30)
#define PIN_A5               (31)
#define PIN_A6               (5) /* AIN3 (P0.05)        */
#define PIN_A7               (2) /* AIN0 (P0.02) / AREF */

static const uint8_t A0  = PIN_A0 ; // AIN1
static const uint8_t A1  = PIN_A1 ; // AIN2
static const uint8_t A2  = PIN_A2 ; // AIN4
static const uint8_t A3  = PIN_A3 ; // AIN5
static const uint8_t A4  = PIN_A4 ; // AIN6
static const uint8_t A5  = PIN_A5 ; // AIN7
static const uint8_t A6  = PIN_A6 ; // AIN3 (P0.05)
static const uint8_t A7  = PIN_A7 ; // AIN0 (P0.02) / AREF
#define ADC_RESOLUTION    14

// Other pins
#define PIN_AREF           (2)
static const uint8_t AREF = PIN_AREF;

/*
 * Serial interfaces
 */
// Serial
#define PIN_SERIAL_RX       (8)
#define PIN_SERIAL_TX       (6)

/*
 * SPI Interfaces
 */
#define SPI_INTERFACES_COUNT 1

#define PIN_SPI_MISO         (46)
#define PIN_SPI_MOSI         (45)
#define PIN_SPI_SCK          (47)

static const uint8_t SS   = 44 ;
static const uint8_t MOSI = PIN_SPI_MOSI ;
static const uint8_t MISO = PIN_SPI_MISO ;
static const uint8_t SCK  = PIN_SPI_SCK ;

/*
 * Wire Interfaces
 */
#define WIRE_INTERFACES_COUNT 1

#define PIN_WIRE_SDA         (26)
#define PIN_WIRE_SCL         (27)

static const uint8_t SDA = PIN_WIRE_SDA;
static const uint8_t SCL = PIN_WIRE_SCL;

#define RESET_PIN            (18)

#ifdef __cplusplus
}
#endif

/*----------------------------------------------------------------------------
 *        Arduino objects - C++ only
 *----------------------------------------------------------------------------*/

#endif
