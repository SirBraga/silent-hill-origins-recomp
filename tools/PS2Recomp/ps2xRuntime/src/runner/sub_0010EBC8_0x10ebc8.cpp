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

// Function: sub_0010EBC8
// Address: 0x10ebc8 - 0x10eca8
void sub_0010EBC8_0x10ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010EBC8_0x10ebc8");
#endif

    switch (ctx->pc) {
        case 0x10ec20u: goto label_10ec20;
        case 0x10ec38u: goto label_10ec38;
        case 0x10ec78u: goto label_10ec78;
        default: break;
    }

    ctx->pc = 0x10ebc8u;

    // 0x10ebc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x10ebc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x10ebcc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x10ebccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x10ebd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x10ebd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x10ebd4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x10ebd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x10ebd8: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x10ebd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ebdc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x10ebdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x10ebe0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10ebe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x10ebe4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x10ebe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ebe8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x10ebe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x10ebec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x10ebecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x10ebf0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x10EBF0u;
    {
        const bool branch_taken_0x10ebf0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x10EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF0u;
        // 0x10ebf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebf0) {
            ctx->pc = 0x10EC00u;
            goto label_10ec00;
        }
    }
    ctx->pc = 0x10EBF8u;
    // 0x10ebf8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x10EBF8u;
    {
        const bool branch_taken_0x10ebf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EBF8u;
        // 0x10ebfc: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ebf8) {
            ctx->pc = 0x10EC10u;
            goto label_10ec10;
        }
    }
    ctx->pc = 0x10EC00u;
label_10ec00:
    // 0x10ec00: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x10ec00u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x10ec04: 0x0  nop
    ctx->pc = 0x10ec04u;
    // NOP
    // 0x10ec08: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x10EC08u;
    {
        const bool branch_taken_0x10ec08 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x10ec08) {
            ctx->pc = 0x10EC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC08u;
            // 0x10ec0c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC10u;
            goto label_10ec10;
        }
    }
    ctx->pc = 0x10EC10u;
label_10ec10:
    // 0x10ec10: 0xe62c001c  swc1        $f12, 0x1C($s1)
    ctx->pc = 0x10ec10u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 28), bits); }
    // 0x10ec14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10ec14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ec18: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10ec18u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x10ec1c: 0x26300020  addiu       $s0, $s1, 0x20
    ctx->pc = 0x10ec1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_10ec20:
    // 0x10ec20: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x10ec20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10ec24: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x10EC24u;
    {
        const bool branch_taken_0x10ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec24) {
            ctx->pc = 0x10EC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC24u;
            // 0x10ec28: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC7Cu;
            goto label_10ec7c;
        }
    }
    ctx->pc = 0x10EC2Cu;
    // 0x10ec2c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x10ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10ec30: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10EC30u;
    SET_GPR_U32(ctx, 31, 0x10EC38u);
    ctx->pc = 0x10EC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC30u;
    // 0x10ec34: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10EC30u, 0x10EC38u)) {
        return;
    }
    ctx->pc = 0x10EC38u;
label_10ec38:
    // 0x10ec38: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x10ec38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10ec3c: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x10ec3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x10ec40: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x10ec40u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x10ec44: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ec44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ec48: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x10EC48u;
    {
        const bool branch_taken_0x10ec48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC48u;
        // 0x10ec4c: 0x46020b02  mul.s       $f12, $f1, $f2 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec48) {
            ctx->pc = 0x10EC78u;
            goto label_10ec78;
        }
    }
    ctx->pc = 0x10EC50u;
    // 0x10ec50: 0x8e6282f4  lw          $v0, -0x7D0C($s3)
    ctx->pc = 0x10ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935284)));
    // 0x10ec54: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x10EC54u;
    {
        const bool branch_taken_0x10ec54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ec54) {
            ctx->pc = 0x10EC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10EC54u;
            // 0x10ec58: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10EC7Cu;
            goto label_10ec7c;
        }
    }
    ctx->pc = 0x10EC5Cu;
    // 0x10ec5c: 0xe46c0058  swc1        $f12, 0x58($v1)
    ctx->pc = 0x10ec5cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
    // 0x10ec60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x10ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10ec64: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x10ec64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x10ec68: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EC68u;
    {
        const bool branch_taken_0x10ec68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10EC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC68u;
        // 0x10ec6c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec68) {
            ctx->pc = 0x10EC78u;
            goto label_10ec78;
        }
    }
    ctx->pc = 0x10EC70u;
    // 0x10ec70: 0xc0b6752  jal         func_2D9D48
    ctx->pc = 0x10EC70u;
    SET_GPR_U32(ctx, 31, 0x10EC78u);
    ctx->pc = 0x10EC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EC70u;
    // 0x10ec74: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D9D48u, 0x10EC70u, 0x10EC78u)) {
        return;
    }
    ctx->pc = 0x10EC78u;
label_10ec78:
    // 0x10ec78: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x10ec78u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_10ec7c:
    // 0x10ec7c: 0x2e420040  sltiu       $v0, $s2, 0x40
    ctx->pc = 0x10ec7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10ec80: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x10EC80u;
    {
        const bool branch_taken_0x10ec80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10EC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC80u;
        // 0x10ec84: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ec80) {
            ctx->pc = 0x10EC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ec20;
        }
    }
    ctx->pc = 0x10EC88u;
    // 0x10ec88: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x10ec88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10ec8c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x10ec8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ec90: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x10ec90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ec94: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x10ec94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ec98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ec98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ec9c: 0x3e00008  jr          $ra
    ctx->pc = 0x10EC9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ECA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EC9Cu;
        // 0x10eca0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10EC9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ECA4u;
    // 0x10eca4: 0x0  nop
    ctx->pc = 0x10eca4u;
    // NOP
    ctx->pc = 0x10eca8u;
}
