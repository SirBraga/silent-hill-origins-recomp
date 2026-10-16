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

// Function: sub_00179DA0
// Address: 0x179da0 - 0x179ff8
void sub_00179DA0_0x179da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179DA0_0x179da0");
#endif

    switch (ctx->pc) {
        case 0x179dd8u: goto label_179dd8;
        case 0x179e18u: goto label_179e18;
        case 0x179e2cu: goto label_179e2c;
        case 0x179e40u: goto label_179e40;
        case 0x179e54u: goto label_179e54;
        case 0x179e68u: goto label_179e68;
        case 0x179e7cu: goto label_179e7c;
        case 0x179e90u: goto label_179e90;
        case 0x179ea4u: goto label_179ea4;
        case 0x179eb8u: goto label_179eb8;
        case 0x179eccu: goto label_179ecc;
        case 0x179ee0u: goto label_179ee0;
        case 0x179ef4u: goto label_179ef4;
        case 0x179f08u: goto label_179f08;
        case 0x179f1cu: goto label_179f1c;
        case 0x179f30u: goto label_179f30;
        case 0x179f44u: goto label_179f44;
        case 0x179f58u: goto label_179f58;
        case 0x179fb0u: goto label_179fb0;
        case 0x179fb8u: goto label_179fb8;
        case 0x179fc0u: goto label_179fc0;
        case 0x179fdcu: goto label_179fdc;
        default: break;
    }

    ctx->pc = 0x179da0u;

    // 0x179da0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x179da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179da4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x179da4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x179da8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x179da8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x179dac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x179dacu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179db0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x179db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x179db4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x179db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x179db8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x179db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x179dbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x179dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x179dc0: 0x10400086  beqz        $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x179DC0u;
    {
        const bool branch_taken_0x179dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DC0u;
        // 0x179dc4: 0x26230014  addiu       $v1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dc0) {
            ctx->pc = 0x179FDCu;
            goto label_179fdc;
        }
    }
    ctx->pc = 0x179DC8u;
    // 0x179dc8: 0x8c730004  lw          $s3, 0x4($v1)
    ctx->pc = 0x179dc8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x179dcc: 0x1260007f  beqz        $s3, . + 4 + (0x7F << 2)
    ctx->pc = 0x179DCCu;
    {
        const bool branch_taken_0x179dcc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DCCu;
        // 0x179dd0: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179dcc) {
            ctx->pc = 0x179FCCu;
            goto label_179fcc;
        }
    }
    ctx->pc = 0x179DD4u;
    // 0x179dd4: 0x0  nop
    ctx->pc = 0x179dd4u;
    // NOP
label_179dd8:
    // 0x179dd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x179dd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ddc: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x179ddcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179de0: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x179de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x179de4: 0x2c620012  sltiu       $v0, $v1, 0x12
    ctx->pc = 0x179de4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x179de8: 0x1040005c  beqz        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x179DE8u;
    {
        const bool branch_taken_0x179de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x179DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179DE8u;
        // 0x179dec: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179de8) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179DF0u;
    // 0x179df0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x179df0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x179df4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x179df4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x179df8: 0x24426e40  addiu       $v0, $v0, 0x6E40
    ctx->pc = 0x179df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28224));
    // 0x179dfc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x179dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x179e00: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x179e00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x179e04: 0x800008  jr          $a0
    ctx->pc = 0x179E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x179E0Cu: goto label_179e0c;
            case 0x179E20u: goto label_179e20;
            case 0x179E34u: goto label_179e34;
            case 0x179E48u: goto label_179e48;
            case 0x179E5Cu: goto label_179e5c;
            case 0x179E70u: goto label_179e70;
            case 0x179E84u: goto label_179e84;
            case 0x179E98u: goto label_179e98;
            case 0x179EACu: goto label_179eac;
            case 0x179EC0u: goto label_179ec0;
            case 0x179ED4u: goto label_179ed4;
            case 0x179EE8u: goto label_179ee8;
            case 0x179EFCu: goto label_179efc;
            case 0x179F10u: goto label_179f10;
            case 0x179F24u: goto label_179f24;
            case 0x179F38u: goto label_179f38;
            case 0x179F4Cu: goto label_179f4c;
            case 0x179F5Cu: goto label_179f5c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179E04u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x179E0Cu;
label_179e0c:
    // 0x179e0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e10: 0xc05e9be  jal         func_17A6F8
    ctx->pc = 0x179E10u;
    SET_GPR_U32(ctx, 31, 0x179E18u);
    ctx->pc = 0x179E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E10u;
    // 0x179e14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A6F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17A6F8u, 0x179E10u, 0x179E18u)) {
        return;
    }
    ctx->pc = 0x179E18u;
label_179e18:
    // 0x179e18: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x179E18u;
    {
        const bool branch_taken_0x179e18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E18u;
        // 0x179e1c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e18) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E20u;
label_179e20:
    // 0x179e20: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e24: 0xc05e9fa  jal         func_17A7E8
    ctx->pc = 0x179E24u;
    SET_GPR_U32(ctx, 31, 0x179E2Cu);
    ctx->pc = 0x179E28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E24u;
    // 0x179e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A7E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17A7E8u, 0x179E24u, 0x179E2Cu)) {
        return;
    }
    ctx->pc = 0x179E2Cu;
label_179e2c:
    // 0x179e2c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x179E2Cu;
    {
        const bool branch_taken_0x179e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E2Cu;
        // 0x179e30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e2c) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E34u;
label_179e34:
    // 0x179e34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e38: 0xc05ecc8  jal         func_17B320
    ctx->pc = 0x179E38u;
    SET_GPR_U32(ctx, 31, 0x179E40u);
    ctx->pc = 0x179E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E38u;
    // 0x179e3c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B320u, 0x179E38u, 0x179E40u)) {
        return;
    }
    ctx->pc = 0x179E40u;
label_179e40:
    // 0x179e40: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x179E40u;
    {
        const bool branch_taken_0x179e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E40u;
        // 0x179e44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e40) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E48u;
label_179e48:
    // 0x179e48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e4c: 0xc05ea50  jal         func_17A940
    ctx->pc = 0x179E4Cu;
    SET_GPR_U32(ctx, 31, 0x179E54u);
    ctx->pc = 0x179E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E4Cu;
    // 0x179e50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17A940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17A940u, 0x179E4Cu, 0x179E54u)) {
        return;
    }
    ctx->pc = 0x179E54u;
label_179e54:
    // 0x179e54: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x179E54u;
    {
        const bool branch_taken_0x179e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E54u;
        // 0x179e58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e54) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E5Cu;
label_179e5c:
    // 0x179e5c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e60: 0xc05eaa6  jal         func_17AA98
    ctx->pc = 0x179E60u;
    SET_GPR_U32(ctx, 31, 0x179E68u);
    ctx->pc = 0x179E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E60u;
    // 0x179e64: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17AA98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17AA98u, 0x179E60u, 0x179E68u)) {
        return;
    }
    ctx->pc = 0x179E68u;
label_179e68:
    // 0x179e68: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x179E68u;
    {
        const bool branch_taken_0x179e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E68u;
        // 0x179e6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e68) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E70u;
label_179e70:
    // 0x179e70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e74: 0xc05ecf6  jal         func_17B3D8
    ctx->pc = 0x179E74u;
    SET_GPR_U32(ctx, 31, 0x179E7Cu);
    ctx->pc = 0x179E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E74u;
    // 0x179e78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B3D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B3D8u, 0x179E74u, 0x179E7Cu)) {
        return;
    }
    ctx->pc = 0x179E7Cu;
label_179e7c:
    // 0x179e7c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x179E7Cu;
    {
        const bool branch_taken_0x179e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E7Cu;
        // 0x179e80: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e7c) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E84u;
label_179e84:
    // 0x179e84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e88: 0xc05ed22  jal         func_17B488
    ctx->pc = 0x179E88u;
    SET_GPR_U32(ctx, 31, 0x179E90u);
    ctx->pc = 0x179E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E88u;
    // 0x179e8c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B488u, 0x179E88u, 0x179E90u)) {
        return;
    }
    ctx->pc = 0x179E90u;
label_179e90:
    // 0x179e90: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x179E90u;
    {
        const bool branch_taken_0x179e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179E90u;
        // 0x179e94: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179e90) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179E98u;
label_179e98:
    // 0x179e98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179e9c: 0xc05ed32  jal         func_17B4C8
    ctx->pc = 0x179E9Cu;
    SET_GPR_U32(ctx, 31, 0x179EA4u);
    ctx->pc = 0x179EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179E9Cu;
    // 0x179ea0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B4C8u, 0x179E9Cu, 0x179EA4u)) {
        return;
    }
    ctx->pc = 0x179EA4u;
label_179ea4:
    // 0x179ea4: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x179EA4u;
    {
        const bool branch_taken_0x179ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EA4u;
        // 0x179ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ea4) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179EACu;
label_179eac:
    // 0x179eac: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179eacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eb0: 0xc05ed54  jal         func_17B550
    ctx->pc = 0x179EB0u;
    SET_GPR_U32(ctx, 31, 0x179EB8u);
    ctx->pc = 0x179EB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EB0u;
    // 0x179eb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B550u, 0x179EB0u, 0x179EB8u)) {
        return;
    }
    ctx->pc = 0x179EB8u;
label_179eb8:
    // 0x179eb8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x179EB8u;
    {
        const bool branch_taken_0x179eb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EB8u;
        // 0x179ebc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179eb8) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179EC0u;
label_179ec0:
    // 0x179ec0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179ec0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ec4: 0xc05ed60  jal         func_17B580
    ctx->pc = 0x179EC4u;
    SET_GPR_U32(ctx, 31, 0x179ECCu);
    ctx->pc = 0x179EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EC4u;
    // 0x179ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B580u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B580u, 0x179EC4u, 0x179ECCu)) {
        return;
    }
    ctx->pc = 0x179ECCu;
label_179ecc:
    // 0x179ecc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x179ECCu;
    {
        const bool branch_taken_0x179ecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179ECCu;
        // 0x179ed0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ecc) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179ED4u;
label_179ed4:
    // 0x179ed4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ed8: 0xc05ed7c  jal         func_17B5F0
    ctx->pc = 0x179ED8u;
    SET_GPR_U32(ctx, 31, 0x179EE0u);
    ctx->pc = 0x179EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179ED8u;
    // 0x179edc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B5F0u, 0x179ED8u, 0x179EE0u)) {
        return;
    }
    ctx->pc = 0x179EE0u;
label_179ee0:
    // 0x179ee0: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x179EE0u;
    {
        const bool branch_taken_0x179ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EE0u;
        // 0x179ee4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ee0) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179EE8u;
label_179ee8:
    // 0x179ee8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179eec: 0xc05edb0  jal         func_17B6C0
    ctx->pc = 0x179EECu;
    SET_GPR_U32(ctx, 31, 0x179EF4u);
    ctx->pc = 0x179EF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179EECu;
    // 0x179ef0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B6C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B6C0u, 0x179EECu, 0x179EF4u)) {
        return;
    }
    ctx->pc = 0x179EF4u;
label_179ef4:
    // 0x179ef4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x179EF4u;
    {
        const bool branch_taken_0x179ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179EF4u;
        // 0x179ef8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179ef4) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179EFCu;
label_179efc:
    // 0x179efc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f00: 0xc05edf0  jal         func_17B7C0
    ctx->pc = 0x179F00u;
    SET_GPR_U32(ctx, 31, 0x179F08u);
    ctx->pc = 0x179F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F00u;
    // 0x179f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B7C0u, 0x179F00u, 0x179F08u)) {
        return;
    }
    ctx->pc = 0x179F08u;
label_179f08:
    // 0x179f08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x179F08u;
    {
        const bool branch_taken_0x179f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F08u;
        // 0x179f0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f08) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179F10u;
label_179f10:
    // 0x179f10: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f14: 0xc05edc0  jal         func_17B700
    ctx->pc = 0x179F14u;
    SET_GPR_U32(ctx, 31, 0x179F1Cu);
    ctx->pc = 0x179F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F14u;
    // 0x179f18: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B700u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B700u, 0x179F14u, 0x179F1Cu)) {
        return;
    }
    ctx->pc = 0x179F1Cu;
label_179f1c:
    // 0x179f1c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x179F1Cu;
    {
        const bool branch_taken_0x179f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F1Cu;
        // 0x179f20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f1c) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179F24u;
label_179f24:
    // 0x179f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f28: 0xc05edf8  jal         func_17B7E0
    ctx->pc = 0x179F28u;
    SET_GPR_U32(ctx, 31, 0x179F30u);
    ctx->pc = 0x179F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F28u;
    // 0x179f2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B7E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B7E0u, 0x179F28u, 0x179F30u)) {
        return;
    }
    ctx->pc = 0x179F30u;
label_179f30:
    // 0x179f30: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x179F30u;
    {
        const bool branch_taken_0x179f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F30u;
        // 0x179f34: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f30) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179F38u;
label_179f38:
    // 0x179f38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f3c: 0xc05ee22  jal         func_17B888
    ctx->pc = 0x179F3Cu;
    SET_GPR_U32(ctx, 31, 0x179F44u);
    ctx->pc = 0x179F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F3Cu;
    // 0x179f40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B888u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B888u, 0x179F3Cu, 0x179F44u)) {
        return;
    }
    ctx->pc = 0x179F44u;
label_179f44:
    // 0x179f44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x179F44u;
    {
        const bool branch_taken_0x179f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F44u;
        // 0x179f48: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f44) {
            ctx->pc = 0x179F5Cu;
            goto label_179f5c;
        }
    }
    ctx->pc = 0x179F4Cu;
label_179f4c:
    // 0x179f4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x179f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179f50: 0xc05ee34  jal         func_17B8D0
    ctx->pc = 0x179F50u;
    SET_GPR_U32(ctx, 31, 0x179F58u);
    ctx->pc = 0x179F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179F50u;
    // 0x179f54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B8D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B8D0u, 0x179F50u, 0x179F58u)) {
        return;
    }
    ctx->pc = 0x179F58u;
label_179f58:
    // 0x179f58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x179f58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_179f5c:
    // 0x179f5c: 0x50a0001b  beql        $a1, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x179F5Cu;
    {
        const bool branch_taken_0x179f5c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x179f5c) {
            ctx->pc = 0x179F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x179F5Cu;
            // 0x179f60: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x179FCCu;
            goto label_179fcc;
        }
    }
    ctx->pc = 0x179F64u;
    // 0x179f64: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x179F64u;
    {
        const bool branch_taken_0x179f64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F64u;
        // 0x179f68: 0x26240014  addiu       $a0, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f64) {
            ctx->pc = 0x179FA8u;
            goto label_179fa8;
        }
    }
    ctx->pc = 0x179F6Cu;
    // 0x179f6c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x179f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x179f70: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179F70u;
    {
        const bool branch_taken_0x179f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F70u;
        // 0x179f74: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f70) {
            ctx->pc = 0x179F80u;
            goto label_179f80;
        }
    }
    ctx->pc = 0x179F78u;
    // 0x179f78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179F78u;
    {
        const bool branch_taken_0x179f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F78u;
        // 0x179f7c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f78) {
            ctx->pc = 0x179F84u;
            goto label_179f84;
        }
    }
    ctx->pc = 0x179F80u;
label_179f80:
    // 0x179f80: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x179f80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_179f84:
    // 0x179f84: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x179f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x179f88: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x179F88u;
    {
        const bool branch_taken_0x179f88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x179F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F88u;
        // 0x179f8c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f88) {
            ctx->pc = 0x179F98u;
            goto label_179f98;
        }
    }
    ctx->pc = 0x179F90u;
    // 0x179f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x179F90u;
    {
        const bool branch_taken_0x179f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x179F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179F90u;
        // 0x179f94: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179f90) {
            ctx->pc = 0x179F9Cu;
            goto label_179f9c;
        }
    }
    ctx->pc = 0x179F98u;
label_179f98:
    // 0x179f98: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x179f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_179f9c:
    // 0x179f9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x179f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x179fa0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x179fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x179fa4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x179fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_179fa8:
    // 0x179fa8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x179FA8u;
    SET_GPR_U32(ctx, 31, 0x179FB0u);
    ctx->pc = 0x179FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FA8u;
    // 0x179fac: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x179FA8u, 0x179FB0u)) {
        return;
    }
    ctx->pc = 0x179FB0u;
label_179fb0:
    // 0x179fb0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x179FB0u;
    SET_GPR_U32(ctx, 31, 0x179FB8u);
    ctx->pc = 0x179FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FB0u;
    // 0x179fb4: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x179FB0u, 0x179FB8u)) {
        return;
    }
    ctx->pc = 0x179FB8u;
label_179fb8:
    // 0x179fb8: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x179FB8u;
    SET_GPR_U32(ctx, 31, 0x179FC0u);
    ctx->pc = 0x179FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FB8u;
    // 0x179fbc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x179FB8u, 0x179FC0u)) {
        return;
    }
    ctx->pc = 0x179FC0u;
label_179fc0:
    // 0x179fc0: 0x1640ff85  bnez        $s2, . + 4 + (-0x7B << 2)
    ctx->pc = 0x179FC0u;
    {
        const bool branch_taken_0x179fc0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FC0u;
        // 0x179fc4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fc0) {
            ctx->pc = 0x179DD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_179dd8;
        }
    }
    ctx->pc = 0x179FC8u;
    // 0x179fc8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x179fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_179fcc:
    // 0x179fcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x179FCCu;
    {
        const bool branch_taken_0x179fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x179FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FCCu;
        // 0x179fd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x179fcc) {
            ctx->pc = 0x179FE0u;
            goto label_179fe0;
        }
    }
    ctx->pc = 0x179FD4u;
    // 0x179fd4: 0xc06491a  jal         func_192468
    ctx->pc = 0x179FD4u;
    SET_GPR_U32(ctx, 31, 0x179FDCu);
    ctx->pc = 0x179FD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x179FD4u;
    // 0x179fd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x179FD4u, 0x179FDCu)) {
        return;
    }
    ctx->pc = 0x179FDCu;
label_179fdc:
    // 0x179fdc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x179fdcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_179fe0:
    // 0x179fe0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x179fe0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179fe4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x179fe4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179fe8: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x179fe8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x179ff0: 0x3e00008  jr          $ra
    ctx->pc = 0x179FF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x179FF0u;
        // 0x179ff4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x179FF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x179FF8u;
}
