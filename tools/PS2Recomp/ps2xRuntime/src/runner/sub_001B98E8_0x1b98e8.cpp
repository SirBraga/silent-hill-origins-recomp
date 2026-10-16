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

// Function: sub_001B98E8
// Address: 0x1b98e8 - 0x1b9930
void sub_001B98E8_0x1b98e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B98E8_0x1b98e8");
#endif

    switch (ctx->pc) {
        case 0x1b9908u: goto label_1b9908;
        default: break;
    }

    ctx->pc = 0x1b98e8u;

    // 0x1b98e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b98e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b98ec: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b98ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1b98f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b98f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98f4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1b98f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b98f8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B98F8u;
    {
        const bool branch_taken_0x1b98f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B98FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B98F8u;
        // 0x1b98fc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b98f8) {
            ctx->pc = 0x1B991Cu;
            goto label_1b991c;
        }
    }
    ctx->pc = 0x1B9900u;
    // 0x1b9900: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x1B9900u;
    SET_GPR_U32(ctx, 31, 0x1B9908u);
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x1B9900u, 0x1B9908u)) {
        return;
    }
    ctx->pc = 0x1B9908u;
label_1b9908:
    // 0x1b9908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9908u;
    {
        const bool branch_taken_0x1b9908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b9908) {
            ctx->pc = 0x1B990Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B9908u;
            // 0x1b990c: 0xae000268  sw          $zero, 0x268($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B9920u;
            goto label_1b9920;
        }
    }
    ctx->pc = 0x1B9910u;
    // 0x1b9910: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b9910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b9914: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9914u;
    {
        const bool branch_taken_0x1b9914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9914u;
        // 0x1b9918: 0xae020268  sw          $v0, 0x268($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9914) {
            ctx->pc = 0x1B9920u;
            goto label_1b9920;
        }
    }
    ctx->pc = 0x1B991Cu;
label_1b991c:
    // 0x1b991c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1b991cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1b9920:
    // 0x1b9920: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b9920u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b9924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b9924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9928: 0x3e00008  jr          $ra
    ctx->pc = 0x1B9928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B992Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B9928u;
        // 0x1b992c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B9928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B9930u;
}
