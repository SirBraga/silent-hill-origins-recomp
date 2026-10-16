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

// Function: sub_0025E000
// Address: 0x25e000 - 0x25e020
void sub_0025E000_0x25e000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025E000_0x25e000");
#endif

    switch (ctx->pc) {
        case 0x25e010u: goto label_25e010;
        default: break;
    }

    ctx->pc = 0x25e000u;

    // 0x25e000: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25e000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25e004: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25e004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25e008: 0xc097e08  jal         func_25F820
    ctx->pc = 0x25E008u;
    SET_GPR_U32(ctx, 31, 0x25E010u);
    ctx->pc = 0x25E00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25E008u;
    // 0x25e00c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25F820u, 0x25E008u, 0x25E010u)) {
        return;
    }
    ctx->pc = 0x25E010u;
label_25e010:
    // 0x25e010: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25e010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e014: 0x3e00008  jr          $ra
    ctx->pc = 0x25E014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25E018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25E014u;
        // 0x25e018: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E01Cu;
    // 0x25e01c: 0x0  nop
    ctx->pc = 0x25e01cu;
    // NOP
    ctx->pc = 0x25e020u;
}
