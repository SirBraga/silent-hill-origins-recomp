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

// Function: sub_00133F08
// Address: 0x133f08 - 0x1342a8
void sub_00133F08_0x133f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133F08_0x133f08");
#endif

    switch (ctx->pc) {
        case 0x133f44u: goto label_133f44;
        case 0x133f4cu: goto label_133f4c;
        case 0x133f60u: goto label_133f60;
        case 0x133f74u: goto label_133f74;
        case 0x133f88u: goto label_133f88;
        case 0x133f90u: goto label_133f90;
        case 0x133fa4u: goto label_133fa4;
        case 0x133fb8u: goto label_133fb8;
        case 0x133fccu: goto label_133fcc;
        case 0x133fd8u: goto label_133fd8;
        case 0x133fe0u: goto label_133fe0;
        case 0x133ff4u: goto label_133ff4;
        case 0x134008u: goto label_134008;
        case 0x134024u: goto label_134024;
        case 0x13402cu: goto label_13402c;
        case 0x134040u: goto label_134040;
        case 0x134054u: goto label_134054;
        case 0x13409cu: goto label_13409c;
        case 0x1340a4u: goto label_1340a4;
        case 0x1340b8u: goto label_1340b8;
        case 0x1340ccu: goto label_1340cc;
        case 0x1340e0u: goto label_1340e0;
        case 0x1340ecu: goto label_1340ec;
        case 0x134100u: goto label_134100;
        case 0x134114u: goto label_134114;
        case 0x13412cu: goto label_13412c;
        case 0x134134u: goto label_134134;
        case 0x134148u: goto label_134148;
        case 0x13415cu: goto label_13415c;
        case 0x134170u: goto label_134170;
        case 0x134178u: goto label_134178;
        case 0x13418cu: goto label_13418c;
        case 0x1341a0u: goto label_1341a0;
        case 0x1341b4u: goto label_1341b4;
        case 0x1341bcu: goto label_1341bc;
        case 0x1341d0u: goto label_1341d0;
        case 0x1341e4u: goto label_1341e4;
        case 0x1341f8u: goto label_1341f8;
        case 0x134200u: goto label_134200;
        case 0x134214u: goto label_134214;
        case 0x134228u: goto label_134228;
        case 0x134238u: goto label_134238;
        case 0x134248u: goto label_134248;
        case 0x134250u: goto label_134250;
        case 0x134264u: goto label_134264;
        case 0x134278u: goto label_134278;
        default: break;
    }

    ctx->pc = 0x133f08u;

    // 0x133f08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x133f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x133f0c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x133f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x133f10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x133f10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f14: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x133f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x133f18: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x133f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x133f1c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x133f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133f20: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x133f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x133f24: 0x3c100069  lui         $s0, 0x69
    ctx->pc = 0x133f24u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
    // 0x133f28: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x133f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x133f2c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x133f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f30: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x133f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x133f34: 0x2610dc80  addiu       $s0, $s0, -0x2380
    ctx->pc = 0x133f34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958208));
    // 0x133f38: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x133f38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x133f3c: 0xc04e448  jal         func_139120
    ctx->pc = 0x133F3Cu;
    SET_GPR_U32(ctx, 31, 0x133F44u);
    ctx->pc = 0x133F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F3Cu;
    // 0x133f40: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x133F3Cu, 0x133F44u)) {
        return;
    }
    ctx->pc = 0x133F44u;
label_133f44:
    // 0x133f44: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x133F44u;
    SET_GPR_U32(ctx, 31, 0x133F4Cu);
    ctx->pc = 0x133F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F44u;
    // 0x133f48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x133F44u, 0x133F4Cu)) {
        return;
    }
    ctx->pc = 0x133F4Cu;
label_133f4c:
    // 0x133f4c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133F4Cu;
    {
        const bool branch_taken_0x133f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F4Cu;
        // 0x133f50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f4c) {
            ctx->pc = 0x133F74u;
            goto label_133f74;
        }
    }
    ctx->pc = 0x133F54u;
    // 0x133f54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133f54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f58: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x133F58u;
    SET_GPR_U32(ctx, 31, 0x133F60u);
    ctx->pc = 0x133F5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F58u;
    // 0x133f5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x133F58u, 0x133F60u)) {
        return;
    }
    ctx->pc = 0x133F60u;
label_133f60:
    // 0x133f60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133F60u;
    {
        const bool branch_taken_0x133f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F60u;
        // 0x133f64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f60) {
            ctx->pc = 0x133F74u;
            goto label_133f74;
        }
    }
    ctx->pc = 0x133F68u;
    // 0x133f68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x133f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f6c: 0xc07d374  jal         func_1F4DD0
    ctx->pc = 0x133F6Cu;
    SET_GPR_U32(ctx, 31, 0x133F74u);
    ctx->pc = 0x133F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F6Cu;
    // 0x133f70: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x133F6Cu, 0x133F74u)) {
        return;
    }
    ctx->pc = 0x133F74u;
label_133f74:
    // 0x133f74: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x133f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x133f78: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x133f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x133f7c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x133f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f80: 0xc04e448  jal         func_139120
    ctx->pc = 0x133F80u;
    SET_GPR_U32(ctx, 31, 0x133F88u);
    ctx->pc = 0x133F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F80u;
    // 0x133f84: 0x2690dc80  addiu       $s0, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x133F80u, 0x133F88u)) {
        return;
    }
    ctx->pc = 0x133F88u;
label_133f88:
    // 0x133f88: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x133F88u;
    SET_GPR_U32(ctx, 31, 0x133F90u);
    ctx->pc = 0x133F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F88u;
    // 0x133f8c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x133F88u, 0x133F90u)) {
        return;
    }
    ctx->pc = 0x133F90u;
label_133f90:
    // 0x133f90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133F90u;
    {
        const bool branch_taken_0x133f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133F90u;
        // 0x133f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133f90) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133F98u;
    // 0x133f98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133f9c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x133F9Cu;
    SET_GPR_U32(ctx, 31, 0x133FA4u);
    ctx->pc = 0x133FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133F9Cu;
    // 0x133fa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x133F9Cu, 0x133FA4u)) {
        return;
    }
    ctx->pc = 0x133FA4u;
label_133fa4:
    // 0x133fa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133FA4u;
    {
        const bool branch_taken_0x133fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FA4u;
        // 0x133fa8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fa4) {
            ctx->pc = 0x133FB8u;
            goto label_133fb8;
        }
    }
    ctx->pc = 0x133FACu;
    // 0x133fac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fb0: 0xc07d374  jal         func_1F4DD0
    ctx->pc = 0x133FB0u;
    SET_GPR_U32(ctx, 31, 0x133FB8u);
    ctx->pc = 0x133FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FB0u;
    // 0x133fb4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DD0u, 0x133FB0u, 0x133FB8u)) {
        return;
    }
    ctx->pc = 0x133FB8u;
label_133fb8:
    // 0x133fb8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x133fb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fbc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x133fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fc0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x133fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fc4: 0xc049b84  jal         func_126E10
    ctx->pc = 0x133FC4u;
    SET_GPR_U32(ctx, 31, 0x133FCCu);
    ctx->pc = 0x133FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FC4u;
    // 0x133fc8: 0x26320bd8  addiu       $s2, $s1, 0xBD8 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 3032));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126E10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126E10u, 0x133FC4u, 0x133FCCu)) {
        return;
    }
    ctx->pc = 0x133FCCu;
label_133fcc:
    // 0x133fcc: 0x2693dc80  addiu       $s3, $s4, -0x2380
    ctx->pc = 0x133fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    // 0x133fd0: 0xc04e448  jal         func_139120
    ctx->pc = 0x133FD0u;
    SET_GPR_U32(ctx, 31, 0x133FD8u);
    ctx->pc = 0x133FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD0u;
    // 0x133fd4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x133FD0u, 0x133FD8u)) {
        return;
    }
    ctx->pc = 0x133FD8u;
label_133fd8:
    // 0x133fd8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x133FD8u;
    SET_GPR_U32(ctx, 31, 0x133FE0u);
    ctx->pc = 0x133FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FD8u;
    // 0x133fdc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x133FD8u, 0x133FE0u)) {
        return;
    }
    ctx->pc = 0x133FE0u;
label_133fe0:
    // 0x133fe0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133FE0u;
    {
        const bool branch_taken_0x133fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FE0u;
        // 0x133fe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133fe0) {
            ctx->pc = 0x134008u;
            goto label_134008;
        }
    }
    ctx->pc = 0x133FE8u;
    // 0x133fe8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x133fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133fec: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x133FECu;
    SET_GPR_U32(ctx, 31, 0x133FF4u);
    ctx->pc = 0x133FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x133FECu;
    // 0x133ff0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x133FECu, 0x133FF4u)) {
        return;
    }
    ctx->pc = 0x133FF4u;
label_133ff4:
    // 0x133ff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133FF4u;
    {
        const bool branch_taken_0x133ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x133FF4u;
        // 0x133ff8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ff4) {
            ctx->pc = 0x134008u;
            goto label_134008;
        }
    }
    ctx->pc = 0x133FFCu;
    // 0x133ffc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x133ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134000: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x134000u;
    SET_GPR_U32(ctx, 31, 0x134008u);
    ctx->pc = 0x134004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134000u;
    // 0x134004: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x134000u, 0x134008u)) {
        return;
    }
    ctx->pc = 0x134008u;
label_134008:
    // 0x134008: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134008u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13400c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13400cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x134010: 0x27b20008  addiu       $s2, $sp, 0x8
    ctx->pc = 0x134010u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x134014: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x134014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x134018: 0x2693dc80  addiu       $s3, $s4, -0x2380
    ctx->pc = 0x134018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    // 0x13401c: 0xc04e448  jal         func_139120
    ctx->pc = 0x13401Cu;
    SET_GPR_U32(ctx, 31, 0x134024u);
    ctx->pc = 0x134020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13401Cu;
    // 0x134020: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x13401Cu, 0x134024u)) {
        return;
    }
    ctx->pc = 0x134024u;
label_134024:
    // 0x134024: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134024u;
    SET_GPR_U32(ctx, 31, 0x13402Cu);
    ctx->pc = 0x134028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134024u;
    // 0x134028: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134024u, 0x13402Cu)) {
        return;
    }
    ctx->pc = 0x13402Cu;
label_13402c:
    // 0x13402c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13402Cu;
    {
        const bool branch_taken_0x13402c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13402Cu;
        // 0x134030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13402c) {
            ctx->pc = 0x134054u;
            goto label_134054;
        }
    }
    ctx->pc = 0x134034u;
    // 0x134034: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134038: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134038u;
    SET_GPR_U32(ctx, 31, 0x134040u);
    ctx->pc = 0x13403Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134038u;
    // 0x13403c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134038u, 0x134040u)) {
        return;
    }
    ctx->pc = 0x134040u;
label_134040:
    // 0x134040: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134040u;
    {
        const bool branch_taken_0x134040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134040u;
        // 0x134044: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134040) {
            ctx->pc = 0x134054u;
            goto label_134054;
        }
    }
    ctx->pc = 0x134048u;
    // 0x134048: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13404c: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x13404Cu;
    SET_GPR_U32(ctx, 31, 0x134054u);
    ctx->pc = 0x134050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13404Cu;
    // 0x134050: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x13404Cu, 0x134054u)) {
        return;
    }
    ctx->pc = 0x134054u;
label_134054:
    // 0x134054: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x134054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134058: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x134058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x13405c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13405cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x134060: 0x0  nop
    ctx->pc = 0x134060u;
    // NOP
    // 0x134064: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x134064u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x134068: 0x0  nop
    ctx->pc = 0x134068u;
    // NOP
    // 0x13406c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13406Cu;
    {
        const bool branch_taken_0x13406c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13406c) {
            ctx->pc = 0x134070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13406Cu;
            // 0x134070: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x134074u;
            goto label_134074;
        }
    }
    ctx->pc = 0x134074u;
label_134074:
    // 0x134074: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x134074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x134078: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x134078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13407c: 0xc6200bd8  lwc1        $f0, 0xBD8($s1)
    ctx->pc = 0x13407cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134080: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x134080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x134084: 0xae221988  sw          $v0, 0x1988($s1)
    ctx->pc = 0x134084u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6536), GPR_U32(ctx, 2));
    // 0x134088: 0x26321988  addiu       $s2, $s1, 0x1988
    ctx->pc = 0x134088u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 6536));
    // 0x13408c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x13408cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x134090: 0x2693dc80  addiu       $s3, $s4, -0x2380
    ctx->pc = 0x134090u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    // 0x134094: 0xc04e448  jal         func_139120
    ctx->pc = 0x134094u;
    SET_GPR_U32(ctx, 31, 0x13409Cu);
    ctx->pc = 0x134098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134094u;
    // 0x134098: 0xe6200bdc  swc1        $f0, 0xBDC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3036), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134094u, 0x13409Cu)) {
        return;
    }
    ctx->pc = 0x13409Cu;
label_13409c:
    // 0x13409c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x13409Cu;
    SET_GPR_U32(ctx, 31, 0x1340A4u);
    ctx->pc = 0x1340A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13409Cu;
    // 0x1340a0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x13409Cu, 0x1340A4u)) {
        return;
    }
    ctx->pc = 0x1340A4u;
label_1340a4:
    // 0x1340a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1340A4u;
    {
        const bool branch_taken_0x1340a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340A4u;
        // 0x1340a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340a4) {
            ctx->pc = 0x1340CCu;
            goto label_1340cc;
        }
    }
    ctx->pc = 0x1340ACu;
    // 0x1340ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1340acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340b0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1340B0u;
    SET_GPR_U32(ctx, 31, 0x1340B8u);
    ctx->pc = 0x1340B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340B0u;
    // 0x1340b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1340B0u, 0x1340B8u)) {
        return;
    }
    ctx->pc = 0x1340B8u;
label_1340b8:
    // 0x1340b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1340B8u;
    {
        const bool branch_taken_0x1340b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340B8u;
        // 0x1340bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340b8) {
            ctx->pc = 0x1340CCu;
            goto label_1340cc;
        }
    }
    ctx->pc = 0x1340C0u;
    // 0x1340c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1340c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340c4: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x1340C4u;
    SET_GPR_U32(ctx, 31, 0x1340CCu);
    ctx->pc = 0x1340C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340C4u;
    // 0x1340c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x1340C4u, 0x1340CCu)) {
        return;
    }
    ctx->pc = 0x1340CCu;
label_1340cc:
    // 0x1340cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1340ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1340d0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1340d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1340d4: 0xae221524  sw          $v0, 0x1524($s1)
    ctx->pc = 0x1340d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 5412), GPR_U32(ctx, 2));
    // 0x1340d8: 0xc04e448  jal         func_139120
    ctx->pc = 0x1340D8u;
    SET_GPR_U32(ctx, 31, 0x1340E0u);
    ctx->pc = 0x1340DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340D8u;
    // 0x1340dc: 0x26331524  addiu       $s3, $s1, 0x1524 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 5412));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1340D8u, 0x1340E0u)) {
        return;
    }
    ctx->pc = 0x1340E0u;
label_1340e0:
    // 0x1340e0: 0x2692dc80  addiu       $s2, $s4, -0x2380
    ctx->pc = 0x1340e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    // 0x1340e4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1340E4u;
    SET_GPR_U32(ctx, 31, 0x1340ECu);
    ctx->pc = 0x1340E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340E4u;
    // 0x1340e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1340E4u, 0x1340ECu)) {
        return;
    }
    ctx->pc = 0x1340ECu;
label_1340ec:
    // 0x1340ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1340ECu;
    {
        const bool branch_taken_0x1340ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1340F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1340ECu;
        // 0x1340f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1340ec) {
            ctx->pc = 0x134114u;
            goto label_134114;
        }
    }
    ctx->pc = 0x1340F4u;
    // 0x1340f4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1340f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1340f8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1340F8u;
    SET_GPR_U32(ctx, 31, 0x134100u);
    ctx->pc = 0x1340FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1340F8u;
    // 0x1340fc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1340F8u, 0x134100u)) {
        return;
    }
    ctx->pc = 0x134100u;
label_134100:
    // 0x134100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134100u;
    {
        const bool branch_taken_0x134100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134100u;
        // 0x134104: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134100) {
            ctx->pc = 0x134114u;
            goto label_134114;
        }
    }
    ctx->pc = 0x134108u;
    // 0x134108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13410c: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x13410Cu;
    SET_GPR_U32(ctx, 31, 0x134114u);
    ctx->pc = 0x134110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13410Cu;
    // 0x134110: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x13410Cu, 0x134114u)) {
        return;
    }
    ctx->pc = 0x134114u;
label_134114:
    // 0x134114: 0xc6201ac0  lwc1        $f0, 0x1AC0($s1)
    ctx->pc = 0x134114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 6848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x134118: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x134118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x13411c: 0x26321abc  addiu       $s2, $s1, 0x1ABC
    ctx->pc = 0x13411cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 6844));
    // 0x134120: 0x2693dc80  addiu       $s3, $s4, -0x2380
    ctx->pc = 0x134120u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    // 0x134124: 0xc04e448  jal         func_139120
    ctx->pc = 0x134124u;
    SET_GPR_U32(ctx, 31, 0x13412Cu);
    ctx->pc = 0x134128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134124u;
    // 0x134128: 0xe6201abc  swc1        $f0, 0x1ABC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 6844), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134124u, 0x13412Cu)) {
        return;
    }
    ctx->pc = 0x13412Cu;
label_13412c:
    // 0x13412c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x13412Cu;
    SET_GPR_U32(ctx, 31, 0x134134u);
    ctx->pc = 0x134130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13412Cu;
    // 0x134130: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x13412Cu, 0x134134u)) {
        return;
    }
    ctx->pc = 0x134134u;
label_134134:
    // 0x134134: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134134u;
    {
        const bool branch_taken_0x134134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134134u;
        // 0x134138: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134134) {
            ctx->pc = 0x13415Cu;
            goto label_13415c;
        }
    }
    ctx->pc = 0x13413Cu;
    // 0x13413c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x13413cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134140: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134140u;
    SET_GPR_U32(ctx, 31, 0x134148u);
    ctx->pc = 0x134144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134140u;
    // 0x134144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134140u, 0x134148u)) {
        return;
    }
    ctx->pc = 0x134148u;
label_134148:
    // 0x134148: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134148u;
    {
        const bool branch_taken_0x134148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134148u;
        // 0x13414c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134148) {
            ctx->pc = 0x13415Cu;
            goto label_13415c;
        }
    }
    ctx->pc = 0x134150u;
    // 0x134150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134154: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x134154u;
    SET_GPR_U32(ctx, 31, 0x13415Cu);
    ctx->pc = 0x134158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134154u;
    // 0x134158: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x134154u, 0x13415Cu)) {
        return;
    }
    ctx->pc = 0x13415Cu;
label_13415c:
    // 0x13415c: 0xae201acc  sw          $zero, 0x1ACC($s1)
    ctx->pc = 0x13415cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6860), GPR_U32(ctx, 0));
    // 0x134160: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x134160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x134164: 0x26321acc  addiu       $s2, $s1, 0x1ACC
    ctx->pc = 0x134164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 6860));
    // 0x134168: 0xc04e448  jal         func_139120
    ctx->pc = 0x134168u;
    SET_GPR_U32(ctx, 31, 0x134170u);
    ctx->pc = 0x13416Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134168u;
    // 0x13416c: 0x2693dc80  addiu       $s3, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134168u, 0x134170u)) {
        return;
    }
    ctx->pc = 0x134170u;
label_134170:
    // 0x134170: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134170u;
    SET_GPR_U32(ctx, 31, 0x134178u);
    ctx->pc = 0x134174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134170u;
    // 0x134174: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134170u, 0x134178u)) {
        return;
    }
    ctx->pc = 0x134178u;
label_134178:
    // 0x134178: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134178u;
    {
        const bool branch_taken_0x134178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134178u;
        // 0x13417c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134178) {
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134180u;
    // 0x134180: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134184: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x134184u;
    SET_GPR_U32(ctx, 31, 0x13418Cu);
    ctx->pc = 0x134188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134184u;
    // 0x134188: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x134184u, 0x13418Cu)) {
        return;
    }
    ctx->pc = 0x13418Cu;
label_13418c:
    // 0x13418c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13418Cu;
    {
        const bool branch_taken_0x13418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13418Cu;
        // 0x134190: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13418c) {
            ctx->pc = 0x1341A0u;
            goto label_1341a0;
        }
    }
    ctx->pc = 0x134194u;
    // 0x134194: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x134194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134198: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x134198u;
    SET_GPR_U32(ctx, 31, 0x1341A0u);
    ctx->pc = 0x13419Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134198u;
    // 0x13419c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x134198u, 0x1341A0u)) {
        return;
    }
    ctx->pc = 0x1341A0u;
label_1341a0:
    // 0x1341a0: 0xae201ab4  sw          $zero, 0x1AB4($s1)
    ctx->pc = 0x1341a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6836), GPR_U32(ctx, 0));
    // 0x1341a4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1341a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1341a8: 0x26321ab4  addiu       $s2, $s1, 0x1AB4
    ctx->pc = 0x1341a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 6836));
    // 0x1341ac: 0xc04e448  jal         func_139120
    ctx->pc = 0x1341ACu;
    SET_GPR_U32(ctx, 31, 0x1341B4u);
    ctx->pc = 0x1341B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341ACu;
    // 0x1341b0: 0x2693dc80  addiu       $s3, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1341ACu, 0x1341B4u)) {
        return;
    }
    ctx->pc = 0x1341B4u;
label_1341b4:
    // 0x1341b4: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1341B4u;
    SET_GPR_U32(ctx, 31, 0x1341BCu);
    ctx->pc = 0x1341B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341B4u;
    // 0x1341b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1341B4u, 0x1341BCu)) {
        return;
    }
    ctx->pc = 0x1341BCu;
label_1341bc:
    // 0x1341bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1341BCu;
    {
        const bool branch_taken_0x1341bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341BCu;
        // 0x1341c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341bc) {
            ctx->pc = 0x1341E4u;
            goto label_1341e4;
        }
    }
    ctx->pc = 0x1341C4u;
    // 0x1341c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1341c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341c8: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1341C8u;
    SET_GPR_U32(ctx, 31, 0x1341D0u);
    ctx->pc = 0x1341CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341C8u;
    // 0x1341cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1341C8u, 0x1341D0u)) {
        return;
    }
    ctx->pc = 0x1341D0u;
label_1341d0:
    // 0x1341d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1341D0u;
    {
        const bool branch_taken_0x1341d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1341D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1341D0u;
        // 0x1341d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1341d0) {
            ctx->pc = 0x1341E4u;
            goto label_1341e4;
        }
    }
    ctx->pc = 0x1341D8u;
    // 0x1341d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1341d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1341dc: 0xc07d368  jal         func_1F4DA0
    ctx->pc = 0x1341DCu;
    SET_GPR_U32(ctx, 31, 0x1341E4u);
    ctx->pc = 0x1341E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341DCu;
    // 0x1341e0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4DA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4DA0u, 0x1341DCu, 0x1341E4u)) {
        return;
    }
    ctx->pc = 0x1341E4u;
label_1341e4:
    // 0x1341e4: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1341e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1341e8: 0x27b3000c  addiu       $s3, $sp, 0xC
    ctx->pc = 0x1341e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1341ec: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1341ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1341f0: 0xc04e448  jal         func_139120
    ctx->pc = 0x1341F0u;
    SET_GPR_U32(ctx, 31, 0x1341F8u);
    ctx->pc = 0x1341F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341F0u;
    // 0x1341f4: 0x2692dc80  addiu       $s2, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x1341F0u, 0x1341F8u)) {
        return;
    }
    ctx->pc = 0x1341F8u;
label_1341f8:
    // 0x1341f8: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x1341F8u;
    SET_GPR_U32(ctx, 31, 0x134200u);
    ctx->pc = 0x1341FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1341F8u;
    // 0x1341fc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1341F8u, 0x134200u)) {
        return;
    }
    ctx->pc = 0x134200u;
label_134200:
    // 0x134200: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134200u;
    {
        const bool branch_taken_0x134200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134200u;
        // 0x134204: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134200) {
            ctx->pc = 0x134228u;
            goto label_134228;
        }
    }
    ctx->pc = 0x134208u;
    // 0x134208: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134208u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13420c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x13420Cu;
    SET_GPR_U32(ctx, 31, 0x134214u);
    ctx->pc = 0x134210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13420Cu;
    // 0x134210: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x13420Cu, 0x134214u)) {
        return;
    }
    ctx->pc = 0x134214u;
label_134214:
    // 0x134214: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134214u;
    {
        const bool branch_taken_0x134214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134214u;
        // 0x134218: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134214) {
            ctx->pc = 0x134228u;
            goto label_134228;
        }
    }
    ctx->pc = 0x13421Cu;
    // 0x13421c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13421cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134220: 0xc07d348  jal         func_1F4D20
    ctx->pc = 0x134220u;
    SET_GPR_U32(ctx, 31, 0x134228u);
    ctx->pc = 0x134224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134220u;
    // 0x134224: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D20u, 0x134220u, 0x134228u)) {
        return;
    }
    ctx->pc = 0x134228u;
label_134228:
    // 0x134228: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x134228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x13422c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x13422cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134230: 0xc04deb2  jal         func_137AC8
    ctx->pc = 0x134230u;
    SET_GPR_U32(ctx, 31, 0x134238u);
    ctx->pc = 0x134234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134230u;
    // 0x134234: 0x2693dc80  addiu       $s3, $s4, -0x2380 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294958208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137AC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137AC8u, 0x134230u, 0x134238u)) {
        return;
    }
    ctx->pc = 0x134238u;
label_134238:
    // 0x134238: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x134238u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x13423c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x13423cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x134240: 0xc04e448  jal         func_139120
    ctx->pc = 0x134240u;
    SET_GPR_U32(ctx, 31, 0x134248u);
    ctx->pc = 0x134244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134240u;
    // 0x134244: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x139120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x139120u, 0x134240u, 0x134248u)) {
        return;
    }
    ctx->pc = 0x134248u;
label_134248:
    // 0x134248: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x134248u;
    SET_GPR_U32(ctx, 31, 0x134250u);
    ctx->pc = 0x13424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134248u;
    // 0x13424c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x134248u, 0x134250u)) {
        return;
    }
    ctx->pc = 0x134250u;
label_134250:
    // 0x134250: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x134250u;
    {
        const bool branch_taken_0x134250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134250u;
        // 0x134254: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134250) {
            ctx->pc = 0x134278u;
            goto label_134278;
        }
    }
    ctx->pc = 0x134258u;
    // 0x134258: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x134258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13425c: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x13425Cu;
    SET_GPR_U32(ctx, 31, 0x134264u);
    ctx->pc = 0x134260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13425Cu;
    // 0x134260: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x13425Cu, 0x134264u)) {
        return;
    }
    ctx->pc = 0x134264u;
label_134264:
    // 0x134264: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x134264u;
    {
        const bool branch_taken_0x134264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x134264u;
        // 0x134268: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134264) {
            ctx->pc = 0x134278u;
            goto label_134278;
        }
    }
    ctx->pc = 0x13426Cu;
    // 0x13426c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13426cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134270: 0xc07d352  jal         func_1F4D48
    ctx->pc = 0x134270u;
    SET_GPR_U32(ctx, 31, 0x134278u);
    ctx->pc = 0x134274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x134270u;
    // 0x134274: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4D48u, 0x134270u, 0x134278u)) {
        return;
    }
    ctx->pc = 0x134278u;
label_134278:
    // 0x134278: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x134278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13427c: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x13427cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x134280: 0xae221b84  sw          $v0, 0x1B84($s1)
    ctx->pc = 0x134280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7044), GPR_U32(ctx, 2));
    // 0x134284: 0xae221b88  sw          $v0, 0x1B88($s1)
    ctx->pc = 0x134284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7048), GPR_U32(ctx, 2));
    // 0x134288: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x134288u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13428c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x13428cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x134290: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x134290u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x134294: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x134294u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x134298: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x134298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13429c: 0x3e00008  jr          $ra
    ctx->pc = 0x13429Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1342A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13429Cu;
        // 0x1342a0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13429Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1342A4u;
    // 0x1342a4: 0x0  nop
    ctx->pc = 0x1342a4u;
    // NOP
    ctx->pc = 0x1342a8u;
}
