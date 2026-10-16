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

// Function: sub_002D3E88
// Address: 0x2d3e88 - 0x2d3f90
void sub_002D3E88_0x2d3e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D3E88_0x2d3e88");
#endif

    ctx->pc = 0x2d3e88u;

    // 0x2d3e88: 0xc4e70000  lwc1        $f7, 0x0($a3)
    ctx->pc = 0x2d3e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x2d3e8c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d3e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d3e90: 0xc4e80008  lwc1        $f8, 0x8($a3)
    ctx->pc = 0x2d3e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2d3e94: 0xc4cb0008  lwc1        $f11, 0x8($a2)
    ctx->pc = 0x2d3e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2d3e98: 0xc4e40004  lwc1        $f4, 0x4($a3)
    ctx->pc = 0x2d3e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2d3e9c: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x2d3e9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x2d3ea0: 0x460b4201  sub.s       $f8, $f8, $f11
    ctx->pc = 0x2d3ea0u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[11]);
    // 0x2d3ea4: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x2d3ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2d3ea8: 0x46062101  sub.s       $f4, $f4, $f6
    ctx->pc = 0x2d3ea8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[6]);
    // 0x2d3eac: 0x460339c1  sub.s       $f7, $f7, $f3
    ctx->pc = 0x2d3eacu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[3]);
    // 0x2d3eb0: 0xe7a80028  swc1        $f8, 0x28($sp)
    ctx->pc = 0x2d3eb0u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2d3eb4: 0xe7a40024  swc1        $f4, 0x24($sp)
    ctx->pc = 0x2d3eb4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x2d3eb8: 0xe7a70020  swc1        $f7, 0x20($sp)
    ctx->pc = 0x2d3eb8u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2d3ebc: 0xc4850000  lwc1        $f5, 0x0($a0)
    ctx->pc = 0x2d3ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2d3ec0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x2d3ec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3ec4: 0x46032941  sub.s       $f5, $f5, $f3
    ctx->pc = 0x2d3ec4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[3]);
    // 0x2d3ec8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2d3ec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3ecc: 0x460b0841  sub.s       $f1, $f1, $f11
    ctx->pc = 0x2d3eccu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[11]);
    // 0x2d3ed0: 0x46060001  sub.s       $f0, $f0, $f6
    ctx->pc = 0x2d3ed0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[6]);
    // 0x2d3ed4: 0x46012242  mul.s       $f9, $f4, $f1
    ctx->pc = 0x2d3ed4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[1]);
    // 0x2d3ed8: 0x46003a82  mul.s       $f10, $f7, $f0
    ctx->pc = 0x2d3ed8u;
    ctx->f[10] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
    // 0x2d3edc: 0x46052082  mul.s       $f2, $f4, $f5
    ctx->pc = 0x2d3edcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x2d3ee0: 0x46013842  mul.s       $f1, $f7, $f1
    ctx->pc = 0x2d3ee0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3ee4: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2d3ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2d3ee8: 0x46054142  mul.s       $f5, $f8, $f5
    ctx->pc = 0x2d3ee8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[8], ctx->f[5]);
    // 0x2d3eec: 0x46025281  sub.s       $f10, $f10, $f2
    ctx->pc = 0x2d3eecu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[2]);
    // 0x2d3ef0: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x2d3ef0u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x2d3ef4: 0x46012941  sub.s       $f5, $f5, $f1
    ctx->pc = 0x2d3ef4u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[1]);
    // 0x2d3ef8: 0xe7aa0008  swc1        $f10, 0x8($sp)
    ctx->pc = 0x2d3ef8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2d3efc: 0xe7a90000  swc1        $f9, 0x0($sp)
    ctx->pc = 0x2d3efcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2d3f00: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x2d3f00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2d3f04: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2d3f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2d3f08: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2d3f08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2d3f0c: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x2d3f0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x2d3f10: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2d3f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2d3f14: 0x460b1081  sub.s       $f2, $f2, $f11
    ctx->pc = 0x2d3f14u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[11]);
    // 0x2d3f18: 0x46060841  sub.s       $f1, $f1, $f6
    ctx->pc = 0x2d3f18u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
    // 0x2d3f1c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x2d3f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2d3f20: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x2d3f20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2d3f24: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x2d3f24u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x2d3f28: 0x460220c2  mul.s       $f3, $f4, $f2
    ctx->pc = 0x2d3f28u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2d3f2c: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2d3f2cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x2d3f30: 0x46013982  mul.s       $f6, $f7, $f1
    ctx->pc = 0x2d3f30u;
    ctx->f[6] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
    // 0x2d3f34: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x2d3f34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x2d3f38: 0x460239c2  mul.s       $f7, $f7, $f2
    ctx->pc = 0x2d3f38u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[2]);
    // 0x2d3f3c: 0x46014202  mul.s       $f8, $f8, $f1
    ctx->pc = 0x2d3f3cu;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[1]);
    // 0x2d3f40: 0x46043181  sub.s       $f6, $f6, $f4
    ctx->pc = 0x2d3f40u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x2d3f44: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x2d3f44u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x2d3f48: 0x460818c1  sub.s       $f3, $f3, $f8
    ctx->pc = 0x2d3f48u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[8]);
    // 0x2d3f4c: 0xe7a60018  swc1        $f6, 0x18($sp)
    ctx->pc = 0x2d3f4cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x2d3f50: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x2d3f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x2d3f54: 0xe7a30010  swc1        $f3, 0x10($sp)
    ctx->pc = 0x2d3f54u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2d3f58: 0x46034a42  mul.s       $f9, $f9, $f3
    ctx->pc = 0x2d3f58u;
    ctx->f[9] = FPU_MUL_S(ctx->f[9], ctx->f[3]);
    // 0x2d3f5c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2d3f5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2d3f60: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x2d3f60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x2d3f64: 0x46065282  mul.s       $f10, $f10, $f6
    ctx->pc = 0x2d3f64u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[6]);
    // 0x2d3f68: 0x46054a40  add.s       $f9, $f9, $f5
    ctx->pc = 0x2d3f68u;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[5]);
    // 0x2d3f6c: 0x460a4a40  add.s       $f9, $f9, $f10
    ctx->pc = 0x2d3f6cu;
    ctx->f[9] = FPU_ADD_S(ctx->f[9], ctx->f[10]);
    // 0x2d3f70: 0x46090836  c.le.s      $f1, $f9
    ctx->pc = 0x2d3f70u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2d3f74: 0x0  nop
    ctx->pc = 0x2d3f74u;
    // NOP
    // 0x2d3f78: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x2D3F78u;
    {
        const bool branch_taken_0x2d3f78 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2D3F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F78u;
        // 0x2d3f7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d3f78) {
            ctx->pc = 0x2D3F88u;
            goto label_2d3f88;
        }
    }
    ctx->pc = 0x2D3F80u;
    // 0x2d3f80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d3f80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d3f84: 0x0  nop
    ctx->pc = 0x2d3f84u;
    // NOP
label_2d3f88:
    // 0x2d3f88: 0x3e00008  jr          $ra
    ctx->pc = 0x2D3F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D3F88u;
        // 0x2d3f8c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D3F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D3F90u;
}
