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

// Function: sub_0019AF40
// Address: 0x19af40 - 0x19afa0
void sub_0019AF40_0x19af40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019AF40_0x19af40");
#endif

    switch (ctx->pc) {
        case 0x19af58u: goto label_19af58;
        case 0x19af7cu: goto label_19af7c;
        case 0x19af88u: goto label_19af88;
        default: break;
    }

    ctx->pc = 0x19af40u;

    // 0x19af40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19af40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19af44: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19af44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19af48: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19af48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19af4c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19af4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19af50: 0xc07664a  jal         func_1D9928
    ctx->pc = 0x19AF50u;
    SET_GPR_U32(ctx, 31, 0x19AF58u);
    ctx->pc = 0x19AF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF50u;
    // 0x19af54: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9928u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9928u, 0x19AF50u, 0x19AF58u)) {
        return;
    }
    ctx->pc = 0x19AF58u;
label_19af58:
    // 0x19af58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x19af58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af5c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x19af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x19af60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x19af60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x19af64: 0x8e0300b0  lw          $v1, 0xB0($s0)
    ctx->pc = 0x19af64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x19af68: 0x8e02008c  lw          $v0, 0x8C($s0)
    ctx->pc = 0x19af68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x19af6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x19AF6Cu;
    {
        const bool branch_taken_0x19af6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19AF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF6Cu;
        // 0x19af70: 0xae030044  sw          $v1, 0x44($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19af6c) {
            ctx->pc = 0x19AF88u;
            goto label_19af88;
        }
    }
    ctx->pc = 0x19AF74u;
    // 0x19af74: 0xc076642  jal         func_1D9908
    ctx->pc = 0x19AF74u;
    SET_GPR_U32(ctx, 31, 0x19AF7Cu);
    ctx->pc = 0x1D9908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9908u, 0x19AF74u, 0x19AF7Cu)) {
        return;
    }
    ctx->pc = 0x19AF7Cu;
label_19af7c:
    // 0x19af7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x19af7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19af80: 0xc0bab48  jal         func_2EAD20
    ctx->pc = 0x19AF80u;
    SET_GPR_U32(ctx, 31, 0x19AF88u);
    ctx->pc = 0x19AF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19AF80u;
    // 0x19af84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EAD20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EAD20u, 0x19AF80u, 0x19AF88u)) {
        return;
    }
    ctx->pc = 0x19AF88u;
label_19af88:
    // 0x19af88: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19af88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19af8c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19af8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19af90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19af90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19af94: 0x3e00008  jr          $ra
    ctx->pc = 0x19AF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19AF94u;
        // 0x19af98: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19AF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19AF9Cu;
    // 0x19af9c: 0x0  nop
    ctx->pc = 0x19af9cu;
    // NOP
    ctx->pc = 0x19afa0u;
}
