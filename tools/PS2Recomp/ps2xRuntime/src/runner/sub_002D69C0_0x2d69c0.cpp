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

// Function: sub_002D69C0
// Address: 0x2d69c0 - 0x2d6b10
void sub_002D69C0_0x2d69c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D69C0_0x2d69c0");
#endif

    switch (ctx->pc) {
        case 0x2d6a10u: goto label_2d6a10;
        case 0x2d6a28u: goto label_2d6a28;
        default: break;
    }

    ctx->pc = 0x2d69c0u;

    // 0x2d69c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2d69c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2d69c4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2d69c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2d69c8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x2d69c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x2d69cc: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x2d69ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x2d69d0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2d69d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69d4: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x2d69d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x2d69d8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2d69d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69dc: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x2d69dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x2d69e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d69e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69e4: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x2d69e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x2d69e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2d69e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69ec: 0xe7b40080  swc1        $f20, 0x80($sp)
    ctx->pc = 0x2d69ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x2d69f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2d69f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d69f4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2d69f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2d69f8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d69f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d69fc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2d69fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d6a00: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
    ctx->pc = 0x2D6A00u;
    {
        const bool branch_taken_0x2d6a00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D6A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6A00u;
        // 0x2d6a04: 0xc4543b80  lwc1        $f20, 0x3B80($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 15232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6a00) {
            ctx->pc = 0x2D6AD0u;
            goto label_2d6ad0;
        }
    }
    ctx->pc = 0x2D6A08u;
    // 0x2d6a08: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2d6a08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a0c: 0x0  nop
    ctx->pc = 0x2d6a0cu;
    // NOP
label_2d6a10:
    // 0x2d6a10: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2d6a10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d6a14: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d6a14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a18: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x2d6a18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a1c: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2d6a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2d6a20: 0xc0aa624  jal         func_2A9890
    ctx->pc = 0x2D6A20u;
    SET_GPR_U32(ctx, 31, 0x2D6A28u);
    ctx->pc = 0x2D6A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6A20u;
    // 0x2d6a24: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A9890u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9890u, 0x2D6A20u, 0x2D6A28u)) {
        return;
    }
    ctx->pc = 0x2D6A28u;
label_2d6a28:
    // 0x2d6a28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2d6a28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a2c: 0x50600024  beql        $v1, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2D6A2Cu;
    {
        const bool branch_taken_0x2d6a2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d6a2c) {
            ctx->pc = 0x2D6A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6A2Cu;
            // 0x2d6a30: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6AC0u;
            goto label_2d6ac0;
        }
    }
    ctx->pc = 0x2D6A34u;
    // 0x2d6a34: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2d6a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d6a38: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x2d6a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d6a3c: 0xc6020004  lwc1        $f2, 0x4($s0)
    ctx->pc = 0x2d6a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6a40: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2d6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d6a44: 0x46062842  mul.s       $f1, $f5, $f6
    ctx->pc = 0x2d6a44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2d6a48: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2d6a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d6a4c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2d6a4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x2d6a50: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6a54: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2d6a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2d6a58: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2d6a58u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2d6a5c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d6a5cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d6a60: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2d6a60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x2d6a64: 0xc442004c  lwc1        $f2, 0x4C($v0)
    ctx->pc = 0x2d6a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d6a68: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2d6a68u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2d6a6c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2d6a6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2d6a70: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2d6a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6a74: 0x0  nop
    ctx->pc = 0x2d6a74u;
    // NOP
    // 0x2d6a78: 0x45020011  bc1fl       . + 4 + (0x11 << 2)
    ctx->pc = 0x2D6A78u;
    {
        const bool branch_taken_0x2d6a78 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d6a78) {
            ctx->pc = 0x2D6A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D6A78u;
            // 0x2d6a7c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6AC0u;
            goto label_2d6ac0;
        }
    }
    ctx->pc = 0x2D6A80u;
    // 0x2d6a80: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x2d6a80u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x2d6a84: 0x46022802  mul.s       $f0, $f5, $f2
    ctx->pc = 0x2d6a84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2d6a88: 0x46003000  add.s       $f0, $f6, $f0
    ctx->pc = 0x2d6a88u;
    ctx->f[0] = FPU_ADD_S(ctx->f[6], ctx->f[0]);
    // 0x2d6a8c: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x2d6a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x2d6a90: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x2d6a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6a94: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2d6a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6a98: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d6a98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d6a9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6a9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6aa0: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x2d6aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x2d6aa4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x2d6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d6aa8: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2d6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6aac: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2d6aacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2d6ab0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d6ab0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d6ab4: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x2d6ab4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x2d6ab8: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2d6ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2d6abc: 0x0  nop
    ctx->pc = 0x2d6abcu;
    // NOP
label_2d6ac0:
    // 0x2d6ac0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2d6ac0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x2d6ac4: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x2d6ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2d6ac8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x2D6AC8u;
    {
        const bool branch_taken_0x2d6ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AC8u;
        // 0x2d6acc: 0x26730060  addiu       $s3, $s3, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ac8) {
            ctx->pc = 0x2D6A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6a10;
        }
    }
    ctx->pc = 0x2D6AD0u;
label_2d6ad0:
    // 0x2d6ad0: 0xc6a03b80  lwc1        $f0, 0x3B80($s5)
    ctx->pc = 0x2d6ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 15232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d6ad4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d6ad4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d6ad8: 0x0  nop
    ctx->pc = 0x2d6ad8u;
    // NOP
    // 0x2d6adc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x2D6ADCu;
    {
        const bool branch_taken_0x2d6adc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D6AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6ADCu;
        // 0x2d6ae0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6adc) {
            ctx->pc = 0x2D6AE8u;
            goto label_2d6ae8;
        }
    }
    ctx->pc = 0x2D6AE4u;
    // 0x2d6ae4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2d6ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d6ae8:
    // 0x2d6ae8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x2d6ae8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d6aec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x2d6aecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d6af0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x2d6af0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d6af4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2d6af4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d6af8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x2d6af8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d6afc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x2d6afcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6b00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d6b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b04: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x2d6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B08u;
        // 0x2d6b0c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B10u;
}
