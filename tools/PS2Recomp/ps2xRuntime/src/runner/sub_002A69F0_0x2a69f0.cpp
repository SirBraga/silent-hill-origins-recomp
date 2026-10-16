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

// Function: sub_002A69F0
// Address: 0x2a69f0 - 0x2a6d60
void sub_002A69F0_0x2a69f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A69F0_0x2a69f0");
#endif

    ctx->pc = 0x2a69f0u;

    // 0x2a69f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2a69f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2a69f4: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2a69f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2a69f8: 0xe7bf0058  swc1        $f31, 0x58($sp)
    ctx->pc = 0x2a69f8u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x2a69fc: 0xe7be0050  swc1        $f30, 0x50($sp)
    ctx->pc = 0x2a69fcu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2a6a00: 0xe7bd0048  swc1        $f29, 0x48($sp)
    ctx->pc = 0x2a6a00u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2a6a04: 0xe7bc0040  swc1        $f28, 0x40($sp)
    ctx->pc = 0x2a6a04u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a6a08: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x2a6a08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2a6a0c: 0xe7ba0030  swc1        $f26, 0x30($sp)
    ctx->pc = 0x2a6a0cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2a6a10: 0xe7b90028  swc1        $f25, 0x28($sp)
    ctx->pc = 0x2a6a10u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2a6a14: 0xe7b80020  swc1        $f24, 0x20($sp)
    ctx->pc = 0x2a6a14u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2a6a18: 0xe7b60010  swc1        $f22, 0x10($sp)
    ctx->pc = 0x2a6a18u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2a6a1c: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x2a6a1cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a6a20: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a6a24: 0xe7bb0038  swc1        $f27, 0x38($sp)
    ctx->pc = 0x2a6a24u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2a6a28: 0xc49b0044  lwc1        $f27, 0x44($a0)
    ctx->pc = 0x2a6a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a6a2c: 0x3c014100  lui         $at, 0x4100
    ctx->pc = 0x2a6a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16640 << 16));
    // 0x2a6a30: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2a6a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
    // 0x2a6a34: 0xc49a0040  lwc1        $f26, 0x40($a0)
    ctx->pc = 0x2a6a34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a6a38: 0x461bd842  mul.s       $f1, $f27, $f27
    ctx->pc = 0x2a6a38u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[27]);
    // 0x2a6a3c: 0x4617dc02  mul.s       $f16, $f27, $f23
    ctx->pc = 0x2a6a3cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[27], ctx->f[23]);
    // 0x2a6a40: 0xc4990048  lwc1        $f25, 0x48($a0)
    ctx->pc = 0x2a6a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a6a44: 0xc498004c  lwc1        $f24, 0x4C($a0)
    ctx->pc = 0x2a6a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a6a48: 0x461ad082  mul.s       $f2, $f26, $f26
    ctx->pc = 0x2a6a48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[26]);
    // 0x2a6a4c: 0x4619c802  mul.s       $f0, $f25, $f25
    ctx->pc = 0x2a6a4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[25]);
    // 0x2a6a50: 0x4610d0c2  mul.s       $f3, $f26, $f16
    ctx->pc = 0x2a6a50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[26], ctx->f[16]);
    // 0x2a6a54: 0x46182034  c.lt.s      $f4, $f24
    ctx->pc = 0x2a6a54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a6a58: 0x46011780  add.s       $f30, $f2, $f1
    ctx->pc = 0x2a6a58u;
    ctx->f[30] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2a6a5c: 0x46020740  add.s       $f29, $f0, $f2
    ctx->pc = 0x2a6a5cu;
    ctx->f[29] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2a6a60: 0x46000f00  add.s       $f28, $f1, $f0
    ctx->pc = 0x2a6a60u;
    ctx->f[28] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2a6a64: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
    ctx->pc = 0x2A6A64u;
    {
        const bool branch_taken_0x2a6a64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A6A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6A64u;
        // 0x2a6a68: 0x46191fc2  mul.s       $f31, $f3, $f25 (Delay Slot)
        ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6a64) {
            ctx->pc = 0x2A6CDCu;
            goto label_2a6cdc;
        }
    }
    ctx->pc = 0x2A6A6Cu;
    // 0x2a6a6c: 0x3c0140c0  lui         $at, 0x40C0
    ctx->pc = 0x2a6a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16576 << 16));
    // 0x2a6a70: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6a70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6a74: 0x461bd480  add.s       $f18, $f26, $f27
    ctx->pc = 0x2a6a74u;
    ctx->f[18] = FPU_ADD_S(ctx->f[26], ctx->f[27]);
    // 0x2a6a78: 0x461acb40  add.s       $f13, $f25, $f26
    ctx->pc = 0x2a6a78u;
    ctx->f[13] = FPU_ADD_S(ctx->f[25], ctx->f[26]);
    // 0x2a6a7c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2a6a7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2a6a80: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x2a6a80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x2a6a84: 0x4600d882  mul.s       $f2, $f27, $f0
    ctx->pc = 0x2a6a84u;
    ctx->f[2] = FPU_MUL_S(ctx->f[27], ctx->f[0]);
    // 0x2a6a88: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x2a6a88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x2a6a8c: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x2a6a8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
    // 0x2a6a90: 0x4600c842  mul.s       $f1, $f25, $f0
    ctx->pc = 0x2a6a90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x2a6a94: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2a6a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2a6a98: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2a6a98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2a6a9c: 0x4619d980  add.s       $f6, $f27, $f25
    ctx->pc = 0x2a6a9cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[27], ctx->f[25]);
    // 0x2a6aa0: 0xc7968090  lwc1        $f22, -0x7F70($gp)
    ctx->pc = 0x2a6aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a6aa4: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x2a6aa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
    // 0x2a6aa8: 0xc7958094  lwc1        $f21, -0x7F6C($gp)
    ctx->pc = 0x2a6aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a6aac: 0x4602d082  mul.s       $f2, $f26, $f2
    ctx->pc = 0x2a6aacu;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[2]);
    // 0x2a6ab0: 0xc7918098  lwc1        $f17, -0x7F68($gp)
    ctx->pc = 0x2a6ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
    // 0x2a6ab4: 0x4601d842  mul.s       $f1, $f27, $f1
    ctx->pc = 0x2a6ab4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[27], ctx->f[1]);
    // 0x2a6ab8: 0xc794809c  lwc1        $f20, -0x7F64($gp)
    ctx->pc = 0x2a6ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6abc: 0x4600c802  mul.s       $f0, $f25, $f0
    ctx->pc = 0x2a6abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[0]);
    // 0x2a6ac0: 0x4606c2c2  mul.s       $f11, $f24, $f6
    ctx->pc = 0x2a6ac0u;
    ctx->f[11] = FPU_MUL_S(ctx->f[24], ctx->f[6]);
    // 0x2a6ac4: 0x460dc302  mul.s       $f12, $f24, $f13
    ctx->pc = 0x2a6ac4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[13]);
    // 0x2a6ac8: 0x4612c382  mul.s       $f14, $f24, $f18
    ctx->pc = 0x2a6ac8u;
    ctx->f[14] = FPU_MUL_S(ctx->f[24], ctx->f[18]);
    // 0x2a6acc: 0x46015ac0  add.s       $f11, $f11, $f1
    ctx->pc = 0x2a6accu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[1]);
    // 0x2a6ad0: 0x46006300  add.s       $f12, $f12, $f0
    ctx->pc = 0x2a6ad0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x2a6ad4: 0x46027380  add.s       $f14, $f14, $f2
    ctx->pc = 0x2a6ad4u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[2]);
    // 0x2a6ad8: 0x46129282  mul.s       $f10, $f18, $f18
    ctx->pc = 0x2a6ad8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[18], ctx->f[18]);
    // 0x2a6adc: 0x46063202  mul.s       $f8, $f6, $f6
    ctx->pc = 0x2a6adcu;
    ctx->f[8] = FPU_MUL_S(ctx->f[6], ctx->f[6]);
    // 0x2a6ae0: 0x460d6a42  mul.s       $f9, $f13, $f13
    ctx->pc = 0x2a6ae0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
    // 0x2a6ae4: 0x4617c802  mul.s       $f0, $f25, $f23
    ctx->pc = 0x2a6ae4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[23]);
    // 0x2a6ae8: 0x461bc100  add.s       $f4, $f24, $f27
    ctx->pc = 0x2a6ae8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[24], ctx->f[27]);
    // 0x2a6aec: 0x46125282  mul.s       $f10, $f10, $f18
    ctx->pc = 0x2a6aecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[18]);
    // 0x2a6af0: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x2a6af0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
    // 0x2a6af4: 0x460d4a42  mul.s       $f9, $f9, $f13
    ctx->pc = 0x2a6af4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[13]);
    // 0x2a6af8: 0x4605c142  mul.s       $f5, $f24, $f5
    ctx->pc = 0x2a6af8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[24], ctx->f[5]);
    // 0x2a6afc: 0x460bc2c2  mul.s       $f11, $f24, $f11
    ctx->pc = 0x2a6afcu;
    ctx->f[11] = FPU_MUL_S(ctx->f[24], ctx->f[11]);
    // 0x2a6b00: 0x460cc302  mul.s       $f12, $f24, $f12
    ctx->pc = 0x2a6b00u;
    ctx->f[12] = FPU_MUL_S(ctx->f[24], ctx->f[12]);
    // 0x2a6b04: 0x460ec382  mul.s       $f14, $f24, $f14
    ctx->pc = 0x2a6b04u;
    ctx->f[14] = FPU_MUL_S(ctx->f[24], ctx->f[14]);
    // 0x2a6b08: 0x4617d3c2  mul.s       $f15, $f26, $f23
    ctx->pc = 0x2a6b08u;
    ctx->f[15] = FPU_MUL_S(ctx->f[26], ctx->f[23]);
    // 0x2a6b0c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2a6b0cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2a6b10: 0x4619c080  add.s       $f2, $f24, $f25
    ctx->pc = 0x2a6b10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[24], ctx->f[25]);
    // 0x2a6b14: 0x4617c002  mul.s       $f0, $f24, $f23
    ctx->pc = 0x2a6b14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[23]);
    // 0x2a6b18: 0x4605c142  mul.s       $f5, $f24, $f5
    ctx->pc = 0x2a6b18u;
    ctx->f[5] = FPU_MUL_S(ctx->f[24], ctx->f[5]);
    // 0x2a6b1c: 0x46085ac0  add.s       $f11, $f11, $f8
    ctx->pc = 0x2a6b1cu;
    ctx->f[11] = FPU_ADD_S(ctx->f[11], ctx->f[8]);
    // 0x2a6b20: 0x46096300  add.s       $f12, $f12, $f9
    ctx->pc = 0x2a6b20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[9]);
    // 0x2a6b24: 0x460a7380  add.s       $f14, $f14, $f10
    ctx->pc = 0x2a6b24u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[10]);
    // 0x2a6b28: 0x4618c042  mul.s       $f1, $f24, $f24
    ctx->pc = 0x2a6b28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[24], ctx->f[24]);
    // 0x2a6b2c: 0x461ac0c0  add.s       $f3, $f24, $f26
    ctx->pc = 0x2a6b2cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[24], ctx->f[26]);
    // 0x2a6b30: 0x460f1082  mul.s       $f2, $f2, $f15
    ctx->pc = 0x2a6b30u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2a6b34: 0x461353c2  mul.s       $f15, $f10, $f19
    ctx->pc = 0x2a6b34u;
    ctx->f[15] = FPU_MUL_S(ctx->f[10], ctx->f[19]);
    // 0x2a6b38: 0x46062982  mul.s       $f6, $f5, $f6
    ctx->pc = 0x2a6b38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x2a6b3c: 0x46134202  mul.s       $f8, $f8, $f19
    ctx->pc = 0x2a6b3cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[19]);
    // 0x2a6b40: 0x46007382  mul.s       $f14, $f14, $f0
    ctx->pc = 0x2a6b40u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x2a6b44: 0x46005ac2  mul.s       $f11, $f11, $f0
    ctx->pc = 0x2a6b44u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[0]);
    // 0x2a6b48: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x2a6b48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2a6b4c: 0x460709c2  mul.s       $f7, $f1, $f7
    ctx->pc = 0x2a6b4cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2a6b50: 0x461018c2  mul.s       $f3, $f3, $f16
    ctx->pc = 0x2a6b50u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
    // 0x2a6b54: 0x4619d802  mul.s       $f0, $f27, $f25
    ctx->pc = 0x2a6b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[27], ctx->f[25]);
    // 0x2a6b58: 0x461bd282  mul.s       $f10, $f26, $f27
    ctx->pc = 0x2a6b58u;
    ctx->f[10] = FPU_MUL_S(ctx->f[26], ctx->f[27]);
    // 0x2a6b5c: 0x46122c02  mul.s       $f16, $f5, $f18
    ctx->pc = 0x2a6b5cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[5], ctx->f[18]);
    // 0x2a6b60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2a6b60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x2a6b64: 0x460d2942  mul.s       $f5, $f5, $f13
    ctx->pc = 0x2a6b64u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[13]);
    // 0x2a6b68: 0x46134a42  mul.s       $f9, $f9, $f19
    ctx->pc = 0x2a6b68u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[19]);
    // 0x2a6b6c: 0x46083180  add.s       $f6, $f6, $f8
    ctx->pc = 0x2a6b6cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[8]);
    // 0x2a6b70: 0x461e3b40  add.s       $f13, $f7, $f30
    ctx->pc = 0x2a6b70u;
    ctx->f[13] = FPU_ADD_S(ctx->f[7], ctx->f[30]);
    // 0x2a6b74: 0x461c3a00  add.s       $f8, $f7, $f28
    ctx->pc = 0x2a6b74u;
    ctx->f[8] = FPU_ADD_S(ctx->f[7], ctx->f[28]);
    // 0x2a6b78: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2a6b78u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2a6b7c: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x2a6b7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
    // 0x2a6b80: 0x461ac802  mul.s       $f0, $f25, $f26
    ctx->pc = 0x2a6b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[25], ctx->f[26]);
    // 0x2a6b84: 0x461d39c0  add.s       $f7, $f7, $f29
    ctx->pc = 0x2a6b84u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[29]);
    // 0x2a6b88: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2a6b88u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2a6b8c: 0x460f8400  add.s       $f16, $f16, $f15
    ctx->pc = 0x2a6b8cu;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[15]);
    // 0x2a6b90: 0x461918c2  mul.s       $f3, $f3, $f25
    ctx->pc = 0x2a6b90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[25]);
    // 0x2a6b94: 0x461a2102  mul.s       $f4, $f4, $f26
    ctx->pc = 0x2a6b94u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[26]);
    // 0x2a6b98: 0x461b1082  mul.s       $f2, $f2, $f27
    ctx->pc = 0x2a6b98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[27]);
    // 0x2a6b9c: 0x46199480  add.s       $f18, $f18, $f25
    ctx->pc = 0x2a6b9cu;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[25]);
    // 0x2a6ba0: 0x461e0bc0  add.s       $f15, $f1, $f30
    ctx->pc = 0x2a6ba0u;
    ctx->f[15] = FPU_ADD_S(ctx->f[1], ctx->f[30]);
    // 0x2a6ba4: 0x461c0a40  add.s       $f9, $f1, $f28
    ctx->pc = 0x2a6ba4u;
    ctx->f[9] = FPU_ADD_S(ctx->f[1], ctx->f[28]);
    // 0x2a6ba8: 0x46005280  add.s       $f10, $f10, $f0
    ctx->pc = 0x2a6ba8u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[0]);
    // 0x2a6bac: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x2a6bacu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
    // 0x2a6bb0: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x2a6bb0u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
    // 0x2a6bb4: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x2a6bb4u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
    // 0x2a6bb8: 0x4611c442  mul.s       $f17, $f24, $f17
    ctx->pc = 0x2a6bb8u;
    ctx->f[17] = FPU_MUL_S(ctx->f[24], ctx->f[17]);
    // 0x2a6bbc: 0x4615c002  mul.s       $f0, $f24, $f21
    ctx->pc = 0x2a6bbcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[24], ctx->f[21]);
    // 0x2a6bc0: 0x461c18c2  mul.s       $f3, $f3, $f28
    ctx->pc = 0x2a6bc0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[28]);
    // 0x2a6bc4: 0x461a5ac2  mul.s       $f11, $f11, $f26
    ctx->pc = 0x2a6bc4u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[26]);
    // 0x2a6bc8: 0x46183182  mul.s       $f6, $f6, $f24
    ctx->pc = 0x2a6bc8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x2a6bcc: 0x461d2102  mul.s       $f4, $f4, $f29
    ctx->pc = 0x2a6bccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[29]);
    // 0x2a6bd0: 0x461b6302  mul.s       $f12, $f12, $f27
    ctx->pc = 0x2a6bd0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[27]);
    // 0x2a6bd4: 0x46182942  mul.s       $f5, $f5, $f24
    ctx->pc = 0x2a6bd4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x2a6bd8: 0x461d0840  add.s       $f1, $f1, $f29
    ctx->pc = 0x2a6bd8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[29]);
    // 0x2a6bdc: 0x461e1082  mul.s       $f2, $f2, $f30
    ctx->pc = 0x2a6bdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[30]);
    // 0x2a6be0: 0x46197382  mul.s       $f14, $f14, $f25
    ctx->pc = 0x2a6be0u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[25]);
    // 0x2a6be4: 0x46188402  mul.s       $f16, $f16, $f24
    ctx->pc = 0x2a6be4u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x2a6be8: 0x46129480  add.s       $f18, $f18, $f18
    ctx->pc = 0x2a6be8u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[18]);
    // 0x2a6bec: 0x46196b42  mul.s       $f13, $f13, $f25
    ctx->pc = 0x2a6becu;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[25]);
    // 0x2a6bf0: 0x461a4202  mul.s       $f8, $f8, $f26
    ctx->pc = 0x2a6bf0u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[26]);
    // 0x2a6bf4: 0x461b39c2  mul.s       $f7, $f7, $f27
    ctx->pc = 0x2a6bf4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[27]);
    // 0x2a6bf8: 0x46117bc2  mul.s       $f15, $f15, $f17
    ctx->pc = 0x2a6bf8u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[17]);
    // 0x2a6bfc: 0x46114a42  mul.s       $f9, $f9, $f17
    ctx->pc = 0x2a6bfcu;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[17]);
    // 0x2a6c00: 0x46110842  mul.s       $f1, $f1, $f17
    ctx->pc = 0x2a6c00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[17]);
    // 0x2a6c04: 0x46009480  add.s       $f18, $f18, $f0
    ctx->pc = 0x2a6c04u;
    ctx->f[18] = FPU_ADD_S(ctx->f[18], ctx->f[0]);
    // 0x2a6c08: 0x46147382  mul.s       $f14, $f14, $f20
    ctx->pc = 0x2a6c08u;
    ctx->f[14] = FPU_MUL_S(ctx->f[14], ctx->f[20]);
    // 0x2a6c0c: 0xc78080a0  lwc1        $f0, -0x7F60($gp)
    ctx->pc = 0x2a6c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6c10: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2a6c10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2a6c14: 0x46145ac2  mul.s       $f11, $f11, $f20
    ctx->pc = 0x2a6c14u;
    ctx->f[11] = FPU_MUL_S(ctx->f[11], ctx->f[20]);
    // 0x2a6c18: 0x46183182  mul.s       $f6, $f6, $f24
    ctx->pc = 0x2a6c18u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[24]);
    // 0x2a6c1c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x2a6c1cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x2a6c20: 0x46146302  mul.s       $f12, $f12, $f20
    ctx->pc = 0x2a6c20u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[20]);
    // 0x2a6c24: 0x46182942  mul.s       $f5, $f5, $f24
    ctx->pc = 0x2a6c24u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
    // 0x2a6c28: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2a6c28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2a6c2c: 0x46188402  mul.s       $f16, $f16, $f24
    ctx->pc = 0x2a6c2cu;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[24]);
    // 0x2a6c30: 0x46114202  mul.s       $f8, $f8, $f17
    ctx->pc = 0x2a6c30u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[17]);
    // 0x2a6c34: 0x461139c2  mul.s       $f7, $f7, $f17
    ctx->pc = 0x2a6c34u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[17]);
    // 0x2a6c38: 0x46116b42  mul.s       $f13, $f13, $f17
    ctx->pc = 0x2a6c38u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[17]);
    // 0x2a6c3c: 0x460b18c0  add.s       $f3, $f3, $f11
    ctx->pc = 0x2a6c3cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[11]);
    // 0x2a6c40: 0x460c2100  add.s       $f4, $f4, $f12
    ctx->pc = 0x2a6c40u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
    // 0x2a6c44: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x2a6c44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
    // 0x2a6c48: 0x46008402  mul.s       $f16, $f16, $f0
    ctx->pc = 0x2a6c48u;
    ctx->f[16] = FPU_MUL_S(ctx->f[16], ctx->f[0]);
    // 0x2a6c4c: 0x46175282  mul.s       $f10, $f10, $f23
    ctx->pc = 0x2a6c4cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[23]);
    // 0x2a6c50: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2a6c50u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
    // 0x2a6c54: 0x46184a42  mul.s       $f9, $f9, $f24
    ctx->pc = 0x2a6c54u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x2a6c58: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2a6c58u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2a6c5c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2a6c5cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2a6c60: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x2a6c60u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x2a6c64: 0x4611c442  mul.s       $f17, $f24, $f17
    ctx->pc = 0x2a6c64u;
    ctx->f[17] = FPU_MUL_S(ctx->f[24], ctx->f[17]);
    // 0x2a6c68: 0x460618c0  add.s       $f3, $f3, $f6
    ctx->pc = 0x2a6c68u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[6]);
    // 0x2a6c6c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2a6c6cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2a6c70: 0x46128c42  mul.s       $f17, $f17, $f18
    ctx->pc = 0x2a6c70u;
    ctx->f[17] = FPU_MUL_S(ctx->f[17], ctx->f[18]);
    // 0x2a6c74: 0x46101080  add.s       $f2, $f2, $f16
    ctx->pc = 0x2a6c74u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[16]);
    // 0x2a6c78: 0x46187bc2  mul.s       $f15, $f15, $f24
    ctx->pc = 0x2a6c78u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[24]);
    // 0x2a6c7c: 0x460ac282  mul.s       $f10, $f24, $f10
    ctx->pc = 0x2a6c7cu;
    ctx->f[10] = FPU_MUL_S(ctx->f[24], ctx->f[10]);
    // 0x2a6c80: 0x46184202  mul.s       $f8, $f8, $f24
    ctx->pc = 0x2a6c80u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[24]);
    // 0x2a6c84: 0x46184a42  mul.s       $f9, $f9, $f24
    ctx->pc = 0x2a6c84u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[24]);
    // 0x2a6c88: 0x461839c2  mul.s       $f7, $f7, $f24
    ctx->pc = 0x2a6c88u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[24]);
    // 0x2a6c8c: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x2a6c8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
    // 0x2a6c90: 0x46186b42  mul.s       $f13, $f13, $f24
    ctx->pc = 0x2a6c90u;
    ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[24]);
    // 0x2a6c94: 0x46115280  add.s       $f10, $f10, $f17
    ctx->pc = 0x2a6c94u;
    ctx->f[10] = FPU_ADD_S(ctx->f[10], ctx->f[17]);
    // 0x2a6c98: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x2a6c98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
    // 0x2a6c9c: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x2a6c9cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
    // 0x2a6ca0: 0x460d1080  add.s       $f2, $f2, $f13
    ctx->pc = 0x2a6ca0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[13]);
    // 0x2a6ca4: 0x46157bc2  mul.s       $f15, $f15, $f21
    ctx->pc = 0x2a6ca4u;
    ctx->f[15] = FPU_MUL_S(ctx->f[15], ctx->f[21]);
    // 0x2a6ca8: 0x46154a42  mul.s       $f9, $f9, $f21
    ctx->pc = 0x2a6ca8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[21]);
    // 0x2a6cac: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x2a6cacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x2a6cb0: 0x460affc0  add.s       $f31, $f31, $f10
    ctx->pc = 0x2a6cb0u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], ctx->f[10]);
    // 0x2a6cb4: 0x460f1080  add.s       $f2, $f2, $f15
    ctx->pc = 0x2a6cb4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[15]);
    // 0x2a6cb8: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x2a6cb8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
    // 0x2a6cbc: 0x46012100  add.s       $f4, $f4, $f1
    ctx->pc = 0x2a6cbcu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[1]);
    // 0x2a6cc0: 0x461f1083  div.s       $f2, $f2, $f31
    ctx->pc = 0x2a6cc0u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[31]);
    // 0x2a6cc4: 0x461f18c3  div.s       $f3, $f3, $f31
    ctx->pc = 0x2a6cc4u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[31]);
    // 0x2a6cc8: 0x461f2103  div.s       $f4, $f4, $f31
    ctx->pc = 0x2a6cc8u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[31]);
    // 0x2a6ccc: 0xe4a20008  swc1        $f2, 0x8($a1)
    ctx->pc = 0x2a6cccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a6cd0: 0xe4a30000  swc1        $f3, 0x0($a1)
    ctx->pc = 0x2a6cd0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a6cd4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2A6CD4u;
    {
        const bool branch_taken_0x2a6cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A6CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6CD4u;
        // 0x2a6cd8: 0xe4a40004  swc1        $f4, 0x4($a1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a6cd4) {
            ctx->pc = 0x2A6CF8u;
            goto label_2a6cf8;
        }
    }
    ctx->pc = 0x2A6CDCu;
label_2a6cdc:
    // 0x2a6cdc: 0xc78080a4  lwc1        $f0, -0x7F5C($gp)
    ctx->pc = 0x2a6cdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a6ce0: 0x4600f042  mul.s       $f1, $f30, $f0
    ctx->pc = 0x2a6ce0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[30], ctx->f[0]);
    // 0x2a6ce4: 0x4600e082  mul.s       $f2, $f28, $f0
    ctx->pc = 0x2a6ce4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[28], ctx->f[0]);
    // 0x2a6ce8: 0x4600e802  mul.s       $f0, $f29, $f0
    ctx->pc = 0x2a6ce8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[29], ctx->f[0]);
    // 0x2a6cec: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x2a6cecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x2a6cf0: 0xe4a20000  swc1        $f2, 0x0($a1)
    ctx->pc = 0x2a6cf0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2a6cf4: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x2a6cf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2a6cf8:
    // 0x2a6cf8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a6cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a6cfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a6cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a6d00: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x2a6d00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x2a6d04: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x2a6d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x2a6d08: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x2a6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
    // 0x2a6d0c: 0xaca00014  sw          $zero, 0x14($a1)
    ctx->pc = 0x2a6d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 0));
    // 0x2a6d10: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2a6d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a6d14: 0x4600f806  mov.s       $f0, $f31
    ctx->pc = 0x2a6d14u;
    ctx->f[0] = FPU_MOV_S(ctx->f[31]);
    // 0x2a6d18: 0xc7be0050  lwc1        $f30, 0x50($sp)
    ctx->pc = 0x2a6d18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
    // 0x2a6d1c: 0xc7bf0058  lwc1        $f31, 0x58($sp)
    ctx->pc = 0x2a6d1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
    // 0x2a6d20: 0xc7bd0048  lwc1        $f29, 0x48($sp)
    ctx->pc = 0x2a6d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
    // 0x2a6d24: 0xc7bc0040  lwc1        $f28, 0x40($sp)
    ctx->pc = 0x2a6d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
    // 0x2a6d28: 0xc7bb0038  lwc1        $f27, 0x38($sp)
    ctx->pc = 0x2a6d28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x2a6d2c: 0xc7ba0030  lwc1        $f26, 0x30($sp)
    ctx->pc = 0x2a6d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2a6d30: 0xc7b90028  lwc1        $f25, 0x28($sp)
    ctx->pc = 0x2a6d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x2a6d34: 0xc7b80020  lwc1        $f24, 0x20($sp)
    ctx->pc = 0x2a6d34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x2a6d38: 0xc7b70018  lwc1        $f23, 0x18($sp)
    ctx->pc = 0x2a6d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2a6d3c: 0xc7b60010  lwc1        $f22, 0x10($sp)
    ctx->pc = 0x2a6d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a6d40: 0xc7b50008  lwc1        $f21, 0x8($sp)
    ctx->pc = 0x2a6d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a6d44: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a6d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a6d48: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x2a6d48u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x2a6d4c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x2a6d4cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x2a6d50: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a6d50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2a6d54: 0x3e00008  jr          $ra
    ctx->pc = 0x2A6D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A6D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A6D54u;
        // 0x2a6d58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A6D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A6D5Cu;
    // 0x2a6d5c: 0x0  nop
    ctx->pc = 0x2a6d5cu;
    // NOP
    ctx->pc = 0x2a6d60u;
}
