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

// Function: sub_00162510
// Address: 0x162510 - 0x162530
void sub_00162510_0x162510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162510_0x162510");
#endif

    switch (ctx->pc) {
        case 0x162524u: goto label_162524;
        default: break;
    }

    ctx->pc = 0x162510u;

    // 0x162510: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162514: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x162514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x162518: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x162518u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16251c: 0xc0588aa  jal         func_1622A8
    ctx->pc = 0x16251Cu;
    SET_GPR_U32(ctx, 31, 0x162524u);
    ctx->pc = 0x162520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16251Cu;
    // 0x162520: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1622A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1622A8u, 0x16251Cu, 0x162524u)) {
        return;
    }
    ctx->pc = 0x162524u;
label_162524:
    // 0x162524: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162524u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162528: 0x3e00008  jr          $ra
    ctx->pc = 0x162528u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16252Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x162528u;
        // 0x16252c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x162528u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x162530u;
}
