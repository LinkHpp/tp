/* 80219788 002166C8  94 21 FF 80 */ stwu r1, -0x80(r1)
/* 8021978C 002166CC  7C 08 02 A6 */ mflr r0
/* 80219790 002166D0  90 01 00 84 */ stw r0, 0x84(r1)
/* 80219794 002166D4  DB E1 00 70 */ stfd f31, 0x70(r1)
/* 80219798 002166D8  F3 E1 00 78 */ psq_st f31, 120(r1), 0, 0
/* 8021979C 002166DC  DB C1 00 60 */ stfd f30, 0x60(r1)
/* 802197A0 002166E0  F3 C1 00 68 */ psq_st f30, 104(r1), 0, 0
/* 802197A4 002166E4  39 61 00 60 */ addi r11, r1, 0x60
/* 802197A8 002166E8  48 14 8A 25 */ bl _savegpr_25
/* 802197AC 002166EC  7C 7D 1B 78 */ mr r29, r3
/* 802197B0 002166F0  7C DE 33 78 */ mr r30, r6
/* 802197B4 002166F4  80 63 03 28 */ lwz r3, 0x328(r3)
/* 802197B8 002166F8  48 03 BE 95 */ bl isVisible__13CPaneMgrAlphaFv
/* 802197BC 002166FC  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802197C0 00216700  40 82 00 24 */ bne lbl_802197E4
/* 802197C4 00216704  80 7D 03 18 */ lwz r3, 0x318(r29)
/* 802197C8 00216708  48 03 BE 85 */ bl isVisible__13CPaneMgrAlphaFv
/* 802197CC 0021670C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802197D0 00216710  40 82 00 14 */ bne lbl_802197E4
/* 802197D4 00216714  80 7D 03 04 */ lwz r3, 0x304(r29)
/* 802197D8 00216718  48 03 BE 75 */ bl isVisible__13CPaneMgrAlphaFv
/* 802197DC 0021671C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 802197E0 00216720  41 82 02 7C */ beq lbl_80219A5C
lbl_802197E4:
/* 802197E4 00216724  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802197E8 00216728  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 802197EC 0021672C  C0 43 00 F0 */ lfs f2, 0xf0(r3)
/* 802197F0 00216730  C0 23 00 18 */ lfs f1, 0x18(r3)
/* 802197F4 00216734  C0 03 00 84 */ lfs f0, 0x84(r3)
/* 802197F8 00216738  EC 01 00 32 */ fmuls f0, f1, f0
/* 802197FC 0021673C  EF C2 00 32 */ fmuls f30, f2, f0
/* 80219800 00216740  80 7D 03 28 */ lwz r3, 0x328(r29)
/* 80219804 00216744  48 03 BE 49 */ bl isVisible__13CPaneMgrAlphaFv
/* 80219808 00216748  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 8021980C 0021674C  41 82 00 0C */ beq lbl_80219818
/* 80219810 00216750  C0 5D 08 14 */ lfs f2, 0x814(r29)
/* 80219814 00216754  48 00 00 08 */ b lbl_8021981C
lbl_80219818:
/* 80219818 00216758  C0 5D 08 18 */ lfs f2, 0x818(r29)
lbl_8021981C:
/* 8021981C 0021675C  80 7D 03 28 */ lwz r3, 0x328(r29)
/* 80219820 00216760  8B 23 00 18 */ lbz r25, 0x18(r3)
/* 80219824 00216764  80 7D 03 18 */ lwz r3, 0x318(r29)
/* 80219828 00216768  88 03 00 18 */ lbz r0, 0x18(r3)
/* 8021982C 0021676C  C8 22 AE C0 */ lfd f1, lbl_804548C0-_SDA2_BASE_(r2)
/* 80219830 00216770  90 01 00 0C */ stw r0, 0xc(r1)
/* 80219834 00216774  3C 00 43 30 */ lis r0, 0x4330
/* 80219838 00216778  90 01 00 08 */ stw r0, 8(r1)
/* 8021983C 0021677C  C8 01 00 08 */ lfd f0, 8(r1)
/* 80219840 00216780  EC 00 08 28 */ fsubs f0, f0, f1
/* 80219844 00216784  EC 1E 00 32 */ fmuls f0, f30, f0
/* 80219848 00216788  EC 02 00 32 */ fmuls f0, f2, f0
/* 8021984C 0021678C  FC 00 00 1E */ fctiwz f0, f0
/* 80219850 00216790  D8 01 00 10 */ stfd f0, 0x10(r1)
/* 80219854 00216794  83 41 00 14 */ lwz r26, 0x14(r1)
/* 80219858 00216798  80 7D 03 04 */ lwz r3, 0x304(r29)
/* 8021985C 0021679C  88 63 00 18 */ lbz r3, 0x18(r3)
/* 80219860 002167A0  90 61 00 1C */ stw r3, 0x1c(r1)
/* 80219864 002167A4  90 01 00 18 */ stw r0, 0x18(r1)
/* 80219868 002167A8  C8 01 00 18 */ lfd f0, 0x18(r1)
/* 8021986C 002167AC  EC 00 08 28 */ fsubs f0, f0, f1
/* 80219870 002167B0  EC 1E 00 32 */ fmuls f0, f30, f0
/* 80219874 002167B4  FC 00 00 1E */ fctiwz f0, f0
/* 80219878 002167B8  D8 01 00 20 */ stfd f0, 0x20(r1)
/* 8021987C 002167BC  83 61 00 24 */ lwz r27, 0x24(r1)
/* 80219880 002167C0  80 7D 02 F8 */ lwz r3, 0x2f8(r29)
/* 80219884 002167C4  48 03 BF A5 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 80219888 002167C8  FF E0 08 90 */ fmr f31, f1
/* 8021988C 002167CC  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 80219890 002167D0  3B E3 01 88 */ addi r31, r3, g_meter2_info@l
/* 80219894 002167D4  A0 1F 00 AE */ lhz r0, 0xae(r31)
/* 80219898 002167D8  54 00 FF FF */ rlwinm. r0, r0, 0x1f, 0x1f, 0x1f
/* 8021989C 002167DC  40 82 00 28 */ bne lbl_802198C4
/* 802198A0 002167E0  A0 1F 00 A2 */ lhz r0, 0xa2(r31)
/* 802198A4 002167E4  54 00 07 BD */ rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802198A8 002167E8  40 82 00 1C */ bne lbl_802198C4
/* 802198AC 002167EC  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802198B0 002167F0  38 63 EB C8 */ addi r3, r3, lbl_8042EBC8@l
/* 802198B4 002167F4  88 03 04 2A */ lbz r0, 0x42a(r3)
/* 802198B8 002167F8  7C 19 03 78 */ mr r25, r0
/* 802198BC 002167FC  7C 1A 03 78 */ mr r26, r0
/* 802198C0 00216800  8B 63 04 2B */ lbz r27, 0x42b(r3)
lbl_802198C4:
/* 802198C4 00216804  57 C0 06 3F */ clrlwi. r0, r30, 0x18
/* 802198C8 00216808  40 82 00 08 */ bne lbl_802198D0
/* 802198CC 0021680C  3B 40 00 00 */ li r26, 0
lbl_802198D0:
/* 802198D0 00216810  80 7D 03 28 */ lwz r3, 0x328(r29)
/* 802198D4 00216814  57 20 06 3E */ clrlwi r0, r25, 0x18
/* 802198D8 00216818  C8 22 AE C0 */ lfd f1, lbl_804548C0-_SDA2_BASE_(r2)
/* 802198DC 0021681C  90 01 00 24 */ stw r0, 0x24(r1)
/* 802198E0 00216820  3C 00 43 30 */ lis r0, 0x4330
/* 802198E4 00216824  90 01 00 20 */ stw r0, 0x20(r1)
/* 802198E8 00216828  C8 01 00 20 */ lfd f0, 0x20(r1)
/* 802198EC 0021682C  EC 00 08 28 */ fsubs f0, f0, f1
/* 802198F0 00216830  EC 00 07 F2 */ fmuls f0, f0, f31
/* 802198F4 00216834  FC 00 00 1E */ fctiwz f0, f0
/* 802198F8 00216838  D8 01 00 18 */ stfd f0, 0x18(r1)
/* 802198FC 0021683C  80 81 00 1C */ lwz r4, 0x1c(r1)
/* 80219900 00216840  81 83 00 00 */ lwz r12, 0(r3)
/* 80219904 00216844  81 8C 00 0C */ lwz r12, 0xc(r12)
/* 80219908 00216848  7D 89 03 A6 */ mtctr r12
/* 8021990C 0021684C  4E 80 04 21 */ bctrl
/* 80219910 00216850  80 7D 03 18 */ lwz r3, 0x318(r29)
/* 80219914 00216854  57 40 06 3E */ clrlwi r0, r26, 0x18
/* 80219918 00216858  C8 22 AE C0 */ lfd f1, lbl_804548C0-_SDA2_BASE_(r2)
/* 8021991C 0021685C  90 01 00 14 */ stw r0, 0x14(r1)
/* 80219920 00216860  3C 00 43 30 */ lis r0, 0x4330
/* 80219924 00216864  90 01 00 10 */ stw r0, 0x10(r1)
/* 80219928 00216868  C8 01 00 10 */ lfd f0, 0x10(r1)
/* 8021992C 0021686C  EC 00 08 28 */ fsubs f0, f0, f1
/* 80219930 00216870  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80219934 00216874  FC 00 00 1E */ fctiwz f0, f0
/* 80219938 00216878  D8 01 00 08 */ stfd f0, 8(r1)
/* 8021993C 0021687C  80 81 00 0C */ lwz r4, 0xc(r1)
/* 80219940 00216880  81 83 00 00 */ lwz r12, 0(r3)
/* 80219944 00216884  81 8C 00 0C */ lwz r12, 0xc(r12)
/* 80219948 00216888  7D 89 03 A6 */ mtctr r12
/* 8021994C 0021688C  4E 80 04 21 */ bctrl
/* 80219950 00216890  80 7D 03 04 */ lwz r3, 0x304(r29)
/* 80219954 00216894  57 60 06 3E */ clrlwi r0, r27, 0x18
/* 80219958 00216898  C8 22 AE C0 */ lfd f1, lbl_804548C0-_SDA2_BASE_(r2)
/* 8021995C 0021689C  90 01 00 2C */ stw r0, 0x2c(r1)
/* 80219960 002168A0  3C 00 43 30 */ lis r0, 0x4330
/* 80219964 002168A4  90 01 00 28 */ stw r0, 0x28(r1)
/* 80219968 002168A8  C8 01 00 28 */ lfd f0, 0x28(r1)
/* 8021996C 002168AC  EC 00 08 28 */ fsubs f0, f0, f1
/* 80219970 002168B0  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80219974 002168B4  FC 00 00 1E */ fctiwz f0, f0
/* 80219978 002168B8  D8 01 00 30 */ stfd f0, 0x30(r1)
/* 8021997C 002168BC  80 81 00 34 */ lwz r4, 0x34(r1)
/* 80219980 002168C0  81 83 00 00 */ lwz r12, 0(r3)
/* 80219984 002168C4  81 8C 00 0C */ lwz r12, 0xc(r12)
/* 80219988 002168C8  7D 89 03 A6 */ mtctr r12
/* 8021998C 002168CC  4E 80 04 21 */ bctrl
/* 80219990 002168D0  3B C0 00 00 */ li r30, 0
/* 80219994 002168D4  3B 80 00 00 */ li r28, 0
/* 80219998 002168D8  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 8021999C 002168DC  3B 23 01 88 */ addi r25, r3, g_meter2_info@l
/* 802199A0 002168E0  3C 60 80 43 */ lis r3, lbl_8042EBC8@ha
/* 802199A4 002168E4  3B 43 EB C8 */ addi r26, r3, lbl_8042EBC8@l
/* 802199A8 002168E8  CB C2 AE C0 */ lfd f30, lbl_804548C0-_SDA2_BASE_(r2)
/* 802199AC 002168EC  3F 60 43 30 */ lis r27, 0x4330
lbl_802199B0:
/* 802199B0 002168F0  38 1C 00 D4 */ addi r0, r28, 0xd4
/* 802199B4 002168F4  7C 7D 00 2E */ lwzx r3, r29, r0
/* 802199B8 002168F8  88 83 00 18 */ lbz r4, 0x18(r3)
/* 802199BC 002168FC  A0 1F 00 AE */ lhz r0, 0xae(r31)
/* 802199C0 00216900  54 00 07 BD */ rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802199C4 00216904  40 82 00 54 */ bne lbl_80219A18
/* 802199C8 00216908  A0 19 00 A2 */ lhz r0, 0xa2(r25)
/* 802199CC 0021690C  54 00 07 BD */ rlwinm. r0, r0, 0, 0x1e, 0x1e
/* 802199D0 00216910  40 82 00 48 */ bne lbl_80219A18
/* 802199D4 00216914  C8 22 AE C0 */ lfd f1, lbl_804548C0-_SDA2_BASE_(r2)
/* 802199D8 00216918  90 81 00 34 */ stw r4, 0x34(r1)
/* 802199DC 0021691C  3C 80 43 30 */ lis r4, 0x4330
/* 802199E0 00216920  90 81 00 30 */ stw r4, 0x30(r1)
/* 802199E4 00216924  C8 01 00 30 */ lfd f0, 0x30(r1)
/* 802199E8 00216928  EC 40 08 28 */ fsubs f2, f0, f1
/* 802199EC 0021692C  88 1A 04 2C */ lbz r0, 0x42c(r26)
/* 802199F0 00216930  90 01 00 2C */ stw r0, 0x2c(r1)
/* 802199F4 00216934  90 81 00 28 */ stw r4, 0x28(r1)
/* 802199F8 00216938  C8 01 00 28 */ lfd f0, 0x28(r1)
/* 802199FC 0021693C  EC 20 08 28 */ fsubs f1, f0, f1
/* 80219A00 00216940  C0 02 AE CC */ lfs f0, lbl_804548CC-_SDA2_BASE_(r2)
/* 80219A04 00216944  EC 01 00 24 */ fdivs f0, f1, f0
/* 80219A08 00216948  EC 02 00 32 */ fmuls f0, f2, f0
/* 80219A0C 0021694C  FC 00 00 1E */ fctiwz f0, f0
/* 80219A10 00216950  D8 01 00 20 */ stfd f0, 0x20(r1)
/* 80219A14 00216954  80 81 00 24 */ lwz r4, 0x24(r1)
lbl_80219A18:
/* 80219A18 00216958  54 80 06 3E */ clrlwi r0, r4, 0x18
/* 80219A1C 0021695C  90 01 00 34 */ stw r0, 0x34(r1)
/* 80219A20 00216960  93 61 00 30 */ stw r27, 0x30(r1)
/* 80219A24 00216964  C8 01 00 30 */ lfd f0, 0x30(r1)
/* 80219A28 00216968  EC 00 F0 28 */ fsubs f0, f0, f30
/* 80219A2C 0021696C  EC 00 07 F2 */ fmuls f0, f0, f31
/* 80219A30 00216970  FC 00 00 1E */ fctiwz f0, f0
/* 80219A34 00216974  D8 01 00 28 */ stfd f0, 0x28(r1)
/* 80219A38 00216978  80 81 00 2C */ lwz r4, 0x2c(r1)
/* 80219A3C 0021697C  81 83 00 00 */ lwz r12, 0(r3)
/* 80219A40 00216980  81 8C 00 0C */ lwz r12, 0xc(r12)
/* 80219A44 00216984  7D 89 03 A6 */ mtctr r12
/* 80219A48 00216988  4E 80 04 21 */ bctrl
/* 80219A4C 0021698C  3B DE 00 01 */ addi r30, r30, 1
/* 80219A50 00216990  2C 1E 00 05 */ cmpwi r30, 5
/* 80219A54 00216994  3B 9C 00 04 */ addi r28, r28, 4
/* 80219A58 00216998  41 80 FF 58 */ blt lbl_802199B0
lbl_80219A5C:
/* 80219A5C 0021699C  E3 E1 00 78 */ psq_l f31, 120(r1), 0, 0
/* 80219A60 002169A0  CB E1 00 70 */ lfd f31, 0x70(r1)
/* 80219A64 002169A4  E3 C1 00 68 */ psq_l f30, 104(r1), 0, 0
/* 80219A68 002169A8  CB C1 00 60 */ lfd f30, 0x60(r1)
/* 80219A6C 002169AC  39 61 00 60 */ addi r11, r1, 0x60
/* 80219A70 002169B0  48 14 87 A9 */ bl _restgpr_25
/* 80219A74 002169B4  80 01 00 84 */ lwz r0, 0x84(r1)
/* 80219A78 002169B8  7C 08 03 A6 */ mtlr r0
/* 80219A7C 002169BC  38 21 00 80 */ addi r1, r1, 0x80
/* 80219A80 002169C0  4E 80 00 20 */ blr
