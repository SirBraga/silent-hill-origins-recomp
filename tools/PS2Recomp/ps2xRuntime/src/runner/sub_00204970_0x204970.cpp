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

// Function: sub_00204970
// Address: 0x204970 - 0x2049a0
void sub_00204970_0x204970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00204970_0x204970");
#endif

    switch (ctx->pc) {
        case 0x204994u: goto label_204994;
        default: break;
    }

    ctx->pc = 0x204970u;

label_204970:
    // 0x204970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x204974: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x204974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x204978: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x20497c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x20497cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x204980: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x204984: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x204984u;
    {
        const bool branch_taken_0x204984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204984u;
        // 0x204988: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204984) {
            ctx->pc = 0x204994u;
            goto label_204994;
        }
    }
    ctx->pc = 0x20498Cu;
    // 0x20498c: 0xc08125c  jal         func_204970
    ctx->pc = 0x20498Cu;
    SET_GPR_U32(ctx, 31, 0x204994u);
    ctx->pc = 0x204990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20498Cu;
    // 0x204990: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204970u;
    goto label_204970;
    ctx->pc = 0x204994u;
label_204994:
    // 0x204994: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x204994u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204998: 0x3e00008  jr          $ra
    ctx->pc = 0x204998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20499Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x204998u;
        // 0x20499c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x204998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049A0u;
}
