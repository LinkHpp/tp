lbl_8027378C:
/* 8027378C  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 80273790  7C 08 02 A6 */	mflr r0
/* 80273794  90 01 00 44 */	stw r0, 0x44(r1)
/* 80273798  93 E1 00 3C */	stw r31, 0x3c(r1)
/* 8027379C  93 C1 00 38 */	stw r30, 0x38(r1)
/* 802737A0  7C 7E 1B 78 */	mr r30, r3
/* 802737A4  3C 60 80 3A */	lis r3, lit_898@ha /* 0x8039A948@ha */
/* 802737A8  3B E3 A9 48 */	addi r31, r3, lit_898@l /* 0x8039A948@l */
/* 802737AC  C0 42 B8 80 */	lfs f2, lit_913(r2)
/* 802737B0  C0 22 B8 84 */	lfs f1, lit_914(r2)
/* 802737B4  C0 1E 00 4C */	lfs f0, 0x4c(r30)
/* 802737B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 802737BC  EC 22 00 32 */	fmuls f1, f2, f0
/* 802737C0  48 0F 8E A9 */	bl tan
/* 802737C4  FC 00 08 18 */	frsp f0, f1
/* 802737C8  C0 3E 00 54 */	lfs f1, 0x54(r30)
/* 802737CC  EC 81 00 32 */	fmuls f4, f1, f0
/* 802737D0  C0 1E 00 50 */	lfs f0, 0x50(r30)
/* 802737D4  EC A0 01 32 */	fmuls f5, f0, f4
/* 802737D8  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802737DC  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 802737E0  90 61 00 2C */	stw r3, 0x2c(r1)
/* 802737E4  90 01 00 30 */	stw r0, 0x30(r1)
/* 802737E8  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 802737EC  90 01 00 34 */	stw r0, 0x34(r1)
/* 802737F0  FC 40 28 50 */	fneg f2, f5
/* 802737F4  D0 41 00 2C */	stfs f2, 0x2c(r1)
/* 802737F8  FC 60 20 50 */	fneg f3, f4
/* 802737FC  D0 61 00 30 */	stfs f3, 0x30(r1)
/* 80273800  FC 00 08 50 */	fneg f0, f1
/* 80273804  D0 01 00 34 */	stfs f0, 0x34(r1)
/* 80273808  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 8027380C  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80273810  90 61 00 20 */	stw r3, 0x20(r1)
/* 80273814  90 01 00 24 */	stw r0, 0x24(r1)
/* 80273818  80 1F 00 20 */	lwz r0, 0x20(r31)
/* 8027381C  90 01 00 28 */	stw r0, 0x28(r1)
/* 80273820  D0 41 00 20 */	stfs f2, 0x20(r1)
/* 80273824  D0 81 00 24 */	stfs f4, 0x24(r1)
/* 80273828  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 8027382C  80 7F 00 24 */	lwz r3, 0x24(r31)
/* 80273830  80 1F 00 28 */	lwz r0, 0x28(r31)
/* 80273834  90 61 00 14 */	stw r3, 0x14(r1)
/* 80273838  90 01 00 18 */	stw r0, 0x18(r1)
/* 8027383C  80 1F 00 2C */	lwz r0, 0x2c(r31)
/* 80273840  90 01 00 1C */	stw r0, 0x1c(r1)
/* 80273844  D0 A1 00 14 */	stfs f5, 0x14(r1)
/* 80273848  D0 81 00 18 */	stfs f4, 0x18(r1)
/* 8027384C  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 80273850  80 7F 00 30 */	lwz r3, 0x30(r31)
/* 80273854  80 1F 00 34 */	lwz r0, 0x34(r31)
/* 80273858  90 61 00 08 */	stw r3, 8(r1)
/* 8027385C  90 01 00 0C */	stw r0, 0xc(r1)
/* 80273860  80 1F 00 38 */	lwz r0, 0x38(r31)
/* 80273864  90 01 00 10 */	stw r0, 0x10(r1)
/* 80273868  D0 A1 00 08 */	stfs f5, 8(r1)
/* 8027386C  D0 61 00 0C */	stfs f3, 0xc(r1)
/* 80273870  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80273874  38 61 00 20 */	addi r3, r1, 0x20
/* 80273878  38 81 00 2C */	addi r4, r1, 0x2c
/* 8027387C  38 BE 00 04 */	addi r5, r30, 4
/* 80273880  48 0D 39 35 */	bl PSVECCrossProduct
/* 80273884  38 61 00 14 */	addi r3, r1, 0x14
/* 80273888  38 81 00 20 */	addi r4, r1, 0x20
/* 8027388C  38 BE 00 10 */	addi r5, r30, 0x10
/* 80273890  48 0D 39 25 */	bl PSVECCrossProduct
/* 80273894  38 61 00 08 */	addi r3, r1, 8
/* 80273898  38 81 00 14 */	addi r4, r1, 0x14
/* 8027389C  38 BE 00 1C */	addi r5, r30, 0x1c
/* 802738A0  48 0D 39 15 */	bl PSVECCrossProduct
/* 802738A4  38 61 00 2C */	addi r3, r1, 0x2c
/* 802738A8  38 81 00 08 */	addi r4, r1, 8
/* 802738AC  38 BE 00 28 */	addi r5, r30, 0x28
/* 802738B0  48 0D 39 05 */	bl PSVECCrossProduct
/* 802738B4  38 7E 00 04 */	addi r3, r30, 4
/* 802738B8  7C 64 1B 78 */	mr r4, r3
/* 802738BC  48 0D 38 39 */	bl PSVECNormalize
/* 802738C0  38 7E 00 10 */	addi r3, r30, 0x10
/* 802738C4  7C 64 1B 78 */	mr r4, r3
/* 802738C8  48 0D 38 2D */	bl PSVECNormalize
/* 802738CC  38 7E 00 1C */	addi r3, r30, 0x1c
/* 802738D0  7C 64 1B 78 */	mr r4, r3
/* 802738D4  48 0D 38 21 */	bl PSVECNormalize
/* 802738D8  38 7E 00 28 */	addi r3, r30, 0x28
/* 802738DC  7C 64 1B 78 */	mr r4, r3
/* 802738E0  48 0D 38 15 */	bl PSVECNormalize
/* 802738E4  83 E1 00 3C */	lwz r31, 0x3c(r1)
/* 802738E8  83 C1 00 38 */	lwz r30, 0x38(r1)
/* 802738EC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802738F0  7C 08 03 A6 */	mtlr r0
/* 802738F4  38 21 00 40 */	addi r1, r1, 0x40
/* 802738F8  4E 80 00 20 */	blr 