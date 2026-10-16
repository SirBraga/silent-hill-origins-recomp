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

// Function: sub_0019D688
// Address: 0x19d688 - 0x19d698
void sub_0019D688_0x19d688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D688_0x19d688");
#endif

    ctx->pc = 0x19d688u;

    // 0x19d688: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19d688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19d68c: 0x3e00008  jr          $ra
    ctx->pc = 0x19D68Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D68Cu;
        // 0x19d690: 0x2442a3c0  addiu       $v0, $v0, -0x5C40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943680));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D68Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D694u;
    // 0x19d694: 0x0  nop
    ctx->pc = 0x19d694u;
    // NOP
    ctx->pc = 0x19d698u;
}
