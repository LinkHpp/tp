lbl_80D675EC:
/* 80D675EC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 80D675F0  A8 03 05 80 */	lha r0, 0x580(r3)
/* 80D675F4  3C 80 80 D6 */	lis r4, lit_4337@ha /* 0x80D67C04@ha */
/* 80D675F8  C8 44 7C 04 */	lfd f2, lit_4337@l(r4)  /* 0x80D67C04@l */
/* 80D675FC  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80D67600  90 01 00 0C */	stw r0, 0xc(r1)
/* 80D67604  3C A0 43 30 */	lis r5, 0x4330
/* 80D67608  90 A1 00 08 */	stw r5, 8(r1)
/* 80D6760C  C8 01 00 08 */	lfd f0, 8(r1)
/* 80D67610  EC 00 10 28 */	fsubs f0, f0, f2
/* 80D67614  3C 80 80 D6 */	lis r4, lit_4003@ha /* 0x80D67BE8@ha */
/* 80D67618  C0 24 7B E8 */	lfs f1, lit_4003@l(r4)  /* 0x80D67BE8@l */
/* 80D6761C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80D67620  D0 03 05 88 */	stfs f0, 0x588(r3)
/* 80D67624  A8 03 05 9C */	lha r0, 0x59c(r3)
/* 80D67628  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80D6762C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80D67630  90 A1 00 10 */	stw r5, 0x10(r1)
/* 80D67634  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 80D67638  EC 00 10 28 */	fsubs f0, f0, f2
/* 80D6763C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80D67640  D0 03 05 A4 */	stfs f0, 0x5a4(r3)
/* 80D67644  A8 03 05 B4 */	lha r0, 0x5b4(r3)
/* 80D67648  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80D6764C  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80D67650  90 A1 00 18 */	stw r5, 0x18(r1)
/* 80D67654  C8 01 00 18 */	lfd f0, 0x18(r1)
/* 80D67658  EC 00 10 28 */	fsubs f0, f0, f2
/* 80D6765C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80D67660  D0 03 05 BC */	stfs f0, 0x5bc(r3)
/* 80D67664  A8 03 05 CC */	lha r0, 0x5cc(r3)
/* 80D67668  6C 00 80 00 */	xoris r0, r0, 0x8000
/* 80D6766C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80D67670  90 A1 00 20 */	stw r5, 0x20(r1)
/* 80D67674  C8 01 00 20 */	lfd f0, 0x20(r1)
/* 80D67678  EC 00 10 28 */	fsubs f0, f0, f2
/* 80D6767C  EC 00 08 28 */	fsubs f0, f0, f1
/* 80D67680  D0 03 05 D4 */	stfs f0, 0x5d4(r3)
/* 80D67684  38 00 00 00 */	li r0, 0
/* 80D67688  80 83 06 00 */	lwz r4, 0x600(r3)
/* 80D6768C  B0 04 00 16 */	sth r0, 0x16(r4)
/* 80D67690  98 03 06 04 */	stb r0, 0x604(r3)
/* 80D67694  38 00 00 1E */	li r0, 0x1e
/* 80D67698  98 03 05 FC */	stb r0, 0x5fc(r3)
/* 80D6769C  38 00 00 05 */	li r0, 5
/* 80D676A0  98 03 05 FB */	stb r0, 0x5fb(r3)
/* 80D676A4  38 21 00 30 */	addi r1, r1, 0x30
/* 80D676A8  4E 80 00 20 */	blr 