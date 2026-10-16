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

// Function: sub_00283130
// Address: 0x283130 - 0x283150
void sub_00283130_0x283130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283130_0x283130");
#endif

    ctx->pc = 0x283130u;

    // 0x283130: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x283134: 0x8c43e6e4  lw          $v1, -0x191C($v0)
    ctx->pc = 0x283134u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E4u));
    // 0x283138: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x283138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x28313c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x283140: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283140u;
    {
        const bool branch_taken_0x283140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283140) {
            ctx->pc = 0x283144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x283140u;
            // 0x283144: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x283148u;
            goto label_283148;
        }
    }
    ctx->pc = 0x283148u;
label_283148:
    // 0x283148: 0x3e00008  jr          $ra
    ctx->pc = 0x283148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283148u;
        // 0x28314c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283148u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283150u;
}
