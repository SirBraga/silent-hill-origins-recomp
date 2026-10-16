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

// Function: sub_0028B770
// Address: 0x28b770 - 0x28b838
void sub_0028B770_0x28b770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B770_0x28b770");
#endif

    switch (ctx->pc) {
        case 0x28b7a4u: goto label_28b7a4;
        case 0x28b7b0u: goto label_28b7b0;
        case 0x28b7c8u: goto label_28b7c8;
        case 0x28b7d8u: goto label_28b7d8;
        case 0x28b7e8u: goto label_28b7e8;
        case 0x28b810u: goto label_28b810;
        default: break;
    }

    ctx->pc = 0x28b770u;

    // 0x28b770: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28b770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28b774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28b774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x28b778: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x28b778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x28b77c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28b77cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b780: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x28b780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x28b784: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x28b784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x28b788: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x28b788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x28b78c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28b78cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28b790: 0x8e4400b8  lw          $a0, 0xB8($s2)
    ctx->pc = 0x28b790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    // 0x28b794: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B794u;
    {
        const bool branch_taken_0x28b794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B794u;
        // 0x28b798: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b794) {
            ctx->pc = 0x28B7A8u;
            goto label_28b7a8;
        }
    }
    ctx->pc = 0x28B79Cu;
    // 0x28b79c: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x28B79Cu;
    SET_GPR_U32(ctx, 31, 0x28B7A4u);
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28B79Cu, 0x28B7A4u)) {
        return;
    }
    ctx->pc = 0x28B7A4u;
label_28b7a4:
    // 0x28b7a4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28b7a4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b7a8:
    // 0x28b7a8: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28B7A8u;
    SET_GPR_U32(ctx, 31, 0x28B7B0u);
    ctx->pc = 0x28B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7A8u;
    // 0x28b7ac: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B7A8u, 0x28B7B0u)) {
        return;
    }
    ctx->pc = 0x28B7B0u;
label_28b7b0:
    // 0x28b7b0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x28b7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
    // 0x28b7b4: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x28b7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x28b7b8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x28b7b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x28b7bc: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x28b7bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28b7c0: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x28B7C0u;
    SET_GPR_U32(ctx, 31, 0x28B7C8u);
    ctx->pc = 0x28B7C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7C0u;
    // 0x28b7c4: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B7C0u, 0x28B7C8u)) {
        return;
    }
    ctx->pc = 0x28B7C8u;
label_28b7c8:
    // 0x28b7c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b7c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7cc: 0x1211000c  beq         $s0, $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x28B7CCu;
    {
        const bool branch_taken_0x28b7cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7CCu;
        // 0x28b7d0: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7cc) {
            ctx->pc = 0x28B800u;
            goto label_28b800;
        }
    }
    ctx->pc = 0x28B7D4u;
    // 0x28b7d4: 0x0  nop
    ctx->pc = 0x28b7d4u;
    // NOP
label_28b7d8:
    // 0x28b7d8: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B7D8u;
    {
        const bool branch_taken_0x28b7d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7D8u;
        // 0x28b7dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7d8) {
            ctx->pc = 0x28B7F4u;
            goto label_28b7f4;
        }
    }
    ctx->pc = 0x28B7E0u;
    // 0x28b7e0: 0xc0a2578  jal         func_2895E0
    ctx->pc = 0x28B7E0u;
    SET_GPR_U32(ctx, 31, 0x28B7E8u);
    ctx->pc = 0x28B7E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B7E0u;
    // 0x28b7e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2895E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2895E0u, 0x28B7E0u, 0x28B7E8u)) {
        return;
    }
    ctx->pc = 0x28B7E8u;
label_28b7e8:
    // 0x28b7e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28b7e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7ec: 0x282180b  movn        $v1, $s4, $v0
    ctx->pc = 0x28b7ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20));
    // 0x28b7f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28b7f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28b7f4:
    // 0x28b7f4: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x28b7f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x28b7f8: 0x1611fff7  bne         $s0, $s1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28B7F8u;
    {
        const bool branch_taken_0x28b7f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28B7FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B7F8u;
        // 0x28b7fc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7f8) {
            ctx->pc = 0x28B7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b7d8;
        }
    }
    ctx->pc = 0x28B800u;
label_28b800:
    // 0x28b800: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28B800u;
    {
        const bool branch_taken_0x28b800 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B800u;
        // 0x28b804: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b800) {
            ctx->pc = 0x28B814u;
            goto label_28b814;
        }
    }
    ctx->pc = 0x28B808u;
    // 0x28b808: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x28B808u;
    SET_GPR_U32(ctx, 31, 0x28B810u);
    ctx->pc = 0x28B80Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B808u;
    // 0x28b80c: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x28B808u, 0x28B810u)) {
        return;
    }
    ctx->pc = 0x28B810u;
label_28b810:
    // 0x28b810: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28b810u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b814:
    // 0x28b814: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x28b814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b818: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x28b818u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b81c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28b81cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b820: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x28b820u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b824: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x28b824u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b828: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b828u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b82c: 0x3e00008  jr          $ra
    ctx->pc = 0x28B82Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B82Cu;
        // 0x28b830: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B82Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B834u;
    // 0x28b834: 0x0  nop
    ctx->pc = 0x28b834u;
    // NOP
    ctx->pc = 0x28b838u;
}
