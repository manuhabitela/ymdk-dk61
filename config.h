/*
Copyright 2021-2022 Alin M Elena <alinm.elena@gmail.com>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#define DEBOUNCE 5

#undef LED_ON_HIGH
#define LED_ON_HIGH 0
#define LED_CAPS_LOCK_PIN B5
#define LED_PIN_ON_STATE    0

#define SOLENOID_PIN A8
#define SOLENOID_ACTIVE true
#define SOLENOID_DEFAULT_DWELL 20
#undef STM32_HSECLK
#define STM32_HSECLK 16000000

#define TAPPING_TOGGLE 2
#define DYNAMIC_KEYMAP_LAYER_COUNT 5
#define DYNAMIC_KEYMAP_MACRO_COUNT 5

#define DYNAMIC_KEYMAP_EEPROM_MAX_ADDR 2047

/* EEPROM Driver Configuration */
#define WEAR_LEVELING_LOGICAL_SIZE 2048
#define WEAR_LEVELING_BACKING_SIZE (WEAR_LEVELING_LOGICAL_SIZE * 2)
