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

// Function: sub_002E0D88
// Address: 0x2e0d88 - 0x2e0dc0
void sub_002E0D88_0x2e0d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0D88_0x2e0d88");
#endif

    switch (ctx->pc) {
        case 0x2e0d98u: goto label_2e0d98;
        default: break;
    }

    ctx->pc = 0x2e0d88u;

    // 0x2e0d88: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2e0d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2e0d8c: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0D8Cu;
    {
        const bool branch_taken_0x2e0d8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2E0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D8Cu;
        // 0x2e0d90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d8c) {
            ctx->pc = 0x2E0DB4u;
            goto label_2e0db4;
        }
    }
    ctx->pc = 0x2E0D94u;
    // 0x2e0d94: 0x0  nop
    ctx->pc = 0x2e0d94u;
    // NOP
label_2e0d98:
    // 0x2e0d98: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2e0d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2e0d9c: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0D9Cu;
    {
        const bool branch_taken_0x2e0d9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e0d9c) {
            ctx->pc = 0x2E0DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D9Cu;
            // 0x2e0da0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DACu;
            goto label_2e0dac;
        }
    }
    ctx->pc = 0x2E0DA4u;
    // 0x2e0da4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DA4u;
        // 0x2e0da8: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DACu;
label_2e0dac:
    // 0x2e0dac: 0x1464fffa  bne         $v1, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0DACu;
    {
        const bool branch_taken_0x2e0dac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E0DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DACu;
        // 0x2e0db0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0dac) {
            ctx->pc = 0x2E0D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0d98;
        }
    }
    ctx->pc = 0x2E0DB4u;
label_2e0db4:
    // 0x2e0db4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e0db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2e0db8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DB8u;
        // 0x2e0dbc: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0DB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0DC0u;
}
