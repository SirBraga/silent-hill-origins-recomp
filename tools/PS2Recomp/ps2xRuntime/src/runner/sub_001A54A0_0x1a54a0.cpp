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

// Function: sub_001A54A0
// Address: 0x1a54a0 - 0x1a54b8
void sub_001A54A0_0x1a54a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A54A0_0x1a54a0");
#endif

    ctx->pc = 0x1a54a0u;

    // 0x1a54a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1a54a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1a54a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x1a54a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x1a54a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A54A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A54ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A54A8u;
        // 0x1a54ac: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A54A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A54B0u;
    // 0x1a54b0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x1a54b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a54b4: 0x0  nop
    ctx->pc = 0x1a54b4u;
    // NOP
    ctx->pc = 0x1a54b8u;
}
