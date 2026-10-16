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

// Function: sub_002E3520
// Address: 0x2e3520 - 0x2e3568
void sub_002E3520_0x2e3520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E3520_0x2e3520");
#endif

    switch (ctx->pc) {
        case 0x2e3530u: goto label_2e3530;
        default: break;
    }

    ctx->pc = 0x2e3520u;

    // 0x2e3520: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e3520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e3524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e3524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e3528: 0xc0b8d5a  jal         func_2E3568
    ctx->pc = 0x2E3528u;
    SET_GPR_U32(ctx, 31, 0x2E3530u);
    ctx->pc = 0x2E3568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E3568u, 0x2E3528u, 0x2E3530u)) {
        return;
    }
    ctx->pc = 0x2E3530u;
label_2e3530:
    // 0x2e3530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2e3530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3534: 0x9f849060  lwu         $a0, -0x6FA0($gp)
    ctx->pc = 0x2e3534u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294938720)));
    // 0x2e3538: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2e3538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2e353c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2e353cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2e3540: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x2e3540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2e3544: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2E3544u;
    {
        const bool branch_taken_0x2e3544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e3544) {
            ctx->pc = 0x2E3548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E3544u;
            // 0x2e3548: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E354Cu;
            goto label_2e354c;
        }
    }
    ctx->pc = 0x2E354Cu;
label_2e354c:
    // 0x2e354c: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2e354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2e3550: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2e3550u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2e3554: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2e3554u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e3558: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e3558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e355c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2e355cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e3560: 0x3e00008  jr          $ra
    ctx->pc = 0x2E3560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E3564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E3560u;
        // 0x2e3564: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E3560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E3568u;
}
