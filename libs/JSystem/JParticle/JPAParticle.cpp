//
// Generated By: dol2asm
// Translation Unit: JPAParticle
//

#include "JSystem/JParticle/JPAParticle.h"
#include "JSystem/JParticle/JPAEmitter.h"
#include "JSystem/JParticle/JPAEmitterManager.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" void __dt__19JPAParticleCallBackFv();
extern "C" void init_p__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calc_p__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void calc_c__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData();
extern "C" void getWidth__15JPABaseParticleCFPC14JPABaseEmitter();
extern "C" void getHeight__15JPABaseParticleCFPC14JPABaseEmitter();

//
// External References:
//

extern "C" void calc_p__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calc_c__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void calcField__11JPAResourceFP18JPAEmitterWorkDataP15JPABaseParticle();
extern "C" void createChild__14JPABaseEmitterFP15JPABaseParticle();
extern "C" void JPAGetYZRotateMtx__FssPA4_f();
extern "C" void __dl__FPv();
extern "C" void JMAVECScaleAdd__FPC3VecPC3VecP3Vecf();
extern "C" void _savegpr_26();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__19JPAParticleCallBack[5];

//
// Declarations:
//

/* 8027EFA4-8027EFEC 2798E4 0048+00 0/0 11/11 1/1 .text            __dt__19JPAParticleCallBackFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JPAParticleCallBack::~JPAParticleCallBack() {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/__dt__19JPAParticleCallBackFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80455388-8045538C 003988 0004+00 2/2 0/0 0/0 .sdata2          @2565 */
SECTION_SDATA2 static f32 lit_2565 = 1.0f;

/* 8045538C-80455390 00398C 0004+00 4/4 0/0 0/0 .sdata2          @2566 */
SECTION_SDATA2 static u8 lit_2566[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80455390-80455394 003990 0004+00 2/2 0/0 0/0 .sdata2          @2567 */
SECTION_SDATA2 static f32 lit_2567 = 32.0f;

/* 80455394-80455398 003994 0004+00 2/2 0/0 0/0 .sdata2          @2568 */
SECTION_SDATA2 static f32 lit_2568 = 0.5f;

/* 80455398-8045539C 003998 0004+00 2/2 0/0 0/0 .sdata2          @2569 */
SECTION_SDATA2 static f32 lit_2569 = 3.0f;

/* 8045539C-804553A0 00399C 0004+00 1/1 0/0 0/0 .sdata2          @2570 */
SECTION_SDATA2 static f32 lit_2570 = 32768.0f;

/* 804553A0-804553A8 0039A0 0008+00 4/4 0/0 0/0 .sdata2          @2572 */
SECTION_SDATA2 static f64 lit_2572 = 4503601774854144.0 /* cast s32 to float */;

/* 804553A8-804553B0 0039A8 0008+00 2/2 0/0 0/0 .sdata2          @2574 */
SECTION_SDATA2 static f64 lit_2574 = 4503599627370496.0 /* cast u32 to float */;

/* 8027EFEC-8027F8C8 27992C 08DC+00 0/0 1/1 0/0 .text
 * init_p__15JPABaseParticleFP18JPAEmitterWorkData              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::init_p(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/init_p__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 8027F8C8-8027FFD0 27A208 0708+00 0/0 1/1 0/0 .text
 * init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::init_c(JPAEmitterWorkData* param_0, JPABaseParticle* param_1) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/init_c__15JPABaseParticleFP18JPAEmitterWorkDataP15JPABaseParticle.s"
}
#pragma pop

/* 8027FFD0-80280260 27A910 0290+00 0/0 1/1 0/0 .text
 * calc_p__15JPABaseParticleFP18JPAEmitterWorkData              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::calc_p(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/calc_p__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 80280260-802804C8 27ABA0 0268+00 0/0 1/1 0/0 .text
 * calc_c__15JPABaseParticleFP18JPAEmitterWorkData              */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::calc_c(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/calc_c__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* 802804C8-80280548 27AE08 0080+00 1/1 0/0 0/0 .text
 * canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JPABaseParticle::canCreateChild(JPAEmitterWorkData* param_0) {
    nofralloc
#include "asm/JSystem/JParticle/JPAParticle/canCreateChild__15JPABaseParticleFP18JPAEmitterWorkData.s"
}
#pragma pop

/* ############################################################################################## */
/* 804553B0-804553B8 0039B0 0004+04 2/2 0/0 0/0 .sdata2          @3010 */
SECTION_SDATA2 static f32 lit_3010[1 + 1 /* padding */] = {
    2.0f,
    /* padding */
    0.0f,
};

/* 80280548-80280568 27AE88 0020+00 0/0 3/3 0/0 .text
 * getWidth__15JPABaseParticleCFPC14JPABaseEmitter              */
f32 JPABaseParticle::getWidth(JPABaseEmitter const* emtr) const {
    f32 scale = lit_3010[0] * mParticleScaleX;
    return scale * emtr->mpEmtrMgr->mpWorkData->mGlobalPtclScl.x;
}

/* 80280568-80280588 27AEA8 0020+00 0/0 3/3 0/0 .text
 * getHeight__15JPABaseParticleCFPC14JPABaseEmitter             */
f32 JPABaseParticle::getHeight(JPABaseEmitter const* emtr) const {
    f32 scale = lit_3010[0] * mParticleScaleY;
    return scale * emtr->mpEmtrMgr->mpWorkData->mGlobalPtclScl.y;
}
