lbl_806D126C:
/* 806D126C  3C 80 80 6D */	lis r4, lit_3906@ha /* 0x806D79A0@ha */
/* 806D1270  38 A4 79 A0 */	addi r5, r4, lit_3906@l /* 0x806D79A0@l */
/* 806D1274  3C 80 80 6D */	lis r4, __vt__12daE_GM_HIO_c@ha /* 0x806D7E64@ha */
/* 806D1278  38 04 7E 64 */	addi r0, r4, __vt__12daE_GM_HIO_c@l /* 0x806D7E64@l */
/* 806D127C  90 03 00 00 */	stw r0, 0(r3)
/* 806D1280  38 00 FF FF */	li r0, -1
/* 806D1284  98 03 00 04 */	stb r0, 4(r3)
/* 806D1288  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 806D128C  D0 03 00 08 */	stfs f0, 8(r3)
/* 806D1290  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 806D1294  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 806D1298  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 806D129C  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 806D12A0  38 00 03 80 */	li r0, 0x380
/* 806D12A4  B0 03 00 24 */	sth r0, 0x24(r3)
/* 806D12A8  C0 05 00 38 */	lfs f0, 0x38(r5)
/* 806D12AC  D0 03 00 14 */	stfs f0, 0x14(r3)
/* 806D12B0  D0 03 00 18 */	stfs f0, 0x18(r3)
/* 806D12B4  C0 05 00 3C */	lfs f0, 0x3c(r5)
/* 806D12B8  D0 03 00 1C */	stfs f0, 0x1c(r3)
/* 806D12BC  C0 05 00 40 */	lfs f0, 0x40(r5)
/* 806D12C0  D0 03 00 20 */	stfs f0, 0x20(r3)
/* 806D12C4  4E 80 00 20 */	blr 
