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

// Function: sub_0013EB60
// Address: 0x13eb60 - 0x13eb98
void sub_0013EB60_0x13eb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013EB60_0x13eb60");
#endif

    switch (ctx->pc) {
        case 0x13eb8cu: goto label_13eb8c;
        default: break;
    }

    ctx->pc = 0x13eb60u;

    // 0x13eb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13eb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13eb64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13eb64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13eb68: 0x8c8200dc  lw          $v0, 0xDC($a0)
    ctx->pc = 0x13eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13eb6c: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x13eb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x13eb70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13eb70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13eb74: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13EB74u;
    {
        const bool branch_taken_0x13eb74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13EB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB74u;
        // 0x13eb78: 0xac8200dc  sw          $v0, 0xDC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13eb74) {
            ctx->pc = 0x13EB8Cu;
            goto label_13eb8c;
        }
    }
    ctx->pc = 0x13EB7Cu;
    // 0x13eb7c: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x13eb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
    // 0x13eb80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13eb84: 0xc041f10  jal         func_107C40
    ctx->pc = 0x13EB84u;
    SET_GPR_U32(ctx, 31, 0x13EB8Cu);
    ctx->pc = 0x13EB88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13EB84u;
    // 0x13eb88: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107C40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107C40u, 0x13EB84u, 0x13EB8Cu)) {
        return;
    }
    ctx->pc = 0x13EB8Cu;
label_13eb8c:
    // 0x13eb8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13eb8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13eb90: 0x3e00008  jr          $ra
    ctx->pc = 0x13EB90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13EB90u;
        // 0x13eb94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13EB90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13EB98u;
}
