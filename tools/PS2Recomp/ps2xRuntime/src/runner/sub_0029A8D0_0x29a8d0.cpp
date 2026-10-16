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

// Function: sub_0029A8D0
// Address: 0x29a8d0 - 0x29a900
void sub_0029A8D0_0x29a8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029A8D0_0x29a8d0");
#endif

    switch (ctx->pc) {
        case 0x29a8e4u: goto label_29a8e4;
        case 0x29a8f0u: goto label_29a8f0;
        default: break;
    }

    ctx->pc = 0x29a8d0u;

    // 0x29a8d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x29a8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29a8d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a8d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a8d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x29a8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x29a8dc: 0xc07e054  jal         func_1F8150
    ctx->pc = 0x29A8DCu;
    SET_GPR_U32(ctx, 31, 0x29A8E4u);
    ctx->pc = 0x29A8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8DCu;
    // 0x29a8e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x29A8DCu, 0x29A8E4u)) {
        return;
    }
    ctx->pc = 0x29A8E4u;
label_29a8e4:
    // 0x29a8e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29a8e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a8e8: 0xc0a644c  jal         func_299130
    ctx->pc = 0x29A8E8u;
    SET_GPR_U32(ctx, 31, 0x29A8F0u);
    ctx->pc = 0x29A8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29A8E8u;
    // 0x29a8ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299130u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299130u, 0x29A8E8u, 0x29A8F0u)) {
        return;
    }
    ctx->pc = 0x29A8F0u;
label_29a8f0:
    // 0x29a8f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x29a8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a8f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a8f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a8f8: 0x3e00008  jr          $ra
    ctx->pc = 0x29A8F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29A8F8u;
        // 0x29a8fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29A8F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29A900u;
}
