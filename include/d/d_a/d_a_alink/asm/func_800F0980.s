/* 800F0980 000ED8C0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 800F0984 000ED8C4  7C 08 02 A6 */ mflr r0
/* 800F0988 000ED8C8  90 01 00 14 */ stw r0, 0x14(r1)
/* 800F098C 000ED8CC  93 E1 00 0C */ stw r31, 0xc(r1)
/* 800F0990 000ED8D0  93 C1 00 08 */ stw r30, 8(r1)
/* 800F0994 000ED8D4  7C 7E 1B 78 */ mr r30, r3
/* 800F0998 000ED8D8  38 80 00 3C */ li r4, 0x3c
/* 800F099C 000ED8DC  4B FD 24 09 */ bl daAlink_c_NS_commonProcInitNotSameProc
/* 800F09A0 000ED8E0  2C 03 00 00 */ cmpwi r3, 0
/* 800F09A4 000ED8E4  40 82 00 0C */ bne lbl_800F09B0
/* 800F09A8 000ED8E8  38 60 00 00 */ li r3, 0
/* 800F09AC 000ED8EC  48 00 00 E0 */ b lbl_800F0A8C
lbl_800F09B0:
/* 800F09B0 000ED8F0  7F C3 F3 78 */ mr r3, r30
/* 800F09B4 000ED8F4  81 9E 06 28 */ lwz r12, 0x628(r30)
/* 800F09B8 000ED8F8  81 8C 01 88 */ lwz r12, 0x188(r12)
/* 800F09BC 000ED8FC  7D 89 03 A6 */ mtctr r12
/* 800F09C0 000ED900  4E 80 04 21 */ bctrl
/* 800F09C4 000ED904  28 03 00 00 */ cmplwi r3, 0
/* 800F09C8 000ED908  40 82 00 28 */ bne lbl_800F09F0
/* 800F09CC 000ED90C  7F C3 F3 78 */ mr r3, r30
/* 800F09D0 000ED910  38 80 02 6E */ li r4, 0x26e
/* 800F09D4 000ED914  38 A0 00 02 */ li r5, 2
/* 800F09D8 000ED918  C0 22 92 B8 */ lfs f1, lbl_80452CB8-_SDA2_BASE_(r2)
/* 800F09DC 000ED91C  C0 42 92 C0 */ lfs f2, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800F09E0 000ED920  38 C0 FF FF */ li r6, -1
/* 800F09E4 000ED924  C0 62 92 BC */ lfs f3, lbl_80452CBC-_SDA2_BASE_(r2)
/* 800F09E8 000ED928  4B FB CF 7D */ bl daAlink_c_NS_setUnderAnime
/* 800F09EC 000ED92C  48 00 00 20 */ b lbl_800F0A0C
lbl_800F09F0:
/* 800F09F0 000ED930  A0 1E 1F 80 */ lhz r0, 0x1f80(r30)
/* 800F09F4 000ED934  28 00 00 19 */ cmplwi r0, 0x19
/* 800F09F8 000ED938  40 82 00 14 */ bne lbl_800F0A0C
/* 800F09FC 000ED93C  7F C3 F3 78 */ mr r3, r30
/* 800F0A00 000ED940  38 80 00 02 */ li r4, 2
/* 800F0A04 000ED944  C0 22 92 BC */ lfs f1, lbl_80452CBC-_SDA2_BASE_(r2)
/* 800F0A08 000ED948  4B FB D0 E5 */ bl daAlink_c_NS_resetUnderAnime
lbl_800F0A0C:
/* 800F0A0C 000ED94C  7F C3 F3 78 */ mr r3, r30
/* 800F0A10 000ED950  4B FC 2E 35 */ bl daAlink_c_NS_initServiceWaitTime
/* 800F0A14 000ED954  7F C3 F3 78 */ mr r3, r30
/* 800F0A18 000ED958  4B FF EC 99 */ bl daAlink_c_NS_checkHorseGetOffAndSetDoStatus
/* 800F0A1C 000ED95C  3B E0 00 00 */ li r31, 0
/* 800F0A20 000ED960  7F C3 F3 78 */ mr r3, r30
/* 800F0A24 000ED964  4B FF C6 51 */ bl daAlink_c_NS_checkHorseNoUpperAnime
/* 800F0A28 000ED968  2C 03 00 00 */ cmpwi r3, 0
/* 800F0A2C 000ED96C  40 82 00 14 */ bne lbl_800F0A40
/* 800F0A30 000ED970  7F C3 F3 78 */ mr r3, r30
/* 800F0A34 000ED974  4B FC 89 0D */ bl daAlink_c_NS_checkEquipAnime
/* 800F0A38 000ED978  2C 03 00 00 */ cmpwi r3, 0
/* 800F0A3C 000ED97C  41 82 00 34 */ beq lbl_800F0A70
lbl_800F0A40:
/* 800F0A40 000ED980  C0 3E 33 AC */ lfs f1, 0x33ac(r30)
/* 800F0A44 000ED984  C0 02 92 A4 */ lfs f0, lbl_80452CA4-_SDA2_BASE_(r2)
/* 800F0A48 000ED988  FC 01 00 40 */ fcmpo cr0, f1, f0
/* 800F0A4C 000ED98C  41 81 00 24 */ bgt lbl_800F0A70
/* 800F0A50 000ED990  7F C3 F3 78 */ mr r3, r30
/* 800F0A54 000ED994  4B FF EB 45 */ bl daAlink_c_NS_checkHorseGetOff
/* 800F0A58 000ED998  2C 03 00 00 */ cmpwi r3, 0
/* 800F0A5C 000ED99C  41 82 00 14 */ beq lbl_800F0A70
/* 800F0A60 000ED9A0  7F C3 F3 78 */ mr r3, r30
/* 800F0A64 000ED9A4  4B FF E7 35 */ bl daAlink_c_NS_checkHorseGetOffDirection
/* 800F0A68 000ED9A8  2C 03 00 02 */ cmpwi r3, 2
/* 800F0A6C 000ED9AC  40 82 00 08 */ bne lbl_800F0A74
lbl_800F0A70:
/* 800F0A70 000ED9B0  3B E0 00 01 */ li r31, 1
lbl_800F0A74:
/* 800F0A74 000ED9B4  57 E4 06 3E */ clrlwi r4, r31, 0x18
/* 800F0A78 000ED9B8  7F C3 F3 78 */ mr r3, r30
/* 800F0A7C 000ED9BC  4B FF DE 9D */ bl daAlink_c_NS_setSyncRide
/* 800F0A80 000ED9C0  C0 02 92 C0 */ lfs f0, lbl_80452CC0-_SDA2_BASE_(r2)
/* 800F0A84 000ED9C4  D0 1E 33 F0 */ stfs f0, 0x33f0(r30)
/* 800F0A88 000ED9C8  38 60 00 01 */ li r3, 1
lbl_800F0A8C:
/* 800F0A8C 000ED9CC  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 800F0A90 000ED9D0  83 C1 00 08 */ lwz r30, 8(r1)
/* 800F0A94 000ED9D4  80 01 00 14 */ lwz r0, 0x14(r1)
/* 800F0A98 000ED9D8  7C 08 03 A6 */ mtlr r0
/* 800F0A9C 000ED9DC  38 21 00 10 */ addi r1, r1, 0x10
/* 800F0AA0 000ED9E0  4E 80 00 20 */ blr