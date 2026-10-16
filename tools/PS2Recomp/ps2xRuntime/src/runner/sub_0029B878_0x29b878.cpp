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

// Function: sub_0029B878
// Address: 0x29b878 - 0x29b898
void sub_0029B878_0x29b878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B878_0x29b878");
#endif

    switch (ctx->pc) {
        case 0x29b88cu: goto label_29b88c;
        default: break;
    }

    ctx->pc = 0x29b878u;

    // 0x29b878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x29b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x29b87c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x29b87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x29b880: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29b880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29b884: 0xc0a744c  jal         func_29D130
    ctx->pc = 0x29B884u;
    SET_GPR_U32(ctx, 31, 0x29B88Cu);
    ctx->pc = 0x29B888u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29B884u;
    // 0x29b888: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29D130u, 0x29B884u, 0x29B88Cu)) {
        return;
    }
    ctx->pc = 0x29B88Cu;
label_29b88c:
    // 0x29b88c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29b890: 0x3e00008  jr          $ra
    ctx->pc = 0x29B890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29B894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29B890u;
        // 0x29b894: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29B890u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29B898u;
}
