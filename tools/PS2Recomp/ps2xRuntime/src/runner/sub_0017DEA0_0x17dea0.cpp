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

// Function: sub_0017DEA0
// Address: 0x17dea0 - 0x17dec0
void sub_0017DEA0_0x17dea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DEA0_0x17dea0");
#endif

    switch (ctx->pc) {
        case 0x17deb4u: goto label_17deb4;
        default: break;
    }

    ctx->pc = 0x17dea0u;

    // 0x17dea0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17dea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17dea4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17dea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dea8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17deac: 0xc05f716  jal         func_17DC58
    ctx->pc = 0x17DEACu;
    SET_GPR_U32(ctx, 31, 0x17DEB4u);
    ctx->pc = 0x17DEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DEACu;
    // 0x17deb0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17DC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17DC58u, 0x17DEACu, 0x17DEB4u)) {
        return;
    }
    ctx->pc = 0x17DEB4u;
label_17deb4:
    // 0x17deb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17deb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17deb8: 0x3e00008  jr          $ra
    ctx->pc = 0x17DEB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DEB8u;
        // 0x17debc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DEB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DEC0u;
}
