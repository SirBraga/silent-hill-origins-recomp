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

// Function: sub_00114DB0
// Address: 0x114db0 - 0x114dd0
void sub_00114DB0_0x114db0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114DB0_0x114db0");
#endif

    switch (ctx->pc) {
        case 0x114dc0u: goto label_114dc0;
        default: break;
    }

    ctx->pc = 0x114db0u;

    // 0x114db0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114db0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x114db4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114db8: 0xc04469a  jal         func_111A68
    ctx->pc = 0x114DB8u;
    SET_GPR_U32(ctx, 31, 0x114DC0u);
    ctx->pc = 0x111A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111A68u, 0x114DB8u, 0x114DC0u)) {
        return;
    }
    ctx->pc = 0x114DC0u;
label_114dc0:
    // 0x114dc0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x114dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x114DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114DC4u;
        // 0x114dc8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114DC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114DCCu;
    // 0x114dcc: 0x0  nop
    ctx->pc = 0x114dccu;
    // NOP
    ctx->pc = 0x114dd0u;
}
