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

// Function: sub_0016ED70
// Address: 0x16ed70 - 0x16ed90
void sub_0016ED70_0x16ed70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016ED70_0x16ed70");
#endif

    switch (ctx->pc) {
        case 0x16ed84u: goto label_16ed84;
        default: break;
    }

    ctx->pc = 0x16ed70u;

    // 0x16ed70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16ed70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16ed74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16ed74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ed78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16ed78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16ed7c: 0xc05baf4  jal         func_16EBD0
    ctx->pc = 0x16ED7Cu;
    SET_GPR_U32(ctx, 31, 0x16ED84u);
    ctx->pc = 0x16ED80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16ED7Cu;
    // 0x16ed80: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x16EBD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16EBD0u, 0x16ED7Cu, 0x16ED84u)) {
        return;
    }
    ctx->pc = 0x16ED84u;
label_16ed84:
    // 0x16ed84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16ed84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16ed88: 0x3e00008  jr          $ra
    ctx->pc = 0x16ED88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16ED8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16ED88u;
        // 0x16ed8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16ED88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ED90u;
}
