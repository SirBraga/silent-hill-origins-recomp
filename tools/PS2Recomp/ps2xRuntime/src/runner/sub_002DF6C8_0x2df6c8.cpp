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

// Function: sub_002DF6C8
// Address: 0x2df6c8 - 0x2df6e0
void sub_002DF6C8_0x2df6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF6C8_0x2df6c8");
#endif

    ctx->pc = 0x2df6c8u;

    // 0x2df6c8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2df6c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df6cc: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x2df6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x2df6d0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x2df6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x2df6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF6D4u;
        // 0x2df6d8: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF6DCu;
    // 0x2df6dc: 0x0  nop
    ctx->pc = 0x2df6dcu;
    // NOP
    ctx->pc = 0x2df6e0u;
}
