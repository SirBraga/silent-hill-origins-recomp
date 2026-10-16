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

// Function: sub_002DBFA0
// Address: 0x2dbfa0 - 0x2dbfb8
void sub_002DBFA0_0x2dbfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBFA0_0x2dbfa0");
#endif

    ctx->pc = 0x2dbfa0u;

    // 0x2dbfa0: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2dbfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dbfa4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2dbfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2dbfa8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dbfa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dbfac: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBFACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFACu;
        // 0x2dbfb0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBFACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBFB4u;
    // 0x2dbfb4: 0x0  nop
    ctx->pc = 0x2dbfb4u;
    // NOP
    ctx->pc = 0x2dbfb8u;
}
