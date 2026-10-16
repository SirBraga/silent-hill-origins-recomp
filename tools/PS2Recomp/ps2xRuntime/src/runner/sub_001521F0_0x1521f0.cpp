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

// Function: sub_001521F0
// Address: 0x1521f0 - 0x152210
void sub_001521F0_0x1521f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001521F0_0x1521f0");
#endif

    switch (ctx->pc) {
        case 0x152200u: goto label_152200;
        default: break;
    }

    ctx->pc = 0x1521f0u;

    // 0x1521f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1521f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1521f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1521f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1521f8: 0xc074b4a  jal         func_1D2D28
    ctx->pc = 0x1521F8u;
    SET_GPR_U32(ctx, 31, 0x152200u);
    ctx->pc = 0x1D2D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2D28u, 0x1521F8u, 0x152200u)) {
        return;
    }
    ctx->pc = 0x152200u;
label_152200:
    // 0x152200: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x152200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152204: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x152204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x152208: 0x3e00008  jr          $ra
    ctx->pc = 0x152208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152208u;
        // 0x15220c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152208u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152210u;
}
