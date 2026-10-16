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

// Function: sub_0017D2D8
// Address: 0x17d2d8 - 0x17d318
void sub_0017D2D8_0x17d2d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D2D8_0x17d2d8");
#endif

    switch (ctx->pc) {
        case 0x17d2f4u: goto label_17d2f4;
        case 0x17d300u: goto label_17d300;
        default: break;
    }

    ctx->pc = 0x17d2d8u;

    // 0x17d2d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d2dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d2dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17d2e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d2e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d2e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d2e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d2ec: 0xc04efda  jal         func_13BF68
    ctx->pc = 0x17D2ECu;
    SET_GPR_U32(ctx, 31, 0x17D2F4u);
    ctx->pc = 0x17D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ECu;
    // 0x17d2f0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BF68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BF68u, 0x17D2ECu, 0x17D2F4u)) {
        return;
    }
    ctx->pc = 0x17D2F4u;
label_17d2f4:
    // 0x17d2f4: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x17d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d2f8: 0xc041c9c  jal         func_107270
    ctx->pc = 0x17D2F8u;
    SET_GPR_U32(ctx, 31, 0x17D300u);
    ctx->pc = 0x17D2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2F8u;
    // 0x17d2fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107270u, 0x17D2F8u, 0x17D300u)) {
        return;
    }
    ctx->pc = 0x17D300u;
label_17d300:
    // 0x17d300: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d304: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d30c: 0x3e00008  jr          $ra
    ctx->pc = 0x17D30Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D30Cu;
        // 0x17d310: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D30Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D314u;
    // 0x17d314: 0x0  nop
    ctx->pc = 0x17d314u;
    // NOP
    ctx->pc = 0x17d318u;
}
