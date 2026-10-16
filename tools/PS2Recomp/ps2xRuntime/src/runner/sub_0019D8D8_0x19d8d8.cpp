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

// Function: sub_0019D8D8
// Address: 0x19d8d8 - 0x19d8f8
void sub_0019D8D8_0x19d8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019D8D8_0x19d8d8");
#endif

    switch (ctx->pc) {
        case 0x19d8e8u: goto label_19d8e8;
        default: break;
    }

    ctx->pc = 0x19d8d8u;

    // 0x19d8d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19d8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19d8dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19d8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19d8e0: 0xc08010c  jal         func_200430
    ctx->pc = 0x19D8E0u;
    SET_GPR_U32(ctx, 31, 0x19D8E8u);
    ctx->pc = 0x200430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x200430u, 0x19D8E0u, 0x19D8E8u)) {
        return;
    }
    ctx->pc = 0x19D8E8u;
label_19d8e8:
    // 0x19d8e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19d8e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19d8ec: 0x3e00008  jr          $ra
    ctx->pc = 0x19D8ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19D8ECu;
        // 0x19d8f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19D8ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19D8F4u;
    // 0x19d8f4: 0x0  nop
    ctx->pc = 0x19d8f4u;
    // NOP
    ctx->pc = 0x19d8f8u;
}
