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

// Function: sub_001EDFA8
// Address: 0x1edfa8 - 0x1ee028
void sub_001EDFA8_0x1edfa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EDFA8_0x1edfa8");
#endif

    switch (ctx->pc) {
        case 0x1edfd8u: goto label_1edfd8;
        case 0x1edfecu: goto label_1edfec;
        case 0x1edff8u: goto label_1edff8;
        default: break;
    }

    ctx->pc = 0x1edfa8u;

    // 0x1edfa8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1edfa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1edfac: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1edfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1edfb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1edfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1edfb4: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x1edfb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1edfb8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1edfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1edfbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1edfbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1edfc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1edfc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1edfc4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1edfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1edfc8: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1EDFC8u;
    {
        const bool branch_taken_0x1edfc8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1EDFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EDFC8u;
        // 0x1edfcc: 0x8c920008  lw          $s2, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1edfc8) {
            ctx->pc = 0x1EE008u;
            goto label_1ee008;
        }
    }
    ctx->pc = 0x1EDFD0u;
    // 0x1edfd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1edfd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1edfd4: 0x0  nop
    ctx->pc = 0x1edfd4u;
    // NOP
label_1edfd8:
    // 0x1edfd8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1edfd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1edfdc: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1EDFDCu;
    {
        const bool branch_taken_0x1edfdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1edfdc) {
            ctx->pc = 0x1EDFE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EDFDCu;
            // 0x1edfe0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EE000u;
            goto label_1ee000;
        }
    }
    ctx->pc = 0x1EDFE4u;
    // 0x1edfe4: 0xc078e9c  jal         func_1E3A70
    ctx->pc = 0x1EDFE4u;
    SET_GPR_U32(ctx, 31, 0x1EDFECu);
    ctx->pc = 0x1EDFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFE4u;
    // 0x1edfe8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A70u, 0x1EDFE4u, 0x1EDFECu)) {
        return;
    }
    ctx->pc = 0x1EDFECu;
label_1edfec:
    // 0x1edfec: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1edfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1edff0: 0xc078e9c  jal         func_1E3A70
    ctx->pc = 0x1EDFF0u;
    SET_GPR_U32(ctx, 31, 0x1EDFF8u);
    ctx->pc = 0x1EDFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1EDFF0u;
    // 0x1edff4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E3A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E3A70u, 0x1EDFF0u, 0x1EDFF8u)) {
        return;
    }
    ctx->pc = 0x1EDFF8u;
label_1edff8:
    // 0x1edff8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x1edff8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x1edffc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1edffcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ee000:
    // 0x1ee000: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1EE000u;
    {
        const bool branch_taken_0x1ee000 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EE004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE000u;
        // 0x1ee004: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ee000) {
            ctx->pc = 0x1EDFD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1edfd8;
        }
    }
    ctx->pc = 0x1EE008u;
label_1ee008:
    // 0x1ee008: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1ee008u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ee00c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ee00cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ee010: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ee010u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ee014: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ee014u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ee018: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ee018u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ee01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ee01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ee020: 0x3e00008  jr          $ra
    ctx->pc = 0x1EE020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EE024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EE020u;
        // 0x1ee024: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EE020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EE028u;
}
