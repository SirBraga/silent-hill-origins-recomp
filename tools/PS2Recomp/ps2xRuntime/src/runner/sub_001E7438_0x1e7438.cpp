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

// Function: sub_001E7438
// Address: 0x1e7438 - 0x1e7458
void sub_001E7438_0x1e7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E7438_0x1e7438");
#endif

    ctx->pc = 0x1e7438u;

    // 0x1e7438: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1e7438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1e743c: 0x8cc3e76c  lw          $v1, -0x1894($a2)
    ctx->pc = 0x1e743cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E76Cu));
    // 0x1e7440: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1e7440u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1e7444: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1e7444u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1e7448: 0x8cc2e76c  lw          $v0, -0x1894($a2)
    ctx->pc = 0x1e7448u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E76Cu));
    // 0x1e744c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1e744cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1e7450: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7450u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7450u;
        // 0x1e7454: 0xacc2e76c  sw          $v0, -0x1894($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294961004), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7450u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E7458u;
}
