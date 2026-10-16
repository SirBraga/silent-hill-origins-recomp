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

// Function: sub_002E2D78
// Address: 0x2e2d78 - 0x2e2e48
void sub_002E2D78_0x2e2d78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D78_0x2e2d78");
#endif

    switch (ctx->pc) {
        case 0x2e2dacu: goto label_2e2dac;
        case 0x2e2dc0u: goto label_2e2dc0;
        case 0x2e2de0u: goto label_2e2de0;
        case 0x2e2df0u: goto label_2e2df0;
        case 0x2e2e00u: goto label_2e2e00;
        case 0x2e2e18u: goto label_2e2e18;
        default: break;
    }

    ctx->pc = 0x2e2d78u;

    // 0x2e2d78: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e2d78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e2d7c: 0x3c060071  lui         $a2, 0x71
    ctx->pc = 0x2e2d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)113 << 16));
    // 0x2e2d80: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x2e2d80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x2e2d84: 0x8f849068  lw          $a0, -0x6F98($gp)
    ctx->pc = 0x2e2d84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938728)));
    // 0x2e2d88: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x2e2d88u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x2e2d8c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e2d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e2d90: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e2d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e2d94: 0x24c68248  addiu       $a2, $a2, -0x7DB8
    ctx->pc = 0x2e2d94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935112));
    // 0x2e2d98: 0x24e782a8  addiu       $a3, $a3, -0x7D58
    ctx->pc = 0x2e2d98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935208));
    // 0x2e2d9c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2e2d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e2da0: 0x27889058  addiu       $t0, $gp, -0x6FA8
    ctx->pc = 0x2e2da0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938712));
    // 0x2e2da4: 0xc0b8f16  jal         func_2E3C58
    ctx->pc = 0x2E2DA4u;
    SET_GPR_U32(ctx, 31, 0x2E2DACu);
    ctx->pc = 0x2E2DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DA4u;
    // 0x2e2da8: 0x3529080b  ori         $t1, $t1, 0x80B (Delay Slot)
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)2059);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3C58u, 0x2E2DA4u, 0x2E2DACu)) {
        return;
    }
    ctx->pc = 0x2E2DACu;
label_2e2dac:
    // 0x2e2dac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e2dacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2db0: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2E2DB0u;
    {
        const bool branch_taken_0x2e2db0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DB0u;
        // 0x2e2db4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2db0) {
            ctx->pc = 0x2E2E1Cu;
            goto label_2e2e1c;
        }
    }
    ctx->pc = 0x2E2DB8u;
    // 0x2e2db8: 0xc0b89a2  jal         func_2E2688
    ctx->pc = 0x2E2DB8u;
    SET_GPR_U32(ctx, 31, 0x2E2DC0u);
    ctx->pc = 0x2E2DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DB8u;
    // 0x2e2dbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E2688u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E2688u, 0x2E2DB8u, 0x2E2DC0u)) {
        return;
    }
    ctx->pc = 0x2E2DC0u;
label_2e2dc0:
    // 0x2e2dc0: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e2dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e2dc4: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e2dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e2dc8: 0x24a55218  addiu       $a1, $a1, 0x5218
    ctx->pc = 0x2e2dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21016));
    // 0x2e2dcc: 0x24e752d8  addiu       $a3, $a3, 0x52D8
    ctx->pc = 0x2e2dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 21208));
    // 0x2e2dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e2dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2dd4: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2e2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e2dd8: 0xc0b8e68  jal         func_2E39A0
    ctx->pc = 0x2E2DD8u;
    SET_GPR_U32(ctx, 31, 0x2E2DE0u);
    ctx->pc = 0x2E2DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DD8u;
    // 0x2e2ddc: 0x24080009  addiu       $t0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E39A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E39A0u, 0x2E2DD8u, 0x2E2DE0u)) {
        return;
    }
    ctx->pc = 0x2E2DE0u;
label_2e2de0:
    // 0x2e2de0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E2DE0u;
    {
        const bool branch_taken_0x2e2de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e2de0) {
            ctx->pc = 0x2E2E10u;
            goto label_2e2e10;
        }
    }
    ctx->pc = 0x2E2DE8u;
    // 0x2e2de8: 0xc0ba256  jal         func_2E8958
    ctx->pc = 0x2E2DE8u;
    SET_GPR_U32(ctx, 31, 0x2E2DF0u);
    ctx->pc = 0x2E8958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8958u, 0x2E2DE8u, 0x2E2DF0u)) {
        return;
    }
    ctx->pc = 0x2E2DF0u;
label_2e2df0:
    // 0x2e2df0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2DF0u;
    {
        const bool branch_taken_0x2e2df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2DF0u;
        // 0x2e2df4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2df0) {
            ctx->pc = 0x2E2E10u;
            goto label_2e2e10;
        }
    }
    ctx->pc = 0x2E2DF8u;
    // 0x2e2df8: 0xc0b8f7c  jal         func_2E3DF0
    ctx->pc = 0x2E2DF8u;
    SET_GPR_U32(ctx, 31, 0x2E2E00u);
    ctx->pc = 0x2E2DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2DF8u;
    // 0x2e2dfc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E3DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3DF0u, 0x2E2DF8u, 0x2E2E00u)) {
        return;
    }
    ctx->pc = 0x2E2E00u;
label_2e2e00:
    // 0x2e2e00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e2e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e2e04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e2e04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e2e08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2E08u;
    {
        const bool branch_taken_0x2e2e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E08u;
        // 0x2e2e0c: 0xaf838c40  sw          $v1, -0x73C0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2e08) {
            ctx->pc = 0x2E2E1Cu;
            goto label_2e2e1c;
        }
    }
    ctx->pc = 0x2E2E10u;
label_2e2e10:
    // 0x2e2e10: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2E2E10u;
    SET_GPR_U32(ctx, 31, 0x2E2E18u);
    ctx->pc = 0x2E2E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2E10u;
    // 0x2e2e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2E2E10u, 0x2E2E18u)) {
        return;
    }
    ctx->pc = 0x2E2E18u;
label_2e2e18:
    // 0x2e2e18: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e2e18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e2e1c:
    // 0x2e2e1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e2e1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e2e20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2e20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2e24: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2E24u;
        // 0x2e2e28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2E24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2E2Cu;
    // 0x2e2e2c: 0x0  nop
    ctx->pc = 0x2e2e2cu;
    // NOP
    // 0x2e2e30: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2e2e30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2e2e34: 0x0  nop
    ctx->pc = 0x2e2e34u;
    // NOP
    // 0x2e2e38: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2e2e38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2e2e3c: 0x0  nop
    ctx->pc = 0x2e2e3cu;
    // NOP
    // 0x2e2e40: 0xac820088  sw          $v0, 0x88($a0)
    ctx->pc = 0x2e2e40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 2));
    // 0x2e2e44: 0x0  nop
    ctx->pc = 0x2e2e44u;
    // NOP
    ctx->pc = 0x2e2e48u;
}
