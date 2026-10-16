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

// Function: sub_001515A8
// Address: 0x1515a8 - 0x1515d8
void sub_001515A8_0x1515a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001515A8_0x1515a8");
#endif

    switch (ctx->pc) {
        case 0x1515b0u: goto label_1515b0;
        default: break;
    }

    ctx->pc = 0x1515a8u;

    // 0x1515a8: 0x24840054  addiu       $a0, $a0, 0x54
    ctx->pc = 0x1515a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 84));
    // 0x1515ac: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1515acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1515b0:
    // 0x1515b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1515b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1515b4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1515B4u;
    {
        const bool branch_taken_0x1515b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1515b4) {
            ctx->pc = 0x1515B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1515B4u;
            // 0x1515b8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1515C4u;
            goto label_1515c4;
        }
    }
    ctx->pc = 0x1515BCu;
    // 0x1515bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1515BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515BCu;
        // 0x1515c0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515C4u;
label_1515c4:
    // 0x1515c4: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x1515c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x1515c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1515C8u;
    {
        const bool branch_taken_0x1515c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1515CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515C8u;
        // 0x1515cc: 0x248400d8  addiu       $a0, $a0, 0xD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515c8) {
            ctx->pc = 0x1515B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1515b0;
        }
    }
    ctx->pc = 0x1515D0u;
    // 0x1515d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1515D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1515D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515D0u;
        // 0x1515d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1515D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1515D8u;
}
