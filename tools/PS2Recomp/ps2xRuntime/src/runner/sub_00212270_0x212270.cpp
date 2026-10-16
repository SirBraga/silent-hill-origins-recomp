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

// Function: sub_00212270
// Address: 0x212270 - 0x212290
void sub_00212270_0x212270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00212270_0x212270");
#endif

    switch (ctx->pc) {
        case 0x212284u: goto label_212284;
        default: break;
    }

    ctx->pc = 0x212270u;

    // 0x212270: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x212270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x212274: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x212274u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212278: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x212278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21227c: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x21227Cu;
    SET_GPR_U32(ctx, 31, 0x212284u);
    ctx->pc = 0x212280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21227Cu;
    // 0x212280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x21227Cu, 0x212284u)) {
        return;
    }
    ctx->pc = 0x212284u;
label_212284:
    // 0x212284: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x212284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212288: 0x3e00008  jr          $ra
    ctx->pc = 0x212288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21228Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x212288u;
        // 0x21228c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x212288u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x212290u;
}
