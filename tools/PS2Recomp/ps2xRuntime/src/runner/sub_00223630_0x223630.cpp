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

// Function: sub_00223630
// Address: 0x223630 - 0x223658
void sub_00223630_0x223630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00223630_0x223630");
#endif

    switch (ctx->pc) {
        case 0x223644u: goto label_223644;
        default: break;
    }

    ctx->pc = 0x223630u;

    // 0x223630: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x223630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x223634: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223638: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x223638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22363c: 0xc08ab74  jal         func_22ADD0
    ctx->pc = 0x22363Cu;
    SET_GPR_U32(ctx, 31, 0x223644u);
    ctx->pc = 0x223640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22363Cu;
    // 0x223640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22ADD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22ADD0u, 0x22363Cu, 0x223644u)) {
        return;
    }
    ctx->pc = 0x223644u;
label_223644:
    // 0x223644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x223644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x223648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22364c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22364cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223650: 0x3e00008  jr          $ra
    ctx->pc = 0x223650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x223650u;
        // 0x223654: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x223650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x223658u;
}
