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

// Function: sub_0025B778
// Address: 0x25b778 - 0x25b7a8
void sub_0025B778_0x25b778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B778_0x25b778");
#endif

    switch (ctx->pc) {
        case 0x25b778u: goto label_25b778;
        case 0x25b77cu: goto label_25b77c;
        case 0x25b780u: goto label_25b780;
        case 0x25b784u: goto label_25b784;
        case 0x25b788u: goto label_25b788;
        case 0x25b78cu: goto label_25b78c;
        case 0x25b790u: goto label_25b790;
        case 0x25b794u: goto label_25b794;
        case 0x25b798u: goto label_25b798;
        case 0x25b79cu: goto label_25b79c;
        case 0x25b7a0u: goto label_25b7a0;
        case 0x25b7a4u: goto label_25b7a4;
        default: break;
    }

    ctx->pc = 0x25b778u;

label_25b778:
    // 0x25b778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_25b77c:
    // 0x25b77c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x25b77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_25b780:
    // 0x25b780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25b784:
    // 0x25b784: 0x8c430fcc  lw          $v1, 0xFCC($v0)
    ctx->pc = 0x25b784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4044)));
label_25b788:
    // 0x25b788: 0x8c620068  lw          $v0, 0x68($v1)
    ctx->pc = 0x25b788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 104)));
label_25b78c:
    // 0x25b78c: 0x40f809  jalr        $v0
label_25b790:
    if (ctx->pc == 0x25B790u) {
        ctx->pc = 0x25B794u;
        goto label_25b794;
    }
    ctx->pc = 0x25B78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25B794u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B78Cu, 0x25B794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25B794u;
label_25b794:
    // 0x25b794: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25b798:
    // 0x25b798: 0x3e00008  jr          $ra
label_25b79c:
    if (ctx->pc == 0x25B79Cu) {
        ctx->pc = 0x25B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B798u;
        // 0x25b79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25B7A0u;
        goto label_25b7a0;
    }
    ctx->pc = 0x25B798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B798u;
        // 0x25b79c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B7A0u;
label_25b7a0:
    // 0x25b7a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x25b7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25b7a4:
    // 0x25b7a4: 0x0  nop
    ctx->pc = 0x25b7a4u;
    // NOP
    ctx->pc = 0x25b7a8u;
}
