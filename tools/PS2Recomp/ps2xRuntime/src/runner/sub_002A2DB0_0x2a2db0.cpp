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

// Function: sub_002A2DB0
// Address: 0x2a2db0 - 0x2a2e48
void sub_002A2DB0_0x2a2db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2DB0_0x2a2db0");
#endif

    switch (ctx->pc) {
        case 0x2a2db0u: goto label_2a2db0;
        case 0x2a2db4u: goto label_2a2db4;
        case 0x2a2db8u: goto label_2a2db8;
        case 0x2a2dbcu: goto label_2a2dbc;
        case 0x2a2dc0u: goto label_2a2dc0;
        case 0x2a2dc4u: goto label_2a2dc4;
        case 0x2a2dc8u: goto label_2a2dc8;
        case 0x2a2dccu: goto label_2a2dcc;
        case 0x2a2dd0u: goto label_2a2dd0;
        case 0x2a2dd4u: goto label_2a2dd4;
        case 0x2a2dd8u: goto label_2a2dd8;
        case 0x2a2ddcu: goto label_2a2ddc;
        case 0x2a2de0u: goto label_2a2de0;
        case 0x2a2de4u: goto label_2a2de4;
        case 0x2a2de8u: goto label_2a2de8;
        case 0x2a2decu: goto label_2a2dec;
        case 0x2a2df0u: goto label_2a2df0;
        case 0x2a2df4u: goto label_2a2df4;
        case 0x2a2df8u: goto label_2a2df8;
        case 0x2a2dfcu: goto label_2a2dfc;
        case 0x2a2e00u: goto label_2a2e00;
        case 0x2a2e04u: goto label_2a2e04;
        case 0x2a2e08u: goto label_2a2e08;
        case 0x2a2e0cu: goto label_2a2e0c;
        case 0x2a2e10u: goto label_2a2e10;
        case 0x2a2e14u: goto label_2a2e14;
        case 0x2a2e18u: goto label_2a2e18;
        case 0x2a2e1cu: goto label_2a2e1c;
        case 0x2a2e20u: goto label_2a2e20;
        case 0x2a2e24u: goto label_2a2e24;
        case 0x2a2e28u: goto label_2a2e28;
        case 0x2a2e2cu: goto label_2a2e2c;
        case 0x2a2e30u: goto label_2a2e30;
        case 0x2a2e34u: goto label_2a2e34;
        case 0x2a2e38u: goto label_2a2e38;
        case 0x2a2e3cu: goto label_2a2e3c;
        case 0x2a2e40u: goto label_2a2e40;
        case 0x2a2e44u: goto label_2a2e44;
        default: break;
    }

    ctx->pc = 0x2a2db0u;

label_2a2db0:
    // 0x2a2db0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a2db4:
    // 0x2a2db4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a2db8:
    // 0x2a2db8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a2dbc:
    // 0x2a2dbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a2dbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2dc0:
    // 0x2a2dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2dc4:
    // 0x2a2dc4: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x2a2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_2a2dc8:
    // 0x2a2dc8: 0x4410019  bgez        $v0, . + 4 + (0x19 << 2)
label_2a2dcc:
    if (ctx->pc == 0x2A2DCCu) {
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DD0u;
        goto label_2a2dd0;
    }
    ctx->pc = 0x2A2DC8u;
    {
        const bool branch_taken_0x2a2dc8 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A2DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DC8u;
        // 0x2a2dcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2dc8) {
            ctx->pc = 0x2A2E30u;
            goto label_2a2e30;
        }
    }
    ctx->pc = 0x2A2DD0u;
label_2a2dd0:
    // 0x2a2dd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2a2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a2dd4:
    // 0x2a2dd4: 0x2402fff3  addiu       $v0, $zero, -0xD
    ctx->pc = 0x2a2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
label_2a2dd8:
    // 0x2a2dd8: 0x8e240050  lw          $a0, 0x50($s1)
    ctx->pc = 0x2a2dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_2a2ddc:
    // 0x2a2ddc: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2a2ddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2de0:
    // 0x2a2de0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2a2de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2a2de4:
    // 0x2a2de4: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x2a2de4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
label_2a2de8:
    // 0x2a2de8: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x2a2de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_2a2dec:
    // 0x2a2dec: 0x8c820044  lw          $v0, 0x44($a0)
    ctx->pc = 0x2a2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_2a2df0:
    // 0x2a2df0: 0xfe300040  sd          $s0, 0x40($s1)
    ctx->pc = 0x2a2df0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 16));
label_2a2df4:
    // 0x2a2df4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a2df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2df8:
    // 0x2a2df8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2a2df8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2a2dfc:
    // 0x2a2dfc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2dfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e00:
    // 0x2a2e00: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2a2e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2a2e04:
    // 0x2a2e04: 0x40f809  jalr        $v0
label_2a2e08:
    if (ctx->pc == 0x2A2E08u) {
        ctx->pc = 0x2A2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E04u;
        // 0x2a2e08: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E0Cu;
        goto label_2a2e0c;
    }
    ctx->pc = 0x2A2E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2E0Cu);
        ctx->pc = 0x2A2E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E04u;
        // 0x2a2e08: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2E04u, 0x2A2E0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2E0Cu;
label_2a2e0c:
    // 0x2a2e0c: 0x54500008  bnel        $v0, $s0, . + 4 + (0x8 << 2)
label_2a2e10:
    if (ctx->pc == 0x2A2E10u) {
        ctx->pc = 0x2A2E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E0Cu;
        // 0x2a2e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E14u;
        goto label_2a2e14;
    }
    ctx->pc = 0x2A2E0Cu;
    {
        const bool branch_taken_0x2a2e0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2a2e0c) {
            ctx->pc = 0x2A2E10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2E0Cu;
            // 0x2a2e10: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2E30u;
            goto label_2a2e30;
        }
    }
    ctx->pc = 0x2A2E14u;
label_2a2e14:
    // 0x2a2e14: 0xc0c489a  jal         func_312268
label_2a2e18:
    if (ctx->pc == 0x2A2E18u) {
        ctx->pc = 0x2A2E1Cu;
        goto label_2a2e1c;
    }
    ctx->pc = 0x2A2E14u;
    SET_GPR_U32(ctx, 31, 0x2A2E1Cu);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A2E14u, 0x2A2E1Cu)) {
        return;
    }
    ctx->pc = 0x2A2E1Cu;
label_2a2e1c:
    // 0x2a2e1c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2a2e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2e20:
    // 0x2a2e20: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x2a2e20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2a2e24:
    // 0x2a2e24: 0x14830002  bne         $a0, $v1, . + 4 + (0x2 << 2)
label_2a2e28:
    if (ctx->pc == 0x2A2E28u) {
        ctx->pc = 0x2A2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E24u;
        // 0x2a2e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E2Cu;
        goto label_2a2e2c;
    }
    ctx->pc = 0x2A2E24u;
    {
        const bool branch_taken_0x2a2e24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2A2E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E24u;
        // 0x2a2e28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2e24) {
            ctx->pc = 0x2A2E30u;
            goto label_2a2e30;
        }
    }
    ctx->pc = 0x2A2E2Cu;
label_2a2e2c:
    // 0x2a2e2c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2a2e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a2e30:
    // 0x2a2e30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2e34:
    // 0x2a2e34: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2e34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2e38:
    // 0x2a2e38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2e38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2e3c:
    // 0x2a2e3c: 0x3e00008  jr          $ra
label_2a2e40:
    if (ctx->pc == 0x2A2E40u) {
        ctx->pc = 0x2A2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E3Cu;
        // 0x2a2e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2E44u;
        goto label_2a2e44;
    }
    ctx->pc = 0x2A2E3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2E3Cu;
        // 0x2a2e40: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2E3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A2E44u;
label_2a2e44:
    // 0x2a2e44: 0x0  nop
    ctx->pc = 0x2a2e44u;
    // NOP
    ctx->pc = 0x2a2e48u;
}
