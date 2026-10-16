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

// Function: sub_0011BC98
// Address: 0x11bc98 - 0x11bef0
void sub_0011BC98_0x11bc98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BC98_0x11bc98");
#endif

    switch (ctx->pc) {
        case 0x11bd60u: goto label_11bd60;
        case 0x11bdb4u: goto label_11bdb4;
        case 0x11be3cu: goto label_11be3c;
        case 0x11be84u: goto label_11be84;
        case 0x11bec8u: goto label_11bec8;
        case 0x11bed0u: goto label_11bed0;
        default: break;
    }

    ctx->pc = 0x11bc98u;

    // 0x11bc98: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x11bc98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x11bc9c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x11bc9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x11bca0: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x11bca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x11bca4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11bca4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bca8: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x11bca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x11bcac: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x11bcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x11bcb0: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x11bcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x11bcb4: 0x10a00086  beqz        $a1, . + 4 + (0x86 << 2)
    ctx->pc = 0x11BCB4u;
    {
        const bool branch_taken_0x11bcb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCB4u;
        // 0x11bcb8: 0xffbf00c0  sd          $ra, 0xC0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcb4) {
            ctx->pc = 0x11BED0u;
            goto label_11bed0;
        }
    }
    ctx->pc = 0x11BCBCu;
    // 0x11bcbc: 0x90a20034  lbu         $v0, 0x34($a1)
    ctx->pc = 0x11bcbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x11bcc0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x11bcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x11bcc4: 0x10400082  beqz        $v0, . + 4 + (0x82 << 2)
    ctx->pc = 0x11BCC4u;
    {
        const bool branch_taken_0x11bcc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BCC4u;
        // 0x11bcc8: 0x27b20060  addiu       $s2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bcc4) {
            ctx->pc = 0x11BED0u;
            goto label_11bed0;
        }
    }
    ctx->pc = 0x11BCCCu;
    // 0x11bccc: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x11bcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x11bcd0: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x11bcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x11bcd4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11bcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11bcd8: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x11bcd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bcdc: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x11bcdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bce0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x11bce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x11bce4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x11bce4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x11bce8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x11bce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x11bcec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11bcecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x11bcf0: 0x68a70013  ldl         $a3, 0x13($a1)
    ctx->pc = 0x11bcf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11bcf4: 0x6ca7000c  ldr         $a3, 0xC($a1)
    ctx->pc = 0x11bcf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11bcf8: 0x8ca80014  lw          $t0, 0x14($a1)
    ctx->pc = 0x11bcf8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x11bcfc: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x11bcfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bd00: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x11bd00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bd04: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x11bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x11bd08: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x11bd08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x11bd0c: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x11bd0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x11bd10: 0xe7a40010  swc1        $f4, 0x10($sp)
    ctx->pc = 0x11bd10u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x11bd14: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x11bd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11bd18: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x11bd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11bd1c: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x11bd1cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x11bd20: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x11bd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bd24: 0x46041042  mul.s       $f1, $f2, $f4
    ctx->pc = 0x11bd24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x11bd28: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x11bd28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x11bd2c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x11bd2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x11bd30: 0x46020081  sub.s       $f2, $f0, $f2
    ctx->pc = 0x11bd30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x11bd34: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11bd34u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11bd38: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x11bd38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x11bd3c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x11bd3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x11bd40: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x11bd40u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x11bd44: 0x8e910040  lw          $s1, 0x40($s4)
    ctx->pc = 0x11bd44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x11bd48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11bd48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd4c: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x11bd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11bd50: 0x26330010  addiu       $s3, $s1, 0x10
    ctx->pc = 0x11bd50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x11bd54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd58: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11BD58u;
    SET_GPR_U32(ctx, 31, 0x11BD60u);
    ctx->pc = 0x11BD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BD58u;
    // 0x11bd5c: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11BD58u, 0x11BD60u)) {
        return;
    }
    ctx->pc = 0x11BD60u;
label_11bd60:
    // 0x11bd60: 0xc680008c  lwc1        $f0, 0x8C($s4)
    ctx->pc = 0x11bd60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bd64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11bd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bd68: 0xc6810090  lwc1        $f1, 0x90($s4)
    ctx->pc = 0x11bd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bd6c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x11bd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11bd70: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x11bd70u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x11bd74: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x11bd74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x11bd78: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x11bd78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x11bd7c: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x11bd7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11bd80: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x11bd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11bd84: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x11bd84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x11bd88: 0xb3a70057  sdl         $a3, 0x57($sp)
    ctx->pc = 0x11bd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bd8c: 0xb7a70050  sdr         $a3, 0x50($sp)
    ctx->pc = 0x11bd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bd90: 0xafa80058  sw          $t0, 0x58($sp)
    ctx->pc = 0x11bd90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 8));
    // 0x11bd94: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x11bd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11bd98: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x11bd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11bd9c: 0x8fa80058  lw          $t0, 0x58($sp)
    ctx->pc = 0x11bd9cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x11bda0: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x11bda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bda4: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x11bda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11bda8: 0xafa80048  sw          $t0, 0x48($sp)
    ctx->pc = 0x11bda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 8));
    // 0x11bdac: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x11BDACu;
    SET_GPR_U32(ctx, 31, 0x11BDB4u);
    ctx->pc = 0x11BDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BDACu;
    // 0x11bdb0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x11BDACu, 0x11BDB4u)) {
        return;
    }
    ctx->pc = 0x11BDB4u;
label_11bdb4:
    // 0x11bdb4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x11bdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11bdb8: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x11bdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bdbc: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x11bdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x11bdc0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11bdc0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11bdc4: 0xc7a30068  lwc1        $f3, 0x68($sp)
    ctx->pc = 0x11bdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11bdc8: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x11bdc8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11bdcc: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11bdccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bdd0: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x11bdd0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x11bdd4: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x11bdd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x11bdd8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x11bdd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bddc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11bddcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11bde0: 0xc6810098  lwc1        $f1, 0x98($s4)
    ctx->pc = 0x11bde0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11bde4: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x11bde4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x11bde8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x11bde8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x11bdec: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x11bdecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x11bdf0: 0xe7a30078  swc1        $f3, 0x78($sp)
    ctx->pc = 0x11bdf0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x11bdf4: 0xe7a20070  swc1        $f2, 0x70($sp)
    ctx->pc = 0x11bdf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x11bdf8: 0xe7a40074  swc1        $f4, 0x74($sp)
    ctx->pc = 0x11bdf8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x11bdfc: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x11bdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11be00: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x11be00u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x11be04: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x11be04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
    // 0x11be08: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x11be08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11be0c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11be0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11be10: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x11be10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11be14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x11be14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x11be18: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x11be18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x11be1c: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x11be1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11be20: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x11be20u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x11be24: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x11be24u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11be28: 0x27b200a0  addiu       $s2, $sp, 0xA0
    ctx->pc = 0x11be28u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x11be2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11be2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11be30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be34: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x11BE34u;
    SET_GPR_U32(ctx, 31, 0x11BE3Cu);
    ctx->pc = 0x11BE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE34u;
    // 0x11be38: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x11BE34u, 0x11BE3Cu)) {
        return;
    }
    ctx->pc = 0x11BE3Cu;
label_11be3c:
    // 0x11be3c: 0xc6800094  lwc1        $f0, 0x94($s4)
    ctx->pc = 0x11be3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11be40: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11be40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11be44: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x11be44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x11be48: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x11be48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x11be4c: 0x6ba700a7  ldl         $a3, 0xA7($sp)
    ctx->pc = 0x11be4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11be50: 0x6fa700a0  ldr         $a3, 0xA0($sp)
    ctx->pc = 0x11be50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11be54: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x11be54u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x11be58: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x11be58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11be5c: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x11be5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11be60: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x11be60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
    // 0x11be64: 0x6ba70097  ldl         $a3, 0x97($sp)
    ctx->pc = 0x11be64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11be68: 0x6fa70090  ldr         $a3, 0x90($sp)
    ctx->pc = 0x11be68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11be6c: 0x8fa80098  lw          $t0, 0x98($sp)
    ctx->pc = 0x11be6cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x11be70: 0xb3a70087  sdl         $a3, 0x87($sp)
    ctx->pc = 0x11be70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11be74: 0xb7a70080  sdr         $a3, 0x80($sp)
    ctx->pc = 0x11be74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11be78: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x11be78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
    // 0x11be7c: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x11BE7Cu;
    SET_GPR_U32(ctx, 31, 0x11BE84u);
    ctx->pc = 0x11BE80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BE7Cu;
    // 0x11be80: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x11BE7Cu, 0x11BE84u)) {
        return;
    }
    ctx->pc = 0x11BE84u;
label_11be84:
    // 0x11be84: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x11be84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x11be88: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x11be88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11be8c: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x11be8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x11be90: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x11be90u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x11be94: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x11be94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x11be98: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x11be98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x11be9c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x11be9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bea0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x11bea0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x11bea4: 0xe7a200b4  swc1        $f2, 0xB4($sp)
    ctx->pc = 0x11bea4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x11bea8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x11bea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11beac: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x11beacu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x11beb0: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x11beb0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x11beb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x11beb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11beb8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11beb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bebc: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x11bebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x11bec0: 0xc0446dc  jal         func_111B70
    ctx->pc = 0x11BEC0u;
    SET_GPR_U32(ctx, 31, 0x11BEC8u);
    ctx->pc = 0x11BEC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEC0u;
    // 0x11bec4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111B70u, 0x11BEC0u, 0x11BEC8u)) {
        return;
    }
    ctx->pc = 0x11BEC8u;
label_11bec8:
    // 0x11bec8: 0xc08992e  jal         func_2264B8
    ctx->pc = 0x11BEC8u;
    SET_GPR_U32(ctx, 31, 0x11BED0u);
    ctx->pc = 0x11BECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11BEC8u;
    // 0x11becc: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x11BEC8u, 0x11BED0u)) {
        return;
    }
    ctx->pc = 0x11BED0u;
label_11bed0:
    // 0x11bed0: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x11bed0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x11bed4: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x11bed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x11bed8: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x11bed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x11bedc: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x11bedcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x11bee0: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x11bee0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x11bee4: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x11bee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x11bee8: 0x3e00008  jr          $ra
    ctx->pc = 0x11BEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BEE8u;
        // 0x11beec: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11BEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11BEF0u;
}
