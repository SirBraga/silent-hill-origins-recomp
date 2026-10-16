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

// Function: sub_001DCFD0
// Address: 0x1dcfd0 - 0x1dcfe0
void sub_001DCFD0_0x1dcfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DCFD0_0x1dcfd0");
#endif

    ctx->pc = 0x1dcfd0u;

    // 0x1dcfd0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dcfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dcfd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DCFD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DCFD4u;
        // 0x1dcfd8: 0xac40e668  sw          $zero, -0x1998($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DCFD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DCFDCu;
    // 0x1dcfdc: 0x0  nop
    ctx->pc = 0x1dcfdcu;
    // NOP
    ctx->pc = 0x1dcfe0u;
}
