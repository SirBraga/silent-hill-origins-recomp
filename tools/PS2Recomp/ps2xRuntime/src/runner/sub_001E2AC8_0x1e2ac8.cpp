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

// Function: sub_001E2AC8
// Address: 0x1e2ac8 - 0x1e2bb8
void sub_001E2AC8_0x1e2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2AC8_0x1e2ac8");
#endif

    switch (ctx->pc) {
        case 0x1e2af0u: goto label_1e2af0;
        case 0x1e2b50u: goto label_1e2b50;
        default: break;
    }

    ctx->pc = 0x1e2ac8u;

    // 0x1e2ac8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1e2ac8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2acc: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x1e2accu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
    // 0x1e2ad0: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1e2ad0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1e2ad4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1e2ad4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1e2ad8: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1e2ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1e2adc: 0x18e00033  blez        $a3, . + 4 + (0x33 << 2)
    ctx->pc = 0x1E2ADCu;
    {
        const bool branch_taken_0x1e2adc = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x1E2AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2ADCu;
        // 0x1e2ae0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2adc) {
            ctx->pc = 0x1E2BACu;
            goto label_1e2bac;
        }
    }
    ctx->pc = 0x1E2AE4u;
    // 0x1e2ae4: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1e2ae4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1e2ae8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e2ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e2aec: 0x0  nop
    ctx->pc = 0x1e2aecu;
    // NOP
label_1e2af0:
    // 0x1e2af0: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1e2af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e2af4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e2af8: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1e2af8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2afc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1e2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e2b00: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1e2b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1e2b04: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1e2b04u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b08: 0x0  nop
    ctx->pc = 0x1e2b08u;
    // NOP
    // 0x1e2b0c: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x1E2B0Cu;
    {
        const bool branch_taken_0x1e2b0c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B0Cu;
        // 0x1e2b10: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b0c) {
            ctx->pc = 0x1E2B98u;
            goto label_1e2b98;
        }
    }
    ctx->pc = 0x1E2B14u;
    // 0x1e2b14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e2b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e2b18: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1e2b18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2b1c: 0x46011001  sub.s       $f0, $f2, $f1
    ctx->pc = 0x1e2b1cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x1e2b20: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x1e2b20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b24: 0x0  nop
    ctx->pc = 0x1e2b24u;
    // NOP
    // 0x1e2b28: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x1E2B28u;
    {
        const bool branch_taken_0x1e2b28 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2b28) {
            ctx->pc = 0x1E2B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B28u;
            // 0x1e2b2c: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B9Cu;
            goto label_1e2b9c;
        }
    }
    ctx->pc = 0x1E2B30u;
    // 0x1e2b30: 0x46040036  c.le.s      $f0, $f4
    ctx->pc = 0x1e2b30u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b34: 0x0  nop
    ctx->pc = 0x1e2b34u;
    // NOP
    // 0x1e2b38: 0x45020018  bc1fl       . + 4 + (0x18 << 2)
    ctx->pc = 0x1E2B38u;
    {
        const bool branch_taken_0x1e2b38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2b38) {
            ctx->pc = 0x1E2B3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B38u;
            // 0x1e2b3c: 0x8cc70004  lw          $a3, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B9Cu;
            goto label_1e2b9c;
        }
    }
    ctx->pc = 0x1E2B40u;
    // 0x1e2b40: 0x18e00015  blez        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1E2B40u;
    {
        const bool branch_taken_0x1e2b40 = (GPR_S64(ctx, 7) <= 0);
        ctx->pc = 0x1E2B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2B40u;
        // 0x1e2b44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2b40) {
            ctx->pc = 0x1E2B98u;
            goto label_1e2b98;
        }
    }
    ctx->pc = 0x1E2B48u;
    // 0x1e2b48: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1e2b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1e2b4c: 0x0  nop
    ctx->pc = 0x1e2b4cu;
    // NOP
label_1e2b50:
    // 0x1e2b50: 0x8cc40010  lw          $a0, 0x10($a2)
    ctx->pc = 0x1e2b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1e2b54: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1e2b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1e2b58: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x1e2b58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1e2b5c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1e2b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1e2b60: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1e2b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2b64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2b64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b68: 0x0  nop
    ctx->pc = 0x1e2b68u;
    // NOP
    // 0x1e2b6c: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x1E2B6Cu;
    {
        const bool branch_taken_0x1e2b6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2b6c) {
            ctx->pc = 0x1E2B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B6Cu;
            // 0x1e2b70: 0x8cc20004  lw          $v0, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B88u;
            goto label_1e2b88;
        }
    }
    ctx->pc = 0x1E2B74u;
    // 0x1e2b74: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1e2b74u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2b78: 0x0  nop
    ctx->pc = 0x1e2b78u;
    // NOP
    // 0x1e2b7c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E2B7Cu;
    {
        const bool branch_taken_0x1e2b7c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2b7c) {
            ctx->pc = 0x1E2B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B7Cu;
            // 0x1e2b80: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B84u;
            goto label_1e2b84;
        }
    }
    ctx->pc = 0x1E2B84u;
label_1e2b84:
    // 0x1e2b84: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1e2b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e2b88:
    // 0x1e2b88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e2b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e2b8c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x1e2b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1e2b90: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E2B90u;
    {
        const bool branch_taken_0x1e2b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2b90) {
            ctx->pc = 0x1E2B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2B90u;
            // 0x1e2b94: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2B50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2b50;
        }
    }
    ctx->pc = 0x1E2B98u;
label_1e2b98:
    // 0x1e2b98: 0x8cc70004  lw          $a3, 0x4($a2)
    ctx->pc = 0x1e2b98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1e2b9c:
    // 0x1e2b9c: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x1e2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e2ba0: 0xa7102a  slt         $v0, $a1, $a3
    ctx->pc = 0x1e2ba0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x1e2ba4: 0x5440ffd2  bnel        $v0, $zero, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1E2BA4u;
    {
        const bool branch_taken_0x1e2ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e2ba4) {
            ctx->pc = 0x1E2BA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E2BA4u;
            // 0x1e2ba8: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E2AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2af0;
        }
    }
    ctx->pc = 0x1E2BACu;
label_1e2bac:
    // 0x1e2bac: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2BACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2BACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2BB4u;
    // 0x1e2bb4: 0x0  nop
    ctx->pc = 0x1e2bb4u;
    // NOP
    ctx->pc = 0x1e2bb8u;
}
