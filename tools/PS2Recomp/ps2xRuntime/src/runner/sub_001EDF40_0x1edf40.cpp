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

// Function: sub_001EDF40
// Address: 0x1edf40 - 0x1edf58
void sub_001EDF40_0x1edf40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDF40_0x1edf40");
#endif

    ctx->pc = 0x1edf40u;

    // 0x1edf40: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1edf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1edf44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1edf44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edf48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1edf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1edf4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1EDF4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EDF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDF4Cu;
        // 0x1edf50: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EDF4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EDF54u;
    // 0x1edf54: 0x0  nop
    ctx->pc = 0x1edf54u;
    // NOP
    ctx->pc = 0x1edf58u;
}
