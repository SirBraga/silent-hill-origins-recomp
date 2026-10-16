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

// Function: sub_001D2840
// Address: 0x1d2840 - 0x1d2b10
void sub_001D2840_0x1d2840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2840_0x1d2840");
#endif

    switch (ctx->pc) {
        case 0x1d2840u: goto label_1d2840;
        case 0x1d2844u: goto label_1d2844;
        case 0x1d2848u: goto label_1d2848;
        case 0x1d284cu: goto label_1d284c;
        case 0x1d2850u: goto label_1d2850;
        case 0x1d2854u: goto label_1d2854;
        case 0x1d2858u: goto label_1d2858;
        case 0x1d285cu: goto label_1d285c;
        case 0x1d2860u: goto label_1d2860;
        case 0x1d2864u: goto label_1d2864;
        case 0x1d2868u: goto label_1d2868;
        case 0x1d286cu: goto label_1d286c;
        case 0x1d2870u: goto label_1d2870;
        case 0x1d2874u: goto label_1d2874;
        case 0x1d2878u: goto label_1d2878;
        case 0x1d287cu: goto label_1d287c;
        case 0x1d2880u: goto label_1d2880;
        case 0x1d2884u: goto label_1d2884;
        case 0x1d2888u: goto label_1d2888;
        case 0x1d288cu: goto label_1d288c;
        case 0x1d2890u: goto label_1d2890;
        case 0x1d2894u: goto label_1d2894;
        case 0x1d2898u: goto label_1d2898;
        case 0x1d289cu: goto label_1d289c;
        case 0x1d28a0u: goto label_1d28a0;
        case 0x1d28a4u: goto label_1d28a4;
        case 0x1d28a8u: goto label_1d28a8;
        case 0x1d28acu: goto label_1d28ac;
        case 0x1d28b0u: goto label_1d28b0;
        case 0x1d28b4u: goto label_1d28b4;
        case 0x1d28b8u: goto label_1d28b8;
        case 0x1d28bcu: goto label_1d28bc;
        case 0x1d28c0u: goto label_1d28c0;
        case 0x1d28c4u: goto label_1d28c4;
        case 0x1d28c8u: goto label_1d28c8;
        case 0x1d28ccu: goto label_1d28cc;
        case 0x1d28d0u: goto label_1d28d0;
        case 0x1d28d4u: goto label_1d28d4;
        case 0x1d28d8u: goto label_1d28d8;
        case 0x1d28dcu: goto label_1d28dc;
        case 0x1d28e0u: goto label_1d28e0;
        case 0x1d28e4u: goto label_1d28e4;
        case 0x1d28e8u: goto label_1d28e8;
        case 0x1d28ecu: goto label_1d28ec;
        case 0x1d28f0u: goto label_1d28f0;
        case 0x1d28f4u: goto label_1d28f4;
        case 0x1d28f8u: goto label_1d28f8;
        case 0x1d28fcu: goto label_1d28fc;
        case 0x1d2900u: goto label_1d2900;
        case 0x1d2904u: goto label_1d2904;
        case 0x1d2908u: goto label_1d2908;
        case 0x1d290cu: goto label_1d290c;
        case 0x1d2910u: goto label_1d2910;
        case 0x1d2914u: goto label_1d2914;
        case 0x1d2918u: goto label_1d2918;
        case 0x1d291cu: goto label_1d291c;
        case 0x1d2920u: goto label_1d2920;
        case 0x1d2924u: goto label_1d2924;
        case 0x1d2928u: goto label_1d2928;
        case 0x1d292cu: goto label_1d292c;
        case 0x1d2930u: goto label_1d2930;
        case 0x1d2934u: goto label_1d2934;
        case 0x1d2938u: goto label_1d2938;
        case 0x1d293cu: goto label_1d293c;
        case 0x1d2940u: goto label_1d2940;
        case 0x1d2944u: goto label_1d2944;
        case 0x1d2948u: goto label_1d2948;
        case 0x1d294cu: goto label_1d294c;
        case 0x1d2950u: goto label_1d2950;
        case 0x1d2954u: goto label_1d2954;
        case 0x1d2958u: goto label_1d2958;
        case 0x1d295cu: goto label_1d295c;
        case 0x1d2960u: goto label_1d2960;
        case 0x1d2964u: goto label_1d2964;
        case 0x1d2968u: goto label_1d2968;
        case 0x1d296cu: goto label_1d296c;
        case 0x1d2970u: goto label_1d2970;
        case 0x1d2974u: goto label_1d2974;
        case 0x1d2978u: goto label_1d2978;
        case 0x1d297cu: goto label_1d297c;
        case 0x1d2980u: goto label_1d2980;
        case 0x1d2984u: goto label_1d2984;
        case 0x1d2988u: goto label_1d2988;
        case 0x1d298cu: goto label_1d298c;
        case 0x1d2990u: goto label_1d2990;
        case 0x1d2994u: goto label_1d2994;
        case 0x1d2998u: goto label_1d2998;
        case 0x1d299cu: goto label_1d299c;
        case 0x1d29a0u: goto label_1d29a0;
        case 0x1d29a4u: goto label_1d29a4;
        case 0x1d29a8u: goto label_1d29a8;
        case 0x1d29acu: goto label_1d29ac;
        case 0x1d29b0u: goto label_1d29b0;
        case 0x1d29b4u: goto label_1d29b4;
        case 0x1d29b8u: goto label_1d29b8;
        case 0x1d29bcu: goto label_1d29bc;
        case 0x1d29c0u: goto label_1d29c0;
        case 0x1d29c4u: goto label_1d29c4;
        case 0x1d29c8u: goto label_1d29c8;
        case 0x1d29ccu: goto label_1d29cc;
        case 0x1d29d0u: goto label_1d29d0;
        case 0x1d29d4u: goto label_1d29d4;
        case 0x1d29d8u: goto label_1d29d8;
        case 0x1d29dcu: goto label_1d29dc;
        case 0x1d29e0u: goto label_1d29e0;
        case 0x1d29e4u: goto label_1d29e4;
        case 0x1d29e8u: goto label_1d29e8;
        case 0x1d29ecu: goto label_1d29ec;
        case 0x1d29f0u: goto label_1d29f0;
        case 0x1d29f4u: goto label_1d29f4;
        case 0x1d29f8u: goto label_1d29f8;
        case 0x1d29fcu: goto label_1d29fc;
        case 0x1d2a00u: goto label_1d2a00;
        case 0x1d2a04u: goto label_1d2a04;
        case 0x1d2a08u: goto label_1d2a08;
        case 0x1d2a0cu: goto label_1d2a0c;
        case 0x1d2a10u: goto label_1d2a10;
        case 0x1d2a14u: goto label_1d2a14;
        case 0x1d2a18u: goto label_1d2a18;
        case 0x1d2a1cu: goto label_1d2a1c;
        case 0x1d2a20u: goto label_1d2a20;
        case 0x1d2a24u: goto label_1d2a24;
        case 0x1d2a28u: goto label_1d2a28;
        case 0x1d2a2cu: goto label_1d2a2c;
        case 0x1d2a30u: goto label_1d2a30;
        case 0x1d2a34u: goto label_1d2a34;
        case 0x1d2a38u: goto label_1d2a38;
        case 0x1d2a3cu: goto label_1d2a3c;
        case 0x1d2a40u: goto label_1d2a40;
        case 0x1d2a44u: goto label_1d2a44;
        case 0x1d2a48u: goto label_1d2a48;
        case 0x1d2a4cu: goto label_1d2a4c;
        case 0x1d2a50u: goto label_1d2a50;
        case 0x1d2a54u: goto label_1d2a54;
        case 0x1d2a58u: goto label_1d2a58;
        case 0x1d2a5cu: goto label_1d2a5c;
        case 0x1d2a60u: goto label_1d2a60;
        case 0x1d2a64u: goto label_1d2a64;
        case 0x1d2a68u: goto label_1d2a68;
        case 0x1d2a6cu: goto label_1d2a6c;
        case 0x1d2a70u: goto label_1d2a70;
        case 0x1d2a74u: goto label_1d2a74;
        case 0x1d2a78u: goto label_1d2a78;
        case 0x1d2a7cu: goto label_1d2a7c;
        case 0x1d2a80u: goto label_1d2a80;
        case 0x1d2a84u: goto label_1d2a84;
        case 0x1d2a88u: goto label_1d2a88;
        case 0x1d2a8cu: goto label_1d2a8c;
        case 0x1d2a90u: goto label_1d2a90;
        case 0x1d2a94u: goto label_1d2a94;
        case 0x1d2a98u: goto label_1d2a98;
        case 0x1d2a9cu: goto label_1d2a9c;
        case 0x1d2aa0u: goto label_1d2aa0;
        case 0x1d2aa4u: goto label_1d2aa4;
        case 0x1d2aa8u: goto label_1d2aa8;
        case 0x1d2aacu: goto label_1d2aac;
        case 0x1d2ab0u: goto label_1d2ab0;
        case 0x1d2ab4u: goto label_1d2ab4;
        case 0x1d2ab8u: goto label_1d2ab8;
        case 0x1d2abcu: goto label_1d2abc;
        case 0x1d2ac0u: goto label_1d2ac0;
        case 0x1d2ac4u: goto label_1d2ac4;
        case 0x1d2ac8u: goto label_1d2ac8;
        case 0x1d2accu: goto label_1d2acc;
        case 0x1d2ad0u: goto label_1d2ad0;
        case 0x1d2ad4u: goto label_1d2ad4;
        case 0x1d2ad8u: goto label_1d2ad8;
        case 0x1d2adcu: goto label_1d2adc;
        case 0x1d2ae0u: goto label_1d2ae0;
        case 0x1d2ae4u: goto label_1d2ae4;
        case 0x1d2ae8u: goto label_1d2ae8;
        case 0x1d2aecu: goto label_1d2aec;
        case 0x1d2af0u: goto label_1d2af0;
        case 0x1d2af4u: goto label_1d2af4;
        case 0x1d2af8u: goto label_1d2af8;
        case 0x1d2afcu: goto label_1d2afc;
        case 0x1d2b00u: goto label_1d2b00;
        case 0x1d2b04u: goto label_1d2b04;
        case 0x1d2b08u: goto label_1d2b08;
        case 0x1d2b0cu: goto label_1d2b0c;
        default: break;
    }

    ctx->pc = 0x1d2840u;

label_1d2840:
    // 0x1d2840: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d2844:
    // 0x1d2844: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1d2848:
    // 0x1d2848: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1d2848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1d284c:
    // 0x1d284c: 0x8c4686c8  lw          $a2, -0x7938($v0)
    ctx->pc = 0x1d284cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
label_1d2850:
    // 0x1d2850: 0x7fb701f0  sq          $s7, 0x1F0($sp)
    ctx->pc = 0x1d2850u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 23));
label_1d2854:
    // 0x1d2854: 0x7fbe01e0  sq          $fp, 0x1E0($sp)
    ctx->pc = 0x1d2854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 30));
label_1d2858:
    // 0x1d2858: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x1d2858u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d285c:
    // 0x1d285c: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x1d285cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_1d2860:
    // 0x1d2860: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x1d2860u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d2864:
    // 0x1d2864: 0x7fb00260  sq          $s0, 0x260($sp)
    ctx->pc = 0x1d2864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 16));
label_1d2868:
    // 0x1d2868: 0x7fb10250  sq          $s1, 0x250($sp)
    ctx->pc = 0x1d2868u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 17));
label_1d286c:
    // 0x1d286c: 0x7fb20240  sq          $s2, 0x240($sp)
    ctx->pc = 0x1d286cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 18));
label_1d2870:
    // 0x1d2870: 0x7fb30230  sq          $s3, 0x230($sp)
    ctx->pc = 0x1d2870u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 19));
label_1d2874:
    // 0x1d2874: 0x7fb40220  sq          $s4, 0x220($sp)
    ctx->pc = 0x1d2874u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 20));
label_1d2878:
    // 0x1d2878: 0x7fb50210  sq          $s5, 0x210($sp)
    ctx->pc = 0x1d2878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 21));
label_1d287c:
    // 0x1d287c: 0x7fb60200  sq          $s6, 0x200($sp)
    ctx->pc = 0x1d287cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 22));
label_1d2880:
    // 0x1d2880: 0xffbf01d0  sd          $ra, 0x1D0($sp)
    ctx->pc = 0x1d2880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 464), GPR_U64(ctx, 31));
label_1d2884:
    // 0x1d2884: 0x10c20008  beq         $a2, $v0, . + 4 + (0x8 << 2)
label_1d2888:
    if (ctx->pc == 0x1D2888u) {
        ctx->pc = 0x1D2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2884u;
        // 0x1d2888: 0xe7b40270  swc1        $f20, 0x270($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D288Cu;
        goto label_1d288c;
    }
    ctx->pc = 0x1D2884u;
    {
        const bool branch_taken_0x1d2884 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D2888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2884u;
        // 0x1d2888: 0xe7b40270  swc1        $f20, 0x270($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 624), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2884) {
            ctx->pc = 0x1D28A8u;
            goto label_1d28a8;
        }
    }
    ctx->pc = 0x1D288Cu;
label_1d288c:
    // 0x1d288c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1d2890:
    // 0x1d2890: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1d2894:
    if (ctx->pc == 0x1D2894u) {
        ctx->pc = 0x1D2894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2890u;
        // 0x1d2894: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2898u;
        goto label_1d2898;
    }
    ctx->pc = 0x1D2890u;
    {
        const bool branch_taken_0x1d2890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2890) {
            ctx->pc = 0x1D2894u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2890u;
            // 0x1d2894: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D28ACu;
            goto label_1d28ac;
        }
    }
    ctx->pc = 0x1D2898u;
label_1d2898:
    // 0x1d2898: 0xafa60000  sw          $a2, 0x0($sp)
    ctx->pc = 0x1d2898u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 6));
label_1d289c:
    // 0x1d289c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d289cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d28a0:
    // 0x1d28a0: 0xc07fd18  jal         func_1FF460
label_1d28a4:
    if (ctx->pc == 0x1D28A4u) {
        ctx->pc = 0x1D28A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28A0u;
        // 0x1d28a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28A8u;
        goto label_1d28a8;
    }
    ctx->pc = 0x1D28A0u;
    SET_GPR_U32(ctx, 31, 0x1D28A8u);
    ctx->pc = 0x1D28A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28A0u;
    // 0x1d28a4: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D28A0u, 0x1D28A8u)) {
        return;
    }
    ctx->pc = 0x1D28A8u;
label_1d28a8:
    // 0x1d28a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d28ac:
    // 0x1d28ac: 0xc07cd92  jal         func_1F3648
label_1d28b0:
    if (ctx->pc == 0x1D28B0u) {
        ctx->pc = 0x1D28B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28ACu;
        // 0x1d28b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28B4u;
        goto label_1d28b4;
    }
    ctx->pc = 0x1D28ACu;
    SET_GPR_U32(ctx, 31, 0x1D28B4u);
    ctx->pc = 0x1D28B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28ACu;
    // 0x1d28b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1D28ACu, 0x1D28B4u)) {
        return;
    }
    ctx->pc = 0x1D28B4u;
label_1d28b4:
    // 0x1d28b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d28b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d28b8:
    // 0x1d28b8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d28b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d28bc:
    // 0x1d28bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d28c0:
    // 0x1d28c0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1d28c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1d28c4:
    // 0x1d28c4: 0xc081b0c  jal         func_206C30
label_1d28c8:
    if (ctx->pc == 0x1D28C8u) {
        ctx->pc = 0x1D28C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28C4u;
        // 0x1d28c8: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28CCu;
        goto label_1d28cc;
    }
    ctx->pc = 0x1D28C4u;
    SET_GPR_U32(ctx, 31, 0x1D28CCu);
    ctx->pc = 0x1D28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28C4u;
    // 0x1d28c8: 0x3c150034  lui         $s5, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206C30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206C30u, 0x1D28C4u, 0x1D28CCu)) {
        return;
    }
    ctx->pc = 0x1D28CCu;
label_1d28cc:
    // 0x1d28cc: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x1d28ccu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_1d28d0:
    // 0x1d28d0: 0x27b20150  addiu       $s2, $sp, 0x150
    ctx->pc = 0x1d28d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1d28d4:
    // 0x1d28d4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x1d28d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1d28d8:
    // 0x1d28d8: 0xc05f97c  jal         func_17E5F0
label_1d28dc:
    if (ctx->pc == 0x1D28DCu) {
        ctx->pc = 0x1D28DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28D8u;
        // 0x1d28dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28E0u;
        goto label_1d28e0;
    }
    ctx->pc = 0x1D28D8u;
    SET_GPR_U32(ctx, 31, 0x1D28E0u);
    ctx->pc = 0x1D28DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D28D8u;
    // 0x1d28dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5F0u, 0x1D28D8u, 0x1D28E0u)) {
        return;
    }
    ctx->pc = 0x1D28E0u;
label_1d28e0:
    // 0x1d28e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d28e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d28e4:
    // 0x1d28e4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1d28e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1d28e8:
    // 0x1d28e8: 0x2a22000e  slti        $v0, $s1, 0xE
    ctx->pc = 0x1d28e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)14) ? 1 : 0);
label_1d28ec:
    // 0x1d28ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1d28f0:
    if (ctx->pc == 0x1D28F0u) {
        ctx->pc = 0x1D28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28ECu;
        // 0x1d28f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D28F4u;
        goto label_1d28f4;
    }
    ctx->pc = 0x1D28ECu;
    {
        const bool branch_taken_0x1d28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D28ECu;
        // 0x1d28f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ec) {
            ctx->pc = 0x1D28D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d28d8;
        }
    }
    ctx->pc = 0x1D28F4u;
label_1d28f4:
    // 0x1d28f4: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1d28f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d28f8:
    // 0x1d28f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d28f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d28fc:
    // 0x1d28fc: 0x0  nop
    ctx->pc = 0x1d28fcu;
    // NOP
label_1d2900:
    // 0x1d2900: 0xc05fa08  jal         func_17E820
label_1d2904:
    if (ctx->pc == 0x1D2904u) {
        ctx->pc = 0x1D2904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2900u;
        // 0x1d2904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2908u;
        goto label_1d2908;
    }
    ctx->pc = 0x1D2900u;
    SET_GPR_U32(ctx, 31, 0x1D2908u);
    ctx->pc = 0x1D2904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2900u;
    // 0x1d2904: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E820u, 0x1D2900u, 0x1D2908u)) {
        return;
    }
    ctx->pc = 0x1D2908u;
label_1d2908:
    // 0x1d2908: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d2908u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d290c:
    // 0x1d290c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d290cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d2910:
    // 0x1d2910: 0x2a020016  slti        $v0, $s0, 0x16
    ctx->pc = 0x1d2910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)22) ? 1 : 0);
label_1d2914:
    // 0x1d2914: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1d2918:
    if (ctx->pc == 0x1D2918u) {
        ctx->pc = 0x1D2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2914u;
        // 0x1d2918: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D291Cu;
        goto label_1d291c;
    }
    ctx->pc = 0x1D2914u;
    {
        const bool branch_taken_0x1d2914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2914u;
        // 0x1d2918: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2914) {
            ctx->pc = 0x1D2900u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2900;
        }
    }
    ctx->pc = 0x1D291Cu;
label_1d291c:
    // 0x1d291c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1d291cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2920:
    // 0x1d2920: 0xc05f90a  jal         func_17E428
label_1d2924:
    if (ctx->pc == 0x1D2924u) {
        ctx->pc = 0x1D2924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2920u;
        // 0x1d2924: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2928u;
        goto label_1d2928;
    }
    ctx->pc = 0x1D2920u;
    SET_GPR_U32(ctx, 31, 0x1D2928u);
    ctx->pc = 0x1D2924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2920u;
    // 0x1d2924: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D2920u, 0x1D2928u)) {
        return;
    }
    ctx->pc = 0x1D2928u;
label_1d2928:
    // 0x1d2928: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d2928u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d292c:
    // 0x1d292c: 0x44140800  mfc1        $s4, $f1
    ctx->pc = 0x1d292cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 20, bits); }
label_1d2930:
    // 0x1d2930: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x1d2930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1d2934:
    // 0x1d2934: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x1d2934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d2938:
    // 0x1d2938: 0xc07d248  jal         func_1F4920
label_1d293c:
    if (ctx->pc == 0x1D293Cu) {
        ctx->pc = 0x1D293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2938u;
        // 0x1d293c: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2940u;
        goto label_1d2940;
    }
    ctx->pc = 0x1D2938u;
    SET_GPR_U32(ctx, 31, 0x1D2940u);
    ctx->pc = 0x1D293Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2938u;
    // 0x1d293c: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4920u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4920u, 0x1D2938u, 0x1D2940u)) {
        return;
    }
    ctx->pc = 0x1D2940u;
label_1d2940:
    // 0x1d2940: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x1d2940u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1d2944:
    // 0x1d2944: 0x0  nop
    ctx->pc = 0x1d2944u;
    // NOP
label_1d2948:
    // 0x1d2948: 0xc05f976  jal         func_17E5D8
label_1d294c:
    if (ctx->pc == 0x1D294Cu) {
        ctx->pc = 0x1D294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2948u;
        // 0x1d294c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2950u;
        goto label_1d2950;
    }
    ctx->pc = 0x1D2948u;
    SET_GPR_U32(ctx, 31, 0x1D2950u);
    ctx->pc = 0x1D294Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2948u;
    // 0x1d294c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E5D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E5D8u, 0x1D2948u, 0x1D2950u)) {
        return;
    }
    ctx->pc = 0x1D2950u;
label_1d2950:
    // 0x1d2950: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d2950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2954:
    // 0x1d2954: 0xc07d234  jal         func_1F48D0
label_1d2958:
    if (ctx->pc == 0x1D2958u) {
        ctx->pc = 0x1D2958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2954u;
        // 0x1d2958: 0x8eb09b54  lw          $s0, -0x64AC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941524)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D295Cu;
        goto label_1d295c;
    }
    ctx->pc = 0x1D2954u;
    SET_GPR_U32(ctx, 31, 0x1D295Cu);
    ctx->pc = 0x1D2958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2954u;
    // 0x1d2958: 0x8eb09b54  lw          $s0, -0x64AC($s5) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294941524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2954u, 0x1D295Cu)) {
        return;
    }
    ctx->pc = 0x1D295Cu;
label_1d295c:
    // 0x1d295c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d2960:
    if (ctx->pc == 0x1D2960u) {
        ctx->pc = 0x1D2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D295Cu;
        // 0x1d2960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2964u;
        goto label_1d2964;
    }
    ctx->pc = 0x1D295Cu;
    {
        const bool branch_taken_0x1d295c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D295Cu;
        // 0x1d2960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d295c) {
            ctx->pc = 0x1D2984u;
            goto label_1d2984;
        }
    }
    ctx->pc = 0x1D2964u;
label_1d2964:
    // 0x1d2964: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2968:
    // 0x1d2968: 0xc07d3d6  jal         func_1F4F58
label_1d296c:
    if (ctx->pc == 0x1D296Cu) {
        ctx->pc = 0x1D296Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2968u;
        // 0x1d296c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2970u;
        goto label_1d2970;
    }
    ctx->pc = 0x1D2968u;
    SET_GPR_U32(ctx, 31, 0x1D2970u);
    ctx->pc = 0x1D296Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2968u;
    // 0x1d296c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2968u, 0x1D2970u)) {
        return;
    }
    ctx->pc = 0x1D2970u;
label_1d2970:
    // 0x1d2970: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2974:
    if (ctx->pc == 0x1D2974u) {
        ctx->pc = 0x1D2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2970u;
        // 0x1d2974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2978u;
        goto label_1d2978;
    }
    ctx->pc = 0x1D2970u;
    {
        const bool branch_taken_0x1d2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2970u;
        // 0x1d2974: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2970) {
            ctx->pc = 0x1D2984u;
            goto label_1d2984;
        }
    }
    ctx->pc = 0x1D2978u;
label_1d2978:
    // 0x1d2978: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d2978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d297c:
    // 0x1d297c: 0xc07d2ee  jal         func_1F4BB8
label_1d2980:
    if (ctx->pc == 0x1D2980u) {
        ctx->pc = 0x1D2980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D297Cu;
        // 0x1d2980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2984u;
        goto label_1d2984;
    }
    ctx->pc = 0x1D297Cu;
    SET_GPR_U32(ctx, 31, 0x1D2984u);
    ctx->pc = 0x1D2980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D297Cu;
    // 0x1d2980: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1D297Cu, 0x1D2984u)) {
        return;
    }
    ctx->pc = 0x1D2984u;
label_1d2984:
    // 0x1d2984: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d2984u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d2988:
    // 0x1d2988: 0x2a62000e  slti        $v0, $s3, 0xE
    ctx->pc = 0x1d2988u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)14) ? 1 : 0);
label_1d298c:
    // 0x1d298c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1d2990:
    if (ctx->pc == 0x1D2990u) {
        ctx->pc = 0x1D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D298Cu;
        // 0x1d2990: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2994u;
        goto label_1d2994;
    }
    ctx->pc = 0x1D298Cu;
    {
        const bool branch_taken_0x1d298c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D298Cu;
        // 0x1d2990: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d298c) {
            ctx->pc = 0x1D2948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2948;
        }
    }
    ctx->pc = 0x1D2994u;
label_1d2994:
    // 0x1d2994: 0x4494a000  mtc1        $s4, $f20
    ctx->pc = 0x1d2994u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d2998:
    // 0x1d2998: 0x0  nop
    ctx->pc = 0x1d2998u;
    // NOP
label_1d299c:
    // 0x1d299c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d299cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d29a0:
    // 0x1d29a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1d29a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d29a4:
    // 0x1d29a4: 0x27b10150  addiu       $s1, $sp, 0x150
    ctx->pc = 0x1d29a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1d29a8:
    // 0x1d29a8: 0xc05fa02  jal         func_17E808
label_1d29ac:
    if (ctx->pc == 0x1D29ACu) {
        ctx->pc = 0x1D29ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29A8u;
        // 0x1d29ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29B0u;
        goto label_1d29b0;
    }
    ctx->pc = 0x1D29A8u;
    SET_GPR_U32(ctx, 31, 0x1D29B0u);
    ctx->pc = 0x1D29ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29A8u;
    // 0x1d29ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E808u, 0x1D29A8u, 0x1D29B0u)) {
        return;
    }
    ctx->pc = 0x1D29B0u;
label_1d29b0:
    // 0x1d29b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d29b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d29b4:
    // 0x1d29b4: 0xc07d234  jal         func_1F48D0
label_1d29b8:
    if (ctx->pc == 0x1D29B8u) {
        ctx->pc = 0x1D29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29B4u;
        // 0x1d29b8: 0x8ed09b58  lw          $s0, -0x64A8($s6) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29BCu;
        goto label_1d29bc;
    }
    ctx->pc = 0x1D29B4u;
    SET_GPR_U32(ctx, 31, 0x1D29BCu);
    ctx->pc = 0x1D29B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29B4u;
    // 0x1d29b8: 0x8ed09b58  lw          $s0, -0x64A8($s6) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294941528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D29B4u, 0x1D29BCu)) {
        return;
    }
    ctx->pc = 0x1D29BCu;
label_1d29bc:
    // 0x1d29bc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d29c0:
    if (ctx->pc == 0x1D29C0u) {
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29C4u;
        goto label_1d29c4;
    }
    ctx->pc = 0x1D29BCu;
    {
        const bool branch_taken_0x1d29bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29BCu;
        // 0x1d29c0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29bc) {
            ctx->pc = 0x1D29E4u;
            goto label_1d29e4;
        }
    }
    ctx->pc = 0x1D29C4u;
label_1d29c4:
    // 0x1d29c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d29c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d29c8:
    // 0x1d29c8: 0xc07d3d6  jal         func_1F4F58
label_1d29cc:
    if (ctx->pc == 0x1D29CCu) {
        ctx->pc = 0x1D29CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29C8u;
        // 0x1d29cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29D0u;
        goto label_1d29d0;
    }
    ctx->pc = 0x1D29C8u;
    SET_GPR_U32(ctx, 31, 0x1D29D0u);
    ctx->pc = 0x1D29CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29C8u;
    // 0x1d29cc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D29C8u, 0x1D29D0u)) {
        return;
    }
    ctx->pc = 0x1D29D0u;
label_1d29d0:
    // 0x1d29d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d29d4:
    if (ctx->pc == 0x1D29D4u) {
        ctx->pc = 0x1D29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29D0u;
        // 0x1d29d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29D8u;
        goto label_1d29d8;
    }
    ctx->pc = 0x1D29D0u;
    {
        const bool branch_taken_0x1d29d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D29D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29D0u;
        // 0x1d29d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29d0) {
            ctx->pc = 0x1D29E4u;
            goto label_1d29e4;
        }
    }
    ctx->pc = 0x1D29D8u;
label_1d29d8:
    // 0x1d29d8: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x1d29d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1d29dc:
    // 0x1d29dc: 0xc07d2ee  jal         func_1F4BB8
label_1d29e0:
    if (ctx->pc == 0x1D29E0u) {
        ctx->pc = 0x1D29E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29DCu;
        // 0x1d29e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29E4u;
        goto label_1d29e4;
    }
    ctx->pc = 0x1D29DCu;
    SET_GPR_U32(ctx, 31, 0x1D29E4u);
    ctx->pc = 0x1D29E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D29DCu;
    // 0x1d29e0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1D29DCu, 0x1D29E4u)) {
        return;
    }
    ctx->pc = 0x1D29E4u;
label_1d29e4:
    // 0x1d29e4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1d29e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1d29e8:
    // 0x1d29e8: 0x2a620016  slti        $v0, $s3, 0x16
    ctx->pc = 0x1d29e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)22) ? 1 : 0);
label_1d29ec:
    // 0x1d29ec: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1d29f0:
    if (ctx->pc == 0x1D29F0u) {
        ctx->pc = 0x1D29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29ECu;
        // 0x1d29f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D29F4u;
        goto label_1d29f4;
    }
    ctx->pc = 0x1D29ECu;
    {
        const bool branch_taken_0x1d29ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D29F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D29ECu;
        // 0x1d29f0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d29ec) {
            ctx->pc = 0x1D29A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d29a8;
        }
    }
    ctx->pc = 0x1D29F4u;
label_1d29f4:
    // 0x1d29f4: 0xc07d234  jal         func_1F48D0
label_1d29f8:
    if (ctx->pc == 0x1D29F8u) {
        ctx->pc = 0x1D29FCu;
        goto label_1d29fc;
    }
    ctx->pc = 0x1D29F4u;
    SET_GPR_U32(ctx, 31, 0x1D29FCu);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D29F4u, 0x1D29FCu)) {
        return;
    }
    ctx->pc = 0x1D29FCu;
label_1d29fc:
    // 0x1d29fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d29fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a00:
    // 0x1d2a00: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x1d2a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
label_1d2a04:
    // 0x1d2a04: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1d2a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1d2a08:
    // 0x1d2a08: 0x24700dc0  addiu       $s0, $v1, 0xDC0
    ctx->pc = 0x1d2a08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 3520));
label_1d2a0c:
    // 0x1d2a0c: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_1d2a10:
    if (ctx->pc == 0x1D2A10u) {
        ctx->pc = 0x1D2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A0Cu;
        // 0x1d2a10: 0x24510dc8  addiu       $s1, $v0, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A14u;
        goto label_1d2a14;
    }
    ctx->pc = 0x1D2A0Cu;
    {
        const bool branch_taken_0x1d2a0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A0Cu;
        // 0x1d2a10: 0x24510dc8  addiu       $s1, $v0, 0xDC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a0c) {
            ctx->pc = 0x1D2A34u;
            goto label_1d2a34;
        }
    }
    ctx->pc = 0x1D2A14u;
label_1d2a14:
    // 0x1d2a14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a18:
    // 0x1d2a18: 0xc07d3d6  jal         func_1F4F58
label_1d2a1c:
    if (ctx->pc == 0x1D2A1Cu) {
        ctx->pc = 0x1D2A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A18u;
        // 0x1d2a1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A20u;
        goto label_1d2a20;
    }
    ctx->pc = 0x1D2A18u;
    SET_GPR_U32(ctx, 31, 0x1D2A20u);
    ctx->pc = 0x1D2A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A18u;
    // 0x1d2a1c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2A18u, 0x1D2A20u)) {
        return;
    }
    ctx->pc = 0x1D2A20u;
label_1d2a20:
    // 0x1d2a20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2a24:
    if (ctx->pc == 0x1D2A24u) {
        ctx->pc = 0x1D2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A20u;
        // 0x1d2a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A28u;
        goto label_1d2a28;
    }
    ctx->pc = 0x1D2A20u;
    {
        const bool branch_taken_0x1d2a20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A20u;
        // 0x1d2a24: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a20) {
            ctx->pc = 0x1D2A34u;
            goto label_1d2a34;
        }
    }
    ctx->pc = 0x1D2A28u;
label_1d2a28:
    // 0x1d2a28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a2c:
    // 0x1d2a2c: 0xc07d2ee  jal         func_1F4BB8
label_1d2a30:
    if (ctx->pc == 0x1D2A30u) {
        ctx->pc = 0x1D2A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A2Cu;
        // 0x1d2a30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A34u;
        goto label_1d2a34;
    }
    ctx->pc = 0x1D2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A34u);
    ctx->pc = 0x1D2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A2Cu;
    // 0x1d2a30: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1D2A2Cu, 0x1D2A34u)) {
        return;
    }
    ctx->pc = 0x1D2A34u;
label_1d2a34:
    // 0x1d2a34: 0xc05f916  jal         func_17E458
label_1d2a38:
    if (ctx->pc == 0x1D2A38u) {
        ctx->pc = 0x1D2A3Cu;
        goto label_1d2a3c;
    }
    ctx->pc = 0x1D2A34u;
    SET_GPR_U32(ctx, 31, 0x1D2A3Cu);
    ctx->pc = 0x17E458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E458u, 0x1D2A34u, 0x1D2A3Cu)) {
        return;
    }
    ctx->pc = 0x1D2A3Cu;
label_1d2a3c:
    // 0x1d2a3c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1d2a3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1d2a40:
    // 0x1d2a40: 0xc05f910  jal         func_17E440
label_1d2a44:
    if (ctx->pc == 0x1D2A44u) {
        ctx->pc = 0x1D2A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A40u;
        // 0x1d2a44: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A48u;
        goto label_1d2a48;
    }
    ctx->pc = 0x1D2A40u;
    SET_GPR_U32(ctx, 31, 0x1D2A48u);
    ctx->pc = 0x1D2A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A40u;
    // 0x1d2a44: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D2A40u, 0x1D2A48u)) {
        return;
    }
    ctx->pc = 0x1D2A48u;
label_1d2a48:
    // 0x1d2a48: 0xc05f94c  jal         func_17E530
label_1d2a4c:
    if (ctx->pc == 0x1D2A4Cu) {
        ctx->pc = 0x1D2A50u;
        goto label_1d2a50;
    }
    ctx->pc = 0x1D2A48u;
    SET_GPR_U32(ctx, 31, 0x1D2A50u);
    ctx->pc = 0x17E530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E530u, 0x1D2A48u, 0x1D2A50u)) {
        return;
    }
    ctx->pc = 0x1D2A50u;
label_1d2a50:
    // 0x1d2a50: 0xc05fc3c  jal         func_17F0F0
label_1d2a54:
    if (ctx->pc == 0x1D2A54u) {
        ctx->pc = 0x1D2A58u;
        goto label_1d2a58;
    }
    ctx->pc = 0x1D2A50u;
    SET_GPR_U32(ctx, 31, 0x1D2A58u);
    ctx->pc = 0x17F0F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17F0F0u, 0x1D2A50u, 0x1D2A58u)) {
        return;
    }
    ctx->pc = 0x1D2A58u;
label_1d2a58:
    // 0x1d2a58: 0x1a80001c  blez        $s4, . + 4 + (0x1C << 2)
label_1d2a5c:
    if (ctx->pc == 0x1D2A5Cu) {
        ctx->pc = 0x1D2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A58u;
        // 0x1d2a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A60u;
        goto label_1d2a60;
    }
    ctx->pc = 0x1D2A58u;
    {
        const bool branch_taken_0x1d2a58 = (GPR_S64(ctx, 20) <= 0);
        ctx->pc = 0x1D2A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A58u;
        // 0x1d2a5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a58) {
            ctx->pc = 0x1D2ACCu;
            goto label_1d2acc;
        }
    }
    ctx->pc = 0x1D2A60u;
label_1d2a60:
    // 0x1d2a60: 0x3c160073  lui         $s6, 0x73
    ctx->pc = 0x1d2a60u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)115 << 16));
label_1d2a64:
    // 0x1d2a64: 0x27b201b0  addiu       $s2, $sp, 0x1B0
    ctx->pc = 0x1d2a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1d2a68:
    // 0x1d2a68: 0x3c15006a  lui         $s5, 0x6A
    ctx->pc = 0x1d2a68u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)106 << 16));
label_1d2a6c:
    // 0x1d2a6c: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x1d2a6cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_1d2a70:
    // 0x1d2a70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2a70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1d2a74:
    // 0x1d2a74: 0x0  nop
    ctx->pc = 0x1d2a74u;
    // NOP
label_1d2a78:
    // 0x1d2a78: 0x8ec2108c  lw          $v0, 0x108C($s6)
    ctx->pc = 0x1d2a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4236)));
label_1d2a7c:
    // 0x1d2a7c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1d2a7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a80:
    // 0x1d2a80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2a80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2a84:
    // 0x1d2a84: 0x40f809  jalr        $v0
label_1d2a88:
    if (ctx->pc == 0x1D2A88u) {
        ctx->pc = 0x1D2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A84u;
        // 0x1d2a88: 0x26a50de0  addiu       $a1, $s5, 0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A8Cu;
        goto label_1d2a8c;
    }
    ctx->pc = 0x1D2A84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2A8Cu);
        ctx->pc = 0x1D2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A84u;
        // 0x1d2a88: 0x26a50de0  addiu       $a1, $s5, 0xDE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 3552));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2A84u, 0x1D2A8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2A8Cu;
label_1d2a8c:
    // 0x1d2a8c: 0xc07d234  jal         func_1F48D0
label_1d2a90:
    if (ctx->pc == 0x1D2A90u) {
        ctx->pc = 0x1D2A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A8Cu;
        // 0x1d2a90: 0x8e709b50  lw          $s0, -0x64B0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A94u;
        goto label_1d2a94;
    }
    ctx->pc = 0x1D2A8Cu;
    SET_GPR_U32(ctx, 31, 0x1D2A94u);
    ctx->pc = 0x1D2A90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2A8Cu;
    // 0x1d2a90: 0x8e709b50  lw          $s0, -0x64B0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941520)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2A8Cu, 0x1D2A94u)) {
        return;
    }
    ctx->pc = 0x1D2A94u;
label_1d2a94:
    // 0x1d2a94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1d2a98:
    if (ctx->pc == 0x1D2A98u) {
        ctx->pc = 0x1D2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A94u;
        // 0x1d2a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2A9Cu;
        goto label_1d2a9c;
    }
    ctx->pc = 0x1D2A94u;
    {
        const bool branch_taken_0x1d2a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2A94u;
        // 0x1d2a98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2a94) {
            ctx->pc = 0x1D2ABCu;
            goto label_1d2abc;
        }
    }
    ctx->pc = 0x1D2A9Cu;
label_1d2a9c:
    // 0x1d2a9c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1d2a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d2aa0:
    // 0x1d2aa0: 0xc07d3d6  jal         func_1F4F58
label_1d2aa4:
    if (ctx->pc == 0x1D2AA4u) {
        ctx->pc = 0x1D2AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AA0u;
        // 0x1d2aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2AA8u;
        goto label_1d2aa8;
    }
    ctx->pc = 0x1D2AA0u;
    SET_GPR_U32(ctx, 31, 0x1D2AA8u);
    ctx->pc = 0x1D2AA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AA0u;
    // 0x1d2aa4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1D2AA0u, 0x1D2AA8u)) {
        return;
    }
    ctx->pc = 0x1D2AA8u;
label_1d2aa8:
    // 0x1d2aa8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2aac:
    if (ctx->pc == 0x1D2AACu) {
        ctx->pc = 0x1D2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AA8u;
        // 0x1d2aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2AB0u;
        goto label_1d2ab0;
    }
    ctx->pc = 0x1D2AA8u;
    {
        const bool branch_taken_0x1d2aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AA8u;
        // 0x1d2aac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2aa8) {
            ctx->pc = 0x1D2ABCu;
            goto label_1d2abc;
        }
    }
    ctx->pc = 0x1D2AB0u;
label_1d2ab0:
    // 0x1d2ab0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1d2ab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ab4:
    // 0x1d2ab4: 0xc07d2ee  jal         func_1F4BB8
label_1d2ab8:
    if (ctx->pc == 0x1D2AB8u) {
        ctx->pc = 0x1D2AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AB4u;
        // 0x1d2ab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ABCu;
        goto label_1d2abc;
    }
    ctx->pc = 0x1D2AB4u;
    SET_GPR_U32(ctx, 31, 0x1D2ABCu);
    ctx->pc = 0x1D2AB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AB4u;
    // 0x1d2ab8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BB8u, 0x1D2AB4u, 0x1D2ABCu)) {
        return;
    }
    ctx->pc = 0x1D2ABCu;
label_1d2abc:
    // 0x1d2abc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1d2abcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ac0:
    // 0x1d2ac0: 0xd4102a  slt         $v0, $a2, $s4
    ctx->pc = 0x1d2ac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1d2ac4:
    // 0x1d2ac4: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1d2ac8:
    if (ctx->pc == 0x1D2AC8u) {
        ctx->pc = 0x1D2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AC4u;
        // 0x1d2ac8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ACCu;
        goto label_1d2acc;
    }
    ctx->pc = 0x1D2AC4u;
    {
        const bool branch_taken_0x1d2ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AC4u;
        // 0x1d2ac8: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2ac4) {
            ctx->pc = 0x1D2A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2a78;
        }
    }
    ctx->pc = 0x1D2ACCu;
label_1d2acc:
    // 0x1d2acc: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d2accu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ad0:
    // 0x1d2ad0: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1d2ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1d2ad4:
    // 0x1d2ad4: 0xc074980  jal         func_1D2600
label_1d2ad8:
    if (ctx->pc == 0x1D2AD8u) {
        ctx->pc = 0x1D2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2AD4u;
        // 0x1d2ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2ADCu;
        goto label_1d2adc;
    }
    ctx->pc = 0x1D2AD4u;
    SET_GPR_U32(ctx, 31, 0x1D2ADCu);
    ctx->pc = 0x1D2AD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2AD4u;
    // 0x1d2ad8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D2600u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D2600u, 0x1D2AD4u, 0x1D2ADCu)) {
        return;
    }
    ctx->pc = 0x1D2ADCu;
label_1d2adc:
    // 0x1d2adc: 0x7bb00260  lq          $s0, 0x260($sp)
    ctx->pc = 0x1d2adcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 608)));
label_1d2ae0:
    // 0x1d2ae0: 0x7bb10250  lq          $s1, 0x250($sp)
    ctx->pc = 0x1d2ae0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_1d2ae4:
    // 0x1d2ae4: 0x7bb20240  lq          $s2, 0x240($sp)
    ctx->pc = 0x1d2ae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_1d2ae8:
    // 0x1d2ae8: 0x7bb30230  lq          $s3, 0x230($sp)
    ctx->pc = 0x1d2ae8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 560)));
label_1d2aec:
    // 0x1d2aec: 0x7bb40220  lq          $s4, 0x220($sp)
    ctx->pc = 0x1d2aecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 544)));
label_1d2af0:
    // 0x1d2af0: 0x7bb50210  lq          $s5, 0x210($sp)
    ctx->pc = 0x1d2af0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1d2af4:
    // 0x1d2af4: 0x7bb60200  lq          $s6, 0x200($sp)
    ctx->pc = 0x1d2af4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1d2af8:
    // 0x1d2af8: 0x7bb701f0  lq          $s7, 0x1F0($sp)
    ctx->pc = 0x1d2af8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1d2afc:
    // 0x1d2afc: 0x7bbe01e0  lq          $fp, 0x1E0($sp)
    ctx->pc = 0x1d2afcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1d2b00:
    // 0x1d2b00: 0xdfbf01d0  ld          $ra, 0x1D0($sp)
    ctx->pc = 0x1d2b00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 464)));
label_1d2b04:
    // 0x1d2b04: 0xc7b40270  lwc1        $f20, 0x270($sp)
    ctx->pc = 0x1d2b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 624)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2b08:
    // 0x1d2b08: 0x3e00008  jr          $ra
label_1d2b0c:
    if (ctx->pc == 0x1D2B0Cu) {
        ctx->pc = 0x1D2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B08u;
        // 0x1d2b0c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2B10u;
        goto label_fallthrough_0x1d2b08;
    }
    ctx->pc = 0x1D2B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B08u;
        // 0x1d2b0c: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d2b08:
    ctx->pc = 0x1D2B10u;
}
