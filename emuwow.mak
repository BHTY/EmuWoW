!include <ntwin32.mak>

all: EmuWoW.exe

EmuWoW.exe: EmuWoW.obj EmuWoW.res mips_dis.obj r4000.obj pe.obj alpha.obj axp_dis.obj
  $(link) /base:0x800000 /SUBSYSTEM:CONSOLE,3.10 $(ldebug) /debugtype:coff $(conlflags) -out:$*.exe $** $(conlibs) user32.lib

{src}.c{src}.obj:
  $(CC) /O2 /Zi /FA /nologo $(CFLAGS) /Z7 /c /Fosrc\ $<

EmuWoW.res: EmuWoW.rc flag.ico
    $(rc) $(rcvars) -r -fo $*.res $*.rc
