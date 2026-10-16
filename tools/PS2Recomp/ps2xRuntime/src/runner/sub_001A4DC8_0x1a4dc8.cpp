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

// Function: sub_001A4DC8
// Address: 0x1a4dc8 - 0x1a4de8
void sub_001A4DC8_0x1a4dc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4DC8_0x1a4dc8");
#endif

    switch (ctx->pc) {
        case 0x1a4ddcu: goto label_1a4ddc;
        default: break;
    }

    ctx->pc = 0x1a4dc8u;

    // 0x1a4dc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a4dc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a4dcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a4dccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4dd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a4dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a4dd4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A4DD4u;
    SET_GPR_U32(ctx, 31, 0x1A4DDCu);
    ctx->pc = 0x1A4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A4DD4u;
    // 0x1a4dd8: 0x24060044  addiu       $a2, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A4DD4u, 0x1A4DDCu)) {
        return;
    }
    ctx->pc = 0x1A4DDCu;
label_1a4ddc:
    // 0x1a4ddc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a4ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a4de0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A4DE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A4DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A4DE0u;
        // 0x1a4de4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A4DE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A4DE8u;
}
