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

// Function: sub_001E9768
// Address: 0x1e9768 - 0x1e9930
void sub_001E9768_0x1e9768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E9768_0x1e9768");
#endif

    switch (ctx->pc) {
        case 0x1e97ecu: goto label_1e97ec;
        case 0x1e980cu: goto label_1e980c;
        case 0x1e9894u: goto label_1e9894;
        case 0x1e98b4u: goto label_1e98b4;
        case 0x1e98c0u: goto label_1e98c0;
        case 0x1e98d8u: goto label_1e98d8;
        case 0x1e98e8u: goto label_1e98e8;
        default: break;
    }

    ctx->pc = 0x1e9768u;

    // 0x1e9768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1e9768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1e976c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1e976cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1e9770: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1e9770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1e9774: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1e9774u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9778: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1e9778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1e977c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1e977cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9780: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1e9780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1e9784: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1e9784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1e9788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e9788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e978c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1e978cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1e9790: 0x8c920018  lw          $s2, 0x18($a0)
    ctx->pc = 0x1e9790u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1e9794: 0x16400013  bnez        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x1E9794u;
    {
        const bool branch_taken_0x1e9794 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9794u;
        // 0x1e9798: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9794) {
            ctx->pc = 0x1E97E4u;
            goto label_1e97e4;
        }
    }
    ctx->pc = 0x1E979Cu;
    // 0x1e979c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1e979cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1e97a0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1e97a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1e97a4: 0x24471d38  addiu       $a3, $v0, 0x1D38
    ctx->pc = 0x1e97a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 7480));
    // 0x1e97a8: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x1e97a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1e97ac: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x1e97acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1e97b0: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x1e97b0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6A1D40u));
    // 0x1e97b4: 0xb2a40007  sdl         $a0, 0x7($s5)
    ctx->pc = 0x1e97b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e97b8: 0xb6a40000  sdr         $a0, 0x0($s5)
    ctx->pc = 0x1e97b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e97bc: 0xaea50008  sw          $a1, 0x8($s5)
    ctx->pc = 0x1e97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 5));
    // 0x1e97c0: 0x2466e788  addiu       $a2, $v1, -0x1878
    ctx->pc = 0x1e97c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961032));
    // 0x1e97c4: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x1e97c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1e97c8: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x1e97c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1e97cc: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e97ccu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E790u));
    // 0x1e97d0: 0xb2820007  sdl         $v0, 0x7($s4)
    ctx->pc = 0x1e97d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e97d4: 0xb6820000  sdr         $v0, 0x0($s4)
    ctx->pc = 0x1e97d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e97d8: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1e97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x1e97dc: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x1E97DCu;
    {
        const bool branch_taken_0x1e97dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E97E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E97DCu;
        // 0x1e97e0: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e97dc) {
            ctx->pc = 0x1E990Cu;
            goto label_1e990c;
        }
    }
    ctx->pc = 0x1E97E4u;
label_1e97e4:
    // 0x1e97e4: 0xc0a074a  jal         func_281D28
    ctx->pc = 0x1E97E4u;
    SET_GPR_U32(ctx, 31, 0x1E97ECu);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1E97E4u, 0x1E97ECu)) {
        return;
    }
    ctx->pc = 0x1E97ECu;
label_1e97ec:
    // 0x1e97ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1e97ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1e97f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1e97f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e97f4: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1e97f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1e97f8: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1E97F8u;
    {
        const bool branch_taken_0x1e97f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e97f8) {
            ctx->pc = 0x1E97FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E97F8u;
            // 0x1e97fc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E9800u;
            goto label_1e9800;
        }
    }
    ctx->pc = 0x1E9800u;
label_1e9800:
    // 0x1e9800: 0x2810  mfhi        $a1
    ctx->pc = 0x1e9800u;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x1e9804: 0xc07b37e  jal         func_1ECDF8
    ctx->pc = 0x1E9804u;
    SET_GPR_U32(ctx, 31, 0x1E980Cu);
    ctx->pc = 0x1ECDF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ECDF8u, 0x1E9804u, 0x1E980Cu)) {
        return;
    }
    ctx->pc = 0x1E980Cu;
label_1e980c:
    // 0x1e980c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1e980cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e9810: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x1e9810u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x1e9814: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x1e9814u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x1e9818: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1e9818u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e981c: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x1e981cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9820: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x1e9820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e9824: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1e9824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1e9828: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x1e9828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e982c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1e982cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1e9830: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1e9830u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1e9834: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1e9834u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1e9838: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1e9838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1e983c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1e983cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e9840: 0x0  nop
    ctx->pc = 0x1e9840u;
    // NOP
    // 0x1e9844: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1E9844u;
    {
        const bool branch_taken_0x1e9844 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9844u;
        // 0x1e9848: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9844) {
            ctx->pc = 0x1E9870u;
            goto label_1e9870;
        }
    }
    ctx->pc = 0x1E984Cu;
    // 0x1e984c: 0x2446e788  addiu       $a2, $v0, -0x1878
    ctx->pc = 0x1e984cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961032));
    // 0x1e9850: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x1e9850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1e9854: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x1e9854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1e9858: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1e9858u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1e985c: 0xb2830007  sdl         $v1, 0x7($s4)
    ctx->pc = 0x1e985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9860: 0xb6830000  sdr         $v1, 0x0($s4)
    ctx->pc = 0x1e9860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9864: 0xae840008  sw          $a0, 0x8($s4)
    ctx->pc = 0x1e9864u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 4));
    // 0x1e9868: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1E9868u;
    {
        const bool branch_taken_0x1e9868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9868u;
        // 0x1e986c: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e9868) {
            ctx->pc = 0x1E9898u;
            goto label_1e9898;
        }
    }
    ctx->pc = 0x1E9870u;
label_1e9870:
    // 0x1e9870: 0x6a270017  ldl         $a3, 0x17($s1)
    ctx->pc = 0x1e9870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1e9874: 0x6e270010  ldr         $a3, 0x10($s1)
    ctx->pc = 0x1e9874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1e9878: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x1e9878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1e987c: 0xb2870007  sdl         $a3, 0x7($s4)
    ctx->pc = 0x1e987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9880: 0xb6870000  sdr         $a3, 0x0($s4)
    ctx->pc = 0x1e9880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9884: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x1e9884u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x1e9888: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1e9888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e988c: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1E988Cu;
    SET_GPR_U32(ctx, 31, 0x1E9894u);
    ctx->pc = 0x1E9890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E988Cu;
    // 0x1e9890: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1E988Cu, 0x1E9894u)) {
        return;
    }
    ctx->pc = 0x1E9894u;
label_1e9894:
    // 0x1e9894: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1e9894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1e9898:
    // 0x1e9898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1e9898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e989c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1e989cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1e98a0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1e98a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1e98a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e98a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1e98a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1e98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1e98ac: 0xc07b020  jal         func_1EC080
    ctx->pc = 0x1E98ACu;
    SET_GPR_U32(ctx, 31, 0x1E98B4u);
    ctx->pc = 0x1E98B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98ACu;
    // 0x1e98b0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC080u, 0x1E98ACu, 0x1E98B4u)) {
        return;
    }
    ctx->pc = 0x1E98B4u;
label_1e98b4:
    // 0x1e98b4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1e98b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98b8: 0xc07b008  jal         func_1EC020
    ctx->pc = 0x1E98B8u;
    SET_GPR_U32(ctx, 31, 0x1E98C0u);
    ctx->pc = 0x1E98BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98B8u;
    // 0x1e98bc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EC020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EC020u, 0x1E98B8u, 0x1E98C0u)) {
        return;
    }
    ctx->pc = 0x1E98C0u;
label_1e98c0:
    // 0x1e98c0: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x1e98c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x1e98c4: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1E98C4u;
    {
        const bool branch_taken_0x1e98c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98C4u;
        // 0x1e98c8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98c4) {
            ctx->pc = 0x1E98F0u;
            goto label_1e98f0;
        }
    }
    ctx->pc = 0x1E98CCu;
    // 0x1e98cc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1e98ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98d0: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1E98D0u;
    SET_GPR_U32(ctx, 31, 0x1E98D8u);
    ctx->pc = 0x1E98D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98D0u;
    // 0x1e98d4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1E98D0u, 0x1E98D8u)) {
        return;
    }
    ctx->pc = 0x1E98D8u;
label_1e98d8:
    // 0x1e98d8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1e98d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1e98dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e98e0: 0xc093b0a  jal         func_24EC28
    ctx->pc = 0x1E98E0u;
    SET_GPR_U32(ctx, 31, 0x1E98E8u);
    ctx->pc = 0x1E98E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E98E0u;
    // 0x1e98e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC28u, 0x1E98E0u, 0x1E98E8u)) {
        return;
    }
    ctx->pc = 0x1E98E8u;
label_1e98e8:
    // 0x1e98e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1E98E8u;
    {
        const bool branch_taken_0x1e98e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E98E8u;
        // 0x1e98ec: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e98e8) {
            ctx->pc = 0x1E990Cu;
            goto label_1e990c;
        }
    }
    ctx->pc = 0x1E98F0u;
label_1e98f0:
    // 0x1e98f0: 0x6a250007  ldl         $a1, 0x7($s1)
    ctx->pc = 0x1e98f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1e98f4: 0x6e250000  ldr         $a1, 0x0($s1)
    ctx->pc = 0x1e98f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1e98f8: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x1e98f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1e98fc: 0xb2a50007  sdl         $a1, 0x7($s5)
    ctx->pc = 0x1e98fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9900: 0xb6a50000  sdr         $a1, 0x0($s5)
    ctx->pc = 0x1e9900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1e9904: 0xaea60008  sw          $a2, 0x8($s5)
    ctx->pc = 0x1e9904u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 6));
    // 0x1e9908: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1e9908u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1e990c:
    // 0x1e990c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1e990cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1e9910: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1e9910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1e9914: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1e9914u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1e9918: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1e9918u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1e991c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1e991cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9920: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e9920u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9924: 0x3e00008  jr          $ra
    ctx->pc = 0x1E9924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E9924u;
        // 0x1e9928: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E9924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E992Cu;
    // 0x1e992c: 0x0  nop
    ctx->pc = 0x1e992cu;
    // NOP
    ctx->pc = 0x1e9930u;
}
