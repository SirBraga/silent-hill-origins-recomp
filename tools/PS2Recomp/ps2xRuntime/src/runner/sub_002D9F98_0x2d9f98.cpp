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

// Function: sub_002D9F98
// Address: 0x2d9f98 - 0x2d9fd0
void sub_002D9F98_0x2d9f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9F98_0x2d9f98");
#endif

    switch (ctx->pc) {
        case 0x2d9fc0u: goto label_2d9fc0;
        default: break;
    }

    ctx->pc = 0x2d9f98u;

    // 0x2d9f98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d9f9c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2d9f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9fa4: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2d9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2d9fa8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2d9fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2d9fac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D9FACu;
    {
        const bool branch_taken_0x2d9fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FACu;
        // 0x2d9fb0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fac) {
            ctx->pc = 0x2D9FC4u;
            goto label_2d9fc4;
        }
    }
    ctx->pc = 0x2D9FB4u;
    // 0x2d9fb4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x2d9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x2d9fb8: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2D9FB8u;
    SET_GPR_U32(ctx, 31, 0x2D9FC0u);
    ctx->pc = 0x2D9FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D9FB8u;
    // 0x2d9fbc: 0x24847bf8  addiu       $a0, $a0, 0x7BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2D9FB8u, 0x2D9FC0u)) {
        return;
    }
    ctx->pc = 0x2D9FC0u;
label_2d9fc0:
    // 0x2d9fc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9fc4:
    // 0x2d9fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9FC4u;
        // 0x2d9fc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9FCCu;
    // 0x2d9fcc: 0x0  nop
    ctx->pc = 0x2d9fccu;
    // NOP
    ctx->pc = 0x2d9fd0u;
}
