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

// Function: sub_0010EA00
// Address: 0x10ea00 - 0x10eae0
void sub_0010EA00_0x10ea00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EA00_0x10ea00");
#endif

    switch (ctx->pc) {
        case 0x10ea58u: goto label_10ea58;
        case 0x10ea70u: goto label_10ea70;
        case 0x10eab0u: goto label_10eab0;
        default: break;
    }

    ctx->pc = 0x10ea00u;

    // 0x10ea00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ea00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ea04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ea04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ea08: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ea08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ea0c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10ea10: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x10ea10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ea14: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10ea18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ea18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10ea1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ea1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea20: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10ea20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10ea24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10ea24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ea28: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10EA28u;
    {
        const bool branch_taken_0x10ea28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA28u;
        // 0x10ea2c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea28) {
            ctx->pc = 0x10EA38u;
            goto label_10ea38;
        }
    }
    ctx->pc = 0x10EA30u;
    // 0x10ea30: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10EA30u;
    {
        const bool branch_taken_0x10ea30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA30u;
        // 0x10ea34: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea30) {
            ctx->pc = 0x10EA48u;
            goto label_10ea48;
        }
    }
    ctx->pc = 0x10EA38u;
label_10ea38:
    // 0x10ea38: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10ea38u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ea3c: 0x0  nop
    ctx->pc = 0x10ea3cu;
    // NOP
    // 0x10ea40: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10EA40u;
    {
        const bool branch_taken_0x10ea40 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ea40) {
            ctx->pc = 0x10EA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA40u;
            // 0x10ea44: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EA48u;
            goto label_10ea48;
        }
    }
    ctx->pc = 0x10EA48u;
label_10ea48:
    // 0x10ea48: 0xe62c0014  swc1        $f12, 0x14($s1)
    ctx->pc = 0x10ea48u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
    // 0x10ea4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ea4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ea50: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10ea50u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10ea54: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x10ea54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_10ea58:
    // 0x10ea58: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10ea58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10ea5c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10EA5Cu;
    {
        const bool branch_taken_0x10ea5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea5c) {
            ctx->pc = 0x10EA60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA5Cu;
            // 0x10ea60: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EAB4u;
            goto label_10eab4;
        }
    }
    ctx->pc = 0x10EA64u;
    // 0x10ea64: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10ea64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10ea68: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10EA68u;
    SET_GPR_U32(ctx, 31, 0x10EA70u);
    ctx->pc = 0x10EA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EA68u;
    // 0x10ea6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10EA68u, 0x10EA70u)) {
        return;
    }
    ctx->pc = 0x10EA70u;
label_10ea70:
    // 0x10ea70: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x10ea70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10ea74: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x10ea74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ea78: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10ea78u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10ea7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ea80: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10EA80u;
    {
        const bool branch_taken_0x10ea80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EA80u;
        // 0x10ea84: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ea80) {
            ctx->pc = 0x10EAB0u;
            goto label_10eab0;
        }
    }
    ctx->pc = 0x10EA88u;
    // 0x10ea88: 0x8e6282f4  lw          $v0, -0x7D0C($s3)
    ctx->pc = 0x10ea88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10ea8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EA8Cu;
    {
        const bool branch_taken_0x10ea8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ea8c) {
            ctx->pc = 0x10EA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EA8Cu;
            // 0x10ea90: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EAB4u;
            goto label_10eab4;
        }
    }
    ctx->pc = 0x10EA94u;
    // 0x10ea94: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x10ea94u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x10ea98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ea98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ea9c: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10ea9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10eaa0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EAA0u;
    {
        const bool branch_taken_0x10eaa0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAA0u;
        // 0x10eaa4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eaa0) {
            ctx->pc = 0x10EAB0u;
            goto label_10eab0;
        }
    }
    ctx->pc = 0x10EAA8u;
    // 0x10eaa8: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10EAA8u;
    SET_GPR_U32(ctx, 31, 0x10EAB0u);
    ctx->pc = 0x10EAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EAA8u;
    // 0x10eaac: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10EAA8u, 0x10EAB0u)) {
        return;
    }
    ctx->pc = 0x10EAB0u;
label_10eab0:
    // 0x10eab0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10eab0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10eab4:
    // 0x10eab4: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10eab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10eab8: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10EAB8u;
    {
        const bool branch_taken_0x10eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAB8u;
        // 0x10eabc: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eab8) {
            ctx->pc = 0x10EA58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ea58;
        }
    }
    ctx->pc = 0x10EAC0u;
    // 0x10eac0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10eac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10eac4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10eac4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10eac8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10eac8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10eacc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10eaccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ead0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ead0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ead4: 0x3e00008  jr          $ra
    ctx->pc = 0x10EAD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EAD4u;
        // 0x10ead8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EAD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EADCu;
    // 0x10eadc: 0x0  nop
    ctx->pc = 0x10eadcu;
    // NOP
    ctx->pc = 0x10eae0u;
}
