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

// Function: sub_00274998
// Address: 0x274998 - 0x2749a8
void sub_00274998_0x274998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274998_0x274998");
#endif

    ctx->pc = 0x274998u;

    // 0x274998: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x274998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x27499c: 0x3e00008  jr          $ra
    ctx->pc = 0x27499Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2749A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27499Cu;
        // 0x2749a0: 0x24423818  addiu       $v0, $v0, 0x3818 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14360));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27499Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2749A4u;
    // 0x2749a4: 0x0  nop
    ctx->pc = 0x2749a4u;
    // NOP
    ctx->pc = 0x2749a8u;
}
