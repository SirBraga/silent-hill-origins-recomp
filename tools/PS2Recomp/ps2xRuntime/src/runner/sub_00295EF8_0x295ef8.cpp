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

// Function: sub_00295EF8
// Address: 0x295ef8 - 0x2961f8
void sub_00295EF8_0x295ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295EF8_0x295ef8");
#endif

    switch (ctx->pc) {
        case 0x295f38u: goto label_295f38;
        case 0x295f44u: goto label_295f44;
        case 0x295f64u: goto label_295f64;
        case 0x295f74u: goto label_295f74;
        case 0x295f90u: goto label_295f90;
        case 0x295f98u: goto label_295f98;
        case 0x295fb8u: goto label_295fb8;
        case 0x295fccu: goto label_295fcc;
        case 0x295fecu: goto label_295fec;
        case 0x295ff8u: goto label_295ff8;
        case 0x296058u: goto label_296058;
        case 0x2960acu: goto label_2960ac;
        case 0x2960c8u: goto label_2960c8;
        case 0x2960f0u: goto label_2960f0;
        case 0x296104u: goto label_296104;
        case 0x296178u: goto label_296178;
        case 0x296190u: goto label_296190;
        case 0x2961a8u: goto label_2961a8;
        case 0x2961c0u: goto label_2961c0;
        default: break;
    }

    ctx->pc = 0x295ef8u;

    // 0x295ef8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x295ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x295efc: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x295efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x295f00: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x295f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x295f04: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x295f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f08: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x295f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x295f0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x295f0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295f10: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x295f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x295f14: 0x3c160068  lui         $s6, 0x68
    ctx->pc = 0x295f14u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)104 << 16));
    // 0x295f18: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x295f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x295f1c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x295f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x295f20: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x295f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x295f24: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x295f24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x295f28: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x295f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x295f2c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x295f2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x295f30: 0xc0a5728  jal         func_295CA0
    ctx->pc = 0x295F30u;
    SET_GPR_U32(ctx, 31, 0x295F38u);
    ctx->pc = 0x295F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F30u;
    // 0x295f34: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295CA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x295CA0u, 0x295F30u, 0x295F38u)) {
        return;
    }
    ctx->pc = 0x295F38u;
label_295f38:
    // 0x295f38: 0x8ec4e7e8  lw          $a0, -0x1818($s6)
    ctx->pc = 0x295f38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961128)));
    // 0x295f3c: 0xc0c84dc  jal         func_321370
    ctx->pc = 0x295F3Cu;
    SET_GPR_U32(ctx, 31, 0x295F44u);
    ctx->pc = 0x321370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321370u, 0x295F3Cu, 0x295F44u)) {
        return;
    }
    ctx->pc = 0x295F44u;
label_295f44:
    // 0x295f44: 0x8ec3e7e8  lw          $v1, -0x1818($s6)
    ctx->pc = 0x295f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961128)));
    // 0x295f48: 0x1462009e  bne         $v1, $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x295F48u;
    {
        const bool branch_taken_0x295f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x295F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F48u;
        // 0x295f4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f48) {
            ctx->pc = 0x2961C4u;
            goto label_2961c4;
        }
    }
    ctx->pc = 0x295F50u;
    // 0x295f50: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x295f50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
    // 0x295f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x295f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x295f58: 0xac62e7dc  sw          $v0, -0x1824($v1)
    ctx->pc = 0x295f58u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x67E7DCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x67E7DCu, _value); } while (0);
    // 0x295f5c: 0xc0a58dc  jal         func_296370
    ctx->pc = 0x295F5Cu;
    SET_GPR_U32(ctx, 31, 0x295F64u);
    ctx->pc = 0x295F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F5Cu;
    // 0x295f60: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x296370u, 0x295F5Cu, 0x295F64u)) {
        return;
    }
    ctx->pc = 0x295F64u;
label_295f64:
    // 0x295f64: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x295F64u;
    {
        const bool branch_taken_0x295f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x295F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F64u;
        // 0x295f68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f64) {
            ctx->pc = 0x2960F8u;
            goto label_2960f8;
        }
    }
    ctx->pc = 0x295F6Cu;
    // 0x295f6c: 0xc0c90e4  jal         func_324390
    ctx->pc = 0x295F6Cu;
    SET_GPR_U32(ctx, 31, 0x295F74u);
    ctx->pc = 0x295F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295F6Cu;
    // 0x295f70: 0x3c110068  lui         $s1, 0x68 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)104 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324390u, 0x295F6Cu, 0x295F74u)) {
        return;
    }
    ctx->pc = 0x295F74u;
label_295f74:
    // 0x295f74: 0x8e22e80c  lw          $v0, -0x17F4($s1)
    ctx->pc = 0x295f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961164)));
    // 0x295f78: 0x441002c  bgez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x295F78u;
    {
        const bool branch_taken_0x295f78 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x295F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F78u;
        // 0x295f7c: 0x3c170070  lui         $s7, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f78) {
            ctx->pc = 0x29602Cu;
            goto label_29602c;
        }
    }
    ctx->pc = 0x295F80u;
    // 0x295f80: 0x3c140068  lui         $s4, 0x68
    ctx->pc = 0x295f80u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)104 << 16));
    // 0x295f84: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x295f84u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
    // 0x295f88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x295F88u;
    {
        const bool branch_taken_0x295f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295F88u;
        // 0x295f8c: 0x3c1e0070  lui         $fp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295f88) {
            ctx->pc = 0x295FB4u;
            goto label_295fb4;
        }
    }
    ctx->pc = 0x295F90u;
label_295f90:
    // 0x295f90: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x295f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295f94: 0x0  nop
    ctx->pc = 0x295f94u;
    // NOP
label_295f98:
    // 0x295f98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295f9c: 0x0  nop
    ctx->pc = 0x295f9cu;
    // NOP
    // 0x295fa0: 0x0  nop
    ctx->pc = 0x295fa0u;
    // NOP
    // 0x295fa4: 0x0  nop
    ctx->pc = 0x295fa4u;
    // NOP
    // 0x295fa8: 0x0  nop
    ctx->pc = 0x295fa8u;
    // NOP
    // 0x295fac: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x295FACu;
    {
        const bool branch_taken_0x295fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x295fac) {
            ctx->pc = 0x295F98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295f98;
        }
    }
    ctx->pc = 0x295FB4u;
label_295fb4:
    // 0x295fb4: 0x26f07b40  addiu       $s0, $s7, 0x7B40
    ctx->pc = 0x295fb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 31552));
label_295fb8:
    // 0x295fb8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x295fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x295fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x295fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295fc0: 0x34a50597  ori         $a1, $a1, 0x597
    ctx->pc = 0x295fc0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1431);
    // 0x295fc4: 0xc0c9276  jal         func_3249D8
    ctx->pc = 0x295FC4u;
    SET_GPR_U32(ctx, 31, 0x295FCCu);
    ctx->pc = 0x295FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FC4u;
    // 0x295fc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3249D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3249D8u, 0x295FC4u, 0x295FCCu)) {
        return;
    }
    ctx->pc = 0x295FCCu;
label_295fcc:
    // 0x295fcc: 0x4430013  bgezl       $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x295FCCu;
    {
        const bool branch_taken_0x295fcc = (GPR_S64(ctx, 2) >= 0);
        if (branch_taken_0x295fcc) {
            ctx->pc = 0x295FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x295FCCu;
            // 0x295fd0: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29601Cu;
            goto label_29601c;
        }
    }
    ctx->pc = 0x295FD4u;
    // 0x295fd4: 0x8e82e7d0  lw          $v0, -0x1830($s4)
    ctx->pc = 0x295fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
    // 0x295fd8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x295FD8u;
    {
        const bool branch_taken_0x295fd8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x295FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295FD8u;
        // 0x295fdc: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295fd8) {
            ctx->pc = 0x295FF0u;
            goto label_295ff0;
        }
    }
    ctx->pc = 0x295FE0u;
    // 0x295fe0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x295fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x295fe4: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x295FE4u;
    SET_GPR_U32(ctx, 31, 0x295FECu);
    ctx->pc = 0x295FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x295FE4u;
    // 0x295fe8: 0x2484d478  addiu       $a0, $a0, -0x2B88 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x295FE4u, 0x295FECu)) {
        return;
    }
    ctx->pc = 0x295FECu;
label_295fec:
    // 0x295fec: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x295fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_295ff0:
    // 0x295ff0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x295ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x295ff4: 0x0  nop
    ctx->pc = 0x295ff4u;
    // NOP
label_295ff8:
    // 0x295ff8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x295ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x295ffc: 0x0  nop
    ctx->pc = 0x295ffcu;
    // NOP
    // 0x296000: 0x0  nop
    ctx->pc = 0x296000u;
    // NOP
    // 0x296004: 0x0  nop
    ctx->pc = 0x296004u;
    // NOP
    // 0x296008: 0x0  nop
    ctx->pc = 0x296008u;
    // NOP
    // 0x29600c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29600Cu;
    {
        const bool branch_taken_0x29600c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x29600c) {
            ctx->pc = 0x295FF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295ff8;
        }
    }
    ctx->pc = 0x296014u;
    // 0x296014: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x296014u;
    {
        const bool branch_taken_0x296014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296014u;
        // 0x296018: 0x26f07b40  addiu       $s0, $s7, 0x7B40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 31552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296014) {
            ctx->pc = 0x295FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295fb8;
        }
    }
    ctx->pc = 0x29601Cu;
label_29601c:
    // 0x29601c: 0x1040ffdc  beqz        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x29601Cu;
    {
        const bool branch_taken_0x29601c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29601Cu;
        // 0x296020: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29601c) {
            ctx->pc = 0x295F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_295f90;
        }
    }
    ctx->pc = 0x296024u;
    // 0x296024: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x296024u;
    {
        const bool branch_taken_0x296024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296024u;
        // 0x296028: 0xae20e80c  sw          $zero, -0x17F4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294961164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296024) {
            ctx->pc = 0x296038u;
            goto label_296038;
        }
    }
    ctx->pc = 0x29602Cu;
label_29602c:
    // 0x29602c: 0x3c140068  lui         $s4, 0x68
    ctx->pc = 0x29602cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)104 << 16));
    // 0x296030: 0x3c150070  lui         $s5, 0x70
    ctx->pc = 0x296030u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)112 << 16));
    // 0x296034: 0x3c1e0070  lui         $fp, 0x70
    ctx->pc = 0x296034u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)112 << 16));
label_296038:
    // 0x296038: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x296038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x29603c: 0x26a479c0  addiu       $a0, $s5, 0x79C0
    ctx->pc = 0x29603cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 31168));
    // 0x296040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x296040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296044: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x296044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x296048: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x296048u;
    {
        const bool branch_taken_0x296048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29604Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296048u;
        // 0x29604c: 0xa0830024  sb          $v1, 0x24($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 36), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296048) {
            ctx->pc = 0x29607Cu;
            goto label_29607c;
        }
    }
    ctx->pc = 0x296050u;
    // 0x296050: 0x24860024  addiu       $a2, $a0, 0x24
    ctx->pc = 0x296050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x296054: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x296054u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_296058:
    // 0x296058: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x296058u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x29605c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29605Cu;
    {
        const bool branch_taken_0x29605c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29605Cu;
        // 0x296060: 0x2451021  addu        $v0, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29605c) {
            ctx->pc = 0x29607Cu;
            goto label_29607c;
        }
    }
    ctx->pc = 0x296064u;
    // 0x296064: 0xa62021  addu        $a0, $a1, $a2
    ctx->pc = 0x296064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x296068: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x296068u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29606c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x29606cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x296070: 0x31e00  sll         $v1, $v1, 24
    ctx->pc = 0x296070u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x296074: 0x5460fff8  bnel        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x296074u;
    {
        const bool branch_taken_0x296074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x296074) {
            ctx->pc = 0x296078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296074u;
            // 0x296078: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296058;
        }
    }
    ctx->pc = 0x29607Cu;
label_29607c:
    // 0x29607c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x29607cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x296080: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296080u;
    {
        const bool branch_taken_0x296080 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x296084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296080u;
        // 0x296084: 0x8e82e7d0  lw          $v0, -0x1830($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296080) {
            ctx->pc = 0x296094u;
            goto label_296094;
        }
    }
    ctx->pc = 0x296088u;
    // 0x296088: 0x26a279c0  addiu       $v0, $s5, 0x79C0
    ctx->pc = 0x296088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 31168));
    // 0x29608c: 0xa0400123  sb          $zero, 0x123($v0)
    ctx->pc = 0x29608cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 291), (uint8_t)GPR_U32(ctx, 0));
    // 0x296090: 0x8e82e7d0  lw          $v0, -0x1830($s4)
    ctx->pc = 0x296090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
label_296094:
    // 0x296094: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x296094u;
    {
        const bool branch_taken_0x296094 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x296098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296094u;
        // 0x296098: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296094) {
            ctx->pc = 0x2960ACu;
            goto label_2960ac;
        }
    }
    ctx->pc = 0x29609Cu;
    // 0x29609c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x29609cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x2960a0: 0x2484d498  addiu       $a0, $a0, -0x2B68
    ctx->pc = 0x2960a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956184));
    // 0x2960a4: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2960A4u;
    SET_GPR_U32(ctx, 31, 0x2960ACu);
    ctx->pc = 0x2960A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960A4u;
    // 0x2960a8: 0x24a579e4  addiu       $a1, $a1, 0x79E4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2960A4u, 0x2960ACu)) {
        return;
    }
    ctx->pc = 0x2960ACu;
label_2960ac:
    // 0x2960ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2960acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2960b0: 0x26b079c0  addiu       $s0, $s5, 0x79C0
    ctx->pc = 0x2960b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 31168));
    // 0x2960b4: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2960b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2960b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2960b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960bc: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x2960bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
    // 0x2960c0: 0xc0c90b8  jal         func_3242E0
    ctx->pc = 0x2960C0u;
    SET_GPR_U32(ctx, 31, 0x2960C8u);
    ctx->pc = 0x2960C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960C0u;
    // 0x2960c4: 0xae100124  sw          $s0, 0x124($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3242E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3242E0u, 0x2960C0u, 0x2960C8u)) {
        return;
    }
    ctx->pc = 0x2960C8u;
label_2960c8:
    // 0x2960c8: 0x26e47b40  addiu       $a0, $s7, 0x7B40
    ctx->pc = 0x2960c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 31552));
    // 0x2960cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2960ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2960d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2960d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2960d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2960d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2960dc: 0x2408012c  addiu       $t0, $zero, 0x12C
    ctx->pc = 0x2960dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
    // 0x2960e0: 0x27c97b00  addiu       $t1, $fp, 0x7B00
    ctx->pc = 0x2960e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 30), 31488));
    // 0x2960e4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2960e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2960e8: 0xc0c92ee  jal         func_324BB8
    ctx->pc = 0x2960E8u;
    SET_GPR_U32(ctx, 31, 0x2960F0u);
    ctx->pc = 0x2960ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2960E8u;
    // 0x2960ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324BB8u, 0x2960E8u, 0x2960F0u)) {
        return;
    }
    ctx->pc = 0x2960F0u;
label_2960f0:
    // 0x2960f0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2960F0u;
    {
        const bool branch_taken_0x2960f0 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2960F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2960F0u;
        // 0x2960f4: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2960f0) {
            ctx->pc = 0x29610Cu;
            goto label_29610c;
        }
    }
    ctx->pc = 0x2960F8u;
label_2960f8:
    // 0x2960f8: 0x8ec4e7e8  lw          $a0, -0x1818($s6)
    ctx->pc = 0x2960f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961128)));
    // 0x2960fc: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2960FCu;
    SET_GPR_U32(ctx, 31, 0x296104u);
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2960FCu, 0x296104u)) {
        return;
    }
    ctx->pc = 0x296104u;
label_296104:
    // 0x296104: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x296104u;
    {
        const bool branch_taken_0x296104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296104u;
        // 0x296108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296104) {
            ctx->pc = 0x2961C4u;
            goto label_2961c4;
        }
    }
    ctx->pc = 0x29610Cu;
label_29610c:
    // 0x29610c: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x29610cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x296110: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x296110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x296114: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x296114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x296118: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x296118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x29611c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x29611cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x296120: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x296120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x296124: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x296124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x296128: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x296128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x29612c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x29612cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x296130: 0xb2630007  sdl         $v1, 0x7($s3)
    ctx->pc = 0x296130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296134: 0xb6630000  sdr         $v1, 0x0($s3)
    ctx->pc = 0x296134u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296138: 0xb264000f  sdl         $a0, 0xF($s3)
    ctx->pc = 0x296138u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29613c: 0xb6640008  sdr         $a0, 0x8($s3)
    ctx->pc = 0x29613cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296140: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x296140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296144: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x296144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296148: 0xb266001f  sdl         $a2, 0x1F($s3)
    ctx->pc = 0x296148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x29614c: 0xb6660018  sdr         $a2, 0x18($s3)
    ctx->pc = 0x29614cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x296150: 0x88430023  lwl         $v1, 0x23($v0)
    ctx->pc = 0x296150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x296154: 0x98430020  lwr         $v1, 0x20($v0)
    ctx->pc = 0x296154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x296158: 0xaa630023  swl         $v1, 0x23($s3)
    ctx->pc = 0x296158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x29615c: 0xba630020  swr         $v1, 0x20($s3)
    ctx->pc = 0x29615cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x296160: 0x8e83e7d0  lw          $v1, -0x1830($s4)
    ctx->pc = 0x296160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
    // 0x296164: 0x18600010  blez        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x296164u;
    {
        const bool branch_taken_0x296164 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x296168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296164u;
        // 0x296168: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296164) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x29616Cu;
    // 0x29616c: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x29616cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x296170: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296170u;
    SET_GPR_U32(ctx, 31, 0x296178u);
    ctx->pc = 0x296174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296170u;
    // 0x296174: 0x2484d4b0  addiu       $a0, $a0, -0x2B50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296170u, 0x296178u)) {
        return;
    }
    ctx->pc = 0x296178u;
label_296178:
    // 0x296178: 0x8e82e7d0  lw          $v0, -0x1830($s4)
    ctx->pc = 0x296178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
    // 0x29617c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x29617Cu;
    {
        const bool branch_taken_0x29617c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x296180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29617Cu;
        // 0x296180: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29617c) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x296184u;
    // 0x296184: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x296184u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x296188: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x296188u;
    SET_GPR_U32(ctx, 31, 0x296190u);
    ctx->pc = 0x29618Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296188u;
    // 0x29618c: 0x2484d4c0  addiu       $a0, $a0, -0x2B40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x296188u, 0x296190u)) {
        return;
    }
    ctx->pc = 0x296190u;
label_296190:
    // 0x296190: 0x8e82e7d0  lw          $v0, -0x1830($s4)
    ctx->pc = 0x296190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961104)));
    // 0x296194: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x296194u;
    {
        const bool branch_taken_0x296194 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x296198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296194u;
        // 0x296198: 0x3c04006b  lui         $a0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296194) {
            ctx->pc = 0x2961A8u;
            goto label_2961a8;
        }
    }
    ctx->pc = 0x29619Cu;
    // 0x29619c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x29619cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2961a0: 0xc0c8ebc  jal         func_323AF0
    ctx->pc = 0x2961A0u;
    SET_GPR_U32(ctx, 31, 0x2961A8u);
    ctx->pc = 0x2961A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961A0u;
    // 0x2961a4: 0x2484d4d0  addiu       $a0, $a0, -0x2B30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323AF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x323AF0u, 0x2961A0u, 0x2961A8u)) {
        return;
    }
    ctx->pc = 0x2961A8u;
label_2961a8:
    // 0x2961a8: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2961a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2961ac: 0x27c27b00  addiu       $v0, $fp, 0x7B00
    ctx->pc = 0x2961acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 31488));
    // 0x2961b0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2961b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2961b4: 0x8ec4e7e8  lw          $a0, -0x1818($s6)
    ctx->pc = 0x2961b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294961128)));
    // 0x2961b8: 0xc0c84d0  jal         func_321340
    ctx->pc = 0x2961B8u;
    SET_GPR_U32(ctx, 31, 0x2961C0u);
    ctx->pc = 0x2961BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2961B8u;
    // 0x2961bc: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321340u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321340u, 0x2961B8u, 0x2961C0u)) {
        return;
    }
    ctx->pc = 0x2961C0u;
label_2961c0:
    // 0x2961c0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2961c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2961c4:
    // 0x2961c4: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2961c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2961c8: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2961c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2961cc: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x2961ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2961d0: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x2961d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2961d4: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x2961d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2961d8: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x2961d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2961dc: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x2961dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2961e0: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2961e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2961e4: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x2961e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2961e8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2961e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2961ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2961ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2961F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2961ECu;
        // 0x2961f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2961ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2961F4u;
    // 0x2961f4: 0x0  nop
    ctx->pc = 0x2961f4u;
    // NOP
    ctx->pc = 0x2961f8u;
}
