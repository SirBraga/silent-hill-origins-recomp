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

// Function: sub_0022B6B8
// Address: 0x22b6b8 - 0x22b6e0
void sub_0022B6B8_0x22b6b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022B6B8_0x22b6b8");
#endif

    ctx->pc = 0x22b6b8u;

    // 0x22b6b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x22b6b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b6bc: 0xa0800018  sb          $zero, 0x18($a0)
    ctx->pc = 0x22b6bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 24), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b6c0: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x22b6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x22b6c4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x22b6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x22b6c8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x22b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x22b6cc: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x22b6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x22b6d0: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x22b6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x22b6d4: 0x3e00008  jr          $ra
    ctx->pc = 0x22B6D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B6D4u;
        // 0x22b6d8: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B6D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B6DCu;
    // 0x22b6dc: 0x0  nop
    ctx->pc = 0x22b6dcu;
    // NOP
    ctx->pc = 0x22b6e0u;
}
