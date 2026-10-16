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

// Function: sub_0015E0D0
// Address: 0x15e0d0 - 0x15e0f8
void sub_0015E0D0_0x15e0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015E0D0_0x15e0d0");
#endif

    ctx->pc = 0x15e0d0u;

    // 0x15e0d0: 0x8ca20044  lw          $v0, 0x44($a1)
    ctx->pc = 0x15e0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x15e0d4: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15E0D4u;
    {
        const bool branch_taken_0x15e0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x15e0d4) {
            ctx->pc = 0x15E0ECu;
            goto label_15e0ec;
        }
    }
    ctx->pc = 0x15E0DCu;
    // 0x15e0dc: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x15e0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x15e0e0: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x15e0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x15e0e4: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x15e0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
    // 0x15e0e8: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x15e0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
label_15e0ec:
    // 0x15e0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x15E0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15E0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15E0F4u;
    // 0x15e0f4: 0x0  nop
    ctx->pc = 0x15e0f4u;
    // NOP
    ctx->pc = 0x15e0f8u;
}
