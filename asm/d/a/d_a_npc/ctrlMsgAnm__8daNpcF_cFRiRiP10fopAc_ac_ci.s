lbl_80153718:
/* 80153718  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8015371C  7C 08 02 A6 */	mflr r0
/* 80153720  90 01 00 24 */	stw r0, 0x24(r1)
/* 80153724  39 61 00 20 */	addi r11, r1, 0x20
/* 80153728  48 20 EA AD */	bl _savegpr_27
/* 8015372C  7C 7E 1B 78 */	mr r30, r3
/* 80153730  7C 9B 23 78 */	mr r27, r4
/* 80153734  7C BC 2B 78 */	mr r28, r5
/* 80153738  7C DD 33 78 */	mr r29, r6
/* 8015373C  7C FF 3B 79 */	or. r31, r7, r7
/* 80153740  38 00 FF FF */	li r0, -1
/* 80153744  90 04 00 00 */	stw r0, 0(r4)
/* 80153748  90 05 00 00 */	stw r0, 0(r5)
/* 8015374C  40 82 00 1C */	bne lbl_80153768
/* 80153750  A0 1E 00 F8 */	lhz r0, 0xf8(r30)
/* 80153754  28 00 00 01 */	cmplwi r0, 1
/* 80153758  41 82 00 10 */	beq lbl_80153768
/* 8015375C  80 1E 09 2C */	lwz r0, 0x92c(r30)
/* 80153760  2C 00 FF FF */	cmpwi r0, -1
/* 80153764  41 82 00 EC */	beq lbl_80153850
lbl_80153768:
/* 80153768  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 8015376C  38 83 61 C0 */	addi r4, r3, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 80153770  38 64 4E C8 */	addi r3, r4, 0x4ec8
/* 80153774  80 84 4F 94 */	lwz r4, 0x4f94(r4)
/* 80153778  4B EE FB 75 */	bl convPId__14dEvt_control_cFUi
/* 8015377C  7C 03 E8 40 */	cmplw r3, r29
/* 80153780  40 82 00 B4 */	bne lbl_80153834
/* 80153784  48 0E 4A 19 */	bl getActor__12dMsgObject_cFv
/* 80153788  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 8015378C  28 00 00 02 */	cmplwi r0, 2
/* 80153790  41 82 00 0C */	beq lbl_8015379C
/* 80153794  28 00 00 03 */	cmplwi r0, 3
/* 80153798  40 82 00 10 */	bne lbl_801537A8
lbl_8015379C:
/* 8015379C  38 00 FF FF */	li r0, -1
/* 801537A0  90 1E 09 A4 */	stw r0, 0x9a4(r30)
/* 801537A4  48 00 00 AC */	b lbl_80153850
lbl_801537A8:
/* 801537A8  28 00 00 06 */	cmplwi r0, 6
/* 801537AC  40 82 00 68 */	bne lbl_80153814
/* 801537B0  80 83 00 EC */	lwz r4, 0xec(r3)
/* 801537B4  80 1E 09 A4 */	lwz r0, 0x9a4(r30)
/* 801537B8  7C 04 00 40 */	cmplw r4, r0
/* 801537BC  41 82 00 24 */	beq lbl_801537E0
/* 801537C0  3C 80 80 40 */	lis r4, g_dComIfG_gameInfo@ha /* 0x804061C0@ha */
/* 801537C4  38 84 61 C0 */	addi r4, r4, g_dComIfG_gameInfo@l /* 0x804061C0@l */
/* 801537C8  88 04 5E 7B */	lbz r0, 0x5e7b(r4)
/* 801537CC  90 1B 00 00 */	stw r0, 0(r27)
/* 801537D0  88 04 5E 7A */	lbz r0, 0x5e7a(r4)
/* 801537D4  90 1C 00 00 */	stw r0, 0(r28)
/* 801537D8  80 03 00 EC */	lwz r0, 0xec(r3)
/* 801537DC  90 1E 09 A4 */	stw r0, 0x9a4(r30)
lbl_801537E0:
/* 801537E0  48 0E 4B C5 */	bl isMouthCheck__12dMsgObject_cFv
/* 801537E4  54 60 06 3F */	clrlwi. r0, r3, 0x18
/* 801537E8  41 82 00 14 */	beq lbl_801537FC
/* 801537EC  80 1E 09 9C */	lwz r0, 0x99c(r30)
/* 801537F0  54 00 05 24 */	rlwinm r0, r0, 0, 0x14, 0x12
/* 801537F4  90 1E 09 9C */	stw r0, 0x99c(r30)
/* 801537F8  48 00 00 10 */	b lbl_80153808
lbl_801537FC:
/* 801537FC  80 1E 09 9C */	lwz r0, 0x99c(r30)
/* 80153800  60 00 10 00 */	ori r0, r0, 0x1000
/* 80153804  90 1E 09 9C */	stw r0, 0x99c(r30)
lbl_80153808:
/* 80153808  38 00 00 14 */	li r0, 0x14
/* 8015380C  90 1E 09 50 */	stw r0, 0x950(r30)
/* 80153810  48 00 00 40 */	b lbl_80153850
lbl_80153814:
/* 80153814  80 7E 09 9C */	lwz r3, 0x99c(r30)
/* 80153818  54 60 04 E7 */	rlwinm. r0, r3, 0, 0x13, 0x13
/* 8015381C  41 82 00 0C */	beq lbl_80153828
/* 80153820  54 60 05 24 */	rlwinm r0, r3, 0, 0x14, 0x12
/* 80153824  90 1E 09 9C */	stw r0, 0x99c(r30)
lbl_80153828:
/* 80153828  38 00 FF FF */	li r0, -1
/* 8015382C  90 1E 09 A4 */	stw r0, 0x9a4(r30)
/* 80153830  48 00 00 20 */	b lbl_80153850
lbl_80153834:
/* 80153834  38 00 FF FF */	li r0, -1
/* 80153838  90 1E 09 A4 */	stw r0, 0x9a4(r30)
/* 8015383C  80 1E 09 50 */	lwz r0, 0x950(r30)
/* 80153840  2C 00 00 00 */	cmpwi r0, 0
/* 80153844  41 82 00 0C */	beq lbl_80153850
/* 80153848  38 00 00 01 */	li r0, 1
/* 8015384C  90 1E 09 50 */	stw r0, 0x950(r30)
lbl_80153850:
/* 80153850  2C 1F 00 00 */	cmpwi r31, 0
/* 80153854  40 82 00 0C */	bne lbl_80153860
/* 80153858  38 7E 09 50 */	addi r3, r30, 0x950
/* 8015385C  4B FF 9A ED */	bl func_8014D348
lbl_80153860:
/* 80153860  80 7E 09 50 */	lwz r3, 0x950(r30)
/* 80153864  39 61 00 20 */	addi r11, r1, 0x20
/* 80153868  48 20 E9 B9 */	bl _restgpr_27
/* 8015386C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80153870  7C 08 03 A6 */	mtlr r0
/* 80153874  38 21 00 20 */	addi r1, r1, 0x20
/* 80153878  4E 80 00 20 */	blr 
