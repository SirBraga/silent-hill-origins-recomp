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

// Function: sub_00175658
// Address: 0x175658 - 0x175678
void sub_00175658_0x175658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00175658_0x175658");
#endif

    switch (ctx->pc) {
        case 0x17566cu: goto label_17566c;
        default: break;
    }

    ctx->pc = 0x175658u;

    // 0x175658: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x175658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17565c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17565cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x175660: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x175660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x175664: 0xc05d4de  jal         func_175378
    ctx->pc = 0x175664u;
    SET_GPR_U32(ctx, 31, 0x17566Cu);
    ctx->pc = 0x175668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175664u;
    // 0x175668: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x175378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x175378u, 0x175664u, 0x17566Cu)) {
        return;
    }
    ctx->pc = 0x17566Cu;
label_17566c:
    // 0x17566c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17566cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x175670: 0x3e00008  jr          $ra
    ctx->pc = 0x175670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x175674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175670u;
        // 0x175674: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x175678u;
}
