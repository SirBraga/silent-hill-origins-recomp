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

// Function: sub_0025D2B0
// Address: 0x25d2b0 - 0x25d308
void sub_0025D2B0_0x25d2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D2B0_0x25d2b0");
#endif

    switch (ctx->pc) {
        case 0x25d2d4u: goto label_25d2d4;
        default: break;
    }

    ctx->pc = 0x25d2b0u;

    // 0x25d2b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x25d2b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x25d2b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x25d2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x25d2b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25d2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25d2bc: 0x8f9085f8  lw          $s0, -0x7A08($gp)
    ctx->pc = 0x25d2bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936056)));
    // 0x25d2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25d2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25d2c8: 0x2308021  addu        $s0, $s1, $s0
    ctx->pc = 0x25d2c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x25d2cc: 0xc0973fc  jal         func_25CFF0
    ctx->pc = 0x25D2CCu;
    SET_GPR_U32(ctx, 31, 0x25D2D4u);
    ctx->pc = 0x25D2D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D2CCu;
    // 0x25d2d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CFF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25CFF0u, 0x25D2CCu, 0x25D2D4u)) {
        return;
    }
    ctx->pc = 0x25D2D4u;
label_25d2d4:
    // 0x25d2d4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x25d2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x25d2d8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x25d2d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25d2dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25d2dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25d2e0: 0xae240018  sw          $a0, 0x18($s1)
    ctx->pc = 0x25d2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 4));
    // 0x25d2e4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x25d2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x25d2e8: 0xae23001c  sw          $v1, 0x1C($s1)
    ctx->pc = 0x25d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 3));
    // 0x25d2ec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x25d2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x25d2f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x25d2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25d2f4: 0xae240010  sw          $a0, 0x10($s1)
    ctx->pc = 0x25d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
    // 0x25d2f8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25d2f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25d2fc: 0x3e00008  jr          $ra
    ctx->pc = 0x25D2FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D2FCu;
        // 0x25d300: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D2FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D304u;
    // 0x25d304: 0x0  nop
    ctx->pc = 0x25d304u;
    // NOP
    ctx->pc = 0x25d308u;
}
