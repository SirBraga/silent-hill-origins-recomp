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

// Function: sub_00126B98
// Address: 0x126b98 - 0x126bd8
void sub_00126B98_0x126b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126B98_0x126b98");
#endif

    switch (ctx->pc) {
        case 0x126bb0u: goto label_126bb0;
        case 0x126bc4u: goto label_126bc4;
        default: break;
    }

    ctx->pc = 0x126b98u;

    // 0x126b98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126b9c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126ba0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126ba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x126ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x126ba8: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x126BA8u;
    SET_GPR_U32(ctx, 31, 0x126BB0u);
    ctx->pc = 0x126BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BA8u;
    // 0x126bac: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x126BA8u, 0x126BB0u)) {
        return;
    }
    ctx->pc = 0x126BB0u;
label_126bb0:
    // 0x126bb0: 0x26110310  addiu       $s1, $s0, 0x310
    ctx->pc = 0x126bb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x126bb4: 0x8e050ec4  lw          $a1, 0xEC4($s0)
    ctx->pc = 0x126bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3780)));
    // 0x126bb8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x126bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126bbc: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x126BBCu;
    SET_GPR_U32(ctx, 31, 0x126BC4u);
    ctx->pc = 0x126BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126BBCu;
    // 0x126bc0: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x126BBCu, 0x126BC4u)) {
        return;
    }
    ctx->pc = 0x126BC4u;
label_126bc4:
    // 0x126bc4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126bc4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126bc8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126bc8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126bcc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126bccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126bd0: 0x3e00008  jr          $ra
    ctx->pc = 0x126BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126BD0u;
        // 0x126bd4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126BD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126BD8u;
}
