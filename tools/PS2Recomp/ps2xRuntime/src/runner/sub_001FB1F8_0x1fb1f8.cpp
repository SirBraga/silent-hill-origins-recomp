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

// Function: sub_001FB1F8
// Address: 0x1fb1f8 - 0x1fb210
void sub_001FB1F8_0x1fb1f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB1F8_0x1fb1f8");
#endif

    ctx->pc = 0x1fb1f8u;

    // 0x1fb1f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1fb1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1fb1fc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1fb1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb200: 0x24632ec8  addiu       $v1, $v1, 0x2EC8
    ctx->pc = 0x1fb200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11976));
    // 0x1fb204: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1fb204u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x1fb208: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB208u;
        // 0x1fb20c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB210u;
}
