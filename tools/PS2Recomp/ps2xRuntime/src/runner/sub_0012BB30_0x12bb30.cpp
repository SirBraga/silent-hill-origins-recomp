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

// Function: sub_0012BB30
// Address: 0x12bb30 - 0x12bb50
void sub_0012BB30_0x12bb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BB30_0x12bb30");
#endif

    switch (ctx->pc) {
        case 0x12bb40u: goto label_12bb40;
        default: break;
    }

    ctx->pc = 0x12bb30u;

    // 0x12bb30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bb34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bb38: 0xc0491ce  jal         func_124738
    ctx->pc = 0x12BB38u;
    SET_GPR_U32(ctx, 31, 0x12BB40u);
    ctx->pc = 0x12BB3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BB38u;
    // 0x12bb3c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124738u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x124738u, 0x12BB38u, 0x12BB40u)) {
        return;
    }
    ctx->pc = 0x12BB40u;
label_12bb40:
    // 0x12bb40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bb40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bb44: 0x3e00008  jr          $ra
    ctx->pc = 0x12BB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BB44u;
        // 0x12bb48: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BB44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BB4Cu;
    // 0x12bb4c: 0x0  nop
    ctx->pc = 0x12bb4cu;
    // NOP
    ctx->pc = 0x12bb50u;
}
