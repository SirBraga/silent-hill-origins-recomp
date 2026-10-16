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

// Function: sub_0030895C
// Address: 0x30895c - 0x30896c
void sub_0030895C_0x30895c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030895C_0x30895c");
#endif

    ctx->pc = 0x30895cu;

    // 0x30895c: 0x10c0ffe5  beqz        $a2, . + 4 + (-0x1B << 2)
    ctx->pc = 0x30895Cu;
    {
        const bool branch_taken_0x30895c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x308960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30895Cu;
        // 0x308960: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30895c) {
            ctx->pc = 0x3088F4u;
            return;
        }
    }
    ctx->pc = 0x308964u;
    // 0x308964: 0x3e00008  jr          $ra
    ctx->pc = 0x308964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308964u;
        // 0x308968: 0xad06000c  sw          $a2, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30896Cu;
}
