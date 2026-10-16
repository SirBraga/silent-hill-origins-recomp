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

// Function: sub_001D2E90
// Address: 0x1d2e90 - 0x1d2eb0
void sub_001D2E90_0x1d2e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2E90_0x1d2e90");
#endif

    ctx->pc = 0x1d2e90u;

    // 0x1d2e90: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2e90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d2e94: 0x3c060034  lui         $a2, 0x34
    ctx->pc = 0x1d2e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)52 << 16));
    // 0x1d2e98: 0x8c629b70  lw          $v0, -0x6490($v1)
    ctx->pc = 0x1d2e98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339B70u));
    // 0x1d2e9c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1d2e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1d2ea0: 0x8cc39b74  lw          $v1, -0x648C($a2)
    ctx->pc = 0x1d2ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x339B74u));
    // 0x1d2ea4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2EA4u;
        // 0x1d2ea8: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2EACu;
    // 0x1d2eac: 0x0  nop
    ctx->pc = 0x1d2eacu;
    // NOP
    ctx->pc = 0x1d2eb0u;
}
