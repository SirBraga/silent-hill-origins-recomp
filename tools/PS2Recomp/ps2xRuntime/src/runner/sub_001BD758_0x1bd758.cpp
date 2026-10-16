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

// Function: sub_001BD758
// Address: 0x1bd758 - 0x1bd860
void sub_001BD758_0x1bd758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BD758_0x1bd758");
#endif

    switch (ctx->pc) {
        case 0x1bd790u: goto label_1bd790;
        case 0x1bd7d8u: goto label_1bd7d8;
        case 0x1bd7e4u: goto label_1bd7e4;
        case 0x1bd7e8u: goto label_1bd7e8;
        default: break;
    }

    ctx->pc = 0x1bd758u;

    // 0x1bd758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1bd758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1bd75c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1bd75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1bd760: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1bd760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1bd764: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1bd764u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd768: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1bd768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1bd76c: 0x2662001c  addiu       $v0, $s3, 0x1C
    ctx->pc = 0x1bd76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
    // 0x1bd770: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1bd770u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1bd774: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1bd774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1bd778: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x1bd778u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1bd77c: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BD77Cu;
    {
        const bool branch_taken_0x1bd77c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD77Cu;
        // 0x1bd780: 0x2665001c  addiu       $a1, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd77c) {
            ctx->pc = 0x1BD7E4u;
            goto label_1bd7e4;
        }
    }
    ctx->pc = 0x1BD784u;
    // 0x1bd784: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1bd784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd788: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bd788u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bd78c: 0x0  nop
    ctx->pc = 0x1bd78cu;
    // NOP
label_1bd790:
    // 0x1bd790: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x1bd790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd794: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1BD794u;
    {
        const bool branch_taken_0x1bd794 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD794u;
        // 0x1bd798: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd794) {
            ctx->pc = 0x1BD7D0u;
            goto label_1bd7d0;
        }
    }
    ctx->pc = 0x1BD79Cu;
    // 0x1bd79c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1bd79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1bd7a0: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD7A0u;
    {
        const bool branch_taken_0x1bd7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7a0) {
            ctx->pc = 0x1BD7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD7A0u;
            // 0x1bd7a4: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD7ACu;
            goto label_1bd7ac;
        }
    }
    ctx->pc = 0x1BD7A8u;
    // 0x1bd7a8: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x1bd7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
label_1bd7ac:
    // 0x1bd7ac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1bd7acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1bd7b0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD7B0u;
    {
        const bool branch_taken_0x1bd7b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7B0u;
        // 0x1bd7b4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7b0) {
            ctx->pc = 0x1BD7C0u;
            goto label_1bd7c0;
        }
    }
    ctx->pc = 0x1BD7B8u;
    // 0x1bd7b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD7B8u;
    {
        const bool branch_taken_0x1bd7b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7B8u;
        // 0x1bd7bc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7b8) {
            ctx->pc = 0x1BD7C4u;
            goto label_1bd7c4;
        }
    }
    ctx->pc = 0x1BD7C0u;
label_1bd7c0:
    // 0x1bd7c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1bd7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1bd7c4:
    // 0x1bd7c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1bd7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bd7c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd7cc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1bd7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1bd7d0:
    // 0x1bd7d0: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x1BD7D0u;
    SET_GPR_U32(ctx, 31, 0x1BD7D8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1BD7D0u, 0x1BD7D8u)) {
        return;
    }
    ctx->pc = 0x1BD7D8u;
label_1bd7d8:
    // 0x1bd7d8: 0x1600ffed  bnez        $s0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1BD7D8u;
    {
        const bool branch_taken_0x1bd7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD7D8u;
        // 0x1bd7dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd7d8) {
            ctx->pc = 0x1BD790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd790;
        }
    }
    ctx->pc = 0x1BD7E0u;
    // 0x1bd7e0: 0x2665001c  addiu       $a1, $s3, 0x1C
    ctx->pc = 0x1bd7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
label_1bd7e4:
    // 0x1bd7e4: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1bd7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1bd7e8:
    // 0x1bd7e8: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x1BD7E8u;
    {
        const bool branch_taken_0x1bd7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7e8) {
            ctx->pc = 0x1BD7ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BD7E8u;
            // 0x1bd7ec: 0xae600010  sw          $zero, 0x10($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BD844u;
            goto label_1bd844;
        }
    }
    ctx->pc = 0x1BD7F0u;
    // 0x1bd7f0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x1bd7f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1bd7f4: 0x0  nop
    ctx->pc = 0x1bd7f4u;
    // NOP
    // 0x1bd7f8: 0x1060fffb  beqz        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1BD7F8u;
    {
        const bool branch_taken_0x1bd7f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd7f8) {
            ctx->pc = 0x1BD7E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd7e8;
        }
    }
    ctx->pc = 0x1BD800u;
    // 0x1bd800: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1bd800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1bd804: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BD804u;
    {
        const bool branch_taken_0x1bd804 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD804u;
        // 0x1bd808: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd804) {
            ctx->pc = 0x1BD818u;
            goto label_1bd818;
        }
    }
    ctx->pc = 0x1BD80Cu;
    // 0x1bd80c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD80Cu;
    {
        const bool branch_taken_0x1bd80c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD80Cu;
        // 0x1bd810: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd80c) {
            ctx->pc = 0x1BD81Cu;
            goto label_1bd81c;
        }
    }
    ctx->pc = 0x1BD814u;
    // 0x1bd814: 0x0  nop
    ctx->pc = 0x1bd814u;
    // NOP
label_1bd818:
    // 0x1bd818: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1bd818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_1bd81c:
    // 0x1bd81c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bd81cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1bd820: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BD820u;
    {
        const bool branch_taken_0x1bd820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BD824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD820u;
        // 0x1bd824: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd820) {
            ctx->pc = 0x1BD830u;
            goto label_1bd830;
        }
    }
    ctx->pc = 0x1BD828u;
    // 0x1bd828: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BD828u;
    {
        const bool branch_taken_0x1bd828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD828u;
        // 0x1bd82c: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd828) {
            ctx->pc = 0x1BD834u;
            goto label_1bd834;
        }
    }
    ctx->pc = 0x1BD830u;
label_1bd830:
    // 0x1bd830: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x1bd830u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_1bd834:
    // 0x1bd834: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1bd834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1bd838: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1bd838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bd83c: 0x1000ffe9  b           . + 4 + (-0x17 << 2)
    ctx->pc = 0x1BD83Cu;
    {
        const bool branch_taken_0x1bd83c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD83Cu;
        // 0x1bd840: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd83c) {
            ctx->pc = 0x1BD7E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1bd7e4;
        }
    }
    ctx->pc = 0x1BD844u;
label_1bd844:
    // 0x1bd844: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1bd844u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bd848: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1bd848u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bd84c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bd84cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bd850: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1bd850u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bd854: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bd854u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bd858: 0x3e00008  jr          $ra
    ctx->pc = 0x1BD858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BD858u;
        // 0x1bd85c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BD858u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BD860u;
}
