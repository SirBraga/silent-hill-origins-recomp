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

// Function: sub_001B3B80
// Address: 0x1b3b80 - 0x1b3d68
void sub_001B3B80_0x1b3b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B3B80_0x1b3b80");
#endif

    ctx->pc = 0x1b3b80u;

    // 0x1b3b80: 0x10800077  beqz        $a0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1B3B80u;
    {
        const bool branch_taken_0x1b3b80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3b80) {
            ctx->pc = 0x1B3D60u;
            goto label_1b3d60;
        }
    }
    ctx->pc = 0x1B3B88u;
    // 0x1b3b88: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1b3b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3b8c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b3b90: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1b3b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3b94: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1b3b94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b3b98: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b3b98u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b3b9c: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1b3b9cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1b3ba0: 0xe48e0010  swc1        $f14, 0x10($a0)
    ctx->pc = 0x1b3ba0u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1b3ba4: 0xe48f0014  swc1        $f15, 0x14($a0)
    ctx->pc = 0x1b3ba4u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1b3ba8: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1b3ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b3bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3bb0: 0x0  nop
    ctx->pc = 0x1b3bb0u;
    // NOP
    // 0x1b3bb4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3bb4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3bb8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1b3bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1b3bbc: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x1b3bbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1b3bc0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3bc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3bc4: 0x0  nop
    ctx->pc = 0x1b3bc4u;
    // NOP
    // 0x1b3bc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3bc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3bcc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1b3bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1b3bd0: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x1b3bd0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1b3bd4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3bd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3bd8: 0x0  nop
    ctx->pc = 0x1b3bd8u;
    // NOP
    // 0x1b3bdc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3bdcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3be0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1b3be0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1b3be4: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x1b3be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1b3be8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3be8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3bec: 0x0  nop
    ctx->pc = 0x1b3becu;
    // NOP
    // 0x1b3bf0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3bf4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1b3bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1b3bf8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1b3bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b3bfc: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x1b3bfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c00: 0x461178c0  add.s       $f3, $f15, $f17
    ctx->pc = 0x1b3c00u;
    ctx->f[3] = FPU_ADD_S(ctx->f[15], ctx->f[17]);
    // 0x1b3c04: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3c04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b3c08: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x1b3c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c0c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1b3c0cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b3c10: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b3c10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b3c14: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1b3c14u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1b3c18: 0xe48e0010  swc1        $f14, 0x10($a0)
    ctx->pc = 0x1b3c18u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1b3c1c: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1b3c1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1b3c20: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1b3c20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b3c24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c28: 0x0  nop
    ctx->pc = 0x1b3c28u;
    // NOP
    // 0x1b3c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3c30: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1b3c30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1b3c34: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x1b3c34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1b3c38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3c38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c3c: 0x0  nop
    ctx->pc = 0x1b3c3cu;
    // NOP
    // 0x1b3c40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3c40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3c44: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1b3c44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1b3c48: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x1b3c48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1b3c4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3c4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c50: 0x0  nop
    ctx->pc = 0x1b3c50u;
    // NOP
    // 0x1b3c54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3c54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3c58: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1b3c58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1b3c5c: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x1b3c5cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1b3c60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3c64: 0x0  nop
    ctx->pc = 0x1b3c64u;
    // NOP
    // 0x1b3c68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3c68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3c6c: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1b3c6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1b3c70: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1b3c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b3c74: 0xc5000000  lwc1        $f0, 0x0($t0)
    ctx->pc = 0x1b3c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3c78: 0x46107080  add.s       $f2, $f14, $f16
    ctx->pc = 0x1b3c78u;
    ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[16]);
    // 0x1b3c7c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3c7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b3c80: 0xc5010004  lwc1        $f1, 0x4($t0)
    ctx->pc = 0x1b3c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3c84: 0xe48f0014  swc1        $f15, 0x14($a0)
    ctx->pc = 0x1b3c84u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1b3c88: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b3c88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b3c8c: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1b3c8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b3c90: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1b3c90u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1b3c94: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1b3c94u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1b3c98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1b3c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b3c9c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3c9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3ca0: 0x0  nop
    ctx->pc = 0x1b3ca0u;
    // NOP
    // 0x1b3ca4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3ca4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3ca8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1b3ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1b3cac: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x1b3cacu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1b3cb0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3cb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3cb4: 0x0  nop
    ctx->pc = 0x1b3cb4u;
    // NOP
    // 0x1b3cb8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3cb8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3cbc: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1b3cbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1b3cc0: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x1b3cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1b3cc4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3cc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3cc8: 0x0  nop
    ctx->pc = 0x1b3cc8u;
    // NOP
    // 0x1b3ccc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3cccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3cd0: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1b3cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1b3cd4: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x1b3cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1b3cd8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3cd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3cdc: 0x0  nop
    ctx->pc = 0x1b3cdcu;
    // NOP
    // 0x1b3ce0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3ce0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3ce4: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1b3ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1b3ce8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1b3ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x1b3cec: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x1b3cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b3cf0: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1b3cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x1b3cf4: 0xc4e10004  lwc1        $f1, 0x4($a3)
    ctx->pc = 0x1b3cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b3cf8: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x1b3cf8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x1b3cfc: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x1b3cfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1b3d00: 0xe48d0018  swc1        $f13, 0x18($a0)
    ctx->pc = 0x1b3d00u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x1b3d04: 0xe4820010  swc1        $f2, 0x10($a0)
    ctx->pc = 0x1b3d04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x1b3d08: 0xe4830014  swc1        $f3, 0x14($a0)
    ctx->pc = 0x1b3d08u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x1b3d0c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x1b3d0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x1b3d10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d14: 0x0  nop
    ctx->pc = 0x1b3d14u;
    // NOP
    // 0x1b3d18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d1c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1b3d1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x1b3d20: 0x91220001  lbu         $v0, 0x1($t1)
    ctx->pc = 0x1b3d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
    // 0x1b3d24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d28: 0x0  nop
    ctx->pc = 0x1b3d28u;
    // NOP
    // 0x1b3d2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d30: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1b3d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
    // 0x1b3d34: 0x91220002  lbu         $v0, 0x2($t1)
    ctx->pc = 0x1b3d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x1b3d38: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d3c: 0x0  nop
    ctx->pc = 0x1b3d3cu;
    // NOP
    // 0x1b3d40: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d44: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1b3d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x1b3d48: 0x91220003  lbu         $v0, 0x3($t1)
    ctx->pc = 0x1b3d48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 3)));
    // 0x1b3d4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b3d4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b3d50: 0x0  nop
    ctx->pc = 0x1b3d50u;
    // NOP
    // 0x1b3d54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1b3d54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1b3d58: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1b3d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
    // 0x1b3d5c: 0x0  nop
    ctx->pc = 0x1b3d5cu;
    // NOP
label_1b3d60:
    // 0x1b3d60: 0x3e00008  jr          $ra
    ctx->pc = 0x1B3D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B3D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3D68u;
}
