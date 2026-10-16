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

// Function: sub_00173D28
// Address: 0x173d28 - 0x173d48
void sub_00173D28_0x173d28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173D28_0x173d28");
#endif

    switch (ctx->pc) {
        case 0x173d3cu: goto label_173d3c;
        default: break;
    }

    ctx->pc = 0x173d28u;

    // 0x173d28: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173d2c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x173d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173d30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173d34: 0xc05cea4  jal         func_173A90
    ctx->pc = 0x173D34u;
    SET_GPR_U32(ctx, 31, 0x173D3Cu);
    ctx->pc = 0x173D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D34u;
    // 0x173d38: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173A90u, 0x173D34u, 0x173D3Cu)) {
        return;
    }
    ctx->pc = 0x173D3Cu;
label_173d3c:
    // 0x173d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d40: 0x3e00008  jr          $ra
    ctx->pc = 0x173D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D40u;
        // 0x173d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173D48u;
}
