/**
 * d_a_obj_fireWood.cpp
 *
 */

#include "rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood.h"
#include "dol2asm.h"

class daFireWood_c : public fopAc_ac_c {
public:
    /* 80BE76B0 */ void setBaseMtx();
    /* 80BE7708 */ void create();
    /* 80BE79A0 */ void lightInit();
    /* 80BE7A14 */ void setLight();
    /* 80BE7A38 */ void Execute();
    /* 80BE7E74 */ bool Draw();
    /* 80BE7E7C */ void Delete();

    /* 0x568 */ u8 field_0x568[0x574 - 0x568];
    /* 0x574 */ dCcD_Stts mStts;
    /* 0x5B0 */ dCcD_Cyl mCyl;
    /* 0x6EC */ cXyz field_0x6ec;
    /* 0x6F8 */ u8 field_0x6f8;
    /* 0x6F9 */ u8 field_0x6f9;
    /* 0x6FC */ u32 field_0x6fc[4];
    /* 0x70C */ u8 field_0x70c;
    /* 0x710 */ cXyz field_0x710;
    /* 0x71C */ LIGHT_INFLUENCE mLightInfluence;
    /* 0x73C */ u8 field_0x73c;

    static u8 const mCcDObjInfo[48];
    static u8 mCcDCyl[68];
};  // Size: 0x740

#ifdef NONMATCHING
class daFireWood_HIO_c : public mDoHIO_entry_c {
public:
    /* 80BE762C */ daFireWood_HIO_c();
    /* 80BE7F24 */ virtual ~daFireWood_HIO_c();

    /* 0x4 */ f32 field_0x4;
    /* 0x8 */ f32 field_0x8;
    /* 0xC */ u8 field_0xc;
};
#else
struct daFireWood_HIO_c {
    /* 80BE762C */ daFireWood_HIO_c();
    /* 80BE7F24 */ ~daFireWood_HIO_c();
};
#endif

//
// Forward References:
//

extern "C" void __ct__16daFireWood_HIO_cFv();
extern "C" void __dt__14mDoHIO_entry_cFv();
extern "C" void setBaseMtx__12daFireWood_cFv();
extern "C" void create__12daFireWood_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void lightInit__12daFireWood_cFv();
extern "C" void setLight__12daFireWood_cFv();
extern "C" void Execute__12daFireWood_cFv();
extern "C" bool Draw__12daFireWood_cFv();
extern "C" void Delete__12daFireWood_cFv();
extern "C" static void daFireWood_Draw__FP12daFireWood_c();
extern "C" static void daFireWood_Execute__FP12daFireWood_c();
extern "C" static void daFireWood_Delete__FP12daFireWood_c();
extern "C" static void daFireWood_Create__FP10fopAc_ac_c();
extern "C" void __dt__16daFireWood_HIO_cFv();
extern "C" void __sinit_d_a_obj_fireWood_cpp();
extern "C" u8 const mCcDObjInfo__12daFireWood_c[48];
extern "C" u8 mCcDCyl__12daFireWood_c[68];

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitGObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void dKy_plight_set__FP15LIGHT_INFLUENCE();
extern "C" void dKy_plight_cut__FP15LIGHT_INFLUENCE();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void seStartLevel__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void _savegpr_29();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80BE8004-80BE8008 000000 0004+00 3/3 0/0 0/0 .rodata          @3625 */
SECTION_RODATA static u8 const lit_3625[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80BE8004, &lit_3625);

/* 80BE8008-80BE800C 000004 0004+00 1/2 0/0 0/0 .rodata          @3626 */
SECTION_RODATA static f32 const lit_3626 = 60.0f;
COMPILER_STRIP_GATE(0x80BE8008, &lit_3626);

/* 80BE8050-80BE8094 000000 0044+00 2/2 0/0 0/0 .data            mCcDCyl__12daFireWood_c */
SECTION_DATA u8 daFireWood_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 80BE8094-80BE80AC 000044 0018+00 1/1 0/0 0/0 .data            l_cull_box */
static Vec l_cull_box[2] = {
    {-50.0f, 0.0f, -50.0f},
    {50.0f, 100.0f, 50.0f},
};

/* 80BE80AC-80BE80CC -00001 0020+00 1/0 0/0 0/0 .data            l_daFireWood_Method */
SECTION_DATA static void* l_daFireWood_Method[8] = {
    (void*)daFireWood_Create__FP10fopAc_ac_c,
    (void*)daFireWood_Delete__FP12daFireWood_c,
    (void*)daFireWood_Execute__FP12daFireWood_c,
    (void*)NULL,
    (void*)daFireWood_Draw__FP12daFireWood_c,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80BE80CC-80BE80FC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_FireWood */
SECTION_DATA extern void* g_profile_Obj_FireWood[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01690000, (void*)&g_fpcLf_Method,
    (void*)0x00000740, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x01FA0000, (void*)&l_daFireWood_Method,
    (void*)0x00060000, (void*)0x000E0000,
};

/* 80BE80FC-80BE8108 0000AC 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80BE8108-80BE8114 0000B8 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80BE8114-80BE8120 0000C4 000C+00 2/2 0/0 0/0 .data            __vt__16daFireWood_HIO_c */
SECTION_DATA extern void* __vt__16daFireWood_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__16daFireWood_HIO_cFv,
};

/* 80BE8120-80BE812C 0000D0 000C+00 3/3 0/0 0/0 .data            __vt__14mDoHIO_entry_c */
SECTION_DATA extern void* __vt__14mDoHIO_entry_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14mDoHIO_entry_cFv,
};

/* 80BE762C-80BE7668 0000EC 003C+00 1/1 0/0 0/0 .text            __ct__16daFireWood_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood_HIO_c::daFireWood_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__ct__16daFireWood_HIO_cFv.s"
}
#pragma pop

/* 80BE7668-80BE76B0 000128 0048+00 1/0 0/0 0/0 .text            __dt__14mDoHIO_entry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// mDoHIO_entry_c::~mDoHIO_entry_c()
extern "C" asm void __dt__14mDoHIO_entry_cFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__14mDoHIO_entry_cFv.s"
}
#pragma pop

/* 80BE76B0-80BE7708 000170 0058+00 1/1 0/0 0/0 .text            setBaseMtx__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::setBaseMtx() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/setBaseMtx__12daFireWood_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8138-80BE8144 000008 000C+00 1/1 0/0 0/0 .bss             @3619 */
static u8 lit_3619[12];

/* 80BE8144-80BE8154 000014 0010+00 3/3 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[16];

/* 80BE7708-80BE7910 0001C8 0208+00 1/1 0/0 0/0 .text            create__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::create() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/create__12daFireWood_cFv.s"
}
#pragma pop

/* 80BE7910-80BE7958 0003D0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// cM3dGCyl::~cM3dGCyl()
extern "C" asm void __dt__8cM3dGCylFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__8cM3dGCylFv.s"
}
#pragma pop

/* 80BE7958-80BE79A0 000418 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// cM3dGAab::~cM3dGAab()
extern "C" asm void __dt__8cM3dGAabFv() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__8cM3dGAabFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE800C-80BE803C 000008 0030+00 1/1 0/0 0/0 .rodata          mCcDObjInfo__12daFireWood_c */
SECTION_RODATA u8 const daFireWood_c::mCcDObjInfo[48] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x13,
    0xD8, 0xFB, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x1F, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80BE800C, &daFireWood_c::mCcDObjInfo);

/* 80BE803C-80BE8040 000038 0004+00 0/1 0/0 0/0 .rodata          @3806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3806 = 10.0f;
COMPILER_STRIP_GATE(0x80BE803C, &lit_3806);
#pragma pop

/* 80BE8040-80BE8044 00003C 0004+00 0/1 0/0 0/0 .rodata          @3807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3807 = 500.0f;
COMPILER_STRIP_GATE(0x80BE8040, &lit_3807);
#pragma pop

/* 80BE8044-80BE8048 000040 0004+00 0/2 0/0 0/0 .rodata          @3808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3808 = 1.0f;
COMPILER_STRIP_GATE(0x80BE8044, &lit_3808);
#pragma pop

/* 80BE79A0-80BE7A14 000460 0074+00 1/1 0/0 0/0 .text            lightInit__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::lightInit() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/lightInit__12daFireWood_cFv.s"
}
#pragma pop

/* 80BE7A14-80BE7A38 0004D4 0024+00 2/2 0/0 0/0 .text            setLight__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::setLight() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/setLight__12daFireWood_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80BE8048-80BE804C 000044 0004+00 0/1 0/0 0/0 .rodata          @3919 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3919 = -1.0f;
COMPILER_STRIP_GATE(0x80BE8048, &lit_3919);
#pragma pop

/* 80BE804C-80BE8050 000048 0004+00 0/2 0/0 0/0 .rodata          @3920 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3920 = 100.0f;
COMPILER_STRIP_GATE(0x80BE804C, &lit_3920);
#pragma pop

/* 80BE7A38-80BE7E74 0004F8 043C+00 1/1 0/0 0/0 .text            Execute__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::Execute() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/Execute__12daFireWood_cFv.s"
}
#pragma pop

/* 80BE7E74-80BE7E7C 000934 0008+00 1/1 0/0 0/0 .text            Draw__12daFireWood_cFv */
bool daFireWood_c::Draw() {
    return true;
}

/* 80BE7E7C-80BE7EA4 00093C 0028+00 1/1 0/0 0/0 .text            Delete__12daFireWood_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daFireWood_c::Delete() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/Delete__12daFireWood_cFv.s"
}
#pragma pop

/* 80BE7EA4-80BE7EC4 000964 0020+00 1/0 0/0 0/0 .text            daFireWood_Draw__FP12daFireWood_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood_Draw(daFireWood_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Draw__FP12daFireWood_c.s"
}
#pragma pop

/* 80BE7EC4-80BE7EE4 000984 0020+00 1/0 0/0 0/0 .text daFireWood_Execute__FP12daFireWood_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood_Execute(daFireWood_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Execute__FP12daFireWood_c.s"
}
#pragma pop

/* 80BE7EE4-80BE7F04 0009A4 0020+00 1/0 0/0 0/0 .text            daFireWood_Delete__FP12daFireWood_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood_Delete(daFireWood_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Delete__FP12daFireWood_c.s"
}
#pragma pop

/* 80BE7F04-80BE7F24 0009C4 0020+00 1/0 0/0 0/0 .text            daFireWood_Create__FP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void daFireWood_Create(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/daFireWood_Create__FP10fopAc_ac_c.s"
}
#pragma pop

/* 80BE7F24-80BE7F80 0009E4 005C+00 2/1 0/0 0/0 .text            __dt__16daFireWood_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daFireWood_HIO_c::~daFireWood_HIO_c() {
    nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__dt__16daFireWood_HIO_cFv.s"
}
#pragma pop

/* 80BE7F80-80BE7FF0 000A40 0070+00 0/0 1/0 0/0 .text            __sinit_d_a_obj_fireWood_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_a_obj_fireWood_cpp(){nofralloc
#include "asm/rel/d/a/obj/d_a_obj_fireWood/d_a_obj_fireWood/__sinit_d_a_obj_fireWood_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80BE7F80, __sinit_d_a_obj_fireWood_cpp);
#pragma pop
