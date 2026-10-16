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

// Function: sub_0029BD18
// Address: 0x29bd18 - 0x29bd38
void sub_0029BD18_0x29bd18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BD18_0x29bd18");
#endif

    ctx->pc = 0x29bd18u;

    // 0x29bd18: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x29bd18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x29bd1c: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x29bd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x29bd20: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29bd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x29bd24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x29BD24u;
    {
        const bool branch_taken_0x29bd24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BD24u;
        // 0x29bd28: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bd24) {
            ctx->pc = 0x29BD30u;
            goto label_29bd30;
        }
    }
    ctx->pc = 0x29BD2Cu;
    // 0x29bd2c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x29bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_29bd30:
    // 0x29bd30: 0x3e00008  jr          $ra
    ctx->pc = 0x29BD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BD30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BD38u;
}
