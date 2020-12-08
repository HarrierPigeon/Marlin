/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

/**
 * Custom Status Screen bitmap
 *
 * Place this file in the root with your configuration files
 * and enable CUSTOM_STATUS_SCREEN_IMAGE in Configuration.h.
 *
 * Use the Marlin Bitmap Converter to make your own:
 * https://marlinfw.org/tools/u8glib/converter.html
 */

//
// Status Screen Logo bitmap
//
#define STATUS_LOGO_Y            8
#define STATUS_LOGO_WIDTH       39

const unsigned char status_logo_bmp[] PROGMEM = {
B00000000,B00000000,B00000000,B00000000,B00000000,
B01010111,B01110101,B01110101,B01110000,B00000000,
B01010101,B01010101,B01010001,B01000000,B00000000,
B01110111,B01100010,B01100001,B01110000,B00000000,
B01010101,B01010010,B01010001,B00010000,B00000000,
B01010101,B01010010,B01010001,B01110000,B00000000,
B00000000,B00000000,B00000000,B00000000,B00000000,
B01110111,B00011101,B11011100,B00000000,B00000000,
B01000001,B00010101,B01010100,B00000000,B00000000,
B01110001,B00010101,B10010100,B00000000,B00000000,
B01000001,B00010001,B01010100,B00000000,B00000000,
B01110111,B00010001,B01011100,B00000000,B00000000,
B00000000,B00000000,B00000000,B00000000,B00000000,
B10101010,B10101010,B10101010,B10101010,B10101010,
B01010101,B01010101,B01010101,B01010101,B01010101,
B10101010,B10101010,B10101010,B10101010,B10101010
};

//
// Use default bitmaps
//
#define STATUS_HOTEND_ANIM
#define STATUS_BED_ANIM
#define STATUS_HEATERS_XSPACE   20
#if HOTENDS < 2
  #define STATUS_HEATERS_X      48
  #define STATUS_BED_X          72
#else
  #define STATUS_HEATERS_X      40
  #define STATUS_BED_X          80
#endif
