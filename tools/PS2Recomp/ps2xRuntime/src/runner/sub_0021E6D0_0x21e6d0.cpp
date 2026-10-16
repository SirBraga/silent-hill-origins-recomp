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

// Function: sub_0021E6D0
// Address: 0x21e6d0 - 0x21eac0
void sub_0021E6D0_0x21e6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E6D0_0x21e6d0");
#endif

    switch (ctx->pc) {
        case 0x21e6d0u: goto label_21e6d0;
        case 0x21e6d4u: goto label_21e6d4;
        case 0x21e6d8u: goto label_21e6d8;
        case 0x21e6dcu: goto label_21e6dc;
        case 0x21e6e0u: goto label_21e6e0;
        case 0x21e6e4u: goto label_21e6e4;
        case 0x21e6e8u: goto label_21e6e8;
        case 0x21e6ecu: goto label_21e6ec;
        case 0x21e6f0u: goto label_21e6f0;
        case 0x21e6f4u: goto label_21e6f4;
        case 0x21e6f8u: goto label_21e6f8;
        case 0x21e6fcu: goto label_21e6fc;
        case 0x21e700u: goto label_21e700;
        case 0x21e704u: goto label_21e704;
        case 0x21e708u: goto label_21e708;
        case 0x21e70cu: goto label_21e70c;
        case 0x21e710u: goto label_21e710;
        case 0x21e714u: goto label_21e714;
        case 0x21e718u: goto label_21e718;
        case 0x21e71cu: goto label_21e71c;
        case 0x21e720u: goto label_21e720;
        case 0x21e724u: goto label_21e724;
        case 0x21e728u: goto label_21e728;
        case 0x21e72cu: goto label_21e72c;
        case 0x21e730u: goto label_21e730;
        case 0x21e734u: goto label_21e734;
        case 0x21e738u: goto label_21e738;
        case 0x21e73cu: goto label_21e73c;
        case 0x21e740u: goto label_21e740;
        case 0x21e744u: goto label_21e744;
        case 0x21e748u: goto label_21e748;
        case 0x21e74cu: goto label_21e74c;
        case 0x21e750u: goto label_21e750;
        case 0x21e754u: goto label_21e754;
        case 0x21e758u: goto label_21e758;
        case 0x21e75cu: goto label_21e75c;
        case 0x21e760u: goto label_21e760;
        case 0x21e764u: goto label_21e764;
        case 0x21e768u: goto label_21e768;
        case 0x21e76cu: goto label_21e76c;
        case 0x21e770u: goto label_21e770;
        case 0x21e774u: goto label_21e774;
        case 0x21e778u: goto label_21e778;
        case 0x21e77cu: goto label_21e77c;
        case 0x21e780u: goto label_21e780;
        case 0x21e784u: goto label_21e784;
        case 0x21e788u: goto label_21e788;
        case 0x21e78cu: goto label_21e78c;
        case 0x21e790u: goto label_21e790;
        case 0x21e794u: goto label_21e794;
        case 0x21e798u: goto label_21e798;
        case 0x21e79cu: goto label_21e79c;
        case 0x21e7a0u: goto label_21e7a0;
        case 0x21e7a4u: goto label_21e7a4;
        case 0x21e7a8u: goto label_21e7a8;
        case 0x21e7acu: goto label_21e7ac;
        case 0x21e7b0u: goto label_21e7b0;
        case 0x21e7b4u: goto label_21e7b4;
        case 0x21e7b8u: goto label_21e7b8;
        case 0x21e7bcu: goto label_21e7bc;
        case 0x21e7c0u: goto label_21e7c0;
        case 0x21e7c4u: goto label_21e7c4;
        case 0x21e7c8u: goto label_21e7c8;
        case 0x21e7ccu: goto label_21e7cc;
        case 0x21e7d0u: goto label_21e7d0;
        case 0x21e7d4u: goto label_21e7d4;
        case 0x21e7d8u: goto label_21e7d8;
        case 0x21e7dcu: goto label_21e7dc;
        case 0x21e7e0u: goto label_21e7e0;
        case 0x21e7e4u: goto label_21e7e4;
        case 0x21e7e8u: goto label_21e7e8;
        case 0x21e7ecu: goto label_21e7ec;
        case 0x21e7f0u: goto label_21e7f0;
        case 0x21e7f4u: goto label_21e7f4;
        case 0x21e7f8u: goto label_21e7f8;
        case 0x21e7fcu: goto label_21e7fc;
        case 0x21e800u: goto label_21e800;
        case 0x21e804u: goto label_21e804;
        case 0x21e808u: goto label_21e808;
        case 0x21e80cu: goto label_21e80c;
        case 0x21e810u: goto label_21e810;
        case 0x21e814u: goto label_21e814;
        case 0x21e818u: goto label_21e818;
        case 0x21e81cu: goto label_21e81c;
        case 0x21e820u: goto label_21e820;
        case 0x21e824u: goto label_21e824;
        case 0x21e828u: goto label_21e828;
        case 0x21e82cu: goto label_21e82c;
        case 0x21e830u: goto label_21e830;
        case 0x21e834u: goto label_21e834;
        case 0x21e838u: goto label_21e838;
        case 0x21e83cu: goto label_21e83c;
        case 0x21e840u: goto label_21e840;
        case 0x21e844u: goto label_21e844;
        case 0x21e848u: goto label_21e848;
        case 0x21e84cu: goto label_21e84c;
        case 0x21e850u: goto label_21e850;
        case 0x21e854u: goto label_21e854;
        case 0x21e858u: goto label_21e858;
        case 0x21e85cu: goto label_21e85c;
        case 0x21e860u: goto label_21e860;
        case 0x21e864u: goto label_21e864;
        case 0x21e868u: goto label_21e868;
        case 0x21e86cu: goto label_21e86c;
        case 0x21e870u: goto label_21e870;
        case 0x21e874u: goto label_21e874;
        case 0x21e878u: goto label_21e878;
        case 0x21e87cu: goto label_21e87c;
        case 0x21e880u: goto label_21e880;
        case 0x21e884u: goto label_21e884;
        case 0x21e888u: goto label_21e888;
        case 0x21e88cu: goto label_21e88c;
        case 0x21e890u: goto label_21e890;
        case 0x21e894u: goto label_21e894;
        case 0x21e898u: goto label_21e898;
        case 0x21e89cu: goto label_21e89c;
        case 0x21e8a0u: goto label_21e8a0;
        case 0x21e8a4u: goto label_21e8a4;
        case 0x21e8a8u: goto label_21e8a8;
        case 0x21e8acu: goto label_21e8ac;
        case 0x21e8b0u: goto label_21e8b0;
        case 0x21e8b4u: goto label_21e8b4;
        case 0x21e8b8u: goto label_21e8b8;
        case 0x21e8bcu: goto label_21e8bc;
        case 0x21e8c0u: goto label_21e8c0;
        case 0x21e8c4u: goto label_21e8c4;
        case 0x21e8c8u: goto label_21e8c8;
        case 0x21e8ccu: goto label_21e8cc;
        case 0x21e8d0u: goto label_21e8d0;
        case 0x21e8d4u: goto label_21e8d4;
        case 0x21e8d8u: goto label_21e8d8;
        case 0x21e8dcu: goto label_21e8dc;
        case 0x21e8e0u: goto label_21e8e0;
        case 0x21e8e4u: goto label_21e8e4;
        case 0x21e8e8u: goto label_21e8e8;
        case 0x21e8ecu: goto label_21e8ec;
        case 0x21e8f0u: goto label_21e8f0;
        case 0x21e8f4u: goto label_21e8f4;
        case 0x21e8f8u: goto label_21e8f8;
        case 0x21e8fcu: goto label_21e8fc;
        case 0x21e900u: goto label_21e900;
        case 0x21e904u: goto label_21e904;
        case 0x21e908u: goto label_21e908;
        case 0x21e90cu: goto label_21e90c;
        case 0x21e910u: goto label_21e910;
        case 0x21e914u: goto label_21e914;
        case 0x21e918u: goto label_21e918;
        case 0x21e91cu: goto label_21e91c;
        case 0x21e920u: goto label_21e920;
        case 0x21e924u: goto label_21e924;
        case 0x21e928u: goto label_21e928;
        case 0x21e92cu: goto label_21e92c;
        case 0x21e930u: goto label_21e930;
        case 0x21e934u: goto label_21e934;
        case 0x21e938u: goto label_21e938;
        case 0x21e93cu: goto label_21e93c;
        case 0x21e940u: goto label_21e940;
        case 0x21e944u: goto label_21e944;
        case 0x21e948u: goto label_21e948;
        case 0x21e94cu: goto label_21e94c;
        case 0x21e950u: goto label_21e950;
        case 0x21e954u: goto label_21e954;
        case 0x21e958u: goto label_21e958;
        case 0x21e95cu: goto label_21e95c;
        case 0x21e960u: goto label_21e960;
        case 0x21e964u: goto label_21e964;
        case 0x21e968u: goto label_21e968;
        case 0x21e96cu: goto label_21e96c;
        case 0x21e970u: goto label_21e970;
        case 0x21e974u: goto label_21e974;
        case 0x21e978u: goto label_21e978;
        case 0x21e97cu: goto label_21e97c;
        case 0x21e980u: goto label_21e980;
        case 0x21e984u: goto label_21e984;
        case 0x21e988u: goto label_21e988;
        case 0x21e98cu: goto label_21e98c;
        case 0x21e990u: goto label_21e990;
        case 0x21e994u: goto label_21e994;
        case 0x21e998u: goto label_21e998;
        case 0x21e99cu: goto label_21e99c;
        case 0x21e9a0u: goto label_21e9a0;
        case 0x21e9a4u: goto label_21e9a4;
        case 0x21e9a8u: goto label_21e9a8;
        case 0x21e9acu: goto label_21e9ac;
        case 0x21e9b0u: goto label_21e9b0;
        case 0x21e9b4u: goto label_21e9b4;
        case 0x21e9b8u: goto label_21e9b8;
        case 0x21e9bcu: goto label_21e9bc;
        case 0x21e9c0u: goto label_21e9c0;
        case 0x21e9c4u: goto label_21e9c4;
        case 0x21e9c8u: goto label_21e9c8;
        case 0x21e9ccu: goto label_21e9cc;
        case 0x21e9d0u: goto label_21e9d0;
        case 0x21e9d4u: goto label_21e9d4;
        case 0x21e9d8u: goto label_21e9d8;
        case 0x21e9dcu: goto label_21e9dc;
        case 0x21e9e0u: goto label_21e9e0;
        case 0x21e9e4u: goto label_21e9e4;
        case 0x21e9e8u: goto label_21e9e8;
        case 0x21e9ecu: goto label_21e9ec;
        case 0x21e9f0u: goto label_21e9f0;
        case 0x21e9f4u: goto label_21e9f4;
        case 0x21e9f8u: goto label_21e9f8;
        case 0x21e9fcu: goto label_21e9fc;
        case 0x21ea00u: goto label_21ea00;
        case 0x21ea04u: goto label_21ea04;
        case 0x21ea08u: goto label_21ea08;
        case 0x21ea0cu: goto label_21ea0c;
        case 0x21ea10u: goto label_21ea10;
        case 0x21ea14u: goto label_21ea14;
        case 0x21ea18u: goto label_21ea18;
        case 0x21ea1cu: goto label_21ea1c;
        case 0x21ea20u: goto label_21ea20;
        case 0x21ea24u: goto label_21ea24;
        case 0x21ea28u: goto label_21ea28;
        case 0x21ea2cu: goto label_21ea2c;
        case 0x21ea30u: goto label_21ea30;
        case 0x21ea34u: goto label_21ea34;
        case 0x21ea38u: goto label_21ea38;
        case 0x21ea3cu: goto label_21ea3c;
        case 0x21ea40u: goto label_21ea40;
        case 0x21ea44u: goto label_21ea44;
        case 0x21ea48u: goto label_21ea48;
        case 0x21ea4cu: goto label_21ea4c;
        case 0x21ea50u: goto label_21ea50;
        case 0x21ea54u: goto label_21ea54;
        case 0x21ea58u: goto label_21ea58;
        case 0x21ea5cu: goto label_21ea5c;
        case 0x21ea60u: goto label_21ea60;
        case 0x21ea64u: goto label_21ea64;
        case 0x21ea68u: goto label_21ea68;
        case 0x21ea6cu: goto label_21ea6c;
        case 0x21ea70u: goto label_21ea70;
        case 0x21ea74u: goto label_21ea74;
        case 0x21ea78u: goto label_21ea78;
        case 0x21ea7cu: goto label_21ea7c;
        case 0x21ea80u: goto label_21ea80;
        case 0x21ea84u: goto label_21ea84;
        case 0x21ea88u: goto label_21ea88;
        case 0x21ea8cu: goto label_21ea8c;
        case 0x21ea90u: goto label_21ea90;
        case 0x21ea94u: goto label_21ea94;
        case 0x21ea98u: goto label_21ea98;
        case 0x21ea9cu: goto label_21ea9c;
        case 0x21eaa0u: goto label_21eaa0;
        case 0x21eaa4u: goto label_21eaa4;
        case 0x21eaa8u: goto label_21eaa8;
        case 0x21eaacu: goto label_21eaac;
        case 0x21eab0u: goto label_21eab0;
        case 0x21eab4u: goto label_21eab4;
        case 0x21eab8u: goto label_21eab8;
        case 0x21eabcu: goto label_21eabc;
        default: break;
    }

    ctx->pc = 0x21e6d0u;

label_21e6d0:
    // 0x21e6d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x21e6d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_21e6d4:
    // 0x21e6d4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x21e6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_21e6d8:
    // 0x21e6d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x21e6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_21e6dc:
    // 0x21e6dc: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x21e6dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_21e6e0:
    // 0x21e6e0: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x21e6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_21e6e4:
    // 0x21e6e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21e6e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e6e8:
    // 0x21e6e8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x21e6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_21e6ec:
    // 0x21e6ec: 0xde102a  slt         $v0, $a2, $fp
    ctx->pc = 0x21e6ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_21e6f0:
    // 0x21e6f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x21e6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_21e6f4:
    // 0x21e6f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x21e6f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_21e6f8:
    // 0x21e6f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x21e6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_21e6fc:
    // 0x21e6fc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x21e6fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_21e700:
    // 0x21e700: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x21e700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_21e704:
    // 0x21e704: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x21e704u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_21e708:
    // 0x21e708: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
label_21e70c:
    if (ctx->pc == 0x21E70Cu) {
        ctx->pc = 0x21E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E708u;
        // 0x21e70c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E710u;
        goto label_21e710;
    }
    ctx->pc = 0x21E708u;
    {
        const bool branch_taken_0x21e708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E708u;
        // 0x21e70c: 0xafa70000  sw          $a3, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e708) {
            ctx->pc = 0x21E85Cu;
            goto label_21e85c;
        }
    }
    ctx->pc = 0x21E710u;
label_21e710:
    // 0x21e710: 0x8e920014  lw          $s2, 0x14($s4)
    ctx->pc = 0x21e710u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_21e714:
    // 0x21e714: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x21e714u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e718:
    // 0x21e718: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e718u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e71c:
    // 0x21e71c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21e71cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21e720:
    // 0x21e720: 0x8e4201a0  lw          $v0, 0x1A0($s2)
    ctx->pc = 0x21e720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
label_21e724:
    // 0x21e724: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_21e728:
    if (ctx->pc == 0x21E728u) {
        ctx->pc = 0x21E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E724u;
        // 0x21e728: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E72Cu;
        goto label_21e72c;
    }
    ctx->pc = 0x21E724u;
    {
        const bool branch_taken_0x21e724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E724u;
        // 0x21e728: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e724) {
            ctx->pc = 0x21E7DCu;
            goto label_21e7dc;
        }
    }
    ctx->pc = 0x21E72Cu;
label_21e72c:
    // 0x21e72c: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21e72cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21e730:
    // 0x21e730: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_21e734:
    if (ctx->pc == 0x21E734u) {
        ctx->pc = 0x21E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E730u;
        // 0x21e734: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E738u;
        goto label_21e738;
    }
    ctx->pc = 0x21E730u;
    {
        const bool branch_taken_0x21e730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E730u;
        // 0x21e734: 0x241700ff  addiu       $s7, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e730) {
            ctx->pc = 0x21E834u;
            goto label_21e834;
        }
    }
    ctx->pc = 0x21E738u;
label_21e738:
    // 0x21e738: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21e73c:
    if (ctx->pc == 0x21E73Cu) {
        ctx->pc = 0x21E73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E738u;
        // 0x21e73c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E740u;
        goto label_21e740;
    }
    ctx->pc = 0x21E738u;
    {
        const bool branch_taken_0x21e738 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e738) {
            ctx->pc = 0x21E73Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E738u;
            // 0x21e73c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E768u;
            goto label_21e768;
        }
    }
    ctx->pc = 0x21E740u;
label_21e740:
    // 0x21e740: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21e740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21e744:
    // 0x21e744: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21e744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21e748:
    // 0x21e748: 0x40f809  jalr        $v0
label_21e74c:
    if (ctx->pc == 0x21E74Cu) {
        ctx->pc = 0x21E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E748u;
        // 0x21e74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E750u;
        goto label_21e750;
    }
    ctx->pc = 0x21E748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E750u);
        ctx->pc = 0x21E74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E748u;
        // 0x21e74c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E748u, 0x21E750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E750u;
label_21e750:
    // 0x21e750: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_21e754:
    if (ctx->pc == 0x21E754u) {
        ctx->pc = 0x21E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E750u;
        // 0x21e754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E758u;
        goto label_21e758;
    }
    ctx->pc = 0x21E750u;
    {
        const bool branch_taken_0x21e750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E750u;
        // 0x21e754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e750) {
            ctx->pc = 0x21E848u;
            goto label_21e848;
        }
    }
    ctx->pc = 0x21E758u;
label_21e758:
    // 0x21e758: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21e758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21e75c:
    // 0x21e75c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21e75cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e760:
    // 0x21e760: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21e760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e764:
    // 0x21e764: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21e764u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e768:
    // 0x21e768: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21e768u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21e76c:
    // 0x21e76c: 0x14d70014  bne         $a2, $s7, . + 4 + (0x14 << 2)
label_21e770:
    if (ctx->pc == 0x21E770u) {
        ctx->pc = 0x21E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E76Cu;
        // 0x21e770: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E774u;
        goto label_21e774;
    }
    ctx->pc = 0x21E76Cu;
    {
        const bool branch_taken_0x21e76c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 23));
        ctx->pc = 0x21E770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E76Cu;
        // 0x21e770: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e76c) {
            ctx->pc = 0x21E7C0u;
            goto label_21e7c0;
        }
    }
    ctx->pc = 0x21E774u;
label_21e774:
    // 0x21e774: 0x241500ff  addiu       $s5, $zero, 0xFF
    ctx->pc = 0x21e774u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21e778:
    // 0x21e778: 0x5620000b  bnel        $s1, $zero, . + 4 + (0xB << 2)
label_21e77c:
    if (ctx->pc == 0x21E77Cu) {
        ctx->pc = 0x21E77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E778u;
        // 0x21e77c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E780u;
        goto label_21e780;
    }
    ctx->pc = 0x21E778u;
    {
        const bool branch_taken_0x21e778 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e778) {
            ctx->pc = 0x21E77Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E778u;
            // 0x21e77c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E7A8u;
            goto label_21e7a8;
        }
    }
    ctx->pc = 0x21E780u;
label_21e780:
    // 0x21e780: 0x8e430018  lw          $v1, 0x18($s2)
    ctx->pc = 0x21e780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21e784:
    // 0x21e784: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21e784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21e788:
    // 0x21e788: 0x40f809  jalr        $v0
label_21e78c:
    if (ctx->pc == 0x21E78Cu) {
        ctx->pc = 0x21E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E788u;
        // 0x21e78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E790u;
        goto label_21e790;
    }
    ctx->pc = 0x21E788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E790u);
        ctx->pc = 0x21E78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E788u;
        // 0x21e78c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E788u, 0x21E790u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E790u;
label_21e790:
    // 0x21e790: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_21e794:
    if (ctx->pc == 0x21E794u) {
        ctx->pc = 0x21E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E790u;
        // 0x21e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E798u;
        goto label_21e798;
    }
    ctx->pc = 0x21E790u;
    {
        const bool branch_taken_0x21e790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E790u;
        // 0x21e794: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e790) {
            ctx->pc = 0x21E848u;
            goto label_21e848;
        }
    }
    ctx->pc = 0x21E798u;
label_21e798:
    // 0x21e798: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x21e798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_21e79c:
    // 0x21e79c: 0x8c510004  lw          $s1, 0x4($v0)
    ctx->pc = 0x21e79cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e7a0:
    // 0x21e7a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21e7a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e7a4:
    // 0x21e7a4: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21e7a4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e7a8:
    // 0x21e7a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x21e7a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_21e7ac:
    // 0x21e7ac: 0x10d5fff2  beq         $a2, $s5, . + 4 + (-0xE << 2)
label_21e7b0:
    if (ctx->pc == 0x21E7B0u) {
        ctx->pc = 0x21E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7ACu;
        // 0x21e7b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7B4u;
        goto label_21e7b4;
    }
    ctx->pc = 0x21E7ACu;
    {
        const bool branch_taken_0x21e7ac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 21));
        ctx->pc = 0x21E7B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7ACu;
        // 0x21e7b0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7ac) {
            ctx->pc = 0x21E778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e778;
        }
    }
    ctx->pc = 0x21E7B4u;
label_21e7b4:
    // 0x21e7b4: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21e7b8:
    if (ctx->pc == 0x21E7B8u) {
        ctx->pc = 0x21E7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7B4u;
        // 0x21e7b8: 0xae4601a0  sw          $a2, 0x1A0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7BCu;
        goto label_21e7bc;
    }
    ctx->pc = 0x21E7B4u;
    {
        const bool branch_taken_0x21e7b4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e7b4) {
            ctx->pc = 0x21E7B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E7B4u;
            // 0x21e7b8: 0xae4601a0  sw          $a2, 0x1A0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E7DCu;
            goto label_21e7dc;
        }
    }
    ctx->pc = 0x21E7BCu;
label_21e7bc:
    // 0x21e7bc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21e7bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21e7c0:
    // 0x21e7c0: 0x161a38  dsll        $v1, $s6, 8
    ctx->pc = 0x21e7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) << 8);
label_21e7c4:
    // 0x21e7c4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21e7c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21e7c8:
    // 0x21e7c8: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21e7c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21e7cc:
    // 0x21e7cc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_21e7d0:
    if (ctx->pc == 0x21E7D0u) {
        ctx->pc = 0x21E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7CCu;
        // 0x21e7d0: 0xc3b025  or          $s6, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7D4u;
        goto label_21e7d4;
    }
    ctx->pc = 0x21E7CCu;
    {
        const bool branch_taken_0x21e7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E7D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7CCu;
        // 0x21e7d0: 0xc3b025  or          $s6, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7cc) {
            ctx->pc = 0x21E738u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e738;
        }
    }
    ctx->pc = 0x21E7D4u;
label_21e7d4:
    // 0x21e7d4: 0x10000018  b           . + 4 + (0x18 << 2)
label_21e7d8:
    if (ctx->pc == 0x21E7D8u) {
        ctx->pc = 0x21E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7D4u;
        // 0x21e7d8: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7DCu;
        goto label_21e7dc;
    }
    ctx->pc = 0x21E7D4u;
    {
        const bool branch_taken_0x21e7d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7D4u;
        // 0x21e7d8: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7d4) {
            ctx->pc = 0x21E838u;
            goto label_21e838;
        }
    }
    ctx->pc = 0x21E7DCu;
label_21e7dc:
    // 0x21e7dc: 0x27e102a  slt         $v0, $s3, $fp
    ctx->pc = 0x21e7dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_21e7e0:
    // 0x21e7e0: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_21e7e4:
    if (ctx->pc == 0x21E7E4u) {
        ctx->pc = 0x21E7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7E0u;
        // 0x21e7e4: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7E8u;
        goto label_21e7e8;
    }
    ctx->pc = 0x21E7E0u;
    {
        const bool branch_taken_0x21e7e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e7e0) {
            ctx->pc = 0x21E7E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E7E0u;
            // 0x21e7e4: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E838u;
            goto label_21e838;
        }
    }
    ctx->pc = 0x21E7E8u;
label_21e7e8:
    // 0x21e7e8: 0x8e4201bc  lw          $v0, 0x1BC($s2)
    ctx->pc = 0x21e7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21e7ec:
    // 0x21e7ec: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21e7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21e7f0:
    // 0x21e7f0: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21e7f4:
    if (ctx->pc == 0x21E7F4u) {
        ctx->pc = 0x21E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7F0u;
        // 0x21e7f4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E7F8u;
        goto label_21e7f8;
    }
    ctx->pc = 0x21E7F0u;
    {
        const bool branch_taken_0x21e7f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E7F0u;
        // 0x21e7f4: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e7f0) {
            ctx->pc = 0x21E828u;
            goto label_21e828;
        }
    }
    ctx->pc = 0x21E7F8u;
label_21e7f8:
    // 0x21e7f8: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x21e7f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21e7fc:
    // 0x21e7fc: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x21e7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21e800:
    // 0x21e800: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e804:
    // 0x21e804: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21e804u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21e808:
    // 0x21e808: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21e80c:
    // 0x21e80c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21e80cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e810:
    // 0x21e810: 0x60f809  jalr        $v1
label_21e814:
    if (ctx->pc == 0x21E814u) {
        ctx->pc = 0x21E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E810u;
        // 0x21e814: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E818u;
        goto label_21e818;
    }
    ctx->pc = 0x21E810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E818u);
        ctx->pc = 0x21E814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E810u;
        // 0x21e814: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E810u, 0x21E818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E818u;
label_21e818:
    // 0x21e818: 0x8e4401bc  lw          $a0, 0x1BC($s2)
    ctx->pc = 0x21e818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
label_21e81c:
    // 0x21e81c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e820:
    // 0x21e820: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x21e820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_21e824:
    // 0x21e824: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x21e824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21e828:
    // 0x21e828: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x21e828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21e82c:
    // 0x21e82c: 0x56b014  dsllv       $s6, $s6, $v0
    ctx->pc = 0x21e82cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (GPR_U32(ctx, 2) & 0x3F));
label_21e830:
    // 0x21e830: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21e830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21e834:
    // 0x21e834: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x21e834u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_21e838:
    // 0x21e838: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e83c:
    // 0x21e83c: 0xae910004  sw          $s1, 0x4($s4)
    ctx->pc = 0x21e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 17));
label_21e840:
    // 0x21e840: 0xfe960008  sd          $s6, 0x8($s4)
    ctx->pc = 0x21e840u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 22));
label_21e844:
    // 0x21e844: 0xae930010  sw          $s3, 0x10($s4)
    ctx->pc = 0x21e844u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 19));
label_21e848:
    // 0x21e848: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_21e84c:
    if (ctx->pc == 0x21E84Cu) {
        ctx->pc = 0x21E84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E848u;
        // 0x21e84c: 0xde850008  ld          $a1, 0x8($s4) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E850u;
        goto label_21e850;
    }
    ctx->pc = 0x21E848u;
    {
        const bool branch_taken_0x21e848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e848) {
            ctx->pc = 0x21E84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E848u;
            // 0x21e84c: 0xde850008  ld          $a1, 0x8($s4) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E858u;
            goto label_21e858;
        }
    }
    ctx->pc = 0x21E850u;
label_21e850:
    // 0x21e850: 0x1000008e  b           . + 4 + (0x8E << 2)
label_21e854:
    if (ctx->pc == 0x21E854u) {
        ctx->pc = 0x21E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E850u;
        // 0x21e854: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E858u;
        goto label_21e858;
    }
    ctx->pc = 0x21E850u;
    {
        const bool branch_taken_0x21e850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E850u;
        // 0x21e854: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e850) {
            ctx->pc = 0x21EA8Cu;
            goto label_21ea8c;
        }
    }
    ctx->pc = 0x21E858u;
label_21e858:
    // 0x21e858: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x21e858u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_21e85c:
    // 0x21e85c: 0xde3023  subu        $a2, $a2, $fp
    ctx->pc = 0x21e85cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 30)));
label_21e860:
    // 0x21e860: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21e860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e864:
    // 0x21e864: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x21e864u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21e868:
    // 0x21e868: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x21e868u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_21e86c:
    // 0x21e86c: 0x3c31804  sllv        $v1, $v1, $fp
    ctx->pc = 0x21e86cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 30) & 0x1F));
label_21e870:
    // 0x21e870: 0xc52017  dsrav       $a0, $a1, $a2
    ctx->pc = 0x21e870u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 6) & 0x3F));
label_21e874:
    // 0x21e874: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x21e874u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_21e878:
    // 0x21e878: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x21e878u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_21e87c:
    // 0x21e87c: 0x1023821  addu        $a3, $t0, $v0
    ctx->pc = 0x21e87cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_21e880:
    // 0x21e880: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x21e880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_21e884:
    // 0x21e884: 0xdce20000  ld          $v0, 0x0($a3)
    ctx->pc = 0x21e884u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 0)));
label_21e888:
    // 0x21e888: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x21e888u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_21e88c:
    // 0x21e88c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x21e88cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e890:
    // 0x21e890: 0x57102a  slt         $v0, $v0, $s7
    ctx->pc = 0x21e890u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_21e894:
    // 0x21e894: 0x50400065  beql        $v0, $zero, . + 4 + (0x65 << 2)
label_21e898:
    if (ctx->pc == 0x21E898u) {
        ctx->pc = 0x21E898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E894u;
        // 0x21e898: 0xfe850008  sd          $a1, 0x8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E89Cu;
        goto label_21e89c;
    }
    ctx->pc = 0x21E894u;
    {
        const bool branch_taken_0x21e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e894) {
            ctx->pc = 0x21E898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E894u;
            // 0x21e898: 0xfe850008  sd          $a1, 0x8($s4) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21EA2Cu;
            goto label_21ea2c;
        }
    }
    ctx->pc = 0x21E89Cu;
label_21e89c:
    // 0x21e89c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x21e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_21e8a0:
    // 0x21e8a0: 0x1cc00054  bgtz        $a2, . + 4 + (0x54 << 2)
label_21e8a4:
    if (ctx->pc == 0x21E8A4u) {
        ctx->pc = 0x21E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8A0u;
        // 0x21e8a4: 0x17b878  dsll        $s7, $s7, 1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8A8u;
        goto label_21e8a8;
    }
    ctx->pc = 0x21E8A0u;
    {
        const bool branch_taken_0x21e8a0 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x21E8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8A0u;
        // 0x21e8a4: 0x17b878  dsll        $s7, $s7, 1 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8a0) {
            ctx->pc = 0x21E9F4u;
            goto label_21e9f4;
        }
    }
    ctx->pc = 0x21E8A8u;
label_21e8a8:
    // 0x21e8a8: 0x8e910014  lw          $s1, 0x14($s4)
    ctx->pc = 0x21e8a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_21e8ac:
    // 0x21e8ac: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x21e8acu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21e8b0:
    // 0x21e8b0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21e8b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_21e8b4:
    // 0x21e8b4: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21e8b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_21e8b8:
    // 0x21e8b8: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x21e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_21e8bc:
    // 0x21e8bc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_21e8c0:
    if (ctx->pc == 0x21E8C0u) {
        ctx->pc = 0x21E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8BCu;
        // 0x21e8c0: 0x8e920004  lw          $s2, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8C4u;
        goto label_21e8c4;
    }
    ctx->pc = 0x21E8BCu;
    {
        const bool branch_taken_0x21e8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8BCu;
        // 0x21e8c0: 0x8e920004  lw          $s2, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8bc) {
            ctx->pc = 0x21E97Cu;
            goto label_21e97c;
        }
    }
    ctx->pc = 0x21E8C4u;
label_21e8c4:
    // 0x21e8c4: 0x28c20019  slti        $v0, $a2, 0x19
    ctx->pc = 0x21e8c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)25) ? 1 : 0);
label_21e8c8:
    // 0x21e8c8: 0x50400042  beql        $v0, $zero, . + 4 + (0x42 << 2)
label_21e8cc:
    if (ctx->pc == 0x21E8CCu) {
        ctx->pc = 0x21E8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8C8u;
        // 0x21e8cc: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8D0u;
        goto label_21e8d0;
    }
    ctx->pc = 0x21E8C8u;
    {
        const bool branch_taken_0x21e8c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e8c8) {
            ctx->pc = 0x21E8CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E8C8u;
            // 0x21e8cc: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9D4u;
            goto label_21e9d4;
        }
    }
    ctx->pc = 0x21E8D0u;
label_21e8d0:
    // 0x21e8d0: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21e8d4:
    if (ctx->pc == 0x21E8D4u) {
        ctx->pc = 0x21E8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8D0u;
        // 0x21e8d4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8D8u;
        goto label_21e8d8;
    }
    ctx->pc = 0x21E8D0u;
    {
        const bool branch_taken_0x21e8d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e8d0) {
            ctx->pc = 0x21E8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E8D0u;
            // 0x21e8d4: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E900u;
            goto label_21e900;
        }
    }
    ctx->pc = 0x21E8D8u;
label_21e8d8:
    // 0x21e8d8: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21e8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21e8dc:
    // 0x21e8dc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21e8e0:
    // 0x21e8e0: 0x40f809  jalr        $v0
label_21e8e4:
    if (ctx->pc == 0x21E8E4u) {
        ctx->pc = 0x21E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8E0u;
        // 0x21e8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8E8u;
        goto label_21e8e8;
    }
    ctx->pc = 0x21E8E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E8E8u);
        ctx->pc = 0x21E8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8E0u;
        // 0x21e8e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E8E0u, 0x21E8E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E8E8u;
label_21e8e8:
    // 0x21e8e8: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_21e8ec:
    if (ctx->pc == 0x21E8ECu) {
        ctx->pc = 0x21E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8E8u;
        // 0x21e8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E8F0u;
        goto label_21e8f0;
    }
    ctx->pc = 0x21E8E8u;
    {
        const bool branch_taken_0x21e8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E8E8u;
        // 0x21e8ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e8e8) {
            ctx->pc = 0x21E9E4u;
            goto label_21e9e4;
        }
    }
    ctx->pc = 0x21E8F0u;
label_21e8f0:
    // 0x21e8f0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21e8f4:
    // 0x21e8f4: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21e8f4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e8f8:
    // 0x21e8f8: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21e8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e8fc:
    // 0x21e8fc: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21e8fcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e900:
    // 0x21e900: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21e900u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21e904:
    // 0x21e904: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x21e904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21e908:
    // 0x21e908: 0x14c20015  bne         $a2, $v0, . + 4 + (0x15 << 2)
label_21e90c:
    if (ctx->pc == 0x21E90Cu) {
        ctx->pc = 0x21E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E908u;
        // 0x21e90c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E910u;
        goto label_21e910;
    }
    ctx->pc = 0x21E908u;
    {
        const bool branch_taken_0x21e908 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x21E90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E908u;
        // 0x21e90c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e908) {
            ctx->pc = 0x21E960u;
            goto label_21e960;
        }
    }
    ctx->pc = 0x21E910u;
label_21e910:
    // 0x21e910: 0x241600ff  addiu       $s6, $zero, 0xFF
    ctx->pc = 0x21e910u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21e914:
    // 0x21e914: 0x0  nop
    ctx->pc = 0x21e914u;
    // NOP
label_21e918:
    // 0x21e918: 0x5640000b  bnel        $s2, $zero, . + 4 + (0xB << 2)
label_21e91c:
    if (ctx->pc == 0x21E91Cu) {
        ctx->pc = 0x21E91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E918u;
        // 0x21e91c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E920u;
        goto label_21e920;
    }
    ctx->pc = 0x21E918u;
    {
        const bool branch_taken_0x21e918 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e918) {
            ctx->pc = 0x21E91Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E918u;
            // 0x21e91c: 0x92060000  lbu         $a2, 0x0($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E948u;
            goto label_21e948;
        }
    }
    ctx->pc = 0x21E920u;
label_21e920:
    // 0x21e920: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x21e920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21e924:
    // 0x21e924: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x21e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_21e928:
    // 0x21e928: 0x40f809  jalr        $v0
label_21e92c:
    if (ctx->pc == 0x21E92Cu) {
        ctx->pc = 0x21E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E928u;
        // 0x21e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E930u;
        goto label_21e930;
    }
    ctx->pc = 0x21E928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21E930u);
        ctx->pc = 0x21E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E928u;
        // 0x21e92c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E928u, 0x21E930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E930u;
label_21e930:
    // 0x21e930: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_21e934:
    if (ctx->pc == 0x21E934u) {
        ctx->pc = 0x21E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E930u;
        // 0x21e934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E938u;
        goto label_21e938;
    }
    ctx->pc = 0x21E930u;
    {
        const bool branch_taken_0x21e930 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E930u;
        // 0x21e934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e930) {
            ctx->pc = 0x21E9E4u;
            goto label_21e9e4;
        }
    }
    ctx->pc = 0x21E938u;
label_21e938:
    // 0x21e938: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x21e938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_21e93c:
    // 0x21e93c: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x21e93cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e940:
    // 0x21e940: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x21e940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e944:
    // 0x21e944: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x21e944u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_21e948:
    // 0x21e948: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x21e948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_21e94c:
    // 0x21e94c: 0x10d6fff2  beq         $a2, $s6, . + 4 + (-0xE << 2)
label_21e950:
    if (ctx->pc == 0x21E950u) {
        ctx->pc = 0x21E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E94Cu;
        // 0x21e950: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E954u;
        goto label_21e954;
    }
    ctx->pc = 0x21E94Cu;
    {
        const bool branch_taken_0x21e94c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 22));
        ctx->pc = 0x21E950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E94Cu;
        // 0x21e950: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e94c) {
            ctx->pc = 0x21E918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e918;
        }
    }
    ctx->pc = 0x21E954u;
label_21e954:
    // 0x21e954: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
label_21e958:
    if (ctx->pc == 0x21E958u) {
        ctx->pc = 0x21E958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E954u;
        // 0x21e958: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E95Cu;
        goto label_21e95c;
    }
    ctx->pc = 0x21E954u;
    {
        const bool branch_taken_0x21e954 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x21e954) {
            ctx->pc = 0x21E958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E954u;
            // 0x21e958: 0xae2601a0  sw          $a2, 0x1A0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 416), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E97Cu;
            goto label_21e97c;
        }
    }
    ctx->pc = 0x21E95Cu;
label_21e95c:
    // 0x21e95c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x21e95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_21e960:
    // 0x21e960: 0x151a38  dsll        $v1, $s5, 8
    ctx->pc = 0x21e960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << 8);
label_21e964:
    // 0x21e964: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x21e964u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_21e968:
    // 0x21e968: 0x2a620019  slti        $v0, $s3, 0x19
    ctx->pc = 0x21e968u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)25) ? 1 : 0);
label_21e96c:
    // 0x21e96c: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_21e970:
    if (ctx->pc == 0x21E970u) {
        ctx->pc = 0x21E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E96Cu;
        // 0x21e970: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E974u;
        goto label_21e974;
    }
    ctx->pc = 0x21E96Cu;
    {
        const bool branch_taken_0x21e96c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E96Cu;
        // 0x21e970: 0xc3a825  or          $s5, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e96c) {
            ctx->pc = 0x21E8D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e8d0;
        }
    }
    ctx->pc = 0x21E974u;
label_21e974:
    // 0x21e974: 0x10000017  b           . + 4 + (0x17 << 2)
label_21e978:
    if (ctx->pc == 0x21E978u) {
        ctx->pc = 0x21E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E974u;
        // 0x21e978: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E97Cu;
        goto label_21e97c;
    }
    ctx->pc = 0x21E974u;
    {
        const bool branch_taken_0x21e974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E974u;
        // 0x21e978: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e974) {
            ctx->pc = 0x21E9D4u;
            goto label_21e9d4;
        }
    }
    ctx->pc = 0x21E97Cu;
label_21e97c:
    // 0x21e97c: 0x5e600015  bgtzl       $s3, . + 4 + (0x15 << 2)
label_21e980:
    if (ctx->pc == 0x21E980u) {
        ctx->pc = 0x21E980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E97Cu;
        // 0x21e980: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E984u;
        goto label_21e984;
    }
    ctx->pc = 0x21E97Cu;
    {
        const bool branch_taken_0x21e97c = (GPR_S64(ctx, 19) > 0);
        if (branch_taken_0x21e97c) {
            ctx->pc = 0x21E980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E97Cu;
            // 0x21e980: 0xae900000  sw          $s0, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E9D4u;
            goto label_21e9d4;
        }
    }
    ctx->pc = 0x21E984u;
label_21e984:
    // 0x21e984: 0x8e2201bc  lw          $v0, 0x1BC($s1)
    ctx->pc = 0x21e984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21e988:
    // 0x21e988: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21e988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21e98c:
    // 0x21e98c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_21e990:
    if (ctx->pc == 0x21E990u) {
        ctx->pc = 0x21E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E98Cu;
        // 0x21e990: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E994u;
        goto label_21e994;
    }
    ctx->pc = 0x21E98Cu;
    {
        const bool branch_taken_0x21e98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E98Cu;
        // 0x21e990: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e98c) {
            ctx->pc = 0x21E9C4u;
            goto label_21e9c4;
        }
    }
    ctx->pc = 0x21E994u;
label_21e994:
    // 0x21e994: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x21e994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e998:
    // 0x21e998: 0x24030075  addiu       $v1, $zero, 0x75
    ctx->pc = 0x21e998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_21e99c:
    // 0x21e99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21e99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21e9a0:
    // 0x21e9a0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21e9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21e9a4:
    // 0x21e9a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x21e9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_21e9a8:
    // 0x21e9a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e9ac:
    // 0x21e9ac: 0x60f809  jalr        $v1
label_21e9b0:
    if (ctx->pc == 0x21E9B0u) {
        ctx->pc = 0x21E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9ACu;
        // 0x21e9b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9B4u;
        goto label_21e9b4;
    }
    ctx->pc = 0x21E9ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E9B4u);
        ctx->pc = 0x21E9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9ACu;
        // 0x21e9b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E9ACu, 0x21E9B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E9B4u;
label_21e9b4:
    // 0x21e9b4: 0x8e2401bc  lw          $a0, 0x1BC($s1)
    ctx->pc = 0x21e9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 444)));
label_21e9b8:
    // 0x21e9b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e9bc:
    // 0x21e9bc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x21e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_21e9c0:
    // 0x21e9c0: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x21e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21e9c4:
    // 0x21e9c4: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x21e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_21e9c8:
    // 0x21e9c8: 0x55a814  dsllv       $s5, $s5, $v0
    ctx->pc = 0x21e9c8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) << (GPR_U32(ctx, 2) & 0x3F));
label_21e9cc:
    // 0x21e9cc: 0x24130019  addiu       $s3, $zero, 0x19
    ctx->pc = 0x21e9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_21e9d0:
    // 0x21e9d0: 0xae900000  sw          $s0, 0x0($s4)
    ctx->pc = 0x21e9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 16));
label_21e9d4:
    // 0x21e9d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e9d8:
    // 0x21e9d8: 0xae920004  sw          $s2, 0x4($s4)
    ctx->pc = 0x21e9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 18));
label_21e9dc:
    // 0x21e9dc: 0xfe950008  sd          $s5, 0x8($s4)
    ctx->pc = 0x21e9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 21));
label_21e9e0:
    // 0x21e9e0: 0xae930010  sw          $s3, 0x10($s4)
    ctx->pc = 0x21e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 19));
label_21e9e4:
    // 0x21e9e4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_21e9e8:
    if (ctx->pc == 0x21E9E8u) {
        ctx->pc = 0x21E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9E4u;
        // 0x21e9e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E9ECu;
        goto label_21e9ec;
    }
    ctx->pc = 0x21E9E4u;
    {
        const bool branch_taken_0x21e9e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E9E4u;
        // 0x21e9e8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e9e4) {
            ctx->pc = 0x21EA8Cu;
            goto label_21ea8c;
        }
    }
    ctx->pc = 0x21E9ECu;
label_21e9ec:
    // 0x21e9ec: 0xde850008  ld          $a1, 0x8($s4)
    ctx->pc = 0x21e9ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 8)));
label_21e9f0:
    // 0x21e9f0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x21e9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_21e9f4:
    // 0x21e9f4: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x21e9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_21e9f8:
    // 0x21e9f8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x21e9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_21e9fc:
    // 0x21e9fc: 0xc51017  dsrav       $v0, $a1, $a2
    ctx->pc = 0x21e9fcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 6) & 0x3F));
label_21ea00:
    // 0x21ea00: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x21ea00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_21ea04:
    // 0x21ea04: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x21ea04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_21ea08:
    // 0x21ea08: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x21ea08u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_21ea0c:
    // 0x21ea0c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x21ea0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_21ea10:
    // 0x21ea10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x21ea10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_21ea14:
    // 0x21ea14: 0xdc630000  ld          $v1, 0x0($v1)
    ctx->pc = 0x21ea14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_21ea18:
    // 0x21ea18: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x21ea18u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_21ea1c:
    // 0x21ea1c: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x21ea1cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_21ea20:
    // 0x21ea20: 0x1460ff9f  bnez        $v1, . + 4 + (-0x61 << 2)
label_21ea24:
    if (ctx->pc == 0x21EA24u) {
        ctx->pc = 0x21EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA20u;
        // 0x21ea24: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA28u;
        goto label_21ea28;
    }
    ctx->pc = 0x21EA20u;
    {
        const bool branch_taken_0x21ea20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21EA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA20u;
        // 0x21ea24: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea20) {
            ctx->pc = 0x21E8A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e8a0;
        }
    }
    ctx->pc = 0x21EA28u;
label_21ea28:
    // 0x21ea28: 0xfe850008  sd          $a1, 0x8($s4)
    ctx->pc = 0x21ea28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 5));
label_21ea2c:
    // 0x21ea2c: 0x2bc20011  slti        $v0, $fp, 0x11
    ctx->pc = 0x21ea2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)17) ? 1 : 0);
label_21ea30:
    // 0x21ea30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_21ea34:
    if (ctx->pc == 0x21EA34u) {
        ctx->pc = 0x21EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA30u;
        // 0x21ea34: 0xae860010  sw          $a2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA38u;
        goto label_21ea38;
    }
    ctx->pc = 0x21EA30u;
    {
        const bool branch_taken_0x21ea30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA30u;
        // 0x21ea34: 0xae860010  sw          $a2, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea30) {
            ctx->pc = 0x21EA64u;
            goto label_21ea64;
        }
    }
    ctx->pc = 0x21EA38u;
label_21ea38:
    // 0x21ea38: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x21ea38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_21ea3c:
    // 0x21ea3c: 0x1e10c0  sll         $v0, $fp, 3
    ctx->pc = 0x21ea3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
label_21ea40:
    // 0x21ea40: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x21ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_21ea44:
    // 0x21ea44: 0x8d040118  lw          $a0, 0x118($t0)
    ctx->pc = 0x21ea44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 280)));
label_21ea48:
    // 0x21ea48: 0xdc430090  ld          $v1, 0x90($v0)
    ctx->pc = 0x21ea48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 144)));
label_21ea4c:
    // 0x21ea4c: 0x2e3182d  daddu       $v1, $s7, $v1
    ctx->pc = 0x21ea4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 3));
label_21ea50:
    // 0x21ea50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x21ea50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_21ea54:
    // 0x21ea54: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x21ea54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_21ea58:
    // 0x21ea58: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x21ea58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_21ea5c:
    // 0x21ea5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_21ea60:
    if (ctx->pc == 0x21EA60u) {
        ctx->pc = 0x21EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA5Cu;
        // 0x21ea60: 0x90820011  lbu         $v0, 0x11($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA64u;
        goto label_21ea64;
    }
    ctx->pc = 0x21EA5Cu;
    {
        const bool branch_taken_0x21ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21EA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA5Cu;
        // 0x21ea60: 0x90820011  lbu         $v0, 0x11($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ea5c) {
            ctx->pc = 0x21EA8Cu;
            goto label_21ea8c;
        }
    }
    ctx->pc = 0x21EA64u;
label_21ea64:
    // 0x21ea64: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x21ea64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_21ea68:
    // 0x21ea68: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x21ea68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_21ea6c:
    // 0x21ea6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21ea70:
    // 0x21ea70: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x21ea70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_21ea74:
    // 0x21ea74: 0x8e840014  lw          $a0, 0x14($s4)
    ctx->pc = 0x21ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_21ea78:
    // 0x21ea78: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_21ea7c:
    // 0x21ea7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x21ea7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_21ea80:
    // 0x21ea80: 0x40f809  jalr        $v0
label_21ea84:
    if (ctx->pc == 0x21EA84u) {
        ctx->pc = 0x21EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA80u;
        // 0x21ea84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EA88u;
        goto label_21ea88;
    }
    ctx->pc = 0x21EA80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21EA88u);
        ctx->pc = 0x21EA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EA80u;
        // 0x21ea84: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EA80u, 0x21EA88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21EA88u;
label_21ea88:
    // 0x21ea88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21ea88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21ea8c:
    // 0x21ea8c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x21ea8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_21ea90:
    // 0x21ea90: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x21ea90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_21ea94:
    // 0x21ea94: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x21ea94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_21ea98:
    // 0x21ea98: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x21ea98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_21ea9c:
    // 0x21ea9c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x21ea9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21eaa0:
    // 0x21eaa0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x21eaa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21eaa4:
    // 0x21eaa4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x21eaa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21eaa8:
    // 0x21eaa8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x21eaa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21eaac:
    // 0x21eaac: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x21eaacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21eab0:
    // 0x21eab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x21eab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_21eab4:
    // 0x21eab4: 0x3e00008  jr          $ra
label_21eab8:
    if (ctx->pc == 0x21EAB8u) {
        ctx->pc = 0x21EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAB4u;
        // 0x21eab8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21EABCu;
        goto label_21eabc;
    }
    ctx->pc = 0x21EAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21EAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21EAB4u;
        // 0x21eab8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21EAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21EABCu;
label_21eabc:
    // 0x21eabc: 0x0  nop
    ctx->pc = 0x21eabcu;
    // NOP
    ctx->pc = 0x21eac0u;
}
