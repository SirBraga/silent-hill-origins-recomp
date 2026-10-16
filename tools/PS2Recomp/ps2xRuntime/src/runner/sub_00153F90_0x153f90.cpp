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

// Function: sub_00153F90
// Address: 0x153f90 - 0x153fb0
void sub_00153F90_0x153f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00153F90_0x153f90");
#endif

    switch (ctx->pc) {
        case 0x153fa4u: goto label_153fa4;
        default: break;
    }

    ctx->pc = 0x153f90u;

    // 0x153f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x153f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x153f94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x153f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x153f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x153f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x153f9c: 0xc054d9a  jal         func_153668
    ctx->pc = 0x153F9Cu;
    SET_GPR_U32(ctx, 31, 0x153FA4u);
    ctx->pc = 0x153FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x153F9Cu;
    // 0x153fa0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x153668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x153668u, 0x153F9Cu, 0x153FA4u)) {
        return;
    }
    ctx->pc = 0x153FA4u;
label_153fa4:
    // 0x153fa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x153fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x153fa8: 0x3e00008  jr          $ra
    ctx->pc = 0x153FA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x153FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x153FA8u;
        // 0x153fac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x153FA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x153FB0u;
}
