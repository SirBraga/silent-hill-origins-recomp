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

// Function: sub_0017D120
// Address: 0x17d120 - 0x17d138
void sub_0017D120_0x17d120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D120_0x17d120");
#endif

    ctx->pc = 0x17d120u;

    // 0x17d120: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x17d120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x17d124: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17d124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d128: 0x3e00008  jr          $ra
    ctx->pc = 0x17D128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D128u;
        // 0x17d12c: 0xac628850  sw          $v0, -0x77B0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294936656), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D130u;
    // 0x17d130: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17d130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17d134: 0x0  nop
    ctx->pc = 0x17d134u;
    // NOP
    ctx->pc = 0x17d138u;
}
