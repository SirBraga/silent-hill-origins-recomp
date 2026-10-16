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

// Function: sub_002F0120
// Address: 0x2f0120 - 0x2f0158
void sub_002F0120_0x2f0120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0120_0x2f0120");
#endif

    switch (ctx->pc) {
        case 0x2f0138u: goto label_2f0138;
        default: break;
    }

    ctx->pc = 0x2f0120u;

    // 0x2f0120: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f0120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2f0124: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2f0124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2f0128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f0128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2f012c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f012cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0130: 0xc0bbd36  jal         func_2EF4D8
    ctx->pc = 0x2F0130u;
    SET_GPR_U32(ctx, 31, 0x2F0138u);
    ctx->pc = 0x2F0134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0130u;
    // 0x2f0134: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EF4D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EF4D8u, 0x2F0130u, 0x2F0138u)) {
        return;
    }
    ctx->pc = 0x2F0138u;
label_2f0138:
    // 0x2f0138: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2f0138u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2f013c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2f013cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2f0140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2f0140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0144: 0x31940  sll         $v1, $v1, 5
    ctx->pc = 0x2f0144u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x2f0148: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f0148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f014c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2f014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2f0150: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0150u;
        // 0x2f0154: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0158u;
}
