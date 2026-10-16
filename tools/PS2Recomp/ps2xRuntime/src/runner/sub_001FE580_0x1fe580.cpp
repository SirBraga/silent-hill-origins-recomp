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

// Function: sub_001FE580
// Address: 0x1fe580 - 0x1fe5a0
void sub_001FE580_0x1fe580(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FE580_0x1fe580");
#endif

    switch (ctx->pc) {
        case 0x1fe590u: goto label_1fe590;
        default: break;
    }

    ctx->pc = 0x1fe580u;

    // 0x1fe580: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fe580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fe584: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fe584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fe588: 0xc07f968  jal         func_1FE5A0
    ctx->pc = 0x1FE588u;
    SET_GPR_U32(ctx, 31, 0x1FE590u);
    ctx->pc = 0x1FE58Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FE588u;
    // 0x1fe58c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE5A0u, 0x1FE588u, 0x1FE590u)) {
        return;
    }
    ctx->pc = 0x1FE590u;
label_1fe590:
    // 0x1fe590: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fe590u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fe594: 0x3e00008  jr          $ra
    ctx->pc = 0x1FE594u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FE598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FE594u;
        // 0x1fe598: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FE594u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FE59Cu;
    // 0x1fe59c: 0x0  nop
    ctx->pc = 0x1fe59cu;
    // NOP
    ctx->pc = 0x1fe5a0u;
}
