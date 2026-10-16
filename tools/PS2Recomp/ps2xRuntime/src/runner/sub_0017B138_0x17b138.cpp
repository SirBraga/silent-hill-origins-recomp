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

// Function: sub_0017B138
// Address: 0x17b138 - 0x17b158
void sub_0017B138_0x17b138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B138_0x17b138");
#endif

    ctx->pc = 0x17b138u;

    // 0x17b138: 0x3e00008  jr          $ra
    ctx->pc = 0x17B138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B138u;
        // 0x17b13c: 0xac8600c4  sw          $a2, 0xC4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B140u;
    // 0x17b140: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17b140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17b144: 0x0  nop
    ctx->pc = 0x17b144u;
    // NOP
    // 0x17b148: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x17b148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x17b14c: 0x0  nop
    ctx->pc = 0x17b14cu;
    // NOP
    // 0x17b150: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x17b150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x17b154: 0x0  nop
    ctx->pc = 0x17b154u;
    // NOP
    ctx->pc = 0x17b158u;
}
