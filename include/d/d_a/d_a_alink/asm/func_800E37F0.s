/* 800E37F0 000E0730  3C 60 80 39 */ lis r3, lbl_8038E714@ha
/* 800E37F4 000E0734  38 63 E7 14 */ addi r3, r3, lbl_8038E714@l
/* 800E37F8 000E0738  C0 23 00 28 */ lfs f1, 0x28(r3)
/* 800E37FC 000E073C  4E 80 00 20 */ blr