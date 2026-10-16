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

// Function: sub_001620A8
// Address: 0x1620a8 - 0x1620d0
void sub_001620A8_0x1620a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001620A8_0x1620a8");
#endif

    ctx->pc = 0x1620a8u;

    // 0x1620a8: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1620a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1620ac: 0x8c428658  lw          $v0, -0x79A8($v0)
    ctx->pc = 0x1620acu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x338658u));
    // 0x1620b0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1620B0u;
    {
        const bool branch_taken_0x1620b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1620B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620B0u;
        // 0x1620b4: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1620b0) {
            ctx->pc = 0x1620C4u;
            goto label_1620c4;
        }
    }
    ctx->pc = 0x1620B8u;
    // 0x1620b8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1620b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1620bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1620BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620BCu;
        // 0x1620c0: 0x8c620044  lw          $v0, 0x44($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1620BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1620C4u;
label_1620c4:
    // 0x1620c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1620C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1620C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1620C4u;
        // 0x1620c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1620C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1620CCu;
    // 0x1620cc: 0x0  nop
    ctx->pc = 0x1620ccu;
    // NOP
    ctx->pc = 0x1620d0u;
}
