.include "macros.inc"

.section .text, "ax" # 802493b4


.global __ct__16dMsgStringBase_cFv
__ct__16dMsgStringBase_cFv:
/* 802493B4 002462F4  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 802493B8 002462F8  7C 08 02 A6 */	mflr r0
/* 802493BC 002462FC  90 01 00 24 */	stw r0, 0x24(r1)
/* 802493C0 00246300  93 E1 00 1C */	stw r31, 0x1c(r1)
/* 802493C4 00246304  7C 7F 1B 78 */	mr r31, r3
/* 802493C8 00246308  3C 80 80 3C */	lis r4, lbl_803C1478@ha
/* 802493CC 0024630C  38 04 14 78 */	addi r0, r4, lbl_803C1478@l
/* 802493D0 00246310  90 03 00 00 */	stw r0, 0(r3)
/* 802493D4 00246314  38 00 00 00 */	li r0, 0
/* 802493D8 00246318  B0 03 00 20 */	sth r0, 0x20(r3)
/* 802493DC 0024631C  48 00 03 25 */	bl getResource__16dMsgStringBase_cFv
/* 802493E0 00246320  38 60 00 20 */	li r3, 0x20
/* 802493E4 00246324  48 08 58 69 */	bl __nw__FUl
/* 802493E8 00246328  7C 60 1B 79 */	or. r0, r3, r3
/* 802493EC 0024632C  41 82 00 0C */	beq lbl_802493F8
/* 802493F0 00246330  48 05 FC 7D */	bl __ct__Q28JMessage18TResourceContainerFv
/* 802493F4 00246334  7C 60 1B 78 */	mr r0, r3
lbl_802493F8:
/* 802493F8 00246338  90 1F 00 04 */	stw r0, 4(r31)
/* 802493FC 0024633C  38 60 00 38 */	li r3, 0x38
/* 80249400 00246340  48 08 58 4D */	bl __nw__FUl
/* 80249404 00246344  7C 60 1B 79 */	or. r0, r3, r3
/* 80249408 00246348  41 82 00 0C */	beq lbl_80249414
/* 8024940C 0024634C  4B FE 67 51 */	bl __ct__24jmessage_string_tControlFv
/* 80249410 00246350  7C 60 1B 78 */	mr r0, r3
lbl_80249414:
/* 80249414 00246354  90 1F 00 08 */	stw r0, 8(r31)
/* 80249418 00246358  38 60 00 88 */	li r3, 0x88
/* 8024941C 0024635C  48 08 58 31 */	bl __nw__FUl
/* 80249420 00246360  7C 60 1B 79 */	or. r0, r3, r3
/* 80249424 00246364  41 82 00 0C */	beq lbl_80249430
/* 80249428 00246368  4B FE 64 99 */	bl __ct__26jmessage_string_tReferenceFv
/* 8024942C 0024636C  7C 60 1B 78 */	mr r0, r3
lbl_80249430:
/* 80249430 00246370  90 1F 00 0C */	stw r0, 0xc(r31)
/* 80249434 00246374  38 60 00 8C */	li r3, 0x8c
/* 80249438 00246378  48 08 58 15 */	bl __nw__FUl
/* 8024943C 0024637C  7C 60 1B 79 */	or. r0, r3, r3
/* 80249440 00246380  41 82 00 14 */	beq lbl_80249454
/* 80249444 00246384  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 80249448 00246388  80 BF 00 08 */	lwz r5, 8(r31)
/* 8024944C 0024638C  4B FE 75 BD */	bl __ct__34jmessage_string_tSequenceProcessorFPC26jmessage_string_tReferenceP24jmessage_string_tControl
/* 80249450 00246390  7C 60 1B 78 */	mr r0, r3
lbl_80249454:
/* 80249454 00246394  90 1F 00 10 */	stw r0, 0x10(r31)
/* 80249458 00246398  38 60 05 58 */	li r3, 0x558
/* 8024945C 0024639C  48 08 57 F1 */	bl __nw__FUl
/* 80249460 002463A0  7C 60 1B 79 */	or. r0, r3, r3
/* 80249464 002463A4  41 82 00 10 */	beq lbl_80249474
/* 80249468 002463A8  80 9F 00 0C */	lwz r4, 0xc(r31)
/* 8024946C 002463AC  4B FE 77 5D */	bl __ct__35jmessage_string_tRenderingProcessorFPC26jmessage_string_tReference
/* 80249470 002463B0  7C 60 1B 78 */	mr r0, r3
lbl_80249474:
/* 80249474 002463B4  90 1F 00 14 */	stw r0, 0x14(r31)
/* 80249478 002463B8  38 60 00 0C */	li r3, 0xc
/* 8024947C 002463BC  48 08 57 D1 */	bl __nw__FUl
/* 80249480 002463C0  7C 60 1B 79 */	or. r0, r3, r3
/* 80249484 002463C4  41 82 00 10 */	beq lbl_80249494
/* 80249488 002463C8  80 9F 00 04 */	lwz r4, 4(r31)
/* 8024948C 002463CC  48 05 FC A5 */	bl __ct__Q28JMessage6TParseFPQ28JMessage18TResourceContainer
/* 80249490 002463D0  7C 60 1B 78 */	mr r0, r3
lbl_80249494:
/* 80249494 002463D4  90 1F 00 18 */	stw r0, 0x18(r31)
/* 80249498 002463D8  80 1F 00 04 */	lwz r0, 4(r31)
/* 8024949C 002463DC  80 7F 00 0C */	lwz r3, 0xc(r31)
/* 802494A0 002463E0  90 03 00 04 */	stw r0, 4(r3)
/* 802494A4 002463E4  80 1F 00 10 */	lwz r0, 0x10(r31)
/* 802494A8 002463E8  80 7F 00 08 */	lwz r3, 8(r31)
/* 802494AC 002463EC  90 03 00 04 */	stw r0, 4(r3)
/* 802494B0 002463F0  80 1F 00 14 */	lwz r0, 0x14(r31)
/* 802494B4 002463F4  80 7F 00 08 */	lwz r3, 8(r31)
/* 802494B8 002463F8  90 03 00 08 */	stw r0, 8(r3)
/* 802494BC 002463FC  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 802494C0 00246400  90 01 00 08 */	stw r0, 8(r1)
/* 802494C4 00246404  80 7F 00 18 */	lwz r3, 0x18(r31)
/* 802494C8 00246408  38 81 00 08 */	addi r4, r1, 8
/* 802494CC 0024640C  38 A0 00 00 */	li r5, 0
/* 802494D0 00246410  48 09 34 41 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 802494D4 00246414  80 7F 00 08 */	lwz r3, 8(r31)
/* 802494D8 00246418  48 05 E0 FD */	bl reset__Q28JMessage8TControlFv
/* 802494DC 0024641C  80 7F 00 08 */	lwz r3, 8(r31)
/* 802494E0 00246420  80 83 00 04 */	lwz r4, 4(r3)
/* 802494E4 00246424  28 04 00 00 */	cmplwi r4, 0
/* 802494E8 00246428  41 82 00 0C */	beq lbl_802494F4
/* 802494EC 0024642C  38 00 00 00 */	li r0, 0
/* 802494F0 00246430  90 04 00 08 */	stw r0, 8(r4)
lbl_802494F4:
/* 802494F4 00246434  80 83 00 08 */	lwz r4, 8(r3)
/* 802494F8 00246438  28 04 00 00 */	cmplwi r4, 0
/* 802494FC 0024643C  41 82 00 0C */	beq lbl_80249508
/* 80249500 00246440  38 00 00 00 */	li r0, 0
/* 80249504 00246444  90 04 00 08 */	stw r0, 8(r4)
lbl_80249508:
/* 80249508 00246448  38 00 00 00 */	li r0, 0
/* 8024950C 0024644C  90 03 00 10 */	stw r0, 0x10(r3)
/* 80249510 00246450  7F E3 FB 78 */	mr r3, r31
/* 80249514 00246454  83 E1 00 1C */	lwz r31, 0x1c(r1)
/* 80249518 00246458  80 01 00 24 */	lwz r0, 0x24(r1)
/* 8024951C 0024645C  7C 08 03 A6 */	mtlr r0
/* 80249520 00246460  38 21 00 20 */	addi r1, r1, 0x20
/* 80249524 00246464  4E 80 00 20 */	blr 

.global __dt__16dMsgStringBase_cFv
__dt__16dMsgStringBase_cFv:
/* 80249528 00246468  94 21 FF D0 */	stwu r1, -0x30(r1)
/* 8024952C 0024646C  7C 08 02 A6 */	mflr r0
/* 80249530 00246470  90 01 00 34 */	stw r0, 0x34(r1)
/* 80249534 00246474  39 61 00 30 */	addi r11, r1, 0x30
/* 80249538 00246478  48 11 8C A1 */	bl _savegpr_28
/* 8024953C 0024647C  7C 7E 1B 79 */	or. r30, r3, r3
/* 80249540 00246480  7C 9F 23 78 */	mr r31, r4
/* 80249544 00246484  41 82 01 A0 */	beq lbl_802496E4
/* 80249548 00246488  3C 60 80 3C */	lis r3, lbl_803C1478@ha
/* 8024954C 0024648C  38 03 14 78 */	addi r0, r3, lbl_803C1478@l
/* 80249550 00246490  90 1E 00 00 */	stw r0, 0(r30)
/* 80249554 00246494  83 BE 00 04 */	lwz r29, 4(r30)
/* 80249558 00246498  48 00 00 44 */	b lbl_8024959C
lbl_8024955C:
/* 8024955C 0024649C  83 9D 00 0C */	lwz r28, 0xc(r29)
/* 80249560 002464A0  93 81 00 0C */	stw r28, 0xc(r1)
/* 80249564 002464A4  93 81 00 08 */	stw r28, 8(r1)
/* 80249568 002464A8  93 81 00 1C */	stw r28, 0x1c(r1)
/* 8024956C 002464AC  93 81 00 18 */	stw r28, 0x18(r1)
/* 80249570 002464B0  93 81 00 14 */	stw r28, 0x14(r1)
/* 80249574 002464B4  38 61 00 10 */	addi r3, r1, 0x10
/* 80249578 002464B8  38 9D 00 08 */	addi r4, r29, 8
/* 8024957C 002464BC  38 A1 00 14 */	addi r5, r1, 0x14
/* 80249580 002464C0  48 09 34 D9 */	bl erase__Q27JGadget13TNodeLinkListFQ37JGadget13TNodeLinkList8iterator
/* 80249584 002464C4  38 7D 00 08 */	addi r3, r29, 8
/* 80249588 002464C8  7F 84 E3 78 */	mr r4, r28
/* 8024958C 002464CC  81 9D 00 14 */	lwz r12, 0x14(r29)
/* 80249590 002464D0  81 8C 00 10 */	lwz r12, 0x10(r12)
/* 80249594 002464D4  7D 89 03 A6 */	mtctr r12
/* 80249598 002464D8  4E 80 04 21 */	bctrl 
lbl_8024959C:
/* 8024959C 002464DC  80 1D 00 08 */	lwz r0, 8(r29)
/* 802495A0 002464E0  28 00 00 00 */	cmplwi r0, 0
/* 802495A4 002464E4  40 82 FF B8 */	bne lbl_8024955C
/* 802495A8 002464E8  38 00 00 00 */	li r0, 0
/* 802495AC 002464EC  90 1D 00 18 */	stw r0, 0x18(r29)
/* 802495B0 002464F0  90 1D 00 1C */	stw r0, 0x1c(r29)
/* 802495B4 002464F4  83 BE 00 04 */	lwz r29, 4(r30)
/* 802495B8 002464F8  28 1D 00 00 */	cmplwi r29, 0
/* 802495BC 002464FC  41 82 00 18 */	beq lbl_802495D4
/* 802495C0 00246500  38 7D 00 08 */	addi r3, r29, 8
/* 802495C4 00246504  38 80 FF FF */	li r4, -1
/* 802495C8 00246508  48 05 F9 31 */	bl __dt__Q38JMessage18TResourceContainer10TCResourceFv
/* 802495CC 0024650C  7F A3 EB 78 */	mr r3, r29
/* 802495D0 00246510  48 08 57 6D */	bl __dl__FPv
lbl_802495D4:
/* 802495D4 00246514  38 00 00 00 */	li r0, 0
/* 802495D8 00246518  90 1E 00 04 */	stw r0, 4(r30)
/* 802495DC 0024651C  80 7E 00 08 */	lwz r3, 8(r30)
/* 802495E0 00246520  28 03 00 00 */	cmplwi r3, 0
/* 802495E4 00246524  41 82 00 18 */	beq lbl_802495FC
/* 802495E8 00246528  38 80 00 01 */	li r4, 1
/* 802495EC 0024652C  81 83 00 00 */	lwz r12, 0(r3)
/* 802495F0 00246530  81 8C 00 08 */	lwz r12, 8(r12)
/* 802495F4 00246534  7D 89 03 A6 */	mtctr r12
/* 802495F8 00246538  4E 80 04 21 */	bctrl 
lbl_802495FC:
/* 802495FC 0024653C  38 00 00 00 */	li r0, 0
/* 80249600 00246540  90 1E 00 08 */	stw r0, 8(r30)
/* 80249604 00246544  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80249608 00246548  28 03 00 00 */	cmplwi r3, 0
/* 8024960C 0024654C  41 82 00 18 */	beq lbl_80249624
/* 80249610 00246550  38 80 00 01 */	li r4, 1
/* 80249614 00246554  81 83 00 00 */	lwz r12, 0(r3)
/* 80249618 00246558  81 8C 00 08 */	lwz r12, 8(r12)
/* 8024961C 0024655C  7D 89 03 A6 */	mtctr r12
/* 80249620 00246560  4E 80 04 21 */	bctrl 
lbl_80249624:
/* 80249624 00246564  38 00 00 00 */	li r0, 0
/* 80249628 00246568  90 1E 00 0C */	stw r0, 0xc(r30)
/* 8024962C 0024656C  80 7E 00 10 */	lwz r3, 0x10(r30)
/* 80249630 00246570  28 03 00 00 */	cmplwi r3, 0
/* 80249634 00246574  41 82 00 18 */	beq lbl_8024964C
/* 80249638 00246578  38 80 00 01 */	li r4, 1
/* 8024963C 0024657C  81 83 00 00 */	lwz r12, 0(r3)
/* 80249640 00246580  81 8C 00 08 */	lwz r12, 8(r12)
/* 80249644 00246584  7D 89 03 A6 */	mtctr r12
/* 80249648 00246588  4E 80 04 21 */	bctrl 
lbl_8024964C:
/* 8024964C 0024658C  38 00 00 00 */	li r0, 0
/* 80249650 00246590  90 1E 00 10 */	stw r0, 0x10(r30)
/* 80249654 00246594  80 7E 00 14 */	lwz r3, 0x14(r30)
/* 80249658 00246598  28 03 00 00 */	cmplwi r3, 0
/* 8024965C 0024659C  41 82 00 18 */	beq lbl_80249674
/* 80249660 002465A0  38 80 00 01 */	li r4, 1
/* 80249664 002465A4  81 83 00 00 */	lwz r12, 0(r3)
/* 80249668 002465A8  81 8C 00 08 */	lwz r12, 8(r12)
/* 8024966C 002465AC  7D 89 03 A6 */	mtctr r12
/* 80249670 002465B0  4E 80 04 21 */	bctrl 
lbl_80249674:
/* 80249674 002465B4  38 00 00 00 */	li r0, 0
/* 80249678 002465B8  90 1E 00 14 */	stw r0, 0x14(r30)
/* 8024967C 002465BC  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80249680 002465C0  28 03 00 00 */	cmplwi r3, 0
/* 80249684 002465C4  41 82 00 18 */	beq lbl_8024969C
/* 80249688 002465C8  38 80 00 01 */	li r4, 1
/* 8024968C 002465CC  81 83 00 00 */	lwz r12, 0(r3)
/* 80249690 002465D0  81 8C 00 08 */	lwz r12, 8(r12)
/* 80249694 002465D4  7D 89 03 A6 */	mtctr r12
/* 80249698 002465D8  4E 80 04 21 */	bctrl 
lbl_8024969C:
/* 8024969C 002465DC  38 00 00 00 */	li r0, 0
/* 802496A0 002465E0  90 1E 00 18 */	stw r0, 0x18(r30)
/* 802496A4 002465E4  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 802496A8 002465E8  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 802496AC 002465EC  80 03 00 10 */	lwz r0, 0x10(r3)
/* 802496B0 002465F0  28 00 00 00 */	cmplwi r0, 0
/* 802496B4 002465F4  40 82 00 20 */	bne lbl_802496D4
/* 802496B8 002465F8  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 802496BC 002465FC  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 802496C0 00246600  80 63 5C F4 */	lwz r3, 0x5cf4(r3)
/* 802496C4 00246604  81 83 00 00 */	lwz r12, 0(r3)
/* 802496C8 00246608  81 8C 00 24 */	lwz r12, 0x24(r12)
/* 802496CC 0024660C  7D 89 03 A6 */	mtctr r12
/* 802496D0 00246610  4E 80 04 21 */	bctrl 
lbl_802496D4:
/* 802496D4 00246614  7F E0 07 35 */	extsh. r0, r31
/* 802496D8 00246618  40 81 00 0C */	ble lbl_802496E4
/* 802496DC 0024661C  7F C3 F3 78 */	mr r3, r30
/* 802496E0 00246620  48 08 56 5D */	bl __dl__FPv
lbl_802496E4:
/* 802496E4 00246624  7F C3 F3 78 */	mr r3, r30
/* 802496E8 00246628  39 61 00 30 */	addi r11, r1, 0x30
/* 802496EC 0024662C  48 11 8B 39 */	bl _restgpr_28
/* 802496F0 00246630  80 01 00 34 */	lwz r0, 0x34(r1)
/* 802496F4 00246634  7C 08 03 A6 */	mtlr r0
/* 802496F8 00246638  38 21 00 30 */	addi r1, r1, 0x30
/* 802496FC 0024663C  4E 80 00 20 */	blr 

.global getResource__16dMsgStringBase_cFv
getResource__16dMsgStringBase_cFv:
/* 80249700 00246640  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80249704 00246644  7C 08 02 A6 */	mflr r0
/* 80249708 00246648  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024970C 0024664C  93 E1 00 0C */	stw r31, 0xc(r1)
/* 80249710 00246650  7C 7F 1B 78 */	mr r31, r3
/* 80249714 00246654  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80249718 00246658  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 8024971C 0024665C  80 03 00 10 */	lwz r0, 0x10(r3)
/* 80249720 00246660  90 1F 00 1C */	stw r0, 0x1c(r31)
/* 80249724 00246664  80 1F 00 1C */	lwz r0, 0x1c(r31)
/* 80249728 00246668  28 00 00 00 */	cmplwi r0, 0
/* 8024972C 0024666C  40 82 00 28 */	bne lbl_80249754
/* 80249730 00246670  3C 60 80 40 */	lis r3, g_dComIfG_gameInfo@ha
/* 80249734 00246674  38 63 61 C0 */	addi r3, r3, g_dComIfG_gameInfo@l
/* 80249738 00246678  80 A3 5C F4 */	lwz r5, 0x5cf4(r3)
/* 8024973C 0024667C  3C 60 52 4F */	lis r3, 0x524F4F54@ha
/* 80249740 00246680  38 63 4F 54 */	addi r3, r3, 0x524F4F54@l
/* 80249744 00246684  3C 80 80 3A */	lis r4, lbl_80399C98@ha
/* 80249748 00246688  38 84 9C 98 */	addi r4, r4, lbl_80399C98@l
/* 8024974C 0024668C  48 08 C3 ED */	bl getGlbResource__10JKRArchiveFUlPCcP10JKRArchive
/* 80249750 00246690  90 7F 00 1C */	stw r3, 0x1c(r31)
lbl_80249754:
/* 80249754 00246694  83 E1 00 0C */	lwz r31, 0xc(r1)
/* 80249758 00246698  80 01 00 14 */	lwz r0, 0x14(r1)
/* 8024975C 0024669C  7C 08 03 A6 */	mtlr r0
/* 80249760 002466A0  38 21 00 10 */	addi r1, r1, 0x10
/* 80249764 002466A4  4E 80 00 20 */	blr 

.global getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc:
/* 80249768 002466A8  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 8024976C 002466AC  7C 08 02 A6 */	mflr r0
/* 80249770 002466B0  90 01 00 44 */	stw r0, 0x44(r1)
/* 80249774 002466B4  DB E1 00 38 */	stfd f31, 0x38(r1)
/* 80249778 002466B8  39 61 00 38 */	addi r11, r1, 0x38
/* 8024977C 002466BC  48 11 8A 51 */	bl _savegpr_25
/* 80249780 002466C0  7C 7E 1B 78 */	mr r30, r3
/* 80249784 002466C4  7C 9F 23 78 */	mr r31, r4
/* 80249788 002466C8  7C B9 2B 78 */	mr r25, r5
/* 8024978C 002466CC  7C DA 33 78 */	mr r26, r6
/* 80249790 002466D0  7C FB 3B 78 */	mr r27, r7
/* 80249794 002466D4  7D 1C 43 78 */	mr r28, r8
/* 80249798 002466D8  7D 3D 4B 78 */	mr r29, r9
/* 8024979C 002466DC  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 802497A0 002466E0  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 802497A4 002466E4  80 83 00 10 */	lwz r4, 0x10(r3)
/* 802497A8 002466E8  28 04 00 00 */	cmplwi r4, 0
/* 802497AC 002466EC  41 82 00 64 */	beq lbl_80249810
/* 802497B0 002466F0  28 1F 13 88 */	cmplwi r31, 0x1388
/* 802497B4 002466F4  40 81 00 34 */	ble lbl_802497E8
/* 802497B8 002466F8  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 802497BC 002466FC  80 63 00 14 */	lwz r3, 0x14(r3)
/* 802497C0 00246700  7C 00 18 40 */	cmplw r0, r3
/* 802497C4 00246704  41 82 00 4C */	beq lbl_80249810
/* 802497C8 00246708  90 7E 00 1C */	stw r3, 0x1c(r30)
/* 802497CC 0024670C  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 802497D0 00246710  90 01 00 0C */	stw r0, 0xc(r1)
/* 802497D4 00246714  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 802497D8 00246718  38 81 00 0C */	addi r4, r1, 0xc
/* 802497DC 0024671C  38 A0 00 80 */	li r5, 0x80
/* 802497E0 00246720  48 09 31 31 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 802497E4 00246724  48 00 00 2C */	b lbl_80249810
lbl_802497E8:
/* 802497E8 00246728  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 802497EC 0024672C  7C 00 20 40 */	cmplw r0, r4
/* 802497F0 00246730  41 82 00 20 */	beq lbl_80249810
/* 802497F4 00246734  90 9E 00 1C */	stw r4, 0x1c(r30)
/* 802497F8 00246738  80 1E 00 1C */	lwz r0, 0x1c(r30)
/* 802497FC 0024673C  90 01 00 08 */	stw r0, 8(r1)
/* 80249800 00246740  80 7E 00 18 */	lwz r3, 0x18(r30)
/* 80249804 00246744  38 81 00 08 */	addi r4, r1, 8
/* 80249808 00246748  38 A0 00 80 */	li r5, 0x80
/* 8024980C 0024674C  48 09 31 05 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
lbl_80249810:
/* 80249810 00246750  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80249814 00246754  7F 24 CB 78 */	mr r4, r25
/* 80249818 00246758  7F 45 D3 78 */	mr r5, r26
/* 8024981C 0024675C  7F 66 DB 78 */	mr r6, r27
/* 80249820 00246760  7F 87 E3 78 */	mr r7, r28
/* 80249824 00246764  7F A8 EB 78 */	mr r8, r29
/* 80249828 00246768  4B FE 61 85 */	bl init__26jmessage_string_tReferenceFP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
/* 8024982C 0024676C  80 79 01 08 */	lwz r3, 0x108(r25)
/* 80249830 00246770  90 61 00 10 */	stw r3, 0x10(r1)
/* 80249834 00246774  80 19 01 04 */	lwz r0, 0x104(r25)
/* 80249838 00246778  90 01 00 14 */	stw r0, 0x14(r1)
/* 8024983C 0024677C  80 9E 00 0C */	lwz r4, 0xc(r30)
/* 80249840 00246780  90 04 00 78 */	stw r0, 0x78(r4)
/* 80249844 00246784  90 64 00 7C */	stw r3, 0x7c(r4)
/* 80249848 00246788  80 7E 00 08 */	lwz r3, 8(r30)
/* 8024984C 0024678C  7F E4 FB 78 */	mr r4, r31
/* 80249850 00246790  38 A0 00 00 */	li r5, 0
/* 80249854 00246794  38 C0 00 00 */	li r6, 0
/* 80249858 00246798  48 05 E0 9D */	bl setMessageID__Q28JMessage8TControlFUlUlPb
/* 8024985C 0024679C  80 7E 00 08 */	lwz r3, 8(r30)
/* 80249860 002467A0  48 05 DD D5 */	bl update__Q28JMessage8TControlFv
/* 80249864 002467A4  80 7E 00 08 */	lwz r3, 8(r30)
/* 80249868 002467A8  48 05 DE 55 */	bl render__Q28JMessage8TControlFv
/* 8024986C 002467AC  80 7E 00 0C */	lwz r3, 0xc(r30)
/* 80249870 002467B0  38 80 00 00 */	li r4, 0
/* 80249874 002467B4  4B FE 61 C5 */	bl getLineLength__26jmessage_string_tReferenceFi
/* 80249878 002467B8  FF E0 08 90 */	fmr f31, f1
/* 8024987C 002467BC  80 7E 00 08 */	lwz r3, 8(r30)
/* 80249880 002467C0  48 05 DD 55 */	bl reset__Q28JMessage8TControlFv
/* 80249884 002467C4  80 7E 00 08 */	lwz r3, 8(r30)
/* 80249888 002467C8  80 83 00 04 */	lwz r4, 4(r3)
/* 8024988C 002467CC  28 04 00 00 */	cmplwi r4, 0
/* 80249890 002467D0  41 82 00 0C */	beq lbl_8024989C
/* 80249894 002467D4  38 00 00 00 */	li r0, 0
/* 80249898 002467D8  90 04 00 08 */	stw r0, 8(r4)
lbl_8024989C:
/* 8024989C 002467DC  80 83 00 08 */	lwz r4, 8(r3)
/* 802498A0 002467E0  28 04 00 00 */	cmplwi r4, 0
/* 802498A4 002467E4  41 82 00 0C */	beq lbl_802498B0
/* 802498A8 002467E8  38 00 00 00 */	li r0, 0
/* 802498AC 002467EC  90 04 00 08 */	stw r0, 8(r4)
lbl_802498B0:
/* 802498B0 002467F0  38 00 00 00 */	li r0, 0
/* 802498B4 002467F4  90 03 00 10 */	stw r0, 0x10(r3)
/* 802498B8 002467F8  FC 20 F8 90 */	fmr f1, f31
/* 802498BC 002467FC  CB E1 00 38 */	lfd f31, 0x38(r1)
/* 802498C0 00246800  39 61 00 38 */	addi r11, r1, 0x38
/* 802498C4 00246804  48 11 89 55 */	bl _restgpr_25
/* 802498C8 00246808  80 01 00 44 */	lwz r0, 0x44(r1)
/* 802498CC 0024680C  7C 08 03 A6 */	mtlr r0
/* 802498D0 00246810  38 21 00 40 */	addi r1, r1, 0x40
/* 802498D4 00246814  4E 80 00 20 */	blr 

.global getStringPageLocal__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
getStringPageLocal__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc:
/* 802498D8 00246818  94 21 FF C0 */	stwu r1, -0x40(r1)
/* 802498DC 0024681C  7C 08 02 A6 */	mflr r0
/* 802498E0 00246820  90 01 00 44 */	stw r0, 0x44(r1)
/* 802498E4 00246824  39 61 00 40 */	addi r11, r1, 0x40
/* 802498E8 00246828  48 11 88 DD */	bl _savegpr_23
/* 802498EC 0024682C  7C 78 1B 78 */	mr r24, r3
/* 802498F0 00246830  7C 99 23 78 */	mr r25, r4
/* 802498F4 00246834  7C BA 2B 78 */	mr r26, r5
/* 802498F8 00246838  7C DB 33 78 */	mr r27, r6
/* 802498FC 0024683C  7C FC 3B 78 */	mr r28, r7
/* 80249900 00246840  7D 1D 43 78 */	mr r29, r8
/* 80249904 00246844  7D 3E 4B 78 */	mr r30, r9
/* 80249908 00246848  7D 5F 53 78 */	mr r31, r10
/* 8024990C 0024684C  8A E1 00 4B */	lbz r23, 0x4b(r1)
/* 80249910 00246850  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80249914 00246854  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 80249918 00246858  80 83 00 10 */	lwz r4, 0x10(r3)
/* 8024991C 0024685C  28 04 00 00 */	cmplwi r4, 0
/* 80249920 00246860  41 82 00 64 */	beq lbl_80249984
/* 80249924 00246864  28 19 13 88 */	cmplwi r25, 0x1388
/* 80249928 00246868  40 81 00 34 */	ble lbl_8024995C
/* 8024992C 0024686C  80 18 00 1C */	lwz r0, 0x1c(r24)
/* 80249930 00246870  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80249934 00246874  7C 00 18 40 */	cmplw r0, r3
/* 80249938 00246878  41 82 00 4C */	beq lbl_80249984
/* 8024993C 0024687C  90 78 00 1C */	stw r3, 0x1c(r24)
/* 80249940 00246880  80 18 00 1C */	lwz r0, 0x1c(r24)
/* 80249944 00246884  90 01 00 0C */	stw r0, 0xc(r1)
/* 80249948 00246888  80 78 00 18 */	lwz r3, 0x18(r24)
/* 8024994C 0024688C  38 81 00 0C */	addi r4, r1, 0xc
/* 80249950 00246890  38 A0 00 80 */	li r5, 0x80
/* 80249954 00246894  48 09 2F BD */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 80249958 00246898  48 00 00 2C */	b lbl_80249984
lbl_8024995C:
/* 8024995C 0024689C  80 18 00 1C */	lwz r0, 0x1c(r24)
/* 80249960 002468A0  7C 00 20 40 */	cmplw r0, r4
/* 80249964 002468A4  41 82 00 20 */	beq lbl_80249984
/* 80249968 002468A8  90 98 00 1C */	stw r4, 0x1c(r24)
/* 8024996C 002468AC  80 18 00 1C */	lwz r0, 0x1c(r24)
/* 80249970 002468B0  90 01 00 08 */	stw r0, 8(r1)
/* 80249974 002468B4  80 78 00 18 */	lwz r3, 0x18(r24)
/* 80249978 002468B8  38 81 00 08 */	addi r4, r1, 8
/* 8024997C 002468BC  38 A0 00 80 */	li r5, 0x80
/* 80249980 002468C0  48 09 2F 91 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
lbl_80249984:
/* 80249984 002468C4  80 78 00 0C */	lwz r3, 0xc(r24)
/* 80249988 002468C8  7F 84 E3 78 */	mr r4, r28
/* 8024998C 002468CC  7F A5 EB 78 */	mr r5, r29
/* 80249990 002468D0  7F C6 F3 78 */	mr r6, r30
/* 80249994 002468D4  7F E7 FB 78 */	mr r7, r31
/* 80249998 002468D8  7E E8 BB 78 */	mr r8, r23
/* 8024999C 002468DC  4B FE 60 11 */	bl init__26jmessage_string_tReferenceFP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
/* 802499A0 002468E0  80 78 00 0C */	lwz r3, 0xc(r24)
/* 802499A4 002468E4  9B 43 00 83 */	stb r26, 0x83(r3)
/* 802499A8 002468E8  80 78 00 0C */	lwz r3, 0xc(r24)
/* 802499AC 002468EC  9B 63 00 82 */	stb r27, 0x82(r3)
/* 802499B0 002468F0  80 7C 01 08 */	lwz r3, 0x108(r28)
/* 802499B4 002468F4  90 61 00 10 */	stw r3, 0x10(r1)
/* 802499B8 002468F8  80 1C 01 04 */	lwz r0, 0x104(r28)
/* 802499BC 002468FC  90 01 00 14 */	stw r0, 0x14(r1)
/* 802499C0 00246900  80 98 00 0C */	lwz r4, 0xc(r24)
/* 802499C4 00246904  90 04 00 78 */	stw r0, 0x78(r4)
/* 802499C8 00246908  90 64 00 7C */	stw r3, 0x7c(r4)
/* 802499CC 0024690C  80 78 00 08 */	lwz r3, 8(r24)
/* 802499D0 00246910  7F 24 CB 78 */	mr r4, r25
/* 802499D4 00246914  38 A0 00 00 */	li r5, 0
/* 802499D8 00246918  38 C0 00 00 */	li r6, 0
/* 802499DC 0024691C  48 05 DF 19 */	bl setMessageID__Q28JMessage8TControlFUlUlPb
/* 802499E0 00246920  80 78 00 08 */	lwz r3, 8(r24)
/* 802499E4 00246924  48 05 DC 51 */	bl update__Q28JMessage8TControlFv
/* 802499E8 00246928  80 78 00 08 */	lwz r3, 8(r24)
/* 802499EC 0024692C  48 05 DC D1 */	bl render__Q28JMessage8TControlFv
/* 802499F0 00246930  80 78 00 08 */	lwz r3, 8(r24)
/* 802499F4 00246934  48 05 DB E1 */	bl reset__Q28JMessage8TControlFv
/* 802499F8 00246938  80 78 00 08 */	lwz r3, 8(r24)
/* 802499FC 0024693C  80 83 00 04 */	lwz r4, 4(r3)
/* 80249A00 00246940  28 04 00 00 */	cmplwi r4, 0
/* 80249A04 00246944  41 82 00 0C */	beq lbl_80249A10
/* 80249A08 00246948  38 00 00 00 */	li r0, 0
/* 80249A0C 0024694C  90 04 00 08 */	stw r0, 8(r4)
lbl_80249A10:
/* 80249A10 00246950  80 83 00 08 */	lwz r4, 8(r3)
/* 80249A14 00246954  28 04 00 00 */	cmplwi r4, 0
/* 80249A18 00246958  41 82 00 0C */	beq lbl_80249A24
/* 80249A1C 0024695C  38 00 00 00 */	li r0, 0
/* 80249A20 00246960  90 04 00 08 */	stw r0, 8(r4)
lbl_80249A24:
/* 80249A24 00246964  38 00 00 00 */	li r0, 0
/* 80249A28 00246968  90 03 00 10 */	stw r0, 0x10(r3)
/* 80249A2C 0024696C  C0 22 B3 70 */	lfs f1, lbl_80454D70-_SDA2_BASE_(r2)
/* 80249A30 00246970  39 61 00 40 */	addi r11, r1, 0x40
/* 80249A34 00246974  48 11 87 DD */	bl _restgpr_23
/* 80249A38 00246978  80 01 00 44 */	lwz r0, 0x44(r1)
/* 80249A3C 0024697C  7C 08 03 A6 */	mtlr r0
/* 80249A40 00246980  38 21 00 40 */	addi r1, r1, 0x40
/* 80249A44 00246984  4E 80 00 20 */	blr 

.global getPageMax__16dMsgStringBase_cFi
getPageMax__16dMsgStringBase_cFi:
/* 80249A48 00246988  80 63 00 0C */	lwz r3, 0xc(r3)
/* 80249A4C 0024698C  A8 A3 00 80 */	lha r5, 0x80(r3)
/* 80249A50 00246990  7C 05 23 D6 */	divw r0, r5, r4
/* 80249A54 00246994  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80249A58 00246998  7C 00 21 D6 */	mullw r0, r0, r4
/* 80249A5C 0024699C  7C 00 28 51 */	subf. r0, r0, r5
/* 80249A60 002469A0  4D 82 00 20 */	beqlr 
/* 80249A64 002469A4  38 03 00 01 */	addi r0, r3, 1
/* 80249A68 002469A8  54 03 06 3E */	clrlwi r3, r0, 0x18
/* 80249A6C 002469AC  4E 80 00 20 */	blr 

.global getMessageLocal__16dMsgStringBase_cFUlPc
getMessageLocal__16dMsgStringBase_cFUlPc:
/* 80249A70 002469B0  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 80249A74 002469B4  7C 08 02 A6 */	mflr r0
/* 80249A78 002469B8  90 01 00 24 */	stw r0, 0x24(r1)
/* 80249A7C 002469BC  39 61 00 20 */	addi r11, r1, 0x20
/* 80249A80 002469C0  48 11 87 5D */	bl _savegpr_29
/* 80249A84 002469C4  7C 7D 1B 78 */	mr r29, r3
/* 80249A88 002469C8  7C 9E 23 78 */	mr r30, r4
/* 80249A8C 002469CC  7C BF 2B 78 */	mr r31, r5
/* 80249A90 002469D0  3C 60 80 43 */	lis r3, g_meter2_info@ha
/* 80249A94 002469D4  38 63 01 88 */	addi r3, r3, g_meter2_info@l
/* 80249A98 002469D8  80 83 00 10 */	lwz r4, 0x10(r3)
/* 80249A9C 002469DC  28 04 00 00 */	cmplwi r4, 0
/* 80249AA0 002469E0  41 82 00 64 */	beq lbl_80249B04
/* 80249AA4 002469E4  28 1E 13 88 */	cmplwi r30, 0x1388
/* 80249AA8 002469E8  40 81 00 34 */	ble lbl_80249ADC
/* 80249AAC 002469EC  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80249AB0 002469F0  80 63 00 14 */	lwz r3, 0x14(r3)
/* 80249AB4 002469F4  7C 00 18 40 */	cmplw r0, r3
/* 80249AB8 002469F8  41 82 00 4C */	beq lbl_80249B04
/* 80249ABC 002469FC  90 7D 00 1C */	stw r3, 0x1c(r29)
/* 80249AC0 00246A00  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80249AC4 00246A04  90 01 00 0C */	stw r0, 0xc(r1)
/* 80249AC8 00246A08  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 80249ACC 00246A0C  38 81 00 0C */	addi r4, r1, 0xc
/* 80249AD0 00246A10  38 A0 00 80 */	li r5, 0x80
/* 80249AD4 00246A14  48 09 2E 3D */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
/* 80249AD8 00246A18  48 00 00 2C */	b lbl_80249B04
lbl_80249ADC:
/* 80249ADC 00246A1C  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80249AE0 00246A20  7C 00 20 40 */	cmplw r0, r4
/* 80249AE4 00246A24  41 82 00 20 */	beq lbl_80249B04
/* 80249AE8 00246A28  90 9D 00 1C */	stw r4, 0x1c(r29)
/* 80249AEC 00246A2C  80 1D 00 1C */	lwz r0, 0x1c(r29)
/* 80249AF0 00246A30  90 01 00 08 */	stw r0, 8(r1)
/* 80249AF4 00246A34  80 7D 00 18 */	lwz r3, 0x18(r29)
/* 80249AF8 00246A38  38 81 00 08 */	addi r4, r1, 8
/* 80249AFC 00246A3C  38 A0 00 80 */	li r5, 0x80
/* 80249B00 00246A40  48 09 2E 11 */	bl parse_next__Q37JGadget6binary19TParse_header_blockFPPCvUl
lbl_80249B04:
/* 80249B04 00246A44  80 7D 00 0C */	lwz r3, 0xc(r29)
/* 80249B08 00246A48  38 80 00 00 */	li r4, 0
/* 80249B0C 00246A4C  38 A0 00 00 */	li r5, 0
/* 80249B10 00246A50  38 C0 00 00 */	li r6, 0
/* 80249B14 00246A54  38 E0 00 00 */	li r7, 0
/* 80249B18 00246A58  39 00 00 00 */	li r8, 0
/* 80249B1C 00246A5C  4B FE 5E 91 */	bl init__26jmessage_string_tReferenceFP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
/* 80249B20 00246A60  80 7D 00 08 */	lwz r3, 8(r29)
/* 80249B24 00246A64  7F C4 F3 78 */	mr r4, r30
/* 80249B28 00246A68  38 A0 00 00 */	li r5, 0
/* 80249B2C 00246A6C  38 C0 00 00 */	li r6, 0
/* 80249B30 00246A70  48 05 DD C5 */	bl setMessageID__Q28JMessage8TControlFUlUlPb
/* 80249B34 00246A74  80 7D 00 08 */	lwz r3, 8(r29)
/* 80249B38 00246A78  48 05 DA FD */	bl update__Q28JMessage8TControlFv
/* 80249B3C 00246A7C  80 7D 00 08 */	lwz r3, 8(r29)
/* 80249B40 00246A80  48 05 DB 7D */	bl render__Q28JMessage8TControlFv
/* 80249B44 00246A84  80 7D 00 08 */	lwz r3, 8(r29)
/* 80249B48 00246A88  48 05 DA 8D */	bl reset__Q28JMessage8TControlFv
/* 80249B4C 00246A8C  80 7D 00 08 */	lwz r3, 8(r29)
/* 80249B50 00246A90  80 83 00 04 */	lwz r4, 4(r3)
/* 80249B54 00246A94  28 04 00 00 */	cmplwi r4, 0
/* 80249B58 00246A98  41 82 00 0C */	beq lbl_80249B64
/* 80249B5C 00246A9C  38 00 00 00 */	li r0, 0
/* 80249B60 00246AA0  90 04 00 08 */	stw r0, 8(r4)
lbl_80249B64:
/* 80249B64 00246AA4  80 83 00 08 */	lwz r4, 8(r3)
/* 80249B68 00246AA8  28 04 00 00 */	cmplwi r4, 0
/* 80249B6C 00246AAC  41 82 00 0C */	beq lbl_80249B78
/* 80249B70 00246AB0  38 00 00 00 */	li r0, 0
/* 80249B74 00246AB4  90 04 00 08 */	stw r0, 8(r4)
lbl_80249B78:
/* 80249B78 00246AB8  38 00 00 00 */	li r0, 0
/* 80249B7C 00246ABC  90 03 00 10 */	stw r0, 0x10(r3)
/* 80249B80 00246AC0  80 7D 00 14 */	lwz r3, 0x14(r29)
/* 80249B84 00246AC4  38 83 00 54 */	addi r4, r3, 0x54
/* 80249B88 00246AC8  7F E3 FB 78 */	mr r3, r31
/* 80249B8C 00246ACC  48 11 EF A1 */	bl strcpy
/* 80249B90 00246AD0  C0 22 B3 70 */	lfs f1, lbl_80454D70-_SDA2_BASE_(r2)
/* 80249B94 00246AD4  39 61 00 20 */	addi r11, r1, 0x20
/* 80249B98 00246AD8  48 11 86 91 */	bl _restgpr_29
/* 80249B9C 00246ADC  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80249BA0 00246AE0  7C 08 03 A6 */	mtlr r0
/* 80249BA4 00246AE4  38 21 00 20 */	addi r1, r1, 0x20
/* 80249BA8 00246AE8  4E 80 00 20 */	blr 
/* 80249BAC 00246AEC  4E 80 00 20 */	blr 
/* 80249BB0 00246AF0  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80249BB4 00246AF4  7C 08 02 A6 */	mflr r0
/* 80249BB8 00246AF8  90 01 00 14 */	stw r0, 0x14(r1)
/* 80249BBC 00246AFC  4B FF FB AD */	bl getStringLocal__16dMsgStringBase_cFUlP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
/* 80249BC0 00246B00  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80249BC4 00246B04  7C 08 03 A6 */	mtlr r0
/* 80249BC8 00246B08  38 21 00 10 */	addi r1, r1, 0x10
/* 80249BCC 00246B0C  4E 80 00 20 */	blr 
/* 80249BD0 00246B10  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80249BD4 00246B14  7C 08 02 A6 */	mflr r0
/* 80249BD8 00246B18  90 01 00 14 */	stw r0, 0x14(r1)
/* 80249BDC 00246B1C  88 01 00 1B */	lbz r0, 0x1b(r1)
/* 80249BE0 00246B20  90 01 00 08 */	stw r0, 8(r1)
/* 80249BE4 00246B24  4B FF FC F5 */	bl getStringPageLocal__16dMsgStringBase_cFUlUcUcP10J2DTextBoxP10J2DTextBoxP7JUTFontP10COutFont_cUc
/* 80249BE8 00246B28  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80249BEC 00246B2C  7C 08 03 A6 */	mtlr r0
/* 80249BF0 00246B30  38 21 00 10 */	addi r1, r1, 0x10
/* 80249BF4 00246B34  4E 80 00 20 */	blr 
/* 80249BF8 00246B38  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80249BFC 00246B3C  7C 08 02 A6 */	mflr r0
/* 80249C00 00246B40  90 01 00 14 */	stw r0, 0x14(r1)
/* 80249C04 00246B44  4B FF FE 6D */	bl getMessageLocal__16dMsgStringBase_cFUlPc
/* 80249C08 00246B48  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80249C0C 00246B4C  7C 08 03 A6 */	mtlr r0
/* 80249C10 00246B50  38 21 00 10 */	addi r1, r1, 0x10
/* 80249C14 00246B54  4E 80 00 20 */	blr 
/* 80249C18 00246B58  4E 80 00 20 */	blr 
/* 80249C1C 00246B5C  4E 80 00 20 */	blr 

