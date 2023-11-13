#pragma once

#include <stdint.h>
#include "cpu.h"

/*
	MIPS R4000 CPU Emulator for win32emu
	Assumes standard MIPS Windows NT calling convention

Limited implementation of MIPS R4000 integer instruction set. Doesn't include FPU extensions.
*/

typedef struct {
	uint32_t regs[32];
	uint32_t pc;
	uint32_t hi;
	uint32_t lo;
} MIPS;

typedef struct {
	CPU cpu;
	MIPS mips;
} MIPS_CPU;