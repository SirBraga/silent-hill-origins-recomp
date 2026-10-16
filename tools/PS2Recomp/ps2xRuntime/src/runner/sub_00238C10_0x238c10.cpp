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

// Function: sub_00238C10
// Address: 0x238c10 - 0x238c38
void sub_00238C10_0x238c10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238C10_0x238c10");
#endif

    ctx->pc = 0x238c10u;

    // 0x238c10: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x238c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x238c14: 0x8ca53f20  lw          $a1, 0x3F20($a1)
    ctx->pc = 0x238c14u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3F20u));
    // 0x238c18: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x238C18u;
    {
        const bool branch_taken_0x238c18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x238C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C18u;
        // 0x238c1c: 0x8f838ebc  lw          $v1, -0x7144($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938300)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x238c18) {
            ctx->pc = 0x238C30u;
            goto label_238c30;
        }
    }
    ctx->pc = 0x238C20u;
    // 0x238c20: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x238c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x238c24: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x238c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x238c28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x238c28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x238c2c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x238c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_238c30:
    // 0x238c30: 0x3e00008  jr          $ra
    ctx->pc = 0x238C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238C30u;
        // 0x238c34: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238C30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C38u;
}
