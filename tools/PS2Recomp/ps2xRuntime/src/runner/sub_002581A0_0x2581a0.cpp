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

// Function: sub_002581A0
// Address: 0x2581a0 - 0x2581b8
void sub_002581A0_0x2581a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002581A0_0x2581a0");
#endif

    ctx->pc = 0x2581a0u;

    // 0x2581a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2581a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2581a4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2581a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2581a8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2581a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2581ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2581ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2581B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2581ACu;
        // 0x2581b0: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2581ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2581B4u;
    // 0x2581b4: 0x0  nop
    ctx->pc = 0x2581b4u;
    // NOP
    ctx->pc = 0x2581b8u;
}
