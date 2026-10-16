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

// Function: sub_002AA858
// Address: 0x2aa858 - 0x2aa8e8
void sub_002AA858_0x2aa858(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AA858_0x2aa858");
#endif

    ctx->pc = 0x2aa858u;

    // 0x2aa858: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x2aa858u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2aa85c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x2aa85cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2aa860: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2aa860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2aa864: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2aa864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa868: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2aa868u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa86c: 0x460d0041  sub.s       $f1, $f0, $f13
    ctx->pc = 0x2aa86cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x2aa870: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x2aa870u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa874: 0x0  nop
    ctx->pc = 0x2aa874u;
    // NOP
    // 0x2aa878: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2AA878u;
    {
        const bool branch_taken_0x2aa878 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA878u;
        // 0x2aa87c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa878) {
            ctx->pc = 0x2AA884u;
            goto label_2aa884;
        }
    }
    ctx->pc = 0x2AA880u;
    // 0x2aa880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2aa880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aa884:
    // 0x2aa884: 0x10800016  beqz        $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2AA884u;
    {
        const bool branch_taken_0x2aa884 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aa884) {
            ctx->pc = 0x2AA8E0u;
            goto label_2aa8e0;
        }
    }
    ctx->pc = 0x2AA88Cu;
    // 0x2aa88c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2AA88Cu;
    {
        const bool branch_taken_0x2aa88c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aa88c) {
            ctx->pc = 0x2AA890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2AA88Cu;
            // 0x2aa890: 0xe4820000  swc1        $f2, 0x0($a0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2AA8D0u;
            goto label_2aa8d0;
        }
    }
    ctx->pc = 0x2AA894u;
    // 0x2aa894: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2aa894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x2aa898: 0xe61021  addu        $v0, $a3, $a2
    ctx->pc = 0x2aa898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x2aa89c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2aa89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2aa8a0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2aa8a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x2aa8a4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x2aa8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x2aa8a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2aa8a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa8ac: 0x0  nop
    ctx->pc = 0x2aa8acu;
    // NOP
    // 0x2aa8b0: 0x4500000a  bc1f        . + 4 + (0xA << 2)
    ctx->pc = 0x2AA8B0u;
    {
        const bool branch_taken_0x2aa8b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA8B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8B0u;
        // 0x2aa8b4: 0xe4800004  swc1        $f0, 0x4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8b0) {
            ctx->pc = 0x2AA8DCu;
            goto label_2aa8dc;
        }
    }
    ctx->pc = 0x2AA8B8u;
    // 0x2aa8b8: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2aa8b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2aa8bc: 0x0  nop
    ctx->pc = 0x2aa8bcu;
    // NOP
    // 0x2aa8c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x2AA8C0u;
    {
        const bool branch_taken_0x2aa8c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2AA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8C0u;
        // 0x2aa8c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aa8c0) {
            ctx->pc = 0x2AA8E0u;
            goto label_2aa8e0;
        }
    }
    ctx->pc = 0x2AA8C8u;
    // 0x2aa8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AA8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AA8C8u;
        // 0x2aa8cc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA8D0u;
label_2aa8d0:
    // 0x2aa8d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2aa8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2aa8d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2aa8d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2aa8d8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2aa8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2aa8dc:
    // 0x2aa8dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aa8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aa8e0:
    // 0x2aa8e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AA8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AA8E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AA8E8u;
}
