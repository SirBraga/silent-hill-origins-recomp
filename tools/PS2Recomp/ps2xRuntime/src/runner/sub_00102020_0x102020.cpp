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

// Function: sub_00102020
// Address: 0x102020 - 0x102040
void sub_00102020_0x102020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102020_0x102020");
#endif

    switch (ctx->pc) {
        case 0x102030u: goto label_102030;
        default: break;
    }

    ctx->pc = 0x102020u;

    // 0x102020: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x102020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x102024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102028: 0xc09d926  jal         func_276498
    ctx->pc = 0x102028u;
    SET_GPR_U32(ctx, 31, 0x102030u);
    ctx->pc = 0x10202Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102028u;
    // 0x10202c: 0x8c840198  lw          $a0, 0x198($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x276498u, 0x102028u, 0x102030u)) {
        return;
    }
    ctx->pc = 0x102030u;
label_102030:
    // 0x102030: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102030u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102034: 0x3e00008  jr          $ra
    ctx->pc = 0x102034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102034u;
        // 0x102038: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10203Cu;
    // 0x10203c: 0x0  nop
    ctx->pc = 0x10203cu;
    // NOP
    ctx->pc = 0x102040u;
}
