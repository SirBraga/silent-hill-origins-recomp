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

// Function: sub_002049A0
// Address: 0x2049a0 - 0x2049d0
void sub_002049A0_0x2049a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002049A0_0x2049a0");
#endif

    switch (ctx->pc) {
        case 0x2049c4u: goto label_2049c4;
        default: break;
    }

    ctx->pc = 0x2049a0u;

label_2049a0:
    // 0x2049a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2049a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2049a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2049a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2049a8: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x2049ac: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x2049acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2049b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2049b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2049B4u;
    {
        const bool branch_taken_0x2049b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049B4u;
        // 0x2049b8: 0xac82001c  sw          $v0, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049b4) {
            ctx->pc = 0x2049C4u;
            goto label_2049c4;
        }
    }
    ctx->pc = 0x2049BCu;
    // 0x2049bc: 0xc081268  jal         func_2049A0
    ctx->pc = 0x2049BCu;
    SET_GPR_U32(ctx, 31, 0x2049C4u);
    ctx->pc = 0x2049C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2049BCu;
    // 0x2049c0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049A0u;
    goto label_2049a0;
    ctx->pc = 0x2049C4u;
label_2049c4:
    // 0x2049c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2049c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2049c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2049C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2049CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2049C8u;
        // 0x2049cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2049C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2049D0u;
}
