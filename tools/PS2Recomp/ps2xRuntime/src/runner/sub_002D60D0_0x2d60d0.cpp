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

// Function: sub_002D60D0
// Address: 0x2d60d0 - 0x2d6120
void sub_002D60D0_0x2d60d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D60D0_0x2d60d0");
#endif

    switch (ctx->pc) {
        case 0x2d60f0u: goto label_2d60f0;
        case 0x2d6104u: goto label_2d6104;
        default: break;
    }

    ctx->pc = 0x2d60d0u;

    // 0x2d60d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d60d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d60d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d60d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d60dc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d60dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60e0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2d60e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d60e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d60e8: 0xc0b5a62  jal         func_2D6988
    ctx->pc = 0x2D60E8u;
    SET_GPR_U32(ctx, 31, 0x2D60F0u);
    ctx->pc = 0x2D60ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60E8u;
    // 0x2d60ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6988u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6988u, 0x2D60E8u, 0x2D60F0u)) {
        return;
    }
    ctx->pc = 0x2D60F0u;
label_2d60f0:
    // 0x2d60f0: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x2d60f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2d60f4: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D60F4u;
    {
        const bool branch_taken_0x2d60f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d60f4) {
            ctx->pc = 0x2D60F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D60F4u;
            // 0x2d60f8: 0xae300040  sw          $s0, 0x40($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6108u;
            goto label_2d6108;
        }
    }
    ctx->pc = 0x2D60FCu;
    // 0x2d60fc: 0xc0b5a3a  jal         func_2D68E8
    ctx->pc = 0x2D60FCu;
    SET_GPR_U32(ctx, 31, 0x2D6104u);
    ctx->pc = 0x2D68E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D68E8u, 0x2D60FCu, 0x2D6104u)) {
        return;
    }
    ctx->pc = 0x2D6104u;
label_2d6104:
    // 0x2d6104: 0xae300040  sw          $s0, 0x40($s1)
    ctx->pc = 0x2d6104u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 16));
label_2d6108:
    // 0x2d6108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d6108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d610c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d610cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6110: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d6110u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6114: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d6114u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6118: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D611Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6118u;
        // 0x2d611c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6120u;
}
