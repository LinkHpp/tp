lbl_80A71468:
/* 80A71468  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80A7146C  7C 08 02 A6 */	mflr r0
/* 80A71470  90 01 00 14 */	stw r0, 0x14(r1)
/* 80A71474  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80A71478  7C 7F 1B 79 */	or. r31, r3, r3
/* 80A7147C  41 82 00 10 */	beq lbl_80A7148C
/* 80A71480  7C 80 07 35 */	extsh. r0, r4
/* 80A71484  40 81 00 08 */	ble lbl_80A7148C
/* 80A71488  4B 85 D8 B5 */	bl __dl__FPv
lbl_80A7148C:
/* 80A7148C  7F E3 FB 78 */	mr r3, r31
/* 80A71490  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80A71494  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80A71498  7C 08 03 A6 */	mtlr r0
/* 80A7149C  38 21 00 10 */	addi r1, r1, 0x10
/* 80A714A0  4E 80 00 20 */	blr 