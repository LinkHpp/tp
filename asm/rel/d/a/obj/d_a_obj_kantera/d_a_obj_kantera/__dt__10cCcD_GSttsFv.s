lbl_80C395E8:
/* 80C395E8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80C395EC  7C 08 02 A6 */	mflr r0
/* 80C395F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80C395F4  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80C395F8  7C 7F 1B 79 */	or. r31, r3, r3
/* 80C395FC  41 82 00 1C */	beq lbl_80C39618
/* 80C39600  3C A0 80 C4 */	lis r5, __vt__10cCcD_GStts@ha /* 0x80C397B8@ha */
/* 80C39604  38 05 97 B8 */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x80C397B8@l */
/* 80C39608  90 1F 00 00 */	stw r0, 0(r31)
/* 80C3960C  7C 80 07 35 */	extsh. r0, r4
/* 80C39610  40 81 00 08 */	ble lbl_80C39618
/* 80C39614  4B 69 57 29 */	bl __dl__FPv
lbl_80C39618:
/* 80C39618  7F E3 FB 78 */	mr r3, r31
/* 80C3961C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80C39620  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80C39624  7C 08 03 A6 */	mtlr r0
/* 80C39628  38 21 00 10 */	addi r1, r1, 0x10
/* 80C3962C  4E 80 00 20 */	blr 