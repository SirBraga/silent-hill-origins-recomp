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

// Function: sub_0021BFD8
// Address: 0x21bfd8 - 0x21c008
void sub_0021BFD8_0x21bfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BFD8_0x21bfd8");
#endif

    switch (ctx->pc) {
        case 0x21bfe8u: goto label_21bfe8;
        default: break;
    }

    ctx->pc = 0x21bfd8u;

    // 0x21bfd8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x21bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21bfdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BFDCu;
    {
        const bool branch_taken_0x21bfdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21bfdc) {
            ctx->pc = 0x21C000u;
            goto label_21c000;
        }
    }
    ctx->pc = 0x21BFE4u;
    // 0x21bfe4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x21bfe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21bfe8:
    // 0x21bfe8: 0x0  nop
    ctx->pc = 0x21bfe8u;
    // NOP
    // 0x21bfec: 0x0  nop
    ctx->pc = 0x21bfecu;
    // NOP
    // 0x21bff0: 0x0  nop
    ctx->pc = 0x21bff0u;
    // NOP
    // 0x21bff4: 0x0  nop
    ctx->pc = 0x21bff4u;
    // NOP
    // 0x21bff8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21BFF8u;
    {
        const bool branch_taken_0x21bff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21bff8) {
            ctx->pc = 0x21BFFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21BFF8u;
            // 0x21bffc: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21BFE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bfe8;
        }
    }
    ctx->pc = 0x21C000u;
label_21c000:
    // 0x21c000: 0x3e00008  jr          $ra
    ctx->pc = 0x21C000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C008u;
}
