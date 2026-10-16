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

// Function: sub_001703F0
// Address: 0x1703f0 - 0x170410
void sub_001703F0_0x1703f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001703F0_0x1703f0");
#endif

    switch (ctx->pc) {
        case 0x170404u: goto label_170404;
        default: break;
    }

    ctx->pc = 0x1703f0u;

    // 0x1703f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1703f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1703f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1703f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1703f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1703f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1703fc: 0xc05bfca  jal         func_16FF28
    ctx->pc = 0x1703FCu;
    SET_GPR_U32(ctx, 31, 0x170404u);
    ctx->pc = 0x170400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1703FCu;
    // 0x170400: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16FF28u, 0x1703FCu, 0x170404u)) {
        return;
    }
    ctx->pc = 0x170404u;
label_170404:
    // 0x170404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x170404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170408: 0x3e00008  jr          $ra
    ctx->pc = 0x170408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17040Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x170408u;
        // 0x17040c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x170408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x170410u;
}
