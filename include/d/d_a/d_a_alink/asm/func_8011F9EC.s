/* 8011F9EC 0011C92C  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 8011F9F0 0011C930  7C 08 02 A6 */ mflr r0
/* 8011F9F4 0011C934  90 01 00 24 */ stw r0, 0x24(r1)
/* 8011F9F8 0011C938  39 61 00 20 */ addi r11, r1, 0x20
/* 8011F9FC 0011C93C  48 24 27 E1 */ bl _savegpr_29
/* 8011FA00 0011C940  7C 7E 1B 78 */ mr r30, r3
/* 8011FA04 0011C944  3C 60 80 3B */ lis r3, lbl_803AF990@ha
/* 8011FA08 0011C948  3B E3 F9 90 */ addi r31, r3, lbl_803AF990@l
/* 8011FA0C 0011C94C  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 8011FA10 0011C950  3B A3 01 88 */ addi r29, r3, g_meter2_info@l
/* 8011FA14 0011C954  88 1D 00 C0 */ lbz r0, 0xc0(r29)
/* 8011FA18 0011C958  28 00 00 00 */ cmplwi r0, 0
/* 8011FA1C 0011C95C  41 82 01 8C */ beq lbl_8011FBA8
/* 8011FA20 0011C960  28 00 00 03 */ cmplwi r0, 3
/* 8011FA24 0011C964  41 82 00 2C */ beq lbl_8011FA50
/* 8011FA28 0011C968  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8011FA2C 0011C96C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8011FA30 0011C970  38 63 4E C8 */ addi r3, r3, 0x4ec8
/* 8011FA34 0011C974  7F C4 F3 78 */ mr r4, r30
/* 8011FA38 0011C978  38 A0 00 00 */ li r5, 0
/* 8011FA3C 0011C97C  3C C0 00 01 */ lis r6, 0x0000FFFF@ha
/* 8011FA40 0011C980  38 C6 FF FF */ addi r6, r6, 0x0000FFFF@l
/* 8011FA44 0011C984  4B F2 37 29 */ bl compulsory__14dEvt_control_cFPvPCcUs
/* 8011FA48 0011C988  2C 03 00 00 */ cmpwi r3, 0
/* 8011FA4C 0011C98C  41 82 01 50 */ beq lbl_8011FB9C
lbl_8011FA50:
/* 8011FA50 0011C990  80 1E 05 70 */ lwz r0, 0x570(r30)
/* 8011FA54 0011C994  60 00 40 00 */ ori r0, r0, 0x4000
/* 8011FA58 0011C998  90 1E 05 70 */ stw r0, 0x570(r30)
/* 8011FA5C 0011C99C  88 1D 00 C0 */ lbz r0, 0xc0(r29)
/* 8011FA60 0011C9A0  28 00 00 03 */ cmplwi r0, 3
/* 8011FA64 0011C9A4  40 82 00 E0 */ bne lbl_8011FB44
/* 8011FA68 0011C9A8  80 1E 05 70 */ lwz r0, 0x570(r30)
/* 8011FA6C 0011C9AC  54 00 07 7B */ rlwinm. r0, r0, 0, 0x1d, 0x1d
/* 8011FA70 0011C9B0  40 82 00 AC */ bne lbl_8011FB1C
/* 8011FA74 0011C9B4  4B F1 00 4D */ bl dComIfGp_TargetWarpPt_get__Fv
/* 8011FA78 0011C9B8  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 8011FA7C 0011C9BC  28 00 00 03 */ cmplwi r0, 3
/* 8011FA80 0011C9C0  40 82 00 1C */ bne lbl_8011FA9C
/* 8011FA84 0011C9C4  3C 60 80 39 */ lis r3, lbl_80392094@ha
/* 8011FA88 0011C9C8  38 63 20 94 */ addi r3, r3, lbl_80392094@l
/* 8011FA8C 0011C9CC  38 03 01 44 */ addi r0, r3, 0x144
/* 8011FA90 0011C9D0  90 1E 01 00 */ stw r0, 0x100(r30)
/* 8011FA94 0011C9D4  38 9F 32 C0 */ addi r4, r31, 0x32c0
/* 8011FA98 0011C9D8  48 00 00 90 */ b lbl_8011FB28
lbl_8011FA9C:
/* 8011FA9C 0011C9DC  4B F1 00 25 */ bl dComIfGp_TargetWarpPt_get__Fv
/* 8011FAA0 0011C9E0  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 8011FAA4 0011C9E4  28 00 00 06 */ cmplwi r0, 6
/* 8011FAA8 0011C9E8  40 82 00 1C */ bne lbl_8011FAC4
/* 8011FAAC 0011C9EC  3C 60 80 39 */ lis r3, lbl_80392094@ha
/* 8011FAB0 0011C9F0  38 63 20 94 */ addi r3, r3, lbl_80392094@l
/* 8011FAB4 0011C9F4  38 03 01 4D */ addi r0, r3, 0x14d
/* 8011FAB8 0011C9F8  90 1E 01 00 */ stw r0, 0x100(r30)
/* 8011FABC 0011C9FC  38 9F 32 D4 */ addi r4, r31, 0x32d4
/* 8011FAC0 0011CA00  48 00 00 68 */ b lbl_8011FB28
lbl_8011FAC4:
/* 8011FAC4 0011CA04  4B F0 FF FD */ bl dComIfGp_TargetWarpPt_get__Fv
/* 8011FAC8 0011CA08  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 8011FACC 0011CA0C  28 00 00 09 */ cmplwi r0, 9
/* 8011FAD0 0011CA10  40 82 00 1C */ bne lbl_8011FAEC
/* 8011FAD4 0011CA14  3C 60 80 39 */ lis r3, lbl_80392094@ha
/* 8011FAD8 0011CA18  38 63 20 94 */ addi r3, r3, lbl_80392094@l
/* 8011FADC 0011CA1C  38 03 01 56 */ addi r0, r3, 0x156
/* 8011FAE0 0011CA20  90 1E 01 00 */ stw r0, 0x100(r30)
/* 8011FAE4 0011CA24  38 9F 32 E8 */ addi r4, r31, 0x32e8
/* 8011FAE8 0011CA28  48 00 00 40 */ b lbl_8011FB28
lbl_8011FAEC:
/* 8011FAEC 0011CA2C  4B F0 FF D5 */ bl dComIfGp_TargetWarpPt_get__Fv
/* 8011FAF0 0011CA30  54 60 06 3E */ clrlwi r0, r3, 0x18
/* 8011FAF4 0011CA34  28 00 00 08 */ cmplwi r0, 8
/* 8011FAF8 0011CA38  40 82 00 1C */ bne lbl_8011FB14
/* 8011FAFC 0011CA3C  3C 60 80 39 */ lis r3, lbl_80392094@ha
/* 8011FB00 0011CA40  38 63 20 94 */ addi r3, r3, lbl_80392094@l
/* 8011FB04 0011CA44  38 03 01 60 */ addi r0, r3, 0x160
/* 8011FB08 0011CA48  90 1E 01 00 */ stw r0, 0x100(r30)
/* 8011FB0C 0011CA4C  38 9F 32 FC */ addi r4, r31, 0x32fc
/* 8011FB10 0011CA50  48 00 00 18 */ b lbl_8011FB28
lbl_8011FB14:
/* 8011FB14 0011CA54  38 9F 32 B0 */ addi r4, r31, 0x32b0
/* 8011FB18 0011CA58  48 00 00 10 */ b lbl_8011FB28
lbl_8011FB1C:
/* 8011FB1C 0011CA5C  38 60 00 FF */ li r3, 0xff
/* 8011FB20 0011CA60  4B F0 FF 79 */ bl dComIfGp_TargetWarpPt_set__FUc
/* 8011FB24 0011CA64  38 9F 32 B0 */ addi r4, r31, 0x32b0
lbl_8011FB28:
/* 8011FB28 0011CA68  7F C3 F3 78 */ mr r3, r30
/* 8011FB2C 0011CA6C  3C A0 00 01 */ lis r5, 0x0000FFFF@ha
/* 8011FB30 0011CA70  38 A5 FF FF */ addi r5, r5, 0x0000FFFF@l
/* 8011FB34 0011CA74  38 C0 00 01 */ li r6, 1
/* 8011FB38 0011CA78  38 E0 00 01 */ li r7, 1
/* 8011FB3C 0011CA7C  4B EF B8 91 */ bl fopAcM_orderOtherEvent__FP10fopAc_ac_cPCcUsUsUs
/* 8011FB40 0011CA80  48 00 00 5C */ b lbl_8011FB9C
lbl_8011FB44:
/* 8011FB44 0011CA84  38 00 00 05 */ li r0, 5
/* 8011FB48 0011CA88  B0 1E 06 04 */ sth r0, 0x604(r30)
/* 8011FB4C 0011CA8C  88 1D 00 C0 */ lbz r0, 0xc0(r29)
/* 8011FB50 0011CA90  28 00 00 01 */ cmplwi r0, 1
/* 8011FB54 0011CA94  40 82 00 40 */ bne lbl_8011FB94
/* 8011FB58 0011CA98  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 8011FB5C 0011CA9C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 8011FB60 0011CAA0  85 83 4E 20 */ lwzu r12, 0x4e20(r3)
/* 8011FB64 0011CAA4  81 8C 00 BC */ lwz r12, 0xbc(r12)
/* 8011FB68 0011CAA8  7D 89 03 A6 */ mtctr r12
/* 8011FB6C 0011CAAC  4E 80 04 21 */ bctrl
/* 8011FB70 0011CAB0  80 03 00 10 */ lwz r0, 0x10(r3)
/* 8011FB74 0011CAB4  54 03 46 3E */ srwi r3, r0, 0x18
/* 8011FB78 0011CAB8  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 8011FB7C 0011CABC  38 80 00 00 */ li r4, 0
/* 8011FB80 0011CAC0  38 A0 FF FF */ li r5, -1
/* 8011FB84 0011CAC4  A8 DE 04 E6 */ lha r6, 0x4e6(r30)
/* 8011FB88 0011CAC8  38 E0 FF FF */ li r7, -1
/* 8011FB8C 0011CACC  4B F0 75 E5 */ bl dStage_changeScene__FifUlScsi
/* 8011FB90 0011CAD0  48 00 00 0C */ b lbl_8011FB9C
lbl_8011FB94:
/* 8011FB94 0011CAD4  7F C3 F3 78 */ mr r3, r30
/* 8011FB98 0011CAD8  4B FF FC 41 */ bl dungeonReturnWarp__9daAlink_cFv
lbl_8011FB9C:
/* 8011FB9C 0011CADC  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 8011FBA0 0011CAE0  38 63 01 88 */ addi r3, r3, g_meter2_info@l
/* 8011FBA4 0011CAE4  48 0F CE 39 */ bl resetWarpStatus__13dMeter2Info_cFv
lbl_8011FBA8:
/* 8011FBA8 0011CAE8  39 61 00 20 */ addi r11, r1, 0x20
/* 8011FBAC 0011CAEC  48 24 26 7D */ bl _restgpr_29
/* 8011FBB0 0011CAF0  80 01 00 24 */ lwz r0, 0x24(r1)
/* 8011FBB4 0011CAF4  7C 08 03 A6 */ mtlr r0
/* 8011FBB8 0011CAF8  38 21 00 20 */ addi r1, r1, 0x20
/* 8011FBBC 0011CAFC  4E 80 00 20 */ blr
