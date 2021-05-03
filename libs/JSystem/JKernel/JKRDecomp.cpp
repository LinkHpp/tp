//
// Generated By: dol2asm
// Translation Unit: JKRDecomp
//

#include "JSystem/JKernel/JKRDecomp.h"
#include "JSystem/JKernel/JKRAramPiece.h"
#include "JSystem/JKernel/JKRHeap.h"
#include "dol2asm.h"
#include "dolphin/types.h"

//
// Forward References:
//

extern "C" void create__9JKRDecompFl();
extern "C" void __ct__9JKRDecompFl();
extern "C" void __dt__9JKRDecompFv();
extern "C" void run__9JKRDecompFv();
extern "C" void prepareCommand__9JKRDecompFPUcPUcUlUlPFUl_v();
extern "C" void sendCommand__9JKRDecompFP16JKRDecompCommand();
extern "C" void orderAsync__9JKRDecompFPUcPUcUlUlPFUl_v();
extern "C" void sync__9JKRDecompFP16JKRDecompCommandi();
extern "C" void orderSync__9JKRDecompFPUcPUcUlUl();
extern "C" void decode__9JKRDecompFPUcPUcUlUl();
extern "C" void decodeSZP__9JKRDecompFPUcPUcUlUl();
extern "C" void decodeSZS__9JKRDecompFPUcPUcUlUl();
extern "C" void checkCompressed__9JKRDecompFPUc();
extern "C" void __ct__16JKRDecompCommandFv();
extern "C" void __dt__16JKRDecompCommandFv();
extern "C" u8 sMessageBuffer__9JKRDecomp[32];
extern "C" u8 sMessageQueue__9JKRDecomp[32];
extern "C" u8 sDecompObject__9JKRDecomp[4 + 4 /* padding */];

//
// External References:
//

extern "C" void* __nw__FUlP7JKRHeapi();
extern "C" void __dl__FPv();
extern "C" void __ct__9JKRThreadFUlii();
extern "C" void __dt__9JKRThreadFv();
extern "C" void sendCommand__12JKRAramPieceFP12JKRAMCommand();
extern "C" void _savegpr_27();
extern "C" void _savegpr_28();
extern "C" void _restgpr_27();
extern "C" void _restgpr_28();
extern "C" u8 sSystemHeap__7JKRHeap[4];

//
// Declarations:
//

/* ############################################################################################## */
/* 804514B0-804514B8 0009B0 0004+04 1/1 0/0 0/0 .sbss            sDecompObject__9JKRDecomp */
JKRDecomp* JKRDecomp::sDecompObject;

JKRDecomp* JKRDecomp::create(long priority) {
    if (!sDecompObject) {
        sDecompObject = new (JKRHeap::getSystemHeap(), 0) JKRDecomp(priority);
    }

    return sDecompObject;
}

/* ############################################################################################## */
/* 803CC460-803CC480 029580 0020+00 1/1 0/0 0/0 .data            sMessageBuffer__9JKRDecomp */
OSMessage JKRDecomp::sMessageBuffer[8] = {0};

/* 803CC480-803CC4A0 0295A0 0020+00 2/2 0/0 0/0 .data            sMessageQueue__9JKRDecomp */
OSMessageQueue JKRDecomp::sMessageQueue = {0};

/* 802DB6E0-802DB730 2D6020 0050+00 1/1 0/0 0/0 .text            __ct__9JKRDecompFl */
JKRDecomp::JKRDecomp(long priority) : JKRThread(0x800, 0x10, priority) {
    resume();
}

/* 802DB730-802DB790 2D6070 0060+00 1/0 0/0 0/0 .text            __dt__9JKRDecompFv */
JKRDecomp::~JKRDecomp() {}

/* 802DB790-802DB858 2D60D0 00C8+00 1/0 0/0 0/0 .text            run__9JKRDecompFv */
void* JKRDecomp::run(void) {
    OSInitMessageQueue(&sMessageQueue, sMessageBuffer, 8);
    for (;;) {
        OSMessage message;
        OSReceiveMessage(&sMessageQueue, &message, OS_MESSAGE_BLOCKING);

        JKRDecompCommand* command = (JKRDecompCommand*)message;
        decode(command->mSrcBuffer, command->mDstBuffer, command->mSrcLength, command->mDstLength);

        if (command->field_0x20 != 0) {
            if (command->field_0x20 == 1) {
                JKRAramPiece::sendCommand(command->mAMCommand);
            }
            continue;
        }

        if (command->mCallback) {
            (*command->mCallback)((u32)command);
            continue;
        }

        if (command->field_0x1c) {
            OSSendMessage(command->field_0x1c, (OSMessage)1, OS_MESSAGE_NON_BLOCKING);
        } else {
            OSSendMessage(&command->mMessageQueue, (OSMessage)1, OS_MESSAGE_NON_BLOCKING);
        }
    }
}

/* 802DB858-802DB8D0 2D6198 0078+00 1/1 0/0 0/0 .text prepareCommand__9JKRDecompFPUcPUcUlUlPFUl_v
 */
JKRDecompCommand* JKRDecomp::prepareCommand(u8* srcBuffer, u8* dstBuffer, u32 srcLength,
                                            u32 dstLength,
                                            JKRDecompCommand::AsyncCallback callback) {
    JKRDecompCommand* command = new (JKRHeap::getSystemHeap(), -4) JKRDecompCommand();
    command->mSrcBuffer = srcBuffer;
    command->mDstBuffer = dstBuffer;
    command->mSrcLength = srcLength;
    command->mDstLength = dstLength;
    command->mCallback = callback;
    return command;
}

/* 802DB8D0-802DB900 2D6210 0030+00 1/1 1/1 0/0 .text sendCommand__9JKRDecompFP16JKRDecompCommand
 */
void JKRDecomp::sendCommand(JKRDecompCommand* command) {
    OSSendMessage(&sMessageQueue, command, OS_MESSAGE_NON_BLOCKING);
}

/* 802DB900-802DB934 2D6240 0034+00 1/1 0/0 0/0 .text orderAsync__9JKRDecompFPUcPUcUlUlPFUl_v */
JKRDecompCommand* JKRDecomp::orderAsync(u8* srcBuffer, u8* dstBuffer, u32 srcLength, u32 dstLength,
                                        JKRDecompCommand::AsyncCallback callback) {
    JKRDecompCommand* command =
        prepareCommand(srcBuffer, dstBuffer, srcLength, dstLength, callback);
    sendCommand(command);
    return command;
}

/* 802DB934-802DB988 2D6274 0054+00 1/1 0/0 0/0 .text sync__9JKRDecompFP16JKRDecompCommandi */
bool JKRDecomp::sync(JKRDecompCommand* command, int isNonBlocking) {
    OSMessage message;
    bool result;
    if (isNonBlocking == JKRDECOMP_SYNC_BLOCKING) {
        OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_BLOCKING);
        result = true;
    } else {
        result =
            OSReceiveMessage(&command->mMessageQueue, &message, OS_MESSAGE_NON_BLOCKING) != FALSE;
    }

    return result;
}

/* 802DB988-802DB9DC 2D62C8 0054+00 0/0 5/5 0/0 .text            orderSync__9JKRDecompFPUcPUcUlUl */
bool JKRDecomp::orderSync(u8* srcBuffer, u8* dstBuffer, u32 srcLength, u32 dstLength) {
    JKRDecompCommand* command = orderAsync(srcBuffer, dstBuffer, srcLength, dstLength, NULL);
    bool result = sync(command, JKRDECOMP_SYNC_BLOCKING);
    delete command;
    return result;
}

/* 802DB9DC-802DBA58 2D631C 007C+00 1/1 0/0 0/0 .text            decode__9JKRDecompFPUcPUcUlUl */
void JKRDecomp::decode(u8* srcBuffer, u8* dstBuffer, u32 srcLength, u32 dstLength) {
    JKRCompression compression = checkCompressed(srcBuffer);
    if (compression == COMPRESSION_YAY0) {
        decodeSZP(srcBuffer, dstBuffer, srcLength, dstLength);
    } else if (compression == COMPRESSION_YAZ0) {
        decodeSZS(srcBuffer, dstBuffer, srcLength, dstLength);
    }
}

/* 802DBA58-802DBC14 2D6398 01BC+00 1/1 0/0 0/0 .text            decodeSZP__9JKRDecompFPUcPUcUlUl */
// All instructions match. Wrong registers are used.
#ifdef NONMATCHING
void JKRDecomp::decodeSZP(u8* src, u8* dst, u32 srcLength, u32 dstLength) {
    u32 decodedSize;
    s32 srcChunkOffset;
    s32 count;
    s32 dstOffset;
    u32 length;
    u32 counter;
    u32 srcDataOffset;
    u32 linkTableOffset;
    s32 offset;
    s32 i;

    decodedSize = read_big_endian_u32(src + 4);
    linkTableOffset = read_big_endian_u32(src + 8);
    srcDataOffset = read_big_endian_u32(src + 12);

    dstOffset = 0;
    counter = 0;
    srcChunkOffset = 16;

    u32 chunkBits;
    if (srcLength == 0)
        return;
    if (dstLength > decodedSize)
        return;

    length = srcLength;
    do {
        if (counter == 0) {
            chunkBits = read_big_endian_u32(src + srcChunkOffset);
            srcChunkOffset += 4;
            counter = 32;
        }

        if (chunkBits & 0x80000000) {
            if (dstLength == 0) {
                dst[dstOffset] = src[srcDataOffset];
                length--;
                if (length == 0) {
                    return;
                }
            } else {
                dstLength--;
            }
            dstOffset++;
            srcDataOffset++;
        } else {
            u32 linkInfo = read_big_endian_u16(src + linkTableOffset);
            linkTableOffset += 2;

            offset = dstOffset - (linkInfo & 0xFFF);
            count = ((s32)linkInfo) >> 12;
            if (count == 0) {
                count = (u32)src[srcDataOffset] + 0x12;
                srcDataOffset++;
            } else {
                count += 2;
            }

            if (count > decodedSize - dstOffset) {
                count = decodedSize - dstOffset;
            }

            for (i = 0; i < count; i++, dstOffset++, offset++) {
                if (dstLength == 0) {
                    dst[dstOffset] = dst[offset - 1];
                    length--;
                    if (length == 0) {
                        return;
                    }
                } else {
                    dstLength--;
                }
            }
        }

        chunkBits <<= 1;
        counter--;
    } while ((s32)dstLength < decodedSize);
}
#else
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::decodeSZP(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/decodeSZP__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop
#endif

/* 802DBC14-802DBCF8 2D6554 00E4+00 1/1 0/0 0/0 .text            decodeSZS__9JKRDecompFPUcPUcUlUl */
#pragma push
#pragma optimization_level 0
#pragma optimizewithasm off
asm void JKRDecomp::decodeSZS(u8* param_0, u8* param_1, u32 param_2, u32 param_3) {
    nofralloc
#include "asm/JSystem/JKernel/JKRDecomp/decodeSZS__9JKRDecompFPUcPUcUlUl.s"
}
#pragma pop

/* 802DBCF8-802DBD70 2D6638 0078+00 1/1 4/4 0/0 .text            checkCompressed__9JKRDecompFPUc */
JKRCompression JKRDecomp::checkCompressed(u8* src) {
    if ((src[0] == 'Y') && (src[1] == 'a') && (src[3] == '0')) {
        if (src[2] == 'y') {
            return COMPRESSION_YAY0;
        }
        if (src[2] == 'z') {
            return COMPRESSION_YAZ0;
        }
    }
    if ((src[0] == 'A') && (src[1] == 'S') && (src[2] == 'R')) {
        return COMPRESSION_ASR;
    }
    return COMPRESSION_NONE;
}

/* 802DBD70-802DBDC0 2D66B0 0050+00 1/1 0/0 0/0 .text            __ct__16JKRDecompCommandFv */
JKRDecompCommand::JKRDecompCommand() {
    OSInitMessageQueue(&mMessageQueue, &mMessage, 1);
    mCallback = NULL;
    field_0x1c = NULL;
    mThis = this;
    field_0x20 = 0;
}

/* 802DBDC0-802DBDFC 2D6700 003C+00 1/1 0/0 0/0 .text            __dt__16JKRDecompCommandFv */
JKRDecompCommand::~JKRDecompCommand() {}
