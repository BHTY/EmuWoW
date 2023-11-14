#include "mips.h"
#include <varargs.h>

uint32_t decode_op(uint32_t word) {
	return (word >> 26) & 63;
}

uint32_t decode_rs(uint32_t word) {
	return (word >> 21) & 31;
}

uint32_t decode_rt(uint32_t word) {
	return (word >> 16) & 31;
}

uint32_t decode_rd(uint32_t word) {
	return (word >> 11) & 31;
}

uint32_t decode_shamt(uint32_t word) {
	return (word >> 6) & 31;
}

uint32_t decode_funct(uint32_t word) {
	return word & 63;
}

int16_t decode_imm(uint32_t word) {
	return word & 0xFFFF;
}

uint32_t decode_target(MIPS* mips, uint32_t word) {
	return ((word & 0x3FFFFFF) << 2) | (mips->pc & 0xF0000000);
}

INT mips_step(MIPS_CPU* pCPU) {
    uint32_t opcode = *(uint32_t*)(pCPU->mips.pc);
    printf("%p: ", pCPU->mips.pc);
    pCPU->mips.pc += 4;

    switch (decode_op(opcode)) {
    case 0:
        switch (decode_funct(opcode)) {
            default:
                printf("Unimplemented funct %02x\n", decode_funct(opcode));
                while (1);
                return 1;
                break;
        }
        break;
    default:
        printf("Unimplemented opcode %02x\n", decode_op(opcode));
        while (1);
        return 1; //fatal error
        break;
    }

    return 0;
}

VOID mips_set_teb(MIPS_CPU* cpu, PTEB pTEB) {

}

DWORD_PTR mips_get_ret_val(MIPS_CPU* cpu) {
    return cpu->mips.regs[2];
}

VOID mips_set_ip(MIPS_CPU* cpu, DWORD_PTR val) {
    cpu->mips.pc = val;
}

DWORD_PTR mips_get_ip(MIPS_CPU* cpu) {
    return cpu->mips.pc;
}

VOID mips_set_sp(MIPS_CPU* cpu, DWORD_PTR sp) {
    cpu->mips.regs[29] = sp;
}

DWORD_PTR mips_push_ra(MIPS_CPU* cpu, DWORD_PTR val) {
    cpu->mips.regs[31] = val;
}

VOID mips_set_params(MIPS_CPU* cpu, INT nParams, ...) {
    DWORD current_arg;
    va_list argp;
    va_start(argp, nParams);

    for (int i = 0; i < nParams; i++) {
        current_arg = va_arg(argp, DWORD_PTR);
        cpu->mips.regs[4 + i] = current_arg;
    }
}

CPU* AllocMIPS() {
    MIPS_CPU* pCPU = malloc(sizeof(MIPS_CPU));
    memset(pCPU, 0x00, sizeof(MIPS_CPU));

    pCPU->cpu.step = mips_step;
    pCPU->cpu.get_ip = mips_get_ip;
    pCPU->cpu.set_ip = mips_set_ip;
    pCPU->cpu.get_ret_val = mips_get_ret_val;
    pCPU->cpu.set_sp = mips_set_sp;
    pCPU->cpu.push_ra = mips_push_ra;
    pCPU->cpu.set_teb = mips_set_teb;
    pCPU->cpu.set_params = mips_set_params;

    EscapeVector = NULL;

    return pCPU;
}