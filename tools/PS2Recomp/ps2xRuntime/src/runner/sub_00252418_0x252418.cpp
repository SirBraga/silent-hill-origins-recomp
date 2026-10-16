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

// Function: sub_00252418
// Address: 0x252418 - 0x252530
void sub_00252418_0x252418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252418_0x252418");
#endif

    ctx->pc = 0x252418u;

    // 0x252418: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x252418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25241c: 0xe4a1000c  swc1        $f1, 0xC($a1)
    ctx->pc = 0x25241cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
    // 0x252420: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x252420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252424: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x252424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
    // 0x252428: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x252428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25242c: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x25242cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
    // 0x252430: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x252430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252434: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x252434u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x252438: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x252438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25243c: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x25243cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x252440: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x252440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252444: 0xe4a00008  swc1        $f0, 0x8($a1)
    ctx->pc = 0x252444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x252448: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x252448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25244c: 0xe4c10000  swc1        $f1, 0x0($a2)
    ctx->pc = 0x25244cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x252450: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x252450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252454: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x252454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x252458: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x252458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25245c: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x25245cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x252460: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x252460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252464: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x252464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x252468: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x252468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25246c: 0xe4c10010  swc1        $f1, 0x10($a2)
    ctx->pc = 0x25246cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x252470: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x252470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252474: 0x14e0000e  bnez        $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x252474u;
    {
        const bool branch_taken_0x252474 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x252478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252474u;
        // 0x252478: 0xe4c00014  swc1        $f0, 0x14($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x252474) {
            ctx->pc = 0x2524B0u;
            goto label_2524b0;
        }
    }
    ctx->pc = 0x25247Cu;
    // 0x25247c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x25247cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252480: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x252480u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252484: 0x0  nop
    ctx->pc = 0x252484u;
    // NOP
    // 0x252488: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x252488u;
    {
        const bool branch_taken_0x252488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252488) {
            ctx->pc = 0x25248Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252488u;
            // 0x25248c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252490u;
            goto label_252490;
        }
    }
    ctx->pc = 0x252490u;
label_252490:
    // 0x252490: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x252490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252494: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x252494u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252498: 0x0  nop
    ctx->pc = 0x252498u;
    // NOP
    // 0x25249c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x25249Cu;
    {
        const bool branch_taken_0x25249c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x25249c) {
            ctx->pc = 0x2524A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25249Cu;
            // 0x2524a0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524A4u;
            goto label_2524a4;
        }
    }
    ctx->pc = 0x2524A4u;
label_2524a4:
    // 0x2524a4: 0xe4ac0000  swc1        $f12, 0x0($a1)
    ctx->pc = 0x2524a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x2524a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2524A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2524ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524A8u;
        // 0x2524ac: 0xe4cc000c  swc1        $f12, 0xC($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2524A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2524B0u;
label_2524b0:
    // 0x2524b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2524b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2524b4: 0x54e2000e  bnel        $a3, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2524B4u;
    {
        const bool branch_taken_0x2524b4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2524b4) {
            ctx->pc = 0x2524B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524B4u;
            // 0x2524b8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524F0u;
            goto label_2524f0;
        }
    }
    ctx->pc = 0x2524BCu;
    // 0x2524bc: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2524bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524c0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2524c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2524c4: 0x0  nop
    ctx->pc = 0x2524c4u;
    // NOP
    // 0x2524c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2524C8u;
    {
        const bool branch_taken_0x2524c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2524c8) {
            ctx->pc = 0x2524CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524C8u;
            // 0x2524cc: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524D0u;
            goto label_2524d0;
        }
    }
    ctx->pc = 0x2524D0u;
label_2524d0:
    // 0x2524d0: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x2524d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524d4: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x2524d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2524d8: 0x0  nop
    ctx->pc = 0x2524d8u;
    // NOP
    // 0x2524dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2524DCu;
    {
        const bool branch_taken_0x2524dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2524dc) {
            ctx->pc = 0x2524E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2524DCu;
            // 0x2524e0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2524E4u;
            goto label_2524e4;
        }
    }
    ctx->pc = 0x2524E4u;
label_2524e4:
    // 0x2524e4: 0xe4ac0004  swc1        $f12, 0x4($a1)
    ctx->pc = 0x2524e4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x2524e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2524E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2524ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2524E8u;
        // 0x2524ec: 0xe4cc0010  swc1        $f12, 0x10($a2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2524E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2524F0u;
label_2524f0:
    // 0x2524f0: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2524F0u;
    {
        const bool branch_taken_0x2524f0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x2524f0) {
            ctx->pc = 0x252528u;
            goto label_252528;
        }
    }
    ctx->pc = 0x2524F8u;
    // 0x2524f8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2524f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2524fc: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x2524fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252500: 0x0  nop
    ctx->pc = 0x252500u;
    // NOP
    // 0x252504: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x252504u;
    {
        const bool branch_taken_0x252504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252504) {
            ctx->pc = 0x252508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252504u;
            // 0x252508: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x25250Cu;
            goto label_25250c;
        }
    }
    ctx->pc = 0x25250Cu;
label_25250c:
    // 0x25250c: 0xc4800014  lwc1        $f0, 0x14($a0)
    ctx->pc = 0x25250cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252510: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x252510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252514: 0x0  nop
    ctx->pc = 0x252514u;
    // NOP
    // 0x252518: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x252518u;
    {
        const bool branch_taken_0x252518 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252518) {
            ctx->pc = 0x25251Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x252518u;
            // 0x25251c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x252520u;
            goto label_252520;
        }
    }
    ctx->pc = 0x252520u;
label_252520:
    // 0x252520: 0xe4ac0008  swc1        $f12, 0x8($a1)
    ctx->pc = 0x252520u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
    // 0x252524: 0xe4cc0014  swc1        $f12, 0x14($a2)
    ctx->pc = 0x252524u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
label_252528:
    // 0x252528: 0x3e00008  jr          $ra
    ctx->pc = 0x252528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252530u;
}
