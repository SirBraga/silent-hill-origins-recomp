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

// Function: sub_00126100
// Address: 0x126100 - 0x126170
void sub_00126100_0x126100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126100_0x126100");
#endif

    switch (ctx->pc) {
        case 0x126120u: goto label_126120;
        case 0x126134u: goto label_126134;
        case 0x12614cu: goto label_12614c;
        case 0x12615cu: goto label_12615c;
        default: break;
    }

    ctx->pc = 0x126100u;

    // 0x126100: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126104: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x126108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12610c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x12610cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126110: 0x26110320  addiu       $s1, $s0, 0x320
    ctx->pc = 0x126110u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 800));
    // 0x126114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126118: 0xc068218  jal         func_1A0860
    ctx->pc = 0x126118u;
    SET_GPR_U32(ctx, 31, 0x126120u);
    ctx->pc = 0x12611Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126118u;
    // 0x12611c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0860u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0860u, 0x126118u, 0x126120u)) {
        return;
    }
    ctx->pc = 0x126120u;
label_126120:
    // 0x126120: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x126120u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x126124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x126124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126128: 0x24a5be58  addiu       $a1, $a1, -0x41A8
    ctx->pc = 0x126128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950488));
    // 0x12612c: 0xc0c5cd6  jal         func_317358
    ctx->pc = 0x12612Cu;
    SET_GPR_U32(ctx, 31, 0x126134u);
    ctx->pc = 0x126130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12612Cu;
    // 0x126130: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317358u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x317358u, 0x12612Cu, 0x126134u)) {
        return;
    }
    ctx->pc = 0x126134u;
label_126134:
    // 0x126134: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x126134u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x126138: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12613c: 0xae020c7c  sw          $v0, 0xC7C($s0)
    ctx->pc = 0x12613cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3196), GPR_U32(ctx, 2));
    // 0x126140: 0x26050dc4  addiu       $a1, $s0, 0xDC4
    ctx->pc = 0x126140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3524));
    // 0x126144: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126144u;
    SET_GPR_U32(ctx, 31, 0x12614Cu);
    ctx->pc = 0x126148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126144u;
    // 0x126148: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126144u, 0x12614Cu)) {
        return;
    }
    ctx->pc = 0x12614Cu;
label_12614c:
    // 0x12614c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12614cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126150: 0x26050dcc  addiu       $a1, $s0, 0xDCC
    ctx->pc = 0x126150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3532));
    // 0x126154: 0xc067fca  jal         func_19FF28
    ctx->pc = 0x126154u;
    SET_GPR_U32(ctx, 31, 0x12615Cu);
    ctx->pc = 0x126158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126154u;
    // 0x126158: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x126154u, 0x12615Cu)) {
        return;
    }
    ctx->pc = 0x12615Cu;
label_12615c:
    // 0x12615c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x12615cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126160: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126160u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126164: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126164u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126168: 0x3e00008  jr          $ra
    ctx->pc = 0x126168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12616Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126168u;
        // 0x12616c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126170u;
}
