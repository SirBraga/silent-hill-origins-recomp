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

// Function: sub_002B42E0
// Address: 0x2b42e0 - 0x2b4390
void sub_002B42E0_0x2b42e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B42E0_0x2b42e0");
#endif

    ctx->pc = 0x2b42e0u;

    // 0x2b42e0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b42e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b42e4: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x2b42e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b42e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b42e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b42ec: 0x0  nop
    ctx->pc = 0x2b42ecu;
    // NOP
    // 0x2b42f0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2B42F0u;
    {
        const bool branch_taken_0x2b42f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b42f0) {
            ctx->pc = 0x2B42F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B42F0u;
            // 0x2b42f4: 0x460c0841  sub.s       $f1, $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4308u;
            goto label_2b4308;
        }
    }
    ctx->pc = 0x2B42F8u;
    // 0x2b42f8: 0x460c0041  sub.s       $f1, $f0, $f12
    ctx->pc = 0x2b42f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2b42fc: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b42fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b4300: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4300u;
    {
        const bool branch_taken_0x2b4300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4300u;
        // 0x2b4304: 0xc4c00000  lwc1        $f0, 0x0($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4300) {
            ctx->pc = 0x2B4310u;
            goto label_2b4310;
        }
    }
    ctx->pc = 0x2B4308u;
label_2b4308:
    // 0x2b4308: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x2b4308u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2b430c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b430cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4310:
    // 0x2b4310: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2b4310u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2b4314: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b4314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2b4318: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b4318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b431c: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x2b431cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4320: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4320u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4324: 0x0  nop
    ctx->pc = 0x2b4324u;
    // NOP
    // 0x2b4328: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4328u;
    {
        const bool branch_taken_0x2b4328 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4328) {
            ctx->pc = 0x2B432Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4328u;
            // 0x2b432c: 0x460c0841  sub.s       $f1, $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4340u;
            goto label_2b4340;
        }
    }
    ctx->pc = 0x2B4330u;
    // 0x2b4330: 0x460c0041  sub.s       $f1, $f0, $f12
    ctx->pc = 0x2b4330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2b4334: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2b4334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b4338: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4338u;
    {
        const bool branch_taken_0x2b4338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B433Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4338u;
        // 0x2b433c: 0xc4c00004  lwc1        $f0, 0x4($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4338) {
            ctx->pc = 0x2B4348u;
            goto label_2b4348;
        }
    }
    ctx->pc = 0x2B4340u;
label_2b4340:
    // 0x2b4340: 0xe4810014  swc1        $f1, 0x14($a0)
    ctx->pc = 0x2b4340u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x2b4344: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x2b4344u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4348:
    // 0x2b4348: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2b4348u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2b434c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b434cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x2b4350: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b4350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4354: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x2b4354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4358: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b435c: 0x0  nop
    ctx->pc = 0x2b435cu;
    // NOP
    // 0x2b4360: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x2B4360u;
    {
        const bool branch_taken_0x2b4360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4360) {
            ctx->pc = 0x2B4364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4360u;
            // 0x2b4364: 0x460c0841  sub.s       $f1, $f1, $f12 (Delay Slot)
            ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4378u;
            goto label_2b4378;
        }
    }
    ctx->pc = 0x2B4368u;
    // 0x2b4368: 0x460c0041  sub.s       $f1, $f0, $f12
    ctx->pc = 0x2b4368u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x2b436c: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b436cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b4370: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4370u;
    {
        const bool branch_taken_0x2b4370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B4374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4370u;
        // 0x2b4374: 0xc4c00008  lwc1        $f0, 0x8($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b4370) {
            ctx->pc = 0x2B4380u;
            goto label_2b4380;
        }
    }
    ctx->pc = 0x2B4378u;
label_2b4378:
    // 0x2b4378: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x2b4378u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
    // 0x2b437c: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b437cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b4380:
    // 0x2b4380: 0x460c0000  add.s       $f0, $f0, $f12
    ctx->pc = 0x2b4380u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[12]);
    // 0x2b4384: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B4388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4384u;
        // 0x2b4388: 0xe4800008  swc1        $f0, 0x8($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B438Cu;
    // 0x2b438c: 0x0  nop
    ctx->pc = 0x2b438cu;
    // NOP
    ctx->pc = 0x2b4390u;
}
