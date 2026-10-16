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

// Function: sub_001C2830
// Address: 0x1c2830 - 0x1c2c08
void sub_001C2830_0x1c2830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2830_0x1c2830");
#endif

    switch (ctx->pc) {
        case 0x1c2868u: goto label_1c2868;
        case 0x1c28dcu: goto label_1c28dc;
        case 0x1c28ecu: goto label_1c28ec;
        case 0x1c28fcu: goto label_1c28fc;
        case 0x1c2914u: goto label_1c2914;
        case 0x1c2928u: goto label_1c2928;
        case 0x1c293cu: goto label_1c293c;
        case 0x1c2954u: goto label_1c2954;
        case 0x1c2968u: goto label_1c2968;
        case 0x1c297cu: goto label_1c297c;
        case 0x1c2994u: goto label_1c2994;
        case 0x1c29a8u: goto label_1c29a8;
        case 0x1c29bcu: goto label_1c29bc;
        case 0x1c29d4u: goto label_1c29d4;
        case 0x1c29e8u: goto label_1c29e8;
        case 0x1c29fcu: goto label_1c29fc;
        case 0x1c2a14u: goto label_1c2a14;
        case 0x1c2a28u: goto label_1c2a28;
        case 0x1c2a40u: goto label_1c2a40;
        case 0x1c2a58u: goto label_1c2a58;
        case 0x1c2a6cu: goto label_1c2a6c;
        case 0x1c2a80u: goto label_1c2a80;
        case 0x1c2a94u: goto label_1c2a94;
        case 0x1c2aa8u: goto label_1c2aa8;
        case 0x1c2abcu: goto label_1c2abc;
        case 0x1c2ad0u: goto label_1c2ad0;
        case 0x1c2ae0u: goto label_1c2ae0;
        case 0x1c2af8u: goto label_1c2af8;
        case 0x1c2b40u: goto label_1c2b40;
        case 0x1c2b50u: goto label_1c2b50;
        case 0x1c2b64u: goto label_1c2b64;
        case 0x1c2b78u: goto label_1c2b78;
        case 0x1c2b98u: goto label_1c2b98;
        default: break;
    }

    ctx->pc = 0x1c2830u;

    // 0x1c2830: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x1c2830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x1c2834: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1c2834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1c2838: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1c2838u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1c283c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c283cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2840: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1c2840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1c2844: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1c2844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1c2848: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1c2848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1c284c: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1c284cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1c2850: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1c2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1c2854: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1c2854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1c2858: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1c2858u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1c285c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1c285cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1c2860: 0xc06b968  jal         func_1AE5A0
    ctx->pc = 0x1C2860u;
    SET_GPR_U32(ctx, 31, 0x1C2868u);
    ctx->pc = 0x1C2864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2860u;
    // 0x1c2864: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE5A0u, 0x1C2860u, 0x1C2868u)) {
        return;
    }
    ctx->pc = 0x1C2868u;
label_1c2868:
    // 0x1c2868: 0x3c014041  lui         $at, 0x4041
    ctx->pc = 0x1c2868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16449 << 16));
    // 0x1c286c: 0x3421f07c  ori         $at, $at, 0xF07C
    ctx->pc = 0x1c286cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61564);
    // 0x1c2870: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c2870u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c2874: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1c2874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x1c2878: 0x2463e0f8  addiu       $v1, $v1, -0x1F08
    ctx->pc = 0x1c2878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959352));
    // 0x1c287c: 0xae200260  sw          $zero, 0x260($s1)
    ctx->pc = 0x1c287cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 0));
    // 0x1c2880: 0xae200264  sw          $zero, 0x264($s1)
    ctx->pc = 0x1c2880u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 0));
    // 0x1c2884: 0x26240828  addiu       $a0, $s1, 0x828
    ctx->pc = 0x1c2884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2088));
    // 0x1c2888: 0xae200268  sw          $zero, 0x268($s1)
    ctx->pc = 0x1c2888u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 616), GPR_U32(ctx, 0));
    // 0x1c288c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c288cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2890: 0xae20026c  sw          $zero, 0x26C($s1)
    ctx->pc = 0x1c2890u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 620), GPR_U32(ctx, 0));
    // 0x1c2894: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x1c2894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x1c2898: 0xae200270  sw          $zero, 0x270($s1)
    ctx->pc = 0x1c2898u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 624), GPR_U32(ctx, 0));
    // 0x1c289c: 0xae200274  sw          $zero, 0x274($s1)
    ctx->pc = 0x1c289cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 628), GPR_U32(ctx, 0));
    // 0x1c28a0: 0xae200278  sw          $zero, 0x278($s1)
    ctx->pc = 0x1c28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 632), GPR_U32(ctx, 0));
    // 0x1c28a4: 0xae20027c  sw          $zero, 0x27C($s1)
    ctx->pc = 0x1c28a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 636), GPR_U32(ctx, 0));
    // 0x1c28a8: 0xae200280  sw          $zero, 0x280($s1)
    ctx->pc = 0x1c28a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 0));
    // 0x1c28ac: 0xae200284  sw          $zero, 0x284($s1)
    ctx->pc = 0x1c28acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 644), GPR_U32(ctx, 0));
    // 0x1c28b0: 0xae200288  sw          $zero, 0x288($s1)
    ctx->pc = 0x1c28b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 648), GPR_U32(ctx, 0));
    // 0x1c28b4: 0xae20028c  sw          $zero, 0x28C($s1)
    ctx->pc = 0x1c28b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 652), GPR_U32(ctx, 0));
    // 0x1c28b8: 0xae200814  sw          $zero, 0x814($s1)
    ctx->pc = 0x1c28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 0));
    // 0x1c28bc: 0xae200818  sw          $zero, 0x818($s1)
    ctx->pc = 0x1c28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 0));
    // 0x1c28c0: 0xae20081c  sw          $zero, 0x81C($s1)
    ctx->pc = 0x1c28c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2076), GPR_U32(ctx, 0));
    // 0x1c28c4: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x1c28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x1c28c8: 0xae200874  sw          $zero, 0x874($s1)
    ctx->pc = 0x1c28c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2164), GPR_U32(ctx, 0));
    // 0x1c28cc: 0xae200878  sw          $zero, 0x878($s1)
    ctx->pc = 0x1c28ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2168), GPR_U32(ctx, 0));
    // 0x1c28d0: 0xae230258  sw          $v1, 0x258($s1)
    ctx->pc = 0x1c28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 600), GPR_U32(ctx, 3));
    // 0x1c28d4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C28D4u;
    SET_GPR_U32(ctx, 31, 0x1C28DCu);
    ctx->pc = 0x1C28D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28D4u;
    // 0x1c28d8: 0xe6200824  swc1        $f0, 0x824($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 2084), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C28D4u, 0x1C28DCu)) {
        return;
    }
    ctx->pc = 0x1C28DCu;
label_1c28dc:
    // 0x1c28dc: 0x2624080c  addiu       $a0, $s1, 0x80C
    ctx->pc = 0x1c28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2060));
    // 0x1c28e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c28e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28e4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C28E4u;
    SET_GPR_U32(ctx, 31, 0x1C28ECu);
    ctx->pc = 0x1C28E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28E4u;
    // 0x1c28e8: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C28E4u, 0x1C28ECu)) {
        return;
    }
    ctx->pc = 0x1C28ECu;
label_1c28ec:
    // 0x1c28ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c28ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c28f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c28f4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C28F4u;
    SET_GPR_U32(ctx, 31, 0x1C28FCu);
    ctx->pc = 0x1C28F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C28F4u;
    // 0x1c28f8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C28F4u, 0x1C28FCu)) {
        return;
    }
    ctx->pc = 0x1C28FCu;
label_1c28fc:
    // 0x1c28fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c28fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2904: 0x24a5dfc0  addiu       $a1, $a1, -0x2040
    ctx->pc = 0x1c2904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959040));
    // 0x1c2908: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2908u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c290c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C290Cu;
    SET_GPR_U32(ctx, 31, 0x1C2914u);
    ctx->pc = 0x1C2910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C290Cu;
    // 0x1c2910: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C290Cu, 0x1C2914u)) {
        return;
    }
    ctx->pc = 0x1C2914u;
label_1c2914:
    // 0x1c2914: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c2914u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2918: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2918u;
    {
        const bool branch_taken_0x1c2918 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2918u;
        // 0x1c291c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2918) {
            ctx->pc = 0x1C292Cu;
            goto label_1c292c;
        }
    }
    ctx->pc = 0x1C2920u;
    // 0x1c2920: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C2920u;
    SET_GPR_U32(ctx, 31, 0x1C2928u);
    ctx->pc = 0x1C2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2920u;
    // 0x1c2924: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C2920u, 0x1C2928u)) {
        return;
    }
    ctx->pc = 0x1C2928u;
label_1c2928:
    // 0x1c2928: 0xae220260  sw          $v0, 0x260($s1)
    ctx->pc = 0x1c2928u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 608), GPR_U32(ctx, 2));
label_1c292c:
    // 0x1c292c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2930: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2930u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2934: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2934u;
    SET_GPR_U32(ctx, 31, 0x1C293Cu);
    ctx->pc = 0x1C2938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2934u;
    // 0x1c2938: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2934u, 0x1C293Cu)) {
        return;
    }
    ctx->pc = 0x1C293Cu;
label_1c293c:
    // 0x1c293c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c293cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2944: 0x24a5dfd0  addiu       $a1, $a1, -0x2030
    ctx->pc = 0x1c2944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959056));
    // 0x1c2948: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c294c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C294Cu;
    SET_GPR_U32(ctx, 31, 0x1C2954u);
    ctx->pc = 0x1C2950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C294Cu;
    // 0x1c2950: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C294Cu, 0x1C2954u)) {
        return;
    }
    ctx->pc = 0x1C2954u;
label_1c2954:
    // 0x1c2954: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c2954u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2958: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2958u;
    {
        const bool branch_taken_0x1c2958 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2958u;
        // 0x1c295c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2958) {
            ctx->pc = 0x1C296Cu;
            goto label_1c296c;
        }
    }
    ctx->pc = 0x1C2960u;
    // 0x1c2960: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C2960u;
    SET_GPR_U32(ctx, 31, 0x1C2968u);
    ctx->pc = 0x1C2964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2960u;
    // 0x1c2964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C2960u, 0x1C2968u)) {
        return;
    }
    ctx->pc = 0x1C2968u;
label_1c2968:
    // 0x1c2968: 0xae220264  sw          $v0, 0x264($s1)
    ctx->pc = 0x1c2968u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 612), GPR_U32(ctx, 2));
label_1c296c:
    // 0x1c296c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c296cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2970: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2970u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2974: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2974u;
    SET_GPR_U32(ctx, 31, 0x1C297Cu);
    ctx->pc = 0x1C2978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2974u;
    // 0x1c2978: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2974u, 0x1C297Cu)) {
        return;
    }
    ctx->pc = 0x1C297Cu;
label_1c297c:
    // 0x1c297c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c297cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2984: 0x24a5dfe0  addiu       $a1, $a1, -0x2020
    ctx->pc = 0x1c2984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959072));
    // 0x1c2988: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2988u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c298c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C298Cu;
    SET_GPR_U32(ctx, 31, 0x1C2994u);
    ctx->pc = 0x1C2990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C298Cu;
    // 0x1c2990: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C298Cu, 0x1C2994u)) {
        return;
    }
    ctx->pc = 0x1C2994u;
label_1c2994:
    // 0x1c2994: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c2994u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2998: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2998u;
    {
        const bool branch_taken_0x1c2998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2998u;
        // 0x1c299c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2998) {
            ctx->pc = 0x1C29ACu;
            goto label_1c29ac;
        }
    }
    ctx->pc = 0x1C29A0u;
    // 0x1c29a0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C29A0u;
    SET_GPR_U32(ctx, 31, 0x1C29A8u);
    ctx->pc = 0x1C29A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29A0u;
    // 0x1c29a4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C29A0u, 0x1C29A8u)) {
        return;
    }
    ctx->pc = 0x1C29A8u;
label_1c29a8:
    // 0x1c29a8: 0xae22080c  sw          $v0, 0x80C($s1)
    ctx->pc = 0x1c29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2060), GPR_U32(ctx, 2));
label_1c29ac:
    // 0x1c29ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c29acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c29b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29b4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C29B4u;
    SET_GPR_U32(ctx, 31, 0x1C29BCu);
    ctx->pc = 0x1C29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29B4u;
    // 0x1c29b8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C29B4u, 0x1C29BCu)) {
        return;
    }
    ctx->pc = 0x1C29BCu;
label_1c29bc:
    // 0x1c29bc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c29bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c29c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c29c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29c4: 0x24a5dff0  addiu       $a1, $a1, -0x2010
    ctx->pc = 0x1c29c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959088));
    // 0x1c29c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c29c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29cc: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C29CCu;
    SET_GPR_U32(ctx, 31, 0x1C29D4u);
    ctx->pc = 0x1C29D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29CCu;
    // 0x1c29d0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C29CCu, 0x1C29D4u)) {
        return;
    }
    ctx->pc = 0x1C29D4u;
label_1c29d4:
    // 0x1c29d4: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c29d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c29d8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C29D8u;
    {
        const bool branch_taken_0x1c29d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C29DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C29D8u;
        // 0x1c29dc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c29d8) {
            ctx->pc = 0x1C29ECu;
            goto label_1c29ec;
        }
    }
    ctx->pc = 0x1C29E0u;
    // 0x1c29e0: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C29E0u;
    SET_GPR_U32(ctx, 31, 0x1C29E8u);
    ctx->pc = 0x1C29E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29E0u;
    // 0x1c29e4: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C29E0u, 0x1C29E8u)) {
        return;
    }
    ctx->pc = 0x1C29E8u;
label_1c29e8:
    // 0x1c29e8: 0xae220810  sw          $v0, 0x810($s1)
    ctx->pc = 0x1c29e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 2));
label_1c29ec:
    // 0x1c29ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c29ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c29f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c29f4: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C29F4u;
    SET_GPR_U32(ctx, 31, 0x1C29FCu);
    ctx->pc = 0x1C29F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C29F4u;
    // 0x1c29f8: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C29F4u, 0x1C29FCu)) {
        return;
    }
    ctx->pc = 0x1C29FCu;
label_1c29fc:
    // 0x1c29fc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c29fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a04: 0x24a5e000  addiu       $a1, $a1, -0x2000
    ctx->pc = 0x1c2a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959104));
    // 0x1c2a08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2a08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a0c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C2A0Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A14u);
    ctx->pc = 0x1C2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A0Cu;
    // 0x1c2a10: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C2A0Cu, 0x1C2A14u)) {
        return;
    }
    ctx->pc = 0x1C2A14u;
label_1c2a14:
    // 0x1c2a14: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c2a14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2a18: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2A18u;
    {
        const bool branch_taken_0x1c2a18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2A18u;
        // 0x1c2a1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2a18) {
            ctx->pc = 0x1C2A2Cu;
            goto label_1c2a2c;
        }
    }
    ctx->pc = 0x1C2A20u;
    // 0x1c2a20: 0xc065c40  jal         func_197100
    ctx->pc = 0x1C2A20u;
    SET_GPR_U32(ctx, 31, 0x1C2A28u);
    ctx->pc = 0x1C2A24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A20u;
    // 0x1c2a24: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197100u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197100u, 0x1C2A20u, 0x1C2A28u)) {
        return;
    }
    ctx->pc = 0x1C2A28u;
label_1c2a28:
    // 0x1c2a28: 0xae220814  sw          $v0, 0x814($s1)
    ctx->pc = 0x1c2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
label_1c2a2c:
    // 0x1c2a2c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a30: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a34: 0x24a5e010  addiu       $a1, $a1, -0x1FF0
    ctx->pc = 0x1c2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959120));
    // 0x1c2a38: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2A38u;
    SET_GPR_U32(ctx, 31, 0x1C2A40u);
    ctx->pc = 0x1C2A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A38u;
    // 0x1c2a3c: 0x2626026c  addiu       $a2, $s1, 0x26C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 620));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2A38u, 0x1C2A40u)) {
        return;
    }
    ctx->pc = 0x1C2A40u;
label_1c2a40:
    // 0x1c2a40: 0x26300850  addiu       $s0, $s1, 0x850
    ctx->pc = 0x1c2a40u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2128));
    // 0x1c2a44: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a4c: 0x24a5e020  addiu       $a1, $a1, -0x1FE0
    ctx->pc = 0x1c2a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959136));
    // 0x1c2a50: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2A50u;
    SET_GPR_U32(ctx, 31, 0x1C2A58u);
    ctx->pc = 0x1C2A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A50u;
    // 0x1c2a54: 0x26260284  addiu       $a2, $s1, 0x284 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 644));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2A50u, 0x1C2A58u)) {
        return;
    }
    ctx->pc = 0x1C2A58u;
label_1c2a58:
    // 0x1c2a58: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a60: 0x24a5e028  addiu       $a1, $a1, -0x1FD8
    ctx->pc = 0x1c2a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959144));
    // 0x1c2a64: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2A64u;
    SET_GPR_U32(ctx, 31, 0x1C2A6Cu);
    ctx->pc = 0x1C2A68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A64u;
    // 0x1c2a68: 0x26260270  addiu       $a2, $s1, 0x270 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2A64u, 0x1C2A6Cu)) {
        return;
    }
    ctx->pc = 0x1C2A6Cu;
label_1c2a6c:
    // 0x1c2a6c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a74: 0x24a5e038  addiu       $a1, $a1, -0x1FC8
    ctx->pc = 0x1c2a74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959160));
    // 0x1c2a78: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2A78u;
    SET_GPR_U32(ctx, 31, 0x1C2A80u);
    ctx->pc = 0x1C2A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A78u;
    // 0x1c2a7c: 0x26260274  addiu       $a2, $s1, 0x274 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2A78u, 0x1C2A80u)) {
        return;
    }
    ctx->pc = 0x1C2A80u;
label_1c2a80:
    // 0x1c2a80: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a88: 0x24a5e048  addiu       $a1, $a1, -0x1FB8
    ctx->pc = 0x1c2a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959176));
    // 0x1c2a8c: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1C2A94u);
    ctx->pc = 0x1C2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2A8Cu;
    // 0x1c2a90: 0x26260278  addiu       $a2, $s1, 0x278 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2A8Cu, 0x1C2A94u)) {
        return;
    }
    ctx->pc = 0x1C2A94u;
label_1c2a94:
    // 0x1c2a94: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2a94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2a98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2a98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2a9c: 0x24a5e058  addiu       $a1, $a1, -0x1FA8
    ctx->pc = 0x1c2a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959192));
    // 0x1c2aa0: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2AA0u;
    SET_GPR_U32(ctx, 31, 0x1C2AA8u);
    ctx->pc = 0x1C2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AA0u;
    // 0x1c2aa4: 0x2626027c  addiu       $a2, $s1, 0x27C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 636));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2AA0u, 0x1C2AA8u)) {
        return;
    }
    ctx->pc = 0x1C2AA8u;
label_1c2aa8:
    // 0x1c2aa8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2aac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2aacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ab0: 0x24a5e068  addiu       $a1, $a1, -0x1F98
    ctx->pc = 0x1c2ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959208));
    // 0x1c2ab4: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2AB4u;
    SET_GPR_U32(ctx, 31, 0x1C2ABCu);
    ctx->pc = 0x1C2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AB4u;
    // 0x1c2ab8: 0x26260280  addiu       $a2, $s1, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2AB4u, 0x1C2ABCu)) {
        return;
    }
    ctx->pc = 0x1C2ABCu;
label_1c2abc:
    // 0x1c2abc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1c2abcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1c2ac0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ac4: 0x24a5e078  addiu       $a1, $a1, -0x1F88
    ctx->pc = 0x1c2ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959224));
    // 0x1c2ac8: 0xc065ee8  jal         func_197BA0
    ctx->pc = 0x1C2AC8u;
    SET_GPR_U32(ctx, 31, 0x1C2AD0u);
    ctx->pc = 0x1C2ACCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AC8u;
    // 0x1c2acc: 0x26260288  addiu       $a2, $s1, 0x288 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197BA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197BA0u, 0x1C2AC8u, 0x1C2AD0u)) {
        return;
    }
    ctx->pc = 0x1C2AD0u;
label_1c2ad0:
    // 0x1c2ad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c2ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2ad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2ad8: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2AD8u;
    SET_GPR_U32(ctx, 31, 0x1C2AE0u);
    ctx->pc = 0x1C2ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2AD8u;
    // 0x1c2adc: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2AD8u, 0x1C2AE0u)) {
        return;
    }
    ctx->pc = 0x1C2AE0u;
label_1c2ae0:
    // 0x1c2ae0: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x1c2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1c2ae4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c2ae8: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x1c2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x1c2aec: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1c2af0: 0x2622086c  addiu       $v0, $s1, 0x86C
    ctx->pc = 0x1c2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2156));
    // 0x1c2af4: 0x0  nop
    ctx->pc = 0x1c2af4u;
    // NOP
label_1c2af8:
    // 0x1c2af8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1c2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1c2afc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1c2afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1c2b00: 0x0  nop
    ctx->pc = 0x1c2b00u;
    // NOP
    // 0x1c2b04: 0x0  nop
    ctx->pc = 0x1c2b04u;
    // NOP
    // 0x1c2b08: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1C2B08u;
    {
        const bool branch_taken_0x1c2b08 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x1C2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B08u;
        // 0x1c2b0c: 0x2442fff4  addiu       $v0, $v0, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b08) {
            ctx->pc = 0x1C2AF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2af8;
        }
    }
    ctx->pc = 0x1C2B10u;
    // 0x1c2b10: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c2b10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1c2b14: 0x3c15ffff  lui         $s5, 0xFFFF
    ctx->pc = 0x1c2b14u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65535 << 16));
    // 0x1c2b18: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1c2b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1c2b1c: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x1c2b1cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
    // 0x1c2b20: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x1c2b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b24: 0x247e9808  addiu       $fp, $v1, -0x67F8
    ctx->pc = 0x1c2b24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940680));
    // 0x1c2b28: 0x24579818  addiu       $s7, $v0, -0x67E8
    ctx->pc = 0x1c2b28u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940696));
    // 0x1c2b2c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1c2b2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b30: 0x36b5ffff  ori         $s5, $s5, 0xFFFF
    ctx->pc = 0x1c2b30u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)65535);
    // 0x1c2b34: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x1c2b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b38: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x1c2b38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    // 0x1c2b3c: 0x0  nop
    ctx->pc = 0x1c2b3cu;
    // NOP
label_1c2b40:
    // 0x1c2b40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c2b40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c2b44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b48: 0xc0c493d  jal         func_3124F4
    ctx->pc = 0x1C2B48u;
    SET_GPR_U32(ctx, 31, 0x1C2B50u);
    ctx->pc = 0x1C2B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B48u;
    // 0x1c2b4c: 0x24060080  addiu       $a2, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C2B48u, 0x1C2B50u)) {
        return;
    }
    ctx->pc = 0x1C2B50u;
label_1c2b50:
    // 0x1c2b50: 0x8fc50000  lw          $a1, 0x0($fp)
    ctx->pc = 0x1c2b50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x1c2b54: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2b54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b58: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1c2b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b5c: 0xc065f2c  jal         func_197CB0
    ctx->pc = 0x1C2B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C2B64u);
    ctx->pc = 0x1C2B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B5Cu;
    // 0x1c2b60: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197CB0u, 0x1C2B5Cu, 0x1C2B64u)) {
        return;
    }
    ctx->pc = 0x1C2B64u;
label_1c2b64:
    // 0x1c2b64: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x1c2b64u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c2b68: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C2B68u;
    {
        const bool branch_taken_0x1c2b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C2B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2B68u;
        // 0x1c2b6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2b68) {
            ctx->pc = 0x1C2B7Cu;
            goto label_1c2b7c;
        }
    }
    ctx->pc = 0x1C2B70u;
    // 0x1c2b70: 0xc081b56  jal         func_206D58
    ctx->pc = 0x1C2B70u;
    SET_GPR_U32(ctx, 31, 0x1C2B78u);
    ctx->pc = 0x1C2B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B70u;
    // 0x1c2b74: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x1C2B70u, 0x1C2B78u)) {
        return;
    }
    ctx->pc = 0x1C2B78u;
label_1c2b78:
    // 0x1c2b78: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1c2b78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1c2b7c:
    // 0x1c2b7c: 0x8ee50000  lw          $a1, 0x0($s7)
    ctx->pc = 0x1c2b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x1c2b80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1c2b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2b84: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x1c2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1c2b88: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1c2b88u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1c2b8c: 0xafb50080  sw          $s5, 0x80($sp)
    ctx->pc = 0x1c2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 21));
    // 0x1c2b90: 0xc065f72  jal         func_197DC8
    ctx->pc = 0x1C2B90u;
    SET_GPR_U32(ctx, 31, 0x1C2B98u);
    ctx->pc = 0x1C2B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C2B90u;
    // 0x1c2b94: 0x2673000c  addiu       $s3, $s3, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x197DC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x197DC8u, 0x1C2B90u, 0x1C2B98u)) {
        return;
    }
    ctx->pc = 0x1C2B98u;
label_1c2b98:
    // 0x1c2b98: 0x27de0004  addiu       $fp, $fp, 0x4
    ctx->pc = 0x1c2b98u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
    // 0x1c2b9c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1c2b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2ba0: 0x26f70004  addiu       $s7, $s7, 0x4
    ctx->pc = 0x1c2ba0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
    // 0x1c2ba4: 0x93a50080  lbu         $a1, 0x80($sp)
    ctx->pc = 0x1c2ba4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1c2ba8: 0x541824  and         $v1, $v0, $s4
    ctx->pc = 0x1c2ba8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
    // 0x1c2bac: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x1c2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x1c2bb0: 0x21602  srl         $v0, $v0, 24
    ctx->pc = 0x1c2bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 24));
    // 0x1c2bb4: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x1c2bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x1c2bb8: 0xa2020858  sb          $v0, 0x858($s0)
    ctx->pc = 0x1c2bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2136), (uint8_t)GPR_U32(ctx, 2));
    // 0x1c2bbc: 0xa2030859  sb          $v1, 0x859($s0)
    ctx->pc = 0x1c2bbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2137), (uint8_t)GPR_U32(ctx, 3));
    // 0x1c2bc0: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x1c2bc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1c2bc4: 0xa204085a  sb          $a0, 0x85A($s0)
    ctx->pc = 0x1c2bc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2138), (uint8_t)GPR_U32(ctx, 4));
    // 0x1c2bc8: 0xa205085b  sb          $a1, 0x85B($s0)
    ctx->pc = 0x1c2bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2139), (uint8_t)GPR_U32(ctx, 5));
    // 0x1c2bcc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
    ctx->pc = 0x1C2BCCu;
    {
        const bool branch_taken_0x1c2bcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C2BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2BCCu;
        // 0x1c2bd0: 0x2610000c  addiu       $s0, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c2bcc) {
            ctx->pc = 0x1C2B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c2b40;
        }
    }
    ctx->pc = 0x1C2BD4u;
    // 0x1c2bd4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c2bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c2bd8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1c2bd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1c2bdc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1c2bdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1c2be0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1c2be0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1c2be4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1c2be4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1c2be8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1c2be8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1c2bec: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1c2becu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1c2bf0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1c2bf0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1c2bf4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1c2bf4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1c2bf8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1c2bf8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c2bfc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c2bfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c2c00: 0x3e00008  jr          $ra
    ctx->pc = 0x1C2C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C2C00u;
        // 0x1c2c04: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C2C00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C2C08u;
}
