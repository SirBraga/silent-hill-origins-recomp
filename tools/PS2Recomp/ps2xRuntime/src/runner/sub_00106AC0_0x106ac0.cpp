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

// Function: sub_00106AC0
// Address: 0x106ac0 - 0x106ad0
void sub_00106AC0_0x106ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106AC0_0x106ac0");
#endif

    ctx->pc = 0x106ac0u;

    // 0x106ac0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x106ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x106ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x106AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106AC4u;
        // 0x106ac8: 0xac8204b8  sw          $v0, 0x4B8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106AC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106ACCu;
    // 0x106acc: 0x0  nop
    ctx->pc = 0x106accu;
    // NOP
    ctx->pc = 0x106ad0u;
}
