lbl_80590460:
/* 80590460  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80590464  7C 08 02 A6 */	mflr r0
/* 80590468  90 01 00 14 */	stw r0, 0x14(r1)
/* 8059046C  3C 80 80 59 */	lis r4, cNullVec__6Z2Calc@ha /* 0x80592980@ha */
/* 80590470  38 E4 29 80 */	addi r7, r4, cNullVec__6Z2Calc@l /* 0x80592980@l */
/* 80590474  3C 80 80 59 */	lis r4, struct_80592DA4+0x1@ha /* 0x80592DA5@ha */
/* 80590478  38 C4 2D A5 */	addi r6, r4, struct_80592DA4+0x1@l /* 0x80592DA5@l */
/* 8059047C  88 06 00 00 */	lbz r0, 0(r6)
/* 80590480  7C 00 07 75 */	extsb. r0, r0
/* 80590484  40 82 00 58 */	bne lbl_805904DC
/* 80590488  80 87 00 64 */	lwz r4, 0x64(r7)
/* 8059048C  80 07 00 68 */	lwz r0, 0x68(r7)
/* 80590490  90 87 00 88 */	stw r4, 0x88(r7)
/* 80590494  90 07 00 8C */	stw r0, 0x8c(r7)
/* 80590498  80 07 00 6C */	lwz r0, 0x6c(r7)
/* 8059049C  90 07 00 90 */	stw r0, 0x90(r7)
/* 805904A0  38 A7 00 88 */	addi r5, r7, 0x88
/* 805904A4  80 87 00 70 */	lwz r4, 0x70(r7)
/* 805904A8  80 07 00 74 */	lwz r0, 0x74(r7)
/* 805904AC  90 85 00 0C */	stw r4, 0xc(r5)
/* 805904B0  90 05 00 10 */	stw r0, 0x10(r5)
/* 805904B4  80 07 00 78 */	lwz r0, 0x78(r7)
/* 805904B8  90 05 00 14 */	stw r0, 0x14(r5)
/* 805904BC  80 87 00 7C */	lwz r4, 0x7c(r7)
/* 805904C0  80 07 00 80 */	lwz r0, 0x80(r7)
/* 805904C4  90 85 00 18 */	stw r4, 0x18(r5)
/* 805904C8  90 05 00 1C */	stw r0, 0x1c(r5)
/* 805904CC  80 07 00 84 */	lwz r0, 0x84(r7)
/* 805904D0  90 05 00 20 */	stw r0, 0x20(r5)
/* 805904D4  38 00 00 01 */	li r0, 1
/* 805904D8  98 06 00 00 */	stb r0, 0(r6)
lbl_805904DC:
/* 805904DC  88 03 0A 1C */	lbz r0, 0xa1c(r3)
/* 805904E0  1C 00 00 0C */	mulli r0, r0, 0xc
/* 805904E4  39 87 00 88 */	addi r12, r7, 0x88
/* 805904E8  7D 8C 02 14 */	add r12, r12, r0
/* 805904EC  4B DD 1B 99 */	bl __ptmf_scall
/* 805904F0  60 00 00 00 */	nop 
/* 805904F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 805904F8  7C 08 03 A6 */	mtlr r0
/* 805904FC  38 21 00 10 */	addi r1, r1, 0x10
/* 80590500  4E 80 00 20 */	blr 
