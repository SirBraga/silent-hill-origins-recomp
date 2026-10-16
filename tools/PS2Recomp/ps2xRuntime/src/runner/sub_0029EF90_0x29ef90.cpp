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

// Function: sub_0029EF90
// Address: 0x29ef90 - 0x29efb0
void sub_0029EF90_0x29ef90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029EF90_0x29ef90");
#endif

    switch (ctx->pc) {
        case 0x29efa0u: goto label_29efa0;
        default: break;
    }

    ctx->pc = 0x29ef90u;

    // 0x29ef90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29ef90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29ef94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29ef94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29ef98: 0xc0a8acc  jal         func_2A2B30
    ctx->pc = 0x29EF98u;
    SET_GPR_U32(ctx, 31, 0x29EFA0u);
    ctx->pc = 0x2A2B30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2B30u, 0x29EF98u, 0x29EFA0u)) {
        return;
    }
    ctx->pc = 0x29EFA0u;
label_29efa0:
    // 0x29efa0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29efa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29efa4: 0x3e00008  jr          $ra
    ctx->pc = 0x29EFA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29EFA4u;
        // 0x29efa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29EFA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29EFACu;
    // 0x29efac: 0x0  nop
    ctx->pc = 0x29efacu;
    // NOP
    ctx->pc = 0x29efb0u;
}
