/*
 *  X86-specific interface functions.
 *
 *  Copyright (c) Antmicro
 *  Copyright (c) Realtime Embedded
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, see <http://www.gnu.org/licenses/>.
 */
#include <stdint.h>
#include "infrastructure.h"

#ifdef TARGET_I386

void run_on_cpu(void *env, void (*func)(void *data), void *data) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
}

int cpu_is_bsp(void *env) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
	return 0;
}

uint64_t cpu_get_apic_base(void *s) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
	return 0;
}

void apic_init_reset(void *s) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
}

void cpu_smm_update(void *env) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
}

void cpu_set_ferr(void *s) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
}

void cpu_set_apic_tpr(void *s, uint8_t val) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(%X)", __FUNCTION__,val);
}

void cpu_set_apic_base(void *d, uint64_t val) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(%X)", __FUNCTION__,val);
}

int cpu_get_pic_interrupt(void *env) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
    return 0;
}

uint8_t cpu_get_apic_tpr(void *d) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
	return 0;
}

void apic_sipi(void *s) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
}

uint64_t count = 0;
uint64_t cpu_get_tsc(void *env) {
	tlib_printf(LOG_LEVEL_WARNING, "%s(...)", __FUNCTION__);
        return count++;
}

#endif
