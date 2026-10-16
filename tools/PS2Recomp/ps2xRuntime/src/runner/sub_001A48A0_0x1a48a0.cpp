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

// Function: sub_001A48A0
// Address: 0x1a48a0 - 0x1a48c0
void sub_001A48A0_0x1a48a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A48A0_0x1a48a0");
#endif

    ctx->pc = 0x1a48a0u;

    // 0x1a48a0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a48a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a48a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a48a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a48a8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1a48a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1a48ac: 0xac45000c  sw          $a1, 0xC($v0)
    ctx->pc = 0x1a48acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 5));
    // 0x1a48b0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1a48b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a48b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a48b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a48b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A48B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A48BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A48B8u;
        // 0x1a48bc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A48B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A48C0u;
}
