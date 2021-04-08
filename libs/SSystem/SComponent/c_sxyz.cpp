//
// Generated By: dol2asm
// Translation Unit: c_sxyz
//

#include "SSystem/SComponent/c_sxyz.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Declarations:
//

const csXyz csXyz::Zero = csXyz(0, 0, 0);

/* 802673F4-80267404 0010+00 s=4 e=19 z=119  None .text      __ct__5csXyzFsss */
csXyz::csXyz(s16 param_0, s16 param_1, s16 param_2) {
    mX = param_0;
    mY = param_1;
    mZ = param_2;
}

/* 80267404-8026745C 0058+00 s=0 e=0 z=3  None .text      __pl__5csXyzFR5csXyz */
csXyz csXyz::operator+(csXyz& param_0) {
    return csXyz(mX + param_0.mX, mY + param_0.mY, mZ + param_0.mZ);
}

/* 8026745C-80267490 0034+00 s=0 e=2 z=11  None .text      __apl__5csXyzFR5csXyz */
void csXyz::operator+=(csXyz& param_0) {
    mX += param_0.mX;
    mY += param_0.mY;
    mZ += param_0.mZ;
}

/* 80267490-802674E8 0058+00 s=0 e=0 z=1  None .text      __mi__5csXyzFR5csXyz */
csXyz csXyz::operator-(csXyz& param_0) {
    return csXyz(mX - param_0.mX, mY - param_0.mY, mZ - param_0.mZ);
}

/* 802674E8-8026758C 00A4+00 s=0 e=0 z=1  None .text      __ml__5csXyzFf */
csXyz csXyz::operator*(f32 param_0) {
    return csXyz(mX * param_0, mY * param_0, mZ * param_0);
}
