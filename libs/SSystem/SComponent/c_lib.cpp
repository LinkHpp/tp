/* c_lib.cpp autogenerated by split.py v0.3 at 2021-01-01 14:12:11.766106 */

#include "SComponent/c_lib.h"
#include "JSystem/JMath/JMath.h"
#include "SComponent/c_math.h"

extern "C" {
int abs(int);
void __eq__4cXyzCFRC3Vec(void);
void __mi__4cXyzCFRC3Vec(void);
void __ml__4cXyzCFf(void);
void __ne__4cXyzCFRC3Vec(void);
void cM_atan2s__Fff(void);
void memcpy(void*, const void*, int);
void normZP__4cXyzCFv(void);
void* memset(void* dest, int ch, u32 count);
}

// cLib_memCpy__FPvPCvUl
// cLib_memCpy(void*, const void*, unsigned long)
void cLib_memCpy(void* dst, const void* src, unsigned long size) {
    memcpy(dst, src, size);
}

// cLib_memSet__FPviUl
// cLib_memSet(void*, int, unsigned long)
void cLib_memSet(void* ptr, int value, unsigned long size) {
    memset(ptr, value, size);
}

// cLib_addCalc__FPfffff
// cLib_addCalc(float*, float, float, float, float)
asm float cLib_addCalc(float*, float, float, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_8026F97C.s"
}

// cLib_addCalc2__FPffff
// cLib_addCalc2(float*, float, float, float)
asm void cLib_addCalc2(float*, float, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_8026FA3C.s"
}

// cLib_addCalc0__FPfff
// cLib_addCalc0(float*, float, float)
asm void cLib_addCalc0(float*, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_8026FA80.s"
}

// cLib_addCalcPos__FP4cXyzRC4cXyzfff
// cLib_addCalcPos(cXyz*, const cXyz&, float, float, float)
asm float cLib_addCalcPos(cXyz*, const cXyz&, float, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_8026FAB8.s"
}

// cLib_addCalcPosXZ__FP4cXyzRC4cXyzfff
// cLib_addCalcPosXZ(cXyz*, const cXyz&, float, float, float)
asm float cLib_addCalcPosXZ(cXyz*, const cXyz&, float, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_8026FDF4.s"
}

// cLib_addCalcPos2__FP4cXyzRC4cXyzff
// cLib_addCalcPos2(cXyz*, const cXyz&, float, float)
asm void cLib_addCalcPos2(cXyz*, const cXyz&, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270178.s"
}

// cLib_addCalcPosXZ2__FP4cXyzRC4cXyzff
// cLib_addCalcPosXZ2(cXyz*, const cXyz&, float, float)
asm void cLib_addCalcPosXZ2(cXyz*, const cXyz&, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270350.s"
}

// cLib_addCalcAngleS__FPsssss
// cLib_addCalcAngleS(short*, short, short, short, short)
asm short cLib_addCalcAngleS(short*, short, short, short, short) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270540.s"
}

// cLib_addCalcAngleS2__FPssss
// cLib_addCalcAngleS2(short*, short, short, short)
asm void cLib_addCalcAngleS2(short*, short, short, short) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270608.s"
}

// cLib_chaseUC__FPUcUcUc
// cLib_chaseUC(unsigned char*, unsigned char, unsigned char)
asm int cLib_chaseUC(unsigned char*, unsigned char, unsigned char) {
    nofralloc
#include "SComponent/c_lib/asm/func_8027065C.s"
}

// cLib_chaseS__FPsss
// cLib_chaseS(short*, short, short)
asm int cLib_chaseS(short*, short, short) {
    nofralloc
#include "SComponent/c_lib/asm/func_802706D0.s"
}

// cLib_chaseF__FPfff
// cLib_chaseF(float*, float, float)
asm int cLib_chaseF(float*, float, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270740.s"
}

// cLib_chasePos__FP4cXyzRC4cXyzf
// cLib_chasePos(cXyz*, const cXyz&, float)
asm int cLib_chasePos(cXyz*, const cXyz&, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_802707AC.s"
}

// cLib_chasePosXZ__FP4cXyzRC4cXyzf
// cLib_chasePosXZ(cXyz*, const cXyz&, float)
asm int cLib_chasePosXZ(cXyz*, const cXyz&, float) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270990.s"
}

// cLib_chaseAngleS__FPsss
// cLib_chaseAngleS(short*, short, short)
asm int cLib_chaseAngleS(short*, short, short){nofralloc
#include "SComponent/c_lib/asm/func_80270B90.s"
}

// cLib_targetAngleY__FPC3VecPC3Vec
// cLib_targetAngleY(const Vec*, const Vec*)
s16 cLib_targetAngleY(const Vec* lhs, const Vec* rhs) {
    return cM_atan2s(rhs->x - lhs->x, rhs->z - lhs->z);
}

// cLib_targetAngleY__FRC3VecRC3Vec
// cLib_targetAngleY(const Vec&, const Vec&)
s16 cLib_targetAngleY(const Vec& lhs, const Vec& rhs) {
    return cM_atan2s(rhs.x - lhs.x, rhs.z - lhs.z);
}

// cLib_targetAngleX__FPC4cXyzPC4cXyz
// cLib_targetAngleX(const cXyz*, const cXyz*)
asm short cLib_targetAngleX(const cXyz*, const cXyz*) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270C74.s"
}

// cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz
// cLib_offsetPos(cXyz*, const cXyz*, short, const cXyz*)
asm void cLib_offsetPos(cXyz*, const cXyz*, short, const cXyz*){nofralloc
#include "SComponent/c_lib/asm/func_80270DC0.s"
}

// cLib_distanceAngleS__Fss
// cLib_distanceAngleS(short, short)
s32 cLib_distanceAngleS(s16 x, s16 y) {
    return abs(static_cast<s16>(x - y));
}

// MtxInit__Fv
// MtxInit(void)
asm void MtxInit(void) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270E4C.s"
}

// MtxTrans__FfffUc
// MtxTrans(float, float, float, unsigned char)
asm void MtxTrans(float, float, float, unsigned char) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270E5C.s"
}

// MtxScale__FfffUc
// MtxScale(float, float, float, unsigned char)
asm void MtxScale(float, float, float, unsigned char) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270EA4.s"
}

// MtxPosition__FP4cXyzP4cXyz
// MtxPosition(cXyz*, cXyz*)
asm void MtxPosition(cXyz*, cXyz*) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270EEC.s"
}

// MtxPush__Fv
// MtxPush(void)
asm void MtxPush(void) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270F1C.s"
}

// MtxPull__Fv
// MtxPull(void)
asm Mtx* MtxPull(void) {
    nofralloc
#include "SComponent/c_lib/asm/func_80270F58.s"
}
