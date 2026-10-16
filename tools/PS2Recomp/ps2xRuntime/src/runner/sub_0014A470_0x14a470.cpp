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

// Function: sub_0014A470
// Address: 0x14a470 - 0x14a490
void sub_0014A470_0x14a470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014A470_0x14a470");
#endif

    switch (ctx->pc) {
        case 0x14a484u: goto label_14a484;
        default: break;
    }

    ctx->pc = 0x14a470u;

    // 0x14a470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x14a470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x14a474: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x14a474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14a478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14a478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14a47c: 0xc052882  jal         func_14A208
    ctx->pc = 0x14A47Cu;
    SET_GPR_U32(ctx, 31, 0x14A484u);
    ctx->pc = 0x14A480u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14A47Cu;
    // 0x14a480: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x14A208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14A208u, 0x14A47Cu, 0x14A484u)) {
        return;
    }
    ctx->pc = 0x14A484u;
label_14a484:
    // 0x14a484: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14a484u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14a488: 0x3e00008  jr          $ra
    ctx->pc = 0x14A488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14A48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14A488u;
        // 0x14a48c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14A488u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14A490u;
}
