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

// Function: sub_0013C2A8
// Address: 0x13c2a8 - 0x13c2f0
void sub_0013C2A8_0x13c2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C2A8_0x13c2a8");
#endif

    switch (ctx->pc) {
        case 0x13c2d0u: goto label_13c2d0;
        default: break;
    }

    ctx->pc = 0x13c2a8u;

    // 0x13c2a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13c2ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13c2b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c2b4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13c2b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c2b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13c2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13c2bc: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x13c2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13c2c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13C2C0u;
    {
        const bool branch_taken_0x13c2c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13C2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2C0u;
        // 0x13c2c4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13c2c0) {
            ctx->pc = 0x13C2D4u;
            goto label_13c2d4;
        }
    }
    ctx->pc = 0x13C2C8u;
    // 0x13c2c8: 0xc0898d2  jal         func_226348
    ctx->pc = 0x13C2C8u;
    SET_GPR_U32(ctx, 31, 0x13C2D0u);
    ctx->pc = 0x226348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226348u, 0x13C2C8u, 0x13C2D0u)) {
        return;
    }
    ctx->pc = 0x13C2D0u;
label_13c2d0:
    // 0x13c2d0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x13c2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_13c2d4:
    // 0x13c2d4: 0xae110040  sw          $s1, 0x40($s0)
    ctx->pc = 0x13c2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 17));
    // 0x13c2d8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13c2d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c2dc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c2dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13c2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13C2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13C2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13C2E4u;
        // 0x13c2e8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C2E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C2ECu;
    // 0x13c2ec: 0x0  nop
    ctx->pc = 0x13c2ecu;
    // NOP
    ctx->pc = 0x13c2f0u;
}
