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

// Function: sub_00250668
// Address: 0x250668 - 0x2506a0
void sub_00250668_0x250668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250668_0x250668");
#endif

    switch (ctx->pc) {
        case 0x250678u: goto label_250678;
        default: break;
    }

    ctx->pc = 0x250668u;

    // 0x250668: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25066c: 0x1840000a  blez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x25066Cu;
    {
        const bool branch_taken_0x25066c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x250670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25066Cu;
        // 0x250670: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25066c) {
            ctx->pc = 0x250698u;
            goto label_250698;
        }
    }
    ctx->pc = 0x250674u;
    // 0x250674: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x250674u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_250678:
    // 0x250678: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x250678u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x25067c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x250680: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x250680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x250684: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x250684u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x250688: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x250688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25068c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x25068cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x250690: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x250690u;
    {
        const bool branch_taken_0x250690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250690) {
            ctx->pc = 0x250694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250690u;
            // 0x250694: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_250678;
        }
    }
    ctx->pc = 0x250698u;
label_250698:
    // 0x250698: 0x3e00008  jr          $ra
    ctx->pc = 0x250698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250698u;
        // 0x25069c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x250698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2506A0u;
}
