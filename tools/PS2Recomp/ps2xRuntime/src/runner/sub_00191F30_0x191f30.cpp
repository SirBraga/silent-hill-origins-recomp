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

// Function: sub_00191F30
// Address: 0x191f30 - 0x191f50
void sub_00191F30_0x191f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191F30_0x191f30");
#endif

    ctx->pc = 0x191f30u;

    // 0x191f30: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191F30u;
    {
        const bool branch_taken_0x191f30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191f30) {
            ctx->pc = 0x191F48u;
            goto label_191f48;
        }
    }
    ctx->pc = 0x191F38u;
    // 0x191f38: 0x8ca200f4  lw          $v0, 0xF4($a1)
    ctx->pc = 0x191f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 244)));
    // 0x191f3c: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x191F3Cu;
    {
        const bool branch_taken_0x191f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x191F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191F3Cu;
        // 0x191f40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191f3c) {
            ctx->pc = 0x191F48u;
            goto label_191f48;
        }
    }
    ctx->pc = 0x191F44u;
    // 0x191f44: 0xaca20100  sw          $v0, 0x100($a1)
    ctx->pc = 0x191f44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 2));
label_191f48:
    // 0x191f48: 0x3e00008  jr          $ra
    ctx->pc = 0x191F48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191F48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191F50u;
}
