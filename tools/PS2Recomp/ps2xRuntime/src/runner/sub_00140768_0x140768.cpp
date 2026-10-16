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

// Function: sub_00140768
// Address: 0x140768 - 0x140808
void sub_00140768_0x140768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140768_0x140768");
#endif

    switch (ctx->pc) {
        case 0x140768u: goto label_140768;
        case 0x14076cu: goto label_14076c;
        case 0x140770u: goto label_140770;
        case 0x140774u: goto label_140774;
        case 0x140778u: goto label_140778;
        case 0x14077cu: goto label_14077c;
        case 0x140780u: goto label_140780;
        case 0x140784u: goto label_140784;
        case 0x140788u: goto label_140788;
        case 0x14078cu: goto label_14078c;
        case 0x140790u: goto label_140790;
        case 0x140794u: goto label_140794;
        case 0x140798u: goto label_140798;
        case 0x14079cu: goto label_14079c;
        case 0x1407a0u: goto label_1407a0;
        case 0x1407a4u: goto label_1407a4;
        case 0x1407a8u: goto label_1407a8;
        case 0x1407acu: goto label_1407ac;
        case 0x1407b0u: goto label_1407b0;
        case 0x1407b4u: goto label_1407b4;
        case 0x1407b8u: goto label_1407b8;
        case 0x1407bcu: goto label_1407bc;
        case 0x1407c0u: goto label_1407c0;
        case 0x1407c4u: goto label_1407c4;
        case 0x1407c8u: goto label_1407c8;
        case 0x1407ccu: goto label_1407cc;
        case 0x1407d0u: goto label_1407d0;
        case 0x1407d4u: goto label_1407d4;
        case 0x1407d8u: goto label_1407d8;
        case 0x1407dcu: goto label_1407dc;
        case 0x1407e0u: goto label_1407e0;
        case 0x1407e4u: goto label_1407e4;
        case 0x1407e8u: goto label_1407e8;
        case 0x1407ecu: goto label_1407ec;
        case 0x1407f0u: goto label_1407f0;
        case 0x1407f4u: goto label_1407f4;
        case 0x1407f8u: goto label_1407f8;
        case 0x1407fcu: goto label_1407fc;
        case 0x140800u: goto label_140800;
        case 0x140804u: goto label_140804;
        default: break;
    }

    ctx->pc = 0x140768u;

label_140768:
    // 0x140768: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x140768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14076c:
    // 0x14076c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14076cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_140770:
    // 0x140770: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x140770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_140774:
    // 0x140774: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x140774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_140778:
    // 0x140778: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14077c:
    // 0x14077c: 0xc04f0bc  jal         func_13C2F0
label_140780:
    if (ctx->pc == 0x140780u) {
        ctx->pc = 0x140780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14077Cu;
        // 0x140780: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140784u;
        goto label_140784;
    }
    ctx->pc = 0x14077Cu;
    SET_GPR_U32(ctx, 31, 0x140784u);
    ctx->pc = 0x140780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14077Cu;
    // 0x140780: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C2F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C2F0u, 0x14077Cu, 0x140784u)) {
        return;
    }
    ctx->pc = 0x140784u;
label_140784:
    // 0x140784: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x140784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_140788:
    // 0x140788: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x140788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_14078c:
    // 0x14078c: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_140790:
    if (ctx->pc == 0x140790u) {
        ctx->pc = 0x140790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14078Cu;
        // 0x140790: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140794u;
        goto label_140794;
    }
    ctx->pc = 0x14078Cu;
    {
        const bool branch_taken_0x14078c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x14078c) {
            ctx->pc = 0x140790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14078Cu;
            // 0x140790: 0x8e22005c  lw          $v0, 0x5C($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1407A0u;
            goto label_1407a0;
        }
    }
    ctx->pc = 0x140794u;
label_140794:
    // 0x140794: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x140794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_140798:
    // 0x140798: 0x1000000a  b           . + 4 + (0xA << 2)
label_14079c:
    if (ctx->pc == 0x14079Cu) {
        ctx->pc = 0x14079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140798u;
        // 0x14079c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407A0u;
        goto label_1407a0;
    }
    ctx->pc = 0x140798u;
    {
        const bool branch_taken_0x140798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x140798u;
        // 0x14079c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140798) {
            ctx->pc = 0x1407C4u;
            goto label_1407c4;
        }
    }
    ctx->pc = 0x1407A0u;
label_1407a0:
    // 0x1407a0: 0x52020007  beql        $s0, $v0, . + 4 + (0x7 << 2)
label_1407a4:
    if (ctx->pc == 0x1407A4u) {
        ctx->pc = 0x1407A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407A0u;
        // 0x1407a4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407A8u;
        goto label_1407a8;
    }
    ctx->pc = 0x1407A0u;
    {
        const bool branch_taken_0x1407a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1407a0) {
            ctx->pc = 0x1407A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1407A0u;
            // 0x1407a4: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1407C0u;
            goto label_1407c0;
        }
    }
    ctx->pc = 0x1407A8u;
label_1407a8:
    // 0x1407a8: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x1407a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_1407ac:
    // 0x1407ac: 0x16020011  bne         $s0, $v0, . + 4 + (0x11 << 2)
label_1407b0:
    if (ctx->pc == 0x1407B0u) {
        ctx->pc = 0x1407B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407ACu;
        // 0x1407b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407B4u;
        goto label_1407b4;
    }
    ctx->pc = 0x1407ACu;
    {
        const bool branch_taken_0x1407ac = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x1407B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407ACu;
        // 0x1407b0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407ac) {
            ctx->pc = 0x1407F4u;
            goto label_1407f4;
        }
    }
    ctx->pc = 0x1407B4u;
label_1407b4:
    // 0x1407b4: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x1407b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_1407b8:
    // 0x1407b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1407bc:
    if (ctx->pc == 0x1407BCu) {
        ctx->pc = 0x1407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407B8u;
        // 0x1407bc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407C0u;
        goto label_1407c0;
    }
    ctx->pc = 0x1407B8u;
    {
        const bool branch_taken_0x1407b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407B8u;
        // 0x1407bc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407b8) {
            ctx->pc = 0x1407DCu;
            goto label_1407dc;
        }
    }
    ctx->pc = 0x1407C0u;
label_1407c0:
    // 0x1407c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1407c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1407c4:
    // 0x1407c4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1407c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1407c8:
    // 0x1407c8: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1407c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1407cc:
    // 0x1407cc: 0x60f809  jalr        $v1
label_1407d0:
    if (ctx->pc == 0x1407D0u) {
        ctx->pc = 0x1407D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407CCu;
        // 0x1407d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407D4u;
        goto label_1407d4;
    }
    ctx->pc = 0x1407CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1407D4u);
        ctx->pc = 0x1407D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407CCu;
        // 0x1407d0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407CCu, 0x1407D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1407D4u;
label_1407d4:
    // 0x1407d4: 0x10000007  b           . + 4 + (0x7 << 2)
label_1407d8:
    if (ctx->pc == 0x1407D8u) {
        ctx->pc = 0x1407D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407D4u;
        // 0x1407d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407DCu;
        goto label_1407dc;
    }
    ctx->pc = 0x1407D4u;
    {
        const bool branch_taken_0x1407d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1407D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407D4u;
        // 0x1407d8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407d4) {
            ctx->pc = 0x1407F4u;
            goto label_1407f4;
        }
    }
    ctx->pc = 0x1407DCu;
label_1407dc:
    // 0x1407dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1407dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1407e0:
    // 0x1407e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1407e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1407e4:
    // 0x1407e4: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1407e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1407e8:
    // 0x1407e8: 0x60f809  jalr        $v1
label_1407ec:
    if (ctx->pc == 0x1407ECu) {
        ctx->pc = 0x1407ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407E8u;
        // 0x1407ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1407F0u;
        goto label_1407f0;
    }
    ctx->pc = 0x1407E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1407F0u);
        ctx->pc = 0x1407ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407E8u;
        // 0x1407ec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407E8u, 0x1407F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1407F0u;
label_1407f0:
    // 0x1407f0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1407f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1407f4:
    // 0x1407f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1407f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1407f8:
    // 0x1407f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1407f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1407fc:
    // 0x1407fc: 0x3e00008  jr          $ra
label_140800:
    if (ctx->pc == 0x140800u) {
        ctx->pc = 0x140800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407FCu;
        // 0x140800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x140804u;
        goto label_140804;
    }
    ctx->pc = 0x1407FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1407FCu;
        // 0x140800: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1407FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x140804u;
label_140804:
    // 0x140804: 0x0  nop
    ctx->pc = 0x140804u;
    // NOP
    ctx->pc = 0x140808u;
}
