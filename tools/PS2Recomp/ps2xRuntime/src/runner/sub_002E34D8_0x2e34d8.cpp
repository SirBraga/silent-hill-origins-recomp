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

// Function: sub_002E34D8
// Address: 0x2e34d8 - 0x2e34f8
void sub_002E34D8_0x2e34d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E34D8_0x2e34d8");
#endif

    switch (ctx->pc) {
        case 0x2e34e8u: goto label_2e34e8;
        default: break;
    }

    ctx->pc = 0x2e34d8u;

    // 0x2e34d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e34d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e34dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e34dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e34e0: 0xc0b8d48  jal         func_2E3520
    ctx->pc = 0x2E34E0u;
    SET_GPR_U32(ctx, 31, 0x2E34E8u);
    ctx->pc = 0x2E3520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3520u, 0x2E34E0u, 0x2E34E8u)) {
        return;
    }
    ctx->pc = 0x2E34E8u;
label_2e34e8:
    // 0x2e34e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e34e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e34ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2E34ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E34ECu;
        // 0x2e34f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E34ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E34F4u;
    // 0x2e34f4: 0x0  nop
    ctx->pc = 0x2e34f4u;
    // NOP
    ctx->pc = 0x2e34f8u;
}
