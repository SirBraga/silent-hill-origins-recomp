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

// Function: sub_001A8BE0
// Address: 0x1a8be0 - 0x1a8c00
void sub_001A8BE0_0x1a8be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8BE0_0x1a8be0");
#endif

    ctx->pc = 0x1a8be0u;

    // 0x1a8be0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a8be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a8be4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8BE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8BE4u;
        // 0x1a8be8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8BE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8BECu;
    // 0x1a8bec: 0x0  nop
    ctx->pc = 0x1a8becu;
    // NOP
    // 0x1a8bf0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1a8bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a8bf4: 0x0  nop
    ctx->pc = 0x1a8bf4u;
    // NOP
    // 0x1a8bf8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1a8bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a8bfc: 0x0  nop
    ctx->pc = 0x1a8bfcu;
    // NOP
    ctx->pc = 0x1a8c00u;
}
