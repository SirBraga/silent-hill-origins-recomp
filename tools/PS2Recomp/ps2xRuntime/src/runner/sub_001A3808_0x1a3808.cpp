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

// Function: sub_001A3808
// Address: 0x1a3808 - 0x1a3a58
void sub_001A3808_0x1a3808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A3808_0x1a3808");
#endif

    switch (ctx->pc) {
        case 0x1a3848u: goto label_1a3848;
        case 0x1a386cu: goto label_1a386c;
        case 0x1a388cu: goto label_1a388c;
        case 0x1a3930u: goto label_1a3930;
        case 0x1a3974u: goto label_1a3974;
        case 0x1a398cu: goto label_1a398c;
        case 0x1a39d4u: goto label_1a39d4;
        case 0x1a39f8u: goto label_1a39f8;
        case 0x1a3a0cu: goto label_1a3a0c;
        default: break;
    }

    ctx->pc = 0x1a3808u;

    // 0x1a3808: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a3808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1a380c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a380cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1a3810: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1a3810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3814: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a3814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1a3818: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a3818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1a381c: 0x26111510  addiu       $s1, $s0, 0x1510
    ctx->pc = 0x1a381cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 5392));
    // 0x1a3820: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a3820u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1a3824: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a3824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3828: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1a3828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1a382c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x1a382cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3830: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x1a3830u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x1a3834: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x1a3834u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3838: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x1a3838u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x1a383c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a383cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3840: 0xc06877e  jal         func_1A1DF8
    ctx->pc = 0x1A3840u;
    SET_GPR_U32(ctx, 31, 0x1A3848u);
    ctx->pc = 0x1A3844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3840u;
    // 0x1a3844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1DF8u, 0x1A3840u, 0x1A3848u)) {
        return;
    }
    ctx->pc = 0x1A3848u;
label_1a3848:
    // 0x1a3848: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3848u;
    {
        const bool branch_taken_0x1a3848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3848) {
            ctx->pc = 0x1A384Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3848u;
            // 0x1a384c: 0x8e321350  lw          $s2, 0x1350($s1) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4944)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3864u;
            goto label_1a3864;
        }
    }
    ctx->pc = 0x1A3850u;
    // 0x1a3850: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a3850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1a3854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3858: 0x0  nop
    ctx->pc = 0x1a3858u;
    // NOP
    // 0x1a385c: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x1a385cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
    // 0x1a3860: 0x8e321350  lw          $s2, 0x1350($s1)
    ctx->pc = 0x1a3860u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4944)));
label_1a3864:
    // 0x1a3864: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1A3864u;
    SET_GPR_U32(ctx, 31, 0x1A386Cu);
    ctx->pc = 0x1A3868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3864u;
    // 0x1a3868: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3864u, 0x1A386Cu)) {
        return;
    }
    ctx->pc = 0x1A386Cu;
label_1a386c:
    // 0x1a386c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a386cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a3870: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a3870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a3874: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1a3874u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a3878: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x1a3878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a387c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x1a387cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a3880: 0x26040040  addiu       $a0, $s0, 0x40
    ctx->pc = 0x1a3880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
    // 0x1a3884: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1A3884u;
    SET_GPR_U32(ctx, 31, 0x1A388Cu);
    ctx->pc = 0x1A3888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3884u;
    // 0x1a3888: 0xafa50008  sw          $a1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A3884u, 0x1A388Cu)) {
        return;
    }
    ctx->pc = 0x1A388Cu;
label_1a388c:
    // 0x1a388c: 0x68480007  ldl         $t0, 0x7($v0)
    ctx->pc = 0x1a388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1a3890: 0x6c480000  ldr         $t0, 0x0($v0)
    ctx->pc = 0x1a3890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1a3894: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1a3894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a3898: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x1a3898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a389c: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x1a389cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a38a0: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x1a38a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x1a38a4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1a38a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a38a8: 0xc7a30010  lwc1        $f3, 0x10($sp)
    ctx->pc = 0x1a38a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a38ac: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x1a38acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a38b0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a38b0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x1a38b4: 0xc7a40014  lwc1        $f4, 0x14($sp)
    ctx->pc = 0x1a38b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1a38b8: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a38b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a38bc: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x1a38bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1a38c0: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a38c0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x1a38c4: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1a38c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1a38c8: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a38c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1a38cc: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x1a38ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1a38d0: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x1a38d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1a38d4: 0x6ba60037  ldl         $a2, 0x37($sp)
    ctx->pc = 0x1a38d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1a38d8: 0x6fa60030  ldr         $a2, 0x30($sp)
    ctx->pc = 0x1a38d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1a38dc: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x1a38dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a38e0: 0xb3a60027  sdl         $a2, 0x27($sp)
    ctx->pc = 0x1a38e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a38e4: 0xb7a60020  sdr         $a2, 0x20($sp)
    ctx->pc = 0x1a38e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a38e8: 0xafa70028  sw          $a3, 0x28($sp)
    ctx->pc = 0x1a38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 7));
    // 0x1a38ec: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1a38ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x1a38f0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1a38f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1a38f4: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a38f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a38f8: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a38f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1a38fc: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a38fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x1a3900: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x1a3900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3904: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a3904u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x1a3908: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a3908u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x1a390c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a390cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1a3910: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a3910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1a3914: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1a3914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3918: 0x0  nop
    ctx->pc = 0x1a3918u;
    // NOP
    // 0x1a391c: 0x45000045  bc1f        . + 4 + (0x45 << 2)
    ctx->pc = 0x1A391Cu;
    {
        const bool branch_taken_0x1a391c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A391Cu;
        // 0x1a3920: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a391c) {
            ctx->pc = 0x1A3A34u;
            goto label_1a3a34;
        }
    }
    ctx->pc = 0x1A3924u;
    // 0x1a3924: 0xc6550050  lwc1        $f21, 0x50($s2)
    ctx->pc = 0x1a3924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3928: 0xc0c580c  jal         func_316030
    ctx->pc = 0x1A3928u;
    SET_GPR_U32(ctx, 31, 0x1A3930u);
    ctx->pc = 0x1A392Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3928u;
    // 0x1a392c: 0xc6540054  lwc1        $f20, 0x54($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x316030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316030u, 0x1A3928u, 0x1A3930u)) {
        return;
    }
    ctx->pc = 0x1A3930u;
label_1a3930:
    // 0x1a3930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a3930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3934: 0x0  nop
    ctx->pc = 0x1a3934u;
    // NOP
    // 0x1a3938: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a3938u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1a393c: 0x3c013000  lui         $at, 0x3000
    ctx->pc = 0x1a393cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12288 << 16));
    // 0x1a3940: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1a3940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1a3944: 0x4615a501  sub.s       $f20, $f20, $f21
    ctx->pc = 0x1a3944u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[21]);
    // 0x1a3948: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1a3948u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a394c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1a394cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1a3950: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a3950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x1a3954: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x1a3954u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x1a3958: 0x46151034  c.lt.s      $f2, $f21
    ctx->pc = 0x1a3958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a395c: 0x0  nop
    ctx->pc = 0x1a395cu;
    // NOP
    // 0x1a3960: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3960u;
    {
        const bool branch_taken_0x1a3960 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3960u;
        // 0x1a3964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3960) {
            ctx->pc = 0x1A3980u;
            goto label_1a3980;
        }
    }
    ctx->pc = 0x1A3968u;
    // 0x1a3968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a396c: 0xc0685da  jal         func_1A1768
    ctx->pc = 0x1A396Cu;
    SET_GPR_U32(ctx, 31, 0x1A3974u);
    ctx->pc = 0x1A3970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A396Cu;
    // 0x1a3970: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A396Cu, 0x1A3974u)) {
        return;
    }
    ctx->pc = 0x1A3974u;
label_1a3974:
    // 0x1a3974: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1A3974u;
    {
        const bool branch_taken_0x1a3974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3974u;
        // 0x1a3978: 0xe6351348  swc1        $f21, 0x1348($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4936), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3974) {
            ctx->pc = 0x1A3A30u;
            goto label_1a3a30;
        }
    }
    ctx->pc = 0x1A397Cu;
    // 0x1a397c: 0x0  nop
    ctx->pc = 0x1a397cu;
    // NOP
label_1a3980:
    // 0x1a3980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a3980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3984: 0xc06931e  jal         func_1A4C78
    ctx->pc = 0x1A3984u;
    SET_GPR_U32(ctx, 31, 0x1A398Cu);
    ctx->pc = 0x1A3988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3984u;
    // 0x1a3988: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4C78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A4C78u, 0x1A3984u, 0x1A398Cu)) {
        return;
    }
    ctx->pc = 0x1A398Cu;
label_1a398c:
    // 0x1a398c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a398cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3990: 0x5080001b  beql        $a0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A3990u;
    {
        const bool branch_taken_0x1a3990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3990) {
            ctx->pc = 0x1A3994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3990u;
            // 0x1a3994: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A00u;
            goto label_1a3a00;
        }
    }
    ctx->pc = 0x1A3998u;
    // 0x1a3998: 0x8e231350  lw          $v1, 0x1350($s1)
    ctx->pc = 0x1a3998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4944)));
    // 0x1a399c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A399Cu;
    {
        const bool branch_taken_0x1a399c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a399c) {
            ctx->pc = 0x1A39B8u;
            goto label_1a39b8;
        }
    }
    ctx->pc = 0x1A39A4u;
    // 0x1a39a4: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1a39a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1a39a8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a39a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a39ac: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A39ACu;
    {
        const bool branch_taken_0x1a39ac = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A39B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39ACu;
        // 0x1a39b0: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39ac) {
            ctx->pc = 0x1A39B8u;
            goto label_1a39b8;
        }
    }
    ctx->pc = 0x1A39B4u;
    // 0x1a39b4: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1a39b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_1a39b8:
    // 0x1a39b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A39B8u;
    {
        const bool branch_taken_0x1a39b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39B8u;
        // 0x1a39bc: 0xae241350  sw          $a0, 0x1350($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39b8) {
            ctx->pc = 0x1A39CCu;
            goto label_1a39cc;
        }
    }
    ctx->pc = 0x1A39C0u;
    // 0x1a39c0: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1a39c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
    // 0x1a39c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a39c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a39c8: 0xac820058  sw          $v0, 0x58($a0)
    ctx->pc = 0x1a39c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 2));
label_1a39cc:
    // 0x1a39cc: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x1A39CCu;
    SET_GPR_U32(ctx, 31, 0x1A39D4u);
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1A39CCu, 0x1A39D4u)) {
        return;
    }
    ctx->pc = 0x1A39D4u;
label_1a39d4:
    // 0x1a39d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a39d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a39d8: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x1a39d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1a39dc: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1a39dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1a39e0: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1a39e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1a39e4: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x1a39e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a39e8: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x1a39e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1a39ec: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x1a39ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x1a39f0: 0xc06896a  jal         func_1A25A8
    ctx->pc = 0x1A39F0u;
    SET_GPR_U32(ctx, 31, 0x1A39F8u);
    ctx->pc = 0x1A39F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A39F0u;
    // 0x1a39f4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A25A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A25A8u, 0x1A39F0u, 0x1A39F8u)) {
        return;
    }
    ctx->pc = 0x1A39F8u;
label_1a39f8:
    // 0x1a39f8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A39F8u;
    {
        const bool branch_taken_0x1a39f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A39F8u;
        // 0x1a39fc: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a39f8) {
            ctx->pc = 0x1A3A34u;
            goto label_1a3a34;
        }
    }
    ctx->pc = 0x1A3A00u;
label_1a3a00:
    // 0x1a3a00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a3a00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3a04: 0xc0685da  jal         func_1A1768
    ctx->pc = 0x1A3A04u;
    SET_GPR_U32(ctx, 31, 0x1A3A0Cu);
    ctx->pc = 0x1A3A08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3A04u;
    // 0x1a3a08: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A1768u, 0x1A3A04u, 0x1A3A0Cu)) {
        return;
    }
    ctx->pc = 0x1A3A0Cu;
label_1a3a0c:
    // 0x1a3a0c: 0x8e231350  lw          $v1, 0x1350($s1)
    ctx->pc = 0x1a3a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4944)));
    // 0x1a3a10: 0x50600007  beql        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3A10u;
    {
        const bool branch_taken_0x1a3a10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3a10) {
            ctx->pc = 0x1A3A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A3A10u;
            // 0x1a3a14: 0xae201350  sw          $zero, 0x1350($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A3A30u;
            goto label_1a3a30;
        }
    }
    ctx->pc = 0x1A3A18u;
    // 0x1a3a18: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x1a3a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x1a3a1c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a3a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a3a20: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A3A20u;
    {
        const bool branch_taken_0x1a3a20 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1A3A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A20u;
        // 0x1a3a24: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3a20) {
            ctx->pc = 0x1A3A2Cu;
            goto label_1a3a2c;
        }
    }
    ctx->pc = 0x1A3A28u;
    // 0x1a3a28: 0xac600058  sw          $zero, 0x58($v1)
    ctx->pc = 0x1a3a28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 0));
label_1a3a2c:
    // 0x1a3a2c: 0xae201350  sw          $zero, 0x1350($s1)
    ctx->pc = 0x1a3a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4944), GPR_U32(ctx, 0));
label_1a3a30:
    // 0x1a3a30: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a3a30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a3a34:
    // 0x1a3a34: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a3a34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a3a38: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a3a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1a3a3c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a3a3cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a3a40: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1a3a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a3a44: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x1a3a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1a3a48: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x1a3a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a3a4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A3A4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A3A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3A4Cu;
        // 0x1a3a50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A3A4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A3A54u;
    // 0x1a3a54: 0x0  nop
    ctx->pc = 0x1a3a54u;
    // NOP
    ctx->pc = 0x1a3a58u;
}
