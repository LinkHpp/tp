//
// Generated By: dol2asm
// Translation Unit: J3DShapeDraw
//

#include "JSystem/J3DGraphBase/J3DShapeDraw.h"
#include "string.h"
#include "dolphin/gx.h"
#include "dolphin/os/OSCache.h"
#include "global.h"

//
// External References:
//

extern "C" void countVertex__12J3DShapeDrawFUl();
extern "C" void* __nwa__FUli();
extern "C" void __dl__FPv();
extern "C" void _savegpr_18();
extern "C" void _restgpr_18();

/* 80314924-80314974 30F264 0050+00 1/1 0/0 0/0 .text            countVertex__12J3DShapeDrawFUl */
u32 J3DShapeDraw::countVertex(u32 stride) {
    u32 count = 0;
    u32 dlStart = (u32)getDisplayList();
    for (u8* dl = (u8*)dlStart; ((u32)dl - dlStart) < getDisplayListSize();) {
        if (*dl != GX_TRIANGLEFAN && *dl != GX_TRIANGLESTRIP)
            break;
        u16 vtxNum = *((u16*)(dl + 1));
        count += vtxNum;
        dl += stride * vtxNum;
        dl += 3;
    }
    return count;
}

#ifdef NONMATCHING
/* 80314974-80314ABC 30F2B4 0148+00 0/0 1/1 0/0 .text addTexMtxIndexInDL__12J3DShapeDrawFUlUlUl */
void J3DShapeDraw::addTexMtxIndexInDL(u32 stride, u32 attrOffs, u32 valueBase) {
    u32 byteNum = countVertex(stride);
    u32 newSize = ALIGN_NEXT(mDisplayListSize + byteNum, 0x20);
    u8* newDLStart = new (0x20) u8[newSize];
    u8* oldDLStart = getDisplayList();
    u8* oldDL = oldDLStart;
    u8* newDL = newDLStart;
    for (; (oldDL - oldDLStart) < mDisplayListSize;) {
        // Copy command
        u8 h = *oldDL;
        *newDL++ = h;

        if (h != GX_TRIANGLEFAN && h != GX_TRIANGLESTRIP)
            break;

        // Copy count
        // regalloc (I suspect there's a way to shove this in a u16 temp without an mr)
        u32 vtxNum = *((u16*)(oldDL + 1));
        *((u16*)newDL) = vtxNum;
        newDL += 2;

        for (s32 i = 0; i < (u16)vtxNum; i++) {
            // mul arg swap
            u8* oldDLVtx = (&oldDL[stride * i + 3]);
            u8 pnmtxidx = *oldDLVtx;
            memcpy(newDL, oldDLVtx, attrOffs);
            u8* newDL1 = &newDL[attrOffs];
            *newDL1++ = valueBase + pnmtxidx;
            memcpy(newDL1, oldDLVtx + attrOffs, stride - attrOffs);
            newDL = newDL1 + (stride - attrOffs);
        }

        oldDL += stride * vtxNum;
        oldDL += 3;
    }

    u32 realSize = ALIGN_NEXT((u32)newDL - (u32)newDLStart, 0x20);
    for (; (newDL - newDLStart) < newSize; newDL++)
        *newDL = 0;
    mDisplayListSize = realSize;
    mDisplayList = newDLStart;
    DCStoreRange(newDLStart, mDisplayListSize);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DShapeDraw::addTexMtxIndexInDL(u32 param_0, u32 param_1, u32 param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DShapeDraw/addTexMtxIndexInDL__12J3DShapeDrawFUlUlUl.s"
}
#pragma pop
#endif

/* 80314ABC-80314AD4 30F3FC 0018+00 0/0 1/1 0/0 .text            __ct__12J3DShapeDrawFPCUcUl */
J3DShapeDraw::J3DShapeDraw(u8 const* displayList, u32 displayListSize) {
    mDisplayList = (void*)displayList;
    mDisplayListSize = displayListSize;
}

/* 80314AD4-80314B00 30F414 002C+00 0/0 3/3 0/0 .text            draw__12J3DShapeDrawCFv */
void J3DShapeDraw::draw() const {
    GXCallDisplayList(mDisplayList, mDisplayListSize);
}

/* 80314B00-80314B48 30F440 0048+00 1/0 0/0 0/0 .text            __dt__12J3DShapeDrawFv */
J3DShapeDraw::~J3DShapeDraw() {}
