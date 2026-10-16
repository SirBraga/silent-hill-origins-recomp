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

// Function: sub_002244A8
// Address: 0x2244a8 - 0x224a00
void sub_002244A8_0x2244a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002244A8_0x2244a8");
#endif

    switch (ctx->pc) {
        case 0x2245bcu: goto label_2245bc;
        default: break;
    }

    ctx->pc = 0x2244a8u;

    // 0x2244a8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2244a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2244ac: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x2244acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2244b0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2244b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x2244b4: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2244b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x2244b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2244b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2244bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2244c0: 0x26090148  addiu       $t1, $s0, 0x148
    ctx->pc = 0x2244c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 328));
    // 0x2244c4: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x2244c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x2244c8: 0x26030130  addiu       $v1, $s0, 0x130
    ctx->pc = 0x2244c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2244cc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2244ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x2244d0: 0x26130124  addiu       $s3, $s0, 0x124
    ctx->pc = 0x2244d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    // 0x2244d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2244d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2244d8: 0x26080178  addiu       $t0, $s0, 0x178
    ctx->pc = 0x2244d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x2244dc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2244dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2244e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2244e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2244e4: 0x26020160  addiu       $v0, $s0, 0x160
    ctx->pc = 0x2244e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 352));
    // 0x2244e8: 0xc6010080  lwc1        $f1, 0x80($s0)
    ctx->pc = 0x2244e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2244ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2244ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244f0: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x2244f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2244f4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2244f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2244f8: 0x4601a241  sub.s       $f9, $f20, $f1
    ctx->pc = 0x2244f8u;
    ctx->f[9] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
    // 0x2244fc: 0xc6030068  lwc1        $f3, 0x68($s0)
    ctx->pc = 0x2244fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224500: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x224500u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x224504: 0xc605006c  lwc1        $f5, 0x6C($s0)
    ctx->pc = 0x224504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224508: 0xc6000084  lwc1        $f0, 0x84($s0)
    ctx->pc = 0x224508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22450c: 0x46001907  neg.s       $f4, $f3
    ctx->pc = 0x22450cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[3]);
    // 0x224510: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x224510u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x224514: 0x26120094  addiu       $s2, $s0, 0x94
    ctx->pc = 0x224514u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 148));
    // 0x224518: 0xc60a007c  lwc1        $f10, 0x7C($s0)
    ctx->pc = 0x224518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x22451c: 0x46024ac2  mul.s       $f11, $f9, $f2
    ctx->pc = 0x22451cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[2]);
    // 0x224520: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x224520u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x224524: 0x4600a201  sub.s       $f8, $f20, $f0
    ctx->pc = 0x224524u;
    ctx->f[8] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x224528: 0xe6010144  swc1        $f1, 0x144($s0)
    ctx->pc = 0x224528u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 324), bits); }
    // 0x22452c: 0x26270050  addiu       $a3, $s1, 0x50
    ctx->pc = 0x22452cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x224530: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x224530u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x224534: 0x460b21c0  add.s       $f7, $f4, $f11
    ctx->pc = 0x224534u;
    ctx->f[7] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x224538: 0xe6610008  swc1        $f1, 0x8($s3)
    ctx->pc = 0x224538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 8), bits); }
    // 0x22453c: 0x460b1980  add.s       $f6, $f3, $f11
    ctx->pc = 0x22453cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x224540: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x224540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x224544: 0x460242c2  mul.s       $f11, $f8, $f2
    ctx->pc = 0x224544u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x224548: 0xe6000174  swc1        $f0, 0x174($s0)
    ctx->pc = 0x224548u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 372), bits); }
    // 0x22454c: 0x46002847  neg.s       $f1, $f5
    ctx->pc = 0x22454cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[5]);
    // 0x224550: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x224550u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x224554: 0xe6600038  swc1        $f0, 0x38($s3)
    ctx->pc = 0x224554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 56), bits); }
    // 0x224558: 0x460b2100  add.s       $f4, $f4, $f11
    ctx->pc = 0x224558u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[11]);
    // 0x22455c: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x22455cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x224560: 0xe6060124  swc1        $f6, 0x124($s0)
    ctx->pc = 0x224560u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 292), bits); }
    // 0x224564: 0xe6060148  swc1        $f6, 0x148($s0)
    ctx->pc = 0x224564u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 328), bits); }
    // 0x224568: 0x460a4ac2  mul.s       $f11, $f9, $f10
    ctx->pc = 0x224568u;
    ctx->f[11] = FPU_MUL_S(ctx->f[9], ctx->f[10]);
    // 0x22456c: 0xe607013c  swc1        $f7, 0x13C($s0)
    ctx->pc = 0x22456cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 316), bits); }
    // 0x224570: 0xe667000c  swc1        $f7, 0xC($s3)
    ctx->pc = 0x224570u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 12), bits); }
    // 0x224574: 0xe6030178  swc1        $f3, 0x178($s0)
    ctx->pc = 0x224574u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 376), bits); }
    // 0x224578: 0x460b0880  add.s       $f2, $f1, $f11
    ctx->pc = 0x224578u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x22457c: 0xe6630030  swc1        $f3, 0x30($s3)
    ctx->pc = 0x22457cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 48), bits); }
    // 0x224580: 0x460b2800  add.s       $f0, $f5, $f11
    ctx->pc = 0x224580u;
    ctx->f[0] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x224584: 0xe604016c  swc1        $f4, 0x16C($s0)
    ctx->pc = 0x224584u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x224588: 0x460a42c2  mul.s       $f11, $f8, $f10
    ctx->pc = 0x224588u;
    ctx->f[11] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x22458c: 0xe664003c  swc1        $f4, 0x3C($s3)
    ctx->pc = 0x22458cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x224590: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x224590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x224594: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x224594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
    // 0x224598: 0x460b2940  add.s       $f5, $f5, $f11
    ctx->pc = 0x224598u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[11]);
    // 0x22459c: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x22459cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x2245a0: 0x460b0840  add.s       $f1, $f1, $f11
    ctx->pc = 0x2245a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[11]);
    // 0x2245a4: 0xe662001c  swc1        $f2, 0x1C($s3)
    ctx->pc = 0x2245a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 28), bits); }
    // 0x2245a8: 0xe4450004  swc1        $f5, 0x4($v0)
    ctx->pc = 0x2245a8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2245ac: 0xe6650034  swc1        $f5, 0x34($s3)
    ctx->pc = 0x2245acu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 52), bits); }
    // 0x2245b0: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2245b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x2245b4: 0xc093afa  jal         func_24EBE8
    ctx->pc = 0x2245B4u;
    SET_GPR_U32(ctx, 31, 0x2245BCu);
    ctx->pc = 0x2245B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2245B4u;
    // 0x2245b8: 0xe661004c  swc1        $f1, 0x4C($s3) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 76), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x2245B4u, 0x2245BCu)) {
        return;
    }
    ctx->pc = 0x2245BCu;
label_2245bc:
    // 0x2245bc: 0x6a220077  ldl         $v0, 0x77($s1)
    ctx->pc = 0x2245bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2245c0: 0x6e220070  ldr         $v0, 0x70($s1)
    ctx->pc = 0x2245c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2245c4: 0x8e230078  lw          $v1, 0x78($s1)
    ctx->pc = 0x2245c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x2245c8: 0xb202009b  sdl         $v0, 0x9B($s0)
    ctx->pc = 0x2245c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 155); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2245cc: 0xb6020094  sdr         $v0, 0x94($s0)
    ctx->pc = 0x2245ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 148); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2245d0: 0xae03009c  sw          $v1, 0x9C($s0)
    ctx->pc = 0x2245d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 3));
    // 0x2245d4: 0xc6020094  lwc1        $f2, 0x94($s0)
    ctx->pc = 0x2245d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2245d8: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x2245d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2245dc: 0xc6610034  lwc1        $f1, 0x34($s3)
    ctx->pc = 0x2245dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2245e0: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2245e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2245e4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2245e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2245e8: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x2245e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2245ec: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2245ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2245f0: 0xc6420008  lwc1        $f2, 0x8($s2)
    ctx->pc = 0x2245f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2245f4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2245f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2245f8: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x2245f8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x2245fc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2245fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x224600: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x224600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x224604: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x224604u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x224608: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x224608u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x22460c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224610: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224614: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x224614u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x224618: 0xe640000c  swc1        $f0, 0xC($s2)
    ctx->pc = 0x224618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x22461c: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x22461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x224620: 0xa2430011  sb          $v1, 0x11($s2)
    ctx->pc = 0x224620u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 17), (uint8_t)GPR_U32(ctx, 3));
    // 0x224624: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x224624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x224628: 0xa2440012  sb          $a0, 0x12($s2)
    ctx->pc = 0x224628u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 18), (uint8_t)GPR_U32(ctx, 4));
    // 0x22462c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22462cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x224630: 0xa2420010  sb          $v0, 0x10($s2)
    ctx->pc = 0x224630u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
    // 0x224634: 0xc6000094  lwc1        $f0, 0x94($s0)
    ctx->pc = 0x224634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224638: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x224638u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x22463c: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x22463cu;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x224640: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x224640u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x224644: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x224644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x224648: 0xe6440018  swc1        $f4, 0x18($s2)
    ctx->pc = 0x224648u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
    // 0x22464c: 0xe642001c  swc1        $f2, 0x1C($s2)
    ctx->pc = 0x22464cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
    // 0x224650: 0xc6010124  lwc1        $f1, 0x124($s0)
    ctx->pc = 0x224650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224654: 0xc6630004  lwc1        $f3, 0x4($s3)
    ctx->pc = 0x224654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224658: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x224658u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x22465c: 0xc6650008  lwc1        $f5, 0x8($s3)
    ctx->pc = 0x22465cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224660: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x224660u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x224664: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x224664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x224668: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x224668u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x22466c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x22466cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x224670: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x224670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x224674: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x224674u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x224678: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x224678u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x22467c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x22467cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x224680: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x224680u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x224684: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22468c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224690: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x224690u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
    // 0x224694: 0xa2440024  sb          $a0, 0x24($s2)
    ctx->pc = 0x224694u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 36), (uint8_t)GPR_U32(ctx, 4));
    // 0x224698: 0xa2420025  sb          $v0, 0x25($s2)
    ctx->pc = 0x224698u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 37), (uint8_t)GPR_U32(ctx, 2));
    // 0x22469c: 0xa2430026  sb          $v1, 0x26($s2)
    ctx->pc = 0x22469cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 38), (uint8_t)GPR_U32(ctx, 3));
    // 0x2246a0: 0xe6410020  swc1        $f1, 0x20($s2)
    ctx->pc = 0x2246a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2246a4: 0xc667000c  lwc1        $f7, 0xC($s3)
    ctx->pc = 0x2246a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2246a8: 0xc662003c  lwc1        $f2, 0x3C($s3)
    ctx->pc = 0x2246a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2246ac: 0xc6660010  lwc1        $f6, 0x10($s3)
    ctx->pc = 0x2246acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2246b0: 0xc6680040  lwc1        $f8, 0x40($s3)
    ctx->pc = 0x2246b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2246b4: 0x460239c1  sub.s       $f7, $f7, $f2
    ctx->pc = 0x2246b4u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[2]);
    // 0x2246b8: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x2246b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2246bc: 0xc6610044  lwc1        $f1, 0x44($s3)
    ctx->pc = 0x2246bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2246c0: 0x46083181  sub.s       $f6, $f6, $f8
    ctx->pc = 0x2246c0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[8]);
    // 0x2246c4: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x2246c4u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2246c8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2246c8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2246cc: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2246ccu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2246d0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2246d0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2246d4: 0xc6600048  lwc1        $f0, 0x48($s3)
    ctx->pc = 0x2246d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2246d8: 0xc664004c  lwc1        $f4, 0x4C($s3)
    ctx->pc = 0x2246d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2246dc: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2246dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2246e0: 0xc6630050  lwc1        $f3, 0x50($s3)
    ctx->pc = 0x2246e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2246e4: 0x46082101  sub.s       $f4, $f4, $f8
    ctx->pc = 0x2246e4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[8]);
    // 0x2246e8: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x2246e8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2246ec: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x2246ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2246f0: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x2246f0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2246f4: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x2246f4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2246f8: 0x46033042  mul.s       $f1, $f6, $f3
    ctx->pc = 0x2246f8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[3]);
    // 0x2246fc: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2246fcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x224700: 0x46043882  mul.s       $f2, $f7, $f4
    ctx->pc = 0x224700u;
    ctx->f[2] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
    // 0x224704: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x224704u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x224708: 0x460339c2  mul.s       $f7, $f7, $f3
    ctx->pc = 0x224708u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[3]);
    // 0x22470c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x22470cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x224710: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x224710u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x224714: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x224714u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x224718: 0x46050841  sub.s       $f1, $f1, $f5
    ctx->pc = 0x224718u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
    // 0x22471c: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x22471cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x224720: 0xe640002c  swc1        $f0, 0x2C($s2)
    ctx->pc = 0x224720u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x224724: 0xe6410028  swc1        $f1, 0x28($s2)
    ctx->pc = 0x224724u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x224728: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x224728u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x22472c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22472cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224730: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x224730u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x224734: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224734u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224738: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22473c: 0x46010204  c1          0x10204
    ctx->pc = 0x22473cu;
    ctx->f[8] = FPU_SQRT_S(ctx->f[1]);
    // 0x224740: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224740u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224744: 0x0  nop
    ctx->pc = 0x224744u;
    // NOP
    // 0x224748: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x224748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22474c: 0x0  nop
    ctx->pc = 0x22474cu;
    // NOP
    // 0x224750: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224750u;
    {
        const bool branch_taken_0x224750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224750u;
        // 0x224754: 0xc6400028  lwc1        $f0, 0x28($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224750) {
            ctx->pc = 0x224768u;
            goto label_224768;
        }
    }
    ctx->pc = 0x224758u;
    // 0x224758: 0x0  nop
    ctx->pc = 0x224758u;
    // NOP
    // 0x22475c: 0x0  nop
    ctx->pc = 0x22475cu;
    // NOP
    // 0x224760: 0x4608a203  div.s       $f8, $f20, $f8
    ctx->pc = 0x224760u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[8]);
    // 0x224764: 0x0  nop
    ctx->pc = 0x224764u;
    // NOP
label_224768:
    // 0x224768: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x224768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22476c: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x22476cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x224770: 0x46080002  mul.s       $f0, $f0, $f8
    ctx->pc = 0x224770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[8]);
    // 0x224774: 0x46080842  mul.s       $f1, $f1, $f8
    ctx->pc = 0x224774u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[8]);
    // 0x224778: 0x46081082  mul.s       $f2, $f2, $f8
    ctx->pc = 0x224778u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[8]);
    // 0x22477c: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x22477cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x224780: 0xe641002c  swc1        $f1, 0x2C($s2)
    ctx->pc = 0x224780u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
    // 0x224784: 0xe6420030  swc1        $f2, 0x30($s2)
    ctx->pc = 0x224784u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x224788: 0xc663000c  lwc1        $f3, 0xC($s3)
    ctx->pc = 0x224788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x22478c: 0xc6640010  lwc1        $f4, 0x10($s3)
    ctx->pc = 0x22478cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x224790: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x224790u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x224794: 0xc6650014  lwc1        $f5, 0x14($s3)
    ctx->pc = 0x224794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224798: 0x46012102  mul.s       $f4, $f4, $f1
    ctx->pc = 0x224798u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x22479c: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x22479cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x2247a0: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x2247a0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x2247a4: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2247a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x2247a8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2247a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2247ac: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2247acu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2247b0: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x2247b0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x2247b4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2247b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2247b8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2247b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2247bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2247bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2247c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2247c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2247c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2247c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2247c8: 0x460518c0  add.s       $f3, $f3, $f5
    ctx->pc = 0x2247c8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[5]);
    // 0x2247cc: 0xa2440038  sb          $a0, 0x38($s2)
    ctx->pc = 0x2247ccu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 56), (uint8_t)GPR_U32(ctx, 4));
    // 0x2247d0: 0xa2420039  sb          $v0, 0x39($s2)
    ctx->pc = 0x2247d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 57), (uint8_t)GPR_U32(ctx, 2));
    // 0x2247d4: 0xa243003a  sb          $v1, 0x3A($s2)
    ctx->pc = 0x2247d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 58), (uint8_t)GPR_U32(ctx, 3));
    // 0x2247d8: 0xe6430034  swc1        $f3, 0x34($s2)
    ctx->pc = 0x2247d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 52), bits); }
    // 0x2247dc: 0xc6620030  lwc1        $f2, 0x30($s3)
    ctx->pc = 0x2247dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2247e0: 0xc660003c  lwc1        $f0, 0x3C($s3)
    ctx->pc = 0x2247e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247e4: 0xc6640034  lwc1        $f4, 0x34($s3)
    ctx->pc = 0x2247e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2247e8: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2247e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2247ec: 0xc6610040  lwc1        $f1, 0x40($s3)
    ctx->pc = 0x2247ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2247f0: 0xc6630038  lwc1        $f3, 0x38($s3)
    ctx->pc = 0x2247f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2247f4: 0xc6600044  lwc1        $f0, 0x44($s3)
    ctx->pc = 0x2247f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2247f8: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2247f8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
    // 0x2247fc: 0xe7a20010  swc1        $f2, 0x10($sp)
    ctx->pc = 0x2247fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x224800: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x224800u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x224804: 0xe7a40014  swc1        $f4, 0x14($sp)
    ctx->pc = 0x224804u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x224808: 0xe7a30018  swc1        $f3, 0x18($sp)
    ctx->pc = 0x224808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x22480c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x22480cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224810: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x224810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224814: 0x46011182  mul.s       $f6, $f2, $f1
    ctx->pc = 0x224814u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x224818: 0x46012042  mul.s       $f1, $f4, $f1
    ctx->pc = 0x224818u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x22481c: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x22481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x224820: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x224820u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x224824: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x224824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x224828: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x224828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x22482c: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x22482cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x224830: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x224830u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x224834: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x224834u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
    // 0x224838: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x224838u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x22483c: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x22483cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x224840: 0xe6420044  swc1        $f2, 0x44($s2)
    ctx->pc = 0x224840u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x224844: 0xe641003c  swc1        $f1, 0x3C($s2)
    ctx->pc = 0x224844u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x224848: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x224848u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x22484c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x22484cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x224850: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x224850u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x224854: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x224854u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x224858: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x224858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x22485c: 0x46010204  c1          0x10204
    ctx->pc = 0x22485cu;
    ctx->f[8] = FPU_SQRT_S(ctx->f[1]);
    // 0x224860: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x224860u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224864: 0x0  nop
    ctx->pc = 0x224864u;
    // NOP
    // 0x224868: 0x46080034  c.lt.s      $f0, $f8
    ctx->pc = 0x224868u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22486c: 0x0  nop
    ctx->pc = 0x22486cu;
    // NOP
    // 0x224870: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x224870u;
    {
        const bool branch_taken_0x224870 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x224874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x224870u;
        // 0x224874: 0xc644003c  lwc1        $f4, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x224870) {
            ctx->pc = 0x224888u;
            goto label_224888;
        }
    }
    ctx->pc = 0x224878u;
    // 0x224878: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x224878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x22487c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x22487cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x224880: 0x0  nop
    ctx->pc = 0x224880u;
    // NOP
    // 0x224884: 0x46080203  div.s       $f8, $f0, $f8
    ctx->pc = 0x224884u;
    ctx->f[8] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[8]);
label_224888:
    // 0x224888: 0xc6450040  lwc1        $f5, 0x40($s2)
    ctx->pc = 0x224888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x22488c: 0xc6460044  lwc1        $f6, 0x44($s2)
    ctx->pc = 0x22488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x224890: 0x46082102  mul.s       $f4, $f4, $f8
    ctx->pc = 0x224890u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[8]);
    // 0x224894: 0x46082942  mul.s       $f5, $f5, $f8
    ctx->pc = 0x224894u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[8]);
    // 0x224898: 0x46083182  mul.s       $f6, $f6, $f8
    ctx->pc = 0x224898u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[8]);
    // 0x22489c: 0xe644003c  swc1        $f4, 0x3C($s2)
    ctx->pc = 0x22489cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x2248a0: 0xe6450040  swc1        $f5, 0x40($s2)
    ctx->pc = 0x2248a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x2248a4: 0xe6460044  swc1        $f6, 0x44($s2)
    ctx->pc = 0x2248a4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x2248a8: 0xc661000c  lwc1        $f1, 0xC($s3)
    ctx->pc = 0x2248a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2248ac: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x2248acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2248b0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2248b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x2248b4: 0xc6620014  lwc1        $f2, 0x14($s3)
    ctx->pc = 0x2248b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2248b8: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x2248b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
    // 0x2248bc: 0x8e44003c  lw          $a0, 0x3C($s2)
    ctx->pc = 0x2248bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 60)));
    // 0x2248c0: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2248c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2248c4: 0x8e420040  lw          $v0, 0x40($s2)
    ctx->pc = 0x2248c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x2248c8: 0x8e430044  lw          $v1, 0x44($s2)
    ctx->pc = 0x2248c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x2248cc: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2248ccu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2248d0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2248d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2248d4: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2248d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2248d8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2248d8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2248dc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2248dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2248e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2248e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2248e4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2248e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2248e8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2248e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2248ec: 0xa244004c  sb          $a0, 0x4C($s2)
    ctx->pc = 0x2248ecu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 76), (uint8_t)GPR_U32(ctx, 4));
    // 0x2248f0: 0xa242004d  sb          $v0, 0x4D($s2)
    ctx->pc = 0x2248f0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 77), (uint8_t)GPR_U32(ctx, 2));
    // 0x2248f4: 0xa243004e  sb          $v1, 0x4E($s2)
    ctx->pc = 0x2248f4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 78), (uint8_t)GPR_U32(ctx, 3));
    // 0x2248f8: 0xe6410048  swc1        $f1, 0x48($s2)
    ctx->pc = 0x2248f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x2248fc: 0xc6400028  lwc1        $f0, 0x28($s2)
    ctx->pc = 0x2248fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224900: 0xc641002c  lwc1        $f1, 0x2C($s2)
    ctx->pc = 0x224900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224904: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x224904u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x224908: 0xc6420030  lwc1        $f2, 0x30($s2)
    ctx->pc = 0x224908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22490c: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x22490cu;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x224910: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x224910u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x224914: 0xe6400050  swc1        $f0, 0x50($s2)
    ctx->pc = 0x224914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 80), bits); }
    // 0x224918: 0xe6410054  swc1        $f1, 0x54($s2)
    ctx->pc = 0x224918u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 84), bits); }
    // 0x22491c: 0xe6420058  swc1        $f2, 0x58($s2)
    ctx->pc = 0x22491cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 88), bits); }
    // 0x224920: 0xc6630024  lwc1        $f3, 0x24($s3)
    ctx->pc = 0x224920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x224924: 0xc6670028  lwc1        $f7, 0x28($s3)
    ctx->pc = 0x224924u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x224928: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x224928u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x22492c: 0xc668002c  lwc1        $f8, 0x2C($s3)
    ctx->pc = 0x22492cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x224930: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x224930u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x224934: 0x8e440050  lw          $a0, 0x50($s2)
    ctx->pc = 0x224934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x224938: 0x46024202  mul.s       $f8, $f8, $f2
    ctx->pc = 0x224938u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[2]);
    // 0x22493c: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x22493cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x224940: 0x8e430058  lw          $v1, 0x58($s2)
    ctx->pc = 0x224940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 88)));
    // 0x224944: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x224944u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x224948: 0x460718c0  add.s       $f3, $f3, $f7
    ctx->pc = 0x224948u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[7]);
    // 0x22494c: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x22494cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x224950: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x224950u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x224954: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x224954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x224958: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x224958u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22495c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22495cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x224960: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x224960u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x224964: 0xa2440060  sb          $a0, 0x60($s2)
    ctx->pc = 0x224964u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 96), (uint8_t)GPR_U32(ctx, 4));
    // 0x224968: 0xa2420061  sb          $v0, 0x61($s2)
    ctx->pc = 0x224968u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 97), (uint8_t)GPR_U32(ctx, 2));
    // 0x22496c: 0xa2430062  sb          $v1, 0x62($s2)
    ctx->pc = 0x22496cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 98), (uint8_t)GPR_U32(ctx, 3));
    // 0x224970: 0xe643005c  swc1        $f3, 0x5C($s2)
    ctx->pc = 0x224970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 92), bits); }
    // 0x224974: 0x46002107  neg.s       $f4, $f4
    ctx->pc = 0x224974u;
    ctx->f[4] = FPU_NEG_S(ctx->f[4]);
    // 0x224978: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x224978u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x22497c: 0xe6440064  swc1        $f4, 0x64($s2)
    ctx->pc = 0x22497cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 100), bits); }
    // 0x224980: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x224980u;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
    // 0x224984: 0xe6450068  swc1        $f5, 0x68($s2)
    ctx->pc = 0x224984u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 104), bits); }
    // 0x224988: 0xe646006c  swc1        $f6, 0x6C($s2)
    ctx->pc = 0x224988u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 108), bits); }
    // 0x22498c: 0xc6600024  lwc1        $f0, 0x24($s3)
    ctx->pc = 0x22498cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x224990: 0xc6610028  lwc1        $f1, 0x28($s3)
    ctx->pc = 0x224990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x224994: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x224994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x224998: 0xc662002c  lwc1        $f2, 0x2C($s3)
    ctx->pc = 0x224998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x22499c: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x22499cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x2249a0: 0x8e440064  lw          $a0, 0x64($s2)
    ctx->pc = 0x2249a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x2249a4: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2249a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
    // 0x2249a8: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x2249a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x2249ac: 0x8e42006c  lw          $v0, 0x6C($s2)
    ctx->pc = 0x2249acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x2249b0: 0x427c3  sra         $a0, $a0, 31
    ctx->pc = 0x2249b0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 31));
    // 0x2249b4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2249b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2249b8: 0x31fc3  sra         $v1, $v1, 31
    ctx->pc = 0x2249b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 31));
    // 0x2249bc: 0x217c3  sra         $v0, $v0, 31
    ctx->pc = 0x2249bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 31));
    // 0x2249c0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2249c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2249c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2249c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2249c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2249c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2249cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2249ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2249d0: 0xa2420076  sb          $v0, 0x76($s2)
    ctx->pc = 0x2249d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 118), (uint8_t)GPR_U32(ctx, 2));
    // 0x2249d4: 0xa2440074  sb          $a0, 0x74($s2)
    ctx->pc = 0x2249d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 116), (uint8_t)GPR_U32(ctx, 4));
    // 0x2249d8: 0xa2430075  sb          $v1, 0x75($s2)
    ctx->pc = 0x2249d8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 117), (uint8_t)GPR_U32(ctx, 3));
    // 0x2249dc: 0xe6400070  swc1        $f0, 0x70($s2)
    ctx->pc = 0x2249dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 112), bits); }
    // 0x2249e0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2249e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2249e4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2249e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2249e8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2249e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2249ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2249ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2249f0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2249f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2249f4: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x2249f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2249f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2249F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2249FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2249F8u;
        // 0x2249fc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2249F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x224A00u;
}
