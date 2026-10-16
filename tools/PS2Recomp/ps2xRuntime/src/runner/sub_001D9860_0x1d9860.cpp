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

// Function: sub_001D9860
// Address: 0x1d9860 - 0x1d9908
void sub_001D9860_0x1d9860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9860_0x1d9860");
#endif

    switch (ctx->pc) {
        case 0x1d98e0u: goto label_1d98e0;
        default: break;
    }

    ctx->pc = 0x1d9860u;

    // 0x1d9860: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d9860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d9864: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d9864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9868: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x1d9868u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1d986c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d986cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d9870: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x1d9870u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x1d9874: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1d9874u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x1d9878: 0xc4540058  lwc1        $f20, 0x58($v0)
    ctx->pc = 0x1d9878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d987c: 0x4614a834  c.lt.s      $f21, $f20
    ctx->pc = 0x1d987cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9880: 0x0  nop
    ctx->pc = 0x1d9880u;
    // NOP
    // 0x1d9884: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1D9884u;
    {
        const bool branch_taken_0x1d9884 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9884) {
            ctx->pc = 0x1D98A0u;
            goto label_1d98a0;
        }
    }
    ctx->pc = 0x1D988Cu;
    // 0x1d988c: 0x460da501  sub.s       $f20, $f20, $f13
    ctx->pc = 0x1d988cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
    // 0x1d9890: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1d9890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d9894: 0x0  nop
    ctx->pc = 0x1d9894u;
    // NOP
    // 0x1d9898: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D9898u;
    {
        const bool branch_taken_0x1d9898 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d9898) {
            ctx->pc = 0x1D989Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9898u;
            // 0x1d989c: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D98A0u;
            goto label_1d98a0;
        }
    }
    ctx->pc = 0x1D98A0u;
label_1d98a0:
    // 0x1d98a0: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1d98a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d98a4: 0x0  nop
    ctx->pc = 0x1d98a4u;
    // NOP
    // 0x1d98a8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x1D98A8u;
    {
        const bool branch_taken_0x1d98a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d98a8) {
            ctx->pc = 0x1D98ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D98A8u;
            // 0x1d98ac: 0x8c440048  lw          $a0, 0x48($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D98C8u;
            goto label_1d98c8;
        }
    }
    ctx->pc = 0x1D98B0u;
    // 0x1d98b0: 0x460da500  add.s       $f20, $f20, $f13
    ctx->pc = 0x1d98b0u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[13]);
    // 0x1d98b4: 0x4614a836  c.le.s      $f21, $f20
    ctx->pc = 0x1d98b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d98b8: 0x0  nop
    ctx->pc = 0x1d98b8u;
    // NOP
    // 0x1d98bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1D98BCu;
    {
        const bool branch_taken_0x1d98bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1d98bc) {
            ctx->pc = 0x1D98C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D98BCu;
            // 0x1d98c0: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D98C4u;
            goto label_1d98c4;
        }
    }
    ctx->pc = 0x1D98C4u;
label_1d98c4:
    // 0x1d98c4: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x1d98c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1d98c8:
    // 0x1d98c8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D98C8u;
    {
        const bool branch_taken_0x1d98c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D98CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98C8u;
        // 0x1d98cc: 0xe4540058  swc1        $f20, 0x58($v0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 88), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98c8) {
            ctx->pc = 0x1D98E0u;
            goto label_1d98e0;
        }
    }
    ctx->pc = 0x1D98D0u;
    // 0x1d98d0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1d98d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d98d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d98d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d98d8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x1D98D8u;
    SET_GPR_U32(ctx, 31, 0x1D98E0u);
    ctx->pc = 0x1D98DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D98D8u;
    // 0x1d98dc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x1D98D8u, 0x1D98E0u)) {
        return;
    }
    ctx->pc = 0x1D98E0u;
label_1d98e0:
    // 0x1d98e0: 0x4615a032  c.eq.s      $f20, $f21
    ctx->pc = 0x1d98e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d98e4: 0x0  nop
    ctx->pc = 0x1d98e4u;
    // NOP
    // 0x1d98e8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1D98E8u;
    {
        const bool branch_taken_0x1d98e8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D98ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D98E8u;
        // 0x1d98ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d98e8) {
            ctx->pc = 0x1D98F4u;
            goto label_1d98f4;
        }
    }
    ctx->pc = 0x1D98F0u;
    // 0x1d98f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d98f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d98f4:
    // 0x1d98f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d98f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d98f8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x1d98f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1d98fc: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1d98fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d9900: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9900u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9900u;
        // 0x1d9904: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9900u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9908u;
}
