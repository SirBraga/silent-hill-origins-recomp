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

// Function: sub_0014D5F0
// Address: 0x14d5f0 - 0x14d788
void sub_0014D5F0_0x14d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D5F0_0x14d5f0");
#endif

    switch (ctx->pc) {
        case 0x14d6ccu: goto label_14d6cc;
        default: break;
    }

    ctx->pc = 0x14d5f0u;

    // 0x14d5f0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14d5f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14d5f4: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x14d5f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x14d5f8: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x14d5f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x14d5fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14d5fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d600: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14d600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14d604: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14d604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14d608: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x14d608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d60c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x14d60cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x14d610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14d610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14d614: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x14d614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x14d618: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x14d618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14d61c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d620: 0xb222002b  sdl         $v0, 0x2B($s1)
    ctx->pc = 0x14d620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d624: 0xb6220024  sdr         $v0, 0x24($s1)
    ctx->pc = 0x14d624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d628: 0xae23002c  sw          $v1, 0x2C($s1)
    ctx->pc = 0x14d628u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 3));
    // 0x14d62c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14d62cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x14d630: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x14d630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x14d634: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x14d634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x14d638: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x14d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x14d63c: 0x46002885  abs.s       $f2, $f5
    ctx->pc = 0x14d63cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[5]);
    // 0x14d640: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x14d640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x14d644: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x14d644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x14d648: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x14d648u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x14d64c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x14d64cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14d650: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x14d650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x14d654: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x14D654u;
    {
        const bool branch_taken_0x14d654 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14D658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D654u;
        // 0x14d658: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d654) {
            ctx->pc = 0x14D690u;
            goto label_14d690;
        }
    }
    ctx->pc = 0x14D65Cu;
    // 0x14d65c: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d660: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x14d660u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d664: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x14d664u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d668: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x14d668u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14d66c: 0x46001842  mul.s       $f1, $f3, $f0
    ctx->pc = 0x14d66cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x14d670: 0x46002902  mul.s       $f4, $f5, $f0
    ctx->pc = 0x14d670u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x14d674: 0x460310c1  sub.s       $f3, $f2, $f3
    ctx->pc = 0x14d674u;
    ctx->f[3] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x14d678: 0x46022881  sub.s       $f2, $f5, $f2
    ctx->pc = 0x14d678u;
    ctx->f[2] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
    // 0x14d67c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14d67cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x14d680: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x14d680u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x14d684: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x14d684u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14d688: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14D688u;
    {
        const bool branch_taken_0x14d688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D688u;
        // 0x14d68c: 0xe7a10028  swc1        $f1, 0x28($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d688) {
            ctx->pc = 0x14D6C0u;
            goto label_14d6c0;
        }
    }
    ctx->pc = 0x14D690u;
label_14d690:
    // 0x14d690: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14d690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d694: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x14d694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d698: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x14d698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d69c: 0x460028c2  mul.s       $f3, $f5, $f0
    ctx->pc = 0x14d69cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x14d6a0: 0x46001102  mul.s       $f4, $f2, $f0
    ctx->pc = 0x14d6a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x14d6a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x14d6a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x14d6a8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x14d6a8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x14d6ac: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x14d6acu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x14d6b0: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x14d6b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x14d6b4: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x14d6b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x14d6b8: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x14d6b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x14d6bc: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x14d6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_14d6c0:
    // 0x14d6c0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x14d6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14d6c4: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x14D6C4u;
    SET_GPR_U32(ctx, 31, 0x14D6CCu);
    ctx->pc = 0x14D6C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14D6C4u;
    // 0x14d6c8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x14D6C4u, 0x14D6CCu)) {
        return;
    }
    ctx->pc = 0x14D6CCu;
label_14d6cc:
    // 0x14d6cc: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x14d6ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x14d6d0: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x14d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14d6d4: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x14d6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x14d6d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x14d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14d6dc: 0xc7a70028  lwc1        $f7, 0x28($sp)
    ctx->pc = 0x14d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x14d6e0: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x14d6e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x14d6e4: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x14d6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x14d6e8: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x14d6e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x14d6ec: 0x46072142  mul.s       $f5, $f4, $f7
    ctx->pc = 0x14d6ecu;
    ctx->f[5] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x14d6f0: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x14d6f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x14d6f4: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x14d6f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x14d6f8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x14d6f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
    // 0x14d6fc: 0x46062941  sub.s       $f5, $f5, $f6
    ctx->pc = 0x14d6fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[6]);
    // 0x14d700: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x14d700u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x14d704: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x14d704u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x14d708: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x14d708u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x14d70c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x14d70cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x14d710: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x14d710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x14d714: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x14d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x14d718: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x14d718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14d71c: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x14d71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14d720: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x14d720u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x14d724: 0xb2260057  sdl         $a2, 0x57($s1)
    ctx->pc = 0x14d724u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d728: 0xb6260050  sdr         $a2, 0x50($s1)
    ctx->pc = 0x14d728u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d72c: 0xae230058  sw          $v1, 0x58($s1)
    ctx->pc = 0x14d72cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 3));
    // 0x14d730: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x14d730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14d734: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x14d734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14d738: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x14d738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x14d73c: 0xb2260047  sdl         $a2, 0x47($s1)
    ctx->pc = 0x14d73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d740: 0xb6260040  sdr         $a2, 0x40($s1)
    ctx->pc = 0x14d740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d744: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x14d744u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x14d748: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14d748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14d74c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x14d74cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x14d750: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x14d750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14d754: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x14d754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x14d758: 0xb2260037  sdl         $a2, 0x37($s1)
    ctx->pc = 0x14d758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d75c: 0xb6260030  sdr         $a2, 0x30($s1)
    ctx->pc = 0x14d75cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x14d760: 0xae230038  sw          $v1, 0x38($s1)
    ctx->pc = 0x14d760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    // 0x14d764: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x14d764u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x14d768: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x14d768u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x14d76c: 0xe6200060  swc1        $f0, 0x60($s1)
    ctx->pc = 0x14d76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 96), bits); }
    // 0x14d770: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14d770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14d774: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14d774u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14d778: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x14d778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14d77c: 0x3e00008  jr          $ra
    ctx->pc = 0x14D77Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D77Cu;
        // 0x14d780: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D77Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D784u;
    // 0x14d784: 0x0  nop
    ctx->pc = 0x14d784u;
    // NOP
    ctx->pc = 0x14d788u;
}
