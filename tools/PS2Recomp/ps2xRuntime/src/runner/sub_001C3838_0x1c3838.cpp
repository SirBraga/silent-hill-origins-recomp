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

// Function: sub_001C3838
// Address: 0x1c3838 - 0x1c38a8
void sub_001C3838_0x1c3838(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3838_0x1c3838");
#endif

    switch (ctx->pc) {
        case 0x1c3860u: goto label_1c3860;
        case 0x1c3878u: goto label_1c3878;
        case 0x1c3884u: goto label_1c3884;
        default: break;
    }

    ctx->pc = 0x1c3838u;

    // 0x1c3838: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1c3838u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1c383c: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x1c383cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1c3840: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1c3840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1c3844: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1c3844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1c3848: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1c3848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c384c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c384cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3850: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c3850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c3854: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3858: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C3858u;
    SET_GPR_U32(ctx, 31, 0x1C3860u);
    ctx->pc = 0x1C385Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3858u;
    // 0x1c385c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C3858u, 0x1C3860u)) {
        return;
    }
    ctx->pc = 0x1C3860u;
label_1c3860:
    // 0x1c3860: 0x8e260260  lw          $a2, 0x260($s1)
    ctx->pc = 0x1c3860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 608)));
    // 0x1c3864: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c3868: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x1c3868u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1c386c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c386cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3870: 0xc0c4fc4  jal         func_313F10
    ctx->pc = 0x1C3870u;
    SET_GPR_U32(ctx, 31, 0x1C3878u);
    ctx->pc = 0x1C3874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3870u;
    // 0x1c3874: 0x24a5e088  addiu       $a1, $a1, -0x1F78 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313F10u, 0x1C3870u, 0x1C3878u)) {
        return;
    }
    ctx->pc = 0x1C3878u;
label_1c3878:
    // 0x1c3878: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c3878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c387c: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C387Cu;
    SET_GPR_U32(ctx, 31, 0x1C3884u);
    ctx->pc = 0x1C3880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C387Cu;
    // 0x1c3880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C387Cu, 0x1C3884u)) {
        return;
    }
    ctx->pc = 0x1C3884u;
label_1c3884:
    // 0x1c3884: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1c3888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c388c: 0x2032018  mult        $a0, $s0, $v1
    ctx->pc = 0x1c388cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1c3890: 0x918021  addu        $s0, $a0, $s1
    ctx->pc = 0x1c3890u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1c3894: 0xae02029c  sw          $v0, 0x29C($s0)
    ctx->pc = 0x1c3894u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 668), GPR_U32(ctx, 2));
    // 0x1c3898: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1c3898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c389c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1c389cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c38a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1C38A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C38A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C38A0u;
        // 0x1c38a4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C38A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C38A8u;
}
