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

// Function: sub_001FF338
// Address: 0x1ff338 - 0x1ff380
void sub_001FF338_0x1ff338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FF338_0x1ff338");
#endif

    switch (ctx->pc) {
        case 0x1ff354u: goto label_1ff354;
        case 0x1ff360u: goto label_1ff360;
        default: break;
    }

    ctx->pc = 0x1ff338u;

    // 0x1ff338: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1ff338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1ff33c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ff33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1ff340: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1ff340u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1ff344: 0x54a3000a  bnel        $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x1FF344u;
    {
        const bool branch_taken_0x1ff344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1ff344) {
            ctx->pc = 0x1FF348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF344u;
            // 0x1ff348: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF370u;
            goto label_1ff370;
        }
    }
    ctx->pc = 0x1FF34Cu;
    // 0x1ff34c: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF34Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF34Cu;
        // 0x1ff350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF34Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF354u;
label_1ff354:
    // 0x1ff354: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF354u;
        // 0x1ff358: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF35Cu;
    // 0x1ff35c: 0x0  nop
    ctx->pc = 0x1ff35cu;
    // NOP
label_1ff360:
    // 0x1ff360: 0x0  nop
    ctx->pc = 0x1ff360u;
    // NOP
    // 0x1ff364: 0x1044fffb  beq         $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF364u;
    {
        const bool branch_taken_0x1ff364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x1ff364) {
            ctx->pc = 0x1FF354u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff354;
        }
    }
    ctx->pc = 0x1FF36Cu;
    // 0x1ff36c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1ff36cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1ff370:
    // 0x1ff370: 0x54a0fffb  bnel        $a1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1FF370u;
    {
        const bool branch_taken_0x1ff370 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ff370) {
            ctx->pc = 0x1FF374u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FF370u;
            // 0x1ff374: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FF360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ff360;
        }
    }
    ctx->pc = 0x1FF378u;
    // 0x1ff378: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FF37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FF378u;
        // 0x1ff37c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FF378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FF380u;
}
