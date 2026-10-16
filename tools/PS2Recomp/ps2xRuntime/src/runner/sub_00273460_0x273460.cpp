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

// Function: sub_00273460
// Address: 0x273460 - 0x273488
void sub_00273460_0x273460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00273460_0x273460");
#endif

    switch (ctx->pc) {
        case 0x273460u: goto label_273460;
        case 0x273464u: goto label_273464;
        case 0x273468u: goto label_273468;
        case 0x27346cu: goto label_27346c;
        case 0x273470u: goto label_273470;
        case 0x273474u: goto label_273474;
        case 0x273478u: goto label_273478;
        case 0x27347cu: goto label_27347c;
        case 0x273480u: goto label_273480;
        case 0x273484u: goto label_273484;
        default: break;
    }

    ctx->pc = 0x273460u;

label_273460:
    // 0x273460: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x273460u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_273464:
    // 0x273464: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x273464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_273468:
    // 0x273468: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x273468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_27346c:
    // 0x27346c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x27346cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_273470:
    // 0x273470: 0x40f809  jalr        $v0
label_273474:
    if (ctx->pc == 0x273474u) {
        ctx->pc = 0x273478u;
        goto label_273478;
    }
    ctx->pc = 0x273470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x273478u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273470u, 0x273478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x273478u;
label_273478:
    // 0x273478: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x273478u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27347c:
    // 0x27347c: 0x3e00008  jr          $ra
label_273480:
    if (ctx->pc == 0x273480u) {
        ctx->pc = 0x273480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27347Cu;
        // 0x273480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x273484u;
        goto label_273484;
    }
    ctx->pc = 0x27347Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x273480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27347Cu;
        // 0x273480: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27347Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273484u;
label_273484:
    // 0x273484: 0x0  nop
    ctx->pc = 0x273484u;
    // NOP
    ctx->pc = 0x273488u;
}
