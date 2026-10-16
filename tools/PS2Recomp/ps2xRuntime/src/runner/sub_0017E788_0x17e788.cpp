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

// Function: sub_0017E788
// Address: 0x17e788 - 0x17e7a8
void sub_0017E788_0x17e788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E788_0x17e788");
#endif

    switch (ctx->pc) {
        case 0x17e798u: goto label_17e798;
        default: break;
    }

    ctx->pc = 0x17e788u;

    // 0x17e788: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17e788u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17e78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17e78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17e790: 0xc06012a  jal         func_1804A8
    ctx->pc = 0x17E790u;
    SET_GPR_U32(ctx, 31, 0x17E798u);
    ctx->pc = 0x1804A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1804A8u, 0x17E790u, 0x17E798u)) {
        return;
    }
    ctx->pc = 0x17E798u;
label_17e798:
    // 0x17e798: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17e798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17e79c: 0x3e00008  jr          $ra
    ctx->pc = 0x17E79Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17E7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E79Cu;
        // 0x17e7a0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E79Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E7A4u;
    // 0x17e7a4: 0x0  nop
    ctx->pc = 0x17e7a4u;
    // NOP
    ctx->pc = 0x17e7a8u;
}
