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

// Function: sub_001902E0
// Address: 0x1902e0 - 0x190300
void sub_001902E0_0x1902e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001902E0_0x1902e0");
#endif

    switch (ctx->pc) {
        case 0x1902f0u: goto label_1902f0;
        default: break;
    }

    ctx->pc = 0x1902e0u;

    // 0x1902e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1902e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1902e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1902e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1902e8: 0xc06354e  jal         func_18D538
    ctx->pc = 0x1902E8u;
    SET_GPR_U32(ctx, 31, 0x1902F0u);
    ctx->pc = 0x18D538u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x18D538u, 0x1902E8u, 0x1902F0u)) {
        return;
    }
    ctx->pc = 0x1902F0u;
label_1902f0:
    // 0x1902f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1902f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1902f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1902F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1902F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1902F4u;
        // 0x1902f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1902F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1902FCu;
    // 0x1902fc: 0x0  nop
    ctx->pc = 0x1902fcu;
    // NOP
    ctx->pc = 0x190300u;
}
