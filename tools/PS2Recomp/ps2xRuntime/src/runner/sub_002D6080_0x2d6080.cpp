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

// Function: sub_002D6080
// Address: 0x2d6080 - 0x2d60d0
void sub_002D6080_0x2d6080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6080_0x2d6080");
#endif

    switch (ctx->pc) {
        case 0x2d60a4u: goto label_2d60a4;
        case 0x2d60b4u: goto label_2d60b4;
        default: break;
    }

    ctx->pc = 0x2d6080u;

    // 0x2d6080: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6084: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d6084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d6088: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2d6088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2d608c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d608cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6090: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d6090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6094: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2d6094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2d6098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d6098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d609c: 0xc0aa872  jal         func_2AA1C8
    ctx->pc = 0x2D609Cu;
    SET_GPR_U32(ctx, 31, 0x2D60A4u);
    ctx->pc = 0x2D60A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D609Cu;
    // 0x2d60a0: 0x24a5ed28  addiu       $a1, $a1, -0x12D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AA1C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AA1C8u, 0x2D609Cu, 0x2D60A4u)) {
        return;
    }
    ctx->pc = 0x2D60A4u;
label_2d60a4:
    // 0x2d60a4: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x2d60a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x2d60a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d60a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60ac: 0xc0b5834  jal         func_2D60D0
    ctx->pc = 0x2D60ACu;
    SET_GPR_U32(ctx, 31, 0x2D60B4u);
    ctx->pc = 0x2D60B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D60ACu;
    // 0x2d60b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D60D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D60D0u, 0x2D60ACu, 0x2D60B4u)) {
        return;
    }
    ctx->pc = 0x2D60B4u;
label_2d60b4:
    // 0x2d60b4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d60b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d60b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d60b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d60bc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2d60bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d60c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d60c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d60c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D60C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D60C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D60C4u;
        // 0x2d60c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D60C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D60CCu;
    // 0x2d60cc: 0x0  nop
    ctx->pc = 0x2d60ccu;
    // NOP
    ctx->pc = 0x2d60d0u;
}
