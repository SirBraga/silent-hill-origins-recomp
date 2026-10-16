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

// Function: sub_001D8890
// Address: 0x1d8890 - 0x1d88a0
void sub_001D8890_0x1d8890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8890_0x1d8890");
#endif

    ctx->pc = 0x1d8890u;

    // 0x1d8890: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d8894: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d8894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d8898: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8898u;
        // 0x1d889c: 0xac629da4  sw          $v0, -0x625C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294942116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D88A0u;
}
