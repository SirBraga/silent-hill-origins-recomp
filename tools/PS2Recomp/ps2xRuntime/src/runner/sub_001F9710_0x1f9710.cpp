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

// Function: sub_001F9710
// Address: 0x1f9710 - 0x1f98bc
void sub_001F9710_0x1f9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9710_0x1f9710");
#endif

    switch (ctx->pc) {
        case 0x1f9710u: goto label_1f9710;
        case 0x1f9714u: goto label_1f9714;
        case 0x1f9718u: goto label_1f9718;
        case 0x1f971cu: goto label_1f971c;
        case 0x1f9720u: goto label_1f9720;
        case 0x1f9724u: goto label_1f9724;
        case 0x1f9728u: goto label_1f9728;
        case 0x1f972cu: goto label_1f972c;
        case 0x1f9730u: goto label_1f9730;
        case 0x1f9734u: goto label_1f9734;
        case 0x1f9738u: goto label_1f9738;
        case 0x1f973cu: goto label_1f973c;
        case 0x1f9740u: goto label_1f9740;
        case 0x1f9744u: goto label_1f9744;
        case 0x1f9748u: goto label_1f9748;
        case 0x1f974cu: goto label_1f974c;
        case 0x1f9750u: goto label_1f9750;
        case 0x1f9754u: goto label_1f9754;
        case 0x1f9758u: goto label_1f9758;
        case 0x1f975cu: goto label_1f975c;
        case 0x1f9760u: goto label_1f9760;
        case 0x1f9764u: goto label_1f9764;
        case 0x1f9768u: goto label_1f9768;
        case 0x1f976cu: goto label_1f976c;
        case 0x1f9770u: goto label_1f9770;
        case 0x1f9774u: goto label_1f9774;
        case 0x1f9778u: goto label_1f9778;
        case 0x1f977cu: goto label_1f977c;
        case 0x1f9780u: goto label_1f9780;
        case 0x1f9784u: goto label_1f9784;
        case 0x1f9788u: goto label_1f9788;
        case 0x1f978cu: goto label_1f978c;
        case 0x1f9790u: goto label_1f9790;
        case 0x1f9794u: goto label_1f9794;
        case 0x1f9798u: goto label_1f9798;
        case 0x1f979cu: goto label_1f979c;
        case 0x1f97a0u: goto label_1f97a0;
        case 0x1f97a4u: goto label_1f97a4;
        case 0x1f97a8u: goto label_1f97a8;
        case 0x1f97acu: goto label_1f97ac;
        case 0x1f97b0u: goto label_1f97b0;
        case 0x1f97b4u: goto label_1f97b4;
        case 0x1f97b8u: goto label_1f97b8;
        case 0x1f97bcu: goto label_1f97bc;
        case 0x1f97c0u: goto label_1f97c0;
        case 0x1f97c4u: goto label_1f97c4;
        case 0x1f97c8u: goto label_1f97c8;
        case 0x1f97ccu: goto label_1f97cc;
        case 0x1f97d0u: goto label_1f97d0;
        case 0x1f97d4u: goto label_1f97d4;
        case 0x1f97d8u: goto label_1f97d8;
        case 0x1f97dcu: goto label_1f97dc;
        case 0x1f97e0u: goto label_1f97e0;
        case 0x1f97e4u: goto label_1f97e4;
        case 0x1f97e8u: goto label_1f97e8;
        case 0x1f97ecu: goto label_1f97ec;
        case 0x1f97f0u: goto label_1f97f0;
        case 0x1f97f4u: goto label_1f97f4;
        case 0x1f97f8u: goto label_1f97f8;
        case 0x1f97fcu: goto label_1f97fc;
        case 0x1f9800u: goto label_1f9800;
        case 0x1f9804u: goto label_1f9804;
        case 0x1f9808u: goto label_1f9808;
        case 0x1f980cu: goto label_1f980c;
        case 0x1f9810u: goto label_1f9810;
        case 0x1f9814u: goto label_1f9814;
        case 0x1f9818u: goto label_1f9818;
        case 0x1f981cu: goto label_1f981c;
        case 0x1f9820u: goto label_1f9820;
        case 0x1f9824u: goto label_1f9824;
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        default: break;
    }

    ctx->pc = 0x1f9710u;

label_1f9710:
    // 0x1f9710: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1f9710u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1f9714:
    // 0x1f9714: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x1f9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_1f9718:
    // 0x1f9718: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x1f9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_1f971c:
    // 0x1f971c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1f971cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9720:
    // 0x1f9720: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1f9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1f9724:
    // 0x1f9724: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9724u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f9728:
    // 0x1f9728: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1f9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1f972c:
    // 0x1f972c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x1f972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_1f9730:
    // 0x1f9730: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x1f9730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_1f9734:
    // 0x1f9734: 0xc07e144  jal         func_1F8510
label_1f9738:
    if (ctx->pc == 0x1F9738u) {
        ctx->pc = 0x1F9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9734u;
        // 0x1f9738: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F973Cu;
        goto label_1f973c;
    }
    ctx->pc = 0x1F9734u;
    SET_GPR_U32(ctx, 31, 0x1F973Cu);
    ctx->pc = 0x1F9738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9734u;
    // 0x1f9738: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8510u, 0x1F9734u, 0x1F973Cu)) {
        return;
    }
    ctx->pc = 0x1F973Cu;
label_1f973c:
    // 0x1f973c: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_1f9740:
    if (ctx->pc == 0x1F9740u) {
        ctx->pc = 0x1F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F973Cu;
        // 0x1f9740: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9744u;
        goto label_1f9744;
    }
    ctx->pc = 0x1F973Cu;
    {
        const bool branch_taken_0x1f973c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1F9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F973Cu;
        // 0x1f9740: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f973c) {
            ctx->pc = 0x1F9780u;
            goto label_1f9780;
        }
    }
    ctx->pc = 0x1F9744u;
label_1f9744:
    // 0x1f9744: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1f9744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f9748:
    // 0x1f9748: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1f9748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f974c:
    // 0x1f974c: 0x0  nop
    ctx->pc = 0x1f974cu;
    // NOP
label_1f9750:
    // 0x1f9750: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f9750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9754:
    // 0x1f9754: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x1f9754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_1f9758:
    // 0x1f9758: 0xc07ec9e  jal         func_1FB278
label_1f975c:
    if (ctx->pc == 0x1F975Cu) {
        ctx->pc = 0x1F975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9758u;
        // 0x1f975c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9760u;
        goto label_1f9760;
    }
    ctx->pc = 0x1F9758u;
    SET_GPR_U32(ctx, 31, 0x1F9760u);
    ctx->pc = 0x1F975Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9758u;
    // 0x1f975c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB278u, 0x1F9758u, 0x1F9760u)) {
        return;
    }
    ctx->pc = 0x1F9760u;
label_1f9760:
    // 0x1f9760: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f9764:
    if (ctx->pc == 0x1F9764u) {
        ctx->pc = 0x1F9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9760u;
        // 0x1f9764: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9768u;
        goto label_1f9768;
    }
    ctx->pc = 0x1F9760u;
    {
        const bool branch_taken_0x1f9760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9760) {
            ctx->pc = 0x1F9764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F9760u;
            // 0x1f9764: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F9778u;
            goto label_1f9778;
        }
    }
    ctx->pc = 0x1F9768u;
label_1f9768:
    // 0x1f9768: 0xc07e5b8  jal         func_1F96E0
label_1f976c:
    if (ctx->pc == 0x1F976Cu) {
        ctx->pc = 0x1F9770u;
        goto label_1f9770;
    }
    ctx->pc = 0x1F9768u;
    SET_GPR_U32(ctx, 31, 0x1F9770u);
    ctx->pc = 0x1F96E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F96E0u, 0x1F9768u, 0x1F9770u)) {
        return;
    }
    ctx->pc = 0x1F9770u;
label_1f9770:
    // 0x1f9770: 0xc07e3f2  jal         func_1F8FC8
label_1f9774:
    if (ctx->pc == 0x1F9774u) {
        ctx->pc = 0x1F9778u;
        goto label_1f9778;
    }
    ctx->pc = 0x1F9770u;
    SET_GPR_U32(ctx, 31, 0x1F9778u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9770u, 0x1F9778u)) {
        return;
    }
    ctx->pc = 0x1F9778u;
label_1f9778:
    // 0x1f9778: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_1f977c:
    if (ctx->pc == 0x1F977Cu) {
        ctx->pc = 0x1F977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9778u;
        // 0x1f977c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9780u;
        goto label_1f9780;
    }
    ctx->pc = 0x1F9778u;
    {
        const bool branch_taken_0x1f9778 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F977Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9778u;
        // 0x1f977c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9778) {
            ctx->pc = 0x1F9750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9750;
        }
    }
    ctx->pc = 0x1F9780u;
label_1f9780:
    // 0x1f9780: 0xc07e50e  jal         func_1F9438
label_1f9784:
    if (ctx->pc == 0x1F9784u) {
        ctx->pc = 0x1F9788u;
        goto label_1f9788;
    }
    ctx->pc = 0x1F9780u;
    SET_GPR_U32(ctx, 31, 0x1F9788u);
    ctx->pc = 0x1F9438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9438u, 0x1F9780u, 0x1F9788u)) {
        return;
    }
    ctx->pc = 0x1F9788u;
label_1f9788:
    // 0x1f9788: 0xc07e3f2  jal         func_1F8FC8
label_1f978c:
    if (ctx->pc == 0x1F978Cu) {
        ctx->pc = 0x1F9790u;
        goto label_1f9790;
    }
    ctx->pc = 0x1F9788u;
    SET_GPR_U32(ctx, 31, 0x1F9790u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9788u, 0x1F9790u)) {
        return;
    }
    ctx->pc = 0x1F9790u;
label_1f9790:
    // 0x1f9790: 0xc07e526  jal         func_1F9498
label_1f9794:
    if (ctx->pc == 0x1F9794u) {
        ctx->pc = 0x1F9798u;
        goto label_1f9798;
    }
    ctx->pc = 0x1F9790u;
    SET_GPR_U32(ctx, 31, 0x1F9798u);
    ctx->pc = 0x1F9498u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9498u, 0x1F9790u, 0x1F9798u)) {
        return;
    }
    ctx->pc = 0x1F9798u;
label_1f9798:
    // 0x1f9798: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1f9798u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f979c:
    // 0x1f979c: 0x12540012  beq         $s2, $s4, . + 4 + (0x12 << 2)
label_1f97a0:
    if (ctx->pc == 0x1F97A0u) {
        ctx->pc = 0x1F97A4u;
        goto label_1f97a4;
    }
    ctx->pc = 0x1F979Cu;
    {
        const bool branch_taken_0x1f979c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        if (branch_taken_0x1f979c) {
            ctx->pc = 0x1F97E8u;
            goto label_1f97e8;
        }
    }
    ctx->pc = 0x1F97A4u;
label_1f97a4:
    // 0x1f97a4: 0x1a600010  blez        $s3, . + 4 + (0x10 << 2)
label_1f97a8:
    if (ctx->pc == 0x1F97A8u) {
        ctx->pc = 0x1F97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A4u;
        // 0x1f97a8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97ACu;
        goto label_1f97ac;
    }
    ctx->pc = 0x1F97A4u;
    {
        const bool branch_taken_0x1f97a4 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1F97A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97A4u;
        // 0x1f97a8: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97a4) {
            ctx->pc = 0x1F97E8u;
            goto label_1f97e8;
        }
    }
    ctx->pc = 0x1F97ACu;
label_1f97ac:
    // 0x1f97ac: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x1f97acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1f97b0:
    // 0x1f97b0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x1f97b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1f97b4:
    // 0x1f97b4: 0x0  nop
    ctx->pc = 0x1f97b4u;
    // NOP
label_1f97b8:
    // 0x1f97b8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1f97b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f97bc:
    // 0x1f97bc: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x1f97bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_1f97c0:
    // 0x1f97c0: 0xc07ec9e  jal         func_1FB278
label_1f97c4:
    if (ctx->pc == 0x1F97C4u) {
        ctx->pc = 0x1F97C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C0u;
        // 0x1f97c4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97C8u;
        goto label_1f97c8;
    }
    ctx->pc = 0x1F97C0u;
    SET_GPR_U32(ctx, 31, 0x1F97C8u);
    ctx->pc = 0x1F97C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97C0u;
    // 0x1f97c4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB278u, 0x1F97C0u, 0x1F97C8u)) {
        return;
    }
    ctx->pc = 0x1F97C8u;
label_1f97c8:
    // 0x1f97c8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f97cc:
    if (ctx->pc == 0x1F97CCu) {
        ctx->pc = 0x1F97CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97C8u;
        // 0x1f97cc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97D0u;
        goto label_1f97d0;
    }
    ctx->pc = 0x1F97C8u;
    {
        const bool branch_taken_0x1f97c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f97c8) {
            ctx->pc = 0x1F97CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F97C8u;
            // 0x1f97cc: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F97E0u;
            goto label_1f97e0;
        }
    }
    ctx->pc = 0x1F97D0u;
label_1f97d0:
    // 0x1f97d0: 0xc07e5b8  jal         func_1F96E0
label_1f97d4:
    if (ctx->pc == 0x1F97D4u) {
        ctx->pc = 0x1F97D8u;
        goto label_1f97d8;
    }
    ctx->pc = 0x1F97D0u;
    SET_GPR_U32(ctx, 31, 0x1F97D8u);
    ctx->pc = 0x1F96E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F96E0u, 0x1F97D0u, 0x1F97D8u)) {
        return;
    }
    ctx->pc = 0x1F97D8u;
label_1f97d8:
    // 0x1f97d8: 0xc07e3f2  jal         func_1F8FC8
label_1f97dc:
    if (ctx->pc == 0x1F97DCu) {
        ctx->pc = 0x1F97E0u;
        goto label_1f97e0;
    }
    ctx->pc = 0x1F97D8u;
    SET_GPR_U32(ctx, 31, 0x1F97E0u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F97D8u, 0x1F97E0u)) {
        return;
    }
    ctx->pc = 0x1F97E0u;
label_1f97e0:
    // 0x1f97e0: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
label_1f97e4:
    if (ctx->pc == 0x1F97E4u) {
        ctx->pc = 0x1F97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E0u;
        // 0x1f97e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97E8u;
        goto label_1f97e8;
    }
    ctx->pc = 0x1F97E0u;
    {
        const bool branch_taken_0x1f97e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F97E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E0u;
        // 0x1f97e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97e0) {
            ctx->pc = 0x1F97B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f97b8;
        }
    }
    ctx->pc = 0x1F97E8u;
label_1f97e8:
    // 0x1f97e8: 0xc07e69c  jal         func_1F9A70
label_1f97ec:
    if (ctx->pc == 0x1F97ECu) {
        ctx->pc = 0x1F97ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97E8u;
        // 0x1f97ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97F0u;
        goto label_1f97f0;
    }
    ctx->pc = 0x1F97E8u;
    SET_GPR_U32(ctx, 31, 0x1F97F0u);
    ctx->pc = 0x1F97ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F97E8u;
    // 0x1f97ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9A70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9A70u, 0x1F97E8u, 0x1F97F0u)) {
        return;
    }
    ctx->pc = 0x1F97F0u;
label_1f97f0:
    // 0x1f97f0: 0x1a600025  blez        $s3, . + 4 + (0x25 << 2)
label_1f97f4:
    if (ctx->pc == 0x1F97F4u) {
        ctx->pc = 0x1F97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97F0u;
        // 0x1f97f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F97F8u;
        goto label_1f97f8;
    }
    ctx->pc = 0x1F97F0u;
    {
        const bool branch_taken_0x1f97f0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x1F97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F97F0u;
        // 0x1f97f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f97f0) {
            ctx->pc = 0x1F9888u;
            goto label_1f9888;
        }
    }
    ctx->pc = 0x1F97F8u;
label_1f97f8:
    // 0x1f97f8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x1f97f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_1f97fc:
    // 0x1f97fc: 0x0  nop
    ctx->pc = 0x1f97fcu;
    // NOP
label_1f9800:
    // 0x1f9800: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1f9800u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_1f9804:
    // 0x1f9804: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1f9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1f9808:
    // 0x1f9808: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f9808u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f980c:
    // 0x1f980c: 0xc07ec9e  jal         func_1FB278
label_1f9810:
    if (ctx->pc == 0x1F9810u) {
        ctx->pc = 0x1F9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F980Cu;
        // 0x1f9810: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9814u;
        goto label_1f9814;
    }
    ctx->pc = 0x1F980Cu;
    SET_GPR_U32(ctx, 31, 0x1F9814u);
    ctx->pc = 0x1F9810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F980Cu;
    // 0x1f9810: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FB278u, 0x1F980Cu, 0x1F9814u)) {
        return;
    }
    ctx->pc = 0x1F9814u;
label_1f9814:
    // 0x1f9814: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1f9818:
    if (ctx->pc == 0x1F9818u) {
        ctx->pc = 0x1F9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9814u;
        // 0x1f9818: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F981Cu;
        goto label_1f981c;
    }
    ctx->pc = 0x1F9814u;
    {
        const bool branch_taken_0x1f9814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9814u;
        // 0x1f9818: 0x3c02006a  lui         $v0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9814) {
            ctx->pc = 0x1F9878u;
            goto label_1f9878;
        }
    }
    ctx->pc = 0x1F981Cu;
label_1f981c:
    // 0x1f981c: 0x3c12006a  lui         $s2, 0x6A
    ctx->pc = 0x1f981cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)106 << 16));
label_1f9820:
    // 0x1f9820: 0x24512ce0  addiu       $s1, $v0, 0x2CE0
    ctx->pc = 0x1f9820u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 11488));
label_1f9824:
    // 0x1f9824: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1f9824u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1f9828:
    // 0x1f9828: 0xc07e534  jal         func_1F94D0
label_1f982c:
    if (ctx->pc == 0x1F982Cu) {
        ctx->pc = 0x1F982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9828u;
        // 0x1f982c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9830u;
        goto label_1f9830;
    }
    ctx->pc = 0x1F9828u;
    SET_GPR_U32(ctx, 31, 0x1F9830u);
    ctx->pc = 0x1F982Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9828u;
    // 0x1f982c: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F94D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F94D0u, 0x1F9828u, 0x1F9830u)) {
        return;
    }
    ctx->pc = 0x1F9830u;
label_1f9830:
    // 0x1f9830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9834:
    // 0x1f9834: 0x10000003  b           . + 4 + (0x3 << 2)
label_1f9838:
    if (ctx->pc == 0x1F9838u) {
        ctx->pc = 0x1F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9834u;
        // 0x1f9838: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F983Cu;
        goto label_1f983c;
    }
    ctx->pc = 0x1F9834u;
    {
        const bool branch_taken_0x1f9834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9834u;
        // 0x1f9838: 0xae110000  sw          $s1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9834) {
            ctx->pc = 0x1F9844u;
            goto label_1f9844;
        }
    }
    ctx->pc = 0x1F983Cu;
label_1f983c:
    // 0x1f983c: 0xc07e3f2  jal         func_1F8FC8
label_1f9840:
    if (ctx->pc == 0x1F9840u) {
        ctx->pc = 0x1F9844u;
        goto label_1f9844;
    }
    ctx->pc = 0x1F983Cu;
    SET_GPR_U32(ctx, 31, 0x1F9844u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F983Cu, 0x1F9844u)) {
        return;
    }
    ctx->pc = 0x1F9844u;
label_1f9844:
    // 0x1f9844: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f9844u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f9848:
    // 0x1f9848: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1f9848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1f984c:
    // 0x1f984c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1f984cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1f9850:
    // 0x1f9850: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1f9850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1f9854:
    // 0x1f9854: 0x40f809  jalr        $v0
label_1f9858:
    if (ctx->pc == 0x1F9858u) {
        ctx->pc = 0x1F985Cu;
        goto label_1f985c;
    }
    ctx->pc = 0x1F9854u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F985Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F9854u, 0x1F985Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1F985Cu;
label_1f985c:
    // 0x1f985c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x1f985cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
label_1f9860:
    // 0x1f9860: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9864:
    // 0x1f9864: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f9864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f9868:
    // 0x1f9868: 0xc07e562  jal         func_1F9588
label_1f986c:
    if (ctx->pc == 0x1F986Cu) {
        ctx->pc = 0x1F986Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9868u;
        // 0x1f986c: 0x24c69a28  addiu       $a2, $a2, -0x65D8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9870u;
        goto label_1f9870;
    }
    ctx->pc = 0x1F9868u;
    SET_GPR_U32(ctx, 31, 0x1F9870u);
    ctx->pc = 0x1F986Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9868u;
    // 0x1f986c: 0x24c69a28  addiu       $a2, $a2, -0x65D8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941224));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9588u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9588u, 0x1F9868u, 0x1F9870u)) {
        return;
    }
    ctx->pc = 0x1F9870u;
label_1f9870:
    // 0x1f9870: 0xc07e3f2  jal         func_1F8FC8
label_1f9874:
    if (ctx->pc == 0x1F9874u) {
        ctx->pc = 0x1F9878u;
        goto label_1f9878;
    }
    ctx->pc = 0x1F9870u;
    SET_GPR_U32(ctx, 31, 0x1F9878u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9870u, 0x1F9878u)) {
        return;
    }
    ctx->pc = 0x1F9878u;
label_1f9878:
    // 0x1f9878: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f9878u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1f987c:
    // 0x1f987c: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x1f987cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1f9880:
    // 0x1f9880: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_1f9884:
    if (ctx->pc == 0x1F9884u) {
        ctx->pc = 0x1F9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9880u;
        // 0x1f9884: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F9888u;
        goto label_1f9888;
    }
    ctx->pc = 0x1F9880u;
    {
        const bool branch_taken_0x1f9880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F9884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F9880u;
        // 0x1f9884: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9880) {
            ctx->pc = 0x1F9800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9800;
        }
    }
    ctx->pc = 0x1F9888u;
label_1f9888:
    // 0x1f9888: 0xc07e4fc  jal         func_1F93F0
label_1f988c:
    if (ctx->pc == 0x1F988Cu) {
        ctx->pc = 0x1F9890u;
        goto label_1f9890;
    }
    ctx->pc = 0x1F9888u;
    SET_GPR_U32(ctx, 31, 0x1F9890u);
    ctx->pc = 0x1F93F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F93F0u, 0x1F9888u, 0x1F9890u)) {
        return;
    }
    ctx->pc = 0x1F9890u;
label_1f9890:
    // 0x1f9890: 0xc07e3f2  jal         func_1F8FC8
label_1f9894:
    if (ctx->pc == 0x1F9894u) {
        ctx->pc = 0x1F9898u;
        goto label_1f9898;
    }
    ctx->pc = 0x1F9890u;
    SET_GPR_U32(ctx, 31, 0x1F9898u);
    ctx->pc = 0x1F8FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8FC8u, 0x1F9890u, 0x1F9898u)) {
        return;
    }
    ctx->pc = 0x1F9898u;
label_1f9898:
    // 0x1f9898: 0x26422cf8  addiu       $v0, $s2, 0x2CF8
    ctx->pc = 0x1f9898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 11512));
label_1f989c:
    // 0x1f989c: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
label_1f98a0:
    if (ctx->pc == 0x1F98A0u) {
        ctx->pc = 0x1F98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F989Cu;
        // 0x1f98a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98A4u;
        goto label_1f98a4;
    }
    ctx->pc = 0x1F989Cu;
    {
        const bool branch_taken_0x1f989c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F989Cu;
        // 0x1f98a0: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f989c) {
            ctx->pc = 0x1F983Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f983c;
        }
    }
    ctx->pc = 0x1F98A4u;
label_1f98a4:
    // 0x1f98a4: 0xc07e586  jal         func_1F9618
label_1f98a8:
    if (ctx->pc == 0x1F98A8u) {
        ctx->pc = 0x1F98A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F98A4u;
        // 0x1f98a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1F98ACu;
        goto label_1f98ac;
    }
    ctx->pc = 0x1F98A4u;
    SET_GPR_U32(ctx, 31, 0x1F98ACu);
    ctx->pc = 0x1F98A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F98A4u;
    // 0x1f98a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9618u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9618u, 0x1F98A4u, 0x1F98ACu)) {
        return;
    }
    ctx->pc = 0x1F98ACu;
label_1f98ac:
    // 0x1f98ac: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_1f98b0:
    if (ctx->pc == 0x1F98B0u) {
        ctx->pc = 0x1F98B4u;
        goto label_1f98b4;
    }
    ctx->pc = 0x1F98ACu;
    {
        const bool branch_taken_0x1f98ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98ac) {
            ctx->pc = 0x1F9890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9890;
        }
    }
    ctx->pc = 0x1F98B4u;
label_1f98b4:
    // 0x1f98b4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_1f98b8:
    if (ctx->pc == 0x1F98B8u) {
        ctx->pc = 0x1F98BCu;
        goto label_fallthrough_0x1f98b4;
    }
    ctx->pc = 0x1F98B4u;
    {
        const bool branch_taken_0x1f98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98b4) {
            ctx->pc = 0x1F9788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f9788;
        }
    }
label_fallthrough_0x1f98b4:
    ctx->pc = 0x1F98BCu;
}
