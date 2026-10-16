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

// Function: sub_001C4870
// Address: 0x1c4870 - 0x1c48a8
void sub_001C4870_0x1c4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4870_0x1c4870");
#endif

    switch (ctx->pc) {
        case 0x1c4890u: goto label_1c4890;
        default: break;
    }

    ctx->pc = 0x1c4870u;

    // 0x1c4870: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c4870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1c4874: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c4874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c4878: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c4878u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c487c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1c487cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4880: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C4880u;
    {
        const bool branch_taken_0x1c4880 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C4884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C4880u;
        // 0x1c4884: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c4880) {
            ctx->pc = 0x1C4894u;
            goto label_1c4894;
        }
    }
    ctx->pc = 0x1C4888u;
    // 0x1c4888: 0xc07cd92  jal         func_1F3648
    ctx->pc = 0x1C4888u;
    SET_GPR_U32(ctx, 31, 0x1C4890u);
    ctx->pc = 0x1C488Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C4888u;
    // 0x1c488c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C4888u, 0x1C4890u)) {
        return;
    }
    ctx->pc = 0x1C4890u;
label_1c4890:
    // 0x1c4890: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1c4890u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_1c4894:
    // 0x1c4894: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c4894u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4898: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c4898u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c489c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C489Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C48A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C489Cu;
        // 0x1c48a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C489Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C48A4u;
    // 0x1c48a4: 0x0  nop
    ctx->pc = 0x1c48a4u;
    // NOP
    ctx->pc = 0x1c48a8u;
}
