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

// Function: sub_00225788
// Address: 0x225788 - 0x225798
void sub_00225788_0x225788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225788_0x225788");
#endif

    ctx->pc = 0x225788u;

    // 0x225788: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x225788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x22578c: 0x3e00008  jr          $ra
    ctx->pc = 0x22578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x225790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22578Cu;
        // 0x225790: 0x34427002  ori         $v0, $v0, 0x7002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28674);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22578Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225794u;
    // 0x225794: 0x0  nop
    ctx->pc = 0x225794u;
    // NOP
    ctx->pc = 0x225798u;
}
