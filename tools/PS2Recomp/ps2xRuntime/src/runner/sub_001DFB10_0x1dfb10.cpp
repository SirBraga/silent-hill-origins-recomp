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

// Function: sub_001DFB10
// Address: 0x1dfb10 - 0x1dfb30
void sub_001DFB10_0x1dfb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFB10_0x1dfb10");
#endif

    ctx->pc = 0x1dfb10u;

    // 0x1dfb10: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1dfb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1dfb14: 0x8c42e6d0  lw          $v0, -0x1930($v0)
    ctx->pc = 0x1dfb14u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E6D0u));
    // 0x1dfb18: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFB18u;
    {
        const bool branch_taken_0x1dfb18 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1DFB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB18u;
        // 0x1dfb1c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dfb18) {
            ctx->pc = 0x1DFB24u;
            goto label_1dfb24;
        }
    }
    ctx->pc = 0x1DFB20u;
    // 0x1dfb20: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1dfb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1dfb24:
    // 0x1dfb24: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFB24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFB24u;
        // 0x1dfb28: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFB24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFB2Cu;
    // 0x1dfb2c: 0x0  nop
    ctx->pc = 0x1dfb2cu;
    // NOP
    ctx->pc = 0x1dfb30u;
}
