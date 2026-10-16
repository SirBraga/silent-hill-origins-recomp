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

// Function: sub_001ED628
// Address: 0x1ed628 - 0x1ed700
void sub_001ED628_0x1ed628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED628_0x1ed628");
#endif

    switch (ctx->pc) {
        case 0x1ed658u: goto label_1ed658;
        case 0x1ed6a4u: goto label_1ed6a4;
        case 0x1ed6b8u: goto label_1ed6b8;
        case 0x1ed6ccu: goto label_1ed6cc;
        default: break;
    }

    ctx->pc = 0x1ed628u;

    // 0x1ed628: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1ed628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1ed62c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ed62cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ed630: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1ed630u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1ed634: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ed634u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed638: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1ed638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1ed63c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1ed63cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ed640: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1ed640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1ed644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ed644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ed648: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1ed64c: 0x18400024  blez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1ED64Cu;
    {
        const bool branch_taken_0x1ed64c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1ED650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED64Cu;
        // 0x1ed650: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed64c) {
            ctx->pc = 0x1ED6E0u;
            goto label_1ed6e0;
        }
    }
    ctx->pc = 0x1ED654u;
    // 0x1ed654: 0x0  nop
    ctx->pc = 0x1ed654u;
    // NOP
label_1ed658:
    // 0x1ed658: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x1ed658u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1ed65c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x1ed65cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ed660: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1ED660u;
    {
        const bool branch_taken_0x1ed660 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED660u;
        // 0x1ed664: 0xae00012c  sw          $zero, 0x12C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed660) {
            ctx->pc = 0x1ED6A4u;
            goto label_1ed6a4;
        }
    }
    ctx->pc = 0x1ED668u;
    // 0x1ed668: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1ed668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ed66c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1ed66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1ed670: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1ed670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1ed674: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1ed674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1ed678: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ed678u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ed67c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1ed67cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1ed680: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1ed680u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ed684: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1ed684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1ed688: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1ed688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1ed68c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ED68Cu;
    {
        const bool branch_taken_0x1ed68c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ED690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED68Cu;
        // 0x1ed690: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed68c) {
            ctx->pc = 0x1ED6A4u;
            goto label_1ed6a4;
        }
    }
    ctx->pc = 0x1ED694u;
    // 0x1ed694: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED694u;
    {
        const bool branch_taken_0x1ed694 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed694) {
            ctx->pc = 0x1ED698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED694u;
            // 0x1ed698: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED6A8u;
            goto label_1ed6a8;
        }
    }
    ctx->pc = 0x1ED69Cu;
    // 0x1ed69c: 0xc079fb2  jal         func_1E7EC8
    ctx->pc = 0x1ED69Cu;
    SET_GPR_U32(ctx, 31, 0x1ED6A4u);
    ctx->pc = 0x1ED6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ED69Cu;
    // 0x1ed6a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7EC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7EC8u, 0x1ED69Cu, 0x1ED6A4u)) {
        return;
    }
    ctx->pc = 0x1ED6A4u;
label_1ed6a4:
    // 0x1ed6a4: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x1ed6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1ed6a8:
    // 0x1ed6a8: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED6A8u;
    {
        const bool branch_taken_0x1ed6a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6a8) {
            ctx->pc = 0x1ED6ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED6A8u;
            // 0x1ed6ac: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED6BCu;
            goto label_1ed6bc;
        }
    }
    ctx->pc = 0x1ED6B0u;
    // 0x1ed6b0: 0xc07b4f8  jal         func_1ED3E0
    ctx->pc = 0x1ED6B0u;
    SET_GPR_U32(ctx, 31, 0x1ED6B8u);
    ctx->pc = 0x1ED3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED3E0u, 0x1ED6B0u, 0x1ED6B8u)) {
        return;
    }
    ctx->pc = 0x1ED6B8u;
label_1ed6b8:
    // 0x1ed6b8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x1ed6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ed6bc:
    // 0x1ed6bc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ED6BCu;
    {
        const bool branch_taken_0x1ed6bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ed6bc) {
            ctx->pc = 0x1ED6C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ED6BCu;
            // 0x1ed6c0: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ED6D0u;
            goto label_1ed6d0;
        }
    }
    ctx->pc = 0x1ED6C4u;
    // 0x1ed6c4: 0xc07b4f8  jal         func_1ED3E0
    ctx->pc = 0x1ED6C4u;
    SET_GPR_U32(ctx, 31, 0x1ED6CCu);
    ctx->pc = 0x1ED3E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1ED3E0u, 0x1ED6C4u, 0x1ED6CCu)) {
        return;
    }
    ctx->pc = 0x1ED6CCu;
label_1ed6cc:
    // 0x1ed6cc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1ed6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1ed6d0:
    // 0x1ed6d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1ed6d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1ed6d4: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x1ed6d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1ed6d8: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x1ED6D8u;
    {
        const bool branch_taken_0x1ed6d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ED6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6D8u;
        // 0x1ed6dc: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ed6d8) {
            ctx->pc = 0x1ED658u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ed658;
        }
    }
    ctx->pc = 0x1ED6E0u;
label_1ed6e0:
    // 0x1ed6e0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1ed6e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ed6e4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1ed6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ed6e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ed6e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ed6ec: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1ed6ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ed6f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ed6f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ed6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED6F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED6F4u;
        // 0x1ed6f8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED6FCu;
    // 0x1ed6fc: 0x0  nop
    ctx->pc = 0x1ed6fcu;
    // NOP
    ctx->pc = 0x1ed700u;
}
