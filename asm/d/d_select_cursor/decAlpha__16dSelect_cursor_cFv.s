lbl_801953CC:
/* 801953CC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 801953D0  7C 08 02 A6 */	mflr r0
/* 801953D4  90 01 00 24 */	stw r0, 0x24(r1)
/* 801953D8  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 801953DC  7C 7F 1B 78 */	mr r31, r3
/* 801953E0  80 63 00 10 */	lwz r3, 0x10(r3)
/* 801953E4  A8 83 00 16 */	lha r4, 0x16(r3)
/* 801953E8  7C 80 07 35 */	extsh. r0, r4
/* 801953EC  41 81 00 24 */	bgt lbl_80195410
/* 801953F0  48 0C 02 5D */	bl isVisible__13CPaneMgrAlphaFv
/* 801953F4  54 60 06 3E */	clrlwi r0, r3, 0x18
/* 801953F8  28 00 00 01 */	cmplwi r0, 1
/* 801953FC  40 82 00 0C */	bne lbl_80195408
/* 80195400  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80195404  48 0C 02 05 */	bl hide__13CPaneMgrAlphaFv
lbl_80195408:
/* 80195408  38 60 00 01 */	li r3, 1
/* 8019540C  48 00 00 40 */	b lbl_8019544C
lbl_80195410:
/* 80195410  38 84 FF FF */	addi r4, r4, -1
/* 80195414  7C 80 07 34 */	extsh r0, r4
/* 80195418  B0 83 00 16 */	sth r4, 0x16(r3)
/* 8019541C  80 7F 00 10 */	lwz r3, 0x10(r31)
/* 80195420  C8 22 A0 58 */	lfd f1, lit_4064(r2)
/* 80195424  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80195428  90 01 00 0C */	stw r0, 0xc(r1)
/* 8019542C  3C 00 43 30 */	lis r0, 0x4330
/* 80195430  90 01 00 08 */	stw r0, 8(r1)
/* 80195434  C8 01 00 08 */	lfd f0, 8(r1)
/* 80195438  EC 20 08 28 */	fsubs f1, f0, f1
/* 8019543C  C0 02 A0 64 */	lfs f0, lit_4157(r2)
/* 80195440  EC 21 00 24 */	fdivs f1, f1, f0
/* 80195444  48 0C 03 8D */	bl setAlphaRate__13CPaneMgrAlphaFf
/* 80195448  38 60 00 00 */	li r3, 0
lbl_8019544C:
/* 8019544C  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80195450  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80195454  7C 08 03 A6 */	mtlr r0
/* 80195458  38 21 00 20 */	addi r1, r1, 0x20
/* 8019545C  4E 80 00 20 */	blr 
