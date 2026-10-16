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

// Function: sub_0021B1B0
// Address: 0x21b1b0 - 0x21b1e0
void sub_0021B1B0_0x21b1b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B1B0_0x21b1b0");
#endif

    switch (ctx->pc) {
        case 0x21b1c0u: goto label_21b1c0;
        default: break;
    }

    ctx->pc = 0x21b1b0u;

    // 0x21b1b0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b1b4: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21B1B4u;
    {
        const bool branch_taken_0x21b1b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x21B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1B4u;
        // 0x21b1b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1b4) {
            ctx->pc = 0x21B1D8u;
            goto label_21b1d8;
        }
    }
    ctx->pc = 0x21B1BCu;
    // 0x21b1bc: 0x0  nop
    ctx->pc = 0x21b1bcu;
    // NOP
label_21b1c0:
    // 0x21b1c0: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x21b1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21b1c4: 0x0  nop
    ctx->pc = 0x21b1c4u;
    // NOP
    // 0x21b1c8: 0x0  nop
    ctx->pc = 0x21b1c8u;
    // NOP
    // 0x21b1cc: 0x0  nop
    ctx->pc = 0x21b1ccu;
    // NOP
    // 0x21b1d0: 0x1480fffb  bnez        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21B1D0u;
    {
        const bool branch_taken_0x21b1d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x21B1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B1D0u;
        // 0x21b1d4: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21b1d0) {
            ctx->pc = 0x21B1C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21b1c0;
        }
    }
    ctx->pc = 0x21B1D8u;
label_21b1d8:
    // 0x21b1d8: 0x3e00008  jr          $ra
    ctx->pc = 0x21B1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B1E0u;
}
