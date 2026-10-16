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

// Function: sub_00126278
// Address: 0x126278 - 0x1262a0
void sub_00126278_0x126278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126278_0x126278");
#endif

    ctx->pc = 0x126278u;

    // 0x126278: 0x8c830ea8  lw          $v1, 0xEA8($a0)
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3752)));
    // 0x12627c: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x12627cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x126280: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x126280u;
    {
        const bool branch_taken_0x126280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x126284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126280u;
        // 0x126284: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126280) {
            ctx->pc = 0x126298u;
            goto label_126298;
        }
    }
    ctx->pc = 0x126288u;
    // 0x126288: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x126288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12628c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x12628cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x126290: 0xac830ea8  sw          $v1, 0xEA8($a0)
    ctx->pc = 0x126290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3752), GPR_U32(ctx, 3));
    // 0x126294: 0xac450e88  sw          $a1, 0xE88($v0)
    ctx->pc = 0x126294u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 3720), GPR_U32(ctx, 5));
label_126298:
    // 0x126298: 0x3e00008  jr          $ra
    ctx->pc = 0x126298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126298u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1262A0u;
}
