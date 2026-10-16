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

// Function: sub_0024EAF0
// Address: 0x24eaf0 - 0x24eba8
void sub_0024EAF0_0x24eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024EAF0_0x24eaf0");
#endif

    switch (ctx->pc) {
        case 0x24eb80u: goto label_24eb80;
        case 0x24eb8cu: goto label_24eb8c;
        default: break;
    }

    ctx->pc = 0x24eaf0u;

    // 0x24eaf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x24eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x24eaf4: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x24eaf4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x24eaf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x24eaf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x24eafc: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x24eafcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x24eb00: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x24eb00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb04: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x24eb04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb08: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x24eb08u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x24eb0c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x24eb0cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x24eb10: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x24eb10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x24eb14: 0x46010504  c1          0x10504
    ctx->pc = 0x24eb14u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[1]);
    // 0x24eb18: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x24eb18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb1c: 0x0  nop
    ctx->pc = 0x24eb1cu;
    // NOP
    // 0x24eb20: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x24EB20u;
    {
        const bool branch_taken_0x24eb20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB20u;
        // 0x24eb24: 0x4600a086  mov.s       $f2, $f20 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb20) {
            ctx->pc = 0x24EB40u;
            goto label_24eb40;
        }
    }
    ctx->pc = 0x24EB28u;
    // 0x24eb28: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x24eb28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x24eb2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24eb2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb30: 0x0  nop
    ctx->pc = 0x24eb30u;
    // NOP
    // 0x24eb34: 0x46140083  div.s       $f2, $f0, $f20
    ctx->pc = 0x24eb34u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[20]);
    // 0x24eb38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24EB38u;
    {
        const bool branch_taken_0x24eb38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24EB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB38u;
        // 0x24eb3c: 0xc4a00000  lwc1        $f0, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb38) {
            ctx->pc = 0x24EB48u;
            goto label_24eb48;
        }
    }
    ctx->pc = 0x24EB40u;
label_24eb40:
    // 0x24eb40: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x24eb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24eb44: 0x0  nop
    ctx->pc = 0x24eb44u;
    // NOP
label_24eb48:
    // 0x24eb48: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x24eb48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x24eb4c: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x24eb4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x24eb50: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x24eb50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24eb54: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x24eb54u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x24eb58: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24eb58u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24eb5c: 0x0  nop
    ctx->pc = 0x24eb5cu;
    // NOP
    // 0x24eb60: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x24eb60u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24eb64: 0x0  nop
    ctx->pc = 0x24eb64u;
    // NOP
    // 0x24eb68: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x24EB68u;
    {
        const bool branch_taken_0x24eb68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24EB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB68u;
        // 0x24eb6c: 0xe4810004  swc1        $f1, 0x4($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24eb68) {
            ctx->pc = 0x24EB90u;
            goto label_24eb90;
        }
    }
    ctx->pc = 0x24EB70u;
    // 0x24eb70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24eb74: 0x24040019  addiu       $a0, $zero, 0x19
    ctx->pc = 0x24eb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x24eb78: 0xc092848  jal         func_24A120
    ctx->pc = 0x24EB78u;
    SET_GPR_U32(ctx, 31, 0x24EB80u);
    ctx->pc = 0x24EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB78u;
    // 0x24eb7c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x24EB78u, 0x24EB80u)) {
        return;
    }
    ctx->pc = 0x24EB80u;
label_24eb80:
    // 0x24eb80: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x24eb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24eb84: 0xc09281a  jal         func_24A068
    ctx->pc = 0x24EB84u;
    SET_GPR_U32(ctx, 31, 0x24EB8Cu);
    ctx->pc = 0x24EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24EB84u;
    // 0x24eb88: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x24EB84u, 0x24EB8Cu)) {
        return;
    }
    ctx->pc = 0x24EB8Cu;
label_24eb8c:
    // 0x24eb8c: 0x0  nop
    ctx->pc = 0x24eb8cu;
    // NOP
label_24eb90:
    // 0x24eb90: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x24eb90u;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x24eb94: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24eb94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24eb98: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x24eb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x24eb9c: 0x3e00008  jr          $ra
    ctx->pc = 0x24EB9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24EBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24EB9Cu;
        // 0x24eba0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24EB9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24EBA4u;
    // 0x24eba4: 0x0  nop
    ctx->pc = 0x24eba4u;
    // NOP
    ctx->pc = 0x24eba8u;
}
