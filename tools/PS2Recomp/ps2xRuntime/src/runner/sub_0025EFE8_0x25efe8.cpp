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

// Function: sub_0025EFE8
// Address: 0x25efe8 - 0x25eff8
void sub_0025EFE8_0x25efe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EFE8_0x25efe8");
#endif

    ctx->pc = 0x25efe8u;

    // 0x25efe8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25efe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x25efec: 0x3e00008  jr          $ra
    ctx->pc = 0x25EFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EFECu;
        // 0x25eff0: 0x244212d0  addiu       $v0, $v0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4816));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EFF4u;
    // 0x25eff4: 0x0  nop
    ctx->pc = 0x25eff4u;
    // NOP
    ctx->pc = 0x25eff8u;
}
