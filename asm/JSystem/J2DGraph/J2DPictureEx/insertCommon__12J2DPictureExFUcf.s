lbl_803040E4:
/* 803040E4  94 21 FF 60 */	stwu r1, -0xa0(r1)
/* 803040E8  7C 08 02 A6 */	mflr r0
/* 803040EC  90 01 00 A4 */	stw r0, 0xa4(r1)
/* 803040F0  DB E1 00 90 */	stfd f31, 0x90(r1)
/* 803040F4  F3 E1 00 98 */	psq_st f31, 152(r1), 0, 0 /* qr0 */
/* 803040F8  39 61 00 90 */	addi r11, r1, 0x90
/* 803040FC  48 05 E0 D1 */	bl _savegpr_25
/* 80304100  7C 7A 1B 78 */	mr r26, r3
/* 80304104  7C 9B 23 78 */	mr r27, r4
/* 80304108  FF E0 08 90 */	fmr f31, f1
/* 8030410C  80 63 01 50 */	lwz r3, 0x150(r3)
/* 80304110  80 03 00 28 */	lwz r0, 0x28(r3)
/* 80304114  54 1D 06 3E */	clrlwi r29, r0, 0x18
/* 80304118  80 63 00 70 */	lwz r3, 0x70(r3)
/* 8030411C  81 83 00 00 */	lwz r12, 0(r3)
/* 80304120  81 8C 00 18 */	lwz r12, 0x18(r12)
/* 80304124  7D 89 03 A6 */	mtctr r12
/* 80304128  4E 80 04 21 */	bctrl 
/* 8030412C  80 7A 01 50 */	lwz r3, 0x150(r26)
/* 80304130  80 63 00 70 */	lwz r3, 0x70(r3)
/* 80304134  81 83 00 00 */	lwz r12, 0(r3)
/* 80304138  81 8C 00 58 */	lwz r12, 0x58(r12)
/* 8030413C  7D 89 03 A6 */	mtctr r12
/* 80304140  4E 80 04 21 */	bctrl 
/* 80304144  54 63 06 3E */	clrlwi r3, r3, 0x18
/* 80304148  28 1D 00 01 */	cmplwi r29, 1
/* 8030414C  41 81 00 14 */	bgt lbl_80304160
/* 80304150  20 63 00 01 */	subfic r3, r3, 1
/* 80304154  30 03 FF FF */	addic r0, r3, -1
/* 80304158  7F 80 19 10 */	subfe r28, r0, r3
/* 8030415C  48 00 00 14 */	b lbl_80304170
lbl_80304160:
/* 80304160  38 1D 00 01 */	addi r0, r29, 1
/* 80304164  7C 63 00 50 */	subf r3, r3, r0
/* 80304168  30 03 FF FF */	addic r0, r3, -1
/* 8030416C  7F 80 19 10 */	subfe r28, r0, r3
lbl_80304170:
/* 80304170  7F 43 D3 78 */	mr r3, r26
/* 80304174  7F 64 DB 78 */	mr r4, r27
/* 80304178  FC 20 F8 90 */	fmr f1, f31
/* 8030417C  38 A0 00 01 */	li r5, 1
/* 80304180  38 C0 00 01 */	li r6, 1
/* 80304184  48 00 1C 3D */	bl shiftSetBlendRatio__12J2DPictureExFUcfbb
/* 80304188  7F 43 D3 78 */	mr r3, r26
/* 8030418C  7F 64 DB 78 */	mr r4, r27
/* 80304190  FC 20 F8 90 */	fmr f1, f31
/* 80304194  38 A0 00 00 */	li r5, 0
/* 80304198  38 C0 00 01 */	li r6, 1
/* 8030419C  48 00 1C 25 */	bl shiftSetBlendRatio__12J2DPictureExFUcfbb
/* 803041A0  80 7A 01 50 */	lwz r3, 0x150(r26)
/* 803041A4  3B DD 00 01 */	addi r30, r29, 1
/* 803041A8  57 DF 06 3E */	clrlwi r31, r30, 0x18
/* 803041AC  93 E3 00 28 */	stw r31, 0x28(r3)
/* 803041B0  38 DF FF FF */	addi r6, r31, -1
/* 803041B4  7C C7 33 78 */	mr r7, r6
/* 803041B8  57 7D 06 3E */	clrlwi r29, r27, 0x18
/* 803041BC  1C 66 00 03 */	mulli r3, r6, 3
/* 803041C0  38 06 00 01 */	addi r0, r6, 1
/* 803041C4  7C 1D 00 50 */	subf r0, r29, r0
/* 803041C8  7C 09 03 A6 */	mtctr r0
/* 803041CC  7C 06 E8 00 */	cmpw r6, r29
/* 803041D0  41 80 00 58 */	blt lbl_80304228
lbl_803041D4:
/* 803041D4  38 00 00 01 */	li r0, 1
/* 803041D8  98 01 00 0C */	stb r0, 0xc(r1)
/* 803041DC  38 00 00 04 */	li r0, 4
/* 803041E0  98 01 00 0D */	stb r0, 0xd(r1)
/* 803041E4  38 03 00 1E */	addi r0, r3, 0x1e
/* 803041E8  98 01 00 0E */	stb r0, 0xe(r1)
/* 803041EC  80 01 00 0C */	lwz r0, 0xc(r1)
/* 803041F0  90 01 00 08 */	stw r0, 8(r1)
/* 803041F4  80 9A 01 50 */	lwz r4, 0x150(r26)
/* 803041F8  38 A4 00 28 */	addi r5, r4, 0x28
/* 803041FC  88 81 00 08 */	lbz r4, 8(r1)
/* 80304200  54 E0 15 BA */	rlwinm r0, r7, 2, 0x16, 0x1d
/* 80304204  7C A5 02 14 */	add r5, r5, r0
/* 80304208  98 85 00 04 */	stb r4, 4(r5)
/* 8030420C  88 01 00 09 */	lbz r0, 9(r1)
/* 80304210  98 05 00 05 */	stb r0, 5(r5)
/* 80304214  88 01 00 0A */	lbz r0, 0xa(r1)
/* 80304218  98 05 00 06 */	stb r0, 6(r5)
/* 8030421C  38 E7 FF FF */	addi r7, r7, -1
/* 80304220  38 63 FF FD */	addi r3, r3, -3
/* 80304224  42 00 FF B0 */	bdnz lbl_803041D4
lbl_80304228:
/* 80304228  7C D9 33 78 */	mr r25, r6
/* 8030422C  48 00 00 28 */	b lbl_80304254
lbl_80304230:
/* 80304230  80 7A 01 50 */	lwz r3, 0x150(r26)
/* 80304234  38 63 00 28 */	addi r3, r3, 0x28
/* 80304238  38 19 FF FF */	addi r0, r25, -1
/* 8030423C  54 04 15 BA */	rlwinm r4, r0, 2, 0x16, 0x1d
/* 80304240  38 04 00 24 */	addi r0, r4, 0x24
/* 80304244  7C A3 00 2E */	lwzx r5, r3, r0
/* 80304248  57 24 06 3E */	clrlwi r4, r25, 0x18
/* 8030424C  4B FE 74 59 */	bl setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
/* 80304250  3B 39 FF FF */	addi r25, r25, -1
lbl_80304254:
/* 80304254  7C 19 E8 00 */	cmpw r25, r29
/* 80304258  41 81 FF D8 */	bgt lbl_80304230
/* 8030425C  3C 60 80 3A */	lis r3, j2dDefaultTexMtxInfo@ha /* 0x803A1BA0@ha */
/* 80304260  38 63 1B A0 */	addi r3, r3, j2dDefaultTexMtxInfo@l /* 0x803A1BA0@l */
/* 80304264  C0 03 00 04 */	lfs f0, 4(r3)
/* 80304268  D0 01 00 14 */	stfs f0, 0x14(r1)
/* 8030426C  C0 03 00 08 */	lfs f0, 8(r3)
/* 80304270  D0 01 00 18 */	stfs f0, 0x18(r1)
/* 80304274  C0 03 00 0C */	lfs f0, 0xc(r3)
/* 80304278  D0 01 00 1C */	stfs f0, 0x1c(r1)
/* 8030427C  88 03 00 00 */	lbz r0, 0(r3)
/* 80304280  98 01 00 10 */	stb r0, 0x10(r1)
/* 80304284  88 03 00 01 */	lbz r0, 1(r3)
/* 80304288  98 01 00 11 */	stb r0, 0x11(r1)
/* 8030428C  C0 03 00 10 */	lfs f0, 0x10(r3)
/* 80304290  D0 01 00 20 */	stfs f0, 0x20(r1)
/* 80304294  C0 03 00 14 */	lfs f0, 0x14(r3)
/* 80304298  D0 01 00 24 */	stfs f0, 0x24(r1)
/* 8030429C  C0 03 00 18 */	lfs f0, 0x18(r3)
/* 803042A0  D0 01 00 28 */	stfs f0, 0x28(r1)
/* 803042A4  C0 03 00 1C */	lfs f0, 0x1c(r3)
/* 803042A8  D0 01 00 2C */	stfs f0, 0x2c(r1)
/* 803042AC  C0 03 00 20 */	lfs f0, 0x20(r3)
/* 803042B0  D0 01 00 30 */	stfs f0, 0x30(r1)
/* 803042B4  80 7A 01 50 */	lwz r3, 0x150(r26)
/* 803042B8  38 63 00 28 */	addi r3, r3, 0x28
/* 803042BC  57 64 06 3E */	clrlwi r4, r27, 0x18
/* 803042C0  38 A1 00 10 */	addi r5, r1, 0x10
/* 803042C4  4B FE 73 E1 */	bl setTexMtx__14J2DTexGenBlockFUlR9J2DTexMtx
/* 803042C8  57 C0 06 3E */	clrlwi r0, r30, 0x18
/* 803042CC  28 00 00 01 */	cmplwi r0, 1
/* 803042D0  40 82 00 0C */	bne lbl_803042DC
/* 803042D4  3B 60 00 01 */	li r27, 1
/* 803042D8  48 00 00 1C */	b lbl_803042F4
lbl_803042DC:
/* 803042DC  57 83 06 3E */	clrlwi r3, r28, 0x18
/* 803042E0  30 03 FF FF */	addic r0, r3, -1
/* 803042E4  7C 60 19 10 */	subfe r3, r0, r3
/* 803042E8  38 03 00 01 */	addi r0, r3, 1
/* 803042EC  7C 1F 02 14 */	add r0, r31, r0
/* 803042F0  54 1B 06 3E */	clrlwi r27, r0, 0x18
lbl_803042F4:
/* 803042F4  80 7A 01 50 */	lwz r3, 0x150(r26)
/* 803042F8  80 63 00 70 */	lwz r3, 0x70(r3)
/* 803042FC  7F 64 DB 78 */	mr r4, r27
/* 80304300  81 83 00 00 */	lwz r12, 0(r3)
/* 80304304  81 8C 00 54 */	lwz r12, 0x54(r12)
/* 80304308  7D 89 03 A6 */	mtctr r12
/* 8030430C  4E 80 04 21 */	bctrl 
/* 80304310  7F 43 D3 78 */	mr r3, r26
/* 80304314  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80304318  7F 65 DB 78 */	mr r5, r27
/* 8030431C  7F 86 E3 78 */	mr r6, r28
/* 80304320  48 00 0F 8D */	bl setTevOrder__12J2DPictureExFUcUcb
/* 80304324  7F 43 D3 78 */	mr r3, r26
/* 80304328  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8030432C  7F 65 DB 78 */	mr r5, r27
/* 80304330  7F 86 E3 78 */	mr r6, r28
/* 80304334  48 00 10 AD */	bl setTevStage__12J2DPictureExFUcUcb
/* 80304338  7F 43 D3 78 */	mr r3, r26
/* 8030433C  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80304340  48 00 15 E9 */	bl setTevKColor__12J2DPictureExFUc
/* 80304344  7F 43 D3 78 */	mr r3, r26
/* 80304348  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 8030434C  48 00 19 25 */	bl setTevKColorSel__12J2DPictureExFUc
/* 80304350  7F 43 D3 78 */	mr r3, r26
/* 80304354  57 C4 06 3E */	clrlwi r4, r30, 0x18
/* 80304358  48 00 19 C1 */	bl setTevKAlphaSel__12J2DPictureExFUc
/* 8030435C  E3 E1 00 98 */	psq_l f31, 152(r1), 0, 0 /* qr0 */
/* 80304360  CB E1 00 90 */	lfd f31, 0x90(r1)
/* 80304364  39 61 00 90 */	addi r11, r1, 0x90
/* 80304368  48 05 DE B1 */	bl _restgpr_25
/* 8030436C  80 01 00 A4 */	lwz r0, 0xa4(r1)
/* 80304370  7C 08 03 A6 */	mtlr r0
/* 80304374  38 21 00 A0 */	addi r1, r1, 0xa0
/* 80304378  4E 80 00 20 */	blr 
