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

// Function: sub_002D6EC8
// Address: 0x2d6ec8 - 0x2d6ef8
void sub_002D6EC8_0x2d6ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6EC8_0x2d6ec8");
#endif

    switch (ctx->pc) {
        case 0x2d6edcu: goto label_2d6edc;
        case 0x2d6ee4u: goto label_2d6ee4;
        default: break;
    }

    ctx->pc = 0x2d6ec8u;

    // 0x2d6ec8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d6ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d6ecc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d6eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d6ed0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6ed4: 0xc0aaee2  jal         func_2ABB88
    ctx->pc = 0x2D6ED4u;
    SET_GPR_U32(ctx, 31, 0x2D6EDCu);
    ctx->pc = 0x2D6ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6ED4u;
    // 0x2d6ed8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABB88u, 0x2D6ED4u, 0x2D6EDCu)) {
        return;
    }
    ctx->pc = 0x2D6EDCu;
label_2d6edc:
    // 0x2d6edc: 0xc0b5c00  jal         func_2D7000
    ctx->pc = 0x2D6EDCu;
    SET_GPR_U32(ctx, 31, 0x2D6EE4u);
    ctx->pc = 0x2D6EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6EDCu;
    // 0x2d6ee0: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x2D6EDCu, 0x2D6EE4u)) {
        return;
    }
    ctx->pc = 0x2D6EE4u;
label_2d6ee4:
    // 0x2d6ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d6ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d6eec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6ef0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6EF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6EF0u;
        // 0x2d6ef4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6EF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6EF8u;
}
