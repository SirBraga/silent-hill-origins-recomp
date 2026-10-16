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

// Function: sub_00190F28
// Address: 0x190f28 - 0x190fe0
void sub_00190F28_0x190f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190F28_0x190f28");
#endif

    switch (ctx->pc) {
        case 0x190f50u: goto label_190f50;
        case 0x190f78u: goto label_190f78;
        default: break;
    }

    ctx->pc = 0x190f28u;

    // 0x190f28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x190f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x190f2c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x190f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x190f30: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x190f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x190f34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x190f38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x190f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x190f3c: 0x8c900030  lw          $s0, 0x30($a0)
    ctx->pc = 0x190f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x190f40: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x190F40u;
    {
        const bool branch_taken_0x190f40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x190F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F40u;
        // 0x190f44: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x190f40) {
            ctx->pc = 0x190F88u;
            goto label_190f88;
        }
    }
    ctx->pc = 0x190F48u;
    // 0x190f48: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x190f48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x190f4c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x190f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_190f50:
    // 0x190f50: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x190F50u;
    {
        const bool branch_taken_0x190f50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x190f50) {
            ctx->pc = 0x190F54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F50u;
            // 0x190f54: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F80u;
            goto label_190f80;
        }
    }
    ctx->pc = 0x190F58u;
    // 0x190f58: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x190f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
    // 0x190f5c: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x190F5Cu;
    {
        const bool branch_taken_0x190f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x190f5c) {
            ctx->pc = 0x190F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F5Cu;
            // 0x190f60: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F80u;
            goto label_190f80;
        }
    }
    ctx->pc = 0x190F64u;
    // 0x190f64: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x190f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x190f68: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x190f68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x190f6c: 0xc46c005c  lwc1        $f12, 0x5C($v1)
    ctx->pc = 0x190f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x190f70: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x190F70u;
    SET_GPR_U32(ctx, 31, 0x190F78u);
    ctx->pc = 0x190F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x190F70u;
    // 0x190f74: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x190F70u, 0x190F78u)) {
        return;
    }
    ctx->pc = 0x190F78u;
label_190f78:
    // 0x190f78: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x190f78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x190f7c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x190f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_190f80:
    // 0x190f80: 0x5600fff3  bnel        $s0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x190F80u;
    {
        const bool branch_taken_0x190f80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x190f80) {
            ctx->pc = 0x190F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x190F80u;
            // 0x190f84: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x190F50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_190f50;
        }
    }
    ctx->pc = 0x190F88u;
label_190f88:
    // 0x190f88: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x190f88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x190f8c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x190f8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x190f90: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x190f90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x190f94: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x190f94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x190f98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190f98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190f9c: 0x3e00008  jr          $ra
    ctx->pc = 0x190F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190F9Cu;
        // 0x190fa0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190F9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190FA4u;
    // 0x190fa4: 0x0  nop
    ctx->pc = 0x190fa4u;
    // NOP
    // 0x190fa8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fac: 0x0  nop
    ctx->pc = 0x190facu;
    // NOP
    // 0x190fb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fb4: 0x0  nop
    ctx->pc = 0x190fb4u;
    // NOP
    // 0x190fb8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fbc: 0x0  nop
    ctx->pc = 0x190fbcu;
    // NOP
    // 0x190fc0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fc4: 0x0  nop
    ctx->pc = 0x190fc4u;
    // NOP
    // 0x190fc8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fcc: 0x0  nop
    ctx->pc = 0x190fccu;
    // NOP
    // 0x190fd0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fd4: 0x0  nop
    ctx->pc = 0x190fd4u;
    // NOP
    // 0x190fd8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x190fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x190fdc: 0x0  nop
    ctx->pc = 0x190fdcu;
    // NOP
    ctx->pc = 0x190fe0u;
}
