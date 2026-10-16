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

// Function: sub_001A0828
// Address: 0x1a0828 - 0x1a0860
void sub_001A0828_0x1a0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A0828_0x1a0828");
#endif

    ctx->pc = 0x1a0828u;

    // 0x1a0828: 0x8c86080c  lw          $a2, 0x80C($a0)
    ctx->pc = 0x1a0828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2060)));
    // 0x1a082c: 0x24070098  addiu       $a3, $zero, 0x98
    ctx->pc = 0x1a082cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 152));
    // 0x1a0830: 0x8c830804  lw          $v1, 0x804($a0)
    ctx->pc = 0x1a0830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 2052)));
    // 0x1a0834: 0xc73018  mult        $a2, $a2, $a3
    ctx->pc = 0x1a0834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x1a0838: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1a0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1a083c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1a083cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1a0840: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x1a0840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1a0844: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A0844u;
    {
        const bool branch_taken_0x1a0844 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a0844) {
            ctx->pc = 0x1A0848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A0844u;
            // 0x1a0848: 0x8cc30094  lw          $v1, 0x94($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 148)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A0854u;
            goto label_1a0854;
        }
    }
    ctx->pc = 0x1A084Cu;
    // 0x1a084c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A084Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A0850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A084Cu;
        // 0x1a0850: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A084Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0854u;
label_1a0854:
    // 0x1a0854: 0x51140  sll         $v0, $a1, 5
    ctx->pc = 0x1a0854u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x1a0858: 0x3e00008  jr          $ra
    ctx->pc = 0x1A0858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A0858u;
        // 0x1a085c: 0x621021  addu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A0858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A0860u;
}
