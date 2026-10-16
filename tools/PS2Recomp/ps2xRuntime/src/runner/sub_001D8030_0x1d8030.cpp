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

// Function: sub_001D8030
// Address: 0x1d8030 - 0x1d8048
void sub_001D8030_0x1d8030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8030_0x1d8030");
#endif

    ctx->pc = 0x1d8030u;

    // 0x1d8030: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d8030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d8034: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8034u;
        // 0x1d8038: 0x24428948  addiu       $v0, $v0, -0x76B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936904));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D803Cu;
    // 0x1d803c: 0x0  nop
    ctx->pc = 0x1d803cu;
    // NOP
    // 0x1d8040: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1d8040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d8044: 0x0  nop
    ctx->pc = 0x1d8044u;
    // NOP
    ctx->pc = 0x1d8048u;
}
