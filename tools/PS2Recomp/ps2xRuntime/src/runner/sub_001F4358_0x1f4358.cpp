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

// Function: sub_001F4358
// Address: 0x1f4358 - 0x1f4388
void sub_001F4358_0x1f4358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4358_0x1f4358");
#endif

    ctx->pc = 0x1f4358u;

    // 0x1f4358: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4358u;
    {
        const bool branch_taken_0x1f4358 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4358u;
        // 0x1f435c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4358) {
            ctx->pc = 0x1F4378u;
            goto label_1f4378;
        }
    }
    ctx->pc = 0x1F4360u;
    // 0x1f4360: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x1f4360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1f4364: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F4364u;
    {
        const bool branch_taken_0x1f4364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f4364) {
            ctx->pc = 0x1F4368u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F4364u;
            // 0x1f4368: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F437Cu;
            goto label_1f437c;
        }
    }
    ctx->pc = 0x1F436Cu;
    // 0x1f436c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1f436cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1f4370: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1f4370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1f4374: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x1f4374u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f4378:
    // 0x1f4378: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f4378u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1f437c:
    // 0x1f437c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f437cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1f4380: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4380u;
        // 0x1f4384: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4388u;
}
