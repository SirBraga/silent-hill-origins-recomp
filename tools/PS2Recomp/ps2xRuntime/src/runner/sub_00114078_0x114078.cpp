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

// Function: sub_00114078
// Address: 0x114078 - 0x114098
void sub_00114078_0x114078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00114078_0x114078");
#endif

    switch (ctx->pc) {
        case 0x11408cu: goto label_11408c;
        default: break;
    }

    ctx->pc = 0x114078u;

    // 0x114078: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x114078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11407c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x11407cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x114080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x114080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x114084: 0xc044e40  jal         func_113900
    ctx->pc = 0x114084u;
    SET_GPR_U32(ctx, 31, 0x11408Cu);
    ctx->pc = 0x114088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x114084u;
    // 0x114088: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113900u, 0x114084u, 0x11408Cu)) {
        return;
    }
    ctx->pc = 0x11408Cu;
label_11408c:
    // 0x11408c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11408cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x114090: 0x3e00008  jr          $ra
    ctx->pc = 0x114090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114090u;
        // 0x114094: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114098u;
}
