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

// Function: sub_001AA4A0
// Address: 0x1aa4a0 - 0x1aa4f8
void sub_001AA4A0_0x1aa4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA4A0_0x1aa4a0");
#endif

    switch (ctx->pc) {
        case 0x1aa4c8u: goto label_1aa4c8;
        case 0x1aa4dcu: goto label_1aa4dc;
        default: break;
    }

    ctx->pc = 0x1aa4a0u;

    // 0x1aa4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1aa4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1aa4a4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1aa4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1aa4a8: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1aa4a8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1aa4ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1aa4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1aa4b0: 0x8e228608  lw          $v0, -0x79F8($s1)
    ctx->pc = 0x1aa4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8608u));
    // 0x1aa4b4: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x1aa4b4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
    // 0x1aa4b8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1AA4B8u;
    {
        const bool branch_taken_0x1aa4b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4B8u;
        // 0x1aa4bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa4b8) {
            ctx->pc = 0x1AA4DCu;
            goto label_1aa4dc;
        }
    }
    ctx->pc = 0x1AA4C0u;
    // 0x1aa4c0: 0xc06a93e  jal         func_1AA4F8
    ctx->pc = 0x1AA4C0u;
    SET_GPR_U32(ctx, 31, 0x1AA4C8u);
    ctx->pc = 0x1AA4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4C0u;
    // 0x1aa4c4: 0x26048518  addiu       $a0, $s0, -0x7AE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA4F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4F8u, 0x1AA4C0u, 0x1AA4C8u)) {
        return;
    }
    ctx->pc = 0x1AA4C8u;
label_1aa4c8:
    // 0x1aa4c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa4cc: 0x3c04001b  lui         $a0, 0x1B
    ctx->pc = 0x1aa4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
    // 0x1aa4d0: 0xae228608  sw          $v0, -0x79F8($s1)
    ctx->pc = 0x1aa4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294936072), GPR_U32(ctx, 2));
    // 0x1aa4d4: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x1AA4D4u;
    SET_GPR_U32(ctx, 31, 0x1AA4DCu);
    ctx->pc = 0x1AA4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA4D4u;
    // 0x1aa4d8: 0x2484a7b8  addiu       $a0, $a0, -0x5848 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294944696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x1AA4D4u, 0x1AA4DCu)) {
        return;
    }
    ctx->pc = 0x1AA4DCu;
label_1aa4dc:
    // 0x1aa4dc: 0x26028518  addiu       $v0, $s0, -0x7AE8
    ctx->pc = 0x1aa4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294935832));
    // 0x1aa4e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1aa4e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aa4e4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1aa4e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1aa4e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1aa4ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA4ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA4ECu;
        // 0x1aa4f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA4ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA4F4u;
    // 0x1aa4f4: 0x0  nop
    ctx->pc = 0x1aa4f4u;
    // NOP
    ctx->pc = 0x1aa4f8u;
}
