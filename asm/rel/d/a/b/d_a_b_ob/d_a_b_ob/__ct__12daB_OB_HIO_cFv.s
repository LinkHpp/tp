lbl_8061056C:
/* 8061056C  3C 80 80 62 */	lis r4, lit_3772@ha /* 0x8061AD84@ha */
/* 80610570  38 A4 AD 84 */	addi r5, r4, lit_3772@l /* 0x8061AD84@l */
/* 80610574  3C 80 80 62 */	lis r4, __vt__12daB_OB_HIO_c@ha /* 0x8061B4AC@ha */
/* 80610578  38 04 B4 AC */	addi r0, r4, __vt__12daB_OB_HIO_c@l /* 0x8061B4AC@l */
/* 8061057C  90 03 00 00 */	stw r0, 0(r3)
/* 80610580  38 00 FF FF */	li r0, -1
/* 80610584  98 03 00 04 */	stb r0, 4(r3)
/* 80610588  C0 25 00 00 */	lfs f1, 0(r5)
/* 8061058C  D0 23 00 08 */	stfs f1, 8(r3)
/* 80610590  C0 05 00 04 */	lfs f0, 4(r5)
/* 80610594  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 80610598  D0 23 00 10 */	stfs f1, 0x10(r3)
/* 8061059C  38 00 00 A3 */	li r0, 0xa3
/* 806105A0  B0 03 00 14 */	sth r0, 0x14(r3)
/* 806105A4  38 00 00 FF */	li r0, 0xff
/* 806105A8  B0 03 00 16 */	sth r0, 0x16(r3)
/* 806105AC  B0 03 00 18 */	sth r0, 0x18(r3)
/* 806105B0  C0 05 00 08 */	lfs f0, 8(r5)
/* 806105B4  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 806105B8  4E 80 00 20 */	blr 