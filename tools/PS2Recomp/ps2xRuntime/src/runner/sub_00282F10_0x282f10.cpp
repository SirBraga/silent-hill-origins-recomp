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

// Function: sub_00282F10
// Address: 0x282f10 - 0x282f28
void sub_00282F10_0x282f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00282F10_0x282f10");
#endif

    ctx->pc = 0x282f10u;

    // 0x282f10: 0x3e00008  jr          $ra
    ctx->pc = 0x282F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x282F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x282F10u;
        // 0x282f14: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x282F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282F18u;
    // 0x282f18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x282f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x282f1c: 0x0  nop
    ctx->pc = 0x282f1cu;
    // NOP
    // 0x282f20: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x282f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x282f24: 0x0  nop
    ctx->pc = 0x282f24u;
    // NOP
    ctx->pc = 0x282f28u;
}
