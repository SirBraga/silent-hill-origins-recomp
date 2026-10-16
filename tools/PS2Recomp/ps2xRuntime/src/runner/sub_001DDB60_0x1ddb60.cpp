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

// Function: sub_001DDB60
// Address: 0x1ddb60 - 0x1ddb80
void sub_001DDB60_0x1ddb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDB60_0x1ddb60");
#endif

    ctx->pc = 0x1ddb60u;

    // 0x1ddb60: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ddb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1ddb64: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1ddb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x1ddb68: 0x8c44e688  lw          $a0, -0x1978($v0)
    ctx->pc = 0x1ddb68u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33E688u));
    // 0x1ddb6c: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x1ddb6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
    // 0x1ddb70: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ddb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ddb74: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDB74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB74u;
        // 0x1ddb78: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDB7Cu;
    // 0x1ddb7c: 0x0  nop
    ctx->pc = 0x1ddb7cu;
    // NOP
    ctx->pc = 0x1ddb80u;
}
