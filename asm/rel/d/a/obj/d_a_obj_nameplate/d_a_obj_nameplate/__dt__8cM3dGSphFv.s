lbl_80594D38:
/* 80594D38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80594D3C  7C 08 02 A6 */	mflr r0
/* 80594D40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80594D44  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80594D48  7C 7F 1B 79 */	or. r31, r3, r3
/* 80594D4C  41 82 00 1C */	beq lbl_80594D68
/* 80594D50  3C A0 80 59 */	lis r5, __vt__8cM3dGSph@ha /* 0x80594FA0@ha */
/* 80594D54  38 05 4F A0 */	addi r0, r5, __vt__8cM3dGSph@l /* 0x80594FA0@l */
/* 80594D58  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80594D5C  7C 80 07 35 */	extsh. r0, r4
/* 80594D60  40 81 00 08 */	ble lbl_80594D68
/* 80594D64  4B D3 9F D9 */	bl __dl__FPv
lbl_80594D68:
/* 80594D68  7F E3 FB 78 */	mr r3, r31
/* 80594D6C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80594D70  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80594D74  7C 08 03 A6 */	mtlr r0
/* 80594D78  38 21 00 10 */	addi r1, r1, 0x10
/* 80594D7C  4E 80 00 20 */	blr 
