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

// Function: sub_001DD8B0
// Address: 0x1dd8b0 - 0x1dd8d0
void sub_001DD8B0_0x1dd8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD8B0_0x1dd8b0");
#endif

    ctx->pc = 0x1dd8b0u;

    // 0x1dd8b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dd8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dd8b4: 0x8c46e680  lw          $a2, -0x1980($v0)
    ctx->pc = 0x1dd8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x33E680u));
    // 0x1dd8b8: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x1dd8b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dd8bc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1dd8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x1dd8c0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1dd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1dd8c4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1dd8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1dd8c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8C8u;
        // 0x1dd8cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8D0u;
}
