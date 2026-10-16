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

// Function: sub_0029F378
// Address: 0x29f378 - 0x29f398
void sub_0029F378_0x29f378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F378_0x29f378");
#endif

    switch (ctx->pc) {
        case 0x29f388u: goto label_29f388;
        default: break;
    }

    ctx->pc = 0x29f378u;

    // 0x29f378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29f378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29f37c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29f37cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29f380: 0xc0a8b92  jal         func_2A2E48
    ctx->pc = 0x29F380u;
    SET_GPR_U32(ctx, 31, 0x29F388u);
    ctx->pc = 0x29F384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29F380u;
    // 0x29f384: 0xc0302d  daddu       $a2, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A2E48u, 0x29F380u, 0x29F388u)) {
        return;
    }
    ctx->pc = 0x29F388u;
label_29f388:
    // 0x29f388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29f388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29f38c: 0x3e00008  jr          $ra
    ctx->pc = 0x29F38Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F38Cu;
        // 0x29f390: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F38Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F394u;
    // 0x29f394: 0x0  nop
    ctx->pc = 0x29f394u;
    // NOP
    ctx->pc = 0x29f398u;
}
