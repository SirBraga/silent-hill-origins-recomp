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

// Function: sub_0017D298
// Address: 0x17d298 - 0x17d2d8
void sub_0017D298_0x17d298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D298_0x17d298");
#endif

    switch (ctx->pc) {
        case 0x17d2b4u: goto label_17d2b4;
        case 0x17d2c0u: goto label_17d2c0;
        default: break;
    }

    ctx->pc = 0x17d298u;

    // 0x17d298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17d298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17d29c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17d29cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x17d2a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17d2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17d2a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17d2a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d2a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d2a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d2ac: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x17D2ACu;
    SET_GPR_U32(ctx, 31, 0x17D2B4u);
    ctx->pc = 0x17D2B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2ACu;
    // 0x17d2b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x17D2ACu, 0x17D2B4u)) {
        return;
    }
    ctx->pc = 0x17D2B4u;
label_17d2b4:
    // 0x17d2b4: 0x26040044  addiu       $a0, $s0, 0x44
    ctx->pc = 0x17d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
    // 0x17d2b8: 0xc041ec6  jal         func_107B18
    ctx->pc = 0x17D2B8u;
    SET_GPR_U32(ctx, 31, 0x17D2C0u);
    ctx->pc = 0x17D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D2B8u;
    // 0x17d2bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107B18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107B18u, 0x17D2B8u, 0x17D2C0u)) {
        return;
    }
    ctx->pc = 0x17D2C0u;
label_17d2c0:
    // 0x17d2c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17d2c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17d2c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17d2c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x17D2CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D2CCu;
        // 0x17d2d0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D2CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D2D4u;
    // 0x17d2d4: 0x0  nop
    ctx->pc = 0x17d2d4u;
    // NOP
    ctx->pc = 0x17d2d8u;
}
