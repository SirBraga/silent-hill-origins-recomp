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

// Function: sub_002E0D08
// Address: 0x2e0d08 - 0x2e0d88
void sub_002E0D08_0x2e0d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0D08_0x2e0d08");
#endif

    switch (ctx->pc) {
        case 0x2e0d28u: goto label_2e0d28;
        case 0x2e0d6cu: goto label_2e0d6c;
        default: break;
    }

    ctx->pc = 0x2e0d08u;

    // 0x2e0d08: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0d0c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e0d10: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0d14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0d14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d18: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2e0d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0d1c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2e0d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2e0d20: 0x50a20009  beql        $a1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2E0D20u;
    {
        const bool branch_taken_0x2e0d20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0d20) {
            ctx->pc = 0x2E0D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D20u;
            // 0x2e0d24: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D48u;
            goto label_2e0d48;
        }
    }
    ctx->pc = 0x2E0D28u;
label_2e0d28:
    // 0x2e0d28: 0x54f00003  bnel        $a3, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E0D28u;
    {
        const bool branch_taken_0x2e0d28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e0d28) {
            ctx->pc = 0x2E0D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0D28u;
            // 0x2e0d2c: 0x8ce70004  lw          $a3, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0D38u;
            goto label_2e0d38;
        }
    }
    ctx->pc = 0x2E0D30u;
    // 0x2e0d30: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2E0D30u;
    {
        const bool branch_taken_0x2e0d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D30u;
        // 0x2e0d34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0d30) {
            ctx->pc = 0x2E0D70u;
            goto label_2e0d70;
        }
    }
    ctx->pc = 0x2E0D38u;
label_2e0d38:
    // 0x2e0d38: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2e0d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2e0d3c: 0x14a2fffa  bne         $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2E0D3Cu;
    {
        const bool branch_taken_0x2e0d3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2e0d3c) {
            ctx->pc = 0x2E0D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0d28;
        }
    }
    ctx->pc = 0x2E0D44u;
    // 0x2e0d44: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e0d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_2e0d48:
    // 0x2e0d48: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e0d4c: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2e0d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0d50: 0x248480e0  addiu       $a0, $a0, -0x7F20
    ctx->pc = 0x2e0d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934752));
    // 0x2e0d54: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e0d54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0d58: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2e0d58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2e0d5c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2e0d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0d60: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0d64: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E0D64u;
    SET_GPR_U32(ctx, 31, 0x2E0D6Cu);
    ctx->pc = 0x2E0D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0D64u;
    // 0x2e0d68: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E0D64u, 0x2E0D6Cu)) {
        return;
    }
    ctx->pc = 0x2E0D6Cu;
label_2e0d6c:
    // 0x2e0d6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e0d6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0d70:
    // 0x2e0d70: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e0d70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0d74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0d74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0d78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0D78u;
        // 0x2e0d7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0D78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0D80u;
    // 0x2e0d80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2e0d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e0d84: 0x0  nop
    ctx->pc = 0x2e0d84u;
    // NOP
    ctx->pc = 0x2e0d88u;
}
