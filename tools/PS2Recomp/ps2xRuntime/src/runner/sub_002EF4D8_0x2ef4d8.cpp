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

// Function: sub_002EF4D8
// Address: 0x2ef4d8 - 0x2ef4e8
void sub_002EF4D8_0x2ef4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF4D8_0x2ef4d8");
#endif

    ctx->pc = 0x2ef4d8u;

    // 0x2ef4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF4D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D8u;
        // 0x2ef4dc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF4E0u;
    // 0x2ef4e0: 0xaf85c014  sw          $a1, -0x3FEC($gp)
    ctx->pc = 0x2ef4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950932), GPR_U32(ctx, 5));
    // 0x2ef4e4: 0x0  nop
    ctx->pc = 0x2ef4e4u;
    // NOP
    ctx->pc = 0x2ef4e8u;
}
