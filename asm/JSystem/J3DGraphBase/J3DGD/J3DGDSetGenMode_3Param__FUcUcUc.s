lbl_8030D210:
/* 8030D210  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8030D214  7C 08 02 A6 */	mflr r0
/* 8030D218  90 01 00 24 */	stw r0, 0x24(r1)
/* 8030D21C  39 61 00 20 */	addi r11, r1, 0x20
/* 8030D220  48 05 4F BD */	bl _savegpr_29
/* 8030D224  7C 7D 1B 78 */	mr r29, r3
/* 8030D228  7C 9E 23 78 */	mr r30, r4
/* 8030D22C  7C BF 2B 78 */	mr r31, r5
/* 8030D230  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D234  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D238  38 63 00 0A */	addi r3, r3, 0xa
/* 8030D23C  80 04 00 0C */	lwz r0, 0xc(r4)
/* 8030D240  7C 03 00 40 */	cmplw r3, r0
/* 8030D244  40 81 00 08 */	ble lbl_8030D24C
/* 8030D248  48 05 3E 8D */	bl GDOverflowed
lbl_8030D24C:
/* 8030D24C  38 C0 00 61 */	li r6, 0x61
/* 8030D250  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D254  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D258  38 03 00 01 */	addi r0, r3, 1
/* 8030D25C  90 04 00 08 */	stw r0, 8(r4)
/* 8030D260  98 C3 00 00 */	stb r6, 0(r3)
/* 8030D264  38 A0 00 FE */	li r5, 0xfe
/* 8030D268  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D26C  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D270  38 03 00 01 */	addi r0, r3, 1
/* 8030D274  90 04 00 08 */	stw r0, 8(r4)
/* 8030D278  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D27C  38 A0 00 07 */	li r5, 7
/* 8030D280  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D284  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D288  38 03 00 01 */	addi r0, r3, 1
/* 8030D28C  90 04 00 08 */	stw r0, 8(r4)
/* 8030D290  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D294  38 A0 00 3C */	li r5, 0x3c
/* 8030D298  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D29C  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D2A0  38 03 00 01 */	addi r0, r3, 1
/* 8030D2A4  90 04 00 08 */	stw r0, 8(r4)
/* 8030D2A8  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D2AC  38 A0 00 0F */	li r5, 0xf
/* 8030D2B0  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D2B4  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D2B8  38 03 00 01 */	addi r0, r3, 1
/* 8030D2BC  90 04 00 08 */	stw r0, 8(r4)
/* 8030D2C0  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D2C4  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D2C8  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D2CC  38 03 00 01 */	addi r0, r3, 1
/* 8030D2D0  90 04 00 08 */	stw r0, 8(r4)
/* 8030D2D4  98 C3 00 00 */	stb r6, 0(r3)
/* 8030D2D8  57 E4 82 1E */	rlwinm r4, r31, 0x10, 8, 0xf
/* 8030D2DC  57 C3 06 3E */	clrlwi r3, r30, 0x18
/* 8030D2E0  38 03 FF FF */	addi r0, r3, -1
/* 8030D2E4  54 00 50 2A */	slwi r0, r0, 0xa
/* 8030D2E8  53 A0 06 3E */	rlwimi r0, r29, 0, 0x18, 0x1f
/* 8030D2EC  7C 86 03 78 */	or r6, r4, r0
/* 8030D2F0  54 C5 46 3E */	srwi r5, r6, 0x18
/* 8030D2F4  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D2F8  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D2FC  38 03 00 01 */	addi r0, r3, 1
/* 8030D300  90 04 00 08 */	stw r0, 8(r4)
/* 8030D304  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D308  54 C5 86 3E */	rlwinm r5, r6, 0x10, 0x18, 0x1f
/* 8030D30C  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D310  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D314  38 03 00 01 */	addi r0, r3, 1
/* 8030D318  90 04 00 08 */	stw r0, 8(r4)
/* 8030D31C  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D320  54 C5 C6 3E */	rlwinm r5, r6, 0x18, 0x18, 0x1f
/* 8030D324  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D328  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D32C  38 03 00 01 */	addi r0, r3, 1
/* 8030D330  90 04 00 08 */	stw r0, 8(r4)
/* 8030D334  98 A3 00 00 */	stb r5, 0(r3)
/* 8030D338  80 8D 94 00 */	lwz r4, __GDCurrentDL(r13)
/* 8030D33C  80 64 00 08 */	lwz r3, 8(r4)
/* 8030D340  38 03 00 01 */	addi r0, r3, 1
/* 8030D344  90 04 00 08 */	stw r0, 8(r4)
/* 8030D348  98 C3 00 00 */	stb r6, 0(r3)
/* 8030D34C  39 61 00 20 */	addi r11, r1, 0x20
/* 8030D350  48 05 4E D9 */	bl _restgpr_29
/* 8030D354  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8030D358  7C 08 03 A6 */	mtlr r0
/* 8030D35C  38 21 00 20 */	addi r1, r1, 0x20
/* 8030D360  4E 80 00 20 */	blr 