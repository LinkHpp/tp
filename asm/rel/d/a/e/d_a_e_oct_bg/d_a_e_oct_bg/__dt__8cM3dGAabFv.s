lbl_80739800:
/* 80739800  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80739804  7C 08 02 A6 */	mflr r0
/* 80739808  90 01 00 14 */	stw r0, 0x14(r1)
/* 8073980C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80739810  7C 7F 1B 79 */	or. r31, r3, r3
/* 80739814  41 82 00 1C */	beq lbl_80739830
/* 80739818  3C A0 80 74 */	lis r5, __vt__8cM3dGAab@ha /* 0x8073A0AC@ha */
/* 8073981C  38 05 A0 AC */	addi r0, r5, __vt__8cM3dGAab@l /* 0x8073A0AC@l */
/* 80739820  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80739824  7C 80 07 35 */	extsh. r0, r4
/* 80739828  40 81 00 08 */	ble lbl_80739830
/* 8073982C  4B B9 55 11 */	bl __dl__FPv
lbl_80739830:
/* 80739830  7F E3 FB 78 */	mr r3, r31
/* 80739834  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80739838  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8073983C  7C 08 03 A6 */	mtlr r0
/* 80739840  38 21 00 10 */	addi r1, r1, 0x10
/* 80739844  4E 80 00 20 */	blr 