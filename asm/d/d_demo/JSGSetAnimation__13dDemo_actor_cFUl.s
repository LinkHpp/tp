lbl_80038A20:
/* 80038A20  90 83 00 2C */	stw r4, 0x2c(r3)
/* 80038A24  3C 80 80 45 */	lis r4, __float_max@ha /* 0x80450AE8@ha */
/* 80038A28  C0 04 0A E8 */	lfs f0, __float_max@l(r4)  /* 0x80450AE8@l */
/* 80038A2C  D0 03 00 38 */	stfs f0, 0x38(r3)
/* 80038A30  A0 03 00 04 */	lhz r0, 4(r3)
/* 80038A34  60 00 00 20 */	ori r0, r0, 0x20
/* 80038A38  B0 03 00 04 */	sth r0, 4(r3)
/* 80038A3C  4E 80 00 20 */	blr 