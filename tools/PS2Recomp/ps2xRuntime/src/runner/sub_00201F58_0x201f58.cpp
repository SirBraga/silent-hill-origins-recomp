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

// Function: sub_00201F58
// Address: 0x201f58 - 0x201f90
void sub_00201F58_0x201f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201F58_0x201f58");
#endif

    switch (ctx->pc) {
        case 0x201f68u: goto label_201f68;
        default: break;
    }

    ctx->pc = 0x201f58u;

    // 0x201f58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x201f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x201f5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x201f5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x201f60: 0xc0c5472  jal         func_3151C8
    ctx->pc = 0x201F60u;
    SET_GPR_U32(ctx, 31, 0x201F68u);
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x201F60u, 0x201F68u)) {
        return;
    }
    ctx->pc = 0x201F68u;
label_201f68:
    // 0x201f68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201f6c: 0x3e00008  jr          $ra
    ctx->pc = 0x201F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x201F6Cu;
        // 0x201f70: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x201F6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x201F74u;
    // 0x201f74: 0x0  nop
    ctx->pc = 0x201f74u;
    // NOP
    // 0x201f78: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x201f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201f7c: 0x0  nop
    ctx->pc = 0x201f7cu;
    // NOP
    // 0x201f80: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x201f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201f84: 0x0  nop
    ctx->pc = 0x201f84u;
    // NOP
    // 0x201f88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x201f88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x201f8c: 0x0  nop
    ctx->pc = 0x201f8cu;
    // NOP
    ctx->pc = 0x201f90u;
}
