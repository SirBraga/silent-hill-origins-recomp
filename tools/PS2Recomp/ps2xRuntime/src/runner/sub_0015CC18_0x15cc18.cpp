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

// Function: sub_0015CC18
// Address: 0x15cc18 - 0x15cce8
void sub_0015CC18_0x15cc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015CC18_0x15cc18");
#endif

    switch (ctx->pc) {
        case 0x15cc38u: goto label_15cc38;
        default: break;
    }

    ctx->pc = 0x15cc18u;

    // 0x15cc18: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x15cc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15cc1c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x15cc1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15cc20: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x15cc20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15cc24: 0x1920002b  blez        $t1, . + 4 + (0x2B << 2)
    ctx->pc = 0x15CC24u;
    {
        const bool branch_taken_0x15cc24 = (GPR_S64(ctx, 9) <= 0);
        ctx->pc = 0x15CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC24u;
        // 0x15cc28: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc24) {
            ctx->pc = 0x15CCD4u;
            goto label_15ccd4;
        }
    }
    ctx->pc = 0x15CC2Cu;
    // 0x15cc2c: 0x240b0014  addiu       $t3, $zero, 0x14
    ctx->pc = 0x15cc2cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15cc30: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x15cc30u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x15cc34: 0x0  nop
    ctx->pc = 0x15cc34u;
    // NOP
label_15cc38:
    // 0x15cc38: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x15cc38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15cc3c: 0x8ce6000c  lw          $a2, 0xC($a3)
    ctx->pc = 0x15cc3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x15cc40: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x15cc40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15cc44: 0x103182a  slt         $v1, $t0, $v1
    ctx->pc = 0x15cc44u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x15cc48: 0x103280b  movn        $a1, $t0, $v1
    ctx->pc = 0x15cc48u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8));
    // 0x15cc4c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x15cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x15cc50: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x15cc50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15cc54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15CC54u;
    {
        const bool branch_taken_0x15cc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC54u;
        // 0x15cc58: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc54) {
            ctx->pc = 0x15CC6Cu;
            goto label_15cc6c;
        }
    }
    ctx->pc = 0x15CC5Cu;
    // 0x15cc5c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x15cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
    // 0x15cc60: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x15cc60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15cc64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15CC64u;
    {
        const bool branch_taken_0x15cc64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CC64u;
        // 0x15cc68: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cc64) {
            ctx->pc = 0x15CC74u;
            goto label_15cc74;
        }
    }
    ctx->pc = 0x15CC6Cu;
label_15cc6c:
    // 0x15cc6c: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x15cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x15cc70: 0x452823  subu        $a1, $v0, $a1
    ctx->pc = 0x15cc70u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_15cc74:
    // 0x15cc74: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x15cc74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x15cc78: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x15cc78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x15cc7c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x15cc7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x15cc80: 0xc4810044  lwc1        $f1, 0x44($a0)
    ctx->pc = 0x15cc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15cc84: 0x2280a  movz        $a1, $zero, $v0
    ctx->pc = 0x15cc84u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0));
    // 0x15cc88: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x15cc88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x15cc8c: 0xab1018  mult        $v0, $a1, $t3
    ctx->pc = 0x15cc8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15cc90: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15cc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15cc94: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x15cc94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15cc98: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x15cc98u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x15cc9c: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x15cc9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15cca0: 0x0  nop
    ctx->pc = 0x15cca0u;
    // NOP
    // 0x15cca4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x15CCA4u;
    {
        const bool branch_taken_0x15cca4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x15CCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCA4u;
        // 0x15cca8: 0xe4400004  swc1        $f0, 0x4($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15cca4) {
            ctx->pc = 0x15CCB4u;
            goto label_15ccb4;
        }
    }
    ctx->pc = 0x15CCACu;
    // 0x15ccac: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15CCACu;
    {
        const bool branch_taken_0x15ccac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCACu;
        // 0x15ccb0: 0x240a0001  addiu       $t2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccac) {
            ctx->pc = 0x15CCC4u;
            goto label_15ccc4;
        }
    }
    ctx->pc = 0x15CCB4u;
label_15ccb4:
    // 0x15ccb4: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x15ccb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15ccb8: 0x0  nop
    ctx->pc = 0x15ccb8u;
    // NOP
    // 0x15ccbc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15CCBCu;
    {
        const bool branch_taken_0x15ccbc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x15ccbc) {
            ctx->pc = 0x15CCC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCBCu;
            // 0x15ccc0: 0xe4420004  swc1        $f2, 0x4($v0) (Delay Slot)
            { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CCC4u;
            goto label_15ccc4;
        }
    }
    ctx->pc = 0x15CCC4u;
label_15ccc4:
    // 0x15ccc4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x15ccc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x15ccc8: 0x109102a  slt         $v0, $t0, $t1
    ctx->pc = 0x15ccc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x15cccc: 0x5440ffda  bnel        $v0, $zero, . + 4 + (-0x26 << 2)
    ctx->pc = 0x15CCCCu;
    {
        const bool branch_taken_0x15cccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15cccc) {
            ctx->pc = 0x15CCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15CCCCu;
            // 0x15ccd0: 0x8c870020  lw          $a3, 0x20($a0) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15CC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_15cc38;
        }
    }
    ctx->pc = 0x15CCD4u;
label_15ccd4:
    // 0x15ccd4: 0x15400002  bnez        $t2, . + 4 + (0x2 << 2)
    ctx->pc = 0x15CCD4u;
    {
        const bool branch_taken_0x15ccd4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x15CCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15CCD4u;
        // 0x15ccd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ccd4) {
            ctx->pc = 0x15CCE0u;
            goto label_15cce0;
        }
    }
    ctx->pc = 0x15CCDCu;
    // 0x15ccdc: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x15ccdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_15cce0:
    // 0x15cce0: 0x3e00008  jr          $ra
    ctx->pc = 0x15CCE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15CCE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15CCE8u;
}
