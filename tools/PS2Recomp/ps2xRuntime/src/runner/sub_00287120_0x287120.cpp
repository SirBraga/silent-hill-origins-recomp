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

// Function: sub_00287120
// Address: 0x287120 - 0x287138
void sub_00287120_0x287120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00287120_0x287120");
#endif

    ctx->pc = 0x287120u;

    // 0x287120: 0x8f838fac  lw          $v1, -0x7054($gp)
    ctx->pc = 0x287120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938540)));
    // 0x287124: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x287124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x287128: 0xaf838fac  sw          $v1, -0x7054($gp)
    ctx->pc = 0x287128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938540), GPR_U32(ctx, 3));
    // 0x28712c: 0x3e00008  jr          $ra
    ctx->pc = 0x28712Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x287130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28712Cu;
        // 0x287130: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28712Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x287134u;
    // 0x287134: 0x0  nop
    ctx->pc = 0x287134u;
    // NOP
    ctx->pc = 0x287138u;
}
