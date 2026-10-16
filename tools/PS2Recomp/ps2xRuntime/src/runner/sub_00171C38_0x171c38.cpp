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

// Function: sub_00171C38
// Address: 0x171c38 - 0x171c58
void sub_00171C38_0x171c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171C38_0x171c38");
#endif

    switch (ctx->pc) {
        case 0x171c4cu: goto label_171c4c;
        default: break;
    }

    ctx->pc = 0x171c38u;

    // 0x171c38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x171c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x171c3c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x171c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x171c40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x171c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x171c44: 0xc05c63a  jal         func_1718E8
    ctx->pc = 0x171C44u;
    SET_GPR_U32(ctx, 31, 0x171C4Cu);
    ctx->pc = 0x171C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x171C44u;
    // 0x171c48: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1718E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1718E8u, 0x171C44u, 0x171C4Cu)) {
        return;
    }
    ctx->pc = 0x171C4Cu;
label_171c4c:
    // 0x171c4c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x171c4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x171c50: 0x3e00008  jr          $ra
    ctx->pc = 0x171C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x171C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x171C50u;
        // 0x171c54: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x171C50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x171C58u;
}
