#ifndef OSINTERRUPT_H
#define OSINTERRUPT_H

#include "dolphin/types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct OSContext OSContext;

typedef enum {
    OS_INTR_MEM_0,
    OS_INTR_MEM_1,
    OS_INTR_MEM_2,
    OS_INTR_MEM_3,
    OS_INTR_MEM_ADDRESS,
    OS_INTR_DSP_AI,
    OS_INTR_DSP_ARAM,
    OS_INTR_DSP_DSP,
    OS_INTR_AI_AI,
    OS_INTR_EXI_0_EXI,
    OS_INTR_EXI_0_TC,
    OS_INTR_EXI_0_EXT,
    OS_INTR_EXI_1_EXI,
    OS_INTR_EXI_1_TC,
    OS_INTR_EXI_1_EXT,
    OS_INTR_EXI_2_EXI,
    OS_INTR_EXI_2_TC,
    OS_INTR_PI_CP,
    OS_INTR_PI_PE_TOKEN,
    OS_INTR_PI_PE_FINISH,
    OS_INTR_PI_SI,
    OS_INTR_PI_DI,
    OS_INTR_PI_RSW,
    OS_INTR_PI_ERROR,
    OS_INTR_PI_VI,
    OS_INTR_PI_DEBUG,
    OS_INTR_PI_HSP,
    OS_INTR_PI_ACR,
    OS_INTR_28,
    OS_INTR_29,
    OS_INTR_30,
    OS_INTR_31,

    OS_INTR_MAX
} OSInterruptType;

#define OS_INTERRUPTMASK(interrupt) (0x80000000u >> (interrupt))

#define OS_INTERRUPTMASK_MEM_0 OS_INTERRUPTMASK(OS_INTR_MEM_0)
#define OS_INTERRUPTMASK_MEM_1 OS_INTERRUPTMASK(OS_INTR_MEM_1)
#define OS_INTERRUPTMASK_MEM_2 OS_INTERRUPTMASK(OS_INTR_MEM_2)
#define OS_INTERRUPTMASK_MEM_3 OS_INTERRUPTMASK(OS_INTR_MEM_3)
#define OS_INTERRUPTMASK_MEM_ADDRESS OS_INTERRUPTMASK(OS_INTR_MEM_ADDRESS)
#define OS_INTERRUPTMASK_MEM_RESET                                                                 \
    (OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 |                    \
     OS_INTERRUPTMASK_MEM_3)
#define OS_INTERRUPTMASK_MEM                                                                       \
    (OS_INTERRUPTMASK_MEM_0 | OS_INTERRUPTMASK_MEM_1 | OS_INTERRUPTMASK_MEM_2 |                    \
     OS_INTERRUPTMASK_MEM_3 | OS_INTERRUPTMASK_MEM_ADDRESS)

#define OS_INTERRUPTMASK_DSP_AI OS_INTERRUPTMASK(OS_INTR_DSP_AI)
#define OS_INTERRUPTMASK_DSP_ARAM OS_INTERRUPTMASK(OS_INTR_DSP_ARAM)
#define OS_INTERRUPTMASK_DSP_DSP OS_INTERRUPTMASK(OS_INTR_DSP_DSP)
#define OS_INTERRUPTMASK_DSP                                                                       \
    (OS_INTERRUPTMASK_DSP_AI | OS_INTERRUPTMASK_DSP_ARAM | OS_INTERRUPTMASK_DSP_DSP)

#define OS_INTERRUPTMASK_AI_AI OS_INTERRUPTMASK(OS_INTR_AI_AI)
#define OS_INTERRUPTMASK_AI (OS_INTERRUPTMASK_AI_AI)

#define OS_INTERRUPTMASK_EXI_0_EXI OS_INTERRUPTMASK(OS_INTR_EXI_0_EXI)
#define OS_INTERRUPTMASK_EXI_0_TC OS_INTERRUPTMASK(OS_INTR_EXI_0_TC)
#define OS_INTERRUPTMASK_EXI_0_EXT OS_INTERRUPTMASK(OS_INTR_EXI_0_EXT)
#define OS_INTERRUPTMASK_EXI_0                                                                     \
    (OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT)

#define OS_INTERRUPTMASK_EXI_1_EXI OS_INTERRUPTMASK(OS_INTR_EXI_1_EXI)
#define OS_INTERRUPTMASK_EXI_1_TC OS_INTERRUPTMASK(OS_INTR_EXI_1_TC)
#define OS_INTERRUPTMASK_EXI_1_EXT OS_INTERRUPTMASK(OS_INTR_EXI_1_EXT)
#define OS_INTERRUPTMASK_EXI_1                                                                     \
    (OS_INTERRUPTMASK_EXI_1_EXI | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT)

#define OS_INTERRUPTMASK_EXI_2_EXI OS_INTERRUPTMASK(OS_INTR_EXI_2_EXI)
#define OS_INTERRUPTMASK_EXI_2_TC OS_INTERRUPTMASK(OS_INTR_EXI_2_TC)
#define OS_INTERRUPTMASK_EXI_2 (OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC)
#define OS_INTERRUPTMASK_EXI                                                                       \
    (OS_INTERRUPTMASK_EXI_0_EXI | OS_INTERRUPTMASK_EXI_0_TC | OS_INTERRUPTMASK_EXI_0_EXT |         \
     OS_INTERRUPTMASK_EXI_1_EXI | OS_INTERRUPTMASK_EXI_1_TC | OS_INTERRUPTMASK_EXI_1_EXT |         \
     OS_INTERRUPTMASK_EXI_2_EXI | OS_INTERRUPTMASK_EXI_2_TC)

#define OS_INTERRUPTMASK_PI_PE_TOKEN OS_INTERRUPTMASK(OS_INTR_PI_PE_TOKEN)
#define OS_INTERRUPTMASK_PI_PE_FINISH OS_INTERRUPTMASK(OS_INTR_PI_PE_FINISH)
#define OS_INTERRUPTMASK_PI_PE (OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH)

#define OS_INTERRUPTMASK_PI_CP OS_INTERRUPTMASK(OS_INTR_PI_CP)
#define OS_INTERRUPTMASK_PI_SI OS_INTERRUPTMASK(OS_INTR_PI_SI)
#define OS_INTERRUPTMASK_PI_DI OS_INTERRUPTMASK(OS_INTR_PI_DI)
#define OS_INTERRUPTMASK_PI_RSW OS_INTERRUPTMASK(OS_INTR_PI_RSW)
#define OS_INTERRUPTMASK_PI_ERROR OS_INTERRUPTMASK(OS_INTR_PI_ERROR)
#define OS_INTERRUPTMASK_PI_VI OS_INTERRUPTMASK(OS_INTR_PI_VI)
#define OS_INTERRUPTMASK_PI_DEBUG OS_INTERRUPTMASK(OS_INTR_PI_DEBUG)
#define OS_INTERRUPTMASK_PI_HSP OS_INTERRUPTMASK(OS_INTR_PI_HSP)
#define OS_INTERRUPTMASK_PI                                                                        \
    (OS_INTERRUPTMASK_PI_CP | OS_INTERRUPTMASK_PI_SI | OS_INTERRUPTMASK_PI_DI |                    \
     OS_INTERRUPTMASK_PI_RSW | OS_INTERRUPTMASK_PI_ERROR | OS_INTERRUPTMASK_PI_VI |                \
     OS_INTERRUPTMASK_PI_PE_TOKEN | OS_INTERRUPTMASK_PI_PE_FINISH | OS_INTERRUPTMASK_PI_DEBUG |    \
     OS_INTERRUPTMASK_PI_HSP)

typedef s16 __OSInterrupt;
typedef u32 OSInterruptMask;
typedef void (*__OSInterruptHandler)(__OSInterrupt interrupt, OSContext* context);

BOOL OSDisableInterrupts(void);
void __RAS_OSDisableInterrupts_end(void);
BOOL OSEnableInterrupts(void);
BOOL OSRestoreInterrupts(BOOL enable);
__OSInterruptHandler __OSSetInterruptHandler(__OSInterrupt interrupt, __OSInterruptHandler handler);
__OSInterruptHandler __OSGetInterruptHandler(s16 index);
void __OSInterruptInit(void);
static OSInterruptMask SetInterruptMask(OSInterruptMask param_0, OSInterruptMask param_1);
OSInterruptMask __OSMaskInterrupts(OSInterruptMask mask);
OSInterruptMask __OSUnmaskInterrupts(OSInterruptMask mask);
void __OSDispatchInterrupt(u8 interrupt, OSContext* context);
static void ExternalInterruptHandler(__OSInterrupt interrupt, OSContext* context);

void __RAS_OSDisableInterrupts_begin(void);
void __RAS_OSDisableInterrupts_end(void);

#ifdef __cplusplus
};
#endif

#endif /* OSINTERRUPT_H */
