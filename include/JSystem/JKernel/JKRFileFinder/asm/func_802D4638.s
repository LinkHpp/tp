/* __ct__12JKRArcFinderFP10JKRArchivell __ct__12JKRArcFinderFP10JKRArchivell::__ct(JKRArchive *, long, long) */
/* JKRArcFinder */
/* 802D4638 002D1578  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 802D463C 002D157C  7C 08 02 A6 */	mflr r0
/* 802D4640 002D1580  90 01 00 14 */	stw r0, 0x14(r1)
/* 802D4644 002D1584  93 E1 00 0C */	stw r31, 0xc(r1)
/* 802D4648 002D1588  7C 7F 1B 78 */	mr r31, r3
/* 802D464C 002D158C  3C E0 80 3D */	lis r7, lbl_803CC228@ha
/* 802D4650 002D1590  38 07 C2 28 */	addi r0, r7, lbl_803CC228@l
/* 802D4654 002D1594  90 03 00 0C */	stw r0, 0xc(r3)
/* 802D4658 002D1598  38 00 00 00 */	li r0, 0
/* 802D465C 002D159C  98 03 00 10 */	stb r0, 0x10(r3)
/* 802D4660 002D15A0  98 03 00 11 */	stb r0, 0x11(r3)
/* 802D4664 002D15A4  3C E0 80 3D */	lis r7, lbl_803CC218@ha
/* 802D4668 002D15A8  38 07 C2 18 */	addi r0, r7, lbl_803CC218@l
/* 802D466C 002D15AC  90 03 00 0C */	stw r0, 0xc(r3)
/* 802D4670 002D15B0  90 83 00 14 */	stw r4, 0x14(r3)
/* 802D4674 002D15B4  7C 06 00 D0 */	neg r0, r6
/* 802D4678 002D15B8  7C 00 30 78 */	andc r0, r0, r6
/* 802D467C 002D15BC  54 00 0F FE */	srwi r0, r0, 0x1f
/* 802D4680 002D15C0  98 03 00 10 */	stb r0, 0x10(r3)
/* 802D4684 002D15C4  90 A3 00 18 */	stw r5, 0x18(r3)
/* 802D4688 002D15C8  38 06 FF FF */	addi r0, r6, -1
/* 802D468C 002D15CC  7C 05 02 14 */	add r0, r5, r0
/* 802D4690 002D15D0  90 03 00 1C */	stw r0, 0x1c(r3)
/* 802D4694 002D15D4  80 03 00 18 */	lwz r0, 0x18(r3)
/* 802D4698 002D15D8  90 03 00 20 */	stw r0, 0x20(r3)
/* 802D469C 002D15DC  81 83 00 0C */	lwz r12, 0xc(r3)
/* 802D46A0 002D15E0  81 8C 00 0C */	lwz r12, 0xc(r12)
/* 802D46A4 002D15E4  7D 89 03 A6 */	mtctr r12
/* 802D46A8 002D15E8  4E 80 04 21 */	bctrl
/* 802D46AC 002D15EC  7F E3 FB 78 */	mr r3, r31
/* 802D46B0 002D15F0  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 802D46B4 002D15F4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 802D46B8 002D15F8  7C 08 03 A6 */	mtlr r0
/* 802D46BC 002D15FC  38 21 00 10 */	addi r1, r1, 0x10
/* 802D46C0 002D1600  4E 80 00 20 */	blr
