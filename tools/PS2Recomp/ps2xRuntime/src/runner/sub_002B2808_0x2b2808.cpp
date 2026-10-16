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

// Function: sub_002B2808
// Address: 0x2b2808 - 0x2b2a38
void sub_002B2808_0x2b2808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B2808_0x2b2808");
#endif

    switch (ctx->pc) {
        case 0x2b2870u: goto label_2b2870;
        case 0x2b2898u: goto label_2b2898;
        case 0x2b28d0u: goto label_2b28d0;
        case 0x2b29dcu: goto label_2b29dc;
        default: break;
    }

    ctx->pc = 0x2b2808u;

    // 0x2b2808: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2b2808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2b280c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2b280cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2810: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2b2810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2b2814: 0xe7b70078  swc1        $f23, 0x78($sp)
    ctx->pc = 0x2b2814u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x2b2818: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b2818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b281c: 0xe7b60070  swc1        $f22, 0x70($sp)
    ctx->pc = 0x2b281cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2b2820: 0x2622000c  addiu       $v0, $s1, 0xC
    ctx->pc = 0x2b2820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x2b2824: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x2b2824u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2b2828: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2b2828u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2b282c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2b282cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2b2830: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2b2830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2b2834: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2b2834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2b2838: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2b2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2b283c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b283cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b2840: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x2b2840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2844: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b2844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2848: 0x460005c2  mul.s       $f23, $f0, $f0
    ctx->pc = 0x2b2848u;
    ctx->f[23] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b284c: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b284cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2850: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2b2850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2854: 0x46010d82  mul.s       $f22, $f1, $f1
    ctx->pc = 0x2b2854u;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b2858: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2b2858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2b285c: 0x46021542  mul.s       $f21, $f2, $f2
    ctx->pc = 0x2b285cu;
    ctx->f[21] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b2860: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
    ctx->pc = 0x2B2860u;
    {
        const bool branch_taken_0x2b2860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2860u;
        // 0x2b2864: 0x46000502  mul.s       $f20, $f0, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2860) {
            ctx->pc = 0x2B2A04u;
            goto label_2b2a04;
        }
    }
    ctx->pc = 0x2B2868u;
    // 0x2b2868: 0x24140028  addiu       $s4, $zero, 0x28
    ctx->pc = 0x2b2868u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b286c: 0xb42018  mult        $a0, $a1, $s4
    ctx->pc = 0x2b286cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2b2870:
    // 0x2b2870: 0x8e2300d4  lw          $v1, 0xD4($s1)
    ctx->pc = 0x2b2870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2b2874: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x2b2874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2b2878: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2b2878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2b287c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b287cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x2b2880: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x2B2880u;
    {
        const bool branch_taken_0x2b2880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B2884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2880u;
        // 0x2b2884: 0x24b30001  addiu       $s3, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b2880) {
            ctx->pc = 0x2B29F0u;
            goto label_2b29f0;
        }
    }
    ctx->pc = 0x2B2888u;
    // 0x2b2888: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2b2888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b288c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x2B288Cu;
    {
        const bool branch_taken_0x2b288c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B2890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B288Cu;
        // 0x2b2890: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b288c) {
            ctx->pc = 0x2B29F0u;
            goto label_2b29f0;
        }
    }
    ctx->pc = 0x2B2894u;
    // 0x2b2894: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2b2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2b2898:
    // 0x2b2898: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2b2898u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x2b289c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b289cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b28a0: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2b28a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2b28a4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2b28a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2b28a8: 0x30460001  andi        $a2, $v0, 0x1
    ctx->pc = 0x2b28a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b28ac: 0x10c00048  beqz        $a2, . + 4 + (0x48 << 2)
    ctx->pc = 0x2B28ACu;
    {
        const bool branch_taken_0x2b28ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28ACu;
        // 0x2b28b0: 0x24920001  addiu       $s2, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28ac) {
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B28B4u;
    // 0x2b28b4: 0x94a3000c  lhu         $v1, 0xC($a1)
    ctx->pc = 0x2b28b4u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2b28b8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x2B28B8u;
    {
        const bool branch_taken_0x2b28b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B28BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B28B8u;
        // 0x2b28bc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b28b8) {
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B28C0u;
    // 0x2b28c0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x2b28c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2b28c4: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2b28c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b28c8: 0x24480004  addiu       $t0, $v0, 0x4
    ctx->pc = 0x2b28c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2b28cc: 0x0  nop
    ctx->pc = 0x2b28ccu;
    // NOP
label_2b28d0:
    // 0x2b28d0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2b28d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2b28d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2b28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b28d8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b28d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b28dc: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x2b28dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2b28e0: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b28e4: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x2b28e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x2b28e8: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x2b28e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b28ec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b28ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b28f0: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2b28f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b28f4: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b28f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b28f8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b28f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b28fc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b28fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b2900: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b2900u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b2904: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2904u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b2908: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2908u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b290c: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x2b290cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2910: 0x0  nop
    ctx->pc = 0x2b2910u;
    // NOP
    // 0x2b2914: 0x4503002e  bc1tl       . + 4 + (0x2E << 2)
    ctx->pc = 0x2B2914u;
    {
        const bool branch_taken_0x2b2914 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2914) {
            ctx->pc = 0x2B2918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2914u;
            // 0x2b2918: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B291Cu;
    // 0x2b291c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x2b291cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x2b2920: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x2b2920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2924: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b2924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2928: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b2928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b292c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2930: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b2930u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b2934: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b2934u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b2938: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2938u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b293c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b293cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2940: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2b2940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b2944: 0x0  nop
    ctx->pc = 0x2b2944u;
    // NOP
    // 0x2b2948: 0x45030021  bc1tl       . + 4 + (0x21 << 2)
    ctx->pc = 0x2B2948u;
    {
        const bool branch_taken_0x2b2948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2948) {
            ctx->pc = 0x2B294Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2948u;
            // 0x2b294c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B2950u;
    // 0x2b2950: 0x8ce20040  lw          $v0, 0x40($a3)
    ctx->pc = 0x2b2950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x2b2954: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2b2954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2b2958: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b2958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b295c: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2b295cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2960: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b2960u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b2964: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2b2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b2968: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b2968u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b296c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b296cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b2970: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b2970u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b2974: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b2974u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b2978: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2b2978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b297c: 0x0  nop
    ctx->pc = 0x2b297cu;
    // NOP
    // 0x2b2980: 0x45030013  bc1tl       . + 4 + (0x13 << 2)
    ctx->pc = 0x2B2980u;
    {
        const bool branch_taken_0x2b2980 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b2980) {
            ctx->pc = 0x2B2984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B2980u;
            // 0x2b2984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B2988u;
    // 0x2b2988: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x2b2988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2b298c: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2b298cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b2990: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b2990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2b2994: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b2994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b2998: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x2b2998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b299c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2b299cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2b29a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b29a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b29a4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2b29a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2b29a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b29a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2b29ac: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x2b29acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b29b0: 0x0  nop
    ctx->pc = 0x2b29b0u;
    // NOP
    // 0x2b29b4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B29B4u;
    {
        const bool branch_taken_0x2b29b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29B4u;
        // 0x2b29b8: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29b4) {
            ctx->pc = 0x2B29C4u;
            goto label_2b29c4;
        }
    }
    ctx->pc = 0x2B29BCu;
    // 0x2b29bc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2B29BCu;
    {
        const bool branch_taken_0x2b29bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29BCu;
        // 0x2b29c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29bc) {
            ctx->pc = 0x2B29D0u;
            goto label_2b29d0;
        }
    }
    ctx->pc = 0x2B29C4u;
label_2b29c4:
    // 0x2b29c4: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x2b29c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x2b29c8: 0x1440ffc1  bnez        $v0, . + 4 + (-0x3F << 2)
    ctx->pc = 0x2B29C8u;
    {
        const bool branch_taken_0x2b29c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B29C8u;
        // 0x2b29cc: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b29c8) {
            ctx->pc = 0x2B28D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b28d0;
        }
    }
    ctx->pc = 0x2B29D0u;
label_2b29d0:
    // 0x2b29d0: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x2b29d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x2b29d4: 0xc0ab42e  jal         func_2AD0B8
    ctx->pc = 0x2B29D4u;
    SET_GPR_U32(ctx, 31, 0x2B29DCu);
    ctx->pc = 0x2B29D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B29D4u;
    // 0x2b29d8: 0x38c60001  xori        $a2, $a2, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD0B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD0B8u, 0x2B29D4u, 0x2B29DCu)) {
        return;
    }
    ctx->pc = 0x2B29DCu;
label_2b29dc:
    // 0x2b29dc: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2b29dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2b29e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b29e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b29e4: 0x83182b  sltu        $v1, $a0, $v1
    ctx->pc = 0x2b29e4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x2b29e8: 0x5460ffab  bnel        $v1, $zero, . + 4 + (-0x55 << 2)
    ctx->pc = 0x2B29E8u;
    {
        const bool branch_taken_0x2b29e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b29e8) {
            ctx->pc = 0x2B29ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29E8u;
            // 0x2b29ec: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2898;
        }
    }
    ctx->pc = 0x2B29F0u;
label_2b29f0:
    // 0x2b29f0: 0x8e2200c8  lw          $v0, 0xC8($s1)
    ctx->pc = 0x2b29f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 200)));
    // 0x2b29f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2b29f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b29f8: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x2b29f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2b29fc: 0x5440ff9c  bnel        $v0, $zero, . + 4 + (-0x64 << 2)
    ctx->pc = 0x2B29FCu;
    {
        const bool branch_taken_0x2b29fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b29fc) {
            ctx->pc = 0x2B2A00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B29FCu;
            // 0x2b2a00: 0xb42018  mult        $a0, $a1, $s4 (Delay Slot)
            { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B2870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b2870;
        }
    }
    ctx->pc = 0x2B2A04u;
label_2b2a04:
    // 0x2b2a04: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b2a04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b2a08: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2b2a08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b2a0c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2b2a0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b2a10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2b2a10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b2a14: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2b2a14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b2a18: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2b2a18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b2a1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b2a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b2a20: 0xc7b70078  lwc1        $f23, 0x78($sp)
    ctx->pc = 0x2b2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2b2a24: 0xc7b60070  lwc1        $f22, 0x70($sp)
    ctx->pc = 0x2b2a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2b2a28: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x2b2a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2b2a2c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2b2a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b2a30: 0x3e00008  jr          $ra
    ctx->pc = 0x2B2A30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B2A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B2A30u;
        // 0x2b2a34: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B2A30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B2A38u;
}
