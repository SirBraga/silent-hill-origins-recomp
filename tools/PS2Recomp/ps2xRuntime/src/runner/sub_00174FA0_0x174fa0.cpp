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

// Function: sub_00174FA0
// Address: 0x174fa0 - 0x174ff0
void sub_00174FA0_0x174fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174FA0_0x174fa0");
#endif

    switch (ctx->pc) {
        case 0x174fc8u: goto label_174fc8;
        case 0x174fd8u: goto label_174fd8;
        default: break;
    }

    ctx->pc = 0x174fa0u;

    // 0x174fa0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x174fa4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x174fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x174fa8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x174fa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x174fac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x174fb4: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x174fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x174fb8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x174FB8u;
    {
        const bool branch_taken_0x174fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FB8u;
        // 0x174fbc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fb8) {
            ctx->pc = 0x174FDCu;
            goto label_174fdc;
        }
    }
    ctx->pc = 0x174FC0u;
    // 0x174fc0: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x174FC0u;
    SET_GPR_U32(ctx, 31, 0x174FC8u);
    ctx->pc = 0x174FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FC0u;
    // 0x174fc4: 0x2630005c  addiu       $s0, $s1, 0x5C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 92));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x174FC0u, 0x174FC8u)) {
        return;
    }
    ctx->pc = 0x174FC8u;
label_174fc8:
    // 0x174fc8: 0x8e250080  lw          $a1, 0x80($s1)
    ctx->pc = 0x174fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x174fcc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x174fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174fd0: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x174FD0u;
    SET_GPR_U32(ctx, 31, 0x174FD8u);
    ctx->pc = 0x174FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FD0u;
    // 0x174fd4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x174FD0u, 0x174FD8u)) {
        return;
    }
    ctx->pc = 0x174FD8u;
label_174fd8:
    // 0x174fd8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x174fd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_174fdc:
    // 0x174fdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174fdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174fe0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174fe0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x174FE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FE4u;
        // 0x174fe8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174FECu;
    // 0x174fec: 0x0  nop
    ctx->pc = 0x174fecu;
    // NOP
    ctx->pc = 0x174ff0u;
}
