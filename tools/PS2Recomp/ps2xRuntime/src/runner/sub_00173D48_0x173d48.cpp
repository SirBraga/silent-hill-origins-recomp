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

// Function: sub_00173D48
// Address: 0x173d48 - 0x173d68
void sub_00173D48_0x173d48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173D48_0x173d48");
#endif

    switch (ctx->pc) {
        case 0x173d5cu: goto label_173d5c;
        default: break;
    }

    ctx->pc = 0x173d48u;

    // 0x173d48: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x173d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x173d4c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d50: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173d54: 0xc05cea4  jal         func_173A90
    ctx->pc = 0x173D54u;
    SET_GPR_U32(ctx, 31, 0x173D5Cu);
    ctx->pc = 0x173D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x173D54u;
    // 0x173d58: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173A90u, 0x173D54u, 0x173D5Cu)) {
        return;
    }
    ctx->pc = 0x173D5Cu;
label_173d5c:
    // 0x173d5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173d60: 0x3e00008  jr          $ra
    ctx->pc = 0x173D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x173D60u;
        // 0x173d64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173D68u;
}
