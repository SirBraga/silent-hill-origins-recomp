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

// Function: sub_001FF7C0
// Address: 0x1ff7c0 - 0x1ff7e0
void sub_001FF7C0_0x1ff7c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF7C0_0x1ff7c0");
#endif

    ctx->pc = 0x1ff7c0u;

    // 0x1ff7c0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x1ff7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x1ff7c4: 0x8c430144  lw          $v1, 0x144($v0)
    ctx->pc = 0x1ff7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5C0144u));
    // 0x1ff7c8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1ff7c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1ff7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF7CCu;
        // 0x1ff7d0: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF7D4u;
    // 0x1ff7d4: 0x0  nop
    ctx->pc = 0x1ff7d4u;
    // NOP
    // 0x1ff7d8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1ff7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1ff7dc: 0x0  nop
    ctx->pc = 0x1ff7dcu;
    // NOP
    ctx->pc = 0x1ff7e0u;
}
