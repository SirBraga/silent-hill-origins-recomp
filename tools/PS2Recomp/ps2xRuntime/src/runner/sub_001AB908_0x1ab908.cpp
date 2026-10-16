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

// Function: sub_001AB908
// Address: 0x1ab908 - 0x1ab918
void sub_001AB908_0x1ab908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AB908_0x1ab908");
#endif

    ctx->pc = 0x1ab908u;

    // 0x1ab908: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ab908u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ab90c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AB90Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AB910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AB90Cu;
        // 0x1ab910: 0xac800040  sw          $zero, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AB90Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AB914u;
    // 0x1ab914: 0x0  nop
    ctx->pc = 0x1ab914u;
    // NOP
    ctx->pc = 0x1ab918u;
}
