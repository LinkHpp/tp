/* 802077EC 0020472C  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 802077F0 00204730  7C 08 02 A6 */ mflr r0
/* 802077F4 00204734  90 01 00 44 */ stw r0, 0x44(r1)
/* 802077F8 00204738  DB E1 00 30 */ stfd f31, 0x30(r1)
/* 802077FC 0020473C  F3 E1 00 38 */ psq_st f31, 56(r1), 0, 0
/* 80207800 00204740  39 61 00 30 */ addi r11, r1, 0x30
/* 80207804 00204744  48 15 A9 D9 */ bl _savegpr_29
/* 80207808 00204748  7C 7F 1B 78 */ mr r31, r3
/* 8020780C 0020474C  80 63 00 30 */ lwz r3, 0x30(r3)
/* 80207810 00204750  48 04 E0 19 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 80207814 00204754  C0 02 AD 4C */ lfs f0, lbl_8045474C-_SDA2_BASE_(r2)
/* 80207818 00204758  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 8020781C 0020475C  41 82 00 B4 */ beq lbl_802078D0
/* 80207820 00204760  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 80207824 00204764  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 80207828 00204768  88 03 5E 4C */ lbz r0, 0x5e4c(r3)
/* 8020782C 0020476C  54 00 07 FF */ clrlwi. r0, r0, 0x1f
/* 80207830 00204770  41 82 00 20 */ beq lbl_80207850
/* 80207834 00204774  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 80207838 00204778  FC 20 00 90 */ fmr f1, f0
/* 8020783C 0020477C  48 04 DF 95 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 80207840 00204780  38 00 00 05 */ li r0, 5
/* 80207844 00204784  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 80207848 00204788  B0 03 00 16 */ sth r0, 0x16(r3)
/* 8020784C 0020478C  48 00 00 2C */ b lbl_80207878
lbl_80207850:
/* 80207850 00204790  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 80207854 00204794  FC 20 00 90 */ fmr f1, f0
/* 80207858 00204798  48 04 DF 79 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 8020785C 0020479C  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 80207860 002047A0  38 63 01 88 */ addi r3, r3, g_meter2_info@l
/* 80207864 002047A4  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 80207868 002047A8  80 63 01 0C */ lwz r3, 0x10c(r3)
/* 8020786C 002047AC  80 9F 00 30 */ lwz r4, 0x30(r31)
/* 80207870 002047B0  38 A0 00 05 */ li r5, 5
/* 80207874 002047B4  48 01 32 31 */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_80207878:
/* 80207878 002047B8  80 7F 00 30 */ lwz r3, 0x30(r31)
/* 8020787C 002047BC  48 04 DF AD */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 80207880 002047C0  C0 42 AD 4C */ lfs f2, lbl_8045474C-_SDA2_BASE_(r2)
/* 80207884 002047C4  FC 02 08 00 */ fcmpu cr0, f2, f1
/* 80207888 002047C8  40 82 00 48 */ bne lbl_802078D0
/* 8020788C 002047CC  88 1F 04 C5 */ lbz r0, 0x4c5(r31)
/* 80207890 002047D0  28 00 00 00 */ cmplwi r0, 0
/* 80207894 002047D4  40 82 00 3C */ bne lbl_802078D0
/* 80207898 002047D8  38 00 00 56 */ li r0, 0x56
/* 8020789C 002047DC  90 01 00 08 */ stw r0, 8(r1)
/* 802078A0 002047E0  80 6D 8D E8 */ lwz r3, lbl_80451368-_SDA_BASE_(r13)
/* 802078A4 002047E4  38 81 00 08 */ addi r4, r1, 8
/* 802078A8 002047E8  38 A0 00 00 */ li r5, 0
/* 802078AC 002047EC  38 C0 00 00 */ li r6, 0
/* 802078B0 002047F0  38 E0 00 00 */ li r7, 0
/* 802078B4 002047F4  FC 20 10 90 */ fmr f1, f2
/* 802078B8 002047F8  C0 62 AD 58 */ lfs f3, lbl_80454758-_SDA2_BASE_(r2)
/* 802078BC 002047FC  FC 80 18 90 */ fmr f4, f3
/* 802078C0 00204800  39 00 00 00 */ li r8, 0
/* 802078C4 00204804  48 0A 40 C1 */ bl seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc
/* 802078C8 00204808  38 00 00 01 */ li r0, 1
/* 802078CC 0020480C  98 1F 04 C5 */ stb r0, 0x4c5(r31)
lbl_802078D0:
/* 802078D0 00204810  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802078D4 00204814  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 802078D8 00204818  A8 83 04 22 */ lha r4, 0x422(r3)
/* 802078DC 0020481C  A8 A3 04 24 */ lha r5, 0x424(r3)
/* 802078E0 00204820  88 1F 04 DA */ lbz r0, 0x4da(r31)
/* 802078E4 00204824  28 00 00 00 */ cmplwi r0, 0
/* 802078E8 00204828  40 82 00 28 */ bne lbl_80207910
/* 802078EC 0020482C  88 1F 04 DB */ lbz r0, 0x4db(r31)
/* 802078F0 00204830  28 00 00 00 */ cmplwi r0, 0
/* 802078F4 00204834  40 82 00 1C */ bne lbl_80207910
/* 802078F8 00204838  88 1F 04 DC */ lbz r0, 0x4dc(r31)
/* 802078FC 0020483C  28 00 00 00 */ cmplwi r0, 0
/* 80207900 00204840  40 82 00 10 */ bne lbl_80207910
/* 80207904 00204844  88 1F 04 DD */ lbz r0, 0x4dd(r31)
/* 80207908 00204848  28 00 00 00 */ cmplwi r0, 0
/* 8020790C 0020484C  41 82 00 A8 */ beq lbl_802079B4
lbl_80207910:
/* 80207910 00204850  A8 7F 04 B4 */ lha r3, 0x4b4(r31)
/* 80207914 00204854  38 03 00 01 */ addi r0, r3, 1
/* 80207918 00204858  B0 1F 04 B4 */ sth r0, 0x4b4(r31)
/* 8020791C 0020485C  A8 1F 04 B4 */ lha r0, 0x4b4(r31)
/* 80207920 00204860  7C 64 2A 14 */ add r3, r4, r5
/* 80207924 00204864  7C 00 18 00 */ cmpw r0, r3
/* 80207928 00204868  41 80 00 0C */ blt lbl_80207934
/* 8020792C 0020486C  38 00 00 00 */ li r0, 0
/* 80207930 00204870  B0 1F 04 B4 */ sth r0, 0x4b4(r31)
lbl_80207934:
/* 80207934 00204874  A8 1F 04 B4 */ lha r0, 0x4b4(r31)
/* 80207938 00204878  7C 00 20 00 */ cmpw r0, r4
/* 8020793C 0020487C  40 80 00 3C */ bge lbl_80207978
/* 80207940 00204880  C8 42 AD 68 */ lfd f2, lbl_80454768-_SDA2_BASE_(r2)
/* 80207944 00204884  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 80207948 00204888  90 01 00 14 */ stw r0, 0x14(r1)
/* 8020794C 0020488C  3C 60 43 30 */ lis r3, 0x4330
/* 80207950 00204890  90 61 00 10 */ stw r3, 0x10(r1)
/* 80207954 00204894  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 80207958 00204898  EC 20 10 28 */ fsubs f1, f0, f2
/* 8020795C 0020489C  6C 80 80 00 */ xoris r0, r4, 0x8000
/* 80207960 002048A0  90 01 00 1C */ stw r0, 0x1c(r1)
/* 80207964 002048A4  90 61 00 18 */ stw r3, 0x18(r1)
/* 80207968 002048A8  C8 01 00 18 */ lfd f0, 0x18(r1)
/* 8020796C 002048AC  EC 00 10 28 */ fsubs f0, f0, f2
/* 80207970 002048B0  EF E1 00 24 */ fdivs f31, f1, f0
/* 80207974 002048B4  48 00 00 48 */ b lbl_802079BC
lbl_80207978:
/* 80207978 002048B8  7C 00 18 50 */ subf r0, r0, r3
/* 8020797C 002048BC  C8 42 AD 68 */ lfd f2, lbl_80454768-_SDA2_BASE_(r2)
/* 80207980 002048C0  6C 00 80 00 */ xoris r0, r0, 0x8000
/* 80207984 002048C4  90 01 00 1C */ stw r0, 0x1c(r1)
/* 80207988 002048C8  3C 60 43 30 */ lis r3, 0x4330
/* 8020798C 002048CC  90 61 00 18 */ stw r3, 0x18(r1)
/* 80207990 002048D0  C8 01 00 18 */ lfd f0, 0x18(r1)
/* 80207994 002048D4  EC 20 10 28 */ fsubs f1, f0, f2
/* 80207998 002048D8  6C A0 80 00 */ xoris r0, r5, 0x8000
/* 8020799C 002048DC  90 01 00 14 */ stw r0, 0x14(r1)
/* 802079A0 002048E0  90 61 00 10 */ stw r3, 0x10(r1)
/* 802079A4 002048E4  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 802079A8 002048E8  EC 00 10 28 */ fsubs f0, f0, f2
/* 802079AC 002048EC  EF E1 00 24 */ fdivs f31, f1, f0
/* 802079B0 002048F0  48 00 00 0C */ b lbl_802079BC
lbl_802079B4:
/* 802079B4 002048F4  38 00 00 00 */ li r0, 0
/* 802079B8 002048F8  B0 1F 04 B4 */ sth r0, 0x4b4(r31)
lbl_802079BC:
/* 802079BC 002048FC  3B A0 00 00 */ li r29, 0
/* 802079C0 00204900  3B C0 00 00 */ li r30, 0
lbl_802079C4:
/* 802079C4 00204904  38 1E 00 FC */ addi r0, r30, 0xfc
/* 802079C8 00204908  7C 7F 00 2E */ lwzx r3, r31, r0
/* 802079CC 0020490C  28 03 00 00 */ cmplwi r3, 0
/* 802079D0 00204910  41 82 00 28 */ beq lbl_802079F8
/* 802079D4 00204914  38 1D 04 DA */ addi r0, r29, 0x4da
/* 802079D8 00204918  7C 1F 00 AE */ lbzx r0, r31, r0
/* 802079DC 0020491C  28 00 00 00 */ cmplwi r0, 0
/* 802079E0 00204920  41 82 00 10 */ beq lbl_802079F0
/* 802079E4 00204924  FC 20 F8 90 */ fmr f1, f31
/* 802079E8 00204928  48 04 DD E9 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 802079EC 0020492C  48 00 00 0C */ b lbl_802079F8
lbl_802079F0:
/* 802079F0 00204930  C0 22 AD 48 */ lfs f1, lbl_80454748-_SDA2_BASE_(r2)
/* 802079F4 00204934  48 04 DD DD */ bl setAlphaRate__13CPaneMgrAlphaFf
lbl_802079F8:
/* 802079F8 00204938  3B BD 00 01 */ addi r29, r29, 1
/* 802079FC 0020493C  2C 1D 00 04 */ cmpwi r29, 4
/* 80207A00 00204940  3B DE 00 04 */ addi r30, r30, 4
/* 80207A04 00204944  41 80 FF C0 */ blt lbl_802079C4
/* 80207A08 00204948  E3 E1 00 38 */ psq_l f31, 56(r1), 0, 0
/* 80207A0C 0020494C  CB E1 00 30 */ lfd f31, 0x30(r1)
/* 80207A10 00204950  39 61 00 30 */ addi r11, r1, 0x30
/* 80207A14 00204954  48 15 A8 15 */ bl _restgpr_29
/* 80207A18 00204958  80 01 00 44 */ lwz r0, 0x44(r1)
/* 80207A1C 0020495C  7C 08 03 A6 */ mtlr r0
/* 80207A20 00204960  38 21 00 40 */ addi r1, r1, 0x40
/* 80207A24 00204964  4E 80 00 20 */ blr
