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

// Function: sub_002E2D38
// Address: 0x2e2d38 - 0x2e2d78
void sub_002E2D38_0x2e2d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E2D38_0x2e2d38");
#endif

    switch (ctx->pc) {
        case 0x2e2d50u: goto label_2e2d50;
        case 0x2e2d6cu: goto label_2e2d6c;
        default: break;
    }

    ctx->pc = 0x2e2d38u;

    // 0x2e2d38: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e2d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e2d3c: 0x8f828c40  lw          $v0, -0x73C0($gp)
    ctx->pc = 0x2e2d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937664)));
    // 0x2e2d40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E2D40u;
    {
        const bool branch_taken_0x2e2d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D40u;
        // 0x2e2d44: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d40) {
            ctx->pc = 0x2E2D60u;
            goto label_2e2d60;
        }
    }
    ctx->pc = 0x2E2D48u;
    // 0x2e2d48: 0xc0ba272  jal         func_2E89C8
    ctx->pc = 0x2E2D48u;
    SET_GPR_U32(ctx, 31, 0x2E2D50u);
    ctx->pc = 0x2E89C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E89C8u, 0x2E2D48u, 0x2E2D50u)) {
        return;
    }
    ctx->pc = 0x2E2D50u;
label_2e2d50:
    // 0x2e2d50: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E2D50u;
    {
        const bool branch_taken_0x2e2d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e2d50) {
            ctx->pc = 0x2E2D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E2D50u;
            // 0x2e2d54: 0xaf808c40  sw          $zero, -0x73C0($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937664), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E2D60u;
            goto label_2e2d60;
        }
    }
    ctx->pc = 0x2E2D58u;
    // 0x2e2d58: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E2D58u;
    {
        const bool branch_taken_0x2e2d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E2D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D58u;
        // 0x2e2d5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e2d58) {
            ctx->pc = 0x2E2D6Cu;
            goto label_2e2d6c;
        }
    }
    ctx->pc = 0x2E2D60u;
label_2e2d60:
    // 0x2e2d60: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e2d64: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2E2D64u;
    SET_GPR_U32(ctx, 31, 0x2E2D6Cu);
    ctx->pc = 0x2E2D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E2D64u;
    // 0x2e2d68: 0x24848248  addiu       $a0, $a0, -0x7DB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2E2D64u, 0x2E2D6Cu)) {
        return;
    }
    ctx->pc = 0x2E2D6Cu;
label_2e2d6c:
    // 0x2e2d6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e2d6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e2d70: 0x3e00008  jr          $ra
    ctx->pc = 0x2E2D70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E2D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E2D70u;
        // 0x2e2d74: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E2D70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E2D78u;
}
