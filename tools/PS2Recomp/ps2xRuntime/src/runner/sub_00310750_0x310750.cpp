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

// Function: sub_00310750
// Address: 0x310750 - 0x310f88
void sub_00310750_0x310750(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310750_0x310750");
#endif

    switch (ctx->pc) {
        case 0x3107e0u: goto label_3107e0;
        case 0x3108d0u: goto label_3108d0;
        case 0x310900u: goto label_310900;
        case 0x310908u: goto label_310908;
        case 0x310914u: goto label_310914;
        case 0x310970u: goto label_310970;
        case 0x3109b4u: goto label_3109b4;
        case 0x310a2cu: goto label_310a2c;
        case 0x310a5cu: goto label_310a5c;
        case 0x310ad0u: goto label_310ad0;
        case 0x310c00u: goto label_310c00;
        case 0x310d1cu: goto label_310d1c;
        case 0x310d60u: goto label_310d60;
        case 0x310e6cu: goto label_310e6c;
        default: break;
    }

    ctx->pc = 0x310750u;

    // 0x310750: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x310750u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x310754: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x310754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x310758: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x310758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x31075c: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x31075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x310760: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x310760u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310764: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x310764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x310768: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x310768u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31076c: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x31076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x310770: 0x27b20050  addiu       $s2, $sp, 0x50
    ctx->pc = 0x310770u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x310774: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x310774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x310778: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x310778u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31077c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x31077cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310780: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x310780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x310784: 0xe7ba0160  swc1        $f26, 0x160($sp)
    ctx->pc = 0x310784u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x310788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x310788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31078c: 0xe7b90158  swc1        $f25, 0x158($sp)
    ctx->pc = 0x31078cu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
    // 0x310790: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x310790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310794: 0xe7b80150  swc1        $f24, 0x150($sp)
    ctx->pc = 0x310794u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
    // 0x310798: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x310798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x31079c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x31079cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x3107a0: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3107a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x3107a4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x3107a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x3107a8: 0xe7bc0170  swc1        $f28, 0x170($sp)
    ctx->pc = 0x3107a8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
    // 0x3107ac: 0xe7bb0168  swc1        $f27, 0x168($sp)
    ctx->pc = 0x3107acu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 360), bits); }
    // 0x3107b0: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x3107b0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x3107b4: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x3107b4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x3107b8: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3107b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x3107bc: 0x24491080  addiu       $t1, $v0, 0x1080
    ctx->pc = 0x3107bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4224));
    // 0x3107c0: 0x69230007  ldl         $v1, 0x7($t1)
    ctx->pc = 0x3107c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x3107c4: 0x6d230000  ldr         $v1, 0x0($t1)
    ctx->pc = 0x3107c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x3107c8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x3107c8u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x6B1088u));
    // 0x3107cc: 0xb3a30047  sdl         $v1, 0x47($sp)
    ctx->pc = 0x3107ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3107d0: 0xb7a30040  sdr         $v1, 0x40($sp)
    ctx->pc = 0x3107d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3107d4: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x3107d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x3107d8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x3107D8u;
    SET_GPR_U32(ctx, 31, 0x3107E0u);
    ctx->pc = 0x3107DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3107D8u;
    // 0x3107dc: 0x24160004  addiu       $s6, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x3107D8u, 0x3107E0u)) {
        return;
    }
    ctx->pc = 0x3107E0u;
label_3107e0:
    // 0x3107e0: 0xc6970044  lwc1        $f23, 0x44($s4)
    ctx->pc = 0x3107e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x3107e4: 0xc699004c  lwc1        $f25, 0x4C($s4)
    ctx->pc = 0x3107e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x3107e8: 0xc6980040  lwc1        $f24, 0x40($s4)
    ctx->pc = 0x3107e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x3107ec: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x3107ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3107f0: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x3107f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3107f4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3107f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3107f8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x3107f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3107fc: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x3107fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310800: 0x4619be80  add.s       $f26, $f23, $f25
    ctx->pc = 0x310800u;
    ctx->f[26] = FPU_ADD_S(ctx->f[23], ctx->f[25]);
    // 0x310804: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x310804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x310808: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x310808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x31080c: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x31080cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x310810: 0x8e270008  lw          $a3, 0x8($s1)
    ctx->pc = 0x310810u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x310814: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x310814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310818: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x310818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x31081c: 0xafa70018  sw          $a3, 0x18($sp)
    ctx->pc = 0x31081cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 7));
    // 0x310820: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x310820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310824: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x310824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310828: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x310828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x31082c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x31082cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x310830: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x310830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310834: 0xc7a40018  lwc1        $f4, 0x18($sp)
    ctx->pc = 0x310834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310838: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x310838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31083c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x31083cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x310840: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x310840u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310844: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x310844u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x310848: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x310848u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x31084c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x31084cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x310850: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x310850u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310854: 0x0  nop
    ctx->pc = 0x310854u;
    // NOP
    // 0x310858: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x310858u;
    {
        const bool branch_taken_0x310858 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310858u;
        // 0x31085c: 0xe7a40028  swc1        $f4, 0x28($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310858) {
            ctx->pc = 0x310880u;
            goto label_310880;
        }
    }
    ctx->pc = 0x310860u;
    // 0x310860: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x310860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310864: 0x0  nop
    ctx->pc = 0x310864u;
    // NOP
    // 0x310868: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x310868u;
    {
        const bool branch_taken_0x310868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310868u;
        // 0x31086c: 0x46000706  mov.s       $f28, $f0 (Delay Slot)
        ctx->f[28] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310868) {
            ctx->pc = 0x310888u;
            goto label_310888;
        }
    }
    ctx->pc = 0x310870u;
    // 0x310870: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x310870u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x310874: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x310874u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
    // 0x310878: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x310878u;
    {
        const bool branch_taken_0x310878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310878u;
        // 0x31087c: 0x4600c007  neg.s       $f0, $f24 (Delay Slot)
        ctx->f[0] = FPU_NEG_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310878) {
            ctx->pc = 0x31088Cu;
            goto label_31088c;
        }
    }
    ctx->pc = 0x310880u;
label_310880:
    // 0x310880: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x310880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x310884: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x310884u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_310888:
    // 0x310888: 0x4600c007  neg.s       $f0, $f24
    ctx->pc = 0x310888u;
    ctx->f[0] = FPU_NEG_S(ctx->f[24]);
label_31088c:
    // 0x31088c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x31088cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310890: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x310890u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310894: 0x0  nop
    ctx->pc = 0x310894u;
    // NOP
    // 0x310898: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x310898u;
    {
        const bool branch_taken_0x310898 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310898u;
        // 0x31089c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310898) {
            ctx->pc = 0x3108B0u;
            goto label_3108b0;
        }
    }
    ctx->pc = 0x3108A0u;
    // 0x3108a0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x3108a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x3108a4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3108a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3108a8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x3108A8u;
    {
        const bool branch_taken_0x3108a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3108ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108A8u;
        // 0x3108ac: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108a8) {
            ctx->pc = 0x31092Cu;
            goto label_31092c;
        }
    }
    ctx->pc = 0x3108B0u;
label_3108b0:
    // 0x3108b0: 0x4601c036  c.le.s      $f24, $f1
    ctx->pc = 0x3108b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[24], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3108b4: 0x0  nop
    ctx->pc = 0x3108b4u;
    // NOP
    // 0x3108b8: 0x4500001a  bc1f        . + 4 + (0x1A << 2)
    ctx->pc = 0x3108B8u;
    {
        const bool branch_taken_0x3108b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3108BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3108B8u;
        // 0x3108bc: 0xc7a00000  lwc1        $f0, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3108b8) {
            ctx->pc = 0x310924u;
            goto label_310924;
        }
    }
    ctx->pc = 0x3108C0u;
    // 0x3108c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3108c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3108c4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x3108c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x3108c8: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3108C8u;
    {
        const bool branch_taken_0x3108c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3108c8) {
            ctx->pc = 0x31092Cu;
            goto label_31092c;
        }
    }
    ctx->pc = 0x3108D0u;
label_3108d0:
    // 0x3108d0: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x3108d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3108d4: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x3108d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3108d8: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3108d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3108dc: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x3108dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3108e0: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x3108e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3108e4: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x3108e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x3108e8: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x3108e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3108ec: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3108ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x3108f0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x3108f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3108f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3108f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3108f8: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x3108F8u;
    SET_GPR_U32(ctx, 31, 0x310900u);
    ctx->pc = 0x3108FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3108F8u;
    // 0x3108fc: 0xc7ac0038  lwc1        $f12, 0x38($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x3108F8u, 0x310900u)) {
        return;
    }
    ctx->pc = 0x310900u;
label_310900:
    // 0x310900: 0x10000181  b           . + 4 + (0x181 << 2)
    ctx->pc = 0x310900u;
    {
        const bool branch_taken_0x310900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310900) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310908u;
label_310908:
    // 0x310908: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x310908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    // 0x31090c: 0x1000017e  b           . + 4 + (0x17E << 2)
    ctx->pc = 0x31090Cu;
    {
        const bool branch_taken_0x31090c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31090Cu;
        // 0x310910: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31090c) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310914u;
label_310914:
    // 0x310914: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x310914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x310918: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x310918u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31091c: 0x1000017a  b           . + 4 + (0x17A << 2)
    ctx->pc = 0x31091Cu;
    {
        const bool branch_taken_0x31091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31091Cu;
        // 0x310920: 0xe7a00038  swc1        $f0, 0x38($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31091c) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310924u;
label_310924:
    // 0x310924: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x310924u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x310928: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x310928u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31092c:
    // 0x31092c: 0x4617b882  mul.s       $f2, $f23, $f23
    ctx->pc = 0x31092cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
    // 0x310930: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x310930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310934: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x310934u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x310938: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x310938u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x31093c: 0x46010500  add.s       $f20, $f0, $f1
    ctx->pc = 0x31093cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x310940: 0x4602a034  c.lt.s      $f20, $f2
    ctx->pc = 0x310940u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310944: 0x0  nop
    ctx->pc = 0x310944u;
    // NOP
    // 0x310948: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x310948u;
    {
        const bool branch_taken_0x310948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x310948) {
            ctx->pc = 0x31094Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310948u;
            // 0x31094c: 0x36310002  ori         $s1, $s1, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310950u;
            goto label_310950;
        }
    }
    ctx->pc = 0x310950u;
label_310950:
    // 0x310950: 0xae60001c  sw          $zero, 0x1C($s3)
    ctx->pc = 0x310950u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 0));
    // 0x310954: 0x27b50030  addiu       $s5, $sp, 0x30
    ctx->pc = 0x310954u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x310958: 0xae740000  sw          $s4, 0x0($s3)
    ctx->pc = 0x310958u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 20));
    // 0x31095c: 0xc675001c  lwc1        $f21, 0x1C($s3)
    ctx->pc = 0x31095cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310960: 0x24140002  addiu       $s4, $zero, 0x2
    ctx->pc = 0x310960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310964: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x310964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x310968: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x310968u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
    // 0x31096c: 0x0  nop
    ctx->pc = 0x31096cu;
    // NOP
label_310970:
    // 0x310970: 0x4618b002  mul.s       $f0, $f22, $f24
    ctx->pc = 0x310970u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[24]);
    // 0x310974: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x310974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x310978: 0x144000df  bnez        $v0, . + 4 + (0xDF << 2)
    ctx->pc = 0x310978u;
    {
        const bool branch_taken_0x310978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310978u;
        // 0x31097c: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310978) {
            ctx->pc = 0x310CF8u;
            goto label_310cf8;
        }
    }
    ctx->pc = 0x310980u;
    // 0x310980: 0x56200093  bnel        $s1, $zero, . + 4 + (0x93 << 2)
    ctx->pc = 0x310980u;
    {
        const bool branch_taken_0x310980 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x310980) {
            ctx->pc = 0x310984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310980u;
            // 0x310984: 0x461ad002  mul.s       $f0, $f26, $f26 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310BD0u;
            goto label_310bd0;
        }
    }
    ctx->pc = 0x310988u;
    // 0x310988: 0x4619a834  c.lt.s      $f21, $f25
    ctx->pc = 0x310988u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x31098c: 0x0  nop
    ctx->pc = 0x31098cu;
    // NOP
    // 0x310990: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x310990u;
    {
        const bool branch_taken_0x310990 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310990u;
        // 0x310994: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310990) {
            ctx->pc = 0x3109BCu;
            goto label_3109bc;
        }
    }
    ctx->pc = 0x310998u;
    // 0x310998: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x310998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x31099c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31099cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3109a0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x3109a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3109a4: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x3109a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3109a8: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x3109a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x3109ac: 0xc0aa954  jal         func_2AA550
    ctx->pc = 0x3109ACu;
    SET_GPR_U32(ctx, 31, 0x3109B4u);
    ctx->pc = 0x3109B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3109ACu;
    // 0x3109b0: 0x4600cb46  mov.s       $f13, $f25 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA550u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA550u, 0x3109ACu, 0x3109B4u)) {
        return;
    }
    ctx->pc = 0x3109B4u;
label_3109b4:
    // 0x3109b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3109B4u;
    {
        const bool branch_taken_0x3109b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3109B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109B4u;
        // 0x3109b8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109b4) {
            ctx->pc = 0x3109C0u;
            goto label_3109c0;
        }
    }
    ctx->pc = 0x3109BCu;
label_3109bc:
    // 0x3109bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3109bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3109c0:
    // 0x3109c0: 0x1a00001d  blez        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x3109C0u;
    {
        const bool branch_taken_0x3109c0 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x3109C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109C0u;
        // 0x3109c4: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109c0) {
            ctx->pc = 0x310A38u;
            goto label_310a38;
        }
    }
    ctx->pc = 0x3109C8u;
    // 0x3109c8: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x3109c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3109cc: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x3109ccu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3109d0: 0x0  nop
    ctx->pc = 0x3109d0u;
    // NOP
    // 0x3109d4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x3109D4u;
    {
        const bool branch_taken_0x3109d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3109D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3109D4u;
        // 0x3109d8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3109d4) {
            ctx->pc = 0x310A3Cu;
            goto label_310a3c;
        }
    }
    ctx->pc = 0x3109DCu;
    // 0x3109dc: 0x4614d816  rsqrt.s     $f0, $f27, $f20
    ctx->pc = 0x3109dcu;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[27], ctx->f[20]);
    // 0x3109e0: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x3109e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x3109e4: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x3109e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3109e8: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x3109e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3109ec: 0x46001902  mul.s       $f4, $f3, $f0
    ctx->pc = 0x3109ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3109f0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x3109f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3109f4: 0xe7a40054  swc1        $f4, 0x54($sp)
    ctx->pc = 0x3109f4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x3109f8: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x3109f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x3109fc: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x3109fcu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x310a00: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x310a00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310a04: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x310a04u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x310a08: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x310a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310a0c: 0xe7a20030  swc1        $f2, 0x30($sp)
    ctx->pc = 0x310a0cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310a10: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x310a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x310a14: 0xe7a30034  swc1        $f3, 0x34($sp)
    ctx->pc = 0x310a14u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x310a18: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x310a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310a1c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x310a1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a20: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x310a20u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x310a24: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x310A24u;
    SET_GPR_U32(ctx, 31, 0x310A2Cu);
    ctx->pc = 0x310A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A24u;
    // 0x310a28: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x310A24u, 0x310A2Cu)) {
        return;
    }
    ctx->pc = 0x310A2Cu;
label_310a2c:
    // 0x310a2c: 0x10000136  b           . + 4 + (0x136 << 2)
    ctx->pc = 0x310A2Cu;
    {
        const bool branch_taken_0x310a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310a2c) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310A34u;
    // 0x310a34: 0x0  nop
    ctx->pc = 0x310a34u;
    // NOP
label_310a38:
    // 0x310a38: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x310a38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_310a3c:
    // 0x310a3c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x310a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x310a40: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x310a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310a44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x310a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x310a48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a4c: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x310a4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x310a50: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x310a50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310a54: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x310A54u;
    SET_GPR_U32(ctx, 31, 0x310A5Cu);
    ctx->pc = 0x310A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310A54u;
    // 0x310a58: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x310A54u, 0x310A5Cu)) {
        return;
    }
    ctx->pc = 0x310A5Cu;
label_310a5c:
    // 0x310a5c: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x310A5Cu;
    {
        const bool branch_taken_0x310a5c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x310A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A5Cu;
        // 0x310a60: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a5c) {
            ctx->pc = 0x310AA8u;
            goto label_310aa8;
        }
    }
    ctx->pc = 0x310A64u;
    // 0x310a64: 0x1a00000a  blez        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x310A64u;
    {
        const bool branch_taken_0x310a64 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x310A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310A64u;
        // 0x310a68: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310a64) {
            ctx->pc = 0x310A90u;
            goto label_310a90;
        }
    }
    ctx->pc = 0x310A6Cu;
    // 0x310a6c: 0xc7a30074  lwc1        $f3, 0x74($sp)
    ctx->pc = 0x310a6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310a70: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x310a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310a74: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x310a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310a78: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x310a78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x310a7c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310a7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310a80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310a80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310a84: 0x0  nop
    ctx->pc = 0x310a84u;
    // NOP
    // 0x310a88: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x310A88u;
    {
        const bool branch_taken_0x310a88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310a88) {
            ctx->pc = 0x310A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310A88u;
            // 0x310a8c: 0x4616e002  mul.s       $f0, $f28, $f22 (Delay Slot)
            ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[22]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x310AACu;
            goto label_310aac;
        }
    }
    ctx->pc = 0x310A90u;
label_310a90:
    // 0x310a90: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x310a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x310a94: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x310a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x310a98: 0xb3a70067  sdl         $a3, 0x67($sp)
    ctx->pc = 0x310a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310a9c: 0xb7a70060  sdr         $a3, 0x60($sp)
    ctx->pc = 0x310a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310aa4: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x310aa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_310aa8:
    // 0x310aa8: 0x4616e002  mul.s       $f0, $f28, $f22
    ctx->pc = 0x310aa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[22]);
label_310aac:
    // 0x310aac: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x310aacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310ab0: 0x0  nop
    ctx->pc = 0x310ab0u;
    // NOP
    // 0x310ab4: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x310AB4u;
    {
        const bool branch_taken_0x310ab4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AB4u;
        // 0x310ab8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ab4) {
            ctx->pc = 0x310B1Cu;
            goto label_310b1c;
        }
    }
    ctx->pc = 0x310ABCu;
    // 0x310abc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x310abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ac0: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x310ac0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310ac4: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x310ac4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    // 0x310ac8: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x310AC8u;
    SET_GPR_U32(ctx, 31, 0x310AD0u);
    ctx->pc = 0x310ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310AC8u;
    // 0x310acc: 0x4600c346  mov.s       $f13, $f24 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[24]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x310AC8u, 0x310AD0u)) {
        return;
    }
    ctx->pc = 0x310AD0u;
label_310ad0:
    // 0x310ad0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x310AD0u;
    {
        const bool branch_taken_0x310ad0 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x310ad0) {
            ctx->pc = 0x310B1Cu;
            goto label_310b1c;
        }
    }
    ctx->pc = 0x310AD8u;
    // 0x310ad8: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310AD8u;
    {
        const bool branch_taken_0x310ad8 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x310ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310AD8u;
        // 0x310adc: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ad8) {
            ctx->pc = 0x310B00u;
            goto label_310b00;
        }
    }
    ctx->pc = 0x310AE0u;
    // 0x310ae0: 0xc7a30084  lwc1        $f3, 0x84($sp)
    ctx->pc = 0x310ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310ae4: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x310ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310ae8: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x310ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310aec: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x310aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x310af0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310af4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310af4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310af8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x310AF8u;
    {
        const bool branch_taken_0x310af8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310af8) {
            ctx->pc = 0x310B1Cu;
            goto label_310b1c;
        }
    }
    ctx->pc = 0x310B00u;
label_310b00:
    // 0x310b00: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x310b00u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x310b04: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310b04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310b08: 0x6ba40087  ldl         $a0, 0x87($sp)
    ctx->pc = 0x310b08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x310b0c: 0x6fa40080  ldr         $a0, 0x80($sp)
    ctx->pc = 0x310b0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x310b10: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x310b10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310b14: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x310b14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310b18: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x310b18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310b1c:
    // 0x310b1c: 0x1a000107  blez        $s0, . + 4 + (0x107 << 2)
    ctx->pc = 0x310B1Cu;
    {
        const bool branch_taken_0x310b1c = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x310B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B1Cu;
        // 0x310b20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b1c) {
            ctx->pc = 0x310F3Cu;
            goto label_310f3c;
        }
    }
    ctx->pc = 0x310B24u;
    // 0x310b24: 0x162000d4  bnez        $s1, . + 4 + (0xD4 << 2)
    ctx->pc = 0x310B24u;
    {
        const bool branch_taken_0x310b24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x310B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310B24u;
        // 0x310b28: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310b24) {
            ctx->pc = 0x310E78u;
            goto label_310e78;
        }
    }
    ctx->pc = 0x310B2Cu;
    // 0x310b2c: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x310b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310b30: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x310b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310b34: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x310b34u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x310b38: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x310b38u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x310b3c: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x310b3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x310b40: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x310b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310b44: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x310b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310b48: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x310b48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x310b4c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x310b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310b50: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x310b50u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x310b54: 0xc7a30000  lwc1        $f3, 0x0($sp)
    ctx->pc = 0x310b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310b58: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x310b58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x310b5c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x310b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310b60: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x310b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310b64: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x310b64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x310b68: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x310b68u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x310b6c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x310b6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x310b70: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x310b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310b74: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x310b74u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310b78: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x310b78u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310b7c: 0x46031802  mul.s       $f0, $f3, $f3
    ctx->pc = 0x310b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x310b80: 0x46021042  mul.s       $f1, $f2, $f2
    ctx->pc = 0x310b80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x310b84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x310b84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x310b88: 0x4600d816  rsqrt.s     $f0, $f27, $f0
    ctx->pc = 0x310b88u;
    ctx->f[0] = FPU_RSQRT_S(ctx, ctx->f[27], ctx->f[0]);
    // 0x310b8c: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x310b8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
    // 0x310b90: 0x46001142  mul.s       $f5, $f2, $f0
    ctx->pc = 0x310b90u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x310b94: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x310b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x310b98: 0xe7a50054  swc1        $f5, 0x54($sp)
    ctx->pc = 0x310b98u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x310b9c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x310b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x310ba0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x310ba0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x310ba4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x310ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310ba8: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x310ba8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x310bac: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x310bacu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x310bb0: 0x4619d803  div.s       $f0, $f27, $f25
    ctx->pc = 0x310bb0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[27], ctx->f[25]);
    // 0x310bb4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x310bb4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x310bb8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x310bb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x310bbc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x310bbcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x310bc0: 0xe7a40038  swc1        $f4, 0x38($sp)
    ctx->pc = 0x310bc0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310bc4: 0xe7a30030  swc1        $f3, 0x30($sp)
    ctx->pc = 0x310bc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310bc8: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x310BC8u;
    {
        const bool branch_taken_0x310bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BC8u;
        // 0x310bcc: 0xe7a20034  swc1        $f2, 0x34($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bc8) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310BD0u;
label_310bd0:
    // 0x310bd0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x310bd0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310bd4: 0x0  nop
    ctx->pc = 0x310bd4u;
    // NOP
    // 0x310bd8: 0x4501ff3d  bc1t        . + 4 + (-0xC3 << 2)
    ctx->pc = 0x310BD8u;
    {
        const bool branch_taken_0x310bd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310BD8u;
        // 0x310bdc: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310bd8) {
            ctx->pc = 0x3108D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3108d0;
        }
    }
    ctx->pc = 0x310BE0u;
    // 0x310be0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x310be0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310be4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x310be4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310be8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x310be8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310bec: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x310becu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x310bf0: 0x4600d306  mov.s       $f12, $f26
    ctx->pc = 0x310bf0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[26]);
    // 0x310bf4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x310bf4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310bf8: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x310BF8u;
    SET_GPR_U32(ctx, 31, 0x310C00u);
    ctx->pc = 0x310BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310BF8u;
    // 0x310bfc: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x310BF8u, 0x310C00u)) {
        return;
    }
    ctx->pc = 0x310C00u;
label_310c00:
    // 0x310c00: 0x44000bf  bltz        $v0, . + 4 + (0xBF << 2)
    ctx->pc = 0x310C00u;
    {
        const bool branch_taken_0x310c00 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x310C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C00u;
        // 0x310c04: 0xc7a70008  lwc1        $f7, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c00) {
            ctx->pc = 0x310F00u;
            goto label_310f00;
        }
    }
    ctx->pc = 0x310C08u;
    // 0x310c08: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x310c08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310c0c: 0xc7a40028  lwc1        $f4, 0x28($sp)
    ctx->pc = 0x310c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310c10: 0x4607e002  mul.s       $f0, $f28, $f7
    ctx->pc = 0x310c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[28], ctx->f[7]);
    // 0x310c14: 0x4604e0c2  mul.s       $f3, $f28, $f4
    ctx->pc = 0x310c14u;
    ctx->f[3] = FPU_MUL_S(ctx->f[28], ctx->f[4]);
    // 0x310c18: 0x4600c041  sub.s       $f1, $f24, $f0
    ctx->pc = 0x310c18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[24], ctx->f[0]);
    // 0x310c1c: 0xe7a30094  swc1        $f3, 0x94($sp)
    ctx->pc = 0x310c1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x310c20: 0x46030836  c.le.s      $f1, $f3
    ctx->pc = 0x310c20u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310c24: 0x0  nop
    ctx->pc = 0x310c24u;
    // NOP
    // 0x310c28: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x310C28u;
    {
        const bool branch_taken_0x310c28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C28u;
        // 0x310c2c: 0xe7a10090  swc1        $f1, 0x90($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c28) {
            ctx->pc = 0x310C34u;
            goto label_310c34;
        }
    }
    ctx->pc = 0x310C30u;
    // 0x310c30: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x310c30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310c34:
    // 0x310c34: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x310C34u;
    {
        const bool branch_taken_0x310c34 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x310C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C34u;
        // 0x310c38: 0xc7a50060  lwc1        $f5, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c34) {
            ctx->pc = 0x310CD8u;
            goto label_310cd8;
        }
    }
    ctx->pc = 0x310C3Cu;
    // 0x310c3c: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x310C3Cu;
    {
        const bool branch_taken_0x310c3c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x310C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310C3Cu;
        // 0x310c40: 0xc7a20064  lwc1        $f2, 0x64($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310c3c) {
            ctx->pc = 0x310C58u;
            goto label_310c58;
        }
    }
    ctx->pc = 0x310C44u;
    // 0x310c44: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x310c44u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x310c48: 0x46032802  mul.s       $f0, $f5, $f3
    ctx->pc = 0x310c48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x310c4c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310c4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310c50: 0x45000021  bc1f        . + 4 + (0x21 << 2)
    ctx->pc = 0x310C50u;
    {
        const bool branch_taken_0x310c50 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310c50) {
            ctx->pc = 0x310CD8u;
            goto label_310cd8;
        }
    }
    ctx->pc = 0x310C58u;
label_310c58:
    // 0x310c58: 0x46022983  div.s       $f6, $f5, $f2
    ctx->pc = 0x310c58u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[2]);
    // 0x310c5c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x310c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310c60: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x310c60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x310c64: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x310c64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x310c68: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x310c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310c6c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x310c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310c70: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x310c70u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x310c74: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x310c74u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x310c78: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x310c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310c7c: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x310c7cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x310c80: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x310c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310c84: 0x46043900  add.s       $f4, $f7, $f4
    ctx->pc = 0x310c84u;
    ctx->f[4] = FPU_ADD_S(ctx->f[7], ctx->f[4]);
    // 0x310c88: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x310c88u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x310c8c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x310c8cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x310c90: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x310c90u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310c94: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x310c94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310c98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x310c98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310c9c: 0x6ba80007  ldl         $t0, 0x7($sp)
    ctx->pc = 0x310c9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x310ca0: 0x6fa80000  ldr         $t0, 0x0($sp)
    ctx->pc = 0x310ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x310ca4: 0x8fa90008  lw          $t1, 0x8($sp)
    ctx->pc = 0x310ca4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x310ca8: 0xb3a80037  sdl         $t0, 0x37($sp)
    ctx->pc = 0x310ca8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310cac: 0xb7a80030  sdr         $t0, 0x30($sp)
    ctx->pc = 0x310cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310cb0: 0xafa90038  sw          $t1, 0x38($sp)
    ctx->pc = 0x310cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 9));
    // 0x310cb4: 0x461ad883  div.s       $f2, $f27, $f26
    ctx->pc = 0x310cb4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[27], ctx->f[26]);
    // 0x310cb8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x310cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310cbc: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x310cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310cc0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310cc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310cc4: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x310cc4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310cc8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x310cc8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x310ccc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x310cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310cd0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x310CD0u;
    {
        const bool branch_taken_0x310cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CD0u;
        // 0x310cd4: 0xe7a10034  swc1        $f1, 0x34($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cd0) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310CD8u;
label_310cd8:
    // 0x310cd8: 0x18600089  blez        $v1, . + 4 + (0x89 << 2)
    ctx->pc = 0x310CD8u;
    {
        const bool branch_taken_0x310cd8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x310CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CD8u;
        // 0x310cdc: 0x4600e586  mov.s       $f22, $f28 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[28]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cd8) {
            ctx->pc = 0x310F00u;
            goto label_310f00;
        }
    }
    ctx->pc = 0x310CE0u;
    // 0x310ce0: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x310ce0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x310ce4: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x310ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x310ce8: 0xb3a40067  sdl         $a0, 0x67($sp)
    ctx->pc = 0x310ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310cec: 0xb7a40060  sdr         $a0, 0x60($sp)
    ctx->pc = 0x310cecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310cf0: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x310CF0u;
    {
        const bool branch_taken_0x310cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CF0u;
        // 0x310cf4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cf0) {
            ctx->pc = 0x310E74u;
            goto label_310e74;
        }
    }
    ctx->pc = 0x310CF8u;
label_310cf8:
    // 0x310cf8: 0x16340045  bne         $s1, $s4, . + 4 + (0x45 << 2)
    ctx->pc = 0x310CF8u;
    {
        const bool branch_taken_0x310cf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x310CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CF8u;
        // 0x310cfc: 0xc7a10008  lwc1        $f1, 0x8($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310cf8) {
            ctx->pc = 0x310E10u;
            goto label_310e10;
        }
    }
    ctx->pc = 0x310D00u;
    // 0x310d00: 0x4619c340  add.s       $f13, $f24, $f25
    ctx->pc = 0x310d00u;
    ctx->f[13] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x310d04: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x310d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x310d08: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x310d08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x310d0c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x310d0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d10: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x310d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x310d14: 0xc0aaa16  jal         func_2AA858
    ctx->pc = 0x310D14u;
    SET_GPR_U32(ctx, 31, 0x310D1Cu);
    ctx->pc = 0x310D18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D14u;
    // 0x310d18: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA858u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA858u, 0x310D14u, 0x310D1Cu)) {
        return;
    }
    ctx->pc = 0x310D1Cu;
label_310d1c:
    // 0x310d1c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x310d1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d20: 0x6000077  bltz        $s0, . + 4 + (0x77 << 2)
    ctx->pc = 0x310D20u;
    {
        const bool branch_taken_0x310d20 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x310D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D20u;
        // 0x310d24: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d20) {
            ctx->pc = 0x310F00u;
            goto label_310f00;
        }
    }
    ctx->pc = 0x310D28u;
    // 0x310d28: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x310D28u;
    {
        const bool branch_taken_0x310d28 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x310D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D28u;
        // 0x310d2c: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d28) {
            ctx->pc = 0x310D40u;
            goto label_310d40;
        }
    }
    ctx->pc = 0x310D30u;
    // 0x310d30: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x310d30u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310d34: 0x0  nop
    ctx->pc = 0x310d34u;
    // NOP
    // 0x310d38: 0x4503fef3  bc1tl       . + 4 + (-0x10D << 2)
    ctx->pc = 0x310D38u;
    {
        const bool branch_taken_0x310d38 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x310d38) {
            ctx->pc = 0x310D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310D38u;
            // 0x310d3c: 0xe7b60038  swc1        $f22, 0x38($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x310908u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310908;
        }
    }
    ctx->pc = 0x310D40u;
label_310d40:
    // 0x310d40: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x310d40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x310d44: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x310d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d48: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x310d48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d4c: 0x27a80040  addiu       $t0, $sp, 0x40
    ctx->pc = 0x310d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x310d50: 0x4600bb06  mov.s       $f12, $f23
    ctx->pc = 0x310d50u;
    ctx->f[12] = FPU_MOV_S(ctx->f[23]);
    // 0x310d54: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x310d54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310d58: 0xc0aa8d4  jal         func_2AA350
    ctx->pc = 0x310D58u;
    SET_GPR_U32(ctx, 31, 0x310D60u);
    ctx->pc = 0x310D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D58u;
    // 0x310d5c: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA350u, 0x310D58u, 0x310D60u)) {
        return;
    }
    ctx->pc = 0x310D60u;
label_310d60:
    // 0x310d60: 0x18400010  blez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x310D60u;
    {
        const bool branch_taken_0x310d60 = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x310d60) {
            ctx->pc = 0x310DA4u;
            goto label_310da4;
        }
    }
    ctx->pc = 0x310D68u;
    // 0x310d68: 0x1a000009  blez        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x310D68u;
    {
        const bool branch_taken_0x310d68 = (GPR_S64(ctx, 16) <= 0);
        ctx->pc = 0x310D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D68u;
        // 0x310d6c: 0xc7a10060  lwc1        $f1, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d68) {
            ctx->pc = 0x310D90u;
            goto label_310d90;
        }
    }
    ctx->pc = 0x310D70u;
    // 0x310d70: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x310d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310d74: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x310d74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310d78: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x310d78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310d7c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x310d7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x310d80: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310d80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310d84: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x310d84u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310d88: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x310D88u;
    {
        const bool branch_taken_0x310d88 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310d88) {
            ctx->pc = 0x310DA4u;
            goto label_310da4;
        }
    }
    ctx->pc = 0x310D90u;
label_310d90:
    // 0x310d90: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x310d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x310d94: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x310d94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x310d98: 0xb3a80067  sdl         $t0, 0x67($sp)
    ctx->pc = 0x310d98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310d9c: 0xb7a80060  sdr         $t0, 0x60($sp)
    ctx->pc = 0x310d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310da0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x310da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_310da4:
    // 0x310da4: 0x12200033  beqz        $s1, . + 4 + (0x33 << 2)
    ctx->pc = 0x310DA4u;
    {
        const bool branch_taken_0x310da4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DA4u;
        // 0x310da8: 0xc7a20060  lwc1        $f2, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310da4) {
            ctx->pc = 0x310E74u;
            goto label_310e74;
        }
    }
    ctx->pc = 0x310DACu;
    // 0x310dac: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x310dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310db0: 0xc661001c  lwc1        $f1, 0x1C($s3)
    ctx->pc = 0x310db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310db4: 0x46001183  div.s       $f6, $f2, $f0
    ctx->pc = 0x310db4u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x310db8: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x310db8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x310dbc: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x310dbcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310dc0: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x310dc0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x310dc4: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x310dc4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
    // 0x310dc8: 0xe661001c  swc1        $f1, 0x1C($s3)
    ctx->pc = 0x310dc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x310dcc: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x310dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310dd0: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x310dd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310dd4: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x310dd4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x310dd8: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x310dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310ddc: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x310ddcu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x310de0: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x310de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310de4: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x310de4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x310de8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x310de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310dec: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x310decu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310df0: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x310df0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
    // 0x310df4: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x310df4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x310df8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x310df8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x310dfc: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x310dfcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310e00: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x310e00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310e04: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x310E04u;
    {
        const bool branch_taken_0x310e04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E04u;
        // 0x310e08: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e04) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310E0Cu;
    // 0x310e0c: 0x0  nop
    ctx->pc = 0x310e0cu;
    // NOP
label_310e10:
    // 0x310e10: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x310e10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x310e14: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x310e14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310e18: 0x0  nop
    ctx->pc = 0x310e18u;
    // NOP
    // 0x310e1c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x310E1Cu;
    {
        const bool branch_taken_0x310e1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x310E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E1Cu;
        // 0x310e20: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e1c) {
            ctx->pc = 0x310E40u;
            goto label_310e40;
        }
    }
    ctx->pc = 0x310E24u;
    // 0x310e24: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x310e24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310e28: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x310e28u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x310e2c: 0xe7b50034  swc1        $f21, 0x34($sp)
    ctx->pc = 0x310e2cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x310e30: 0x4501feb8  bc1t        . + 4 + (-0x148 << 2)
    ctx->pc = 0x310E30u;
    {
        const bool branch_taken_0x310e30 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x310E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E30u;
        // 0x310e34: 0xe7b50030  swc1        $f21, 0x30($sp) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e30) {
            ctx->pc = 0x310914u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310914;
        }
    }
    ctx->pc = 0x310E38u;
    // 0x310e38: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x310E38u;
    {
        const bool branch_taken_0x310e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E38u;
        // 0x310e3c: 0xe7bb0038  swc1        $f27, 0x38($sp) (Delay Slot)
        { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e38) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310E40u;
label_310e40:
    // 0x310e40: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x310e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x310e44: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x310e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x310e48: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x310e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x310e4c: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x310e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310e50: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x310e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310e54: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x310e54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x310e58: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x310e58u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x310e5c: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x310e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
    // 0x310e60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x310e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310e64: 0xc0aa9d8  jal         func_2AA760
    ctx->pc = 0x310E64u;
    SET_GPR_U32(ctx, 31, 0x310E6Cu);
    ctx->pc = 0x310E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310E64u;
    // 0x310e68: 0x27a60040  addiu       $a2, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA760u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA760u, 0x310E64u, 0x310E6Cu)) {
        return;
    }
    ctx->pc = 0x310E6Cu;
label_310e6c:
    // 0x310e6c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x310E6Cu;
    {
        const bool branch_taken_0x310e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x310e6c) {
            ctx->pc = 0x310F08u;
            goto label_310f08;
        }
    }
    ctx->pc = 0x310E74u;
label_310e74:
    // 0x310e74: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x310e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310e78:
    // 0x310e78: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x310e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e7c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x310e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e80: 0x46011183  div.s       $f6, $f2, $f1
    ctx->pc = 0x310e80u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
    // 0x310e84: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x310e84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x310e88: 0xe660001c  swc1        $f0, 0x1C($s3)
    ctx->pc = 0x310e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x310e8c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x310e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310e90: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x310e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310e94: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x310e94u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
    // 0x310e98: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x310e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310e9c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x310e9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x310ea0: 0xc7a40000  lwc1        $f4, 0x0($sp)
    ctx->pc = 0x310ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310ea4: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x310ea4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x310ea8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x310ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310eac: 0xc7a50008  lwc1        $f5, 0x8($sp)
    ctx->pc = 0x310eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x310eb0: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x310eb0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x310eb4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x310eb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x310eb8: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x310eb8u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
    // 0x310ebc: 0xe7a40000  swc1        $f4, 0x0($sp)
    ctx->pc = 0x310ebcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x310ec0: 0xe7a30004  swc1        $f3, 0x4($sp)
    ctx->pc = 0x310ec0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310ec4: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x310ec4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310ec8: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x310ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310ecc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x310eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310ed0: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x310ed0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
    // 0x310ed4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x310ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310ed8: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x310ed8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
    // 0x310edc: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x310edcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
    // 0x310ee0: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x310ee0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x310ee4: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x310ee4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x310ee8: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x310ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x310eec: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x310eecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x310ef0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x310ef0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x310ef4: 0x26d6ffff  addiu       $s6, $s6, -0x1
    ctx->pc = 0x310ef4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
    // 0x310ef8: 0x16c0fe9d  bnez        $s6, . + 4 + (-0x163 << 2)
    ctx->pc = 0x310EF8u;
    {
        const bool branch_taken_0x310ef8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x310EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310EF8u;
        // 0x310efc: 0x46032500  add.s       $f20, $f4, $f3 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x310ef8) {
            ctx->pc = 0x310970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_310970;
        }
    }
    ctx->pc = 0x310F00u;
label_310f00:
    // 0x310f00: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x310F00u;
    {
        const bool branch_taken_0x310f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F00u;
        // 0x310f04: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310f00) {
            ctx->pc = 0x310F3Cu;
            goto label_310f3c;
        }
    }
    ctx->pc = 0x310F08u;
label_310f08:
    // 0x310f08: 0x6ba90007  ldl         $t1, 0x7($sp)
    ctx->pc = 0x310f08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x310f0c: 0x6fa90000  ldr         $t1, 0x0($sp)
    ctx->pc = 0x310f0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x310f10: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x310f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x310f14: 0xb269000b  sdl         $t1, 0xB($s3)
    ctx->pc = 0x310f14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310f18: 0xb6690004  sdr         $t1, 0x4($s3)
    ctx->pc = 0x310f18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310f1c: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x310f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
    // 0x310f20: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x310f20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x310f24: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x310f24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x310f28: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x310f28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x310f2c: 0xb2650017  sdl         $a1, 0x17($s3)
    ctx->pc = 0x310f2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310f30: 0xb6650010  sdr         $a1, 0x10($s3)
    ctx->pc = 0x310f30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310f34: 0xae660018  sw          $a2, 0x18($s3)
    ctx->pc = 0x310f34u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
    // 0x310f38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_310f3c:
    // 0x310f3c: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x310f3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x310f40: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x310f40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x310f44: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x310f44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x310f48: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x310f48u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x310f4c: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x310f4cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x310f50: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x310f50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x310f54: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x310f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x310f58: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x310f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x310f5c: 0xc7bc0170  lwc1        $f28, 0x170($sp)
    ctx->pc = 0x310f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x310f60: 0xc7bb0168  lwc1        $f27, 0x168($sp)
    ctx->pc = 0x310f60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x310f64: 0xc7ba0160  lwc1        $f26, 0x160($sp)
    ctx->pc = 0x310f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x310f68: 0xc7b90158  lwc1        $f25, 0x158($sp)
    ctx->pc = 0x310f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x310f6c: 0xc7b80150  lwc1        $f24, 0x150($sp)
    ctx->pc = 0x310f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x310f70: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x310f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x310f74: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x310f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x310f78: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x310f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x310f7c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x310f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310f80: 0x3e00008  jr          $ra
    ctx->pc = 0x310F80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310F80u;
        // 0x310f84: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310F80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310F88u;
}
