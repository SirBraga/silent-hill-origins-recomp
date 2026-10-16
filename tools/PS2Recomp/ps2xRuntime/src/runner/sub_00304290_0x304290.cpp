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

// Function: sub_00304290
// Address: 0x304290 - 0x3042b0
void sub_00304290_0x304290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304290_0x304290");
#endif

    ctx->pc = 0x304290u;

    // 0x304290: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x304290u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304294: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x304294u;
    {
        const bool branch_taken_0x304294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x304294) {
            ctx->pc = 0x304298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x304294u;
            // 0x304298: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3042A8u;
            goto label_3042a8;
        }
    }
    ctx->pc = 0x30429Cu;
    // 0x30429c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x30429cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3042a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3042A0u;
    {
        const bool branch_taken_0x3042a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3042a0) {
            ctx->pc = 0x3042A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3042A0u;
            // 0x3042a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3042A8u;
            goto label_3042a8;
        }
    }
    ctx->pc = 0x3042A8u;
label_3042a8:
    // 0x3042a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3042A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3042A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3042B0u;
}
