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

// Function: sub_002EDCD8
// Address: 0x2edcd8 - 0x2edcf0
void sub_002EDCD8_0x2edcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDCD8_0x2edcd8");
#endif

    ctx->pc = 0x2edcd8u;

    // 0x2edcd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2edcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edcdc: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x2edcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
    // 0x2edce0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2edce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2edce4: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCE4u;
        // 0x2edce8: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDCECu;
    // 0x2edcec: 0x0  nop
    ctx->pc = 0x2edcecu;
    // NOP
    ctx->pc = 0x2edcf0u;
}
