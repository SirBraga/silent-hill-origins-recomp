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

// Function: sub_002DC010
// Address: 0x2dc010 - 0x2dc060
void sub_002DC010_0x2dc010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC010_0x2dc010");
#endif

    switch (ctx->pc) {
        case 0x2dc020u: goto label_2dc020;
        default: break;
    }

    ctx->pc = 0x2dc010u;

    // 0x2dc010: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2dc010u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc014: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2dc014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc018: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x2dc018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dc01c: 0x0  nop
    ctx->pc = 0x2dc01cu;
    // NOP
label_2dc020:
    // 0x2dc020: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DC020u;
    {
        const bool branch_taken_0x2dc020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DC024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC020u;
        // 0x2dc024: 0x2443ffe0  addiu       $v1, $v0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc020) {
            ctx->pc = 0x2DC030u;
            goto label_2dc030;
        }
    }
    ctx->pc = 0x2DC028u;
    // 0x2dc028: 0x5466fffd  bnel        $v1, $a2, . + 4 + (-0x3 << 2)
    ctx->pc = 0x2DC028u;
    {
        const bool branch_taken_0x2dc028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x2dc028) {
            ctx->pc = 0x2DC02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC028u;
            // 0x2dc02c: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC020u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc020;
        }
    }
    ctx->pc = 0x2DC030u;
label_2dc030:
    // 0x2dc030: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2dc030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2dc034: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2dc034u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc038: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2dc038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2dc03c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2dc03cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2dc040: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2dc040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2dc044: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x2dc044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2dc048: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2dc048u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2dc04c: 0x8cc50024  lw          $a1, 0x24($a2)
    ctx->pc = 0x2dc04cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x2dc050: 0x8cc30020  lw          $v1, 0x20($a2)
    ctx->pc = 0x2dc050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2dc054: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC054u;
        // 0x2dc058: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC05Cu;
    // 0x2dc05c: 0x0  nop
    ctx->pc = 0x2dc05cu;
    // NOP
    ctx->pc = 0x2dc060u;
}
