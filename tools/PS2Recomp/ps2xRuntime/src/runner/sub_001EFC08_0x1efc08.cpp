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

// Function: sub_001EFC08
// Address: 0x1efc08 - 0x1efc20
void sub_001EFC08_0x1efc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EFC08_0x1efc08");
#endif

    ctx->pc = 0x1efc08u;

    // 0x1efc08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1efc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1efc0c: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1efc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x1efc10: 0xac82004c  sw          $v0, 0x4C($a0)
    ctx->pc = 0x1efc10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 2));
    // 0x1efc14: 0x3e00008  jr          $ra
    ctx->pc = 0x1EFC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EFC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EFC14u;
        // 0x1efc18: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EFC14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EFC1Cu;
    // 0x1efc1c: 0x0  nop
    ctx->pc = 0x1efc1cu;
    // NOP
    ctx->pc = 0x1efc20u;
}
