lbl_80761254:
/* 80761254  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80761258  7C 08 02 A6 */	mflr r0
/* 8076125C  90 01 00 24 */	stw r0, 0x24(r1)
/* 80761260  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 80761264  3C 80 80 76 */	lis r4, lit_3906@ha /* 0x807614FC@ha */
/* 80761268  3B E4 14 FC */	addi r31, r4, lit_3906@l /* 0x807614FC@l */
/* 8076126C  4B BE 5E CD */	bl PSVECSquareMag
/* 80761270  C0 1F 00 04 */	lfs f0, 4(r31)
/* 80761274  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 80761278  40 81 00 58 */	ble lbl_807612D0
/* 8076127C  FC 00 08 34 */	frsqrte f0, f1
/* 80761280  C8 9F 00 10 */	lfd f4, 0x10(r31)
/* 80761284  FC 44 00 32 */	fmul f2, f4, f0
/* 80761288  C8 7F 00 18 */	lfd f3, 0x18(r31)
/* 8076128C  FC 00 00 32 */	fmul f0, f0, f0
/* 80761290  FC 01 00 32 */	fmul f0, f1, f0
/* 80761294  FC 03 00 28 */	fsub f0, f3, f0
/* 80761298  FC 02 00 32 */	fmul f0, f2, f0
/* 8076129C  FC 44 00 32 */	fmul f2, f4, f0
/* 807612A0  FC 00 00 32 */	fmul f0, f0, f0
/* 807612A4  FC 01 00 32 */	fmul f0, f1, f0
/* 807612A8  FC 03 00 28 */	fsub f0, f3, f0
/* 807612AC  FC 02 00 32 */	fmul f0, f2, f0
/* 807612B0  FC 44 00 32 */	fmul f2, f4, f0
/* 807612B4  FC 00 00 32 */	fmul f0, f0, f0
/* 807612B8  FC 01 00 32 */	fmul f0, f1, f0
/* 807612BC  FC 03 00 28 */	fsub f0, f3, f0
/* 807612C0  FC 02 00 32 */	fmul f0, f2, f0
/* 807612C4  FC 21 00 32 */	fmul f1, f1, f0
/* 807612C8  FC 20 08 18 */	frsp f1, f1
/* 807612CC  48 00 00 88 */	b lbl_80761354
lbl_807612D0:
/* 807612D0  C8 1F 00 20 */	lfd f0, 0x20(r31)
/* 807612D4  FC 01 00 40 */	fcmpo cr0, f1, f0
/* 807612D8  40 80 00 10 */	bge lbl_807612E8
/* 807612DC  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 807612E0  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
/* 807612E4  48 00 00 70 */	b lbl_80761354
lbl_807612E8:
/* 807612E8  D0 21 00 08 */	stfs f1, 8(r1)
/* 807612EC  80 81 00 08 */	lwz r4, 8(r1)
/* 807612F0  54 83 00 50 */	rlwinm r3, r4, 0, 1, 8
/* 807612F4  3C 00 7F 80 */	lis r0, 0x7f80
/* 807612F8  7C 03 00 00 */	cmpw r3, r0
/* 807612FC  41 82 00 14 */	beq lbl_80761310
/* 80761300  40 80 00 40 */	bge lbl_80761340
/* 80761304  2C 03 00 00 */	cmpwi r3, 0
/* 80761308  41 82 00 20 */	beq lbl_80761328
/* 8076130C  48 00 00 34 */	b lbl_80761340
lbl_80761310:
/* 80761310  54 80 02 7F */	clrlwi. r0, r4, 9
/* 80761314  41 82 00 0C */	beq lbl_80761320
/* 80761318  38 00 00 01 */	li r0, 1
/* 8076131C  48 00 00 28 */	b lbl_80761344
lbl_80761320:
/* 80761320  38 00 00 02 */	li r0, 2
/* 80761324  48 00 00 20 */	b lbl_80761344
lbl_80761328:
/* 80761328  54 80 02 7F */	clrlwi. r0, r4, 9
/* 8076132C  41 82 00 0C */	beq lbl_80761338
/* 80761330  38 00 00 05 */	li r0, 5
/* 80761334  48 00 00 10 */	b lbl_80761344
lbl_80761338:
/* 80761338  38 00 00 03 */	li r0, 3
/* 8076133C  48 00 00 08 */	b lbl_80761344
lbl_80761340:
/* 80761340  38 00 00 04 */	li r0, 4
lbl_80761344:
/* 80761344  2C 00 00 01 */	cmpwi r0, 1
/* 80761348  40 82 00 0C */	bne lbl_80761354
/* 8076134C  3C 60 80 45 */	lis r3, __float_nan@ha /* 0x80450AE0@ha */
/* 80761350  C0 23 0A E0 */	lfs f1, __float_nan@l(r3)  /* 0x80450AE0@l */
lbl_80761354:
/* 80761354  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80761358  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8076135C  7C 08 03 A6 */	mtlr r0
/* 80761360  38 21 00 20 */	addi r1, r1, 0x20
/* 80761364  4E 80 00 20 */	blr 