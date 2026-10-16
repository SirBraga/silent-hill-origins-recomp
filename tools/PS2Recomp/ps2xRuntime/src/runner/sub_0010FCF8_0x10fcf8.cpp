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

// Function: sub_0010FCF8
// Address: 0x10fcf8 - 0x10fd18
void sub_0010FCF8_0x10fcf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010FCF8_0x10fcf8");
#endif

    ctx->pc = 0x10fcf8u;

    // 0x10fcf8: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x10fcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x10fcfc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCFCu;
    {
        const bool branch_taken_0x10fcfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCFCu;
        // 0x10fd00: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcfc) {
            ctx->pc = 0x10FD10u;
            goto label_10fd10;
        }
    }
    ctx->pc = 0x10FD04u;
    // 0x10fd04: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x10fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x10fd08: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x10fd08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x10fd0c: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x10fd0cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_10fd10:
    // 0x10fd10: 0x3e00008  jr          $ra
    ctx->pc = 0x10FD10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10FD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD10u;
        // 0x10fd14: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10FD10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10FD18u;
}
