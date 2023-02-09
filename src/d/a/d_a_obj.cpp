//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_obj
//

#include "d/a/d_a_obj.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//
namespace daObj {
/* 80037038 */ void eff_break_tsubo(fopAc_ac_c*, cXyz, int);
/* 80037180 */ void make_eff_break_kotubo(fopAc_ac_c*);
/* 80037210 */ void make_eff_break_kotubo2(fopAc_ac_c*);
/* 800372A0 */ void make_eff_break_gm_kotubo(fopAc_ac_c*);
/* 80037330 */ void make_eff_break_gm_ootubo(fopAc_ac_c*);
/* 800373C0 */ void posMoveF_stream(fopAc_ac_c*, cXyz const*, cXyz const*, f32, f32);
/* 80037620 */ void posMoveF_grade(fopAc_ac_c*, cXyz const*, cXyz const*, f32, f32, cXyz const*,
                                   f32, f32, cXyz const*);
/* 80037788 */ void quat_rotBaseY(Quaternion*, cXyz const&);
/* 80037900 */ void HitSeStart(cXyz const*, int, dCcD_GObjInf const*, u32);
};  // namespace daObj

//
// Forward References:
//

extern "C" void eff_break_tsubo__5daObjFP10fopAc_ac_c4cXyzi();
extern "C" void make_eff_break_kotubo__5daObjFP10fopAc_ac_c();
extern "C" void make_eff_break_kotubo2__5daObjFP10fopAc_ac_c();
extern "C" void make_eff_break_gm_kotubo__5daObjFP10fopAc_ac_c();
extern "C" void make_eff_break_gm_ootubo__5daObjFP10fopAc_ac_c();
extern "C" void posMoveF_stream__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzff();
extern "C" static void func_800373F0();
extern "C" static void func_800374EC();
extern "C" void posMoveF_grade__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzffPC4cXyzffPC4cXyz();
extern "C" void quat_rotBaseY__5daObjFP10QuaternionRC4cXyz();
extern "C" void HitSeStart__5daObjFPC4cXyziPC12dCcD_GObjInfUl();
extern "C" void GetCoCP__12cCcD_CylAttrFv();
extern "C" void GetCoCP__12cCcD_SphAttrFv();
extern "C" extern char const* const d_a_d_a_obj__stringBase0;

//
// External References:
//

extern "C" void __dt__4cXyzFv();
extern "C" void fopAcM_posMove__FP10fopAc_ac_cPC4cXyz();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void
setModel__18dPa_modelEcallBackFP14JPABaseEmitterP12J3DModelDataRC12dKy_tevstr_cUcPvUcUc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void GetAc__22dCcD_GAtTgCoCommonBaseFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void GetTgHitObjSe__12dCcD_GObjInfFv();
extern "C" void checkMasterSwordEquip__9daPy_py_cFv();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __dv__4cXyzCFf();
extern "C" void outprod__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM3d_CrawVec__FRC3VecRC3VecP3Vec();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __register_global_object();
extern "C" void _savegpr_25();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_25();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 mTsubo__13dPa_control_c[64];
extern "C" f32 Zero__4cXyz[3];
extern "C" u8 BaseY__4cXyz[12];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" extern u8 struct_80450DF0[8];
extern "C" u8 mEcallback__18dPa_modelEcallBack[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 803792A8-803792A8 005908 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_803792A8 = "Always";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_803792AF = "";
#pragma pop

/* 80451D98-80451D9C 000398 0004+00 6/6 0/0 0/0 .sdata2          @3671 */
SECTION_SDATA2 static f32 lit_3671 = 1.0f;

/* 80037038-80037180 031978 0148+00 4/4 0/0 0/0 .text eff_break_tsubo__5daObjFP10fopAc_ac_c4cXyzi
 */
#ifdef NONMATCHING
// Matches with literals
void daObj::eff_break_tsubo(fopAc_ac_c* param_0, cXyz param_1, int param_2) {
    J3DModelData* tubo_bmd = (J3DModelData*)dComIfG_getObjectRes("Always", 0x20);
    J3DAnmTexPattern* tubo_btp = (J3DAnmTexPattern*)dComIfG_getObjectRes("Always", 0x42);

    s32 roomNo = fopAcM_GetRoomNo(param_0);

    // not sure what's up with mEcallback. Probably the argument type for dComIfGp_particle_set is wrong.
    JPABaseEmitter* emitter = (JPABaseEmitter*)dComIfGp_particle_set(
        0x15C, &param_0->current.pos, NULL, NULL, 0xFF, (dPa_modelEcallBack*)&dPa_modelEcallBack::mEcallback,
        roomNo, NULL, NULL, &param_1);

    dPa_modelEcallBack::setModel(emitter, tubo_bmd, param_0->mTevStr, 3, tubo_btp, 0, param_2);

    s32 roomNo2 = fopAcM_GetRoomNo(param_0);
    dComIfGp_particle_set(0x15D, &param_0->current.pos, NULL, NULL, 0xFF,
                           dPa_control_c::getTsuboSelectTexEcallBack(param_2),
                          roomNo2, NULL, NULL, &param_1);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::eff_break_tsubo(fopAc_ac_c* param_0, cXyz param_1, int param_2) {
    nofralloc
#include "asm/d/a/d_a_obj/eff_break_tsubo__5daObjFP10fopAc_ac_c4cXyzi.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 804245E8-804245F4 051308 000C+00 1/1 0/0 0/0 .bss             @3677 */
static u8 lit_3677[12];

/* 804245F4-80424600 051314 000C+00 1/1 0/0 0/0 .bss             scale$3676 */
static f32 scale_3676[3];

/* 80037180-80037210 031AC0 0090+00 0/0 0/0 2/2 .text make_eff_break_kotubo__5daObjFP10fopAc_ac_c
 */
// matches with literals
#ifdef NONMATCHING
void daObj::make_eff_break_kotubo(fopAc_ac_c* param_0) {
    static cXyz scale(1.0f, 1.0f, 1.0f);

    eff_break_tsubo(param_0, scale, 0);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::make_eff_break_kotubo(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_obj/make_eff_break_kotubo__5daObjFP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80424600-8042460C 051320 000C+00 1/1 0/0 0/0 .bss             @3692 */
static u8 lit_3692[12];

/* 8042460C-80424618 05132C 000C+00 1/1 0/0 0/0 .bss             scale$3691 */
static f32 scale_3691[3];

/* 80037210-800372A0 031B50 0090+00 0/0 0/0 2/2 .text make_eff_break_kotubo2__5daObjFP10fopAc_ac_c
 */
// matches with literals
#ifdef NONMATCHING
void daObj::make_eff_break_kotubo2(fopAc_ac_c* param_0) {
    static cXyz scale(1.0f, 1.0f, 1.0f);

    eff_break_tsubo(param_0, scale, 1);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::make_eff_break_kotubo2(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_obj/make_eff_break_kotubo2__5daObjFP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80424618-80424624 051338 000C+00 1/1 0/0 0/0 .bss             @3719 */
static u8 lit_3719[12];

/* 80424624-80424630 051344 000C+00 1/1 0/0 0/0 .bss             scale$3718 */
static f32 scale_3718[3];

/* 800372A0-80037330 031BE0 0090+00 0/0 0/0 1/1 .text
 * make_eff_break_gm_kotubo__5daObjFP10fopAc_ac_c               */
// matches with literals
#ifdef NONMATCHING
void daObj::make_eff_break_gm_kotubo(fopAc_ac_c* param_0) {
    static cXyz scale(1.0f, 1.0f, 1.0f);

    eff_break_tsubo(param_0, scale, 3);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::make_eff_break_gm_kotubo(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_obj/make_eff_break_gm_kotubo__5daObjFP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80424630-8042463C 051350 000C+00 1/1 0/0 0/0 .bss             @3732 */
static u8 lit_3732[12];

/* 8042463C-80424648 05135C 000C+00 1/1 0/0 0/0 .bss             scale$3731 */
static f32 scale_3731[3];

/* 80451D9C-80451DA0 00039C 0004+00 1/1 0/0 0/0 .sdata2          @3714 */
SECTION_SDATA2 static f32 lit_3714 = 2.0f;

/* 80037330-800373C0 031C70 0090+00 0/0 0/0 1/1 .text
 * make_eff_break_gm_ootubo__5daObjFP10fopAc_ac_c               */
// matches with literals
#ifdef NONMATCHING
void daObj::make_eff_break_gm_ootubo(fopAc_ac_c* param_0) {
    static cXyz scale(2.0f, 2.0f, 2.0f);

    eff_break_tsubo(param_0, scale, 4);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::make_eff_break_gm_ootubo(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/a/d_a_obj/make_eff_break_gm_ootubo__5daObjFP10fopAc_ac_c.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80451DA0-80451DA4 0003A0 0004+00 4/4 0/0 0/0 .sdata2          @3801 */
SECTION_SDATA2 static u8 lit_3801[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 800373C0-800373F0 031D00 0030+00 0/0 0/0 4/4 .text
 * posMoveF_stream__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzff        */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::posMoveF_stream(fopAc_ac_c* param_0, cXyz const* param_1, cXyz const* param_2,
                                f32 param_3, f32 param_4) {
    nofralloc
#include "asm/d/a/d_a_obj/posMoveF_stream__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzff.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451DA4-80451DA8 0003A4 0004+00 2/2 0/0 0/0 .sdata2          @3836 */
SECTION_SDATA2 static f32 lit_3836 = -1.0f;

/* 800373F0-800374EC 031D30 00FC+00 1/1 0/0 0/0 .text
 * posMoveF_resist_acc__Q25daObj21@unnamed@d_a_obj_cpp@FP4cXyzPC10fopAc_ac_cPC4cXyzff */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_800373F0() {
    nofralloc
#include "asm/d/a/d_a_obj/func_800373F0.s"
}
#pragma pop

/* 800374EC-80037620 031E2C 0134+00 1/1 0/0 0/0 .text
 * posMoveF_grade_acc__Q25daObj21@unnamed@d_a_obj_cpp@FP4cXyzPC10fopAc_ac_cPC4cXyzffPC4cXyzPC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_800374EC() {
    nofralloc
#include "asm/d/a/d_a_obj/func_800374EC.s"
}
#pragma pop

/* 80037620-80037788 031F60 0168+00 1/1 0/0 0/0 .text
 * posMoveF_grade__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzffPC4cXyzffPC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::posMoveF_grade(fopAc_ac_c* param_0, cXyz const* param_1, cXyz const* param_2,
                               f32 param_3, f32 param_4, cXyz const* param_5, f32 param_6,
                               f32 param_7, cXyz const* param_8) {
    nofralloc
#include "asm/d/a/d_a_obj/posMoveF_grade__5daObjFP10fopAc_ac_cPC4cXyzPC4cXyzffPC4cXyzffPC4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 80379298-803792A8 0058F8 0010+00 1/1 0/0 0/0 .rodata          zero_quat$3920 */
SECTION_RODATA static f32 const zero_quat[4] = {
    0.0f,
    0.0f,
    0.0f,
    1.0f,
};
COMPILER_STRIP_GATE(0x80379298, &zero_quat);

/* 80451DA8-80451DB0 0003A8 0004+04 1/1 0/0 0/0 .sdata2          @3956 */
SECTION_SDATA2 static f32 lit_3956[1 + 1 /* padding */] = {
    9.99999905104687e-09f,
    /* padding */
    0.0f,
};

/* 80037788-80037900 0320C8 0178+00 0/0 0/0 1/1 .text quat_rotBaseY__5daObjFP10QuaternionRC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::quat_rotBaseY(Quaternion* param_0, cXyz const& param_1) {
    nofralloc
#include "asm/d/a/d_a_obj/quat_rotBaseY__5daObjFP10QuaternionRC4cXyz.s"
}
#pragma pop

/* 80037900-80037A4C 032240 014C+00 0/0 0/0 3/3 .text
 * HitSeStart__5daObjFPC4cXyziPC12dCcD_GObjInfUl                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObj::HitSeStart(cXyz const* param_0, int param_1, dCcD_GObjInf const* param_2,
                           u32 param_3) {
    nofralloc
#include "asm/d/a/d_a_obj/HitSeStart__5daObjFPC4cXyziPC12dCcD_GObjInfUl.s"
}
#pragma pop

/* 80037A4C-80037A54 03238C 0008+00 0/0 2/0 0/0 .text            GetCoCP__12cCcD_CylAttrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cCcD_CylAttr::GetCoCP() {
extern "C" asm void GetCoCP__12cCcD_CylAttrFv() {
    nofralloc
#include "asm/d/a/d_a_obj/GetCoCP__12cCcD_CylAttrFv.s"
}
#pragma pop

/* 80037A54-80037A5C 032394 0008+00 0/0 2/0 0/0 .text            GetCoCP__12cCcD_SphAttrFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm void cCcD_SphAttr::GetCoCP() {
extern "C" asm void GetCoCP__12cCcD_SphAttrFv() {
    nofralloc
#include "asm/d/a/d_a_obj/GetCoCP__12cCcD_SphAttrFv.s"
}
#pragma pop

/* 803792A8-803792A8 005908 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
