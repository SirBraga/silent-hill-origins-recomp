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

// Function: sub_002CFF40
// Address: 0x2cff40 - 0x2d0320
void sub_002CFF40_0x2cff40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFF40_0x2cff40");
#endif

    switch (ctx->pc) {
        case 0x2d0018u: goto label_2d0018;
        case 0x2d002cu: goto label_2d002c;
        case 0x2d0060u: goto label_2d0060;
        case 0x2d0104u: goto label_2d0104;
        case 0x2d0274u: goto label_2d0274;
        case 0x2d02a4u: goto label_2d02a4;
        default: break;
    }

    ctx->pc = 0x2cff40u;

    // 0x2cff40: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x2cff40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
    // 0x2cff44: 0xc781825c  lwc1        $f1, -0x7DA4($gp)
    ctx->pc = 0x2cff44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cff48: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2cff48u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x2cff4c: 0x46016d82  mul.s       $f22, $f13, $f1
    ctx->pc = 0x2cff4cu;
    ctx->f[22] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x2cff50: 0xc7808260  lwc1        $f0, -0x7DA0($gp)
    ctx->pc = 0x2cff50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cff54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2cff54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2cff58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2cff58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2cff5c: 0xc7828264  lwc1        $f2, -0x7D9C($gp)
    ctx->pc = 0x2cff5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cff60: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x2cff60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x2cff64: 0xc7818268  lwc1        $f1, -0x7D98($gp)
    ctx->pc = 0x2cff64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cff68: 0x7fb00190  sq          $s0, 0x190($sp)
    ctx->pc = 0x2cff68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 16));
    // 0x2cff6c: 0xe7b801c0  swc1        $f24, 0x1C0($sp)
    ctx->pc = 0x2cff6cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x2cff70: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2cff70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff74: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2cff74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2cff78: 0x7fb10180  sq          $s1, 0x180($sp)
    ctx->pc = 0x2cff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 17));
    // 0x2cff7c: 0x7fb20170  sq          $s2, 0x170($sp)
    ctx->pc = 0x2cff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 18));
    // 0x2cff80: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x2cff80u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x2cff84: 0x7fb30160  sq          $s3, 0x160($sp)
    ctx->pc = 0x2cff84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 19));
    // 0x2cff88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2cff88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff8c: 0x7fb50140  sq          $s5, 0x140($sp)
    ctx->pc = 0x2cff8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 21));
    // 0x2cff90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2cff90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cff94: 0x7fb60130  sq          $s6, 0x130($sp)
    ctx->pc = 0x2cff94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 22));
    // 0x2cff98: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2cff98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cff9c: 0x7fbe0110  sq          $fp, 0x110($sp)
    ctx->pc = 0x2cff9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 30));
    // 0x2cffa0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2cffa0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffa4: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x2cffa4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
    // 0x2cffa8: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x2cffa8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffac: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2cffacu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
    // 0x2cffb0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cffb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cffb4: 0x7fb40150  sq          $s4, 0x150($sp)
    ctx->pc = 0x2cffb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 20));
    // 0x2cffb8: 0x46180540  add.s       $f21, $f0, $f24
    ctx->pc = 0x2cffb8u;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
    // 0x2cffbc: 0x7fb70120  sq          $s7, 0x120($sp)
    ctx->pc = 0x2cffbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 23));
    // 0x2cffc0: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2cffc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x2cffc4: 0xe7ba01d0  swc1        $f26, 0x1D0($sp)
    ctx->pc = 0x2cffc4u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
    // 0x2cffc8: 0xe7b901c8  swc1        $f25, 0x1C8($sp)
    ctx->pc = 0x2cffc8u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
    // 0x2cffcc: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2cffccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
    // 0x2cffd0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2cffd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2cffd4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x2cffd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2cffd8: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x2cffd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x2cffdc: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x2cffdcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2cffe0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x2cffe0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2cffe4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2cffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2cffe8: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2cffe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2cffec: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x2cffecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2cfff0: 0x48c01000  ctc2.ni     $zero, $vi2
    ctx->pc = 0x2cfff0u;
    ctx->vi[2] = static_cast<uint16_t>(GPR_U32(ctx, 0));
    // 0x2cfff4: 0x48c00800  ctc2.ni     $zero, $vi1
    ctx->pc = 0x2cfff4u;
    ctx->vi[1] = static_cast<uint16_t>(GPR_U32(ctx, 0));
    // 0x2cfff8: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2cfff8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cfffc: 0x0  nop
    ctx->pc = 0x2cfffcu;
    // NOP
    // 0x2d0000: 0x450000b0  bc1f        . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D0000u;
    {
        const bool branch_taken_0x2d0000 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D0004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0000u;
        // 0x2d0004: 0x46002646  mov.s       $f25, $f4 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0000) {
            ctx->pc = 0x2D02C4u;
            goto label_2d02c4;
        }
    }
    ctx->pc = 0x2D0008u;
    // 0x2d0008: 0xc79a826c  lwc1        $f26, -0x7D94($gp)
    ctx->pc = 0x2d0008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2d000c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2d000cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0010: 0x27b40020  addiu       $s4, $sp, 0x20
    ctx->pc = 0x2d0010u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0014: 0x8fa700f0  lw          $a3, 0xF0($sp)
    ctx->pc = 0x2d0014u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2d0018:
    // 0x2d0018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d0018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d001c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x2d001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d0020: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2d0020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d0024: 0xc0b3f68  jal         func_2CFDA0
    ctx->pc = 0x2D0024u;
    SET_GPR_U32(ctx, 31, 0x2D002Cu);
    ctx->pc = 0x2D0028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0024u;
    // 0x2d0028: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2CFDA0u, 0x2D0024u, 0x2D002Cu)) {
        return;
    }
    ctx->pc = 0x2D002Cu;
label_2d002c:
    // 0x2d002c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2d002cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2d0030: 0x4614c034  c.lt.s      $f24, $f20
    ctx->pc = 0x2d0030u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[24], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0034: 0x0  nop
    ctx->pc = 0x2d0034u;
    // NOP
    // 0x2d0038: 0x45000014  bc1f        . + 4 + (0x14 << 2)
    ctx->pc = 0x2D0038u;
    {
        const bool branch_taken_0x2d0038 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0038u;
        // 0x2d003c: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0038) {
            ctx->pc = 0x2D008Cu;
            goto label_2d008c;
        }
    }
    ctx->pc = 0x2D0040u;
    // 0x2d0040: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x2d0040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2d0044: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x2d0044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2d0048: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d0048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d004c: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2d004cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0050: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2d0050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0054: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x2d0054u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x2d0058: 0xc0b53c2  jal         func_2D4F08
    ctx->pc = 0x2D0058u;
    SET_GPR_U32(ctx, 31, 0x2D0060u);
    ctx->pc = 0x2D005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D0058u;
    // 0x2d005c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4F08u, 0x2D0058u, 0x2D0060u)) {
        return;
    }
    ctx->pc = 0x2D0060u;
label_2d0060:
    // 0x2d0060: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0064: 0x4619a182  mul.s       $f6, $f20, $f25
    ctx->pc = 0x2d0064u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2d0068: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2d0068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d006c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2d006cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d0070: 0xc7a40030  lwc1        $f4, 0x30($sp)
    ctx->pc = 0x2d0070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0074: 0xc7a50034  lwc1        $f5, 0x34($sp)
    ctx->pc = 0x2d0074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d0078: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2d0078u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d007c: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2d007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0080: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2d0080u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d0084: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2D0084u;
    {
        const bool branch_taken_0x2d0084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0084u;
        // 0x2d0088: 0xc7a20038  lwc1        $f2, 0x38($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0084) {
            ctx->pc = 0x2D012Cu;
            goto label_2d012c;
        }
    }
    ctx->pc = 0x2D008Cu;
label_2d008c:
    // 0x2d008c: 0x4614b834  c.lt.s      $f23, $f20
    ctx->pc = 0x2d008cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d0090: 0x0  nop
    ctx->pc = 0x2d0090u;
    // NOP
    // 0x2d0094: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D0094u;
    {
        const bool branch_taken_0x2d0094 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d0094) {
            ctx->pc = 0x2D0098u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D0094u;
            // 0x2d0098: 0x4600a5c6  mov.s       $f23, $f20 (Delay Slot)
            ctx->f[23] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D009Cu;
            goto label_2d009c;
        }
    }
    ctx->pc = 0x2D009Cu;
label_2d009c:
    // 0x2d009c: 0x461ab802  mul.s       $f0, $f23, $f26
    ctx->pc = 0x2d009cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[26]);
    // 0x2d00a0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2d00a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d00a4: 0x4501000e  bc1t        . + 4 + (0xE << 2)
    ctx->pc = 0x2D00A4u;
    {
        const bool branch_taken_0x2d00a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d00a4) {
            ctx->pc = 0x2D00E0u;
            goto label_2d00e0;
        }
    }
    ctx->pc = 0x2D00ACu;
    // 0x2d00ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2d00acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d00b0: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x2d00b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d00b4: 0x0  nop
    ctx->pc = 0x2d00b4u;
    // NOP
    // 0x2d00b8: 0x45020026  bc1fl       . + 4 + (0x26 << 2)
    ctx->pc = 0x2D00B8u;
    {
        const bool branch_taken_0x2d00b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d00b8) {
            ctx->pc = 0x2D00BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D00B8u;
            // 0x2d00bc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0154u;
            goto label_2d0154;
        }
    }
    ctx->pc = 0x2D00C0u;
    // 0x2d00c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2d00c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d00c4: 0x0  nop
    ctx->pc = 0x2d00c4u;
    // NOP
    // 0x2d00c8: 0x45020022  bc1fl       . + 4 + (0x22 << 2)
    ctx->pc = 0x2D00C8u;
    {
        const bool branch_taken_0x2d00c8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d00c8) {
            ctx->pc = 0x2D00CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D00C8u;
            // 0x2d00cc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0154u;
            goto label_2d0154;
        }
    }
    ctx->pc = 0x2D00D0u;
    // 0x2d00d0: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D00D0u;
    {
        const bool branch_taken_0x2d00d0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00D0u;
        // 0x2d00d4: 0x2a420029  slti        $v0, $s2, 0x29 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)41) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00d0) {
            ctx->pc = 0x2D00E0u;
            goto label_2d00e0;
        }
    }
    ctx->pc = 0x2D00D8u;
    // 0x2d00d8: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2D00D8u;
    {
        const bool branch_taken_0x2d00d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D00D8u;
        // 0x2d00dc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d00d8) {
            ctx->pc = 0x2D0154u;
            goto label_2d0154;
        }
    }
    ctx->pc = 0x2D00E0u;
label_2d00e0:
    // 0x2d00e0: 0x6ba80027  ldl         $t0, 0x27($sp)
    ctx->pc = 0x2d00e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2d00e4: 0x6fa80020  ldr         $t0, 0x20($sp)
    ctx->pc = 0x2d00e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2d00e8: 0x8fa90028  lw          $t1, 0x28($sp)
    ctx->pc = 0x2d00e8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d00ec: 0xb2280007  sdl         $t0, 0x7($s1)
    ctx->pc = 0x2d00ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d00f0: 0xb6280000  sdr         $t0, 0x0($s1)
    ctx->pc = 0x2d00f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d00f4: 0xae290008  sw          $t1, 0x8($s1)
    ctx->pc = 0x2d00f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 9));
    // 0x2d00f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2d00f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2d00fc: 0xc0b53c2  jal         func_2D4F08
    ctx->pc = 0x2D00FCu;
    SET_GPR_U32(ctx, 31, 0x2D0104u);
    ctx->pc = 0x2D0100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D00FCu;
    // 0x2d0100: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4F08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4F08u, 0x2D00FCu, 0x2D0104u)) {
        return;
    }
    ctx->pc = 0x2D0104u;
label_2d0104:
    // 0x2d0104: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x2d0104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0108: 0x4619a182  mul.s       $f6, $f20, $f25
    ctx->pc = 0x2d0108u;
    ctx->f[6] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
    // 0x2d010c: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x2d010cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d0110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d0114: 0xc7a40070  lwc1        $f4, 0x70($sp)
    ctx->pc = 0x2d0114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0118: 0xc7a50074  lwc1        $f5, 0x74($sp)
    ctx->pc = 0x2d0118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d011c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2d011cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d0120: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x2d0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0124: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2d0124u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x2d0128: 0xc7a20078  lwc1        $f2, 0x78($sp)
    ctx->pc = 0x2d0128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2d012c:
    // 0x2d012c: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x2d012cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0130: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x2d0130u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x2d0134: 0xe7a50024  swc1        $f5, 0x24($sp)
    ctx->pc = 0x2d0134u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d0138: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2d0138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2d013c: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x2d013cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d0140: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d0140u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d0144: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2d0144u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2d0148: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x2d0148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x2d014c: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x2D014Cu;
    {
        const bool branch_taken_0x2d014c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D014Cu;
        // 0x2d0150: 0xe6b40000  swc1        $f20, 0x0($s5) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d014c) {
            ctx->pc = 0x2D02D4u;
            goto label_2d02d4;
        }
    }
    ctx->pc = 0x2D0154u;
label_2d0154:
    // 0x2d0154: 0x2a420033  slti        $v0, $s2, 0x33
    ctx->pc = 0x2d0154u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)51) ? 1 : 0);
    // 0x2d0158: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x2D0158u;
    {
        const bool branch_taken_0x2d0158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D015Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0158u;
        // 0x2d015c: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0158) {
            ctx->pc = 0x2D0208u;
            goto label_2d0208;
        }
    }
    ctx->pc = 0x2D0160u;
    // 0x2d0160: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x2D0160u;
    {
        const bool branch_taken_0x2d0160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0160u;
        // 0x2d0164: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0160) {
            ctx->pc = 0x2D01F0u;
            goto label_2d01f0;
        }
    }
    ctx->pc = 0x2D0168u;
    // 0x2d0168: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2d0168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d016c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2d016cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0170: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2d0170u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d0174: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d0174u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d0178: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x2d0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d017c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2d017cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0180: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2d0180u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2d0184: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2d0184u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2d0188: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2d0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d018c: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2d018cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0190: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2d0190u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2d0194: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2d0194u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2d0198: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d0198u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d019c: 0xc7868270  lwc1        $f6, -0x7D90($gp)
    ctx->pc = 0x2d019cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d01a0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d01a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d01a4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2d01a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d01a8: 0x0  nop
    ctx->pc = 0x2d01a8u;
    // NOP
    // 0x2d01ac: 0x45030010  bc1tl       . + 4 + (0x10 << 2)
    ctx->pc = 0x2D01ACu;
    {
        const bool branch_taken_0x2d01ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d01ac) {
            ctx->pc = 0x2D01B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01ACu;
            // 0x2d01b0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D01F0u;
            goto label_2d01f0;
        }
    }
    ctx->pc = 0x2D01B4u;
    // 0x2d01b4: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x2d01b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d01b8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x2d01b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x2d01bc: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2d01bcu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2d01c0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x2d01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d01c4: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2d01c4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2d01c8: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x2d01c8u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
    // 0x2d01cc: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x2d01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d01d0: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x2d01d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x2d01d4: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x2d01d4u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x2d01d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2d01d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2d01dc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2d01dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2d01e0: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2d01e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d01e4: 0x0  nop
    ctx->pc = 0x2d01e4u;
    // NOP
    // 0x2d01e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2D01E8u;
    {
        const bool branch_taken_0x2d01e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d01e8) {
            ctx->pc = 0x2D01ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D01E8u;
            // 0x2d01ec: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D01F0u;
            goto label_2d01f0;
        }
    }
    ctx->pc = 0x2D01F0u;
label_2d01f0:
    // 0x2d01f0: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2D01F0u;
    {
        const bool branch_taken_0x2d01f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D01F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D01F0u;
        // 0x2d01f4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d01f0) {
            ctx->pc = 0x2D0210u;
            goto label_2d0210;
        }
    }
    ctx->pc = 0x2D01F8u;
    // 0x2d01f8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2d01f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x2d01fc: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2d01fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x2d0200: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D0200u;
    {
        const bool branch_taken_0x2d0200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0200u;
        // 0x2d0204: 0x32430001  andi        $v1, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0200) {
            ctx->pc = 0x2D0214u;
            goto label_2d0214;
        }
    }
    ctx->pc = 0x2D0208u;
label_2d0208:
    // 0x2d0208: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2D0208u;
    {
        const bool branch_taken_0x2d0208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0208u;
        // 0x2d020c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0208) {
            ctx->pc = 0x2D02D4u;
            goto label_2d02d4;
        }
    }
    ctx->pc = 0x2D0210u;
label_2d0210:
    // 0x2d0210: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x2d0210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_2d0214:
    // 0x2d0214: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x2d0214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2d0218: 0xc6050000  lwc1        $f5, 0x0($s0)
    ctx->pc = 0x2d0218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d021c: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2d021cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d0220: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2d0220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2d0224: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x2d0224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d0228: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x2d0228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2d022c: 0xc602000c  lwc1        $f2, 0xC($s0)
    ctx->pc = 0x2d022cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0230: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2d0230u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2d0234: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x2d0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d0238: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x2d0238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x2d023c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2d023cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0240: 0x6ae70007  ldl         $a3, 0x7($s7)
    ctx->pc = 0x2d0240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x2d0244: 0x6ee70000  ldr         $a3, 0x0($s7)
    ctx->pc = 0x2d0244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x2d0248: 0x8ee80008  lw          $t0, 0x8($s7)
    ctx->pc = 0x2d0248u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2d024c: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x2d024cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0250: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x2d0250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2d0254: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x2d0254u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x2d0258: 0xe7a500c0  swc1        $f5, 0xC0($sp)
    ctx->pc = 0x2d0258u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x2d025c: 0xe7a300c4  swc1        $f3, 0xC4($sp)
    ctx->pc = 0x2d025cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x2d0260: 0xe7a400c8  swc1        $f4, 0xC8($sp)
    ctx->pc = 0x2d0260u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2d0264: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x2d0264u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x2d0268: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x2d0268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x2d026c: 0xc0b53ba  jal         func_2D4EE8
    ctx->pc = 0x2D026Cu;
    SET_GPR_U32(ctx, 31, 0x2D0274u);
    ctx->pc = 0x2D0270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D026Cu;
    // 0x2d0270: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D4EE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D4EE8u, 0x2D026Cu, 0x2D0274u)) {
        return;
    }
    ctx->pc = 0x2D0274u;
label_2d0274:
    // 0x2d0274: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D0274u;
    {
        const bool branch_taken_0x2d0274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0274u;
        // 0x2d0278: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d0274) {
            ctx->pc = 0x2D0280u;
            goto label_2d0280;
        }
    }
    ctx->pc = 0x2D027Cu;
    // 0x2d027c: 0xae060018  sw          $a2, 0x18($s0)
    ctx->pc = 0x2d027cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 6));
label_2d0280:
    // 0x2d0280: 0xc7a200b0  lwc1        $f2, 0xB0($sp)
    ctx->pc = 0x2d0280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d0284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2d0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0288: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x2d0288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d028c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d0290: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x2d0290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d0294: 0xe7a20020  swc1        $f2, 0x20($sp)
    ctx->pc = 0x2d0294u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d0298: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x2d0298u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d029c: 0xc0ad20c  jal         func_2B4830
    ctx->pc = 0x2D029Cu;
    SET_GPR_U32(ctx, 31, 0x2D02A4u);
    ctx->pc = 0x2D02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D029Cu;
    // 0x2d02a0: 0xe7a00028  swc1        $f0, 0x28($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2D029Cu, 0x2D02A4u)) {
        return;
    }
    ctx->pc = 0x2D02A4u;
label_2d02a4:
    // 0x2d02a4: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d02a8: 0x2842000f  slti        $v0, $v0, 0xF
    ctx->pc = 0x2d02a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)15) ? 1 : 0);
    // 0x2d02ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D02ACu;
    {
        const bool branch_taken_0x2d02ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D02B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D02ACu;
        // 0x2d02b0: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d02ac) {
            ctx->pc = 0x2D02C4u;
            goto label_2d02c4;
        }
    }
    ctx->pc = 0x2D02B4u;
    // 0x2d02b4: 0x4615b034  c.lt.s      $f22, $f21
    ctx->pc = 0x2d02b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d02b8: 0x0  nop
    ctx->pc = 0x2d02b8u;
    // NOP
    // 0x2d02bc: 0x4503ff56  bc1tl       . + 4 + (-0xAA << 2)
    ctx->pc = 0x2D02BCu;
    {
        const bool branch_taken_0x2d02bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2d02bc) {
            ctx->pc = 0x2D02C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D02BCu;
            // 0x2d02c0: 0x8fa700f0  lw          $a3, 0xF0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D0018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d0018;
        }
    }
    ctx->pc = 0x2D02C4u;
label_2d02c4:
    // 0x2d02c4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2d02c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2d02c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2d02c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2d02cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d02ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d02d0: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x2d02d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
label_2d02d4:
    // 0x2d02d4: 0x7bb00190  lq          $s0, 0x190($sp)
    ctx->pc = 0x2d02d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x2d02d8: 0x7bb10180  lq          $s1, 0x180($sp)
    ctx->pc = 0x2d02d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x2d02dc: 0x7bb20170  lq          $s2, 0x170($sp)
    ctx->pc = 0x2d02dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x2d02e0: 0x7bb30160  lq          $s3, 0x160($sp)
    ctx->pc = 0x2d02e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x2d02e4: 0x7bb40150  lq          $s4, 0x150($sp)
    ctx->pc = 0x2d02e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x2d02e8: 0x7bb50140  lq          $s5, 0x140($sp)
    ctx->pc = 0x2d02e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x2d02ec: 0x7bb60130  lq          $s6, 0x130($sp)
    ctx->pc = 0x2d02ecu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x2d02f0: 0x7bb70120  lq          $s7, 0x120($sp)
    ctx->pc = 0x2d02f0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x2d02f4: 0x7bbe0110  lq          $fp, 0x110($sp)
    ctx->pc = 0x2d02f4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x2d02f8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2d02f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x2d02fc: 0xc7ba01d0  lwc1        $f26, 0x1D0($sp)
    ctx->pc = 0x2d02fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2d0300: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x2d0300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2d0304: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x2d0304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2d0308: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x2d0308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2d030c: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x2d030cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2d0310: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x2d0310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2d0314: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x2d0314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2d0318: 0x3e00008  jr          $ra
    ctx->pc = 0x2D0318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D031Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D0318u;
        // 0x2d031c: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D0318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D0320u;
}
