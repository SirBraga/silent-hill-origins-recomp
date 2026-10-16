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

// Function: sub_00105848
// Address: 0x105848 - 0x1058a0
void sub_00105848_0x105848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105848_0x105848");
#endif

    switch (ctx->pc) {
        case 0x105874u: goto label_105874;
        case 0x105888u: goto label_105888;
        default: break;
    }

    ctx->pc = 0x105848u;

    // 0x105848: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x105848u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10584c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10584cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x105850: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x105850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x105854: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105854u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105858: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x105858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10585c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10585cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105860: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x105860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x105864: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x105864u;
    {
        const bool branch_taken_0x105864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x105864) {
            ctx->pc = 0x105874u;
            goto label_105874;
        }
    }
    ctx->pc = 0x10586Cu;
    // 0x10586c: 0xc041640  jal         func_105900
    ctx->pc = 0x10586Cu;
    SET_GPR_U32(ctx, 31, 0x105874u);
    ctx->pc = 0x105900u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x105900u, 0x10586Cu, 0x105874u)) {
        return;
    }
    ctx->pc = 0x105874u;
label_105874:
    // 0x105874: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x105874u;
    {
        const bool branch_taken_0x105874 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x105878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105874u;
        // 0x105878: 0xae110024  sw          $s1, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105874) {
            ctx->pc = 0x105888u;
            goto label_105888;
        }
    }
    ctx->pc = 0x10587Cu;
    // 0x10587c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105880: 0xc041174  jal         func_1045D0
    ctx->pc = 0x105880u;
    SET_GPR_U32(ctx, 31, 0x105888u);
    ctx->pc = 0x105884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x105880u;
    // 0x105884: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1045D0u, 0x105880u, 0x105888u)) {
        return;
    }
    ctx->pc = 0x105888u;
label_105888:
    // 0x105888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x105888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10588c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10588cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x105890: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x105890u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x105894: 0x3e00008  jr          $ra
    ctx->pc = 0x105894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x105898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105894u;
        // 0x105898: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x105894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10589Cu;
    // 0x10589c: 0x0  nop
    ctx->pc = 0x10589cu;
    // NOP
    ctx->pc = 0x1058a0u;
}
