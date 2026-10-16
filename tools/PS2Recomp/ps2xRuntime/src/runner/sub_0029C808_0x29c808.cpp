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

// Function: sub_0029C808
// Address: 0x29c808 - 0x29c830
void sub_0029C808_0x29c808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029C808_0x29c808");
#endif

    switch (ctx->pc) {
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        default: break;
    }

    ctx->pc = 0x29c808u;

label_29c808:
    // 0x29c808: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29c808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_29c80c:
    // 0x29c80c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29c80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_29c810:
    // 0x29c810: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x29c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_29c814:
    // 0x29c814: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x29c814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_29c818:
    // 0x29c818: 0x40f809  jalr        $v0
label_29c81c:
    if (ctx->pc == 0x29C81Cu) {
        ctx->pc = 0x29C820u;
        goto label_29c820;
    }
    ctx->pc = 0x29C818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C820u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C818u, 0x29C820u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C820u;
label_29c820:
    // 0x29c820: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29c820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29c824:
    // 0x29c824: 0x3e00008  jr          $ra
label_29c828:
    if (ctx->pc == 0x29C828u) {
        ctx->pc = 0x29C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C824u;
        // 0x29c828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29C82Cu;
        goto label_29c82c;
    }
    ctx->pc = 0x29C824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29C828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29C824u;
        // 0x29c828: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29C82Cu;
label_29c82c:
    // 0x29c82c: 0x0  nop
    ctx->pc = 0x29c82cu;
    // NOP
    ctx->pc = 0x29c830u;
}
