#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9438
// Address: 0x1f9438 - 0x1f9450
void sub_001F9438_0x1f9438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9438_0x1f9438");
#endif

    switch (ctx->pc) {
        case 0x1f9438u: goto label_1f9438;
        case 0x1f943cu: goto label_1f943c;
        case 0x1f9440u: goto label_1f9440;
        case 0x1f9444u: goto label_1f9444;
        case 0x1f9448u: goto label_1f9448;
        case 0x1f944cu: goto label_1f944c;
        default: break;
    }

    ctx->pc = 0x1f9438u;

label_1f9438:
    // 0x1f9438: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1f9438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_1f943c:
    // 0x1f943c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f943cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f9440:
    // 0x1f9440: 0x8c43f248  lw          $v1, -0xDB8($v0)
    ctx->pc = 0x1f9440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963784)));
label_1f9444:
    // 0x1f9444: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f9444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9448:
    // 0x1f9448: 0x60f809  jalr        $v1
label_1f944c:
    if (ctx->pc == 0x1F944Cu) {
        ctx->pc = 0x1F9450u;
        goto label_fallthrough_0x1f9448;
    }
    ctx->pc = 0x1F9448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9450u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9448u, 0x1F9450u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1f9448:
    ctx->pc = 0x1F9450u;
}
