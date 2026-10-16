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

// Function: sub_00102008
// Address: 0x102008 - 0x102020
void sub_00102008_0x102008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102008_0x102008");
#endif

    ctx->pc = 0x102008u;

    // 0x102008: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x102008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10200c: 0xac8601e4  sw          $a2, 0x1E4($a0)
    ctx->pc = 0x10200cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 484), GPR_U32(ctx, 6));
    // 0x102010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x102010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x102014: 0x3e00008  jr          $ra
    ctx->pc = 0x102014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102014u;
        // 0x102018: 0xac8302a4  sw          $v1, 0x2A4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 676), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10201Cu;
    // 0x10201c: 0x0  nop
    ctx->pc = 0x10201cu;
    // NOP
    ctx->pc = 0x102020u;
}
