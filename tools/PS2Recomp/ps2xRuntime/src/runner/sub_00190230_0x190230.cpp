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

// Function: sub_00190230
// Address: 0x190230 - 0x190250
void sub_00190230_0x190230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00190230_0x190230");
#endif

    switch (ctx->pc) {
        case 0x190244u: goto label_190244;
        default: break;
    }

    ctx->pc = 0x190230u;

    // 0x190230: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x190230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x190234: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x190234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x190238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x190238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19023c: 0xc081684  jal         func_205A10
    ctx->pc = 0x19023Cu;
    SET_GPR_U32(ctx, 31, 0x190244u);
    ctx->pc = 0x190240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19023Cu;
    // 0x190240: 0x24849438  addiu       $a0, $a0, -0x6BC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x205A10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x205A10u, 0x19023Cu, 0x190244u)) {
        return;
    }
    ctx->pc = 0x190244u;
label_190244:
    // 0x190244: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x190244u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x190248: 0x3e00008  jr          $ra
    ctx->pc = 0x190248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x190248u;
        // 0x19024c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x190248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x190250u;
}
