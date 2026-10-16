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

// Function: sub_00283088
// Address: 0x283088 - 0x2830a0
void sub_00283088_0x283088(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00283088_0x283088");
#endif

    ctx->pc = 0x283088u;

    // 0x283088: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x283088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x28308c: 0x8c43e6e8  lw          $v1, -0x1918($v0)
    ctx->pc = 0x28308cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x67E6E8u));
    // 0x283090: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x283090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283094: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x283094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x283098: 0x3e00008  jr          $ra
    ctx->pc = 0x283098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x283098u;
        // 0x28309c: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2830A0u;
}
