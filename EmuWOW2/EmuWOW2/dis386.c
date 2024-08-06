#include "i386.h"
#include <stdio.h>

char destination[50];
char source1[50];
char source2[50];
char rm_str[50];

char* rm16_strs[] = { "BX+SI", "BX+DI", "BP+SI", "BP+DI", "SI", "DI", "BP", "BX" };
char* string_op_names[] = { "MOVS", "SCAS", "STOS", "INS", "OUTS", "LODS", "CMPS" };
char* jump_names[] = { "JO", "JNO", "JB", "JAE", "JE", "JNE", "JBE", "JA", "JS", "JNS", "JP", "JNP", "JL", "JGE", "JLE", "JG", "JMP", "JCXZ" };
//09(aluspcl)

void pdisp16(char* dest_str, int16_t num) {
	if (num >= 0) {
		sprintf(dest_str, "+0x%04x", num);
	}
	else {
		sprintf(dest_str, "-0x%04x", -num);
	}
}

void pdisp8(char* dest_str, int8_t num) {
	if (num >= 0) {
		sprintf(dest_str, "+0x%02x", num);
	}
	else {
		sprintf(dest_str, "-0x%02x", -num);
	}
}

void pdisp32(char* dest_str, int32_t num) {
	if (num >= 0) {
		sprintf(dest_str, "+0x%08x", num);
	}
	else {
		sprintf(dest_str, "-0x%08x", -num);
	}
}

int dis_sib(unsigned char* address, char mod, char reg, char rm) {
	char index[16];
	int sz = 1;
	uint8_t sib = *(address++);

	if (BASE(sib) == 5 && mod == 0) {
		sprintf(index, "0x%08x", *(uint32_t*)address);
		sz += 4;
	}
	else {
		strcat(rm_str, regs_32[BASE(sib)]);
	}

	if (INDEX(sib) != 4) {
		if (SCALE(sib) == 0) {
			sprintf(index, "+%s", regs_32[INDEX(sib)]);
		}
		else {
			sprintf(index, "+%s*%d", regs_32[INDEX(sib)], 1 << SCALE(sib));
		}
		strcat(rm_str, index);
	}

	return sz;
}

int rm32(unsigned char* address, int op_sz, unsigned char mod, unsigned char reg, unsigned char rm) {
	char disp[16];

	int sz = 0;

	rm_str[0] = 0;

	if (mod == 3) {
		return sz;
	}

	switch (rm) {
		int t;

	case 5:
		if (!mod) {
			int i;

			sprintf(rm_str, "0x%08x", *(uint32_t*)(address));
			sz += 4;

			break;
		}
	case 0:
	case 1:
	case 2:
	case 3:
	case 6:
	case 7:
		strcat(rm_str, regs_32[rm]);
		break;
	case 4: //SIB
		t = dis_sib(address, mod, reg, rm);
		address += t;
		sz += t;
		break;
	}

	if (mod == 1) {
		pdisp8(disp, *(uint8_t*)(address));
		sz += 1;
		strcat(rm_str, disp);
	}
	else if (mod == 2) {
		pdisp32(disp, *(uint32_t*)(address));
		sz += 4;
		strcat(rm_str, disp);
	}

	return sz;
}

int rm16(unsigned char* address, int op_sz, char mod, char reg, char rm) {

	int sz = 0;
	char disp[16];

	rm_str[0] = 0;

	if (mod == 3) {
		return sz;
	}

	switch (rm) {
	case 0:
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
	case 7:
		strcat(rm_str, rm16_strs[rm]);
		break;
	case 6:
		if (mod == 0) { //disp16
			sprintf(rm_str, "0x%04x", *(uint16_t*)(address));
			sz = 2;
		}
		else {
			strcat(rm_str, rm16_strs[rm]);
		}
		break;
	}

	if (mod == 1) {
		pdisp8(disp, *(uint8_t*)(address));
		sz = 1;
		strcat(rm_str, disp);
	}
	else if (mod == 2) {
		pdisp16(disp, *(uint16_t*)(address));
		sz = 2;
		strcat(rm_str, disp);
	}

	return sz;

}

void print_flag(int flag) {
	switch (flag) {
	case CARRY:
		printf("C");
		break;
	case INTERRUPT:
		printf("I");
		break;
	case DIRECTION:
		printf("D");
		break;
	}
}

void sprintf_signed_hex(char* string, int32_t disp) {
	if (disp < 0) {
		sprintf(string, "-0x%08x", -disp);
	}
	else {
		sprintf(string, "0x%08x", disp);
	}
}

int disasm_operand(char* string, uint32_t vaddr, unsigned char* address, i386_operand* op, char reg, char mod, char rm, int op_sz, int addr_sz, int segment_override, int which_segment) {
	int actual_size;
	char** reg_table;
	char* sz_str;
	uint32_t offset;
	uint32_t disp;
	int inst_size = 0;

	if (op->type == NONE) return 0;

	actual_size = op->size;

	//convert conditional sized operands to real size
	switch (op->size) {
	case SZ_1632: //word / dword
		actual_size = op_sz ? SZ_32 : SZ_16;
		break;
	case SZ_816:
		actual_size = op_sz ? SZ_16 : SZ_8;
		break;
	case SZ_3248: //far pointer (16:16 / 16:32)
		actual_size = op_sz ? SZ_48 : SZ_32;
		break;
	case SZ_3264: //DX:AX / EDX:EAX
		actual_size = op_sz ? SZ_64 : SZ_32;
	default:
		break;
	}

	switch (actual_size) {
	case SZ_8:
		reg_table = regs_8;
		sz_str = "BYTE";
		break;
	case SZ_16:
		reg_table = regs_16;
		sz_str = "WORD";
		break;
	case SZ_32:
		reg_table = regs_32;
		sz_str = "DWORD";
		break;
	default:
		break;
	}

	switch (op->type) {
	case MEM_MODRM:
	case RM_MODRM:
		if (mod == 3) {
			strcpy(string, reg_table[rm]);
		}
		else {
			if (segment_override) {
				sprintf(string, "%s PTR %s:[%s]", sz_str, seg_regs[which_segment], rm_str);
			}
			else {
				sprintf(string, "%s PTR [%s]", sz_str, rm_str);
			}
		}
		break;
	case REG_MODRM:
		strcpy(string, reg_table[reg]);
		break;
	case CREG_MODRM:
		break;
	case SEG_REG_MODRM:
		strcpy(string, seg_regs[reg]);
		break;
	case CONST_REG:
		strcpy(string, reg_table[op->value]);
		break;
	case SIMM:
		switch (actual_size) {
		case SZ_8:
			disp = SX8(*address);
			inst_size = 1;
			break;
		case SZ_16:
			disp = SX16(*(uint16_t*)address);
			inst_size = 2;
			break;
		case SZ_32:
			disp = *(uint32_t*)address;
			inst_size = 4;
			break;
		default: printf("help\n"); while (1); break;
		}

		sprintf_signed_hex(string, disp);

		return inst_size;

		break;
	case OFFSET:
		if (addr_sz) {
			offset = *(uint32_t*)address;
			if (segment_override) {
				sprintf(string, "%s:[0x%08x]", seg_regs[which_segment], offset);
			}
			else {
				sprintf(string, "[0x%08x]", offset);
			}
			return 4;
		}
		else {
			offset = *(uint16_t*)address;
			if (segment_override) {
				sprintf(string, "%s:[0x%04x]", seg_regs[which_segment], offset);
			}
			else {
				sprintf(string, "[0x%04x]", offset);
			}

			return 2;
		}
		break;
	case IMM:

		switch (actual_size) {
		case SZ_8:
			sprintf(string, "0x%02x", *address);
			return 1;
		case SZ_16:
			sprintf(string, "0x%04x", *(uint16_t*)address);
			return 2;
		case SZ_32:
			sprintf(string, "0x%08x", *(uint32_t*)address);
			return 4;
		default:
			printf("help\n");
			while (1);
			break;
		}

		break;
	case FAR_PTR:
		break;
	case CONSTANT:
		sprintf(string, "0x%02x", op->value);
		break;
	case IP_REL:
		switch (actual_size) {
		case SZ_8:
			disp = SX8(*address);
			inst_size = 1;
			break;
		case SZ_16:
			disp = SX16(*(uint16_t*)address);
			inst_size = 2;
			break;
		case SZ_32:
			disp = *(uint32_t*)address;
			inst_size = 4;
			break;
		default: printf("help\n"); while (1); break;
		}

		sprintf(string, "0x%08x", vaddr + inst_size + disp);
		return inst_size;
		break;
	default:
		break;
	}

	return 0;
}

int dis386(unsigned char* address, int vaddr, int op_sz, int addr_sz, int segment_override, int which_segment) {
	uint8_t byte = *(address++);
	i386_op inst = InstructionTable[byte];
	int size = 1;
	unsigned char modrm, reg, rm, mod;
	int alu_op;

	reg = 0;
	rm = 0;
	mod = 0;

	//prefixes
	switch (inst.op_type) {
	case LOCK:
		printf("LOCK ");
		return dis386(address, vaddr + 1, op_sz, addr_sz, segment_override, which_segment) + 1;
	case OP_SZ_OVERRIDE:
		return dis386(address, vaddr + 1, !op_sz, addr_sz, segment_override, which_segment) + 1;
	case ADDR_SZ_OVERRIDE:
		return dis386(address, vaddr + 1, op_sz, !addr_sz, segment_override, which_segment) + 1;
	case SEGMENT_OVERRIDE:
		return dis386(address, vaddr + 1, op_sz, !addr_sz, 1, inst.sub_type) + 1;
	case EXTENDED:
		byte = *(address++);
		inst = ExtendedInstructionTable[byte];
		size++;
		break;
	case REPEZ:
		printf("REPE ");
		return dis386(address, vaddr + 1, op_sz, addr_sz, segment_override, which_segment) + 1;
	case REPNE:
		printf("REPNE ");
		return dis386(address, vaddr + 1, op_sz, addr_sz, segment_override, which_segment) + 1;
	default:
		break;
	}

	if (inst.flags & USE_MODRM) {
		modrm = *(address++);
		size++;
		reg = REG(modrm);
		rm = RM(modrm);
		mod = MOD(modrm);

		if (addr_sz) {
			size += rm32(address, op_sz, mod, reg, rm);
		}
		else {
			size += rm16(address, op_sz, mod, reg, rm);
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
	size += disasm_operand(destination, vaddr + size, address, &(inst.dest), reg, mod, rm, op_sz, addr_sz, segment_override, which_segment);
	size += disasm_operand(source1, vaddr + size, address, &(inst.src1), reg, mod, rm, op_sz, addr_sz, segment_override, which_segment);
	size += disasm_operand(source2, vaddr + size, address, &(inst.src2), reg, mod, rm, op_sz, addr_sz, segment_override, which_segment);

	//disassemble instructions
	switch (inst.op_type) {
	case JUMP:
		printf("%s %s\n", jump_names[inst.sub_type], source1);
		break;
	case SHIFT:
		alu_op = reg;
		printf("%s %s, %s\n", shift_names[alu_op], source1, source2);
		break;
	case ALU:
		alu_op = (inst.sub_type == ALU_MULTI) ? reg : inst.sub_type;
		printf("%s %s, %s\n", alu_op_names[alu_op], source1, source2);
		break;
	case ALU_SPECIAL:
		alu_op = (inst.sub_type == ALU_MULTI) ? reg : inst.sub_type;
		printf("%s %s, %s\n", alux_op_names[alu_op], source1, source2);
		break;
	case XCHG:
		printf("XCHG %s, %s\n", source1, source2);
		break;
	case PUSH:
		printf("PUSH %s\n", source1);
		break;
	case POP:
	case POP_SR:
		printf("POP %s\n", destination);
		break;
	case CALL_NEAR:
		printf("CALL %s\n", source1);
		break;
	case RETN:
		printf("RETN %s\n", source1);
		break;
	case LEA:
		printf("LEA %s, %s\n", destination, source1);
		break;
	case MOV_TO_SR:
	case MOV:
		printf("MOV %s, %s\n", destination, source1);
		break;
	case INT_OP:
		printf("INT %s\n", source1);
		break;
	case STRING_OP:
		printf("%s", string_op_names[inst.sub_type]);

		if (inst.flags == STR_SZ_8) {
			printf("B");
		}
		else if (inst.flags == STR_SZ_1632) {
			if (op_sz) {
				printf("D");
			}
			else {
				printf("W");
			}
		}

		if (segment_override) {
			printf(" %s", seg_regs[which_segment]);
		}

		printf("\n");
		break;
	case CLR_FLAG:
		printf("CL");
		print_flag(inst.sub_type);
		printf("\n");
		break;
	case ST_FLAG:
		printf("ST");
		print_flag(inst.sub_type);
		printf("\n");
		break;
	case ENTER:
		printf("ENTER %s %s\n", source1, source2);
		break;
	case LEAVE:
		printf("LEAVE\n");
		break;
	case INCDEC:
		if (inst.sub_type == ID_INC) {
			printf("INC");
		}
		else {
			printf("DEC");
		}

		printf(" %s\n", destination);
		break;
	default:
		printf("unimplemented op %02x (operation %02x)\n", byte, inst.op_type);
		break;
	}

	return size;
}
