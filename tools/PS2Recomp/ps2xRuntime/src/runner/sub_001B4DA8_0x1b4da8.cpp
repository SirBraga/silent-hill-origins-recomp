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

// Function: sub_001B4DA8
// Address: 0x1b4da8 - 0x1b4e80
void sub_001B4DA8_0x1b4da8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B4DA8_0x1b4da8");
#endif

    switch (ctx->pc) {
        case 0x1b4e00u: goto label_1b4e00;
        case 0x1b4e48u: goto label_1b4e48;
        default: break;
    }

    ctx->pc = 0x1b4da8u;

    // 0x1b4da8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1b4da8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1b4dac: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x1b4dacu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x1b4db0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1b4db0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1b4db4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1b4db4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1b4db8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b4db8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1b4dbc: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1b4dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1b4dc0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1b4dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1b4dc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b4dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b4dc8: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x1b4dc8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x1b4dcc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1b4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x1b4dd0: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1B4DD0u;
    {
        const bool branch_taken_0x1b4dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4DD0u;
        // 0x1b4dd4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4dd0) {
            ctx->pc = 0x1B4E54u;
            goto label_1b4e54;
        }
    }
    ctx->pc = 0x1B4DD8u;
    // 0x1b4dd8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1b4dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1b4ddc: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1b4ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1b4de0: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1b4de0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1b4de4: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x1b4de4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
    // 0x1b4de8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b4de8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b4dec: 0x24548690  addiu       $s4, $v0, -0x7970
    ctx->pc = 0x1b4decu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936208));
    // 0x1b4df0: 0x2473c3a0  addiu       $s3, $v1, -0x3C60
    ctx->pc = 0x1b4df0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951840));
    // 0x1b4df4: 0x24900020  addiu       $s0, $a0, 0x20
    ctx->pc = 0x1b4df4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x1b4df8: 0x2491002c  addiu       $s1, $a0, 0x2C
    ctx->pc = 0x1b4df8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 44));
    // 0x1b4dfc: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x1b4dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1b4e00:
    // 0x1b4e00: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x1b4e00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e04: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x1b4e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b4e08: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1b4e08u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    // 0x1b4e0c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b4e0cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b4e10: 0x0  nop
    ctx->pc = 0x1b4e10u;
    // NOP
    // 0x1b4e14: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1B4E14u;
    {
        const bool branch_taken_0x1b4e14 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1B4E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E14u;
        // 0x1b4e18: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e14) {
            ctx->pc = 0x1B4E20u;
            goto label_1b4e20;
        }
    }
    ctx->pc = 0x1B4E1Cu;
    // 0x1b4e1c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1b4e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1b4e20:
    // 0x1b4e20: 0xc60c0000  lwc1        $f12, 0x0($s0)
    ctx->pc = 0x1b4e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1b4e24: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x1b4e24u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1b4e28: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x1b4e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b4e2c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1b4e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x1b4e30: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x1b4e30u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x1b4e34: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x1b4e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x1b4e38: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1b4e38u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x1b4e3c: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1b4e3cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
    // 0x1b4e40: 0xc09b164  jal         func_26C590
    ctx->pc = 0x1B4E40u;
    SET_GPR_U32(ctx, 31, 0x1B4E48u);
    ctx->pc = 0x1B4E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B4E40u;
    // 0x1b4e44: 0x46156302  mul.s       $f12, $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x1B4E40u, 0x1B4E48u)) {
        return;
    }
    ctx->pc = 0x1B4E48u;
label_1b4e48:
    // 0x1b4e48: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1b4e48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x1b4e4c: 0x641ffec  bgez        $s2, . + 4 + (-0x14 << 2)
    ctx->pc = 0x1B4E4Cu;
    {
        const bool branch_taken_0x1b4e4c = (GPR_S64(ctx, 18) >= 0);
        ctx->pc = 0x1B4E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E4Cu;
        // 0x1b4e50: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b4e4c) {
            ctx->pc = 0x1B4E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b4e00;
        }
    }
    ctx->pc = 0x1B4E54u;
label_1b4e54:
    // 0x1b4e54: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1b4e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b4e58: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1b4e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b4e5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b4e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b4e60: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1b4e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b4e64: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1b4e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b4e68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b4e68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b4e6c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x1b4e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b4e70: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x1b4e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b4e74: 0x3e00008  jr          $ra
    ctx->pc = 0x1B4E74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B4E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B4E74u;
        // 0x1b4e78: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B4E74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B4E7Cu;
    // 0x1b4e7c: 0x0  nop
    ctx->pc = 0x1b4e7cu;
    // NOP
    ctx->pc = 0x1b4e80u;
}
