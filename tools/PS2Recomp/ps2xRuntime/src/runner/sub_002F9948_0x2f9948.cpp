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

// Function: sub_002F9948
// Address: 0x2f9948 - 0x2f9960
void sub_002F9948_0x2f9948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9948_0x2f9948");
#endif

    ctx->pc = 0x2f9948u;

    // 0x2f9948: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2f9948u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2f994c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F994Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F994Cu;
        // 0x2f9950: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F994Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F9954u;
    // 0x2f9954: 0x0  nop
    ctx->pc = 0x2f9954u;
    // NOP
    // 0x2f9958: 0xac4600ac  sw          $a2, 0xAC($v0)
    ctx->pc = 0x2f9958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 6));
    // 0x2f995c: 0x0  nop
    ctx->pc = 0x2f995cu;
    // NOP
    ctx->pc = 0x2f9960u;
}
