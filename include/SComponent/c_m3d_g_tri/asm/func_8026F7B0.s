/* 8026F7B0 0026C6F0  94 21 FF F0 */ stwu r1, -0x10(r1)
/* 8026F7B4 0026C6F4  7C 08 02 A6 */ mflr r0
/* 8026F7B8 0026C6F8  90 01 00 14 */ stw r0, 0x14(r1)
/* 8026F7BC 0026C6FC  7C 60 1B 78 */ mr r0, r3
/* 8026F7C0 0026C700  7C 83 23 78 */ mr r3, r4
/* 8026F7C4 0026C704  7C 04 03 78 */ mr r4, r0
/* 8026F7C8 0026C708  4B FF CE 09 */ bl cM3d_Cross_CylTri__FPC8cM3dGCylPC8cM3dGTriP3Vec
/* 8026F7CC 0026C70C  80 01 00 14 */ lwz r0, 0x14(r1)
/* 8026F7D0 0026C710  7C 08 03 A6 */ mtlr r0
/* 8026F7D4 0026C714  38 21 00 10 */ addi r1, r1, 0x10
/* 8026F7D8 0026C718  4E 80 00 20 */ blr