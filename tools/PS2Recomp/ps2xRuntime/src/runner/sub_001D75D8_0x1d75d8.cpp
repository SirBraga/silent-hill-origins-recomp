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

// Function: sub_001D75D8
// Address: 0x1d75d8 - 0x1d75f8
void sub_001D75D8_0x1d75d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D75D8_0x1d75d8");
#endif

    ctx->pc = 0x1d75d8u;

    // 0x1d75d8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d75d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1d75dc: 0x8c4385f4  lw          $v1, -0x7A0C($v0)
    ctx->pc = 0x1d75dcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3385F4u));
    // 0x1d75e0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D75E0u;
    {
        const bool branch_taken_0x1d75e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D75E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75E0u;
        // 0x1d75e4: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d75e0) {
            ctx->pc = 0x1D75ECu;
            goto label_1d75ec;
        }
    }
    ctx->pc = 0x1D75E8u;
    // 0x1d75e8: 0xac409cec  sw          $zero, -0x6314($v0)
    ctx->pc = 0x1d75e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941932), GPR_U32(ctx, 0));
label_1d75ec:
    // 0x1d75ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1D75ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D75ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D75F4u;
    // 0x1d75f4: 0x0  nop
    ctx->pc = 0x1d75f4u;
    // NOP
    ctx->pc = 0x1d75f8u;
}
