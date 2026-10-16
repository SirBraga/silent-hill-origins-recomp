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

// Function: sub_001A9980
// Address: 0x1a9980 - 0x1a99b8
void sub_001A9980_0x1a9980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9980_0x1a9980");
#endif

    switch (ctx->pc) {
        case 0x1a9998u: goto label_1a9998;
        default: break;
    }

    ctx->pc = 0x1a9980u;

    // 0x1a9980: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1a9980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1a9984: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x1a9984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x1a9988: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A9988u;
    {
        const bool branch_taken_0x1a9988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9988u;
        // 0x1a998c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9988) {
            ctx->pc = 0x1A99B0u;
            goto label_1a99b0;
        }
    }
    ctx->pc = 0x1A9990u;
    // 0x1a9990: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1a9990u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9994: 0x0  nop
    ctx->pc = 0x1a9994u;
    // NOP
label_1a9998:
    // 0x1a9998: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a9998u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1a999c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1a999cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1a99a0: 0x8c820200  lw          $v0, 0x200($a0)
    ctx->pc = 0x1a99a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 512)));
    // 0x1a99a4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1a99a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1a99a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1A99A8u;
    {
        const bool branch_taken_0x1a99a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A99ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99A8u;
        // 0x1a99ac: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a99a8) {
            ctx->pc = 0x1A9998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a9998;
        }
    }
    ctx->pc = 0x1A99B0u;
label_1a99b0:
    // 0x1a99b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A99B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A99B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A99B0u;
        // 0x1a99b4: 0xac800200  sw          $zero, 0x200($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 512), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A99B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A99B8u;
}
