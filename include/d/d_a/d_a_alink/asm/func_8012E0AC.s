/* 8012E0AC 0012AFEC  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8012E0B0 0012AFF0  7C 08 02 A6 */ mflr r0
/* 8012E0B4 0012AFF4  90 01 00 14 */ stw r0, 0x14(r1)
/* 8012E0B8 0012AFF8  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8012E0BC 0012AFFC  7C 7F 1B 78 */ mr r31, r3
/* 8012E0C0 0012B000  A8 03 30 0A */ lha r0, 0x300a(r3)
/* 8012E0C4 0012B004  2C 00 00 00 */ cmpwi r0, 0
/* 8012E0C8 0012B008  40 82 00 38 */ bne lbl_8012E100
/* 8012E0CC 0012B00C  38 7F 04 E6 */ addi r3, r31, 0x4e6
/* 8012E0D0 0012B010  A8 9F 30 0C */ lha r4, 0x300c(r31)
/* 8012E0D4 0012B014  3C A0 80 39 */ lis r5, lbl_8038EF70@ha
/* 8012E0D8 0012B018  38 E5 EF 70 */ addi r7, r5, lbl_8038EF70@l
/* 8012E0DC 0012B01C  A8 A7 00 04 */ lha r5, 4(r7)
/* 8012E0E0 0012B020  A8 C7 00 00 */ lha r6, 0(r7)
/* 8012E0E4 0012B024  A8 E7 00 02 */ lha r7, 2(r7)
/* 8012E0E8 0012B028  48 14 24 59 */ bl cLib_addCalcAngleS__FPsssss
/* 8012E0EC 0012B02C  A8 7F 04 E6 */ lha r3, 0x4e6(r31)
/* 8012E0F0 0012B030  3C 63 00 01 */ addis r3, r3, 1
/* 8012E0F4 0012B034  38 03 80 00 */ addi r0, r3, -32768
/* 8012E0F8 0012B038  B0 1F 04 DE */ sth r0, 0x4de(r31)
/* 8012E0FC 0012B03C  48 00 00 54 */ b lbl_8012E150
lbl_8012E100:
/* 8012E100 0012B040  80 9F 27 EC */ lwz r4, 0x27ec(r31)
/* 8012E104 0012B044  28 04 00 00 */ cmplwi r4, 0
/* 8012E108 0012B048  41 82 00 48 */ beq lbl_8012E150
/* 8012E10C 0012B04C  4B EE C6 05 */ bl fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c
/* 8012E110 0012B050  7C 64 1B 78 */ mr r4, r3
/* 8012E114 0012B054  38 7F 04 E6 */ addi r3, r31, 0x4e6
/* 8012E118 0012B058  38 A0 00 05 */ li r5, 5
/* 8012E11C 0012B05C  38 C0 05 E8 */ li r6, 0x5e8
/* 8012E120 0012B060  38 E0 01 3C */ li r7, 0x13c
/* 8012E124 0012B064  48 14 24 1D */ bl cLib_addCalcAngleS__FPsssss
/* 8012E128 0012B068  88 1F 2F 98 */ lbz r0, 0x2f98(r31)
/* 8012E12C 0012B06C  28 00 00 02 */ cmplwi r0, 2
/* 8012E130 0012B070  40 82 00 14 */ bne lbl_8012E144
/* 8012E134 0012B074  A8 7F 04 E6 */ lha r3, 0x4e6(r31)
/* 8012E138 0012B078  38 03 40 00 */ addi r0, r3, 0x4000
/* 8012E13C 0012B07C  B0 1F 04 DE */ sth r0, 0x4de(r31)
/* 8012E140 0012B080  48 00 00 10 */ b lbl_8012E150
lbl_8012E144:
/* 8012E144 0012B084  A8 7F 04 E6 */ lha r3, 0x4e6(r31)
/* 8012E148 0012B088  38 03 C0 00 */ addi r0, r3, -16384
/* 8012E14C 0012B08C  B0 1F 04 DE */ sth r0, 0x4de(r31)
lbl_8012E150:
/* 8012E150 0012B090  7F E3 FB 78 */ mr r3, r31
/* 8012E154 0012B094  4B FF E1 B5 */ bl daAlink_c_NS_checkWolfAtnDoCharge
/* 8012E158 0012B098  80 1F 19 9C */ lwz r0, 0x199c(r31)
/* 8012E15C 0012B09C  54 00 06 B5 */ rlwinm. r0, r0, 0, 0x1a, 0x1a
/* 8012E160 0012B0A0  41 82 00 20 */ beq lbl_8012E180
/* 8012E164 0012B0A4  A8 1F 30 0E */ lha r0, 0x300e(r31)
/* 8012E168 0012B0A8  2C 00 00 00 */ cmpwi r0, 0
/* 8012E16C 0012B0AC  41 82 00 14 */ beq lbl_8012E180
/* 8012E170 0012B0B0  7F E3 FB 78 */ mr r3, r31
/* 8012E174 0012B0B4  A8 9F 30 12 */ lha r4, 0x3012(r31)
/* 8012E178 0012B0B8  48 00 00 71 */ bl daAlink_c_NS_procWolfSideStepLandInit
/* 8012E17C 0012B0BC  48 00 00 58 */ b lbl_8012E1D4
lbl_8012E180:
/* 8012E180 0012B0C0  80 1F 06 14 */ lwz r0, 0x614(r31)
/* 8012E184 0012B0C4  28 00 00 10 */ cmplwi r0, 0x10
/* 8012E188 0012B0C8  41 82 00 40 */ beq lbl_8012E1C8
/* 8012E18C 0012B0CC  C0 5F 04 D4 */ lfs f2, 0x4d4(r31)
/* 8012E190 0012B0D0  C0 3F 34 FC */ lfs f1, 0x34fc(r31)
/* 8012E194 0012B0D4  3C 60 80 39 */ lis r3, lbl_8038EFA8@ha
/* 8012E198 0012B0D8  38 A3 EF A8 */ addi r5, r3, lbl_8038EFA8@l
/* 8012E19C 0012B0DC  C0 05 00 60 */ lfs f0, 0x60(r5)
/* 8012E1A0 0012B0E0  EC 01 00 28 */ fsubs f0, f1, f0
/* 8012E1A4 0012B0E4  FC 02 00 40 */ fcmpo cr0, f2, f0
/* 8012E1A8 0012B0E8  40 80 00 20 */ bge lbl_8012E1C8
/* 8012E1AC 0012B0EC  38 00 00 00 */ li r0, 0
/* 8012E1B0 0012B0F0  98 1F 2F 98 */ stb r0, 0x2f98(r31)
/* 8012E1B4 0012B0F4  7F E3 FB 78 */ mr r3, r31
/* 8012E1B8 0012B0F8  38 80 00 02 */ li r4, 2
/* 8012E1BC 0012B0FC  C0 25 00 64 */ lfs f1, 0x64(r5)
/* 8012E1C0 0012B100  48 00 0C 11 */ bl daAlink_c_NS_procWolfFallInit
/* 8012E1C4 0012B104  48 00 00 10 */ b lbl_8012E1D4
lbl_8012E1C8:
/* 8012E1C8 0012B108  38 00 00 01 */ li r0, 1
/* 8012E1CC 0012B10C  B0 1F 30 0E */ sth r0, 0x300e(r31)
/* 8012E1D0 0012B110  38 60 00 01 */ li r3, 1
lbl_8012E1D4:
/* 8012E1D4 0012B114  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8012E1D8 0012B118  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8012E1DC 0012B11C  7C 08 03 A6 */ mtlr r0
/* 8012E1E0 0012B120  38 21 00 10 */ addi r1, r1, 0x10
/* 8012E1E4 0012B124  4E 80 00 20 */ blr
