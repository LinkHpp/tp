lbl_80B7A504:
/* 80B7A504  38 80 00 00 */	li r4, 0
/* 80B7A508  B0 83 00 00 */	sth r4, 0(r3)
/* 80B7A50C  38 00 00 01 */	li r0, 1
/* 80B7A510  B0 03 00 02 */	sth r0, 2(r3)
/* 80B7A514  90 83 00 04 */	stw r4, 4(r3)
/* 80B7A518  4E 80 00 20 */	blr 