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

// Function: sub_00154758
// Address: 0x154758 - 0x1548e0
void sub_00154758_0x154758(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154758_0x154758");
#endif

    switch (ctx->pc) {
        case 0x154758u: goto label_154758;
        case 0x15475cu: goto label_15475c;
        case 0x154760u: goto label_154760;
        case 0x154764u: goto label_154764;
        case 0x154768u: goto label_154768;
        case 0x15476cu: goto label_15476c;
        case 0x154770u: goto label_154770;
        case 0x154774u: goto label_154774;
        case 0x154778u: goto label_154778;
        case 0x15477cu: goto label_15477c;
        case 0x154780u: goto label_154780;
        case 0x154784u: goto label_154784;
        case 0x154788u: goto label_154788;
        case 0x15478cu: goto label_15478c;
        case 0x154790u: goto label_154790;
        case 0x154794u: goto label_154794;
        case 0x154798u: goto label_154798;
        case 0x15479cu: goto label_15479c;
        case 0x1547a0u: goto label_1547a0;
        case 0x1547a4u: goto label_1547a4;
        case 0x1547a8u: goto label_1547a8;
        case 0x1547acu: goto label_1547ac;
        case 0x1547b0u: goto label_1547b0;
        case 0x1547b4u: goto label_1547b4;
        case 0x1547b8u: goto label_1547b8;
        case 0x1547bcu: goto label_1547bc;
        case 0x1547c0u: goto label_1547c0;
        case 0x1547c4u: goto label_1547c4;
        case 0x1547c8u: goto label_1547c8;
        case 0x1547ccu: goto label_1547cc;
        case 0x1547d0u: goto label_1547d0;
        case 0x1547d4u: goto label_1547d4;
        case 0x1547d8u: goto label_1547d8;
        case 0x1547dcu: goto label_1547dc;
        case 0x1547e0u: goto label_1547e0;
        case 0x1547e4u: goto label_1547e4;
        case 0x1547e8u: goto label_1547e8;
        case 0x1547ecu: goto label_1547ec;
        case 0x1547f0u: goto label_1547f0;
        case 0x1547f4u: goto label_1547f4;
        case 0x1547f8u: goto label_1547f8;
        case 0x1547fcu: goto label_1547fc;
        case 0x154800u: goto label_154800;
        case 0x154804u: goto label_154804;
        case 0x154808u: goto label_154808;
        case 0x15480cu: goto label_15480c;
        case 0x154810u: goto label_154810;
        case 0x154814u: goto label_154814;
        case 0x154818u: goto label_154818;
        case 0x15481cu: goto label_15481c;
        case 0x154820u: goto label_154820;
        case 0x154824u: goto label_154824;
        case 0x154828u: goto label_154828;
        case 0x15482cu: goto label_15482c;
        case 0x154830u: goto label_154830;
        case 0x154834u: goto label_154834;
        case 0x154838u: goto label_154838;
        case 0x15483cu: goto label_15483c;
        case 0x154840u: goto label_154840;
        case 0x154844u: goto label_154844;
        case 0x154848u: goto label_154848;
        case 0x15484cu: goto label_15484c;
        case 0x154850u: goto label_154850;
        case 0x154854u: goto label_154854;
        case 0x154858u: goto label_154858;
        case 0x15485cu: goto label_15485c;
        case 0x154860u: goto label_154860;
        case 0x154864u: goto label_154864;
        case 0x154868u: goto label_154868;
        case 0x15486cu: goto label_15486c;
        case 0x154870u: goto label_154870;
        case 0x154874u: goto label_154874;
        case 0x154878u: goto label_154878;
        case 0x15487cu: goto label_15487c;
        case 0x154880u: goto label_154880;
        case 0x154884u: goto label_154884;
        case 0x154888u: goto label_154888;
        case 0x15488cu: goto label_15488c;
        case 0x154890u: goto label_154890;
        case 0x154894u: goto label_154894;
        case 0x154898u: goto label_154898;
        case 0x15489cu: goto label_15489c;
        case 0x1548a0u: goto label_1548a0;
        case 0x1548a4u: goto label_1548a4;
        case 0x1548a8u: goto label_1548a8;
        case 0x1548acu: goto label_1548ac;
        case 0x1548b0u: goto label_1548b0;
        case 0x1548b4u: goto label_1548b4;
        case 0x1548b8u: goto label_1548b8;
        case 0x1548bcu: goto label_1548bc;
        case 0x1548c0u: goto label_1548c0;
        case 0x1548c4u: goto label_1548c4;
        case 0x1548c8u: goto label_1548c8;
        case 0x1548ccu: goto label_1548cc;
        case 0x1548d0u: goto label_1548d0;
        case 0x1548d4u: goto label_1548d4;
        case 0x1548d8u: goto label_1548d8;
        case 0x1548dcu: goto label_1548dc;
        default: break;
    }

    ctx->pc = 0x154758u;

label_154758:
    // 0x154758: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x154758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_15475c:
    // 0x15475c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15475cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
label_154760:
    // 0x154760: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x154760u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_154764:
    // 0x154764: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x154764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_154768:
    // 0x154768: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x154768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_15476c:
    // 0x15476c: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x15476cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_154770:
    // 0x154770: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x154770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_154774:
    // 0x154774: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x154774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_154778:
    // 0x154778: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x154778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_15477c:
    // 0x15477c: 0x24422998  addiu       $v0, $v0, 0x2998
    ctx->pc = 0x15477cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10648));
label_154780:
    // 0x154780: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x154780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_154784:
    // 0x154784: 0x24632978  addiu       $v1, $v1, 0x2978
    ctx->pc = 0x154784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10616));
label_154788:
    // 0x154788: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x154788u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_15478c:
    // 0x15478c: 0x261046d0  addiu       $s0, $s0, 0x46D0
    ctx->pc = 0x15478cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18128));
label_154790:
    // 0x154790: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x154790u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_154794:
    // 0x154794: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x154794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
label_154798:
    // 0x154798: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x154798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
label_15479c:
    // 0x15479c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15479cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1547a0:
    // 0x1547a0: 0xc07fb0c  jal         func_1FEC30
label_1547a4:
    if (ctx->pc == 0x1547A4u) {
        ctx->pc = 0x1547A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547A0u;
        // 0x1547a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547A8u;
        goto label_1547a8;
    }
    ctx->pc = 0x1547A0u;
    SET_GPR_U32(ctx, 31, 0x1547A8u);
    ctx->pc = 0x1547A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547A0u;
    // 0x1547a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1547A0u, 0x1547A8u)) {
        return;
    }
    ctx->pc = 0x1547A8u;
label_1547a8:
    // 0x1547a8: 0xc07fac2  jal         func_1FEB08
label_1547ac:
    if (ctx->pc == 0x1547ACu) {
        ctx->pc = 0x1547ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547A8u;
        // 0x1547ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547B0u;
        goto label_1547b0;
    }
    ctx->pc = 0x1547A8u;
    SET_GPR_U32(ctx, 31, 0x1547B0u);
    ctx->pc = 0x1547ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547A8u;
    // 0x1547ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1547A8u, 0x1547B0u)) {
        return;
    }
    ctx->pc = 0x1547B0u;
label_1547b0:
    // 0x1547b0: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1547b0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_1547b4:
    // 0x1547b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1547b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1547b8:
    // 0x1547b8: 0x261046d8  addiu       $s0, $s0, 0x46D8
    ctx->pc = 0x1547b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18136));
label_1547bc:
    // 0x1547bc: 0xc07fb0c  jal         func_1FEC30
label_1547c0:
    if (ctx->pc == 0x1547C0u) {
        ctx->pc = 0x1547C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547BCu;
        // 0x1547c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547C4u;
        goto label_1547c4;
    }
    ctx->pc = 0x1547BCu;
    SET_GPR_U32(ctx, 31, 0x1547C4u);
    ctx->pc = 0x1547C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547BCu;
    // 0x1547c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1547BCu, 0x1547C4u)) {
        return;
    }
    ctx->pc = 0x1547C4u;
label_1547c4:
    // 0x1547c4: 0xc07fac2  jal         func_1FEB08
label_1547c8:
    if (ctx->pc == 0x1547C8u) {
        ctx->pc = 0x1547C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547C4u;
        // 0x1547c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547CCu;
        goto label_1547cc;
    }
    ctx->pc = 0x1547C4u;
    SET_GPR_U32(ctx, 31, 0x1547CCu);
    ctx->pc = 0x1547C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547C4u;
    // 0x1547c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1547C4u, 0x1547CCu)) {
        return;
    }
    ctx->pc = 0x1547CCu;
label_1547cc:
    // 0x1547cc: 0x3c10006b  lui         $s0, 0x6B
    ctx->pc = 0x1547ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)107 << 16));
label_1547d0:
    // 0x1547d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1547d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1547d4:
    // 0x1547d4: 0x261046e0  addiu       $s0, $s0, 0x46E0
    ctx->pc = 0x1547d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 18144));
label_1547d8:
    // 0x1547d8: 0xc07fb0c  jal         func_1FEC30
label_1547dc:
    if (ctx->pc == 0x1547DCu) {
        ctx->pc = 0x1547DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547D8u;
        // 0x1547dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547E0u;
        goto label_1547e0;
    }
    ctx->pc = 0x1547D8u;
    SET_GPR_U32(ctx, 31, 0x1547E0u);
    ctx->pc = 0x1547DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547D8u;
    // 0x1547dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1547D8u, 0x1547E0u)) {
        return;
    }
    ctx->pc = 0x1547E0u;
label_1547e0:
    // 0x1547e0: 0xc07fac2  jal         func_1FEB08
label_1547e4:
    if (ctx->pc == 0x1547E4u) {
        ctx->pc = 0x1547E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547E0u;
        // 0x1547e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547E8u;
        goto label_1547e8;
    }
    ctx->pc = 0x1547E0u;
    SET_GPR_U32(ctx, 31, 0x1547E8u);
    ctx->pc = 0x1547E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547E0u;
    // 0x1547e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1547E0u, 0x1547E8u)) {
        return;
    }
    ctx->pc = 0x1547E8u;
label_1547e8:
    // 0x1547e8: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x1547e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
label_1547ec:
    // 0x1547ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1547ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1547f0:
    // 0x1547f0: 0x2610f050  addiu       $s0, $s0, -0xFB0
    ctx->pc = 0x1547f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963280));
label_1547f4:
    // 0x1547f4: 0xc07fb0c  jal         func_1FEC30
label_1547f8:
    if (ctx->pc == 0x1547F8u) {
        ctx->pc = 0x1547F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547F4u;
        // 0x1547f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1547FCu;
        goto label_1547fc;
    }
    ctx->pc = 0x1547F4u;
    SET_GPR_U32(ctx, 31, 0x1547FCu);
    ctx->pc = 0x1547F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547F4u;
    // 0x1547f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x1547F4u, 0x1547FCu)) {
        return;
    }
    ctx->pc = 0x1547FCu;
label_1547fc:
    // 0x1547fc: 0xc07fac2  jal         func_1FEB08
label_154800:
    if (ctx->pc == 0x154800u) {
        ctx->pc = 0x154800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1547FCu;
        // 0x154800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154804u;
        goto label_154804;
    }
    ctx->pc = 0x1547FCu;
    SET_GPR_U32(ctx, 31, 0x154804u);
    ctx->pc = 0x154800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1547FCu;
    // 0x154800: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x1547FCu, 0x154804u)) {
        return;
    }
    ctx->pc = 0x154804u;
label_154804:
    // 0x154804: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x154804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_154808:
    // 0x154808: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_15480c:
    if (ctx->pc == 0x15480Cu) {
        ctx->pc = 0x15480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154808u;
        // 0x15480c: 0x8e2600a4  lw          $a2, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154810u;
        goto label_154810;
    }
    ctx->pc = 0x154808u;
    {
        const bool branch_taken_0x154808 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x154808) {
            ctx->pc = 0x15480Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154808u;
            // 0x15480c: 0x8e2600a4  lw          $a2, 0xA4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154838u;
            goto label_154838;
        }
    }
    ctx->pc = 0x154810u;
label_154810:
    // 0x154810: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x154810u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
label_154814:
    // 0x154814: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x154814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_154818:
    // 0x154818: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x154818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
label_15481c:
    // 0x15481c: 0xc07fb0c  jal         func_1FEC30
label_154820:
    if (ctx->pc == 0x154820u) {
        ctx->pc = 0x154820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15481Cu;
        // 0x154820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154824u;
        goto label_154824;
    }
    ctx->pc = 0x15481Cu;
    SET_GPR_U32(ctx, 31, 0x154824u);
    ctx->pc = 0x154820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15481Cu;
    // 0x154820: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15481Cu, 0x154824u)) {
        return;
    }
    ctx->pc = 0x154824u;
label_154824:
    // 0x154824: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x154824u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_154828:
    // 0x154828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x154828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15482c:
    // 0x15482c: 0xc07fb0c  jal         func_1FEC30
label_154830:
    if (ctx->pc == 0x154830u) {
        ctx->pc = 0x154830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15482Cu;
        // 0x154830: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154834u;
        goto label_154834;
    }
    ctx->pc = 0x15482Cu;
    SET_GPR_U32(ctx, 31, 0x154834u);
    ctx->pc = 0x154830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15482Cu;
    // 0x154830: 0x24a58918  addiu       $a1, $a1, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15482Cu, 0x154834u)) {
        return;
    }
    ctx->pc = 0x154834u;
label_154834:
    // 0x154834: 0x8e2600a4  lw          $a2, 0xA4($s1)
    ctx->pc = 0x154834u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_154838:
    // 0x154838: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
label_15483c:
    if (ctx->pc == 0x15483Cu) {
        ctx->pc = 0x15483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154838u;
        // 0x15483c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154840u;
        goto label_154840;
    }
    ctx->pc = 0x154838u;
    {
        const bool branch_taken_0x154838 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154838u;
        // 0x15483c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154838) {
            ctx->pc = 0x154858u;
            goto label_154858;
        }
    }
    ctx->pc = 0x154840u;
label_154840:
    // 0x154840: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x154840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_154844:
    // 0x154844: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x154844u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_154848:
    // 0x154848: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x154848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_15484c:
    // 0x15484c: 0x60f809  jalr        $v1
label_154850:
    if (ctx->pc == 0x154850u) {
        ctx->pc = 0x154850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15484Cu;
        // 0x154850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154854u;
        goto label_154854;
    }
    ctx->pc = 0x15484Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x154854u);
        ctx->pc = 0x154850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15484Cu;
        // 0x154850: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15484Cu, 0x154854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x154854u;
label_154854:
    // 0x154854: 0xae2000a4  sw          $zero, 0xA4($s1)
    ctx->pc = 0x154854u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 164), GPR_U32(ctx, 0));
label_154858:
    // 0x154858: 0x8e2300f8  lw          $v1, 0xF8($s1)
    ctx->pc = 0x154858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 248)));
label_15485c:
    // 0x15485c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_154860:
    if (ctx->pc == 0x154860u) {
        ctx->pc = 0x154860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15485Cu;
        // 0x154860: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154864u;
        goto label_154864;
    }
    ctx->pc = 0x15485Cu;
    {
        const bool branch_taken_0x15485c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15485c) {
            ctx->pc = 0x154860u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15485Cu;
            // 0x154860: 0x8e230104  lw          $v1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x154874u;
            goto label_154874;
        }
    }
    ctx->pc = 0x154864u;
label_154864:
    // 0x154864: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x154864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_154868:
    // 0x154868: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x154868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15486c:
    // 0x15486c: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x15486cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_154870:
    // 0x154870: 0x8e230104  lw          $v1, 0x104($s1)
    ctx->pc = 0x154870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_154874:
    // 0x154874: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_154878:
    if (ctx->pc == 0x154878u) {
        ctx->pc = 0x154878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154874u;
        // 0x154878: 0x8e2300fc  lw          $v1, 0xFC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x15487Cu;
        goto label_15487c;
    }
    ctx->pc = 0x154874u;
    {
        const bool branch_taken_0x154874 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x154874) {
            ctx->pc = 0x154878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x154874u;
            // 0x154878: 0x8e2300fc  lw          $v1, 0xFC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15488Cu;
            goto label_15488c;
        }
    }
    ctx->pc = 0x15487Cu;
label_15487c:
    // 0x15487c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x15487cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_154880:
    // 0x154880: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x154880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_154884:
    // 0x154884: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x154884u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_154888:
    // 0x154888: 0x8e2300fc  lw          $v1, 0xFC($s1)
    ctx->pc = 0x154888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
label_15488c:
    // 0x15488c: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_154890:
    if (ctx->pc == 0x154890u) {
        ctx->pc = 0x154890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15488Cu;
        // 0x154890: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x154894u;
        goto label_154894;
    }
    ctx->pc = 0x15488Cu;
    {
        const bool branch_taken_0x15488c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15488c) {
            ctx->pc = 0x154890u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15488Cu;
            // 0x154890: 0x8e230100  lw          $v1, 0x100($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1548A4u;
            goto label_1548a4;
        }
    }
    ctx->pc = 0x154894u;
label_154894:
    // 0x154894: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x154894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_154898:
    // 0x154898: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x154898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_15489c:
    // 0x15489c: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x15489cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1548a0:
    // 0x1548a0: 0x8e230100  lw          $v1, 0x100($s1)
    ctx->pc = 0x1548a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 256)));
label_1548a4:
    // 0x1548a4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1548a8:
    if (ctx->pc == 0x1548A8u) {
        ctx->pc = 0x1548A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548A4u;
        // 0x1548a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548ACu;
        goto label_1548ac;
    }
    ctx->pc = 0x1548A4u;
    {
        const bool branch_taken_0x1548a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1548A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548A4u;
        // 0x1548a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1548a4) {
            ctx->pc = 0x1548B8u;
            goto label_1548b8;
        }
    }
    ctx->pc = 0x1548ACu;
label_1548ac:
    // 0x1548ac: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1548acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1548b0:
    // 0x1548b0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1548b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1548b4:
    // 0x1548b4: 0xac620054  sw          $v0, 0x54($v1)
    ctx->pc = 0x1548b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 2));
label_1548b8:
    // 0x1548b8: 0xc04f084  jal         func_13C210
label_1548bc:
    if (ctx->pc == 0x1548BCu) {
        ctx->pc = 0x1548BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548B8u;
        // 0x1548bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548C0u;
        goto label_1548c0;
    }
    ctx->pc = 0x1548B8u;
    SET_GPR_U32(ctx, 31, 0x1548C0u);
    ctx->pc = 0x1548BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1548B8u;
    // 0x1548bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x1548B8u, 0x1548C0u)) {
        return;
    }
    ctx->pc = 0x1548C0u;
label_1548c0:
    // 0x1548c0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1548c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1548c4:
    // 0x1548c4: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1548c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1548c8:
    // 0x1548c8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1548c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1548cc:
    // 0x1548cc: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1548ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1548d0:
    // 0x1548d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1548d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1548d4:
    // 0x1548d4: 0x3e00008  jr          $ra
label_1548d8:
    if (ctx->pc == 0x1548D8u) {
        ctx->pc = 0x1548D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548D4u;
        // 0x1548d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1548DCu;
        goto label_1548dc;
    }
    ctx->pc = 0x1548D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1548D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1548D4u;
        // 0x1548d8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1548D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1548DCu;
label_1548dc:
    // 0x1548dc: 0x0  nop
    ctx->pc = 0x1548dcu;
    // NOP
    ctx->pc = 0x1548e0u;
}
