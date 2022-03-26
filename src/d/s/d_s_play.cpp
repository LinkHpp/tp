//
// Generated By: dol2asm
// Translation Unit: d/s/d_s_play
//

#include "d/s/d_s_play.h"
#include "JSystem/JUtility/JUTConsole.h"
#include "SSystem/SComponent/c_counter.h"
#include "d/d_item.h"
#include "d/msg/d_msg_object.h"
#include "dol2asm.h"
#include "dolphin/types.h"
#include "f_op/f_op_draw_iter.h"
#include "f_op/f_op_overlap_mng.h"
#include "f_op/f_op_scene_mng.h"
#include "m_Do/m_Do_audio.h"

//
// Types:
//

struct daYkgr_c {
    static u8 m_emitter[4];
};

struct daSus_c {
    /* 800313BC */ void reset();
    /* 800315A4 */ static void execute();
};

struct dMdl_mng_c {
    /* 8009C7AC */ void create();
    /* 8009C864 */ void remove();
    /* 8009C8C0 */ static void reset();
};

struct dDemo_c {
    /* 80039678 */ void create();
    /* 80039910 */ void remove();
    /* 80039DA4 */ static void update();
};

struct cDylPhs {
    /* 8001884C */ void Link(request_of_phase_process_class*, s16);
    /* 80018890 */ void Unlink(request_of_phase_process_class*, s16);
};

//
// Forward References:
//

extern "C" void calcPauseTimer__9dScnPly_cFv();
extern "C" void __ct__22dScnPly_env_otherHIO_cFv();
extern "C" void __ct__22dScnPly_env_debugHIO_cFv();
extern "C" static void dScnPly_Draw__FP9dScnPly_c();
extern "C" static void dScnPly_Execute__FP9dScnPly_c();
extern "C" static void dScnPly_IsDelete__F9dScnPly_c();
extern "C" static void dScnPly_Delete__FP9dScnPly_c();
extern "C" void resetGame__9dScnPly_cFv();
extern "C" void offReset__9dScnPly_cFv();
extern "C" static void phase_00__FP9dScnPly_c();
extern "C" static void phase_01__FP9dScnPly_c();
extern "C" static s32 phase_0__FP9dScnPly_c();
extern "C" static void phase_1__FP9dScnPly_c();
extern "C" static void phase_1_0__FP9dScnPly_c();
extern "C" static void phase_2__FP9dScnPly_c();
extern "C" static void phase_3__FP9dScnPly_c();
extern "C" static void phase_4__FP9dScnPly_c();
extern "C" static void phase_5__FP9dScnPly_c();
extern "C" static void phase_6__FP9dScnPly_c();
extern "C" static s32 phase_compleate__FPv();
extern "C" static void dScnPly_Create__FP11scene_class();
extern "C" void __dt__22dScnPly_env_debugHIO_cFv();
extern "C" void __dt__22dScnPly_env_otherHIO_cFv();
extern "C" void __sinit_d_s_play_cpp();
extern "C" void __dt__17dScnPly_env_HIO_cFv();
extern "C" void __dt__17dScnPly_reg_HIO_cFv();
extern "C" void __dt__21dScnPly_preLoad_HIO_cFv();
extern "C" extern char const* const d_s_d_s_play__stringBase0;

//
// External References:
//

extern "C" void mDoAud_setSceneName__FPCcll();
extern "C" void mDoAud_load1stDynamicWave__Fv();
extern "C" void mDoAud_resetRecover__Fv();
extern "C" void remove__Q213mDoGph_gInf_c7bloom_cFv();
extern "C" void mDoRst_resetCallBack__FiPv();
extern "C" void Link__7cDylPhsFP30request_of_phase_process_classs();
extern "C" void Unlink__7cDylPhsFP30request_of_phase_process_classs();
extern "C" void fopAcM_create__FsUlPC4cXyziPC5csXyzPC4cXyzSc();
extern "C" void fopOvlpM_IsPeek__Fv();
extern "C" void fopScnM_ChangeReq__FP11scene_classssUs();
extern "C" void fopMsgM_createExpHeap__FUlP7JKRHeap();
extern "C" void fopMsgM_destroyExpHeap__FP10JKRExpHeap();
extern "C" void fopDwIt_Begin__Fv();
extern "C" void fopDwIt_Next__FP16create_tag_class();
extern "C" void fpcM_Draw__FPv();
extern "C" void resetArchiveBank__20dStage_roomControl_cFi();
extern "C" void dStage_stagInfo_GetParticleNo__FP21stage_stag_info_classi();
extern "C" void dStage_infoCreate__Fv();
extern "C" void dStage_Create__Fv();
extern "C" void dStage_Delete__Fv();
extern "C" void init__14dComIfG_play_cFv();
extern "C" void setStartStage__14dComIfG_play_cFP19dStage_startStage_c();
extern "C" void getLayerNo_common_common__14dComIfG_play_cFPCcii();
extern "C" void getLayerNo_common__14dComIfG_play_cFPCcii();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void createSimpleModel__14dComIfG_play_cFv();
extern "C" void deleteSimpleModel__14dComIfG_play_cFv();
extern "C" void dComIfG_resetToOpening__FP11scene_class();
extern "C" void dComIfG_resLoad__FP30request_of_phase_process_classPCc();
extern "C" void dComIfG_resDelete__FP30request_of_phase_process_classPCc();
extern "C" void dComIfGs_BossLife_public_Set__FSc();
extern "C" void dComIfGp_calcNowRegion__Fv();
extern "C" void dComIfGp_world_dark_set__FUc();
extern "C" void dComLbG_PhaseHandler__FP30request_of_phase_process_classPPFPv_iPv();
extern "C" void reset__7daSus_cFv();
extern "C" void execute__7daSus_cFv();
extern "C" void onDarkClearLV__21dSv_player_status_b_cFi();
extern "C" void onTransformLV__21dSv_player_status_b_cFi();
extern "C" void setItem__17dSv_player_item_cFiUc();
extern "C" void onFirstBit__21dSv_player_get_item_cFUc();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void onSwitch__12dSv_danBit_cFi();
extern "C" void init__10dSv_info_cFv();
extern "C" void create__7dDemo_cFv();
extern "C" void remove__7dDemo_cFv();
extern "C" void update__7dDemo_cFv();
extern "C" void setRes__14dRes_control_cFPCcP11dRes_info_ciPCcUcP7JKRHeap();
extern "C" void syncRes__14dRes_control_cFPCcP11dRes_info_ci();
extern "C" void syncAllRes__14dRes_control_cFP11dRes_info_ci();
extern "C" void setStageRes__14dRes_control_cFPCcP7JKRHeap();
extern "C" void create__8dMpath_cFv();
extern "C" void remove__8dMpath_cFv();
extern "C" void Step__14dEvt_control_cFv();
extern "C" void remove__14dEvt_control_cFv();
extern "C" void readScene__13dPa_control_cFUcPP21mDoDvdThd_toMainRam_c();
extern "C" void createScene__13dPa_control_cFPCv();
extern "C" void removeScene__13dPa_control_cFb();
extern "C" void cleanup__13dPa_control_cFv();
extern "C" void calc3D__13dPa_control_cFv();
extern "C" void calc2D__13dPa_control_cFv();
extern "C" void setViewPort__14dDlst_window_cFffffff();
extern "C" void setScissor__14dDlst_window_cFffff();
extern "C" void Run__12dVibration_cFv();
extern "C" void Init__12dVibration_cFv();
extern "C" void Pause__12dVibration_cFv();
extern "C" void Remove__12dVibration_cFv();
extern "C" void __ct__12dAttention_cFP10fopAc_ac_cUl();
extern "C" void __dt__12dAttention_cFv();
extern "C" void Run__12dAttention_cFv();
extern "C" void Draw__12dAttention_cFv();
extern "C" void ClrMoveFlag__4dBgSFv();
extern "C" void Move__4dBgSFv();
extern "C" void Ct__4dCcSFv();
extern "C" void Dt__4dCcSFv();
extern "C" void Move__4dCcSFv();
extern "C" void Draw__4dCcSFv();
extern "C" void execItemGet__FUc();
extern "C" void create__7dTres_cFv();
extern "C" void remove__7dTres_cFv();
extern "C" void create__10dMdl_mng_cFv();
extern "C" void remove__10dMdl_mng_cFv();
extern "C" void reset__10dMdl_mng_cFv();
extern "C" void update__12dEyeHL_mng_cFv();
extern "C" void checkRoomRestartStart__9daPy_py_cFv();
extern "C" void dKy_getdaytime_hour__Fv();
extern "C" void dKy_getdaytime_minute__Fv();
extern "C" void dKy_itudemo_se__Fv();
extern "C" void dKy_get_dayofweek__Fv();
extern "C" void dKy_darkworld_check__Fv();
extern "C" void dKy_darkworld_stage_check__FPCci();
extern "C" void dKy_darkworld_spot_check__FPCci();
extern "C" void dKy_darkworld_Area_set__FPCci();
extern "C" void dMeter2Info_setCloth__FUcb();
extern "C" void dMeter2Info_setSword__FUcb();
extern "C" void dMeter2Info_setShield__FUcb();
extern "C" void readMessageGroup__12dMsgObject_cFPP25mDoDvdThd_mountXArchive_c();
extern "C" s8 func_80252E70(s8*);
extern "C" void ClearPi__13cBgS_PolyInfoFv();
extern "C" void setInDarkness__10Z2SceneMgrFb();
extern "C" void check1stDynamicWave__10Z2SceneMgrFv();
extern "C" void load2ndDynamicWave__10Z2SceneMgrFv();
extern "C" void sceneBgmStart__10Z2SceneMgrFv();
extern "C" void __dl__FPv();
extern "C" void setMessageCount__12JUTAssertionFi();
extern "C" void __register_global_object();
extern "C" void _savegpr_26();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* g_fopScn_Method[5 + 1 /* padding */];
extern "C" extern void* g_fpcNd_Method[5 + 1 /* padding */];
extern "C" extern void* __vt__14mDoHIO_entry_c[3];
extern "C" u8 m_bloom__13mDoGph_gInf_c[20];
extern "C" u8 mLineCheck__11fopAcM_lc_c[112];
extern "C" u8 mGndCheck__11fopAcM_gc_c[84];
extern "C" u8 mRoofCheck__11fopAcM_rc_c[80];
extern "C" u8 mWaterCheck__11fopAcM_wt_c[84 + 4 /* padding */];
extern "C" extern dScnKy_env_light_c g_env_light;
extern "C" extern u8 g_save_bit_HIO[1184 + 4 /* padding */];
extern "C" extern GXColor g_saftyWhiteColor;
extern "C" u8 mFader__13mDoGph_gInf_c[4];
extern "C" u8 mResetData__6mDoRst[4 + 4 /* padding */];
extern "C" u8 mProcID__20dStage_roomControl_c[4];
extern "C" extern u8 struct_80450D8C[4];
extern "C" u8 m_emitter__8daYkgr_c[4];
extern "C" u8 sManager__10JFWDisplay[4];
extern "C" u8 mAudioMgrPtr__10Z2AudioMgr[4 + 4 /* padding */];
extern "C" u8 sCallback__Q210JUTGamePad13C3ButtonReset[4];
extern "C" u8 sCallbackArg__Q210JUTGamePad13C3ButtonReset[4 + 4 /* padding */];

//
// Declarations:
//

inline dEvt_control_c& dComIfGp_getEvent() {
    return g_dComIfG_gameInfo.play.getEvent();
}

/* ############################################################################################## */
/* 804510F8-80451100 0005F8 0008+00 2/2 0/0 0/0 .sbss            resPhase */
static request_of_phase_process_class resPhase;

/* 80451100-80451108 000600 0008+00 2/2 0/0 0/0 .sbss            dylPhase */
static request_of_phase_process_class dylPhase;

/* 80451108-8045110C 000608 0004+00 1/1 0/0 0/0 .sbss            dylPreLoadTime1 */
static u8 dylPreLoadTime1[4];

/* 8045110C-80451110 00060C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045110C[4];

/* 80451110-80451114 000610 0004+00 1/1 0/0 0/0 .sbss            resPreLoadTime0 */
static u8 resPreLoadTime0[4];

/* 80451114-80451118 000614 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_80451114[4];

/* 80451118-8045111C 000618 0004+00 1/1 0/0 0/0 .sbss            resPreLoadTime1 */
static u8 resPreLoadTime1[4];

/* 8045111C-80451120 00061C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045111C[4];

/* 80451120-80451124 000620 0004+00 1/1 0/0 0/0 .sbss            g_preLoadHIO */
static u8 g_preLoadHIO[4];

/* 80451124-80451128 -00001 0004+00 3/3 7/7 38/38 .sbss            None */
/* 80451124 0001+00 data_80451124 None */
/* 80451125 0003+00 data_80451125 None */
s8 struct_80451124;

s8 data_80451125;

/* 80259400-80259440 253D40 0040+00 1/1 0/0 0/0 .text            calcPauseTimer__9dScnPly_cFv */
s8 dScnPly_c::calcPauseTimer() {
    if (data_80451125 != 0) {
        struct_80451124 = data_80451125;
        data_80451125 = 0;
        return struct_80451124;
    } else {
        return func_80252E70(&struct_80451124);  // cLib_calcTimer<s8> : 80252E70
    }
}

/* ############################################################################################## */
/* 803C3158-803C3188 020278 002E+02 1/1 0/0 0/0 .data            l_wipeType$4081 */
SECTION_DATA static s16 l_wipeType[23] = {
    0x0000, 0x0000, 0x0011, 0x0002, 0x0002, 0x0001, 0x0003, 0x0001, 0x0004, 0x0004, 0x0005, 0x0005,
    0x0006, 0x0007, 0x0000, 0x0000, 0x0002, 0x0002, 0x0002, 0x0002, 0x0002, 0x0008, 0x0008,
};

/* 803C3188-803C3194 0202A8 000A+02 1/1 0/0 0/0 .data            camparamarc$4608 */
SECTION_DATA static char camparamarc[10] = "CamParam";

/* 803C3194-803C31C0 -00001 002C+00 1/1 0/0 0/0 .data            l_method$4860 */
SECTION_DATA static request_of_phase_process_fn l_method[11] = {
    (request_of_phase_process_fn)phase_00__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_1__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_1_0__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_01__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_0__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_2__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_3__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_4__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_5__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_6__FP9dScnPly_c,
    (request_of_phase_process_fn)phase_compleate__FPv,
};

/* 803C31C0-803C31D4 -00001 0014+00 2/0 0/0 0/0 .data            l_dScnPly_Method */
SECTION_DATA static void* l_dScnPly_Method[5] = {
    (void*)dScnPly_Create__FP11scene_class, (void*)dScnPly_Delete__FP9dScnPly_c,
    (void*)dScnPly_Execute__FP9dScnPly_c,   (void*)dScnPly_IsDelete__F9dScnPly_c,
    (void*)dScnPly_Draw__FP9dScnPly_c,
};

/* 803C31D4-803C31FC -00001 0028+00 0/0 0/0 1/0 .data            g_profile_PLAY_SCENE */
SECTION_DATA extern void* g_profile_PLAY_SCENE[10] = {
    (void*)NULL,
    (void*)0x0001FFFD,
    (void*)0x000B0000,
    (void*)&g_fpcNd_Method,
    (void*)0x000001D8,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopScn_Method,
    (void*)&l_dScnPly_Method,
    (void*)NULL,
};

/* 803C31FC-803C3224 -00001 0028+00 0/0 0/0 1/0 .data            g_profile_OPENING_SCENE */
SECTION_DATA extern void* g_profile_OPENING_SCENE[10] = {
    (void*)NULL,
    (void*)0x0001FFFD,
    (void*)0x000C0000,
    (void*)&g_fpcNd_Method,
    (void*)0x000001D8,
    (void*)NULL,
    (void*)NULL,
    (void*)&g_fopScn_Method,
    (void*)&l_dScnPly_Method,
    (void*)NULL,
};

/* 803C3224-803C3230 020344 000C+00 3/3 0/0 0/0 .data            __vt__22dScnPly_env_debugHIO_c */
SECTION_DATA extern void* __vt__22dScnPly_env_debugHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22dScnPly_env_debugHIO_cFv,
};

/* 803C3230-803C323C 020350 000C+00 3/3 0/0 0/0 .data            __vt__22dScnPly_env_otherHIO_c */
SECTION_DATA extern void* __vt__22dScnPly_env_otherHIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__22dScnPly_env_otherHIO_cFv,
};

/* 80454F18-80454F1C 003518 0002+02 1/0 0/0 0/0 .sdata2          T_JOINT_dylKeyTbl */
SECTION_SDATA2 static u16 T_JOINT_dylKeyTbl = {
    0x0106,
};

/* 80259440-80259468 253D80 0028+00 1/1 0/0 0/0 .text            __ct__22dScnPly_env_otherHIO_cFv */
dScnPly_env_otherHIO_c::dScnPly_env_otherHIO_c() {
    mShadowDensity = 255.0f;
    mLODBias = 1;
    mDispTransCylinder = false;
}

/* ############################################################################################## */
/* 80454F20-80454F24 003520 0004+00 1/1 0/0 0/0 .sdata2          @4066 */
SECTION_SDATA2 static f32 lit_4066 = -100.0f;

/* 80454F24-80454F28 003524 0004+00 1/1 0/0 0/0 .sdata2          @4067 */
SECTION_SDATA2 static f32 lit_4067 = 100.0f;

/* 80454F28-80454F2C 003528 0004+00 2/2 0/0 0/0 .sdata2          @4068 */
SECTION_SDATA2 static u8 lit_4068[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 80259468-802594AC 253DA8 0044+00 1/1 0/0 0/0 .text            __ct__22dScnPly_env_debugHIO_cFv */
// matches with literals
#ifdef NONMATCHING
dScnPly_env_debugHIO_c::dScnPly_env_debugHIO_c() {
    mBoxCullMinSize.set(-100.0f, -100.0f, -100.0f);
    mBoxCullMaxSize.set(100.0f, 100.0f, 100.0f);
    mSphereCullCenter.set(0.0f, 0.0f, 0.0f);
    mSphereCullRadius = 100.0f;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm dScnPly_env_debugHIO_c::dScnPly_env_debugHIO_c() {
    nofralloc
#include "asm/d/s/d_s_play/__ct__22dScnPly_env_debugHIO_cFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 80454F2C-80454F30 00352C 0004+00 1/1 0/0 0/0 .sdata2          @4100 */
SECTION_SDATA2 static u32 lit_4100 = 0x2A1E46FF;

/* 802594AC-802597B8 253DEC 030C+00 1/0 0/0 0/0 .text            dScnPly_Draw__FP9dScnPly_c */
// some small issues like instruction reordering
#ifdef NONMATCHING
static int dScnPly_Draw(dScnPly_c* scn) {
    dComIfG_Ccsp()->Move();
    dComIfG_Bgsp().ClrMoveFlag();

    u8 useWhiteColor;
    if (!fopOvlpM_IsPeek() && !dComIfG_resetToOpening(scn)) {
        if (dComIfGp_isEnableNextStage()) {
            u8 wipe = dComIfGp_getNextStageWipe();
            fopScnM_ChangeReq(scn, 11, l_wipeType[wipe], 5);

            int hour = dKy_getdaytime_hour();
            useWhiteColor = false;
            if (hour >= 6 && hour < 18) {
                useWhiteColor = true;
            }
            bool tmp = useWhiteColor == 0;

            if (wipe == 1 || wipe == 2 || wipe == 7 || wipe == 17 || wipe == 21 ||
                ((wipe == 8 || wipe == 10 || wipe == 18) && tmp) ||
                ((wipe == 9 || wipe == 11 || wipe == 19) && !tmp)) {
                mDoGph_gInf_c::setFadeColor(*(JUtility::TColor*)&g_saftyWhiteColor);
            } else if (wipe == 14 || wipe == 20) {
                GXColor color = {0x2A, 0x1E, 0x46, 0xFF};
                if (dKy_darkworld_check()) {
                    color.r = 0xFF;
                    color.g = 0xCF;
                    color.b = 0xB4;
                }
                mDoGph_gInf_c::setFadeColor(*(JUtility::TColor*)&color);
            } else {
                mDoGph_gInf_c::setFadeColor(*(JUtility::TColor*)&g_blackColor);
            }
        }
    }
    dMdl_mng_c::reset();

    if (!dComIfGp_isPauseFlag() && struct_80451124 == 0) {
        if (fpcM_GetName(scn) == 0xB) {
            dComIfGp_getVibration().Run();
        }
        daSus_c::execute();
        dComIfG_Bgsp().Move();
        dComIfGp_particle_calc3D();
        dComIfGp_particle_calc2D();
        cCt_execCounter();
    } else {
        dPa_control_c::onStatus(1);
        if (struct_80451124 == 0) {
            dPa_control_c::onStatus(2);
            if (struct_80451124 == 0) {
                dComIfGp_getVibration().Pause();
            }
        }
    }

    for (create_tag_class* i = fopDwIt_Begin(); i != NULL; i = fopDwIt_Next(i)) {
        fpcM_Draw(i->mpTagData);
    }

    if (!dComIfGp_isPauseFlag()) {
        dEyeHL_mng_c::update();
        dComIfG_Ccsp()->Draw();
        dComIfGp_getAttention().Draw();
    }

    return 1;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Draw(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Draw__FP9dScnPly_c.s"
}
#pragma pop
#endif

/* 802597B8-8025987C 2540F8 00C4+00 1/0 0/0 0/0 .text            dScnPly_Execute__FP9dScnPly_c */
static int dScnPly_Execute(dScnPly_c* scnPly) {
    scnPly->offReset();
    dStage_roomControl_c::offNoChangeRoom();
    dStage_roomControl_c::setRoomReadId(0xFF);

    if (!fopOvlpM_IsPeek()) {
        if (mDoAud_zelAudio_c::isBgmSet()) {
            mDoAud_sceneBgmStart();
            mDoAud_load2ndDynamicWave();
            mDoAud_zelAudio_c::offBgmSet();
        }

        if (scnPly->calcPauseTimer() != 0) {
            return 1;
        }
    }

    dKy_itudemo_se();
    if (!dComIfGp_isPauseFlag()) {
        dDemo_c::update();
        dComIfGp_getEvent().Step();
        dComIfGp_getAttention().Run();
    }
    return 1;
}

/* 8025987C-802598AC 2541BC 0030+00 1/0 0/0 0/0 .text            dScnPly_IsDelete__F9dScnPly_c */
static int dScnPly_IsDelete(dScnPly_c scnPly) {
    dComIfGp_particle_cleanup();
    return 1;
}

/* ############################################################################################## */
/* 8039A2DF-8039A2E7 02693F 0008+00 1/0 0/0 0/0 .rodata          None */
extern "C" char const* const stringBase_8039A2DF;

/* 80450760-80450764 -00001 0004+00 1/0 0/0 0/0 .sdata           T_JOINT_resName */
extern "C" char* T_JOINT_resName;

/* 80454F18-80454F1C 003518 0002+02 1/0 0/0 0/0 .sdata2          T_JOINT_dylKeyTbl */
extern "C" u16 T_JOINT_dylKeyTbl;

/* 8039A2C8-8039A2D8 -00001 0010+00 4/4 0/0 0/0 .rodata          PreLoadInfoT */
SECTION_RODATA static void* const PreLoadInfoT[4] = {
    (void*)(((char*)&d_s_d_s_play__stringBase0) + 0x7),
    &T_JOINT_dylKeyTbl,
    &T_JOINT_resName,
    (void*)0x01010000,
};
COMPILER_STRIP_GATE(0x8039A2C8, &PreLoadInfoT);

/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039A2D8 = "Always";
SECTION_DEAD static char const* const stringBase_8039A2DF = "T_JOINT";
#pragma pop

/* 80450760-80450764 -00001 0004+00 1/0 0/0 0/0 .sdata           T_JOINT_resName */
SECTION_SDATA static char* T_JOINT_resName = "Always";

/* 80450764-80450768 -00001 0004+00 4/4 0/0 0/0 .sdata           None */
SECTION_SDATA static u8 struct_80450764[2] = {
    /* 80450764 0001+00 data_80450764 None */
    0xFF,
    /* 80450765 0003+00 data_80450765 None */
    0x01,
};

/* 802598AC-80259AC4 2541EC 0218+00 1/0 0/0 0/0 .text            dScnPly_Delete__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Delete(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Delete__FP9dScnPly_c.s"
}
#pragma pop

/* 80259AC4-80259BFC 254404 0138+00 1/1 0/0 0/0 .text            resetGame__9dScnPly_cFv */
bool dScnPly_c::resetGame() {
    if (fpcM_GetName(this) == 0xC) {
        if (!dStage_roomControl_c::resetArchiveBank(0)) {
            return false;
        }

        if (!mDoAud_resetRecover()) {
            return false;
        }

        if (mDoRst::isReset()) {
            field_0x1d4 = 1;
        }
    } else {
        if (dComIfGp_getNextStagePoint() == -4 || (dComIfGs_getLastSceneMode() & 0xF) == 0xC ||
            !strcmp(dComIfGp_getNextStageName(), "F_SP109") ||
            (!strcmp(dComIfGp_getNextStageName(), "F_SP116") &&
             dComIfGp_getNextStageRoomNo() == 1 && dComIfGp_getNextStageLayer() == 9)) {
            if (!dStage_roomControl_c::resetArchiveBank(0)) {
                return false;
            }
        }
    }

    dComIfG_setBrightness(255);
    mDoGph_gInf_c::offFade();
    dDlst_list_c::offWipe();
    return true;
}

/* 80259BFC-80259C70 25453C 0074+00 1/1 0/0 0/0 .text            offReset__9dScnPly_cFv */
void dScnPly_c::offReset() {
    if (field_0x1d4 != 0 && !fopOvlpM_IsPeek()) {
        mDoRst::offReset();
        mDoRst::offResetPrepare();
        struct_80451501 = false;
        JUTGamePad::setResetCallback(mDoRst_resetCallBack, NULL);
        field_0x1d4 = 0;
    }
}

/* 80259C70-80259CAC 2545B0 003C+00 1/0 0/0 0/0 .text            phase_00__FP9dScnPly_c */
static int phase_00(dScnPly_c* scn) {
    if (!scn->resetGame()) {
        return 0;
    } else {
        mDoGph_gInf_c::offBlure();
        return 2;
    }
}

/* 80259CAC-80259D7C 2545EC 00D0+00 1/0 0/0 0/0 .text            phase_01__FP9dScnPly_c */
static int phase_01(dScnPly_c* scn) {
    mDoAud_setHour(dKy_getdaytime_hour());
    mDoAud_setMinute(dKy_getdaytime_minute());
    mDoAud_setWeekday(dKy_get_dayofweek());

    if (dKy_darkworld_check()) {
        mDoAud_setInDarkness(true);
    } else {
        mDoAud_setInDarkness(false);
    }

    s8 start_room = dComIfGp_getStartStageRoomNo();
    int layer = dComIfG_play_c::getLayerNo_common(dComIfGp_getStartStageName(), start_room,
                                                  dComIfGp_getStartStageLayer());

    mDoAud_setSceneName(dComIfGp_getStartStageName(), start_room, layer);

    if (!mDoAud_load1stDynamicWave()) {
        return 0;
    } else {
        return 2;
    }
}

/* 80259D7C-80259D84 2546BC 0008+00 1/0 0/0 0/0 .text            phase_0__FP9dScnPly_c */
static int phase_0(dScnPly_c* param_0) {
    return 2;
}

/* 80259D84-8025A438 2546C4 06B4+00 1/0 0/0 0/0 .text            phase_1__FP9dScnPly_c */
static int phase_1(dScnPly_c* scn) {
    u32 id = fopScnM_GetID(scn);
    dStage_roomControl_c::setProcID(id);

    dComIfGp_setStartStage(dComIfGp_getNextStartStage());

    if (dComIfGp_getStartStageLayer() < 0 && daPy_py_c::checkRoomRestartStart()) {
        const char* stage = dComIfGp_getStartStageName();
        s8 room = dComIfGp_getStartStageRoomNo();
        s8 layer = dComIfGp_getStartStageLayer();
        if (dComIfG_play_c::getLayerNo_common_common(stage, room, layer) < 0) {
            dComIfGp_setStartStageLayer(dComIfGp_getLayerOld());
        }
    }
    dComIfGp_offEnableNextStage();

    // Stage: Faron Woods, Room: Faron Spring
    if (!strcmp(dComIfGp_getStartStageName(), "F_SP108") && dComIfGp_getStartStageRoomNo() == 1 &&
        dComIfGp_getStartStagePoint() == 3) {
        dComIfGs_onDarkClearLV(0);
        execItemGet(WEAR_KOKIRI);
    }
    // Stage: Kakariko Village, Room: Kakariko Village
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP109") &&
             dComIfGp_getStartStageRoomNo() == 0 && dComIfGp_getStartStagePoint() == 30) {
        dComIfGs_onDarkClearLV(1);
    }
    // Stage: Lake Hylia, Room: Fountain
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP115") &&
             dComIfGp_getStartStageRoomNo() == 1 && dComIfGp_getStartStagePoint() == 20) {
        dComIfGs_onDarkClearLV(2);
    }
    // Stage: Sacred Grove, Room: Lost Woods
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP117") &&
             dComIfGp_getStartStageRoomNo() == 1 && dComIfGp_getStartStagePoint() == 99) {
        dComIfGs_onDarkClearLV(3);
    }

    // Stage: Ordon Spring, Room: Ordon Spring
    if (!strcmp(dComIfGp_getStartStageName(), "F_SP104") && dComIfGp_getStartStageRoomNo() == 1 &&
        dComIfGp_getStartStagePoint() == 23 && dComIfGp_getStartStageLayer() == 12) {
        dComIfGs_onItemFirstBit(HORSE_FLUTE);
        dComIfGs_setItem(SLOT_21, HORSE_FLUTE);
    }

    if ((u8)dKy_darkworld_stage_check(dComIfGp_getStartStageName(),
                                      dComIfGp_getStartStageRoomNo()) == true) {
        dComIfGp_world_dark_set(1);
    } else if ((u8)dKy_darkworld_spot_check(dComIfGp_getStartStageName(),
                                            dComIfGp_getStartStageRoomNo()) == true) {
        dComIfGp_world_dark_set(2);
    } else {
        dComIfGp_world_dark_set(0);
    }

    // Stage: Lake Hylia, Room: Fountain
    if (!strcmp(dComIfGp_getStartStageName(), "F_SP115") && dComIfGp_getStartStageRoomNo() == 1 &&
        dComIfGp_getStartStageLayer() < 0) {
        const char* stage = dComIfGp_getStartStageName();
        s8 room = dComIfGp_getStartStageRoomNo();
        s8 layer = dComIfGp_getStartStageLayer();
        if (dComIfG_play_c::getLayerNo_common(stage, room, layer) == 9) {
            dComIfGp_setStartStageLayer(9);
        }
    }

    // Stage: Faron Woods, Room: South Faron
    // Stage: Faron Woods Cave
    // Stage: Kakariko Village, Room: Kakariko Village
    // Stage: Lake Hylia, Room: Fountain
    if ((!strcmp(dComIfGp_getStartStageName(), "F_SP108") && dComIfGp_getStartStageRoomNo() == 0 &&
         dComIfGp_getStartStageLayer() == 7) ||
        (!strcmp(dComIfGp_getStartStageName(), "D_SB10") && dComIfG_play_c::getLayerNo(0) == 14) ||
        (!strcmp(dComIfGp_getStartStageName(), "F_SP109") && dComIfGp_getStartStageRoomNo() == 0 &&
         dComIfGp_getStartStageLayer() == 8) ||
        (!strcmp(dComIfGp_getStartStageName(), "F_SP115") && dComIfGp_getStartStageRoomNo() == 1 &&
         dComIfGp_getStartStageLayer() == 8) ||
        (!strcmp(dComIfGp_getStartStageName(), "F_SP115") && dComIfGp_getStartStageRoomNo() == 1 &&
         dComIfGp_getStartStageLayer() == 9)) {
        dComIfGp_world_dark_set(1);
    }

    // Stage: Zant Boss Fight, Room: Throne Room
    if (!strcmp(dComIfGp_getStartStageName(), "D_MN08D") && dComIfGp_getStartStageRoomNo() == 50 &&
        dComIfGp_getStartStagePoint() == 20) {
        dComIfGs_onSaveDunSwitch(30);
    }

    dKy_darkworld_Area_set(dComIfGp_getStartStageName(), dComIfGp_getStartStageRoomNo());

    // Stage: Hyrule Castle Sewers, Room: Prison Cell
    if (!strcmp(dComIfGp_getStartStageName(), "R_SP107") && dComIfGp_getStartStageRoomNo() == 0 &&
        (dComIfGp_getStartStagePoint() == 24 || dComIfGp_getStartStagePoint() == 0)) {
        dComIfGs_onTransformLV(0);
    }
    // Stage: Hyrule Field, Room: Eldin Gorge south entrance
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP121") &&
             dComIfGp_getStartStageRoomNo() == 2 && dComIfGp_getStartStagePoint() == 10) {
        dComIfGs_onTransformLV(1);
    }
    // Stage: Hyrule Field, Room: Lanayru Field north entrance
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP121") &&
             dComIfGp_getStartStageRoomNo() == 9 && dComIfGp_getStartStagePoint() == 10) {
        dComIfGs_onTransformLV(2);
    }
    // Stage: Hyrule Field, Room: Lanayru Field
    else if (!strcmp(dComIfGp_getStartStageName(), "F_SP121") &&
             dComIfGp_getStartStageRoomNo() == 10 &&
             (dComIfGp_getStartStagePoint() == 23 || dComIfGp_getStartStagePoint() == 20)) {
        dComIfGs_onTransformLV(3);
    }

    // Stage: Fishing Pond, Room: Fishing Pond
    if (!strcmp(dComIfGp_getStartStageName(), "F_SP127") && dComIfGp_getStartStageRoomNo() == 0 &&
        dComIfGp_getStartStagePoint() == 2) {
        g_env_light.field_0x12fe++;

        if (g_env_light.field_0x12fe > 4) {
            g_env_light.field_0x12fe = 1;
        }
    }

    dComIfGs_BossLife_public_Set(0xFF);
    g_env_light.field_0x1308 = 0;

    JUTReportConsole_f("Start StageName:RoomNo [%s:%d]\n", dComIfGp_getStartStageName(),
                       dComIfGp_getStartStageRoomNo());
    dComIfGp_setStatus(0);
    if (dComIfG_syncStageRes("Stg_00") < 0) {
        dComIfG_setStageRes("Stg_00", NULL);
    }
    return 2;
}

/* 8025A438-8025A4F8 254D78 00C0+00 1/0 0/0 0/0 .text            phase_1_0__FP9dScnPly_c */
static int phase_1_0(dScnPly_c* param_0) {
    if (dComIfG_syncStageRes("Stg_00")) {
        return 0;
    } else {
        dStage_infoCreate();
        dComIfG_setObjectRes("Event", 0, NULL);
        dComIfGp_setCameraParamFileName(0, camparamarc);
        dComIfG_setObjectRes("CamParam", 0, NULL);
        return 2;
    }
}

inline dStage_stageDt_c* dComIfGp_getStage() {
    return &g_dComIfG_gameInfo.play.getStage();
}

/* 8025A4F8-8025A5D4 254E38 00DC+00 1/0 0/0 0/0 .text            phase_2__FP9dScnPly_c */
// extra mr
#ifdef NONMATCHING
static int phase_2(dScnPly_c* scn) {
    int tmp = dComIfG_syncAllObjectRes();
    if (tmp >= 0 && tmp != 0) {
        return 0;
    }
    int layer = dComIfG_play_c::getLayerNo(0);
    stage_stag_info_class* stag_info = dComIfGp_getStage()->getStagInfo();

    u8 particle_no = dStage_stagInfo_GetParticleNo(stag_info, layer);
    if (particle_no == 255) {
        particle_no = dStage_stagInfo_GetParticleNo(dComIfGp_getStage()->getStagInfo());
    }

    dComIfGp_particle_readScene(particle_no, &scn->sceneCommand);
    dMsgObject_readMessageGroup(&scn->field_0x1d0);
    return 2;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm int phase_2(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_2__FP9dScnPly_c.s"
}
#pragma pop
#endif

/* 8025A5D4-8025A654 254F14 0080+00 1/0 0/0 0/0 .text            phase_3__FP9dScnPly_c */
static int phase_3(dScnPly_c* scn) {
    if ((scn->sceneCommand != NULL && !scn->sceneCommand->sync()) || mDoAud_check1stDynamicWave()) {
        return 0;
    } else if (!scn->field_0x1d0 == NULL && !scn->field_0x1d0->sync()) {
        return 0;
    } else {
        return 2;
    }
}

/* ############################################################################################## */
/* 80430778-80430784 05D498 000C+00 1/1 0/0 0/0 .bss             @4041 */
static u8 lit_4041[12];

/* 80430784-80430790 05D4A4 000C+00 0/1 0/0 0/0 .bss             @4049 */
#pragma push
#pragma force_active on
static u8 lit_4049[12];
#pragma pop

/* 80430790-8043079C 05D4B0 000C+00 0/1 0/0 0/0 .bss             @4050 */
#pragma push
#pragma force_active on
static u8 lit_4050[12];
#pragma pop

/* 8043079C-804307E0 05D4BC 0044+00 1/2 3/3 0/0 .bss             g_envHIO */
extern u8 g_envHIO[68];
u8 g_envHIO[68];

/* 80454F30-80454F34 003530 0004+00 1/1 0/0 0/0 .sdata2          @4804 */
SECTION_SDATA2 static f32 lit_4804 = 608.0f;

/* 80454F34-80454F38 003534 0004+00 1/1 0/0 0/0 .sdata2          @4805 */
SECTION_SDATA2 static f32 lit_4805 = 448.0f;

/* 80454F38-80454F40 003538 0004+04 1/1 0/0 0/0 .sdata2          @4806 */
SECTION_SDATA2 static f32 lit_4806[1 + 1 /* padding */] = {
    1.0f,
    /* padding */
    0.0f,
};

/* 8025A654-8025A9F4 254F94 03A0+00 1/0 0/0 0/0 .text            phase_4__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_4(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_4__FP9dScnPly_c.s"
}
#pragma pop

/* 8025A9F4-8025AAC0 255334 00CC+00 1/0 0/0 0/0 .text            phase_5__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_5(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_5__FP9dScnPly_c.s"
}
#pragma pop

/* 8025AAC0-8025AB8C 255400 00CC+00 1/0 0/0 0/0 .text            phase_6__FP9dScnPly_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void phase_6(dScnPly_c* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/phase_6__FP9dScnPly_c.s"
}
#pragma pop

/* 8025AB8C-8025AB94 2554CC 0008+00 1/0 0/0 0/0 .text            phase_compleate__FPv */
static int phase_compleate(void* param_0) {
    return 4;
}

/* 8025AB94-8025ABC4 2554D4 0030+00 1/0 0/0 0/0 .text            dScnPly_Create__FP11scene_class */
#ifdef NONMATCHING
static void dScnPly_Create(scene_class* scn) {
    dComLbG_PhaseHandler(&scn->field_0x1c4, l_method[0], scn);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void dScnPly_Create(scene_class* param_0) {
    nofralloc
#include "asm/d/s/d_s_play/dScnPly_Create__FP11scene_class.s"
}
#pragma pop
#endif

/* 8025ABC4-8025AC0C 255504 0048+00 1/0 0/0 0/0 .text            __dt__22dScnPly_env_debugHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dScnPly_env_debugHIO_c::~dScnPly_env_debugHIO_c() {
extern "C" asm void __dt__22dScnPly_env_debugHIO_cFv() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__22dScnPly_env_debugHIO_cFv.s"
}
#pragma pop

/* 8025AC0C-8025AC54 25554C 0048+00 1/0 0/0 0/0 .text            __dt__22dScnPly_env_otherHIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dScnPly_env_otherHIO_c::~dScnPly_env_otherHIO_c() {
extern "C" asm void __dt__22dScnPly_env_otherHIO_cFv() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__22dScnPly_env_otherHIO_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803C323C-803C3248 02035C 000C+00 2/2 0/0 0/0 .data            __vt__17dScnPly_env_HIO_c */
SECTION_DATA extern void* __vt__17dScnPly_env_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dScnPly_env_HIO_cFv,
};

/* 803C3248-803C3254 020368 000C+00 2/2 0/0 0/0 .data            __vt__17dScnPly_reg_HIO_c */
SECTION_DATA extern void* __vt__17dScnPly_reg_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__17dScnPly_reg_HIO_cFv,
};

/* 803C3254-803C3260 020374 000C+00 2/2 0/0 0/0 .data            __vt__21dScnPly_preLoad_HIO_c */
SECTION_DATA extern void* __vt__21dScnPly_preLoad_HIO_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__21dScnPly_preLoad_HIO_cFv,
};

/* 80451128-80451130 000628 0004+04 1/1 0/0 0/0 .sbss            g_regHIO */
static u8 g_regHIO[4 + 4 /* padding */];

/* 8025AC54-8025AD04 255594 00B0+00 0/0 1/0 0/0 .text            __sinit_d_s_play_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_s_play_cpp() {
    nofralloc
#include "asm/d/s/d_s_play/__sinit_d_s_play_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
REGISTER_CTORS(0x8025AC54, __sinit_d_s_play_cpp);
#pragma pop

/* 8025AD04-8025AD78 255644 0074+00 2/1 0/0 0/0 .text            __dt__17dScnPly_env_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dScnPly_env_HIO_c::~dScnPly_env_HIO_c() {
extern "C" asm void __dt__17dScnPly_env_HIO_cFv() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__17dScnPly_env_HIO_cFv.s"
}
#pragma pop

/* 8025AD78-8025ADC0 2556B8 0048+00 2/1 0/0 0/0 .text            __dt__17dScnPly_reg_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dScnPly_reg_HIO_c::~dScnPly_reg_HIO_c() {
extern "C" asm void __dt__17dScnPly_reg_HIO_cFv() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__17dScnPly_reg_HIO_cFv.s"
}
#pragma pop

/* 8025ADC0-8025AE1C 255700 005C+00 2/1 0/0 0/0 .text            __dt__21dScnPly_preLoad_HIO_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
// asm dScnPly_preLoad_HIO_c::~dScnPly_preLoad_HIO_c() {
extern "C" asm void __dt__21dScnPly_preLoad_HIO_cFv() {
    nofralloc
#include "asm/d/s/d_s_play/__dt__21dScnPly_preLoad_HIO_cFv.s"
}
#pragma pop

/* 8039A2D8-8039A2D8 026938 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
