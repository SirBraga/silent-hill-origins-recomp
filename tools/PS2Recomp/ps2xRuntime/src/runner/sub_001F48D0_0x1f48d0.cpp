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

// Function: sub_001F48D0
// Address: 0x1f48d0 - 0x1f4920
void sub_001F48D0_0x1f48d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F48D0_0x1f48d0");
#endif

    switch (ctx->pc) {
        case 0x1f48f8u: goto label_1f48f8;
        case 0x1f490cu: goto label_1f490c;
        default: break;
    }

    ctx->pc = 0x1f48d0u;

    // 0x1f48d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f48d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f48d4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1f48d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1f48d8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f48d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f48dc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1f48dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
    // 0x1f48e0: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x1f48e0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x1f48e4: 0x8e044144  lw          $a0, 0x4144($s0)
    ctx->pc = 0x1f48e4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4144u));
    // 0x1f48e8: 0x8e25eb00  lw          $a1, -0x1500($s1)
    ctx->pc = 0x1f48e8u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x33EB00u));
    // 0x1f48ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f48ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f48f0: 0xc07d3a6  jal         func_1F4E98
    ctx->pc = 0x1F48F0u;
    SET_GPR_U32(ctx, 31, 0x1F48F8u);
    ctx->pc = 0x1F48F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F48F0u;
    // 0x1f48f4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E98u, 0x1F48F0u, 0x1F48F8u)) {
        return;
    }
    ctx->pc = 0x1F48F8u;
label_1f48f8:
    // 0x1f48f8: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F48F8u;
    {
        const bool branch_taken_0x1f48f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f48f8) {
            ctx->pc = 0x1F48FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F48F8u;
            // 0x1f48fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F4910u;
            goto label_1f4910;
        }
    }
    ctx->pc = 0x1F4900u;
    // 0x1f4900: 0x8e044144  lw          $a0, 0x4144($s0)
    ctx->pc = 0x1f4900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16708)));
    // 0x1f4904: 0xc07d2e2  jal         func_1F4B88
    ctx->pc = 0x1F4904u;
    SET_GPR_U32(ctx, 31, 0x1F490Cu);
    ctx->pc = 0x1F4908u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4904u;
    // 0x1f4908: 0x8e25eb00  lw          $a1, -0x1500($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B88u, 0x1F4904u, 0x1F490Cu)) {
        return;
    }
    ctx->pc = 0x1F490Cu;
label_1f490c:
    // 0x1f490c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1f490cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1f4910:
    // 0x1f4910: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f4910u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4918: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4918u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4918u;
        // 0x1f491c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4918u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4920u;
}
