//
// Generated By: dol2asm
// Translation Unit: J3DTevs
//

#include "JSystem/J3DGraphBase/J3DTevs.h"
#include "JSystem/J3DGraphBase/J3DSys.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct J3DTexMtx {
    /* 803238C4 */ void load(u32) const;
    /* 80323900 */ void calc(f32 const (*)[4]);
    /* 80323920 */ void calcTexMtx(f32 const (*)[4]);
    /* 80323C0C */ void calcPostTexMtx(f32 const (*)[4]);
    /* 80324358 */ void loadTexMtx(u32) const;
    /* 803243BC */ void loadPostTexMtx(u32) const;
};

struct J3DTexCoord {};

struct J3DNBTScale {};

struct J3DLightObj {
    /* 80323590 */ void load(u32) const;
};

//
// Forward References:
//

extern "C" void load__11J3DLightObjCFUl();
extern "C" void loadTexCoordGens__FUlP11J3DTexCoord();
extern "C" void load__9J3DTexMtxCFUl();
extern "C" void calc__9J3DTexMtxFPA4_Cf();
extern "C" void calcTexMtx__9J3DTexMtxFPA4_Cf();
extern "C" void calcPostTexMtx__9J3DTexMtxFPA4_Cf();
extern "C" void isTexNoReg__FPv();
extern "C" void getTexNoReg__FPv();
extern "C" void loadTexNo__FUlRCUs();
extern "C" void patchTexNo_PtrToIdx__FUlRCUs();
extern "C" void loadNBTScale__FR11J3DNBTScale();
extern "C" void makeTexCoordTable__Fv();
extern "C" void makeAlphaCmpTable__Fv();
extern "C" void makeZModeTable__Fv();
extern "C" void makeTevSwapTable__Fv();
extern "C" void loadTexMtx__9J3DTexMtxCFUl();
extern "C" void loadPostTexMtx__9J3DTexMtxCFUl();
extern "C" static void J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType();
extern "C" static void J3DGDLoadPostTexMtxImm__FPA4_fUl();
extern "C" extern GXColor j3dDefaultColInfo;
extern "C" extern u32 j3dDefaultAmbInfo;
extern "C" extern u8 data_804563C8;
extern "C" extern u32 j3dDefaultTevOrderInfoNull;
extern "C" extern u32 j3dDefaultIndTexOrderNull;
extern "C" extern u32 j3dDefaultTevColor;
extern "C" extern u32 data_804563D8;
extern "C" extern u8 j3dDefaultIndTexCoordScaleInfo[4];
extern "C" extern GXColor j3dDefaultTevKColor;
extern "C" extern u8 j3dDefaultTevSwapMode[4];
extern "C" extern u32 j3dDefaultTevSwapModeTable;
extern "C" extern u32 j3dDefaultBlendInfo;
extern "C" extern u8 j3dDefaultColorChanInfo[8];
extern "C" extern u16 data_804563F8;
extern "C" extern u16 j3dDefaultAlphaCmpID;
extern "C" extern u16 j3dDefaultZModeID[1 + 1 /* padding */];

//
// External References:
//

extern void J3DGDSetTexImgPtrRaw(_GXTexMapID param_0, u32 param_1);

extern "C" void J3DGDSetLightAttn__F10_GXLightIDffffff();
extern "C" void J3DGDSetLightColor__F10_GXLightID8_GXColor();
extern "C" void J3DGDSetLightPos__F10_GXLightIDfff();
extern "C" void J3DGDSetLightDir__F10_GXLightIDfff();
extern "C" void J3DGDSetTexCoordGen__F13_GXTexGenType12_GXTexGenSrc();
extern "C" void
J3DGDSetTexLookupMode__F11_GXTexMapID14_GXTexWrapMode14_GXTexWrapMode12_GXTexFilter12_GXTexFilterfffUcUc13_GXAnisotropy();
extern "C" void J3DGDSetTexImgAttr__F11_GXTexMapIDUsUs9_GXTexFmt();
extern "C" void J3DGDSetTexImgPtr__F11_GXTexMapIDPv();
extern "C" void J3DGDSetTexTlut__F11_GXTexMapIDUl10_GXTlutFmt();
extern "C" void J3DGDLoadTlut__FPvUl11_GXTlutSize();
extern "C" void J3DGetTextureMtx__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxOld__FRC17J3DTextureSRTInfoRC3VecPA4_f();
extern "C" void J3DGetTextureMtxMaya__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DGetTextureMtxMayaOld__FRC17J3DTextureSRTInfoPA4_f();
extern "C" void J3DMtxProjConcat__FPA4_fPA4_fPA4_f();
extern "C" void GDOverflowed();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" u8 sTexCoordScaleTable__6J3DSys[64 + 4 /* padding */];
extern "C" extern u8 __GDCurrentDL[4];

//
// Declarations:
//

/* 80323590-80323644 31DED0 00B4+00 0/0 3/3 0/0 .text            load__11J3DLightObjCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DLightObj::load(u32 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/load__11J3DLightObjCFUl.s"
}
#pragma pop

/* 80323644-803238C4 31DF84 0280+00 0/0 3/3 0/0 .text            loadTexCoordGens__FUlP11J3DTexCoord
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadTexCoordGens(u32 param_0, J3DTexCoord* param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexCoordGens__FUlP11J3DTexCoord.s"
}
#pragma pop

/* 803238C4-80323900 31E204 003C+00 0/0 6/6 0/0 .text            load__9J3DTexMtxCFUl */
void J3DTexMtx::load(u32 mtxIdx) const {
    if (j3dSys.checkFlag(J3DSysFlag_PostTexMtx)) {
        loadPostTexMtx(mtxIdx);
    } else {
        loadTexMtx(mtxIdx);
    }
}

/* 80323900-80323920 31E240 0020+00 0/0 2/2 0/0 .text            calc__9J3DTexMtxFPA4_Cf */
void J3DTexMtx::calc(f32 const (*param_0)[4]) {
    calcTexMtx(param_0);
}

/* ############################################################################################## */
/* 803CEAC8-803CEAF8 02BBE8 0030+00 1/1 0/0 0/0 .data            qMtx$1001 */
SECTION_DATA static u8 qMtx_1001[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEAF8-803CEB28 02BC18 0030+00 1/1 0/0 0/0 .data            qMtx2$1002 */
SECTION_DATA static u8 qMtx2_1002[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEB28-803CEB58 -00001 0030+00 1/1 0/0 0/0 .data            @1059 */
SECTION_DATA static void* lit_1059[12] = {
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x2A4),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x1C8),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x20C),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x20C),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x260),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x20C),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x170),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0xB0),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x48),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x48),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x108),
    (void*)(((char*)calcTexMtx__9J3DTexMtxFPA4_Cf) + 0x48),
};

/* 80323920-80323C0C 31E260 02EC+00 2/1 0/0 0/0 .text            calcTexMtx__9J3DTexMtxFPA4_Cf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::calcTexMtx(f32 const (*param_0)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/calcTexMtx__9J3DTexMtxFPA4_Cf.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CEB58-803CEB88 02BC78 0030+00 1/1 0/0 0/0 .data            qMtx$1063 */
SECTION_DATA static u8 qMtx_1063[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEB88-803CEBB8 02BCA8 0030+00 1/1 0/0 0/0 .data            qMtx2$1064 */
SECTION_DATA static u8 qMtx2_1064[48] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xBF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 803CEBB8-803CEBE8 -00001 0030+00 1/1 0/0 0/0 .data            @1131 */
SECTION_DATA static void* lit_1131[12] = {
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x310),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x200),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x234),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x288),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x2CC),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x234),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x1B8),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x108),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x48),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0xB0),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x150),
    (void*)(((char*)calcPostTexMtx__9J3DTexMtxFPA4_Cf) + 0x48),
};

/* 80323C0C-80323F64 31E54C 0358+00 1/0 2/2 0/0 .text            calcPostTexMtx__9J3DTexMtxFPA4_Cf
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::calcPostTexMtx(f32 const (*param_0)[4]) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/calcPostTexMtx__9J3DTexMtxFPA4_Cf.s"
}
#pragma pop

/* 80323F64-80323F88 31E8A4 0024+00 0/0 1/1 0/0 .text            isTexNoReg__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void isTexNoReg(void* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/isTexNoReg__FPv.s"
}
#pragma pop

/* 80323F88-80323F94 31E8C8 000C+00 0/0 1/1 0/0 .text            getTexNoReg__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void getTexNoReg(void* param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/getTexNoReg__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804563B0-804563B4 0049B0 0004+00 1/1 0/0 0/0 .sdata2          @1167 */
SECTION_SDATA2 static f32 lit_1167 = 0.125f;

/* 804563B4-804563B8 0049B4 0004+00 1/1 0/0 0/0 .sdata2          @1168 */
SECTION_SDATA2 static f32 lit_1168 = 1.0f / 100.0f;

/* 804563B8-804563C0 0049B8 0008+00 1/1 0/0 0/0 .sdata2          @1171 */
SECTION_SDATA2 static f64 lit_1171 = 4503601774854144.0 /* cast s32 to float */;

/* 80323F94-8032413C 31E8D4 01A8+00 0/0 20/20 0/0 .text            loadTexNo__FUlRCUs */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadTexNo(u32 param_0, u16 const& param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexNo__FUlRCUs.s"
}
#pragma pop

/* 8032413C-80324160 31EA7C 0024+00 0/0 2/2 0/0 .text            patchTexNo_PtrToIdx__FUlRCUs */
void patchTexNo_PtrToIdx(u32 texID, u16 const& idx) {
    J3DGDSetTexImgPtrRaw((GXTexMapID) texID, idx);
}

/* 80324160-80324194 31EAA0 0034+00 0/0 2/2 0/0 .text            loadNBTScale__FR11J3DNBTScale */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void loadNBTScale(J3DNBTScale& param_0) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadNBTScale__FR11J3DNBTScale.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A1EC8-803A1EFC 02E528 0034+00 0/0 9/9 24/24 .rodata          j3dDefaultLightInfo */
SECTION_RODATA extern u8 const j3dDefaultLightInfo[52] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0xBF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
    0xFF, 0xFF, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1EC8, &j3dDefaultLightInfo);

/* 803A1EFC-803A1F1C 02E55C 0020+00 0/0 5/5 0/0 .rodata          j3dDefaultTexCoordInfo */
SECTION_RODATA extern u8 const j3dDefaultTexCoordInfo[32] = {
    0x01, 0x04, 0x3C, 0x00, 0x01, 0x05, 0x3C, 0x00, 0x01, 0x06, 0x3C, 0x00, 0x01, 0x07, 0x3C, 0x00,
    0x01, 0x08, 0x3C, 0x00, 0x01, 0x09, 0x3C, 0x00, 0x01, 0x0A, 0x3C, 0x00, 0x01, 0x0B, 0x3C, 0x00,
};
COMPILER_STRIP_GATE(0x803A1EFC, &j3dDefaultTexCoordInfo);

/* 803A1F1C-803A1F80 02E57C 0064+00 0/0 1/1 0/0 .rodata          j3dDefaultTexMtxInfo */
SECTION_RODATA extern u8 const j3dDefaultTexMtxInfo[100] = {
    0x01, 0x00, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x3F, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1F1C, &j3dDefaultTexMtxInfo);

/* 803A1F80-803A1F9C 02E5E0 001C+00 0/0 2/2 0/0 .rodata          j3dDefaultIndTexMtxInfo */
SECTION_RODATA extern u8 const j3dDefaultIndTexMtxInfo[28] = {
    0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x3F, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1F80, &j3dDefaultIndTexMtxInfo);

/* 803A1F9C-803A1FB0 02E5FC 0014+00 0/0 1/1 0/0 .rodata          j3dDefaultTevStageInfo */
SECTION_RODATA extern u8 const j3dDefaultTevStageInfo[20] = {
    0x04, 0x0A, 0x0F, 0x0F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00,
    0x05, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1F9C, &j3dDefaultTevStageInfo);

/* 803A1FB0-803A1FBC 02E610 000C+00 0/0 2/2 0/0 .rodata          j3dDefaultIndTevStageInfo */
SECTION_RODATA extern u8 const j3dDefaultIndTevStageInfo[12] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1FB0, &j3dDefaultIndTevStageInfo);

/* 803A1FBC-803A1FE8 02E61C 002C+00 0/0 3/3 0/0 .rodata          j3dDefaultFogInfo */
SECTION_RODATA extern u8 const j3dDefaultFogInfo[44] = {
    0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3D, 0xCC, 0xCC,
    0xCD, 0x46, 0x1C, 0x40, 0x00, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1FBC, &j3dDefaultFogInfo);

/* 803A1FE8-803A1FF8 02E648 0010+00 0/0 3/3 0/0 .rodata          j3dDefaultNBTScaleInfo */
SECTION_RODATA extern u8 const j3dDefaultNBTScaleInfo[16] = {
    0x00, 0x00, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00, 0x3F, 0x80, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x803A1FE8, &j3dDefaultNBTScaleInfo);

/* 803A1FF8-803A2008 02E658 000B+05 1/1 0/0 0/0 .rodata          @1197 */
SECTION_RODATA static u8 const lit_1197[11 + 5 /* padding */] = {
    0x1E,
    0x21,
    0x24,
    0x27,
    0x2A,
    0x2D,
    0x30,
    0x33,
    0x36,
    0x39,
    0x3C,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x803A1FF8, &lit_1197);

/* 80434C98-80436A60 0619B8 1DC7+01 1/1 0/0 0/0 .bss             j3dTexCoordTable */
static u8 j3dTexCoordTable[7623 + 1 /* padding */];

/* 80324194-8032423C 31EAD4 00A8+00 0/0 1/1 0/0 .text            makeTexCoordTable__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeTexCoordTable() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeTexCoordTable__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80436A60-80436E60 063780 0400+00 1/1 3/3 0/0 .bss             j3dTevSwapTableTable */
extern u8 j3dTevSwapTableTable[1024];
u8 j3dTevSwapTableTable[1024];

/* 80436E60-80437160 063B80 0300+00 1/1 2/2 0/0 .bss             j3dAlphaCmpTable */
extern u8 j3dAlphaCmpTable[768];
u8 j3dAlphaCmpTable[768];

/* 8032423C-803242A8 31EB7C 006C+00 0/0 1/1 0/0 .text            makeAlphaCmpTable__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeAlphaCmpTable() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeAlphaCmpTable__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80437160-804371C0 063E80 0060+00 1/1 4/4 5/5 .bss             j3dZModeTable */
extern u8 j3dZModeTable[96];
u8 j3dZModeTable[96];

/* 803242A8-80324314 31EBE8 006C+00 0/0 1/1 0/0 .text            makeZModeTable__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeZModeTable() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeZModeTable__Fv.s"
}
#pragma pop

/* 80324314-80324358 31EC54 0044+00 0/0 1/1 0/0 .text            makeTevSwapTable__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void makeTevSwapTable() {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/makeTevSwapTable__Fv.s"
}
#pragma pop

/* 80324358-803243BC 31EC98 0064+00 1/1 0/0 0/0 .text            loadTexMtx__9J3DTexMtxCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::loadTexMtx(u32 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadTexMtx__9J3DTexMtxCFUl.s"
}
#pragma pop

/* 803243BC-8032441C 31ECFC 0060+00 1/1 0/0 0/0 .text            loadPostTexMtx__9J3DTexMtxCFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void J3DTexMtx::loadPostTexMtx(u32 param_0) const {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/loadPostTexMtx__9J3DTexMtxCFUl.s"
}
#pragma pop

/* 8032441C-8032499C 31ED5C 0580+00 1/1 0/0 0/0 .text J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void J3DGDLoadTexMtxImm(f32 (*param_0)[4], u32 param_1, _GXTexMtxType param_2) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/J3DGDLoadTexMtxImm__FPA4_fUl13_GXTexMtxType.s"
}
#pragma pop

/* 8032499C-80324F08 31F2DC 056C+00 1/1 0/0 0/0 .text            J3DGDLoadPostTexMtxImm__FPA4_fUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void J3DGDLoadPostTexMtxImm(f32 (*param_0)[4], u32 param_1) {
    nofralloc
#include "asm/JSystem/J3DGraphBase/J3DTevs/J3DGDLoadPostTexMtxImm__FPA4_fUl.s"
}
#pragma pop

/* ############################################################################################## */
/* 804563C0-804563C4 0049C0 0004+00 0/0 4/4 0/0 .sdata2          j3dDefaultColInfo */
SECTION_SDATA2 extern GXColor j3dDefaultColInfo = { 0xFF, 0xFF, 0xFF, 0xFF };

/* 804563C4-804563C8 0049C4 0004+00 0/0 2/2 0/0 .sdata2          j3dDefaultAmbInfo */
SECTION_SDATA2 extern u32 j3dDefaultAmbInfo = 0x32323232;

/* 804563C8-804563CC 0049C8 0004+00 0/0 1/1 0/0 .sdata2          None */
SECTION_SDATA2 extern u8 data_804563C8 = 0x01;

/* 804563CC-804563D0 0049CC 0004+00 0/0 3/3 0/0 .sdata2          j3dDefaultTevOrderInfoNull */
SECTION_SDATA2 extern u32 j3dDefaultTevOrderInfoNull = 0xFFFFFF00;

/* 804563D0-804563D4 0049D0 0004+00 0/0 2/2 0/0 .sdata2          j3dDefaultIndTexOrderNull */
SECTION_SDATA2 extern u32 j3dDefaultIndTexOrderNull = 0xFFFF0000;

/* 804563D4-804563D8 0049D4 0004+00 0/0 5/5 0/0 .sdata2          j3dDefaultTevColor */
SECTION_SDATA2 extern u32 j3dDefaultTevColor = 0x00FF00FF;

/* 804563D8-804563DC 0049D8 0004+00 0/0 1/5 0/0 .sdata2          None */
SECTION_SDATA2 extern u32 data_804563D8 = 0x00FF00FF;

/* 804563DC-804563E0 0049DC 0004+00 0/0 2/2 0/0 .sdata2          j3dDefaultIndTexCoordScaleInfo */
SECTION_SDATA2 extern u8 j3dDefaultIndTexCoordScaleInfo[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804563E0-804563E4 0049E0 0004+00 0/0 5/5 0/0 .sdata2          j3dDefaultTevKColor */
SECTION_SDATA2 extern GXColor j3dDefaultTevKColor = { 0xFF, 0xFF, 0xFF, 0xFF };

/* 804563E4-804563E8 0049E4 0004+00 0/0 2/2 0/0 .sdata2          j3dDefaultTevSwapMode */
SECTION_SDATA2 extern u8 j3dDefaultTevSwapMode[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804563E8-804563EC 0049E8 0004+00 0/0 2/2 0/0 .sdata2          j3dDefaultTevSwapModeTable */
SECTION_SDATA2 extern u32 j3dDefaultTevSwapModeTable = 0x00010203;

/* 804563EC-804563F0 0049EC 0004+00 0/0 3/3 0/0 .sdata2          j3dDefaultBlendInfo */
SECTION_SDATA2 extern u32 j3dDefaultBlendInfo = 0x01040505;

/* 804563F0-804563F8 0049F0 0008+00 0/0 3/3 0/0 .sdata2          j3dDefaultColorChanInfo */
SECTION_SDATA2 extern u8 j3dDefaultColorChanInfo[8] = {
    0x00, 0x00, 0x00, 0x02, 0x02, 0x00, 0xFF, 0xFF,
};

/* 804563F8-804563FA 0049F8 0002+00 0/0 1/1 0/0 .sdata2          None */
SECTION_SDATA2 extern u16 data_804563F8 = 0x1B00;

/* 804563FA-804563FC 0049FA 0002+00 0/0 1/1 0/0 .sdata2          j3dDefaultAlphaCmpID */
SECTION_SDATA2 extern u16 j3dDefaultAlphaCmpID = 0x00E7;

/* 804563FC-80456400 0049FC 0002+02 0/0 3/3 0/0 .sdata2          j3dDefaultZModeID */
SECTION_SDATA2 extern u16 j3dDefaultZModeID[1 + 1 /* padding */] = {
    0x0017,
    /* padding */
    0x0000,
};
