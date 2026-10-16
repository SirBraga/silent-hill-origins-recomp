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

// Function: sub_00104300
// Address: 0x104300 - 0x104320
void sub_00104300_0x104300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00104300_0x104300");
#endif

    switch (ctx->pc) {
        case 0x104314u: goto label_104314;
        default: break;
    }

    ctx->pc = 0x104300u;

    // 0x104300: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x104300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x104304: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x104304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x104308: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x104308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10430c: 0xc041052  jal         func_104148
    ctx->pc = 0x10430Cu;
    SET_GPR_U32(ctx, 31, 0x104314u);
    ctx->pc = 0x104310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10430Cu;
    // 0x104310: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x104148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x104148u, 0x10430Cu, 0x104314u)) {
        return;
    }
    ctx->pc = 0x104314u;
label_104314:
    // 0x104314: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x104314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x104318: 0x3e00008  jr          $ra
    ctx->pc = 0x104318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10431Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x104318u;
        // 0x10431c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x104318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x104320u;
}
