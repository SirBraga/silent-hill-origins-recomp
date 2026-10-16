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

// Function: sub_00189970
// Address: 0x189970 - 0x189990
void sub_00189970_0x189970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189970_0x189970");
#endif

    switch (ctx->pc) {
        case 0x189984u: goto label_189984;
        default: break;
    }

    ctx->pc = 0x189970u;

    // 0x189970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x189970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x189974: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x189974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x189978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x189978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18997c: 0xc0625da  jal         func_189768
    ctx->pc = 0x18997Cu;
    SET_GPR_U32(ctx, 31, 0x189984u);
    ctx->pc = 0x189980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18997Cu;
    // 0x189980: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x189768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189768u, 0x18997Cu, 0x189984u)) {
        return;
    }
    ctx->pc = 0x189984u;
label_189984:
    // 0x189984: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x189984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x189988: 0x3e00008  jr          $ra
    ctx->pc = 0x189988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18998Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189988u;
        // 0x18998c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189988u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189990u;
}
