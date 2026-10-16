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

// Function: sub_0025B850
// Address: 0x25b850 - 0x25b880
void sub_0025B850_0x25b850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025B850_0x25b850");
#endif

    switch (ctx->pc) {
        case 0x25b86cu: goto label_25b86c;
        default: break;
    }

    ctx->pc = 0x25b850u;

    // 0x25b850: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x25b850u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b854: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25b854u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25b858: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x25b858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b85c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x25b85cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x25b860: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25b860u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25b864: 0xc0936fa  jal         func_24DBE8
    ctx->pc = 0x25B864u;
    SET_GPR_U32(ctx, 31, 0x25B86Cu);
    ctx->pc = 0x25B868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25B864u;
    // 0x25b868: 0x24441280  addiu       $a0, $v0, 0x1280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4736));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24DBE8u, 0x25B864u, 0x25B86Cu)) {
        return;
    }
    ctx->pc = 0x25B86Cu;
label_25b86c:
    // 0x25b86c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25b86cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b870: 0x3e00008  jr          $ra
    ctx->pc = 0x25B870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25B870u;
        // 0x25b874: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25B870u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25B878u;
    // 0x25b878: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x25b878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x25b87c: 0x0  nop
    ctx->pc = 0x25b87cu;
    // NOP
    ctx->pc = 0x25b880u;
}
