#include <windows.h>
#include "int.h"
#include <stdio.h>

char* reg[32] = {
	" $0",   "$at",  "$v0",  "$v1",  "$a0",  "$a1",  "$a2",  "$a3",
	"$t0",  "$t1",  "$t2",  "$t3",  "$t4",  "$t5",  "$t6",  "$t7",
	"$s0",  "$s1",  "$s2",  "$s3",  "$s4",  "$s5",  "$s6",  "$s7",
	"$t8",  "$t9",  "$k0",  "$k1",  "$gp",  "$sp",  "$fp",  "$ra"
};

char* display_addr(char* str, int16_t op){
	if(op < 0){
		sprintf(str, "-%04x", -op);
	}
	else{
		sprintf(str, "%04x", op);
	}
	
	return str;
}

//#define signed_16bit(op) ((uint16_t)op)
#define signed_16bit(op) (display_addr(string, op))

void mips_disasm(uint32_t pc, uint32_t op)
{
	char string[20];
	int rs = (op >> 21) & 31;
	int rt = (op >> 16) & 31;
	int rd = (op >> 11) & 31;
	int shift = (op >> 6) & 31;
	uint32_t flags = 0;

	switch (op >> 26)
	{
	case 0x13:
		printf("APICALL %s", *(DWORD*)(pc + 8));
		break;
		
	case 0x00:  /* SPECIAL */
		switch (op & 63)
		{
		case 0x00:  if (op == 0)
			printf("nop");
				 else
			printf("sll       %s,%s,%d", reg[rd], reg[rt], shift);
			break;
		case 0x01:  printf("mov%c      %s,%s,%d", ((op >> 16) & 1) ? 't' : 'f', reg[rd], reg[rs], (op >> 18) & 7); break;
		case 0x02:  printf("srl       %s,%s,%d", reg[rd], reg[rt], shift);            break;
		case 0x03:  printf("sra       %s,%s,%d", reg[rd], reg[rt], shift);            break;
		case 0x04:  printf("sllv      %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x06:  printf("srlv      %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x07:  printf("srav      %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x08:  printf("jr        %s", reg[rs]); break;
		case 0x09:  if (rd == 31)
			printf("jalr      %s", reg[rs]);
				 else
			printf("jalr      %s,%s", reg[rs], reg[rd]);

			break;
		case 0x0a:  printf("movz      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x0b:  printf("movn      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x0c:  printf("syscall");              break;
		case 0x0d:  printf("break");                 break;
		case 0x0f:  printf("sync");                                                break;
		case 0x10:  printf("mfhi      %s", reg[rd]);                                  break;
		case 0x11:  printf("mthi      %s", reg[rs]);                                  break;
		case 0x12:  printf("mflo      %s", reg[rd]);                                  break;
		case 0x13:  printf("mtlo      %s", reg[rs]);                                  break;
		case 0x14:  printf("dsllv     %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x16:  printf("dsrlv     %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x17:  printf("dsrav     %s,%s,%s", reg[rd], reg[rt], reg[rs]);          break;
		case 0x18:  printf("mult      %s,%s", reg[rs], reg[rt]);                      break;
		case 0x19:  printf("multu     %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1a:  printf("div       %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1b:  printf("divu      %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1c:  printf("dmult     %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1d:  printf("dmultu    %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1e:  printf("ddiv      %s,%s", reg[rs], reg[rt]);                      break;
		case 0x1f:  printf("ddivu     %s,%s", reg[rs], reg[rt]);                      break;
		case 0x20:  printf("add       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x21:  printf("addu      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x22:  printf("sub       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x23:  printf("subu      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x24:  printf("and       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x25:  printf("or        %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x26:  printf("xor       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x27:  printf("nor       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2a:  printf("slt       %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2b:  printf("sltu      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2c:  printf("dadd      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2d:  printf("daddu     %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2e:  printf("dsub      %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x2f:  printf("dsubu     %s,%s,%s", reg[rd], reg[rs], reg[rt]);          break;
		case 0x30:  printf("tge       %s,%s", reg[rs], reg[rt]);  break;
		case 0x31:  printf("tgeu      %s,%s", reg[rs], reg[rt]);  break;
		case 0x32:  printf("tlt       %s,%s", reg[rs], reg[rt]);  break;
		case 0x33:  printf("tltu      %s,%s", reg[rs], reg[rt]); break;
		case 0x34:  printf("teq       %s,%s", reg[rs], reg[rt]); break;
		case 0x36:  printf("tne       %s,%s", reg[rs], reg[rt]);  break;
		case 0x38:  printf("dsll      %s,%s,%d", reg[rd], reg[rt], shift);            break;
		case 0x3a:  printf("dsrl      %s,%s,%d", reg[rd], reg[rt], shift);            break;
		case 0x3b:  printf("dsra      %s,%s,%d", reg[rd], reg[rt], shift);            break;
		case 0x3c:  printf("dsll      %s,%s,%d", reg[rd], reg[rt], shift + 32);         break;
		case 0x3e:  printf("dsrl      %s,%s,%d", reg[rd], reg[rt], shift + 32);         break;
		case 0x3f:  printf("dsra      %s,%s,%d", reg[rd], reg[rt], shift + 32);         break;
		}
		break;

	case 0x01:  /* REGIMM */
		switch ((op >> 16) & 31)
		{
		case 0x00:  printf("bltz      %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x01:  printf("bgez      %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x02:  printf("bltzl     %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x03:  printf("bgezl     %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2));  break;
		case 0x08:  printf("tgei      %s,%s", reg[rs], signed_16bit(op)); break;
		case 0x09:  printf("tgeiu     %s,%s", reg[rs], signed_16bit(op)); break;
		case 0x0a:  printf("tlti      %s,%s", reg[rs], signed_16bit(op));  break;
		case 0x0b:  printf("tltiu     %s,%s", reg[rs], signed_16bit(op));  break;
		case 0x0c:  printf("teqi      %s,%s", reg[rs], signed_16bit(op));  break;
		case 0x0e:  printf("tnei      %s,%s", reg[rs], signed_16bit(op)); break;
		case 0x10:  printf("bltzal    %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x11:  printf("bgezal    %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x12:  printf("bltzall   %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		case 0x13:  printf("bgezall   %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2)); break;
		}
		break;

	case 0x02:  printf("j         $%08x", (pc & 0xf0000000) | ((op & 0x03ffffff) << 2));  break;
	case 0x03:  printf("jal       $%08x", (pc & 0xf0000000) | ((op & 0x03ffffff) << 2)); break;
	case 0x04:  if (rs == 0 && rt == 0)
		printf("b         $%08x", pc + 4 + ((int16_t)op << 2));
			 else
		printf("beq       %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2));
		break;
	case 0x05:  printf("bne       %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2)); break;
	case 0x06:  printf("blez      %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2));         break;
	case 0x07:  printf("bgtz      %s,$%08x", reg[rs], pc + 4 + ((int16_t)op << 2));         break;
	case 0x08:  printf("addi      %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x09:  printf("addiu     %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x0a:  printf("slti      %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x0b:  printf("sltiu     %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x0c:  printf("andi      %s,%s,$%04x", reg[rt], reg[rs], (uint16_t)op);            break;
	case 0x0d:  printf("ori       %s,%s,$%04x", reg[rt], reg[rs], (uint16_t)op);            break;
	case 0x0e:  printf("xori      %s,%s,$%04x", reg[rt], reg[rs], (uint16_t)op);            break;
	case 0x0f:  printf("lui       %s,$%04x", reg[rt], (uint16_t)op);                        break;
	case 0x14:  printf("beql      %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2)); break;
	case 0x15:  printf("bnel      %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2)); break;
	case 0x16:  printf("blezl     %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2)); break;
	case 0x17:  printf("bgtzl     %s,%s,$%08x", reg[rs], reg[rt], pc + 4 + ((int16_t)op << 2)); break;
	case 0x18:  printf("daddi     %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x19:  printf("daddiu    %s,%s,%s", reg[rt], reg[rs], signed_16bit(op));         break;
	case 0x1a:  printf("ldl       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x1b:  printf("ldr       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x20:  printf("lb        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x21:  printf("lh        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x22:  printf("lwl       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x23:  printf("lw        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x24:  printf("lbu       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x25:  printf("lhu       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x26:  printf("lwr       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x27:  printf("lwu       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x28:  printf("sb        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x29:  printf("sh        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x2a:  printf("swl       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x2b:  printf("sw        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x2c:  printf("sdl       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x2d:  printf("sdr       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x2e:  printf("swr       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x30:  printf("ll        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x33:  printf("pref      $%x,%s(%s)", rt, signed_16bit(op), reg[rs]);            break;
	case 0x34:  printf("lld       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x37:  printf("ld        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x38:  printf("sc        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x3c:  printf("scd       %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	case 0x3f:  printf("sd        %s,%s(%s)", reg[rt], signed_16bit(op), reg[rs]);        break;
	}
	printf("\n");
}