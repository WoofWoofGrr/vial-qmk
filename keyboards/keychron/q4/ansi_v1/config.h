/* Copyright 2022 @ Keychron (https://www.keychron.com)
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

/* RGB Matrix Driver Configuration */
#define SNLED27351_DRIVER_COUNT 2
#define DRIVER_ADDR_1 SNLED27351_I2C_ADDRESS_VDDIO
#define DRIVER_ADDR_2 SNLED27351_I2C_ADDRESS_GND

/* RGB Matrix Configuration */
#define DRIVER_1_LED_TOTAL 31
#define DRIVER_2_LED_TOTAL 30
#define RGB_MATRIX_LED_COUNT (DRIVER_1_LED_TOTAL + DRIVER_2_LED_TOTAL)

#define SNLED27351_PHASE_CHANNEL SNLED27351_MSKPHASE_9CHANNEL
#define SNLED27351_CURRENT_TUNE \
    { 0xCA, 0xCA, 0x60, 0xCA, 0xCA, 0x60, 0xCA, 0xCA, 0x60, 0xCA, 0xCA, 0x60 }

/* Enable CapsLcok LED*/
#define CAPS_LOCK_LED_INDEX 28
