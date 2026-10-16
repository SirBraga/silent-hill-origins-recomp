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

// Function: sub_00226570
// Address: 0x226570 - 0x2265d0
void sub_00226570_0x226570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226570_0x226570");
#endif

    switch (ctx->pc) {
        case 0x226598u: goto label_226598;
        case 0x2265b4u: goto label_2265b4;
        default: break;
    }

    ctx->pc = 0x226570u;

    // 0x226570: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x226570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x226574: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x226574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x226578: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22657c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x22657cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226580: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x226584: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x226584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x226588: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x226588u;
    {
        const bool branch_taken_0x226588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226588u;
        // 0x22658c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226588) {
            ctx->pc = 0x226598u;
            goto label_226598;
        }
    }
    ctx->pc = 0x226590u;
    // 0x226590: 0xc08999a  jal         func_226668
    ctx->pc = 0x226590u;
    SET_GPR_U32(ctx, 31, 0x226598u);
    ctx->pc = 0x226594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226590u;
    // 0x226594: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226668u, 0x226590u, 0x226598u)) {
        return;
    }
    ctx->pc = 0x226598u;
label_226598:
    // 0x226598: 0x8e220098  lw          $v0, 0x98($s1)
    ctx->pc = 0x226598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 152)));
    // 0x22659c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22659cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265a0: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x2265a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x2265a4: 0xae300098  sw          $s0, 0x98($s1)
    ctx->pc = 0x2265a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 16));
    // 0x2265a8: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2265a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x2265ac: 0xc0897bc  jal         func_225EF0
    ctx->pc = 0x2265ACu;
    SET_GPR_U32(ctx, 31, 0x2265B4u);
    ctx->pc = 0x2265B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2265ACu;
    // 0x2265b0: 0x8e2500a0  lw          $a1, 0xA0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225EF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225EF0u, 0x2265ACu, 0x2265B4u)) {
        return;
    }
    ctx->pc = 0x2265B4u;
label_2265b4:
    // 0x2265b4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2265b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2265b8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2265b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2265bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2265bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2265c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2265c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2265c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2265C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2265C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2265C4u;
        // 0x2265c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2265C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2265CCu;
    // 0x2265cc: 0x0  nop
    ctx->pc = 0x2265ccu;
    // NOP
    ctx->pc = 0x2265d0u;
}
