// Copyright 2023 Andrew Kannan (@awkannan)
// SPDX-License-Identifier: GPL-2.0-or-later

/*
 * This file was auto-generated by:
 *    `qmk chibios-confmigrate -i keyboards/cannonkeys/satisfaction75/mcuconf.h -r platforms/chibios/GENERIC_STM32_F072XB/configs/mcuconf.h`
 */

#pragma once

#include_next <mcuconf.h>

#undef STM32_LSE_ENABLED
#define STM32_LSE_ENABLED TRUE

#undef STM32_RTCSEL
#define STM32_RTCSEL STM32_RTCSEL_LSE

#undef STM32_I2C_USE_I2C1
#define STM32_I2C_USE_I2C1 TRUE

#undef STM32_SPI_USE_SPI2
#define STM32_SPI_USE_SPI2 TRUE

