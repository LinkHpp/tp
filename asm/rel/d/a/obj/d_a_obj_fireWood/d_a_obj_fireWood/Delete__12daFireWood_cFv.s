lbl_80BE7E7C:
/* 80BE7E7C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80BE7E80  7C 08 02 A6 */	mflr r0
/* 80BE7E84  90 01 00 14 */	stw r0, 0x14(r1)
/* 80BE7E88  38 63 07 1C */	addi r3, r3, 0x71c
/* 80BE7E8C  4B 5B FA A1 */	bl dKy_plight_cut__FP15LIGHT_INFLUENCE
/* 80BE7E90  38 60 00 01 */	li r3, 1
/* 80BE7E94  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80BE7E98  7C 08 03 A6 */	mtlr r0
/* 80BE7E9C  38 21 00 10 */	addi r1, r1, 0x10
/* 80BE7EA0  4E 80 00 20 */	blr 
