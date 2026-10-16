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

// Function: sub_00280F28
// Address: 0x280f28 - 0x280f70
void sub_00280F28_0x280f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280F28_0x280f28");
#endif

    switch (ctx->pc) {
        case 0x280f40u: goto label_280f40;
        default: break;
    }

    ctx->pc = 0x280f28u;

    // 0x280f28: 0x8f828818  lw          $v0, -0x77E8($gp)
    ctx->pc = 0x280f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936600)));
    // 0x280f2c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x280f2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x280f30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280f30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280f34: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x280f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280f38: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x280f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x280f3c: 0x51180  sll         $v0, $a1, 6
    ctx->pc = 0x280f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
label_280f40:
    // 0x280f40: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x280f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x280f44: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x280f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x280f48: 0x10660007  beq         $v1, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x280F48u;
    {
        const bool branch_taken_0x280f48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        if (branch_taken_0x280f48) {
            ctx->pc = 0x280F68u;
            goto label_280f68;
        }
    }
    ctx->pc = 0x280F50u;
    // 0x280f50: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x280f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x280f54: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x280f54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x280f58: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x280f58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x280f5c: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x280F5Cu;
    {
        const bool branch_taken_0x280f5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x280f5c) {
            ctx->pc = 0x280F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x280F5Cu;
            // 0x280f60: 0x51180  sll         $v0, $a1, 6 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x280F40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_280f40;
        }
    }
    ctx->pc = 0x280F64u;
    // 0x280f64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x280f64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_280f68:
    // 0x280f68: 0x3e00008  jr          $ra
    ctx->pc = 0x280F68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x280F68u;
        // 0x280f6c: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280F68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x280F70u;
}
