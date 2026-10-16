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

// Function: sub_00276338
// Address: 0x276338 - 0x276380
void sub_00276338_0x276338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276338_0x276338");
#endif

    switch (ctx->pc) {
        case 0x276358u: goto label_276358;
        default: break;
    }

    ctx->pc = 0x276338u;

    // 0x276338: 0x8c850010  lw          $a1, 0x10($a0)
    ctx->pc = 0x276338u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x27633c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x27633cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x276340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276344: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x276344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x276348: 0x1065000a  beq         $v1, $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x276348u;
    {
        const bool branch_taken_0x276348 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x27634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276348u;
        // 0x27634c: 0x8c470008  lw          $a3, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276348) {
            ctx->pc = 0x276374u;
            goto label_276374;
        }
    }
    ctx->pc = 0x276350u;
    // 0x276350: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x276350u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276354: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x276354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_276358:
    // 0x276358: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x276358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x27635c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27635cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x276360: 0x0  nop
    ctx->pc = 0x276360u;
    // NOP
    // 0x276364: 0x0  nop
    ctx->pc = 0x276364u;
    // NOP
    // 0x276368: 0x0  nop
    ctx->pc = 0x276368u;
    // NOP
    // 0x27636c: 0x1443fffa  bne         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27636Cu;
    {
        const bool branch_taken_0x27636c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x276370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27636Cu;
        // 0x276370: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27636c) {
            ctx->pc = 0x276358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_276358;
        }
    }
    ctx->pc = 0x276374u;
label_276374:
    // 0x276374: 0x3e00008  jr          $ra
    ctx->pc = 0x276374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276374u;
        // 0x276378: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27637Cu;
    // 0x27637c: 0x0  nop
    ctx->pc = 0x27637cu;
    // NOP
    ctx->pc = 0x276380u;
}
