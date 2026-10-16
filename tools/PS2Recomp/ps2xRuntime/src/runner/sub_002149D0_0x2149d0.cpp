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

// Function: sub_002149D0
// Address: 0x2149d0 - 0x2149f0
void sub_002149D0_0x2149d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002149D0_0x2149d0");
#endif

    switch (ctx->pc) {
        case 0x2149e0u: goto label_2149e0;
        default: break;
    }

    ctx->pc = 0x2149d0u;

    // 0x2149d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2149d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2149d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2149d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2149d8: 0xc0c5486  jal         func_315218
    ctx->pc = 0x2149D8u;
    SET_GPR_U32(ctx, 31, 0x2149E0u);
    ctx->pc = 0x2149DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2149D8u;
    // 0x2149dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x2149D8u, 0x2149E0u)) {
        return;
    }
    ctx->pc = 0x2149E0u;
label_2149e0:
    // 0x2149e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2149e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2149e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2149E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2149E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2149E4u;
        // 0x2149e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2149E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2149ECu;
    // 0x2149ec: 0x0  nop
    ctx->pc = 0x2149ecu;
    // NOP
    ctx->pc = 0x2149f0u;
}
