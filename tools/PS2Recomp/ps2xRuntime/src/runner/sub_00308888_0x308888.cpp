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

// Function: sub_00308888
// Address: 0x308888 - 0x3088e8
void sub_00308888_0x308888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308888_0x308888");
#endif

    switch (ctx->pc) {
        case 0x308894u: goto label_308894;
        default: break;
    }

    ctx->pc = 0x308888u;

    // 0x308888: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x308888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30888c: 0x54e00003  bnel        $a3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x30888Cu;
    {
        const bool branch_taken_0x30888c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x30888c) {
            ctx->pc = 0x308890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30888Cu;
            // 0x308890: 0x8ce30014  lw          $v1, 0x14($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x30889Cu;
            goto label_30889c;
        }
    }
    ctx->pc = 0x308894u;
label_308894:
    // 0x308894: 0x3e00008  jr          $ra
    ctx->pc = 0x308894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308894u;
        // 0x308898: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30889Cu;
label_30889c:
    // 0x30889c: 0x0  nop
    ctx->pc = 0x30889cu;
    // NOP
    // 0x3088a0: 0x0  nop
    ctx->pc = 0x3088a0u;
    // NOP
    // 0x3088a4: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x3088A4u;
    {
        const bool branch_taken_0x3088a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3088a4) {
            ctx->pc = 0x308894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308894;
        }
    }
    ctx->pc = 0x3088ACu;
    // 0x3088ac: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3088ACu;
    {
        const bool branch_taken_0x3088ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3088B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088ACu;
        // 0x3088b0: 0x3c02005c  lui         $v0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088ac) {
            ctx->pc = 0x3088CCu;
            goto label_3088cc;
        }
    }
    ctx->pc = 0x3088B4u;
    // 0x3088b4: 0x10c0fff7  beqz        $a2, . + 4 + (-0x9 << 2)
    ctx->pc = 0x3088B4u;
    {
        const bool branch_taken_0x3088b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3088b4) {
            ctx->pc = 0x308894u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_308894;
        }
    }
    ctx->pc = 0x3088BCu;
    // 0x3088bc: 0xac650018  sw          $a1, 0x18($v1)
    ctx->pc = 0x3088bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 5));
    // 0x3088c0: 0x8ce20014  lw          $v0, 0x14($a3)
    ctx->pc = 0x3088c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3088c4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3088C4u;
    {
        const bool branch_taken_0x3088c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3088C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088C4u;
        // 0x3088c8: 0xac46001c  sw          $a2, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3088c4) {
            ctx->pc = 0x3088E0u;
            goto label_3088e0;
        }
    }
    ctx->pc = 0x3088CCu;
label_3088cc:
    // 0x3088cc: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3088ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3088d0: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x3088d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
    // 0x3088d4: 0xac620018  sw          $v0, 0x18($v1)
    ctx->pc = 0x3088d4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 2));
    // 0x3088d8: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x3088d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x3088dc: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x3088dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_3088e0:
    // 0x3088e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3088E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3088E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3088E0u;
        // 0x3088e4: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3088E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3088E8u;
}
