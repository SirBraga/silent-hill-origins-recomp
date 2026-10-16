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

// Function: sub_001A2898
// Address: 0x1a2898 - 0x1a2a18
void sub_001A2898_0x1a2898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A2898_0x1a2898");
#endif

    switch (ctx->pc) {
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2950u: goto label_1a2950;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a2994u: goto label_1a2994;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29d4u: goto label_1a29d4;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29e4u: goto label_1a29e4;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29f4u: goto label_1a29f4;
        default: break;
    }

    ctx->pc = 0x1a2898u;

    // 0x1a2898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a2898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1a289c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1a289cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1a28a0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1a28a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1a28a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a28a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a28a8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a28a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1a28ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a28acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a28b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1a28b4: 0x2442b128  addiu       $v0, $v0, -0x4ED8
    ctx->pc = 0x1a28b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947112));
    // 0x1a28b8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x1a28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x1a28bc: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1a28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1a28c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a28c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a28c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28c8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1a28cc: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1a28ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1a28d0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x1a28d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A28D4u;
    SET_GPR_U32(ctx, 31, 0x1A28DCu);
    ctx->pc = 0x1A28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28D4u;
    // 0x1a28d8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A28D4u, 0x1A28DCu)) {
        return;
    }
    ctx->pc = 0x1A28DCu;
label_1a28dc:
    // 0x1a28dc: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1a28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x1a28e0: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1a28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1a28e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a28e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a28e8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1A28E8u;
    SET_GPR_U32(ctx, 31, 0x1A28F0u);
    ctx->pc = 0x1A28ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A28E8u;
    // 0x1a28ec: 0x24060440  addiu       $a2, $zero, 0x440 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1A28E8u, 0x1A28F0u)) {
        return;
    }
    ctx->pc = 0x1A28F0u;
label_1a28f0:
    // 0x1a28f0: 0x3c13006b  lui         $s3, 0x6B
    ctx->pc = 0x1a28f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)107 << 16));
    // 0x1a28f4: 0xae000470  sw          $zero, 0x470($s0)
    ctx->pc = 0x1a28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1136), GPR_U32(ctx, 0));
    // 0x1a28f8: 0x26734668  addiu       $s3, $s3, 0x4668
    ctx->pc = 0x1a28f8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 18024));
    // 0x1a28fc: 0xae000474  sw          $zero, 0x474($s0)
    ctx->pc = 0x1a28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1140), GPR_U32(ctx, 0));
    // 0x1a2900: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1a2900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1a2904: 0x3c06006a  lui         $a2, 0x6A
    ctx->pc = 0x1a2904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)106 << 16));
    // 0x1a2908: 0x24a5aff8  addiu       $a1, $a1, -0x5008
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946808));
    // 0x1a290c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1a290cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2910: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1A2910u;
    SET_GPR_U32(ctx, 31, 0x1A2918u);
    ctx->pc = 0x1A2914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2910u;
    // 0x1a2914: 0x24c6b018  addiu       $a2, $a2, -0x4FE8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1A2910u, 0x1A2918u)) {
        return;
    }
    ctx->pc = 0x1A2918u;
label_1a2918:
    // 0x1a2918: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
    // 0x1a291c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1a291cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1a2920: 0x26524608  addiu       $s2, $s2, 0x4608
    ctx->pc = 0x1a2920u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 17928));
    // 0x1a2924: 0x24a5b020  addiu       $a1, $a1, -0x4FE0
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946848));
    // 0x1a2928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1a2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a292c: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1A292Cu;
    SET_GPR_U32(ctx, 31, 0x1A2934u);
    ctx->pc = 0x1A2930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A292Cu;
    // 0x1a2930: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1A292Cu, 0x1A2934u)) {
        return;
    }
    ctx->pc = 0x1A2934u;
label_1a2934:
    // 0x1a2934: 0x3c110070  lui         $s1, 0x70
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)112 << 16));
    // 0x1a2938: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1a2938u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1a293c: 0x26318180  addiu       $s1, $s1, -0x7E80
    ctx->pc = 0x1a293cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294934912));
    // 0x1a2940: 0x24a5b030  addiu       $a1, $a1, -0x4FD0
    ctx->pc = 0x1a2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946864));
    // 0x1a2944: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a2944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2948: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1A2948u;
    SET_GPR_U32(ctx, 31, 0x1A2950u);
    ctx->pc = 0x1A294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2948u;
    // 0x1a294c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1A2948u, 0x1A2950u)) {
        return;
    }
    ctx->pc = 0x1A2950u;
label_1a2950:
    // 0x1a2950: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1a2950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1a2954: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1a2954u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1a2958: 0x24a5b048  addiu       $a1, $a1, -0x4FB8
    ctx->pc = 0x1a2958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946888));
    // 0x1a295c: 0x24848188  addiu       $a0, $a0, -0x7E78
    ctx->pc = 0x1a295cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934920));
    // 0x1a2960: 0xc07f9a4  jal         func_1FE690
    ctx->pc = 0x1A2960u;
    SET_GPR_U32(ctx, 31, 0x1A2968u);
    ctx->pc = 0x1A2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2960u;
    // 0x1a2964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE690u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE690u, 0x1A2960u, 0x1A2968u)) {
        return;
    }
    ctx->pc = 0x1A2968u;
label_1a2968:
    // 0x1a2968: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x1a296c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2970: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x1a2970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x1a2974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2978: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1A2978u;
    SET_GPR_U32(ctx, 31, 0x1A2980u);
    ctx->pc = 0x1A297Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A2978u;
    // 0x1a297c: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1A2978u, 0x1A2980u)) {
        return;
    }
    ctx->pc = 0x1A2980u;
label_1a2980:
    // 0x1a2980: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a2980u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2988: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a2988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a298c: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1A298Cu;
    SET_GPR_U32(ctx, 31, 0x1A2994u);
    ctx->pc = 0x1A2990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A298Cu;
    // 0x1a2990: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1A298Cu, 0x1A2994u)) {
        return;
    }
    ctx->pc = 0x1A2994u;
label_1a2994:
    // 0x1a2994: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1a2994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a2998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a2998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a299c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a299cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29a0: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1A29A0u;
    SET_GPR_U32(ctx, 31, 0x1A29A8u);
    ctx->pc = 0x1A29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29A0u;
    // 0x1a29a4: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1A29A0u, 0x1A29A8u)) {
        return;
    }
    ctx->pc = 0x1A29A8u;
label_1a29a8:
    // 0x1a29a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a29a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a29acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a29b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29b4: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1A29B4u;
    SET_GPR_U32(ctx, 31, 0x1A29BCu);
    ctx->pc = 0x1A29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29B4u;
    // 0x1a29b8: 0x34078000  ori         $a3, $zero, 0x8000 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1A29B4u, 0x1A29BCu)) {
        return;
    }
    ctx->pc = 0x1A29BCu;
label_1a29bc:
    // 0x1a29bc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x1a29c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a29c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29c4: 0x24a5f880  addiu       $a1, $a1, -0x780
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965376));
    // 0x1a29c8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x1a29c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1a29cc: 0xc07fc98  jal         func_1FF260
    ctx->pc = 0x1A29CCu;
    SET_GPR_U32(ctx, 31, 0x1A29D4u);
    ctx->pc = 0x1A29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29CCu;
    // 0x1a29d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1A29CCu, 0x1A29D4u)) {
        return;
    }
    ctx->pc = 0x1A29D4u;
label_1a29d4:
    // 0x1a29d4: 0xc06a7c4  jal         func_1A9F10
    ctx->pc = 0x1A29D4u;
    SET_GPR_U32(ctx, 31, 0x1A29DCu);
    ctx->pc = 0x1A9F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9F10u, 0x1A29D4u, 0x1A29DCu)) {
        return;
    }
    ctx->pc = 0x1A29DCu;
label_1a29dc:
    // 0x1a29dc: 0xc06a80c  jal         func_1AA030
    ctx->pc = 0x1A29DCu;
    SET_GPR_U32(ctx, 31, 0x1A29E4u);
    ctx->pc = 0x1A29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29DCu;
    // 0x1a29e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA030u, 0x1A29DCu, 0x1A29E4u)) {
        return;
    }
    ctx->pc = 0x1A29E4u;
label_1a29e4:
    // 0x1a29e4: 0xc06a928  jal         func_1AA4A0
    ctx->pc = 0x1A29E4u;
    SET_GPR_U32(ctx, 31, 0x1A29ECu);
    ctx->pc = 0x1AA4A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA4A0u, 0x1A29E4u, 0x1A29ECu)) {
        return;
    }
    ctx->pc = 0x1A29ECu;
label_1a29ec:
    // 0x1a29ec: 0xc06a994  jal         func_1AA650
    ctx->pc = 0x1A29ECu;
    SET_GPR_U32(ctx, 31, 0x1A29F4u);
    ctx->pc = 0x1A29F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A29ECu;
    // 0x1a29f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AA650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AA650u, 0x1A29ECu, 0x1A29F4u)) {
        return;
    }
    ctx->pc = 0x1A29F4u;
label_1a29f4:
    // 0x1a29f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1a29f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a29f8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1a29f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a29fc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1a29fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a2a00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a2a04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1a2a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a2a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a2a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a2a0c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A2A0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A2A0Cu;
        // 0x1a2a10: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A2A0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A2A14u;
    // 0x1a2a14: 0x0  nop
    ctx->pc = 0x1a2a14u;
    // NOP
    ctx->pc = 0x1a2a18u;
}
