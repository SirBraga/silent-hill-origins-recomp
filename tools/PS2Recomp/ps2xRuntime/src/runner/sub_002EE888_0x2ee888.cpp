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

// Function: sub_002EE888
// Address: 0x2ee888 - 0x2ee898
void sub_002EE888_0x2ee888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EE888_0x2ee888");
#endif

    ctx->pc = 0x2ee888u;

    // 0x2ee888: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ee888u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ee88c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EE88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EE88Cu;
        // 0x2ee890: 0xac450014  sw          $a1, 0x14($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EE88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EE894u;
    // 0x2ee894: 0x0  nop
    ctx->pc = 0x2ee894u;
    // NOP
    ctx->pc = 0x2ee898u;
}
