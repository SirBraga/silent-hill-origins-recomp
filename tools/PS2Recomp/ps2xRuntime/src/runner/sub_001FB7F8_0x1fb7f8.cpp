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

// Function: sub_001FB7F8
// Address: 0x1fb7f8 - 0x1fb818
void sub_001FB7F8_0x1fb7f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB7F8_0x1fb7f8");
#endif

    ctx->pc = 0x1fb7f8u;

    // 0x1fb7f8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB7F8u;
    {
        const bool branch_taken_0x1fb7f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FB7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB7F8u;
        // 0x1fb7fc: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fb7f8) {
            ctx->pc = 0x1FB80Cu;
            goto label_1fb80c;
        }
    }
    ctx->pc = 0x1FB800u;
    // 0x1fb800: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1fb800u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x1fb804: 0x24423008  addiu       $v0, $v0, 0x3008
    ctx->pc = 0x1fb804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12296));
    // 0x1fb808: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1fb808u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1fb80c:
    // 0x1fb80c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB80Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB814u;
    // 0x1fb814: 0x0  nop
    ctx->pc = 0x1fb814u;
    // NOP
    ctx->pc = 0x1fb818u;
}
