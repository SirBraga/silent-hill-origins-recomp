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

// Function: sub_00206020
// Address: 0x206020 - 0x206030
void sub_00206020_0x206020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206020_0x206020");
#endif

    ctx->pc = 0x206020u;

    // 0x206020: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x206020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x206024: 0x3e00008  jr          $ra
    ctx->pc = 0x206024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206024u;
        // 0x206028: 0x8c620294  lw          $v0, 0x294($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 660)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20602Cu;
    // 0x20602c: 0x0  nop
    ctx->pc = 0x20602cu;
    // NOP
    ctx->pc = 0x206030u;
}
