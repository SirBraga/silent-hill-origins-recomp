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

// Function: sub_00125768
// Address: 0x125768 - 0x1257b0
void sub_00125768_0x125768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125768_0x125768");
#endif

    switch (ctx->pc) {
        case 0x125788u: goto label_125788;
        case 0x12579cu: goto label_12579c;
        default: break;
    }

    ctx->pc = 0x125768u;

    // 0x125768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x125768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x12576c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x12576cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x125770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x125770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x125774: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125778: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x125778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12577c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12577cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125780: 0xc041928  jal         func_1064A0
    ctx->pc = 0x125780u;
    SET_GPR_U32(ctx, 31, 0x125788u);
    ctx->pc = 0x125784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125780u;
    // 0x125784: 0x26040f84  addiu       $a0, $s0, 0xF84 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3972));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1064A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1064A0u, 0x125780u, 0x125788u)) {
        return;
    }
    ctx->pc = 0x125788u;
label_125788:
    // 0x125788: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x125788u;
    {
        const bool branch_taken_0x125788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125788) {
            ctx->pc = 0x12578Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x125788u;
            // 0x12578c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1257A0u;
            goto label_1257a0;
        }
    }
    ctx->pc = 0x125790u;
    // 0x125790: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x125790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125794: 0xc040658  jal         func_101960
    ctx->pc = 0x125794u;
    SET_GPR_U32(ctx, 31, 0x12579Cu);
    ctx->pc = 0x125798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125794u;
    // 0x125798: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x101960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101960u, 0x125794u, 0x12579Cu)) {
        return;
    }
    ctx->pc = 0x12579Cu;
label_12579c:
    // 0x12579c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12579cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1257a0:
    // 0x1257a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1257a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1257a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1257a8: 0x3e00008  jr          $ra
    ctx->pc = 0x1257A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1257ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1257A8u;
        // 0x1257ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1257A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1257B0u;
}
