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

// Function: sub_002E0970
// Address: 0x2e0970 - 0x2e09c0
void sub_002E0970_0x2e0970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0970_0x2e0970");
#endif

    switch (ctx->pc) {
        case 0x2e0988u: goto label_2e0988;
        case 0x2e0990u: goto label_2e0990;
        case 0x2e09a4u: goto label_2e09a4;
        default: break;
    }

    ctx->pc = 0x2e0970u;

    // 0x2e0970: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e0974: 0x8f849040  lw          $a0, -0x6FC0($gp)
    ctx->pc = 0x2e0974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x2e0978: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e097c: 0x27909040  addiu       $s0, $gp, -0x6FC0
    ctx->pc = 0x2e097cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938688));
    // 0x2e0980: 0x10900006  beq         $a0, $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E0980u;
    {
        const bool branch_taken_0x2e0980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 16));
        ctx->pc = 0x2E0984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0980u;
        // 0x2e0984: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0980) {
            ctx->pc = 0x2E099Cu;
            goto label_2e099c;
        }
    }
    ctx->pc = 0x2E0988u;
label_2e0988:
    // 0x2e0988: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E0988u;
    SET_GPR_U32(ctx, 31, 0x2E0990u);
    ctx->pc = 0x2E098Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0988u;
    // 0x2e098c: 0x2484ffe4  addiu       $a0, $a0, -0x1C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967268));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E0988u, 0x2E0990u)) {
        return;
    }
    ctx->pc = 0x2E0990u;
label_2e0990:
    // 0x2e0990: 0x8f849040  lw          $a0, -0x6FC0($gp)
    ctx->pc = 0x2e0990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938688)));
    // 0x2e0994: 0x1490fffc  bne         $a0, $s0, . + 4 + (-0x4 << 2)
    ctx->pc = 0x2E0994u;
    {
        const bool branch_taken_0x2e0994 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        if (branch_taken_0x2e0994) {
            ctx->pc = 0x2E0988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e0988;
        }
    }
    ctx->pc = 0x2E099Cu;
label_2e099c:
    // 0x2e099c: 0xc0b82d0  jal         func_2E0B40
    ctx->pc = 0x2E099Cu;
    SET_GPR_U32(ctx, 31, 0x2E09A4u);
    ctx->pc = 0x2E09A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E099Cu;
    // 0x2e09a0: 0x8f848c30  lw          $a0, -0x73D0($gp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937648)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E0B40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E0B40u, 0x2E099Cu, 0x2E09A4u)) {
        return;
    }
    ctx->pc = 0x2E09A4u;
label_2e09a4:
    // 0x2e09a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e09a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e09a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e09a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e09ac: 0xaf808c30  sw          $zero, -0x73D0($gp)
    ctx->pc = 0x2e09acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937648), GPR_U32(ctx, 0));
    // 0x2e09b0: 0xaf808c2c  sw          $zero, -0x73D4($gp)
    ctx->pc = 0x2e09b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937644), GPR_U32(ctx, 0));
    // 0x2e09b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E09B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E09B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E09B4u;
        // 0x2e09b8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E09B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E09BCu;
    // 0x2e09bc: 0x0  nop
    ctx->pc = 0x2e09bcu;
    // NOP
    ctx->pc = 0x2e09c0u;
}
