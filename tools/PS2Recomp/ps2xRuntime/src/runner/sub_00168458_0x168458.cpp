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

// Function: sub_00168458
// Address: 0x168458 - 0x168480
void sub_00168458_0x168458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00168458_0x168458");
#endif

    switch (ctx->pc) {
        case 0x168474u: goto label_168474;
        default: break;
    }

    ctx->pc = 0x168458u;

    // 0x168458: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x168458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x16845c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16845cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x168460: 0x8c4486a0  lw          $a0, -0x7960($v0)
    ctx->pc = 0x168460u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3386A0u));
    // 0x168464: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x168464u;
    {
        const bool branch_taken_0x168464 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x168468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168464u;
        // 0x168468: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168464) {
            ctx->pc = 0x168474u;
            goto label_168474;
        }
    }
    ctx->pc = 0x16846Cu;
    // 0x16846c: 0xc059d9a  jal         func_167668
    ctx->pc = 0x16846Cu;
    SET_GPR_U32(ctx, 31, 0x168474u);
    ctx->pc = 0x167668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167668u, 0x16846Cu, 0x168474u)) {
        return;
    }
    ctx->pc = 0x168474u;
label_168474:
    // 0x168474: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x168474u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x168478: 0x3e00008  jr          $ra
    ctx->pc = 0x168478u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16847Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168478u;
        // 0x16847c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168478u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x168480u;
}
