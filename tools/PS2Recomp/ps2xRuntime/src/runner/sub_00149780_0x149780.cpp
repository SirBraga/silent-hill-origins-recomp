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

// Function: sub_00149780
// Address: 0x149780 - 0x1497a0
void sub_00149780_0x149780(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00149780_0x149780");
#endif

    switch (ctx->pc) {
        case 0x149790u: goto label_149790;
        default: break;
    }

    ctx->pc = 0x149780u;

    // 0x149780: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x149780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x149784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x149784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x149788: 0xc04f0bc  jal         func_13C2F0
    ctx->pc = 0x149788u;
    SET_GPR_U32(ctx, 31, 0x149790u);
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x149788u, 0x149790u)) {
        return;
    }
    ctx->pc = 0x149790u;
label_149790:
    // 0x149790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x149790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x149794: 0x3e00008  jr          $ra
    ctx->pc = 0x149794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x149794u;
        // 0x149798: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x149794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14979Cu;
    // 0x14979c: 0x0  nop
    ctx->pc = 0x14979cu;
    // NOP
    ctx->pc = 0x1497a0u;
}
