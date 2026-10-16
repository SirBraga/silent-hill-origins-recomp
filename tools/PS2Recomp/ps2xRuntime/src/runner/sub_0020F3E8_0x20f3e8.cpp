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

// Function: sub_0020F3E8
// Address: 0x20f3e8 - 0x20f408
void sub_0020F3E8_0x20f3e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020F3E8_0x20f3e8");
#endif

    switch (ctx->pc) {
        case 0x20f3f8u: goto label_20f3f8;
        default: break;
    }

    ctx->pc = 0x20f3e8u;

    // 0x20f3e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x20f3e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20f3ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20f3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20f3f0: 0xc081af6  jal         func_206BD8
    ctx->pc = 0x20F3F0u;
    SET_GPR_U32(ctx, 31, 0x20F3F8u);
    ctx->pc = 0x20F3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F3F0u;
    // 0x20f3f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206BD8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206BD8u, 0x20F3F0u, 0x20F3F8u)) {
        return;
    }
    ctx->pc = 0x20F3F8u;
label_20f3f8:
    // 0x20f3f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20f3f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f3fc: 0x3e00008  jr          $ra
    ctx->pc = 0x20F3FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F3FCu;
        // 0x20f400: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F3FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F404u;
    // 0x20f404: 0x0  nop
    ctx->pc = 0x20f404u;
    // NOP
    ctx->pc = 0x20f408u;
}
