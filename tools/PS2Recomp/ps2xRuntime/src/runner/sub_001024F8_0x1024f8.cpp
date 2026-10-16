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

// Function: sub_001024F8
// Address: 0x1024f8 - 0x102530
void sub_001024F8_0x1024f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001024F8_0x1024f8");
#endif

    ctx->pc = 0x1024f8u;

    // 0x1024f8: 0x8c850198  lw          $a1, 0x198($a0)
    ctx->pc = 0x1024f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    // 0x1024fc: 0x248601f0  addiu       $a2, $a0, 0x1F0
    ctx->pc = 0x1024fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 496));
    // 0x102500: 0x8c820210  lw          $v0, 0x210($a0)
    ctx->pc = 0x102500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 528)));
    // 0x102504: 0x8ca30024  lw          $v1, 0x24($a1)
    ctx->pc = 0x102504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x102508: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x102508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x10250c: 0x2442004c  addiu       $v0, $v0, 0x4C
    ctx->pc = 0x10250cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 76));
    // 0x102510: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x102510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x102514: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x102514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
    // 0x102518: 0xaca00018  sw          $zero, 0x18($a1)
    ctx->pc = 0x102518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 0));
    // 0x10251c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x10251cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x102520: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x102520u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x102524: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x102524u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x102528: 0x3e00008  jr          $ra
    ctx->pc = 0x102528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102528u;
        // 0x10252c: 0xac8001f0  sw          $zero, 0x1F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102530u;
}
