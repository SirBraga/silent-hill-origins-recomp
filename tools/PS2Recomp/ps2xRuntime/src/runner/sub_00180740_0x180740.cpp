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

// Function: sub_00180740
// Address: 0x180740 - 0x180798
void sub_00180740_0x180740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180740_0x180740");
#endif

    switch (ctx->pc) {
        case 0x180758u: goto label_180758;
        default: break;
    }

    ctx->pc = 0x180740u;

    // 0x180740: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x180740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x180744: 0x8c4389ec  lw          $v1, -0x7614($v0)
    ctx->pc = 0x180744u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3389ECu));
    // 0x180748: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x180748u;
    {
        const bool branch_taken_0x180748 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18074Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180748u;
        // 0x18074c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180748) {
            ctx->pc = 0x18077Cu;
            goto label_18077c;
        }
    }
    ctx->pc = 0x180750u;
    // 0x180750: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x180750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x180754: 0x0  nop
    ctx->pc = 0x180754u;
    // NOP
label_180758:
    // 0x180758: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x180758u;
    {
        const bool branch_taken_0x180758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x180758) {
            ctx->pc = 0x18075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180758u;
            // 0x18075c: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180770u;
            goto label_180770;
        }
    }
    ctx->pc = 0x180760u;
    // 0x180760: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x180760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x180764: 0x10440005  beq         $v0, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x180764u;
    {
        const bool branch_taken_0x180764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x180768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180764u;
        // 0x180768: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x180764) {
            ctx->pc = 0x18077Cu;
            goto label_18077c;
        }
    }
    ctx->pc = 0x18076Cu;
    // 0x18076c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x18076cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_180770:
    // 0x180770: 0x5460fff9  bnel        $v1, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x180770u;
    {
        const bool branch_taken_0x180770 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x180770) {
            ctx->pc = 0x180774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x180770u;
            // 0x180774: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x180758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_180758;
        }
    }
    ctx->pc = 0x180778u;
    // 0x180778: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x180778u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_18077c:
    // 0x18077c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18077Cu;
    {
        const bool branch_taken_0x18077c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18077c) {
            ctx->pc = 0x18078Cu;
            goto label_18078c;
        }
    }
    ctx->pc = 0x180784u;
    // 0x180784: 0x3e00008  jr          $ra
    ctx->pc = 0x180784u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x180784u;
        // 0x180788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180784u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18078Cu;
label_18078c:
    // 0x18078c: 0x3e00008  jr          $ra
    ctx->pc = 0x18078Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x180790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18078Cu;
        // 0x180790: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18078Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180794u;
    // 0x180794: 0x0  nop
    ctx->pc = 0x180794u;
    // NOP
    ctx->pc = 0x180798u;
}
