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

// Function: sub_001D0828
// Address: 0x1d0828 - 0x1d0880
void sub_001D0828_0x1d0828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D0828_0x1d0828");
#endif

    switch (ctx->pc) {
        case 0x1d0848u: goto label_1d0848;
        case 0x1d0860u: goto label_1d0860;
        default: break;
    }

    ctx->pc = 0x1d0828u;

    // 0x1d0828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d0828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d082c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1d082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1d0830: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1d0830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1d0834: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x1D0834u;
    {
        const bool branch_taken_0x1d0834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0834u;
        // 0x1d0838: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0834) {
            ctx->pc = 0x1D0868u;
            goto label_1d0868;
        }
    }
    ctx->pc = 0x1D083Cu;
    // 0x1d083c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1d083cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1d0840: 0xc06c994  jal         func_1B2650
    ctx->pc = 0x1D0840u;
    SET_GPR_U32(ctx, 31, 0x1D0848u);
    ctx->pc = 0x1D0844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0840u;
    // 0x1d0844: 0x24a50a00  addiu       $a1, $a1, 0xA00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2650u, 0x1D0840u, 0x1D0848u)) {
        return;
    }
    ctx->pc = 0x1D0848u;
label_1d0848:
    // 0x1d0848: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D0848u;
    {
        const bool branch_taken_0x1d0848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D084Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0848u;
        // 0x1d084c: 0x3c06001d  lui         $a2, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0848) {
            ctx->pc = 0x1D086Cu;
            goto label_1d086c;
        }
    }
    ctx->pc = 0x1D0850u;
    // 0x1d0850: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d0854: 0x24c60880  addiu       $a2, $a2, 0x880
    ctx->pc = 0x1d0854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2176));
    // 0x1d0858: 0xc06bc8a  jal         func_1AF228
    ctx->pc = 0x1D0858u;
    SET_GPR_U32(ctx, 31, 0x1D0860u);
    ctx->pc = 0x1D085Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D0858u;
    // 0x1d085c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AF228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AF228u, 0x1D0858u, 0x1D0860u)) {
        return;
    }
    ctx->pc = 0x1D0860u;
label_1d0860:
    // 0x1d0860: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D0860u;
    {
        const bool branch_taken_0x1d0860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0860u;
        // 0x1d0864: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0860) {
            ctx->pc = 0x1D0870u;
            goto label_1d0870;
        }
    }
    ctx->pc = 0x1D0868u;
label_1d0868:
    // 0x1d0868: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d086c:
    // 0x1d086c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1d086cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d0870:
    // 0x1d0870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d0870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d0874: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1d0874u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d0878: 0x3e00008  jr          $ra
    ctx->pc = 0x1D0878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D087Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D0878u;
        // 0x1d087c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D0878u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D0880u;
}
