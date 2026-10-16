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

// Function: sub_00172688
// Address: 0x172688 - 0x1726a8
void sub_00172688_0x172688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172688_0x172688");
#endif

    switch (ctx->pc) {
        case 0x17269cu: goto label_17269c;
        default: break;
    }

    ctx->pc = 0x172688u;

    // 0x172688: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17268c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17268cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172690: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x172690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x172694: 0xc05c908  jal         func_172420
    ctx->pc = 0x172694u;
    SET_GPR_U32(ctx, 31, 0x17269Cu);
    ctx->pc = 0x172698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172694u;
    // 0x172698: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x172420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x172420u, 0x172694u, 0x17269Cu)) {
        return;
    }
    ctx->pc = 0x17269Cu;
label_17269c:
    // 0x17269c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17269cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1726a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1726A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1726A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1726A0u;
        // 0x1726a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1726A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1726A8u;
}
