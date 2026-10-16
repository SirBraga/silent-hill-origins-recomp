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

// Function: sub_0025E050
// Address: 0x25e050 - 0x25e070
void sub_0025E050_0x25e050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E050_0x25e050");
#endif

    switch (ctx->pc) {
        case 0x25e060u: goto label_25e060;
        default: break;
    }

    ctx->pc = 0x25e050u;

    // 0x25e050: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e058: 0xc097f0a  jal         func_25FC28
    ctx->pc = 0x25E058u;
    SET_GPR_U32(ctx, 31, 0x25E060u);
    ctx->pc = 0x25FC28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25FC28u, 0x25E058u, 0x25E060u)) {
        return;
    }
    ctx->pc = 0x25E060u;
label_25e060:
    // 0x25e060: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e064: 0x3e00008  jr          $ra
    ctx->pc = 0x25E064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E064u;
        // 0x25e068: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E06Cu;
    // 0x25e06c: 0x0  nop
    ctx->pc = 0x25e06cu;
    // NOP
    ctx->pc = 0x25e070u;
}
