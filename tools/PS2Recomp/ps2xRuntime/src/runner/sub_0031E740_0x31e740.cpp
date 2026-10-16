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

// Function: sub_0031E740
// Address: 0x31e740 - 0x31e768
void sub_0031E740_0x31e740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031E740_0x31e740");
#endif

    switch (ctx->pc) {
        case 0x31e758u: goto label_31e758;
        default: break;
    }

    ctx->pc = 0x31e740u;

    // 0x31e740: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x31e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x31e744: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31e744u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31e748: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x31e748u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x686CCCu));
    // 0x31e74c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31e74cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x31e750: 0xc0c79ca  jal         func_31E728
    ctx->pc = 0x31E750u;
    SET_GPR_U32(ctx, 31, 0x31E758u);
    ctx->pc = 0x31E728u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31E728u, 0x31E750u, 0x31E758u)) {
        return;
    }
    ctx->pc = 0x31E758u;
label_31e758:
    // 0x31e758: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31e758u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31e75c: 0x3e00008  jr          $ra
    ctx->pc = 0x31E75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31E760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31E75Cu;
        // 0x31e760: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31E75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31E764u;
    // 0x31e764: 0x0  nop
    ctx->pc = 0x31e764u;
    // NOP
    ctx->pc = 0x31e768u;
}
