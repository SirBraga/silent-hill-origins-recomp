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

// Function: sub_001B2AC8
// Address: 0x1b2ac8 - 0x1b2b98
void sub_001B2AC8_0x1b2ac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2AC8_0x1b2ac8");
#endif

    switch (ctx->pc) {
        case 0x1b2b20u: goto label_1b2b20;
        case 0x1b2b30u: goto label_1b2b30;
        case 0x1b2b68u: goto label_1b2b68;
        case 0x1b2b84u: goto label_1b2b84;
        default: break;
    }

    ctx->pc = 0x1b2ac8u;

    // 0x1b2ac8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1b2ac8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1b2acc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1b2accu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1b2ad0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b2ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b2ad4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1b2ad4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1b2ad8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b2ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2adc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b2adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b2ae0: 0xc6000230  lwc1        $f0, 0x230($s0)
    ctx->pc = 0x1b2ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b2ae4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b2ae4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2ae8: 0x0  nop
    ctx->pc = 0x1b2ae8u;
    // NOP
    // 0x1b2aec: 0x45000017  bc1f        . + 4 + (0x17 << 2)
    ctx->pc = 0x1B2AECu;
    {
        const bool branch_taken_0x1b2aec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2AECu;
        // 0x1b2af0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2aec) {
            ctx->pc = 0x1B2B4Cu;
            goto label_1b2b4c;
        }
    }
    ctx->pc = 0x1B2AF4u;
    // 0x1b2af4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1b2af4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1b2af8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1b2af8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b2afc: 0x0  nop
    ctx->pc = 0x1b2afcu;
    // NOP
    // 0x1b2b00: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1B2B00u;
    {
        const bool branch_taken_0x1b2b00 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B00u;
        // 0x1b2b04: 0xe6000230  swc1        $f0, 0x230($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b00) {
            ctx->pc = 0x1B2B4Cu;
            goto label_1b2b4c;
        }
    }
    ctx->pc = 0x1B2B08u;
    // 0x1b2b08: 0x8e020228  lw          $v0, 0x228($s0)
    ctx->pc = 0x1b2b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1b2b0c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B2B0Cu;
    {
        const bool branch_taken_0x1b2b0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B0Cu;
        // 0x1b2b10: 0xae000234  sw          $zero, 0x234($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 564), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b0c) {
            ctx->pc = 0x1B2B34u;
            goto label_1b2b34;
        }
    }
    ctx->pc = 0x1B2B14u;
    // 0x1b2b14: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2b18: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2B18u;
    SET_GPR_U32(ctx, 31, 0x1B2B20u);
    ctx->pc = 0x1B2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B18u;
    // 0x1b2b1c: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2B18u, 0x1B2B20u)) {
        return;
    }
    ctx->pc = 0x1B2B20u;
label_1b2b20:
    // 0x1b2b20: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b2b20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1b2b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b28: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x1B2B28u;
    SET_GPR_U32(ctx, 31, 0x1B2B30u);
    ctx->pc = 0x1B2B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B28u;
    // 0x1b2b2c: 0x24a58910  addiu       $a1, $a1, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1B2B28u, 0x1B2B30u)) {
        return;
    }
    ctx->pc = 0x1B2B30u;
label_1b2b30:
    // 0x1b2b30: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1b2b30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_1b2b34:
    // 0x1b2b34: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1b2b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1b2b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2b3c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1b2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b2b40: 0xae02023c  sw          $v0, 0x23C($s0)
    ctx->pc = 0x1b2b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 572), GPR_U32(ctx, 2));
    // 0x1b2b44: 0xe6000230  swc1        $f0, 0x230($s0)
    ctx->pc = 0x1b2b44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 560), bits); }
    // 0x1b2b48: 0xae000228  sw          $zero, 0x228($s0)
    ctx->pc = 0x1b2b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 552), GPR_U32(ctx, 0));
label_1b2b4c:
    // 0x1b2b4c: 0x8e030228  lw          $v1, 0x228($s0)
    ctx->pc = 0x1b2b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 552)));
    // 0x1b2b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b2b54: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B2B54u;
    {
        const bool branch_taken_0x1b2b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B2B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B54u;
        // 0x1b2b58: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b54) {
            ctx->pc = 0x1B2B70u;
            goto label_1b2b70;
        }
    }
    ctx->pc = 0x1B2B5Cu;
    // 0x1b2b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b60: 0xc06c6be  jal         func_1B1AF8
    ctx->pc = 0x1B2B60u;
    SET_GPR_U32(ctx, 31, 0x1B2B68u);
    ctx->pc = 0x1B2B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B60u;
    // 0x1b2b64: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1AF8u, 0x1B2B60u, 0x1B2B68u)) {
        return;
    }
    ctx->pc = 0x1B2B68u;
label_1b2b68:
    // 0x1b2b68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1B2B68u;
    {
        const bool branch_taken_0x1b2b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B68u;
        // 0x1b2b6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2b68) {
            ctx->pc = 0x1B2B88u;
            goto label_1b2b88;
        }
    }
    ctx->pc = 0x1B2B70u;
label_1b2b70:
    // 0x1b2b70: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2B70u;
    {
        const bool branch_taken_0x1b2b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b2b70) {
            ctx->pc = 0x1B2B74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B2B70u;
            // 0x1b2b74: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B2B88u;
            goto label_1b2b88;
        }
    }
    ctx->pc = 0x1B2B78u;
    // 0x1b2b78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b2b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b2b7c: 0xc06c798  jal         func_1B1E60
    ctx->pc = 0x1B2B7Cu;
    SET_GPR_U32(ctx, 31, 0x1B2B84u);
    ctx->pc = 0x1B2B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B2B7Cu;
    // 0x1b2b80: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1E60u, 0x1B2B7Cu, 0x1B2B84u)) {
        return;
    }
    ctx->pc = 0x1B2B84u;
label_1b2b84:
    // 0x1b2b84: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2b84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2b88:
    // 0x1b2b88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b2b88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b2b8c: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1b2b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b2b90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2B90u;
        // 0x1b2b94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2B90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2B98u;
}
