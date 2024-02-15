#pragma once

#include "int.h"
#include "emuwow.h"

/*
	DEC Alpha Implementation Todo List
1.) Finish ExecuteEmulatedProcedure, StubExport, and AddBreakpoint
2.) Implement sext()
3.) Test and work out the bugs - get it working!
*/

typedef struct _AXP64 {
	uint64_t pc;
	uint64_t r_i[32];
	uint64_t r_f[32];
} AXP64, *PAXP64;

typedef struct _ThreadContext_Alpha {

	EmuTEB teb;
	PCPUVTable fn_ptrs;
	DebugState dbg_state;
	AXP64 cpu;

} ThreadContext_Alpha, *PThreadContext_Alpha;

// instruction field extraction
#define Ra(x)     ((x >> 21) & 31)         // 'a' register field
#define Rb(x)     ((x >> 16) & 31)         // 'b' register field
#define Rc(x)     (x & 31)                 // 'c' register field
#define Im(x)     (u64(u8(x >> 13)))       // literal immediate field

#define Disp_M(x) (s64(s16(x)))            // memory instruction 16-bit signed offset
#define Disp_P(x) (s64(sext(x, 12))) // hardware load/store 12-bit signed offset
#define Disp_B(x) (s64(sext(x << 2, 23))) // branch instruction offset

#define u64 (uint64_t)
#define u32 (uint32_t)
#define s64 (int64_t)
#define s32 (int32_t)
#define s16 (int16_t)
#define u16 (uint16_t)
#define s8 (int8_t)
#define u8 (uint8_t)

#define m_r (pCPU->r_i)
#define m_f (pCPU->r_f)
#define m_pc (pCPU->pc)

#define BIT(num, index)  ((num >> index) & 1)

#define load(type, addr)	( (int64_t)*(type*)addr  )

#define store(type, addr, val) *(type*)(addr) = val

void InitializeAlphaCPU(PCPUVTable pVTable);
