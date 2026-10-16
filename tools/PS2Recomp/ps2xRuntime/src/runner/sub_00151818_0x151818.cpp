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

// Function: sub_00151818
// Address: 0x151818 - 0x151838
void sub_00151818_0x151818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151818_0x151818");
#endif

    switch (ctx->pc) {
        case 0x151820u: goto label_151820;
        case 0x151824u: goto label_151824;
        default: break;
    }

    ctx->pc = 0x151818u;

    // 0x151818: 0xc07fcc2  jal         func_1FF308
    ctx->pc = 0x151818u;
    SET_GPR_U32(ctx, 31, 0x151820u);
    ctx->pc = 0x15181Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151818u;
    // 0x15181c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF308u, 0x151818u, 0x151820u)) {
        return;
    }
    ctx->pc = 0x151820u;
label_151820:
    // 0x151820: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x151820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_151824:
    // 0x151824: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x151824u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x151828: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x151828u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15182c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15182cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x151830: 0x3e00008  jr          $ra
    ctx->pc = 0x151830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151830u;
        // 0x151834: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151830u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151838u;
}
