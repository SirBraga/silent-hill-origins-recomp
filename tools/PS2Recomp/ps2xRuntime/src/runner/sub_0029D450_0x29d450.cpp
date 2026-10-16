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

// Function: sub_0029D450
// Address: 0x29d450 - 0x29d488
void sub_0029D450_0x29d450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029D450_0x29d450");
#endif

    switch (ctx->pc) {
        case 0x29d460u: goto label_29d460;
        default: break;
    }

    ctx->pc = 0x29d450u;

    // 0x29d450: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29d450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29d454: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x29d454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x29d458: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x29D458u;
    {
        const bool branch_taken_0x29d458 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D458u;
        // 0x29d45c: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d458) {
            ctx->pc = 0x29D480u;
            goto label_29d480;
        }
    }
    ctx->pc = 0x29D460u;
label_29d460:
    // 0x29d460: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29D460u;
    {
        const bool branch_taken_0x29d460 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29d460) {
            ctx->pc = 0x29D464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D460u;
            // 0x29d464: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29D474u;
            goto label_29d474;
        }
    }
    ctx->pc = 0x29D468u;
    // 0x29d468: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x29d468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x29d46c: 0x3e00008  jr          $ra
    ctx->pc = 0x29D46Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D46Cu;
        // 0x29d470: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D46Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D474u;
label_29d474:
    // 0x29d474: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x29d474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x29d478: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x29D478u;
    {
        const bool branch_taken_0x29d478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29D47Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D478u;
        // 0x29d47c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d478) {
            ctx->pc = 0x29D460u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29d460;
        }
    }
    ctx->pc = 0x29D480u;
label_29d480:
    // 0x29d480: 0x3e00008  jr          $ra
    ctx->pc = 0x29D480u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D480u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29D488u;
}
