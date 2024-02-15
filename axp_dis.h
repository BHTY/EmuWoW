#pragma once

#define OPERATE_RRR(opcode, ra, rb, rc)  printf("%-10s %s, %s, %s",   opcode, R[ra], R[rb], R[rc])
#define OPERATE_FFF(opcode, ra, rb, rc)  printf("%-10s %s, %s, %s",   opcode, F[ra], F[rb], F[rc])
#define OPERATE_RIR(opcode, ra, im, rc)  printf("%-10s %s, #%d, %s",  opcode, R[ra], im, R[rc])
#define OPERATE_RR(opcode, rb, rc)       printf("%-10s %s, %s",       opcode, R[rb], R[rc])
#define OPERATE_FF(opcode, rb, rc)       printf("%-10s %s, %s",       opcode, F[rb], F[rc])
#define OPERATE_RF(opcode, ra, rc)       printf("%-10s %s, %s",       opcode, R[ra], F[rc])
#define OPERATE_FR(opcode, ra, rc)       printf("%-10s %s, %s",       opcode, F[ra], R[rc])
#define OPERATE_IR(opcode, im, rc)       printf("%-10s #%d, %s",      opcode, im, R[rc])
#define OPERATE_R(opcode, rc)            printf("%-10s %s",           opcode, R[rc])
#define OPERATE_F(opcode, rc)            printf("%-10s %s",           opcode, F[rc])

// TODO: verify syntax for multiple register formats
#define OPERATE_RI(opcode, rb, rc)       printf("%-10s %s, %s",       opcode, R[rb], IBX[rc])
#define OPERATE_RA(opcode, rb, rc)       printf("%-10s %s, %s",       opcode, R[rb], ABX[rc])
#define OPERATE_RAI(opcode, rb, rc)      printf("%-10s %s, %s:%s",    opcode, R[rb], ABX[rc], IBX[rc])
#define OPERATE_RP(opcode, rb, rc)       printf("%-10s %s, %s",       opcode, R[rb], PT[rc])
#define OPERATE_RPI(opcode, rb, rc)      printf("%-10s %s, %s:%s",    opcode, R[rb], PT[rc], IBX[rc])
#define OPERATE_RPA(opcode, rb, rc)      printf("%-10s %s, %s:%s",    opcode, R[rb], PT[rc], ABX[rc])
#define OPERATE_RPAI(opcode, rb, rc)     printf("%-10s %s, %s:%s:%s", opcode, R[rb], PT[rc], ABX[rc], IBX[rc])

#define MEMORY_R(opcode, ra, disp, rb)   printf("%-10s %s, %d(%s)",   opcode, R[ra], disp, R[rb])
#define MEMORY_F(opcode, ra, disp, rb)   printf("%-10s %s, %d(%s)",   opcode, F[ra], disp, R[rb])
#define BRANCH_R(opcode, ra, offset)     printf("%-10s %s, 0x%x",     opcode, R[ra], pc + 4 + offset)
#define BRANCH_F(opcode, ra, offset)     printf("%-10s %s, 0x%x",     opcode, F[ra], pc + 4 + offset)
#define BRANCH(opcode, offset)           printf("%-10s 0x%x",         opcode, pc + 4 + offset)

#define JUMP(opcode, ra, rb)             printf("%-10s %s, (%s)",     opcode, R[ra], R[rb])

#define MISC(opcode)                     printf("%-10s",              opcode)
#define MISC_R(opcode, ra)               printf("%-10s %s",           opcode, R[ra])
#define MISC_M(opcode, rb)               printf("%-10s (%s)",         opcode, R[rb])

#define CALL_PAL(fnc)                    printf("%-10s %s",           "call_pal", fnc)

#define RESERVED(opcode)                 printf("%-10s",              opcode)
#define UNKNOWN(type)                    printf("unknown %s",         type)

