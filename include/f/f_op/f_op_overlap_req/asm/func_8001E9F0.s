/* 8001E9F0 0001B930  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8001E9F4 0001B934  7C 08 02 A6 */ mflr r0
/* 8001E9F8 0001B938  90 01 00 14 */ stw r0, 0x14(r1)
/* 8001E9FC 0001B93C  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8001EA00 0001B940  7C 7F 1B 78 */ mr r31, r3
/* 8001EA04 0001B944  38 7F 00 18 */ addi r3, r31, 0x18
/* 8001EA08 0001B948  7F E4 FB 78 */ mr r4, r31
/* 8001EA0C 0001B94C  48 24 7C CD */ bl cPhs_Do
/* 8001EA10 0001B950  2C 03 00 03 */ cmpwi r3, 3
/* 8001EA14 0001B954  41 82 00 54 */ beq lbl_8001EA68
/* 8001EA18 0001B958  40 80 00 1C */ bge lbl_8001EA34
/* 8001EA1C 0001B95C  2C 03 00 01 */ cmpwi r3, 1
/* 8001EA20 0001B960  41 82 00 38 */ beq lbl_8001EA58
/* 8001EA24 0001B964  40 80 00 20 */ bge lbl_8001EA44
/* 8001EA28 0001B968  2C 03 00 00 */ cmpwi r3, 0
/* 8001EA2C 0001B96C  40 80 00 24 */ bge lbl_8001EA50
/* 8001EA30 0001B970  48 00 00 40 */ b lbl_8001EA70
lbl_8001EA34:
/* 8001EA34 0001B974  2C 03 00 05 */ cmpwi r3, 5
/* 8001EA38 0001B978  41 82 00 30 */ beq lbl_8001EA68
/* 8001EA3C 0001B97C  40 80 00 34 */ bge lbl_8001EA70
/* 8001EA40 0001B980  48 00 00 20 */ b lbl_8001EA60
lbl_8001EA44:
/* 8001EA44 0001B984  7F E3 FB 78 */ mr r3, r31
/* 8001EA48 0001B988  4B FF FF A9 */ bl fopOvlpReq_Handler__FP21overlap_request_class
/* 8001EA4C 0001B98C  48 00 00 28 */ b lbl_8001EA74
lbl_8001EA50:
/* 8001EA50 0001B990  38 60 00 00 */ li r3, 0
/* 8001EA54 0001B994  48 00 00 20 */ b lbl_8001EA74
lbl_8001EA58:
/* 8001EA58 0001B998  38 60 00 00 */ li r3, 0
/* 8001EA5C 0001B99C  48 00 00 18 */ b lbl_8001EA74
lbl_8001EA60:
/* 8001EA60 0001B9A0  38 60 00 04 */ li r3, 4
/* 8001EA64 0001B9A4  48 00 00 10 */ b lbl_8001EA74
lbl_8001EA68:
/* 8001EA68 0001B9A8  38 60 00 05 */ li r3, 5
/* 8001EA6C 0001B9AC  48 00 00 08 */ b lbl_8001EA74
lbl_8001EA70:
/* 8001EA70 0001B9B0  38 60 00 05 */ li r3, 5
lbl_8001EA74:
/* 8001EA74 0001B9B4  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8001EA78 0001B9B8  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8001EA7C 0001B9BC  7C 08 03 A6 */ mtlr r0
/* 8001EA80 0001B9C0  38 21 00 10 */ addi r1, r1, 0x10
/* 8001EA84 0001B9C4  4E 80 00 20 */ blr