//
// Generated By: dol2asm
// Translation Unit: Z2LinkMgr
//

#include "Z2AudioLib/Z2LinkMgr.h"
#include "Z2AudioLib/Z2Creature.h"
#include "d/d_com_inf_game.h"
#include "dol2asm.h"
#include "global.h"

struct Z2SoundObjCoach {
    /* 802C54B8 */ Z2SoundObjCoach();
    /* 802C54FC */ void init(Vec*, u8);
    /* 802C551C */ void startWheelSound(f32);
    /* 802C56C0 */ void startFireSound(u16);
    /* 802C57C0 */ int startSound(JAISoundID, u32, s8);
};

/* 802C321C-802C3220 2BDB5C 0004+00 0/0 1/1 0/0 .text setLinkGroupInfo__14Z2CreatureLinkFUc */
void Z2CreatureLink::setLinkGroupInfo(u8) {}

/* 802C3220-802C3228 -00001 0008+00 0/0 0/0 0/0 .text            setLinkHp__14Z2CreatureLinkFll */
void Z2CreatureLink::setLinkHp(s32 i_hp, s32) {
    mLinkHp = i_hp;
}

/* 802C3228-802C328C 2BDB68 0064+00 0/0 1/1 0/0 .text setLinkSwordType__14Z2CreatureLinkFll */
void Z2CreatureLink::setLinkSwordType(s32 i_swordType, s32 param_1) {
    mLinkSwordType = i_swordType;
    mFlag3 = param_1 == 1;

    if (mLinkSwordType != 0) {
        if (mLinkShieldType != 0 && !mFlag4) {
            mFlag5 = true;
            return;
        }
    }

    mFlag5 = false;
}

/* 802C328C-802C32F0 2BDBCC 0064+00 0/0 1/1 0/0 .text setLinkShieldType__14Z2CreatureLinkFll */
void Z2CreatureLink::setLinkShieldType(s32 i_shieldType, s32 param_1) {
    mLinkShieldType = i_shieldType;
    mFlag4 = param_1 == 1;

    if (mLinkSwordType != 0) {
        if (mLinkShieldType != 0 && !mFlag4) {
            mFlag5 = true;
            return;
        }
    }

    mFlag5 = false;
}

/* 802C32F0-802C333C 2BDC30 004C+00 0/0 1/1 0/0 .text setLinkBootsType__14Z2CreatureLinkFl */
void Z2CreatureLink::setLinkBootsType(s32 i_bootsType) {
    mLinkBootsType = i_bootsType;

    if (Z2GetSceneMgr()->isSceneExist()) {
        startLinkSound(Z2SE_AL_CHANGE_BOOTS, 0, -1);
    }
}

/* 80451360-80451368 000860 0004+04 3/3 15/15 0/0 .sbss            mLinkPtr__14Z2CreatureLink */
Z2CreatureLink* Z2CreatureLink::mLinkPtr;

/* 802C333C-802C3464 2BDC7C 0128+00 0/0 1/1 0/0 .text            __ct__14Z2CreatureLinkFv */
Z2CreatureLink::Z2CreatureLink() {
    mLinkState = 0;
    mLinkPtr = this;

    field_0xc1 = 0xFF;
    mWolfEyeOpen = false;
    mInWater = false;
    mMarkState = 0;
    mResumeAttack = false;

    setSoundStarter(this);
    mKantera.setSoundStarter(this);

    mLinkHp = 0;
    mLinkBootsType = 0;
    mKanteraState = 0;
    mLinkSwordType = 0;
    mLinkShieldType = 0;
    mFlag3 = false;
    mFlag4 = false;
    mFlag5 = false;
    mRiding = false;
    mMagnetized = false;
    mUsingIronBall = false;
}

/* 802C3464-802C3500 2BDDA4 009C+00 1/0 0/0 0/0 .text            __dt__18Z2LinkSoundStarterFv */
inline Z2LinkSoundStarter::~Z2LinkSoundStarter() {}

/* 802C3500-802C35F8 2BDE40 00F8+00 2/1 1/1 0/0 .text            __dt__14Z2CreatureLinkFv */
Z2CreatureLink::~Z2CreatureLink() {
    deleteObject();
}

/* 802C35F8-802C3638 2BDF38 0040+00 1/0 0/0 0/0 .text            deleteObject__14Z2CreatureLinkFv */
void Z2CreatureLink::deleteObject() {
    if (mKantera.isAlive()) {
        deleteKantera();
    }

    Z2Creature::deleteObject();
}

/* 802C3638-802C3710 2BDF78 00D8+00 0/0 1/1 0/0 .text init__14Z2CreatureLinkFP3VecP3VecP3Vec */
void Z2CreatureLink::init(Vec* param_0, Vec* param_1, Vec* param_2) {
    OS_REPORT("[Z2CreatureLink::init]");

    Z2Creature::init(param_0, param_1, param_2, 6, 1, 2);
    Z2GetAudience()->getLinkMic()->setPosPtr(getCurrentPos());

    field_0xc1 = 0xFF;
    mWolfEyeOpen = false;
    mInWater = false;
    mMarkState = 0;
    mResumeAttack = false;
    mKanteraState = 0;
    mRiding = false;
    mMagnetized = false;
    mUsingIronBall = false;
    field_0xb4 = *param_0;
    mMoveSpeed = 0;
    mMovingTime = 0;
    mSinkDepth = -1;
}

/* 802C3710-802C374C 2BE050 003C+00 0/0 1/1 0/0 .text            initKantera__14Z2CreatureLinkFP3Vec
 */
void Z2CreatureLink::initKantera(Vec* i_pos) {
    mKanteraState = 0;
    mKantera.init(i_pos, 2);
}

/* 802C374C-802C3778 2BE08C 002C+00 1/1 1/1 0/0 .text            deleteKantera__14Z2CreatureLinkFv
 */
void Z2CreatureLink::deleteKantera() {
    mKanteraState = 0;
    mKantera.deleteObject();
}

/* 802C3778-802C3780 -00001 0008+00 0/0 0/0 0/0 .text setKanteraState__14Z2CreatureLinkFUc */
void Z2CreatureLink::setKanteraState(u8 i_state) {
    mKanteraState = i_state;
}

/* 802C3780-802C3A64 2BE0C0 02E4+00 1/0 0/0 0/0 .text            framework__14Z2CreatureLinkFUlSc */
void Z2CreatureLink::framework(u32 param_0, s8 param_1) {
    Z2Creature::framework(param_0, param_1);

    if (mKantera.isAlive()) {
        mKantera.framework(param_0, param_1);
    }

    if (field_0xc1 != 0xFF) {
        field_0xc1++;
    }

    if (mWolfEyeOpen) {
        Z2GetSeMgr()->seStartLevel(Z2SE_WOLF_SENSE_OPEN, NULL, 0, 0, 1.0f, 1.0f, -1.0f, -1.0f, 0);
    }

    if (isInWater()) {
        f32 var_f31 = Z2GetStatusMgr()->getCameraInWaterDepthRatio();
        if (var_f31 > 0.0f) {
            JAISoundHandle* var_r29 = startLinkSoundLevel(Z2SE_AL_UNDERWATER_BUBBLE, 0, -1);
            if (var_r29 != NULL && *var_r29) {
                (*var_r29)->getAuxiliary().moveVolume(var_f31, 0);
            }
        }
    }

    if (mMagnetized) {
        startLinkSoundLevel(Z2SE_AL_MAGNETIZED, 0, -1);
    }

    mMoveSpeed = 0;

    if (getCurrentPos() != NULL) {
        field_0xb4.y = getCurrentPos()->y;
        mMoveSpeed = sqrtf(VECSquareDistance(getCurrentPos(), &field_0xb4));
        field_0xb4.x = getCurrentPos()->x;
        field_0xb4.z = getCurrentPos()->z;
    }

    if (Z2GetStatusMgr()->getDemoStatus() == 10) {
        mMovingTime = 180;
    } else if (mMoveSpeed < 5) {
        if (mMovingTime < 180) {
            mMovingTime++;
        }
    } else if (mMovingTime != 0) {
        mMovingTime--;
    }
}

/* 802C3A64-802C3A6C -00001 0008+00 0/0 0/0 0/0 .text            setSinkDepth__14Z2CreatureLinkFSc
 */
void Z2CreatureLink::setSinkDepth(s8 i_sinkDepth) {
    mSinkDepth = i_sinkDepth;
}

/* 802C3A6C-802C3AEC 2BE3AC 0080+00 0/0 4/4 0/0 .text            setRiding__14Z2CreatureLinkFb */
void Z2CreatureLink::setRiding(bool i_isRiding) {
    if (mRiding != i_isRiding) {
        if (i_isRiding) {
            Z2GetAudience()->setTargetVolume(0.35f, 0);
        } else {
            Z2GetAudience()->setTargetVolume(0.0f, 0);
        }

        mRiding = i_isRiding;
    }
}

/* 802C3AEC-802C3AFC 2BE42C 0010+00 0/0 5/5 0/0 .text            setMagnetized__14Z2CreatureLinkFb
 */
void Z2CreatureLink::setMagnetized(bool i_isMagnetized) {
    mMagnetized = i_isMagnetized;
}

/* 802C3AFC-802C3BD4 2BE43C 00D8+00 0/0 2/2 0/0 .text            setWolfEyeOpen__14Z2CreatureLinkFb
 */
void Z2CreatureLink::setWolfEyeOpen(bool i_wolfEyeOpen) {
    mWolfEyeOpen = i_wolfEyeOpen;

    if (mWolfEyeOpen) {
        Z2GetSeMgr()->seStart(Z2SE_WOLF_SENSE_OPEN_START, NULL, 0, 0, 1.0f, 1.0f, -1.0f, -1.0f, 0);
        Z2GetFxLineMgr()->setFxForceOff(true);
        Z2GetSoundObjMgr()->setGhostEnemyState(32);
    } else {
        Z2GetSeMgr()->seStart(Z2SE_WOLF_SENSE_CLOSE, NULL, 0, 0, 1.0f, 1.0f, -1.0f, -1.0f, 0);
        Z2GetFxLineMgr()->setFxForceOff(false);
        Z2GetSoundObjMgr()->setGhostEnemyState(16);
    }
}

/* 802C3BD4-802C3E68 2BE514 0294+00 3/3 3/3 0/0 .text
 * startLinkSound__14Z2CreatureLinkF10JAISoundIDUlSc            */
// stopSound seems to store to the stack twice
Z2SoundHandlePool* Z2CreatureLink::startLinkSound(JAISoundID i_soundID, u32 param_1, s8 param_2) {
    Z2SoundHandlePool* var_r30 = startCreatureSound(i_soundID, param_1, param_2);

    switch (i_soundID) {
    case Z2SE_AL_DAMAGE_NORMAL:
    case Z2SE_AL_DAMAGE_LARGE:
    case Z2SE_AL_FREEZE:
        Z2GetSeqMgr()->onEnemyDamage();
        break;
    case Z2SE_LK_HS_SHOOT:
        mSoundObjAnime.stopSound(Z2SE_AL_HS_OPEN, 0);
        break;
    case Z2SE_AL_SINK_SAND_OUT:
        if (var_r30 != NULL && *var_r30) {
            f32 var_f31 = Z2Calc::linearTransform(mSinkDepth, 32.0f, 127.0f, 0.4f, 1.0f, false);
            f32 var_f30 = Z2Calc::linearTransform(mSinkDepth, 32.0f, 127.0f, 1.0f, 0.7f, false);
            
            (*var_r30)->getAuxiliary().moveVolume(var_f31, 0);
            (*var_r30)->getAuxiliary().movePitch(var_f30, 0);
        }
        break;
    case Z2SE_AL_SINK_SNOW_OUT:
        if (var_r30 != NULL && *var_r30) {
            f32 var_f29 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 23.0f, 0.5f, 1.0f, false);
            f32 var_f28 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 23.0f, 1.0f, 0.7f, false);
            
            (*var_r30)->getAuxiliary().moveVolume(var_f29, 0);
            (*var_r30)->getAuxiliary().movePitch(var_f28, 0);
        }
        break;
    }

    return var_r30;
}

/* 802C3E68-802C4320 2BE7A8 04B8+00 1/1 3/3 0/0 .text
 * startLinkSoundLevel__14Z2CreatureLinkF10JAISoundIDUlSc       */
// NONMATCHING - small issue with i_soundID in startCreatureSoundLevel call
JAISoundHandle* Z2CreatureLink::startLinkSoundLevel(JAISoundID i_soundID, u32 param_1, s8 param_2) {
    if (i_soundID == Z2SE_AL_LIGHTNING_SW_GLOW && (Z2GetStatusMgr()->getDemoStatus() == 2 || !Z2GetSceneMgr()->isInGame())) {
        return NULL;
    }

    Z2SoundHandlePool* temp_r3 = startCreatureSoundLevel(i_soundID, param_1, param_2);
    if (temp_r3 != NULL && *temp_r3) {
        f32 var_f31 = 1.0f;
        f32 var_f30 = 1.0f;
        int var_r30 = 0;

        switch (i_soundID) {
        case Z2SE_AL_SINK_SAND_LEVEL:
            if (mSinkDepth > 0) {
                var_f31 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 127.0f, 0.4f, 1.0f, true);
                var_f30 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 127.0f, 1.0f, 0.7f, true);
            }
            break;
        case Z2SE_AL_SINK_SNOW_LEVEL:
            if (mSinkDepth > 0) {
                var_f31 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 23.0f, 0.7f, 1.0f, true);
                var_f30 = Z2Calc::linearTransform(mSinkDepth, 0.0f, 23.0f, 1.0f, 0.7f, true);
            }
            break;
        case Z2SE_AL_SPINNER_RIDE:
            var_f30 = Z2Calc::getParamByExp(mMoveSpeed, 0.0f, 30.0f, 0.3f, 0.8f, 1.0f, Z2Calc::CURVE_SIGN_0);

            if (mMoveSpeed == 0 && mMovingTime > 120) {
                var_f31 = Z2Calc::getParamByExp(mMovingTime, 180.0f, 120.0f, 0.6f, 0.0f, 0.4f, Z2Calc::CURVE_SIGN_0);
            } else {
                var_f31 = Z2Calc::getParamByExp(mMoveSpeed, 0.0f, 30.0f, 0.6f, 0.4f, 1.0f, Z2Calc::CURVE_SIGN_0);
            }
            break;
        case Z2SE_AL_SPINNER_RAIL:
            var_f30 = Z2Calc::getParamByExp(mMoveSpeed, 0.0f, 80.0f, 0.3f, 0.8f, 1.2f, Z2Calc::CURVE_SIGN_0);
            break;
        case Z2SE_AL_SNOBO_RIDE:
        case Z2SE_AL_SNOBO_BREAK:
            if (dComIfGs_isEventBit(dSv_event_flag_c::saveBitLabels[266]) && Z2GetSeqMgr()->getSubBgmID() != Z2BGM_SNOW_BOARD) {
                var_f31 = 0.0f;
                var_r30 = 0;
            } else if (mMoveSpeed == 0) {
                var_f31 = 0.0f;
                var_r30 = 10;
            } else {
                var_f31 = Z2Calc::getParamByExp(mMoveSpeed, 0.0f, 80.0f, 0.25f, 0.4f, 1.0f, Z2Calc::CURVE_SIGN_0);
            }

            var_f30 = Z2Calc::getParamByExp(mMoveSpeed, 0.0f, 80.0f, 0.3f, 0.5f, 1.1f, Z2Calc::CURVE_SIGN_0);
            break;
        case Z2SE_AL_LIGHTNING_SW_GLOW:
            f32 temp_f1_2 = (*temp_r3)->getAuxiliary().mTransition.mVolume.mDest;
            if (Z2GetStatusMgr()->getDemoStatus() == 2 && temp_f1_2 != 0.3f) {
                var_f31 = 0.3f;
                var_r30 = 45;
            } else if (temp_f1_2 != 1.0f) {
                var_f31 = 1.0f;
                var_r30 = 45;
            }
            break;
        }

        (*temp_r3)->getAuxiliary().moveVolume(var_f31, var_r30);
        (*temp_r3)->getAuxiliary().movePitch(var_f30, 0);
    }

    return temp_r3;
}

/* 802C4320-802C45B0 2BEC60 0290+00 1/1 1/1 0/0 .text
 * startLinkVoice__14Z2CreatureLinkF10JAISoundIDSc              */
void Z2CreatureLink::startLinkVoice(JAISoundID param_0, s8 param_1) {
    // NONMATCHING
}

/* 802C45B0-802C46F0 2BEEF0 0140+00 0/0 1/1 0/0 .text
 * startLinkVoiceLevel__14Z2CreatureLinkF10JAISoundIDSc         */
void Z2CreatureLink::startLinkVoiceLevel(JAISoundID param_0, s8 param_1) {
    // NONMATCHING
}

/* 802C46F0-802C4784 2BF030 0094+00 0/0 2/2 0/0 .text
 * startLinkSwordSound__14Z2CreatureLinkF10JAISoundIDUlSc       */
void Z2CreatureLink::startLinkSwordSound(JAISoundID i_soundID, u32 id, s8 ch) {
    u32 soundID = i_soundID;

    switch (soundID) {
    case Z2SE_SWORD_POWER_COME:
        startCreatureExtraSoundLevel(soundID, id, ch);
        break;
    case Z2SE_WOLF_POWER_COME:
        startCreatureExtraSoundLevel(soundID, id, ch);
        break;
    default:
        startCreatureExtraSound(soundID, id, ch);
        break;
    }
}

/* 802C4784-802C4814 2BF0C4 0090+00 1/0 0/0 0/0 .text startCollisionSE__14Z2CreatureLinkFUlUl */
Z2SoundHandlePool* Z2CreatureLink::startCollisionSE(u32 hitID, u32 mapinfo) {
    switch (mapinfo) {
    case 0x28:
    case 0x29:
    case 0x2A:
        Z2GetSeqMgr()->onEnemyDamage();
        break;
    case 0x20:
        if (hitID == Z2SE_HIT_SWORD_STAB) {
            Z2GetSeqMgr()->setBattleLastHit(0x14);
        }
        break;
    }

    return mSoundObjAnime.startCollisionSE(hitID, mapinfo, NULL);
}

/* ############################################################################################## */
/* 80455D18-80455D1C 004318 0004+00 1/1 0/0 0/0 .sdata2          @4178 */
SECTION_SDATA2 static f32 lit_4178 = 100.0f;

/* 802C4814-802C48D8 2BF154 00C4+00 0/0 4/4 2/2 .text
 * startHitItemSE__14Z2CreatureLinkFUlUlP14Z2SoundObjBasef      */
int Z2CreatureLink::startHitItemSE(u32 param_0, u32 param_1, Z2SoundObjBase* param_2,
                                       f32 speed) {
    // NONMATCHING
}

/* 802C48D8-802C48E8 2BF218 0010+00 0/0 1/1 0/0 .text            setResumeAttack__14Z2CreatureLinkFb
 */
void Z2CreatureLink::setResumeAttack(bool i_resumeAttack) {
    mResumeAttack = i_resumeAttack;
}

/* 802C48E8-802C4928 2BF228 0040+00 1/1 0/0 0/0 .text            __ct__18Z2LinkSoundStarterFv */
Z2LinkSoundStarter::Z2LinkSoundStarter() : Z2SoundStarter(false) {}

/* ############################################################################################## */
/* 80455D1C-80455D20 00431C 0004+00 2/2 0/0 0/0 .sdata2          @4399 */
SECTION_SDATA2 static f32 lit_4399 = 9.0f / 10.0f;

/* 802C4928-802C4FFC 2BF268 06D4+00 2/0 0/0 0/0 .text
 * startSound__18Z2LinkSoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f>UlfffffUl */
bool Z2LinkSoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                        JGeometry::TVec3<f32> const* param_2, u32 param_3,
                                        f32 param_4, f32 param_5, f32 param_6, f32 param_7,
                                        f32 param_8, u32 param_9) {
    // NONMATCHING
}

/* 802C4FFC-802C5078 2BF93C 007C+00 0/0 0/0 3/3 .text            __ct__14Z2CreatureRideFv */
Z2CreatureRide::Z2CreatureRide() : Z2RideSoundStarter(this) {
    mLinkRiding = false;

    setSoundStarter(this);
}

/* 802C5078-802C5114 2BF9B8 009C+00 1/0 0/0 0/0 .text            __dt__18Z2RideSoundStarterFv */
inline Z2RideSoundStarter::~Z2RideSoundStarter() {
    // NONMATCHING
}

/* 802C5114-802C51EC 2BFA54 00D8+00 2/1 0/0 2/2 .text            __dt__14Z2CreatureRideFv */
Z2CreatureRide::~Z2CreatureRide() {
    // NONMATCHING
}

/* 802C51EC-802C520C 2BFB2C 0020+00 1/0 0/0 0/0 .text            deleteObject__14Z2CreatureRideFv */
void Z2CreatureRide::deleteObject() {
    Z2Creature::deleteObject();
}

/* 802C520C-802C522C 2BFB4C 0020+00 0/0 0/0 3/3 .text init__14Z2CreatureRideFP3VecP3VecUcUc */
void Z2CreatureRide::init(Vec* param_0, Vec* param_1, u8 param_2, u8 param_3) {
    Z2Creature::init(param_0, param_1, param_2, param_3);
}

/* 802C522C-802C5234 -00001 0008+00 0/0 0/0 0/0 .text            setLinkRiding__14Z2CreatureRideFb
 */
void Z2CreatureRide::setLinkRiding(bool isRiding) {
    mLinkRiding = isRiding;
}

/* 802C5234-802C5284 2BFB74 0050+00 1/1 0/0 0/0 .text __ct__18Z2RideSoundStarterFP14Z2CreatureRide
 */
Z2RideSoundStarter::Z2RideSoundStarter(Z2CreatureRide* ride) : Z2SoundStarter(false) {
    mRide = ride;
}

/* 802C5284-802C54B8 2BFBC4 0234+00 2/0 0/0 0/0 .text
 * startSound__18Z2RideSoundStarterF10JAISoundIDP14JAISoundHandlePCQ29JGeometry8TVec3<f>UlfffffUl */
bool Z2RideSoundStarter::startSound(JAISoundID param_0, JAISoundHandle* param_1,
                                        JGeometry::TVec3<f32> const* param_2, u32 param_3,
                                        f32 param_4, f32 param_5, f32 param_6, f32 param_7,
                                        f32 param_8, u32 param_9) {
    // NONMATCHING
}

/* 802C54B8-802C54FC 2BFDF8 0044+00 0/0 0/0 1/1 .text            __ct__15Z2SoundObjCoachFv */
Z2SoundObjCoach::Z2SoundObjCoach() {
    // NONMATCHING
}

/* 802C54FC-802C551C 2BFE3C 0020+00 1/0 0/0 0/0 .text            init__15Z2SoundObjCoachFP3VecUc */
void Z2SoundObjCoach::init(Vec* param_0, u8 param_1) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80455D20-80455D24 004320 0004+00 1/1 0/0 0/0 .sdata2          @4621 */
SECTION_SDATA2 static f32 lit_4621 = 2.0f;

/* 80455D24-80455D28 004324 0004+00 1/1 0/0 0/0 .sdata2          @4622 */
SECTION_SDATA2 static f32 lit_4622 = 35.0f;

/* 80455D28-80455D2C 004328 0004+00 1/1 0/0 0/0 .sdata2          @4623 */
SECTION_SDATA2 static f32 lit_4623 = 22.0f / 25.0f;

/* 80455D2C-80455D30 00432C 0004+00 3/3 0/0 0/0 .sdata2          @4624 */
SECTION_SDATA2 static f32 lit_4624 = 1.25f;

/* 80455D30-80455D34 004330 0004+00 2/2 0/0 0/0 .sdata2          @4625 */
SECTION_SDATA2 static f32 lit_4625 = 50.0f;

/* 802C551C-802C56C0 2BFE5C 01A4+00 0/0 0/0 1/1 .text startWheelSound__15Z2SoundObjCoachFf */
void Z2SoundObjCoach::startWheelSound(f32 param_0) {
    // NONMATCHING
}

/* ############################################################################################## */
/* 80455D34-80455D38 004334 0004+00 1/1 0/0 0/0 .sdata2          @4645 */
SECTION_SDATA2 static f32 lit_4645 = 1500.0f;

/* 80455D38-80455D3C 004338 0004+00 2/2 0/0 0/0 .sdata2          @4646 */
SECTION_SDATA2 static f32 lit_4646 = 1.0f / 5.0f;

/* 80455D3C-80455D40 00433C 0004+00 2/2 0/0 0/0 .sdata2          @4647 */
SECTION_SDATA2 static f32 lit_4647 = 17.0f / 20.0f;

/* 802C56C0-802C57C0 2C0000 0100+00 0/0 0/0 1/1 .text startFireSound__15Z2SoundObjCoachFUs */
void Z2SoundObjCoach::startFireSound(u16 param_0) {
    // NONMATCHING
}

/* 802C57C0-802C588C 2C0100 00CC+00 1/0 0/0 0/0 .text
 * startSound__15Z2SoundObjCoachF10JAISoundIDUlSc               */
int Z2SoundObjCoach::startSound(JAISoundID param_0, u32 param_1, s8 param_2) {
    // NONMATCHING
}
