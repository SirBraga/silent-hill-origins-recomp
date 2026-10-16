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

// Function: sub_001FF740
// Address: 0x1ff740 - 0x1ff758
void sub_001FF740_0x1ff740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF740_0x1ff740");
#endif

    ctx->pc = 0x1ff740u;

    // 0x1ff740: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1ff740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1ff744: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x1ff744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0144u));
    // 0x1ff748: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1ff748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ff74c: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff74cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff750: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF750u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF750u;
        // 0x1ff754: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF750u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF758u;
}
