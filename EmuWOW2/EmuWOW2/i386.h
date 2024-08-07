#pragma once

#include <stdint.h>

/*
i386 Operations
- I/O Read/Write
- Translate linear to virtual address
	You can use the 386 paging/TLB system
	OS/2 apps run one app to one emulator instance so we run in an ersatz paging-off mode where we translate linear addresses to the host's virtual address by adding a base

REP_STRING MOVS
STRING MOVS

*/

/*
	Steps for the table-based emulator & disassembler
1.) Start running some simple flat binaries
2.)
*/


/*
16-bit Real Address Mode vs Protected Mode (Behavioral Changes)

SEGMENT REGISTER LOADS
INTERRUPTS

*/

static const char* alux_op_names[] = { "TEST", "???", "NOT", "NEG", "MUL", "IMUL", "DIV", "IDIV" };
static const char* shift_names[] = { "ROL", "ROR", "RCL", "RCR", "SHL", "SHR", "---", "SAR" };
static const char* alu_op_names[] = { "ADD", "OR", "ADC", "SBB", "AND", "SUB", "XOR", "CMP" };
static const char* regs_16[] = { "AX", "CX", "DX", "BX", "SP", "BP", "SI", "DI" };
static const char* regs_32[] = { "EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI" };
static const char** reg_names[] = { regs_16, regs_32 };
static const char* regs_8[] = { "AL", "CL", "DL", "BL", "AH", "CH", "DH", "BH" };
static const char* seg_regs[] = { "ES", "CS", "SS", "DS", "FS", "GS" };

#define WRITE_DX 0x1010

//Constant 8-bit Registers
#define AL 0
#define CL 1
#define DL 2
#define BL 3
#define AH 4
#define CH 5
#define DH 6
#define BH 7

//Constant Registers
#define R_EAX 0
#define R_ECX 1
#define R_EDX 2
#define R_EBX 3
#define R_ESP 4
#define R_EBP 5
#define R_ESI 6
#define R_EDI 7

//Constant Segment Registers
#define ES 0
#define CS 1
#define SS 2
#define DS 3
#define FS 4
#define GS 5

//Flags
#define USE_MODRM 1
#define WEIRD 2
#define STR_SZ_8 4
#define STR_SZ_1632 8
#define SIGN_EXTEND_IMM 16

//Operand Type
#define NONE 0
#define RM_MODRM 1
#define REG_MODRM 2
#define MEM_MODRM 3
#define CREG_MODRM 4
#define SEG_REG_MODRM 5
#define CONST_REG 6
#define CONST_SEG_REG 7
#define IMM 8
#define FAR_PTR 14
#define CONSTANT 9
#define EDX_EAX 10
#define IP_REL 11
#define SIMM 12
#define OFFSET 13

//Decoded Operand Types
#define MEM 1
#define REGISTER 2
#define SEG_REG 3
#define CTRLREG 4

#define UNDEFINED {INVALID, 0, 0, 0}

//Operation Type
#define ALU 0
#define PUSH 1
#define POP 2
#define POP_SR 3
#define EXTENDED 4
#define UNARY 5
#define INCDEC 6
#define PUSHA 7
#define POPA 8
#define ALU_SPECIAL 9
#define STRING_OP 10
#define REPEZ 11
#define REPNE 12
#define SEGMENT_OVERRIDE 13
#define OP_SZ_OVERRIDE 14
#define ADDR_SZ_OVERRIDE 15
#define JUMP 16
#define XCHG 17
#define MOV 18
#define MOV_TO_CR 19
#define MOV_TO_SR 20
#define LEA 21
#define LD_FP 22
#define LOCK 23
#define RETN 24
#define RETF 25
#define CALL_NEAR 26
#define CALL_FAR 27
#define CLR_FLAG 28
#define ST_FLAG 29
#define INT_OP 30
#define IRET 31
#define CBW_CWDE 32
#define MULTIPLEXED_FF 33
#define IO_IN 34
#define IO_OUT 35
#define CWD_CDQ 36
#define LOOP 37
#define PUSHF 38
#define POPF 39
#define XLAT 40
#define SHIFT 41
#define JUMP_FAR 42
#define SAHF 43
#define LAHF 44
#define ENTER 45
#define LEAVE 46
#define CMC 47
#define MOVSX 48
#define MOVZX 49
#define INVALID -1

//Operand Size
#define SZ_8 0
#define SZ_1632 1
#define SZ_16 2
#define SZ_32 3
#define SZ_816 4
#define SZ_3248 5
#define SZ_48 6
#define SZ_3264 7
#define SZ_64 8

//AL unary ops
#define DAA 0
#define DAS 1
#define AAA 2
#define AAS 3

//Increment/Decrement
#define ID_INC 0
#define ID_DEC 1

//ALU Multi-Op Table A
#define ALU_ADD 0
#define ALU_OR 1
#define ALU_ADC 2
#define ALU_SBB 3
#define ALU_AND 4
#define ALU_SUB 5
#define ALU_XOR 6
#define ALU_CMP 7
#define ALU_MULTI 8

//ALU Multi-Op Table B
#define ALU_TEST 0
#define ALU_UNK 1
#define ALU_NOT 2
#define ALU_NEG 3
#define ALU_MUL 4
#define ALU_IMUL 5
#define ALU_DIV 6
#define ALU_IDIV 7

//String Instructions
#define MOVS 0
#define SCAS 1
#define STOS 2
#define INS 3
#define OUTS 4
#define LODS 5
#define CMPS 6

//Jump Types
#define JO 0
#define JNO 1
#define JB 2
#define JAE 3
#define JE 4
#define JNE 5
#define JBE 6
#define JA 7
#define JS 8
#define JNS 9
#define JP 10
#define JNP 11
#define JL 12
#define JGE 13
#define JLE 14
#define JG 15
#define ALWAYS 16
#define JCXZ 17

#define LOOP_NORMAL 0
#define LOOPE 1
#define LOOPNE 2

//Sign Extensions
#define SX8(n)  ((int32_t)((int8_t)(n)))
#define SX16(n) ((int32_t)((int16_t)n))
#define SX32(n) ((int64_t)((int32_t)n))

//Shifts
#define ROL 0
#define ROR 1
#define RCL 2
#define RCR 3
#define SHL 4
#define SHR 5
#define SAR 7

typedef struct _i386_operand {
	uint8_t type;
	uint8_t size;
	uint8_t value; //needed only if referencing a constant register or hardcoded constant
} i386_operand;

typedef struct _i386_op {
	uint32_t op_type;
	uint32_t sub_type;
	uint32_t flags; //Use Mod R/M?
	uint32_t privilege; //Can indicate either needed IOPL/CPL or that the instruction only runs in ring 0
	i386_operand dest, src1, src2;
} i386_op;

typedef struct _decoded_op {
	uint32_t type, id, size, sr;
} decoded_op;

//https://docs.google.com/spreadsheets/d/1gGu3SG5MToGUYDlbyzLjVI2b3zKCz6sqTSj4qksL89g/edit#gid=1185704766

#define CARRY 0
#define PARITY 2
#define AC 4
#define ZERO 6
#define SIGN 7
#define TRAP 8
#define INTERRUPT 9
#define DIRECTION 10
#define OVERFLOW 11
#define NESTED 14
#define RESUME 16
#define V8086 17

static int i386_parity_table[256] = {
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
	1,
	0,
	0,
	1,
	1,
	0,
	0,
	1,
	0,
	1,
	1,
	0,
};

static i386_op ExtendedInstructionTable[256] = { {INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{ JUMP, JO, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JO rel16
	{ JUMP, JNO, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JNO rel16
	{ JUMP, JB, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JB rel16
	{ JUMP, JAE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JAE rel16
	{ JUMP, JE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JE rel16
	{ JUMP, JNE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JNE rel16
	{ JUMP, JBE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JBE rel16
	{ JUMP, JA, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JA rel16
	{ JUMP, JS, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JS rel16
	{ JUMP, JNS, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JNS rel16
	{ JUMP, JP, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JP rel16
	{ JUMP, JNP, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JNP rel16
	{ JUMP, JL, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JL rel16
	{ JUMP, JGE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JGE rel16
	{ JUMP, JLE, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JLE rel16
	{ JUMP, JG, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE} }, //JG rel16
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{ALU_SPECIAL, ALU_IMUL, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //IMUL r32, r/m32
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{ MOVZX, 0, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_8}, {NONE} },
	{ MOVZX, 0, USE_MODRM, 0, {REG_MODRM, SZ_32}, {RM_MODRM, SZ_16}, {NONE} },
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{ MOVSX, 0, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_8}, {NONE} },
	{ MOVSX, 0, USE_MODRM, 0, {REG_MODRM, SZ_32}, {RM_MODRM, SZ_16}, {NONE} },
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID},
	{INVALID} };

static i386_op InstructionTable[256] = {
	{ALU, ALU_ADD, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //ADD r/m8, r8
	{ALU, ALU_ADD, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //ADD r/m16, r16
	{ALU, ALU_ADD, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //ADD r8, r/m8
	{ALU, ALU_ADD, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //ADD r16, r/m16
	{ALU, ALU_ADD, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //ADD AL, imm8
	{ALU, ALU_ADD, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //ADD AX, imm16
	{PUSH, 0, 0, 0, {NONE}, {CONST_SEG_REG, SZ_16, ES}, {NONE}}, //PUSH ES
	{POP_SR, 0, 0, 0, {CONST_SEG_REG, SZ_16, ES}, {NONE}, {NONE}}, //POP ES
	{ALU, ALU_OR, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //OR r/m8, r8
	{ALU, ALU_OR, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //OR r/m16, r16
	{ALU, ALU_OR, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //OR r8, r/m8
	{ALU, ALU_OR, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //OR r16, r/m16
	{ALU, ALU_OR, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //OR AL, imm8
	{ALU, ALU_OR, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //OR AX, imm16
	{PUSH, 0, 0, 0, {NONE}, {CONST_SEG_REG, SZ_16, CS}, {NONE}}, //PUSH CS
	{EXTENDED, 0, 0, 0}, //0F Family

	//0x10
	{ALU, ALU_ADC, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //ADC r/m8, r8
	{ALU, ALU_ADC, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //ADC r/m16, r16
	{ALU, ALU_ADC, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //ADC r8, r/m8
	{ALU, ALU_ADC, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //ADC r16, r/m16
	{ALU, ALU_ADC, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //ADC AL, imm8
	{ALU, ALU_ADC, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //ADC AX, imm16
	{PUSH, 0, 0, 0, {NONE}, {CONST_SEG_REG, SZ_16, SS}, {NONE}}, //PUSH SS
	{POP_SR, 0, 0, 0, {CONST_SEG_REG, SZ_16, SS}, {NONE}, {NONE}}, //POP SS
	{ALU, ALU_SBB, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //SBB r/m8, r8
	{ALU, ALU_SBB, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //SBB r/m16, r16
	{ALU, ALU_SBB, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //SBB r8, r/m8
	{ALU, ALU_SBB, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //SBB r16, r/m16
	{ALU, ALU_SBB, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //SBB AL, imm8
	{ALU, ALU_SBB, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //SBB AX, imm16
	{PUSH, 0, 0, 0, {NONE}, {CONST_SEG_REG, SZ_16, DS}, {NONE}}, //PUSH DS
	{POP_SR, 0, 0, 0, {CONST_SEG_REG, SZ_16, DS}, {NONE}, {NONE}}, //POP DS

	//0x20
	{ALU, ALU_AND, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //AND r/m8, r8
	{ALU, ALU_AND, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //AND r/m16, r16
	{ALU, ALU_AND, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //AND r8, r/m8
	{ALU, ALU_AND, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //AND r16, r/m16
	{ALU, ALU_AND, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //AND AL, imm8
	{ALU, ALU_AND, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //AND AX, imm16
	{SEGMENT_OVERRIDE, ES, 0, 0}, //ES Segment Override
	{UNARY, DAA, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {NONE}}, //DAA
	{ALU, ALU_SUB, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //SUB r/m8, r8
	{ALU, ALU_SUB, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //SUB r/m16, r16
	{ALU, ALU_SUB, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //SUB r8, r/m8
	{ALU, ALU_SUB, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //SUB r16, r/m16
	{ALU, ALU_SUB, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //SUB AL, imm8
	{ALU, ALU_SUB, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //SUB AX, imm16
	{SEGMENT_OVERRIDE, CS, 0, 0}, //CS Segment Override
	{UNARY, DAS, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {NONE}}, //DAS

	//0x30
	{ALU, ALU_XOR, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //XOR r/m8, r8
	{ALU, ALU_XOR, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //XOR r/m16, r16
	{ALU, ALU_XOR, USE_MODRM, 0, {REG_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //XOR r8, r/m8
	{ALU, ALU_XOR, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //XOR r16, r/m16
	{ALU, ALU_XOR, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //XOR AL, imm8
	{ALU, ALU_XOR, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //XOR AX, imm16
	{SEGMENT_OVERRIDE, SS, 0, 0}, //SS Segment Override
	{UNARY, AAA, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {NONE}}, //AAA
	{ALU, ALU_CMP, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //CMP r/m8, r8
	{ALU, ALU_CMP, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //CMP r/m16, r16
	{ALU, ALU_CMP, USE_MODRM, 0, {NONE}, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}}, //CMP r8, r/m8
	{ALU, ALU_CMP, USE_MODRM, 0, {NONE}, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}}, //CMP r16, r/m16
	{ALU, ALU_CMP, 0, 0, {NONE}, {CONST_REG, SZ_8, R_EAX}, {IMM, SZ_8}}, //CMP AL, imm8
	{ALU, ALU_CMP, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //CMP AX, imm16
	{SEGMENT_OVERRIDE, DS, 0, 0}, //DS Segment Override
	{UNARY, AAS, 0, 0, {CONST_REG, SZ_8, R_EAX}, {CONST_REG, SZ_8, R_EAX}, {NONE}}, //AAS

	//0x40
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {NONE}}, //INC AX
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_ECX}, {CONST_REG, SZ_1632, R_ECX}, {NONE}}, //INC CX
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_EDX}, {CONST_REG, SZ_1632, R_EDX}, {NONE}}, //INC DX
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_EBX}, {CONST_REG, SZ_1632, R_EBX}, {NONE}}, //INC BX
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_ESP}, {CONST_REG, SZ_1632, R_ESP}, {NONE}}, //INC SP
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_EBP}, {CONST_REG, SZ_1632, R_EBP}, {NONE}}, //INC BP
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_ESI}, {CONST_REG, SZ_1632, R_ESI}, {NONE}}, //INC SI
	{INCDEC, ID_INC, 0, 0, {CONST_REG, SZ_1632, R_EDI}, {CONST_REG, SZ_1632, R_EDI}, {NONE}}, //INC DI
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}, {NONE}}, //DEC AX
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_ECX}, {CONST_REG, SZ_1632, R_ECX}, {NONE}}, //DEC CX
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_EDX}, {CONST_REG, SZ_1632, R_EDX}, {NONE}}, //DEC DX
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_EBX}, {CONST_REG, SZ_1632, R_EBX}, {NONE}}, //DEC BX
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_ESP}, {CONST_REG, SZ_1632, R_ESP}, {NONE}}, //DEC SP
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_EBP}, {CONST_REG, SZ_1632, R_EBP}, {NONE}}, //DEC BP
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_ESI}, {CONST_REG, SZ_1632, R_ESI}, {NONE}}, //DEC SI
	{INCDEC, ID_DEC, 0, 0, {CONST_REG, SZ_1632, R_EDI}, {CONST_REG, SZ_1632, R_EDI}, {NONE}}, //DEC DI

	//0x50
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {NONE}}, //PUSH AX
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_ECX}, {NONE}}, //PUSH CX
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EDX}, {NONE}}, //PUSH DX
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EBX}, {NONE}}, //PUSH BX
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_ESP}, {NONE}}, //PUSH SP
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EBP}, {NONE}}, //PUSH BP
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_ESI}, {NONE}}, //PUSH SI
	{PUSH, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EDI}, {NONE}}, //PUSH DI
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {NONE}, {NONE}}, //POP AX
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_ECX}, {NONE}, {NONE}}, //POP CX
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_EDX}, {NONE}, {NONE}}, //POP DX
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_EBX}, {NONE}, {NONE}}, //POP BX
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_ESP}, {NONE}, {NONE}}, //POP SP
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_EBP}, {NONE}, {NONE}}, //POP BP
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_ESI}, {NONE}, {NONE}}, //POP SI
	{POP, 0, 0, 0, {CONST_REG, SZ_1632, R_EDI}, {NONE}, {NONE}}, //POP DI

	//0x60
	{ PUSHA, 0, 0, 0 }, //PUSHA
	{POPA, 0, 0, 0}, //POPA
	{INVALID, 0, 0, 0}, //INVALID
	{INVALID, 0, 0, 0}, //INVALID
	{SEGMENT_OVERRIDE, FS, 0, 0}, //FS Segment Override
	{SEGMENT_OVERRIDE, GS, 0, 0}, //GS Segment Override
	{OP_SZ_OVERRIDE, 0, 0, 0}, //Operand Size Override
	{ADDR_SZ_OVERRIDE, 0, 0, 0}, //Address Size Override
	{PUSH, 0, 0, 0, {NONE}, {IMM, SZ_1632}, {NONE}}, //PUSH imm16
	{ALU_SPECIAL, ALU_IMUL, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {IMM, SZ_1632}}, //IMUL r16, r/m16, imm16
	{PUSH, 0, 0, 0, {NONE}, {IMM, SZ_8}, {NONE}}, //PUSH imm8
	{ ALU_SPECIAL, ALU_IMUL, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {SIMM, SZ_8} }, //IMUL r16, r/m16, imm8
	{STRING_OP, INS, STR_SZ_8, 0}, //INSB
	{STRING_OP, INS, STR_SZ_1632, 0}, //INSW
	{STRING_OP, OUTS, STR_SZ_8, 0}, //OUTSB
	{STRING_OP, OUTS, STR_SZ_1632, 0}, //OUTSW

	//0x70
	{JUMP, JO, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JO rel8
	{JUMP, JNO, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JNO rel8
	{JUMP, JB, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JB rel8
	{JUMP, JAE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JAE rel8
	{JUMP, JE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JE rel8
	{JUMP, JNE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JNE rel8
	{JUMP, JBE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JBE rel8
	{JUMP, JA, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JA rel8
	{JUMP, JS, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JS rel8
	{JUMP, JNS, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JNS rel8
	{JUMP, JP, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JP rel8
	{JUMP, JNP, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JNP rel8
	{JUMP, JL, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JL rel8
	{JUMP, JGE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JGE rel8
	{JUMP, JLE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JLE rel8
	{JUMP, JG, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JG rel8

	//0x80
	{ALU, ALU_MULTI, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {IMM, SZ_8}}, //OP r/m8, imm8
	{ALU, ALU_MULTI, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {IMM, SZ_1632}}, //OP r/m16, imm16
	{ALU, ALU_MULTI, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {IMM, SZ_8}}, //OP r/m8, imm8
	{ALU, ALU_MULTI, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {SIMM, SZ_8}}, //OP r/m16, imm8
	{ALU_SPECIAL, ALU_TEST, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //TEST r/m8, r8
	{ALU_SPECIAL, ALU_TEST, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //TEST r/m16, r16
	{XCHG, 0, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}}, //XCHG r/m8, r8
	{XCHG, 0, USE_MODRM, 0, {NONE}, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}}, //XCHG r/m16, r16
	{MOV, 0, USE_MODRM, 0, {RM_MODRM, SZ_8}, {REG_MODRM, SZ_8}, {NONE}}, //MOV r/m8, r8
	{MOV, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {REG_MODRM, SZ_1632}, {NONE}}, //MOV r/m16, r16
	{MOV, 0, USE_MODRM, 0, {REG_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {NONE}}, //MOV r8, r/m8
	{MOV, 0, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {NONE}}, //MOV r16, r/m16
	{MOV, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {SEG_REG_MODRM, SZ_16}, {NONE}}, //MOV r/m16, Sreg
	{LEA, 0, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {MEM_MODRM, SZ_1632}, {NONE}}, //LEA r16/32, mem
	{MOV_TO_SR, 0, USE_MODRM, 0, {SEG_REG_MODRM, SZ_16}, {RM_MODRM, SZ_16}, {NONE}}, //MOV Sreg, r/m16
	{POP, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {NONE}, {NONE}}, //POP r/m16

	//0x90 left off here
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EAX}}, //NOP (XCHG AX, AX)
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_ECX}}, //XCHG AX, CX
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EDX}}, //XCHG AX, DX
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EBX}}, //XCHG AX, BX
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_ESP}}, //XCHG AX, SP
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EBP}}, //XCHG AX, BP
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_ESI}}, //XCHG AX, SI
	{XCHG, 0, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_1632, R_EDI}}, //XCHG AX, DI
	{CBW_CWDE, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_816, R_EAX}, {NONE}}, //CBW/CWDE (AL->AX / AX->EAX)
	{CWD_CDQ, 0, 0, 0, {EDX_EAX, SZ_3264}, {CONST_REG, SZ_1632, R_EAX}, {NONE} }, //CWD/CQD (AX->DX:AX / EAX->EDX:EAX)
	{CALL_FAR, 0, 0, 0, {NONE}, {FAR_PTR, SZ_3248}, {NONE}}, //FAR CALL
	UNDEFINED, //FWAIT
	{PUSHF, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //PUSHF
	{POPF, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //POPF
	{SAHF, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //SAHF
	{LAHF, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //LAHF

	//0xA0
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, AL}, {OFFSET, SZ_8}, {NONE} }, //MOV AL, BYTE seg:[offs]
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {OFFSET, SZ_1632}, {NONE} }, //MOV AX, WORD seg:[offs]
	{MOV, 0, 0, 0, {OFFSET, SZ_8}, {CONST_REG, SZ_8, AL}, {NONE}}, //MOV BYTE seg:[offs], AL
	{ MOV, 0, 0, 0, {OFFSET, SZ_1632}, {CONST_REG, SZ_1632, R_EAX}, {NONE} }, //MOV WORD seg:[offs], AX
	{ STRING_OP, MOVS, STR_SZ_8, 0, {NONE}, {NONE}, {NONE} }, //MOVSB
	{ STRING_OP, MOVS, STR_SZ_1632, 0, {NONE}, {NONE}, {NONE} }, //MOVSW
	{ STRING_OP, CMPS, STR_SZ_8, 0, {NONE}, {NONE}, {NONE} }, //CMPSB
	{ STRING_OP, STOS, STR_SZ_1632, 0, {NONE}, {NONE}, {NONE} }, //CMPSW
	{ALU_SPECIAL, ALU_TEST, 0, 0, {NONE}, {CONST_REG, SZ_8, AL}, {IMM, SZ_8}}, //TEST AL, imm8
	{ALU_SPECIAL, ALU_TEST, 0, 0, {NONE}, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}}, //TEST AX, imm16
	{ STRING_OP, STOS, STR_SZ_8, 0, {NONE}, {NONE}, {NONE}}, //STOSB
	{ STRING_OP, STOS, STR_SZ_1632, 0, {NONE}, {NONE}, {NONE} }, //STOSW
	{ STRING_OP, LODS, STR_SZ_8, 0, {NONE}, {NONE}, {NONE} }, //LODSB
	{ STRING_OP, LODS, STR_SZ_1632, 0, {NONE}, {NONE}, {NONE} }, //LODSW
	{ STRING_OP, SCAS, STR_SZ_8, 0, {NONE}, {NONE}, {NONE} }, //SCASB
	{ STRING_OP, SCAS, STR_SZ_1632, 0, {NONE}, {NONE}, {NONE} }, //SCASW

	//0xB0
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, AL}, {IMM, SZ_8}, {NONE} }, //MOV AL, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, CL}, {IMM, SZ_8}, {NONE} }, //MOV CL, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, DL}, {IMM, SZ_8}, {NONE} }, //MOV DL, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, BL}, {IMM, SZ_8}, {NONE} }, //MOV BL, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, AH}, {IMM, SZ_8}, {NONE} }, //MOV AH, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, CH}, {IMM, SZ_8}, {NONE} }, //MOV CH, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, DH}, {IMM, SZ_8}, {NONE} }, //MOV DH, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_8, BH}, {IMM, SZ_8}, {NONE} }, //MOV BH, imm8
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_1632}, {NONE} }, //MOV AX, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_ECX}, {IMM, SZ_1632}, {NONE} }, //MOV CX, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EDX}, {IMM, SZ_1632}, {NONE} }, //MOV DX, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EBX}, {IMM, SZ_1632}, {NONE} }, //MOV BX, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_ESP}, {IMM, SZ_1632}, {NONE} }, //MOV SP, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EBP}, {IMM, SZ_1632}, {NONE} }, //MOV BP, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_ESI}, {IMM, SZ_1632}, {NONE} }, //MOV SI, imm16
	{ MOV, 0, 0, 0, {CONST_REG, SZ_1632, R_EDI}, {IMM, SZ_1632}, {NONE} }, //MOV DI, imm16

	//0xC0
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {IMM, SZ_8}}, //SHIFT r/m8, imm8
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {IMM, SZ_8}}, //SHIFT r/m16, imm8
	{RETN, 0, 0, 0, {NONE}, {IMM, SZ_16}, {NONE}}, //RET imm16
	{RETN, 0, 0, 0, {NONE}, {CONSTANT, SZ_16, 0}, {NONE}}, //RET
	{LD_FP, ES, USE_MODRM, 0, {REG_MODRM, SZ_1632}, {MEM_MODRM, SZ_3248}, {NONE}}, //LES r16, m16:16 (stores far pointer stored at mem into ES:REG, seg in ES, offs in REG)
	{LD_FP, DS, USE_MODRM, 0, { REG_MODRM, SZ_1632 }, { MEM_MODRM, SZ_3248 }, { NONE }}, //LDS r16, m16:16
	{ MOV, 0, USE_MODRM, 0, { RM_MODRM, SZ_8 }, { IMM, SZ_8 }, { NONE } }, //MOV r/m8, imm8
	{ MOV, 0, USE_MODRM, 0, { RM_MODRM, SZ_1632 }, { IMM, SZ_1632 }, { NONE } }, //MOV r/m16, imm16
	{ENTER, 0, 0, 0, {NONE}, {IMM, SZ_16}, {IMM, SZ_8}}, //ENTER
	{ LEAVE, 0, 0, 0, {NONE}, {NONE}, {NONE} }, //LEAVE
	{ RETF, 0, 0, 0, {NONE}, {IMM, SZ_16}, {NONE} }, //RETF imm16
	{ RETF, 0, 0, 0, {NONE}, {CONSTANT, SZ_16, 0}, {NONE} }, //RETF
	{ INT_OP, 0, 0, 0, {NONE}, {CONSTANT, SZ_8, 0}, {NONE} }, //INT3
	{ INT_OP, 0, 0, 0, {NONE}, {IMM, SZ_8}, {NONE} }, //INT imm8
	UNDEFINED, //INTO
	{IRET, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //IRET

	//0xD0
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {CONSTANT, SZ_8, 1}}, //SHIFT r/m8, 1
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {CONSTANT, SZ_8, 1}}, //SHIFT r/m16, 1
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {CONST_REG, SZ_8, CL}}, //SHIFT r/m8, CL
	{SHIFT, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {CONST_REG, SZ_8, CL}}, //SHIFT r/m16, CL
	UNDEFINED, //AAM
	UNDEFINED, //AAD
	UNDEFINED, //???
	{XLAT, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //XLAT
	UNDEFINED, //ESC...
	UNDEFINED,
	UNDEFINED,
	UNDEFINED,
	UNDEFINED,
	UNDEFINED,
	UNDEFINED,
	UNDEFINED,

	//0xE0
	{LOOP, LOOPNE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //LOOPNE rel8
	{LOOP, LOOPE, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //LOOPE rel8
	{LOOP, LOOP_NORMAL, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //LOOP rel8
	{JUMP, JCXZ, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE}}, //JCXZ rel8
	{IO_IN, 0, 0, 0, {CONST_REG, SZ_8, AL}, {IMM, SZ_8}, {NONE}}, //IN AL, imm8
	{ IO_IN, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {IMM, SZ_8}, {NONE} }, //IN AX, imm8
	{ IO_OUT, 0, 0, 0, {IMM, SZ_8}, {CONST_REG, SZ_8, AL}, {NONE} }, //OUT imm8, AL
	{ IO_OUT, 0, 0, 0, {IMM, SZ_8}, {CONST_REG, SZ_1632, R_EAX}, {NONE} }, //OUT imm8, AX
	{CALL_NEAR, 0, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE}}, //CALL rel16/32
	{JUMP, ALWAYS, 0, 0, {NONE}, {IP_REL, SZ_1632}, {NONE}}, //JMP rel16/32
	{ JUMP_FAR, 0, 0, 0, {NONE}, {FAR_PTR, SZ_3248}, {NONE} }, //FAR JMP
	{ JUMP, ALWAYS, 0, 0, {NONE}, {IP_REL, SZ_8}, {NONE} }, //JMP rel8
	{ IO_IN, 0, 0, 0, {CONST_REG, SZ_8, AL}, {CONST_REG, SZ_16, R_EDX}, {NONE} }, //IN AL, DX
	{ IO_IN, 0, 0, 0, {CONST_REG, SZ_1632, R_EAX}, {CONST_REG, SZ_16, R_EDX}, {NONE} }, //IN AX, DX
	{ IO_OUT, 0, 0, 0, {CONST_REG, SZ_16, R_EDX}, {CONST_REG, SZ_8, AL}, {NONE} }, //OUT DX, AL
	{ IO_OUT, 0, 0, 0, {CONST_REG, SZ_16, R_EDX}, {CONST_REG, SZ_1632, R_EAX}, {NONE} }, //OUT DX, AX

	//0xF0
	{LOCK, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //LOCK
	UNDEFINED, //???
	{REPNE, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //REPNE/REPNZ prefix
	{REPEZ, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //REP/REPE/REPZ prefix
	UNDEFINED, //HLT
	{CMC, 0, 0, 0, {NONE}, {NONE}, {NONE}}, //CMC
	{ALU_SPECIAL, ALU_MULTI, USE_MODRM | WEIRD, 0, {NONE}, {RM_MODRM, SZ_8}, {NONE}}, //Multi-Op B 8
	{ ALU_SPECIAL, ALU_MULTI, USE_MODRM | WEIRD, 0, {NONE}, {RM_MODRM, SZ_1632}, {NONE} }, //Multi-Op B 16
	{ CLR_FLAG, CARRY, 0, 0, {NONE}, {NONE}, {NONE} }, //CLC
	{ ST_FLAG, CARRY, 0, 0, {NONE}, {NONE}, {NONE} }, //STC
	{ CLR_FLAG, INTERRUPT, 0, 0, {NONE}, {NONE}, {NONE} }, //CLI
	{ ST_FLAG, INTERRUPT, 0, 0, {NONE}, {NONE}, {NONE} }, //STI
	{ CLR_FLAG, DIRECTION, 0, 0, {NONE}, {NONE}, {NONE} }, //CLD
	{ ST_FLAG, DIRECTION, 0, 0, {NONE}, {NONE}, {NONE} }, //STD
	{ MULTIPLEXED_FF, 0, USE_MODRM, 0, {RM_MODRM, SZ_8}, {RM_MODRM, SZ_8}, {NONE} }, //INC/DEC8
	{ MULTIPLEXED_FF, 0, USE_MODRM, 0, {RM_MODRM, SZ_1632}, {RM_MODRM, SZ_1632}, {NONE} }  //Multiplexed 16/32
};

#define MOD(modrm) (((modrm) & 0xc0) >> 6)
#define REG(modrm) (((modrm) & 0x38) >> 3)
#define RM(modrm) ((modrm) & 0x7)

#define SCALE(SIB)	((SIB) >> 6)
#define INDEX(SIB)	(((SIB) & 0x38) >> 3)
#define BASE(SIB)	((SIB) & 0x7)

#define GET_FLAG(flag)     ((pCPU->eflags & (1 << (flag))) >> (flag))
#define SET_FLAG(flag)		(pCPU->eflags |= (1 << (flag)))
#define CLEAR_FLAG(flag)	(pCPU->eflags &= ~(1 << (flag)))
#define COND_FLAG(flag, val)	if(val){SET_FLAG(flag);}else{CLEAR_FLAG(flag);}

#define SetAF(x,y,z)	COND_FLAG(AC, ((x) ^ (y) ^ (z)) & 0x10)
#define SetPF(v)		COND_FLAG(PARITY, !(i386_parity_table[v & 0xFF]))

#define SetFlagSize(v, flag)	switch(src1->size){ \
									case SZ_8: flag##8(v); break; \
									case SZ_16: flag##16(v); break; \
									case SZ_32: flag##32(v); break; \
									default: printf("Fuck you!\n"); while(1); \
								}

#define SetSF8(v)		COND_FLAG(SIGN, (v) & 0x80)
#define SetSF16(v)		COND_FLAG(SIGN, (v) & 0x8000)
#define SetSF32(v)		COND_FLAG(SIGN, (v) & 0x80000000)
#define SetSF(v)		SetFlagSize(v, SetSF)

#define SetCF8(v)		COND_FLAG(CARRY, (v) & 0x100)
#define SetCF16(v)		COND_FLAG(CARRY, (v) & 0x10000)
#define SetCF32(v)		COND_FLAG(CARRY, (v) & ( ((uint64_t)1) << 32  ))
#define SetCF(v)		SetFlagSize(v, SetCF)

//#define SetZF(v)		COND_FLAG(ZERO, (v)==0)
#define SetZF8(v)		COND_FLAG(ZERO, (v & 0xFF)==0)
#define SetZF16(v)		COND_FLAG(ZERO, (v & 0xFFFF)==0)
#define SetZF32(v)		COND_FLAG(ZERO, (v & 0xFFFFFFFF)==0)
#define SetZF(v)		SetFlagSize(v, SetZF)

#define SetFlagSizeOF(a,b,d,flag)	switch(src1->size){ \
									case SZ_8: flag##8(a,b,d); break; \
									case SZ_16: flag##16(a,b,d); break; \
									case SZ_32: flag##32(a,b,d); break; \
									default: printf("Fuck you!\n"); while(1); \
								}

#define S8(num)				((num)&0x80)
#define S16(num)			((num)&0x8000)
#define S32(num)			((num)&0x80000000)

//#define SetOF_Add8(a,b,d)	COND_FLAG(OVERFLOW, (((a) ^ (b)) & ((a) ^ (d))) & 0x80)
#define SetOF_Add8(a,b,d)	COND_FLAG(OVERFLOW, (!(S8(a) ^ S8(b))) && (S8(a) ^ S8(d)))
#define SetOF_Add16(a,b,d)	COND_FLAG(OVERFLOW, (!(S16(a) ^ S16(b))) && (S16(a) ^ S16(d)))
#define SetOF_Add32(a,b,d)	COND_FLAG(OVERFLOW, (!(S32(a) ^ S32(b))) && (S32(a) ^ S32(d)))
#define SetOF_Add(a,b,d)	SetFlagSizeOF(a,b,d, SetOF_Add)

#define SetOF_Sub8(a,b,d)	COND_FLAG(OVERFLOW, (!(S8(d) ^ S8(b))) && (S8(a) ^ S8(d)))
#define SetOF_Sub16(a,b,d)	COND_FLAG(OVERFLOW, (!(S16(d) ^ S16(b))) && (S16(a) ^ S16(d)))
#define SetOF_Sub32(a,b,d)	COND_FLAG(OVERFLOW, (!(S32(d) ^ S32(b))) && (S32(a) ^ S32(d)))
#define SetOF_Sub(a,b,d)	SetFlagSizeOF(a,b,d, SetOF_Sub)

#define IOPL(flags) (((flags) & 0x3000) >> 12)

//macros to set/clear each cpu flag
//get current value of a cpu flag
//set/clear flag based on result
//flags in control regs

typedef struct _SEGREG {
	uint16_t selector;

	//descriptor
	uint32_t base;
	uint32_t limit;
	uint8_t access;
	uint8_t flags;
} SEGREG;

#define VALID(desc)	((desc.access & 0x80) >> 7)
#define DPL(desc)	((desc.access & 0x60) >> 5)
#define STYPE(desc)	((desc.access & 0x10) >> 4)
#define EXEC(desc)	((desc.access & 0x8) >> 3)
#define CONF(desc)	((desc.access & 0x4) >> 2)
#define RW(desc)	((desc.access & 0x2) >> 1)

#define MODE(desc)	((desc.flags & 0x4) >> 2)
#define GRAN(desc)	((desc.flags & 0x8) >> 3)

typedef struct _DESCREG {
	uint16_t limit;
	uint32_t base;
} DESCREG;

typedef struct _i386 { //flag determines current address & op size as well as segment
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

	union {
		struct {
			union {
				uint16_t msw;
				uint32_t cr0;
			};
			uint32_t cr1, cr2, cr3, cr4, cr5, cr6, cr7, cr8;
		};
		uint32_t cr[9];
	};

	union {
		struct {
			uint32_t dr0, dr1, dr2, dr3, dr4, dr5, dr6, dr7;
		};
		uint32_t dr[8];
	};

	union {
		struct {
			uint32_t tr0, tr1, tr2, tr3, tr4, tr5, tr6, tr7;
		};
		uint32_t tr[8];
	};

	union {
		uint16_t ip;
		uint32_t eip;
	};

	union {
		uint16_t old_ip;
		uint32_t old_eip;
	};

	union {
		uint16_t flags;
		uint32_t eflags;
	};

	union {
		struct {
			SEGREG es, cs, ss, ds, fs, gs;
		};
		SEGREG seg_regs[6];
	};

	DESCREG gdtr, ldtr, idtr, taskr;
	int cpl;

	int op_override, addr_override, sgmt_override, overriding_sgmt;
	int running;

	int steps_run;

} i386;

typedef struct _ice_regs {
	uint32_t regs[8];
	uint32_t cr[9];
	uint32_t dr[8];
	uint32_t tr[8];
	uint32_t eip;
	uint32_t eflags;
	SEGREG seg_regs[6];
	DESCREG gdtr, ldtr, idtr, taskr;
	int cpl;
} ice_regs;

#include "EmuWoW.h"
#include "thunk.h"

typedef struct _ThreadContextI386 {
	ThreadContext ctx;
	i386 cpu;
} ThreadContextI386, *PThreadContextI386;

int dis386(unsigned char* address, int vaddr, int op_sz, int addr_sz, int segment_override, int which_segment);

extern CPUVTable i386_vtable;
