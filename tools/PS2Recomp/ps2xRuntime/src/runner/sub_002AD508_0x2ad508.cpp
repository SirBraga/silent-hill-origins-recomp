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

// Function: sub_002AD508
// Address: 0x2ad508 - 0x2ad538
void sub_002AD508_0x2ad508(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD508_0x2ad508");
#endif

    ctx->pc = 0x2ad508u;

    // 0x2ad508: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ad508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad50c: 0x8ca2002c  lw          $v0, 0x2C($a1)
    ctx->pc = 0x2ad50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x2ad510: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2AD510u;
    {
        const bool branch_taken_0x2ad510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AD514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD510u;
        // 0x2ad514: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ad510) {
            ctx->pc = 0x2AD530u;
            goto label_2ad530;
        }
    }
    ctx->pc = 0x2AD518u;
    // 0x2ad518: 0x8ca40028  lw          $a0, 0x28($a1)
    ctx->pc = 0x2ad518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x2ad51c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2ad51cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2ad520: 0xaca2002c  sw          $v0, 0x2C($a1)
    ctx->pc = 0x2ad520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
    // 0x2ad524: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2ad524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2ad528: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD528u;
        // 0x2ad52c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD530u;
label_2ad530:
    // 0x2ad530: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD530u;
        // 0x2ad534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD538u;
}
