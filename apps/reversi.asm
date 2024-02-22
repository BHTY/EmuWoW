Microsoft (R) COFF Binary File Dumper Version 6.00.8168
Copyright (C) Microsoft Corp 1992-1998. All rights reserved.


Dump of file reversi.exe

File Type: EXECUTABLE IMAGE

UpdateCursor:
  00401000: 27BDFFE0 addiu       sp,sp,0xFFE0
  00401004: AFBF0014 sw          ra,0x14(sp)
  00401008: AFA40020 sw          a0,0x20(sp)
  0040100C: 3C0E0041 lui         t6,0x41
  00401010: 8DCEEF18 lw          t6,0xEF18(t6)
  00401014: AFAE0018 sw          t6,0x18(sp)
  00401018: 3C0F0041 lui         t7,0x41
  0040101C: 8DEFEF1C lw          t7,0xEF1C(t7)
  00401020: AFAF001C sw          t7,0x1C(sp)
  00401024: 8FA40020 lw          a0,0x20(sp)
  00401028: 27A50018 addiu       a1,sp,0x18
  0040102C: 3C180041 lui         t8,0x41
  00401030: 8F1812C8 lw          t8,0x12C8(t8)
  00401034: 0300F809 jalr        ra,t8
  00401038: 00000000 nop
  0040103C: 8FA40018 lw          a0,0x18(sp)
  00401040: 8FA5001C lw          a1,0x1C(sp)
  00401044: 3C190041 lui         t9,0x41
  00401048: 8F391320 lw          t9,0x1320(t9)
  0040104C: 0320F809 jalr        ra,t9
  00401050: 00000000 nop
  00401054: 10000001 b           0040105C
  00401058: 00000000 nop
  0040105C: 8FBF0014 lw          ra,0x14(sp)
  00401060: 27BD0020 addiu       sp,sp,0x20
  00401064: 03E00008 jr          ra
  00401068: 00000000 nop
checkdepth:
  0040106C: 27BDFFE0 addiu       sp,sp,0xFFE0
  00401070: AFBF0014 sw          ra,0x14(sp)
  00401074: AFA40020 sw          a0,0x20(sp)
  00401078: AFA50024 sw          a1,0x24(sp)
  0040107C: 8FA40020 lw          a0,0x20(sp)
  00401080: 3C0E0041 lui         t6,0x41
  00401084: 8DCE12F8 lw          t6,0x12F8(t6)
  00401088: 01C0F809 jalr        ra,t6
  0040108C: 00000000 nop
  00401090: AFA2001C sw          v0,0x1C(sp)
  00401094: 8FA4001C lw          a0,0x1C(sp)
  00401098: 3C050041 lui         a1,0x41
  0040109C: 94A5F4AC lhu         a1,0xF4AC(a1)
  004010A0: 00003025 or          a2,zero,zero
  004010A4: 3C0F0041 lui         t7,0x41
  004010A8: 8DEF131C lw          t7,0x131C(t7)
  004010AC: 01E0F809 jalr        ra,t7
  004010B0: 00000000 nop
  004010B4: 8FA4001C lw          a0,0x1C(sp)
  004010B8: 97A50024 lhu         a1,0x24(sp)
  004010BC: 24060008 addiu       a2,zero,8
  004010C0: 3C180041 lui         t8,0x41
  004010C4: 8F18131C lw          t8,0x131C(t8)
  004010C8: 0300F809 jalr        ra,t8
  004010CC: 00000000 nop
  004010D0: 97B90024 lhu         t9,0x24(sp)
  004010D4: 3C010041 lui         at,0x41
  004010D8: A439F4AC sh          t9,0xF4AC(at)
  004010DC: 10000001 b           004010E4
  004010E0: 00000000 nop
  004010E4: 8FBF0014 lw          ra,0x14(sp)
  004010E8: 27BD0020 addiu       sp,sp,0x20
  004010EC: 03E00008 jr          ra
  004010F0: 00000000 nop
clearboard:
  004010F4: 27BDFFF0 addiu       sp,sp,0xFFF0
  004010F8: AFA40010 sw          a0,0x10(sp)
  004010FC: AFA0000C sw          zero,0xC(sp)
  00401100: AFA00008 sw          zero,8(sp)
  00401104: 8FAE0010 lw          t6,0x10(sp)
  00401108: 8FAF000C lw          t7,0xC(sp)
  0040110C: 000FC080 sll         t8,t7,2
  00401110: 030FC023 subu        t8,t8,t7
  00401114: 0018C0C0 sll         t8,t8,3
  00401118: 030FC021 addu        t8,t8,t7
  0040111C: 0018C080 sll         t8,t8,2
  00401120: 01D8C821 addu        t9,t6,t8
  00401124: 8FA80008 lw          t0,8(sp)
  00401128: 03284821 addu        t1,t9,t0
  0040112C: A1200000 sb          zero,0(t1)
  00401130: 8FAA0008 lw          t2,8(sp)
  00401134: 254B0001 addiu       t3,t2,1
  00401138: AFAB0008 sw          t3,8(sp)
  0040113C: 29610064 slti        at,t3,0x64
  00401140: 1420FFF0 bne         zero,at,00401104
  00401144: 00000000 nop
  00401148: 8FAC000C lw          t4,0xC(sp)
  0040114C: 258D0001 addiu       t5,t4,1
  00401150: AFAD000C sw          t5,0xC(sp)
  00401154: 29A10007 slti        at,t5,7
  00401158: 1420FFE9 bne         zero,at,00401100
  0040115C: 00000000 nop
  00401160: AFA0000C sw          zero,0xC(sp)
  00401164: 240F000B addiu       t7,zero,0xB
  00401168: AFAF0008 sw          t7,8(sp)
  0040116C: 8FAE0008 lw          t6,8(sp)
  00401170: AFAE0004 sw          t6,4(sp)
  00401174: 25D80008 addiu       t8,t6,8
  00401178: 01D8082A slt         at,t6,t8
  0040117C: 10200015 beq         zero,at,004011D4
  00401180: 00000000 nop
  00401184: 24190001 addiu       t9,zero,1
  00401188: 8FA80010 lw          t0,0x10(sp)
  0040118C: 8FA9000C lw          t1,0xC(sp)
  00401190: 00095080 sll         t2,t1,2
  00401194: 01495023 subu        t2,t2,t1
  00401198: 000A50C0 sll         t2,t2,3
  0040119C: 01495021 addu        t2,t2,t1
  004011A0: 000A5080 sll         t2,t2,2
  004011A4: 010A5821 addu        t3,t0,t2
  004011A8: 8FAC0004 lw          t4,4(sp)
  004011AC: 016C6821 addu        t5,t3,t4
  004011B0: A1B90000 sb          t9,0(t5)
  004011B4: 8FAF0004 lw          t7,4(sp)
  004011B8: 25EE0001 addiu       t6,t7,1
  004011BC: AFAE0004 sw          t6,4(sp)
  004011C0: 8FB80008 lw          t8,8(sp)
  004011C4: 27090008 addiu       t1,t8,8
  004011C8: 01C9082A slt         at,t6,t1
  004011CC: 1420FFED bne         zero,at,00401184
  004011D0: 00000000 nop
  004011D4: 8FA80008 lw          t0,8(sp)
  004011D8: 250A000A addiu       t2,t0,0xA
  004011DC: AFAA0008 sw          t2,8(sp)
  004011E0: 29410052 slti        at,t2,0x52
  004011E4: 1420FFE1 bne         zero,at,0040116C
  004011E8: 00000000 nop
  004011EC: 240B0003 addiu       t3,zero,3
  004011F0: 8FAC0010 lw          t4,0x10(sp)
  004011F4: 8FB9000C lw          t9,0xC(sp)
  004011F8: 00196880 sll         t5,t9,2
  004011FC: 01B96823 subu        t5,t5,t9
  00401200: 000D68C0 sll         t5,t5,3
  00401204: 01B96821 addu        t5,t5,t9
  00401208: 000D6880 sll         t5,t5,2
  0040120C: 018D7821 addu        t7,t4,t5
  00401210: A1EB002D sb          t3,0x2D(t7)
  00401214: 24180003 addiu       t8,zero,3
  00401218: 8FAE0010 lw          t6,0x10(sp)
  0040121C: 8FA9000C lw          t1,0xC(sp)
  00401220: 00094080 sll         t0,t1,2
  00401224: 01094023 subu        t0,t0,t1
  00401228: 000840C0 sll         t0,t0,3
  0040122C: 01094021 addu        t0,t0,t1
  00401230: 00084080 sll         t0,t0,2
  00401234: 01C85021 addu        t2,t6,t0
  00401238: A1580036 sb          t8,0x36(t2)
  0040123C: 24190002 addiu       t9,zero,2
  00401240: 8FAC0010 lw          t4,0x10(sp)
  00401244: 8FAD000C lw          t5,0xC(sp)
  00401248: 000D5880 sll         t3,t5,2
  0040124C: 016D5823 subu        t3,t3,t5
  00401250: 000B58C0 sll         t3,t3,3
  00401254: 016D5821 addu        t3,t3,t5
  00401258: 000B5880 sll         t3,t3,2
  0040125C: 018B7821 addu        t7,t4,t3
  00401260: A1F9002C sb          t9,0x2C(t7)
  00401264: 24090002 addiu       t1,zero,2
  00401268: 8FAE0010 lw          t6,0x10(sp)
  0040126C: 8FA8000C lw          t0,0xC(sp)
  00401270: 0008C080 sll         t8,t0,2
  00401274: 0308C023 subu        t8,t8,t0
  00401278: 0018C0C0 sll         t8,t8,3
  0040127C: 0308C021 addu        t8,t8,t0
  00401280: 0018C080 sll         t8,t8,2
  00401284: 01D85021 addu        t2,t6,t8
  00401288: A1490037 sb          t1,0x37(t2)
  0040128C: 8FAD000C lw          t5,0xC(sp)
  00401290: 25AC0001 addiu       t4,t5,1
  00401294: AFAC000C sw          t4,0xC(sp)
  00401298: 29810007 slti        at,t4,7
  0040129C: 1420FFB1 bne         zero,at,00401164
  004012A0: 00000000 nop
  004012A4: 10000001 b           004012AC
  004012A8: 00000000 nop
  004012AC: 27BD0010 addiu       sp,sp,0x10
  004012B0: 03E00008 jr          ra
  004012B4: 00000000 nop
RevCreate:
  004012B8: 27BDFFA8 addiu       sp,sp,0xFFA8
  004012BC: AFBF0014 sw          ra,0x14(sp)
  004012C0: AFA40058 sw          a0,0x58(sp)
  004012C4: 3C010041 lui         at,0x41
  004012C8: AC20F05C sw          zero,0xF05C(at)
  004012CC: 8FA40058 lw          a0,0x58(sp)
  004012D0: 3C0E0041 lui         t6,0x41
  004012D4: 8DCE12B8 lw          t6,0x12B8(t6)
  004012D8: 01C0F809 jalr        ra,t6
  004012DC: 00000000 nop
  004012E0: AFA20054 sw          v0,0x54(sp)
  004012E4: 8FA40054 lw          a0,0x54(sp)
  004012E8: 27A5001C addiu       a1,sp,0x1C
  004012EC: 3C0F0041 lui         t7,0x41
  004012F0: 8DEF11FC lw          t7,0x11FC(t7)
  004012F4: 01E0F809 jalr        ra,t7
  004012F8: 00000000 nop
  004012FC: 8FB8001C lw          t8,0x1C(sp)
  00401300: 3C010041 lui         at,0x41
  00401304: AC38EF78 sw          t8,0xEF78(at)
  00401308: 8FB90030 lw          t9,0x30(sp)
  0040130C: 3C010041 lui         at,0x41
  00401310: AC39EF14 sw          t9,0xEF14(at)
  00401314: 8FA40058 lw          a0,0x58(sp)
  00401318: 8FA50054 lw          a1,0x54(sp)
  0040131C: 3C080041 lui         t0,0x41
  00401320: 8D0812EC lw          t0,0x12EC(t0)
  00401324: 0100F809 jalr        ra,t0
  00401328: 00000000 nop
  0040132C: 3C090041 lui         t1,0x41
  00401330: 8D29F058 lw          t1,0xF058(t1)
  00401334: 24010001 addiu       at,zero,1
  00401338: 1521000B bne         at,t1,00401368
  0040133C: 00000000 nop
  00401340: 3C0A0041 lui         t2,0x41
  00401344: 8D4AEF74 lw          t2,0xEF74(t2)
  00401348: 3C010041 lui         at,0x41
  0040134C: AC2AF4A4 sw          t2,0xF4A4(at)
  00401350: 3C0B0041 lui         t3,0x41
  00401354: 8D6BF060 lw          t3,0xF060(t3)
  00401358: 3C010041 lui         at,0x41
  0040135C: AC2BF400 sw          t3,0xF400(at)
  00401360: 10000009 b           00401388
  00401364: 00000000 nop
  00401368: 3C0C0041 lui         t4,0x41
  0040136C: 8D8CF050 lw          t4,0xF050(t4)
  00401370: 3C010041 lui         at,0x41
  00401374: AC2CF4A4 sw          t4,0xF4A4(at)
  00401378: 3C0D0041 lui         t5,0x41
  0040137C: 8DADF070 lw          t5,0xF070(t5)
  00401380: 3C010041 lui         at,0x41
  00401384: AC2DF400 sw          t5,0xF400(at)
  00401388: 3C0E0041 lui         t6,0x41
  0040138C: 8DCEF454 lw          t6,0xF454(t6)
  00401390: 000E7880 sll         t7,t6,2
  00401394: 01EE7823 subu        t7,t7,t6
  00401398: 000F7880 sll         t7,t7,2
  0040139C: 01EE7823 subu        t7,t7,t6
  004013A0: 000F7880 sll         t7,t7,2
  004013A4: 01EE7821 addu        t7,t7,t6
  004013A8: 3C010041 lui         at,0x41
  004013AC: AC2FEF7C sw          t7,0xEF7C(at)
  004013B0: 3C040041 lui         a0,0x41
  004013B4: 2484F0E0 addiu       a0,a0,0xF0E0
  004013B8: 0C10043D jal         clearboard
  004013BC: 00000000 nop
  004013C0: 24180014 addiu       t8,zero,0x14
  004013C4: 3C010041 lui         at,0x41
  004013C8: AC38F0A4 sw          t8,0xF0A4(at)
  004013CC: 24190001 addiu       t9,zero,1
  004013D0: 3C010041 lui         at,0x41
  004013D4: AC39F064 sw          t9,0xF064(at)
  004013D8: 24080029 addiu       t0,zero,0x29
  004013DC: 3C010041 lui         at,0x41
  004013E0: A428F4AC sh          t0,0xF4AC(at)
  004013E4: 24090001 addiu       t1,zero,1
  004013E8: 3C010041 lui         at,0x41
  004013EC: AC29F048 sw          t1,0xF048(at)
  004013F0: 8FA40058 lw          a0,0x58(sp)
  004013F4: 3C050041 lui         a1,0x41
  004013F8: 94A5F4AC lhu         a1,0xF4AC(a1)
  004013FC: 0C10041B jal         checkdepth
  00401400: 00000000 nop
  00401404: 10000001 b           0040140C
  00401408: 00000000 nop
  0040140C: 8FBF0014 lw          ra,0x14(sp)
  00401410: 27BD0058 addiu       sp,sp,0x58
  00401414: 03E00008 jr          ra
  00401418: 00000000 nop
printboard:
  0040141C: 27BDFFD0 addiu       sp,sp,0xFFD0
  00401420: AFBF001C sw          ra,0x1C(sp)
  00401424: AFA40030 sw          a0,0x30(sp)
  00401428: AFA0002C sw          zero,0x2C(sp)
  0040142C: AFA00028 sw          zero,0x28(sp)
  00401430: 8FAE002C lw          t6,0x2C(sp)
  00401434: 000E7880 sll         t7,t6,2
  00401438: 01EE7821 addu        t7,t7,t6
  0040143C: 000F7840 sll         t7,t7,1
  00401440: 8FB80028 lw          t8,0x28(sp)
  00401444: 01F8C821 addu        t9,t7,t8
  00401448: 8FA80030 lw          t0,0x30(sp)
  0040144C: 01194821 addu        t1,t0,t9
  00401450: 912A000B lbu         t2,0xB(t1)
  00401454: AFAA0024 sw          t2,0x24(sp)
  00401458: 24010001 addiu       at,zero,1
  0040145C: 11410041 beq         at,t2,00401564
  00401460: 00000000 nop
  00401464: 8FAB0024 lw          t3,0x24(sp)
  00401468: 24010003 addiu       at,zero,3
  0040146C: 1561000B bne         at,t3,0040149C
  00401470: 00000000 nop
  00401474: 3C040041 lui         a0,0x41
  00401478: 8C84EEA0 lw          a0,0xEEA0(a0)
  0040147C: 3C050041 lui         a1,0x41
  00401480: 8CA5F4A4 lw          a1,0xF4A4(a1)
  00401484: 3C0C0041 lui         t4,0x41
  00401488: 8D8C11E0 lw          t4,0x11E0(t4)
  0040148C: 0180F809 jalr        ra,t4
  00401490: 00000000 nop
  00401494: 10000009 b           004014BC
  00401498: 00000000 nop
  0040149C: 3C040041 lui         a0,0x41
  004014A0: 8C84EEA0 lw          a0,0xEEA0(a0)
  004014A4: 3C050041 lui         a1,0x41
  004014A8: 8CA5F400 lw          a1,0xF400(a1)
  004014AC: 3C0D0041 lui         t5,0x41
  004014B0: 8DAD11E0 lw          t5,0x11E0(t5)
  004014B4: 01A0F809 jalr        ra,t5
  004014B8: 00000000 nop
  004014BC: 3C040041 lui         a0,0x41
  004014C0: 8C84EEA0 lw          a0,0xEEA0(a0)
  004014C4: 3C0E0041 lui         t6,0x41
  004014C8: 8DCEF4A8 lw          t6,0xF4A8(t6)
  004014CC: 3C0F0041 lui         t7,0x41
  004014D0: 8DEFF454 lw          t7,0xF454(t7)
  004014D4: 000FC040 sll         t8,t7,1
  004014D8: 01D84021 addu        t0,t6,t8
  004014DC: 8FB9002C lw          t9,0x2C(sp)
  004014E0: 3C090041 lui         t1,0x41
  004014E4: 8D29F068 lw          t1,0xF068(t1)
  004014E8: 03290019 multu       t9,t1
  004014EC: 00000000 nop
  004014F0: 00000000 nop
  004014F4: 00005012 mflo        t2
  004014F8: 00000000 nop
  004014FC: 00000000 nop
  00401500: 010A5821 addu        t3,t0,t2
  00401504: 01602825 or          a1,t3,zero
  00401508: 8FAC0028 lw          t4,0x28(sp)
  0040150C: 3C0D0041 lui         t5,0x41
  00401510: 8DADEFF4 lw          t5,0xEFF4(t5)
  00401514: 018D0019 multu       t4,t5
  00401518: 00000000 nop
  0040151C: 00000000 nop
  00401520: 00007012 mflo        t6
  00401524: 00000000 nop
  00401528: 00000000 nop
  0040152C: 3C180041 lui         t8,0x41
  00401530: 8F18F4A0 lw          t8,0xF4A0(t8)
  00401534: 030EC821 addu        t9,t8,t6
  00401538: 27260002 addiu       a2,t9,2
  0040153C: 01694021 addu        t0,t3,t1
  00401540: 000F5080 sll         t2,t7,2
  00401544: 010A3823 subu        a3,t0,t2
  00401548: 032D6021 addu        t4,t9,t5
  0040154C: 2598FFFE addiu       t8,t4,0xFFFE
  00401550: AFB80010 sw          t8,0x10(sp)
  00401554: 3C0E0041 lui         t6,0x41
  00401558: 8DCE11E4 lw          t6,0x11E4(t6)
  0040155C: 01C0F809 jalr        ra,t6
  00401560: 00000000 nop
  00401564: 8FAB0028 lw          t3,0x28(sp)
  00401568: 25690001 addiu       t1,t3,1
  0040156C: AFA90028 sw          t1,0x28(sp)
  00401570: 29210008 slti        at,t1,8
  00401574: 1420FFAE bne         zero,at,00401430
  00401578: 00000000 nop
  0040157C: 8FAF002C lw          t7,0x2C(sp)
  00401580: 25E80001 addiu       t0,t7,1
  00401584: AFA8002C sw          t0,0x2C(sp)
  00401588: 29010008 slti        at,t0,8
  0040158C: 1420FFA7 bne         zero,at,0040142C
  00401590: 00000000 nop
  00401594: 10000001 b           0040159C
  00401598: 00000000 nop
  0040159C: 8FBF001C lw          ra,0x1C(sp)
  004015A0: 27BD0030 addiu       sp,sp,0x30
  004015A4: 03E00008 jr          ra
  004015A8: 00000000 nop
ClearMessageTop:
  004015AC: 27BDFFD8 addiu       sp,sp,0xFFD8
  004015B0: AFBF001C sw          ra,0x1C(sp)
  004015B4: AFA40028 sw          a0,0x28(sp)
  004015B8: 3C0E0041 lui         t6,0x41
  004015BC: 8DCEF05C lw          t6,0xF05C(t6)
  004015C0: 24010001 addiu       at,zero,1
  004015C4: 15C10029 bne         at,t6,0040166C
  004015C8: 00000000 nop
  004015CC: 3C0F0041 lui         t7,0x41
  004015D0: 8DEFF054 lw          t7,0xF054(t7)
  004015D4: 25F80001 addiu       t8,t7,1
  004015D8: 3C010041 lui         at,0x41
  004015DC: AC38F450 sw          t8,0xF450(at)
  004015E0: 3C190041 lui         t9,0x41
  004015E4: 8F39F058 lw          t9,0xF058(t9)
  004015E8: 13200006 beq         zero,t9,00401604
  004015EC: 00000000 nop
  004015F0: 3C080041 lui         t0,0x41
  004015F4: 8D08EEA4 lw          t0,0xEEA4(t0)
  004015F8: AFA80024 sw          t0,0x24(sp)
  004015FC: 10000004 b           00401610
  00401600: 00000000 nop
  00401604: 3C090041 lui         t1,0x41
  00401608: 8D29F070 lw          t1,0xF070(t1)
  0040160C: AFA90024 sw          t1,0x24(sp)
  00401610: 8FA40028 lw          a0,0x28(sp)
  00401614: 8FA50024 lw          a1,0x24(sp)
  00401618: 3C0A0041 lui         t2,0x41
  0040161C: 8D4A11E0 lw          t2,0x11E0(t2)
  00401620: 0140F809 jalr        ra,t2
  00401624: 00000000 nop
  00401628: 8FA40028 lw          a0,0x28(sp)
  0040162C: 00002825 or          a1,zero,zero
  00401630: 00003025 or          a2,zero,zero
  00401634: 3C070041 lui         a3,0x41
  00401638: 8CE7EF6C lw          a3,0xEF6C(a3)
  0040163C: 3C0B0041 lui         t3,0x41
  00401640: 8D6BEF78 lw          t3,0xEF78(t3)
  00401644: AFAB0010 sw          t3,0x10(sp)
  00401648: 3C0C00F0 lui         t4,0xF0
  0040164C: 358C0021 ori         t4,t4,0x21
  00401650: AFAC0014 sw          t4,0x14(sp)
  00401654: 3C0D0041 lui         t5,0x41
  00401658: 8DAD1204 lw          t5,0x1204(t5)
  0040165C: 01A0F809 jalr        ra,t5
  00401660: 00000000 nop
  00401664: 3C010041 lui         at,0x41
  00401668: AC20F05C sw          zero,0xF05C(at)
  0040166C: 10000001 b           00401674
  00401670: 00000000 nop
  00401674: 8FBF001C lw          ra,0x1C(sp)
  00401678: 27BD0028 addiu       sp,sp,0x28
  0040167C: 03E00008 jr          ra
  00401680: 00000000 nop
ShowMessageTop:
  00401684: 27BDFFD0 addiu       sp,sp,0xFFD0
  00401688: AFBF001C sw          ra,0x1C(sp)
  0040168C: AFA40030 sw          a0,0x30(sp)
  00401690: AFA50034 sw          a1,0x34(sp)
  00401694: 8FAE0034 lw          t6,0x34(sp)
  00401698: 3C010041 lui         at,0x41
  0040169C: AC2EF0A0 sw          t6,0xF0A0(at)
  004016A0: 8FA40030 lw          a0,0x30(sp)
  004016A4: 0C10056B jal         ClearMessageTop
  004016A8: 00000000 nop
  004016AC: 8FA40030 lw          a0,0x30(sp)
  004016B0: 3C050041 lui         a1,0x41
  004016B4: 8CA5F070 lw          a1,0xF070(a1)
  004016B8: 3C0F0041 lui         t7,0x41
  004016BC: 8DEF11E0 lw          t7,0x11E0(t7)
  004016C0: 01E0F809 jalr        ra,t7
  004016C4: 00000000 nop
  004016C8: 8FA40030 lw          a0,0x30(sp)
  004016CC: 00002825 or          a1,zero,zero
  004016D0: 00003025 or          a2,zero,zero
  004016D4: 3C070041 lui         a3,0x41
  004016D8: 8CE7EF6C lw          a3,0xEF6C(a3)
  004016DC: 3C180041 lui         t8,0x41
  004016E0: 8F18EF78 lw          t8,0xEF78(t8)
  004016E4: AFB80010 sw          t8,0x10(sp)
  004016E8: 3C1900F0 lui         t9,0xF0
  004016EC: 37390021 ori         t9,t9,0x21
  004016F0: AFB90014 sw          t9,0x14(sp)
  004016F4: 3C080041 lui         t0,0x41
  004016F8: 8D081204 lw          t0,0x1204(t0)
  004016FC: 0100F809 jalr        ra,t0
  00401700: 00000000 nop
  00401704: 8FA40030 lw          a0,0x30(sp)
  00401708: 24050001 addiu       a1,zero,1
  0040170C: 3C090041 lui         t1,0x41
  00401710: 8D291200 lw          t1,0x1200(t1)
  00401714: 0120F809 jalr        ra,t1
  00401718: 00000000 nop
  0040171C: 8FA40034 lw          a0,0x34(sp)
  00401720: 3C0A0041 lui         t2,0x41
  00401724: 8D4A128C lw          t2,0x128C(t2)
  00401728: 0140F809 jalr        ra,t2
  0040172C: 00000000 nop
  00401730: AFA20020 sw          v0,0x20(sp)
  00401734: 8FA40030 lw          a0,0x30(sp)
  00401738: 8FA50034 lw          a1,0x34(sp)
  0040173C: 8FA60020 lw          a2,0x20(sp)
  00401740: 27A70028 addiu       a3,sp,0x28
  00401744: 3C0B0041 lui         t3,0x41
  00401748: 8D6B11F4 lw          t3,0x11F4(t3)
  0040174C: 0160F809 jalr        ra,t3
  00401750: 00000000 nop
  00401754: 8FAC0028 lw          t4,0x28(sp)
  00401758: AFAC0024 sw          t4,0x24(sp)
  0040175C: 8FA40034 lw          a0,0x34(sp)
  00401760: 3C0D0041 lui         t5,0x41
  00401764: 8DAD128C lw          t5,0x128C(t5)
  00401768: 01A0F809 jalr        ra,t5
  0040176C: 00000000 nop
  00401770: AFA20020 sw          v0,0x20(sp)
  00401774: 8FA40030 lw          a0,0x30(sp)
  00401778: 3C0E0041 lui         t6,0x41
  0040177C: 8DCEEF6C lw          t6,0xEF6C(t6)
  00401780: 8FAF0024 lw          t7,0x24(sp)
  00401784: 01CF2823 subu        a1,t6,t7
  00401788: 04A10002 bgez        a1,00401794
  0040178C: 00A00821 addu        at,a1,zero
  00401790: 24A10001 addiu       at,a1,1
  00401794: 00012843 sra         a1,at,1
  00401798: 00003025 or          a2,zero,zero
  0040179C: 8FA70034 lw          a3,0x34(sp)
  004017A0: 8FB80020 lw          t8,0x20(sp)
  004017A4: AFB80010 sw          t8,0x10(sp)
  004017A8: 3C190041 lui         t9,0x41
  004017AC: 8F3911D4 lw          t9,0x11D4(t9)
  004017B0: 0320F809 jalr        ra,t9
  004017B4: 00000000 nop
  004017B8: 24080001 addiu       t0,zero,1
  004017BC: 3C010041 lui         at,0x41
  004017C0: AC28F05C sw          t0,0xF05C(at)
  004017C4: 8FA40030 lw          a0,0x30(sp)
  004017C8: 24050002 addiu       a1,zero,2
  004017CC: 3C090041 lui         t1,0x41
  004017D0: 8D291200 lw          t1,0x1200(t1)
  004017D4: 0120F809 jalr        ra,t1
  004017D8: 00000000 nop
  004017DC: 10000001 b           004017E4
  004017E0: 00000000 nop
  004017E4: 8FBF001C lw          ra,0x1C(sp)
  004017E8: 27BD0030 addiu       sp,sp,0x30
  004017EC: 03E00008 jr          ra
  004017F0: 00000000 nop
drawboard:
  004017F4: 27BDFFC8 addiu       sp,sp,0xFFC8
  004017F8: AFBF001C sw          ra,0x1C(sp)
  004017FC: AFA40038 sw          a0,0x38(sp)
  00401800: 3C0E0041 lui         t6,0x41
  00401804: 8DCEEFF4 lw          t6,0xEFF4(t6)
  00401808: 000E78C0 sll         t7,t6,3
  0040180C: AFAF0034 sw          t7,0x34(sp)
  00401810: 3C180041 lui         t8,0x41
  00401814: 8F18F068 lw          t8,0xF068(t8)
  00401818: 0018C8C0 sll         t9,t8,3
  0040181C: AFB90030 sw          t9,0x30(sp)
  00401820: 3C080041 lui         t0,0x41
  00401824: 8D08EF60 lw          t0,0xEF60(t0)
  00401828: 3C090041 lui         t1,0x41
  0040182C: 8D29F454 lw          t1,0xF454(t1)
  00401830: 01090019 multu       t0,t1
  00401834: 00000000 nop
  00401838: 00000000 nop
  0040183C: 00005012 mflo        t2
  00401840: 00000000 nop
  00401844: 00000000 nop
  00401848: AFAA002C sw          t2,0x2C(sp)
  0040184C: 3C040041 lui         a0,0x41
  00401850: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401854: 3C050041 lui         a1,0x41
  00401858: 8CA5F050 lw          a1,0xF050(a1)
  0040185C: 3C0B0041 lui         t3,0x41
  00401860: 8D6B11E0 lw          t3,0x11E0(t3)
  00401864: 0160F809 jalr        ra,t3
  00401868: 00000000 nop
  0040186C: 3C040041 lui         a0,0x41
  00401870: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401874: 3C0C0041 lui         t4,0x41
  00401878: 8D8CF4A8 lw          t4,0xF4A8(t4)
  0040187C: 8FAD002C lw          t5,0x2C(sp)
  00401880: 000D7040 sll         t6,t5,1
  00401884: 018E2821 addu        a1,t4,t6
  00401888: 3C0F0041 lui         t7,0x41
  0040188C: 8DEFF4A0 lw          t7,0xF4A0(t7)
  00401890: 3C180041 lui         t8,0x41
  00401894: 8F18EF60 lw          t8,0xEF60(t8)
  00401898: 0018C840 sll         t9,t8,1
  0040189C: 01F93021 addu        a2,t7,t9
  004018A0: 8FA70030 lw          a3,0x30(sp)
  004018A4: 8FA80034 lw          t0,0x34(sp)
  004018A8: AFA80010 sw          t0,0x10(sp)
  004018AC: 3C0900F0 lui         t1,0xF0
  004018B0: 35290021 ori         t1,t1,0x21
  004018B4: AFA90014 sw          t1,0x14(sp)
  004018B8: 3C0A0041 lui         t2,0x41
  004018BC: 8D4A1204 lw          t2,0x1204(t2)
  004018C0: 0140F809 jalr        ra,t2
  004018C4: 00000000 nop
  004018C8: 3C040041 lui         a0,0x41
  004018CC: 8C84EEA0 lw          a0,0xEEA0(a0)
  004018D0: 3C050041 lui         a1,0x41
  004018D4: 8CA5F06C lw          a1,0xF06C(a1)
  004018D8: 3C0B0041 lui         t3,0x41
  004018DC: 8D6B11E0 lw          t3,0x11E0(t3)
  004018E0: 0160F809 jalr        ra,t3
  004018E4: 00000000 nop
  004018E8: 3C040041 lui         a0,0x41
  004018EC: 8C84EEA0 lw          a0,0xEEA0(a0)
  004018F0: 3C050041 lui         a1,0x41
  004018F4: 8CA5F4A8 lw          a1,0xF4A8(a1)
  004018F8: 3C060041 lui         a2,0x41
  004018FC: 8CC6F4A0 lw          a2,0xF4A0(a2)
  00401900: 8FA70030 lw          a3,0x30(sp)
  00401904: 8FAD0034 lw          t5,0x34(sp)
  00401908: AFAD0010 sw          t5,0x10(sp)
  0040190C: 3C0C00F0 lui         t4,0xF0
  00401910: 358C0021 ori         t4,t4,0x21
  00401914: AFAC0014 sw          t4,0x14(sp)
  00401918: 3C0E0041 lui         t6,0x41
  0040191C: 8DCE1204 lw          t6,0x1204(t6)
  00401920: 01C0F809 jalr        ra,t6
  00401924: 00000000 nop
  00401928: 3C040041 lui         a0,0x41
  0040192C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401930: 3C050041 lui         a1,0x41
  00401934: 8CA5F050 lw          a1,0xF050(a1)
  00401938: 3C180041 lui         t8,0x41
  0040193C: 8F1811E0 lw          t8,0x11E0(t8)
  00401940: 0300F809 jalr        ra,t8
  00401944: 00000000 nop
  00401948: 3C0F0041 lui         t7,0x41
  0040194C: 8DEFF4A8 lw          t7,0xF4A8(t7)
  00401950: AFAF0028 sw          t7,0x28(sp)
  00401954: 8FB90030 lw          t9,0x30(sp)
  00401958: 01F94021 addu        t0,t7,t9
  0040195C: 010F082A slt         at,t0,t7
  00401960: 1420001D bne         zero,at,004019D8
  00401964: 00000000 nop
  00401968: 3C040041 lui         a0,0x41
  0040196C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401970: 8FA50028 lw          a1,0x28(sp)
  00401974: 3C060041 lui         a2,0x41
  00401978: 8CC6F4A0 lw          a2,0xF4A0(a2)
  0040197C: 3C070041 lui         a3,0x41
  00401980: 8CE7F454 lw          a3,0xF454(a3)
  00401984: 8FA90034 lw          t1,0x34(sp)
  00401988: AFA90010 sw          t1,0x10(sp)
  0040198C: 3C0A00F0 lui         t2,0xF0
  00401990: 354A0021 ori         t2,t2,0x21
  00401994: AFAA0014 sw          t2,0x14(sp)
  00401998: 3C0B0041 lui         t3,0x41
  0040199C: 8D6B1204 lw          t3,0x1204(t3)
  004019A0: 0160F809 jalr        ra,t3
  004019A4: 00000000 nop
  004019A8: 8FAD0028 lw          t5,0x28(sp)
  004019AC: 3C0C0041 lui         t4,0x41
  004019B0: 8D8CF068 lw          t4,0xF068(t4)
  004019B4: 01AC7021 addu        t6,t5,t4
  004019B8: AFAE0028 sw          t6,0x28(sp)
  004019BC: 3C180041 lui         t8,0x41
  004019C0: 8F18F4A8 lw          t8,0xF4A8(t8)
  004019C4: 8FB90030 lw          t9,0x30(sp)
  004019C8: 03197821 addu        t7,t8,t9
  004019CC: 01EE082A slt         at,t7,t6
  004019D0: 1020FFE5 beq         zero,at,00401968
  004019D4: 00000000 nop
  004019D8: 3C080041 lui         t0,0x41
  004019DC: 8D08F4A0 lw          t0,0xF4A0(t0)
  004019E0: AFA80028 sw          t0,0x28(sp)
  004019E4: 8FA90034 lw          t1,0x34(sp)
  004019E8: 01095021 addu        t2,t0,t1
  004019EC: 0148082A slt         at,t2,t0
  004019F0: 1420001C bne         zero,at,00401A64
  004019F4: 00000000 nop
  004019F8: 3C040041 lui         a0,0x41
  004019FC: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401A00: 3C050041 lui         a1,0x41
  00401A04: 8CA5F4A8 lw          a1,0xF4A8(a1)
  00401A08: 8FA60028 lw          a2,0x28(sp)
  00401A0C: 8FA70030 lw          a3,0x30(sp)
  00401A10: 240B0001 addiu       t3,zero,1
  00401A14: AFAB0010 sw          t3,0x10(sp)
  00401A18: 3C0D00F0 lui         t5,0xF0
  00401A1C: 35AD0021 ori         t5,t5,0x21
  00401A20: AFAD0014 sw          t5,0x14(sp)
  00401A24: 3C0C0041 lui         t4,0x41
  00401A28: 8D8C1204 lw          t4,0x1204(t4)
  00401A2C: 0180F809 jalr        ra,t4
  00401A30: 00000000 nop
  00401A34: 8FB80028 lw          t8,0x28(sp)
  00401A38: 3C190041 lui         t9,0x41
  00401A3C: 8F39EFF4 lw          t9,0xEFF4(t9)
  00401A40: 03197021 addu        t6,t8,t9
  00401A44: AFAE0028 sw          t6,0x28(sp)
  00401A48: 3C0F0041 lui         t7,0x41
  00401A4C: 8DEFF4A0 lw          t7,0xF4A0(t7)
  00401A50: 8FA90034 lw          t1,0x34(sp)
  00401A54: 01E94021 addu        t0,t7,t1
  00401A58: 010E082A slt         at,t0,t6
  00401A5C: 1020FFE6 beq         zero,at,004019F8
  00401A60: 00000000 nop
  00401A64: 3C0A0041 lui         t2,0x41
  00401A68: 8D4AF4A8 lw          t2,0xF4A8(t2)
  00401A6C: 8FAB0030 lw          t3,0x30(sp)
  00401A70: 014B6821 addu        t5,t2,t3
  00401A74: AFAD0024 sw          t5,0x24(sp)
  00401A78: 3C0C0041 lui         t4,0x41
  00401A7C: 8D8CF4A0 lw          t4,0xF4A0(t4)
  00401A80: 8FB80034 lw          t8,0x34(sp)
  00401A84: 0198C821 addu        t9,t4,t8
  00401A88: AFB90020 sw          t9,0x20(sp)
  00401A8C: 3C040041 lui         a0,0x41
  00401A90: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401A94: 3C050041 lui         a1,0x41
  00401A98: 8CA5F06C lw          a1,0xF06C(a1)
  00401A9C: 3C0F0041 lui         t7,0x41
  00401AA0: 8DEF11E0 lw          t7,0x11E0(t7)
  00401AA4: 01E0F809 jalr        ra,t7
  00401AA8: 00000000 nop
  00401AAC: 24090001 addiu       t1,zero,1
  00401AB0: AFA90028 sw          t1,0x28(sp)
  00401AB4: 8FAE002C lw          t6,0x2C(sp)
  00401AB8: 29C10002 slti        at,t6,2
  00401ABC: 14200029 bne         zero,at,00401B64
  00401AC0: 00000000 nop
  00401AC4: 3C040041 lui         a0,0x41
  00401AC8: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401ACC: 8FA80024 lw          t0,0x24(sp)
  00401AD0: 8FAA0028 lw          t2,0x28(sp)
  00401AD4: 010A2821 addu        a1,t0,t2
  00401AD8: 3C0B0041 lui         t3,0x41
  00401ADC: 8D6BF454 lw          t3,0xF454(t3)
  00401AE0: 014B001A div         t2,t3
  00401AE4: 15600002 bne         zero,t3,00401AF0
  00401AE8: 00000000 nop
  00401AEC: 0007000D break
  00401AF0: 2401FFFF addiu       at,zero,0xFFFF
  00401AF4: 15610004 bne         at,t3,00401B08
  00401AF8: 3C018000 lui         at,0x8000
  00401AFC: 15410002 bne         at,t2,00401B08
  00401B00: 00000000 nop
  00401B04: 0006000D break
  00401B08: 00006812 mflo        t5
  00401B0C: 00000000 nop
  00401B10: 00000000 nop
  00401B14: 3C0C0041 lui         t4,0x41
  00401B18: 8D8CF4A0 lw          t4,0xF4A0(t4)
  00401B1C: 018D3021 addu        a2,t4,t5
  00401B20: 24070001 addiu       a3,zero,1
  00401B24: 8FB80034 lw          t8,0x34(sp)
  00401B28: AFB80010 sw          t8,0x10(sp)
  00401B2C: 3C1900F0 lui         t9,0xF0
  00401B30: 37390021 ori         t9,t9,0x21
  00401B34: AFB90014 sw          t9,0x14(sp)
  00401B38: 3C0F0041 lui         t7,0x41
  00401B3C: 8DEF1204 lw          t7,0x1204(t7)
  00401B40: 01E0F809 jalr        ra,t7
  00401B44: 00000000 nop
  00401B48: 8FA90028 lw          t1,0x28(sp)
  00401B4C: 252E0001 addiu       t6,t1,1
  00401B50: AFAE0028 sw          t6,0x28(sp)
  00401B54: 8FA8002C lw          t0,0x2C(sp)
  00401B58: 01C8082A slt         at,t6,t0
  00401B5C: 1420FFD9 bne         zero,at,00401AC4
  00401B60: 00000000 nop
  00401B64: 240A0001 addiu       t2,zero,1
  00401B68: AFAA0028 sw          t2,0x28(sp)
  00401B6C: 3C0B0041 lui         t3,0x41
  00401B70: 8D6BEF60 lw          t3,0xEF60(t3)
  00401B74: 29610002 slti        at,t3,2
  00401B78: 14200023 bne         zero,at,00401C08
  00401B7C: 00000000 nop
  00401B80: 3C040041 lui         a0,0x41
  00401B84: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401B88: 8FAC0028 lw          t4,0x28(sp)
  00401B8C: 3C0D0041 lui         t5,0x41
  00401B90: 8DADF454 lw          t5,0xF454(t5)
  00401B94: 018D0019 multu       t4,t5
  00401B98: 00000000 nop
  00401B9C: 00000000 nop
  00401BA0: 0000C012 mflo        t8
  00401BA4: 00000000 nop
  00401BA8: 00000000 nop
  00401BAC: 3C190041 lui         t9,0x41
  00401BB0: 8F39F4A8 lw          t9,0xF4A8(t9)
  00401BB4: 03382821 addu        a1,t9,t8
  00401BB8: 8FAF0020 lw          t7,0x20(sp)
  00401BBC: 01EC3021 addu        a2,t7,t4
  00401BC0: 8FA70030 lw          a3,0x30(sp)
  00401BC4: 24090001 addiu       t1,zero,1
  00401BC8: AFA90010 sw          t1,0x10(sp)
  00401BCC: 3C0E00F0 lui         t6,0xF0
  00401BD0: 35CE0021 ori         t6,t6,0x21
  00401BD4: AFAE0014 sw          t6,0x14(sp)
  00401BD8: 3C080041 lui         t0,0x41
  00401BDC: 8D081204 lw          t0,0x1204(t0)
  00401BE0: 0100F809 jalr        ra,t0
  00401BE4: 00000000 nop
  00401BE8: 8FAA0028 lw          t2,0x28(sp)
  00401BEC: 254B0001 addiu       t3,t2,1
  00401BF0: AFAB0028 sw          t3,0x28(sp)
  00401BF4: 3C0D0041 lui         t5,0x41
  00401BF8: 8DADEF60 lw          t5,0xEF60(t5)
  00401BFC: 016D082A slt         at,t3,t5
  00401C00: 1420FFDF bne         zero,at,00401B80
  00401C04: 00000000 nop
  00401C08: 3C040041 lui         a0,0x41
  00401C0C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401C10: 3C050041 lui         a1,0x41
  00401C14: 8CA5F050 lw          a1,0xF050(a1)
  00401C18: 3C190041 lui         t9,0x41
  00401C1C: 8F3911E0 lw          t9,0x11E0(t9)
  00401C20: 0320F809 jalr        ra,t9
  00401C24: 00000000 nop
  00401C28: 3C040041 lui         a0,0x41
  00401C2C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401C30: 8FA50024 lw          a1,0x24(sp)
  00401C34: 3C060041 lui         a2,0x41
  00401C38: 8CC6F4A0 lw          a2,0xF4A0(a2)
  00401C3C: 00003825 or          a3,zero,zero
  00401C40: 3C180041 lui         t8,0x41
  00401C44: 8F1811F8 lw          t8,0x11F8(t8)
  00401C48: 0300F809 jalr        ra,t8
  00401C4C: 00000000 nop
  00401C50: 3C040041 lui         a0,0x41
  00401C54: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401C58: 8FAF0024 lw          t7,0x24(sp)
  00401C5C: 8FAC002C lw          t4,0x2C(sp)
  00401C60: 01EC2821 addu        a1,t7,t4
  00401C64: 3C090041 lui         t1,0x41
  00401C68: 8D29F4A0 lw          t1,0xF4A0(t1)
  00401C6C: 3C0E0041 lui         t6,0x41
  00401C70: 8DCEEF60 lw          t6,0xEF60(t6)
  00401C74: 012E3021 addu        a2,t1,t6
  00401C78: 3C080041 lui         t0,0x41
  00401C7C: 8D0811D8 lw          t0,0x11D8(t0)
  00401C80: 0100F809 jalr        ra,t0
  00401C84: 00000000 nop
  00401C88: 3C040041 lui         a0,0x41
  00401C8C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401C90: 8FAA0024 lw          t2,0x24(sp)
  00401C94: 8FAB002C lw          t3,0x2C(sp)
  00401C98: 014B2821 addu        a1,t2,t3
  00401C9C: 8FAD0020 lw          t5,0x20(sp)
  00401CA0: 3C190041 lui         t9,0x41
  00401CA4: 8F39EF60 lw          t9,0xEF60(t9)
  00401CA8: 01B93021 addu        a2,t5,t9
  00401CAC: 3C180041 lui         t8,0x41
  00401CB0: 8F1811D8 lw          t8,0x11D8(t8)
  00401CB4: 0300F809 jalr        ra,t8
  00401CB8: 00000000 nop
  00401CBC: 3C040041 lui         a0,0x41
  00401CC0: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401CC4: 3C0F0041 lui         t7,0x41
  00401CC8: 8DEFF4A8 lw          t7,0xF4A8(t7)
  00401CCC: 8FAC002C lw          t4,0x2C(sp)
  00401CD0: 01EC2821 addu        a1,t7,t4
  00401CD4: 8FA90020 lw          t1,0x20(sp)
  00401CD8: 3C0E0041 lui         t6,0x41
  00401CDC: 8DCEEF60 lw          t6,0xEF60(t6)
  00401CE0: 012E3021 addu        a2,t1,t6
  00401CE4: 3C080041 lui         t0,0x41
  00401CE8: 8D0811D8 lw          t0,0x11D8(t0)
  00401CEC: 0100F809 jalr        ra,t0
  00401CF0: 00000000 nop
  00401CF4: 3C040041 lui         a0,0x41
  00401CF8: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401CFC: 3C050041 lui         a1,0x41
  00401D00: 8CA5F4A8 lw          a1,0xF4A8(a1)
  00401D04: 8FA60020 lw          a2,0x20(sp)
  00401D08: 3C0A0041 lui         t2,0x41
  00401D0C: 8D4A11D8 lw          t2,0x11D8(t2)
  00401D10: 0140F809 jalr        ra,t2
  00401D14: 00000000 nop
  00401D18: 3C040041 lui         a0,0x41
  00401D1C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401D20: 8FAB0024 lw          t3,0x24(sp)
  00401D24: 8FAD002C lw          t5,0x2C(sp)
  00401D28: 016D2821 addu        a1,t3,t5
  00401D2C: 8FB90020 lw          t9,0x20(sp)
  00401D30: 3C180041 lui         t8,0x41
  00401D34: 8F18EF60 lw          t8,0xEF60(t8)
  00401D38: 03383021 addu        a2,t9,t8
  00401D3C: 00003825 or          a3,zero,zero
  00401D40: 3C0F0041 lui         t7,0x41
  00401D44: 8DEF11F8 lw          t7,0x11F8(t7)
  00401D48: 01E0F809 jalr        ra,t7
  00401D4C: 00000000 nop
  00401D50: 3C040041 lui         a0,0x41
  00401D54: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401D58: 8FA50024 lw          a1,0x24(sp)
  00401D5C: 8FA60020 lw          a2,0x20(sp)
  00401D60: 3C0C0041 lui         t4,0x41
  00401D64: 8D8C11D8 lw          t4,0x11D8(t4)
  00401D68: 0180F809 jalr        ra,t4
  00401D6C: 00000000 nop
  00401D70: 8FA40038 lw          a0,0x38(sp)
  00401D74: 0C100507 jal         printboard
  00401D78: 00000000 nop
  00401D7C: 10000001 b           00401D84
  00401D80: 00000000 nop
  00401D84: 8FBF001C lw          ra,0x1C(sp)
  00401D88: 27BD0038 addiu       sp,sp,0x38
  00401D8C: 03E00008 jr          ra
  00401D90: 00000000 nop
RevPaint:
  00401D94: 27BDFFC0 addiu       sp,sp,0xFFC0
  00401D98: AFBF001C sw          ra,0x1C(sp)
  00401D9C: AFA40040 sw          a0,0x40(sp)
  00401DA0: AFA50044 sw          a1,0x44(sp)
  00401DA4: 8FAE0044 lw          t6,0x44(sp)
  00401DA8: 3C010041 lui         at,0x41
  00401DAC: AC2EEEA0 sw          t6,0xEEA0(at)
  00401DB0: 8FAF0040 lw          t7,0x40(sp)
  00401DB4: 3C010041 lui         at,0x41
  00401DB8: AC2FEF68 sw          t7,0xEF68(at)
  00401DBC: 3C040041 lui         a0,0x41
  00401DC0: 8C84EEA0 lw          a0,0xEEA0(a0)
  00401DC4: 24050002 addiu       a1,zero,2
  00401DC8: 3C180041 lui         t8,0x41
  00401DCC: 8F181200 lw          t8,0x1200(t8)
  00401DD0: 0300F809 jalr        ra,t8
  00401DD4: 00000000 nop
  00401DD8: 8FA40040 lw          a0,0x40(sp)
  00401DDC: 27A50030 addiu       a1,sp,0x30
  00401DE0: 3C190041 lui         t9,0x41
  00401DE4: 8F39130C lw          t9,0x130C(t9)
  00401DE8: 0320F809 jalr        ra,t9
  00401DEC: 00000000 nop
  00401DF0: 8FA80038 lw          t0,0x38(sp)
  00401DF4: 8FA90030 lw          t1,0x30(sp)
  00401DF8: 01095023 subu        t2,t0,t1
  00401DFC: AFAA002C sw          t2,0x2C(sp)
  00401E00: 3C010041 lui         at,0x41
  00401E04: AC2AEF6C sw          t2,0xEF6C(at)
  00401E08: 8FAB003C lw          t3,0x3C(sp)
  00401E0C: 8FAC0034 lw          t4,0x34(sp)
  00401E10: 016C6823 subu        t5,t3,t4
  00401E14: AFAD0028 sw          t5,0x28(sp)
  00401E18: 8FAE002C lw          t6,0x2C(sp)
  00401E1C: 8FAF0028 lw          t7,0x28(sp)
  00401E20: 3C180041 lui         t8,0x41
  00401E24: 8F18F454 lw          t8,0xF454(t8)
  00401E28: 01F80019 multu       t7,t8
  00401E2C: 00000000 nop
  00401E30: 00000000 nop
  00401E34: 0000C812 mflo        t9
  00401E38: 00000000 nop
  00401E3C: 00000000 nop
  00401E40: 01D9082A slt         at,t6,t9
  00401E44: 10200027 beq         zero,at,00401EE4
  00401E48: 00000000 nop
  00401E4C: 8FA8002C lw          t0,0x2C(sp)
  00401E50: 3C090041 lui         t1,0x41
  00401E54: 8D29EF7C lw          t1,0xEF7C(t1)
  00401E58: 0109082A slt         at,t0,t1
  00401E5C: 10200004 beq         zero,at,00401E70
  00401E60: 00000000 nop
  00401E64: 3C0A0041 lui         t2,0x41
  00401E68: 8D4AEF7C lw          t2,0xEF7C(t2)
  00401E6C: AFAA002C sw          t2,0x2C(sp)
  00401E70: 8FAB002C lw          t3,0x2C(sp)
  00401E74: 2401000A addiu       at,zero,0xA
  00401E78: 0161001A div         t3,at
  00401E7C: 00006012 mflo        t4
  00401E80: 00000000 nop
  00401E84: 00000000 nop
  00401E88: 3C010041 lui         at,0x41
  00401E8C: AC2CF068 sw          t4,0xF068(at)
  00401E90: 3C0D0041 lui         t5,0x41
  00401E94: 8DADF068 lw          t5,0xF068(t5)
  00401E98: 3C0F0041 lui         t7,0x41
  00401E9C: 8DEFF454 lw          t7,0xF454(t7)
  00401EA0: 01AF001A div         t5,t7
  00401EA4: 15E00002 bne         zero,t7,00401EB0
  00401EA8: 00000000 nop
  00401EAC: 0007000D break
  00401EB0: 2401FFFF addiu       at,zero,0xFFFF
  00401EB4: 15E10004 bne         at,t7,00401EC8
  00401EB8: 3C018000 lui         at,0x8000
  00401EBC: 15A10002 bne         at,t5,00401EC8
  00401EC0: 00000000 nop
  00401EC4: 0006000D break
  00401EC8: 0000C012 mflo        t8
  00401ECC: 00000000 nop
  00401ED0: 00000000 nop
  00401ED4: 3C010041 lui         at,0x41
  00401ED8: AC38EFF4 sw          t8,0xEFF4(at)
  00401EDC: 1000001E b           00401F58
  00401EE0: 00000000 nop
  00401EE4: 8FAE0028 lw          t6,0x28(sp)
  00401EE8: 3C190041 lui         t9,0x41
  00401EEC: 8F39E050 lw          t9,0xE050(t9)
  00401EF0: 01D9082A slt         at,t6,t9
  00401EF4: 10200004 beq         zero,at,00401F08
  00401EF8: 00000000 nop
  00401EFC: 3C080041 lui         t0,0x41
  00401F00: 8D08E050 lw          t0,0xE050(t0)
  00401F04: AFA80028 sw          t0,0x28(sp)
  00401F08: 8FA90028 lw          t1,0x28(sp)
  00401F0C: 2401000A addiu       at,zero,0xA
  00401F10: 0121001A div         t1,at
  00401F14: 00005012 mflo        t2
  00401F18: 00000000 nop
  00401F1C: 00000000 nop
  00401F20: 3C010041 lui         at,0x41
  00401F24: AC2AEFF4 sw          t2,0xEFF4(at)
  00401F28: 3C0B0041 lui         t3,0x41
  00401F2C: 8D6BEFF4 lw          t3,0xEFF4(t3)
  00401F30: 3C0C0041 lui         t4,0x41
  00401F34: 8D8CF454 lw          t4,0xF454(t4)
  00401F38: 016C0019 multu       t3,t4
  00401F3C: 00000000 nop
  00401F40: 00000000 nop
  00401F44: 00006812 mflo        t5
  00401F48: 00000000 nop
  00401F4C: 00000000 nop
  00401F50: 3C010041 lui         at,0x41
  00401F54: AC2DF068 sw          t5,0xF068(at)
  00401F58: 3C0F0041 lui         t7,0x41
  00401F5C: 8DEFEFF4 lw          t7,0xEFF4(t7)
  00401F60: 000FC0C0 sll         t8,t7,3
  00401F64: AFB80024 sw          t8,0x24(sp)
  00401F68: 3C0E0041 lui         t6,0x41
  00401F6C: 8DCEF068 lw          t6,0xF068(t6)
  00401F70: 000EC8C0 sll         t9,t6,3
  00401F74: AFB90020 sw          t9,0x20(sp)
  00401F78: 8FA80024 lw          t0,0x24(sp)
  00401F7C: 2401001E addiu       at,zero,0x1E
  00401F80: 0101001A div         t0,at
  00401F84: 00004812 mflo        t1
  00401F88: 00000000 nop
  00401F8C: 00000000 nop
  00401F90: 3C010041 lui         at,0x41
  00401F94: AC29EF60 sw          t1,0xEF60(at)
  00401F98: 8FAA002C lw          t2,0x2C(sp)
  00401F9C: 8FAB0020 lw          t3,0x20(sp)
  00401FA0: 016A082A slt         at,t3,t2
  00401FA4: 1020000A beq         zero,at,00401FD0
  00401FA8: 00000000 nop
  00401FAC: 014B6023 subu        t4,t2,t3
  00401FB0: 05810003 bgez        t4,00401FC0
  00401FB4: 000C6843 sra         t5,t4,1
  00401FB8: 25810001 addiu       at,t4,1
  00401FBC: 00016843 sra         t5,at,1
  00401FC0: 3C010041 lui         at,0x41
  00401FC4: AC2DF4A8 sw          t5,0xF4A8(at)
  00401FC8: 10000003 b           00401FD8
  00401FCC: 00000000 nop
  00401FD0: 3C010041 lui         at,0x41
  00401FD4: AC20F4A8 sw          zero,0xF4A8(at)
  00401FD8: 8FAF0028 lw          t7,0x28(sp)
  00401FDC: 8FB80024 lw          t8,0x24(sp)
  00401FE0: 030F082A slt         at,t8,t7
  00401FE4: 1020000A beq         zero,at,00402010
  00401FE8: 00000000 nop
  00401FEC: 01F87023 subu        t6,t7,t8
  00401FF0: 05C10003 bgez        t6,00402000
  00401FF4: 000EC843 sra         t9,t6,1
  00401FF8: 25C10001 addiu       at,t6,1
  00401FFC: 0001C843 sra         t9,at,1
  00402000: 3C010041 lui         at,0x41
  00402004: AC39F4A0 sw          t9,0xF4A0(at)
  00402008: 10000003 b           00402018
  0040200C: 00000000 nop
  00402010: 3C010041 lui         at,0x41
  00402014: AC20F4A0 sw          zero,0xF4A0(at)
  00402018: 3C040041 lui         a0,0x41
  0040201C: 2484F0E0 addiu       a0,a0,0xF0E0
  00402020: 0C1005FD jal         drawboard
  00402024: 00000000 nop
  00402028: 3C080041 lui         t0,0x41
  0040202C: 8D08F05C lw          t0,0xF05C(t0)
  00402030: 11000016 beq         zero,t0,0040208C
  00402034: 00000000 nop
  00402038: 3C040041 lui         a0,0x41
  0040203C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00402040: 3C050041 lui         a1,0x41
  00402044: 8CA5F0A0 lw          a1,0xF0A0(a1)
  00402048: 0C1005A1 jal         ShowMessageTop
  0040204C: 00000000 nop
  00402050: 8FA40044 lw          a0,0x44(sp)
  00402054: 00002825 or          a1,zero,zero
  00402058: 00003025 or          a2,zero,zero
  0040205C: 3C070041 lui         a3,0x41
  00402060: 8CE7EF6C lw          a3,0xEF6C(a3)
  00402064: 3C090041 lui         t1,0x41
  00402068: 8D29EF78 lw          t1,0xEF78(t1)
  0040206C: AFA90010 sw          t1,0x10(sp)
  00402070: 3C0A0055 lui         t2,0x55
  00402074: 354A0009 ori         t2,t2,9
  00402078: AFAA0014 sw          t2,0x14(sp)
  0040207C: 3C0B0041 lui         t3,0x41
  00402080: 8D6B1204 lw          t3,0x1204(t3)
  00402084: 0160F809 jalr        ra,t3
  00402088: 00000000 nop
  0040208C: 10000001 b           00402094
  00402090: 00000000 nop
  00402094: 8FBF001C lw          ra,0x1C(sp)
  00402098: 27BD0040 addiu       sp,sp,0x40
  0040209C: 03E00008 jr          ra
  004020A0: 00000000 nop
FlashMessageTop:
  004020A4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004020A8: AFBF0014 sw          ra,0x14(sp)
  004020AC: AFA40018 sw          a0,0x18(sp)
  004020B0: 3C010041 lui         at,0x41
  004020B4: AC20F450 sw          zero,0xF450(at)
  004020B8: 240E0004 addiu       t6,zero,4
  004020BC: 3C010041 lui         at,0x41
  004020C0: AC2EF054 sw          t6,0xF054(at)
  004020C4: 8FA40018 lw          a0,0x18(sp)
  004020C8: 2405029A addiu       a1,zero,0x29A
  004020CC: 240600C8 addiu       a2,zero,0xC8
  004020D0: 3C070041 lui         a3,0x41
  004020D4: 8CE7EF5C lw          a3,0xEF5C(a3)
  004020D8: 3C0F0041 lui         t7,0x41
  004020DC: 8DEF12B0 lw          t7,0x12B0(t7)
  004020E0: 01E0F809 jalr        ra,t7
  004020E4: 00000000 nop
  004020E8: 10000001 b           004020F0
  004020EC: 00000000 nop
  004020F0: 8FBF0014 lw          ra,0x14(sp)
  004020F4: 27BD0018 addiu       sp,sp,0x18
  004020F8: 03E00008 jr          ra
  004020FC: 00000000 nop
RevMessage:
  00402100: 27BDFFE0 addiu       sp,sp,0xFFE0
  00402104: AFBF0014 sw          ra,0x14(sp)
  00402108: AFA40020 sw          a0,0x20(sp)
  0040210C: AFA50024 sw          a1,0x24(sp)
  00402110: AFA60028 sw          a2,0x28(sp)
  00402114: AFA7002C sw          a3,0x2C(sp)
  00402118: 3C0E0041 lui         t6,0x41
  0040211C: 25CEEF80 addiu       t6,t6,0xEF80
  00402120: AFAE001C sw          t6,0x1C(sp)
  00402124: 8FAF0028 lw          t7,0x28(sp)
  00402128: 81F80000 lb          t8,0(t7)
  0040212C: 1300000E beq         zero,t8,00402168
  00402130: 00000000 nop
  00402134: 8FB90028 lw          t9,0x28(sp)
  00402138: 83280000 lb          t0,0(t9)
  0040213C: 8FA9001C lw          t1,0x1C(sp)
  00402140: A1280000 sb          t0,0(t1)
  00402144: 8FAA001C lw          t2,0x1C(sp)
  00402148: 254B0001 addiu       t3,t2,1
  0040214C: AFAB001C sw          t3,0x1C(sp)
  00402150: 8FAC0028 lw          t4,0x28(sp)
  00402154: 258D0001 addiu       t5,t4,1
  00402158: AFAD0028 sw          t5,0x28(sp)
  0040215C: 81AE0000 lb          t6,0(t5)
  00402160: 15C0FFF4 bne         zero,t6,00402134
  00402164: 00000000 nop
  00402168: 8FAF002C lw          t7,0x2C(sp)
  0040216C: 11E00021 beq         zero,t7,004021F4
  00402170: 00000000 nop
  00402174: 8FB8002C lw          t8,0x2C(sp)
  00402178: 2401000A addiu       at,zero,0xA
  0040217C: 0301001A div         t8,at
  00402180: 0000C812 mflo        t9
  00402184: 00000000 nop
  00402188: 00000000 nop
  0040218C: 1320000D beq         zero,t9,004021C4
  00402190: 00000000 nop
  00402194: 8FA8002C lw          t0,0x2C(sp)
  00402198: 2401000A addiu       at,zero,0xA
  0040219C: 0101001A div         t0,at
  004021A0: 00004812 mflo        t1
  004021A4: 00000000 nop
  004021A8: 00000000 nop
  004021AC: 252A0030 addiu       t2,t1,0x30
  004021B0: 8FAB001C lw          t3,0x1C(sp)
  004021B4: A16A0000 sb          t2,0(t3)
  004021B8: 8FAC001C lw          t4,0x1C(sp)
  004021BC: 258D0001 addiu       t5,t4,1
  004021C0: AFAD001C sw          t5,0x1C(sp)
  004021C4: 8FAE002C lw          t6,0x2C(sp)
  004021C8: 2401000A addiu       at,zero,0xA
  004021CC: 01C1001A div         t6,at
  004021D0: 00007810 mfhi        t7
  004021D4: 00000000 nop
  004021D8: 00000000 nop
  004021DC: 25F80030 addiu       t8,t7,0x30
  004021E0: 8FB9001C lw          t9,0x1C(sp)
  004021E4: A3380000 sb          t8,0(t9)
  004021E8: 8FA8001C lw          t0,0x1C(sp)
  004021EC: 25090001 addiu       t1,t0,1
  004021F0: AFA9001C sw          t1,0x1C(sp)
  004021F4: 8FAA0030 lw          t2,0x30(sp)
  004021F8: 11400012 beq         zero,t2,00402244
  004021FC: 00000000 nop
  00402200: 8FAB0030 lw          t3,0x30(sp)
  00402204: 816C0000 lb          t4,0(t3)
  00402208: 1180000E beq         zero,t4,00402244
  0040220C: 00000000 nop
  00402210: 8FAD0030 lw          t5,0x30(sp)
  00402214: 81AE0000 lb          t6,0(t5)
  00402218: 8FAF001C lw          t7,0x1C(sp)
  0040221C: A1EE0000 sb          t6,0(t7)
  00402220: 8FB8001C lw          t8,0x1C(sp)
  00402224: 27190001 addiu       t9,t8,1
  00402228: AFB9001C sw          t9,0x1C(sp)
  0040222C: 8FA80030 lw          t0,0x30(sp)
  00402230: 25090001 addiu       t1,t0,1
  00402234: AFA90030 sw          t1,0x30(sp)
  00402238: 812A0000 lb          t2,0(t1)
  0040223C: 1540FFF4 bne         zero,t2,00402210
  00402240: 00000000 nop
  00402244: 240B0030 addiu       t3,zero,0x30
  00402248: 8FAC001C lw          t4,0x1C(sp)
  0040224C: A18B0000 sb          t3,0(t4)
  00402250: 8FA40024 lw          a0,0x24(sp)
  00402254: 3C050041 lui         a1,0x41
  00402258: 24A5EF80 addiu       a1,a1,0xEF80
  0040225C: 0C1005A1 jal         ShowMessageTop
  00402260: 00000000 nop
  00402264: 8FA40020 lw          a0,0x20(sp)
  00402268: 0C100829 jal         FlashMessageTop
  0040226C: 00000000 nop
  00402270: 10000001 b           00402278
  00402274: 00000000 nop
  00402278: 8FBF0014 lw          ra,0x14(sp)
  0040227C: 27BD0020 addiu       sp,sp,0x20
  00402280: 03E00008 jr          ra
  00402284: 00000000 nop
flashsqr:
  00402288: 27BDFFD8 addiu       sp,sp,0xFFD8
  0040228C: AFBF001C sw          ra,0x1C(sp)
  00402290: AFA40028 sw          a0,0x28(sp)
  00402294: AFA5002C sw          a1,0x2C(sp)
  00402298: AFA60030 sw          a2,0x30(sp)
  0040229C: AFA70034 sw          a3,0x34(sp)
  004022A0: 8FAE0040 lw          t6,0x40(sp)
  004022A4: 11C0000D beq         zero,t6,004022DC
  004022A8: 00000000 nop
  004022AC: 24040008 addiu       a0,zero,8
  004022B0: 3C0F0041 lui         t7,0x41
  004022B4: 8DEF11E8 lw          t7,0x11E8(t7)
  004022B8: 01E0F809 jalr        ra,t7
  004022BC: 00000000 nop
  004022C0: AFA20020 sw          v0,0x20(sp)
  004022C4: 8FA40028 lw          a0,0x28(sp)
  004022C8: 8FA50020 lw          a1,0x20(sp)
  004022CC: 3C180041 lui         t8,0x41
  004022D0: 8F1811E0 lw          t8,0x11E0(t8)
  004022D4: 0300F809 jalr        ra,t8
  004022D8: 00000000 nop
  004022DC: 3C040041 lui         a0,0x41
  004022E0: 8C84EFF8 lw          a0,0xEFF8(a0)
  004022E4: 3C190041 lui         t9,0x41
  004022E8: 8F391300 lw          t9,0x1300(t9)
  004022EC: 0320F809 jalr        ra,t9
  004022F0: 00000000 nop
  004022F4: AFA00024 sw          zero,0x24(sp)
  004022F8: 8FA80044 lw          t0,0x44(sp)
  004022FC: 1900003A blez        t0,004023E8
  00402300: 00000000 nop
  00402304: 8FA9003C lw          t1,0x3C(sp)
  00402308: 24010001 addiu       at,zero,1
  0040230C: 15210005 bne         at,t1,00402324
  00402310: 00000000 nop
  00402314: 240A0002 addiu       t2,zero,2
  00402318: AFAA003C sw          t2,0x3C(sp)
  0040231C: 10000003 b           0040232C
  00402320: 00000000 nop
  00402324: 240B0001 addiu       t3,zero,1
  00402328: AFAB003C sw          t3,0x3C(sp)
  0040232C: 8FAC003C lw          t4,0x3C(sp)
  00402330: 24010001 addiu       at,zero,1
  00402334: 1581000A bne         at,t4,00402360
  00402338: 00000000 nop
  0040233C: 8FA40028 lw          a0,0x28(sp)
  00402340: 3C050041 lui         a1,0x41
  00402344: 8CA5F4A4 lw          a1,0xF4A4(a1)
  00402348: 3C0D0041 lui         t5,0x41
  0040234C: 8DAD11E0 lw          t5,0x11E0(t5)
  00402350: 01A0F809 jalr        ra,t5
  00402354: 00000000 nop
  00402358: 10000008 b           0040237C
  0040235C: 00000000 nop
  00402360: 8FA40028 lw          a0,0x28(sp)
  00402364: 3C050041 lui         a1,0x41
  00402368: 8CA5F400 lw          a1,0xF400(a1)
  0040236C: 3C0E0041 lui         t6,0x41
  00402370: 8DCE11E0 lw          t6,0x11E0(t6)
  00402374: 01C0F809 jalr        ra,t6
  00402378: 00000000 nop
  0040237C: 8FA40028 lw          a0,0x28(sp)
  00402380: 24050002 addiu       a1,zero,2
  00402384: 3C0F0041 lui         t7,0x41
  00402388: 8DEF1200 lw          t7,0x1200(t7)
  0040238C: 01E0F809 jalr        ra,t7
  00402390: 00000000 nop
  00402394: 8FA40028 lw          a0,0x28(sp)
  00402398: 8FB8002C lw          t8,0x2C(sp)
  0040239C: 03002825 or          a1,t8,zero
  004023A0: 8FB90030 lw          t9,0x30(sp)
  004023A4: 03203025 or          a2,t9,zero
  004023A8: 8FA80034 lw          t0,0x34(sp)
  004023AC: 03083821 addu        a3,t8,t0
  004023B0: 8FA90038 lw          t1,0x38(sp)
  004023B4: 03295021 addu        t2,t9,t1
  004023B8: AFAA0010 sw          t2,0x10(sp)
  004023BC: 3C0B0041 lui         t3,0x41
  004023C0: 8D6B11E4 lw          t3,0x11E4(t3)
  004023C4: 0160F809 jalr        ra,t3
  004023C8: 00000000 nop
  004023CC: 8FAC0024 lw          t4,0x24(sp)
  004023D0: 258D0001 addiu       t5,t4,1
  004023D4: AFAD0024 sw          t5,0x24(sp)
  004023D8: 8FAE0044 lw          t6,0x44(sp)
  004023DC: 01AE082A slt         at,t5,t6
  004023E0: 1420FFC8 bne         zero,at,00402304
  004023E4: 00000000 nop
  004023E8: 8FAF0040 lw          t7,0x40(sp)
  004023EC: 11E00018 beq         zero,t7,00402450
  004023F0: 00000000 nop
  004023F4: 8FA40028 lw          a0,0x28(sp)
  004023F8: 3C050041 lui         a1,0x41
  004023FC: 8CA5F06C lw          a1,0xF06C(a1)
  00402400: 3C180041 lui         t8,0x41
  00402404: 8F1811E0 lw          t8,0x11E0(t8)
  00402408: 0300F809 jalr        ra,t8
  0040240C: 00000000 nop
  00402410: 8FA40028 lw          a0,0x28(sp)
  00402414: 8FA8002C lw          t0,0x2C(sp)
  00402418: 01002825 or          a1,t0,zero
  0040241C: 8FB90030 lw          t9,0x30(sp)
  00402420: 03203025 or          a2,t9,zero
  00402424: 8FA90034 lw          t1,0x34(sp)
  00402428: 01093821 addu        a3,t0,t1
  0040242C: 8FAA0038 lw          t2,0x38(sp)
  00402430: 032A5821 addu        t3,t9,t2
  00402434: AFAB0010 sw          t3,0x10(sp)
  00402438: 3C0C0041 lui         t4,0x41
  0040243C: 8D8C11E4 lw          t4,0x11E4(t4)
  00402440: 0180F809 jalr        ra,t4
  00402444: 00000000 nop
  00402448: 10000007 b           00402468
  0040244C: 00000000 nop
  00402450: 3C040041 lui         a0,0x41
  00402454: 8C84EF70 lw          a0,0xEF70(a0)
  00402458: 3C0D0041 lui         t5,0x41
  0040245C: 8DAD1300 lw          t5,0x1300(t5)
  00402460: 01A0F809 jalr        ra,t5
  00402464: 00000000 nop
  00402468: 10000001 b           00402470
  0040246C: 00000000 nop
  00402470: 8FBF001C lw          ra,0x1C(sp)
  00402474: 27BD0028 addiu       sp,sp,0x28
  00402478: 03E00008 jr          ra
  0040247C: 00000000 nop
RevMouseMove:
  00402480: 27BDFFD0 addiu       sp,sp,0xFFD0
  00402484: AFBF0014 sw          ra,0x14(sp)
  00402488: AFA40030 sw          a0,0x30(sp)
  0040248C: AFA50034 sw          a1,0x34(sp)
  00402490: 3C0E0041 lui         t6,0x41
  00402494: 8DCEEFF4 lw          t6,0xEFF4(t6)
  00402498: 000E78C0 sll         t7,t6,3
  0040249C: AFAF002C sw          t7,0x2C(sp)
  004024A0: 3C180041 lui         t8,0x41
  004024A4: 8F18F068 lw          t8,0xF068(t8)
  004024A8: 0018C8C0 sll         t9,t8,3
  004024AC: AFB90028 sw          t9,0x28(sp)
  004024B0: 8FA80030 lw          t0,0x30(sp)
  004024B4: 3C010041 lui         at,0x41
  004024B8: AC28EF18 sw          t0,0xEF18(at)
  004024BC: 8FA90034 lw          t1,0x34(sp)
  004024C0: 3C010041 lui         at,0x41
  004024C4: AC29EF1C sw          t1,0xEF1C(at)
  004024C8: 3C0A0041 lui         t2,0x41
  004024CC: 8D4AF068 lw          t2,0xF068(t2)
  004024D0: 11400005 beq         zero,t2,004024E8
  004024D4: 00000000 nop
  004024D8: 3C0B0041 lui         t3,0x41
  004024DC: 8D6BEFF4 lw          t3,0xEFF4(t3)
  004024E0: 15600003 bne         zero,t3,004024F0
  004024E4: 00000000 nop
  004024E8: 1000005B b           00402658
  004024EC: 00000000 nop
  004024F0: 3C0C0041 lui         t4,0x41
  004024F4: 8D8CEF20 lw          t4,0xEF20(t4)
  004024F8: AFAC0024 sw          t4,0x24(sp)
  004024FC: 8FAD0030 lw          t5,0x30(sp)
  00402500: 3C0E0041 lui         t6,0x41
  00402504: 8DCEF4A8 lw          t6,0xF4A8(t6)
  00402508: 01CD082A slt         at,t6,t5
  0040250C: 1020004D beq         zero,at,00402644
  00402510: 00000000 nop
  00402514: 8FAF0028 lw          t7,0x28(sp)
  00402518: 01CFC021 addu        t8,t6,t7
  0040251C: 01B8082A slt         at,t5,t8
  00402520: 10200048 beq         zero,at,00402644
  00402524: 00000000 nop
  00402528: 8FB90034 lw          t9,0x34(sp)
  0040252C: 3C080041 lui         t0,0x41
  00402530: 8D08F4A0 lw          t0,0xF4A0(t0)
  00402534: 0119082A slt         at,t0,t9
  00402538: 10200042 beq         zero,at,00402644
  0040253C: 00000000 nop
  00402540: 8FA9002C lw          t1,0x2C(sp)
  00402544: 01095021 addu        t2,t0,t1
  00402548: 032A082A slt         at,t9,t2
  0040254C: 1020003D beq         zero,at,00402644
  00402550: 00000000 nop
  00402554: 8FAB0030 lw          t3,0x30(sp)
  00402558: 3C0C0041 lui         t4,0x41
  0040255C: 8D8CF4A8 lw          t4,0xF4A8(t4)
  00402560: 016C7023 subu        t6,t3,t4
  00402564: 3C0F0041 lui         t7,0x41
  00402568: 8DEFF068 lw          t7,0xF068(t7)
  0040256C: 01CF001A div         t6,t7
  00402570: 15E00002 bne         zero,t7,0040257C
  00402574: 00000000 nop
  00402578: 0007000D break
  0040257C: 2401FFFF addiu       at,zero,0xFFFF
  00402580: 15E10004 bne         at,t7,00402594
  00402584: 3C018000 lui         at,0x8000
  00402588: 15C10002 bne         at,t6,00402594
  0040258C: 00000000 nop
  00402590: 0006000D break
  00402594: 00006812 mflo        t5
  00402598: 00000000 nop
  0040259C: 00000000 nop
  004025A0: AFAD0020 sw          t5,0x20(sp)
  004025A4: 8FB80034 lw          t8,0x34(sp)
  004025A8: 3C080041 lui         t0,0x41
  004025AC: 8D08F4A0 lw          t0,0xF4A0(t0)
  004025B0: 03084823 subu        t1,t8,t0
  004025B4: 3C190041 lui         t9,0x41
  004025B8: 8F39EFF4 lw          t9,0xEFF4(t9)
  004025BC: 0139001A div         t1,t9
  004025C0: 17200002 bne         zero,t9,004025CC
  004025C4: 00000000 nop
  004025C8: 0007000D break
  004025CC: 2401FFFF addiu       at,zero,0xFFFF
  004025D0: 17210004 bne         at,t9,004025E4
  004025D4: 3C018000 lui         at,0x8000
  004025D8: 15210002 bne         at,t1,004025E4
  004025DC: 00000000 nop
  004025E0: 0006000D break
  004025E4: 00005012 mflo        t2
  004025E8: 00000000 nop
  004025EC: 00000000 nop
  004025F0: AFAA001C sw          t2,0x1C(sp)
  004025F4: 8FAB0020 lw          t3,0x20(sp)
  004025F8: 000B6080 sll         t4,t3,2
  004025FC: 018B6021 addu        t4,t4,t3
  00402600: 000C6040 sll         t4,t4,1
  00402604: 8FAE001C lw          t6,0x1C(sp)
  00402608: 018E7821 addu        t7,t4,t6
  0040260C: 25ED000B addiu       t5,t7,0xB
  00402610: AFAD0018 sw          t5,0x18(sp)
  00402614: 3C040041 lui         a0,0x41
  00402618: 2484F0E0 addiu       a0,a0,0xF0E0
  0040261C: 8FA50018 lw          a1,0x18(sp)
  00402620: 24060002 addiu       a2,zero,2
  00402624: 24070003 addiu       a3,zero,3
  00402628: 0C101542 jal         legalcheck
  0040262C: 00000000 nop
  00402630: 10400004 beq         zero,v0,00402644
  00402634: 00000000 nop
  00402638: 3C180041 lui         t8,0x41
  0040263C: 8F18EF58 lw          t8,0xEF58(t8)
  00402640: AFB80024 sw          t8,0x24(sp)
  00402644: 8FA40024 lw          a0,0x24(sp)
  00402648: 3C080041 lui         t0,0x41
  0040264C: 8D081300 lw          t0,0x1300(t0)
  00402650: 0100F809 jalr        ra,t0
  00402654: 00000000 nop
  00402658: 10000001 b           00402660
  0040265C: 00000000 nop
  00402660: 8FBF0014 lw          ra,0x14(sp)
  00402664: 27BD0030 addiu       sp,sp,0x30
  00402668: 03E00008 jr          ra
  0040266C: 00000000 nop
ShowBestMove:
  00402670: 27BDFFC0 addiu       sp,sp,0xFFC0
  00402674: AFBF0024 sw          ra,0x24(sp)
  00402678: AFA40040 sw          a0,0x40(sp)
  0040267C: 3C0E0041 lui         t6,0x41
  00402680: 8DCEF0A4 lw          t6,0xF0A4(t6)
  00402684: 24010014 addiu       at,zero,0x14
  00402688: 15C10007 bne         at,t6,004026A8
  0040268C: 00000000 nop
  00402690: 3C0F0041 lui         t7,0x41
  00402694: 8DEFF048 lw          t7,0xF048(t7)
  00402698: 15E00003 bne         zero,t7,004026A8
  0040269C: 00000000 nop
  004026A0: 100000ED b           00402A58
  004026A4: 00000000 nop
  004026A8: 3C180041 lui         t8,0x41
  004026AC: 8F18E024 lw          t8,0xE024(t8)
  004026B0: 17000008 bne         zero,t8,004026D4
  004026B4: 00000000 nop
  004026B8: 8FA40040 lw          a0,0x40(sp)
  004026BC: 3C050041 lui         a1,0x41
  004026C0: 24A5EF30 addiu       a1,a1,0xEF30
  004026C4: 3C190041 lui         t9,0x41
  004026C8: 8F391334 lw          t9,0x1334(t9)
  004026CC: 0320F809 jalr        ra,t9
  004026D0: 00000000 nop
  004026D4: 24080001 addiu       t0,zero,1
  004026D8: 3C010041 lui         at,0x41
  004026DC: AC28E024 sw          t0,0xE024(at)
  004026E0: 3C040041 lui         a0,0x41
  004026E4: 8C84EF70 lw          a0,0xEF70(a0)
  004026E8: 3C090041 lui         t1,0x41
  004026EC: 8D291300 lw          t1,0x1300(t1)
  004026F0: 0120F809 jalr        ra,t1
  004026F4: 00000000 nop
  004026F8: 240A0001 addiu       t2,zero,1
  004026FC: 3C010041 lui         at,0x41
  00402700: AC2AE020 sw          t2,0xE020(at)
  00402704: 3C0B0041 lui         t3,0x41
  00402708: 8D6BF048 lw          t3,0xF048(t3)
  0040270C: 11600007 beq         zero,t3,0040272C
  00402710: 00000000 nop
  00402714: 240C0004 addiu       t4,zero,4
  00402718: AFAC003C sw          t4,0x3C(sp)
  0040271C: 240D0002 addiu       t5,zero,2
  00402720: AFAD0038 sw          t5,0x38(sp)
  00402724: 1000005B b           00402894
  00402728: 00000000 nop
  0040272C: 3C0E0041 lui         t6,0x41
  00402730: 8DCEF064 lw          t6,0xF064(t6)
  00402734: 24010001 addiu       at,zero,1
  00402738: 15C10033 bne         at,t6,00402808
  0040273C: 00000000 nop
  00402740: AFA00034 sw          zero,0x34(sp)
  00402744: 3C0F0041 lui         t7,0x41
  00402748: 25EFE054 addiu       t7,t7,0xE054
  0040274C: AFAF0030 sw          t7,0x30(sp)
  00402750: 8FB80030 lw          t8,0x30(sp)
  00402754: 8F190000 lw          t9,0(t8)
  00402758: AFB9002C sw          t9,0x2C(sp)
  0040275C: 8FA80034 lw          t0,0x34(sp)
  00402760: 15000017 bne         zero,t0,004027C0
  00402764: 00000000 nop
  00402768: 8FA90030 lw          t1,0x30(sp)
  0040276C: 8D2A0000 lw          t2,0(t1)
  00402770: AFAA002C sw          t2,0x2C(sp)
  00402774: 3C040041 lui         a0,0x41
  00402778: 2484F0E0 addiu       a0,a0,0xF0E0
  0040277C: 8FA5002C lw          a1,0x2C(sp)
  00402780: 24060002 addiu       a2,zero,2
  00402784: 24070003 addiu       a3,zero,3
  00402788: 0C101542 jal         legalcheck
  0040278C: 00000000 nop
  00402790: 10400005 beq         zero,v0,004027A8
  00402794: 00000000 nop
  00402798: 240B0001 addiu       t3,zero,1
  0040279C: AFAB0034 sw          t3,0x34(sp)
  004027A0: 10000004 b           004027B4
  004027A4: 00000000 nop
  004027A8: 8FAC0030 lw          t4,0x30(sp)
  004027AC: 258D0004 addiu       t5,t4,4
  004027B0: AFAD0030 sw          t5,0x30(sp)
  004027B4: 8FAE0034 lw          t6,0x34(sp)
  004027B8: 11C0FFEB beq         zero,t6,00402768
  004027BC: 00000000 nop
  004027C0: 8FAF002C lw          t7,0x2C(sp)
  004027C4: 25F8FFF5 addiu       t8,t7,0xFFF5
  004027C8: 2401000A addiu       at,zero,0xA
  004027CC: 0301001A div         t8,at
  004027D0: 0000C810 mfhi        t9
  004027D4: 00000000 nop
  004027D8: 00000000 nop
  004027DC: AFB90038 sw          t9,0x38(sp)
  004027E0: 8FA8002C lw          t0,0x2C(sp)
  004027E4: 2509FFF5 addiu       t1,t0,0xFFF5
  004027E8: 2401000A addiu       at,zero,0xA
  004027EC: 0121001A div         t1,at
  004027F0: 00005012 mflo        t2
  004027F4: 00000000 nop
  004027F8: 00000000 nop
  004027FC: AFAA003C sw          t2,0x3C(sp)
  00402800: 10000024 b           00402894
  00402804: 00000000 nop
  00402808: 3C040041 lui         a0,0x41
  0040280C: 2484F0E0 addiu       a0,a0,0xF0E0
  00402810: 3C0B0041 lui         t3,0x41
  00402814: 256BEFD0 addiu       t3,t3,0xEFD0
  00402818: 8D650000 lw          a1,0(t3)
  0040281C: 24060003 addiu       a2,zero,3
  00402820: 24070002 addiu       a3,zero,2
  00402824: 240C0001 addiu       t4,zero,1
  00402828: AFAC0010 sw          t4,0x10(sp)
  0040282C: 240D8001 addiu       t5,zero,0x8001
  00402830: AFAD0014 sw          t5,0x14(sp)
  00402834: 240E7FFF addiu       t6,zero,0x7FFF
  00402838: AFAE0018 sw          t6,0x18(sp)
  0040283C: 0C1016E3 jal         minmax
  00402840: 00000000 nop
  00402844: 3C0F0041 lui         t7,0x41
  00402848: 25EFEFD0 addiu       t7,t7,0xEFD0
  0040284C: 8DF80004 lw          t8,4(t7)
  00402850: 2719FFF5 addiu       t9,t8,0xFFF5
  00402854: 2401000A addiu       at,zero,0xA
  00402858: 0321001A div         t9,at
  0040285C: 00004010 mfhi        t0
  00402860: 00000000 nop
  00402864: 00000000 nop
  00402868: AFA80038 sw          t0,0x38(sp)
  0040286C: 3C090041 lui         t1,0x41
  00402870: 2529EFD0 addiu       t1,t1,0xEFD0
  00402874: 8D2A0004 lw          t2,4(t1)
  00402878: 254BFFF5 addiu       t3,t2,0xFFF5
  0040287C: 2401000A addiu       at,zero,0xA
  00402880: 0161001A div         t3,at
  00402884: 00006012 mflo        t4
  00402888: 00000000 nop
  0040288C: 00000000 nop
  00402890: AFAC003C sw          t4,0x3C(sp)
  00402894: 8FAD003C lw          t5,0x3C(sp)
  00402898: 3C0E0041 lui         t6,0x41
  0040289C: 8DCEF068 lw          t6,0xF068(t6)
  004028A0: 01AE0019 multu       t5,t6
  004028A4: 00000000 nop
  004028A8: 00000000 nop
  004028AC: 00007812 mflo        t7
  004028B0: 00000000 nop
  004028B4: 00000000 nop
  004028B8: 3C180041 lui         t8,0x41
  004028BC: 8F18F4A8 lw          t8,0xF4A8(t8)
  004028C0: 01F8C821 addu        t9,t7,t8
  004028C4: 05C10003 bgez        t6,004028D4
  004028C8: 000E4043 sra         t0,t6,1
  004028CC: 25C10001 addiu       at,t6,1
  004028D0: 00014043 sra         t0,at,1
  004028D4: 03284821 addu        t1,t9,t0
  004028D8: 3C010041 lui         at,0x41
  004028DC: AC29EF18 sw          t1,0xEF18(at)
  004028E0: 8FAA0038 lw          t2,0x38(sp)
  004028E4: 3C0B0041 lui         t3,0x41
  004028E8: 8D6BEFF4 lw          t3,0xEFF4(t3)
  004028EC: 014B0019 multu       t2,t3
  004028F0: 00000000 nop
  004028F4: 00000000 nop
  004028F8: 00006012 mflo        t4
  004028FC: 00000000 nop
  00402900: 00000000 nop
  00402904: 3C0D0041 lui         t5,0x41
  00402908: 8DADF4A0 lw          t5,0xF4A0(t5)
  0040290C: 018D7821 addu        t7,t4,t5
  00402910: 05610003 bgez        t3,00402920
  00402914: 000BC043 sra         t8,t3,1
  00402918: 25610001 addiu       at,t3,1
  0040291C: 0001C043 sra         t8,at,1
  00402920: 01F87021 addu        t6,t7,t8
  00402924: 3C010041 lui         at,0x41
  00402928: AC2EEF1C sw          t6,0xEF1C(at)
  0040292C: 8FA40040 lw          a0,0x40(sp)
  00402930: 0C100400 jal         UpdateCursor
  00402934: 00000000 nop
  00402938: 8FA40040 lw          a0,0x40(sp)
  0040293C: 3C190041 lui         t9,0x41
  00402940: 8F3912B8 lw          t9,0x12B8(t9)
  00402944: 0320F809 jalr        ra,t9
  00402948: 00000000 nop
  0040294C: AFA20028 sw          v0,0x28(sp)
  00402950: 8FA8003C lw          t0,0x3C(sp)
  00402954: 3C090041 lui         t1,0x41
  00402958: 8D29F068 lw          t1,0xF068(t1)
  0040295C: 01090019 multu       t0,t1
  00402960: 00000000 nop
  00402964: 00000000 nop
  00402968: 00005012 mflo        t2
  0040296C: 00000000 nop
  00402970: 00000000 nop
  00402974: 3C0C0041 lui         t4,0x41
  00402978: 8D8CF4A8 lw          t4,0xF4A8(t4)
  0040297C: 014C6821 addu        t5,t2,t4
  00402980: 3C0B0041 lui         t3,0x41
  00402984: 8D6BF454 lw          t3,0xF454(t3)
  00402988: 000B7840 sll         t7,t3,1
  0040298C: 01AFC021 addu        t8,t5,t7
  00402990: AFB8003C sw          t8,0x3C(sp)
  00402994: 8FAE0038 lw          t6,0x38(sp)
  00402998: 3C190041 lui         t9,0x41
  0040299C: 8F39EFF4 lw          t9,0xEFF4(t9)
  004029A0: 01D90019 multu       t6,t9
  004029A4: 00000000 nop
  004029A8: 00000000 nop
  004029AC: 00004012 mflo        t0
  004029B0: 00000000 nop
  004029B4: 00000000 nop
  004029B8: 3C090041 lui         t1,0x41
  004029BC: 8D29F4A0 lw          t1,0xF4A0(t1)
  004029C0: 01095021 addu        t2,t0,t1
  004029C4: 254C0002 addiu       t4,t2,2
  004029C8: AFAC0038 sw          t4,0x38(sp)
  004029CC: 8FA40028 lw          a0,0x28(sp)
  004029D0: 8FA5003C lw          a1,0x3C(sp)
  004029D4: 8FA60038 lw          a2,0x38(sp)
  004029D8: 3C0B0041 lui         t3,0x41
  004029DC: 8D6BF068 lw          t3,0xF068(t3)
  004029E0: 3C0D0041 lui         t5,0x41
  004029E4: 8DADF454 lw          t5,0xF454(t5)
  004029E8: 000D7880 sll         t7,t5,2
  004029EC: 016F3823 subu        a3,t3,t7
  004029F0: 3C180041 lui         t8,0x41
  004029F4: 8F18EFF4 lw          t8,0xEFF4(t8)
  004029F8: 270EFFFC addiu       t6,t8,0xFFFC
  004029FC: AFAE0010 sw          t6,0x10(sp)
  00402A00: 24190003 addiu       t9,zero,3
  00402A04: AFB90014 sw          t9,0x14(sp)
  00402A08: 24080001 addiu       t0,zero,1
  00402A0C: AFA80018 sw          t0,0x18(sp)
  00402A10: 24090003 addiu       t1,zero,3
  00402A14: AFA9001C sw          t1,0x1C(sp)
  00402A18: 0C1008A2 jal         flashsqr
  00402A1C: 00000000 nop
  00402A20: 3C010041 lui         at,0x41
  00402A24: AC20E020 sw          zero,0xE020(at)
  00402A28: 8FA40040 lw          a0,0x40(sp)
  00402A2C: 8FA50028 lw          a1,0x28(sp)
  00402A30: 3C0A0041 lui         t2,0x41
  00402A34: 8D4A12EC lw          t2,0x12EC(t2)
  00402A38: 0140F809 jalr        ra,t2
  00402A3C: 00000000 nop
  00402A40: 3C0C0041 lui         t4,0x41
  00402A44: 258CEF18 addiu       t4,t4,0xEF18
  00402A48: 8D840000 lw          a0,0(t4)
  00402A4C: 8D850004 lw          a1,4(t4)
  00402A50: 0C100920 jal         RevMouseMove
  00402A54: 00000000 nop
  00402A58: 10000001 b           00402A60
  00402A5C: 00000000 nop
  00402A60: 8FBF0024 lw          ra,0x24(sp)
  00402A64: 27BD0040 addiu       sp,sp,0x40
  00402A68: 03E00008 jr          ra
  00402A6C: 00000000 nop
gameover:
  00402A70: 27BDFFC0 addiu       sp,sp,0xFFC0
  00402A74: AFBF001C sw          ra,0x1C(sp)
  00402A78: AFA40040 sw          a0,0x40(sp)
  00402A7C: AFA50044 sw          a1,0x44(sp)
  00402A80: AFA60048 sw          a2,0x48(sp)
  00402A84: AFA7004C sw          a3,0x4C(sp)
  00402A88: 3C0E0041 lui         t6,0x41
  00402A8C: 25CEE054 addiu       t6,t6,0xE054
  00402A90: AFAE003C sw          t6,0x3C(sp)
  00402A94: 240F0014 addiu       t7,zero,0x14
  00402A98: 3C010041 lui         at,0x41
  00402A9C: AC2FF0A4 sw          t7,0xF0A4(at)
  00402AA0: 24180014 addiu       t8,zero,0x14
  00402AA4: AFB80038 sw          t8,0x38(sp)
  00402AA8: 8FB9003C lw          t9,0x3C(sp)
  00402AAC: 8F280000 lw          t0,0(t9)
  00402AB0: AFA80034 sw          t0,0x34(sp)
  00402AB4: AFA80024 sw          t0,0x24(sp)
  00402AB8: 27290004 addiu       t1,t9,4
  00402ABC: AFA9003C sw          t1,0x3C(sp)
  00402AC0: 8FAA0024 lw          t2,0x24(sp)
  00402AC4: 11400021 beq         zero,t2,00402B4C
  00402AC8: 00000000 nop
  00402ACC: 8FA40048 lw          a0,0x48(sp)
  00402AD0: 8FA50034 lw          a1,0x34(sp)
  00402AD4: 24060002 addiu       a2,zero,2
  00402AD8: 24070003 addiu       a3,zero,3
  00402ADC: 0C101542 jal         legalcheck
  00402AE0: 00000000 nop
  00402AE4: 10400006 beq         zero,v0,00402B00
  00402AE8: 00000000 nop
  00402AEC: 8FAB0034 lw          t3,0x34(sp)
  00402AF0: 3C010041 lui         at,0x41
  00402AF4: AC2BF0A4 sw          t3,0xF0A4(at)
  00402AF8: 1000000B b           00402B28
  00402AFC: 00000000 nop
  00402B00: 8FA40048 lw          a0,0x48(sp)
  00402B04: 8FA50034 lw          a1,0x34(sp)
  00402B08: 24060003 addiu       a2,zero,3
  00402B0C: 24070002 addiu       a3,zero,2
  00402B10: 0C101542 jal         legalcheck
  00402B14: 00000000 nop
  00402B18: 10400003 beq         zero,v0,00402B28
  00402B1C: 00000000 nop
  00402B20: 8FAC0034 lw          t4,0x34(sp)
  00402B24: AFAC0038 sw          t4,0x38(sp)
  00402B28: 8FAD003C lw          t5,0x3C(sp)
  00402B2C: 8DAE0000 lw          t6,0(t5)
  00402B30: AFAE0034 sw          t6,0x34(sp)
  00402B34: AFAE0024 sw          t6,0x24(sp)
  00402B38: 25AF0004 addiu       t7,t5,4
  00402B3C: AFAF003C sw          t7,0x3C(sp)
  00402B40: 8FB80024 lw          t8,0x24(sp)
  00402B44: 1700FFE1 bne         zero,t8,00402ACC
  00402B48: 00000000 nop
  00402B4C: 3C080041 lui         t0,0x41
  00402B50: 8D08F0A4 lw          t0,0xF0A4(t0)
  00402B54: 24010014 addiu       at,zero,0x14
  00402B58: 15010063 bne         at,t0,00402CE8
  00402B5C: 00000000 nop
  00402B60: 8FB9004C lw          t9,0x4C(sp)
  00402B64: 24010014 addiu       at,zero,0x14
  00402B68: 13210005 beq         at,t9,00402B80
  00402B6C: 00000000 nop
  00402B70: 8FA90038 lw          t1,0x38(sp)
  00402B74: 24010014 addiu       at,zero,0x14
  00402B78: 15210051 bne         at,t1,00402CC0
  00402B7C: 00000000 nop
  00402B80: AFA00030 sw          zero,0x30(sp)
  00402B84: AFA0002C sw          zero,0x2C(sp)
  00402B88: 240A000B addiu       t2,zero,0xB
  00402B8C: AFAA0028 sw          t2,0x28(sp)
  00402B90: 8FAB0048 lw          t3,0x48(sp)
  00402B94: 8FAC0028 lw          t4,0x28(sp)
  00402B98: 016C7021 addu        t6,t3,t4
  00402B9C: 91CD0000 lbu         t5,0(t6)
  00402BA0: 24010002 addiu       at,zero,2
  00402BA4: 15A10006 bne         at,t5,00402BC0
  00402BA8: 00000000 nop
  00402BAC: 8FAF0030 lw          t7,0x30(sp)
  00402BB0: 25F80001 addiu       t8,t7,1
  00402BB4: AFB80030 sw          t8,0x30(sp)
  00402BB8: 1000000B b           00402BE8
  00402BBC: 00000000 nop
  00402BC0: 8FA80048 lw          t0,0x48(sp)
  00402BC4: 8FB90028 lw          t9,0x28(sp)
  00402BC8: 01194821 addu        t1,t0,t9
  00402BCC: 912A0000 lbu         t2,0(t1)
  00402BD0: 24010003 addiu       at,zero,3
  00402BD4: 15410004 bne         at,t2,00402BE8
  00402BD8: 00000000 nop
  00402BDC: 8FAB002C lw          t3,0x2C(sp)
  00402BE0: 256C0001 addiu       t4,t3,1
  00402BE4: AFAC002C sw          t4,0x2C(sp)
  00402BE8: 8FAE0028 lw          t6,0x28(sp)
  00402BEC: 25CD0001 addiu       t5,t6,1
  00402BF0: AFAD0028 sw          t5,0x28(sp)
  00402BF4: 29A10059 slti        at,t5,0x59
  00402BF8: 1420FFE5 bne         zero,at,00402B90
  00402BFC: 00000000 nop
  00402C00: 8FAF0030 lw          t7,0x30(sp)
  00402C04: 8FB8002C lw          t8,0x2C(sp)
  00402C08: 030F082A slt         at,t8,t7
  00402C0C: 1020000F beq         zero,at,00402C4C
  00402C10: 00000000 nop
  00402C14: 8FA40040 lw          a0,0x40(sp)
  00402C18: 8FA50044 lw          a1,0x44(sp)
  00402C1C: 3C060041 lui         a2,0x41
  00402C20: 24C6F080 addiu       a2,a2,0xF080
  00402C24: 8FA80030 lw          t0,0x30(sp)
  00402C28: 8FB9002C lw          t9,0x2C(sp)
  00402C2C: 01193823 subu        a3,t0,t9
  00402C30: 3C090041 lui         t1,0x41
  00402C34: 2529F0C0 addiu       t1,t1,0xF0C0
  00402C38: AFA90010 sw          t1,0x10(sp)
  00402C3C: 0C100840 jal         RevMessage
  00402C40: 00000000 nop
  00402C44: 1000001C b           00402CB8
  00402C48: 00000000 nop
  00402C4C: 8FAA0030 lw          t2,0x30(sp)
  00402C50: 8FAB002C lw          t3,0x2C(sp)
  00402C54: 014B082A slt         at,t2,t3
  00402C58: 1020000F beq         zero,at,00402C98
  00402C5C: 00000000 nop
  00402C60: 8FA40040 lw          a0,0x40(sp)
  00402C64: 8FA50044 lw          a1,0x44(sp)
  00402C68: 3C060041 lui         a2,0x41
  00402C6C: 24C6F460 addiu       a2,a2,0xF460
  00402C70: 8FAC002C lw          t4,0x2C(sp)
  00402C74: 8FAE0030 lw          t6,0x30(sp)
  00402C78: 018E3823 subu        a3,t4,t6
  00402C7C: 3C0D0041 lui         t5,0x41
  00402C80: 25ADF480 addiu       t5,t5,0xF480
  00402C84: AFAD0010 sw          t5,0x10(sp)
  00402C88: 0C100840 jal         RevMessage
  00402C8C: 00000000 nop
  00402C90: 10000009 b           00402CB8
  00402C94: 00000000 nop
  00402C98: 8FA40040 lw          a0,0x40(sp)
  00402C9C: 8FA50044 lw          a1,0x44(sp)
  00402CA0: 3C060041 lui         a2,0x41
  00402CA4: 24C6F410 addiu       a2,a2,0xF410
  00402CA8: 00003825 or          a3,zero,zero
  00402CAC: AFA00010 sw          zero,0x10(sp)
  00402CB0: 0C100840 jal         RevMessage
  00402CB4: 00000000 nop
  00402CB8: 10000009 b           00402CE0
  00402CBC: 00000000 nop
  00402CC0: 8FA40040 lw          a0,0x40(sp)
  00402CC4: 8FA50044 lw          a1,0x44(sp)
  00402CC8: 3C060041 lui         a2,0x41
  00402CCC: 24C6EE80 addiu       a2,a2,0xEE80
  00402CD0: 00003825 or          a3,zero,zero
  00402CD4: AFA00010 sw          zero,0x10(sp)
  00402CD8: 0C100840 jal         RevMessage
  00402CDC: 00000000 nop
  00402CE0: 1000000D b           00402D18
  00402CE4: 00000000 nop
  00402CE8: 8FAF004C lw          t7,0x4C(sp)
  00402CEC: 24010014 addiu       at,zero,0x14
  00402CF0: 15E10009 bne         at,t7,00402D18
  00402CF4: 00000000 nop
  00402CF8: 8FA40040 lw          a0,0x40(sp)
  00402CFC: 8FA50044 lw          a1,0x44(sp)
  00402D00: 3C060041 lui         a2,0x41
  00402D04: 24C6F430 addiu       a2,a2,0xF430
  00402D08: 00003825 or          a3,zero,zero
  00402D0C: AFA00010 sw          zero,0x10(sp)
  00402D10: 0C100840 jal         RevMessage
  00402D14: 00000000 nop
  00402D18: 10000001 b           00402D20
  00402D1C: 00000000 nop
  00402D20: 8FBF001C lw          ra,0x1C(sp)
  00402D24: 27BD0040 addiu       sp,sp,0x40
  00402D28: 03E00008 jr          ra
  00402D2C: 00000000 nop
paintmove:
  00402D30: 27BDFFB8 addiu       sp,sp,0xFFB8
  00402D34: AFBF0024 sw          ra,0x24(sp)
  00402D38: AFA40048 sw          a0,0x48(sp)
  00402D3C: AFA5004C sw          a1,0x4C(sp)
  00402D40: AFA60050 sw          a2,0x50(sp)
  00402D44: AFA70054 sw          a3,0x54(sp)
  00402D48: 8FAE004C lw          t6,0x4C(sp)
  00402D4C: 24010014 addiu       at,zero,0x14
  00402D50: 11C10113 beq         at,t6,004031A0
  00402D54: 00000000 nop
  00402D58: 93AF0050 lbu         t7,0x50(sp)
  00402D5C: 24010003 addiu       at,zero,3
  00402D60: 15E1000D bne         at,t7,00402D98
  00402D64: 00000000 nop
  00402D68: 3C040041 lui         a0,0x41
  00402D6C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00402D70: 3C050041 lui         a1,0x41
  00402D74: 8CA5F4A4 lw          a1,0xF4A4(a1)
  00402D78: 3C180041 lui         t8,0x41
  00402D7C: 8F1811E0 lw          t8,0x11E0(t8)
  00402D80: 0300F809 jalr        ra,t8
  00402D84: 00000000 nop
  00402D88: 24190001 addiu       t9,zero,1
  00402D8C: AFB90044 sw          t9,0x44(sp)
  00402D90: 1000000B b           00402DC0
  00402D94: 00000000 nop
  00402D98: 3C040041 lui         a0,0x41
  00402D9C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00402DA0: 3C050041 lui         a1,0x41
  00402DA4: 8CA5F400 lw          a1,0xF400(a1)
  00402DA8: 3C080041 lui         t0,0x41
  00402DAC: 8D0811E0 lw          t0,0x11E0(t0)
  00402DB0: 0100F809 jalr        ra,t0
  00402DB4: 00000000 nop
  00402DB8: 24090002 addiu       t1,zero,2
  00402DBC: AFA90044 sw          t1,0x44(sp)
  00402DC0: 8FAA004C lw          t2,0x4C(sp)
  00402DC4: 254BFFF5 addiu       t3,t2,0xFFF5
  00402DC8: 2401000A addiu       at,zero,0xA
  00402DCC: 0161001A div         t3,at
  00402DD0: 00006012 mflo        t4
  00402DD4: 00000000 nop
  00402DD8: 00000000 nop
  00402DDC: 3C0D0041 lui         t5,0x41
  00402DE0: 8DADF068 lw          t5,0xF068(t5)
  00402DE4: 018D0019 multu       t4,t5
  00402DE8: 00000000 nop
  00402DEC: 00000000 nop
  00402DF0: 00007012 mflo        t6
  00402DF4: 00000000 nop
  00402DF8: 00000000 nop
  00402DFC: 3C0F0041 lui         t7,0x41
  00402E00: 8DEFF4A8 lw          t7,0xF4A8(t7)
  00402E04: 01CFC021 addu        t8,t6,t7
  00402E08: 3C190041 lui         t9,0x41
  00402E0C: 8F39F454 lw          t9,0xF454(t9)
  00402E10: 00194040 sll         t0,t9,1
  00402E14: 03084821 addu        t1,t8,t0
  00402E18: AFA90040 sw          t1,0x40(sp)
  00402E1C: 8FAA004C lw          t2,0x4C(sp)
  00402E20: 254BFFF5 addiu       t3,t2,0xFFF5
  00402E24: 2401000A addiu       at,zero,0xA
  00402E28: 0161001A div         t3,at
  00402E2C: 00006010 mfhi        t4
  00402E30: 00000000 nop
  00402E34: 00000000 nop
  00402E38: 3C0D0041 lui         t5,0x41
  00402E3C: 8DADEFF4 lw          t5,0xEFF4(t5)
  00402E40: 018D0019 multu       t4,t5
  00402E44: 00000000 nop
  00402E48: 00000000 nop
  00402E4C: 00007012 mflo        t6
  00402E50: 00000000 nop
  00402E54: 00000000 nop
  00402E58: 3C0F0041 lui         t7,0x41
  00402E5C: 8DEFF4A0 lw          t7,0xF4A0(t7)
  00402E60: 01CFC821 addu        t9,t6,t7
  00402E64: 27380002 addiu       t8,t9,2
  00402E68: AFB8003C sw          t8,0x3C(sp)
  00402E6C: 3C040041 lui         a0,0x41
  00402E70: 8C84EEA0 lw          a0,0xEEA0(a0)
  00402E74: 8FA80040 lw          t0,0x40(sp)
  00402E78: 01002825 or          a1,t0,zero
  00402E7C: 8FA9003C lw          t1,0x3C(sp)
  00402E80: 01203025 or          a2,t1,zero
  00402E84: 3C0A0041 lui         t2,0x41
  00402E88: 8D4AF068 lw          t2,0xF068(t2)
  00402E8C: 010A5821 addu        t3,t0,t2
  00402E90: 3C0C0041 lui         t4,0x41
  00402E94: 8D8CF454 lw          t4,0xF454(t4)
  00402E98: 000C6880 sll         t5,t4,2
  00402E9C: 016D3823 subu        a3,t3,t5
  00402EA0: 3C0E0041 lui         t6,0x41
  00402EA4: 8DCEEFF4 lw          t6,0xEFF4(t6)
  00402EA8: 012E7821 addu        t7,t1,t6
  00402EAC: 25F9FFFC addiu       t9,t7,0xFFFC
  00402EB0: AFB90010 sw          t9,0x10(sp)
  00402EB4: 3C180041 lui         t8,0x41
  00402EB8: 8F1811E4 lw          t8,0x11E4(t8)
  00402EBC: 0300F809 jalr        ra,t8
  00402EC0: 00000000 nop
  00402EC4: 3C040041 lui         a0,0x41
  00402EC8: 8C84EEA0 lw          a0,0xEEA0(a0)
  00402ECC: 8FA50040 lw          a1,0x40(sp)
  00402ED0: 8FA6003C lw          a2,0x3C(sp)
  00402ED4: 3C080041 lui         t0,0x41
  00402ED8: 8D08F068 lw          t0,0xF068(t0)
  00402EDC: 3C0A0041 lui         t2,0x41
  00402EE0: 8D4AF454 lw          t2,0xF454(t2)
  00402EE4: 000A6080 sll         t4,t2,2
  00402EE8: 010C3823 subu        a3,t0,t4
  00402EEC: 3C0B0041 lui         t3,0x41
  00402EF0: 8D6BEFF4 lw          t3,0xEFF4(t3)
  00402EF4: 256DFFFC addiu       t5,t3,0xFFFC
  00402EF8: AFAD0010 sw          t5,0x10(sp)
  00402EFC: 8FA90044 lw          t1,0x44(sp)
  00402F00: AFA90014 sw          t1,0x14(sp)
  00402F04: AFA00018 sw          zero,0x18(sp)
  00402F08: 240E0004 addiu       t6,zero,4
  00402F0C: AFAE001C sw          t6,0x1C(sp)
  00402F10: 0C1008A2 jal         flashsqr
  00402F14: 00000000 nop
  00402F18: 3C0F0041 lui         t7,0x41
  00402F1C: 25EFE028 addiu       t7,t7,0xE028
  00402F20: AFAF0038 sw          t7,0x38(sp)
  00402F24: 8FB90038 lw          t9,0x38(sp)
  00402F28: 8F380000 lw          t8,0(t9)
  00402F2C: AFB80034 sw          t8,0x34(sp)
  00402F30: AFB8002C sw          t8,0x2C(sp)
  00402F34: 272A0004 addiu       t2,t9,4
  00402F38: AFAA0038 sw          t2,0x38(sp)
  00402F3C: 8FA8002C lw          t0,0x2C(sp)
  00402F40: 11000092 beq         zero,t0,0040318C
  00402F44: 00000000 nop
  00402F48: 8FAC004C lw          t4,0x4C(sp)
  00402F4C: AFAC0030 sw          t4,0x30(sp)
  00402F50: 8FAB0030 lw          t3,0x30(sp)
  00402F54: 8FAD0034 lw          t5,0x34(sp)
  00402F58: 016D4821 addu        t1,t3,t5
  00402F5C: AFA90030 sw          t1,0x30(sp)
  00402F60: 8FAE0048 lw          t6,0x48(sp)
  00402F64: 01C97821 addu        t7,t6,t1
  00402F68: 91F80000 lbu         t8,0(t7)
  00402F6C: 93B90054 lbu         t9,0x54(sp)
  00402F70: 1719007D bne         t9,t8,00403168
  00402F74: 00000000 nop
  00402F78: 8FAA0030 lw          t2,0x30(sp)
  00402F7C: 8FA80034 lw          t0,0x34(sp)
  00402F80: 01486021 addu        t4,t2,t0
  00402F84: AFAC0030 sw          t4,0x30(sp)
  00402F88: 8FAB0048 lw          t3,0x48(sp)
  00402F8C: 016C6821 addu        t5,t3,t4
  00402F90: 91AE0000 lbu         t6,0(t5)
  00402F94: 93A90054 lbu         t1,0x54(sp)
  00402F98: 15C9000B bne         t1,t6,00402FC8
  00402F9C: 00000000 nop
  00402FA0: 8FAF0030 lw          t7,0x30(sp)
  00402FA4: 8FB80034 lw          t8,0x34(sp)
  00402FA8: 01F8C821 addu        t9,t7,t8
  00402FAC: AFB90030 sw          t9,0x30(sp)
  00402FB0: 8FAA0048 lw          t2,0x48(sp)
  00402FB4: 01594021 addu        t0,t2,t9
  00402FB8: 910B0000 lbu         t3,0(t0)
  00402FBC: 93AC0054 lbu         t4,0x54(sp)
  00402FC0: 116CFFF7 beq         t4,t3,00402FA0
  00402FC4: 00000000 nop
  00402FC8: 8FAD0048 lw          t5,0x48(sp)
  00402FCC: 8FAE0030 lw          t6,0x30(sp)
  00402FD0: 01AE4821 addu        t1,t5,t6
  00402FD4: 912F0000 lbu         t7,0(t1)
  00402FD8: 93B80050 lbu         t8,0x50(sp)
  00402FDC: 15F80062 bne         t8,t7,00403168
  00402FE0: 00000000 nop
  00402FE4: 8FAA0030 lw          t2,0x30(sp)
  00402FE8: 8FB90034 lw          t9,0x34(sp)
  00402FEC: 01594023 subu        t0,t2,t9
  00402FF0: AFA80030 sw          t0,0x30(sp)
  00402FF4: 8FAB0048 lw          t3,0x48(sp)
  00402FF8: 01686021 addu        t4,t3,t0
  00402FFC: 918D0000 lbu         t5,0(t4)
  00403000: 93AE0054 lbu         t6,0x54(sp)
  00403004: 15AE0058 bne         t6,t5,00403168
  00403008: 00000000 nop
  0040300C: 93A90050 lbu         t1,0x50(sp)
  00403010: 8FAF0048 lw          t7,0x48(sp)
  00403014: 8FB80030 lw          t8,0x30(sp)
  00403018: 01F85021 addu        t2,t7,t8
  0040301C: A1490000 sb          t1,0(t2)
  00403020: 8FB90048 lw          t9,0x48(sp)
  00403024: 8FAB0030 lw          t3,0x30(sp)
  00403028: 032B4021 addu        t0,t9,t3
  0040302C: 910C0000 lbu         t4,0(t0)
  00403030: 3C010041 lui         at,0x41
  00403034: 002B0821 addu        at,at,t3
  00403038: A02CF0E0 sb          t4,0xF0E0(at)
  0040303C: 8FAD0030 lw          t5,0x30(sp)
  00403040: 25AEFFF5 addiu       t6,t5,0xFFF5
  00403044: 2401000A addiu       at,zero,0xA
  00403048: 01C1001A div         t6,at
  0040304C: 00007812 mflo        t7
  00403050: 00000000 nop
  00403054: 00000000 nop
  00403058: 3C180041 lui         t8,0x41
  0040305C: 8F18F068 lw          t8,0xF068(t8)
  00403060: 01F80019 multu       t7,t8
  00403064: 00000000 nop
  00403068: 00000000 nop
  0040306C: 00004812 mflo        t1
  00403070: 00000000 nop
  00403074: 00000000 nop
  00403078: 3C0A0041 lui         t2,0x41
  0040307C: 8D4AF4A8 lw          t2,0xF4A8(t2)
  00403080: 012AC821 addu        t9,t1,t2
  00403084: 3C080041 lui         t0,0x41
  00403088: 8D08F454 lw          t0,0xF454(t0)
  0040308C: 00086040 sll         t4,t0,1
  00403090: 032C5821 addu        t3,t9,t4
  00403094: AFAB0040 sw          t3,0x40(sp)
  00403098: 8FAD0030 lw          t5,0x30(sp)
  0040309C: 25AEFFF5 addiu       t6,t5,0xFFF5
  004030A0: 2401000A addiu       at,zero,0xA
  004030A4: 01C1001A div         t6,at
  004030A8: 00007810 mfhi        t7
  004030AC: 00000000 nop
  004030B0: 00000000 nop
  004030B4: 3C180041 lui         t8,0x41
  004030B8: 8F18EFF4 lw          t8,0xEFF4(t8)
  004030BC: 01F80019 multu       t7,t8
  004030C0: 00000000 nop
  004030C4: 00000000 nop
  004030C8: 00004812 mflo        t1
  004030CC: 00000000 nop
  004030D0: 00000000 nop
  004030D4: 3C0A0041 lui         t2,0x41
  004030D8: 8D4AF4A0 lw          t2,0xF4A0(t2)
  004030DC: 012A4021 addu        t0,t1,t2
  004030E0: 25190002 addiu       t9,t0,2
  004030E4: AFB9003C sw          t9,0x3C(sp)
  004030E8: 3C040041 lui         a0,0x41
  004030EC: 8C84EEA0 lw          a0,0xEEA0(a0)
  004030F0: 8FAC0040 lw          t4,0x40(sp)
  004030F4: 01802825 or          a1,t4,zero
  004030F8: 8FAB003C lw          t3,0x3C(sp)
  004030FC: 01603025 or          a2,t3,zero
  00403100: 3C0D0041 lui         t5,0x41
  00403104: 8DADF068 lw          t5,0xF068(t5)
  00403108: 018D7021 addu        t6,t4,t5
  0040310C: 3C0F0041 lui         t7,0x41
  00403110: 8DEFF454 lw          t7,0xF454(t7)
  00403114: 000FC080 sll         t8,t7,2
  00403118: 01D83823 subu        a3,t6,t8
  0040311C: 3C090041 lui         t1,0x41
  00403120: 8D29EFF4 lw          t1,0xEFF4(t1)
  00403124: 01695021 addu        t2,t3,t1
  00403128: 2548FFFC addiu       t0,t2,0xFFFC
  0040312C: AFA80010 sw          t0,0x10(sp)
  00403130: 3C190041 lui         t9,0x41
  00403134: 8F3911E4 lw          t9,0x11E4(t9)
  00403138: 0320F809 jalr        ra,t9
  0040313C: 00000000 nop
  00403140: 8FAC0030 lw          t4,0x30(sp)
  00403144: 8FAD0034 lw          t5,0x34(sp)
  00403148: 018D7823 subu        t7,t4,t5
  0040314C: AFAF0030 sw          t7,0x30(sp)
  00403150: 8FAE0048 lw          t6,0x48(sp)
  00403154: 01CFC021 addu        t8,t6,t7
  00403158: 930B0000 lbu         t3,0(t8)
  0040315C: 93A90054 lbu         t1,0x54(sp)
  00403160: 1169FFAA beq         t1,t3,0040300C
  00403164: 00000000 nop
  00403168: 8FAA0038 lw          t2,0x38(sp)
  0040316C: 8D480000 lw          t0,0(t2)
  00403170: AFA80034 sw          t0,0x34(sp)
  00403174: AFA8002C sw          t0,0x2C(sp)
  00403178: 25590004 addiu       t9,t2,4
  0040317C: AFB90038 sw          t9,0x38(sp)
  00403180: 8FAC002C lw          t4,0x2C(sp)
  00403184: 1580FF70 bne         zero,t4,00402F48
  00403188: 00000000 nop
  0040318C: 93AD0050 lbu         t5,0x50(sp)
  00403190: 8FAE0048 lw          t6,0x48(sp)
  00403194: 8FAF004C lw          t7,0x4C(sp)
  00403198: 01CFC021 addu        t8,t6,t7
  0040319C: A30D0000 sb          t5,0(t8)
  004031A0: 10000001 b           004031A8
  004031A4: 00000000 nop
  004031A8: 8FBF0024 lw          ra,0x24(sp)
  004031AC: 27BD0048 addiu       sp,sp,0x48
  004031B0: 03E00008 jr          ra
  004031B4: 00000000 nop
RevMenu:
  004031B8: 27BDFFC8 addiu       sp,sp,0xFFC8
  004031BC: AFBF0024 sw          ra,0x24(sp)
  004031C0: AFA40038 sw          a0,0x38(sp)
  004031C4: AFA5003C sw          a1,0x3C(sp)
  004031C8: 3C0E0041 lui         t6,0x41
  004031CC: 8DCEE020 lw          t6,0xE020(t6)
  004031D0: 11C00003 beq         zero,t6,004031E0
  004031D4: 00000000 nop
  004031D8: 10000116 b           $227
  004031DC: 00000000 nop
  004031E0: 8FAF0038 lw          t7,0x38(sp)
  004031E4: 3C010041 lui         at,0x41
  004031E8: AC2FEF68 sw          t7,0xEF68(at)
  004031EC: 8FB8003C lw          t8,0x3C(sp)
  004031F0: AFB8002C sw          t8,0x2C(sp)
  004031F4: 2719FFEC addiu       t9,t8,0xFFEC
  004031F8: 2F210021 sltiu       at,t9,0x21
  004031FC: 1020010D beq         zero,at,$227
  00403200: 00000000 nop
  00403204: 0019C880 sll         t9,t9,2
  00403208: 3C010041 lui         at,0x41
  0040320C: 00390821 addu        at,at,t9
  00403210: 8C39D070 lw          t9,0xD070(at)
  00403214: 03200008 jr          t9
  00403218: 00000000 nop
$209:
  0040321C: 8FA40038 lw          a0,0x38(sp)
  00403220: 24050010 addiu       a1,zero,0x10
  00403224: 00003025 or          a2,zero,zero
  00403228: 00003825 or          a3,zero,zero
  0040322C: 3C080041 lui         t0,0x41
  00403230: 8D0812A8 lw          t0,0x12A8(t0)
  00403234: 0100F809 jalr        ra,t0
  00403238: 00000000 nop
  0040323C: 100000FD b           $227
  00403240: 00000000 nop
$210:
  00403244: 00002025 or          a0,zero,zero
  00403248: 3C090041 lui         t1,0x41
  0040324C: 8D291288 lw          t1,0x1288(t1)
  00403250: 0120F809 jalr        ra,t1
  00403254: 00000000 nop
  00403258: AFA2002C sw          v0,0x2C(sp)
  0040325C: 8FA4002C lw          a0,0x2C(sp)
  00403260: 24050003 addiu       a1,zero,3
  00403264: 3C0A0041 lui         t2,0x41
  00403268: 8D4A12FC lw          t2,0x12FC(t2)
  0040326C: 0140F809 jalr        ra,t2
  00403270: 00000000 nop
  00403274: AFA20028 sw          v0,0x28(sp)
  00403278: 8FA40038 lw          a0,0x38(sp)
  0040327C: 3C050041 lui         a1,0x41
  00403280: 24A5E150 addiu       a1,a1,0xE150
  00403284: 3C060041 lui         a2,0x41
  00403288: 24C6E148 addiu       a2,a2,0xE148
  0040328C: 8FA70028 lw          a3,0x28(sp)
  00403290: 3C0B0041 lui         t3,0x41
  00403294: 8D6B12A0 lw          t3,0x12A0(t3)
  00403298: 0160F809 jalr        ra,t3
  0040329C: 00000000 nop
  004032A0: 100000E4 b           $227
  004032A4: 00000000 nop
$211:
  004032A8: 100000E2 b           $227
  004032AC: 00000000 nop
$212:
  004032B0: 100000E0 b           $227
  004032B4: 00000000 nop
$213:
  004032B8: 240C001E addiu       t4,zero,0x1E
  004032BC: AFAC0034 sw          t4,0x34(sp)
  004032C0: 1000000B b           004032F0
  004032C4: 00000000 nop
$214:
  004032C8: 240D0020 addiu       t5,zero,0x20
  004032CC: AFAD0034 sw          t5,0x34(sp)
  004032D0: 10000007 b           004032F0
  004032D4: 00000000 nop
$215:
  004032D8: 240E0021 addiu       t6,zero,0x21
  004032DC: AFAE0034 sw          t6,0x34(sp)
  004032E0: 10000003 b           004032F0
  004032E4: 00000000 nop
$216:
  004032E8: 240F0022 addiu       t7,zero,0x22
  004032EC: AFAF0034 sw          t7,0x34(sp)
  004032F0: 100000D0 b           $227
  004032F4: 00000000 nop
$218:
  004032F8: 8FA40038 lw          a0,0x38(sp)
  004032FC: 0C10099C jal         ShowBestMove
  00403300: 00000000 nop
  00403304: 100000CB b           $227
  00403308: 00000000 nop
  0040330C: 100000C9 b           $227
  00403310: 00000000 nop
$219:
  00403314: 8FA40038 lw          a0,0x38(sp)
  00403318: 3C050041 lui         a1,0x41
  0040331C: 24A5EE60 addiu       a1,a1,0xEE60
  00403320: 3C180041 lui         t8,0x41
  00403324: 8F181334 lw          t8,0x1334(t8)
  00403328: 0300F809 jalr        ra,t8
  0040332C: 00000000 nop
  00403330: 24190001 addiu       t9,zero,1
  00403334: 3C010041 lui         at,0x41
  00403338: AC39F048 sw          t9,0xF048(at)
  0040333C: 8FA40038 lw          a0,0x38(sp)
  00403340: 3C080041 lui         t0,0x41
  00403344: 8D0812B8 lw          t0,0x12B8(t0)
  00403348: 0100F809 jalr        ra,t0
  0040334C: 00000000 nop
  00403350: AFA20030 sw          v0,0x30(sp)
  00403354: 8FA90030 lw          t1,0x30(sp)
  00403358: 3C010041 lui         at,0x41
  0040335C: AC29EEA0 sw          t1,0xEEA0(at)
  00403360: 3C010041 lui         at,0x41
  00403364: AC20E024 sw          zero,0xE024(at)
  00403368: 3C040041 lui         a0,0x41
  0040336C: 8C84EEA0 lw          a0,0xEEA0(a0)
  00403370: 24050002 addiu       a1,zero,2
  00403374: 3C0A0041 lui         t2,0x41
  00403378: 8D4A1200 lw          t2,0x1200(t2)
  0040337C: 0140F809 jalr        ra,t2
  00403380: 00000000 nop
  00403384: 8FA40030 lw          a0,0x30(sp)
  00403388: 0C10056B jal         ClearMessageTop
  0040338C: 00000000 nop
  00403390: 240B0014 addiu       t3,zero,0x14
  00403394: 3C010041 lui         at,0x41
  00403398: AC2BF0A4 sw          t3,0xF0A4(at)
  0040339C: 3C040041 lui         a0,0x41
  004033A0: 2484F0E0 addiu       a0,a0,0xF0E0
  004033A4: 0C10043D jal         clearboard
  004033A8: 00000000 nop
  004033AC: 3C040041 lui         a0,0x41
  004033B0: 2484F0E0 addiu       a0,a0,0xF0E0
  004033B4: 0C1005FD jal         drawboard
  004033B8: 00000000 nop
  004033BC: 8FA40038 lw          a0,0x38(sp)
  004033C0: 8FA50030 lw          a1,0x30(sp)
  004033C4: 3C0C0041 lui         t4,0x41
  004033C8: 8D8C12EC lw          t4,0x12EC(t4)
  004033CC: 0180F809 jalr        ra,t4
  004033D0: 00000000 nop
  004033D4: 3C010041 lui         at,0x41
  004033D8: AC20EEA0 sw          zero,0xEEA0(at)
  004033DC: 10000095 b           $227
  004033E0: 00000000 nop
$220:
  004033E4: 240D0001 addiu       t5,zero,1
  004033E8: 3C010041 lui         at,0x41
  004033EC: AC2DF064 sw          t5,0xF064(at)
  004033F0: 8FA40038 lw          a0,0x38(sp)
  004033F4: 24050029 addiu       a1,zero,0x29
  004033F8: 0C10041B jal         checkdepth
  004033FC: 00000000 nop
  00403400: 1000008C b           $227
  00403404: 00000000 nop
$221:
  00403408: 240E0002 addiu       t6,zero,2
  0040340C: 3C010041 lui         at,0x41
  00403410: AC2EF064 sw          t6,0xF064(at)
  00403414: 8FA40038 lw          a0,0x38(sp)
  00403418: 2405002A addiu       a1,zero,0x2A
  0040341C: 0C10041B jal         checkdepth
  00403420: 00000000 nop
  00403424: 10000083 b           $227
  00403428: 00000000 nop
$222:
  0040342C: 240F0004 addiu       t7,zero,4
  00403430: 3C010041 lui         at,0x41
  00403434: AC2FF064 sw          t7,0xF064(at)
  00403438: 8FA40038 lw          a0,0x38(sp)
  0040343C: 2405002C addiu       a1,zero,0x2C
  00403440: 0C10041B jal         checkdepth
  00403444: 00000000 nop
  00403448: 1000007A b           $227
  0040344C: 00000000 nop
$223:
  00403450: 24180006 addiu       t8,zero,6
  00403454: 3C010041 lui         at,0x41
  00403458: AC38F064 sw          t8,0xF064(at)
  0040345C: 8FA40038 lw          a0,0x38(sp)
  00403460: 2405002E addiu       a1,zero,0x2E
  00403464: 0C10041B jal         checkdepth
  00403468: 00000000 nop
  0040346C: 10000071 b           $227
  00403470: 00000000 nop
$224:
  00403474: 3C190041 lui         t9,0x41
  00403478: 8F39F0A4 lw          t9,0xF0A4(t9)
  0040347C: 24010014 addiu       at,zero,0x14
  00403480: 1721005E bne         at,t9,004035FC
  00403484: 00000000 nop
  00403488: 8FA40038 lw          a0,0x38(sp)
  0040348C: 3C080041 lui         t0,0x41
  00403490: 8D0812B8 lw          t0,0x12B8(t0)
  00403494: 0100F809 jalr        ra,t0
  00403498: 00000000 nop
  0040349C: AFA20030 sw          v0,0x30(sp)
  004034A0: 8FA90030 lw          t1,0x30(sp)
  004034A4: 3C010041 lui         at,0x41
  004034A8: AC29EEA0 sw          t1,0xEEA0(at)
  004034AC: 3C040041 lui         a0,0x41
  004034B0: 8C84EEA0 lw          a0,0xEEA0(a0)
  004034B4: 24050002 addiu       a1,zero,2
  004034B8: 3C0A0041 lui         t2,0x41
  004034BC: 8D4A1200 lw          t2,0x1200(t2)
  004034C0: 0140F809 jalr        ra,t2
  004034C4: 00000000 nop
  004034C8: 240B0001 addiu       t3,zero,1
  004034CC: 3C010041 lui         at,0x41
  004034D0: AC2BE020 sw          t3,0xE020(at)
  004034D4: 8FA40030 lw          a0,0x30(sp)
  004034D8: 0C10056B jal         ClearMessageTop
  004034DC: 00000000 nop
  004034E0: 3C040041 lui         a0,0x41
  004034E4: 8C84EF70 lw          a0,0xEF70(a0)
  004034E8: 3C0C0041 lui         t4,0x41
  004034EC: 8D8C1300 lw          t4,0x1300(t4)
  004034F0: 0180F809 jalr        ra,t4
  004034F4: 00000000 nop
  004034F8: 8FA40038 lw          a0,0x38(sp)
  004034FC: 8FA50030 lw          a1,0x30(sp)
  00403500: 3C0D0041 lui         t5,0x41
  00403504: 8DAD12EC lw          t5,0x12EC(t5)
  00403508: 01A0F809 jalr        ra,t5
  0040350C: 00000000 nop
  00403510: 3C010041 lui         at,0x41
  00403514: AC20EEA0 sw          zero,0xEEA0(at)
  00403518: 3C040041 lui         a0,0x41
  0040351C: 2484F0E0 addiu       a0,a0,0xF0E0
  00403520: 24050014 addiu       a1,zero,0x14
  00403524: 24060002 addiu       a2,zero,2
  00403528: 24070003 addiu       a3,zero,3
  0040352C: AFA00010 sw          zero,0x10(sp)
  00403530: 240E8001 addiu       t6,zero,0x8001
  00403534: AFAE0014 sw          t6,0x14(sp)
  00403538: 240F7FFF addiu       t7,zero,0x7FFF
  0040353C: AFAF0018 sw          t7,0x18(sp)
  00403540: 0C1016E3 jal         minmax
  00403544: 00000000 nop
  00403548: 8FA40038 lw          a0,0x38(sp)
  0040354C: 3C180041 lui         t8,0x41
  00403550: 8F1812B8 lw          t8,0x12B8(t8)
  00403554: 0300F809 jalr        ra,t8
  00403558: 00000000 nop
  0040355C: AFA20030 sw          v0,0x30(sp)
  00403560: 8FB90030 lw          t9,0x30(sp)
  00403564: 3C010041 lui         at,0x41
  00403568: AC39EEA0 sw          t9,0xEEA0(at)
  0040356C: 3C040041 lui         a0,0x41
  00403570: 2484F0E0 addiu       a0,a0,0xF0E0
  00403574: 3C080041 lui         t0,0x41
  00403578: 2508EFD0 addiu       t0,t0,0xEFD0
  0040357C: 8D050000 lw          a1,0(t0)
  00403580: 24060003 addiu       a2,zero,3
  00403584: 24070002 addiu       a3,zero,2
  00403588: 0C100B4C jal         paintmove
  0040358C: 00000000 nop
  00403590: 8FA40038 lw          a0,0x38(sp)
  00403594: 8FA50030 lw          a1,0x30(sp)
  00403598: 3C060041 lui         a2,0x41
  0040359C: 24C6F0E0 addiu       a2,a2,0xF0E0
  004035A0: 3C090041 lui         t1,0x41
  004035A4: 2529EFD0 addiu       t1,t1,0xEFD0
  004035A8: 8D270000 lw          a3,0(t1)
  004035AC: 0C100A9C jal         gameover
  004035B0: 00000000 nop
  004035B4: 3C040041 lui         a0,0x41
  004035B8: 8C84EF20 lw          a0,0xEF20(a0)
  004035BC: 3C0A0041 lui         t2,0x41
  004035C0: 8D4A1300 lw          t2,0x1300(t2)
  004035C4: 0140F809 jalr        ra,t2
  004035C8: 00000000 nop
  004035CC: 3C010041 lui         at,0x41
  004035D0: AC20E020 sw          zero,0xE020(at)
  004035D4: 8FA40038 lw          a0,0x38(sp)
  004035D8: 8FA50030 lw          a1,0x30(sp)
  004035DC: 3C0B0041 lui         t3,0x41
  004035E0: 8D6B12EC lw          t3,0x12EC(t3)
  004035E4: 0160F809 jalr        ra,t3
  004035E8: 00000000 nop
  004035EC: 3C010041 lui         at,0x41
  004035F0: AC20EEA0 sw          zero,0xEEA0(at)
  004035F4: 1000000B b           00403624
  004035F8: 00000000 nop
  004035FC: 8FA40038 lw          a0,0x38(sp)
  00403600: 3C050041 lui         a1,0x41
  00403604: 24A5EEB0 addiu       a1,a1,0xEEB0
  00403608: 3C060041 lui         a2,0x41
  0040360C: 24C6EE60 addiu       a2,a2,0xEE60
  00403610: 24070040 addiu       a3,zero,0x40
  00403614: 3C0C0041 lui         t4,0x41
  00403618: 8D8C12D4 lw          t4,0x12D4(t4)
  0040361C: 0180F809 jalr        ra,t4
  00403620: 00000000 nop
  00403624: 10000003 b           $227
  00403628: 00000000 nop
  0040362C: 10000001 b           $227
  00403630: 00000000 nop
$227:
  00403634: 10000001 b           0040363C
  00403638: 00000000 nop
  0040363C: 8FBF0024 lw          ra,0x24(sp)
  00403640: 27BD0038 addiu       sp,sp,0x38
  00403644: 03E00008 jr          ra
  00403648: 00000000 nop
RevInit:
  0040364C: 27BDFFD8 addiu       sp,sp,0xFFD8
  00403650: AFBF0014 sw          ra,0x14(sp)
  00403654: AFA40028 sw          a0,0x28(sp)
  00403658: 00002025 or          a0,zero,zero
  0040365C: 3C0E0041 lui         t6,0x41
  00403660: 8DCE11E8 lw          t6,0x11E8(t6)
  00403664: 01C0F809 jalr        ra,t6
  00403668: 00000000 nop
  0040366C: 3C010041 lui         at,0x41
  00403670: AC22F070 sw          v0,0xF070(at)
  00403674: 24040004 addiu       a0,zero,4
  00403678: 3C0F0041 lui         t7,0x41
  0040367C: 8DEF11E8 lw          t7,0x11E8(t7)
  00403680: 01E0F809 jalr        ra,t7
  00403684: 00000000 nop
  00403688: 3C010041 lui         at,0x41
  0040368C: AC22F050 sw          v0,0xF050(at)
  00403690: 24040001 addiu       a0,zero,1
  00403694: 3C180041 lui         t8,0x41
  00403698: 8F1811E8 lw          t8,0x11E8(t8)
  0040369C: 0300F809 jalr        ra,t8
  004036A0: 00000000 nop
  004036A4: 3C010041 lui         at,0x41
  004036A8: AC22F06C sw          v0,0xF06C(at)
  004036AC: 3C190041 lui         t9,0x41
  004036B0: 8F39F06C lw          t9,0xF06C(t9)
  004036B4: 17200004 bne         zero,t9,004036C8
  004036B8: 00000000 nop
  004036BC: 00001025 or          v0,zero,zero
  004036C0: 1000014F b           00403C00
  004036C4: 00000000 nop
  004036C8: 24080001 addiu       t0,zero,1
  004036CC: 3C010041 lui         at,0x41
  004036D0: AC28F048 sw          t0,0xF048(at)
  004036D4: 00002025 or          a0,zero,zero
  004036D8: 3C090041 lui         t1,0x41
  004036DC: 8D2912B8 lw          t1,0x12B8(t1)
  004036E0: 0120F809 jalr        ra,t1
  004036E4: 00000000 nop
  004036E8: AFA20024 sw          v0,0x24(sp)
  004036EC: 240A0001 addiu       t2,zero,1
  004036F0: 3C010041 lui         at,0x41
  004036F4: AC2AF058 sw          t2,0xF058(at)
  004036F8: 8FA40024 lw          a0,0x24(sp)
  004036FC: 2405000A addiu       a1,zero,0xA
  00403700: 3C0B0041 lui         t3,0x41
  00403704: 8D6B11F0 lw          t3,0x11F0(t3)
  00403708: 0160F809 jalr        ra,t3
  0040370C: 00000000 nop
  00403710: AFA2001C sw          v0,0x1C(sp)
  00403714: 8FAC001C lw          t4,0x1C(sp)
  00403718: 240100C8 addiu       at,zero,0xC8
  0040371C: 15810006 bne         at,t4,00403738
  00403720: 00000000 nop
  00403724: 240D0002 addiu       t5,zero,2
  00403728: 3C010041 lui         at,0x41
  0040372C: AC2DF454 sw          t5,0xF454(at)
  00403730: 10000004 b           00403744
  00403734: 00000000 nop
  00403738: 240E0001 addiu       t6,zero,1
  0040373C: 3C010041 lui         at,0x41
  00403740: AC2EF454 sw          t6,0xF454(at)
  00403744: 00002025 or          a0,zero,zero
  00403748: 8FA50024 lw          a1,0x24(sp)
  0040374C: 3C0F0041 lui         t7,0x41
  00403750: 8DEF12EC lw          t7,0x12EC(t7)
  00403754: 01E0F809 jalr        ra,t7
  00403758: 00000000 nop
  0040375C: 240400FF addiu       a0,zero,0xFF
  00403760: 3C180041 lui         t8,0x41
  00403764: 8F1811DC lw          t8,0x11DC(t8)
  00403768: 0300F809 jalr        ra,t8
  0040376C: 00000000 nop
  00403770: AFA2001C sw          v0,0x1C(sp)
  00403774: 8FB9001C lw          t9,0x1C(sp)
  00403778: 3C010041 lui         at,0x41
  0040377C: AC39F060 sw          t9,0xF060(at)
  00403780: 3404FF00 ori         a0,zero,0xFF00
  00403784: 3C080041 lui         t0,0x41
  00403788: 8D0811DC lw          t0,0x11DC(t0)
  0040378C: 0100F809 jalr        ra,t0
  00403790: 00000000 nop
  00403794: AFA2001C sw          v0,0x1C(sp)
  00403798: 8FA9001C lw          t1,0x1C(sp)
  0040379C: 3C010041 lui         at,0x41
  004037A0: AC29EEA4 sw          t1,0xEEA4(at)
  004037A4: 3C0400FF lui         a0,0xFF
  004037A8: 3C0A0041 lui         t2,0x41
  004037AC: 8D4A11DC lw          t2,0x11DC(t2)
  004037B0: 0140F809 jalr        ra,t2
  004037B4: 00000000 nop
  004037B8: AFA2001C sw          v0,0x1C(sp)
  004037BC: 8FAB001C lw          t3,0x1C(sp)
  004037C0: 3C010041 lui         at,0x41
  004037C4: AC2BEF74 sw          t3,0xEF74(at)
  004037C8: 3C0C0041 lui         t4,0x41
  004037CC: 8D8CF060 lw          t4,0xF060(t4)
  004037D0: 11800009 beq         zero,t4,004037F8
  004037D4: 00000000 nop
  004037D8: 3C0D0041 lui         t5,0x41
  004037DC: 8DADEEA4 lw          t5,0xEEA4(t5)
  004037E0: 11A00005 beq         zero,t5,004037F8
  004037E4: 00000000 nop
  004037E8: 3C0E0041 lui         t6,0x41
  004037EC: 8DCEEF74 lw          t6,0xEF74(t6)
  004037F0: 15C00004 bne         zero,t6,00403804
  004037F4: 00000000 nop
  004037F8: 00001025 or          v0,zero,zero
  004037FC: 10000100 b           00403C00
  00403800: 00000000 nop
  00403804: 8FA40028 lw          a0,0x28(sp)
  00403808: 24050003 addiu       a1,zero,3
  0040380C: 3C060041 lui         a2,0x41
  00403810: 24C6EE60 addiu       a2,a2,0xEE60
  00403814: 24070014 addiu       a3,zero,0x14
  00403818: 3C0F0041 lui         t7,0x41
  0040381C: 8DEF133C lw          t7,0x133C(t7)
  00403820: 01E0F809 jalr        ra,t7
  00403824: 00000000 nop
  00403828: 8FA40028 lw          a0,0x28(sp)
  0040382C: 24050004 addiu       a1,zero,4
  00403830: 3C060041 lui         a2,0x41
  00403834: 24C6EF30 addiu       a2,a2,0xEF30
  00403838: 24070028 addiu       a3,zero,0x28
  0040383C: 3C180041 lui         t8,0x41
  00403840: 8F18133C lw          t8,0x133C(t8)
  00403844: 0300F809 jalr        ra,t8
  00403848: 00000000 nop
  0040384C: 8FA40028 lw          a0,0x28(sp)
  00403850: 24050005 addiu       a1,zero,5
  00403854: 3C060041 lui         a2,0x41
  00403858: 24C6F430 addiu       a2,a2,0xF430
  0040385C: 2407001E addiu       a3,zero,0x1E
  00403860: 3C190041 lui         t9,0x41
  00403864: 8F39133C lw          t9,0x133C(t9)
  00403868: 0320F809 jalr        ra,t9
  0040386C: 00000000 nop
  00403870: 8FA40028 lw          a0,0x28(sp)
  00403874: 24050006 addiu       a1,zero,6
  00403878: 3C060041 lui         a2,0x41
  0040387C: 24C6EE80 addiu       a2,a2,0xEE80
  00403880: 2407001E addiu       a3,zero,0x1E
  00403884: 3C080041 lui         t0,0x41
  00403888: 8D08133C lw          t0,0x133C(t0)
  0040388C: 0100F809 jalr        ra,t0
  00403890: 00000000 nop
  00403894: 8FA40028 lw          a0,0x28(sp)
  00403898: 24050007 addiu       a1,zero,7
  0040389C: 3C060041 lui         a2,0x41
  004038A0: 24C6F410 addiu       a2,a2,0xF410
  004038A4: 2407001E addiu       a3,zero,0x1E
  004038A8: 3C090041 lui         t1,0x41
  004038AC: 8D29133C lw          t1,0x133C(t1)
  004038B0: 0120F809 jalr        ra,t1
  004038B4: 00000000 nop
  004038B8: 8FA40028 lw          a0,0x28(sp)
  004038BC: 24050008 addiu       a1,zero,8
  004038C0: 3C060041 lui         a2,0x41
  004038C4: 24C6F460 addiu       a2,a2,0xF460
  004038C8: 2407001E addiu       a3,zero,0x1E
  004038CC: 3C0A0041 lui         t2,0x41
  004038D0: 8D4A133C lw          t2,0x133C(t2)
  004038D4: 0140F809 jalr        ra,t2
  004038D8: 00000000 nop
  004038DC: 8FA40028 lw          a0,0x28(sp)
  004038E0: 24050009 addiu       a1,zero,9
  004038E4: 3C060041 lui         a2,0x41
  004038E8: 24C6F080 addiu       a2,a2,0xF080
  004038EC: 2407001E addiu       a3,zero,0x1E
  004038F0: 3C0B0041 lui         t3,0x41
  004038F4: 8D6B133C lw          t3,0x133C(t3)
  004038F8: 0160F809 jalr        ra,t3
  004038FC: 00000000 nop
  00403900: 8FA40028 lw          a0,0x28(sp)
  00403904: 2405000A addiu       a1,zero,0xA
  00403908: 3C060041 lui         a2,0x41
  0040390C: 24C6EF00 addiu       a2,a2,0xEF00
  00403910: 24070014 addiu       a3,zero,0x14
  00403914: 3C0C0041 lui         t4,0x41
  00403918: 8D8C133C lw          t4,0x133C(t4)
  0040391C: 0180F809 jalr        ra,t4
  00403920: 00000000 nop
  00403924: 8FA40028 lw          a0,0x28(sp)
  00403928: 2405000B addiu       a1,zero,0xB
  0040392C: 3C060041 lui         a2,0x41
  00403930: 24C6F480 addiu       a2,a2,0xF480
  00403934: 2407001E addiu       a3,zero,0x1E
  00403938: 3C0D0041 lui         t5,0x41
  0040393C: 8DAD133C lw          t5,0x133C(t5)
  00403940: 01A0F809 jalr        ra,t5
  00403944: 00000000 nop
  00403948: 8FA40028 lw          a0,0x28(sp)
  0040394C: 2405000C addiu       a1,zero,0xC
  00403950: 3C060041 lui         a2,0x41
  00403954: 24C6F0C0 addiu       a2,a2,0xF0C0
  00403958: 2407001E addiu       a3,zero,0x1E
  0040395C: 3C0E0041 lui         t6,0x41
  00403960: 8DCE133C lw          t6,0x133C(t6)
  00403964: 01C0F809 jalr        ra,t6
  00403968: 00000000 nop
  0040396C: 8FA40028 lw          a0,0x28(sp)
  00403970: 2405000D addiu       a1,zero,0xD
  00403974: 3C060041 lui         a2,0x41
  00403978: 24C6F000 addiu       a2,a2,0xF000
  0040397C: 24070046 addiu       a3,zero,0x46
  00403980: 3C0F0041 lui         t7,0x41
  00403984: 8DEF133C lw          t7,0x133C(t7)
  00403988: 01E0F809 jalr        ra,t7
  0040398C: 00000000 nop
  00403990: 8FA40028 lw          a0,0x28(sp)
  00403994: 2405000E addiu       a1,zero,0xE
  00403998: 3C060041 lui         a2,0x41
  0040399C: 24C6EEB0 addiu       a2,a2,0xEEB0
  004039A0: 24070046 addiu       a3,zero,0x46
  004039A4: 3C180041 lui         t8,0x41
  004039A8: 8F18133C lw          t8,0x133C(t8)
  004039AC: 0300F809 jalr        ra,t8
  004039B0: 00000000 nop
  004039B4: 8FA40028 lw          a0,0x28(sp)
  004039B8: 2405000F addiu       a1,zero,0xF
  004039BC: 3C060041 lui         a2,0x41
  004039C0: 24C6F0B0 addiu       a2,a2,0xF0B0
  004039C4: 2407000F addiu       a3,zero,0xF
  004039C8: 3C190041 lui         t9,0x41
  004039CC: 8F39133C lw          t9,0x133C(t9)
  004039D0: 0320F809 jalr        ra,t9
  004039D4: 00000000 nop
  004039D8: 8FA40028 lw          a0,0x28(sp)
  004039DC: 3C050041 lui         a1,0x41
  004039E0: 24A5E158 addiu       a1,a1,0xE158
  004039E4: 3C080041 lui         t0,0x41
  004039E8: 8D081324 lw          t0,0x1324(t0)
  004039EC: 0100F809 jalr        ra,t0
  004039F0: 00000000 nop
  004039F4: 3C010041 lui         at,0x41
  004039F8: AC22EFF0 sw          v0,0xEFF0(at)
  004039FC: 24040040 addiu       a0,zero,0x40
  00403A00: 24050028 addiu       a1,zero,0x28
  00403A04: 3C090041 lui         t1,0x41
  00403A08: 8D291280 lw          t1,0x1280(t1)
  00403A0C: 0120F809 jalr        ra,t1
  00403A10: 00000000 nop
  00403A14: AFA2001C sw          v0,0x1C(sp)
  00403A18: 8FAA001C lw          t2,0x1C(sp)
  00403A1C: AFAA0020 sw          t2,0x20(sp)
  00403A20: 8FAB0020 lw          t3,0x20(sp)
  00403A24: 15600004 bne         zero,t3,00403A38
  00403A28: 00000000 nop
  00403A2C: 00001025 or          v0,zero,zero
  00403A30: 10000073 b           00403C00
  00403A34: 00000000 nop
  00403A38: 00002025 or          a0,zero,zero
  00403A3C: 24057F03 addiu       a1,zero,0x7F03
  00403A40: 3C0C0041 lui         t4,0x41
  00403A44: 8D8C12AC lw          t4,0x12AC(t4)
  00403A48: 0180F809 jalr        ra,t4
  00403A4C: 00000000 nop
  00403A50: 3C010041 lui         at,0x41
  00403A54: AC22EF58 sw          v0,0xEF58(at)
  00403A58: 00002025 or          a0,zero,zero
  00403A5C: 24057F00 addiu       a1,zero,0x7F00
  00403A60: 3C0D0041 lui         t5,0x41
  00403A64: 8DAD12AC lw          t5,0x12AC(t5)
  00403A68: 01A0F809 jalr        ra,t5
  00403A6C: 00000000 nop
  00403A70: 3C010041 lui         at,0x41
  00403A74: AC22EF20 sw          v0,0xEF20(at)
  00403A78: 00002025 or          a0,zero,zero
  00403A7C: 24057F02 addiu       a1,zero,0x7F02
  00403A80: 3C0E0041 lui         t6,0x41
  00403A84: 8DCE12AC lw          t6,0x12AC(t6)
  00403A88: 01C0F809 jalr        ra,t6
  00403A8C: 00000000 nop
  00403A90: 3C010041 lui         at,0x41
  00403A94: AC22EF70 sw          v0,0xEF70(at)
  00403A98: 8FA40028 lw          a0,0x28(sp)
  00403A9C: 24050001 addiu       a1,zero,1
  00403AA0: 3C0F0041 lui         t7,0x41
  00403AA4: 8DEF12AC lw          t7,0x12AC(t7)
  00403AA8: 01E0F809 jalr        ra,t7
  00403AAC: 00000000 nop
  00403AB0: 3C010041 lui         at,0x41
  00403AB4: AC22EFF8 sw          v0,0xEFF8(at)
  00403AB8: 3C180041 lui         t8,0x41
  00403ABC: 8F18EF58 lw          t8,0xEF58(t8)
  00403AC0: 1300000D beq         zero,t8,00403AF8
  00403AC4: 00000000 nop
  00403AC8: 3C190041 lui         t9,0x41
  00403ACC: 8F39EF20 lw          t9,0xEF20(t9)
  00403AD0: 13200009 beq         zero,t9,00403AF8
  00403AD4: 00000000 nop
  00403AD8: 3C080041 lui         t0,0x41
  00403ADC: 8D08EF70 lw          t0,0xEF70(t0)
  00403AE0: 11000005 beq         zero,t0,00403AF8
  00403AE4: 00000000 nop
  00403AE8: 3C090041 lui         t1,0x41
  00403AEC: 8D29EFF8 lw          t1,0xEFF8(t1)
  00403AF0: 15200004 bne         zero,t1,00403B04
  00403AF4: 00000000 nop
  00403AF8: 00001025 or          v0,zero,zero
  00403AFC: 10000040 b           00403C00
  00403B00: 00000000 nop
  00403B04: 8FA40028 lw          a0,0x28(sp)
  00403B08: 24050003 addiu       a1,zero,3
  00403B0C: 3C0A0041 lui         t2,0x41
  00403B10: 8D4A12FC lw          t2,0x12FC(t2)
  00403B14: 0140F809 jalr        ra,t2
  00403B18: 00000000 nop
  00403B1C: 8FAB0020 lw          t3,0x20(sp)
  00403B20: AD620014 sw          v0,0x14(t3)
  00403B24: 3C0C0041 lui         t4,0x41
  00403B28: 258CE160 addiu       t4,t4,0xE160
  00403B2C: 8FAD0020 lw          t5,0x20(sp)
  00403B30: ADAC0024 sw          t4,0x24(t5)
  00403B34: 3C0E0041 lui         t6,0x41
  00403B38: 8DCEF058 lw          t6,0xF058(t6)
  00403B3C: 11C00006 beq         zero,t6,00403B58
  00403B40: 00000000 nop
  00403B44: 3C0F0041 lui         t7,0x41
  00403B48: 8DEFEEA4 lw          t7,0xEEA4(t7)
  00403B4C: AFAF001C sw          t7,0x1C(sp)
  00403B50: 10000004 b           00403B64
  00403B54: 00000000 nop
  00403B58: 3C180041 lui         t8,0x41
  00403B5C: 8F18F070 lw          t8,0xF070(t8)
  00403B60: AFB8001C sw          t8,0x1C(sp)
  00403B64: 8FB9001C lw          t9,0x1C(sp)
  00403B68: 8FA80020 lw          t0,0x20(sp)
  00403B6C: AD19001C sw          t9,0x1C(t0)
  00403B70: 3C090040 lui         t1,0x40
  00403B74: 25294B6C addiu       t1,t1,0x4B6C
  00403B78: 8FAA0020 lw          t2,0x20(sp)
  00403B7C: AD490004 sw          t1,4(t2)
  00403B80: 240B0001 addiu       t3,zero,1
  00403B84: 8FAC0020 lw          t4,0x20(sp)
  00403B88: AD8B0020 sw          t3,0x20(t4)
  00403B8C: 8FAD0028 lw          t5,0x28(sp)
  00403B90: 8FAE0020 lw          t6,0x20(sp)
  00403B94: ADCD0010 sw          t5,0x10(t6)
  00403B98: 240F1003 addiu       t7,zero,0x1003
  00403B9C: 8FB80020 lw          t8,0x20(sp)
  00403BA0: AF0F0000 sw          t7,0(t8)
  00403BA4: 8FA40020 lw          a0,0x20(sp)
  00403BA8: 3C190041 lui         t9,0x41
  00403BAC: 8F3912F4 lw          t9,0x12F4(t9)
  00403BB0: 0320F809 jalr        ra,t9
  00403BB4: 00000000 nop
  00403BB8: 14400009 bne         zero,v0,00403BE0
  00403BBC: 00000000 nop
  00403BC0: 8FA40020 lw          a0,0x20(sp)
  00403BC4: 3C080041 lui         t0,0x41
  00403BC8: 8D081284 lw          t0,0x1284(t0)
  00403BCC: 0100F809 jalr        ra,t0
  00403BD0: 00000000 nop
  00403BD4: 00001025 or          v0,zero,zero
  00403BD8: 10000009 b           00403C00
  00403BDC: 00000000 nop
  00403BE0: 8FA40020 lw          a0,0x20(sp)
  00403BE4: 3C090041 lui         t1,0x41
  00403BE8: 8D291284 lw          t1,0x1284(t1)
  00403BEC: 0120F809 jalr        ra,t1
  00403BF0: 00000000 nop
  00403BF4: 24020001 addiu       v0,zero,1
  00403BF8: 10000001 b           00403C00
  00403BFC: 00000000 nop
  00403C00: 10000001 b           00403C08
  00403C04: 00000000 nop
  00403C08: 8FBF0014 lw          ra,0x14(sp)
  00403C0C: 27BD0028 addiu       sp,sp,0x28
  00403C10: 03E00008 jr          ra
  00403C14: 00000000 nop
RevMouseClick:
  00403C18: 27BDFFC0 addiu       sp,sp,0xFFC0
  00403C1C: AFBF0024 sw          ra,0x24(sp)
  00403C20: AFA40040 sw          a0,0x40(sp)
  00403C24: AFA50044 sw          a1,0x44(sp)
  00403C28: AFA60048 sw          a2,0x48(sp)
  00403C2C: 3C0E0041 lui         t6,0x41
  00403C30: 8DCEEFF4 lw          t6,0xEFF4(t6)
  00403C34: 000E78C0 sll         t7,t6,3
  00403C38: AFAF003C sw          t7,0x3C(sp)
  00403C3C: 3C180041 lui         t8,0x41
  00403C40: 8F18F068 lw          t8,0xF068(t8)
  00403C44: 0018C8C0 sll         t9,t8,3
  00403C48: AFB90038 sw          t9,0x38(sp)
  00403C4C: 8FA80044 lw          t0,0x44(sp)
  00403C50: 3C010041 lui         at,0x41
  00403C54: AC28EF18 sw          t0,0xEF18(at)
  00403C58: 8FA90048 lw          t1,0x48(sp)
  00403C5C: 3C010041 lui         at,0x41
  00403C60: AC29EF1C sw          t1,0xEF1C(at)
  00403C64: 3C0A0041 lui         t2,0x41
  00403C68: 8D4AF068 lw          t2,0xF068(t2)
  00403C6C: 11400005 beq         zero,t2,00403C84
  00403C70: 00000000 nop
  00403C74: 3C0B0041 lui         t3,0x41
  00403C78: 8D6BEFF4 lw          t3,0xEFF4(t3)
  00403C7C: 15600003 bne         zero,t3,00403C8C
  00403C80: 00000000 nop
  00403C84: 100000B0 b           00403F48
  00403C88: 00000000 nop
  00403C8C: 8FAC0044 lw          t4,0x44(sp)
  00403C90: 3C0D0041 lui         t5,0x41
  00403C94: 8DADF4A8 lw          t5,0xF4A8(t5)
  00403C98: 01AC082A slt         at,t5,t4
  00403C9C: 102000AA beq         zero,at,00403F48
  00403CA0: 00000000 nop
  00403CA4: 8FAE0038 lw          t6,0x38(sp)
  00403CA8: 01AE7821 addu        t7,t5,t6
  00403CAC: 018F082A slt         at,t4,t7
  00403CB0: 102000A5 beq         zero,at,00403F48
  00403CB4: 00000000 nop
  00403CB8: 8FB80048 lw          t8,0x48(sp)
  00403CBC: 3C190041 lui         t9,0x41
  00403CC0: 8F39F4A0 lw          t9,0xF4A0(t9)
  00403CC4: 0338082A slt         at,t9,t8
  00403CC8: 1020009F beq         zero,at,00403F48
  00403CCC: 00000000 nop
  00403CD0: 8FA8003C lw          t0,0x3C(sp)
  00403CD4: 03284821 addu        t1,t9,t0
  00403CD8: 0309082A slt         at,t8,t1
  00403CDC: 1020009A beq         zero,at,00403F48
  00403CE0: 00000000 nop
  00403CE4: 8FAA0044 lw          t2,0x44(sp)
  00403CE8: 3C0B0041 lui         t3,0x41
  00403CEC: 8D6BF4A8 lw          t3,0xF4A8(t3)
  00403CF0: 014B6823 subu        t5,t2,t3
  00403CF4: 3C0E0041 lui         t6,0x41
  00403CF8: 8DCEF068 lw          t6,0xF068(t6)
  00403CFC: 01AE001A div         t5,t6
  00403D00: 15C00002 bne         zero,t6,00403D0C
  00403D04: 00000000 nop
  00403D08: 0007000D break
  00403D0C: 2401FFFF addiu       at,zero,0xFFFF
  00403D10: 15C10004 bne         at,t6,00403D24
  00403D14: 3C018000 lui         at,0x8000
  00403D18: 15A10002 bne         at,t5,00403D24
  00403D1C: 00000000 nop
  00403D20: 0006000D break
  00403D24: 00006012 mflo        t4
  00403D28: 00000000 nop
  00403D2C: 00000000 nop
  00403D30: AFAC0034 sw          t4,0x34(sp)
  00403D34: 8FAF0048 lw          t7,0x48(sp)
  00403D38: 3C190041 lui         t9,0x41
  00403D3C: 8F39F4A0 lw          t9,0xF4A0(t9)
  00403D40: 01F94023 subu        t0,t7,t9
  00403D44: 3C180041 lui         t8,0x41
  00403D48: 8F18EFF4 lw          t8,0xEFF4(t8)
  00403D4C: 0118001A div         t0,t8
  00403D50: 17000002 bne         zero,t8,00403D5C
  00403D54: 00000000 nop
  00403D58: 0007000D break
  00403D5C: 2401FFFF addiu       at,zero,0xFFFF
  00403D60: 17010004 bne         at,t8,00403D74
  00403D64: 3C018000 lui         at,0x8000
  00403D68: 15010002 bne         at,t0,00403D74
  00403D6C: 00000000 nop
  00403D70: 0006000D break
  00403D74: 00004812 mflo        t1
  00403D78: 00000000 nop
  00403D7C: 00000000 nop
  00403D80: AFA90030 sw          t1,0x30(sp)
  00403D84: 8FAA0034 lw          t2,0x34(sp)
  00403D88: 000A5880 sll         t3,t2,2
  00403D8C: 016A5821 addu        t3,t3,t2
  00403D90: 000B5840 sll         t3,t3,1
  00403D94: 8FAD0030 lw          t5,0x30(sp)
  00403D98: 016D7021 addu        t6,t3,t5
  00403D9C: 25CC000B addiu       t4,t6,0xB
  00403DA0: AFAC002C sw          t4,0x2C(sp)
  00403DA4: 3C040041 lui         a0,0x41
  00403DA8: 2484F0E0 addiu       a0,a0,0xF0E0
  00403DAC: 8FA5002C lw          a1,0x2C(sp)
  00403DB0: 24060002 addiu       a2,zero,2
  00403DB4: 24070003 addiu       a3,zero,3
  00403DB8: 0C101542 jal         legalcheck
  00403DBC: 00000000 nop
  00403DC0: 10400057 beq         zero,v0,00403F20
  00403DC4: 00000000 nop
  00403DC8: 240F0002 addiu       t7,zero,2
  00403DCC: 8FB9002C lw          t9,0x2C(sp)
  00403DD0: 3C010041 lui         at,0x41
  00403DD4: 00390821 addu        at,at,t9
  00403DD8: A02FF0E0 sb          t7,0xF0E0(at)
  00403DDC: 3C010041 lui         at,0x41
  00403DE0: AC20F048 sw          zero,0xF048(at)
  00403DE4: 24080001 addiu       t0,zero,1
  00403DE8: 3C010041 lui         at,0x41
  00403DEC: AC28E020 sw          t0,0xE020(at)
  00403DF0: 3C040041 lui         a0,0x41
  00403DF4: 8C84EF70 lw          a0,0xEF70(a0)
  00403DF8: 3C180041 lui         t8,0x41
  00403DFC: 8F181300 lw          t8,0x1300(t8)
  00403E00: 0300F809 jalr        ra,t8
  00403E04: 00000000 nop
  00403E08: 8FA40040 lw          a0,0x40(sp)
  00403E0C: 3C090041 lui         t1,0x41
  00403E10: 8D2912B8 lw          t1,0x12B8(t1)
  00403E14: 0120F809 jalr        ra,t1
  00403E18: 00000000 nop
  00403E1C: AFA20028 sw          v0,0x28(sp)
  00403E20: 8FAA0028 lw          t2,0x28(sp)
  00403E24: 3C010041 lui         at,0x41
  00403E28: AC2AEEA0 sw          t2,0xEEA0(at)
  00403E2C: 8FA40028 lw          a0,0x28(sp)
  00403E30: 0C10056B jal         ClearMessageTop
  00403E34: 00000000 nop
  00403E38: 3C040041 lui         a0,0x41
  00403E3C: 2484F0E0 addiu       a0,a0,0xF0E0
  00403E40: 8FA5002C lw          a1,0x2C(sp)
  00403E44: 24060002 addiu       a2,zero,2
  00403E48: 24070003 addiu       a3,zero,3
  00403E4C: AFA00010 sw          zero,0x10(sp)
  00403E50: 240B8001 addiu       t3,zero,0x8001
  00403E54: AFAB0014 sw          t3,0x14(sp)
  00403E58: 240D7FFF addiu       t5,zero,0x7FFF
  00403E5C: AFAD0018 sw          t5,0x18(sp)
  00403E60: 0C1016E3 jal         minmax
  00403E64: 00000000 nop
  00403E68: 3C040041 lui         a0,0x41
  00403E6C: 2484F0E0 addiu       a0,a0,0xF0E0
  00403E70: 8FA5002C lw          a1,0x2C(sp)
  00403E74: 24060002 addiu       a2,zero,2
  00403E78: 24070003 addiu       a3,zero,3
  00403E7C: 0C101595 jal         makemove
  00403E80: 00000000 nop
  00403E84: 8FAE0028 lw          t6,0x28(sp)
  00403E88: 3C010041 lui         at,0x41
  00403E8C: AC2EEEA0 sw          t6,0xEEA0(at)
  00403E90: 3C040041 lui         a0,0x41
  00403E94: 2484F0E0 addiu       a0,a0,0xF0E0
  00403E98: 3C0C0041 lui         t4,0x41
  00403E9C: 258CEFD0 addiu       t4,t4,0xEFD0
  00403EA0: 8D850000 lw          a1,0(t4)
  00403EA4: 24060003 addiu       a2,zero,3
  00403EA8: 24070002 addiu       a3,zero,2
  00403EAC: 0C100B4C jal         paintmove
  00403EB0: 00000000 nop
  00403EB4: 8FA40040 lw          a0,0x40(sp)
  00403EB8: 8FA50028 lw          a1,0x28(sp)
  00403EBC: 3C060041 lui         a2,0x41
  00403EC0: 24C6F0E0 addiu       a2,a2,0xF0E0
  00403EC4: 3C0F0041 lui         t7,0x41
  00403EC8: 25EFEFD0 addiu       t7,t7,0xEFD0
  00403ECC: 8DE70000 lw          a3,0(t7)
  00403ED0: 0C100A9C jal         gameover
  00403ED4: 00000000 nop
  00403ED8: 8FA40040 lw          a0,0x40(sp)
  00403EDC: 8FA50028 lw          a1,0x28(sp)
  00403EE0: 3C190041 lui         t9,0x41
  00403EE4: 8F3912EC lw          t9,0x12EC(t9)
  00403EE8: 0320F809 jalr        ra,t9
  00403EEC: 00000000 nop
  00403EF0: 3C010041 lui         at,0x41
  00403EF4: AC20EEA0 sw          zero,0xEEA0(at)
  00403EF8: 3C040041 lui         a0,0x41
  00403EFC: 8C84EF20 lw          a0,0xEF20(a0)
  00403F00: 3C080041 lui         t0,0x41
  00403F04: 8D081300 lw          t0,0x1300(t0)
  00403F08: 0100F809 jalr        ra,t0
  00403F0C: 00000000 nop
  00403F10: 3C010041 lui         at,0x41
  00403F14: AC20E020 sw          zero,0xE020(at)
  00403F18: 1000000B b           00403F48
  00403F1C: 00000000 nop
  00403F20: 8FA40040 lw          a0,0x40(sp)
  00403F24: 3C050041 lui         a1,0x41
  00403F28: 24A5F000 addiu       a1,a1,0xF000
  00403F2C: 3C060041 lui         a2,0x41
  00403F30: 24C6EE60 addiu       a2,a2,0xEE60
  00403F34: 24070040 addiu       a3,zero,0x40
  00403F38: 3C180041 lui         t8,0x41
  00403F3C: 8F1812D4 lw          t8,0x12D4(t8)
  00403F40: 0300F809 jalr        ra,t8
  00403F44: 00000000 nop
  00403F48: 10000001 b           00403F50
  00403F4C: 00000000 nop
  00403F50: 8FBF0024 lw          ra,0x24(sp)
  00403F54: 27BD0040 addiu       sp,sp,0x40
  00403F58: 03E00008 jr          ra
  00403F5C: 00000000 nop
Next:
  00403F60: AFA40000 sw          a0,0(sp)
  00403F64: AFA50004 sw          a1,4(sp)
  00403F68: 8FAE0000 lw          t6,0(sp)
  00403F6C: 8DCF0000 lw          t7,0(t6)
  00403F70: 25F80001 addiu       t8,t7,1
  00403F74: ADD80000 sw          t8,0(t6)
  00403F78: 8FB90000 lw          t9,0(sp)
  00403F7C: 8F280000 lw          t0,0(t9)
  00403F80: 29010008 slti        at,t0,8
  00403F84: 1420000E bne         zero,at,00403FC0
  00403F88: 00000000 nop
  00403F8C: 8FA90000 lw          t1,0(sp)
  00403F90: AD200000 sw          zero,0(t1)
  00403F94: 8FAA0004 lw          t2,4(sp)
  00403F98: 8D4B0000 lw          t3,0(t2)
  00403F9C: 256C0001 addiu       t4,t3,1
  00403FA0: AD4C0000 sw          t4,0(t2)
  00403FA4: 8FAD0004 lw          t5,4(sp)
  00403FA8: 8DAF0000 lw          t7,0(t5)
  00403FAC: 29E10008 slti        at,t7,8
  00403FB0: 14200003 bne         zero,at,00403FC0
  00403FB4: 00000000 nop
  00403FB8: 8FB80004 lw          t8,4(sp)
  00403FBC: AF000000 sw          zero,0(t8)
  00403FC0: 10000001 b           00403FC8
  00403FC4: 00000000 nop
  00403FC8: 03E00008 jr          ra
  00403FCC: 00000000 nop
Previous:
  00403FD0: AFA40000 sw          a0,0(sp)
  00403FD4: AFA50004 sw          a1,4(sp)
  00403FD8: 8FAE0000 lw          t6,0(sp)
  00403FDC: 8DCF0000 lw          t7,0(t6)
  00403FE0: 25F8FFFF addiu       t8,t7,0xFFFF
  00403FE4: ADD80000 sw          t8,0(t6)
  00403FE8: 8FB90000 lw          t9,0(sp)
  00403FEC: 8F280000 lw          t0,0(t9)
  00403FF0: 0501000F bgez        t0,00404030
  00403FF4: 00000000 nop
  00403FF8: 24090007 addiu       t1,zero,7
  00403FFC: 8FAA0000 lw          t2,0(sp)
  00404000: AD490000 sw          t1,0(t2)
  00404004: 8FAB0004 lw          t3,4(sp)
  00404008: 8D6C0000 lw          t4,0(t3)
  0040400C: 258DFFFF addiu       t5,t4,0xFFFF
  00404010: AD6D0000 sw          t5,0(t3)
  00404014: 8FAF0004 lw          t7,4(sp)
  00404018: 8DF80000 lw          t8,0(t7)
  0040401C: 07010004 bgez        t8,00404030
  00404020: 00000000 nop
  00404024: 240E0007 addiu       t6,zero,7
  00404028: 8FB90004 lw          t9,4(sp)
  0040402C: AF2E0000 sw          t6,0(t9)
  00404030: 10000001 b           00404038
  00404034: 00000000 nop
  00404038: 03E00008 jr          ra
  0040403C: 00000000 nop
ShowNextMove:
  00404040: 27BDFFD8 addiu       sp,sp,0xFFD8
  00404044: AFBF0014 sw          ra,0x14(sp)
  00404048: AFA40028 sw          a0,0x28(sp)
  0040404C: AFA5002C sw          a1,0x2C(sp)
  00404050: 3C0E0041 lui         t6,0x41
  00404054: 8DCEF0A4 lw          t6,0xF0A4(t6)
  00404058: 24010014 addiu       at,zero,0x14
  0040405C: 15C10007 bne         at,t6,0040407C
  00404060: 00000000 nop
  00404064: 3C0F0041 lui         t7,0x41
  00404068: 8DEFF048 lw          t7,0xF048(t7)
  0040406C: 15E00003 bne         zero,t7,0040407C
  00404070: 00000000 nop
  00404074: 1000008C b           004042A8
  00404078: 00000000 nop
  0040407C: 3C180041 lui         t8,0x41
  00404080: 8F18EF18 lw          t8,0xEF18(t8)
  00404084: 3C190041 lui         t9,0x41
  00404088: 8F39F4A8 lw          t9,0xF4A8(t9)
  0040408C: 03194023 subu        t0,t8,t9
  00404090: 3C090041 lui         t1,0x41
  00404094: 8D29F068 lw          t1,0xF068(t1)
  00404098: 0109001A div         t0,t1
  0040409C: 15200002 bne         zero,t1,004040A8
  004040A0: 00000000 nop
  004040A4: 0007000D break
  004040A8: 2401FFFF addiu       at,zero,0xFFFF
  004040AC: 15210004 bne         at,t1,004040C0
  004040B0: 3C018000 lui         at,0x8000
  004040B4: 15010002 bne         at,t0,004040C0
  004040B8: 00000000 nop
  004040BC: 0006000D break
  004040C0: 00005012 mflo        t2
  004040C4: 00000000 nop
  004040C8: 00000000 nop
  004040CC: AFAA0024 sw          t2,0x24(sp)
  004040D0: 3C0B0041 lui         t3,0x41
  004040D4: 8D6BEF1C lw          t3,0xEF1C(t3)
  004040D8: 3C0C0041 lui         t4,0x41
  004040DC: 8D8CF4A0 lw          t4,0xF4A0(t4)
  004040E0: 016C6823 subu        t5,t3,t4
  004040E4: 3C0E0041 lui         t6,0x41
  004040E8: 8DCEEFF4 lw          t6,0xEFF4(t6)
  004040EC: 01AE001A div         t5,t6
  004040F0: 15C00002 bne         zero,t6,004040FC
  004040F4: 00000000 nop
  004040F8: 0007000D break
  004040FC: 2401FFFF addiu       at,zero,0xFFFF
  00404100: 15C10004 bne         at,t6,00404114
  00404104: 3C018000 lui         at,0x8000
  00404108: 15A10002 bne         at,t5,00404114
  0040410C: 00000000 nop
  00404110: 0006000D break
  00404114: 00007812 mflo        t7
  00404118: 00000000 nop
  0040411C: 00000000 nop
  00404120: AFAF0020 sw          t7,0x20(sp)
  00404124: AFA0001C sw          zero,0x1C(sp)
  00404128: 8FB8001C lw          t8,0x1C(sp)
  0040412C: 1700002F bne         zero,t8,004041EC
  00404130: 00000000 nop
  00404134: 8FB9002C lw          t9,0x2C(sp)
  00404138: 13200007 beq         zero,t9,00404158
  0040413C: 00000000 nop
  00404140: 27A40024 addiu       a0,sp,0x24
  00404144: 27A50020 addiu       a1,sp,0x20
  00404148: 0C100FD8 jal         Next
  0040414C: 00000000 nop
  00404150: 10000005 b           00404168
  00404154: 00000000 nop
  00404158: 27A40024 addiu       a0,sp,0x24
  0040415C: 27A50020 addiu       a1,sp,0x20
  00404160: 0C100FF4 jal         Previous
  00404164: 00000000 nop
  00404168: 8FA80024 lw          t0,0x24(sp)
  0040416C: 00084880 sll         t1,t0,2
  00404170: 01284821 addu        t1,t1,t0
  00404174: 00094840 sll         t1,t1,1
  00404178: 8FAA0020 lw          t2,0x20(sp)
  0040417C: 012A5821 addu        t3,t1,t2
  00404180: 256C000B addiu       t4,t3,0xB
  00404184: AFAC0018 sw          t4,0x18(sp)
  00404188: 3C0D0041 lui         t5,0x41
  0040418C: 01AC6821 addu        t5,t5,t4
  00404190: 91ADF0E0 lbu         t5,0xF0E0(t5)
  00404194: 24010001 addiu       at,zero,1
  00404198: 15A1FFE6 bne         at,t5,00404134
  0040419C: 00000000 nop
  004041A0: 240E0001 addiu       t6,zero,1
  004041A4: 3C010041 lui         at,0x41
  004041A8: AC2EE020 sw          t6,0xE020(at)
  004041AC: 3C040041 lui         a0,0x41
  004041B0: 2484F0E0 addiu       a0,a0,0xF0E0
  004041B4: 8FA50018 lw          a1,0x18(sp)
  004041B8: 24060002 addiu       a2,zero,2
  004041BC: 24070003 addiu       a3,zero,3
  004041C0: 0C101542 jal         legalcheck
  004041C4: 00000000 nop
  004041C8: 10400003 beq         zero,v0,004041D8
  004041CC: 00000000 nop
  004041D0: 240F0001 addiu       t7,zero,1
  004041D4: AFAF001C sw          t7,0x1C(sp)
  004041D8: 3C010041 lui         at,0x41
  004041DC: AC20E020 sw          zero,0xE020(at)
  004041E0: 8FB8001C lw          t8,0x1C(sp)
  004041E4: 1300FFD3 beq         zero,t8,00404134
  004041E8: 00000000 nop
  004041EC: 8FB90024 lw          t9,0x24(sp)
  004041F0: 3C080041 lui         t0,0x41
  004041F4: 8D08F068 lw          t0,0xF068(t0)
  004041F8: 03280019 multu       t9,t0
  004041FC: 00000000 nop
  00404200: 00000000 nop
  00404204: 00004812 mflo        t1
  00404208: 00000000 nop
  0040420C: 00000000 nop
  00404210: 3C0A0041 lui         t2,0x41
  00404214: 8D4AF4A8 lw          t2,0xF4A8(t2)
  00404218: 012A5821 addu        t3,t1,t2
  0040421C: 05010003 bgez        t0,0040422C
  00404220: 00086043 sra         t4,t0,1
  00404224: 25010001 addiu       at,t0,1
  00404228: 00016043 sra         t4,at,1
  0040422C: 016C6821 addu        t5,t3,t4
  00404230: 3C010041 lui         at,0x41
  00404234: AC2DEF18 sw          t5,0xEF18(at)
  00404238: 8FAE0020 lw          t6,0x20(sp)
  0040423C: 3C0F0041 lui         t7,0x41
  00404240: 8DEFEFF4 lw          t7,0xEFF4(t7)
  00404244: 01CF0019 multu       t6,t7
  00404248: 00000000 nop
  0040424C: 00000000 nop
  00404250: 0000C012 mflo        t8
  00404254: 00000000 nop
  00404258: 00000000 nop
  0040425C: 3C190041 lui         t9,0x41
  00404260: 8F39F4A0 lw          t9,0xF4A0(t9)
  00404264: 03194821 addu        t1,t8,t9
  00404268: 05E10003 bgez        t7,00404278
  0040426C: 000F5043 sra         t2,t7,1
  00404270: 25E10001 addiu       at,t7,1
  00404274: 00015043 sra         t2,at,1
  00404278: 012A4021 addu        t0,t1,t2
  0040427C: 3C010041 lui         at,0x41
  00404280: AC28EF1C sw          t0,0xEF1C(at)
  00404284: 8FA40028 lw          a0,0x28(sp)
  00404288: 0C100400 jal         UpdateCursor
  0040428C: 00000000 nop
  00404290: 3C0B0041 lui         t3,0x41
  00404294: 256BEF18 addiu       t3,t3,0xEF18
  00404298: 8D640000 lw          a0,0(t3)
  0040429C: 8D650004 lw          a1,4(t3)
  004042A0: 0C100920 jal         RevMouseMove
  004042A4: 00000000 nop
  004042A8: 10000001 b           004042B0
  004042AC: 00000000 nop
  004042B0: 8FBF0014 lw          ra,0x14(sp)
  004042B4: 27BD0028 addiu       sp,sp,0x28
  004042B8: 03E00008 jr          ra
  004042BC: 00000000 nop
RevChar:
  004042C0: 27BDFFD0 addiu       sp,sp,0xFFD0
  004042C4: AFBF0014 sw          ra,0x14(sp)
  004042C8: AFA40030 sw          a0,0x30(sp)
  004042CC: AFA50034 sw          a1,0x34(sp)
  004042D0: 240E0001 addiu       t6,zero,1
  004042D4: AFAE002C sw          t6,0x2C(sp)
  004042D8: 240F0001 addiu       t7,zero,1
  004042DC: AFAF0028 sw          t7,0x28(sp)
  004042E0: 97B80034 lhu         t8,0x34(sp)
  004042E4: AFB80020 sw          t8,0x20(sp)
  004042E8: 2719FFF7 addiu       t9,t8,0xFFF7
  004042EC: 2F210020 sltiu       at,t9,0x20
  004042F0: 10200111 beq         zero,at,$290
  004042F4: 00000000 nop
  004042F8: 0019C880 sll         t9,t9,2
  004042FC: 3C010041 lui         at,0x41
  00404300: 00390821 addu        at,at,t9
  00404304: 8C39D0F4 lw          t9,0xD0F4(at)
  00404308: 03200008 jr          t9
  0040430C: 00000000 nop
$276:
  00404310: 3C080041 lui         t0,0x41
  00404314: 8D08EF18 lw          t0,0xEF18(t0)
  00404318: 3C090041 lui         t1,0x41
  0040431C: 8D29F068 lw          t1,0xF068(t1)
  00404320: 01095021 addu        t2,t0,t1
  00404324: 3C010041 lui         at,0x41
  00404328: AC2AEF18 sw          t2,0xEF18(at)
  0040432C: 10000106 b           00404748
  00404330: 00000000 nop
$277:
  00404334: 3C0B0041 lui         t3,0x41
  00404338: 8D6BEF1C lw          t3,0xEF1C(t3)
  0040433C: 3C0C0041 lui         t4,0x41
  00404340: 8D8CEFF4 lw          t4,0xEFF4(t4)
  00404344: 016C6821 addu        t5,t3,t4
  00404348: 3C010041 lui         at,0x41
  0040434C: AC2DEF1C sw          t5,0xEF1C(at)
  00404350: 100000FD b           00404748
  00404354: 00000000 nop
$278:
  00404358: 3C0E0041 lui         t6,0x41
  0040435C: 8DCEEF18 lw          t6,0xEF18(t6)
  00404360: 3C0F0041 lui         t7,0x41
  00404364: 8DEFF4A8 lw          t7,0xF4A8(t7)
  00404368: 01CFC023 subu        t8,t6,t7
  0040436C: 3C190041 lui         t9,0x41
  00404370: 8F39F068 lw          t9,0xF068(t9)
  00404374: 0319001A div         t8,t9
  00404378: 17200002 bne         zero,t9,00404384
  0040437C: 00000000 nop
  00404380: 0007000D break
  00404384: 2401FFFF addiu       at,zero,0xFFFF
  00404388: 17210004 bne         at,t9,0040439C
  0040438C: 3C018000 lui         at,0x8000
  00404390: 17010002 bne         at,t8,0040439C
  00404394: 00000000 nop
  00404398: 0006000D break
  0040439C: 00004012 mflo        t0
  004043A0: 00000000 nop
  004043A4: 00000000 nop
  004043A8: AFA80028 sw          t0,0x28(sp)
  004043AC: 3C090041 lui         t1,0x41
  004043B0: 8D29EF18 lw          t1,0xEF18(t1)
  004043B4: 3C0A0041 lui         t2,0x41
  004043B8: 8D4AF068 lw          t2,0xF068(t2)
  004043BC: 012A5823 subu        t3,t1,t2
  004043C0: 3C010041 lui         at,0x41
  004043C4: AC2BEF18 sw          t3,0xEF18(at)
  004043C8: 100000DF b           00404748
  004043CC: 00000000 nop
$279:
  004043D0: 3C0C0041 lui         t4,0x41
  004043D4: 8D8CEF1C lw          t4,0xEF1C(t4)
  004043D8: 3C0D0041 lui         t5,0x41
  004043DC: 8DADF4A0 lw          t5,0xF4A0(t5)
  004043E0: 018D7023 subu        t6,t4,t5
  004043E4: 3C0F0041 lui         t7,0x41
  004043E8: 8DEFEFF4 lw          t7,0xEFF4(t7)
  004043EC: 01CF001A div         t6,t7
  004043F0: 15E00002 bne         zero,t7,004043FC
  004043F4: 00000000 nop
  004043F8: 0007000D break
  004043FC: 2401FFFF addiu       at,zero,0xFFFF
  00404400: 15E10004 bne         at,t7,00404414
  00404404: 3C018000 lui         at,0x8000
  00404408: 15C10002 bne         at,t6,00404414
  0040440C: 00000000 nop
  00404410: 0006000D break
  00404414: 0000C012 mflo        t8
  00404418: 00000000 nop
  0040441C: 00000000 nop
  00404420: AFB8002C sw          t8,0x2C(sp)
  00404424: 3C190041 lui         t9,0x41
  00404428: 8F39EF1C lw          t9,0xEF1C(t9)
  0040442C: 3C080041 lui         t0,0x41
  00404430: 8D08EFF4 lw          t0,0xEFF4(t0)
  00404434: 03284823 subu        t1,t9,t0
  00404438: 3C010041 lui         at,0x41
  0040443C: AC29EF1C sw          t1,0xEF1C(at)
  00404440: 100000C1 b           00404748
  00404444: 00000000 nop
$280:
  00404448: 3C0A0041 lui         t2,0x41
  0040444C: 8D4AEF1C lw          t2,0xEF1C(t2)
  00404450: 3C0B0041 lui         t3,0x41
  00404454: 8D6BF4A0 lw          t3,0xF4A0(t3)
  00404458: 014B6023 subu        t4,t2,t3
  0040445C: 3C0D0041 lui         t5,0x41
  00404460: 8DADEFF4 lw          t5,0xEFF4(t5)
  00404464: 018D001A div         t4,t5
  00404468: 15A00002 bne         zero,t5,00404474
  0040446C: 00000000 nop
  00404470: 0007000D break
  00404474: 2401FFFF addiu       at,zero,0xFFFF
  00404478: 15A10004 bne         at,t5,0040448C
  0040447C: 3C018000 lui         at,0x8000
  00404480: 15810002 bne         at,t4,0040448C
  00404484: 00000000 nop
  00404488: 0006000D break
  0040448C: 00007012 mflo        t6
  00404490: 00000000 nop
  00404494: 00000000 nop
  00404498: AFAE002C sw          t6,0x2C(sp)
  0040449C: 3C0F0041 lui         t7,0x41
  004044A0: 8DEFEF18 lw          t7,0xEF18(t7)
  004044A4: 3C180041 lui         t8,0x41
  004044A8: 8F18F4A8 lw          t8,0xF4A8(t8)
  004044AC: 01F8C823 subu        t9,t7,t8
  004044B0: 3C080041 lui         t0,0x41
  004044B4: 8D08F068 lw          t0,0xF068(t0)
  004044B8: 0328001A div         t9,t0
  004044BC: 15000002 bne         zero,t0,004044C8
  004044C0: 00000000 nop
  004044C4: 0007000D break
  004044C8: 2401FFFF addiu       at,zero,0xFFFF
  004044CC: 15010004 bne         at,t0,004044E0
  004044D0: 3C018000 lui         at,0x8000
  004044D4: 17210002 bne         at,t9,004044E0
  004044D8: 00000000 nop
  004044DC: 0006000D break
  004044E0: 00004812 mflo        t1
  004044E4: 00000000 nop
  004044E8: 00000000 nop
  004044EC: AFA90028 sw          t1,0x28(sp)
  004044F0: 3C0A0041 lui         t2,0x41
  004044F4: 8D4AEF1C lw          t2,0xEF1C(t2)
  004044F8: 3C0B0041 lui         t3,0x41
  004044FC: 8D6BEFF4 lw          t3,0xEFF4(t3)
  00404500: 014B6023 subu        t4,t2,t3
  00404504: 3C010041 lui         at,0x41
  00404508: AC2CEF1C sw          t4,0xEF1C(at)
  0040450C: 3C0D0041 lui         t5,0x41
  00404510: 8DADEF18 lw          t5,0xEF18(t5)
  00404514: 3C0E0041 lui         t6,0x41
  00404518: 8DCEF068 lw          t6,0xF068(t6)
  0040451C: 01AE7823 subu        t7,t5,t6
  00404520: 3C010041 lui         at,0x41
  00404524: AC2FEF18 sw          t7,0xEF18(at)
  00404528: 10000087 b           00404748
  0040452C: 00000000 nop
$281:
  00404530: 3C180041 lui         t8,0x41
  00404534: 8F18EF1C lw          t8,0xEF1C(t8)
  00404538: 3C190041 lui         t9,0x41
  0040453C: 8F39F4A0 lw          t9,0xF4A0(t9)
  00404540: 03194023 subu        t0,t8,t9
  00404544: 3C090041 lui         t1,0x41
  00404548: 8D29EFF4 lw          t1,0xEFF4(t1)
  0040454C: 0109001A div         t0,t1
  00404550: 15200002 bne         zero,t1,0040455C
  00404554: 00000000 nop
  00404558: 0007000D break
  0040455C: 2401FFFF addiu       at,zero,0xFFFF
  00404560: 15210004 bne         at,t1,00404574
  00404564: 3C018000 lui         at,0x8000
  00404568: 15010002 bne         at,t0,00404574
  0040456C: 00000000 nop
  00404570: 0006000D break
  00404574: 00005012 mflo        t2
  00404578: 00000000 nop
  0040457C: 00000000 nop
  00404580: AFAA002C sw          t2,0x2C(sp)
  00404584: 3C0B0041 lui         t3,0x41
  00404588: 8D6BEF1C lw          t3,0xEF1C(t3)
  0040458C: 3C0C0041 lui         t4,0x41
  00404590: 8D8CEFF4 lw          t4,0xEFF4(t4)
  00404594: 016C6823 subu        t5,t3,t4
  00404598: 3C010041 lui         at,0x41
  0040459C: AC2DEF1C sw          t5,0xEF1C(at)
  004045A0: 3C0E0041 lui         t6,0x41
  004045A4: 8DCEEF18 lw          t6,0xEF18(t6)
  004045A8: 3C0F0041 lui         t7,0x41
  004045AC: 8DEFF068 lw          t7,0xF068(t7)
  004045B0: 01CFC021 addu        t8,t6,t7
  004045B4: 3C010041 lui         at,0x41
  004045B8: AC38EF18 sw          t8,0xEF18(at)
  004045BC: 10000062 b           00404748
  004045C0: 00000000 nop
$282:
  004045C4: 3C190041 lui         t9,0x41
  004045C8: 8F39EF18 lw          t9,0xEF18(t9)
  004045CC: 3C080041 lui         t0,0x41
  004045D0: 8D08F4A8 lw          t0,0xF4A8(t0)
  004045D4: 03284823 subu        t1,t9,t0
  004045D8: 3C0A0041 lui         t2,0x41
  004045DC: 8D4AF068 lw          t2,0xF068(t2)
  004045E0: 012A001A div         t1,t2
  004045E4: 15400002 bne         zero,t2,004045F0
  004045E8: 00000000 nop
  004045EC: 0007000D break
  004045F0: 2401FFFF addiu       at,zero,0xFFFF
  004045F4: 15410004 bne         at,t2,00404608
  004045F8: 3C018000 lui         at,0x8000
  004045FC: 15210002 bne         at,t1,00404608
  00404600: 00000000 nop
  00404604: 0006000D break
  00404608: 00005812 mflo        t3
  0040460C: 00000000 nop
  00404610: 00000000 nop
  00404614: AFAB0028 sw          t3,0x28(sp)
  00404618: 3C0C0041 lui         t4,0x41
  0040461C: 8D8CEF1C lw          t4,0xEF1C(t4)
  00404620: 3C0D0041 lui         t5,0x41
  00404624: 8DADEFF4 lw          t5,0xEFF4(t5)
  00404628: 018D7021 addu        t6,t4,t5
  0040462C: 3C010041 lui         at,0x41
  00404630: AC2EEF1C sw          t6,0xEF1C(at)
  00404634: 3C0F0041 lui         t7,0x41
  00404638: 8DEFEF18 lw          t7,0xEF18(t7)
  0040463C: 3C180041 lui         t8,0x41
  00404640: 8F18F068 lw          t8,0xF068(t8)
  00404644: 01F8C823 subu        t9,t7,t8
  00404648: 3C010041 lui         at,0x41
  0040464C: AC39EF18 sw          t9,0xEF18(at)
  00404650: 1000003D b           00404748
  00404654: 00000000 nop
$283:
  00404658: 3C080041 lui         t0,0x41
  0040465C: 8D08EF1C lw          t0,0xEF1C(t0)
  00404660: 3C090041 lui         t1,0x41
  00404664: 8D29EFF4 lw          t1,0xEFF4(t1)
  00404668: 01095021 addu        t2,t0,t1
  0040466C: 3C010041 lui         at,0x41
  00404670: AC2AEF1C sw          t2,0xEF1C(at)
  00404674: 3C0B0041 lui         t3,0x41
  00404678: 8D6BEF18 lw          t3,0xEF18(t3)
  0040467C: 3C0C0041 lui         t4,0x41
  00404680: 8D8CF068 lw          t4,0xF068(t4)
  00404684: 016C6821 addu        t5,t3,t4
  00404688: 3C010041 lui         at,0x41
  0040468C: AC2DEF18 sw          t5,0xEF18(at)
  00404690: 1000002D b           00404748
  00404694: 00000000 nop
$284:
  00404698: 3C0E0041 lui         t6,0x41
  0040469C: 8DCEE020 lw          t6,0xE020(t6)
  004046A0: 15C00008 bne         zero,t6,004046C4
  004046A4: 00000000 nop
  004046A8: 8FA40030 lw          a0,0x30(sp)
  004046AC: 3C0F0041 lui         t7,0x41
  004046B0: 25EFEF18 addiu       t7,t7,0xEF18
  004046B4: 8DE50000 lw          a1,0(t7)
  004046B8: 8DE60004 lw          a2,4(t7)
  004046BC: 0C100F06 jal         RevMouseClick
  004046C0: 00000000 nop
  004046C4: 100000E5 b           00404A5C
  004046C8: 00000000 nop
$286:
  004046CC: 3C180041 lui         t8,0x41
  004046D0: 8F18E020 lw          t8,0xE020(t8)
  004046D4: 13000003 beq         zero,t8,004046E4
  004046D8: 00000000 nop
  004046DC: 1000001A b           00404748
  004046E0: 00000000 nop
  004046E4: 24040010 addiu       a0,zero,0x10
  004046E8: 3C190041 lui         t9,0x41
  004046EC: 8F3912E4 lw          t9,0x12E4(t9)
  004046F0: 0320F809 jalr        ra,t9
  004046F4: 00000000 nop
  004046F8: A7A2001E sh          v0,0x1E(sp)
  004046FC: 87A8001E lh          t0,0x1E(sp)
  00404700: 05010007 bgez        t0,00404720
  00404704: 00000000 nop
  00404708: 8FA40030 lw          a0,0x30(sp)
  0040470C: 00002825 or          a1,zero,zero
  00404710: 0C101010 jal         ShowNextMove
  00404714: 00000000 nop
  00404718: 10000005 b           00404730
  0040471C: 00000000 nop
  00404720: 8FA40030 lw          a0,0x30(sp)
  00404724: 24050001 addiu       a1,zero,1
  00404728: 0C101010 jal         ShowNextMove
  0040472C: 00000000 nop
  00404730: 100000CA b           00404A5C
  00404734: 00000000 nop
$290:
  00404738: 100000C8 b           00404A5C
  0040473C: 00000000 nop
  00404740: 10000001 b           00404748
  00404744: 00000000 nop
  00404748: 3C090041 lui         t1,0x41
  0040474C: 8D29EF18 lw          t1,0xEF18(t1)
  00404750: 3C0A0041 lui         t2,0x41
  00404754: 8D4AF4A8 lw          t2,0xF4A8(t2)
  00404758: 012A5823 subu        t3,t1,t2
  0040475C: 3C0C0041 lui         t4,0x41
  00404760: 8D8CF068 lw          t4,0xF068(t4)
  00404764: 016C001A div         t3,t4
  00404768: 15800002 bne         zero,t4,00404774
  0040476C: 00000000 nop
  00404770: 0007000D break
  00404774: 2401FFFF addiu       at,zero,0xFFFF
  00404778: 15810004 bne         at,t4,0040478C
  0040477C: 3C018000 lui         at,0x8000
  00404780: 15610002 bne         at,t3,0040478C
  00404784: 00000000 nop
  00404788: 0006000D break
  0040478C: 00006812 mflo        t5
  00404790: 00000000 nop
  00404794: 00000000 nop
  00404798: AFAD0024 sw          t5,0x24(sp)
  0040479C: 29A10008 slti        at,t5,8
  004047A0: 10200003 beq         zero,at,004047B0
  004047A4: 00000000 nop
  004047A8: 1DA0000C bgtz        t5,004047DC
  004047AC: 00000000 nop
  004047B0: 3C0E0041 lui         t6,0x41
  004047B4: 8DCEF4A8 lw          t6,0xF4A8(t6)
  004047B8: 3C0F0041 lui         t7,0x41
  004047BC: 8DEFF068 lw          t7,0xF068(t7)
  004047C0: 05E10003 bgez        t7,004047D0
  004047C4: 000FC043 sra         t8,t7,1
  004047C8: 25E10001 addiu       at,t7,1
  004047CC: 0001C043 sra         t8,at,1
  004047D0: 01D8C821 addu        t9,t6,t8
  004047D4: 3C010041 lui         at,0x41
  004047D8: AC39EF18 sw          t9,0xEF18(at)
  004047DC: 8FA80024 lw          t0,0x24(sp)
  004047E0: 29010009 slti        at,t0,9
  004047E4: 10200006 beq         zero,at,00404800
  004047E8: 00000000 nop
  004047EC: 8FA90028 lw          t1,0x28(sp)
  004047F0: 15200011 bne         zero,t1,00404838
  004047F4: 00000000 nop
  004047F8: 1500000F bne         zero,t0,00404838
  004047FC: 00000000 nop
  00404800: 3C0A0041 lui         t2,0x41
  00404804: 8D4AF068 lw          t2,0xF068(t2)
  00404808: 000A58C0 sll         t3,t2,3
  0040480C: 016A5823 subu        t3,t3,t2
  00404810: 3C0C0041 lui         t4,0x41
  00404814: 8D8CF4A8 lw          t4,0xF4A8(t4)
  00404818: 016C6821 addu        t5,t3,t4
  0040481C: 05410003 bgez        t2,0040482C
  00404820: 000A7843 sra         t7,t2,1
  00404824: 25410001 addiu       at,t2,1
  00404828: 00017843 sra         t7,at,1
  0040482C: 01AF7021 addu        t6,t5,t7
  00404830: 3C010041 lui         at,0x41
  00404834: AC2EEF18 sw          t6,0xEF18(at)
  00404838: 3C180041 lui         t8,0x41
  0040483C: 8F18EF1C lw          t8,0xEF1C(t8)
  00404840: 3C190041 lui         t9,0x41
  00404844: 8F39F4A0 lw          t9,0xF4A0(t9)
  00404848: 03194823 subu        t1,t8,t9
  0040484C: 3C080041 lui         t0,0x41
  00404850: 8D08EFF4 lw          t0,0xEFF4(t0)
  00404854: 0128001A div         t1,t0
  00404858: 15000002 bne         zero,t0,00404864
  0040485C: 00000000 nop
  00404860: 0007000D break
  00404864: 2401FFFF addiu       at,zero,0xFFFF
  00404868: 15010004 bne         at,t0,0040487C
  0040486C: 3C018000 lui         at,0x8000
  00404870: 15210002 bne         at,t1,0040487C
  00404874: 00000000 nop
  00404878: 0006000D break
  0040487C: 00005812 mflo        t3
  00404880: 00000000 nop
  00404884: 00000000 nop
  00404888: AFAB0024 sw          t3,0x24(sp)
  0040488C: 29610008 slti        at,t3,8
  00404890: 10200003 beq         zero,at,004048A0
  00404894: 00000000 nop
  00404898: 1D60000C bgtz        t3,004048CC
  0040489C: 00000000 nop
  004048A0: 3C0C0041 lui         t4,0x41
  004048A4: 8D8CF4A0 lw          t4,0xF4A0(t4)
  004048A8: 3C0A0041 lui         t2,0x41
  004048AC: 8D4AEFF4 lw          t2,0xEFF4(t2)
  004048B0: 05410003 bgez        t2,004048C0
  004048B4: 000A6843 sra         t5,t2,1
  004048B8: 25410001 addiu       at,t2,1
  004048BC: 00016843 sra         t5,at,1
  004048C0: 018D7821 addu        t7,t4,t5
  004048C4: 3C010041 lui         at,0x41
  004048C8: AC2FEF1C sw          t7,0xEF1C(at)
  004048CC: 8FAE0024 lw          t6,0x24(sp)
  004048D0: 29C10009 slti        at,t6,9
  004048D4: 10200006 beq         zero,at,004048F0
  004048D8: 00000000 nop
  004048DC: 8FB8002C lw          t8,0x2C(sp)
  004048E0: 17000011 bne         zero,t8,00404928
  004048E4: 00000000 nop
  004048E8: 15C0000F bne         zero,t6,00404928
  004048EC: 00000000 nop
  004048F0: 3C190041 lui         t9,0x41
  004048F4: 8F39EFF4 lw          t9,0xEFF4(t9)
  004048F8: 001948C0 sll         t1,t9,3
  004048FC: 01394823 subu        t1,t1,t9
  00404900: 3C080041 lui         t0,0x41
  00404904: 8D08F4A0 lw          t0,0xF4A0(t0)
  00404908: 01285821 addu        t3,t1,t0
  0040490C: 07210003 bgez        t9,0040491C
  00404910: 00195043 sra         t2,t9,1
  00404914: 27210001 addiu       at,t9,1
  00404918: 00015043 sra         t2,at,1
  0040491C: 016A6021 addu        t4,t3,t2
  00404920: 3C010041 lui         at,0x41
  00404924: AC2CEF1C sw          t4,0xEF1C(at)
  00404928: 3C0D0041 lui         t5,0x41
  0040492C: 8DADEF18 lw          t5,0xEF18(t5)
  00404930: 3C0F0041 lui         t7,0x41
  00404934: 8DEFF4A8 lw          t7,0xF4A8(t7)
  00404938: 01AFC023 subu        t8,t5,t7
  0040493C: 3C0E0041 lui         t6,0x41
  00404940: 8DCEF068 lw          t6,0xF068(t6)
  00404944: 030E001A div         t8,t6
  00404948: 15C00002 bne         zero,t6,00404954
  0040494C: 00000000 nop
  00404950: 0007000D break
  00404954: 2401FFFF addiu       at,zero,0xFFFF
  00404958: 15C10004 bne         at,t6,0040496C
  0040495C: 3C018000 lui         at,0x8000
  00404960: 17010002 bne         at,t8,0040496C
  00404964: 00000000 nop
  00404968: 0006000D break
  0040496C: 00004812 mflo        t1
  00404970: 00000000 nop
  00404974: 00000000 nop
  00404978: 012E0019 multu       t1,t6
  0040497C: 00000000 nop
  00404980: 00000000 nop
  00404984: 00004012 mflo        t0
  00404988: 00000000 nop
  0040498C: 00000000 nop
  00404990: 010FC821 addu        t9,t0,t7
  00404994: 05C10003 bgez        t6,004049A4
  00404998: 000E5843 sra         t3,t6,1
  0040499C: 25C10001 addiu       at,t6,1
  004049A0: 00015843 sra         t3,at,1
  004049A4: 032B5021 addu        t2,t9,t3
  004049A8: 3C010041 lui         at,0x41
  004049AC: AC2AEF18 sw          t2,0xEF18(at)
  004049B0: 3C0C0041 lui         t4,0x41
  004049B4: 8D8CEF1C lw          t4,0xEF1C(t4)
  004049B8: 3C0D0041 lui         t5,0x41
  004049BC: 8DADF4A0 lw          t5,0xF4A0(t5)
  004049C0: 018DC023 subu        t8,t4,t5
  004049C4: 3C090041 lui         t1,0x41
  004049C8: 8D29EFF4 lw          t1,0xEFF4(t1)
  004049CC: 0309001A div         t8,t1
  004049D0: 15200002 bne         zero,t1,004049DC
  004049D4: 00000000 nop
  004049D8: 0007000D break
  004049DC: 2401FFFF addiu       at,zero,0xFFFF
  004049E0: 15210004 bne         at,t1,004049F4
  004049E4: 3C018000 lui         at,0x8000
  004049E8: 17010002 bne         at,t8,004049F4
  004049EC: 00000000 nop
  004049F0: 0006000D break
  004049F4: 00004012 mflo        t0
  004049F8: 00000000 nop
  004049FC: 00000000 nop
  00404A00: 01090019 multu       t0,t1
  00404A04: 00000000 nop
  00404A08: 00000000 nop
  00404A0C: 00007812 mflo        t7
  00404A10: 00000000 nop
  00404A14: 00000000 nop
  00404A18: 01ED7021 addu        t6,t7,t5
  00404A1C: 05210003 bgez        t1,00404A2C
  00404A20: 0009C843 sra         t9,t1,1
  00404A24: 25210001 addiu       at,t1,1
  00404A28: 0001C843 sra         t9,at,1
  00404A2C: 01D95821 addu        t3,t6,t9
  00404A30: 3C010041 lui         at,0x41
  00404A34: AC2BEF1C sw          t3,0xEF1C(at)
  00404A38: 8FA40030 lw          a0,0x30(sp)
  00404A3C: 0C100400 jal         UpdateCursor
  00404A40: 00000000 nop
  00404A44: 3C0A0041 lui         t2,0x41
  00404A48: 254AEF18 addiu       t2,t2,0xEF18
  00404A4C: 8D440000 lw          a0,0(t2)
  00404A50: 8D450004 lw          a1,4(t2)
  00404A54: 0C100920 jal         RevMouseMove
  00404A58: 00000000 nop
  00404A5C: 10000001 b           00404A64
  00404A60: 00000000 nop
  00404A64: 8FBF0014 lw          ra,0x14(sp)
  00404A68: 27BD0030 addiu       sp,sp,0x30
  00404A6C: 03E00008 jr          ra
  00404A70: 00000000 nop
InverseMessage:
  00404A74: 27BDFFD8 addiu       sp,sp,0xFFD8
  00404A78: AFBF001C sw          ra,0x1C(sp)
  00404A7C: AFA40028 sw          a0,0x28(sp)
  00404A80: AFA5002C sw          a1,0x2C(sp)
  00404A84: AFA60030 sw          a2,0x30(sp)
  00404A88: AFA70034 sw          a3,0x34(sp)
  00404A8C: 3C0E0041 lui         t6,0x41
  00404A90: 8DCEF450 lw          t6,0xF450(t6)
  00404A94: 3C0F0041 lui         t7,0x41
  00404A98: 8DEFF054 lw          t7,0xF054(t7)
  00404A9C: 01EE082A slt         at,t7,t6
  00404AA0: 14200023 bne         zero,at,00404B30
  00404AA4: 00000000 nop
  00404AA8: 8FA40028 lw          a0,0x28(sp)
  00404AAC: 3C180041 lui         t8,0x41
  00404AB0: 8F1812B8 lw          t8,0x12B8(t8)
  00404AB4: 0300F809 jalr        ra,t8
  00404AB8: 00000000 nop
  00404ABC: AFA20024 sw          v0,0x24(sp)
  00404AC0: 8FA40024 lw          a0,0x24(sp)
  00404AC4: 00002825 or          a1,zero,zero
  00404AC8: 00003025 or          a2,zero,zero
  00404ACC: 3C070041 lui         a3,0x41
  00404AD0: 8CE7EF6C lw          a3,0xEF6C(a3)
  00404AD4: 3C190041 lui         t9,0x41
  00404AD8: 8F39EF78 lw          t9,0xEF78(t9)
  00404ADC: AFB90010 sw          t9,0x10(sp)
  00404AE0: 3C080055 lui         t0,0x55
  00404AE4: 35080009 ori         t0,t0,9
  00404AE8: AFA80014 sw          t0,0x14(sp)
  00404AEC: 3C090041 lui         t1,0x41
  00404AF0: 8D291204 lw          t1,0x1204(t1)
  00404AF4: 0120F809 jalr        ra,t1
  00404AF8: 00000000 nop
  00404AFC: 3C0A0041 lui         t2,0x41
  00404B00: 8D4AF450 lw          t2,0xF450(t2)
  00404B04: 254B0001 addiu       t3,t2,1
  00404B08: 3C010041 lui         at,0x41
  00404B0C: AC2BF450 sw          t3,0xF450(at)
  00404B10: 8FA40028 lw          a0,0x28(sp)
  00404B14: 8FA50024 lw          a1,0x24(sp)
  00404B18: 3C0C0041 lui         t4,0x41
  00404B1C: 8D8C12EC lw          t4,0x12EC(t4)
  00404B20: 0180F809 jalr        ra,t4
  00404B24: 00000000 nop
  00404B28: 10000007 b           00404B48
  00404B2C: 00000000 nop
  00404B30: 8FA40028 lw          a0,0x28(sp)
  00404B34: 2405029A addiu       a1,zero,0x29A
  00404B38: 3C0D0041 lui         t5,0x41
  00404B3C: 8DAD12D8 lw          t5,0x12D8(t5)
  00404B40: 01A0F809 jalr        ra,t5
  00404B44: 00000000 nop
  00404B48: 00001025 or          v0,zero,zero
  00404B4C: 10000001 b           00404B54
  00404B50: 00000000 nop
  00404B54: 10000001 b           00404B5C
  00404B58: 00000000 nop
  00404B5C: 8FBF001C lw          ra,0x1C(sp)
  00404B60: 27BD0028 addiu       sp,sp,0x28
  00404B64: 03E00008 jr          ra
  00404B68: 00000000 nop
ReversiWndProc:
  00404B6C: 27BDFF88 addiu       sp,sp,0xFF88
  00404B70: AFBF0014 sw          ra,0x14(sp)
  00404B74: AFA40078 sw          a0,0x78(sp)
  00404B78: AFA5007C sw          a1,0x7C(sp)
  00404B7C: AFA60080 sw          a2,0x80(sp)
  00404B80: AFA70084 sw          a3,0x84(sp)
  00404B84: 8FAE007C lw          t6,0x7C(sp)
  00404B88: AFAE0018 sw          t6,0x18(sp)
  00404B8C: 2DC10201 sltiu       at,t6,0x201
  00404B90: 10200022 beq         zero,at,00404C1C
  00404B94: 00000000 nop
  00404B98: 2DC10117 sltiu       at,t6,0x117
  00404B9C: 10200019 beq         zero,at,00404C04
  00404BA0: 00000000 nop
  00404BA4: 2DC10011 sltiu       at,t6,0x11
  00404BA8: 1020000B beq         zero,at,00404BD8
  00404BAC: 00000000 nop
  00404BB0: 25CFFFFF addiu       t7,t6,0xFFFF
  00404BB4: 2DE10010 sltiu       at,t7,0x10
  00404BB8: 10200138 beq         zero,at,$340
  00404BBC: 00000000 nop
  00404BC0: 000F7880 sll         t7,t7,2
  00404BC4: 3C010041 lui         at,0x41
  00404BC8: 002F0821 addu        at,at,t7
  00404BCC: 8C2FD174 lw          t7,0xD174(at)
  00404BD0: 01E00008 jr          t7
  00404BD4: 00000000 nop
  00404BD8: 8FB80018 lw          t8,0x18(sp)
  00404BDC: 2719FF00 addiu       t9,t8,0xFF00
  00404BE0: 2F210017 sltiu       at,t9,0x17
  00404BE4: 1020012D beq         zero,at,$340
  00404BE8: 00000000 nop
  00404BEC: 0019C880 sll         t9,t9,2
  00404BF0: 3C010041 lui         at,0x41
  00404BF4: 00390821 addu        at,at,t9
  00404BF8: 8C39D1B4 lw          t9,0xD1B4(at)
  00404BFC: 03200008 jr          t9
  00404C00: 00000000 nop
  00404C04: 8FA80018 lw          t0,0x18(sp)
  00404C08: 24010200 addiu       at,zero,0x200
  00404C0C: 110100DC beq         at,t0,00404F80
  00404C10: 00000000 nop
  00404C14: 10000121 b           $340
  00404C18: 00000000 nop
  00404C1C: 8FA90018 lw          t1,0x18(sp)
  00404C20: 24010201 addiu       at,zero,0x201
  00404C24: 112100F1 beq         at,t1,00404FEC
  00404C28: 00000000 nop
  00404C2C: 24010202 addiu       at,zero,0x202
  00404C30: 112100F8 beq         at,t1,00405014
  00404C34: 00000000 nop
  00404C38: 10000118 b           $340
  00404C3C: 00000000 nop
$315:
  00404C40: 8FA40078 lw          a0,0x78(sp)
  00404C44: 97A50080 lhu         a1,0x80(sp)
  00404C48: 0C100C6E jal         RevMenu
  00404C4C: 00000000 nop
  00404C50: 10000120 b           004050D4
  00404C54: 00000000 nop
$316:
  00404C58: 8FA40078 lw          a0,0x78(sp)
  00404C5C: 3C0A0041 lui         t2,0x41
  00404C60: 8D4A12F8 lw          t2,0x12F8(t2)
  00404C64: 0140F809 jalr        ra,t2
  00404C68: 00000000 nop
  00404C6C: AFA20074 sw          v0,0x74(sp)
  00404C70: 3C0B0041 lui         t3,0x41
  00404C74: 8D6BE020 lw          t3,0xE020(t3)
  00404C78: 11600011 beq         zero,t3,00404CC0
  00404C7C: 00000000 nop
  00404C80: 8FA40074 lw          a0,0x74(sp)
  00404C84: 00002825 or          a1,zero,zero
  00404C88: 24060402 addiu       a2,zero,0x402
  00404C8C: 3C0C0041 lui         t4,0x41
  00404C90: 8D8C12CC lw          t4,0x12CC(t4)
  00404C94: 0180F809 jalr        ra,t4
  00404C98: 00000000 nop
  00404C9C: 8FA40074 lw          a0,0x74(sp)
  00404CA0: 24050001 addiu       a1,zero,1
  00404CA4: 24060402 addiu       a2,zero,0x402
  00404CA8: 3C0D0041 lui         t5,0x41
  00404CAC: 8DAD12CC lw          t5,0x12CC(t5)
  00404CB0: 01A0F809 jalr        ra,t5
  00404CB4: 00000000 nop
  00404CB8: 1000000F b           00404CF8
  00404CBC: 00000000 nop
  00404CC0: 8FA40074 lw          a0,0x74(sp)
  00404CC4: 00002825 or          a1,zero,zero
  00404CC8: 24060400 addiu       a2,zero,0x400
  00404CCC: 3C0E0041 lui         t6,0x41
  00404CD0: 8DCE12CC lw          t6,0x12CC(t6)
  00404CD4: 01C0F809 jalr        ra,t6
  00404CD8: 00000000 nop
  00404CDC: 8FA40074 lw          a0,0x74(sp)
  00404CE0: 24050001 addiu       a1,zero,1
  00404CE4: 24060400 addiu       a2,zero,0x400
  00404CE8: 3C0F0041 lui         t7,0x41
  00404CEC: 8DEF12CC lw          t7,0x12CC(t7)
  00404CF0: 01E0F809 jalr        ra,t7
  00404CF4: 00000000 nop
  00404CF8: 100000F6 b           004050D4
  00404CFC: 00000000 nop
$319:
  00404D00: 8FA40078 lw          a0,0x78(sp)
  00404D04: 0C1004AE jal         RevCreate
  00404D08: 00000000 nop
  00404D0C: 8FB80078 lw          t8,0x78(sp)
  00404D10: 3C010041 lui         at,0x41
  00404D14: AC38EF68 sw          t8,0xEF68(at)
  00404D18: 100000EE b           004050D4
  00404D1C: 00000000 nop
$320:
  00404D20: 3C190041 lui         t9,0x41
  00404D24: 8F39EEA0 lw          t9,0xEEA0(t9)
  00404D28: 13200008 beq         zero,t9,00404D4C
  00404D2C: 00000000 nop
  00404D30: 8FA40078 lw          a0,0x78(sp)
  00404D34: 3C050041 lui         a1,0x41
  00404D38: 8CA5EEA0 lw          a1,0xEEA0(a1)
  00404D3C: 3C080041 lui         t0,0x41
  00404D40: 8D0812EC lw          t0,0x12EC(t0)
  00404D44: 0100F809 jalr        ra,t0
  00404D48: 00000000 nop
  00404D4C: 8FA40078 lw          a0,0x78(sp)
  00404D50: 8FA5007C lw          a1,0x7C(sp)
  00404D54: 8FA60080 lw          a2,0x80(sp)
  00404D58: 8FA70084 lw          a3,0x84(sp)
  00404D5C: 3C090041 lui         t1,0x41
  00404D60: 8D2912B4 lw          t1,0x12B4(t1)
  00404D64: 0120F809 jalr        ra,t1
  00404D68: 00000000 nop
  00404D6C: 100000DC b           004050E0
  00404D70: 00000000 nop
$322:
  00404D74: 3C040041 lui         a0,0x41
  00404D78: 8C84EEA4 lw          a0,0xEEA4(a0)
  00404D7C: 3C0A0041 lui         t2,0x41
  00404D80: 8D4A11EC lw          t2,0x11EC(t2)
  00404D84: 0140F809 jalr        ra,t2
  00404D88: 00000000 nop
  00404D8C: 3C040041 lui         a0,0x41
  00404D90: 8C84F06C lw          a0,0xF06C(a0)
  00404D94: 3C0B0041 lui         t3,0x41
  00404D98: 8D6B11EC lw          t3,0x11EC(t3)
  00404D9C: 0160F809 jalr        ra,t3
  00404DA0: 00000000 nop
  00404DA4: 3C040041 lui         a0,0x41
  00404DA8: 8C84F060 lw          a0,0xF060(a0)
  00404DAC: 3C0C0041 lui         t4,0x41
  00404DB0: 8D8C11EC lw          t4,0x11EC(t4)
  00404DB4: 0180F809 jalr        ra,t4
  00404DB8: 00000000 nop
  00404DBC: 3C040041 lui         a0,0x41
  00404DC0: 8C84EF74 lw          a0,0xEF74(a0)
  00404DC4: 3C0D0041 lui         t5,0x41
  00404DC8: 8DAD11EC lw          t5,0x11EC(t5)
  00404DCC: 01A0F809 jalr        ra,t5
  00404DD0: 00000000 nop
  00404DD4: 00002025 or          a0,zero,zero
  00404DD8: 3C0E0041 lui         t6,0x41
  00404DDC: 8DCE12E8 lw          t6,0x12E8(t6)
  00404DE0: 01C0F809 jalr        ra,t6
  00404DE4: 00000000 nop
  00404DE8: 100000BA b           004050D4
  00404DEC: 00000000 nop
$323:
  00404DF0: 8FA40078 lw          a0,0x78(sp)
  00404DF4: 3C0F0041 lui         t7,0x41
  00404DF8: 8DEF1310 lw          t7,0x1310(t7)
  00404DFC: 01E0F809 jalr        ra,t7
  00404E00: 00000000 nop
  00404E04: 10400004 beq         zero,v0,00404E18
  00404E08: 00000000 nop
  00404E0C: 00001025 or          v0,zero,zero
  00404E10: 100000B3 b           004050E0
  00404E14: 00000000 nop
  00404E18: 8FA40078 lw          a0,0x78(sp)
  00404E1C: 97A50080 lhu         a1,0x80(sp)
  00404E20: 0C1010B0 jal         RevChar
  00404E24: 00000000 nop
  00404E28: 100000AA b           004050D4
  00404E2C: 00000000 nop
$325:
  00404E30: 24040013 addiu       a0,zero,0x13
  00404E34: 3C180041 lui         t8,0x41
  00404E38: 8F18132C lw          t8,0x132C(t8)
  00404E3C: 0300F809 jalr        ra,t8
  00404E40: 00000000 nop
  00404E44: 1440002C bne         zero,v0,00404EF8
  00404E48: 00000000 nop
  00404E4C: 97B90080 lhu         t9,0x80(sp)
  00404E50: 13200024 beq         zero,t9,00404EE4
  00404E54: 00000000 nop
  00404E58: 8FA80084 lw          t0,0x84(sp)
  00404E5C: 8FA90078 lw          t1,0x78(sp)
  00404E60: 1109001E beq         t1,t0,00404EDC
  00404E64: 00000000 nop
  00404E68: 3C0A0041 lui         t2,0x41
  00404E6C: 8D4AEF18 lw          t2,0xEF18(t2)
  00404E70: AFAA006C sw          t2,0x6C(sp)
  00404E74: 3C0B0041 lui         t3,0x41
  00404E78: 8D6BEF1C lw          t3,0xEF1C(t3)
  00404E7C: AFAB0070 sw          t3,0x70(sp)
  00404E80: 8FA40078 lw          a0,0x78(sp)
  00404E84: 27A5006C addiu       a1,sp,0x6C
  00404E88: 3C0C0041 lui         t4,0x41
  00404E8C: 8D8C12C8 lw          t4,0x12C8(t4)
  00404E90: 0180F809 jalr        ra,t4
  00404E94: 00000000 nop
  00404E98: 8FA4006C lw          a0,0x6C(sp)
  00404E9C: 8FA50070 lw          a1,0x70(sp)
  00404EA0: 3C0D0041 lui         t5,0x41
  00404EA4: 8DAD1320 lw          t5,0x1320(t5)
  00404EA8: 01A0F809 jalr        ra,t5
  00404EAC: 00000000 nop
  00404EB0: 3C0E0041 lui         t6,0x41
  00404EB4: 25CEEF18 addiu       t6,t6,0xEF18
  00404EB8: 8DC40000 lw          a0,0(t6)
  00404EBC: 8DC50004 lw          a1,4(t6)
  00404EC0: 0C100920 jal         RevMouseMove
  00404EC4: 00000000 nop
  00404EC8: 97A40080 lhu         a0,0x80(sp)
  00404ECC: 3C0F0041 lui         t7,0x41
  00404ED0: 8DEF12C4 lw          t7,0x12C4(t7)
  00404ED4: 01E0F809 jalr        ra,t7
  00404ED8: 00000000 nop
  00404EDC: 10000006 b           00404EF8
  00404EE0: 00000000 nop
  00404EE4: 8FA40080 lw          a0,0x80(sp)
  00404EE8: 3C180041 lui         t8,0x41
  00404EEC: 8F1812C4 lw          t8,0x12C4(t8)
  00404EF0: 0300F809 jalr        ra,t8
  00404EF4: 00000000 nop
  00404EF8: 8FB90080 lw          t9,0x80(sp)
  00404EFC: 1320000C beq         zero,t9,00404F30
  00404F00: 00000000 nop
  00404F04: 8FA80084 lw          t0,0x84(sp)
  00404F08: 00084C02 srl         t1,t0,0x10
  00404F0C: 312AFFFF andi        t2,t1,0xFFFF
  00404F10: 314BFFFF andi        t3,t2,0xFFFF
  00404F14: 15600006 bne         zero,t3,00404F30
  00404F18: 00000000 nop
  00404F1C: 8FA40078 lw          a0,0x78(sp)
  00404F20: 3C0C0041 lui         t4,0x41
  00404F24: 8D8C12C0 lw          t4,0x12C0(t4)
  00404F28: 0180F809 jalr        ra,t4
  00404F2C: 00000000 nop
  00404F30: 10000068 b           004050D4
  00404F34: 00000000 nop
$331:
  00404F38: 8FA40078 lw          a0,0x78(sp)
  00404F3C: 27A5002C addiu       a1,sp,0x2C
  00404F40: 3C0D0041 lui         t5,0x41
  00404F44: 8DAD1308 lw          t5,0x1308(t5)
  00404F48: 01A0F809 jalr        ra,t5
  00404F4C: 00000000 nop
  00404F50: 8FA40078 lw          a0,0x78(sp)
  00404F54: 8FA5002C lw          a1,0x2C(sp)
  00404F58: 0C100765 jal         RevPaint
  00404F5C: 00000000 nop
  00404F60: 8FA40078 lw          a0,0x78(sp)
  00404F64: 27A5002C addiu       a1,sp,0x2C
  00404F68: 3C0E0041 lui         t6,0x41
  00404F6C: 8DCE1338 lw          t6,0x1338(t6)
  00404F70: 01C0F809 jalr        ra,t6
  00404F74: 00000000 nop
  00404F78: 10000056 b           004050D4
  00404F7C: 00000000 nop
  00404F80: 87AF0084 lh          t7,0x84(sp)
  00404F84: AFAF0024 sw          t7,0x24(sp)
  00404F88: 8FB80084 lw          t8,0x84(sp)
  00404F8C: 0018CC02 srl         t9,t8,0x10
  00404F90: 3328FFFF andi        t0,t9,0xFFFF
  00404F94: 00084C00 sll         t1,t0,0x10
  00404F98: 00095403 sra         t2,t1,0x10
  00404F9C: AFAA0028 sw          t2,0x28(sp)
  00404FA0: 3C0B0041 lui         t3,0x41
  00404FA4: 8D6BE020 lw          t3,0xE020(t3)
  00404FA8: 15600008 bne         zero,t3,00404FCC
  00404FAC: 00000000 nop
  00404FB0: 27AC0024 addiu       t4,sp,0x24
  00404FB4: 8D840000 lw          a0,0(t4)
  00404FB8: 8D850004 lw          a1,4(t4)
  00404FBC: 0C100920 jal         RevMouseMove
  00404FC0: 00000000 nop
  00404FC4: 10000007 b           00404FE4
  00404FC8: 00000000 nop
  00404FCC: 3C040041 lui         a0,0x41
  00404FD0: 8C84EF70 lw          a0,0xEF70(a0)
  00404FD4: 3C0D0041 lui         t5,0x41
  00404FD8: 8DAD1300 lw          t5,0x1300(t5)
  00404FDC: 01A0F809 jalr        ra,t5
  00404FE0: 00000000 nop
  00404FE4: 1000003B b           004050D4
  00404FE8: 00000000 nop
  00404FEC: 8FA40078 lw          a0,0x78(sp)
  00404FF0: 3C0E0041 lui         t6,0x41
  00404FF4: 8DCE12F0 lw          t6,0x12F0(t6)
  00404FF8: 01C0F809 jalr        ra,t6
  00404FFC: 00000000 nop
  00405000: 240F0001 addiu       t7,zero,1
  00405004: 3C010041 lui         at,0x41
  00405008: AC2FE04C sw          t7,0xE04C(at)
  0040500C: 10000031 b           004050D4
  00405010: 00000000 nop
  00405014: 87B80084 lh          t8,0x84(sp)
  00405018: AFB8001C sw          t8,0x1C(sp)
  0040501C: 8FB90084 lw          t9,0x84(sp)
  00405020: 00194402 srl         t0,t9,0x10
  00405024: 3109FFFF andi        t1,t0,0xFFFF
  00405028: 00095400 sll         t2,t1,0x10
  0040502C: 000A5C03 sra         t3,t2,0x10
  00405030: AFAB0020 sw          t3,0x20(sp)
  00405034: 3C0C0041 lui         t4,0x41
  00405038: 8D8C1328 lw          t4,0x1328(t4)
  0040503C: 0180F809 jalr        ra,t4
  00405040: 00000000 nop
  00405044: 3C0D0041 lui         t5,0x41
  00405048: 8DADE020 lw          t5,0xE020(t5)
  0040504C: 15A0000B bne         zero,t5,0040507C
  00405050: 00000000 nop
  00405054: 3C0E0041 lui         t6,0x41
  00405058: 8DCEE04C lw          t6,0xE04C(t6)
  0040505C: 11C00007 beq         zero,t6,0040507C
  00405060: 00000000 nop
  00405064: 8FA40078 lw          a0,0x78(sp)
  00405068: 27AF001C addiu       t7,sp,0x1C
  0040506C: 8DE50000 lw          a1,0(t7)
  00405070: 8DE60004 lw          a2,4(t7)
  00405074: 0C100F06 jal         RevMouseClick
  00405078: 00000000 nop
  0040507C: 3C010041 lui         at,0x41
  00405080: AC20E04C sw          zero,0xE04C(at)
  00405084: 10000013 b           004050D4
  00405088: 00000000 nop
$338:
  0040508C: 10000011 b           004050D4
  00405090: 00000000 nop
$339:
  00405094: 1000000F b           004050D4
  00405098: 00000000 nop
$340:
  0040509C: 8FA40078 lw          a0,0x78(sp)
  004050A0: 8FA5007C lw          a1,0x7C(sp)
  004050A4: 8FA60080 lw          a2,0x80(sp)
  004050A8: 8FA70084 lw          a3,0x84(sp)
  004050AC: 3C180041 lui         t8,0x41
  004050B0: 8F1812B4 lw          t8,0x12B4(t8)
  004050B4: 0300F809 jalr        ra,t8
  004050B8: 00000000 nop
  004050BC: 10000008 b           004050E0
  004050C0: 00000000 nop
  004050C4: 10000003 b           004050D4
  004050C8: 00000000 nop
  004050CC: 10000001 b           004050D4
  004050D0: 00000000 nop
  004050D4: 00001025 or          v0,zero,zero
  004050D8: 10000001 b           004050E0
  004050DC: 00000000 nop
  004050E0: 10000001 b           004050E8
  004050E4: 00000000 nop
  004050E8: 8FBF0014 lw          ra,0x14(sp)
  004050EC: 27BD0078 addiu       sp,sp,0x78
  004050F0: 03E00008 jr          ra
  004050F4: 00000000 nop
AboutDlgProc:
  004050F8: 27BDFFE8 addiu       sp,sp,0xFFE8
  004050FC: AFBF0014 sw          ra,0x14(sp)
  00405100: AFA40018 sw          a0,0x18(sp)
  00405104: AFA5001C sw          a1,0x1C(sp)
  00405108: AFA60020 sw          a2,0x20(sp)
  0040510C: AFA70024 sw          a3,0x24(sp)
  00405110: 97AE001C lhu         t6,0x1C(sp)
  00405114: 24010111 addiu       at,zero,0x111
  00405118: 15C1000A bne         at,t6,00405144
  0040511C: 00000000 nop
  00405120: 8FA40018 lw          a0,0x18(sp)
  00405124: 24050001 addiu       a1,zero,1
  00405128: 3C0F0041 lui         t7,0x41
  0040512C: 8DEF12D0 lw          t7,0x12D0(t7)
  00405130: 01E0F809 jalr        ra,t7
  00405134: 00000000 nop
  00405138: 24020001 addiu       v0,zero,1
  0040513C: 1000000D b           00405174
  00405140: 00000000 nop
  00405144: 97B8001C lhu         t8,0x1C(sp)
  00405148: 24010110 addiu       at,zero,0x110
  0040514C: 17010006 bne         at,t8,00405168
  00405150: 00000000 nop
  00405154: 24020001 addiu       v0,zero,1
  00405158: 10000006 b           00405174
  0040515C: 00000000 nop
  00405160: 10000004 b           00405174
  00405164: 00000000 nop
  00405168: 00001025 or          v0,zero,zero
  0040516C: 10000001 b           00405174
  00405170: 00000000 nop
  00405174: 10000001 b           0040517C
  00405178: 00000000 nop
  0040517C: 8FBF0014 lw          ra,0x14(sp)
  00405180: 27BD0018 addiu       sp,sp,0x18
  00405184: 03E00008 jr          ra
  00405188: 00000000 nop
WinMain:
  0040518C: 27BDFF98 addiu       sp,sp,0xFF98
  00405190: AFBF0034 sw          ra,0x34(sp)
  00405194: AFA40068 sw          a0,0x68(sp)
  00405198: AFA5006C sw          a1,0x6C(sp)
  0040519C: AFA60070 sw          a2,0x70(sp)
  004051A0: AFA70074 sw          a3,0x74(sp)
  004051A4: 8FAE0068 lw          t6,0x68(sp)
  004051A8: 3C010041 lui         at,0x41
  004051AC: AC2EEF64 sw          t6,0xEF64(at)
  004051B0: 8FAF006C lw          t7,0x6C(sp)
  004051B4: 15E0000B bne         zero,t7,004051E4
  004051B8: 00000000 nop
  004051BC: 8FA40068 lw          a0,0x68(sp)
  004051C0: 0C100D93 jal         RevInit
  004051C4: 00000000 nop
  004051C8: 14400004 bne         zero,v0,004051DC
  004051CC: 00000000 nop
  004051D0: 00001025 or          v0,zero,zero
  004051D4: 10000088 b           004053F8
  004051D8: 00000000 nop
  004051DC: 10000008 b           00405200
  004051E0: 00000000 nop
  004051E4: 3C180041 lui         t8,0x41
  004051E8: 8F18E020 lw          t8,0xE020(t8)
  004051EC: 13000004 beq         zero,t8,00405200
  004051F0: 00000000 nop
  004051F4: 00001025 or          v0,zero,zero
  004051F8: 1000007F b           004053F8
  004051FC: 00000000 nop
  00405200: 3C190040 lui         t9,0x40
  00405204: 27394A74 addiu       t9,t9,0x4A74
  00405208: 3C010041 lui         at,0x41
  0040520C: AC39EF5C sw          t9,0xEF5C(at)
  00405210: 2408002D addiu       t0,zero,0x2D
  00405214: 3C010041 lui         at,0x41
  00405218: AC28E050 sw          t0,0xE050(at)
  0040521C: 3C010041 lui         at,0x41
  00405220: AC20E020 sw          zero,0xE020(at)
  00405224: 3C090040 lui         t1,0x40
  00405228: 252950F8 addiu       t1,t1,0x50F8
  0040522C: 3C010041 lui         at,0x41
  00405230: AC29F04C sw          t1,0xF04C(at)
  00405234: 3C0A0041 lui         t2,0x41
  00405238: 8D4AE024 lw          t2,0xE024(t2)
  0040523C: 11400006 beq         zero,t2,00405258
  00405240: 00000000 nop
  00405244: 3C0B0041 lui         t3,0x41
  00405248: 256BEF30 addiu       t3,t3,0xEF30
  0040524C: AFAB0044 sw          t3,0x44(sp)
  00405250: 10000004 b           00405264
  00405254: 00000000 nop
  00405258: 3C0C0041 lui         t4,0x41
  0040525C: 258CEE60 addiu       t4,t4,0xEE60
  00405260: AFAC0044 sw          t4,0x44(sp)
  00405264: 00002025 or          a0,zero,zero
  00405268: 3C0D0041 lui         t5,0x41
  0040526C: 8DAD132C lw          t5,0x132C(t5)
  00405270: 01A0F809 jalr        ra,t5
  00405274: 00000000 nop
  00405278: AFA20040 sw          v0,0x40(sp)
  0040527C: 24040001 addiu       a0,zero,1
  00405280: 3C0E0041 lui         t6,0x41
  00405284: 8DCE132C lw          t6,0x132C(t6)
  00405288: 01C0F809 jalr        ra,t6
  0040528C: 00000000 nop
  00405290: AFA2003C sw          v0,0x3C(sp)
  00405294: 00002025 or          a0,zero,zero
  00405298: 3C050041 lui         a1,0x41
  0040529C: 24A5E168 addiu       a1,a1,0xE168
  004052A0: 8FA60044 lw          a2,0x44(sp)
  004052A4: 3C0700CF lui         a3,0xCF
  004052A8: 3C0F8000 lui         t7,0x8000
  004052AC: AFAF0010 sw          t7,0x10(sp)
  004052B0: AFA00014 sw          zero,0x14(sp)
  004052B4: 8FB80040 lw          t8,0x40(sp)
  004052B8: 0018C843 sra         t9,t8,1
  004052BC: AFB90018 sw          t9,0x18(sp)
  004052C0: 8FA8003C lw          t0,0x3C(sp)
  004052C4: 00084880 sll         t1,t0,2
  004052C8: 24010005 addiu       at,zero,5
  004052CC: 0121001A div         t1,at
  004052D0: 00005012 mflo        t2
  004052D4: 00000000 nop
  004052D8: 00000000 nop
  004052DC: AFAA001C sw          t2,0x1C(sp)
  004052E0: AFA00020 sw          zero,0x20(sp)
  004052E4: AFA00024 sw          zero,0x24(sp)
  004052E8: 8FAB0068 lw          t3,0x68(sp)
  004052EC: AFAB0028 sw          t3,0x28(sp)
  004052F0: AFA0002C sw          zero,0x2C(sp)
  004052F4: 3C0C0041 lui         t4,0x41
  004052F8: 8D8C1330 lw          t4,0x1330(t4)
  004052FC: 0180F809 jalr        ra,t4
  00405300: 00000000 nop
  00405304: AFA20064 sw          v0,0x64(sp)
  00405308: 8FAD0064 lw          t5,0x64(sp)
  0040530C: 15A00004 bne         zero,t5,00405320
  00405310: 00000000 nop
  00405314: 00001025 or          v0,zero,zero
  00405318: 10000037 b           004053F8
  0040531C: 00000000 nop
  00405320: 8FA40064 lw          a0,0x64(sp)
  00405324: 8FA50074 lw          a1,0x74(sp)
  00405328: 3C0E0041 lui         t6,0x41
  0040532C: 8DCE1314 lw          t6,0x1314(t6)
  00405330: 01C0F809 jalr        ra,t6
  00405334: 00000000 nop
  00405338: 8FA40064 lw          a0,0x64(sp)
  0040533C: 3C0F0041 lui         t7,0x41
  00405340: 8DEF12DC lw          t7,0x12DC(t7)
  00405344: 01E0F809 jalr        ra,t7
  00405348: 00000000 nop
  0040534C: 27A40048 addiu       a0,sp,0x48
  00405350: 00002825 or          a1,zero,zero
  00405354: 00003025 or          a2,zero,zero
  00405358: 00003825 or          a3,zero,zero
  0040535C: 3C180041 lui         t8,0x41
  00405360: 8F1812BC lw          t8,0x12BC(t8)
  00405364: 0300F809 jalr        ra,t8
  00405368: 00000000 nop
  0040536C: 1040001F beq         zero,v0,004053EC
  00405370: 00000000 nop
  00405374: 8FA40048 lw          a0,0x48(sp)
  00405378: 3C050041 lui         a1,0x41
  0040537C: 8CA5EFF0 lw          a1,0xEFF0(a1)
  00405380: 27A60048 addiu       a2,sp,0x48
  00405384: 3C190041 lui         t9,0x41
  00405388: 8F3912E0 lw          t9,0x12E0(t9)
  0040538C: 0320F809 jalr        ra,t9
  00405390: 00000000 nop
  00405394: 1440000B bne         zero,v0,004053C4
  00405398: 00000000 nop
  0040539C: 27A40048 addiu       a0,sp,0x48
  004053A0: 3C080041 lui         t0,0x41
  004053A4: 8D081304 lw          t0,0x1304(t0)
  004053A8: 0100F809 jalr        ra,t0
  004053AC: 00000000 nop
  004053B0: 27A40048 addiu       a0,sp,0x48
  004053B4: 3C090041 lui         t1,0x41
  004053B8: 8D291318 lw          t1,0x1318(t1)
  004053BC: 0120F809 jalr        ra,t1
  004053C0: 00000000 nop
  004053C4: 27A40048 addiu       a0,sp,0x48
  004053C8: 00002825 or          a1,zero,zero
  004053CC: 00003025 or          a2,zero,zero
  004053D0: 00003825 or          a3,zero,zero
  004053D4: 3C0A0041 lui         t2,0x41
  004053D8: 8D4A12BC lw          t2,0x12BC(t2)
  004053DC: 0140F809 jalr        ra,t2
  004053E0: 00000000 nop
  004053E4: 1440FFE3 bne         zero,v0,00405374
  004053E8: 00000000 nop
  004053EC: 00001025 or          v0,zero,zero
  004053F0: 10000001 b           004053F8
  004053F4: 00000000 nop
  004053F8: 10000001 b           00405400
  004053FC: 00000000 nop
  00405400: 8FBF0034 lw          ra,0x34(sp)
  00405404: 27BD0068 addiu       sp,sp,0x68
  00405408: 03E00008 jr          ra
  0040540C: 00000000 nop
  00405410: 00000000 nop
finalscore:
  00405414: 27BDFFF8 addiu       sp,sp,0xFFF8
  00405418: AFA40008 sw          a0,8(sp)
  0040541C: AFA5000C sw          a1,0xC(sp)
  00405420: AFA60010 sw          a2,0x10(sp)
  00405424: AFA00004 sw          zero,4(sp)
  00405428: 240E000B addiu       t6,zero,0xB
  0040542C: AFAE0000 sw          t6,0(sp)
  00405430: 8FAF0008 lw          t7,8(sp)
  00405434: 8FB80000 lw          t8,0(sp)
  00405438: 01F8C821 addu        t9,t7,t8
  0040543C: 93280000 lbu         t0,0(t9)
  00405440: 93A9000C lbu         t1,0xC(sp)
  00405444: 15090006 bne         t1,t0,00405460
  00405448: 00000000 nop
  0040544C: 8FAA0004 lw          t2,4(sp)
  00405450: 254B0001 addiu       t3,t2,1
  00405454: AFAB0004 sw          t3,4(sp)
  00405458: 1000000B b           00405488
  0040545C: 00000000 nop
  00405460: 8FAC0008 lw          t4,8(sp)
  00405464: 8FAD0000 lw          t5,0(sp)
  00405468: 018D7021 addu        t6,t4,t5
  0040546C: 91CF0000 lbu         t7,0(t6)
  00405470: 93B80010 lbu         t8,0x10(sp)
  00405474: 15F80004 bne         t8,t7,00405488
  00405478: 00000000 nop
  0040547C: 8FB90004 lw          t9,4(sp)
  00405480: 2728FFFF addiu       t0,t9,0xFFFF
  00405484: AFA80004 sw          t0,4(sp)
  00405488: 8FA90000 lw          t1,0(sp)
  0040548C: 252A0001 addiu       t2,t1,1
  00405490: AFAA0000 sw          t2,0(sp)
  00405494: 29410059 slti        at,t2,0x59
  00405498: 1420FFE5 bne         zero,at,00405430
  0040549C: 00000000 nop
  004054A0: 8FAB0004 lw          t3,4(sp)
  004054A4: 19600007 blez        t3,004054C4
  004054A8: 00000000 nop
  004054AC: 8FA20004 lw          v0,4(sp)
  004054B0: 24427D00 addiu       v0,v0,0x7D00
  004054B4: 1000000F b           004054F4
  004054B8: 00000000 nop
  004054BC: 1000000D b           004054F4
  004054C0: 00000000 nop
  004054C4: 8FAC0004 lw          t4,4(sp)
  004054C8: 05810007 bgez        t4,004054E8
  004054CC: 00000000 nop
  004054D0: 8FA20004 lw          v0,4(sp)
  004054D4: 24428300 addiu       v0,v0,0x8300
  004054D8: 10000006 b           004054F4
  004054DC: 00000000 nop
  004054E0: 10000004 b           004054F4
  004054E4: 00000000 nop
  004054E8: 00001025 or          v0,zero,zero
  004054EC: 10000001 b           004054F4
  004054F0: 00000000 nop
  004054F4: 10000001 b           004054FC
  004054F8: 00000000 nop
  004054FC: 27BD0008 addiu       sp,sp,8
  00405500: 03E00008 jr          ra
  00405504: 00000000 nop
legalcheck:
  00405508: 27BDFFF0 addiu       sp,sp,0xFFF0
  0040550C: AFA40010 sw          a0,0x10(sp)
  00405510: AFA50014 sw          a1,0x14(sp)
  00405514: AFA60018 sw          a2,0x18(sp)
  00405518: AFA7001C sw          a3,0x1C(sp)
  0040551C: 8FAE0010 lw          t6,0x10(sp)
  00405520: 8FAF0014 lw          t7,0x14(sp)
  00405524: 01CFC021 addu        t8,t6,t7
  00405528: 93190000 lbu         t9,0(t8)
  0040552C: 24010001 addiu       at,zero,1
  00405530: 17210040 bne         at,t9,00405634
  00405534: 00000000 nop
  00405538: 3C080041 lui         t0,0x41
  0040553C: 2508E028 addiu       t0,t0,0xE028
  00405540: AFA8000C sw          t0,0xC(sp)
  00405544: 8FA9000C lw          t1,0xC(sp)
  00405548: 8D2A0000 lw          t2,0(t1)
  0040554C: AFAA0008 sw          t2,8(sp)
  00405550: AFAA0000 sw          t2,0(sp)
  00405554: 252B0004 addiu       t3,t1,4
  00405558: AFAB000C sw          t3,0xC(sp)
  0040555C: 8FAC0000 lw          t4,0(sp)
  00405560: 11800034 beq         zero,t4,00405634
  00405564: 00000000 nop
  00405568: 8FAD0014 lw          t5,0x14(sp)
  0040556C: AFAD0004 sw          t5,4(sp)
  00405570: 8FAE0004 lw          t6,4(sp)
  00405574: 8FAF0008 lw          t7,8(sp)
  00405578: 01CFC021 addu        t8,t6,t7
  0040557C: AFB80004 sw          t8,4(sp)
  00405580: 8FB90010 lw          t9,0x10(sp)
  00405584: 03384021 addu        t0,t9,t8
  00405588: 910A0000 lbu         t2,0(t0)
  0040558C: 93A9001C lbu         t1,0x1C(sp)
  00405590: 1549001F bne         t1,t2,00405610
  00405594: 00000000 nop
  00405598: 8FAB0004 lw          t3,4(sp)
  0040559C: 8FAC0008 lw          t4,8(sp)
  004055A0: 016C6821 addu        t5,t3,t4
  004055A4: AFAD0004 sw          t5,4(sp)
  004055A8: 8FAE0010 lw          t6,0x10(sp)
  004055AC: 01CD7821 addu        t7,t6,t5
  004055B0: 91F90000 lbu         t9,0(t7)
  004055B4: 93B8001C lbu         t8,0x1C(sp)
  004055B8: 1738000B bne         t8,t9,004055E8
  004055BC: 00000000 nop
  004055C0: 8FA80004 lw          t0,4(sp)
  004055C4: 8FAA0008 lw          t2,8(sp)
  004055C8: 010A4821 addu        t1,t0,t2
  004055CC: AFA90004 sw          t1,4(sp)
  004055D0: 8FAB0010 lw          t3,0x10(sp)
  004055D4: 01696021 addu        t4,t3,t1
  004055D8: 918E0000 lbu         t6,0(t4)
  004055DC: 93AD001C lbu         t5,0x1C(sp)
  004055E0: 11CDFFF7 beq         t5,t6,004055C0
  004055E4: 00000000 nop
  004055E8: 8FAF0010 lw          t7,0x10(sp)
  004055EC: 8FB90004 lw          t9,4(sp)
  004055F0: 01F9C021 addu        t8,t7,t9
  004055F4: 93080000 lbu         t0,0(t8)
  004055F8: 93AA0018 lbu         t2,0x18(sp)
  004055FC: 150A0004 bne         t2,t0,00405610
  00405600: 00000000 nop
  00405604: 24020001 addiu       v0,zero,1
  00405608: 1000000D b           00405640
  0040560C: 00000000 nop
  00405610: 8FAB000C lw          t3,0xC(sp)
  00405614: 8D690000 lw          t1,0(t3)
  00405618: AFA90008 sw          t1,8(sp)
  0040561C: AFA90000 sw          t1,0(sp)
  00405620: 256C0004 addiu       t4,t3,4
  00405624: AFAC000C sw          t4,0xC(sp)
  00405628: 8FAE0000 lw          t6,0(sp)
  0040562C: 15C0FFCE bne         zero,t6,00405568
  00405630: 00000000 nop
  00405634: 00001025 or          v0,zero,zero
  00405638: 10000001 b           00405640
  0040563C: 00000000 nop
  00405640: 10000001 b           00405648
  00405644: 00000000 nop
  00405648: 27BD0010 addiu       sp,sp,0x10
  0040564C: 03E00008 jr          ra
  00405650: 00000000 nop
makemove:
  00405654: 27BDFFF0 addiu       sp,sp,0xFFF0
  00405658: AFA40010 sw          a0,0x10(sp)
  0040565C: AFA50014 sw          a1,0x14(sp)
  00405660: AFA60018 sw          a2,0x18(sp)
  00405664: AFA7001C sw          a3,0x1C(sp)
  00405668: 8FAE0014 lw          t6,0x14(sp)
  0040566C: 24010014 addiu       at,zero,0x14
  00405670: 11C1005B beq         at,t6,004057E0
  00405674: 00000000 nop
  00405678: 3C0F0041 lui         t7,0x41
  0040567C: 25EFE028 addiu       t7,t7,0xE028
  00405680: AFAF000C sw          t7,0xC(sp)
  00405684: 8FB8000C lw          t8,0xC(sp)
  00405688: 8F190000 lw          t9,0(t8)
  0040568C: AFB90008 sw          t9,8(sp)
  00405690: AFB90000 sw          t9,0(sp)
  00405694: 27080004 addiu       t0,t8,4
  00405698: AFA8000C sw          t0,0xC(sp)
  0040569C: 8FA90000 lw          t1,0(sp)
  004056A0: 1120004A beq         zero,t1,004057CC
  004056A4: 00000000 nop
  004056A8: 8FAA0014 lw          t2,0x14(sp)
  004056AC: AFAA0004 sw          t2,4(sp)
  004056B0: 8FAB0004 lw          t3,4(sp)
  004056B4: 8FAC0008 lw          t4,8(sp)
  004056B8: 016C6821 addu        t5,t3,t4
  004056BC: AFAD0004 sw          t5,4(sp)
  004056C0: 8FAE0010 lw          t6,0x10(sp)
  004056C4: 01CD7821 addu        t7,t6,t5
  004056C8: 91F90000 lbu         t9,0(t7)
  004056CC: 93B8001C lbu         t8,0x1C(sp)
  004056D0: 17380035 bne         t8,t9,004057A8
  004056D4: 00000000 nop
  004056D8: 8FA80004 lw          t0,4(sp)
  004056DC: 8FA90008 lw          t1,8(sp)
  004056E0: 01095021 addu        t2,t0,t1
  004056E4: AFAA0004 sw          t2,4(sp)
  004056E8: 8FAB0010 lw          t3,0x10(sp)
  004056EC: 016A6021 addu        t4,t3,t2
  004056F0: 918E0000 lbu         t6,0(t4)
  004056F4: 93AD001C lbu         t5,0x1C(sp)
  004056F8: 15CD000B bne         t5,t6,00405728
  004056FC: 00000000 nop
  00405700: 8FAF0004 lw          t7,4(sp)
  00405704: 8FB90008 lw          t9,8(sp)
  00405708: 01F9C021 addu        t8,t7,t9
  0040570C: AFB80004 sw          t8,4(sp)
  00405710: 8FA80010 lw          t0,0x10(sp)
  00405714: 01184821 addu        t1,t0,t8
  00405718: 912B0000 lbu         t3,0(t1)
  0040571C: 93AA001C lbu         t2,0x1C(sp)
  00405720: 116AFFF7 beq         t2,t3,00405700
  00405724: 00000000 nop
  00405728: 8FAC0010 lw          t4,0x10(sp)
  0040572C: 8FAE0004 lw          t6,4(sp)
  00405730: 018E6821 addu        t5,t4,t6
  00405734: 91AF0000 lbu         t7,0(t5)
  00405738: 93B90018 lbu         t9,0x18(sp)
  0040573C: 15F9001A bne         t9,t7,004057A8
  00405740: 00000000 nop
  00405744: 8FA80004 lw          t0,4(sp)
  00405748: 8FB80008 lw          t8,8(sp)
  0040574C: 01184823 subu        t1,t0,t8
  00405750: AFA90004 sw          t1,4(sp)
  00405754: 8FAB0010 lw          t3,0x10(sp)
  00405758: 01695021 addu        t2,t3,t1
  0040575C: 914C0000 lbu         t4,0(t2)
  00405760: 93AE001C lbu         t6,0x1C(sp)
  00405764: 158E0010 bne         t6,t4,004057A8
  00405768: 00000000 nop
  0040576C: 93AD0018 lbu         t5,0x18(sp)
  00405770: 8FAF0010 lw          t7,0x10(sp)
  00405774: 8FB90004 lw          t9,4(sp)
  00405778: 01F94021 addu        t0,t7,t9
  0040577C: A10D0000 sb          t5,0(t0)
  00405780: 8FB80004 lw          t8,4(sp)
  00405784: 8FAB0008 lw          t3,8(sp)
  00405788: 030B4823 subu        t1,t8,t3
  0040578C: AFA90004 sw          t1,4(sp)
  00405790: 8FAA0010 lw          t2,0x10(sp)
  00405794: 01496021 addu        t4,t2,t1
  00405798: 918E0000 lbu         t6,0(t4)
  0040579C: 93AF001C lbu         t7,0x1C(sp)
  004057A0: 11CFFFF2 beq         t7,t6,0040576C
  004057A4: 00000000 nop
  004057A8: 8FB9000C lw          t9,0xC(sp)
  004057AC: 8F2D0000 lw          t5,0(t9)
  004057B0: AFAD0008 sw          t5,8(sp)
  004057B4: AFAD0000 sw          t5,0(sp)
  004057B8: 27280004 addiu       t0,t9,4
  004057BC: AFA8000C sw          t0,0xC(sp)
  004057C0: 8FB80000 lw          t8,0(sp)
  004057C4: 1700FFB8 bne         zero,t8,004056A8
  004057C8: 00000000 nop
  004057CC: 93AB0018 lbu         t3,0x18(sp)
  004057D0: 8FAA0010 lw          t2,0x10(sp)
  004057D4: 8FA90014 lw          t1,0x14(sp)
  004057D8: 01496021 addu        t4,t2,t1
  004057DC: A18B0000 sb          t3,0(t4)
  004057E0: 10000001 b           004057E8
  004057E4: 00000000 nop
  004057E8: 27BD0010 addiu       sp,sp,0x10
  004057EC: 03E00008 jr          ra
  004057F0: 00000000 nop
score:
  004057F4: 27BDFFD0 addiu       sp,sp,0xFFD0
  004057F8: AFA40030 sw          a0,0x30(sp)
  004057FC: AFA50034 sw          a1,0x34(sp)
  00405800: AFA60038 sw          a2,0x38(sp)
  00405804: AFA0002C sw          zero,0x2C(sp)
  00405808: AFA00028 sw          zero,0x28(sp)
  0040580C: AFA00024 sw          zero,0x24(sp)
  00405810: 8FAE0030 lw          t6,0x30(sp)
  00405814: 25CF000B addiu       t7,t6,0xB
  00405818: AFAF0020 sw          t7,0x20(sp)
  0040581C: 8FB80020 lw          t8,0x20(sp)
  00405820: 93190000 lbu         t9,0(t8)
  00405824: AFB9001C sw          t9,0x1C(sp)
  00405828: 8FA80030 lw          t0,0x30(sp)
  0040582C: 91090012 lbu         t1,0x12(t0)
  00405830: AFA90018 sw          t1,0x18(sp)
  00405834: 8FAA0030 lw          t2,0x30(sp)
  00405838: 914B0051 lbu         t3,0x51(t2)
  0040583C: AFAB0014 sw          t3,0x14(sp)
  00405840: 8FAC0030 lw          t4,0x30(sp)
  00405844: 918D0058 lbu         t5,0x58(t4)
  00405848: AFAD0010 sw          t5,0x10(sp)
  0040584C: 8FAE001C lw          t6,0x1C(sp)
  00405850: 24010001 addiu       at,zero,1
  00405854: 15C1000D bne         at,t6,0040588C
  00405858: 00000000 nop
  0040585C: 8FAF0018 lw          t7,0x18(sp)
  00405860: 24010001 addiu       at,zero,1
  00405864: 15E10009 bne         at,t7,0040588C
  00405868: 00000000 nop
  0040586C: 8FB80014 lw          t8,0x14(sp)
  00405870: 24010001 addiu       at,zero,1
  00405874: 17010005 bne         at,t8,0040588C
  00405878: 00000000 nop
  0040587C: 8FB90010 lw          t9,0x10(sp)
  00405880: 24010001 addiu       at,zero,1
  00405884: 1321007E beq         at,t9,00405A80
  00405888: 00000000 nop
  0040588C: 3C080041 lui         t0,0x41
  00405890: 2508E2B0 addiu       t0,t0,0xE2B0
  00405894: AFA8000C sw          t0,0xC(sp)
  00405898: 8FA9001C lw          t1,0x1C(sp)
  0040589C: 24010001 addiu       at,zero,1
  004058A0: 1521000F bne         at,t1,004058E0
  004058A4: 00000000 nop
  004058A8: 240AFFF8 addiu       t2,zero,0xFFF8
  004058AC: 3C0B0041 lui         t3,0x41
  004058B0: 256BE2B0 addiu       t3,t3,0xE2B0
  004058B4: AD6A0004 sw          t2,4(t3)
  004058B8: 240CFFF8 addiu       t4,zero,0xFFF8
  004058BC: 3C0D0041 lui         t5,0x41
  004058C0: 25ADE2B0 addiu       t5,t5,0xE2B0
  004058C4: ADAC0028 sw          t4,0x28(t5)
  004058C8: 240EFFE8 addiu       t6,zero,0xFFE8
  004058CC: 3C0F0041 lui         t7,0x41
  004058D0: 25EFE2B0 addiu       t7,t7,0xE2B0
  004058D4: ADEE002C sw          t6,0x2C(t7)
  004058D8: 1000000D b           00405910
  004058DC: 00000000 nop
  004058E0: 2418000C addiu       t8,zero,0xC
  004058E4: 3C190041 lui         t9,0x41
  004058E8: 2739E2B0 addiu       t9,t9,0xE2B0
  004058EC: AF380004 sw          t8,4(t9)
  004058F0: 2408000C addiu       t0,zero,0xC
  004058F4: 3C090041 lui         t1,0x41
  004058F8: 2529E2B0 addiu       t1,t1,0xE2B0
  004058FC: AD280028 sw          t0,0x28(t1)
  00405900: 240A0008 addiu       t2,zero,8
  00405904: 3C0B0041 lui         t3,0x41
  00405908: 256BE2B0 addiu       t3,t3,0xE2B0
  0040590C: AD6A002C sw          t2,0x2C(t3)
  00405910: 8FAC0018 lw          t4,0x18(sp)
  00405914: 24010001 addiu       at,zero,1
  00405918: 1581000F bne         at,t4,00405958
  0040591C: 00000000 nop
  00405920: 240DFFF8 addiu       t5,zero,0xFFF8
  00405924: 3C0E0041 lui         t6,0x41
  00405928: 25CEE2B0 addiu       t6,t6,0xE2B0
  0040592C: ADCD0018 sw          t5,0x18(t6)
  00405930: 240FFFF8 addiu       t7,zero,0xFFF8
  00405934: 3C180041 lui         t8,0x41
  00405938: 2718E2B0 addiu       t8,t8,0xE2B0
  0040593C: AF0F0044 sw          t7,0x44(t8)
  00405940: 2419FFE8 addiu       t9,zero,0xFFE8
  00405944: 3C080041 lui         t0,0x41
  00405948: 2508E2B0 addiu       t0,t0,0xE2B0
  0040594C: AD190040 sw          t9,0x40(t0)
  00405950: 1000000D b           00405988
  00405954: 00000000 nop
  00405958: 2409000C addiu       t1,zero,0xC
  0040595C: 3C0A0041 lui         t2,0x41
  00405960: 254AE2B0 addiu       t2,t2,0xE2B0
  00405964: AD490018 sw          t1,0x18(t2)
  00405968: 240B000C addiu       t3,zero,0xC
  0040596C: 3C0C0041 lui         t4,0x41
  00405970: 258CE2B0 addiu       t4,t4,0xE2B0
  00405974: AD8B0044 sw          t3,0x44(t4)
  00405978: 240D0008 addiu       t5,zero,8
  0040597C: 3C0E0041 lui         t6,0x41
  00405980: 25CEE2B0 addiu       t6,t6,0xE2B0
  00405984: ADCD0040 sw          t5,0x40(t6)
  00405988: 8FAF0014 lw          t7,0x14(sp)
  0040598C: 24010001 addiu       at,zero,1
  00405990: 15E1000F bne         at,t7,004059D0
  00405994: 00000000 nop
  00405998: 2418FFF8 addiu       t8,zero,0xFFF8
  0040599C: 3C190041 lui         t9,0x41
  004059A0: 2739E2B0 addiu       t9,t9,0xE2B0
  004059A4: AF38011C sw          t8,0x11C(t9)
  004059A8: 2408FFF8 addiu       t0,zero,0xFFF8
  004059AC: 3C090041 lui         t1,0x41
  004059B0: 2529E2B0 addiu       t1,t1,0xE2B0
  004059B4: AD2800F0 sw          t0,0xF0(t1)
  004059B8: 240AFFE8 addiu       t2,zero,0xFFE8
  004059BC: 3C0B0041 lui         t3,0x41
  004059C0: 256BE2B0 addiu       t3,t3,0xE2B0
  004059C4: AD6A00F4 sw          t2,0xF4(t3)
  004059C8: 1000000D b           00405A00
  004059CC: 00000000 nop
  004059D0: 240C000C addiu       t4,zero,0xC
  004059D4: 3C0D0041 lui         t5,0x41
  004059D8: 25ADE2B0 addiu       t5,t5,0xE2B0
  004059DC: ADAC011C sw          t4,0x11C(t5)
  004059E0: 240E000C addiu       t6,zero,0xC
  004059E4: 3C0F0041 lui         t7,0x41
  004059E8: 25EFE2B0 addiu       t7,t7,0xE2B0
  004059EC: ADEE00F0 sw          t6,0xF0(t7)
  004059F0: 24180008 addiu       t8,zero,8
  004059F4: 3C190041 lui         t9,0x41
  004059F8: 2739E2B0 addiu       t9,t9,0xE2B0
  004059FC: AF3800F4 sw          t8,0xF4(t9)
  00405A00: 8FA80010 lw          t0,0x10(sp)
  00405A04: 24010001 addiu       at,zero,1
  00405A08: 1501000F bne         at,t0,00405A48
  00405A0C: 00000000 nop
  00405A10: 2409FFF8 addiu       t1,zero,0xFFF8
  00405A14: 3C0A0041 lui         t2,0x41
  00405A18: 254AE2B0 addiu       t2,t2,0xE2B0
  00405A1C: AD490130 sw          t1,0x130(t2)
  00405A20: 240BFFF8 addiu       t3,zero,0xFFF8
  00405A24: 3C0C0041 lui         t4,0x41
  00405A28: 258CE2B0 addiu       t4,t4,0xE2B0
  00405A2C: AD8B010C sw          t3,0x10C(t4)
  00405A30: 240DFFE8 addiu       t5,zero,0xFFE8
  00405A34: 3C0E0041 lui         t6,0x41
  00405A38: 25CEE2B0 addiu       t6,t6,0xE2B0
  00405A3C: ADCD0108 sw          t5,0x108(t6)
  00405A40: 1000000D b           00405A78
  00405A44: 00000000 nop
  00405A48: 240F000C addiu       t7,zero,0xC
  00405A4C: 3C180041 lui         t8,0x41
  00405A50: 2718E2B0 addiu       t8,t8,0xE2B0
  00405A54: AF0F0130 sw          t7,0x130(t8)
  00405A58: 2419000C addiu       t9,zero,0xC
  00405A5C: 3C080041 lui         t0,0x41
  00405A60: 2508E2B0 addiu       t0,t0,0xE2B0
  00405A64: AD19010C sw          t9,0x10C(t0)
  00405A68: 24090008 addiu       t1,zero,8
  00405A6C: 3C0A0041 lui         t2,0x41
  00405A70: 254AE2B0 addiu       t2,t2,0xE2B0
  00405A74: AD490108 sw          t1,0x108(t2)
  00405A78: 10000004 b           00405A8C
  00405A7C: 00000000 nop
  00405A80: 3C0B0041 lui         t3,0x41
  00405A84: 256BE174 addiu       t3,t3,0xE174
  00405A88: AFAB000C sw          t3,0xC(sp)
  00405A8C: 8FAC000C lw          t4,0xC(sp)
  00405A90: 8D8D0000 lw          t5,0(t4)
  00405A94: AFAD0008 sw          t5,8(sp)
  00405A98: AFAD0000 sw          t5,0(sp)
  00405A9C: 258E0004 addiu       t6,t4,4
  00405AA0: AFAE000C sw          t6,0xC(sp)
  00405AA4: 8FAF0000 lw          t7,0(sp)
  00405AA8: 24017FFF addiu       at,zero,0x7FFF
  00405AAC: 11E10025 beq         at,t7,00405B44
  00405AB0: 00000000 nop
  00405AB4: 8FB80020 lw          t8,0x20(sp)
  00405AB8: 93190000 lbu         t9,0(t8)
  00405ABC: A3B90007 sb          t9,7(sp)
  00405AC0: 27080001 addiu       t0,t8,1
  00405AC4: AFA80020 sw          t0,0x20(sp)
  00405AC8: 93A90007 lbu         t1,7(sp)
  00405ACC: 93AA0034 lbu         t2,0x34(sp)
  00405AD0: 152A0007 bne         t2,t1,00405AF0
  00405AD4: 00000000 nop
  00405AD8: 8FAB002C lw          t3,0x2C(sp)
  00405ADC: 8FAD0008 lw          t5,8(sp)
  00405AE0: 016D6021 addu        t4,t3,t5
  00405AE4: AFAC002C sw          t4,0x2C(sp)
  00405AE8: 1000000C b           00405B1C
  00405AEC: 00000000 nop
  00405AF0: 93AE0007 lbu         t6,7(sp)
  00405AF4: 93AF0038 lbu         t7,0x38(sp)
  00405AF8: 15CF0008 bne         t7,t6,00405B1C
  00405AFC: 00000000 nop
  00405B00: 8FB90028 lw          t9,0x28(sp)
  00405B04: 8FB80008 lw          t8,8(sp)
  00405B08: 03384021 addu        t0,t9,t8
  00405B0C: AFA80028 sw          t0,0x28(sp)
  00405B10: 8FA90024 lw          t1,0x24(sp)
  00405B14: 252A0001 addiu       t2,t1,1
  00405B18: AFAA0024 sw          t2,0x24(sp)
  00405B1C: 8FAB000C lw          t3,0xC(sp)
  00405B20: 8D6D0000 lw          t5,0(t3)
  00405B24: AFAD0008 sw          t5,8(sp)
  00405B28: AFAD0000 sw          t5,0(sp)
  00405B2C: 256C0004 addiu       t4,t3,4
  00405B30: AFAC000C sw          t4,0xC(sp)
  00405B34: 8FAE0000 lw          t6,0(sp)
  00405B38: 24017FFF addiu       at,zero,0x7FFF
  00405B3C: 15C1FFDD bne         at,t6,00405AB4
  00405B40: 00000000 nop
  00405B44: 8FAF0024 lw          t7,0x24(sp)
  00405B48: 15E00006 bne         zero,t7,00405B64
  00405B4C: 00000000 nop
  00405B50: 24027D00 addiu       v0,zero,0x7D00
  00405B54: 10000008 b           00405B78
  00405B58: 00000000 nop
  00405B5C: 10000006 b           00405B78
  00405B60: 00000000 nop
  00405B64: 8FB9002C lw          t9,0x2C(sp)
  00405B68: 8FB80028 lw          t8,0x28(sp)
  00405B6C: 03381023 subu        v0,t9,t8
  00405B70: 10000001 b           00405B78
  00405B74: 00000000 nop
  00405B78: 10000001 b           00405B80
  00405B7C: 00000000 nop
  00405B80: 27BD0030 addiu       sp,sp,0x30
  00405B84: 03E00008 jr          ra
  00405B88: 00000000 nop
minmax:
  00405B8C: 27BDFFA8 addiu       sp,sp,0xFFA8
  00405B90: AFBF0024 sw          ra,0x24(sp)
  00405B94: AFA40058 sw          a0,0x58(sp)
  00405B98: AFA5005C sw          a1,0x5C(sp)
  00405B9C: AFA60060 sw          a2,0x60(sp)
  00405BA0: AFA70064 sw          a3,0x64(sp)
  00405BA4: AFA00054 sw          zero,0x54(sp)
  00405BA8: 8FAE0058 lw          t6,0x58(sp)
  00405BAC: 8FAF0068 lw          t7,0x68(sp)
  00405BB0: 000FC080 sll         t8,t7,2
  00405BB4: 030FC023 subu        t8,t8,t7
  00405BB8: 0018C0C0 sll         t8,t8,3
  00405BBC: 030FC021 addu        t8,t8,t7
  00405BC0: 0018C080 sll         t8,t8,2
  00405BC4: 01D8C821 addu        t9,t6,t8
  00405BC8: AFB90050 sw          t9,0x50(sp)
  00405BCC: 8FA80058 lw          t0,0x58(sp)
  00405BD0: 8FA90068 lw          t1,0x68(sp)
  00405BD4: 00095080 sll         t2,t1,2
  00405BD8: 01495023 subu        t2,t2,t1
  00405BDC: 000A50C0 sll         t2,t2,3
  00405BE0: 01495021 addu        t2,t2,t1
  00405BE4: 000A5080 sll         t2,t2,2
  00405BE8: 010A5821 addu        t3,t0,t2
  00405BEC: 256C0064 addiu       t4,t3,0x64
  00405BF0: AFAC004C sw          t4,0x4C(sp)
  00405BF4: 8FAD0058 lw          t5,0x58(sp)
  00405BF8: 8FAF0068 lw          t7,0x68(sp)
  00405BFC: 000F7080 sll         t6,t7,2
  00405C00: 01CF7023 subu        t6,t6,t7
  00405C04: 000E70C0 sll         t6,t6,3
  00405C08: 01CF7021 addu        t6,t6,t7
  00405C0C: 000E7080 sll         t6,t6,2
  00405C10: 01AEC021 addu        t8,t5,t6
  00405C14: 2719000B addiu       t9,t8,0xB
  00405C18: AFB90048 sw          t9,0x48(sp)
  00405C1C: 8FA90058 lw          t1,0x58(sp)
  00405C20: 8FA80068 lw          t0,0x68(sp)
  00405C24: 00085080 sll         t2,t0,2
  00405C28: 01485023 subu        t2,t2,t0
  00405C2C: 000A50C0 sll         t2,t2,3
  00405C30: 01485021 addu        t2,t2,t0
  00405C34: 000A5080 sll         t2,t2,2
  00405C38: 012A5821 addu        t3,t1,t2
  00405C3C: 256C006F addiu       t4,t3,0x6F
  00405C40: AFAC0044 sw          t4,0x44(sp)
  00405C44: 240F000B addiu       t7,zero,0xB
  00405C48: AFAF0040 sw          t7,0x40(sp)
  00405C4C: 8FAD0048 lw          t5,0x48(sp)
  00405C50: 91AE0000 lbu         t6,0(t5)
  00405C54: 8FB80044 lw          t8,0x44(sp)
  00405C58: A30E0000 sb          t6,0(t8)
  00405C5C: 8FB90044 lw          t9,0x44(sp)
  00405C60: 27280001 addiu       t0,t9,1
  00405C64: AFA80044 sw          t0,0x44(sp)
  00405C68: 8FA90048 lw          t1,0x48(sp)
  00405C6C: 252A0001 addiu       t2,t1,1
  00405C70: AFAA0048 sw          t2,0x48(sp)
  00405C74: 8FAB0040 lw          t3,0x40(sp)
  00405C78: 256C0001 addiu       t4,t3,1
  00405C7C: AFAC0040 sw          t4,0x40(sp)
  00405C80: 29810059 slti        at,t4,0x59
  00405C84: 1420FFF1 bne         zero,at,00405C4C
  00405C88: 00000000 nop
  00405C8C: 8FAF0068 lw          t7,0x68(sp)
  00405C90: 000F6880 sll         t5,t7,2
  00405C94: 3C0E0041 lui         t6,0x41
  00405C98: 25CEEFD0 addiu       t6,t6,0xEFD0
  00405C9C: 01AEC021 addu        t8,t5,t6
  00405CA0: AFB8003C sw          t8,0x3C(sp)
  00405CA4: 8FB9005C lw          t9,0x5C(sp)
  00405CA8: 24010014 addiu       at,zero,0x14
  00405CAC: 17210033 bne         at,t9,00405D7C
  00405CB0: 00000000 nop
  00405CB4: 8FA80068 lw          t0,0x68(sp)
  00405CB8: 3C090041 lui         t1,0x41
  00405CBC: 8D29F064 lw          t1,0xF064(t1)
  00405CC0: 1509002C bne         t1,t0,00405D74
  00405CC4: 00000000 nop
  00405CC8: 3C0A0041 lui         t2,0x41
  00405CCC: 254AE054 addiu       t2,t2,0xE054
  00405CD0: AFAA0038 sw          t2,0x38(sp)
  00405CD4: 8FAB0038 lw          t3,0x38(sp)
  00405CD8: 8D6C0000 lw          t4,0(t3)
  00405CDC: AFAC0034 sw          t4,0x34(sp)
  00405CE0: AFAC0028 sw          t4,0x28(sp)
  00405CE4: 256F0004 addiu       t7,t3,4
  00405CE8: AFAF0038 sw          t7,0x38(sp)
  00405CEC: 8FAD0028 lw          t5,0x28(sp)
  00405CF0: 11A00019 beq         zero,t5,00405D58
  00405CF4: 00000000 nop
  00405CF8: 8FA4004C lw          a0,0x4C(sp)
  00405CFC: 8FA50034 lw          a1,0x34(sp)
  00405D00: 93A60064 lbu         a2,0x64(sp)
  00405D04: 93A70060 lbu         a3,0x60(sp)
  00405D08: 0C101542 jal         legalcheck
  00405D0C: 00000000 nop
  00405D10: 10400008 beq         zero,v0,00405D34
  00405D14: 00000000 nop
  00405D18: 8FA4004C lw          a0,0x4C(sp)
  00405D1C: 93A50060 lbu         a1,0x60(sp)
  00405D20: 93A60064 lbu         a2,0x64(sp)
  00405D24: 0C1015FD jal         score
  00405D28: 00000000 nop
  00405D2C: 100000B0 b           00405FF0
  00405D30: 00000000 nop
  00405D34: 8FAE0038 lw          t6,0x38(sp)
  00405D38: 8DD80000 lw          t8,0(t6)
  00405D3C: AFB80034 sw          t8,0x34(sp)
  00405D40: AFB80028 sw          t8,0x28(sp)
  00405D44: 25D90004 addiu       t9,t6,4
  00405D48: AFB90038 sw          t9,0x38(sp)
  00405D4C: 8FA80028 lw          t0,0x28(sp)
  00405D50: 1500FFE9 bne         zero,t0,00405CF8
  00405D54: 00000000 nop
  00405D58: 8FA4004C lw          a0,0x4C(sp)
  00405D5C: 93A50060 lbu         a1,0x60(sp)
  00405D60: 93A60064 lbu         a2,0x64(sp)
  00405D64: 0C101505 jal         finalscore
  00405D68: 00000000 nop
  00405D6C: 100000A0 b           00405FF0
  00405D70: 00000000 nop
  00405D74: 1000002E b           00405E30
  00405D78: 00000000 nop
  00405D7C: 8FA90068 lw          t1,0x68(sp)
  00405D80: 15200019 bne         zero,t1,00405DE8
  00405D84: 00000000 nop
  00405D88: 3C040041 lui         a0,0x41
  00405D8C: 8C84EF68 lw          a0,0xEF68(a0)
  00405D90: 3C0A0041 lui         t2,0x41
  00405D94: 8D4A12B8 lw          t2,0x12B8(t2)
  00405D98: 0140F809 jalr        ra,t2
  00405D9C: 00000000 nop
  00405DA0: 3C010041 lui         at,0x41
  00405DA4: AC22EEA0 sw          v0,0xEEA0(at)
  00405DA8: 8FA4004C lw          a0,0x4C(sp)
  00405DAC: 8FA5005C lw          a1,0x5C(sp)
  00405DB0: 93A60060 lbu         a2,0x60(sp)
  00405DB4: 93A70064 lbu         a3,0x64(sp)
  00405DB8: 0C100B4C jal         paintmove
  00405DBC: 00000000 nop
  00405DC0: 3C040041 lui         a0,0x41
  00405DC4: 8C84EF68 lw          a0,0xEF68(a0)
  00405DC8: 3C050041 lui         a1,0x41
  00405DCC: 8CA5EEA0 lw          a1,0xEEA0(a1)
  00405DD0: 3C0C0041 lui         t4,0x41
  00405DD4: 8D8C12EC lw          t4,0x12EC(t4)
  00405DD8: 0180F809 jalr        ra,t4
  00405DDC: 00000000 nop
  00405DE0: 10000013 b           00405E30
  00405DE4: 00000000 nop
  00405DE8: 8FA4004C lw          a0,0x4C(sp)
  00405DEC: 8FA5005C lw          a1,0x5C(sp)
  00405DF0: 93A60060 lbu         a2,0x60(sp)
  00405DF4: 93A70064 lbu         a3,0x64(sp)
  00405DF8: 0C101595 jal         makemove
  00405DFC: 00000000 nop
  00405E00: 8FAB0068 lw          t3,0x68(sp)
  00405E04: 3C0F0041 lui         t7,0x41
  00405E08: 8DEFF064 lw          t7,0xF064(t7)
  00405E0C: 156F0008 bne         t7,t3,00405E30
  00405E10: 00000000 nop
  00405E14: 8FA4004C lw          a0,0x4C(sp)
  00405E18: 93A50060 lbu         a1,0x60(sp)
  00405E1C: 93A60064 lbu         a2,0x64(sp)
  00405E20: 0C1015FD jal         score
  00405E24: 00000000 nop
  00405E28: 10000071 b           00405FF0
  00405E2C: 00000000 nop
  00405E30: 3C0D0041 lui         t5,0x41
  00405E34: 25ADE054 addiu       t5,t5,0xE054
  00405E38: AFAD0038 sw          t5,0x38(sp)
  00405E3C: 24180014 addiu       t8,zero,0x14
  00405E40: AFB80030 sw          t8,0x30(sp)
  00405E44: 240E0014 addiu       t6,zero,0x14
  00405E48: 8FB9003C lw          t9,0x3C(sp)
  00405E4C: AF2E0000 sw          t6,0(t9)
  00405E50: 8FA80038 lw          t0,0x38(sp)
  00405E54: 8D090000 lw          t1,0(t0)
  00405E58: AFA90034 sw          t1,0x34(sp)
  00405E5C: AFA90028 sw          t1,0x28(sp)
  00405E60: 250A0004 addiu       t2,t0,4
  00405E64: AFAA0038 sw          t2,0x38(sp)
  00405E68: 8FAC0028 lw          t4,0x28(sp)
  00405E6C: 11800035 beq         zero,t4,00405F44
  00405E70: 00000000 nop
  00405E74: 8FA4004C lw          a0,0x4C(sp)
  00405E78: 8FA50034 lw          a1,0x34(sp)
  00405E7C: 93A60064 lbu         a2,0x64(sp)
  00405E80: 93A70060 lbu         a3,0x60(sp)
  00405E84: 0C101542 jal         legalcheck
  00405E88: 00000000 nop
  00405E8C: 10400024 beq         zero,v0,00405F20
  00405E90: 00000000 nop
  00405E94: 8FAB0034 lw          t3,0x34(sp)
  00405E98: AFAB0030 sw          t3,0x30(sp)
  00405E9C: 8FA40058 lw          a0,0x58(sp)
  00405EA0: 8FA50030 lw          a1,0x30(sp)
  00405EA4: 93A60064 lbu         a2,0x64(sp)
  00405EA8: 93A70060 lbu         a3,0x60(sp)
  00405EAC: 8FAF0068 lw          t7,0x68(sp)
  00405EB0: 25ED0001 addiu       t5,t7,1
  00405EB4: AFAD0010 sw          t5,0x10(sp)
  00405EB8: 8FB80070 lw          t8,0x70(sp)
  00405EBC: 00187023 subu        t6,zero,t8
  00405EC0: AFAE0014 sw          t6,0x14(sp)
  00405EC4: 8FB9006C lw          t9,0x6C(sp)
  00405EC8: 00194823 subu        t1,zero,t9
  00405ECC: AFA90018 sw          t1,0x18(sp)
  00405ED0: 0C1016E3 jal         minmax
  00405ED4: 00000000 nop
  00405ED8: AFA2002C sw          v0,0x2C(sp)
  00405EDC: 8FA8002C lw          t0,0x2C(sp)
  00405EE0: 8FAA006C lw          t2,0x6C(sp)
  00405EE4: 0148082A slt         at,t2,t0
  00405EE8: 1020000D beq         zero,at,00405F20
  00405EEC: 00000000 nop
  00405EF0: 8FAC002C lw          t4,0x2C(sp)
  00405EF4: AFAC006C sw          t4,0x6C(sp)
  00405EF8: 8FAB0030 lw          t3,0x30(sp)
  00405EFC: 8FAF003C lw          t7,0x3C(sp)
  00405F00: ADEB0000 sw          t3,0(t7)
  00405F04: 8FAD002C lw          t5,0x2C(sp)
  00405F08: 8FB80070 lw          t8,0x70(sp)
  00405F0C: 01B8082A slt         at,t5,t8
  00405F10: 14200003 bne         zero,at,00405F20
  00405F14: 00000000 nop
  00405F18: 10000031 b           00405FE0
  00405F1C: 00000000 nop
  00405F20: 8FAE0038 lw          t6,0x38(sp)
  00405F24: 8DD90000 lw          t9,0(t6)
  00405F28: AFB90034 sw          t9,0x34(sp)
  00405F2C: AFB90028 sw          t9,0x28(sp)
  00405F30: 25C90004 addiu       t1,t6,4
  00405F34: AFA90038 sw          t1,0x38(sp)
  00405F38: 8FA80028 lw          t0,0x28(sp)
  00405F3C: 1500FFCD bne         zero,t0,00405E74
  00405F40: 00000000 nop
  00405F44: 8FAA0030 lw          t2,0x30(sp)
  00405F48: 24010014 addiu       at,zero,0x14
  00405F4C: 15410024 bne         at,t2,00405FE0
  00405F50: 00000000 nop
  00405F54: 8FAC005C lw          t4,0x5C(sp)
  00405F58: 24010014 addiu       at,zero,0x14
  00405F5C: 1581000A bne         at,t4,00405F88
  00405F60: 00000000 nop
  00405F64: 8FA4004C lw          a0,0x4C(sp)
  00405F68: 93A50060 lbu         a1,0x60(sp)
  00405F6C: 93A60064 lbu         a2,0x64(sp)
  00405F70: 0C101505 jal         finalscore
  00405F74: 00000000 nop
  00405F78: 1000001D b           00405FF0
  00405F7C: 00000000 nop
  00405F80: 10000017 b           00405FE0
  00405F84: 00000000 nop
  00405F88: 8FA40058 lw          a0,0x58(sp)
  00405F8C: 24050014 addiu       a1,zero,0x14
  00405F90: 93A60064 lbu         a2,0x64(sp)
  00405F94: 93A70060 lbu         a3,0x60(sp)
  00405F98: 8FAB0068 lw          t3,0x68(sp)
  00405F9C: 256F0001 addiu       t7,t3,1
  00405FA0: AFAF0010 sw          t7,0x10(sp)
  00405FA4: 8FAD0070 lw          t5,0x70(sp)
  00405FA8: 000DC023 subu        t8,zero,t5
  00405FAC: AFB80014 sw          t8,0x14(sp)
  00405FB0: 8FB9006C lw          t9,0x6C(sp)
  00405FB4: 00197023 subu        t6,zero,t9
  00405FB8: AFAE0018 sw          t6,0x18(sp)
  00405FBC: 0C1016E3 jal         minmax
  00405FC0: 00000000 nop
  00405FC4: AFA2002C sw          v0,0x2C(sp)
  00405FC8: 8FA9002C lw          t1,0x2C(sp)
  00405FCC: 8FA8006C lw          t0,0x6C(sp)
  00405FD0: 0109082A slt         at,t0,t1
  00405FD4: 10200002 beq         zero,at,00405FE0
  00405FD8: 00000000 nop
  00405FDC: AFA9006C sw          t1,0x6C(sp)
  00405FE0: 8FA2006C lw          v0,0x6C(sp)
  00405FE4: 00021023 subu        v0,zero,v0
  00405FE8: 10000001 b           00405FF0
  00405FEC: 00000000 nop
  00405FF0: 10000001 b           00405FF8
  00405FF4: 00000000 nop
  00405FF8: 8FBF0024 lw          ra,0x24(sp)
  00405FFC: 27BD0058 addiu       sp,sp,0x58
  00406000: 03E00008 jr          ra
  00406004: 00000000 nop
__F3_$WinMainCRTStartup:
  00406008: 27BDFFE8 addiu       sp,sp,0xFFE8
  0040600C: AFBF0014 sw          ra,0x14(sp)
  00406010: 00802825 or          a1,a0,zero
  00406014: 8CAE0000 lw          t6,0(a1)
  00406018: 0C10192F jal         _XcptFilter
  0040601C: 8DC40000 lw          a0,0(t6)
  00406020: 8FBF0014 lw          ra,0x14(sp)
  00406024: 03E00008 jr          ra
  00406028: 27BD0018 addiu       sp,sp,0x18
WinMainCRTStartup:
  0040602C: 27BDFF88 addiu       sp,sp,0xFF88
  00406030: AFBF0014 sw          ra,0x14(sp)
  00406034: 3C0E0041 lui         t6,0x41
  00406038: 8DCE1270 lw          t6,0x1270(t6)
  0040603C: 01C0F809 jalr        ra,t6
  00406040: 00000000 nop
  00406044: 00021A02 srl         v1,v0,8
  00406048: 304400FF andi        a0,v0,0xFF
  0040604C: 306300FF andi        v1,v1,0xFF
  00406050: 00047A00 sll         t7,a0,8
  00406054: 01E3C021 addu        t8,t7,v1
  00406058: 3C010041 lui         at,0x41
  0040605C: AC38E410 sw          t8,0xE410(at)
  00406060: 0002CC02 srl         t9,v0,0x10
  00406064: 3328FFFF andi        t0,t9,0xFFFF
  00406068: 3C010041 lui         at,0x41
  0040606C: AC28E40C sw          t0,0xE40C(at)
  00406070: 3C010041 lui         at,0x41
  00406074: AC23E418 sw          v1,0xE418(at)
  00406078: 3C010041 lui         at,0x41
  0040607C: 0C101A57 jal         _heap_init
  00406080: AC24E414 sw          a0,0xE414(at)
$L31:
  00406084: 0C101A6F jal         _ioinit
  00406088: 00000000 nop
  0040608C: 0C101C3C jal         __initmbctable
  00406090: 00000000 nop
  00406094: 3C090041 lui         t1,0x41
  00406098: 8D291274 lw          t1,0x1274(t1)
  0040609C: 0120F809 jalr        ra,t1
  004060A0: 00000000 nop
  004060A4: 3C010041 lui         at,0x41
  004060A8: 0C101D4E jal         __crtGetEnvironmentStringsA
  004060AC: AC22F5CC sw          v0,0xF5CC(at)
  004060B0: 3C010041 lui         at,0x41
  004060B4: 10400005 beq         zero,v0,004060CC
  004060B8: AC22E3EC sw          v0,0xE3EC(at)
  004060BC: 3C0A0041 lui         t2,0x41
  004060C0: 8D4AF5CC lw          t2,0xF5CC(t2)
  004060C4: 15400003 bne         zero,t2,004060D4
  004060C8: 00000000 nop
  004060CC: 0C1018AD jal         exit
  004060D0: 2404FFFF addiu       a0,zero,0xFFFF
  004060D4: 0C101DF4 jal         _setargv
  004060D8: 00000000 nop
  004060DC: 0C101F0D jal         _setenvp
  004060E0: 00000000 nop
  004060E4: 0C10189C jal         _cinit
  004060E8: 00000000 nop
  004060EC: 3C0B0041 lui         t3,0x41
  004060F0: 8D6BF5CC lw          t3,0xF5CC(t3)
  004060F4: 24030022 addiu       v1,zero,0x22
  004060F8: 91620000 lbu         v0,0(t3)
  004060FC: 01603025 or          a2,t3,zero
  00406100: 14620018 bne         v0,v1,00406164
  00406104: 28410021 slti        at,v0,0x21
  00406108: 25660001 addiu       a2,t3,1
  0040610C: 90C40000 lbu         a0,0(a2)
  00406110: 1064000F beq         a0,v1,00406150
  00406114: 00801025 or          v0,a0,zero
  00406118: 1040000D beq         zero,v0,00406150
  0040611C: 00000000 nop
  00406120: 0C101F94 jal         _ismbblead
  00406124: AFA60074 sw          a2,0x74(sp)
  00406128: 24030022 addiu       v1,zero,0x22
  0040612C: 10400002 beq         zero,v0,00406138
  00406130: 8FA60074 lw          a2,0x74(sp)
  00406134: 24C60001 addiu       a2,a2,1
  00406138: 90C40001 lbu         a0,1(a2)
  0040613C: 24C60001 addiu       a2,a2,1
  00406140: 10640003 beq         a0,v1,00406150
  00406144: 00801025 or          v0,a0,zero
  00406148: 1440FFF5 bne         zero,v0,00406120
  0040614C: 00000000 nop
  00406150: 1462000C bne         v0,v1,00406184
  00406154: 00000000 nop
  00406158: 24C60001 addiu       a2,a2,1
  0040615C: 10000009 b           00406184
  00406160: 90C40000 lbu         a0,0(a2)
  00406164: 54200007 bnel        zero,at,00406184
  00406168: 90C40000 lbu         a0,0(a2)
  0040616C: 90CC0001 lbu         t4,1(a2)
  00406170: 24C60001 addiu       a2,a2,1
  00406174: 29810021 slti        at,t4,0x21
  00406178: 5020FFFD beql        zero,at,00406170
  0040617C: 90CC0001 lbu         t4,1(a2)
  00406180: 90C40000 lbu         a0,0(a2)
  00406184: 1080000A beq         zero,a0,004061B0
  00406188: 3C0D0041 lui         t5,0x41
  0040618C: 28810021 slti        at,a0,0x21
  00406190: 10200007 beq         zero,at,004061B0
  00406194: 00000000 nop
  00406198: 90C40001 lbu         a0,1(a2)
  0040619C: 24C60001 addiu       a2,a2,1
  004061A0: 10800003 beq         zero,a0,004061B0
  004061A4: 28810021 slti        at,a0,0x21
  004061A8: 5420FFFC bnel        zero,at,0040619C
  004061AC: 90C40001 lbu         a0,1(a2)
  004061B0: 8DAD1278 lw          t5,0x1278(t5)
  004061B4: AFA0005C sw          zero,0x5C(sp)
  004061B8: 27A40030 addiu       a0,sp,0x30
  004061BC: 01A0F809 jalr        ra,t5
  004061C0: AFA60074 sw          a2,0x74(sp)
  004061C4: 3C0E0041 lui         t6,0x41
  004061C8: 8DCE1288 lw          t6,0x1288(t6)
  004061CC: 00002025 or          a0,zero,zero
  004061D0: 01C0F809 jalr        ra,t6
  004061D4: 00000000 nop
  004061D8: 8FAF005C lw          t7,0x5C(sp)
  004061DC: 8FA60074 lw          a2,0x74(sp)
  004061E0: 00402025 or          a0,v0,zero
  004061E4: 31F80001 andi        t8,t7,1
  004061E8: 57000002 bnel        zero,t8,004061F4
  004061EC: 97A70060 lhu         a3,0x60(sp)
  004061F0: 2407000A addiu       a3,zero,0xA
  004061F4: 0C101463 jal         WinMain
  004061F8: 00002825 or          a1,zero,zero
  004061FC: 0C1018AD jal         exit
  00406200: 00402025 or          a0,v0,zero
  00406204: 10000004 b           00406218
  00406208: 8FBF0014 lw          ra,0x14(sp)
$L32:
  0040620C: 0C1018B5 jal         _exit
  00406210: 00402025 or          a0,v0,zero
$L33:
  00406214: 8FBF0014 lw          ra,0x14(sp)
  00406218: 03E00008 jr          ra
  0040621C: 27BD0078 addiu       sp,sp,0x78
_amsg_exit:
  00406220: 27BDFFE8 addiu       sp,sp,0xFFE8
  00406224: AFBF0014 sw          ra,0x14(sp)
  00406228: AFA40018 sw          a0,0x18(sp)
  0040622C: 3C0E0041 lui         t6,0x41
  00406230: 8DCEE3F8 lw          t6,0xE3F8(t6)
  00406234: 24010001 addiu       at,zero,1
  00406238: 15C10003 bne         at,t6,00406248
  0040623C: 00000000 nop
  00406240: 0C101FC6 jal         _FF_MSGBANNER
  00406244: 00000000 nop
  00406248: 0C101FDF jal         _NMSG_WRITE
  0040624C: 8FA40018 lw          a0,0x18(sp)
  00406250: 3C0F0041 lui         t7,0x41
  00406254: 8DEFE3F4 lw          t7,0xE3F4(t7)
  00406258: 240400FF addiu       a0,zero,0xFF
  0040625C: 01E0F809 jalr        ra,t7
  00406260: 00000000 nop
  00406264: 8FBF0014 lw          ra,0x14(sp)
  00406268: 03E00008 jr          ra
  0040626C: 27BD0018 addiu       sp,sp,0x18
_cinit:
  00406270: 27BDFFE8 addiu       sp,sp,0xFFE8
  00406274: AFBF0014 sw          ra,0x14(sp)
  00406278: 0C10208B jal         _fpmath
  0040627C: 00000000 nop
  00406280: 3C040041 lui         a0,0x41
  00406284: 3C050041 lui         a1,0x41
  00406288: 24A5E00C addiu       a1,a1,0xE00C
  0040628C: 0C101918 jal         _initterm
  00406290: 2484E008 addiu       a0,a0,0xE008
  00406294: 3C040041 lui         a0,0x41
  00406298: 3C050041 lui         a1,0x41
  0040629C: 24A5E004 addiu       a1,a1,0xE004
  004062A0: 0C101918 jal         _initterm
  004062A4: 2484E000 addiu       a0,a0,0xE000
  004062A8: 8FBF0014 lw          ra,0x14(sp)
  004062AC: 03E00008 jr          ra
  004062B0: 27BD0018 addiu       sp,sp,0x18
exit:
  004062B4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004062B8: AFBF0014 sw          ra,0x14(sp)
  004062BC: 00002825 or          a1,zero,zero
  004062C0: 0C1018CF jal         doexit
  004062C4: 00003025 or          a2,zero,zero
  004062C8: 8FBF0014 lw          ra,0x14(sp)
  004062CC: 03E00008 jr          ra
  004062D0: 27BD0018 addiu       sp,sp,0x18
_exit:
  004062D4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004062D8: AFBF0014 sw          ra,0x14(sp)
  004062DC: 24050001 addiu       a1,zero,1
  004062E0: 0C1018CF jal         doexit
  004062E4: 00003025 or          a2,zero,zero
  004062E8: 8FBF0014 lw          ra,0x14(sp)
  004062EC: 03E00008 jr          ra
  004062F0: 27BD0018 addiu       sp,sp,0x18
_cexit:
  004062F4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004062F8: AFBF0014 sw          ra,0x14(sp)
  004062FC: 00002025 or          a0,zero,zero
  00406300: 00002825 or          a1,zero,zero
  00406304: 0C1018CF jal         doexit
  00406308: 24060001 addiu       a2,zero,1
  0040630C: 8FBF0014 lw          ra,0x14(sp)
  00406310: 03E00008 jr          ra
  00406314: 27BD0018 addiu       sp,sp,0x18
_c_exit:
  00406318: 27BDFFE8 addiu       sp,sp,0xFFE8
  0040631C: AFBF0014 sw          ra,0x14(sp)
  00406320: 00002025 or          a0,zero,zero
  00406324: 24050001 addiu       a1,zero,1
  00406328: 0C1018CF jal         doexit
  0040632C: 24060001 addiu       a2,zero,1
  00406330: 8FBF0014 lw          ra,0x14(sp)
  00406334: 03E00008 jr          ra
  00406338: 27BD0018 addiu       sp,sp,0x18
doexit:
  0040633C: 27BDFFE0 addiu       sp,sp,0xFFE0
  00406340: AFB00018 sw          s0,0x18(sp)
  00406344: 00A08025 or          s0,a1,zero
  00406348: AFBF001C sw          ra,0x1C(sp)
  0040634C: AFA40020 sw          a0,0x20(sp)
  00406350: AFA60028 sw          a2,0x28(sp)
  00406354: 3C0E0041 lui         t6,0x41
  00406358: 8DCEE448 lw          t6,0xE448(t6)
  0040635C: 24010001 addiu       at,zero,1
  00406360: 3C0F0041 lui         t7,0x41
  00406364: 55C1000B bnel        at,t6,00406394
  00406368: 24190001 addiu       t9,zero,1
  0040636C: 8DEF1268 lw          t7,0x1268(t7)
  00406370: 01E0F809 jalr        ra,t7
  00406374: 00000000 nop
  00406378: 3C180041 lui         t8,0x41
  0040637C: 8F18126C lw          t8,0x126C(t8)
  00406380: 00402025 or          a0,v0,zero
  00406384: 8FA50020 lw          a1,0x20(sp)
  00406388: 0300F809 jalr        ra,t8
  0040638C: 00000000 nop
  00406390: 24190001 addiu       t9,zero,1
  00406394: 3C010041 lui         at,0x41
  00406398: 8FA80028 lw          t0,0x28(sp)
  0040639C: AC39E444 sw          t9,0xE444(at)
  004063A0: 3C010041 lui         at,0x41
  004063A4: 1600001B bne         zero,s0,00406414
  004063A8: A028E440 sb          t0,0xE440(at)
  004063AC: 3C030041 lui         v1,0x41
  004063B0: 8C63F5C4 lw          v1,0xF5C4(v1)
  004063B4: 3C020041 lui         v0,0x41
  004063B8: 10600011 beq         zero,v1,00406400
  004063BC: 00000000 nop
  004063C0: 8C42F5C8 lw          v0,0xF5C8(v0)
  004063C4: 2450FFFC addiu       s0,v0,0xFFFC
  004063C8: 0203082B sltu        at,s0,v1
  004063CC: 1420000C bne         zero,at,00406400
  004063D0: 00000000 nop
  004063D4: 8E020000 lw          v0,0(s0)
  004063D8: 10400003 beq         zero,v0,004063E8
  004063DC: 00000000 nop
  004063E0: 0040F809 jalr        ra,v0
  004063E4: 00000000 nop
  004063E8: 3C030041 lui         v1,0x41
  004063EC: 8C63F5C4 lw          v1,0xF5C4(v1)
  004063F0: 2610FFFC addiu       s0,s0,0xFFFC
  004063F4: 0203082B sltu        at,s0,v1
  004063F8: 5020FFF7 beql        zero,at,004063D8
  004063FC: 8E020000 lw          v0,0(s0)
  00406400: 3C040041 lui         a0,0x41
  00406404: 3C050041 lui         a1,0x41
  00406408: 24A5E014 addiu       a1,a1,0xE014
  0040640C: 0C101918 jal         _initterm
  00406410: 2484E010 addiu       a0,a0,0xE010
  00406414: 3C040041 lui         a0,0x41
  00406418: 3C050041 lui         a1,0x41
  0040641C: 24A5E01C addiu       a1,a1,0xE01C
  00406420: 0C101918 jal         _initterm
  00406424: 2484E018 addiu       a0,a0,0xE018
  00406428: 8FA90028 lw          t1,0x28(sp)
  0040642C: 240A0001 addiu       t2,zero,1
  00406430: 3C0B0041 lui         t3,0x41
  00406434: 55200007 bnel        zero,t1,00406454
  00406438: 8FB00018 lw          s0,0x18(sp)
  0040643C: 8D6B1264 lw          t3,0x1264(t3)
  00406440: 3C010041 lui         at,0x41
  00406444: AC2AE448 sw          t2,0xE448(at)
  00406448: 0160F809 jalr        ra,t3
  0040644C: 8FA40020 lw          a0,0x20(sp)
  00406450: 8FB00018 lw          s0,0x18(sp)
  00406454: 8FBF001C lw          ra,0x1C(sp)
  00406458: 03E00008 jr          ra
  0040645C: 27BD0020 addiu       sp,sp,0x20
_initterm:
  00406460: 27BDFFE0 addiu       sp,sp,0xFFE0
  00406464: AFB10018 sw          s1,0x18(sp)
  00406468: AFB00014 sw          s0,0x14(sp)
  0040646C: 00808025 or          s0,a0,zero
  00406470: 00A08825 or          s1,a1,zero
  00406474: AFBF001C sw          ra,0x1C(sp)
  00406478: 0211082B sltu        at,s0,s1
  0040647C: 5020000B beql        zero,at,004064AC
  00406480: 8FB00014 lw          s0,0x14(sp)
  00406484: 8E020000 lw          v0,0(s0)
  00406488: 50400004 beql        zero,v0,0040649C
  0040648C: 26100004 addiu       s0,s0,4
  00406490: 0040F809 jalr        ra,v0
  00406494: 00000000 nop
  00406498: 26100004 addiu       s0,s0,4
  0040649C: 0211082B sltu        at,s0,s1
  004064A0: 5420FFF9 bnel        zero,at,00406488
  004064A4: 8E020000 lw          v0,0(s0)
  004064A8: 8FB00014 lw          s0,0x14(sp)
  004064AC: 8FB10018 lw          s1,0x18(sp)
  004064B0: 8FBF001C lw          ra,0x1C(sp)
  004064B4: 03E00008 jr          ra
  004064B8: 27BD0020 addiu       sp,sp,0x20
_XcptFilter:
  004064BC: 27BDFFD0 addiu       sp,sp,0xFFD0
  004064C0: AFBF0014 sw          ra,0x14(sp)
  004064C4: AFA50034 sw          a1,0x34(sp)
  004064C8: 0C1019C3 jal         xcptlookup
  004064CC: 00000000 nop
  004064D0: 8FA60034 lw          a2,0x34(sp)
  004064D4: 10400005 beq         zero,v0,004064EC
  004064D8: 00402825 or          a1,v0,zero
  004064DC: 8C440008 lw          a0,8(v0)
  004064E0: 24010005 addiu       at,zero,5
  004064E4: 14800008 bne         zero,a0,00406508
  004064E8: 00801825 or          v1,a0,zero
  004064EC: 3C0E0041 lui         t6,0x41
  004064F0: 8DCE1230 lw          t6,0x1230(t6)
  004064F4: 00C02025 or          a0,a2,zero
  004064F8: 01C0F809 jalr        ra,t6
  004064FC: 00000000 nop
  00406500: 10000080 b           00406704
  00406504: 8FBF0014 lw          ra,0x14(sp)
  00406508: 54610005 bnel        at,v1,00406520
  0040650C: 24010001 addiu       at,zero,1
  00406510: ACA00008 sw          zero,8(a1)
  00406514: 1000007A b           00406700
  00406518: 24020001 addiu       v0,zero,1
  0040651C: 24010001 addiu       at,zero,1
  00406520: 50610077 beql        at,v1,00406700
  00406524: 2402FFFF addiu       v0,zero,0xFFFF
  00406528: 3C0A0041 lui         t2,0x41
  0040652C: 8D4AE4D4 lw          t2,0xE4D4(t2)
  00406530: 3C010041 lui         at,0x41
  00406534: AC26E4D4 sw          a2,0xE4D4(at)
  00406538: 8C4F0004 lw          t7,4(v0)
  0040653C: 24010008 addiu       at,zero,8
  00406540: 00804825 or          t1,a0,zero
  00406544: 15E10066 bne         at,t7,004066E0
  00406548: 3C060041 lui         a2,0x41
  0040654C: 3C180041 lui         t8,0x41
  00406550: 8CC6E4C4 lw          a2,0xE4C4(a2)
  00406554: 8F18E4C8 lw          t8,0xE4C8(t8)
  00406558: 240F0083 addiu       t7,zero,0x83
  0040655C: 00C02025 or          a0,a2,zero
  00406560: 00D83821 addu        a3,a2,t8
  00406564: 00C7082A slt         at,a2,a3
  00406568: 10200020 beq         zero,at,004065EC
  0040656C: 00E64023 subu        t0,a3,a2
  00406570: 31080003 andi        t0,t0,3
  00406574: 1100000D beq         zero,t0,004065AC
  00406578: 01062821 addu        a1,t0,a2
  0040657C: 0006C880 sll         t9,a2,2
  00406580: 0326C823 subu        t9,t9,a2
  00406584: 3C0B0041 lui         t3,0x41
  00406588: 256BE44C addiu       t3,t3,0xE44C
  0040658C: 0019C880 sll         t9,t9,2
  00406590: 032B1821 addu        v1,t9,t3
  00406594: 24840001 addiu       a0,a0,1
  00406598: AC600008 sw          zero,8(v1)
  0040659C: 14A4FFFD bne         a0,a1,00406594
  004065A0: 2463000C addiu       v1,v1,0xC
  004065A4: 50870012 beql        a3,a0,004065F0
  004065A8: 8C430000 lw          v1,0(v0)
  004065AC: 00046080 sll         t4,a0,2
  004065B0: 3C0D0041 lui         t5,0x41
  004065B4: 00077080 sll         t6,a3,2
  004065B8: 01C77023 subu        t6,t6,a3
  004065BC: 25ADE44C addiu       t5,t5,0xE44C
  004065C0: 01846023 subu        t4,t4,a0
  004065C4: 000C6080 sll         t4,t4,2
  004065C8: 000E7080 sll         t6,t6,2
  004065CC: 01CD2821 addu        a1,t6,t5
  004065D0: 018D1821 addu        v1,t4,t5
  004065D4: 24630030 addiu       v1,v1,0x30
  004065D8: AC60FFD8 sw          zero,0xFFD8(v1)
  004065DC: AC60FFE4 sw          zero,0xFFE4(v1)
  004065E0: AC60FFF0 sw          zero,0xFFF0(v1)
  004065E4: 1465FFFB bne         a1,v1,004065D4
  004065E8: AC60FFFC sw          zero,0xFFFC(v1)
  004065EC: 8C430000 lw          v1,0(v0)
  004065F0: 3C01C000 lui         at,0xC000
  004065F4: 3C060041 lui         a2,0x41
  004065F8: 3421008E ori         at,at,0x8E
  004065FC: 14610004 bne         at,v1,00406610
  00406600: 8CC6E4D0 lw          a2,0xE4D0(a2)
  00406604: 3C010041 lui         at,0x41
  00406608: 1000002A b           004066B4
  0040660C: AC2FE4D0 sw          t7,0xE4D0(at)
  00406610: 3C01C000 lui         at,0xC000
  00406614: 34210090 ori         at,at,0x90
  00406618: 14610004 bne         at,v1,0040662C
  0040661C: 24180081 addiu       t8,zero,0x81
  00406620: 3C010041 lui         at,0x41
  00406624: 10000023 b           004066B4
  00406628: AC38E4D0 sw          t8,0xE4D0(at)
  0040662C: 3C01C000 lui         at,0xC000
  00406630: 34210091 ori         at,at,0x91
  00406634: 14610004 bne         at,v1,00406648
  00406638: 24190084 addiu       t9,zero,0x84
  0040663C: 3C010041 lui         at,0x41
  00406640: 1000001C b           004066B4
  00406644: AC39E4D0 sw          t9,0xE4D0(at)
  00406648: 3C01C000 lui         at,0xC000
  0040664C: 34210093 ori         at,at,0x93
  00406650: 14610004 bne         at,v1,00406664
  00406654: 240B0085 addiu       t3,zero,0x85
  00406658: 3C010041 lui         at,0x41
  0040665C: 10000015 b           004066B4
  00406660: AC2BE4D0 sw          t3,0xE4D0(at)
  00406664: 3C01C000 lui         at,0xC000
  00406668: 3421008D ori         at,at,0x8D
  0040666C: 14610004 bne         at,v1,00406680
  00406670: 240C0082 addiu       t4,zero,0x82
  00406674: 3C010041 lui         at,0x41
  00406678: 1000000E b           004066B4
  0040667C: AC2CE4D0 sw          t4,0xE4D0(at)
  00406680: 3C01C000 lui         at,0xC000
  00406684: 3421008F ori         at,at,0x8F
  00406688: 14610004 bne         at,v1,0040669C
  0040668C: 240E0086 addiu       t6,zero,0x86
  00406690: 3C010041 lui         at,0x41
  00406694: 10000007 b           004066B4
  00406698: AC2EE4D0 sw          t6,0xE4D0(at)
  0040669C: 3C01C000 lui         at,0xC000
  004066A0: 34210092 ori         at,at,0x92
  004066A4: 14610003 bne         at,v1,004066B4
  004066A8: 240D008A addiu       t5,zero,0x8A
  004066AC: 3C010041 lui         at,0x41
  004066B0: AC2DE4D0 sw          t5,0xE4D0(at)
  004066B4: 3C050041 lui         a1,0x41
  004066B8: 8CA5E4D0 lw          a1,0xE4D0(a1)
  004066BC: 24040008 addiu       a0,zero,8
  004066C0: AFA6001C sw          a2,0x1C(sp)
  004066C4: 0120F809 jalr        ra,t1
  004066C8: AFAA0024 sw          t2,0x24(sp)
  004066CC: 8FA6001C lw          a2,0x1C(sp)
  004066D0: 3C010041 lui         at,0x41
  004066D4: 8FAA0024 lw          t2,0x24(sp)
  004066D8: 10000006 b           004066F4
  004066DC: AC26E4D0 sw          a2,0xE4D0(at)
  004066E0: ACA00008 sw          zero,8(a1)
  004066E4: 8CA40004 lw          a0,4(a1)
  004066E8: 0120F809 jalr        ra,t1
  004066EC: AFAA0024 sw          t2,0x24(sp)
  004066F0: 8FAA0024 lw          t2,0x24(sp)
  004066F4: 3C010041 lui         at,0x41
  004066F8: AC2AE4D4 sw          t2,0xE4D4(at)
  004066FC: 2402FFFF addiu       v0,zero,0xFFFF
  00406700: 8FBF0014 lw          ra,0x14(sp)
  00406704: 03E00008 jr          ra
  00406708: 27BD0030 addiu       sp,sp,0x30
xcptlookup:
  0040670C: 3C050041 lui         a1,0x41
  00406710: 24A5E44C addiu       a1,a1,0xE44C
  00406714: 3C0E0041 lui         t6,0x41
  00406718: 8DCEE44C lw          t6,0xE44C(t6)
  0040671C: 00A01825 or          v1,a1,zero
  00406720: 3C0F0041 lui         t7,0x41
  00406724: 508E0013 beql        t6,a0,00406774
  00406728: 8C680000 lw          t0,0(v1)
  0040672C: 8DEFE4CC lw          t7,0xE4CC(t7)
  00406730: 3C030041 lui         v1,0x41
  00406734: 2463E458 addiu       v1,v1,0xE458
  00406738: 000FC080 sll         t8,t7,2
  0040673C: 030FC023 subu        t8,t8,t7
  00406740: 0018C080 sll         t8,t8,2
  00406744: 00B81021 addu        v0,a1,t8
  00406748: 0062082B sltu        at,v1,v0
  0040674C: 50200009 beql        zero,at,00406774
  00406750: 8C680000 lw          t0,0(v1)
  00406754: 8C790000 lw          t9,0(v1)
  00406758: 50990006 beql        t9,a0,00406774
  0040675C: 8C680000 lw          t0,0(v1)
  00406760: 2463000C addiu       v1,v1,0xC
  00406764: 0062082B sltu        at,v1,v0
  00406768: 5420FFFB bnel        zero,at,00406758
  0040676C: 8C790000 lw          t9,0(v1)
  00406770: 8C680000 lw          t0,0(v1)
  00406774: 00601025 or          v0,v1,zero
  00406778: 10880003 beq         t0,a0,00406788
  0040677C: 00000000 nop
  00406780: 03E00008 jr          ra
  00406784: 00001025 or          v0,zero,zero
  00406788: 03E00008 jr          ra
  0040678C: 00000000 nop
__C_specific_handler:
  00406790: 27BDFF90 addiu       sp,sp,0xFF90
  00406794: AFB70030 sw          s7,0x30(sp)
  00406798: AFB30020 sw          s3,0x20(sp)
  0040679C: AFB10018 sw          s1,0x18(sp)
  004067A0: 00808825 or          s1,a0,zero
  004067A4: 00A09825 or          s3,a1,zero
  004067A8: 00E0B825 or          s7,a3,zero
  004067AC: AFBF0034 sw          ra,0x34(sp)
  004067B0: AFB6002C sw          s6,0x2C(sp)
  004067B4: AFB50028 sw          s5,0x28(sp)
  004067B8: AFB40024 sw          s4,0x24(sp)
  004067BC: AFB2001C sw          s2,0x1C(sp)
  004067C0: AFB00014 sw          s0,0x14(sp)
  004067C4: 8E2E0004 lw          t6,4(s1)
  004067C8: 8EE20004 lw          v0,4(s7)
  004067CC: 8EF50000 lw          s5,0(s7)
  004067D0: 31CF0066 andi        t7,t6,0x66
  004067D4: 15E0002D bne         zero,t7,0040688C
  004067D8: 8C56000C lw          s6,0xC(v0)
  004067DC: AFB1005C sw          s1,0x5C(sp)
  004067E0: AFA60060 sw          a2,0x60(sp)
  004067E4: 8EC40000 lw          a0,0(s6)
  004067E8: 00009025 or          s2,zero,zero
  004067EC: 02C08025 or          s0,s6,zero
  004067F0: 1080004E beq         zero,a0,0040692C
  004067F4: 27B4005C addiu       s4,sp,0x5C
  004067F8: 8E180004 lw          t8,4(s0)
  004067FC: 02B8082B sltu        at,s5,t8
  00406800: 5420001D bnel        zero,at,00406878
  00406804: 26520001 addiu       s2,s2,1
  00406808: 8E190008 lw          t9,8(s0)
  0040680C: 02B9082B sltu        at,s5,t9
  00406810: 50200019 beql        zero,at,00406878
  00406814: 26520001 addiu       s2,s2,1
  00406818: 8E080010 lw          t0,0x10(s0)
  0040681C: 02603025 or          a2,s3,zero
  00406820: 51000015 beql        zero,t0,00406878
  00406824: 26520001 addiu       s2,s2,1
  00406828: 8E05000C lw          a1,0xC(s0)
  0040682C: 0C1020B0 jal         __C_ExecuteExceptionFilter
  00406830: 02802025 or          a0,s4,zero
  00406834: 04410003 bgez        v0,00406844
  00406838: 02602825 or          a1,s3,zero
  0040683C: 1000003C b           00406930
  00406840: 00001025 or          v0,zero,zero
  00406844: 1840000A blez        v0,00406870
  00406848: 24060001 addiu       a2,zero,1
  0040684C: 0C1020B7 jal         _NLG_Notify
  00406850: 8E040010 lw          a0,0x10(s0)
  00406854: 3C090041 lui         t1,0x41
  00406858: 8D29123C lw          t1,0x123C(t1)
  0040685C: 02602025 or          a0,s3,zero
  00406860: 8E050010 lw          a1,0x10(s0)
  00406864: 02203025 or          a2,s1,zero
  00406868: 0120F809 jalr        ra,t1
  0040686C: 8E270000 lw          a3,0(s1)
  00406870: 8EC40000 lw          a0,0(s6)
  00406874: 26520001 addiu       s2,s2,1
  00406878: 0244082B sltu        at,s2,a0
  0040687C: 1420FFDE bne         zero,at,004067F8
  00406880: 26100010 addiu       s0,s0,0x10
  00406884: 1000002A b           00406930
  00406888: 24020001 addiu       v0,zero,1
  0040688C: 8EC40000 lw          a0,0(s6)
  00406890: 8CD4011C lw          s4,0x11C(a2)
  00406894: 00009025 or          s2,zero,zero
  00406898: 10800024 beq         zero,a0,0040692C
  0040689C: 02C08025 or          s0,s6,zero
  004068A0: 8E030004 lw          v1,4(s0)
  004068A4: 02A3082B sltu        at,s5,v1
  004068A8: 5420001D bnel        zero,at,00406920
  004068AC: 26520001 addiu       s2,s2,1
  004068B0: 8E020008 lw          v0,8(s0)
  004068B4: 02A2082B sltu        at,s5,v0
  004068B8: 10200018 beq         zero,at,0040691C
  004068BC: 0283082B sltu        at,s4,v1
  004068C0: 14200003 bne         zero,at,004068D0
  004068C4: 0054082B sltu        at,v0,s4
  004068C8: 50200019 beql        zero,at,00406930
  004068CC: 24020001 addiu       v0,zero,1
  004068D0: 8E030010 lw          v1,0x10(s0)
  004068D4: 244A0004 addiu       t2,v0,4
  004068D8: 02602825 or          a1,s3,zero
  004068DC: 50600006 beql        zero,v1,004068F8
  004068E0: AEEA0000 sw          t2,0(s7)
  004068E4: 5683000E bnel        v1,s4,00406920
  004068E8: 26520001 addiu       s2,s2,1
  004068EC: 10000010 b           00406930
  004068F0: 24020001 addiu       v0,zero,1
  004068F4: AEEA0000 sw          t2,0(s7)
  004068F8: 8E11000C lw          s1,0xC(s0)
  004068FC: 24060101 addiu       a2,zero,0x101
  00406900: 0C1020B7 jal         _NLG_Notify
  00406904: 02202025 or          a0,s1,zero
  00406908: 24040001 addiu       a0,zero,1
  0040690C: 02202825 or          a1,s1,zero
  00406910: 0C1020BF jal         _NLG_ExecuteTerminationHandler
  00406914: 02603025 or          a2,s3,zero
  00406918: 8EC40000 lw          a0,0(s6)
  0040691C: 26520001 addiu       s2,s2,1
  00406920: 0244082B sltu        at,s2,a0
  00406924: 1420FFDE bne         zero,at,004068A0
  00406928: 26100010 addiu       s0,s0,0x10
  0040692C: 24020001 addiu       v0,zero,1
  00406930: 8FB00014 lw          s0,0x14(sp)
  00406934: 8FB10018 lw          s1,0x18(sp)
  00406938: 8FB2001C lw          s2,0x1C(sp)
  0040693C: 8FB30020 lw          s3,0x20(sp)
  00406940: 8FB40024 lw          s4,0x24(sp)
  00406944: 8FB50028 lw          s5,0x28(sp)
  00406948: 8FB6002C lw          s6,0x2C(sp)
  0040694C: 8FB70030 lw          s7,0x30(sp)
  00406950: 8FBF0034 lw          ra,0x34(sp)
  00406954: 03E00008 jr          ra
  00406958: 27BD0070 addiu       sp,sp,0x70
_heap_init:
  0040695C: 27BDFFE8 addiu       sp,sp,0xFFE8
  00406960: AFBF0014 sw          ra,0x14(sp)
  00406964: 3C0E0041 lui         t6,0x41
  00406968: 8DCE121C lw          t6,0x121C(t6)
  0040696C: 24040001 addiu       a0,zero,1
  00406970: 24051000 addiu       a1,zero,0x1000
  00406974: 01C0F809 jalr        ra,t6
  00406978: 00003025 or          a2,zero,zero
  0040697C: 3C010041 lui         at,0x41
  00406980: AC22F5C0 sw          v0,0xF5C0(at)
  00406984: 8FBF0014 lw          ra,0x14(sp)
  00406988: 03E00008 jr          ra
  0040698C: 27BD0018 addiu       sp,sp,0x18
_heap_term:
  00406990: 27BDFFE8 addiu       sp,sp,0xFFE8
  00406994: AFBF0014 sw          ra,0x14(sp)
  00406998: 3C0E0041 lui         t6,0x41
  0040699C: 8DCE1234 lw          t6,0x1234(t6)
  004069A0: 3C040041 lui         a0,0x41
  004069A4: 8C84F5C0 lw          a0,0xF5C0(a0)
  004069A8: 01C0F809 jalr        ra,t6
  004069AC: 00000000 nop
  004069B0: 8FBF0014 lw          ra,0x14(sp)
  004069B4: 03E00008 jr          ra
  004069B8: 27BD0018 addiu       sp,sp,0x18
_ioinit:
  004069BC: 27BDFF50 addiu       sp,sp,0xFF50
  004069C0: AFBF0034 sw          ra,0x34(sp)
  004069C4: AFB60030 sw          s6,0x30(sp)
  004069C8: AFB5002C sw          s5,0x2C(sp)
  004069CC: AFB40028 sw          s4,0x28(sp)
  004069D0: AFB30024 sw          s3,0x24(sp)
  004069D4: AFB20020 sw          s2,0x20(sp)
  004069D8: AFB1001C sw          s1,0x1C(sp)
  004069DC: AFB00018 sw          s0,0x18(sp)
  004069E0: 0C1020C7 jal         malloc
  004069E4: 24040100 addiu       a0,zero,0x100
  004069E8: 14400003 bne         zero,v0,004069F8
  004069EC: 00408025 or          s0,v0,zero
  004069F0: 0C101888 jal         _amsg_exit
  004069F4: 2404001B addiu       a0,zero,0x1B
  004069F8: 240E0020 addiu       t6,zero,0x20
  004069FC: 3C010041 lui         at,0x41
  00406A00: AC2EF4B0 sw          t6,0xF4B0(at)
  00406A04: 3C010041 lui         at,0x41
  00406A08: AC30F4C0 sw          s0,0xF4C0(at)
  00406A0C: 260F0100 addiu       t7,s0,0x100
  00406A10: 020F082B sltu        at,s0,t7
  00406A14: 1020000D beq         zero,at,00406A4C
  00406A18: 3C080041 lui         t0,0x41
  00406A1C: 2413FFFF addiu       s3,zero,0xFFFF
  00406A20: 2405000A addiu       a1,zero,0xA
  00406A24: A2000004 sb          zero,4(s0)
  00406A28: AE130000 sw          s3,0(s0)
  00406A2C: A2050005 sb          a1,5(s0)
  00406A30: 3C180041 lui         t8,0x41
  00406A34: 8F18F4C0 lw          t8,0xF4C0(t8)
  00406A38: 26100008 addiu       s0,s0,8
  00406A3C: 27190100 addiu       t9,t8,0x100
  00406A40: 0219082B sltu        at,s0,t9
  00406A44: 5420FFF8 bnel        zero,at,00406A28
  00406A48: A2000004 sb          zero,4(s0)
  00406A4C: 8D081278 lw          t0,0x1278(t0)
  00406A50: 2413FFFF addiu       s3,zero,0xFFFF
  00406A54: 27A40068 addiu       a0,sp,0x68
  00406A58: 0100F809 jalr        ra,t0
  00406A5C: 00000000 nop
  00406A60: 97A9009A lhu         t1,0x9A(sp)
  00406A64: 8FAA009C lw          t2,0x9C(sp)
  00406A68: 51200059 beql        zero,t1,00406BD0
  00406A6C: 00009025 or          s2,zero,zero
  00406A70: 11400056 beq         zero,t2,00406BCC
  00406A74: 3C0B0041 lui         t3,0x41
  00406A78: 89550003 lwl         s5,3(t2)
  00406A7C: 99550000 lwr         s5,0(t2)
  00406A80: 25520004 addiu       s2,t2,4
  00406A84: 3C160041 lui         s6,0x41
  00406A88: 0155A021 addu        s4,t2,s5
  00406A8C: 2AA10800 slti        at,s5,0x800
  00406A90: 14200002 bne         zero,at,00406A9C
  00406A94: 26940004 addiu       s4,s4,4
  00406A98: 24150800 addiu       s5,zero,0x800
  00406A9C: 8D6BF4B0 lw          t3,0xF4B0(t3)
  00406AA0: 24110001 addiu       s1,zero,1
  00406AA4: 26D6F4C0 addiu       s6,s6,0xF4C0
  00406AA8: 0175082A slt         at,t3,s5
  00406AAC: 10200023 beq         zero,at,00406B3C
  00406AB0: 00000000 nop
  00406AB4: 0C1020C7 jal         malloc
  00406AB8: 24040100 addiu       a0,zero,0x100
  00406ABC: 2405000A addiu       a1,zero,0xA
  00406AC0: 14400004 bne         zero,v0,00406AD4
  00406AC4: 00408025 or          s0,v0,zero
  00406AC8: 3C150041 lui         s5,0x41
  00406ACC: 1000001B b           00406B3C
  00406AD0: 8EB5F4B0 lw          s5,0xF4B0(s5)
  00406AD4: 00116080 sll         t4,s1,2
  00406AD8: 02CC1821 addu        v1,s6,t4
  00406ADC: AC620000 sw          v0,0(v1)
  00406AE0: 3C0D0041 lui         t5,0x41
  00406AE4: 8DADF4B0 lw          t5,0xF4B0(t5)
  00406AE8: 3C010041 lui         at,0x41
  00406AEC: 244F0100 addiu       t7,v0,0x100
  00406AF0: 25AE0020 addiu       t6,t5,0x20
  00406AF4: AC2EF4B0 sw          t6,0xF4B0(at)
  00406AF8: 004F082B sltu        at,v0,t7
  00406AFC: 1020000A beq         zero,at,00406B28
  00406B00: 3C080041 lui         t0,0x41
  00406B04: A2000004 sb          zero,4(s0)
  00406B08: AE130000 sw          s3,0(s0)
  00406B0C: A2050005 sb          a1,5(s0)
  00406B10: 8C780000 lw          t8,0(v1)
  00406B14: 26100008 addiu       s0,s0,8
  00406B18: 27190100 addiu       t9,t8,0x100
  00406B1C: 0219082B sltu        at,s0,t9
  00406B20: 5420FFF9 bnel        zero,at,00406B08
  00406B24: A2000004 sb          zero,4(s0)
  00406B28: 8D08F4B0 lw          t0,0xF4B0(t0)
  00406B2C: 26310001 addiu       s1,s1,1
  00406B30: 0115082A slt         at,t0,s5
  00406B34: 1420FFDF bne         zero,at,00406AB4
  00406B38: 00000000 nop
  00406B3C: 3C160041 lui         s6,0x41
  00406B40: 26D6F4C0 addiu       s6,s6,0xF4C0
  00406B44: 1AA00021 blez        s5,00406BCC
  00406B48: 00001825 or          v1,zero,zero
  00406B4C: 8A820003 lwl         v0,3(s4)
  00406B50: 9A820000 lwr         v0,0(s4)
  00406B54: 5262001A beql        v0,s3,00406BC0
  00406B58: 24630001 addiu       v1,v1,1
  00406B5C: 82490000 lb          t1,0(s2)
  00406B60: 3C0B0041 lui         t3,0x41
  00406B64: 312A0001 andi        t2,t1,1
  00406B68: 51400015 beql        zero,t2,00406BC0
  00406B6C: 24630001 addiu       v1,v1,1
  00406B70: 8D6B120C lw          t3,0x120C(t3)
  00406B74: 00402025 or          a0,v0,zero
  00406B78: AFA30054 sw          v1,0x54(sp)
  00406B7C: 0160F809 jalr        ra,t3
  00406B80: 00000000 nop
  00406B84: 1040000D beq         zero,v0,00406BBC
  00406B88: 8FA30054 lw          v1,0x54(sp)
  00406B8C: 00036143 sra         t4,v1,5
  00406B90: 000C6880 sll         t5,t4,2
  00406B94: 02CD7021 addu        t6,s6,t5
  00406B98: 8DCF0000 lw          t7,0(t6)
  00406B9C: 8A880003 lwl         t0,3(s4)
  00406BA0: 9A880000 lwr         t0,0(s4)
  00406BA4: 3078001F andi        t8,v1,0x1F
  00406BA8: 0018C8C0 sll         t9,t8,3
  00406BAC: 01F98021 addu        s0,t7,t9
  00406BB0: AE080000 sw          t0,0(s0)
  00406BB4: 82490000 lb          t1,0(s2)
  00406BB8: A2090004 sb          t1,4(s0)
  00406BBC: 24630001 addiu       v1,v1,1
  00406BC0: 26520001 addiu       s2,s2,1
  00406BC4: 1475FFE1 bne         s5,v1,00406B4C
  00406BC8: 26940004 addiu       s4,s4,4
  00406BCC: 00009025 or          s2,zero,zero
  00406BD0: 24160018 addiu       s6,zero,0x18
  00406BD4: 24150002 addiu       s5,zero,2
  00406BD8: 2414FF81 addiu       s4,zero,0xFF81
  00406BDC: 3C0A0041 lui         t2,0x41
  00406BE0: 8D4AF4C0 lw          t2,0xF4C0(t2)
  00406BE4: 3C0C0041 lui         t4,0x41
  00406BE8: 01528021 addu        s0,t2,s2
  00406BEC: 8E0B0000 lw          t3,0(s0)
  00406BF0: 566B0027 bnel        t3,s3,00406C90
  00406BF4: 820A0004 lb          t2,4(s0)
  00406BF8: A2140004 sb          s4,4(s0)
  00406BFC: 52400006 beql        zero,s2,00406C18
  00406C00: 2404FFF6 addiu       a0,zero,0xFFF6
  00406C04: 24010008 addiu       at,zero,8
  00406C08: 52410002 beql        at,s2,00406C14
  00406C0C: 2402FFF5 addiu       v0,zero,0xFFF5
  00406C10: 2402FFF4 addiu       v0,zero,0xFFF4
  00406C14: 00402025 or          a0,v0,zero
  00406C18: 8D8C1218 lw          t4,0x1218(t4)
  00406C1C: 0180F809 jalr        ra,t4
  00406C20: 00000000 nop
  00406C24: 10530015 beq         s3,v0,00406C7C
  00406C28: 00408825 or          s1,v0,zero
  00406C2C: 3C0D0041 lui         t5,0x41
  00406C30: 8DAD120C lw          t5,0x120C(t5)
  00406C34: 00402025 or          a0,v0,zero
  00406C38: 01A0F809 jalr        ra,t5
  00406C3C: 00000000 nop
  00406C40: 1040000E beq         zero,v0,00406C7C
  00406C44: 304300FF andi        v1,v0,0xFF
  00406C48: 16A30005 bne         v1,s5,00406C60
  00406C4C: AE110000 sw          s1,0(s0)
  00406C50: 820E0004 lb          t6,4(s0)
  00406C54: 35D80040 ori         t8,t6,0x40
  00406C58: 1000000F b           00406C98
  00406C5C: A2180004 sb          t8,4(s0)
  00406C60: 24010003 addiu       at,zero,3
  00406C64: 5461000D bnel        at,v1,00406C9C
  00406C68: 26520008 addiu       s2,s2,8
  00406C6C: 820F0004 lb          t7,4(s0)
  00406C70: 35F90008 ori         t9,t7,8
  00406C74: 10000008 b           00406C98
  00406C78: A2190004 sb          t9,4(s0)
  00406C7C: 82080004 lb          t0,4(s0)
  00406C80: 35090040 ori         t1,t0,0x40
  00406C84: 10000004 b           00406C98
  00406C88: A2090004 sb          t1,4(s0)
  00406C8C: 820A0004 lb          t2,4(s0)
  00406C90: 354B0080 ori         t3,t2,0x80
  00406C94: A20B0004 sb          t3,4(s0)
  00406C98: 26520008 addiu       s2,s2,8
  00406C9C: 1656FFCF bne         s6,s2,00406BDC
  00406CA0: 00000000 nop
  00406CA4: 3C0C0041 lui         t4,0x41
  00406CA8: 8D8C1210 lw          t4,0x1210(t4)
  00406CAC: 3C040041 lui         a0,0x41
  00406CB0: 8C84F4B0 lw          a0,0xF4B0(a0)
  00406CB4: 0180F809 jalr        ra,t4
  00406CB8: 00000000 nop
  00406CBC: 8FB00018 lw          s0,0x18(sp)
  00406CC0: 8FB1001C lw          s1,0x1C(sp)
  00406CC4: 8FB20020 lw          s2,0x20(sp)
  00406CC8: 8FB30024 lw          s3,0x24(sp)
  00406CCC: 8FB40028 lw          s4,0x28(sp)
  00406CD0: 8FB5002C lw          s5,0x2C(sp)
  00406CD4: 8FB60030 lw          s6,0x30(sp)
  00406CD8: 8FBF0034 lw          ra,0x34(sp)
  00406CDC: 03E00008 jr          ra
  00406CE0: 27BD00B0 addiu       sp,sp,0xB0
_ioterm:
  00406CE4: 27BDFFE0 addiu       sp,sp,0xFFE0
  00406CE8: AFBF001C sw          ra,0x1C(sp)
  00406CEC: AFB10018 sw          s1,0x18(sp)
  00406CF0: AFB00014 sw          s0,0x14(sp)
  00406CF4: 3C100041 lui         s0,0x41
  00406CF8: 3C110041 lui         s1,0x41
  00406CFC: 2631F5C0 addiu       s1,s1,0xF5C0
  00406D00: 2610F4C0 addiu       s0,s0,0xF4C0
  00406D04: 8E040000 lw          a0,0(s0)
  00406D08: 50800004 beql        zero,a0,00406D1C
  00406D0C: 26100004 addiu       s0,s0,4
  00406D10: 0C1020F9 jal         free
  00406D14: 00000000 nop
  00406D18: 26100004 addiu       s0,s0,4
  00406D1C: 5611FFFA bnel        s1,s0,00406D08
  00406D20: 8E040000 lw          a0,0(s0)
  00406D24: 8FB00014 lw          s0,0x14(sp)
  00406D28: 8FB10018 lw          s1,0x18(sp)
  00406D2C: 8FBF001C lw          ra,0x1C(sp)
  00406D30: 03E00008 jr          ra
  00406D34: 27BD0020 addiu       sp,sp,0x20
_setmbcp:
  00406D38: 27BDFFA0 addiu       sp,sp,0xFFA0
  00406D3C: AFB00018 sw          s0,0x18(sp)
  00406D40: 00808025 or          s0,a0,zero
  00406D44: AFBF001C sw          ra,0x1C(sp)
  00406D48: 0C101C75 jal         getSystemCP
  00406D4C: 02002025 or          a0,s0,zero
  00406D50: 3C0E0041 lui         t6,0x41
  00406D54: 8DCEE5EC lw          t6,0xE5EC(t6)
  00406D58: 00408025 or          s0,v0,zero
  00406D5C: 504E00DD beql        t6,v0,004070D4
  00406D60: 00001025 or          v0,zero,zero
  00406D64: 14400005 bne         zero,v0,00406D7C
  00406D68: 00002025 or          a0,zero,zero
  00406D6C: 0C101C43 jal         setSBCS
  00406D70: 00000000 nop
  00406D74: 100000D7 b           004070D4
  00406D78: 00001025 or          v0,zero,zero
  00406D7C: 3C030041 lui         v1,0x41
  00406D80: 2463E608 addiu       v1,v1,0xE608
  00406D84: 24050005 addiu       a1,zero,5
  00406D88: 8C6F0000 lw          t7,0(v1)
  00406D8C: 144F005A bne         t7,v0,00406EF8
  00406D90: 3C010041 lui         at,0x41
  00406D94: 3C030041 lui         v1,0x41
  00406D98: 3C020041 lui         v0,0x41
  00406D9C: 2442E5E9 addiu       v0,v0,0xE5E9
  00406DA0: 2463E4E9 addiu       v1,v1,0xE4E9
  00406DA4: A020E4E8 sb          zero,0xE4E8(at)
  00406DA8: 24630004 addiu       v1,v1,4
  00406DAC: A060FFFC sb          zero,0xFFFC(v1)
  00406DB0: A060FFFD sb          zero,0xFFFD(v1)
  00406DB4: A060FFFE sb          zero,0xFFFE(v1)
  00406DB8: 1462FFFB bne         v0,v1,00406DA8
  00406DBC: A060FFFF sb          zero,0xFFFF(v1)
  00406DC0: 0004C080 sll         t8,a0,2
  00406DC4: 0304C023 subu        t8,t8,a0
  00406DC8: 3C190041 lui         t9,0x41
  00406DCC: 2739E608 addiu       t9,t9,0xE608
  00406DD0: 0018C100 sll         t8,t8,4
  00406DD4: 03194821 addu        t1,t8,t9
  00406DD8: 01204025 or          t0,t1,zero
  00406DDC: 25270010 addiu       a3,t1,0x10
  00406DE0: 00003025 or          a2,zero,zero
  00406DE4: 910A0010 lbu         t2,0x10(t0)
  00406DE8: 00E02825 or          a1,a3,zero
  00406DEC: 25080008 addiu       t0,t0,8
  00406DF0: 51400020 beql        zero,t2,00406E74
  00406DF4: 24C60001 addiu       a2,a2,1
  00406DF8: 90EB0001 lbu         t3,1(a3)
  00406DFC: 5160001D beql        zero,t3,00406E74
  00406E00: 24C60001 addiu       a2,a2,1
  00406E04: 90A30001 lbu         v1,1(a1)
  00406E08: 90A40000 lbu         a0,0(a1)
  00406E0C: 0064082B sltu        at,v1,a0
  00406E10: 14200010 bne         zero,at,00406E54
  00406E14: 00801025 or          v0,a0,zero
  00406E18: 3C0C0041 lui         t4,0x41
  00406E1C: 258CE4E8 addiu       t4,t4,0xE4E8
  00406E20: 008C1821 addu        v1,a0,t4
  00406E24: 3C040041 lui         a0,0x41
  00406E28: 00862021 addu        a0,a0,a2
  00406E2C: 8084E604 lb          a0,0xE604(a0)
  00406E30: 906D0001 lbu         t5,1(v1)
  00406E34: 24420001 addiu       v0,v0,1
  00406E38: 24630001 addiu       v1,v1,1
  00406E3C: 01A47025 or          t6,t5,a0
  00406E40: A06E0000 sb          t6,0(v1)
  00406E44: 90AF0001 lbu         t7,1(a1)
  00406E48: 01E2082B sltu        at,t7,v0
  00406E4C: 5020FFF9 beql        zero,at,00406E34
  00406E50: 906D0001 lbu         t5,1(v1)
  00406E54: 90A40002 lbu         a0,2(a1)
  00406E58: 24A50002 addiu       a1,a1,2
  00406E5C: 50800005 beql        zero,a0,00406E74
  00406E60: 24C60001 addiu       a2,a2,1
  00406E64: 90A30001 lbu         v1,1(a1)
  00406E68: 5460FFE9 bnel        zero,v1,00406E10
  00406E6C: 0064082B sltu        at,v1,a0
  00406E70: 24C60001 addiu       a2,a2,1
  00406E74: 2CC10004 sltiu       at,a2,4
  00406E78: 1420FFDA bne         zero,at,00406DE4
  00406E7C: 24E70008 addiu       a3,a3,8
  00406E80: 3C010041 lui         at,0x41
  00406E84: AC30E5EC sw          s0,0xE5EC(at)
  00406E88: 02002025 or          a0,s0,zero
  00406E8C: 0C101C61 jal         CPtoLCID
  00406E90: AFA9002C sw          t1,0x2C(sp)
  00406E94: 8FA9002C lw          t1,0x2C(sp)
  00406E98: 3C010041 lui         at,0x41
  00406E9C: AC22E5F0 sw          v0,0xE5F0(at)
  00406EA0: 95380004 lhu         t8,4(t1)
  00406EA4: 3C010041 lui         at,0x41
  00406EA8: 24060002 addiu       a2,zero,2
  00406EAC: A438E5F4 sh          t8,0xE5F4(at)
  00406EB0: 95390006 lhu         t9,6(t1)
  00406EB4: 3C010041 lui         at,0x41
  00406EB8: 00062040 sll         a0,a2,1
  00406EBC: A439E5F6 sh          t9,0xE5F6(at)
  00406EC0: 01241821 addu        v1,t1,a0
  00406EC4: 3C0A0041 lui         t2,0x41
  00406EC8: 254AE5F4 addiu       t2,t2,0xE5F4
  00406ECC: 008A1021 addu        v0,a0,t2
  00406ED0: 946B0004 lhu         t3,4(v1)
  00406ED4: 946C0006 lhu         t4,6(v1)
  00406ED8: 946D0008 lhu         t5,8(v1)
  00406EDC: 946E000A lhu         t6,0xA(v1)
  00406EE0: A44B0000 sh          t3,0(v0)
  00406EE4: A44C0002 sh          t4,2(v0)
  00406EE8: A44D0004 sh          t5,4(v0)
  00406EEC: A44E0006 sh          t6,6(v0)
  00406EF0: 10000078 b           004070D4
  00406EF4: 00001025 or          v0,zero,zero
  00406EF8: 24840001 addiu       a0,a0,1
  00406EFC: 1485FFA2 bne         a1,a0,00406D88
  00406F00: 24630030 addiu       v1,v1,0x30
  00406F04: 3C0F0041 lui         t7,0x41
  00406F08: 8DEF1238 lw          t7,0x1238(t7)
  00406F0C: 02002025 or          a0,s0,zero
  00406F10: 27A5003C addiu       a1,sp,0x3C
  00406F14: 01E0F809 jalr        ra,t7
  00406F18: 00000000 nop
  00406F1C: 24010001 addiu       at,zero,1
  00406F20: 14410064 bne         at,v0,004070B4
  00406F24: 3C0D0041 lui         t5,0x41
  00406F28: 3C010041 lui         at,0x41
  00406F2C: 3C030041 lui         v1,0x41
  00406F30: 3C020041 lui         v0,0x41
  00406F34: 2442E5E9 addiu       v0,v0,0xE5E9
  00406F38: 2463E4E9 addiu       v1,v1,0xE4E9
  00406F3C: A020E4E8 sb          zero,0xE4E8(at)
  00406F40: 24630004 addiu       v1,v1,4
  00406F44: A060FFFC sb          zero,0xFFFC(v1)
  00406F48: A060FFFD sb          zero,0xFFFD(v1)
  00406F4C: A060FFFE sb          zero,0xFFFE(v1)
  00406F50: 1462FFFB bne         v0,v1,00406F40
  00406F54: A060FFFF sb          zero,0xFFFF(v1)
  00406F58: 8FB8003C lw          t8,0x3C(sp)
  00406F5C: 93B90042 lbu         t9,0x42(sp)
  00406F60: 3C0F0041 lui         t7,0x41
  00406F64: 2F010002 sltiu       at,t8,2
  00406F68: 1420003F bne         zero,at,00407068
  00406F6C: 00000000 nop
  00406F70: 1320001B beq         zero,t9,00406FE0
  00406F74: 27A40042 addiu       a0,sp,0x42
  00406F78: 93AA0043 lbu         t2,0x43(sp)
  00406F7C: 11400018 beq         zero,t2,00406FE0
  00406F80: 00000000 nop
  00406F84: 90830001 lbu         v1,1(a0)
  00406F88: 90850000 lbu         a1,0(a0)
  00406F8C: 0065082B sltu        at,v1,a1
  00406F90: 1420000C bne         zero,at,00406FC4
  00406F94: 00A01025 or          v0,a1,zero
  00406F98: 3C0B0041 lui         t3,0x41
  00406F9C: 256BE4E8 addiu       t3,t3,0xE4E8
  00406FA0: 00AB1821 addu        v1,a1,t3
  00406FA4: 906C0001 lbu         t4,1(v1)
  00406FA8: 908E0001 lbu         t6,1(a0)
  00406FAC: 24420001 addiu       v0,v0,1
  00406FB0: 358D0004 ori         t5,t4,4
  00406FB4: 01C2082B sltu        at,t6,v0
  00406FB8: A06D0001 sb          t5,1(v1)
  00406FBC: 1020FFF9 beq         zero,at,00406FA4
  00406FC0: 24630001 addiu       v1,v1,1
  00406FC4: 90850002 lbu         a1,2(a0)
  00406FC8: 24840002 addiu       a0,a0,2
  00406FCC: 10A00004 beq         zero,a1,00406FE0
  00406FD0: 00000000 nop
  00406FD4: 90830001 lbu         v1,1(a0)
  00406FD8: 5460FFED bnel        zero,v1,00406F90
  00406FDC: 0065082B sltu        at,v1,a1
  00406FE0: 91EFE4EA lbu         t7,0xE4EA(t7)
  00406FE4: 3C010041 lui         at,0x41
  00406FE8: 3C190041 lui         t9,0x41
  00406FEC: 35F80008 ori         t8,t7,8
  00406FF0: A038E4EA sb          t8,0xE4EA(at)
  00406FF4: 9339E4EB lbu         t9,0xE4EB(t9)
  00406FF8: 3C010041 lui         at,0x41
  00406FFC: 3C030041 lui         v1,0x41
  00407000: 3C020041 lui         v0,0x41
  00407004: 372A0008 ori         t2,t9,8
  00407008: A02AE4EB sb          t2,0xE4EB(at)
  0040700C: 2442E5E7 addiu       v0,v0,0xE5E7
  00407010: 2463E4EB addiu       v1,v1,0xE4EB
  00407014: 906B0001 lbu         t3,1(v1)
  00407018: 906D0002 lbu         t5,2(v1)
  0040701C: 906F0003 lbu         t7,3(v1)
  00407020: 90790004 lbu         t9,4(v1)
  00407024: 24630004 addiu       v1,v1,4
  00407028: 356C0008 ori         t4,t3,8
  0040702C: 35AE0008 ori         t6,t5,8
  00407030: 35F80008 ori         t8,t7,8
  00407034: 372A0008 ori         t2,t9,8
  00407038: A06A0000 sb          t2,0(v1)
  0040703C: A078FFFF sb          t8,0xFFFF(v1)
  00407040: A06EFFFE sb          t6,0xFFFE(v1)
  00407044: 1462FFF3 bne         v0,v1,00407014
  00407048: A06CFFFD sb          t4,0xFFFD(v1)
  0040704C: 3C010041 lui         at,0x41
  00407050: AC30E5EC sw          s0,0xE5EC(at)
  00407054: 0C101C61 jal         CPtoLCID
  00407058: 02002025 or          a0,s0,zero
  0040705C: 3C010041 lui         at,0x41
  00407060: 10000005 b           00407078
  00407064: AC22E5F0 sw          v0,0xE5F0(at)
  00407068: 3C010041 lui         at,0x41
  0040706C: AC20E5EC sw          zero,0xE5EC(at)
  00407070: 3C010041 lui         at,0x41
  00407074: AC20E5F0 sw          zero,0xE5F0(at)
  00407078: 3C010041 lui         at,0x41
  0040707C: A420E5F4 sh          zero,0xE5F4(at)
  00407080: 24060002 addiu       a2,zero,2
  00407084: 3C0C0041 lui         t4,0x41
  00407088: 3C010041 lui         at,0x41
  0040708C: 258CE5F4 addiu       t4,t4,0xE5F4
  00407090: 00065840 sll         t3,a2,1
  00407094: A420E5F6 sh          zero,0xE5F6(at)
  00407098: 016C1021 addu        v0,t3,t4
  0040709C: A4400000 sh          zero,0(v0)
  004070A0: A4400002 sh          zero,2(v0)
  004070A4: A4400004 sh          zero,4(v0)
  004070A8: A4400006 sh          zero,6(v0)
  004070AC: 10000009 b           004070D4
  004070B0: 00001025 or          v0,zero,zero
  004070B4: 8DADE600 lw          t5,0xE600(t5)
  004070B8: 2402FFFF addiu       v0,zero,0xFFFF
  004070BC: 11A00005 beq         zero,t5,004070D4
  004070C0: 00000000 nop
  004070C4: 0C101C43 jal         setSBCS
  004070C8: 00000000 nop
  004070CC: 10000001 b           004070D4
  004070D0: 00001025 or          v0,zero,zero
  004070D4: 8FB00018 lw          s0,0x18(sp)
  004070D8: 8FBF001C lw          ra,0x1C(sp)
  004070DC: 03E00008 jr          ra
  004070E0: 27BD0060 addiu       sp,sp,0x60
_getmbcp:
  004070E4: 3C020041 lui         v0,0x41
  004070E8: 03E00008 jr          ra
  004070EC: 8C42E5EC lw          v0,0xE5EC(v0)
__initmbctable:
  004070F0: 27BDFFE8 addiu       sp,sp,0xFFE8
  004070F4: AFBF0014 sw          ra,0x14(sp)
  004070F8: 0C101B4E jal         _setmbcp
  004070FC: 2404FFFD addiu       a0,zero,0xFFFD
  00407100: 8FBF0014 lw          ra,0x14(sp)
  00407104: 03E00008 jr          ra
  00407108: 27BD0018 addiu       sp,sp,0x18
setSBCS:
  0040710C: 3C010041 lui         at,0x41
  00407110: 3C030041 lui         v1,0x41
  00407114: 3C020041 lui         v0,0x41
  00407118: 2442E5E9 addiu       v0,v0,0xE5E9
  0040711C: 2463E4E9 addiu       v1,v1,0xE4E9
  00407120: A020E4E8 sb          zero,0xE4E8(at)
  00407124: 24630004 addiu       v1,v1,4
  00407128: A060FFFC sb          zero,0xFFFC(v1)
  0040712C: A060FFFD sb          zero,0xFFFD(v1)
  00407130: A060FFFE sb          zero,0xFFFE(v1)
  00407134: 1462FFFB bne         v0,v1,00407124
  00407138: A060FFFF sb          zero,0xFFFF(v1)
  0040713C: 3C010041 lui         at,0x41
  00407140: AC20E5EC sw          zero,0xE5EC(at)
  00407144: 3C010041 lui         at,0x41
  00407148: AC20E5F0 sw          zero,0xE5F0(at)
  0040714C: 3C010041 lui         at,0x41
  00407150: A420E5F4 sh          zero,0xE5F4(at)
  00407154: 24020002 addiu       v0,zero,2
  00407158: 3C0F0041 lui         t7,0x41
  0040715C: 3C010041 lui         at,0x41
  00407160: 25EFE5F4 addiu       t7,t7,0xE5F4
  00407164: 00027040 sll         t6,v0,1
  00407168: A420E5F6 sh          zero,0xE5F6(at)
  0040716C: 01CF1821 addu        v1,t6,t7
  00407170: A4600000 sh          zero,0(v1)
  00407174: A4600002 sh          zero,2(v1)
  00407178: A4600004 sh          zero,4(v1)
  0040717C: 03E00008 jr          ra
  00407180: A4600006 sh          zero,6(v1)
CPtoLCID:
  00407184: 240103A4 addiu       at,zero,0x3A4
  00407188: 10810009 beq         at,a0,004071B0
  0040718C: 240103A8 addiu       at,zero,0x3A8
  00407190: 10810009 beq         at,a0,004071B8
  00407194: 240103B5 addiu       at,zero,0x3B5
  00407198: 10810009 beq         at,a0,004071C0
  0040719C: 240103B6 addiu       at,zero,0x3B6
  004071A0: 5081000A beql        at,a0,004071CC
  004071A4: 24020404 addiu       v0,zero,0x404
  004071A8: 03E00008 jr          ra
  004071AC: 00001025 or          v0,zero,zero
  004071B0: 03E00008 jr          ra
  004071B4: 24020411 addiu       v0,zero,0x411
  004071B8: 03E00008 jr          ra
  004071BC: 24020804 addiu       v0,zero,0x804
  004071C0: 03E00008 jr          ra
  004071C4: 24020412 addiu       v0,zero,0x412
  004071C8: 24020404 addiu       v0,zero,0x404
  004071CC: 03E00008 jr          ra
  004071D0: 00000000 nop
getSystemCP:
  004071D4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004071D8: AFBF0014 sw          ra,0x14(sp)
  004071DC: 3C010041 lui         at,0x41
  004071E0: AC20E600 sw          zero,0xE600(at)
  004071E4: 2401FFFE addiu       at,zero,0xFFFE
  004071E8: 14810008 bne         at,a0,0040720C
  004071EC: 3C0F0041 lui         t7,0x41
  004071F0: 8DEF1220 lw          t7,0x1220(t7)
  004071F4: 240E0001 addiu       t6,zero,1
  004071F8: 3C010041 lui         at,0x41
  004071FC: 01E0F809 jalr        ra,t7
  00407200: AC2EE600 sw          t6,0xE600(at)
  00407204: 10000015 b           0040725C
  00407208: 8FBF0014 lw          ra,0x14(sp)
  0040720C: 2401FFFD addiu       at,zero,0xFFFD
  00407210: 14810008 bne         at,a0,00407234
  00407214: 3C190041 lui         t9,0x41
  00407218: 8F391214 lw          t9,0x1214(t9)
  0040721C: 24180001 addiu       t8,zero,1
  00407220: 3C010041 lui         at,0x41
  00407224: 0320F809 jalr        ra,t9
  00407228: AC38E600 sw          t8,0xE600(at)
  0040722C: 1000000B b           0040725C
  00407230: 8FBF0014 lw          ra,0x14(sp)
  00407234: 2401FFFC addiu       at,zero,0xFFFC
  00407238: 14810007 bne         at,a0,00407258
  0040723C: 00801025 or          v0,a0,zero
  00407240: 24080001 addiu       t0,zero,1
  00407244: 3C010041 lui         at,0x41
  00407248: 3C020041 lui         v0,0x41
  0040724C: AC28E600 sw          t0,0xE600(at)
  00407250: 10000001 b           00407258
  00407254: 8C42E7CC lw          v0,0xE7CC(v0)
  00407258: 8FBF0014 lw          ra,0x14(sp)
  0040725C: 03E00008 jr          ra
  00407260: 27BD0018 addiu       sp,sp,0x18
__crtGetEnvironmentStringsW:
  00407264: 27BDFFC8 addiu       sp,sp,0xFFC8
  00407268: 3C020041 lui         v0,0x41
  0040726C: 8C42E6F8 lw          v0,0xE6F8(v0)
  00407270: AFBF0034 sw          ra,0x34(sp)
  00407274: AFB40030 sw          s4,0x30(sp)
  00407278: AFB3002C sw          s3,0x2C(sp)
  0040727C: AFB20028 sw          s2,0x28(sp)
  00407280: AFB10024 sw          s1,0x24(sp)
  00407284: AFB00020 sw          s0,0x20(sp)
  00407288: 0000A025 or          s4,zero,zero
  0040728C: 14400011 bne         zero,v0,004072D4
  00407290: 00009025 or          s2,zero,zero
  00407294: 3C0E0041 lui         t6,0x41
  00407298: 8DCE1224 lw          t6,0x1224(t6)
  0040729C: 01C0F809 jalr        ra,t6
  004072A0: 00000000 nop
  004072A4: 0040A025 or          s4,v0,zero
  004072A8: 5440000A bnel        zero,v0,004072D4
  004072AC: 24020001 addiu       v0,zero,1
  004072B0: 3C0F0041 lui         t7,0x41
  004072B4: 8DEF122C lw          t7,0x122C(t7)
  004072B8: 01E0F809 jalr        ra,t7
  004072BC: 00000000 nop
  004072C0: 0040A025 or          s4,v0,zero
  004072C4: 54400003 bnel        zero,v0,004072D4
  004072C8: 24020002 addiu       v0,zero,2
  004072CC: 10000092 b           00407518
  004072D0: 00001025 or          v0,zero,zero
  004072D4: 24010001 addiu       at,zero,1
  004072D8: 1441002E bne         at,v0,00407394
  004072DC: 3C010041 lui         at,0x41
  004072E0: 16800008 bne         zero,s4,00407304
  004072E4: AC22E6F8 sw          v0,0xE6F8(at)
  004072E8: 3C180041 lui         t8,0x41
  004072EC: 8F181224 lw          t8,0x1224(t8)
  004072F0: 0300F809 jalr        ra,t8
  004072F4: 00000000 nop
  004072F8: 0040A025 or          s4,v0,zero
  004072FC: 50400086 beql        zero,v0,00407518
  00407300: 00001025 or          v0,zero,zero
  00407304: 96990000 lhu         t9,0(s4)
  00407308: 02808825 or          s1,s4,zero
  0040730C: 5320000A beql        zero,t9,00407338
  00407310: 02348023 subu        s0,s1,s4
  00407314: 96220002 lhu         v0,2(s1)
  00407318: 26310002 addiu       s1,s1,2
  0040731C: 14400003 bne         zero,v0,0040732C
  00407320: 00000000 nop
  00407324: 26310002 addiu       s1,s1,2
  00407328: 96220000 lhu         v0,0(s1)
  0040732C: 5440FFFA bnel        zero,v0,00407318
  00407330: 96220002 lhu         v0,2(s1)
  00407334: 02348023 subu        s0,s1,s4
  00407338: 26100002 addiu       s0,s0,2
  0040733C: 0C1020C7 jal         malloc
  00407340: 02002025 or          a0,s0,zero
  00407344: 14400008 bne         zero,v0,00407368
  00407348: 00409825 or          s3,v0,zero
  0040734C: 3C080041 lui         t0,0x41
  00407350: 8D08127C lw          t0,0x127C(t0)
  00407354: 02802025 or          a0,s4,zero
  00407358: 0100F809 jalr        ra,t0
  0040735C: 00000000 nop
  00407360: 1000006D b           00407518
  00407364: 00001025 or          v0,zero,zero
  00407368: 02602025 or          a0,s3,zero
  0040736C: 02802825 or          a1,s4,zero
  00407370: 0C1021D5 jal         memmove
  00407374: 02003025 or          a2,s0,zero
  00407378: 3C090041 lui         t1,0x41
  0040737C: 8D29127C lw          t1,0x127C(t1)
  00407380: 02802025 or          a0,s4,zero
  00407384: 0120F809 jalr        ra,t1
  00407388: 00000000 nop
  0040738C: 10000062 b           00407518
  00407390: 02601025 or          v0,s3,zero
  00407394: 3C010041 lui         at,0x41
  00407398: AC22E6F8 sw          v0,0xE6F8(at)
  0040739C: 24010002 addiu       at,zero,2
  004073A0: 5441005E bnel        at,v0,0040751C
  004073A4: 8FB00020 lw          s0,0x20(sp)
  004073A8: 16800007 bne         zero,s4,004073C8
  004073AC: 3C0A0041 lui         t2,0x41
  004073B0: 8D4A122C lw          t2,0x122C(t2)
  004073B4: 0140F809 jalr        ra,t2
  004073B8: 00000000 nop
  004073BC: 0040A025 or          s4,v0,zero
  004073C0: 50400055 beql        zero,v0,00407518
  004073C4: 00001025 or          v0,zero,zero
  004073C8: 828B0000 lb          t3,0(s4)
  004073CC: 02808025 or          s0,s4,zero
  004073D0: 51600017 beql        zero,t3,00407430
  004073D4: 26520001 addiu       s2,s2,1
  004073D8: 3C0C0041 lui         t4,0x41
  004073DC: 8D8C1294 lw          t4,0x1294(t4)
  004073E0: 3C040041 lui         a0,0x41
  004073E4: 8C84E7CC lw          a0,0xE7CC(a0)
  004073E8: 24050001 addiu       a1,zero,1
  004073EC: 02003025 or          a2,s0,zero
  004073F0: 2407FFFF addiu       a3,zero,0xFFFF
  004073F4: AFA00010 sw          zero,0x10(sp)
  004073F8: 0180F809 jalr        ra,t4
  004073FC: AFA00014 sw          zero,0x14(sp)
  00407400: 00401825 or          v1,v0,zero
  00407404: 50400044 beql        zero,v0,00407518
  00407408: 00001025 or          v0,zero,zero
  0040740C: 02439021 addu        s2,s2,v1
  00407410: 0C102360 jal         strlen
  00407414: 02002025 or          a0,s0,zero
  00407418: 02028021 addu        s0,s0,v0
  0040741C: 820D0001 lb          t5,1(s0)
  00407420: 26100001 addiu       s0,s0,1
  00407424: 15A0FFEC bne         zero,t5,004073D8
  00407428: 00000000 nop
  0040742C: 26520001 addiu       s2,s2,1
  00407430: 0C1020C7 jal         malloc
  00407434: 00122040 sll         a0,s2,1
  00407438: 14400008 bne         zero,v0,0040745C
  0040743C: 00409825 or          s3,v0,zero
  00407440: 3C0E0041 lui         t6,0x41
  00407444: 8DCE1290 lw          t6,0x1290(t6)
  00407448: 02802025 or          a0,s4,zero
  0040744C: 01C0F809 jalr        ra,t6
  00407450: 00000000 nop
  00407454: 10000030 b           00407518
  00407458: 00001025 or          v0,zero,zero
  0040745C: 828F0000 lb          t7,0(s4)
  00407460: 02808025 or          s0,s4,zero
  00407464: 00408825 or          s1,v0,zero
  00407468: 51E00025 beql        zero,t7,00407500
  0040746C: A6200000 sh          zero,0(s1)
  00407470: 3C090041 lui         t1,0x41
  00407474: 8D291294 lw          t1,0x1294(t1)
  00407478: 0233C023 subu        t8,s1,s3
  0040747C: 0018C843 sra         t9,t8,1
  00407480: 02594023 subu        t0,s2,t9
  00407484: 3C040041 lui         a0,0x41
  00407488: 8C84E7CC lw          a0,0xE7CC(a0)
  0040748C: AFA80014 sw          t0,0x14(sp)
  00407490: 24050001 addiu       a1,zero,1
  00407494: 02003025 or          a2,s0,zero
  00407498: 2407FFFF addiu       a3,zero,0xFFFF
  0040749C: 0120F809 jalr        ra,t1
  004074A0: AFB10010 sw          s1,0x10(sp)
  004074A4: 1440000A bne         zero,v0,004074D0
  004074A8: 00000000 nop
  004074AC: 0C1020F9 jal         free
  004074B0: 02602025 or          a0,s3,zero
  004074B4: 3C0A0041 lui         t2,0x41
  004074B8: 8D4A1290 lw          t2,0x1290(t2)
  004074BC: 02802025 or          a0,s4,zero
  004074C0: 0140F809 jalr        ra,t2
  004074C4: 00000000 nop
  004074C8: 10000013 b           00407518
  004074CC: 00001025 or          v0,zero,zero
  004074D0: 0C102360 jal         strlen
  004074D4: 02002025 or          a0,s0,zero
  004074D8: 02028021 addu        s0,s0,v0
  004074DC: 26100001 addiu       s0,s0,1
  004074E0: 0C102367 jal         wcslen
  004074E4: 02202025 or          a0,s1,zero
  004074E8: 820C0000 lb          t4,0(s0)
  004074EC: 00025840 sll         t3,v0,1
  004074F0: 022B8821 addu        s1,s1,t3
  004074F4: 1580FFDE bne         zero,t4,00407470
  004074F8: 26310002 addiu       s1,s1,2
  004074FC: A6200000 sh          zero,0(s1)
  00407500: 3C0D0041 lui         t5,0x41
  00407504: 8DAD1290 lw          t5,0x1290(t5)
  00407508: 02802025 or          a0,s4,zero
  0040750C: 01A0F809 jalr        ra,t5
  00407510: 00000000 nop
  00407514: 02601025 or          v0,s3,zero
  00407518: 8FB00020 lw          s0,0x20(sp)
  0040751C: 8FB10024 lw          s1,0x24(sp)
  00407520: 8FB20028 lw          s2,0x28(sp)
  00407524: 8FB3002C lw          s3,0x2C(sp)
  00407528: 8FB40030 lw          s4,0x30(sp)
  0040752C: 8FBF0034 lw          ra,0x34(sp)
  00407530: 03E00008 jr          ra
  00407534: 27BD0038 addiu       sp,sp,0x38
__crtGetEnvironmentStringsA:
  00407538: 27BDFFB8 addiu       sp,sp,0xFFB8
  0040753C: 3C020041 lui         v0,0x41
  00407540: 8C42E6FC lw          v0,0xE6FC(v0)
  00407544: AFBF0024 sw          ra,0x24(sp)
  00407548: 14400015 bne         zero,v0,004075A0
  0040754C: 3C0E0041 lui         t6,0x41
  00407550: 8DCE1224 lw          t6,0x1224(t6)
  00407554: 01C0F809 jalr        ra,t6
  00407558: 00000000 nop
  0040755C: 00403025 or          a2,v0,zero
  00407560: 5440000E bnel        zero,v0,0040759C
  00407564: 24020001 addiu       v0,zero,1
  00407568: 3C0F0041 lui         t7,0x41
  0040756C: 8DEF122C lw          t7,0x122C(t7)
  00407570: AFA60044 sw          a2,0x44(sp)
  00407574: 01E0F809 jalr        ra,t7
  00407578: 00000000 nop
  0040757C: 8FA60044 lw          a2,0x44(sp)
  00407580: 10400004 beq         zero,v0,00407594
  00407584: 00402825 or          a1,v0,zero
  00407588: 24020002 addiu       v0,zero,2
  0040758C: 10000003 b           0040759C
  00407590: AFA50040 sw          a1,0x40(sp)
  00407594: 1000008B b           004077C4
  00407598: 00001025 or          v0,zero,zero
  0040759C: AFA60044 sw          a2,0x44(sp)
  004075A0: 24010001 addiu       at,zero,1
  004075A4: 8FA50040 lw          a1,0x40(sp)
  004075A8: 14410051 bne         at,v0,004076F0
  004075AC: 8FA60044 lw          a2,0x44(sp)
  004075B0: 3C010041 lui         at,0x41
  004075B4: 14C00008 bne         zero,a2,004075D8
  004075B8: AC22E6FC sw          v0,0xE6FC(at)
  004075BC: 3C180041 lui         t8,0x41
  004075C0: 8F181224 lw          t8,0x1224(t8)
  004075C4: 0300F809 jalr        ra,t8
  004075C8: 00000000 nop
  004075CC: 00403025 or          a2,v0,zero
  004075D0: 5040007C beql        zero,v0,004077C4
  004075D4: 00001025 or          v0,zero,zero
  004075D8: 94D90000 lhu         t9,0(a2)
  004075DC: 00C01025 or          v0,a2,zero
  004075E0: 00002025 or          a0,zero,zero
  004075E4: 13200009 beq         zero,t9,0040760C
  004075E8: 00002825 or          a1,zero,zero
  004075EC: 94430002 lhu         v1,2(v0)
  004075F0: 24420002 addiu       v0,v0,2
  004075F4: 14600003 bne         zero,v1,00407604
  004075F8: 00000000 nop
  004075FC: 24420002 addiu       v0,v0,2
  00407600: 94430000 lhu         v1,0(v0)
  00407604: 5460FFFA bnel        zero,v1,004075F0
  00407608: 94430002 lhu         v1,2(v0)
  0040760C: 3C080041 lui         t0,0x41
  00407610: 8D081228 lw          t0,0x1228(t0)
  00407614: 00463823 subu        a3,v0,a2
  00407618: 00073843 sra         a3,a3,1
  0040761C: 24E70001 addiu       a3,a3,1
  00407620: AFA70028 sw          a3,0x28(sp)
  00407624: AFA00010 sw          zero,0x10(sp)
  00407628: AFA00014 sw          zero,0x14(sp)
  0040762C: AFA00018 sw          zero,0x18(sp)
  00407630: AFA0001C sw          zero,0x1C(sp)
  00407634: 0100F809 jalr        ra,t0
  00407638: AFA60044 sw          a2,0x44(sp)
  0040763C: 8FA60044 lw          a2,0x44(sp)
  00407640: 10400007 beq         zero,v0,00407660
  00407644: 00402025 or          a0,v0,zero
  00407648: AFA20034 sw          v0,0x34(sp)
  0040764C: 0C1020C7 jal         malloc
  00407650: AFA60044 sw          a2,0x44(sp)
  00407654: 8FA60044 lw          a2,0x44(sp)
  00407658: 14400008 bne         zero,v0,0040767C
  0040765C: 00401825 or          v1,v0,zero
  00407660: 3C090041 lui         t1,0x41
  00407664: 8D29127C lw          t1,0x127C(t1)
  00407668: 00C02025 or          a0,a2,zero
  0040766C: 0120F809 jalr        ra,t1
  00407670: 00000000 nop
  00407674: 10000053 b           004077C4
  00407678: 00001025 or          v0,zero,zero
  0040767C: 3C0B0041 lui         t3,0x41
  00407680: 8D6B1228 lw          t3,0x1228(t3)
  00407684: 8FAA0034 lw          t2,0x34(sp)
  00407688: 00002025 or          a0,zero,zero
  0040768C: 00002825 or          a1,zero,zero
  00407690: 8FA70028 lw          a3,0x28(sp)
  00407694: AFA30010 sw          v1,0x10(sp)
  00407698: AFA00018 sw          zero,0x18(sp)
  0040769C: AFA0001C sw          zero,0x1C(sp)
  004076A0: AFA30040 sw          v1,0x40(sp)
  004076A4: AFA60044 sw          a2,0x44(sp)
  004076A8: 0160F809 jalr        ra,t3
  004076AC: AFAA0014 sw          t2,0x14(sp)
  004076B0: 8FA50040 lw          a1,0x40(sp)
  004076B4: 14400006 bne         zero,v0,004076D0
  004076B8: 8FA60044 lw          a2,0x44(sp)
  004076BC: 00A02025 or          a0,a1,zero
  004076C0: 0C1020F9 jal         free
  004076C4: AFA60044 sw          a2,0x44(sp)
  004076C8: 8FA60044 lw          a2,0x44(sp)
  004076CC: 00002825 or          a1,zero,zero
  004076D0: 3C0C0041 lui         t4,0x41
  004076D4: 8D8C127C lw          t4,0x127C(t4)
  004076D8: 00C02025 or          a0,a2,zero
  004076DC: AFA50040 sw          a1,0x40(sp)
  004076E0: 0180F809 jalr        ra,t4
  004076E4: 00000000 nop
  004076E8: 10000036 b           004077C4
  004076EC: 8FA20040 lw          v0,0x40(sp)
  004076F0: 3C010041 lui         at,0x41
  004076F4: AC22E6FC sw          v0,0xE6FC(at)
  004076F8: 24010002 addiu       at,zero,2
  004076FC: 54410031 bnel        at,v0,004077C4
  00407700: 00001025 or          v0,zero,zero
  00407704: 14A00007 bne         zero,a1,00407724
  00407708: 3C0D0041 lui         t5,0x41
  0040770C: 8DAD122C lw          t5,0x122C(t5)
  00407710: 01A0F809 jalr        ra,t5
  00407714: 00000000 nop
  00407718: 00402825 or          a1,v0,zero
  0040771C: 50400029 beql        zero,v0,004077C4
  00407720: 00001025 or          v0,zero,zero
  00407724: 80AE0000 lb          t6,0(a1)
  00407728: 00A03825 or          a3,a1,zero
  0040772C: 51C0000A beql        zero,t6,00407758
  00407730: 00E51023 subu        v0,a3,a1
  00407734: 80E20001 lb          v0,1(a3)
  00407738: 24E70001 addiu       a3,a3,1
  0040773C: 14400003 bne         zero,v0,0040774C
  00407740: 00000000 nop
  00407744: 24E70001 addiu       a3,a3,1
  00407748: 80E20000 lb          v0,0(a3)
  0040774C: 5440FFFA bnel        zero,v0,00407738
  00407750: 80E20001 lb          v0,1(a3)
  00407754: 00E51023 subu        v0,a3,a1
  00407758: 24440001 addiu       a0,v0,1
  0040775C: AFA40034 sw          a0,0x34(sp)
  00407760: 0C1020C7 jal         malloc
  00407764: AFA50040 sw          a1,0x40(sp)
  00407768: 8FA50040 lw          a1,0x40(sp)
  0040776C: 14400008 bne         zero,v0,00407790
  00407770: 00403825 or          a3,v0,zero
  00407774: 3C0F0041 lui         t7,0x41
  00407778: 8DEF1290 lw          t7,0x1290(t7)
  0040777C: 00A02025 or          a0,a1,zero
  00407780: 01E0F809 jalr        ra,t7
  00407784: 00000000 nop
  00407788: 1000000E b           004077C4
  0040778C: 00001025 or          v0,zero,zero
  00407790: 00E02025 or          a0,a3,zero
  00407794: 8FA60034 lw          a2,0x34(sp)
  00407798: AFA50040 sw          a1,0x40(sp)
  0040779C: 0C1021D5 jal         memmove
  004077A0: AFA70030 sw          a3,0x30(sp)
  004077A4: 3C180041 lui         t8,0x41
  004077A8: 8F181290 lw          t8,0x1290(t8)
  004077AC: 8FA40040 lw          a0,0x40(sp)
  004077B0: 0300F809 jalr        ra,t8
  004077B4: 00000000 nop
  004077B8: 10000002 b           004077C4
  004077BC: 8FA20030 lw          v0,0x30(sp)
  004077C0: 00001025 or          v0,zero,zero
  004077C4: 8FBF0024 lw          ra,0x24(sp)
  004077C8: 03E00008 jr          ra
  004077CC: 27BD0048 addiu       sp,sp,0x48
_setargv:
  004077D0: 27BDFFC8 addiu       sp,sp,0xFFC8
  004077D4: AFB0001C sw          s0,0x1C(sp)
  004077D8: 3C100041 lui         s0,0x41
  004077DC: 2610ED18 addiu       s0,s0,0xED18
  004077E0: AFBF0024 sw          ra,0x24(sp)
  004077E4: AFB10020 sw          s1,0x20(sp)
  004077E8: 3C0E0041 lui         t6,0x41
  004077EC: 8DCE1298 lw          t6,0x1298(t6)
  004077F0: 00002025 or          a0,zero,zero
  004077F4: 02002825 or          a1,s0,zero
  004077F8: 01C0F809 jalr        ra,t6
  004077FC: 24060104 addiu       a2,zero,0x104
  00407800: 3C0F0041 lui         t7,0x41
  00407804: 8DEFF5CC lw          t7,0xF5CC(t7)
  00407808: 3C010041 lui         at,0x41
  0040780C: AC30E438 sw          s0,0xE438(at)
  00407810: 81F80000 lb          t8,0(t7)
  00407814: 00002825 or          a1,zero,zero
  00407818: 00003025 or          a2,zero,zero
  0040781C: 53000003 beql        zero,t8,0040782C
  00407820: 02008825 or          s1,s0,zero
  00407824: 3C110041 lui         s1,0x41
  00407828: 8E31F5CC lw          s1,0xF5CC(s1)
  0040782C: 27B90030 addiu       t9,sp,0x30
  00407830: AFB90010 sw          t9,0x10(sp)
  00407834: 02202025 or          a0,s1,zero
  00407838: 0C101E2D jal         parse_cmdline
  0040783C: 27A7002C addiu       a3,sp,0x2C
  00407840: 8FA8002C lw          t0,0x2C(sp)
  00407844: 8FAA0030 lw          t2,0x30(sp)
  00407848: 00084880 sll         t1,t0,2
  0040784C: 0C1020C7 jal         malloc
  00407850: 012A2021 addu        a0,t1,t2
  00407854: 14400003 bne         zero,v0,00407864
  00407858: 00408025 or          s0,v0,zero
  0040785C: 0C101888 jal         _amsg_exit
  00407860: 24040008 addiu       a0,zero,8
  00407864: 8FAB002C lw          t3,0x2C(sp)
  00407868: 27AD0030 addiu       t5,sp,0x30
  0040786C: AFAD0010 sw          t5,0x10(sp)
  00407870: 000B6080 sll         t4,t3,2
  00407874: 020C3021 addu        a2,s0,t4
  00407878: 02202025 or          a0,s1,zero
  0040787C: 02002825 or          a1,s0,zero
  00407880: 0C101E2D jal         parse_cmdline
  00407884: 27A7002C addiu       a3,sp,0x2C
  00407888: 8FAE002C lw          t6,0x2C(sp)
  0040788C: 3C010041 lui         at,0x41
  00407890: 8FB10020 lw          s1,0x20(sp)
  00407894: 25CFFFFF addiu       t7,t6,0xFFFF
  00407898: AC2FE41C sw          t7,0xE41C(at)
  0040789C: 3C010041 lui         at,0x41
  004078A0: AC30E420 sw          s0,0xE420(at)
  004078A4: 8FB0001C lw          s0,0x1C(sp)
  004078A8: 8FBF0024 lw          ra,0x24(sp)
  004078AC: 03E00008 jr          ra
  004078B0: 27BD0038 addiu       sp,sp,0x38
parse_cmdline:
  004078B4: 27BDFFF0 addiu       sp,sp,0xFFF0
  004078B8: AFB00008 sw          s0,8(sp)
  004078BC: 8FB00020 lw          s0,0x20(sp)
  004078C0: AFB1000C sw          s1,0xC(sp)
  004078C4: AE000000 sw          zero,0(s0)
  004078C8: 240E0001 addiu       t6,zero,1
  004078CC: ACEE0000 sw          t6,0(a3)
  004078D0: 10A00003 beq         zero,a1,004078E0
  004078D4: 00801025 or          v0,a0,zero
  004078D8: ACA60000 sw          a2,0(a1)
  004078DC: 24A50004 addiu       a1,a1,4
  004078E0: 808F0000 lb          t7,0(a0)
  004078E4: 240A0022 addiu       t2,zero,0x22
  004078E8: 240D0009 addiu       t5,zero,9
  004078EC: 154F0032 bne         t7,t2,004079B8
  004078F0: 00000000 nop
  004078F4: 24820001 addiu       v0,a0,1
  004078F8: 80430000 lb          v1,0(v0)
  004078FC: 51430020 beql        v1,t2,00407980
  00407900: 8E0E0000 lw          t6,0(s0)
  00407904: 1060001D beq         zero,v1,0040797C
  00407908: 3C0B0041 lui         t3,0x41
  0040790C: 256BE4E8 addiu       t3,t3,0xE4E8
  00407910: 307800FF andi        t8,v1,0xFF
  00407914: 0178C821 addu        t9,t3,t8
  00407918: 932E0001 lbu         t6,1(t9)
  0040791C: 31CF0004 andi        t7,t6,4
  00407920: 51E0000A beql        zero,t7,0040794C
  00407924: 8E0F0000 lw          t7,0(s0)
  00407928: 8E180000 lw          t8,0(s0)
  0040792C: 27190001 addiu       t9,t8,1
  00407930: 10C00005 beq         zero,a2,00407948
  00407934: AE190000 sw          t9,0(s0)
  00407938: 804E0000 lb          t6,0(v0)
  0040793C: 24C60001 addiu       a2,a2,1
  00407940: 24420001 addiu       v0,v0,1
  00407944: A0CEFFFF sb          t6,0xFFFF(a2)
  00407948: 8E0F0000 lw          t7,0(s0)
  0040794C: 25F80001 addiu       t8,t7,1
  00407950: 10C00004 beq         zero,a2,00407964
  00407954: AE180000 sw          t8,0(s0)
  00407958: 80590000 lb          t9,0(v0)
  0040795C: 24C60001 addiu       a2,a2,1
  00407960: A0D9FFFF sb          t9,0xFFFF(a2)
  00407964: 80430001 lb          v1,1(v0)
  00407968: 24420001 addiu       v0,v0,1
  0040796C: 51430004 beql        v1,t2,00407980
  00407970: 8E0E0000 lw          t6,0(s0)
  00407974: 5460FFE7 bnel        zero,v1,00407914
  00407978: 307800FF andi        t8,v1,0xFF
  0040797C: 8E0E0000 lw          t6,0(s0)
  00407980: 3C0B0041 lui         t3,0x41
  00407984: 256BE4E8 addiu       t3,t3,0xE4E8
  00407988: 25CF0001 addiu       t7,t6,1
  0040798C: 10C00003 beq         zero,a2,0040799C
  00407990: AE0F0000 sw          t7,0(s0)
  00407994: A0C00000 sb          zero,0(a2)
  00407998: 24C60001 addiu       a2,a2,1
  0040799C: 80430000 lb          v1,0(v0)
  004079A0: 5543002B bnel        v1,t2,00407A50
  004079A4: 240C0020 addiu       t4,zero,0x20
  004079A8: 24420001 addiu       v0,v0,1
  004079AC: 80430000 lb          v1,0(v0)
  004079B0: 10000027 b           00407A50
  004079B4: 240C0020 addiu       t4,zero,0x20
  004079B8: 3C0B0041 lui         t3,0x41
  004079BC: 256BE4E8 addiu       t3,t3,0xE4E8
  004079C0: 240D0009 addiu       t5,zero,9
  004079C4: 240C0020 addiu       t4,zero,0x20
  004079C8: 8E180000 lw          t8,0(s0)
  004079CC: 27190001 addiu       t9,t8,1
  004079D0: 10C00004 beq         zero,a2,004079E4
  004079D4: AE190000 sw          t9,0(s0)
  004079D8: 804E0000 lb          t6,0(v0)
  004079DC: 24C60001 addiu       a2,a2,1
  004079E0: A0CEFFFF sb          t6,0xFFFF(a2)
  004079E4: 90440000 lbu         a0,0(v0)
  004079E8: 24420001 addiu       v0,v0,1
  004079EC: 01647821 addu        t7,t3,a0
  004079F0: 91F80001 lbu         t8,1(t7)
  004079F4: 33190004 andi        t9,t8,4
  004079F8: 13200009 beq         zero,t9,00407A20
  004079FC: 00000000 nop
  00407A00: 8E0E0000 lw          t6,0(s0)
  00407A04: 25CF0001 addiu       t7,t6,1
  00407A08: 10C00004 beq         zero,a2,00407A1C
  00407A0C: AE0F0000 sw          t7,0(s0)
  00407A10: 80580000 lb          t8,0(v0)
  00407A14: 24C60001 addiu       a2,a2,1
  00407A18: A0D8FFFF sb          t8,0xFFFF(a2)
  00407A1C: 24420001 addiu       v0,v0,1
  00407A20: 11840005 beq         a0,t4,00407A38
  00407A24: 00000000 nop
  00407A28: 10800003 beq         zero,a0,00407A38
  00407A2C: 00000000 nop
  00407A30: 55A4FFE6 bnel        a0,t5,004079CC
  00407A34: 8E180000 lw          t8,0(s0)
  00407A38: 50800004 beql        zero,a0,00407A4C
  00407A3C: 2442FFFF addiu       v0,v0,0xFFFF
  00407A40: 50C00003 beql        zero,a2,00407A50
  00407A44: 80430000 lb          v1,0(v0)
  00407A48: A0C0FFFF sb          zero,0xFFFF(a2)
  00407A4C: 80430000 lb          v1,0(v0)
  00407A50: 00002025 or          a0,zero,zero
  00407A54: 2411005C addiu       s1,zero,0x5C
  00407A58: 1060000B beq         zero,v1,00407A88
  00407A5C: 00000000 nop
  00407A60: 51830004 beql        v1,t4,00407A74
  00407A64: 80430001 lb          v1,1(v0)
  00407A68: 15A30007 bne         v1,t5,00407A88
  00407A6C: 00000000 nop
  00407A70: 80430001 lb          v1,1(v0)
  00407A74: 24420001 addiu       v0,v0,1
  00407A78: 5183FFFE beql        v1,t4,00407A74
  00407A7C: 80430001 lb          v1,1(v0)
  00407A80: 51A3FFFC beql        v1,t5,00407A74
  00407A84: 80430001 lb          v1,1(v0)
  00407A88: 10600060 beq         zero,v1,00407C0C
  00407A8C: 00000000 nop
  00407A90: 10A00003 beq         zero,a1,00407AA0
  00407A94: 24080001 addiu       t0,zero,1
  00407A98: ACA60000 sw          a2,0(a1)
  00407A9C: 24A50004 addiu       a1,a1,4
  00407AA0: 8CF90000 lw          t9,0(a3)
  00407AA4: 272E0001 addiu       t6,t9,1
  00407AA8: ACEE0000 sw          t6,0(a3)
  00407AAC: 80430000 lb          v1,0(v0)
  00407AB0: 00004825 or          t1,zero,zero
  00407AB4: 16230006 bne         v1,s1,00407AD0
  00407AB8: 00000000 nop
  00407ABC: 80430001 lb          v1,1(v0)
  00407AC0: 24420001 addiu       v0,v0,1
  00407AC4: 25290001 addiu       t1,t1,1
  00407AC8: 5223FFFD beql        v1,s1,00407AC0
  00407ACC: 80430001 lb          v1,1(v0)
  00407AD0: 1543000C bne         v1,t2,00407B04
  00407AD4: 312F0001 andi        t7,t1,1
  00407AD8: 15E0000A bne         zero,t7,00407B04
  00407ADC: 00094842 srl         t1,t1,1
  00407AE0: 50800007 beql        zero,a0,00407B00
  00407AE4: 00004025 or          t0,zero,zero
  00407AE8: 80580001 lb          t8,1(v0)
  00407AEC: 51580004 beql        t8,t2,00407B00
  00407AF0: 24420001 addiu       v0,v0,1
  00407AF4: 10000002 b           00407B00
  00407AF8: 00004025 or          t0,zero,zero
  00407AFC: 00004025 or          t0,zero,zero
  00407B00: 2C840001 sltiu       a0,a0,1
  00407B04: 01201825 or          v1,t1,zero
  00407B08: 1120000B beq         zero,t1,00407B38
  00407B0C: 2529FFFF addiu       t1,t1,0xFFFF
  00407B10: 50C00004 beql        zero,a2,00407B24
  00407B14: 8E190000 lw          t9,0(s0)
  00407B18: A0D10000 sb          s1,0(a2)
  00407B1C: 24C60001 addiu       a2,a2,1
  00407B20: 8E190000 lw          t9,0(s0)
  00407B24: 01201825 or          v1,t1,zero
  00407B28: 272E0001 addiu       t6,t9,1
  00407B2C: AE0E0000 sw          t6,0(s0)
  00407B30: 1520FFF7 bne         zero,t1,00407B10
  00407B34: 2529FFFF addiu       t1,t1,0xFFFF
  00407B38: 80430000 lb          v1,0(v0)
  00407B3C: 0008482B sltu        t1,zero,t0
  00407B40: 10600029 beq         zero,v1,00407BE8
  00407B44: 00000000 nop
  00407B48: 14800005 bne         zero,a0,00407B60
  00407B4C: 00000000 nop
  00407B50: 11830025 beq         v1,t4,00407BE8
  00407B54: 00000000 nop
  00407B58: 11A30023 beq         v1,t5,00407BE8
  00407B5C: 00000000 nop
  00407B60: 1120001F beq         zero,t1,00407BE0
  00407B64: 24080001 addiu       t0,zero,1
  00407B68: 10C00011 beq         zero,a2,00407BB0
  00407B6C: 307900FF andi        t9,v1,0xFF
  00407B70: 306F00FF andi        t7,v1,0xFF
  00407B74: 016FC021 addu        t8,t3,t7
  00407B78: 93190001 lbu         t9,1(t8)
  00407B7C: 332E0004 andi        t6,t9,4
  00407B80: 51C00009 beql        zero,t6,00407BA8
  00407B84: A0C30000 sb          v1,0(a2)
  00407B88: A0C30000 sb          v1,0(a2)
  00407B8C: 8E0F0000 lw          t7,0(s0)
  00407B90: 24C60001 addiu       a2,a2,1
  00407B94: 24420001 addiu       v0,v0,1
  00407B98: 25F80001 addiu       t8,t7,1
  00407B9C: AE180000 sw          t8,0(s0)
  00407BA0: 80430000 lb          v1,0(v0)
  00407BA4: A0C30000 sb          v1,0(a2)
  00407BA8: 1000000A b           00407BD4
  00407BAC: 24C60001 addiu       a2,a2,1
  00407BB0: 01797021 addu        t6,t3,t9
  00407BB4: 91CF0001 lbu         t7,1(t6)
  00407BB8: 31F80004 andi        t8,t7,4
  00407BBC: 53000006 beql        zero,t8,00407BD8
  00407BC0: 8E0F0000 lw          t7,0(s0)
  00407BC4: 8E190000 lw          t9,0(s0)
  00407BC8: 24420001 addiu       v0,v0,1
  00407BCC: 272E0001 addiu       t6,t9,1
  00407BD0: AE0E0000 sw          t6,0(s0)
  00407BD4: 8E0F0000 lw          t7,0(s0)
  00407BD8: 25F80001 addiu       t8,t7,1
  00407BDC: AE180000 sw          t8,0(s0)
  00407BE0: 1000FFB2 b           00407AAC
  00407BE4: 24420001 addiu       v0,v0,1
  00407BE8: 50C00004 beql        zero,a2,00407BFC
  00407BEC: 8E190000 lw          t9,0(s0)
  00407BF0: A0C00000 sb          zero,0(a2)
  00407BF4: 24C60001 addiu       a2,a2,1
  00407BF8: 8E190000 lw          t9,0(s0)
  00407BFC: 272E0001 addiu       t6,t9,1
  00407C00: AE0E0000 sw          t6,0(s0)
  00407C04: 1000FF94 b           00407A58
  00407C08: 80430000 lb          v1,0(v0)
  00407C0C: 50A00003 beql        zero,a1,00407C1C
  00407C10: 8CEF0000 lw          t7,0(a3)
  00407C14: ACA00000 sw          zero,0(a1)
  00407C18: 8CEF0000 lw          t7,0(a3)
  00407C1C: 25F80001 addiu       t8,t7,1
  00407C20: ACF80000 sw          t8,0(a3)
  00407C24: 8FB1000C lw          s1,0xC(sp)
  00407C28: 8FB00008 lw          s0,8(sp)
  00407C2C: 03E00008 jr          ra
  00407C30: 27BD0010 addiu       sp,sp,0x10
_setenvp:
  00407C34: 27BDFFD8 addiu       sp,sp,0xFFD8
  00407C38: AFBF0024 sw          ra,0x24(sp)
  00407C3C: AFB30020 sw          s3,0x20(sp)
  00407C40: AFB2001C sw          s2,0x1C(sp)
  00407C44: AFB10018 sw          s1,0x18(sp)
  00407C48: AFB00014 sw          s0,0x14(sp)
  00407C4C: 3C0E0041 lui         t6,0x41
  00407C50: 8DCEE3EC lw          t6,0xE3EC(t6)
  00407C54: 00008825 or          s1,zero,zero
  00407C58: 2413003D addiu       s3,zero,0x3D
  00407C5C: 81CF0000 lb          t7,0(t6)
  00407C60: 01C08025 or          s0,t6,zero
  00407C64: 51E0000D beql        zero,t7,00407C9C
  00407C68: 00112080 sll         a0,s1,2
  00407C6C: 81C30000 lb          v1,0(t6)
  00407C70: 12630002 beq         v1,s3,00407C7C
  00407C74: 00000000 nop
  00407C78: 26310001 addiu       s1,s1,1
  00407C7C: 0C102360 jal         strlen
  00407C80: 02002025 or          a0,s0,zero
  00407C84: 02028021 addu        s0,s0,v0
  00407C88: 82030001 lb          v1,1(s0)
  00407C8C: 26100001 addiu       s0,s0,1
  00407C90: 1460FFF7 bne         zero,v1,00407C70
  00407C94: 00000000 nop
  00407C98: 00112080 sll         a0,s1,2
  00407C9C: 2413003D addiu       s3,zero,0x3D
  00407CA0: 0C1020C7 jal         malloc
  00407CA4: 24840004 addiu       a0,a0,4
  00407CA8: 3C010041 lui         at,0x41
  00407CAC: AC22E428 sw          v0,0xE428(at)
  00407CB0: 14400003 bne         zero,v0,00407CC0
  00407CB4: 00409025 or          s2,v0,zero
  00407CB8: 0C101888 jal         _amsg_exit
  00407CBC: 24040009 addiu       a0,zero,9
  00407CC0: 3C180041 lui         t8,0x41
  00407CC4: 8F10E3EC lw          s0,0xE3EC(t8)
  00407CC8: 82190000 lb          t9,0(s0)
  00407CCC: 13200015 beq         zero,t9,00407D24
  00407CD0: 00000000 nop
  00407CD4: 0C102360 jal         strlen
  00407CD8: 02002025 or          a0,s0,zero
  00407CDC: 82080000 lb          t0,0(s0)
  00407CE0: 24510001 addiu       s1,v0,1
  00407CE4: 5268000C beql        t0,s3,00407D18
  00407CE8: 02118021 addu        s0,s0,s1
  00407CEC: 0C1020C7 jal         malloc
  00407CF0: 02202025 or          a0,s1,zero
  00407CF4: 14400003 bne         zero,v0,00407D04
  00407CF8: AE420000 sw          v0,0(s2)
  00407CFC: 0C101888 jal         _amsg_exit
  00407D00: 24040009 addiu       a0,zero,9
  00407D04: 8E440000 lw          a0,0(s2)
  00407D08: 0C102373 jal         strcpy
  00407D0C: 02002825 or          a1,s0,zero
  00407D10: 26520004 addiu       s2,s2,4
  00407D14: 02118021 addu        s0,s0,s1
  00407D18: 82090000 lb          t1,0(s0)
  00407D1C: 1520FFED bne         zero,t1,00407CD4
  00407D20: 00000000 nop
  00407D24: 3C040041 lui         a0,0x41
  00407D28: 0C1020F9 jal         free
  00407D2C: 8C84E3EC lw          a0,0xE3EC(a0)
  00407D30: AE400000 sw          zero,0(s2)
  00407D34: 8FBF0024 lw          ra,0x24(sp)
  00407D38: 8FB30020 lw          s3,0x20(sp)
  00407D3C: 8FB2001C lw          s2,0x1C(sp)
  00407D40: 8FB10018 lw          s1,0x18(sp)
  00407D44: 8FB00014 lw          s0,0x14(sp)
  00407D48: 03E00008 jr          ra
  00407D4C: 27BD0028 addiu       sp,sp,0x28
_ismbbkalnum:
  00407D50: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407D54: AFBF0014 sw          ra,0x14(sp)
  00407D58: 00002825 or          a1,zero,zero
  00407D5C: 0C101FB3 jal         x_ismbbtype
  00407D60: 24060001 addiu       a2,zero,1
  00407D64: 8FBF0014 lw          ra,0x14(sp)
  00407D68: 03E00008 jr          ra
  00407D6C: 27BD0018 addiu       sp,sp,0x18
_ismbbkprint:
  00407D70: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407D74: AFBF0014 sw          ra,0x14(sp)
  00407D78: 00002825 or          a1,zero,zero
  00407D7C: 0C101FB3 jal         x_ismbbtype
  00407D80: 24060003 addiu       a2,zero,3
  00407D84: 8FBF0014 lw          ra,0x14(sp)
  00407D88: 03E00008 jr          ra
  00407D8C: 27BD0018 addiu       sp,sp,0x18
_ismbbkpunct:
  00407D90: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407D94: AFBF0014 sw          ra,0x14(sp)
  00407D98: 00002825 or          a1,zero,zero
  00407D9C: 0C101FB3 jal         x_ismbbtype
  00407DA0: 24060002 addiu       a2,zero,2
  00407DA4: 8FBF0014 lw          ra,0x14(sp)
  00407DA8: 03E00008 jr          ra
  00407DAC: 27BD0018 addiu       sp,sp,0x18
_ismbbalnum:
  00407DB0: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407DB4: AFBF0014 sw          ra,0x14(sp)
  00407DB8: 24050107 addiu       a1,zero,0x107
  00407DBC: 0C101FB3 jal         x_ismbbtype
  00407DC0: 24060001 addiu       a2,zero,1
  00407DC4: 8FBF0014 lw          ra,0x14(sp)
  00407DC8: 03E00008 jr          ra
  00407DCC: 27BD0018 addiu       sp,sp,0x18
_ismbbalpha:
  00407DD0: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407DD4: AFBF0014 sw          ra,0x14(sp)
  00407DD8: 24050103 addiu       a1,zero,0x103
  00407DDC: 0C101FB3 jal         x_ismbbtype
  00407DE0: 24060001 addiu       a2,zero,1
  00407DE4: 8FBF0014 lw          ra,0x14(sp)
  00407DE8: 03E00008 jr          ra
  00407DEC: 27BD0018 addiu       sp,sp,0x18
_ismbbgraph:
  00407DF0: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407DF4: AFBF0014 sw          ra,0x14(sp)
  00407DF8: 24050117 addiu       a1,zero,0x117
  00407DFC: 0C101FB3 jal         x_ismbbtype
  00407E00: 24060003 addiu       a2,zero,3
  00407E04: 8FBF0014 lw          ra,0x14(sp)
  00407E08: 03E00008 jr          ra
  00407E0C: 27BD0018 addiu       sp,sp,0x18
_ismbbprint:
  00407E10: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407E14: AFBF0014 sw          ra,0x14(sp)
  00407E18: 24050157 addiu       a1,zero,0x157
  00407E1C: 0C101FB3 jal         x_ismbbtype
  00407E20: 24060003 addiu       a2,zero,3
  00407E24: 8FBF0014 lw          ra,0x14(sp)
  00407E28: 03E00008 jr          ra
  00407E2C: 27BD0018 addiu       sp,sp,0x18
_ismbbpunct:
  00407E30: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407E34: AFBF0014 sw          ra,0x14(sp)
  00407E38: 24050010 addiu       a1,zero,0x10
  00407E3C: 0C101FB3 jal         x_ismbbtype
  00407E40: 24060002 addiu       a2,zero,2
  00407E44: 8FBF0014 lw          ra,0x14(sp)
  00407E48: 03E00008 jr          ra
  00407E4C: 27BD0018 addiu       sp,sp,0x18
_ismbblead:
  00407E50: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407E54: AFBF0014 sw          ra,0x14(sp)
  00407E58: 00002825 or          a1,zero,zero
  00407E5C: 0C101FB3 jal         x_ismbbtype
  00407E60: 24060004 addiu       a2,zero,4
  00407E64: 8FBF0014 lw          ra,0x14(sp)
  00407E68: 03E00008 jr          ra
  00407E6C: 27BD0018 addiu       sp,sp,0x18
_ismbbtrail:
  00407E70: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407E74: AFBF0014 sw          ra,0x14(sp)
  00407E78: 00002825 or          a1,zero,zero
  00407E7C: 0C101FB3 jal         x_ismbbtype
  00407E80: 24060008 addiu       a2,zero,8
  00407E84: 8FBF0014 lw          ra,0x14(sp)
  00407E88: 03E00008 jr          ra
  00407E8C: 27BD0018 addiu       sp,sp,0x18
_ismbbkana:
  00407E90: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407E94: AFBF0014 sw          ra,0x14(sp)
  00407E98: 3C020041 lui         v0,0x41
  00407E9C: 8C42E5EC lw          v0,0xE5EC(v0)
  00407EA0: 00002825 or          a1,zero,zero
  00407EA4: 384203A4 xori        v0,v0,0x3A4
  00407EA8: 2C420001 sltiu       v0,v0,1
  00407EAC: 50400005 beql        zero,v0,00407EC4
  00407EB0: 8FBF0014 lw          ra,0x14(sp)
  00407EB4: 0C101FB3 jal         x_ismbbtype
  00407EB8: 24060003 addiu       a2,zero,3
  00407EBC: 0002102B sltu        v0,zero,v0
  00407EC0: 8FBF0014 lw          ra,0x14(sp)
  00407EC4: 03E00008 jr          ra
  00407EC8: 27BD0018 addiu       sp,sp,0x18
x_ismbbtype:
  00407ECC: 308400FF andi        a0,a0,0xFF
  00407ED0: 3C0E0041 lui         t6,0x41
  00407ED4: 01C47021 addu        t6,t6,a0
  00407ED8: 91CEE4E9 lbu         t6,0xE4E9(t6)
  00407EDC: 01C61024 and         v0,t6,a2
  00407EE0: 0002102B sltu        v0,zero,v0
  00407EE4: 1440000A bne         zero,v0,00407F10
  00407EE8: 00000000 nop
  00407EEC: 10A00007 beq         zero,a1,00407F0C
  00407EF0: 00001825 or          v1,zero,zero
  00407EF4: 00047840 sll         t7,a0,1
  00407EF8: 3C180041 lui         t8,0x41
  00407EFC: 030FC021 addu        t8,t8,t7
  00407F00: 9718E7D6 lhu         t8,0xE7D6(t8)
  00407F04: 10000001 b           00407F0C
  00407F08: 03051824 and         v1,t8,a1
  00407F0C: 0003102B sltu        v0,zero,v1
  00407F10: 03E00008 jr          ra
  00407F14: 00000000 nop
_FF_MSGBANNER:
  00407F18: 27BDFFE8 addiu       sp,sp,0xFFE8
  00407F1C: 3C020041 lui         v0,0x41
  00407F20: 8C42E3F8 lw          v0,0xE3F8(v0)
  00407F24: AFBF0014 sw          ra,0x14(sp)
  00407F28: 24030001 addiu       v1,zero,1
  00407F2C: 10430006 beq         v1,v0,00407F48
  00407F30: 00000000 nop
  00407F34: 1440000E bne         zero,v0,00407F70
  00407F38: 3C0E0041 lui         t6,0x41
  00407F3C: 8DCEE3FC lw          t6,0xE3FC(t6)
  00407F40: 55C3000C bnel        v1,t6,00407F74
  00407F44: 8FBF0014 lw          ra,0x14(sp)
  00407F48: 0C101FDF jal         _NMSG_WRITE
  00407F4C: 240400FC addiu       a0,zero,0xFC
  00407F50: 3C020041 lui         v0,0x41
  00407F54: 8C42E788 lw          v0,0xE788(v0)
  00407F58: 10400003 beq         zero,v0,00407F68
  00407F5C: 00000000 nop
  00407F60: 0040F809 jalr        ra,v0
  00407F64: 00000000 nop
  00407F68: 0C101FDF jal         _NMSG_WRITE
  00407F6C: 240400FF addiu       a0,zero,0xFF
  00407F70: 8FBF0014 lw          ra,0x14(sp)
  00407F74: 03E00008 jr          ra
  00407F78: 27BD0018 addiu       sp,sp,0x18
_NMSG_WRITE:
  00407F7C: 27BDFE18 addiu       sp,sp,0xFE18
  00407F80: AFBF0024 sw          ra,0x24(sp)
  00407F84: AFB00020 sw          s0,0x20(sp)
  00407F88: 3C100041 lui         s0,0x41
  00407F8C: 3C030041 lui         v1,0x41
  00407F90: 2463E788 addiu       v1,v1,0xE788
  00407F94: 2610E700 addiu       s0,s0,0xE700
  00407F98: 8E020000 lw          v0,0(s0)
  00407F9C: 10820005 beq         v0,a0,00407FB4
  00407FA0: 00000000 nop
  00407FA4: 26100008 addiu       s0,s0,8
  00407FA8: 5603FFFC bnel        v1,s0,00407F9C
  00407FAC: 8E020000 lw          v0,0(s0)
  00407FB0: 8E020000 lw          v0,0(s0)
  00407FB4: 14820087 bne         v0,a0,004081D4
  00407FB8: 3C020041 lui         v0,0x41
  00407FBC: 8C42E3F8 lw          v0,0xE3F8(v0)
  00407FC0: 24030001 addiu       v1,zero,1
  00407FC4: 3C0F0041 lui         t7,0x41
  00407FC8: 10430006 beq         v1,v0,00407FE4
  00407FCC: 00000000 nop
  00407FD0: 1440001B bne         zero,v0,00408040
  00407FD4: 3C0E0041 lui         t6,0x41
  00407FD8: 8DCEE3FC lw          t6,0xE3FC(t6)
  00407FDC: 55C30019 bnel        v1,t6,00408044
  00407FE0: 240100FC addiu       at,zero,0xFC
  00407FE4: 8DEFF4C0 lw          t7,0xF4C0(t7)
  00407FE8: 2401FFFF addiu       at,zero,0xFFFF
  00407FEC: 3C180041 lui         t8,0x41
  00407FF0: 8DE20010 lw          v0,0x10(t7)
  00407FF4: 54410006 bnel        at,v0,00408010
  00407FF8: AFA20034 sw          v0,0x34(sp)
  00407FFC: 8F181218 lw          t8,0x1218(t8)
  00408000: 2404FFF4 addiu       a0,zero,0xFFF4
  00408004: 0300F809 jalr        ra,t8
  00408008: 00000000 nop
  0040800C: AFA20034 sw          v0,0x34(sp)
  00408010: 0C102360 jal         strlen
  00408014: 8E040004 lw          a0,4(s0)
  00408018: 3C190041 lui         t9,0x41
  0040801C: 8F391240 lw          t9,0x1240(t9)
  00408020: 8FA40034 lw          a0,0x34(sp)
  00408024: 8E050004 lw          a1,4(s0)
  00408028: 00403025 or          a2,v0,zero
  0040802C: 27A701E0 addiu       a3,sp,0x1E0
  00408030: 0320F809 jalr        ra,t9
  00408034: AFA00010 sw          zero,0x10(sp)
  00408038: 10000067 b           004081D8
  0040803C: 8FB00020 lw          s0,0x20(sp)
  00408040: 240100FC addiu       at,zero,0xFC
  00408044: 10810063 beq         at,a0,004081D4
  00408048: 3C080041 lui         t0,0x41
  0040804C: 8D081298 lw          t0,0x1298(t0)
  00408050: 00002025 or          a0,zero,zero
  00408054: 27A500DC addiu       a1,sp,0xDC
  00408058: 0100F809 jalr        ra,t0
  0040805C: 24060104 addiu       a2,zero,0x104
  00408060: 1440001D bne         zero,v0,004080D8
  00408064: 27A400DC addiu       a0,sp,0xDC
  00408068: 3C090041 lui         t1,0x41
  0040806C: 2529D4C0 addiu       t1,t1,0xD4C0
  00408070: 89210003 lwl         at,3(t1)
  00408074: 892B0007 lwl         t3,7(t1)
  00408078: 892A000B lwl         t2,0xB(t1)
  0040807C: 99210000 lwr         at,0(t1)
  00408080: 992B0004 lwr         t3,4(t1)
  00408084: 992A0008 lwr         t2,8(t1)
  00408088: A8810003 swl         at,3(a0)
  0040808C: A88B0007 swl         t3,7(a0)
  00408090: A88A000B swl         t2,0xB(a0)
  00408094: B8810000 swr         at,0(a0)
  00408098: B88B0004 swr         t3,4(a0)
  0040809C: B88A0008 swr         t2,8(a0)
  004080A0: 8921000F lwl         at,0xF(t1)
  004080A4: 892B0013 lwl         t3,0x13(t1)
  004080A8: 9921000C lwr         at,0xC(t1)
  004080AC: 992B0010 lwr         t3,0x10(t1)
  004080B0: A881000F swl         at,0xF(a0)
  004080B4: A88B0013 swl         t3,0x13(a0)
  004080B8: B881000C swr         at,0xC(a0)
  004080BC: B88B0010 swr         t3,0x10(a0)
  004080C0: 91210014 lbu         at,0x14(t1)
  004080C4: A0810014 sb          at,0x14(a0)
  004080C8: 912B0015 lbu         t3,0x15(t1)
  004080CC: A08B0015 sb          t3,0x15(a0)
  004080D0: 91210016 lbu         at,0x16(t1)
  004080D4: A0810016 sb          at,0x16(a0)
  004080D8: 27A400DC addiu       a0,sp,0xDC
  004080DC: 0C102360 jal         strlen
  004080E0: AFA400D8 sw          a0,0xD8(sp)
  004080E4: 244C0001 addiu       t4,v0,1
  004080E8: 2D81003D sltiu       at,t4,0x3D
  004080EC: 1420000B bne         zero,at,0040811C
  004080F0: 00000000 nop
  004080F4: 0C102360 jal         strlen
  004080F8: 27A400DC addiu       a0,sp,0xDC
  004080FC: 244DFFC5 addiu       t5,v0,0xFFC5
  00408100: 27AE00DC addiu       t6,sp,0xDC
  00408104: 01AE2021 addu        a0,t5,t6
  00408108: 3C050041 lui         a1,0x41
  0040810C: 24A5D4BC addiu       a1,a1,0xD4BC
  00408110: AFA400D8 sw          a0,0xD8(sp)
  00408114: 0C10239D jal         strncpy
  00408118: 24060003 addiu       a2,zero,3
  0040811C: 3C0F0041 lui         t7,0x41
  00408120: 25EFD4A0 addiu       t7,t7,0xD4A0
  00408124: 89E10003 lwl         at,3(t7)
  00408128: 89F90007 lwl         t9,7(t7)
  0040812C: 89F8000B lwl         t8,0xB(t7)
  00408130: 27A40038 addiu       a0,sp,0x38
  00408134: 99E10000 lwr         at,0(t7)
  00408138: 99F90004 lwr         t9,4(t7)
  0040813C: 99F80008 lwr         t8,8(t7)
  00408140: A8810003 swl         at,3(a0)
  00408144: A8990007 swl         t9,7(a0)
  00408148: A898000B swl         t8,0xB(a0)
  0040814C: B8810000 swr         at,0(a0)
  00408150: B8990004 swr         t9,4(a0)
  00408154: B8980008 swr         t8,8(a0)
  00408158: 89E1000F lwl         at,0xF(t7)
  0040815C: 89F90013 lwl         t9,0x13(t7)
  00408160: 89F80017 lwl         t8,0x17(t7)
  00408164: 99E1000C lwr         at,0xC(t7)
  00408168: 99F90010 lwr         t9,0x10(t7)
  0040816C: 99F80014 lwr         t8,0x14(t7)
  00408170: A881000F swl         at,0xF(a0)
  00408174: A8990013 swl         t9,0x13(a0)
  00408178: A8980017 swl         t8,0x17(a0)
  0040817C: B881000C swr         at,0xC(a0)
  00408180: B8990010 swr         t9,0x10(a0)
  00408184: B8980014 swr         t8,0x14(a0)
  00408188: 91E10018 lbu         at,0x18(t7)
  0040818C: A0810018 sb          at,0x18(a0)
  00408190: 91F90019 lbu         t9,0x19(t7)
  00408194: A0990019 sb          t9,0x19(a0)
  00408198: 0C1023C6 jal         strcat
  0040819C: 8FA500D8 lw          a1,0xD8(sp)
  004081A0: 3C050041 lui         a1,0x41
  004081A4: 24A5D49C addiu       a1,a1,0xD49C
  004081A8: 0C1023C6 jal         strcat
  004081AC: 27A40038 addiu       a0,sp,0x38
  004081B0: 27A40038 addiu       a0,sp,0x38
  004081B4: 0C1023C6 jal         strcat
  004081B8: 8E050004 lw          a1,4(s0)
  004081BC: 3C050041 lui         a1,0x41
  004081C0: 3C060001 lui         a2,1
  004081C4: 34C62010 ori         a2,a2,0x2010
  004081C8: 24A5D474 addiu       a1,a1,0xD474
  004081CC: 0C1023F5 jal         __crtMessageBoxA
  004081D0: 27A40038 addiu       a0,sp,0x38
  004081D4: 8FB00020 lw          s0,0x20(sp)
  004081D8: 8FBF0024 lw          ra,0x24(sp)
  004081DC: 03E00008 jr          ra
  004081E0: 27BD01E8 addiu       sp,sp,0x1E8
_GET_RTERRMSG:
  004081E4: 3C030041 lui         v1,0x41
  004081E8: 3C050041 lui         a1,0x41
  004081EC: 24A5E788 addiu       a1,a1,0xE788
  004081F0: 2463E700 addiu       v1,v1,0xE700
  004081F4: 8C620000 lw          v0,0(v1)
  004081F8: 10820005 beq         v0,a0,00408210
  004081FC: 00000000 nop
  00408200: 24630008 addiu       v1,v1,8
  00408204: 5465FFFC bnel        a1,v1,004081F8
  00408208: 8C620000 lw          v0,0(v1)
  0040820C: 8C620000 lw          v0,0(v1)
  00408210: 54820004 bnel        v0,a0,00408224
  00408214: 00001025 or          v0,zero,zero
  00408218: 03E00008 jr          ra
  0040821C: 8C620004 lw          v0,4(v1)
  00408220: 00001025 or          v0,zero,zero
  00408224: 03E00008 jr          ra
  00408228: 00000000 nop
_fpmath:
  0040822C: 27BDFFE8 addiu       sp,sp,0xFFE8
  00408230: AFBF0014 sw          ra,0x14(sp)
  00408234: 0C102094 jal         _cfltcvt_init
  00408238: 00000000 nop
  0040823C: 8FBF0014 lw          ra,0x14(sp)
  00408240: 03E00008 jr          ra
  00408244: 27BD0018 addiu       sp,sp,0x18
_fpclear:
  00408248: 03E00008 jr          ra
  0040824C: 00000000 nop
_cfltcvt_init:
  00408250: 3C020041 lui         v0,0x41
  00408254: 24429800 addiu       v0,v0,0x9800
  00408258: 3C010041 lui         at,0x41
  0040825C: AC22E9E8 sw          v0,0xE9E8(at)
  00408260: 3C0E0041 lui         t6,0x41
  00408264: 25CE91A4 addiu       t6,t6,0x91A4
  00408268: 3C010041 lui         at,0x41
  0040826C: AC2EE9EC sw          t6,0xE9EC(at)
  00408270: 3C0F0041 lui         t7,0x41
  00408274: 25EF92D8 addiu       t7,t7,0x92D8
  00408278: 3C010041 lui         at,0x41
  0040827C: AC2FE9F0 sw          t7,0xE9F0(at)
  00408280: 3C180041 lui         t8,0x41
  00408284: 271890F4 addiu       t8,t8,0x90F4
  00408288: 3C010041 lui         at,0x41
  0040828C: AC38E9F4 sw          t8,0xE9F4(at)
  00408290: 3C190041 lui         t9,0x41
  00408294: 273992A8 addiu       t9,t9,0x92A8
  00408298: 3C010041 lui         at,0x41
  0040829C: AC39E9F8 sw          t9,0xE9F8(at)
  004082A0: 3C010041 lui         at,0x41
  004082A4: 03E00008 jr          ra
  004082A8: AC22E9FC sw          v0,0xE9FC(at)
__setfflag:
  004082AC: 3C030041 lui         v1,0x41
  004082B0: 8C62E794 lw          v0,0xE794(v1)
  004082B4: 3C010041 lui         at,0x41
  004082B8: 03E00008 jr          ra
  004082BC: AC24E794 sw          a0,0xE794(at)
__C_ExecuteExceptionFilter:
  004082C0: 00A00008 jr          a1
  004082C4: 00C01025 or          v0,a2,zero
__C_ExecuteTerminationHandler:
  004082C8: 00A00008 jr          a1
  004082CC: 00C01025 or          v0,a2,zero
__jump_unwind:
  004082D0: 00003025 or          a2,zero,zero
  004082D4: 08103249 j           RtlUnwind
  004082D8: 00003825 or          a3,zero,zero
_NLG_Notify:
  004082DC: 3C010041 lui         at,0x41
  004082E0: AC24E7A8 sw          a0,0xE7A8(at)
  004082E4: 3C010041 lui         at,0x41
  004082E8: AC25E7B0 sw          a1,0xE7B0(at)
  004082EC: 3C010041 lui         at,0x41
  004082F0: AC26E7AC sw          a2,0xE7AC(at)
_NLG_Dispatch:
  004082F4: 03E00008 jr          ra
  004082F8: 00801025 or          v0,a0,zero
_NLG_ExecuteTerminationHandler:
  004082FC: 27BDFFE8 addiu       sp,sp,0xFFE8
  00408300: AFBF0014 sw          ra,0x14(sp)
  00408304: 00A0F809 jalr        ra,a1
  00408308: 00C01025 or          v0,a2,zero
_NLG_Return2:
  0040830C: 8FBF0014 lw          ra,0x14(sp)
  00408310: 27BD0018 addiu       sp,sp,0x18
  00408314: 03E00008 jr          ra
  00408318: 00000000 nop
malloc:
  0040831C: 27BDFFE8 addiu       sp,sp,0xFFE8
  00408320: AFBF0014 sw          ra,0x14(sp)
  00408324: 3C050041 lui         a1,0x41
  00408328: 0C1020CF jal         _nh_malloc
  0040832C: 8CA5EA0C lw          a1,0xEA0C(a1)
  00408330: 8FBF0014 lw          ra,0x14(sp)
  00408334: 03E00008 jr          ra
  00408338: 27BD0018 addiu       sp,sp,0x18
_nh_malloc:
  0040833C: 27BDFFE0 addiu       sp,sp,0xFFE0
  00408340: AFB10018 sw          s1,0x18(sp)
  00408344: AFB00014 sw          s0,0x14(sp)
  00408348: 00808025 or          s0,a0,zero
  0040834C: 00A08825 or          s1,a1,zero
  00408350: AFBF001C sw          ra,0x1C(sp)
  00408354: 2E01FFE1 sltiu       at,s0,0xFFE1
  00408358: 50200011 beql        zero,at,004083A0
  0040835C: 00001025 or          v0,zero,zero
  00408360: 16000002 bne         zero,s0,0040836C
  00408364: 00000000 nop
  00408368: 24100001 addiu       s0,zero,1
  0040836C: 0C1020ED jal         _heap_alloc
  00408370: 02002025 or          a0,s0,zero
  00408374: 14400003 bne         zero,v0,00408384
  00408378: 00401825 or          v1,v0,zero
  0040837C: 16200003 bne         zero,s1,0040838C
  00408380: 00000000 nop
  00408384: 10000006 b           004083A0
  00408388: 00601025 or          v0,v1,zero
  0040838C: 0C102649 jal         _callnewh
  00408390: 02002025 or          a0,s0,zero
  00408394: 1440FFF5 bne         zero,v0,0040836C
  00408398: 00000000 nop
  0040839C: 00001025 or          v0,zero,zero
  004083A0: 8FB00014 lw          s0,0x14(sp)
  004083A4: 8FB10018 lw          s1,0x18(sp)
  004083A8: 8FBF001C lw          ra,0x1C(sp)
  004083AC: 03E00008 jr          ra
  004083B0: 27BD0020 addiu       sp,sp,0x20
_heap_alloc:
  004083B4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004083B8: AFBF0014 sw          ra,0x14(sp)
  004083BC: 00803025 or          a2,a0,zero
  004083C0: 3C0E0041 lui         t6,0x41
  004083C4: 8DCE1244 lw          t6,0x1244(t6)
  004083C8: 3C040041 lui         a0,0x41
  004083CC: 8C84F5C0 lw          a0,0xF5C0(a0)
  004083D0: 01C0F809 jalr        ra,t6
  004083D4: 00002825 or          a1,zero,zero
  004083D8: 8FBF0014 lw          ra,0x14(sp)
  004083DC: 03E00008 jr          ra
  004083E0: 27BD0018 addiu       sp,sp,0x18
free:
  004083E4: 27BDFFE8 addiu       sp,sp,0xFFE8
  004083E8: AFBF0014 sw          ra,0x14(sp)
  004083EC: 00803025 or          a2,a0,zero
  004083F0: 10C00006 beq         zero,a2,0040840C
  004083F4: 3C0E0041 lui         t6,0x41
  004083F8: 8DCE1248 lw          t6,0x1248(t6)
  004083FC: 3C040041 lui         a0,0x41
  00408400: 8C84F5C0 lw          a0,0xF5C0(a0)
  00408404: 01C0F809 jalr        ra,t6
  00408408: 00002825 or          a1,zero,zero
  0040840C: 8FBF0014 lw          ra,0x14(sp)
  00408410: 03E00008 jr          ra
  00408414: 27BD0018 addiu       sp,sp,0x18
memcmp:
  00408418: 30C8001F andi        t0,a2,0x1F
  0040841C: 00C84823 subu        t1,a2,t0
  00408420: 00863821 addu        a3,a0,a2
  00408424: 00C01025 or          v0,a2,zero
  00408428: 100900B8 beq         t1,zero,0040870C
  0040842C: 00896021 addu        t4,a0,t1
  00408430: 00854025 or          t0,a0,a1
  00408434: 31080003 andi        t0,t0,3
  00408438: 54080020 bnel        t0,zero,004084BC
  0040843C: 30880003 andi        t0,a0,3
  00408440: 8C880000 lw          t0,0(a0)
  00408444: 8CA90000 lw          t1,0(a1)
  00408448: 8C8A0004 lw          t2,4(a0)
  0040844C: 150900AE bne         t1,t0,00408708
  00408450: 8CAB0004 lw          t3,4(a1)
  00408454: 8C880008 lw          t0,8(a0)
  00408458: 154B0097 bne         t3,t2,004086B8
  0040845C: 8CA90008 lw          t1,8(a1)
  00408460: 8C8A000C lw          t2,0xC(a0)
  00408464: 15090097 bne         t1,t0,004086C4
  00408468: 8CAB000C lw          t3,0xC(a1)
  0040846C: 8C880010 lw          t0,0x10(a0)
  00408470: 154B0097 bne         t3,t2,004086D0
  00408474: 8CA90010 lw          t1,0x10(a1)
  00408478: 8C8A0014 lw          t2,0x14(a0)
  0040847C: 15090097 bne         t1,t0,004086DC
  00408480: 8CAB0014 lw          t3,0x14(a1)
  00408484: 8C880018 lw          t0,0x18(a0)
  00408488: 154B0097 bne         t3,t2,004086E8
  0040848C: 8CA90018 lw          t1,0x18(a1)
  00408490: 8C8A001C lw          t2,0x1C(a0)
  00408494: 15090097 bne         t1,t0,004086F4
  00408498: 8CAB001C lw          t3,0x1C(a1)
  0040849C: 24840020 addiu       a0,a0,0x20
  004084A0: 154B0097 bne         t3,t2,00408700
  004084A4: 00000000 nop
  004084A8: 148CFFE5 bne         t4,a0,00408440
  004084AC: 24A50020 addiu       a1,a1,0x20
  004084B0: 10000096 b           0040870C
  004084B4: 00E43023 subu        a2,a3,a0
  004084B8: 30880003 andi        t0,a0,3
  004084BC: 54080028 bnel        t0,zero,00408560
  004084C0: 30A80003 andi        t0,a1,3
  004084C4: 8C880000 lw          t0,0(a0)
  004084C8: 98A90000 lwr         t1,0(a1)
  004084CC: 88A90003 lwl         t1,3(a1)
  004084D0: 8C8A0004 lw          t2,4(a0)
  004084D4: 1509008C bne         t1,t0,00408708
  004084D8: 98AB0004 lwr         t3,4(a1)
  004084DC: 88AB0007 lwl         t3,7(a1)
  004084E0: 8C880008 lw          t0,8(a0)
  004084E4: 154B0074 bne         t3,t2,004086B8
  004084E8: 98A90008 lwr         t1,8(a1)
  004084EC: 88A9000B lwl         t1,0xB(a1)
  004084F0: 8C8A000C lw          t2,0xC(a0)
  004084F4: 15090073 bne         t1,t0,004086C4
  004084F8: 98AB000C lwr         t3,0xC(a1)
  004084FC: 88AB000F lwl         t3,0xF(a1)
  00408500: 8C880010 lw          t0,0x10(a0)
  00408504: 154B0072 bne         t3,t2,004086D0
  00408508: 98A90010 lwr         t1,0x10(a1)
  0040850C: 88A90013 lwl         t1,0x13(a1)
  00408510: 8C8A0014 lw          t2,0x14(a0)
  00408514: 15090071 bne         t1,t0,004086DC
  00408518: 98AB0014 lwr         t3,0x14(a1)
  0040851C: 88AB0017 lwl         t3,0x17(a1)
  00408520: 8C880018 lw          t0,0x18(a0)
  00408524: 154B0070 bne         t3,t2,004086E8
  00408528: 98A90018 lwr         t1,0x18(a1)
  0040852C: 88A9001B lwl         t1,0x1B(a1)
  00408530: 8C8A001C lw          t2,0x1C(a0)
  00408534: 1509006F bne         t1,t0,004086F4
  00408538: 98AB001C lwr         t3,0x1C(a1)
  0040853C: 88AB001F lwl         t3,0x1F(a1)
  00408540: 24840020 addiu       a0,a0,0x20
  00408544: 154B006E bne         t3,t2,00408700
  00408548: 00000000 nop
  0040854C: 148CFFDD bne         t4,a0,004084C4
  00408550: 24A50020 addiu       a1,a1,0x20
  00408554: 1000006D b           0040870C
  00408558: 00E43023 subu        a2,a3,a0
  0040855C: 30A80003 andi        t0,a1,3
  00408560: 14080027 bne         t0,zero,00408600
  00408564: 00000000 nop
  00408568: 98880000 lwr         t0,0(a0)
  0040856C: 88880003 lwl         t0,3(a0)
  00408570: 8CA90000 lw          t1,0(a1)
  00408574: 988A0004 lwr         t2,4(a0)
  00408578: 888A0007 lwl         t2,7(a0)
  0040857C: 15090062 bne         t1,t0,00408708
  00408580: 8CAB0004 lw          t3,4(a1)
  00408584: 98880008 lwr         t0,8(a0)
  00408588: 8888000B lwl         t0,0xB(a0)
  0040858C: 154B004A bne         t3,t2,004086B8
  00408590: 8CA90008 lw          t1,8(a1)
  00408594: 988A000C lwr         t2,0xC(a0)
  00408598: 888A000F lwl         t2,0xF(a0)
  0040859C: 15090049 bne         t1,t0,004086C4
  004085A0: 8CAB000C lw          t3,0xC(a1)
  004085A4: 98880010 lwr         t0,0x10(a0)
  004085A8: 88880013 lwl         t0,0x13(a0)
  004085AC: 154B0048 bne         t3,t2,004086D0
  004085B0: 8CA90010 lw          t1,0x10(a1)
  004085B4: 988A0014 lwr         t2,0x14(a0)
  004085B8: 888A0017 lwl         t2,0x17(a0)
  004085BC: 15090047 bne         t1,t0,004086DC
  004085C0: 8CAB0014 lw          t3,0x14(a1)
  004085C4: 98880018 lwr         t0,0x18(a0)
  004085C8: 8888001B lwl         t0,0x1B(a0)
  004085CC: 154B0046 bne         t3,t2,004086E8
  004085D0: 8CA90018 lw          t1,0x18(a1)
  004085D4: 988A001C lwr         t2,0x1C(a0)
  004085D8: 888A001F lwl         t2,0x1F(a0)
  004085DC: 15090045 bne         t1,t0,004086F4
  004085E0: 8CAB001C lw          t3,0x1C(a1)
  004085E4: 24840020 addiu       a0,a0,0x20
  004085E8: 154B0045 bne         t3,t2,00408700
  004085EC: 00000000 nop
  004085F0: 148CFFDD bne         t4,a0,00408568
  004085F4: 24A50020 addiu       a1,a1,0x20
  004085F8: 10000044 b           0040870C
  004085FC: 00E43023 subu        a2,a3,a0
  00408600: 98880000 lwr         t0,0(a0)
  00408604: 88880003 lwl         t0,3(a0)
  00408608: 98A90000 lwr         t1,0(a1)
  0040860C: 88A90003 lwl         t1,3(a1)
  00408610: 988A0004 lwr         t2,4(a0)
  00408614: 888A0007 lwl         t2,7(a0)
  00408618: 1509003B bne         t1,t0,00408708
  0040861C: 98AB0004 lwr         t3,4(a1)
  00408620: 88AB0007 lwl         t3,7(a1)
  00408624: 98880008 lwr         t0,8(a0)
  00408628: 8888000B lwl         t0,0xB(a0)
  0040862C: 154B0022 bne         t3,t2,004086B8
  00408630: 98A90008 lwr         t1,8(a1)
  00408634: 88A9000B lwl         t1,0xB(a1)
  00408638: 988A000C lwr         t2,0xC(a0)
  0040863C: 888A000F lwl         t2,0xF(a0)
  00408640: 15090020 bne         t1,t0,004086C4
  00408644: 98AB000C lwr         t3,0xC(a1)
  00408648: 88AB000F lwl         t3,0xF(a1)
  0040864C: 98880010 lwr         t0,0x10(a0)
  00408650: 88880013 lwl         t0,0x13(a0)
  00408654: 154B001E bne         t3,t2,004086D0
  00408658: 98A90010 lwr         t1,0x10(a1)
  0040865C: 88A90013 lwl         t1,0x13(a1)
  00408660: 988A0014 lwr         t2,0x14(a0)
  00408664: 888A0017 lwl         t2,0x17(a0)
  00408668: 1509001C bne         t1,t0,004086DC
  0040866C: 98AB0014 lwr         t3,0x14(a1)
  00408670: 88AB0017 lwl         t3,0x17(a1)
  00408674: 98880018 lwr         t0,0x18(a0)
  00408678: 8888001B lwl         t0,0x1B(a0)
  0040867C: 154B001A bne         t3,t2,004086E8
  00408680: 98A90018 lwr         t1,0x18(a1)
  00408684: 88A9001B lwl         t1,0x1B(a1)
  00408688: 988A001C lwr         t2,0x1C(a0)
  0040868C: 888A001F lwl         t2,0x1F(a0)
  00408690: 15090018 bne         t1,t0,004086F4
  00408694: 98AB001C lwr         t3,0x1C(a1)
  00408698: 88AB001F lwl         t3,0x1F(a1)
  0040869C: 24840020 addiu       a0,a0,0x20
  004086A0: 154B0017 bne         t3,t2,00408700
  004086A4: 00000000 nop
  004086A8: 148CFFD5 bne         t4,a0,00408600
  004086AC: 24A50020 addiu       a1,a1,0x20
  004086B0: 10000016 b           0040870C
  004086B4: 00E43023 subu        a2,a3,a0
  004086B8: 24840004 addiu       a0,a0,4
  004086BC: 10000012 b           00408708
  004086C0: 24A50004 addiu       a1,a1,4
  004086C4: 24840008 addiu       a0,a0,8
  004086C8: 1000000F b           00408708
  004086CC: 24A50008 addiu       a1,a1,8
  004086D0: 2484000C addiu       a0,a0,0xC
  004086D4: 1000000C b           00408708
  004086D8: 24A5000C addiu       a1,a1,0xC
  004086DC: 24840010 addiu       a0,a0,0x10
  004086E0: 10000009 b           00408708
  004086E4: 24A50010 addiu       a1,a1,0x10
  004086E8: 24840014 addiu       a0,a0,0x14
  004086EC: 10000006 b           00408708
  004086F0: 24A50014 addiu       a1,a1,0x14
  004086F4: 24840018 addiu       a0,a0,0x18
  004086F8: 10000003 b           00408708
  004086FC: 24A50018 addiu       a1,a1,0x18
  00408700: 2484FFFC addiu       a0,a0,0xFFFC
  00408704: 24A5001C addiu       a1,a1,0x1C
  00408708: 00E43023 subu        a2,a3,a0
  0040870C: 10060008 beq         a2,zero,00408730
  00408710: 00865021 addu        t2,a0,a2
  00408714: 80880000 lb          t0,0(a0)
  00408718: 80A90000 lb          t1,0(a1)
  0040871C: 24A50001 addiu       a1,a1,1
  00408720: 15090005 bne         t1,t0,00408738
  00408724: 24840001 addiu       a0,a0,1
  00408728: 548AFFFB bnel        t2,a0,00408718
  0040872C: 80880000 lb          t0,0(a0)
  00408730: 03E00008 jr          ra
  00408734: 00001025 or          v0,zero,zero
  00408738: 0128102B sltu        v0,t1,t0
  0040873C: 10400003 beq         zero,v0,0040874C
  00408740: 00000000 nop
  00408744: 03E00008 jr          ra
  00408748: 00000000 nop
  0040874C: 03E00008 jr          ra
  00408750: 2402FFFF addiu       v0,zero,0xFFFF
memmove:
  00408754: 00801025 or          v0,a0,zero
  00408758: 00A4082B sltu        at,a1,a0
  0040875C: 10200004 beq         zero,at,00408770
  00408760: 00A64021 addu        t0,a1,a2
  00408764: 0088082B sltu        at,a0,t0
  00408768: 542000A3 bnel        zero,at,004089F8
  0040876C: 2CC80004 sltiu       t0,a2,4
  00408770: 2CC80004 sltiu       t0,a2,4
  00408774: 14080059 bne         t0,zero,004088DC
  00408778: 00854026 xor         t0,a0,a1
  0040877C: 31080003 andi        t0,t0,3
  00408780: 1408005F bne         t0,zero,00408900
  00408784: 00044023 subu        t0,zero,a0
  00408788: 31080003 andi        t0,t0,3
  0040878C: 10080005 beq         t0,zero,004087A4
  00408790: 00C83023 subu        a2,a2,t0
  00408794: 98A90000 lwr         t1,0(a1)
  00408798: 00A82821 addu        a1,a1,t0
  0040879C: B8890000 swr         t1,0(a0)
  004087A0: 00882021 addu        a0,a0,t0
  004087A4: 30C8001F andi        t0,a2,0x1F
  004087A8: 00C84823 subu        t1,a2,t0
  004087AC: 10090041 beq         t1,zero,004088B4
  004087B0: 0089C021 addu        t8,a0,t1
  004087B4: 01003025 or          a2,t0,zero
  004087B8: 30880004 andi        t0,a0,4
  004087BC: 50080009 beql        t0,zero,004087E4
  004087C0: 30A80004 andi        t0,a1,4
  004087C4: 8CA80000 lw          t0,0(a1)
  004087C8: 00C93021 addu        a2,a2,t1
  004087CC: 24A50004 addiu       a1,a1,4
  004087D0: 24840004 addiu       a0,a0,4
  004087D4: 24C6FFFC addiu       a2,a2,0xFFFC
  004087D8: 1000FFF2 b           004087A4
  004087DC: AC88FFFC sw          t0,0xFFFC(a0)
  004087E0: 30A80004 andi        t0,a1,4
  004087E4: 50080013 beql        t0,zero,00408834
  004087E8: 31280020 andi        t0,t1,0x20
  004087EC: C4A00000 lwc1        93180,0(a1)
  004087F0: C4A10004 lwc1        93181,4(a1)
  004087F4: C4A20008 lwc1        93182,8(a1)
  004087F8: C4A3000C lwc1        93183,0xC(a1)
  004087FC: C4A40010 lwc1        93184,0x10(a1)
  00408800: C4A50014 lwc1        93185,0x14(a1)
  00408804: C4A60018 lwc1        93186,0x18(a1)
  00408808: C4A7001C lwc1        93187,0x1C(a1)
  0040880C: F4800000 sdc1        93180,0(a0)
  00408810: F4820008 sdc1        93182,8(a0)
  00408814: F4840010 sdc1        93184,0x10(a0)
  00408818: F4860018 sdc1        93186,0x18(a0)
  0040881C: 24840020 addiu       a0,a0,0x20
  00408820: 1498FFF2 bne         t8,a0,004087EC
  00408824: 24A50020 addiu       a1,a1,0x20
  00408828: 10000023 b           004088B8
  0040882C: 30C80003 andi        t0,a2,3
  00408830: 31280020 andi        t0,t1,0x20
  00408834: 5008000D beql        t0,zero,0040886C
  00408838: D4A00000 ldc1        93180,0(a1)
  0040883C: D4A00000 ldc1        93180,0(a1)
  00408840: D4A20008 ldc1        93182,8(a1)
  00408844: D4A40010 ldc1        93184,0x10(a1)
  00408848: D4A60018 ldc1        93186,0x18(a1)
  0040884C: F4800000 sdc1        93180,0(a0)
  00408850: F4820008 sdc1        93182,8(a0)
  00408854: F4840010 sdc1        93184,0x10(a0)
  00408858: F4860018 sdc1        93186,0x18(a0)
  0040885C: 24840020 addiu       a0,a0,0x20
  00408860: 10980014 beq         t8,a0,004088B4
  00408864: 24A50020 addiu       a1,a1,0x20
  00408868: D4A00000 ldc1        93180,0(a1)
  0040886C: D4A20008 ldc1        93182,8(a1)
  00408870: D4A40010 ldc1        93184,0x10(a1)
  00408874: D4A60018 ldc1        93186,0x18(a1)
  00408878: D4A80020 ldc1        93188,0x20(a1)
  0040887C: D4AA0028 ldc1        931810,0x28(a1)
  00408880: D4AC0030 ldc1        931812,0x30(a1)
  00408884: D4AE0038 ldc1        931814,0x38(a1)
  00408888: F4800000 sdc1        93180,0(a0)
  0040888C: F4820008 sdc1        93182,8(a0)
  00408890: F4840010 sdc1        93184,0x10(a0)
  00408894: F4860018 sdc1        93186,0x18(a0)
  00408898: F4880020 sdc1        93188,0x20(a0)
  0040889C: F48A0028 sdc1        931810,0x28(a0)
  004088A0: F48C0030 sdc1        931812,0x30(a0)
  004088A4: F48E0038 sdc1        931814,0x38(a0)
  004088A8: 24840040 addiu       a0,a0,0x40
  004088AC: 1498FFEE bne         t8,a0,00408868
  004088B0: 24A50040 addiu       a1,a1,0x40
  004088B4: 30C80003 andi        t0,a2,3
  004088B8: 00C84823 subu        t1,a2,t0
  004088BC: 10090007 beq         t1,zero,004088DC
  004088C0: 00895021 addu        t2,a0,t1
  004088C4: 01003025 or          a2,t0,zero
  004088C8: 8CA80000 lw          t0,0(a1)
  004088CC: 24840004 addiu       a0,a0,4
  004088D0: AC88FFFC sw          t0,0xFFFC(a0)
  004088D4: 148AFFFC bne         t2,a0,004088C8
  004088D8: 24A50004 addiu       a1,a1,4
  004088DC: 10060006 beq         a2,zero,004088F8
  004088E0: 00865021 addu        t2,a0,a2
  004088E4: 80A80000 lb          t0,0(a1)
  004088E8: 24840001 addiu       a0,a0,1
  004088EC: A088FFFF sb          t0,0xFFFF(a0)
  004088F0: 148AFFFC bne         t2,a0,004088E4
  004088F4: 24A50001 addiu       a1,a1,1
  004088F8: 03E00008 jr          ra
  004088FC: 00000000 nop
  00408900: 00044023 subu        t0,zero,a0
  00408904: 31080003 andi        t0,t0,3
  00408908: 10080006 beq         t0,zero,00408924
  0040890C: 00C83023 subu        a2,a2,t0
  00408910: 98A90000 lwr         t1,0(a1)
  00408914: 88A90003 lwl         t1,3(a1)
  00408918: 00A82821 addu        a1,a1,t0
  0040891C: B8890000 swr         t1,0(a0)
  00408920: 00882021 addu        a0,a0,t0
  00408924: 30C8001F andi        t0,a2,0x1F
  00408928: 00C84823 subu        t1,a2,t0
  0040892C: 1009001D beq         t1,zero,004089A4
  00408930: 0089C021 addu        t8,a0,t1
  00408934: 01003025 or          a2,t0,zero
  00408938: 98A80000 lwr         t0,0(a1)
  0040893C: 88A80003 lwl         t0,3(a1)
  00408940: 98A90004 lwr         t1,4(a1)
  00408944: 88A90007 lwl         t1,7(a1)
  00408948: 98AA0008 lwr         t2,8(a1)
  0040894C: 88AA000B lwl         t2,0xB(a1)
  00408950: 98AB000C lwr         t3,0xC(a1)
  00408954: 88AB000F lwl         t3,0xF(a1)
  00408958: 98AC0010 lwr         t4,0x10(a1)
  0040895C: 88AC0013 lwl         t4,0x13(a1)
  00408960: 98AD0014 lwr         t5,0x14(a1)
  00408964: 88AD0017 lwl         t5,0x17(a1)
  00408968: 98AE0018 lwr         t6,0x18(a1)
  0040896C: 88AE001B lwl         t6,0x1B(a1)
  00408970: 98AF001C lwr         t7,0x1C(a1)
  00408974: 88AF001F lwl         t7,0x1F(a1)
  00408978: AC880000 sw          t0,0(a0)
  0040897C: AC890004 sw          t1,4(a0)
  00408980: AC8A0008 sw          t2,8(a0)
  00408984: AC8B000C sw          t3,0xC(a0)
  00408988: AC8C0010 sw          t4,0x10(a0)
  0040898C: AC8D0014 sw          t5,0x14(a0)
  00408990: AC8E0018 sw          t6,0x18(a0)
  00408994: AC8F001C sw          t7,0x1C(a0)
  00408998: 24840020 addiu       a0,a0,0x20
  0040899C: 1498FFE6 bne         t8,a0,00408938
  004089A0: 24A50020 addiu       a1,a1,0x20
  004089A4: 30C80003 andi        t0,a2,3
  004089A8: 00C84823 subu        t1,a2,t0
  004089AC: 10090008 beq         t1,zero,004089D0
  004089B0: 00895021 addu        t2,a0,t1
  004089B4: 01003025 or          a2,t0,zero
  004089B8: 98A80000 lwr         t0,0(a1)
  004089BC: 88A80003 lwl         t0,3(a1)
  004089C0: 24840004 addiu       a0,a0,4
  004089C4: AC88FFFC sw          t0,0xFFFC(a0)
  004089C8: 148AFFFB bne         t2,a0,004089B8
  004089CC: 24A50004 addiu       a1,a1,4
  004089D0: 10060006 beq         a2,zero,004089EC
  004089D4: 00865021 addu        t2,a0,a2
  004089D8: 80A80000 lb          t0,0(a1)
  004089DC: 24840001 addiu       a0,a0,1
  004089E0: A088FFFF sb          t0,0xFFFF(a0)
  004089E4: 148AFFFC bne         t2,a0,004089D8
  004089E8: 24A50001 addiu       a1,a1,1
  004089EC: 03E00008 jr          ra
  004089F0: 00000000 nop
  004089F4: 2CC80004 sltiu       t0,a2,4
  004089F8: 00862021 addu        a0,a0,a2
  004089FC: 14080059 bne         t0,zero,00408B64
  00408A00: 00A62821 addu        a1,a1,a2
  00408A04: 00854026 xor         t0,a0,a1
  00408A08: 31080003 andi        t0,t0,3
  00408A0C: 1408005E bne         t0,zero,00408B88
  00408A10: 30880003 andi        t0,a0,3
  00408A14: 10080005 beq         t0,zero,00408A2C
  00408A18: 00C83023 subu        a2,a2,t0
  00408A1C: 88A9FFFF lwl         t1,0xFFFF(a1)
  00408A20: 00A82823 subu        a1,a1,t0
  00408A24: A889FFFF swl         t1,0xFFFF(a0)
  00408A28: 00882023 subu        a0,a0,t0
  00408A2C: 30C8001F andi        t0,a2,0x1F
  00408A30: 00C84823 subu        t1,a2,t0
  00408A34: 10090041 beq         t1,zero,00408B3C
  00408A38: 0089C023 subu        t8,a0,t1
  00408A3C: 01003025 or          a2,t0,zero
  00408A40: 30880004 andi        t0,a0,4
  00408A44: 50080009 beql        t0,zero,00408A6C
  00408A48: 30A80004 andi        t0,a1,4
  00408A4C: 8CA8FFFC lw          t0,0xFFFC(a1)
  00408A50: 00C93021 addu        a2,a2,t1
  00408A54: 24A5FFFC addiu       a1,a1,0xFFFC
  00408A58: 2484FFFC addiu       a0,a0,0xFFFC
  00408A5C: 24C6FFFC addiu       a2,a2,0xFFFC
  00408A60: 1000FFF2 b           00408A2C
  00408A64: AC880000 sw          t0,0(a0)
  00408A68: 30A80004 andi        t0,a1,4
  00408A6C: 50080013 beql        t0,zero,00408ABC
  00408A70: 31280020 andi        t0,t1,0x20
  00408A74: C4A1FFFC lwc1        93181,0xFFFC(a1)
  00408A78: C4A0FFF8 lwc1        93180,0xFFF8(a1)
  00408A7C: C4A3FFF4 lwc1        93183,0xFFF4(a1)
  00408A80: C4A2FFF0 lwc1        93182,0xFFF0(a1)
  00408A84: C4A5FFEC lwc1        93185,0xFFEC(a1)
  00408A88: C4A4FFE8 lwc1        93184,0xFFE8(a1)
  00408A8C: C4A7FFE4 lwc1        93187,0xFFE4(a1)
  00408A90: C4A6FFE0 lwc1        93186,0xFFE0(a1)
  00408A94: F480FFF8 sdc1        93180,0xFFF8(a0)
  00408A98: F482FFF0 sdc1        93182,0xFFF0(a0)
  00408A9C: F484FFE8 sdc1        93184,0xFFE8(a0)
  00408AA0: F486FFE0 sdc1        93186,0xFFE0(a0)
  00408AA4: 2484FFE0 addiu       a0,a0,0xFFE0
  00408AA8: 1498FFF2 bne         t8,a0,00408A74
  00408AAC: 24A5FFE0 addiu       a1,a1,0xFFE0
  00408AB0: 10000023 b           00408B40
  00408AB4: 30C80003 andi        t0,a2,3
  00408AB8: 31280020 andi        t0,t1,0x20
  00408ABC: 5008000D beql        t0,zero,00408AF4
  00408AC0: D4A0FFF8 ldc1        93180,0xFFF8(a1)
  00408AC4: D4A0FFF8 ldc1        93180,0xFFF8(a1)
  00408AC8: D4A2FFF0 ldc1        93182,0xFFF0(a1)
  00408ACC: D4A4FFE8 ldc1        93184,0xFFE8(a1)
  00408AD0: D4A6FFE0 ldc1        93186,0xFFE0(a1)
  00408AD4: F480FFF8 sdc1        93180,0xFFF8(a0)
  00408AD8: F482FFF0 sdc1        93182,0xFFF0(a0)
  00408ADC: F484FFE8 sdc1        93184,0xFFE8(a0)
  00408AE0: F486FFE0 sdc1        93186,0xFFE0(a0)
  00408AE4: 2484FFE0 addiu       a0,a0,0xFFE0
  00408AE8: 10980014 beq         t8,a0,00408B3C
  00408AEC: 24A5FFE0 addiu       a1,a1,0xFFE0
  00408AF0: D4A0FFF8 ldc1        93180,0xFFF8(a1)
  00408AF4: D4A2FFF0 ldc1        93182,0xFFF0(a1)
  00408AF8: D4A4FFE8 ldc1        93184,0xFFE8(a1)
  00408AFC: D4A6FFE0 ldc1        93186,0xFFE0(a1)
  00408B00: D4A8FFD8 ldc1        93188,0xFFD8(a1)
  00408B04: D4AAFFD0 ldc1        931810,0xFFD0(a1)
  00408B08: D4ACFFC8 ldc1        931812,0xFFC8(a1)
  00408B0C: D4AEFFC0 ldc1        931814,0xFFC0(a1)
  00408B10: F480FFF8 sdc1        93180,0xFFF8(a0)
  00408B14: F482FFF0 sdc1        93182,0xFFF0(a0)
  00408B18: F484FFE8 sdc1        93184,0xFFE8(a0)
  00408B1C: F486FFE0 sdc1        93186,0xFFE0(a0)
  00408B20: F488FFD8 sdc1        93188,0xFFD8(a0)
  00408B24: F48AFFD0 sdc1        931810,0xFFD0(a0)
  00408B28: F48CFFC8 sdc1        931812,0xFFC8(a0)
  00408B2C: F48EFFC0 sdc1        931814,0xFFC0(a0)
  00408B30: 2484FFC0 addiu       a0,a0,0xFFC0
  00408B34: 1498FFEE bne         t8,a0,00408AF0
  00408B38: 24A5FFC0 addiu       a1,a1,0xFFC0
  00408B3C: 30C80003 andi        t0,a2,3
  00408B40: 00C84823 subu        t1,a2,t0
  00408B44: 10090007 beq         t1,zero,00408B64
  00408B48: 00895023 subu        t2,a0,t1
  00408B4C: 01003025 or          a2,t0,zero
  00408B50: 8CA8FFFC lw          t0,0xFFFC(a1)
  00408B54: 2484FFFC addiu       a0,a0,0xFFFC
  00408B58: AC880000 sw          t0,0(a0)
  00408B5C: 148AFFFC bne         t2,a0,00408B50
  00408B60: 24A5FFFC addiu       a1,a1,0xFFFC
  00408B64: 10060006 beq         a2,zero,00408B80
  00408B68: 00865023 subu        t2,a0,a2
  00408B6C: 80A8FFFF lb          t0,0xFFFF(a1)
  00408B70: 2484FFFF addiu       a0,a0,0xFFFF
  00408B74: A0880000 sb          t0,0(a0)
  00408B78: 148AFFFC bne         t2,a0,00408B6C
  00408B7C: 24A5FFFF addiu       a1,a1,0xFFFF
  00408B80: 03E00008 jr          ra
  00408B84: 00000000 nop
  00408B88: 30880003 andi        t0,a0,3
  00408B8C: 10080006 beq         t0,zero,00408BA8
  00408B90: 00C83023 subu        a2,a2,t0
  00408B94: 88A9FFFF lwl         t1,0xFFFF(a1)
  00408B98: 98A9FFFC lwr         t1,0xFFFC(a1)
  00408B9C: 00A82823 subu        a1,a1,t0
  00408BA0: A889FFFF swl         t1,0xFFFF(a0)
  00408BA4: 00882023 subu        a0,a0,t0
  00408BA8: 30C8001F andi        t0,a2,0x1F
  00408BAC: 00C84823 subu        t1,a2,t0
  00408BB0: 1009001D beq         t1,zero,00408C28
  00408BB4: 0089C023 subu        t8,a0,t1
  00408BB8: 01003025 or          a2,t0,zero
  00408BBC: 98A8FFFC lwr         t0,0xFFFC(a1)
  00408BC0: 88A8FFFF lwl         t0,0xFFFF(a1)
  00408BC4: 98A9FFF8 lwr         t1,0xFFF8(a1)
  00408BC8: 88A9FFFB lwl         t1,0xFFFB(a1)
  00408BCC: 98AAFFF4 lwr         t2,0xFFF4(a1)
  00408BD0: 88AAFFF7 lwl         t2,0xFFF7(a1)
  00408BD4: 98ABFFF0 lwr         t3,0xFFF0(a1)
  00408BD8: 88ABFFF3 lwl         t3,0xFFF3(a1)
  00408BDC: 98ACFFEC lwr         t4,0xFFEC(a1)
  00408BE0: 88ACFFEF lwl         t4,0xFFEF(a1)
  00408BE4: 98ADFFE8 lwr         t5,0xFFE8(a1)
  00408BE8: 88ADFFEB lwl         t5,0xFFEB(a1)
  00408BEC: 98AEFFE4 lwr         t6,0xFFE4(a1)
  00408BF0: 88AEFFE7 lwl         t6,0xFFE7(a1)
  00408BF4: 98AFFFE0 lwr         t7,0xFFE0(a1)
  00408BF8: 88AFFFE3 lwl         t7,0xFFE3(a1)
  00408BFC: AC88FFFC sw          t0,0xFFFC(a0)
  00408C00: AC89FFF8 sw          t1,0xFFF8(a0)
  00408C04: AC8AFFF4 sw          t2,0xFFF4(a0)
  00408C08: AC8BFFF0 sw          t3,0xFFF0(a0)
  00408C0C: AC8CFFEC sw          t4,0xFFEC(a0)
  00408C10: AC8DFFE8 sw          t5,0xFFE8(a0)
  00408C14: AC8EFFE4 sw          t6,0xFFE4(a0)
  00408C18: AC8FFFE0 sw          t7,0xFFE0(a0)
  00408C1C: 2484FFE0 addiu       a0,a0,0xFFE0
  00408C20: 1498FFE6 bne         t8,a0,00408BBC
  00408C24: 24A5FFE0 addiu       a1,a1,0xFFE0
  00408C28: 30C80003 andi        t0,a2,3
  00408C2C: 00C84823 subu        t1,a2,t0
  00408C30: 10090008 beq         t1,zero,00408C54
  00408C34: 00895023 subu        t2,a0,t1
  00408C38: 01003025 or          a2,t0,zero
  00408C3C: 98A8FFFC lwr         t0,0xFFFC(a1)
  00408C40: 88A8FFFF lwl         t0,0xFFFF(a1)
  00408C44: 2484FFFC addiu       a0,a0,0xFFFC
  00408C48: AC880000 sw          t0,0(a0)
  00408C4C: 148AFFFB bne         t2,a0,00408C3C
  00408C50: 24A5FFFC addiu       a1,a1,0xFFFC
  00408C54: 10060006 beq         a2,zero,00408C70
  00408C58: 00865023 subu        t2,a0,a2
  00408C5C: 80A8FFFF lb          t0,0xFFFF(a1)
  00408C60: 2484FFFF addiu       a0,a0,0xFFFF
  00408C64: A0880000 sb          t0,0(a0)
  00408C68: 148AFFFC bne         t2,a0,00408C5C
  00408C6C: 24A5FFFF addiu       a1,a1,0xFFFF
  00408C70: 03E00008 jr          ra
  00408C74: 00000000 nop
memset:
  00408C78: 00A03825 or          a3,a1,zero
  00408C7C: 00C02825 or          a1,a2,zero
  00408C80: 00E03025 or          a2,a3,zero
  00408C84: 30C600FF andi        a2,a2,0xFF
  00408C88: 00064200 sll         t0,a2,8
  00408C8C: 00C83025 or          a2,a2,t0
  00408C90: 00064400 sll         t0,a2,0x10
  00408C94: 00C83025 or          a2,a2,t0
  00408C98: 00044023 subu        t0,zero,a0
  00408C9C: 31080003 andi        t0,t0,3
  00408CA0: 00A84823 subu        t1,a1,t0
  00408CA4: 1920002F blez        t1,00408D64
  00408CA8: 00801025 or          v0,a0,zero
  00408CAC: 10080003 beq         t0,zero,00408CBC
  00408CB0: 01202825 or          a1,t1,zero
  00408CB4: B8860000 swr         a2,0(a0)
  00408CB8: 00882021 addu        a0,a0,t0
  00408CBC: 30A8001F andi        t0,a1,0x1F
  00408CC0: 00A84823 subu        t1,a1,t0
  00408CC4: 1009001F beq         t1,zero,00408D44
  00408CC8: 00895021 addu        t2,a0,t1
  00408CCC: 01002825 or          a1,t0,zero
  00408CD0: 30880004 andi        t0,a0,4
  00408CD4: 50080007 beql        t0,zero,00408CF4
  00408CD8: 44860000 mtc1        a2,93180
  00408CDC: 00A92821 addu        a1,a1,t1
  00408CE0: AC860000 sw          a2,0(a0)
  00408CE4: 24840004 addiu       a0,a0,4
  00408CE8: 1000FFF4 b           00408CBC
  00408CEC: 24A5FFFC addiu       a1,a1,0xFFFC
  00408CF0: 44860000 mtc1        a2,93180
  00408CF4: 44860800 mtc1        a2,93181
  00408CF8: 31280020 andi        t0,t1,0x20
  00408CFC: 50080008 beql        t0,zero,00408D20
  00408D00: F4800000 sdc1        93180,0(a0)
  00408D04: F4800000 sdc1        93180,0(a0)
  00408D08: F4800008 sdc1        93180,8(a0)
  00408D0C: F4800010 sdc1        93180,0x10(a0)
  00408D10: 24840020 addiu       a0,a0,0x20
  00408D14: 108A000B beq         t2,a0,00408D44
  00408D18: F480FFF8 sdc1        93180,0xFFF8(a0)
  00408D1C: F4800000 sdc1        93180,0(a0)
  00408D20: F4800008 sdc1        93180,8(a0)
  00408D24: F4800010 sdc1        93180,0x10(a0)
  00408D28: F4800018 sdc1        93180,0x18(a0)
  00408D2C: F4800020 sdc1        93180,0x20(a0)
  00408D30: F4800028 sdc1        93180,0x28(a0)
  00408D34: F4800030 sdc1        93180,0x30(a0)
  00408D38: 24840040 addiu       a0,a0,0x40
  00408D3C: 148AFFF7 bne         t2,a0,00408D1C
  00408D40: F480FFF8 sdc1        93180,0xFFF8(a0)
  00408D44: 30A80003 andi        t0,a1,3
  00408D48: 00A84823 subu        t1,a1,t0
  00408D4C: 10090005 beq         t1,zero,00408D64
  00408D50: 00895021 addu        t2,a0,t1
  00408D54: 01002825 or          a1,t0,zero
  00408D58: 24840004 addiu       a0,a0,4
  00408D5C: 148AFFFE bne         t2,a0,00408D58
  00408D60: AC86FFFC sw          a2,0xFFFC(a0)
  00408D64: 10050004 beq         a1,zero,00408D78
  00408D68: 00855021 addu        t2,a0,a1
  00408D6C: 24840001 addiu       a0,a0,1
  00408D70: 148AFFFE bne         t2,a0,00408D6C
  00408D74: A086FFFF sb          a2,0xFFFF(a0)
  00408D78: 03E00008 jr          ra
  00408D7C: 00000000 nop
strlen:
  00408D80: 2482FFFF addiu       v0,a0,0xFFFF
  00408D84: 90430001 lbu         v1,1(v0)
  00408D88: 20420001 addi        v0,v0,1
  00408D8C: 5460FFFE bnel        zero,v1,00408D88
  00408D90: 90430001 lbu         v1,1(v0)
  00408D94: 03E00008 jr          ra
  00408D98: 00441023 subu        v0,v0,a0
wcslen:
  00408D9C: 94820000 lhu         v0,0(a0)
  00408DA0: 24830002 addiu       v1,a0,2
  00408DA4: 50400006 beql        zero,v0,00408DC0
  00408DA8: 00641023 subu        v0,v1,a0
  00408DAC: 94620000 lhu         v0,0(v1)
  00408DB0: 24630002 addiu       v1,v1,2
  00408DB4: 5440FFFE bnel        zero,v0,00408DB0
  00408DB8: 94620000 lhu         v0,0(v1)
  00408DBC: 00641023 subu        v0,v1,a0
  00408DC0: 00021043 sra         v0,v0,1
  00408DC4: 03E00008 jr          ra
  00408DC8: 2442FFFF addiu       v0,v0,0xFFFF
strcpy:
  00408DCC: 00801025 or          v0,a0,zero
  00408DD0: 80A80000 lb          t0,0(a1)
  00408DD4: 348D0003 ori         t5,a0,3
  00408DD8: 11000024 beq         zero,t0,00408E6C
  00408DDC: 01A47022 sub         t6,t5,a0
  00408DE0: 80A90001 lb          t1,1(a1)
  00408DE4: 00AE7820 add         t7,a1,t6
  00408DE8: 1120001F beq         zero,t1,00408E68
  00408DEC: 00000000 nop
  00408DF0: 80AA0002 lb          t2,2(a1)
  00408DF4: 00000000 nop
  00408DF8: 1140001A beq         zero,t2,00408E64
  00408DFC: 98AC0000 lwr         t4,0(a1)
  00408E00: 80AB0003 lb          t3,3(a1)
  00408E04: 88AC0003 lwl         t4,3(a1)
  00408E08: 11600014 beq         zero,t3,00408E5C
  00408E0C: B88C0000 swr         t4,0(a0)
  00408E10: 25A4FFFD addiu       a0,t5,0xFFFD
  00408E14: 81E80001 lb          t0,1(t7)
  00408E18: 25EF0004 addiu       t7,t7,4
  00408E1C: 11000013 beq         zero,t0,00408E6C
  00408E20: 24840004 addiu       a0,a0,4
  00408E24: 81E9FFFE lb          t1,0xFFFE(t7)
  00408E28: 00000000 nop
  00408E2C: 1120000E beq         zero,t1,00408E68
  00408E30: 00000000 nop
  00408E34: 81EAFFFF lb          t2,0xFFFF(t7)
  00408E38: 00000000 nop
  00408E3C: 11400009 beq         zero,t2,00408E64
  00408E40: 99ECFFFD lwr         t4,0xFFFD(t7)
  00408E44: 81EB0000 lb          t3,0(t7)
  00408E48: 89EC0000 lwl         t4,0(t7)
  00408E4C: 1560FFF1 bne         zero,t3,00408E14
  00408E50: AC8C0000 sw          t4,0(a0)
  00408E54: 03E00008 jr          ra
  00408E58: 00000000 nop
  00408E5C: 03E00008 jr          ra
  00408E60: A88C0003 swl         t4,3(a0)
  00408E64: A08A0002 sb          t2,2(a0)
  00408E68: A0890001 sb          t1,1(a0)
  00408E6C: 03E00008 jr          ra
  00408E70: A0880000 sb          t0,0(a0)
strncpy:
  00408E74: 10C00012 beq         zero,a2,00408EC0
  00408E78: 00801825 or          v1,a0,zero
  00408E7C: 80AE0000 lb          t6,0(a1)
  00408E80: 24840001 addiu       a0,a0,1
  00408E84: 24A50001 addiu       a1,a1,1
  00408E88: A08EFFFF sb          t6,0xFFFF(a0)
  00408E8C: 8082FFFF lb          v0,0xFFFF(a0)
  00408E90: 1040000B beq         zero,v0,00408EC0
  00408E94: 00000000 nop
  00408E98: 24C6FFFF addiu       a2,a2,0xFFFF
  00408E9C: 10C00008 beq         zero,a2,00408EC0
  00408EA0: 00000000 nop
  00408EA4: 80AF0000 lb          t7,0(a1)
  00408EA8: 24840001 addiu       a0,a0,1
  00408EAC: 24A50001 addiu       a1,a1,1
  00408EB0: A08FFFFF sb          t7,0xFFFF(a0)
  00408EB4: 8082FFFF lb          v0,0xFFFF(a0)
  00408EB8: 5440FFF8 bnel        zero,v0,00408E9C
  00408EBC: 24C6FFFF addiu       a2,a2,0xFFFF
  00408EC0: 10C00013 beq         zero,a2,00408F10
  00408EC4: 24C6FFFF addiu       a2,a2,0xFFFF
  00408EC8: 10C00011 beq         zero,a2,00408F10
  00408ECC: 30C50003 andi        a1,a2,3
  00408ED0: 00052823 subu        a1,zero,a1
  00408ED4: 10A00007 beq         zero,a1,00408EF4
  00408ED8: 00A61021 addu        v0,a1,a2
  00408EDC: 24C6FFFF addiu       a2,a2,0xFFFF
  00408EE0: A0800000 sb          zero,0(a0)
  00408EE4: 1446FFFD bne         a2,v0,00408EDC
  00408EE8: 24840001 addiu       a0,a0,1
  00408EEC: 10C00008 beq         zero,a2,00408F10
  00408EF0: 00000000 nop
  00408EF4: 24C6FFFC addiu       a2,a2,0xFFFC
  00408EF8: A0800000 sb          zero,0(a0)
  00408EFC: A0800001 sb          zero,1(a0)
  00408F00: A0800002 sb          zero,2(a0)
  00408F04: A0800003 sb          zero,3(a0)
  00408F08: 14C0FFFA bne         zero,a2,00408EF4
  00408F0C: 24840004 addiu       a0,a0,4
  00408F10: 03E00008 jr          ra
  00408F14: 00601025 or          v0,v1,zero
strcat:
  00408F18: 00801025 or          v0,a0,zero
  00408F1C: 80880000 lb          t0,0(a0)
  00408F20: 00000000 nop
  00408F24: 1500FFFD bne         zero,t0,00408F1C
  00408F28: 20840001 addi        a0,a0,1
  00408F2C: 2084FFFF addi        a0,a0,0xFFFF
  00408F30: 80A80000 lb          t0,0(a1)
  00408F34: 348D0003 ori         t5,a0,3
  00408F38: 11000024 beq         zero,t0,00408FCC
  00408F3C: 01A47022 sub         t6,t5,a0
  00408F40: 80A90001 lb          t1,1(a1)
  00408F44: 00AE7820 add         t7,a1,t6
  00408F48: 1120001F beq         zero,t1,00408FC8
  00408F4C: 00000000 nop
  00408F50: 80AA0002 lb          t2,2(a1)
  00408F54: 00000000 nop
  00408F58: 1140001A beq         zero,t2,00408FC4
  00408F5C: 98AC0000 lwr         t4,0(a1)
  00408F60: 80AB0003 lb          t3,3(a1)
  00408F64: 88AC0003 lwl         t4,3(a1)
  00408F68: 11600014 beq         zero,t3,00408FBC
  00408F6C: B88C0000 swr         t4,0(a0)
  00408F70: 25A4FFFD addiu       a0,t5,0xFFFD
  00408F74: 81E80001 lb          t0,1(t7)
  00408F78: 25EF0004 addiu       t7,t7,4
  00408F7C: 11000013 beq         zero,t0,00408FCC
  00408F80: 24840004 addiu       a0,a0,4
  00408F84: 81E9FFFE lb          t1,0xFFFE(t7)
  00408F88: 00000000 nop
  00408F8C: 1120000E beq         zero,t1,00408FC8
  00408F90: 00000000 nop
  00408F94: 81EAFFFF lb          t2,0xFFFF(t7)
  00408F98: 00000000 nop
  00408F9C: 11400009 beq         zero,t2,00408FC4
  00408FA0: 99ECFFFD lwr         t4,0xFFFD(t7)
  00408FA4: 81EB0000 lb          t3,0(t7)
  00408FA8: 89EC0000 lwl         t4,0(t7)
  00408FAC: 1560FFF1 bne         zero,t3,00408F74
  00408FB0: AC8C0000 sw          t4,0(a0)
  00408FB4: 03E00008 jr          ra
  00408FB8: 00000000 nop
  00408FBC: 03E00008 jr          ra
  00408FC0: A88C0003 swl         t4,3(a0)
  00408FC4: A08A0002 sb          t2,2(a0)
  00408FC8: A0890001 sb          t1,1(a0)
  00408FCC: 03E00008 jr          ra
  00408FD0: A0880000 sb          t0,0(a0)
__crtMessageBoxA:
  00408FD4: 27BDFFD8 addiu       sp,sp,0xFFD8
  00408FD8: AFBF001C sw          ra,0x1C(sp)
  00408FDC: AFB00018 sw          s0,0x18(sp)
  00408FE0: AFA40028 sw          a0,0x28(sp)
  00408FE4: AFA5002C sw          a1,0x2C(sp)
  00408FE8: AFA60030 sw          a2,0x30(sp)
  00408FEC: 3C0E0041 lui         t6,0x41
  00408FF0: 8DCEE9DC lw          t6,0xE9DC(t6)
  00408FF4: 00008025 or          s0,zero,zero
  00408FF8: 3C0F0041 lui         t7,0x41
  00408FFC: 15C00023 bne         zero,t6,0040908C
  00409000: 00000000 nop
  00409004: 8DEF124C lw          t7,0x124C(t7)
  00409008: 3C040041 lui         a0,0x41
  0040900C: 2484D508 addiu       a0,a0,0xD508
  00409010: 01E0F809 jalr        ra,t7
  00409014: 00000000 nop
  00409018: 1040000A beq         zero,v0,00409044
  0040901C: 00402025 or          a0,v0,zero
  00409020: 3C180041 lui         t8,0x41
  00409024: 8F181250 lw          t8,0x1250(t8)
  00409028: 3C050041 lui         a1,0x41
  0040902C: 24A5D4FC addiu       a1,a1,0xD4FC
  00409030: 0300F809 jalr        ra,t8
  00409034: AFA20020 sw          v0,0x20(sp)
  00409038: 3C010041 lui         at,0x41
  0040903C: 14400003 bne         zero,v0,0040904C
  00409040: AC22E9DC sw          v0,0xE9DC(at)
  00409044: 10000027 b           004090E4
  00409048: 00001025 or          v0,zero,zero
  0040904C: 3C190041 lui         t9,0x41
  00409050: 8F391250 lw          t9,0x1250(t9)
  00409054: 3C050041 lui         a1,0x41
  00409058: 24A5D4EC addiu       a1,a1,0xD4EC
  0040905C: 0320F809 jalr        ra,t9
  00409060: 8FA40020 lw          a0,0x20(sp)
  00409064: 3C080041 lui         t0,0x41
  00409068: 8D081250 lw          t0,0x1250(t0)
  0040906C: 3C010041 lui         at,0x41
  00409070: 3C050041 lui         a1,0x41
  00409074: AC22E9E0 sw          v0,0xE9E0(at)
  00409078: 24A5D4D8 addiu       a1,a1,0xD4D8
  0040907C: 0100F809 jalr        ra,t0
  00409080: 8FA40020 lw          a0,0x20(sp)
  00409084: 3C010041 lui         at,0x41
  00409088: AC22E9E4 sw          v0,0xE9E4(at)
  0040908C: 3C090041 lui         t1,0x41
  00409090: 8D29E9E0 lw          t1,0xE9E0(t1)
  00409094: 11200004 beq         zero,t1,004090A8
  00409098: 00000000 nop
  0040909C: 0120F809 jalr        ra,t1
  004090A0: 00000000 nop
  004090A4: 00408025 or          s0,v0,zero
  004090A8: 12000007 beq         zero,s0,004090C8
  004090AC: 3C0A0041 lui         t2,0x41
  004090B0: 8D4AE9E4 lw          t2,0xE9E4(t2)
  004090B4: 11400004 beq         zero,t2,004090C8
  004090B8: 00000000 nop
  004090BC: 0140F809 jalr        ra,t2
  004090C0: 02002025 or          a0,s0,zero
  004090C4: 00408025 or          s0,v0,zero
  004090C8: 3C0B0041 lui         t3,0x41
  004090CC: 8D6BE9DC lw          t3,0xE9DC(t3)
  004090D0: 02002025 or          a0,s0,zero
  004090D4: 8FA50028 lw          a1,0x28(sp)
  004090D8: 8FA6002C lw          a2,0x2C(sp)
  004090DC: 0160F809 jalr        ra,t3
  004090E0: 8FA70030 lw          a3,0x30(sp)
  004090E4: 8FB00018 lw          s0,0x18(sp)
  004090E8: 8FBF001C lw          ra,0x1C(sp)
  004090EC: 03E00008 jr          ra
  004090F0: 27BD0028 addiu       sp,sp,0x28
_forcdecpt:
  004090F4: 27BDFFE0 addiu       sp,sp,0xFFE0
  004090F8: AFB00018 sw          s0,0x18(sp)
  004090FC: 00808025 or          s0,a0,zero
  00409100: AFBF001C sw          ra,0x1C(sp)
  00409104: 0C102662 jal         tolower
  00409108: 82040000 lb          a0,0(s0)
  0040910C: 24010065 addiu       at,zero,0x65
  00409110: 10410014 beq         at,v0,00409164
  00409114: 00000000 nop
  00409118: 3C0E0041 lui         t6,0x41
  0040911C: 8DCEEA10 lw          t6,0xEA10(t6)
  00409120: 26100001 addiu       s0,s0,1
  00409124: 3C0F0041 lui         t7,0x41
  00409128: 29C10002 slti        at,t6,2
  0040912C: 14200005 bne         zero,at,00409144
  00409130: 24050004 addiu       a1,zero,4
  00409134: 0C1026AF jal         _isctype
  00409138: 82040000 lb          a0,0(s0)
  0040913C: 10000007 b           0040915C
  00409140: 00401825 or          v1,v0,zero
  00409144: 82180000 lb          t8,0(s0)
  00409148: 8DEFE7D0 lw          t7,0xE7D0(t7)
  0040914C: 0018C840 sll         t9,t8,1
  00409150: 01F94021 addu        t0,t7,t9
  00409154: 95030000 lhu         v1,0(t0)
  00409158: 30630004 andi        v1,v1,4
  0040915C: 1460FFEE bne         zero,v1,00409118
  00409160: 00000000 nop
  00409164: 3C090041 lui         t1,0x41
  00409168: 8129EA14 lb          t1,0xEA14(t1)
  0040916C: 82040000 lb          a0,0(s0)
  00409170: 26100001 addiu       s0,s0,1
  00409174: A209FFFF sb          t1,0xFFFF(s0)
  00409178: 82020000 lb          v0,0(s0)
  0040917C: A2040000 sb          a0,0(s0)
  00409180: 82030000 lb          v1,0(s0)
  00409184: 00022600 sll         a0,v0,0x18
  00409188: 00042603 sra         a0,a0,0x18
  0040918C: 1460FFFA bne         zero,v1,00409178
  00409190: 26100001 addiu       s0,s0,1
  00409194: 8FB00018 lw          s0,0x18(sp)
  00409198: 8FBF001C lw          ra,0x1C(sp)
  0040919C: 03E00008 jr          ra
  004091A0: 27BD0020 addiu       sp,sp,0x20
_cropzeros:
  004091A4: 80820000 lb          v0,0(a0)
  004091A8: 3C0E0041 lui         t6,0x41
  004091AC: 3C180041 lui         t8,0x41
  004091B0: 5040000D beql        zero,v0,004091E8
  004091B4: 00021E00 sll         v1,v0,0x18
  004091B8: 81CEEA14 lb          t6,0xEA14(t6)
  004091BC: 51C2000A beql        v0,t6,004091E8
  004091C0: 00021E00 sll         v1,v0,0x18
  004091C4: 80820001 lb          v0,1(a0)
  004091C8: 24840001 addiu       a0,a0,1
  004091CC: 3C0F0041 lui         t7,0x41
  004091D0: 50400005 beql        zero,v0,004091E8
  004091D4: 00021E00 sll         v1,v0,0x18
  004091D8: 81EFEA14 lb          t7,0xEA14(t7)
  004091DC: 55E2FFFA bnel        v0,t7,004091C8
  004091E0: 80820001 lb          v0,1(a0)
  004091E4: 00021E00 sll         v1,v0,0x18
  004091E8: 00031E03 sra         v1,v1,0x18
  004091EC: 1060002C beq         zero,v1,004092A0
  004091F0: 24840001 addiu       a0,a0,1
  004091F4: 80820000 lb          v0,0(a0)
  004091F8: 24030065 addiu       v1,zero,0x65
  004091FC: 5040000E beql        zero,v0,00409238
  00409200: 8082FFFF lb          v0,0xFFFF(a0)
  00409204: 1062000B beq         v0,v1,00409234
  00409208: 24050045 addiu       a1,zero,0x45
  0040920C: 50A2000A beql        v0,a1,00409238
  00409210: 8082FFFF lb          v0,0xFFFF(a0)
  00409214: 80820001 lb          v0,1(a0)
  00409218: 24840001 addiu       a0,a0,1
  0040921C: 50400006 beql        zero,v0,00409238
  00409220: 8082FFFF lb          v0,0xFFFF(a0)
  00409224: 50620004 beql        v0,v1,00409238
  00409228: 8082FFFF lb          v0,0xFFFF(a0)
  0040922C: 54A2FFFA bnel        v0,a1,00409218
  00409230: 80820001 lb          v0,1(a0)
  00409234: 8082FFFF lb          v0,0xFFFF(a0)
  00409238: 24050030 addiu       a1,zero,0x30
  0040923C: 00801825 or          v1,a0,zero
  00409240: 14A20005 bne         v0,a1,00409258
  00409244: 2484FFFF addiu       a0,a0,0xFFFF
  00409248: 8082FFFF lb          v0,0xFFFF(a0)
  0040924C: 2484FFFF addiu       a0,a0,0xFFFF
  00409250: 50A2FFFE beql        v0,a1,0040924C
  00409254: 8082FFFF lb          v0,0xFFFF(a0)
  00409258: 8318EA14 lb          t8,0xEA14(t8)
  0040925C: 57020003 bnel        v0,t8,0040926C
  00409260: 80790000 lb          t9,0(v1)
  00409264: 2484FFFF addiu       a0,a0,0xFFFF
  00409268: 80790000 lb          t9,0(v1)
  0040926C: 24840001 addiu       a0,a0,1
  00409270: 24630001 addiu       v1,v1,1
  00409274: A0990000 sb          t9,0(a0)
  00409278: 80820000 lb          v0,0(a0)
  0040927C: 10400008 beq         zero,v0,004092A0
  00409280: 00000000 nop
  00409284: 80680000 lb          t0,0(v1)
  00409288: 24840001 addiu       a0,a0,1
  0040928C: 24630001 addiu       v1,v1,1
  00409290: A0880000 sb          t0,0(a0)
  00409294: 80820000 lb          v0,0(a0)
  00409298: 5440FFFB bnel        zero,v0,00409288
  0040929C: 80680000 lb          t0,0(v1)
  004092A0: 03E00008 jr          ra
  004092A4: 00000000 nop
_positive:
  004092A8: D4840000 ldc1        93184,0(a0)
  004092AC: 00001025 or          v0,zero,zero
  004092B0: 44803000 mtc1        zero,93186
  004092B4: 44803800 mtc1        zero,93187
  004092B8: 00000000 nop
  004092BC: 4624303E c.le.d      $f6,$f4
  004092C0: 00000000 nop
  004092C4: 45000002 bc1f        004092D0
  004092C8: 00000000 nop
  004092CC: 24020001 addiu       v0,zero,1
  004092D0: 03E00008 jr          ra
  004092D4: 00000000 nop
_fassign:
  004092D8: 27BDFFD8 addiu       sp,sp,0xFFD8
  004092DC: AFBF0014 sw          ra,0x14(sp)
  004092E0: AFA5002C sw          a1,0x2C(sp)
  004092E4: 1080000D beq         zero,a0,0040931C
  004092E8: 00C02825 or          a1,a2,zero
  004092EC: 27A40020 addiu       a0,sp,0x20
  004092F0: 0C1028A0 jal         _atodbl
  004092F4: 00C02825 or          a1,a2,zero
  004092F8: 27AF0020 addiu       t7,sp,0x20
  004092FC: 8FAE002C lw          t6,0x2C(sp)
  00409300: 8DE10000 lw          at,0(t7)
  00409304: 8DF90004 lw          t9,4(t7)
  00409308: A9C10003 swl         at,3(t6)
  0040930C: A9D90007 swl         t9,7(t6)
  00409310: B9C10000 swr         at,0(t6)
  00409314: 10000008 b           00409338
  00409318: B9D90004 swr         t9,4(t6)
  0040931C: 0C1028C2 jal         _atoflt
  00409320: 27A4001C addiu       a0,sp,0x1C
  00409324: 27A9001C addiu       t1,sp,0x1C
  00409328: 8D210000 lw          at,0(t1)
  0040932C: 8FA8002C lw          t0,0x2C(sp)
  00409330: A9010003 swl         at,3(t0)
  00409334: B9010000 swr         at,0(t0)
  00409338: 8FBF0014 lw          ra,0x14(sp)
  0040933C: 03E00008 jr          ra
  00409340: 27BD0028 addiu       sp,sp,0x28
_cftoe:
  00409344: 27BDFFC8 addiu       sp,sp,0xFFC8
  00409348: AFB00018 sw          s0,0x18(sp)
  0040934C: 00A08025 or          s0,a1,zero
  00409350: AFBF001C sw          ra,0x1C(sp)
  00409354: AFA60040 sw          a2,0x40(sp)
  00409358: AFA70044 sw          a3,0x44(sp)
  0040935C: 3C0E0041 lui         t6,0x41
  00409360: 81CEEA00 lb          t6,0xEA00(t6)
  00409364: 3C020041 lui         v0,0x41
  00409368: 8FA70040 lw          a3,0x40(sp)
  0040936C: 11C0000E beq         zero,t6,004093A8
  00409370: 00000000 nop
  00409374: 8C42EE20 lw          v0,0xEE20(v0)
  00409378: 0007382A slt         a3,zero,a3
  0040937C: 00E02825 or          a1,a3,zero
  00409380: 8C4F0000 lw          t7,0(v0)
  00409384: AFA70020 sw          a3,0x20(sp)
  00409388: AFA20034 sw          v0,0x34(sp)
  0040938C: 39F8002D xori        t8,t7,0x2D
  00409390: 2F180001 sltiu       t8,t8,1
  00409394: 0C102619 jal         _shift
  00409398: 02182021 addu        a0,s0,t8
  0040939C: 8FA30034 lw          v1,0x34(sp)
  004093A0: 10000011 b           004093E8
  004093A4: 8FA70020 lw          a3,0x20(sp)
  004093A8: 0C1028D3 jal         _fltout
  004093AC: D48C0000 ldc1        931812,0(a0)
  004093B0: 8C480000 lw          t0,0(v0)
  004093B4: 8FB90040 lw          t9,0x40(sp)
  004093B8: AFA20034 sw          v0,0x34(sp)
  004093BC: 3909002D xori        t1,t0,0x2D
  004093C0: 2D290001 sltiu       t1,t1,1
  004093C4: 02095021 addu        t2,s0,t1
  004093C8: 0019382A slt         a3,zero,t9
  004093CC: 01472021 addu        a0,t2,a3
  004093D0: AFA70020 sw          a3,0x20(sp)
  004093D4: 00403025 or          a2,v0,zero
  004093D8: 0C102936 jal         _fptostr
  004093DC: 27250001 addiu       a1,t9,1
  004093E0: 8FA30034 lw          v1,0x34(sp)
  004093E4: 8FA70020 lw          a3,0x20(sp)
  004093E8: 8C6B0000 lw          t3,0(v1)
  004093EC: 2405002D addiu       a1,zero,0x2D
  004093F0: 02002025 or          a0,s0,zero
  004093F4: 14AB0003 bne         t3,a1,00409404
  004093F8: 3C180041 lui         t8,0x41
  004093FC: A2050000 sb          a1,0(s0)
  00409400: 26040001 addiu       a0,s0,1
  00409404: 10E00007 beq         zero,a3,00409424
  00409408: 3C090041 lui         t1,0x41
  0040940C: 808C0001 lb          t4,1(a0)
  00409410: 3C0D0041 lui         t5,0x41
  00409414: 24840001 addiu       a0,a0,1
  00409418: A08CFFFF sb          t4,0xFFFF(a0)
  0040941C: 81ADEA14 lb          t5,0xEA14(t5)
  00409420: A08D0000 sb          t5,0(a0)
  00409424: 8FAE0040 lw          t6,0x40(sp)
  00409428: 8318EA00 lb          t8,0xEA00(t8)
  0040942C: 2529D514 addiu       t1,t1,0xD514
  00409430: 89210003 lwl         at,3(t1)
  00409434: 99210000 lwr         at,0(t1)
  00409438: 008E7821 addu        t7,a0,t6
  0040943C: 2F080001 sltiu       t0,t8,1
  00409440: 01E81021 addu        v0,t7,t0
  00409444: A8410003 swl         at,3(v0)
  00409448: B8410000 swr         at,0(v0)
  0040944C: 91210004 lbu         at,4(t1)
  00409450: 00402025 or          a0,v0,zero
  00409454: A0410004 sb          at,4(v0)
  00409458: 912A0005 lbu         t2,5(t1)
  0040945C: A04A0005 sb          t2,5(v0)
  00409460: 8FB90044 lw          t9,0x44(sp)
  00409464: 53200004 beql        zero,t9,00409478
  00409468: 8C6C000C lw          t4,0xC(v1)
  0040946C: 240B0045 addiu       t3,zero,0x45
  00409470: A04B0000 sb          t3,0(v0)
  00409474: 8C6C000C lw          t4,0xC(v1)
  00409478: 24010030 addiu       at,zero,0x30
  0040947C: 24840001 addiu       a0,a0,1
  00409480: 818D0000 lb          t5,0(t4)
  00409484: 51A10037 beql        at,t5,00409564
  00409488: 02001025 or          v0,s0,zero
  0040948C: 8C620004 lw          v0,4(v1)
  00409490: 24030064 addiu       v1,zero,0x64
  00409494: 2442FFFF addiu       v0,v0,0xFFFF
  00409498: 04430004 bgezl       v0,004094AC
  0040949C: 28410064 slti        at,v0,0x64
  004094A0: 00021023 subu        v0,zero,v0
  004094A4: A0850000 sb          a1,0(a0)
  004094A8: 28410064 slti        at,v0,0x64
  004094AC: 14200012 bne         zero,at,004094F8
  004094B0: 24840001 addiu       a0,a0,1
  004094B4: 0043001A div         v0,v1
  004094B8: 808E0000 lb          t6,0(a0)
  004094BC: 14600002 bne         zero,v1,004094C8
  004094C0: 00000000 nop
  004094C4: 0007000D break
  004094C8: 2401FFFF addiu       at,zero,0xFFFF
  004094CC: 14610004 bne         at,v1,004094E0
  004094D0: 3C018000 lui         at,0x8000
  004094D4: 14410002 bne         at,v0,004094E0
  004094D8: 00000000 nop
  004094DC: 0006000D break
  004094E0: 0000C012 mflo        t8
  004094E4: 00187E00 sll         t7,t8,0x18
  004094E8: 000F4603 sra         t0,t7,0x18
  004094EC: 00001010 mfhi        v0
  004094F0: 01C84821 addu        t1,t6,t0
  004094F4: A0890000 sb          t1,0(a0)
  004094F8: 2841000A slti        at,v0,0xA
  004094FC: 14200013 bne         zero,at,0040954C
  00409500: 24840001 addiu       a0,a0,1
  00409504: 2403000A addiu       v1,zero,0xA
  00409508: 0043001A div         v0,v1
  0040950C: 808A0000 lb          t2,0(a0)
  00409510: 14600002 bne         zero,v1,0040951C
  00409514: 00000000 nop
  00409518: 0007000D break
  0040951C: 2401FFFF addiu       at,zero,0xFFFF
  00409520: 14610004 bne         at,v1,00409534
  00409524: 3C018000 lui         at,0x8000
  00409528: 14410002 bne         at,v0,00409534
  0040952C: 00000000 nop
  00409530: 0006000D break
  00409534: 0000C812 mflo        t9
  00409538: 00195E00 sll         t3,t9,0x18
  0040953C: 000B6603 sra         t4,t3,0x18
  00409540: 00001010 mfhi        v0
  00409544: 014C6821 addu        t5,t2,t4
  00409548: A08D0000 sb          t5,0(a0)
  0040954C: 80980001 lb          t8,1(a0)
  00409550: 00407025 or          t6,v0,zero
  00409554: 24840001 addiu       a0,a0,1
  00409558: 030E4021 addu        t0,t8,t6
  0040955C: A0880000 sb          t0,0(a0)
  00409560: 02001025 or          v0,s0,zero
  00409564: 8FB00018 lw          s0,0x18(sp)
  00409568: 8FBF001C lw          ra,0x1C(sp)
  0040956C: 03E00008 jr          ra
  00409570: 27BD0038 addiu       sp,sp,0x38
_cftof:
  00409574: 27BDFFD0 addiu       sp,sp,0xFFD0
  00409578: AFB00018 sw          s0,0x18(sp)
  0040957C: 00C08025 or          s0,a2,zero
  00409580: AFBF001C sw          ra,0x1C(sp)
  00409584: AFA50034 sw          a1,0x34(sp)
  00409588: 3C0E0041 lui         t6,0x41
  0040958C: 81CEEA00 lb          t6,0xEA00(t6)
  00409590: 3C020041 lui         v0,0x41
  00409594: 11C00010 beq         zero,t6,004095D8
  00409598: 00000000 nop
  0040959C: 8C43EE20 lw          v1,0xEE20(v0)
  004095A0: 3C050041 lui         a1,0x41
  004095A4: 8CA5EA04 lw          a1,0xEA04(a1)
  004095A8: 8C780000 lw          t8,0(v1)
  004095AC: 2407002D addiu       a3,zero,0x2D
  004095B0: 8FAF0034 lw          t7,0x34(sp)
  004095B4: 00F8C826 xor         t9,a3,t8
  004095B8: 2F390001 sltiu       t9,t9,1
  004095BC: 14B00015 bne         s0,a1,00409614
  004095C0: 01F92021 addu        a0,t7,t9
  004095C4: 00851021 addu        v0,a0,a1
  004095C8: 24080030 addiu       t0,zero,0x30
  004095CC: A0480000 sb          t0,0(v0)
  004095D0: 10000010 b           00409614
  004095D4: A0400001 sb          zero,1(v0)
  004095D8: 0C1028D3 jal         _fltout
  004095DC: D48C0000 ldc1        931812,0(a0)
  004095E0: 8C4A0000 lw          t2,0(v0)
  004095E4: 2407002D addiu       a3,zero,0x2D
  004095E8: 8FA90034 lw          t1,0x34(sp)
  004095EC: 8C4C0004 lw          t4,4(v0)
  004095F0: 00EA5826 xor         t3,a3,t2
  004095F4: 2D6B0001 sltiu       t3,t3,1
  004095F8: AFA20028 sw          v0,0x28(sp)
  004095FC: 00403025 or          a2,v0,zero
  00409600: 012B2021 addu        a0,t1,t3
  00409604: 0C102936 jal         _fptostr
  00409608: 020C2821 addu        a1,s0,t4
  0040960C: 8FA30028 lw          v1,0x28(sp)
  00409610: 2407002D addiu       a3,zero,0x2D
  00409614: 8C6E0000 lw          t6,0(v1)
  00409618: 8FAD0034 lw          t5,0x34(sp)
  0040961C: 24050001 addiu       a1,zero,1
  00409620: 14EE0003 bne         t6,a3,00409630
  00409624: 01A02025 or          a0,t5,zero
  00409628: A1A70000 sb          a3,0(t5)
  0040962C: 25A40001 addiu       a0,t5,1
  00409630: 8C620004 lw          v0,4(v1)
  00409634: 5C40000B bgtzl       v0,00409664
  00409638: 00822021 addu        a0,a0,v0
  0040963C: AFA30028 sw          v1,0x28(sp)
  00409640: 0C102619 jal         _shift
  00409644: AFA40024 sw          a0,0x24(sp)
  00409648: 8FA40024 lw          a0,0x24(sp)
  0040964C: 8FA30028 lw          v1,0x28(sp)
  00409650: 24180030 addiu       t8,zero,0x30
  00409654: A0980000 sb          t8,0(a0)
  00409658: 10000002 b           00409664
  0040965C: 24840001 addiu       a0,a0,1
  00409660: 00822021 addu        a0,a0,v0
  00409664: 1A00001D blez        s0,004096DC
  00409668: 24050001 addiu       a1,zero,1
  0040966C: AFA30028 sw          v1,0x28(sp)
  00409670: 0C102619 jal         _shift
  00409674: AFA40024 sw          a0,0x24(sp)
  00409678: 3C0F0041 lui         t7,0x41
  0040967C: 8FA40024 lw          a0,0x24(sp)
  00409680: 81EFEA14 lb          t7,0xEA14(t7)
  00409684: 8FA30028 lw          v1,0x28(sp)
  00409688: 3C190041 lui         t9,0x41
  0040968C: A08F0000 sb          t7,0(a0)
  00409690: 8C620004 lw          v0,4(v1)
  00409694: 24840001 addiu       a0,a0,1
  00409698: 04430011 bgezl       v0,004096E0
  0040969C: 8FA20034 lw          v0,0x34(sp)
  004096A0: 8339EA00 lb          t9,0xEA00(t9)
  004096A4: 00021823 subu        v1,zero,v0
  004096A8: 57200005 bnel        zero,t9,004096C0
  004096AC: 00028023 subu        s0,zero,v0
  004096B0: 0203082A slt         at,s0,v1
  004096B4: 54200003 bnel        zero,at,004096C4
  004096B8: 02002825 or          a1,s0,zero
  004096BC: 00608025 or          s0,v1,zero
  004096C0: 02002825 or          a1,s0,zero
  004096C4: 0C102619 jal         _shift
  004096C8: AFA40024 sw          a0,0x24(sp)
  004096CC: 8FA40024 lw          a0,0x24(sp)
  004096D0: 24050030 addiu       a1,zero,0x30
  004096D4: 0C10231E jal         memset
  004096D8: 02003025 or          a2,s0,zero
  004096DC: 8FA20034 lw          v0,0x34(sp)
  004096E0: 8FB00018 lw          s0,0x18(sp)
  004096E4: 8FBF001C lw          ra,0x1C(sp)
  004096E8: 03E00008 jr          ra
  004096EC: 27BD0030 addiu       sp,sp,0x30
_cftog:
  004096F0: 27BDFFE0 addiu       sp,sp,0xFFE0
  004096F4: AFBF0014 sw          ra,0x14(sp)
  004096F8: AFA40020 sw          a0,0x20(sp)
  004096FC: AFA50024 sw          a1,0x24(sp)
  00409700: AFA60028 sw          a2,0x28(sp)
  00409704: AFA7002C sw          a3,0x2C(sp)
  00409708: 8FAE0020 lw          t6,0x20(sp)
  0040970C: 0C1028D3 jal         _fltout
  00409710: D5CC0000 ldc1        931812,0(t6)
  00409714: 3C010041 lui         at,0x41
  00409718: AC22EE20 sw          v0,0xEE20(at)
  0040971C: 8C4F0004 lw          t7,4(v0)
  00409720: 3C010041 lui         at,0x41
  00409724: 8FB90024 lw          t9,0x24(sp)
  00409728: 25F8FFFF addiu       t8,t7,0xFFFF
  0040972C: AC38EA04 sw          t8,0xEA04(at)
  00409730: 8C480000 lw          t0,0(v0)
  00409734: 8FA50028 lw          a1,0x28(sp)
  00409738: 00403025 or          a2,v0,zero
  0040973C: 3909002D xori        t1,t0,0x2D
  00409740: 2D290001 sltiu       t1,t1,1
  00409744: 03292021 addu        a0,t9,t1
  00409748: 0C102936 jal         _fptostr
  0040974C: AFA4001C sw          a0,0x1C(sp)
  00409750: 3C0A0041 lui         t2,0x41
  00409754: 8D4AEE20 lw          t2,0xEE20(t2)
  00409758: 3C0B0041 lui         t3,0x41
  0040975C: 8D6BEA04 lw          t3,0xEA04(t3)
  00409760: 8D420004 lw          v0,4(t2)
  00409764: 3C010041 lui         at,0x41
  00409768: 8FA4001C lw          a0,0x1C(sp)
  0040976C: 2442FFFF addiu       v0,v0,0xFFFF
  00409770: 0162602A slt         t4,t3,v0
  00409774: A02CEA08 sb          t4,0xEA08(at)
  00409778: 3C010041 lui         at,0x41
  0040977C: AC22EA04 sw          v0,0xEA04(at)
  00409780: 2841FFFC slti        at,v0,0xFFFC
  00409784: 8FA50024 lw          a1,0x24(sp)
  00409788: 14200007 bne         zero,at,004097A8
  0040978C: 8FA60028 lw          a2,0x28(sp)
  00409790: 3C0D0041 lui         t5,0x41
  00409794: 8DADEA04 lw          t5,0xEA04(t5)
  00409798: 3C0E0041 lui         t6,0x41
  0040979C: 01A6082A slt         at,t5,a2
  004097A0: 14200006 bne         zero,at,004097BC
  004097A4: 00000000 nop
  004097A8: 8FA40020 lw          a0,0x20(sp)
  004097AC: 0C102636 jal         _cftoe_g
  004097B0: 8FA7002C lw          a3,0x2C(sp)
  004097B4: 10000010 b           004097F8
  004097B8: 8FBF0014 lw          ra,0x14(sp)
  004097BC: 81CEEA08 lb          t6,0xEA08(t6)
  004097C0: 11C0000A beq         zero,t6,004097EC
  004097C4: 00000000 nop
  004097C8: 80820000 lb          v0,0(a0)
  004097CC: 24840001 addiu       a0,a0,1
  004097D0: 50400006 beql        zero,v0,004097EC
  004097D4: A080FFFE sb          zero,0xFFFE(a0)
  004097D8: 80820000 lb          v0,0(a0)
  004097DC: 24840001 addiu       a0,a0,1
  004097E0: 5440FFFE bnel        zero,v0,004097DC
  004097E4: 80820000 lb          v0,0(a0)
  004097E8: A080FFFE sb          zero,0xFFFE(a0)
  004097EC: 0C10262B jal         _cftof_g
  004097F0: 8FA40020 lw          a0,0x20(sp)
  004097F4: 8FBF0014 lw          ra,0x14(sp)
  004097F8: 03E00008 jr          ra
  004097FC: 27BD0020 addiu       sp,sp,0x20
_cfltcvt:
  00409800: 27BDFFE8 addiu       sp,sp,0xFFE8
  00409804: AFBF0014 sw          ra,0x14(sp)
  00409808: AFA70024 sw          a3,0x24(sp)
  0040980C: 24010065 addiu       at,zero,0x65
  00409810: 10C10004 beq         at,a2,00409824
  00409814: 8FA70028 lw          a3,0x28(sp)
  00409818: 24010045 addiu       at,zero,0x45
  0040981C: 54C10006 bnel        at,a2,00409838
  00409820: 24010066 addiu       at,zero,0x66
  00409824: 0C1024D1 jal         _cftoe
  00409828: 8FA60024 lw          a2,0x24(sp)
  0040982C: 1000000B b           0040985C
  00409830: 8FBF0014 lw          ra,0x14(sp)
  00409834: 24010066 addiu       at,zero,0x66
  00409838: 14C10005 bne         at,a2,00409850
  0040983C: 8FA70028 lw          a3,0x28(sp)
  00409840: 0C10255D jal         _cftof
  00409844: 8FA60024 lw          a2,0x24(sp)
  00409848: 10000004 b           0040985C
  0040984C: 8FBF0014 lw          ra,0x14(sp)
  00409850: 0C1025BC jal         _cftog
  00409854: 8FA60024 lw          a2,0x24(sp)
  00409858: 8FBF0014 lw          ra,0x14(sp)
  0040985C: 03E00008 jr          ra
  00409860: 27BD0018 addiu       sp,sp,0x18
_shift:
  00409864: 27BDFFE8 addiu       sp,sp,0xFFE8
  00409868: AFBF0014 sw          ra,0x14(sp)
  0040986C: AFA5001C sw          a1,0x1C(sp)
  00409870: 00803825 or          a3,a0,zero
  00409874: 8FAE001C lw          t6,0x1C(sp)
  00409878: 00E02025 or          a0,a3,zero
  0040987C: 51C00009 beql        zero,t6,004098A4
  00409880: 8FBF0014 lw          ra,0x14(sp)
  00409884: 0C102360 jal         strlen
  00409888: AFA70018 sw          a3,0x18(sp)
  0040988C: 8FA50018 lw          a1,0x18(sp)
  00409890: 8FAF001C lw          t7,0x1C(sp)
  00409894: 24460001 addiu       a2,v0,1
  00409898: 0C1021D5 jal         memmove
  0040989C: 00AF2021 addu        a0,a1,t7
  004098A0: 8FBF0014 lw          ra,0x14(sp)
  004098A4: 03E00008 jr          ra
  004098A8: 27BD0018 addiu       sp,sp,0x18
_cftof_g:
  004098AC: 27BDFFE8 addiu       sp,sp,0xFFE8
  004098B0: AFBF0014 sw          ra,0x14(sp)
  004098B4: 240E0001 addiu       t6,zero,1
  004098B8: 3C010041 lui         at,0x41
  004098BC: 0C10255D jal         _cftof
  004098C0: A02EEA00 sb          t6,0xEA00(at)
  004098C4: 3C010041 lui         at,0x41
  004098C8: A020EA00 sb          zero,0xEA00(at)
  004098CC: 8FBF0014 lw          ra,0x14(sp)
  004098D0: 03E00008 jr          ra
  004098D4: 27BD0018 addiu       sp,sp,0x18
_cftoe_g:
  004098D8: 27BDFFE8 addiu       sp,sp,0xFFE8
  004098DC: AFBF0014 sw          ra,0x14(sp)
  004098E0: 240E0001 addiu       t6,zero,1
  004098E4: 3C010041 lui         at,0x41
  004098E8: 0C1024D1 jal         _cftoe
  004098EC: A02EEA00 sb          t6,0xEA00(at)
  004098F0: 3C010041 lui         at,0x41
  004098F4: A020EA00 sb          zero,0xEA00(at)
  004098F8: 8FBF0014 lw          ra,0x14(sp)
  004098FC: 03E00008 jr          ra
  00409900: 27BD0018 addiu       sp,sp,0x18
?_set_new_handler@@YAP6AHI@ZP6AHI@Z@Z (int (__cdecl*__cdecl _set_new_handler(int (__cdecl*)(unsigned int)))(unsigned int)):
  00409904: 3C030041 lui         v1,0x41
  00409908: 8C62EE28 lw          v0,0xEE28(v1)
  0040990C: 3C010041 lui         at,0x41
  00409910: 03E00008 jr          ra
  00409914: AC24EE28 sw          a0,0xEE28(at)
?_query_new_handler@@YAP6AHI@ZXZ (int (__cdecl*__cdecl _query_new_handler(void))(unsigned int)):
  00409918: 3C020041 lui         v0,0x41
  0040991C: 03E00008 jr          ra
  00409920: 8C42EE28 lw          v0,0xEE28(v0)
_callnewh:
  00409924: 27BDFFE8 addiu       sp,sp,0xFFE8
  00409928: 3C020041 lui         v0,0x41
  0040992C: 8C42EE28 lw          v0,0xEE28(v0)
  00409930: AFBF0014 sw          ra,0x14(sp)
  00409934: 50400008 beql        zero,v0,00409958
  00409938: 00001025 or          v0,zero,zero
  0040993C: 0040F809 jalr        ra,v0
  00409940: 00000000 nop
  00409944: 54400004 bnel        zero,v0,00409958
  00409948: 24020001 addiu       v0,zero,1
  0040994C: 10000002 b           00409958
  00409950: 00001025 or          v0,zero,zero
  00409954: 24020001 addiu       v0,zero,1
  00409958: 8FBF0014 lw          ra,0x14(sp)
  0040995C: 03E00008 jr          ra
  00409960: 27BD0018 addiu       sp,sp,0x18
_fptrap:
  00409964: 27BDFFE8 addiu       sp,sp,0xFFE8
  00409968: AFBF0014 sw          ra,0x14(sp)
  0040996C: 0C101888 jal         _amsg_exit
  00409970: 24040002 addiu       a0,zero,2
  00409974: 8FBF0014 lw          ra,0x14(sp)
  00409978: 03E00008 jr          ra
  0040997C: 27BD0018 addiu       sp,sp,0x18
_tolower:
  00409980: 03E00008 jr          ra
  00409984: 24820020 addiu       v0,a0,0x20
tolower:
  00409988: 27BDFFB8 addiu       sp,sp,0xFFB8
  0040998C: AFB00028 sw          s0,0x28(sp)
  00409990: 00808025 or          s0,a0,zero
  00409994: AFBF002C sw          ra,0x2C(sp)
  00409998: 3C0E0041 lui         t6,0x41
  0040999C: 8DCEE7BC lw          t6,0xE7BC(t6)
  004099A0: 2A010100 slti        at,s0,0x100
  004099A4: 15C00009 bne         zero,t6,004099CC
  004099A8: 00000000 nop
  004099AC: 2A010041 slti        at,s0,0x41
  004099B0: 14200004 bne         zero,at,004099C4
  004099B4: 2A01005B slti        at,s0,0x5B
  004099B8: 5020003C beql        zero,at,00409AAC
  004099BC: 02001025 or          v0,s0,zero
  004099C0: 26100020 addiu       s0,s0,0x20
  004099C4: 10000039 b           00409AAC
  004099C8: 02001025 or          v0,s0,zero
  004099CC: 10200012 beq         zero,at,00409A18
  004099D0: 3C0F0041 lui         t7,0x41
  004099D4: 8DEFEA10 lw          t7,0xEA10(t7)
  004099D8: 3C180041 lui         t8,0x41
  004099DC: 02002025 or          a0,s0,zero
  004099E0: 29E10002 slti        at,t7,2
  004099E4: 14200005 bne         zero,at,004099FC
  004099E8: 00000000 nop
  004099EC: 0C1026AF jal         _isctype
  004099F0: 24050001 addiu       a1,zero,1
  004099F4: 10000006 b           00409A10
  004099F8: 00401825 or          v1,v0,zero
  004099FC: 8F18E7D0 lw          t8,0xE7D0(t8)
  00409A00: 0010C840 sll         t9,s0,1
  00409A04: 03194021 addu        t0,t8,t9
  00409A08: 95030000 lhu         v1,0(t0)
  00409A0C: 30630001 andi        v1,v1,1
  00409A10: 50600026 beql        zero,v1,00409AAC
  00409A14: 02001025 or          v0,s0,zero
  00409A18: 00101203 sra         v0,s0,8
  00409A1C: 3C090041 lui         t1,0x41
  00409A20: 8D29E7D0 lw          t1,0xE7D0(t1)
  00409A24: 304200FF andi        v0,v0,0xFF
  00409A28: 304A00FF andi        t2,v0,0xFF
  00409A2C: 000A5840 sll         t3,t2,1
  00409A30: 012B6021 addu        t4,t1,t3
  00409A34: 958D0000 lhu         t5,0(t4)
  00409A38: 3C040041 lui         a0,0x41
  00409A3C: 24050100 addiu       a1,zero,0x100
  00409A40: 31AE8000 andi        t6,t5,0x8000
  00409A44: 11C00006 beq         zero,t6,00409A60
  00409A48: 27A60044 addiu       a2,sp,0x44
  00409A4C: A3A20044 sb          v0,0x44(sp)
  00409A50: A3B00045 sb          s0,0x45(sp)
  00409A54: A3A00046 sb          zero,0x46(sp)
  00409A58: 10000004 b           00409A6C
  00409A5C: 24070002 addiu       a3,zero,2
  00409A60: A3B00044 sb          s0,0x44(sp)
  00409A64: A3A00045 sb          zero,0x45(sp)
  00409A68: 24070001 addiu       a3,zero,1
  00409A6C: 27AF003C addiu       t7,sp,0x3C
  00409A70: 24180003 addiu       t8,zero,3
  00409A74: AFB80014 sw          t8,0x14(sp)
  00409A78: AFAF0010 sw          t7,0x10(sp)
  00409A7C: 8C84E7BC lw          a0,0xE7BC(a0)
  00409A80: 0C102A2A jal         __crtLCMapStringA
  00409A84: AFA00018 sw          zero,0x18(sp)
  00409A88: 50400008 beql        zero,v0,00409AAC
  00409A8C: 02001025 or          v0,s0,zero
  00409A90: 24010001 addiu       at,zero,1
  00409A94: 50410005 beql        at,v0,00409AAC
  00409A98: 93A2003C lbu         v0,0x3C(sp)
  00409A9C: 93A8003D lbu         t0,0x3D(sp)
  00409AA0: 93B9003C lbu         t9,0x3C(sp)
  00409AA4: 00085200 sll         t2,t0,8
  00409AA8: 032A1025 or          v0,t9,t2
  00409AAC: 8FB00028 lw          s0,0x28(sp)
  00409AB0: 8FBF002C lw          ra,0x2C(sp)
  00409AB4: 03E00008 jr          ra
  00409AB8: 27BD0048 addiu       sp,sp,0x48
_isctype:
  00409ABC: 27BDFFC8 addiu       sp,sp,0xFFC8
  00409AC0: AFBF001C sw          ra,0x1C(sp)
  00409AC4: AFA5003C sw          a1,0x3C(sp)
  00409AC8: 248E0001 addiu       t6,a0,1
  00409ACC: 2DC10101 sltiu       at,t6,0x101
  00409AD0: 10200009 beq         zero,at,00409AF8
  00409AD4: 00041203 sra         v0,a0,8
  00409AD8: 3C0F0041 lui         t7,0x41
  00409ADC: 8DEFE7D0 lw          t7,0xE7D0(t7)
  00409AE0: 0004C040 sll         t8,a0,1
  00409AE4: 8FA9003C lw          t1,0x3C(sp)
  00409AE8: 01F8C821 addu        t9,t7,t8
  00409AEC: 97280000 lhu         t0,0(t9)
  00409AF0: 1000001D b           00409B68
  00409AF4: 01091024 and         v0,t0,t1
  00409AF8: 3C0A0041 lui         t2,0x41
  00409AFC: 8D4AE7D0 lw          t2,0xE7D0(t2)
  00409B00: 304200FF andi        v0,v0,0xFF
  00409B04: 304B00FF andi        t3,v0,0xFF
  00409B08: 000B6040 sll         t4,t3,1
  00409B0C: 014C6821 addu        t5,t2,t4
  00409B10: 95AE0000 lhu         t6,0(t5)
  00409B14: 24060001 addiu       a2,zero,1
  00409B18: 27A50034 addiu       a1,sp,0x34
  00409B1C: 31CF8000 andi        t7,t6,0x8000
  00409B20: 11E00006 beq         zero,t7,00409B3C
  00409B24: 27A7002E addiu       a3,sp,0x2E
  00409B28: A3A20034 sb          v0,0x34(sp)
  00409B2C: A3A40035 sb          a0,0x35(sp)
  00409B30: A3A00036 sb          zero,0x36(sp)
  00409B34: 10000003 b           00409B44
  00409B38: 24060002 addiu       a2,zero,2
  00409B3C: A3A40034 sb          a0,0x34(sp)
  00409B40: A3A00035 sb          zero,0x35(sp)
  00409B44: 24040001 addiu       a0,zero,1
  00409B48: AFA00010 sw          zero,0x10(sp)
  00409B4C: 0C102BA6 jal         __crtGetStringTypeA
  00409B50: AFA00014 sw          zero,0x14(sp)
  00409B54: 50400004 beql        zero,v0,00409B68
  00409B58: 00001025 or          v0,zero,zero
  00409B5C: 97B8002E lhu         t8,0x2E(sp)
  00409B60: 8FB9003C lw          t9,0x3C(sp)
  00409B64: 03191024 and         v0,t8,t9
  00409B68: 8FBF001C lw          ra,0x1C(sp)
  00409B6C: 03E00008 jr          ra
  00409B70: 27BD0038 addiu       sp,sp,0x38
_ZeroTail:
  00409B74: 04A10003 bgez        a1,00409B84
  00409B78: 00051943 sra         v1,a1,5
  00409B7C: 24A1001F addiu       at,a1,0x1F
  00409B80: 00011943 sra         v1,at,5
  00409B84: 00037080 sll         t6,v1,2
  00409B88: 008E7821 addu        t7,a0,t6
  00409B8C: 2408001F addiu       t0,zero,0x1F
  00409B90: 8DF80000 lw          t8,0(t7)
  00409B94: 240AFFFF addiu       t2,zero,0xFFFF
  00409B98: 00601025 or          v0,v1,zero
  00409B9C: 04A10004 bgez        a1,00409BB0
  00409BA0: 30B9001F andi        t9,a1,0x1F
  00409BA4: 13200002 beq         zero,t9,00409BB0
  00409BA8: 00000000 nop
  00409BAC: 2739FFE0 addiu       t9,t9,0xFFE0
  00409BB0: 01194823 subu        t1,t0,t9
  00409BB4: 012A5804 sllv        t3,t2,t1
  00409BB8: 01606027 nor         t4,t3,zero
  00409BBC: 030C6824 and         t5,t8,t4
  00409BC0: 11A00003 beq         zero,t5,00409BD0
  00409BC4: 24620001 addiu       v0,v1,1
  00409BC8: 03E00008 jr          ra
  00409BCC: 00001025 or          v0,zero,zero
  00409BD0: 28410003 slti        at,v0,3
  00409BD4: 10200009 beq         zero,at,00409BFC
  00409BD8: 00021880 sll         v1,v0,2
  00409BDC: 00832821 addu        a1,a0,v1
  00409BE0: 8CAE0000 lw          t6,0(a1)
  00409BE4: 24630004 addiu       v1,v1,4
  00409BE8: 2861000C slti        at,v1,0xC
  00409BEC: 15C00006 bne         zero,t6,00409C08
  00409BF0: 00000000 nop
  00409BF4: 1420FFFA bne         zero,at,00409BE0
  00409BF8: 24A50004 addiu       a1,a1,4
  00409BFC: 24020001 addiu       v0,zero,1
  00409C00: 03E00008 jr          ra
  00409C04: 00000000 nop
  00409C08: 03E00008 jr          ra
  00409C0C: 00001025 or          v0,zero,zero
_IncMan:
  00409C10: 27BDFFE0 addiu       sp,sp,0xFFE0
  00409C14: AFB00014 sw          s0,0x14(sp)
  00409C18: 00A08025 or          s0,a1,zero
  00409C1C: AFBF001C sw          ra,0x1C(sp)
  00409C20: AFB10018 sw          s1,0x18(sp)
  00409C24: AFA40020 sw          a0,0x20(sp)
  00409C28: 8FAE0020 lw          t6,0x20(sp)
  00409C2C: 06010003 bgez        s0,00409C3C
  00409C30: 00108943 sra         s1,s0,5
  00409C34: 2601001F addiu       at,s0,0x1F
  00409C38: 00018943 sra         s1,at,5
  00409C3C: 00117880 sll         t7,s1,2
  00409C40: 2419001F addiu       t9,zero,0x1F
  00409C44: 24090001 addiu       t1,zero,1
  00409C48: 01CF3021 addu        a2,t6,t7
  00409C4C: 02203825 or          a3,s1,zero
  00409C50: 8CC40000 lw          a0,0(a2)
  00409C54: 06010004 bgez        s0,00409C68
  00409C58: 3218001F andi        t8,s0,0x1F
  00409C5C: 13000002 beq         zero,t8,00409C68
  00409C60: 00000000 nop
  00409C64: 2718FFE0 addiu       t8,t8,0xFFE0
  00409C68: 03384023 subu        t0,t9,t8
  00409C6C: 0C102C0D jal         __addl
  00409C70: 01092804 sllv        a1,t1,t0
  00409C74: 2627FFFF addiu       a3,s1,0xFFFF
  00409C78: 04E0000F bltz        a3,00409CB8
  00409C7C: 00401825 or          v1,v0,zero
  00409C80: 1040000D beq         zero,v0,00409CB8
  00409C84: 8FAA0020 lw          t2,0x20(sp)
  00409C88: 00078880 sll         s1,a3,2
  00409C8C: 01518021 addu        s0,t2,s1
  00409C90: 8E040000 lw          a0,0(s0)
  00409C94: 24050001 addiu       a1,zero,1
  00409C98: 0C102C0D jal         __addl
  00409C9C: 02003025 or          a2,s0,zero
  00409CA0: 2631FFFC addiu       s1,s1,0xFFFC
  00409CA4: 00401825 or          v1,v0,zero
  00409CA8: 06200003 bltz        s1,00409CB8
  00409CAC: 2610FFFC addiu       s0,s0,0xFFFC
  00409CB0: 5440FFF8 bnel        zero,v0,00409C94
  00409CB4: 8E040000 lw          a0,0(s0)
  00409CB8: 00601025 or          v0,v1,zero
  00409CBC: 8FB00014 lw          s0,0x14(sp)
  00409CC0: 8FB10018 lw          s1,0x18(sp)
  00409CC4: 8FBF001C lw          ra,0x1C(sp)
  00409CC8: 03E00008 jr          ra
  00409CCC: 27BD0020 addiu       sp,sp,0x20
_RoundMan:
  00409CD0: 27BDFFB0 addiu       sp,sp,0xFFB0
  00409CD4: AFB00018 sw          s0,0x18(sp)
  00409CD8: 00808025 or          s0,a0,zero
  00409CDC: AFBF001C sw          ra,0x1C(sp)
  00409CE0: 00A03025 or          a2,a1,zero
  00409CE4: 24CEFFFF addiu       t6,a2,0xFFFF
  00409CE8: AFAE0048 sw          t6,0x48(sp)
  00409CEC: 2419001F addiu       t9,zero,0x1F
  00409CF0: 240C0001 addiu       t4,zero,1
  00409CF4: 00005025 or          t2,zero,zero
  00409CF8: 04C10003 bgez        a2,00409D08
  00409CFC: 00064143 sra         t0,a2,5
  00409D00: 24C1001F addiu       at,a2,0x1F
  00409D04: 00014143 sra         t0,at,5
  00409D08: 00087880 sll         t7,t0,2
  00409D0C: 020F3821 addu        a3,s0,t7
  00409D10: 8CEB0000 lw          t3,0(a3)
  00409D14: 04C10004 bgez        a2,00409D28
  00409D18: 30D8001F andi        t8,a2,0x1F
  00409D1C: 13000002 beq         zero,t8,00409D28
  00409D20: 00000000 nop
  00409D24: 2718FFE0 addiu       t8,t8,0xFFE0
  00409D28: 03384823 subu        t1,t9,t8
  00409D2C: 012C6804 sllv        t5,t4,t1
  00409D30: 016D7024 and         t6,t3,t5
  00409D34: 11C00016 beq         zero,t6,00409D90
  00409D38: 02002025 or          a0,s0,zero
  00409D3C: 24C50001 addiu       a1,a2,1
  00409D40: AFA70024 sw          a3,0x24(sp)
  00409D44: AFA8002C sw          t0,0x2C(sp)
  00409D48: AFA90028 sw          t1,0x28(sp)
  00409D4C: 0C1026DD jal         _ZeroTail
  00409D50: AFAA004C sw          t2,0x4C(sp)
  00409D54: 8FA70024 lw          a3,0x24(sp)
  00409D58: 8FA8002C lw          t0,0x2C(sp)
  00409D5C: 8FA90028 lw          t1,0x28(sp)
  00409D60: 1440000B bne         zero,v0,00409D90
  00409D64: 8FAA004C lw          t2,0x4C(sp)
  00409D68: 02002025 or          a0,s0,zero
  00409D6C: 8FA50048 lw          a1,0x48(sp)
  00409D70: AFA70024 sw          a3,0x24(sp)
  00409D74: AFA8002C sw          t0,0x2C(sp)
  00409D78: 0C102704 jal         _IncMan
  00409D7C: AFA90028 sw          t1,0x28(sp)
  00409D80: 8FA70024 lw          a3,0x24(sp)
  00409D84: 8FA8002C lw          t0,0x2C(sp)
  00409D88: 8FA90028 lw          t1,0x28(sp)
  00409D8C: 00405025 or          t2,v0,zero
  00409D90: 8CEF0000 lw          t7,0(a3)
  00409D94: 2419FFFF addiu       t9,zero,0xFFFF
  00409D98: 0139C004 sllv        t8,t9,t1
  00409D9C: 25060001 addiu       a2,t0,1
  00409DA0: 28C10003 slti        at,a2,3
  00409DA4: 01F86024 and         t4,t7,t8
  00409DA8: ACEC0000 sw          t4,0(a3)
  00409DAC: 10200017 beq         zero,at,00409E0C
  00409DB0: 00C01825 or          v1,a2,zero
  00409DB4: 24050003 addiu       a1,zero,3
  00409DB8: 00A63823 subu        a3,a1,a2
  00409DBC: 30E70003 andi        a3,a3,3
  00409DC0: 10E00009 beq         zero,a3,00409DE8
  00409DC4: 00E62021 addu        a0,a3,a2
  00409DC8: 00065880 sll         t3,a2,2
  00409DCC: 020B1021 addu        v0,s0,t3
  00409DD0: 24630001 addiu       v1,v1,1
  00409DD4: AC400000 sw          zero,0(v0)
  00409DD8: 1483FFFD bne         v1,a0,00409DD0
  00409DDC: 24420004 addiu       v0,v0,4
  00409DE0: 5065000B beql        a1,v1,00409E10
  00409DE4: 01401025 or          v0,t2,zero
  00409DE8: 00036880 sll         t5,v1,2
  00409DEC: 020D1021 addu        v0,s0,t5
  00409DF0: 24630004 addiu       v1,v1,4
  00409DF4: AC400000 sw          zero,0(v0)
  00409DF8: AC400004 sw          zero,4(v0)
  00409DFC: AC400008 sw          zero,8(v0)
  00409E00: AC40000C sw          zero,0xC(v0)
  00409E04: 1465FFFA bne         a1,v1,00409DF0
  00409E08: 24420010 addiu       v0,v0,0x10
  00409E0C: 01401025 or          v0,t2,zero
  00409E10: 8FB00018 lw          s0,0x18(sp)
  00409E14: 8FBF001C lw          ra,0x1C(sp)
  00409E18: 03E00008 jr          ra
  00409E1C: 27BD0050 addiu       sp,sp,0x50
_CopyMan:
  00409E20: 00801825 or          v1,a0,zero
  00409E24: 00A01025 or          v0,a1,zero
  00409E28: 24040003 addiu       a0,zero,3
  00409E2C: 00003025 or          a2,zero,zero
  00409E30: 8C4E0000 lw          t6,0(v0)
  00409E34: 24C60001 addiu       a2,a2,1
  00409E38: 24630004 addiu       v1,v1,4
  00409E3C: 24420004 addiu       v0,v0,4
  00409E40: 14C4FFFB bne         a0,a2,00409E30
  00409E44: AC6EFFFC sw          t6,0xFFFC(v1)
  00409E48: 03E00008 jr          ra
  00409E4C: 00000000 nop
_FillZeroMan:
  00409E50: 00801825 or          v1,a0,zero
  00409E54: 24040003 addiu       a0,zero,3
  00409E58: 00001025 or          v0,zero,zero
  00409E5C: 24420001 addiu       v0,v0,1
  00409E60: AC600000 sw          zero,0(v1)
  00409E64: 1444FFFD bne         a0,v0,00409E5C
  00409E68: 24630004 addiu       v1,v1,4
  00409E6C: 03E00008 jr          ra
  00409E70: 00000000 nop
_IsZeroMan:
  00409E74: 00001825 or          v1,zero,zero
  00409E78: 00802825 or          a1,a0,zero
  00409E7C: 2402000C addiu       v0,zero,0xC
  00409E80: 8CAE0000 lw          t6,0(a1)
  00409E84: 24630004 addiu       v1,v1,4
  00409E88: 15C00006 bne         zero,t6,00409EA4
  00409E8C: 00000000 nop
  00409E90: 1462FFFB bne         v0,v1,00409E80
  00409E94: 24A50004 addiu       a1,a1,4
  00409E98: 24020001 addiu       v0,zero,1
  00409E9C: 03E00008 jr          ra
  00409EA0: 00000000 nop
  00409EA4: 03E00008 jr          ra
  00409EA8: 00001025 or          v0,zero,zero
_ShrMan:
  00409EAC: 27BDFFE8 addiu       sp,sp,0xFFE8
  00409EB0: 240EFFFF addiu       t6,zero,0xFFFF
  00409EB4: 240F0020 addiu       t7,zero,0x20
  00409EB8: 00003025 or          a2,zero,zero
  00409EBC: 00003825 or          a3,zero,zero
  00409EC0: 04A10004 bgez        a1,00409ED4
  00409EC4: 30A2001F andi        v0,a1,0x1F
  00409EC8: 10400002 beq         zero,v0,00409ED4
  00409ECC: 00000000 nop
  00409ED0: 2442FFE0 addiu       v0,v0,0xFFE0
  00409ED4: 004E1804 sllv        v1,t6,v0
  00409ED8: 00601827 nor         v1,v1,zero
  00409EDC: 01E24823 subu        t1,t7,v0
  00409EE0: 00804025 or          t0,a0,zero
  00409EE4: 240A0003 addiu       t2,zero,3
  00409EE8: 8D180000 lw          t8,0(t0)
  00409EEC: 24E70001 addiu       a3,a3,1
  00409EF0: 25080004 addiu       t0,t0,4
  00409EF4: 0303C824 and         t9,t8,v1
  00409EF8: AFB90000 sw          t9,0(sp)
  00409EFC: 8D0BFFFC lw          t3,0xFFFC(t0)
  00409F00: 004B6006 srlv        t4,t3,v0
  00409F04: AD0CFFFC sw          t4,0xFFFC(t0)
  00409F08: 01867025 or          t6,t4,a2
  00409F0C: AD0EFFFC sw          t6,0xFFFC(t0)
  00409F10: 8FAF0000 lw          t7,0(sp)
  00409F14: 14EAFFF4 bne         t2,a3,00409EE8
  00409F18: 012F3004 sllv        a2,t7,t1
  00409F1C: 24070002 addiu       a3,zero,2
  00409F20: 04A10003 bgez        a1,00409F30
  00409F24: 00051143 sra         v0,a1,5
  00409F28: 24A1001F addiu       at,a1,0x1F
  00409F2C: 00011143 sra         v0,at,5
  00409F30: 24880008 addiu       t0,a0,8
  00409F34: 00E2082A slt         at,a3,v0
  00409F38: 14200008 bne         zero,at,00409F5C
  00409F3C: 0007C080 sll         t8,a3,2
  00409F40: 00025880 sll         t3,v0,2
  00409F44: 000B6023 subu        t4,zero,t3
  00409F48: 0098C821 addu        t9,a0,t8
  00409F4C: 032C6821 addu        t5,t9,t4
  00409F50: 8DAE0000 lw          t6,0(t5)
  00409F54: 10000002 b           00409F60
  00409F58: AD0E0000 sw          t6,0(t0)
  00409F5C: AD000000 sw          zero,0(t0)
  00409F60: 24E7FFFF addiu       a3,a3,0xFFFF
  00409F64: 04E1FFF3 bgez        a3,00409F34
  00409F68: 2508FFFC addiu       t0,t0,0xFFFC
  00409F6C: 03E00008 jr          ra
  00409F70: 27BD0018 addiu       sp,sp,0x18
_ld12cvt:
  00409F74: 27BDFFA0 addiu       sp,sp,0xFFA0
  00409F78: AFB00018 sw          s0,0x18(sp)
  00409F7C: 00C08025 or          s0,a2,zero
  00409F80: AFBF001C sw          ra,0x1C(sp)
  00409F84: AFA50064 sw          a1,0x64(sp)
  00409F88: 9482000A lhu         v0,0xA(a0)
  00409F8C: 2401C001 addiu       at,zero,0xC001
  00409F90: 27A5004C addiu       a1,sp,0x4C
  00409F94: 304E8000 andi        t6,v0,0x8000
  00409F98: AFAE0058 sw          t6,0x58(sp)
  00409F9C: 888F0009 lwl         t7,9(a0)
  00409FA0: 988F0006 lwr         t7,6(a0)
  00409FA4: 30437FFF andi        v1,v0,0x7FFF
  00409FA8: 2463C001 addiu       v1,v1,0xC001
  00409FAC: AFAF004C sw          t7,0x4C(sp)
  00409FB0: 88980005 lwl         t8,5(a0)
  00409FB4: 98980002 lwr         t8,2(a0)
  00409FB8: AFB80050 sw          t8,0x50(sp)
  00409FBC: 94990000 lhu         t9,0(a0)
  00409FC0: 27A40038 addiu       a0,sp,0x38
  00409FC4: 00194400 sll         t0,t9,0x10
  00409FC8: 1461000D bne         at,v1,0040A000
  00409FCC: AFA80054 sw          t0,0x54(sp)
  00409FD0: 27A4004C addiu       a0,sp,0x4C
  00409FD4: 0C10279D jal         _IsZeroMan
  00409FD8: AFA00048 sw          zero,0x48(sp)
  00409FDC: 8FA60048 lw          a2,0x48(sp)
  00409FE0: 5440004D bnel        zero,v0,0040A118
  00409FE4: 00002825 or          a1,zero,zero
  00409FE8: 27A4004C addiu       a0,sp,0x4C
  00409FEC: 0C102794 jal         _FillZeroMan
  00409FF0: AFA60048 sw          a2,0x48(sp)
  00409FF4: 8FA60048 lw          a2,0x48(sp)
  00409FF8: 10000047 b           0040A118
  00409FFC: 24050002 addiu       a1,zero,2
  0040A000: 0C102788 jal         _CopyMan
  0040A004: AFA3005C sw          v1,0x5C(sp)
  0040A008: 27A4004C addiu       a0,sp,0x4C
  0040A00C: 0C102734 jal         _RoundMan
  0040A010: 8E050008 lw          a1,8(s0)
  0040A014: 10400002 beq         zero,v0,0040A020
  0040A018: 8FA3005C lw          v1,0x5C(sp)
  0040A01C: 24630001 addiu       v1,v1,1
  0040A020: 8E020004 lw          v0,4(s0)
  0040A024: 8E090008 lw          t1,8(s0)
  0040A028: 00495023 subu        t2,v0,t1
  0040A02C: 006A082A slt         at,v1,t2
  0040A030: 50200007 beql        zero,at,0040A050
  0040A034: 0043082A slt         at,v0,v1
  0040A038: 0C102794 jal         _FillZeroMan
  0040A03C: 27A4004C addiu       a0,sp,0x4C
  0040A040: 00003025 or          a2,zero,zero
  0040A044: 10000034 b           0040A118
  0040A048: 24050002 addiu       a1,zero,2
  0040A04C: 0043082A slt         at,v0,v1
  0040A050: 14200012 bne         zero,at,0040A09C
  0040A054: 00435823 subu        t3,v0,v1
  0040A058: AFAB0034 sw          t3,0x34(sp)
  0040A05C: 27A4004C addiu       a0,sp,0x4C
  0040A060: 0C102788 jal         _CopyMan
  0040A064: 27A50038 addiu       a1,sp,0x38
  0040A068: 27A4004C addiu       a0,sp,0x4C
  0040A06C: 0C1027AB jal         _ShrMan
  0040A070: 8FA50034 lw          a1,0x34(sp)
  0040A074: 27A4004C addiu       a0,sp,0x4C
  0040A078: 0C102734 jal         _RoundMan
  0040A07C: 8E050008 lw          a1,8(s0)
  0040A080: 8E05000C lw          a1,0xC(s0)
  0040A084: 27A4004C addiu       a0,sp,0x4C
  0040A088: 0C1027AB jal         _ShrMan
  0040A08C: 24A50001 addiu       a1,a1,1
  0040A090: 00003025 or          a2,zero,zero
  0040A094: 10000020 b           0040A118
  0040A098: 24050002 addiu       a1,zero,2
  0040A09C: 8E0C0000 lw          t4,0(s0)
  0040A0A0: 8FA8004C lw          t0,0x4C(sp)
  0040A0A4: 27A4004C addiu       a0,sp,0x4C
  0040A0A8: 006C082A slt         at,v1,t4
  0040A0AC: 54200010 bnel        zero,at,0040A0F0
  0040A0B0: 3C017FFF lui         at,0x7FFF
  0040A0B4: 0C102794 jal         _FillZeroMan
  0040A0B8: 27A4004C addiu       a0,sp,0x4C
  0040A0BC: 8FAD004C lw          t5,0x4C(sp)
  0040A0C0: 3C018000 lui         at,0x8000
  0040A0C4: 27A4004C addiu       a0,sp,0x4C
  0040A0C8: 01A17025 or          t6,t5,at
  0040A0CC: AFAE004C sw          t6,0x4C(sp)
  0040A0D0: 0C1027AB jal         _ShrMan
  0040A0D4: 8E05000C lw          a1,0xC(s0)
  0040A0D8: 8E0F0000 lw          t7,0(s0)
  0040A0DC: 8E180014 lw          t8,0x14(s0)
  0040A0E0: 24050001 addiu       a1,zero,1
  0040A0E4: 1000000C b           0040A118
  0040A0E8: 01F83021 addu        a2,t7,t8
  0040A0EC: 3C017FFF lui         at,0x7FFF
  0040A0F0: 8E190014 lw          t9,0x14(s0)
  0040A0F4: 3421FFFF ori         at,at,0xFFFF
  0040A0F8: 01014824 and         t1,t0,at
  0040A0FC: AFA9004C sw          t1,0x4C(sp)
  0040A100: 8E05000C lw          a1,0xC(s0)
  0040A104: 00793021 addu        a2,v1,t9
  0040A108: 0C1027AB jal         _ShrMan
  0040A10C: AFA60048 sw          a2,0x48(sp)
  0040A110: 8FA60048 lw          a2,0x48(sp)
  0040A114: 00002825 or          a1,zero,zero
  0040A118: 8E0A000C lw          t2,0xC(s0)
  0040A11C: 8FAC0058 lw          t4,0x58(sp)
  0040A120: 240B001F addiu       t3,zero,0x1F
  0040A124: 016A3823 subu        a3,t3,t2
  0040A128: 55800002 bnel        zero,t4,0040A134
  0040A12C: 3C028000 lui         v0,0x8000
  0040A130: 00001025 or          v0,zero,zero
  0040A134: 8FAD004C lw          t5,0x4C(sp)
  0040A138: 8E040010 lw          a0,0x10(s0)
  0040A13C: 00E67004 sllv        t6,a2,a3
  0040A140: 24010040 addiu       at,zero,0x40
  0040A144: 01AE7825 or          t7,t5,t6
  0040A148: 14810006 bne         at,a0,0040A164
  0040A14C: 01E21825 or          v1,t7,v0
  0040A150: 8FA20064 lw          v0,0x64(sp)
  0040A154: AC430004 sw          v1,4(v0)
  0040A158: 8FB80050 lw          t8,0x50(sp)
  0040A15C: 10000005 b           0040A174
  0040A160: AC580000 sw          t8,0(v0)
  0040A164: 24010020 addiu       at,zero,0x20
  0040A168: 14810002 bne         at,a0,0040A174
  0040A16C: 8FB90064 lw          t9,0x64(sp)
  0040A170: AF230000 sw          v1,0(t9)
  0040A174: 00A01025 or          v0,a1,zero
  0040A178: 8FB00018 lw          s0,0x18(sp)
  0040A17C: 8FBF001C lw          ra,0x1C(sp)
  0040A180: 03E00008 jr          ra
  0040A184: 27BD0060 addiu       sp,sp,0x60
_ld12tod:
  0040A188: 27BDFFE8 addiu       sp,sp,0xFFE8
  0040A18C: AFBF0014 sw          ra,0x14(sp)
  0040A190: 3C060041 lui         a2,0x41
  0040A194: 0C1027DD jal         _ld12cvt
  0040A198: 24C6EA1C addiu       a2,a2,0xEA1C
  0040A19C: 8FBF0014 lw          ra,0x14(sp)
  0040A1A0: 03E00008 jr          ra
  0040A1A4: 27BD0018 addiu       sp,sp,0x18
_ld12tof:
  0040A1A8: 27BDFFE8 addiu       sp,sp,0xFFE8
  0040A1AC: AFBF0014 sw          ra,0x14(sp)
  0040A1B0: 3C060041 lui         a2,0x41
  0040A1B4: 0C1027DD jal         _ld12cvt
  0040A1B8: 24C6EA34 addiu       a2,a2,0xEA34
  0040A1BC: 8FBF0014 lw          ra,0x14(sp)
  0040A1C0: 03E00008 jr          ra
  0040A1C4: 27BD0018 addiu       sp,sp,0x18
_ld12told:
  0040A1C8: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040A1CC: AFB00018 sw          s0,0x18(sp)
  0040A1D0: 00A08025 or          s0,a1,zero
  0040A1D4: AFBF001C sw          ra,0x1C(sp)
  0040A1D8: 00803025 or          a2,a0,zero
  0040A1DC: 88CE0009 lwl         t6,9(a2)
  0040A1E0: 98CE0006 lwr         t6,6(a2)
  0040A1E4: 94C2000A lhu         v0,0xA(a2)
  0040A1E8: 27A40024 addiu       a0,sp,0x24
  0040A1EC: AFAE0024 sw          t6,0x24(sp)
  0040A1F0: 88CF0005 lwl         t7,5(a2)
  0040A1F4: 98CF0002 lwr         t7,2(a2)
  0040A1F8: 30437FFF andi        v1,v0,0x7FFF
  0040A1FC: 30488000 andi        t0,v0,0x8000
  0040A200: AFAF0028 sw          t7,0x28(sp)
  0040A204: 94D80000 lhu         t8,0(a2)
  0040A208: A7A80030 sh          t0,0x30(sp)
  0040A20C: AFA00034 sw          zero,0x34(sp)
  0040A210: 0018CC00 sll         t9,t8,0x10
  0040A214: AFB9002C sw          t9,0x2C(sp)
  0040A218: A7A30032 sh          v1,0x32(sp)
  0040A21C: 0C102734 jal         _RoundMan
  0040A220: 24050040 addiu       a1,zero,0x40
  0040A224: 97A30032 lhu         v1,0x32(sp)
  0040A228: 8FA70034 lw          a3,0x34(sp)
  0040A22C: 10400005 beq         zero,v0,0040A244
  0040A230: 97A80030 lhu         t0,0x30(sp)
  0040A234: 3C098000 lui         t1,0x8000
  0040A238: 24630001 addiu       v1,v1,1
  0040A23C: AFA90024 sw          t1,0x24(sp)
  0040A240: 3063FFFF andi        v1,v1,0xFFFF
  0040A244: 24017FFF addiu       at,zero,0x7FFF
  0040A248: 14610002 bne         at,v1,0040A254
  0040A24C: 00602025 or          a0,v1,zero
  0040A250: 24070001 addiu       a3,zero,1
  0040A254: 8FAA0024 lw          t2,0x24(sp)
  0040A258: 01046025 or          t4,t0,a0
  0040A25C: 00E01025 or          v0,a3,zero
  0040A260: AE0A0004 sw          t2,4(s0)
  0040A264: 8FAB0028 lw          t3,0x28(sp)
  0040A268: A60C0008 sh          t4,8(s0)
  0040A26C: AE0B0000 sw          t3,0(s0)
  0040A270: 8FBF001C lw          ra,0x1C(sp)
  0040A274: 8FB00018 lw          s0,0x18(sp)
  0040A278: 03E00008 jr          ra
  0040A27C: 27BD0038 addiu       sp,sp,0x38
_atodbl:
  0040A280: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040A284: AFBF0024 sw          ra,0x24(sp)
  0040A288: AFA40038 sw          a0,0x38(sp)
  0040A28C: 00A03025 or          a2,a1,zero
  0040A290: 27A40028 addiu       a0,sp,0x28
  0040A294: 27A50034 addiu       a1,sp,0x34
  0040A298: 00003825 or          a3,zero,zero
  0040A29C: AFA00010 sw          zero,0x10(sp)
  0040A2A0: AFA00014 sw          zero,0x14(sp)
  0040A2A4: 0C102CB9 jal         __strgtold12
  0040A2A8: AFA00018 sw          zero,0x18(sp)
  0040A2AC: 27A40028 addiu       a0,sp,0x28
  0040A2B0: 0C102862 jal         _ld12tod
  0040A2B4: 8FA50038 lw          a1,0x38(sp)
  0040A2B8: 8FBF0024 lw          ra,0x24(sp)
  0040A2BC: 03E00008 jr          ra
  0040A2C0: 27BD0038 addiu       sp,sp,0x38
_atoldbl:
  0040A2C4: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040A2C8: AFBF0024 sw          ra,0x24(sp)
  0040A2CC: AFA40038 sw          a0,0x38(sp)
  0040A2D0: 00A03025 or          a2,a1,zero
  0040A2D4: 27A40028 addiu       a0,sp,0x28
  0040A2D8: 27A50034 addiu       a1,sp,0x34
  0040A2DC: 24070001 addiu       a3,zero,1
  0040A2E0: AFA00010 sw          zero,0x10(sp)
  0040A2E4: AFA00014 sw          zero,0x14(sp)
  0040A2E8: 0C102CB9 jal         __strgtold12
  0040A2EC: AFA00018 sw          zero,0x18(sp)
  0040A2F0: 27A40028 addiu       a0,sp,0x28
  0040A2F4: 0C102872 jal         _ld12told
  0040A2F8: 8FA50038 lw          a1,0x38(sp)
  0040A2FC: 8FBF0024 lw          ra,0x24(sp)
  0040A300: 03E00008 jr          ra
  0040A304: 27BD0038 addiu       sp,sp,0x38
_atoflt:
  0040A308: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040A30C: AFBF0024 sw          ra,0x24(sp)
  0040A310: AFA40038 sw          a0,0x38(sp)
  0040A314: 00A03025 or          a2,a1,zero
  0040A318: 27A40028 addiu       a0,sp,0x28
  0040A31C: 27A50034 addiu       a1,sp,0x34
  0040A320: 00003825 or          a3,zero,zero
  0040A324: AFA00010 sw          zero,0x10(sp)
  0040A328: AFA00014 sw          zero,0x14(sp)
  0040A32C: 0C102CB9 jal         __strgtold12
  0040A330: AFA00018 sw          zero,0x18(sp)
  0040A334: 27A40028 addiu       a0,sp,0x28
  0040A338: 0C10286A jal         _ld12tof
  0040A33C: 8FA50038 lw          a1,0x38(sp)
  0040A340: 8FBF0024 lw          ra,0x24(sp)
  0040A344: 03E00008 jr          ra
  0040A348: 27BD0038 addiu       sp,sp,0x38
_fltout:
  0040A34C: 27BDFFD0 addiu       sp,sp,0xFFD0
  0040A350: AFBF001C sw          ra,0x1C(sp)
  0040A354: F7AC0030 sdc1        931812,0x30(sp)
  0040A358: 27A40024 addiu       a0,sp,0x24
  0040A35C: 0C1028F9 jal         __dtold
  0040A360: 27A50030 addiu       a1,sp,0x30
  0040A364: 27AE002C addiu       t6,sp,0x2C
  0040A368: 91C10000 lbu         at,0(t6)
  0040A36C: 3C180041 lui         t8,0x41
  0040A370: 2718EE40 addiu       t8,t8,0xEE40
  0040A374: A3A10008 sb          at,8(sp)
  0040A378: 91CF0001 lbu         t7,1(t6)
  0040A37C: AFB80014 sw          t8,0x14(sp)
  0040A380: AFA00010 sw          zero,0x10(sp)
  0040A384: A3AF0009 sb          t7,9(sp)
  0040A388: 8FA60008 lw          a2,8(sp)
  0040A38C: 8FA40024 lw          a0,0x24(sp)
  0040A390: 8FA50028 lw          a1,0x28(sp)
  0040A394: 0C102F65 jal         $I10_OUTPUT
  0040A398: 24070011 addiu       a3,zero,0x11
  0040A39C: 3C010041 lui         at,0x41
  0040A3A0: 3C190041 lui         t9,0x41
  0040A3A4: 3C080041 lui         t0,0x41
  0040A3A8: 8339EE42 lb          t9,0xEE42(t9)
  0040A3AC: 8508EE40 lh          t0,0xEE40(t0)
  0040A3B0: AC22EE38 sw          v0,0xEE38(at)
  0040A3B4: 3C010041 lui         at,0x41
  0040A3B8: 3C090041 lui         t1,0x41
  0040A3BC: AC39EE30 sw          t9,0xEE30(at)
  0040A3C0: AC28EE34 sw          t0,0xEE34(at)
  0040A3C4: 3C010041 lui         at,0x41
  0040A3C8: 2529EE44 addiu       t1,t1,0xEE44
  0040A3CC: 3C020041 lui         v0,0x41
  0040A3D0: AC29EE3C sw          t1,0xEE3C(at)
  0040A3D4: 2442EE30 addiu       v0,v0,0xEE30
  0040A3D8: 8FBF001C lw          ra,0x1C(sp)
  0040A3DC: 03E00008 jr          ra
  0040A3E0: 27BD0030 addiu       sp,sp,0x30
__dtold:
  0040A3E4: 3C0B8000 lui         t3,0x8000
  0040A3E8: 94A70006 lhu         a3,6(a1)
  0040A3EC: 8CA80004 lw          t0,4(a1)
  0040A3F0: 3C01000F lui         at,0xF
  0040A3F4: 30E67FF0 andi        a2,a3,0x7FF0
  0040A3F8: 00063103 sra         a2,a2,4
  0040A3FC: 30C6FFFF andi        a2,a2,0xFFFF
  0040A400: 3421FFFF ori         at,at,0xFFFF
  0040A404: 01601025 or          v0,t3,zero
  0040A408: 8CA90000 lw          t1,0(a1)
  0040A40C: 00C05025 or          t2,a2,zero
  0040A410: 30E78000 andi        a3,a3,0x8000
  0040A414: 10C00009 beq         zero,a2,0040A43C
  0040A418: 01014024 and         t0,t0,at
  0040A41C: 240107FF addiu       at,zero,0x7FF
  0040A420: 10C10004 beq         at,a2,0040A434
  0040A424: 00C01825 or          v1,a2,zero
  0040A428: 24633C00 addiu       v1,v1,0x3C00
  0040A42C: 1000000E b           0040A468
  0040A430: 3063FFFF andi        v1,v1,0xFFFF
  0040A434: 1000000C b           0040A468
  0040A438: 24037FFF addiu       v1,zero,0x7FFF
  0040A43C: 15000007 bne         zero,t0,0040A45C
  0040A440: 01401825 or          v1,t2,zero
  0040A444: 55200006 bnel        zero,t1,0040A460
  0040A448: 24633C01 addiu       v1,v1,0x3C01
  0040A44C: AC800004 sw          zero,4(a0)
  0040A450: AC800000 sw          zero,0(a0)
  0040A454: 03E00008 jr          ra
  0040A458: A4800008 sh          zero,8(a0)
  0040A45C: 24633C01 addiu       v1,v1,0x3C01
  0040A460: 3063FFFF andi        v1,v1,0xFFFF
  0040A464: 00001025 or          v0,zero,zero
  0040A468: 000872C0 sll         t6,t0,0xB
  0040A46C: 004E7825 or          t7,v0,t6
  0040A470: 0009C542 srl         t8,t1,0x15
  0040A474: 01F82825 or          a1,t7,t8
  0040A478: 0009CAC0 sll         t9,t1,0xB
  0040A47C: 00AB6024 and         t4,a1,t3
  0040A480: AC850004 sw          a1,4(a0)
  0040A484: 15800010 bne         zero,t4,0040A4C8
  0040A488: AC990000 sw          t9,0(a0)
  0040A48C: 00A03025 or          a2,a1,zero
  0040A490: 8C850000 lw          a1,0(a0)
  0040A494: 00067040 sll         t6,a2,1
  0040A498: 2463FFFF addiu       v1,v1,0xFFFF
  0040A49C: 01656824 and         t5,t3,a1
  0040A4A0: 55A00002 bnel        zero,t5,0040A4AC
  0040A4A4: 24020001 addiu       v0,zero,1
  0040A4A8: 00001025 or          v0,zero,zero
  0040A4AC: 01C23025 or          a2,t6,v0
  0040A4B0: 0005C040 sll         t8,a1,1
  0040A4B4: 00CBC824 and         t9,a2,t3
  0040A4B8: AC860004 sw          a2,4(a0)
  0040A4BC: AC980000 sw          t8,0(a0)
  0040A4C0: 1320FFF3 beq         zero,t9,0040A490
  0040A4C4: 3063FFFF andi        v1,v1,0xFFFF
  0040A4C8: 00E36025 or          t4,a3,v1
  0040A4CC: A48C0008 sh          t4,8(a0)
  0040A4D0: 03E00008 jr          ra
  0040A4D4: 00000000 nop
_fptostr:
  0040A4D8: 27BDFFD8 addiu       sp,sp,0xFFD8
  0040A4DC: AFBF0014 sw          ra,0x14(sp)
  0040A4E0: AFA40028 sw          a0,0x28(sp)
  0040A4E4: 24080030 addiu       t0,zero,0x30
  0040A4E8: 8FAE0028 lw          t6,0x28(sp)
  0040A4EC: 8CC7000C lw          a3,0xC(a2)
  0040A4F0: A1C80000 sb          t0,0(t6)
  0040A4F4: 25C20001 addiu       v0,t6,1
  0040A4F8: 18A0000C blez        a1,0040A52C
  0040A4FC: AFA20018 sw          v0,0x18(sp)
  0040A500: 80E30000 lb          v1,0(a3)
  0040A504: 01002025 or          a0,t0,zero
  0040A508: 24A5FFFF addiu       a1,a1,0xFFFF
  0040A50C: 10600004 beq         zero,v1,0040A520
  0040A510: 00000000 nop
  0040A514: 00602025 or          a0,v1,zero
  0040A518: 10000001 b           0040A520
  0040A51C: 24E70001 addiu       a3,a3,1
  0040A520: A0440000 sb          a0,0(v0)
  0040A524: 1CA0FFF6 bgtz        a1,0040A500
  0040A528: 24420001 addiu       v0,v0,1
  0040A52C: 04A00011 bltz        a1,0040A574
  0040A530: A0400000 sb          zero,0(v0)
  0040A534: 80F80000 lb          t8,0(a3)
  0040A538: 2B010035 slti        at,t8,0x35
  0040A53C: 5420000E bnel        zero,at,0040A578
  0040A540: 8FA90028 lw          t1,0x28(sp)
  0040A544: 8043FFFF lb          v1,0xFFFF(v0)
  0040A548: 24040039 addiu       a0,zero,0x39
  0040A54C: 2442FFFF addiu       v0,v0,0xFFFF
  0040A550: 54830007 bnel        v1,a0,0040A570
  0040A554: 24790001 addiu       t9,v1,1
  0040A558: 8043FFFF lb          v1,0xFFFF(v0)
  0040A55C: A0480000 sb          t0,0(v0)
  0040A560: 2442FFFF addiu       v0,v0,0xFFFF
  0040A564: 5083FFFD beql        v1,a0,0040A55C
  0040A568: 8043FFFF lb          v1,0xFFFF(v0)
  0040A56C: 24790001 addiu       t9,v1,1
  0040A570: A0590000 sb          t9,0(v0)
  0040A574: 8FA90028 lw          t1,0x28(sp)
  0040A578: 24010031 addiu       at,zero,0x31
  0040A57C: 8FA40028 lw          a0,0x28(sp)
  0040A580: 812A0000 lb          t2,0(t1)
  0040A584: 15410005 bne         at,t2,0040A59C
  0040A588: 00000000 nop
  0040A58C: 8CCB0004 lw          t3,4(a2)
  0040A590: 256C0001 addiu       t4,t3,1
  0040A594: 10000003 b           0040A5A4
  0040A598: ACCC0004 sw          t4,4(a2)
  0040A59C: 0C102373 jal         strcpy
  0040A5A0: 8FA50018 lw          a1,0x18(sp)
  0040A5A4: 8FBF0014 lw          ra,0x14(sp)
  0040A5A8: 03E00008 jr          ra
  0040A5AC: 27BD0028 addiu       sp,sp,0x28
__crtLCMapStringW:
  0040A5B0: 27BDFFC0 addiu       sp,sp,0xFFC0
  0040A5B4: 3C030041 lui         v1,0x41
  0040A5B8: 8C63EA4C lw          v1,0xEA4C(v1)
  0040A5BC: AFBF0024 sw          ra,0x24(sp)
  0040A5C0: AFA40040 sw          a0,0x40(sp)
  0040A5C4: AFA50044 sw          a1,0x44(sp)
  0040A5C8: AFA60048 sw          a2,0x48(sp)
  0040A5CC: AFA7004C sw          a3,0x4C(sp)
  0040A5D0: 1460001A bne         zero,v1,0040A63C
  0040A5D4: 00002025 or          a0,zero,zero
  0040A5D8: 3C0E0041 lui         t6,0x41
  0040A5DC: 8DCE1258 lw          t6,0x1258(t6)
  0040A5E0: 3C060041 lui         a2,0x41
  0040A5E4: 24C6D520 addiu       a2,a2,0xD520
  0040A5E8: 24050100 addiu       a1,zero,0x100
  0040A5EC: 24070001 addiu       a3,zero,1
  0040A5F0: AFA00010 sw          zero,0x10(sp)
  0040A5F4: 01C0F809 jalr        ra,t6
  0040A5F8: AFA00014 sw          zero,0x14(sp)
  0040A5FC: 5440000F bnel        zero,v0,0040A63C
  0040A600: 24030001 addiu       v1,zero,1
  0040A604: 3C0F0041 lui         t7,0x41
  0040A608: 8DEF1254 lw          t7,0x1254(t7)
  0040A60C: 3C060041 lui         a2,0x41
  0040A610: 24C6D51C addiu       a2,a2,0xD51C
  0040A614: 00002025 or          a0,zero,zero
  0040A618: 24050100 addiu       a1,zero,0x100
  0040A61C: 24070001 addiu       a3,zero,1
  0040A620: AFA00010 sw          zero,0x10(sp)
  0040A624: 01E0F809 jalr        ra,t7
  0040A628: AFA00014 sw          zero,0x14(sp)
  0040A62C: 54400003 bnel        zero,v0,0040A63C
  0040A630: 24030002 addiu       v1,zero,2
  0040A634: 10000099 b           0040A89C
  0040A638: 00001025 or          v0,zero,zero
  0040A63C: 8FB8004C lw          t8,0x4C(sp)
  0040A640: 8FA40048 lw          a0,0x48(sp)
  0040A644: 3C010041 lui         at,0x41
  0040A648: 1B000006 blez        t8,0040A664
  0040A64C: 03002825 or          a1,t8,zero
  0040A650: 0C102AEE jal         wcsncnt
  0040A654: AC23EA4C sw          v1,0xEA4C(at)
  0040A658: 3C030041 lui         v1,0x41
  0040A65C: 8C63EA4C lw          v1,0xEA4C(v1)
  0040A660: AFA2004C sw          v0,0x4C(sp)
  0040A664: 24010001 addiu       at,zero,1
  0040A668: 1461000F bne         at,v1,0040A6A8
  0040A66C: 3C080041 lui         t0,0x41
  0040A670: 8D081258 lw          t0,0x1258(t0)
  0040A674: 8FA20054 lw          v0,0x54(sp)
  0040A678: 8FB90050 lw          t9,0x50(sp)
  0040A67C: 3C010041 lui         at,0x41
  0040A680: AC23EA4C sw          v1,0xEA4C(at)
  0040A684: 8FA40040 lw          a0,0x40(sp)
  0040A688: 8FA50044 lw          a1,0x44(sp)
  0040A68C: 8FA60048 lw          a2,0x48(sp)
  0040A690: 8FA7004C lw          a3,0x4C(sp)
  0040A694: AFA20014 sw          v0,0x14(sp)
  0040A698: 0100F809 jalr        ra,t0
  0040A69C: AFB90010 sw          t9,0x10(sp)
  0040A6A0: 1000007F b           0040A8A0
  0040A6A4: 8FBF0024 lw          ra,0x24(sp)
  0040A6A8: 3C010041 lui         at,0x41
  0040A6AC: AC23EA4C sw          v1,0xEA4C(at)
  0040A6B0: 24010002 addiu       at,zero,2
  0040A6B4: 14610079 bne         at,v1,0040A89C
  0040A6B8: 24050220 addiu       a1,zero,0x220
  0040A6BC: 8FA90058 lw          t1,0x58(sp)
  0040A6C0: AFA00038 sw          zero,0x38(sp)
  0040A6C4: 3C0A0041 lui         t2,0x41
  0040A6C8: 15200003 bne         zero,t1,0040A6D8
  0040A6CC: 3C0B0041 lui         t3,0x41
  0040A6D0: 8D4AE7CC lw          t2,0xE7CC(t2)
  0040A6D4: AFAA0058 sw          t2,0x58(sp)
  0040A6D8: 8D6B1228 lw          t3,0x1228(t3)
  0040A6DC: 8FA40058 lw          a0,0x58(sp)
  0040A6E0: 8FA60048 lw          a2,0x48(sp)
  0040A6E4: 8FA7004C lw          a3,0x4C(sp)
  0040A6E8: AFA00010 sw          zero,0x10(sp)
  0040A6EC: AFA00014 sw          zero,0x14(sp)
  0040A6F0: AFA00018 sw          zero,0x18(sp)
  0040A6F4: 0160F809 jalr        ra,t3
  0040A6F8: AFA0001C sw          zero,0x1C(sp)
  0040A6FC: 00401825 or          v1,v0,zero
  0040A700: 50400066 beql        zero,v0,0040A89C
  0040A704: 00001025 or          v0,zero,zero
  0040A708: 00602025 or          a0,v1,zero
  0040A70C: 0C1020C7 jal         malloc
  0040A710: AFA30034 sw          v1,0x34(sp)
  0040A714: 00401825 or          v1,v0,zero
  0040A718: 50400060 beql        zero,v0,0040A89C
  0040A71C: 00001025 or          v0,zero,zero
  0040A720: 3C0D0041 lui         t5,0x41
  0040A724: 8DAD1228 lw          t5,0x1228(t5)
  0040A728: 8FAC0034 lw          t4,0x34(sp)
  0040A72C: 8FA40058 lw          a0,0x58(sp)
  0040A730: 24050220 addiu       a1,zero,0x220
  0040A734: 8FA60048 lw          a2,0x48(sp)
  0040A738: 8FA7004C lw          a3,0x4C(sp)
  0040A73C: AFA30010 sw          v1,0x10(sp)
  0040A740: AFA00018 sw          zero,0x18(sp)
  0040A744: AFA0001C sw          zero,0x1C(sp)
  0040A748: AFA3003C sw          v1,0x3C(sp)
  0040A74C: 01A0F809 jalr        ra,t5
  0040A750: AFAC0014 sw          t4,0x14(sp)
  0040A754: 1040004C beq         zero,v0,$error_cleanup$89
  0040A758: 8FA40040 lw          a0,0x40(sp)
  0040A75C: 3C0E0041 lui         t6,0x41
  0040A760: 8DCE1254 lw          t6,0x1254(t6)
  0040A764: 8FA50044 lw          a1,0x44(sp)
  0040A768: 8FA6003C lw          a2,0x3C(sp)
  0040A76C: 8FA70034 lw          a3,0x34(sp)
  0040A770: AFA00010 sw          zero,0x10(sp)
  0040A774: 01C0F809 jalr        ra,t6
  0040A778: AFA00014 sw          zero,0x14(sp)
  0040A77C: 10400042 beq         zero,v0,$error_cleanup$89
  0040A780: 00402025 or          a0,v0,zero
  0040A784: 0C1020C7 jal         malloc
  0040A788: AFA20030 sw          v0,0x30(sp)
  0040A78C: 1040003E beq         zero,v0,$error_cleanup$89
  0040A790: AFA20038 sw          v0,0x38(sp)
  0040A794: 3C190041 lui         t9,0x41
  0040A798: 8F391254 lw          t9,0x1254(t9)
  0040A79C: 8FB80030 lw          t8,0x30(sp)
  0040A7A0: 8FA40040 lw          a0,0x40(sp)
  0040A7A4: 8FA50044 lw          a1,0x44(sp)
  0040A7A8: 8FA6003C lw          a2,0x3C(sp)
  0040A7AC: 8FA70034 lw          a3,0x34(sp)
  0040A7B0: AFA20010 sw          v0,0x10(sp)
  0040A7B4: 0320F809 jalr        ra,t9
  0040A7B8: AFB80014 sw          t8,0x14(sp)
  0040A7BC: 10400032 beq         zero,v0,$error_cleanup$89
  0040A7C0: 8FA70030 lw          a3,0x30(sp)
  0040A7C4: 8FA80044 lw          t0,0x44(sp)
  0040A7C8: 8FA20054 lw          v0,0x54(sp)
  0040A7CC: 31090400 andi        t1,t0,0x400
  0040A7D0: 1120000E beq         zero,t1,0040A80C
  0040A7D4: 00000000 nop
  0040A7D8: 8FA20054 lw          v0,0x54(sp)
  0040A7DC: 00E01825 or          v1,a3,zero
  0040A7E0: 8FA40050 lw          a0,0x50(sp)
  0040A7E4: 10400021 beq         zero,v0,0040A86C
  0040A7E8: 0047082A slt         at,v0,a3
  0040A7EC: 54200002 bnel        zero,at,0040A7F8
  0040A7F0: 00403025 or          a2,v0,zero
  0040A7F4: 00E03025 or          a2,a3,zero
  0040A7F8: 8FA50038 lw          a1,0x38(sp)
  0040A7FC: 0C10239D jal         strncpy
  0040A800: AFA3002C sw          v1,0x2C(sp)
  0040A804: 10000019 b           0040A86C
  0040A808: 8FA3002C lw          v1,0x2C(sp)
  0040A80C: 1440000D bne         zero,v0,0040A844
  0040A810: 8FA40058 lw          a0,0x58(sp)
  0040A814: 3C0A0041 lui         t2,0x41
  0040A818: 8D4A1294 lw          t2,0x1294(t2)
  0040A81C: 8FA40058 lw          a0,0x58(sp)
  0040A820: 24050001 addiu       a1,zero,1
  0040A824: 8FA60038 lw          a2,0x38(sp)
  0040A828: AFA00010 sw          zero,0x10(sp)
  0040A82C: 0140F809 jalr        ra,t2
  0040A830: AFA00014 sw          zero,0x14(sp)
  0040A834: 1440000D bne         zero,v0,0040A86C
  0040A838: 00401825 or          v1,v0,zero
  0040A83C: 10000012 b           $error_cleanup$89
  0040A840: 00000000 nop
  0040A844: 3C0C0041 lui         t4,0x41
  0040A848: 8D8C1294 lw          t4,0x1294(t4)
  0040A84C: 8FAB0050 lw          t3,0x50(sp)
  0040A850: 24050001 addiu       a1,zero,1
  0040A854: 8FA60038 lw          a2,0x38(sp)
  0040A858: AFA20014 sw          v0,0x14(sp)
  0040A85C: 0180F809 jalr        ra,t4
  0040A860: AFAB0010 sw          t3,0x10(sp)
  0040A864: 10400008 beq         zero,v0,$error_cleanup$89
  0040A868: 00401825 or          v1,v0,zero
  0040A86C: 8FA4003C lw          a0,0x3C(sp)
  0040A870: 0C1020F9 jal         free
  0040A874: AFA3002C sw          v1,0x2C(sp)
  0040A878: 0C1020F9 jal         free
  0040A87C: 8FA40038 lw          a0,0x38(sp)
  0040A880: 10000006 b           0040A89C
  0040A884: 8FA2002C lw          v0,0x2C(sp)
$error_cleanup$89:
  0040A888: 0C1020F9 jal         free
  0040A88C: 8FA4003C lw          a0,0x3C(sp)
  0040A890: 0C1020F9 jal         free
  0040A894: 8FA40038 lw          a0,0x38(sp)
  0040A898: 00001025 or          v0,zero,zero
  0040A89C: 8FBF0024 lw          ra,0x24(sp)
  0040A8A0: 03E00008 jr          ra
  0040A8A4: 27BD0040 addiu       sp,sp,0x40
__crtLCMapStringA:
  0040A8A8: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040A8AC: 3C030041 lui         v1,0x41
  0040A8B0: 8C63EA50 lw          v1,0xEA50(v1)
  0040A8B4: AFBF0024 sw          ra,0x24(sp)
  0040A8B8: AFA40038 sw          a0,0x38(sp)
  0040A8BC: AFA5003C sw          a1,0x3C(sp)
  0040A8C0: AFA60040 sw          a2,0x40(sp)
  0040A8C4: AFA70044 sw          a3,0x44(sp)
  0040A8C8: 1460001A bne         zero,v1,0040A934
  0040A8CC: 00002025 or          a0,zero,zero
  0040A8D0: 3C0E0041 lui         t6,0x41
  0040A8D4: 8DCE1254 lw          t6,0x1254(t6)
  0040A8D8: 3C060041 lui         a2,0x41
  0040A8DC: 24C6D51C addiu       a2,a2,0xD51C
  0040A8E0: 24050100 addiu       a1,zero,0x100
  0040A8E4: 24070001 addiu       a3,zero,1
  0040A8E8: AFA00010 sw          zero,0x10(sp)
  0040A8EC: 01C0F809 jalr        ra,t6
  0040A8F0: AFA00014 sw          zero,0x14(sp)
  0040A8F4: 5440000F bnel        zero,v0,0040A934
  0040A8F8: 24030002 addiu       v1,zero,2
  0040A8FC: 3C0F0041 lui         t7,0x41
  0040A900: 8DEF1258 lw          t7,0x1258(t7)
  0040A904: 3C060041 lui         a2,0x41
  0040A908: 24C6D520 addiu       a2,a2,0xD520
  0040A90C: 00002025 or          a0,zero,zero
  0040A910: 24050100 addiu       a1,zero,0x100
  0040A914: 24070001 addiu       a3,zero,1
  0040A918: AFA00010 sw          zero,0x10(sp)
  0040A91C: 01E0F809 jalr        ra,t7
  0040A920: AFA00014 sw          zero,0x14(sp)
  0040A924: 54400003 bnel        zero,v0,0040A934
  0040A928: 24030001 addiu       v1,zero,1
  0040A92C: 1000009F b           0040ABAC
  0040A930: 00001025 or          v0,zero,zero
  0040A934: 8FB80044 lw          t8,0x44(sp)
  0040A938: 8FA40040 lw          a0,0x40(sp)
  0040A93C: 3C010041 lui         at,0x41
  0040A940: 1B000006 blez        t8,0040A95C
  0040A944: 03002825 or          a1,t8,zero
  0040A948: 0C102B04 jal         strncnt
  0040A94C: AC23EA50 sw          v1,0xEA50(at)
  0040A950: 3C030041 lui         v1,0x41
  0040A954: 8C63EA50 lw          v1,0xEA50(v1)
  0040A958: AFA20044 sw          v0,0x44(sp)
  0040A95C: 24010002 addiu       at,zero,2
  0040A960: 1461000F bne         at,v1,0040A9A0
  0040A964: 3C080041 lui         t0,0x41
  0040A968: 3C010041 lui         at,0x41
  0040A96C: 8D081254 lw          t0,0x1254(t0)
  0040A970: AC23EA50 sw          v1,0xEA50(at)
  0040A974: 8FA3004C lw          v1,0x4C(sp)
  0040A978: 8FB90048 lw          t9,0x48(sp)
  0040A97C: 8FA40038 lw          a0,0x38(sp)
  0040A980: 8FA5003C lw          a1,0x3C(sp)
  0040A984: 8FA60040 lw          a2,0x40(sp)
  0040A988: 8FA70044 lw          a3,0x44(sp)
  0040A98C: AFA30014 sw          v1,0x14(sp)
  0040A990: 0100F809 jalr        ra,t0
  0040A994: AFB90010 sw          t9,0x10(sp)
  0040A998: 10000085 b           0040ABB0
  0040A99C: 8FBF0024 lw          ra,0x24(sp)
  0040A9A0: 3C010041 lui         at,0x41
  0040A9A4: AC23EA50 sw          v1,0xEA50(at)
  0040A9A8: 24010001 addiu       at,zero,1
  0040A9AC: 1461007F bne         at,v1,0040ABAC
  0040A9B0: 24050009 addiu       a1,zero,9
  0040A9B4: 8FA90050 lw          t1,0x50(sp)
  0040A9B8: AFA00030 sw          zero,0x30(sp)
  0040A9BC: 3C0A0041 lui         t2,0x41
  0040A9C0: 15200003 bne         zero,t1,0040A9D0
  0040A9C4: 3C0B0041 lui         t3,0x41
  0040A9C8: 8D4AE7CC lw          t2,0xE7CC(t2)
  0040A9CC: AFAA0050 sw          t2,0x50(sp)
  0040A9D0: 8D6B1294 lw          t3,0x1294(t3)
  0040A9D4: 8FA40050 lw          a0,0x50(sp)
  0040A9D8: 8FA60040 lw          a2,0x40(sp)
  0040A9DC: 8FA70044 lw          a3,0x44(sp)
  0040A9E0: AFA00010 sw          zero,0x10(sp)
  0040A9E4: 0160F809 jalr        ra,t3
  0040A9E8: AFA00014 sw          zero,0x14(sp)
  0040A9EC: 00401825 or          v1,v0,zero
  0040A9F0: 5040006E beql        zero,v0,0040ABAC
  0040A9F4: 00001025 or          v0,zero,zero
  0040A9F8: 00032040 sll         a0,v1,1
  0040A9FC: 0C1020C7 jal         malloc
  0040AA00: AFA3002C sw          v1,0x2C(sp)
  0040AA04: 00401825 or          v1,v0,zero
  0040AA08: 50400068 beql        zero,v0,0040ABAC
  0040AA0C: 00001025 or          v0,zero,zero
  0040AA10: 3C0D0041 lui         t5,0x41
  0040AA14: 8DAD1294 lw          t5,0x1294(t5)
  0040AA18: 8FAC002C lw          t4,0x2C(sp)
  0040AA1C: 8FA40050 lw          a0,0x50(sp)
  0040AA20: 24050001 addiu       a1,zero,1
  0040AA24: 8FA60040 lw          a2,0x40(sp)
  0040AA28: 8FA70044 lw          a3,0x44(sp)
  0040AA2C: AFA30010 sw          v1,0x10(sp)
  0040AA30: AFA30034 sw          v1,0x34(sp)
  0040AA34: 01A0F809 jalr        ra,t5
  0040AA38: AFAC0014 sw          t4,0x14(sp)
  0040AA3C: 10400056 beq         zero,v0,$error_cleanup$127
  0040AA40: 8FA40038 lw          a0,0x38(sp)
  0040AA44: 3C0E0041 lui         t6,0x41
  0040AA48: 8DCE1258 lw          t6,0x1258(t6)
  0040AA4C: 8FA5003C lw          a1,0x3C(sp)
  0040AA50: 8FA60034 lw          a2,0x34(sp)
  0040AA54: 8FA7002C lw          a3,0x2C(sp)
  0040AA58: AFA00010 sw          zero,0x10(sp)
  0040AA5C: 01C0F809 jalr        ra,t6
  0040AA60: AFA00014 sw          zero,0x14(sp)
  0040AA64: 1040004C beq         zero,v0,$error_cleanup$127
  0040AA68: AFA20028 sw          v0,0x28(sp)
  0040AA6C: 8FAF003C lw          t7,0x3C(sp)
  0040AA70: 8FA3004C lw          v1,0x4C(sp)
  0040AA74: 8FA40028 lw          a0,0x28(sp)
  0040AA78: 31F80400 andi        t8,t7,0x400
  0040AA7C: 13000012 beq         zero,t8,0040AAC8
  0040AA80: 00000000 nop
  0040AA84: 1060003E beq         zero,v1,0040AB80
  0040AA88: 0062082A slt         at,v1,v0
  0040AA8C: 14200042 bne         zero,at,$error_cleanup$127
  0040AA90: 8FA40038 lw          a0,0x38(sp)
  0040AA94: 3C080041 lui         t0,0x41
  0040AA98: 8D081258 lw          t0,0x1258(t0)
  0040AA9C: 8FB90048 lw          t9,0x48(sp)
  0040AAA0: 01E02825 or          a1,t7,zero
  0040AAA4: 8FA60034 lw          a2,0x34(sp)
  0040AAA8: 8FA7002C lw          a3,0x2C(sp)
  0040AAAC: AFA30014 sw          v1,0x14(sp)
  0040AAB0: 0100F809 jalr        ra,t0
  0040AAB4: AFB90010 sw          t9,0x10(sp)
  0040AAB8: 14400031 bne         zero,v0,0040AB80
  0040AABC: 00000000 nop
  0040AAC0: 10000035 b           $error_cleanup$127
  0040AAC4: 00000000 nop
  0040AAC8: 0C1020C7 jal         malloc
  0040AACC: 00042040 sll         a0,a0,1
  0040AAD0: 10400031 beq         zero,v0,$error_cleanup$127
  0040AAD4: AFA20030 sw          v0,0x30(sp)
  0040AAD8: 3C0B0041 lui         t3,0x41
  0040AADC: 8D6B1258 lw          t3,0x1258(t3)
  0040AAE0: 8FAA0028 lw          t2,0x28(sp)
  0040AAE4: 8FA40038 lw          a0,0x38(sp)
  0040AAE8: 8FA5003C lw          a1,0x3C(sp)
  0040AAEC: 8FA60034 lw          a2,0x34(sp)
  0040AAF0: 8FA7002C lw          a3,0x2C(sp)
  0040AAF4: AFA20010 sw          v0,0x10(sp)
  0040AAF8: 0160F809 jalr        ra,t3
  0040AAFC: AFAA0014 sw          t2,0x14(sp)
  0040AB00: 10400025 beq         zero,v0,$error_cleanup$127
  0040AB04: 8FA3004C lw          v1,0x4C(sp)
  0040AB08: 14600010 bne         zero,v1,0040AB4C
  0040AB0C: 8FA40050 lw          a0,0x50(sp)
  0040AB10: 3C0C0041 lui         t4,0x41
  0040AB14: 8D8C1228 lw          t4,0x1228(t4)
  0040AB18: 8FA40050 lw          a0,0x50(sp)
  0040AB1C: 24050220 addiu       a1,zero,0x220
  0040AB20: 8FA60030 lw          a2,0x30(sp)
  0040AB24: 8FA70028 lw          a3,0x28(sp)
  0040AB28: AFA00010 sw          zero,0x10(sp)
  0040AB2C: AFA00014 sw          zero,0x14(sp)
  0040AB30: AFA00018 sw          zero,0x18(sp)
  0040AB34: 0180F809 jalr        ra,t4
  0040AB38: AFA0001C sw          zero,0x1C(sp)
  0040AB3C: 14400010 bne         zero,v0,0040AB80
  0040AB40: AFA20028 sw          v0,0x28(sp)
  0040AB44: 10000014 b           $error_cleanup$127
  0040AB48: 00000000 nop
  0040AB4C: 3C0E0041 lui         t6,0x41
  0040AB50: 8DCE1228 lw          t6,0x1228(t6)
  0040AB54: 8FAD0048 lw          t5,0x48(sp)
  0040AB58: 24050220 addiu       a1,zero,0x220
  0040AB5C: 8FA60030 lw          a2,0x30(sp)
  0040AB60: 8FA70028 lw          a3,0x28(sp)
  0040AB64: AFA30014 sw          v1,0x14(sp)
  0040AB68: AFA00018 sw          zero,0x18(sp)
  0040AB6C: AFA0001C sw          zero,0x1C(sp)
  0040AB70: 01C0F809 jalr        ra,t6
  0040AB74: AFAD0010 sw          t5,0x10(sp)
  0040AB78: 10400007 beq         zero,v0,$error_cleanup$127
  0040AB7C: AFA20028 sw          v0,0x28(sp)
  0040AB80: 0C1020F9 jal         free
  0040AB84: 8FA40034 lw          a0,0x34(sp)
  0040AB88: 0C1020F9 jal         free
  0040AB8C: 8FA40030 lw          a0,0x30(sp)
  0040AB90: 10000006 b           0040ABAC
  0040AB94: 8FA20028 lw          v0,0x28(sp)
$error_cleanup$127:
  0040AB98: 0C1020F9 jal         free
  0040AB9C: 8FA40034 lw          a0,0x34(sp)
  0040ABA0: 0C1020F9 jal         free
  0040ABA4: 8FA40030 lw          a0,0x30(sp)
  0040ABA8: 00001025 or          v0,zero,zero
  0040ABAC: 8FBF0024 lw          ra,0x24(sp)
  0040ABB0: 03E00008 jr          ra
  0040ABB4: 27BD0038 addiu       sp,sp,0x38
wcsncnt:
  0040ABB8: 00801825 or          v1,a0,zero
  0040ABBC: 10A0000B beq         zero,a1,0040ABEC
  0040ABC0: 24A6FFFF addiu       a2,a1,0xFFFF
  0040ABC4: 948E0000 lhu         t6,0(a0)
  0040ABC8: 51C00009 beql        zero,t6,0040ABF0
  0040ABCC: 94780000 lhu         t8,0(v1)
  0040ABD0: 00C01025 or          v0,a2,zero
  0040ABD4: 24630002 addiu       v1,v1,2
  0040ABD8: 10C00004 beq         zero,a2,0040ABEC
  0040ABDC: 24C6FFFF addiu       a2,a2,0xFFFF
  0040ABE0: 946F0000 lhu         t7,0(v1)
  0040ABE4: 55E0FFFB bnel        zero,t7,0040ABD4
  0040ABE8: 00C01025 or          v0,a2,zero
  0040ABEC: 94780000 lhu         t8,0(v1)
  0040ABF0: 00A01025 or          v0,a1,zero
  0040ABF4: 17000004 bne         zero,t8,0040AC08
  0040ABF8: 00000000 nop
  0040ABFC: 00641023 subu        v0,v1,a0
  0040AC00: 03E00008 jr          ra
  0040AC04: 00021043 sra         v0,v0,1
  0040AC08: 03E00008 jr          ra
  0040AC0C: 00000000 nop
strncnt:
  0040AC10: 00801825 or          v1,a0,zero
  0040AC14: 10A0000B beq         zero,a1,0040AC44
  0040AC18: 24A6FFFF addiu       a2,a1,0xFFFF
  0040AC1C: 808E0000 lb          t6,0(a0)
  0040AC20: 51C00009 beql        zero,t6,0040AC48
  0040AC24: 80780000 lb          t8,0(v1)
  0040AC28: 00C01025 or          v0,a2,zero
  0040AC2C: 24630001 addiu       v1,v1,1
  0040AC30: 10C00004 beq         zero,a2,0040AC44
  0040AC34: 24C6FFFF addiu       a2,a2,0xFFFF
  0040AC38: 806F0000 lb          t7,0(v1)
  0040AC3C: 55E0FFFB bnel        zero,t7,0040AC2C
  0040AC40: 00C01025 or          v0,a2,zero
  0040AC44: 80780000 lb          t8,0(v1)
  0040AC48: 00A01025 or          v0,a1,zero
  0040AC4C: 17000003 bne         zero,t8,0040AC5C
  0040AC50: 00000000 nop
  0040AC54: 03E00008 jr          ra
  0040AC58: 00641023 subu        v0,v1,a0
  0040AC5C: 03E00008 jr          ra
  0040AC60: 00000000 nop
__crtGetStringTypeW:
  0040AC64: 27BDFFB0 addiu       sp,sp,0xFFB0
  0040AC68: 3C020041 lui         v0,0x41
  0040AC6C: 8C42EA54 lw          v0,0xEA54(v0)
  0040AC70: AFBF0024 sw          ra,0x24(sp)
  0040AC74: AFA40050 sw          a0,0x50(sp)
  0040AC78: AFA50054 sw          a1,0x54(sp)
  0040AC7C: AFA60058 sw          a2,0x58(sp)
  0040AC80: AFA7005C sw          a3,0x5C(sp)
  0040AC84: 14400018 bne         zero,v0,0040ACE8
  0040AC88: 24040001 addiu       a0,zero,1
  0040AC8C: 3C0E0041 lui         t6,0x41
  0040AC90: 8DCE1260 lw          t6,0x1260(t6)
  0040AC94: 3C050041 lui         a1,0x41
  0040AC98: 24A5D520 addiu       a1,a1,0xD520
  0040AC9C: 24060001 addiu       a2,zero,1
  0040ACA0: 01C0F809 jalr        ra,t6
  0040ACA4: 27A7004E addiu       a3,sp,0x4E
  0040ACA8: 5440000F bnel        zero,v0,0040ACE8
  0040ACAC: 24020001 addiu       v0,zero,1
  0040ACB0: 3C180041 lui         t8,0x41
  0040ACB4: 8F18125C lw          t8,0x125C(t8)
  0040ACB8: 3C060041 lui         a2,0x41
  0040ACBC: 27AF004E addiu       t7,sp,0x4E
  0040ACC0: AFAF0010 sw          t7,0x10(sp)
  0040ACC4: 24C6D51C addiu       a2,a2,0xD51C
  0040ACC8: 00002025 or          a0,zero,zero
  0040ACCC: 24050001 addiu       a1,zero,1
  0040ACD0: 0300F809 jalr        ra,t8
  0040ACD4: 24070001 addiu       a3,zero,1
  0040ACD8: 54400003 bnel        zero,v0,0040ACE8
  0040ACDC: 24020002 addiu       v0,zero,2
  0040ACE0: 1000006A b           0040AE8C
  0040ACE4: 00001025 or          v0,zero,zero
  0040ACE8: 24010001 addiu       at,zero,1
  0040ACEC: 1441000B bne         at,v0,0040AD1C
  0040ACF0: 3C190041 lui         t9,0x41
  0040ACF4: 8F391260 lw          t9,0x1260(t9)
  0040ACF8: 3C010041 lui         at,0x41
  0040ACFC: AC22EA54 sw          v0,0xEA54(at)
  0040AD00: 8FA40050 lw          a0,0x50(sp)
  0040AD04: 8FA50054 lw          a1,0x54(sp)
  0040AD08: 8FA60058 lw          a2,0x58(sp)
  0040AD0C: 0320F809 jalr        ra,t9
  0040AD10: 8FA7005C lw          a3,0x5C(sp)
  0040AD14: 1000005E b           0040AE90
  0040AD18: 8FBF0024 lw          ra,0x24(sp)
  0040AD1C: 3C010041 lui         at,0x41
  0040AD20: AC22EA54 sw          v0,0xEA54(at)
  0040AD24: 24010002 addiu       at,zero,2
  0040AD28: 14410058 bne         at,v0,0040AE8C
  0040AD2C: 24050220 addiu       a1,zero,0x220
  0040AD30: 8FA80060 lw          t0,0x60(sp)
  0040AD34: AFA00048 sw          zero,0x48(sp)
  0040AD38: AFA00040 sw          zero,0x40(sp)
  0040AD3C: 15000004 bne         zero,t0,0040AD50
  0040AD40: 3C0A0041 lui         t2,0x41
  0040AD44: 3C090041 lui         t1,0x41
  0040AD48: 8D29E7CC lw          t1,0xE7CC(t1)
  0040AD4C: AFA90060 sw          t1,0x60(sp)
  0040AD50: 8D4A1228 lw          t2,0x1228(t2)
  0040AD54: 8FA40060 lw          a0,0x60(sp)
  0040AD58: 8FA60054 lw          a2,0x54(sp)
  0040AD5C: 8FA70058 lw          a3,0x58(sp)
  0040AD60: AFA00010 sw          zero,0x10(sp)
  0040AD64: AFA00014 sw          zero,0x14(sp)
  0040AD68: AFA00018 sw          zero,0x18(sp)
  0040AD6C: 0140F809 jalr        ra,t2
  0040AD70: AFA0001C sw          zero,0x1C(sp)
  0040AD74: 00402825 or          a1,v0,zero
  0040AD78: 50400044 beql        zero,v0,0040AE8C
  0040AD7C: 00001025 or          v0,zero,zero
  0040AD80: 24040001 addiu       a0,zero,1
  0040AD84: 0C1030BE jal         calloc
  0040AD88: AFA5003C sw          a1,0x3C(sp)
  0040AD8C: 00401825 or          v1,v0,zero
  0040AD90: 5040003E beql        zero,v0,0040AE8C
  0040AD94: 00001025 or          v0,zero,zero
  0040AD98: 3C0C0041 lui         t4,0x41
  0040AD9C: 8D8C1228 lw          t4,0x1228(t4)
  0040ADA0: 8FAB003C lw          t3,0x3C(sp)
  0040ADA4: 8FA40060 lw          a0,0x60(sp)
  0040ADA8: 24050220 addiu       a1,zero,0x220
  0040ADAC: 8FA60054 lw          a2,0x54(sp)
  0040ADB0: 8FA70058 lw          a3,0x58(sp)
  0040ADB4: AFA30010 sw          v1,0x10(sp)
  0040ADB8: AFA00018 sw          zero,0x18(sp)
  0040ADBC: AFA0001C sw          zero,0x1C(sp)
  0040ADC0: AFA30044 sw          v1,0x44(sp)
  0040ADC4: 0180F809 jalr        ra,t4
  0040ADC8: AFAB0014 sw          t3,0x14(sp)
  0040ADCC: 1040002A beq         zero,v0,$done$54
  0040ADD0: 8FA4003C lw          a0,0x3C(sp)
  0040ADD4: 00042040 sll         a0,a0,1
  0040ADD8: 0C1020C7 jal         malloc
  0040ADDC: 24840002 addiu       a0,a0,2
  0040ADE0: 10400025 beq         zero,v0,$done$54
  0040ADE4: AFA20040 sw          v0,0x40(sp)
  0040ADE8: 8FA40064 lw          a0,0x64(sp)
  0040ADEC: 8FA20058 lw          v0,0x58(sp)
  0040ADF0: 8FAD0040 lw          t5,0x40(sp)
  0040ADF4: 14800003 bne         zero,a0,0040AE04
  0040ADF8: 00021040 sll         v0,v0,1
  0040ADFC: 3C040041 lui         a0,0x41
  0040AE00: 8C84E7BC lw          a0,0xE7BC(a0)
  0040AE04: 01A21821 addu        v1,t5,v0
  0040AE08: 340FFFFF ori         t7,zero,0xFFFF
  0040AE0C: A46F0000 sh          t7,0(v1)
  0040AE10: A46FFFFE sh          t7,0xFFFE(v1)
  0040AE14: 3C190041 lui         t9,0x41
  0040AE18: 8F39125C lw          t9,0x125C(t9)
  0040AE1C: 8FB80040 lw          t8,0x40(sp)
  0040AE20: AFA3002C sw          v1,0x2C(sp)
  0040AE24: AFA20030 sw          v0,0x30(sp)
  0040AE28: 8FA7003C lw          a3,0x3C(sp)
  0040AE2C: 8FA60044 lw          a2,0x44(sp)
  0040AE30: 8FA50050 lw          a1,0x50(sp)
  0040AE34: 0320F809 jalr        ra,t9
  0040AE38: AFB80010 sw          t8,0x10(sp)
  0040AE3C: 8FA3002C lw          v1,0x2C(sp)
  0040AE40: AFA20048 sw          v0,0x48(sp)
  0040AE44: 3404FFFF ori         a0,zero,0xFFFF
  0040AE48: 9468FFFE lhu         t0,0xFFFE(v1)
  0040AE4C: 5088000A beql        t0,a0,$done$54
  0040AE50: AFA00048 sw          zero,0x48(sp)
  0040AE54: 94690000 lhu         t1,0(v1)
  0040AE58: 8FA50040 lw          a1,0x40(sp)
  0040AE5C: 8FA60030 lw          a2,0x30(sp)
  0040AE60: 10890003 beq         t1,a0,0040AE70
  0040AE64: 00000000 nop
  0040AE68: 10000003 b           $done$54
  0040AE6C: AFA00048 sw          zero,0x48(sp)
  0040AE70: 0C1021D5 jal         memmove
  0040AE74: 8FA4005C lw          a0,0x5C(sp)
$done$54:
  0040AE78: 0C1020F9 jal         free
  0040AE7C: 8FA40044 lw          a0,0x44(sp)
  0040AE80: 0C1020F9 jal         free
  0040AE84: 8FA40040 lw          a0,0x40(sp)
  0040AE88: 8FA20048 lw          v0,0x48(sp)
  0040AE8C: 8FBF0024 lw          ra,0x24(sp)
  0040AE90: 03E00008 jr          ra
  0040AE94: 27BD0050 addiu       sp,sp,0x50
__crtGetStringTypeA:
  0040AE98: 27BDFFC8 addiu       sp,sp,0xFFC8
  0040AE9C: 3C020041 lui         v0,0x41
  0040AEA0: 8C42EA58 lw          v0,0xEA58(v0)
  0040AEA4: AFBF001C sw          ra,0x1C(sp)
  0040AEA8: AFA40038 sw          a0,0x38(sp)
  0040AEAC: AFA5003C sw          a1,0x3C(sp)
  0040AEB0: AFA60040 sw          a2,0x40(sp)
  0040AEB4: AFA70044 sw          a3,0x44(sp)
  0040AEB8: 14400018 bne         zero,v0,0040AF1C
  0040AEBC: 00002025 or          a0,zero,zero
  0040AEC0: 3C0F0041 lui         t7,0x41
  0040AEC4: 8DEF125C lw          t7,0x125C(t7)
  0040AEC8: 3C060041 lui         a2,0x41
  0040AECC: 27AE0036 addiu       t6,sp,0x36
  0040AED0: AFAE0010 sw          t6,0x10(sp)
  0040AED4: 24C6D51C addiu       a2,a2,0xD51C
  0040AED8: 24050001 addiu       a1,zero,1
  0040AEDC: 01E0F809 jalr        ra,t7
  0040AEE0: 24070001 addiu       a3,zero,1
  0040AEE4: 5440000D bnel        zero,v0,0040AF1C
  0040AEE8: 24020002 addiu       v0,zero,2
  0040AEEC: 3C180041 lui         t8,0x41
  0040AEF0: 8F181260 lw          t8,0x1260(t8)
  0040AEF4: 3C050041 lui         a1,0x41
  0040AEF8: 24A5D520 addiu       a1,a1,0xD520
  0040AEFC: 24040001 addiu       a0,zero,1
  0040AF00: 24060001 addiu       a2,zero,1
  0040AF04: 0300F809 jalr        ra,t8
  0040AF08: 27A70036 addiu       a3,sp,0x36
  0040AF0C: 54400003 bnel        zero,v0,0040AF1C
  0040AF10: 24020001 addiu       v0,zero,1
  0040AF14: 10000044 b           0040B028
  0040AF18: 00001025 or          v0,zero,zero
  0040AF1C: 24010002 addiu       at,zero,2
  0040AF20: 14410010 bne         at,v0,0040AF64
  0040AF24: 3C080041 lui         t0,0x41
  0040AF28: 8FA4004C lw          a0,0x4C(sp)
  0040AF2C: 3C010041 lui         at,0x41
  0040AF30: AC22EA58 sw          v0,0xEA58(at)
  0040AF34: 14800003 bne         zero,a0,0040AF44
  0040AF38: 8FA50038 lw          a1,0x38(sp)
  0040AF3C: 3C040041 lui         a0,0x41
  0040AF40: 8C84E7BC lw          a0,0xE7BC(a0)
  0040AF44: 8D08125C lw          t0,0x125C(t0)
  0040AF48: 8FB90044 lw          t9,0x44(sp)
  0040AF4C: 8FA6003C lw          a2,0x3C(sp)
  0040AF50: 8FA70040 lw          a3,0x40(sp)
  0040AF54: 0100F809 jalr        ra,t0
  0040AF58: AFB90010 sw          t9,0x10(sp)
  0040AF5C: 10000033 b           0040B02C
  0040AF60: 8FBF001C lw          ra,0x1C(sp)
  0040AF64: 3C010041 lui         at,0x41
  0040AF68: AC22EA58 sw          v0,0xEA58(at)
  0040AF6C: 24010001 addiu       at,zero,1
  0040AF70: 1441002D bne         at,v0,0040B028
  0040AF74: 24050009 addiu       a1,zero,9
  0040AF78: 8FA90048 lw          t1,0x48(sp)
  0040AF7C: AFA00030 sw          zero,0x30(sp)
  0040AF80: AFA0002C sw          zero,0x2C(sp)
  0040AF84: 15200004 bne         zero,t1,0040AF98
  0040AF88: 3C0B0041 lui         t3,0x41
  0040AF8C: 3C0A0041 lui         t2,0x41
  0040AF90: 8D4AE7CC lw          t2,0xE7CC(t2)
  0040AF94: AFAA0048 sw          t2,0x48(sp)
  0040AF98: 8D6B1294 lw          t3,0x1294(t3)
  0040AF9C: 8FA40048 lw          a0,0x48(sp)
  0040AFA0: 8FA6003C lw          a2,0x3C(sp)
  0040AFA4: 8FA70040 lw          a3,0x40(sp)
  0040AFA8: AFA00010 sw          zero,0x10(sp)
  0040AFAC: 0160F809 jalr        ra,t3
  0040AFB0: AFA00014 sw          zero,0x14(sp)
  0040AFB4: 10400019 beq         zero,v0,$done$81
  0040AFB8: 00402825 or          a1,v0,zero
  0040AFBC: 24040002 addiu       a0,zero,2
  0040AFC0: 0C1030BE jal         calloc
  0040AFC4: AFA20028 sw          v0,0x28(sp)
  0040AFC8: 10400014 beq         zero,v0,$done$81
  0040AFCC: AFA2002C sw          v0,0x2C(sp)
  0040AFD0: 3C0E0041 lui         t6,0x41
  0040AFD4: 8DCE1294 lw          t6,0x1294(t6)
  0040AFD8: 8FAD0028 lw          t5,0x28(sp)
  0040AFDC: 8FA40048 lw          a0,0x48(sp)
  0040AFE0: 24050001 addiu       a1,zero,1
  0040AFE4: 8FA6003C lw          a2,0x3C(sp)
  0040AFE8: 8FA70040 lw          a3,0x40(sp)
  0040AFEC: AFA20010 sw          v0,0x10(sp)
  0040AFF0: 01C0F809 jalr        ra,t6
  0040AFF4: AFAD0014 sw          t5,0x14(sp)
  0040AFF8: 10400008 beq         zero,v0,$done$81
  0040AFFC: 00403025 or          a2,v0,zero
  0040B000: 3C0F0041 lui         t7,0x41
  0040B004: 8DEF1260 lw          t7,0x1260(t7)
  0040B008: 8FA40038 lw          a0,0x38(sp)
  0040B00C: 8FA5002C lw          a1,0x2C(sp)
  0040B010: 01E0F809 jalr        ra,t7
  0040B014: 8FA70044 lw          a3,0x44(sp)
  0040B018: AFA20030 sw          v0,0x30(sp)
$done$81:
  0040B01C: 0C1020F9 jal         free
  0040B020: 8FA4002C lw          a0,0x2C(sp)
  0040B024: 8FA20030 lw          v0,0x30(sp)
  0040B028: 8FBF001C lw          ra,0x1C(sp)
  0040B02C: 03E00008 jr          ra
  0040B030: 27BD0038 addiu       sp,sp,0x38
__addl:
  0040B034: 00853821 addu        a3,a0,a1
  0040B038: 00E4082B sltu        at,a3,a0
  0040B03C: 14200004 bne         zero,at,0040B050
  0040B040: 00001825 or          v1,zero,zero
  0040B044: 00E5082B sltu        at,a3,a1
  0040B048: 50200003 beql        zero,at,0040B058
  0040B04C: ACC70000 sw          a3,0(a2)
  0040B050: 24030001 addiu       v1,zero,1
  0040B054: ACC70000 sw          a3,0(a2)
  0040B058: 03E00008 jr          ra
  0040B05C: 00601025 or          v0,v1,zero
__add_12:
  0040B060: 27BDFFE0 addiu       sp,sp,0xFFE0
  0040B064: AFB10018 sw          s1,0x18(sp)
  0040B068: AFB00014 sw          s0,0x14(sp)
  0040B06C: 00808025 or          s0,a0,zero
  0040B070: 00A08825 or          s1,a1,zero
  0040B074: AFBF001C sw          ra,0x1C(sp)
  0040B078: 8E040000 lw          a0,0(s0)
  0040B07C: 8E250000 lw          a1,0(s1)
  0040B080: 0C102C0D jal         __addl
  0040B084: 02003025 or          a2,s0,zero
  0040B088: 10400009 beq         zero,v0,0040B0B0
  0040B08C: 24050001 addiu       a1,zero,1
  0040B090: 8E040004 lw          a0,4(s0)
  0040B094: 0C102C0D jal         __addl
  0040B098: 26060004 addiu       a2,s0,4
  0040B09C: 50400005 beql        zero,v0,0040B0B4
  0040B0A0: 8E040004 lw          a0,4(s0)
  0040B0A4: 8E0E0008 lw          t6,8(s0)
  0040B0A8: 25CF0001 addiu       t7,t6,1
  0040B0AC: AE0F0008 sw          t7,8(s0)
  0040B0B0: 8E040004 lw          a0,4(s0)
  0040B0B4: 8E250004 lw          a1,4(s1)
  0040B0B8: 0C102C0D jal         __addl
  0040B0BC: 26060004 addiu       a2,s0,4
  0040B0C0: 10400004 beq         zero,v0,0040B0D4
  0040B0C4: 26060008 addiu       a2,s0,8
  0040B0C8: 8E180008 lw          t8,8(s0)
  0040B0CC: 27190001 addiu       t9,t8,1
  0040B0D0: AE190008 sw          t9,8(s0)
  0040B0D4: 8E040008 lw          a0,8(s0)
  0040B0D8: 0C102C0D jal         __addl
  0040B0DC: 8E250008 lw          a1,8(s1)
  0040B0E0: 8FB00014 lw          s0,0x14(sp)
  0040B0E4: 8FB10018 lw          s1,0x18(sp)
  0040B0E8: 8FBF001C lw          ra,0x1C(sp)
  0040B0EC: 03E00008 jr          ra
  0040B0F0: 27BD0020 addiu       sp,sp,0x20
__shl_12:
  0040B0F4: 3C068000 lui         a2,0x8000
  0040B0F8: 8C820000 lw          v0,0(a0)
  0040B0FC: 00467024 and         t6,v0,a2
  0040B100: 55C00002 bnel        zero,t6,0040B10C
  0040B104: 24030001 addiu       v1,zero,1
  0040B108: 00001825 or          v1,zero,zero
  0040B10C: 8C850004 lw          a1,4(a0)
  0040B110: 0002C040 sll         t8,v0,1
  0040B114: 00A67824 and         t7,a1,a2
  0040B118: 55E00002 bnel        zero,t7,0040B124
  0040B11C: 24060001 addiu       a2,zero,1
  0040B120: 00003025 or          a2,zero,zero
  0040B124: 8C890008 lw          t1,8(a0)
  0040B128: 0005C840 sll         t9,a1,1
  0040B12C: 03234025 or          t0,t9,v1
  0040B130: 00095040 sll         t2,t1,1
  0040B134: 01465825 or          t3,t2,a2
  0040B138: AC980000 sw          t8,0(a0)
  0040B13C: AC880004 sw          t0,4(a0)
  0040B140: 03E00008 jr          ra
  0040B144: AC8B0008 sw          t3,8(a0)
__shr_12:
  0040B148: 8C820008 lw          v0,8(a0)
  0040B14C: 304E0001 andi        t6,v0,1
  0040B150: 55C00002 bnel        zero,t6,0040B15C
  0040B154: 3C038000 lui         v1,0x8000
  0040B158: 00001825 or          v1,zero,zero
  0040B15C: 8C850004 lw          a1,4(a0)
  0040B160: 0002C042 srl         t8,v0,1
  0040B164: 30AF0001 andi        t7,a1,1
  0040B168: 55E00002 bnel        zero,t7,0040B174
  0040B16C: 3C068000 lui         a2,0x8000
  0040B170: 00003025 or          a2,zero,zero
  0040B174: 8C890000 lw          t1,0(a0)
  0040B178: 0005C842 srl         t9,a1,1
  0040B17C: 03234025 or          t0,t9,v1
  0040B180: 00095042 srl         t2,t1,1
  0040B184: 01465825 or          t3,t2,a2
  0040B188: AC980008 sw          t8,8(a0)
  0040B18C: AC880004 sw          t0,4(a0)
  0040B190: 03E00008 jr          ra
  0040B194: AC8B0000 sw          t3,0(a0)
__mtold12:
  0040B198: 27BDFFB8 addiu       sp,sp,0xFFB8
  0040B19C: AFB20020 sw          s2,0x20(sp)
  0040B1A0: AFB1001C sw          s1,0x1C(sp)
  0040B1A4: AFB00018 sw          s0,0x18(sp)
  0040B1A8: 00C08025 or          s0,a2,zero
  0040B1AC: 00A08825 or          s1,a1,zero
  0040B1B0: 00809025 or          s2,a0,zero
  0040B1B4: AFBF002C sw          ra,0x2C(sp)
  0040B1B8: AFB40028 sw          s4,0x28(sp)
  0040B1BC: AFB30024 sw          s3,0x24(sp)
  0040B1C0: 2414404E addiu       s4,zero,0x404E
  0040B1C4: AE000000 sw          zero,0(s0)
  0040B1C8: AE000004 sw          zero,4(s0)
  0040B1CC: 12200021 beq         zero,s1,0040B254
  0040B1D0: AE000008 sw          zero,8(s0)
  0040B1D4: 27B30038 addiu       s3,sp,0x38
  0040B1D8: 8A010003 lwl         at,3(s0)
  0040B1DC: 8A0F0007 lwl         t7,7(s0)
  0040B1E0: 8A0E000B lwl         t6,0xB(s0)
  0040B1E4: 9A010000 lwr         at,0(s0)
  0040B1E8: 9A0F0004 lwr         t7,4(s0)
  0040B1EC: 9A0E0008 lwr         t6,8(s0)
  0040B1F0: AA610003 swl         at,3(s3)
  0040B1F4: AA6F0007 swl         t7,7(s3)
  0040B1F8: AA6E000B swl         t6,0xB(s3)
  0040B1FC: 02002025 or          a0,s0,zero
  0040B200: BA610000 swr         at,0(s3)
  0040B204: BA6F0004 swr         t7,4(s3)
  0040B208: 0C102C3D jal         __shl_12
  0040B20C: BA6E0008 swr         t6,8(s3)
  0040B210: 0C102C3D jal         __shl_12
  0040B214: 02002025 or          a0,s0,zero
  0040B218: 02002025 or          a0,s0,zero
  0040B21C: 0C102C18 jal         __add_12
  0040B220: 02602825 or          a1,s3,zero
  0040B224: 0C102C3D jal         __shl_12
  0040B228: 02002025 or          a0,s0,zero
  0040B22C: 82580000 lb          t8,0(s2)
  0040B230: AFA0003C sw          zero,0x3C(sp)
  0040B234: AFA00040 sw          zero,0x40(sp)
  0040B238: 02002025 or          a0,s0,zero
  0040B23C: 02602825 or          a1,s3,zero
  0040B240: 0C102C18 jal         __add_12
  0040B244: AFB80038 sw          t8,0x38(sp)
  0040B248: 2631FFFF addiu       s1,s1,0xFFFF
  0040B24C: 1620FFE2 bne         zero,s1,0040B1D8
  0040B250: 26520001 addiu       s2,s2,1
  0040B254: 8E040008 lw          a0,8(s0)
  0040B258: 5480000F bnel        zero,a0,0040B298
  0040B25C: 308C8000 andi        t4,a0,0x8000
  0040B260: 8E020004 lw          v0,4(s0)
  0040B264: 8E030000 lw          v1,0(s0)
  0040B268: 2694FFF0 addiu       s4,s4,0xFFF0
  0040B26C: 00024400 sll         t0,v0,0x10
  0040B270: 00034C02 srl         t1,v1,0x10
  0040B274: 01095025 or          t2,t0,t1
  0040B278: 00022402 srl         a0,v0,0x10
  0040B27C: 00035C00 sll         t3,v1,0x10
  0040B280: AE040008 sw          a0,8(s0)
  0040B284: AE0A0004 sw          t2,4(s0)
  0040B288: AE0B0000 sw          t3,0(s0)
  0040B28C: 1080FFF4 beq         zero,a0,0040B260
  0040B290: 3294FFFF andi        s4,s4,0xFFFF
  0040B294: 308C8000 andi        t4,a0,0x8000
  0040B298: 5580000A bnel        zero,t4,0040B2C4
  0040B29C: A614000A sh          s4,0xA(s0)
  0040B2A0: 0C102C3D jal         __shl_12
  0040B2A4: 02002025 or          a0,s0,zero
  0040B2A8: 8E0D0008 lw          t5,8(s0)
  0040B2AC: 2694FFFF addiu       s4,s4,0xFFFF
  0040B2B0: 3294FFFF andi        s4,s4,0xFFFF
  0040B2B4: 31AF8000 andi        t7,t5,0x8000
  0040B2B8: 11E0FFF9 beq         zero,t7,0040B2A0
  0040B2BC: 00000000 nop
  0040B2C0: A614000A sh          s4,0xA(s0)
  0040B2C4: 8FBF002C lw          ra,0x2C(sp)
  0040B2C8: 8FB40028 lw          s4,0x28(sp)
  0040B2CC: 8FB30024 lw          s3,0x24(sp)
  0040B2D0: 8FB20020 lw          s2,0x20(sp)
  0040B2D4: 8FB1001C lw          s1,0x1C(sp)
  0040B2D8: 8FB00018 lw          s0,0x18(sp)
  0040B2DC: 03E00008 jr          ra
  0040B2E0: 27BD0048 addiu       sp,sp,0x48
__strgtold12:
  0040B2E4: 27BDFF38 addiu       sp,sp,0xFF38
  0040B2E8: AFB00018 sw          s0,0x18(sp)
  0040B2EC: 00C08025 or          s0,a2,zero
  0040B2F0: AFBF003C sw          ra,0x3C(sp)
  0040B2F4: AFBE0038 sw          s8,0x38(sp)
  0040B2F8: AFB70034 sw          s7,0x34(sp)
  0040B2FC: AFB60030 sw          s6,0x30(sp)
  0040B300: AFB5002C sw          s5,0x2C(sp)
  0040B304: AFB40028 sw          s4,0x28(sp)
  0040B308: AFB30024 sw          s3,0x24(sp)
  0040B30C: AFB20020 sw          s2,0x20(sp)
  0040B310: AFB1001C sw          s1,0x1C(sp)
  0040B314: AFA400C8 sw          a0,0xC8(sp)
  0040B318: AFA500CC sw          a1,0xCC(sp)
  0040B31C: AFA700D4 sw          a3,0xD4(sp)
  0040B320: 24030020 addiu       v1,zero,0x20
  0040B324: 240E0001 addiu       t6,zero,1
  0040B328: A7A000A6 sh          zero,0xA6(sp)
  0040B32C: AFAE00A0 sw          t6,0xA0(sp)
  0040B330: AFA00098 sw          zero,0x98(sp)
  0040B334: AFA00094 sw          zero,0x94(sp)
  0040B338: AFA00090 sw          zero,0x90(sp)
  0040B33C: AFA0008C sw          zero,0x8C(sp)
  0040B340: AFA00088 sw          zero,0x88(sp)
  0040B344: AFA00084 sw          zero,0x84(sp)
  0040B348: AFA0007C sw          zero,0x7C(sp)
  0040B34C: AFB00074 sw          s0,0x74(sp)
  0040B350: 82080000 lb          t0,0(s0)
  0040B354: 27B500A8 addiu       s5,sp,0xA8
  0040B358: 0000B025 or          s6,zero,zero
  0040B35C: 0000B825 or          s7,zero,zero
  0040B360: 0000A025 or          s4,zero,zero
  0040B364: 1068000A beq         t0,v1,0040B390
  0040B368: 02009825 or          s3,s0,zero
  0040B36C: 82020000 lb          v0,0(s0)
  0040B370: 24040009 addiu       a0,zero,9
  0040B374: 2406000A addiu       a2,zero,0xA
  0040B378: 50820006 beql        v0,a0,0040B394
  0040B37C: 82620001 lb          v0,1(s3)
  0040B380: 10C20003 beq         v0,a2,0040B390
  0040B384: 2405000D addiu       a1,zero,0xD
  0040B388: 54A8000E bnel        t0,a1,0040B3C4
  0040B38C: 241E0030 addiu       s8,zero,0x30
  0040B390: 82620001 lb          v0,1(s3)
  0040B394: 24040009 addiu       a0,zero,9
  0040B398: 2405000D addiu       a1,zero,0xD
  0040B39C: 2406000A addiu       a2,zero,0xA
  0040B3A0: 1062FFFB beq         v0,v1,0040B390
  0040B3A4: 26730001 addiu       s3,s3,1
  0040B3A8: 5082FFFA beql        v0,a0,0040B394
  0040B3AC: 82620001 lb          v0,1(s3)
  0040B3B0: 50C2FFF8 beql        v0,a2,0040B394
  0040B3B4: 82620001 lb          v0,1(s3)
  0040B3B8: 50A2FFF6 beql        v0,a1,0040B394
  0040B3BC: 82620001 lb          v0,1(s3)
  0040B3C0: 241E0030 addiu       s8,zero,0x30
  0040B3C4: 2403002D addiu       v1,zero,0x2D
  0040B3C8: 2402002B addiu       v0,zero,0x2B
  0040B3CC: 2E81000C sltiu       at,s4,0xC
  0040B3D0: 82700000 lb          s0,0(s3)
  0040B3D4: 102001CB beq         zero,at,$_L119
  0040B3D8: 26730001 addiu       s3,s3,1
  0040B3DC: 00147880 sll         t7,s4,2
  0040B3E0: 3C010041 lui         at,0x41
  0040B3E4: 002F0821 addu        at,at,t7
  0040B3E8: 8C2FD524 lw          t7,0xD524(at)
  0040B3EC: 01E00008 jr          t7
  0040B3F0: 00000000 nop
$_L37:
  0040B3F4: 2A010031 slti        at,s0,0x31
  0040B3F8: 14200006 bne         zero,at,0040B414
  0040B3FC: 3C180041 lui         t8,0x41
  0040B400: 2A01003A slti        at,s0,0x3A
  0040B404: 10200003 beq         zero,at,0040B414
  0040B408: 24140003 addiu       s4,zero,3
  0040B40C: 100001BD b           $_L119
  0040B410: 2673FFFF addiu       s3,s3,0xFFFF
  0040B414: 8318EA14 lb          t8,0xEA14(t8)
  0040B418: 521801BA beql        t8,s0,$_L119
  0040B41C: 24140005 addiu       s4,zero,5
  0040B420: 5202000A beql        v0,s0,0040B44C
  0040B424: 24140002 addiu       s4,zero,2
  0040B428: 5203000B beql        v1,s0,0040B458
  0040B42C: 34198000 ori         t9,zero,0x8000
  0040B430: 121E0003 beq         s8,s0,0040B440
  0040B434: 2414000A addiu       s4,zero,0xA
  0040B438: 100001B2 b           $_L119
  0040B43C: 2673FFFF addiu       s3,s3,0xFFFF
  0040B440: 100001B0 b           $_L119
  0040B444: 24140001 addiu       s4,zero,1
  0040B448: 24140002 addiu       s4,zero,2
  0040B44C: 100001AD b           $_L119
  0040B450: A7A000A6 sh          zero,0xA6(sp)
  0040B454: 34198000 ori         t9,zero,0x8000
  0040B458: 24140002 addiu       s4,zero,2
  0040B45C: 100001A9 b           $_L119
  0040B460: A7B900A6 sh          t9,0xA6(sp)
$_L43:
  0040B464: 24090001 addiu       t1,zero,1
  0040B468: 2A010031 slti        at,s0,0x31
  0040B46C: 14200007 bne         zero,at,0040B48C
  0040B470: AFA90098 sw          t1,0x98(sp)
  0040B474: 2A01003A slti        at,s0,0x3A
  0040B478: 10200004 beq         zero,at,0040B48C
  0040B47C: 00000000 nop
  0040B480: 24140003 addiu       s4,zero,3
  0040B484: 1000019F b           $_L119
  0040B488: 2673FFFF addiu       s3,s3,0xFFFF
  0040B48C: 3C0A0041 lui         t2,0x41
  0040B490: 814AEA14 lb          t2,0xEA14(t2)
  0040B494: 2A010065 slti        at,s0,0x65
  0040B498: 260BFFD5 addiu       t3,s0,0xFFD5
  0040B49C: 520A0199 beql        t2,s0,$_L119
  0040B4A0: 24140004 addiu       s4,zero,4
  0040B4A4: 10200010 beq         zero,at,0040B4E8
  0040B4A8: 2A010046 slti        at,s0,0x46
  0040B4AC: 10200008 beq         zero,at,0040B4D0
  0040B4B0: 2D61001B sltiu       at,t3,0x1B
  0040B4B4: 10200009 beq         zero,at,$_L49
  0040B4B8: 000B5880 sll         t3,t3,2
  0040B4BC: 3C010041 lui         at,0x41
  0040B4C0: 002B0821 addu        at,at,t3
  0040B4C4: 8C2BD554 lw          t3,0xD554(at)
  0040B4C8: 01600008 jr          t3
  0040B4CC: 00000000 nop
  0040B4D0: 24010064 addiu       at,zero,0x64
  0040B4D4: 5201018B beql        at,s0,$_L119
  0040B4D8: 24140006 addiu       s4,zero,6
$_L49:
  0040B4DC: 2414000A addiu       s4,zero,0xA
  0040B4E0: 10000188 b           $_L119
  0040B4E4: 2673FFFF addiu       s3,s3,0xFFFF
  0040B4E8: 24010065 addiu       at,zero,0x65
  0040B4EC: 12010005 beq         at,s0,$_L52
  0040B4F0: 2414000A addiu       s4,zero,0xA
  0040B4F4: 10000183 b           $_L119
  0040B4F8: 2673FFFF addiu       s3,s3,0xFFFF
$_L51:
  0040B4FC: 10000181 b           $_L119
  0040B500: 24140001 addiu       s4,zero,1
$_L52:
  0040B504: 1000017F b           $_L119
  0040B508: 24140006 addiu       s4,zero,6
$_L53:
  0040B50C: 2673FFFF addiu       s3,s3,0xFFFF
  0040B510: 1000017C b           $_L119
  0040B514: 2414000B addiu       s4,zero,0xB
$_L54:
  0040B518: 2A010031 slti        at,s0,0x31
  0040B51C: 14200006 bne         zero,at,0040B538
  0040B520: 3C0C0041 lui         t4,0x41
  0040B524: 2A01003A slti        at,s0,0x3A
  0040B528: 10200003 beq         zero,at,0040B538
  0040B52C: 24140003 addiu       s4,zero,3
  0040B530: 10000174 b           $_L119
  0040B534: 2673FFFF addiu       s3,s3,0xFFFF
  0040B538: 818CEA14 lb          t4,0xEA14(t4)
  0040B53C: 520C0171 beql        t4,s0,$_L119
  0040B540: 24140005 addiu       s4,zero,5
  0040B544: 121E0003 beq         s8,s0,0040B554
  0040B548: 2414000A addiu       s4,zero,0xA
  0040B54C: 1000016D b           $_L119
  0040B550: 8FB30074 lw          s3,0x74(sp)
  0040B554: 1000016B b           $_L119
  0040B558: 24140001 addiu       s4,zero,1
$_L58:
  0040B55C: 3C0E0041 lui         t6,0x41
  0040B560: 8DCEEA10 lw          t6,0xEA10(t6)
  0040B564: 240D0001 addiu       t5,zero,1
  0040B568: AFAD0098 sw          t5,0x98(sp)
  0040B56C: 29C10002 slti        at,t6,2
  0040B570: 14200006 bne         zero,at,0040B58C
  0040B574: 3C0F0041 lui         t7,0x41
  0040B578: 320400FF andi        a0,s0,0xFF
  0040B57C: 0C1026AF jal         _isctype
  0040B580: 24050004 addiu       a1,zero,4
  0040B584: 10000007 b           0040B5A4
  0040B588: 00401825 or          v1,v0,zero
  0040B58C: 8DEFE7D0 lw          t7,0xE7D0(t7)
  0040B590: 321800FF andi        t8,s0,0xFF
  0040B594: 0018C840 sll         t9,t8,1
  0040B598: 01F94821 addu        t1,t7,t9
  0040B59C: 95230000 lhu         v1,0(t1)
  0040B5A0: 30630004 andi        v1,v1,4
  0040B5A4: 1060001D beq         zero,v1,0040B61C
  0040B5A8: 00000000 nop
  0040B5AC: 2EC10019 sltiu       at,s6,0x19
  0040B5B0: 10200006 beq         zero,at,0040B5CC
  0040B5B4: 3C0B0041 lui         t3,0x41
  0040B5B8: 260AFFD0 addiu       t2,s0,0xFFD0
  0040B5BC: 26D60001 addiu       s6,s6,1
  0040B5C0: A2AA0000 sb          t2,0(s5)
  0040B5C4: 10000002 b           0040B5D0
  0040B5C8: 26B50001 addiu       s5,s5,1
  0040B5CC: 26F70001 addiu       s7,s7,1
  0040B5D0: 8D6BEA10 lw          t3,0xEA10(t3)
  0040B5D4: 82700000 lb          s0,0(s3)
  0040B5D8: 26730001 addiu       s3,s3,1
  0040B5DC: 29610002 slti        at,t3,2
  0040B5E0: 14200006 bne         zero,at,0040B5FC
  0040B5E4: 3C0C0041 lui         t4,0x41
  0040B5E8: 320400FF andi        a0,s0,0xFF
  0040B5EC: 0C1026AF jal         _isctype
  0040B5F0: 24050004 addiu       a1,zero,4
  0040B5F4: 10000007 b           0040B614
  0040B5F8: 00401825 or          v1,v0,zero
  0040B5FC: 8D8CE7D0 lw          t4,0xE7D0(t4)
  0040B600: 320D00FF andi        t5,s0,0xFF
  0040B604: 000D7040 sll         t6,t5,1
  0040B608: 018EC021 addu        t8,t4,t6
  0040B60C: 97030000 lhu         v1,0(t8)
  0040B610: 30630004 andi        v1,v1,4
  0040B614: 5460FFE6 bnel        zero,v1,0040B5B0
  0040B618: 2EC10019 sltiu       at,s6,0x19
  0040B61C: 3C0F0041 lui         t7,0x41
  0040B620: 81EFEA14 lb          t7,0xEA14(t7)
  0040B624: 24140004 addiu       s4,zero,4
  0040B628: 2401002B addiu       at,zero,0x2B
  0040B62C: 160F0003 bne         t7,s0,0040B63C
  0040B630: 2403002D addiu       v1,zero,0x2D
  0040B634: 10000133 b           $_L119
  0040B638: 2402002B addiu       v0,zero,0x2B
  0040B63C: 12010013 beq         at,s0,0040B68C
  0040B640: 2401002D addiu       at,zero,0x2D
  0040B644: 12010011 beq         at,s0,0040B68C
  0040B648: 24010044 addiu       at,zero,0x44
  0040B64C: 1201000B beq         at,s0,0040B67C
  0040B650: 24010045 addiu       at,zero,0x45
  0040B654: 12010009 beq         at,s0,0040B67C
  0040B658: 24010064 addiu       at,zero,0x64
  0040B65C: 12010007 beq         at,s0,0040B67C
  0040B660: 24010065 addiu       at,zero,0x65
  0040B664: 12010005 beq         at,s0,0040B67C
  0040B668: 2414000A addiu       s4,zero,0xA
  0040B66C: 2673FFFF addiu       s3,s3,0xFFFF
  0040B670: 2403002D addiu       v1,zero,0x2D
  0040B674: 10000123 b           $_L119
  0040B678: 2402002B addiu       v0,zero,0x2B
  0040B67C: 24140006 addiu       s4,zero,6
  0040B680: 2403002D addiu       v1,zero,0x2D
  0040B684: 1000011F b           $_L119
  0040B688: 2402002B addiu       v0,zero,0x2B
  0040B68C: 2673FFFF addiu       s3,s3,0xFFFF
  0040B690: 2414000B addiu       s4,zero,0xB
  0040B694: 2403002D addiu       v1,zero,0x2D
  0040B698: 1000011A b           $_L119
  0040B69C: 2402002B addiu       v0,zero,0x2B
$_L71:
  0040B6A0: 24190001 addiu       t9,zero,1
  0040B6A4: 24090001 addiu       t1,zero,1
  0040B6A8: AFB90098 sw          t9,0x98(sp)
  0040B6AC: 16C00008 bne         zero,s6,0040B6D0
  0040B6B0: AFA90094 sw          t1,0x94(sp)
  0040B6B4: 161E0006 bne         s8,s0,0040B6D0
  0040B6B8: 00000000 nop
  0040B6BC: 82700000 lb          s0,0(s3)
  0040B6C0: 26F7FFFF addiu       s7,s7,0xFFFF
  0040B6C4: 26730001 addiu       s3,s3,1
  0040B6C8: 521EFFFD beql        s8,s0,0040B6C0
  0040B6CC: 82700000 lb          s0,0(s3)
  0040B6D0: 3C0A0041 lui         t2,0x41
  0040B6D4: 8D4AEA10 lw          t2,0xEA10(t2)
  0040B6D8: 3C0B0041 lui         t3,0x41
  0040B6DC: 320400FF andi        a0,s0,0xFF
  0040B6E0: 29410002 slti        at,t2,2
  0040B6E4: 14200005 bne         zero,at,0040B6FC
  0040B6E8: 00000000 nop
  0040B6EC: 0C1026AF jal         _isctype
  0040B6F0: 24050004 addiu       a1,zero,4
  0040B6F4: 10000007 b           0040B714
  0040B6F8: 00401825 or          v1,v0,zero
  0040B6FC: 8D6BE7D0 lw          t3,0xE7D0(t3)
  0040B700: 320D00FF andi        t5,s0,0xFF
  0040B704: 000D6040 sll         t4,t5,1
  0040B708: 016C7021 addu        t6,t3,t4
  0040B70C: 95C30000 lhu         v1,0(t6)
  0040B710: 30630004 andi        v1,v1,4
  0040B714: 5060001D beql        zero,v1,0040B78C
  0040B718: 2401002B addiu       at,zero,0x2B
  0040B71C: 2EC10019 sltiu       at,s6,0x19
  0040B720: 10200006 beq         zero,at,0040B73C
  0040B724: 3C0F0041 lui         t7,0x41
  0040B728: 2618FFD0 addiu       t8,s0,0xFFD0
  0040B72C: 26D60001 addiu       s6,s6,1
  0040B730: A2B80000 sb          t8,0(s5)
  0040B734: 26B50001 addiu       s5,s5,1
  0040B738: 26F7FFFF addiu       s7,s7,0xFFFF
  0040B73C: 8DEFEA10 lw          t7,0xEA10(t7)
  0040B740: 82700000 lb          s0,0(s3)
  0040B744: 26730001 addiu       s3,s3,1
  0040B748: 29E10002 slti        at,t7,2
  0040B74C: 14200006 bne         zero,at,0040B768
  0040B750: 3C190041 lui         t9,0x41
  0040B754: 320400FF andi        a0,s0,0xFF
  0040B758: 0C1026AF jal         _isctype
  0040B75C: 24050004 addiu       a1,zero,4
  0040B760: 10000007 b           0040B780
  0040B764: 00401825 or          v1,v0,zero
  0040B768: 8F39E7D0 lw          t9,0xE7D0(t9)
  0040B76C: 320900FF andi        t1,s0,0xFF
  0040B770: 00095040 sll         t2,t1,1
  0040B774: 032A6821 addu        t5,t9,t2
  0040B778: 95A30000 lhu         v1,0(t5)
  0040B77C: 30630004 andi        v1,v1,4
  0040B780: 5460FFE7 bnel        zero,v1,0040B720
  0040B784: 2EC10019 sltiu       at,s6,0x19
  0040B788: 2401002B addiu       at,zero,0x2B
  0040B78C: 12010013 beq         at,s0,0040B7DC
  0040B790: 2401002D addiu       at,zero,0x2D
  0040B794: 12010011 beq         at,s0,0040B7DC
  0040B798: 24010044 addiu       at,zero,0x44
  0040B79C: 1201000B beq         at,s0,0040B7CC
  0040B7A0: 24010045 addiu       at,zero,0x45
  0040B7A4: 12010009 beq         at,s0,0040B7CC
  0040B7A8: 24010064 addiu       at,zero,0x64
  0040B7AC: 12010007 beq         at,s0,0040B7CC
  0040B7B0: 24010065 addiu       at,zero,0x65
  0040B7B4: 12010005 beq         at,s0,0040B7CC
  0040B7B8: 2414000A addiu       s4,zero,0xA
  0040B7BC: 2673FFFF addiu       s3,s3,0xFFFF
  0040B7C0: 2403002D addiu       v1,zero,0x2D
  0040B7C4: 100000CF b           $_L119
  0040B7C8: 2402002B addiu       v0,zero,0x2B
  0040B7CC: 24140006 addiu       s4,zero,6
  0040B7D0: 2403002D addiu       v1,zero,0x2D
  0040B7D4: 100000CB b           $_L119
  0040B7D8: 2402002B addiu       v0,zero,0x2B
  0040B7DC: 2673FFFF addiu       s3,s3,0xFFFF
  0040B7E0: 2414000B addiu       s4,zero,0xB
  0040B7E4: 2403002D addiu       v1,zero,0x2D
  0040B7E8: 100000C6 b           $_L119
  0040B7EC: 2402002B addiu       v0,zero,0x2B
$_L84:
  0040B7F0: 3C0C0041 lui         t4,0x41
  0040B7F4: 8D8CEA10 lw          t4,0xEA10(t4)
  0040B7F8: 240B0001 addiu       t3,zero,1
  0040B7FC: AFAB0094 sw          t3,0x94(sp)
  0040B800: 29810002 slti        at,t4,2
  0040B804: 14200006 bne         zero,at,0040B820
  0040B808: 3C0E0041 lui         t6,0x41
  0040B80C: 320400FF andi        a0,s0,0xFF
  0040B810: 0C1026AF jal         _isctype
  0040B814: 24050004 addiu       a1,zero,4
  0040B818: 10000007 b           0040B838
  0040B81C: 00401825 or          v1,v0,zero
  0040B820: 8DCEE7D0 lw          t6,0xE7D0(t6)
  0040B824: 321800FF andi        t8,s0,0xFF
  0040B828: 00187840 sll         t7,t8,1
  0040B82C: 01CF4821 addu        t1,t6,t7
  0040B830: 95230000 lhu         v1,0(t1)
  0040B834: 30630004 andi        v1,v1,4
  0040B838: 10600006 beq         zero,v1,0040B854
  0040B83C: 2414000A addiu       s4,zero,0xA
  0040B840: 24140004 addiu       s4,zero,4
  0040B844: 2673FFFF addiu       s3,s3,0xFFFF
  0040B848: 2403002D addiu       v1,zero,0x2D
  0040B84C: 100000AD b           $_L119
  0040B850: 2402002B addiu       v0,zero,0x2B
  0040B854: 8FB30074 lw          s3,0x74(sp)
  0040B858: 2403002D addiu       v1,zero,0x2D
  0040B85C: 100000A9 b           $_L119
  0040B860: 2402002B addiu       v0,zero,0x2B
$_L89:
  0040B864: 2679FFFE addiu       t9,s3,0xFFFE
  0040B868: 2A010031 slti        at,s0,0x31
  0040B86C: 14200006 bne         zero,at,0040B888
  0040B870: AFB90074 sw          t9,0x74(sp)
  0040B874: 2A01003A slti        at,s0,0x3A
  0040B878: 10200003 beq         zero,at,0040B888
  0040B87C: 24140009 addiu       s4,zero,9
  0040B880: 100000A0 b           $_L119
  0040B884: 2673FFFF addiu       s3,s3,0xFFFF
  0040B888: 5202009E beql        v0,s0,$_L119
  0040B88C: 24140007 addiu       s4,zero,7
  0040B890: 52030008 beql        v1,s0,0040B8B4
  0040B894: 240AFFFF addiu       t2,zero,0xFFFF
  0040B898: 121E0003 beq         s8,s0,0040B8A8
  0040B89C: 2414000A addiu       s4,zero,0xA
  0040B8A0: 10000098 b           $_L119
  0040B8A4: 8FB30074 lw          s3,0x74(sp)
  0040B8A8: 10000096 b           $_L119
  0040B8AC: 24140008 addiu       s4,zero,8
  0040B8B0: 240AFFFF addiu       t2,zero,0xFFFF
  0040B8B4: 24140007 addiu       s4,zero,7
  0040B8B8: 10000092 b           $_L119
  0040B8BC: AFAA00A0 sw          t2,0xA0(sp)
  0040B8C0: 10000090 b           $_L119
  0040B8C4: 24140007 addiu       s4,zero,7
$_L94:
  0040B8C8: 240D0001 addiu       t5,zero,1
  0040B8CC: 161E0005 bne         s8,s0,0040B8E4
  0040B8D0: AFAD0090 sw          t5,0x90(sp)
  0040B8D4: 82700000 lb          s0,0(s3)
  0040B8D8: 26730001 addiu       s3,s3,1
  0040B8DC: 521EFFFE beql        s8,s0,0040B8D8
  0040B8E0: 82700000 lb          s0,0(s3)
  0040B8E4: 2A010031 slti        at,s0,0x31
  0040B8E8: 14200007 bne         zero,at,0040B908
  0040B8EC: 2414000A addiu       s4,zero,0xA
  0040B8F0: 2A01003A slti        at,s0,0x3A
  0040B8F4: 50200083 beql        zero,at,$_L119
  0040B8F8: 2673FFFF addiu       s3,s3,0xFFFF
  0040B8FC: 24140009 addiu       s4,zero,9
  0040B900: 10000080 b           $_L119
  0040B904: 2673FFFF addiu       s3,s3,0xFFFF
  0040B908: 1000007E b           $_L119
  0040B90C: 2673FFFF addiu       s3,s3,0xFFFF
$_L98:
  0040B910: 2A010031 slti        at,s0,0x31
  0040B914: 14200005 bne         zero,at,0040B92C
  0040B918: 2A01003A slti        at,s0,0x3A
  0040B91C: 10200003 beq         zero,at,0040B92C
  0040B920: 24140009 addiu       s4,zero,9
  0040B924: 10000077 b           $_L119
  0040B928: 2673FFFF addiu       s3,s3,0xFFFF
  0040B92C: 121E0003 beq         s8,s0,0040B93C
  0040B930: 2414000A addiu       s4,zero,0xA
  0040B934: 10000073 b           $_L119
  0040B938: 8FB30074 lw          s3,0x74(sp)
  0040B93C: 10000071 b           $_L119
  0040B940: 24140008 addiu       s4,zero,8
$_L101:
  0040B944: 3C0C0041 lui         t4,0x41
  0040B948: 8D8CEA10 lw          t4,0xEA10(t4)
  0040B94C: 240B0001 addiu       t3,zero,1
  0040B950: AFAB0090 sw          t3,0x90(sp)
  0040B954: 29810002 slti        at,t4,2
  0040B958: 00009025 or          s2,zero,zero
  0040B95C: 14200007 bne         zero,at,0040B97C
  0040B960: 2414000A addiu       s4,zero,0xA
  0040B964: 321100FF andi        s1,s0,0xFF
  0040B968: 02202025 or          a0,s1,zero
  0040B96C: 0C1026AF jal         _isctype
  0040B970: 24050004 addiu       a1,zero,4
  0040B974: 10000008 b           0040B998
  0040B978: 00401825 or          v1,v0,zero
  0040B97C: 3C180041 lui         t8,0x41
  0040B980: 8F18E7D0 lw          t8,0xE7D0(t8)
  0040B984: 321100FF andi        s1,s0,0xFF
  0040B988: 00117040 sll         t6,s1,1
  0040B98C: 030E7821 addu        t7,t8,t6
  0040B990: 95E30000 lhu         v1,0(t7)
  0040B994: 30630004 andi        v1,v1,4
  0040B998: 1060001E beq         zero,v1,0040BA14
  0040B99C: 00000000 nop
  0040B9A0: 00124880 sll         t1,s2,2
  0040B9A4: 01324821 addu        t1,t1,s2
  0040B9A8: 00094840 sll         t1,t1,1
  0040B9AC: 01309021 addu        s2,t1,s0
  0040B9B0: 2652FFD0 addiu       s2,s2,0xFFD0
  0040B9B4: 2A411451 slti        at,s2,0x1451
  0040B9B8: 50200016 beql        zero,at,0040BA14
  0040B9BC: 24121451 addiu       s2,zero,0x1451
  0040B9C0: 3C190041 lui         t9,0x41
  0040B9C4: 8F39EA10 lw          t9,0xEA10(t9)
  0040B9C8: 82700000 lb          s0,0(s3)
  0040B9CC: 26730001 addiu       s3,s3,1
  0040B9D0: 2B210002 slti        at,t9,2
  0040B9D4: 14200007 bne         zero,at,0040B9F4
  0040B9D8: 3C0A0041 lui         t2,0x41
  0040B9DC: 321100FF andi        s1,s0,0xFF
  0040B9E0: 02202025 or          a0,s1,zero
  0040B9E4: 0C1026AF jal         _isctype
  0040B9E8: 24050004 addiu       a1,zero,4
  0040B9EC: 10000007 b           0040BA0C
  0040B9F0: 00401825 or          v1,v0,zero
  0040B9F4: 8D4AE7D0 lw          t2,0xE7D0(t2)
  0040B9F8: 321100FF andi        s1,s0,0xFF
  0040B9FC: 00116840 sll         t5,s1,1
  0040BA00: 014D5821 addu        t3,t2,t5
  0040BA04: 95630000 lhu         v1,0(t3)
  0040BA08: 30630004 andi        v1,v1,4
  0040BA0C: 5460FFE5 bnel        zero,v1,0040B9A4
  0040BA10: 00124880 sll         t1,s2,2
  0040BA14: 3C0C0041 lui         t4,0x41
  0040BA18: 8D8CEA10 lw          t4,0xEA10(t4)
  0040BA1C: AFB20084 sw          s2,0x84(sp)
  0040BA20: 3C180041 lui         t8,0x41
  0040BA24: 29810002 slti        at,t4,2
  0040BA28: 14200005 bne         zero,at,0040BA40
  0040BA2C: 02202025 or          a0,s1,zero
  0040BA30: 0C1026AF jal         _isctype
  0040BA34: 24050004 addiu       a1,zero,4
  0040BA38: 10000006 b           0040BA54
  0040BA3C: 00401825 or          v1,v0,zero
  0040BA40: 8F18E7D0 lw          t8,0xE7D0(t8)
  0040BA44: 00117040 sll         t6,s1,1
  0040BA48: 030E7821 addu        t7,t8,t6
  0040BA4C: 95E30000 lhu         v1,0(t7)
  0040BA50: 30630004 andi        v1,v1,4
  0040BA54: 50600016 beql        zero,v1,0040BAB0
  0040BA58: 2673FFFF addiu       s3,s3,0xFFFF
  0040BA5C: 3C090041 lui         t1,0x41
  0040BA60: 8D29EA10 lw          t1,0xEA10(t1)
  0040BA64: 82700000 lb          s0,0(s3)
  0040BA68: 26730001 addiu       s3,s3,1
  0040BA6C: 29210002 slti        at,t1,2
  0040BA70: 14200006 bne         zero,at,0040BA8C
  0040BA74: 3C190041 lui         t9,0x41
  0040BA78: 320400FF andi        a0,s0,0xFF
  0040BA7C: 0C1026AF jal         _isctype
  0040BA80: 24050004 addiu       a1,zero,4
  0040BA84: 10000007 b           0040BAA4
  0040BA88: 00401825 or          v1,v0,zero
  0040BA8C: 8F39E7D0 lw          t9,0xE7D0(t9)
  0040BA90: 320A00FF andi        t2,s0,0xFF
  0040BA94: 000A6840 sll         t5,t2,1
  0040BA98: 032D5821 addu        t3,t9,t5
  0040BA9C: 95630000 lhu         v1,0(t3)
  0040BAA0: 30630004 andi        v1,v1,4
  0040BAA4: 1460FFED bne         zero,v1,0040BA5C
  0040BAA8: 00000000 nop
  0040BAAC: 2673FFFF addiu       s3,s3,0xFFFF
  0040BAB0: 2403002D addiu       v1,zero,0x2D
  0040BAB4: 10000013 b           $_L119
  0040BAB8: 2402002B addiu       v0,zero,0x2B
$_L115:
  0040BABC: 8FAC00E0 lw          t4,0xE0(sp)
  0040BAC0: 2678FFFF addiu       t8,s3,0xFFFF
  0040BAC4: 2414000A addiu       s4,zero,0xA
  0040BAC8: 5180000E beql        zero,t4,$_L119
  0040BACC: 2673FFFF addiu       s3,s3,0xFFFF
  0040BAD0: 12020009 beq         v0,s0,0040BAF8
  0040BAD4: AFB80074 sw          t8,0x74(sp)
  0040BAD8: 12030003 beq         v1,s0,0040BAE8
  0040BADC: 2414000A addiu       s4,zero,0xA
  0040BAE0: 10000008 b           $_L119
  0040BAE4: 03009825 or          s3,t8,zero
  0040BAE8: 240EFFFF addiu       t6,zero,0xFFFF
  0040BAEC: 24140007 addiu       s4,zero,7
  0040BAF0: 10000004 b           $_L119
  0040BAF4: AFAE00A0 sw          t6,0xA0(sp)
  0040BAF8: 10000002 b           $_L119
  0040BAFC: 24140007 addiu       s4,zero,7
  0040BB00: 2673FFFF addiu       s3,s3,0xFFFF
$_L119:
  0040BB04: 2401000A addiu       at,zero,0xA
  0040BB08: 5681FE31 bnel        at,s4,0040B3D0
  0040BB0C: 2E81000C sltiu       at,s4,0xC
  0040BB10: 8FAF00CC lw          t7,0xCC(sp)
  0040BB14: 2EC10019 sltiu       at,s6,0x19
  0040BB18: ADF30000 sw          s3,0(t7)
  0040BB1C: 8FA90098 lw          t1,0x98(sp)
  0040BB20: 51200054 beql        zero,t1,0040BC74
  0040BB24: 8FAA0098 lw          t2,0x98(sp)
  0040BB28: 14200008 bne         zero,at,0040BB4C
  0040BB2C: 83A200BF lb          v0,0xBF(sp)
  0040BB30: 28410005 slti        at,v0,5
  0040BB34: 14200003 bne         zero,at,0040BB44
  0040BB38: 24160018 addiu       s6,zero,0x18
  0040BB3C: 24420001 addiu       v0,v0,1
  0040BB40: A3A200BF sb          v0,0xBF(sp)
  0040BB44: 26B5FFFF addiu       s5,s5,0xFFFF
  0040BB48: 26F70001 addiu       s7,s7,1
  0040BB4C: 12C00041 beq         zero,s6,0040BC54
  0040BB50: 00001825 or          v1,zero,zero
  0040BB54: 82AAFFFF lb          t2,0xFFFF(s5)
  0040BB58: 26B5FFFF addiu       s5,s5,0xFFFF
  0040BB5C: 27B0005C addiu       s0,sp,0x5C
  0040BB60: 15400006 bne         zero,t2,0040BB7C
  0040BB64: 27A400A8 addiu       a0,sp,0xA8
  0040BB68: 82B9FFFF lb          t9,0xFFFF(s5)
  0040BB6C: 26D6FFFF addiu       s6,s6,0xFFFF
  0040BB70: 26F70001 addiu       s7,s7,1
  0040BB74: 1320FFFC beq         zero,t9,0040BB68
  0040BB78: 26B5FFFF addiu       s5,s5,0xFFFF
  0040BB7C: 02C02825 or          a1,s6,zero
  0040BB80: 0C102C66 jal         __mtold12
  0040BB84: 02003025 or          a2,s0,zero
  0040BB88: 8FAD00A0 lw          t5,0xA0(sp)
  0040BB8C: 8FAB0084 lw          t3,0x84(sp)
  0040BB90: 05A10002 bgez        t5,0040BB9C
  0040BB94: 000B6023 subu        t4,zero,t3
  0040BB98: AFAC0084 sw          t4,0x84(sp)
  0040BB9C: 8FB80084 lw          t8,0x84(sp)
  0040BBA0: 8FAF0090 lw          t7,0x90(sp)
  0040BBA4: 8FA900D8 lw          t1,0xD8(sp)
  0040BBA8: 03177021 addu        t6,t8,s7
  0040BBAC: 15E00003 bne         zero,t7,0040BBBC
  0040BBB0: AFAE0084 sw          t6,0x84(sp)
  0040BBB4: 01C95021 addu        t2,t6,t1
  0040BBB8: AFAA0084 sw          t2,0x84(sp)
  0040BBBC: 8FB90094 lw          t9,0x94(sp)
  0040BBC0: 8FAD0084 lw          t5,0x84(sp)
  0040BBC4: 8FAB00DC lw          t3,0xDC(sp)
  0040BBC8: 17200003 bne         zero,t9,0040BBD8
  0040BBCC: 240F0001 addiu       t7,zero,1
  0040BBD0: 01AB6023 subu        t4,t5,t3
  0040BBD4: AFAC0084 sw          t4,0x84(sp)
  0040BBD8: 8FB80084 lw          t8,0x84(sp)
  0040BBDC: 8FAE0084 lw          t6,0x84(sp)
  0040BBE0: 2B011451 slti        at,t8,0x1451
  0040BBE4: 54200008 bnel        zero,at,0040BC08
  0040BBE8: 29C1EBB0 slti        at,t6,0xEBB0
  0040BBEC: AFAF008C sw          t7,0x8C(sp)
  0040BBF0: 97A6004E lhu         a2,0x4E(sp)
  0040BBF4: 8FA50050 lw          a1,0x50(sp)
  0040BBF8: 8FA40054 lw          a0,0x54(sp)
  0040BBFC: 10000018 b           0040BC60
  0040BC00: 97A3005A lhu         v1,0x5A(sp)
  0040BC04: 29C1EBB0 slti        at,t6,0xEBB0
  0040BC08: 10200008 beq         zero,at,0040BC2C
  0040BC0C: 02002025 or          a0,s0,zero
  0040BC10: 24090001 addiu       t1,zero,1
  0040BC14: AFA90088 sw          t1,0x88(sp)
  0040BC18: 97A6004E lhu         a2,0x4E(sp)
  0040BC1C: 8FA50050 lw          a1,0x50(sp)
  0040BC20: 8FA40054 lw          a0,0x54(sp)
  0040BC24: 1000000E b           0040BC60
  0040BC28: 97A3005A lhu         v1,0x5A(sp)
  0040BC2C: 8FA50084 lw          a1,0x84(sp)
  0040BC30: 0C1031DB jal         __multtenpow12
  0040BC34: 8FA600D4 lw          a2,0xD4(sp)
  0040BC38: 8BA40061 lwl         a0,0x61(sp)
  0040BC3C: 8BA50065 lwl         a1,0x65(sp)
  0040BC40: 97A3005C lhu         v1,0x5C(sp)
  0040BC44: 97A60066 lhu         a2,0x66(sp)
  0040BC48: 9BA4005E lwr         a0,0x5E(sp)
  0040BC4C: 10000004 b           0040BC60
  0040BC50: 9BA50062 lwr         a1,0x62(sp)
  0040BC54: 00003025 or          a2,zero,zero
  0040BC58: 00002825 or          a1,zero,zero
  0040BC5C: 00002025 or          a0,zero,zero
  0040BC60: A7A3005A sh          v1,0x5A(sp)
  0040BC64: AFA40054 sw          a0,0x54(sp)
  0040BC68: AFA50050 sw          a1,0x50(sp)
  0040BC6C: A7A6004E sh          a2,0x4E(sp)
  0040BC70: 8FAA0098 lw          t2,0x98(sp)
  0040BC74: 97A3005A lhu         v1,0x5A(sp)
  0040BC78: 8FA40054 lw          a0,0x54(sp)
  0040BC7C: 8FA50050 lw          a1,0x50(sp)
  0040BC80: 15400008 bne         zero,t2,0040BCA4
  0040BC84: 97A6004E lhu         a2,0x4E(sp)
  0040BC88: 24190004 addiu       t9,zero,4
  0040BC8C: 00001825 or          v1,zero,zero
  0040BC90: 00003025 or          a2,zero,zero
  0040BC94: 00002825 or          a1,zero,zero
  0040BC98: 00002025 or          a0,zero,zero
  0040BC9C: 10000013 b           0040BCEC
  0040BCA0: AFB9007C sw          t9,0x7C(sp)
  0040BCA4: 8FAD008C lw          t5,0x8C(sp)
  0040BCA8: 240B0002 addiu       t3,zero,2
  0040BCAC: 8FAC0088 lw          t4,0x88(sp)
  0040BCB0: 11A00007 beq         zero,t5,0040BCD0
  0040BCB4: 00000000 nop
  0040BCB8: 24067FFF addiu       a2,zero,0x7FFF
  0040BCBC: 3C058000 lui         a1,0x8000
  0040BCC0: 00002025 or          a0,zero,zero
  0040BCC4: 00001825 or          v1,zero,zero
  0040BCC8: 10000008 b           0040BCEC
  0040BCCC: AFAB007C sw          t3,0x7C(sp)
  0040BCD0: 11800006 beq         zero,t4,0040BCEC
  0040BCD4: 24180001 addiu       t8,zero,1
  0040BCD8: 00001825 or          v1,zero,zero
  0040BCDC: 00003025 or          a2,zero,zero
  0040BCE0: 00002825 or          a1,zero,zero
  0040BCE4: 00002025 or          a0,zero,zero
  0040BCE8: AFB8007C sw          t8,0x7C(sp)
  0040BCEC: 8FA700C8 lw          a3,0xC8(sp)
  0040BCF0: A8E40005 swl         a0,5(a3)
  0040BCF4: A8E50009 swl         a1,9(a3)
  0040BCF8: A4E30000 sh          v1,0(a3)
  0040BCFC: B8E40002 swr         a0,2(a3)
  0040BD00: B8E50006 swr         a1,6(a3)
  0040BD04: 97AF00A6 lhu         t7,0xA6(sp)
  0040BD08: 00CF7025 or          t6,a2,t7
  0040BD0C: A4EE000A sh          t6,0xA(a3)
  0040BD10: 8FBE0038 lw          s8,0x38(sp)
  0040BD14: 8FBF003C lw          ra,0x3C(sp)
  0040BD18: 8FB70034 lw          s7,0x34(sp)
  0040BD1C: 8FB60030 lw          s6,0x30(sp)
  0040BD20: 8FB5002C lw          s5,0x2C(sp)
  0040BD24: 8FB40028 lw          s4,0x28(sp)
  0040BD28: 8FB30024 lw          s3,0x24(sp)
  0040BD2C: 8FB20020 lw          s2,0x20(sp)
  0040BD30: 8FB1001C lw          s1,0x1C(sp)
  0040BD34: 8FB00018 lw          s0,0x18(sp)
  0040BD38: 8FA2007C lw          v0,0x7C(sp)
  0040BD3C: 03E00008 jr          ra
  0040BD40: 27BD00C8 addiu       sp,sp,0xC8
__STRINGTOLD:
  0040BD44: 27BDFFC0 addiu       sp,sp,0xFFC0
  0040BD48: AFBF0024 sw          ra,0x24(sp)
  0040BD4C: AFA40040 sw          a0,0x40(sp)
  0040BD50: 27A40030 addiu       a0,sp,0x30
  0040BD54: AFA00010 sw          zero,0x10(sp)
  0040BD58: AFA00014 sw          zero,0x14(sp)
  0040BD5C: 0C102CB9 jal         __strgtold12
  0040BD60: AFA00018 sw          zero,0x18(sp)
  0040BD64: 27A40030 addiu       a0,sp,0x30
  0040BD68: 8FA50040 lw          a1,0x40(sp)
  0040BD6C: 0C102872 jal         _ld12told
  0040BD70: AFA2003C sw          v0,0x3C(sp)
  0040BD74: 24010001 addiu       at,zero,1
  0040BD78: 14410002 bne         at,v0,0040BD84
  0040BD7C: 8FA3003C lw          v1,0x3C(sp)
  0040BD80: 34630002 ori         v1,v1,2
  0040BD84: 00601025 or          v0,v1,zero
  0040BD88: 8FBF0024 lw          ra,0x24(sp)
  0040BD8C: 03E00008 jr          ra
  0040BD90: 27BD0040 addiu       sp,sp,0x40
$I10_OUTPUT:
  0040BD94: 27BDFF58 addiu       sp,sp,0xFF58
  0040BD98: AFBF002C sw          ra,0x2C(sp)
  0040BD9C: AFB50028 sw          s5,0x28(sp)
  0040BDA0: AFB40024 sw          s4,0x24(sp)
  0040BDA4: AFB30020 sw          s3,0x20(sp)
  0040BDA8: AFB2001C sw          s2,0x1C(sp)
  0040BDAC: AFB10018 sw          s1,0x18(sp)
  0040BDB0: AFB00014 sw          s0,0x14(sp)
  0040BDB4: AFA400A8 sw          a0,0xA8(sp)
  0040BDB8: AFA500AC sw          a1,0xAC(sp)
  0040BDBC: AFA600B0 sw          a2,0xB0(sp)
  0040BDC0: AFA700B4 sw          a3,0xB4(sp)
  0040BDC4: 97A900B0 lhu         t1,0xB0(sp)
  0040BDC8: 241900CC addiu       t9,zero,0xCC
  0040BDCC: 240B00CC addiu       t3,zero,0xCC
  0040BDD0: 240C00CC addiu       t4,zero,0xCC
  0040BDD4: A3AC0095 sb          t4,0x95(sp)
  0040BDD8: A3AB0094 sb          t3,0x94(sp)
  0040BDDC: A3B90093 sb          t9,0x93(sp)
  0040BDE0: 01201025 or          v0,t1,zero
  0040BDE4: 240E00CC addiu       t6,zero,0xCC
  0040BDE8: 240F00CC addiu       t7,zero,0xCC
  0040BDEC: 241800CC addiu       t8,zero,0xCC
  0040BDF0: 241900FB addiu       t9,zero,0xFB
  0040BDF4: 240B003F addiu       t3,zero,0x3F
  0040BDF8: 240D00CC addiu       t5,zero,0xCC
  0040BDFC: 240C0001 addiu       t4,zero,1
  0040BE00: 30428000 andi        v0,v0,0x8000
  0040BE04: A3B80092 sb          t8,0x92(sp)
  0040BE08: A3AF0091 sb          t7,0x91(sp)
  0040BE0C: A3AE0090 sb          t6,0x90(sp)
  0040BE10: A3AD0096 sb          t5,0x96(sp)
  0040BE14: A3AB009B sb          t3,0x9B(sp)
  0040BE18: A3B9009A sb          t9,0x9A(sp)
  0040BE1C: A3B80099 sb          t8,0x99(sp)
  0040BE20: A3AF0098 sb          t7,0x98(sp)
  0040BE24: A3AE0097 sb          t6,0x97(sp)
  0040BE28: AFAC008C sw          t4,0x8C(sp)
  0040BE2C: 8FA800AC lw          t0,0xAC(sp)
  0040BE30: 8FAA00A8 lw          t2,0xA8(sp)
  0040BE34: 10400005 beq         zero,v0,0040BE4C
  0040BE38: 31297FFF andi        t1,t1,0x7FFF
  0040BE3C: 8FB500BC lw          s5,0xBC(sp)
  0040BE40: 240D002D addiu       t5,zero,0x2D
  0040BE44: 10000004 b           0040BE58
  0040BE48: A2AD0002 sb          t5,2(s5)
  0040BE4C: 8FB500BC lw          s5,0xBC(sp)
  0040BE50: 240E0020 addiu       t6,zero,0x20
  0040BE54: A2AE0002 sb          t6,2(s5)
  0040BE58: 1520000E bne         zero,t1,0040BE94
  0040BE5C: 01201825 or          v1,t1,zero
  0040BE60: 5500000D bnel        zero,t0,0040BE98
  0040BE64: 24017FFF addiu       at,zero,0x7FFF
  0040BE68: 1540000A bne         zero,t2,0040BE94
  0040BE6C: 240F0020 addiu       t7,zero,0x20
  0040BE70: 24030030 addiu       v1,zero,0x30
  0040BE74: 24180001 addiu       t8,zero,1
  0040BE78: A2B80003 sb          t8,3(s5)
  0040BE7C: A2A30004 sb          v1,4(s5)
  0040BE80: A6A00000 sh          zero,0(s5)
  0040BE84: A2AF0002 sb          t7,2(s5)
  0040BE88: A2A00005 sb          zero,5(s5)
  0040BE8C: 10000111 b           0040C2D4
  0040BE90: 24020001 addiu       v0,zero,1
  0040BE94: 24017FFF addiu       at,zero,0x7FFF
  0040BE98: 1461004A bne         at,v1,0040BFC4
  0040BE9C: 27B10064 addiu       s1,sp,0x64
  0040BEA0: 24190001 addiu       t9,zero,1
  0040BEA4: 00085840 sll         t3,t0,1
  0040BEA8: 05610011 bgez        t3,0040BEF0
  0040BEAC: A6B90000 sh          t9,0(s5)
  0040BEB0: 3C0C0041 lui         t4,0x41
  0040BEB4: 258CD5D8 addiu       t4,t4,0xD5D8
  0040BEB8: 89810003 lwl         at,3(t4)
  0040BEBC: 99810000 lwr         at,0(t4)
  0040BEC0: 240E0006 addiu       t6,zero,6
  0040BEC4: AAA10007 swl         at,7(s5)
  0040BEC8: BAA10004 swr         at,4(s5)
  0040BECC: 91810004 lbu         at,4(t4)
  0040BED0: A2A10008 sb          at,8(s5)
  0040BED4: 918D0005 lbu         t5,5(t4)
  0040BED8: A2AD0009 sb          t5,9(s5)
  0040BEDC: 91810006 lbu         at,6(t4)
  0040BEE0: A2AE0003 sb          t6,3(s5)
  0040BEE4: A2A1000A sb          at,0xA(s5)
  0040BEE8: 100000F9 b           0040C2D0
  0040BEEC: AFA0008C sw          zero,0x8C(sp)
  0040BEF0: 14400013 bne         zero,v0,0040BF40
  0040BEF4: 3C01BFFF lui         at,0xBFFF
  0040BEF8: 3421FFFF ori         at,at,0xFFFF
  0040BEFC: 15010010 bne         at,t0,0040BF40
  0040BF00: 2401F800 addiu       at,zero,0xF800
  0040BF04: 1541000E bne         at,t2,0040BF40
  0040BF08: 3C0F0041 lui         t7,0x41
  0040BF0C: 25EFD5D0 addiu       t7,t7,0xD5D0
  0040BF10: 89E10003 lwl         at,3(t7)
  0040BF14: 99E10000 lwr         at,0(t7)
  0040BF18: 24190005 addiu       t9,zero,5
  0040BF1C: AAA10007 swl         at,7(s5)
  0040BF20: BAA10004 swr         at,4(s5)
  0040BF24: 91E10004 lbu         at,4(t7)
  0040BF28: A2A10008 sb          at,8(s5)
  0040BF2C: 91F80005 lbu         t8,5(t7)
  0040BF30: A2B90003 sb          t9,3(s5)
  0040BF34: A2B80009 sb          t8,9(s5)
  0040BF38: 100000E5 b           0040C2D0
  0040BF3C: AFA0008C sw          zero,0x8C(sp)
  0040BF40: 3C018000 lui         at,0x8000
  0040BF44: 15010010 bne         at,t0,0040BF88
  0040BF48: 3C0E0041 lui         t6,0x41
  0040BF4C: 1540000E bne         zero,t2,0040BF88
  0040BF50: 3C0B0041 lui         t3,0x41
  0040BF54: 256BD5C8 addiu       t3,t3,0xD5C8
  0040BF58: 89610003 lwl         at,3(t3)
  0040BF5C: 99610000 lwr         at,0(t3)
  0040BF60: 240D0005 addiu       t5,zero,5
  0040BF64: AAA10007 swl         at,7(s5)
  0040BF68: BAA10004 swr         at,4(s5)
  0040BF6C: 91610004 lbu         at,4(t3)
  0040BF70: A2A10008 sb          at,8(s5)
  0040BF74: 916C0005 lbu         t4,5(t3)
  0040BF78: A2AD0003 sb          t5,3(s5)
  0040BF7C: A2AC0009 sb          t4,9(s5)
  0040BF80: 100000D3 b           0040C2D0
  0040BF84: AFA0008C sw          zero,0x8C(sp)
  0040BF88: 25CED5C0 addiu       t6,t6,0xD5C0
  0040BF8C: 89C10003 lwl         at,3(t6)
  0040BF90: 99C10000 lwr         at,0(t6)
  0040BF94: 24180006 addiu       t8,zero,6
  0040BF98: AAA10007 swl         at,7(s5)
  0040BF9C: BAA10004 swr         at,4(s5)
  0040BFA0: 91C10004 lbu         at,4(t6)
  0040BFA4: A2A10008 sb          at,8(s5)
  0040BFA8: 91CF0005 lbu         t7,5(t6)
  0040BFAC: A2AF0009 sb          t7,9(s5)
  0040BFB0: 91C10006 lbu         at,6(t6)
  0040BFB4: A2B80003 sb          t8,3(s5)
  0040BFB8: A2A1000A sb          at,0xA(s5)
  0040BFBC: 100000C4 b           0040C2D0
  0040BFC0: AFA0008C sw          zero,0x8C(sp)
  0040BFC4: 0003C880 sll         t9,v1,2
  0040BFC8: 00035A03 sra         t3,v1,8
  0040BFCC: 316CFFFF andi        t4,t3,0xFFFF
  0040BFD0: 0323C821 addu        t9,t9,v1
  0040BFD4: 00087E02 srl         t7,t0,0x18
  0040BFD8: 31F8FFFF andi        t8,t7,0xFFFF
  0040BFDC: 0019C880 sll         t9,t9,2
  0040BFE0: 0323C823 subu        t9,t9,v1
  0040BFE4: 00185880 sll         t3,t8,2
  0040BFE8: 000C6880 sll         t5,t4,2
  0040BFEC: 01AC6821 addu        t5,t5,t4
  0040BFF0: 01785821 addu        t3,t3,t8
  0040BFF4: 0019C880 sll         t9,t9,2
  0040BFF8: 0323C821 addu        t9,t9,v1
  0040BFFC: 000B5880 sll         t3,t3,2
  0040C000: 000D6880 sll         t5,t5,2
  0040C004: 01AC6823 subu        t5,t5,t4
  0040C008: 01785823 subu        t3,t3,t8
  0040C00C: 0019C900 sll         t9,t9,4
  0040C010: 0323C821 addu        t9,t9,v1
  0040C014: 000B5880 sll         t3,t3,2
  0040C018: 000D6880 sll         t5,t5,2
  0040C01C: 01AC6821 addu        t5,t5,t4
  0040C020: 01785821 addu        t3,t3,t8
  0040C024: 0019C900 sll         t9,t9,4
  0040C028: 032D7021 addu        t6,t9,t5
  0040C02C: 000B5840 sll         t3,t3,1
  0040C030: 3C01ECBC lui         at,0xECBC
  0040C034: 3421ED0C ori         at,at,0xED0C
  0040C038: 01CB1021 addu        v0,t6,t3
  0040C03C: 00411021 addu        v0,v0,at
  0040C040: 00021403 sra         v0,v0,0x10
  0040C044: 00028400 sll         s0,v0,0x10
  0040C048: 00029400 sll         s2,v0,0x10
  0040C04C: ABA8006D swl         t0,0x6D(sp)
  0040C050: ABAA0069 swl         t2,0x69(sp)
  0040C054: 00108403 sra         s0,s0,0x10
  0040C058: 00129403 sra         s2,s2,0x10
  0040C05C: A7A9006E sh          t1,0x6E(sp)
  0040C060: BBA8006A swr         t0,0x6A(sp)
  0040C064: BBAA0066 swr         t2,0x66(sp)
  0040C068: A7A00064 sh          zero,0x64(sp)
  0040C06C: 00102823 subu        a1,zero,s0
  0040C070: 02202025 or          a0,s1,zero
  0040C074: 0C1031DB jal         __multtenpow12
  0040C078: 24060001 addiu       a2,zero,1
  0040C07C: 97AC006E lhu         t4,0x6E(sp)
  0040C080: 02202025 or          a0,s1,zero
  0040C084: 27A50090 addiu       a1,sp,0x90
  0040C088: 29813FFF slti        at,t4,0x3FFF
  0040C08C: 54200006 bnel        zero,at,0040C0A8
  0040C090: A6B20000 sh          s2,0(s5)
  0040C094: 26120001 addiu       s2,s0,1
  0040C098: 00129400 sll         s2,s2,0x10
  0040C09C: 0C1030E2 jal         __ld12mul
  0040C0A0: 00129403 sra         s2,s2,0x10
  0040C0A4: A6B20000 sh          s2,0(s5)
  0040C0A8: 8FB900B8 lw          t9,0xB8(sp)
  0040C0AC: 8FAF00B4 lw          t7,0xB4(sp)
  0040C0B0: 00008025 or          s0,zero,zero
  0040C0B4: 332D0001 andi        t5,t9,1
  0040C0B8: 11A0000D beq         zero,t5,0040C0F0
  0040C0BC: 01F2C021 addu        t8,t7,s2
  0040C0C0: 1F00000B bgtz        t8,0040C0F0
  0040C0C4: AFB800B4 sw          t8,0xB4(sp)
  0040C0C8: 24030030 addiu       v1,zero,0x30
  0040C0CC: 240E0020 addiu       t6,zero,0x20
  0040C0D0: 240B0001 addiu       t3,zero,1
  0040C0D4: A2AB0003 sb          t3,3(s5)
  0040C0D8: A2AE0002 sb          t6,2(s5)
  0040C0DC: A2A30004 sb          v1,4(s5)
  0040C0E0: A6A00000 sh          zero,0(s5)
  0040C0E4: A2A00005 sb          zero,5(s5)
  0040C0E8: 1000007A b           0040C2D4
  0040C0EC: 24020001 addiu       v0,zero,1
  0040C0F0: 8FAC00B4 lw          t4,0xB4(sp)
  0040C0F4: 24190015 addiu       t9,zero,0x15
  0040C0F8: 29810016 slti        at,t4,0x16
  0040C0FC: 54200003 bnel        zero,at,0040C10C
  0040C100: 97B3006E lhu         s3,0x6E(sp)
  0040C104: AFB900B4 sw          t9,0xB4(sp)
  0040C108: 97B3006E lhu         s3,0x6E(sp)
  0040C10C: A7A0006E sh          zero,0x6E(sp)
  0040C110: 24120008 addiu       s2,zero,8
  0040C114: 2673C002 addiu       s3,s3,0xC002
  0040C118: 0C102C3D jal         __shl_12
  0040C11C: 02202025 or          a0,s1,zero
  0040C120: 26100001 addiu       s0,s0,1
  0040C124: 1612FFFC bne         s2,s0,0040C118
  0040C128: 00000000 nop
  0040C12C: 06610009 bgez        s3,0040C154
  0040C130: 00131023 subu        v0,zero,s3
  0040C134: 305000FF andi        s0,v0,0xFF
  0040C138: 5A000007 blezl       s0,0040C158
  0040C13C: 8FA200B4 lw          v0,0xB4(sp)
  0040C140: 0C102C52 jal         __shr_12
  0040C144: 02202025 or          a0,s1,zero
  0040C148: 2610FFFF addiu       s0,s0,0xFFFF
  0040C14C: 1600FFFC bne         zero,s0,0040C140
  0040C150: 00000000 nop
  0040C154: 8FA200B4 lw          v0,0xB4(sp)
  0040C158: 26B40004 addiu       s4,s5,4
  0040C15C: 02808025 or          s0,s4,zero
  0040C160: 24520001 addiu       s2,v0,1
  0040C164: 1A40001D blez        s2,0040C1DC
  0040C168: 27B30044 addiu       s3,sp,0x44
  0040C16C: 8A210003 lwl         at,3(s1)
  0040C170: 8A2F0007 lwl         t7,7(s1)
  0040C174: 8A2D000B lwl         t5,0xB(s1)
  0040C178: 9A210000 lwr         at,0(s1)
  0040C17C: 9A2F0004 lwr         t7,4(s1)
  0040C180: 9A2D0008 lwr         t5,8(s1)
  0040C184: AA610003 swl         at,3(s3)
  0040C188: AA6F0007 swl         t7,7(s3)
  0040C18C: AA6D000B swl         t5,0xB(s3)
  0040C190: 02202025 or          a0,s1,zero
  0040C194: BA610000 swr         at,0(s3)
  0040C198: BA6F0004 swr         t7,4(s3)
  0040C19C: 0C102C3D jal         __shl_12
  0040C1A0: BA6D0008 swr         t5,8(s3)
  0040C1A4: 0C102C3D jal         __shl_12
  0040C1A8: 02202025 or          a0,s1,zero
  0040C1AC: 02202025 or          a0,s1,zero
  0040C1B0: 0C102C18 jal         __add_12
  0040C1B4: 02602825 or          a1,s3,zero
  0040C1B8: 0C102C3D jal         __shl_12
  0040C1BC: 02202025 or          a0,s1,zero
  0040C1C0: 9238000B lbu         t8,0xB(s1)
  0040C1C4: 2652FFFF addiu       s2,s2,0xFFFF
  0040C1C8: 26100001 addiu       s0,s0,1
  0040C1CC: 270E0030 addiu       t6,t8,0x30
  0040C1D0: A20EFFFF sb          t6,0xFFFF(s0)
  0040C1D4: 1640FFE5 bne         zero,s2,0040C16C
  0040C1D8: A220000B sb          zero,0xB(s1)
  0040C1DC: 8202FFFF lb          v0,0xFFFF(s0)
  0040C1E0: 2610FFFE addiu       s0,s0,0xFFFE
  0040C1E4: 28410035 slti        at,v0,0x35
  0040C1E8: 1420001A bne         zero,at,0040C254
  0040C1EC: 0214082B sltu        at,s0,s4
  0040C1F0: 5420000E bnel        zero,at,0040C22C
  0040C1F4: 0214082B sltu        at,s0,s4
  0040C1F8: 820B0000 lb          t3,0(s0)
  0040C1FC: 24020039 addiu       v0,zero,0x39
  0040C200: 24030030 addiu       v1,zero,0x30
  0040C204: 544B0009 bnel        t3,v0,0040C22C
  0040C208: 0214082B sltu        at,s0,s4
  0040C20C: 2610FFFF addiu       s0,s0,0xFFFF
  0040C210: 0214082B sltu        at,s0,s4
  0040C214: 14200004 bne         zero,at,0040C228
  0040C218: A2030001 sb          v1,1(s0)
  0040C21C: 820C0000 lb          t4,0(s0)
  0040C220: 504CFFFB beql        t4,v0,0040C210
  0040C224: 2610FFFF addiu       s0,s0,0xFFFF
  0040C228: 0214082B sltu        at,s0,s4
  0040C22C: 50200006 beql        zero,at,0040C248
  0040C230: 820D0000 lb          t5,0(s0)
  0040C234: 86B90000 lh          t9,0(s5)
  0040C238: 26100001 addiu       s0,s0,1
  0040C23C: 272F0001 addiu       t7,t9,1
  0040C240: A6AF0000 sh          t7,0(s5)
  0040C244: 820D0000 lb          t5,0(s0)
  0040C248: 25B80001 addiu       t8,t5,1
  0040C24C: 1000001A b           0040C2B8
  0040C250: A2180000 sb          t8,0(s0)
  0040C254: 0214082B sltu        at,s0,s4
  0040C258: 1420000C bne         zero,at,0040C28C
  0040C25C: 240C0020 addiu       t4,zero,0x20
  0040C260: 820E0000 lb          t6,0(s0)
  0040C264: 24030030 addiu       v1,zero,0x30
  0040C268: 546E0009 bnel        t6,v1,0040C290
  0040C26C: 0214082B sltu        at,s0,s4
  0040C270: 2610FFFF addiu       s0,s0,0xFFFF
  0040C274: 0214082B sltu        at,s0,s4
  0040C278: 54200005 bnel        zero,at,0040C290
  0040C27C: 0214082B sltu        at,s0,s4
  0040C280: 820B0000 lb          t3,0(s0)
  0040C284: 506BFFFB beql        t3,v1,0040C274
  0040C288: 2610FFFF addiu       s0,s0,0xFFFF
  0040C28C: 0214082B sltu        at,s0,s4
  0040C290: 10200009 beq         zero,at,0040C2B8
  0040C294: 24030030 addiu       v1,zero,0x30
  0040C298: 24190001 addiu       t9,zero,1
  0040C29C: A2B90003 sb          t9,3(s5)
  0040C2A0: A6A00000 sh          zero,0(s5)
  0040C2A4: A2AC0002 sb          t4,2(s5)
  0040C2A8: A2A30004 sb          v1,4(s5)
  0040C2AC: A2A00005 sb          zero,5(s5)
  0040C2B0: 10000008 b           0040C2D4
  0040C2B4: 24020001 addiu       v0,zero,1
  0040C2B8: 02157823 subu        t7,s0,s5
  0040C2BC: 25EDFFFD addiu       t5,t7,0xFFFD
  0040C2C0: A2AD0003 sb          t5,3(s5)
  0040C2C4: 82B80003 lb          t8,3(s5)
  0040C2C8: 02B87021 addu        t6,s5,t8
  0040C2CC: A1C00004 sb          zero,4(t6)
  0040C2D0: 8FA2008C lw          v0,0x8C(sp)
  0040C2D4: 8FB00014 lw          s0,0x14(sp)
  0040C2D8: 8FB10018 lw          s1,0x18(sp)
  0040C2DC: 8FB2001C lw          s2,0x1C(sp)
  0040C2E0: 8FB30020 lw          s3,0x20(sp)
  0040C2E4: 8FB40024 lw          s4,0x24(sp)
  0040C2E8: 8FB50028 lw          s5,0x28(sp)
  0040C2EC: 8FBF002C lw          ra,0x2C(sp)
  0040C2F0: 03E00008 jr          ra
  0040C2F4: 27BD00A8 addiu       sp,sp,0xA8
calloc:
  0040C2F8: 27BDFFE0 addiu       sp,sp,0xFFE0
  0040C2FC: AFB00018 sw          s0,0x18(sp)
  0040C300: 00A08025 or          s0,a1,zero
  0040C304: AFBF001C sw          ra,0x1C(sp)
  0040C308: 02040019 multu       s0,a0
  0040C30C: 00008012 mflo        s0
  0040C310: 56000003 bnel        zero,s0,0040C320
  0040C314: 2E01FFE1 sltiu       at,s0,0xFFE1
  0040C318: 24100001 addiu       s0,zero,1
  0040C31C: 2E01FFE1 sltiu       at,s0,0xFFE1
  0040C320: 50200009 beql        zero,at,0040C348
  0040C324: 00001825 or          v1,zero,zero
  0040C328: 3C0E0041 lui         t6,0x41
  0040C32C: 8DCE1244 lw          t6,0x1244(t6)
  0040C330: 3C040041 lui         a0,0x41
  0040C334: 8C84F5C0 lw          a0,0xF5C0(a0)
  0040C338: 24050008 addiu       a1,zero,8
  0040C33C: 01C0F809 jalr        ra,t6
  0040C340: 02003025 or          a2,s0,zero
  0040C344: 00401825 or          v1,v0,zero
  0040C348: 14600004 bne         zero,v1,0040C35C
  0040C34C: 3C0F0041 lui         t7,0x41
  0040C350: 8DEFEA0C lw          t7,0xEA0C(t7)
  0040C354: 15E00003 bne         zero,t7,0040C364
  0040C358: 00000000 nop
  0040C35C: 10000006 b           0040C378
  0040C360: 00601025 or          v0,v1,zero
  0040C364: 0C102649 jal         _callnewh
  0040C368: 02002025 or          a0,s0,zero
  0040C36C: 5440FFEC bnel        zero,v0,0040C320
  0040C370: 2E01FFE1 sltiu       at,s0,0xFFE1
  0040C374: 00001025 or          v0,zero,zero
  0040C378: 8FB00018 lw          s0,0x18(sp)
  0040C37C: 8FBF001C lw          ra,0x1C(sp)
  0040C380: 03E00008 jr          ra
  0040C384: 27BD0020 addiu       sp,sp,0x20
__ld12mul:
  0040C388: 27BDFF60 addiu       sp,sp,0xFF60
  0040C38C: AFBF003C sw          ra,0x3C(sp)
  0040C390: AFBE0038 sw          s8,0x38(sp)
  0040C394: AFB70034 sw          s7,0x34(sp)
  0040C398: AFB60030 sw          s6,0x30(sp)
  0040C39C: AFB5002C sw          s5,0x2C(sp)
  0040C3A0: AFB40028 sw          s4,0x28(sp)
  0040C3A4: AFB30024 sw          s3,0x24(sp)
  0040C3A8: AFB20020 sw          s2,0x20(sp)
  0040C3AC: AFB1001C sw          s1,0x1C(sp)
  0040C3B0: AFB00018 sw          s0,0x18(sp)
  0040C3B4: AFA400A0 sw          a0,0xA0(sp)
  0040C3B8: AFA500A4 sw          a1,0xA4(sp)
  0040C3BC: 8FAE00A0 lw          t6,0xA0(sp)
  0040C3C0: 8FAF00A4 lw          t7,0xA4(sp)
  0040C3C4: AFA00090 sw          zero,0x90(sp)
  0040C3C8: AFA00094 sw          zero,0x94(sp)
  0040C3CC: AFA00098 sw          zero,0x98(sp)
  0040C3D0: 95C2000A lhu         v0,0xA(t6)
  0040C3D4: 95E3000A lhu         v1,0xA(t7)
  0040C3D8: 8FAA00A0 lw          t2,0xA0(sp)
  0040C3DC: 30467FFF andi        a2,v0,0x7FFF
  0040C3E0: 0043C026 xor         t8,v0,v1
  0040C3E4: 30637FFF andi        v1,v1,0x7FFF
  0040C3E8: 33198000 andi        t9,t8,0x8000
  0040C3EC: 00C34021 addu        t0,a2,v1
  0040C3F0: 28C17FFF slti        at,a2,0x7FFF
  0040C3F4: A7B9009E sh          t9,0x9E(sp)
  0040C3F8: 3117FFFF andi        s7,t0,0xFFFF
  0040C3FC: 10200008 beq         zero,at,0040C420
  0040C400: 00603825 or          a3,v1,zero
  0040C404: 28617FFF slti        at,v1,0x7FFF
  0040C408: 10200005 beq         zero,at,0040C420
  0040C40C: 3102FFFF andi        v0,t0,0xFFFF
  0040C410: 3401BFFE ori         at,zero,0xBFFE
  0040C414: 0041082A slt         at,v0,at
  0040C418: 5420000B bnel        zero,at,0040C448
  0040C41C: 28413FC0 slti        at,v0,0x3FC0
  0040C420: 97A9009E lhu         t1,0x9E(sp)
  0040C424: 55200003 bnel        zero,t1,0040C434
  0040C428: 24028000 addiu       v0,zero,0x8000
  0040C42C: 3C027FFF lui         v0,0x7FFF
  0040C430: 34428000 ori         v0,v0,0x8000
  0040C434: AD420008 sw          v0,8(t2)
  0040C438: AD400004 sw          zero,4(t2)
  0040C43C: 100000BF b           0040C73C
  0040C440: AD400000 sw          zero,0(t2)
  0040C444: 28413FC0 slti        at,v0,0x3FC0
  0040C448: 10200005 beq         zero,at,0040C460
  0040C44C: 8FAB00A0 lw          t3,0xA0(sp)
  0040C450: AD600008 sw          zero,8(t3)
  0040C454: AD600004 sw          zero,4(t3)
  0040C458: 100000B8 b           0040C73C
  0040C45C: AD600000 sw          zero,0(t3)
  0040C460: 14C0000D bne         zero,a2,0040C498
  0040C464: 8FAC00A0 lw          t4,0xA0(sp)
  0040C468: 8D8D0008 lw          t5,8(t4)
  0040C46C: 24570001 addiu       s7,v0,1
  0040C470: 32F7FFFF andi        s7,s7,0xFFFF
  0040C474: 000D7040 sll         t6,t5,1
  0040C478: 15C00007 bne         zero,t6,0040C498
  0040C47C: 00000000 nop
  0040C480: 8D8F0004 lw          t7,4(t4)
  0040C484: 15E00004 bne         zero,t7,0040C498
  0040C488: 00000000 nop
  0040C48C: 8D980000 lw          t8,0(t4)
  0040C490: 530000AA beql        zero,t8,0040C73C
  0040C494: A580000A sh          zero,0xA(t4)
  0040C498: 14E00012 bne         zero,a3,0040C4E4
  0040C49C: 8FB900A4 lw          t9,0xA4(sp)
  0040C4A0: 8F290008 lw          t1,8(t9)
  0040C4A4: 26F70001 addiu       s7,s7,1
  0040C4A8: 32F7FFFF andi        s7,s7,0xFFFF
  0040C4AC: 00095040 sll         t2,t1,1
  0040C4B0: 5540000D bnel        zero,t2,0040C4E8
  0040C4B4: 0000F025 or          s8,zero,zero
  0040C4B8: 8F2B0004 lw          t3,4(t9)
  0040C4BC: 5560000A bnel        zero,t3,0040C4E8
  0040C4C0: 0000F025 or          s8,zero,zero
  0040C4C4: 8F2D0000 lw          t5,0(t9)
  0040C4C8: 8FAE00A0 lw          t6,0xA0(sp)
  0040C4CC: 55A00006 bnel        zero,t5,0040C4E8
  0040C4D0: 0000F025 or          s8,zero,zero
  0040C4D4: ADC00008 sw          zero,8(t6)
  0040C4D8: ADC00004 sw          zero,4(t6)
  0040C4DC: 10000097 b           0040C73C
  0040C4E0: ADC00000 sw          zero,0(t6)
  0040C4E4: 0000F025 or          s8,zero,zero
  0040C4E8: 0000B025 or          s6,zero,zero
  0040C4EC: 27B5005C addiu       s5,sp,0x5C
  0040C4F0: 240F0005 addiu       t7,zero,5
  0040C4F4: 01F69823 subu        s3,t7,s6
  0040C4F8: 1A600021 blez        s3,0040C580
  0040C4FC: 00161840 sll         v1,s6,1
  0040C500: 8FB800A0 lw          t8,0xA0(sp)
  0040C504: 8FB200A4 lw          s2,0xA4(sp)
  0040C508: 27AC0090 addiu       t4,sp,0x90
  0040C50C: 03CC8021 addu        s0,s8,t4
  0040C510: 32D40001 andi        s4,s6,1
  0040C514: 03038821 addu        s1,t8,v1
  0040C518: 26520008 addiu       s2,s2,8
  0040C51C: 96290000 lhu         t1,0(s1)
  0040C520: 964A0000 lhu         t2,0(s2)
  0040C524: 02003025 or          a2,s0,zero
  0040C528: 012A0019 multu       t1,t2
  0040C52C: 00002812 mflo        a1
  0040C530: 12800009 beq         zero,s4,0040C558
  0040C534: 00000000 nop
  0040C538: 8A040003 lwl         a0,3(s0)
  0040C53C: 02A03025 or          a2,s5,zero
  0040C540: 0C102C0D jal         __addl
  0040C544: 9A040000 lwr         a0,0(s0)
  0040C548: 8FAB005C lw          t3,0x5C(sp)
  0040C54C: AA0B0003 swl         t3,3(s0)
  0040C550: 10000003 b           0040C560
  0040C554: BA0B0000 swr         t3,0(s0)
  0040C558: 0C102C0D jal         __addl
  0040C55C: 8E040000 lw          a0,0(s0)
  0040C560: 10400004 beq         zero,v0,0040C574
  0040C564: 26310002 addiu       s1,s1,2
  0040C568: 96190004 lhu         t9,4(s0)
  0040C56C: 272D0001 addiu       t5,t9,1
  0040C570: A60D0004 sh          t5,4(s0)
  0040C574: 2673FFFF addiu       s3,s3,0xFFFF
  0040C578: 1660FFE8 bne         zero,s3,0040C51C
  0040C57C: 2652FFFE addiu       s2,s2,0xFFFE
  0040C580: 26D60001 addiu       s6,s6,1
  0040C584: 2AC10005 slti        at,s6,5
  0040C588: 1420FFD9 bne         zero,at,0040C4F0
  0040C58C: 27DE0002 addiu       s8,s8,2
  0040C590: 26F7C002 addiu       s7,s7,0xC002
  0040C594: 32F0FFFF andi        s0,s7,0xFFFF
  0040C598: 00101400 sll         v0,s0,0x10
  0040C59C: 00021403 sra         v0,v0,0x10
  0040C5A0: 18400010 blez        v0,0040C5E4
  0040C5A4: 8FAE0098 lw          t6,0x98(sp)
  0040C5A8: 000E7800 sll         t7,t6,0
  0040C5AC: 05E0000D bltz        t7,0040C5E4
  0040C5B0: 3C128000 lui         s2,0x8000
  0040C5B4: 27B10090 addiu       s1,sp,0x90
  0040C5B8: 0C102C3D jal         __shl_12
  0040C5BC: 02202025 or          a0,s1,zero
  0040C5C0: 2617FFFF addiu       s7,s0,0xFFFF
  0040C5C4: 32F0FFFF andi        s0,s7,0xFFFF
  0040C5C8: 00101400 sll         v0,s0,0x10
  0040C5CC: 00021403 sra         v0,v0,0x10
  0040C5D0: 18400004 blez        v0,0040C5E4
  0040C5D4: 8FB80098 lw          t8,0x98(sp)
  0040C5D8: 03126024 and         t4,t8,s2
  0040C5DC: 1180FFF6 beq         zero,t4,0040C5B8
  0040C5E0: 00000000 nop
  0040C5E4: 1C40001B bgtz        v0,0040C654
  0040C5E8: 27B10090 addiu       s1,sp,0x90
  0040C5EC: 2617FFFF addiu       s7,s0,0xFFFF
  0040C5F0: 32F0FFFF andi        s0,s7,0xFFFF
  0040C5F4: 00104C00 sll         t1,s0,0x10
  0040C5F8: 00095403 sra         t2,t1,0x10
  0040C5FC: 0541000F bgez        t2,0040C63C
  0040C600: 8FB20058 lw          s2,0x58(sp)
  0040C604: 962B0000 lhu         t3,0(s1)
  0040C608: 31790001 andi        t9,t3,1
  0040C60C: 13200002 beq         zero,t9,0040C618
  0040C610: 00000000 nop
  0040C614: 26520001 addiu       s2,s2,1
  0040C618: 0C102C52 jal         __shr_12
  0040C61C: 02202025 or          a0,s1,zero
  0040C620: 26170001 addiu       s7,s0,1
  0040C624: 32F0FFFF andi        s0,s7,0xFFFF
  0040C628: 00106C00 sll         t5,s0,0x10
  0040C62C: 000D7403 sra         t6,t5,0x10
  0040C630: 05C2FFF5 bltzl       t6,0040C608
  0040C634: 962B0000 lhu         t3,0(s1)
  0040C638: AFB20058 sw          s2,0x58(sp)
  0040C63C: 8FB20058 lw          s2,0x58(sp)
  0040C640: 52400005 beql        zero,s2,0040C658
  0040C644: 962C0000 lhu         t4,0(s1)
  0040C648: 962F0000 lhu         t7,0(s1)
  0040C64C: 35F80001 ori         t8,t7,1
  0040C650: A6380000 sh          t8,0(s1)
  0040C654: 962C0000 lhu         t4,0(s1)
  0040C658: 34018001 ori         at,zero,0x8001
  0040C65C: 0181082A slt         at,t4,at
  0040C660: 5420001F bnel        zero,at,0040C6E0
  0040C664: 2A017FFF slti        at,s0,0x7FFF
  0040C668: 8A220005 lwl         v0,5(s1)
  0040C66C: 9A220002 lwr         v0,2(s1)
  0040C670: 2403FFFF addiu       v1,zero,0xFFFF
  0040C674: 14620017 bne         v0,v1,0040C6D4
  0040C678: 24590001 addiu       t9,v0,1
  0040C67C: 8A220009 lwl         v0,9(s1)
  0040C680: 9A220006 lwr         v0,6(s1)
  0040C684: AA200005 swl         zero,5(s1)
  0040C688: BA200002 swr         zero,2(s1)
  0040C68C: 1462000E bne         v0,v1,0040C6C8
  0040C690: 244B0001 addiu       t3,v0,1
  0040C694: 9622000A lhu         v0,0xA(s1)
  0040C698: AA200009 swl         zero,9(s1)
  0040C69C: 3401FFFF ori         at,zero,0xFFFF
  0040C6A0: 14410006 bne         at,v0,0040C6BC
  0040C6A4: BA200006 swr         zero,6(s1)
  0040C6A8: 34098000 ori         t1,zero,0x8000
  0040C6AC: 26170001 addiu       s7,s0,1
  0040C6B0: A629000A sh          t1,0xA(s1)
  0040C6B4: 10000009 b           0040C6DC
  0040C6B8: 32F0FFFF andi        s0,s7,0xFFFF
  0040C6BC: 244A0001 addiu       t2,v0,1
  0040C6C0: 10000006 b           0040C6DC
  0040C6C4: A62A000A sh          t2,0xA(s1)
  0040C6C8: AA2B0009 swl         t3,9(s1)
  0040C6CC: 10000003 b           0040C6DC
  0040C6D0: BA2B0006 swr         t3,6(s1)
  0040C6D4: AA390005 swl         t9,5(s1)
  0040C6D8: BA390002 swr         t9,2(s1)
  0040C6DC: 2A017FFF slti        at,s0,0x7FFF
  0040C6E0: 1420000B bne         zero,at,0040C710
  0040C6E4: 8FB800A0 lw          t8,0xA0(sp)
  0040C6E8: 97AD009E lhu         t5,0x9E(sp)
  0040C6EC: 8FAE00A0 lw          t6,0xA0(sp)
  0040C6F0: 55A00003 bnel        zero,t5,0040C700
  0040C6F4: 24028000 addiu       v0,zero,0x8000
  0040C6F8: 3C027FFF lui         v0,0x7FFF
  0040C6FC: 34428000 ori         v0,v0,0x8000
  0040C700: ADC20008 sw          v0,8(t6)
  0040C704: ADC00004 sw          zero,4(t6)
  0040C708: 1000000C b           0040C73C
  0040C70C: ADC00000 sw          zero,0(t6)
  0040C710: 962F0002 lhu         t7,2(s1)
  0040C714: A70F0000 sh          t7,0(t8)
  0040C718: 8E2C0004 lw          t4,4(s1)
  0040C71C: AB0C0005 swl         t4,5(t8)
  0040C720: BB0C0002 swr         t4,2(t8)
  0040C724: 8E290008 lw          t1,8(s1)
  0040C728: AB090009 swl         t1,9(t8)
  0040C72C: BB090006 swr         t1,6(t8)
  0040C730: 97AA009E lhu         t2,0x9E(sp)
  0040C734: 020A5825 or          t3,s0,t2
  0040C738: A70B000A sh          t3,0xA(t8)
  0040C73C: 8FB00018 lw          s0,0x18(sp)
  0040C740: 8FB1001C lw          s1,0x1C(sp)
  0040C744: 8FB20020 lw          s2,0x20(sp)
  0040C748: 8FB30024 lw          s3,0x24(sp)
  0040C74C: 8FB40028 lw          s4,0x28(sp)
  0040C750: 8FB5002C lw          s5,0x2C(sp)
  0040C754: 8FB60030 lw          s6,0x30(sp)
  0040C758: 8FB70034 lw          s7,0x34(sp)
  0040C75C: 8FBF003C lw          ra,0x3C(sp)
  0040C760: 8FBE0038 lw          s8,0x38(sp)
  0040C764: 03E00008 jr          ra
  0040C768: 27BD00A0 addiu       sp,sp,0xA0
__multtenpow12:
  0040C76C: 27BDFFB0 addiu       sp,sp,0xFFB0
  0040C770: AFB50028 sw          s5,0x28(sp)
  0040C774: AFB00014 sw          s0,0x14(sp)
  0040C778: 00A08025 or          s0,a1,zero
  0040C77C: 0080A825 or          s5,a0,zero
  0040C780: AFBF002C sw          ra,0x2C(sp)
  0040C784: AFB40024 sw          s4,0x24(sp)
  0040C788: AFB30020 sw          s3,0x20(sp)
  0040C78C: AFB2001C sw          s2,0x1C(sp)
  0040C790: AFB10018 sw          s1,0x18(sp)
  0040C794: 3C120041 lui         s2,0x41
  0040C798: 1200002D beq         zero,s0,0040C850
  0040C79C: 2652E9FC addiu       s2,s2,0xE9FC
  0040C7A0: 06010004 bgez        s0,0040C7B4
  0040C7A4: 34148000 ori         s4,zero,0x8000
  0040C7A8: 3C120041 lui         s2,0x41
  0040C7AC: 00108023 subu        s0,zero,s0
  0040C7B0: 2652EB58 addiu       s2,s2,0xEB58
  0040C7B4: 14C00002 bne         zero,a2,0040C7C0
  0040C7B8: 2413000C addiu       s3,zero,0xC
  0040C7BC: A6A00000 sh          zero,0(s5)
  0040C7C0: 12000023 beq         zero,s0,0040C850
  0040C7C4: 27B10038 addiu       s1,sp,0x38
  0040C7C8: 32030007 andi        v1,s0,7
  0040C7CC: 26520054 addiu       s2,s2,0x54
  0040C7D0: 1060001D beq         zero,v1,0040C848
  0040C7D4: 001080C3 sra         s0,s0,3
  0040C7D8: 00730019 multu       v1,s3
  0040C7DC: 00007012 mflo        t6
  0040C7E0: 024E1021 addu        v0,s2,t6
  0040C7E4: 944F0000 lhu         t7,0(v0)
  0040C7E8: 00402825 or          a1,v0,zero
  0040C7EC: 01F4082A slt         at,t7,s4
  0040C7F0: 14200013 bne         zero,at,0040C840
  0040C7F4: 00000000 nop
  0040C7F8: 88410003 lwl         at,3(v0)
  0040C7FC: 88590007 lwl         t9,7(v0)
  0040C800: 8858000B lwl         t8,0xB(v0)
  0040C804: 98410000 lwr         at,0(v0)
  0040C808: 98590004 lwr         t9,4(v0)
  0040C80C: 98580008 lwr         t8,8(v0)
  0040C810: AA210003 swl         at,3(s1)
  0040C814: AA390007 swl         t9,7(s1)
  0040C818: AA38000B swl         t8,0xB(s1)
  0040C81C: BA210000 swr         at,0(s1)
  0040C820: BA390004 swr         t9,4(s1)
  0040C824: BA380008 swr         t8,8(s1)
  0040C828: 8BA8003D lwl         t0,0x3D(sp)
  0040C82C: 9BA8003A lwr         t0,0x3A(sp)
  0040C830: 02202825 or          a1,s1,zero
  0040C834: 2509FFFF addiu       t1,t0,0xFFFF
  0040C838: ABA9003D swl         t1,0x3D(sp)
  0040C83C: BBA9003A swr         t1,0x3A(sp)
  0040C840: 0C1030E2 jal         __ld12mul
  0040C844: 02A02025 or          a0,s5,zero
  0040C848: 5600FFE0 bnel        zero,s0,0040C7CC
  0040C84C: 32030007 andi        v1,s0,7
  0040C850: 8FB00014 lw          s0,0x14(sp)
  0040C854: 8FB10018 lw          s1,0x18(sp)
  0040C858: 8FB2001C lw          s2,0x1C(sp)
  0040C85C: 8FB30020 lw          s3,0x20(sp)
  0040C860: 8FB40024 lw          s4,0x24(sp)
  0040C864: 8FB50028 lw          s5,0x28(sp)
  0040C868: 8FBF002C lw          ra,0x2C(sp)
  0040C86C: 03E00008 jr          ra
  0040C870: 27BD0050 addiu       sp,sp,0x50
GetModuleHandleA:
  0040C874: 3C080041 lui         t0,0x41
  0040C878: 8D081288 lw          t0,0x1288(t0)
  0040C87C: 01000008 jr          t0
  0040C880: 00000000 nop
LocalAlloc:
  0040C884: 3C080041 lui         t0,0x41
  0040C888: 8D081280 lw          t0,0x1280(t0)
  0040C88C: 01000008 jr          t0
  0040C890: 00000000 nop
lstrlenA:
  0040C894: 3C080041 lui         t0,0x41
  0040C898: 8D08128C lw          t0,0x128C(t0)
  0040C89C: 01000008 jr          t0
  0040C8A0: 00000000 nop
LocalFree:
  0040C8A4: 3C080041 lui         t0,0x41
  0040C8A8: 8D081284 lw          t0,0x1284(t0)
  0040C8AC: 01000008 jr          t0
  0040C8B0: 00000000 nop
GetVersion:
  0040C8B4: 3C080041 lui         t0,0x41
  0040C8B8: 8D081270 lw          t0,0x1270(t0)
  0040C8BC: 01000008 jr          t0
  0040C8C0: 00000000 nop
GetStartupInfoA:
  0040C8C4: 3C080041 lui         t0,0x41
  0040C8C8: 8D081278 lw          t0,0x1278(t0)
  0040C8CC: 01000008 jr          t0
  0040C8D0: 00000000 nop
GetCommandLineA:
  0040C8D4: 3C080041 lui         t0,0x41
  0040C8D8: 8D081274 lw          t0,0x1274(t0)
  0040C8DC: 01000008 jr          t0
  0040C8E0: 00000000 nop
ExitProcess:
  0040C8E4: 3C080041 lui         t0,0x41
  0040C8E8: 8D081264 lw          t0,0x1264(t0)
  0040C8EC: 01000008 jr          t0
  0040C8F0: 00000000 nop
TerminateProcess:
  0040C8F4: 3C080041 lui         t0,0x41
  0040C8F8: 8D08126C lw          t0,0x126C(t0)
  0040C8FC: 01000008 jr          t0
  0040C900: 00000000 nop
GetCurrentProcess:
  0040C904: 3C080041 lui         t0,0x41
  0040C908: 8D081268 lw          t0,0x1268(t0)
  0040C90C: 01000008 jr          t0
  0040C910: 00000000 nop
UnhandledExceptionFilter:
  0040C914: 3C080041 lui         t0,0x41
  0040C918: 8D081230 lw          t0,0x1230(t0)
  0040C91C: 01000008 jr          t0
  0040C920: 00000000 nop
RtlUnwind:
  0040C924: 3C080041 lui         t0,0x41
  0040C928: 8D08123C lw          t0,0x123C(t0)
  0040C92C: 01000008 jr          t0
  0040C930: 00000000 nop
HeapDestroy:
  0040C934: 3C080041 lui         t0,0x41
  0040C938: 8D081234 lw          t0,0x1234(t0)
  0040C93C: 01000008 jr          t0
  0040C940: 00000000 nop
HeapCreate:
  0040C944: 3C080041 lui         t0,0x41
  0040C948: 8D08121C lw          t0,0x121C(t0)
  0040C94C: 01000008 jr          t0
  0040C950: 00000000 nop
GetStdHandle:
  0040C954: 3C080041 lui         t0,0x41
  0040C958: 8D081218 lw          t0,0x1218(t0)
  0040C95C: 01000008 jr          t0
  0040C960: 00000000 nop
GetFileType:
  0040C964: 3C080041 lui         t0,0x41
  0040C968: 8D08120C lw          t0,0x120C(t0)
  0040C96C: 01000008 jr          t0
  0040C970: 00000000 nop
SetHandleCount:
  0040C974: 3C080041 lui         t0,0x41
  0040C978: 8D081210 lw          t0,0x1210(t0)
  0040C97C: 01000008 jr          t0
  0040C980: 00000000 nop
GetACP:
  0040C984: 3C080041 lui         t0,0x41
  0040C988: 8D081214 lw          t0,0x1214(t0)
  0040C98C: 01000008 jr          t0
  0040C990: 00000000 nop
GetOEMCP:
  0040C994: 3C080041 lui         t0,0x41
  0040C998: 8D081220 lw          t0,0x1220(t0)
  0040C99C: 01000008 jr          t0
  0040C9A0: 00000000 nop
GetCPInfo:
  0040C9A4: 3C080041 lui         t0,0x41
  0040C9A8: 8D081238 lw          t0,0x1238(t0)
  0040C9AC: 01000008 jr          t0
  0040C9B0: 00000000 nop
GetEnvironmentStringsW:
  0040C9B4: 3C080041 lui         t0,0x41
  0040C9B8: 8D081224 lw          t0,0x1224(t0)
  0040C9BC: 01000008 jr          t0
  0040C9C0: 00000000 nop
WideCharToMultiByte:
  0040C9C4: 3C080041 lui         t0,0x41
  0040C9C8: 8D081228 lw          t0,0x1228(t0)
  0040C9CC: 01000008 jr          t0
  0040C9D0: 00000000 nop
GetEnvironmentStrings:
  0040C9D4: 3C080041 lui         t0,0x41
  0040C9D8: 8D08122C lw          t0,0x122C(t0)
  0040C9DC: 01000008 jr          t0
  0040C9E0: 00000000 nop
FreeEnvironmentStringsW:
  0040C9E4: 3C080041 lui         t0,0x41
  0040C9E8: 8D08127C lw          t0,0x127C(t0)
  0040C9EC: 01000008 jr          t0
  0040C9F0: 00000000 nop
FreeEnvironmentStringsA:
  0040C9F4: 3C080041 lui         t0,0x41
  0040C9F8: 8D081290 lw          t0,0x1290(t0)
  0040C9FC: 01000008 jr          t0
  0040CA00: 00000000 nop
MultiByteToWideChar:
  0040CA04: 3C080041 lui         t0,0x41
  0040CA08: 8D081294 lw          t0,0x1294(t0)
  0040CA0C: 01000008 jr          t0
  0040CA10: 00000000 nop
GetModuleFileNameA:
  0040CA14: 3C080041 lui         t0,0x41
  0040CA18: 8D081298 lw          t0,0x1298(t0)
  0040CA1C: 01000008 jr          t0
  0040CA20: 00000000 nop
WriteFile:
  0040CA24: 3C080041 lui         t0,0x41
  0040CA28: 8D081240 lw          t0,0x1240(t0)
  0040CA2C: 01000008 jr          t0
  0040CA30: 00000000 nop
HeapAlloc:
  0040CA34: 3C080041 lui         t0,0x41
  0040CA38: 8D081244 lw          t0,0x1244(t0)
  0040CA3C: 01000008 jr          t0
  0040CA40: 00000000 nop
HeapFree:
  0040CA44: 3C080041 lui         t0,0x41
  0040CA48: 8D081248 lw          t0,0x1248(t0)
  0040CA4C: 01000008 jr          t0
  0040CA50: 00000000 nop
LoadLibraryA:
  0040CA54: 3C080041 lui         t0,0x41
  0040CA58: 8D08124C lw          t0,0x124C(t0)
  0040CA5C: 01000008 jr          t0
  0040CA60: 00000000 nop
GetProcAddress:
  0040CA64: 3C080041 lui         t0,0x41
  0040CA68: 8D081250 lw          t0,0x1250(t0)
  0040CA6C: 01000008 jr          t0
  0040CA70: 00000000 nop
LCMapStringA:
  0040CA74: 3C080041 lui         t0,0x41
  0040CA78: 8D081254 lw          t0,0x1254(t0)
  0040CA7C: 01000008 jr          t0
  0040CA80: 00000000 nop
LCMapStringW:
  0040CA84: 3C080041 lui         t0,0x41
  0040CA88: 8D081258 lw          t0,0x1258(t0)
  0040CA8C: 01000008 jr          t0
  0040CA90: 00000000 nop
GetStringTypeA:
  0040CA94: 3C080041 lui         t0,0x41
  0040CA98: 8D08125C lw          t0,0x125C(t0)
  0040CA9C: 01000008 jr          t0
  0040CAA0: 00000000 nop
GetStringTypeW:
  0040CAA4: 3C080041 lui         t0,0x41
  0040CAA8: 8D081260 lw          t0,0x1260(t0)
  0040CAAC: 01000008 jr          t0
  0040CAB0: 00000000 nop
SetWindowTextA:
  0040CAB4: 3C080041 lui         t0,0x41
  0040CAB8: 8D081334 lw          t0,0x1334(t0)
  0040CABC: 01000008 jr          t0
  0040CAC0: 00000000 nop
CreateWindowExA:
  0040CAC4: 3C080041 lui         t0,0x41
  0040CAC8: 8D081330 lw          t0,0x1330(t0)
  0040CACC: 01000008 jr          t0
  0040CAD0: 00000000 nop
GetSystemMetrics:
  0040CAD4: 3C080041 lui         t0,0x41
  0040CAD8: 8D08132C lw          t0,0x132C(t0)
  0040CADC: 01000008 jr          t0
  0040CAE0: 00000000 nop
ReleaseCapture:
  0040CAE4: 3C080041 lui         t0,0x41
  0040CAE8: 8D081328 lw          t0,0x1328(t0)
  0040CAEC: 01000008 jr          t0
  0040CAF0: 00000000 nop
LoadAcceleratorsA:
  0040CAF4: 3C080041 lui         t0,0x41
  0040CAF8: 8D081324 lw          t0,0x1324(t0)
  0040CAFC: 01000008 jr          t0
  0040CB00: 00000000 nop
SetCursorPos:
  0040CB04: 3C080041 lui         t0,0x41
  0040CB08: 8D081320 lw          t0,0x1320(t0)
  0040CB0C: 01000008 jr          t0
  0040CB10: 00000000 nop
CheckMenuItem:
  0040CB14: 3C080041 lui         t0,0x41
  0040CB18: 8D08131C lw          t0,0x131C(t0)
  0040CB1C: 01000008 jr          t0
  0040CB20: 00000000 nop
DispatchMessageA:
  0040CB24: 3C080041 lui         t0,0x41
  0040CB28: 8D081318 lw          t0,0x1318(t0)
  0040CB2C: 01000008 jr          t0
  0040CB30: 00000000 nop
EndPaint:
  0040CB34: 3C080041 lui         t0,0x41
  0040CB38: 8D081338 lw          t0,0x1338(t0)
  0040CB3C: 01000008 jr          t0
  0040CB40: 00000000 nop
LoadStringA:
  0040CB44: 3C080041 lui         t0,0x41
  0040CB48: 8D08133C lw          t0,0x133C(t0)
  0040CB4C: 01000008 jr          t0
  0040CB50: 00000000 nop
ShowWindow:
  0040CB54: 3C080041 lui         t0,0x41
  0040CB58: 8D081314 lw          t0,0x1314(t0)
  0040CB5C: 01000008 jr          t0
  0040CB60: 00000000 nop
IsIconic:
  0040CB64: 3C080041 lui         t0,0x41
  0040CB68: 8D081310 lw          t0,0x1310(t0)
  0040CB6C: 01000008 jr          t0
  0040CB70: 00000000 nop
GetClientRect:
  0040CB74: 3C080041 lui         t0,0x41
  0040CB78: 8D08130C lw          t0,0x130C(t0)
  0040CB7C: 01000008 jr          t0
  0040CB80: 00000000 nop
BeginPaint:
  0040CB84: 3C080041 lui         t0,0x41
  0040CB88: 8D081308 lw          t0,0x1308(t0)
  0040CB8C: 01000008 jr          t0
  0040CB90: 00000000 nop
TranslateMessage:
  0040CB94: 3C080041 lui         t0,0x41
  0040CB98: 8D081304 lw          t0,0x1304(t0)
  0040CB9C: 01000008 jr          t0
  0040CBA0: 00000000 nop
SetCursor:
  0040CBA4: 3C080041 lui         t0,0x41
  0040CBA8: 8D081300 lw          t0,0x1300(t0)
  0040CBAC: 01000008 jr          t0
  0040CBB0: 00000000 nop
SetCapture:
  0040CBB4: 3C080041 lui         t0,0x41
  0040CBB8: 8D0812F0 lw          t0,0x12F0(t0)
  0040CBBC: 01000008 jr          t0
  0040CBC0: 00000000 nop
LoadCursorA:
  0040CBC4: 3C080041 lui         t0,0x41
  0040CBC8: 8D0812AC lw          t0,0x12AC(t0)
  0040CBCC: 01000008 jr          t0
  0040CBD0: 00000000 nop
SetTimer:
  0040CBD4: 3C080041 lui         t0,0x41
  0040CBD8: 8D0812B0 lw          t0,0x12B0(t0)
  0040CBDC: 01000008 jr          t0
  0040CBE0: 00000000 nop
DefWindowProcA:
  0040CBE4: 3C080041 lui         t0,0x41
  0040CBE8: 8D0812B4 lw          t0,0x12B4(t0)
  0040CBEC: 01000008 jr          t0
  0040CBF0: 00000000 nop
GetDC:
  0040CBF4: 3C080041 lui         t0,0x41
  0040CBF8: 8D0812B8 lw          t0,0x12B8(t0)
  0040CBFC: 01000008 jr          t0
  0040CC00: 00000000 nop
GetMessageA:
  0040CC04: 3C080041 lui         t0,0x41
  0040CC08: 8D0812BC lw          t0,0x12BC(t0)
  0040CC0C: 01000008 jr          t0
  0040CC10: 00000000 nop
SetFocus:
  0040CC14: 3C080041 lui         t0,0x41
  0040CC18: 8D0812C0 lw          t0,0x12C0(t0)
  0040CC1C: 01000008 jr          t0
  0040CC20: 00000000 nop
ShowCursor:
  0040CC24: 3C080041 lui         t0,0x41
  0040CC28: 8D0812C4 lw          t0,0x12C4(t0)
  0040CC2C: 01000008 jr          t0
  0040CC30: 00000000 nop
ClientToScreen:
  0040CC34: 3C080041 lui         t0,0x41
  0040CC38: 8D0812C8 lw          t0,0x12C8(t0)
  0040CC3C: 01000008 jr          t0
  0040CC40: 00000000 nop
EnableMenuItem:
  0040CC44: 3C080041 lui         t0,0x41
  0040CC48: 8D0812CC lw          t0,0x12CC(t0)
  0040CC4C: 01000008 jr          t0
  0040CC50: 00000000 nop
EndDialog:
  0040CC54: 3C080041 lui         t0,0x41
  0040CC58: 8D0812D0 lw          t0,0x12D0(t0)
  0040CC5C: 01000008 jr          t0
  0040CC60: 00000000 nop
MessageBoxA:
  0040CC64: 3C080041 lui         t0,0x41
  0040CC68: 8D0812D4 lw          t0,0x12D4(t0)
  0040CC6C: 01000008 jr          t0
  0040CC70: 00000000 nop
KillTimer:
  0040CC74: 3C080041 lui         t0,0x41
  0040CC78: 8D0812D8 lw          t0,0x12D8(t0)
  0040CC7C: 01000008 jr          t0
  0040CC80: 00000000 nop
UpdateWindow:
  0040CC84: 3C080041 lui         t0,0x41
  0040CC88: 8D0812DC lw          t0,0x12DC(t0)
  0040CC8C: 01000008 jr          t0
  0040CC90: 00000000 nop
TranslateAcceleratorA:
  0040CC94: 3C080041 lui         t0,0x41
  0040CC98: 8D0812E0 lw          t0,0x12E0(t0)
  0040CC9C: 01000008 jr          t0
  0040CCA0: 00000000 nop
GetKeyState:
  0040CCA4: 3C080041 lui         t0,0x41
  0040CCA8: 8D0812E4 lw          t0,0x12E4(t0)
  0040CCAC: 01000008 jr          t0
  0040CCB0: 00000000 nop
PostQuitMessage:
  0040CCB4: 3C080041 lui         t0,0x41
  0040CCB8: 8D0812E8 lw          t0,0x12E8(t0)
  0040CCBC: 01000008 jr          t0
  0040CCC0: 00000000 nop
ReleaseDC:
  0040CCC4: 3C080041 lui         t0,0x41
  0040CCC8: 8D0812EC lw          t0,0x12EC(t0)
  0040CCCC: 01000008 jr          t0
  0040CCD0: 00000000 nop
PostMessageA:
  0040CCD4: 3C080041 lui         t0,0x41
  0040CCD8: 8D0812A8 lw          t0,0x12A8(t0)
  0040CCDC: 01000008 jr          t0
  0040CCE0: 00000000 nop
RegisterClassA:
  0040CCE4: 3C080041 lui         t0,0x41
  0040CCE8: 8D0812F4 lw          t0,0x12F4(t0)
  0040CCEC: 01000008 jr          t0
  0040CCF0: 00000000 nop
GetMenu:
  0040CCF4: 3C080041 lui         t0,0x41
  0040CCF8: 8D0812F8 lw          t0,0x12F8(t0)
  0040CCFC: 01000008 jr          t0
  0040CD00: 00000000 nop
LoadIconA:
  0040CD04: 3C080041 lui         t0,0x41
  0040CD08: 8D0812FC lw          t0,0x12FC(t0)
  0040CD0C: 01000008 jr          t0
  0040CD10: 00000000 nop
PatBlt:
  0040CD14: 3C080041 lui         t0,0x41
  0040CD18: 8D081204 lw          t0,0x1204(t0)
  0040CD1C: 01000008 jr          t0
  0040CD20: 00000000 nop
GetStockObject:
  0040CD24: 3C080041 lui         t0,0x41
  0040CD28: 8D0811E8 lw          t0,0x11E8(t0)
  0040CD2C: 01000008 jr          t0
  0040CD30: 00000000 nop
CreateSolidBrush:
  0040CD34: 3C080041 lui         t0,0x41
  0040CD38: 8D0811DC lw          t0,0x11DC(t0)
  0040CD3C: 01000008 jr          t0
  0040CD40: 00000000 nop
TextOutA:
  0040CD44: 3C080041 lui         t0,0x41
  0040CD48: 8D0811D4 lw          t0,0x11D4(t0)
  0040CD4C: 01000008 jr          t0
  0040CD50: 00000000 nop
LineTo:
  0040CD54: 3C080041 lui         t0,0x41
  0040CD58: 8D0811D8 lw          t0,0x11D8(t0)
  0040CD5C: 01000008 jr          t0
  0040CD60: 00000000 nop
SetBkMode:
  0040CD64: 3C080041 lui         t0,0x41
  0040CD68: 8D081200 lw          t0,0x1200(t0)
  0040CD6C: 01000008 jr          t0
  0040CD70: 00000000 nop
SelectObject:
  0040CD74: 3C080041 lui         t0,0x41
  0040CD78: 8D0811E0 lw          t0,0x11E0(t0)
  0040CD7C: 01000008 jr          t0
  0040CD80: 00000000 nop
Ellipse:
  0040CD84: 3C080041 lui         t0,0x41
  0040CD88: 8D0811E4 lw          t0,0x11E4(t0)
  0040CD8C: 01000008 jr          t0
  0040CD90: 00000000 nop
GetTextExtentPointA:
  0040CD94: 3C080041 lui         t0,0x41
  0040CD98: 8D0811F4 lw          t0,0x11F4(t0)
  0040CD9C: 01000008 jr          t0
  0040CDA0: 00000000 nop
DeleteObject:
  0040CDA4: 3C080041 lui         t0,0x41
  0040CDA8: 8D0811EC lw          t0,0x11EC(t0)
  0040CDAC: 01000008 jr          t0
  0040CDB0: 00000000 nop
GetDeviceCaps:
  0040CDB4: 3C080041 lui         t0,0x41
  0040CDB8: 8D0811F0 lw          t0,0x11F0(t0)
  0040CDBC: 01000008 jr          t0
  0040CDC0: 00000000 nop
GetTextMetricsA:
  0040CDC4: 3C080041 lui         t0,0x41
  0040CDC8: 8D0811FC lw          t0,0x11FC(t0)
  0040CDCC: 01000008 jr          t0
  0040CDD0: 00000000 nop
MoveToEx:
  0040CDD4: 3C080041 lui         t0,0x41
  0040CDD8: 8D0811F8 lw          t0,0x11F8(t0)
  0040CDDC: 01000008 jr          t0
  0040CDE0: 00000000 nop
ShellAboutA:
  0040CDE4: 3C080041 lui         t0,0x41
  0040CDE8: 8D0812A0 lw          t0,0x12A0(t0)
  0040CDEC: 01000008 jr          t0
  0040CDF0: 00000000 nop

  Summary

        2000 .data
        1000 .idata
        1000 .pdata
        1000 .rdata
        3000 .reloc
        1000 .rsrc
        C000 .text
