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

// Function: sub_001B2A78
// Address: 0x1b2a78 - 0x1b2a98
void sub_001B2A78_0x1b2a78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B2A78_0x1b2a78");
#endif

    ctx->pc = 0x1b2a78u;

    // 0x1b2a78: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B2A78u;
    {
        const bool branch_taken_0x1b2a78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A78u;
        // 0x1b2a7c: 0xac850234  sw          $a1, 0x234($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 564), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b2a78) {
            ctx->pc = 0x1B2A90u;
            goto label_1b2a90;
        }
    }
    ctx->pc = 0x1B2A80u;
    // 0x1b2a80: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b2a84: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b2a84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b2a88: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A88u;
        // 0x1b2a8c: 0xe4800230  swc1        $f0, 0x230($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 560), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A90u;
label_1b2a90:
    // 0x1b2a90: 0x3e00008  jr          $ra
    ctx->pc = 0x1B2A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B2A90u;
        // 0x1b2a94: 0xac800230  sw          $zero, 0x230($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 560), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B2A90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B2A98u;
}
