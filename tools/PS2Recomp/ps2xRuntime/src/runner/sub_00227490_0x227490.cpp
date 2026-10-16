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

// Function: sub_00227490
// Address: 0x227490 - 0x2274b0
void sub_00227490_0x227490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00227490_0x227490");
#endif

    ctx->pc = 0x227490u;

    // 0x227490: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x227490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x227494: 0x8c633e90  lw          $v1, 0x3E90($v1)
    ctx->pc = 0x227494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B3E90u));
    // 0x227498: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x227498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x22749c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x22749cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x2274a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2274a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2274a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2274A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2274A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2274A4u;
        // 0x2274a8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2274A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2274ACu;
    // 0x2274ac: 0x0  nop
    ctx->pc = 0x2274acu;
    // NOP
    ctx->pc = 0x2274b0u;
}
