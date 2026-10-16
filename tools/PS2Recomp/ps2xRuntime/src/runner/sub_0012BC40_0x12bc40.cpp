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

// Function: sub_0012BC40
// Address: 0x12bc40 - 0x12bc60
void sub_0012BC40_0x12bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BC40_0x12bc40");
#endif

    switch (ctx->pc) {
        case 0x12bc50u: goto label_12bc50;
        default: break;
    }

    ctx->pc = 0x12bc40u;

    // 0x12bc40: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bc44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12bc44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12bc48: 0xc049a70  jal         func_1269C0
    ctx->pc = 0x12BC48u;
    SET_GPR_U32(ctx, 31, 0x12BC50u);
    ctx->pc = 0x12BC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BC48u;
    // 0x12bc4c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x12BC48u, 0x12BC50u)) {
        return;
    }
    ctx->pc = 0x12BC50u;
label_12bc50:
    // 0x12bc50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x12BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BC54u;
        // 0x12bc58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BC5Cu;
    // 0x12bc5c: 0x0  nop
    ctx->pc = 0x12bc5cu;
    // NOP
    ctx->pc = 0x12bc60u;
}
