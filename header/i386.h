#pragma once

#include "cpu.h"
#pragma warning(disable:4146)

#define HEADLESS
//#define NO_DEBUGGER

#ifdef HEADLESS
#define printf(...)
#endif

/*
	Intel 386 CPU Emulator (sim386) for win32emu
	Assumes __stdcall calling convention (any Win32 call thunks will use this)

Limited implementation of 386 integer instruction set. Doesn't include FPU or 486+ extensions.
*/

typedef struct {
	union {
		struct {
			struct {
				union {
					struct {
						uint8_t al;
						uint8_t ah;
					};
					uint16_t ax;
					uint32_t eax;
				};
			};

			struct {
				union {
					struct {
						uint8_t cl;
						uint8_t ch;
					};
					uint16_t cx;
					uint32_t ecx;
				};
			};

			struct {
				union {
					struct {
						uint8_t dl;
						uint8_t dh;
					};
					uint16_t dx;
					uint32_t edx;
				};
			};

			struct {
				union {
					struct {
						uint8_t bl;
						uint8_t bh;
					};
					uint16_t bx;
					uint32_t ebx;
				};
			};

			union {
				uint16_t sp;
				uint32_t esp;
			};

			union {
				uint16_t bp;
				uint32_t ebp;
			};

			union {
				uint16_t si;
				uint32_t esi;
			};

			union {
				uint16_t di;
				uint32_t edi;
			};
		};

		uint32_t regs[8];
	};

	DWORD fs;

	int operand_size;

	union {
		uint16_t ip;
		uint32_t eip;
	};

	union {
		uint16_t flags;
		uint32_t eflags;
	};

	int print_addr;

	uint32_t base;
} i386; //figure out how we're handling weird shit like segments & operand size overrides

typedef struct {
	CPU cpu;
	i386 I386;
} i386_CPU;


#define ALIGN(x, val)		(((x % val) == 0) ? x : (x + val) - x % val)

#define MOD(modrm) ((modrm & 0xc0) >> 6)
#define REG(modrm) ((modrm & 0x38) >> 3)
#define RM(modrm) (modrm & 0x7)

#define SCALE(SIB)	(SIB >> 6)
#define INDEX(SIB)	((SIB & 0x38) >> 3)
#define BASE(SIB)	(SIB & 0x7)

#define cjmp(cond)					uint32_t jump_target = cpu->eip + 2 + (int32_t)(int8_t)*virtual_to_physical_addr(cpu, cpu->eip + 1);\
									printf("%p", jump_target); \
									if (cond){ \
										cpu->eip = jump_target; \
									} else{ \
										cpu->eip += 2; \
									} \

#define cjmpex(cond)				uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip + 1); \
									uint32_t jump_target; \
									switch(cpu->operand_size){ \
										case 0: \
											cpu->eip += 3; \
											jump_target = cpu->eip + (int32_t)(int16_t)imm; \
											break; \
										case 1: \
											cpu->eip += 5; \
											jump_target = cpu->eip + imm; \
											break; \
									} \
									printf("%p", jump_target); \
									if (cond){\
										cpu->eip = jump_target; \
									}

#define print_modrm()				printf("Mod=%d Reg=%d Rm=%d\n", MOD(modrm), REG(modrm), RM(modrm));
#define print_sib()					printf("Scale=%d Index=%d Base=%d\n", SCALE(sib), INDEX(sib), BASE(sib));

#define get_modrm_src_reg_1632()	uint32_t* src_ptr = get_reg_1632(cpu, REG(modrm));
#define get_modrm_src_reg_8()		uint8_t* src_ptr = get_reg_8(cpu, REG(modrm));

#define finish_op(op16, op32)		switch(cpu->operand_size){ \
										case 0: \
											op16(cpu, (uint16_t*)dst_ptr, (uint16_t*)src_ptr); \
											break; \
										case 1: \
											op32(cpu, dst_ptr, src_ptr); \
											break; \
									}

#define finish_op_swap(op16, op32)		switch(cpu->operand_size){ \
									case 0: \
										op16(cpu, (uint16_t*)src_ptr, (uint16_t*)dst_ptr); \
										break; \
									case 1: \
										op32(cpu, src_ptr, dst_ptr); \
										break; \
									}

#define get_modrm_dst_ptr(c)		uint32_t* dst_ptr; \
									switch(MOD(modrm)){ \
										case 3: \
											dst_ptr = get_reg_1632(cpu, RM(modrm)); \
											printf("%s", tables[cpu->operand_size][RM(modrm)]); \
											break; \
										default: \
											dst_ptr = (uint32_t*)virtual_to_physical_addr(cpu, calc_modrm_addr(cpu, modrm)); \
											break; \
									} \
									if (c){ printf(", "); }

#define get_modrm_dst_ptr_8(c)		uint8_t* dst_ptr; \
									switch (MOD(modrm)){ \
										case 3: \
											dst_ptr = get_reg_8(cpu, RM(modrm)); \
											printf("%s", reg_names_8[RM(modrm)]); \
											break; \
										default: \
											dst_ptr = (uint8_t*)virtual_to_physical_addr(cpu, calc_modrm_addr(cpu, modrm)); \
											break; \
									} \
									if (c){ printf(", "); }

#define get_modrm()					uint8_t modrm = *(virtual_to_physical_addr(cpu, cpu->eip + 1));

extern void(*extended_op_table[256])(i386* cpu);

//uint8_t* virtual_to_physical_addr(i386* cpu, uint32_t vaddr);
#define virtual_to_physical_addr(cpu, vaddr) ((PBYTE)vaddr)