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

// Function: sub_001E73D0
// Address: 0x1e73d0 - 0x1e73e8
void sub_001E73D0_0x1e73d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E73D0_0x1e73d0");
#endif

    ctx->pc = 0x1e73d0u;

    // 0x1e73d0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e73d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e73d4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1e73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1e73d8: 0x8c43e770  lw          $v1, -0x1890($v0)
    ctx->pc = 0x1e73d8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E770u));
    // 0x1e73dc: 0xac40e770  sw          $zero, -0x1890($v0)
    ctx->pc = 0x1e73dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x33E770u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x33E770u, _value); } while (0);
    // 0x1e73e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E73E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E73E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E73E0u;
        // 0x1e73e4: 0xac83e768  sw          $v1, -0x1898($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E73E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E73E8u;
}
