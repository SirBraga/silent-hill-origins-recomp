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

// Function: sub_001EDF28
// Address: 0x1edf28 - 0x1edf40
void sub_001EDF28_0x1edf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDF28_0x1edf28");
#endif

    ctx->pc = 0x1edf28u;

    // 0x1edf28: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF28u;
        // 0x1edf2c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDF30u;
    // 0x1edf30: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1edf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1edf34: 0x0  nop
    ctx->pc = 0x1edf34u;
    // NOP
    // 0x1edf38: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1edf38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1edf3c: 0x0  nop
    ctx->pc = 0x1edf3cu;
    // NOP
    ctx->pc = 0x1edf40u;
}
