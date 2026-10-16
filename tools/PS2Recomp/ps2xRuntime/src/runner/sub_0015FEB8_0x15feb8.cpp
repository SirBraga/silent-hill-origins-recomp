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

// Function: sub_0015FEB8
// Address: 0x15feb8 - 0x160468
void sub_0015FEB8_0x15feb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FEB8_0x15feb8");
#endif

    switch (ctx->pc) {
        case 0x15ff30u: goto label_15ff30;
        case 0x160000u: goto label_160000;
        case 0x1600d0u: goto label_1600d0;
        case 0x160364u: goto label_160364;
        case 0x1603b0u: goto label_1603b0;
        case 0x1603c0u: goto label_1603c0;
        case 0x1603c8u: goto label_1603c8;
        case 0x1603f8u: goto label_1603f8;
        case 0x160408u: goto label_160408;
        case 0x160410u: goto label_160410;
        default: break;
    }

    ctx->pc = 0x15feb8u;

    // 0x15feb8: 0x340cd970  ori         $t4, $zero, 0xD970
    ctx->pc = 0x15feb8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55664);
    // 0x15febc: 0x3ace823  subu        $sp, $sp, $t4
    ctx->pc = 0x15febcu;
    SET_GPR_S32(ctx, 29, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
    // 0x15fec0: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x15fec0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
    // 0x15fec4: 0x7db0ffb0  sq          $s0, -0x50($t5)
    ctx->pc = 0x15fec4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967216), GPR_VEC(ctx, 16));
    // 0x15fec8: 0x7db3ff80  sq          $s3, -0x80($t5)
    ctx->pc = 0x15fec8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967168), GPR_VEC(ctx, 19));
    // 0x15fecc: 0x7db1ffa0  sq          $s1, -0x60($t5)
    ctx->pc = 0x15feccu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967200), GPR_VEC(ctx, 17));
    // 0x15fed0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x15fed0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fed4: 0x7db2ff90  sq          $s2, -0x70($t5)
    ctx->pc = 0x15fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967184), GPR_VEC(ctx, 18));
    // 0x15fed8: 0x7db4ff70  sq          $s4, -0x90($t5)
    ctx->pc = 0x15fed8u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967152), GPR_VEC(ctx, 20));
    // 0x15fedc: 0x7db5ff60  sq          $s5, -0xA0($t5)
    ctx->pc = 0x15fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967136), GPR_VEC(ctx, 21));
    // 0x15fee0: 0x7db6ff50  sq          $s6, -0xB0($t5)
    ctx->pc = 0x15fee0u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967120), GPR_VEC(ctx, 22));
    // 0x15fee4: 0x7db7ff40  sq          $s7, -0xC0($t5)
    ctx->pc = 0x15fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 13), 4294967104), GPR_VEC(ctx, 23));
    // 0x15fee8: 0xfdbfff30  sd          $ra, -0xD0($t5)
    ctx->pc = 0x15fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 4294967088), GPR_U64(ctx, 31));
    // 0x15feec: 0xe5bbfff8  swc1        $f27, -0x8($t5)
    ctx->pc = 0x15feecu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967288), bits); }
    // 0x15fef0: 0xe5bafff0  swc1        $f26, -0x10($t5)
    ctx->pc = 0x15fef0u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967280), bits); }
    // 0x15fef4: 0xe5b9ffe8  swc1        $f25, -0x18($t5)
    ctx->pc = 0x15fef4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967272), bits); }
    // 0x15fef8: 0xe5b8ffe0  swc1        $f24, -0x20($t5)
    ctx->pc = 0x15fef8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967264), bits); }
    // 0x15fefc: 0xe5b7ffd8  swc1        $f23, -0x28($t5)
    ctx->pc = 0x15fefcu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967256), bits); }
    // 0x15ff00: 0xe5b6ffd0  swc1        $f22, -0x30($t5)
    ctx->pc = 0x15ff00u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967248), bits); }
    // 0x15ff04: 0xe5b5ffc8  swc1        $f21, -0x38($t5)
    ctx->pc = 0x15ff04u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967240), bits); }
    // 0x15ff08: 0xe5b4ffc0  swc1        $f20, -0x40($t5)
    ctx->pc = 0x15ff08u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 4294967232), bits); }
    // 0x15ff0c: 0x8e62006c  lw          $v0, 0x6C($s3)
    ctx->pc = 0x15ff0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x15ff10: 0x10400141  beqz        $v0, . + 4 + (0x141 << 2)
    ctx->pc = 0x15FF10u;
    {
        const bool branch_taken_0x15ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF10u;
        // 0x15ff14: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff10) {
            ctx->pc = 0x160418u;
            goto label_160418;
        }
    }
    ctx->pc = 0x15FF18u;
    // 0x15ff18: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x15ff18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x15ff1c: 0x8c43847c  lw          $v1, -0x7B84($v0)
    ctx->pc = 0x15ff1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33847Cu));
    // 0x15ff20: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x15FF20u;
    {
        const bool branch_taken_0x15ff20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF20u;
        // 0x15ff24: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff20) {
            ctx->pc = 0x15FF4Cu;
            goto label_15ff4c;
        }
    }
    ctx->pc = 0x15FF28u;
    // 0x15ff28: 0x8c620100  lw          $v0, 0x100($v1)
    ctx->pc = 0x15ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x15ff2c: 0x0  nop
    ctx->pc = 0x15ff2cu;
    // NOP
label_15ff30:
    // 0x15ff30: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x15FF30u;
    {
        const bool branch_taken_0x15ff30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15FF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF30u;
        // 0x15ff34: 0x60402d  daddu       $t0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff30) {
            ctx->pc = 0x15FF4Cu;
            goto label_15ff4c;
        }
    }
    ctx->pc = 0x15FF38u;
    // 0x15ff38: 0x8c6300ec  lw          $v1, 0xEC($v1)
    ctx->pc = 0x15ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
    // 0x15ff3c: 0x0  nop
    ctx->pc = 0x15ff3cu;
    // NOP
    // 0x15ff40: 0x5460fffb  bnel        $v1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x15FF40u;
    {
        const bool branch_taken_0x15ff40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x15ff40) {
            ctx->pc = 0x15FF44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15FF40u;
            // 0x15ff44: 0x8c620100  lw          $v0, 0x100($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15FF30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15ff30;
        }
    }
    ctx->pc = 0x15FF48u;
    // 0x15ff48: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15ff48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15ff4c:
    // 0x15ff4c: 0x11000130  beqz        $t0, . + 4 + (0x130 << 2)
    ctx->pc = 0x15FF4Cu;
    {
        const bool branch_taken_0x15ff4c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x15FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF4Cu;
        // 0x15ff50: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ff4c) {
            ctx->pc = 0x160410u;
            goto label_160410;
        }
    }
    ctx->pc = 0x15FF54u;
    // 0x15ff54: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x15ff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x15ff58: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x15ff58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
    // 0x15ff5c: 0x8c470fc8  lw          $a3, 0xFC8($v0)
    ctx->pc = 0x15ff5cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4040)));
    // 0x15ff60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x15ff60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x15ff64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15ff64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff68: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x15ff68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15ff6c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x15ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x15ff70: 0x68430017  ldl         $v1, 0x17($v0)
    ctx->pc = 0x15ff70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15ff74: 0x6c430010  ldr         $v1, 0x10($v0)
    ctx->pc = 0x15ff74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15ff78: 0x8c490018  lw          $t1, 0x18($v0)
    ctx->pc = 0x15ff78u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x15ff7c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x15ff7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ff80: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x15ff80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ff84: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x15ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x15ff88: 0x684c0027  ldl         $t4, 0x27($v0)
    ctx->pc = 0x15ff88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x15ff8c: 0x6c4c0020  ldr         $t4, 0x20($v0)
    ctx->pc = 0x15ff8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x15ff90: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x15ff90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x15ff94: 0xb3ac0017  sdl         $t4, 0x17($sp)
    ctx->pc = 0x15ff94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ff98: 0xb7ac0010  sdr         $t4, 0x10($sp)
    ctx->pc = 0x15ff98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ff9c: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x15ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
    // 0x15ffa0: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x15ffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15ffa4: 0x684c0037  ldl         $t4, 0x37($v0)
    ctx->pc = 0x15ffa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x15ffa8: 0x6c4c0030  ldr         $t4, 0x30($v0)
    ctx->pc = 0x15ffa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x15ffac: 0x8c490038  lw          $t1, 0x38($v0)
    ctx->pc = 0x15ffacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x15ffb0: 0xb3ac0027  sdl         $t4, 0x27($sp)
    ctx->pc = 0x15ffb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ffb4: 0xb7ac0020  sdr         $t4, 0x20($sp)
    ctx->pc = 0x15ffb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15ffb8: 0xafa90028  sw          $t1, 0x28($sp)
    ctx->pc = 0x15ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 9));
    // 0x15ffbc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x15ffbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ffc0: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x15ffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15ffc4: 0xc4620034  lwc1        $f2, 0x34($v1)
    ctx->pc = 0x15ffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x15ffc8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x15ffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x15ffcc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x15ffccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x15ffd0: 0xc4610038  lwc1        $f1, 0x38($v1)
    ctx->pc = 0x15ffd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15ffd4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x15ffd4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x15ffd8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x15ffd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x15ffdc: 0xc4f40080  lwc1        $f20, 0x80($a3)
    ctx->pc = 0x15ffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x15ffe0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x15ffe0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x15ffe4: 0x8d020040  lw          $v0, 0x40($t0)
    ctx->pc = 0x15ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x15ffe8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x15ffe8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x15ffec: 0x4618a6c0  add.s       $f27, $f20, $f24
    ctx->pc = 0x15ffecu;
    ctx->f[27] = FPU_ADD_S(ctx->f[20], ctx->f[24]);
    // 0x15fff0: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x15fff0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x15fff4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15fff4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15fff8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x15FFF8u;
    SET_GPR_U32(ctx, 31, 0x160000u);
    ctx->pc = 0x15FFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FFF8u;
    // 0x15fffc: 0x46000687  neg.s       $f26, $f0 (Delay Slot)
    ctx->f[26] = FPU_NEG_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x15FFF8u, 0x160000u)) {
        return;
    }
    ctx->pc = 0x160000u;
label_160000:
    // 0x160000: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x160000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x160004: 0xc6630084  lwc1        $f3, 0x84($s3)
    ctx->pc = 0x160004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x160008: 0xc7a40004  lwc1        $f4, 0x4($sp)
    ctx->pc = 0x160008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16000c: 0xc7a60008  lwc1        $f6, 0x8($sp)
    ctx->pc = 0x16000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x160010: 0x46032942  mul.s       $f5, $f5, $f3
    ctx->pc = 0x160010u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x160014: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x160014u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x160018: 0x46033182  mul.s       $f6, $f6, $f3
    ctx->pc = 0x160018u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x16001c: 0xe7a50030  swc1        $f5, 0x30($sp)
    ctx->pc = 0x16001cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x160020: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x160020u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x160024: 0xe7a60038  swc1        $f6, 0x38($sp)
    ctx->pc = 0x160024u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x160028: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x160028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16002c: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x16002cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160030: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x160030u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x160034: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x160034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160038: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x160038u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x16003c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x16003cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x160040: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x160040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x160044: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x160044u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x160048: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x160048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x16004c: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x16004cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x160050: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x160050u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x160054: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x160054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x160058: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x160058u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x16005c: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x16005cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x160060: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x160060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x160064: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x160064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x160068: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x160068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x16006c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x16006Cu;
    {
        const bool branch_taken_0x16006c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x160070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16006Cu;
        // 0x160070: 0xc4590044  lwc1        $f25, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16006c) {
            ctx->pc = 0x160090u;
            goto label_160090;
        }
    }
    ctx->pc = 0x160074u;
    // 0x160074: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x160074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x160078: 0x684c0047  ldl         $t4, 0x47($v0)
    ctx->pc = 0x160078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x16007c: 0x6c4c0040  ldr         $t4, 0x40($v0)
    ctx->pc = 0x16007cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x160080: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x160080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x160084: 0xb3ac0067  sdl         $t4, 0x67($sp)
    ctx->pc = 0x160084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x160088: 0xb7ac0060  sdr         $t4, 0x60($sp)
    ctx->pc = 0x160088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x16008c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x16008cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_160090:
    // 0x160090: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x160090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160094: 0x27b60070  addiu       $s6, $sp, 0x70
    ctx->pc = 0x160094u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x160098: 0xc6610080  lwc1        $f1, 0x80($s3)
    ctx->pc = 0x160098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16009c: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x16009cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600a0: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1600a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1600a4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1600a4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1600a8: 0x460105c1  sub.s       $f23, $f0, $f1
    ctx->pc = 0x1600a8u;
    ctx->f[23] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1600ac: 0x8e75006c  lw          $s5, 0x6C($s3)
    ctx->pc = 0x1600acu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x1600b0: 0x184000cb  blez        $v0, . + 4 + (0xCB << 2)
    ctx->pc = 0x1600B0u;
    {
        const bool branch_taken_0x1600b0 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1600B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1600B0u;
        // 0x1600b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1600b0) {
            ctx->pc = 0x1603E0u;
            goto label_1603e0;
        }
    }
    ctx->pc = 0x1600B8u;
    // 0x1600b8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1600b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1600bc: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1600bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1600c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1600c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1600c4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1600c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1600c8: 0x3a28021  addu        $s0, $sp, $v0
    ctx->pc = 0x1600c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1600cc: 0x0  nop
    ctx->pc = 0x1600ccu;
    // NOP
label_1600d0:
    // 0x1600d0: 0x6aa60007  ldl         $a2, 0x7($s5)
    ctx->pc = 0x1600d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1600d4: 0x6ea60000  ldr         $a2, 0x0($s5)
    ctx->pc = 0x1600d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1600d8: 0x8ea90008  lw          $t1, 0x8($s5)
    ctx->pc = 0x1600d8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x1600dc: 0xb2065877  sdl         $a2, 0x5877($s0)
    ctx->pc = 0x1600dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22647); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1600e0: 0xb6065870  sdr         $a2, 0x5870($s0)
    ctx->pc = 0x1600e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22640); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1600e4: 0xae095878  sw          $t1, 0x5878($s0)
    ctx->pc = 0x1600e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 22648), GPR_U32(ctx, 9));
    // 0x1600e8: 0xc60c5874  lwc1        $f12, 0x5874($s0)
    ctx->pc = 0x1600e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1600ec: 0xc6045870  lwc1        $f4, 0x5870($s0)
    ctx->pc = 0x1600ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1600f0: 0x461960c0  add.s       $f3, $f12, $f25
    ctx->pc = 0x1600f0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[12], ctx->f[25]);
    // 0x1600f4: 0xc6055878  lwc1        $f5, 0x5878($s0)
    ctx->pc = 0x1600f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1600f8: 0xe6035874  swc1        $f3, 0x5874($s0)
    ctx->pc = 0x1600f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22644), bits); }
    // 0x1600fc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1600fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160100: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x160100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160104: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x160104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x160108: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x160108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16010c: 0x46021882  mul.s       $f2, $f3, $f2
    ctx->pc = 0x16010cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x160110: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x160110u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x160114: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x160114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x160118: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x160118u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16011c: 0x461a0340  add.s       $f13, $f0, $f26
    ctx->pc = 0x16011cu;
    ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[26]);
    // 0x160120: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x160120u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160124: 0x0  nop
    ctx->pc = 0x160124u;
    // NOP
    // 0x160128: 0x450200a9  bc1fl       . + 4 + (0xA9 << 2)
    ctx->pc = 0x160128u;
    {
        const bool branch_taken_0x160128 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160128) {
            ctx->pc = 0x16012Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x160128u;
            // 0x16012c: 0x8e620070  lw          $v0, 0x70($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1603D0u;
            goto label_1603d0;
        }
    }
    ctx->pc = 0x160130u;
    // 0x160130: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x160130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x160134: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x160134u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x160138: 0xe6025880  swc1        $f2, 0x5880($s0)
    ctx->pc = 0x160138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22656), bits); }
    // 0x16013c: 0xc6210034  lwc1        $f1, 0x34($s1)
    ctx->pc = 0x16013cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160140: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x160140u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x160144: 0xe6015884  swc1        $f1, 0x5884($s0)
    ctx->pc = 0x160144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22660), bits); }
    // 0x160148: 0xc6230038  lwc1        $f3, 0x38($s1)
    ctx->pc = 0x160148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16014c: 0x460328c1  sub.s       $f3, $f5, $f3
    ctx->pc = 0x16014cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x160150: 0xe6035888  swc1        $f3, 0x5888($s0)
    ctx->pc = 0x160150u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22664), bits); }
    // 0x160154: 0xc6250020  lwc1        $f5, 0x20($s1)
    ctx->pc = 0x160154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x160158: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x160158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16015c: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x16015cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x160160: 0xc6240024  lwc1        $f4, 0x24($s1)
    ctx->pc = 0x160160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x160164: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x160164u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x160168: 0xc6280028  lwc1        $f8, 0x28($s1)
    ctx->pc = 0x160168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x16016c: 0x46040902  mul.s       $f4, $f1, $f4
    ctx->pc = 0x16016cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x160170: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x160170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x160174: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x160174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160178: 0x46081a02  mul.s       $f8, $f3, $f8
    ctx->pc = 0x160178u;
    ctx->f[8] = FPU_MUL_S(ctx->f[3], ctx->f[8]);
    // 0x16017c: 0xc62a0004  lwc1        $f10, 0x4($s1)
    ctx->pc = 0x16017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x160180: 0x460711c2  mul.s       $f7, $f2, $f7
    ctx->pc = 0x160180u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x160184: 0x46042940  add.s       $f5, $f5, $f4
    ctx->pc = 0x160184u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
    // 0x160188: 0xc6260010  lwc1        $f6, 0x10($s1)
    ctx->pc = 0x160188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x16018c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16018cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x160190: 0xc6240018  lwc1        $f4, 0x18($s1)
    ctx->pc = 0x160190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x160194: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x160194u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x160198: 0xc6290008  lwc1        $f9, 0x8($s1)
    ctx->pc = 0x160198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x16019c: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x16019cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
    // 0x1601a0: 0x46082940  add.s       $f5, $f5, $f8
    ctx->pc = 0x1601a0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[8]);
    // 0x1601a4: 0x46041902  mul.s       $f4, $f3, $f4
    ctx->pc = 0x1601a4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1601a8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1601a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1601ac: 0x460139c0  add.s       $f7, $f7, $f1
    ctx->pc = 0x1601acu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[1]);
    // 0x1601b0: 0x460918c2  mul.s       $f3, $f3, $f9
    ctx->pc = 0x1601b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x1601b4: 0x46162834  c.lt.s      $f5, $f22
    ctx->pc = 0x1601b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1601b8: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1601b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1601bc: 0x4501001a  bc1t        . + 4 + (0x1A << 2)
    ctx->pc = 0x1601BCu;
    {
        const bool branch_taken_0x1601bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1601C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1601BCu;
        // 0x1601c0: 0x460338c0  add.s       $f3, $f7, $f3 (Delay Slot)
        ctx->f[3] = FPU_ADD_S(ctx->f[7], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1601bc) {
            ctx->pc = 0x160228u;
            goto label_160228;
        }
    }
    ctx->pc = 0x1601C4u;
    // 0x1601c4: 0x3c013cf5  lui         $at, 0x3CF5
    ctx->pc = 0x1601c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15605 << 16));
    // 0x1601c8: 0x3421c28f  ori         $at, $at, 0xC28F
    ctx->pc = 0x1601c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)49807);
    // 0x1601cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1601ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1601d0: 0x46005906  mov.s       $f4, $f11
    ctx->pc = 0x1601d0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[11]);
    // 0x1601d4: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x1601d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1601d8: 0x46012840  add.s       $f1, $f5, $f1
    ctx->pc = 0x1601d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x1601dc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1601dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1601e0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1601e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1601e4: 0x0  nop
    ctx->pc = 0x1601e4u;
    // NOP
    // 0x1601e8: 0x0  nop
    ctx->pc = 0x1601e8u;
    // NOP
    // 0x1601ec: 0x46002803  div.s       $f0, $f5, $f0
    ctx->pc = 0x1601ecu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[0]);
    // 0x1601f0: 0x0  nop
    ctx->pc = 0x1601f0u;
    // NOP
    // 0x1601f4: 0x0  nop
    ctx->pc = 0x1601f4u;
    // NOP
    // 0x1601f8: 0x46012043  div.s       $f1, $f4, $f1
    ctx->pc = 0x1601f8u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[1]);
    // 0x1601fc: 0x46005ac1  sub.s       $f11, $f11, $f0
    ctx->pc = 0x1601fcu;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x160200: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x160200u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x160204: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x160204u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x160208: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x160208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x16020c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x16020cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x160210: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x160210u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x160214: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x160214u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160218: 0x0  nop
    ctx->pc = 0x160218u;
    // NOP
    // 0x16021c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x16021Cu;
    {
        const bool branch_taken_0x16021c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16021c) {
            ctx->pc = 0x160234u;
            goto label_160234;
        }
    }
    ctx->pc = 0x160224u;
    // 0x160224: 0x0  nop
    ctx->pc = 0x160224u;
    // NOP
label_160228:
    // 0x160228: 0x44805800  mtc1        $zero, $f11
    ctx->pc = 0x160228u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
    // 0x16022c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16022Cu;
    {
        const bool branch_taken_0x16022c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16022c) {
            ctx->pc = 0x160248u;
            goto label_160248;
        }
    }
    ctx->pc = 0x160234u;
label_160234:
    // 0x160234: 0x0  nop
    ctx->pc = 0x160234u;
    // NOP
    // 0x160238: 0x0  nop
    ctx->pc = 0x160238u;
    // NOP
    // 0x16023c: 0x46070003  div.s       $f0, $f0, $f7
    ctx->pc = 0x16023cu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[7]);
    // 0x160240: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x160240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x160244: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x160244u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_160248:
    // 0x160248: 0x461b6834  c.lt.s      $f13, $f27
    ctx->pc = 0x160248u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[27])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16024c: 0x0  nop
    ctx->pc = 0x16024cu;
    // NOP
    // 0x160250: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x160250u;
    {
        const bool branch_taken_0x160250 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x160254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160250u;
        // 0x160254: 0xc6610080  lwc1        $f1, 0x80($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x160250) {
            ctx->pc = 0x160268u;
            goto label_160268;
        }
    }
    ctx->pc = 0x160258u;
    // 0x160258: 0x46146801  sub.s       $f0, $f13, $f20
    ctx->pc = 0x160258u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[20]);
    // 0x16025c: 0x0  nop
    ctx->pc = 0x16025cu;
    // NOP
    // 0x160260: 0x46180003  div.s       $f0, $f0, $f24
    ctx->pc = 0x160260u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[24]);
    // 0x160264: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x160264u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_160268:
    // 0x160268: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x160268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16026c: 0x0  nop
    ctx->pc = 0x16026cu;
    // NOP
    // 0x160270: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x160270u;
    {
        const bool branch_taken_0x160270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160270) {
            ctx->pc = 0x16028Cu;
            goto label_16028c;
        }
    }
    ctx->pc = 0x160278u;
    // 0x160278: 0x0  nop
    ctx->pc = 0x160278u;
    // NOP
    // 0x16027c: 0x0  nop
    ctx->pc = 0x16027cu;
    // NOP
    // 0x160280: 0x46016003  div.s       $f0, $f12, $f1
    ctx->pc = 0x160280u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
    // 0x160284: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x160284u;
    {
        const bool branch_taken_0x160284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x160288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160284u;
        // 0x160288: 0x46005ac2  mul.s       $f11, $f11, $f0 (Delay Slot)
        ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x160284) {
            ctx->pc = 0x1602ACu;
            goto label_1602ac;
        }
    }
    ctx->pc = 0x16028Cu;
label_16028c:
    // 0x16028c: 0x460cb834  c.lt.s      $f23, $f12
    ctx->pc = 0x16028cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x160290: 0x0  nop
    ctx->pc = 0x160290u;
    // NOP
    // 0x160294: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x160294u;
    {
        const bool branch_taken_0x160294 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x160294) {
            ctx->pc = 0x1602ACu;
            goto label_1602ac;
        }
    }
    ctx->pc = 0x16029Cu;
    // 0x16029c: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x16029cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602a0: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x1602a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x1602a4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1602a4u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1602a8: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x1602a8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
label_1602ac:
    // 0x1602ac: 0x460bb034  c.lt.s      $f22, $f11
    ctx->pc = 0x1602acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1602b0: 0x0  nop
    ctx->pc = 0x1602b0u;
    // NOP
    // 0x1602b4: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x1602B4u;
    {
        const bool branch_taken_0x1602b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1602B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1602B4u;
        // 0x1602b8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1602b4) {
            ctx->pc = 0x1603CCu;
            goto label_1603cc;
        }
    }
    ctx->pc = 0x1602BCu;
    // 0x1602bc: 0xc6015870  lwc1        $f1, 0x5870($s0)
    ctx->pc = 0x1602bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1602c0: 0xc6025874  lwc1        $f2, 0x5874($s0)
    ctx->pc = 0x1602c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1602c4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1602c4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1602c8: 0xc6035878  lwc1        $f3, 0x5878($s0)
    ctx->pc = 0x1602c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1602cc: 0xe6015890  swc1        $f1, 0x5890($s0)
    ctx->pc = 0x1602ccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22672), bits); }
    // 0x1602d0: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1602d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602d4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1602d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1602d8: 0xe6025894  swc1        $f2, 0x5894($s0)
    ctx->pc = 0x1602d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22676), bits); }
    // 0x1602dc: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1602dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1602e0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x1602e0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1602e4: 0xe6035898  swc1        $f3, 0x5898($s0)
    ctx->pc = 0x1602e4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22680), bits); }
    // 0x1602e8: 0x6a0c5897  ldl         $t4, 0x5897($s0)
    ctx->pc = 0x1602e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x1602ec: 0x6e0c5890  ldr         $t4, 0x5890($s0)
    ctx->pc = 0x1602ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x1602f0: 0x8e025898  lw          $v0, 0x5898($s0)
    ctx->pc = 0x1602f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22680)));
    // 0x1602f4: 0xb24c0007  sdl         $t4, 0x7($s2)
    ctx->pc = 0x1602f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1602f8: 0xb64c0000  sdr         $t4, 0x0($s2)
    ctx->pc = 0x1602f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1602fc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1602fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x160300: 0xc6015870  lwc1        $f1, 0x5870($s0)
    ctx->pc = 0x160300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x160304: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x160304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160308: 0xc6025874  lwc1        $f2, 0x5874($s0)
    ctx->pc = 0x160308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16030c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x16030cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x160310: 0xc6035878  lwc1        $f3, 0x5878($s0)
    ctx->pc = 0x160310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x160314: 0xe6015890  swc1        $f1, 0x5890($s0)
    ctx->pc = 0x160314u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22672), bits); }
    // 0x160318: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x160318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16031c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x16031cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x160320: 0xe6025894  swc1        $f2, 0x5894($s0)
    ctx->pc = 0x160320u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22676), bits); }
    // 0x160324: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x160324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160328: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x160328u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x16032c: 0xe6035898  swc1        $f3, 0x5898($s0)
    ctx->pc = 0x16032cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22680), bits); }
    // 0x160330: 0x6a055897  ldl         $a1, 0x5897($s0)
    ctx->pc = 0x160330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22679); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x160334: 0x6e055890  ldr         $a1, 0x5890($s0)
    ctx->pc = 0x160334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 22672); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x160338: 0x8e065898  lw          $a2, 0x5898($s0)
    ctx->pc = 0x160338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22680)));
    // 0x16033c: 0xb245002b  sdl         $a1, 0x2B($s2)
    ctx->pc = 0x16033cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x160340: 0xb6450024  sdr         $a1, 0x24($s2)
    ctx->pc = 0x160340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x160344: 0xae46002c  sw          $a2, 0x2C($s2)
    ctx->pc = 0x160344u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 6));
    // 0x160348: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x160348u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x16034c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x16034cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x160350: 0xe6550040  swc1        $f21, 0x40($s2)
    ctx->pc = 0x160350u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x160354: 0xe6550044  swc1        $f21, 0x44($s2)
    ctx->pc = 0x160354u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x160358: 0xc66c007c  lwc1        $f12, 0x7C($s3)
    ctx->pc = 0x160358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x16035c: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x16035Cu;
    SET_GPR_U32(ctx, 31, 0x160364u);
    ctx->pc = 0x160360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16035Cu;
    // 0x160360: 0x460c5b02  mul.s       $f12, $f11, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[11], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x16035Cu, 0x160364u)) {
        return;
    }
    ctx->pc = 0x160364u;
label_160364:
    // 0x160364: 0x2643000c  addiu       $v1, $s2, 0xC
    ctx->pc = 0x160364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x160368: 0xa242000c  sb          $v0, 0xC($s2)
    ctx->pc = 0x160368u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 12), (uint8_t)GPR_U32(ctx, 2));
    // 0x16036c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x16036cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x160370: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x160370u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160374: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x160374u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x160378: 0x26440030  addiu       $a0, $s2, 0x30
    ctx->pc = 0x160378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x16037c: 0xa2420030  sb          $v0, 0x30($s2)
    ctx->pc = 0x16037cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x160380: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x160380u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x160384: 0xa0820001  sb          $v0, 0x1($a0)
    ctx->pc = 0x160384u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x160388: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x160388u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x16038c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x16038cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x160390: 0x24020300  addiu       $v0, $zero, 0x300
    ctx->pc = 0x160390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x160394: 0x1682000d  bne         $s4, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x160394u;
    {
        const bool branch_taken_0x160394 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x160398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x160394u;
        // 0x160398: 0x26520048  addiu       $s2, $s2, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x160394) {
            ctx->pc = 0x1603CCu;
            goto label_1603cc;
        }
    }
    ctx->pc = 0x16039Cu;
    // 0x16039c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x16039cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603a0: 0x24050600  addiu       $a1, $zero, 0x600
    ctx->pc = 0x1603a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x1603a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1603a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603a8: 0xc091fea  jal         func_247FA8
    ctx->pc = 0x1603A8u;
    SET_GPR_U32(ctx, 31, 0x1603B0u);
    ctx->pc = 0x1603ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603A8u;
    // 0x1603ac: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1603A8u, 0x1603B0u)) {
        return;
    }
    ctx->pc = 0x1603B0u;
label_1603b0:
    // 0x1603b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1603B0u;
    {
        const bool branch_taken_0x1603b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603B0u;
        // 0x1603b4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603b0) {
            ctx->pc = 0x1603C8u;
            goto label_1603c8;
        }
    }
    ctx->pc = 0x1603B8u;
    // 0x1603b8: 0xc092094  jal         func_248250
    ctx->pc = 0x1603B8u;
    SET_GPR_U32(ctx, 31, 0x1603C0u);
    ctx->pc = 0x1603BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603B8u;
    // 0x1603bc: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x1603B8u, 0x1603C0u)) {
        return;
    }
    ctx->pc = 0x1603C0u;
label_1603c0:
    // 0x1603c0: 0xc092016  jal         func_248058
    ctx->pc = 0x1603C0u;
    SET_GPR_U32(ctx, 31, 0x1603C8u);
    ctx->pc = 0x1603C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603C0u;
    // 0x1603c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x1603C0u, 0x1603C8u)) {
        return;
    }
    ctx->pc = 0x1603C8u;
label_1603c8:
    // 0x1603c8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1603c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1603cc:
    // 0x1603cc: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1603ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
label_1603d0:
    // 0x1603d0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x1603d0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x1603d4: 0x2e2102a  slt         $v0, $s7, $v0
    ctx->pc = 0x1603d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1603d8: 0x1440ff3d  bnez        $v0, . + 4 + (-0xC3 << 2)
    ctx->pc = 0x1603D8u;
    {
        const bool branch_taken_0x1603d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1603DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603D8u;
        // 0x1603dc: 0x26b50010  addiu       $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603d8) {
            ctx->pc = 0x1600D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1600d0;
        }
    }
    ctx->pc = 0x1603E0u;
label_1603e0:
    // 0x1603e0: 0x1a80000b  blez        $s4, . + 4 + (0xB << 2)
    ctx->pc = 0x1603E0u;
    {
        const bool branch_taken_0x1603e0 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1603E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603E0u;
        // 0x1603e4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603e0) {
            ctx->pc = 0x160410u;
            goto label_160410;
        }
    }
    ctx->pc = 0x1603E8u;
    // 0x1603e8: 0x142840  sll         $a1, $s4, 1
    ctx->pc = 0x1603e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x1603ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1603ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1603f0: 0xc091fea  jal         func_247FA8
    ctx->pc = 0x1603F0u;
    SET_GPR_U32(ctx, 31, 0x1603F8u);
    ctx->pc = 0x1603F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1603F0u;
    // 0x1603f4: 0x24070019  addiu       $a3, $zero, 0x19 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247FA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247FA8u, 0x1603F0u, 0x1603F8u)) {
        return;
    }
    ctx->pc = 0x1603F8u;
label_1603f8:
    // 0x1603f8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1603F8u;
    {
        const bool branch_taken_0x1603f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1603FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1603F8u;
        // 0x1603fc: 0x340cd970  ori         $t4, $zero, 0xD970 (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55664);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1603f8) {
            ctx->pc = 0x160414u;
            goto label_160414;
        }
    }
    ctx->pc = 0x160400u;
    // 0x160400: 0xc092094  jal         func_248250
    ctx->pc = 0x160400u;
    SET_GPR_U32(ctx, 31, 0x160408u);
    ctx->pc = 0x160404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x160400u;
    // 0x160404: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248250u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248250u, 0x160400u, 0x160408u)) {
        return;
    }
    ctx->pc = 0x160408u;
label_160408:
    // 0x160408: 0xc092016  jal         func_248058
    ctx->pc = 0x160408u;
    SET_GPR_U32(ctx, 31, 0x160410u);
    ctx->pc = 0x248058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x248058u, 0x160408u, 0x160410u)) {
        return;
    }
    ctx->pc = 0x160410u;
label_160410:
    // 0x160410: 0x340cd970  ori         $t4, $zero, 0xD970
    ctx->pc = 0x160410u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55664);
label_160414:
    // 0x160414: 0x19d6821  addu        $t5, $t4, $sp
    ctx->pc = 0x160414u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 29)));
label_160418:
    // 0x160418: 0x79b0ffb0  lq          $s0, -0x50($t5)
    ctx->pc = 0x160418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 13), 4294967216)));
    // 0x16041c: 0x79b1ffa0  lq          $s1, -0x60($t5)
    ctx->pc = 0x16041cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 13), 4294967200)));
    // 0x160420: 0x79b2ff90  lq          $s2, -0x70($t5)
    ctx->pc = 0x160420u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 13), 4294967184)));
    // 0x160424: 0x79b3ff80  lq          $s3, -0x80($t5)
    ctx->pc = 0x160424u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 13), 4294967168)));
    // 0x160428: 0x79b4ff70  lq          $s4, -0x90($t5)
    ctx->pc = 0x160428u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 13), 4294967152)));
    // 0x16042c: 0x79b5ff60  lq          $s5, -0xA0($t5)
    ctx->pc = 0x16042cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 13), 4294967136)));
    // 0x160430: 0x79b6ff50  lq          $s6, -0xB0($t5)
    ctx->pc = 0x160430u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 13), 4294967120)));
    // 0x160434: 0x79b7ff40  lq          $s7, -0xC0($t5)
    ctx->pc = 0x160434u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 13), 4294967104)));
    // 0x160438: 0xddbfff30  ld          $ra, -0xD0($t5)
    ctx->pc = 0x160438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 13), 4294967088)));
    // 0x16043c: 0xc5bbfff8  lwc1        $f27, -0x8($t5)
    ctx->pc = 0x16043cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x160440: 0xc5bafff0  lwc1        $f26, -0x10($t5)
    ctx->pc = 0x160440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x160444: 0xc5b9ffe8  lwc1        $f25, -0x18($t5)
    ctx->pc = 0x160444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x160448: 0xc5b8ffe0  lwc1        $f24, -0x20($t5)
    ctx->pc = 0x160448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x16044c: 0xc5b7ffd8  lwc1        $f23, -0x28($t5)
    ctx->pc = 0x16044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x160450: 0xc5b6ffd0  lwc1        $f22, -0x30($t5)
    ctx->pc = 0x160450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x160454: 0xc5b5ffc8  lwc1        $f21, -0x38($t5)
    ctx->pc = 0x160454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x160458: 0xc5b4ffc0  lwc1        $f20, -0x40($t5)
    ctx->pc = 0x160458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 4294967232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16045c: 0x3e00008  jr          $ra
    ctx->pc = 0x16045Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x160460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16045Cu;
        // 0x160460: 0x3ace821  addu        $sp, $sp, $t4 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16045Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x160464u;
    // 0x160464: 0x0  nop
    ctx->pc = 0x160464u;
    // NOP
    ctx->pc = 0x160468u;
}
