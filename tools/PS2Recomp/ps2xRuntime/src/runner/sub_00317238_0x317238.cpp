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

// Function: sub_00317238
// Address: 0x317238 - 0x317258
void sub_00317238_0x317238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00317238_0x317238");
#endif

    switch (ctx->pc) {
        case 0x317248u: goto label_317248;
        default: break;
    }

    ctx->pc = 0x317238u;

    // 0x317238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x317238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31723c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31723cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x317240: 0xc0c49b7  jal         func_3126DC
    ctx->pc = 0x317240u;
    SET_GPR_U32(ctx, 31, 0x317248u);
    ctx->pc = 0x3126DCu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3126DCu, 0x317240u, 0x317248u)) {
        return;
    }
    ctx->pc = 0x317248u;
label_317248:
    // 0x317248: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x317248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31724c: 0x3e00008  jr          $ra
    ctx->pc = 0x31724Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x317250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31724Cu;
        // 0x317250: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31724Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x317254u;
    // 0x317254: 0x0  nop
    ctx->pc = 0x317254u;
    // NOP
    ctx->pc = 0x317258u;
}
