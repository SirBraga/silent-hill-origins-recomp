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

// Function: sub_00276310
// Address: 0x276310 - 0x276338
void sub_00276310_0x276310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276310_0x276310");
#endif

    switch (ctx->pc) {
        case 0x276310u: goto label_276310;
        case 0x276314u: goto label_276314;
        case 0x276318u: goto label_276318;
        case 0x27631cu: goto label_27631c;
        case 0x276320u: goto label_276320;
        case 0x276324u: goto label_276324;
        case 0x276328u: goto label_276328;
        case 0x27632cu: goto label_27632c;
        case 0x276330u: goto label_276330;
        case 0x276334u: goto label_276334;
        default: break;
    }

    ctx->pc = 0x276310u;

label_276310:
    // 0x276310: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x276310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_276314:
    // 0x276314: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x276314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_276318:
    // 0x276318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27631c:
    // 0x27631c: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x27631cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_276320:
    // 0x276320: 0x40f809  jalr        $v0
label_276324:
    if (ctx->pc == 0x276324u) {
        ctx->pc = 0x276328u;
        goto label_276328;
    }
    ctx->pc = 0x276320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x276328u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276320u, 0x276328u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x276328u;
label_276328:
    // 0x276328: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27632c:
    // 0x27632c: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x27632cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_276330:
    // 0x276330: 0x3e00008  jr          $ra
label_276334:
    if (ctx->pc == 0x276334u) {
        ctx->pc = 0x276334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276330u;
        // 0x276334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x276338u;
        goto label_fallthrough_0x276330;
    }
    ctx->pc = 0x276330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x276330u;
        // 0x276334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x276330:
    ctx->pc = 0x276338u;
}
