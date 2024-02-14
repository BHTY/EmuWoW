!include <ntwin32.mak>

all: EmuWoW.exe

EmuWoW.exe: EmuWoW.obj EmuWoW.res mips_dis.obj r4000.obj pe.obj
  $(link) /base:0x800000 /SUBSYSTEM:CONSOLE,3.10 $(ldebug) $(conlflags) -out:$*.exe $** $(conlibs)

{src}.c{src}.obj:
  $(CC) /O2 /Zi /FA /nologo $(CFLAGS) /c /Fosrc\ $<

EmuWoW.res: EmuWoW.rc flag.ico
    $(rc) $(rcvars) -r -fo $*.res $*.rc