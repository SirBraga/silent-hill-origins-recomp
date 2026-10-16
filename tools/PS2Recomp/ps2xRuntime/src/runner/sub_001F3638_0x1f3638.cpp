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

// Function: sub_001F3638
// Address: 0x1f3638 - 0x1f3648
void sub_001F3638_0x1f3638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F3638_0x1f3638");
#endif

    ctx->pc = 0x1f3638u;

    // 0x1f3638: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1f3638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1f363c: 0x8c62eabc  lw          $v0, -0x1544($v1)
    ctx->pc = 0x1f363cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33EABCu));
    // 0x1f3640: 0x3e00008  jr          $ra
    ctx->pc = 0x1F3640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F3644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F3640u;
        // 0x1f3644: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F3640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F3648u;
}
