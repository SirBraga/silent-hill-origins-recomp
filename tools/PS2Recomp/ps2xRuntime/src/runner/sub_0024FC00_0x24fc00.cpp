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

// Function: sub_0024FC00
// Address: 0x24fc00 - 0x24fc20
void sub_0024FC00_0x24fc00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024FC00_0x24fc00");
#endif

    ctx->pc = 0x24fc00u;

    // 0x24fc00: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24fc00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24fc04: 0x8c6341a0  lw          $v1, 0x41A0($v1)
    ctx->pc = 0x24fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B41A0u));
    // 0x24fc08: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x24fc08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24fc0c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x24fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x24fc10: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24fc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x24fc14: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x24fc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x24fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x24FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24FC18u;
        // 0x24fc1c: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24FC20u;
}
