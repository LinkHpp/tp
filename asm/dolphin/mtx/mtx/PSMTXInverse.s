lbl_803465B0:
/* 803465B0  E0 03 80 00 */	psq_l f0, 0(r3), 1, 0 /* qr0 */
/* 803465B4  E0 23 00 04 */	psq_l f1, 4(r3), 0, 0 /* qr0 */
/* 803465B8  E0 43 80 10 */	psq_l f2, 16(r3), 1, 0 /* qr0 */
/* 803465BC  10 C1 04 A0 */	ps_merge10 f6, f1, f0
/* 803465C0  E0 63 00 14 */	psq_l f3, 20(r3), 0, 0 /* qr0 */
/* 803465C4  E0 83 80 20 */	psq_l f4, 32(r3), 1, 0 /* qr0 */
/* 803465C8  10 E3 14 A0 */	ps_merge10 f7, f3, f2
/* 803465CC  E0 A3 00 24 */	psq_l f5, 36(r3), 0, 0 /* qr0 */
/* 803465D0  11 63 01 B2 */	ps_mul f11, f3, f6
/* 803465D4  11 A5 01 F2 */	ps_mul f13, f5, f7
/* 803465D8  11 05 24 A0 */	ps_merge10 f8, f5, f4
/* 803465DC  11 61 59 F8 */	ps_msub f11, f1, f7, f11
/* 803465E0  11 81 02 32 */	ps_mul f12, f1, f8
/* 803465E4  11 A3 6A 38 */	ps_msub f13, f3, f8, f13
/* 803465E8  11 43 01 32 */	ps_mul f10, f3, f4
/* 803465EC  11 85 61 B8 */	ps_msub f12, f5, f6, f12
/* 803465F0  11 20 01 72 */	ps_mul f9, f0, f5
/* 803465F4  11 01 00 B2 */	ps_mul f8, f1, f2
/* 803465F8  10 C6 30 28 */	ps_sub f6, f6, f6
/* 803465FC  11 42 51 78 */	ps_msub f10, f2, f5, f10
/* 80346600  10 E0 03 72 */	ps_mul f7, f0, f13
/* 80346604  11 21 49 38 */	ps_msub f9, f1, f4, f9
/* 80346608  10 E2 3B 3A */	ps_madd f7, f2, f12, f7
/* 8034660C  11 00 40 F8 */	ps_msub f8, f0, f3, f8
/* 80346610  10 E4 3A FA */	ps_madd f7, f4, f11, f7
/* 80346614  10 07 30 40 */	ps_cmpo0 cr0, f7, f6
/* 80346618  40 82 00 0C */	bne lbl_80346624
/* 8034661C  38 60 00 00 */	li r3, 0
/* 80346620  4E 80 00 20 */	blr 
lbl_80346624:
/* 80346624  EC 00 38 30 */	fres f0, f7
/* 80346628  10 C0 00 2A */	ps_add f6, f0, f0
/* 8034662C  10 A0 00 32 */	ps_mul f5, f0, f0
/* 80346630  10 07 31 7C */	ps_nmsub f0, f7, f5, f6
/* 80346634  C0 23 00 0C */	lfs f1, 0xc(r3)
/* 80346638  11 AD 00 18 */	ps_muls0 f13, f13, f0
/* 8034663C  C0 43 00 1C */	lfs f2, 0x1c(r3)
/* 80346640  11 8C 00 18 */	ps_muls0 f12, f12, f0
/* 80346644  C0 63 00 2C */	lfs f3, 0x2c(r3)
/* 80346648  11 6B 00 18 */	ps_muls0 f11, f11, f0
/* 8034664C  10 AD 64 20 */	ps_merge00 f5, f13, f12
/* 80346650  11 4A 00 18 */	ps_muls0 f10, f10, f0
/* 80346654  10 8D 64 E0 */	ps_merge11 f4, f13, f12
/* 80346658  11 29 00 18 */	ps_muls0 f9, f9, f0
/* 8034665C  F0 A4 00 00 */	psq_st f5, 0(r4), 0, 0 /* qr0 */
/* 80346660  10 CD 00 72 */	ps_mul f6, f13, f1
/* 80346664  F0 84 00 10 */	psq_st f4, 16(r4), 0, 0 /* qr0 */
/* 80346668  11 08 00 18 */	ps_muls0 f8, f8, f0
/* 8034666C  10 CC 30 BA */	ps_madd f6, f12, f2, f6
/* 80346670  F1 44 80 20 */	psq_st f10, 32(r4), 1, 0 /* qr0 */
/* 80346674  10 CB 30 FE */	ps_nmadd f6, f11, f3, f6
/* 80346678  F1 24 80 24 */	psq_st f9, 36(r4), 1, 0 /* qr0 */
/* 8034667C  10 EA 00 72 */	ps_mul f7, f10, f1
/* 80346680  10 AB 34 20 */	ps_merge00 f5, f11, f6
/* 80346684  F1 04 80 28 */	psq_st f8, 40(r4), 1, 0 /* qr0 */
/* 80346688  10 8B 34 E0 */	ps_merge11 f4, f11, f6
/* 8034668C  F0 A4 00 08 */	psq_st f5, 8(r4), 0, 0 /* qr0 */
/* 80346690  10 E9 38 BA */	ps_madd f7, f9, f2, f7
/* 80346694  F0 84 00 18 */	psq_st f4, 24(r4), 0, 0 /* qr0 */
/* 80346698  10 E8 38 FE */	ps_nmadd f7, f8, f3, f7
/* 8034669C  38 60 00 01 */	li r3, 1
/* 803466A0  F0 E4 80 2C */	psq_st f7, 44(r4), 1, 0 /* qr0 */
/* 803466A4  4E 80 00 20 */	blr 