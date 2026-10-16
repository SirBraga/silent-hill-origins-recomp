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

// Function: sub_001FB790
// Address: 0x1fb790 - 0x1fb7b0
void sub_001FB790_0x1fb790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB790_0x1fb790");
#endif

    ctx->pc = 0x1fb790u;

    // 0x1fb790: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1FB790u;
    {
        const bool branch_taken_0x1fb790 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB790u;
        // 0x1fb794: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb790) {
            ctx->pc = 0x1FB7A8u;
            goto label_1fb7a8;
        }
    }
    ctx->pc = 0x1FB798u;
    // 0x1fb798: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x1fb798u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x1fb79c: 0x24423048  addiu       $v0, $v0, 0x3048
    ctx->pc = 0x1fb79cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12360));
    // 0x1fb7a0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb7a4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb7a8:
    // 0x1fb7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7B0u;
}
