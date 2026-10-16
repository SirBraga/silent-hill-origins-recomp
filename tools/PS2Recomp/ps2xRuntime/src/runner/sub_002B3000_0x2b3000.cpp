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

// Function: sub_002B3000
// Address: 0x2b3000 - 0x2b3020
void sub_002B3000_0x2b3000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B3000_0x2b3000");
#endif

    ctx->pc = 0x2b3000u;

    // 0x2b3000: 0xac85002c  sw          $a1, 0x2C($a0)
    ctx->pc = 0x2b3000u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 5));
    // 0x2b3004: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2b3004u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b3008: 0x3e00008  jr          $ra
    ctx->pc = 0x2B3008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B300Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B3008u;
        // 0x2b300c: 0xac850028  sw          $a1, 0x28($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B3008u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B3010u;
    // 0x2b3010: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2b3010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x2b3014: 0x0  nop
    ctx->pc = 0x2b3014u;
    // NOP
    // 0x2b3018: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2b3018u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2b301c: 0x0  nop
    ctx->pc = 0x2b301cu;
    // NOP
    ctx->pc = 0x2b3020u;
}
