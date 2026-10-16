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

// Function: sub_001D9728
// Address: 0x1d9728 - 0x1d9760
void sub_001D9728_0x1d9728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9728_0x1d9728");
#endif

    switch (ctx->pc) {
        case 0x1d9738u: goto label_1d9738;
        default: break;
    }

    ctx->pc = 0x1d9728u;

    // 0x1d9728: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d9728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d972c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1d972cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9730: 0x244589e0  addiu       $a1, $v0, -0x7620
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937056));
    // 0x1d9734: 0x0  nop
    ctx->pc = 0x1d9734u;
    // NOP
label_1d9738:
    // 0x1d9738: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d9738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d973c: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D973Cu;
    {
        const bool branch_taken_0x1d973c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1d973c) {
            ctx->pc = 0x1D9740u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D973Cu;
            // 0x1d9740: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D974Cu;
            goto label_1d974c;
        }
    }
    ctx->pc = 0x1D9744u;
    // 0x1d9744: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9744u;
        // 0x1d9748: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D974Cu;
label_1d974c:
    // 0x1d974c: 0x2c620020  sltiu       $v0, $v1, 0x20
    ctx->pc = 0x1d974cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9750: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D9750u;
    {
        const bool branch_taken_0x1d9750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9750u;
        // 0x1d9754: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9750) {
            ctx->pc = 0x1D9738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d9738;
        }
    }
    ctx->pc = 0x1D9758u;
    // 0x1d9758: 0x3e00008  jr          $ra
    ctx->pc = 0x1D9758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9758u;
        // 0x1d975c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D9758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9760u;
}
