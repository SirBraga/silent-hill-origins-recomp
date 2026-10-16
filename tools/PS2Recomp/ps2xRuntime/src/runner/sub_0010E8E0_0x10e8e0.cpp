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

// Function: sub_0010E8E0
// Address: 0x10e8e0 - 0x10e900
void sub_0010E8E0_0x10e8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010E8E0_0x10e8e0");
#endif

    ctx->pc = 0x10e8e0u;

    // 0x10e8e0: 0x8c8213e8  lw          $v0, 0x13E8($a0)
    ctx->pc = 0x10e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5096)));
    // 0x10e8e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E8E4u;
    {
        const bool branch_taken_0x10e8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10E8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8E4u;
        // 0x10e8e8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e8e4) {
            ctx->pc = 0x10E8F4u;
            goto label_10e8f4;
        }
    }
    ctx->pc = 0x10E8ECu;
    // 0x10e8ec: 0x8c821354  lw          $v0, 0x1354($a0)
    ctx->pc = 0x10e8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4948)));
    // 0x10e8f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x10e8f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_10e8f4:
    // 0x10e8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x10E8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10E8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E8F4u;
        // 0x10e8f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10E8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10E8FCu;
    // 0x10e8fc: 0x0  nop
    ctx->pc = 0x10e8fcu;
    // NOP
    ctx->pc = 0x10e900u;
}
