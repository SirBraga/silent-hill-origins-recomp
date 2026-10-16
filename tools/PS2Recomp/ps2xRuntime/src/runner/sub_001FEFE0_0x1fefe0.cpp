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

// Function: sub_001FEFE0
// Address: 0x1fefe0 - 0x1feff8
void sub_001FEFE0_0x1fefe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FEFE0_0x1fefe0");
#endif

    ctx->pc = 0x1fefe0u;

    // 0x1fefe0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1fefe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fefe4: 0x54450001  bnel        $v0, $a1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1FEFE4u;
    {
        const bool branch_taken_0x1fefe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1fefe4) {
            ctx->pc = 0x1FEFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FEFE4u;
            // 0x1fefe8: 0xac850000  sw          $a1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FEFECu;
            goto label_1fefec;
        }
    }
    ctx->pc = 0x1FEFECu;
label_1fefec:
    // 0x1fefec: 0x3e00008  jr          $ra
    ctx->pc = 0x1FEFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FEFECu;
        // 0x1feff0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FEFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FEFF4u;
    // 0x1feff4: 0x0  nop
    ctx->pc = 0x1feff4u;
    // NOP
    ctx->pc = 0x1feff8u;
}
