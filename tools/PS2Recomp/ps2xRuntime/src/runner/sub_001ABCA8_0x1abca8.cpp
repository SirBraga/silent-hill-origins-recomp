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

// Function: sub_001ABCA8
// Address: 0x1abca8 - 0x1abfc8
void sub_001ABCA8_0x1abca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABCA8_0x1abca8");
#endif

    switch (ctx->pc) {
        case 0x1abd20u: goto label_1abd20;
        case 0x1abd28u: goto label_1abd28;
        case 0x1abd50u: goto label_1abd50;
        default: break;
    }

    ctx->pc = 0x1abca8u;

    // 0x1abca8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1abca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1abcac: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x1abcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x1abcb0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x1abcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x1abcb4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x1abcb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcb8: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x1abcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x1abcbc: 0x2690ffff  addiu       $s0, $s4, -0x1
    ctx->pc = 0x1abcbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x1abcc0: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x1abcc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x1abcc4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1abcc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcc8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x1abcc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x1abccc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1abcccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcd0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1abcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x1abcd4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x1abcd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abcd8: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x1abcd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x1abcdc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1abcdcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abce0: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x1abce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x1abce4: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x1abce4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1abce8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1abce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x1abcec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1abcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1abcf0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1abcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1abcf4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abcf8: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x1ABCF8u;
    {
        const bool branch_taken_0x1abcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABCFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABCF8u;
        // 0x1abcfc: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abcf8) {
            ctx->pc = 0x1ABF70u;
            goto label_1abf70;
        }
    }
    ctx->pc = 0x1ABD00u;
    // 0x1abd00: 0x24a30060  addiu       $v1, $a1, 0x60
    ctx->pc = 0x1abd00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 96));
    // 0x1abd04: 0x8c621000  lw          $v0, 0x1000($v1)
    ctx->pc = 0x1abd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4096)));
    // 0x1abd08: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abd08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1abd0c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1abd0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abd10: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x1ABD10u;
    {
        const bool branch_taken_0x1abd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABD10u;
        // 0x1abd14: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abd10) {
            ctx->pc = 0x1ABF70u;
            goto label_1abf70;
        }
    }
    ctx->pc = 0x1ABD18u;
    // 0x1abd18: 0x2a0902d  daddu       $s2, $s5, $zero
    ctx->pc = 0x1abd18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd1c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1abd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1abd20:
    // 0x1abd20: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1ABD20u;
    SET_GPR_U32(ctx, 31, 0x1ABD28u);
    ctx->pc = 0x1ABD24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD20u;
    // 0x1abd24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFC8u, 0x1ABD20u, 0x1ABD28u)) {
        return;
    }
    ctx->pc = 0x1ABD28u;
label_1abd28:
    // 0x1abd28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1abd28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1abd2c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1abd2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1abd30: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1abd30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1abd34: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1abd34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1abd38: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1abd38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abd3c: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1abd3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abd40: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x1abd40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x1abd44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1abd44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abd48: 0xc06aff2  jal         func_1ABFC8
    ctx->pc = 0x1ABD48u;
    SET_GPR_U32(ctx, 31, 0x1ABD50u);
    ctx->pc = 0x1ABD4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABD48u;
    // 0x1abd4c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ABFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ABFC8u, 0x1ABD48u, 0x1ABD50u)) {
        return;
    }
    ctx->pc = 0x1ABD50u;
label_1abd50:
    // 0x1abd50: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1abd50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1abd54: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1abd54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1abd58: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1abd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1abd5c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1abd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abd60: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1abd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abd64: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1abd64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x1abd68: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1abd68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abd6c: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1abd6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abd70: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1abd70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abd74: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1abd74u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1abd78: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1abd78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abd7c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1abd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abd80: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1abd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abd84: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1abd84u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1abd88: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1abd88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x1abd8c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1abd8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1abd90: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x1abd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x1abd94: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x1abd94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x1abd98: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x1abd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1abd9c: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x1abd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1abda0: 0x8fa80048  lw          $t0, 0x48($sp)
    ctx->pc = 0x1abda0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1abda4: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x1abda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abda8: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x1abda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abdac: 0xafa80038  sw          $t0, 0x38($sp)
    ctx->pc = 0x1abdacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 8));
    // 0x1abdb0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x1abdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abdb4: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1abdb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abdb8: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x1abdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abdbc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1abdbcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1abdc0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x1abdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abdc4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1abdc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abdc8: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1abdc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abdcc: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1abdccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1abdd0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1abdd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1abdd4: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1abdd4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1abdd8: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1abdd8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1abddc: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1abddcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1abde0: 0x6ba40057  ldl         $a0, 0x57($sp)
    ctx->pc = 0x1abde0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1abde4: 0x6fa40050  ldr         $a0, 0x50($sp)
    ctx->pc = 0x1abde4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1abde8: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x1abde8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1abdec: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x1abdecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abdf0: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x1abdf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abdf4: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x1abdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x1abdf8: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x1abdf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x1abdfc: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1abdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe00: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x1abe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe04: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1abe04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abe08: 0x46000142  mul.s       $f5, $f0, $f0
    ctx->pc = 0x1abe08u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1abe0c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x1abe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abe10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1abe10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1abe14: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1abe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abe18: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x1abe18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1abe1c: 0x46032102  mul.s       $f4, $f4, $f3
    ctx->pc = 0x1abe1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x1abe20: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x1abe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1abe24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1abe28: 0x46062940  add.s       $f5, $f5, $f6
    ctx->pc = 0x1abe28u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[6]);
    // 0x1abe2c: 0x46040840  add.s       $f1, $f1, $f4
    ctx->pc = 0x1abe2cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[4]);
    // 0x1abe30: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1abe30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1abe34: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1abe34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1abe38: 0x46022940  add.s       $f5, $f5, $f2
    ctx->pc = 0x1abe38u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
    // 0x1abe3c: 0x0  nop
    ctx->pc = 0x1abe3cu;
    // NOP
    // 0x1abe40: 0x0  nop
    ctx->pc = 0x1abe40u;
    // NOP
    // 0x1abe44: 0x46050943  div.s       $f5, $f1, $f5
    ctx->pc = 0x1abe44u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[5]);
    // 0x1abe48: 0x46072834  c.lt.s      $f5, $f7
    ctx->pc = 0x1abe48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[7])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abe4c: 0x0  nop
    ctx->pc = 0x1abe4cu;
    // NOP
    // 0x1abe50: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1ABE50u;
    {
        const bool branch_taken_0x1abe50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE50u;
        // 0x1abe54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe50) {
            ctx->pc = 0x1ABE60u;
            goto label_1abe60;
        }
    }
    ctx->pc = 0x1ABE58u;
    // 0x1abe58: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1ABE58u;
    {
        const bool branch_taken_0x1abe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABE5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABE58u;
        // 0x1abe5c: 0x46003946  mov.s       $f5, $f7 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abe58) {
            ctx->pc = 0x1ABE7Cu;
            goto label_1abe7c;
        }
    }
    ctx->pc = 0x1ABE60u;
label_1abe60:
    // 0x1abe60: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abe60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abe64: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abe64u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abe68: 0x0  nop
    ctx->pc = 0x1abe68u;
    // NOP
    // 0x1abe6c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1abe6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abe70: 0x0  nop
    ctx->pc = 0x1abe70u;
    // NOP
    // 0x1abe74: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1ABE74u;
    {
        const bool branch_taken_0x1abe74 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1abe74) {
            ctx->pc = 0x1ABE78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABE74u;
            // 0x1abe78: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE7Cu;
            goto label_1abe7c;
        }
    }
    ctx->pc = 0x1ABE7Cu;
label_1abe7c:
    // 0x1abe7c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1abe7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe80: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x1abe80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abe84: 0x0  nop
    ctx->pc = 0x1abe84u;
    // NOP
    // 0x1abe88: 0x45020002  bc1fl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABE88u;
    {
        const bool branch_taken_0x1abe88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1abe88) {
            ctx->pc = 0x1ABE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ABE88u;
            // 0x1abe8c: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
            ctx->f[5] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ABE94u;
            goto label_1abe94;
        }
    }
    ctx->pc = 0x1ABE90u;
    // 0x1abe90: 0xe6650000  swc1        $f5, 0x0($s3)
    ctx->pc = 0x1abe90u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_1abe94:
    // 0x1abe94: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1abe94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abe98: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1abe98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abe9c: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x1abe9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abea0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x1abea0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x1abea4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x1abea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x1abea8: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x1abea8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x1abeac: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1abeacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1abeb0: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1abeb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1abeb4: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x1abeb4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1abeb8: 0x6ba80067  ldl         $t0, 0x67($sp)
    ctx->pc = 0x1abeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1abebc: 0x6fa80060  ldr         $t0, 0x60($sp)
    ctx->pc = 0x1abebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1abec0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1abec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1abec4: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x1abec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abec8: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x1abec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abecc: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x1abeccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x1abed0: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x1abed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1abed4: 0xc7a30050  lwc1        $f3, 0x50($sp)
    ctx->pc = 0x1abed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abed8: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x1abed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1abedc: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1abedcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1abee0: 0xc7a40054  lwc1        $f4, 0x54($sp)
    ctx->pc = 0x1abee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1abee4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x1abee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abee8: 0xc7a30058  lwc1        $f3, 0x58($sp)
    ctx->pc = 0x1abee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1abeec: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1abeecu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x1abef0: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1abef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1abef4: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x1abef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1abef8: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1abef8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1abefc: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1abefcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1abf00: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1abf00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1abf04: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1abf04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1abf08: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1abf08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1abf0c: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x1abf0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf10: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x1abf10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf14: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x1abf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x1abf18: 0x3c013f59  lui         $at, 0x3F59
    ctx->pc = 0x1abf18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16217 << 16));
    // 0x1abf1c: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1abf1cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x1abf20: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1abf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1abf24: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x1abf24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1abf28: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x1abf28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1abf2c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x1abf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1abf30: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1abf30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf34: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1abf34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf38: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x1abf38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x1abf3c: 0x46050036  c.le.s      $f0, $f5
    ctx->pc = 0x1abf3cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1abf40: 0x0  nop
    ctx->pc = 0x1abf40u;
    // NOP
    // 0x1abf44: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1ABF44u;
    {
        const bool branch_taken_0x1abf44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1ABF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF44u;
        // 0x1abf48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf44) {
            ctx->pc = 0x1ABF50u;
            goto label_1abf50;
        }
    }
    ctx->pc = 0x1ABF4Cu;
    // 0x1abf4c: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1abf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_1abf50:
    // 0x1abf50: 0xb4102b  sltu        $v0, $a1, $s4
    ctx->pc = 0x1abf50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x1abf54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1ABF54u;
    {
        const bool branch_taken_0x1abf54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF54u;
        // 0x1abf58: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf54) {
            ctx->pc = 0x1ABF70u;
            goto label_1abf70;
        }
    }
    ctx->pc = 0x1ABF5Cu;
    // 0x1abf5c: 0x8ea21000  lw          $v0, 0x1000($s5)
    ctx->pc = 0x1abf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4096)));
    // 0x1abf60: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1abf60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1abf64: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1abf64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1abf68: 0x1440ff6d  bnez        $v0, . + 4 + (-0x93 << 2)
    ctx->pc = 0x1ABF68u;
    {
        const bool branch_taken_0x1abf68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ABF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABF68u;
        // 0x1abf6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1abf68) {
            ctx->pc = 0x1ABD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1abd20;
        }
    }
    ctx->pc = 0x1ABF70u;
label_1abf70:
    // 0x1abf70: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x1abf70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1abf74: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x1abf74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1abf78: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x1abf78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1abf7c: 0xb2e80007  sdl         $t0, 0x7($s7)
    ctx->pc = 0x1abf7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf80: 0xb6e80000  sdr         $t0, 0x0($s7)
    ctx->pc = 0x1abf80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1abf84: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x1abf84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf88: 0xaee30008  sw          $v1, 0x8($s7)
    ctx->pc = 0x1abf88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 3));
    // 0x1abf8c: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x1abf8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1abf90: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x1abf90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1abf94: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x1abf94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1abf98: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x1abf98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1abf9c: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x1abf9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1abfa0: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x1abfa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1abfa4: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x1abfa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1abfa8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1abfa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1abfac: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1abfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1abfb0: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABFB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFB0u;
        // 0x1abfb4: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABFB8u;
    // 0x1abfb8: 0x27bd00f0  addiu       $sp, $sp, 0xF0
    ctx->pc = 0x1abfb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x1abfbc: 0x0  nop
    ctx->pc = 0x1abfbcu;
    // NOP
    // 0x1abfc0: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x1abfc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1abfc4: 0x0  nop
    ctx->pc = 0x1abfc4u;
    // NOP
    ctx->pc = 0x1abfc8u;
}
