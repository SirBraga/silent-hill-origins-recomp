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

// Function: sub_001BDF10
// Address: 0x1bdf10 - 0x1bdf28
void sub_001BDF10_0x1bdf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BDF10_0x1bdf10");
#endif

    ctx->pc = 0x1bdf10u;

    // 0x1bdf10: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bdf10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bdf14: 0xac85029c  sw          $a1, 0x29C($a0)
    ctx->pc = 0x1bdf14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 668), GPR_U32(ctx, 5));
    // 0x1bdf18: 0xac820298  sw          $v0, 0x298($a0)
    ctx->pc = 0x1bdf18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 664), GPR_U32(ctx, 2));
    // 0x1bdf1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BDF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BDF1Cu;
        // 0x1bdf20: 0xac8002a0  sw          $zero, 0x2A0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BDF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BDF24u;
    // 0x1bdf24: 0x0  nop
    ctx->pc = 0x1bdf24u;
    // NOP
    ctx->pc = 0x1bdf28u;
}
