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

// Function: sub_0028B6A0
// Address: 0x28b6a0 - 0x28b6d8
void sub_0028B6A0_0x28b6a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6A0_0x28b6a0");
#endif

    ctx->pc = 0x28b6a0u;

    // 0x28b6a0: 0x3e00008  jr          $ra
    ctx->pc = 0x28B6A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B6A0u;
        // 0x28b6a4: 0x8c8200b4  lw          $v0, 0xB4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B6A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B6A8u;
    // 0x28b6a8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28b6ac: 0x0  nop
    ctx->pc = 0x28b6acu;
    // NOP
    // 0x28b6b0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28b6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28b6b4: 0x0  nop
    ctx->pc = 0x28b6b4u;
    // NOP
    // 0x28b6b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28b6b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28b6bc: 0x0  nop
    ctx->pc = 0x28b6bcu;
    // NOP
    // 0x28b6c0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x28b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x28b6c4: 0x0  nop
    ctx->pc = 0x28b6c4u;
    // NOP
    // 0x28b6c8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x28b6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28b6cc: 0x0  nop
    ctx->pc = 0x28b6ccu;
    // NOP
    // 0x28b6d0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x28b6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28b6d4: 0x0  nop
    ctx->pc = 0x28b6d4u;
    // NOP
    ctx->pc = 0x28b6d8u;
}
