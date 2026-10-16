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

// Function: sub_001B8BC0
// Address: 0x1b8bc0 - 0x1b8d00
void sub_001B8BC0_0x1b8bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8BC0_0x1b8bc0");
#endif

    switch (ctx->pc) {
        case 0x1b8c0cu: goto label_1b8c0c;
        case 0x1b8c18u: goto label_1b8c18;
        case 0x1b8c48u: goto label_1b8c48;
        default: break;
    }

    ctx->pc = 0x1b8bc0u;

    // 0x1b8bc0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1b8bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1b8bc4: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1b8bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1b8bc8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1b8bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1b8bcc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b8bccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bd0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1b8bd0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8bd4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1b8bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1b8bd8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1b8bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1b8bdc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1b8bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1b8be0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b8be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1b8be4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b8be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8be8: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1b8be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1b8bec: 0x261402cc  addiu       $s4, $s0, 0x2CC
    ctx->pc = 0x1b8becu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 716));
    // 0x1b8bf0: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1b8bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1b8bf4: 0x261302c8  addiu       $s3, $s0, 0x2C8
    ctx->pc = 0x1b8bf4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 712));
    // 0x1b8bf8: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1b8bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1b8bfc: 0x261102c4  addiu       $s1, $s0, 0x2C4
    ctx->pc = 0x1b8bfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x1b8c00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8c04: 0xc06bbf8  jal         func_1AEFE0
    ctx->pc = 0x1B8C04u;
    SET_GPR_U32(ctx, 31, 0x1B8C0Cu);
    ctx->pc = 0x1B8C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C04u;
    // 0x1b8c08: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEFE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEFE0u, 0x1B8C04u, 0x1B8C0Cu)) {
        return;
    }
    ctx->pc = 0x1B8C0Cu;
label_1b8c0c:
    // 0x1b8c0c: 0x24170002  addiu       $s7, $zero, 0x2
    ctx->pc = 0x1b8c0cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1b8c10: 0x24160003  addiu       $s6, $zero, 0x3
    ctx->pc = 0x1b8c10u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b8c14: 0x0  nop
    ctx->pc = 0x1b8c14u;
    // NOP
label_1b8c18:
    // 0x1b8c18: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1b8c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1b8c1c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B8C1Cu;
    {
        const bool branch_taken_0x1b8c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C1Cu;
        // 0x1b8c20: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c1c) {
            ctx->pc = 0x1B8CB4u;
            goto label_1b8cb4;
        }
    }
    ctx->pc = 0x1B8C24u;
    // 0x1b8c24: 0xc6ac0004  lwc1        $f12, 0x4($s5)
    ctx->pc = 0x1b8c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b8c28: 0x3c013ea8  lui         $at, 0x3EA8
    ctx->pc = 0x1b8c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16040 << 16));
    // 0x1b8c2c: 0x3421f5c3  ori         $at, $at, 0xF5C3
    ctx->pc = 0x1b8c2cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62915);
    // 0x1b8c30: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1b8c30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x1b8c34: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1b8c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b8c38: 0xc60e02c0  lwc1        $f14, 0x2C0($s0)
    ctx->pc = 0x1b8c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1b8c3c: 0xc62f0010  lwc1        $f15, 0x10($s1)
    ctx->pc = 0x1b8c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x1b8c40: 0xc06d01e  jal         func_1B4078
    ctx->pc = 0x1B8C40u;
    SET_GPR_U32(ctx, 31, 0x1B8C48u);
    ctx->pc = 0x1B8C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B8C40u;
    // 0x1b8c44: 0xc630000c  lwc1        $f16, 0xC($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B4078u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B4078u, 0x1B8C40u, 0x1B8C48u)) {
        return;
    }
    ctx->pc = 0x1B8C48u;
label_1b8c48:
    // 0x1b8c48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b8c48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b8c4c: 0x125e0011  beq         $s2, $fp, . + 4 + (0x11 << 2)
    ctx->pc = 0x1B8C4Cu;
    {
        const bool branch_taken_0x1b8c4c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 30));
        ctx->pc = 0x1B8C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C4Cu;
        // 0x1b8c50: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c4c) {
            ctx->pc = 0x1B8C94u;
            goto label_1b8c94;
        }
    }
    ctx->pc = 0x1B8C54u;
    // 0x1b8c54: 0x2a420002  slti        $v0, $s2, 0x2
    ctx->pc = 0x1b8c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b8c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8C58u;
    {
        const bool branch_taken_0x1b8c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c58) {
            ctx->pc = 0x1B8C70u;
            goto label_1b8c70;
        }
    }
    ctx->pc = 0x1B8C60u;
    // 0x1b8c60: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8C60u;
    {
        const bool branch_taken_0x1b8c60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b8c60) {
            ctx->pc = 0x1B8C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8C60u;
            // 0x1b8c64: 0x8e02028c  lw          $v0, 0x28C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 652)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8C88u;
            goto label_1b8c88;
        }
    }
    ctx->pc = 0x1B8C68u;
    // 0x1b8c68: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1B8C68u;
    {
        const bool branch_taken_0x1b8c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C68u;
        // 0x1b8c6c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c68) {
            ctx->pc = 0x1B8CB8u;
            goto label_1b8cb8;
        }
    }
    ctx->pc = 0x1B8C70u;
label_1b8c70:
    // 0x1b8c70: 0x5257000c  beql        $s2, $s7, . + 4 + (0xC << 2)
    ctx->pc = 0x1B8C70u;
    {
        const bool branch_taken_0x1b8c70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 23));
        if (branch_taken_0x1b8c70) {
            ctx->pc = 0x1B8C74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8C70u;
            // 0x1b8c74: 0x8e020294  lw          $v0, 0x294($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 660)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CA4u;
            goto label_1b8ca4;
        }
    }
    ctx->pc = 0x1B8C78u;
    // 0x1b8c78: 0x5256000c  beql        $s2, $s6, . + 4 + (0xC << 2)
    ctx->pc = 0x1B8C78u;
    {
        const bool branch_taken_0x1b8c78 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 22));
        if (branch_taken_0x1b8c78) {
            ctx->pc = 0x1B8C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B8C78u;
            // 0x1b8c7c: 0x8e020298  lw          $v0, 0x298($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 664)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B8CACu;
            goto label_1b8cac;
        }
    }
    ctx->pc = 0x1B8C80u;
    // 0x1b8c80: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1B8C80u;
    {
        const bool branch_taken_0x1b8c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C80u;
        // 0x1b8c84: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c80) {
            ctx->pc = 0x1B8CB8u;
            goto label_1b8cb8;
        }
    }
    ctx->pc = 0x1B8C88u;
label_1b8c88:
    // 0x1b8c88: 0xc60002cc  lwc1        $f0, 0x2CC($s0)
    ctx->pc = 0x1b8c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c8c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1B8C8Cu;
    {
        const bool branch_taken_0x1b8c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C8Cu;
        // 0x1b8c90: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c8c) {
            ctx->pc = 0x1B8CB4u;
            goto label_1b8cb4;
        }
    }
    ctx->pc = 0x1B8C94u;
label_1b8c94:
    // 0x1b8c94: 0x8e020290  lw          $v0, 0x290($s0)
    ctx->pc = 0x1b8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 656)));
    // 0x1b8c98: 0xc60002e0  lwc1        $f0, 0x2E0($s0)
    ctx->pc = 0x1b8c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b8c9c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1B8C9Cu;
    {
        const bool branch_taken_0x1b8c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8C9Cu;
        // 0x1b8ca0: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8c9c) {
            ctx->pc = 0x1B8CB4u;
            goto label_1b8cb4;
        }
    }
    ctx->pc = 0x1B8CA4u;
label_1b8ca4:
    // 0x1b8ca4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B8CA4u;
    {
        const bool branch_taken_0x1b8ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CA4u;
        // 0x1b8ca8: 0xc60002f4  lwc1        $f0, 0x2F4($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8ca4) {
            ctx->pc = 0x1B8CB0u;
            goto label_1b8cb0;
        }
    }
    ctx->pc = 0x1B8CACu;
label_1b8cac:
    // 0x1b8cac: 0xc6000308  lwc1        $f0, 0x308($s0)
    ctx->pc = 0x1b8cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b8cb0:
    // 0x1b8cb0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x1b8cb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1b8cb4:
    // 0x1b8cb4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1b8cb4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1b8cb8:
    // 0x1b8cb8: 0x26940014  addiu       $s4, $s4, 0x14
    ctx->pc = 0x1b8cb8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x1b8cbc: 0x26730014  addiu       $s3, $s3, 0x14
    ctx->pc = 0x1b8cbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x1b8cc0: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1b8cc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b8cc4: 0x1440ffd4  bnez        $v0, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1B8CC4u;
    {
        const bool branch_taken_0x1b8cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B8CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CC4u;
        // 0x1b8cc8: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b8cc4) {
            ctx->pc = 0x1B8C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b8c18;
        }
    }
    ctx->pc = 0x1B8CCCu;
    // 0x1b8ccc: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1b8cccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b8cd0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1b8cd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b8cd4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1b8cd4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b8cd8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1b8cd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b8cdc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b8cdcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b8ce0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1b8ce0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b8ce4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1b8ce4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b8ce8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1b8ce8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b8cec: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x1b8cecu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8cf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8cf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b8cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x1B8CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B8CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B8CF4u;
        // 0x1b8cf8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B8CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B8CFCu;
    // 0x1b8cfc: 0x0  nop
    ctx->pc = 0x1b8cfcu;
    // NOP
    ctx->pc = 0x1b8d00u;
}
