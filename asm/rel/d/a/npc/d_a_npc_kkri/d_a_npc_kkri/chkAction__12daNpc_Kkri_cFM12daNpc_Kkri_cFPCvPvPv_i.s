lbl_80550D44:
/* 80550D44  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80550D48  7C 08 02 A6 */	mflr r0
/* 80550D4C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80550D50  38 63 0F 98 */	addi r3, r3, 0xf98
/* 80550D54  4B E1 12 F5 */	bl __ptmf_cmpr
/* 80550D58  7C 60 00 34 */	cntlzw r0, r3
/* 80550D5C  54 03 D9 7E */	srwi r3, r0, 5
/* 80550D60  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80550D64  7C 08 03 A6 */	mtlr r0
/* 80550D68  38 21 00 10 */	addi r1, r1, 0x10
/* 80550D6C  4E 80 00 20 */	blr 
