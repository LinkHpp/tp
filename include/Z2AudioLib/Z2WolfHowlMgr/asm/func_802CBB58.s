/* 802CBB58 002C8A98  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 802CBB5C 002C8A9C  7C 08 02 A6 */ mflr r0
/* 802CBB60 002C8AA0  90 01 00 14 */ stw r0, 0x14(r1)
/* 802CBB64 002C8AA4  80 6D 86 04 */ lwz r3, lbl_80450B84-_SDA_BASE_(r13)
/* 802CBB68 002C8AA8  4B FE 77 15 */ bl Z2SeqMgr_NS_stopWolfHowlSong
/* 802CBB6C 002C8AAC  80 01 00 14 */ lwz r0, 0x14(r1)
/* 802CBB70 002C8AB0  7C 08 03 A6 */ mtlr r0
/* 802CBB74 002C8AB4  38 21 00 10 */ addi r1, r1, 0x10
/* 802CBB78 002C8AB8  4E 80 00 20 */ blr