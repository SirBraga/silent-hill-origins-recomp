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

// Function: sub_002EDCF0
// Address: 0x2edcf0 - 0x2edd08
void sub_002EDCF0_0x2edcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDCF0_0x2edcf0");
#endif

    ctx->pc = 0x2edcf0u;

    // 0x2edcf0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2edcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2edcf4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2edcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x2edcf8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x2edcf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x2edcfc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDCFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDCFCu;
        // 0x2edd00: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDCFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDD04u;
    // 0x2edd04: 0x0  nop
    ctx->pc = 0x2edd04u;
    // NOP
    ctx->pc = 0x2edd08u;
}
