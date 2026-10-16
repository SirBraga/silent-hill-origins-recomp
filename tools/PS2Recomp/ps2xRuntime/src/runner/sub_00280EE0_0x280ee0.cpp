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

// Function: sub_00280EE0
// Address: 0x280ee0 - 0x280f28
void sub_00280EE0_0x280ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280EE0_0x280ee0");
#endif

    switch (ctx->pc) {
        case 0x280ef8u: goto label_280ef8;
        default: break;
    }

    ctx->pc = 0x280ee0u;

    // 0x280ee0: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280ee4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280ee8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280eec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280eecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280ef0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280ef4: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280ef8:
    // 0x280ef8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280efc: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280f00: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x280F00u;
    {
        const bool branch_taken_0x280f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280f00) {
            ctx->pc = 0x280F20u;
            goto label_280f20;
        }
    }
    ctx->pc = 0x280F08u;
    // 0x280f08: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280f0c: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280f0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280f10: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280f10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280f14: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280F14u;
    {
        const bool branch_taken_0x280f14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f14) {
            ctx->pc = 0x280F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F14u;
            // 0x280f18: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280ef8;
        }
    }
    ctx->pc = 0x280F1Cu;
    // 0x280f1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280f20:
    // 0x280f20: 0x3e00008  jr          $ra
    ctx->pc = 0x280F20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F20u;
        // 0x280f24: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F28u;
}
