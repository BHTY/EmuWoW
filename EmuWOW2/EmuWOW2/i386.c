#include "i386.h"

/* Add Stack Backtraces */

uint8_t* TranslateEmulatedToVirtualAddress(uint32_t addr) {

	return addr;
}

uint32_t io_read_32(uint16_t port) {
}

uint32_t io_read_16(uint16_t port) {
}

uint32_t io_read_8(uint16_t port) {
}

uint32_t bus_read_8(uint32_t addr) {
	//printf("Reading from address %05x\n", addr);
	return (uint32_t) * (TranslateEmulatedToVirtualAddress(addr));
}

uint32_t bus_read_16(uint32_t addr) {
	return (uint32_t) * (uint16_t*)(TranslateEmulatedToVirtualAddress(addr));
}

uint32_t bus_read_32(uint32_t addr) {

	return *(uint32_t*)(TranslateEmulatedToVirtualAddress(addr));
}

void bus_write_8(uint32_t addr, uint8_t value) {
	//printf("Writing %02x to %05x\n", value, addr);
	*(TranslateEmulatedToVirtualAddress(addr)) = value;
}

void bus_write_16(uint32_t addr, uint16_t value) {
	*(uint16_t*)(TranslateEmulatedToVirtualAddress(addr)) = value;
}

void bus_write_32(uint32_t addr, uint32_t value) {
	*(uint32_t*)(TranslateEmulatedToVirtualAddress(addr)) = value;
}

VOID WriteThunkX86(PBYTE pThunk, DWORD Index, DWORD dwArgs) {
	*pThunk = 0xB8; //MOV EAX, ...
	*(PDWORD)(pThunk + 1) = Index; //... Index
	*(pThunk + 5) = 0xCD; //INT ...
	*(pThunk + 6) = 0x2E; //... 0x2E
	*(pThunk + 7) = 0xC2; //RET ...
	*(PWORD)(pThunk + 8) = dwArgs * 4;
}

FARPROC MakeThunk386(DWORD Index, DWORD dwArgs) {
	PBYTE pThunk = malloc(16);
	WriteThunkX86(pThunk, Index, dwArgs);
	return pThunk;
}

PThreadContextI386 Init386(DWORD_PTR sp) {
	PThreadContextI386 pContext = malloc(sizeof(PThreadContextI386));
	i386* pCPU = &(pContext->cpu);

	ZeroMemory(pContext, sizeof(PThreadContextI386));

	pCPU->sgmt_override = DS;
	pCPU->running = 1;

	//mark everything as writable valid data USE32 nonsystem segments with limit 4GB
	pCPU->es.access = 0x80 | 0x10 | 0x2;
	pCPU->fs.access = 0x80 | 0x10 | 0x2;
	pCPU->gs.access = 0x80 | 0x10 | 0x2;
	pCPU->ds.access = 0x80 | 0x10 | 0x2;
	pCPU->ss.access = 0x80 | 0x10 | 0x2;
	pCPU->cs.access = 0x80 | 0x10 | 0x8 | 0x2;

	pCPU->es.base = 0;
	pCPU->fs.base = &(pContext->ctx.teb);
	pCPU->gs.base = 0;
	pCPU->ds.base = 0;
	pCPU->ss.base = 0;
	pCPU->cs.base = 0;

	pCPU->cs.flags = 0x4;
	pCPU->ss.flags = 0x4;

	pCPU->esp = sp - 256;

	return pContext;
}

INT I386_step(PThreadContextI386 pContext) {
	i386* pCPU = &(pContext->cpu);
	INT res;

	if (1) {
		DWORD old_eip = pCPU->eip;
		int inst_size;
		int i;

		printf("%p: ", pCPU->eip);
		inst_size = dis386(pCPU->eip, pCPU->eip, 1, 1, 0, 0);

		for (i = 0; i < inst_size; i++) {
			//printf("%02x ", *(BYTE*)(pCPU->eip + i));
		}

		//printf("\n");
	}

	return i386_step(pCPU);
}

DWORD_PTR i386_ExecuteEmulatedProcedure(PThreadContextI386 pContext, FARPROC dwTargetAddress, DWORD_PTR* pDwParamList, DWORD nParams) {
	i386* pCPU = &(pContext->cpu);
	DWORD OldEIP = pCPU->eip;
	int i;

	for (i = nParams - 1; i >= 0; i--) {
		i386_push(pCPU, pDwParamList[i]);
	}

	i386_push(pCPU, 0xFFFFFF00);
	pCPU->eip = dwTargetAddress;

	while (pCPU->eip != 0xFFFFFF00) {
		I386_step(pContext);
		/*if (getchar() == 'd') {
			dump_386(pCPU);
		}*/
	}

	pCPU->eip = OldEIP;

	return pCPU->eax;
}

VOID i386_ExtractParams(PThreadContextI386 pContext, DWORD_PTR* pDwParamList, DWORD nParams) {
	DWORD* StackArgList = pContext->cpu.esp + 4;
	INT i;

	for (i = 0; i < nParams; i++) {
		pDwParamList[i] = StackArgList[i];
	}
}

CPUVTable i386_vtable = {Init386, i386_ExtractParams, i386_ExecuteEmulatedProcedure, MakeThunk386};