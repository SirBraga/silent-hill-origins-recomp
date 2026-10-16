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

// Function: sub_001D8188
// Address: 0x1d8188 - 0x1d81a0
void sub_001D8188_0x1d8188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D8188_0x1d8188");
#endif

    ctx->pc = 0x1d8188u;

    // 0x1d8188: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d8188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1d818c: 0x8c629d90  lw          $v0, -0x6270($v1)
    ctx->pc = 0x1d818cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339D90u));
    // 0x1d8190: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x1d8190u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d8194: 0x3e00008  jr          $ra
    ctx->pc = 0x1D8194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8194u;
        // 0x1d8198: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D8194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D819Cu;
    // 0x1d819c: 0x0  nop
    ctx->pc = 0x1d819cu;
    // NOP
    ctx->pc = 0x1d81a0u;
}
