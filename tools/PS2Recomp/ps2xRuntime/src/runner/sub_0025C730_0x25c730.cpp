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

// Function: sub_0025C730
// Address: 0x25c730 - 0x25c7e0
void sub_0025C730_0x25c730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025C730_0x25c730");
#endif

    switch (ctx->pc) {
        case 0x25c730u: goto label_25c730;
        case 0x25c734u: goto label_25c734;
        case 0x25c738u: goto label_25c738;
        case 0x25c73cu: goto label_25c73c;
        case 0x25c740u: goto label_25c740;
        case 0x25c744u: goto label_25c744;
        case 0x25c748u: goto label_25c748;
        case 0x25c74cu: goto label_25c74c;
        case 0x25c750u: goto label_25c750;
        case 0x25c754u: goto label_25c754;
        case 0x25c758u: goto label_25c758;
        case 0x25c75cu: goto label_25c75c;
        case 0x25c760u: goto label_25c760;
        case 0x25c764u: goto label_25c764;
        case 0x25c768u: goto label_25c768;
        case 0x25c76cu: goto label_25c76c;
        case 0x25c770u: goto label_25c770;
        case 0x25c774u: goto label_25c774;
        case 0x25c778u: goto label_25c778;
        case 0x25c77cu: goto label_25c77c;
        case 0x25c780u: goto label_25c780;
        case 0x25c784u: goto label_25c784;
        case 0x25c788u: goto label_25c788;
        case 0x25c78cu: goto label_25c78c;
        case 0x25c790u: goto label_25c790;
        case 0x25c794u: goto label_25c794;
        case 0x25c798u: goto label_25c798;
        case 0x25c79cu: goto label_25c79c;
        case 0x25c7a0u: goto label_25c7a0;
        case 0x25c7a4u: goto label_25c7a4;
        case 0x25c7a8u: goto label_25c7a8;
        case 0x25c7acu: goto label_25c7ac;
        case 0x25c7b0u: goto label_25c7b0;
        case 0x25c7b4u: goto label_25c7b4;
        case 0x25c7b8u: goto label_25c7b8;
        case 0x25c7bcu: goto label_25c7bc;
        case 0x25c7c0u: goto label_25c7c0;
        case 0x25c7c4u: goto label_25c7c4;
        case 0x25c7c8u: goto label_25c7c8;
        case 0x25c7ccu: goto label_25c7cc;
        case 0x25c7d0u: goto label_25c7d0;
        case 0x25c7d4u: goto label_25c7d4;
        case 0x25c7d8u: goto label_25c7d8;
        case 0x25c7dcu: goto label_25c7dc;
        default: break;
    }

    ctx->pc = 0x25c730u;

label_25c730:
    // 0x25c730: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x25c730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_25c734:
    // 0x25c734: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x25c734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_25c738:
    // 0x25c738: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x25c738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_25c73c:
    // 0x25c73c: 0xc097102  jal         func_25C408
label_25c740:
    if (ctx->pc == 0x25C740u) {
        ctx->pc = 0x25C740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C73Cu;
        // 0x25c740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C744u;
        goto label_25c744;
    }
    ctx->pc = 0x25C73Cu;
    SET_GPR_U32(ctx, 31, 0x25C744u);
    ctx->pc = 0x25C740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C73Cu;
    // 0x25c740: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C408u, 0x25C73Cu, 0x25C744u)) {
        return;
    }
    ctx->pc = 0x25C744u;
label_25c744:
    // 0x25c744: 0xc097126  jal         func_25C498
label_25c748:
    if (ctx->pc == 0x25C748u) {
        ctx->pc = 0x25C748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C744u;
        // 0x25c748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C74Cu;
        goto label_25c74c;
    }
    ctx->pc = 0x25C744u;
    SET_GPR_U32(ctx, 31, 0x25C74Cu);
    ctx->pc = 0x25C748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C744u;
    // 0x25c748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25C498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25C498u, 0x25C744u, 0x25C74Cu)) {
        return;
    }
    ctx->pc = 0x25C74Cu;
label_25c74c:
    // 0x25c74c: 0xc096032  jal         func_2580C8
label_25c750:
    if (ctx->pc == 0x25C750u) {
        ctx->pc = 0x25C750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C74Cu;
        // 0x25c750: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C754u;
        goto label_25c754;
    }
    ctx->pc = 0x25C74Cu;
    SET_GPR_U32(ctx, 31, 0x25C754u);
    ctx->pc = 0x25C750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C74Cu;
    // 0x25c750: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2580C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2580C8u, 0x25C74Cu, 0x25C754u)) {
        return;
    }
    ctx->pc = 0x25C754u;
label_25c754:
    // 0x25c754: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x25c754u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
label_25c758:
    // 0x25c758: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x25c758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_25c75c:
    // 0x25c75c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_25c760:
    if (ctx->pc == 0x25C760u) {
        ctx->pc = 0x25C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C75Cu;
        // 0x25c760: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C764u;
        goto label_25c764;
    }
    ctx->pc = 0x25C75Cu;
    {
        const bool branch_taken_0x25c75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C75Cu;
        // 0x25c760: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c75c) {
            ctx->pc = 0x25C79Cu;
            goto label_25c79c;
        }
    }
    ctx->pc = 0x25C764u;
label_25c764:
    // 0x25c764: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25c768:
    if (ctx->pc == 0x25C768u) {
        ctx->pc = 0x25C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C764u;
        // 0x25c768: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C76Cu;
        goto label_25c76c;
    }
    ctx->pc = 0x25C764u;
    {
        const bool branch_taken_0x25c764 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c764) {
            ctx->pc = 0x25C768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C764u;
            // 0x25c768: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C778u;
            goto label_25c778;
        }
    }
    ctx->pc = 0x25C76Cu;
label_25c76c:
    // 0x25c76c: 0xc096f10  jal         func_25BC40
label_25c770:
    if (ctx->pc == 0x25C770u) {
        ctx->pc = 0x25C774u;
        goto label_25c774;
    }
    ctx->pc = 0x25C76Cu;
    SET_GPR_U32(ctx, 31, 0x25C774u);
    ctx->pc = 0x25BC40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BC40u, 0x25C76Cu, 0x25C774u)) {
        return;
    }
    ctx->pc = 0x25C774u;
label_25c774:
    // 0x25c774: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25c774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_25c778:
    // 0x25c778: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c77c:
    // 0x25c77c: 0xc09397e  jal         func_24E5F8
label_25c780:
    if (ctx->pc == 0x25C780u) {
        ctx->pc = 0x25C780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C77Cu;
        // 0x25c780: 0x24841298  addiu       $a0, $a0, 0x1298 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C784u;
        goto label_25c784;
    }
    ctx->pc = 0x25C77Cu;
    SET_GPR_U32(ctx, 31, 0x25C784u);
    ctx->pc = 0x25C780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C77Cu;
    // 0x25c780: 0x24841298  addiu       $a0, $a0, 0x1298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x25C77Cu, 0x25C784u)) {
        return;
    }
    ctx->pc = 0x25C784u;
label_25c784:
    // 0x25c784: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25c784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25c788:
    // 0x25c788: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x25c788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25c78c:
    // 0x25c78c: 0x40f809  jalr        $v0
label_25c790:
    if (ctx->pc == 0x25C790u) {
        ctx->pc = 0x25C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C78Cu;
        // 0x25c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C794u;
        goto label_25c794;
    }
    ctx->pc = 0x25C78Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C794u);
        ctx->pc = 0x25C790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C78Cu;
        // 0x25c790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C78Cu, 0x25C794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C794u;
label_25c794:
    // 0x25c794: 0x1000000e  b           . + 4 + (0xE << 2)
label_25c798:
    if (ctx->pc == 0x25C798u) {
        ctx->pc = 0x25C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C794u;
        // 0x25c798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C79Cu;
        goto label_25c79c;
    }
    ctx->pc = 0x25C794u;
    {
        const bool branch_taken_0x25c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C794u;
        // 0x25c798: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c794) {
            ctx->pc = 0x25C7D0u;
            goto label_25c7d0;
        }
    }
    ctx->pc = 0x25C79Cu;
label_25c79c:
    // 0x25c79c: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_25c7a0:
    if (ctx->pc == 0x25C7A0u) {
        ctx->pc = 0x25C7A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C79Cu;
        // 0x25c7a0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7A4u;
        goto label_25c7a4;
    }
    ctx->pc = 0x25C79Cu;
    {
        const bool branch_taken_0x25c79c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25c79c) {
            ctx->pc = 0x25C7A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25C79Cu;
            // 0x25c7a0: 0x3c04005c  lui         $a0, 0x5C (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25C7B0u;
            goto label_25c7b0;
        }
    }
    ctx->pc = 0x25C7A4u;
label_25c7a4:
    // 0x25c7a4: 0xc096f54  jal         func_25BD50
label_25c7a8:
    if (ctx->pc == 0x25C7A8u) {
        ctx->pc = 0x25C7ACu;
        goto label_25c7ac;
    }
    ctx->pc = 0x25C7A4u;
    SET_GPR_U32(ctx, 31, 0x25C7ACu);
    ctx->pc = 0x25BD50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25BD50u, 0x25C7A4u, 0x25C7ACu)) {
        return;
    }
    ctx->pc = 0x25C7ACu;
label_25c7ac:
    // 0x25c7ac: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x25c7acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
label_25c7b0:
    // 0x25c7b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x25c7b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25c7b4:
    // 0x25c7b4: 0xc09397e  jal         func_24E5F8
label_25c7b8:
    if (ctx->pc == 0x25C7B8u) {
        ctx->pc = 0x25C7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7B4u;
        // 0x25c7b8: 0x24841298  addiu       $a0, $a0, 0x1298 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7BCu;
        goto label_25c7bc;
    }
    ctx->pc = 0x25C7B4u;
    SET_GPR_U32(ctx, 31, 0x25C7BCu);
    ctx->pc = 0x25C7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25C7B4u;
    // 0x25c7b8: 0x24841298  addiu       $a0, $a0, 0x1298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E5F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24E5F8u, 0x25C7B4u, 0x25C7BCu)) {
        return;
    }
    ctx->pc = 0x25C7BCu;
label_25c7bc:
    // 0x25c7bc: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x25c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_25c7c0:
    // 0x25c7c0: 0x8c6210d4  lw          $v0, 0x10D4($v1)
    ctx->pc = 0x25c7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4308)));
label_25c7c4:
    // 0x25c7c4: 0x40f809  jalr        $v0
label_25c7c8:
    if (ctx->pc == 0x25C7C8u) {
        ctx->pc = 0x25C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7C4u;
        // 0x25c7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7CCu;
        goto label_25c7cc;
    }
    ctx->pc = 0x25C7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25C7CCu);
        ctx->pc = 0x25C7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7C4u;
        // 0x25c7c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C7C4u, 0x25C7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25C7CCu;
label_25c7cc:
    // 0x25c7cc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x25c7ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_25c7d0:
    // 0x25c7d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25c7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_25c7d4:
    // 0x25c7d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x25c7d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25c7d8:
    // 0x25c7d8: 0x3e00008  jr          $ra
label_25c7dc:
    if (ctx->pc == 0x25C7DCu) {
        ctx->pc = 0x25C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7D8u;
        // 0x25c7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25C7E0u;
        goto label_fallthrough_0x25c7d8;
    }
    ctx->pc = 0x25C7D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25C7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25C7D8u;
        // 0x25c7dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25C7D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25c7d8:
    ctx->pc = 0x25C7E0u;
}
