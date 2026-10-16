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

// Function: sub_00125360
// Address: 0x125360 - 0x125380
void sub_00125360_0x125360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125360_0x125360");
#endif

    switch (ctx->pc) {
        case 0x125370u: goto label_125370;
        default: break;
    }

    ctx->pc = 0x125360u;

    // 0x125360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x125360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x125364: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x125364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x125368: 0xc068218  jal         func_1A0860
    ctx->pc = 0x125368u;
    SET_GPR_U32(ctx, 31, 0x125370u);
    ctx->pc = 0x12536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x125368u;
    // 0x12536c: 0x24840320  addiu       $a0, $a0, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x125368u, 0x125370u)) {
        return;
    }
    ctx->pc = 0x125370u;
label_125370:
    // 0x125370: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x125370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125374: 0x3e00008  jr          $ra
    ctx->pc = 0x125374u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x125374u;
        // 0x125378: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x125374u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12537Cu;
    // 0x12537c: 0x0  nop
    ctx->pc = 0x12537cu;
    // NOP
    ctx->pc = 0x125380u;
}
