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

// Function: sub_0017F840
// Address: 0x17f840 - 0x17f878
void sub_0017F840_0x17f840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F840_0x17f840");
#endif

    switch (ctx->pc) {
        case 0x17f858u: goto label_17f858;
        case 0x17f864u: goto label_17f864;
        default: break;
    }

    ctx->pc = 0x17f840u;

    // 0x17f840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17f840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17f844: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17f844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17f848: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x17f848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x17f84c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f850: 0xc0561b6  jal         func_1586D8
    ctx->pc = 0x17F850u;
    SET_GPR_U32(ctx, 31, 0x17F858u);
    ctx->pc = 0x17F854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F850u;
    // 0x17f854: 0xae04899c  sw          $a0, -0x7664($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294936988), GPR_U32(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x17F850u, 0x17F858u)) {
        return;
    }
    ctx->pc = 0x17F858u;
label_17f858:
    // 0x17f858: 0x8e05899c  lw          $a1, -0x7664($s0)
    ctx->pc = 0x17f858u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936988)));
    // 0x17f85c: 0xc056206  jal         func_158818
    ctx->pc = 0x17F85Cu;
    SET_GPR_U32(ctx, 31, 0x17F864u);
    ctx->pc = 0x17F860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F85Cu;
    // 0x17f860: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x158818u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x158818u, 0x17F85Cu, 0x17F864u)) {
        return;
    }
    ctx->pc = 0x17F864u;
label_17f864:
    // 0x17f864: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17f864u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17f868: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17f86c: 0x3e00008  jr          $ra
    ctx->pc = 0x17F86Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F86Cu;
        // 0x17f870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F86Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F874u;
    // 0x17f874: 0x0  nop
    ctx->pc = 0x17f874u;
    // NOP
    ctx->pc = 0x17f878u;
}
