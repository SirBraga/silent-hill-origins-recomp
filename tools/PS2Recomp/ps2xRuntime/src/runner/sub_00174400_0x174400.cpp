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

// Function: sub_00174400
// Address: 0x174400 - 0x174420
void sub_00174400_0x174400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174400_0x174400");
#endif

    switch (ctx->pc) {
        case 0x174414u: goto label_174414;
        default: break;
    }

    ctx->pc = 0x174400u;

    // 0x174400: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174404: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x174404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174408: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17440c: 0xc05cfec  jal         func_173FB0
    ctx->pc = 0x17440Cu;
    SET_GPR_U32(ctx, 31, 0x174414u);
    ctx->pc = 0x174410u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17440Cu;
    // 0x174410: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x173FB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x173FB0u, 0x17440Cu, 0x174414u)) {
        return;
    }
    ctx->pc = 0x174414u;
label_174414:
    // 0x174414: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174414u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174418: 0x3e00008  jr          $ra
    ctx->pc = 0x174418u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174418u;
        // 0x17441c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174418u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174420u;
}
