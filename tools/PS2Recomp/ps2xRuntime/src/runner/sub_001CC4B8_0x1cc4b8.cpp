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

// Function: sub_001CC4B8
// Address: 0x1cc4b8 - 0x1cc4c0
void sub_001CC4B8_0x1cc4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CC4B8_0x1cc4b8");
#endif

    ctx->pc = 0x1cc4b8u;

    // 0x1cc4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CC4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CC4B8u;
        // 0x1cc4bc: 0xac850264  sw          $a1, 0x264($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CC4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CC4C0u;
}
