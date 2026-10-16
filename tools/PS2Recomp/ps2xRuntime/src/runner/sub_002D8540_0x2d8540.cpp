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

// Function: sub_002D8540
// Address: 0x2d8540 - 0x2d8588
void sub_002D8540_0x2d8540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D8540_0x2d8540");
#endif

    switch (ctx->pc) {
        case 0x2d8554u: goto label_2d8554;
        case 0x2d856cu: goto label_2d856c;
        default: break;
    }

    ctx->pc = 0x2d8540u;

    // 0x2d8540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d8540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d8544: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2d8544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2d8548: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d8548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d854c: 0xc0b5e46  jal         func_2D7918
    ctx->pc = 0x2D854Cu;
    SET_GPR_U32(ctx, 31, 0x2D8554u);
    ctx->pc = 0x2D8550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D854Cu;
    // 0x2d8550: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D7918u, 0x2D854Cu, 0x2D8554u)) {
        return;
    }
    ctx->pc = 0x2D8554u;
label_2d8554:
    // 0x2d8554: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x2d8554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x2d8558: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D8558u;
    {
        const bool branch_taken_0x2d8558 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D855Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8558u;
        // 0x2d855c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d8558) {
            ctx->pc = 0x2D856Cu;
            goto label_2d856c;
        }
    }
    ctx->pc = 0x2D8560u;
    // 0x2d8560: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2d8560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2d8564: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x2D8564u;
    SET_GPR_U32(ctx, 31, 0x2D856Cu);
    ctx->pc = 0x2D8568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D8564u;
    // 0x2d8568: 0x8c450008  lw          $a1, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2267A0u, 0x2D8564u, 0x2D856Cu)) {
        return;
    }
    ctx->pc = 0x2D856Cu;
label_2d856c:
    // 0x2d856c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d856cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d8570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d8570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d8574: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2d8574u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d8578: 0x3e00008  jr          $ra
    ctx->pc = 0x2D8578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D857Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D8578u;
        // 0x2d857c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D8578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8580u;
    // 0x2d8580: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2d8580u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d8584: 0x0  nop
    ctx->pc = 0x2d8584u;
    // NOP
    ctx->pc = 0x2d8588u;
}
