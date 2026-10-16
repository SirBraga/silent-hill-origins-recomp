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

// Function: sub_002A9C70
// Address: 0x2a9c70 - 0x2a9c80
void sub_002A9C70_0x2a9c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9C70_0x2a9c70");
#endif

    ctx->pc = 0x2a9c70u;

    // 0x2a9c70: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9C70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9C70u;
        // 0x2a9c74: 0xa485005a  sh          $a1, 0x5A($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9C70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A9C78u;
    // 0x2a9c78: 0x24420058  addiu       $v0, $v0, 0x58
    ctx->pc = 0x2a9c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    // 0x2a9c7c: 0x0  nop
    ctx->pc = 0x2a9c7cu;
    // NOP
    ctx->pc = 0x2a9c80u;
}
