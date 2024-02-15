#include "alpha.h"
#include "EmuWoW.h"
#include <windows.h>
#include "axp_dis.h"

INT AXP_step(PThreadContext_Alpha pContext) {
	//fetch instruction
	//increment PC
	//execute instruction
	//reset always-zero registers

	return 0;
}

INT AXP_QueryMemoryState(PThreadContext pContext) {
	return 1;
}

void AXP_dump_regs(PThreadContext_Alpha pContext) {
	int i, p;

	for (i = 0; i < 32; i++) {

		if (i % 4 == 0) {
			printf("\n");
		}

		printf("%s: %p ", R[i], pContext->cpu.r_i[i]);
	}

	printf("\n\n");

	for (i = 0; i < 32; i++) {

		if (i % 4 == 0) {
			printf("\n");
		}

		printf("%s: %p ", F[i], pContext->cpu.r_f[i]);
	}

	printf("\n\n");
}

void AXP_set_pc(PThreadContext_Alpha pContext, DWORD pc) {
	pContext->cpu.pc = pc;
}

void AXP_set_sp(PThreadContext_Alpha pContext, DWORD sp) {
	pContext->cpu.r_i[30] = sp;
}

DWORD AXP_get_pc(PThreadContext_Alpha pContext) {
	return pContext->cpu.pc;
}

DWORD AXP_get_ra(PThreadContext_Alpha pContext) {
	return pContext->cpu.r_i[26];
}

void InitializeAlphaCPU(PCPUVTable pVTable) {
	pVTable->machine_type = IMAGE_FILE_MACHINE_ALPHA;
	pVTable->step = AXP_step;
	pVTable->disasm = AXP_disasm;
	pVTable->dump_regs = AXP_dump_regs;
	pVTable->set_pc = AXP_set_pc;
	pVTable->set_sp = AXP_set_sp;
	pVTable->get_pc = AXP_get_pc;
	pVTable->get_ra = AXP_get_ra;
	pVTable->ExecuteEmulatedProcedure = NULL;
	pVTable->QueryMemoryState = AXP_QueryMemoryState; //we also need a better way to SET memory state
	pVTable->StubExport = NULL;
	pVTable->AddBreakpoint = NULL;
}

int sext(int a, int b) { //FIXME
	return 0;
}

//load, store, vars, zapmask

uint64_t zap_mask(uint8_t zap_bits)
{
	uint64_t mask = 0;
	unsigned i;

	for (i = 0; i < 8; i++)
		if (!BIT(zap_bits, i))
			mask |= (0xffU << (i << 3));

	return mask;
}

INT AXP_execute(PAXP64 pCPU, uint32_t op) {
	unsigned i;

	switch ((op >> 26) & 0x3f)
	{
	case 0x08: m_r[Ra(op)] = m_r[Rb(op)] + Disp_M(op); break; // lda
	case 0x09: m_r[Ra(op)] = m_r[Rb(op)] + (Disp_M(op) << 16); break; // ldah
	case 0x0b: m_r[Ra(op)] = load(uint64_t, (m_r[Rb(op)] + Disp_M(op)) & ~7); break; // ldq_u
	case 0x0f: store(uint64_t, (m_r[Rb(op)] + Disp_M(op)) & ~7, m_r[Ra(op)]); break; // stq_u

	case 0x10: // INTA* (integer arithmetic)
		switch ((op >> 5) & 0xff)
		{
			// register variants
		case 0x00: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) + s32(m_r[Rb(op)])); break; // addl
		case 0x02: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 2) + s32(m_r[Rb(op)])); break; // s4addl
		case 0x09: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) - s32(m_r[Rb(op)])); break; // subl
		case 0x0b: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 2) - s32(m_r[Rb(op)])); break; // s4subl
		case 0x0f: // cmpbge
		{
			uint8_t temp = 0;
			for (i = 0; i < 8; i++)
				if (u8(m_r[Ra(op)] >> (i * 8)) >= u8(m_r[Rb(op)] >> (i * 8)))
					temp |= (1U << i);

			m_r[Rc(op)] = u64(temp);
		}
		break;
		case 0x12: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 3) + s32(m_r[Rb(op)])); break; // s8addl
		case 0x1b: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 3) - s32(m_r[Rb(op)])); break; // s8subl
		case 0x1d: m_r[Rc(op)] = m_r[Ra(op)] < m_r[Rb(op)]; break; // cmpult
		case 0x20: m_r[Rc(op)] = m_r[Ra(op)] + m_r[Rb(op)]; break; // addq
		case 0x22: m_r[Rc(op)] = (m_r[Ra(op)] << 2) + m_r[Rb(op)]; break; // s4addq
		case 0x29: m_r[Rc(op)] = m_r[Ra(op)] - m_r[Rb(op)]; break; // subq
		case 0x2b: m_r[Rc(op)] = (m_r[Ra(op)] << 2) - m_r[Rb(op)]; break; // s4subq
		case 0x2d: m_r[Rc(op)] = m_r[Ra(op)] == m_r[Rb(op)]; break; // cmpeq
		case 0x32: m_r[Rc(op)] = (m_r[Ra(op)] << 3) + m_r[Rb(op)]; break; // s8addq
		case 0x3b: m_r[Rc(op)] = (m_r[Ra(op)] << 3) - m_r[Rb(op)]; break; // s8subq
		case 0x3d: m_r[Rc(op)] = m_r[Ra(op)] <= m_r[Rb(op)]; break; // cmpule
		case 0x40: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) + s32(m_r[Rb(op)])); break; // addl/v
		case 0x49: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) - s32(m_r[Rb(op)])); break; // subl/v
		case 0x4d: m_r[Rc(op)] = s64(m_r[Ra(op)]) < s64(m_r[Rb(op)]); break; // cmplt
		case 0x60: m_r[Rc(op)] = m_r[Ra(op)] + m_r[Rb(op)]; break; // addq/v
		case 0x69: m_r[Rc(op)] = m_r[Ra(op)] - m_r[Rb(op)]; break; // subq/v
		case 0x6d: m_r[Rc(op)] = s64(m_r[Ra(op)]) <= s64(m_r[Rb(op)]); break; // cmple

			// immediate variants
		case 0x80: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) + s32(Im(op))); break; // addl
		case 0x82: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 2) + s32(Im(op))); break; // s4addl
		case 0x89: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) - s32(Im(op))); break; // subl
		case 0x8b: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 2) - s32(Im(op))); break; // s4subl
		case 0x8f: // cmpbge
		{
			uint8_t temp = 0;
			for (i = 0; i < 8; i++)
				if (u8(m_r[Ra(op)] >> (i * 8)) >= u8(Im(op)))
					temp |= (1U << i);

			m_r[Rc(op)] = u64(temp);
		}
		break;
		case 0x92: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 3) + s32(Im(op))); break; // s4addl
		case 0x9b: m_r[Rc(op)] = s64(s32(m_r[Ra(op)] << 3) - s32(Im(op))); break; // s8subl
		case 0x9d: m_r[Rc(op)] = m_r[Ra(op)] < Im(op); break; // cmpult
		case 0xa0: m_r[Rc(op)] = m_r[Ra(op)] + Im(op); break; // addq
		case 0xa2: m_r[Rc(op)] = (m_r[Ra(op)] << 2) + Im(op); break; // s4addq
		case 0xa9: m_r[Rc(op)] = m_r[Ra(op)] - Im(op); break; // subq
		case 0xab: m_r[Rc(op)] = (m_r[Ra(op)] << 2) - Im(op); break; // s4subq
		case 0xad: m_r[Rc(op)] = m_r[Ra(op)] == Im(op); break; // cmpeq
		case 0xb2: m_r[Rc(op)] = (m_r[Ra(op)] << 3) + Im(op); break; // s8addq
		case 0xbb: m_r[Rc(op)] = (m_r[Ra(op)] << 3) - Im(op); break; // s8subq
		case 0xbd: m_r[Rc(op)] = m_r[Ra(op)] <= Im(op); break; // cmpule
		case 0xc0: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) + s32(Im(op))); break; // addl/v
		case 0xc9: m_r[Rc(op)] = s64(s32(m_r[Ra(op)]) - s32(Im(op))); break; // subl/v
		case 0xcd: m_r[Rc(op)] = s64(m_r[Ra(op)]) < s64(Im(op)); break; // cmplt
		case 0xe0: m_r[Rc(op)] = m_r[Ra(op)] + Im(op); break; // addq/v
		case 0xe9: m_r[Rc(op)] = m_r[Ra(op)] - Im(op); break; // subq/v
		case 0xed: m_r[Rc(op)] = s64(m_r[Ra(op)]) <= s64(Im(op)); break; // cmple
		}
		break;
	case 0x11: // INTL* (integer logical)
		switch ((op >> 5) & 0xff)
		{
			// register variants
		case 0x00: m_r[Rc(op)] = m_r[Ra(op)] & m_r[Rb(op)]; break; // and
		case 0x08: m_r[Rc(op)] = m_r[Ra(op)] & ~m_r[Rb(op)]; break; // bic
		case 0x14: // cmovlbs
			if (BIT(m_r[Ra(op)], 0))
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x16: // cmovlbc
			if (!BIT(m_r[Ra(op)], 0))
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x20: m_r[Rc(op)] = m_r[Ra(op)] | m_r[Rb(op)]; break; // bis
		case 0x24: // cmoveq
			if (m_r[Ra(op)] == 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x26: // cmovne
			if (m_r[Ra(op)] != 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x28: m_r[Rc(op)] = m_r[Ra(op)] | ~m_r[Rb(op)]; break; // ornot
		case 0x40: m_r[Rc(op)] = m_r[Ra(op)] ^ m_r[Rb(op)]; break; // xor
		case 0x44: // cmovlt
			if (s64(m_r[Ra(op)]) < 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x46: // cmovge
			if (s64(m_r[Ra(op)]) >= 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x48: m_r[Rc(op)] = m_r[Ra(op)] ^ ~m_r[Rb(op)]; break; // eqv
		case 0x61: m_r[Rc(op)] = m_r[Rb(op)]; break; // amask
		case 0x64: // cmovle
			if (s64(m_r[Ra(op)]) <= 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;
		case 0x66: // cmovgt
			if (s64(m_r[Ra(op)]) > 0)
				m_r[Rc(op)] = m_r[Rb(op)];
			break;

			// immediate variants
		case 0x80: m_r[Rc(op)] = m_r[Ra(op)] & Im(op); break; // and
		case 0x88: m_r[Rc(op)] = m_r[Ra(op)] & ~Im(op); break; // bic
		case 0x94: // cmovlbs
			if (BIT(m_r[Ra(op)], 0))
				m_r[Rc(op)] = Im(op);
			break;
		case 0x96: // cmovlbc
			if (!BIT(m_r[Ra(op)], 0))
				m_r[Rc(op)] = Im(op);
			break;
		case 0xa0: m_r[Rc(op)] = m_r[Ra(op)] | Im(op); break; // bis
		case 0xa4: // cmoveq
			if (m_r[Ra(op)] == 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xa6: // cmovne
			if (m_r[Ra(op)] != 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xa8: m_r[Rc(op)] = m_r[Ra(op)] | ~Im(op); break; // ornot
		case 0xc0: m_r[Rc(op)] = m_r[Ra(op)] ^ Im(op); break; // xor
		case 0xc4: // cmovlt
			if (s64(m_r[Ra(op)]) < 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xc6: // cmovge
			if (s64(m_r[Ra(op)]) >= 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xc8: m_r[Rc(op)] = m_r[Ra(op)] ^ ~Im(op); break; // eqv
		case 0xe1: m_r[Rc(op)] = Im(op); break; // amask
		case 0xe4: // cmovle
			if (s64(m_r[Ra(op)]) <= 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xe6: // cmovgt
			if (s64(m_r[Ra(op)]) > 0)
				m_r[Rc(op)] = Im(op);
			break;
		case 0xec: m_r[Rc(op)] = 0; break; // implver
		}
		break;
	case 0x12: // INTS* (integer shift)
		switch ((op >> 5) & 0xff)
		{
			// register variants
		case 0x02: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x01) << (m_r[Rb(op)] & 7)); break; // mskbl
		case 0x06: m_r[Rc(op)] = (m_r[Ra(op)] >> ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~u8(0x01)); break; // extbl
		case 0x0b: m_r[Rc(op)] = (m_r[Ra(op)] << ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~(u8(0x01) << (m_r[Rb(op)] & 7))); break; // insbl
		case 0x12: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x03) << (m_r[Rb(op)] & 7)); break; // mskwl
		case 0x16: m_r[Rc(op)] = (m_r[Ra(op)] >> ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~u8(0x03)); break; // extwl
		case 0x1b: m_r[Rc(op)] = (m_r[Ra(op)] << ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~(u8(0x03) << (m_r[Rb(op)] & 7))); break; // inswl
		case 0x22: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x0f) << (m_r[Rb(op)] & 7)); break; // mskll
		case 0x26: m_r[Rc(op)] = (m_r[Ra(op)] >> ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~u8(0x0f)); break; // extll
		case 0x2b: m_r[Rc(op)] = (m_r[Ra(op)] << ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~(u8(0x0f) << (m_r[Rb(op)] & 7))); break; // insll
		case 0x30: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(m_r[Rb(op)]); break; // zap
		case 0x31: m_r[Rc(op)] = m_r[Ra(op)] & ~zap_mask(m_r[Rb(op)]); break; // zapnot
		case 0x32: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0xff) << (m_r[Rb(op)] & 7)); break; // mskql
		case 0x34: m_r[Rc(op)] = m_r[Ra(op)] >> (m_r[Rb(op)] & 63); break; // srl
		case 0x36: m_r[Rc(op)] = (m_r[Ra(op)] >> ((m_r[Rb(op)] & 7) * 8)) & zap_mask(u8(~u8(0xff))); break; // extql
		case 0x39: m_r[Rc(op)] = m_r[Ra(op)] << (m_r[Rb(op)] & 63); break; // sll
		case 0x3b: m_r[Rc(op)] = (m_r[Ra(op)] << ((m_r[Rb(op)] & 7) * 8)) & zap_mask(~(u8(0xff) << (m_r[Rb(op)] & 7))); break; // insql
		case 0x3c: m_r[Rc(op)] = s64(m_r[Ra(op)]) >> (m_r[Rb(op)] & 63); break; // sra
		case 0x52: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x03) >> (8 - (m_r[Rb(op)] & 7))); break; // mskwh
		case 0x57: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(~(u8(0x03) >> (8 - (m_r[Rb(op)] & 7)))); break; // inswh
		case 0x5a: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(~u8(0x03)); break; // extwh
		case 0x62: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x0f) >> (8 - (m_r[Rb(op)] & 7))); break; // msklh
		case 0x67: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(~(u8(0x0f) >> (8 - (m_r[Rb(op)] & 7)))); break; // inslh
		case 0x6a: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(~u8(0x0f)); break; // extlh
		case 0x72: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0xff) >> (8 - (m_r[Rb(op)] & 7))); break; // mskqh
		case 0x77: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(~(u8(0xff) >> (8 - (m_r[Rb(op)] & 7)))); break; // insqh
		case 0x7a: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((m_r[Rb(op)] & 7) * 8))) & zap_mask(u8(~u8(0xff))); break; // extqh

			// immediate variants
		case 0x82: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x01) << (Im(op) & 7)); break; // mskbl
		case 0x86: m_r[Rc(op)] = (m_r[Ra(op)] >> ((Im(op) & 7) * 8)) & zap_mask(~u8(0x01)); break; // extbl
		case 0x8b: m_r[Rc(op)] = (m_r[Ra(op)] << ((Im(op) & 7) * 8)) & zap_mask(~(u8(0x01) << (Im(op) & 7))); break; // insbl
		case 0x92: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x03) << (Im(op) & 7)); break; // mskwl
		case 0x96: m_r[Rc(op)] = (m_r[Ra(op)] >> ((Im(op) & 7) * 8)) & zap_mask(~u8(0x03)); break; // extwl
		case 0x9b: m_r[Rc(op)] = (m_r[Ra(op)] << ((Im(op) & 7) * 8)) & zap_mask(~(u8(0x03) << (Im(op) & 7))); break; // inswl
		case 0xa2: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x0f) << (Im(op) & 7)); break; // mskll
		case 0xa6: m_r[Rc(op)] = (m_r[Ra(op)] >> ((Im(op) & 7) * 8)) & zap_mask(~u8(0x0f)); break; // extll
		case 0xab: m_r[Rc(op)] = (m_r[Ra(op)] << ((Im(op) & 7) * 8)) & zap_mask(~(u8(0x0f) << (Im(op) & 7))); break; // insll
		case 0xb0: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(Im(op)); break; // zap
		case 0xb1: m_r[Rc(op)] = m_r[Ra(op)] & ~zap_mask(Im(op)); break; // zapnot
		case 0xb2: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0xff) << (Im(op) & 7)); break; // mskql
		case 0xb4: m_r[Rc(op)] = m_r[Ra(op)] >> (Im(op) & 63); break; // srl
		case 0xb6: m_r[Rc(op)] = (m_r[Ra(op)] >> ((Im(op) & 7) * 8)) & zap_mask(u8(~u8(0xff))); break; // extql
		case 0xb9: m_r[Rc(op)] = m_r[Ra(op)] << (Im(op) & 63); break; // sll
		case 0xbb: m_r[Rc(op)] = (m_r[Ra(op)] << ((Im(op) & 7) * 8)) & zap_mask(~(u8(0xff) << (Im(op) & 7))); break; // insql
		case 0xbc: m_r[Rc(op)] = s64(m_r[Ra(op)]) >> (Im(op) & 63); break; // sra
		case 0xd2: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x03) >> (8 - (Im(op) & 7))); break; // mskwh
		case 0xd7: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((Im(op) & 7) * 8))) & zap_mask(~(u8(0x03) >> (8 - (Im(op) & 7)))); break; // inswh
		case 0xda: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((Im(op) & 7) * 8))) & zap_mask(~u8(0x03)); break; // extwh
		case 0xe2: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0x0f) >> (8 - (Im(op) & 7))); break; // msklh
		case 0xe7: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((Im(op) & 7) * 8))) & zap_mask(~(u8(0x0f) >> (8 - (Im(op) & 7)))); break; // inslh
		case 0xea: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((Im(op) & 7) * 8))) & zap_mask(~u8(0x0f)); break; // extlh
		case 0xf2: m_r[Rc(op)] = m_r[Ra(op)] & zap_mask(u8(0xff) >> (8 - (Im(op) & 7))); break; // mskqh
		case 0xf7: m_r[Rc(op)] = (m_r[Ra(op)] >> (64 - ((Im(op) & 7) * 8))) & zap_mask(~(u8(0xff) >> (8 - (Im(op) & 7)))); break; // insqh
		case 0xfa: m_r[Rc(op)] = (m_r[Ra(op)] << (64 - ((Im(op) & 7) * 8))) & zap_mask(u8(~u8(0xff))); break; // extqh
		}
		break;
	case 0x13: // INTM* (integer multiply)
		switch ((op >> 5) & 0xff)
		{
			// register variants
		case 0x00: m_r[Rc(op)] = s64(s32(u32(m_r[Ra(op)]) * u32(m_r[Rb(op)]))); break; // mull
		case 0x20: m_r[Rc(op)] = m_r[Ra(op)] * m_r[Rb(op)]; break; // mulq
		//case 0x30: mulu_64x64(m_r[Ra(op)], m_r[Rb(op)], m_r[Rc(op)]); break; // umulh
		case 0x40: m_r[Rc(op)] = s64(s32(u32(m_r[Ra(op)]) * u32(m_r[Rb(op)]))); break; // mull/v
		case 0x60: m_r[Rc(op)] = m_r[Ra(op)] * m_r[Rb(op)]; break; // mulq/v

			// immediate variants
		case 0x80: m_r[Rc(op)] = s64(s32(u32(m_r[Ra(op)]) * u32(Im(op)))); break; // mull
		case 0xa0: m_r[Rc(op)] = m_r[Ra(op)] * Im(op); break; // mulq
		//case 0xb0: mulu_64x64(m_r[Ra(op)], Im(op), m_r[Rc(op)]); break; // umulh
		case 0xc0: m_r[Rc(op)] = s64(s32(u32(m_r[Ra(op)]) * u32(Im(op)))); break; // mull/v
		case 0xe0: m_r[Rc(op)] = m_r[Ra(op)] * Im(op); break; // mulq/v
		}
		break;
		//case 0x14: // ITFP* (integer to floating)
		//case 0x15: // FLTV* (vax floating)
		//case 0x16: // FLTI* (ieee floating)
		//case 0x17: // FLTL* (floating)

	case 0x18: // MISC* (miscellaneous)
		// TODO: all of these are effectively no-ops for now
		switch (u16(op))
		{
		case 0x0000: break; // trapb
		case 0x0400: break; // excb
		case 0x4000: break; // mb
		case 0x4400: break; // wmb
		case 0x8000: break; // fetch
		case 0xa000: break; // fetch_m
		case 0xc000: break; // rpcc
		case 0xe000: break; // rc
		case 0xe800: break; // ecb
		case 0xf000: break; // rs
		case 0xf800: break; // wh64
		}
		break;

	case 0x1a: // JSR*
		m_r[Ra(op)] = m_pc;
		m_pc = m_r[Rb(op)] & ~3;
		break;

	/*case 0x20: load<u32>(m_r[Rb(op)] + Disp_M(op), [this, op](u32 data) { m_f[Ra(op)] = u32_to_f_floating(data); }); break; // ldf
	case 0x21: load<u64>(m_r[Rb(op)] + Disp_M(op), [this, op](u64 data) { m_f[Ra(op)] = u64_to_g_floating(data); }); break; // ldg
	case 0x22: load<u32>(m_r[Rb(op)] + Disp_M(op), [this, op](u32 data) { m_f[Ra(op)] = f32_to_f64(float32_t{ data }).v; }); break; // lds
	case 0x23: load<u64>(m_r[Rb(op)] + Disp_M(op), [this, op](u64 data) { m_f[Ra(op)] = data; }); break; // ldt
	case 0x24: store<u32>(m_r[Rb(op)] + Disp_M(op), f_floating_to_u32(m_f[Ra(op)])); break; // stf
	case 0x25: store<u64>(m_r[Rb(op)] + Disp_M(op), u64_to_g_floating(m_f[Ra(op)])); break; // stg
	case 0x26: store<u32>(m_r[Rb(op)] + Disp_M(op), f64_to_f32(float64_t{ m_f[Ra(op)] }).v); break; // sts
	*/
	case 0x27: store(uint64_t, m_r[Rb(op)] + Disp_M(op), m_f[Ra(op)]); break; // stt
	case 0x28: m_r[Ra(op)] = s64(load(int32_t, m_r[Rb(op)] + Disp_M(op))); break; // ldl
	case 0x29: m_r[Ra(op)] = load(uint64_t, m_r[Rb(op)] + Disp_M(op)); break; // ldq
	/*case 0x2a: // ldl_l
		load_l<u32>(m_r[Rb(op)] + Disp_M(op),
			[this, op](address_space &space, u64 address, s32 data)
		{
			if (m_lock_watch)
				m_lock_watch->remove();

			m_r[Ra(op)] = s64(data);

			space.install_write_tap(offs_t(address & ~15), offs_t(address | 15), "ldl_l",
				[this](offs_t offset, u64 &data, u64 mem_mask)
			{
				m_lock_watch->remove();
				m_lock_watch = nullptr;
			});
		});
		break;
	case 0x2b: // ldq_l
		load_l<u64>(m_r[Rb(op)] + Disp_M(op),
			[this, op](address_space &space, u64 address, u64 data)
		{
			if (m_lock_watch)
				m_lock_watch->remove();

			m_r[Ra(op)] = data;

			space.install_write_tap(offs_t(address & ~15), offs_t(address | 15), "ldq_l",
				[this](offs_t offset, u64 &data, u64 mem_mask)
			{
				m_lock_watch->remove();
				m_lock_watch = nullptr;
			});
		});
		break;
	*/
	case 0x2c: store(uint32_t, m_r[Rb(op)] + Disp_M(op), u32(m_r[Ra(op)])); break; // stl
	case 0x2d: store(uint64_t, (m_r[Rb(op)] + Disp_M(op)), m_r[Ra(op)]); break; // stq
	/*case 0x2e: // stl_c
		if (m_lock_watch)
		{
			store<u32>(m_r[Rb(op)] + Disp_M(op), u32(m_r[Ra(op)]));
			m_r[Ra(op)] = 1;

			m_lock_watch->remove();
			m_lock_watch = nullptr;
		}
		else
			m_r[Ra(op)] = 0;
		break;
	case 0x2f: // stq_c
		if (m_lock_watch)
		{
			store<u64>(m_r[Rb(op)] + Disp_M(op), m_r[Ra(op)]);
			m_r[Ra(op)] = 1;

			m_lock_watch->remove();
			m_lock_watch = nullptr;
		}
		else
			m_r[Ra(op)] = 0;
		break;
	*/

		// branch format
	case 0x30: // br
		m_r[Ra(op)] = m_pc;
		m_pc += Disp_B(op);
		break;
	case 0x31: // fbeq
		if (!(m_f[Ra(op)] & 0x7fffffffffffffff))
			m_pc += Disp_B(op);
		break;
	case 0x32: // fblt
		if (BIT(m_f[Ra(op)], 63) && (m_f[Ra(op)] & 0x7fffffffffffffff))
			m_pc += Disp_B(op);
		break;
	case 0x33: // fble
		if (BIT(m_f[Ra(op)], 63) || !(m_f[Ra(op)] & 0x7fffffffffffffff))
			m_pc += Disp_B(op);
		break;
	case 0x34: // bsr
		m_r[Ra(op)] = m_pc;
		m_pc += Disp_B(op);
		break;
	case 0x35: // fbne
		if (m_f[Ra(op)] & 0x7fffffffffffffff)
			m_pc += Disp_B(op);
		break;
	case 0x36: // fbge
		if (!BIT(m_f[Ra(op)], 63) || !(m_f[Ra(op)] & 0x7fffffffffffffff))
			m_pc += Disp_B(op);
		break;
	case 0x37: // fbgt
		if (!BIT(m_f[Ra(op)], 63) && (m_f[Ra(op)] & 0x7fffffffffffffff))
			m_pc += Disp_B(op);
		break;
	case 0x38: // blbc
		if (!BIT(m_r[Ra(op)], 0))
			m_pc += Disp_B(op);
		break;
	case 0x39: // beq
		if (m_r[Ra(op)] == 0)
			m_pc += Disp_B(op);
		break;
	case 0x3a: // blt
		if (s64(m_r[Ra(op)]) < 0)
			m_pc += Disp_B(op);
		break;
	case 0x3b: // ble
		if (s64(m_r[Ra(op)]) <= 0)
			m_pc += Disp_B(op);
		break;
	case 0x3c: // blbs
		if (BIT(m_r[Ra(op)], 0))
			m_pc += Disp_B(op);
		break;
	case 0x3d: // bne
		if (m_r[Ra(op)] != 0)
			m_pc += Disp_B(op);
		break;
	case 0x3e: // bge
		if (s64(m_r[Ra(op)]) >= 0)
			m_pc += Disp_B(op);
		break;
	case 0x3f: // bgt
		if (s64(m_r[Ra(op)]) > 0)
			m_pc += Disp_B(op);
		break;
	}
}