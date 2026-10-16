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

// Function: sub_001A9B90
// Address: 0x1a9b90 - 0x1a9ba0
void sub_001A9B90_0x1a9b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9B90_0x1a9b90");
#endif

    ctx->pc = 0x1a9b90u;

    // 0x1a9b90: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a9b90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9b94: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9B94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9B94u;
        // 0x1a9b98: 0xac800200  sw          $zero, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9B94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9B9Cu;
    // 0x1a9b9c: 0x0  nop
    ctx->pc = 0x1a9b9cu;
    // NOP
    ctx->pc = 0x1a9ba0u;
}
