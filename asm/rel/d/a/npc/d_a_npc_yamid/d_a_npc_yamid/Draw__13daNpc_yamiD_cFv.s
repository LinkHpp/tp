lbl_80B437DC:
/* 80B437DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80B437E0  7C 08 02 A6 */	mflr r0
/* 80B437E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 80B437E8  39 61 00 20 */	addi r11, r1, 0x20
/* 80B437EC  4B 81 E9 F1 */	bl _savegpr_29
/* 80B437F0  7C 7D 1B 78 */	mr r29, r3
/* 80B437F4  88 03 0F 81 */	lbz r0, 0xf81(r3)
/* 80B437F8  7C 00 07 75 */	extsb. r0, r0
/* 80B437FC  41 82 00 0C */	beq lbl_80B43808
/* 80B43800  38 60 00 00 */	li r3, 0
/* 80B43804  48 00 00 68 */	b lbl_80B4386C
lbl_80B43808:
/* 80B43808  83 DD 09 6C */	lwz r30, 0x96c(r29)
/* 80B4380C  28 1E 00 00 */	cmplwi r30, 0
/* 80B43810  41 82 00 30 */	beq lbl_80B43840
/* 80B43814  80 9D 05 78 */	lwz r4, 0x578(r29)
/* 80B43818  80 84 00 04 */	lwz r4, 4(r4)
/* 80B4381C  83 E4 00 04 */	lwz r31, 4(r4)
/* 80B43820  81 83 0E 3C */	lwz r12, 0xe3c(r3)
/* 80B43824  81 8C 00 38 */	lwz r12, 0x38(r12)
/* 80B43828  7D 89 03 A6 */	mtctr r12
/* 80B4382C  4E 80 04 21 */	bctrl 
/* 80B43830  80 9F 00 60 */	lwz r4, 0x60(r31)
/* 80B43834  54 60 13 BA */	rlwinm r0, r3, 2, 0xe, 0x1d
/* 80B43838  7C 64 00 2E */	lwzx r3, r4, r0
/* 80B4383C  93 C3 00 3C */	stw r30, 0x3c(r3)
lbl_80B43840:
/* 80B43840  7F A3 EB 78 */	mr r3, r29
/* 80B43844  38 80 00 00 */	li r4, 0
/* 80B43848  38 A0 00 00 */	li r5, 0
/* 80B4384C  C0 3D 0D E8 */	lfs f1, 0xde8(r29)
/* 80B43850  38 C0 00 00 */	li r6, 0
/* 80B43854  3C E0 80 B4 */	lis r7, lit_4194@ha /* 0x80B460F0@ha */
/* 80B43858  C0 47 60 F0 */	lfs f2, lit_4194@l(r7)  /* 0x80B460F0@l */
/* 80B4385C  38 E0 00 01 */	li r7, 1
/* 80B43860  39 00 00 00 */	li r8, 0
/* 80B43864  39 20 00 00 */	li r9, 0
/* 80B43868  4B 60 50 05 */	bl draw__8daNpcT_cFiifP11_GXColorS10fiii
lbl_80B4386C:
/* 80B4386C  39 61 00 20 */	addi r11, r1, 0x20
/* 80B43870  4B 81 E9 B9 */	bl _restgpr_29
/* 80B43874  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80B43878  7C 08 03 A6 */	mtlr r0
/* 80B4387C  38 21 00 20 */	addi r1, r1, 0x20
/* 80B43880  4E 80 00 20 */	blr 
