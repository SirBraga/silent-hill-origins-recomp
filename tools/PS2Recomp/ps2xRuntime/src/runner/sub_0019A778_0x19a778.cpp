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

// Function: sub_0019A778
// Address: 0x19a778 - 0x19a8e0
void sub_0019A778_0x19a778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019A778_0x19a778");
#endif

    switch (ctx->pc) {
        case 0x19a7dcu: goto label_19a7dc;
        case 0x19a7ecu: goto label_19a7ec;
        case 0x19a7f8u: goto label_19a7f8;
        case 0x19a800u: goto label_19a800;
        case 0x19a80cu: goto label_19a80c;
        case 0x19a814u: goto label_19a814;
        case 0x19a820u: goto label_19a820;
        case 0x19a828u: goto label_19a828;
        case 0x19a834u: goto label_19a834;
        case 0x19a83cu: goto label_19a83c;
        case 0x19a84cu: goto label_19a84c;
        case 0x19a858u: goto label_19a858;
        case 0x19a864u: goto label_19a864;
        case 0x19a870u: goto label_19a870;
        case 0x19a87cu: goto label_19a87c;
        case 0x19a888u: goto label_19a888;
        case 0x19a894u: goto label_19a894;
        case 0x19a8a0u: goto label_19a8a0;
        case 0x19a8b4u: goto label_19a8b4;
        default: break;
    }

    ctx->pc = 0x19a778u;

    // 0x19a778: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a77c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x19a77cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x19a780: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19a780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x19a784: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x19a784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x19a788: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19a788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x19a78c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x19a78cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a790: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19a790u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x19a794: 0x24429fd8  addiu       $v0, $v0, -0x6028
    ctx->pc = 0x19a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942680));
    // 0x19a798: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x19a79c: 0x24639ff8  addiu       $v1, $v1, -0x6008
    ctx->pc = 0x19a79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942712));
    // 0x19a7a0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19a7a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x19a7a4: 0x26f00038  addiu       $s0, $s7, 0x38
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 56));
    // 0x19a7a8: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19a7a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x19a7ac: 0x26f5007c  addiu       $s5, $s7, 0x7C
    ctx->pc = 0x19a7acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 23), 124));
    // 0x19a7b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x19a7b4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x19a7b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19a7b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19a7bc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x19a7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19a7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19a7c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7c8: 0xaee2003c  sw          $v0, 0x3C($s7)
    ctx->pc = 0x19a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 60), GPR_U32(ctx, 2));
    // 0x19a7cc: 0x26f40084  addiu       $s4, $s7, 0x84
    ctx->pc = 0x19a7ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 23), 132));
    // 0x19a7d0: 0xaee30034  sw          $v1, 0x34($s7)
    ctx->pc = 0x19a7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 3));
    // 0x19a7d4: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A7D4u;
    SET_GPR_U32(ctx, 31, 0x19A7DCu);
    ctx->pc = 0x19A7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7D4u;
    // 0x19a7d8: 0x26f2009c  addiu       $s2, $s7, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A7D4u, 0x19A7DCu)) {
        return;
    }
    ctx->pc = 0x19A7DCu;
label_19a7dc:
    // 0x19a7dc: 0x26f30094  addiu       $s3, $s7, 0x94
    ctx->pc = 0x19a7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 148));
    // 0x19a7e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7e4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A7E4u;
    SET_GPR_U32(ctx, 31, 0x19A7ECu);
    ctx->pc = 0x19A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7E4u;
    // 0x19a7e8: 0x26f100a8  addiu       $s1, $s7, 0xA8 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 168));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A7E4u, 0x19A7ECu)) {
        return;
    }
    ctx->pc = 0x19A7ECu;
label_19a7ec:
    // 0x19a7ec: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19a7ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a7f0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A7F0u;
    SET_GPR_U32(ctx, 31, 0x19A7F8u);
    ctx->pc = 0x19A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7F0u;
    // 0x19a7f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A7F0u, 0x19A7F8u)) {
        return;
    }
    ctx->pc = 0x19A7F8u;
label_19a7f8:
    // 0x19a7f8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A7F8u;
    SET_GPR_U32(ctx, 31, 0x19A800u);
    ctx->pc = 0x19A7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A7F8u;
    // 0x19a7fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A7F8u, 0x19A800u)) {
        return;
    }
    ctx->pc = 0x19A800u;
label_19a800:
    // 0x19a800: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x19a800u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a804: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A804u;
    SET_GPR_U32(ctx, 31, 0x19A80Cu);
    ctx->pc = 0x19A808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A804u;
    // 0x19a808: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A804u, 0x19A80Cu)) {
        return;
    }
    ctx->pc = 0x19A80Cu;
label_19a80c:
    // 0x19a80c: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A80Cu;
    SET_GPR_U32(ctx, 31, 0x19A814u);
    ctx->pc = 0x19A810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A80Cu;
    // 0x19a810: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A80Cu, 0x19A814u)) {
        return;
    }
    ctx->pc = 0x19A814u;
label_19a814:
    // 0x19a814: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x19a814u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a818: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A818u;
    SET_GPR_U32(ctx, 31, 0x19A820u);
    ctx->pc = 0x19A81Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A818u;
    // 0x19a81c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A818u, 0x19A820u)) {
        return;
    }
    ctx->pc = 0x19A820u;
label_19a820:
    // 0x19a820: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A820u;
    SET_GPR_U32(ctx, 31, 0x19A828u);
    ctx->pc = 0x19A824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A820u;
    // 0x19a824: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A820u, 0x19A828u)) {
        return;
    }
    ctx->pc = 0x19A828u;
label_19a828:
    // 0x19a828: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x19a828u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a82c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A82Cu;
    SET_GPR_U32(ctx, 31, 0x19A834u);
    ctx->pc = 0x19A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A82Cu;
    // 0x19a830: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A82Cu, 0x19A834u)) {
        return;
    }
    ctx->pc = 0x19A834u;
label_19a834:
    // 0x19a834: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x19A834u;
    SET_GPR_U32(ctx, 31, 0x19A83Cu);
    ctx->pc = 0x19A838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A834u;
    // 0x19a838: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x19A834u, 0x19A83Cu)) {
        return;
    }
    ctx->pc = 0x19A83Cu;
label_19a83c:
    // 0x19a83c: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x19a83cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x19a840: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a844: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x19A844u;
    SET_GPR_U32(ctx, 31, 0x19A84Cu);
    ctx->pc = 0x19A848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A844u;
    // 0x19a848: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x19A844u, 0x19A84Cu)) {
        return;
    }
    ctx->pc = 0x19A84Cu;
label_19a84c:
    // 0x19a84c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19a84cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a850: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A850u;
    SET_GPR_U32(ctx, 31, 0x19A858u);
    ctx->pc = 0x19A854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A850u;
    // 0x19a854: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A850u, 0x19A858u)) {
        return;
    }
    ctx->pc = 0x19A858u;
label_19a858:
    // 0x19a858: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19a858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a85c: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A85Cu;
    SET_GPR_U32(ctx, 31, 0x19A864u);
    ctx->pc = 0x19A860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A85Cu;
    // 0x19a860: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A85Cu, 0x19A864u)) {
        return;
    }
    ctx->pc = 0x19A864u;
label_19a864:
    // 0x19a864: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x19a864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a868: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A868u;
    SET_GPR_U32(ctx, 31, 0x19A870u);
    ctx->pc = 0x19A86Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A868u;
    // 0x19a86c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A868u, 0x19A870u)) {
        return;
    }
    ctx->pc = 0x19A870u;
label_19a870:
    // 0x19a870: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19a870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a874: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A874u;
    SET_GPR_U32(ctx, 31, 0x19A87Cu);
    ctx->pc = 0x19A878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A874u;
    // 0x19a878: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A874u, 0x19A87Cu)) {
        return;
    }
    ctx->pc = 0x19A87Cu;
label_19a87c:
    // 0x19a87c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x19a87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a880: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x19A880u;
    SET_GPR_U32(ctx, 31, 0x19A888u);
    ctx->pc = 0x19A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A880u;
    // 0x19a884: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x19A880u, 0x19A888u)) {
        return;
    }
    ctx->pc = 0x19A888u;
label_19a888:
    // 0x19a888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x19a888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19a88c: 0xc07fc62  jal         func_1FF188
    ctx->pc = 0x19A88Cu;
    SET_GPR_U32(ctx, 31, 0x19A894u);
    ctx->pc = 0x19A890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A88Cu;
    // 0x19a890: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF188u, 0x19A88Cu, 0x19A894u)) {
        return;
    }
    ctx->pc = 0x19A894u;
label_19a894:
    // 0x19a894: 0x26e40004  addiu       $a0, $s7, 0x4
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x19a898: 0xc07f11c  jal         func_1FC470
    ctx->pc = 0x19A898u;
    SET_GPR_U32(ctx, 31, 0x19A8A0u);
    ctx->pc = 0x19A89Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A898u;
    // 0x19a89c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC470u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC470u, 0x19A898u, 0x19A8A0u)) {
        return;
    }
    ctx->pc = 0x19A8A0u;
label_19a8a0:
    // 0x19a8a0: 0x32d60001  andi        $s6, $s6, 0x1
    ctx->pc = 0x19a8a0u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)1);
    // 0x19a8a4: 0x12c00004  beqz        $s6, . + 4 + (0x4 << 2)
    ctx->pc = 0x19A8A4u;
    {
        const bool branch_taken_0x19a8a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x19A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8A4u;
        // 0x19a8a8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19a8a4) {
            ctx->pc = 0x19A8B8u;
            goto label_19a8b8;
        }
    }
    ctx->pc = 0x19A8ACu;
    // 0x19a8ac: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x19A8ACu;
    SET_GPR_U32(ctx, 31, 0x19A8B4u);
    ctx->pc = 0x19A8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19A8ACu;
    // 0x19a8b0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x19A8ACu, 0x19A8B4u)) {
        return;
    }
    ctx->pc = 0x19A8B4u;
label_19a8b4:
    // 0x19a8b4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19a8b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19a8b8:
    // 0x19a8b8: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19a8b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19a8bc: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19a8bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19a8c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19a8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19a8c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19a8c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x19a8c8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19a8c8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19a8cc: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19a8ccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a8d0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19a8d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a8d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19a8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19a8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x19A8D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19A8D8u;
        // 0x19a8dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A8D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A8E0u;
}
