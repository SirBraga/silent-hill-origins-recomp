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

// Function: sub_0017D318
// Address: 0x17d318 - 0x17d338
void sub_0017D318_0x17d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D318_0x17d318");
#endif

    switch (ctx->pc) {
        case 0x17d32cu: goto label_17d32c;
        default: break;
    }

    ctx->pc = 0x17d318u;

    // 0x17d318: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d31c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d320: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d324: 0xc05f416  jal         func_17D058
    ctx->pc = 0x17D324u;
    SET_GPR_U32(ctx, 31, 0x17D32Cu);
    ctx->pc = 0x17D328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D324u;
    // 0x17d328: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17D058u, 0x17D324u, 0x17D32Cu)) {
        return;
    }
    ctx->pc = 0x17D32Cu;
label_17d32c:
    // 0x17d32c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d32cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d330: 0x3e00008  jr          $ra
    ctx->pc = 0x17D330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D330u;
        // 0x17d334: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D330u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D338u;
}
