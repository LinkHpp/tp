//
// Generated By: dol2asm
// Translation Unit: f_op/f_op_actor
//

#include "f_op/f_op_actor.h"
#include "dol2asm.h"
#include "dolphin/mtx/mtx.h"
#include "dolphin/types.h"

//
// Types:
//

struct dKy_tevstr_c {};

struct fopEn_enemy_c {
    /* 80019404 */ void initBallModel();
    /* 800194FC */ void checkBallModelDraw();
    /* 80019520 */ void setBallModelEffect(dKy_tevstr_c*);
    /* 800196A0 */ void drawBallModel(dKy_tevstr_c*);
};

struct daSus_c {
    /* 800314D4 */ void check(fopAc_ac_c*);
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dStage_roomDt_c {
    /* 800193FC */ void getFileListInfo() const;
};

struct dStage_roomControl_c {
    /* 80024384 */ void getStatusRoomDt(int);
};

struct J3DModelData {};

struct dScnKy_env_light_c {
    /* 801A4DA0 */ void setLightTevColorType_MAJI(J3DModelData*, dKy_tevstr_c*);
};

struct dRes_info_c {};

struct dRes_control_c {
    /* 8003C2EC */ void getRes(char const*, s32, dRes_info_c*, int);
};

struct dPa_levelEcallBack {};

struct _GXColor {};

struct dPa_control_c {
    /* 8004D4CC */ void set(u32, u8, u16, cXyz const*, dKy_tevstr_c const*, csXyz const*,
                            cXyz const*, u8, dPa_levelEcallBack*, s8, _GXColor const*,
                            _GXColor const*, cXyz const*, f32);
};

struct dEvt_info_c {
    /* 80018C44 */ ~dEvt_info_c();
    /* 800433F0 */ dEvt_info_c();
    /* 800434CC */ void beforeProc();
};

struct dEvt_control_c {
    /* 80042FA8 */ void moveApproval(void*);
};

struct dDemo_object_c {
    /* 80039088 */ void getActor(u8);
};

struct dDemo_c {
    static u8 m_object[4];
};

struct dDemo_actor_c {
    /* 8003815C */ void setActor(fopAc_ac_c*);
};

struct J3DModel {};

struct J3DAnmTevRegKey {
    /* 8032B87C */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DAnmTextureSRTKey {
    /* 8032B1D4 */ void searchUpdateMaterialID(J3DModelData*);
};

struct J3DMaterialTable {
    /* 8032FCC4 */ void entryTexMtxAnimator(J3DAnmTextureSRTKey*);
    /* 8032FE70 */ void entryTevRegAnimator(J3DAnmTevRegKey*);
};

struct J3DLightObj {
    /* 80018C0C */ J3DLightObj();
};

struct J3DLightInfo {
    /* 803256C4 */ void operator=(J3DLightInfo const&);
};

//
// Forward References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__5csXyzFv();
extern "C" void __ct__11J3DLightObjFv();
extern "C" void __dt__11dEvt_info_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" static void fopAc_Draw__FPv();
extern "C" static void fopAc_Execute__FPv();
extern "C" static void fopAc_IsDelete__FPv();
extern "C" static void fopAc_Delete__FPv();
extern "C" static void fopAc_Create__FPv();
extern "C" void getFileListInfo__15dStage_roomDt_cCFv();
extern "C" void initBallModel__13fopEn_enemy_cFv();
extern "C" void checkBallModelDraw__13fopEn_enemy_cFv();
extern "C" void setBallModelEffect__13fopEn_enemy_cFP12dKy_tevstr_c();
extern "C" void drawBallModel__13fopEn_enemy_cFP12dKy_tevstr_c();
extern "C" extern char const* const f_op_f_op_actor__stringBase0;
extern "C" u8 stopStatus__10fopAc_ac_c[4];
extern "C" extern u8 data_80450CC0[4 + 4 /* padding */];

//
// External References:
//

extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcTg_ToActorQ__FP16create_tag_class();
extern "C" void fopAcTg_ActorQTo__FP16create_tag_class();
extern "C" void fopAcTg_Init__FP16create_tag_classPv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_DeleteHeap__FP10fopAc_ac_c();
extern "C" void fopAcM_cullingCheck__FPC10fopAc_ac_c();
extern "C" void fopDwTg_ToDrawQ__FP16create_tag_classi();
extern "C" void fopDwTg_DrawQTo__FP16create_tag_class();
extern "C" void fopDwTg_Init__FP16create_tag_classPv();
extern "C" void fpcBs_Is_JustOfType__Fii();
extern "C" void fpcBs_MakeOfType__FPi();
extern "C" void fpcLf_GetPriority__FPC14leafdraw_class();
extern "C" void fpcLf_DrawMethod__FP21leafdraw_method_classPv();
extern "C" void fpcMtd_Execute__FP20process_method_classPv();
extern "C" void fpcMtd_IsDelete__FP20process_method_classPv();
extern "C" void fpcMtd_Delete__FP20process_method_classPv();
extern "C" void fpcMtd_Create__FP20process_method_classPv();
extern "C" void getStatusRoomDt__20dStage_roomControl_cFi();
extern "C" void check__7daSus_cFP10fopAc_ac_c();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void setActor__13dDemo_actor_cFP10fopAc_ac_c();
extern "C" void getActor__14dDemo_object_cFUc();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void moveApproval__14dEvt_control_cFPv();
extern "C" void __ct__11dEvt_info_cFv();
extern "C" void beforeProc__11dEvt_info_cFv();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void dKy_tevstr_init__FP12dKy_tevstr_cScUc();
extern "C" void dKy_depth_dist_set__FPv();
extern "C" void cLib_chaseF__FPfff();
extern "C" void __dl__FPv();
extern "C" void __as__12J3DLightInfoFRC12J3DLightInfo();
extern "C" void searchUpdateMaterialID__19J3DAnmTextureSRTKeyFP12J3DModelData();
extern "C" void searchUpdateMaterialID__15J3DAnmTevRegKeyFP12J3DModelData();
extern "C" void entryTexMtxAnimator__16J3DMaterialTableFP19J3DAnmTextureSRTKey();
extern "C" void entryTevRegAnimator__16J3DMaterialTableFP15J3DAnmTevRegKey();
extern "C" void __construct_array();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern u8 const j3dDefaultLightInfo[52];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_env_light[4880];
extern "C" f32 Zero__4cXyz[3];
extern "C" extern u8 g_dComIfAc_gameInfo[8];
extern "C" extern u8 struct_80450D64[4];
extern "C" u8 m_object__7dDemo_c[4];
extern "C" extern u8 struct_80451124[4];

//
// Declarations:
//

/* 80018B64-80018BD0 0134A4 006C+00 0/0 7/7 562/562 .text            __ct__10fopAc_ac_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fopAc_ac_c::fopAc_ac_c() {
    nofralloc
#include "asm/f_op/f_op_actor/__ct__10fopAc_ac_cFv.s"
}
#pragma pop

/* 80018BD0-80018C0C 013510 003C+00 0/0 12/12 0/0 .text            __dt__5csXyzFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm csXyz::~csXyz() {
extern "C" asm void __dt__5csXyzFv() {
    nofralloc
#include "asm/f_op/f_op_actor/__dt__5csXyzFv.s"
}
#pragma pop

/* 80018C0C-80018C44 01354C 0038+00 1/1 6/6 0/0 .text            __ct__11J3DLightObjFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm J3DLightObj::J3DLightObj() {
    nofralloc
#include "asm/f_op/f_op_actor/__ct__11J3DLightObjFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803A35B0-803A35D0 -00001 0020+00 0/0 3/0 756/0 .data            g_fopAc_Method */
SECTION_DATA extern void* g_fopAc_Method[8] = {
    (void*)fopAc_Create__FPv,
    (void*)fopAc_Delete__FPv,
    (void*)fopAc_Execute__FPv,
    (void*)fopAc_IsDelete__FPv,
    (void*)fopAc_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 803A35D0-803A35E0 0006F0 000C+04 2/2 1/1 0/0 .data            __vt__11dEvt_info_c */
SECTION_DATA extern void* __vt__11dEvt_info_c[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__11dEvt_info_cFv,
    /* padding */
    NULL,
};

/* 80018C44-80018C8C 013584 0048+00 1/0 0/0 0/0 .text            __dt__11dEvt_info_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dEvt_info_c::~dEvt_info_c() {
    nofralloc
#include "asm/f_op/f_op_actor/__dt__11dEvt_info_cFv.s"
}
#pragma pop

/* 80018C8C-80018CE0 0135CC 0054+00 0/0 5/5 270/270 .text            __dt__10fopAc_ac_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm fopAc_ac_c::~fopAc_ac_c() {
    nofralloc
#include "asm/f_op/f_op_actor/__dt__10fopAc_ac_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450CB8-80450CBC 0001B8 0004+00 2/2 0/0 0/0 .sbss            g_fopAc_type */
static u8 g_fopAc_type[4];

/* 80018CE0-80018D0C 013620 002C+00 0/0 12/12 391/391 .text            fopAc_IsActor__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopAc_IsActor(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_IsActor__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450CBC-80450CC0 0001BC 0004+00 2/2 1/1 0/0 .sbss            stopStatus__10fopAc_ac_c */
u8 fopAc_ac_c::stopStatus[4];

/* 80018D0C-80018DD8 01364C 00CC+00 1/0 0/0 0/0 .text            fopAc_Draw__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopAc_Draw(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_Draw__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451BC8-80451BCC 0001C8 0004+00 1/1 0/0 0/0 .sdata2          @4324 */
SECTION_SDATA2 static f32 lit_4324 = 5000.0f;

/* 80451BCC-80451BD0 0001CC 0004+00 1/1 0/0 0/0 .sdata2          @4325 */
SECTION_SDATA2 static f32 lit_4325 = -9.999999848243207e+30f;

/* 80018DD8-80018F78 013718 01A0+00 1/0 0/0 0/0 .text            fopAc_Execute__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopAc_Execute(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_Execute__FPv.s"
}
#pragma pop

/* 80018F78-80018FCC 0138B8 0054+00 1/0 0/0 0/0 .text            fopAc_IsDelete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopAc_IsDelete(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_IsDelete__FPv.s"
}
#pragma pop

/* 80018FCC-8001904C 01390C 0080+00 1/0 0/0 0/0 .text            fopAc_Delete__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopAc_Delete(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_Delete__FPv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451BD0-80451BD4 0001D0 0004+00 2/2 0/0 0/0 .sdata2          @4431 */
SECTION_SDATA2 static f32 lit_4431 = 1.0f / 10.0f;

/* 80451BD4-80451BD8 0001D4 0004+00 1/1 0/0 0/0 .sdata2          @4432 */
SECTION_SDATA2 static f32 lit_4432 = -100.0f;

/* 80451BD8-80451BE0 0001D8 0008+00 1/1 0/0 0/0 .sdata2          @4434 */
SECTION_SDATA2 static f64 lit_4434 = 4503599627370496.0 /* cast u32 to float */;

/* 8001904C-800193FC 01398C 03B0+00 1/0 0/0 0/0 .text            fopAc_Create__FPv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void fopAc_Create(void* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/fopAc_Create__FPv.s"
}
#pragma pop

/* 800193FC-80019404 013D3C 0008+00 0/0 1/0 0/0 .text getFileListInfo__15dStage_roomDt_cCFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void dStage_roomDt_c::getFileListInfo() const {
    nofralloc
#include "asm/f_op/f_op_actor/getFileListInfo__15dStage_roomDt_cCFv.s"
}
#pragma pop

/* 80019404-800194FC 013D44 00F8+00 0/0 0/0 2/2 .text            initBallModel__13fopEn_enemy_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopEn_enemy_c::initBallModel() {
    nofralloc
#include "asm/f_op/f_op_actor/initBallModel__13fopEn_enemy_cFv.s"
}
#pragma pop

/* 800194FC-80019520 013E3C 0024+00 2/2 0/0 2/2 .text checkBallModelDraw__13fopEn_enemy_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopEn_enemy_c::checkBallModelDraw() {
    nofralloc
#include "asm/f_op/f_op_actor/checkBallModelDraw__13fopEn_enemy_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451BE0-80451BE8 0001E0 0004+04 2/2 0/0 0/0 .sdata2          @4505 */
SECTION_SDATA2 static f32 lit_4505[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 80451BE8-80451BF0 0001E8 0008+00 1/1 0/0 0/0 .sdata2          @4507 */
SECTION_SDATA2 static f64 lit_4507 = 4503601774854144.0 /* cast s32 to float */;

/* 80019520-800196A0 013E60 0180+00 0/0 0/0 2/2 .text
 * setBallModelEffect__13fopEn_enemy_cFP12dKy_tevstr_c          */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopEn_enemy_c::setBallModelEffect(dKy_tevstr_c* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/setBallModelEffect__13fopEn_enemy_cFP12dKy_tevstr_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451BF0-80451BF4 0001F0 0004+00 1/1 0/0 0/0 .sdata2          @4555 */
SECTION_SDATA2 static u8 lit_4555[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451BF4-80451BF8 0001F4 0004+00 1/1 0/0 0/0 .sdata2          @4556 */
SECTION_SDATA2 static f32 lit_4556 = 1.0f / 20.0f;

/* 80451BF8-80451C00 0001F8 0004+04 1/1 0/0 0/0 .sdata2          @4557 */
SECTION_SDATA2 static f32 lit_4557[1 + 1 /* padding */] = {
    1.0f / 100.0f,
    /* padding */
    0.0f,
};

/* 800196A0-800197BC 013FE0 011C+00 0/0 0/0 2/2 .text
 * drawBallModel__13fopEn_enemy_cFP12dKy_tevstr_c               */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void fopEn_enemy_c::drawBallModel(dKy_tevstr_c* param_0) {
    nofralloc
#include "asm/f_op/f_op_actor/drawBallModel__13fopEn_enemy_cFP12dKy_tevstr_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450CC0-80450CC8 0001C0 0004+04 0/0 9/9 0/0 .sbss
 * sInstance__35JASGlobalInstance<14JAUSectionHeap>             */
extern u8 data_80450CC0[4 + 4 /* padding */];
u8 data_80450CC0[4 + 4 /* padding */];

/* 80378878-80378880 004ED8 0006+02 1/1 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_80378878 = "Alink";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8037887E = "\0";
#pragma pop
