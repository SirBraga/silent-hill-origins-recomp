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

// Function: sub_001D2600
// Address: 0x1d2600 - 0x1d2840
void sub_001D2600_0x1d2600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2600_0x1d2600");
#endif

    switch (ctx->pc) {
        case 0x1d2600u: goto label_1d2600;
        case 0x1d2604u: goto label_1d2604;
        case 0x1d2608u: goto label_1d2608;
        case 0x1d260cu: goto label_1d260c;
        case 0x1d2610u: goto label_1d2610;
        case 0x1d2614u: goto label_1d2614;
        case 0x1d2618u: goto label_1d2618;
        case 0x1d261cu: goto label_1d261c;
        case 0x1d2620u: goto label_1d2620;
        case 0x1d2624u: goto label_1d2624;
        case 0x1d2628u: goto label_1d2628;
        case 0x1d262cu: goto label_1d262c;
        case 0x1d2630u: goto label_1d2630;
        case 0x1d2634u: goto label_1d2634;
        case 0x1d2638u: goto label_1d2638;
        case 0x1d263cu: goto label_1d263c;
        case 0x1d2640u: goto label_1d2640;
        case 0x1d2644u: goto label_1d2644;
        case 0x1d2648u: goto label_1d2648;
        case 0x1d264cu: goto label_1d264c;
        case 0x1d2650u: goto label_1d2650;
        case 0x1d2654u: goto label_1d2654;
        case 0x1d2658u: goto label_1d2658;
        case 0x1d265cu: goto label_1d265c;
        case 0x1d2660u: goto label_1d2660;
        case 0x1d2664u: goto label_1d2664;
        case 0x1d2668u: goto label_1d2668;
        case 0x1d266cu: goto label_1d266c;
        case 0x1d2670u: goto label_1d2670;
        case 0x1d2674u: goto label_1d2674;
        case 0x1d2678u: goto label_1d2678;
        case 0x1d267cu: goto label_1d267c;
        case 0x1d2680u: goto label_1d2680;
        case 0x1d2684u: goto label_1d2684;
        case 0x1d2688u: goto label_1d2688;
        case 0x1d268cu: goto label_1d268c;
        case 0x1d2690u: goto label_1d2690;
        case 0x1d2694u: goto label_1d2694;
        case 0x1d2698u: goto label_1d2698;
        case 0x1d269cu: goto label_1d269c;
        case 0x1d26a0u: goto label_1d26a0;
        case 0x1d26a4u: goto label_1d26a4;
        case 0x1d26a8u: goto label_1d26a8;
        case 0x1d26acu: goto label_1d26ac;
        case 0x1d26b0u: goto label_1d26b0;
        case 0x1d26b4u: goto label_1d26b4;
        case 0x1d26b8u: goto label_1d26b8;
        case 0x1d26bcu: goto label_1d26bc;
        case 0x1d26c0u: goto label_1d26c0;
        case 0x1d26c4u: goto label_1d26c4;
        case 0x1d26c8u: goto label_1d26c8;
        case 0x1d26ccu: goto label_1d26cc;
        case 0x1d26d0u: goto label_1d26d0;
        case 0x1d26d4u: goto label_1d26d4;
        case 0x1d26d8u: goto label_1d26d8;
        case 0x1d26dcu: goto label_1d26dc;
        case 0x1d26e0u: goto label_1d26e0;
        case 0x1d26e4u: goto label_1d26e4;
        case 0x1d26e8u: goto label_1d26e8;
        case 0x1d26ecu: goto label_1d26ec;
        case 0x1d26f0u: goto label_1d26f0;
        case 0x1d26f4u: goto label_1d26f4;
        case 0x1d26f8u: goto label_1d26f8;
        case 0x1d26fcu: goto label_1d26fc;
        case 0x1d2700u: goto label_1d2700;
        case 0x1d2704u: goto label_1d2704;
        case 0x1d2708u: goto label_1d2708;
        case 0x1d270cu: goto label_1d270c;
        case 0x1d2710u: goto label_1d2710;
        case 0x1d2714u: goto label_1d2714;
        case 0x1d2718u: goto label_1d2718;
        case 0x1d271cu: goto label_1d271c;
        case 0x1d2720u: goto label_1d2720;
        case 0x1d2724u: goto label_1d2724;
        case 0x1d2728u: goto label_1d2728;
        case 0x1d272cu: goto label_1d272c;
        case 0x1d2730u: goto label_1d2730;
        case 0x1d2734u: goto label_1d2734;
        case 0x1d2738u: goto label_1d2738;
        case 0x1d273cu: goto label_1d273c;
        case 0x1d2740u: goto label_1d2740;
        case 0x1d2744u: goto label_1d2744;
        case 0x1d2748u: goto label_1d2748;
        case 0x1d274cu: goto label_1d274c;
        case 0x1d2750u: goto label_1d2750;
        case 0x1d2754u: goto label_1d2754;
        case 0x1d2758u: goto label_1d2758;
        case 0x1d275cu: goto label_1d275c;
        case 0x1d2760u: goto label_1d2760;
        case 0x1d2764u: goto label_1d2764;
        case 0x1d2768u: goto label_1d2768;
        case 0x1d276cu: goto label_1d276c;
        case 0x1d2770u: goto label_1d2770;
        case 0x1d2774u: goto label_1d2774;
        case 0x1d2778u: goto label_1d2778;
        case 0x1d277cu: goto label_1d277c;
        case 0x1d2780u: goto label_1d2780;
        case 0x1d2784u: goto label_1d2784;
        case 0x1d2788u: goto label_1d2788;
        case 0x1d278cu: goto label_1d278c;
        case 0x1d2790u: goto label_1d2790;
        case 0x1d2794u: goto label_1d2794;
        case 0x1d2798u: goto label_1d2798;
        case 0x1d279cu: goto label_1d279c;
        case 0x1d27a0u: goto label_1d27a0;
        case 0x1d27a4u: goto label_1d27a4;
        case 0x1d27a8u: goto label_1d27a8;
        case 0x1d27acu: goto label_1d27ac;
        case 0x1d27b0u: goto label_1d27b0;
        case 0x1d27b4u: goto label_1d27b4;
        case 0x1d27b8u: goto label_1d27b8;
        case 0x1d27bcu: goto label_1d27bc;
        case 0x1d27c0u: goto label_1d27c0;
        case 0x1d27c4u: goto label_1d27c4;
        case 0x1d27c8u: goto label_1d27c8;
        case 0x1d27ccu: goto label_1d27cc;
        case 0x1d27d0u: goto label_1d27d0;
        case 0x1d27d4u: goto label_1d27d4;
        case 0x1d27d8u: goto label_1d27d8;
        case 0x1d27dcu: goto label_1d27dc;
        case 0x1d27e0u: goto label_1d27e0;
        case 0x1d27e4u: goto label_1d27e4;
        case 0x1d27e8u: goto label_1d27e8;
        case 0x1d27ecu: goto label_1d27ec;
        case 0x1d27f0u: goto label_1d27f0;
        case 0x1d27f4u: goto label_1d27f4;
        case 0x1d27f8u: goto label_1d27f8;
        case 0x1d27fcu: goto label_1d27fc;
        case 0x1d2800u: goto label_1d2800;
        case 0x1d2804u: goto label_1d2804;
        case 0x1d2808u: goto label_1d2808;
        case 0x1d280cu: goto label_1d280c;
        case 0x1d2810u: goto label_1d2810;
        case 0x1d2814u: goto label_1d2814;
        case 0x1d2818u: goto label_1d2818;
        case 0x1d281cu: goto label_1d281c;
        case 0x1d2820u: goto label_1d2820;
        case 0x1d2824u: goto label_1d2824;
        case 0x1d2828u: goto label_1d2828;
        case 0x1d282cu: goto label_1d282c;
        case 0x1d2830u: goto label_1d2830;
        case 0x1d2834u: goto label_1d2834;
        case 0x1d2838u: goto label_1d2838;
        case 0x1d283cu: goto label_1d283c;
        default: break;
    }

    ctx->pc = 0x1d2600u;

label_1d2600:
    // 0x1d2600: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x1d2600u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_1d2604:
    // 0x1d2604: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1d2604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1d2608:
    // 0x1d2608: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d260c:
    // 0x1d260c: 0x8c674428  lw          $a3, 0x4428($v1)
    ctx->pc = 0x1d260cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17448)));
label_1d2610:
    // 0x1d2610: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1d2610u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_1d2614:
    // 0x1d2614: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1d2614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_1d2618:
    // 0x1d2618: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1d2618u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d261c:
    // 0x1d261c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1d261cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_1d2620:
    // 0x1d2620: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1d2620u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d2624:
    // 0x1d2624: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1d2624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_1d2628:
    // 0x1d2628: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1d2628u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d262c:
    // 0x1d262c: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x1d262cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6768)));
label_1d2630:
    // 0x1d2630: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1d2630u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2634:
    // 0x1d2634: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1d2634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_1d2638:
    // 0x1d2638: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1d2638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_1d263c:
    // 0x1d263c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1d263cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_1d2640:
    // 0x1d2640: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1d2640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1d2644:
    // 0x1d2644: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d2644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1d2648:
    // 0x1d2648: 0x10e30007  beq         $a3, $v1, . + 4 + (0x7 << 2)
label_1d264c:
    if (ctx->pc == 0x1D264Cu) {
        ctx->pc = 0x1D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2648u;
        // 0x1d264c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2650u;
        goto label_1d2650;
    }
    ctx->pc = 0x1D2648u;
    {
        const bool branch_taken_0x1d2648 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D264Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2648u;
        // 0x1d264c: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2648) {
            ctx->pc = 0x1D2668u;
            goto label_1d2668;
        }
    }
    ctx->pc = 0x1D2650u;
label_1d2650:
    // 0x1d2650: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1d2650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1d2654:
    // 0x1d2654: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1d2658:
    if (ctx->pc == 0x1D2658u) {
        ctx->pc = 0x1D2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2654u;
        // 0x1d2658: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D265Cu;
        goto label_1d265c;
    }
    ctx->pc = 0x1D2654u;
    {
        const bool branch_taken_0x1d2654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2654u;
        // 0x1d2658: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2654) {
            ctx->pc = 0x1D2668u;
            goto label_1d2668;
        }
    }
    ctx->pc = 0x1D265Cu;
label_1d265c:
    // 0x1d265c: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x1d265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_1d2660:
    // 0x1d2660: 0xc07fd18  jal         func_1FF460
label_1d2664:
    if (ctx->pc == 0x1D2664u) {
        ctx->pc = 0x1D2664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2660u;
        // 0x1d2664: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2668u;
        goto label_1d2668;
    }
    ctx->pc = 0x1D2660u;
    SET_GPR_U32(ctx, 31, 0x1D2668u);
    ctx->pc = 0x1D2664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2660u;
    // 0x1d2664: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D2660u, 0x1D2668u)) {
        return;
    }
    ctx->pc = 0x1D2668u;
label_1d2668:
    // 0x1d2668: 0xc07d234  jal         func_1F48D0
label_1d266c:
    if (ctx->pc == 0x1D266Cu) {
        ctx->pc = 0x1D2670u;
        goto label_1d2670;
    }
    ctx->pc = 0x1D2668u;
    SET_GPR_U32(ctx, 31, 0x1D2670u);
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x1D2668u, 0x1D2670u)) {
        return;
    }
    ctx->pc = 0x1D2670u;
label_1d2670:
    // 0x1d2670: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d2670u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2674:
    // 0x1d2674: 0x52800066  beql        $s4, $zero, . + 4 + (0x66 << 2)
label_1d2678:
    if (ctx->pc == 0x1D2678u) {
        ctx->pc = 0x1D2678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2674u;
        // 0x1d2678: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D267Cu;
        goto label_1d267c;
    }
    ctx->pc = 0x1D2674u;
    {
        const bool branch_taken_0x1d2674 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2674) {
            ctx->pc = 0x1D2678u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2674u;
            // 0x1d2678: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D267Cu;
label_1d267c:
    // 0x1d267c: 0x3c040002  lui         $a0, 0x2
    ctx->pc = 0x1d267cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2 << 16));
label_1d2680:
    // 0x1d2680: 0xc080924  jal         func_202490
label_1d2684:
    if (ctx->pc == 0x1D2684u) {
        ctx->pc = 0x1D2684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2680u;
        // 0x1d2684: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2688u;
        goto label_1d2688;
    }
    ctx->pc = 0x1D2680u;
    SET_GPR_U32(ctx, 31, 0x1D2688u);
    ctx->pc = 0x1D2684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2680u;
    // 0x1d2684: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1D2680u, 0x1D2688u)) {
        return;
    }
    ctx->pc = 0x1D2688u;
label_1d2688:
    // 0x1d2688: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1d2688u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d268c:
    // 0x1d268c: 0x52200060  beql        $s1, $zero, . + 4 + (0x60 << 2)
label_1d2690:
    if (ctx->pc == 0x1D2690u) {
        ctx->pc = 0x1D2690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D268Cu;
        // 0x1d2690: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2694u;
        goto label_1d2694;
    }
    ctx->pc = 0x1D268Cu;
    {
        const bool branch_taken_0x1d268c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d268c) {
            ctx->pc = 0x1D2690u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D268Cu;
            // 0x1d2690: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D2810u;
            goto label_1d2810;
        }
    }
    ctx->pc = 0x1D2694u;
label_1d2694:
    // 0x1d2694: 0xc05f90a  jal         func_17E428
label_1d2698:
    if (ctx->pc == 0x1D2698u) {
        ctx->pc = 0x1D2698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2694u;
        // 0x1d2698: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D269Cu;
        goto label_1d269c;
    }
    ctx->pc = 0x1D2694u;
    SET_GPR_U32(ctx, 31, 0x1D269Cu);
    ctx->pc = 0x1D2698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2694u;
    // 0x1d2698: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D2694u, 0x1D269Cu)) {
        return;
    }
    ctx->pc = 0x1D269Cu;
label_1d269c:
    // 0x1d269c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1d269cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1d26a0:
    // 0x1d26a0: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1d26a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1d26a4:
    // 0x1d26a4: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x1d26a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1d26a8:
    // 0x1d26a8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1d26a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1d26ac:
    // 0x1d26ac: 0x0  nop
    ctx->pc = 0x1d26acu;
    // NOP
label_1d26b0:
    // 0x1d26b0: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x1d26b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1d26b4:
    // 0x1d26b4: 0x44926000  mtc1        $s2, $f12
    ctx->pc = 0x1d26b4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1d26b8:
    // 0x1d26b8: 0x0  nop
    ctx->pc = 0x1d26b8u;
    // NOP
label_1d26bc:
    // 0x1d26bc: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1d26bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_1d26c0:
    // 0x1d26c0: 0xc05f910  jal         func_17E440
label_1d26c4:
    if (ctx->pc == 0x1D26C4u) {
        ctx->pc = 0x1D26C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26C0u;
        // 0x1d26c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26C8u;
        goto label_1d26c8;
    }
    ctx->pc = 0x1D26C0u;
    SET_GPR_U32(ctx, 31, 0x1D26C8u);
    ctx->pc = 0x1D26C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26C0u;
    // 0x1d26c4: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D26C0u, 0x1D26C8u)) {
        return;
    }
    ctx->pc = 0x1D26C8u;
label_1d26c8:
    // 0x1d26c8: 0xc05f94c  jal         func_17E530
label_1d26cc:
    if (ctx->pc == 0x1D26CCu) {
        ctx->pc = 0x1D26D0u;
        goto label_1d26d0;
    }
    ctx->pc = 0x1D26C8u;
    SET_GPR_U32(ctx, 31, 0x1D26D0u);
    ctx->pc = 0x17E530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E530u, 0x1D26C8u, 0x1D26D0u)) {
        return;
    }
    ctx->pc = 0x1D26D0u;
label_1d26d0:
    // 0x1d26d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d26d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d26d4:
    // 0x1d26d4: 0xc05f910  jal         func_17E440
label_1d26d8:
    if (ctx->pc == 0x1D26D8u) {
        ctx->pc = 0x1D26D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26D4u;
        // 0x1d26d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26DCu;
        goto label_1d26dc;
    }
    ctx->pc = 0x1D26D4u;
    SET_GPR_U32(ctx, 31, 0x1D26DCu);
    ctx->pc = 0x1D26D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26D4u;
    // 0x1d26d8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D26D4u, 0x1D26DCu)) {
        return;
    }
    ctx->pc = 0x1D26DCu;
label_1d26dc:
    // 0x1d26dc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d26e0:
    // 0x1d26e0: 0x8c629b5c  lw          $v0, -0x64A4($v1)
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294941532)));
label_1d26e4:
    // 0x1d26e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1d26e8:
    if (ctx->pc == 0x1D26E8u) {
        ctx->pc = 0x1D26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26E4u;
        // 0x1d26e8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26ECu;
        goto label_1d26ec;
    }
    ctx->pc = 0x1D26E4u;
    {
        const bool branch_taken_0x1d26e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D26E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26E4u;
        // 0x1d26e8: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26e4) {
            ctx->pc = 0x1D2704u;
            goto label_1d2704;
        }
    }
    ctx->pc = 0x1D26ECu;
label_1d26ec:
    // 0x1d26ec: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x1d26ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1d26f0:
    // 0x1d26f0: 0xc0808f0  jal         func_2023C0
label_1d26f4:
    if (ctx->pc == 0x1D26F4u) {
        ctx->pc = 0x1D26F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26F0u;
        // 0x1d26f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D26F8u;
        goto label_1d26f8;
    }
    ctx->pc = 0x1D26F0u;
    SET_GPR_U32(ctx, 31, 0x1D26F8u);
    ctx->pc = 0x1D26F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26F0u;
    // 0x1d26f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1D26F0u, 0x1D26F8u)) {
        return;
    }
    ctx->pc = 0x1D26F8u;
label_1d26f8:
    // 0x1d26f8: 0xc075700  jal         func_1D5C00
label_1d26fc:
    if (ctx->pc == 0x1D26FCu) {
        ctx->pc = 0x1D26FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D26F8u;
        // 0x1d26fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2700u;
        goto label_1d2700;
    }
    ctx->pc = 0x1D26F8u;
    SET_GPR_U32(ctx, 31, 0x1D2700u);
    ctx->pc = 0x1D26FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D26F8u;
    // 0x1d26fc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D5C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D5C00u, 0x1D26F8u, 0x1D2700u)) {
        return;
    }
    ctx->pc = 0x1D2700u;
label_1d2700:
    // 0x1d2700: 0xae629b5c  sw          $v0, -0x64A4($s3)
    ctx->pc = 0x1d2700u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294941532), GPR_U32(ctx, 2));
label_1d2704:
    // 0x1d2704: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d2704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d2708:
    // 0x1d2708: 0x8e659b5c  lw          $a1, -0x64A4($s3)
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941532)));
label_1d270c:
    // 0x1d270c: 0xac409b60  sw          $zero, -0x64A0($v0)
    ctx->pc = 0x1d270cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294941536), GPR_U32(ctx, 0));
label_1d2710:
    // 0x1d2710: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1d2710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1d2714:
    // 0x1d2714: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1d2714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1d2718:
    // 0x1d2718: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1d271c:
    // 0x1d271c: 0x40f809  jalr        $v0
label_1d2720:
    if (ctx->pc == 0x1D2720u) {
        ctx->pc = 0x1D2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D271Cu;
        // 0x1d2720: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2724u;
        goto label_1d2724;
    }
    ctx->pc = 0x1D271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2724u);
        ctx->pc = 0x1D2720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D271Cu;
        // 0x1d2720: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D271Cu, 0x1D2724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D2724u;
label_1d2724:
    // 0x1d2724: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2724u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d2728:
    // 0x1d2728: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1d2728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1d272c:
    // 0x1d272c: 0xc0c4a72  jal         func_3129C8
label_1d2730:
    if (ctx->pc == 0x1D2730u) {
        ctx->pc = 0x1D2730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D272Cu;
        // 0x1d2730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2734u;
        goto label_1d2734;
    }
    ctx->pc = 0x1D272Cu;
    SET_GPR_U32(ctx, 31, 0x1D2734u);
    ctx->pc = 0x1D2730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D272Cu;
    // 0x1d2730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3129C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3129C8u, 0x1D272Cu, 0x1D2734u)) {
        return;
    }
    ctx->pc = 0x1D2734u;
label_1d2734:
    // 0x1d2734: 0xc05f90a  jal         func_17E428
label_1d2738:
    if (ctx->pc == 0x1D2738u) {
        ctx->pc = 0x1D2738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2734u;
        // 0x1d2738: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D273Cu;
        goto label_1d273c;
    }
    ctx->pc = 0x1D2734u;
    SET_GPR_U32(ctx, 31, 0x1D273Cu);
    ctx->pc = 0x1D2738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2734u;
    // 0x1d2738: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E428u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E428u, 0x1D2734u, 0x1D273Cu)) {
        return;
    }
    ctx->pc = 0x1D273Cu;
label_1d273c:
    // 0x1d273c: 0xa6120024  sh          $s2, 0x24($s0)
    ctx->pc = 0x1d273cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 18));
label_1d2740:
    // 0x1d2740: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d2740u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d2744:
    // 0x1d2744: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1d2744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_1d2748:
    // 0x1d2748: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_1d274c:
    // 0x1d274c: 0xc07d548  jal         func_1F5520
label_1d2750:
    if (ctx->pc == 0x1D2750u) {
        ctx->pc = 0x1D2750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D274Cu;
        // 0x1d2750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2754u;
        goto label_1d2754;
    }
    ctx->pc = 0x1D274Cu;
    SET_GPR_U32(ctx, 31, 0x1D2754u);
    ctx->pc = 0x1D2750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D274Cu;
    // 0x1d2750: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5520u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F5520u, 0x1D274Cu, 0x1D2754u)) {
        return;
    }
    ctx->pc = 0x1D2754u;
label_1d2754:
    // 0x1d2754: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1d2754u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1d2758:
    // 0x1d2758: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1d2758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1d275c:
    // 0x1d275c: 0xac769b78  sw          $s6, -0x6488($v1)
    ctx->pc = 0x1d275cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294941560), GPR_U32(ctx, 22));
label_1d2760:
    // 0x1d2760: 0xc05f910  jal         func_17E440
label_1d2764:
    if (ctx->pc == 0x1D2764u) {
        ctx->pc = 0x1D2764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2760u;
        // 0x1d2764: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2768u;
        goto label_1d2768;
    }
    ctx->pc = 0x1D2760u;
    SET_GPR_U32(ctx, 31, 0x1D2768u);
    ctx->pc = 0x1D2764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2760u;
    // 0x1d2764: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17E440u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E440u, 0x1D2760u, 0x1D2768u)) {
        return;
    }
    ctx->pc = 0x1D2768u;
label_1d2768:
    // 0x1d2768: 0xc05f94c  jal         func_17E530
label_1d276c:
    if (ctx->pc == 0x1D276Cu) {
        ctx->pc = 0x1D2770u;
        goto label_1d2770;
    }
    ctx->pc = 0x1D2768u;
    SET_GPR_U32(ctx, 31, 0x1D2770u);
    ctx->pc = 0x17E530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17E530u, 0x1D2768u, 0x1D2770u)) {
        return;
    }
    ctx->pc = 0x1D2770u;
label_1d2770:
    // 0x1d2770: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d2770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1d2774:
    // 0x1d2774: 0x8ee31a70  lw          $v1, 0x1A70($s7)
    ctx->pc = 0x1d2774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 6768)));
label_1d2778:
    // 0x1d2778: 0x8c4486c8  lw          $a0, -0x7938($v0)
    ctx->pc = 0x1d2778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
label_1d277c:
    // 0x1d277c: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
label_1d2780:
    if (ctx->pc == 0x1D2780u) {
        ctx->pc = 0x1D2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D277Cu;
        // 0x1d2780: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2784u;
        goto label_1d2784;
    }
    ctx->pc = 0x1D277Cu;
    {
        const bool branch_taken_0x1d277c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D2780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D277Cu;
        // 0x1d2780: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d277c) {
            ctx->pc = 0x1D27A4u;
            goto label_1d27a4;
        }
    }
    ctx->pc = 0x1D2784u;
label_1d2784:
    // 0x1d2784: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d2788:
    // 0x1d2788: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1d278c:
    if (ctx->pc == 0x1D278Cu) {
        ctx->pc = 0x1D278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2788u;
        // 0x1d278c: 0x8e049b70  lw          $a0, -0x6490($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D2790u;
        goto label_1d2790;
    }
    ctx->pc = 0x1D2788u;
    {
        const bool branch_taken_0x1d2788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2788) {
            ctx->pc = 0x1D278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D2788u;
            // 0x1d278c: 0x8e049b70  lw          $a0, -0x6490($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D27A8u;
            goto label_1d27a8;
        }
    }
    ctx->pc = 0x1D2790u;
label_1d2790:
    // 0x1d2790: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1d2790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1d2794:
    // 0x1d2794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d2794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d2798:
    // 0x1d2798: 0xc07fd18  jal         func_1FF460
label_1d279c:
    if (ctx->pc == 0x1D279Cu) {
        ctx->pc = 0x1D279Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2798u;
        // 0x1d279c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D27A0u;
        goto label_1d27a0;
    }
    ctx->pc = 0x1D2798u;
    SET_GPR_U32(ctx, 31, 0x1D27A0u);
    ctx->pc = 0x1D279Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D2798u;
    // 0x1d279c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D2798u, 0x1D27A0u)) {
        return;
    }
    ctx->pc = 0x1D27A0u;
label_1d27a0:
    // 0x1d27a0: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x1d27a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_1d27a4:
    // 0x1d27a4: 0x8e049b70  lw          $a0, -0x6490($s0)
    ctx->pc = 0x1d27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294941552)));
label_1d27a8:
    // 0x1d27a8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1d27ac:
    if (ctx->pc == 0x1D27ACu) {
        ctx->pc = 0x1D27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A8u;
        // 0x1d27ac: 0x3c03001d  lui         $v1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D27B0u;
        goto label_1d27b0;
    }
    ctx->pc = 0x1D27A8u;
    {
        const bool branch_taken_0x1d27a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D27A8u;
        // 0x1d27ac: 0x3c03001d  lui         $v1, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27a8) {
            ctx->pc = 0x1D27BCu;
            goto label_1d27bc;
        }
    }
    ctx->pc = 0x1D27B0u;
label_1d27b0:
    // 0x1d27b0: 0xc0808b8  jal         func_2022E0
label_1d27b4:
    if (ctx->pc == 0x1D27B4u) {
        ctx->pc = 0x1D27B8u;
        goto label_1d27b8;
    }
    ctx->pc = 0x1D27B0u;
    SET_GPR_U32(ctx, 31, 0x1D27B8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1D27B0u, 0x1D27B8u)) {
        return;
    }
    ctx->pc = 0x1D27B8u;
label_1d27b8:
    // 0x1d27b8: 0x3c03001d  lui         $v1, 0x1D
    ctx->pc = 0x1d27b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)29 << 16));
label_1d27bc:
    // 0x1d27bc: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1d27bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1d27c0:
    // 0x1d27c0: 0x24633270  addiu       $v1, $v1, 0x3270
    ctx->pc = 0x1d27c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12912));
label_1d27c4:
    // 0x1d27c4: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1d27c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1d27c8:
    // 0x1d27c8: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1d27c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1d27cc:
    // 0x1d27cc: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1d27ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1d27d0:
    // 0x1d27d0: 0x8e699b5c  lw          $t1, -0x64A4($s3)
    ctx->pc = 0x1d27d0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941532)));
label_1d27d4:
    // 0x1d27d4: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1d27d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1d27d8:
    // 0x1d27d8: 0xaca39b68  sw          $v1, -0x6498($a1)
    ctx->pc = 0x1d27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294941544), GPR_U32(ctx, 3));
label_1d27dc:
    // 0x1d27dc: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x1d27dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
label_1d27e0:
    // 0x1d27e0: 0xacf19b6c  sw          $s1, -0x6494($a3)
    ctx->pc = 0x1d27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294941548), GPR_U32(ctx, 17));
label_1d27e4:
    // 0x1d27e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1d27e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1d27e8:
    // 0x1d27e8: 0xac829b74  sw          $v0, -0x648C($a0)
    ctx->pc = 0x1d27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294941556), GPR_U32(ctx, 2));
label_1d27ec:
    // 0x1d27ec: 0xae119b70  sw          $s1, -0x6490($s0)
    ctx->pc = 0x1d27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294941552), GPR_U32(ctx, 17));
label_1d27f0:
    // 0x1d27f0: 0xad280004  sw          $t0, 0x4($t1)
    ctx->pc = 0x1d27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 8));
label_1d27f4:
    // 0x1d27f4: 0x8e679b5c  lw          $a3, -0x64A4($s3)
    ctx->pc = 0x1d27f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294941532)));
label_1d27f8:
    // 0x1d27f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1d27f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1d27fc:
    // 0x1d27fc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1d27fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1d2800:
    // 0x1d2800: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1d2800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1d2804:
    // 0x1d2804: 0x60f809  jalr        $v1
label_1d2808:
    if (ctx->pc == 0x1D2808u) {
        ctx->pc = 0x1D2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2804u;
        // 0x1d2808: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D280Cu;
        goto label_1d280c;
    }
    ctx->pc = 0x1D2804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D280Cu);
        ctx->pc = 0x1D2808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2804u;
        // 0x1d2808: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2804u, 0x1D280Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D280Cu;
label_1d280c:
    // 0x1d280c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1d280cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1d2810:
    // 0x1d2810: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1d2810u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d2814:
    // 0x1d2814: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1d2814u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d2818:
    // 0x1d2818: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1d2818u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d281c:
    // 0x1d281c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1d281cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d2820:
    // 0x1d2820: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x1d2820u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d2824:
    // 0x1d2824: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x1d2824u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d2828:
    // 0x1d2828: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x1d2828u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d282c:
    // 0x1d282c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d282cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1d2830:
    // 0x1d2830: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1d2830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1d2834:
    // 0x1d2834: 0x3e00008  jr          $ra
label_1d2838:
    if (ctx->pc == 0x1D2838u) {
        ctx->pc = 0x1D2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2834u;
        // 0x1d2838: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D283Cu;
        goto label_1d283c;
    }
    ctx->pc = 0x1D2834u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2834u;
        // 0x1d2838: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2834u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D283Cu;
label_1d283c:
    // 0x1d283c: 0x0  nop
    ctx->pc = 0x1d283cu;
    // NOP
    ctx->pc = 0x1d2840u;
}
