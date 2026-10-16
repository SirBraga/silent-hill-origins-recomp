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

// Function: sub_002EBCB8
// Address: 0x2ebcb8 - 0x2ebcc8
void sub_002EBCB8_0x2ebcb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EBCB8_0x2ebcb8");
#endif

    ctx->pc = 0x2ebcb8u;

    // 0x2ebcb8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2ebcb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ebcbc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EBCBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EBCBCu;
        // 0x2ebcc0: 0xac461418  sw          $a2, 0x1418($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5144), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EBCBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EBCC4u;
    // 0x2ebcc4: 0x0  nop
    ctx->pc = 0x2ebcc4u;
    // NOP
    ctx->pc = 0x2ebcc8u;
}
