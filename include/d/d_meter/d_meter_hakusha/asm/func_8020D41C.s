/* 8020D41C 0020A35C  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8020D420 0020A360  7C 08 02 A6 */ mflr r0
/* 8020D424 0020A364  90 01 00 14 */ stw r0, 0x14(r1)
/* 8020D428 0020A368  93 E1 00 0C */ stw r31, 0xc(r1)
/* 8020D42C 0020A36C  7C 7F 1B 78 */ mr r31, r3
/* 8020D430 0020A370  80 63 00 34 */ lwz r3, 0x34(r3)
/* 8020D434 0020A374  48 04 83 F5 */ bl getAlphaRate__13CPaneMgrAlphaFv
/* 8020D438 0020A378  C0 02 AE 08 */ lfs f0, lbl_80454808-_SDA2_BASE_(r2)
/* 8020D43C 0020A37C  FC 00 08 00 */ fcmpu cr0, f0, f1
/* 8020D440 0020A380  41 82 00 2C */ beq lbl_8020D46C
/* 8020D444 0020A384  80 7F 00 34 */ lwz r3, 0x34(r31)
/* 8020D448 0020A388  FC 20 00 90 */ fmr f1, f0
/* 8020D44C 0020A38C  48 04 83 85 */ bl setAlphaRate__13CPaneMgrAlphaFf
/* 8020D450 0020A390  3C 60 80 43 */ lis r3, g_meter2_info@ha
/* 8020D454 0020A394  38 63 01 88 */ addi r3, r3, g_meter2_info@l
/* 8020D458 0020A398  80 63 00 1C */ lwz r3, 0x1c(r3)
/* 8020D45C 0020A39C  80 63 01 0C */ lwz r3, 0x10c(r3)
/* 8020D460 0020A3A0  80 9F 00 34 */ lwz r4, 0x34(r31)
/* 8020D464 0020A3A4  38 A0 00 05 */ li r5, 5
/* 8020D468 0020A3A8  48 00 D6 3D */ bl setAlphaAnimeMax__13dMeter2Draw_cFP13CPaneMgrAlphas
lbl_8020D46C:
/* 8020D46C 0020A3AC  83 E1 00 0C */ lwz r31, 0xc(r1)
/* 8020D470 0020A3B0  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8020D474 0020A3B4  7C 08 03 A6 */ mtlr r0
/* 8020D478 0020A3B8  38 21 00 10 */ addi r1, r1, 0x10
/* 8020D47C 0020A3BC  4E 80 00 20 */ blr
