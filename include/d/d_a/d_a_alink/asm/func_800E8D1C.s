/* 800E8D1C 000E5C5C  94 21 FF C0 */ stwu r1, -0x40(r1)
/* 800E8D20 000E5C60  7C 08 02 A6 */ mflr r0
/* 800E8D24 000E5C64  90 01 00 44 */ stw r0, 0x44(r1)
/* 800E8D28 000E5C68  DB E1 00 30 */ stfd f31, 0x30(r1)
/* 800E8D2C 000E5C6C  F3 E1 00 38 */ psq_st f31, 56(r1), 0, 0
/* 800E8D30 000E5C70  93 E1 00 2C */ stw r31, 0x2c(r1)
/* 800E8D34 000E5C74  93 C1 00 28 */ stw r30, 0x28(r1)
/* 800E8D38 000E5C78  7C 7F 1B 78 */ mr r31, r3
/* 800E8D3C 000E5C7C  7C 85 23 78 */ mr r5, r4
/* 800E8D40 000E5C80  38 80 00 00 */ li r4, 0
/* 800E8D44 000E5C84  4B FF F1 F9 */ bl daAlink_c_NS_setPushPullKeepData
/* 800E8D48 000E5C88  2C 03 00 00 */ cmpwi r3, 0
/* 800E8D4C 000E5C8C  40 82 00 0C */ bne lbl_800E8D58
/* 800E8D50 000E5C90  38 60 00 00 */ li r3, 0
/* 800E8D54 000E5C94  48 00 01 D0 */ b lbl_800E8F24
lbl_800E8D58:
/* 800E8D58 000E5C98  7F E3 FB 78 */ mr r3, r31
/* 800E8D5C 000E5C9C  38 80 00 39 */ li r4, 0x39
/* 800E8D60 000E5CA0  4B FD 92 0D */ bl daAlink_c_NS_commonProcInit
/* 800E8D64 000E5CA4  7F E3 FB 78 */ mr r3, r31
/* 800E8D68 000E5CA8  4B FF F3 3D */ bl daAlink_c_NS_checkPushPullTurnBlock
/* 800E8D6C 000E5CAC  B0 7F 30 08 */ sth r3, 0x3008(r31)
/* 800E8D70 000E5CB0  A8 1F 30 08 */ lha r0, 0x3008(r31)
/* 800E8D74 000E5CB4  B0 1F 30 12 */ sth r0, 0x3012(r31)
/* 800E8D78 000E5CB8  A8 1F 30 08 */ lha r0, 0x3008(r31)
/* 800E8D7C 000E5CBC  2C 00 00 00 */ cmpwi r0, 0
/* 800E8D80 000E5CC0  41 82 00 18 */ beq lbl_800E8D98
/* 800E8D84 000E5CC4  C3 E2 92 B8 */ lfs f31, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800E8D88 000E5CC8  7F E3 FB 78 */ mr r3, r31
/* 800E8D8C 000E5CCC  38 80 00 3B */ li r4, 0x3b
/* 800E8D90 000E5CD0  4B FC 41 F1 */ bl daAlink_c_NS_setSingleAnimeBase
/* 800E8D94 000E5CD4  48 00 00 28 */ b lbl_800E8DBC
lbl_800E8D98:
/* 800E8D98 000E5CD8  7F E3 FB 78 */ mr r3, r31
/* 800E8D9C 000E5CDC  4B FF F5 B9 */ bl daAlink_c_NS_getPushPullAnimeSpeed
/* 800E8DA0 000E5CE0  FF E0 08 90 */ fmr f31, f1
/* 800E8DA4 000E5CE4  7F E3 FB 78 */ mr r3, r31
/* 800E8DA8 000E5CE8  38 80 00 3A */ li r4, 0x3a
/* 800E8DAC 000E5CEC  3C A0 80 39 */ lis r5, lbl_8038E210@ha
/* 800E8DB0 000E5CF0  38 A5 E2 10 */ addi r5, r5, lbl_8038E210@l
/* 800E8DB4 000E5CF4  C0 45 00 24 */ lfs f2, 0x24(r5)
/* 800E8DB8 000E5CF8  4B FC 42 29 */ bl daAlink_c_NS_setSingleAnimeBaseSpeed
lbl_800E8DBC:
/* 800E8DBC 000E5CFC  D3 FF 1F DC */ stfs f31, 0x1fdc(r31)
/* 800E8DC0 000E5D00  38 00 00 01 */ li r0, 1
/* 800E8DC4 000E5D04  90 1F 31 98 */ stw r0, 0x3198(r31)
/* 800E8DC8 000E5D08  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800E8DCC 000E5D0C  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800E8DD0 000E5D10  38 63 0F 38 */ addi r3, r3, 0xf38
/* 800E8DD4 000E5D14  A0 9F 1E 1E */ lhz r4, 0x1e1e(r31)
/* 800E8DD8 000E5D18  4B F8 B8 41 */ bl cBgS_NS_GetActorPointer
/* 800E8DDC 000E5D1C  7C 7E 1B 78 */ mr r30, r3
/* 800E8DE0 000E5D20  7F E4 FB 78 */ mr r4, r31
/* 800E8DE4 000E5D24  4B F3 19 2D */ bl fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 800E8DE8 000E5D28  B0 7F 30 0E */ sth r3, 0x300e(r31)
/* 800E8DEC 000E5D2C  C0 5E 04 D8 */ lfs f2, 0x4d8(r30)
/* 800E8DF0 000E5D30  C0 1E 04 D0 */ lfs f0, 0x4d0(r30)
/* 800E8DF4 000E5D34  D0 01 00 0C */ stfs f0, 0xc(r1)
/* 800E8DF8 000E5D38  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E8DFC 000E5D3C  D0 21 00 10 */ stfs f1, 0x10(r1)
/* 800E8E00 000E5D40  D0 41 00 14 */ stfs f2, 0x14(r1)
/* 800E8E04 000E5D44  C0 5F 04 D8 */ lfs f2, 0x4d8(r31)
/* 800E8E08 000E5D48  C0 1F 04 D0 */ lfs f0, 0x4d0(r31)
/* 800E8E0C 000E5D4C  D0 01 00 18 */ stfs f0, 0x18(r1)
/* 800E8E10 000E5D50  D0 21 00 1C */ stfs f1, 0x1c(r1)
/* 800E8E14 000E5D54  D0 41 00 20 */ stfs f2, 0x20(r1)
/* 800E8E18 000E5D58  38 61 00 0C */ addi r3, r1, 0xc
/* 800E8E1C 000E5D5C  38 81 00 18 */ addi r4, r1, 0x18
/* 800E8E20 000E5D60  48 25 E5 7D */ bl PSVECSquareDistance
/* 800E8E24 000E5D64  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E8E28 000E5D68  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E8E2C 000E5D6C  40 81 00 58 */ ble lbl_800E8E84
/* 800E8E30 000E5D70  FC 00 08 34 */ frsqrte f0, f1
/* 800E8E34 000E5D74  C8 82 92 E8 */ lfd f4, lbl_80452CE8-_SDA2_BASE_(r2)
/* 800E8E38 000E5D78  FC 44 00 32 */ fmul f2, f4, f0
/* 800E8E3C 000E5D7C  C8 62 92 F0 */ lfd f3, lbl_80452CF0-_SDA2_BASE_(r2)
/* 800E8E40 000E5D80  FC 00 00 32 */ fmul f0, f0, f0
/* 800E8E44 000E5D84  FC 01 00 32 */ fmul f0, f1, f0
/* 800E8E48 000E5D88  FC 03 00 28 */ fsub f0, f3, f0
/* 800E8E4C 000E5D8C  FC 02 00 32 */ fmul f0, f2, f0
/* 800E8E50 000E5D90  FC 44 00 32 */ fmul f2, f4, f0
/* 800E8E54 000E5D94  FC 00 00 32 */ fmul f0, f0, f0
/* 800E8E58 000E5D98  FC 01 00 32 */ fmul f0, f1, f0
/* 800E8E5C 000E5D9C  FC 03 00 28 */ fsub f0, f3, f0
/* 800E8E60 000E5DA0  FC 02 00 32 */ fmul f0, f2, f0
/* 800E8E64 000E5DA4  FC 44 00 32 */ fmul f2, f4, f0
/* 800E8E68 000E5DA8  FC 00 00 32 */ fmul f0, f0, f0
/* 800E8E6C 000E5DAC  FC 01 00 32 */ fmul f0, f1, f0
/* 800E8E70 000E5DB0  FC 03 00 28 */ fsub f0, f3, f0
/* 800E8E74 000E5DB4  FC 02 00 32 */ fmul f0, f2, f0
/* 800E8E78 000E5DB8  FC 21 00 32 */ fmul f1, f1, f0
/* 800E8E7C 000E5DBC  FC 20 08 18 */ frsp f1, f1
/* 800E8E80 000E5DC0  48 00 00 88 */ b lbl_800E8F08
lbl_800E8E84:
/* 800E8E84 000E5DC4  C8 02 92 F8 */ lfd f0, lbl_80452CF8-_SDA2_BASE_(r2)
/* 800E8E88 000E5DC8  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E8E8C 000E5DCC  40 80 00 10 */ bge lbl_800E8E9C
/* 800E8E90 000E5DD0  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E8E94 000E5DD4  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
/* 800E8E98 000E5DD8  48 00 00 70 */ b lbl_800E8F08
lbl_800E8E9C:
/* 800E8E9C 000E5DDC  D0 21 00 08 */ stfs f1, 8(r1)
/* 800E8EA0 000E5DE0  80 81 00 08 */ lwz r4, 8(r1)
/* 800E8EA4 000E5DE4  54 83 00 50 */ rlwinm r3, r4, 0, 1, 8
/* 800E8EA8 000E5DE8  3C 00 7F 80 */ lis r0, 0x7f80
/* 800E8EAC 000E5DEC  7C 03 00 00 */ cmpw r3, r0
/* 800E8EB0 000E5DF0  41 82 00 14 */ beq lbl_800E8EC4
/* 800E8EB4 000E5DF4  40 80 00 40 */ bge lbl_800E8EF4
/* 800E8EB8 000E5DF8  2C 03 00 00 */ cmpwi r3, 0
/* 800E8EBC 000E5DFC  41 82 00 20 */ beq lbl_800E8EDC
/* 800E8EC0 000E5E00  48 00 00 34 */ b lbl_800E8EF4
lbl_800E8EC4:
/* 800E8EC4 000E5E04  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E8EC8 000E5E08  41 82 00 0C */ beq lbl_800E8ED4
/* 800E8ECC 000E5E0C  38 00 00 01 */ li r0, 1
/* 800E8ED0 000E5E10  48 00 00 28 */ b lbl_800E8EF8
lbl_800E8ED4:
/* 800E8ED4 000E5E14  38 00 00 02 */ li r0, 2
/* 800E8ED8 000E5E18  48 00 00 20 */ b lbl_800E8EF8
lbl_800E8EDC:
/* 800E8EDC 000E5E1C  54 80 02 7F */ clrlwi. r0, r4, 9
/* 800E8EE0 000E5E20  41 82 00 0C */ beq lbl_800E8EEC
/* 800E8EE4 000E5E24  38 00 00 05 */ li r0, 5
/* 800E8EE8 000E5E28  48 00 00 10 */ b lbl_800E8EF8
lbl_800E8EEC:
/* 800E8EEC 000E5E2C  38 00 00 03 */ li r0, 3
/* 800E8EF0 000E5E30  48 00 00 08 */ b lbl_800E8EF8
lbl_800E8EF4:
/* 800E8EF4 000E5E34  38 00 00 04 */ li r0, 4
lbl_800E8EF8:
/* 800E8EF8 000E5E38  2C 00 00 01 */ cmpwi r0, 1
/* 800E8EFC 000E5E3C  40 82 00 0C */ bne lbl_800E8F08
/* 800E8F00 000E5E40  3C 60 80 45 */ lis r3, lbl_80450AE0@ha
/* 800E8F04 000E5E44  C0 23 0A E0 */ lfs f1, lbl_80450AE0@l(r3)
lbl_800E8F08:
/* 800E8F08 000E5E48  D0 3F 34 7C */ stfs f1, 0x347c(r31)
/* 800E8F0C 000E5E4C  3C 60 80 40 */ lis r3, g_dComIfG_gameInfo@ha
/* 800E8F10 000E5E50  38 63 61 C0 */ addi r3, r3, g_dComIfG_gameInfo@l
/* 800E8F14 000E5E54  80 03 5F 18 */ lwz r0, 0x5f18(r3)
/* 800E8F18 000E5E58  64 00 04 00 */ oris r0, r0, 0x400
/* 800E8F1C 000E5E5C  90 03 5F 18 */ stw r0, 0x5f18(r3)
/* 800E8F20 000E5E60  38 60 00 01 */ li r3, 1
lbl_800E8F24:
/* 800E8F24 000E5E64  E3 E1 00 38 */ psq_l f31, 56(r1), 0, 0
/* 800E8F28 000E5E68  CB E1 00 30 */ lfd f31, 0x30(r1)
/* 800E8F2C 000E5E6C  83 E1 00 2C */ lwz r31, 0x2c(r1)
/* 800E8F30 000E5E70  83 C1 00 28 */ lwz r30, 0x28(r1)
/* 800E8F34 000E5E74  80 01 00 44 */ lwz r0, 0x44(r1)
/* 800E8F38 000E5E78  7C 08 03 A6 */ mtlr r0
/* 800E8F3C 000E5E7C  38 21 00 40 */ addi r1, r1, 0x40
/* 800E8F40 000E5E80  4E 80 00 20 */ blr