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

// Function: sub_00225798
// Address: 0x225798 - 0x2257d8
void sub_00225798_0x225798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225798_0x225798");
#endif

    switch (ctx->pc) {
        case 0x2257c8u: goto label_2257c8;
        default: break;
    }

    ctx->pc = 0x225798u;

    // 0x225798: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x225798u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22579c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x22579cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257a0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x2257a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257a4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2257a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2257a8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2257a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257ac: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x2257acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257b0: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x2257b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x2257b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2257b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2257b8: 0x244402e8  addiu       $a0, $v0, 0x2E8
    ctx->pc = 0x2257b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 744));
    // 0x2257bc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2257bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2257c0: 0xc09389e  jal         func_24E278
    ctx->pc = 0x2257C0u;
    SET_GPR_U32(ctx, 31, 0x2257C8u);
    ctx->pc = 0x2257C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2257C0u;
    // 0x2257c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E278u, 0x2257C0u, 0x2257C8u)) {
        return;
    }
    ctx->pc = 0x2257C8u;
label_2257c8:
    // 0x2257c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2257c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2257cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2257CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2257D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2257CCu;
        // 0x2257d0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2257CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2257D4u;
    // 0x2257d4: 0x0  nop
    ctx->pc = 0x2257d4u;
    // NOP
    ctx->pc = 0x2257d8u;
}
