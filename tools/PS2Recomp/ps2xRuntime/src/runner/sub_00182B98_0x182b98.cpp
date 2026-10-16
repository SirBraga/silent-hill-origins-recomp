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

// Function: sub_00182B98
// Address: 0x182b98 - 0x182ba8
void sub_00182B98_0x182b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182B98_0x182b98");
#endif

    ctx->pc = 0x182b98u;

    // 0x182b98: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x182b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x182b9c: 0x3e00008  jr          $ra
    ctx->pc = 0x182B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x182B9Cu;
        // 0x182ba0: 0xac448a10  sw          $a0, -0x75F0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294937104), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182B9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182BA4u;
    // 0x182ba4: 0x0  nop
    ctx->pc = 0x182ba4u;
    // NOP
    ctx->pc = 0x182ba8u;
}
