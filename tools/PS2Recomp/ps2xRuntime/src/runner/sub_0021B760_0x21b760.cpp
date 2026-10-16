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

// Function: sub_0021B760
// Address: 0x21b760 - 0x21b788
void sub_0021B760_0x21b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021B760_0x21b760");
#endif

    ctx->pc = 0x21b760u;

    // 0x21b760: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x21b760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x21b764: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x21b764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x21b768: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21B768u;
    {
        const bool branch_taken_0x21b768 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x21b768) {
            ctx->pc = 0x21B780u;
            goto label_21b780;
        }
    }
    ctx->pc = 0x21B770u;
    // 0x21b770: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x21b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x21b774: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x21b774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x21b778: 0x3e00008  jr          $ra
    ctx->pc = 0x21B778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B778u;
        // 0x21b77c: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B780u;
label_21b780:
    // 0x21b780: 0x3e00008  jr          $ra
    ctx->pc = 0x21B780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21B784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21B780u;
        // 0x21b784: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21B780u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21B788u;
}
