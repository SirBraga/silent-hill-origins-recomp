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

// Function: sub_00254420
// Address: 0x254420 - 0x254448
void sub_00254420_0x254420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254420_0x254420");
#endif

    ctx->pc = 0x254420u;

    // 0x254420: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x254420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x254424: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x254424u;
    {
        const bool branch_taken_0x254424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254424) {
            ctx->pc = 0x254428u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x254424u;
            // 0x254428: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25443Cu;
            goto label_25443c;
        }
    }
    ctx->pc = 0x25442Cu;
    // 0x25442c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x25442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x254430: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x254430u;
    {
        const bool branch_taken_0x254430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x254434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254430u;
        // 0x254434: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x254430) {
            ctx->pc = 0x25443Cu;
            goto label_25443c;
        }
    }
    ctx->pc = 0x254438u;
    // 0x254438: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x254438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25443c:
    // 0x25443c: 0x3e00008  jr          $ra
    ctx->pc = 0x25443Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25443Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254444u;
    // 0x254444: 0x0  nop
    ctx->pc = 0x254444u;
    // NOP
    ctx->pc = 0x254448u;
}
