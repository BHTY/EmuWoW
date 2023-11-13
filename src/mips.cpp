#include "mips.h"

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