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

// Function: sub_0029C410
// Address: 0x29c410 - 0x29c428
void sub_0029C410_0x29c410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C410_0x29c410");
#endif

    ctx->pc = 0x29c410u;

    // 0x29c410: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29c410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29c414: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29C414u;
    {
        const bool branch_taken_0x29c414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c414) {
            ctx->pc = 0x29C418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29C414u;
            // 0x29c418: 0x34a50004  ori         $a1, $a1, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x29C41Cu;
            goto label_29c41c;
        }
    }
    ctx->pc = 0x29C41Cu;
label_29c41c:
    // 0x29c41c: 0x3e00008  jr          $ra
    ctx->pc = 0x29C41Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C41Cu;
        // 0x29c420: 0xa085001a  sb          $a1, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C41Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C424u;
    // 0x29c424: 0x0  nop
    ctx->pc = 0x29c424u;
    // NOP
    ctx->pc = 0x29c428u;
}
