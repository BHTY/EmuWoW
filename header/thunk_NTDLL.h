#pragma once
#include <windows.h>
#include <winternl.h>
#include "cpu.h"

NTSTATUS thunk_NtCreateFile(CPU* cpu);
