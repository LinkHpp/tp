lbl_8099B134:
/* 8099B134  3C 80 80 3A */	lis r4, __ptmf_null@ha /* 0x803A2180@ha */
/* 8099B138  38 A4 21 80 */	addi r5, r4, __ptmf_null@l /* 0x803A2180@l */
/* 8099B13C  80 85 00 00 */	lwz r4, 0(r5)
/* 8099B140  80 05 00 04 */	lwz r0, 4(r5)
/* 8099B144  90 83 10 C8 */	stw r4, 0x10c8(r3)
/* 8099B148  90 03 10 CC */	stw r0, 0x10cc(r3)
/* 8099B14C  80 05 00 08 */	lwz r0, 8(r5)
/* 8099B150  90 03 10 D0 */	stw r0, 0x10d0(r3)
/* 8099B154  88 03 10 BC */	lbz r0, 0x10bc(r3)
/* 8099B158  2C 00 00 00 */	cmpwi r0, 0
/* 8099B15C  41 82 00 08 */	beq lbl_8099B164
/* 8099B160  48 00 00 28 */	b lbl_8099B188
lbl_8099B164:
/* 8099B164  3C 80 80 9A */	lis r4, lit_4749@ha /* 0x8099D468@ha */
/* 8099B168  38 A4 D4 68 */	addi r5, r4, lit_4749@l /* 0x8099D468@l */
/* 8099B16C  80 85 00 00 */	lwz r4, 0(r5)
/* 8099B170  80 05 00 04 */	lwz r0, 4(r5)
/* 8099B174  90 83 10 C8 */	stw r4, 0x10c8(r3)
/* 8099B178  90 03 10 CC */	stw r0, 0x10cc(r3)
/* 8099B17C  80 05 00 08 */	lwz r0, 8(r5)
/* 8099B180  90 03 10 D0 */	stw r0, 0x10d0(r3)
/* 8099B184  48 00 00 24 */	b lbl_8099B1A8
lbl_8099B188:
/* 8099B188  3C 80 80 9A */	lis r4, lit_4751@ha /* 0x8099D474@ha */
/* 8099B18C  38 A4 D4 74 */	addi r5, r4, lit_4751@l /* 0x8099D474@l */
/* 8099B190  80 85 00 00 */	lwz r4, 0(r5)
/* 8099B194  80 05 00 04 */	lwz r0, 4(r5)
/* 8099B198  90 83 10 C8 */	stw r4, 0x10c8(r3)
/* 8099B19C  90 03 10 CC */	stw r0, 0x10cc(r3)
/* 8099B1A0  80 05 00 08 */	lwz r0, 8(r5)
/* 8099B1A4  90 03 10 D0 */	stw r0, 0x10d0(r3)
lbl_8099B1A8:
/* 8099B1A8  38 60 00 01 */	li r3, 1
/* 8099B1AC  4E 80 00 20 */	blr 
