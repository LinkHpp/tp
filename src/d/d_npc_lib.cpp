//
// Generated By: dol2asm
// Translation Unit: d/d_npc_lib
//

#include "d/d_npc_lib.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __ct__16dNpcLib_lookat_cFv();
extern "C" void init__16dNpcLib_lookat_cFP8J3DModelPiP5csXyzP5csXyz();
extern "C" void action__16dNpcLib_lookat_cF4cXyz4cXyzP10fopAc_ac_cPA4_fi();
extern "C" void dbView__16dNpcLib_lookat_cFv();
extern "C" void setPrm__16dNpcLib_lookat_cFv();
extern "C" void update__16dNpcLib_lookat_cFv();
extern "C" void limitter__16dNpcLib_lookat_cFPssss();
extern "C" void __dt__16dNpcLib_lookat_cFv();

//
// External References:
//

extern "C" void __dt__4cXyzFv();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void XYZrotS__14mDoMtx_stack_cFRC5csXyz();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void __ct__4cXyzFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__5csXyzFv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void normalize__4cXyzFv();
extern "C" void isZero__4cXyzCFv();
extern "C" void __apl__5csXyzFR5csXyz();
extern "C" void cM_atan2s__Fff();
extern "C" void __dl__FPv();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void _savegpr_22();
extern "C" void _savegpr_23();
extern "C" void _savegpr_25();
extern "C" void _restgpr_22();
extern "C" void _restgpr_23();
extern "C" void _restgpr_25();
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 Zero__5csXyz[4];
extern "C" extern u8 data_80451164[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 803C2B88-803C2B98 01FCA8 000C+04 2/2 0/0 0/0 .data            __vt__16dNpcLib_lookat_c */
SECTION_DATA extern void* __vt__16dNpcLib_lookat_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16dNpcLib_lookat_cFv,
    /* padding */
    NULL,
};

/* 80251314-8025140C 24BC54 00F8+00 0/0 0/0 4/4 .text            __ct__16dNpcLib_lookat_cFv */
dNpcLib_lookat_c::dNpcLib_lookat_c() {}

/* 8025140C-80251534 24BD4C 0128+00 0/0 0/0 2/2 .text
 * init__16dNpcLib_lookat_cFP8J3DModelPiP5csXyzP5csXyz          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dNpcLib_lookat_c::init(J3DModel* param_0, int* param_1, csXyz* param_2, csXyz* param_3) {
    nofralloc
#include "asm/d/d_npc_lib/init__16dNpcLib_lookat_cFP8J3DModelPiP5csXyzP5csXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 80454DE8-80454DEC 0033E8 0004+00 3/3 0/0 0/0 .sdata2          @3864 */
SECTION_SDATA2 static u8 lit_3864[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80454DEC-80454DF0 0033EC 0004+00 1/1 0/0 0/0 .sdata2          @3865 */
SECTION_SDATA2 static f32 lit_3865 = 1.0f;

/* 80454DF0-80454DF8 0033F0 0008+00 2/2 0/0 0/0 .sdata2          @3866 */
SECTION_SDATA2 static f64 lit_3866 = 0.5;

/* 80454DF8-80454E00 0033F8 0008+00 2/2 0/0 0/0 .sdata2          @3867 */
SECTION_SDATA2 static f64 lit_3867 = 3.0;

/* 80454E00-80454E08 003400 0008+00 2/2 0/0 0/0 .sdata2          @3868 */
SECTION_SDATA2 static u8 lit_3868[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80454E08-80454E10 003408 0004+04 1/1 0/0 0/0 .sdata2          @3869 */
SECTION_SDATA2 static f32 lit_3869[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 80454E10-80454E18 003410 0008+00 2/2 0/0 0/0 .sdata2          @3873 */
SECTION_SDATA2 static f64 lit_3873 = 4503601774854144.0 /* cast s32 to float */;

/* 80251534-80251B60 24BE74 062C+00 0/0 0/0 2/2 .text
 * action__16dNpcLib_lookat_cF4cXyz4cXyzP10fopAc_ac_cPA4_fi     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dNpcLib_lookat_c::action(cXyz param_0, cXyz param_1, fopAc_ac_c* param_2,
                                  f32 (*param_3)[4], int param_4) {
    nofralloc
#include "asm/d/d_npc_lib/action__16dNpcLib_lookat_cF4cXyz4cXyzP10fopAc_ac_cPA4_fi.s"
}
#pragma pop

/* 80251B60-80251B64 24C4A0 0004+00 0/0 0/0 2/2 .text            dbView__16dNpcLib_lookat_cFv */
void dNpcLib_lookat_c::dbView() {
    /* empty function */
}

/* ############################################################################################## */
/* 80454E18-80454E20 003418 0004+04 1/1 0/0 0/0 .sdata2          @3970 */
SECTION_SDATA2 static f32 lit_3970[1 + 1 /* padding */] = {
    2.0f / 5.0f,
    /* padding */
    0.0f,
};

/* 80251B64-80251EF8 24C4A4 0394+00 1/1 0/0 0/0 .text            setPrm__16dNpcLib_lookat_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dNpcLib_lookat_c::setPrm() {
    nofralloc
#include "asm/d/d_npc_lib/setPrm__16dNpcLib_lookat_cFv.s"
}
#pragma pop

/* 80251EF8-80252018 24C838 0120+00 1/1 0/0 0/0 .text            update__16dNpcLib_lookat_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dNpcLib_lookat_c::update() {
    nofralloc
#include "asm/d/d_npc_lib/update__16dNpcLib_lookat_cFv.s"
}
#pragma pop

/* 80252018-80252094 24C958 007C+00 1/1 0/0 0/0 .text   limitter__16dNpcLib_lookat_cFPssss */
int dNpcLib_lookat_c::limitter(s16* param_0, s16 param_1, s16 param_2, s16 param_3) {
    int limit = param_1 + *param_0;
    if (param_2 <= limit) {
        if (param_2 <= param_1) {
            *param_0 = 0;
        } else {
            *param_0 -= (s16)(limit - param_2);
        }
    }
    if (limit <= param_3) {
        if (param_1 <= param_3) {
            *param_0 = 0;
        } else {
            *param_0 -= (s16)(limit - param_3);
        }
    }
    return 1;
}

/* 80252094-8025217C 24C9D4 00E8+00 1/0 0/0 0/0 .text   __dt__16dNpcLib_lookat_cFv */
dNpcLib_lookat_c::~dNpcLib_lookat_c() {}
