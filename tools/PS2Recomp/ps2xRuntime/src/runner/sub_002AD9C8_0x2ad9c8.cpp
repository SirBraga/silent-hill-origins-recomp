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

// Function: sub_002AD9C8
// Address: 0x2ad9c8 - 0x2add58
void sub_002AD9C8_0x2ad9c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD9C8_0x2ad9c8");
#endif

    switch (ctx->pc) {
        case 0x2ada28u: goto label_2ada28;
        case 0x2ada44u: goto label_2ada44;
        case 0x2ada54u: goto label_2ada54;
        case 0x2adae0u: goto label_2adae0;
        case 0x2adaecu: goto label_2adaec;
        case 0x2adba4u: goto label_2adba4;
        case 0x2adc58u: goto label_2adc58;
        default: break;
    }

    ctx->pc = 0x2ad9c8u;

    // 0x2ad9c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2ad9c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2ad9cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ad9ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ad9d0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2ad9d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2ad9d4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2ad9d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2ad9d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad9d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad9e0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ad9e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9e4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2ad9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2ad9e8: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x2ad9e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9ec: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2ad9ecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2ad9f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2ad9f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2ad9f4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x2ad9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x2ad9f8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2ad9f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2ad9fc: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
    ctx->pc = 0x2AD9FCu;
    {
        const bool branch_taken_0x2ad9fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD9FCu;
        // 0x2ada00: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad9fc) {
            ctx->pc = 0x2ADAB4u;
            goto label_2adab4;
        }
    }
    ctx->pc = 0x2ADA04u;
    // 0x2ada04: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2ada04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2ada08: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ada08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ada0c: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2ada0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2ada10: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2ada10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2ada14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ada18: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2ada18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2ada1c: 0xc62c0010  lwc1        $f12, 0x10($s1)
    ctx->pc = 0x2ada1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ada20: 0xc0ab838  jal         func_2AE0E0
    ctx->pc = 0x2ADA20u;
    SET_GPR_U32(ctx, 31, 0x2ADA28u);
    ctx->pc = 0x2ADA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA20u;
    // 0x2ada24: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0E0u, 0x2ADA20u, 0x2ADA28u)) {
        return;
    }
    ctx->pc = 0x2ADA28u;
label_2ada28:
    // 0x2ada28: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x2ada28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x2ada2c: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x2ada2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2ada30: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2ADA30u;
    {
        const bool branch_taken_0x2ada30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA30u;
        // 0x2ada34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada30) {
            ctx->pc = 0x2ADA4Cu;
            goto label_2ada4c;
        }
    }
    ctx->pc = 0x2ADA38u;
    // 0x2ada38: 0xc62c0030  lwc1        $f12, 0x30($s1)
    ctx->pc = 0x2ada38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2ada3c: 0xc0ab86e  jal         func_2AE1B8
    ctx->pc = 0x2ADA3Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA44u);
    ctx->pc = 0x2ADA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA3Cu;
    // 0x2ada40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE1B8u, 0x2ADA3Cu, 0x2ADA44u)) {
        return;
    }
    ctx->pc = 0x2ADA44u;
label_2ada44:
    // 0x2ada44: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADA44u;
    {
        const bool branch_taken_0x2ada44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADA44u;
        // 0x2ada48: 0xc6200034  lwc1        $f0, 0x34($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada44) {
            ctx->pc = 0x2ADA58u;
            goto label_2ada58;
        }
    }
    ctx->pc = 0x2ADA4Cu;
label_2ada4c:
    // 0x2ada4c: 0xc0ab756  jal         func_2ADD58
    ctx->pc = 0x2ADA4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA54u);
    ctx->pc = 0x2ADA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADA4Cu;
    // 0x2ada50: 0x26250014  addiu       $a1, $s1, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ADD58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ADD58u, 0x2ADA4Cu, 0x2ADA54u)) {
        return;
    }
    ctx->pc = 0x2ADA54u;
label_2ada54:
    // 0x2ada54: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x2ada54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ada58:
    // 0x2ada58: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ada58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ada5c: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2ada5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2ada60: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2ada60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2ada64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ada64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ada68: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2ada68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2ada6c: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x2ada6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ada70: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2ada70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2ada74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ada74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ada78: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2ada78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2ada7c: 0x6a230043  ldl         $v1, 0x43($s1)
    ctx->pc = 0x2ada7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2ada80: 0x6e23003c  ldr         $v1, 0x3C($s1)
    ctx->pc = 0x2ada80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2ada84: 0x8e240044  lw          $a0, 0x44($s1)
    ctx->pc = 0x2ada84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x2ada88: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x2ada88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ada8c: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x2ada8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2ada90: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x2ada90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x2ada94: 0x6a27000b  ldl         $a3, 0xB($s1)
    ctx->pc = 0x2ada94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2ada98: 0x6e270004  ldr         $a3, 0x4($s1)
    ctx->pc = 0x2ada98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2ada9c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2ada9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2adaa0: 0xb207000f  sdl         $a3, 0xF($s0)
    ctx->pc = 0x2adaa0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adaa4: 0xb6070008  sdr         $a3, 0x8($s0)
    ctx->pc = 0x2adaa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adaa8: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2adaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x2adaac: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2ADAACu;
    {
        const bool branch_taken_0x2adaac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adaac) {
            ctx->pc = 0x2ADB40u;
            goto label_2adb40;
        }
    }
    ctx->pc = 0x2ADAB4u;
label_2adab4:
    // 0x2adab4: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x2adab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2adab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2adab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adabc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adac0: 0x8c650018  lw          $a1, 0x18($v1)
    ctx->pc = 0x2adac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x2adac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2adac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2adac8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2adac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2adacc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2adaccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2adad0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2adad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2adad4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2adad4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2adad8: 0xc0ab838  jal         func_2AE0E0
    ctx->pc = 0x2ADAD8u;
    SET_GPR_U32(ctx, 31, 0x2ADAE0u);
    ctx->pc = 0x2ADADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAD8u;
    // 0x2adadc: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0E0u, 0x2ADAD8u, 0x2ADAE0u)) {
        return;
    }
    ctx->pc = 0x2ADAE0u;
label_2adae0:
    // 0x2adae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2adae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adae4: 0xc0ab86e  jal         func_2AE1B8
    ctx->pc = 0x2ADAE4u;
    SET_GPR_U32(ctx, 31, 0x2ADAECu);
    ctx->pc = 0x2ADAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADAE4u;
    // 0x2adae8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE1B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE1B8u, 0x2ADAE4u, 0x2ADAECu)) {
        return;
    }
    ctx->pc = 0x2ADAECu;
label_2adaec:
    // 0x2adaec: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adaecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adaf0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adaf4: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x2adaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2adaf8: 0xc78080fc  lwc1        $f0, -0x7F04($gp)
    ctx->pc = 0x2adaf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adafc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2adafcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2adb00: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x2adb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x2adb04: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2adb04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2adb08: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x2adb08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2adb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2adb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2adb10: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x2adb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x2adb14: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x2adb14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x2adb18: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x2adb18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2adb1c: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x2adb1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adb20: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x2adb20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adb24: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x2adb24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x2adb28: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2adb28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2adb2c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2adb2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2adb30: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2adb30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2adb34: 0xb204000f  sdl         $a0, 0xF($s0)
    ctx->pc = 0x2adb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adb38: 0xb6040008  sdr         $a0, 0x8($s0)
    ctx->pc = 0x2adb38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adb3c: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x2adb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
label_2adb40:
    // 0x2adb40: 0x1240001a  beqz        $s2, . + 4 + (0x1A << 2)
    ctx->pc = 0x2ADB40u;
    {
        const bool branch_taken_0x2adb40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADB40u;
        // 0x2adb44: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adb40) {
            ctx->pc = 0x2ADBACu;
            goto label_2adbac;
        }
    }
    ctx->pc = 0x2ADB48u;
    // 0x2adb48: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2adb48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adb4c: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x2adb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2adb50: 0x7a430000  lq          $v1, 0x0($s2)
    ctx->pc = 0x2adb50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2adb54: 0x42180  sll         $a0, $a0, 6
    ctx->pc = 0x2adb54u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2adb58: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2adb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2adb5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2adb5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2adb60: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2adb60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2adb64: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x2adb64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2adb68: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2adb68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x2adb6c: 0x7a430020  lq          $v1, 0x20($s2)
    ctx->pc = 0x2adb6cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x2adb70: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2adb70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x2adb74: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x2adb74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2adb78: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2adb78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x2adb7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2adb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adb80: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2adb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adb84: 0x8c660010  lw          $a2, 0x10($v1)
    ctx->pc = 0x2adb84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2adb88: 0x43980  sll         $a3, $a0, 6
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x2adb8c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x2adb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2adb90: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2adb90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2adb94: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x2adb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2adb98: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x2adb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2adb9c: 0xc0a4cd2  jal         func_293348
    ctx->pc = 0x2ADB9Cu;
    SET_GPR_U32(ctx, 31, 0x2ADBA4u);
    ctx->pc = 0x2ADBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADB9Cu;
    // 0x2adba0: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293348u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x293348u, 0x2ADB9Cu, 0x2ADBA4u)) {
        return;
    }
    ctx->pc = 0x2ADBA4u;
label_2adba4:
    // 0x2adba4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x2ADBA4u;
    {
        const bool branch_taken_0x2adba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADBA4u;
        // 0x2adba8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adba4) {
            ctx->pc = 0x2ADC38u;
            goto label_2adc38;
        }
    }
    ctx->pc = 0x2ADBACu;
label_2adbac:
    // 0x2adbac: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x2adbacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x2adbb0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adbb4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x2adbb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x2adbb8: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x2adbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2adbbc: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x2adbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x2adbc0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2adbc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adbc4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2adbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2adbc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2adbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2adbcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2adbccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2adbd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adbd4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2adbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2adbd8: 0xe4610028  swc1        $f1, 0x28($v1)
    ctx->pc = 0x2adbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x2adbdc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2adbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x2adbe0: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x2adbe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x2adbe4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2adbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x2adbe8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2adbe8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x2adbec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2adbecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x2adbf0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x2adbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x2adbf4: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x2adbf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2adbf8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x2adbf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x2adbfc: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x2adbfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
    // 0x2adc00: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x2adc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x2adc04: 0xe4600038  swc1        $f0, 0x38($v1)
    ctx->pc = 0x2adc04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 56), bits); }
    // 0x2adc08: 0xe4600034  swc1        $f0, 0x34($v1)
    ctx->pc = 0x2adc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
    // 0x2adc0c: 0xe4600030  swc1        $f0, 0x30($v1)
    ctx->pc = 0x2adc0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
    // 0x2adc10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adc14: 0x8cc30010  lw          $v1, 0x10($a2)
    ctx->pc = 0x2adc14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x2adc18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2adc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2adc1c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2adc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2adc20: 0xe441000c  swc1        $f1, 0xC($v0)
    ctx->pc = 0x2adc20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2adc24: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x2adc24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2adc28: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2adc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2adc2c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x2adc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2adc30: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2adc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adc34: 0x0  nop
    ctx->pc = 0x2adc34u;
    // NOP
label_2adc38:
    // 0x2adc38: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2adc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2adc3c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2adc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adc40: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2adc40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adc44: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2adc44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2adc48: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2adc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x2adc4c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2adc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2adc50: 0xc092f34  jal         func_24BCD0
    ctx->pc = 0x2ADC50u;
    SET_GPR_U32(ctx, 31, 0x2ADC58u);
    ctx->pc = 0x2ADC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ADC50u;
    // 0x2adc54: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24BCD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24BCD0u, 0x2ADC50u, 0x2ADC58u)) {
        return;
    }
    ctx->pc = 0x2ADC58u;
label_2adc58:
    // 0x2adc58: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adc5c: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2adc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x2adc60: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2adc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adc64: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2adc64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc68: 0xc31818  mult        $v1, $a2, $v1
    ctx->pc = 0x2adc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2adc6c: 0xc7818100  lwc1        $f1, -0x7F00($gp)
    ctx->pc = 0x2adc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adc70: 0x8ca40010  lw          $a0, 0x10($a1)
    ctx->pc = 0x2adc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2adc74: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x2adc74u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x2adc78: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2adc78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2adc7c: 0x8c850020  lw          $a1, 0x20($a0)
    ctx->pc = 0x2adc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2adc80: 0x8c870030  lw          $a3, 0x30($a0)
    ctx->pc = 0x2adc80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x2adc84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2adc84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2adc88: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2adc88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adc8c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2adc8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2adc90: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x2adc90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x2adc94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2adc94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adc98: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x2adc98u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x2adc9c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2adc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2adca0: 0xe601001c  swc1        $f1, 0x1C($s0)
    ctx->pc = 0x2adca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 28), bits); }
    // 0x2adca4: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x2adca4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x2adca8: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x2adca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x2adcac: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2adcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2adcb0: 0xb0c30007  sdl         $v1, 0x7($a2)
    ctx->pc = 0x2adcb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adcb4: 0xb4c30000  sdr         $v1, 0x0($a2)
    ctx->pc = 0x2adcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adcb8: 0xacc40008  sw          $a0, 0x8($a2)
    ctx->pc = 0x2adcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 4));
    // 0x2adcbc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2adcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adcc0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adcc4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2adcc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2adcc8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2adcc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2adccc: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x2adcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2adcd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2adcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2adcd4: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2adcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2adcd8: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2adcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2adcdc: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2adcdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2adce0: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x2adce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adce4: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x2adce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2adce8: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x2adce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x2adcec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2adcecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2adcf0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2adcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2adcf4: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2adcf4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2adcf8: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2adcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2adcfc: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2adcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2add00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2add00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2add04: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2add04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2add08: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2add08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2add0c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2add0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2add10: 0xb0640007  sdl         $a0, 0x7($v1)
    ctx->pc = 0x2add10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2add14: 0xb4640000  sdr         $a0, 0x0($v1)
    ctx->pc = 0x2add14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2add18: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x2add18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x2add1c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2add1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2add20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2add20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2add24: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x2add24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2add28: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2add28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2add2c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2add2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2add30: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x2add30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2add34: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2add34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2add38: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x2add38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2add3c: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x2add3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2add40: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2add40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2add44: 0xb0640017  sdl         $a0, 0x17($v1)
    ctx->pc = 0x2add44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2add48: 0xb4640010  sdr         $a0, 0x10($v1)
    ctx->pc = 0x2add48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2add4c: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x2add4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x2add50: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADD50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ADD50u;
        // 0x2add54: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ADD50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ADD58u;
}
