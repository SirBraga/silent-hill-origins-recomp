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

// Function: sub_001F8510
// Address: 0x1f8510 - 0x1f8538
void sub_001F8510_0x1f8510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8510_0x1f8510");
#endif

    switch (ctx->pc) {
        case 0x1f8510u: goto label_1f8510;
        case 0x1f8514u: goto label_1f8514;
        case 0x1f8518u: goto label_1f8518;
        case 0x1f851cu: goto label_1f851c;
        case 0x1f8520u: goto label_1f8520;
        case 0x1f8524u: goto label_1f8524;
        case 0x1f8528u: goto label_1f8528;
        case 0x1f852cu: goto label_1f852c;
        case 0x1f8530u: goto label_1f8530;
        case 0x1f8534u: goto label_1f8534;
        default: break;
    }

    ctx->pc = 0x1f8510u;

label_1f8510:
    // 0x1f8510: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x1f8510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_1f8514:
    // 0x1f8514: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f8514u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1f8518:
    // 0x1f8518: 0x8c62ec54  lw          $v0, -0x13AC($v1)
    ctx->pc = 0x1f8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962260)));
label_1f851c:
    // 0x1f851c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f851cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1f8520:
    // 0x1f8520: 0x40f809  jalr        $v0
label_1f8524:
    if (ctx->pc == 0x1F8524u) {
        ctx->pc = 0x1F8528u;
        goto label_1f8528;
    }
    ctx->pc = 0x1F8520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F8528u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8520u, 0x1F8528u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F8528u;
label_1f8528:
    // 0x1f8528: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f8528u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f852c:
    // 0x1f852c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1f852cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1f8530:
    // 0x1f8530: 0x3e00008  jr          $ra
label_1f8534:
    if (ctx->pc == 0x1F8534u) {
        ctx->pc = 0x1F8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8530u;
        // 0x1f8534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F8538u;
        goto label_fallthrough_0x1f8530;
    }
    ctx->pc = 0x1F8530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8530u;
        // 0x1f8534: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1f8530:
    ctx->pc = 0x1F8538u;
}
