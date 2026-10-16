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

// Function: sub_001A08A0
// Address: 0x1a08a0 - 0x1a08c0
void sub_001A08A0_0x1a08a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A08A0_0x1a08a0");
#endif

    ctx->pc = 0x1a08a0u;

    // 0x1a08a0: 0x8c83080c  lw          $v1, 0x80C($a0)
    ctx->pc = 0x1a08a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a08a4: 0x24060098  addiu       $a2, $zero, 0x98
    ctx->pc = 0x1a08a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a08a8: 0x8c850804  lw          $a1, 0x804($a0)
    ctx->pc = 0x1a08a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a08ac: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x1a08acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a08b0: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1a08b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1a08b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a08b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1a08b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1A08B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A08BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A08B8u;
        // 0x1a08bc: 0x8c620050  lw          $v0, 0x50($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A08B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A08C0u;
}
