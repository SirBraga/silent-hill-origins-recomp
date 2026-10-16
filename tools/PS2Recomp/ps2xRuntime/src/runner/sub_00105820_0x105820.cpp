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

// Function: sub_00105820
// Address: 0x105820 - 0x105838
void sub_00105820_0x105820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105820_0x105820");
#endif

    ctx->pc = 0x105820u;

    // 0x105820: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x105820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x105824: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x105824u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x105828: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x105828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x10582c: 0x3e00008  jr          $ra
    ctx->pc = 0x10582Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10582Cu;
        // 0x105830: 0xac820010  sw          $v0, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10582Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105834u;
    // 0x105834: 0x0  nop
    ctx->pc = 0x105834u;
    // NOP
    ctx->pc = 0x105838u;
}
