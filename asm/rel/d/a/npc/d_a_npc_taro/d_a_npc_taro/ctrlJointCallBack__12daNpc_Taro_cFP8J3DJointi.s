lbl_80566A18:
/* 80566A18  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80566A1C  7C 08 02 A6 */	mflr r0
/* 80566A20  90 01 00 14 */	stw r0, 0x14(r1)
/* 80566A24  7C 60 1B 78 */	mr r0, r3
/* 80566A28  2C 04 00 00 */	cmpwi r4, 0
/* 80566A2C  40 82 00 30 */	bne lbl_80566A5C
/* 80566A30  3C 60 80 43 */	lis r3, j3dSys@ha /* 0x80434AC8@ha */
/* 80566A34  38 63 4A C8 */	addi r3, r3, j3dSys@l /* 0x80434AC8@l */
/* 80566A38  80 A3 00 38 */	lwz r5, 0x38(r3)
/* 80566A3C  80 65 00 14 */	lwz r3, 0x14(r5)
/* 80566A40  28 03 00 00 */	cmplwi r3, 0
/* 80566A44  41 82 00 18 */	beq lbl_80566A5C
/* 80566A48  7C 04 03 78 */	mr r4, r0
/* 80566A4C  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80566A50  81 8C 00 3C */	lwz r12, 0x3c(r12)
/* 80566A54  7D 89 03 A6 */	mtctr r12
/* 80566A58  4E 80 04 21 */	bctrl 
lbl_80566A5C:
/* 80566A5C  38 60 00 01 */	li r3, 1
/* 80566A60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80566A64  7C 08 03 A6 */	mtlr r0
/* 80566A68  38 21 00 10 */	addi r1, r1, 0x10
/* 80566A6C  4E 80 00 20 */	blr 
