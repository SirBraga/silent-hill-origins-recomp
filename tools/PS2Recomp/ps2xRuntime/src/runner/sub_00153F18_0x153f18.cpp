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

// Function: sub_00153F18
// Address: 0x153f18 - 0x153f28
void sub_00153F18_0x153f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F18_0x153f18");
#endif

    ctx->pc = 0x153f18u;

    // 0x153f18: 0xac8600c8  sw          $a2, 0xC8($a0)
    ctx->pc = 0x153f18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 200), GPR_U32(ctx, 6));
    // 0x153f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x153F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F1Cu;
        // 0x153f20: 0xac8500c4  sw          $a1, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F24u;
    // 0x153f24: 0x0  nop
    ctx->pc = 0x153f24u;
    // NOP
    ctx->pc = 0x153f28u;
}
