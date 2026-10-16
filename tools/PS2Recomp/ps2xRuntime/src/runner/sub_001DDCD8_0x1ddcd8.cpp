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

// Function: sub_001DDCD8
// Address: 0x1ddcd8 - 0x1de278
void sub_001DDCD8_0x1ddcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDCD8_0x1ddcd8");
#endif

    switch (ctx->pc) {
        case 0x1ddd18u: goto label_1ddd18;
        case 0x1ddd38u: goto label_1ddd38;
        case 0x1ddd48u: goto label_1ddd48;
        case 0x1ddd54u: goto label_1ddd54;
        case 0x1ddd68u: goto label_1ddd68;
        case 0x1ddd90u: goto label_1ddd90;
        case 0x1ddfecu: goto label_1ddfec;
        case 0x1ddffcu: goto label_1ddffc;
        default: break;
    }

    ctx->pc = 0x1ddcd8u;

    // 0x1ddcd8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1ddcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1ddcdc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1ddcdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1ddce0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1ddce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1ddce4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ddce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddce8: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1ddce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1ddcec: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ddcecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddcf0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1ddcf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1ddcf4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1ddcf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1ddcf8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1ddcf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1ddcfc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1ddcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1ddd00: 0x12800152  beqz        $s4, . + 4 + (0x152 << 2)
    ctx->pc = 0x1DDD00u;
    {
        const bool branch_taken_0x1ddd00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD00u;
        // 0x1ddd04: 0xe7b400c0  swc1        $f20, 0xC0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd00) {
            ctx->pc = 0x1DE24Cu;
            goto label_1de24c;
        }
    }
    ctx->pc = 0x1DDD08u;
    // 0x1ddd08: 0x8e910018  lw          $s1, 0x18($s4)
    ctx->pc = 0x1ddd08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1ddd0c: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1ddd0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1ddd10: 0xc086cea  jal         func_21B3A8
    ctx->pc = 0x1DDD10u;
    SET_GPR_U32(ctx, 31, 0x1DDD18u);
    ctx->pc = 0x1DDD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD10u;
    // 0x1ddd14: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x1DDD10u, 0x1DDD18u)) {
        return;
    }
    ctx->pc = 0x1DDD18u;
label_1ddd18:
    // 0x1ddd18: 0x1220014c  beqz        $s1, . + 4 + (0x14C << 2)
    ctx->pc = 0x1DDD18u;
    {
        const bool branch_taken_0x1ddd18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD18u;
        // 0x1ddd1c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd18) {
            ctx->pc = 0x1DE24Cu;
            goto label_1de24c;
        }
    }
    ctx->pc = 0x1DDD20u;
    // 0x1ddd20: 0x1240014b  beqz        $s2, . + 4 + (0x14B << 2)
    ctx->pc = 0x1DDD20u;
    {
        const bool branch_taken_0x1ddd20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD20u;
        // 0x1ddd24: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd20) {
            ctx->pc = 0x1DE250u;
            goto label_1de250;
        }
    }
    ctx->pc = 0x1DDD28u;
    // 0x1ddd28: 0x5260014a  beql        $s3, $zero, . + 4 + (0x14A << 2)
    ctx->pc = 0x1DDD28u;
    {
        const bool branch_taken_0x1ddd28 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ddd28) {
            ctx->pc = 0x1DDD2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDD28u;
            // 0x1ddd2c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE254u;
            goto label_1de254;
        }
    }
    ctx->pc = 0x1DDD30u;
    // 0x1ddd30: 0xc0a0b9c  jal         func_282E70
    ctx->pc = 0x1DDD30u;
    SET_GPR_U32(ctx, 31, 0x1DDD38u);
    ctx->pc = 0x1DDD34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD30u;
    // 0x1ddd34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282E70u, 0x1DDD30u, 0x1DDD38u)) {
        return;
    }
    ctx->pc = 0x1DDD38u;
label_1ddd38:
    // 0x1ddd38: 0x104000aa  beqz        $v0, . + 4 + (0xAA << 2)
    ctx->pc = 0x1DDD38u;
    {
        const bool branch_taken_0x1ddd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD38u;
        // 0x1ddd3c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd38) {
            ctx->pc = 0x1DDFE4u;
            goto label_1ddfe4;
        }
    }
    ctx->pc = 0x1DDD40u;
    // 0x1ddd40: 0xc0a0bc4  jal         func_282F10
    ctx->pc = 0x1DDD40u;
    SET_GPR_U32(ctx, 31, 0x1DDD48u);
    ctx->pc = 0x1DDD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD40u;
    // 0x1ddd44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x282F10u, 0x1DDD40u, 0x1DDD48u)) {
        return;
    }
    ctx->pc = 0x1DDD48u;
label_1ddd48:
    // 0x1ddd48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1ddd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd4c: 0xc08994a  jal         func_226528
    ctx->pc = 0x1DDD4Cu;
    SET_GPR_U32(ctx, 31, 0x1DDD54u);
    ctx->pc = 0x1DDD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD4Cu;
    // 0x1ddd50: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1DDD4Cu, 0x1DDD54u)) {
        return;
    }
    ctx->pc = 0x1DDD54u;
label_1ddd54:
    // 0x1ddd54: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1ddd54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd58: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1ddd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1ddd5c: 0x1840013c  blez        $v0, . + 4 + (0x13C << 2)
    ctx->pc = 0x1DDD5Cu;
    {
        const bool branch_taken_0x1ddd5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DDD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDD5Cu;
        // 0x1ddd60: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddd5c) {
            ctx->pc = 0x1DE250u;
            goto label_1de250;
        }
    }
    ctx->pc = 0x1DDD64u;
    // 0x1ddd64: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1ddd64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_1ddd68:
    // 0x1ddd68: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1ddd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
    // 0x1ddd6c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ddd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ddd70: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ddd70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddd74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ddd74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ddd78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1ddd78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ddd7c: 0xc4540004  lwc1        $f20, 0x4($v0)
    ctx->pc = 0x1ddd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1ddd80: 0x52980  sll         $a1, $a1, 6
    ctx->pc = 0x1ddd80u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 6));
    // 0x1ddd84: 0x2a52821  addu        $a1, $s5, $a1
    ctx->pc = 0x1ddd84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x1ddd88: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1DDD88u;
    SET_GPR_U32(ctx, 31, 0x1DDD90u);
    ctx->pc = 0x1DDD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDD88u;
    // 0x1ddd8c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1DDD88u, 0x1DDD90u)) {
        return;
    }
    ctx->pc = 0x1DDD90u;
label_1ddd90:
    // 0x1ddd90: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x1ddd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1ddd94: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x1ddd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1ddd98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1ddd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ddd9c: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x1ddd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddda0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x1ddda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddda4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x1ddda4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x1ddda8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ddda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1dddac: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1dddacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddb0: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1dddb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1dddb4: 0x46140141  sub.s       $f5, $f0, $f20
    ctx->pc = 0x1dddb4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1dddb8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1dddb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1dddbc: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x1dddbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1dddc0: 0x46141081  sub.s       $f2, $f2, $f20
    ctx->pc = 0x1dddc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[20]);
    // 0x1dddc4: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1dddc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dddc8: 0x461418c1  sub.s       $f3, $f3, $f20
    ctx->pc = 0x1dddc8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[20]);
    // 0x1dddcc: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1dddccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dddd0: 0x46142100  add.s       $f4, $f4, $f20
    ctx->pc = 0x1dddd0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[20]);
    // 0x1dddd4: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x1dddd4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
    // 0x1dddd8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x1dddd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1ddddc: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ddddcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1ddde0: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x1ddde0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1ddde4: 0xe7a40030  swc1        $f4, 0x30($sp)
    ctx->pc = 0x1ddde4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1ddde8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1ddde8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1dddec: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1dddecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1dddf0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DDDF0u;
    {
        const bool branch_taken_0x1dddf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDDF0u;
        // 0x1dddf4: 0xe7a50020  swc1        $f5, 0x20($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dddf0) {
            ctx->pc = 0x1DDE38u;
            goto label_1dde38;
        }
    }
    ctx->pc = 0x1DDDF8u;
    // 0x1dddf8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dddf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dddfc: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1dddfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dde00: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1dde00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dde04: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1dde04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dde08: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x1dde08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde0c: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x1dde0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde10: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1dde10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1dde14: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1dde14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dde18: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1dde18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1dde1c: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1dde1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1dde20: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1dde20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1dde24: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1dde24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde28: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1dde28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1dde2c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1dde2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1dde30: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DDE30u;
    {
        const bool branch_taken_0x1dde30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDE30u;
        // 0x1dde34: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dde30) {
            ctx->pc = 0x1DDEDCu;
            goto label_1ddedc;
        }
    }
    ctx->pc = 0x1DDE38u;
label_1dde38:
    // 0x1dde38: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dde38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dde3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dde3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde40: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x1dde40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde44: 0x0  nop
    ctx->pc = 0x1dde44u;
    // NOP
    // 0x1dde48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDE48u;
    {
        const bool branch_taken_0x1dde48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde48) {
            ctx->pc = 0x1DDE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE48u;
            // 0x1dde4c: 0xe4450000  swc1        $f5, 0x0($v0) (Delay Slot)
            { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE50u;
            goto label_1dde50;
        }
    }
    ctx->pc = 0x1DDE50u;
label_1dde50:
    // 0x1dde50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dde50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dde54: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1dde54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1dde58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde5c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde60: 0x0  nop
    ctx->pc = 0x1dde60u;
    // NOP
    // 0x1dde64: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDE64u;
    {
        const bool branch_taken_0x1dde64 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde64) {
            ctx->pc = 0x1DDE68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE64u;
            // 0x1dde68: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE6Cu;
            goto label_1dde6c;
        }
    }
    ctx->pc = 0x1DDE6Cu;
label_1dde6c:
    // 0x1dde6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1dde6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1dde70: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1dde70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde74: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1dde74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1dde78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde7c: 0x0  nop
    ctx->pc = 0x1dde7cu;
    // NOP
    // 0x1dde80: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDE80u;
    {
        const bool branch_taken_0x1dde80 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde80) {
            ctx->pc = 0x1DDE84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE80u;
            // 0x1dde84: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDE88u;
            goto label_1dde88;
        }
    }
    ctx->pc = 0x1DDE88u;
label_1dde88:
    // 0x1dde88: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1dde88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1dde8c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1dde8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dde90: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1dde90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dde94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dde94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dde98: 0x0  nop
    ctx->pc = 0x1dde98u;
    // NOP
    // 0x1dde9c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDE9Cu;
    {
        const bool branch_taken_0x1dde9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dde9c) {
            ctx->pc = 0x1DDEA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDE9Cu;
            // 0x1ddea0: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDEA4u;
            goto label_1ddea4;
        }
    }
    ctx->pc = 0x1DDEA4u;
label_1ddea4:
    // 0x1ddea4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddea8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1ddea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddeac: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ddeacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddeb0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddeb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddeb4: 0x0  nop
    ctx->pc = 0x1ddeb4u;
    // NOP
    // 0x1ddeb8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDEB8u;
    {
        const bool branch_taken_0x1ddeb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddeb8) {
            ctx->pc = 0x1DDEBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDEB8u;
            // 0x1ddebc: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDEC0u;
            goto label_1ddec0;
        }
    }
    ctx->pc = 0x1DDEC0u;
label_1ddec0:
    // 0x1ddec0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddec4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1ddec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddec8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ddec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddecc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddeccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1dded0: 0x0  nop
    ctx->pc = 0x1dded0u;
    // NOP
    // 0x1dded4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDED4u;
    {
        const bool branch_taken_0x1dded4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dded4) {
            ctx->pc = 0x1DDED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDED4u;
            // 0x1dded8: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDEDCu;
            goto label_1ddedc;
        }
    }
    ctx->pc = 0x1DDEDCu;
label_1ddedc:
    // 0x1ddedc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ddedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ddee0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DDEE0u;
    {
        const bool branch_taken_0x1ddee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDEE0u;
        // 0x1ddee4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddee0) {
            ctx->pc = 0x1DDF24u;
            goto label_1ddf24;
        }
    }
    ctx->pc = 0x1DDEE8u;
    // 0x1ddee8: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1ddee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ddeec: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1ddeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ddef0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1ddef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ddef4: 0xb0460007  sdl         $a2, 0x7($v0)
    ctx->pc = 0x1ddef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddef8: 0xb4460000  sdr         $a2, 0x0($v0)
    ctx->pc = 0x1ddef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddefc: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1ddefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1ddf00: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1ddf00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddf04: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1ddf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1ddf08: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1ddf08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1ddf0c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1ddf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ddf10: 0xb0660007  sdl         $a2, 0x7($v1)
    ctx->pc = 0x1ddf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddf14: 0xb4660000  sdr         $a2, 0x0($v1)
    ctx->pc = 0x1ddf14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1ddf18: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1ddf18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x1ddf1c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DDF1Cu;
    {
        const bool branch_taken_0x1ddf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDF1Cu;
        // 0x1ddf20: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddf1c) {
            ctx->pc = 0x1DDFC8u;
            goto label_1ddfc8;
        }
    }
    ctx->pc = 0x1DDF24u;
label_1ddf24:
    // 0x1ddf24: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1ddf24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf28: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ddf28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf2c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddf2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddf30: 0x0  nop
    ctx->pc = 0x1ddf30u;
    // NOP
    // 0x1ddf34: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDF34u;
    {
        const bool branch_taken_0x1ddf34 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddf34) {
            ctx->pc = 0x1DDF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF34u;
            // 0x1ddf38: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF3Cu;
            goto label_1ddf3c;
        }
    }
    ctx->pc = 0x1DDF3Cu;
label_1ddf3c:
    // 0x1ddf3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ddf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ddf40: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1ddf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf44: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ddf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf48: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddf48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddf4c: 0x0  nop
    ctx->pc = 0x1ddf4cu;
    // NOP
    // 0x1ddf50: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDF50u;
    {
        const bool branch_taken_0x1ddf50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddf50) {
            ctx->pc = 0x1DDF54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF50u;
            // 0x1ddf54: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF58u;
            goto label_1ddf58;
        }
    }
    ctx->pc = 0x1DDF58u;
label_1ddf58:
    // 0x1ddf58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1ddf58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ddf5c: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddf5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf60: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ddf60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1ddf64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddf68: 0x0  nop
    ctx->pc = 0x1ddf68u;
    // NOP
    // 0x1ddf6c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDF6Cu;
    {
        const bool branch_taken_0x1ddf6c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddf6c) {
            ctx->pc = 0x1DDF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF6Cu;
            // 0x1ddf70: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF74u;
            goto label_1ddf74;
        }
    }
    ctx->pc = 0x1DDF74u;
label_1ddf74:
    // 0x1ddf74: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddf74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddf78: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1ddf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1ddf7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf80: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddf80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddf84: 0x0  nop
    ctx->pc = 0x1ddf84u;
    // NOP
    // 0x1ddf88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDF88u;
    {
        const bool branch_taken_0x1ddf88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddf88) {
            ctx->pc = 0x1DDF8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDF88u;
            // 0x1ddf8c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDF90u;
            goto label_1ddf90;
        }
    }
    ctx->pc = 0x1DDF90u;
label_1ddf90:
    // 0x1ddf90: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddf90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddf94: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1ddf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddf98: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1ddf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddf9c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddf9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddfa0: 0x0  nop
    ctx->pc = 0x1ddfa0u;
    // NOP
    // 0x1ddfa4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDFA4u;
    {
        const bool branch_taken_0x1ddfa4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddfa4) {
            ctx->pc = 0x1DDFA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFA4u;
            // 0x1ddfa8: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDFACu;
            goto label_1ddfac;
        }
    }
    ctx->pc = 0x1DDFACu;
label_1ddfac:
    // 0x1ddfac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ddfacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ddfb0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1ddfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1ddfb4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1ddfb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1ddfb8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1ddfb8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1ddfbc: 0x0  nop
    ctx->pc = 0x1ddfbcu;
    // NOP
    // 0x1ddfc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DDFC0u;
    {
        const bool branch_taken_0x1ddfc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ddfc0) {
            ctx->pc = 0x1DDFC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFC0u;
            // 0x1ddfc4: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDFC8u;
            goto label_1ddfc8;
        }
    }
    ctx->pc = 0x1DDFC8u;
label_1ddfc8:
    // 0x1ddfc8: 0x8e62002c  lw          $v0, 0x2C($s3)
    ctx->pc = 0x1ddfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x1ddfcc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1ddfccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1ddfd0: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x1ddfd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ddfd4: 0x5440ff64  bnel        $v0, $zero, . + 4 + (-0x9C << 2)
    ctx->pc = 0x1DDFD4u;
    {
        const bool branch_taken_0x1ddfd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ddfd4) {
            ctx->pc = 0x1DDFD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DDFD4u;
            // 0x1ddfd8: 0x8e630030  lw          $v1, 0x30($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DDD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ddd68;
        }
    }
    ctx->pc = 0x1DDFDCu;
    // 0x1ddfdc: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x1DDFDCu;
    {
        const bool branch_taken_0x1ddfdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDFDCu;
        // 0x1ddfe0: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddfdc) {
            ctx->pc = 0x1DE250u;
            goto label_1de250;
        }
    }
    ctx->pc = 0x1DDFE4u;
label_1ddfe4:
    // 0x1ddfe4: 0xc08994a  jal         func_226528
    ctx->pc = 0x1DDFE4u;
    SET_GPR_U32(ctx, 31, 0x1DDFECu);
    ctx->pc = 0x1DDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFE4u;
    // 0x1ddfe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x1DDFE4u, 0x1DDFECu)) {
        return;
    }
    ctx->pc = 0x1DDFECu;
label_1ddfec:
    // 0x1ddfec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1ddfecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ddff0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1ddff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1ddff4: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x1DDFF4u;
    SET_GPR_U32(ctx, 31, 0x1DDFFCu);
    ctx->pc = 0x1DDFF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDFF4u;
    // 0x1ddff8: 0x2665001c  addiu       $a1, $s3, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x1DDFF4u, 0x1DDFFCu)) {
        return;
    }
    ctx->pc = 0x1DDFFCu;
label_1ddffc:
    // 0x1ddffc: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1ddffcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1de000: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1de000u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1de004: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1de004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de008: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1de008u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de00c: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1de00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de010: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x1de010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x1de014: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de018: 0xc6630028  lwc1        $f3, 0x28($s3)
    ctx->pc = 0x1de018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de01c: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1de01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de020: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1de020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de024: 0x46030181  sub.s       $f6, $f0, $f3
    ctx->pc = 0x1de024u;
    ctx->f[6] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1de028: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x1de028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1de02c: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x1de02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1de030: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1de030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1de034: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x1de034u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1de038: 0xc7a50048  lwc1        $f5, 0x48($sp)
    ctx->pc = 0x1de038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1de03c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1de03cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de040: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1de040u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1de044: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1de044u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1de048: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1de048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de04c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1de04cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1de050: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x1de050u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x1de054: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1de054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de058: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x1de058u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x1de05c: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x1de05cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1de060: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1de060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de064: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1de064u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x1de068: 0xe7a40044  swc1        $f4, 0x44($sp)
    ctx->pc = 0x1de068u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1de06c: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1de06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de070: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1de070u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x1de074: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1DE074u;
    {
        const bool branch_taken_0x1de074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE074u;
        // 0x1de078: 0xe7a50048  swc1        $f5, 0x48($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de074) {
            ctx->pc = 0x1DE0BCu;
            goto label_1de0bc;
        }
    }
    ctx->pc = 0x1DE07Cu;
    // 0x1de07c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de080: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1de080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de084: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1de084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de088: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1de088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de08c: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x1de08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de090: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x1de090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de094: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1de094u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1de098: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1de098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de09c: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x1de09cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de0a0: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x1de0a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de0a4: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x1de0a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1de0a8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1de0a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de0ac: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1de0acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de0b0: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1de0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1de0b4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DE0B4u;
    {
        const bool branch_taken_0x1de0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE0B4u;
        // 0x1de0b8: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de0b4) {
            ctx->pc = 0x1DE160u;
            goto label_1de160;
        }
    }
    ctx->pc = 0x1DE0BCu;
label_1de0bc:
    // 0x1de0bc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de0c0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1de0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de0c4: 0x46003034  c.lt.s      $f6, $f0
    ctx->pc = 0x1de0c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de0c8: 0x0  nop
    ctx->pc = 0x1de0c8u;
    // NOP
    // 0x1de0cc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE0CCu;
    {
        const bool branch_taken_0x1de0cc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de0cc) {
            ctx->pc = 0x1DE0D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE0CCu;
            // 0x1de0d0: 0xe4460000  swc1        $f6, 0x0($v0) (Delay Slot)
            { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0D4u;
            goto label_1de0d4;
        }
    }
    ctx->pc = 0x1DE0D4u;
label_1de0d4:
    // 0x1de0d4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de0d8: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1de0d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de0dc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1de0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de0e0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de0e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de0e4: 0x0  nop
    ctx->pc = 0x1de0e4u;
    // NOP
    // 0x1de0e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE0E8u;
    {
        const bool branch_taken_0x1de0e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de0e8) {
            ctx->pc = 0x1DE0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE0E8u;
            // 0x1de0ec: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE0F0u;
            goto label_1de0f0;
        }
    }
    ctx->pc = 0x1DE0F0u;
label_1de0f0:
    // 0x1de0f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de0f4: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1de0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de0f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1de0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de0fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de100: 0x0  nop
    ctx->pc = 0x1de100u;
    // NOP
    // 0x1de104: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE104u;
    {
        const bool branch_taken_0x1de104 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de104) {
            ctx->pc = 0x1DE108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE104u;
            // 0x1de108: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE10Cu;
            goto label_1de10c;
        }
    }
    ctx->pc = 0x1DE10Cu;
label_1de10c:
    // 0x1de10c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de110: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1de110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de114: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1de114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de118: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de118u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de11c: 0x0  nop
    ctx->pc = 0x1de11cu;
    // NOP
    // 0x1de120: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE120u;
    {
        const bool branch_taken_0x1de120 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de120) {
            ctx->pc = 0x1DE124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE120u;
            // 0x1de124: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE128u;
            goto label_1de128;
        }
    }
    ctx->pc = 0x1DE128u;
label_1de128:
    // 0x1de128: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de12c: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1de12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de130: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1de130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de134: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de134u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de138: 0x0  nop
    ctx->pc = 0x1de138u;
    // NOP
    // 0x1de13c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE13Cu;
    {
        const bool branch_taken_0x1de13c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de13c) {
            ctx->pc = 0x1DE140u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE13Cu;
            // 0x1de140: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE144u;
            goto label_1de144;
        }
    }
    ctx->pc = 0x1DE144u;
label_1de144:
    // 0x1de144: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de148: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1de148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de14c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1de14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de150: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de154: 0x0  nop
    ctx->pc = 0x1de154u;
    // NOP
    // 0x1de158: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE158u;
    {
        const bool branch_taken_0x1de158 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de158) {
            ctx->pc = 0x1DE15Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE158u;
            // 0x1de15c: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE160u;
            goto label_1de160;
        }
    }
    ctx->pc = 0x1DE160u;
label_1de160:
    // 0x1de160: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1de160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1de164: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1DE164u;
    {
        const bool branch_taken_0x1de164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE164u;
        // 0x1de168: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de164) {
            ctx->pc = 0x1DE1A8u;
            goto label_1de1a8;
        }
    }
    ctx->pc = 0x1DE16Cu;
    // 0x1de16c: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x1de16cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de170: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x1de170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de174: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de178: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x1de178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de17c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x1de17cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de180: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1de180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1de184: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1de184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de188: 0x6ba50047  ldl         $a1, 0x47($sp)
    ctx->pc = 0x1de188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1de18c: 0x6fa50040  ldr         $a1, 0x40($sp)
    ctx->pc = 0x1de18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1de190: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x1de190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1de194: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x1de194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de198: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x1de198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1de19c: 0xac660008  sw          $a2, 0x8($v1)
    ctx->pc = 0x1de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 6));
    // 0x1de1a0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1DE1A0u;
    {
        const bool branch_taken_0x1de1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE1A0u;
        // 0x1de1a4: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1a0) {
            ctx->pc = 0x1DE24Cu;
            goto label_1de24c;
        }
    }
    ctx->pc = 0x1DE1A8u;
label_1de1a8:
    // 0x1de1a8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1de1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1de1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de1b0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de1b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de1b4: 0x0  nop
    ctx->pc = 0x1de1b4u;
    // NOP
    // 0x1de1b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE1B8u;
    {
        const bool branch_taken_0x1de1b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de1b8) {
            ctx->pc = 0x1DE1BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE1B8u;
            // 0x1de1bc: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1C0u;
            goto label_1de1c0;
        }
    }
    ctx->pc = 0x1DE1C0u;
label_1de1c0:
    // 0x1de1c0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de1c4: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1de1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1c8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1de1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de1cc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de1d0: 0x0  nop
    ctx->pc = 0x1de1d0u;
    // NOP
    // 0x1de1d4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE1D4u;
    {
        const bool branch_taken_0x1de1d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de1d4) {
            ctx->pc = 0x1DE1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE1D4u;
            // 0x1de1d8: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1DCu;
            goto label_1de1dc;
        }
    }
    ctx->pc = 0x1DE1DCu;
label_1de1dc:
    // 0x1de1dc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1de1e0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1de1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de1e4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1de1e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de1e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1de1e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de1ec: 0x0  nop
    ctx->pc = 0x1de1ecu;
    // NOP
    // 0x1de1f0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE1F0u;
    {
        const bool branch_taken_0x1de1f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de1f0) {
            ctx->pc = 0x1DE1F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE1F0u;
            // 0x1de1f4: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE1F8u;
            goto label_1de1f8;
        }
    }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de1fc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1de1fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de200: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1de200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de204: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de204u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de208: 0x0  nop
    ctx->pc = 0x1de208u;
    // NOP
    // 0x1de20c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE20Cu;
    {
        const bool branch_taken_0x1de20c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de20c) {
            ctx->pc = 0x1DE210u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE20Cu;
            // 0x1de210: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE214u;
            goto label_1de214;
        }
    }
    ctx->pc = 0x1DE214u;
label_1de214:
    // 0x1de214: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de218: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x1de218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de21c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1de21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de220: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de224: 0x0  nop
    ctx->pc = 0x1de224u;
    // NOP
    // 0x1de228: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE228u;
    {
        const bool branch_taken_0x1de228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de228) {
            ctx->pc = 0x1DE22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE228u;
            // 0x1de22c: 0xe4410004  swc1        $f1, 0x4($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE230u;
            goto label_1de230;
        }
    }
    ctx->pc = 0x1DE230u;
label_1de230:
    // 0x1de230: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1de230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1de234: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x1de234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1de238: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1de238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1de23c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1de23cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1de240: 0x0  nop
    ctx->pc = 0x1de240u;
    // NOP
    // 0x1de244: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1DE244u;
    {
        const bool branch_taken_0x1de244 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de244) {
            ctx->pc = 0x1DE248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1DE244u;
            // 0x1de248: 0xe4410008  swc1        $f1, 0x8($v0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1DE24Cu;
            goto label_1de24c;
        }
    }
    ctx->pc = 0x1DE24Cu;
label_1de24c:
    // 0x1de24c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1de24cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1de250:
    // 0x1de250: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1de250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1de254:
    // 0x1de254: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1de254u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1de258: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1de258u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1de25c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1de25cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1de260: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1de260u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1de264: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1de264u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1de268: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1de268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1de26c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1de26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1de270: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE270u;
        // 0x1de274: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE270u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE278u;
}
