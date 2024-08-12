#include "r4000.h"
#include "EmuWoW.h"
#include <windows.h>

extern char* reg[32];

void MIPS_dump_registers(PThreadContextMIPS pContext) {
	int i, p;

	for (i = 0; i < 32; i++) {

		if (i % 4 == 0) {
			printf("\n");
		}

		printf("%s: %p ", reg[i], pContext->cpu.regs[i]);
	}

	printf("\n\n");
}

void handle_reserved_instruction(uint32_t op) {
	printf("Unrecognized instruction %x (opcode 0x%02x)\n", op, op >> 26);
	while (1);
	//FatalError(TlsGetValue(dwThreadContextIndex), INVINST, 0);
}

void cp1_execute(MIPS* cpu, uint32_t op) { //FPU

	switch (op >> 26) {
	case 0x11: //COP1
		switch ((op >> 21) & 0x1f) {
		default:
			printf("Unimplemented FPU operation 0x%02x: ", (op >> 21) & 0x1f);
			//handle_reserved_instruction(op);
			break;
		}
		break;

	case 0x31: //LWC1
		m_f[RTREG] = load(uint32_t, ADDR(m_r[RSREG], s16(op)));
		break;

	case 0x35: //LDC1
		m_f[RTREG] = load64(ADDR(m_r[RSREG], s16(op)));
		break;

	case 0x39: //SWC1
		store(uint32_t, ADDR(m_r[RSREG], s16(op)), m_f[RTREG]);
		break;

	case 0x3d: //SDC1
		store(uint64_t, ADDR(m_r[RSREG], s16(op)), m_f[RTREG]);
		break;

	default:
		//handle_reserved_instruction(op);
		break;
	}

	//printf("Floating point fuck you!\n");
	//while (1);
}

void cpu_lwr(MIPS* cpu, uint32_t op) {
	uint32_t offset = ADDR(m_r[RSREG], s16(op));
	uint32_t shift = 8 * (offset & 3);
	uint32_t mask = ~(-1 >> shift);
	uint32_t temp = load(uint32_t, offset & ~3);
	m_r[RTREG] = (m_r[RTREG] & mask) | (temp >> shift);
}

void cpu_lwl(MIPS* cpu, uint32_t op) {
	uint32_t offset = ADDR(m_r[RSREG], s16(op));
	uint32_t shift = 8 * (~offset & 3);
	uint32_t mask = ~(-1 << shift);
	uint32_t temp = load(uint32_t, offset & ~3);
	m_r[RTREG] = (m_r[RTREG] & mask) | (temp << shift);
}

void cpu_swr(MIPS* cpu, uint32_t op) {
	uint32_t offset = ADDR(m_r[RSREG], s16(op));
	uint32_t shift = 8 * (offset & 3);
	uint32_t mask = ~(-1 >> shift);
	store(uint32_t, offset & ~3, (m_r[RTREG] >> shift) | (load(uint32_t, offset & ~3) & mask));
}

void cpu_swl(MIPS* cpu, uint32_t op) {
	uint32_t offset = ADDR(m_r[RSREG], s16(op));
	uint32_t shift = 8 * (~offset & 3);
	uint32_t mask = ~(-1 << shift);
	store(uint32_t, offset & ~3, (m_r[RTREG] << shift) | (load(uint32_t, offset & ~3) & mask));
}

INT r4000_step(MIPS* cpu) {
	uint32_t op;
	INT res;

	cpu->memory_state |= FETCHING;
	op = *(uint32_t*)(cpu->pc);
	cpu->memory_state &= ~FETCHING;

	if (1) {
		printf("%p: %p ", cpu->pc, op);
		mips_disasm(cpu->pc, op);
	}

	res = r4000_execute(cpu, op);

	if (res) return res;

	m_r[0] = 0;

	switch (m_branch_state & STATE) {
	case NONE:
		m_pc += 4;
		break;

	case BRANCH:
		m_pc = m_branch_state & TARGET;
		m_branch_state = NONE;
		break;

	case DELAY:
		m_pc += 4;
		m_branch_state = (m_branch_state & TARGET) | BRANCH;
		break;

	case NULLIFY:
		m_pc += 8;
		m_branch_state = NONE;
		break;
	}

	cpu->memory_state = 0;

	return res;
}

INT r4000_execute(MIPS* cpu, uint32_t op) {


	switch (op >> 26)
	{
	case 0x13: //APICALL
		/*m_r[2] = HandleNativeInstruction(cpu, cpu->pc);
		m_branch_state = m_r[31] | BRANCH;*/
		break;
	case 0x00: // SPECIAL
		switch (op & 0x3f)
		{
		case 0x00: // SLL
			m_r[RDREG] = s64(s32(m_r[RTREG] << SHIFT));
			break;
			//case 0x01: // *
		case 0x02: // SRL
			m_r[RDREG] = s64(s32(u32(m_r[RTREG]) >> SHIFT));
			break;
		case 0x03: // SRA
			m_r[RDREG] = s64(s32(m_r[RTREG]) >> SHIFT);
			break;
		case 0x04: // SLLV
			m_r[RDREG] = s64(s32(m_r[RTREG] << (m_r[RSREG] & 31)));
			break;
			//case 0x05: // *
		case 0x06: // SRLV
			m_r[RDREG] = s64(s32(u32(m_r[RTREG]) >> (m_r[RSREG] & 31)));
			break;
		case 0x07: // SRAV
			m_r[RDREG] = s64(s32(m_r[RTREG]) >> (m_r[RSREG] & 31));
			break;
		case 0x08: // JR
			// FIXME: address error if low bits are set
			m_branch_state = ADDR(m_r[RSREG], 0) | DELAY;
			break;
		case 0x09: // JALR
			// FIXME: address error if low bits are set
			m_branch_state = ADDR(m_r[RSREG], 0) | DELAY;
			m_r[RDREG] = ADDR(m_pc, 8);
			break;
			//case 0x0a: // *
			//case 0x0b: // *
		case 0x0c: // SYSCALL
			m_r[2] = CallSystemService(m_r[2]);
			m_branch_state = m_r[31] | BRANCH;
			break;
		case 0x0d: // BREAK
			return 1;
			break;
			//case 0x0e: // *
		case 0x0f: // SYNC
			break;
		case 0x10: // MFHI
			m_r[RDREG] = m_hi;
			break;
		case 0x11: // MTHI
			m_hi = m_r[RSREG];
			break;
		case 0x12: // MFLO
			m_r[RDREG] = m_lo;
			break;
		case 0x13: // MTLO
			m_lo = m_r[RSREG];
			break;
		case 0x14: // DSLLV
			m_r[RDREG] = m_r[RTREG] << (m_r[RSREG] & 63);
			break;
			//case 0x15: // *
		case 0x16: // DSRLV
			m_r[RDREG] = m_r[RTREG] >> (m_r[RSREG] & 63);
			break;
		case 0x17: // DSRAV
			m_r[RDREG] = s64(m_r[RTREG]) >> (m_r[RSREG] & 63);
			break;
		case 0x18: // MULT
		{
			uint64_t product = mul_32x32(s32(m_r[RSREG]), s32(m_r[RTREG]));

			m_lo = s64(s32(product));
			m_hi = s64(s32(product >> 32));
		}
		break;
		case 0x19: // MULTU
		{
			uint64_t product = mulu_32x32(u32(m_r[RSREG]), u32(m_r[RTREG]));

			m_lo = s64(s32(product));
			m_hi = s64(s32(product >> 32));
		}
		break;
		case 0x1a: // DIV
			if (m_r[RTREG])
			{
				m_lo = s64(s32(m_r[RSREG]) / s32(m_r[RTREG]));
				m_hi = s64(s32(m_r[RSREG]) % s32(m_r[RTREG]));
			}
			break;
		case 0x1b: // DIVU
			if (m_r[RTREG])
			{
				m_lo = s64(s32(u32(m_r[RSREG]) / u32(m_r[RTREG])));
				m_hi = s64(s32(u32(m_r[RSREG]) % u32(m_r[RTREG])));
			}
			break;

		case 0x20: // ADD
		{
			uint32_t sum = u32(m_r[RSREG]) + u32(m_r[RTREG]);

			// overflow: (sign(addend0) == sign(addend1)) && (sign(addend0) != sign(sum))
			m_r[RDREG] = s64(s32(sum));
		}
		break;
		case 0x21: // ADDU
			m_r[RDREG] = s64(s32(u32(m_r[RSREG]) + u32(m_r[RTREG])));
			break;
		case 0x22: // SUB
		{
			uint32_t difference = u32(m_r[RSREG]) - u32(m_r[RTREG]);

			// overflow: (sign(minuend) != sign(subtrahend)) && (sign(minuend) != sign(difference))
			m_r[RDREG] = s64(s32(difference));
		}
		break;
		case 0x23: // SUBU
			m_r[RDREG] = s64(s32(u32(m_r[RSREG]) - u32(m_r[RTREG])));
			break;
		case 0x24: // AND
			m_r[RDREG] = m_r[RSREG] & m_r[RTREG];
			break;
		case 0x25: // OR
			m_r[RDREG] = m_r[RSREG] | m_r[RTREG];
			break;
		case 0x26: // XOR
			m_r[RDREG] = m_r[RSREG] ^ m_r[RTREG];
			break;
		case 0x27: // NOR
			m_r[RDREG] = ~(m_r[RSREG] | m_r[RTREG]);
			break;
			//case 0x28: // *
			//case 0x29: // *
		case 0x2a: // SLT
			m_r[RDREG] = s64(m_r[RSREG]) < s64(m_r[RTREG]);
			break;
		case 0x2b: // SLTU
			m_r[RDREG] = m_r[RSREG] < m_r[RTREG];
			break;
		case 0x2d: // DADDU
			m_r[RDREG] = m_r[RSREG] + m_r[RTREG];
			break;
		case 0x2f: // DSUBU
			m_r[RDREG] = m_r[RSREG] - m_r[RTREG];
			break;
		case 0x30: // TGE
			if (s64(m_r[RSREG]) >= s64(m_r[RTREG]))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x31: // TGEU
			if (m_r[RSREG] >= m_r[RTREG])
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x32: // TLT
			if (s64(m_r[RSREG]) < s64(m_r[RTREG]))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x33: // TLTU
			if (m_r[RSREG] < m_r[RTREG])
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x34: // TEQ
			if (m_r[RSREG] == m_r[RTREG])
				cpu_exception(EXCEPTION_TR);
			break;
			//case 0x35: // *
		case 0x36: // TNE
			if (m_r[RSREG] != m_r[RTREG])
				cpu_exception(EXCEPTION_TR);
			break;
			//case 0x37: // *
		case 0x38: // DSLL
			m_r[RDREG] = m_r[RTREG] << SHIFT;
			break;
			//case 0x39: // *
		case 0x3a: // DSRL
			m_r[RDREG] = m_r[RTREG] >> SHIFT;
			break;
		case 0x3b: // DSRA
			m_r[RDREG] = s64(m_r[RTREG]) >> SHIFT;
			break;
		case 0x3c: // DSLL32
			m_r[RDREG] = m_r[RTREG] << (SHIFT + 32);
			break;
			//case 0x3d: // *
		case 0x3e: // DSRL32
			m_r[RDREG] = m_r[RTREG] >> (SHIFT + 32);
			break;
		case 0x3f: // DSRA32
			m_r[RDREG] = s64(m_r[RTREG]) >> (SHIFT + 32);
			break;

		default:
			handle_reserved_instruction(op);
			break;
		}
		break;
	case 0x01: // REGIMM
		switch ((op >> 16) & 0x1f)
		{
		case 0x00: // BLTZ
			if (s64(m_r[RSREG]) < 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			break;
		case 0x01: // BGEZ
			if (s64(m_r[RSREG]) >= 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			break;
		case 0x02: // BLTZL
			if (s64(m_r[RSREG]) < 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			else
				m_branch_state = NULLIFY;
			break;
		case 0x03: // BGEZL
			if (s64(m_r[RSREG]) >= 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			else
				m_branch_state = NULLIFY;
			break;
			//case 0x04: // *
			//case 0x05: // *
			//case 0x06: // *
			//case 0x07: // *
		case 0x08: // TGEI
			if (s64(m_r[RSREG]) >= s16(op))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x09: // TGEIU
			if (m_r[RSREG] >= u64(s64(s16(op))))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x0a: // TLTI
			if (s64(m_r[RSREG]) < s16(op))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x0b: // TLTIU
			if (m_r[RSREG] >= u64(s64(s16(op))))
				cpu_exception(EXCEPTION_TR);
			break;
		case 0x0c: // TEQI
			if (m_r[RSREG] == u64(s64(s16(op))))
				cpu_exception(EXCEPTION_TR);
			break;
			//case 0x0d: // *
		case 0x0e: // TNEI
			if (m_r[RSREG] != u64(s64(s16(op))))
				cpu_exception(EXCEPTION_TR);
			break;
			//case 0x0f: // *
		case 0x10: // BLTZAL
			if (s64(m_r[RSREG]) < 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			m_r[31] = ADDR(m_pc, 8);
			break;
		case 0x11: // BGEZAL
			if (s64(m_r[RSREG]) >= 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			m_r[31] = ADDR(m_pc, 8);
			break;
		case 0x12: // BLTZALL
			if (s64(m_r[RSREG]) < 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			else
				m_branch_state = NULLIFY;
			m_r[31] = ADDR(m_pc, 8);
			break;
		case 0x13: // BGEZALL
			if (s64(m_r[RSREG]) >= 0)
				m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
			else
				m_branch_state = NULLIFY;
			m_r[31] = ADDR(m_pc, 8);
			break;
			//case 0x14: // *
			//case 0x15: // *
			//case 0x16: // *
			//case 0x17: // *
			//case 0x18: // *
			//case 0x19: // *
			//case 0x1a: // *
			//case 0x1b: // *
			//case 0x1c: // *
			//case 0x1d: // *
			//case 0x1e: // *
			//case 0x1f: // *

		default:
			// * Operation codes marked with an asterisk cause reserved
			// instruction exceptions in all current implementations and are
			// reserved for future versions of the architecture.
			handle_reserved_instruction(op);
			break;
		}
		break;
	case 0x02: // J
		m_branch_state = (ADDR(m_pc, 4) & ~0x0fffffff) | ((op & 0x03ffffff) << 2) | DELAY;
		break;
	case 0x03: // JAL
		m_branch_state = (ADDR(m_pc, 4) & ~0x0fffffff) | ((op & 0x03ffffff) << 2) | DELAY;
		m_r[31] = ADDR(m_pc, 8);
		break;
	case 0x04: // BEQ
		if (m_r[RSREG] == m_r[RTREG])
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		break;
	case 0x05: // BNE
		if (m_r[RSREG] != m_r[RTREG]) {
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		}
		break;
	case 0x06: // BLEZ
		if (s64(m_r[RSREG]) <= 0)
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		break;
	case 0x07: // BGTZ
		if (s64(m_r[RSREG]) > 0)
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		break;
	case 0x08: // ADDI
	{
		uint32_t sum = u32(m_r[RSREG]) + s16(op);

		// overflow: (sign(addend0) == sign(addend1)) && (sign(addend0) != sign(sum))
		if (!BIT(u32(m_r[RSREG]) ^ s32(s16(op)), 31) && BIT(u32(m_r[RSREG]) ^ sum, 31))
			cpu_exception(EXCEPTION_OV);
		else
			m_r[RTREG] = s64(s32(sum));
	}
	break;
	case 0x09: // ADDIU
		m_r[RTREG] = s64(s32(u32(m_r[RSREG]) + s16(op)));
		break;
	case 0x0a: // SLTI
		m_r[RTREG] = s64(m_r[RSREG]) < s64(s16(op));
		break;
	case 0x0b: // SLTIU
		m_r[RTREG] = m_r[RSREG] < u64(s64(s16(op)));
		break;
	case 0x0c: // ANDI
		m_r[RTREG] = m_r[RSREG] & u16(op);
		break;
	case 0x0d: // ORI
		m_r[RTREG] = m_r[RSREG] | u16(op);
		break;
	case 0x0e: // XORI
		m_r[RTREG] = m_r[RSREG] ^ u16(op);
		break;
	case 0x0f: // LUI
		m_r[RTREG] = s64(s16(op)) << 16;
		break;
	case 0x10: // COP0
		cp0_execute(op);
		break;
	case 0x11: // COP1
		cp1_execute(cpu, op);
		break;
	case 0x12: // COP2
		cp2_execute(op);
		break;
		/*case 0x13: // COP1X
			cp1x_execute(op);
			break;*/
	case 0x14: // BEQL
		if (m_r[RSREG] == m_r[RTREG])
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		else
			m_branch_state = NULLIFY;
		break;
	case 0x15: // BNEL
		if (m_r[RSREG] != m_r[RTREG])
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		else
			m_branch_state = NULLIFY;
		break;
	case 0x16: // BLEZL
		if (s64(m_r[RSREG]) <= 0)
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		else
			m_branch_state = NULLIFY;
		break;
	case 0x17: // BGTZL
		if (s64(m_r[RSREG]) > 0)
			m_branch_state = ADDR(m_pc + 4, s32(s16(op)) << 2) | DELAY;
		else
			m_branch_state = NULLIFY;
		break;
	case 0x19: // DADDIU
		m_r[RTREG] = m_r[RSREG] + s64(s16(op));
		break;
	case 0x20: // LB

		cpu->memory_state |= READING;
		m_r[RTREG] = load(int8_t, ADDR(m_r[RSREG], s16(op)));

		break;
	case 0x21: // LH
		cpu->memory_state |= READING;
		m_r[RTREG] = load(int16_t, ADDR(m_r[RSREG], s16(op)));
		break;
	case 0x22: // LWL
		cpu->memory_state |= READING;
		cpu_lwl(cpu, op);
		break;
	case 0x23: // LW
		cpu->memory_state |= READING;
		m_r[RTREG] = load(int32_t, ADDR(m_r[RSREG], s16(op)));
		break;
	case 0x24: // LBU
		cpu->memory_state |= READING;
		m_r[RTREG] = load(int8_t, ADDR(m_r[RSREG], s16(op)));
		break;
	case 0x25: // LHU
		cpu->memory_state |= READING;
		m_r[RTREG] = load(uint16_t, ADDR(m_r[RSREG], s16(op)));
		break;
	case 0x26: // LWR
		cpu->memory_state |= READING;
		cpu_lwr(cpu, op);
		break;
	case 0x27: // LWU
		cpu->memory_state |= READING;
		m_r[RTREG] = load(uint32_t, ADDR(m_r[RSREG], s16(op)));
		break;
	case 0x28: // SB
		cpu->memory_state |= WRITING;
		store(uint8_t, ADDR(m_r[RSREG], s16(op)), m_r[RTREG]);
		break;
	case 0x29: // SH
		cpu->memory_state |= WRITING;
		store(uint16_t, ADDR(m_r[RSREG], s16(op)), m_r[RTREG]);
		break;
	case 0x2a: // SWL
		cpu->memory_state |= WRITING;
		cpu_swl(cpu, op);
		break;
	case 0x2b: // SW
		cpu->memory_state |= WRITING;
		store(uint32_t, ADDR(m_r[RSREG], s16(op)), m_r[RTREG]);
		break;
	case 0x2e: // SWR
		cpu->memory_state |= WRITING;
		cpu_swr(cpu, op);
		break;
	case 0x2f: // CACHE
		cp0_cache(op);
		break;
	case 0x31: // LWC1
		cp1_execute(cpu, op);
		break;
	case 0x32: // LWC2
		cp2_execute(op);
		break;
	case 0x35: // LDC1
		cp1_execute(cpu, op);
		break;
	case 0x36: // LDC2
		cp2_execute(op);
		break;
	case 0x39: // SWC1
		cp1_execute(cpu, op);
		break;
	case 0x3a: // SWC2
		cp2_execute(op);
		break;
		//case 0x3b: // *
	case 0x3d: // SDC1
		cp1_execute(cpu, op);
		break;
	case 0x3e: // SDC2
		cp2_execute(op);
		break;

	default:
		// * Operation codes marked with an asterisk cause reserved instruction
		// exceptions in all current implementations and are reserved for future
		// versions of the architecture.
		//handle_reserved_instruction(op);
		break;
	}

	return 0;
}

VOID WriteThunkMIPS(PDWORD pThunk, DWORD Index, DWORD dwArgs) {
	pThunk[0] = 0x24020000 | Index; //ADDIU $v0, $0, Index
	pThunk[1] = 0xC; //SYSCALL
	//pThunk[2] = 0x3E00008; //JR $RA
	pThunk[2] = 0x20000000; //NOP
}

FARPROC MakeThunkMIPS(DWORD Index, DWORD dwArgs) {
	PDWORD pThunk = malloc(16);
	WriteThunkMIPS(pThunk, Index, dwArgs);
	return pThunk;
}

PThreadContextMIPS InitMIPS(DWORD_PTR sp) {
	PThreadContextMIPS pContext = malloc(sizeof(ThreadContextMIPS));
	MIPS* pCPU = &(pContext->cpu);

	ZeroMemory(pContext, sizeof(ThreadContextMIPS));

	pCPU->regs[29] = sp - 256;

	return pContext;
}

VOID MIPS_ExtractParams(PThreadContextMIPS pContext, DWORD_PTR* pDwParamList, DWORD nParams) {
	MIPS* pCPU = &(pContext->cpu);
	DWORD* StackArgList = pCPU->regs[29] + 16;
	INT i;

	for (i = 0; i < 4; i++) {
		pDwParamList[i] = pCPU->regs[4 + i];
	}

	for (i = 4; i < 16; i++) {
		pDwParamList[i] = StackArgList[i - 4];
	}
}

DWORD_PTR MIPS_ExecuteEmulatedProcedure(PThreadContextMIPS pContext, FARPROC dwTargetAddress, DWORD_PTR* pDwParamList, DWORD nParams) {
	MIPS* pCPU = &(pContext->cpu);

	DWORD dwCurrentArg;
	DWORD dwOldRA = pCPU->regs[31];

	//printf("Jumping from %p\n", pCPU->pc);

	pCPU->regs[29] -= 16;

	pCPU->regs[31] = 0xFFFFFF00;
	pCPU->pc = dwTargetAddress;

	for (dwCurrentArg = 0; dwCurrentArg < nParams; dwCurrentArg++) {
		if (dwCurrentArg < 4) {
			pCPU->regs[dwCurrentArg + 4] = pDwParamList[dwCurrentArg];
		}
	}

	//printf("Executing callback with parameters (%p, %p, %p, %p)\n", pDwParamList[0], pDwParamList[1], pDwParamList[2], pDwParamList[3]);

	while (pCPU->pc != 0xFFFFFF00) {
		//r4000_step(pCPU);
		r4000_step(pCPU);
	}

	pCPU->regs[31] = dwOldRA;
	pCPU->regs[29] += 16;

	/*if (pContext->dbg_state.print_functions) {
		printf("	<Callback completed with result %p>\n", pCPU->regs[2]);
	}*/

	return pCPU->regs[2];
}

CPUVTable mips_vtable = {InitMIPS, MIPS_ExtractParams, MIPS_ExecuteEmulatedProcedure, MakeThunkMIPS};
