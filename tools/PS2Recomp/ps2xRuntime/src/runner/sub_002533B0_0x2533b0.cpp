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

// Function: sub_002533B0
// Address: 0x2533b0 - 0x2533d8
void sub_002533B0_0x2533b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002533B0_0x2533b0");
#endif

    ctx->pc = 0x2533b0u;

    // 0x2533b0: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2533b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2533b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2533B4u;
    {
        const bool branch_taken_0x2533b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2533b4) {
            ctx->pc = 0x2533B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2533B4u;
            // 0x2533b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x2533BCu;
    // 0x2533bc: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x2533bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2533c0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2533C0u;
    {
        const bool branch_taken_0x2533c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2533C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2533C0u;
        // 0x2533c4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2533c0) {
            ctx->pc = 0x2533CCu;
            goto label_2533cc;
        }
    }
    ctx->pc = 0x2533C8u;
    // 0x2533c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2533c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2533cc:
    // 0x2533cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2533CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2533CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2533D4u;
    // 0x2533d4: 0x0  nop
    ctx->pc = 0x2533d4u;
    // NOP
    ctx->pc = 0x2533d8u;
}
