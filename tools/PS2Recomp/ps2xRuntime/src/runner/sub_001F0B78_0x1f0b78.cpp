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

// Function: sub_001F0B78
// Address: 0x1f0b78 - 0x1f0b88
void sub_001F0B78_0x1f0b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F0B78_0x1f0b78");
#endif

    ctx->pc = 0x1f0b78u;

    // 0x1f0b78: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f0b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f0b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F0B7Cu;
        // 0x1f0b80: 0xac44e858  sw          $a0, -0x17A8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961240), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F0B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F0B84u;
    // 0x1f0b84: 0x0  nop
    ctx->pc = 0x1f0b84u;
    // NOP
    ctx->pc = 0x1f0b88u;
}
