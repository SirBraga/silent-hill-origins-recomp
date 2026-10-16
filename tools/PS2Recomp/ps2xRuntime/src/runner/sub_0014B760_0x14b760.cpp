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

// Function: sub_0014B760
// Address: 0x14b760 - 0x14b798
void sub_0014B760_0x14b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014B760_0x14b760");
#endif

    switch (ctx->pc) {
        case 0x14b784u: goto label_14b784;
        default: break;
    }

    ctx->pc = 0x14b760u;

    // 0x14b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x14b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14b764: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14b768: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14b768u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14b76c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x14b76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14b770: 0x8e040068  lw          $a0, 0x68($s0)
    ctx->pc = 0x14b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x14b774: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x14B774u;
    {
        const bool branch_taken_0x14b774 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b774) {
            ctx->pc = 0x14B778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14B774u;
            // 0x14b778: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B78Cu;
            goto label_14b78c;
        }
    }
    ctx->pc = 0x14B77Cu;
    // 0x14b77c: 0xc07f210  jal         func_1FC840
    ctx->pc = 0x14B77Cu;
    SET_GPR_U32(ctx, 31, 0x14B784u);
    ctx->pc = 0x14B780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B77Cu;
    // 0x14b780: 0x24840044  addiu       $a0, $a0, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC840u, 0x14B77Cu, 0x14B784u)) {
        return;
    }
    ctx->pc = 0x14B784u;
label_14b784:
    // 0x14b784: 0xae000068  sw          $zero, 0x68($s0)
    ctx->pc = 0x14b784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 0));
    // 0x14b788: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14b788u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14b78c:
    // 0x14b78c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b78cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14b790: 0x3e00008  jr          $ra
    ctx->pc = 0x14B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B790u;
        // 0x14b794: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B790u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14B798u;
}
