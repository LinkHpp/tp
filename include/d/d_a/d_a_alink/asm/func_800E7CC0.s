/* 800E7CC0 000E4C00  94 21 FF E0 */ stwu r1, -0x20(r1)
/* 800E7CC4 000E4C04  7C 08 02 A6 */ mflr r0
/* 800E7CC8 000E4C08  90 01 00 24 */ stw r0, 0x24(r1)
/* 800E7CCC 000E4C0C  39 61 00 20 */ addi r11, r1, 0x20
/* 800E7CD0 000E4C10  48 27 A5 0D */ bl _savegpr_29
/* 800E7CD4 000E4C14  7C 7D 1B 78 */ mr r29, r3
/* 800E7CD8 000E4C18  3B FD 1F D0 */ addi r31, r29, 0x1fd0
/* 800E7CDC 000E4C1C  38 80 00 96 */ li r4, 0x96
/* 800E7CE0 000E4C20  38 A0 00 02 */ li r5, 2
/* 800E7CE4 000E4C24  48 00 01 ED */ bl daAlink_c_NS_setWallGrabStatus
/* 800E7CE8 000E4C28  7F A3 EB 78 */ mr r3, r29
/* 800E7CEC 000E4C2C  38 80 00 00 */ li r4, 0
/* 800E7CF0 000E4C30  4B FC BA 45 */ bl daAlink_c_NS_setShapeAngleToAtnActor
/* 800E7CF4 000E4C34  7F E3 FB 78 */ mr r3, r31
/* 800E7CF8 000E4C38  48 07 67 D5 */ bl daPy_frameCtrl_c_NS_checkAnmEnd
/* 800E7CFC 000E4C3C  54 60 06 3F */ clrlwi. r0, r3, 0x18
/* 800E7D00 000E4C40  40 82 00 2C */ bne lbl_800E7D2C
/* 800E7D04 000E4C44  C0 3D 33 AC */ lfs f1, 0x33ac(r29)
/* 800E7D08 000E4C48  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800E7D0C 000E4C4C  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E7D10 000E4C50  40 81 00 78 */ ble lbl_800E7D88
/* 800E7D14 000E4C54  C0 3F 00 10 */ lfs f1, 0x10(r31)
/* 800E7D18 000E4C58  3C 60 80 39 */ lis r3, lbl_8038E7CC@ha
/* 800E7D1C 000E4C5C  38 63 E7 CC */ addi r3, r3, lbl_8038E7CC@l
/* 800E7D20 000E4C60  C0 03 00 10 */ lfs f0, 0x10(r3)
/* 800E7D24 000E4C64  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E7D28 000E4C68  40 81 00 60 */ ble lbl_800E7D88
lbl_800E7D2C:
/* 800E7D2C 000E4C6C  8B DD 2F A3 */ lbz r30, 0x2fa3(r29)
/* 800E7D30 000E4C70  83 FD 28 48 */ lwz r31, 0x2848(r29)
/* 800E7D34 000E4C74  7F A3 EB 78 */ mr r3, r29
/* 800E7D38 000E4C78  4B FD B6 81 */ bl daAlink_c_NS_procWaitInit
/* 800E7D3C 000E4C7C  7F A3 EB 78 */ mr r3, r29
/* 800E7D40 000E4C80  38 80 01 82 */ li r4, 0x182
/* 800E7D44 000E4C84  4B FC 47 0D */ bl daAlink_c_NS_getMainBckData
/* 800E7D48 000E4C88  A0 83 00 02 */ lhz r4, 2(r3)
/* 800E7D4C 000E4C8C  7F A3 EB 78 */ mr r3, r29
/* 800E7D50 000E4C90  C0 22 92 C0 */ lfs f1, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800E7D54 000E4C94  C0 42 92 C4 */ lfs f2, lbl_80452CC4-_SDA2_BASE_(r2)
/* 800E7D58 000E4C98  4B FC 56 51 */ bl daAlink_c_NS_setUpperAnimeBaseSpeed
/* 800E7D5C 000E4C9C  38 00 00 03 */ li r0, 3
/* 800E7D60 000E4CA0  98 1D 2F 96 */ stb r0, 0x2f96(r29)
/* 800E7D64 000E4CA4  38 00 00 09 */ li r0, 9
/* 800E7D68 000E4CA8  98 1D 2F 97 */ stb r0, 0x2f97(r29)
/* 800E7D6C 000E4CAC  28 1F 00 00 */ cmplwi r31, 0
/* 800E7D70 000E4CB0  41 82 00 4C */ beq lbl_800E7DBC
/* 800E7D74 000E4CB4  9B DD 2F A3 */ stb r30, 0x2fa3(r29)
/* 800E7D78 000E4CB8  38 7D 28 44 */ addi r3, r29, 0x2844
/* 800E7D7C 000E4CBC  7F E4 FB 78 */ mr r4, r31
/* 800E7D80 000E4CC0  48 07 6F 39 */ bl daPy_actorKeep_c_NS_setData
/* 800E7D84 000E4CC4  48 00 00 38 */ b lbl_800E7DBC
lbl_800E7D88:
/* 800E7D88 000E4CC8  C0 3F 00 10 */ lfs f1, 0x10(r31)
/* 800E7D8C 000E4CCC  C0 02 93 34 */ lfs f0, lbl_80452D34-_SDA2_BASE_(r2)
/* 800E7D90 000E4CD0  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800E7D94 000E4CD4  4C 41 13 82 */ cror 2, 1, 2
/* 800E7D98 000E4CD8  40 82 00 18 */ bne lbl_800E7DB0
/* 800E7D9C 000E4CDC  38 00 00 03 */ li r0, 3
/* 800E7DA0 000E4CE0  98 1D 2F 92 */ stb r0, 0x2f92(r29)
/* 800E7DA4 000E4CE4  38 00 00 09 */ li r0, 9
/* 800E7DA8 000E4CE8  98 1D 2F 93 */ stb r0, 0x2f93(r29)
/* 800E7DAC 000E4CEC  48 00 00 10 */ b lbl_800E7DBC
lbl_800E7DB0:
/* 800E7DB0 000E4CF0  38 00 00 FE */ li r0, 0xfe
/* 800E7DB4 000E4CF4  98 1D 2F 92 */ stb r0, 0x2f92(r29)
/* 800E7DB8 000E4CF8  98 1D 2F 93 */ stb r0, 0x2f93(r29)
lbl_800E7DBC:
/* 800E7DBC 000E4CFC  38 60 00 01 */ li r3, 1
/* 800E7DC0 000E4D00  39 61 00 20 */ addi r11, r1, 0x20
/* 800E7DC4 000E4D04  48 27 A4 65 */ bl _restgpr_29
/* 800E7DC8 000E4D08  80 01 00 24 */ lwz r0, 0x24(r1)
/* 800E7DCC 000E4D0C  7C 08 03 A6 */ mtlr r0
/* 800E7DD0 000E4D10  38 21 00 20 */ addi r1, r1, 0x20
/* 800E7DD4 000E4D14  4E 80 00 20 */ blr