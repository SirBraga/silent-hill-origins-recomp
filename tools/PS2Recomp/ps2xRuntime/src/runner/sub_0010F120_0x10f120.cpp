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

// Function: sub_0010F120
// Address: 0x10f120 - 0x10f140
void sub_0010F120_0x10f120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F120_0x10f120");
#endif

    switch (ctx->pc) {
        case 0x10f134u: goto label_10f134;
        default: break;
    }

    ctx->pc = 0x10f120u;

    // 0x10f120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f124: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10f124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f12c: 0xc043baa  jal         func_10EEA8
    ctx->pc = 0x10F12Cu;
    SET_GPR_U32(ctx, 31, 0x10F134u);
    ctx->pc = 0x10F130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F12Cu;
    // 0x10f130: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10EEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10EEA8u, 0x10F12Cu, 0x10F134u)) {
        return;
    }
    ctx->pc = 0x10F134u;
label_10f134:
    // 0x10f134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10f138: 0x3e00008  jr          $ra
    ctx->pc = 0x10F138u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F138u;
        // 0x10f13c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F138u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F140u;
}
