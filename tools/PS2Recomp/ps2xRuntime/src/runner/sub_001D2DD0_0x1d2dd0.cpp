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

// Function: sub_001D2DD0
// Address: 0x1d2dd0 - 0x1d2e08
void sub_001D2DD0_0x1d2dd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2DD0_0x1d2dd0");
#endif

    ctx->pc = 0x1d2dd0u;

    // 0x1d2dd0: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2dd4: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d2dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d2dd8: 0x8c629b68  lw          $v0, -0x6498($v1)
    ctx->pc = 0x1d2dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B68u));
    // 0x1d2ddc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d2ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d2de0: 0x8cc39b6c  lw          $v1, -0x6494($a2)
    ctx->pc = 0x1d2de0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339B6Cu));
    // 0x1d2de4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2DE4u;
        // 0x1d2de8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2DECu;
    // 0x1d2dec: 0x0  nop
    ctx->pc = 0x1d2decu;
    // NOP
    // 0x1d2df0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2df4: 0x0  nop
    ctx->pc = 0x1d2df4u;
    // NOP
    // 0x1d2df8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2dfc: 0x0  nop
    ctx->pc = 0x1d2dfcu;
    // NOP
    // 0x1d2e00: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1d2e00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1d2e04: 0x0  nop
    ctx->pc = 0x1d2e04u;
    // NOP
    ctx->pc = 0x1d2e08u;
}
