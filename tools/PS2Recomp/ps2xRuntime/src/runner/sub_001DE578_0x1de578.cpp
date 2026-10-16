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

// Function: sub_001DE578
// Address: 0x1de578 - 0x1de5a0
void sub_001DE578_0x1de578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DE578_0x1de578");
#endif

    switch (ctx->pc) {
        case 0x1de594u: goto label_1de594;
        default: break;
    }

    ctx->pc = 0x1de578u;

    // 0x1de578: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1de578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1de57c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1DE57Cu;
    {
        const bool branch_taken_0x1de57c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE57Cu;
        // 0x1de580: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de57c) {
            ctx->pc = 0x1DE594u;
            goto label_1de594;
        }
    }
    ctx->pc = 0x1DE584u;
    // 0x1de584: 0x3c05001e  lui         $a1, 0x1E
    ctx->pc = 0x1de584u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)30 << 16));
    // 0x1de588: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de588u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1de58c: 0xc09545a  jal         func_255168
    ctx->pc = 0x1DE58Cu;
    SET_GPR_U32(ctx, 31, 0x1DE594u);
    ctx->pc = 0x1DE590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DE58Cu;
    // 0x1de590: 0x24a5e700  addiu       $a1, $a1, -0x1900 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960896));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x1DE58Cu, 0x1DE594u)) {
        return;
    }
    ctx->pc = 0x1DE594u;
label_1de594:
    // 0x1de594: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1de594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1de598: 0x3e00008  jr          $ra
    ctx->pc = 0x1DE598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DE59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DE598u;
        // 0x1de59c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DE598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DE5A0u;
}
