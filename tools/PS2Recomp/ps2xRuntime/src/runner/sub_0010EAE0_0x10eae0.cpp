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

// Function: sub_0010EAE0
// Address: 0x10eae0 - 0x10ebc8
void sub_0010EAE0_0x10eae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EAE0_0x10eae0");
#endif

    switch (ctx->pc) {
        case 0x10eb30u: goto label_10eb30;
        case 0x10eb40u: goto label_10eb40;
        case 0x10eb58u: goto label_10eb58;
        case 0x10eb98u: goto label_10eb98;
        default: break;
    }

    ctx->pc = 0x10eae0u;

    // 0x10eae0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10eae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10eae4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x10eae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10eae8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10eae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10eaec: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10eaecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10eaf0: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x10eaf0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eaf4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10eaf8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10eafc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10eafcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb00: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10eb04: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x10eb04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10eb08: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x10EB08u;
    {
        const bool branch_taken_0x10eb08 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB08u;
        // 0x10eb0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb08) {
            ctx->pc = 0x10EB24u;
            goto label_10eb24;
        }
    }
    ctx->pc = 0x10EB10u;
    // 0x10eb10: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x10eb10u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10eb14: 0x0  nop
    ctx->pc = 0x10eb14u;
    // NOP
    // 0x10eb18: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x10EB18u;
    {
        const bool branch_taken_0x10eb18 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB18u;
        // 0x10eb1c: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb18) {
            ctx->pc = 0x10EB24u;
            goto label_10eb24;
        }
    }
    ctx->pc = 0x10EB20u;
    // 0x10eb20: 0x46000806  mov.s       $f0, $f1
    ctx->pc = 0x10eb20u;
    ctx->f[0] = FPU_MOV_S(ctx->f[1]);
label_10eb24:
    // 0x10eb24: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x10eb24u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x10eb28: 0xc06036a  jal         func_180DA8
    ctx->pc = 0x10EB28u;
    SET_GPR_U32(ctx, 31, 0x10EB30u);
    ctx->pc = 0x10EB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB28u;
    // 0x10eb2c: 0xe6200018  swc1        $f0, 0x18($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DA8u, 0x10EB28u, 0x10EB30u)) {
        return;
    }
    ctx->pc = 0x10EB30u;
label_10eb30:
    // 0x10eb30: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10eb30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10eb34: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10eb34u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10eb38: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x10eb38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x10eb3c: 0x0  nop
    ctx->pc = 0x10eb3cu;
    // NOP
label_10eb40:
    // 0x10eb40: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10eb44: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10EB44u;
    {
        const bool branch_taken_0x10eb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eb44) {
            ctx->pc = 0x10EB48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EB44u;
            // 0x10eb48: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EB9Cu;
            goto label_10eb9c;
        }
    }
    ctx->pc = 0x10EB4Cu;
    // 0x10eb4c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10eb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10eb50: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10EB50u;
    SET_GPR_U32(ctx, 31, 0x10EB58u);
    ctx->pc = 0x10EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB50u;
    // 0x10eb54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10EB50u, 0x10EB58u)) {
        return;
    }
    ctx->pc = 0x10EB58u;
label_10eb58:
    // 0x10eb58: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x10eb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10eb5c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x10eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10eb60: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10eb60u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10eb64: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10eb64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eb68: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10EB68u;
    {
        const bool branch_taken_0x10eb68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB68u;
        // 0x10eb6c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb68) {
            ctx->pc = 0x10EB98u;
            goto label_10eb98;
        }
    }
    ctx->pc = 0x10EB70u;
    // 0x10eb70: 0x8e6282f4  lw          $v0, -0x7D0C($s3)
    ctx->pc = 0x10eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10eb74: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EB74u;
    {
        const bool branch_taken_0x10eb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10eb74) {
            ctx->pc = 0x10EB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EB74u;
            // 0x10eb78: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EB9Cu;
            goto label_10eb9c;
        }
    }
    ctx->pc = 0x10EB7Cu;
    // 0x10eb7c: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x10eb7cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x10eb80: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10eb84: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10eb88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EB88u;
    {
        const bool branch_taken_0x10eb88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EB88u;
        // 0x10eb8c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eb88) {
            ctx->pc = 0x10EB98u;
            goto label_10eb98;
        }
    }
    ctx->pc = 0x10EB90u;
    // 0x10eb90: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10EB90u;
    SET_GPR_U32(ctx, 31, 0x10EB98u);
    ctx->pc = 0x10EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EB90u;
    // 0x10eb94: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10EB90u, 0x10EB98u)) {
        return;
    }
    ctx->pc = 0x10EB98u;
label_10eb98:
    // 0x10eb98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10eb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10eb9c:
    // 0x10eb9c: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10eb9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10eba0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10EBA0u;
    {
        const bool branch_taken_0x10eba0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBA0u;
        // 0x10eba4: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10eba0) {
            ctx->pc = 0x10EB40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10eb40;
        }
    }
    ctx->pc = 0x10EBA8u;
    // 0x10eba8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10eba8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ebac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10ebacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ebb0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ebb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ebb4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10ebb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ebb8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ebb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ebbc: 0x3e00008  jr          $ra
    ctx->pc = 0x10EBBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10EBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBBCu;
        // 0x10ebc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EBBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10EBC4u;
    // 0x10ebc4: 0x0  nop
    ctx->pc = 0x10ebc4u;
    // NOP
    ctx->pc = 0x10ebc8u;
}
