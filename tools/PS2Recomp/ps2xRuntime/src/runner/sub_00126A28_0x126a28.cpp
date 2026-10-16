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

// Function: sub_00126A28
// Address: 0x126a28 - 0x126a70
void sub_00126A28_0x126a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00126A28_0x126a28");
#endif

    switch (ctx->pc) {
        case 0x126a48u: goto label_126a48;
        case 0x126a58u: goto label_126a58;
        default: break;
    }

    ctx->pc = 0x126a28u;

    // 0x126a28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x126a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x126a2c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x126a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x126a30: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x126a30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x126a34: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x126a34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a38: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x126A38u;
    {
        const bool branch_taken_0x126a38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x126A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A38u;
        // 0x126a3c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126a38) {
            ctx->pc = 0x126A58u;
            goto label_126a58;
        }
    }
    ctx->pc = 0x126A40u;
    // 0x126a40: 0xc04f0cc  jal         func_13C330
    ctx->pc = 0x126A40u;
    SET_GPR_U32(ctx, 31, 0x126A48u);
    ctx->pc = 0x126A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A40u;
    // 0x126a44: 0x26300310  addiu       $s0, $s1, 0x310 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 784));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x126A40u, 0x126A48u)) {
        return;
    }
    ctx->pc = 0x126A48u;
label_126a48:
    // 0x126a48: 0x8e250ec0  lw          $a1, 0xEC0($s1)
    ctx->pc = 0x126a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3776)));
    // 0x126a4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x126a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126a50: 0xc043c7c  jal         func_10F1F0
    ctx->pc = 0x126A50u;
    SET_GPR_U32(ctx, 31, 0x126A58u);
    ctx->pc = 0x126A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x126A50u;
    // 0x126a54: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x126A50u, 0x126A58u)) {
        return;
    }
    ctx->pc = 0x126A58u;
label_126a58:
    // 0x126a58: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x126a58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x126a5c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x126a5cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x126a60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x126a60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x126a64: 0x3e00008  jr          $ra
    ctx->pc = 0x126A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x126A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x126A64u;
        // 0x126a68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x126A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x126A6Cu;
    // 0x126a6c: 0x0  nop
    ctx->pc = 0x126a6cu;
    // NOP
    ctx->pc = 0x126a70u;
}
