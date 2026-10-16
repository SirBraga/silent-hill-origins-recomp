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

// Function: sub_00264DD8
// Address: 0x264dd8 - 0x264e90
void sub_00264DD8_0x264dd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00264DD8_0x264dd8");
#endif

    switch (ctx->pc) {
        case 0x264dd8u: goto label_264dd8;
        case 0x264ddcu: goto label_264ddc;
        case 0x264de0u: goto label_264de0;
        case 0x264de4u: goto label_264de4;
        case 0x264de8u: goto label_264de8;
        case 0x264decu: goto label_264dec;
        case 0x264df0u: goto label_264df0;
        case 0x264df4u: goto label_264df4;
        case 0x264df8u: goto label_264df8;
        case 0x264dfcu: goto label_264dfc;
        case 0x264e00u: goto label_264e00;
        case 0x264e04u: goto label_264e04;
        case 0x264e08u: goto label_264e08;
        case 0x264e0cu: goto label_264e0c;
        case 0x264e10u: goto label_264e10;
        case 0x264e14u: goto label_264e14;
        case 0x264e18u: goto label_264e18;
        case 0x264e1cu: goto label_264e1c;
        case 0x264e20u: goto label_264e20;
        case 0x264e24u: goto label_264e24;
        case 0x264e28u: goto label_264e28;
        case 0x264e2cu: goto label_264e2c;
        case 0x264e30u: goto label_264e30;
        case 0x264e34u: goto label_264e34;
        case 0x264e38u: goto label_264e38;
        case 0x264e3cu: goto label_264e3c;
        case 0x264e40u: goto label_264e40;
        case 0x264e44u: goto label_264e44;
        case 0x264e48u: goto label_264e48;
        case 0x264e4cu: goto label_264e4c;
        case 0x264e50u: goto label_264e50;
        case 0x264e54u: goto label_264e54;
        case 0x264e58u: goto label_264e58;
        case 0x264e5cu: goto label_264e5c;
        case 0x264e60u: goto label_264e60;
        case 0x264e64u: goto label_264e64;
        case 0x264e68u: goto label_264e68;
        case 0x264e6cu: goto label_264e6c;
        case 0x264e70u: goto label_264e70;
        case 0x264e74u: goto label_264e74;
        case 0x264e78u: goto label_264e78;
        case 0x264e7cu: goto label_264e7c;
        case 0x264e80u: goto label_264e80;
        case 0x264e84u: goto label_264e84;
        case 0x264e88u: goto label_264e88;
        case 0x264e8cu: goto label_264e8c;
        default: break;
    }

    ctx->pc = 0x264dd8u;

label_264dd8:
    // 0x264dd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_264ddc:
    // 0x264ddc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x264ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_264de0:
    // 0x264de0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x264de0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_264de4:
    // 0x264de4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x264de4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264de8:
    // 0x264de8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264de8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_264dec:
    // 0x264dec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264decu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_264df0:
    // 0x264df0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x264df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_264df4:
    // 0x264df4: 0x8e710000  lw          $s1, 0x0($s3)
    ctx->pc = 0x264df4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_264df8:
    // 0x264df8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x264df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264dfc:
    // 0x264dfc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_264e00:
    if (ctx->pc == 0x264E00u) {
        ctx->pc = 0x264E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DFCu;
        // 0x264e00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E04u;
        goto label_264e04;
    }
    ctx->pc = 0x264DFCu;
    {
        const bool branch_taken_0x264dfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264DFCu;
        // 0x264e00: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264dfc) {
            ctx->pc = 0x264E5Cu;
            goto label_264e5c;
        }
    }
    ctx->pc = 0x264E04u;
label_264e04:
    // 0x264e04: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x264e04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_264e08:
    // 0x264e08: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x264e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_264e0c:
    // 0x264e0c: 0x539021  addu        $s2, $v0, $s3
    ctx->pc = 0x264e0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_264e10:
    // 0x264e10: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x264e10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_264e14:
    // 0x264e14: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_264e18:
    if (ctx->pc == 0x264E18u) {
        ctx->pc = 0x264E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E14u;
        // 0x264e18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E1Cu;
        goto label_264e1c;
    }
    ctx->pc = 0x264E14u;
    {
        const bool branch_taken_0x264e14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E14u;
        // 0x264e18: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e14) {
            ctx->pc = 0x264E50u;
            goto label_264e50;
        }
    }
    ctx->pc = 0x264E1Cu;
label_264e1c:
    // 0x264e1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x264e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_264e20:
    // 0x264e20: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_264e24:
    if (ctx->pc == 0x264E24u) {
        ctx->pc = 0x264E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E20u;
        // 0x264e24: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E28u;
        goto label_264e28;
    }
    ctx->pc = 0x264E20u;
    {
        const bool branch_taken_0x264e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264e20) {
            ctx->pc = 0x264E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264E20u;
            // 0x264e24: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264E4Cu;
            goto label_264e4c;
        }
    }
    ctx->pc = 0x264E28u;
label_264e28:
    // 0x264e28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x264e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_264e2c:
    // 0x264e2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_264e30:
    if (ctx->pc == 0x264E30u) {
        ctx->pc = 0x264E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E2Cu;
        // 0x264e30: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E34u;
        goto label_264e34;
    }
    ctx->pc = 0x264E2Cu;
    {
        const bool branch_taken_0x264e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x264e2c) {
            ctx->pc = 0x264E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x264E2Cu;
            // 0x264e30: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x264E4Cu;
            goto label_264e4c;
        }
    }
    ctx->pc = 0x264E34u;
label_264e34:
    // 0x264e34: 0xc098e22  jal         func_263888
label_264e38:
    if (ctx->pc == 0x264E38u) {
        ctx->pc = 0x264E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E34u;
        // 0x264e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E3Cu;
        goto label_264e3c;
    }
    ctx->pc = 0x264E34u;
    SET_GPR_U32(ctx, 31, 0x264E3Cu);
    ctx->pc = 0x264E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264E34u;
    // 0x264e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x263888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263888u, 0x264E34u, 0x264E3Cu)) {
        return;
    }
    ctx->pc = 0x264E3Cu;
label_264e3c:
    // 0x264e3c: 0xc093356  jal         func_24CD58
label_264e40:
    if (ctx->pc == 0x264E40u) {
        ctx->pc = 0x264E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E3Cu;
        // 0x264e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E44u;
        goto label_264e44;
    }
    ctx->pc = 0x264E3Cu;
    SET_GPR_U32(ctx, 31, 0x264E44u);
    ctx->pc = 0x264E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x264E3Cu;
    // 0x264e40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CD58u, 0x264E3Cu, 0x264E44u)) {
        return;
    }
    ctx->pc = 0x264E44u;
label_264e44:
    // 0x264e44: 0x10000002  b           . + 4 + (0x2 << 2)
label_264e48:
    if (ctx->pc == 0x264E48u) {
        ctx->pc = 0x264E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E44u;
        // 0x264e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E4Cu;
        goto label_264e4c;
    }
    ctx->pc = 0x264E44u;
    {
        const bool branch_taken_0x264e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E44u;
        // 0x264e48: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e44) {
            ctx->pc = 0x264E50u;
            goto label_264e50;
        }
    }
    ctx->pc = 0x264E4Cu;
label_264e4c:
    // 0x264e4c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x264e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_264e50:
    // 0x264e50: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x264e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_264e54:
    // 0x264e54: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_264e58:
    if (ctx->pc == 0x264E58u) {
        ctx->pc = 0x264E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E54u;
        // 0x264e58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E5Cu;
        goto label_264e5c;
    }
    ctx->pc = 0x264E54u;
    {
        const bool branch_taken_0x264e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x264E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E54u;
        // 0x264e58: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264e54) {
            ctx->pc = 0x264E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_264e10;
        }
    }
    ctx->pc = 0x264E5Cu;
label_264e5c:
    // 0x264e5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x264e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_264e60:
    // 0x264e60: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x264e60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_264e64:
    // 0x264e64: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x264e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_264e68:
    // 0x264e68: 0x60f809  jalr        $v1
label_264e6c:
    if (ctx->pc == 0x264E6Cu) {
        ctx->pc = 0x264E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E68u;
        // 0x264e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E70u;
        goto label_264e70;
    }
    ctx->pc = 0x264E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x264E70u);
        ctx->pc = 0x264E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E68u;
        // 0x264e6c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264E68u, 0x264E70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x264E70u;
label_264e70:
    // 0x264e70: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x264e70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_264e74:
    // 0x264e74: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x264e74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_264e78:
    // 0x264e78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x264e78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_264e7c:
    // 0x264e7c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x264e7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_264e80:
    // 0x264e80: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264e80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_264e84:
    // 0x264e84: 0x3e00008  jr          $ra
label_264e88:
    if (ctx->pc == 0x264E88u) {
        ctx->pc = 0x264E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E84u;
        // 0x264e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x264E8Cu;
        goto label_264e8c;
    }
    ctx->pc = 0x264E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x264E84u;
        // 0x264e88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x264E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x264E8Cu;
label_264e8c:
    // 0x264e8c: 0x0  nop
    ctx->pc = 0x264e8cu;
    // NOP
    ctx->pc = 0x264e90u;
}
