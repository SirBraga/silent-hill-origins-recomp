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

// Function: sub_001FB0D0
// Address: 0x1fb0d0 - 0x1fb0e8
void sub_001FB0D0_0x1fb0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB0D0_0x1fb0d0");
#endif

    ctx->pc = 0x1fb0d0u;

    // 0x1fb0d0: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fb0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1fb0d4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fb0d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb0d8: 0x24632e98  addiu       $v1, $v1, 0x2E98
    ctx->pc = 0x1fb0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11928));
    // 0x1fb0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB0DCu;
        // 0x1fb0e0: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB0E4u;
    // 0x1fb0e4: 0x0  nop
    ctx->pc = 0x1fb0e4u;
    // NOP
    ctx->pc = 0x1fb0e8u;
}
