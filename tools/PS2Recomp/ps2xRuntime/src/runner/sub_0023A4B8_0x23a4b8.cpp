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

// Function: sub_0023A4B8
// Address: 0x23a4b8 - 0x23a4c8
void sub_0023A4B8_0x23a4b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023A4B8_0x23a4b8");
#endif

    ctx->pc = 0x23a4b8u;

    // 0x23a4b8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x23a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x23a4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x23A4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A4BCu;
        // 0x23a4c0: 0x24420e58  addiu       $v0, $v0, 0xE58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3672));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23A4C4u;
    // 0x23a4c4: 0x0  nop
    ctx->pc = 0x23a4c4u;
    // NOP
    ctx->pc = 0x23a4c8u;
}
