//
// Generated By: dol2asm
// Translation Unit: d/a/d_a_item_static
//

#include "d/a/d_a_item_static.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Types:
//

struct daItem_c {
    /* 80037BE0 */ void startCtrl();
    /* 80037BF4 */ void startControl();
    /* 80037C04 */ void endControl();
};

//
// Forward References:
//

extern "C" void startCtrl__8daItem_cFv();
extern "C" void startControl__8daItem_cFv();
extern "C" void endControl__8daItem_cFv();

//
// External References:
//

//
// Declarations:
//

/* 80037BE0-80037BF4 032520 0014+00 0/0 0/0 1/1 .text            startCtrl__8daItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItem_c::startCtrl() {
    nofralloc
#include "asm/d/a/d_a_item_static/startCtrl__8daItem_cFv.s"
}
#pragma pop

/* 80037BF4-80037C04 032534 0010+00 0/0 0/0 1/1 .text            startControl__8daItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItem_c::startControl() {
    nofralloc
#include "asm/d/a/d_a_item_static/startControl__8daItem_cFv.s"
}
#pragma pop

/* 80037C04-80037C14 032544 0010+00 0/0 0/0 1/1 .text            endControl__8daItem_cFv */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void daItem_c::endControl() {
    nofralloc
#include "asm/d/a/d_a_item_static/endControl__8daItem_cFv.s"
}
#pragma pop