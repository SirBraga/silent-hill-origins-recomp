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

// Function: sub_001A5398
// Address: 0x1a5398 - 0x1a53b8
void sub_001A5398_0x1a5398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5398_0x1a5398");
#endif

    ctx->pc = 0x1a5398u;

    // 0x1a5398: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1a5398u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a539c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1a539cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x1a53a0: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x1a53a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x1a53a4: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x1a53a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x1a53a8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1a53a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1a53ac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x1a53acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x1a53b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A53B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A53B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A53B0u;
        // 0x1a53b4: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A53B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A53B8u;
}
