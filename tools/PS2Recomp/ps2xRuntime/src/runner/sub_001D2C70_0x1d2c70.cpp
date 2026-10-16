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

// Function: sub_001D2C70
// Address: 0x1d2c70 - 0x1d2c90
void sub_001D2C70_0x1d2c70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2C70_0x1d2c70");
#endif

    ctx->pc = 0x1d2c70u;

    // 0x1d2c70: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d2c70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1d2c74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1d2c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2c78: 0x24630df0  addiu       $v1, $v1, 0xDF0
    ctx->pc = 0x1d2c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3568));
    // 0x1d2c7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1d2c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1d2c80: 0xac830008  sw          $v1, 0x8($a0)
    ctx->pc = 0x1d2c80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
    // 0x1d2c84: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2C84u;
        // 0x1d2c88: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C8Cu;
    // 0x1d2c8c: 0x0  nop
    ctx->pc = 0x1d2c8cu;
    // NOP
    ctx->pc = 0x1d2c90u;
}
