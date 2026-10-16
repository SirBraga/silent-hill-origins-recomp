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

// Function: sub_0017D038
// Address: 0x17d038 - 0x17d058
void sub_0017D038_0x17d038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D038_0x17d038");
#endif

    switch (ctx->pc) {
        case 0x17d04cu: goto label_17d04c;
        default: break;
    }

    ctx->pc = 0x17d038u;

    // 0x17d038: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d03c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17d03cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17d040: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d044: 0xc05f344  jal         func_17CD10
    ctx->pc = 0x17D044u;
    SET_GPR_U32(ctx, 31, 0x17D04Cu);
    ctx->pc = 0x17D048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D044u;
    // 0x17d048: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17CD10u, 0x17D044u, 0x17D04Cu)) {
        return;
    }
    ctx->pc = 0x17D04Cu;
label_17d04c:
    // 0x17d04c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d050: 0x3e00008  jr          $ra
    ctx->pc = 0x17D050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D050u;
        // 0x17d054: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D058u;
}
