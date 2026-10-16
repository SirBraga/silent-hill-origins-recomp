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

// Function: sub_0029B740
// Address: 0x29b740 - 0x29b760
void sub_0029B740_0x29b740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B740_0x29b740");
#endif

    switch (ctx->pc) {
        case 0x29b750u: goto label_29b750;
        default: break;
    }

    ctx->pc = 0x29b740u;

    // 0x29b740: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b748: 0xc0a7a2a  jal         func_29E8A8
    ctx->pc = 0x29B748u;
    SET_GPR_U32(ctx, 31, 0x29B750u);
    ctx->pc = 0x29E8A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29E8A8u, 0x29B748u, 0x29B750u)) {
        return;
    }
    ctx->pc = 0x29B750u;
label_29b750:
    // 0x29b750: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b750u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b754: 0x3e00008  jr          $ra
    ctx->pc = 0x29B754u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B754u;
        // 0x29b758: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B754u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B75Cu;
    // 0x29b75c: 0x0  nop
    ctx->pc = 0x29b75cu;
    // NOP
    ctx->pc = 0x29b760u;
}
