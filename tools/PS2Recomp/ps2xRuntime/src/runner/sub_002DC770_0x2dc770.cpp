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

// Function: sub_002DC770
// Address: 0x2dc770 - 0x2dc7a8
void sub_002DC770_0x2dc770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC770_0x2dc770");
#endif

    switch (ctx->pc) {
        case 0x2dc788u: goto label_2dc788;
        case 0x2dc790u: goto label_2dc790;
        case 0x2dc798u: goto label_2dc798;
        default: break;
    }

    ctx->pc = 0x2dc770u;

    // 0x2dc770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2dc770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2dc774: 0x8f828bc8  lw          $v0, -0x7438($gp)
    ctx->pc = 0x2dc774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937544)));
    // 0x2dc778: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC778u;
    {
        const bool branch_taken_0x2dc778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DC77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC778u;
        // 0x2dc77c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc778) {
            ctx->pc = 0x2DC798u;
            goto label_2dc798;
        }
    }
    ctx->pc = 0x2DC780u;
    // 0x2dc780: 0xc08967a  jal         func_2259E8
    ctx->pc = 0x2DC780u;
    SET_GPR_U32(ctx, 31, 0x2DC788u);
    ctx->pc = 0x2259E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2259E8u, 0x2DC780u, 0x2DC788u)) {
        return;
    }
    ctx->pc = 0x2DC788u;
label_2dc788:
    // 0x2dc788: 0xc0896c8  jal         func_225B20
    ctx->pc = 0x2DC788u;
    SET_GPR_U32(ctx, 31, 0x2DC790u);
    ctx->pc = 0x225B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225B20u, 0x2DC788u, 0x2DC790u)) {
        return;
    }
    ctx->pc = 0x2DC790u;
label_2dc790:
    // 0x2dc790: 0xc089714  jal         func_225C50
    ctx->pc = 0x2DC790u;
    SET_GPR_U32(ctx, 31, 0x2DC798u);
    ctx->pc = 0x225C50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225C50u, 0x2DC790u, 0x2DC798u)) {
        return;
    }
    ctx->pc = 0x2DC798u;
label_2dc798:
    // 0x2dc798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc79c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC79Cu;
        // 0x2dc7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC7A4u;
    // 0x2dc7a4: 0x0  nop
    ctx->pc = 0x2dc7a4u;
    // NOP
    ctx->pc = 0x2dc7a8u;
}
