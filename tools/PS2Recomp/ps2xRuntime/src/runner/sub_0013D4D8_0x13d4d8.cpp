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

// Function: sub_0013D4D8
// Address: 0x13d4d8 - 0x13d4f8
void sub_0013D4D8_0x13d4d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D4D8_0x13d4d8");
#endif

    ctx->pc = 0x13d4d8u;

    // 0x13d4d8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x13d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x13d4dc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13D4DCu;
    {
        const bool branch_taken_0x13d4dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13d4dc) {
            ctx->pc = 0x13D4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13D4DCu;
            // 0x13d4e0: 0xaca20188  sw          $v0, 0x188($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 392), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13D4ECu;
            goto label_13d4ec;
        }
    }
    ctx->pc = 0x13D4E4u;
    // 0x13d4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x13D4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4E4u;
        // 0x13d4e8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4ECu;
label_13d4ec:
    // 0x13d4ec: 0xaca40184  sw          $a0, 0x184($a1)
    ctx->pc = 0x13d4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 388), GPR_U32(ctx, 4));
    // 0x13d4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x13D4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D4F0u;
        // 0x13d4f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D4F8u;
}
