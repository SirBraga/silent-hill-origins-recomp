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

// Function: sub_001DA578
// Address: 0x1da578 - 0x1da598
void sub_001DA578_0x1da578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA578_0x1da578");
#endif

    switch (ctx->pc) {
        case 0x1da58cu: goto label_1da58c;
        default: break;
    }

    ctx->pc = 0x1da578u;

    // 0x1da578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1da57c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1da580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1da580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1da584: 0xc0767e2  jal         func_1D9F88
    ctx->pc = 0x1DA584u;
    SET_GPR_U32(ctx, 31, 0x1DA58Cu);
    ctx->pc = 0x1DA588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DA584u;
    // 0x1da588: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9F88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D9F88u, 0x1DA584u, 0x1DA58Cu)) {
        return;
    }
    ctx->pc = 0x1DA58Cu;
label_1da58c:
    // 0x1da58c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1da58cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1da590: 0x3e00008  jr          $ra
    ctx->pc = 0x1DA590u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DA590u;
        // 0x1da594: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DA590u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DA598u;
}
