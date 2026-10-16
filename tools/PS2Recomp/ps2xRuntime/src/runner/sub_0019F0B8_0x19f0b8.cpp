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

// Function: sub_0019F0B8
// Address: 0x19f0b8 - 0x19f0d0
void sub_0019F0B8_0x19f0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F0B8_0x19f0b8");
#endif

    ctx->pc = 0x19f0b8u;

    // 0x19f0b8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x19f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x19f0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x19F0BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19F0BCu;
        // 0x19f0c0: 0x8c629084  lw          $v0, -0x6F7C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938756)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F0BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F0C4u;
    // 0x19f0c4: 0x0  nop
    ctx->pc = 0x19f0c4u;
    // NOP
    // 0x19f0c8: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x19f0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19f0cc: 0x0  nop
    ctx->pc = 0x19f0ccu;
    // NOP
    ctx->pc = 0x19f0d0u;
}
