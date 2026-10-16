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

// Function: sub_0025EEB8
// Address: 0x25eeb8 - 0x25eef0
void sub_0025EEB8_0x25eeb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025EEB8_0x25eeb8");
#endif

    switch (ctx->pc) {
        case 0x25eec8u: goto label_25eec8;
        case 0x25eed0u: goto label_25eed0;
        case 0x25eed8u: goto label_25eed8;
        case 0x25eee0u: goto label_25eee0;
        default: break;
    }

    ctx->pc = 0x25eeb8u;

    // 0x25eeb8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25eeb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25eebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25eebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25eec0: 0xc097c70  jal         func_25F1C0
    ctx->pc = 0x25EEC0u;
    SET_GPR_U32(ctx, 31, 0x25EEC8u);
    ctx->pc = 0x25F1C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F1C0u, 0x25EEC0u, 0x25EEC8u)) {
        return;
    }
    ctx->pc = 0x25EEC8u;
label_25eec8:
    // 0x25eec8: 0xc098dc8  jal         func_263720
    ctx->pc = 0x25EEC8u;
    SET_GPR_U32(ctx, 31, 0x25EED0u);
    ctx->pc = 0x263720u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263720u, 0x25EEC8u, 0x25EED0u)) {
        return;
    }
    ctx->pc = 0x25EED0u;
label_25eed0:
    // 0x25eed0: 0xc098df2  jal         func_2637C8
    ctx->pc = 0x25EED0u;
    SET_GPR_U32(ctx, 31, 0x25EED8u);
    ctx->pc = 0x2637C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2637C8u, 0x25EED0u, 0x25EED8u)) {
        return;
    }
    ctx->pc = 0x25EED8u;
label_25eed8:
    // 0x25eed8: 0xc098d9e  jal         func_263678
    ctx->pc = 0x25EED8u;
    SET_GPR_U32(ctx, 31, 0x25EEE0u);
    ctx->pc = 0x263678u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x263678u, 0x25EED8u, 0x25EEE0u)) {
        return;
    }
    ctx->pc = 0x25EEE0u;
label_25eee0:
    // 0x25eee0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25eee0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25eee4: 0x3e00008  jr          $ra
    ctx->pc = 0x25EEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25EEE4u;
        // 0x25eee8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25EEE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25EEECu;
    // 0x25eeec: 0x0  nop
    ctx->pc = 0x25eeecu;
    // NOP
    ctx->pc = 0x25eef0u;
}
