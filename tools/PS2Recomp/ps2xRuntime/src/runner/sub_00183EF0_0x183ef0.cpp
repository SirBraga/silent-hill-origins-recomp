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

// Function: sub_00183EF0
// Address: 0x183ef0 - 0x183f00
void sub_00183EF0_0x183ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183EF0_0x183ef0");
#endif

    ctx->pc = 0x183ef0u;

    // 0x183ef0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x183ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x183ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x183EF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183EF4u;
        // 0x183ef8: 0xac82009c  sw          $v0, 0x9C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183EF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183EFCu;
    // 0x183efc: 0x0  nop
    ctx->pc = 0x183efcu;
    // NOP
    ctx->pc = 0x183f00u;
}
