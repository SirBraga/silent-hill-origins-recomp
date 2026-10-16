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

// Function: sub_001A0610
// Address: 0x1a0610 - 0x1a0630
void sub_001A0610_0x1a0610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0610_0x1a0610");
#endif

    ctx->pc = 0x1a0610u;

    // 0x1a0610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0614: 0x50a20001  beql        $a1, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0614u;
    {
        const bool branch_taken_0x1a0614 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0614) {
            ctx->pc = 0x1A0618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0614u;
            // 0x1a0618: 0x8c85080c  lw          $a1, 0x80C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A061Cu;
            goto label_1a061c;
        }
    }
    ctx->pc = 0x1A061Cu;
label_1a061c:
    // 0x1a061c: 0x8c82084c  lw          $v0, 0x84C($a0)
    ctx->pc = 0x1a061cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2124)));
    // 0x1a0620: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1a0620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1a0624: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a0624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a0628: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0628u;
        // 0x1a062c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0628u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0630u;
}
