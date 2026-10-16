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

// Function: sub_001CA778
// Address: 0x1ca778 - 0x1ca7c8
void sub_001CA778_0x1ca778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA778_0x1ca778");
#endif

    switch (ctx->pc) {
        case 0x1ca794u: goto label_1ca794;
        case 0x1ca7b4u: goto label_1ca7b4;
        default: break;
    }

    ctx->pc = 0x1ca778u;

    // 0x1ca778: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1ca778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1ca77c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1ca77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1ca780: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ca780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ca784: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1ca784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca788: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca788u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ca78c: 0xc06bc10  jal         func_1AF040
    ctx->pc = 0x1CA78Cu;
    SET_GPR_U32(ctx, 31, 0x1CA794u);
    ctx->pc = 0x1CA790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA78Cu;
    // 0x1ca790: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF040u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF040u, 0x1CA78Cu, 0x1CA794u)) {
        return;
    }
    ctx->pc = 0x1CA794u;
label_1ca794:
    // 0x1ca794: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1ca794u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1ca798: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA798u;
    {
        const bool branch_taken_0x1ca798 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA798u;
        // 0x1ca79c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca798) {
            ctx->pc = 0x1CA7B4u;
            goto label_1ca7b4;
        }
    }
    ctx->pc = 0x1CA7A0u;
    // 0x1ca7a0: 0x8e0303c4  lw          $v1, 0x3C4($s0)
    ctx->pc = 0x1ca7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 964)));
    // 0x1ca7a4: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CA7A4u;
    {
        const bool branch_taken_0x1ca7a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7A4u;
        // 0x1ca7a8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca7a4) {
            ctx->pc = 0x1CA7B8u;
            goto label_1ca7b8;
        }
    }
    ctx->pc = 0x1CA7ACu;
    // 0x1ca7ac: 0xc06db8e  jal         func_1B6E38
    ctx->pc = 0x1CA7ACu;
    SET_GPR_U32(ctx, 31, 0x1CA7B4u);
    ctx->pc = 0x1CA7B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CA7ACu;
    // 0x1ca7b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B6E38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6E38u, 0x1CA7ACu, 0x1CA7B4u)) {
        return;
    }
    ctx->pc = 0x1CA7B4u;
label_1ca7b4:
    // 0x1ca7b4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1ca7b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca7b8:
    // 0x1ca7b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ca7b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ca7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ca7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA7C0u;
        // 0x1ca7c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA7C8u;
}
