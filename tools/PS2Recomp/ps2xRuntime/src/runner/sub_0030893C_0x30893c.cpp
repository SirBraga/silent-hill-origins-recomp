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

// Function: sub_0030893C
// Address: 0x30893c - 0x30894c
void sub_0030893C_0x30893c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030893C_0x30893c");
#endif

    ctx->pc = 0x30893cu;

    // 0x30893c: 0x10c0ffed  beqz        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x30893Cu;
    {
        const bool branch_taken_0x30893c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x308940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30893Cu;
        // 0x308940: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30893c) {
            ctx->pc = 0x3088F4u;
            return;
        }
    }
    ctx->pc = 0x308944u;
    // 0x308944: 0x3e00008  jr          $ra
    ctx->pc = 0x308944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308944u;
        // 0x308948: 0xad060004  sw          $a2, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30894Cu;
}
