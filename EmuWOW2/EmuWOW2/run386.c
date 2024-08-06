#include "i386.h"
#include "thunk.h"

/*
	What is needed for Invaders
PIT at 0x40!!!

Additional int16 services
- AH=02 Get BIOS Keyboard Flags!!!

int 1A AH=00 Get BIOS Time!!!

Instructions
- SCAS* (we have string ops, we just need SCAS)

LEA
*/

/*
	FIXME:
		1.) Lots of instructions are missing:
			Far returns and calls
			String instructions
			Instructions that load segment registers
			FPU instructions
			Loops
			and more!
		2.) Mask ESP and EIP with 0xFFFF when in 16-BIT mode
*/

void i386_push(i386* pCPU, uint32_t value) {
	if (MODE(pCPU->ss)) { //32-bit
		pCPU->esp -= 4;
		bus_write_32(pCPU->ss.base + pCPU->esp, value);
	}
	else { //16-bit
		pCPU->esp -= 2;
		bus_write_16(pCPU->ss.base + pCPU->esp, value);
	}
}

uint32_t i386_pop(i386* pCPU) {
	uint32_t val;

	if (MODE(pCPU->ss)) { //32-bit SS
		val = bus_read_32(pCPU->ss.base + pCPU->esp);
		pCPU->esp += 4;
	}
	else { //16-bit SS
		val = bus_read_16(pCPU->ss.base + pCPU->esp);
		pCPU->esp += 2;
	}

	return val;
}

void dump_seg_386(i386* pCPU, int seg) {
	SEGREG sgmt = pCPU->seg_regs[seg];

	printf("%s (%04X): Base=%p Limit=%p DPL=%d ", seg_regs[seg], sgmt.selector, sgmt.base, sgmt.limit, DPL(sgmt));

	if (VALID(sgmt)) {
		if (STYPE(sgmt)) {
			if (EXEC(sgmt)) {
				printf("CODE ");
			}
			else {
				printf("DATA ");
			}

			if (MODE(sgmt)) {
				printf("USE32 ");
			}
			else {
				printf("USE16 ");
			}
		}
		else {
			printf("SYSTEM \n");
		}
	}

	else {
		printf("NOT VALID ");
	}

	printf("\n");
}

#define PRINT_FLAG(mask, set, clear)       if(pCPU->eflags & (1 << mask)){ \
												printf(set); \
											} else { \
												printf(clear); \
											}

void dump_eflags_i386(i386* pCPU) {
	PRINT_FLAG(V8086, "V", "");
	PRINT_FLAG(RESUME, "R", "");
	PRINT_FLAG(NESTED, "N", "");
	PRINT_FLAG(OVERFLOW, "O", "");
	PRINT_FLAG(DIRECTION, "D", "d");
	PRINT_FLAG(INTERRUPT, "I", "");
	PRINT_FLAG(TRAP, "T", "");
	PRINT_FLAG(SIGN, "S", "");
	PRINT_FLAG(ZERO, "Z", "");
	PRINT_FLAG(AC, "A", "");
	PRINT_FLAG(PARITY, "P", "");
	PRINT_FLAG(CARRY, "C", "");

	printf(" IOPL=%d", IOPL(pCPU->eflags));
}

void dump_regs_386(i386* pCPU) {
	int i;

	printf("EIP= %p CPL=%d EFLAGS= ", pCPU->eip, pCPU->cpl);
	dump_eflags_i386(pCPU);

	for (i = 0; i < 8; i++) {
		if ((i % 4) == 0) printf("\n");

		printf("%s: %p  ", regs_32[i], pCPU->regs[i]);
	}

	printf("\n");
}

void dump_segs_386(i386* pCPU) {
	int i;

	for (i = 0; i < 6; i++) {
		dump_seg_386(pCPU, i);
	}
}

void dump_cr_386(i386* pCPU) {
	int i;

	for (i = 0; i < 8; i++) {
		if (i == 4) printf("\n");

		printf("CR%d: %p  ", i, pCPU->cr[i]);
	}
}

void dump_gdt_ldt_idt(i386* pCPU) {

}

void dump_386(i386* pCPU) {
	dump_regs_386(pCPU);
	dump_segs_386(pCPU);
	dump_cr_386(pCPU);
	dump_gdt_ldt_idt(pCPU);
	printf("\n");
}

uint64_t read_source(i386* pCPU, decoded_op* src) { //load value from reg/mem
	uint32_t addr;

	if (src->type == NONE) return 0;

	switch (src->type) {
	case IMM:
		return src->id;
	case EDX_EAX:
		if (src->size == SZ_32) {
			return ((uint32_t)(pCPU->dx) << 16) | pCPU->ax;
		}
		else {
			return ((uint64_t)(pCPU->edx) << 32) | pCPU->eax;
		}
		break;
	case MEM:
		addr = pCPU->seg_regs[src->sr].base + src->id;
		switch (src->size) {

		case SZ_8:
			return bus_read_8(addr);
		case SZ_16:
			return bus_read_16(addr);
		case SZ_32:
			return bus_read_32(addr);
		default:
			printf("MEMSRC Undefined size %d\n", src->size);
			while (1);
			break;
		}
		break;
	case REGISTER:
		switch (src->size) {
		case SZ_8:
			return    *(((uint8_t*)((&(pCPU->regs[src->id & 3])))) + (src->id >> 2));
			break;
		case SZ_16:
			return (uint16_t)(pCPU->regs[src->id]);
		case SZ_32:
			return pCPU->regs[src->id];
		default:
			printf("REGSRC Undefined size %d\n", src->size);
			while (1);
			break;
		}

		break;
	case SEG_REG:
		return pCPU->seg_regs[src->id].selector;
	case CTRLREG:
		return pCPU->cr[src->id];
		break;
	}
}

void write_dest(i386* pCPU, decoded_op* dst, uint64_t value) { //store value to reg/mem
	uint32_t addr;

	if (dst->type == NONE) return;

	switch (dst->type) {
	case EDX_EAX:
		switch (dst->size) {
		case SZ_32:
			pCPU->dx = value >> 16;
			pCPU->ax = value;
			break;
		case SZ_64:
			pCPU->edx = value >> 32;
			pCPU->eax = value;
			break;
		}
		break;
	case MEM:
		addr = pCPU->seg_regs[dst->sr].base + dst->id;

		switch (dst->size) {
		case SZ_8:
			bus_write_8(addr, value);
			break;
		case SZ_16:
			bus_write_16(addr, value);
			break;
		case SZ_32:
			bus_write_32(addr, value);
			break;
		default:
			printf("MEMDST Undefined size %d\n", dst->size);
			while (1);
			break;
		}

		break;
	case REGISTER:
		switch (dst->size) {
		case SZ_8:
			*(((uint8_t*)((&(pCPU->regs[dst->id & 3])))) + (dst->id >> 2)) = value;
			break;
			break;
		case SZ_16:
			//printf("We're writing %04x to register %d\n", value, dst->id);
			*(uint16_t*)(&(pCPU->regs[dst->id])) = value;
			break;
		case SZ_32:
			pCPU->regs[dst->id] = value;
			break;
		default:
			printf("REGDST Undefined size %d\n", dst->size);
			while (1);
			break;
		}

		break;
	case SEG_REG:
		/*printf("FIXME: Storing into segment register!\n");
		while (1);*/
		pCPU->seg_regs[dst->id].selector = value;
		break;
	case CTRLREG:
		pCPU->cr[dst->id] = value;
		break;
	default:
		printf("Trying to store type %d\n", dst->type);
		while (1);
		break;
	}
}

int do_shift(i386* pCPU, int op, decoded_op* dst, decoded_op* src1, decoded_op* src2) { //hanndle flags -- SHL and SHR don't care about bitness (except for flags)
	uint8_t shamt = read_source(pCPU, src2);
	uint32_t value = read_source(pCPU, src1);
	uint64_t res;

	switch (op) {
	case SHL:
		res = value << shamt;

		if (dst->size == SZ_8) {
			if (res & 0x100) {

				SET_FLAG(CARRY);
			}
			else {
				CLEAR_FLAG(CARRY);
			}
		}

		break;
	case SHR:
		res = value >> shamt;
		break;
	default:
		printf("Unsupported shift operation %d\n", op);
		dump_386(pCPU);
		while (1);
		break;
	}

	write_dest(pCPU, dst, res);

	return 0;
}

int do_alu_op(i386* pCPU, int op, decoded_op* dst, decoded_op* src1, decoded_op* src2, int reg) {
	uint32_t val_src1, val_src2;
	uint32_t res = 0;
	int wb = 1;

	if (op == ALU_MULTI) {
		return do_alu_op(pCPU, reg, dst, src1, src2, reg);
	}

	val_src1 = read_source(pCPU, src1);
	val_src2 = read_source(pCPU, src2);

	switch (op) { //handle flags
	case ALU_AND:
		res = val_src1 & val_src2;
		CLEAR_FLAG(CARRY);
		CLEAR_FLAG(OVERFLOW);
		SetZF(res);
		SetSF(res);
		SetPF(res);
		break;
	case ALU_XOR:
		res = val_src1 ^ val_src2;
		CLEAR_FLAG(CARRY);
		CLEAR_FLAG(OVERFLOW);
		SetZF(res);
		SetSF(res);
		SetPF(res);
		break;
	case ALU_ADC:
		res = GET_FLAG(CARRY);
	case ALU_ADD:
		res += val_src1 + val_src2;
		SetOF_Add(val_src1, val_src2, res);
		SetSF(res);
		SetZF(res);
		SetAF(val_src1, val_src2, res);
		SetCF(res);
		SetPF(res);
		break;
	case ALU_SBB:
		res = val_src1 - val_src2 - GET_FLAG(CARRY);
		SetOF_Sub(val_src1, val_src2, res);
		SetSF(res);
		SetZF(res);
		SetAF(val_src1, val_src2, res);
		SetCF(res);
		SetPF(res);
		break;
	case ALU_CMP:
		wb = 0;
	case ALU_SUB:
		res = val_src1 - val_src2;
		SetOF_Sub(val_src1, val_src2, res);
		SetSF(res);
		SetZF(res);
		SetAF(val_src1, val_src2, res);
		SetCF(res);
		SetPF(res);
		break;
	case ALU_OR:
		res = val_src1 | val_src2;
		CLEAR_FLAG(CARRY);
		CLEAR_FLAG(OVERFLOW);
		SetZF(res);
		SetSF(res);
		SetPF(res);
		break;
	default:
		printf("Undefined ALU op %d\n", op);
		while (1);
		break;
	}

	if (wb) write_dest(pCPU, dst, res);

	return 0;
}

int do_alu_special(i386* pCPU, int op, decoded_op* dst, decoded_op* src1, decoded_op* src2, int wb) { //fix flags
	uint64_t val_src1, val_src2;
	uint64_t res = 0;
	uint64_t rem = 0;
	int num_bits = (dst->size == SZ_8) ? 8 : ((dst->size == SZ_32) ? 32 : 16);

	val_src1 = read_source(pCPU, src1);
	val_src2 = read_source(pCPU, src2);

	switch (op) {
	case ALU_IMUL:
		if (num_bits == 8) {
			res = (int64_t)(int8_t)(SX8(val_src1)) * (int64_t)(int8_t)(SX8(val_src2));
		}
		else if (num_bits == 16) {
			res = (int64_t)(int16_t)(SX16(val_src1)) * (int64_t)(int16_t)(SX16(val_src2));
		}
		else {
			res = (int64_t)(int32_t)(SX32(val_src1)) * (int64_t)(int32_t)(SX32(val_src2));
		}
		rem = res >> num_bits;
		break;
	case ALU_IDIV:
		switch (num_bits) {
		case 8:
			res = (int16_t)(val_src1) / (int16_t)(int8_t)(val_src2);
			rem = (int16_t)(val_src1) % (int16_t)(int8_t)(val_src2);
			break;
		case 16:
			res = (int32_t)(val_src1) / (int32_t)(int16_t)(val_src2);
			rem = (int32_t)(val_src1) % (int32_t)(int16_t)(val_src2);
			break;
		case 32:
			res = (int64_t)(val_src1) / (int64_t)(int32_t)(val_src2);
			rem = (int64_t)(val_src1) % (int64_t)(int32_t)(val_src2);
			break;
		}
		break;
	case ALU_NOT:
		res = ~val_src1;
		break;
	case ALU_NEG:
		res = -val_src1;

		COND_FLAG(CARRY, val_src1 == 0);

		//set of
		SetSF(res);
		SetZF(res);
		//set af
		SetPF(res);
		break;
	case ALU_MUL:
		res = val_src1 * val_src2;
		rem = res >> num_bits;
		break;
	case ALU_DIV:
		res = val_src1 / val_src2;
		rem = val_src1 % val_src2;
		break;
	case ALU_TEST:
		res = val_src1 & val_src2;
		CLEAR_FLAG(CARRY);
		CLEAR_FLAG(OVERFLOW);
		SetZF(res);
		SetSF(res);
		SetPF(res);
		break;
	default:
		printf("Undefined ALU B op %d\n", op);
		while (1);
		break;
	}

	//SetZF16(res);

	write_dest(pCPU, dst, res);

	if (wb & WRITE_DX) {
		switch (dst->size) {
		case SZ_8:
			pCPU->ah = rem;
			break;
		case SZ_16:
			pCPU->dx = rem;
			break;
		case SZ_32:
			pCPU->edx = rem;
			break;
		default:
			printf("HEEEEEEEEEEEEEEELP!\n");
			while (1);
			break;
		}
	}

	return 0;
}


int jump_condition(i386* pCPU, int condition) {
	switch (condition) {
	case JO:
		return GET_FLAG(OVERFLOW);
	case JNO:
		return !GET_FLAG(OVERFLOW);
	case JB:
		return GET_FLAG(CARRY);
	case JAE:
		return !GET_FLAG(CARRY);
	case JE:
		return GET_FLAG(ZERO);
		break;
	case JNE:
		return !GET_FLAG(ZERO);
	case JBE:
		return GET_FLAG(CARRY) || GET_FLAG(ZERO);
	case JA:
		return !GET_FLAG(CARRY) && !GET_FLAG(ZERO);
	case JS:
		return GET_FLAG(SIGN) == 1;
	case JNS:
		return GET_FLAG(SIGN) == 0;
	case JP:
		return GET_FLAG(PARITY) == 1;
	case JNP:
		return GET_FLAG(PARITY) == 0;
	case JL:
		return GET_FLAG(SIGN) != GET_FLAG(OVERFLOW);
	case JGE:
		return GET_FLAG(SIGN) == GET_FLAG(OVERFLOW);
	case JLE:
		return GET_FLAG(ZERO) || (GET_FLAG(SIGN) != GET_FLAG(OVERFLOW));
	case JG:
		return !GET_FLAG(ZERO) && (GET_FLAG(SIGN) == GET_FLAG(OVERFLOW));
	case ALWAYS:
		return 1;
	case JCXZ:
		if (MODE(pCPU->cs) ^ pCPU->op_override) { //32-bit
			return pCPU->ecx == 0;
		}
		else {
			return pCPU->cx == 0;
		}
		return 0;
	}
}


int do_mov(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint32_t val = read_source(pCPU, src);
	write_dest(pCPU, dst, val);
	return 0;
}

int do_lea(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint32_t ea = src->id;
	write_dest(pCPU, dst, ea);
	return 0;
}

int do_push(i386* pCPU, decoded_op* src) {
	uint32_t val = read_source(pCPU, src);
	i386_push(pCPU, val);
	return 0;
}

int do_enter(i386* pCPU, decoded_op* src1, decoded_op* src2) {
	uint32_t temp, i;
	i386_push(pCPU, pCPU->ebp);
	temp = pCPU->esp;
	i386_push(pCPU, temp);
	pCPU->ebp = temp;
	pCPU->esp -= read_source(pCPU, src1);
}

int do_leave(i386* pCPU) {
	if (MODE(pCPU->ss)) {
		pCPU->esp = pCPU->ebp;
	}
	else {
		pCPU->sp = pCPU->bp;
	}

	pCPU->ebp = i386_pop(pCPU);
}

int do_pushf(i386* pCPU) {
	i386_push(pCPU, pCPU->eflags);
	return 0;
}

int do_pusha(i386* pCPU) {
	uint32_t temp = pCPU->esp;

	i386_push(pCPU, pCPU->eax);
	i386_push(pCPU, pCPU->ecx);
	i386_push(pCPU, pCPU->edx);
	i386_push(pCPU, pCPU->ebx);
	i386_push(pCPU, temp);
	i386_push(pCPU, pCPU->ebp);
	i386_push(pCPU, pCPU->esi);
	i386_push(pCPU, pCPU->edi);

	return 0;
}

int do_popa(i386* pCPU) {
	if (MODE(pCPU->cs) ^ pCPU->op_override) { //popad
		pCPU->edi = i386_pop(pCPU);
		pCPU->esi = i386_pop(pCPU);
		pCPU->ebp = i386_pop(pCPU);
		pCPU->esp += 4;
		pCPU->ebx = i386_pop(pCPU);
		pCPU->edx = i386_pop(pCPU);
		pCPU->ecx = i386_pop(pCPU);
		pCPU->eax = i386_pop(pCPU);
	}
	else {
		pCPU->di = i386_pop(pCPU);
		pCPU->si = i386_pop(pCPU);
		pCPU->bp = i386_pop(pCPU);
		pCPU->sp += 2;
		pCPU->bx = i386_pop(pCPU);
		pCPU->dx = i386_pop(pCPU);
		pCPU->cx = i386_pop(pCPU);
		pCPU->ax = i386_pop(pCPU);
	}
}

int do_popf(i386* pCPU) {
	uint32_t new_flags = i386_pop(pCPU);

	if (MODE(pCPU->cs) ^ pCPU->op_override) { //pushfd
		pCPU->eflags = new_flags;
	}
	else {
		pCPU->flags = new_flags;
	}
	return 0;
}

int do_xlat(i386* pCPU) {
	pCPU->al = bus_read_8(pCPU->seg_regs[pCPU->sgmt_override].base + pCPU->ebx + pCPU->al);

	return 0;
}

int do_sahf(i386* pCPU) {
	COND_FLAG(CARRY, pCPU->ah & (1 << CARRY));
	COND_FLAG(PARITY, pCPU->ah & (1 << PARITY));
	COND_FLAG(AC, pCPU->ah & (1 << AC));
	COND_FLAG(ZERO, pCPU->ah & (1 << ZERO));
	COND_FLAG(SIGN, pCPU->ah & (1 << SIGN));

	return 0;
}

int do_lahf(i386* pCPU) {
	pCPU->ah = pCPU->flags;
}

int do_pop(i386* pCPU, decoded_op* dst) {
	write_dest(pCPU, dst, i386_pop(pCPU));
	return 0;
}

int load_seg_reg(i386* pCPU, decoded_op* dst, uint16_t selector) {
	if (pCPU->cr0 & 0x1) { //PE=1 (protected mode engaged)
		printf("FIXME: Protected mode segment loads!\n");
		while (1);
	}
	else {
		write_dest(pCPU, dst, selector);
		pCPU->seg_regs[dst->id].base = selector << 4;
		return 0;
	}
}

int do_mov_to_sr(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint16_t selector = read_source(pCPU, src);
	return load_seg_reg(pCPU, dst, selector);
}

int do_pop_sr(i386* pCPU, decoded_op* dst) {
	uint32_t selector = i386_pop(pCPU);

	return load_seg_reg(pCPU, dst, selector);
}

int do_call_near(i386* pCPU, decoded_op* src) {
	i386_push(pCPU, pCPU->eip);
	pCPU->eip = read_source(pCPU, src);
	return 0;
}

int do_near_jump(i386* pCPU, decoded_op* src, int condition) {
	if (jump_condition(pCPU, condition)) {
		pCPU->eip = read_source(pCPU, src);
	}
	return 0;
}

int do_loop(i386* pCPU, int type, decoded_op* src) {
	uint32_t loop_dest = read_source(pCPU, src);

	pCPU->ecx--;

	if (pCPU->ecx != 0) {
		if ((type == LOOP_NORMAL) || (type == LOOPNE && !GET_FLAG(ZERO)) || (type == LOOPE && GET_FLAG(ZERO))) {
			pCPU->eip = loop_dest;
		}
	}

	return 0;
}

int do_clear_flag(i386* pCPU, int flag) {
	CLEAR_FLAG(flag);
}

int do_set_flag(i386* pCPU, int flag) {
	SET_FLAG(flag);
}

int do_incdec(i386* pCPU, int version, decoded_op* dst, decoded_op* src1) {
	uint32_t value = read_source(pCPU, src1);
	uint32_t result;

	if (version == ID_INC) {
		result = value + 1;
		SetOF_Add(value, 1, result);
	}
	else {
		result = value - 1;
		SetOF_Sub(value, 1, result);
	}

	//set flags
	SetZF(result);
	SetPF(result);
	SetSF(result);
	SetAF(value, 1, result);

	write_dest(pCPU, dst, result);

	return 0;
}

#define STRING_SIZE()		((size & STR_SZ_8) ? 1 : (  (pCPU->op_override ^ MODE(pCPU->cs)) ? 4 : 2))

#define STRING_DEST()		(pCPU->es.base + pCPU->edi)

#define STRING_SRC_ADDR()	(pCPU->seg_regs[pCPU->sgmt_override].base + pCPU->esi)

#define STRING_DEST_UPDATE()	if (GET_FLAG(DIRECTION)) { \
									pCPU->edi -= sz; \
								} \
								else { \
									pCPU->edi += sz; \
								}

#define STRING_SRC_UPDATE()		if (GET_FLAG(DIRECTION)) { \
									pCPU->esi -= sz; \
								} \
								else { \
									pCPU->esi += sz; \
								}

#define STRING_STORE(a, v)	switch (sz) { \
								case 1: \
									bus_write_8(a, v); \
									break; \
								case 2: \
									bus_write_16(a, v); \
									break; \
								case 4: \
									bus_write_32(a, v); \
									break; \
								}

#define STRING_STORE_EAX(v)	switch (sz) { \
								case 1: \
									pCPU->al = v; \
									break; \
								case 2: \
									pCPU->ax = v; \
									break; \
								case 4: \
									pCPU->eax = v; \
									break; \
								}

#define STRING_LOAD(a)		((sz == 1) ? bus_read_8(a) : ((sz == 2) ? bus_read_16(a) : bus_read_32(a)))

int do_stos(i386* pCPU, int size) {
	int sz = STRING_SIZE();
	uint32_t val = pCPU->eax;
	uint32_t dest_addr = STRING_DEST();

	STRING_STORE(dest_addr, val);

	STRING_DEST_UPDATE();

	return 0;
}

int do_lods(i386* pCPU, int size) {
	int sz = STRING_SIZE();
	uint32_t src_addr = STRING_SRC_ADDR();
	uint32_t val = STRING_LOAD(src_addr);

	STRING_STORE_EAX(val);

	STRING_SRC_UPDATE();

	return 0;
}

int do_cmps(i386* pCPU, int size) {
	int sz = STRING_SIZE();
	uint32_t src_addr = STRING_SRC_ADDR();
	uint32_t dest_addr = STRING_DEST();
	uint32_t val1 = STRING_LOAD(src_addr);
	uint32_t val2 = STRING_LOAD(dest_addr);
	uint32_t comp = val1 - val2;

	SetZF8(comp);

	STRING_SRC_UPDATE();
	STRING_DEST_UPDATE();

	return 0;
}

int do_scas(i386* pCPU, int size) {
	int sz = STRING_SIZE();
	uint32_t dest_addr = STRING_DEST();
	uint32_t val2 = STRING_LOAD(dest_addr);

	switch (size) {
	case 1:
		SetZF8(pCPU->al - val2);
		break;
	case 2:
		SetZF16(pCPU->ax - val2);
		break;
	case 4:
		SetZF32(pCPU->eax - val2);
		break;
	}

	STRING_DEST_UPDATE();

	return 0;
}

int do_movs(i386* pCPU, int size) {
	int sz = STRING_SIZE();
	uint32_t src_addr = STRING_SRC_ADDR();
	uint32_t dest_addr = STRING_DEST();
	uint32_t val = STRING_LOAD(src_addr);

	STRING_STORE(dest_addr, val);

	STRING_SRC_UPDATE();
	STRING_DEST_UPDATE();

	return 0;
}

int do_string(i386* pCPU, int sub_type, int size) {
	switch (sub_type) {
	case STOS:
		return do_stos(pCPU, size);
		break;
	case LODS:
		return do_lods(pCPU, size);
		break;
	case CMPS:
		return do_cmps(pCPU, size);
		break;
	case MOVS:
		return do_movs(pCPU, size);
		break;
	case SCAS:
		return do_scas(pCPU, size);
		break;
	default:
		printf("Unsupported string operation %d\n", sub_type);
		dump_386(pCPU);
		while (1);
		break;
	}

	return 1;
}

int do_rep_string(i386* pCPU, int sub_type, int size, int cond) { //0 = REP/REPE/REPZ, 1=REPNE/REPNZ
	while (pCPU->ecx) {
		do_string(pCPU, sub_type, size);
		pCPU->ecx--;

		if (cond) {
			if (GET_FLAG(ZERO)) break;
		}
		else {
			if (sub_type == CMPS || sub_type == SCAS) {
				if (!GET_FLAG(ZERO)) break;
			}
		}
	}

	return 0;
}

int do_cbw_cwde(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint32_t value = read_source(pCPU, src);

	if (src->size == SZ_8) {
		value = SX8(value);
	}
	else {
		value = SX16(value);
	}

	write_dest(pCPU, dst, value);

	return 0;
}

int do_cwd_cdq(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint32_t value = read_source(pCPU, src);
	uint64_t output;

	if (src->size == SZ_16) {
		output = SX16(value);
	}
	else {
		output = SX32(value);
	}

	write_dest(pCPU, dst, output);

	return 0;
}

int do_xchg(i386* pCPU, decoded_op* src1, decoded_op* src2) {
	uint32_t value1 = read_source(pCPU, src1);
	uint32_t value2 = read_source(pCPU, src2);

	write_dest(pCPU, src1, value2);
	write_dest(pCPU, src2, value1);

	return 0;
}

int do_inp(i386* pCPU, decoded_op* dst, decoded_op* src) {
	uint16_t port = read_source(pCPU, src);
	uint32_t value = io_read_32(port);

	write_dest(pCPU, dst, value);

	return 0;
}

int tick_count = 0;

DWORD ExecuteNativeFunction_i386(LPVOID pTargetAddress, DWORD* pParamList, DWORD dwParamCount, DWORD* diff) {
	DWORD old_esp;
	DWORD mid_esp;

	__asm {
		mov old_esp, esp

		mov ecx, dwParamCount
		mov edx, pParamList
		lea eax, [edx + ecx * 4 - 4]

		loop_start:
		cmp eax, edx
			jb call_function
			push dword ptr[eax]
			sub eax, 4
			jmp loop_start

			call_function :
		mov mid_esp, esp
			mov eax, pTargetAddress
			call eax

			mov ebx, mid_esp
			sub ebx, esp
			mov edx, diff
			mov dword ptr[diff], 9

			mov esp, old_esp
	};
}

DWORD HandleNativeInstruction_i386(i386* pCPU) {
	DWORD res;
	DWORD arg_list[16];
	DWORD* StackArgList;
	int i;
	DWORD pc = pCPU->eip;
	DWORD diff = -1;

	StackArgList = pCPU->esp + 4;

	for (i = 0; i < 16; i++) {
		arg_list[i] = StackArgList[i];

		//printf("Arg %d: %p\n", i, arg_list[i]);
	}

	res = ExecuteNativeFunction_i386(*(DWORD*)(pc + 2), arg_list, 16, &diff);

	printf("DIFF = %x bytes\n", -diff);

	/*if (((PThreadContext)TlsGetValue(dwThreadContextIndex))->dbg_state.print_functions) {
		printf("	<%s!%s returned %p> (error = %d)\n", *(DWORD*)(pc + 10), *(DWORD*)(pc + 6), res, GetLastError());
	}*/
	return res;
}

int do_int(i386* pCPU, decoded_op* src) {
	uint32_t vector = read_source(pCPU, src);

	if (vector == 0x2E) {
		INT index = pCPU->eax;
		pCPU->eax = CallSystemService(index);
	}
	else {
		printf("Not a system call.\n");
		while (1);
	}

	//if(vector == 0x80){

		/*
		printf("Making system call to %s!%s\n", *(DWORD*)(pCPU->eip + 10), *(DWORD*)(pCPU->eip + 6));
		while(1);
		*/

	/*pCPU->eax = HandleNativeInstruction_i386(pCPU);
	pCPU->eip = i386_pop(pCPU);
	*/

	//}
	//else{
	//	printf("Invalid interrupt vector %x\n", vector);	
	//	while(1);
	//}

	return 0;
}


void decode_operand(decoded_op* pDop, decoded_op* rm, char reg, i386_operand* op, i386* pCPU) {
	uint32_t disp;

	pDop->size = op->size;

	if (op->type == NONE) {
		pDop->type = NONE;
		return;
	}

	//convert conditional sized operands to real size
	switch (pDop->size) {
	case SZ_1632: //word / dword
		pDop->size = (MODE(pCPU->cs) ^ pCPU->op_override) ? SZ_32 : SZ_16;
		break;
	case SZ_816:
		pDop->size = (MODE(pCPU->cs) ^ pCPU->op_override) ? SZ_16 : SZ_8;
		break;
	case SZ_3248: //far pointer (16:16 / 16:32)
		pDop->size = (MODE(pCPU->cs) ^ pCPU->op_override) ? SZ_48 : SZ_32;
		break;
	case SZ_3264: //DX:AX / EDX:EAX
		pDop->size = (MODE(pCPU->cs) ^ pCPU->op_override) ? SZ_64 : SZ_32;
	default:
		break;
	}

	switch (op->type) {
	case OFFSET:
		pDop->type = MEM;
		pDop->sr = pCPU->sgmt_override;
		if (MODE(pCPU->cs) ^ pCPU->addr_override) { //32-bit
			pDop->id = bus_read_32(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 4;
		}
		else { //16-bit
			pDop->id = bus_read_16(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 2;
		}
		break;
	case MEM_MODRM:
		if (rm->type != MEM) {
			printf("Using register in rm field when memory is required\n");
			while (1);
		}
	case RM_MODRM:
		pDop->type = rm->type;
		pDop->sr = pCPU->sgmt_override;
		pDop->id = rm->id;

		if (rm->sr) {
			pDop->sr = rm->sr;
		}

		if (pCPU->overriding_sgmt) {
			pDop->sr = pCPU->sgmt_override;
		}

		break;
	case REG_MODRM:
		pDop->type = REGISTER;
		pDop->id = reg;
		break;
	case CREG_MODRM:
		pDop->type = CTRLREG;
		pDop->id = reg;
		break;
	case SEG_REG_MODRM:
		pDop->type = SEG_REG;
		pDop->id = reg;
		break;
	case CONST_REG:
		pDop->type = REGISTER;
		pDop->id = op->value;
		break;
	case CONST_SEG_REG:
		pDop->type = SEG_REG;
		pDop->id = op->value;
		break;
	case SIMM:
		pDop->type = IMM;

		switch (pDop->size) {
		case SZ_8:
			pDop->id = SX8(bus_read_8(pCPU->cs.base + pCPU->eip++));
			break;
		case SZ_16:
			pDop->id = SX16(bus_read_16(pCPU->cs.base + pCPU->eip));
			pCPU->eip += 2;
			break;
		case SZ_32:
			pDop->id = bus_read_32(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 4;
			break;
		}

		break;
	case FAR_PTR:
	case IMM:
		pDop->type = IMM;

		switch (pDop->size) {
		case SZ_8:
			pDop->id = bus_read_8(pCPU->cs.base + pCPU->eip++);
			break;
		case SZ_16:
			pDop->id = bus_read_16(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 2;
			break;
		case SZ_32:
			pDop->id = bus_read_32(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 4;
			break;
		}

		break;
	case CONSTANT:
		pDop->type = IMM;
		pDop->id = op->value;
		break;
	case EDX_EAX:
		pDop->type = EDX_EAX;
		break;
	case IP_REL:
		pDop->type = IMM;

		switch (pDop->size) {
		case SZ_8:
			disp = SX8(bus_read_8(pCPU->cs.base + pCPU->eip++));
			break;
		case SZ_16:
			disp = SX16(bus_read_16(pCPU->cs.base + pCPU->eip));
			pCPU->eip += 2;
			break;
		case SZ_32:
			disp = bus_read_32(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 4;
			break;
		}

		pDop->id = pCPU->eip + disp;

		break;
	}
}

//Mod R/M decoding for 32-bit addressing modes
uint32_t decode_sib(i386* pCPU, char modrm, decoded_op* op) {
	char sib = bus_read_8(pCPU->cs.base + pCPU->eip++);
	uint32_t offset = 0;

	if (BASE(sib) == 5 && MOD(modrm) == 0) {
		offset = bus_read_32(pCPU->cs.base + pCPU->eip);
		pCPU->eip += 4;
	}
	else {
		offset = pCPU->regs[BASE(sib)];
		if (BASE(sib) == 5 || BASE(sib) == 4) {
			op->sr = SS;
		}
	}

	if (INDEX(sib) != 4) {
		offset += pCPU->regs[INDEX(sib)] * (1 << SCALE(sib));
	}

	return offset;
}

void decode_rm_32(i386* pCPU, decoded_op* op, char modrm) {
	char mod = MOD(modrm);
	char rm = RM(modrm);
	uint32_t offset = 0;

	op->sr = 0;

	if (mod == 3) {
		op->type = REGISTER;
		op->id = rm;
		return;
	}

	op->type = MEM;

	switch (rm) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 6:
	case 7:
		offset = pCPU->regs[rm];
		break;
	case 4:
		offset = decode_sib(pCPU, modrm, op);
		break;
	case 5:
		if (mod) { //EBP
			offset = pCPU->ebp;
			op->sr = SS;
		}
		else { //disp32
			offset = bus_read_32(pCPU->cs.base + pCPU->eip);
			pCPU->eip += 4;
		}
		break;
	}

	if (mod == 1) {
		offset += SX8(bus_read_8(pCPU->cs.base + pCPU->eip++));
	}
	else if (mod == 2) {
		offset += bus_read_32(pCPU->cs.base + pCPU->eip);
		pCPU->eip += 4;
	}

	op->id = offset;
}

//Mod R/M decoding for 16-bit addressing modes
void decode_rm_16(i386* pCPU, decoded_op* op, char modrm) {
	char mod = MOD(modrm);
	char rm = RM(modrm);
	uint16_t offset = 0;

	op->sr = 0;

	if (mod == 3) {
		op->type = REGISTER;
		op->id = rm;
		return;
	}

	op->type = MEM;

	switch (rm) {
	case 0:
		offset = pCPU->bx + pCPU->si;
		break;
	case 1:
		offset = pCPU->bx + pCPU->di;
		break;
	case 2:
		offset = pCPU->bp + pCPU->si;
		op->sr = SS;
		break;
	case 3:
		offset = pCPU->bp + pCPU->di;
		op->sr = SS;
		break;
	case 4:
		offset = pCPU->si;
		break;
	case 5:
		offset = pCPU->di;
		break;
	case 6:
		if (mod == 0) { //disp16
			offset = SX16(bus_read_16(pCPU->cs.base + pCPU->eip));
			pCPU->eip += 2;
		}
		else {
			offset = pCPU->bp;
			op->sr = SS;
		}
		break;
	case 7:
		offset = pCPU->bx;
		break;
	}

	if (mod == 1) { //add disp8
		offset += SX8(bus_read_8(pCPU->cs.base + pCPU->eip));
		pCPU->eip += 1;
	}
	else if (mod == 2) { //add disp16
		offset += SX16(bus_read_16(pCPU->cs.base + pCPU->eip));
		pCPU->eip += 2;
	}

	op->id = offset & 0xFFFF;
}

uint32_t i386_ret_near(i386* pCPU, decoded_op* src) {
	uint32_t inc_amnt = read_source(pCPU, src);
	pCPU->eip = i386_pop(pCPU);
	pCPU->esp += inc_amnt;
	return 0;
}

void fixup_f6(i386_op* inst, char reg) {
	int size = inst->src1.size;

	switch (reg) {
	case ALU_TEST: //TEST r/m, imm
		inst->dest.type = NONE;
		inst->src1.type = RM_MODRM;
		inst->src1.size = size;
		inst->src2.type = IMM;
		inst->src2.size = size;
		break;
	case ALU_NEG:
	case ALU_NOT: //NOT r/m
		inst->dest.type = RM_MODRM;
		inst->dest.size = size;
		inst->src1.type = RM_MODRM;
		inst->src1.size = size;
		inst->src2.type = NONE;
		break;
	case ALU_IMUL:
	case ALU_MUL: //MUL r/m16 (AX * r/m16 = DX:AX) OR MUL r/m8 (AL * r/m8 = AX)
		inst->dest.type = CONST_REG;
		inst->dest.size = size;
		inst->dest.value = R_EAX;

		inst->src1.type = CONST_REG;
		inst->src1.size = size;
		inst->src1.value = R_EAX;

		inst->src2.size = size;
		inst->src2.type = RM_MODRM;

		inst->flags = WRITE_DX;
		break;
	case ALU_IDIV:
	case ALU_DIV: //DIV r/m16 (DX:AX / r/m16 = DX:AX) OR DIV r/m8 (AX / r/m8 = AH:AL)
		if (size == SZ_8) {
			inst->src1.type = CONST_REG;
			inst->src1.size = SZ_16;
			inst->src1.value = R_EAX;
		}
		else {
			inst->src1.type = EDX_EAX;
			inst->src1.size = SZ_3264;
		}

		inst->src2.size = size;
		inst->src2.type = RM_MODRM;

		inst->dest.size = size;
		inst->dest.type = CONST_REG;
		inst->dest.value = R_EAX;

		inst->flags = WRITE_DX;
		break;
	}

	inst->sub_type = reg;
}

void fixup_ff(i386_op* inst, char reg) {
	//printf("FIXING UP! (reg=%d)\n", reg);

	switch (reg) {
	case 0: //INC r/m16
		inst->op_type = INCDEC;
		inst->sub_type = ID_INC;
		break;
	case 1: //DEC r/m16
		inst->op_type = INCDEC;
		inst->sub_type = ID_DEC;
		break;
	case 2: //CALL NEAR r/m16
		inst->op_type = CALL_NEAR;
		break;
	case 3: //CALL FAR m16:16
		printf("FAR CALL unsupported!\n");
		while (1);
		break;
		break;
	case 4: //JMP NEAR r/m16
		inst->op_type = JUMP;
		inst->sub_type = ALWAYS;
		break;
	case 5: //JMP FAR m16:16
		printf("FAR JUMP unsupported!\n");
		while (1);
		break;
	case 6: //PUSH r/m16
		inst->op_type = PUSH;
		break;
	}
}

int i386_step(i386* pCPU) {
	uint8_t byte = bus_read_8(pCPU->cs.base + pCPU->eip++);
	i386_op inst = InstructionTable[byte];
	uint8_t modrm, reg = 0;
	decoded_op dst, src1, src2;
	decoded_op rm;
	int i;

	pCPU->steps_run++;

	//prefixes
	switch (inst.op_type) {
	case LOCK:
		pCPU->steps_run--;
		return i386_step(pCPU);
	case OP_SZ_OVERRIDE:
		pCPU->op_override = 1;
		i = i386_step(pCPU);
		pCPU->op_override = 0;
		pCPU->steps_run--;
		return i;
	case ADDR_SZ_OVERRIDE:
		pCPU->addr_override = 1;
		i = i386_step(pCPU);
		pCPU->addr_override = 0;
		pCPU->steps_run--;
		return i;
	case SEGMENT_OVERRIDE:
		pCPU->overriding_sgmt = 1;
		pCPU->sgmt_override = inst.sub_type;
		i = i386_step(pCPU);
		pCPU->sgmt_override = DS;
		pCPU->overriding_sgmt = 0;
		pCPU->steps_run--;
		return i;
		break;
	case EXTENDED:
		byte = bus_read_8(pCPU->cs.base + pCPU->eip++);
		inst = ExtendedInstructionTable[byte];

		if (inst.op_type == -1) printf("WARNING ");
		break;
	case REPEZ:
	case REPNE:
		i = inst.op_type;
		byte = bus_read_8(pCPU->cs.base + pCPU->eip++);
		inst = InstructionTable[byte];
		inst.op_type = i;
		break;
	default:
		break;
	}

	//process Mod R/M
	if (inst.flags & USE_MODRM) { //remember, this only needs to fill in the TYPE and ID fields
		modrm = bus_read_8(pCPU->cs.base + pCPU->eip++);
		reg = REG(modrm);

		if (MODE(pCPU->cs) ^ pCPU->addr_override) { //32-bit
			decode_rm_32(pCPU, &rm, modrm);
		}
		else { //16-bit
			decode_rm_16(pCPU, &rm, modrm);
		}
	}

	//quick little hack
	if (inst.op_type == ALU_SPECIAL && inst.sub_type == ALU_MULTI && (inst.flags & WEIRD)) {
		fixup_f6(&inst, REG(modrm));
	}

	if (inst.op_type == MULTIPLEXED_FF) {
		fixup_ff(&inst, REG(modrm));
	}

	//decode operands
	decode_operand(&dst, &rm, reg, &(inst.dest), pCPU);
	decode_operand(&src1, &rm, reg, &(inst.src1), pCPU);
	decode_operand(&src2, &rm, reg, &(inst.src2), pCPU);

	pCPU->old_eip = pCPU->eip;

	//execute instructions
	switch (inst.op_type) {
	case ENTER:
		return do_enter(pCPU, &src1, &src2);
		break;
	case LEAVE:
		return do_leave(pCPU);
		break;
	case ALU:
		return do_alu_op(pCPU, inst.sub_type, &dst, &src1, &src2, reg);
		break;
	case ALU_SPECIAL:
		return do_alu_special(pCPU, inst.sub_type, &dst, &src1, &src2, inst.flags);
		break;
	case SHIFT:
		return do_shift(pCPU, reg, &dst, &src1, &src2);
	case PUSH:
		return do_push(pCPU, &src1);
	case POP:
		return do_pop(pCPU, &dst);
	case POP_SR:
		return do_pop_sr(pCPU, &dst);
	case LEA:
		return do_lea(pCPU, &dst, &src1);
		break;
	case MOV:
		return do_mov(pCPU, &dst, &src1);
		break;
	case MOV_TO_SR:
		return do_mov_to_sr(pCPU, &dst, &src1);
		break;
	case CALL_NEAR:
		return do_call_near(pCPU, &src1);
		break;
	case RETN:
		return i386_ret_near(pCPU, &src1);
		break;
	case JUMP:
		return do_near_jump(pCPU, &src1, inst.sub_type);
		break;
	case CLR_FLAG:
		return do_clear_flag(pCPU, inst.sub_type);
		break;
	case ST_FLAG:
		return do_set_flag(pCPU, inst.sub_type);
		break;
	case INCDEC:
		return do_incdec(pCPU, inst.sub_type, &dst, &src1);
	case INT_OP:
		return do_int(pCPU, &src1);
	case STRING_OP:
		return do_string(pCPU, inst.sub_type, inst.flags);
	case REPEZ:
		return do_rep_string(pCPU, inst.sub_type, inst.flags, 0);
	case REPNE:
		return do_rep_string(pCPU, inst.sub_type, inst.flags, 1);
	case CBW_CWDE:
		return do_cbw_cwde(pCPU, &dst, &src1);
	case CWD_CDQ:
		return do_cwd_cdq(pCPU, &dst, &src1);
	case XCHG:
		return do_xchg(pCPU, &src1, &src2);
	case IO_IN:
		return do_inp(pCPU, &dst, &src1);
	case LOOP:
		return do_loop(pCPU, inst.sub_type, &src1);
	case PUSHF:
		return do_pushf(pCPU);
	case POPF:
		return do_popf(pCPU);
	case XLAT:
		return do_xlat(pCPU);
	case SAHF:
		return do_sahf(pCPU);
	case LAHF:
		return do_lahf(pCPU);
	case CMC:
		COND_FLAG(CARRY, !GET_FLAG(CARRY));
		break;
	case PUSHA:
		return do_pusha(pCPU);
	case POPA:
		return do_popa(pCPU);
	default:
		printf("0x%02x: Undefined op type %d:%d!\n", byte, inst.op_type, inst.sub_type);
		dump_386(pCPU);

		while (1);
		break;
	}

	return 0;
}
