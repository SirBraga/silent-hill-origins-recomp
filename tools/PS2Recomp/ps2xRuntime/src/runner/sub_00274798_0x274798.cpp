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

// Function: sub_00274798
// Address: 0x274798 - 0x2747c0
void sub_00274798_0x274798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00274798_0x274798");
#endif

    ctx->pc = 0x274798u;

    // 0x274798: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x274798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x27479c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x27479cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2747a0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2747A0u;
    {
        const bool branch_taken_0x2747a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2747a0) {
            ctx->pc = 0x2747A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2747A0u;
            // 0x2747a4: 0x8c830058  lw          $v1, 0x58($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2747B0u;
            goto label_2747b0;
        }
    }
    ctx->pc = 0x2747A8u;
    // 0x2747a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2747A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2747ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747A8u;
        // 0x2747ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2747A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2747B0u;
label_2747b0:
    // 0x2747b0: 0x511c0  sll         $v0, $a1, 7
    ctx->pc = 0x2747b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 7));
    // 0x2747b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2747B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2747B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2747B4u;
        // 0x2747b8: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2747B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2747BCu;
    // 0x2747bc: 0x0  nop
    ctx->pc = 0x2747bcu;
    // NOP
    ctx->pc = 0x2747c0u;
}
