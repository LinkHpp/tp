lbl_8082F94C:
/* 8082F94C  3C 80 80 83 */	lis r4, lit_3789@ha /* 0x80832CF8@ha */
/* 8082F950  38 A4 2C F8 */	addi r5, r4, lit_3789@l /* 0x80832CF8@l */
/* 8082F954  3C 80 80 83 */	lis r4, __vt__12daE_ZM_HIO_c@ha /* 0x80832F6C@ha */
/* 8082F958  38 04 2F 6C */	addi r0, r4, __vt__12daE_ZM_HIO_c@l /* 0x80832F6C@l */
/* 8082F95C  90 03 00 00 */	stw r0, 0(r3)
/* 8082F960  38 00 FF FF */	li r0, -1
/* 8082F964  98 03 00 04 */	stb r0, 4(r3)
/* 8082F968  C0 05 00 2C */	lfs f0, 0x2c(r5)
/* 8082F96C  D0 03 00 08 */	stfs f0, 8(r3)
/* 8082F970  C0 05 00 30 */	lfs f0, 0x30(r5)
/* 8082F974  D0 03 00 10 */	stfs f0, 0x10(r3)
/* 8082F978  C0 05 00 34 */	lfs f0, 0x34(r5)
/* 8082F97C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8082F980  38 00 00 3C */	li r0, 0x3c
/* 8082F984  B0 03 00 16 */	sth r0, 0x16(r3)
/* 8082F988  B0 03 00 14 */	sth r0, 0x14(r3)
/* 8082F98C  38 00 00 C8 */	li r0, 0xc8
/* 8082F990  B0 03 00 1A */	sth r0, 0x1a(r3)
/* 8082F994  38 00 00 64 */	li r0, 0x64
/* 8082F998  B0 03 00 18 */	sth r0, 0x18(r3)
/* 8082F99C  4E 80 00 20 */	blr 
