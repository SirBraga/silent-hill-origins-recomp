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

// Function: sub_0012B3F0
// Address: 0x12b3f0 - 0x12b580
void sub_0012B3F0_0x12b3f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012B3F0_0x12b3f0");
#endif

    switch (ctx->pc) {
        case 0x12b418u: goto label_12b418;
        case 0x12b564u: goto label_12b564;
        default: break;
    }

    ctx->pc = 0x12b3f0u;

    // 0x12b3f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x12b3f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x12b3f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x12b3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x12b3f8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x12b3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x12b3fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12b3fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b400: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12b400u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12b404: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x12b404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x12b408: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x12b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x12b40c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12b40cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x12b410: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x12B410u;
    SET_GPR_U32(ctx, 31, 0x12B418u);
    ctx->pc = 0x12B414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B410u;
    // 0x12b414: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12B410u, 0x12B418u)) {
        return;
    }
    ctx->pc = 0x12B418u;
label_12b418:
    // 0x12b418: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12b418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x12b41c: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12b41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x12b420: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12b420u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x12b424: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x12b424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b428: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x12b428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x12b42c: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x12b42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x12b430: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x12b430u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
    // 0x12b434: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12b434u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12b438: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x12b438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b43c: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x12b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b440: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x12b440u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x12b444: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x12b444u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b448: 0x0  nop
    ctx->pc = 0x12b448u;
    // NOP
    // 0x12b44c: 0x45020040  bc1fl       . + 4 + (0x40 << 2)
    ctx->pc = 0x12B44Cu;
    {
        const bool branch_taken_0x12b44c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b44c) {
            ctx->pc = 0x12B450u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B44Cu;
            // 0x12b450: 0x8e222d2c  lw          $v0, 0x2D2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B550u;
            goto label_12b550;
        }
    }
    ctx->pc = 0x12B454u;
    // 0x12b454: 0xc6202d34  lwc1        $f0, 0x2D34($s1)
    ctx->pc = 0x12b454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11572)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x12b458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b45c: 0x0  nop
    ctx->pc = 0x12b45cu;
    // NOP
    // 0x12b460: 0x4502003b  bc1fl       . + 4 + (0x3B << 2)
    ctx->pc = 0x12B460u;
    {
        const bool branch_taken_0x12b460 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b460) {
            ctx->pc = 0x12B464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B460u;
            // 0x12b464: 0x8e222d2c  lw          $v0, 0x2D2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B550u;
            goto label_12b550;
        }
    }
    ctx->pc = 0x12B468u;
    // 0x12b468: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x12b468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x12b46c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x12b46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12b470: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12b470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b474: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x12b474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b478: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x12b478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x12b47c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x12b47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b480: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12b480u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x12b484: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x12b484u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x12b488: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x12b488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x12b48c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x12b48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x12b490: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x12b490u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x12b494: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12b494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x12b498: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12b498u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x12b49c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12b49cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x12b4a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12b4a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x12b4a4: 0x0  nop
    ctx->pc = 0x12b4a4u;
    // NOP
    // 0x12b4a8: 0x0  nop
    ctx->pc = 0x12b4a8u;
    // NOP
    // 0x12b4ac: 0x460000c4  c1          0xC4
    ctx->pc = 0x12b4acu;
    ctx->f[3] = FPU_SQRT_S(ctx->f[0]);
    // 0x12b4b0: 0xc6212d3c  lwc1        $f1, 0x2D3C($s1)
    ctx->pc = 0x12b4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12b4b4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x12b4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b4b8: 0x0  nop
    ctx->pc = 0x12b4b8u;
    // NOP
    // 0x12b4bc: 0x45020024  bc1fl       . + 4 + (0x24 << 2)
    ctx->pc = 0x12B4BCu;
    {
        const bool branch_taken_0x12b4bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b4bc) {
            ctx->pc = 0x12B4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B4BCu;
            // 0x12b4c0: 0x8e222d2c  lw          $v0, 0x2D2C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B550u;
            goto label_12b550;
        }
    }
    ctx->pc = 0x12B4C4u;
    // 0x12b4c4: 0xc6202d38  lwc1        $f0, 0x2D38($s1)
    ctx->pc = 0x12b4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b4c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12b4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x12b4cc: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x12b4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x12b4d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b4d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b4d4: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x12b4d4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x12b4d8: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x12b4d8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x12b4dc: 0x46032034  c.lt.s      $f4, $f3
    ctx->pc = 0x12b4dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b4e0: 0x0  nop
    ctx->pc = 0x12b4e0u;
    // NOP
    // 0x12b4e4: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12B4E4u;
    {
        const bool branch_taken_0x12b4e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b4e4) {
            ctx->pc = 0x12B4F8u;
            goto label_12b4f8;
        }
    }
    ctx->pc = 0x12B4ECu;
    // 0x12b4ec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12B4ECu;
    {
        const bool branch_taken_0x12b4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B4ECu;
        // 0x12b4f0: 0x460020c6  mov.s       $f3, $f4 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b4ec) {
            ctx->pc = 0x12B508u;
            goto label_12b508;
        }
    }
    ctx->pc = 0x12B4F4u;
    // 0x12b4f4: 0x0  nop
    ctx->pc = 0x12b4f4u;
    // NOP
label_12b4f8:
    // 0x12b4f8: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x12b4f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12b4fc: 0x0  nop
    ctx->pc = 0x12b4fcu;
    // NOP
    // 0x12b500: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x12B500u;
    {
        const bool branch_taken_0x12b500 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x12b500) {
            ctx->pc = 0x12B504u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12B500u;
            // 0x12b504: 0x460010c6  mov.s       $f3, $f2 (Delay Slot)
            ctx->f[3] = FPU_MOV_S(ctx->f[2]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x12B508u;
            goto label_12b508;
        }
    }
    ctx->pc = 0x12B508u;
label_12b508:
    // 0x12b508: 0xc6202d30  lwc1        $f0, 0x2D30($s1)
    ctx->pc = 0x12b508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12b50c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12b50cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12b510: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x12b510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
    // 0x12b514: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12b514u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12b518: 0x0  nop
    ctx->pc = 0x12b518u;
    // NOP
    // 0x12b51c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12b51cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x12b520: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x12b520u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
    // 0x12b524: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x12b524u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x12b528: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x12b528u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x12b52c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x12b52cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x12b530: 0x2a420100  slti        $v0, $s2, 0x100
    ctx->pc = 0x12b530u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x12b534: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12B534u;
    {
        const bool branch_taken_0x12b534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12B538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B534u;
        // 0x12b538: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b534) {
            ctx->pc = 0x12B544u;
            goto label_12b544;
        }
    }
    ctx->pc = 0x12B53Cu;
    // 0x12b53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12B53Cu;
    {
        const bool branch_taken_0x12b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B53Cu;
        // 0x12b540: 0x241200ff  addiu       $s2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b53c) {
            ctx->pc = 0x12B54Cu;
            goto label_12b54c;
        }
    }
    ctx->pc = 0x12B544u;
label_12b544:
    // 0x12b544: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x12b544u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x12b548: 0x2900a  movz        $s2, $zero, $v0
    ctx->pc = 0x12b548u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0));
label_12b54c:
    // 0x12b54c: 0x8e222d2c  lw          $v0, 0x2D2C($s1)
    ctx->pc = 0x12b54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11564)));
label_12b550:
    // 0x12b550: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12B550u;
    {
        const bool branch_taken_0x12b550 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x12B554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B550u;
        // 0x12b554: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12b550) {
            ctx->pc = 0x12B56Cu;
            goto label_12b56c;
        }
    }
    ctx->pc = 0x12B558u;
    // 0x12b558: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x12b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
    // 0x12b55c: 0xc077602  jal         func_1DD808
    ctx->pc = 0x12B55Cu;
    SET_GPR_U32(ctx, 31, 0x12B564u);
    ctx->pc = 0x12B560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12B55Cu;
    // 0x12b560: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD808u, 0x12B55Cu, 0x12B564u)) {
        return;
    }
    ctx->pc = 0x12B564u;
label_12b564:
    // 0x12b564: 0xae322d2c  sw          $s2, 0x2D2C($s1)
    ctx->pc = 0x12b564u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11564), GPR_U32(ctx, 18));
    // 0x12b568: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x12b568u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_12b56c:
    // 0x12b56c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x12b56cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12b570: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x12b570u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12b574: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12b574u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12b578: 0x3e00008  jr          $ra
    ctx->pc = 0x12B578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12B57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12B578u;
        // 0x12b57c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12B578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12B580u;
}
