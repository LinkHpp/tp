/**
 * d_a_obj_ganonwall.cpp
 *
 */

#include "rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall.h"
#include "dol2asm.h"

//
// Types:
//

class daObjGWall_c : public fopAc_ac_c {
public:
    /* 80BF4D18 */ void initBaseMtx();
    /* 80BF4D54 */ void setBaseMtx();
    /* 80BF4DA8 */ int Create();
    /* 80BF4E8C */ int CreateHeap();
    /* 80BF4FF0 */ int create();
    /* 80BF50A4 */ int execute();
    /* 80BF50CC */ int checkDraw();
    /* 80BF5168 */ int draw();
    /* 80BF5530 */ int _delete();

    u32 getEventBit1() { return fopAcM_GetParamBit(this, 0, 10); }
    u32 getEventBit2() { return fopAcM_GetParamBit(this, 10, 10); }

    /* 0x568 */ request_of_phase_process_class mPhaseReq;
    /* 0x570 */ J3DModel* mpModel;
    /* 0x574 */ mDoExt_btkAnm* mpBtkAnm;
    /* 0x578 */ u16 field_0x578;
    /* 0x57A */ u16 field_0x57a;
    /* 0x57C */ s16 field_0x57c;
};  // Size: 0x580

//
// Forward References:
//

extern "C" static void CheckCreateHeap__FP10fopAc_ac_c();
extern "C" void initBaseMtx__12daObjGWall_cFv();
extern "C" void setBaseMtx__12daObjGWall_cFv();
extern "C" void Create__12daObjGWall_cFv();
extern "C" void CreateHeap__12daObjGWall_cFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void create__12daObjGWall_cFv();
extern "C" void execute__12daObjGWall_cFv();
extern "C" void checkDraw__12daObjGWall_cFv();
extern "C" void draw__12daObjGWall_cFv();
extern "C" void _delete__12daObjGWall_cFv();
extern "C" static void daObjGWall_Draw__FP12daObjGWall_c();
extern "C" static void daObjGWall_Execute__FP12daObjGWall_c();
extern "C" static void daObjGWall_Delete__FP12daObjGWall_c();
extern "C" static void daObjGWall_Create__FP12daObjGWall_c();
extern "C" extern char const* const d_a_obj_ganonwall__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_setCullSizeBox2__FP10fopAc_ac_cP12J3DModelData();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void getName__10JUTNameTabCFUs();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_28();
extern "C" void _restgpr_28();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" u8 now__14mDoMtx_stack_c[48];

//
// Declarations:
//

/* 80BF4CF8-80BF4D18 000078 0020+00 1/1 0/0 0/0 .text            CheckCreateHeap__FP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int CheckCreateHeap(fopAc_ac_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/CheckCreateHeap__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BF4D18-80BF4D54 000098 003C+00 1/1 0/0 0/0 .text            initBaseMtx__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall_c::initBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/initBaseMtx__12daObjGWall_cFv.s"
}
#pragma pop

/* 80BF4D54-80BF4DA8 0000D4 0054+00 1/1 0/0 0/0 .text            setBaseMtx__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjGWall_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/setBaseMtx__12daObjGWall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF55EC-80BF564C 000000 0060+00 1/1 0/0 0/0 .rodata          l_idx */
SECTION_RODATA static u8 const l_idx[96] = {
    0x17, 0x05, 0x06, 0x01, 0x17, 0x05, 0x06, 0x02, 0x17, 0x05, 0x06, 0x03, 0x17, 0x05, 0x06, 0x04,
    0x17, 0x05, 0x06, 0x05, 0x05, 0x06, 0x01, 0x00, 0x06, 0x0B, 0x05, 0x00, 0x06, 0x0B, 0x05, 0x01,
    0x06, 0x0B, 0x05, 0x02, 0x06, 0x0B, 0x05, 0x03, 0x06, 0x0B, 0x05, 0x04, 0x0B, 0x11, 0x06, 0x00,
    0x0B, 0x11, 0x06, 0x01, 0x0B, 0x11, 0x06, 0x02, 0x0B, 0x11, 0x06, 0x03, 0x0B, 0x11, 0x06, 0x04,
    0x0B, 0x11, 0x06, 0x05, 0x11, 0x13, 0x02, 0x00, 0x11, 0x13, 0x02, 0x01, 0x13, 0x17, 0x04, 0x00,
    0x13, 0x17, 0x04, 0x01, 0x13, 0x17, 0x04, 0x02, 0x13, 0x17, 0x04, 0x03, 0x17, 0x05, 0x06, 0x00,
};
COMPILER_STRIP_GATE(0x80BF55EC, &l_idx);

/* 80BF564C-80BF56AC 000060 0060+00 0/1 0/0 0/0 .rodata          l_color */
#pragma push
#pragma force_active on
static const GXColor l_color[24] = {
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0x96, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0x64, 0x64, 0x32, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0x64, 0x64, 0x64, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0x78, 0x78, 0x78, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF},
    {0xFF, 0xFF, 0xFF, 0xFF}, {0xFF, 0xFF, 0xFF, 0xFF}, {0xB4, 0xB4, 0xB4, 0xFF},
};
#pragma pop

/* 80BF56AC-80BF56B0 0000C0 0004+00 1/1 0/0 0/0 .rodata          @3681 */
SECTION_RODATA static f32 const lit_3681 = 1000000.0f;
COMPILER_STRIP_GATE(0x80BF56AC, &lit_3681);

/* 80BF56E4-80BF56E8 -00001 0004+00 3/3 0/0 0/0 .data            l_arcName */
static char* l_arcName = "Y_gwall";

/* 80BF56E8-80BF56EC -00001 0004+00 1/1 0/0 0/0 .data            l_matName */
static char* l_matName = "mat00";

/* 80BF4DA8-80BF4E8C 000128 00E4+00 1/1 0/0 0/0 .text            Create__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::Create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/Create__12daObjGWall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF56B0-80BF56B4 0000C4 0004+00 1/1 0/0 0/0 .rodata          @3711 */
SECTION_RODATA static f32 const lit_3711 = 1.0f;
COMPILER_STRIP_GATE(0x80BF56B0, &lit_3711);

/* 80BF56EC-80BF570C -00001 0020+00 1/0 0/0 0/0 .data            l_daObjGWall_Method */
SECTION_DATA static void* l_daObjGWall_Method[8] = {
    (void*)daObjGWall_Create__FP12daObjGWall_c,
    (void*)daObjGWall_Delete__FP12daObjGWall_c,
    (void*)daObjGWall_Execute__FP12daObjGWall_c,
    (void*)NULL,
    (void*)daObjGWall_Draw__FP12daObjGWall_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BF570C-80BF573C -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_GanonWall */
SECTION_DATA extern void* g_profile_Obj_GanonWall[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01960000, (void*)&g_fpcLf_Method,
    (void*)0x00000580, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x023A0000, (void*)&l_daObjGWall_Method,
    (void*)0x00040100, (void*)0x000E0000,
};

/* 80BF573C-80BF5748 000058 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80BF4E8C-80BF4FA8 00020C 011C+00 1/1 0/0 0/0 .text            CreateHeap__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::CreateHeap() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/CreateHeap__12daObjGWall_cFv.s"
}
#pragma pop

/* 80BF4FA8-80BF4FF0 000328 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// J3DFrameCtrl::~J3DFrameCtrl()
extern "C" asm void __dt__12J3DFrameCtrlFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/__dt__12J3DFrameCtrlFv.s"
}
#pragma pop

/* 80BF4FF0-80BF50A4 000370 00B4+00 1/1 0/0 0/0 .text            create__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/func_80BF4FF0.s"
}
#pragma pop

/* 80BF50A4-80BF50CC 000424 0028+00 2/2 0/0 0/0 .text            execute__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/execute__12daObjGWall_cFv.s"
}
#pragma pop

/* 80BF50CC-80BF5168 00044C 009C+00 1/1 0/0 0/0 .text            checkDraw__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::checkDraw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/checkDraw__12daObjGWall_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BF56B4-80BF56B8 0000C8 0004+00 0/1 0/0 0/0 .rodata          @3836 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3836 = 1000.0f;
COMPILER_STRIP_GATE(0x80BF56B4, &lit_3836);
#pragma pop

/* 80BF56B8-80BF56BC 0000CC 0004+00 0/1 0/0 0/0 .rodata          @3837 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3837 = 250000.0f;
COMPILER_STRIP_GATE(0x80BF56B8, &lit_3837);
#pragma pop

/* 80BF56BC-80BF56C4 0000D0 0004+04 0/1 0/0 0/0 .rodata          @3838 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3838[1 + 1 /* padding */] = {
    60.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80BF56BC, &lit_3838);
#pragma pop

/* 80BF56C4-80BF56CC 0000D8 0008+00 0/1 0/0 0/0 .rodata          @3840 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3840[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF56C4, &lit_3840);
#pragma pop

/* 80BF56CC-80BF56D4 0000E0 0008+00 0/1 0/0 0/0 .rodata          @3842 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_3842[8] = {
    0x43, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BF56CC, &lit_3842);
#pragma pop

/* 80BF5168-80BF5530 0004E8 03C8+00 1/1 0/0 0/0 .text            draw__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::draw() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/draw__12daObjGWall_cFv.s"
}
#pragma pop

/* 80BF5530-80BF5564 0008B0 0034+00 1/1 0/0 0/0 .text            _delete__12daObjGWall_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm int daObjGWall_c::_delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/_delete__12daObjGWall_cFv.s"
}
#pragma pop

/* 80BF5564-80BF5584 0008E4 0020+00 1/0 0/0 0/0 .text            daObjGWall_Draw__FP12daObjGWall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daObjGWall_Draw(daObjGWall_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/daObjGWall_Draw__FP12daObjGWall_c.s"
}
#pragma pop

/* 80BF5584-80BF55A4 000904 0020+00 1/0 0/0 0/0 .text daObjGWall_Execute__FP12daObjGWall_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daObjGWall_Execute(daObjGWall_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/daObjGWall_Execute__FP12daObjGWall_c.s"
}
#pragma pop

/* 80BF55A4-80BF55C4 000924 0020+00 1/0 0/0 0/0 .text            daObjGWall_Delete__FP12daObjGWall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daObjGWall_Delete(daObjGWall_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/daObjGWall_Delete__FP12daObjGWall_c.s"
}
#pragma pop

/* 80BF55C4-80BF55E4 000944 0020+00 1/0 0/0 0/0 .text            daObjGWall_Create__FP12daObjGWall_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int daObjGWall_Create(daObjGWall_c* i_this) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_ganonwall/d_a_obj_ganonwall/daObjGWall_Create__FP12daObjGWall_c.s"
}
#pragma pop
