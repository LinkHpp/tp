/**
 * @file d_a_bd.cpp
 * 
*/

#include "d/actor/d_a_bd.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"



//
// Forward References:
//

extern "C" void __ct__10daBd_HIO_cFv();
extern "C" static void anm_init__FP8bd_classifUcf();
extern "C" static void daBd_Draw__FP8bd_class();
extern "C" static void way_bg_check__FP8bd_class();
extern "C" void __dt__4cXyzFv();
extern "C" static void s_a_sub__FPvPv();
extern "C" static void pl_check__FP8bd_class();
extern "C" static void pointBgCheck__FP4cXyzP4cXyz();
extern "C" static void land_check__FP8bd_class();
extern "C" static void drop_check__FP8bd_class();
extern "C" static void turn_set__FP8bd_class();
extern "C" static void bd_ground__FP8bd_class();
extern "C" static void bd_fly__FP8bd_class();
extern "C" static void bd_landing__FP8bd_class();
extern "C" static void bd_landing2__FP8bd_class();
extern "C" static void bd_landing3__FP8bd_class();
extern "C" static void bd_rope__FP8bd_class();
extern "C" static void bd_kkri__FP8bd_class();
extern "C" static void bd_drop__FP8bd_class();
extern "C" static void action__FP8bd_class();
extern "C" static void daBd_Execute__FP8bd_class();
extern "C" static bool daBd_IsDelete__FP8bd_class();
extern "C" static void daBd_Delete__FP8bd_class();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void __dt__12J3DFrameCtrlFv();
extern "C" static void daBd_Create__FP10fopAc_ac_c();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __dt__10daBd_HIO_cFv();
extern "C" void __sinit_d_a_bd_cpp();
extern "C" static void func_804D9E40();
extern "C" static void func_804D9E48();
extern "C" extern char const* const d_a_bd__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void mDoMtx_YrotM__FPA4_fs();
extern "C" void mDoMtx_ZrotM__FPA4_fs();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void init__13mDoExt_btkAnmFP16J3DMaterialTableP19J3DAnmTextureSRTKeyiifss();
extern "C" void entry__13mDoExt_btkAnmFP16J3DMaterialTablef();
extern "C" void
__ct__14mDoExt_McaMorfFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiiPvUlUl();
extern "C" void setAnm__14mDoExt_McaMorfFP15J3DAnmTransformiffffPv();
extern "C" void play__14mDoExt_McaMorfFP3VecUlSc();
extern "C" void entryDL__14mDoExt_McaMorfFv();
extern "C" void modelCalc__14mDoExt_McaMorfFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcIt_Judge__FPFPvPv_PvPv();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fopAcM_createChild__FsUiUlPC4cXyziPC5csXyzPC4cXyzScPFPv_i();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistance__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_searchActorDistanceXZ__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void fpcSch_JudgeForPName__FPvPv();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void MtxPosition__FP4cXyzP4cXyz();
extern "C" void deleteObject__14Z2SoundObjBaseFv();
extern "C" void __ct__16Z2SoundObjSimpleFv();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void init__12J3DFrameCtrlFs();
extern "C" void _savegpr_21();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_21();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" extern u8 g_Counter[12 + 4 /* padding */];
extern "C" extern void* calc_mtx[1 + 1 /* padding */];
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 804D9E64-804D9E68 000000 0004+00 16/16 0/0 0/0 .rodata          @3942 */
SECTION_RODATA static f32 const lit_3942 = 6.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D9E64, &lit_3942);

/* 804D9E68-804D9E6C 000004 0004+00 0/6 0/0 0/0 .rodata          @3943 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3943 = 20.0f;
COMPILER_STRIP_GATE(0x804D9E68, &lit_3943);
#pragma pop

/* 804D9E6C-804D9E70 000008 0004+00 0/5 0/0 0/0 .rodata          @3944 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3944 = 3.0f;
COMPILER_STRIP_GATE(0x804D9E6C, &lit_3944);
#pragma pop

/* 804D9E70-804D9E74 00000C 0004+00 0/4 0/0 0/0 .rodata          @3945 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_3945 = 300.0f;
COMPILER_STRIP_GATE(0x804D9E70, &lit_3945);
#pragma pop

/* 804D9F88-804DA0C8 000000 0140+00 2/2 0/0 0/0 .data            land_pos103 */
SECTION_DATA static u8 land_pos103[320] = {
    0x00, 0x00, 0x00, 0x00, 0xC4, 0x0B, 0x00, 0x00, 0x43, 0x9F, 0x80, 0x00, 0x45, 0xBD, 0x78, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x43, 0x84, 0x00, 0x00, 0x43, 0xFA, 0x80, 0x00, 0x45, 0xA2, 0x78, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x9C, 0x80, 0x00, 0x43, 0x85, 0x80, 0x00, 0x45, 0x8B, 0x60, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC4, 0x32, 0x80, 0x00, 0x42, 0xE8, 0x00, 0x00, 0x45, 0x67, 0x80, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC4, 0x97, 0x00, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x45, 0x1B, 0xB0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x1A, 0xE0, 0x00, 0x43, 0x07, 0x00, 0x00, 0x45, 0x75, 0x90, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x46, 0xD0, 0x00, 0x43, 0x1B, 0x00, 0x00, 0x45, 0x82, 0xB0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x73, 0xE0, 0x00, 0x44, 0x10, 0xC0, 0x00, 0x45, 0x59, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x63, 0xD0, 0x00, 0x44, 0x1A, 0xC0, 0x00, 0x45, 0x2F, 0x60, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x41, 0xA0, 0x00, 0x44, 0x0A, 0x80, 0x00, 0x45, 0x11, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC4, 0x5E, 0xC0, 0x00, 0x43, 0x9E, 0x00, 0x00, 0x44, 0x53, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC3, 0x4D, 0x00, 0x00, 0x43, 0x3F, 0x00, 0x00, 0x44, 0x98, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0xA7, 0xA0, 0x00, 0x42, 0xF4, 0x00, 0x00, 0x44, 0x99, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0xFE, 0x20, 0x00, 0x42, 0xC8, 0x00, 0x00, 0x45, 0x57, 0x90, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x2E, 0x20, 0x00, 0x43, 0x01, 0x00, 0x00, 0x45, 0x6D, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x6D, 0xE0, 0x00, 0x43, 0x84, 0x80, 0x00, 0x45, 0x11, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x31, 0x90, 0x00, 0x43, 0x39, 0x00, 0x00, 0x44, 0xDB, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x70, 0x70, 0x00, 0x42, 0xE4, 0x00, 0x00, 0x42, 0x10, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x17, 0x40, 0x00, 0x42, 0xA2, 0x00, 0x00, 0xC4, 0xFA, 0xC0, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804DA0C8-804DA208 000140 0140+00 2/2 0/0 0/0 .data            land_pos127 */
SECTION_DATA static u8 land_pos127[320] = {
    0x00, 0x00, 0x00, 0x00, 0x45, 0x4A, 0x60, 0x00, 0x42, 0x84, 0x00, 0x00, 0xC5, 0x44, 0x50, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x2A, 0x10, 0x00, 0x42, 0x9E, 0x00, 0x00, 0xC5, 0x09, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x72, 0xD0, 0x00, 0x42, 0x0C, 0x00, 0x00, 0xC4, 0xAE, 0xE0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x71, 0x60, 0x00, 0x42, 0x0C, 0x00, 0x00, 0xC3, 0x5C, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x8F, 0x28, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x44, 0x22, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0xAB, 0xB8, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x44, 0xC2, 0xC0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0xB5, 0x60, 0x00, 0x42, 0x18, 0x00, 0x00, 0x45, 0x1F, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0xC8, 0x48, 0x00, 0x42, 0x9E, 0x00, 0x00, 0x45, 0x77, 0x20, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0xB5, 0xB0, 0x00, 0x42, 0x7C, 0x00, 0x00, 0x45, 0x9E, 0xF0, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x45, 0x4C, 0x30, 0x00, 0x42, 0x96, 0x00, 0x00, 0x45, 0xC6, 0xC8, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0xDC, 0xE0, 0x00, 0x42, 0x9E, 0x00, 0x00, 0x45, 0xAC, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x44, 0x02, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0xB3, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x41, 0xD8, 0x00, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0xD9, 0x60, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x01, 0x30, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0xBE, 0x18, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x47, 0x40, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0xB4, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x67, 0x10, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0x89, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x8B, 0x90, 0x00, 0x42, 0x0C, 0x00, 0x00, 0x45, 0x82, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x8D, 0x78, 0x00, 0x42, 0xAE, 0x00, 0x00, 0x45, 0xC0, 0x08, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xC5, 0x0F, 0xE0, 0x00, 0x44, 0x98, 0x00, 0x00, 0xC3, 0x72, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

/* 804DA208-804DA214 000280 000C+00 3/3 0/0 0/0 .data            wait_bck */
SECTION_DATA static u8 wait_bck[12] = {
    0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x08,
};

/* 804DA214-804DA234 -00001 0020+00 1/1 0/0 0/0 .data            @4761 */
SECTION_DATA static void* lit_4761[8] = {
    (void*)(((char*)action__FP8bd_class) + 0xAC),  (void*)(((char*)action__FP8bd_class) + 0xD4),
    (void*)(((char*)action__FP8bd_class) + 0xC0),  (void*)(((char*)action__FP8bd_class) + 0xE0),
    (void*)(((char*)action__FP8bd_class) + 0xEC),  (void*)(((char*)action__FP8bd_class) + 0xFC),
    (void*)(((char*)action__FP8bd_class) + 0x110), (void*)(((char*)action__FP8bd_class) + 0x120),
};

/* 804DA234-804DA274 0002AC 0040+00 1/1 0/0 0/0 .data            cc_sph_src$4956 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{0x0, 0x0, 0x0}, {0xd8fbfdff, 0x3}, 0x75}}, // mObj
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x2}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 10.0f} // mSph
    } // mSphAttr
};

/* 804DA274-804DA294 -00001 0020+00 1/0 0/0 0/0 .data            l_daBd_Method */
static actor_method_class l_daBd_Method = {
    (process_method_func)daBd_Create__FP10fopAc_ac_c,
    (process_method_func)daBd_Delete__FP8bd_class,
    (process_method_func)daBd_Execute__FP8bd_class,
    (process_method_func)daBd_IsDelete__FP8bd_class,
    (process_method_func)daBd_Draw__FP8bd_class,
};

/* 804DA294-804DA2C4 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_BD */
extern actor_process_profile_definition g_profile_BD = {
  fpcLy_CURRENT_e,       // mLayerID
  8,                     // mListID
  fpcPi_CURRENT_e,       // mListPrio
  PROC_BD,               // mProcName
  &g_fpcLf_Method.base, // sub_method
  sizeof(bd_class),      // mSize
  0,                     // mSizeOther
  0,                     // mParameters
  &g_fopAc_Method.base,  // sub_method
  718,                   // mPriority
  &l_daBd_Method,        // sub_method
  0x000C4100,            // mStatus
  fopAc_ACTOR_e,         // mActorType
  fopAc_CULLBOX_0_e,     // cullType
};

/* 804DA2C4-804DA2D0 00033C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 804DA2D0-804DA2DC 000348 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 804DA2DC-804DA300 000354 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D9E48,
    (void*)NULL,
    (void*)NULL,
    (void*)func_804D9E40,
};

/* 804DA300-804DA30C 000378 000C+00 2/2 0/0 0/0 .data            __vt__12J3DFrameCtrl */
SECTION_DATA extern void* __vt__12J3DFrameCtrl[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12J3DFrameCtrlFv,
};

/* 804DA30C-804DA318 000384 000C+00 2/2 0/0 0/0 .data            __vt__10daBd_HIO_c */
SECTION_DATA extern void* __vt__10daBd_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10daBd_HIO_cFv,
};

/* 804D6C4C-804D6CA4 0000EC 0058+00 1/1 0/0 0/0 .text            __ct__10daBd_HIO_cFv */
daBd_HIO_c::daBd_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9E74-804D9E78 000010 0004+00 2/14 0/0 0/0 .rodata          @3963 */
SECTION_RODATA static u8 const lit_3963[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804D9E74, &lit_3963);

/* 804D9E78-804D9E7C 000014 0004+00 2/2 0/0 0/0 .rodata          @3964 */
SECTION_RODATA static f32 const lit_3964 = -1.0f;
COMPILER_STRIP_GATE(0x804D9E78, &lit_3964);

/* 804D9F6C-804D9F6C 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804D9F6C = "Bd";
#pragma pop

/* 804D6CA4-804D6D54 000144 00B0+00 8/8 0/0 0/0 .text            anm_init__FP8bd_classifUcf */
static void anm_init(bd_class* param_0, int param_1, f32 param_2, u8 param_3, f32 param_4) {
    // NONMATCHING
}

/* 804D6D54-804D6DD8 0001F4 0084+00 1/0 0/0 0/0 .text            daBd_Draw__FP8bd_class */
static void daBd_Draw(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9E7C-804D9E80 000018 0004+00 0/3 0/0 0/0 .rodata          @4012 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4012 = 30.0f;
COMPILER_STRIP_GATE(0x804D9E7C, &lit_4012);
#pragma pop

/* 804D9E80-804D9E84 00001C 0004+00 0/4 0/0 0/0 .rodata          @4013 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4013 = 100.0f;
COMPILER_STRIP_GATE(0x804D9E80, &lit_4013);
#pragma pop

/* 804D6DD8-804D6ED4 000278 00FC+00 1/1 0/0 0/0 .text            way_bg_check__FP8bd_class */
static void way_bg_check(bd_class* param_0) {
    // NONMATCHING
}

/* 804D6ED4-804D6F10 000374 003C+00 1/1 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9E84-804D9E8C 000020 0008+00 0/4 0/0 0/0 .rodata          @4105 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4105[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D9E84, &lit_4105);
#pragma pop

/* 804D9E8C-804D9E94 000028 0008+00 0/4 0/0 0/0 .rodata          @4106 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4106[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D9E8C, &lit_4106);
#pragma pop

/* 804D9E94-804D9E9C 000030 0008+00 0/4 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4107[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D9E94, &lit_4107);
#pragma pop

/* 804D9E9C-804D9EA0 000038 0004+00 0/9 0/0 0/0 .rodata          @4108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4108 = 10.0f;
COMPILER_STRIP_GATE(0x804D9E9C, &lit_4108);
#pragma pop

/* 804DA320-804DA324 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 804DA324-804DA328 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 804DA328-804DA32C 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 804DA32C-804DA330 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 804DA330-804DA334 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 804DA334-804DA338 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 804DA338-804DA33C 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 804DA33C-804DA340 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 804DA340-804DA344 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 804DA344-804DA348 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 804DA348-804DA34C 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 804DA34C-804DA350 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 804DA350-804DA354 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 804DA354-804DA358 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 804DA358-804DA35C 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 804DA35C-804DA360 -00001 0004+00 1/2 0/0 0/0 .bss             None */
/* 804DA35C 0001+00 data_804DA35C @1009 */
/* 804DA35D 0003+00 data_804DA35D None */
static u8 struct_804DA35C[4];

/* 804DA360-804DA36C 000048 000C+00 0/1 0/0 0/0 .bss             @3937 */
#pragma push
#pragma force_active on
static u8 lit_3937[12];
#pragma pop

/* 804DA36C-804DA38C 000054 0020+00 8/10 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[32];

/* 804D6F10-804D7210 0003B0 0300+00 1/1 0/0 0/0 .text            s_a_sub__FPvPv */
static void s_a_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9EA0-804D9EA4 00003C 0004+00 0/4 0/0 0/0 .rodata          @4169 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4169 = 6.0f;
COMPILER_STRIP_GATE(0x804D9EA0, &lit_4169);
#pragma pop

/* 804D9EA4-804D9EA8 000040 0004+00 1/7 0/0 0/0 .rodata          @4170 */
SECTION_RODATA static f32 const lit_4170 = 2.0f;
COMPILER_STRIP_GATE(0x804D9EA4, &lit_4170);

/* 804D9EA8-804D9EAC 000044 0004+00 2/10 0/0 0/0 .rodata          @4171 */
SECTION_RODATA static f32 const lit_4171 = 1.0f;
COMPILER_STRIP_GATE(0x804D9EA8, &lit_4171);

/* 804D9EAC-804D9EB4 000048 0004+04 0/2 0/0 0/0 .rodata          @4172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4172[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};
COMPILER_STRIP_GATE(0x804D9EAC, &lit_4172);
#pragma pop

/* 804D9EB4-804D9EBC 000050 0008+00 0/2 0/0 0/0 .rodata          @4174 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4174[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x804D9EB4, &lit_4174);
#pragma pop

/* 804D7210-804D7518 0006B0 0308+00 1/1 0/0 0/0 .text            pl_check__FP8bd_class */
static void pl_check(bd_class* param_0) {
    // NONMATCHING
}

/* 804D7518-804D75D0 0009B8 00B8+00 1/1 0/0 0/0 .text            pointBgCheck__FP4cXyzP4cXyz */
static void pointBgCheck(cXyz* param_0, cXyz* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9EBC-804D9EC0 000058 0004+00 0/2 0/0 0/0 .rodata          @4272 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4272 = 1000.0f;
COMPILER_STRIP_GATE(0x804D9EBC, &lit_4272);
#pragma pop

/* 804D9EC0-804D9EC4 00005C 0004+00 0/1 0/0 0/0 .rodata          @4273 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4273 = 600.0f;
COMPILER_STRIP_GATE(0x804D9EC0, &lit_4273);
#pragma pop

/* 804D9EC4-804D9EC8 000060 0004+00 0/1 0/0 0/0 .rodata          @4274 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4274 = 5.0f;
COMPILER_STRIP_GATE(0x804D9EC4, &lit_4274);
#pragma pop

/* 804D9EC8-804D9ECC 000064 0004+00 0/1 0/0 0/0 .rodata          @4275 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4275 = 500.0f;
COMPILER_STRIP_GATE(0x804D9EC8, &lit_4275);
#pragma pop

/* 804D9F6C-804D9F6C 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804D9F6F = "F_SP103";
SECTION_DEAD static char const* const stringBase_804D9F77 = "F_SP127";
#pragma pop

/* 804D75D0-804D785C 000A70 028C+00 1/1 0/0 0/0 .text            land_check__FP8bd_class */
static void land_check(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9ECC-804D9ED0 000068 0004+00 1/1 0/0 0/0 .rodata          @4282 */
SECTION_RODATA static f32 const lit_4282 = -10.0f;
COMPILER_STRIP_GATE(0x804D9ECC, &lit_4282);

/* 804D785C-804D7890 000CFC 0034+00 1/1 0/0 0/0 .text            drop_check__FP8bd_class */
static void drop_check(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9ED0-804D9ED8 00006C 0006+02 1/1 0/0 0/0 .rodata          @4286 */
SECTION_RODATA static u8 const lit_4286[6 + 2 /* padding */] = {
    0x80,
    0x00,
    0x40,
    0x00,
    0xC0,
    0x00,
    /* padding */
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x804D9ED0, &lit_4286);

/* 804D9ED8-804D9EDC 000074 0004+00 1/2 0/0 0/0 .rodata          @4288 */
SECTION_RODATA static u32 const lit_4288 = 0x403F5C29;
COMPILER_STRIP_GATE(0x804D9ED8, &lit_4288);

/* 804D7890-804D78FC 000D30 006C+00 1/1 0/0 0/0 .text            turn_set__FP8bd_class */
static void turn_set(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9EDC-804D9EE0 000078 0004+00 0/2 0/0 0/0 .rodata          @4358 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4358 = 65536.0f;
COMPILER_STRIP_GATE(0x804D9EDC, &lit_4358);
#pragma pop

/* 804D9EE0-804D9EE4 00007C 0004+00 0/4 0/0 0/0 .rodata          @4359 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4359 = 200.0f;
COMPILER_STRIP_GATE(0x804D9EE0, &lit_4359);
#pragma pop

/* 804D9EE4-804D9EE8 000080 0004+00 0/1 0/0 0/0 .rodata          @4360 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4360 = 60.0f;
COMPILER_STRIP_GATE(0x804D9EE4, &lit_4360);
#pragma pop

/* 804D9EE8-804D9EEC 000084 0004+00 0/4 0/0 0/0 .rodata          @4361 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4361 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x804D9EE8, &lit_4361);
#pragma pop

/* 804D9EEC-804D9EF0 000088 0004+00 0/1 0/0 0/0 .rodata          @4362 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4362 = 7.0f / 20.0f;
COMPILER_STRIP_GATE(0x804D9EEC, &lit_4362);
#pragma pop

/* 804D9EF0-804D9EF4 00008C 0004+00 0/1 0/0 0/0 .rodata          @4363 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4363 = 15.0f;
COMPILER_STRIP_GATE(0x804D9EF0, &lit_4363);
#pragma pop

/* 804D9F6C-804D9F6C 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_804D9F7F = "R_SP127";
#pragma pop

/* 804D78FC-804D7DF4 000D9C 04F8+00 1/1 0/0 0/0 .text            bd_ground__FP8bd_class */
static void bd_ground(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9EF4-804D9EF8 000090 0004+00 0/2 0/0 0/0 .rodata          @4452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4452 = -2.0f;
COMPILER_STRIP_GATE(0x804D9EF4, &lit_4452);
#pragma pop

/* 804D9EF8-804D9EFC 000094 0004+00 0/1 0/0 0/0 .rodata          @4453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4453 = -450.0f;
COMPILER_STRIP_GATE(0x804D9EF8, &lit_4453);
#pragma pop

/* 804D9EFC-804D9F00 000098 0004+00 0/1 0/0 0/0 .rodata          @4454 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4454 = -612.0f;
COMPILER_STRIP_GATE(0x804D9EFC, &lit_4454);
#pragma pop

/* 804D9F00-804D9F04 00009C 0004+00 0/1 0/0 0/0 .rodata          @4455 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4455 = 800.0f;
COMPILER_STRIP_GATE(0x804D9F00, &lit_4455);
#pragma pop

/* 804D9F04-804D9F08 0000A0 0004+00 0/1 0/0 0/0 .rodata          @4456 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4456 = -3000.0f;
COMPILER_STRIP_GATE(0x804D9F04, &lit_4456);
#pragma pop

/* 804D9F08-804D9F0C 0000A4 0004+00 0/1 0/0 0/0 .rodata          @4457 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4457 = 32768.0f;
COMPILER_STRIP_GATE(0x804D9F08, &lit_4457);
#pragma pop

/* 804D9F0C-804D9F10 0000A8 0004+00 0/1 0/0 0/0 .rodata          @4458 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4458 = 10000.0f;
COMPILER_STRIP_GATE(0x804D9F0C, &lit_4458);
#pragma pop

/* 804D7DF4-804D82E4 001294 04F0+00 1/1 0/0 0/0 .text            bd_fly__FP8bd_class */
static void bd_fly(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F10-804D9F14 0000AC 0004+00 0/1 0/0 0/0 .rodata          @4526 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4526 = 45.0f;
COMPILER_STRIP_GATE(0x804D9F10, &lit_4526);
#pragma pop

/* 804D82E4-804D8648 001784 0364+00 1/1 0/0 0/0 .text            bd_landing__FP8bd_class */
static void bd_landing(bd_class* param_0) {
    // NONMATCHING
}

/* 804D8648-804D8798 001AE8 0150+00 1/1 0/0 0/0 .text            bd_landing2__FP8bd_class */
static void bd_landing2(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F14-804D9F18 0000B0 0004+00 0/1 0/0 0/0 .rodata          @4624 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4624 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x804D9F14, &lit_4624);
#pragma pop

/* 804D9F18-804D9F1C 0000B4 0004+00 0/1 0/0 0/0 .rodata          @4625 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4625 = 400.0f;
COMPILER_STRIP_GATE(0x804D9F18, &lit_4625);
#pragma pop

/* 804D8798-804D8A34 001C38 029C+00 1/1 0/0 0/0 .text            bd_landing3__FP8bd_class */
static void bd_landing3(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F1C-804D9F20 0000B8 0004+00 0/2 0/0 0/0 .rodata          @4659 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4659 = 0x3FFEB852;
COMPILER_STRIP_GATE(0x804D9F1C, &lit_4659);
#pragma pop

/* 804D8A34-804D8C48 001ED4 0214+00 1/1 0/0 0/0 .text            bd_rope__FP8bd_class */
static void bd_rope(bd_class* param_0) {
    // NONMATCHING
}

/* 804D8C48-804D8E20 0020E8 01D8+00 1/1 0/0 0/0 .text            bd_kkri__FP8bd_class */
static void bd_kkri(bd_class* param_0) {
    // NONMATCHING
}

/* 804D8E20-804D8EB8 0022C0 0098+00 1/1 0/0 0/0 .text            bd_drop__FP8bd_class */
static void bd_drop(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F20-804D9F24 0000BC 0004+00 0/1 0/0 0/0 .rodata          @4758 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4758 = -7.0f;
COMPILER_STRIP_GATE(0x804D9F20, &lit_4758);
#pragma pop

/* 804D8EB8-804D91F8 002358 0340+00 2/1 0/0 0/0 .text            action__FP8bd_class */
static void action(bd_class* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F24-804D9F28 0000C0 0004+00 0/0 0/0 0/0 .rodata          @4759 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4759 = -80.0f;
COMPILER_STRIP_GATE(0x804D9F24, &lit_4759);
#pragma pop

/* 804D9F28-804D9F2C 0000C4 0004+00 0/0 0/0 0/0 .rodata          @4760 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4760 = 1.5f;
COMPILER_STRIP_GATE(0x804D9F28, &lit_4760);
#pragma pop

/* 804D9F2C-804D9F30 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4872 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4872 = -914.0f;
COMPILER_STRIP_GATE(0x804D9F2C, &lit_4872);
#pragma pop

/* 804D9F30-804D9F34 0000CC 0004+00 0/1 0/0 0/0 .rodata          @4873 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4873 = 160.0f;
COMPILER_STRIP_GATE(0x804D9F30, &lit_4873);
#pragma pop

/* 804D9F34-804D9F38 0000D0 0004+00 0/1 0/0 0/0 .rodata          @4874 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4874 = 3931.0f;
COMPILER_STRIP_GATE(0x804D9F34, &lit_4874);
#pragma pop

/* 804D91F8-804D959C 002698 03A4+00 2/1 0/0 0/0 .text            daBd_Execute__FP8bd_class */
static void daBd_Execute(bd_class* param_0) {
    // NONMATCHING
}

/* 804D959C-804D95A4 002A3C 0008+00 1/0 0/0 0/0 .text            daBd_IsDelete__FP8bd_class */
static bool daBd_IsDelete(bd_class* param_0) {
    return true;
}

/* 804D95A4-804D960C 002A44 0068+00 1/0 0/0 0/0 .text            daBd_Delete__FP8bd_class */
static void daBd_Delete(bd_class* param_0) {
    // NONMATCHING
}

/* 804D960C-804D97D4 002AAC 01C8+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804D97D4-804D981C 002C74 0048+00 1/0 0/0 0/0 .text            __dt__12J3DFrameCtrlFv */
// J3DFrameCtrl::~J3DFrameCtrl() {
extern "C" void __dt__12J3DFrameCtrlFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F38-804D9F3C 0000D4 0004+00 0/1 0/0 0/0 .rodata          @5073 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_5073 = 0x40FFF7CF;
COMPILER_STRIP_GATE(0x804D9F38, &lit_5073);
#pragma pop

/* 804DA38C-804DA398 000074 000C+00 0/1 0/0 0/0 .bss             @3946 */
#pragma push
#pragma force_active on
static u8 lit_3946[12];
#pragma pop

/* 804DA398-804DA3A4 000080 000C+00 0/1 0/0 0/0 .bss             @3947 */
#pragma push
#pragma force_active on
static u8 lit_3947[12];
#pragma pop

/* 804DA3A4-804DA3B0 00008C 000C+00 0/1 0/0 0/0 .bss             @3948 */
#pragma push
#pragma force_active on
static u8 lit_3948[12];
#pragma pop

/* 804DA3B0-804DA3BC 000098 000C+00 0/1 0/0 0/0 .bss             @3949 */
#pragma push
#pragma force_active on
static u8 lit_3949[12];
#pragma pop

/* 804DA3BC-804DA3EC 0000A4 0030+00 0/1 0/0 0/0 .bss             land_sp_pos */
#pragma push
#pragma force_active on
static u8 land_sp_pos[48];
#pragma pop

/* 804DA3EC-804DA3F0 0000D4 0004+00 0/1 0/0 0/0 .bss             rope_pt */
#pragma push
#pragma force_active on
static u8 rope_pt[4];
#pragma pop

/* 804D981C-804D9BB8 002CBC 039C+00 1/0 0/0 0/0 .text            daBd_Create__FP10fopAc_ac_c */
static void daBd_Create(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 804D9BB8-804D9C00 003058 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 804D9C00-804D9C48 0030A0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 804D9C48-804D9CB8 0030E8 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 804D9CB8-804D9D00 003158 0048+00 2/1 0/0 0/0 .text            __dt__10daBd_HIO_cFv */
daBd_HIO_c::~daBd_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804D9F3C-804D9F40 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5191 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5191 = 3350.0f;
COMPILER_STRIP_GATE(0x804D9F3C, &lit_5191);
#pragma pop

/* 804D9F40-804D9F44 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5192 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5192 = 474.0f;
COMPILER_STRIP_GATE(0x804D9F40, &lit_5192);
#pragma pop

/* 804D9F44-804D9F48 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5193 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5193 = 1760.0f;
COMPILER_STRIP_GATE(0x804D9F44, &lit_5193);
#pragma pop

/* 804D9F48-804D9F4C 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5194 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5194 = 553.0f;
COMPILER_STRIP_GATE(0x804D9F48, &lit_5194);
#pragma pop

/* 804D9F4C-804D9F50 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5195 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5195 = 395.0f;
COMPILER_STRIP_GATE(0x804D9F4C, &lit_5195);
#pragma pop

/* 804D9F50-804D9F54 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5196 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5196 = -599.0f;
COMPILER_STRIP_GATE(0x804D9F50, &lit_5196);
#pragma pop

/* 804D9F54-804D9F58 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5197 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5197 = -194.0f;
COMPILER_STRIP_GATE(0x804D9F54, &lit_5197);
#pragma pop

/* 804D9F58-804D9F5C 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5198 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5198 = 594.0f;
COMPILER_STRIP_GATE(0x804D9F58, &lit_5198);
#pragma pop

/* 804D9F5C-804D9F60 0000F8 0004+00 0/1 0/0 0/0 .rodata          @5199 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5199 = 4832.0f;
COMPILER_STRIP_GATE(0x804D9F5C, &lit_5199);
#pragma pop

/* 804D9F60-804D9F64 0000FC 0004+00 0/1 0/0 0/0 .rodata          @5200 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5200 = -3349.0f;
COMPILER_STRIP_GATE(0x804D9F60, &lit_5200);
#pragma pop

/* 804D9F64-804D9F68 000100 0004+00 0/1 0/0 0/0 .rodata          @5201 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5201 = 865.0f;
COMPILER_STRIP_GATE(0x804D9F64, &lit_5201);
#pragma pop

/* 804D9F68-804D9F6C 000104 0004+00 0/1 0/0 0/0 .rodata          @5202 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5202 = 2773.0f;
COMPILER_STRIP_GATE(0x804D9F68, &lit_5202);
#pragma pop

/* 804D9D00-804D9E40 0031A0 0140+00 0/0 1/0 0/0 .text            __sinit_d_a_bd_cpp */
void __sinit_d_a_bd_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x804D9D00, __sinit_d_a_bd_cpp);
#pragma pop

/* 804D9E40-804D9E48 0032E0 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_804D9E40() {
    // NONMATCHING
}

/* 804D9E48-804D9E50 0032E8 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_804D9E48() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 804DA3F0-804DA3F4 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_804DA3F0[4];
#pragma pop

/* 804DA3F4-804DA3F8 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_804DA3F4[4];
#pragma pop

/* 804DA3F8-804DA3FC 0000E0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_804DA3F8[4];
#pragma pop

/* 804DA3FC-804DA400 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804DA3FC[4];
#pragma pop

/* 804DA400-804DA404 0000E8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA400[4];
#pragma pop

/* 804DA404-804DA408 0000EC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA404[4];
#pragma pop

/* 804DA408-804DA40C 0000F0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_804DA408[4];
#pragma pop

/* 804DA40C-804DA410 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_804DA40C[4];
#pragma pop

/* 804DA410-804DA414 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_804DA410[4];
#pragma pop

/* 804DA414-804DA418 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_804DA414[4];
#pragma pop

/* 804DA418-804DA41C 000100 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_804DA418[4];
#pragma pop

/* 804DA41C-804DA420 000104 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_804DA41C[4];
#pragma pop

/* 804DA420-804DA424 000108 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_804DA420[4];
#pragma pop

/* 804DA424-804DA428 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA424[4];
#pragma pop

/* 804DA428-804DA42C 000110 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804DA428[4];
#pragma pop

/* 804DA42C-804DA430 000114 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_804DA42C[4];
#pragma pop

/* 804DA430-804DA434 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_804DA430[4];
#pragma pop

/* 804DA434-804DA438 00011C 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_804DA434[4];
#pragma pop

/* 804DA438-804DA43C 000120 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_804DA438[4];
#pragma pop

/* 804DA43C-804DA440 000124 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_804DA43C[4];
#pragma pop

/* 804DA440-804DA444 000128 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_804DA440[4];
#pragma pop

/* 804DA444-804DA448 00012C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA444[4];
#pragma pop

/* 804DA448-804DA44C 000130 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA448[4];
#pragma pop

/* 804DA44C-804DA450 000134 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_804DA44C[4];
#pragma pop

/* 804DA450-804DA454 000138 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_804DA450[4];
#pragma pop

/* 804D9F6C-804D9F6C 000108 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
