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

// Function: sub_0024E998
// Address: 0x24e998 - 0x24ea20
void sub_0024E998_0x24e998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024E998_0x24e998");
#endif

    ctx->pc = 0x24e998u;

    // 0x24e998: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24e998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24e99c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x24e99cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x24e9a0: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24e9a0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24e9a4: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24e9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e9a8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x24e9a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
    // 0x24e9ac: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24e9acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24e9b0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x24e9b0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x24e9b4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24e9b4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24e9b8: 0x46010044  c1          0x10044
    ctx->pc = 0x24e9b8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[1]);
    // 0x24e9bc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24e9bcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9c0: 0x0  nop
    ctx->pc = 0x24e9c0u;
    // NOP
    // 0x24e9c4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x24e9c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24e9c8: 0x0  nop
    ctx->pc = 0x24e9c8u;
    // NOP
    // 0x24e9cc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x24E9CCu;
    {
        const bool branch_taken_0x24e9cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24E9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9CCu;
        // 0x24e9d0: 0x46000886  mov.s       $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9cc) {
            ctx->pc = 0x24E9F0u;
            goto label_24e9f0;
        }
    }
    ctx->pc = 0x24E9D4u;
    // 0x24e9d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24e9d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24e9d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24e9d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24e9dc: 0x0  nop
    ctx->pc = 0x24e9dcu;
    // NOP
    // 0x24e9e0: 0x46010083  div.s       $f2, $f0, $f1
    ctx->pc = 0x24e9e0u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x24e9e4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24E9E4u;
    {
        const bool branch_taken_0x24e9e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24E9E4u;
        // 0x24e9e8: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24e9e4) {
            ctx->pc = 0x24E9F8u;
            goto label_24e9f8;
        }
    }
    ctx->pc = 0x24E9ECu;
    // 0x24e9ec: 0x0  nop
    ctx->pc = 0x24e9ecu;
    // NOP
label_24e9f0:
    // 0x24e9f0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24e9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24e9f4: 0x0  nop
    ctx->pc = 0x24e9f4u;
    // NOP
label_24e9f8:
    // 0x24e9f8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24e9f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24e9fc: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24e9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24ea00: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24ea00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24ea04: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24ea04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24ea08: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x24ea08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x24ea0c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x24ea0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24ea10: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24ea10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24ea14: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x24ea14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24ea18: 0x3e00008  jr          $ra
    ctx->pc = 0x24EA18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EA18u;
        // 0x24ea1c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EA18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EA20u;
}
