lbl_80960D64:
/* 80960D64  94 21 FE 80 */	stwu r1, -0x180(r1)
/* 80960D68  7C 08 02 A6 */	mflr r0
/* 80960D6C  90 01 01 84 */	stw r0, 0x184(r1)
/* 80960D70  3C 80 80 96 */	lis r4, m__17daNpcAshB_Param_c@ha /* 0x809620E4@ha */
/* 80960D74  38 84 20 E4 */	addi r4, r4, m__17daNpcAshB_Param_c@l /* 0x809620E4@l */
/* 80960D78  80 A4 01 20 */	lwz r5, 0x120(r4)
/* 80960D7C  80 04 01 24 */	lwz r0, 0x124(r4)
/* 80960D80  90 A1 01 44 */	stw r5, 0x144(r1)
/* 80960D84  90 01 01 48 */	stw r0, 0x148(r1)
/* 80960D88  80 04 01 28 */	lwz r0, 0x128(r4)
/* 80960D8C  90 01 01 4C */	stw r0, 0x14c(r1)
/* 80960D90  38 A4 00 00 */	addi r5, r4, 0
/* 80960D94  C0 05 00 44 */	lfs f0, 0x44(r5)
/* 80960D98  D0 01 01 48 */	stfs f0, 0x148(r1)
/* 80960D9C  80 04 01 2C */	lwz r0, 0x12c(r4)
/* 80960DA0  90 01 00 10 */	stw r0, 0x10(r1)
/* 80960DA4  38 01 01 44 */	addi r0, r1, 0x144
/* 80960DA8  90 01 00 10 */	stw r0, 0x10(r1)
/* 80960DAC  80 A4 01 30 */	lwz r5, 0x130(r4)
/* 80960DB0  80 04 01 34 */	lwz r0, 0x134(r4)
/* 80960DB4  90 A1 01 38 */	stw r5, 0x138(r1)
/* 80960DB8  90 01 01 3C */	stw r0, 0x13c(r1)
/* 80960DBC  80 04 01 38 */	lwz r0, 0x138(r4)
/* 80960DC0  90 01 01 40 */	stw r0, 0x140(r1)
/* 80960DC4  D0 01 01 3C */	stfs f0, 0x13c(r1)
/* 80960DC8  80 04 01 3C */	lwz r0, 0x13c(r4)
/* 80960DCC  90 01 00 0C */	stw r0, 0xc(r1)
/* 80960DD0  38 01 01 38 */	addi r0, r1, 0x138
/* 80960DD4  90 01 00 0C */	stw r0, 0xc(r1)
/* 80960DD8  80 A4 01 40 */	lwz r5, 0x140(r4)
/* 80960DDC  80 04 01 44 */	lwz r0, 0x144(r4)
/* 80960DE0  90 A1 01 2C */	stw r5, 0x12c(r1)
/* 80960DE4  90 01 01 30 */	stw r0, 0x130(r1)
/* 80960DE8  80 04 01 48 */	lwz r0, 0x148(r4)
/* 80960DEC  90 01 01 34 */	stw r0, 0x134(r1)
/* 80960DF0  D0 01 01 30 */	stfs f0, 0x130(r1)
/* 80960DF4  80 A4 01 4C */	lwz r5, 0x14c(r4)
/* 80960DF8  80 04 01 50 */	lwz r0, 0x150(r4)
/* 80960DFC  90 A1 01 20 */	stw r5, 0x120(r1)
/* 80960E00  90 01 01 24 */	stw r0, 0x124(r1)
/* 80960E04  80 04 01 54 */	lwz r0, 0x154(r4)
/* 80960E08  90 01 01 28 */	stw r0, 0x128(r1)
/* 80960E0C  80 A4 01 58 */	lwz r5, 0x158(r4)
/* 80960E10  80 04 01 5C */	lwz r0, 0x15c(r4)
/* 80960E14  90 A1 01 14 */	stw r5, 0x114(r1)
/* 80960E18  90 01 01 18 */	stw r0, 0x118(r1)
/* 80960E1C  80 04 01 60 */	lwz r0, 0x160(r4)
/* 80960E20  90 01 01 1C */	stw r0, 0x11c(r1)
/* 80960E24  80 A4 01 64 */	lwz r5, 0x164(r4)
/* 80960E28  80 04 01 68 */	lwz r0, 0x168(r4)
/* 80960E2C  90 A1 01 08 */	stw r5, 0x108(r1)
/* 80960E30  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80960E34  80 04 01 6C */	lwz r0, 0x16c(r4)
/* 80960E38  90 01 01 10 */	stw r0, 0x110(r1)
/* 80960E3C  38 01 01 2C */	addi r0, r1, 0x12c
/* 80960E40  90 01 01 08 */	stw r0, 0x108(r1)
/* 80960E44  38 01 01 20 */	addi r0, r1, 0x120
/* 80960E48  90 01 01 0C */	stw r0, 0x10c(r1)
/* 80960E4C  38 01 01 14 */	addi r0, r1, 0x114
/* 80960E50  90 01 01 10 */	stw r0, 0x110(r1)
/* 80960E54  80 A4 01 70 */	lwz r5, 0x170(r4)
/* 80960E58  80 04 01 74 */	lwz r0, 0x174(r4)
/* 80960E5C  90 A1 00 FC */	stw r5, 0xfc(r1)
/* 80960E60  90 01 01 00 */	stw r0, 0x100(r1)
/* 80960E64  80 04 01 78 */	lwz r0, 0x178(r4)
/* 80960E68  90 01 01 04 */	stw r0, 0x104(r1)
/* 80960E6C  D0 01 01 00 */	stfs f0, 0x100(r1)
/* 80960E70  80 A4 01 7C */	lwz r5, 0x17c(r4)
/* 80960E74  80 04 01 80 */	lwz r0, 0x180(r4)
/* 80960E78  90 A1 00 F0 */	stw r5, 0xf0(r1)
/* 80960E7C  90 01 00 F4 */	stw r0, 0xf4(r1)
/* 80960E80  80 04 01 84 */	lwz r0, 0x184(r4)
/* 80960E84  90 01 00 F8 */	stw r0, 0xf8(r1)
/* 80960E88  80 A4 01 88 */	lwz r5, 0x188(r4)
/* 80960E8C  80 04 01 8C */	lwz r0, 0x18c(r4)
/* 80960E90  90 A1 00 4C */	stw r5, 0x4c(r1)
/* 80960E94  90 01 00 50 */	stw r0, 0x50(r1)
/* 80960E98  38 01 00 FC */	addi r0, r1, 0xfc
/* 80960E9C  90 01 00 4C */	stw r0, 0x4c(r1)
/* 80960EA0  38 01 00 F0 */	addi r0, r1, 0xf0
/* 80960EA4  90 01 00 50 */	stw r0, 0x50(r1)
/* 80960EA8  80 A4 01 90 */	lwz r5, 0x190(r4)
/* 80960EAC  80 04 01 94 */	lwz r0, 0x194(r4)
/* 80960EB0  90 A1 00 E4 */	stw r5, 0xe4(r1)
/* 80960EB4  90 01 00 E8 */	stw r0, 0xe8(r1)
/* 80960EB8  80 04 01 98 */	lwz r0, 0x198(r4)
/* 80960EBC  90 01 00 EC */	stw r0, 0xec(r1)
/* 80960EC0  D0 01 00 E8 */	stfs f0, 0xe8(r1)
/* 80960EC4  80 A4 01 9C */	lwz r5, 0x19c(r4)
/* 80960EC8  80 04 01 A0 */	lwz r0, 0x1a0(r4)
/* 80960ECC  90 A1 00 D8 */	stw r5, 0xd8(r1)
/* 80960ED0  90 01 00 DC */	stw r0, 0xdc(r1)
/* 80960ED4  80 04 01 A4 */	lwz r0, 0x1a4(r4)
/* 80960ED8  90 01 00 E0 */	stw r0, 0xe0(r1)
/* 80960EDC  80 A4 01 A8 */	lwz r5, 0x1a8(r4)
/* 80960EE0  80 04 01 AC */	lwz r0, 0x1ac(r4)
/* 80960EE4  90 A1 00 44 */	stw r5, 0x44(r1)
/* 80960EE8  90 01 00 48 */	stw r0, 0x48(r1)
/* 80960EEC  38 01 00 E4 */	addi r0, r1, 0xe4
/* 80960EF0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80960EF4  38 01 00 D8 */	addi r0, r1, 0xd8
/* 80960EF8  90 01 00 48 */	stw r0, 0x48(r1)
/* 80960EFC  80 A4 01 B0 */	lwz r5, 0x1b0(r4)
/* 80960F00  80 04 01 B4 */	lwz r0, 0x1b4(r4)
/* 80960F04  90 A1 00 CC */	stw r5, 0xcc(r1)
/* 80960F08  90 01 00 D0 */	stw r0, 0xd0(r1)
/* 80960F0C  80 04 01 B8 */	lwz r0, 0x1b8(r4)
/* 80960F10  90 01 00 D4 */	stw r0, 0xd4(r1)
/* 80960F14  D0 01 00 D0 */	stfs f0, 0xd0(r1)
/* 80960F18  80 A4 01 BC */	lwz r5, 0x1bc(r4)
/* 80960F1C  80 04 01 C0 */	lwz r0, 0x1c0(r4)
/* 80960F20  90 A1 00 C0 */	stw r5, 0xc0(r1)
/* 80960F24  90 01 00 C4 */	stw r0, 0xc4(r1)
/* 80960F28  80 04 01 C4 */	lwz r0, 0x1c4(r4)
/* 80960F2C  90 01 00 C8 */	stw r0, 0xc8(r1)
/* 80960F30  80 A4 01 C8 */	lwz r5, 0x1c8(r4)
/* 80960F34  80 04 01 CC */	lwz r0, 0x1cc(r4)
/* 80960F38  90 A1 00 3C */	stw r5, 0x3c(r1)
/* 80960F3C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80960F40  38 01 00 CC */	addi r0, r1, 0xcc
/* 80960F44  90 01 00 3C */	stw r0, 0x3c(r1)
/* 80960F48  38 01 00 C0 */	addi r0, r1, 0xc0
/* 80960F4C  90 01 00 40 */	stw r0, 0x40(r1)
/* 80960F50  80 A4 01 D0 */	lwz r5, 0x1d0(r4)
/* 80960F54  80 04 01 D4 */	lwz r0, 0x1d4(r4)
/* 80960F58  90 A1 00 B4 */	stw r5, 0xb4(r1)
/* 80960F5C  90 01 00 B8 */	stw r0, 0xb8(r1)
/* 80960F60  80 04 01 D8 */	lwz r0, 0x1d8(r4)
/* 80960F64  90 01 00 BC */	stw r0, 0xbc(r1)
/* 80960F68  D0 01 00 B8 */	stfs f0, 0xb8(r1)
/* 80960F6C  80 A4 01 DC */	lwz r5, 0x1dc(r4)
/* 80960F70  80 04 01 E0 */	lwz r0, 0x1e0(r4)
/* 80960F74  90 A1 00 A8 */	stw r5, 0xa8(r1)
/* 80960F78  90 01 00 AC */	stw r0, 0xac(r1)
/* 80960F7C  80 04 01 E4 */	lwz r0, 0x1e4(r4)
/* 80960F80  90 01 00 B0 */	stw r0, 0xb0(r1)
/* 80960F84  80 A4 01 E8 */	lwz r5, 0x1e8(r4)
/* 80960F88  80 04 01 EC */	lwz r0, 0x1ec(r4)
/* 80960F8C  90 A1 00 34 */	stw r5, 0x34(r1)
/* 80960F90  90 01 00 38 */	stw r0, 0x38(r1)
/* 80960F94  38 01 00 B4 */	addi r0, r1, 0xb4
/* 80960F98  90 01 00 34 */	stw r0, 0x34(r1)
/* 80960F9C  38 01 00 A8 */	addi r0, r1, 0xa8
/* 80960FA0  90 01 00 38 */	stw r0, 0x38(r1)
/* 80960FA4  80 A4 01 F0 */	lwz r5, 0x1f0(r4)
/* 80960FA8  80 04 01 F4 */	lwz r0, 0x1f4(r4)
/* 80960FAC  90 A1 00 9C */	stw r5, 0x9c(r1)
/* 80960FB0  90 01 00 A0 */	stw r0, 0xa0(r1)
/* 80960FB4  80 04 01 F8 */	lwz r0, 0x1f8(r4)
/* 80960FB8  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 80960FBC  D0 01 00 A0 */	stfs f0, 0xa0(r1)
/* 80960FC0  80 A4 01 FC */	lwz r5, 0x1fc(r4)
/* 80960FC4  80 04 02 00 */	lwz r0, 0x200(r4)
/* 80960FC8  90 A1 00 90 */	stw r5, 0x90(r1)
/* 80960FCC  90 01 00 94 */	stw r0, 0x94(r1)
/* 80960FD0  80 04 02 04 */	lwz r0, 0x204(r4)
/* 80960FD4  90 01 00 98 */	stw r0, 0x98(r1)
/* 80960FD8  80 A4 02 08 */	lwz r5, 0x208(r4)
/* 80960FDC  80 04 02 0C */	lwz r0, 0x20c(r4)
/* 80960FE0  90 A1 00 2C */	stw r5, 0x2c(r1)
/* 80960FE4  90 01 00 30 */	stw r0, 0x30(r1)
/* 80960FE8  38 01 00 9C */	addi r0, r1, 0x9c
/* 80960FEC  90 01 00 2C */	stw r0, 0x2c(r1)
/* 80960FF0  38 01 00 90 */	addi r0, r1, 0x90
/* 80960FF4  90 01 00 30 */	stw r0, 0x30(r1)
/* 80960FF8  80 A4 02 10 */	lwz r5, 0x210(r4)
/* 80960FFC  80 04 02 14 */	lwz r0, 0x214(r4)
/* 80961000  90 A1 00 84 */	stw r5, 0x84(r1)
/* 80961004  90 01 00 88 */	stw r0, 0x88(r1)
/* 80961008  80 04 02 18 */	lwz r0, 0x218(r4)
/* 8096100C  90 01 00 8C */	stw r0, 0x8c(r1)
/* 80961010  D0 01 00 88 */	stfs f0, 0x88(r1)
/* 80961014  80 04 02 1C */	lwz r0, 0x21c(r4)
/* 80961018  90 01 00 08 */	stw r0, 8(r1)
/* 8096101C  38 01 00 84 */	addi r0, r1, 0x84
/* 80961020  90 01 00 08 */	stw r0, 8(r1)
/* 80961024  80 A4 02 20 */	lwz r5, 0x220(r4)
/* 80961028  80 04 02 24 */	lwz r0, 0x224(r4)
/* 8096102C  90 A1 00 78 */	stw r5, 0x78(r1)
/* 80961030  90 01 00 7C */	stw r0, 0x7c(r1)
/* 80961034  80 04 02 28 */	lwz r0, 0x228(r4)
/* 80961038  90 01 00 80 */	stw r0, 0x80(r1)
/* 8096103C  D0 01 00 7C */	stfs f0, 0x7c(r1)
/* 80961040  80 A4 02 2C */	lwz r5, 0x22c(r4)
/* 80961044  80 04 02 30 */	lwz r0, 0x230(r4)
/* 80961048  90 A1 00 6C */	stw r5, 0x6c(r1)
/* 8096104C  90 01 00 70 */	stw r0, 0x70(r1)
/* 80961050  80 04 02 34 */	lwz r0, 0x234(r4)
/* 80961054  90 01 00 74 */	stw r0, 0x74(r1)
/* 80961058  80 A4 02 38 */	lwz r5, 0x238(r4)
/* 8096105C  80 04 02 3C */	lwz r0, 0x23c(r4)
/* 80961060  90 A1 00 24 */	stw r5, 0x24(r1)
/* 80961064  90 01 00 28 */	stw r0, 0x28(r1)
/* 80961068  38 01 00 78 */	addi r0, r1, 0x78
/* 8096106C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80961070  38 01 00 6C */	addi r0, r1, 0x6c
/* 80961074  90 01 00 28 */	stw r0, 0x28(r1)
/* 80961078  80 A4 02 40 */	lwz r5, 0x240(r4)
/* 8096107C  80 04 02 44 */	lwz r0, 0x244(r4)
/* 80961080  90 A1 00 60 */	stw r5, 0x60(r1)
/* 80961084  90 01 00 64 */	stw r0, 0x64(r1)
/* 80961088  80 04 02 48 */	lwz r0, 0x248(r4)
/* 8096108C  90 01 00 68 */	stw r0, 0x68(r1)
/* 80961090  80 A4 02 4C */	lwz r5, 0x24c(r4)
/* 80961094  80 04 02 50 */	lwz r0, 0x250(r4)
/* 80961098  90 A1 00 1C */	stw r5, 0x1c(r1)
/* 8096109C  90 01 00 20 */	stw r0, 0x20(r1)
/* 809610A0  38 01 00 60 */	addi r0, r1, 0x60
/* 809610A4  90 01 00 1C */	stw r0, 0x1c(r1)
/* 809610A8  80 A4 02 54 */	lwz r5, 0x254(r4)
/* 809610AC  80 04 02 58 */	lwz r0, 0x258(r4)
/* 809610B0  90 A1 00 54 */	stw r5, 0x54(r1)
/* 809610B4  90 01 00 58 */	stw r0, 0x58(r1)
/* 809610B8  80 04 02 5C */	lwz r0, 0x25c(r4)
/* 809610BC  90 01 00 5C */	stw r0, 0x5c(r1)
/* 809610C0  80 A4 02 60 */	lwz r5, 0x260(r4)
/* 809610C4  80 04 02 64 */	lwz r0, 0x264(r4)
/* 809610C8  90 A1 00 14 */	stw r5, 0x14(r1)
/* 809610CC  90 01 00 18 */	stw r0, 0x18(r1)
/* 809610D0  38 01 00 54 */	addi r0, r1, 0x54
/* 809610D4  90 01 00 14 */	stw r0, 0x14(r1)
/* 809610D8  38 C1 01 4C */	addi r6, r1, 0x14c
/* 809610DC  38 A4 02 64 */	addi r5, r4, 0x264
/* 809610E0  38 00 00 06 */	li r0, 6
/* 809610E4  7C 09 03 A6 */	mtctr r0
lbl_809610E8:
/* 809610E8  80 85 00 04 */	lwz r4, 4(r5)
/* 809610EC  84 05 00 08 */	lwzu r0, 8(r5)
/* 809610F0  90 86 00 04 */	stw r4, 4(r6)
/* 809610F4  94 06 00 08 */	stwu r0, 8(r6)
/* 809610F8  42 00 FF F0 */	bdnz lbl_809610E8
/* 809610FC  38 01 00 10 */	addi r0, r1, 0x10
/* 80961100  90 01 01 50 */	stw r0, 0x150(r1)
/* 80961104  38 01 00 0C */	addi r0, r1, 0xc
/* 80961108  90 01 01 54 */	stw r0, 0x154(r1)
/* 8096110C  38 01 01 08 */	addi r0, r1, 0x108
/* 80961110  90 01 01 58 */	stw r0, 0x158(r1)
/* 80961114  38 01 00 4C */	addi r0, r1, 0x4c
/* 80961118  90 01 01 5C */	stw r0, 0x15c(r1)
/* 8096111C  38 01 00 44 */	addi r0, r1, 0x44
/* 80961120  90 01 01 60 */	stw r0, 0x160(r1)
/* 80961124  38 01 00 3C */	addi r0, r1, 0x3c
/* 80961128  90 01 01 64 */	stw r0, 0x164(r1)
/* 8096112C  38 01 00 34 */	addi r0, r1, 0x34
/* 80961130  90 01 01 68 */	stw r0, 0x168(r1)
/* 80961134  38 01 00 2C */	addi r0, r1, 0x2c
/* 80961138  90 01 01 6C */	stw r0, 0x16c(r1)
/* 8096113C  38 01 00 08 */	addi r0, r1, 8
/* 80961140  90 01 01 70 */	stw r0, 0x170(r1)
/* 80961144  38 01 00 24 */	addi r0, r1, 0x24
/* 80961148  90 01 01 74 */	stw r0, 0x174(r1)
/* 8096114C  38 01 00 1C */	addi r0, r1, 0x1c
/* 80961150  90 01 01 78 */	stw r0, 0x178(r1)
/* 80961154  38 01 00 14 */	addi r0, r1, 0x14
/* 80961158  90 01 01 7C */	stw r0, 0x17c(r1)
/* 8096115C  A8 83 09 E0 */	lha r4, 0x9e0(r3)
/* 80961160  7C 80 07 35 */	extsh. r0, r4
/* 80961164  41 80 00 14 */	blt lbl_80961178
/* 80961168  2C 04 00 0C */	cmpwi r4, 0xc
/* 8096116C  40 80 00 0C */	bge lbl_80961178
/* 80961170  38 81 01 50 */	addi r4, r1, 0x150
/* 80961174  4B 7F 20 F1 */	bl playMotionAnm__8daNpcF_cFPPPQ28daNpcF_c18daNpcF_anmPlayData
lbl_80961178:
/* 80961178  80 01 01 84 */	lwz r0, 0x184(r1)
/* 8096117C  7C 08 03 A6 */	mtlr r0
/* 80961180  38 21 01 80 */	addi r1, r1, 0x180
/* 80961184  4E 80 00 20 */	blr 
