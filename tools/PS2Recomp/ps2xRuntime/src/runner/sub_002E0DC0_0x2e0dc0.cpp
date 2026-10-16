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

// Function: sub_002E0DC0
// Address: 0x2e0dc0 - 0x2e0e48
void sub_002E0DC0_0x2e0dc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0DC0_0x2e0dc0");
#endif

    switch (ctx->pc) {
        case 0x2e0df0u: goto label_2e0df0;
        case 0x2e0e10u: goto label_2e0e10;
        default: break;
    }

    ctx->pc = 0x2e0dc0u;

    // 0x2e0dc0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2e0dc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2e0dc4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2e0dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2e0dc8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e0dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e0dcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e0dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0dd0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2e0dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2e0dd4: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x2e0dd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0dd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0dd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0ddc: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2e0ddcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0de0: 0x10f1000e  beq         $a3, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2E0DE0u;
    {
        const bool branch_taken_0x2e0de0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 17));
        ctx->pc = 0x2E0DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0DE0u;
        // 0x2e0de4: 0x3c120071  lui         $s2, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0de0) {
            ctx->pc = 0x2E0E1Cu;
            goto label_2e0e1c;
        }
    }
    ctx->pc = 0x2E0DE8u;
    // 0x2e0de8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x2e0de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0dec: 0x0  nop
    ctx->pc = 0x2e0decu;
    // NOP
label_2e0df0:
    // 0x2e0df0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2e0df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e0df4: 0x8ce60000  lw          $a2, 0x0($a3)
    ctx->pc = 0x2e0df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0df8: 0x264480e0  addiu       $a0, $s2, -0x7F20
    ctx->pc = 0x2e0df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294934752));
    // 0x2e0dfc: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x2e0dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x2e0e00: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x2e0e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2e0e04: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2e0e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2e0e08: 0xc0b81ea  jal         func_2E07A8
    ctx->pc = 0x2E0E08u;
    SET_GPR_U32(ctx, 31, 0x2E0E10u);
    ctx->pc = 0x2E0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0E08u;
    // 0x2e0e0c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E07A8u, 0x2E0E08u, 0x2E0E10u)) {
        return;
    }
    ctx->pc = 0x2E0E10u;
label_2e0e10:
    // 0x2e0e10: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2e0e10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2e0e14: 0x54f1fff6  bnel        $a3, $s1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2E0E14u;
    {
        const bool branch_taken_0x2e0e14 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        if (branch_taken_0x2e0e14) {
            ctx->pc = 0x2E0E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0E14u;
            // 0x2e0e18: 0x8ce20004  lw          $v0, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0df0;
        }
    }
    ctx->pc = 0x2E0E1Cu;
label_2e0e1c:
    // 0x2e0e1c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2e0e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e0e20: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e0e20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e0e24: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2e0e24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e0e28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e0e28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e0e2c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E0E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0E2Cu;
        // 0x2e0e30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0E2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E0E34u;
    // 0x2e0e34: 0x0  nop
    ctx->pc = 0x2e0e34u;
    // NOP
    // 0x2e0e38: 0x0  nop
    ctx->pc = 0x2e0e38u;
    // NOP
    // 0x2e0e3c: 0x0  nop
    ctx->pc = 0x2e0e3cu;
    // NOP
    // 0x2e0e40: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e0e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e0e44: 0x0  nop
    ctx->pc = 0x2e0e44u;
    // NOP
    ctx->pc = 0x2e0e48u;
}
