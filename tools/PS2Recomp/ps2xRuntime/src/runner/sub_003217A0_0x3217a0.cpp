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

// Function: sub_003217A0
// Address: 0x3217a0 - 0x3217b0
void sub_003217A0_0x3217a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003217A0_0x3217a0");
#endif

    ctx->pc = 0x3217a0u;

    // 0x3217a0: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x3217a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x3217a4: 0x3e00008  jr          $ra
    ctx->pc = 0x3217A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3217A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3217A4u;
        // 0x3217a8: 0xac407540  sw          $zero, 0x7540($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 30016), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3217A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3217ACu;
    // 0x3217ac: 0x0  nop
    ctx->pc = 0x3217acu;
    // NOP
    ctx->pc = 0x3217b0u;
}
