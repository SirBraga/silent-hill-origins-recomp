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

// Function: sub_001A9E00
// Address: 0x1a9e00 - 0x1a9e38
void sub_001A9E00_0x1a9e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E00_0x1a9e00");
#endif

    ctx->pc = 0x1a9e00u;

    // 0x1a9e00: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a9e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a9e04: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9E04u;
    {
        const bool branch_taken_0x1a9e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e04) {
            ctx->pc = 0x1A9E08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E04u;
            // 0x1a9e08: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E1Cu;
            goto label_1a9e1c;
        }
    }
    ctx->pc = 0x1A9E0Cu;
    // 0x1a9e0c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1a9e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1a9e10: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1a9e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1a9e14: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1a9e14u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1a9e18: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1a9e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1a9e1c:
    // 0x1a9e1c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A9E1Cu;
    {
        const bool branch_taken_0x1a9e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9e1c) {
            ctx->pc = 0x1A9E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A9E1Cu;
            // 0x1a9e20: 0xac850010  sw          $a1, 0x10($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A9E24u;
            goto label_1a9e24;
        }
    }
    ctx->pc = 0x1A9E24u;
label_1a9e24:
    // 0x1a9e24: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a9e28: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x1a9e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x1a9e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1a9e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1a9e30: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9E30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9E30u;
        // 0x1a9e34: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9E30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9E38u;
}
