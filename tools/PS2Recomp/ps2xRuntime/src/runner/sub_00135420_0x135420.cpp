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

// Function: sub_00135420
// Address: 0x135420 - 0x1358f0
void sub_00135420_0x135420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135420_0x135420");
#endif

    switch (ctx->pc) {
        case 0x135514u: goto label_135514;
        case 0x135540u: goto label_135540;
        case 0x1356dcu: goto label_1356dc;
        case 0x135700u: goto label_135700;
        case 0x13577cu: goto label_13577c;
        case 0x135830u: goto label_135830;
        default: break;
    }

    ctx->pc = 0x135420u;

    // 0x135420: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x135420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x135424: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x135424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x135428: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x135428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x13542c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13542cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135430: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x135430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x135434: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x135434u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135438: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x135438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x13543c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13543cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135440: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x135440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x135444: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x135444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x135448: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x135448u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x13544c: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x13544cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x135450: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x135450u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x135454: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x135454u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x135458: 0x6a020037  ldl         $v0, 0x37($s0)
    ctx->pc = 0x135458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13545c: 0x6e020030  ldr         $v0, 0x30($s0)
    ctx->pc = 0x13545cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x135460: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x135460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x135464: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x135464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135468: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x135468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13546c: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x13546cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x135470: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x135470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x135474: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x135474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x135478: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x135478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x13547c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x13547cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135480: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x135480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135484: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x135484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x135488: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x135488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13548c: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x13548cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135490: 0xc7a50028  lwc1        $f5, 0x28($sp)
    ctx->pc = 0x135490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135494: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x135494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135498: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x135498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13549c: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x13549cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1354a0: 0x46001981  sub.s       $f6, $f3, $f0
    ctx->pc = 0x1354a0u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x1354a4: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x1354a4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x1354a8: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x1354a8u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x1354ac: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x1354acu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1354b0: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x1354b0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x1354b4: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x1354b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x1354b8: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x1354b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x1354bc: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x1354bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x1354c0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1354c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1354c4: 0x46042042  mul.s       $f1, $f4, $f4
    ctx->pc = 0x1354c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1354c8: 0x46052882  mul.s       $f2, $f5, $f5
    ctx->pc = 0x1354c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x1354cc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1354ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x1354d0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1354d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1354d4: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1354d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1354d8: 0x0  nop
    ctx->pc = 0x1354d8u;
    // NOP
    // 0x1354dc: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x1354DCu;
    {
        const bool branch_taken_0x1354dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1354E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1354DCu;
        // 0x1354e0: 0xe7a50028  swc1        $f5, 0x28($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354dc) {
            ctx->pc = 0x135508u;
            goto label_135508;
        }
    }
    ctx->pc = 0x1354E4u;
    // 0x1354e4: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1354e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1354e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1354e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1354ec: 0x0  nop
    ctx->pc = 0x1354ecu;
    // NOP
    // 0x1354f0: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1354f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1354f4: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x1354f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1354f8: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x1354f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1354fc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1354fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x135500: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x135500u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x135504: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x135504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_135508:
    // 0x135508: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x13550c: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x13550Cu;
    SET_GPR_U32(ctx, 31, 0x135514u);
    ctx->pc = 0x135510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13550Cu;
    // 0x135510: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x13550Cu, 0x135514u)) {
        return;
    }
    ctx->pc = 0x135514u;
label_135514:
    // 0x135514: 0x0  nop
    ctx->pc = 0x135514u;
    // NOP
    // 0x135518: 0x0  nop
    ctx->pc = 0x135518u;
    // NOP
    // 0x13551c: 0x46000044  c1          0x44
    ctx->pc = 0x13551cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x135520: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x135520u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135524: 0x0  nop
    ctx->pc = 0x135524u;
    // NOP
    // 0x135528: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x135528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13552c: 0x0  nop
    ctx->pc = 0x13552cu;
    // NOP
    // 0x135530: 0x450100d8  bc1t        . + 4 + (0xD8 << 2)
    ctx->pc = 0x135530u;
    {
        const bool branch_taken_0x135530 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135530u;
        // 0x135534: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x135530) {
            ctx->pc = 0x135894u;
            goto label_135894;
        }
    }
    ctx->pc = 0x135538u;
    // 0x135538: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x135538u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13553c: 0x0  nop
    ctx->pc = 0x13553cu;
    // NOP
label_135540:
    // 0x135540: 0xc7a10024  lwc1        $f1, 0x24($sp)
    ctx->pc = 0x135540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135544: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x135544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135548: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x135548u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13554c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13554cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x135550: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x135550u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135554: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x135554u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x135558: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x135558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x13555c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x13555cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x135560: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x135564: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x135564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135568: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x135568u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13556c: 0xc4450004  lwc1        $f5, 0x4($v0)
    ctx->pc = 0x13556cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135570: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x135570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135574: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x135574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135578: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x135578u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13557c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13557cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135580: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x135580u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x135584: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135584u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135588: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x135588u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x13558c: 0x46146036  c.le.s      $f12, $f20
    ctx->pc = 0x13558cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135590: 0x0  nop
    ctx->pc = 0x135590u;
    // NOP
    // 0x135594: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x135594u;
    {
        const bool branch_taken_0x135594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x135598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135594u;
        // 0x135598: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135594) {
            ctx->pc = 0x1355A0u;
            goto label_1355a0;
        }
    }
    ctx->pc = 0x13559Cu;
    // 0x13559c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13559cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1355a0:
    // 0x1355a0: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1355A0u;
    {
        const bool branch_taken_0x1355a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1355a0) {
            ctx->pc = 0x1355A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1355A0u;
            // 0x1355a4: 0xae330000  sw          $s3, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1355A8u;
            goto label_1355a8;
        }
    }
    ctx->pc = 0x1355A8u;
label_1355a8:
    // 0x1355a8: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x1355a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1355ac: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x1355acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1355b0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1355b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1355b4: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x1355b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1355b8: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x1355b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1355bc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x1355bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x1355c0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x1355c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1355c4: 0xc6030010  lwc1        $f3, 0x10($s0)
    ctx->pc = 0x1355c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1355c8: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1355c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1355cc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1355ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1355d0: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x1355d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1355d4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1355d4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1355d8: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x1355d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1355dc: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1355dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1355e0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1355e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1355e4: 0x6a050017  ldl         $a1, 0x17($s0)
    ctx->pc = 0x1355e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1355e8: 0x6e050010  ldr         $a1, 0x10($s0)
    ctx->pc = 0x1355e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1355ec: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1355ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1355f0: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x1355f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1355f4: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x1355f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1355f8: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1355f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
    // 0x1355fc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1355fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x135600: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x135600u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x135604: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x135604u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135608: 0x460060c7  neg.s       $f3, $f12
    ctx->pc = 0x135608u;
    ctx->f[3] = FPU_NEG_S(ctx->f[12]);
    // 0x13560c: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x13560cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135610: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x135610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135614: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x135614u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x135618: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x135618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13561c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13561cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135620: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x135620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x135624: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x135624u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x135628: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x135628u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
    // 0x13562c: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x13562cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x135630: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x135630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x135634: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x135634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x135638: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x135638u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x13563c: 0xb3a50047  sdl         $a1, 0x47($sp)
    ctx->pc = 0x13563cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135640: 0xb7a50040  sdr         $a1, 0x40($sp)
    ctx->pc = 0x135640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135644: 0xafa60048  sw          $a2, 0x48($sp)
    ctx->pc = 0x135644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 6));
    // 0x135648: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x135648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13564c: 0xc7a40034  lwc1        $f4, 0x34($sp)
    ctx->pc = 0x13564cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135650: 0xc7a50038  lwc1        $f5, 0x38($sp)
    ctx->pc = 0x135650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135654: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x135654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135658: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x135658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13565c: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x13565cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135660: 0x46001980  add.s       $f6, $f3, $f0
    ctx->pc = 0x135660u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x135664: 0x46022100  add.s       $f4, $f4, $f2
    ctx->pc = 0x135664u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[2]);
    // 0x135668: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x135668u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
    // 0x13566c: 0xe7a60030  swc1        $f6, 0x30($sp)
    ctx->pc = 0x13566cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x135670: 0xe7a40034  swc1        $f4, 0x34($sp)
    ctx->pc = 0x135670u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x135674: 0xe7a50038  swc1        $f5, 0x38($sp)
    ctx->pc = 0x135674u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x135678: 0x46063002  mul.s       $f0, $f6, $f6
    ctx->pc = 0x135678u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x13567c: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x13567cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x135680: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x135680u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x135684: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x135684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x135688: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x135688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x13568c: 0x46052842  mul.s       $f1, $f5, $f5
    ctx->pc = 0x13568cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
    // 0x135690: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x135690u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x135694: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135698: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x135698u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13569c: 0x0  nop
    ctx->pc = 0x13569cu;
    // NOP
    // 0x1356a0: 0x4500000b  bc1f        . + 4 + (0xB << 2)
    ctx->pc = 0x1356A0u;
    {
        const bool branch_taken_0x1356a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1356A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356A0u;
        // 0x1356a4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356a0) {
            ctx->pc = 0x1356D0u;
            goto label_1356d0;
        }
    }
    ctx->pc = 0x1356A8u;
    // 0x1356a8: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1356a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1356ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1356acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1356b0: 0x0  nop
    ctx->pc = 0x1356b0u;
    // NOP
    // 0x1356b4: 0x46003042  mul.s       $f1, $f6, $f0
    ctx->pc = 0x1356b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x1356b8: 0x46002882  mul.s       $f2, $f5, $f0
    ctx->pc = 0x1356b8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1356bc: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x1356bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x1356c0: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1356c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x1356c4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x1356c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x1356c8: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1356c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x1356cc: 0x0  nop
    ctx->pc = 0x1356ccu;
    // NOP
label_1356d0:
    // 0x1356d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1356d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1356d4: 0xc04642c  jal         func_1190B0
    ctx->pc = 0x1356D4u;
    SET_GPR_U32(ctx, 31, 0x1356DCu);
    ctx->pc = 0x1356D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1356D4u;
    // 0x1356d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1356D4u, 0x1356DCu)) {
        return;
    }
    ctx->pc = 0x1356DCu;
label_1356dc:
    // 0x1356dc: 0x0  nop
    ctx->pc = 0x1356dcu;
    // NOP
    // 0x1356e0: 0x0  nop
    ctx->pc = 0x1356e0u;
    // NOP
    // 0x1356e4: 0x46000044  c1          0x44
    ctx->pc = 0x1356e4u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1356e8: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x1356e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1356ec: 0x0  nop
    ctx->pc = 0x1356ecu;
    // NOP
    // 0x1356f0: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x1356F0u;
    {
        const bool branch_taken_0x1356f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1356F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1356F0u;
        // 0x1356f4: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356f0) {
            ctx->pc = 0x13587Cu;
            goto label_13587c;
        }
    }
    ctx->pc = 0x1356F8u;
    // 0x1356f8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1356f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1356fc: 0x0  nop
    ctx->pc = 0x1356fcu;
    // NOP
label_135700:
    // 0x135700: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x135700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135704: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x135704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135708: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x135708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x13570c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13570cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x135710: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x135710u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135714: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x135714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x135718: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x135718u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x13571c: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x13571cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x135720: 0xc6040020  lwc1        $f4, 0x20($s0)
    ctx->pc = 0x135720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135724: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135728: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x135728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x13572c: 0xc6450004  lwc1        $f5, 0x4($s2)
    ctx->pc = 0x13572cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x135730: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x135730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135734: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x135734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135738: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x135738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
    // 0x13573c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13573cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135740: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x135740u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x135744: 0x46020300  add.s       $f12, $f0, $f2
    ctx->pc = 0x135744u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x135748: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x135748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13574c: 0x0  nop
    ctx->pc = 0x13574cu;
    // NOP
    // 0x135750: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x135750u;
    {
        const bool branch_taken_0x135750 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135750) {
            ctx->pc = 0x135754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135750u;
            // 0x135754: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135758u;
            goto label_135758;
        }
    }
    ctx->pc = 0x135758u;
label_135758:
    // 0x135758: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x135758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x13575c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x13575cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x135760: 0x0  nop
    ctx->pc = 0x135760u;
    // NOP
    // 0x135764: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x135764u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135768: 0x0  nop
    ctx->pc = 0x135768u;
    // NOP
    // 0x13576c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13576Cu;
    {
        const bool branch_taken_0x13576c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x13576c) {
            ctx->pc = 0x135770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13576Cu;
            // 0x135770: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135774u;
            goto label_135774;
        }
    }
    ctx->pc = 0x135774u;
label_135774:
    // 0x135774: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x135774u;
    SET_GPR_U32(ctx, 31, 0x13577Cu);
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x135774u, 0x13577Cu)) {
        return;
    }
    ctx->pc = 0x13577Cu;
label_13577c:
    // 0x13577c: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x13577cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
    // 0x135780: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x135780u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
    // 0x135784: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x135784u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x135788: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x135788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13578c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x13578cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x135790: 0x46170142  mul.s       $f5, $f0, $f23
    ctx->pc = 0x135790u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x135794: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x135794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135798: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x135798u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13579c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13579cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x1357a0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1357a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357a4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1357a4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x1357a8: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x1357a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1357ac: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x1357acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
    // 0x1357b0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1357b0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1357b4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x1357b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x1357b8: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x1357b8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1357bc: 0x46166034  c.lt.s      $f12, $f22
    ctx->pc = 0x1357bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1357c0: 0x0  nop
    ctx->pc = 0x1357c0u;
    // NOP
    // 0x1357c4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1357C4u;
    {
        const bool branch_taken_0x1357c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1357C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1357C4u;
        // 0x1357c8: 0xe7a50004  swc1        $f5, 0x4($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357c4) {
            ctx->pc = 0x1357D4u;
            goto label_1357d4;
        }
    }
    ctx->pc = 0x1357CCu;
    // 0x1357cc: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x1357ccu;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x1357d0: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x1357d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1357d4:
    // 0x1357d4: 0x56600035  bnel        $s3, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x1357D4u;
    {
        const bool branch_taken_0x1357d4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1357d4) {
            ctx->pc = 0x1357D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1357D4u;
            // 0x1357d8: 0xe7b60000  swc1        $f22, 0x0($sp) (Delay Slot)
            { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1358ACu;
            goto label_1358ac;
        }
    }
    ctx->pc = 0x1357DCu;
    // 0x1357dc: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1357dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357e0: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1357e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1357e4: 0xc7a30034  lwc1        $f3, 0x34($sp)
    ctx->pc = 0x1357e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1357e8: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1357e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1357ec: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1357ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1357f0: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1357f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1357f4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x1357f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x1357f8: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x1357f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1357fc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1357fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135800: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x135800u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x135804: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x135804u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x135808: 0x460ca834  c.lt.s      $f21, $f12
    ctx->pc = 0x135808u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13580c: 0x0  nop
    ctx->pc = 0x13580cu;
    // NOP
    // 0x135810: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x135810u;
    {
        const bool branch_taken_0x135810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135810) {
            ctx->pc = 0x135814u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135810u;
            // 0x135814: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135818u;
            goto label_135818;
        }
    }
    ctx->pc = 0x135818u;
label_135818:
    // 0x135818: 0x46146034  c.lt.s      $f12, $f20
    ctx->pc = 0x135818u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13581c: 0x0  nop
    ctx->pc = 0x13581cu;
    // NOP
    // 0x135820: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x135820u;
    {
        const bool branch_taken_0x135820 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x135820) {
            ctx->pc = 0x135824u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x135820u;
            // 0x135824: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x135828u;
            goto label_135828;
        }
    }
    ctx->pc = 0x135828u;
label_135828:
    // 0x135828: 0xc09b320  jal         func_26CC80
    ctx->pc = 0x135828u;
    SET_GPR_U32(ctx, 31, 0x135830u);
    ctx->pc = 0x26CC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26CC80u, 0x135828u, 0x135830u)) {
        return;
    }
    ctx->pc = 0x135830u;
label_135830:
    // 0x135830: 0x46170142  mul.s       $f5, $f0, $f23
    ctx->pc = 0x135830u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[23]);
    // 0x135834: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x135834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x135838: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x135838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x13583c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x13583cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x135840: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x135840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x135844: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x135844u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x135848: 0xc6240008  lwc1        $f4, 0x8($s1)
    ctx->pc = 0x135848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13584c: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x13584cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x135850: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x135850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135854: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x135854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x135858: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x135858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x13585c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x13585cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x135860: 0x46166034  c.lt.s      $f12, $f22
    ctx->pc = 0x135860u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x135864: 0x0  nop
    ctx->pc = 0x135864u;
    // NOP
    // 0x135868: 0x45000010  bc1f        . + 4 + (0x10 << 2)
    ctx->pc = 0x135868u;
    {
        const bool branch_taken_0x135868 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13586Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135868u;
        // 0x13586c: 0xe7a50000  swc1        $f5, 0x0($sp) (Delay Slot)
        { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135868) {
            ctx->pc = 0x1358ACu;
            goto label_1358ac;
        }
    }
    ctx->pc = 0x135870u;
    // 0x135870: 0x46002807  neg.s       $f0, $f5
    ctx->pc = 0x135870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[5]);
    // 0x135874: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x135874u;
    {
        const bool branch_taken_0x135874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x135874u;
        // 0x135878: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x135874) {
            ctx->pc = 0x1358ACu;
            goto label_1358ac;
        }
    }
    ctx->pc = 0x13587Cu;
label_13587c:
    // 0x13587c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x13587cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135880: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135880u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x135884: 0x0  nop
    ctx->pc = 0x135884u;
    // NOP
    // 0x135888: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x135888u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x13588c: 0x1000ff9c  b           . + 4 + (-0x64 << 2)
    ctx->pc = 0x13588Cu;
    {
        const bool branch_taken_0x13588c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13588Cu;
        // 0x135890: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13588c) {
            ctx->pc = 0x135700u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135700;
        }
    }
    ctx->pc = 0x135894u;
label_135894:
    // 0x135894: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x135898: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x135898u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13589c: 0x0  nop
    ctx->pc = 0x13589cu;
    // NOP
    // 0x1358a0: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1358a0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x1358a4: 0x1000ff26  b           . + 4 + (-0xDA << 2)
    ctx->pc = 0x1358A4u;
    {
        const bool branch_taken_0x1358a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1358A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358A4u;
        // 0x1358a8: 0xc7a00020  lwc1        $f0, 0x20($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1358a4) {
            ctx->pc = 0x135540u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_135540;
        }
    }
    ctx->pc = 0x1358ACu;
label_1358ac:
    // 0x1358ac: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x1358acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x1358b0: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x1358b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x1358b4: 0xb2850007  sdl         $a1, 0x7($s4)
    ctx->pc = 0x1358b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1358b8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1358b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1358bc: 0xb6850000  sdr         $a1, 0x0($s4)
    ctx->pc = 0x1358bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1358c0: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1358c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1358c4: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1358c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1358c8: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1358c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1358cc: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1358ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1358d0: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1358d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1358d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1358d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1358d8: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x1358d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1358dc: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x1358dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1358e0: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x1358e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1358e4: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x1358e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1358e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1358E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1358ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1358E8u;
        // 0x1358ec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1358E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1358F0u;
}
