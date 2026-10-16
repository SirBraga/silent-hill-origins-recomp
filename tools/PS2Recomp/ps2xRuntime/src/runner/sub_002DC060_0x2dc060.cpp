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

// Function: sub_002DC060
// Address: 0x2dc060 - 0x2dc0d0
void sub_002DC060_0x2dc060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC060_0x2dc060");
#endif

    switch (ctx->pc) {
        case 0x2dc088u: goto label_2dc088;
        case 0x2dc0a8u: goto label_2dc0a8;
        default: break;
    }

    ctx->pc = 0x2dc060u;

    // 0x2dc060: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2dc060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2dc064: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2dc064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x2dc068: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dc068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2dc06c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x2dc06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x2dc070: 0x24920004  addiu       $s2, $a0, 0x4
    ctx->pc = 0x2dc070u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x2dc074: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2dc074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2dc078: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2dc078u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc07c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2dc07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x2dc080: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2DC080u;
    {
        const bool branch_taken_0x2dc080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC080u;
        // 0x2dc084: 0x8c900004  lw          $s0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc080) {
            ctx->pc = 0x2DC098u;
            goto label_2dc098;
        }
    }
    ctx->pc = 0x2DC088u;
label_2dc088:
    // 0x2dc088: 0x16120004  bne         $s0, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x2DC088u;
    {
        const bool branch_taken_0x2dc088 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        ctx->pc = 0x2DC08Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC088u;
        // 0x2dc08c: 0x2611ffe0  addiu       $s1, $s0, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc088) {
            ctx->pc = 0x2DC09Cu;
            goto label_2dc09c;
        }
    }
    ctx->pc = 0x2DC090u;
    // 0x2dc090: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2DC090u;
    {
        const bool branch_taken_0x2dc090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DC094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC090u;
        // 0x2dc094: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dc090) {
            ctx->pc = 0x2DC0B4u;
            goto label_2dc0b4;
        }
    }
    ctx->pc = 0x2DC098u;
label_2dc098:
    // 0x2dc098: 0x2611ffe0  addiu       $s1, $s0, -0x20
    ctx->pc = 0x2dc098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967264));
label_2dc09c:
    // 0x2dc09c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dc09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2dc0a0: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2DC0A0u;
    SET_GPR_U32(ctx, 31, 0x2DC0A8u);
    ctx->pc = 0x2DC0A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC0A0u;
    // 0x2dc0a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2DC0A0u, 0x2DC0A8u)) {
        return;
    }
    ctx->pc = 0x2DC0A8u;
label_2dc0a8:
    // 0x2dc0a8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2DC0A8u;
    {
        const bool branch_taken_0x2dc0a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc0a8) {
            ctx->pc = 0x2DC0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DC0A8u;
            // 0x2dc0ac: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DC088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2dc088;
        }
    }
    ctx->pc = 0x2DC0B0u;
    // 0x2dc0b0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dc0b4:
    // 0x2dc0b4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2dc0b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2dc0b8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2dc0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2dc0bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dc0bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc0c0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2dc0c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc0c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2dc0c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dc0c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC0C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC0C8u;
        // 0x2dc0cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC0C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC0D0u;
}
