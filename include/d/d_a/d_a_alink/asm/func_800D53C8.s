/* 800D53C8 000D2308  94 21 FF B0 */ stwu r1, -0x50(r1)
/* 800D53CC 000D230C  7C 08 02 A6 */ mflr r0
/* 800D53D0 000D2310  90 01 00 54 */ stw r0, 0x54(r1)
/* 800D53D4 000D2314  DB E1 00 40 */ stfd f31, 0x40(r1)
/* 800D53D8 000D2318  F3 E1 00 48 */ psq_st f31, 72(r1), 0, 0
/* 800D53DC 000D231C  93 E1 00 3C */ stw r31, 0x3c(r1)
/* 800D53E0 000D2320  7C 7F 1B 78 */ mr r31, r3
/* 800D53E4 000D2324  80 03 06 14 */ lwz r0, 0x614(r3)
/* 800D53E8 000D2328  28 00 00 51 */ cmplwi r0, 0x51
/* 800D53EC 000D232C  40 82 00 20 */ bne lbl_800D540C
/* 800D53F0 000D2330  A0 1F 2F E8 */ lhz r0, 0x2fe8(r31)
/* 800D53F4 000D2334  28 00 00 2B */ cmplwi r0, 0x2b
/* 800D53F8 000D2338  41 82 00 0C */ beq lbl_800D5404
/* 800D53FC 000D233C  28 00 00 2C */ cmplwi r0, 0x2c
/* 800D5400 000D2340  40 82 00 0C */ bne lbl_800D540C
lbl_800D5404:
/* 800D5404 000D2344  38 60 00 01 */ li r3, 1
/* 800D5408 000D2348  48 00 03 D4 */ b lbl_800D57DC
lbl_800D540C:
/* 800D540C 000D234C  7F E3 FB 78 */ mr r3, r31
/* 800D5410 000D2350  38 80 00 2B */ li r4, 0x2b
/* 800D5414 000D2354  4B FE CB 59 */ bl daAlink_c_NS_commonProcInit
/* 800D5418 000D2358  7F E3 FB 78 */ mr r3, r31
/* 800D541C 000D235C  38 80 00 01 */ li r4, 1
/* 800D5420 000D2360  4B FF C0 11 */ bl daAlink_c_NS_resetCombo
/* 800D5424 000D2364  38 00 00 00 */ li r0, 0
/* 800D5428 000D2368  B0 1F 30 0E */ sth r0, 0x300e(r31)
/* 800D542C 000D236C  80 9F 27 EC */ lwz r4, 0x27ec(r31)
/* 800D5430 000D2370  28 04 00 00 */ cmplwi r4, 0
/* 800D5434 000D2374  41 82 00 40 */ beq lbl_800D5474
/* 800D5438 000D2378  C0 04 05 68 */ lfs f0, 0x568(r4)
/* 800D543C 000D237C  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800D5440 000D2380  C0 04 05 6C */ lfs f0, 0x56c(r4)
/* 800D5444 000D2384  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800D5448 000D2388  C0 04 05 70 */ lfs f0, 0x570(r4)
/* 800D544C 000D238C  D0 01 00 2C */ stfs f0, 0x2c(r1)
/* 800D5450 000D2390  38 7F 28 0C */ addi r3, r31, 0x280c
/* 800D5454 000D2394  48 08 98 65 */ bl daPy_actorKeep_c_NS_setData
/* 800D5458 000D2398  80 7F 27 EC */ lwz r3, 0x27ec(r31)
/* 800D545C 000D239C  A8 03 00 08 */ lha r0, 8(r3)
/* 800D5460 000D23A0  2C 00 02 0E */ cmpwi r0, 0x20e
/* 800D5464 000D23A4  40 82 00 60 */ bne lbl_800D54C4
/* 800D5468 000D23A8  38 00 00 01 */ li r0, 1
/* 800D546C 000D23AC  B0 1F 30 0E */ sth r0, 0x300e(r31)
/* 800D5470 000D23B0  48 00 00 54 */ b lbl_800D54C4
lbl_800D5474:
/* 800D5474 000D23B4  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 800D5478 000D23B8  38 83 9A 20 */ addi r4, r3, lbl_80439A20@l
/* 800D547C 000D23BC  A8 1F 04 E6 */ lha r0, 0x4e6(r31)
/* 800D5480 000D23C0  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 800D5484 000D23C4  7C 64 02 14 */ add r3, r4, r0
/* 800D5488 000D23C8  C0 03 00 04 */ lfs f0, 4(r3)
/* 800D548C 000D23CC  C0 3F 04 D8 */ lfs f1, 0x4d8(r31)
/* 800D5490 000D23D0  C0 42 93 50 */ lfs f2, lbl_80452D50-_SDA2_BASE_(r2)
/* 800D5494 000D23D4  EC 02 00 32 */ fmuls f0, f2, f0
/* 800D5498 000D23D8  EC 81 00 2A */ fadds f4, f1, f0
/* 800D549C 000D23DC  C0 7F 04 D4 */ lfs f3, 0x4d4(r31)
/* 800D54A0 000D23E0  7C 04 04 2E */ lfsx f0, r4, r0
/* 800D54A4 000D23E4  C0 3F 04 D0 */ lfs f1, 0x4d0(r31)
/* 800D54A8 000D23E8  EC 02 00 32 */ fmuls f0, f2, f0
/* 800D54AC 000D23EC  EC 01 00 2A */ fadds f0, f1, f0
/* 800D54B0 000D23F0  D0 01 00 24 */ stfs f0, 0x24(r1)
/* 800D54B4 000D23F4  D0 61 00 28 */ stfs f3, 0x28(r1)
/* 800D54B8 000D23F8  D0 81 00 2C */ stfs f4, 0x2c(r1)
/* 800D54BC 000D23FC  38 7F 28 0C */ addi r3, r31, 0x280c
/* 800D54C0 000D2400  48 08 98 3D */ bl daPy_actorKeep_c_NS_clearData
lbl_800D54C4:
/* 800D54C4 000D2404  A8 1F 30 0E */ lha r0, 0x300e(r31)
/* 800D54C8 000D2408  2C 00 00 00 */ cmpwi r0, 0
/* 800D54CC 000D240C  41 82 00 20 */ beq lbl_800D54EC
/* 800D54D0 000D2410  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D54D4 000D2414  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 800D54D8 000D2418  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 800D54DC 000D241C  80 1F 31 A0 */ lwz r0, 0x31a0(r31)
/* 800D54E0 000D2420  54 00 07 FA */ rlwinm r0, r0, 0, 0x1f, 0x1d
/* 800D54E4 000D2424  90 1F 31 A0 */ stw r0, 0x31a0(r31)
/* 800D54E8 000D2428  48 00 02 C0 */ b lbl_800D57A8
lbl_800D54EC:
/* 800D54EC 000D242C  7F E3 FB 78 */ mr r3, r31
/* 800D54F0 000D2430  38 80 00 78 */ li r4, 0x78
/* 800D54F4 000D2434  3C A0 80 39 */ lis r5, lbl_8038DD44@ha
/* 800D54F8 000D2438  38 A5 DD 44 */ addi r5, r5, lbl_8038DD44@l
/* 800D54FC 000D243C  4B FD 7B F9 */ bl daAlink_c_NS_setSingleAnimeParam
/* 800D5500 000D2440  C0 21 00 28 */ lfs f1, 0x28(r1)
/* 800D5504 000D2444  C0 02 93 00 */ lfs f0, lbl_80452D00-_SDA2_BASE_(r2)
/* 800D5508 000D2448  EC 01 00 2A */ fadds f0, f1, f0
/* 800D550C 000D244C  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800D5510 000D2450  38 61 00 24 */ addi r3, r1, 0x24
/* 800D5514 000D2454  4B F4 87 A9 */ bl gndCheck__11fopAcM_gc_cFPC4cXyz
/* 800D5518 000D2458  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800D551C 000D245C  41 82 00 10 */ beq lbl_800D552C
/* 800D5520 000D2460  C0 0D 87 50 */ lfs f0, lbl_80450CD0-_SDA_BASE_(r13)
/* 800D5524 000D2464  D0 01 00 28 */ stfs f0, 0x28(r1)
/* 800D5528 000D2468  48 00 00 14 */ b lbl_800D553C
lbl_800D552C:
/* 800D552C 000D246C  C0 21 00 28 */ lfs f1, 0x28(r1)
/* 800D5530 000D2470  C0 02 93 00 */ lfs f0, lbl_80452D00-_SDA2_BASE_(r2)
/* 800D5534 000D2474  EC 01 00 28 */ fsubs f0, f1, f0
/* 800D5538 000D2478  D0 01 00 28 */ stfs f0, 0x28(r1)
lbl_800D553C:
/* 800D553C 000D247C  38 7F 04 D0 */ addi r3, r31, 0x4d0
/* 800D5540 000D2480  38 81 00 24 */ addi r4, r1, 0x24
/* 800D5544 000D2484  48 19 B6 C1 */ bl cLib_targetAngleY__FPC3VecPC3Vec
/* 800D5548 000D2488  B0 7F 04 E6 */ sth r3, 0x4e6(r31)
/* 800D554C 000D248C  A8 1F 04 E6 */ lha r0, 0x4e6(r31)
/* 800D5550 000D2490  B0 1F 04 DE */ sth r0, 0x4de(r31)
/* 800D5554 000D2494  A8 1F 04 E6 */ lha r0, 0x4e6(r31)
/* 800D5558 000D2498  54 00 04 38 */ rlwinm r0, r0, 0, 0x10, 0x1c
/* 800D555C 000D249C  3C 60 80 44 */ lis r3, lbl_80439A20@ha
/* 800D5560 000D24A0  38 63 9A 20 */ addi r3, r3, lbl_80439A20@l
/* 800D5564 000D24A4  7C 03 04 2E */ lfsx f0, r3, r0
/* 800D5568 000D24A8  C0 21 00 24 */ lfs f1, 0x24(r1)
/* 800D556C 000D24AC  C0 62 93 54 */ lfs f3, lbl_80452D54-_SDA2_BASE_(r2)
/* 800D5570 000D24B0  EC 03 00 32 */ fmuls f0, f3, f0
/* 800D5574 000D24B4  EC 41 00 28 */ fsubs f2, f1, f0
/* 800D5578 000D24B8  D0 41 00 24 */ stfs f2, 0x24(r1)
/* 800D557C 000D24BC  7C 63 02 14 */ add r3, r3, r0
/* 800D5580 000D24C0  C0 03 00 04 */ lfs f0, 4(r3)
/* 800D5584 000D24C4  C0 21 00 2C */ lfs f1, 0x2c(r1)
/* 800D5588 000D24C8  EC 03 00 32 */ fmuls f0, f3, f0
/* 800D558C 000D24CC  EC 21 00 28 */ fsubs f1, f1, f0
/* 800D5590 000D24D0  D0 21 00 2C */ stfs f1, 0x2c(r1)
/* 800D5594 000D24D4  C0 7F 04 D8 */ lfs f3, 0x4d8(r31)
/* 800D5598 000D24D8  C0 1F 04 D0 */ lfs f0, 0x4d0(r31)
/* 800D559C 000D24DC  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800D55A0 000D24E0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D55A4 000D24E4  D0 01 00 10 */ stfs f0, 0x10(r1)
/* 800D55A8 000D24E8  D0 61 00 14 */ stfs f3, 0x14(r1)
/* 800D55AC 000D24EC  D0 41 00 18 */ stfs f2, 0x18(r1)
/* 800D55B0 000D24F0  D0 01 00 1C */ stfs f0, 0x1c(r1)
/* 800D55B4 000D24F4  D0 21 00 20 */ stfs f1, 0x20(r1)
/* 800D55B8 000D24F8  38 61 00 0C */ addi r3, r1, 0xc
/* 800D55BC 000D24FC  38 81 00 18 */ addi r4, r1, 0x18
/* 800D55C0 000D2500  48 27 1D DD */ bl PSVECSquareDistance
/* 800D55C4 000D2504  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D55C8 000D2508  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800D55CC 000D250C  40 81 00 58 */ ble lbl_800D5624
/* 800D55D0 000D2510  FC 00 08 34 */ frsqrte f0, f1
/* 800D55D4 000D2514  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800D55D8 000D2518  FC 44 00 32 */ fmul f2, f4, f0
/* 800D55DC 000D251C  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800D55E0 000D2520  FC 00 00 32 */ fmul f0, f0, f0
/* 800D55E4 000D2524  FC 01 00 32 */ fmul f0, f1, f0
/* 800D55E8 000D2528  FC 03 00 28 */ fsub f0, f3, f0
/* 800D55EC 000D252C  FC 02 00 32 */ fmul f0, f2, f0
/* 800D55F0 000D2530  FC 44 00 32 */ fmul f2, f4, f0
/* 800D55F4 000D2534  FC 00 00 32 */ fmul f0, f0, f0
/* 800D55F8 000D2538  FC 01 00 32 */ fmul f0, f1, f0
/* 800D55FC 000D253C  FC 03 00 28 */ fsub f0, f3, f0
/* 800D5600 000D2540  FC 02 00 32 */ fmul f0, f2, f0
/* 800D5604 000D2544  FC 44 00 32 */ fmul f2, f4, f0
/* 800D5608 000D2548  FC 00 00 32 */ fmul f0, f0, f0
/* 800D560C 000D254C  FC 01 00 32 */ fmul f0, f1, f0
/* 800D5610 000D2550  FC 03 00 28 */ fsub f0, f3, f0
/* 800D5614 000D2554  FC 02 00 32 */ fmul f0, f2, f0
/* 800D5618 000D2558  FC 21 00 32 */ fmul f1, f1, f0
/* 800D561C 000D255C  FC 20 08 18 */ frsp f1, f1
/* 800D5620 000D2560  48 00 00 88 */ b lbl_800D56A8
lbl_800D5624:
/* 800D5624 000D2564  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800D5628 000D2568  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800D562C 000D256C  40 80 00 10 */ bge lbl_800D563C
/* 800D5630 000D2570  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800D5634 000D2574  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800D5638 000D2578  48 00 00 70 */ b lbl_800D56A8
lbl_800D563C:
/* 800D563C 000D257C  D0 21 00 08 */ stfs f1, 8(r1)
/* 800D5640 000D2580  80 81 00 08 */ lwz r4, 8(r1)
/* 800D5644 000D2584  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800D5648 000D2588  3C 00 7F 80 */ lis r0, 0x7f80
/* 800D564C 000D258C  7C 03 00 00 */ cmpw r3, r0
/* 800D5650 000D2590  41 82 00 14 */ beq lbl_800D5664
/* 800D5654 000D2594  40 80 00 40 */ bge lbl_800D5694
/* 800D5658 000D2598  2C 03 00 00 */ cmpwi r3, 0
/* 800D565C 000D259C  41 82 00 20 */ beq lbl_800D567C
/* 800D5660 000D25A0  48 00 00 34 */ b lbl_800D5694
lbl_800D5664:
/* 800D5664 000D25A4  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800D5668 000D25A8  41 82 00 0C */ beq lbl_800D5674
/* 800D566C 000D25AC  38 00 00 01 */ li r0, 1
/* 800D5670 000D25B0  48 00 00 28 */ b lbl_800D5698
lbl_800D5674:
/* 800D5674 000D25B4  38 00 00 02 */ li r0, 2
/* 800D5678 000D25B8  48 00 00 20 */ b lbl_800D5698
lbl_800D567C:
/* 800D567C 000D25BC  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800D5680 000D25C0  41 82 00 0C */ beq lbl_800D568C
/* 800D5684 000D25C4  38 00 00 05 */ li r0, 5
/* 800D5688 000D25C8  48 00 00 10 */ b lbl_800D5698
lbl_800D568C:
/* 800D568C 000D25CC  38 00 00 03 */ li r0, 3
/* 800D5690 000D25D0  48 00 00 08 */ b lbl_800D5698
lbl_800D5694:
/* 800D5694 000D25D4  38 00 00 04 */ li r0, 4
lbl_800D5698:
/* 800D5698 000D25D8  2C 00 00 01 */ cmpwi r0, 1
/* 800D569C 000D25DC  40 82 00 0C */ bne lbl_800D56A8
/* 800D56A0 000D25E0  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800D56A4 000D25E4  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800D56A8:
/* 800D56A8 000D25E8  FF E0 08 90 */ fmr f31, f1
/* 800D56AC 000D25EC  C0 02 93 58 */ lfs f0, lbl_80452D58-_SDA2_BASE_(r2)
/* 800D56B0 000D25F0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800D56B4 000D25F4  40 81 00 08 */ ble lbl_800D56BC
/* 800D56B8 000D25F8  FF E0 00 90 */ fmr f31, f0
lbl_800D56BC:
/* 800D56BC 000D25FC  3C 60 80 39 */ lis r3, lbl_8038DD44@ha
/* 800D56C0 000D2600  38 63 DD 44 */ addi r3, r3, lbl_8038DD44@l
/* 800D56C4 000D2604  C0 03 00 68 */ lfs f0, 0x68(r3)
/* 800D56C8 000D2608  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 800D56CC 000D260C  80 1F 05 70 */ lwz r0, 0x570(r31)
/* 800D56D0 000D2610  54 00 02 11 */ rlwinm. r0, r0, 0, 8, 8
/* 800D56D4 000D2614  41 82 00 30 */ beq lbl_800D5704
/* 800D56D8 000D2618  C0 3F 33 98 */ lfs f1, 0x3398(r31)
/* 800D56DC 000D261C  3C 60 80 39 */ lis r3, lbl_8038E7F4@ha
/* 800D56E0 000D2620  38 63 E7 F4 */ addi r3, r3, lbl_8038E7F4@l
/* 800D56E4 000D2624  C0 03 00 3C */ lfs f0, 0x3c(r3)
/* 800D56E8 000D2628  EC 01 00 32 */ fmuls f0, f1, f0
/* 800D56EC 000D262C  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 800D56F0 000D2630  C0 3F 04 FC */ lfs f1, 0x4fc(r31)
/* 800D56F4 000D2634  C0 03 00 38 */ lfs f0, 0x38(r3)
/* 800D56F8 000D2638  EC 01 00 32 */ fmuls f0, f1, f0
/* 800D56FC 000D263C  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
/* 800D5700 000D2640  48 00 00 2C */ b lbl_800D572C
lbl_800D5704:
/* 800D5704 000D2644  7F E3 FB 78 */ mr r3, r31
/* 800D5708 000D2648  38 80 00 01 */ li r4, 1
/* 800D570C 000D264C  38 A0 00 01 */ li r5, 1
/* 800D5710 000D2650  4B FE 5D A9 */ bl daAlink_c_NS_checkHeavyStateOn
/* 800D5714 000D2654  2C 03 00 00 */ cmpwi r3, 0
/* 800D5718 000D2658  41 82 00 14 */ beq lbl_800D572C
/* 800D571C 000D265C  C0 3F 04 FC */ lfs f1, 0x4fc(r31)
/* 800D5720 000D2660  C0 02 93 2C */ lfs f0, lbl_80452D2C-_SDA2_BASE_(r2)
/* 800D5724 000D2664  EC 01 00 32 */ fmuls f0, f1, f0
/* 800D5728 000D2668  D0 1F 04 FC */ stfs f0, 0x4fc(r31)
lbl_800D572C:
/* 800D572C 000D266C  C0 1F 04 FC */ lfs f0, 0x4fc(r31)
/* 800D5730 000D2670  C0 3F 05 30 */ lfs f1, 0x530(r31)
/* 800D5734 000D2674  EC 80 08 2A */ fadds f4, f0, f1
/* 800D5738 000D2678  C0 02 92 B8 */ lfs f0, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800D573C 000D267C  EC A0 08 24 */ fdivs f5, f0, f1
/* 800D5740 000D2680  C0 61 00 28 */ lfs f3, 0x28(r1)
/* 800D5744 000D2684  C0 5F 04 D4 */ lfs f2, 0x4d4(r31)
/* 800D5748 000D2688  C0 22 92 98 */ lfs f1, lbl_80452C98-_SDA2_BASE_(r2)
/* 800D574C 000D268C  EC 04 01 32 */ fmuls f0, f4, f4
/* 800D5750 000D2690  EC 05 00 32 */ fmuls f0, f5, f0
/* 800D5754 000D2694  EC 01 00 32 */ fmuls f0, f1, f0
/* 800D5758 000D2698  EC 02 00 28 */ fsubs f0, f2, f0
/* 800D575C 000D269C  EC 23 00 28 */ fsubs f1, f3, f0
/* 800D5760 000D26A0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D5764 000D26A4  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800D5768 000D26A8  40 81 00 08 */ ble lbl_800D5770
/* 800D576C 000D26AC  FC 20 00 90 */ fmr f1, f0
lbl_800D5770:
/* 800D5770 000D26B0  C0 02 93 14 */ lfs f0, lbl_80452D14-_SDA2_BASE_(r2)
/* 800D5774 000D26B4  EC 00 00 72 */ fmuls f0, f0, f1
/* 800D5778 000D26B8  EC 20 01 72 */ fmuls f1, f0, f5
/* 800D577C 000D26BC  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800D5780 000D26C0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800D5784 000D26C4  40 81 00 0C */ ble lbl_800D5790
/* 800D5788 000D26C8  FC 00 08 34 */ frsqrte f0, f1
/* 800D578C 000D26CC  EC 20 00 72 */ fmuls f1, f0, f1
lbl_800D5790:
/* 800D5790 000D26D0  EC 04 01 72 */ fmuls f0, f4, f5
/* 800D5794 000D26D4  EC 01 00 28 */ fsubs f0, f1, f0
/* 800D5798 000D26D8  EC 1F 00 24 */ fdivs f0, f31, f0
/* 800D579C 000D26DC  D0 1F 33 98 */ stfs f0, 0x3398(r31)
/* 800D57A0 000D26E0  38 00 00 00 */ li r0, 0
/* 800D57A4 000D26E4  B0 1F 30 0C */ sth r0, 0x300c(r31)
lbl_800D57A8:
/* 800D57A8 000D26E8  7F E3 FB 78 */ mr r3, r31
/* 800D57AC 000D26EC  3C 80 00 01 */ lis r4, 0x00010094@ha
/* 800D57B0 000D26F0  38 84 00 94 */ addi r4, r4, 0x00010094@l
/* 800D57B4 000D26F4  4B FF CA D1 */ bl daAlink_c_NS_setSwordVoiceSe
/* 800D57B8 000D26F8  7F E3 FB 78 */ mr r3, r31
/* 800D57BC 000D26FC  38 80 00 27 */ li r4, 0x27
/* 800D57C0 000D2700  4B FF BD 6D */ bl daAlink_c_NS_setCutType
/* 800D57C4 000D2704  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800D57C8 000D2708  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800D57CC 000D270C  80 03 5F 1C */ lwz r0, 0x5f1c(r3)
/* 800D57D0 000D2710  64 00 00 40 */ oris r0, r0, 0x40
/* 800D57D4 000D2714  90 03 5F 1C */ stw r0, 0x5f1c(r3)
/* 800D57D8 000D2718  38 60 00 01 */ li r3, 1
lbl_800D57DC:
/* 800D57DC 000D271C  E3 E1 00 48 */ psq_l f31, 72(r1), 0, 0
/* 800D57E0 000D2720  CB E1 00 40 */ lfd f31, 0x40(r1)
/* 800D57E4 000D2724  83 E1 00 3C */ lwz r31, 0x3c(r1)
/* 800D57E8 000D2728  80 01 00 54 */ lwz r0, 0x54(r1)
/* 800D57EC 000D272C  7C 08 03 A6 */ mtlr r0
/* 800D57F0 000D2730  38 21 00 50 */ addi r1, r1, 0x50
/* 800D57F4 000D2734  4E 80 00 20 */ blr