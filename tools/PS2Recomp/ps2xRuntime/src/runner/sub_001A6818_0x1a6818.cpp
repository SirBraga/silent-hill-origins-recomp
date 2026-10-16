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

// Function: sub_001A6818
// Address: 0x1a6818 - 0x1a6ea0
void sub_001A6818_0x1a6818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6818_0x1a6818");
#endif

    switch (ctx->pc) {
        case 0x1a6888u: goto label_1a6888;
        case 0x1a69b0u: goto label_1a69b0;
        case 0x1a69d4u: goto label_1a69d4;
        case 0x1a6af4u: goto label_1a6af4;
        case 0x1a6bacu: goto label_1a6bac;
        case 0x1a6d18u: goto label_1a6d18;
        case 0x1a6dd0u: goto label_1a6dd0;
        case 0x1a6e4cu: goto label_1a6e4c;
        default: break;
    }

    ctx->pc = 0x1a6818u;

    // 0x1a6818: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x1a6818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x1a681c: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x1a681cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x1a6820: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x1a6820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x1a6824: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x1a6824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x1a6828: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x1a6828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x1a682c: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x1a682cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x1a6830: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x1a6830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x1a6834: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x1a6834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x1a6838: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x1a6838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x1a683c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x1a683cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x1a6840: 0xe7b601a0  swc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1a6840u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x1a6844: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x1a6844u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x1a6848: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x1a6848u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x1a684c: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x1a684cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x1a6850: 0x8cb4000c  lw          $s4, 0xC($a1)
    ctx->pc = 0x1a6850u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x1a6854: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x1a6854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1a6858: 0x1240017f  beqz        $s2, . + 4 + (0x17F << 2)
    ctx->pc = 0x1A6858u;
    {
        const bool branch_taken_0x1a6858 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A685Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6858u;
        // 0x1a685c: 0x80b82d  daddu       $s7, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6858) {
            ctx->pc = 0x1A6E58u;
            goto label_1a6e58;
        }
    }
    ctx->pc = 0x1A6860u;
    // 0x1a6860: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x1a6860u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1a6864: 0x1260017c  beqz        $s3, . + 4 + (0x17C << 2)
    ctx->pc = 0x1A6864u;
    {
        const bool branch_taken_0x1a6864 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6864u;
        // 0x1a6868: 0x241e000c  addiu       $fp, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6864) {
            ctx->pc = 0x1A6E58u;
            goto label_1a6e58;
        }
    }
    ctx->pc = 0x1A686Cu;
    // 0x1a686c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a686cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a6870: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1a6870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1a6874: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a6874u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a6878: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a6878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a687c: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1a687cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1a6880: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x1a6880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1a6884: 0x0  nop
    ctx->pc = 0x1a6884u;
    // NOP
label_1a6888:
    // 0x1a6888: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a6888u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a688c: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A688Cu;
    {
        const bool branch_taken_0x1a688c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A688Cu;
        // 0x1a6890: 0x96470020  lhu         $a3, 0x20($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a688c) {
            ctx->pc = 0x1A68A4u;
            goto label_1a68a4;
        }
    }
    ctx->pc = 0x1A6894u;
    // 0x1a6894: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a6898: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1a6898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a689c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A689Cu;
    {
        const bool branch_taken_0x1a689c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A68A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A689Cu;
        // 0x1a68a0: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a689c) {
            ctx->pc = 0x1A68ACu;
            goto label_1a68ac;
        }
    }
    ctx->pc = 0x1A68A4u;
label_1a68a4:
    // 0x1a68a4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A68A4u;
    {
        const bool branch_taken_0x1a68a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A68A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A68A4u;
        // 0x1a68a8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a68a4) {
            ctx->pc = 0x1A68B4u;
            goto label_1a68b4;
        }
    }
    ctx->pc = 0x1A68ACu;
label_1a68ac:
    // 0x1a68ac: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x1a68acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a68b0: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x1a68b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a68b4:
    // 0x1a68b4: 0x96420022  lhu         $v0, 0x22($s2)
    ctx->pc = 0x1a68b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 34)));
    // 0x1a68b8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a68b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a68bc: 0x2628000c  addiu       $t0, $s1, 0xC
    ctx->pc = 0x1a68bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x1a68c0: 0x26270004  addiu       $a3, $s1, 0x4
    ctx->pc = 0x1a68c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x1a68c4: 0x5e2018  mult        $a0, $v0, $fp
    ctx->pc = 0x1a68c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1a68c8: 0x26890010  addiu       $t1, $s4, 0x10
    ctx->pc = 0x1a68c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x1a68cc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a68ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a68d0: 0x266a0010  addiu       $t2, $s3, 0x10
    ctx->pc = 0x1a68d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x1a68d4: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1a68d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a68d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a68d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68dc: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1a68dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0));
    // 0x1a68e0: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1a68e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1a68e4: 0x1041821  addu        $v1, $t0, $a0
    ctx->pc = 0x1a68e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1a68e8: 0x5e1018  mult        $v0, $v0, $fp
    ctx->pc = 0x1a68e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1a68ec: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1a68ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1a68f0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1a68f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a68f4: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1a68f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a68f8: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x1a68f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a68fc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x1a68fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1a6900: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1a6900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a6904: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1a6908: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x1a6908u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1a690c: 0x1024021  addu        $t0, $t0, $v0
    ctx->pc = 0x1a690cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1a6910: 0x140b02d  daddu       $s6, $t2, $zero
    ctx->pc = 0x1a6910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6914: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1a6914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6918: 0xc5010000  lwc1        $f1, 0x0($t0)
    ctx->pc = 0x1a6918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a691c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x1a691cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a6920: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x1a6920u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a6924: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x1a6924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a6928: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x1a6928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a692c: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x1a692cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6930: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x1a6930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6934: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x1a6934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a6938: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x1a6938u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a693c: 0xb3a7000f  sdl         $a3, 0xF($sp)
    ctx->pc = 0x1a693cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6940: 0xb7a70008  sdr         $a3, 0x8($sp)
    ctx->pc = 0x1a6940u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6944: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1a6944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1a6948: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x1a6948u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a694c: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x1a694cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a6950: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x1a6950u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6954: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x1a6954u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6958: 0x6ba7000f  ldl         $a3, 0xF($sp)
    ctx->pc = 0x1a6958u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a695c: 0x6fa70008  ldr         $a3, 0x8($sp)
    ctx->pc = 0x1a695cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a6960: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x1a6960u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6964: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x1a6964u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6968: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x1a6968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a696c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x1a696cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1a6970: 0xc5210008  lwc1        $f1, 0x8($t1)
    ctx->pc = 0x1a6970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6974: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x1a6974u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x1a6978: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1a6978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a697c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x1a697cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x1a6980: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x1a6980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6984: 0xe7a10074  swc1        $f1, 0x74($sp)
    ctx->pc = 0x1a6984u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x1a6988: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x1a6988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a698c: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x1a698cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a6990: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x1a6990u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6994: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x1a6994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6998: 0x6ba70077  ldl         $a3, 0x77($sp)
    ctx->pc = 0x1a6998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a699c: 0x6fa70070  ldr         $a3, 0x70($sp)
    ctx->pc = 0x1a699cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a69a0: 0xb3a7004f  sdl         $a3, 0x4F($sp)
    ctx->pc = 0x1a69a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a69a4: 0xb7a70048  sdr         $a3, 0x48($sp)
    ctx->pc = 0x1a69a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a69a8: 0xc069576  jal         func_1A55D8
    ctx->pc = 0x1A69A8u;
    SET_GPR_U32(ctx, 31, 0x1A69B0u);
    ctx->pc = 0x1A69ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69A8u;
    // 0x1a69ac: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A55D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A55D8u, 0x1A69A8u, 0x1A69B0u)) {
        return;
    }
    ctx->pc = 0x1A69B0u;
label_1a69b0:
    // 0x1a69b0: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x1a69b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a69b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a69b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69b8: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1a69b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a69bc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a69bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1a69c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a69c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a69c4: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a69c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a69c8: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1a69c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1a69cc: 0xc069bb4  jal         func_1A6ED0
    ctx->pc = 0x1A69CCu;
    SET_GPR_U32(ctx, 31, 0x1A69D4u);
    ctx->pc = 0x1A69D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A69CCu;
    // 0x1a69d0: 0xafa00084  sw          $zero, 0x84($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6ED0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A6ED0u, 0x1A69CCu, 0x1A69D4u)) {
        return;
    }
    ctx->pc = 0x1A69D4u;
label_1a69d4:
    // 0x1a69d4: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x1a69d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a69d8: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x1a69d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a69dc: 0x8fa50098  lw          $a1, 0x98($sp)
    ctx->pc = 0x1a69dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1a69e0: 0xb3a400b7  sdl         $a0, 0xB7($sp)
    ctx->pc = 0x1a69e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a69e4: 0xb7a400b0  sdr         $a0, 0xB0($sp)
    ctx->pc = 0x1a69e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a69e8: 0xafa500b8  sw          $a1, 0xB8($sp)
    ctx->pc = 0x1a69e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 5));
    // 0x1a69ec: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x1a69ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x1a69f0: 0xc7a400b4  lwc1        $f4, 0xB4($sp)
    ctx->pc = 0x1a69f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a69f4: 0x46062032  c.eq.s      $f4, $f6
    ctx->pc = 0x1a69f4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a69f8: 0x0  nop
    ctx->pc = 0x1a69f8u;
    // NOP
    // 0x1a69fc: 0x4501000c  bc1t        . + 4 + (0xC << 2)
    ctx->pc = 0x1A69FCu;
    {
        const bool branch_taken_0x1a69fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A69FCu;
        // 0x1a6a00: 0xc7a500a0  lwc1        $f5, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a69fc) {
            ctx->pc = 0x1A6A30u;
            goto label_1a6a30;
        }
    }
    ctx->pc = 0x1A6A04u;
    // 0x1a6a04: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a6a04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6a08: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x1a6a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6a0c: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x1a6a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6a10: 0xc7a20088  lwc1        $f2, 0x88($sp)
    ctx->pc = 0x1a6a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6a14: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a6a14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1a6a18: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a6a18u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a6a1c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a6a1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a6a20: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x1a6a20u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
    // 0x1a6a24: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1a6a24u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1a6a28: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x1a6a28u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
    // 0x1a6a2c: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x1a6a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_1a6a30:
    // 0x1a6a30: 0x2602fffe  addiu       $v0, $s0, -0x2
    ctx->pc = 0x1a6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
    // 0x1a6a34: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1a6a34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1a6a38: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A6A38u;
    {
        const bool branch_taken_0x1a6a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6a38) {
            ctx->pc = 0x1A6A60u;
            goto label_1a6a60;
        }
    }
    ctx->pc = 0x1A6A40u;
    // 0x1a6a40: 0x6ba80087  ldl         $t0, 0x87($sp)
    ctx->pc = 0x1a6a40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a6a44: 0x6fa80080  ldr         $t0, 0x80($sp)
    ctx->pc = 0x1a6a44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a6a48: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1a6a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a6a4c: 0xb2480017  sdl         $t0, 0x17($s2)
    ctx->pc = 0x1a6a4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6a50: 0xb6480010  sdr         $t0, 0x10($s2)
    ctx->pc = 0x1a6a50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6a54: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x1a6a54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
    // 0x1a6a58: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x1A6A58u;
    {
        const bool branch_taken_0x1a6a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6A58u;
        // 0x1a6a5c: 0xc6800010  lwc1        $f0, 0x10($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6a58) {
            ctx->pc = 0x1A6C58u;
            goto label_1a6c58;
        }
    }
    ctx->pc = 0x1A6A60u;
label_1a6a60:
    // 0x1a6a60: 0x6ba50037  ldl         $a1, 0x37($sp)
    ctx->pc = 0x1a6a60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a6a64: 0x6fa50030  ldr         $a1, 0x30($sp)
    ctx->pc = 0x1a6a64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a6a68: 0xb3a500a7  sdl         $a1, 0xA7($sp)
    ctx->pc = 0x1a6a68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6a6c: 0xb7a500a0  sdr         $a1, 0xA0($sp)
    ctx->pc = 0x1a6a6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6a70: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a6a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6a74: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x1a6a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6a78: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a6a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6a7c: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1a6a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6a80: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a6a80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a6a84: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6a84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a6a88: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a6a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a6a8c: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1a6a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1a6a90: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x1a6a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a6a94: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x1a6a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a6a98: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x1a6a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6a9c: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x1a6a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6aa0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1a6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6aa4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a6aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6aa8: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a6aa8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a6aac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a6aacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a6ab0: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a6ab0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6ab4: 0x46066032  c.eq.s      $f12, $f6
    ctx->pc = 0x1a6ab4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6ab8: 0x0  nop
    ctx->pc = 0x1a6ab8u;
    // NOP
    // 0x1a6abc: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6ABCu;
    {
        const bool branch_taken_0x1a6abc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6abc) {
            ctx->pc = 0x1A6AD0u;
            goto label_1a6ad0;
        }
    }
    ctx->pc = 0x1A6AC4u;
    // 0x1a6ac4: 0xe7a60094  swc1        $f6, 0x94($sp)
    ctx->pc = 0x1a6ac4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a6ac8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6AC8u;
    {
        const bool branch_taken_0x1a6ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6AC8u;
        // 0x1a6acc: 0xe7a60090  swc1        $f6, 0x90($sp) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ac8) {
            ctx->pc = 0x1A6B18u;
            goto label_1a6b18;
        }
    }
    ctx->pc = 0x1A6AD0u;
label_1a6ad0:
    // 0x1a6ad0: 0x0  nop
    ctx->pc = 0x1a6ad0u;
    // NOP
    // 0x1a6ad4: 0x0  nop
    ctx->pc = 0x1a6ad4u;
    // NOP
    // 0x1a6ad8: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1a6ad8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a6adc: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1a6adcu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6ae0: 0x0  nop
    ctx->pc = 0x1a6ae0u;
    // NOP
    // 0x1a6ae4: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6AE4u;
    {
        const bool branch_taken_0x1a6ae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6ae4) {
            ctx->pc = 0x1A6AF4u;
            goto label_1a6af4;
        }
    }
    ctx->pc = 0x1A6AECu;
    // 0x1a6aec: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A6AECu;
    SET_GPR_U32(ctx, 31, 0x1A6AF4u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A6AECu, 0x1A6AF4u)) {
        return;
    }
    ctx->pc = 0x1A6AF4u;
label_1a6af4:
    // 0x1a6af4: 0x0  nop
    ctx->pc = 0x1a6af4u;
    // NOP
    // 0x1a6af8: 0x0  nop
    ctx->pc = 0x1a6af8u;
    // NOP
    // 0x1a6afc: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1a6afcu;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a6b00: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1a6b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6b04: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a6b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b08: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a6b08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a6b0c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a6b0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a6b10: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1a6b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a6b14: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x1a6b14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_1a6b18:
    // 0x1a6b18: 0x6ba60067  ldl         $a2, 0x67($sp)
    ctx->pc = 0x1a6b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a6b1c: 0x6fa60060  ldr         $a2, 0x60($sp)
    ctx->pc = 0x1a6b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a6b20: 0xb3a600b7  sdl         $a2, 0xB7($sp)
    ctx->pc = 0x1a6b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6b24: 0xb7a600b0  sdr         $a2, 0xB0($sp)
    ctx->pc = 0x1a6b24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6b28: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a6b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b2c: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a6b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6b30: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x1a6b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6b34: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x1a6b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6b38: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a6b38u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a6b3c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6b3cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a6b40: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a6b40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a6b44: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a6b44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a6b48: 0x6ba300b7  ldl         $v1, 0xB7($sp)
    ctx->pc = 0x1a6b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a6b4c: 0x6fa300b0  ldr         $v1, 0xB0($sp)
    ctx->pc = 0x1a6b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a6b50: 0xb3a300a7  sdl         $v1, 0xA7($sp)
    ctx->pc = 0x1a6b50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6b54: 0xb7a300a0  sdr         $v1, 0xA0($sp)
    ctx->pc = 0x1a6b54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6b58: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1a6b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6b5c: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1a6b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6b60: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a6b60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a6b64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a6b64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a6b68: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a6b68u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6b6c: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x1a6b6cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6b70: 0x0  nop
    ctx->pc = 0x1a6b70u;
    // NOP
    // 0x1a6b74: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6B74u;
    {
        const bool branch_taken_0x1a6b74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6b74) {
            ctx->pc = 0x1A6B88u;
            goto label_1a6b88;
        }
    }
    ctx->pc = 0x1A6B7Cu;
    // 0x1a6b7c: 0xafa000a0  sw          $zero, 0xA0($sp)
    ctx->pc = 0x1a6b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 0));
    // 0x1a6b80: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6B80u;
    {
        const bool branch_taken_0x1a6b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6B80u;
        // 0x1a6b84: 0xafa000a4  sw          $zero, 0xA4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6b80) {
            ctx->pc = 0x1A6BD0u;
            goto label_1a6bd0;
        }
    }
    ctx->pc = 0x1A6B88u;
label_1a6b88:
    // 0x1a6b88: 0x0  nop
    ctx->pc = 0x1a6b88u;
    // NOP
    // 0x1a6b8c: 0x0  nop
    ctx->pc = 0x1a6b8cu;
    // NOP
    // 0x1a6b90: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1a6b90u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a6b94: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1a6b94u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6b98: 0x0  nop
    ctx->pc = 0x1a6b98u;
    // NOP
    // 0x1a6b9c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6B9Cu;
    {
        const bool branch_taken_0x1a6b9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6b9c) {
            ctx->pc = 0x1A6BACu;
            goto label_1a6bac;
        }
    }
    ctx->pc = 0x1A6BA4u;
    // 0x1a6ba4: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A6BA4u;
    SET_GPR_U32(ctx, 31, 0x1A6BACu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A6BA4u, 0x1A6BACu)) {
        return;
    }
    ctx->pc = 0x1A6BACu;
label_1a6bac:
    // 0x1a6bac: 0x0  nop
    ctx->pc = 0x1a6bacu;
    // NOP
    // 0x1a6bb0: 0x0  nop
    ctx->pc = 0x1a6bb0u;
    // NOP
    // 0x1a6bb4: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1a6bb4u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a6bb8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x1a6bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6bbc: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1a6bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bc0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a6bc0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a6bc4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a6bc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a6bc8: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1a6bc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a6bcc: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1a6bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1a6bd0:
    // 0x1a6bd0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1a6bd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6bd4: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x1a6bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6bd8: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x1a6bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6bdc: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x1a6bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6be0: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1a6be0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1a6be4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a6be4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a6be8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a6be8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6bec: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1a6becu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6bf0: 0x0  nop
    ctx->pc = 0x1a6bf0u;
    // NOP
    // 0x1a6bf4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6BF4u;
    {
        const bool branch_taken_0x1a6bf4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A6BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BF4u;
        // 0x1a6bf8: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bf4) {
            ctx->pc = 0x1A6C04u;
            goto label_1a6c04;
        }
    }
    ctx->pc = 0x1A6BFCu;
    // 0x1a6bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6BFCu;
    {
        const bool branch_taken_0x1a6bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6BFCu;
        // 0x1a6c00: 0xc7a10034  lwc1        $f1, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6bfc) {
            ctx->pc = 0x1A6C0Cu;
            goto label_1a6c0c;
        }
    }
    ctx->pc = 0x1A6C04u;
label_1a6c04:
    // 0x1a6c04: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c08: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x1a6c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6c0c:
    // 0x1a6c0c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x1a6c0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a6c10: 0xe7a10088  swc1        $f1, 0x88($sp)
    ctx->pc = 0x1a6c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1a6c14: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x1a6c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6c18: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x1a6c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6c1c: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x1a6c1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c20: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a6c20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6c24: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a6c24u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x1a6c28: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a6c28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a6c2c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1a6c2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x1a6c30: 0x46160002  mul.s       $f0, $f0, $f22
    ctx->pc = 0x1a6c30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
    // 0x1a6c34: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x1a6c34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
    // 0x1a6c38: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x1a6c38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x1a6c3c: 0x6ba70087  ldl         $a3, 0x87($sp)
    ctx->pc = 0x1a6c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1a6c40: 0x6fa70080  ldr         $a3, 0x80($sp)
    ctx->pc = 0x1a6c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1a6c44: 0x8fa80088  lw          $t0, 0x88($sp)
    ctx->pc = 0x1a6c44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1a6c48: 0xb2470017  sdl         $a3, 0x17($s2)
    ctx->pc = 0x1a6c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6c4c: 0xb6470010  sdr         $a3, 0x10($s2)
    ctx->pc = 0x1a6c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6c50: 0xae480018  sw          $t0, 0x18($s2)
    ctx->pc = 0x1a6c50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 8));
    // 0x1a6c54: 0xc6800010  lwc1        $f0, 0x10($s4)
    ctx->pc = 0x1a6c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6c58:
    // 0x1a6c58: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x1a6c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a6c5c: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x1a6c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6c60: 0xe7a10094  swc1        $f1, 0x94($sp)
    ctx->pc = 0x1a6c60u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x1a6c64: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x1a6c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c68: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a6c68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x1a6c6c: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x1a6c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6c70: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x1a6c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1a6c74: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x1a6c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c78: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a6c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1a6c7c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x1a6c7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6c80: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x1a6c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x1a6c84: 0x6ba40097  ldl         $a0, 0x97($sp)
    ctx->pc = 0x1a6c84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x1a6c88: 0x6fa40090  ldr         $a0, 0x90($sp)
    ctx->pc = 0x1a6c88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x1a6c8c: 0xb3a400d7  sdl         $a0, 0xD7($sp)
    ctx->pc = 0x1a6c8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6c90: 0xb7a400d0  sdr         $a0, 0xD0($sp)
    ctx->pc = 0x1a6c90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6c94: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a6c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6c98: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1a6c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6c9c: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1a6c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6ca0: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x1a6ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6ca4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a6ca4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a6ca8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6ca8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a6cac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x1a6cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a6cb0: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x1a6cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x1a6cb4: 0x6ba800d7  ldl         $t0, 0xD7($sp)
    ctx->pc = 0x1a6cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a6cb8: 0x6fa800d0  ldr         $t0, 0xD0($sp)
    ctx->pc = 0x1a6cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a6cbc: 0xb3a800c7  sdl         $t0, 0xC7($sp)
    ctx->pc = 0x1a6cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6cc0: 0xb7a800c0  sdr         $t0, 0xC0($sp)
    ctx->pc = 0x1a6cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6cc4: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a6cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6cc8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a6cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6ccc: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a6cccu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a6cd0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a6cd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a6cd4: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a6cd4u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6cd8: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x1a6cd8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6cdc: 0x0  nop
    ctx->pc = 0x1a6cdcu;
    // NOP
    // 0x1a6ce0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6CE0u;
    {
        const bool branch_taken_0x1a6ce0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6ce0) {
            ctx->pc = 0x1A6CF4u;
            goto label_1a6cf4;
        }
    }
    ctx->pc = 0x1A6CE8u;
    // 0x1a6ce8: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x1a6ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
    // 0x1a6cec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6CECu;
    {
        const bool branch_taken_0x1a6cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6CECu;
        // 0x1a6cf0: 0xafa000c4  sw          $zero, 0xC4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6cec) {
            ctx->pc = 0x1A6D3Cu;
            goto label_1a6d3c;
        }
    }
    ctx->pc = 0x1A6CF4u;
label_1a6cf4:
    // 0x1a6cf4: 0x0  nop
    ctx->pc = 0x1a6cf4u;
    // NOP
    // 0x1a6cf8: 0x0  nop
    ctx->pc = 0x1a6cf8u;
    // NOP
    // 0x1a6cfc: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1a6cfcu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a6d00: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1a6d00u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6d04: 0x0  nop
    ctx->pc = 0x1a6d04u;
    // NOP
    // 0x1a6d08: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6D08u;
    {
        const bool branch_taken_0x1a6d08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6d08) {
            ctx->pc = 0x1A6D18u;
            goto label_1a6d18;
        }
    }
    ctx->pc = 0x1A6D10u;
    // 0x1a6d10: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A6D10u;
    SET_GPR_U32(ctx, 31, 0x1A6D18u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A6D10u, 0x1A6D18u)) {
        return;
    }
    ctx->pc = 0x1A6D18u;
label_1a6d18:
    // 0x1a6d18: 0x0  nop
    ctx->pc = 0x1a6d18u;
    // NOP
    // 0x1a6d1c: 0x0  nop
    ctx->pc = 0x1a6d1cu;
    // NOP
    // 0x1a6d20: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1a6d20u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a6d24: 0xc7a100c0  lwc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6d28: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6d2c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a6d2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a6d30: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a6d30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a6d34: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a6d34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1a6d38: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a6d38u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a6d3c:
    // 0x1a6d3c: 0x6ba500b7  ldl         $a1, 0xB7($sp)
    ctx->pc = 0x1a6d3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1a6d40: 0x6fa500b0  ldr         $a1, 0xB0($sp)
    ctx->pc = 0x1a6d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1a6d44: 0xb3a500e7  sdl         $a1, 0xE7($sp)
    ctx->pc = 0x1a6d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d48: 0xb7a500e0  sdr         $a1, 0xE0($sp)
    ctx->pc = 0x1a6d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d4c: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a6d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6d50: 0xc7a100e4  lwc1        $f1, 0xE4($sp)
    ctx->pc = 0x1a6d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6d54: 0xc7a200a0  lwc1        $f2, 0xA0($sp)
    ctx->pc = 0x1a6d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a6d58: 0xc7a300a4  lwc1        $f3, 0xA4($sp)
    ctx->pc = 0x1a6d58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a6d5c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a6d5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1a6d60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6d60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a6d64: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a6d64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x1a6d68: 0xe7a100e4  swc1        $f1, 0xE4($sp)
    ctx->pc = 0x1a6d68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x1a6d6c: 0x6ba200e7  ldl         $v0, 0xE7($sp)
    ctx->pc = 0x1a6d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1a6d70: 0x6fa200e0  ldr         $v0, 0xE0($sp)
    ctx->pc = 0x1a6d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1a6d74: 0xb3a200d7  sdl         $v0, 0xD7($sp)
    ctx->pc = 0x1a6d74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d78: 0xb7a200d0  sdr         $v0, 0xD0($sp)
    ctx->pc = 0x1a6d78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6d7c: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1a6d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6d80: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a6d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6d84: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a6d84u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a6d88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a6d88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a6d8c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1a6d8cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1a6d90: 0x46146032  c.eq.s      $f12, $f20
    ctx->pc = 0x1a6d90u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6d94: 0x0  nop
    ctx->pc = 0x1a6d94u;
    // NOP
    // 0x1a6d98: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1A6D98u;
    {
        const bool branch_taken_0x1a6d98 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6d98) {
            ctx->pc = 0x1A6DACu;
            goto label_1a6dac;
        }
    }
    ctx->pc = 0x1A6DA0u;
    // 0x1a6da0: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x1a6da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
    // 0x1a6da4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1A6DA4u;
    {
        const bool branch_taken_0x1a6da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6DA4u;
        // 0x1a6da8: 0xafa000d4  sw          $zero, 0xD4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6da4) {
            ctx->pc = 0x1A6DF4u;
            goto label_1a6df4;
        }
    }
    ctx->pc = 0x1A6DACu;
label_1a6dac:
    // 0x1a6dac: 0x0  nop
    ctx->pc = 0x1a6dacu;
    // NOP
    // 0x1a6db0: 0x0  nop
    ctx->pc = 0x1a6db0u;
    // NOP
    // 0x1a6db4: 0x460c0004  c1          0xC0004
    ctx->pc = 0x1a6db4u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[12]);
    // 0x1a6db8: 0x46000032  c.eq.s      $f0, $f0
    ctx->pc = 0x1a6db8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a6dbc: 0x0  nop
    ctx->pc = 0x1a6dbcu;
    // NOP
    // 0x1a6dc0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6DC0u;
    {
        const bool branch_taken_0x1a6dc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1a6dc0) {
            ctx->pc = 0x1A6DD0u;
            goto label_1a6dd0;
        }
    }
    ctx->pc = 0x1A6DC8u;
    // 0x1a6dc8: 0xc09b52e  jal         func_26D4B8
    ctx->pc = 0x1A6DC8u;
    SET_GPR_U32(ctx, 31, 0x1A6DD0u);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x1A6DC8u, 0x1A6DD0u)) {
        return;
    }
    ctx->pc = 0x1A6DD0u;
label_1a6dd0:
    // 0x1a6dd0: 0x0  nop
    ctx->pc = 0x1a6dd0u;
    // NOP
    // 0x1a6dd4: 0x0  nop
    ctx->pc = 0x1a6dd4u;
    // NOP
    // 0x1a6dd8: 0x4600a883  div.s       $f2, $f21, $f0
    ctx->pc = 0x1a6dd8u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
    // 0x1a6ddc: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1a6ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a6de0: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a6de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a6de4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1a6de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1a6de8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1a6de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1a6dec: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1a6decu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1a6df0: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x1a6df0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1a6df4:
    // 0x1a6df4: 0x8ee20014  lw          $v0, 0x14($s7)
    ctx->pc = 0x1a6df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
    // 0x1a6df8: 0x6a860017  ldl         $a2, 0x17($s4)
    ctx->pc = 0x1a6df8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a6dfc: 0x6e860010  ldr         $a2, 0x10($s4)
    ctx->pc = 0x1a6dfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a6e00: 0x8e870018  lw          $a3, 0x18($s4)
    ctx->pc = 0x1a6e00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x1a6e04: 0xb3a600e7  sdl         $a2, 0xE7($sp)
    ctx->pc = 0x1a6e04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6e08: 0xb7a600e0  sdr         $a2, 0xE0($sp)
    ctx->pc = 0x1a6e08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a6e0c: 0xafa700e8  sw          $a3, 0xE8($sp)
    ctx->pc = 0x1a6e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 7));
    // 0x1a6e10: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1a6e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a6e14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6E14u;
    {
        const bool branch_taken_0x1a6e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E14u;
        // 0x1a6e18: 0x96890020  lhu         $t1, 0x20($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e14) {
            ctx->pc = 0x1A6E2Cu;
            goto label_1a6e2c;
        }
    }
    ctx->pc = 0x1A6E1Cu;
    // 0x1a6e1c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1a6e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a6e20: 0x122102b  sltu        $v0, $t1, $v0
    ctx->pc = 0x1a6e20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a6e24: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6E24u;
    {
        const bool branch_taken_0x1a6e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E24u;
        // 0x1a6e28: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e24) {
            ctx->pc = 0x1A6E34u;
            goto label_1a6e34;
        }
    }
    ctx->pc = 0x1A6E2Cu;
label_1a6e2c:
    // 0x1a6e2c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A6E2Cu;
    {
        const bool branch_taken_0x1a6e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E2Cu;
        // 0x1a6e30: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6e2c) {
            ctx->pc = 0x1A6E3Cu;
            goto label_1a6e3c;
        }
    }
    ctx->pc = 0x1A6E34u;
label_1a6e34:
    // 0x1a6e34: 0x1221818  mult        $v1, $t1, $v0
    ctx->pc = 0x1a6e34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a6e38: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x1a6e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a6e3c:
    // 0x1a6e3c: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1a6e3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a6e40: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1a6e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1a6e44: 0xc06a008  jal         func_1A8020
    ctx->pc = 0x1A6E44u;
    SET_GPR_U32(ctx, 31, 0x1A6E4Cu);
    ctx->pc = 0x1A6E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6E44u;
    // 0x1a6e48: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8020u, 0x1A6E44u, 0x1A6E4Cu)) {
        return;
    }
    ctx->pc = 0x1A6E4Cu;
label_1a6e4c:
    // 0x1a6e4c: 0x8e730004  lw          $s3, 0x4($s3)
    ctx->pc = 0x1a6e4cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1a6e50: 0x5660fe8d  bnel        $s3, $zero, . + 4 + (-0x173 << 2)
    ctx->pc = 0x1A6E50u;
    {
        const bool branch_taken_0x1a6e50 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6e50) {
            ctx->pc = 0x1A6E54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6E50u;
            // 0x1a6e54: 0x8ee20014  lw          $v0, 0x14($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a6888;
        }
    }
    ctx->pc = 0x1A6E58u;
label_1a6e58:
    // 0x1a6e58: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x1a6e58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x1a6e5c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x1a6e5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x1a6e60: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x1a6e60u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x1a6e64: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x1a6e64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x1a6e68: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x1a6e68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1a6e6c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x1a6e6cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1a6e70: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x1a6e70u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1a6e74: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x1a6e74u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1a6e78: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x1a6e78u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1a6e7c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1a6e7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1a6e80: 0xc7b601a0  lwc1        $f22, 0x1A0($sp)
    ctx->pc = 0x1a6e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1a6e84: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x1a6e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a6e88: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x1a6e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a6e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A6E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6E8Cu;
        // 0x1a6e90: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6E94u;
    // 0x1a6e94: 0x0  nop
    ctx->pc = 0x1a6e94u;
    // NOP
    // 0x1a6e98: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x1a6e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1a6e9c: 0x0  nop
    ctx->pc = 0x1a6e9cu;
    // NOP
    ctx->pc = 0x1a6ea0u;
}
