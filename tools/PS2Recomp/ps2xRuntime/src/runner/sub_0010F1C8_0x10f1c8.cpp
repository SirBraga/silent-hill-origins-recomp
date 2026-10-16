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

// Function: sub_0010F1C8
// Address: 0x10f1c8 - 0x10f1f0
void sub_0010F1C8_0x10f1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F1C8_0x10f1c8");
#endif

    ctx->pc = 0x10f1c8u;

    // 0x10f1c8: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x10F1C8u;
    {
        const bool branch_taken_0x10f1c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10f1c8) {
            ctx->pc = 0x10F1E4u;
            goto label_10f1e4;
        }
    }
    ctx->pc = 0x10F1D0u;
    // 0x10f1d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x10f1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x10f1d4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F1D4u;
    {
        const bool branch_taken_0x10f1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10F1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1D4u;
        // 0x10f1d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f1d4) {
            ctx->pc = 0x10F1E4u;
            goto label_10f1e4;
        }
    }
    ctx->pc = 0x10F1DCu;
    // 0x10f1dc: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1DCu;
        // 0x10f1e0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1E4u;
label_10f1e4:
    // 0x10f1e4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F1E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F1E4u;
        // 0x10f1e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F1E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F1ECu;
    // 0x10f1ec: 0x0  nop
    ctx->pc = 0x10f1ecu;
    // NOP
    ctx->pc = 0x10f1f0u;
}
