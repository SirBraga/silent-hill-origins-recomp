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

// Function: sub_002DC0D0
// Address: 0x2dc0d0 - 0x2dc108
void sub_002DC0D0_0x2dc0d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC0D0_0x2dc0d0");
#endif

    switch (ctx->pc) {
        case 0x2dc0e0u: goto label_2dc0e0;
        default: break;
    }

    ctx->pc = 0x2dc0d0u;

    // 0x2dc0d0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2dc0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2dc0d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2DC0D4u;
    {
        const bool branch_taken_0x2dc0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0D4u;
        // 0x2dc0d8: 0x24860004  addiu       $a2, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0d4) {
            ctx->pc = 0x2DC0F0u;
            goto label_2dc0f0;
        }
    }
    ctx->pc = 0x2DC0DCu;
    // 0x2dc0dc: 0x0  nop
    ctx->pc = 0x2dc0dcu;
    // NOP
label_2dc0e0:
    // 0x2dc0e0: 0x14660004  bne         $v1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC0E0u;
    {
        const bool branch_taken_0x2dc0e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x2DC0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0E0u;
        // 0x2dc0e4: 0x2464ffe0  addiu       $a0, $v1, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc0e0) {
            ctx->pc = 0x2DC0F4u;
            goto label_2dc0f4;
        }
    }
    ctx->pc = 0x2DC0E8u;
    // 0x2dc0e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0E8u;
        // 0x2dc0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0F0u;
label_2dc0f0:
    // 0x2dc0f0: 0x2464ffe0  addiu       $a0, $v1, -0x20
    ctx->pc = 0x2dc0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967264));
label_2dc0f4:
    // 0x2dc0f4: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2dc0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2dc0f8: 0x5445fff9  bnel        $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2DC0F8u;
    {
        const bool branch_taken_0x2dc0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2dc0f8) {
            ctx->pc = 0x2DC0FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0F8u;
            // 0x2dc0fc: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc0e0;
        }
    }
    ctx->pc = 0x2DC100u;
    // 0x2dc100: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC100u;
        // 0x2dc104: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC108u;
}
