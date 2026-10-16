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

// Function: sub_00164CA0
// Address: 0x164ca0 - 0x164ec0
void sub_00164CA0_0x164ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164CA0_0x164ca0");
#endif

    switch (ctx->pc) {
        case 0x164cecu: goto label_164cec;
        case 0x164d28u: goto label_164d28;
        case 0x164d50u: goto label_164d50;
        case 0x164e0cu: goto label_164e0c;
        case 0x164e7cu: goto label_164e7c;
        default: break;
    }

    ctx->pc = 0x164ca0u;

    // 0x164ca0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x164ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x164ca4: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x164ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x164ca8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x164ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x164cac: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x164cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cb0: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x164cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x164cb4: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x164cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164cb8: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x164cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x164cbc: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x164cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x164cc0: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x164cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x164cc4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x164cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x164cc8: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164CC8u;
    {
        const bool branch_taken_0x164cc8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x164CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CC8u;
        // 0x164ccc: 0xac806b1c  sw          $zero, 0x6B1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 27420), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cc8) {
            ctx->pc = 0x164CD8u;
            goto label_164cd8;
        }
    }
    ctx->pc = 0x164CD0u;
    // 0x164cd0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x164CD0u;
    {
        const bool branch_taken_0x164cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164CD0u;
        // 0x164cd4: 0x24916afc  addiu       $s1, $a0, 0x6AFC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 27388));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164cd0) {
            ctx->pc = 0x164CF0u;
            goto label_164cf0;
        }
    }
    ctx->pc = 0x164CD8u;
label_164cd8:
    // 0x164cd8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x164cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x164cdc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x164cdcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ce0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x164ce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164ce4: 0xc058ece  jal         func_163B38
    ctx->pc = 0x164CE4u;
    SET_GPR_U32(ctx, 31, 0x164CECu);
    ctx->pc = 0x164CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164CE4u;
    // 0x164ce8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x163B38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x163B38u, 0x164CE4u, 0x164CECu)) {
        return;
    }
    ctx->pc = 0x164CECu;
label_164cec:
    // 0x164cec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x164cecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_164cf0:
    // 0x164cf0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x164cf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x164cf4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164cf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164cf8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x164cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x164cfc: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x164cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x164d00: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x164d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x164d04: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x164d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x164d08: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x164d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x164d0c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x164d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x164d10: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x164d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x164d14: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x164D14u;
    {
        const bool branch_taken_0x164d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D14u;
        // 0x164d18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d14) {
            ctx->pc = 0x164E98u;
            goto label_164e98;
        }
    }
    ctx->pc = 0x164D1Cu;
    // 0x164d1c: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x164d1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x164d20: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x164d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x164d24: 0x0  nop
    ctx->pc = 0x164d24u;
    // NOP
label_164d28:
    // 0x164d28: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x164d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x164d2c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x164d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164d30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x164d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164d34: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x164D34u;
    {
        const bool branch_taken_0x164d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x164D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D34u;
        // 0x164d38: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d34) {
            ctx->pc = 0x164D40u;
            goto label_164d40;
        }
    }
    ctx->pc = 0x164D3Cu;
    // 0x164d3c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x164d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_164d40:
    // 0x164d40: 0x8c930004  lw          $s3, 0x4($a0)
    ctx->pc = 0x164d40u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x164d44: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x164d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164d48: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x164D48u;
    SET_GPR_U32(ctx, 31, 0x164D50u);
    ctx->pc = 0x164D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164D48u;
    // 0x164d4c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x164D48u, 0x164D50u)) {
        return;
    }
    ctx->pc = 0x164D50u;
label_164d50:
    // 0x164d50: 0xc7a80044  lwc1        $f8, 0x44($sp)
    ctx->pc = 0x164d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x164d54: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x164d54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x164d58: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x164d58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x164d5c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x164d5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x164d60: 0x46004005  abs.s       $f0, $f8
    ctx->pc = 0x164d60u;
    ctx->f[0] = FPU_ABS_S(ctx->f[8]);
    // 0x164d64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x164d64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164d68: 0x0  nop
    ctx->pc = 0x164d68u;
    // NOP
    // 0x164d6c: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x164D6Cu;
    {
        const bool branch_taken_0x164d6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x164D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164D6Cu;
        // 0x164d70: 0xc7a20048  lwc1        $f2, 0x48($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164d6c) {
            ctx->pc = 0x164DB8u;
            goto label_164db8;
        }
    }
    ctx->pc = 0x164D74u;
    // 0x164d74: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x164d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164d78: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x164d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164d7c: 0x46001182  mul.s       $f6, $f2, $f0
    ctx->pc = 0x164d7cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x164d80: 0xc7a50018  lwc1        $f5, 0x18($sp)
    ctx->pc = 0x164d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x164d84: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x164d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164d88: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x164d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164d8c: 0x46054102  mul.s       $f4, $f8, $f5
    ctx->pc = 0x164d8cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x164d90: 0x460341c2  mul.s       $f7, $f8, $f3
    ctx->pc = 0x164d90u;
    ctx->f[7] = FPU_MUL_S(ctx->f[8], ctx->f[3]);
    // 0x164d94: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x164d94u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x164d98: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x164d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x164d9c: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x164d9cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x164da0: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x164da0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x164da4: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x164da4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x164da8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x164da8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164dac: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x164dacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x164db0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x164DB0u;
    {
        const bool branch_taken_0x164db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x164DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164DB0u;
        // 0x164db4: 0xe7a20024  swc1        $f2, 0x24($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x164db0) {
            ctx->pc = 0x164E00u;
            goto label_164e00;
        }
    }
    ctx->pc = 0x164DB8u;
label_164db8:
    // 0x164db8: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x164db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x164dbc: 0xc7a60048  lwc1        $f6, 0x48($sp)
    ctx->pc = 0x164dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x164dc0: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x164dc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164dc4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x164dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164dc8: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x164dc8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x164dcc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x164dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164dd0: 0x460801c2  mul.s       $f7, $f0, $f8
    ctx->pc = 0x164dd0u;
    ctx->f[7] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x164dd4: 0x46080882  mul.s       $f2, $f1, $f8
    ctx->pc = 0x164dd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x164dd8: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x164dd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x164ddc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x164ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x164de0: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x164de0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x164de4: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x164de4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x164de8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x164de8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x164dec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x164decu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x164df0: 0xe7a50020  swc1        $f5, 0x20($sp)
    ctx->pc = 0x164df0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x164df4: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x164df4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x164df8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x164df8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x164dfc: 0x0  nop
    ctx->pc = 0x164dfcu;
    // NOP
label_164e00:
    // 0x164e00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x164e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e04: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x164E04u;
    SET_GPR_U32(ctx, 31, 0x164E0Cu);
    ctx->pc = 0x164E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164E04u;
    // 0x164e08: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x164E04u, 0x164E0Cu)) {
        return;
    }
    ctx->pc = 0x164E0Cu;
label_164e0c:
    // 0x164e0c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x164e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x164e10: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x164e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x164e14: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x164e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x164e18: 0xc7a60028  lwc1        $f6, 0x28($sp)
    ctx->pc = 0x164e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x164e1c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x164e1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x164e20: 0x460011c2  mul.s       $f7, $f2, $f0
    ctx->pc = 0x164e20u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x164e24: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x164e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x164e28: 0x46062142  mul.s       $f5, $f4, $f6
    ctx->pc = 0x164e28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x164e2c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x164e2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x164e30: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x164e30u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x164e34: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x164e34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x164e38: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x164e38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x164e3c: 0x46072941  sub.s       $f5, $f5, $f7
    ctx->pc = 0x164e3cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[7]);
    // 0x164e40: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x164e40u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x164e44: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x164e44u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x164e48: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x164e48u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x164e4c: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x164e4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x164e50: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x164e50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x164e54: 0x6aa20007  ldl         $v0, 0x7($s5)
    ctx->pc = 0x164e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x164e58: 0x6ea20000  ldr         $v0, 0x0($s5)
    ctx->pc = 0x164e58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x164e5c: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x164e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x164e60: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x164e60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x164e64: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x164e64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x164e68: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x164e68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x164e6c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x164e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e70: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x164e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e74: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x164E74u;
    SET_GPR_U32(ctx, 31, 0x164E7Cu);
    ctx->pc = 0x164E78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x164E74u;
    // 0x164e78: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x164E74u, 0x164E7Cu)) {
        return;
    }
    ctx->pc = 0x164E7Cu;
label_164e7c:
    // 0x164e7c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x164e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x164e80: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x164e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x164e84: 0x307000ff  andi        $s0, $v1, 0xFF
    ctx->pc = 0x164e84u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x164e88: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x164e88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x164e8c: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x164E8Cu;
    {
        const bool branch_taken_0x164e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x164E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164E8Cu;
        // 0x164e90: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164e8c) {
            ctx->pc = 0x164D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_164d28;
        }
    }
    ctx->pc = 0x164E94u;
    // 0x164e94: 0x0  nop
    ctx->pc = 0x164e94u;
    // NOP
label_164e98:
    // 0x164e98: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x164e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164e9c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x164e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x164ea0: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x164ea0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x164ea4: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x164ea4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x164ea8: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x164ea8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x164eac: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x164eacu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x164eb0: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x164eb0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x164eb4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x164eb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x164eb8: 0x3e00008  jr          $ra
    ctx->pc = 0x164EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164EB8u;
        // 0x164ebc: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164EB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164EC0u;
}
