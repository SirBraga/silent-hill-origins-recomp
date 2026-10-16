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

// Function: sub_0024F1B0
// Address: 0x24f1b0 - 0x24f1e8
void sub_0024F1B0_0x24f1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024F1B0_0x24f1b0");
#endif

    switch (ctx->pc) {
        case 0x24f1c0u: goto label_24f1c0;
        default: break;
    }

    ctx->pc = 0x24f1b0u;

    // 0x24f1b0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x24f1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x24f1b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24f1b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24f1b8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x24f1b8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x24f1bc: 0x0  nop
    ctx->pc = 0x24f1bcu;
    // NOP
label_24f1c0:
    // 0x24f1c0: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x24f1c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x24f1c4: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x24F1C4u;
    {
        const bool branch_taken_0x24f1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x24f1c4) {
            ctx->pc = 0x24F1D4u;
            goto label_24f1d4;
        }
    }
    ctx->pc = 0x24F1CCu;
    // 0x24f1cc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24F1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1CCu;
        // 0x24f1d0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F1D4u;
label_24f1d4:
    // 0x24f1d4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x24F1D4u;
    {
        const bool branch_taken_0x24f1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x24F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24F1D4u;
        // 0x24f1d8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24f1d4) {
            ctx->pc = 0x24F1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_24f1c0;
        }
    }
    ctx->pc = 0x24F1DCu;
    // 0x24f1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x24F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24F1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24F1E4u;
    // 0x24f1e4: 0x0  nop
    ctx->pc = 0x24f1e4u;
    // NOP
    ctx->pc = 0x24f1e8u;
}
