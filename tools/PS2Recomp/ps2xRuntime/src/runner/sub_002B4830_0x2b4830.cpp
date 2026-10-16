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

// Function: sub_002B4830
// Address: 0x2b4830 - 0x2b48b8
void sub_002B4830_0x2b4830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4830_0x2b4830");
#endif

    ctx->pc = 0x2b4830u;

    // 0x2b4830: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2b4830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2b4834: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b4834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4838: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x2b4838u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x2b483c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4840: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x2b4840u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x2b4844: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b4844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
    // 0x2b4848: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2b4848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b484c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b484cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b4850: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x2b4850u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x2b4854: 0x46001140  add.s       $f5, $f2, $f0
    ctx->pc = 0x2b4854u;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x2b4858: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x2b4858u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b485c: 0x0  nop
    ctx->pc = 0x2b485cu;
    // NOP
    // 0x2b4860: 0x4502000f  bc1fl       . + 4 + (0xF << 2)
    ctx->pc = 0x2B4860u;
    {
        const bool branch_taken_0x2b4860 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4860) {
            ctx->pc = 0x2B4864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4860u;
            // 0x2b4864: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B48A0u;
            goto label_2b48a0;
        }
    }
    ctx->pc = 0x2B4868u;
    // 0x2b4868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b4868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b486c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b486cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b4870: 0x46051096  rsqrt.s     $f2, $f2, $f5
    ctx->pc = 0x2b4870u;
    ctx->f[2] = FPU_RSQRT_S(ctx, ctx->f[2], ctx->f[5]);
    // 0x2b4874: 0x46022042  mul.s       $f1, $f4, $f2
    ctx->pc = 0x2b4874u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2b4878: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2b4878u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b487c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4880: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x2b4880u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x2b4884: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b4884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b4888: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b4888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b488c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2b488cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2b4890: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b4890u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b4894: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2B4894u;
    {
        const bool branch_taken_0x2b4894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4894u;
        // 0x2b4898: 0x46022942  mul.s       $f5, $f5, $f2 (Delay Slot)
        ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4894) {
            ctx->pc = 0x2B48B0u;
            goto label_2b48b0;
        }
    }
    ctx->pc = 0x2B489Cu;
    // 0x2b489c: 0x0  nop
    ctx->pc = 0x2b489cu;
    // NOP
label_2b48a0:
    // 0x2b48a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b48a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2b48a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b48a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b48a8: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b48a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x2b48ac: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2b48acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_2b48b0:
    // 0x2b48b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B48B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B48B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B48B0u;
        // 0x2b48b4: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B48B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B48B8u;
}
