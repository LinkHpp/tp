//
// Generated By: dol2asm
// Translation Unit: d_a_tag_pachi
//

#include "d/actor/d_a_tag_pachi.h"
#include "d/d_com_inf_game.h"
#include "d/d_procname.h"

/* 80D5D438-80D5D570 000078 0138+00 1/1 0/0 0/0 .text            __dt__11daTagPati_cFv */
daTagPati_c::~daTagPati_c() {}

/* ############################################################################################## */
/* 80D5D914-80D5D958 000000 0044+00 1/1 0/0 0/0 .rodata          l_sph_src */
static dCcD_SrcCyl const l_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xD8FBFDFF, 0x0}, 0x19}},  // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x8},                 // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0},                 // mGObjTg
        {0x0},                                              // mGObjCo
    },                                                      // mObjInf
    {
        {0.0f, 0.0f, 0.0f},  // mCenter
        0.0f,                // mRadius
        0.0f                 // mHeight
    }                        // mCyl
};

/* 80D5D570-80D5D6A0 0001B0 0130+00 1/1 0/0 0/0 .text            create__11daTagPati_cFv */
int daTagPati_c::create() {
    fopAcM_SetupActor(this, daTagPati_c);
    field_0x6E0 = get_prm();
    mStts.Init(0xFF, 0xFF, this);
    mCyl.Set(l_sph_src);
    mCyl.SetStts(&mStts);
    field_0x6E4 = 0;
    return cPhs_COMPLEATE_e;
}

/* 80D5D78C-80D5D7C8 0003CC 003C+00 1/1 0/0 0/0 .text            Execute__11daTagPati_cFv */
int daTagPati_c::Execute() {
    col_set();
    field_0x6E4 = chk_CoHit();
    return 1;
}

/* ############################################################################################## */
/* 80D5D7C8-80D5D830 000408 0068+00 1/1 0/0 0/0 .text            col_set__11daTagPati_cFv */
void daTagPati_c::col_set() {
    mCyl.SetR(1350.f);
    mCyl.SetH(300000.0f);
    mCyl.SetC(home.pos);
    dComIfG_Ccsp()->Set(&mCyl);
}

/* 80D5D830-80D5D85C 000470 002C+00 1/1 0/0 0/0 .text            chk_CoHit__11daTagPati_cFv */
u32 daTagPati_c::chk_CoHit() {
    return mCyl.ChkCoHit() ? 1 : 0;
}

/* 80D5D85C-80D5D87C 00049C 0020+00 1/0 0/0 0/0 .text            daTagPati_Create__FP10fopAc_ac_c */
static int daTagPati_Create(fopAc_ac_c* i_this) {
    return static_cast<daTagPati_c*>(i_this)->create();
}

/* 80D5D87C-80D5D89C 0004BC 0020+00 1/0 0/0 0/0 .text            daTagPati_Execute__FP10fopAc_ac_c
 */
static int daTagPati_Execute(fopAc_ac_c* i_this) {
    return static_cast<daTagPati_c*>(i_this)->Execute();
}

/* 80D5D89C-80D5D8C4 0004DC 0028+00 1/0 0/0 0/0 .text            daTagPati_Delete__FP11daTagPati_c
 */
static int daTagPati_Delete(daTagPati_c* i_this) {
    i_this->~daTagPati_c();
    return 1;
}

/* ############################################################################################## */
/* 80D5D960-80D5D980 -00001 0020+00 1/0 0/0 0/0 .data            l_daTagPati_Method */
static actor_method_class l_daTagPati_Method = {
    (process_method_func)daTagPati_Create,
    (process_method_func)daTagPati_Delete,
    (process_method_func)daTagPati_Execute,
};

/* 80D5D980-80D5D9B0 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_PATI */
extern actor_process_profile_definition g_profile_TAG_PATI = {
    fpcLy_CURRENT_e,
    7,
    fpcLy_CURRENT_e,
    PROC_TAG_PATI,
    &g_fpcLf_Method.base,
    sizeof(daTagPati_c),
    0,
    0,
    &g_fopAc_Method.base,
    0x173,
    &l_daTagPati_Method,
    0x40000,
    0,
    fopAc_CULLBOX_CUSTOM_e,
};
