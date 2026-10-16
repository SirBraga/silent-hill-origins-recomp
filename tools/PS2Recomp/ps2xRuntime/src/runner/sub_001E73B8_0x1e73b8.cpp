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

// Function: sub_001E73B8
// Address: 0x1e73b8 - 0x1e73d0
void sub_001E73B8_0x1e73b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E73B8_0x1e73b8");
#endif

    ctx->pc = 0x1e73b8u;

    // 0x1e73b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e73b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e73bc: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1e73bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x1e73c0: 0x8c43e768  lw          $v1, -0x1898($v0)
    ctx->pc = 0x1e73c0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E768u));
    // 0x1e73c4: 0xac44e768  sw          $a0, -0x1898($v0)
    ctx->pc = 0x1e73c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x33E768u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E768u, _value); } while (0);
    // 0x1e73c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73C8u;
        // 0x1e73cc: 0xaca3e770  sw          $v1, -0x1890($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4294961008), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73D0u;
}
