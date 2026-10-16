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

// Function: sub_001D2DB8
// Address: 0x1d2db8 - 0x1d2dd0
void sub_001D2DB8_0x1d2db8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2DB8_0x1d2db8");
#endif

    ctx->pc = 0x1d2db8u;

    // 0x1d2db8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2dbc: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DBCu;
        // 0x1d2dc0: 0x8c629b64  lw          $v0, -0x649C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941540)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2DC4u;
    // 0x1d2dc4: 0x0  nop
    ctx->pc = 0x1d2dc4u;
    // NOP
    // 0x1d2dc8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1d2dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1d2dcc: 0x0  nop
    ctx->pc = 0x1d2dccu;
    // NOP
    ctx->pc = 0x1d2dd0u;
}
