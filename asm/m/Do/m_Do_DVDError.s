.include "macros.inc"

.section .text, "ax" # 8001659c


.global mDoDvdErr_ThdInit
mDoDvdErr_ThdInit:
/* 8001659C 000134DC  94 21 FF E0 */	stwu r1, -0x20(r1)
/* 800165A0 000134E0  7C 08 02 A6 */	mflr r0
/* 800165A4 000134E4  90 01 00 24 */	stw r0, 0x24(r1)
/* 800165A8 000134E8  39 61 00 20 */	addi r11, r1, 0x20
/* 800165AC 000134EC  48 34 BC 31 */	bl _savegpr_29
/* 800165B0 000134F0  3C 60 80 3E */	lis r3, lbl_803DECC0@ha
/* 800165B4 000134F4  3B E3 EC C0 */	addi r31, r3, lbl_803DECC0@l
/* 800165B8 000134F8  88 0D 87 08 */	lbz r0, lbl_80450C88-_SDA_BASE_(r13)
/* 800165BC 000134FC  28 00 00 00 */	cmplwi r0, 0
/* 800165C0 00013500  40 82 00 84 */	bne lbl_80016644
/* 800165C4 00013504  48 32 C1 39 */	bl OSGetTime
/* 800165C8 00013508  7C 9D 23 78 */	mr r29, r4
/* 800165CC 0001350C  7C 7E 1B 78 */	mr r30, r3
/* 800165D0 00013510  48 32 A6 B5 */	bl OSGetCurrentThread
/* 800165D4 00013514  48 32 B8 89 */	bl OSGetThreadPriority
/* 800165D8 00013518  7C 68 1B 78 */	mr r8, r3
/* 800165DC 0001351C  38 7F 00 00 */	addi r3, r31, 0
.global mDoDvdErr_Watch
/* 800165E0 00013520  3C 80 80 01 */	lis r4, mDoDvdErr_Watch@ha
.global mDoDvdErr_Watch
/* 800165E4 00013524  38 84 66 A4 */	addi r4, r4, mDoDvdErr_Watch@l
/* 800165E8 00013528  38 A0 00 00 */	li r5, 0
/* 800165EC 0001352C  38 DF 03 20 */	addi r6, r31, 0x320
/* 800165F0 00013530  38 E0 0C 00 */	li r7, 0xc00
/* 800165F4 00013534  39 08 FF FD */	addi r8, r8, -3
/* 800165F8 00013538  39 20 00 01 */	li r9, 1
/* 800165FC 0001353C  38 C6 0C 00 */	addi r6, r6, 0xc00
/* 80016600 00013540  48 32 AC 8D */	bl OSCreateThread
/* 80016604 00013544  38 7F 00 00 */	addi r3, r31, 0
/* 80016608 00013548  48 32 B1 AD */	bl OSResumeThread
/* 8001660C 0001354C  38 7F 0F 20 */	addi r3, r31, 0xf20
/* 80016610 00013550  48 32 42 E9 */	bl OSCreateAlarm
/* 80016614 00013554  38 7F 0F 20 */	addi r3, r31, 0xf20
/* 80016618 00013558  7F A6 EB 78 */	mr r6, r29
/* 8001661C 0001355C  7F C5 F3 78 */	mr r5, r30
/* 80016620 00013560  3C 80 80 00 */	lis r4, 0x800000F8@ha
/* 80016624 00013564  80 04 00 F8 */	lwz r0, 0x800000F8@l(r4)
/* 80016628 00013568  54 08 F0 BE */	srwi r8, r0, 2
/* 8001662C 0001356C  38 E0 00 00 */	li r7, 0
.global AlarmHandler
/* 80016630 00013570  3C 80 80 01 */	lis r4, AlarmHandler@ha
.global AlarmHandler
/* 80016634 00013574  39 24 67 04 */	addi r9, r4, AlarmHandler@l
/* 80016638 00013578  48 32 45 89 */	bl OSSetPeriodicAlarm
/* 8001663C 0001357C  38 00 00 01 */	li r0, 1
/* 80016640 00013580  98 0D 87 08 */	stb r0, lbl_80450C88-_SDA_BASE_(r13)
lbl_80016644:
/* 80016644 00013584  39 61 00 20 */	addi r11, r1, 0x20
/* 80016648 00013588  48 34 BB E1 */	bl _restgpr_29
/* 8001664C 0001358C  80 01 00 24 */	lwz r0, 0x24(r1)
/* 80016650 00013590  7C 08 03 A6 */	mtlr r0
/* 80016654 00013594  38 21 00 20 */	addi r1, r1, 0x20
/* 80016658 00013598  4E 80 00 20 */	blr 

.global mDoDvdErr_ThdCleanup
mDoDvdErr_ThdCleanup:
/* 8001665C 0001359C  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80016660 000135A0  7C 08 02 A6 */	mflr r0
/* 80016664 000135A4  90 01 00 14 */	stw r0, 0x14(r1)
/* 80016668 000135A8  88 0D 87 08 */	lbz r0, lbl_80450C88-_SDA_BASE_(r13)
/* 8001666C 000135AC  28 00 00 00 */	cmplwi r0, 0
/* 80016670 000135B0  41 82 00 24 */	beq lbl_80016694
/* 80016674 000135B4  3C 60 80 3E */	lis r3, lbl_803DECC0@ha
/* 80016678 000135B8  38 63 EC C0 */	addi r3, r3, lbl_803DECC0@l
/* 8001667C 000135BC  48 32 AE DD */	bl OSCancelThread
/* 80016680 000135C0  3C 60 80 3E */	lis r3, lbl_803DFBE0@ha
/* 80016684 000135C4  38 63 FB E0 */	addi r3, r3, lbl_803DFBE0@l
/* 80016688 000135C8  48 32 45 B5 */	bl OSCancelAlarm
/* 8001668C 000135CC  38 00 00 00 */	li r0, 0
/* 80016690 000135D0  98 0D 87 08 */	stb r0, lbl_80450C88-_SDA_BASE_(r13)
lbl_80016694:
/* 80016694 000135D4  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80016698 000135D8  7C 08 03 A6 */	mtlr r0
/* 8001669C 000135DC  38 21 00 10 */	addi r1, r1, 0x10
/* 800166A0 000135E0  4E 80 00 20 */	blr 
.global mDoDvdErr_Watch
mDoDvdErr_Watch:
/* 800166A4 000135E4  94 21 FF 70 */	stwu r1, -0x90(r1)
/* 800166A8 000135E8  7C 08 02 A6 */	mflr r0
/* 800166AC 000135EC  90 01 00 94 */	stw r0, 0x94(r1)
/* 800166B0 000135F0  93 E1 00 8C */	stw r31, 0x8c(r1)
/* 800166B4 000135F4  48 32 70 41 */	bl __RAS_OSDisableInterrupts_begin 
/* 800166B8 000135F8  48 32 A5 CD */	bl OSGetCurrentThread
/* 800166BC 000135FC  7C 64 1B 78 */	mr r4, r3
/* 800166C0 00013600  38 61 00 08 */	addi r3, r1, 8
/* 800166C4 00013604  38 A0 00 00 */	li r5, 0
/* 800166C8 00013608  48 2B AF F1 */	bl __ct__9JKRThreadFP8OSThreadi
/* 800166CC 0001360C  38 61 00 08 */	addi r3, r1, 8
/* 800166D0 00013610  38 80 FF FF */	li r4, -1
/* 800166D4 00013614  48 2B B0 85 */	bl __dt__9JKRThreadFv
/* 800166D8 00013618  4B FF 86 0D */	bl mDoExt_getAssertHeap
/* 800166DC 0001361C  48 2B 7D 5D */	bl becomeCurrentHeap__7JKRHeapFv
/* 800166E0 00013620  3C 60 80 3E */	lis r3, lbl_803DECC0@ha
/* 800166E4 00013624  3B E3 EC C0 */	addi r31, r3, lbl_803DECC0@l
lbl_800166E8:
/* 800166E8 00013628  48 33 4A E1 */	bl DVDGetDriveStatus
/* 800166EC 0001362C  2C 03 FF FF */	cmpwi r3, -1
/* 800166F0 00013630  40 82 00 08 */	bne lbl_800166F8
/* 800166F4 00013634  4B FF F1 C1 */	bl mDoDvdThd_NS_suspend
lbl_800166F8:
/* 800166F8 00013638  7F E3 FB 78 */	mr r3, r31
/* 800166FC 0001363C  48 32 B3 41 */	bl OSSuspendThread
/* 80016700 00013640  4B FF FF E8 */	b lbl_800166E8
.global AlarmHandler
AlarmHandler:
/* 80016704 00013644  94 21 FF F0 */	stwu r1, -0x10(r1)
/* 80016708 00013648  7C 08 02 A6 */	mflr r0
/* 8001670C 0001364C  90 01 00 14 */	stw r0, 0x14(r1)
/* 80016710 00013650  3C 60 80 3E */	lis r3, lbl_803DECC0@ha
/* 80016714 00013654  38 63 EC C0 */	addi r3, r3, lbl_803DECC0@l
/* 80016718 00013658  48 32 B0 9D */	bl OSResumeThread
/* 8001671C 0001365C  80 01 00 14 */	lwz r0, 0x14(r1)
/* 80016720 00013660  7C 08 03 A6 */	mtlr r0
/* 80016724 00013664  38 21 00 10 */	addi r1, r1, 0x10
/* 80016728 00013668  4E 80 00 20 */	blr 

