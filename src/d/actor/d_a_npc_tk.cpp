/**
 * @file d_a_npc_tk.cpp
 * 
*/

#include "d/actor/d_a_npc_tk.h"
#include "d/d_cc_d.h"
#include "dol2asm.h"
#include "d/d_camera.h"

//
// Forward References:
//

extern "C" void __ct__14daNPC_TK_HIO_cFv();
extern "C" void setBck__10daNPC_TK_cFiUcff();
extern "C" void checkBck__10daNPC_TK_cFi();
extern "C" void draw__10daNPC_TK_cFv();
extern "C" void __dt__4cXyzFv();
extern "C" static void daNPC_TK_Draw__FP10daNPC_TK_c();
extern "C" void checkBeforeBg__10daNPC_TK_cFv();
extern "C" void setActionMode__10daNPC_TK_cFi();
extern "C" void setAddCalcSpeedXZ__10daNPC_TK_cFR4cXyzRC4cXyzfff();
extern "C" void chaseTargetPos__10daNPC_TK_cF4cXyzffs();
extern "C" void getMasterPointer__10daNPC_TK_cFv();
extern "C" void setMasterShoulder__10daNPC_TK_cFP4cXyz();
extern "C" void setAwayAction__10daNPC_TK_cFi();
extern "C" void setFlySE__10daNPC_TK_cFv();
extern "C" static void checkRangeOfTake__FP10fopAc_ac_cP10fopAc_ac_c();
extern "C" static void s_obj_sub__FPvPv();
extern "C" static void s_hanjo__FPvPv();
extern "C" void executeFly__10daNPC_TK_cFv();
extern "C" void initPerchDemo__10daNPC_TK_cFi();
extern "C" void executePerchDemo__10daNPC_TK_cFi();
extern "C" void executePerch__10daNPC_TK_cFv();
extern "C" void executeHandOn__10daNPC_TK_cFv();
extern "C" void checkWaterSurface__10daNPC_TK_cFf();
extern "C" void executeAttack__10daNPC_TK_cFv();
extern "C" void executeAway__10daNPC_TK_cFv();
extern "C" void setCarryActorMtx__10daNPC_TK_cFv();
extern "C" void getTakePosY__10daNPC_TK_cFv();
extern "C" void getTakeOffPosY__10daNPC_TK_cFv();
extern "C" void executeBack__10daNPC_TK_cFv();
extern "C" void getHanjoHandPos__10daNPC_TK_cFv();
extern "C" void executeStayHanjo__10daNPC_TK_cFv();
extern "C" void executeAttackLink__10daNPC_TK_cFv();
extern "C" void executeBackHanjo__10daNPC_TK_cFv();
extern "C" void checkAttackDemo__10daNPC_TK_cFv();
extern "C" void executeAttackDemo__10daNPC_TK_cFv();
extern "C" void executeBackHanjoDemo__10daNPC_TK_cFv();
extern "C" void executeWolfEvent__10daNPC_TK_cFv();
extern "C" void calcWolfDemoCam__10daNPC_TK_cFv();
extern "C" void calcWolfDemoCam2__10daNPC_TK_cFv();
extern "C" void executeWolfPerch__10daNPC_TK_cFv();
extern "C" void executeResistanceDemo__10daNPC_TK_cFv();
extern "C" void setHawkSideCamera__10daNPC_TK_cF4cXyz();
extern "C" void setHawkCamera__10daNPC_TK_cFP10fopAc_ac_c();
extern "C" void endHawkCamera__10daNPC_TK_cFv();
extern "C" void calcDemoCamera__10daNPC_TK_cFv();
extern "C" void checkActionSet__10daNPC_TK_cFv();
extern "C" void action__10daNPC_TK_cFv();
extern "C" void mtx_set__10daNPC_TK_cFv();
extern "C" void cc_set__10daNPC_TK_cFv();
extern "C" void execute__10daNPC_TK_cFv();
extern "C" static void daNPC_TK_Execute__FP10daNPC_TK_c();
extern "C" static bool daNPC_TK_IsDelete__FP10daNPC_TK_c();
extern "C" void _delete__10daNPC_TK_cFv();
extern "C" static void daNPC_TK_Delete__FP10daNPC_TK_c();
extern "C" void ctrlJoint__10daNPC_TK_cFP8J3DJointP8J3DModel();
extern "C" void JointCallBack__10daNPC_TK_cFP8J3DJointi();
extern "C" void CreateHeap__10daNPC_TK_cFv();
extern "C" static void useHeapInit__FP10fopAc_ac_c();
extern "C" void create__10daNPC_TK_cFv();
extern "C" void __dt__8cM3dGSphFv();
extern "C" void __dt__8cM3dGAabFv();
extern "C" void __dt__12dBgS_ObjAcchFv();
extern "C" void __ct__4cXyzFv();
extern "C" static void daNPC_TK_Create__FP10daNPC_TK_c();
extern "C" void __dt__14daNPC_TK_HIO_cFv();
extern "C" void __sinit_d_a_npc_tk_cpp();
extern "C" static void func_80B0C188();
extern "C" static void func_80B0C190();
extern "C" void checkNowWolf__9daPy_py_cFv();
extern "C" extern char const* const d_a_npc_tk__stringBase0;

//
// External References:
//

extern "C" void mDoMtx_ZXYrotM__FPA4_fsss();
extern "C" void mDoMtx_XrotM__FPA4_fs();
extern "C" void mDoMtx_YrotS__FPA4_fs();
extern "C" void transS__14mDoMtx_stack_cFRC4cXyz();
extern "C" void transM__14mDoMtx_stack_cFfff();
extern "C" void scaleM__14mDoMtx_stack_cFfff();
extern "C" void ZXYrotM__14mDoMtx_stack_cFRC5csXyz();
extern "C" void
__ct__16mDoExt_McaMorfSOFP12J3DModelDataP25mDoExt_McaMorfCallBack1_cP25mDoExt_McaMorfCallBack2_cP15J3DAnmTransformifiiP10Z2CreatureUlUl();
extern "C" void setAnm__16mDoExt_McaMorfSOFP15J3DAnmTransformiffff();
extern "C" void play__16mDoExt_McaMorfSOFUlSc();
extern "C" void entryDL__16mDoExt_McaMorfSOFv();
extern "C" void modelCalc__16mDoExt_McaMorfSOFv();
extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void fopAc_IsActor__FPv();
extern "C" void fopAcM_SearchByName__FsPP10fopAc_ac_c();
extern "C" void fopAcM_entrySolidHeap__FP10fopAc_ac_cPFP10fopAc_ac_c_iUl();
extern "C" void fopAcM_SetMin__FP10fopAc_ac_cfff();
extern "C" void fopAcM_SetMax__FP10fopAc_ac_cfff();
extern "C" void fopAcM_posMoveF__FP10fopAc_ac_cPC4cXyz();
extern "C" void fopAcM_searchActorAngleY__FPC10fopAc_ac_cPC10fopAc_ac_c();
extern "C" void fopAcM_orderOtherEvent__FP10fopAc_ac_cP10fopAc_ac_cPCcUsUsUs();
extern "C" void fopAcM_orderPotentialEvent__FP10fopAc_ac_cUsUsUs();
extern "C" void fopAcM_setCarryNow__FP10fopAc_ac_ci();
extern "C" void fopAcM_cancelCarryNow__FP10fopAc_ac_c();
extern "C" void fopAcM_effSmokeSet1__FPUlPUlPC4cXyzPC5csXyzfPC12dKy_tevstr_ci();
extern "C" void fopAcM_effHamonSet__FPUlPC4cXyzff();
extern "C" void fpcEx_Search__FPFPvPv_PvPv();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGp_getReverb__Fi();
extern "C" void
dComIfGd_setShadow__FUlScP8J3DModelP4cXyzffffR13cBgS_PolyInfoP12dKy_tevstr_csfP9_GXTexObj();
extern "C" void isTbox__12dSv_memBit_cCFi();
extern "C" void onSwitch__12dSv_memBit_cFi();
extern "C" void isSwitch__12dSv_memBit_cCFi();
extern "C" void isItem__12dSv_memBit_cCFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void onSwitch__10dSv_info_cFii();
extern "C" void getRes__14dRes_control_cFPCclP11dRes_info_ci();
extern "C" void getRes__14dRes_control_cFPCcPCcP11dRes_info_ci();
extern "C" void reset__14dEvt_control_cFv();
extern "C" void dEv_defaultSkipProc__FPvi();
extern "C" void setSkipProc__14dEvt_control_cFPvPFPvi_ii();
extern "C" void setSkipZev__14dEvt_control_cFPvPc();
extern "C" void getMyStaffId__16dEvent_manager_cFPCcP10fopAc_ac_ci();
extern "C" void getIsAddvance__16dEvent_manager_cFi();
extern "C" void getMyActIdx__16dEvent_manager_cFiPCPCciii();
extern "C" void cutEnd__16dEvent_manager_cFi();
extern "C" void
set__13dPa_control_cFUlUcUsPC4cXyzPC12dKy_tevstr_cPC5csXyzPC4cXyzUcP18dPa_levelEcallBackScPC8_GXColorPC8_GXColorPC4cXyzf();
extern "C" void dPath_GetPnt__FPC5dPathi();
extern "C" void dPath_GetRoomPath__Fii();
extern "C" void StartShock__12dVibration_cFii4cXyz();
extern "C" void LineCross__4cBgSFP11cBgS_LinChk();
extern "C" void GroundCross__4cBgSFP11cBgS_GndChk();
extern "C" void __ct__12dBgS_AcchCirFv();
extern "C" void SetWall__12dBgS_AcchCirFff();
extern "C" void __dt__9dBgS_AcchFv();
extern "C" void __ct__9dBgS_AcchFv();
extern "C" void Set__9dBgS_AcchFP4cXyzP4cXyzP10fopAc_ac_ciP12dBgS_AcchCirP4cXyzP5csXyzP5csXyz();
extern "C" void CrrPos__9dBgS_AcchFR4dBgS();
extern "C" void SetGroundUpY__9dBgS_AcchFf();
extern "C" void __ct__11dBgS_GndChkFv();
extern "C" void __dt__11dBgS_GndChkFv();
extern "C" void __ct__18dBgS_ObjGndChk_SplFv();
extern "C" void __dt__18dBgS_ObjGndChk_SplFv();
extern "C" void __ct__11dBgS_LinChkFv();
extern "C" void __dt__11dBgS_LinChkFv();
extern "C" void Set__11dBgS_LinChkFPC4cXyzPC4cXyzPC10fopAc_ac_c();
extern "C" void SetObj__16dBgS_PolyPassChkFv();
extern "C" void __ct__10dCcD_GSttsFv();
extern "C" void Init__9dCcD_SttsFiiP10fopAc_ac_c();
extern "C" void __ct__12dCcD_GObjInfFv();
extern "C" void ChkAtHit__12dCcD_GObjInfFv();
extern "C" void ResetAtHit__12dCcD_GObjInfFv();
extern "C" void GetAtHitObj__12dCcD_GObjInfFv();
extern "C" void ResetTgHit__12dCcD_GObjInfFv();
extern "C" void ResetCoHit__12dCcD_GObjInfFv();
extern "C" void Set__8dCcD_SphFRC11dCcD_SrcSph();
extern "C" void Init__10dPathCurveFP5dPath();
extern "C" void bSpline2__10dPathCurveFf();
extern "C" void Start__9dCamera_cFv();
extern "C" void Stop__9dCamera_cFv();
extern "C" void SetTrimSize__9dCamera_cFl();
extern "C" void Set__9dCamera_cF4cXyz4cXyz();
extern "C" void Set__9dCamera_cF4cXyz4cXyzfs();
extern "C" void Reset__9dCamera_cF4cXyz4cXyz();
extern "C" void dCam_getBody__Fv();
extern "C" void Eye__9dCamera_cFv();
extern "C" void Center__9dCamera_cFv();
extern "C" void settingTevStruct__18dScnKy_env_light_cFiP4cXyzP12dKy_tevstr_c();
extern "C" void setLightTevColorType_MAJI__18dScnKy_env_light_cFP12J3DModelDataP12dKy_tevstr_c();
extern "C" void __ct__10dMsgFlow_cFv();
extern "C" void init__10dMsgFlow_cFP10fopAc_ac_ciiPP10fopAc_ac_c();
extern "C" void doFlow__10dMsgFlow_cFP10fopAc_ac_cPP10fopAc_ac_ci();
extern "C" void GetAc__8cCcD_ObjFv();
extern "C" void Set__4cCcSFP8cCcD_Obj();
extern "C" void __pl__4cXyzCFRC3Vec();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __ml__4cXyzCFf();
extern "C" void __dv__4cXyzCFf();
extern "C" void normalize__4cXyzFv();
extern "C" bool __ne__4cXyzCFRC3Vec();
extern "C" void cM_atan2s__Fff();
extern "C" void cM_rndF__Ff();
extern "C" void cM_rndFX__Ff();
extern "C" void SetPos__11cBgS_GndChkFPC3Vec();
extern "C" void SetPos__11cBgS_GndChkFPC4cXyz();
extern "C" void SetC__8cM3dGSphFRC4cXyz();
extern "C" void SetR__8cM3dGSphFf();
extern "C" void cLib_addCalc2__FPffff();
extern "C" void cLib_addCalcPos__FP4cXyzRC4cXyzfff();
extern "C" void cLib_addCalcPos2__FP4cXyzRC4cXyzff();
extern "C" void cLib_addCalcAngleS__FPsssss();
extern "C" void cLib_addCalcAngleS2__FPssss();
extern "C" void cLib_chaseS__FPsss();
extern "C" void cLib_chaseF__FPfff();
extern "C" void cLib_chasePos__FP4cXyzRC4cXyzf();
extern "C" void cLib_chaseAngleS__FPsss();
extern "C" void cLib_targetAngleY__FPC3VecPC3Vec();
extern "C" void cLib_targetAngleX__FPC4cXyzPC4cXyz();
extern "C" void cLib_offsetPos__FP4cXyzPC4cXyzsPC4cXyz();
extern "C" void cLib_distanceAngleS__Fss();
extern "C" void seStart__7Z2SeMgrF10JAISoundIDPC3VecUlScffffUc();
extern "C" void changeBgmStatus__8Z2SeqMgrFl();
extern "C" void __ct__10Z2CreatureFv();
extern "C" void init__10Z2CreatureFP3VecP3VecUcUc();
extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void checkPass__12J3DFrameCtrlFf();
extern "C" void __construct_array();
extern "C" void _savegpr_23();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_23();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" u8 saveBitLabels__16dSv_event_flag_c[1644 + 4 /* padding */];
extern "C" extern void* __vt__8dCcD_Sph[36];
extern "C" extern void* __vt__9dCcD_Stts[11];
extern "C" extern void* __vt__12cCcD_SphAttr[25];
extern "C" extern void* __vt__14cCcD_ShapeAttr[22];
extern "C" extern void* __vt__9cCcD_Stts[8];
extern "C" u8 now__14mDoMtx_stack_c[48];
extern "C" u8 mSimpleTexObj__21dDlst_shadowControl_c[32];
extern "C" u8 mCurrentMtx__6J3DSys[48];
extern "C" u8 sincosTable___5JMath[65536];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" void getType__13daNpc_Hanjo_cFv();
extern "C" void __register_global_object();

//
// Declarations:
//

/* ############################################################################################## */
/* 80B0C1C4-80B0C1C8 000000 0004+00 36/36 0/0 0/0 .rodata          @3999 */
SECTION_RODATA static f32 const lit_3999 = 1.0f;
COMPILER_STRIP_GATE(0x80B0C1C4, &lit_3999);

/* 80B0C1C8-80B0C1CC 000004 0004+00 0/1 0/0 0/0 .rodata          @4000 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4000 = 19.0f;
COMPILER_STRIP_GATE(0x80B0C1C8, &lit_4000);
#pragma pop

/* 80B0C1CC-80B0C1D0 000008 0004+00 0/1 0/0 0/0 .rodata          @4001 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4001 = 38.0f;
COMPILER_STRIP_GATE(0x80B0C1CC, &lit_4001);
#pragma pop

/* 80B0C1D0-80B0C1D4 00000C 0004+00 0/1 0/0 0/0 .rodata          @4002 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4002 = 91.0f;
COMPILER_STRIP_GATE(0x80B0C1D0, &lit_4002);
#pragma pop

/* 80B0C1D4-80B0C1D8 000010 0004+00 0/1 0/0 0/0 .rodata          @4003 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4003 = 90.0f;
COMPILER_STRIP_GATE(0x80B0C1D4, &lit_4003);
#pragma pop

/* 80B0C1D8-80B0C1DC 000014 0004+00 2/12 0/0 0/0 .rodata          @4004 */
SECTION_RODATA static f32 const lit_4004 = 30.0f;
COMPILER_STRIP_GATE(0x80B0C1D8, &lit_4004);

/* 80B0C1DC-80B0C1E0 000018 0004+00 1/9 0/0 0/0 .rodata          @4005 */
SECTION_RODATA static f32 const lit_4005 = 20.0f;
COMPILER_STRIP_GATE(0x80B0C1DC, &lit_4005);

/* 80B0C1E0-80B0C1E4 00001C 0004+00 0/11 0/0 0/0 .rodata          @4006 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4006 = 50.0f;
COMPILER_STRIP_GATE(0x80B0C1E0, &lit_4006);
#pragma pop

/* 80B0C1E4-80B0C1E8 000020 0004+00 0/1 0/0 0/0 .rodata          @4007 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4007 = 15.0f;
COMPILER_STRIP_GATE(0x80B0C1E4, &lit_4007);
#pragma pop

/* 80B0C1E8-80B0C1EC 000024 0004+00 0/1 0/0 0/0 .rodata          @4008 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4008 = 256.0f;
COMPILER_STRIP_GATE(0x80B0C1E8, &lit_4008);
#pragma pop

/* 80B0C1EC-80B0C1F0 000028 0004+00 0/6 0/0 0/0 .rodata          @4009 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4009 = 700.0f;
COMPILER_STRIP_GATE(0x80B0C1EC, &lit_4009);
#pragma pop

/* 80B0C1F0-80B0C1F4 00002C 0004+00 0/2 0/0 0/0 .rodata          @4010 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4010 = 4096.0f;
COMPILER_STRIP_GATE(0x80B0C1F0, &lit_4010);
#pragma pop

/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3A0 = "Npc_tk";
SECTION_DEAD static char const* const stringBase_80B0C3A7 = "Wait";
SECTION_DEAD static char const* const stringBase_80B0C3AC = "Circle";
SECTION_DEAD static char const* const stringBase_80B0C3B3 = "Nearly";
SECTION_DEAD static char const* const stringBase_80B0C3BA = "Land";
#pragma pop

/* 80B0C3F4-80B0C404 -00001 0010+00 1/1 0/0 0/0 .data            action_table$4814 */
SECTION_DATA static void* action_table[4] = {
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0x7),
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0xC),
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0x13),
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0x1A),
};

/* 80B0C404-80B0C40C -00001 0008+00 1/1 0/0 0/0 .data            action_table_w$4815 */
SECTION_DATA static void* action_table_w[2] = {
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0x7),
    (void*)(((char*)&d_a_npc_tk__stringBase0) + 0xC),
};

/* 80B0C40C-80B0C41C 000018 0010+00 1/1 0/0 0/0 .data            taka_attack_dist$4969 */
SECTION_DATA static u8 taka_attack_dist[16] = {
    0x45, 0xA2, 0x80, 0x00, 0x45, 0x1C, 0x40, 0x00, 0x44, 0xE1, 0x00, 0x00, 0x45, 0x3B, 0x80, 0x00,
};

/* 80B0C41C-80B0C424 000028 0008+00 1/1 0/0 0/0 .data            w_eff_id$5014 */
SECTION_DATA static u8 w_eff_id[8] = {
    0x01, 0xB8, 0x01, 0xB9, 0x01, 0xBA, 0x01, 0xBB,
};

/* 80B0C424-80B0C478 -00001 0054+00 1/1 0/0 0/0 .data            @7271 */
SECTION_DATA static void* lit_7271[21] = {
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x80),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0xA0),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x2F8),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x374),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x3E8),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x468),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x4E8),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1630),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x64C),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x738),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x928),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x93C),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x93C),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1010),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x10CC),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1188),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1264),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x13D0),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1630),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x1630),
    (void*)(((char*)executeWolfPerch__10daNPC_TK_cFv) + 0x14DC),
};

/* 80B0C478-80B0C49C -00001 0024+00 1/1 0/0 0/0 .data            @7455 */
SECTION_DATA static void* lit_7455[9] = {
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x84),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x11C),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x1DC),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x3F4),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x5FC),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x6B8),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x794),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x8A4),
    (void*)(((char*)executeResistanceDemo__10daNPC_TK_cFv) + 0x8EC),
};

/* 80B0C49C-80B0C4D4 -00001 0038+00 1/1 0/0 0/0 .data            @7877 */
SECTION_DATA static void* lit_7877[14] = {
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x70),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x80),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0xFC),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x124),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x138),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x14C),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x160),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x174),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x188),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x19C),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x1B0),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x1C4),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x1D0),
    (void*)(((char*)action__10daNPC_TK_cFv) + 0x1DC),
};

/* 80B0C4D4-80B0C514 0000E0 0040+00 1/1 0/0 0/0 .data            cc_sph_src$8096 */
static dCcD_SrcSph cc_sph_src = {
    {
        {0x0, {{AT_TYPE_THROW_OBJ, 0x1, 0x1f}, {0x0, 0x0}, 0x69}}, // mObj
        {dCcD_SE_METAL, 0x0, 0x0, 0x0, 0x0}, // mGObjAt
        {dCcD_SE_NONE, 0x0, 0x0, 0x0, 0x0}, // mGObjTg
        {0x0}, // mGObjCo
    }, // mObjInf
    {
        {{0.0f, 0.0f, 0.0f}, 80.0f} // mSph
    } // mSphAttr
};

/* 80B0C514-80B0C534 -00001 0020+00 1/0 0/0 0/0 .data            l_daNPC_TK_Method */
static actor_method_class l_daNPC_TK_Method = {
    (process_method_func)daNPC_TK_Create__FP10daNPC_TK_c,
    (process_method_func)daNPC_TK_Delete__FP10daNPC_TK_c,
    (process_method_func)daNPC_TK_Execute__FP10daNPC_TK_c,
    (process_method_func)daNPC_TK_IsDelete__FP10daNPC_TK_c,
    (process_method_func)daNPC_TK_Draw__FP10daNPC_TK_c,
};

/* 80B0C534-80B0C564 -00001 0030+00 0/0 0/0 1/0 .data            g_profile_NPC_TK */
extern actor_process_profile_definition g_profile_NPC_TK = {
  fpcLy_CURRENT_e,        // mLayerID
  6,                      // mListID
  fpcPi_CURRENT_e,        // mListPrio
  PROC_NPC_TK,            // mProcName
  &g_fpcLf_Method.base,  // sub_method
  sizeof(daNPC_TK_c),     // mSize
  0,                      // mSizeOther
  0,                      // mParameters
  &g_fopAc_Method.base,   // sub_method
  703,                    // mPriority
  &l_daNPC_TK_Method,     // sub_method
  0x08044000,             // mStatus
  fopAc_NPC_e,            // mActorType
  fopAc_CULLBOX_CUSTOM_e, // cullType
};

/* 80B0C564-80B0C570 000170 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGSph */
SECTION_DATA extern void* __vt__8cM3dGSph[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGSphFv,
};

/* 80B0C570-80B0C57C 00017C 000C+00 2/2 0/0 0/0 .data            __vt__8cM3dGAab */
SECTION_DATA extern void* __vt__8cM3dGAab[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8cM3dGAabFv,
};

/* 80B0C57C-80B0C5A0 000188 0024+00 2/2 0/0 0/0 .data            __vt__12dBgS_ObjAcch */
SECTION_DATA extern void* __vt__12dBgS_ObjAcch[9] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__12dBgS_ObjAcchFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B0C190,
    (void*)NULL,
    (void*)NULL,
    (void*)func_80B0C188,
};

/* 80B0C5A0-80B0C5AC 0001AC 000C+00 2/2 0/0 0/0 .data            __vt__14daNPC_TK_HIO_c */
SECTION_DATA extern void* __vt__14daNPC_TK_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14daNPC_TK_HIO_cFv,
};

/* 80B0140C-80B01498 0000EC 008C+00 1/1 0/0 0/0 .text            __ct__14daNPC_TK_HIO_cFv */
daNPC_TK_HIO_c::daNPC_TK_HIO_c() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C1F4-80B0C1F8 000030 0004+00 4/28 0/0 0/0 .rodata          @4024 */
SECTION_RODATA static u8 const lit_4024[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};
COMPILER_STRIP_GATE(0x80B0C1F4, &lit_4024);

/* 80B0C1F8-80B0C1FC 000034 0004+00 2/6 0/0 0/0 .rodata          @4025 */
SECTION_RODATA static f32 const lit_4025 = -1.0f;
COMPILER_STRIP_GATE(0x80B0C1F8, &lit_4025);

/* 80B01498-80B0153C 000178 00A4+00 14/14 0/0 0/0 .text            setBck__10daNPC_TK_cFiUcff */
void daNPC_TK_c::setBck(int param_0, u8 param_1, f32 param_2, f32 param_3) {
    // NONMATCHING
}

/* 80B0153C-80B01598 00021C 005C+00 6/6 0/0 0/0 .text            checkBck__10daNPC_TK_cFi */
void daNPC_TK_c::checkBck(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C1FC-80B0C200 000038 0004+00 0/10 0/0 0/0 .rodata          @4055 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4055 = 100.0f;
COMPILER_STRIP_GATE(0x80B0C1FC, &lit_4055);
#pragma pop

/* 80B0C200-80B0C204 00003C 0004+00 0/6 0/0 0/0 .rodata          @4056 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4056 = 400.0f;
COMPILER_STRIP_GATE(0x80B0C200, &lit_4056);
#pragma pop

/* 80B01598-80B01678 000278 00E0+00 1/1 0/0 0/0 .text            draw__10daNPC_TK_cFv */
void daNPC_TK_c::draw() {
    // NONMATCHING
}

/* 80B01678-80B016B4 000358 003C+00 2/2 0/0 0/0 .text            __dt__4cXyzFv */
// cXyz::~cXyz() {
extern "C" void __dt__4cXyzFv() {
    // NONMATCHING
}

/* 80B016B4-80B016D4 000394 0020+00 1/0 0/0 0/0 .text            daNPC_TK_Draw__FP10daNPC_TK_c */
static void daNPC_TK_Draw(daNPC_TK_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C204-80B0C208 000040 0004+00 0/1 0/0 0/0 .rodata          @4107 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4107 = -1000000000.0f;
COMPILER_STRIP_GATE(0x80B0C204, &lit_4107);
#pragma pop

/* 80B0C208-80B0C20C 000044 0004+00 0/4 0/0 0/0 .rodata          @4108 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4108 = 300.0f;
COMPILER_STRIP_GATE(0x80B0C208, &lit_4108);
#pragma pop

/* 80B016D4-80B01878 0003B4 01A4+00 1/1 0/0 0/0 .text            checkBeforeBg__10daNPC_TK_cFv */
void daNPC_TK_c::checkBeforeBg() {
    // NONMATCHING
}

/* 80B01878-80B018F4 000558 007C+00 15/15 0/0 0/0 .text            setActionMode__10daNPC_TK_cFi */
void daNPC_TK_c::setActionMode(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C20C-80B0C214 000048 0008+00 0/11 0/0 0/0 .rodata          @4214 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4214[8] = {
    0x3F, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B0C20C, &lit_4214);
#pragma pop

/* 80B0C214-80B0C21C 000050 0008+00 0/11 0/0 0/0 .rodata          @4215 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4215[8] = {
    0x40, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B0C214, &lit_4215);
#pragma pop

/* 80B0C21C-80B0C224 000058 0008+00 0/11 0/0 0/0 .rodata          @4216 */
#pragma push
#pragma force_active on
SECTION_RODATA static u8 const lit_4216[8] = {
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B0C21C, &lit_4216);
#pragma pop

/* 80B0C224-80B0C228 000060 0004+00 0/1 0/0 0/0 .rodata          @4217 */
#pragma push
#pragma force_active on
SECTION_RODATA static u32 const lit_4217 = 0x2EAFEBFF;
COMPILER_STRIP_GATE(0x80B0C224, &lit_4217);
#pragma pop

/* 80B018F4-80B01C84 0005D4 0390+00 1/1 0/0 0/0 .text
 * setAddCalcSpeedXZ__10daNPC_TK_cFR4cXyzRC4cXyzfff             */
void daNPC_TK_c::setAddCalcSpeedXZ(cXyz& param_0, cXyz const& param_1, f32 param_2, f32 param_3,
                                       f32 param_4) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C228-80B0C22C 000064 0004+00 0/1 0/0 0/0 .rodata          @4230 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4230 = 8.0f;
COMPILER_STRIP_GATE(0x80B0C228, &lit_4230);
#pragma pop

/* 80B0C22C-80B0C230 000068 0004+00 1/18 0/0 0/0 .rodata          @4231 */
SECTION_RODATA static f32 const lit_4231 = 3.0f;
COMPILER_STRIP_GATE(0x80B0C22C, &lit_4231);

/* 80B01C84-80B01D84 000964 0100+00 2/2 0/0 0/0 .text chaseTargetPos__10daNPC_TK_cF4cXyzffs */
void daNPC_TK_c::chaseTargetPos(cXyz param_0, f32 param_1, f32 param_2, s16 param_3) {
    // NONMATCHING
}

/* 80B01D84-80B01DA0 000A64 001C+00 3/3 0/0 0/0 .text            getMasterPointer__10daNPC_TK_cFv */
void daNPC_TK_c::getMasterPointer() {
    // NONMATCHING
}

/* 80B01DA0-80B01E48 000A80 00A8+00 2/2 0/0 0/0 .text setMasterShoulder__10daNPC_TK_cFP4cXyz */
void daNPC_TK_c::setMasterShoulder(cXyz* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C230-80B0C234 00006C 0004+00 0/3 0/0 0/0 .rodata          @4279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4279 = 2.0f;
COMPILER_STRIP_GATE(0x80B0C230, &lit_4279);
#pragma pop

/* 80B0C234-80B0C238 000070 0004+00 0/2 0/0 0/0 .rodata          @4280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4280 = -20.0f;
COMPILER_STRIP_GATE(0x80B0C234, &lit_4280);
#pragma pop

/* 80B0C238-80B0C23C 000074 0004+00 0/11 0/0 0/0 .rodata          @4281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4281 = 10.0f;
COMPILER_STRIP_GATE(0x80B0C238, &lit_4281);
#pragma pop

/* 80B01E48-80B01EF4 000B28 00AC+00 3/3 0/0 0/0 .text            setAwayAction__10daNPC_TK_cFi */
void daNPC_TK_c::setAwayAction(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C23C-80B0C240 000078 0004+00 0/10 0/0 0/0 .rodata          @4314 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4314 = 5.0f;
COMPILER_STRIP_GATE(0x80B0C23C, &lit_4314);
#pragma pop

/* 80B0C240-80B0C244 00007C 0004+00 0/2 0/0 0/0 .rodata          @4315 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4315 = 7.0f;
COMPILER_STRIP_GATE(0x80B0C240, &lit_4315);
#pragma pop

/* 80B01EF4-80B0207C 000BD4 0188+00 1/1 0/0 0/0 .text            setFlySE__10daNPC_TK_cFv */
void daNPC_TK_c::setFlySE() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C5B8-80B0C5BC 000008 0001+03 2/2 0/0 0/0 .bss             @1109 */
static u8 lit_1109[1 + 3 /* padding */];

/* 80B0C5BC-80B0C5C0 00000C 0001+03 0/0 0/0 0/0 .bss             @1107 */
#pragma push
#pragma force_active on
static u8 lit_1107[1 + 3 /* padding */];
#pragma pop

/* 80B0C5C0-80B0C5C4 000010 0001+03 0/0 0/0 0/0 .bss             @1105 */
#pragma push
#pragma force_active on
static u8 lit_1105[1 + 3 /* padding */];
#pragma pop

/* 80B0C5C4-80B0C5C8 000014 0001+03 0/0 0/0 0/0 .bss             @1104 */
#pragma push
#pragma force_active on
static u8 lit_1104[1 + 3 /* padding */];
#pragma pop

/* 80B0C5C8-80B0C5CC 000018 0001+03 0/0 0/0 0/0 .bss             @1099 */
#pragma push
#pragma force_active on
static u8 lit_1099[1 + 3 /* padding */];
#pragma pop

/* 80B0C5CC-80B0C5D0 00001C 0001+03 0/0 0/0 0/0 .bss             @1097 */
#pragma push
#pragma force_active on
static u8 lit_1097[1 + 3 /* padding */];
#pragma pop

/* 80B0C5D0-80B0C5D4 000020 0001+03 0/0 0/0 0/0 .bss             @1095 */
#pragma push
#pragma force_active on
static u8 lit_1095[1 + 3 /* padding */];
#pragma pop

/* 80B0C5D4-80B0C5D8 000024 0001+03 0/0 0/0 0/0 .bss             @1094 */
#pragma push
#pragma force_active on
static u8 lit_1094[1 + 3 /* padding */];
#pragma pop

/* 80B0C5D8-80B0C5DC 000028 0001+03 0/0 0/0 0/0 .bss             @1057 */
#pragma push
#pragma force_active on
static u8 lit_1057[1 + 3 /* padding */];
#pragma pop

/* 80B0C5DC-80B0C5E0 00002C 0001+03 0/0 0/0 0/0 .bss             @1055 */
#pragma push
#pragma force_active on
static u8 lit_1055[1 + 3 /* padding */];
#pragma pop

/* 80B0C5E0-80B0C5E4 000030 0001+03 0/0 0/0 0/0 .bss             @1053 */
#pragma push
#pragma force_active on
static u8 lit_1053[1 + 3 /* padding */];
#pragma pop

/* 80B0C5E4-80B0C5E8 000034 0001+03 0/0 0/0 0/0 .bss             @1052 */
#pragma push
#pragma force_active on
static u8 lit_1052[1 + 3 /* padding */];
#pragma pop

/* 80B0C5E8-80B0C5EC 000038 0001+03 0/0 0/0 0/0 .bss             @1014 */
#pragma push
#pragma force_active on
static u8 lit_1014[1 + 3 /* padding */];
#pragma pop

/* 80B0C5EC-80B0C5F0 00003C 0001+03 0/0 0/0 0/0 .bss             @1012 */
#pragma push
#pragma force_active on
static u8 lit_1012[1 + 3 /* padding */];
#pragma pop

/* 80B0C5F0-80B0C5F4 000040 0001+03 0/0 0/0 0/0 .bss             @1010 */
#pragma push
#pragma force_active on
static u8 lit_1010[1 + 3 /* padding */];
#pragma pop

/* 80B0C5F4-80B0C5F8 -00001 0004+00 0/2 0/0 0/0 .bss             None */
#pragma push
#pragma force_active on
/* 80B0C5F4 0001+01 data_80B0C5F4 @1009 */
/* 80B0C5F6 0002+00 data_80B0C5F6 m_near_angle */
static u8 struct_80B0C5F4[4];
#pragma pop

/* 80B0C5F8-80B0C5FC 000048 0004+00 0/2 0/0 0/0 .bss             m_near_actor */
#pragma push
#pragma force_active on
static u8 m_near_actor[4];
#pragma pop

/* 80B0C5FC-80B0C600 00004C 0004+00 2/2 0/0 0/0 .bss             None */
static u8 data_80B0C5FC[4];

/* 80B0C600-80B0C60C 000050 000C+00 1/1 0/0 0/0 .bss             @3994 */
static u8 lit_3994[12];

/* 80B0C60C-80B0C64C 00005C 0040+00 8/10 0/0 0/0 .bss             l_HIO */
static u8 l_HIO[64];

/* 80B0207C-80B021A0 000D5C 0124+00 1/1 0/0 0/0 .text
 * checkRangeOfTake__FP10fopAc_ac_cP10fopAc_ac_c                */
static void checkRangeOfTake(fopAc_ac_c* param_0, fopAc_ac_c* param_1) {
    // NONMATCHING
}

/* 80B021A0-80B02208 000E80 0068+00 1/1 0/0 0/0 .text            s_obj_sub__FPvPv */
static void s_obj_sub(void* param_0, void* param_1) {
    // NONMATCHING
}

/* 80B02208-80B02254 000EE8 004C+00 3/3 0/0 0/0 .text            s_hanjo__FPvPv */
static void s_hanjo(void* param_0, void* param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C244-80B0C248 000080 0004+00 1/7 0/0 0/0 .rodata          @4459 */
SECTION_RODATA static f32 const lit_4459 = 500.0f;
COMPILER_STRIP_GATE(0x80B0C244, &lit_4459);

/* 80B0C248-80B0C24C 000084 0004+00 0/12 0/0 0/0 .rodata          @4460 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4460 = 200.0f;
COMPILER_STRIP_GATE(0x80B0C248, &lit_4460);
#pragma pop

/* 80B0C24C-80B0C250 000088 0004+00 0/1 0/0 0/0 .rodata          @4461 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4461 = 27.0f;
COMPILER_STRIP_GATE(0x80B0C24C, &lit_4461);
#pragma pop

/* 80B0C250-80B0C254 00008C 0004+00 0/3 0/0 0/0 .rodata          @4462 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4462 = 2000.0f;
COMPILER_STRIP_GATE(0x80B0C250, &lit_4462);
#pragma pop

/* 80B02254-80B026F8 000F34 04A4+00 1/1 0/0 0/0 .text            executeFly__10daNPC_TK_cFv */
void daNPC_TK_c::executeFly() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C254-80B0C258 000090 0004+00 0/1 0/0 0/0 .rodata          @4518 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4518 = 3000.0f;
COMPILER_STRIP_GATE(0x80B0C254, &lit_4518);
#pragma pop

/* 80B0C258-80B0C25C 000094 0004+00 0/1 0/0 0/0 .rodata          @4519 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4519 = -5000.0f;
COMPILER_STRIP_GATE(0x80B0C258, &lit_4519);
#pragma pop

/* 80B0C25C-80B0C260 000098 0004+00 0/1 0/0 0/0 .rodata          @4520 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4520 = -350.0f;
COMPILER_STRIP_GATE(0x80B0C25C, &lit_4520);
#pragma pop

/* 80B0C260-80B0C264 00009C 0004+00 0/1 0/0 0/0 .rodata          @4521 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4521 = -600.0f;
COMPILER_STRIP_GATE(0x80B0C260, &lit_4521);
#pragma pop

/* 80B0C264-80B0C268 0000A0 0004+00 0/2 0/0 0/0 .rodata          @4522 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4522 = -32.0f;
COMPILER_STRIP_GATE(0x80B0C264, &lit_4522);
#pragma pop

/* 80B0C268-80B0C26C 0000A4 0004+00 0/5 0/0 0/0 .rodata          @4523 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4523 = 150.0f;
COMPILER_STRIP_GATE(0x80B0C268, &lit_4523);
#pragma pop

/* 80B0C26C-80B0C274 0000A8 0008+00 1/3 0/0 0/0 .rodata          @4525 */
SECTION_RODATA static u8 const lit_4525[8] = {
    0x43, 0x30, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00,
};
COMPILER_STRIP_GATE(0x80B0C26C, &lit_4525);

/* 80B026F8-80B02B5C 0013D8 0464+00 1/1 0/0 0/0 .text            initPerchDemo__10daNPC_TK_cFi */
void daNPC_TK_c::initPerchDemo(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C274-80B0C278 0000B0 0004+00 0/2 0/0 0/0 .rodata          @4803 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4803 = -5.0f;
COMPILER_STRIP_GATE(0x80B0C274, &lit_4803);
#pragma pop

/* 80B0C278-80B0C27C 0000B4 0004+00 0/2 0/0 0/0 .rodata          @4804 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4804 = 3.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B0C278, &lit_4804);
#pragma pop

/* 80B0C27C-80B0C280 0000B8 0004+00 0/1 0/0 0/0 .rodata          @4805 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4805 = -3.0f;
COMPILER_STRIP_GATE(0x80B0C27C, &lit_4805);
#pragma pop

/* 80B0C280-80B0C284 0000BC 0004+00 0/3 0/0 0/0 .rodata          @4806 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4806 = 60.0f;
COMPILER_STRIP_GATE(0x80B0C280, &lit_4806);
#pragma pop

/* 80B0C284-80B0C288 0000C0 0004+00 0/1 0/0 0/0 .rodata          @4807 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4807 = 13.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B0C284, &lit_4807);
#pragma pop

/* 80B0C288-80B0C28C 0000C4 0004+00 0/1 0/0 0/0 .rodata          @4808 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4808 = 6.0f;
COMPILER_STRIP_GATE(0x80B0C288, &lit_4808);
#pragma pop

/* 80B0C28C-80B0C290 0000C8 0004+00 0/1 0/0 0/0 .rodata          @4809 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4809 = 4.0f;
COMPILER_STRIP_GATE(0x80B0C28C, &lit_4809);
#pragma pop

/* 80B02B5C-80B03658 00183C 0AFC+00 1/1 0/0 0/0 .text            executePerchDemo__10daNPC_TK_cFi */
void daNPC_TK_c::executePerchDemo(int param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3BF = "NPC_TK";
#pragma pop

/* 80B03658-80B03754 002338 00FC+00 3/3 0/0 0/0 .text            executePerch__10daNPC_TK_cFv */
void daNPC_TK_c::executePerch() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C290-80B0C294 0000CC 0004+00 0/4 0/0 0/0 .rodata          @4883 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_4883 = 0.5f;
COMPILER_STRIP_GATE(0x80B0C290, &lit_4883);
#pragma pop

/* 80B03754-80B039A8 002434 0254+00 1/1 0/0 0/0 .text            executeHandOn__10daNPC_TK_cFv */
void daNPC_TK_c::executeHandOn() {
    // NONMATCHING
}

/* 80B039A8-80B03A70 002688 00C8+00 1/1 0/0 0/0 .text            checkWaterSurface__10daNPC_TK_cFf
 */
void daNPC_TK_c::checkWaterSurface(f32 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C294-80B0C298 0000D0 0004+00 0/1 0/0 0/0 .rodata          @5277 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5277 = -50.0f;
COMPILER_STRIP_GATE(0x80B0C294, &lit_5277);
#pragma pop

/* 80B0C298-80B0C29C 0000D4 0004+00 0/2 0/0 0/0 .rodata          @5278 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5278 = -40.0f;
COMPILER_STRIP_GATE(0x80B0C298, &lit_5278);
#pragma pop

/* 80B0C29C-80B0C2A0 0000D8 0004+00 0/1 0/0 0/0 .rodata          @5279 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5279 = 2919.0f;
COMPILER_STRIP_GATE(0x80B0C29C, &lit_5279);
#pragma pop

/* 80B0C2A0-80B0C2A4 0000DC 0004+00 0/1 0/0 0/0 .rodata          @5280 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5280 = 657.0f;
COMPILER_STRIP_GATE(0x80B0C2A0, &lit_5280);
#pragma pop

/* 80B0C2A4-80B0C2A8 0000E0 0004+00 0/1 0/0 0/0 .rodata          @5281 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5281 = -2095.0f;
COMPILER_STRIP_GATE(0x80B0C2A4, &lit_5281);
#pragma pop

/* 80B0C2A8-80B0C2AC 0000E4 0004+00 0/1 0/0 0/0 .rodata          @5282 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5282 = 1553.0f;
COMPILER_STRIP_GATE(0x80B0C2A8, &lit_5282);
#pragma pop

/* 80B0C2AC-80B0C2B0 0000E8 0004+00 0/1 0/0 0/0 .rodata          @5283 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5283 = 659.0f;
COMPILER_STRIP_GATE(0x80B0C2AC, &lit_5283);
#pragma pop

/* 80B0C2B0-80B0C2B4 0000EC 0004+00 0/1 0/0 0/0 .rodata          @5284 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5284 = -466.0f;
COMPILER_STRIP_GATE(0x80B0C2B0, &lit_5284);
#pragma pop

/* 80B0C2B4-80B0C2B8 0000F0 0004+00 0/1 0/0 0/0 .rodata          @5285 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5285 = 1750.0f;
COMPILER_STRIP_GATE(0x80B0C2B4, &lit_5285);
#pragma pop

/* 80B0C2B8-80B0C2BC 0000F4 0004+00 0/1 0/0 0/0 .rodata          @5286 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5286 = 5283.0f;
COMPILER_STRIP_GATE(0x80B0C2B8, &lit_5286);
#pragma pop

/* 80B0C2BC-80B0C2C0 0000F8 0004+00 0/4 0/0 0/0 .rodata          @5287 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5287 = 40.0f;
COMPILER_STRIP_GATE(0x80B0C2BC, &lit_5287);
#pragma pop

/* 80B0C2C0-80B0C2C4 0000FC 0004+00 0/3 0/0 0/0 .rodata          @5288 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5288 = 1.5f;
COMPILER_STRIP_GATE(0x80B0C2C0, &lit_5288);
#pragma pop

/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3C6 = "F_SP103";
#pragma pop

/* 80B0C64C-80B0C65C 00009C 000C+04 0/1 0/0 0/0 .bss             @5011 */
#pragma push
#pragma force_active on
static u8 lit_5011[12 + 4 /* padding */];
#pragma pop

/* 80B0C65C-80B0C668 0000AC 000C+00 0/1 0/0 0/0 .bss             sc$5010 */
#pragma push
#pragma force_active on
static u8 sc[12];
#pragma pop

/* 80B03A70-80B048BC 002750 0E4C+00 1/1 0/0 0/0 .text            executeAttack__10daNPC_TK_cFv */
void daNPC_TK_c::executeAttack() {
    // NONMATCHING
}

/* 80B048BC-80B04BF8 00359C 033C+00 1/1 0/0 0/0 .text            executeAway__10daNPC_TK_cFv */
void daNPC_TK_c::executeAway() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2C4-80B0C2C8 000100 0004+00 0/1 0/0 0/0 .rodata          @5476 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5476 = 2048.0f;
COMPILER_STRIP_GATE(0x80B0C2C4, &lit_5476);
#pragma pop

/* 80B0C2C8-80B0C2CC 000104 0004+00 0/2 0/0 0/0 .rodata          @5477 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5477 = -60.0f;
COMPILER_STRIP_GATE(0x80B0C2C8, &lit_5477);
#pragma pop

/* 80B0C2CC-80B0C2D0 000108 0004+00 0/1 0/0 0/0 .rodata          @5478 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5478 = -85.0f;
COMPILER_STRIP_GATE(0x80B0C2CC, &lit_5478);
#pragma pop

/* 80B0C2D0-80B0C2D4 00010C 0004+00 0/2 0/0 0/0 .rodata          @5479 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5479 = -35.0f;
COMPILER_STRIP_GATE(0x80B0C2D0, &lit_5479);
#pragma pop

/* 80B0C2D4-80B0C2D8 000110 0004+00 0/1 0/0 0/0 .rodata          @5480 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5480 = -45.0f;
COMPILER_STRIP_GATE(0x80B0C2D4, &lit_5480);
#pragma pop

/* 80B04BF8-80B04F64 0038D8 036C+00 1/1 0/0 0/0 .text            setCarryActorMtx__10daNPC_TK_cFv */
void daNPC_TK_c::setCarryActorMtx() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2D8-80B0C2DC 000114 0004+00 0/2 0/0 0/0 .rodata          @5506 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5506 = 55.0f;
COMPILER_STRIP_GATE(0x80B0C2D8, &lit_5506);
#pragma pop

/* 80B0C2DC-80B0C2E0 000118 0004+00 0/1 0/0 0/0 .rodata          @5507 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5507 = 45.0f;
COMPILER_STRIP_GATE(0x80B0C2DC, &lit_5507);
#pragma pop

/* 80B04F64-80B04FA8 003C44 0044+00 2/2 0/0 0/0 .text            getTakePosY__10daNPC_TK_cFv */
void daNPC_TK_c::getTakePosY() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2E0-80B0C2E4 00011C 0004+00 0/1 0/0 0/0 .rodata          @5532 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5532 = 210.0f;
COMPILER_STRIP_GATE(0x80B0C2E0, &lit_5532);
#pragma pop

/* 80B0C2E4-80B0C2E8 000120 0004+00 0/1 0/0 0/0 .rodata          @5533 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5533 = 250.0f;
COMPILER_STRIP_GATE(0x80B0C2E4, &lit_5533);
#pragma pop

/* 80B04FA8-80B04FEC 003C88 0044+00 1/1 0/0 0/0 .text            getTakeOffPosY__10daNPC_TK_cFv */
void daNPC_TK_c::getTakeOffPosY() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2E8-80B0C2EC 000124 0004+00 0/1 0/0 0/0 .rodata          @5823 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5823 = 18.0f;
COMPILER_STRIP_GATE(0x80B0C2E8, &lit_5823);
#pragma pop

/* 80B04FEC-80B05BD0 003CCC 0BE4+00 1/1 0/0 0/0 .text            executeBack__10daNPC_TK_cFv */
void daNPC_TK_c::executeBack() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2EC-80B0C2F0 000128 0004+00 0/1 0/0 0/0 .rodata          @5855 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_5855 = 23.0f;
COMPILER_STRIP_GATE(0x80B0C2EC, &lit_5855);
#pragma pop

/* 80B05BD0-80B05C7C 0048B0 00AC+00 5/5 0/0 0/0 .text            getHanjoHandPos__10daNPC_TK_cFv */
void daNPC_TK_c::getHanjoHandPos() {
    // NONMATCHING
}

/* 80B05C7C-80B05EC8 00495C 024C+00 1/1 0/0 0/0 .text            executeStayHanjo__10daNPC_TK_cFv */
void daNPC_TK_c::executeStayHanjo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C2F0-80B0C2F4 00012C 0004+00 0/1 0/0 0/0 .rodata          @6171 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6171 = 35.0f;
COMPILER_STRIP_GATE(0x80B0C2F0, &lit_6171);
#pragma pop

/* 80B0C2F4-80B0C2F8 000130 0004+00 0/1 0/0 0/0 .rodata          @6172 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6172 = 1800.0f;
COMPILER_STRIP_GATE(0x80B0C2F4, &lit_6172);
#pragma pop

/* 80B0C2F8-80B0C2FC 000134 0004+00 0/1 0/0 0/0 .rodata          @6173 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6173 = 1500.0f;
COMPILER_STRIP_GATE(0x80B0C2F8, &lit_6173);
#pragma pop

/* 80B0C2FC-80B0C300 000138 0004+00 0/1 0/0 0/0 .rodata          @6174 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6174 = -10.0f;
COMPILER_STRIP_GATE(0x80B0C2FC, &lit_6174);
#pragma pop

/* 80B05EC8-80B0686C 004BA8 09A4+00 1/1 0/0 0/0 .text            executeAttackLink__10daNPC_TK_cFv
 */
void daNPC_TK_c::executeAttackLink() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C300-80B0C304 00013C 0004+00 0/2 0/0 0/0 .rodata          @6367 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6367 = 800.0f;
COMPILER_STRIP_GATE(0x80B0C300, &lit_6367);
#pragma pop

/* 80B0C304-80B0C308 000140 0004+00 0/2 0/0 0/0 .rodata          @6368 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6368 = -800.0f;
COMPILER_STRIP_GATE(0x80B0C304, &lit_6368);
#pragma pop

/* 80B0C308-80B0C30C 000144 0004+00 0/3 0/0 0/0 .rodata          @6369 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6369 = -150.0f;
COMPILER_STRIP_GATE(0x80B0C308, &lit_6369);
#pragma pop

/* 80B0C30C-80B0C310 000148 0004+00 0/2 0/0 0/0 .rodata          @6370 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6370 = -70.0f;
COMPILER_STRIP_GATE(0x80B0C30C, &lit_6370);
#pragma pop

/* 80B0686C-80B07114 00554C 08A8+00 1/1 0/0 0/0 .text            executeBackHanjo__10daNPC_TK_cFv */
void daNPC_TK_c::executeBackHanjo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C310-80B0C314 00014C 0004+00 0/1 0/0 0/0 .rodata          @6430 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6430 = 2500.0f;
COMPILER_STRIP_GATE(0x80B0C310, &lit_6430);
#pragma pop

/* 80B0C314-80B0C318 000150 0004+00 0/1 0/0 0/0 .rodata          @6431 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6431 = 1050.0f;
COMPILER_STRIP_GATE(0x80B0C314, &lit_6431);
#pragma pop

/* 80B0C318-80B0C31C 000154 0004+00 0/2 0/0 0/0 .rodata          @6432 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6432 = 1200.0f;
COMPILER_STRIP_GATE(0x80B0C318, &lit_6432);
#pragma pop

/* 80B07114-80B072CC 005DF4 01B8+00 4/4 0/0 0/0 .text            checkAttackDemo__10daNPC_TK_cFv */
void daNPC_TK_c::checkAttackDemo() {
    // NONMATCHING
}

/* 80B072CC-80B07610 005FAC 0344+00 1/1 0/0 0/0 .text            executeAttackDemo__10daNPC_TK_cFv
 */
void daNPC_TK_c::executeAttackDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C31C-80B0C320 000158 0004+00 0/1 0/0 0/0 .rodata          @6789 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6789 = 3400.0f;
COMPILER_STRIP_GATE(0x80B0C31C, &lit_6789);
#pragma pop

/* 80B0C320-80B0C324 00015C 0004+00 0/1 0/0 0/0 .rodata          @6790 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6790 = -2000.0f;
COMPILER_STRIP_GATE(0x80B0C320, &lit_6790);
#pragma pop

/* 80B0C324-80B0C328 000160 0004+00 0/1 0/0 0/0 .rodata          @6791 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6791 = 900.0f;
COMPILER_STRIP_GATE(0x80B0C324, &lit_6791);
#pragma pop

/* 80B07610-80B08168 0062F0 0B58+00 1/1 0/0 0/0 .text executeBackHanjoDemo__10daNPC_TK_cFv */
void daNPC_TK_c::executeBackHanjoDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3CE = "TAKAYOSE2";
#pragma pop

/* 80B08168-80B08208 006E48 00A0+00 1/1 0/0 0/0 .text            executeWolfEvent__10daNPC_TK_cFv */
void daNPC_TK_c::executeWolfEvent() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C328-80B0C32C 000164 0004+00 0/2 0/0 0/0 .rodata          @6841 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6841 = 1.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B0C328, &lit_6841);
#pragma pop

/* 80B08208-80B082A4 006EE8 009C+00 1/1 0/0 0/0 .text            calcWolfDemoCam__10daNPC_TK_cFv */
void daNPC_TK_c::calcWolfDemoCam() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C32C-80B0C330 000168 0004+00 0/1 0/0 0/0 .rodata          @6860 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_6860 = 1.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B0C32C, &lit_6860);
#pragma pop

/* 80B082A4-80B0839C 006F84 00F8+00 1/1 0/0 0/0 .text            calcWolfDemoCam2__10daNPC_TK_cFv */
void daNPC_TK_c::calcWolfDemoCam2() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C330-80B0C334 00016C 0004+00 0/1 0/0 0/0 .rodata          @7260 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7260 = -500.0f;
COMPILER_STRIP_GATE(0x80B0C330, &lit_7260);
#pragma pop

/* 80B0C334-80B0C338 000170 0004+00 0/1 0/0 0/0 .rodata          @7261 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7261 = 610.0f;
COMPILER_STRIP_GATE(0x80B0C334, &lit_7261);
#pragma pop

/* 80B0C338-80B0C33C 000174 0004+00 0/1 0/0 0/0 .rodata          @7262 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7262 = 850.0f;
COMPILER_STRIP_GATE(0x80B0C338, &lit_7262);
#pragma pop

/* 80B0C33C-80B0C340 000178 0004+00 0/2 0/0 0/0 .rodata          @7263 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7263 = -200.0f;
COMPILER_STRIP_GATE(0x80B0C33C, &lit_7263);
#pragma pop

/* 80B0C340-80B0C344 00017C 0004+00 0/2 0/0 0/0 .rodata          @7264 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7264 = -100.0f;
COMPILER_STRIP_GATE(0x80B0C340, &lit_7264);
#pragma pop

/* 80B0839C-80B09A3C 00707C 16A0+00 2/1 0/0 0/0 .text            executeWolfPerch__10daNPC_TK_cFv */
void daNPC_TK_c::executeWolfPerch() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C344-80B0C348 000180 0004+00 0/0 0/0 0/0 .rodata          @7265 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7265 = 120.0f;
COMPILER_STRIP_GATE(0x80B0C344, &lit_7265);
#pragma pop

/* 80B0C348-80B0C34C 000184 0004+00 1/3 0/0 0/0 .rodata          @7266 */
SECTION_RODATA static f32 const lit_7266 = 80.0f;
COMPILER_STRIP_GATE(0x80B0C348, &lit_7266);

/* 80B0C34C-80B0C350 000188 0004+00 0/0 0/0 0/0 .rodata          @7267 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7267 = 3.0f / 20.0f;
COMPILER_STRIP_GATE(0x80B0C34C, &lit_7267);
#pragma pop

/* 80B0C350-80B0C354 00018C 0004+00 0/0 0/0 0/0 .rodata          @7268 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7268 = 12.0f;
COMPILER_STRIP_GATE(0x80B0C350, &lit_7268);
#pragma pop

/* 80B0C354-80B0C358 000190 0004+00 0/0 0/0 0/0 .rodata          @7269 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7269 = 7.0f / 10.0f;
COMPILER_STRIP_GATE(0x80B0C354, &lit_7269);
#pragma pop

/* 80B0C358-80B0C35C 000194 0004+00 0/1 0/0 0/0 .rodata          @7270 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7270 = -30.0f;
COMPILER_STRIP_GATE(0x80B0C358, &lit_7270);
#pragma pop

/* 80B0C35C-80B0C360 000198 0004+00 0/1 0/0 0/0 .rodata          @7444 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7444 = -5191.0f;
COMPILER_STRIP_GATE(0x80B0C35C, &lit_7444);
#pragma pop

/* 80B0C360-80B0C364 00019C 0004+00 0/1 0/0 0/0 .rodata          @7445 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7445 = 5246.0f;
COMPILER_STRIP_GATE(0x80B0C360, &lit_7445);
#pragma pop

/* 80B0C364-80B0C368 0001A0 0004+00 0/1 0/0 0/0 .rodata          @7446 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7446 = -700.0f;
COMPILER_STRIP_GATE(0x80B0C364, &lit_7446);
#pragma pop

/* 80B09A3C-80B0A444 00871C 0A08+00 2/1 0/0 0/0 .text executeResistanceDemo__10daNPC_TK_cFv */
void daNPC_TK_c::executeResistanceDemo() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C368-80B0C36C 0001A4 0004+00 0/0 0/0 0/0 .rodata          @7447 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7447 = -4058.0f;
COMPILER_STRIP_GATE(0x80B0C368, &lit_7447);
#pragma pop

/* 80B0C36C-80B0C370 0001A8 0004+00 0/0 0/0 0/0 .rodata          @7448 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7448 = 549.0f;
COMPILER_STRIP_GATE(0x80B0C36C, &lit_7448);
#pragma pop

/* 80B0C370-80B0C374 0001AC 0004+00 0/0 0/0 0/0 .rodata          @7449 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7449 = 7530.0f;
COMPILER_STRIP_GATE(0x80B0C370, &lit_7449);
#pragma pop

/* 80B0C374-80B0C378 0001B0 0004+00 0/0 0/0 0/0 .rodata          @7450 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7450 = -4107.0f;
COMPILER_STRIP_GATE(0x80B0C374, &lit_7450);
#pragma pop

/* 80B0C378-80B0C37C 0001B4 0004+00 0/0 0/0 0/0 .rodata          @7451 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7451 = 163.0f;
COMPILER_STRIP_GATE(0x80B0C378, &lit_7451);
#pragma pop

/* 80B0C37C-80B0C380 0001B8 0004+00 0/0 0/0 0/0 .rodata          @7452 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7452 = 8046.0f;
COMPILER_STRIP_GATE(0x80B0C37C, &lit_7452);
#pragma pop

/* 80B0C380-80B0C384 0001BC 0004+00 0/0 0/0 0/0 .rodata          @7453 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7453 = 7.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B0C380, &lit_7453);
#pragma pop

/* 80B0C384-80B0C388 0001C0 0004+00 0/0 0/0 0/0 .rodata          @7454 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7454 = -15.0f;
COMPILER_STRIP_GATE(0x80B0C384, &lit_7454);
#pragma pop

/* 80B0C388-80B0C38C 0001C4 0004+00 0/2 0/0 0/0 .rodata          @7470 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7470 = 600.0f;
COMPILER_STRIP_GATE(0x80B0C388, &lit_7470);
#pragma pop

/* 80B0A444-80B0A500 009124 00BC+00 0/0 0/0 1/1 .text setHawkSideCamera__10daNPC_TK_cF4cXyz */
void daNPC_TK_c::setHawkSideCamera(cXyz param_0) {
    // NONMATCHING
}

/* 80B0A500-80B0A568 0091E0 0068+00 1/1 0/0 1/1 .text setHawkCamera__10daNPC_TK_cFP10fopAc_ac_c */
void daNPC_TK_c::setHawkCamera(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C38C-80B0C390 0001C8 0004+00 0/1 0/0 0/0 .rodata          @7498 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7498 = -300.0f;
COMPILER_STRIP_GATE(0x80B0C38C, &lit_7498);
#pragma pop

/* 80B0A568-80B0A614 009248 00AC+00 1/1 0/0 2/2 .text            endHawkCamera__10daNPC_TK_cFv */
void daNPC_TK_c::endHawkCamera() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C390-80B0C394 0001CC 0004+00 0/1 0/0 0/0 .rodata          @7762 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7762 = 1000.0f;
COMPILER_STRIP_GATE(0x80B0C390, &lit_7762);
#pragma pop

/* 80B0C394-80B0C398 0001D0 0004+00 0/1 0/0 0/0 .rodata          @7763 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7763 = 4.0f / 5.0f;
COMPILER_STRIP_GATE(0x80B0C394, &lit_7763);
#pragma pop

/* 80B0A614-80B0B004 0092F4 09F0+00 1/1 0/0 0/0 .text            calcDemoCamera__10daNPC_TK_cFv */
void daNPC_TK_c::calcDemoCamera() {
    // NONMATCHING
}

/* 80B0B004-80B0B284 009CE4 0280+00 1/1 0/0 0/0 .text            checkActionSet__10daNPC_TK_cFv */
void daNPC_TK_c::checkActionSet() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3D8 = "TAKAYOSE@";
SECTION_DEAD static char const* const stringBase_80B0C3E2 = "TAKAYOSE";
#pragma pop

/* 80B0B284-80B0B5CC 009F64 0348+00 2/1 0/0 0/0 .text            action__10daNPC_TK_cFv */
void daNPC_TK_c::action() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C398-80B0C39C 0001D4 0004+00 0/1 0/0 0/0 .rodata          @7905 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7905 = 33.0f;
COMPILER_STRIP_GATE(0x80B0C398, &lit_7905);
#pragma pop

/* 80B0C39C-80B0C3A0 0001D8 0004+00 0/1 0/0 0/0 .rodata          @7906 */
#pragma push
#pragma force_active on
SECTION_RODATA static f32 const lit_7906 = -27.0f;
COMPILER_STRIP_GATE(0x80B0C39C, &lit_7906);
#pragma pop

/* 80B0B5CC-80B0B6DC 00A2AC 0110+00 1/1 0/0 0/0 .text            mtx_set__10daNPC_TK_cFv */
void daNPC_TK_c::mtx_set() {
    // NONMATCHING
}

/* 80B0B6DC-80B0B7CC 00A3BC 00F0+00 1/1 0/0 0/0 .text            cc_set__10daNPC_TK_cFv */
void daNPC_TK_c::cc_set() {
    // NONMATCHING
}

/* 80B0B7CC-80B0B8F0 00A4AC 0124+00 1/1 0/0 0/0 .text            execute__10daNPC_TK_cFv */
void daNPC_TK_c::execute() {
    // NONMATCHING
}

/* 80B0B8F0-80B0B910 00A5D0 0020+00 2/1 0/0 0/0 .text            daNPC_TK_Execute__FP10daNPC_TK_c */
static void daNPC_TK_Execute(daNPC_TK_c* param_0) {
    // NONMATCHING
}

/* 80B0B910-80B0B918 00A5F0 0008+00 1/0 0/0 0/0 .text            daNPC_TK_IsDelete__FP10daNPC_TK_c
 */
static bool daNPC_TK_IsDelete(daNPC_TK_c* param_0) {
    return true;
}

/* 80B0B918-80B0B98C 00A5F8 0074+00 1/1 0/0 0/0 .text            _delete__10daNPC_TK_cFv */
void daNPC_TK_c::_delete() {
    // NONMATCHING
}

/* 80B0B98C-80B0B9AC 00A66C 0020+00 1/0 0/0 0/0 .text            daNPC_TK_Delete__FP10daNPC_TK_c */
static void daNPC_TK_Delete(daNPC_TK_c* param_0) {
    // NONMATCHING
}

/* 80B0B9AC-80B0BB7C 00A68C 01D0+00 1/1 0/0 0/0 .text ctrlJoint__10daNPC_TK_cFP8J3DJointP8J3DModel
 */
void daNPC_TK_c::ctrlJoint(J3DJoint* param_0, J3DModel* param_1) {
    // NONMATCHING
}

/* 80B0BB7C-80B0BBC8 00A85C 004C+00 1/1 0/0 0/0 .text JointCallBack__10daNPC_TK_cFP8J3DJointi */
void daNPC_TK_c::JointCallBack(J3DJoint* param_0, int param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_80B0C3EB = "tk.bmd";
#pragma pop

/* 80B0BBC8-80B0BD04 00A8A8 013C+00 1/1 0/0 0/0 .text            CreateHeap__10daNPC_TK_cFv */
void daNPC_TK_c::CreateHeap() {
    // NONMATCHING
}

/* 80B0BD04-80B0BD24 00A9E4 0020+00 1/1 0/0 0/0 .text            useHeapInit__FP10fopAc_ac_c */
static void useHeapInit(fopAc_ac_c* param_0) {
    // NONMATCHING
}

/* 80B0BD24-80B0BFE0 00AA04 02BC+00 1/1 0/0 0/0 .text            create__10daNPC_TK_cFv */
void daNPC_TK_c::create() {
    // NONMATCHING
}

/* 80B0BFE0-80B0C028 00ACC0 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGSphFv */
// cM3dGSph::~cM3dGSph() {
extern "C" void __dt__8cM3dGSphFv() {
    // NONMATCHING
}

/* 80B0C028-80B0C070 00AD08 0048+00 1/0 0/0 0/0 .text            __dt__8cM3dGAabFv */
// cM3dGAab::~cM3dGAab() {
extern "C" void __dt__8cM3dGAabFv() {
    // NONMATCHING
}

/* 80B0C070-80B0C0E0 00AD50 0070+00 3/2 0/0 0/0 .text            __dt__12dBgS_ObjAcchFv */
// dBgS_ObjAcch::~dBgS_ObjAcch() {
extern "C" void __dt__12dBgS_ObjAcchFv() {
    // NONMATCHING
}

/* 80B0C0E0-80B0C0E4 00ADC0 0004+00 1/1 0/0 0/0 .text            __ct__4cXyzFv */
// cXyz::cXyz() {
extern "C" void __ct__4cXyzFv() {
    /* empty function */
}

/* 80B0C0E4-80B0C104 00ADC4 0020+00 1/0 0/0 0/0 .text            daNPC_TK_Create__FP10daNPC_TK_c */
static void daNPC_TK_Create(daNPC_TK_c* param_0) {
    // NONMATCHING
}

/* 80B0C104-80B0C14C 00ADE4 0048+00 2/1 0/0 0/0 .text            __dt__14daNPC_TK_HIO_cFv */
daNPC_TK_HIO_c::~daNPC_TK_HIO_c() {
    // NONMATCHING
}

/* 80B0C14C-80B0C188 00AE2C 003C+00 0/0 1/0 0/0 .text            __sinit_d_a_npc_tk_cpp */
void __sinit_d_a_npc_tk_cpp() {
    // NONMATCHING
}

#pragma push
#pragma force_active on
REGISTER_CTORS(0x80B0C14C, __sinit_d_a_npc_tk_cpp);
#pragma pop

/* 80B0C188-80B0C190 00AE68 0008+00 1/0 0/0 0/0 .text            @36@__dt__12dBgS_ObjAcchFv */
static void func_80B0C188() {
    // NONMATCHING
}

/* 80B0C190-80B0C198 00AE70 0008+00 1/0 0/0 0/0 .text            @20@__dt__12dBgS_ObjAcchFv */
static void func_80B0C190() {
    // NONMATCHING
}

/* 80B0C198-80B0C1B0 00AE78 0018+00 1/1 0/0 0/0 .text            checkNowWolf__9daPy_py_cFv */
// void daPy_py_c::checkNowWolf() {
extern "C" void checkNowWolf__9daPy_py_cFv() {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80B0C668-80B0C66C 0000B8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__40JASGlobalInstance<19JASDefaultBankTable>        */
#pragma push
#pragma force_active on
static u8 data_80B0C668[4];
#pragma pop

/* 80B0C66C-80B0C670 0000BC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14JASAudioThread>             */
#pragma push
#pragma force_active on
static u8 data_80B0C66C[4];
#pragma pop

/* 80B0C670-80B0C674 0000C0 0004+00 0/0 0/0 0/0 .bss sInstance__27JASGlobalInstance<7Z2SeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B0C670[4];
#pragma pop

/* 80B0C674-80B0C678 0000C4 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8Z2SeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B0C674[4];
#pragma pop

/* 80B0C678-80B0C67C 0000C8 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SceneMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C678[4];
#pragma pop

/* 80B0C67C-80B0C680 0000CC 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2StatusMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C67C[4];
#pragma pop

/* 80B0C680-80B0C684 0000D0 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2DebugSys>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C680[4];
#pragma pop

/* 80B0C684-80B0C688 0000D4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__36JASGlobalInstance<15JAISoundStarter>            */
#pragma push
#pragma force_active on
static u8 data_80B0C684[4];
#pragma pop

/* 80B0C688-80B0C68C 0000D8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__35JASGlobalInstance<14Z2SoundStarter>             */
#pragma push
#pragma force_active on
static u8 data_80B0C688[4];
#pragma pop

/* 80B0C68C-80B0C690 0000DC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12Z2SpeechMgr2>               */
#pragma push
#pragma force_active on
static u8 data_80B0C68C[4];
#pragma pop

/* 80B0C690-80B0C694 0000E0 0004+00 0/0 0/0 0/0 .bss sInstance__28JASGlobalInstance<8JAISeMgr> */
#pragma push
#pragma force_active on
static u8 data_80B0C690[4];
#pragma pop

/* 80B0C694-80B0C698 0000E4 0004+00 0/0 0/0 0/0 .bss sInstance__29JASGlobalInstance<9JAISeqMgr> */
#pragma push
#pragma force_active on
static u8 data_80B0C694[4];
#pragma pop

/* 80B0C698-80B0C69C 0000E8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAIStreamMgr>               */
#pragma push
#pragma force_active on
static u8 data_80B0C698[4];
#pragma pop

/* 80B0C69C-80B0C6A0 0000EC 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2SoundMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C69C[4];
#pragma pop

/* 80B0C6A0-80B0C6A4 0000F0 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAISoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B0C6A0[4];
#pragma pop

/* 80B0C6A4-80B0C6A8 0000F4 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13JAUSoundTable>              */
#pragma push
#pragma force_active on
static u8 data_80B0C6A4[4];
#pragma pop

/* 80B0C6A8-80B0C6AC 0000F8 0004+00 0/0 0/0 0/0 .bss
 * sInstance__38JASGlobalInstance<17JAUSoundNameTable>          */
#pragma push
#pragma force_active on
static u8 data_80B0C6A8[4];
#pragma pop

/* 80B0C6AC-80B0C6B0 0000FC 0004+00 0/0 0/0 0/0 .bss
 * sInstance__33JASGlobalInstance<12JAUSoundInfo>               */
#pragma push
#pragma force_active on
static u8 data_80B0C6AC[4];
#pragma pop

/* 80B0C6B0-80B0C6B4 000100 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SoundInfo>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C6B0[4];
#pragma pop

/* 80B0C6B4-80B0C6B8 000104 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2SoundObjMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B0C6B4[4];
#pragma pop

/* 80B0C6B8-80B0C6BC 000108 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2Audience>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C6B8[4];
#pragma pop

/* 80B0C6BC-80B0C6C0 00010C 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2FxLineMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C6BC[4];
#pragma pop

/* 80B0C6C0-80B0C6C4 000110 0004+00 0/0 0/0 0/0 .bss sInstance__31JASGlobalInstance<10Z2EnvSeMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C6C0[4];
#pragma pop

/* 80B0C6C4-80B0C6C8 000114 0004+00 0/0 0/0 0/0 .bss sInstance__32JASGlobalInstance<11Z2SpeechMgr>
 */
#pragma push
#pragma force_active on
static u8 data_80B0C6C4[4];
#pragma pop

/* 80B0C6C8-80B0C6CC 000118 0004+00 0/0 0/0 0/0 .bss
 * sInstance__34JASGlobalInstance<13Z2WolfHowlMgr>              */
#pragma push
#pragma force_active on
static u8 data_80B0C6C8[4];
#pragma pop

/* 80B0C3A0-80B0C3A0 0001DC 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
