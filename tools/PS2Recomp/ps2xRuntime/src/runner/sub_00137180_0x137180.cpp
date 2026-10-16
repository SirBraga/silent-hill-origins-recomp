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

// Function: sub_00137180
// Address: 0x137180 - 0x1371a0
void sub_00137180_0x137180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137180_0x137180");
#endif

    switch (ctx->pc) {
        case 0x137190u: goto label_137190;
        default: break;
    }

    ctx->pc = 0x137180u;

    // 0x137180: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x137180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x137184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x137184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x137188: 0xc049840  jal         func_126100
    ctx->pc = 0x137188u;
    SET_GPR_U32(ctx, 31, 0x137190u);
    ctx->pc = 0x126100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126100u, 0x137188u, 0x137190u)) {
        return;
    }
    ctx->pc = 0x137190u;
label_137190:
    // 0x137190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x137190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x137194: 0x3e00008  jr          $ra
    ctx->pc = 0x137194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x137198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137194u;
        // 0x137198: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13719Cu;
    // 0x13719c: 0x0  nop
    ctx->pc = 0x13719cu;
    // NOP
    ctx->pc = 0x1371a0u;
}
