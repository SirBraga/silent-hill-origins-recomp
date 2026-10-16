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

// Function: sub_00185BE8
// Address: 0x185be8 - 0x185cb0
void sub_00185BE8_0x185be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185BE8_0x185be8");
#endif

    switch (ctx->pc) {
        case 0x185c00u: goto label_185c00;
        case 0x185c08u: goto label_185c08;
        default: break;
    }

    ctx->pc = 0x185be8u;

    // 0x185be8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x185be8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185bec: 0xc4860050  lwc1        $f6, 0x50($a0)
    ctx->pc = 0x185becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x185bf0: 0x46013034  c.lt.s      $f6, $f1
    ctx->pc = 0x185bf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185bf4: 0x0  nop
    ctx->pc = 0x185bf4u;
    // NOP
    // 0x185bf8: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x185BF8u;
    {
        const bool branch_taken_0x185bf8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x185bf8) {
            ctx->pc = 0x185BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185BF8u;
            // 0x185bfc: 0xc4800054  lwc1        $f0, 0x54($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x185C10u;
            goto label_185c10;
        }
    }
    ctx->pc = 0x185C00u;
label_185c00:
    // 0x185c00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185c00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185c04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x185c04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_185c08:
    // 0x185c08: 0x3e00008  jr          $ra
    ctx->pc = 0x185C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185C10u;
label_185c10:
    // 0x185c10: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x185c10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185c14: 0x0  nop
    ctx->pc = 0x185c14u;
    // NOP
    // 0x185c18: 0x4501fff9  bc1t        . + 4 + (-0x7 << 2)
    ctx->pc = 0x185C18u;
    {
        const bool branch_taken_0x185c18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185c18) {
            ctx->pc = 0x185C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185c00;
        }
    }
    ctx->pc = 0x185C20u;
    // 0x185c20: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x185c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x185c24: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x185C24u;
    {
        const bool branch_taken_0x185c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x185C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185C24u;
        // 0x185c28: 0xe4810054  swc1        $f1, 0x54($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 84), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x185c24) {
            ctx->pc = 0x185C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185c00;
        }
    }
    ctx->pc = 0x185C2Cu;
    // 0x185c2c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x185c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x185c30: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x185c30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x185c34: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x185c34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x185c38: 0xc440bc94  lwc1        $f0, -0x436C($v0)
    ctx->pc = 0x185c38u;
    { uint32_t bits = FAST_READ32(0x6CBC94u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185c3c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x185c3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x185c40: 0x3c01473b  lui         $at, 0x473B
    ctx->pc = 0x185c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18235 << 16));
    // 0x185c44: 0x34218000  ori         $at, $at, 0x8000
    ctx->pc = 0x185c44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32768);
    // 0x185c48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x185c48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x185c4c: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x185c4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x185c50: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x185c50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x185c54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x185c54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x185c58: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x185c58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x185c5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x185c5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c60: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x185c60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
    // 0x185c64: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x185c64u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
    // 0x185c68: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x185c68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x185c6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x185c6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x185c70: 0x0  nop
    ctx->pc = 0x185c70u;
    // NOP
    // 0x185c74: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x185c74u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x185c78: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x185c78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x185c7c: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x185c7cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x185c80: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x185c80u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
    // 0x185c84: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x185c84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185c88: 0x0  nop
    ctx->pc = 0x185c88u;
    // NOP
    // 0x185c8c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x185C8Cu;
    {
        const bool branch_taken_0x185c8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185c8c) {
            ctx->pc = 0x185C90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C8Cu;
            // 0x185c90: 0x46002806  mov.s       $f0, $f5 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[5]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x185C94u;
            goto label_185c94;
        }
    }
    ctx->pc = 0x185C94u;
label_185c94:
    // 0x185c94: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x185c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x185c98: 0x0  nop
    ctx->pc = 0x185c98u;
    // NOP
    // 0x185c9c: 0x4503ffda  bc1tl       . + 4 + (-0x26 << 2)
    ctx->pc = 0x185C9Cu;
    {
        const bool branch_taken_0x185c9c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x185c9c) {
            ctx->pc = 0x185CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x185C9Cu;
            // 0x185ca0: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x185C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_185c08;
        }
    }
    ctx->pc = 0x185CA4u;
    // 0x185ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x185CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185CA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185CACu;
    // 0x185cac: 0x0  nop
    ctx->pc = 0x185cacu;
    // NOP
    ctx->pc = 0x185cb0u;
}
