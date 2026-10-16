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

// Function: sub_00218748
// Address: 0x218748 - 0x218780
void sub_00218748_0x218748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00218748_0x218748");
#endif

    ctx->pc = 0x218748u;

    // 0x218748: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x218748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21874c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x21874cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x218750: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x218750u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x218754: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x218754u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x218758: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x218758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x21875c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x21875cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x218760: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x218760u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x218764: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x218764u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x218768: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x218768u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x21876c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x21876cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x218770: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x218770u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x218774: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x218774u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x218778: 0x3e00008  jr          $ra
    ctx->pc = 0x218778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21877Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x218778u;
        // 0x21877c: 0xac80002c  sw          $zero, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x218778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x218780u;
}
