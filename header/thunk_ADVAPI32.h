#pragma once
#include <windows.h>
#include <winternl.h>
#include "cpu.h"

LSTATUS thunk_RegCreateKeyExW(CPU* cpu);
LSTATUS thunk_RegQueryValueW(CPU* cpu);
LSTATUS thunk_RegCloseKey(CPU* cpu);
LSTATUS thunk_RegSetValueExW(CPU* cpu);
BOOL thunk_OpenProcessToken(CPU* cpu);
BOOL thunk_GetTokenInformation(CPU* cpu);
LSTATUS thunk_RegOpenKeyExW(CPU* cpu);
LSTATUS thunk_RegEnumValueW(CPU* cpu);
BOOL thunk_LookupAccountSidW(CPU* cpu);
LSTATUS thunk_RegQueryValueExW(CPU* cpu);
