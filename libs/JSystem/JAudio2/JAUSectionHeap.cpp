//
// Generated By: dol2asm
// Translation Unit: JAUSectionHeap
//

#include "JSystem/JAudio2/JAUSectionHeap.h"
#include "JSystem/JAudio2/JASCriticalSection.h"
#include "JSystem/JAudio2/JASHeapCtrl.h"
#include "JSystem/JAudio2/JASResArcLoader.h"
#include "JSystem/JAudio2/JAUSeqCollection.h"
#include "JSystem/JAudio2/JAUSoundInfo.h"
#include "JSystem/JAudio2/JAUSoundTable.h"
#include "JSystem/JAudio2/JAUStreamFileTable.h"
#include "JSystem/JKernel/JKRSolidHeap.h"
#include "stdlib.h"
#include "dol2asm.h"
#include "dolphin/dvd.h"

//
// Types:
//

struct JASWSParser {
    /* 80298FD8 */ static JASWaveBank* createWaveBank(void const*, JKRHeap*);
};

namespace {
    class TPushCurrentHeap {
    public:
        TPushCurrentHeap(JKRHeap* heap) { mHeap = JKRSetCurrentHeap(heap); }
        ~TPushCurrentHeap() { JKRSetCurrentHeap(mHeap); }

    private:
        JKRHeap* mHeap;
    };

    class TStreamDataMgr : public JAIStreamDataMgr {
    public:
        TStreamDataMgr(const void* param_0) {
            JAUStreamFileTable stack_14;
            stack_14.init(param_0);
            if (!stack_14.isValid()) {
                field_0x4 = 0;
                field_0x8 = NULL;
                return;
            }
            field_0x4 = stack_14.getNumFiles();
            field_0x8 = new s32[field_0x4];
            if (!field_0x8) {
                field_0x4 = NULL;
                return;
            }
            for (u32 i = 0; i < field_0x4; i++) {
                field_0x8[i] = DVDConvertPathToEntrynum(stack_14.getFilePath(i));
            }
        }
        virtual s32 getStreamFileEntry(JAISoundID);
        virtual ~TStreamDataMgr();

        bool isValid() { return field_0x4; }

        s32 field_0x4;
        s32* field_0x8;
    };
}

//
// Forward References:
//

extern "C" void __ct__Q210JAUSection12TSectionDataFv();
extern "C" void resetRegisteredBankTables__Q210JAUSection12TSectionDataFv();
extern "C" void resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv();
extern "C" void __ct__10JAUSectionFP14JAUSectionHeapUll();
extern "C" void finishBuild__10JAUSectionFv();
extern "C" void dispose__10JAUSectionFv();
extern "C" void newSoundTable__10JAUSectionFPCvUlb();
extern "C" void newSoundNameTable__10JAUSectionFPCvUlb();
extern "C" void newStreamFileTable__10JAUSectionFPCvb();
extern "C" void newSeSeqCollection__10JAUSectionFPCvUl();
extern "C" void newStaticSeqDataBlock___10JAUSectionF10JAISoundIDUl();
extern "C" void newStaticSeqData__10JAUSectionF10JAISoundIDPCvUl();
extern "C" void newStaticSeqData__10JAUSectionF10JAISoundID();
extern "C" void newCopy__10JAUSectionFPCvUll();
extern "C" void newWaveBank__10JAUSectionFUlPCv();
extern "C" void loadWaveArc__10JAUSectionFUlUl();
extern "C" void newBank__10JAUSectionFPCvUl();
extern "C" void newVoiceBank__10JAUSectionFUlUl();
extern "C" void beginNewBankTable__10JAUSectionFUlUl();
extern "C" void endNewBankTable__10JAUSectionFv();
extern "C" void __ct__Q214JAUSectionHeap16TSectionHeapDataFv();
extern "C" void setSeqDataArchive__14JAUSectionHeapFP10JKRArchive();
extern "C" void loadDynamicSeq__14JAUSectionHeapF10JAISoundIDb();
extern "C" void releaseIdleDynamicSeqDataBlock__14JAUSectionHeapFv();
extern "C" static void JAUNewSectionHeap__FP12JKRSolidHeapb();
extern "C" void JAUNewSectionHeap__Fb();
extern "C" void __ct__14JAUSectionHeapFP12JKRSolidHeapbl();
extern "C" void getOpenSection__14JAUSectionHeapFv();
extern "C" void setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser();
extern "C" void newDynamicSeqBlock__14JAUSectionHeapFUl();
extern "C" void getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData();
extern "C" int releaseSeqData__14JAUSectionHeapFv();
extern "C" void __dt__14JAUSectionHeapFv();
extern "C" static void func_802A6440();
extern "C" void __dt__10JAUSectionFv();
extern "C" void func_802A6574();
extern "C" void func_802A65D4(void* _this, u32, bool);
extern "C" void func_802A6614(void* _this, u32);
extern "C" void func_802A6634(void* _this, u32);
extern "C" void func_802A665C(void* _this);
extern "C" static void func_802A6680();
extern "C" static void func_802A6688();
extern "C" static void func_802A6690();
extern "C" static void func_802A6698();
extern "C" extern char const* const JAUSectionHeap__stringBase0;

//
// External References:
//

extern "C" void getResSize__15JASResArcLoaderFPC10JKRArchiveUs();
extern "C" void createWaveBank__11JASWSParserFPCvP7JKRHeap();
extern "C" void createBank__12JASBNKParserFPCvP7JKRHeap();
extern "C" void load__10JASWaveArcFP7JASHeap();
extern "C" void __dt__13JAISeqDataMgrFv();
extern "C" void __dt__16JAIStreamDataMgrFv();
extern "C" void func_802A4A80();
extern "C" void getBank__12JAUBankTableCFUl();
extern "C" void init__16JAUSeqCollectionFPCv();
extern "C" void __ct__27JAUSeqDataMgr_SeqCollectionFv();
extern "C" void __ct__15JAUSeqDataBlockFv();
extern "C" void __ct__23JAUDynamicSeqDataBlocksFv();
extern "C" void setSeqDataArchive__23JAUDynamicSeqDataBlocksFP10JKRArchive();
extern "C" void getSeqData__23JAUDynamicSeqDataBlocksF10JAISoundIDP14JAISeqDataUserP10JAISeqDatab();
extern "C" void appendDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP15JAUSeqDataBlock();
extern "C" void loadDynamicSeq__23JAUDynamicSeqDataBlocksF10JAISoundIDbP14JAISeqDataUser();
extern "C" void releaseIdleDynamicSeqDataBlock__23JAUDynamicSeqDataBlocksFP14JAISeqDataUser();
extern "C" void init__13JAUSoundTableFPCv();
extern "C" void init__17JAUSoundNameTableFPCv();
extern "C" void __ct__18JAUStreamFileTableFv();
extern "C" void init__18JAUStreamFileTableFPCv();
extern "C" void getNumFiles__18JAUStreamFileTableCFv();
extern "C" void getFilePath__18JAUStreamFileTableCFi();
extern "C" void becomeCurrentHeap__7JKRHeapFv();
extern "C" void freeTail__7JKRHeapFv();
extern "C" void getFreeSize__7JKRHeapFv();
extern "C" void* __nw__FUl();
extern "C" void* __nwa__FUl();
extern "C" void* __nwa__FUli();
extern "C" void* __nwa__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void create__12JKRSolidHeapFUlP7JKRHeapb();
extern "C" void __ct__11JKRDisposerFv();
extern "C" void __dt__11JKRDisposerFv();
extern "C" void __ct__10JSUPtrLinkFPv();
extern "C" void __dt__10JSUPtrLinkFv();
extern "C" void __dt__10JSUPtrListFv();
extern "C" void initiate__10JSUPtrListFv();
extern "C" void append__10JSUPtrListFP10JSUPtrLink();
extern "C" void _savegpr_26();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _savegpr_29();
extern "C" void _restgpr_26();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" void _restgpr_29();
extern "C" extern void* __vt__11JASBankList[3 + 1 /* padding */];
extern "C" extern void* __vt__7JASBank[5];
extern "C" extern void* __vt__12JASVoiceBank[5 + 1 /* padding */];
extern "C" extern void* __vt__13JAISeqDataMgr[6];
extern "C" extern void* __vt__16JAIStreamDataMgr[4 + 1 /* padding */];
extern "C" extern void* __vt__32JAUStreamDataMgr_StreamFileTable[4];
extern "C" extern u8 data_80450B50[4];
extern "C" extern u8 data_80450B54[4];
extern "C" extern u8 data_80450B58[4];
extern "C" extern u8 data_80450B90[4 + 4 /* padding */];
extern "C" extern u8 data_80450CC0[4 + 4 /* padding */];
extern "C" extern u8 __OSReport_disable;

//
// Declarations:
//

/* 802A4EE8-802A4F68 29F828 0080+00 1/1 0/0 0/0 .text __ct__Q210JAUSection12TSectionDataFv */
// wild destructors appeared!
#ifdef NONMATCHING
JAUSection::TSectionData::TSectionData() {
    resetRegisteredWaveBankTables();
    resetRegisteredBankTables();
    field_0x84 = 0;
    field_0x88 = 0;
    field_0x80 = 0;
    field_0xa0 = 0;
    field_0x9c = 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::TSectionData::TSectionData() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 8039B950-8039B950 027FB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B950 = "index out of range of bitset::reset";
#pragma pop

/* 802A4F68-802A4FE4 29F8A8 007C+00 1/1 0/0 0/0 .text
 * resetRegisteredBankTables__Q210JAUSection12TSectionDataFv    */
// position of std::__bitset_base<8>::reset
#ifdef NONMATCHING
void JAUSection::TSectionData::resetRegisteredBankTables() {
    for (u32 i = 0; i < 255; i++) {
        registeredBankTables.reset(i);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::TSectionData::resetRegisteredBankTables() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/resetRegisteredBankTables__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop
#endif

/* 802A4FE4-802A5060 29F924 007C+00 1/1 0/0 0/0 .text
 * resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv */
// position of std::__bitset_base<8>::reset
#ifdef NONMATCHING
void JAUSection::TSectionData::resetRegisteredWaveBankTables() {
    for (u32 i = 0; i < 255; i++) {
        registeredWaveBankTables.reset(i);
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JAUSection::TSectionData::resetRegisteredWaveBankTables() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/resetRegisteredWaveBankTables__Q210JAUSection12TSectionDataFv.s"
}
#pragma pop
#endif

/* ############################################################################################## */
/* 803C9AC0-803C9AF4 026BE0 0034+00 2/2 0/0 0/0 .data            __vt__14JAUSectionHeap */
SECTION_DATA extern void* __vt__14JAUSectionHeap[13] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__14JAUSectionHeapFv,
    (void*)dispose__10JAUSectionFv,
    (void*)NULL,
    (void*)NULL,
    (void*)func_802A6698,
    (void*)func_802A6690,
    (void*)func_802A6688,
    (void*)func_802A6680,
    (void*)setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser,
    (void*)getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData,
    (void*)releaseSeqData__14JAUSectionHeapFv,
};

/* 803C9AF4-803C9B08 026C14 0014+00 1/1 0/0 0/0 .data            __vt__16JAUBankTableLink */
SECTION_DATA extern void* __vt__16JAUBankTableLink[5] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
    (void*)getBank__12JAUBankTableCFUl,
};

/* 803C9B08-803C9B14 026C28 000C+00 1/1 0/0 0/0 .data            __vt__12JAUBankTable */
SECTION_DATA extern void* __vt__12JAUBankTable[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)getBank__12JAUBankTableCFUl,
};

/* 803C9B14-803C9B24 026C34 0010+00 2/2 0/0 0/0 .data
 * __vt__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgr       */
SECTION_DATA extern void* data_803C9B14[4] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)func_802A6440,
    (void*)func_802A6574,
};

/* 803C9B24-803C9B38 026C44 0010+04 3/3 0/0 0/0 .data            __vt__10JAUSection */
SECTION_DATA extern void* __vt__10JAUSection[4 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__10JAUSectionFv,
    (void*)dispose__10JAUSectionFv,
    /* padding */
    NULL,
};

/* 802A5060-802A50F8 29F9A0 0098+00 1/1 0/0 0/0 .text __ct__10JAUSectionFP14JAUSectionHeapUll */
// JAUSection inheritance
#ifdef NONMATCHING
JAUSection::JAUSection(JAUSectionHeap* param_0, u32 param_1, s32 param_2) : JSULink<JAUSection>(this), field_0x28(param_1), sectionHeap_(param_0) {
    buildingBankTable_ = NULL;
    field_0x2c = 1;
    data_.field_0x98 = param_2;
    if (this != sectionHeap_) {
        data_.field_0x00.setSeqDataArchive(sectionHeap_->sectionHeapData_.seqDataBlocks.getSeqDataArchive());
    }
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::JAUSection(JAUSectionHeap* param_0, u32 param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__10JAUSectionFP14JAUSectionHeapUll.s"
}
#pragma pop
#endif

/* 802A50F8-802A5160 29FA38 0068+00 0/0 1/1 0/0 .text            finishBuild__10JAUSectionFv */
void JAUSection::finishBuild() {
    JUT_ASSERT(143, isOpen());
    JUT_ASSERT(144, isBuilding());
    {
        TPushCurrentHeap push(getHeap_());
    }
    data_.field_0x98 -= getHeap_()->getFreeSize();
    getHeap_()->freeTail();
    field_0x2c = 0;
}

/* 802A5160-802A51E4 29FAA0 0084+00 2/0 0/0 0/0 .text            dispose__10JAUSectionFv */
void JAUSection::dispose() {
    /* JUT_ASSERT(267, ! data_.registeredBankTables.any());
    JUT_ASSERT(268, ! data_.registeredWaveBankTables.any()); */
    if (data_.mBstDst) {
        sectionHeap_->sectionHeapData_.soundTable->~JAUSoundTable();
        sectionHeap_->sectionHeapData_.soundTable = NULL;
    }
    if ((data_.mBstnDst)) {
        sectionHeap_->sectionHeapData_.soundNameTable->~JAUSoundNameTable();
        sectionHeap_->sectionHeapData_.soundNameTable = NULL;
    }
}

/* 802A51E4-802A52A0 29FB24 00BC+00 0/0 1/1 0/0 .text            newSoundTable__10JAUSectionFPCvUlb
 */
// regalloc, stackalloc
#ifdef NONMATCHING
JAUSoundTable* JAUSection::newSoundTable(void const* bst, u32 param_1, bool param_2) {
    JUT_ASSERT(285, isOpen());
    JUT_ASSERT(286, isBuilding());
    JUT_ASSERT(287, bst);
    JUT_ASSERT(288, asSectionHeap() == this);
    JUT_ASSERT(289, sectionHeap_->sectionHeapData_.soundTable == 0);
    {
        TPushCurrentHeap push(getHeap_());
        void* bstDst;
        if (param_1) {
            bstDst = newCopy(bst, param_1, 4);
            JUT_ASSERT(296, bstDst);
        }
        JAUSoundTable* soundTable = new JAUSoundTable(param_2);
        JUT_ASSERT(299, soundTable);
        soundTable->init(bst);
        sectionHeap_->sectionHeapData_.soundTable = soundTable;
        data_.mBstDst = bstDst;
    }
    return sectionHeap_->sectionHeapData_.soundTable;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSoundTable* JAUSection::newSoundTable(void const* param_0, u32 param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newSoundTable__10JAUSectionFPCvUlb.s"
}
#pragma pop
#endif

/* 802A52A0-802A535C 29FBE0 00BC+00 0/0 1/1 0/0 .text newSoundNameTable__10JAUSectionFPCvUlb */
// regalloc, stackalloc
#ifdef NONMATCHING
JAUSoundNameTable* JAUSection::newSoundNameTable(void const* bstn, u32 param_1, bool param_2) {
    JUT_ASSERT(315, isOpen());
    JUT_ASSERT(316, isBuilding());
    JUT_ASSERT(317, bstn);
    JUT_ASSERT(318, asSectionHeap() == this);
    JUT_ASSERT(319, sectionHeap_->sectionHeapData_.soundNameTable == 0);
    {
        TPushCurrentHeap push(getHeap_());
        void* bstnDst;
        if (param_1) {
            bstnDst = newCopy(bstn, param_1, 4);
            JUT_ASSERT(326, bstnDst);
        }
        JAUSoundNameTable* soundNameTable = new JAUSoundNameTable(param_2);
        JUT_ASSERT(329, soundNameTable);
        soundNameTable->init(bstnDst);
        sectionHeap_->sectionHeapData_.soundNameTable = soundNameTable;
        data_.mBstnDst = bstnDst;
    }
    return sectionHeap_->sectionHeapData_.soundNameTable;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSoundNameTable* JAUSection::newSoundNameTable(void const* param_0, u32 param_1, bool param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newSoundNameTable__10JAUSectionFPCvUlb.s"
}
#pragma pop
#endif

/* 802A535C-802A5500 29FC9C 01A4+00 0/0 1/1 0/0 .text newStreamFileTable__10JAUSectionFPCvb */
// JAUStreamFileTable::isValid() signed
#ifdef NONMATCHING
JAIStreamDataMgr* JAUSection::newStreamFileTable(void const* param_0, bool param_1) {
    JUT_ASSERT(345, asSectionHeap() == this);
    JUT_ASSERT(346, isOpen());
    JUT_ASSERT(347, isBuilding());
    JUT_ASSERT(348, sectionHeap_->sectionHeapData_.streamDataMgr_ == 0);
    {
        TPushCurrentHeap push(getHeap_());
        JAIStreamDataMgr* r28 = NULL;
        if (param_1) {
            TStreamDataMgr* r26 = new TStreamDataMgr(param_0);
            if (r26->isValid()) {
                r28 = r26;
            }
        } else {
            JAUStreamDataMgr_StreamFileTable* r25 = new JAUStreamDataMgr_StreamFileTable();
            r25->init(param_0);
            if (r25->isValid()) {
                r28 = r25;
            }
        }
        sectionHeap_->sectionHeapData_.streamDataMgr_ = r28;
    }
    return sectionHeap_->sectionHeapData_.streamDataMgr_;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAIStreamDataMgr* JAUSection::newStreamFileTable(void const* param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newStreamFileTable__10JAUSectionFPCvb.s"
}
#pragma pop
#endif

/* 802A5500-802A5598 29FE40 0098+00 0/0 1/1 0/0 .text newSeSeqCollection__10JAUSectionFPCvUl */
JAISeqDataMgr* JAUSection::newSeSeqCollection(void const* bsc, u32 param_1) {
    // JUT_ASSERT(398, asSectionHeap() == this);
    JUT_ASSERT(399, sectionHeap_->sectionHeapData_.seSeqDataMgr_ == 0);
    if (param_1) {
        bsc = newCopy(bsc, param_1, 4);
    }
    JUT_ASSERT(405, bsc);
    {
        TPushCurrentHeap push(getHeap_());
        JAUSeqDataMgr_SeqCollection* seSeqDataMgr = new JAUSeqDataMgr_SeqCollection();
        JUT_ASSERT(409, seSeqDataMgr);
        seSeqDataMgr->init(bsc);
        sectionHeap_->sectionHeapData_.seSeqDataMgr_ = seSeqDataMgr;
        data_.field_0x80 = seSeqDataMgr;
    }
    return sectionHeap_->sectionHeapData_.seSeqDataMgr_;
}

/* 802A5598-802A56C8 29FED8 0130+00 2/2 0/0 0/0 .text
 * newStaticSeqDataBlock___10JAUSectionF10JAISoundIDUl          */
u8* JAUSection::newStaticSeqDataBlock_(JAISoundID param_0, u32 size) {
    JUT_ASSERT(419, isOpen());
    JUT_ASSERT(420, isBuilding());
    JUT_ASSERT(421, size);
    {
        TPushCurrentHeap push(getHeap_());
        JAUSeqDataBlock* seqDataBlock = new JAUSeqDataBlock();
        if (!seqDataBlock) {
            return NULL;
        }
        JSULink<JAUSeqDataBlock>* link = new JSULink<JAUSeqDataBlock>(seqDataBlock);
        if (!link) {
            return NULL;
        }
        u8* r28 = new(0x20) u8[size];
        if (!r28) {
            return NULL;
        }
        seqDataBlock->field_0x14.addr = r28;
        seqDataBlock->field_0x14.size = size;
        seqDataBlock->field_0x10 = param_0;
        JASCriticalSection cs;
        if(data_.field_0x00.appendDynamicSeqDataBlock(seqDataBlock)) {
            data_.field_0x28.append(link);
            return r28;
        }
    }
    return NULL;
}

/* 802A56C8-802A5730 2A0008 0068+00 0/0 1/1 0/0 .text
 * newStaticSeqData__10JAUSectionF10JAISoundIDPCvUl             */
bool JAUSection::newStaticSeqData(JAISoundID param_0, void const* param_1, u32 param_2) {
    u8* r30 = newStaticSeqDataBlock_(param_0, param_2);
    if (r30) {
        memcpy(r30, param_1, param_2);
        return true;
    }
    return false;
}

/* 802A5730-802A57F0 2A0070 00C0+00 0/0 1/1 0/0 .text newStaticSeqData__10JAUSectionF10JAISoundID
 */
bool JAUSection::newStaticSeqData(JAISoundID param_0) {
    JKRArchive* seqArchive = data_.field_0x00.getSeqDataArchive();
    JUT_ASSERT(481, seqArchive);
    JAUSoundInfo* soundInfo = JASGlobalInstance<JAUSoundInfo>::getInstance();
    if (!soundInfo) {
        return false;
    }
    u16 r26 = soundInfo->getBgmSeqResourceID(param_0);
    u32 r25 = JASResArcLoader::getResSize(seqArchive, r26);
    u8* r24 = newStaticSeqDataBlock_(0xffffffff, r25);
    if (r24) {
        data_.field_0x00.loadDynamicSeq(param_0, true, sectionHeap_->sectionHeapData_.seqDataUser);
        return true;
    }
    return false;
}

/* 802A57F0-802A5854 2A0130 0064+00 3/3 0/0 0/0 .text            newCopy__10JAUSectionFPCvUll */
void* JAUSection::newCopy(void const* param_0, u32 param_1, s32 param_2) {
    JUT_ASSERT(516, isOpen());
    JUT_ASSERT(517, isBuilding());
    u8* r31 = new(getHeap_(), param_2) u8[param_1];
    if (r31) {
        memcpy(r31, param_0, param_1);
    }
    return r31;
}

/* ############################################################################################## */
/* 8039B950-8039B950 027FB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
#pragma push
#pragma force_active on
SECTION_DEAD static char const* const stringBase_8039B974 = "index out of range of bitset::test";
SECTION_DEAD static char const* const stringBase_8039B997 = "index out of range of bitset::set";
/* @stringBase0 padding */
SECTION_DEAD static char const* const pad_8039B9B9 = "\0\0\0\0\0\0";
#pragma pop

/* 802A5854-802A5948 2A0194 00F4+00 0/0 1/1 0/0 .text            newWaveBank__10JAUSectionFUlPCv */
// position of std::__bitset_base<8>::set
#ifdef NONMATCHING
JASWaveBank* JAUSection::newWaveBank(u32 bank_no, void const* param_1) {
    JUT_ASSERT(528, isOpen());
    JUT_ASSERT(529, isBuilding());
    TPushCurrentHeap push(getHeap_());
    s32 r27 = getHeap_()->getFreeSize();
    JASWaveBank* waveBank = JASWSParser::createWaveBank(param_1, getHeap_());
    if (waveBank) {
        JUT_ASSERT(536, sectionHeap_->getWaveBankTable().getWaveBank( bank_no ) == 0);
        sectionHeap_->getWaveBankTable().registWaveBank(bank_no, waveBank);
        data_.registeredWaveBankTables.set(bank_no, true);
        data_.field_0xa0 += r27 - getHeap_()->getFreeSize();
        return waveBank;
    }
    return NULL;

}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASWaveBank* JAUSection::newWaveBank(u32 param_0, void const* param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newWaveBank__10JAUSectionFUlPCv.s"
}
#pragma pop
#endif

/* 802A5948-802A5A50 2A0288 0108+00 0/0 1/1 0/0 .text            loadWaveArc__10JAUSectionFUlUl */
// position of std::__bitset_base<8>::test
#ifdef NONMATCHING
bool JAUSection::loadWaveArc(u32 param_0, u32 param_1) {
    if (data_.registeredWaveBankTables.test(param_0)) {
        JASWaveBank* waveBank = sectionHeap_->getWaveBankTable().getWaveBank(param_0);
        if (waveBank) {
            for (u32 i = 0; i < waveBank->getArcCount(); i++) {
                if (param_1 & 1 << i) {
                    waveBank->getWaveArc(i)->load(NULL);
                }
            }
            return true;
        }
    }
    return false;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JAUSection::loadWaveArc(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/loadWaveArc__10JAUSectionFUlUl.s"
}
#pragma pop
#endif

/* 802A5A50-802A5B84 2A0390 0134+00 0/0 1/1 0/0 .text            newBank__10JAUSectionFPCvUl */
// vtable order JAUBankTableLink
#ifdef NONMATCHING
JASBank* JAUSection::newBank(void const* param_0, u32 param_1) {
    JUT_ASSERT(647, isOpen());
    JUT_ASSERT(648, isBuilding());
    JASWaveBank* waveBank = sectionHeap_->getWaveBankTable().getWaveBank(param_1);
    JUT_ASSERT(650, waveBank != 0);
    TPushCurrentHeap push(getHeap_());
    u32 bank_no = JASBNKParser::getBankNumber(param_0);
    s32 r25 = getHeap_()->getFreeSize();
    JASBank* bank = JASBNKParser::createBank(param_0, getHeap_());
    if (bank) {
        if (buildingBankTable_) {
            JUT_ASSERT(660, buildingBankTable_->getBank( bank_no ) == 0);
            buildingBankTable_->registBank(bank_no, bank);
        } else {
            JUT_ASSERT(665, JASDefaultBankTable::getInstance() ->getBank( bank_no ) == 0);
            JASDefaultBankTable::getInstance()->registBank(bank_no, bank);
            data_.registeredBankTables.set(bank_no, true);
        }
        bank->assignWaveBank(waveBank);
        data_.field_0x9c += r25 - getHeap_()->getFreeSize();
        return bank;
    }
    return 0;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASBank* JAUSection::newBank(void const* param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newBank__10JAUSectionFPCvUl.s"
}
#pragma pop
#endif

/* 802A5B84-802A5CAC 2A04C4 0128+00 0/0 1/1 0/0 .text            newVoiceBank__10JAUSectionFUlUl */
// regalloc
#ifdef NONMATCHING
JASVoiceBank* JAUSection::newVoiceBank(u32 bank_no, u32 param_1) {
    JUT_ASSERT(685, isOpen());
    JUT_ASSERT(686, isBuilding());
    JASWaveBank* waveBank = sectionHeap_->getWaveBankTable().getWaveBank(param_1);
    JUT_ASSERT(688, waveBank != 0);
    TPushCurrentHeap push(getHeap_());
    JASVoiceBank* voiceBank = new JASVoiceBank();
    if (voiceBank) {
        if (buildingBankTable_) {
            JUT_ASSERT(696, buildingBankTable_->getBank( bank_no ) == 0);
            buildingBankTable_->registBank(bank_no, voiceBank);
        } else {
            JUT_ASSERT(701, JASDefaultBankTable::getInstance() ->getBank( bank_no ) == 0);
            JASDefaultBankTable::getInstance()->registBank(bank_no, voiceBank);
            data_.registeredBankTables.set(bank_no, true);
        }
        voiceBank->assignWaveBank(waveBank);
        return voiceBank;
    }
    return NULL;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JASVoiceBank* JAUSection::newVoiceBank(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/newVoiceBank__10JAUSectionFUlUl.s"
}
#pragma pop
#endif

/* 802A5CAC-802A5D9C 2A05EC 00F0+00 0/0 1/1 0/0 .text beginNewBankTable__10JAUSectionFUlUl */
// JAUBankTable inheritance
#ifdef NONMATCHING
bool JAUSection::beginNewBankTable(u32 param_0, u32 param_1) {
    JUT_ASSERT(714, isOpen());
    JUT_ASSERT(715, isBuilding());
    JUT_ASSERT(716, buildingBankTable_ == 0);
    JAUBankTableLink* bankTableLink = NULL;
    {
        TPushCurrentHeap push(getHeap_());
        JASBank** r26 = new JASBank*[param_1];
        if (r26) {
            bankTableLink = new JAUBankTableLink(param_0, r26, param_1);
            if (bankTableLink) {
                buildingBankTable_ = bankTableLink;
            } else {

            }
        } else {

        }
    }
    return bankTableLink;
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm bool JAUSection::beginNewBankTable(u32 param_0, u32 param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/beginNewBankTable__10JAUSectionFUlUl.s"
}
#pragma pop
#endif

/* 802A5D9C-802A5DF4 2A06DC 0058+00 0/0 1/1 0/0 .text            endNewBankTable__10JAUSectionFv */
JAUBankTable* JAUSection::endNewBankTable() {
    JAUBankTable* r29 = NULL;
    if (buildingBankTable_) {
        data_.field_0x74.appendBankTable(buildingBankTable_);
        buildingBankTable_ = NULL;
        r29 = buildingBankTable_;
    }
    return r29;
}

/* 802A5DF4-802A5E60 2A0734 006C+00 1/1 0/0 0/0 .text __ct__Q214JAUSectionHeap16TSectionHeapDataFv
 */
JAUSectionHeap::TSectionHeapData::TSectionHeapData() {
    seSeqDataMgr_ = NULL;
    streamDataMgr_ = NULL;
    soundTable = NULL;
    soundNameTable = NULL;
    seqDataUser = NULL;
}

/* 802A5E60-802A5EC0 2A07A0 0060+00 0/0 1/1 0/0 .text
 * setSeqDataArchive__14JAUSectionHeapFP10JKRArchive            */
void JAUSectionHeap::setSeqDataArchive(JKRArchive* param_0) {
    sectionHeapData_.seqDataBlocks.setSeqDataArchive(param_0);
    for (JSULink<JAUSection>* link = mSectionList.getFirst(); link; link = link->getNext()) {
        link->getObject()->data_.field_0x00.setSeqDataArchive(param_0);
    }
}

/* 802A5EC0-802A5EF8 2A0800 0038+00 0/0 1/1 0/0 .text
 * loadDynamicSeq__14JAUSectionHeapF10JAISoundIDb               */
bool JAUSectionHeap::loadDynamicSeq(JAISoundID param_0, bool param_1) {
    return sectionHeapData_.seqDataBlocks.loadDynamicSeq(param_0, param_1, sectionHeapData_.seqDataUser);
}

/* 802A5EF8-802A5F24 2A0838 002C+00 0/0 1/1 0/0 .text
 * releaseIdleDynamicSeqDataBlock__14JAUSectionHeapFv           */
void JAUSectionHeap::releaseIdleDynamicSeqDataBlock() {
    sectionHeapData_.seqDataBlocks.releaseIdleDynamicSeqDataBlock(sectionHeapData_.seqDataUser);
}

namespace {
    // TODO
    bool JKRSolidHeap_isEmpty(JKRSolidHeap*) { return 1; }
}

/* 802A5F24-802A5F9C 2A0864 0078+00 1/1 0/0 0/0 .text JAUNewSectionHeap__FP12JKRSolidHeapb */
static JAUSectionHeap* JAUNewSectionHeap(JKRSolidHeap* heap, bool param_1) {
    JUT_ASSERT(809, JKRSolidHeap_isEmpty( heap ));
    TPushCurrentHeap push(heap);
    s32 r29 = heap->getFreeSize();
    return new JAUSectionHeap(heap, param_1, r29);
}

/* 802A5F9C-802A5FE0 2A08DC 0044+00 0/0 1/1 0/0 .text            JAUNewSectionHeap__Fb */
JAUSectionHeap* JAUNewSectionHeap(bool param_0) {
    s32 freeSize = JASDram->getFreeSize();
    JKRSolidHeap* sectionHeap = JKRCreateSolidHeap(freeSize, JASDram, true);
    JUT_ASSERT(821, sectionHeap);
    return JAUNewSectionHeap(sectionHeap, param_0);
}

/* 802A5FE0-802A6094 2A0920 00B4+00 1/1 0/0 0/0 .text __ct__14JAUSectionHeapFP12JKRSolidHeapbl */
// JAUSectionHeap inheritance
#ifdef NONMATCHING
JAUSectionHeap::JAUSectionHeap(JKRSolidHeap* param_0, bool param_1, s32 param_2) : JAUSection(this, 0, param_2), JASGlobalInstance<JAUSectionHeap>(param_1), mHeap(param_0) {
    field_0xe4 = 0;
    mSectionList.append(this);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSectionHeap::JAUSectionHeap(JKRSolidHeap* param_0, bool param_1, s32 param_2) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__ct__14JAUSectionHeapFP12JKRSolidHeapbl.s"
}
#pragma pop
#endif

/* 802A6094-802A60A0 2A09D4 000C+00 0/0 1/1 0/0 .text            getOpenSection__14JAUSectionHeapFv
 */
JAUSection* JAUSectionHeap::getOpenSection() {
    return mSectionList.getLast()->getObject();
}

/* 802A60A0-802A60AC 2A09E0 000C+00 2/1 0/0 0/0 .text
 * setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser           */
bool JAUSectionHeap::setSeqDataUser(JAISeqDataUser* param_0) {
    sectionHeapData_.seqDataUser = param_0;
    return true;
}

/* 802A60AC-802A61D0 2A09EC 0124+00 0/0 2/2 0/0 .text newDynamicSeqBlock__14JAUSectionHeapFUl */
bool JAUSectionHeap::newDynamicSeqBlock(u32 size) {
    /* JUT_ASSERT(937, isOpen());
    JUT_ASSERT(938, isBuilding());
    JUT_ASSERT(939, sectionHeap_ == this); */
    TPushCurrentHeap push(base1.getHeap_());
    JAUSeqDataBlock * seqDataBlock = new JAUSeqDataBlock();
    if (!seqDataBlock) {
        return false;
    }
    JSULink<JAUSeqDataBlock> * link = new JSULink<JAUSeqDataBlock>(seqDataBlock);
    if (!link) {
        return false;
    }
    u8* r25 = new(0x20) u8[size];
    if (!r25) {
        return false;
    }
    seqDataBlock->field_0x14.addr = r25;
    seqDataBlock->field_0x14.size = size;
    seqDataBlock->field_0x10.setAnonymous();
    JASCriticalSection cs;
    if (base1.sectionHeap_->sectionHeapData_.seqDataBlocks.appendDynamicSeqDataBlock(seqDataBlock)) {
        return true;
    }
    return false;
}

/* 802A61D0-802A6270 2A0B10 00A0+00 2/1 0/0 0/0 .text
 * getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData       */
s32 JAUSectionHeap::getSeqData(JAISoundID param_0, JAISeqData* param_1) {
    for (JSULink<JAUSection> * link = mSectionList.getFirst(); link; link = link->getNext()) {
        s32 result = link->getObject()->data_.field_0x00.getSeqData(param_0, sectionHeapData_.seqDataUser, param_1, false);
        // JUT_ASSERT(994, result != JAI_ASYNC_RESULT_RETRY);
        if (result == 2) {
            return 2;
        }
    }
    return sectionHeapData_.seqDataBlocks.getSeqData(param_0, sectionHeapData_.seqDataUser, param_1, true);
}

/* 802A6270-802A6278 2A0BB0 0008+00 2/1 0/0 0/0 .text            releaseSeqData__14JAUSectionHeapFv
 */
int JAUSectionHeap::releaseSeqData() {
    return 0;
}

/* 802A6278-802A6440 2A0BB8 01C8+00 2/1 0/0 0/0 .text            __dt__14JAUSectionHeapFv */
// JAUSectionHeap inheritance
#ifdef NONMATCHING
JAUSectionHeap::~JAUSectionHeap() {}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSectionHeap::~JAUSectionHeap() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__dt__14JAUSectionHeapFv.s"
}
#pragma pop
#endif

/* 802A6440-802A6468 2A0D80 0028+00 1/0 0/0 0/0 .text
 * getStreamFileEntry__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgrF10JAISoundID */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6440() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6440.s"
}
#pragma pop

/* 802A6468-802A6574 2A0DA8 010C+00 1/0 0/0 0/0 .text            __dt__10JAUSectionFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JAUSection::~JAUSection() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/__dt__10JAUSectionFv.s"
}
#pragma pop

/* 802A6574-802A65D4 2A0EB4 0060+00 1/0 0/0 0/0 .text
 * __dt__Q228@unnamed@JAUSectionHeap_cpp@14TStreamDataMgrFv     */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void func_802A6574() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6574.s"
}
#pragma pop

/* 802A65D4-802A6614 2A0F14 0040+00 3/3 0/0 0/0 .text            set__Q23std16__bitset_base<8>FUlb
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A65D4(void* _this, u32 param_0, bool param_1) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A65D4.s"
}
#pragma pop

/* 802A6614-802A6634 2A0F54 0020+00 2/2 0/0 0/0 .text            reset__Q23std16__bitset_base<8>FUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A6614(void* _this, u32 param_0) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6614.s"
}
#pragma pop

/* 802A6634-802A665C 2A0F74 0028+00 1/1 0/0 0/0 .text            test__Q23std16__bitset_base<8>CFUl
 */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A6634(void* _this, u32 param_0) /* const */ {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6634.s"
}
#pragma pop

/* ############################################################################################## */
/* 804507D0-804507D8 000250 0004+04 1/1 0/0 0/0 .sdata           @2588 */
SECTION_SDATA static u8 lit_2588[4 + 4 /* padding */] = {
    0x00,
    0x00,
    0x00,
    0x00,
    /* padding */
    0x00,
    0x00,
    0x00,
    0x00,
};

/* 802A665C-802A6680 2A0F9C 0024+00 1/1 0/0 0/0 .text            __ct__Q23std16__bitset_base<8>Fv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
extern "C" asm void func_802A665C(void* _this) {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A665C.s"
}
#pragma pop

/* 802A6680-802A6688 2A0FC0 0008+00 1/0 0/0 0/0 .text
 * @220@setSeqDataUser__14JAUSectionHeapFP14JAISeqDataUser      */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6680() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6680.s"
}
#pragma pop

/* 802A6688-802A6690 2A0FC8 0008+00 1/0 0/0 0/0 .text @220@releaseSeqData__14JAUSectionHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6688() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6688.s"
}
#pragma pop

/* 802A6690-802A6698 2A0FD0 0008+00 1/0 0/0 0/0 .text
 * @220@getSeqData__14JAUSectionHeapF10JAISoundIDP10JAISeqData  */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6690() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6690.s"
}
#pragma pop

/* 802A6698-802A66A0 2A0FD8 0008+00 1/0 0/0 0/0 .text            @220@__dt__14JAUSectionHeapFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
static asm void func_802A6698() {
    nofralloc
#include "asm/JSystem/JAudio2/JAUSectionHeap/func_802A6698.s"
}
#pragma pop

/* 8039B950-8039B950 027FB0 0000+00 0/0 0/0 0/0 .rodata          @stringBase0 */
