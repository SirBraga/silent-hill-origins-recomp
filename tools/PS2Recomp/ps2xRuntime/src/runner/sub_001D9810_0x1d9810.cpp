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

// Function: sub_001D9810
// Address: 0x1d9810 - 0x1d9860
void sub_001D9810_0x1d9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9810_0x1d9810");
#endif

    switch (ctx->pc) {
        case 0x1d9830u: goto label_1d9830;
        case 0x1d9840u: goto label_1d9840;
        default: break;
    }

    ctx->pc = 0x1d9810u;

    // 0x1d9810: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9810u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d9814: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d9818: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1d9818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1d981c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1d981cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1d9820: 0x24508a68  addiu       $s0, $v0, -0x7598
    ctx->pc = 0x1d9820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937192));
    // 0x1d9824: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9828: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d9828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d982c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6F8A68u));
label_1d9830:
    // 0x1d9830: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d9830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9834: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d9834u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1d9838: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x1D9838u;
    SET_GPR_U32(ctx, 31, 0x1D9840u);
    ctx->pc = 0x1D983Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D9838u;
    // 0x1d983c: 0x26100008  addiu       $s0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x1D9838u, 0x1D9840u)) {
        return;
    }
    ctx->pc = 0x1D9840u;
label_1d9840:
    // 0x1d9840: 0x2e220040  sltiu       $v0, $s1, 0x40
    ctx->pc = 0x1d9840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x1d9844: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1D9844u;
    {
        const bool branch_taken_0x1d9844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9844) {
            ctx->pc = 0x1D9848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9844u;
            // 0x1d9848: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9830u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9830;
        }
    }
    ctx->pc = 0x1D984Cu;
    // 0x1d984c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1d984cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d9850: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d9850u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d9854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d9858: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D985Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9858u;
        // 0x1d985c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9860u;
}
