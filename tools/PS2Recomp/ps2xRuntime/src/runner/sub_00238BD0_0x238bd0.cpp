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

// Function: sub_00238BD0
// Address: 0x238bd0 - 0x238c00
void sub_00238BD0_0x238bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00238BD0_0x238bd0");
#endif

    switch (ctx->pc) {
        case 0x238be0u: goto label_238be0;
        case 0x238be8u: goto label_238be8;
        case 0x238bf0u: goto label_238bf0;
        default: break;
    }

    ctx->pc = 0x238bd0u;

    // 0x238bd0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x238bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x238bd4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x238bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x238bd8: 0xc08ed42  jal         func_23B508
    ctx->pc = 0x238BD8u;
    SET_GPR_U32(ctx, 31, 0x238BE0u);
    ctx->pc = 0x23B508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23B508u, 0x238BD8u, 0x238BE0u)) {
        return;
    }
    ctx->pc = 0x238BE0u;
label_238be0:
    // 0x238be0: 0xc08e9b6  jal         func_23A6D8
    ctx->pc = 0x238BE0u;
    SET_GPR_U32(ctx, 31, 0x238BE8u);
    ctx->pc = 0x23A6D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x23A6D8u, 0x238BE0u, 0x238BE8u)) {
        return;
    }
    ctx->pc = 0x238BE8u;
label_238be8:
    // 0x238be8: 0xc091256  jal         func_244958
    ctx->pc = 0x238BE8u;
    SET_GPR_U32(ctx, 31, 0x238BF0u);
    ctx->pc = 0x244958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244958u, 0x238BE8u, 0x238BF0u)) {
        return;
    }
    ctx->pc = 0x238BF0u;
label_238bf0:
    // 0x238bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x238bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x238bf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x238bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x238bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x238BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x238BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x238BF8u;
        // 0x238bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x238BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x238C00u;
}
