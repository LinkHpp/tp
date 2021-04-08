//
// Generated By: dol2asm
// Translation Unit: d/com/d_com_static
//

#include "d/com/d_com_static.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct fopAc_ac_c {};

struct daYkgr_c {
    static u8 m_aim_rate[4];
    static u8 m_path[4];
    static u8 m_emitter[4];
};

struct cXyz {
    /* 80009184 */ ~cXyz();
    /* 800125DC */ cXyz();
};

struct daTagStream_c {
    /* 800318B4 */ void checkArea(cXyz const*);

    static u8 m_top[4];
};

struct daTagMist_c {
    /* 80031CF0 */ void getPlayerNo();
};

struct cBgS_PolyInfo {};

struct daTagMagne_c {
    /* 80031B50 */ void checkMagnetCode(cBgS_PolyInfo&);
    /* 80031BF4 */ void checkMagneA();
    /* 80031C48 */ void checkMagneB();
    /* 80031C9C */ void checkMagneC();

    static u8 mTagMagne[4];
};

struct daSus_c {
    struct data_c {
        /* 80030F14 */ void set(s8, cXyz const&, cXyz const&, u8, u8, u8);
        /* 80030FBC */ void reset();
        /* 80030FCC */ void isSwitch();
        /* 800310C8 */ void check(fopAc_ac_c*);
        /* 80031038 */ void check(cXyz const&);
        /* 80031150 */ void execute();
        /* 80031F28 */ ~data_c();
        /* 80031F64 */ data_c();
    };

    struct room_c {
        /* 80031190 */ void add(daSus_c::data_c*);
        /* 800311FC */ void reset();
        /* 80031EE4 */ room_c();
    };

    /* 80031248 */ void newData(s8, cXyz const&, cXyz const&, u8, u8, u8);
    /* 800313BC */ void reset();
    /* 800314D4 */ void check(fopAc_ac_c*);
    /* 80031434 */ void check(s8, cXyz const&);
    /* 800315A4 */ void execute();

    static u8 mData[1152];
    static u8 mRoom[256];
};

struct daSetBgObj_c {
    /* 80031870 */ void getArcName(fopAc_ac_c*);
};

struct daObjMovebox {
    struct Act_c {
        static void* M_dir_base[2];
    };
};

struct daObjCarry_c {
    /* 80031CF8 */ void clrSaveFlag();
    /* 80031D04 */ void setSaveFlag();
    /* 80031D10 */ void chkSaveFlag();
    /* 80031D24 */ void getPos(int);
    /* 80031D38 */ void savePos(int, cXyz);
    /* 80031D64 */ void onSttsFlag(int, u8);
    /* 80031D78 */ void offSttsFlag(int, u8);
    /* 80031D8C */ void chkSttsFlag(int, u8);
    /* 80031DAC */ void setRoomNo(int, s8);
    /* 80031DB8 */ void getRoomNo(int);

    static u8 mPos[60];
    static u8 mSttsFlag[5 + 3 /* padding */];
    static u8 mRoomNo[5 + 3 /* padding */];
};

struct J3DModel {};

struct daMirror_c {
    /* 8003194C */ void entry(J3DModel*);
    /* 80031990 */ void remove();

    static u8 m_entryModel[12];
    static u8 m_myObj[4];
};

struct daMP_c {
    /* 80031A78 */ void daMP_c_Get_MovieRestFrame();
    /* 80031AA4 */ void daMP_c_Set_PercentMovieVolume(f32);
    /* 80031AD0 */ void daMP_c_THPPlayerPlay();
    /* 80031B24 */ void daMP_c_THPPlayerPause();

    static u8 m_myObj[4];
};

struct daGrass_c {
    /* 800319C8 */ void deleteRoomGrass(int);
    /* 80031A20 */ void deleteRoomFlower(int);

    static u8 m_myObj[4];
    static u8 m_grass[4];
    static u8 m_flower[4];
};

struct daDsh_c {
    static u32 OPEN_SIZE;
    static f32 OPEN_ACCEL;
    static f32 OPEN_SPEED;
    static f32 OPEN_BOUND_SPEED;
    static f32 OPEN_BOUND_RATIO;
    static f32 CLOSE_ACCEL;
    static f32 CLOSE_SPEED;
    static f32 CLOSE_BOUND_SPEED;
    static f32 CLOSE_BOUND_RATIO;
};

struct dSv_info_c {
    /* 80035360 */ void isSwitch(int, int) const;
};

struct dSv_event_c {
    /* 8003498C */ void onEventBit(u16);
    /* 800349A4 */ void offEventBit(u16);
    /* 800349BC */ void isEventBit(u16) const;
    /* 800349E0 */ void setEventReg(u16, u8);
    /* 80034A04 */ void getEventReg(u16) const;
};

struct dGrass_packet_c {
    static u8 m_deleteRoom[12];
};

struct dFlower_packet_c {
    static u8 m_deleteRoom[12];
};

struct dDemo_c {
    static u8 m_status[4];
};

struct dComIfG_play_c {
    /* 8002C97C */ void getLayerNo(int);
};

struct dBgS {
    /* 80074D0C */ void GetMagnetCode(cBgS_PolyInfo const&);
};

//
// Forward References:
//

extern "C" void set__Q27daSus_c6data_cFScRC4cXyzRC4cXyzUcUcUc();
extern "C" void reset__Q27daSus_c6data_cFv();
extern "C" void isSwitch__Q27daSus_c6data_cFv();
extern "C" void check__Q27daSus_c6data_cFRC4cXyz();
extern "C" void check__Q27daSus_c6data_cFP10fopAc_ac_c();
extern "C" void execute__Q27daSus_c6data_cFv();
extern "C" void add__Q27daSus_c6room_cFPQ27daSus_c6data_c();
extern "C" void reset__Q27daSus_c6room_cFv();
extern "C" void newData__7daSus_cFScRC4cXyzRC4cXyzUcUcUc();
extern "C" void reset__7daSus_cFv();
extern "C" void check__7daSus_cFScRC4cXyz();
extern "C" void check__7daSus_cFP10fopAc_ac_c();
extern "C" void execute__7daSus_cFv();
extern "C" void daNpcMsg_setEvtNum__FUc();
extern "C" void daNpcKakashi_chkSwdTutorialStage__Fv();
extern "C" void daNpcKakashi_setSwdTutorialStep__FUc();
extern "C" void daNpcKakashi_getSwdTutorialStep__Fv();
extern "C" void daNpcKakashi_getSwdTutorialResult__Fv();
extern "C" void daNpcKakashi_setSwdTutorialResult__Fb();
extern "C" void daNpcKakashi_getSuccessCount__Fv();
extern "C" void daNpcKakashi_incSuccessCount__Fv();
extern "C" void daNpcKakashi_clrSuccessCount__Fv();
extern "C" void getArcName__12daSetBgObj_cFP10fopAc_ac_c();
extern "C" void checkArea__13daTagStream_cFPC4cXyz();
extern "C" void entry__10daMirror_cFP8J3DModel();
extern "C" void remove__10daMirror_cFv();
extern "C" void deleteRoomGrass__9daGrass_cFi();
extern "C" void deleteRoomFlower__9daGrass_cFi();
extern "C" void daMP_c_Get_MovieRestFrame__6daMP_cFv();
extern "C" void daMP_c_Set_PercentMovieVolume__6daMP_cFf();
extern "C" void daMP_c_THPPlayerPlay__6daMP_cFv();
extern "C" void daMP_c_THPPlayerPause__6daMP_cFv();
extern "C" void checkMagnetCode__12daTagMagne_cFR13cBgS_PolyInfo();
extern "C" void checkMagneA__12daTagMagne_cFv();
extern "C" void checkMagneB__12daTagMagne_cFv();
extern "C" void checkMagneC__12daTagMagne_cFv();
extern "C" void getPlayerNo__11daTagMist_cFv();
extern "C" void clrSaveFlag__12daObjCarry_cFv();
extern "C" void setSaveFlag__12daObjCarry_cFv();
extern "C" void chkSaveFlag__12daObjCarry_cFv();
extern "C" void getPos__12daObjCarry_cFi();
extern "C" void savePos__12daObjCarry_cFi4cXyz();
extern "C" void onSttsFlag__12daObjCarry_cFiUc();
extern "C" void offSttsFlag__12daObjCarry_cFiUc();
extern "C" void chkSttsFlag__12daObjCarry_cFiUc();
extern "C" void setRoomNo__12daObjCarry_cFiSc();
extern "C" void getRoomNo__12daObjCarry_cFi();
extern "C" void __sinit_d_com_static_cpp();
extern "C" void func_80031EAC();
extern "C" void __ct__Q27daSus_c6room_cFv();
extern "C" void func_80031EF0();
extern "C" void __dt__Q27daSus_c6data_cFv();
extern "C" void __ct__Q27daSus_c6data_cFv();
extern "C" extern char const* const d_com_d_com_static__stringBase0;
extern "C" u8 mData__7daSus_c[1152];
extern "C" u8 mRoom__7daSus_c[256];
extern "C" u8 m_entryModel__10daMirror_c[12];
extern "C" u8 m_deleteRoom__15dGrass_packet_c[12];
extern "C" u8 m_deleteRoom__16dFlower_packet_c[12];
extern "C" u8 mPos__12daObjCarry_c[60];
extern "C" u8 m_aim_rate__8daYkgr_c[4];
extern "C" u8 m_path__8daYkgr_c[4];
extern "C" u8 m_emitter__8daYkgr_c[4];
extern "C" u8 m_top__13daTagStream_c[4];
extern "C" u8 m_myObj__10daMirror_c[4];
extern "C" u8 m_myObj__9daGrass_c[4];
extern "C" u8 m_grass__9daGrass_c[4];
extern "C" u8 m_flower__9daGrass_c[4];
extern "C" u8 m_myObj__6daMP_c[4];
extern "C" u8 mTagMagne__12daTagMagne_c[4];
extern "C" u8 mSttsFlag__12daObjCarry_c[5 + 3 /* padding */];
extern "C" u8 mRoomNo__12daObjCarry_c[5 + 3 /* padding */];
extern "C" void* M_dir_base__Q212daObjMovebox5Act_c[2];
extern "C" u32 OPEN_SIZE__7daDsh_c;
extern "C" f32 OPEN_ACCEL__7daDsh_c;
extern "C" f32 OPEN_SPEED__7daDsh_c;
extern "C" f32 OPEN_BOUND_SPEED__7daDsh_c;
extern "C" f32 OPEN_BOUND_RATIO__7daDsh_c;
extern "C" f32 CLOSE_ACCEL__7daDsh_c;
extern "C" f32 CLOSE_SPEED__7daDsh_c;
extern "C" f32 CLOSE_BOUND_SPEED__7daDsh_c;
extern "C" f32 CLOSE_BOUND_RATIO__7daDsh_c;

//
// External References:
//

extern "C" void __dt__4cXyzFv();
extern "C" void mDoMch_Create__Fv();
extern "C" void __ct__4cXyzFv();
extern "C" void fopAcM_delete__FP10fopAc_ac_c();
extern "C" void fpoAcM_relativePos__FPC10fopAc_ac_cPC4cXyzP4cXyz();
extern "C" void getLayerNo__14dComIfG_play_cFi();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void offEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void setEventReg__11dSv_event_cFUsUc();
extern "C" void getEventReg__11dSv_event_cCFUs();
extern "C" void isSwitch__10dSv_info_cCFii();
extern "C" void GetMagnetCode__4dBgSFRC13cBgS_PolyInfo();
extern "C" void __dl__FPv();
extern "C" void __register_global_object();
extern "C" void __destroy_arr();
extern "C" void __construct_array();
extern "C" void __ptmf_scall();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" void sprintf();
extern "C" void strcmp();
extern "C" extern u8 const __ptmf_null[12 + 4 /* padding */];
extern "C" extern u8 g_dComIfG_gameInfo[122384];
extern "C" u8 m_status__7dDemo_c[4];

//
// Declarations:
//

/* 80030F14-80030FBC 02B854 00A8+00 1/1 0/0 0/0 .text
 * set__Q27daSus_c6data_cFScRC4cXyzRC4cXyzUcUcUc                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::set(s8 param_0, cXyz const& param_1, cXyz const& param_2, u8 param_3,
                              u8 param_4, u8 param_5) {
    nofralloc
#include "asm/d/com/d_com_static/set__Q27daSus_c6data_cFScRC4cXyzRC4cXyzUcUcUc.s"
}
#pragma pop

/* 80030FBC-80030FCC 02B8FC 0010+00 3/3 0/0 0/0 .text            reset__Q27daSus_c6data_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::reset() {
    nofralloc
#include "asm/d/com/d_com_static/reset__Q27daSus_c6data_cFv.s"
}
#pragma pop

/* 80030FCC-80031038 02B90C 006C+00 2/2 0/0 0/0 .text            isSwitch__Q27daSus_c6data_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::isSwitch() {
    nofralloc
#include "asm/d/com/d_com_static/isSwitch__Q27daSus_c6data_cFv.s"
}
#pragma pop

/* 80031038-800310C8 02B978 0090+00 2/2 0/0 0/0 .text            check__Q27daSus_c6data_cFRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::check(cXyz const& param_0) {
    nofralloc
#include "asm/d/com/d_com_static/check__Q27daSus_c6data_cFRC4cXyz.s"
}
#pragma pop

/* 800310C8-80031150 02BA08 0088+00 1/1 0/0 0/0 .text check__Q27daSus_c6data_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::check(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/check__Q27daSus_c6data_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 80031150-80031190 02BA90 0040+00 1/1 0/0 0/0 .text            execute__Q27daSus_c6data_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::data_c::execute() {
    nofralloc
#include "asm/d/com/d_com_static/execute__Q27daSus_c6data_cFv.s"
}
#pragma pop

/* 80031190-800311FC 02BAD0 006C+00 1/1 0/0 0/0 .text add__Q27daSus_c6room_cFPQ27daSus_c6data_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::room_c::add(daSus_c::data_c* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/add__Q27daSus_c6room_cFPQ27daSus_c6data_c.s"
}
#pragma pop

/* 800311FC-80031248 02BB3C 004C+00 0/0 0/0 1/1 .text            reset__Q27daSus_c6room_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::room_c::reset() {
    nofralloc
#include "asm/d/com/d_com_static/reset__Q27daSus_c6room_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80423FF0-80423FFC 050D10 000C+00 1/1 0/0 0/0 .bss             @3840 */
static u8 lit_3840[12];

/* 80423FFC-8042447C 050D1C 0480+00 6/7 0/0 0/0 .bss             mData__7daSus_c */
u8 daSus_c::mData[1152];

/* 8042447C-8042457C 05119C 0100+00 2/3 0/0 1/1 .bss             mRoom__7daSus_c */
u8 daSus_c::mRoom[256];

/* 80450D88-80450D8C -00001 0004+00 1/1 0/0 2/2 .sbss            None */
/* 80450D88 0002+00 data_80450D88 m_count__9daArrow_c */
/* 80450D8A 0002+00 data_80450D8A mSetTop__7daSus_c */
extern u8 struct_80450D88[4];
u8 struct_80450D88[4];

/* 80031248-800313BC 02BB88 0174+00 0/0 0/0 1/1 .text newData__7daSus_cFScRC4cXyzRC4cXyzUcUcUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::newData(s8 param_0, cXyz const& param_1, cXyz const& param_2, u8 param_3,
                          u8 param_4, u8 param_5) {
    nofralloc
#include "asm/d/com/d_com_static/newData__7daSus_cFScRC4cXyzRC4cXyzUcUcUc.s"
}
#pragma pop

/* 800313BC-80031434 02BCFC 0078+00 0/0 1/1 0/0 .text            reset__7daSus_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::reset() {
    nofralloc
#include "asm/d/com/d_com_static/reset__7daSus_cFv.s"
}
#pragma pop

/* 80031434-800314D4 02BD74 00A0+00 0/0 4/4 0/0 .text            check__7daSus_cFScRC4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::check(s8 param_0, cXyz const& param_1) {
    nofralloc
#include "asm/d/com/d_com_static/check__7daSus_cFScRC4cXyz.s"
}
#pragma pop

/* 800314D4-800315A4 02BE14 00D0+00 0/0 1/1 0/0 .text            check__7daSus_cFP10fopAc_ac_c */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::check(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/check__7daSus_cFP10fopAc_ac_c.s"
}
#pragma pop

/* 800315A4-8003160C 02BEE4 0068+00 0/0 2/2 0/0 .text            execute__7daSus_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSus_c::execute() {
    nofralloc
#include "asm/d/com/d_com_static/execute__7daSus_cFv.s"
}
#pragma pop

/* 8003160C-80031648 02BF4C 003C+00 0/0 0/0 1/1 .text            daNpcMsg_setEvtNum__FUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcMsg_setEvtNum(u8 param_0) {
    nofralloc
#include "asm/d/com/d_com_static/daNpcMsg_setEvtNum__FUc.s"
}
#pragma pop

/* 80031648-800316A8 02BF88 0060+00 0/0 0/0 6/6 .text daNpcKakashi_chkSwdTutorialStage__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_chkSwdTutorialStage() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_chkSwdTutorialStage__Fv.s"
}
#pragma pop

/* 800316A8-800316E0 02BFE8 0038+00 0/0 0/0 3/3 .text daNpcKakashi_setSwdTutorialStep__FUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_setSwdTutorialStep(u8 param_0) {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_setSwdTutorialStep__FUc.s"
}
#pragma pop

/* 800316E0-80031718 02C020 0038+00 0/0 1/1 4/4 .text            daNpcKakashi_getSwdTutorialStep__Fv
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_getSwdTutorialStep() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_getSwdTutorialStep__Fv.s"
}
#pragma pop

/* 80031718-80031754 02C058 003C+00 0/0 1/1 0/0 .text daNpcKakashi_getSwdTutorialResult__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_getSwdTutorialResult() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_getSwdTutorialResult__Fv.s"
}
#pragma pop

/* 80031754-800317A4 02C094 0050+00 0/0 0/0 1/1 .text daNpcKakashi_setSwdTutorialResult__Fb */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_setSwdTutorialResult(bool param_0) {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_setSwdTutorialResult__Fb.s"
}
#pragma pop

/* 800317A4-800317DC 02C0E4 0038+00 0/0 1/1 1/1 .text            daNpcKakashi_getSuccessCount__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_getSuccessCount() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_getSuccessCount__Fv.s"
}
#pragma pop

/* 800317DC-80031838 02C11C 005C+00 0/0 0/0 1/1 .text            daNpcKakashi_incSuccessCount__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_incSuccessCount() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_incSuccessCount__Fv.s"
}
#pragma pop

/* 80031838-80031870 02C178 0038+00 0/0 0/0 4/4 .text            daNpcKakashi_clrSuccessCount__Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daNpcKakashi_clrSuccessCount() {
    nofralloc
#include "asm/d/com/d_com_static/daNpcKakashi_clrSuccessCount__Fv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450D8C-80450D90 -00001 0004+00 0/0 1/1 3/3 .sbss            None */
/* 80450D8C 0001+00 data_80450D8C None */
/* 80450D8D 0001+00 data_80450D8D None */
/* 80450D8E 0002+00 data_80450D8E None */
extern u8 struct_80450D8C[4];
u8 struct_80450D8C[4];

/* 80450D90-80450D94 000290 0004+00 0/0 0/0 1/1 .sbss            m_aim_rate__8daYkgr_c */
u8 daYkgr_c::m_aim_rate[4];

/* 80450D94-80450D98 000294 0004+00 0/0 0/0 2/2 .sbss            m_path__8daYkgr_c */
u8 daYkgr_c::m_path[4];

/* 80450D98-80450D9C 000298 0004+00 0/0 1/1 2/2 .sbss            m_emitter__8daYkgr_c */
u8 daYkgr_c::m_emitter[4];

/* 80450D9C-80450DA4 00029C 0008+00 1/1 0/0 0/0 .sbss            arcName$4309 */
static u8 arcName[8];

/* 80031870-800318B4 02C1B0 0044+00 0/0 0/0 19/19 .text getArcName__12daSetBgObj_cFP10fopAc_ac_c
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daSetBgObj_c::getArcName(fopAc_ac_c* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/getArcName__12daSetBgObj_cFP10fopAc_ac_c.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451D28-80451D30 -00001 0008+00 0/0 0/0 3/3 .sdata2          M_dir_base__Q212daObjMovebox5Act_c
 */
SECTION_SDATA2 void* daObjMovebox::Act_c::M_dir_base[2] = {
    (void*)0x00004000,
    (void*)(((char*)mDoMch_Create__Fv) + 0x2BC),
};

/* 80451D30-80451D34 000330 0004+00 0/0 0/0 3/3 .sdata2          OPEN_SIZE__7daDsh_c */
SECTION_SDATA2 u32 daDsh_c::OPEN_SIZE = 0x43870CCD;

/* 80451D34-80451D38 000334 0004+00 0/0 0/0 1/1 .sdata2          OPEN_ACCEL__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::OPEN_ACCEL = 10.0f;

/* 80451D38-80451D3C 000338 0004+00 0/0 0/0 1/1 .sdata2          OPEN_SPEED__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::OPEN_SPEED = -40.0f;

/* 80451D3C-80451D40 00033C 0004+00 0/0 0/0 1/1 .sdata2          OPEN_BOUND_SPEED__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::OPEN_BOUND_SPEED = -30.0f;

/* 80451D40-80451D44 000340 0004+00 0/0 0/0 1/1 .sdata2          OPEN_BOUND_RATIO__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::OPEN_BOUND_RATIO = -2.0f / 5.0f;

/* 80451D44-80451D48 000344 0004+00 0/0 0/0 1/1 .sdata2          CLOSE_ACCEL__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::CLOSE_ACCEL = 10.0f;

/* 80451D48-80451D4C 000348 0004+00 0/0 0/0 1/1 .sdata2          CLOSE_SPEED__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::CLOSE_SPEED = 40.0f;

/* 80451D4C-80451D50 00034C 0004+00 0/0 0/0 1/1 .sdata2          CLOSE_BOUND_SPEED__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::CLOSE_BOUND_SPEED = 30.0f;

/* 80451D50-80451D54 000350 0004+00 0/0 0/0 1/1 .sdata2          CLOSE_BOUND_RATIO__7daDsh_c */
SECTION_SDATA2 f32 daDsh_c::CLOSE_BOUND_RATIO = -2.0f / 5.0f;

/* 80451D54-80451D58 000354 0004+00 1/1 0/0 0/0 .sdata2          @4338 */
SECTION_SDATA2 static u8 lit_4338[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 800318B4-8003194C 02C1F4 0098+00 0/0 1/1 0/0 .text            checkArea__13daTagStream_cFPC4cXyz
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagStream_c::checkArea(cXyz const* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/checkArea__13daTagStream_cFPC4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 8042457C-80424588 05129C 000C+00 1/2 0/0 1/1 .bss             m_entryModel__10daMirror_c */
u8 daMirror_c::m_entryModel[12];

/* 80450DA4-80450DA8 0002A4 0004+00 0/0 1/1 2/2 .sbss            m_top__13daTagStream_c */
u8 daTagStream_c::m_top[4];

/* 80450DA8-80450DAC 0002A8 0004+00 2/2 0/0 4/4 .sbss            m_myObj__10daMirror_c */
u8 daMirror_c::m_myObj[4];

/* 8003194C-80031990 02C28C 0044+00 0/0 1/1 9/9 .text            entry__10daMirror_cFP8J3DModel */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMirror_c::entry(J3DModel* param_0) {
    nofralloc
#include "asm/d/com/d_com_static/entry__10daMirror_cFP8J3DModel.s"
}
#pragma pop

/* 80031990-800319C8 02C2D0 0038+00 0/0 0/0 2/2 .text            remove__10daMirror_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMirror_c::remove() {
    nofralloc
#include "asm/d/com/d_com_static/remove__10daMirror_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80424588-80424594 0512A8 000C+00 1/2 0/0 1/1 .bss             m_deleteRoom__15dGrass_packet_c */
u8 dGrass_packet_c::m_deleteRoom[12];

/* 80450DAC-80450DB0 0002AC 0004+00 0/0 0/0 2/2 .sbss            m_myObj__9daGrass_c */
u8 daGrass_c::m_myObj[4];

/* 80450DB0-80450DB4 0002B0 0004+00 1/1 0/0 11/11 .sbss            m_grass__9daGrass_c */
u8 daGrass_c::m_grass[4];

/* 800319C8-80031A20 02C308 0058+00 0/0 0/0 1/1 .text            deleteRoomGrass__9daGrass_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrass_c::deleteRoomGrass(int param_0) {
    nofralloc
#include "asm/d/com/d_com_static/deleteRoomGrass__9daGrass_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80424594-804245A0 0512B4 000C+00 1/2 0/0 1/1 .bss             m_deleteRoom__16dFlower_packet_c */
u8 dFlower_packet_c::m_deleteRoom[12];

/* 80450DB4-80450DB8 0002B4 0004+00 1/1 0/0 9/9 .sbss            m_flower__9daGrass_c */
u8 daGrass_c::m_flower[4];

/* 80031A20-80031A78 02C360 0058+00 0/0 0/0 1/1 .text            deleteRoomFlower__9daGrass_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daGrass_c::deleteRoomFlower(int param_0) {
    nofralloc
#include "asm/d/com/d_com_static/deleteRoomFlower__9daGrass_cFi.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DB8-80450DBC 0002B8 0004+00 4/4 0/0 2/2 .sbss            m_myObj__6daMP_c */
u8 daMP_c::m_myObj[4];

/* 80031A78-80031AA4 02C3B8 002C+00 0/0 0/0 1/1 .text daMP_c_Get_MovieRestFrame__6daMP_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMP_c::daMP_c_Get_MovieRestFrame() {
    nofralloc
#include "asm/d/com/d_com_static/daMP_c_Get_MovieRestFrame__6daMP_cFv.s"
}
#pragma pop

/* 80031AA4-80031AD0 02C3E4 002C+00 0/0 0/0 1/1 .text daMP_c_Set_PercentMovieVolume__6daMP_cFf */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMP_c::daMP_c_Set_PercentMovieVolume(f32 param_0) {
    nofralloc
#include "asm/d/com/d_com_static/daMP_c_Set_PercentMovieVolume__6daMP_cFf.s"
}
#pragma pop

/* 80031AD0-80031B24 02C410 0054+00 0/0 1/1 1/1 .text            daMP_c_THPPlayerPlay__6daMP_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMP_c::daMP_c_THPPlayerPlay() {
    nofralloc
#include "asm/d/com/d_com_static/daMP_c_THPPlayerPlay__6daMP_cFv.s"
}
#pragma pop

/* 80031B24-80031B50 02C464 002C+00 0/0 0/0 1/1 .text            daMP_c_THPPlayerPause__6daMP_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daMP_c::daMP_c_THPPlayerPause() {
    nofralloc
#include "asm/d/com/d_com_static/daMP_c_THPPlayerPause__6daMP_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DBC-80450DC0 0002BC 0004+00 1/1 0/0 3/3 .sbss            mTagMagne__12daTagMagne_c */
u8 daTagMagne_c::mTagMagne[4];

/* 80031B50-80031BF4 02C490 00A4+00 0/0 4/4 0/0 .text
 * checkMagnetCode__12daTagMagne_cFR13cBgS_PolyInfo             */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMagne_c::checkMagnetCode(cBgS_PolyInfo& param_0) {
    nofralloc
#include "asm/d/com/d_com_static/checkMagnetCode__12daTagMagne_cFR13cBgS_PolyInfo.s"
}
#pragma pop

/* 80031BF4-80031C48 02C534 0054+00 1/1 0/0 0/0 .text            checkMagneA__12daTagMagne_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMagne_c::checkMagneA() {
    nofralloc
#include "asm/d/com/d_com_static/checkMagneA__12daTagMagne_cFv.s"
}
#pragma pop

/* 80031C48-80031C9C 02C588 0054+00 1/1 0/0 0/0 .text            checkMagneB__12daTagMagne_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMagne_c::checkMagneB() {
    nofralloc
#include "asm/d/com/d_com_static/checkMagneB__12daTagMagne_cFv.s"
}
#pragma pop

/* 80031C9C-80031CF0 02C5DC 0054+00 1/1 0/0 0/0 .text            checkMagneC__12daTagMagne_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMagne_c::checkMagneC() {
    nofralloc
#include "asm/d/com/d_com_static/checkMagneC__12daTagMagne_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DC0-80450DC4 -00001 0004+00 4/4 0/0 2/2 .sbss            None */
/* 80450DC0 0001+00 data_80450DC0 None */
/* 80450DC1 0003+00 data_80450DC1 None */
extern u8 struct_80450DC0[4];
u8 struct_80450DC0[4];

/* 80031CF0-80031CF8 02C630 0008+00 0/0 1/1 0/0 .text            getPlayerNo__11daTagMist_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daTagMist_c::getPlayerNo() {
    nofralloc
#include "asm/d/com/d_com_static/getPlayerNo__11daTagMist_cFv.s"
}
#pragma pop

/* 80031CF8-80031D04 02C638 000C+00 0/0 1/1 0/0 .text            clrSaveFlag__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::clrSaveFlag() {
    nofralloc
#include "asm/d/com/d_com_static/clrSaveFlag__12daObjCarry_cFv.s"
}
#pragma pop

/* 80031D04-80031D10 02C644 000C+00 0/0 1/1 0/0 .text            setSaveFlag__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setSaveFlag() {
    nofralloc
#include "asm/d/com/d_com_static/setSaveFlag__12daObjCarry_cFv.s"
}
#pragma pop

/* 80031D10-80031D24 02C650 0014+00 0/0 0/0 1/1 .text            chkSaveFlag__12daObjCarry_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::chkSaveFlag() {
    nofralloc
#include "asm/d/com/d_com_static/chkSaveFlag__12daObjCarry_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 804245A0-804245AC 0512C0 000C+00 0/1 0/0 0/0 .bss             @4480 */
#pragma push
#pragma force_active on
static u8 lit_4480[12];
#pragma pop

/* 804245AC-804245E8 0512CC 003C+00 3/4 0/0 0/0 .bss             mPos__12daObjCarry_c */
u8 daObjCarry_c::mPos[60];

/* 80031D24-80031D38 02C664 0014+00 0/0 0/0 1/1 .text            getPos__12daObjCarry_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::getPos(int param_0) {
    nofralloc
#include "asm/d/com/d_com_static/getPos__12daObjCarry_cFi.s"
}
#pragma pop

/* 80031D38-80031D64 02C678 002C+00 0/0 0/0 2/2 .text            savePos__12daObjCarry_cFi4cXyz */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::savePos(int param_0, cXyz param_1) {
    nofralloc
#include "asm/d/com/d_com_static/savePos__12daObjCarry_cFi4cXyz.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DC4-80450DCC 0002C4 0005+03 3/3 0/0 0/0 .sbss            mSttsFlag__12daObjCarry_c */
u8 daObjCarry_c::mSttsFlag[5 + 3 /* padding */];

/* 80031D64-80031D78 02C6A4 0014+00 0/0 0/0 1/1 .text            onSttsFlag__12daObjCarry_cFiUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::onSttsFlag(int param_0, u8 param_1) {
    nofralloc
#include "asm/d/com/d_com_static/onSttsFlag__12daObjCarry_cFiUc.s"
}
#pragma pop

/* 80031D78-80031D8C 02C6B8 0014+00 0/0 0/0 1/1 .text            offSttsFlag__12daObjCarry_cFiUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::offSttsFlag(int param_0, u8 param_1) {
    nofralloc
#include "asm/d/com/d_com_static/offSttsFlag__12daObjCarry_cFiUc.s"
}
#pragma pop

/* 80031D8C-80031DAC 02C6CC 0020+00 0/0 0/0 1/1 .text            chkSttsFlag__12daObjCarry_cFiUc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::chkSttsFlag(int param_0, u8 param_1) {
    nofralloc
#include "asm/d/com/d_com_static/chkSttsFlag__12daObjCarry_cFiUc.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DCC-80450DD4 0002CC 0005+03 2/2 0/0 0/0 .sbss            mRoomNo__12daObjCarry_c */
u8 daObjCarry_c::mRoomNo[5 + 3 /* padding */];

/* 80031DAC-80031DB8 02C6EC 000C+00 0/0 0/0 2/2 .text            setRoomNo__12daObjCarry_cFiSc */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::setRoomNo(int param_0, s8 param_1) {
    nofralloc
#include "asm/d/com/d_com_static/setRoomNo__12daObjCarry_cFiSc.s"
}
#pragma pop

/* 80031DB8-80031DC4 02C6F8 000C+00 0/0 0/0 1/1 .text            getRoomNo__12daObjCarry_cFi */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daObjCarry_c::getRoomNo(int param_0) {
    nofralloc
#include "asm/d/com/d_com_static/getRoomNo__12daObjCarry_cFi.s"
}
#pragma pop

/* 80031DC4-80031EAC 02C704 00E8+00 0/0 1/0 0/0 .text            __sinit_d_com_static_cpp */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void __sinit_d_com_static_cpp() {
    nofralloc
#include "asm/d/com/d_com_static/__sinit_d_com_static_cpp.s"
}
#pragma pop

#pragma push
#pragma force_active on
SECTION_CTORS void* const _ctors_80031DC4 = (void*)__sinit_d_com_static_cpp;
#pragma pop

/* 80031EAC-80031EE4 02C7EC 0038+00 1/1 0/0 0/0 .text            __arraydtor$4479 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_80031EAC() {
    nofralloc
#include "asm/d/com/d_com_static/func_80031EAC.s"
}
#pragma pop

/* 80031EE4-80031EF0 02C824 000C+00 1/1 0/0 0/0 .text            __ct__Q27daSus_c6room_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSus_c::room_c::room_c() {
    nofralloc
#include "asm/d/com/d_com_static/__ct__Q27daSus_c6room_cFv.s"
}
#pragma pop

/* 80031EF0-80031F28 02C830 0038+00 1/1 0/0 0/0 .text            __arraydtor$3839 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_80031EF0() {
    nofralloc
#include "asm/d/com/d_com_static/func_80031EF0.s"
}
#pragma pop

/* 80031F28-80031F64 02C868 003C+00 2/2 0/0 0/0 .text            __dt__Q27daSus_c6data_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSus_c::data_c::~data_c() {
    nofralloc
#include "asm/d/com/d_com_static/__dt__Q27daSus_c6data_cFv.s"
}
#pragma pop

/* 80031F64-80031F94 02C8A4 0030+00 1/1 0/0 0/0 .text            __ct__Q27daSus_c6data_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm daSus_c::data_c::data_c() {
    nofralloc
#include "asm/d/com/d_com_static/__ct__Q27daSus_c6data_cFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80450DD1-80450DD5 -00001 0004+00 0/0 0/0 0/0 .sbss            None */
#pragma push
#pragma force_active on
static u8 pad_80450DD1[4];
#pragma pop

/* 803790B0-803790C0 005710 0010+00 2/2 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
#pragma section ".dead"
SECTION_DEAD static char const* const stringBase_803790B0 = "F_SP103";
SECTION_DEAD static char const* const stringBase_803790B8 = "@bg%04x";
#pragma pop