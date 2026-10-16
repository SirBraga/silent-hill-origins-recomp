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

// Function: sub_00200748
// Address: 0x200748 - 0x200888
void sub_00200748_0x200748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200748_0x200748");
#endif

    switch (ctx->pc) {
        case 0x200748u: goto label_200748;
        case 0x20074cu: goto label_20074c;
        case 0x200750u: goto label_200750;
        case 0x200754u: goto label_200754;
        case 0x200758u: goto label_200758;
        case 0x20075cu: goto label_20075c;
        case 0x200760u: goto label_200760;
        case 0x200764u: goto label_200764;
        case 0x200768u: goto label_200768;
        case 0x20076cu: goto label_20076c;
        case 0x200770u: goto label_200770;
        case 0x200774u: goto label_200774;
        case 0x200778u: goto label_200778;
        case 0x20077cu: goto label_20077c;
        case 0x200780u: goto label_200780;
        case 0x200784u: goto label_200784;
        case 0x200788u: goto label_200788;
        case 0x20078cu: goto label_20078c;
        case 0x200790u: goto label_200790;
        case 0x200794u: goto label_200794;
        case 0x200798u: goto label_200798;
        case 0x20079cu: goto label_20079c;
        case 0x2007a0u: goto label_2007a0;
        case 0x2007a4u: goto label_2007a4;
        case 0x2007a8u: goto label_2007a8;
        case 0x2007acu: goto label_2007ac;
        case 0x2007b0u: goto label_2007b0;
        case 0x2007b4u: goto label_2007b4;
        case 0x2007b8u: goto label_2007b8;
        case 0x2007bcu: goto label_2007bc;
        case 0x2007c0u: goto label_2007c0;
        case 0x2007c4u: goto label_2007c4;
        case 0x2007c8u: goto label_2007c8;
        case 0x2007ccu: goto label_2007cc;
        case 0x2007d0u: goto label_2007d0;
        case 0x2007d4u: goto label_2007d4;
        case 0x2007d8u: goto label_2007d8;
        case 0x2007dcu: goto label_2007dc;
        case 0x2007e0u: goto label_2007e0;
        case 0x2007e4u: goto label_2007e4;
        case 0x2007e8u: goto label_2007e8;
        case 0x2007ecu: goto label_2007ec;
        case 0x2007f0u: goto label_2007f0;
        case 0x2007f4u: goto label_2007f4;
        case 0x2007f8u: goto label_2007f8;
        case 0x2007fcu: goto label_2007fc;
        case 0x200800u: goto label_200800;
        case 0x200804u: goto label_200804;
        case 0x200808u: goto label_200808;
        case 0x20080cu: goto label_20080c;
        case 0x200810u: goto label_200810;
        case 0x200814u: goto label_200814;
        case 0x200818u: goto label_200818;
        case 0x20081cu: goto label_20081c;
        case 0x200820u: goto label_200820;
        case 0x200824u: goto label_200824;
        case 0x200828u: goto label_200828;
        case 0x20082cu: goto label_20082c;
        case 0x200830u: goto label_200830;
        case 0x200834u: goto label_200834;
        case 0x200838u: goto label_200838;
        case 0x20083cu: goto label_20083c;
        case 0x200840u: goto label_200840;
        case 0x200844u: goto label_200844;
        case 0x200848u: goto label_200848;
        case 0x20084cu: goto label_20084c;
        case 0x200850u: goto label_200850;
        case 0x200854u: goto label_200854;
        case 0x200858u: goto label_200858;
        case 0x20085cu: goto label_20085c;
        case 0x200860u: goto label_200860;
        case 0x200864u: goto label_200864;
        case 0x200868u: goto label_200868;
        case 0x20086cu: goto label_20086c;
        case 0x200870u: goto label_200870;
        case 0x200874u: goto label_200874;
        case 0x200878u: goto label_200878;
        case 0x20087cu: goto label_20087c;
        case 0x200880u: goto label_200880;
        case 0x200884u: goto label_200884;
        default: break;
    }

    ctx->pc = 0x200748u;

label_200748:
    // 0x200748: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x200748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_20074c:
    // 0x20074c: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x20074cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_200750:
    // 0x200750: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x200750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_200754:
    // 0x200754: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x200754u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_200758:
    // 0x200758: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x200758u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_20075c:
    // 0x20075c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20075cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_200760:
    // 0x200760: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x200760u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_200764:
    // 0x200764: 0xc07f8aa  jal         func_1FE2A8
label_200768:
    if (ctx->pc == 0x200768u) {
        ctx->pc = 0x200768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200764u;
        // 0x200768: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20076Cu;
        goto label_20076c;
    }
    ctx->pc = 0x200764u;
    SET_GPR_U32(ctx, 31, 0x20076Cu);
    ctx->pc = 0x200768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200764u;
    // 0x200768: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE2A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE2A8u, 0x200764u, 0x20076Cu)) {
        return;
    }
    ctx->pc = 0x20076Cu;
label_20076c:
    // 0x20076c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x20076cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200770:
    // 0x200770: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x200770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_200774:
    // 0x200774: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x200774u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_200778:
    // 0x200778: 0xc08063c  jal         func_2018F0
label_20077c:
    if (ctx->pc == 0x20077Cu) {
        ctx->pc = 0x20077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200778u;
        // 0x20077c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200780u;
        goto label_200780;
    }
    ctx->pc = 0x200778u;
    SET_GPR_U32(ctx, 31, 0x200780u);
    ctx->pc = 0x20077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200778u;
    // 0x20077c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2018F0u, 0x200778u, 0x200780u)) {
        return;
    }
    ctx->pc = 0x200780u;
label_200780:
    // 0x200780: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x200780u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200784:
    // 0x200784: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x200784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
label_200788:
    // 0x200788: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x200788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_20078c:
    // 0x20078c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20078cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_200790:
    // 0x200790: 0x2450108c  addiu       $s0, $v0, 0x108C
    ctx->pc = 0x200790u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_200794:
    // 0x200794: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x200794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_200798:
    // 0x200798: 0x40f809  jalr        $v0
label_20079c:
    if (ctx->pc == 0x20079Cu) {
        ctx->pc = 0x20079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200798u;
        // 0x20079c: 0x24843630  addiu       $a0, $a0, 0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007A0u;
        goto label_2007a0;
    }
    ctx->pc = 0x200798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007A0u);
        ctx->pc = 0x20079Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200798u;
        // 0x20079c: 0x24843630  addiu       $a0, $a0, 0x3630 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200798u, 0x2007A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2007A0u;
label_2007a0:
    // 0x2007a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2007a4:
    if (ctx->pc == 0x2007A4u) {
        ctx->pc = 0x2007A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A0u;
        // 0x2007a4: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007A8u;
        goto label_2007a8;
    }
    ctx->pc = 0x2007A0u;
    {
        const bool branch_taken_0x2007a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A0u;
        // 0x2007a4: 0x3c04006a  lui         $a0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007a0) {
            ctx->pc = 0x2007B8u;
            goto label_2007b8;
        }
    }
    ctx->pc = 0x2007A8u;
label_2007a8:
    // 0x2007a8: 0xc095556  jal         func_255558
label_2007ac:
    if (ctx->pc == 0x2007ACu) {
        ctx->pc = 0x2007ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007A8u;
        // 0x2007ac: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B0u;
        goto label_2007b0;
    }
    ctx->pc = 0x2007A8u;
    SET_GPR_U32(ctx, 31, 0x2007B0u);
    ctx->pc = 0x2007ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007A8u;
    // 0x2007ac: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255558u, 0x2007A8u, 0x2007B0u)) {
        return;
    }
    ctx->pc = 0x2007B0u;
label_2007b0:
    // 0x2007b0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_2007b4:
    if (ctx->pc == 0x2007B4u) {
        ctx->pc = 0x2007B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007B0u;
        // 0x2007b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007B8u;
        goto label_2007b8;
    }
    ctx->pc = 0x2007B0u;
    {
        const bool branch_taken_0x2007b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2007B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007B0u;
        // 0x2007b4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007b0) {
            ctx->pc = 0x200820u;
            goto label_200820;
        }
    }
    ctx->pc = 0x2007B8u;
label_2007b8:
    // 0x2007b8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2007b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2007bc:
    // 0x2007bc: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2007bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2007c0:
    // 0x2007c0: 0x40f809  jalr        $v0
label_2007c4:
    if (ctx->pc == 0x2007C4u) {
        ctx->pc = 0x2007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007C0u;
        // 0x2007c4: 0x24843640  addiu       $a0, $a0, 0x3640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007C8u;
        goto label_2007c8;
    }
    ctx->pc = 0x2007C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2007C8u);
        ctx->pc = 0x2007C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007C0u;
        // 0x2007c4: 0x24843640  addiu       $a0, $a0, 0x3640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13888));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2007C0u, 0x2007C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2007C8u;
label_2007c8:
    // 0x2007c8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_2007cc:
    if (ctx->pc == 0x2007CCu) {
        ctx->pc = 0x2007D0u;
        goto label_2007d0;
    }
    ctx->pc = 0x2007C8u;
    {
        const bool branch_taken_0x2007c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2007c8) {
            ctx->pc = 0x200820u;
            goto label_200820;
        }
    }
    ctx->pc = 0x2007D0u;
label_2007d0:
    // 0x2007d0: 0xc095596  jal         func_255658
label_2007d4:
    if (ctx->pc == 0x2007D4u) {
        ctx->pc = 0x2007D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007D0u;
        // 0x2007d4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007D8u;
        goto label_2007d8;
    }
    ctx->pc = 0x2007D0u;
    SET_GPR_U32(ctx, 31, 0x2007D8u);
    ctx->pc = 0x2007D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007D0u;
    // 0x2007d4: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255658u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255658u, 0x2007D0u, 0x2007D8u)) {
        return;
    }
    ctx->pc = 0x2007D8u;
label_2007d8:
    // 0x2007d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2007d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2007dc:
    // 0x2007dc: 0xc095426  jal         func_255098
label_2007e0:
    if (ctx->pc == 0x2007E0u) {
        ctx->pc = 0x2007E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007DCu;
        // 0x2007e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007E4u;
        goto label_2007e4;
    }
    ctx->pc = 0x2007DCu;
    SET_GPR_U32(ctx, 31, 0x2007E4u);
    ctx->pc = 0x2007E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007DCu;
    // 0x2007e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255098u, 0x2007DCu, 0x2007E4u)) {
        return;
    }
    ctx->pc = 0x2007E4u;
label_2007e4:
    // 0x2007e4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2007e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2007e8:
    // 0x2007e8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2007ec:
    if (ctx->pc == 0x2007ECu) {
        ctx->pc = 0x2007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E8u;
        // 0x2007ec: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007F0u;
        goto label_2007f0;
    }
    ctx->pc = 0x2007E8u;
    {
        const bool branch_taken_0x2007e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2007ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007E8u;
        // 0x2007ec: 0x3c050020  lui         $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2007e8) {
            ctx->pc = 0x200800u;
            goto label_200800;
        }
    }
    ctx->pc = 0x2007F0u;
label_2007f0:
    // 0x2007f0: 0xc0955f8  jal         func_2557E0
label_2007f4:
    if (ctx->pc == 0x2007F4u) {
        ctx->pc = 0x2007F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2007F0u;
        // 0x2007f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2007F8u;
        goto label_2007f8;
    }
    ctx->pc = 0x2007F0u;
    SET_GPR_U32(ctx, 31, 0x2007F8u);
    ctx->pc = 0x2007F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2007F0u;
    // 0x2007f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x2007F0u, 0x2007F8u)) {
        return;
    }
    ctx->pc = 0x2007F8u;
label_2007f8:
    // 0x2007f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_2007fc:
    if (ctx->pc == 0x2007FCu) {
        ctx->pc = 0x200800u;
        goto label_200800;
    }
    ctx->pc = 0x2007F8u;
    {
        const bool branch_taken_0x2007f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2007f8) {
            ctx->pc = 0x200820u;
            goto label_200820;
        }
    }
    ctx->pc = 0x200800u;
label_200800:
    // 0x200800: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200804:
    // 0x200804: 0x24a50de8  addiu       $a1, $a1, 0xDE8
    ctx->pc = 0x200804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3560));
label_200808:
    // 0x200808: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x200808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_20080c:
    // 0x20080c: 0xc09545a  jal         func_255168
label_200810:
    if (ctx->pc == 0x200810u) {
        ctx->pc = 0x200810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20080Cu;
        // 0x200810: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x200814u;
        goto label_200814;
    }
    ctx->pc = 0x20080Cu;
    SET_GPR_U32(ctx, 31, 0x200814u);
    ctx->pc = 0x200810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20080Cu;
    // 0x200810: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x255168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255168u, 0x20080Cu, 0x200814u)) {
        return;
    }
    ctx->pc = 0x200814u;
label_200814:
    // 0x200814: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200818:
    // 0x200818: 0xc0955f8  jal         func_2557E0
label_20081c:
    if (ctx->pc == 0x20081Cu) {
        ctx->pc = 0x20081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200818u;
        // 0x20081c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200820u;
        goto label_200820;
    }
    ctx->pc = 0x200818u;
    SET_GPR_U32(ctx, 31, 0x200820u);
    ctx->pc = 0x20081Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200818u;
    // 0x20081c: 0x8fb10004  lw          $s1, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2557E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2557E0u, 0x200818u, 0x200820u)) {
        return;
    }
    ctx->pc = 0x200820u;
label_200820:
    // 0x200820: 0x12200011  beqz        $s1, . + 4 + (0x11 << 2)
label_200824:
    if (ctx->pc == 0x200824u) {
        ctx->pc = 0x200824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200820u;
        // 0x200824: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200828u;
        goto label_200828;
    }
    ctx->pc = 0x200820u;
    {
        const bool branch_taken_0x200820 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x200824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200820u;
        // 0x200824: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200820) {
            ctx->pc = 0x200868u;
            goto label_200868;
        }
    }
    ctx->pc = 0x200828u;
label_200828:
    // 0x200828: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x200828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20082c:
    // 0x20082c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_200830:
    if (ctx->pc == 0x200830u) {
        ctx->pc = 0x200834u;
        goto label_200834;
    }
    ctx->pc = 0x20082Cu;
    {
        const bool branch_taken_0x20082c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20082c) {
            ctx->pc = 0x200854u;
            goto label_200854;
        }
    }
    ctx->pc = 0x200834u;
label_200834:
    // 0x200834: 0xc089892  jal         func_226248
label_200838:
    if (ctx->pc == 0x200838u) {
        ctx->pc = 0x20083Cu;
        goto label_20083c;
    }
    ctx->pc = 0x200834u;
    SET_GPR_U32(ctx, 31, 0x20083Cu);
    ctx->pc = 0x226248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226248u, 0x200834u, 0x20083Cu)) {
        return;
    }
    ctx->pc = 0x20083Cu;
label_20083c:
    // 0x20083c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20083cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_200840:
    // 0x200840: 0xc089a04  jal         func_226810
label_200844:
    if (ctx->pc == 0x200844u) {
        ctx->pc = 0x200844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200840u;
        // 0x200844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200848u;
        goto label_200848;
    }
    ctx->pc = 0x200840u;
    SET_GPR_U32(ctx, 31, 0x200848u);
    ctx->pc = 0x200844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200840u;
    // 0x200844: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x200840u, 0x200848u)) {
        return;
    }
    ctx->pc = 0x200848u;
label_200848:
    // 0x200848: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x200848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20084c:
    // 0x20084c: 0xc0957f0  jal         func_255FC0
label_200850:
    if (ctx->pc == 0x200850u) {
        ctx->pc = 0x200850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20084Cu;
        // 0x200850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200854u;
        goto label_200854;
    }
    ctx->pc = 0x20084Cu;
    SET_GPR_U32(ctx, 31, 0x200854u);
    ctx->pc = 0x200850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20084Cu;
    // 0x200850: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x255FC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x255FC0u, 0x20084Cu, 0x200854u)) {
        return;
    }
    ctx->pc = 0x200854u;
label_200854:
    // 0x200854: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_200858:
    if (ctx->pc == 0x200858u) {
        ctx->pc = 0x200858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200854u;
        // 0x200858: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20085Cu;
        goto label_20085c;
    }
    ctx->pc = 0x200854u;
    {
        const bool branch_taken_0x200854 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x200858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200854u;
        // 0x200858: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200854) {
            ctx->pc = 0x200864u;
            goto label_200864;
        }
    }
    ctx->pc = 0x20085Cu;
label_20085c:
    // 0x20085c: 0xc07fdf0  jal         func_1FF7C0
label_200860:
    if (ctx->pc == 0x200860u) {
        ctx->pc = 0x200860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20085Cu;
        // 0x200860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200864u;
        goto label_200864;
    }
    ctx->pc = 0x20085Cu;
    SET_GPR_U32(ctx, 31, 0x200864u);
    ctx->pc = 0x200860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20085Cu;
    // 0x200860: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF7C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF7C0u, 0x20085Cu, 0x200864u)) {
        return;
    }
    ctx->pc = 0x200864u;
label_200864:
    // 0x200864: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x200864u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_200868:
    // 0x200868: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x200868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20086c:
    // 0x20086c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x20086cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_200870:
    // 0x200870: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x200870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_200874:
    // 0x200874: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x200874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_200878:
    // 0x200878: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x200878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20087c:
    // 0x20087c: 0x3e00008  jr          $ra
label_200880:
    if (ctx->pc == 0x200880u) {
        ctx->pc = 0x200880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20087Cu;
        // 0x200880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x200884u;
        goto label_200884;
    }
    ctx->pc = 0x20087Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20087Cu;
        // 0x200880: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20087Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200884u;
label_200884:
    // 0x200884: 0x0  nop
    ctx->pc = 0x200884u;
    // NOP
    ctx->pc = 0x200888u;
}
