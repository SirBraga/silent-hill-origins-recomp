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

// Function: sub_002D6EF8
// Address: 0x2d6ef8 - 0x2d6f48
void sub_002D6EF8_0x2d6ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6EF8_0x2d6ef8");
#endif

    switch (ctx->pc) {
        case 0x2d6f20u: goto label_2d6f20;
        default: break;
    }

    ctx->pc = 0x2d6ef8u;

    // 0x2d6ef8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6efc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6efcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d6f00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6f00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d6f08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d6f08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6f0c: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2d6f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d6f10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D6F10u;
    {
        const bool branch_taken_0x2d6f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F10u;
        // 0x2d6f14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f10) {
            ctx->pc = 0x2D6F20u;
            goto label_2d6f20;
        }
    }
    ctx->pc = 0x2D6F18u;
    // 0x2d6f18: 0xc0b5c00  jal         func_2D7000
    ctx->pc = 0x2D6F18u;
    SET_GPR_U32(ctx, 31, 0x2D6F20u);
    ctx->pc = 0x2D7000u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7000u, 0x2D6F18u, 0x2D6F20u)) {
        return;
    }
    ctx->pc = 0x2D6F20u;
label_2d6f20:
    // 0x2d6f20: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D6F20u;
    {
        const bool branch_taken_0x2d6f20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F20u;
        // 0x2d6f24: 0xae300004  sw          $s0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6f20) {
            ctx->pc = 0x2D6F34u;
            goto label_2d6f34;
        }
    }
    ctx->pc = 0x2D6F28u;
    // 0x2d6f28: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x2d6f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x2d6f2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d6f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d6f30: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x2d6f30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_2d6f34:
    // 0x2d6f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d6f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6f40: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6F40u;
        // 0x2d6f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6F48u;
}
