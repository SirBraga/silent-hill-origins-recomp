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

// Function: sub_0029C318
// Address: 0x29c318 - 0x29c330
void sub_0029C318_0x29c318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C318_0x29c318");
#endif

    ctx->pc = 0x29c318u;

    // 0x29c318: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29c318u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29c31c: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x29c31cu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
    // 0x29c320: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x29c320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x29c324: 0x3e00008  jr          $ra
    ctx->pc = 0x29C324u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C324u;
        // 0x29c328: 0xa082001a  sb          $v0, 0x1A($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 26), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C324u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C32Cu;
    // 0x29c32c: 0x0  nop
    ctx->pc = 0x29c32cu;
    // NOP
    ctx->pc = 0x29c330u;
}
