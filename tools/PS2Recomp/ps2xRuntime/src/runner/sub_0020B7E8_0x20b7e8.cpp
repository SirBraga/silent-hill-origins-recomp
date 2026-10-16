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

// Function: sub_0020B7E8
// Address: 0x20b7e8 - 0x20b800
void sub_0020B7E8_0x20b7e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B7E8_0x20b7e8");
#endif

    ctx->pc = 0x20b7e8u;

    // 0x20b7e8: 0x8c8301c4  lw          $v1, 0x1C4($a0)
    ctx->pc = 0x20b7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 452)));
    // 0x20b7ec: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x20b7ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x20b7f0: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x20b7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
    // 0x20b7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x20B7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B7F4u;
        // 0x20b7f8: 0xac62002c  sw          $v0, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B7FCu;
    // 0x20b7fc: 0x0  nop
    ctx->pc = 0x20b7fcu;
    // NOP
    ctx->pc = 0x20b800u;
}
