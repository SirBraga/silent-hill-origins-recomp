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

// Function: sub_001B5070
// Address: 0x1b5070 - 0x1b5080
void sub_001B5070_0x1b5070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B5070_0x1b5070");
#endif

    ctx->pc = 0x1b5070u;

    // 0x1b5070: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b5070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1b5074: 0x3e00008  jr          $ra
    ctx->pc = 0x1B5074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B5078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B5074u;
        // 0x1b5078: 0xc4409244  lwc1        $f0, -0x6DBC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294939204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B5074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B507Cu;
    // 0x1b507c: 0x0  nop
    ctx->pc = 0x1b507cu;
    // NOP
    ctx->pc = 0x1b5080u;
}
