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

// Function: sub_001FB838
// Address: 0x1fb838 - 0x1fb858
void sub_001FB838_0x1fb838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB838_0x1fb838");
#endif

    ctx->pc = 0x1fb838u;

    // 0x1fb838: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB838u;
    {
        const bool branch_taken_0x1fb838 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB838u;
        // 0x1fb83c: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb838) {
            ctx->pc = 0x1FB84Cu;
            goto label_1fb84c;
        }
    }
    ctx->pc = 0x1FB840u;
    // 0x1fb840: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb840u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb844: 0x24422fe8  addiu       $v0, $v0, 0x2FE8
    ctx->pc = 0x1fb844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12264));
    // 0x1fb848: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb848u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb84c:
    // 0x1fb84c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB84Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB84Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB854u;
    // 0x1fb854: 0x0  nop
    ctx->pc = 0x1fb854u;
    // NOP
    ctx->pc = 0x1fb858u;
}
