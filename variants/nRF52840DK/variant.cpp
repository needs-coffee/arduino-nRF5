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
  // D0 - D7
  33, // P1.01
  34, // P1.02 
  35, // P1.03
  36, // P1.04
  37, // P1.05
  38, // P1.06
  39, // P1.07
  40, // P1.08

  // D8 - D13
  42, // P1.10
  43, // P1.11
  44, // P1.12
  45, // P1.13
  46, // P1.14
  47, // P1.15
  
  // A0 - A7
  3,  // P0.03
  4,  // P0.04
  28, // P0.28
  29, // P0.29
  30, // P0.30
  31, // P0.31
  5,  // P0.05
  2,  // P0.02

  // SDA, SCL
  26, // P0.26
  27, // P0.27

  // RX, TX
  8, // P0.08
  6, // P0.06  

  // LED Pins
  13, // P0.13
  14, // P0.14
  15, // P0.15
  16, // P0.16

  // Button Pins
  11, // P0.11
  12, // P0.12
  24, // P0.24
  25, // P0.25

  // NFC Pins
  9,  // P0.09
  10, // P0.10
};
