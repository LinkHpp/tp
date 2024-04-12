//
// Generated By: dol2asm
// Translation Unit: JAISeq
//

#include "JSystem/JAudio2/JAISeq.h"
#include "JSystem/JAudio2/JAISeqMgr.h"
#include "JSystem/JAudio2/JAISoundChild.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "dol2asm.h"

//
// Forward References:
//

extern "C" static bool func_802A0A6C(JASTrack*);
extern "C" void func_802A0A8C();
extern "C" void func_802A0B64();
extern "C" void playSeqData___6JAISeqFRC14JASSoundParams16JAISoundActivity();
extern "C" void reserveChildTracks___6JAISeqFi();
extern "C" void releaseChildTracks___6JAISeqFv();
extern "C" void prepare_getSeqData___6JAISeqFv();
extern "C" void prepare___6JAISeqFRC14JASSoundParams16JAISoundActivity();
extern "C" void JAISeqMgr_calc___6JAISeqFv();
extern "C" void die___6JAISeqFv();
extern "C" void func_802A1268(void* _this);
extern "C" void JAISound_tryDie___6JAISeqFv();
extern "C" void mixOut___6JAISeqFRC14JASSoundParams16JAISoundActivity();
extern "C" void JAISeqMgr_mixOut___6JAISeqFRC14JASSoundParams16JAISoundActivity();
extern "C" s32 getNumChild__6JAISeqCFv();
extern "C" void getChild__6JAISeqFi();
extern "C" void releaseChild__6JAISeqFi();
extern "C" void getTrack__6JAISeqFv();
extern "C" void getChildTrack__6JAISeqFi();
extern "C" void asSeq__6JAISeqFv();
extern "C" void getTempoMgr__6JAISeqFv();

//
// External References:
//

extern "C" void __ct__17JASGenericMemPoolFv();
extern "C" void __dt__17JASGenericMemPoolFv();
extern "C" void alloc__17JASGenericMemPoolFUl();
extern "C" void free__17JASGenericMemPoolFPvUl();
extern "C" void __ct__8JASTrackFv();
extern "C" void __dt__8JASTrackFv();
extern "C" void setChannelMgrCount__8JASTrackFUl();
extern "C" void assignExtBuffer__8JASTrackFUlP14JASSoundParams();
extern "C" void setSeqData__8JASTrackFPvUl();
extern "C" void startSeq__8JASTrackFv();
extern "C" void stopSeq__8JASTrackFv();
extern "C" void connectChild__8JASTrackFUlP8JASTrack();
extern "C" void mute__8JASTrackFb();
extern "C" void pause__8JASTrackFb();
extern "C" void setTempoRate__8JASTrackFf();
extern "C" void func_802932E0(void* _this);
extern "C" void mixOutAll__14JAISoundParamsFRC14JASSoundParamsP14JASSoundParamsf();
extern "C" void __ct__8JAISoundFv();
extern "C" void func_802A2328();
extern "C" bool asSe__8JAISoundFv();
extern "C" bool asStream__8JAISoundFv();
extern "C" void die_JAISound___8JAISoundFv();
extern "C" void increasePrepareCount_JAISound___8JAISoundFv();
extern "C" void calc_JAISound___8JAISoundFv();
extern "C" void initTrack_JAISound___8JAISoundFP8JASTrack();
extern "C" void init__13JAISoundChildFv();
extern "C" void mixOut__13JAISoundChildFP8JASTrack();
extern "C" void calc__13JAISoundChildFv();
extern "C" void __dl__FPv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __register_global_object();
extern "C" void _savegpr_24();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_24();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern u8 data_80431B04[16 + 4 /* padding */];
extern "C" extern u8 struct_80451230[8];
extern "C" extern u8 data_80451318[8];

//
// Declarations:
//

/* 802A0A6C-802A0A8C 29B3AC 0020+00 1/1 0/0 0/0 .text
 * JASTrack_isFreeOrStopped__20@unnamed@JAISeq_cpp@FP8JASTrack  */
static bool func_802A0A6C(JASTrack* track) {
    u8 status = track->getStatus();
    return status == 0 || status == 2;
}

/* 803C98F4-803C9928 026A14 0030+04 1/1 2/2 0/0 .data            __vt__6JAISeq */
SECTION_DATA extern void* __vt__6JAISeq[12 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getNumChild__6JAISeqCFv,
    (void*)getChild__6JAISeqFi,
    (void*)releaseChild__6JAISeqFi,
    (void*)asSe__8JAISoundFv,
    (void*)asSeq__6JAISeqFv,
    (void*)asStream__8JAISoundFv,
    (void*)getTrack__6JAISeqFv,
    (void*)getChildTrack__6JAISeqFi,
    (void*)getTempoMgr__6JAISeqFv,
    (void*)JAISound_tryDie___6JAISeqFv,
};

/* 80455798-8045579C 003D98 0004+00 3/3 0/0 0/0 .sdata2          @642 */
SECTION_SDATA2 static f32 lit_642 = 1.0f;

/* 8045579C-804557A0 003D9C 0004+00 4/4 0/0 0/0 .sdata2          @643 */
SECTION_SDATA2 static u8 lit_643[4] = {
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 804557A0-804557A8 003DA0 0004+04 3/3 0/0 0/0 .sdata2          @644 */
SECTION_SDATA2 static f32 lit_644[1 + 1 /* padding */] = {
    0.5f,
    /* padding */
    0.0f,
};

/* 802A0A8C-802A0B64 29B3CC 00D8+00 0/0 2/1 0/0 .text
 * __ct__6JAISeqFP9JAISeqMgrP28JAISoundStrategyMgr<6JAISeq>     */
// matches with literals
#ifdef NONMATCHING
JAISeq::JAISeq(JAISeqMgr* param_0, JAISoundStrategyMgr<JAISeq>* param_1) : JSULink<JAISeq>(this) {
    inner_.seqMgr = param_0;
    inner_.strategyMgr = param_1;
    inner_.mSoundParams.init();
    for (int i = 0; i < 32; i++) {
        inner_.mSoundChild[i] = NULL;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAISeq::JAISeq(JAISeqMgr* param_0, JAISoundStrategyMgr<JAISeq>* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/func_802A0A8C.s"
}
#pragma pop
#endif

/* 802A0B64-802A0C04 29B4A4 00A0+00 0/0 1/1 0/0 .text
 * JAISeqMgr_startID___6JAISeqF10JAISoundIDPCQ29JGeometry8TVec3<f>P11JAIAudienceii */
void JAISeq::JAISeqMgr_startID_(JAISoundID param_0, JGeometry::TVec3<f32> const* param_1, JAIAudience* param_2, int param_3, int param_4) {
    inner_.field_0x39c = param_3;
    reserveChildTracks_(param_4);
    start_JAISound_(param_0, param_1, param_2);
    if (inner_.strategyMgr) {
        field_0x3a8 = inner_.strategyMgr->calc(param_0);
    } else {
        field_0x3a8 = NULL;
    }
}

/* 802A0C04-802A0CA4 29B544 00A0+00 1/1 0/0 0/0 .text
 * playSeqData___6JAISeqFRC14JASSoundParams16JAISoundActivity   */
void JAISeq::playSeqData_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    inner_.outputTrack.setSeqData(inner_.mSeqData.field_0x0, inner_.mSeqData.field_0x4);
    if (audible_) {
        initTrack_JAISound_(&inner_.outputTrack);
    } else {
        inner_.outputTrack.setChannelMgrCount(1);
        inner_.outputTrack.assignExtBuffer(0, &inner_.mSoundParams);
    }
    mixOut_(param_0, param_1);
    inner_.outputTrack.startSeq();
}

/* ############################################################################################## */
/* 80434098-804340A4 060DB8 000C+00 1/1 0/0 0/0 .bss             @716 */
static u8 lit_716[12];

/* 802A0CA4-802A0E48 29B5E4 01A4+00 1/1 0/0 0/0 .text            reserveChildTracks___6JAISeqFi */
// Matches with literals
#ifdef NONMATCHING
void JAISeq::reserveChildTracks_(int param_0) {
    for (int i = 0; i < 2; i++) {
        JASPoolAllocObject_MultiThreaded<JASTrack>* allocobj = new JASPoolAllocObject_MultiThreaded<JASTrack>();
        JASTrack* track = new (allocobj) JASTrack();
        if (track) {
            track->setAutoDelete(true);
            inner_.outputTrack.connectChild(i, track);
            for (int j = 0; j < 16; j++) {
                if (i * 16 + j >= param_0) {
                    continue;
                }
                JASPoolAllocObject_MultiThreaded<JASTrack>* allocobj2 = new JASPoolAllocObject_MultiThreaded<JASTrack>();
                JASTrack* track2 = new (allocobj2) JASTrack();
                if (track2) {
                    track2->setAutoDelete(true);
                    track->connectChild(j, track2);
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISeq::reserveChildTracks_(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/reserveChildTracks___6JAISeqFi.s"
}
#pragma pop
#endif

/* 802A0E48-802A0EDC 29B788 0094+00 1/1 0/0 0/0 .text            releaseChildTracks___6JAISeqFv */
void JAISeq::releaseChildTracks_() {
    for (u32 i = 0; i < 2; i++) {
        JASTrack* track = inner_.outputTrack.getChild(i);
        if (track) {
            for (u32 j = 0; j < 16; j++) {
                JASTrack* track2 = track->getChild(j);
                if (track2) {
                    delete track2;
                }
            }
            delete track;
        }
    }
}

/* 802A0EDC-802A0F90 29B81C 00B4+00 1/1 0/0 0/0 .text            prepare_getSeqData___6JAISeqFv */
bool JAISeq::prepare_getSeqData_() {
    JAISoundID id(soundID);
    if (id.isAnonymous()) {
        return true;
    }
    JAISeqDataMgr* seqDataMgr = inner_.seqMgr->getSeqDataMgr();
    switch (seqDataMgr->getSeqData(id, &inner_.mSeqData)) {
    case 0:
        status_.state.unk = 2;
        break;
    case 1:
        increasePrepareCount_JAISound_();
        return false;
    case 2:
        return true;
    }
    return false;
}

/* 802A0F90-802A108C 29B8D0 00FC+00 2/1 0/0 0/0 .text
 * prepare___6JAISeqFRC14JASSoundParams16JAISoundActivity       */
bool JAISeq::prepare_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    switch (status_.state.unk) {
    case 6:
        break;
    case 2:
        stop_JAISound_();
        break;
    case 0:
        if (prepare_getSeqData_()) {
            status_.state.unk = 5;
            playSeqData_(param_0, param_1);
            return true;
        }
        break;
    case 1:
        if (prepare_getSeqData_()) {
            status_.state.unk = 3;
        }
        return false;
    case 4:
        status_.state.unk = 5;
        playSeqData_(param_0, param_1);
        return true;
    case 5:
        return true;
    }
    return false;
}

/* 802A108C-802A1180 29B9CC 00F4+00 0/0 1/1 0/0 .text            JAISeqMgr_calc___6JAISeqFv */
void JAISeq::JAISeqMgr_calc_() {
    if (inner_.outputTrack.getStatus() == 2 || (inner_.outputTrack.getStatus() == 0 && status_.state.unk == 2)) {
        die_();
        return;
    }
    if (calc_JAISound_()) {
        inner_.mTempoMgr.calc();
        for (int i = 0; i < 32; i++) {
            if (inner_.mSoundChild[i]) {
                inner_.mSoundChild[i]->calc();
            }
        }
        if (field_0x3a8) {
            field_0x3a8->calc(this);
        }
    }
}

/* ############################################################################################## */
/* 804340A4-804340B0 060DC4 000C+00 3/3 0/0 0/0 .bss             @896 */
static u8 lit_896[12];

/* 804340B0-804340C0 060DD0 0010+00 3/3 4/4 0/0 .bss
 * memPool_$localstatic3$getMemPool___35JASPoolAllocObject<13JAISoundChild>Fv */
extern u8 data_804340B0[16];
u8 data_804340B0[16];

/* 802A1180-802A1268 29BAC0 00E8+00 2/2 0/0 0/0 .text            die___6JAISeqFv */
// matches with literals
#ifdef NONMATCHING
void JAISeq::die_() {
    for (int i = 0; i < 32; i++) {
        if (inner_.mSoundChild[i]) {
            delete (JASPoolAllocObject<JAISoundChild>*)inner_.mSoundChild[i];
            inner_.mSoundChild[i] = NULL;
        }
    }
    if (field_0x3a8) {
        inner_.strategyMgr->virtual4(field_0x3a8);
        field_0x3a8 = NULL;
    }
    releaseChildTracks_();
    die_JAISound_();
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISeq::die_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/die___6JAISeqFv.s"
}
#pragma pop
#endif

/* 802A1268-802A12BC 29BBA8 0054+00 3/3 4/4 0/0 .text __dt__27JASMemPool<13JAISoundChild>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A1268(void* _this) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/func_802A1268.s"
}
#pragma pop

/* 802A12BC-802A1348 29BBFC 008C+00 1/0 0/0 0/0 .text            JAISound_tryDie___6JAISeqFv */
// matches with literals
#ifdef NONMATCHING
bool JAISeq::JAISound_tryDie_() {
    if (func_802A0A6C(&inner_.outputTrack)) {
        die_();
        return true;
    }
    fader.forceOut();
    status_.state.flags.flag1 = 1;
    JASCriticalSection cs;
    inner_.outputTrack.stopSeq();
    return false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JAISeq::JAISound_tryDie_() {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/JAISound_tryDie___6JAISeqFv.s"
}
#pragma pop
#endif

/* 802A1348-802A14FC 29BC88 01B4+00 2/2 0/0 0/0 .text
 * mixOut___6JAISeqFRC14JASSoundParams16JAISoundActivity        */
// matches with literals
#ifdef NONMATCHING
void JAISeq::mixOut_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    inner_.outputTrack.setTempoRate(inner_.mTempoMgr.getTempo());
    inner_.outputTrack.mute(param_1.field_0x0.flags.flag1 || status_.isMute());
    inner_.outputTrack.pause(param_1.field_0x0.flags.flag2 || status_.isPaused());
    JASSoundParams stackParams;
    params.mixOutAll(param_0, &stackParams, fader.getIntensity());
    if (field_0x3a8) {
        field_0x3a8->virtual4(this, stackParams);
    }
    if (audible_) {
        int maxChannels = audience_->getMaxChannels();
        for (int i = 0; i < maxChannels; i++) {
            audience_->mixChannelOut(stackParams, audible_, i);
        }
    } else {
        inner_.mSoundParams = stackParams;
        for (int i = 0; i < 32; i++) {
            if (inner_.mSoundChild[i]) {
                JASTrack* track = JAISeq::getChildTrack(i);
                if (track) {
                    inner_.mSoundChild[i]->mixOut(track);
                }
            }
        }
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISeq::mixOut_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/mixOut___6JAISeqFRC14JASSoundParams16JAISoundActivity.s"
}
#pragma pop
#endif

/* 802A14FC-802A1570 29BE3C 0074+00 0/0 1/1 0/0 .text
 * JAISeqMgr_mixOut___6JAISeqFRC14JASSoundParams16JAISoundActivity */
void JAISeq::JAISeqMgr_mixOut_(JASSoundParams const& param_0, JAISoundActivity param_1) {
    if (prepare_(param_0, param_1) && inner_.outputTrack.getStatus() == 1) {
        mixOut_(param_0, param_1);
    }
}

/* 802A1570-802A1578 29BEB0 0008+00 1/0 0/0 0/0 .text            getNumChild__6JAISeqCFv */
s32 JAISeq::getNumChild() const {
    return 32;
}

/* 802A1578-802A165C 29BEB8 00E4+00 1/0 0/0 0/0 .text            getChild__6JAISeqFi */
// matches with literals
#ifdef NONMATCHING
JAISoundChild* JAISeq::getChild(int index) {
    if (inner_.mSoundChild[index]) {
        return inner_.mSoundChild[index];
    }
    JASPoolAllocObject<JAISoundChild>* allocobj = new JASPoolAllocObject<JAISoundChild>();
    inner_.mSoundChild[index] = new (allocobj) JAISoundChild();
    if (!inner_.mSoundChild[index]) {
        return NULL;
    }
    return inner_.mSoundChild[index];
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAISoundChild* JAISeq::getChild(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/getChild__6JAISeqFi.s"
}
#pragma pop
#endif

/* 802A165C-802A1728 29BF9C 00CC+00 1/0 0/0 0/0 .text            releaseChild__6JAISeqFi */
// matches with literals
#ifdef NONMATCHING
void JAISeq::releaseChild(int param_0) {
    if (inner_.outputTrack.getStatus() == 1 && inner_.mSoundChild[param_0]) {
        JASTrack* track = getChildTrack(param_0);
        if (track) {
            track->assignExtBuffer(0, NULL);
        }
        delete (JASPoolAllocObject<JAISoundChild>*)inner_.mSoundChild[param_0];
        inner_.mSoundChild[param_0] = NULL;
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAISeq::releaseChild(int param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAISeq/releaseChild__6JAISeqFi.s"
}
#pragma pop
#endif

/* 802A1728-802A1730 29C068 0008+00 1/0 0/0 0/0 .text            getTrack__6JAISeqFv */
JASTrack* JAISeq::getTrack() {
    return &inner_.outputTrack;
}

/* 802A1730-802A1768 29C070 0038+00 2/1 0/0 0/0 .text            getChildTrack__6JAISeqFi */
JASTrack* JAISeq::getChildTrack(int param_0) {
    u32 tmp = u32(param_0) >> 4;
    JASTrack* track = inner_.outputTrack.getChild(tmp);
    if (track) {
        JASTrack* track2 = track->getChild(param_0 - (tmp << 4));
        return track2;
    }
    return NULL;
}

/* 802A1768-802A176C 29C0A8 0004+00 1/0 0/0 0/0 .text            asSeq__6JAISeqFv */
JAISeq* JAISeq::asSeq() {
    return this;
}

/* 802A176C-802A1774 29C0AC 0008+00 1/0 0/0 0/0 .text            getTempoMgr__6JAISeqFv */
JAITempoMgr* JAISeq::getTempoMgr() {
    return &inner_.mTempoMgr;
}
