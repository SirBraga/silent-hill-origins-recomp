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

// Function: sub_00254850
// Address: 0x254850 - 0x254890
void sub_00254850_0x254850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254850_0x254850");
#endif

    switch (ctx->pc) {
        case 0x254874u: goto label_254874;
        case 0x25487cu: goto label_25487c;
        default: break;
    }

    ctx->pc = 0x254850u;

    // 0x254850: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x254850u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x254854: 0x8f8285bc  lw          $v0, -0x7A44($gp)
    ctx->pc = 0x254854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935996)));
    // 0x254858: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x254858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x25485c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25485cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254864: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x254864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x254868: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x254868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25486c: 0xc095646  jal         func_255918
    ctx->pc = 0x25486Cu;
    SET_GPR_U32(ctx, 31, 0x254874u);
    ctx->pc = 0x254870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25486Cu;
    // 0x254870: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255918u, 0x25486Cu, 0x254874u)) {
        return;
    }
    ctx->pc = 0x254874u;
label_254874:
    // 0x254874: 0xc095df4  jal         func_2577D0
    ctx->pc = 0x254874u;
    SET_GPR_U32(ctx, 31, 0x25487Cu);
    ctx->pc = 0x254878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x254874u;
    // 0x254878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2577D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2577D0u, 0x254874u, 0x25487Cu)) {
        return;
    }
    ctx->pc = 0x25487Cu;
label_25487c:
    // 0x25487c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x25487cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254880: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254884: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x254884u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254888: 0x3e00008  jr          $ra
    ctx->pc = 0x254888u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x254888u;
        // 0x25488c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254888u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254890u;
}
