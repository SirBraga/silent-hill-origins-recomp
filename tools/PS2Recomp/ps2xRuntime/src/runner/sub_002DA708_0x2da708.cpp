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

// Function: sub_002DA708
// Address: 0x2da708 - 0x2da800
void sub_002DA708_0x2da708(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DA708_0x2da708");
#endif

    switch (ctx->pc) {
        case 0x2da708u: goto label_2da708;
        case 0x2da70cu: goto label_2da70c;
        case 0x2da710u: goto label_2da710;
        case 0x2da714u: goto label_2da714;
        case 0x2da718u: goto label_2da718;
        case 0x2da71cu: goto label_2da71c;
        case 0x2da720u: goto label_2da720;
        case 0x2da724u: goto label_2da724;
        case 0x2da728u: goto label_2da728;
        case 0x2da72cu: goto label_2da72c;
        case 0x2da730u: goto label_2da730;
        case 0x2da734u: goto label_2da734;
        case 0x2da738u: goto label_2da738;
        case 0x2da73cu: goto label_2da73c;
        case 0x2da740u: goto label_2da740;
        case 0x2da744u: goto label_2da744;
        case 0x2da748u: goto label_2da748;
        case 0x2da74cu: goto label_2da74c;
        case 0x2da750u: goto label_2da750;
        case 0x2da754u: goto label_2da754;
        case 0x2da758u: goto label_2da758;
        case 0x2da75cu: goto label_2da75c;
        case 0x2da760u: goto label_2da760;
        case 0x2da764u: goto label_2da764;
        case 0x2da768u: goto label_2da768;
        case 0x2da76cu: goto label_2da76c;
        case 0x2da770u: goto label_2da770;
        case 0x2da774u: goto label_2da774;
        case 0x2da778u: goto label_2da778;
        case 0x2da77cu: goto label_2da77c;
        case 0x2da780u: goto label_2da780;
        case 0x2da784u: goto label_2da784;
        case 0x2da788u: goto label_2da788;
        case 0x2da78cu: goto label_2da78c;
        case 0x2da790u: goto label_2da790;
        case 0x2da794u: goto label_2da794;
        case 0x2da798u: goto label_2da798;
        case 0x2da79cu: goto label_2da79c;
        case 0x2da7a0u: goto label_2da7a0;
        case 0x2da7a4u: goto label_2da7a4;
        case 0x2da7a8u: goto label_2da7a8;
        case 0x2da7acu: goto label_2da7ac;
        case 0x2da7b0u: goto label_2da7b0;
        case 0x2da7b4u: goto label_2da7b4;
        case 0x2da7b8u: goto label_2da7b8;
        case 0x2da7bcu: goto label_2da7bc;
        case 0x2da7c0u: goto label_2da7c0;
        case 0x2da7c4u: goto label_2da7c4;
        case 0x2da7c8u: goto label_2da7c8;
        case 0x2da7ccu: goto label_2da7cc;
        case 0x2da7d0u: goto label_2da7d0;
        case 0x2da7d4u: goto label_2da7d4;
        case 0x2da7d8u: goto label_2da7d8;
        case 0x2da7dcu: goto label_2da7dc;
        case 0x2da7e0u: goto label_2da7e0;
        case 0x2da7e4u: goto label_2da7e4;
        case 0x2da7e8u: goto label_2da7e8;
        case 0x2da7ecu: goto label_2da7ec;
        case 0x2da7f0u: goto label_2da7f0;
        case 0x2da7f4u: goto label_2da7f4;
        case 0x2da7f8u: goto label_2da7f8;
        case 0x2da7fcu: goto label_2da7fc;
        default: break;
    }

    ctx->pc = 0x2da708u;

label_2da708:
    // 0x2da708: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2da708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2da70c:
    // 0x2da70c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2da70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2da710:
    // 0x2da710: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2da710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2da714:
    // 0x2da714: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2da714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da718:
    // 0x2da718: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2da718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2da71c:
    // 0x2da71c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2da71cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2da720:
    // 0x2da720: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2da720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2da724:
    // 0x2da724: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2da724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2da728:
    // 0x2da728: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x2da728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_2da72c:
    // 0x2da72c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2da730:
    if (ctx->pc == 0x2DA730u) {
        ctx->pc = 0x2DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA72Cu;
        // 0x2da730: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA734u;
        goto label_2da734;
    }
    ctx->pc = 0x2DA72Cu;
    {
        const bool branch_taken_0x2da72c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA72Cu;
        // 0x2da730: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da72c) {
            ctx->pc = 0x2DA73Cu;
            goto label_2da73c;
        }
    }
    ctx->pc = 0x2DA734u;
label_2da734:
    // 0x2da734: 0x40f809  jalr        $v0
label_2da738:
    if (ctx->pc == 0x2DA738u) {
        ctx->pc = 0x2DA73Cu;
        goto label_2da73c;
    }
    ctx->pc = 0x2DA734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DA73Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA734u, 0x2DA73Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DA73Cu;
label_2da73c:
    // 0x2da73c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2da73cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2da740:
    // 0x2da740: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_2da744:
    if (ctx->pc == 0x2DA744u) {
        ctx->pc = 0x2DA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA740u;
        // 0x2da744: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA748u;
        goto label_2da748;
    }
    ctx->pc = 0x2DA740u;
    {
        const bool branch_taken_0x2da740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2da740) {
            ctx->pc = 0x2DA744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA740u;
            // 0x2da744: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA768u;
            goto label_2da768;
        }
    }
    ctx->pc = 0x2DA748u;
label_2da748:
    // 0x2da748: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2da748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2da74c:
    // 0x2da74c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2da74cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2da750:
    // 0x2da750: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2da750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2da754:
    // 0x2da754: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2da754u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2da758:
    // 0x2da758: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2da758u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2da75c:
    // 0x2da75c: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2da75cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_2da760:
    // 0x2da760: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2da760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2da764:
    // 0x2da764: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2da764u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2da768:
    // 0x2da768: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2da768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2da76c:
    // 0x2da76c: 0x50a6000b  beql        $a1, $a2, . + 4 + (0xB << 2)
label_2da770:
    if (ctx->pc == 0x2DA770u) {
        ctx->pc = 0x2DA770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA76Cu;
        // 0x2da770: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA774u;
        goto label_2da774;
    }
    ctx->pc = 0x2DA76Cu;
    {
        const bool branch_taken_0x2da76c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        if (branch_taken_0x2da76c) {
            ctx->pc = 0x2DA770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DA76Cu;
            // 0x2da770: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DA79Cu;
            goto label_2da79c;
        }
    }
    ctx->pc = 0x2DA774u;
label_2da774:
    // 0x2da774: 0x0  nop
    ctx->pc = 0x2da774u;
    // NOP
label_2da778:
    // 0x2da778: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2da778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2da77c:
    // 0x2da77c: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2da77cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2da780:
    // 0x2da780: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2da780u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_2da784:
    // 0x2da784: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2da784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2da788:
    // 0x2da788: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2da788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2da78c:
    // 0x2da78c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2da78cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2da790:
    // 0x2da790: 0x14a6fff9  bne         $a1, $a2, . + 4 + (-0x7 << 2)
label_2da794:
    if (ctx->pc == 0x2DA794u) {
        ctx->pc = 0x2DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA790u;
        // 0x2da794: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA798u;
        goto label_2da798;
    }
    ctx->pc = 0x2DA790u;
    {
        const bool branch_taken_0x2da790 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        ctx->pc = 0x2DA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA790u;
        // 0x2da794: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da790) {
            ctx->pc = 0x2DA778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2da778;
        }
    }
    ctx->pc = 0x2DA798u;
label_2da798:
    // 0x2da798: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2da798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2da79c:
    // 0x2da79c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2da79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2da7a0:
    // 0x2da7a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2da7a4:
    if (ctx->pc == 0x2DA7A4u) {
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7A8u;
        goto label_2da7a8;
    }
    ctx->pc = 0x2DA7A0u;
    {
        const bool branch_taken_0x2da7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DA7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A0u;
        // 0x2da7a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da7a0) {
            ctx->pc = 0x2DA7BCu;
            goto label_2da7bc;
        }
    }
    ctx->pc = 0x2DA7A8u;
label_2da7a8:
    // 0x2da7a8: 0xc0b6ab2  jal         func_2DAAC8
label_2da7ac:
    if (ctx->pc == 0x2DA7ACu) {
        ctx->pc = 0x2DA7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7A8u;
        // 0x2da7ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7B0u;
        goto label_2da7b0;
    }
    ctx->pc = 0x2DA7A8u;
    SET_GPR_U32(ctx, 31, 0x2DA7B0u);
    ctx->pc = 0x2DA7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7A8u;
    // 0x2da7ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAAC8u, 0x2DA7A8u, 0x2DA7B0u)) {
        return;
    }
    ctx->pc = 0x2DA7B0u;
label_2da7b0:
    // 0x2da7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da7b4:
    // 0x2da7b4: 0xc0b6ab2  jal         func_2DAAC8
label_2da7b8:
    if (ctx->pc == 0x2DA7B8u) {
        ctx->pc = 0x2DA7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7B4u;
        // 0x2da7b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7BCu;
        goto label_2da7bc;
    }
    ctx->pc = 0x2DA7B4u;
    SET_GPR_U32(ctx, 31, 0x2DA7BCu);
    ctx->pc = 0x2DA7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7B4u;
    // 0x2da7b8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DAAC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DAAC8u, 0x2DA7B4u, 0x2DA7BCu)) {
        return;
    }
    ctx->pc = 0x2DA7BCu;
label_2da7bc:
    // 0x2da7bc: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x2da7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2da7c0:
    // 0x2da7c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2da7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2da7c4:
    // 0x2da7c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2da7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2da7c8:
    // 0x2da7c8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2da7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2da7cc:
    // 0x2da7cc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2da7ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2da7d0:
    // 0x2da7d0: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x2da7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_2da7d4:
    // 0x2da7d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2da7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2da7d8:
    // 0x2da7d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2da7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2da7dc:
    // 0x2da7dc: 0xc0b9096  jal         func_2E4258
label_2da7e0:
    if (ctx->pc == 0x2DA7E0u) {
        ctx->pc = 0x2DA7E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7DCu;
        // 0x2da7e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7E4u;
        goto label_2da7e4;
    }
    ctx->pc = 0x2DA7DCu;
    SET_GPR_U32(ctx, 31, 0x2DA7E4u);
    ctx->pc = 0x2DA7E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DA7DCu;
    // 0x2da7e0: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4258u, 0x2DA7DCu, 0x2DA7E4u)) {
        return;
    }
    ctx->pc = 0x2DA7E4u;
label_2da7e4:
    // 0x2da7e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2da7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2da7e8:
    // 0x2da7e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2da7e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2da7ec:
    // 0x2da7ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2da7ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2da7f0:
    // 0x2da7f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2da7f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da7f4:
    // 0x2da7f4: 0x3e00008  jr          $ra
label_2da7f8:
    if (ctx->pc == 0x2DA7F8u) {
        ctx->pc = 0x2DA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7F4u;
        // 0x2da7f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DA7FCu;
        goto label_2da7fc;
    }
    ctx->pc = 0x2DA7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DA7F4u;
        // 0x2da7f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DA7F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DA7FCu;
label_2da7fc:
    // 0x2da7fc: 0x0  nop
    ctx->pc = 0x2da7fcu;
    // NOP
    ctx->pc = 0x2da800u;
}
