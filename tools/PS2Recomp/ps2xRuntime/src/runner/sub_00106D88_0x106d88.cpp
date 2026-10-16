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

// Function: sub_00106D88
// Address: 0x106d88 - 0x106e90
void sub_00106D88_0x106d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00106D88_0x106d88");
#endif

    switch (ctx->pc) {
        case 0x106dd8u: goto label_106dd8;
        case 0x106de8u: goto label_106de8;
        case 0x106df0u: goto label_106df0;
        case 0x106e10u: goto label_106e10;
        case 0x106e50u: goto label_106e50;
        case 0x106e74u: goto label_106e74;
        default: break;
    }

    ctx->pc = 0x106d88u;

    // 0x106d88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x106d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x106d8c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x106d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x106d90: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x106d90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x106d94: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x106d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x106d98: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x106d98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106d9c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x106d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x106da0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x106da0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x106da4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x106da4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x106da8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x106da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x106dac: 0x249046a0  addiu       $s0, $a0, 0x46A0
    ctx->pc = 0x106dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 18080));
    // 0x106db0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x106db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x106db4: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x106db4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x106db8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x106db8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dbc: 0x24429938  addiu       $v0, $v0, -0x66C8
    ctx->pc = 0x106dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940984));
    // 0x106dc0: 0x24639958  addiu       $v1, $v1, -0x66A8
    ctx->pc = 0x106dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941016));
    // 0x106dc4: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x106dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x106dc8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x106dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x106dcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x106dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106dd0: 0xc07fcce  jal         func_1FF338
    ctx->pc = 0x106DD0u;
    SET_GPR_U32(ctx, 31, 0x106DD8u);
    ctx->pc = 0x106DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DD0u;
    // 0x106dd4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF338u, 0x106DD0u, 0x106DD8u)) {
        return;
    }
    ctx->pc = 0x106DD8u;
label_106dd8:
    // 0x106dd8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x106DD8u;
    {
        const bool branch_taken_0x106dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106DD8u;
        // 0x106ddc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106dd8) {
            ctx->pc = 0x106DE8u;
            goto label_106de8;
        }
    }
    ctx->pc = 0x106DE0u;
    // 0x106de0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x106DE0u;
    SET_GPR_U32(ctx, 31, 0x106DE8u);
    ctx->pc = 0x106DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DE0u;
    // 0x106de4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x106DE0u, 0x106DE8u)) {
        return;
    }
    ctx->pc = 0x106DE8u;
label_106de8:
    // 0x106de8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x106DE8u;
    SET_GPR_U32(ctx, 31, 0x106DF0u);
    ctx->pc = 0x106DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106DE8u;
    // 0x106dec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x106DE8u, 0x106DF0u)) {
        return;
    }
    ctx->pc = 0x106DF0u;
label_106df0:
    // 0x106df0: 0x26300044  addiu       $s0, $s1, 0x44
    ctx->pc = 0x106df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x106df4: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x106df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x106df8: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x106df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106dfc: 0x244299c0  addiu       $v0, $v0, -0x6640
    ctx->pc = 0x106dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941120));
    // 0x106e00: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x106E00u;
    {
        const bool branch_taken_0x106e00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E00u;
        // 0x106e04: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e00) {
            ctx->pc = 0x106E68u;
            goto label_106e68;
        }
    }
    ctx->pc = 0x106E08u;
    // 0x106e08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x106e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x106e0c: 0x0  nop
    ctx->pc = 0x106e0cu;
    // NOP
label_106e10:
    // 0x106e10: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x106E10u;
    {
        const bool branch_taken_0x106e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x106e10) {
            ctx->pc = 0x106E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E10u;
            // 0x106e14: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E60u;
            goto label_106e60;
        }
    }
    ctx->pc = 0x106E18u;
    // 0x106e18: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x106e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x106e1c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106E1Cu;
    {
        const bool branch_taken_0x106e1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E1Cu;
        // 0x106e20: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e1c) {
            ctx->pc = 0x106E2Cu;
            goto label_106e2c;
        }
    }
    ctx->pc = 0x106E24u;
    // 0x106e24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106E24u;
    {
        const bool branch_taken_0x106e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E24u;
        // 0x106e28: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e24) {
            ctx->pc = 0x106E30u;
            goto label_106e30;
        }
    }
    ctx->pc = 0x106E2Cu;
label_106e2c:
    // 0x106e2c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x106e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_106e30:
    // 0x106e30: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x106e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x106e34: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x106E34u;
    {
        const bool branch_taken_0x106e34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x106E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E34u;
        // 0x106e38: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e34) {
            ctx->pc = 0x106E44u;
            goto label_106e44;
        }
    }
    ctx->pc = 0x106E3Cu;
    // 0x106e3c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x106E3Cu;
    {
        const bool branch_taken_0x106e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E3Cu;
        // 0x106e40: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106e3c) {
            ctx->pc = 0x106E48u;
            goto label_106e48;
        }
    }
    ctx->pc = 0x106E44u;
label_106e44:
    // 0x106e44: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x106e44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_106e48:
    // 0x106e48: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x106E48u;
    SET_GPR_U32(ctx, 31, 0x106E50u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x106E48u, 0x106E50u)) {
        return;
    }
    ctx->pc = 0x106E50u;
label_106e50:
    // 0x106e50: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x106e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x106e54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x106e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x106e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x106e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x106e5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x106e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_106e60:
    // 0x106e60: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x106E60u;
    {
        const bool branch_taken_0x106e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x106e60) {
            ctx->pc = 0x106E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x106E60u;
            // 0x106e64: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x106E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_106e10;
        }
    }
    ctx->pc = 0x106E68u;
label_106e68:
    // 0x106e68: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x106e68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106e6c: 0xc04f084  jal         func_13C210
    ctx->pc = 0x106E6Cu;
    SET_GPR_U32(ctx, 31, 0x106E74u);
    ctx->pc = 0x106E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106E6Cu;
    // 0x106e70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x106E6Cu, 0x106E74u)) {
        return;
    }
    ctx->pc = 0x106E74u;
label_106e74:
    // 0x106e74: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x106e74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106e78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x106e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106e7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x106e7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106e80: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x106e80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106e84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x106e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106e88: 0x3e00008  jr          $ra
    ctx->pc = 0x106E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106E88u;
        // 0x106e8c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106E88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106E90u;
}
