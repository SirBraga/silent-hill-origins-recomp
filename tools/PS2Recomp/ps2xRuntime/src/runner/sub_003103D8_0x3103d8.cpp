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

// Function: sub_003103D8
// Address: 0x3103d8 - 0x310750
void sub_003103D8_0x3103d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003103D8_0x3103d8");
#endif

    switch (ctx->pc) {
        case 0x3105c8u: goto label_3105c8;
        case 0x310674u: goto label_310674;
        default: break;
    }

    ctx->pc = 0x3103d8u;

    // 0x3103d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3103d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3103dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3103dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3103e0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3103e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3103e4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3103e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3103e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3103e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3103ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3103ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103f0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3103f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3103f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x3103f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3103f8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3103f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3103fc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x3103fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310400: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x310400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x310404: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x310404u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x310408: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x310408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x31040c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x31040cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x310410: 0x6a420007  ldl         $v0, 0x7($s2)
    ctx->pc = 0x310410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x310414: 0x6e420000  ldr         $v0, 0x0($s2)
    ctx->pc = 0x310414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x310418: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x310418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31041c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x31041cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310420: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x310420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310424: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x310424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x310428: 0xc7b40008  lwc1        $f20, 0x8($sp)
    ctx->pc = 0x310428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x31042c: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x31042cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x310430: 0xc7808344  lwc1        $f0, -0x7CBC($gp)
    ctx->pc = 0x310430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310434: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x310434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310438: 0x4500005a  bc1f        . + 4 + (0x5A << 2)
    ctx->pc = 0x310438u;
    {
        const bool branch_taken_0x310438 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310438) {
            ctx->pc = 0x3105A4u;
            goto label_3105a4;
        }
    }
    ctx->pc = 0x310440u;
    // 0x310440: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x310440u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x310444: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x310444u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x310448: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x310448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x31044c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x31044cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x310450: 0xb2070007  sdl         $a3, 0x7($s0)
    ctx->pc = 0x310450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310454: 0xb6070000  sdr         $a3, 0x0($s0)
    ctx->pc = 0x310454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310458: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x310458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x31045c: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x31045cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310460: 0x0  nop
    ctx->pc = 0x310460u;
    // NOP
    // 0x310464: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
    ctx->pc = 0x310464u;
    {
        const bool branch_taken_0x310464 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x310464) {
            ctx->pc = 0x310468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x310464u;
            // 0x310468: 0xc6220040  lwc1        $f2, 0x40($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3104A8u;
            goto label_3104a8;
        }
    }
    ctx->pc = 0x31046Cu;
    // 0x31046c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x31046cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310470: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x310470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310474: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x310474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x310478: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x310478u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x31047c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x31047cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x310480: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x310480u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x310484: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x310484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x310488: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x310488u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x31048c: 0xe6020008  swc1        $f2, 0x8($s0)
    ctx->pc = 0x31048cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x310490: 0x2ca50001  sltiu       $a1, $a1, 0x1
    ctx->pc = 0x310490u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x310494: 0x4605a034  c.lt.s      $f20, $f5
    ctx->pc = 0x310494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x310498: 0x0  nop
    ctx->pc = 0x310498u;
    // NOP
    // 0x31049c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x31049Cu;
    {
        const bool branch_taken_0x31049c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3104A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31049Cu;
        // 0x3104a0: 0xc6220040  lwc1        $f2, 0x40($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31049c) {
            ctx->pc = 0x3104A8u;
            goto label_3104a8;
        }
    }
    ctx->pc = 0x3104A4u;
    // 0x3104a4: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x3104a4u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_3104a8:
    // 0x3104a8: 0xc6230044  lwc1        $f3, 0x44($s1)
    ctx->pc = 0x3104a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3104ac: 0xc7808348  lwc1        $f0, -0x7CB8($gp)
    ctx->pc = 0x3104acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3104b0: 0x14a0001d  bnez        $a1, . + 4 + (0x1D << 2)
    ctx->pc = 0x3104B0u;
    {
        const bool branch_taken_0x3104b0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3104B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3104B0u;
        // 0x3104b4: 0x46001902  mul.s       $f4, $f3, $f0 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3104b0) {
            ctx->pc = 0x310528u;
            goto label_310528;
        }
    }
    ctx->pc = 0x3104B8u;
    // 0x3104b8: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x3104b8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x3104bc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3104bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3104c0: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x3104c0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x3104c4: 0xe4450064  swc1        $f5, 0x64($v0)
    ctx->pc = 0x3104c4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x3104c8: 0xe4410070  swc1        $f1, 0x70($v0)
    ctx->pc = 0x3104c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
    // 0x3104cc: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x3104ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x3104d0: 0xe4440074  swc1        $f4, 0x74($v0)
    ctx->pc = 0x3104d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x3104d4: 0xe4420078  swc1        $f2, 0x78($v0)
    ctx->pc = 0x3104d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x3104d8: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x3104d8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x3104dc: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x3104dcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x3104e0: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x3104e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3104e4: 0xe4440010  swc1        $f4, 0x10($v0)
    ctx->pc = 0x3104e4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3104e8: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x3104e8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3104ec: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x3104ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x3104f0: 0xe4430020  swc1        $f3, 0x20($v0)
    ctx->pc = 0x3104f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3104f4: 0xe4450024  swc1        $f5, 0x24($v0)
    ctx->pc = 0x3104f4u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3104f8: 0xe4420028  swc1        $f2, 0x28($v0)
    ctx->pc = 0x3104f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3104fc: 0xe4440030  swc1        $f4, 0x30($v0)
    ctx->pc = 0x3104fcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x310500: 0xe4410034  swc1        $f1, 0x34($v0)
    ctx->pc = 0x310500u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x310504: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x310504u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x310508: 0xe4450040  swc1        $f5, 0x40($v0)
    ctx->pc = 0x310508u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x31050c: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x31050cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x310510: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x310510u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x310514: 0xe4410050  swc1        $f1, 0x50($v0)
    ctx->pc = 0x310514u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x310518: 0xe4410054  swc1        $f1, 0x54($v0)
    ctx->pc = 0x310518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x31051c: 0xe4420058  swc1        $f2, 0x58($v0)
    ctx->pc = 0x31051cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x310520: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x310520u;
    {
        const bool branch_taken_0x310520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310520u;
        // 0x310524: 0xe4420068  swc1        $f2, 0x68($v0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310520) {
            ctx->pc = 0x310594u;
            goto label_310594;
        }
    }
    ctx->pc = 0x310528u;
label_310528:
    // 0x310528: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x310528u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x31052c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x31052cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x310530: 0x46001847  neg.s       $f1, $f3
    ctx->pc = 0x310530u;
    ctx->f[1] = FPU_NEG_S(ctx->f[3]);
    // 0x310534: 0xe4430060  swc1        $f3, 0x60($v0)
    ctx->pc = 0x310534u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
    // 0x310538: 0xe4400054  swc1        $f0, 0x54($v0)
    ctx->pc = 0x310538u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 84), bits); }
    // 0x31053c: 0xe4410044  swc1        $f1, 0x44($v0)
    ctx->pc = 0x31053cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
    // 0x310540: 0xe4450064  swc1        $f5, 0x64($v0)
    ctx->pc = 0x310540u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 100), bits); }
    // 0x310544: 0xe4440074  swc1        $f4, 0x74($v0)
    ctx->pc = 0x310544u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 116), bits); }
    // 0x310548: 0xe4420078  swc1        $f2, 0x78($v0)
    ctx->pc = 0x310548u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
    // 0x31054c: 0xe4450000  swc1        $f5, 0x0($v0)
    ctx->pc = 0x31054cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x310550: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x310550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x310554: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x310554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x310558: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x310558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x31055c: 0xe4440014  swc1        $f4, 0x14($v0)
    ctx->pc = 0x31055cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x310560: 0xe4420018  swc1        $f2, 0x18($v0)
    ctx->pc = 0x310560u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x310564: 0xe4410020  swc1        $f1, 0x20($v0)
    ctx->pc = 0x310564u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x310568: 0xe4450024  swc1        $f5, 0x24($v0)
    ctx->pc = 0x310568u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x31056c: 0xe4420028  swc1        $f2, 0x28($v0)
    ctx->pc = 0x31056cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x310570: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x310570u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x310574: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x310574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x310578: 0xe4420038  swc1        $f2, 0x38($v0)
    ctx->pc = 0x310578u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x31057c: 0xe4450040  swc1        $f5, 0x40($v0)
    ctx->pc = 0x31057cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
    // 0x310580: 0xe4420048  swc1        $f2, 0x48($v0)
    ctx->pc = 0x310580u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
    // 0x310584: 0xe4440050  swc1        $f4, 0x50($v0)
    ctx->pc = 0x310584u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 80), bits); }
    // 0x310588: 0xe4420058  swc1        $f2, 0x58($v0)
    ctx->pc = 0x310588u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
    // 0x31058c: 0xe4420068  swc1        $f2, 0x68($v0)
    ctx->pc = 0x31058cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 104), bits); }
    // 0x310590: 0xe4440070  swc1        $f4, 0x70($v0)
    ctx->pc = 0x310590u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 112), bits); }
label_310594:
    // 0x310594: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x310594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x310598: 0xe602000c  swc1        $f2, 0xC($s0)
    ctx->pc = 0x310598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
    // 0x31059c: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x31059Cu;
    {
        const bool branch_taken_0x31059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3105A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31059Cu;
        // 0x3105a0: 0xa6020054  sh          $v0, 0x54($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31059c) {
            ctx->pc = 0x310730u;
            goto label_310730;
        }
    }
    ctx->pc = 0x3105A4u;
label_3105a4:
    // 0x3105a4: 0x4600a045  abs.s       $f1, $f20
    ctx->pc = 0x3105a4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[20]);
    // 0x3105a8: 0xc780834c  lwc1        $f0, -0x7CB4($gp)
    ctx->pc = 0x3105a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3105ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3105acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3105b0: 0x0  nop
    ctx->pc = 0x3105b0u;
    // NOP
    // 0x3105b4: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
    ctx->pc = 0x3105B4u;
    {
        const bool branch_taken_0x3105b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3105B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105B4u;
        // 0x3105b8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105b4) {
            ctx->pc = 0x310668u;
            goto label_310668;
        }
    }
    ctx->pc = 0x3105BCu;
    // 0x3105bc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x3105bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x3105c0: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x3105C0u;
    SET_GPR_U32(ctx, 31, 0x3105C8u);
    ctx->pc = 0x3105C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3105C0u;
    // 0x3105c4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x3105C0u, 0x3105C8u)) {
        return;
    }
    ctx->pc = 0x3105C8u;
label_3105c8:
    // 0x3105c8: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x3105c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3105cc: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x3105ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3105d0: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x3105d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3105d4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3105d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3105d8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x3105d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x3105dc: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x3105dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3105e0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x3105e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3105e4: 0xc6210040  lwc1        $f1, 0x40($s1)
    ctx->pc = 0x3105e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3105e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3105e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3105ec: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3105ecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3105f0: 0x0  nop
    ctx->pc = 0x3105f0u;
    // NOP
    // 0x3105f4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x3105F4u;
    {
        const bool branch_taken_0x3105f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3105F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3105F4u;
        // 0x3105f8: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3105f4) {
            ctx->pc = 0x310608u;
            goto label_310608;
        }
    }
    ctx->pc = 0x3105FCu;
    // 0x3105fc: 0x46000807  neg.s       $f0, $f1
    ctx->pc = 0x3105fcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[1]);
    // 0x310600: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x310600u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x310604: 0x0  nop
    ctx->pc = 0x310604u;
    // NOP
label_310608:
    // 0x310608: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x310608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x31060c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31060cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310610: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x310610u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x310614: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x310614u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x310618: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x310618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x31061c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x31061cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x310620: 0xb2050017  sdl         $a1, 0x17($s0)
    ctx->pc = 0x310620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310624: 0xb6050010  sdr         $a1, 0x10($s0)
    ctx->pc = 0x310624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310628: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x310628u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
    // 0x31062c: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x31062cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x310630: 0x6a430007  ldl         $v1, 0x7($s2)
    ctx->pc = 0x310630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x310634: 0x6e430000  ldr         $v1, 0x0($s2)
    ctx->pc = 0x310634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x310638: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x310638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x31063c: 0xb2030007  sdl         $v1, 0x7($s0)
    ctx->pc = 0x31063cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310640: 0xb6030000  sdr         $v1, 0x0($s0)
    ctx->pc = 0x310640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310644: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x310644u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
    // 0x310648: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x310648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x31064c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x31064cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310650: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x310650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310654: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x310654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x310658: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x310658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x31065c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x31065cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310660: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x310660u;
    {
        const bool branch_taken_0x310660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310660u;
        // 0x310664: 0xc4420008  lwc1        $f2, 0x8($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x310660) {
            ctx->pc = 0x310718u;
            goto label_310718;
        }
    }
    ctx->pc = 0x310668u;
label_310668:
    // 0x310668: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x310668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x31066c: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x31066Cu;
    SET_GPR_U32(ctx, 31, 0x310674u);
    ctx->pc = 0x310670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31066Cu;
    // 0x310670: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x31066Cu, 0x310674u)) {
        return;
    }
    ctx->pc = 0x310674u;
label_310674:
    // 0x310674: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x310674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310678: 0xc6220044  lwc1        $f2, 0x44($s1)
    ctx->pc = 0x310678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31067c: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x31067cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310680: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x310680u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x310684: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x310684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x310688: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x310688u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x31068c: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x31068cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x310690: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x310690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x310694: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x310694u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x310698: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x310698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x31069c: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x31069cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3106a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3106a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3106a4: 0x6ba70007  ldl         $a3, 0x7($sp)
    ctx->pc = 0x3106a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x3106a8: 0x6fa70000  ldr         $a3, 0x0($sp)
    ctx->pc = 0x3106a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x3106ac: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3106acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3106b0: 0xb2070017  sdl         $a3, 0x17($s0)
    ctx->pc = 0x3106b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106b4: 0xb6070010  sdr         $a3, 0x10($s0)
    ctx->pc = 0x3106b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106b8: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x3106b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x3106bc: 0xc6200040  lwc1        $f0, 0x40($s1)
    ctx->pc = 0x3106bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3106c0: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x3106c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3106c4: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x3106c4u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x3106c8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3106c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3106cc: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x3106ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3106d0: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x3106d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3106d4: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x3106d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3106d8: 0xb0460017  sdl         $a2, 0x17($v0)
    ctx->pc = 0x3106d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106dc: 0xb4460010  sdr         $a2, 0x10($v0)
    ctx->pc = 0x3106dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106e0: 0xac470018  sw          $a3, 0x18($v0)
    ctx->pc = 0x3106e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 7));
    // 0x3106e4: 0xa6030054  sh          $v1, 0x54($s0)
    ctx->pc = 0x3106e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 84), (uint16_t)GPR_U32(ctx, 3));
    // 0x3106e8: 0x6a460007  ldl         $a2, 0x7($s2)
    ctx->pc = 0x3106e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x3106ec: 0x6e460000  ldr         $a2, 0x0($s2)
    ctx->pc = 0x3106ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x3106f0: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x3106f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3106f4: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x3106f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106f8: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x3106f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3106fc: 0xae070008  sw          $a3, 0x8($s0)
    ctx->pc = 0x3106fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
    // 0x310700: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x310700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x310704: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x310704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310708: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x310708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x31070c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x31070cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x310710: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x310710u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x310714: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x310714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_310718:
    // 0x310718: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x310718u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x31071c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x31071cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x310720: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x310720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x310724: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x310724u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x310728: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x310728u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x31072c: 0xe600000c  swc1        $f0, 0xC($s0)
    ctx->pc = 0x31072cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_310730:
    // 0x310730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x310730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310734: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x310734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x310738: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x310738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x31073c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x31073cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x310740: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x310740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x310744: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x310744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x310748: 0x3e00008  jr          $ra
    ctx->pc = 0x310748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310748u;
        // 0x31074c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310750u;
}
