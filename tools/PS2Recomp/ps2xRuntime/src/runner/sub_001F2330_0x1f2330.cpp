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

// Function: sub_001F2330
// Address: 0x1f2330 - 0x1f2360
void sub_001F2330_0x1f2330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F2330_0x1f2330");
#endif

    ctx->pc = 0x1f2330u;

    // 0x1f2330: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1f2330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2334: 0xac802718  sw          $zero, 0x2718($a0)
    ctx->pc = 0x1f2334u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10008), GPR_U32(ctx, 0));
    // 0x1f2338: 0xac80271c  sw          $zero, 0x271C($a0)
    ctx->pc = 0x1f2338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10012), GPR_U32(ctx, 0));
    // 0x1f233c: 0xac802720  sw          $zero, 0x2720($a0)
    ctx->pc = 0x1f233cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 10016), GPR_U32(ctx, 0));
    // 0x1f2340: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1f2340u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1f2344: 0xac800804  sw          $zero, 0x804($a0)
    ctx->pc = 0x1f2344u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2052), GPR_U32(ctx, 0));
    // 0x1f2348: 0xac800808  sw          $zero, 0x808($a0)
    ctx->pc = 0x1f2348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2056), GPR_U32(ctx, 0));
    // 0x1f234c: 0xac801d0c  sw          $zero, 0x1D0C($a0)
    ctx->pc = 0x1f234cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7436), GPR_U32(ctx, 0));
    // 0x1f2350: 0xac801d10  sw          $zero, 0x1D10($a0)
    ctx->pc = 0x1f2350u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 7440), GPR_U32(ctx, 0));
    // 0x1f2354: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F2358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2354u;
        // 0x1f2358: 0xac802714  sw          $zero, 0x2714($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 10004), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F235Cu;
    // 0x1f235c: 0x0  nop
    ctx->pc = 0x1f235cu;
    // NOP
    ctx->pc = 0x1f2360u;
}
