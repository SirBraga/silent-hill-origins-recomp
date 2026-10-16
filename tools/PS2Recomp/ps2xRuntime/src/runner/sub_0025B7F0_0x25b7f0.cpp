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

// Function: sub_0025B7F0
// Address: 0x25b7f0 - 0x25b828
void sub_0025B7F0_0x25b7f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B7F0_0x25b7f0");
#endif

    switch (ctx->pc) {
        case 0x25b81cu: goto label_25b81c;
        default: break;
    }

    ctx->pc = 0x25b7f0u;

    // 0x25b7f0: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x25b7f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7f4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b7f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b7f8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x25b7f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b7fc: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x25b7fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b800: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b804: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25b804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x25b808: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b808u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b80c: 0x24441280  addiu       $a0, $v0, 0x1280
    ctx->pc = 0x25b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4736));
    // 0x25b810: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x25b810u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b814: 0xc0936dc  jal         func_24DB70
    ctx->pc = 0x25B814u;
    SET_GPR_U32(ctx, 31, 0x25B81Cu);
    ctx->pc = 0x25B818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B814u;
    // 0x25b818: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DB70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DB70u, 0x25B814u, 0x25B81Cu)) {
        return;
    }
    ctx->pc = 0x25B81Cu;
label_25b81c:
    // 0x25b81c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b81cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b820: 0x3e00008  jr          $ra
    ctx->pc = 0x25B820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B820u;
        // 0x25b824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B828u;
}
