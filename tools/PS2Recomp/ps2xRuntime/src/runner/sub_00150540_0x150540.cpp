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

// Function: sub_00150540
// Address: 0x150540 - 0x150560
void sub_00150540_0x150540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150540_0x150540");
#endif

    switch (ctx->pc) {
        case 0x150554u: goto label_150554;
        default: break;
    }

    ctx->pc = 0x150540u;

    // 0x150540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150544: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x150544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15054c: 0xc054006  jal         func_150018
    ctx->pc = 0x15054Cu;
    SET_GPR_U32(ctx, 31, 0x150554u);
    ctx->pc = 0x150550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15054Cu;
    // 0x150550: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x150018u, 0x15054Cu, 0x150554u)) {
        return;
    }
    ctx->pc = 0x150554u;
label_150554:
    // 0x150554: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150554u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x150558: 0x3e00008  jr          $ra
    ctx->pc = 0x150558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150558u;
        // 0x15055c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150558u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150560u;
}
