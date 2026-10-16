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

// Function: sub_0025C7E0
// Address: 0x25c7e0 - 0x25c800
void sub_0025C7E0_0x25c7e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C7E0_0x25c7e0");
#endif

    ctx->pc = 0x25c7e0u;

    // 0x25c7e0: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25C7E0u;
    {
        const bool branch_taken_0x25c7e0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c7e0) {
            ctx->pc = 0x25C7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C7E0u;
            // 0x25c7e4: 0xac850068  sw          $a1, 0x68($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7F4u;
            goto label_25c7f4;
        }
    }
    ctx->pc = 0x25C7E8u;
    // 0x25c7e8: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x25c7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
    // 0x25c7ec: 0x2445c078  addiu       $a1, $v0, -0x3F88
    ctx->pc = 0x25c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951032));
    // 0x25c7f0: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x25c7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_25c7f4:
    // 0x25c7f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25C7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7F4u;
        // 0x25c7f8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25C7FCu;
    // 0x25c7fc: 0x0  nop
    ctx->pc = 0x25c7fcu;
    // NOP
    ctx->pc = 0x25c800u;
}
