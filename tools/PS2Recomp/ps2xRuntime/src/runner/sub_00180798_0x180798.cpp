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

// Function: sub_00180798
// Address: 0x180798 - 0x1807b8
void sub_00180798_0x180798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00180798_0x180798");
#endif

    switch (ctx->pc) {
        case 0x1807acu: goto label_1807ac;
        default: break;
    }

    ctx->pc = 0x180798u;

    // 0x180798: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x180798u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x18079c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x18079cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1807a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1807a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1807a4: 0xc0600be  jal         func_1802F8
    ctx->pc = 0x1807A4u;
    SET_GPR_U32(ctx, 31, 0x1807ACu);
    ctx->pc = 0x1807A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1807A4u;
    // 0x1807a8: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1802F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1802F8u, 0x1807A4u, 0x1807ACu)) {
        return;
    }
    ctx->pc = 0x1807ACu;
label_1807ac:
    // 0x1807ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1807acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1807b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1807B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1807B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1807B0u;
        // 0x1807b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1807B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1807B8u;
}
