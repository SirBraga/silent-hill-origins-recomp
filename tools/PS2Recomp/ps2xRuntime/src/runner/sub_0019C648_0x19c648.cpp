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

// Function: sub_0019C648
// Address: 0x19c648 - 0x19c668
void sub_0019C648_0x19c648(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C648_0x19c648");
#endif

    switch (ctx->pc) {
        case 0x19c65cu: goto label_19c65c;
        default: break;
    }

    ctx->pc = 0x19c648u;

    // 0x19c648: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19c648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19c64c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19c64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19c650: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19c654: 0xc06709e  jal         func_19C278
    ctx->pc = 0x19C654u;
    SET_GPR_U32(ctx, 31, 0x19C65Cu);
    ctx->pc = 0x19C658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C654u;
    // 0x19c658: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19C278u, 0x19C654u, 0x19C65Cu)) {
        return;
    }
    ctx->pc = 0x19C65Cu;
label_19c65c:
    // 0x19c65c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19c660: 0x3e00008  jr          $ra
    ctx->pc = 0x19C660u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C660u;
        // 0x19c664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C660u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C668u;
}
