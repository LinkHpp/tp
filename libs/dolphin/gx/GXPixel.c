//
// Generated By: dol2asm
// Translation Unit: GXPixel
//

#include "dolphin/gx/GXPixel.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

void GXSetBlendMode();
void GXSetPixelFmt();

//
// External References:
//

void __GXFlushTextureState();
void __cvt_fp2unsigned();
extern void* __GXData;

//
// Declarations:
//

/* ############################################################################################## */
/* 80456618-8045661C 004C18 0004+00 1/1 0/0 0/0 .sdata2          @211 */
SECTION_SDATA2 static u8 lit_211[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 8045661C-80456620 004C1C 0004+00 1/1 0/0 0/0 .sdata2          @212 */
SECTION_SDATA2 static f32 lit_212 = 1.0f;

/* 80456620-80456628 004C20 0004+04 1/1 0/0 0/0 .sdata2          @213 */
SECTION_SDATA2 static f32 lit_213[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80456628-80456630 004C28 0008+00 1/1 0/0 0/0 .sdata2          @214 */
SECTION_SDATA2 static f64 lit_214 = 1.0;

/* 80456630-80456638 004C30 0004+04 1/1 0/0 0/0 .sdata2          @215 */
SECTION_SDATA2 static f32 lit_215[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80456638-80456640 004C38 0008+00 1/1 0/0 0/0 .sdata2          @216 */
SECTION_SDATA2 static f64 lit_216 = 0.5;

/* 80456640-80456648 004C40 0004+04 1/1 0/0 0/0 .sdata2          @217 */
SECTION_SDATA2 static f32 lit_217[1 + 1 /* padding */] = {
    8388638.0f,
    /* padding */
    0.0f,
};

/* 80456648-80456650 004C48 0008+00 1/1 0/0 0/0 .sdata2          @219 */
SECTION_SDATA2 static f64 lit_219 = 4503601774854144.0 /* cast s32 to float */;

/* 8035F8B8-8035FACC 35A1F8 0214+00 0/0 20/20 2/2 .text            GXSetFog */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetFog(GXFogType type, f32 startZ, f32 endZ, f32 nearZ, f32 farZ, GXColor color) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFog.s"
}
#pragma pop

/* 8035FACC-8035FBF0 35A40C 0124+00 0/0 9/9 2/2 .text            GXSetFogRangeAdj */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetFogRangeAdj(GXBool enable, u16 center, GXFogAdjTable* table) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFogRangeAdj.s"
}
#pragma pop

/* 8035FBF0-8035FC44 35A530 0054+00 0/0 53/53 3/3 .text            GXSetBlendMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetBlendMode(GXBlendMode mode, GXBlendFactor src_factor, GXBlendFactor dst_factor, GXLogicOp op) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetBlendMode.s"
}
#pragma pop

/* 8035FC44-8035FC70 35A584 002C+00 0/0 10/10 2/2 .text            GXSetColorUpdate */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetColorUpdate(GXBool enable_update) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetColorUpdate.s"
}
#pragma pop

/* 8035FC70-8035FC9C 35A5B0 002C+00 0/0 10/10 2/2 .text            GXSetAlphaUpdate */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetAlphaUpdate(GXBool enable_update) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetAlphaUpdate.s"
}
#pragma pop

/* 8035FC9C-8035FCD0 35A5DC 0034+00 0/0 40/40 6/6 .text            GXSetZMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetZMode(GXBool enable_compare, GXCompare comp, GXBool enable_update) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetZMode.s"
}
#pragma pop

/* 8035FCD0-8035FD04 35A610 0034+00 0/0 29/29 5/5 .text            GXSetZCompLoc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetZCompLoc(GXBool z_buf_before_tex) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetZCompLoc.s"
}
#pragma pop

/* ############################################################################################## */
/* 803D2838-803D2858 02F958 0020+00 1/1 0/0 0/0 .data            p2f$358 */
SECTION_DATA static u8 p2f[32] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03,
    0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05,
};

/* 8035FD04-8035FDD8 35A644 00D4+00 0/0 2/2 1/1 .text            GXSetPixelFmt */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetPixelFmt(GXPixelFmt pixel_fmt, GXZFmt16 z_fmt) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetPixelFmt.s"
}
#pragma pop

/* 8035FDD8-8035FE04 35A718 002C+00 0/0 22/22 1/1 .text            GXSetDither */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDither(GXBool enable_dither) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetDither.s"
}
#pragma pop

/* 8035FE04-8035FE40 35A744 003C+00 0/0 2/2 0/0 .text            GXSetDstAlpha */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetDstAlpha(GXBool enable, u8 alpha) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetDstAlpha.s"
}
#pragma pop

/* 8035FE40-8035FE78 35A780 0038+00 0/0 1/1 0/0 .text            GXSetFieldMask */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetFieldMask(GXBool odd_mask, GXBool even_mask) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFieldMask.s"
}
#pragma pop

/* 8035FE78-8035FEF0 35A7B8 0078+00 0/0 1/1 0/0 .text            GXSetFieldMode */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void GXSetFieldMode(GXBool field_mode, GXBool half_aspect_ratio) {
    nofralloc
#include "asm/dolphin/gx/GXPixel/GXSetFieldMode.s"
}
#pragma pop