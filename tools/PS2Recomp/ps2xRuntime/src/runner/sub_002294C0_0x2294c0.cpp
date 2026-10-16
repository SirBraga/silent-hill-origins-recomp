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

// Function: sub_002294C0
// Address: 0x2294c0 - 0x229528
void sub_002294C0_0x2294c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002294C0_0x2294c0");
#endif

    switch (ctx->pc) {
        case 0x2294e8u: goto label_2294e8;
        case 0x2294f0u: goto label_2294f0;
        default: break;
    }

    ctx->pc = 0x2294c0u;

    // 0x2294c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2294c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2294c4: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x2294c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x2294c8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2294c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2294cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2294ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2294d0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2294d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2294d4: 0x24511084  addiu       $s1, $v0, 0x1084
    ctx->pc = 0x2294d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4228));
    // 0x2294d8: 0x8c501084  lw          $s0, 0x1084($v0)
    ctx->pc = 0x2294d8u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x731084u));
    // 0x2294dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2294dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2294e0: 0x12110007  beq         $s0, $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2294E0u;
    {
        const bool branch_taken_0x2294e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x2294E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2294E0u;
        // 0x2294e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2294e0) {
            ctx->pc = 0x229500u;
            goto label_229500;
        }
    }
    ctx->pc = 0x2294E8u;
label_2294e8:
    // 0x2294e8: 0xc08a4f2  jal         func_2293C8
    ctx->pc = 0x2294E8u;
    SET_GPR_U32(ctx, 31, 0x2294F0u);
    ctx->pc = 0x2294ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2294E8u;
    // 0x2294ec: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2293C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2293C8u, 0x2294E8u, 0x2294F0u)) {
        return;
    }
    ctx->pc = 0x2294F0u;
label_2294f0:
    // 0x2294f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x2294f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2294f4: 0x0  nop
    ctx->pc = 0x2294f4u;
    // NOP
    // 0x2294f8: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2294F8u;
    {
        const bool branch_taken_0x2294f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        if (branch_taken_0x2294f8) {
            ctx->pc = 0x2294E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2294e8;
        }
    }
    ctx->pc = 0x229500u;
label_229500:
    // 0x229500: 0x26431084  addiu       $v1, $s2, 0x1084
    ctx->pc = 0x229500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4228));
    // 0x229504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x229504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x229508: 0xae431084  sw          $v1, 0x1084($s2)
    ctx->pc = 0x229508u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4228), GPR_U32(ctx, 3));
    // 0x22950c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x229510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x229510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229514: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x229514u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229518: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22951c: 0xac630004  sw          $v1, 0x4($v1)
    ctx->pc = 0x22951cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 3));
    // 0x229520: 0x3e00008  jr          $ra
    ctx->pc = 0x229520u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229520u;
        // 0x229524: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229520u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x229528u;
}
