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

// Function: sub_00104738
// Address: 0x104738 - 0x104d18
void sub_00104738_0x104738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104738_0x104738");
#endif

    switch (ctx->pc) {
        case 0x104790u: goto label_104790;
        case 0x1047c0u: goto label_1047c0;
        case 0x104818u: goto label_104818;
        case 0x104830u: goto label_104830;
        case 0x1048b0u: goto label_1048b0;
        case 0x1049f4u: goto label_1049f4;
        case 0x104a50u: goto label_104a50;
        case 0x104a5cu: goto label_104a5c;
        case 0x104b4cu: goto label_104b4c;
        case 0x104cacu: goto label_104cac;
        case 0x104cbcu: goto label_104cbc;
        case 0x104cc8u: goto label_104cc8;
        default: break;
    }

    ctx->pc = 0x104738u;

    // 0x104738: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x104738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x10473c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10473cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x104740: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x104740u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x104744: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x104744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x104748: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x104748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x10474c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10474cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104750: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x104750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x104754: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104758: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x104758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x10475c: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x10475cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x104760: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x104760u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x104764: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x104764u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x104768: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x10476c: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x10476cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x104770: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x104770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x104774: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x104774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x104778: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x104778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x10477c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x10477cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x104780: 0x1040015c  beqz        $v0, . + 4 + (0x15C << 2)
    ctx->pc = 0x104780u;
    {
        const bool branch_taken_0x104780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x104784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104780u;
        // 0x104784: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104780) {
            ctx->pc = 0x104CF4u;
            goto label_104cf4;
        }
    }
    ctx->pc = 0x104788u;
    // 0x104788: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x104788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10478c: 0x0  nop
    ctx->pc = 0x10478cu;
    // NOP
label_104790:
    // 0x104790: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x104790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x104794: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x104794u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x104798: 0x24930001  addiu       $s3, $a0, 0x1
    ctx->pc = 0x104798u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x10479c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x10479cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1047a0: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1047a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1047a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1047a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1047a8: 0x1040014d  beqz        $v0, . + 4 + (0x14D << 2)
    ctx->pc = 0x1047A8u;
    {
        const bool branch_taken_0x1047a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1047ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1047A8u;
        // 0x1047ac: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1047a8) {
            ctx->pc = 0x104CE0u;
            goto label_104ce0;
        }
    }
    ctx->pc = 0x1047B0u;
    // 0x1047b0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1047b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1047b4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1047b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1047b8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1047b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1047bc: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x1047bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1047c0:
    // 0x1047c0: 0x1229c0  sll         $a1, $s2, 7
    ctx->pc = 0x1047c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x1047c4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1047c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1047c8: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1047c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1047cc: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1047ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1047d0: 0xae250014  sw          $a1, 0x14($s1)
    ctx->pc = 0x1047d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 5));
    // 0x1047d4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1047d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1047d8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1047d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1047dc: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1047DCu;
    {
        const bool branch_taken_0x1047dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1047dc) {
            ctx->pc = 0x1047E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1047DCu;
            // 0x1047e0: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x104800u;
            goto label_104800;
        }
    }
    ctx->pc = 0x1047E4u;
    // 0x1047e4: 0x68a20047  ldl         $v0, 0x47($a1)
    ctx->pc = 0x1047e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1047e8: 0x6ca20040  ldr         $v0, 0x40($a1)
    ctx->pc = 0x1047e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1047ec: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x1047ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x1047f0: 0xb0a2006b  sdl         $v0, 0x6B($a1)
    ctx->pc = 0x1047f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 107); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1047f4: 0xb4a20064  sdr         $v0, 0x64($a1)
    ctx->pc = 0x1047f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 100); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1047f8: 0xaca3006c  sw          $v1, 0x6C($a1)
    ctx->pc = 0x1047f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 108), GPR_U32(ctx, 3));
    // 0x1047fc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1047fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_104800:
    // 0x104800: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x104800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x104804: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x104804u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104808: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x104808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x10480c: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x10480cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x104810: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x104810u;
    SET_GPR_U32(ctx, 31, 0x104818u);
    ctx->pc = 0x104814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104810u;
    // 0x104814: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x104810u, 0x104818u)) {
        return;
    }
    ctx->pc = 0x104818u;
label_104818:
    // 0x104818: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x104818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10481c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x10481cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x104820: 0x8e26000c  lw          $a2, 0xC($s1)
    ctx->pc = 0x104820u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x104824: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x104824u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x104828: 0xc093aea  jal         func_24EBA8
    ctx->pc = 0x104828u;
    SET_GPR_U32(ctx, 31, 0x104830u);
    ctx->pc = 0x10482Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104828u;
    // 0x10482c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBA8u, 0x104828u, 0x104830u)) {
        return;
    }
    ctx->pc = 0x104830u;
label_104830:
    // 0x104830: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x104830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104834: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x104834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104838: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x104838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x10483c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x10483cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x104840: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x104840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104844: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x104844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104848: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x104848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10484c: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x10484cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x104850: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x104850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x104854: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x104854u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x104858: 0xe7a30054  swc1        $f3, 0x54($sp)
    ctx->pc = 0x104858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x10485c: 0xe7a10058  swc1        $f1, 0x58($sp)
    ctx->pc = 0x10485cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x104860: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x104860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x104864: 0x3c0138d1  lui         $at, 0x38D1
    ctx->pc = 0x104864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14545 << 16));
    // 0x104868: 0x3421b717  ori         $at, $at, 0xB717
    ctx->pc = 0x104868u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)46871);
    // 0x10486c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x10486cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x104870: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x104870u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x104874: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x104874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x104878: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x104878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x10487c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x10487cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x104880: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x104880u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104884: 0x0  nop
    ctx->pc = 0x104884u;
    // NOP
    // 0x104888: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x104888u;
    {
        const bool branch_taken_0x104888 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104888u;
        // 0x10488c: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104888) {
            ctx->pc = 0x1048A8u;
            goto label_1048a8;
        }
    }
    ctx->pc = 0x104890u;
    // 0x104890: 0xe7b40054  swc1        $f20, 0x54($sp)
    ctx->pc = 0x104890u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x104894: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x104894u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x104898: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x104898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x10489c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x10489Cu;
    {
        const bool branch_taken_0x10489c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1048A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10489Cu;
        // 0x1048a0: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x10489c) {
            ctx->pc = 0x1048D8u;
            goto label_1048d8;
        }
    }
    ctx->pc = 0x1048A4u;
    // 0x1048a4: 0x0  nop
    ctx->pc = 0x1048a4u;
    // NOP
label_1048a8:
    // 0x1048a8: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x1048A8u;
    SET_GPR_U32(ctx, 31, 0x1048B0u);
    ctx->pc = 0x1048ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1048A8u;
    // 0x1048ac: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x1048A8u, 0x1048B0u)) {
        return;
    }
    ctx->pc = 0x1048B0u;
label_1048b0:
    // 0x1048b0: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1048b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1048b4: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x1048b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1048b8: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1048b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1048bc: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1048bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1048c0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1048c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1048c4: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1048c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1048c8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x1048c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x1048cc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1048ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1048d0: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1048d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1048d4: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x1048d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1048d8:
    // 0x1048d8: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1048d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1048dc: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1048dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1048e0: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1048e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1048e4: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x1048e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x1048e8: 0xc7a60050  lwc1        $f6, 0x50($sp)
    ctx->pc = 0x1048e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x1048ec: 0xc7a70054  lwc1        $f7, 0x54($sp)
    ctx->pc = 0x1048ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x1048f0: 0xc7a80058  lwc1        $f8, 0x58($sp)
    ctx->pc = 0x1048f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x1048f4: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x1048f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
    // 0x1048f8: 0x46072101  sub.s       $f4, $f4, $f7
    ctx->pc = 0x1048f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[7]);
    // 0x1048fc: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x1048fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x104900: 0xe7a30020  swc1        $f3, 0x20($sp)
    ctx->pc = 0x104900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x104904: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x104904u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x104908: 0xe7a50028  swc1        $f5, 0x28($sp)
    ctx->pc = 0x104908u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x10490c: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x10490cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104910: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x104910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104914: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x104914u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x104918: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x104918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10491c: 0x46071080  add.s       $f2, $f2, $f7
    ctx->pc = 0x10491cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[7]);
    // 0x104920: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x104920u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
    // 0x104924: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x104924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x104928: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x104928u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x10492c: 0xe7a10038  swc1        $f1, 0x38($sp)
    ctx->pc = 0x10492cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x104930: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x104930u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x104934: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x104934u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x104938: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x104938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10493c: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x10493cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x104940: 0xe7a20044  swc1        $f2, 0x44($sp)
    ctx->pc = 0x104940u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x104944: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x104944u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x104948: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x104948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x10494c: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x10494cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x104950: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x104950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x104954: 0xb3a20067  sdl         $v0, 0x67($sp)
    ctx->pc = 0x104954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x104958: 0xb7a20060  sdr         $v0, 0x60($sp)
    ctx->pc = 0x104958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x10495c: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x10495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x104960: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x104960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104964: 0xc7a50044  lwc1        $f5, 0x44($sp)
    ctx->pc = 0x104964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x104968: 0x461518c2  mul.s       $f3, $f3, $f21
    ctx->pc = 0x104968u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[21]);
    // 0x10496c: 0xc7a40048  lwc1        $f4, 0x48($sp)
    ctx->pc = 0x10496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104970: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x104970u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x104974: 0x46152102  mul.s       $f4, $f4, $f21
    ctx->pc = 0x104974u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x104978: 0xe7a30040  swc1        $f3, 0x40($sp)
    ctx->pc = 0x104978u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x10497c: 0xe7a50044  swc1        $f5, 0x44($sp)
    ctx->pc = 0x10497cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x104980: 0xe7a40048  swc1        $f4, 0x48($sp)
    ctx->pc = 0x104980u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x104984: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x104984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104988: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x104988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10498c: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x10498cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x104990: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x104990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104994: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x104994u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
    // 0x104998: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x104998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x10499c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x10499cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1049a0: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1049a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1049a4: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1049a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1049a8: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x1049a8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1049ac: 0x46052942  mul.s       $f5, $f5, $f5
    ctx->pc = 0x1049acu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1049b0: 0x46042102  mul.s       $f4, $f4, $f4
    ctx->pc = 0x1049b0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1049b4: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x1049b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x1049b8: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x1049b8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x1049bc: 0x0  nop
    ctx->pc = 0x1049bcu;
    // NOP
    // 0x1049c0: 0x0  nop
    ctx->pc = 0x1049c0u;
    // NOP
    // 0x1049c4: 0x46030304  c1          0x30304
    ctx->pc = 0x1049c4u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[3]);
    // 0x1049c8: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1049c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1049cc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1049ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1049d0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1049d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1049d4: 0x0  nop
    ctx->pc = 0x1049d4u;
    // NOP
    // 0x1049d8: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1049d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1049dc: 0x0  nop
    ctx->pc = 0x1049dcu;
    // NOP
    // 0x1049e0: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x1049E0u;
    {
        const bool branch_taken_0x1049e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1049E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1049E0u;
        // 0x1049e4: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1049e0) {
            ctx->pc = 0x104A48u;
            goto label_104a48;
        }
    }
    ctx->pc = 0x1049E8u;
    // 0x1049e8: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x1049e8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x1049ec: 0xc0aa2e8  jal         func_2A8BA0
    ctx->pc = 0x1049ECu;
    SET_GPR_U32(ctx, 31, 0x1049F4u);
    ctx->pc = 0x1049F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1049ECu;
    // 0x1049f0: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8BA0u, 0x1049ECu, 0x1049F4u)) {
        return;
    }
    ctx->pc = 0x1049F4u;
label_1049f4:
    // 0x1049f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1049f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1049f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1049f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1049fc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1049fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
    // 0x104a00: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x104a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x104a04: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x104a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x104a08: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x104a08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x104a0c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x104a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x104a10: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x104a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x104a14: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x104a14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x104a18: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x104a18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x104a1c: 0xe6140010  swc1        $f20, 0x10($s0)
    ctx->pc = 0x104a1cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x104a20: 0xe6140008  swc1        $f20, 0x8($s0)
    ctx->pc = 0x104a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x104a24: 0xe6140004  swc1        $f20, 0x4($s0)
    ctx->pc = 0x104a24u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x104a28: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x104a28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x104a2c: 0xe6140020  swc1        $f20, 0x20($s0)
    ctx->pc = 0x104a2cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x104a30: 0xe6140018  swc1        $f20, 0x18($s0)
    ctx->pc = 0x104a30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x104a34: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x104a34u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x104a38: 0xe6140034  swc1        $f20, 0x34($s0)
    ctx->pc = 0x104a38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x104a3c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x104A3Cu;
    {
        const bool branch_taken_0x104a3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A3Cu;
        // 0x104a40: 0xe6140030  swc1        $f20, 0x30($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a3c) {
            ctx->pc = 0x104BB8u;
            goto label_104bb8;
        }
    }
    ctx->pc = 0x104A44u;
    // 0x104a44: 0x0  nop
    ctx->pc = 0x104a44u;
    // NOP
label_104a48:
    // 0x104a48: 0xc0aa2e8  jal         func_2A8BA0
    ctx->pc = 0x104A48u;
    SET_GPR_U32(ctx, 31, 0x104A50u);
    ctx->pc = 0x104A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A48u;
    // 0x104a4c: 0x8c44005c  lw          $a0, 0x5C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A8BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A8BA0u, 0x104A48u, 0x104A50u)) {
        return;
    }
    ctx->pc = 0x104A50u;
label_104a50:
    // 0x104a50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x104a50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x104a54: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x104A54u;
    SET_GPR_U32(ctx, 31, 0x104A5Cu);
    ctx->pc = 0x104A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104A54u;
    // 0x104a58: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x104A54u, 0x104A5Cu)) {
        return;
    }
    ctx->pc = 0x104A5Cu;
label_104a5c:
    // 0x104a5c: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x104a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104a60: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x104a60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x104a64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x104a64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x104a68: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x104a68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x104a6c: 0x46001805  abs.s       $f0, $f3
    ctx->pc = 0x104a6cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[3]);
    // 0x104a70: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x104a70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x104a74: 0x0  nop
    ctx->pc = 0x104a74u;
    // NOP
    // 0x104a78: 0x45000019  bc1f        . + 4 + (0x19 << 2)
    ctx->pc = 0x104A78u;
    {
        const bool branch_taken_0x104a78 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x104A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104A78u;
        // 0x104a7c: 0xc7a20014  lwc1        $f2, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104a78) {
            ctx->pc = 0x104AE0u;
            goto label_104ae0;
        }
    }
    ctx->pc = 0x104A80u;
    // 0x104a80: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x104a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104a84: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x104a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104a88: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x104a88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x104a8c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x104a8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x104a90: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x104a90u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x104a94: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x104a94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x104a98: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x104a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104a9c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x104a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104aa0: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x104aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104aa4: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x104aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104aa8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x104aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x104aac: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x104aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x104ab0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x104ab0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x104ab4: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x104ab4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x104ab8: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x104ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104abc: 0xc7a30014  lwc1        $f3, 0x14($sp)
    ctx->pc = 0x104abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104ac0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x104ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104ac4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x104ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104ac8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x104ac8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x104acc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104accu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104ad0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x104ad0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x104ad4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x104AD4u;
    {
        const bool branch_taken_0x104ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x104AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104AD4u;
        // 0x104ad8: 0xe6020008  swc1        $f2, 0x8($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x104ad4) {
            ctx->pc = 0x104B40u;
            goto label_104b40;
        }
    }
    ctx->pc = 0x104ADCu;
    // 0x104adc: 0x0  nop
    ctx->pc = 0x104adcu;
    // NOP
label_104ae0:
    // 0x104ae0: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x104ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104ae4: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x104ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104ae8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x104ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104aec: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x104aecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x104af0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x104af0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x104af4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x104af4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x104af8: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x104af8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x104afc: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x104afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104b00: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x104b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104b04: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x104b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104b08: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x104b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b0c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x104b0cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x104b10: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104b10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104b14: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x104b14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x104b18: 0xe6020004  swc1        $f2, 0x4($s0)
    ctx->pc = 0x104b18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x104b1c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x104b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104b20: 0xc7a30044  lwc1        $f3, 0x44($sp)
    ctx->pc = 0x104b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104b24: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x104b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b28: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x104b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104b2c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x104b2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x104b30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x104b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x104b34: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x104b34u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x104b38: 0xe6010008  swc1        $f1, 0x8($s0)
    ctx->pc = 0x104b38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x104b3c: 0x0  nop
    ctx->pc = 0x104b3cu;
    // NOP
label_104b40:
    // 0x104b40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104b44: 0xc093a88  jal         func_24EA20
    ctx->pc = 0x104B44u;
    SET_GPR_U32(ctx, 31, 0x104B4Cu);
    ctx->pc = 0x104B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104B44u;
    // 0x104b48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x104B44u, 0x104B4Cu)) {
        return;
    }
    ctx->pc = 0x104B4Cu;
label_104b4c:
    // 0x104b4c: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x104b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104b50: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x104b50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b54: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x104b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104b58: 0xc6050004  lwc1        $f5, 0x4($s0)
    ctx->pc = 0x104b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x104b5c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x104b5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x104b60: 0xc6040000  lwc1        $f4, 0x0($s0)
    ctx->pc = 0x104b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104b64: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x104b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x104b68: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x104b68u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x104b6c: 0xe6020010  swc1        $f2, 0x10($s0)
    ctx->pc = 0x104b6cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x104b70: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x104b70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104b74: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x104b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b78: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x104b78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x104b7c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x104b7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x104b80: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x104b80u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x104b84: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x104b84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x104b88: 0xc7a20040  lwc1        $f2, 0x40($sp)
    ctx->pc = 0x104b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104b8c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x104b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104b90: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x104b90u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x104b94: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x104b94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x104b98: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x104b98u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x104b9c: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x104b9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x104ba0: 0x6ba60047  ldl         $a2, 0x47($sp)
    ctx->pc = 0x104ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x104ba4: 0x6fa60040  ldr         $a2, 0x40($sp)
    ctx->pc = 0x104ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x104ba8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x104ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x104bac: 0xb2060027  sdl         $a2, 0x27($s0)
    ctx->pc = 0x104bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x104bb0: 0xb6060020  sdr         $a2, 0x20($s0)
    ctx->pc = 0x104bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x104bb4: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x104bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
label_104bb8:
    // 0x104bb8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x104bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x104bbc: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x104bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104bc0: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x104bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104bc4: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x104bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x104bc8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x104bc8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x104bcc: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x104bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x104bd0: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x104bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x104bd4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104bd4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104bd8: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x104bd8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x104bdc: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x104bdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x104be0: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x104be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104be4: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x104be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104be8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x104be8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x104bec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104becu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104bf0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x104bf0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
    // 0x104bf4: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x104bf4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x104bf8: 0xc4400050  lwc1        $f0, 0x50($v0)
    ctx->pc = 0x104bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104bfc: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x104bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c00: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x104c00u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x104c04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104c04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104c08: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x104c08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x104c0c: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x104c0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x104c10: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x104c10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c14: 0xc4400054  lwc1        $f0, 0x54($v0)
    ctx->pc = 0x104c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c18: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104c18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104c1c: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x104c1cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x104c20: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x104c20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x104c24: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x104c24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c28: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x104c28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c2c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104c2cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104c30: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x104c30u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x104c34: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x104c34u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x104c38: 0xc4410054  lwc1        $f1, 0x54($v0)
    ctx->pc = 0x104c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c3c: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x104c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104c40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104c44: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x104c44u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x104c48: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x104c48u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x104c4c: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x104c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c50: 0xc4400058  lwc1        $f0, 0x58($v0)
    ctx->pc = 0x104c50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c54: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x104c54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x104c58: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x104c58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x104c5c: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x104c5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x104c60: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x104c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c64: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x104c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104c68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104c6c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x104c6cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x104c70: 0xe7a30064  swc1        $f3, 0x64($sp)
    ctx->pc = 0x104c70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x104c74: 0xc4410058  lwc1        $f1, 0x58($v0)
    ctx->pc = 0x104c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x104c78: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x104c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x104c7c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x104c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x104c80: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x104c80u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
    // 0x104c84: 0xe7a40068  swc1        $f4, 0x68($sp)
    ctx->pc = 0x104c84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x104c88: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x104c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x104c8c: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x104c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x104c90: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x104c90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x104c94: 0xb2050037  sdl         $a1, 0x37($s0)
    ctx->pc = 0x104c94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x104c98: 0xb6050030  sdr         $a1, 0x30($s0)
    ctx->pc = 0x104c98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x104c9c: 0xae060038  sw          $a2, 0x38($s0)
    ctx->pc = 0x104c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 6));
    // 0x104ca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x104ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ca4: 0xc092d94  jal         func_24B650
    ctx->pc = 0x104CA4u;
    SET_GPR_U32(ctx, 31, 0x104CACu);
    ctx->pc = 0x104CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CA4u;
    // 0x104ca8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B650u, 0x104CA4u, 0x104CACu)) {
        return;
    }
    ctx->pc = 0x104CACu;
label_104cac:
    // 0x104cac: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x104cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x104cb0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x104cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104cb4: 0xc0aaf06  jal         func_2ABC18
    ctx->pc = 0x104CB4u;
    SET_GPR_U32(ctx, 31, 0x104CBCu);
    ctx->pc = 0x104CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CB4u;
    // 0x104cb8: 0x8c640060  lw          $a0, 0x60($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABC18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ABC18u, 0x104CB4u, 0x104CBCu)) {
        return;
    }
    ctx->pc = 0x104CBCu;
label_104cbc:
    // 0x104cbc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x104cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x104cc0: 0xc0b5b00  jal         func_2D6C00
    ctx->pc = 0x104CC0u;
    SET_GPR_U32(ctx, 31, 0x104CC8u);
    ctx->pc = 0x104CC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x104CC0u;
    // 0x104cc4: 0x8c440060  lw          $a0, 0x60($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6C00u, 0x104CC0u, 0x104CC8u)) {
        return;
    }
    ctx->pc = 0x104CC8u;
label_104cc8:
    // 0x104cc8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x104cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x104ccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x104cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x104cd0: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x104cd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104cd4: 0x5440feba  bnel        $v0, $zero, . + 4 + (-0x146 << 2)
    ctx->pc = 0x104CD4u;
    {
        const bool branch_taken_0x104cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x104cd4) {
            ctx->pc = 0x104CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x104CD4u;
            // 0x104cd8: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1047C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1047c0;
        }
    }
    ctx->pc = 0x104CDCu;
    // 0x104cdc: 0x0  nop
    ctx->pc = 0x104cdcu;
    // NOP
label_104ce0:
    // 0x104ce0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x104ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x104ce4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x104ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104ce8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x104ce8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x104cec: 0x1440fea8  bnez        $v0, . + 4 + (-0x158 << 2)
    ctx->pc = 0x104CECu;
    {
        const bool branch_taken_0x104cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x104CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104CECu;
        // 0x104cf0: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x104cec) {
            ctx->pc = 0x104790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_104790;
        }
    }
    ctx->pc = 0x104CF4u;
label_104cf4:
    // 0x104cf4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x104cf4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x104cf8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x104cf8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x104cfc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x104cfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x104d00: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x104d00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x104d04: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x104d04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x104d08: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x104d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x104d0c: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x104d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x104d10: 0x3e00008  jr          $ra
    ctx->pc = 0x104D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x104D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104D10u;
        // 0x104d14: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104D18u;
}
