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

// Function: sub_001376D8
// Address: 0x1376d8 - 0x137710
void sub_001376D8_0x1376d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001376D8_0x1376d8");
#endif

    switch (ctx->pc) {
        case 0x1376e8u: goto label_1376e8;
        default: break;
    }

    ctx->pc = 0x1376d8u;

    // 0x1376d8: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x1376d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1376dc: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x1376DCu;
    {
        const bool branch_taken_0x1376dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1376E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376DCu;
        // 0x1376e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1376dc) {
            ctx->pc = 0x137708u;
            goto label_137708;
        }
    }
    ctx->pc = 0x1376E4u;
    // 0x1376e4: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x1376e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1376e8:
    // 0x1376e8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1376e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1376ec: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1376ECu;
    {
        const bool branch_taken_0x1376ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1376ec) {
            ctx->pc = 0x1376F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1376ECu;
            // 0x1376f0: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1376FCu;
            goto label_1376fc;
        }
    }
    ctx->pc = 0x1376F4u;
    // 0x1376f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1376F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1376F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1376F4u;
        // 0x1376f8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1376F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1376FCu;
label_1376fc:
    // 0x1376fc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1376fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x137700: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x137700u;
    {
        const bool branch_taken_0x137700 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x137704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137700u;
        // 0x137704: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137700) {
            ctx->pc = 0x1376E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1376e8;
        }
    }
    ctx->pc = 0x137708u;
label_137708:
    // 0x137708: 0x3e00008  jr          $ra
    ctx->pc = 0x137708u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13770Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137708u;
        // 0x13770c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137708u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x137710u;
}
