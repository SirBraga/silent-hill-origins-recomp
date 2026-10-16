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

// Function: sub_00171C58
// Address: 0x171c58 - 0x171c80
void sub_00171C58_0x171c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171C58_0x171c58");
#endif

    switch (ctx->pc) {
        case 0x171c74u: goto label_171c74;
        default: break;
    }

    ctx->pc = 0x171c58u;

    // 0x171c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c5c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x171c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x171c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x171c64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c68: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x171c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x171c6c: 0xc05c73a  jal         func_171CE8
    ctx->pc = 0x171C6Cu;
    SET_GPR_U32(ctx, 31, 0x171C74u);
    ctx->pc = 0x171C70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C6Cu;
    // 0x171c70: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x171CE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x171CE8u, 0x171C6Cu, 0x171C74u)) {
        return;
    }
    ctx->pc = 0x171C74u;
label_171c74:
    // 0x171c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c78: 0x3e00008  jr          $ra
    ctx->pc = 0x171C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C78u;
        // 0x171c7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C80u;
}
