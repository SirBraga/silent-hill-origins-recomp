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

// Function: sub_0017F7B0
// Address: 0x17f7b0 - 0x17f7c0
void sub_0017F7B0_0x17f7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F7B0_0x17f7b0");
#endif

    ctx->pc = 0x17f7b0u;

    // 0x17f7b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f7b4: 0x3e00008  jr          $ra
    ctx->pc = 0x17F7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F7B4u;
        // 0x17f7b8: 0xac44898c  sw          $a0, -0x7674($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294936972), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F7B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F7BCu;
    // 0x17f7bc: 0x0  nop
    ctx->pc = 0x17f7bcu;
    // NOP
    ctx->pc = 0x17f7c0u;
}
