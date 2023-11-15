#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "thunks.h"
#include "i386.h"
#include <varargs.h>
#include "pe.h"

uint8_t escape_routine[3] = { 0xcd, 0xff, 0xc3 };

int log_instructions = 1;

#ifndef HEADLESS
#define printf sim_printf

int sim_printf(const char* fmt, ...) {
	if (log_instructions) {
		va_list args;
		int i;
		va_start(args, fmt);
		i = vprintf(fmt, args);
		va_end(args);
		return i;
	}
	return 0;
}
#endif     

const char* reg_names_8[8] = { "AL", "CL", "DL", "BL", "AH", "CH", "DH", "BH" };
const char* reg_names_16[8] = { "AX", "CX", "DX", "BX", "SP", "BP", "SI", "DI" };
const char* reg_names_32[8] = { "EAX", "ECX", "EDX", "EBX", "ESP", "EBP", "ESI", "EDI" };
const char** tables[2] = { reg_names_16, reg_names_32 };

//string functions
void cpu_stosd(i386* cpu) {
	*(uint32_t*)virtual_to_physical_addr(cpu, cpu->edi) = cpu->eax;

	if (cpu->eflags & 0x400) {
		cpu->edi -= 4;
	}
	else {
		cpu->edi += 4;
	}
}

void cpu_stosb(i386* cpu) {
	*(uint8_t*)virtual_to_physical_addr(cpu, cpu->edi) = cpu->al;

	if (cpu->eflags & 0x400) {
		cpu->edi--;
	}
	else {
		cpu->edi++;
	}
}

void cpu_movsd(i386* cpu) {
	*(uint32_t*)virtual_to_physical_addr(cpu, cpu->edi) = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->esi);

	if (cpu->eflags & 0x400) {
		cpu->edi -= 4;
		cpu->esi -= 4;
	}
	else {
		cpu->edi += 4;
		cpu->esi += 4;
	}
}

void cpu_movsw(i386* cpu) {
	*(uint16_t*)virtual_to_physical_addr(cpu, cpu->edi) = *(uint16_t*)virtual_to_physical_addr(cpu, cpu->esi);

	if (cpu->eflags & 0x400) {
		cpu->edi -= 2;
		cpu->esi -= 2;
	}
	else {
		cpu->edi += 2;
		cpu->esi += 2;
	}
}

void cpu_movsb(i386* cpu) {
	*(uint8_t*)virtual_to_physical_addr(cpu, cpu->edi) = *(uint8_t*)virtual_to_physical_addr(cpu, cpu->esi);

	if (cpu->eflags & 0x400) {
		cpu->edi -= 1;
		cpu->esi -= 1;
	}
	else {
		cpu->edi += 1;
		cpu->esi += 11;
	}
}

void cpu_clear_flag(i386* cpu, uint8_t flag) {
	cpu->eflags &= ~(1 << flag);
}

void cpu_set_flag(i386* cpu, uint8_t flag) {
	cpu->eflags |= (1 << flag);
}

void cpu_set_zf(i386* cpu, uint32_t value) {
	if (value == 0) {
		cpu_set_flag(cpu, 6);
	}
	else {
		cpu_clear_flag(cpu, 6);
	}
}

void cpu_set_sf(i386* cpu, uint32_t value) {
	if (value & 0x80000000) {
		cpu_set_flag(cpu, 7);
	}
	else {
		cpu_clear_flag(cpu, 7);
	}
}

void cpu_flip_cf(i386* cpu) {
	if (cpu->eflags & 0x1) {
		cpu_clear_flag(cpu, 0);
	}
	else {
		cpu_set_flag(cpu, 0);
	}
}

void cpu_set_cf(i386* cpu, uint32_t value) {
	if (value) {
		cpu_set_flag(cpu, 0);
	}
	else {
		cpu_clear_flag(cpu, 0);
	}
}

void cpu_scasb(i386* cpu) {
	uint8_t temp = cpu->al - *virtual_to_physical_addr(cpu, cpu->edi);

	if (cpu->eflags & 0x400) {
		cpu->edi--;
	}
	else {
		cpu->edi++;
	}
}

void alu_idiv32(i386* cpu, int32_t divisor) { //also has to set flags
	int64_t dividend = (cpu->edx << 32) | cpu->eax;
	int64_t result = dividend / divisor;
	int64_t rem = dividend % divisor;

	cpu->eax = result;
	cpu->edx = rem;
}

void alu_div32(i386* cpu, uint32_t divisor) { //also has to set flags
	uint64_t dividend = (cpu->edx << 32) | cpu->eax;
	uint64_t result = dividend / divisor;
	uint64_t rem = dividend % divisor;

	cpu->eax = result;
	cpu->edx = rem;
}

uint8_t alu_or8(i386* cpu, uint8_t a, uint8_t b) { //also has to set flags
	uint8_t result = a | b;
	cpu_clear_flag(cpu, 0); //clear cf
	cpu_clear_flag(cpu, 11); //clear of
	cpu_set_zf(cpu, result);
	cpu_set_sf(cpu, (int32_t)(int8_t)result);
	return result;
}

uint32_t alu_shl32(i386* cpu, uint32_t a, uint8_t shamt) { //also has to set flags
	uint32_t result = a << shamt;

	return result;
}

int32_t alu_sar32(i386* cpu, int32_t a, uint8_t shamt) { //also has to set flags
	int32_t result = a >> shamt;

	return result;
}

uint16_t alu_shl16(i386* cpu, uint16_t a, uint8_t shamt) { //also has to set flags
	uint16_t result = a << shamt;

	return result;
}

int16_t alu_sar16(i386* cpu, int16_t a, uint8_t shamt) { //also has to set flags
	int16_t result = a >> shamt;

	return result;
}

uint32_t alu_ror32(i386* cpu, uint32_t a, uint8_t shamt) { //flags
	return (a >> shamt) | (a << (32 - shamt));
}

uint32_t alu_rol32(i386* cpu, uint32_t a, uint8_t shamt) { //flags
	return (a << shamt) | (a >> (32 - shamt));
}

uint32_t alu_rcr32(i386* cpu, uint32_t a, uint8_t shamt) { //flags
	uint64_t x = (a) | ((uint64_t)(cpu->eflags & 0x1) << 32);
	uint64_t n = ((x >> shamt) | (x << (33 - shamt)));
	//printf("\n	(CF=%d) %x rcr %x = %x", cpu->eflags & 0x1, a, shamt, n);
	cpu_set_cf(cpu, n >> 32);
	//printf(" (and CF=%d)", cpu->eflags & 0x1);
	return n;
}

int8_t alu_sar8(i386* cpu, int8_t a, uint8_t shamt) { //also has to set flags
	int8_t result = a >> shamt;

	return result;
}

uint16_t alu_shr16(i386* cpu, uint16_t a, uint8_t shamt) { //also has to set flags
	uint16_t result = a >> shamt;

	return result;
}

uint32_t alu_shr32(i386* cpu, uint32_t a, uint8_t shamt) { //also has to set flags
	uint32_t result = a >> shamt;

	return result;
}

uint32_t alu_sub32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint32_t result = a - b;
	cpu_set_zf(cpu, result);
	cpu_set_sf(cpu, result);
	cpu_set_cf(cpu, result > a);
	return result;
}

uint16_t alu_sub16(i386* cpu, uint16_t a, uint16_t b) { //also has to set flags
	uint16_t result = a - b;
	cpu_set_zf(cpu, result);
	cpu_set_sf(cpu, (int32_t)(int16_t)result);
	cpu_set_cf(cpu, result > a);
	return result;
}

uint8_t alu_sub8(i386* cpu, uint8_t a, uint8_t b) { //also has to set flags
	uint8_t result = a - b;
	cpu_set_zf(cpu, result);
	cpu_set_sf(cpu, (int32_t)(int8_t)result);
	cpu_set_cf(cpu, result > a);
	return result;
}

uint32_t alu_and32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint32_t result = a & b;
	cpu_set_zf(cpu, result);
	return result;
}

uint16_t alu_and16(i386* cpu, uint16_t a, uint16_t b) { //also has to set flags
	uint16_t result = a & b;
	cpu_set_zf(cpu, result);
	return result;
}

uint8_t alu_and8(i386* cpu, uint8_t a, uint8_t b) { //also has to set flags
	uint8_t result = a & b;
	cpu_set_zf(cpu, result);
	return result;
}

uint8_t alu_add8(i386* cpu, uint8_t a, uint8_t b) { //also has to set flags
	uint8_t result = a + b;
	return result;
}

uint32_t alu_add32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint32_t result = a + b;
	return result;
}

int64_t alu_imul32(i386* cpu, int32_t a, int32_t b) { //also has to set flags
	int64_t result = a * b;
	return result;
}

uint64_t alu_mul32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint64_t result = a * b;
	return result;
}

uint32_t alu_neg32(i386* cpu, uint32_t a) { //also has to set flags
	uint32_t result = -a;
	return result;
}

int32_t alu_imul16(i386* cpu, int16_t a, int16_t b) { //also has to set flags
	int32_t result = a * b;
	return result;
}

uint32_t alu_xor32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint32_t result = a ^ b;
	return result;
}

uint16_t alu_xor16(i386* cpu, uint16_t a, uint16_t b) { //also has to set flags
	uint16_t result = a ^ b;
	return result;
}

uint8_t alu_xor8(i386* cpu, uint8_t a, uint8_t b) { //also has to set flags
	uint8_t result = a ^ b;
	return result;
}

uint32_t alu_or32(i386* cpu, uint32_t a, uint32_t b) { //also has to set flags
	uint32_t result = a | b;
	cpu_set_zf(cpu, result);
	return result;
}

void cpu_mov8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = *src_ptr;
}


void cpu_mov16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	*dst_ptr = *src_ptr;
}

void cpu_mov32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = *src_ptr;
}

void cpu_add16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	printf("16-bit addition is unimplemented!");
	//cpu->running = 0;
}

void cpu_or16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	printf("16-bit OR is unimplemented!");
	//cpu->running = 0;
}

void cpu_or8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = alu_or8(cpu, *dst_ptr, *src_ptr);
}

void cpu_adc16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	printf("16-bit add with carry is unimplemented!");
	//cpu->running = 0;
}

void cpu_sbb16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	*dst_ptr = alu_sub16(cpu, *dst_ptr, *src_ptr + (cpu->eflags & 0x1));
	//cpu->running = 0;
}

void cpu_and16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	*dst_ptr = alu_and16(cpu, *dst_ptr, *src_ptr);
	//cpu->running = 0;
}

void cpu_sub16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	printf("16-bit subtraction is unimplemented!");
	//cpu->running = 0;
}

void cpu_xor16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	*dst_ptr = alu_xor16(cpu, *dst_ptr, *src_ptr);
	//cpu->running = 0;
}

void cpu_cmp16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	alu_sub16(cpu, *dst_ptr, *src_ptr);
}

void cpu_add32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_add32(cpu, *dst_ptr, *src_ptr);
}

void cpu_add8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = alu_add8(cpu, *dst_ptr, *src_ptr);
}

void cpu_or32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_or32(cpu, *dst_ptr, *src_ptr);
}

void cpu_adc32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_add32(cpu, *dst_ptr, *src_ptr + (cpu->eflags & 0x1));
}

void cpu_sbb32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_sub32(cpu, *dst_ptr, *src_ptr + (cpu->eflags & 0x1));
}

void cpu_and32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_and32(cpu, *dst_ptr, *src_ptr);
}

void cpu_test32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	alu_and32(cpu, *dst_ptr, *src_ptr);
}

void cpu_test16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	alu_and16(cpu, *dst_ptr, *src_ptr);
}

void cpu_test8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	alu_and8(cpu, *dst_ptr, *src_ptr);
}

void cpu_sub32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_sub32(cpu, *dst_ptr, *src_ptr);
}

void cpu_xor32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	*dst_ptr = alu_xor32(cpu, *dst_ptr, *src_ptr);
}

void cpu_cmp32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	//printf("Comparing %d with %d\n", *dst_ptr, *src_ptr);
	alu_sub32(cpu, *dst_ptr, *src_ptr);
}

void cpu_xchg32(i386* cpu, uint32_t* dst_ptr, uint32_t* src_ptr) {
	uint32_t a = *dst_ptr;
	uint32_t b = *src_ptr;
	*dst_ptr = b;
	*src_ptr = a;
}

void cpu_xchg16(i386* cpu, uint16_t* dst_ptr, uint16_t* src_ptr) {
	uint16_t a = *dst_ptr;
	uint16_t b = *src_ptr;
	*dst_ptr = b;
	*src_ptr = a;
}

void cpu_inc32(i386* cpu, uint32_t* dst_ptr) {
	(*dst_ptr)++;
	cpu_set_zf(cpu, *dst_ptr);
	cpu_set_sf(cpu, *dst_ptr);
}

void cpu_dec32(i386* cpu, uint32_t* dst_ptr) {
	(*dst_ptr)--;
	cpu_set_zf(cpu, *dst_ptr);
	cpu_set_sf(cpu, *dst_ptr);
}

void cpu_inc16(i386* cpu, uint16_t* dst_ptr) {
	(*dst_ptr)++;
	cpu_set_zf(cpu, *dst_ptr);
	cpu_set_sf(cpu, *dst_ptr);
}

void cpu_dec16(i386* cpu, uint16_t* dst_ptr) {
	printf("16-bit decrement is unimplemented!");
	//cpu->running = 0;
}

void cpu_shl16(i386* cpu, uint16_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_shl16(cpu, *dst_ptr, shamt);
}

void cpu_shr16(i386* cpu, uint16_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_shr16(cpu, *dst_ptr, shamt);
}

void cpu_sar16(i386* cpu, uint16_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_sar16(cpu, *dst_ptr, shamt);
}

void cpu_shl32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_shl32(cpu, *dst_ptr, shamt);
}

void cpu_shr32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_shr32(cpu, *dst_ptr, shamt);
}

void cpu_ror32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_ror32(cpu, *dst_ptr, shamt);
}

void cpu_rol32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_rol32(cpu, *dst_ptr, shamt);
}

void cpu_rcr32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_rcr32(cpu, *dst_ptr, shamt);
}

void cpu_sar32(i386* cpu, uint32_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_sar32(cpu, *dst_ptr, shamt);
}

void cpu_sar8(i386* cpu, uint8_t* dst_ptr, uint8_t shamt) {
	*dst_ptr = alu_sar8(cpu, *dst_ptr, shamt);
}

void cpu_adc8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	printf("8-bit add with carry is unimplemented!");
	//cpu->running = 0;
}

void cpu_sbb8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = alu_sub16(cpu, *dst_ptr, *src_ptr + (cpu->eflags & 0x1));
	//cpu->running = 0;
}

void cpu_and8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = alu_and8(cpu, *dst_ptr, *src_ptr);
}

void cpu_xor8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	*dst_ptr = alu_xor8(cpu, *dst_ptr, *src_ptr);
}

void cpu_sub8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	printf("8-bit subtract is unimplemented!");
	//cpu->running = 0;
}

void cpu_cmp8(i386* cpu, uint8_t* dst_ptr, uint8_t* src_ptr) {
	alu_sub8(cpu, *dst_ptr, *src_ptr);
}

const char* arith_family_names[8] = { "ADD", "OR", "ADC", "SBB", "AND", "SUB", "XOR", "CMP" };
void(*arith_family_fns_8[8])(i386*, uint8_t*, uint8_t*) = { cpu_add8, cpu_or8, cpu_adc8, cpu_sbb8, cpu_and8, cpu_sub8, cpu_xor8, cpu_cmp8 };
void(*arith_family_fns_16[8])(i386*, uint16_t*, uint16_t*) = { cpu_add16, cpu_or16, cpu_adc16, cpu_sbb16, cpu_and16, cpu_sub16, cpu_xor16, cpu_cmp16 };
void(*arith_family_fns_32[8])(i386*, uint32_t*, uint32_t*) = { cpu_add32, cpu_or32, cpu_adc32, cpu_sbb32, cpu_and32, cpu_sub32, cpu_xor32, cpu_cmp32 };

const char* mul_family_names[8] = { "TEST", NULL, "NOT", "NEG", "MUL", "IMUL", "DIV", "IDIV" };

const char* shift_family_names[8] = { "ROL", "ROR", "RCL", "RCR", "SHL", "SHR", "???", "SAR" };
void(*shift_family_fns_8[8])(i386*, uint8_t*, uint8_t) = { 0, 0, 0, 0, 0, 0, 0, cpu_sar8 };
void(*shift_family_fns_16[8])(i386*, uint16_t*, uint8_t) = { 0, 0, 0, 0, cpu_shl16, cpu_shr16, 0, cpu_sar16 };
void(*shift_family_fns_32[8])(i386*, uint32_t*, uint8_t) = { cpu_rol32, cpu_ror32, 0, cpu_rcr32, cpu_shl32, cpu_shr32, 0, cpu_sar32 };

void cpu_push16(i386* cpu, uint16_t* val) {
	cpu->esp -= 2;
	*(uint16_t*)virtual_to_physical_addr(cpu, cpu->esp) = *val;
}

void cpu_push32(i386* cpu, uint32_t* val) {
	cpu->esp -= 4;
	*(uint32_t*)virtual_to_physical_addr(cpu, cpu->esp) = *val;
}

uint32_t cpu_pop32(i386* cpu) {
	uint32_t val = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->esp);
	cpu->esp += 4;
	return val;
}

void cpu_call(i386* cpu, uint32_t* new_eip) {
	cpu_push32(cpu, &(cpu->eip));
	cpu->eip = *new_eip;
}

void cpu_jump(i386* cpu, uint32_t* new_eip) {
	cpu->eip = *new_eip;
}

uint8_t* get_reg_8(i386* cpu, uint8_t reg) {
	switch (reg) {
	case 0:
		return &(cpu->al);
		break;
	case 1:
		return &(cpu->cl);
		break;
	case 2:
		return &(cpu->dl);
		break;
	case 3:
		return &(cpu->bl);
		break;
	case 4:
		return &(cpu->ah);
		break;
	case 5:
		return &(cpu->ch);
		break;
	case 6:
		return &(cpu->dh);
		break;
	case 7:
		return &(cpu->bh);
		break;
	}
}

uint32_t* get_reg_1632(i386* cpu, uint8_t reg) {
	switch (reg) {
	case 0:
		return &(cpu->eax);
		break;
	case 1:
		return &(cpu->ecx);
		break;
	case 2:
		return &(cpu->edx);
		break;
	case 3:
		return &(cpu->ebx);
		break;
	case 4:
		return &(cpu->esp);
		break;
	case 5:
		return &(cpu->ebp);
		break;
	case 6:
		return &(cpu->esi);
		break;
	case 7:
		return &(cpu->edi);
		break;
	}
}

const char* ff_family_names[8] = { "INC", "DEC", "CALL", 0, "JMP", 0, "PUSH", 0 };
void(*ff_family_fns_32[8])(i386*, uint32_t*) = { cpu_inc32, cpu_dec32, cpu_call, 0, cpu_jump, 0, cpu_push32, 0 };
void(*ff_family_fns_16[8])(i386*, uint16_t*) = { cpu_inc16, cpu_dec16, 0, 0, 0, 0, 0, 0 };

uint32_t calc_sib(i386* cpu, uint8_t modrm) {
	uint8_t sib = *virtual_to_physical_addr(cpu, cpu->eip);
	uint32_t addr;

	if (BASE(sib) == 5) {
		if (MOD(modrm) == 0) {
			addr = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip + 1);
			printf("%p", addr);
			cpu->eip += 4;
		}
		else {
			addr = cpu->ebp;
			printf("EBP");
		}
	}
	else {
		addr = *(get_reg_1632(cpu, BASE(sib)));
		printf("%s", reg_names_32[BASE(sib)]);
	}

	if (INDEX(sib) != 4) {
		addr += *(get_reg_1632(cpu, INDEX(sib))) << SCALE(sib);
		printf("+%s*%d", reg_names_32[INDEX(sib)], 1 << SCALE(sib));
	}

	cpu->eip++;

	return addr;
}

uint32_t calc_modrm_addr(i386* cpu, uint8_t modrm) {
	uint32_t addr;

	printf("[");

	if (RM(modrm) == 4) { //using SIB as a base
		addr = calc_sib(cpu, modrm);
	}
	else if (MOD(modrm) != 0 || (MOD(modrm) == 0 && RM(modrm) != 5)) { //using a register as a base
		addr = *(get_reg_1632(cpu, RM(modrm)));
		printf("%s", reg_names_32[RM(modrm)]);
	}

	uint32_t* disp = (uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (MOD(modrm)) {
	case 0:
		if (RM(modrm) == 5) { //disp32 only
			addr = *disp;
			cpu->ip += 4;
			printf("%p", addr);
		}
		else { //register only
			//do nothing, we already got the reg
		}
		break;
	case 1: //disp8
		addr += (int32_t) * (int8_t*)disp;
		cpu->ip++;
		printf("+%p", (int32_t) * (int8_t*)disp);
		break;
	case 2: //disp32
		addr += *disp;
		cpu->ip += 4;
		printf("+%p", *disp);
		break;
	}

	printf("]");

	return addr + cpu->base;
}

void op_00(i386* cpu) { //ADD r/m8, r8
	get_modrm();
	cpu->eip += 2;
	printf("ADD ");
	get_modrm_dst_ptr_8(1);
	get_modrm_src_reg_8();

	printf("%s", reg_names_8[REG(modrm)]);
	cpu_add8(cpu, (uint8_t*)dst_ptr, (uint8_t*)src_ptr);
}

void op_01(i386* cpu) { //ADD r/m16/32, r16/32
	get_modrm();
	cpu->eip += 2;
	printf("ADD ");
	get_modrm_dst_ptr(1);
	get_modrm_src_reg_1632();

	switch (cpu->operand_size) {
	case 0:
		printf("%s", reg_names_16[REG(modrm)]);
		cpu_add16(cpu, (uint16_t*)dst_ptr, (uint16_t*)src_ptr);
		break;
	case 1:
		printf("%s", reg_names_32[REG(modrm)]);
		cpu_add32(cpu, dst_ptr, src_ptr);
		break;
	}
}

void op_03(i386* cpu) { //ADD r16/32, r/m16/32
	get_modrm();
	cpu->eip += 2;
	get_modrm_src_reg_1632();
	printf("ADD %s, ", reg_names_32[REG(modrm)]);
	get_modrm_dst_ptr(0);
	cpu_add32(cpu, src_ptr, dst_ptr);
}

void op_04(i386* cpu) { //ADD AL, imm8
	cpu->eip++;
	uint8_t* imm = virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf("ADD AL, %02x", *imm);
	cpu_add8(cpu, &(cpu->al), imm);
}

void op_05(i386* cpu) { //ADD EAX, imm32
	cpu->eip++;
	uint32_t* imm = (uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("ADD ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", *imm);
		cpu->eip += 2;
		cpu_add16(cpu, &(cpu->ax), (uint16_t*)imm);
		break;
	case 1:
		printf("EAX, %08x", *imm);
		cpu->eip += 4;
		cpu_add32(cpu, &(cpu->eax), imm);
		break;
	}
}

void op_08(i386* cpu) { //OR r/m8, r8
	printf("OR ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr_8(1);
	get_modrm_src_reg_8();
	printf("%s", reg_names_8[REG(modrm)]);

	cpu_or8(cpu, (uint8_t*)dst_ptr, (uint8_t*)src_ptr);
}

void op_0A(i386* cpu) { //OR r8, r/m8
	get_modrm();
	cpu->eip += 2;
	get_modrm_src_reg_8();
	printf("OR %s, ", reg_names_8[REG(modrm)]);
	get_modrm_dst_ptr_8(0);
	cpu_or8(cpu, src_ptr, dst_ptr);
}

void op_0B(i386* cpu) { //OR r16/32, r/m16/32
	get_modrm();
	cpu->eip += 2;
	get_modrm_src_reg_1632();
	printf("OR %s, ", reg_names_32[REG(modrm)]);
	get_modrm_dst_ptr(0);
	cpu_or32(cpu, src_ptr, dst_ptr);
}

void op_0C(i386* cpu) { //OR al, imm8
	cpu->eip++;
	uint8_t* imm = virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf("OR AL, %02x", *imm);
	cpu_or8(cpu, &(cpu->al), imm);
}

void op_0F(i386* cpu) { //extended instruction prefix
	cpu->eip++;
	uint8_t opcode = *virtual_to_physical_addr(cpu, cpu->eip);

	if (extended_op_table[opcode]) {
		extended_op_table[opcode](cpu);
	}
	else {
		printf("Unimplemented extended instruction 0x0F:%02x", opcode);
		while (1);// while(1); //cpu->running = 0;
	}
}

void op_1B(i386* cpu) { //sbb r16/32, r/m16/32
	get_modrm();
	cpu->eip += 2;
	printf("SBB ");
	get_modrm_src_reg_1632();

	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);

	switch (cpu->operand_size) {
	case 0:
		cpu_sbb16(cpu, (uint16_t*)src_ptr, (uint16_t*)dst_ptr);
		break;
	case 1:
		cpu_sbb32(cpu, src_ptr, dst_ptr);
		break;
	}
}

void op_1C(i386* cpu) {
	cpu->eip++;
	uint8_t* imm = virtual_to_physical_addr(cpu, cpu->eip);
	printf("SBB AL, %02x", *imm);
	cpu_sbb8(cpu, &(cpu->al), imm);
	cpu->eip++;
}

void op_1D(i386* cpu) {
	cpu->eip++;
	uint32_t* imm = virtual_to_physical_addr(cpu, cpu->eip);
	printf("SBB ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", *(uint16_t*)imm);
		cpu_sbb16(cpu, &(cpu->ax), imm);
		cpu->eip += 2;
		break;
	case 1:
		printf("EAX, %08x", *imm);
		cpu_sbb32(cpu, &(cpu->eax), imm);
		cpu->eip += 4;
		break;
	}
}

void op_23(i386* cpu) { //AND r16/32, r/m16/32
	printf("AND ");
	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);

	switch (cpu->operand_size) {
	case 0:
		cpu_and16(cpu, (uint16_t*)src_ptr, (uint16_t*)dst_ptr);
		break;
	case 1:
		cpu_and32(cpu, src_ptr, dst_ptr);
		break;
	}
}

void op_24(i386* cpu) { //AND eax, imm32
	cpu->eip++;
	uint8_t imm = *virtual_to_physical_addr(cpu, cpu->eip);
	printf("AND AL, %02x", imm);
	cpu_and8(cpu, &(cpu->al), &imm);
	cpu->eip++;
}

void op_25(i386* cpu) { //AND eax, imm32
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("AND ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", imm);
		cpu_and16(cpu, &(cpu->ax), (uint16_t*)&imm);
		cpu->eip += 2;
		break;
	case 1:
		printf("EAX, %08x", imm);
		cpu_and32(cpu, &(cpu->eax), &imm);
		cpu->eip += 4;
		break;
	}
}

void op_29(i386* cpu) { //SUB r/m16/32, r16/32
	get_modrm();
	cpu->eip += 2;
	printf("SUB ");
	get_modrm_dst_ptr(1);
	get_modrm_src_reg_1632();

	switch (cpu->operand_size) {
	case 0:
		printf("%s", reg_names_16[REG(modrm)]);
		cpu_sub16(cpu, (uint16_t*)dst_ptr, (uint16_t*)src_ptr);
		break;
	case 1:
		printf("%s", reg_names_32[REG(modrm)]);
		cpu_sub32(cpu, dst_ptr, src_ptr);
		break;
	}

}

void op_2B(i386* cpu) { //SUB r16/32, r/m16/32
	get_modrm();
	cpu->eip += 2;
	printf("SUB ");
	get_modrm_src_reg_1632();

	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);

	switch (cpu->operand_size) {
	case 0:
		cpu_sub16(cpu, (uint16_t*)src_ptr, (uint16_t*)dst_ptr);
		break;
	case 1:
		cpu_sub32(cpu, src_ptr, dst_ptr);
		break;
	}
}

void op_2D(i386* cpu) { //SUB eax, imm32
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("SUB ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", imm);
		cpu_sub16(cpu, &(cpu->ax), (uint16_t*)&imm);
		cpu->eip += 2;
		break;
	case 1:
		printf("EAX, %08x", imm);
		cpu_sub32(cpu, &(cpu->eax), &imm);
		cpu->eip += 4;
		break;
	}
}

void op_31(i386* cpu) { //XOR r/m16/32, r16/32
	get_modrm();
	cpu->eip += 2;
	printf("XOR ");
	get_modrm_dst_ptr(1);
	get_modrm_src_reg_1632();

	switch (cpu->operand_size) {
	case 0:
		printf("%s", reg_names_16[REG(modrm)]);
		cpu_sub16(cpu, (uint16_t*)dst_ptr, (uint16_t*)src_ptr);
		break;
	case 1:
		printf("%s", reg_names_32[REG(modrm)]);
		cpu_xor32(cpu, dst_ptr, src_ptr);
		break;
	}

}

void op_33(i386* cpu) { //xor r32, r/m32
	printf("XOR ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	finish_op_swap(cpu_xor16, cpu_xor32);
}

void op_34(i386* cpu) { //XOR AL, imm8
	cpu->eip++;
	uint8_t* imm = virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf("XOR AL, %02x", *imm);
	cpu_xor8(cpu, &(cpu->al), imm);
}

void op_38(i386* cpu) { //CMP r/m8, r8
	printf("CMP ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr_8(1);
	get_modrm_src_reg_8();
	printf("%s", reg_names_8[REG(modrm)]);

	cpu_cmp8(cpu, (uint8_t*)dst_ptr, (uint8_t*)src_ptr);
}

void op_39(i386* cpu) { //CMP r/m16/32, r16/32
	printf("CMP ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);
	get_modrm_src_reg_1632();
	printf("%s", tables[cpu->operand_size][REG(modrm)]);

	switch (cpu->operand_size) {
	case 0:
		cpu_cmp16(cpu, (uint16_t*)dst_ptr, (uint16_t*)src_ptr);
		break;
	case 1:
		cpu_cmp32(cpu, dst_ptr, src_ptr);
		break;
	}
}

void op_3B(i386* cpu) { //CMP r16/32, r/m16/32
	printf("CMP ");
	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);

	switch (cpu->operand_size) {
	case 0:
		cpu_cmp16(cpu, (uint16_t*)src_ptr, (uint16_t*)dst_ptr);
		break;
	case 1:
		cpu_cmp32(cpu, src_ptr, dst_ptr);
		break;
	}
}

void op_3C(i386* cpu) { //CMP AL, imm8
	printf("CMP ");
	cpu->eip++;
	uint8_t imm = *virtual_to_physical_addr(cpu, cpu->eip);

	printf("AL, %02x", imm);
	cpu->eip++;
	cpu_cmp8(cpu, &(cpu->al), &imm);
}

void op_3D(i386* cpu) { //CMP EAX, imm32
	printf("CMP ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", imm);
		cpu->eip += 2;
		cpu_cmp16(cpu, &(cpu->ax), (uint16_t*)&imm);
		break;
	case 1:
		printf("EAX, %08x", imm);
		cpu->eip += 4;
		cpu_cmp32(cpu, &(cpu->eax), &imm);
		break;
	}
}

void op_40(i386* cpu) { //inc eax
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC AX");
		cpu_inc16(cpu, &(cpu->ax));
		break;
	case 1:
		printf("INC EAX");
		cpu_inc32(cpu, &(cpu->eax));
		break;
	}
}

void op_41(i386* cpu) { //inc ecx
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC CX");
		cpu_inc16(cpu, &(cpu->cx));
		break;
	case 1:
		printf("INC ECX");
		cpu_inc32(cpu, &(cpu->ecx));
		break;
	}
}

void op_42(i386* cpu) { //inc edx
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC DX");
		cpu_inc16(cpu, &(cpu->dx));
		break;
	case 1:
		printf("INC EDX");
		cpu_inc32(cpu, &(cpu->edx));
		break;
	}
}

void op_43(i386* cpu) { //inc ebx
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC BX");
		cpu_inc16(cpu, &(cpu->bx));
		break;
	case 1:
		printf("INC EBX");
		cpu_inc32(cpu, &(cpu->ebx));
		break;
	}
}

void op_44(i386* cpu) { //inc esp
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC SP");
		cpu_inc16(cpu, &(cpu->sp));
		break;
	case 1:
		printf("INC ESP");
		cpu_inc32(cpu, &(cpu->esp));
		break;
	}
}

void op_45(i386* cpu) { //inc ebp
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC BP");
		cpu_inc16(cpu, &(cpu->bp));
		break;
	case 1:
		printf("INC EBP");
		cpu_inc32(cpu, &(cpu->ebp));
		break;
	}
}

void op_46(i386* cpu) { //inc esi
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC SI");
		cpu_inc16(cpu, &(cpu->si));
		break;
	case 1:
		printf("INC ESI");
		cpu_inc32(cpu, &(cpu->esi));
		break;
	}
}

void op_47(i386* cpu) { //inc edi
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("INC DI");
		cpu_inc16(cpu, &(cpu->di));
		break;
	case 1:
		printf("INC EDI");
		cpu_inc32(cpu, &(cpu->edi));
		break;
	}
}

void op_48(i386* cpu) { //DEC EAX
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC AX");
		cpu_dec16(cpu, &(cpu->ax));
		break;
	case 1:
		printf("DEC EAX");
		cpu_dec32(cpu, &(cpu->eax));
		break;
	}
}

void op_49(i386* cpu) { //DEC ECX
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC CX");
		cpu_dec16(cpu, &(cpu->cx));
		break;
	case 1:
		printf("DEC ECX");
		cpu_dec32(cpu, &(cpu->ecx));
		break;
	}
}

void op_4A(i386* cpu) { //DEC EDX
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC DX");
		cpu_dec16(cpu, &(cpu->dx));
		break;
	case 1:
		printf("DEC EDX");
		cpu_dec32(cpu, &(cpu->edx));
		break;
	}
}

void op_4B(i386* cpu) { //DEC EBX
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC BX");
		cpu_dec16(cpu, &(cpu->bx));
		break;
	case 1:
		printf("DEC EBX");
		cpu_dec32(cpu, &(cpu->ebx));
		break;
	}
}

void op_4C(i386* cpu) { //DEC ESP
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC SP");
		cpu_dec16(cpu, &(cpu->sp));
		break;
	case 1:
		printf("DEC ESP");
		cpu_dec32(cpu, &(cpu->esp));
		break;
	}
}

void op_4D(i386* cpu) { //DEC EBP
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC BP");
		cpu_dec16(cpu, &(cpu->bp));
		break;
	case 1:
		printf("DEC EBP");
		cpu_dec32(cpu, &(cpu->ebp));
		break;
	}
}

void op_4E(i386* cpu) { //DEC ESI
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC SI");
		cpu_dec16(cpu, &(cpu->si));
		break;
	case 1:
		printf("DEC ESI");
		cpu_dec32(cpu, &(cpu->esi));
		break;
	}
}

void op_4F(i386* cpu) { //DEC EDI
	cpu->eip++;

	switch (cpu->operand_size) {
	case 0:
		printf("DEC DI");
		cpu_dec16(cpu, &(cpu->di));
		break;
	case 1:
		printf("DEC EDI");
		cpu_dec32(cpu, &(cpu->edi));
		break;
	}
}

void op_50(i386* cpu) { //push eax
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX");
		cpu_push16(cpu, &(cpu->ax));
		break;
	case 1:
		printf("EAX");
		cpu_push32(cpu, &(cpu->eax));
		break;
	}

	cpu->eip++;
}

void op_51(i386* cpu) { //push ecx
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("CX");
		cpu_push16(cpu, &(cpu->cx));
		break;
	case 1:
		printf("ECX");
		cpu_push32(cpu, &(cpu->ecx));
		break;
	}

	cpu->eip++;
}


void op_52(i386* cpu) { //push edx
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("DX");
		cpu_push16(cpu, &(cpu->dx));
		break;
	case 1:
		printf("EDX");
		cpu_push32(cpu, &(cpu->edx));
		break;
	}

	cpu->eip++;
}


void op_53(i386* cpu) { //push ebx
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("BX");
		cpu_push16(cpu, &(cpu->bx));
		break;
	case 1:
		printf("EBX");
		cpu_push32(cpu, &(cpu->ebx));
		break;
	}

	cpu->eip++;
}

void op_54(i386* cpu) { //push esp
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("SP");
		cpu_push16(cpu, &(cpu->sp));
		break;
	case 1:
		printf("ESP");
		cpu_push32(cpu, &(cpu->esp));
		break;
	}

	cpu->eip++;
}

void op_55(i386* cpu) { //push ebp
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("BP");
		cpu_push16(cpu, &(cpu->bp));
		break;
	case 1:
		printf("EBP");
		cpu_push32(cpu, &(cpu->ebp));
		break;
	}

	cpu->eip++;
}

void op_56(i386* cpu) { //push esi
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("SI");
		cpu_push16(cpu, &(cpu->si));
		break;
	case 1:
		printf("ESI");
		cpu_push32(cpu, &(cpu->esi));
		break;
	}

	cpu->eip++;
}

void op_57(i386* cpu) { //push edi
	printf("PUSH ");

	switch (cpu->operand_size) {
	case 0:
		printf("DI");
		cpu_push16(cpu, &(cpu->di));
		break;
	case 1:
		printf("EDI");
		cpu_push32(cpu, &(cpu->edi));
		break;
	}

	cpu->eip++;
}

void op_58(i386* cpu) { //pop eax
	printf("POP EAX");
	cpu->eax = cpu_pop32(cpu);
	cpu->eip++;
}

void op_59(i386* cpu) { //pop ecx
	printf("POP ECX");
	cpu->ecx = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5A(i386* cpu) { //pop edx
	printf("POP EDX");
	cpu->edx = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5B(i386* cpu) { //pop ebx
	printf("POP EBX");
	cpu->ebx = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5C(i386* cpu) { //pop esp
	printf("POP ESP");
	cpu->esp = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5D(i386* cpu) { //pop ebp
	printf("POP EBP");
	cpu->ebp = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5E(i386* cpu) { //pop esi
	printf("POP ESI");
	cpu->esi = cpu_pop32(cpu);
	cpu->eip++;
}

void op_5F(i386* cpu) { //pop edi
	printf("POP EDI");
	cpu->edi = cpu_pop32(cpu);
	cpu->eip++;
}

void op_64(i386* cpu) { //FS segment override -- hack to skip over
	cpu->eip++;
	/*printf("FS segment override");
	uint8_t next_instruction = *virtual_to_physical_addr(cpu, cpu->eip);

	switch (next_instruction) {
	case 0x89:
		cpu->eip += 6;
		break;
	case 0xa1:
		cpu->eip += 5;
		break;
	case 0xa3:
		cpu->eip += 5;
		break;
	default:
		printf("Unimplemented opcode 0x%02x", next_instruction);
		while(1); //cpu->running = 0;
		break;
	}*/
	cpu->base = cpu->fs;

	printf("FS ");

	cpu->print_addr = 0;
	(((CPU*)cpu) - 1)->step((((CPU*)cpu) - 1));
	cpu->print_addr = 1;

	cpu->base = 0;
}

void op_66(i386* cpu) { //WORD prefix
	cpu->operand_size = !cpu->operand_size;
	cpu->eip++;
	printf("WORD ");

	cpu->print_addr = 0;
	(((CPU*)cpu) - 1)->step((((CPU*)cpu) - 1));
	cpu->print_addr = 1;

	cpu->operand_size = !cpu->operand_size;
}

void op_68(i386* cpu) { //push imm16/32
	uint32_t imm = *(uint32_t*)(virtual_to_physical_addr(cpu, cpu->eip + 1));

	printf("PUSH ", imm);

	switch (cpu->operand_size) {
	case 0:
		printf("%04x", imm);
		cpu_push16(cpu, (uint16_t*)&imm);
		cpu->eip += 3;
		break;
	case 1:
		printf("%08x", imm);
		cpu_push32(cpu, &imm);
		cpu->eip += 5;
		break;
	}
}

void op_69(i386* cpu) { //IMUL r16/32, r/m16/32, imm16/32
	printf("IMUL ");
	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);
	uint32_t imm = *(uint32_t*)(virtual_to_physical_addr(cpu, cpu->eip));

	switch (cpu->operand_size) {
	case 0:
		printf(", %04x", imm);
		*(uint16_t*)dst_ptr = alu_imul16(cpu, *(uint16_t*)src_ptr, imm);
		cpu->eip += 2;
		break;
	case 1:
		printf(", %08x", imm);
		*(uint32_t*)dst_ptr = alu_imul32(cpu, *src_ptr, imm);
		cpu->eip += 4;
		break;
	}
}

void op_6A(i386* cpu) { //push imm8
	uint32_t imm = (int32_t)(int8_t) * (uint8_t*)(virtual_to_physical_addr(cpu, cpu->eip + 1));

	printf("PUSH %02x", imm);

	switch (cpu->operand_size) {
	case 0:
		cpu_push16(cpu, (uint16_t*)&imm);
		break;
	case 1:
		cpu_push32(cpu, &imm);
		break;
	}

	cpu->eip += 2;
}

void op_6B(i386* cpu) { //IMUL r16/32, r/m16/32, imm8
	printf("IMUL ");
	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	get_modrm_dst_ptr(0);
	uint8_t imm = *(uint8_t*)(virtual_to_physical_addr(cpu, cpu->eip));
	cpu->eip += 1;

	switch (cpu->operand_size) {
	case 0:
		printf(", %02x", imm);
		*(uint16_t*)dst_ptr = alu_imul16(cpu, *(uint16_t*)src_ptr, (int16_t)(int8_t)imm);
		break;
	case 1:
		printf(", %02x", imm);
		*(uint32_t*)dst_ptr = alu_imul32(cpu, *src_ptr, (int32_t)(int8_t)imm);
		break;
	}
}

void op_72(i386* cpu) { //JB rel8
	printf("JC ");
	cjmp(cpu->eflags & 0x1);
}

void op_73(i386* cpu) { //JAE rel8
	printf("JAE ");
	cjmp(!(cpu->eflags & 0x1));
}

void op_74(i386* cpu) { //JE rel8
	printf("JE ");
	cjmp(cpu->eflags & 0x40);
}

void op_75(i386* cpu) { //JNE rel8
	printf("JNE ");
	cjmp(!(cpu->eflags & 0x40));
}

void op_76(i386* cpu) { //JNA rel8
	printf("JNA ");
	cjmp((cpu->eflags & 0x1) || (cpu->eflags & 0x40));
}

void op_77(i386* cpu) { //JA rel8
	printf("JA ");
	cjmp(!(cpu->eflags & 0x1) && !(cpu->eflags & 0x40));
}

void op_78(i386* cpu) { //JS rel8
	printf("JS ");
	cjmp(cpu->eflags & 0x80);
}

void op_79(i386* cpu) { //JNS rel8
	printf("JNS ");
	cjmp(!(cpu->eflags & 0x80));
}

void op_7C(i386* cpu) { //JL rel8
	printf("JL ");
	cjmp(((cpu->eflags & 0x80) >> 7) != ((cpu->eflags & 0x800) >> 11));
}

void op_7D(i386* cpu) { //JGE rel8
	printf("JGE ");
	cjmp((((cpu->eflags & 0x80) >> 7) == ((cpu->eflags & 0x800) >> 11)));
}

void op_7E(i386* cpu) { //JLE rel8
	printf("JLE ");
	cjmp((((cpu->eflags & 0x80) >> 7) != ((cpu->eflags & 0x800) >> 11)) || (cpu->eflags & 0x40));
}

void op_7F(i386* cpu) { //JG rel8
	printf("JG ");
	cjmp((((cpu->eflags & 0x80) >> 7) == ((cpu->eflags & 0x800) >> 11)) && !(cpu->eflags & 0x40));
}

void op_80(i386* cpu) { //op r/m8, imm8
	get_modrm();
	printf("%s ", arith_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr_8(1);

	uint8_t imm = *(virtual_to_physical_addr(cpu, cpu->eip));
	uint8_t* src_ptr = &imm;
	printf("%02x", imm);

	cpu->eip++;

	arith_family_fns_8[REG(modrm)](cpu, (uint8_t*)dst_ptr, src_ptr);
}

void op_81(i386* cpu) { //op r/m16, imm16/32
	get_modrm();
	printf("%s ", arith_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(1);

	uint32_t imm = *(uint32_t*)(virtual_to_physical_addr(cpu, cpu->eip));
	uint32_t* src_ptr = &imm;
	printf("%08x", imm);

	switch (cpu->operand_size) {
	case 0:
		cpu->eip += 2;
	case 1:
		cpu->eip += 4;
	}

	finish_op(arith_family_fns_16[REG(modrm)], arith_family_fns_32[REG(modrm)]);
}

void op_83(i386* cpu) { //op r/m16, imm8
	get_modrm();
	printf("%s ", arith_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(1);

	uint32_t imm = (int32_t)(int8_t) * (uint8_t*)(virtual_to_physical_addr(cpu, cpu->eip));
	uint32_t* src_ptr = &imm;
	printf("%02x", imm);
	cpu->eip++;

	finish_op(arith_family_fns_16[REG(modrm)], arith_family_fns_32[REG(modrm)]);
}

void op_84(i386* cpu) { //test r/m8, r8
	printf("TEST ");
	get_modrm();
	get_modrm_src_reg_8();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);
	cpu_test8(cpu, (uint8_t*)dst_ptr, src_ptr);
	printf("%s", reg_names_8[REG(modrm)]);
}

void op_85(i386* cpu) { //test r/m32, r32
	printf("TEST ");
	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);

	finish_op(cpu_test16, cpu_test32);
	printf("%s", tables[cpu->operand_size][REG(modrm)]);
}

void op_87(i386* cpu) {
	printf("XCHG ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	finish_op_swap(cpu_xchg16, cpu_xchg32);
}

void op_88(i386* cpu) { //MOV r/m8, r8
	printf("MOV ");

	get_modrm();
	get_modrm_src_reg_8();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);
	cpu_mov8(cpu, (uint8_t*)dst_ptr, (uint8_t*)src_ptr);

	printf("%s", reg_names_8[REG(modrm)]);
}

void op_89(i386* cpu) { //MOV r/m32, r32
	printf("MOV ");

	get_modrm();
	get_modrm_src_reg_1632();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);
	finish_op(cpu_mov16, cpu_mov32);

	printf("%s", tables[cpu->operand_size][REG(modrm)]);
}

void op_8A(i386* cpu) { //MOV r8, r/m8
	printf("MOV ");
	get_modrm();
	get_modrm_src_reg_8();
	printf("%s, ", reg_names_8[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);
	*src_ptr = *dst_ptr;
}

void op_8B(i386* cpu) { //MOV r32, r/m32
	printf("MOV ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	finish_op_swap(cpu_mov16, cpu_mov32);
}

void op_8D(i386* cpu) { //LEA r32, m
	get_modrm();
	printf("LEA %s, ", reg_names_32[REG(modrm)]);
	cpu->eip += 2;
	uint32_t addr = calc_modrm_addr(cpu, modrm);
	uint32_t* dst_ptr = get_reg_1632(cpu, REG(modrm));
	*dst_ptr = addr;
}

void op_90(i386* cpu) { //NOP
	printf("NOP");
	cpu->eip++;
}

void op_91(i386* cpu) {
	printf("XCHG EAX, ECX");
	cpu_xchg32(cpu, &(cpu->eax), &(cpu->ecx));
	cpu->eip++;
}

void op_99(i386* cpu) { //CWD/CDQ
	switch (cpu->operand_size) {
	case 0:
		printf("CWD");
		if (cpu->ax & 0x8000) {
			cpu->dx = 0xFFFF;
		}
		else {
			cpu->dx = 0;
		}
		break;
	case 1:
		printf("CDQ");
		if (cpu->eax & 0x80000000) {
			cpu->edx = 0xFFFFFFFF;
		}
		else {
			cpu->edx = 0;
		}
		break;
	}

	cpu->eip++;
}

void op_A0(i386* cpu) {
	cpu->eip++;
	uint32_t addr = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("MOV AL, [%p]", addr);
	cpu->al = *virtual_to_physical_addr(cpu, addr + cpu->base);
	cpu->eip += 4;
}

void op_A1(i386* cpu) {
	cpu->eip++;
	uint32_t addr = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("MOV EAX, [%p]", addr);
	cpu->eax = *(uint32_t*)virtual_to_physical_addr(cpu, addr + cpu->base);
	cpu->eip += 4;
}

void op_A2(i386* cpu) { //MOV [imm8], AL
	cpu->eip++;
	uint32_t addr = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("MOV [%p], AL", addr);
	*(uint8_t*)virtual_to_physical_addr(cpu, addr + cpu->base) = cpu->al;
	cpu->eip += 4;
}

void op_A3(i386* cpu) { //MOV [imm32], eax
	cpu->eip++;
	uint32_t addr = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("MOV [%p], EAX", addr);
	*(uint32_t*)virtual_to_physical_addr(cpu, addr + cpu->base) = cpu->eax;
	cpu->eip += 4;
}

void op_A4(i386* cpu) {
	cpu->eip++;
	printf("MOVSB");
	cpu_movsb(cpu);
}

void op_A5(i386* cpu) {
	cpu->eip++;

	if (cpu->operand_size) {
		cpu_movsd(cpu);
		printf("MOVSD");
	}
	else {
		cpu_movsw(cpu);
		printf("MOVSW");
	}
}

void op_A8(i386* cpu) { //TEST AL, imm
	cpu->eip++;
	uint8_t imm = *virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf("TEST AL, %02x", imm);
	alu_and8(cpu, cpu->al, imm);
}

void op_A9(i386* cpu) { //TEST EAX, imm32
	cpu->eip++;
	uint32_t* imm = (uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("TEST ");

	switch (cpu->operand_size) {
	case 0:
		printf("AX, %04x", *imm);
		cpu->eip += 2;
		alu_and16(cpu, cpu->ax, *imm);
		break;
	case 1:
		printf("EAX, %08x", *imm);
		cpu->eip += 4;
		alu_and32(cpu, cpu->eax, *imm);
		break;
	}
}

void op_AA(i386* cpu) { //stosb
	printf("STOSB");
	cpu_stosb(cpu);
	cpu->eip++;
}

void op_B8(i386* cpu) { //MOV EAX, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("AX, %04x", imm);
		cpu->ax = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EAX, %08x", imm);
		cpu->eax = imm;
		cpu->eip += 4;
		break;
	}
}

void op_B9(i386* cpu) { //MOV ECX, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("CX, %04x", imm);
		cpu->cx = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("ECX, %08x", imm);
		cpu->ecx = imm;
		cpu->eip += 4;
		break;
	}
}

void op_BC(i386* cpu) { //MOV ESP, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("SP, %04x", imm);
		cpu->sp = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EBP, %08x", imm);
		cpu->esp = imm;
		cpu->eip += 4;
		break;
	}
}

void op_BD(i386* cpu) { //MOV EBP, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("BP, %04x", imm);
		cpu->bp = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EBP, %08x", imm);
		cpu->ebp = imm;
		cpu->eip += 4;
		break;
	}
}

void op_BE(i386* cpu) { //MOV ESI, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("SI, %04x", imm);
		cpu->si = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("ESI, %08x", imm);
		cpu->esi = imm;
		cpu->eip += 4;
		break;
	}
}

void op_BF(i386* cpu) { //MOV EDI, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("DI, %04x", imm);
		cpu->di = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EDI, %08x", imm);
		cpu->edi = imm;
		cpu->eip += 4;
		break;
	}
}


void op_BA(i386* cpu) { //MOV EDX, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("DX, %04x", imm);
		cpu->dx = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EDX, %08x", imm);
		cpu->edx = imm;
		cpu->eip += 4;
		break;
	}
}

void op_BB(i386* cpu) { //MOV EBX, imm32
	printf("MOV ");
	cpu->eip++;
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);

	switch (cpu->operand_size) {
	case 0: //16-bit
		printf("BX, %04x", imm);
		cpu->bx = imm;
		cpu->eip += 2;
		break;
	case 1: //32-bit
		printf("EBX, %08x", imm);
		cpu->ebx = imm;
		cpu->eip += 4;
		break;
	}
}

void op_C0(i386* cpu) { //shift r/m8, imm8
	get_modrm();
	printf("%s ", shift_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);
	uint8_t imm = *virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf(", %02x", imm);

	shift_family_fns_8[REG(modrm)](cpu, dst_ptr, imm);
}

void op_C1(i386* cpu) { //shift r/m16/32, imm8
	get_modrm();
	printf("%s ", shift_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	uint8_t imm = *virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf(", %02x", imm);

	switch (cpu->operand_size) {
	case 0:
		shift_family_fns_16[REG(modrm)](cpu, (uint16_t*)dst_ptr, imm);
		break;
	case 1:
		shift_family_fns_32[REG(modrm)](cpu, dst_ptr, imm);
		break;
	}

	return;
}

void op_C2(i386* cpu) { //ret imm16
	cpu->eip++;
	printf("RET ");
	uint16_t imm16 = *(uint16_t*)virtual_to_physical_addr(cpu, cpu->eip);
	printf("%04x", imm16);
	cpu->eip = cpu_pop32(cpu);
	//cpu_dump(cpu);
	cpu->esp += imm16;
}

void op_C3(i386* cpu) { //ret
	printf("RET");
	cpu->eip = cpu_pop32(cpu);
}

void op_C6(i386* cpu) { //MOV r/m8, imm8
	uint8_t* src_ptr;
	get_modrm();
	cpu->eip += 2;
	printf("MOV ");
	get_modrm_dst_ptr(0);
	printf(", ");
	src_ptr = (uint8_t*)virtual_to_physical_addr(cpu, cpu->eip);
	cpu_mov8(cpu, (uint8_t*)dst_ptr, src_ptr);

	printf("%02x", *src_ptr);
	cpu->eip++;
}

void op_C7(i386* cpu) { //MOV r/m32, imm32
	uint32_t* src_ptr;
	get_modrm();
	cpu->eip += 2;
	printf("MOV ");
	get_modrm_dst_ptr(0);
	printf(", ");
	src_ptr = (uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
	finish_op(cpu_mov16, cpu_mov32);

	switch (cpu->operand_size) {
	case 0:
		cpu->eip += 2;
		printf("%04x", *src_ptr);
		break;
	case 1:
		cpu->eip += 4;
		printf("%08x", *src_ptr);
		break;
	}
}

void op_C9(i386* cpu) { //leave
	printf("LEAVE");
	cpu->esp = cpu->ebp;
	cpu->ebp = cpu_pop32(cpu);
	cpu->eip++;
}

void op_CC(i386* cpu) { //int3
	printf("Breakpoint hit");
	while(1); //cpu->running = 0;
	//cpu->breakpoint_hit = 1;
}

void op_CD(i386* cpu) { //int
	uint8_t interrupt_vector = *virtual_to_physical_addr(cpu, cpu->eip + 1);
	printf("INT %02x", interrupt_vector);

	switch (interrupt_vector) {
	case 0x80:
		cpu->eip += 2;
		ThunkSyscall((CPU*)(cpu)-1);
		//handle_syscall(cpu);
		break;
	case 0x03:
		printf("Breakpoint hit");
		while(1); //cpu->running = 0;
		//cpu->breakpoint_hit = 1;
		break;
	case 0xFF:
		printf("\nReverse-reverse thunking.");
		cpu->eip += 2;
		(((CPU*)(cpu)) - 1)->callback_depth--;
		//while(1); //cpu->running = 0;
		//cpu->escaping = 1;
		break;
	default:
		printf("Unknown interrupt vector.");
		while(1); //cpu->running = 0;
		break;
	}
}

void op_D1(i386* cpu) { //shift r/m16/32, 1
	get_modrm();
	printf("%s ", shift_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	printf(", 1");

	switch (cpu->operand_size) {
	case 0:
		shift_family_fns_16[REG(modrm)](cpu, (uint16_t*)dst_ptr, 1);
		break;
	case 1:
		shift_family_fns_32[REG(modrm)](cpu, dst_ptr, 1);
		break;
	}
}

void op_D3(i386* cpu) { //shift r/m16/32, cl
	get_modrm();
	printf("%s ", shift_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);
	printf(", 1");

	switch (cpu->operand_size) {
	case 0:
		shift_family_fns_16[REG(modrm)](cpu, (uint16_t*)dst_ptr, cpu->cl);
		break;
	case 1:
		shift_family_fns_32[REG(modrm)](cpu, dst_ptr, cpu->cl);
		break;
	}
}

void op_E8(i386* cpu) { //CALL rel16/rel32
	printf("CALL ");
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip + 1);
	uint32_t target;

	switch (cpu->operand_size) {
	case 0:
		cpu->eip += 3;
		imm = (int32_t)(int16_t)imm;
		break;
	case 1:
		cpu->eip += 5;
		break;
	}

	target = cpu->eip + imm;

	printf("%p", target);
	cpu_call(cpu, &target);
}

void op_E9(i386* cpu) { //JMP rel16/rel32
	printf("JMP ");
	uint32_t imm = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip + 1);
	uint32_t target;

	switch (cpu->operand_size) {
	case 0:
		cpu->eip += 3;
		imm = (int32_t)(int16_t)imm;
		break;
	case 1:
		cpu->eip += 5;
		break;
	}

	target = cpu->eip + imm;

	printf("%p", target);
	cpu->eip = target;
}

void op_EB(i386* cpu) { //JMP rel8
	printf("JMP ");
	cjmp(1);
}

void op_F0(i386* cpu) { //LOCK
	cpu->eip++;

	printf("LOCK ");

	cpu->print_addr = 0;
	(((CPU*)cpu) - 1)->step((((CPU*)cpu) - 1));
	cpu->print_addr = 1;
}

void op_F2(i386* cpu) { //REPNE prefix
	cpu->eip++;
	uint8_t opcode = *virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;
	printf("REPNE ");

	switch (opcode) {
	case 0xAE:
		printf("SCASB");

		while (cpu->ecx) {
			cpu_scasb(cpu);
			cpu->ecx--;

			if (cpu->eflags & 0x40) break;
		}

		break;
	default:
		break;
	}
}

void op_F3(i386* cpu) { //REPE/REP prefix
	cpu->eip++;
	uint8_t opcode = *virtual_to_physical_addr(cpu, cpu->eip);
	cpu->eip++;

	if (opcode == 0xAB || opcode == 0xA4 || opcode == 0xA5) { //REP instructions
		printf("REP ");

		switch (opcode) {
		case 0xAB:
			printf("STOSD");

			while (cpu->ecx) {
				cpu_stosd(cpu);
				cpu->ecx--;
			}

			break;
		case 0xA4:
			printf("MOVSB");

			while (cpu->ecx) {
				cpu_movsb(cpu);
				cpu->ecx--;
			}
			break;
		case 0xA5:
			printf("MOVSD");

			while (cpu->ecx) {
				cpu_movsd(cpu);
				cpu->ecx--;
			}
			break;
		default:
			printf("Unimplemented REP instruction 0x%02x!", opcode);
			while(1); //cpu->running = 0;
			break;
		}
	}
	else {
		printf("Unimplemented REP instruction 0x%02x!", opcode);
		while(1); //cpu->running = 0;
	}
}

void op_F4(i386* cpu) {
	printf("HLT");
	cpu->eip++;
	while(1); //cpu->running = 0;
}

void op_F5(i386* cpu) {
	printf("CMC");
	cpu->eip++;
	cpu->eflags;

	cpu_flip_cf(cpu);
}

void op_F6(i386* cpu) {
	uint8_t imm_val;
	get_modrm();
	printf("%s ", mul_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);

	switch (REG(modrm)) {
	case 0:
		imm_val = *virtual_to_physical_addr(cpu, cpu->eip);
		printf(", %02x", imm_val);
		alu_and8(cpu, *dst_ptr, imm_val);
		cpu->eip++;
		break;
	case 2:
		*dst_ptr = ~*dst_ptr;
		break;
	default:
		printf("%d", REG(modrm));
		while(1); //cpu->running = 0;
		break;
	}
}

void op_F7(i386* cpu) {
	uint64_t temp;
	uint32_t imm_val;
	get_modrm();
	printf("%s ", mul_family_names[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);

	switch (REG(modrm)) {
	case 0:
		imm_val = *(uint32_t*)virtual_to_physical_addr(cpu, cpu->eip);
		printf(", %p", imm_val);
		alu_and32(cpu, *dst_ptr, imm_val);
		cpu->eip += 4;
		break;
	case 2:
		*dst_ptr = ~*dst_ptr;
		break;
	case 3:
		*dst_ptr = alu_neg32(cpu, *dst_ptr);
		break;
	case 4:
		temp = alu_mul32(cpu, cpu->eax, *dst_ptr);
		cpu->edx = temp >> 32;
		cpu->eax = temp;
		break;
	case 6:
		alu_div32(cpu, *dst_ptr);
		break;
	case 7:
		alu_idiv32(cpu, *dst_ptr);
		break;
	default:
		printf("%d", REG(modrm));
		while(1); //cpu->running = 0;
		break;
	}
}

void op_FA(i386* cpu) {
	printf("???");
	cpu->eip++;
}

void op_FE(i386* cpu) { //???
	get_modrm();
	print_modrm();
	while (1);
}

void op_FF(i386* cpu) { //well this one does just about everything
	get_modrm();
	cpu->eip += 2;
	printf("%s ", ff_family_names[REG(modrm)]);
	get_modrm_dst_ptr(0);
	switch (cpu->operand_size) {
	case 0:
		ff_family_fns_16[REG(modrm)](cpu, (uint16_t*)dst_ptr);
		break;
	case 1:
		ff_family_fns_32[REG(modrm)](cpu, dst_ptr);
		break;
	}

}

void extended_op_82(i386* cpu) {
	printf("JC ");
	cjmpex((cpu->eflags & 0x1));
}

void extended_op_83(i386* cpu) {
	printf("JAE ");
	cjmpex(!(cpu->eflags & 0x1));
}

void extended_op_84(i386* cpu) {
	printf("JE ");
	cjmpex(cpu->eflags & 0x40);
}

void extended_op_85(i386* cpu) {
	printf("JNE ");
	cjmpex(!(cpu->eflags & 0x40));
}

void extended_op_86(i386* cpu) {
	printf("JNA ");
	cjmpex((cpu->eflags & 0x1) || (cpu->eflags & 0x40));
}

void extended_op_87(i386* cpu) {
	printf("JA ");
	cjmpex(!(cpu->eflags & 0x1) && !(cpu->eflags & 0x40));
}

void extended_op_8C(i386* cpu) {
	printf("JL ");
	cjmpex(((cpu->eflags & 0x80) >> 7) != ((cpu->eflags & 0x800) >> 11));
}

void extended_op_8D(i386* cpu) {
	printf("JGE ");
	cjmpex(((cpu->eflags & 0x80) >> 7) == ((cpu->eflags & 0x800) >> 11));
}

void extended_op_8E(i386* cpu) {
	printf("JLE ");
	cjmpex((cpu->eflags & 0x40) || (((cpu->eflags & 0x80) >> 7) != ((cpu->eflags & 0x800) >> 11)));
}

void extended_op_8F(i386* cpu) {
	printf("JG ");
	cjmpex(!(cpu->eflags & 0x40) && (((cpu->eflags & 0x80) >> 7) == ((cpu->eflags & 0x800) >> 11)));
}

void extended_op_94(i386* cpu) {
	printf("SETE ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);

	if (cpu->eflags & 0x400) {
		*(uint8_t*)dst_ptr = 1;
	}
	else {
		*(uint8_t*)dst_ptr = 0;
	}
}

void extended_op_95(i386* cpu) {
	printf("SETNE ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);

	if (cpu->eflags & 0x400) {
		*(uint8_t*)dst_ptr = 0;
	}
	else {
		*(uint8_t*)dst_ptr = 1;
	}
}

void extended_op_AF(i386* cpu) { //IMUL r16/32, r/m16/32
	printf("IMUL ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", tables[cpu->operand_size][REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);

	print_modrm();

	switch (cpu->operand_size) {
	case 0:
		*src_ptr = alu_imul16(cpu, *dst_ptr, *src_ptr);
		break;
	case 1:
		*src_ptr = alu_imul32(cpu, *dst_ptr, *src_ptr);
		break;
	}
}

void extended_op_B1(i386* cpu) { //CMPXCHG r/m16/32, r16/32
	printf("CMPXCHG ");
	get_modrm();
	cpu->eip += 2;
	get_modrm_dst_ptr(1);
	get_modrm_src_reg_1632();

	switch (cpu->operand_size) {
	case 0:
		printf("%s", reg_names_16[REG(modrm)]);
		if (cpu->ax == *(uint16_t*)dst_ptr) {
			cpu_set_zf(cpu, 1);
			*(uint16_t*)(dst_ptr) = *(uint16_t*)(src_ptr);
		}
		else {
			cpu_set_zf(cpu, 0);
			cpu->ax = *(uint16_t*)dst_ptr;
		}
		break;
	case 1:
		printf("%s", reg_names_32[REG(modrm)]);
		if (cpu->eax == *(uint32_t*)dst_ptr) {
			cpu_set_zf(cpu, 1);
			*(uint32_t*)(dst_ptr) = *(uint32_t*)(src_ptr);
		}
		else {
			cpu_set_zf(cpu, 0);
			cpu->eax = *(uint32_t*)dst_ptr;
		}
		break;
	}
}

void extended_op_B6(i386* cpu) { //MOVZX r32, r/m8
	printf("MOVZX ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", reg_names_32[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);

	*src_ptr = (uint32_t)(uint8_t)*dst_ptr;
}

void extended_op_B7(i386* cpu) { //MOVZX r32, r/m16
	printf("MOVZX ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", reg_names_32[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);

	*src_ptr = (uint32_t) * (uint16_t*)dst_ptr;
}

void extended_op_BE(i386* cpu) { //MOVSX r16/32, r/m8
	printf("MOVSX ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", reg_names_32[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr_8(0);

	*src_ptr = (int32_t)(int8_t)*dst_ptr;
}

void extended_op_BF(i386* cpu) { //MOVSX r16/32, r/m16
	printf("MOVSX ");
	get_modrm();
	get_modrm_src_reg_1632();
	printf("%s, ", reg_names_32[REG(modrm)]);
	cpu->eip += 2;
	get_modrm_dst_ptr(0);

	*src_ptr = (int32_t)(int16_t)*dst_ptr;
}


void(*extended_op_table[256])(i386* cpu) = {
	0, //0x0
	0, //0x1
	0, //0x2
	0, //0x3
	0, //0x4
	0, //0x5
	0, //0x6
	0, //0x7
	0, //0x8
	0, //0x9
	0, //0xa
	0, //0xb
	0, //0xc
	0, //0xd
	0, //0xe
	0, //0xf
	0, //0x10
	0, //0x11
	0, //0x12
	0, //0x13
	0, //0x14
	0, //0x15
	0, //0x16
	0, //0x17
	0, //0x18
	0, //0x19
	0, //0x1a
	0, //0x1b
	0, //0x1c
	0, //0x1d
	0, //0x1e
	0, //0x1f
	0, //0x20
	0, //0x21
	0, //0x22
	0, //0x23
	0, //0x24
	0, //0x25
	0, //0x26
	0, //0x27
	0, //0x28
	0, //0x29
	0, //0x2a
	0, //0x2b
	0, //0x2c
	0, //0x2d
	0, //0x2e
	0, //0x2f
	0, //0x30
	0, //0x31
	0, //0x32
	0, //0x33
	0, //0x34
	0, //0x35
	0, //0x36
	0, //0x37
	0, //0x38
	0, //0x39
	0, //0x3a
	0, //0x3b
	0, //0x3c
	0, //0x3d
	0, //0x3e
	0, //0x3f
	0, //0x40
	0, //0x41
	0, //0x42
	0, //0x43
	0, //0x44
	0, //0x45
	0, //0x46
	0, //0x47
	0, //0x48
	0, //0x49
	0, //0x4a
	0, //0x4b
	0, //0x4c
	0, //0x4d
	0, //0x4e
	0, //0x4f
	0, //0x50
	0, //0x51
	0, //0x52
	0, //0x53
	0, //0x54
	0, //0x55
	0, //0x56
	0, //0x57
	0, //0x58
	0, //0x59
	0, //0x5a
	0, //0x5b
	0, //0x5c
	0, //0x5d
	0, //0x5e
	0, //0x5f
	0, //0x60
	0, //0x61
	0, //0x62
	0, //0x63
	0, //0x64
	0, //0x65
	0, //0x66
	0, //0x67
	0, //0x68
	0, //0x69
	0, //0x6a
	0, //0x6b
	0, //0x6c
	0, //0x6d
	0, //0x6e
	0, //0x6f
	0, //0x70
	0, //0x71
	0, //0x72
	0, //0x73
	0, //0x74
	0, //0x75
	0, //0x76
	0, //0x77
	0, //0x78
	0, //0x79
	0, //0x7a
	0, //0x7b
	0, //0x7c
	0, //0x7d
	0, //0x7e
	0, //0x7f
	0, //0x80
	0, //0x81
	extended_op_82, //0x82
	extended_op_83, //0x83
	extended_op_84, //0x84
	extended_op_85, //0x85
	extended_op_86, //0x86
	extended_op_87, //0x87
	0, //0x88
	0, //0x89
	0, //0x8a
	0, //0x8b
	extended_op_8C, //0x8c
	extended_op_8D, //0x8d
	extended_op_8E, //0x8e
	extended_op_8F, //0x8f
	0, //0x90
	0, //0x91
	0, //0x92
	0, //0x93
	extended_op_94, //0x94
	extended_op_95, //0x95
	0, //0x96
	0, //0x97
	0, //0x98
	0, //0x99
	0, //0x9a
	0, //0x9b
	0, //0x9c
	0, //0x9d
	0, //0x9e
	0, //0x9f
	0, //0xa0
	0, //0xa1
	0, //0xa2
	0, //0xa3
	0, //0xa4
	0, //0xa5
	0, //0xa6
	0, //0xa7
	0, //0xa8
	0, //0xa9
	0, //0xaa
	0, //0xab
	0, //0xac
	0, //0xad
	0, //0xae
	extended_op_AF, //0xaf
	0, //0xb0
	extended_op_B1, //0xb1
	0, //0xb2
	0, //0xb3
	0, //0xb4
	0, //0xb5
	extended_op_B6, //0xb6
	extended_op_B7, //0xb7
	0, //0xb8
	0, //0xb9
	0, //0xba
	0, //0xbb
	0, //0xbc
	0, //0xbd
	extended_op_BE, //0xbe
	extended_op_BF, //0xbf
	0, //0xc0
	0, //0xc1
	0, //0xc2
	0, //0xc3
	0, //0xc4
	0, //0xc5
	0, //0xc6
	0, //0xc7
	0, //0xc8
	0, //0xc9
	0, //0xca
	0, //0xcb
	0, //0xcc
	0, //0xcd
	0, //0xce
	0, //0xcf
	0, //0xd0
	0, //0xd1
	0, //0xd2
	0, //0xd3
	0, //0xd4
	0, //0xd5
	0, //0xd6
	0, //0xd7
	0, //0xd8
	0, //0xd9
	0, //0xda
	0, //0xdb
	0, //0xdc
	0, //0xdd
	0, //0xde
	0, //0xdf
	0, //0xe0
	0, //0xe1
	0, //0xe2
	0, //0xe3
	0, //0xe4
	0, //0xe5
	0, //0xe6
	0, //0xe7
	0, //0xe8
	0, //0xe9
	0, //0xea
	0, //0xeb
	0, //0xec
	0, //0xed
	0, //0xee
	0, //0xef
	0, //0xf0
	0, //0xf1
	0, //0xf2
	0, //0xf3
	0, //0xf4
	0, //0xf5
	0, //0xf6
	0, //0xf7
	0, //0xf8
	0, //0xf9
	0, //0xfa
	0, //0xfb
	0, //0xfc
	0, //0xfd
	0, //0xfe
	0, //0xff
};

void(*op_table[256])(i386* cpu) = {
	op_00, //0x0
	op_01, //0x1
	0, //0x2
	op_03, //0x3
	op_04, //0x4
	op_05, //0x5
	0, //0x6
	0, //0x7
	op_08, //0x8
	0, //0x9
	op_0A, //0xa
	op_0B, //0xb
	op_0C, //0xc
	0, //0xd
	0, //0xe
	op_0F, //0xf
	0, //0x10
	0, //0x11
	0, //0x12
	0, //0x13
	0, //0x14
	0, //0x15
	0, //0x16
	0, //0x17
	0, //0x18
	0, //0x19
	0, //0x1a
	op_1B, //0x1b
	op_1C, //0x1c
	op_1D, //0x1d
	0, //0x1e
	0, //0x1f
	0, //0x20
	0, //0x21
	0, //0x22
	op_23, //0x23
	op_24, //0x24
	op_25, //0x25
	0, //0x26
	0, //0x27
	0, //0x28
	op_29, //0x29
	0, //0x2a
	op_2B, //0x2b
	0, //0x2c
	op_2D, //0x2d
	0, //0x2e
	0, //0x2f
	0, //0x30
	op_31, //0x31
	0, //0x32
	op_33, //0x33
	op_34, //0x34
	0, //0x35
	0, //0x36
	0, //0x37
	op_38, //0x38
	op_39, //0x39
	0, //0x3a
	op_3B, //0x3b
	op_3C, //0x3c
	op_3D, //0x3d
	0, //0x3e
	0, //0x3f
	op_40, //0x40
	op_41, //0x41
	op_42, //0x42
	op_43, //0x43
	op_44, //0x44
	op_45, //0x45
	op_46, //0x46
	op_47, //0x47
	op_48, //0x48
	op_49, //0x49
	op_4A, //0x4a
	op_4B, //0x4b
	op_4C, //0x4c
	op_4D, //0x4d
	op_4E, //0x4e
	op_4F, //0x4f
	op_50, //0x50
	op_51, //0x51
	op_52, //0x52
	op_53, //0x53
	op_54, //0x54
	op_55, //0x55
	op_56, //0x56
	op_57, //0x57
	op_58, //0x58
	op_59, //0x59
	op_5A, //0x5a
	op_5B, //0x5b
	op_5C, //0x5c
	op_5D, //0x5d
	op_5E, //0x5e
	op_5F, //0x5f
	0, //0x60
	0, //0x61
	0, //0x62
	0, //0x63
	op_64, //0x64
	0, //0x65
	op_66, //0x66
	0, //0x67
	op_68, //0x68
	op_69, //0x69
	op_6A, //0x6a
	op_6B, //0x6b
	0, //0x6c
	0, //0x6d
	0, //0x6e
	0, //0x6f
	0, //0x70
	0, //0x71
	op_72, //0x72
	op_73, //0x73
	op_74, //0x74
	op_75, //0x75
	op_76, //0x76
	op_77, //0x77
	op_78, //0x78
	op_79, //0x79
	0, //0x7a
	0, //0x7b
	op_7C, //0x7c
	op_7D, //0x7d
	op_7E, //0x7e
	op_7F, //0x7f
	op_80, //0x80
	op_81, //0x81
	0, //0x82
	op_83, //0x83
	op_84, //0x84
	op_85, //0x85
	0, //0x86
	op_87, //0x87
	op_88, //0x88
	op_89, //0x89
	op_8A, //0x8a
	op_8B, //0x8b
	0, //0x8c
	op_8D, //0x8d
	0, //0x8e
	0, //0x8f
	op_90, //0x90
	op_91, //0x91
	0, //0x92
	0, //0x93
	0, //0x94
	0, //0x95
	0, //0x96
	0, //0x97
	0, //0x98
	op_99, //0x99
	0, //0x9a
	0, //0x9b
	0, //0x9c
	0, //0x9d
	0, //0x9e
	0, //0x9f
	op_A0, //0xa0
	op_A1, //0xa1
	op_A2, //0xa2
	op_A3, //0xa3
	op_A4, //0xa4
	op_A5, //0xa5
	0, //0xa6
	0, //0xa7
	op_A8, //0xa8
	op_A9, //0xa9
	op_AA, //0xaa
	0, //0xab
	0, //0xac
	0, //0xad
	0, //0xae
	0, //0xaf
	0, //0xb0
	0, //0xb1
	0, //0xb2
	0, //0xb3
	0, //0xb4
	0, //0xb5
	0, //0xb6
	0, //0xb7
	op_B8, //0xb8
	op_B9, //0xb9
	op_BA, //0xba
	op_BB, //0xbb
	op_BC, //0xbc
	op_BD, //0xbd
	op_BE, //0xbe
	op_BF, //0xbf
	op_C0, //0xc0
	op_C1, //0xc1
	op_C2, //0xc2
	op_C3, //0xc3
	0, //0xc4
	0, //0xc5
	op_C6, //0xc6
	op_C7, //0xc7
	0, //0xc8
	op_C9, //0xc9
	0, //0xca
	0, //0xcb
	op_CC, //0xcc
	op_CD, //0xcd
	0, //0xce
	0, //0xcf
	0, //0xd0
	op_D1, //0xd1
	0, //0xd2
	op_D3, //0xd3
	0, //0xd4
	0, //0xd5
	0, //0xd6
	0, //0xd7
	0, //0xd8
	0, //0xd9
	0, //0xda
	0, //0xdb
	0, //0xdc
	0, //0xdd
	0, //0xde
	0, //0xdf
	0, //0xe0
	0, //0xe1
	0, //0xe2
	0, //0xe3
	0, //0xe4
	0, //0xe5
	0, //0xe6
	0, //0xe7
	op_E8, //0xe8
	op_E9, //0xe9
	0, //0xea
	op_EB, //0xeb
	0, //0xec
	0, //0xed
	0, //0xee
	0, //0xef
	op_F0, //0xf0
	0, //0xf1
	op_F2, //0xf2
	op_F3, //0xf3
	op_F4, //0xf4
	op_F5, //0xf5
	op_F6, //0xf6
	op_F7, //0xf7
	0, //0xf8
	0, //0xf9
	op_FA, //0xfa
	0, //0xfb
	0, //0xfc
	0, //0xfd
	op_FE, //0xfe
	op_FF, //0xff
};

void i386_set_teb(i386_CPU* cpu, PTEB pTeb) {
	cpu->I386.fs = pTeb;
}

DWORD i386_get_teb(i386_CPU* cpu) {
	return cpu->I386.fs;
}

void i386_set_ip(i386_CPU* cpu, DWORD ip) {
	cpu->I386.eip = ip;
}

DWORD i386_get_ip(i386_CPU* cpu) {
	return cpu->I386.eip;
}

void i386_set_sp(i386_CPU* cpu, DWORD sp) {
	cpu->I386.esp = sp;
}

DWORD i386_get_sp(i386_CPU* cpu) {
	return cpu->I386.esp;
}

DWORD i386_syscall_id(i386_CPU* cpu) {
	return cpu->I386.eax;
}

DWORD i386_fn_arg(i386_CPU* cpu, DWORD index) {
	return *(DWORD*)(cpu->I386.esp + 4 + (index * 4));
}

VOID i386_set_ret_val(i386_CPU* cpu, DWORD val) {
	cpu->I386.eax = val;
}

DWORD i386_get_ret_val(i386_CPU* cpu) {
	return cpu->I386.eax;
}

VOID i386_set_params(i386_CPU* cpu, INT numParams, ...) {
	DWORD current_arg;
	va_list argp;
	va_start(argp, numParams);

	for (int i = 0; i < numParams; i++) {
		current_arg = va_arg(argp, DWORD);
		cpu_push32(&(cpu->I386), &current_arg);
	}
}

DWORD i386_push_ra(i386_CPU* cpu, DWORD ra) {
	cpu_push32(&(cpu->I386), &ra);
}

INT i386_step(i386_CPU* cpu) {
	BYTE opcode = *(BYTE*)cpu->I386.eip;

	if(cpu->I386.print_addr) printf("%p: ", cpu->I386.eip);

	if (op_table[opcode] == 0) {
		printf("Unimplemented instruction %x at %p\n", opcode, cpu->I386.eip);
		while (1);
		return 1;
	}

	else {
		op_table[opcode](&(cpu->I386));
	}

	if (cpu->I386.print_addr) printf("\n");

	return 0;
}

va_list i386_get_va_list(i386_CPU* cpu, DWORD offset) {
	return cpu->I386.esp + 4 + (offset * 4);
}

CPU* Alloc386() {
	i386_CPU* cpu = malloc(sizeof(i386_CPU));
	memset(cpu, 0, sizeof(i386_CPU));

	//populate the function pointer dispatch table
	cpu->cpu.set_teb = i386_set_teb;
	cpu->cpu.get_teb = i386_get_teb;
	cpu->cpu.set_ip = i386_set_ip;
	cpu->cpu.get_ip = i386_get_ip;
	cpu->cpu.set_sp = i386_set_sp;
	cpu->cpu.get_sp = i386_get_sp;
	cpu->cpu.syscall_id = i386_syscall_id;
	cpu->cpu.fn_arg = i386_fn_arg;
	cpu->cpu.set_ret_val = i386_set_ret_val;
	cpu->cpu.get_ret_val = i386_get_ret_val;
	cpu->cpu.set_params = i386_set_params;
	cpu->cpu.push_ra = i386_push_ra;
	cpu->cpu.get_va_list = i386_get_va_list;

	cpu->cpu.step = i386_step;

	cpu->I386.operand_size = 1;
	cpu->I386.print_addr = 1;

	EscapeVector = escape_routine;

	cpu_type = CPU_TYPE_X86;

	return cpu;
}

