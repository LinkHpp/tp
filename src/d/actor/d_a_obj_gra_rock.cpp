/**
 * @file d_a_obj_gra_rock.cpp
 * 
*/

#include "d/actor/d_a_obj_gra_rock.h"
#include "dol2asm.h"


//
// Forward References:
//

extern "C" void setAttnPos__14daObjGraRock_cFv();
extern "C" void setBaseMtx__14daObjGraRock_cFv();
extern "C" void setPrtcl__14daObjGraRock_cFv();
extern "C" void bombParticleSet__14daObjGraRock_cFv();
extern "C" void setEnvTevColor__14daObjGraRock_cFv();
extern "C" void setRoomNo__14daObjGraRock_cFv();
extern "C" void col_set__14daObjGraRock_cFv();
extern "C" void checkHitAt__14daObjGraRock_cFP8cCcD_Obj();
extern "C" void Create__14daObjGraRock_cFv();
extern "C" void CreateHeap__14daObjGraRock_cFv();
extern "C" void create__14daObjGraRock_cFv();
extern "C" void __dt__8cM3dGCylFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" void Execute__14daObjGraRock_cFPPA3_A4_f();
extern "C" void Draw__14daObjGraRock_cFv();
extern "C" void Delete__14daObjGraRock_cFv();
extern "C" static void daObjGraRock_Draw__FP14daObjGraRock_c();
extern "C" static void daObjGraRock_Execute__FP14daObjGraRock_c();
extern "C" static bool daObjGraRock_IsDelete__FP14daObjGraRock_c();
extern "C" static void daObjGraRock_Delete__FP14daObjGraRock_c();
extern "C" static void daObjGraRock_create__FP10fopAc_ac_c();
extern "C" void func_80C122F0(void* _this, s16*);
extern "C" void func_80C1230C(void* _this, u8*);
extern "C" void func_80C12328(void* _this, int, int);
extern "C" static void func_80C123A4();
extern "C" static void func_80C123AC();
extern "C" u8 const mCcDCyl__14daObjGraRock_c[68];
extern "C" extern char const* const d_a_obj_gra_rock__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotS__FPA4_fsss();
extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void play__14mDoExt_baseAnmFv();
extern "C" void init__13mDoExt_btpAnmFP16J3DMaterialTableP16J3DAnmTexPatterniifss();
extern "C" void entry__13mDoExt_btpAnmFP16J3DMaterialTables();
extern "C" void mDoExt_modelUpdateDL__FP8J3DModel();
extern "C" void mDoExt_J3DModel__create__FP12J3DModelDataUlUl();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void getObjectResName2Index__14dRes_control_cFPCcPCc();
extern "C" void
set__13dPa_control_cFUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void LockonTarget__12dAttention_cFl();
extern "C" void LockonTruth__12dAttention_cFv();
extern "C" void Release__4cBgSFP9dBgW_Base();
extern "C" void GetPolyColor__4dBgSFRC13cBgS_PolyInfo();
extern "C" void GetRoomId__4dBgSFRC13cBgS_PolyInfo();
extern "C" void dBgS_MoveBGProc_TypicalRotY__FP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__16dBgS_MoveBgActorFv();
extern "C" bool IsDelete__16dBgS_MoveBgActorFv();
extern "C" bool ToFore__16dBgS_MoveBgActorFv();
extern "C" bool ToBack__16dBgS_MoveBgActorFv();
extern "C" void
MoveBGCreate__16dBgS_MoveBgActorFPCciPFP4dBgWPvRC13cBgS_PolyInfobP4cXyzP5csXyzP5csXyz_vUlPA3_A4_f();
extern "C" void MoveBGDelete__16dBgS_MoveBgActorFv();
extern "C" void MoveBGExecute__16dBgS_MoveBgActorFv();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkTgHit__12dCcD_GObjInfFv();
extern "C" void GetTgHitObj__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_CylFRC11dCcD_SrcCyl();
extern "C" void daNpcF_chkEvtBit__FUl();
extern "C" void daNpcF_onEvtBit__FUl();
extern "C" void daNpcF_getDistTableIdx__Fii();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void cM_rndF__Ff();
extern "C" void __ct__11cBgS_GndChkFv();
extern "C" void ChkUsed__9cBgW_BgIdCFv();
extern "C" void SetC__8cM3dGCylFRC4cXyz();
extern "C" void SetH__8cM3dGCylFf();
extern "C" void SetR__8cM3dGCylFf();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_24();
extern "C" void _savegpr_25();
extern "C" void _savegpr_27();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_25();
extern "C" void _restgpr_27();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Cyl[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_CylAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80C123BC-80C12400 000000 0044+00 3/3 0/0 0/0 .rodata          mCcDCyl__14daObjGraRock_c */
SECTION_RODATA u8 const daObjGraRock_c::mCcDCyl[68] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C123BC, &daObjGraRock_c::mCcDCyl);

/* 80C12400-80C12404 000044 0004+00 1/4 0/0 0/0 .rodata          @3857 */
SECTION_RODATA static u8 const lit_3857[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80C12400, &lit_3857);

/* 80C12404-80C12408 000048 0004+00 0/2 0/0 0/0 .rodata          @3858 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3858 = 680.0f;
COMPILER_STRIP_GATE(0x80C12404, &lit_3858);
#pragma pop

/* 80C12408-80C1240C 00004C 0004+00 0/2 0/0 0/0 .rodata          @3859 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3859 = 145.0f;
COMPILER_STRIP_GATE(0x80C12408, &lit_3859);
#pragma pop

/* 80C1240C-80C12410 000050 0004+00 4/6 0/0 0/0 .rodata          @3860 */
SECTION_RODATA static f32 const lit_3860 = 1.0f;
COMPILER_STRIP_GATE(0x80C1240C, &lit_3860);

/* 80C12410-80C12414 000054 0004+00 0/2 0/0 0/0 .rodata          @3861 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3861 = -1.0f;
COMPILER_STRIP_GATE(0x80C12410, &lit_3861);
#pragma pop

/* 80C12414-80C1241C 000058 0004+04 0/1 0/0 0/0 .rodata          @3862 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3862[1 + 1 /* padding */] = {
    90.0f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x80C12414, &lit_3862);
#pragma pop

/* 80C1241C-80C12424 000060 0008+00 1/2 0/0 0/0 .rodata          @3864 */
SECTION_RODATA static u8 const lit_3864[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80C1241C, &lit_3864);

/* 80C110F8-80C11444 000078 034C+00 1/1 0/0 0/0 .text            setAttnPos__14daObjGraRock_cFv */
void daObjGraRock_c::setAttnPos() {
    // NONMATCHING
}

/* 80C11444-80C114C0 0003C4 007C+00 2/2 0/0 0/0 .text            setBaseMtx__14daObjGraRock_cFv */
void daObjGraRock_c::setBaseMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C12424-80C12428 000068 0004+00 1/1 0/0 0/0 .rodata          l_prticles_id$3890 */
SECTION_RODATA static u8 const l_prticles_id[4] = {
    0x87,
    0x5F,
    0x87,
    0x60,
};
COMPILER_STRIP_GATE(0x80C12424, &l_prticles_id);

/* 80C114C0-80C1157C 000440 00BC+00 1/1 0/0 0/0 .text            setPrtcl__14daObjGraRock_cFv */
void daObjGraRock_c::setPrtcl() {
    // NONMATCHING
}

/* 80C1157C-80C11730 0004FC 01B4+00 1/1 0/0 0/0 .text            bombParticleSet__14daObjGraRock_cFv
 */
void daObjGraRock_c::bombParticleSet() {
    // NONMATCHING
}

/* 80C11730-80C1178C 0006B0 005C+00 1/1 0/0 0/0 .text            setEnvTevColor__14daObjGraRock_cFv
 */
void daObjGraRock_c::setEnvTevColor() {
    // NONMATCHING
}

/* 80C1178C-80C117D0 00070C 0044+00 1/1 0/0 0/0 .text            setRoomNo__14daObjGraRock_cFv */
void daObjGraRock_c::setRoomNo() {
    // NONMATCHING
}

/* 80C117D0-80C11964 000750 0194+00 1/1 0/0 0/0 .text            col_set__14daObjGraRock_cFv */
void daObjGraRock_c::col_set() {
    // NONMATCHING
}

/* 80C11964-80C11970 0008E4 000C+00 1/1 0/0 0/0 .text checkHitAt__14daObjGraRock_cFP8cCcD_Obj */
void daObjGraRock_c::checkHitAt(cCcD_Obj* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C12428-80C1242C 00006C 0004+00 0/1 0/0 0/0 .rodata          @4024 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4024 = 0xC3A438D5;
COMPILER_STRIP_GATE(0x80C12428, &lit_4024);
#pragma pop

/* 80C1242C-80C12430 000070 0004+00 0/1 0/0 0/0 .rodata          @4025 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4025 = -150.0f;
COMPILER_STRIP_GATE(0x80C1242C, &lit_4025);
#pragma pop

/* 80C12430-80C12434 000074 0004+00 0/1 0/0 0/0 .rodata          @4026 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4026 = 0xC3C01581;
COMPILER_STRIP_GATE(0x80C12430, &lit_4026);
#pragma pop

/* 80C12434-80C12438 000078 0004+00 0/1 0/0 0/0 .rodata          @4027 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4027 = 0x43A1274C;
COMPILER_STRIP_GATE(0x80C12434, &lit_4027);
#pragma pop

/* 80C12438-80C1243C 00007C 0004+00 0/1 0/0 0/0 .rodata          @4028 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4028 = 0x4483F1C2;
COMPILER_STRIP_GATE(0x80C12438, &lit_4028);
#pragma pop

/* 80C1243C-80C12440 000080 0004+00 0/1 0/0 0/0 .rodata          @4029 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4029 = 0x43C89F9E;
COMPILER_STRIP_GATE(0x80C1243C, &lit_4029);
#pragma pop

/* 80C11970-80C11B68 0008F0 01F8+00 1/0 0/0 0/0 .text            Create__14daObjGraRock_cFv */
void daObjGraRock_c::Create() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C12440-80C12440 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C12440 = "M_VBom";
SECTION_DEAD static char const* const stringBase_80C12447 = "grA_base";
SECTION_DEAD static char const* const stringBase_80C12450 = "grA_mdl";
SECTION_DEAD static char const* const stringBase_80C12458 = "grA_Rock";
SECTION_DEAD static char const* const stringBase_80C12461 = "grA_RockD";
SECTION_DEAD static char const* const stringBase_80C1246B = "M_VBom_Zora.bmd";
SECTION_DEAD static char const* const stringBase_80C1247B = "M_VBom_Zora.btp";
#pragma pop

/* 80C1249C-80C124B0 -00001 0014+00 3/3 0/0 0/0 .data            l_arcName */
SECTION_DATA static void* l_arcName[5] = {
    (void*)&d_a_obj_gra_rock__stringBase0,
    (void*)(((char*)&d_a_obj_gra_rock__stringBase0) + 0x7),
    (void*)(((char*)&d_a_obj_gra_rock__stringBase0) + 0x10),
    (void*)(((char*)&d_a_obj_gra_rock__stringBase0) + 0x18),
    (void*)(((char*)&d_a_obj_gra_rock__stringBase0) + 0x21),
};

/* 80C11B68-80C11C64 000AE8 00FC+00 1/0 0/0 0/0 .text            CreateHeap__14daObjGraRock_cFv */
void daObjGraRock_c::CreateHeap() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80C12440-80C12440 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80C1248B = "M_VBom_Zora.dzb";
#pragma pop

/* 80C124B0-80C124D0 -00001 0020+00 1/0 0/0 0/0 .data            l_daObjGraRock_Method */
static actor_method_class l_daObjGraRock_Method = {
    (process_method_func)daObjGraRock_create__FP10fopAc_ac_c,
    (process_method_func)daObjGraRock_Delete__FP14daObjGraRock_c,
    (process_method_func)daObjGraRock_Execute__FP14daObjGraRock_c,
    (process_method_func)daObjGraRock_IsDelete__FP14daObjGraRock_c,
    (process_method_func)daObjGraRock_Draw__FP14daObjGraRock_c,
};

/* 80C124D0-80C12500 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_Obj_GraRock */
extern actor_process_profile_definition g_profile_Obj_GraRock = {
  fpcLy_CURRENT_e,        // mLayerID
  3,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_Obj_GraRock,       // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daObjGraRock_c), // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  609,                    // mPriority
  &l_daObjGraRock_Method, // sub_method
  0x00044100,             // mStatus
  fopAc_ACTOR_e,          // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80C12500-80C1250C 000064 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGCyl */
SECTION_DATA extern void* __vt__8cM3dGCyl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGCylFv,
};

/* 80C1250C-80C12518 000070 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80C12518-80C1253C 00007C 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C123AC,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80C123A4,
};

/* 80C1253C-80C12548 0000A0 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 80C12548-80C12570 0000AC 0028+00 1/1 0/0 0/0 .data            __vt__14daObjGraRock_c */
SECTION_DATA extern void* __vt__14daObjGraRock_c[10] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)CreateHeap__14daObjGraRock_cFv,
    (void*)Create__14daObjGraRock_cFv,
    (void*)Execute__14daObjGraRock_cFPPA3_A4_f,
    (void*)Draw__14daObjGraRock_cFv,
    (void*)Delete__14daObjGraRock_cFv,
    (void*)IsDelete__16dBgS_MoveBgActorFv,
    (void*)ToFore__16dBgS_MoveBgActorFv,
    (void*)ToBack__16dBgS_MoveBgActorFv,
};

/* 80C11C64-80C11EA8 000BE4 0244+00 1/1 0/0 0/0 .text            create__14daObjGraRock_cFv */
void daObjGraRock_c::create() {
    // NONMATCHING
}

/* 80C11EA8-80C11EF0 000E28 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGCylFv */
// cM3dGCyl::~cM3dGCyl() {
extern "C" void __dt__8cM3dGCylFv() {
    // NONMATCHING
}

/* 80C11EF0-80C11F38 000E70 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80C11F38-80C11FA8 000EB8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80C11FA8-80C11FF0 000F28 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* 80C11FF0-80C120FC 000F70 010C+00 1/0 0/0 0/0 .text            Execute__14daObjGraRock_cFPPA3_A4_f
 */
void daObjGraRock_c::Execute(f32 (**param_0)[3][4]) {
    // NONMATCHING
}

/* 80C120FC-80C121C4 00107C 00C8+00 1/0 0/0 0/0 .text            Draw__14daObjGraRock_cFv */
void daObjGraRock_c::Draw() {
    // NONMATCHING
}

/* 80C121C4-80C1225C 001144 0098+00 1/0 0/0 0/0 .text            Delete__14daObjGraRock_cFv */
void daObjGraRock_c::Delete() {
    // NONMATCHING
}

/* 80C1225C-80C12288 0011DC 002C+00 1/0 0/0 0/0 .text daObjGraRock_Draw__FP14daObjGraRock_c */
static void daObjGraRock_Draw(daObjGraRock_c* param_0) {
    // NONMATCHING
}

/* 80C12288-80C122A8 001208 0020+00 1/0 0/0 0/0 .text daObjGraRock_Execute__FP14daObjGraRock_c */
static void daObjGraRock_Execute(daObjGraRock_c* param_0) {
    // NONMATCHING
}

/* 80C122A8-80C122B0 001228 0008+00 1/0 0/0 0/0 .text daObjGraRock_IsDelete__FP14daObjGraRock_c */
static bool daObjGraRock_IsDelete(daObjGraRock_c* param_0) {
    return true;
}

/* 80C122B0-80C122D0 001230 0020+00 1/0 0/0 0/0 .text daObjGraRock_Delete__FP14daObjGraRock_c */
static void daObjGraRock_Delete(daObjGraRock_c* param_0) {
    // NONMATCHING
}

/* 80C122D0-80C122F0 001250 0020+00 1/0 0/0 0/0 .text            daObjGraRock_create__FP10fopAc_ac_c
 */
static void daObjGraRock_create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80C122F0-80C1230C 001270 001C+00 2/2 0/0 0/0 .text            cLib_calcTimer<s>__FPs */
extern "C" void func_80C122F0(void* _this, s16* param_0) {
    // NONMATCHING
}

/* 80C1230C-80C12328 00128C 001C+00 1/1 0/0 0/0 .text            cLib_calcTimer<Uc>__FPUc */
extern "C" void func_80C1230C(void* _this, u8* param_0) {
    // NONMATCHING
}

/* 80C12328-80C123A4 0012A8 007C+00 3/3 0/0 0/0 .text            cLib_getRndValue<i>__Fii */
extern "C" void func_80C12328(void* _this, int param_0, int param_1) {
    // NONMATCHING
}

/* 80C123A4-80C123AC 001324 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80C123A4() {
    // NONMATCHING
}

/* 80C123AC-80C123B4 00132C 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80C123AC() {
    // NONMATCHING
}

/* 80C12440-80C12440 000084 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
