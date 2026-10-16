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

// Function: sub_001D2190
// Address: 0x1d2190 - 0x1d21b0
void sub_001D2190_0x1d2190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2190_0x1d2190");
#endif

    switch (ctx->pc) {
        case 0x1d21a0u: goto label_1d21a0;
        default: break;
    }

    ctx->pc = 0x1d2190u;

    // 0x1d2190: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d2190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d2194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d2194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d2198: 0xc07459a  jal         func_1D1668
    ctx->pc = 0x1D2198u;
    SET_GPR_U32(ctx, 31, 0x1D21A0u);
    ctx->pc = 0x1D219Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2198u;
    // 0x1d219c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D1668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D1668u, 0x1D2198u, 0x1D21A0u)) {
        return;
    }
    ctx->pc = 0x1D21A0u;
label_1d21a0:
    // 0x1d21a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d21a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d21a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1D21A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D21A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D21A4u;
        // 0x1d21a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D21A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D21ACu;
    // 0x1d21ac: 0x0  nop
    ctx->pc = 0x1d21acu;
    // NOP
    ctx->pc = 0x1d21b0u;
}
