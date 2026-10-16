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

// Function: sub_001063B8
// Address: 0x1063b8 - 0x106448
void sub_001063B8_0x1063b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001063B8_0x1063b8");
#endif

    switch (ctx->pc) {
        case 0x1063f0u: goto label_1063f0;
        case 0x106404u: goto label_106404;
        case 0x106420u: goto label_106420;
        default: break;
    }

    ctx->pc = 0x1063b8u;

    // 0x1063b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1063b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1063bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1063bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1063c0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1063c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1063c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1063c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063c8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1063c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1063cc: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x1063ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x1063d0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1063d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1063d4: 0x24110009  addiu       $s1, $zero, 0x9
    ctx->pc = 0x1063d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x1063d8: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1063d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1063dc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1063dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1063e0: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1063e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1063e4: 0x24140004  addiu       $s4, $zero, 0x4
    ctx->pc = 0x1063e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1063e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1063e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1063ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1063ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1063f0:
    // 0x1063f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1063f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1063f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1063f8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x1063f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1063fc: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1063FCu;
    SET_GPR_U32(ctx, 31, 0x106404u);
    ctx->pc = 0x106400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1063FCu;
    // 0x106400: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1063FCu, 0x106404u)) {
        return;
    }
    ctx->pc = 0x106404u;
label_106404:
    // 0x106404: 0xae140068  sw          $s4, 0x68($s0)
    ctx->pc = 0x106404u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 104), GPR_U32(ctx, 20));
    // 0x106408: 0xae120074  sw          $s2, 0x74($s0)
    ctx->pc = 0x106408u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 18));
    // 0x10640c: 0x1632fff8  bne         $s1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x10640Cu;
    {
        const bool branch_taken_0x10640c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x106410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10640Cu;
        // 0x106410: 0x26100078  addiu       $s0, $s0, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10640c) {
            ctx->pc = 0x1063F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1063f0;
        }
    }
    ctx->pc = 0x106414u;
    // 0x106414: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x106414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106418: 0xc041912  jal         func_106448
    ctx->pc = 0x106418u;
    SET_GPR_U32(ctx, 31, 0x106420u);
    ctx->pc = 0x10641Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106418u;
    // 0x10641c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106448u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x106448u, 0x106418u, 0x106420u)) {
        return;
    }
    ctx->pc = 0x106420u;
label_106420:
    // 0x106420: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x106420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106424: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x106424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106428: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x106428u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x10642c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x10642cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x106430: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x106430u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106434: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x106434u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106438: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x106438u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10643c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10643cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x106440: 0x3e00008  jr          $ra
    ctx->pc = 0x106440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x106444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106440u;
        // 0x106444: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x106440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x106448u;
}
