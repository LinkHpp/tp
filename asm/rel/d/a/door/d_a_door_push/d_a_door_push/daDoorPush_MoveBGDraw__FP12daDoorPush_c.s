lbl_80678E7C:
/* 80678E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80678E80  7C 08 02 A6 */	mflr r0
/* 80678E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80678E88  81 83 05 9C */	lwz r12, 0x59c(r3)
/* 80678E8C  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 80678E90  7D 89 03 A6 */	mtctr r12
/* 80678E94  4E 80 04 21 */	bctrl 
/* 80678E98  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80678E9C  7C 08 03 A6 */	mtlr r0
/* 80678EA0  38 21 00 10 */	addi r1, r1, 0x10
/* 80678EA4  4E 80 00 20 */	blr 