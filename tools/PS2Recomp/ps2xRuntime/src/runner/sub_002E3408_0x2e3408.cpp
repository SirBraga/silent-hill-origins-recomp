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

// Function: sub_002E3408
// Address: 0x2e3408 - 0x2e3430
void sub_002E3408_0x2e3408(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3408_0x2e3408");
#endif

    switch (ctx->pc) {
        case 0x2e3424u: goto label_2e3424;
        default: break;
    }

    ctx->pc = 0x2e3408u;

    // 0x2e3408: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e340c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e340cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3410: 0x8c84004c  lw          $a0, 0x4C($a0)
    ctx->pc = 0x2e3410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2e3414: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E3414u;
    {
        const bool branch_taken_0x2e3414 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E3418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3414u;
        // 0x2e3418: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e3414) {
            ctx->pc = 0x2E3428u;
            goto label_2e3428;
        }
    }
    ctx->pc = 0x2E341Cu;
    // 0x2e341c: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2E341Cu;
    SET_GPR_U32(ctx, 31, 0x2E3424u);
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E341Cu, 0x2E3424u)) {
        return;
    }
    ctx->pc = 0x2E3424u;
label_2e3424:
    // 0x2e3424: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e3428:
    // 0x2e3428: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3428u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E342Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3428u;
        // 0x2e342c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3428u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3430u;
}
