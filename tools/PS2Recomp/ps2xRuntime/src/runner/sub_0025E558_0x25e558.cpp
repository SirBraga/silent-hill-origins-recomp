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

// Function: sub_0025E558
// Address: 0x25e558 - 0x25e578
void sub_0025E558_0x25e558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E558_0x25e558");
#endif

    ctx->pc = 0x25e558u;

    // 0x25e558: 0x8f8285fc  lw          $v0, -0x7A04($gp)
    ctx->pc = 0x25e558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936060)));
    // 0x25e55c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x25e55cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x25e560: 0x3e00008  jr          $ra
    ctx->pc = 0x25E560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E560u;
        // 0x25e564: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E568u;
    // 0x25e568: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25e568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25e56c: 0x0  nop
    ctx->pc = 0x25e56cu;
    // NOP
    // 0x25e570: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x25e570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x25e574: 0x0  nop
    ctx->pc = 0x25e574u;
    // NOP
    ctx->pc = 0x25e578u;
}
