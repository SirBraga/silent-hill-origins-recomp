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

// Function: sub_001E48B8
// Address: 0x1e48b8 - 0x1e48c8
void sub_001E48B8_0x1e48b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E48B8_0x1e48b8");
#endif

    ctx->pc = 0x1e48b8u;

    // 0x1e48b8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1e48b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1e48bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E48BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E48BCu;
        // 0x1e48c0: 0xac44e72c  sw          $a0, -0x18D4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960940), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E48BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E48C4u;
    // 0x1e48c4: 0x0  nop
    ctx->pc = 0x1e48c4u;
    // NOP
    ctx->pc = 0x1e48c8u;
}
