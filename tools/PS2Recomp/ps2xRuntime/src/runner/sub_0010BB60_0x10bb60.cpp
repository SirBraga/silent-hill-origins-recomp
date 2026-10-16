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

// Function: sub_0010BB60
// Address: 0x10bb60 - 0x10bb88
void sub_0010BB60_0x10bb60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010BB60_0x10bb60");
#endif

    switch (ctx->pc) {
        case 0x10bb74u: goto label_10bb74;
        default: break;
    }

    ctx->pc = 0x10bb60u;

    // 0x10bb60: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10bb60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10bb64: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x10bb64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10bb68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10bb6c: 0xc042e3c  jal         func_10B8F0
    ctx->pc = 0x10BB6Cu;
    SET_GPR_U32(ctx, 31, 0x10BB74u);
    ctx->pc = 0x10BB70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10BB6Cu;
    // 0x10bb70: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10B8F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10B8F0u, 0x10BB6Cu, 0x10BB74u)) {
        return;
    }
    ctx->pc = 0x10BB74u;
label_10bb74:
    // 0x10bb74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10bb74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10bb78: 0x3e00008  jr          $ra
    ctx->pc = 0x10BB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10BB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10BB78u;
        // 0x10bb7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10BB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10BB80u;
    // 0x10bb80: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x10bb80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x10bb84: 0x0  nop
    ctx->pc = 0x10bb84u;
    // NOP
    ctx->pc = 0x10bb88u;
}
