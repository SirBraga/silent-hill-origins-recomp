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

// Function: sub_00164F28
// Address: 0x164f28 - 0x164ff8
void sub_00164F28_0x164f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164F28_0x164f28");
#endif

    ctx->pc = 0x164f28u;

    // 0x164f28: 0x460e6840  add.s       $f1, $f13, $f14
    ctx->pc = 0x164f28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x164f2c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x164f2cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164f30: 0x0  nop
    ctx->pc = 0x164f30u;
    // NOP
    // 0x164f34: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x164f34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164f38: 0x0  nop
    ctx->pc = 0x164f38u;
    // NOP
    // 0x164f3c: 0x4501002b  bc1t        . + 4 + (0x2B << 2)
    ctx->pc = 0x164F3Cu;
    {
        const bool branch_taken_0x164f3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x164F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164F3Cu;
        // 0x164f40: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x164f3c) {
            ctx->pc = 0x164FECu;
            goto label_164fec;
        }
    }
    ctx->pc = 0x164F44u;
    // 0x164f44: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x164f44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x164f48: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x164f48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x164f4c: 0x0  nop
    ctx->pc = 0x164f4cu;
    // NOP
    // 0x164f50: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x164f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164f54: 0x0  nop
    ctx->pc = 0x164f54u;
    // NOP
    // 0x164f58: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x164F58u;
    {
        const bool branch_taken_0x164f58 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164f58) {
            ctx->pc = 0x164F78u;
            goto label_164f78;
        }
    }
    ctx->pc = 0x164F60u;
    // 0x164f60: 0x0  nop
    ctx->pc = 0x164f60u;
    // NOP
    // 0x164f64: 0x0  nop
    ctx->pc = 0x164f64u;
    // NOP
    // 0x164f68: 0x46017383  div.s       $f14, $f14, $f1
    ctx->pc = 0x164f68u;
    ctx->f[14] = FPU_DIV_S(ctx, ctx->f[14], ctx->f[1]);
    // 0x164f6c: 0x0  nop
    ctx->pc = 0x164f6cu;
    // NOP
    // 0x164f70: 0x0  nop
    ctx->pc = 0x164f70u;
    // NOP
    // 0x164f74: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x164f74u;
    ctx->f[13] = FPU_DIV_S(ctx, ctx->f[13], ctx->f[1]);
label_164f78:
    // 0x164f78: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x164f78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x164f7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x164f7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x164f80: 0x460d6034  c.lt.s      $f12, $f13
    ctx->pc = 0x164f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164f84: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x164f84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x164f88: 0x460e0001  sub.s       $f0, $f0, $f14
    ctx->pc = 0x164f88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[14]);
    // 0x164f8c: 0x46001043  div.s       $f1, $f2, $f0
    ctx->pc = 0x164f8cu;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
    // 0x164f90: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x164F90u;
    {
        const bool branch_taken_0x164f90 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x164f90) {
            ctx->pc = 0x164F94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164F90u;
            // 0x164f94: 0x460e1001  sub.s       $f0, $f2, $f14 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FB0u;
            goto label_164fb0;
        }
    }
    ctx->pc = 0x164F98u;
    // 0x164f98: 0x0  nop
    ctx->pc = 0x164f98u;
    // NOP
    // 0x164f9c: 0x0  nop
    ctx->pc = 0x164f9cu;
    // NOP
    // 0x164fa0: 0x460d0803  div.s       $f0, $f1, $f13
    ctx->pc = 0x164fa0u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[13]);
    // 0x164fa4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x164fa4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x164fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x164FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FA8u;
        // 0x164fac: 0x460c0002  mul.s       $f0, $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164FB0u;
label_164fb0:
    // 0x164fb0: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x164fb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x164fb4: 0x0  nop
    ctx->pc = 0x164fb4u;
    // NOP
    // 0x164fb8: 0x45030009  bc1tl       . + 4 + (0x9 << 2)
    ctx->pc = 0x164FB8u;
    {
        const bool branch_taken_0x164fb8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x164fb8) {
            ctx->pc = 0x164FBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x164FB8u;
            // 0x164fbc: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
            ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x164FE0u;
            goto label_164fe0;
        }
    }
    ctx->pc = 0x164FC0u;
    // 0x164fc0: 0x0  nop
    ctx->pc = 0x164fc0u;
    // NOP
    // 0x164fc4: 0x0  nop
    ctx->pc = 0x164fc4u;
    // NOP
    // 0x164fc8: 0x460e0803  div.s       $f0, $f1, $f14
    ctx->pc = 0x164fc8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[14]);
    // 0x164fcc: 0x460c1301  sub.s       $f12, $f2, $f12
    ctx->pc = 0x164fccu;
    ctx->f[12] = FPU_SUB_S(ctx->f[2], ctx->f[12]);
    // 0x164fd0: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x164fd0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x164fd4: 0x460c0002  mul.s       $f0, $f0, $f12
    ctx->pc = 0x164fd4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    // 0x164fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x164FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FD8u;
        // 0x164fdc: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164FE0u;
label_164fe0:
    // 0x164fe0: 0x460d0001  sub.s       $f0, $f0, $f13
    ctx->pc = 0x164fe0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[13]);
    // 0x164fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x164FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x164FE4u;
        // 0x164fe8: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164FECu;
label_164fec:
    // 0x164fec: 0x3e00008  jr          $ra
    ctx->pc = 0x164FECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x164FECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x164FF4u;
    // 0x164ff4: 0x0  nop
    ctx->pc = 0x164ff4u;
    // NOP
    ctx->pc = 0x164ff8u;
}
