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

// Function: sub_0014D2C0
// Address: 0x14d2c0 - 0x14d308
void sub_0014D2C0_0x14d2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2C0_0x14d2c0");
#endif

    switch (ctx->pc) {
        case 0x14d2e4u: goto label_14d2e4;
        case 0x14d2f4u: goto label_14d2f4;
        default: break;
    }

    ctx->pc = 0x14d2c0u;

    // 0x14d2c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14d2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x14d2c4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x14d2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2c8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14d2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x14d2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14d2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14d2d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x14d2d4: 0x26110008  addiu       $s1, $s0, 0x8
    ctx->pc = 0x14d2d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x14d2d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14d2d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14d2dc: 0xc053144  jal         func_14C510
    ctx->pc = 0x14D2DCu;
    SET_GPR_U32(ctx, 31, 0x14D2E4u);
    ctx->pc = 0x14D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2DCu;
    // 0x14d2e0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14C510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14C510u, 0x14D2DCu, 0x14D2E4u)) {
        return;
    }
    ctx->pc = 0x14D2E4u;
label_14d2e4:
    // 0x14d2e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14d2e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2e8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14d2e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d2ec: 0xc053290  jal         func_14CA40
    ctx->pc = 0x14D2ECu;
    SET_GPR_U32(ctx, 31, 0x14D2F4u);
    ctx->pc = 0x14D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D2ECu;
    // 0x14d2f0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14CA40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14CA40u, 0x14D2ECu, 0x14D2F4u)) {
        return;
    }
    ctx->pc = 0x14D2F4u;
label_14d2f4:
    // 0x14d2f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14d2f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14d2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14d2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14d2fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14d2fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14d300: 0x3e00008  jr          $ra
    ctx->pc = 0x14D300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D300u;
        // 0x14d304: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D300u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D308u;
}
