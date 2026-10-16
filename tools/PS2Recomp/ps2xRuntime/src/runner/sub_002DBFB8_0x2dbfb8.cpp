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

// Function: sub_002DBFB8
// Address: 0x2dbfb8 - 0x2dbfd0
void sub_002DBFB8_0x2dbfb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DBFB8_0x2dbfb8");
#endif

    ctx->pc = 0x2dbfb8u;

    // 0x2dbfb8: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2dbfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dbfbc: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2dbfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2dbfc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x2dbfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x2dbfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DBFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DBFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DBFC4u;
        // 0x2dbfc8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DBFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DBFCCu;
    // 0x2dbfcc: 0x0  nop
    ctx->pc = 0x2dbfccu;
    // NOP
    ctx->pc = 0x2dbfd0u;
}
