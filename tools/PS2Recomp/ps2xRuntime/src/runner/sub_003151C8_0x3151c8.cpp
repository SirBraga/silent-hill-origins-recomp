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

// Function: sub_003151C8
// Address: 0x3151c8 - 0x315218
void sub_003151C8_0x3151c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003151C8_0x3151c8");
#endif

    switch (ctx->pc) {
        case 0x3151e8u: goto label_3151e8;
        case 0x3151f4u: goto label_3151f4;
        case 0x315200u: goto label_315200;
        default: break;
    }

    ctx->pc = 0x3151c8u;

    // 0x3151c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3151c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3151cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3151ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3151d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3151d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3151d4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3151d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3151d8: 0x3c110068  lui         $s1, 0x68
    ctx->pc = 0x3151d8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    // 0x3151dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3151dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3151e0: 0xc0c556c  jal         func_3155B0
    ctx->pc = 0x3151E0u;
    SET_GPR_U32(ctx, 31, 0x3151E8u);
    ctx->pc = 0x3151E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151E0u;
    // 0x3151e4: 0x8e246ccc  lw          $a0, 0x6CCC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27852)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3155B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3155B0u, 0x3151E0u, 0x3151E8u)) {
        return;
    }
    ctx->pc = 0x3151E8u;
label_3151e8:
    // 0x3151e8: 0x8e246ccc  lw          $a0, 0x6CCC($s1)
    ctx->pc = 0x3151e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27852)));
    // 0x3151ec: 0xc0c7436  jal         func_31D0D8
    ctx->pc = 0x3151ECu;
    SET_GPR_U32(ctx, 31, 0x3151F4u);
    ctx->pc = 0x3151F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151ECu;
    // 0x3151f0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31D0D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31D0D8u, 0x3151ECu, 0x3151F4u)) {
        return;
    }
    ctx->pc = 0x3151F4u;
label_3151f4:
    // 0x3151f4: 0x8e246ccc  lw          $a0, 0x6CCC($s1)
    ctx->pc = 0x3151f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 27852)));
    // 0x3151f8: 0xc0c5584  jal         func_315610
    ctx->pc = 0x3151F8u;
    SET_GPR_U32(ctx, 31, 0x315200u);
    ctx->pc = 0x3151FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3151F8u;
    // 0x3151fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315610u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315610u, 0x3151F8u, 0x315200u)) {
        return;
    }
    ctx->pc = 0x315200u;
label_315200:
    // 0x315200: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x315200u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x315204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x315204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x315208: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x315208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31520c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31520cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x315210: 0x3e00008  jr          $ra
    ctx->pc = 0x315210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x315214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315210u;
        // 0x315214: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x315218u;
}
