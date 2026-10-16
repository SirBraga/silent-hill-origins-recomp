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

// Function: sub_002EA754
// Address: 0x2ea754 - 0x2ea770
void sub_002EA754_0x2ea754(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA754_0x2ea754");
#endif

    switch (ctx->pc) {
        case 0x2ea758u: goto label_2ea758;
        default: break;
    }

    ctx->pc = 0x2ea754u;

    // 0x2ea754: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2ea754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ea758:
    // 0x2ea758: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ea758u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea75c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2ea75cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea760: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea760u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea764: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA764u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA764u;
        // 0x2ea768: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA764u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA76Cu;
    // 0x2ea76c: 0x0  nop
    ctx->pc = 0x2ea76cu;
    // NOP
    ctx->pc = 0x2ea770u;
}
