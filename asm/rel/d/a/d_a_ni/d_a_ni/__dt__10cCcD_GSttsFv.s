lbl_809510D0:
/* 809510D0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 809510D4  7C 08 02 A6 */	mflr r0
/* 809510D8  90 01 00 14 */	stw r0, 0x14(r1)
/* 809510DC  93 E1 00 0C */	stw r31, 0xc(r1)
/* 809510E0  7C 7F 1B 79 */	or. r31, r3, r3
/* 809510E4  41 82 00 1C */	beq lbl_80951100
/* 809510E8  3C A0 80 95 */	lis r5, __vt__10cCcD_GStts@ha /* 0x809514DC@ha */
/* 809510EC  38 05 14 DC */	addi r0, r5, __vt__10cCcD_GStts@l /* 0x809514DC@l */
/* 809510F0  90 1F 00 00 */	stw r0, 0(r31)
/* 809510F4  7C 80 07 35 */	extsh. r0, r4
/* 809510F8  40 81 00 08 */	ble lbl_80951100
/* 809510FC  4B 97 DC 41 */	bl __dl__FPv
lbl_80951100:
/* 80951100  7F E3 FB 78 */	mr r3, r31
/* 80951104  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80951108  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8095110C  7C 08 03 A6 */	mtlr r0
/* 80951110  38 21 00 10 */	addi r1, r1, 0x10
/* 80951114  4E 80 00 20 */	blr 
