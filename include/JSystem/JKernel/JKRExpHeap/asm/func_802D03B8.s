/* dump__10JKRExpHeapFv __ct__10JKRExpHeapFPvUlP7JKRHeapb::dump(void) */
/* missing reference */
/* 802D03B8 002CD2F8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802D03BC 002CD2FC  7C 08 02 A6 */	mflr r0
/* 802D03C0 002CD300  90 01 00 44 */	stw r0, 0x44(r1)
/* 802D03C4 002CD304  39 61 00 40 */	addi r11, r1, 0x40
/* 802D03C8 002CD308  48 09 1E 05 */	bl func_803621CC
/* 802D03CC 002CD30C  7C 7A 1B 78 */	mr r26, r3
/* 802D03D0 002CD310  38 7A 00 18 */	addi r3, r26, 0x18
/* 802D03D4 002CD314  48 06 EC 6D */	bl OSLockMutex
/* 802D03D8 002CD318  7F 43 D3 78 */	mr r3, r26
/* 802D03DC 002CD31C  81 9A 00 00 */	lwz r12, 0(r26)
/* 802D03E0 002CD320  81 8C 00 14 */	lwz r12, 0x14(r12)
/* 802D03E4 002CD324  7D 89 03 A6 */	mtctr r12
/* 802D03E8 002CD328  4E 80 04 21 */	bctrl
/* 802D03EC 002CD32C  7C 7F 1B 78 */	mr r31, r3
/* 802D03F0 002CD330  3B C0 00 00 */	li r30, 0
/* 802D03F4 002CD334  3B A0 00 00 */	li r29, 0
/* 802D03F8 002CD338  3B 80 00 00 */	li r28, 0
/* 802D03FC 002CD33C  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0400 002CD340  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0404 002CD344  38 63 01 9D */	addi r3, r3, 0x19d
/* 802D0408 002CD348  48 01 82 41 */	bl JUTReportConsole
/* 802D040C 002CD34C  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0410 002CD350  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0414 002CD354  38 63 01 D4 */	addi r3, r3, 0x1d4
/* 802D0418 002CD358  48 01 82 31 */	bl JUTReportConsole
/* 802D041C 002CD35C  80 1A 00 80 */	lwz r0, 0x80(r26)
/* 802D0420 002CD360  28 00 00 00 */	cmplwi r0, 0
/* 802D0424 002CD364  40 82 00 14 */	bne lbl_802D0438
/* 802D0428 002CD368  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D042C 002CD36C  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D0430 002CD370  38 63 01 E3 */	addi r3, r3, 0x1e3
/* 802D0434 002CD374  48 01 82 15 */	bl JUTReportConsole
lbl_802D0438:
/* 802D0438 002CD378  83 7A 00 80 */	lwz r27, 0x80(r26)
/* 802D043C 002CD37C  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0440 002CD380  3B 23 CA F0 */	addi r25, r3, lbl_8039CAF0@l
/* 802D0444 002CD384  48 00 00 8C */	b lbl_802D04D0
lbl_802D0448:
/* 802D0448 002CD388  A0 1B 00 00 */	lhz r0, 0(r27)
/* 802D044C 002CD38C  28 00 48 4D */	cmplwi r0, 0x484d
/* 802D0450 002CD390  41 82 00 20 */	beq lbl_802D0470
/* 802D0454 002CD394  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0458 002CD398  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D045C 002CD39C  38 63 01 EA */	addi r3, r3, 0x1ea
/* 802D0460 002CD3A0  7F 64 DB 78 */	mr r4, r27
/* 802D0464 002CD3A4  4C C6 31 82 */	crclr 6
/* 802D0468 002CD3A8  48 01 81 61 */	bl JUTReportConsole_f
/* 802D046C 002CD3AC  48 00 00 6C */	b lbl_802D04D8
lbl_802D0470:
/* 802D0470 002CD3B0  88 1B 00 02 */	lbz r0, 2(r27)
/* 802D0474 002CD3B4  54 08 06 7E */	clrlwi r8, r0, 0x19
/* 802D0478 002CD3B8  38 BB 00 10 */	addi r5, r27, 0x10
/* 802D047C 002CD3BC  38 79 02 24 */	addi r3, r25, 0x224
/* 802D0480 002CD3C0  54 00 06 31 */	rlwinm. r0, r0, 0, 0x18, 0x18
/* 802D0484 002CD3C4  38 99 02 4F */	addi r4, r25, 0x24f
/* 802D0488 002CD3C8  41 82 00 10 */	beq lbl_802D0498
/* 802D048C 002CD3CC  3C 80 80 3A */	lis r4, lbl_8039CAF0@ha
/* 802D0490 002CD3D0  38 84 CA F0 */	addi r4, r4, lbl_8039CAF0@l
/* 802D0494 002CD3D4  38 84 02 49 */	addi r4, r4, 0x249
lbl_802D0498:
/* 802D0498 002CD3D8  80 DB 00 04 */	lwz r6, 4(r27)
/* 802D049C 002CD3DC  88 FB 00 03 */	lbz r7, 3(r27)
/* 802D04A0 002CD3E0  81 3B 00 08 */	lwz r9, 8(r27)
/* 802D04A4 002CD3E4  81 5B 00 0C */	lwz r10, 0xc(r27)
/* 802D04A8 002CD3E8  4C C6 31 82 */	crclr 6
/* 802D04AC 002CD3EC  48 01 81 1D */	bl JUTReportConsole_f
/* 802D04B0 002CD3F0  80 7B 00 04 */	lwz r3, 4(r27)
/* 802D04B4 002CD3F4  88 1B 00 02 */	lbz r0, 2(r27)
/* 802D04B8 002CD3F8  54 00 06 7E */	clrlwi r0, r0, 0x19
/* 802D04BC 002CD3FC  7C 03 02 14 */	add r0, r3, r0
/* 802D04C0 002CD400  7F C0 F2 14 */	add r30, r0, r30
/* 802D04C4 002CD404  83 7B 00 0C */	lwz r27, 0xc(r27)
/* 802D04C8 002CD408  3B DE 00 10 */	addi r30, r30, 0x10
/* 802D04CC 002CD40C  3B BD 00 01 */	addi r29, r29, 1
lbl_802D04D0:
/* 802D04D0 002CD410  28 1B 00 00 */	cmplwi r27, 0
/* 802D04D4 002CD414  40 82 FF 74 */	bne lbl_802D0448
lbl_802D04D8:
/* 802D04D8 002CD418  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D04DC 002CD41C  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D04E0 002CD420  38 63 02 55 */	addi r3, r3, 0x255
/* 802D04E4 002CD424  48 01 81 65 */	bl JUTReportConsole
/* 802D04E8 002CD428  80 1A 00 78 */	lwz r0, 0x78(r26)
/* 802D04EC 002CD42C  28 00 00 00 */	cmplwi r0, 0
/* 802D04F0 002CD430  40 82 00 14 */	bne lbl_802D0504
/* 802D04F4 002CD434  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D04F8 002CD438  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D04FC 002CD43C  38 63 01 E3 */	addi r3, r3, 0x1e3
/* 802D0500 002CD440  48 01 81 49 */	bl JUTReportConsole
lbl_802D0504:
/* 802D0504 002CD444  83 3A 00 78 */	lwz r25, 0x78(r26)
/* 802D0508 002CD448  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D050C 002CD44C  3B 63 CA F0 */	addi r27, r3, lbl_8039CAF0@l
/* 802D0510 002CD450  48 00 00 38 */	b lbl_802D0548
lbl_802D0514:
/* 802D0514 002CD454  38 7B 02 24 */	addi r3, r27, 0x224
/* 802D0518 002CD458  38 9B 02 64 */	addi r4, r27, 0x264
/* 802D051C 002CD45C  38 B9 00 10 */	addi r5, r25, 0x10
/* 802D0520 002CD460  80 D9 00 04 */	lwz r6, 4(r25)
/* 802D0524 002CD464  88 F9 00 03 */	lbz r7, 3(r25)
/* 802D0528 002CD468  88 19 00 02 */	lbz r0, 2(r25)
/* 802D052C 002CD46C  54 08 06 7E */	clrlwi r8, r0, 0x19
/* 802D0530 002CD470  81 39 00 08 */	lwz r9, 8(r25)
/* 802D0534 002CD474  81 59 00 0C */	lwz r10, 0xc(r25)
/* 802D0538 002CD478  4C C6 31 82 */	crclr 6
/* 802D053C 002CD47C  48 01 80 8D */	bl JUTReportConsole_f
/* 802D0540 002CD480  83 39 00 0C */	lwz r25, 0xc(r25)
/* 802D0544 002CD484  3B 9C 00 01 */	addi r28, r28, 1
lbl_802D0548:
/* 802D0548 002CD488  28 19 00 00 */	cmplwi r25, 0
/* 802D054C 002CD48C  40 82 FF C8 */	bne lbl_802D0514
/* 802D0550 002CD490  80 BA 00 38 */	lwz r5, 0x38(r26)
/* 802D0554 002CD494  3C 60 80 3A */	lis r3, lbl_8039CAF0@ha
/* 802D0558 002CD498  38 63 CA F0 */	addi r3, r3, lbl_8039CAF0@l
/* 802D055C 002CD49C  38 63 02 6A */	addi r3, r3, 0x26a
/* 802D0560 002CD4A0  7F C4 F3 78 */	mr r4, r30
/* 802D0564 002CD4A4  C0 62 C5 98 */	lfs f3, lbl_80455F98-_SDA2_BASE_(r2)
/* 802D0568 002CD4A8  C8 42 C5 A0 */	lfd f2, lbl_80455FA0-_SDA2_BASE_(r2)
/* 802D056C 002CD4AC  93 C1 00 0C */	stw r30, 0xc(r1)
/* 802D0570 002CD4B0  3C 00 43 30 */	lis r0, 0x4330
/* 802D0574 002CD4B4  90 01 00 08 */	stw r0, 8(r1)
/* 802D0578 002CD4B8  C8 01 00 08 */	lfd f0, 8(r1)
/* 802D057C 002CD4BC  EC 20 10 28 */	fsubs f1, f0, f2
/* 802D0580 002CD4C0  90 A1 00 14 */	stw r5, 0x14(r1)
/* 802D0584 002CD4C4  90 01 00 10 */	stw r0, 0x10(r1)
/* 802D0588 002CD4C8  C8 01 00 10 */	lfd f0, 0x10(r1)
/* 802D058C 002CD4CC  EC 00 10 28 */	fsubs f0, f0, f2
/* 802D0590 002CD4D0  EC 01 00 24 */	fdivs f0, f1, f0
/* 802D0594 002CD4D4  EC 23 00 32 */	fmuls f1, f3, f0
/* 802D0598 002CD4D8  7F A6 EB 78 */	mr r6, r29
/* 802D059C 002CD4DC  7F 87 E3 78 */	mr r7, r28
/* 802D05A0 002CD4E0  4C C6 32 42 */	crset 6
/* 802D05A4 002CD4E4  48 01 80 25 */	bl JUTReportConsole_f
/* 802D05A8 002CD4E8  38 7A 00 18 */	addi r3, r26, 0x18
/* 802D05AC 002CD4EC  48 06 EB 71 */	bl OSUnlockMutex
/* 802D05B0 002CD4F0  7F E3 FB 78 */	mr r3, r31
/* 802D05B4 002CD4F4  39 61 00 40 */	addi r11, r1, 0x40
/* 802D05B8 002CD4F8  48 09 1C 61 */	bl func_80362218
/* 802D05BC 002CD4FC  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802D05C0 002CD500  7C 08 03 A6 */	mtlr r0
/* 802D05C4 002CD504  38 21 00 40 */	addi r1, r1, 0x40
/* 802D05C8 002CD508  4E 80 00 20 */	blr
