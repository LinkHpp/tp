lbl_802932C8:
/* 802932C8  C0 02 BB A0 */	lfs f0, lit_457(r2)
/* 802932CC  D0 03 00 00 */	stfs f0, 0(r3)
/* 802932D0  D0 03 00 04 */	stfs f0, 4(r3)
/* 802932D4  38 00 00 00 */	li r0, 0
/* 802932D8  90 03 00 08 */	stw r0, 8(r3)
/* 802932DC  4E 80 00 20 */	blr 