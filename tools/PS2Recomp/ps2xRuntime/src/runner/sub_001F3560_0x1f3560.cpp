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

// Function: sub_001F3560
// Address: 0x1f3560 - 0x1f3580
void sub_001F3560_0x1f3560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3560_0x1f3560");
#endif

    ctx->pc = 0x1f3560u;

    // 0x1f3560: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f3560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f3564: 0x8c62eac0  lw          $v0, -0x1540($v1)
    ctx->pc = 0x1f3564u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33EAC0u));
    // 0x1f3568: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F3568u;
    {
        const bool branch_taken_0x1f3568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F356Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3568u;
        // 0x1f356c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f3568) {
            ctx->pc = 0x1F3574u;
            goto label_1f3574;
        }
    }
    ctx->pc = 0x1F3570u;
    // 0x1f3570: 0xac44eac4  sw          $a0, -0x153C($v0)
    ctx->pc = 0x1f3570u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961860), GPR_U32(ctx, 4));
label_1f3574:
    // 0x1f3574: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F357Cu;
    // 0x1f357c: 0x0  nop
    ctx->pc = 0x1f357cu;
    // NOP
    ctx->pc = 0x1f3580u;
}
