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

// Function: sub_001FB7D8
// Address: 0x1fb7d8 - 0x1fb7f8
void sub_001FB7D8_0x1fb7d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB7D8_0x1fb7d8");
#endif

    ctx->pc = 0x1fb7d8u;

    // 0x1fb7d8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB7D8u;
    {
        const bool branch_taken_0x1fb7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7D8u;
        // 0x1fb7dc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7d8) {
            ctx->pc = 0x1FB7ECu;
            goto label_1fb7ec;
        }
    }
    ctx->pc = 0x1FB7E0u;
    // 0x1fb7e0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb7e4: 0x24423018  addiu       $v0, $v0, 0x3018
    ctx->pc = 0x1fb7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12312));
    // 0x1fb7e8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb7ec:
    // 0x1fb7ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7F4u;
    // 0x1fb7f4: 0x0  nop
    ctx->pc = 0x1fb7f4u;
    // NOP
    ctx->pc = 0x1fb7f8u;
}
