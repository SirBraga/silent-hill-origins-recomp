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

// Function: sub_00314F58
// Address: 0x314f58 - 0x314f78
void sub_00314F58_0x314f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00314F58_0x314f58");
#endif

    switch (ctx->pc) {
        case 0x314f68u: goto label_314f68;
        default: break;
    }

    ctx->pc = 0x314f58u;

    // 0x314f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x314f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x314f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x314f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x314f60: 0xc0c5bee  jal         func_316FB8
    ctx->pc = 0x314F60u;
    SET_GPR_U32(ctx, 31, 0x314F68u);
    ctx->pc = 0x314F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314F60u;
    // 0x314f64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x316FB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x316FB8u, 0x314F60u, 0x314F68u)) {
        return;
    }
    ctx->pc = 0x314F68u;
label_314f68:
    // 0x314f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x314f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x314f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x314F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314F6Cu;
        // 0x314f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x314F74u;
    // 0x314f74: 0x0  nop
    ctx->pc = 0x314f74u;
    // NOP
    ctx->pc = 0x314f78u;
}
