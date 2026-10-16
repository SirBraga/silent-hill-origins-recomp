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

// Function: sub_001DD888
// Address: 0x1dd888 - 0x1dd8a8
void sub_001DD888_0x1dd888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DD888_0x1dd888");
#endif

    ctx->pc = 0x1dd888u;

    // 0x1dd888: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dd888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dd88c: 0x8c42e680  lw          $v0, -0x1980($v0)
    ctx->pc = 0x1dd88cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E680u));
    // 0x1dd890: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DD890u;
    {
        const bool branch_taken_0x1dd890 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DD894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD890u;
        // 0x1dd894: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dd890) {
            ctx->pc = 0x1DD8A0u;
            goto label_1dd8a0;
        }
    }
    ctx->pc = 0x1DD898u;
    // 0x1dd898: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1dd898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1dd89c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1dd89cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_1dd8a0:
    // 0x1dd8a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DD8A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DD8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DD8A0u;
        // 0x1dd8a4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DD8A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DD8A8u;
}
