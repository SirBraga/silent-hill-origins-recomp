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

// Function: sub_001F35A0
// Address: 0x1f35a0 - 0x1f35c0
void sub_001F35A0_0x1f35a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F35A0_0x1f35a0");
#endif

    ctx->pc = 0x1f35a0u;

    // 0x1f35a0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f35a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f35a4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1f35a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f35a8: 0x8c43eac4  lw          $v1, -0x153C($v0)
    ctx->pc = 0x1f35a8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33EAC4u));
    // 0x1f35ac: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f35acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f35b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1f35b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1f35b4: 0x2442ea30  addiu       $v0, $v0, -0x15D0
    ctx->pc = 0x1f35b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961712));
    // 0x1f35b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F35B8u;
        // 0x1f35bc: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F35B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F35C0u;
}
