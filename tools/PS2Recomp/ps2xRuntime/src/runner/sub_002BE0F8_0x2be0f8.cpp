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

// Function: sub_002BE0F8
// Address: 0x2be0f8 - 0x2be220
void sub_002BE0F8_0x2be0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BE0F8_0x2be0f8");
#endif

    ctx->pc = 0x2be0f8u;

    // 0x2be0f8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2be0f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2be0fc: 0xc4ab0004  lwc1        $f11, 0x4($a1)
    ctx->pc = 0x2be0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x2be100: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x2be100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2be104: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2be104u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2be108: 0xc448000c  lwc1        $f8, 0xC($v0)
    ctx->pc = 0x2be108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x2be10c: 0xc4af0000  lwc1        $f15, 0x0($a1)
    ctx->pc = 0x2be10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x2be110: 0x460b2242  mul.s       $f9, $f4, $f11
    ctx->pc = 0x2be110u;
    ctx->f[9] = FPU_MUL_S(ctx->f[4], ctx->f[11]);
    // 0x2be114: 0x46002187  neg.s       $f6, $f4
    ctx->pc = 0x2be114u;
    ctx->f[6] = FPU_NEG_S(ctx->f[4]);
    // 0x2be118: 0xc4ae0008  lwc1        $f14, 0x8($a1)
    ctx->pc = 0x2be118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2be11c: 0x460f4002  mul.s       $f0, $f8, $f15
    ctx->pc = 0x2be11cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[15]);
    // 0x2be120: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2be120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2be124: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2be124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2be128: 0x460b40c2  mul.s       $f3, $f8, $f11
    ctx->pc = 0x2be128u;
    ctx->f[3] = FPU_MUL_S(ctx->f[8], ctx->f[11]);
    // 0x2be12c: 0x460f3182  mul.s       $f6, $f6, $f15
    ctx->pc = 0x2be12cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[15]);
    // 0x2be130: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2be130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2be134: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x2be134u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x2be138: 0x46090000  add.s       $f0, $f0, $f9
    ctx->pc = 0x2be138u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[9]);
    // 0x2be13c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2be13cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2be140: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x2be140u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
    // 0x2be144: 0x460e1242  mul.s       $f9, $f2, $f14
    ctx->pc = 0x2be144u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[14]);
    // 0x2be148: 0x460b0b42  mul.s       $f13, $f1, $f11
    ctx->pc = 0x2be148u;
    ctx->f[13] = FPU_MUL_S(ctx->f[1], ctx->f[11]);
    // 0x2be14c: 0x460f1142  mul.s       $f5, $f2, $f15
    ctx->pc = 0x2be14cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[15]);
    // 0x2be150: 0x460e0a82  mul.s       $f10, $f1, $f14
    ctx->pc = 0x2be150u;
    ctx->f[10] = FPU_MUL_S(ctx->f[1], ctx->f[14]);
    // 0x2be154: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2be154u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2be158: 0x460008c7  neg.s       $f3, $f1
    ctx->pc = 0x2be158u;
    ctx->f[3] = FPU_NEG_S(ctx->f[1]);
    // 0x2be15c: 0x46090001  sub.s       $f0, $f0, $f9
    ctx->pc = 0x2be15cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[9]);
    // 0x2be160: 0x460e4242  mul.s       $f9, $f8, $f14
    ctx->pc = 0x2be160u;
    ctx->f[9] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x2be164: 0x460d2941  sub.s       $f5, $f5, $f13
    ctx->pc = 0x2be164u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[13]);
    // 0x2be168: 0x460a3180  add.s       $f6, $f6, $f10
    ctx->pc = 0x2be168u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[10]);
    // 0x2be16c: 0x460b12c2  mul.s       $f11, $f2, $f11
    ctx->pc = 0x2be16cu;
    ctx->f[11] = FPU_MUL_S(ctx->f[2], ctx->f[11]);
    // 0x2be170: 0x460f18c2  mul.s       $f3, $f3, $f15
    ctx->pc = 0x2be170u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[15]);
    // 0x2be174: 0x46092940  add.s       $f5, $f5, $f9
    ctx->pc = 0x2be174u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[9]);
    // 0x2be178: 0x46100002  mul.s       $f0, $f0, $f16
    ctx->pc = 0x2be178u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[16]);
    // 0x2be17c: 0x46103182  mul.s       $f6, $f6, $f16
    ctx->pc = 0x2be17cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[16]);
    // 0x2be180: 0x460e2382  mul.s       $f14, $f4, $f14
    ctx->pc = 0x2be180u;
    ctx->f[14] = FPU_MUL_S(ctx->f[4], ctx->f[14]);
    // 0x2be184: 0x460b18c1  sub.s       $f3, $f3, $f11
    ctx->pc = 0x2be184u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[11]);
    // 0x2be188: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2be188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2be18c: 0x46102942  mul.s       $f5, $f5, $f16
    ctx->pc = 0x2be18cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[16]);
    // 0x2be190: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x2be190u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2be194: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x2be194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x2be198: 0x46066182  mul.s       $f6, $f12, $f6
    ctx->pc = 0x2be198u;
    ctx->f[6] = FPU_MUL_S(ctx->f[12], ctx->f[6]);
    // 0x2be19c: 0x460e18c1  sub.s       $f3, $f3, $f14
    ctx->pc = 0x2be19cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[14]);
    // 0x2be1a0: 0xe7a50008  swc1        $f5, 0x8($sp)
    ctx->pc = 0x2be1a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2be1a4: 0x46056142  mul.s       $f5, $f12, $f5
    ctx->pc = 0x2be1a4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[5]);
    // 0x2be1a8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2be1a8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2be1ac: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x2be1acu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
    // 0x2be1b0: 0x461018c2  mul.s       $f3, $f3, $f16
    ctx->pc = 0x2be1b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
    // 0x2be1b4: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2be1b4u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2be1b8: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2be1b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2be1bc: 0x46010982  mul.s       $f6, $f1, $f1
    ctx->pc = 0x2be1bcu;
    ctx->f[6] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2be1c0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2be1c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2be1c4: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x2be1c4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x2be1c8: 0xe7a3000c  swc1        $f3, 0xC($sp)
    ctx->pc = 0x2be1c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2be1cc: 0x46021142  mul.s       $f5, $f2, $f2
    ctx->pc = 0x2be1ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x2be1d0: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x2be1d0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2be1d4: 0x460420c2  mul.s       $f3, $f4, $f4
    ctx->pc = 0x2be1d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2be1d8: 0x460c4200  add.s       $f8, $f8, $f12
    ctx->pc = 0x2be1d8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[12]);
    // 0x2be1dc: 0x46053180  add.s       $f6, $f6, $f5
    ctx->pc = 0x2be1dcu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[5]);
    // 0x2be1e0: 0x46084002  mul.s       $f0, $f8, $f8
    ctx->pc = 0x2be1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x2be1e4: 0xe448000c  swc1        $f8, 0xC($v0)
    ctx->pc = 0x2be1e4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2be1e8: 0x46033180  add.s       $f6, $f6, $f3
    ctx->pc = 0x2be1e8u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[3]);
    // 0x2be1ec: 0x46060000  add.s       $f0, $f0, $f6
    ctx->pc = 0x2be1ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[6]);
    // 0x2be1f0: 0x460039d6  rsqrt.s     $f7, $f7, $f0
    ctx->pc = 0x2be1f0u;
    ctx->f[7] = FPU_RSQRT_S(ctx, ctx->f[7], ctx->f[0]);
    // 0x2be1f4: 0x46074202  mul.s       $f8, $f8, $f7
    ctx->pc = 0x2be1f4u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[7]);
    // 0x2be1f8: 0xe448000c  swc1        $f8, 0xC($v0)
    ctx->pc = 0x2be1f8u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x2be1fc: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x2be1fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
    // 0x2be200: 0x46072102  mul.s       $f4, $f4, $f7
    ctx->pc = 0x2be200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[7]);
    // 0x2be204: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2be204u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2be208: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x2be208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
    // 0x2be20c: 0xe4440008  swc1        $f4, 0x8($v0)
    ctx->pc = 0x2be20cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x2be210: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2be210u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x2be214: 0x3e00008  jr          $ra
    ctx->pc = 0x2BE214u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BE218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BE214u;
        // 0x2be218: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BE214u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BE21Cu;
    // 0x2be21c: 0x0  nop
    ctx->pc = 0x2be21cu;
    // NOP
    ctx->pc = 0x2be220u;
}
