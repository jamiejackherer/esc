/*
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <math.h>
#include <stdint.h>

#define M_SQRT2_F ((float)M_SQRT2)
#define M_PI_F ((float)M_PI)

#define SQ(__X) (__X*__X)

#define MAX(a,b) ((a) > (b) ? (a) : (b))
#define MIN(a,b) ((a) < (b) ? (a) : (b))

#define UNUSED(x) ((void)x)

float sinf_fast(float x);
float cosf_fast(float x);
float constrain_float(float val, float min_val, float max_val);
float wrap_1(float x);
float wrap_2pi(float val);
float wrap_pi(float val);
uint64_t hash_fnv_1a(uint32_t len, const uint8_t* buf);
uint16_t crc16_ccitt(const char *buf, uint32_t len, uint16_t crc);
uint32_t crc32(const uint8_t *buf, uint32_t len, uint32_t crc);
