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

// Function: sub_002E3350
// Address: 0x2e3350 - 0x2e3378
void sub_002E3350_0x2e3350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3350_0x2e3350");
#endif

    switch (ctx->pc) {
        case 0x2e3364u: goto label_2e3364;
        default: break;
    }

    ctx->pc = 0x2e3350u;

    // 0x2e3350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3354: 0x3c040071  lui         $a0, 0x71
    ctx->pc = 0x2e3354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)113 << 16));
    // 0x2e3358: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e335c: 0xc0b77f2  jal         func_2DDFC8
    ctx->pc = 0x2E335Cu;
    SET_GPR_U32(ctx, 31, 0x2E3364u);
    ctx->pc = 0x2E3360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E335Cu;
    // 0x2e3360: 0x248482c0  addiu       $a0, $a0, -0x7D40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDFC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDFC8u, 0x2E335Cu, 0x2E3364u)) {
        return;
    }
    ctx->pc = 0x2E3364u;
label_2e3364:
    // 0x2e3364: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e3368: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2e3368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2e336c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E336Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E336Cu;
        // 0x2e3370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E336Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3374u;
    // 0x2e3374: 0x0  nop
    ctx->pc = 0x2e3374u;
    // NOP
    ctx->pc = 0x2e3378u;
}
