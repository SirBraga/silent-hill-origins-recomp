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

// Function: sub_002DF450
// Address: 0x2df450 - 0x2df480
void sub_002DF450_0x2df450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DF450_0x2df450");
#endif

    switch (ctx->pc) {
        case 0x2df464u: goto label_2df464;
        default: break;
    }

    ctx->pc = 0x2df450u;

    // 0x2df450: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2df450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2df454: 0x10850005  beq         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DF454u;
    {
        const bool branch_taken_0x2df454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x2DF458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF454u;
        // 0x2df458: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df454) {
            ctx->pc = 0x2DF46Cu;
            goto label_2df46c;
        }
    }
    ctx->pc = 0x2DF45Cu;
    // 0x2df45c: 0xc0c48d9  jal         func_312364
    ctx->pc = 0x2DF45Cu;
    SET_GPR_U32(ctx, 31, 0x2DF464u);
    ctx->pc = 0x2DF460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DF45Cu;
    // 0x2df460: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312364u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312364u, 0x2DF45Cu, 0x2DF464u)) {
        return;
    }
    ctx->pc = 0x2DF464u;
label_2df464:
    // 0x2df464: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2DF464u;
    {
        const bool branch_taken_0x2df464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DF468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF464u;
        // 0x2df468: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2df464) {
            ctx->pc = 0x2DF474u;
            goto label_2df474;
        }
    }
    ctx->pc = 0x2DF46Cu;
label_2df46c:
    // 0x2df46c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2df46cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2df470: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2df470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2df474:
    // 0x2df474: 0x3e00008  jr          $ra
    ctx->pc = 0x2DF474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DF478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DF474u;
        // 0x2df478: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DF474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DF47Cu;
    // 0x2df47c: 0x0  nop
    ctx->pc = 0x2df47cu;
    // NOP
    ctx->pc = 0x2df480u;
}
