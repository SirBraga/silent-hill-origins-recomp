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

// Function: sub_001789E0
// Address: 0x1789e0 - 0x178a00
void sub_001789E0_0x1789e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001789E0_0x1789e0");
#endif

    ctx->pc = 0x1789e0u;

    // 0x1789e0: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1789E0u;
    {
        const bool branch_taken_0x1789e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1789e0) {
            ctx->pc = 0x1789E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1789E0u;
            // 0x1789e4: 0x8c8300c8  lw          $v1, 0xC8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 200)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1789F4u;
            goto label_1789f4;
        }
    }
    ctx->pc = 0x1789E8u;
    // 0x1789e8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1789e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1789ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1789ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1789F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789ECu;
        // 0x1789f0: 0xac4084b0  sw          $zero, -0x7B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935728), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1789ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1789F4u;
label_1789f4:
    // 0x1789f4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1789f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1789f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1789F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1789FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1789F8u;
        // 0x1789fc: 0xac4384b0  sw          $v1, -0x7B50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294935728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1789F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x178A00u;
}
