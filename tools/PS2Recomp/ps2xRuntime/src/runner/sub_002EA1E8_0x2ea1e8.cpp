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

// Function: sub_002EA1E8
// Address: 0x2ea1e8 - 0x2ea1f8
void sub_002EA1E8_0x2ea1e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA1E8_0x2ea1e8");
#endif

    ctx->pc = 0x2ea1e8u;

    // 0x2ea1e8: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2ea1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x2ea1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1ECu;
        // 0x2ea1f0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA1F4u;
    // 0x2ea1f4: 0x0  nop
    ctx->pc = 0x2ea1f4u;
    // NOP
    ctx->pc = 0x2ea1f8u;
}
