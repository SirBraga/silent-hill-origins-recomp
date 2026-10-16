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

// Function: sub_002728C8
// Address: 0x2728c8 - 0x2728f0
void sub_002728C8_0x2728c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002728C8_0x2728c8");
#endif

    switch (ctx->pc) {
        case 0x2728dcu: goto label_2728dc;
        default: break;
    }

    ctx->pc = 0x2728c8u;

    // 0x2728c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2728c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2728cc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2728ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2728d0: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x2728d0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2728d4: 0xc07defc  jal         func_1F7BF0
    ctx->pc = 0x2728D4u;
    SET_GPR_U32(ctx, 31, 0x2728DCu);
    ctx->pc = 0x2728D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2728D4u;
    // 0x2728d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7BF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7BF0u, 0x2728D4u, 0x2728DCu)) {
        return;
    }
    ctx->pc = 0x2728DCu;
label_2728dc:
    // 0x2728dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2728dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2728e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2728e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2728e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2728E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2728E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2728E4u;
        // 0x2728e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2728E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2728ECu;
    // 0x2728ec: 0x0  nop
    ctx->pc = 0x2728ecu;
    // NOP
    ctx->pc = 0x2728f0u;
}
