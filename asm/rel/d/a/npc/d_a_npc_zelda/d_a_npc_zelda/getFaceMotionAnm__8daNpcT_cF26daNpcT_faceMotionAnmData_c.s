lbl_80B77D00:
/* 80B77D00  38 C3 FF FC */	addi r6, r3, -4
/* 80B77D04  38 85 FF FC */	addi r4, r5, -4
/* 80B77D08  38 00 00 03 */	li r0, 3
/* 80B77D0C  7C 09 03 A6 */	mtctr r0
lbl_80B77D10:
/* 80B77D10  80 64 00 04 */	lwz r3, 4(r4)
/* 80B77D14  84 04 00 08 */	lwzu r0, 8(r4)
/* 80B77D18  90 66 00 04 */	stw r3, 4(r6)
/* 80B77D1C  94 06 00 08 */	stwu r0, 8(r6)
/* 80B77D20  42 00 FF F0 */	bdnz lbl_80B77D10
/* 80B77D24  80 04 00 04 */	lwz r0, 4(r4)
/* 80B77D28  90 06 00 04 */	stw r0, 4(r6)
/* 80B77D2C  4E 80 00 20 */	blr 
