.include "macros.inc"

.section .text, "ax" # 8001f9b4


.global fopMsgM_setStageLayer
fopMsgM_setStageLayer:
/* 8001F9B4 0001C8F4  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001F9B8 0001C8F8  7C 08 02 A6 */	mflr r0
/* 8001F9BC 0001C8FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001F9C0 0001C900  93 E1 00 0C */	stw r31, 0xc(r1)
/* 8001F9C4 0001C904  93 C1 00 08 */	stw r30, 8(r1)
/* 8001F9C8 0001C908  7C 7E 1B 78 */	mr r30, r3
/* 8001F9CC 0001C90C  80 6D 87 E0 */	lwz r3, lbl_80450D60-_SDA_BASE_(r13)
/* 8001F9D0 0001C910  4B FF F2 E1 */	bl fopScnM_SearchByID
/* 8001F9D4 0001C914  7C 7F 1B 78 */	mr r31, r3
/* 8001F9D8 0001C918  80 6D 87 C0 */	lwz r3, lbl_80450D40-_SDA_BASE_(r13)
/* 8001F9DC 0001C91C  80 9F 00 B4 */	lwz r4, 0xb4(r31)
/* 8001F9E0 0001C920  48 00 0C 6D */	bl fpcBs_Is_JustOfType
/* 8001F9E4 0001C924  2C 03 00 00 */	cmpwi r3, 0
/* 8001F9E8 0001C928  41 82 00 0C */	beq lbl_8001F9F4
/* 8001F9EC 0001C92C  80 9F 00 C8 */	lwz r4, 0xc8(r31)
/* 8001F9F0 0001C930  48 00 00 08 */	b lbl_8001F9F8
lbl_8001F9F4:
/* 8001F9F4 0001C934  38 80 FF FF */	li r4, -1
lbl_8001F9F8:
/* 8001F9F8 0001C938  38 7E 00 68 */	addi r3, r30, 0x68
/* 8001F9FC 0001C93C  3C A0 00 01 */	lis r5, 0x0000FFFD@ha
/* 8001FA00 0001C940  38 A5 FF FD */	addi r5, r5, 0x0000FFFD@l
/* 8001FA04 0001C944  7C A6 2B 78 */	mr r6, r5
/* 8001FA08 0001C948  48 00 38 E1 */	bl fpcPi_Change
/* 8001FA0C 0001C94C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 8001FA10 0001C950  83 C1 00 08 */	lwz r30, 8(r1)
/* 8001FA14 0001C954  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FA18 0001C958  7C 08 03 A6 */	mtlr r0
/* 8001FA1C 0001C95C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FA20 0001C960  4E 80 00 20 */	blr 

.global fopMsgM_SearchByID
fopMsgM_SearchByID:
/* 8001FA24 0001C964  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FA28 0001C968  7C 08 02 A6 */	mflr r0
/* 8001FA2C 0001C96C  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FA30 0001C970  48 00 19 29 */	bl fpcEx_SearchByID
/* 8001FA34 0001C974  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FA38 0001C978  7C 08 03 A6 */	mtlr r0
/* 8001FA3C 0001C97C  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FA40 0001C980  4E 80 00 20 */	blr 

.global fopMsgM_GetAppend
fopMsgM_GetAppend:
/* 8001FA44 0001C984  80 63 00 AC */	lwz r3, 0xac(r3)
/* 8001FA48 0001C988  4E 80 00 20 */	blr 

.global fopMsgM_Delete
fopMsgM_Delete:
/* 8001FA4C 0001C98C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8001FA50 0001C990  7C 08 02 A6 */	mflr r0
/* 8001FA54 0001C994  90 01 00 14 */	stw r0, 0x14(r1)
/* 8001FA58 0001C998  48 00 26 C1 */	bl fpcM_Delete
/* 8001FA5C 0001C99C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8001FA60 0001C9A0  7C 08 03 A6 */	mtlr r0
/* 8001FA64 0001C9A4  38 21 00 10 */	addi r1, r1, 0x10
/* 8001FA68 0001C9A8  4E 80 00 20 */	blr 

.global createAppend_X2_
createAppend_X2_:
/* 8001FA6C 0001C9AC  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8001FA70 0001C9B0  7C 08 02 A6 */	mflr r0
/* 8001FA74 0001C9B4  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001FA78 0001C9B8  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FA7C 0001C9BC  48 34 27 55 */	bl _savegpr_26
/* 8001FA80 0001C9C0  7C 7A 1B 78 */	mr r26, r3
/* 8001FA84 0001C9C4  7C 9B 23 78 */	mr r27, r4
/* 8001FA88 0001C9C8  7C BC 2B 78 */	mr r28, r5
/* 8001FA8C 0001C9CC  7C DD 33 78 */	mr r29, r6
/* 8001FA90 0001C9D0  7C FE 3B 78 */	mr r30, r7
/* 8001FA94 0001C9D4  38 60 FF FC */	li r3, -4
/* 8001FA98 0001C9D8  38 80 00 1C */	li r4, 0x1c
/* 8001FA9C 0001C9DC  48 24 37 8D */	bl cMl_NS_memalignB
/* 8001FAA0 0001C9E0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8001FAA4 0001C9E4  40 82 00 0C */	bne lbl_8001FAB0
/* 8001FAA8 0001C9E8  38 60 00 00 */	li r3, 0
/* 8001FAAC 0001C9EC  48 00 00 8C */	b lbl_8001FB38
lbl_8001FAB0:
/* 8001FAB0 0001C9F0  93 5F 00 00 */	stw r26, 0(r31)
/* 8001FAB4 0001C9F4  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8001FAB8 0001C9F8  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 8001FABC 0001C9FC  80 03 5D BC */	lwz r0, 0x5dbc(r3)
/* 8001FAC0 0001CA00  28 00 00 00 */	cmplwi r0, 0
/* 8001FAC4 0001CA04  41 82 00 0C */	beq lbl_8001FAD0
/* 8001FAC8 0001CA08  7F 43 D3 78 */	mr r3, r26
/* 8001FACC 0001CA0C  48 21 87 A1 */	bl dMsgObject_c_NS_setTalkActor
lbl_8001FAD0:
/* 8001FAD0 0001CA10  28 1C 00 00 */	cmplwi r28, 0
/* 8001FAD4 0001CA14  41 82 00 0C */	beq lbl_8001FAE0
/* 8001FAD8 0001CA18  80 1C 00 00 */	lwz r0, 0(r28)
/* 8001FADC 0001CA1C  90 1F 00 10 */	stw r0, 0x10(r31)
lbl_8001FAE0:
/* 8001FAE0 0001CA20  28 1D 00 00 */	cmplwi r29, 0
/* 8001FAE4 0001CA24  41 82 00 0C */	beq lbl_8001FAF0
/* 8001FAE8 0001CA28  80 1D 00 00 */	lwz r0, 0(r29)
/* 8001FAEC 0001CA2C  90 1F 00 14 */	stw r0, 0x14(r31)
lbl_8001FAF0:
/* 8001FAF0 0001CA30  28 1B 00 00 */	cmplwi r27, 0
/* 8001FAF4 0001CA34  41 82 00 20 */	beq lbl_8001FB14
/* 8001FAF8 0001CA38  C0 1B 00 00 */	lfs f0, 0(r27)
/* 8001FAFC 0001CA3C  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8001FB00 0001CA40  C0 1B 00 04 */	lfs f0, 4(r27)
/* 8001FB04 0001CA44  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8001FB08 0001CA48  C0 1B 00 08 */	lfs f0, 8(r27)
/* 8001FB0C 0001CA4C  D0 1F 00 0C */	stfs f0, 0xc(r31)
/* 8001FB10 0001CA50  48 00 00 20 */	b lbl_8001FB30
lbl_8001FB14:
/* 8001FB14 0001CA54  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 8001FB18 0001CA58  D0 01 00 08 */	stfs f0, 8(r1)
/* 8001FB1C 0001CA5C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FB20 0001CA60  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FB24 0001CA64  D0 1F 00 04 */	stfs f0, 4(r31)
/* 8001FB28 0001CA68  D0 1F 00 08 */	stfs f0, 8(r31)
/* 8001FB2C 0001CA6C  D0 1F 00 0C */	stfs f0, 0xc(r31)
lbl_8001FB30:
/* 8001FB30 0001CA70  93 DF 00 18 */	stw r30, 0x18(r31)
/* 8001FB34 0001CA74  7F E3 FB 78 */	mr r3, r31
lbl_8001FB38:
/* 8001FB38 0001CA78  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FB3C 0001CA7C  48 34 26 E1 */	bl _restgpr_26
/* 8001FB40 0001CA80  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8001FB44 0001CA84  7C 08 03 A6 */	mtlr r0
/* 8001FB48 0001CA88  38 21 00 30 */	addi r1, r1, 0x30
/* 8001FB4C 0001CA8C  4E 80 00 20 */	blr 

.global createTimerAppend
createTimerAppend:
/* 8001FB50 0001CA90  94 21 FF 90 */	stwu r1, -0x70(r1)
/* 8001FB54 0001CA94  7C 08 02 A6 */	mflr r0
/* 8001FB58 0001CA98  90 01 00 74 */	stw r0, 0x74(r1)
/* 8001FB5C 0001CA9C  DB E1 00 60 */	stfd f31, 0x60(r1)
/* 8001FB60 0001CAA0  F3 E1 00 68 */	psq_st f31, 104(r1), 0, qr0
/* 8001FB64 0001CAA4  DB C1 00 50 */	stfd f30, 0x50(r1)
/* 8001FB68 0001CAA8  F3 C1 00 58 */	psq_st f30, 88(r1), 0, qr0
/* 8001FB6C 0001CAAC  DB A1 00 40 */	stfd f29, 0x40(r1)
/* 8001FB70 0001CAB0  F3 A1 00 48 */	psq_st f29, 72(r1), 0, qr0
/* 8001FB74 0001CAB4  DB 81 00 30 */	stfd f28, 0x30(r1)
/* 8001FB78 0001CAB8  F3 81 00 38 */	psq_st f28, 56(r1), 0, qr0
/* 8001FB7C 0001CABC  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FB80 0001CAC0  48 34 26 55 */	bl _savegpr_27
/* 8001FB84 0001CAC4  7C 7B 1B 78 */	mr r27, r3
/* 8001FB88 0001CAC8  7C 9C 23 78 */	mr r28, r4
/* 8001FB8C 0001CACC  7C BD 2B 78 */	mr r29, r5
/* 8001FB90 0001CAD0  7C DE 33 78 */	mr r30, r6
/* 8001FB94 0001CAD4  FF 80 08 90 */	fmr f28, f1
/* 8001FB98 0001CAD8  FF A0 10 90 */	fmr f29, f2
/* 8001FB9C 0001CADC  FF C0 18 90 */	fmr f30, f3
/* 8001FBA0 0001CAE0  FF E0 20 90 */	fmr f31, f4
/* 8001FBA4 0001CAE4  7C FF 3B 78 */	mr r31, r7
/* 8001FBA8 0001CAE8  38 60 FF FC */	li r3, -4
/* 8001FBAC 0001CAEC  38 80 00 38 */	li r4, 0x38
/* 8001FBB0 0001CAF0  48 24 36 79 */	bl cMl_NS_memalignB
/* 8001FBB4 0001CAF4  28 03 00 00 */	cmplwi r3, 0
/* 8001FBB8 0001CAF8  40 82 00 0C */	bne lbl_8001FBC4
/* 8001FBBC 0001CAFC  38 60 00 00 */	li r3, 0
/* 8001FBC0 0001CB00  48 00 00 54 */	b lbl_8001FC14
lbl_8001FBC4:
/* 8001FBC4 0001CB04  38 00 00 00 */	li r0, 0
/* 8001FBC8 0001CB08  90 03 00 00 */	stw r0, 0(r3)
/* 8001FBCC 0001CB0C  90 03 00 10 */	stw r0, 0x10(r3)
/* 8001FBD0 0001CB10  90 03 00 14 */	stw r0, 0x14(r3)
/* 8001FBD4 0001CB14  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 8001FBD8 0001CB18  D0 01 00 08 */	stfs f0, 8(r1)
/* 8001FBDC 0001CB1C  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FBE0 0001CB20  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FBE4 0001CB24  D0 03 00 04 */	stfs f0, 4(r3)
/* 8001FBE8 0001CB28  D0 03 00 08 */	stfs f0, 8(r3)
/* 8001FBEC 0001CB2C  D0 03 00 0C */	stfs f0, 0xc(r3)
/* 8001FBF0 0001CB30  93 E3 00 18 */	stw r31, 0x18(r3)
/* 8001FBF4 0001CB34  93 63 00 1C */	stw r27, 0x1c(r3)
/* 8001FBF8 0001CB38  93 83 00 20 */	stw r28, 0x20(r3)
/* 8001FBFC 0001CB3C  9B A3 00 24 */	stb r29, 0x24(r3)
/* 8001FC00 0001CB40  9B C3 00 25 */	stb r30, 0x25(r3)
/* 8001FC04 0001CB44  D3 83 00 28 */	stfs f28, 0x28(r3)
/* 8001FC08 0001CB48  D3 A3 00 2C */	stfs f29, 0x2c(r3)
/* 8001FC0C 0001CB4C  D3 C3 00 30 */	stfs f30, 0x30(r3)
/* 8001FC10 0001CB50  D3 E3 00 34 */	stfs f31, 0x34(r3)
lbl_8001FC14:
/* 8001FC14 0001CB54  E3 E1 00 68 */	psq_l f31, 104(r1), 0, qr0
/* 8001FC18 0001CB58  CB E1 00 60 */	lfd f31, 0x60(r1)
/* 8001FC1C 0001CB5C  E3 C1 00 58 */	psq_l f30, 88(r1), 0, qr0
/* 8001FC20 0001CB60  CB C1 00 50 */	lfd f30, 0x50(r1)
/* 8001FC24 0001CB64  E3 A1 00 48 */	psq_l f29, 72(r1), 0, qr0
/* 8001FC28 0001CB68  CB A1 00 40 */	lfd f29, 0x40(r1)
/* 8001FC2C 0001CB6C  E3 81 00 38 */	psq_l f28, 56(r1), 0, qr0
/* 8001FC30 0001CB70  CB 81 00 30 */	lfd f28, 0x30(r1)
/* 8001FC34 0001CB74  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FC38 0001CB78  48 34 25 E9 */	bl _restgpr_27
/* 8001FC3C 0001CB7C  80 01 00 74 */	lwz r0, 0x74(r1)
/* 8001FC40 0001CB80  7C 08 03 A6 */	mtlr r0
/* 8001FC44 0001CB84  38 21 00 70 */	addi r1, r1, 0x70
/* 8001FC48 0001CB88  4E 80 00 20 */	blr 

.global fopMsgM_create
fopMsgM_create:
/* 8001FC4C 0001CB8C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001FC50 0001CB90  7C 08 02 A6 */	mflr r0
/* 8001FC54 0001CB94  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001FC58 0001CB98  39 61 00 20 */	addi r11, r1, 0x20
/* 8001FC5C 0001CB9C  48 34 25 81 */	bl _savegpr_29
/* 8001FC60 0001CBA0  7C 7D 1B 78 */	mr r29, r3
/* 8001FC64 0001CBA4  7D 1E 43 78 */	mr r30, r8
/* 8001FC68 0001CBA8  7C 83 23 78 */	mr r3, r4
/* 8001FC6C 0001CBAC  7C A4 2B 78 */	mr r4, r5
/* 8001FC70 0001CBB0  7C C5 33 78 */	mr r5, r6
/* 8001FC74 0001CBB4  7C E6 3B 78 */	mr r6, r7
/* 8001FC78 0001CBB8  38 E0 FF FF */	li r7, -1
/* 8001FC7C 0001CBBC  4B FF FD F1 */	bl createAppend_X2_
/* 8001FC80 0001CBC0  7C 7F 1B 79 */	or. r31, r3, r3
/* 8001FC84 0001CBC4  40 82 00 0C */	bne lbl_8001FC90
/* 8001FC88 0001CBC8  38 60 FF FF */	li r3, -1
/* 8001FC8C 0001CBCC  48 00 00 1C */	b lbl_8001FCA8
lbl_8001FC90:
/* 8001FC90 0001CBD0  48 00 1A 65 */	bl fpcLy_CurrentLayer
/* 8001FC94 0001CBD4  7F A4 EB 78 */	mr r4, r29
/* 8001FC98 0001CBD8  7F C5 F3 78 */	mr r5, r30
/* 8001FC9C 0001CBDC  38 C0 00 00 */	li r6, 0
/* 8001FCA0 0001CBE0  7F E7 FB 78 */	mr r7, r31
/* 8001FCA4 0001CBE4  48 00 40 F1 */	bl fpcSCtRq_Request
lbl_8001FCA8:
/* 8001FCA8 0001CBE8  39 61 00 20 */	addi r11, r1, 0x20
/* 8001FCAC 0001CBEC  48 34 25 7D */	bl _restgpr_29
/* 8001FCB0 0001CBF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8001FCB4 0001CBF4  7C 08 03 A6 */	mtlr r0
/* 8001FCB8 0001CBF8  38 21 00 20 */	addi r1, r1, 0x20
/* 8001FCBC 0001CBFC  4E 80 00 20 */	blr 

.global fop_Timer_create
fop_Timer_create:
/* 8001FCC0 0001CC00  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001FCC4 0001CC04  7C 08 02 A6 */	mflr r0
/* 8001FCC8 0001CC08  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001FCCC 0001CC0C  39 61 00 20 */	addi r11, r1, 0x20
/* 8001FCD0 0001CC10  48 34 25 0D */	bl _savegpr_29
/* 8001FCD4 0001CC14  7C 7D 1B 78 */	mr r29, r3
/* 8001FCD8 0001CC18  7D 1E 43 78 */	mr r30, r8
/* 8001FCDC 0001CC1C  54 83 06 3E */	clrlwi r3, r4, 0x18
/* 8001FCE0 0001CC20  7C A4 2B 78 */	mr r4, r5
/* 8001FCE4 0001CC24  7C C5 33 78 */	mr r5, r6
/* 8001FCE8 0001CC28  7C E6 3B 78 */	mr r6, r7
/* 8001FCEC 0001CC2C  38 E0 FF FF */	li r7, -1
/* 8001FCF0 0001CC30  4B FF FE 61 */	bl createTimerAppend
/* 8001FCF4 0001CC34  7C 7F 1B 79 */	or. r31, r3, r3
/* 8001FCF8 0001CC38  40 82 00 0C */	bne lbl_8001FD04
/* 8001FCFC 0001CC3C  38 60 FF FF */	li r3, -1
/* 8001FD00 0001CC40  48 00 00 1C */	b lbl_8001FD1C
lbl_8001FD04:
/* 8001FD04 0001CC44  48 00 19 F1 */	bl fpcLy_CurrentLayer
/* 8001FD08 0001CC48  7F A4 EB 78 */	mr r4, r29
/* 8001FD0C 0001CC4C  7F C5 F3 78 */	mr r5, r30
/* 8001FD10 0001CC50  38 C0 00 00 */	li r6, 0
/* 8001FD14 0001CC54  7F E7 FB 78 */	mr r7, r31
/* 8001FD18 0001CC58  48 00 40 7D */	bl fpcSCtRq_Request
lbl_8001FD1C:
/* 8001FD1C 0001CC5C  39 61 00 20 */	addi r11, r1, 0x20
/* 8001FD20 0001CC60  48 34 25 09 */	bl _restgpr_29
/* 8001FD24 0001CC64  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8001FD28 0001CC68  7C 08 03 A6 */	mtlr r0
/* 8001FD2C 0001CC6C  38 21 00 20 */	addi r1, r1, 0x20
/* 8001FD30 0001CC70  4E 80 00 20 */	blr 

.global fopMsgM_messageSet
fopMsgM_messageSet:
/* 8001FD34 0001CC74  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8001FD38 0001CC78  7C 08 02 A6 */	mflr r0
/* 8001FD3C 0001CC7C  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001FD40 0001CC80  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FD44 0001CC84  48 34 24 95 */	bl _savegpr_28
/* 8001FD48 0001CC88  7C 7C 1B 78 */	mr r28, r3
/* 8001FD4C 0001CC8C  7C 9D 23 78 */	mr r29, r4
/* 8001FD50 0001CC90  7C BE 2B 78 */	mr r30, r5
/* 8001FD54 0001CC94  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8001FD58 0001CC98  3B E3 61 C0 */	addi r31, r3, lbl_804061C0@l
/* 8001FD5C 0001CC9C  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 8001FD60 0001CCA0  28 00 00 08 */	cmplwi r0, 8
/* 8001FD64 0001CCA4  40 82 00 14 */	bne lbl_8001FD78
/* 8001FD68 0001CCA8  3C 60 80 43 */	lis r3, lbl_80430188@ha
/* 8001FD6C 0001CCAC  38 63 01 88 */	addi r3, r3, lbl_80430188@l
/* 8001FD70 0001CCB0  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8001FD74 0001CCB4  48 1F F9 79 */	bl dMeter2_c_NS_emphasisButtonDelete
lbl_8001FD78:
/* 8001FD78 0001CCB8  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 8001FD7C 0001CCBC  28 00 00 00 */	cmplwi r0, 0
/* 8001FD80 0001CCC0  41 82 00 2C */	beq lbl_8001FDAC
/* 8001FD84 0001CCC4  28 00 00 05 */	cmplwi r0, 5
/* 8001FD88 0001CCC8  41 82 00 24 */	beq lbl_8001FDAC
/* 8001FD8C 0001CCCC  28 00 00 02 */	cmplwi r0, 2
/* 8001FD90 0001CCD0  41 82 00 1C */	beq lbl_8001FDAC
/* 8001FD94 0001CCD4  28 00 00 03 */	cmplwi r0, 3
/* 8001FD98 0001CCD8  41 82 00 14 */	beq lbl_8001FDAC
/* 8001FD9C 0001CCDC  28 00 00 01 */	cmplwi r0, 1
/* 8001FDA0 0001CCE0  41 82 00 0C */	beq lbl_8001FDAC
/* 8001FDA4 0001CCE4  38 60 FF FF */	li r3, -1
/* 8001FDA8 0001CCE8  48 00 00 C4 */	b lbl_8001FE6C
lbl_8001FDAC:
/* 8001FDAC 0001CCEC  38 00 00 FF */	li r0, 0xff
/* 8001FDB0 0001CCF0  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8001FDB4 0001CCF4  38 63 61 C0 */	addi r3, r3, lbl_804061C0@l
/* 8001FDB8 0001CCF8  98 03 5E 7C */	stb r0, 0x5e7c(r3)
/* 8001FDBC 0001CCFC  38 00 FF FF */	li r0, -1
/* 8001FDC0 0001CD00  90 03 5E E8 */	stw r0, 0x5ee8(r3)
/* 8001FDC4 0001CD04  28 1D 00 00 */	cmplwi r29, 0
/* 8001FDC8 0001CD08  41 82 00 20 */	beq lbl_8001FDE8
/* 8001FDCC 0001CD0C  C0 1D 05 38 */	lfs f0, 0x538(r29)
/* 8001FDD0 0001CD10  D0 01 00 08 */	stfs f0, 8(r1)
/* 8001FDD4 0001CD14  C0 1D 05 3C */	lfs f0, 0x53c(r29)
/* 8001FDD8 0001CD18  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FDDC 0001CD1C  C0 1D 05 40 */	lfs f0, 0x540(r29)
/* 8001FDE0 0001CD20  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FDE4 0001CD24  48 00 00 14 */	b lbl_8001FDF8
lbl_8001FDE8:
/* 8001FDE8 0001CD28  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 8001FDEC 0001CD2C  D0 01 00 08 */	stfs f0, 8(r1)
/* 8001FDF0 0001CD30  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FDF4 0001CD34  D0 01 00 10 */	stfs f0, 0x10(r1)
lbl_8001FDF8:
/* 8001FDF8 0001CD38  3C 60 80 43 */	lis r3, lbl_8043028C@ha
/* 8001FDFC 0001CD3C  38 63 02 8C */	addi r3, r3, lbl_8043028C@l
/* 8001FE00 0001CD40  88 03 03 1F */	lbz r0, 0x31f(r3)
/* 8001FE04 0001CD44  28 00 00 01 */	cmplwi r0, 1
/* 8001FE08 0001CD48  40 82 00 08 */	bne lbl_8001FE10
/* 8001FE0C 0001CD4C  AB 83 02 F4 */	lha r28, 0x2f4(r3)
lbl_8001FE10:
/* 8001FE10 0001CD50  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8001FE14 0001CD54  4B FF FC 11 */	bl fopMsgM_SearchByID
/* 8001FE18 0001CD58  28 03 00 00 */	cmplwi r3, 0
/* 8001FE1C 0001CD5C  41 82 00 4C */	beq lbl_8001FE68
/* 8001FE20 0001CD60  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 8001FE24 0001CD64  28 00 00 01 */	cmplwi r0, 1
/* 8001FE28 0001CD68  40 82 00 40 */	bne lbl_8001FE68
/* 8001FE2C 0001CD6C  C0 01 00 08 */	lfs f0, 8(r1)
/* 8001FE30 0001CD70  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 8001FE34 0001CD74  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8001FE38 0001CD78  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 8001FE3C 0001CD7C  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8001FE40 0001CD80  D0 03 00 E8 */	stfs f0, 0xe8(r3)
/* 8001FE44 0001CD84  93 83 00 EC */	stw r28, 0xec(r3)
/* 8001FE48 0001CD88  93 C3 00 F0 */	stw r30, 0xf0(r3)
/* 8001FE4C 0001CD8C  93 A3 00 DC */	stw r29, 0xdc(r3)
/* 8001FE50 0001CD90  7F 84 E3 78 */	mr r4, r28
/* 8001FE54 0001CD94  7F C5 F3 78 */	mr r5, r30
/* 8001FE58 0001CD98  38 C0 00 00 */	li r6, 0
/* 8001FE5C 0001CD9C  48 21 3E A9 */	bl dMsgObject_c_NS_setMessageIndex
/* 8001FE60 0001CDA0  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8001FE64 0001CDA4  48 00 00 08 */	b lbl_8001FE6C
lbl_8001FE68:
/* 8001FE68 0001CDA8  38 60 00 00 */	li r3, 0
lbl_8001FE6C:
/* 8001FE6C 0001CDAC  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FE70 0001CDB0  48 34 23 B5 */	bl _restgpr_28
/* 8001FE74 0001CDB4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8001FE78 0001CDB8  7C 08 03 A6 */	mtlr r0
/* 8001FE7C 0001CDBC  38 21 00 30 */	addi r1, r1, 0x30
/* 8001FE80 0001CDC0  4E 80 00 20 */	blr 

.global fopMsgM_messageSet_X1_
fopMsgM_messageSet_X1_:
/* 8001FE84 0001CDC4  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8001FE88 0001CDC8  7C 08 02 A6 */	mflr r0
/* 8001FE8C 0001CDCC  90 01 00 34 */	stw r0, 0x34(r1)
/* 8001FE90 0001CDD0  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FE94 0001CDD4  48 34 23 49 */	bl _savegpr_29
/* 8001FE98 0001CDD8  7C 7D 1B 78 */	mr r29, r3
/* 8001FE9C 0001CDDC  7C 9E 23 78 */	mr r30, r4
/* 8001FEA0 0001CDE0  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8001FEA4 0001CDE4  3B E3 61 C0 */	addi r31, r3, lbl_804061C0@l
/* 8001FEA8 0001CDE8  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 8001FEAC 0001CDEC  28 00 00 08 */	cmplwi r0, 8
/* 8001FEB0 0001CDF0  40 82 00 14 */	bne lbl_8001FEC4
/* 8001FEB4 0001CDF4  3C 60 80 43 */	lis r3, lbl_80430188@ha
/* 8001FEB8 0001CDF8  38 63 01 88 */	addi r3, r3, lbl_80430188@l
/* 8001FEBC 0001CDFC  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 8001FEC0 0001CE00  48 1F F8 2D */	bl dMeter2_c_NS_emphasisButtonDelete
lbl_8001FEC4:
/* 8001FEC4 0001CE04  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 8001FEC8 0001CE08  28 00 00 00 */	cmplwi r0, 0
/* 8001FECC 0001CE0C  41 82 00 2C */	beq lbl_8001FEF8
/* 8001FED0 0001CE10  28 00 00 05 */	cmplwi r0, 5
/* 8001FED4 0001CE14  41 82 00 24 */	beq lbl_8001FEF8
/* 8001FED8 0001CE18  28 00 00 02 */	cmplwi r0, 2
/* 8001FEDC 0001CE1C  41 82 00 1C */	beq lbl_8001FEF8
/* 8001FEE0 0001CE20  28 00 00 03 */	cmplwi r0, 3
/* 8001FEE4 0001CE24  41 82 00 14 */	beq lbl_8001FEF8
/* 8001FEE8 0001CE28  28 00 00 01 */	cmplwi r0, 1
/* 8001FEEC 0001CE2C  41 82 00 0C */	beq lbl_8001FEF8
/* 8001FEF0 0001CE30  38 60 FF FF */	li r3, -1
/* 8001FEF4 0001CE34  48 00 00 B8 */	b lbl_8001FFAC
lbl_8001FEF8:
/* 8001FEF8 0001CE38  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 8001FEFC 0001CE3C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 8001FF00 0001CE40  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 8001FF04 0001CE44  D0 01 00 08 */	stfs f0, 8(r1)
/* 8001FF08 0001CE48  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8001FF0C 0001CE4C  4B FF FB 19 */	bl fopMsgM_SearchByID
/* 8001FF10 0001CE50  7C 7F 1B 79 */	or. r31, r3, r3
/* 8001FF14 0001CE54  41 82 00 94 */	beq lbl_8001FFA8
/* 8001FF18 0001CE58  A0 1F 00 F8 */	lhz r0, 0xf8(r31)
/* 8001FF1C 0001CE5C  28 00 00 01 */	cmplwi r0, 1
/* 8001FF20 0001CE60  40 82 00 50 */	bne lbl_8001FF70
/* 8001FF24 0001CE64  C0 01 00 08 */	lfs f0, 8(r1)
/* 8001FF28 0001CE68  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 8001FF2C 0001CE6C  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8001FF30 0001CE70  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8001FF34 0001CE74  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8001FF38 0001CE78  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8001FF3C 0001CE7C  93 BF 00 EC */	stw r29, 0xec(r31)
/* 8001FF40 0001CE80  93 DF 00 F0 */	stw r30, 0xf0(r31)
/* 8001FF44 0001CE84  38 00 00 00 */	li r0, 0
/* 8001FF48 0001CE88  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8001FF4C 0001CE8C  38 60 00 00 */	li r3, 0
/* 8001FF50 0001CE90  48 21 7B 25 */	bl dMsgObject_c_NS_setTalkPartner
/* 8001FF54 0001CE94  7F E3 FB 78 */	mr r3, r31
/* 8001FF58 0001CE98  7F A4 EB 78 */	mr r4, r29
/* 8001FF5C 0001CE9C  7F C5 F3 78 */	mr r5, r30
/* 8001FF60 0001CEA0  38 C0 00 00 */	li r6, 0
/* 8001FF64 0001CEA4  48 21 3D A1 */	bl dMsgObject_c_NS_setMessageIndex
/* 8001FF68 0001CEA8  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8001FF6C 0001CEAC  48 00 00 40 */	b lbl_8001FFAC
lbl_8001FF70:
/* 8001FF70 0001CEB0  28 00 00 0F */	cmplwi r0, 0xf
/* 8001FF74 0001CEB4  40 82 00 34 */	bne lbl_8001FFA8
/* 8001FF78 0001CEB8  C0 01 00 08 */	lfs f0, 8(r1)
/* 8001FF7C 0001CEBC  D0 1F 00 E0 */	stfs f0, 0xe0(r31)
/* 8001FF80 0001CEC0  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 8001FF84 0001CEC4  D0 1F 00 E4 */	stfs f0, 0xe4(r31)
/* 8001FF88 0001CEC8  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 8001FF8C 0001CECC  D0 1F 00 E8 */	stfs f0, 0xe8(r31)
/* 8001FF90 0001CED0  93 BF 00 EC */	stw r29, 0xec(r31)
/* 8001FF94 0001CED4  93 DF 00 F0 */	stw r30, 0xf0(r31)
/* 8001FF98 0001CED8  38 00 00 00 */	li r0, 0
/* 8001FF9C 0001CEDC  90 1F 00 DC */	stw r0, 0xdc(r31)
/* 8001FFA0 0001CEE0  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8001FFA4 0001CEE4  48 00 00 08 */	b lbl_8001FFAC
lbl_8001FFA8:
/* 8001FFA8 0001CEE8  38 60 00 00 */	li r3, 0
lbl_8001FFAC:
/* 8001FFAC 0001CEEC  39 61 00 30 */	addi r11, r1, 0x30
/* 8001FFB0 0001CEF0  48 34 22 79 */	bl _restgpr_29
/* 8001FFB4 0001CEF4  80 01 00 34 */	lwz r0, 0x34(r1)
/* 8001FFB8 0001CEF8  7C 08 03 A6 */	mtlr r0
/* 8001FFBC 0001CEFC  38 21 00 30 */	addi r1, r1, 0x30
/* 8001FFC0 0001CF00  4E 80 00 20 */	blr 

.global fopMsgM_messageSetDemo
fopMsgM_messageSetDemo:
/* 8001FFC4 0001CF04  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8001FFC8 0001CF08  7C 08 02 A6 */	mflr r0
/* 8001FFCC 0001CF0C  90 01 00 24 */	stw r0, 0x24(r1)
/* 8001FFD0 0001CF10  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 8001FFD4 0001CF14  93 C1 00 18 */	stw r30, 0x18(r1)
/* 8001FFD8 0001CF18  7C 7E 1B 78 */	mr r30, r3
/* 8001FFDC 0001CF1C  48 21 80 BD */	bl dMsgObject_c_NS_endFlowGroup
/* 8001FFE0 0001CF20  3C 60 80 40 */	lis r3, lbl_804061C0@ha
/* 8001FFE4 0001CF24  3B E3 61 C0 */	addi r31, r3, lbl_804061C0@l
/* 8001FFE8 0001CF28  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 8001FFEC 0001CF2C  28 00 00 08 */	cmplwi r0, 8
/* 8001FFF0 0001CF30  40 82 00 14 */	bne lbl_80020004
/* 8001FFF4 0001CF34  3C 60 80 43 */	lis r3, lbl_80430188@ha
/* 8001FFF8 0001CF38  38 63 01 88 */	addi r3, r3, lbl_80430188@l
/* 8001FFFC 0001CF3C  80 63 00 1C */	lwz r3, 0x1c(r3)
/* 80020000 0001CF40  48 1F F6 ED */	bl dMeter2_c_NS_emphasisButtonDelete
lbl_80020004:
/* 80020004 0001CF44  88 1F 5E 8F */	lbz r0, 0x5e8f(r31)
/* 80020008 0001CF48  28 00 00 00 */	cmplwi r0, 0
/* 8002000C 0001CF4C  41 82 00 2C */	beq lbl_80020038
/* 80020010 0001CF50  28 00 00 05 */	cmplwi r0, 5
/* 80020014 0001CF54  41 82 00 24 */	beq lbl_80020038
/* 80020018 0001CF58  28 00 00 02 */	cmplwi r0, 2
/* 8002001C 0001CF5C  41 82 00 1C */	beq lbl_80020038
/* 80020020 0001CF60  28 00 00 03 */	cmplwi r0, 3
/* 80020024 0001CF64  41 82 00 14 */	beq lbl_80020038
/* 80020028 0001CF68  28 00 00 01 */	cmplwi r0, 1
/* 8002002C 0001CF6C  41 82 00 0C */	beq lbl_80020038
/* 80020030 0001CF70  38 60 FF FF */	li r3, -1
/* 80020034 0001CF74  48 00 00 74 */	b lbl_800200A8
lbl_80020038:
/* 80020038 0001CF78  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 8002003C 0001CF7C  D0 01 00 10 */	stfs f0, 0x10(r1)
/* 80020040 0001CF80  D0 01 00 0C */	stfs f0, 0xc(r1)
/* 80020044 0001CF84  D0 01 00 08 */	stfs f0, 8(r1)
/* 80020048 0001CF88  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 8002004C 0001CF8C  4B FF F9 D9 */	bl fopMsgM_SearchByID
/* 80020050 0001CF90  28 03 00 00 */	cmplwi r3, 0
/* 80020054 0001CF94  41 82 00 50 */	beq lbl_800200A4
/* 80020058 0001CF98  A0 03 00 F8 */	lhz r0, 0xf8(r3)
/* 8002005C 0001CF9C  28 00 00 01 */	cmplwi r0, 1
/* 80020060 0001CFA0  40 82 00 44 */	bne lbl_800200A4
/* 80020064 0001CFA4  C0 01 00 08 */	lfs f0, 8(r1)
/* 80020068 0001CFA8  D0 03 00 E0 */	stfs f0, 0xe0(r3)
/* 8002006C 0001CFAC  C0 01 00 0C */	lfs f0, 0xc(r1)
/* 80020070 0001CFB0  D0 03 00 E4 */	stfs f0, 0xe4(r3)
/* 80020074 0001CFB4  C0 01 00 10 */	lfs f0, 0x10(r1)
/* 80020078 0001CFB8  D0 03 00 E8 */	stfs f0, 0xe8(r3)
/* 8002007C 0001CFBC  93 C3 00 EC */	stw r30, 0xec(r3)
/* 80020080 0001CFC0  38 00 03 E8 */	li r0, 0x3e8
/* 80020084 0001CFC4  90 03 00 F0 */	stw r0, 0xf0(r3)
/* 80020088 0001CFC8  38 00 00 00 */	li r0, 0
/* 8002008C 0001CFCC  90 03 00 DC */	stw r0, 0xdc(r3)
/* 80020090 0001CFD0  7F C4 F3 78 */	mr r4, r30
/* 80020094 0001CFD4  38 A0 00 00 */	li r5, 0
/* 80020098 0001CFD8  48 21 3D D9 */	bl dMsgObject_c_NS_setMessageIndexDemo
/* 8002009C 0001CFDC  80 6D 80 48 */	lwz r3, lbl_804505C8-_SDA_BASE_(r13)
/* 800200A0 0001CFE0  48 00 00 08 */	b lbl_800200A8
lbl_800200A4:
/* 800200A4 0001CFE4  38 60 00 00 */	li r3, 0
lbl_800200A8:
/* 800200A8 0001CFE8  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 800200AC 0001CFEC  83 C1 00 18 */	lwz r30, 0x18(r1)
/* 800200B0 0001CFF0  80 01 00 24 */	lwz r0, 0x24(r1)
/* 800200B4 0001CFF4  7C 08 03 A6 */	mtlr r0
/* 800200B8 0001CFF8  38 21 00 20 */	addi r1, r1, 0x20
/* 800200BC 0001CFFC  4E 80 00 20 */	blr 

.global fopMsgM_messageGet
fopMsgM_messageGet:
/* 800200C0 0001D000  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800200C4 0001D004  7C 08 02 A6 */	mflr r0
/* 800200C8 0001D008  90 01 00 14 */	stw r0, 0x14(r1)
/* 800200CC 0001D00C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800200D0 0001D010  7C 7F 1B 78 */	mr r31, r3
/* 800200D4 0001D014  3C 60 80 43 */	lis r3, lbl_80430188@ha
/* 800200D8 0001D018  38 63 01 88 */	addi r3, r3, lbl_80430188@l
/* 800200DC 0001D01C  7F E5 FB 78 */	mr r5, r31
/* 800200E0 0001D020  38 C0 00 00 */	li r6, 0
/* 800200E4 0001D024  48 1F C1 6D */	bl dMeter2Info_c_NS_getString
/* 800200E8 0001D028  7F E3 FB 78 */	mr r3, r31
/* 800200EC 0001D02C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800200F0 0001D030  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800200F4 0001D034  7C 08 03 A6 */	mtlr r0
/* 800200F8 0001D038  38 21 00 10 */	addi r1, r1, 0x10
/* 800200FC 0001D03C  4E 80 00 20 */	blr 

.global fopMsgM_setMessageID
fopMsgM_setMessageID:
/* 80020100 0001D040  90 6D 80 48 */	stw r3, lbl_804505C8-_SDA_BASE_(r13)
/* 80020104 0001D044  4E 80 00 20 */	blr 

.global fopMsgM_Create
fopMsgM_Create:
/* 80020108 0001D048  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 8002010C 0001D04C  7C 08 02 A6 */	mflr r0
/* 80020110 0001D050  90 01 00 24 */	stw r0, 0x24(r1)
/* 80020114 0001D054  39 61 00 20 */	addi r11, r1, 0x20
/* 80020118 0001D058  48 34 20 C5 */	bl _savegpr_29
/* 8002011C 0001D05C  7C 7D 1B 78 */	mr r29, r3
/* 80020120 0001D060  7C 9E 23 78 */	mr r30, r4
/* 80020124 0001D064  7C BF 2B 78 */	mr r31, r5
/* 80020128 0001D068  48 00 15 CD */	bl fpcLy_CurrentLayer
/* 8002012C 0001D06C  7F A4 EB 78 */	mr r4, r29
/* 80020130 0001D070  7F C5 F3 78 */	mr r5, r30
/* 80020134 0001D074  38 C0 00 00 */	li r6, 0
/* 80020138 0001D078  7F E7 FB 78 */	mr r7, r31
/* 8002013C 0001D07C  48 00 3C 59 */	bl fpcSCtRq_Request
/* 80020140 0001D080  39 61 00 20 */	addi r11, r1, 0x20
/* 80020144 0001D084  48 34 20 E5 */	bl _restgpr_29
/* 80020148 0001D088  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002014C 0001D08C  7C 08 03 A6 */	mtlr r0
/* 80020150 0001D090  38 21 00 20 */	addi r1, r1, 0x20
/* 80020154 0001D094  4E 80 00 20 */	blr 
/* 80020158 0001D098  98 83 00 B2 */	stb r4, 0xb2(r3)
/* 8002015C 0001D09C  4E 80 00 20 */	blr 

.global fopMsgM_valueIncrease
fopMsgM_valueIncrease:
/* 80020160 0001D0A0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80020164 0001D0A4  2C 03 00 00 */	cmpwi r3, 0
/* 80020168 0001D0A8  41 81 00 0C */	bgt lbl_80020174
/* 8002016C 0001D0AC  C0 22 82 78 */	lfs f1, lbl_80451C78-_SDA2_BASE_(r2)
/* 80020170 0001D0B0  48 00 01 54 */	b lbl_800202C4
lbl_80020174:
/* 80020174 0001D0B4  2C 04 00 00 */	cmpwi r4, 0
/* 80020178 0001D0B8  40 80 00 0C */	bge lbl_80020184
/* 8002017C 0001D0BC  38 80 00 00 */	li r4, 0
/* 80020180 0001D0C0  48 00 00 10 */	b lbl_80020190
lbl_80020184:
/* 80020184 0001D0C4  7C 04 18 00 */	cmpw r4, r3
/* 80020188 0001D0C8  40 81 00 08 */	ble lbl_80020190
/* 8002018C 0001D0CC  7C 64 1B 78 */	mr r4, r3
lbl_80020190:
/* 80020190 0001D0D0  C8 42 82 88 */	lfd f2, lbl_80451C88-_SDA2_BASE_(r2)
/* 80020194 0001D0D4  6C 80 80 00 */	xoris r0, r4, 0x8000
/* 80020198 0001D0D8  90 01 00 0C */	stw r0, 0xc(r1)
/* 8002019C 0001D0DC  3C 80 43 30 */	lis r4, 0x4330
/* 800201A0 0001D0E0  90 81 00 08 */	stw r4, 8(r1)
/* 800201A4 0001D0E4  C8 01 00 08 */	lfd f0, 8(r1)
/* 800201A8 0001D0E8  EC 20 10 28 */	fsubs f1, f0, f2
/* 800201AC 0001D0EC  6C 60 80 00 */	xoris r0, r3, 0x8000
/* 800201B0 0001D0F0  90 01 00 14 */	stw r0, 0x14(r1)
/* 800201B4 0001D0F4  90 81 00 10 */	stw r4, 0x10(r1)
/* 800201B8 0001D0F8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 800201BC 0001D0FC  EC 00 10 28 */	fsubs f0, f0, f2
/* 800201C0 0001D100  EC 61 00 24 */	fdivs f3, f1, f0
/* 800201C4 0001D104  54 A0 06 3E */	clrlwi r0, r5, 0x18
/* 800201C8 0001D108  28 00 00 06 */	cmplwi r0, 6
/* 800201CC 0001D10C  41 81 00 48 */	bgt lbl_80020214
/* 800201D0 0001D110  3C 60 80 3A */	lis r3, lbl_803A3970@ha
/* 800201D4 0001D114  38 63 39 70 */	addi r3, r3, lbl_803A3970@l
/* 800201D8 0001D118  54 00 10 3A */	slwi r0, r0, 2
/* 800201DC 0001D11C  7C 03 00 2E */	lwzx r0, r3, r0
/* 800201E0 0001D120  7C 09 03 A6 */	mtctr r0
/* 800201E4 0001D124  4E 80 04 20 */	bctr 
/* 800201E8 0001D128  EC 23 00 F2 */	fmuls f1, f3, f3
/* 800201EC 0001D12C  48 00 00 D8 */	b lbl_800202C4
/* 800201F0 0001D130  C0 02 82 70 */	lfs f0, lbl_80451C70-_SDA2_BASE_(r2)
/* 800201F4 0001D134  FC 03 00 40 */	fcmpo cr0, f3, f0
/* 800201F8 0001D138  40 81 00 10 */	ble lbl_80020208
/* 800201FC 0001D13C  FC 00 18 34 */	frsqrte f0, f3
/* 80020200 0001D140  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80020204 0001D144  48 00 00 08 */	b lbl_8002020C
lbl_80020208:
/* 80020208 0001D148  FC 00 18 90 */	fmr f0, f3
lbl_8002020C:
/* 8002020C 0001D14C  FC 20 00 90 */	fmr f1, f0
/* 80020210 0001D150  48 00 00 B4 */	b lbl_800202C4
lbl_80020214:
/* 80020214 0001D154  FC 20 18 90 */	fmr f1, f3
/* 80020218 0001D158  48 00 00 AC */	b lbl_800202C4
/* 8002021C 0001D15C  C0 42 82 7C */	lfs f2, lbl_80451C7C-_SDA2_BASE_(r2)
/* 80020220 0001D160  EC 02 00 F2 */	fmuls f0, f2, f3
/* 80020224 0001D164  C0 22 82 78 */	lfs f1, lbl_80451C78-_SDA2_BASE_(r2)
/* 80020228 0001D168  EC 00 08 28 */	fsubs f0, f0, f1
/* 8002022C 0001D16C  EC 02 00 32 */	fmuls f0, f2, f0
/* 80020230 0001D170  EC 20 08 28 */	fsubs f1, f0, f1
/* 80020234 0001D174  48 00 00 90 */	b lbl_800202C4
/* 80020238 0001D178  C0 22 82 74 */	lfs f1, lbl_80451C74-_SDA2_BASE_(r2)
/* 8002023C 0001D17C  C0 02 82 80 */	lfs f0, lbl_80451C80-_SDA2_BASE_(r2)
/* 80020240 0001D180  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80020244 0001D184  EC 01 00 32 */	fmuls f0, f1, f0
/* 80020248 0001D188  FC 00 00 1E */	fctiwz f0, f0
/* 8002024C 0001D18C  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80020250 0001D190  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80020254 0001D194  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 80020258 0001D198  3C 60 80 44 */	lis r3, lbl_80439A20@ha
/* 8002025C 0001D19C  38 63 9A 20 */	addi r3, r3, lbl_80439A20@l
/* 80020260 0001D1A0  7C 03 04 2E */	lfsx f0, r3, r0
/* 80020264 0001D1A4  EC 20 00 32 */	fmuls f1, f0, f0
/* 80020268 0001D1A8  48 00 00 5C */	b lbl_800202C4
/* 8002026C 0001D1AC  C0 22 82 74 */	lfs f1, lbl_80451C74-_SDA2_BASE_(r2)
/* 80020270 0001D1B0  C0 02 82 84 */	lfs f0, lbl_80451C84-_SDA2_BASE_(r2)
/* 80020274 0001D1B4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 80020278 0001D1B8  EC 01 00 32 */	fmuls f0, f1, f0
/* 8002027C 0001D1BC  FC 00 00 1E */	fctiwz f0, f0
/* 80020280 0001D1C0  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 80020284 0001D1C4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80020288 0001D1C8  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 8002028C 0001D1CC  3C 60 80 44 */	lis r3, lbl_80439A20@ha
/* 80020290 0001D1D0  38 63 9A 20 */	addi r3, r3, lbl_80439A20@l
/* 80020294 0001D1D4  7C 03 04 2E */	lfsx f0, r3, r0
/* 80020298 0001D1D8  EC 20 00 32 */	fmuls f1, f0, f0
/* 8002029C 0001D1DC  48 00 00 28 */	b lbl_800202C4
/* 800202A0 0001D1E0  C0 02 82 80 */	lfs f0, lbl_80451C80-_SDA2_BASE_(r2)
/* 800202A4 0001D1E4  EC 00 00 F2 */	fmuls f0, f0, f3
/* 800202A8 0001D1E8  FC 00 00 1E */	fctiwz f0, f0
/* 800202AC 0001D1EC  D8 01 00 10 */	stfd f0, 0x10(r1)
/* 800202B0 0001D1F0  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800202B4 0001D1F4  54 00 04 38 */	rlwinm r0, r0, 0, 0x10, 0x1c
/* 800202B8 0001D1F8  3C 60 80 44 */	lis r3, lbl_80439A20@ha
/* 800202BC 0001D1FC  38 63 9A 20 */	addi r3, r3, lbl_80439A20@l
/* 800202C0 0001D200  7C 23 04 2E */	lfsx f1, r3, r0
lbl_800202C4:
/* 800202C4 0001D204  38 21 00 20 */	addi r1, r1, 0x20
/* 800202C8 0001D208  4E 80 00 20 */	blr 
/* 800202CC 0001D20C  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800202D0 0001D210  7C 08 02 A6 */	mflr r0
/* 800202D4 0001D214  90 01 00 24 */	stw r0, 0x24(r1)
/* 800202D8 0001D218  DB E1 00 18 */	stfd f31, 0x18(r1)
/* 800202DC 0001D21C  DB C1 00 10 */	stfd f30, 0x10(r1)
/* 800202E0 0001D220  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800202E4 0001D224  7C 7F 1B 78 */	mr r31, r3
/* 800202E8 0001D228  FF C0 08 90 */	fmr f30, f1
/* 800202EC 0001D22C  FF E0 10 90 */	fmr f31, f2
/* 800202F0 0001D230  81 83 00 00 */	lwz r12, 0(r3)
/* 800202F4 0001D234  81 8C 01 08 */	lwz r12, 0x108(r12)
/* 800202F8 0001D238  7D 89 03 A6 */	mtctr r12
/* 800202FC 0001D23C  4E 80 04 21 */	bctrl 
/* 80020300 0001D240  7F E3 FB 78 */	mr r3, r31
/* 80020304 0001D244  FC 20 F0 90 */	fmr f1, f30
/* 80020308 0001D248  FC 40 F8 90 */	fmr f2, f31
/* 8002030C 0001D24C  81 9F 00 00 */	lwz r12, 0(r31)
/* 80020310 0001D250  81 8C 01 0C */	lwz r12, 0x10c(r12)
/* 80020314 0001D254  7D 89 03 A6 */	mtctr r12
/* 80020318 0001D258  4E 80 04 21 */	bctrl 
/* 8002031C 0001D25C  CB E1 00 18 */	lfd f31, 0x18(r1)
/* 80020320 0001D260  CB C1 00 10 */	lfd f30, 0x10(r1)
/* 80020324 0001D264  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80020328 0001D268  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8002032C 0001D26C  7C 08 03 A6 */	mtlr r0
/* 80020330 0001D270  38 21 00 20 */	addi r1, r1, 0x20
/* 80020334 0001D274  4E 80 00 20 */	blr 
/* 80020338 0001D278  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002033C 0001D27C  7C 08 02 A6 */	mflr r0
/* 80020340 0001D280  90 01 00 14 */	stw r0, 0x14(r1)
/* 80020344 0001D284  88 A3 01 08 */	lbz r5, 0x108(r3)
/* 80020348 0001D288  81 83 00 00 */	lwz r12, 0(r3)
/* 8002034C 0001D28C  81 8C 00 CC */	lwz r12, 0xcc(r12)
/* 80020350 0001D290  7D 89 03 A6 */	mtctr r12
/* 80020354 0001D294  4E 80 04 21 */	bctrl 
/* 80020358 0001D298  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8002035C 0001D29C  7C 08 03 A6 */	mtlr r0
/* 80020360 0001D2A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80020364 0001D2A4  4E 80 00 20 */	blr 
/* 80020368 0001D2A8  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 8002036C 0001D2AC  7C 08 02 A6 */	mflr r0
/* 80020370 0001D2B0  90 01 00 14 */	stw r0, 0x14(r1)
/* 80020374 0001D2B4  7C A6 2B 78 */	mr r6, r5
/* 80020378 0001D2B8  38 A0 00 00 */	li r5, 0
/* 8002037C 0001D2BC  81 83 00 00 */	lwz r12, 0(r3)
/* 80020380 0001D2C0  81 8C 00 D0 */	lwz r12, 0xd0(r12)
/* 80020384 0001D2C4  7D 89 03 A6 */	mtctr r12
/* 80020388 0001D2C8  4E 80 04 21 */	bctrl 
/* 8002038C 0001D2CC  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80020390 0001D2D0  7C 08 03 A6 */	mtlr r0
/* 80020394 0001D2D4  38 21 00 10 */	addi r1, r1, 0x10
/* 80020398 0001D2D8  4E 80 00 20 */	blr 

.global fopMsgM_createExpHeap
fopMsgM_createExpHeap:
/* 8002039C 0001D2DC  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800203A0 0001D2E0  7C 08 02 A6 */	mflr r0
/* 800203A4 0001D2E4  90 01 00 14 */	stw r0, 0x14(r1)
/* 800203A8 0001D2E8  93 E1 00 0C */	stw r31, 0xc(r1)
/* 800203AC 0001D2EC  7C 7F 1B 78 */	mr r31, r3
/* 800203B0 0001D2F0  28 04 00 00 */	cmplwi r4, 0
/* 800203B4 0001D2F4  40 82 00 0C */	bne lbl_800203C0
/* 800203B8 0001D2F8  4B FE E9 99 */	bl mDoExt_getGameHeap
/* 800203BC 0001D2FC  7C 64 1B 78 */	mr r4, r3
lbl_800203C0:
/* 800203C0 0001D300  7F E3 FB 78 */	mr r3, r31
/* 800203C4 0001D304  38 A0 00 00 */	li r5, 0
/* 800203C8 0001D308  48 2A EA 65 */	bl create__10JKRExpHeapFUlP7JKRHeapb
/* 800203CC 0001D30C  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 800203D0 0001D310  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800203D4 0001D314  7C 08 03 A6 */	mtlr r0
/* 800203D8 0001D318  38 21 00 10 */	addi r1, r1, 0x10
/* 800203DC 0001D31C  4E 80 00 20 */	blr 

.global fopMsgM_destroyExpHeap
fopMsgM_destroyExpHeap:
/* 800203E0 0001D320  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 800203E4 0001D324  7C 08 02 A6 */	mflr r0
/* 800203E8 0001D328  90 01 00 14 */	stw r0, 0x14(r1)
/* 800203EC 0001D32C  48 2A E0 5D */	bl destroy__7JKRHeapFv
/* 800203F0 0001D330  80 01 00 14 */	lwz r0, 0x14(r1)
/* 800203F4 0001D334  7C 08 03 A6 */	mtlr r0
/* 800203F8 0001D338  38 21 00 10 */	addi r1, r1, 0x10
/* 800203FC 0001D33C  4E 80 00 20 */	blr 

