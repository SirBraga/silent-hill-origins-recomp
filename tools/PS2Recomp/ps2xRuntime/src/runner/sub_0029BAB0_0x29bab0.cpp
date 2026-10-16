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

// Function: sub_0029BAB0
// Address: 0x29bab0 - 0x29bad8
void sub_0029BAB0_0x29bab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029BAB0_0x29bab0");
#endif

    ctx->pc = 0x29bab0u;

    // 0x29bab0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x29bab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29bab4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BAB4u;
    {
        const bool branch_taken_0x29bab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BAB4u;
        // 0x29bab8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bab4) {
            ctx->pc = 0x29BACCu;
            goto label_29bacc;
        }
    }
    ctx->pc = 0x29BABCu;
    // 0x29babc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29babcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x29bac0: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x29bac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x29bac4: 0x3842000c  xori        $v0, $v0, 0xC
    ctx->pc = 0x29bac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12);
    // 0x29bac8: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x29bac8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29bacc:
    // 0x29bacc: 0x3e00008  jr          $ra
    ctx->pc = 0x29BACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29BACCu;
        // 0x29bad0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29BACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29BAD4u;
    // 0x29bad4: 0x0  nop
    ctx->pc = 0x29bad4u;
    // NOP
    ctx->pc = 0x29bad8u;
}
