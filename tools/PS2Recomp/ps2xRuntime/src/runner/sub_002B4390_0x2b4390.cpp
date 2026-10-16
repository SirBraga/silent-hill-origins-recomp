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

// Function: sub_002B4390
// Address: 0x2b4390 - 0x2b4428
void sub_002B4390_0x2b4390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B4390_0x2b4390");
#endif

    ctx->pc = 0x2b4390u;

    // 0x2b4390: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b4390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b4394: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2b4394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b4398: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b4398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b439c: 0x0  nop
    ctx->pc = 0x2b439cu;
    // NOP
    // 0x2b43a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2B43A0u;
    {
        const bool branch_taken_0x2b43a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43a0) {
            ctx->pc = 0x2B43A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43A0u;
            // 0x2b43a4: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43B0u;
            goto label_2b43b0;
        }
    }
    ctx->pc = 0x2B43A8u;
    // 0x2b43a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B43A8u;
    {
        const bool branch_taken_0x2b43a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43A8u;
        // 0x2b43ac: 0xe4810010  swc1        $f1, 0x10($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43a8) {
            ctx->pc = 0x2B43C0u;
            goto label_2b43c0;
        }
    }
    ctx->pc = 0x2B43B0u;
label_2b43b0:
    // 0x2b43b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b43b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b43b4: 0x0  nop
    ctx->pc = 0x2b43b4u;
    // NOP
    // 0x2b43b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B43B8u;
    {
        const bool branch_taken_0x2b43b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43b8) {
            ctx->pc = 0x2B43BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43B8u;
            // 0x2b43bc: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43C0u;
            goto label_2b43c0;
        }
    }
    ctx->pc = 0x2B43C0u;
label_2b43c0:
    // 0x2b43c0: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x2b43c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b43c4: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b43c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b43c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b43c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b43cc: 0x0  nop
    ctx->pc = 0x2b43ccu;
    // NOP
    // 0x2b43d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2B43D0u;
    {
        const bool branch_taken_0x2b43d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43d0) {
            ctx->pc = 0x2B43D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43D0u;
            // 0x2b43d4: 0xc4800004  lwc1        $f0, 0x4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43E0u;
            goto label_2b43e0;
        }
    }
    ctx->pc = 0x2B43D8u;
    // 0x2b43d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B43D8u;
    {
        const bool branch_taken_0x2b43d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B43DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B43D8u;
        // 0x2b43dc: 0xe4810014  swc1        $f1, 0x14($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b43d8) {
            ctx->pc = 0x2B43F0u;
            goto label_2b43f0;
        }
    }
    ctx->pc = 0x2B43E0u;
label_2b43e0:
    // 0x2b43e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b43e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b43e4: 0x0  nop
    ctx->pc = 0x2b43e4u;
    // NOP
    // 0x2b43e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B43E8u;
    {
        const bool branch_taken_0x2b43e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b43e8) {
            ctx->pc = 0x2B43ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B43E8u;
            // 0x2b43ec: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B43F0u;
            goto label_2b43f0;
        }
    }
    ctx->pc = 0x2B43F0u;
label_2b43f0:
    // 0x2b43f0: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2b43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b43f4: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2b43f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b43f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b43f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b43fc: 0x0  nop
    ctx->pc = 0x2b43fcu;
    // NOP
    // 0x2b4400: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2B4400u;
    {
        const bool branch_taken_0x2b4400 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4400) {
            ctx->pc = 0x2B4404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4400u;
            // 0x2b4404: 0xc4800008  lwc1        $f0, 0x8($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4410u;
            goto label_2b4410;
        }
    }
    ctx->pc = 0x2B4408u;
    // 0x2b4408: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B440Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B4408u;
        // 0x2b440c: 0xe4810018  swc1        $f1, 0x18($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4410u;
label_2b4410:
    // 0x2b4410: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2b4410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b4414: 0x0  nop
    ctx->pc = 0x2b4414u;
    // NOP
    // 0x2b4418: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2B4418u;
    {
        const bool branch_taken_0x2b4418 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b4418) {
            ctx->pc = 0x2B441Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B4418u;
            // 0x2b441c: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B4420u;
            goto label_2b4420;
        }
    }
    ctx->pc = 0x2B4420u;
label_2b4420:
    // 0x2b4420: 0x3e00008  jr          $ra
    ctx->pc = 0x2B4420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B4420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B4428u;
}
