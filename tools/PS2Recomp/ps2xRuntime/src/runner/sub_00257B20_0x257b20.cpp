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

// Function: sub_00257B20
// Address: 0x257b20 - 0x257b48
void sub_00257B20_0x257b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00257B20_0x257b20");
#endif

    ctx->pc = 0x257b20u;

    // 0x257b20: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x257b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x257b24: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x257B24u;
    {
        const bool branch_taken_0x257b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x257b24) {
            ctx->pc = 0x257B28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x257B24u;
            // 0x257b28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x257B3Cu;
            goto label_257b3c;
        }
    }
    ctx->pc = 0x257B2Cu;
    // 0x257b2c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x257b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x257b30: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x257B30u;
    {
        const bool branch_taken_0x257b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x257B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x257B30u;
        // 0x257b34: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257b30) {
            ctx->pc = 0x257B3Cu;
            goto label_257b3c;
        }
    }
    ctx->pc = 0x257B38u;
    // 0x257b38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257b38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_257b3c:
    // 0x257b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x257B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x257B3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x257B44u;
    // 0x257b44: 0x0  nop
    ctx->pc = 0x257b44u;
    // NOP
    ctx->pc = 0x257b48u;
}
