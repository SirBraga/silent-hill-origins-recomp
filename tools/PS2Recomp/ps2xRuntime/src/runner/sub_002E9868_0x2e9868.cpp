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

// Function: sub_002E9868
// Address: 0x2e9868 - 0x2e99d0
void sub_002E9868_0x2e9868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9868_0x2e9868");
#endif

    switch (ctx->pc) {
        case 0x2e98acu: goto label_2e98ac;
        case 0x2e98b8u: goto label_2e98b8;
        case 0x2e98ccu: goto label_2e98cc;
        case 0x2e9950u: goto label_2e9950;
        case 0x2e99a0u: goto label_2e99a0;
        default: break;
    }

    ctx->pc = 0x2e9868u;

    // 0x2e9868: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e9868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e986c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2e986cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9870: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2e9870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2e9874: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e9874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e9878: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2e9878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2e987c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2e987cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9880: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2e9880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2e9884: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e9884u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9888: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e988c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2e988cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2e9890: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2e9890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e9894: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2e9894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2e9898: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2E9898u;
    {
        const bool branch_taken_0x2e9898 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E989Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9898u;
        // 0x2e989c: 0x26510040  addiu       $s1, $s2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9898) {
            ctx->pc = 0x2E98D8u;
            goto label_2e98d8;
        }
    }
    ctx->pc = 0x2E98A0u;
    // 0x2e98a0: 0xc48c0008  lwc1        $f12, 0x8($a0)
    ctx->pc = 0x2e98a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e98a4: 0xc0c2376  jal         func_308DD8
    ctx->pc = 0x2E98A4u;
    SET_GPR_U32(ctx, 31, 0x2E98ACu);
    ctx->pc = 0x2E98A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98A4u;
    // 0x2e98a8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308DD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x308DD8u, 0x2E98A4u, 0x2E98ACu)) {
        return;
    }
    ctx->pc = 0x2E98ACu;
label_2e98ac:
    // 0x2e98ac: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x2e98acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2e98b0: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2E98B0u;
    SET_GPR_U32(ctx, 31, 0x2E98B8u);
    ctx->pc = 0x2E98B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98B0u;
    // 0x2e98b4: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2E98B0u, 0x2E98B8u)) {
        return;
    }
    ctx->pc = 0x2E98B8u;
label_2e98b8:
    // 0x2e98b8: 0x3c014480  lui         $at, 0x4480
    ctx->pc = 0x2e98b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17536 << 16));
    // 0x2e98bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e98bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e98c0: 0x28280  sll         $s0, $v0, 10
    ctx->pc = 0x2e98c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 10));
    // 0x2e98c4: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2E98C4u;
    SET_GPR_U32(ctx, 31, 0x2E98CCu);
    ctx->pc = 0x2E98C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E98C4u;
    // 0x2e98c8: 0x460ca302  mul.s       $f12, $f20, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2E98C4u, 0x2E98CCu)) {
        return;
    }
    ctx->pc = 0x2E98CCu;
label_2e98cc:
    // 0x2e98cc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2e98ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x2e98d0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2E98D0u;
    {
        const bool branch_taken_0x2e98d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E98D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E98D0u;
        // 0x2e98d4: 0xae3001c4  sw          $s0, 0x1C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e98d0) {
            ctx->pc = 0x2E98E0u;
            goto label_2e98e0;
        }
    }
    ctx->pc = 0x2E98D8u;
label_2e98d8:
    // 0x2e98d8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e98d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2e98dc: 0xae2201c4  sw          $v0, 0x1C4($s1)
    ctx->pc = 0x2e98dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 452), GPR_U32(ctx, 2));
label_2e98e0:
    // 0x2e98e0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2e98e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2e98e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2e98e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e98e8: 0xae2301b8  sw          $v1, 0x1B8($s1)
    ctx->pc = 0x2e98e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 440), GPR_U32(ctx, 3));
    // 0x2e98ec: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e98ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e98f0: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2e98f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e98f4: 0xae2301c0  sw          $v1, 0x1C0($s1)
    ctx->pc = 0x2e98f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 448), GPR_U32(ctx, 3));
    // 0x2e98f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2e98f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e98fc: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2e98fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x2e9900: 0xae2301c8  sw          $v1, 0x1C8($s1)
    ctx->pc = 0x2e9900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 456), GPR_U32(ctx, 3));
    // 0x2e9904: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e9904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2e9908: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x2e9908u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2e990c: 0x50c40014  beql        $a2, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2E990Cu;
    {
        const bool branch_taken_0x2e990c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x2e990c) {
            ctx->pc = 0x2E9910u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E990Cu;
            // 0x2e9910: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9960u;
            goto label_2e9960;
        }
    }
    ctx->pc = 0x2E9914u;
    // 0x2e9914: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x2e9914u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2e9918: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2E9918u;
    {
        const bool branch_taken_0x2e9918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E991Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9918u;
        // 0x2e991c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9918) {
            ctx->pc = 0x2E9930u;
            goto label_2e9930;
        }
    }
    ctx->pc = 0x2E9920u;
    // 0x2e9920: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E9920u;
    {
        const bool branch_taken_0x2e9920 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9920u;
        // 0x2e9924: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9920) {
            ctx->pc = 0x2E9944u;
            goto label_2e9944;
        }
    }
    ctx->pc = 0x2E9928u;
    // 0x2e9928: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2E9928u;
    {
        const bool branch_taken_0x2e9928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e9928) {
            ctx->pc = 0x2E9998u;
            goto label_2e9998;
        }
    }
    ctx->pc = 0x2E9930u;
label_2e9930:
    // 0x2e9930: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e9934: 0x10c20015  beq         $a2, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2E9934u;
    {
        const bool branch_taken_0x2e9934 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9934u;
        // 0x2e9938: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9934) {
            ctx->pc = 0x2E998Cu;
            goto label_2e998c;
        }
    }
    ctx->pc = 0x2E993Cu;
    // 0x2e993c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2E993Cu;
    {
        const bool branch_taken_0x2e993c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e993c) {
            ctx->pc = 0x2E9998u;
            goto label_2e9998;
        }
    }
    ctx->pc = 0x2E9944u;
label_2e9944:
    // 0x2e9944: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2e9944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2e9948: 0xc0c4a72  jal         func_3129C8
    ctx->pc = 0x2E9948u;
    SET_GPR_U32(ctx, 31, 0x2E9950u);
    ctx->pc = 0x2E994Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9948u;
    // 0x2e994c: 0x262401cc  addiu       $a0, $s1, 0x1CC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 460));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x2E9948u, 0x2E9950u)) {
        return;
    }
    ctx->pc = 0x2E9950u;
label_2e9950:
    // 0x2e9950: 0x8e431040  lw          $v1, 0x1040($s2)
    ctx->pc = 0x2e9950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e9954: 0x246301cc  addiu       $v1, $v1, 0x1CC
    ctx->pc = 0x2e9954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 460));
    // 0x2e9958: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2E9958u;
    {
        const bool branch_taken_0x2e9958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E995Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9958u;
        // 0x2e995c: 0xae2301bc  sw          $v1, 0x1BC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9958) {
            ctx->pc = 0x2E9994u;
            goto label_2e9994;
        }
    }
    ctx->pc = 0x2E9960u;
label_2e9960:
    // 0x2e9960: 0x68620007  ldl         $v0, 0x7($v1)
    ctx->pc = 0x2e9960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2e9964: 0x6c620000  ldr         $v0, 0x0($v1)
    ctx->pc = 0x2e9964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2e9968: 0x6864000f  ldl         $a0, 0xF($v1)
    ctx->pc = 0x2e9968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2e996c: 0x6c640008  ldr         $a0, 0x8($v1)
    ctx->pc = 0x2e996cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2e9970: 0xb2420293  sdl         $v0, 0x293($s2)
    ctx->pc = 0x2e9970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 659); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9974: 0xb642028c  sdr         $v0, 0x28C($s2)
    ctx->pc = 0x2e9974u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 652); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9978: 0xb244029b  sdl         $a0, 0x29B($s2)
    ctx->pc = 0x2e9978u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 667); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e997c: 0xb6440294  sdr         $a0, 0x294($s2)
    ctx->pc = 0x2e997cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 660); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2e9980: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2e9980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e9984: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E9984u;
    {
        const bool branch_taken_0x2e9984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E9988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9984u;
        // 0x2e9988: 0x2442024c  addiu       $v0, $v0, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 588));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9984) {
            ctx->pc = 0x2E9990u;
            goto label_2e9990;
        }
    }
    ctx->pc = 0x2E998Cu;
label_2e998c:
    // 0x2e998c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e998cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e9990:
    // 0x2e9990: 0xae2201bc  sw          $v0, 0x1BC($s1)
    ctx->pc = 0x2e9990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 444), GPR_U32(ctx, 2));
label_2e9994:
    // 0x2e9994: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e9994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e9998:
    // 0x2e9998: 0xc0bb730  jal         func_2EDCC0
    ctx->pc = 0x2E9998u;
    SET_GPR_U32(ctx, 31, 0x2E99A0u);
    ctx->pc = 0x2E999Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E9998u;
    // 0x2e999c: 0x264402c0  addiu       $a0, $s2, 0x2C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDCC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDCC0u, 0x2E9998u, 0x2E99A0u)) {
        return;
    }
    ctx->pc = 0x2E99A0u;
label_2e99a0:
    // 0x2e99a0: 0x8e421040  lw          $v0, 0x1040($s2)
    ctx->pc = 0x2e99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4160)));
    // 0x2e99a4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2e99a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e99a8: 0x244201b4  addiu       $v0, $v0, 0x1B4
    ctx->pc = 0x2e99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 436));
    // 0x2e99ac: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2e99acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e99b0: 0xae4202cc  sw          $v0, 0x2CC($s2)
    ctx->pc = 0x2e99b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 716), GPR_U32(ctx, 2));
    // 0x2e99b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e99b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e99b8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2e99b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e99bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e99bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e99c0: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x2e99c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e99c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E99C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E99C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E99C4u;
        // 0x2e99c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E99C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E99CCu;
    // 0x2e99cc: 0x0  nop
    ctx->pc = 0x2e99ccu;
    // NOP
    ctx->pc = 0x2e99d0u;
}
