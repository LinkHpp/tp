//
// Generated By: dol2asm
// Translation Unit: d_a_tag_lv5soup
//

#include "rel/d/a/tag/d_a_tag_lv5soup/d_a_tag_lv5soup.h"
#include "d/com/d_com_inf_game.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void create__15daTag_Lv5Soup_cFv();
extern "C" bool Delete__15daTag_Lv5Soup_cFv();
extern "C" void Execute__15daTag_Lv5Soup_cFv();
extern "C" bool Draw__15daTag_Lv5Soup_cFv();
extern "C" void isAreaCheck__15daTag_Lv5Soup_cFv();
extern "C" static void daTag_Lv5Soup_Create__FPv();
extern "C" static void daTag_Lv5Soup_Delete__FPv();
extern "C" static void daTag_Lv5Soup_Execute__FPv();
extern "C" static void daTag_Lv5Soup_Draw__FPv();
extern "C" static bool daTag_Lv5Soup_IsDelete__FPv();
extern "C" void __dt__15daTag_Lv5Soup_cFv();

//
// External References:
//

extern "C" void __ct__10fopAc_ac_cFv();
extern "C" void __dt__10fopAc_ac_cFv();
extern "C" void fopAcM_setCullSizeBox__FP10fopAc_ac_cffffff();
extern "C" void onEventBit__11dSv_event_cFUs();
extern "C" void isEventBit__11dSv_event_cCFUs();
extern "C" void __mi__4cXyzCFRC3Vec();
extern "C" void __dl__FPv();
extern "C" extern void* g_fopAc_Method[8];

//
// Declarations:
//

inline int dComIfGs_isEventBit(u16 event) {
    return g_dComIfG_gameInfo.info.getSavedata().getEvent().isEventBit(event);
}

/* 80D5B18C-80D5B1AC -00001 0020+00 1/0 0/0 0/0 .data            daTag_Lv5Soup_MethodTable */
SECTION_DATA static void* daTag_Lv5Soup_MethodTable[8] = {
    (void*)daTag_Lv5Soup_Create__FPv,
    (void*)daTag_Lv5Soup_Delete__FPv,
    (void*)daTag_Lv5Soup_Execute__FPv,
    (void*)daTag_Lv5Soup_IsDelete__FPv,
    (void*)daTag_Lv5Soup_Draw__FPv,
    (void*)NULL,
    (void*)NULL,
    (void*)NULL,
};

/* 80D5B1AC-80D5B1DC -00001 0030+00 0/0 0/0 1/0 .data            g_profile_TAG_LV5SOUP */
SECTION_DATA extern void* g_profile_TAG_LV5SOUP[12] = {
    (void*)0xFFFFFFFD, (void*)0x0007FFFD,
    (void*)0x01220000, (void*)&g_fpcLf_Method,
    (void*)0x0000056C, (void*)NULL,
    (void*)NULL,       (void*)&g_fopAc_Method,
    (void*)0x00460000, (void*)&daTag_Lv5Soup_MethodTable,
    (void*)0x00064100, (void*)0x050E0000,
};

/* 80D5B1DC-80D5B1E8 000050 000C+00 2/2 0/0 0/0 .data            __vt__15daTag_Lv5Soup_c */
SECTION_DATA extern void* __vt__15daTag_Lv5Soup_c[3] = {
    (void*)NULL /* RTTI */,
    (void*)NULL,
    (void*)__dt__15daTag_Lv5Soup_cFv,
};

/* 80D5AD58-80D5ADEC 000078 0094+00 1/1 0/0 0/0 .text            create__15daTag_Lv5Soup_cFv */
int daTag_Lv5Soup_c::create() {
    if (!fopAcM_CheckCondition(this, 8)) {
        new (this) daTag_Lv5Soup_c();
        fopAcM_OnCondition(this, 8);
    }

    fopAcM_setCullSizeBox(this, -30.0f, -15.0f, -30.0f, 30.0f, 45.0f, 30.0f);
    mAttentionInfo.mFlags = 0;
    return 4;
}

/* 80D5ADEC-80D5ADF4 00010C 0008+00 1/1 0/0 0/0 .text            Delete__15daTag_Lv5Soup_cFv */
int daTag_Lv5Soup_c::Delete() {
    return 1;
}

/* 80D5ADF4-80D5AE9C 000114 00A8+00 1/1 0/0 0/0 .text            Execute__15daTag_Lv5Soup_cFv */
int daTag_Lv5Soup_c::Execute() {
    if (isAreaCheck()) {
        // Yeto took pumpkin and pumpkin not in soup
        if (dComIfGs_isEventBit(0x0020) && !dComIfGs_isEventBit(0x0002)) {
            // Pumpkin in soup
            dComIfGs_onEventBit(0x0002);
        }

        // Yeto took cheese and cheese not in soup
        if (dComIfGs_isEventBit(0x0010) && !dComIfGs_isEventBit(0x0001)) {
            // Cheese in soup
            dComIfGs_onEventBit(0x0001);
        }
    }
    return 1;
}

/* 80D5AE9C-80D5AEA4 0001BC 0008+00 1/1 0/0 0/0 .text            Draw__15daTag_Lv5Soup_cFv */
int daTag_Lv5Soup_c::Draw() {
    return 1;
}

/* 80D5AEA4-80D5B06C 0001C4 01C8+00 1/1 0/0 0/0 .text            isAreaCheck__15daTag_Lv5Soup_cFv */
bool daTag_Lv5Soup_c::isAreaCheck() {
    cXyz dist = dComIfGp_getLinkPlayer()->mCurrent.mPosition - mCurrent.mPosition;
    f32 boundX = mScale.x * 100.0f;
    f32 boundY = mScale.y * 100.0f;

    if (sqrtf(dist.abs2XZ()) < boundX && -boundY < dist.y && dist.y < boundY) {
        return true;
    } else {
        return false;
    }
}

/* 80D5B06C-80D5B08C 00038C 0020+00 1/0 0/0 0/0 .text            daTag_Lv5Soup_Create__FPv */
static int daTag_Lv5Soup_Create(void* tag) {
    return static_cast<daTag_Lv5Soup_c*>(tag)->create();
}

/* 80D5B08C-80D5B0AC 0003AC 0020+00 1/0 0/0 0/0 .text            daTag_Lv5Soup_Delete__FPv */
static int daTag_Lv5Soup_Delete(void* tag) {
    return static_cast<daTag_Lv5Soup_c*>(tag)->Delete();
}

/* 80D5B0AC-80D5B0CC 0003CC 0020+00 1/0 0/0 0/0 .text            daTag_Lv5Soup_Execute__FPv */
static int daTag_Lv5Soup_Execute(void* tag) {
    return static_cast<daTag_Lv5Soup_c*>(tag)->Execute();
}

/* 80D5B0CC-80D5B0EC 0003EC 0020+00 1/0 0/0 0/0 .text            daTag_Lv5Soup_Draw__FPv */
static int daTag_Lv5Soup_Draw(void* tag) {
    return static_cast<daTag_Lv5Soup_c*>(tag)->Draw();
}

/* 80D5B0EC-80D5B0F4 00040C 0008+00 1/0 0/0 0/0 .text            daTag_Lv5Soup_IsDelete__FPv */
static int daTag_Lv5Soup_IsDelete(void* tag) {
    return 1;
}

/* 80D5B0F4-80D5B154 000414 0060+00 1/0 0/0 0/0 .text            __dt__15daTag_Lv5Soup_cFv */
daTag_Lv5Soup_c::~daTag_Lv5Soup_c() {}
