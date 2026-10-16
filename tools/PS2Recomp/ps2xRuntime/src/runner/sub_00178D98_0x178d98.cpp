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

// Function: sub_00178D98
// Address: 0x178d98 - 0x178e40
void sub_00178D98_0x178d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178D98_0x178d98");
#endif

    switch (ctx->pc) {
        case 0x178dc0u: goto label_178dc0;
        case 0x178e1cu: goto label_178e1c;
        default: break;
    }

    ctx->pc = 0x178d98u;

    // 0x178d98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x178d98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x178d9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x178d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x178da0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x178da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x178da4: 0x249000a4  addiu       $s0, $a0, 0xA4
    ctx->pc = 0x178da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 164));
    // 0x178da8: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x178da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x178dac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x178dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x178db0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x178DB0u;
    {
        const bool branch_taken_0x178db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x178db0) {
            ctx->pc = 0x178DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178DB0u;
            // 0x178db4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178DDCu;
            goto label_178ddc;
        }
    }
    ctx->pc = 0x178DB8u;
    // 0x178db8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x178db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x178dbc: 0x0  nop
    ctx->pc = 0x178dbcu;
    // NOP
label_178dc0:
    // 0x178dc0: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x178DC0u;
    {
        const bool branch_taken_0x178dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x178dc0) {
            ctx->pc = 0x178DDCu;
            goto label_178ddc;
        }
    }
    ctx->pc = 0x178DC8u;
    // 0x178dc8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x178dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178dcc: 0x0  nop
    ctx->pc = 0x178dccu;
    // NOP
    // 0x178dd0: 0x5480fffb  bnel        $a0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x178DD0u;
    {
        const bool branch_taken_0x178dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x178dd0) {
            ctx->pc = 0x178DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178DD0u;
            // 0x178dd4: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178DC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_178dc0;
        }
    }
    ctx->pc = 0x178DD8u;
    // 0x178dd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x178dd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178ddc:
    // 0x178ddc: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x178DDCu;
    {
        const bool branch_taken_0x178ddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x178ddc) {
            ctx->pc = 0x178DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x178DDCu;
            // 0x178de0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x178E2Cu;
            goto label_178e2c;
        }
    }
    ctx->pc = 0x178DE4u;
    // 0x178de4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x178de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x178de8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178DE8u;
    {
        const bool branch_taken_0x178de8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DE8u;
        // 0x178dec: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178de8) {
            ctx->pc = 0x178DF8u;
            goto label_178df8;
        }
    }
    ctx->pc = 0x178DF0u;
    // 0x178df0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178DF0u;
    {
        const bool branch_taken_0x178df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178DF0u;
        // 0x178df4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178df0) {
            ctx->pc = 0x178DFCu;
            goto label_178dfc;
        }
    }
    ctx->pc = 0x178DF8u;
label_178df8:
    // 0x178df8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x178df8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_178dfc:
    // 0x178dfc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x178dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x178e00: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x178E00u;
    {
        const bool branch_taken_0x178e00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x178E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E00u;
        // 0x178e04: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e00) {
            ctx->pc = 0x178E10u;
            goto label_178e10;
        }
    }
    ctx->pc = 0x178E08u;
    // 0x178e08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x178E08u;
    {
        const bool branch_taken_0x178e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x178E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E08u;
        // 0x178e0c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x178e08) {
            ctx->pc = 0x178E14u;
            goto label_178e14;
        }
    }
    ctx->pc = 0x178E10u;
label_178e10:
    // 0x178e10: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x178e10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_178e14:
    // 0x178e14: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x178E14u;
    SET_GPR_U32(ctx, 31, 0x178E1Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x178E14u, 0x178E1Cu)) {
        return;
    }
    ctx->pc = 0x178E1Cu;
label_178e1c:
    // 0x178e1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x178e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x178e20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x178e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x178e24: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x178e24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x178e28: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x178e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_178e2c:
    // 0x178e2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x178e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x178e30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x178e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x178e34: 0x3e00008  jr          $ra
    ctx->pc = 0x178E34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x178E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178E34u;
        // 0x178e38: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178E34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178E3Cu;
    // 0x178e3c: 0x0  nop
    ctx->pc = 0x178e3cu;
    // NOP
    ctx->pc = 0x178e40u;
}
