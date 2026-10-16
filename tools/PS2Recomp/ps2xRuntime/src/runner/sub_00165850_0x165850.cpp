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

// Function: sub_00165850
// Address: 0x165850 - 0x165870
void sub_00165850_0x165850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00165850_0x165850");
#endif

    ctx->pc = 0x165850u;

    // 0x165850: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x165850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x165854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x165854u;
    {
        const bool branch_taken_0x165854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x165858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x165854u;
        // 0x165858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x165854) {
            ctx->pc = 0x165864u;
            goto label_165864;
        }
    }
    ctx->pc = 0x16585Cu;
    // 0x16585c: 0x3e00008  jr          $ra
    ctx->pc = 0x16585Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x165860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16585Cu;
        // 0x165860: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16585Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x165864u;
label_165864:
    // 0x165864: 0x3e00008  jr          $ra
    ctx->pc = 0x165864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x165864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16586Cu;
    // 0x16586c: 0x0  nop
    ctx->pc = 0x16586cu;
    // NOP
    ctx->pc = 0x165870u;
}
