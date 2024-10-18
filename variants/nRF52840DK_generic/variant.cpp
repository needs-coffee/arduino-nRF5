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

#include "variant.h"

const uint32_t g_ADigitalPinMap[] = {
    0,   // P0.00 - XL1 32.768kHz crystal
    1,   // P0.01 - XL2 32.768kHz crystal
    2,   // P0.02 - A7 - AREF
    3,   // P0.03 - A0
    4,   // P0.04 - A1
    5,   // P0.05 - A6 - JLINK_SERIAL_RTS
    6,   // P0.06 - JLINK_SERIAL_TX
    7,   // P0.07 - JLINK_SERIAL_CTS
    8,   // P0.08 - JLINK_SERIAL_RX
    9,   // P0.09 - NFC1
    10,  // P0.10 - NFC2
    11,  // P0.11 - BUTTON1
    12,  // P0.12 - BUTTON2
    13,  // P0.13 - LED1
    14,  // P0.14 - LED2
    15,  // P0.15 - LED3
    16,  // P0.16 - LED4
    17,  // P0.17 - QSPI_CS
    18,  // P0.18 - RESET
    19,  // P0.19 - QSPI_CLK
    20,  // P0.20 - QSPI_DIO0
    21,  // P0.21 - QSPI_DIO1
    22,  // P0.22 - QSPI_DIO2
    23,  // P0.23 - QSPI_DIO3
    24,  // P0.24 - BUTTON3
    25,  // P0.25 - BUTTON4
    26,  // P0.26 - SDA
    27,  // P0.27 - SCL
    28,  // P0.28 - A2
    29,  // P0.29 - A3
    30,  // P0.30 - A4
    31,  // P0.31 - A5
#if GPIO_COUNT > 1
    32,  // P1.00 - SWO
    33,  // P1.01 - D0
    34,  // P1.02 - D1
    35,  // P1.03 - D2
    36,  // P1.04 - D3
    37,  // P1.05 - D4
    38,  // P1.06 - D5
    39,  // P1.07 - D6
    40,  // P1.08 - D7
    41,  // P1.09
    42,  // P1.10 - D8
    43,  // P1.11 - D9
    44,  // P1.12 - D10 - SS
    45,  // P1.13 - D11 - MISO
    46,  // P1.14 - D12 - MOSI
    47,  // P1.15 - D13 - SCK
#endif
};