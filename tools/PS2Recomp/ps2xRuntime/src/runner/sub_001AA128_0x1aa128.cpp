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

// Function: sub_001AA128
// Address: 0x1aa128 - 0x1aa160
void sub_001AA128_0x1aa128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA128_0x1aa128");
#endif

    ctx->pc = 0x1aa128u;

    // 0x1aa128: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1aa128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aa12c: 0x8cc400c8  lw          $a0, 0xC8($a2)
    ctx->pc = 0x1aa12cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 200)));
    // 0x1aa130: 0x2c820032  sltiu       $v0, $a0, 0x32
    ctx->pc = 0x1aa130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
    // 0x1aa134: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AA134u;
    {
        const bool branch_taken_0x1aa134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA134u;
        // 0x1aa138: 0x41880  sll         $v1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa134) {
            ctx->pc = 0x1AA144u;
            goto label_1aa144;
        }
    }
    ctx->pc = 0x1AA13Cu;
    // 0x1aa13c: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA13Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA13Cu;
        // 0x1aa140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA13Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1aa148: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x1aa148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1aa14c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1aa150: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1aa150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1aa154: 0x3e00008  jr          $ra
    ctx->pc = 0x1AA154u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA154u;
        // 0x1aa158: 0xacc400c8  sw          $a0, 0xC8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 200), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA154u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA15Cu;
    // 0x1aa15c: 0x0  nop
    ctx->pc = 0x1aa15cu;
    // NOP
    ctx->pc = 0x1aa160u;
}
