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

// Function: sub_0013F620
// Address: 0x13f620 - 0x13f640
void sub_0013F620_0x13f620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013F620_0x13f620");
#endif

    switch (ctx->pc) {
        case 0x13f634u: goto label_13f634;
        default: break;
    }

    ctx->pc = 0x13f620u;

    // 0x13f620: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13f620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13f624: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13f624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13f628: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13f628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13f62c: 0xc04fc5a  jal         func_13F168
    ctx->pc = 0x13F62Cu;
    SET_GPR_U32(ctx, 31, 0x13F634u);
    ctx->pc = 0x13F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13F62Cu;
    // 0x13f630: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13F168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13F168u, 0x13F62Cu, 0x13F634u)) {
        return;
    }
    ctx->pc = 0x13F634u;
label_13f634:
    // 0x13f634: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13f634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13f638: 0x3e00008  jr          $ra
    ctx->pc = 0x13F638u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13F63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13F638u;
        // 0x13f63c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13F638u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13F640u;
}
