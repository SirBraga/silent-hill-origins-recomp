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

// Function: sub_001EDF58
// Address: 0x1edf58 - 0x1edf98
void sub_001EDF58_0x1edf58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDF58_0x1edf58");
#endif

    switch (ctx->pc) {
        case 0x1edf74u: goto label_1edf74;
        default: break;
    }

    ctx->pc = 0x1edf58u;

    // 0x1edf58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1edf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edf5c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1edf5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1edf60: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1edf60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1edf64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EDF64u;
    {
        const bool branch_taken_0x1edf64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF64u;
        // 0x1edf68: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf64) {
            ctx->pc = 0x1EDF7Cu;
            goto label_1edf7c;
        }
    }
    ctx->pc = 0x1EDF6Cu;
    // 0x1edf6c: 0xc07b054  jal         func_1EC150
    ctx->pc = 0x1EDF6Cu;
    SET_GPR_U32(ctx, 31, 0x1EDF74u);
    ctx->pc = 0x1EC150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC150u, 0x1EDF6Cu, 0x1EDF74u)) {
        return;
    }
    ctx->pc = 0x1EDF74u;
label_1edf74:
    // 0x1edf74: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1EDF74u;
    {
        const bool branch_taken_0x1edf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EDF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF74u;
        // 0x1edf78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edf74) {
            ctx->pc = 0x1EDF88u;
            goto label_1edf88;
        }
    }
    ctx->pc = 0x1EDF7Cu;
label_1edf7c:
    // 0x1edf7c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1edf7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1edf80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1edf80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1edf84: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1edf84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1edf88:
    // 0x1edf88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1edf88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1edf8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF8Cu;
        // 0x1edf90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDF94u;
    // 0x1edf94: 0x0  nop
    ctx->pc = 0x1edf94u;
    // NOP
    ctx->pc = 0x1edf98u;
}
