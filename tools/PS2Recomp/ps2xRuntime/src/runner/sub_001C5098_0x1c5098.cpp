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

// Function: sub_001C5098
// Address: 0x1c5098 - 0x1c50c0
void sub_001C5098_0x1c5098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C5098_0x1c5098");
#endif

    switch (ctx->pc) {
        case 0x1c50b4u: goto label_1c50b4;
        default: break;
    }

    ctx->pc = 0x1c5098u;

    // 0x1c5098: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c5098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c509c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c509cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c50a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c50a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c50a4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1c50a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c50a8: 0x2442ea28  addiu       $v0, $v0, -0x15D8
    ctx->pc = 0x1c50a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961704));
    // 0x1c50ac: 0xc06d722  jal         func_1B5C88
    ctx->pc = 0x1C50ACu;
    SET_GPR_U32(ctx, 31, 0x1C50B4u);
    ctx->pc = 0x1C50B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C50ACu;
    // 0x1c50b0: 0xac620258  sw          $v0, 0x258($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 600), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B5C88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5C88u, 0x1C50ACu, 0x1C50B4u)) {
        return;
    }
    ctx->pc = 0x1C50B4u;
label_1c50b4:
    // 0x1c50b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c50b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c50b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C50B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C50BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C50B8u;
        // 0x1c50bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C50B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C50C0u;
}
