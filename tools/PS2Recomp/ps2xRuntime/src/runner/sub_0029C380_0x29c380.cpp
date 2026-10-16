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

// Function: sub_0029C380
// Address: 0x29c380 - 0x29c390
void sub_0029C380_0x29c380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C380_0x29c380");
#endif

    ctx->pc = 0x29c380u;

    // 0x29c380: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x29c380u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x29c384: 0x3e00008  jr          $ra
    ctx->pc = 0x29C384u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C384u;
        // 0x29c388: 0x30420006  andi        $v0, $v0, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C384u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C38Cu;
    // 0x29c38c: 0x0  nop
    ctx->pc = 0x29c38cu;
    // NOP
    ctx->pc = 0x29c390u;
}
