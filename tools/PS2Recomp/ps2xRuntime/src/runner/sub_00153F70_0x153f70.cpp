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

// Function: sub_00153F70
// Address: 0x153f70 - 0x153f90
void sub_00153F70_0x153f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F70_0x153f70");
#endif

    switch (ctx->pc) {
        case 0x153f84u: goto label_153f84;
        default: break;
    }

    ctx->pc = 0x153f70u;

    // 0x153f70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153f74: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x153f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x153f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153f7c: 0xc054d9a  jal         func_153668
    ctx->pc = 0x153F7Cu;
    SET_GPR_U32(ctx, 31, 0x153F84u);
    ctx->pc = 0x153F80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F7Cu;
    // 0x153f80: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153668u, 0x153F7Cu, 0x153F84u)) {
        return;
    }
    ctx->pc = 0x153F84u;
label_153f84:
    // 0x153f84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153f88: 0x3e00008  jr          $ra
    ctx->pc = 0x153F88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153F88u;
        // 0x153f8c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153F88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153F90u;
}
