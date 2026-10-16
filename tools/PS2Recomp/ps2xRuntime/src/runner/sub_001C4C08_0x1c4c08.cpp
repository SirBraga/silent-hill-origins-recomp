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

// Function: sub_001C4C08
// Address: 0x1c4c08 - 0x1c4c28
void sub_001C4C08_0x1c4c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4C08_0x1c4c08");
#endif

    switch (ctx->pc) {
        case 0x1c4c18u: goto label_1c4c18;
        default: break;
    }

    ctx->pc = 0x1c4c08u;

    // 0x1c4c08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c4c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1c4c0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c4c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c4c10: 0xc06d778  jal         func_1B5DE0
    ctx->pc = 0x1C4C10u;
    SET_GPR_U32(ctx, 31, 0x1C4C18u);
    ctx->pc = 0x1B5DE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B5DE0u, 0x1C4C10u, 0x1C4C18u)) {
        return;
    }
    ctx->pc = 0x1C4C18u;
label_1c4c18:
    // 0x1c4c18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4c18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4c1c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C4C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4C1Cu;
        // 0x1c4c20: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4C1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4C24u;
    // 0x1c4c24: 0x0  nop
    ctx->pc = 0x1c4c24u;
    // NOP
    ctx->pc = 0x1c4c28u;
}
