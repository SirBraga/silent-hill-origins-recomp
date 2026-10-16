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

// Function: sub_0013D990
// Address: 0x13d990 - 0x13d9b0
void sub_0013D990_0x13d990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D990_0x13d990");
#endif

    switch (ctx->pc) {
        case 0x13d9a4u: goto label_13d9a4;
        default: break;
    }

    ctx->pc = 0x13d990u;

    // 0x13d990: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x13d990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x13d994: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13d994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d998: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d99c: 0xc04f5d0  jal         func_13D740
    ctx->pc = 0x13D99Cu;
    SET_GPR_U32(ctx, 31, 0x13D9A4u);
    ctx->pc = 0x13D9A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13D99Cu;
    // 0x13d9a0: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D740u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13D740u, 0x13D99Cu, 0x13D9A4u)) {
        return;
    }
    ctx->pc = 0x13D9A4u;
label_13d9a4:
    // 0x13d9a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d9a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x13D9A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13D9A8u;
        // 0x13d9ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D9A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D9B0u;
}
