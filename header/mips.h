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



#define exec_op(NUM, fn)    case NUM: \
                                fn(&(pCPU->mips), opcode); \
                                break;

#define arith_op(name, op)    printf("%s $%d, $%d, $%d\n", name, decode_rd(word), decode_rs(word), decode_rt(word)); \
                              cpu->regs[decode_rd(word)] = op(cpu->regs[decode_rs(word)], cpu->regs[decode_rt(word)]);

#define arith_i_op_zx(name, op) printf("%s $%d, $%d, %p\n", name, decode_rt(word), decode_rs(word), decode_imm(word)); \
                                cpu->regs[decode_rt(word)] = op(cpu->regs[decode_rs(word)], (uint16_t)decode_imm(word));

#define arith_i_op_sx(name, op) printf("%s $%d, $%d, %p\n", name, decode_rt(word), decode_rs(word), (int32_t)decode_imm(word)); \
                                cpu->regs[decode_rt(word)] = op(cpu->regs[decode_rs(word)], (int32_t)decode_imm(word));

#define op_add(n1, n2)    (n1 + n2)
#define op_and(n1, n2) (n1 & n2)
#define op_nor(n1, n2) (~(n1 | n2))
#define op_or(n1, n2) (n1 | n2)
#define op_sll(n1, n2) (n1 << n2)
#define op_sra(n1, n2) ((int32_t)n1 >> n2)
#define op_srl(n1, n2) (n1 >> n2)
#define op_sub(n1, n2) (n1 - n2)
#define op_xor(n1, n2) (n1 ^ n2)
#define op_slt(n1, n2) ((int32_t)n1 < (int32_t)n2)
#define op_sltu(n1, n2) (n1 < n2)

#define calc_ls_addr() ((int32_t)decode_imm(word) + cpu->regs[decode_rs(word)])

#define print_ls(name)            printf("%s $%d, %d($%d)\n", name, decode_rt(word), decode_imm(word), decode_rs(word));

#define do_store(name, type)  print_ls(name); \
                              *(type*)(calc_ls_addr()) = cpu->regs[decode_rt(word)];

#define do_load(name, type)             print_ls(name); \
                              cpu->regs[decode_rt(word)] = (int32_t)*(type*)calc_ls_addr();

#define do_branch(name, cond) uint32_t target = cpu->pc + ((int32_t)decode_imm(word) << 2); \
                              printf("%s $%d, $%d, %p\n", name, decode_rs(word), decode_rt(word), target); \
                              if((cond)) cpu->pc = target;

#define do_branch_alt(name, cond) uint32_t target = cpu->pc + ((int32_t)decode_imm(word) << 2); \
  printf("%s $%d, %p\n", name, decode_rs(word), target); \
  if((cond)) cpu->pc = target;

#define R_TYPE 0
//R-Type (Arithmetic) -- DONE!
#define ADD 32
#define ADDU 33
#define AND 36
#define NOR 39
#define OR 37
#define SLLV 4
#define SRAV 7
#define SRLV 6
#define XOR 38
#define SUB 34
#define SUBU 35
#define SLT 42
#define SLTU 41

//R-Type (Shifts)
#define SLL 0
#define SRL 2
#define SRA 3

//R-Type (Other)
#define JR 8
#define JALR 9

#define SYSCALL 12
#define BREAK 13
#define SYNC 15
#define MFHI 16
#define MFLO 18
#define MTHI 17
#define MTLO 19
#define MULT 24
#define MULTU 25
#define DIV 26
#define DIVU 27

//I-Type
#define ADDI 8
#define ADDIU 9
#define ANDI 12
#define ORI 13
#define XORI 14
#define SLTI 10
#define SLTIU 11

//Load Instructions
#define LB 32
#define LBU 36
#define LH 33
#define LHU 37
#define LW 35

//Store Instructions
#define SB 40
#define SH 41
#define SW 43

//Branch Instructions
#define B_REGIMM 1
#define BLTZ 0
#define BGEZ 1
#define BEQ 4
#define BNE 5
#define BLEZ 6
#define BGTZ 7

//Likely branches
#define BEQL 20

//Branch and Link

//Jumps
#define J 2
#define JAL 3

//Other
#define LUI 15