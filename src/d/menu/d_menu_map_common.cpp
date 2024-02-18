//
// Generated By: dol2asm
// Translation Unit: d/menu/d_menu_map_common
//

#include "d/menu/d_menu_map_common.h"
#include "d/com/d_com_inf_game.h"
#include "d/d_select_cursor.h"
#include "d/meter/d_meter_HIO.h"
#include "dol2asm.h"
#include "global.h"

/* ############################################################################################## */
/* 803BCF18-803BD02C 01A038 0114+00 2/2 0/0 0/0 .data            map_icon_size */
struct map_icon_size_t {
    float mXSize;
    float mYSize;
    u8 mIndex;
};

static map_icon_size_t map_icon_size[] = {
    {1.0f, 1.0f, 0x0},    {1.0f, 1.0f, 0x1},    {40.0f, 40.0f, 0x11}, {40.0f, 40.0f, 0x2},
    {40.0f, 40.0f, 0x12}, {40.0f, 40.0f, 0x4},  {40.0f, 40.0f, 0x3},  {40.0f, 40.0f, 0x5},
    {40.0f, 40.0f, 0x6},  {40.0f, 40.0f, 0x7},  {40.0f, 40.0f, 0x9},  {40.0f, 40.0f, 0xa},
    {40.0f, 40.0f, 0xb},  {40.0f, 40.0f, 0xc},  {40.0f, 40.0f, 0xf},  {40.0f, 40.0f, 0x10},
    {40.0f, 40.0f, 0x8},  {67.5f, 40.0f, 0xd},  {40.0f, 40.0f, 0xe},  {40.0f, 40.0f, 0x13},
    {40.0f, 40.0f, 0x14}, {40.0f, 40.0f, 0x15}, {40.0f, 40.0f, 0x16}};

/* 801C2718-801C27B4 1BD058 009C+00 0/0 2/2 0/0 .text            __ct__16dMenuMapCommon_cFv */
dMenuMapCommon_c::dMenuMapCommon_c() {
    for (int i = 0; i < 23; i++) {
        mPictures[i] = NULL;
    }
    _60 = 0;
    mpDrawCursor = NULL;
    mpPortalIcon = NULL;
    _6c = 0;
    _c72 = 0;
    _c78 = 0.0f;
    _c74 = 0;
    _c80 = 0.0f;
    _c7c = 0.0f;
    _c84 = 0.0f;
    _c88 = 0.0f;
    _c8c = 0.0f;
    _c90 = 0;
    clearIconInfo();
}

/* 801C27B4-801C28D8 1BD0F4 0124+00 1/0 2/2 0/0 .text            __dt__16dMenuMapCommon_cFv */
dMenuMapCommon_c::~dMenuMapCommon_c() {
    for (int i = 0; i < 23; i++) {
        if (mPictures[i] != NULL) {
            delete mPictures[i];
            mPictures[i] = NULL;
        }
    }
    if (_60 != NULL) {
        delete _60;
        _60 = NULL;
    }
    if (mpDrawCursor != NULL) {
        delete mpDrawCursor;
        mpDrawCursor = NULL;
    }
    if (mpPortalIcon != NULL) {
        delete mpPortalIcon;
        mpPortalIcon = NULL;
    }
}

/* 801C28D8-801C38E4 1BD218 100C+00 0/0 2/2 0/0 .text initiate__16dMenuMapCommon_cFP10JKRArchive
 */
void dMenuMapCommon_c::initiate(JKRArchive* arc) {
    ResTIMG* mp_image;

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_s_ci8_16_00.bti");
    ASSERT(mp_image != 0);
    mPictures[4] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[4]->append(mp_image, 0.0f);
    mPictures[4]->setBasePosition(J2DBasePosition_4);
    mPictures[4]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_s_ci8_16_00.bti");
    ASSERT(mp_image != 0);
    mPictures[3] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_boss_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[3]->append(mp_image, 0.0f);
    mPictures[3]->setBasePosition(J2DBasePosition_4);
    mPictures[3]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_enter_ci8_24_02.bti");
    ASSERT(mp_image != 0);
    mPictures[20] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_enter_ci8_02.bti");
    ASSERT(mp_image != 0);
    mPictures[20]->append(mp_image, 0.0f);
    mPictures[20]->setBasePosition(J2DBasePosition_4);
    mPictures[20]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_enter_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[21] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_enter_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[21]->append(mp_image, 0.0f);
    mPictures[21]->setBasePosition(J2DBasePosition_4);
    mPictures[21]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_warp_24_ci8_00.bti");
    ASSERT(mp_image != 0);
    mPictures[22] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_warp_32_ci8_00.bti");
    ASSERT(mp_image != 0);
    mPictures[22]->append(mp_image, 0.0f);
    mPictures[22]->setBasePosition(J2DBasePosition_4);
    mPictures[22]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_box_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[19] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_box_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[19]->append(mp_image, 0.0f);
    mPictures[19]->setBasePosition(J2DBasePosition_4);
    mPictures[19]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_gray_00.bti");
    ASSERT(mp_image != 0);
    mPictures[14] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_key_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[14]->append(mp_image, 0.0f);
    mPictures[14]->setBasePosition(J2DBasePosition_4);
    mPictures[14]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[9] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_yuki_M.bti");
    ASSERT(mp_image != 0);
    mPictures[9]->append(mp_image, 0.0f);
    mPictures[9]->setBasePosition(J2DBasePosition_4);
    mPictures[9]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[10] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_yuki_W.bti");
    ASSERT(mp_image != 0);
    mPictures[10]->append(mp_image, 0.0f);
    mPictures[10]->setBasePosition(J2DBasePosition_4);
    mPictures[10]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_yellow_00.bti");
    ASSERT(mp_image != 0);
    mPictures[11] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "st_gold_wolf.bti");
    ASSERT(mp_image != 0);
    mPictures[11]->append(mp_image, 0.0f);
    mPictures[11]->setBasePosition(J2DBasePosition_4);
    mPictures[11]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[12] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_monkey_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[12]->append(mp_image, 0.0f);
    mPictures[12]->setBasePosition(J2DBasePosition_4);
    mPictures[12]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_blue_00.bti");
    ASSERT(mp_image != 0);
    mPictures[15] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "ni_obacyan.bti");
    ASSERT(mp_image != 0);
    mPictures[15]->append(mp_image, 0.0f);
    mPictures[15]->setBasePosition(J2DBasePosition_4);
    mPictures[15]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_blue_00.bti");
    ASSERT(mp_image != 0);
    mPictures[16] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "ni_obacyan.bti");
    ASSERT(mp_image != 0);
    mPictures[16]->append(mp_image, 0.0f);
    mPictures[16]->setBasePosition(J2DBasePosition_4);
    mPictures[16]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[8] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG',
                                          "im_zelda_map_icon_copy_stone_statue_snup_try_00_04.bti");
    ASSERT(mp_image != 0);
    mPictures[8]->append(mp_image, 0.0f);
    mPictures[8]->setBasePosition(J2DBasePosition_4);
    mPictures[8]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_link_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[17] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_link_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[17]->append(mp_image, 0.0f);
    mPictures[17]->setBasePosition(J2DBasePosition_4);
    mPictures[17]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_penant_s_ci8_24_00.bti");
    ASSERT(mp_image != 0);
    mPictures[2] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_penant_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[2]->append(mp_image, 0.0f);
    mPictures[2]->setBasePosition(J2DBasePosition_4);
    mPictures[2]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_black_32.bti");
    ASSERT(mp_image != 0);
    mPictures[5] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_black_32.bti");
    ASSERT(mp_image != 0);
    mPictures[5]->append(mp_image, 0.0f);
    mPictures[5]->setBasePosition(J2DBasePosition_4);
    mPictures[5]->setInfluencedAlpha(false, false);

    mPictures[5]->setBlackWhite(JUtility::TColor(0, 0, 0, 0), JUtility::TColor(0, 0, 0, 255));

    // todo check if this value is mPictures[23] (out of the array) or field 0x60
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_hikari_no_shizuku_try_10_00_24x24.bti");
    ASSERT(mp_image != 0);
    mPictures[23] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_hikari_no_shizuku_try_10_00_24x24.bti");
    ASSERT(mp_image != 0);
    mPictures[23]->append(mp_image, 0.0f);
    mPictures[23]->setBasePosition(J2DBasePosition_4);
    mPictures[23]->setInfluencedAlpha(false, false);

    mPictures[23]->setBlackWhite(JUtility::TColor(0, 240, 170, 0),
                                 JUtility::TColor(255, 255, 230, 255));

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[6] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_zelda_map_icon_hikari_ball_03.bti");
    ASSERT(mp_image != 0);
    mPictures[6]->append(mp_image, 0.0f);
    mPictures[6]->setBasePosition(J2DBasePosition_4);
    mPictures[6]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[7] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_iron_ball_ci8_32_00.bti");
    ASSERT(mp_image != 0);
    mPictures[7]->append(mp_image, 0.0f);
    mPictures[7]->setBasePosition(J2DBasePosition_4);
    mPictures[7]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "tt_map_icon_s_size_circle_ci4_00.bti");
    ASSERT(mp_image != 0);
    mPictures[13] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_map_icon_basha_ci8.bti");
    ASSERT(mp_image != 0);
    mPictures[13]->append(mp_image, 0.0f);
    mPictures[13]->setBasePosition(J2DBasePosition_4);
    mPictures[13]->setInfluencedAlpha(false, false);

    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_nijumaru_40x40_ind_01.bti");
    ASSERT(mp_image != 0);
    mPictures[18] = new J2DPicture(mp_image);
    mp_image = (ResTIMG*)arc->getResource('TIMG', "im_nijumaru_40x40_ind_01.bti");
    ASSERT(mp_image != 0);
    mPictures[18]->append(mp_image, 0.0f);
    mPictures[18]->setBasePosition(J2DBasePosition_4);
    mPictures[18]->setInfluencedAlpha(false, false);

    mpDrawCursor = new dSelect_cursor_c(4, 1.0f, NULL);
    ASSERT(mpDrawCursor != 0);

    if (arc == dComIfGp_getFmapResArchive()) {
        mpPortalIcon = new dSelect_cursor_c(5, 1.0f, arc);
        ASSERT(mpPortalIcon != 0);
    }
}

/* 801C38E4-801C3EC4 1BE224 05E0+00 0/0 2/2 0/0 .text            drawIcon__16dMenuMapCommon_cFffff
 */
void dMenuMapCommon_c::drawIcon(f32 param_1, f32 param_2, f32 param_3, f32 param_4) {
    s16 tmp[128];
    if (g_fmapHIO.mMapIconHIO.mIconDebug) {
        debugIcon();
    }
    if (mpDrawCursor) {
        mpDrawCursor->onUpdateFlag();
    }
    if (mpPortalIcon) {
        mpPortalIcon->onUpdateFlag();
    }
    int counter = 0;
    for (int i = 0; i < 128; i++) {
        tmp[i] = -1;
    }

    for (int i = 22; i >= 0; i--) {
        for (s16 j = 0; j < 128; j++) {
            if (i == _70[j]._14 && _70[j]._15 != 0) {
                tmp[counter] = j;
                counter++;
            }
        }
    }

    for (int i = 0; i < 128; i++) {
        s16 sVar9 = tmp[i];
        if (sVar9 != -1) {
            if (_70[sVar9]._14 == 0) {
                if (mpDrawCursor != NULL) {
                    f32 local_1b4 = _70[sVar9]._0;
                    f32 local_1b8 = _70[sVar9]._4;
                    if (mpDrawCursor->getUpdateFlag() == 1) {
                        if (_70[sVar9]._15 == 2) {
                            mpDrawCursor->setAlphaRate(1.0f);
                        } else if (_70[sVar9]._15 == 3) {
                            mpDrawCursor->setAlphaRate(_c78);
                        } else {
                            mpDrawCursor->setAlphaRate(param_4 * (param_3 * _70[sVar9]._10));
                        }
                    }
                    f32 local_1bc = (local_1b4 + param_1);
                    mpDrawCursor->setPos(local_1bc, (local_1b8 + param_2));
                    mpDrawCursor->setScale( _70[sVar9]._8 * g_fmapHIO.mMapIconHIO.mPortalCursorScale);
                    mpDrawCursor->draw();
                    mpDrawCursor->resetUpdateFlag();
                }
            } else if (_70[sVar9]._14 == 1) {
                if (mpPortalIcon != NULL) {
                    f32 local_1c0 = _70[sVar9]._0;
                    f32 local_1c4 = _70[sVar9]._4;
                    if (mpPortalIcon->getUpdateFlag() == 1) {
                        if (_70[sVar9]._15 == 2) {
                            mpPortalIcon->setAlphaRate(1.0f);
                        } else if (_70[sVar9]._15 == 3) {
                            mpPortalIcon->setAlphaRate(_c78);
                        } else {
                            mpPortalIcon->setAlphaRate(param_3 * _70[sVar9]._10);
                        }
                    }
                    f32 local_1c8 = (local_1c0 + param_1);
                    mpPortalIcon->setPos(local_1c8, (local_1c4 + param_2));
                    mpPortalIcon->setScale(_70[sVar9]._8 * g_fmapHIO.mMapIconHIO.mPortalIconScale);
                    mpPortalIcon->draw();
                    mpPortalIcon->resetUpdateFlag();
                }
            } else if (mPictures[_70[sVar9]._14] != NULL) {
                f32 fVar2 = _70[sVar9]._0;
                f32 fVar3 = _70[sVar9]._4;
                f32 dVar11 = getIconSizeX(_70[sVar9]._14);
                f32 dVar12 = getIconSizeY(_70[sVar9]._14);
                f32 dVar17 = ((4.0f / 7.0f) * getIconSizeX(_70[sVar9]._14));
                f32 dVar13 = ((4.0f / 7.0f) * getIconSizeY(_70[sVar9]._14));
                if (_70[sVar9]._14 == 5) {
                    dVar11 = (dVar11 * _c7c);
                    dVar12 = (dVar12 * _c7c);
                }
                mPictures[_70[sVar9]._14]->rotate(
                    dVar11 / 2,
                    dVar12 / 2, ROTATE_Z,
                    _70[sVar9]._C);
                if (_70[sVar9]._14 == 5) {
                    mPictures[_70[sVar9]._14]->setAlpha(((180.0f * _c80) / 255.0f));
                    _60->rotate((dVar17 / 2), (dVar13 / 2), ROTATE_Z, _70[sVar9]._C);
                    _60->setAlpha(_c80);
                } else if (_70[sVar9]._15 == 2) {
                    mPictures[_70[sVar9]._14]->setAlpha(0xff);
                } else if (_70[sVar9]._15 == 3) {
                    mPictures[_70[sVar9]._14]->setAlpha(255.0f * _c78);
                } else {
                    mPictures[_70[sVar9]._14]->setAlpha(param_4 *
                                                        (255.0f * param_3 * _70[sVar9]._10));
                }
                f32 temp = (fVar2 - (dVar11 / 2));
                fVar2 = param_1 + temp;
                mPictures[_70[sVar9]._14]->draw(fVar2, (param_2 + (fVar3 - dVar12 / 2)), dVar11, dVar12,
                                                false, false, false);
                if (_70[sVar9]._14 == 5) {
                    _60->draw((fVar2 + (dVar11 / 2)) - (dVar17 / 2),
                              ((dVar12 / 2) + (param_2 + (fVar3 - dVar12 / 2))) - (dVar13 / 2),
                              dVar17, dVar13, false, false, false);
                }
            }
        }
    }
}

/* 801C3EC4-801C43A8 1BE804 04E4+00 0/0 4/4 0/0 .text            iconScale__16dMenuMapCommon_cFifff
 */
void dMenuMapCommon_c::iconScale(int param_1, f32 param_2, f32 param_3, f32 param_4) {
    _c88 = 1.0f + param_4;
    f32 local_74[23];
    local_74[17] =
        g_fmapHIO.mMapIconHIO.mLinkZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mLinkZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mLinkScale[param_1]);
    local_74[20] =
        g_fmapHIO.mMapIconHIO.mDungeonEntranceZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mDungeonEntranceZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mDungeonEntranceScale[param_1]);
    local_74[21] =
        g_fmapHIO.mMapIconHIO.mRoomEntranceZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mRoomEntranceZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mRoomEntranceScale[param_1]);
    local_74[22] =
        g_fmapHIO.mMapIconHIO.mLV8EntranceZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mLV8EntranceZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mLV8EntranceScale[param_1]);
    local_74[4] =
        g_fmapHIO.mMapIconHIO.mBossZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mBossZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mBossScale[param_1]);
    local_74[3] =
        g_fmapHIO.mMapIconHIO.mGanonZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mGanonZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mGanonScale[param_1]);
    local_74[14] =
        g_fmapHIO.mMapIconHIO.mSmallKeyZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mSmallKeyZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mSmallKeyScale[param_1]);
    local_74[19] =
        g_fmapHIO.mMapIconHIO.mChestZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mChestZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mChestScale[param_1]);
    local_74[9] =
        g_fmapHIO.mMapIconHIO.mYetoZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mYetoZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mYetoScale[param_1]);
    local_74[10] =
        g_fmapHIO.mMapIconHIO.mYetaZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mYetaZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mYetaScale[param_1]);
    local_74[11] =
        g_fmapHIO.mMapIconHIO.mGoldWolfZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mGoldWolfZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mGoldWolfScale[param_1]);
    local_74[12] =
        g_fmapHIO.mMapIconHIO.mMonkeyZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mMonkeyZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mMonkeyScale[param_1]);
    local_74[15] =
        g_fmapHIO.mMapIconHIO.mOoccooZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mOoccooZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mOoccooScale[param_1]);
    local_74[16] =
        g_fmapHIO.mMapIconHIO.mOoccooPotZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mOoccooPotZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mOoccooPotScale[param_1]);
    local_74[8] =
        g_fmapHIO.mMapIconHIO.mCopyRodStatueZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mCopyRodStatueZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mCopyRodStatueScale[param_1]);
    local_74[2] =
        g_fmapHIO.mMapIconHIO.mDungeonWarpZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mDungeonWarpZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mDungeonWarpScale[param_1]);
    local_74[5] =
        g_fmapHIO.mMapIconHIO.mLightDropZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mLightDropZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mLightDropScale[param_1]);
    local_74[6] =
        g_fmapHIO.mMapIconHIO.mLightOrbZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mLightOrbZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mLightOrbScale[param_1]);
    local_74[7] =
        g_fmapHIO.mMapIconHIO.mCannonBallZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mCannonBallZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mCannonBallScale[param_1]);
    local_74[13] =
        g_fmapHIO.mMapIconHIO.mWagonZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mWagonZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mWagonScale[param_1]);
    local_74[18] =
        g_fmapHIO.mMapIconHIO.mDestinationZoomScale[param_1] -
        param_2 * (g_fmapHIO.mMapIconHIO.mDestinationZoomScale[param_1] - g_fmapHIO.mMapIconHIO.mDestinationScale[param_1]);
    local_74[0] = 1.0f;
    local_74[1] = 1.0f;
    for (int i = 0; i < 23; i++) {
        if (mPictures[i] != NULL) {
            if (i == 13) {
                mPictures[i]->scale(((16.0f / 27.0f) +
                                  ((11.0f / 27.0f) * param_4)) *
                                     local_74[i],
                                 local_74[i]);
            } else {
                mPictures[i]->scale(local_74[i], local_74[i]);
                if (i == 5) {
                    _60->scale(local_74[i], local_74[i]);
                }
            }
        }
    }
    setBlendRatio(17, param_3, param_4);
    setBlendRatio(20, param_3, param_4);
    setBlendRatio(21, param_3, param_4);
    setBlendRatio(22, param_3, param_4);
    setBlendRatio(4, param_3, param_4);
    setBlendRatio(3, param_3, param_4);
    setBlendRatio(14, param_3, param_4);
    setBlendRatio(19, param_3, param_4);
    setBlendRatio(9, param_3, param_4);
    setBlendRatio(10, param_3, param_4);
    setBlendRatio(11, param_3, param_4);
    setBlendRatio(12, param_3, param_4);
    setBlendRatio(15, param_3, param_4);
    setBlendRatio(16, param_3, param_4);
    setBlendRatio(8, param_3, param_4);
    setBlendRatio(2, param_3, param_4);
    setBlendRatio(5, param_3, param_4);
    setBlendRatio(6, param_3, param_4);
    setBlendRatio(7, param_3, param_4);
    setBlendRatio(13, param_3, param_4);
    setBlendRatio(18, param_3, param_4);
}

/* 801C43A8-801C443C 1BECE8 0094+00 1/1 3/3 0/0 .text setIconInfo__16dMenuMapCommon_cFUcfffffUc */
bool dMenuMapCommon_c::setIconInfo(u8 param_1, f32 param_2, f32 param_3, f32 param_4, f32 param_5,
                                   f32 param_6, u8 param_7) {
    if (mIconNum >= 128) {
        return false;
    }
    _70[mIconNum]._0 = param_2;
    _70[mIconNum]._4 = param_3;
    _70[mIconNum]._8 = param_6;
    _70[mIconNum]._C = param_5;
    _70[mIconNum]._14 = param_1;
    _70[mIconNum]._15 = param_7;
    _70[mIconNum]._10 = param_4;
    mIconNum++;
    return true;
}

/* 801C443C-801C4494 1BED7C 0058+00 1/1 2/2 0/0 .text            clearIconInfo__16dMenuMapCommon_cFv
 */
void dMenuMapCommon_c::clearIconInfo() {
    mIconNum = 0;
    for (int i = 0; i < 128; i++) {
        _70[i]._0 = 0.0f;
        _70[i]._4 = 0.0f;
        _70[i]._8 = 1.0f;
        _70[i]._C = 0.0f;
        _70[i]._14 = 23;
        _70[i]._15 = 0;
        // !@bug _10 is only set to zero in the first icon.
        // Shouldn't really matter though as setIconInfo sets it on init.
        _70[mIconNum]._10 = 0.0f;
    }
}

/* 801C4494-801C452C 1BEDD4 0098+00 1/1 0/0 0/0 .text setBlendRatio__16dMenuMapCommon_cFUcff */
void dMenuMapCommon_c::setBlendRatio(u8 param_1, f32 param_2, f32 param_3) {
    if (mPictures[param_1] != NULL) {
        mPictures[param_1]->setBlendRatio(param_2, param_3);
        if (param_1 == 5) {
            _60->setBlendRatio(param_2, param_3);
        }
    }
}

/* 801C452C-801C4600 1BEE6C 00D4+00 0/0 1/1 0/0 .text            blinkMove__16dMenuMapCommon_cFs */
void dMenuMapCommon_c::blinkMove(s16 param_1) {
    _c72++;
    if (_c72 >= param_1) {
        _c72 -= (s16)(param_1 + 15);
    }
    if (_c72 < 0) {
        _c78 = 1.0f;
    } else if (_c72 <= param_1 / 2.0f) {
        _c78 = (param_1 / 2.0f - _c72) / (param_1 / 2.0f);
    } else {
        _c78 = (_c72 - param_1 / 2.0f) / (param_1 / 2.0f);
    }
}

/* 801C4600-801C4738 1BEF40 0138+00 0/0 1/1 0/0 .text moveLightDropAnime__16dMenuMapCommon_cFv */
void dMenuMapCommon_c::moveLightDropAnime() {
    int bVar6 = 0;
    if (_c88 > 1.0f) {
        bVar6 = 1;
    }
    s16 r7 = g_fmapHIO.mMapIconHIO.mLightDropFlashFrameNum;
    f32 fVar3 = g_fmapHIO.mMapIconHIO.mLightDropFlashStartScaleOut[bVar6];
    f32 fVar4 = g_fmapHIO.mMapIconHIO.mLightDropFlashEndScaleOut[bVar6];
    u8 bVar1 = g_fmapHIO.mMapIconHIO.mLightDropFlashStartAlphaOut[bVar6];
    u8 bVar2 = g_fmapHIO.mMapIconHIO.mLightDropFlashEndAlphaOut[bVar6];
    _c74++;
    if (_c74 >= r7) {
        _c74 -= r7;
    }
    f32 fVar7;
    if (_c74 <= r7 / 2.0f) {
        fVar7 = (r7 / 2.0f - _c74) / (r7 / 2.0f);
    } else {
        fVar7 = (_c74 - r7 / 2.0f) / (r7 / 2.0f);
    }
    _c80 = bVar1 + fVar7 * (bVar2 - bVar1);
    _c7c = fVar3 + fVar7 * (fVar4 - fVar3);
}

/* 801C4738-801C4778 1BF078 0040+00 1/1 0/0 0/0 .text            getIconSizeX__16dMenuMapCommon_cFUc
 */
float dMenuMapCommon_c::getIconSizeX(u8 index) {
    for (int i = 0; i < ARRAY_SIZE(map_icon_size); i++) {
        if (map_icon_size[i].mIndex == index) {
            return map_icon_size[i].mXSize;
        }
    }
    return 0.0f;
}

/* 801C4778-801C47C4 1BF0B8 004C+00 1/1 0/0 0/0 .text            getIconSizeY__16dMenuMapCommon_cFUc
 */
float dMenuMapCommon_c::getIconSizeY(u8 index) {
    for (int i = 0; i < ARRAY_SIZE(map_icon_size); i++) {
        if (map_icon_size[i].mIndex == index) {
            return map_icon_size[i].mYSize;
        }
    }
    return 0.0f;
}

/* 801C47C4-801C4D54 1BF104 0590+00 1/1 0/0 0/0 .text            debugIcon__16dMenuMapCommon_cFv */
void dMenuMapCommon_c::debugIcon() {
    int iVar6 = -1;
    for (int i = 0; i < 128; i++)
    {
        if (_70[i]._14 == 17) {
            iVar6 = i;
            break;
        }
    }
    if (iVar6 < 0) {
        return;
    }

    f32 dVar10 = _70[iVar6]._0;
    f32 dVar9 = _70[iVar6]._4;
    f32 dVar7 = _70[iVar6]._8;
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[0]) {
        setIconInfo(0, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
        setIconInfo(1, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (!g_fmapHIO.mMapIconHIO.mIconDisplay[1]) {
        _70[iVar6]._15 = 0;
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[2]) {
        setIconInfo(2, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[3]) {
        setIconInfo(18, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[4]) {
        setIconInfo(4, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[5]) {
        setIconInfo(3, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[6]) {
        setIconInfo(5, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[7]) {
        setIconInfo(6, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[8]) {
        setIconInfo(7, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[9]) {
        setIconInfo(9, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[10]) {
        setIconInfo(10, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[11]) {
        setIconInfo(11, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[12]) {
        setIconInfo(12, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[13]) {
        setIconInfo(15, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[14]) {
        setIconInfo(16, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[15]) {
        setIconInfo(8, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[16]) {
        setIconInfo(13, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[17]) {
        setIconInfo(14, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[18]) {
        setIconInfo(19, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[19]) {
        setIconInfo(20, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[20]) {
        setIconInfo(21, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
    if (g_fmapHIO.mMapIconHIO.mIconDisplay[21]) {
        setIconInfo(22, dVar10, dVar9, 0.0f, dVar7, 1.0f, 1);
    }
}
