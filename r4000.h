#pragma once
#pragma once

#include "int.h"
#include "mips.h"
#include "emuwow.h"

#define m_pc cpu->pc
#define m_r cpu->regs
#define m_lo cpu->lo
#define m_hi cpu->hi
#define m_branch_state cpu->branch_state
#define u64 (uint64_t)
#define u32 (uint32_t)
#define s64 (int64_t)
#define s32 (int32_t)
#define s16 (int16_t)
#define u16 (uint16_t)
#define s8 (int8_t)
#define u8 (uint8_t)
#define ADDR(r, o) ((r)+(o))

#define NONE 0
#define BRANCH 1
#define DELAY 2
#define NULLIFY 3
#define STATE 0x0000000000000003
#define TARGET 0xfffffffffffffffc

// cpu instruction fields
#define RSREG ((op >> 21) & 31)
#define RTREG ((op >> 16) & 31)
#define RDREG ((op >> 11) & 31)
#define SHIFT ((op >> 6) & 31)

// cop1 instruction fields
#define FRREG ((op >> 21) & 31)
#define FTREG ((op >> 16) & 31)
#define FSREG ((op >> 11) & 31)
#define FDREG ((op >> 6) & 31)

#define cp0_cache(ex)
#define cp0_execute(ex)
#define cpu_exception(ex)
#define cp1x_execute(ex)
#define cp2_execute(ex)

//#define load(type, addr)	((int32_t)*(type*)addr)
#define load(type, addr)	(   (addr == 0x7FFFF4A8) ? (DWORD)(TlsGetValue(dwThreadContextIndex)) :             ((int32_t)*(type*)addr)    )
#define store(type, addr, val) *(type*)(addr) = val

#define mul_32x32(a,b) ((int64_t)((int32_t)a * (int32_t)b))
#define mulu_32x32(a,b) ((uint64_t)((uint32_t)a * (uint32_t)b))

#define BIT(num, index)  ((num >> index) & 1)

void InitializeMIPSCPU(PCPUVTable pVTable);

INT r4000_step(MIPS*);
INT r4000_execute(MIPS*, uint32_t);

#define BRK 0xD