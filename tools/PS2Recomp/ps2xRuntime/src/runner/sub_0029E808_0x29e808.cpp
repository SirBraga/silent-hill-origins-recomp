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

// Function: sub_0029E808
// Address: 0x29e808 - 0x29e8a8
void sub_0029E808_0x29e808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029E808_0x29e808");
#endif

    switch (ctx->pc) {
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        default: break;
    }

    ctx->pc = 0x29e808u;

label_29e808:
    // 0x29e808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_29e80c:
    // 0x29e80c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x29e80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_29e810:
    // 0x29e810: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x29e810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_29e814:
    // 0x29e814: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29e814u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e818:
    // 0x29e818: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29e818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_29e81c:
    // 0x29e81c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x29e81cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29e820:
    // 0x29e820: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29e820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_29e824:
    // 0x29e824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29e824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_29e828:
    // 0x29e828: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29e828u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e82c:
    // 0x29e82c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x29e82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_29e830:
    // 0x29e830: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29e834:
    if (ctx->pc == 0x29E834u) {
        ctx->pc = 0x29E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E830u;
        // 0x29e834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E838u;
        goto label_29e838;
    }
    ctx->pc = 0x29E830u;
    {
        const bool branch_taken_0x29e830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E830u;
        // 0x29e834: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e830) {
            ctx->pc = 0x29E86Cu;
            goto label_29e86c;
        }
    }
    ctx->pc = 0x29E838u;
label_29e838:
    // 0x29e838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e83c:
    // 0x29e83c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_29e840:
    if (ctx->pc == 0x29E840u) {
        ctx->pc = 0x29E844u;
        goto label_29e844;
    }
    ctx->pc = 0x29E83Cu;
    {
        const bool branch_taken_0x29e83c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x29e83c) {
            ctx->pc = 0x29E864u;
            goto label_29e864;
        }
    }
    ctx->pc = 0x29E844u;
label_29e844:
    // 0x29e844: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x29e844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29e848:
    // 0x29e848: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x29e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_29e84c:
    // 0x29e84c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29e850:
    if (ctx->pc == 0x29E850u) {
        ctx->pc = 0x29E854u;
        goto label_29e854;
    }
    ctx->pc = 0x29E84Cu;
    {
        const bool branch_taken_0x29e84c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e84c) {
            ctx->pc = 0x29E864u;
            goto label_29e864;
        }
    }
    ctx->pc = 0x29E854u;
label_29e854:
    // 0x29e854: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x29e854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_29e858:
    // 0x29e858: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x29e858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29e85c:
    // 0x29e85c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29e860:
    // 0x29e860: 0x222882f  dsubu       $s1, $s1, $v0
    ctx->pc = 0x29e860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) - GPR_U64(ctx, 2));
label_29e864:
    // 0x29e864: 0xc0a71ee  jal         func_29C7B8
label_29e868:
    if (ctx->pc == 0x29E868u) {
        ctx->pc = 0x29E868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E864u;
        // 0x29e868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E86Cu;
        goto label_29e86c;
    }
    ctx->pc = 0x29E864u;
    SET_GPR_U32(ctx, 31, 0x29E86Cu);
    ctx->pc = 0x29E868u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29E864u;
    // 0x29e868: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C7B8u, 0x29E864u, 0x29E86Cu)) {
        return;
    }
    ctx->pc = 0x29E86Cu;
label_29e86c:
    // 0x29e86c: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x29e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_29e870:
    // 0x29e870: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29e874:
    // 0x29e874: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29e874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29e878:
    // 0x29e878: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x29e878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e87c:
    // 0x29e87c: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x29e87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_29e880:
    // 0x29e880: 0x40f809  jalr        $v0
label_29e884:
    if (ctx->pc == 0x29E884u) {
        ctx->pc = 0x29E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E880u;
        // 0x29e884: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E888u;
        goto label_29e888;
    }
    ctx->pc = 0x29E880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29E888u);
        ctx->pc = 0x29E884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E880u;
        // 0x29e884: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E880u, 0x29E888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29E888u;
label_29e888:
    // 0x29e888: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29e888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29e88c:
    // 0x29e88c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x29e88cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29e890:
    // 0x29e890: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x29e890u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_29e894:
    // 0x29e894: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29e894u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_29e898:
    // 0x29e898: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29e898u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29e89c:
    // 0x29e89c: 0x3e00008  jr          $ra
label_29e8a0:
    if (ctx->pc == 0x29E8A0u) {
        ctx->pc = 0x29E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E89Cu;
        // 0x29e8a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29E8A4u;
        goto label_29e8a4;
    }
    ctx->pc = 0x29E89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29E8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29E89Cu;
        // 0x29e8a0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29E89Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29E8A4u;
label_29e8a4:
    // 0x29e8a4: 0x0  nop
    ctx->pc = 0x29e8a4u;
    // NOP
    ctx->pc = 0x29e8a8u;
}
