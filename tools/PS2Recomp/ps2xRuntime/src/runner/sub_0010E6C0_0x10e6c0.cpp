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

// Function: sub_0010E6C0
// Address: 0x10e6c0 - 0x10e760
void sub_0010E6C0_0x10e6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E6C0_0x10e6c0");
#endif

    switch (ctx->pc) {
        case 0x10e6f0u: goto label_10e6f0;
        case 0x10e710u: goto label_10e710;
        case 0x10e728u: goto label_10e728;
        default: break;
    }

    ctx->pc = 0x10e6c0u;

    // 0x10e6c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x10e6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x10e6c4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x10e6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x10e6c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10e6c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x10e6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x10e6d0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x10e6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x10e6d4: 0x26500040  addiu       $s0, $s2, 0x40
    ctx->pc = 0x10e6d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x10e6d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x10e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x10e6dc: 0x26510020  addiu       $s1, $s2, 0x20
    ctx->pc = 0x10e6dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x10e6e0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x10e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x10e6e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10e6e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e6e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10e6e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10e6ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x10e6ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_10e6f0:
    // 0x10e6f0: 0x8e05ffe4  lw          $a1, -0x1C($s0)
    ctx->pc = 0x10e6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967268)));
    // 0x10e6f4: 0x50a0000d  beql        $a1, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x10E6F4u;
    {
        const bool branch_taken_0x10e6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10e6f4) {
            ctx->pc = 0x10E6F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E6F4u;
            // 0x10e6f8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E72Cu;
            goto label_10e72c;
        }
    }
    ctx->pc = 0x10E6FCu;
    // 0x10e6fc: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x10e6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x10e700: 0x54b4000a  bnel        $a1, $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x10E700u;
    {
        const bool branch_taken_0x10e700 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 20));
        if (branch_taken_0x10e700) {
            ctx->pc = 0x10E704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10E700u;
            // 0x10e704: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10E72Cu;
            goto label_10e72c;
        }
    }
    ctx->pc = 0x10E708u;
    // 0x10e708: 0xc043b2a  jal         func_10ECA8
    ctx->pc = 0x10E708u;
    SET_GPR_U32(ctx, 31, 0x10E710u);
    ctx->pc = 0x10E70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E708u;
    // 0x10e70c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ECA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10ECA8u, 0x10E708u, 0x10E710u)) {
        return;
    }
    ctx->pc = 0x10E710u;
label_10e710:
    // 0x10e710: 0xc64c0010  lwc1        $f12, 0x10($s2)
    ctx->pc = 0x10e710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x10e714: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10e714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10e718: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x10e718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x10e71c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x10e71cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x10e720: 0xc042ee2  jal         func_10BB88
    ctx->pc = 0x10E720u;
    SET_GPR_U32(ctx, 31, 0x10E728u);
    ctx->pc = 0x10E724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E720u;
    // 0x10e724: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10BB88u, 0x10E720u, 0x10E728u)) {
        return;
    }
    ctx->pc = 0x10E728u;
label_10e728:
    // 0x10e728: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x10e728u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_10e72c:
    // 0x10e72c: 0x2610002c  addiu       $s0, $s0, 0x2C
    ctx->pc = 0x10e72cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x10e730: 0x2e620040  sltiu       $v0, $s3, 0x40
    ctx->pc = 0x10e730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
    // 0x10e734: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10E734u;
    {
        const bool branch_taken_0x10e734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10E738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E734u;
        // 0x10e738: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e734) {
            ctx->pc = 0x10E6F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10e6f0;
        }
    }
    ctx->pc = 0x10E73Cu;
    // 0x10e73c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x10e73cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10e740: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x10e740u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10e744: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x10e744u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10e748: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x10e748u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10e74c: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x10e74cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10e750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10e750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10e754: 0x3e00008  jr          $ra
    ctx->pc = 0x10E754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E754u;
        // 0x10e758: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E75Cu;
    // 0x10e75c: 0x0  nop
    ctx->pc = 0x10e75cu;
    // NOP
    ctx->pc = 0x10e760u;
}
