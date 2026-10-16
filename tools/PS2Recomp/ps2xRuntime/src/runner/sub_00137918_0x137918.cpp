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

// Function: sub_00137918
// Address: 0x137918 - 0x137940
void sub_00137918_0x137918(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137918_0x137918");
#endif

    ctx->pc = 0x137918u;

    // 0x137918: 0x8c85153c  lw          $a1, 0x153C($a0)
    ctx->pc = 0x137918u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 5436)));
    // 0x13791c: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13791Cu;
    {
        const bool branch_taken_0x13791c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13791c) {
            ctx->pc = 0x137920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13791Cu;
            // 0x137920: 0x8ca32d24  lw          $v1, 0x2D24($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 11556)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13792Cu;
            goto label_13792c;
        }
    }
    ctx->pc = 0x137924u;
    // 0x137924: 0x3e00008  jr          $ra
    ctx->pc = 0x137924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137924u;
        // 0x137928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137924u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13792Cu;
label_13792c:
    // 0x13792c: 0x24821b2c  addiu       $v0, $a0, 0x1B2C
    ctx->pc = 0x13792cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 6956));
    // 0x137930: 0xac851b54  sw          $a1, 0x1B54($a0)
    ctx->pc = 0x137930u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6996), GPR_U32(ctx, 5));
    // 0x137934: 0x3e00008  jr          $ra
    ctx->pc = 0x137934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137934u;
        // 0x137938: 0xac831b30  sw          $v1, 0x1B30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6960), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13793Cu;
    // 0x13793c: 0x0  nop
    ctx->pc = 0x13793cu;
    // NOP
    ctx->pc = 0x137940u;
}
