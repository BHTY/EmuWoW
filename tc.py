"""
Thunk Compiler V1

When you run the thunk compiler, it will go through every header file and syscall
offset passed to it.

thunk_MODNAME.h & thunk_MODNAME.c & MODNAME.asm for every module
thunk_table.cpp

CSV Format

name, return type, calling convention, args
"""

__asm_hdr__ = """global __DllMainCRTStartup@12
extern __DllMainCRTStartup@12
export __DllMainCRTStartup@12

section .text

__DllMainCRTStartup@12:
	ret

"""

import re
import sys

gBase = 0

syscalls = [0] * 4096

def strip_brackets(tokens):
    toks = []
    transferring = True

    for i in tokens:
        if i == "[":
            transferring = False
        if transferring:
            toks.append(i)
        if i == "]":
            transferring = True
    
    return toks

def tokenize(string):
    tokens = re.findall("[__#a-zA-Z][__#a-zA-Z0-9]*|->|\".*\"|==|@|!=|>=|<=|&&|\\|\\||_?\\d+|[+\-*/=!<>()[\\]{},.;:$&\\|]|'.*'|\".*\"", string)
    return tokens

__MODULE__ = ""
__MODULE_LIST__ = []

tokens_to_ignore = ["DECLSPEC_ALLOCATOR", "NTSYSAPI", "__kernel_entry", "_Reserved_", "APIENTRY", "WINBASEAPI", "WINUSERAPI", "WINGDIAPI", "NTAPI", "NTSYSCALLAPI", "IN", "OUT", "WINAPI", "_Inout_", "_Out_", "_In_", "("]
optional_tokens = ["_Out_opt_", "_In_opt_", "_Inout_opt_", "OPTIONAL"]

def generate_asm(name, args, cc):
    out_string = "global {}\nextern {}\nexport {}\n".format(name, name, name)
    out_string += "\n{}:\n\tmov eax, THUNK_{}_{}\n\tint SYSCALL_THUNK\n\tret {}".format(name, __MODULE__, name.upper(), hex(len(args) * 4 * int(cc)))
    return out_string

def generate_mips_asm(name, args, cc):
    global gBase
    
    out_string = """.ent {}
{}:
    li $3, {}
    syscall
    j $31
    nop
    .end
""".format(name, name, gBase)
    return out_string, ".globl {}\n.extern {} 4\n".format(name, name)

class Argument:
    def __init__(self, tokens, optional):
        self.name = tokens[-1]
        self.value_type = " ".join(tokens[:-1])
        self.is_pointer = ((tokens[0][0:2] == "LP") and tokens[0] != "LPARAM") or "*" in tokens
        self.optional = optional


def generate_fn_call(name, args):
    out_string = "{}(".format(name)

    for i in args:
        if i.is_pointer:
            arg_name = "_" + i.name
        else:
            arg_name = i.name
        out_string += "({}){}, ".format(i.value_type, arg_name)

    return out_string[:-2] + ");"


def generate_print_string(name, args):
    out_string = '"\\nCalling {}!{}('.format(__MODULE__, name)

    for i in args:
        out_string += "%p, "

    out_string = out_string[:-2] + ')", '

    for i in args:
        out_string += i.name + ", "

    return out_string[:-2]


def make_csv_line(fn_name, ret_type, cc, args):
    arg_string = ""

    for i in args:
        arg_string += "{} {}".format(i.value_type, i.name)
        if i != args[-1]: arg_string += ", "
    
    return '"{}","{}","{}","{}"'.format(fn_name, ret_type, int(cc), arg_string)


def break_csv_line(line_text):
    accepting_text = False
    chars = ""
    out = []
    
    for i in line_text:
        if i == '"':
            if accepting_text:
                accepting_text = False
                out.append(chars)
                chars = ""
            else:
                accepting_text = True
            continue

        if accepting_text:
            chars += i
    
    return out


def make_decl_tokens(broken_csv):
    toks = []

    toks.append(broken_csv[1])

    if broken_csv[2] == '0': toks.append("__cdecl")

    toks.append(broken_csv[0])

    toks.append("(")

    toks += tokenize(broken_csv[3])

    toks.append(")")

    toks.append(";")

    return toks


def parse(toks):
    calling_convention = True
    
    return_value = None
    function_name = None
    current_optional = False
    args = []
    current_arg = []
    current_param = 0

    if "__cdecl" in toks:
        toks.remove("__cdecl")
        calling_convention = False
    if "WINAPIV" in toks:
        toks.remove("WINAPIV")
        calling_convention = False
    
    for i in toks:
        if i in tokens_to_ignore:
            continue

        if i in optional_tokens:
            current_optional = True
            continue
        
        if return_value == None: #looking for return value
            if i.lower() == "void": return_value = "VOID"
            else: return_value = i
            continue

        elif function_name == None:
            if i == "*":
                return_value += "*"
            else:
                function_name = i
                continue

        elif i == ",":
            if len(current_arg) == 1 or current_arg[-1] == "*":
                current_arg.append("unnamedParam{}".format(current_param))
                current_param += 1
            
            args.append(Argument(current_arg, current_optional))
            current_arg = []
            current_optional = False

        elif i == ")": #we're done here
            if len(current_arg) > 0 and current_arg[-1].lower() != "void":
                if (len(current_arg) == 1) or current_arg[-1] == "*":
                    current_arg.append("unnamedParam{}".format(current_param))
                    current_param += 1
                args.append(Argument(current_arg, current_optional))
            break

        else:
            current_arg.append(i)

    function_text = "{} thunk_{}(CPU* cpu){{\n".format(return_value, function_name)
    p = 0

    for i in args:
        if i.value_type in ["COORD", "POINT"]:
            function_text += "\tDWORD_PTR {} = cpu->fn_arg(cpu, {});\n".format(i.name, p)
        else:
            function_text += "\t{} {} = cpu->fn_arg(cpu, {});\n".format(i.value_type, i.name, p)
        p += 1

    function_text += "\tprintf({});\n".format(generate_print_string(function_name, args))

    function_text += "\treturn {}(".format(function_name)

    for i in args:
        if i.value_type not in ["COORD", "POINT"]: function_text += i.name
        else: function_text += "*({}*)&{}".format(i.value_type, i.name)
        if i != args[-1]: function_text += ", "

    function_text += ");\n}"

    return [function_text, generate_asm(function_name, args, calling_convention), function_name, make_csv_line(function_name, return_value, calling_convention, args), generate_mips_asm(function_name, args, calling_convention)]

def save_file(filename, data):
    file = open(filename, "w")
    file.write(data)
    file.close()

ansi_map = {"LPCTSTR": "LPCSTR", "LPTSTR": "LPSTR", "PTSTR": "PSTR", "PCTSTR": "PCSTR", "TCHAR": "CHAR"}
unicode_map = {"LPCTSTR": "LPCWSTR", "LPTSTR": "LPWSTR", "PTSTR": "PWSTR", "PCTSTR": "PCWSTR", "TCHAR": "WCHAR"}

def ansi_version(tokens):
    toks = tokens.copy()

    name_index = toks.index("(") - 1
    toks[name_index] = toks[name_index] + "A"

    for i in range(len(toks)):
        if toks[i] in ansi_map: toks[i] = ansi_map[toks[i]]

    return toks

def unicode_version(tokens):
    toks = tokens.copy()

    name_index = toks.index("(") - 1
    toks[name_index] = toks[name_index] + "W"

    for i in range(len(toks)):
        if toks[i] in unicode_map: toks[i] = unicode_map[toks[i]]

    return toks

def parse_file(filename, base):
    global gBase
    global syscalls
    global __MODULE__
    global __MODULE_LIST__
    __MODULE__ = filename.split(".")[0].upper()
    __MODULE_LIST__.append(__MODULE__)
    file = open(filename, "r")
    contents = tokenize(file.read())
    file.close()
    current_line = []

    current_def = "LIBRARY {}\nEXPORTS\n".format(__MODULE__)
    current_c = '#include <windows.h>\n#include <winternl.h>\n#include "thunk_{}.h"\n\n'.format(__MODULE__)
    current_h = '#pragma once\n#include <windows.h>\n#include <winternl.h>\n#include "cpu.h"\n\n'
    current_asm_body = ""
    current_asm_end = ""
    current_asm_mips_header = """.verstamp 3 10

.text
.align 2

.globl	_DLLMainCRTStartup
.extern _DLLMainCRTStartup 4
"""
    current_asm_mips_body = """.ent _DLLMainCRTStartup
_DLLMainCRTStartup:
    j $31
    nop
    .end
"""
    current_csv = ""

    v = 1

    for i in contents:
        current_line.append(i)

        if i == ";":
            #print(strip_brackets(current_line), end="\n\n")

            if "PCTSTR" in current_line or "PTSTR" in current_line or "LPTSTR" in current_line or "LPCTSTR" in current_line or "TCHAR" in current_line:
                gBase = base
                
                ansi_toks = ansi_version(current_line)
                wide_toks = unicode_version(current_line)

                output = parse(strip_brackets(ansi_toks))
                
                current_c += output[0] + "\n"
                current_h += output[0].split("\n")[0][:-1] + ";\n"
                current_asm_body += output[1] + "\n\n"
                current_asm_end += "THUNK_{}_{} equ {}\n".format(__MODULE__, output[2].upper(), hex(base))
                #print(parse(make_decl_tokens(break_csv_line(output[3]))), end="\n\n")
                current_csv += output[3] + "\n"
                syscalls[base] = "thunk_{}".format(output[2])

                current_def += "\t{} @{}\n".format(output[2], v)
                v += 1

                current_asm_mips_body += output[4][0]
                current_asm_mips_header += output[4][1]
                
                base += 1

                gBase = base

                output = parse(strip_brackets(wide_toks))
                
                current_c += output[0] + "\n"
                current_h += output[0].split("\n")[0][:-1] + ";\n"
                current_asm_body += output[1] + "\n\n"
                current_asm_end += "THUNK_{}_{} equ {}\n".format(__MODULE__, output[2].upper(), hex(base))
                #print(parse(make_decl_tokens(break_csv_line(output[3]))), end="\n\n")
                current_csv += output[3] + "\n"
                syscalls[base] = "thunk_{}".format(output[2])

                current_def += "\t{} @{}\n".format(output[2], v)
                v += 1

                current_asm_mips_body += output[4][0]
                current_asm_mips_header += output[4][1]
                
                base += 1

            else:
                gBase = base
                
                output = parse(strip_brackets(current_line))

                #print(current_line)

                current_c += output[0] + "\n"
                current_h += output[0].split("\n")[0][:-1] + ";\n"
                current_asm_body += output[1] + "\n\n"
                current_asm_end += "THUNK_{}_{} equ {}\n".format(__MODULE__, output[2].upper(), hex(base))
                #print(parse(make_decl_tokens(break_csv_line(output[3]))), end="\n\n")
                current_csv += output[3] + "\n"
                syscalls[base] = "thunk_{}".format(output[2])

                current_def += "\t{} @{}\n".format(output[2], v)
                v += 1

                current_asm_mips_body += output[4][0]
                current_asm_mips_header += output[4][1]
                
                base += 1

            current_line = []

    save_file("thunk_{}.cpp".format(__MODULE__), current_c)
    save_file("thunk_{}.h".format(__MODULE__), current_h)
    save_file("{}.asm".format(__MODULE__), __asm_hdr__ + current_asm_body + current_asm_end + "\n" + "SYSCALL_THUNK equ 0x80")
    save_file("{}_mips.asm".format(__MODULE__), current_asm_mips_header + current_asm_mips_body)
    save_file("{}.csv".format(__MODULE__), current_csv)
    save_file("{}.def".format(__MODULE__), current_def)

def parse_csv_file(filename, base):
    global syscalls
    global __MODULE__
    global __MODULE_LIST__
    __MODULE__ = filename.split(".")[0].upper()
    __MODULE_LIST__.append(__MODULE__)
    file = open(filename, "r")
    contents = file.read().split("\n")
    file.close()

    current_c = '#include <windows.h>\n#include <winternl.h>\n#include "thunk_{}.h"\n\n'.format(__MODULE__)
    current_h = '#pragma once\n#include <windows.h>\n#include <winternl.h>\n#include "cpu.h"\n\n'
    current_asm_body = ""
    current_asm_end = ""

    for i in contents:
        if i == "": continue
        output = parse(make_decl_tokens(break_csv_line(i)))

        current_c += output[0] + "\n"
        current_h += output[0].split("\n")[0][:-1] + ";\n"
        current_asm_body += output[1] + "\n\n"
        current_asm_end += "THUNK_{}_{} equ {}\n".format(__MODULE__, output[2].upper(), hex(base))
        syscalls[base] = "thunk_{}".format(output[2])
        base += 1

    save_file("thunk_{}.cpp".format(__MODULE__), current_c)
    save_file("thunk_{}.h".format(__MODULE__), current_h)
    save_file("{}.asm".format(__MODULE__), __asm_hdr__ + current_asm_body + current_asm_end + "\n" + "SYSCALL_THUNK equ 0x80")
    

def write_thunk_table():
    text = '#include "cpu.h"\n#include <windows.h>\n'
    
    for i in __MODULE_LIST__:
        text += '#include "thunk_{}.h"\n'.format(i)

    text += '\nDWORD_PTR(*thunk_table[4096])(CPU*) = {\n'

    for i in range(len(syscalls)):
        text += "\t" + str(syscalls[i])
        if i != len(syscalls)-1: text += ", //{}".format(hex(i))
        text += "\n"

    text += '};'

    save_file("thunk_table.cpp", text)

sys.argv = [0, "ntdll.h", "0", "gdi32.h", "1024", "user32.h", "2048", "kernel32.h", "3072", "advapi32.h", "4000"]

if __name__ == "__main__":
    i = 1

    while i < len(sys.argv):        
        filename = sys.argv[i]
        base = int(sys.argv[i+1])

        if filename.lower().split(".")[1] == "csv":        
            parse_csv_file(filename, base)
        else:
            parse_file(filename, base)
        
        i += 2

    write_thunk_table()
