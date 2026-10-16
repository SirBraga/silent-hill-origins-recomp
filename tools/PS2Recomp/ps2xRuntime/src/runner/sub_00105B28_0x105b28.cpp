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

// Function: sub_00105B28
// Address: 0x105b28 - 0x105b48
void sub_00105B28_0x105b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105B28_0x105b28");
#endif

    switch (ctx->pc) {
        case 0x105b3cu: goto label_105b3c;
        default: break;
    }

    ctx->pc = 0x105b28u;

    // 0x105b28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x105b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x105b2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x105b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105b30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105b30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x105b34: 0xc041558  jal         func_105560
    ctx->pc = 0x105B34u;
    SET_GPR_U32(ctx, 31, 0x105B3Cu);
    ctx->pc = 0x105B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105B34u;
    // 0x105b38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x105560u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105560u, 0x105B34u, 0x105B3Cu)) {
        return;
    }
    ctx->pc = 0x105B3Cu;
label_105b3c:
    // 0x105b3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105b3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105b40: 0x3e00008  jr          $ra
    ctx->pc = 0x105B40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105B40u;
        // 0x105b44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105B40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x105B48u;
}
