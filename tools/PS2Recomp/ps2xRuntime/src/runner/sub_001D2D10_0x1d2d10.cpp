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

// Function: sub_001D2D10
// Address: 0x1d2d10 - 0x1d2d28
void sub_001D2D10_0x1d2d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2D10_0x1d2d10");
#endif

    ctx->pc = 0x1d2d10u;

    // 0x1d2d10: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d2d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2d18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2D18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2D18u;
        // 0x1d2d1c: 0xac629b60  sw          $v0, -0x64A0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294941536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2D18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2D20u;
    // 0x1d2d20: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1d2d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1d2d24: 0x0  nop
    ctx->pc = 0x1d2d24u;
    // NOP
    ctx->pc = 0x1d2d28u;
}
