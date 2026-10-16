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

// Function: sub_002AD828
// Address: 0x2ad828 - 0x2ad8a0
void sub_002AD828_0x2ad828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AD828_0x2ad828");
#endif

    switch (ctx->pc) {
        case 0x2ad828u: goto label_2ad828;
        case 0x2ad82cu: goto label_2ad82c;
        case 0x2ad830u: goto label_2ad830;
        case 0x2ad834u: goto label_2ad834;
        case 0x2ad838u: goto label_2ad838;
        case 0x2ad83cu: goto label_2ad83c;
        case 0x2ad840u: goto label_2ad840;
        case 0x2ad844u: goto label_2ad844;
        case 0x2ad848u: goto label_2ad848;
        case 0x2ad84cu: goto label_2ad84c;
        case 0x2ad850u: goto label_2ad850;
        case 0x2ad854u: goto label_2ad854;
        case 0x2ad858u: goto label_2ad858;
        case 0x2ad85cu: goto label_2ad85c;
        case 0x2ad860u: goto label_2ad860;
        case 0x2ad864u: goto label_2ad864;
        case 0x2ad868u: goto label_2ad868;
        case 0x2ad86cu: goto label_2ad86c;
        case 0x2ad870u: goto label_2ad870;
        case 0x2ad874u: goto label_2ad874;
        case 0x2ad878u: goto label_2ad878;
        case 0x2ad87cu: goto label_2ad87c;
        case 0x2ad880u: goto label_2ad880;
        case 0x2ad884u: goto label_2ad884;
        case 0x2ad888u: goto label_2ad888;
        case 0x2ad88cu: goto label_2ad88c;
        case 0x2ad890u: goto label_2ad890;
        case 0x2ad894u: goto label_2ad894;
        case 0x2ad898u: goto label_2ad898;
        case 0x2ad89cu: goto label_2ad89c;
        default: break;
    }

    ctx->pc = 0x2ad828u;

label_2ad828:
    // 0x2ad828: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ad828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ad82c:
    // 0x2ad82c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ad82cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ad830:
    // 0x2ad830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ad834:
    // 0x2ad834: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ad834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ad838:
    // 0x2ad838: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ad838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ad83c:
    // 0x2ad83c: 0xc0acaaa  jal         func_2B2AA8
label_2ad840:
    if (ctx->pc == 0x2AD840u) {
        ctx->pc = 0x2AD840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD83Cu;
        // 0x2ad840: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD844u;
        goto label_2ad844;
    }
    ctx->pc = 0x2AD83Cu;
    SET_GPR_U32(ctx, 31, 0x2AD844u);
    ctx->pc = 0x2AD840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD83Cu;
    // 0x2ad840: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B2AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B2AA8u, 0x2AD83Cu, 0x2AD844u)) {
        return;
    }
    ctx->pc = 0x2AD844u;
label_2ad844:
    // 0x2ad844: 0xc0ab426  jal         func_2AD098
label_2ad848:
    if (ctx->pc == 0x2AD848u) {
        ctx->pc = 0x2AD848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD844u;
        // 0x2ad848: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD84Cu;
        goto label_2ad84c;
    }
    ctx->pc = 0x2AD844u;
    SET_GPR_U32(ctx, 31, 0x2AD84Cu);
    ctx->pc = 0x2AD848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2AD844u;
    // 0x2ad848: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AD098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AD098u, 0x2AD844u, 0x2AD84Cu)) {
        return;
    }
    ctx->pc = 0x2AD84Cu;
label_2ad84c:
    // 0x2ad84c: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x2ad84cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_2ad850:
    // 0x2ad850: 0x26310fc8  addiu       $s1, $s1, 0xFC8
    ctx->pc = 0x2ad850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_2ad854:
    // 0x2ad854: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2ad854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2ad858:
    // 0x2ad858: 0x40f809  jalr        $v0
label_2ad85c:
    if (ctx->pc == 0x2AD85Cu) {
        ctx->pc = 0x2AD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD858u;
        // 0x2ad85c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD860u;
        goto label_2ad860;
    }
    ctx->pc = 0x2AD858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD860u);
        ctx->pc = 0x2AD85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD858u;
        // 0x2ad85c: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD858u, 0x2AD860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD860u;
label_2ad860:
    // 0x2ad860: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2ad860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2ad864:
    // 0x2ad864: 0x40f809  jalr        $v0
label_2ad868:
    if (ctx->pc == 0x2AD868u) {
        ctx->pc = 0x2AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD864u;
        // 0x2ad868: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD86Cu;
        goto label_2ad86c;
    }
    ctx->pc = 0x2AD864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD86Cu);
        ctx->pc = 0x2AD868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD864u;
        // 0x2ad868: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD864u, 0x2AD86Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD86Cu;
label_2ad86c:
    // 0x2ad86c: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x2ad86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2ad870:
    // 0x2ad870: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2ad870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2ad874:
    // 0x2ad874: 0x40f809  jalr        $v0
label_2ad878:
    if (ctx->pc == 0x2AD878u) {
        ctx->pc = 0x2AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD874u;
        // 0x2ad878: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD87Cu;
        goto label_2ad87c;
    }
    ctx->pc = 0x2AD874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AD87Cu);
        ctx->pc = 0x2AD878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD874u;
        // 0x2ad878: 0xae000010  sw          $zero, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD874u, 0x2AD87Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD87Cu;
label_2ad87c:
    // 0x2ad87c: 0x8e23010c  lw          $v1, 0x10C($s1)
    ctx->pc = 0x2ad87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_2ad880:
    // 0x2ad880: 0x60f809  jalr        $v1
label_2ad884:
    if (ctx->pc == 0x2AD884u) {
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD888u;
        goto label_2ad888;
    }
    ctx->pc = 0x2AD880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2AD888u);
        ctx->pc = 0x2AD884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD880u;
        // 0x2ad884: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD880u, 0x2AD888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2AD888u;
label_2ad888:
    // 0x2ad888: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ad888u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ad88c:
    // 0x2ad88c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ad88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ad890:
    // 0x2ad890: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ad890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ad894:
    // 0x2ad894: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ad894u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ad898:
    // 0x2ad898: 0x3e00008  jr          $ra
label_2ad89c:
    if (ctx->pc == 0x2AD89Cu) {
        ctx->pc = 0x2AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD898u;
        // 0x2ad89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2AD8A0u;
        goto label_fallthrough_0x2ad898;
    }
    ctx->pc = 0x2AD898u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AD89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AD898u;
        // 0x2ad89c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AD898u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2ad898:
    ctx->pc = 0x2AD8A0u;
}
