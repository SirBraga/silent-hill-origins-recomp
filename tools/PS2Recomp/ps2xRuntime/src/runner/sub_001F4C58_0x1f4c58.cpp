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

// Function: sub_001F4C58
// Address: 0x1f4c58 - 0x1f4c80
void sub_001F4C58_0x1f4c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4C58_0x1f4c58");
#endif

    switch (ctx->pc) {
        case 0x1f4c70u: goto label_1f4c70;
        default: break;
    }

    ctx->pc = 0x1f4c58u;

    // 0x1f4c58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f4c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f4c5c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x1f4c5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4c60: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f4c60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f4c64: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1f4c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f4c68: 0xc07d420  jal         func_1F5080
    ctx->pc = 0x1F4C68u;
    SET_GPR_U32(ctx, 31, 0x1F4C70u);
    ctx->pc = 0x1F4C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4C68u;
    // 0x1f4c6c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5080u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5080u, 0x1F4C68u, 0x1F4C70u)) {
        return;
    }
    ctx->pc = 0x1F4C70u;
label_1f4c70:
    // 0x1f4c70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f4c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4c74: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4C74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4C74u;
        // 0x1f4c78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4C74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4C7Cu;
    // 0x1f4c7c: 0x0  nop
    ctx->pc = 0x1f4c7cu;
    // NOP
    ctx->pc = 0x1f4c80u;
}
