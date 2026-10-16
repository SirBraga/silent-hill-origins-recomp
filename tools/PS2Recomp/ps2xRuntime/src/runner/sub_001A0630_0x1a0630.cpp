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

// Function: sub_001A0630
// Address: 0x1a0630 - 0x1a0650
void sub_001A0630_0x1a0630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0630_0x1a0630");
#endif

    ctx->pc = 0x1a0630u;

    // 0x1a0630: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a0630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a0634: 0x50c20001  beql        $a2, $v0, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A0634u;
    {
        const bool branch_taken_0x1a0634 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a0634) {
            ctx->pc = 0x1A0638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0634u;
            // 0x1a0638: 0x8c86080c  lw          $a2, 0x80C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A063Cu;
            goto label_1a063c;
        }
    }
    ctx->pc = 0x1A063Cu;
label_1a063c:
    // 0x1a063c: 0x8c83084c  lw          $v1, 0x84C($a0)
    ctx->pc = 0x1a063cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2124)));
    // 0x1a0640: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1a0644: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a0644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a0648: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0648u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0648u;
        // 0x1a064c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0648u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0650u;
}
