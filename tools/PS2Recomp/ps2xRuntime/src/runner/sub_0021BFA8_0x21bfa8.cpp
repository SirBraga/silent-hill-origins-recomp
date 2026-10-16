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

// Function: sub_0021BFA8
// Address: 0x21bfa8 - 0x21bfd8
void sub_0021BFA8_0x21bfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021BFA8_0x21bfa8");
#endif

    switch (ctx->pc) {
        case 0x21bfb8u: goto label_21bfb8;
        default: break;
    }

    ctx->pc = 0x21bfa8u;

    // 0x21bfa8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x21bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x21bfac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x21BFACu;
    {
        const bool branch_taken_0x21bfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21BFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFACu;
        // 0x21bfb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfac) {
            ctx->pc = 0x21BFD0u;
            goto label_21bfd0;
        }
    }
    ctx->pc = 0x21BFB4u;
    // 0x21bfb4: 0x0  nop
    ctx->pc = 0x21bfb4u;
    // NOP
label_21bfb8:
    // 0x21bfb8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21bfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x21bfbc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21bfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21bfc0: 0x0  nop
    ctx->pc = 0x21bfc0u;
    // NOP
    // 0x21bfc4: 0x0  nop
    ctx->pc = 0x21bfc4u;
    // NOP
    // 0x21bfc8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x21BFC8u;
    {
        const bool branch_taken_0x21bfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21BFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFC8u;
        // 0x21bfcc: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21bfc8) {
            ctx->pc = 0x21BFB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21bfb8;
        }
    }
    ctx->pc = 0x21BFD0u;
label_21bfd0:
    // 0x21bfd0: 0x3e00008  jr          $ra
    ctx->pc = 0x21BFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21BFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21BFD0u;
        // 0x21bfd4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21BFD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21BFD8u;
}
