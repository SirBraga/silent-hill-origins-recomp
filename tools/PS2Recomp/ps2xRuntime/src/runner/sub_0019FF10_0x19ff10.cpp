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

// Function: sub_0019FF10
// Address: 0x19ff10 - 0x19ff28
void sub_0019FF10_0x19ff10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019FF10_0x19ff10");
#endif

    ctx->pc = 0x19ff10u;

    // 0x19ff10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19ff10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19ff14: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x19ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x19ff18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x19ff18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x19ff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x19FF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19FF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19FF1Cu;
        // 0x19ff20: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19FF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19FF24u;
    // 0x19ff24: 0x0  nop
    ctx->pc = 0x19ff24u;
    // NOP
    ctx->pc = 0x19ff28u;
}
