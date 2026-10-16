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

// Function: sub_00183F00
// Address: 0x183f00 - 0x183f20
void sub_00183F00_0x183f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183F00_0x183f00");
#endif

    switch (ctx->pc) {
        case 0x183f10u: goto label_183f10;
        default: break;
    }

    ctx->pc = 0x183f00u;

    // 0x183f00: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x183f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x183f04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x183f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183f08: 0xc04f122  jal         func_13C488
    ctx->pc = 0x183F08u;
    SET_GPR_U32(ctx, 31, 0x183F10u);
    ctx->pc = 0x183F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x183F08u;
    // 0x183f0c: 0x8c8500ac  lw          $a1, 0xAC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 172)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C488u, 0x183F08u, 0x183F10u)) {
        return;
    }
    ctx->pc = 0x183F10u;
label_183f10:
    // 0x183f10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x183f10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183f14: 0x3e00008  jr          $ra
    ctx->pc = 0x183F14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x183F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x183F14u;
        // 0x183f18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x183F14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x183F1Cu;
    // 0x183f1c: 0x0  nop
    ctx->pc = 0x183f1cu;
    // NOP
    ctx->pc = 0x183f20u;
}
