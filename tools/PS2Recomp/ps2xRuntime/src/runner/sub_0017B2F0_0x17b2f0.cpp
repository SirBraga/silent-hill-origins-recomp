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

// Function: sub_0017B2F0
// Address: 0x17b2f0 - 0x17b320
void sub_0017B2F0_0x17b2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B2F0_0x17b2f0");
#endif

    switch (ctx->pc) {
        case 0x17b310u: goto label_17b310;
        default: break;
    }

    ctx->pc = 0x17b2f0u;

    // 0x17b2f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b2f4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17b2f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b2f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17b2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17b2fc: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x17b2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x17b300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17b300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b304: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17b304u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17b308: 0xc05e6c8  jal         func_179B20
    ctx->pc = 0x17B308u;
    SET_GPR_U32(ctx, 31, 0x17B310u);
    ctx->pc = 0x17B30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17B308u;
    // 0x17b30c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17B308u, 0x17B310u)) {
        return;
    }
    ctx->pc = 0x17B310u;
label_17b310:
    // 0x17b310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17b314: 0x3e00008  jr          $ra
    ctx->pc = 0x17B314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B314u;
        // 0x17b318: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B31Cu;
    // 0x17b31c: 0x0  nop
    ctx->pc = 0x17b31cu;
    // NOP
    ctx->pc = 0x17b320u;
}
