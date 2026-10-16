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

// Function: sub_002ABA10
// Address: 0x2aba10 - 0x2aba38
void sub_002ABA10_0x2aba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ABA10_0x2aba10");
#endif

    ctx->pc = 0x2aba10u;

    // 0x2aba10: 0x8f8389d0  lw          $v1, -0x7630($gp)
    ctx->pc = 0x2aba10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937040)));
    // 0x2aba14: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2aba18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ABA18u;
    {
        const bool branch_taken_0x2aba18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2ABA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA18u;
        // 0x2aba1c: 0x831821  addu        $v1, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aba18) {
            ctx->pc = 0x2ABA28u;
            goto label_2aba28;
        }
    }
    ctx->pc = 0x2ABA20u;
    // 0x2aba20: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA20u;
        // 0x2aba24: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA28u;
label_2aba28:
    // 0x2aba28: 0x3e00008  jr          $ra
    ctx->pc = 0x2ABA28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ABA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ABA28u;
        // 0x2aba2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ABA28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ABA30u;
    // 0x2aba30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2aba30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2aba34: 0x0  nop
    ctx->pc = 0x2aba34u;
    // NOP
    ctx->pc = 0x2aba38u;
}
