lbl_80AA961C:
/* 80AA961C  38 80 00 00 */	li r4, 0
/* 80AA9620  B0 83 00 00 */	sth r4, 0(r3)
/* 80AA9624  38 00 00 01 */	li r0, 1
/* 80AA9628  B0 03 00 02 */	sth r0, 2(r3)
/* 80AA962C  90 83 00 04 */	stw r4, 4(r3)
/* 80AA9630  4E 80 00 20 */	blr 
