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

// Function: sub_0025F300
// Address: 0x25f300 - 0x25f310
void sub_0025F300_0x25f300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025F300_0x25f300");
#endif

    ctx->pc = 0x25f300u;

    // 0x25f300: 0x50e0ffe5  beql        $a3, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x25F300u;
    {
        const bool branch_taken_0x25f300 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x25f300) {
            ctx->pc = 0x25F304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25F300u;
            // 0x25f304: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25F298u;
            return;
        }
    }
    ctx->pc = 0x25F308u;
    // 0x25f308: 0x3e00008  jr          $ra
    ctx->pc = 0x25F308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25F30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25F308u;
        // 0x25f30c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25F308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25F310u;
}
