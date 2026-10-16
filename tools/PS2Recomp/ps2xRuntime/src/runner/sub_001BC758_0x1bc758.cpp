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

// Function: sub_001BC758
// Address: 0x1bc758 - 0x1bca28
void sub_001BC758_0x1bc758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BC758_0x1bc758");
#endif

    switch (ctx->pc) {
        case 0x1bc7b0u: goto label_1bc7b0;
        case 0x1bc80cu: goto label_1bc80c;
        case 0x1bc828u: goto label_1bc828;
        case 0x1bc8c8u: goto label_1bc8c8;
        case 0x1bc92cu: goto label_1bc92c;
        case 0x1bc990u: goto label_1bc990;
        case 0x1bc9e0u: goto label_1bc9e0;
        default: break;
    }

    ctx->pc = 0x1bc758u;

    // 0x1bc758: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1bc758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1bc75c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1bc75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1bc760: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1bc760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1bc764: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bc764u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc768: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1bc768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1bc76c: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1bc76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1bc770: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1bc770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1bc774: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1bc774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1bc778: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1bc778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1bc77c: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1bc77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1bc780: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1bc780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1bc784: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bc784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1bc788: 0x8e020068  lw          $v0, 0x68($s0)
    ctx->pc = 0x1bc788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc78c: 0x10400099  beqz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x1BC78Cu;
    {
        const bool branch_taken_0x1bc78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC78Cu;
        // 0x1bc790: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc78c) {
            ctx->pc = 0x1BC9F4u;
            goto label_1bc9f4;
        }
    }
    ctx->pc = 0x1BC794u;
    // 0x1bc794: 0x3c17006a  lui         $s7, 0x6A
    ctx->pc = 0x1bc794u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)106 << 16));
    // 0x1bc798: 0x3c16006a  lui         $s6, 0x6A
    ctx->pc = 0x1bc798u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)106 << 16));
    // 0x1bc79c: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1bc79cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
    // 0x1bc7a0: 0x2614003c  addiu       $s4, $s0, 0x3C
    ctx->pc = 0x1bc7a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x1bc7a4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1bc7a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc7a8: 0x2613001c  addiu       $s3, $s0, 0x1C
    ctx->pc = 0x1bc7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bc7ac: 0x0  nop
    ctx->pc = 0x1bc7acu;
    // NOP
label_1bc7b0:
    // 0x1bc7b0: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1bc7b0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bc7b4: 0x0  nop
    ctx->pc = 0x1bc7b4u;
    // NOP
    // 0x1bc7b8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1bc7b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1bc7bc: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x1bc7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
    // 0x1bc7c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bc7c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1bc7c4: 0x26e5d798  addiu       $a1, $s7, -0x2868
    ctx->pc = 0x1bc7c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294956952));
    // 0x1bc7c8: 0x68a20007  ldl         $v0, 0x7($a1)
    ctx->pc = 0x1bc7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1bc7cc: 0x6ca20000  ldr         $v0, 0x0($a1)
    ctx->pc = 0x1bc7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1bc7d0: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x1bc7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bc7d4: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x1bc7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bc7d8: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1bc7d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1bc7dc: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x1bc7dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bc7e0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bc7e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1bc7e4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1bc7e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1bc7e8: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1bc7e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1bc7ec: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1bc7ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1bc7f0: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1bc7f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bc7f4: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1bc7f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1bc7f8: 0x9fa40024  lwu         $a0, 0x24($sp)
    ctx->pc = 0x1bc7f8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1bc7fc: 0x9fa20020  lwu         $v0, 0x20($sp)
    ctx->pc = 0x1bc7fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bc800: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x1bc800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x1bc804: 0xc06cdf0  jal         func_1B37C0
    ctx->pc = 0x1BC804u;
    SET_GPR_U32(ctx, 31, 0x1BC80Cu);
    ctx->pc = 0x1BC808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC804u;
    // 0x1bc808: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B37C0u, 0x1BC804u, 0x1BC80Cu)) {
        return;
    }
    ctx->pc = 0x1BC80Cu;
label_1bc80c:
    // 0x1bc80c: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x1bc80cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1bc810: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1bc810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1bc814: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1bc814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1bc818: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1bc818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1bc81c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x1bc81cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x1bc820: 0xc06c8ba  jal         func_1B22E8
    ctx->pc = 0x1BC820u;
    SET_GPR_U32(ctx, 31, 0x1BC828u);
    ctx->pc = 0x1BC824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC820u;
    // 0x1bc824: 0xc7b40000  lwc1        $f20, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B22E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B22E8u, 0x1BC820u, 0x1BC828u)) {
        return;
    }
    ctx->pc = 0x1BC828u;
label_1bc828:
    // 0x1bc828: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bc828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc82c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BC82Cu;
    {
        const bool branch_taken_0x1bc82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bc82c) {
            ctx->pc = 0x1BC830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC82Cu;
            // 0x1bc830: 0x4600a001  sub.s       $f0, $f20, $f0 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC844u;
            goto label_1bc844;
        }
    }
    ctx->pc = 0x1BC834u;
    // 0x1bc834: 0x3c0141a0  lui         $at, 0x41A0
    ctx->pc = 0x1bc834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16800 << 16));
    // 0x1bc838: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bc838u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bc83c: 0x0  nop
    ctx->pc = 0x1bc83cu;
    // NOP
    // 0x1bc840: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x1bc840u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1bc844:
    // 0x1bc844: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1bc844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1bc848: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1bc848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
    // 0x1bc84c: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1BC84Cu;
    {
        const bool branch_taken_0x1bc84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC84Cu;
        // 0x1bc850: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc84c) {
            ctx->pc = 0x1BC9E0u;
            goto label_1bc9e0;
        }
    }
    ctx->pc = 0x1BC854u;
    // 0x1bc854: 0x2602001c  addiu       $v0, $s0, 0x1C
    ctx->pc = 0x1bc854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x1bc858: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1bc858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1bc85c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1bc85cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc860: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1bc860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1bc864: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1bc864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1bc868: 0x14830019  bne         $a0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BC868u;
    {
        const bool branch_taken_0x1bc868 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BC86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC868u;
        // 0x1bc86c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc868) {
            ctx->pc = 0x1BC8D0u;
            goto label_1bc8d0;
        }
    }
    ctx->pc = 0x1BC870u;
    // 0x1bc870: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x1bc870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1bc874: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC874u;
    {
        const bool branch_taken_0x1bc874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc874) {
            ctx->pc = 0x1BC878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC874u;
            // 0x1bc878: 0x8e050050  lw          $a1, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC880u;
            goto label_1bc880;
        }
    }
    ctx->pc = 0x1BC87Cu;
    // 0x1bc87c: 0x8e050054  lw          $a1, 0x54($s0)
    ctx->pc = 0x1bc87cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1bc880:
    // 0x1bc880: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1bc880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1bc884: 0x10510002  beq         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC884u;
    {
        const bool branch_taken_0x1bc884 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BC888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC884u;
        // 0x1bc888: 0x26c3d7a0  addiu       $v1, $s6, -0x2860 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc884) {
            ctx->pc = 0x1BC890u;
            goto label_1bc890;
        }
    }
    ctx->pc = 0x1BC88Cu;
    // 0x1bc88c: 0x26a3d7a8  addiu       $v1, $s5, -0x2858
    ctx->pc = 0x1bc88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956968));
label_1bc890:
    // 0x1bc890: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1bc890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1bc894: 0x88640003  lwl         $a0, 0x3($v1)
    ctx->pc = 0x1bc894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x1bc898: 0x98640000  lwr         $a0, 0x0($v1)
    ctx->pc = 0x1bc898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x1bc89c: 0xaba40013  swl         $a0, 0x13($sp)
    ctx->pc = 0x1bc89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc8a0: 0xbba40010  swr         $a0, 0x10($sp)
    ctx->pc = 0x1bc8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc8a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BC8A4u;
    {
        const bool branch_taken_0x1bc8a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8A4u;
        // 0x1bc8a8: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8a4) {
            ctx->pc = 0x1BC8B4u;
            goto label_1bc8b4;
        }
    }
    ctx->pc = 0x1BC8ACu;
    // 0x1bc8ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1bc8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1bc8b0: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x1bc8b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_1bc8b4:
    // 0x1bc8b4: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bc8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc8b8: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1bc8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1bc8bc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc8bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc8c0: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x1BC8C0u;
    SET_GPR_U32(ctx, 31, 0x1BC8C8u);
    ctx->pc = 0x1BC8C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC8C0u;
    // 0x1bc8c4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BC8C0u, 0x1BC8C8u)) {
        return;
    }
    ctx->pc = 0x1BC8C8u;
label_1bc8c8:
    // 0x1bc8c8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1BC8C8u;
    {
        const bool branch_taken_0x1bc8c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8C8u;
        // 0x1bc8cc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8c8) {
            ctx->pc = 0x1BC9E4u;
            goto label_1bc9e4;
        }
    }
    ctx->pc = 0x1BC8D0u;
label_1bc8d0:
    // 0x1bc8d0: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BC8D0u;
    {
        const bool branch_taken_0x1bc8d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8D0u;
        // 0x1bc8d4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8d0) {
            ctx->pc = 0x1BC934u;
            goto label_1bc934;
        }
    }
    ctx->pc = 0x1BC8D8u;
    // 0x1bc8d8: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bc8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1bc8dc: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC8DCu;
    {
        const bool branch_taken_0x1bc8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bc8dc) {
            ctx->pc = 0x1BC8E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC8DCu;
            // 0x1bc8e0: 0x8e050048  lw          $a1, 0x48($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC8E8u;
            goto label_1bc8e8;
        }
    }
    ctx->pc = 0x1BC8E4u;
    // 0x1bc8e4: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x1bc8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1bc8e8:
    // 0x1bc8e8: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1bc8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1bc8ec: 0x54510004  bnel        $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC8ECu;
    {
        const bool branch_taken_0x1bc8ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x1bc8ec) {
            ctx->pc = 0x1BC8F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BC8ECu;
            // 0x1bc8f0: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BC900u;
            goto label_1bc900;
        }
    }
    ctx->pc = 0x1BC8F4u;
    // 0x1bc8f4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bc8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bc8f8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC8F8u;
    {
        const bool branch_taken_0x1bc8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC8F8u;
        // 0x1bc8fc: 0x2442d7c0  addiu       $v0, $v0, -0x2840 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956992));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc8f8) {
            ctx->pc = 0x1BC904u;
            goto label_1bc904;
        }
    }
    ctx->pc = 0x1BC900u;
label_1bc900:
    // 0x1bc900: 0x2442d7c8  addiu       $v0, $v0, -0x2838
    ctx->pc = 0x1bc900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957000));
label_1bc904:
    // 0x1bc904: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bc904u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc908: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bc908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc90c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1bc90cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1bc910: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc914: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x1bc914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x1bc918: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x1bc918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x1bc91c: 0xabaa0013  swl         $t2, 0x13($sp)
    ctx->pc = 0x1bc91cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc920: 0xbbaa0010  swr         $t2, 0x10($sp)
    ctx->pc = 0x1bc920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc924: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x1BC924u;
    SET_GPR_U32(ctx, 31, 0x1BC92Cu);
    ctx->pc = 0x1BC928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC924u;
    // 0x1bc928: 0x27a70010  addiu       $a3, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BC924u, 0x1BC92Cu)) {
        return;
    }
    ctx->pc = 0x1BC92Cu;
label_1bc92c:
    // 0x1bc92c: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1BC92Cu;
    {
        const bool branch_taken_0x1bc92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC92Cu;
        // 0x1bc930: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc92c) {
            ctx->pc = 0x1BC9E4u;
            goto label_1bc9e4;
        }
    }
    ctx->pc = 0x1BC934u;
label_1bc934:
    // 0x1bc934: 0x14820018  bne         $a0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1BC934u;
    {
        const bool branch_taken_0x1bc934 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1BC938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC934u;
        // 0x1bc938: 0x8e02002c  lw          $v0, 0x2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc934) {
            ctx->pc = 0x1BC998u;
            goto label_1bc998;
        }
    }
    ctx->pc = 0x1BC93Cu;
    // 0x1bc93c: 0x14510004  bne         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BC93Cu;
    {
        const bool branch_taken_0x1bc93c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1BC940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC93Cu;
        // 0x1bc940: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc93c) {
            ctx->pc = 0x1BC950u;
            goto label_1bc950;
        }
    }
    ctx->pc = 0x1BC944u;
    // 0x1bc944: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1bc944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1bc948: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC948u;
    {
        const bool branch_taken_0x1bc948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC948u;
        // 0x1bc94c: 0x2445d7b0  addiu       $a1, $v0, -0x2850 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc948) {
            ctx->pc = 0x1BC954u;
            goto label_1bc954;
        }
    }
    ctx->pc = 0x1BC950u;
label_1bc950:
    // 0x1bc950: 0x2445d7b8  addiu       $a1, $v0, -0x2848
    ctx->pc = 0x1bc950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956984));
label_1bc954:
    // 0x1bc954: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x1bc954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1bc958: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bc958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc95c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc960: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bc960u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc964: 0x88aa0003  lwl         $t2, 0x3($a1)
    ctx->pc = 0x1bc964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x1bc968: 0x98aa0000  lwr         $t2, 0x0($a1)
    ctx->pc = 0x1bc968u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x1bc96c: 0xabaa0013  swl         $t2, 0x13($sp)
    ctx->pc = 0x1bc96cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc970: 0xbbaa0010  swr         $t2, 0x10($sp)
    ctx->pc = 0x1bc970u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc974: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1bc974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bc978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc97c: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1bc97cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1bc980: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc980u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc984: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1bc984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bc988: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x1BC988u;
    SET_GPR_U32(ctx, 31, 0x1BC990u);
    ctx->pc = 0x1BC98Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC988u;
    // 0x1bc98c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BC988u, 0x1BC990u)) {
        return;
    }
    ctx->pc = 0x1BC990u;
label_1bc990:
    // 0x1bc990: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BC990u;
    {
        const bool branch_taken_0x1bc990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BC994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC990u;
        // 0x1bc994: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc990) {
            ctx->pc = 0x1BC9E4u;
            goto label_1bc9e4;
        }
    }
    ctx->pc = 0x1BC998u;
label_1bc998:
    // 0x1bc998: 0x10510002  beq         $v0, $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BC998u;
    {
        const bool branch_taken_0x1bc998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1BC99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC998u;
        // 0x1bc99c: 0x26c5d7a0  addiu       $a1, $s6, -0x2860 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 4294956960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc998) {
            ctx->pc = 0x1BC9A4u;
            goto label_1bc9a4;
        }
    }
    ctx->pc = 0x1BC9A0u;
    // 0x1bc9a0: 0x26a5d7a8  addiu       $a1, $s5, -0x2858
    ctx->pc = 0x1bc9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294956968));
label_1bc9a4:
    // 0x1bc9a4: 0xd21821  addu        $v1, $a2, $s2
    ctx->pc = 0x1bc9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 18)));
    // 0x1bc9a8: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x1bc9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1bc9ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bc9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bc9b0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1bc9b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bc9b4: 0x88aa0003  lwl         $t2, 0x3($a1)
    ctx->pc = 0x1bc9b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x1bc9b8: 0x98aa0000  lwr         $t2, 0x0($a1)
    ctx->pc = 0x1bc9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x1bc9bc: 0xabaa0013  swl         $t2, 0x13($sp)
    ctx->pc = 0x1bc9bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc9c0: 0xbbaa0010  swr         $t2, 0x10($sp)
    ctx->pc = 0x1bc9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1bc9c4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1bc9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1bc9c8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1bc9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1bc9cc: 0x3c014140  lui         $at, 0x4140
    ctx->pc = 0x1bc9ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16704 << 16));
    // 0x1bc9d0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1bc9d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1bc9d4: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x1bc9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x1bc9d8: 0xc085cac  jal         func_2172B0
    ctx->pc = 0x1BC9D8u;
    SET_GPR_U32(ctx, 31, 0x1BC9E0u);
    ctx->pc = 0x1BC9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BC9D8u;
    // 0x1bc9dc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2172B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2172B0u, 0x1BC9D8u, 0x1BC9E0u)) {
        return;
    }
    ctx->pc = 0x1BC9E0u;
label_1bc9e0:
    // 0x1bc9e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bc9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bc9e4:
    // 0x1bc9e4: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bc9e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1bc9e8: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1bc9e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1bc9ec: 0x1440ff70  bnez        $v0, . + 4 + (-0x90 << 2)
    ctx->pc = 0x1BC9ECu;
    {
        const bool branch_taken_0x1bc9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BC9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BC9ECu;
        // 0x1bc9f0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bc9ec) {
            ctx->pc = 0x1BC7B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bc7b0;
        }
    }
    ctx->pc = 0x1BC9F4u;
label_1bc9f4:
    // 0x1bc9f4: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1bc9f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1bc9f8: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1bc9f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1bc9fc: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1bc9fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1bca00: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1bca00u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1bca04: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1bca04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1bca08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1bca08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1bca0c: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1bca0cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1bca10: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1bca10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bca14: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1bca14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bca18: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1bca18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1bca1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BCA1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BCA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BCA1Cu;
        // 0x1bca20: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BCA1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BCA24u;
    // 0x1bca24: 0x0  nop
    ctx->pc = 0x1bca24u;
    // NOP
    ctx->pc = 0x1bca28u;
}
