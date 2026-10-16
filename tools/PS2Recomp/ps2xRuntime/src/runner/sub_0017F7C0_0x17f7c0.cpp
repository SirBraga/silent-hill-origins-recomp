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

// Function: sub_0017F7C0
// Address: 0x17f7c0 - 0x17f7d0
void sub_0017F7C0_0x17f7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F7C0_0x17f7c0");
#endif

    ctx->pc = 0x17f7c0u;

    // 0x17f7c0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7C4u;
        // 0x17f7c8: 0xac448990  sw          $a0, -0x7670($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936976), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F7CCu;
    // 0x17f7cc: 0x0  nop
    ctx->pc = 0x17f7ccu;
    // NOP
    ctx->pc = 0x17f7d0u;
}
