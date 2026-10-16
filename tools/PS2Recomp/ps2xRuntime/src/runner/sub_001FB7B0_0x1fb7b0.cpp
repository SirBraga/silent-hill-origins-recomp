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

// Function: sub_001FB7B0
// Address: 0x1fb7b0 - 0x1fb7d8
void sub_001FB7B0_0x1fb7b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB7B0_0x1fb7b0");
#endif

    ctx->pc = 0x1fb7b0u;

    // 0x1fb7b0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FB7B0u;
    {
        const bool branch_taken_0x1fb7b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7B0u;
        // 0x1fb7b4: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7b0) {
            ctx->pc = 0x1FB7CCu;
            goto label_1fb7cc;
        }
    }
    ctx->pc = 0x1FB7B8u;
    // 0x1fb7b8: 0xac86000c  sw          $a2, 0xC($a0)
    ctx->pc = 0x1fb7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 6));
    // 0x1fb7bc: 0x24423038  addiu       $v0, $v0, 0x3038
    ctx->pc = 0x1fb7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12344));
    // 0x1fb7c0: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb7c4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x1fb7c8: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x1fb7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
label_1fb7cc:
    // 0x1fb7cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB7CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB7CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB7D4u;
    // 0x1fb7d4: 0x0  nop
    ctx->pc = 0x1fb7d4u;
    // NOP
    ctx->pc = 0x1fb7d8u;
}
