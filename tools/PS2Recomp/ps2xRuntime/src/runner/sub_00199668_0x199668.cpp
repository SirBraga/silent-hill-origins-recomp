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

// Function: sub_00199668
// Address: 0x199668 - 0x199690
void sub_00199668_0x199668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199668_0x199668");
#endif

    switch (ctx->pc) {
        case 0x199678u: goto label_199678;
        default: break;
    }

    ctx->pc = 0x199668u;

    // 0x199668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19966c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199670: 0xc06640a  jal         func_199028
    ctx->pc = 0x199670u;
    SET_GPR_U32(ctx, 31, 0x199678u);
    ctx->pc = 0x199028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199028u, 0x199670u, 0x199678u)) {
        return;
    }
    ctx->pc = 0x199678u;
label_199678:
    // 0x199678: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199678u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19967c: 0x3e00008  jr          $ra
    ctx->pc = 0x19967Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19967Cu;
        // 0x199680: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19967Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199684u;
    // 0x199684: 0x0  nop
    ctx->pc = 0x199684u;
    // NOP
    // 0x199688: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x199688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x19968c: 0x0  nop
    ctx->pc = 0x19968cu;
    // NOP
    ctx->pc = 0x199690u;
}
