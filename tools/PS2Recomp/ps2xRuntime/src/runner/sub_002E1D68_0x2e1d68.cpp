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

// Function: sub_002E1D68
// Address: 0x2e1d68 - 0x2e1da8
void sub_002E1D68_0x2e1d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E1D68_0x2e1d68");
#endif

    switch (ctx->pc) {
        case 0x2e1d80u: goto label_2e1d80;
        case 0x2e1d9cu: goto label_2e1d9c;
        default: break;
    }

    ctx->pc = 0x2e1d68u;

    // 0x2e1d68: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e1d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e1d6c: 0x8f828c3c  lw          $v0, -0x73C4($gp)
    ctx->pc = 0x2e1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937660)));
    // 0x2e1d70: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E1D70u;
    {
        const bool branch_taken_0x2e1d70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D70u;
        // 0x2e1d74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d70) {
            ctx->pc = 0x2E1D90u;
            goto label_2e1d90;
        }
    }
    ctx->pc = 0x2E1D78u;
    // 0x2e1d78: 0xc0ba24e  jal         func_2E8938
    ctx->pc = 0x2E1D78u;
    SET_GPR_U32(ctx, 31, 0x2E1D80u);
    ctx->pc = 0x2E8938u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E8938u, 0x2E1D78u, 0x2E1D80u)) {
        return;
    }
    ctx->pc = 0x2E1D80u;
label_2e1d80:
    // 0x2e1d80: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E1D80u;
    {
        const bool branch_taken_0x2e1d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e1d80) {
            ctx->pc = 0x2E1D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E1D80u;
            // 0x2e1d84: 0xaf808c3c  sw          $zero, -0x73C4($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294937660), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E1D90u;
            goto label_2e1d90;
        }
    }
    ctx->pc = 0x2E1D88u;
    // 0x2e1d88: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2E1D88u;
    {
        const bool branch_taken_0x2e1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1D88u;
        // 0x2e1d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e1d88) {
            ctx->pc = 0x2E1D9Cu;
            goto label_2e1d9c;
        }
    }
    ctx->pc = 0x2E1D90u;
label_2e1d90:
    // 0x2e1d90: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e1d90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e1d94: 0xc0b8df0  jal         func_2E37C0
    ctx->pc = 0x2E1D94u;
    SET_GPR_U32(ctx, 31, 0x2E1D9Cu);
    ctx->pc = 0x2E1D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E1D94u;
    // 0x2e1d98: 0x248481d0  addiu       $a0, $a0, -0x7E30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E37C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E37C0u, 0x2E1D94u, 0x2E1D9Cu)) {
        return;
    }
    ctx->pc = 0x2E1D9Cu;
label_2e1d9c:
    // 0x2e1d9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1da0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1DA0u;
        // 0x2e1da4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1DA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1DA8u;
}
