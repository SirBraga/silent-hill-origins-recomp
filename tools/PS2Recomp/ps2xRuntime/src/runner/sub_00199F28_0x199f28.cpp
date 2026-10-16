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

// Function: sub_00199F28
// Address: 0x199f28 - 0x199f48
void sub_00199F28_0x199f28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199F28_0x199f28");
#endif

    switch (ctx->pc) {
        case 0x199f3cu: goto label_199f3c;
        default: break;
    }

    ctx->pc = 0x199f28u;

    // 0x199f28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x199f28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x199f2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x199f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199f30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x199f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x199f34: 0xc0666e2  jal         func_199B88
    ctx->pc = 0x199F34u;
    SET_GPR_U32(ctx, 31, 0x199F3Cu);
    ctx->pc = 0x199F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199F34u;
    // 0x199f38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x199B88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x199B88u, 0x199F34u, 0x199F3Cu)) {
        return;
    }
    ctx->pc = 0x199F3Cu;
label_199f3c:
    // 0x199f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199f40: 0x3e00008  jr          $ra
    ctx->pc = 0x199F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199F40u;
        // 0x199f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199F48u;
}
