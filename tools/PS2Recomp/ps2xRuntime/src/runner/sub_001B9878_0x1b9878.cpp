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

// Function: sub_001B9878
// Address: 0x1b9878 - 0x1b98e8
void sub_001B9878_0x1b9878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9878_0x1b9878");
#endif

    switch (ctx->pc) {
        case 0x1b98a0u: goto label_1b98a0;
        default: break;
    }

    ctx->pc = 0x1b9878u;

    // 0x1b9878: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b9878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b987c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1b987cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1b9880: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1b9880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1b9884: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9884u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b9888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b988c: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1b988cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1b9890: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B9890u;
    {
        const bool branch_taken_0x1b9890 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9890u;
        // 0x1b9894: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9890) {
            ctx->pc = 0x1B98D0u;
            goto label_1b98d0;
        }
    }
    ctx->pc = 0x1B9898u;
    // 0x1b9898: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1B9898u;
    SET_GPR_U32(ctx, 31, 0x1B98A0u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B9898u, 0x1B98A0u)) {
        return;
    }
    ctx->pc = 0x1B98A0u;
label_1b98a0:
    // 0x1b98a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b98a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98a4: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1B98A4u;
    {
        const bool branch_taken_0x1b98a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b98a4) {
            ctx->pc = 0x1B98A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B98A4u;
            // 0x1b98a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B98D4u;
            goto label_1b98d4;
        }
    }
    ctx->pc = 0x1B98ACu;
    // 0x1b98ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b98acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b98b0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B98B0u;
    {
        const bool branch_taken_0x1b98b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98B0u;
        // 0x1b98b4: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98b0) {
            ctx->pc = 0x1B98C4u;
            goto label_1b98c4;
        }
    }
    ctx->pc = 0x1B98B8u;
    // 0x1b98b8: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1b98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1b98bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B98BCu;
    {
        const bool branch_taken_0x1b98bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98BCu;
        // 0x1b98c0: 0x24420001  addiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98bc) {
            ctx->pc = 0x1B98CCu;
            goto label_1b98cc;
        }
    }
    ctx->pc = 0x1B98C4u;
label_1b98c4:
    // 0x1b98c4: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1b98c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x1b98c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b98c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b98cc:
    // 0x1b98cc: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1b98ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1b98d0:
    // 0x1b98d0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1b98d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b98d4:
    // 0x1b98d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1b98d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b98d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b98d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b98dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1B98DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B98E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98DCu;
        // 0x1b98e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B98DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B98E4u;
    // 0x1b98e4: 0x0  nop
    ctx->pc = 0x1b98e4u;
    // NOP
    ctx->pc = 0x1b98e8u;
}
