//
// Generated By: dol2asm
// Translation Unit: JUTVideo
//

#include "JSystem/JUtility/JUTVideo.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct JUTXfb {
    static u8 sManager[4 + 4 /* padding */];
};

struct JUTDirectPrint {
    /* 802E456C */ void changeFrameBuffer(void*, u16, u16);

    static u8 sDirectPrint[4 + 4 /* padding */];
};

//
// Forward References:
//

extern "C" void createManager__8JUTVideoFPC16_GXRenderModeObj();
extern "C" void destroyManager__8JUTVideoFv();
extern "C" void __ct__8JUTVideoFPC16_GXRenderModeObj();
extern "C" void __dt__8JUTVideoFv();
extern "C" void preRetraceProc__8JUTVideoFUl();
extern "C" void drawDoneStart__8JUTVideoFv();
extern "C" void dummyNoDrawWait__8JUTVideoFv();
extern "C" void drawDoneCallback__8JUTVideoFv();
extern "C" void postRetraceProc__8JUTVideoFUl();
extern "C" void setRenderMode__8JUTVideoFPC16_GXRenderModeObj();
extern "C" void waitRetraceIfNeed__8JUTVideoFv();
extern "C" u8 sManager__8JUTVideo[4];
extern "C" u8 sVideoLastTick__8JUTVideo[4];
extern "C" u8 sVideoInterval__8JUTVideo[4];

//
// External References:
//

extern "C" void* __nw__FUl();
extern "C" void __dl__FPv();
extern "C" void changeFrameBuffer__14JUTDirectPrintFPvUsUs();
extern "C" void VISetPreRetraceCallback();
extern "C" void VISetPostRetraceCallback();
extern "C" void VIInit();
extern "C" void VIWaitForRetrace();
extern "C" void VIConfigure();
extern "C" void VIFlush();
extern "C" void VISetNextFrameBuffer();
extern "C" void VIGetNextFrameBuffer();
extern "C" void VISetBlack();
extern "C" void VIGetRetraceCount();
extern "C" void GXSetDrawDone();
extern "C" void GXCopyDisp();
extern "C" u8 sDirectPrint__14JUTDirectPrint[4 + 4 /* padding */];
extern "C" u8 sManager__6JUTXfb[4 + 4 /* padding */];

//
// Declarations:
//

/* ############################################################################################## */
/* 80451538-8045153C 000A38 0004+00 4/4 18/18 1/1 .sbss            sManager__8JUTVideo */
JUTVideo* JUTVideo::sManager;

/* 802E4C54-802E4CAC 2DF594 0058+00 0/0 1/1 0/0 .text
 * createManager__8JUTVideoFPC16_GXRenderModeObj                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::createManager(_GXRenderModeObj const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/createManager__8JUTVideoFPC16_GXRenderModeObj.s"
}
#pragma pop

/* 802E4CAC-802E4CF4 2DF5EC 0048+00 0/0 2/2 0/0 .text            destroyManager__8JUTVideoFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::destroyManager() {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/destroyManager__8JUTVideoFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 803CC980-803CC990 029AA0 000C+04 2/2 0/0 0/0 .data            __vt__8JUTVideo */
SECTION_DATA extern void* __vt__8JUTVideo[3 + 1 /* padding */] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__8JUTVideoFv,
    /* padding */
    NULL,
};

/* 8045153C-80451540 000A3C 0004+00 2/2 1/1 0/0 .sbss            sVideoLastTick__8JUTVideo */
u8 JUTVideo::sVideoLastTick[4];

/* 80451540-80451544 000A40 0004+00 2/2 1/1 0/0 .sbss            sVideoInterval__8JUTVideo */
u8 JUTVideo::sVideoInterval[4];

/* 802E4CF4-802E4DE8 2DF634 00F4+00 1/1 0/0 0/0 .text __ct__8JUTVideoFPC16_GXRenderModeObj */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTVideo::JUTVideo(_GXRenderModeObj const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/__ct__8JUTVideoFPC16_GXRenderModeObj.s"
}
#pragma pop

/* 802E4DE8-802E4E50 2DF728 0068+00 1/0 0/0 0/0 .text            __dt__8JUTVideoFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm JUTVideo::~JUTVideo() {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/__dt__8JUTVideoFv.s"
}
#pragma pop

/* ############################################################################################## */
/* 80451544-80451548 000A44 0004+00 4/4 0/0 0/0 .sbss            None */
static u8 data_80451544[4];

/* 80451548-8045154C 000A48 0004+00 1/1 0/0 0/0 .sbss            frameBuffer$2222 */
static u8 frameBuffer[4];

/* 8045154C-80451550 000A4C 0004+00 1/1 0/0 0/0 .sbss            None */
static u8 data_8045154C[4];

/* 802E4E50-802E5088 2DF790 0238+00 1/1 0/0 0/0 .text            preRetraceProc__8JUTVideoFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::preRetraceProc(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/preRetraceProc__8JUTVideoFUl.s"
}
#pragma pop

/* 802E5088-802E50B0 2DF9C8 0028+00 0/0 1/1 0/0 .text            drawDoneStart__8JUTVideoFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::drawDoneStart() {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/drawDoneStart__8JUTVideoFv.s"
}
#pragma pop

/* 802E50B0-802E50BC 2DF9F0 000C+00 0/0 1/1 0/0 .text            dummyNoDrawWait__8JUTVideoFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::dummyNoDrawWait() {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/dummyNoDrawWait__8JUTVideoFv.s"
}
#pragma pop

/* 802E50BC-802E5144 2DF9FC 0088+00 1/1 0/0 0/0 .text            drawDoneCallback__8JUTVideoFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::drawDoneCallback() {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/drawDoneCallback__8JUTVideoFv.s"
}
#pragma pop

/* 802E5144-802E5198 2DFA84 0054+00 1/1 0/0 0/0 .text            postRetraceProc__8JUTVideoFUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::postRetraceProc(u32 param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/postRetraceProc__8JUTVideoFUl.s"
}
#pragma pop

/* 802E5198-802E5210 2DFAD8 0078+00 1/1 2/2 0/0 .text
 * setRenderMode__8JUTVideoFPC16_GXRenderModeObj                */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JUTVideo::setRenderMode(_GXRenderModeObj const* param_0) {
    nofralloc
#include "asm/JSystem/JUtility/JUTVideo/setRenderMode__8JUTVideoFPC16_GXRenderModeObj.s"
}
#pragma pop

/* 802E5210-802E5214 2DFB50 0004+00 0/0 1/1 0/0 .text            waitRetraceIfNeed__8JUTVideoFv */
void JUTVideo::waitRetraceIfNeed() {
    /* empty function */
}
