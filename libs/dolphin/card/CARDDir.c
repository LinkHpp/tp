#include "dolphin/card/CARDDir.h"
#include "dolphin/card.h"
#include "dolphin/card/CARDPriv.h"

static void WriteCallback(s32 chan, s32 result);
static void EraseCallback(s32 chan, s32 result);

/* 8035577C-80355784 3500BC 0008+00 0/0 10/10 0/0 .text            __CARDGetDirBlock */
CARDDir* __CARDGetDirBlock(CARDControl* card) {
    return card->currentDir;
}

/* 80355784-80355854 3500C4 00D0+00 1/1 0/0 0/0 .text            WriteCallback */
static void WriteCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;

    card = &__CARDBlock[chan];
    if (0 <= result) {
        CARDDir* dir0 = (CARDDir*)((u8*)card->workArea + 0x2000);
        CARDDir* dir1 = (CARDDir*)((u8*)card->workArea + 0x4000);

        if (card->currentDir == dir0) {
            card->currentDir = dir1;
            memcpy(dir1, dir0, 0x2000);
        } else {
            card->currentDir = dir0;
            memcpy(dir0, dir1, 0x2000);
        }
    }

error:
    if (card->apiCallback == 0) {
        __CARDPutControlBlock(card, result);
    }
    callback = card->eraseCallback;
    if (callback) {
        card->eraseCallback = 0;
        callback(chan, result);
    }
}

/* 80355854-8035591C 350194 00C8+00 1/1 0/0 0/0 .text            EraseCallback */
static void EraseCallback(s32 chan, s32 result) {
    CARDControl* card;
    CARDCallback callback;
    CARDDir* dir;
    u32 tmp[2];
    u32 addr;

    card = &__CARDBlock[chan];
    if (result < 0) {
        goto error;
    }

    dir = __CARDGetDirBlock(card);
    addr = ((u32)dir - (u32)card->workArea) / 0x2000 * card->sectorSize;
    result = __CARDWrite(chan, addr, 0x2000, dir, WriteCallback);
    if (result < 0) {
        goto error;
    }

    return;

error:
    if (card->apiCallback == 0) {
        __CARDPutControlBlock(card, result);
    }
    callback = card->eraseCallback;
    if (callback) {
        card->eraseCallback = 0;
        callback(chan, result);
    }
}

/* 8035591C-803559E0 35025C 00C4+00 0/0 4/4 0/0 .text            __CARDUpdateDir */
s32 __CARDUpdateDir(s32 chan, CARDCallback callback) {
    CARDControl* card;
    CARDDirCheck* check;
    u32 tmp[2];
    u32 addr;
    CARDDir* dir;

    card = &__CARDBlock[chan];
    if (!card->attached) {
        return CARD_RESULT_NOCARD;
    }

    dir = __CARDGetDirBlock(card);
    check = __CARDGetDirCheck(dir);
    ++check->checkCode;
    __CARDCheckSum(dir, 0x2000 - sizeof(u32), &check->checkSum, &check->checkSumInv);
    DCStoreRange(dir, 0x2000);

    card->eraseCallback = callback;
    addr = ((u32)dir - (u32)card->workArea) / 0x2000 * card->sectorSize;
    return __CARDEraseSector(chan, addr, EraseCallback);
}
