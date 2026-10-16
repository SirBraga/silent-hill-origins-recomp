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

// Function: sub_001F93F0
// Address: 0x1f93f0 - 0x1f9408
void sub_001F93F0_0x1f93f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F93F0_0x1f93f0");
#endif

    switch (ctx->pc) {
        case 0x1f93f0u: goto label_1f93f0;
        case 0x1f93f4u: goto label_1f93f4;
        case 0x1f93f8u: goto label_1f93f8;
        case 0x1f93fcu: goto label_1f93fc;
        case 0x1f9400u: goto label_1f9400;
        case 0x1f9404u: goto label_1f9404;
        default: break;
    }

    ctx->pc = 0x1f93f0u;

label_1f93f0:
    // 0x1f93f0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1f93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_1f93f4:
    // 0x1f93f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f93f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f93f8:
    // 0x1f93f8: 0x8c43ec50  lw          $v1, -0x13B0($v0)
    ctx->pc = 0x1f93f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
label_1f93fc:
    // 0x1f93fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f93fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f9400:
    // 0x1f9400: 0x60f809  jalr        $v1
label_1f9404:
    if (ctx->pc == 0x1F9404u) {
        ctx->pc = 0x1F9408u;
        goto label_fallthrough_0x1f9400;
    }
    ctx->pc = 0x1F9400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1F9408u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9400u, 0x1F9408u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
label_fallthrough_0x1f9400:
    ctx->pc = 0x1F9408u;
}
