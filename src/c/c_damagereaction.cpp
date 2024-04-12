//
// Generated By: dol2asm
// Translation Unit: c/c_damagereaction
//

#include "c/c_damagereaction.h"
#include "dol2asm.h"
#include "d/a/d_a_player.h"
#include "d/com/d_com_inf_game.h"
#include "f_op/f_op_actor_mng.h"

//
// Forward References:
//

extern "C" void execute__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle();
extern "C" void draw__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle();
extern "C" void cDmrNowMidnaTalk__Fv();
extern "C" void __dt__24JPTraceParticleCallBack4Fv();
extern "C" void __sinit_c_damagereaction_cpp();
extern "C" void execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle();
extern "C" void draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle();

//
// External References:
//

extern "C" void fopAcM_getTalkEventPartner__FPC10fopAc_ac_c();
extern "C" void __dt__19JPAParticleCallBackFv();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
// extern "C" extern u8 g_dComIfG_gameInfo[122384];

//
// Declarations:
//

/* ############################################################################################## */
/* 80450C98-80450C9C -00001 0004+00 0/0 0/0 50/50 .sbss            None */
extern u8 struct_80450C98[4];
u8 struct_80450C98[4];

/* 80450C9C-80450CA0 -00001 0004+00 0/0 0/0 6/6 .sbss            None */
#pragma push
#pragma force_active on
u8 cDmr_SkipInfo;
#pragma pop

/* ############################################################################################## */
/* 80451BA8-80451BAC 0001A8 0004+00 1/1 0/0 0/0 .sdata2          @3731 */
SECTION_SDATA2 static f32 lit_3731 = 25.0f;

/* 80451BAC-80451BB0 0001AC 0004+00 1/1 0/0 0/0 .sdata2          @3732 */
SECTION_SDATA2 static u8 lit_3732[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80451BB0-80451BB4 0001B0 0004+00 1/1 0/0 0/0 .sdata2          @3733 */
SECTION_SDATA2 static f32 lit_3733 = 3.0f / 10.0f;

/* 80451BB4-80451BB8 0001B4 0004+00 1/1 0/0 0/0 .sdata2          @3734 */
SECTION_SDATA2 static f32 lit_3734 = 0.5f;

/* 80451BB8-80451BC0 0001B8 0008+00 1/1 0/0 0/0 .sdata2          @3736 */
SECTION_SDATA2 static f64 lit_3736 = 4503599627370496.0 /* cast u32 to float */;

/* 8001817C-800182A4 012ABC 0128+00 1/0 0/0 0/0 .text
 * execute__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle */
// Matches with TVec3<f32> ctors
#ifdef NONMATCHING
void JPTraceParticleCallBack4::execute(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    u32 age = param_1->getAge();
    if (age != 0) {
        Vec* user_work = (Vec*)param_0->getUserWork();
        f32 fVar1 = (25.0f - age) / 25.0f;
        if (fVar1 < 0.0f) {
            fVar1 = 0.0f;
        }
        JGeometry::TVec3<f32> vec1(user_work[age]);
        vec1.scale(0.3f * fVar1);
        JGeometry::TVec3<f32> vec2(user_work[0]);
        vec2.scale(0.5f * fVar1);
        JGeometry::TVec3<f32> vec3;

        param_1->getOffsetPosition(vec3);
        vec3.add(vec1 + vec2);
        param_1->setOffsetPosition(vec3);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPTraceParticleCallBack4::execute(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/c/c_damagereaction/execute__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle.s"
}
#pragma pop
#endif

/* 800182A4-800182A8 012BE4 0004+00 1/0 0/0 0/0 .text
 * draw__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle */
void JPTraceParticleCallBack4::draw(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    /* empty function */
}

/* 800182A8-80018328 012BE8 0080+00 0/0 0/0 22/22 .text            cDmrNowMidnaTalk__Fv */
BOOL cDmrNowMidnaTalk() {
    if (dComIfGp_event_runCheck()) {
        fopAc_ac_c* actor = (fopAc_ac_c*)fopAcM_getTalkEventPartner(daPy_getLinkPlayerActorClass());
        if (actor) {
            if (fopAcM_GetName(actor) == PROC_MIDNA || fopAcM_GetName(actor) == PROC_Tag_Mhint ||
                     fopAcM_GetName(actor) == PROC_Tag_Mstop || fopAcM_GetName(actor) == PROC_Tag_Hstop ||
                     fopAcM_GetName(actor) == PROC_Tag_Mwait || fopAcM_GetName(actor) == PROC_Tag_Wljump) {
                return 1;
            }
        }
    }

    return 0;
}

/* ############################################################################################## */
/* 803A3568-803A357C 000688 0014+00 2/2 0/0 0/0 .data            __vt__24JPTraceParticleCallBack4 */
SECTION_DATA extern void* __vt__24JPTraceParticleCallBack4[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__24JPTraceParticleCallBack4Fv,
    (void*)execute__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle,
    (void*)draw__24JPTraceParticleCallBack4FP14JPABaseEmitterP15JPABaseParticle,
};

/* 80018328-80018388 012C68 0060+00 2/1 0/0 0/0 .text            __dt__24JPTraceParticleCallBack4Fv
 */
// Needs JPAParticleCallBack inheritance and function order issues in the file
#ifdef NONMATCHING
JPTraceParticleCallBack4::~JPTraceParticleCallBack4() {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPTraceParticleCallBack4::~JPTraceParticleCallBack4() {
    nofralloc
#include "asm/c/c_damagereaction/__dt__24JPTraceParticleCallBack4Fv.s"
}
#pragma pop
#endif
/* ############################################################################################## */
/* 803A357C-803A3590 00069C 0014+00 1/1 3/3 0/0 .data            __vt__19JPAParticleCallBack */
SECTION_DATA extern void* __vt__19JPAParticleCallBack[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle,
    (void*)draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle,
};

/* 803F0F40-803F0F50 01DC60 000C+04 1/1 0/0 0/0 .bss             @3741 */
static u8 lit_3741[12 + 4 /* padding */];

/* 80450CA0-80450CA4 0001A0 0004+00 0/0 0/0 2/2 .sbss            None */
extern u8 data_80450CA0[4];
u8 data_80450CA0[4];

/* 80450CA4-80450CA8 0001A4 0004+00 1/1 1/1 1/1 .sbss            JPTracePCB4 */
extern u8 JPTracePCB4[4];
u8 JPTracePCB4[4];

/* 80018388-800183D4 012CC8 004C+00 0/0 1/0 0/0 .text            __sinit_c_damagereaction_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_c_damagereaction_cpp() {
    nofralloc
#include "asm/c/c_damagereaction/__sinit_c_damagereaction_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80018388, __sinit_c_damagereaction_cpp);
#pragma pop

/* 800183D4-800183D8 012D14 0004+00 1/0 1/0 0/0 .text
 * execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle */
extern "C" void execute__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle() {
    /* empty function */
}

/* 800183D8-800183DC 012D18 0004+00 1/0 4/0 0/0 .text
 * draw__19JPAParticleCallBackFP14JPABaseEmitterP15JPABaseParticle */
void JPAParticleCallBack::draw(JPABaseEmitter* param_0, JPABaseParticle* param_1) {
    /* empty function */
}
