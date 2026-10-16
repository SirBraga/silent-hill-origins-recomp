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

// Function: sub_002AD098
// Address: 0x2ad098 - 0x2ad0b8
void sub_002AD098_0x2ad098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD098_0x2ad098");
#endif

    switch (ctx->pc) {
        case 0x2ad0a8u: goto label_2ad0a8;
        default: break;
    }

    ctx->pc = 0x2ad098u;

    // 0x2ad098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ad098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ad09c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ad0a0: 0xc0ad2d0  jal         func_2B4B40
    ctx->pc = 0x2AD0A0u;
    SET_GPR_U32(ctx, 31, 0x2AD0A8u);
    ctx->pc = 0x2B4B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4B40u, 0x2AD0A0u, 0x2AD0A8u)) {
        return;
    }
    ctx->pc = 0x2AD0A8u;
label_2ad0a8:
    // 0x2ad0a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad0a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ad0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ad0b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2AD0B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD0B0u;
        // 0x2ad0b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD0B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AD0B8u;
}
