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

// Function: sub_00123480
// Address: 0x123480 - 0x123820
void sub_00123480_0x123480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123480_0x123480");
#endif

    switch (ctx->pc) {
        case 0x123480u: goto label_123480;
        case 0x123484u: goto label_123484;
        case 0x123488u: goto label_123488;
        case 0x12348cu: goto label_12348c;
        case 0x123490u: goto label_123490;
        case 0x123494u: goto label_123494;
        case 0x123498u: goto label_123498;
        case 0x12349cu: goto label_12349c;
        case 0x1234a0u: goto label_1234a0;
        case 0x1234a4u: goto label_1234a4;
        case 0x1234a8u: goto label_1234a8;
        case 0x1234acu: goto label_1234ac;
        case 0x1234b0u: goto label_1234b0;
        case 0x1234b4u: goto label_1234b4;
        case 0x1234b8u: goto label_1234b8;
        case 0x1234bcu: goto label_1234bc;
        case 0x1234c0u: goto label_1234c0;
        case 0x1234c4u: goto label_1234c4;
        case 0x1234c8u: goto label_1234c8;
        case 0x1234ccu: goto label_1234cc;
        case 0x1234d0u: goto label_1234d0;
        case 0x1234d4u: goto label_1234d4;
        case 0x1234d8u: goto label_1234d8;
        case 0x1234dcu: goto label_1234dc;
        case 0x1234e0u: goto label_1234e0;
        case 0x1234e4u: goto label_1234e4;
        case 0x1234e8u: goto label_1234e8;
        case 0x1234ecu: goto label_1234ec;
        case 0x1234f0u: goto label_1234f0;
        case 0x1234f4u: goto label_1234f4;
        case 0x1234f8u: goto label_1234f8;
        case 0x1234fcu: goto label_1234fc;
        case 0x123500u: goto label_123500;
        case 0x123504u: goto label_123504;
        case 0x123508u: goto label_123508;
        case 0x12350cu: goto label_12350c;
        case 0x123510u: goto label_123510;
        case 0x123514u: goto label_123514;
        case 0x123518u: goto label_123518;
        case 0x12351cu: goto label_12351c;
        case 0x123520u: goto label_123520;
        case 0x123524u: goto label_123524;
        case 0x123528u: goto label_123528;
        case 0x12352cu: goto label_12352c;
        case 0x123530u: goto label_123530;
        case 0x123534u: goto label_123534;
        case 0x123538u: goto label_123538;
        case 0x12353cu: goto label_12353c;
        case 0x123540u: goto label_123540;
        case 0x123544u: goto label_123544;
        case 0x123548u: goto label_123548;
        case 0x12354cu: goto label_12354c;
        case 0x123550u: goto label_123550;
        case 0x123554u: goto label_123554;
        case 0x123558u: goto label_123558;
        case 0x12355cu: goto label_12355c;
        case 0x123560u: goto label_123560;
        case 0x123564u: goto label_123564;
        case 0x123568u: goto label_123568;
        case 0x12356cu: goto label_12356c;
        case 0x123570u: goto label_123570;
        case 0x123574u: goto label_123574;
        case 0x123578u: goto label_123578;
        case 0x12357cu: goto label_12357c;
        case 0x123580u: goto label_123580;
        case 0x123584u: goto label_123584;
        case 0x123588u: goto label_123588;
        case 0x12358cu: goto label_12358c;
        case 0x123590u: goto label_123590;
        case 0x123594u: goto label_123594;
        case 0x123598u: goto label_123598;
        case 0x12359cu: goto label_12359c;
        case 0x1235a0u: goto label_1235a0;
        case 0x1235a4u: goto label_1235a4;
        case 0x1235a8u: goto label_1235a8;
        case 0x1235acu: goto label_1235ac;
        case 0x1235b0u: goto label_1235b0;
        case 0x1235b4u: goto label_1235b4;
        case 0x1235b8u: goto label_1235b8;
        case 0x1235bcu: goto label_1235bc;
        case 0x1235c0u: goto label_1235c0;
        case 0x1235c4u: goto label_1235c4;
        case 0x1235c8u: goto label_1235c8;
        case 0x1235ccu: goto label_1235cc;
        case 0x1235d0u: goto label_1235d0;
        case 0x1235d4u: goto label_1235d4;
        case 0x1235d8u: goto label_1235d8;
        case 0x1235dcu: goto label_1235dc;
        case 0x1235e0u: goto label_1235e0;
        case 0x1235e4u: goto label_1235e4;
        case 0x1235e8u: goto label_1235e8;
        case 0x1235ecu: goto label_1235ec;
        case 0x1235f0u: goto label_1235f0;
        case 0x1235f4u: goto label_1235f4;
        case 0x1235f8u: goto label_1235f8;
        case 0x1235fcu: goto label_1235fc;
        case 0x123600u: goto label_123600;
        case 0x123604u: goto label_123604;
        case 0x123608u: goto label_123608;
        case 0x12360cu: goto label_12360c;
        case 0x123610u: goto label_123610;
        case 0x123614u: goto label_123614;
        case 0x123618u: goto label_123618;
        case 0x12361cu: goto label_12361c;
        case 0x123620u: goto label_123620;
        case 0x123624u: goto label_123624;
        case 0x123628u: goto label_123628;
        case 0x12362cu: goto label_12362c;
        case 0x123630u: goto label_123630;
        case 0x123634u: goto label_123634;
        case 0x123638u: goto label_123638;
        case 0x12363cu: goto label_12363c;
        case 0x123640u: goto label_123640;
        case 0x123644u: goto label_123644;
        case 0x123648u: goto label_123648;
        case 0x12364cu: goto label_12364c;
        case 0x123650u: goto label_123650;
        case 0x123654u: goto label_123654;
        case 0x123658u: goto label_123658;
        case 0x12365cu: goto label_12365c;
        case 0x123660u: goto label_123660;
        case 0x123664u: goto label_123664;
        case 0x123668u: goto label_123668;
        case 0x12366cu: goto label_12366c;
        case 0x123670u: goto label_123670;
        case 0x123674u: goto label_123674;
        case 0x123678u: goto label_123678;
        case 0x12367cu: goto label_12367c;
        case 0x123680u: goto label_123680;
        case 0x123684u: goto label_123684;
        case 0x123688u: goto label_123688;
        case 0x12368cu: goto label_12368c;
        case 0x123690u: goto label_123690;
        case 0x123694u: goto label_123694;
        case 0x123698u: goto label_123698;
        case 0x12369cu: goto label_12369c;
        case 0x1236a0u: goto label_1236a0;
        case 0x1236a4u: goto label_1236a4;
        case 0x1236a8u: goto label_1236a8;
        case 0x1236acu: goto label_1236ac;
        case 0x1236b0u: goto label_1236b0;
        case 0x1236b4u: goto label_1236b4;
        case 0x1236b8u: goto label_1236b8;
        case 0x1236bcu: goto label_1236bc;
        case 0x1236c0u: goto label_1236c0;
        case 0x1236c4u: goto label_1236c4;
        case 0x1236c8u: goto label_1236c8;
        case 0x1236ccu: goto label_1236cc;
        case 0x1236d0u: goto label_1236d0;
        case 0x1236d4u: goto label_1236d4;
        case 0x1236d8u: goto label_1236d8;
        case 0x1236dcu: goto label_1236dc;
        case 0x1236e0u: goto label_1236e0;
        case 0x1236e4u: goto label_1236e4;
        case 0x1236e8u: goto label_1236e8;
        case 0x1236ecu: goto label_1236ec;
        case 0x1236f0u: goto label_1236f0;
        case 0x1236f4u: goto label_1236f4;
        case 0x1236f8u: goto label_1236f8;
        case 0x1236fcu: goto label_1236fc;
        case 0x123700u: goto label_123700;
        case 0x123704u: goto label_123704;
        case 0x123708u: goto label_123708;
        case 0x12370cu: goto label_12370c;
        case 0x123710u: goto label_123710;
        case 0x123714u: goto label_123714;
        case 0x123718u: goto label_123718;
        case 0x12371cu: goto label_12371c;
        case 0x123720u: goto label_123720;
        case 0x123724u: goto label_123724;
        case 0x123728u: goto label_123728;
        case 0x12372cu: goto label_12372c;
        case 0x123730u: goto label_123730;
        case 0x123734u: goto label_123734;
        case 0x123738u: goto label_123738;
        case 0x12373cu: goto label_12373c;
        case 0x123740u: goto label_123740;
        case 0x123744u: goto label_123744;
        case 0x123748u: goto label_123748;
        case 0x12374cu: goto label_12374c;
        case 0x123750u: goto label_123750;
        case 0x123754u: goto label_123754;
        case 0x123758u: goto label_123758;
        case 0x12375cu: goto label_12375c;
        case 0x123760u: goto label_123760;
        case 0x123764u: goto label_123764;
        case 0x123768u: goto label_123768;
        case 0x12376cu: goto label_12376c;
        case 0x123770u: goto label_123770;
        case 0x123774u: goto label_123774;
        case 0x123778u: goto label_123778;
        case 0x12377cu: goto label_12377c;
        case 0x123780u: goto label_123780;
        case 0x123784u: goto label_123784;
        case 0x123788u: goto label_123788;
        case 0x12378cu: goto label_12378c;
        case 0x123790u: goto label_123790;
        case 0x123794u: goto label_123794;
        case 0x123798u: goto label_123798;
        case 0x12379cu: goto label_12379c;
        case 0x1237a0u: goto label_1237a0;
        case 0x1237a4u: goto label_1237a4;
        case 0x1237a8u: goto label_1237a8;
        case 0x1237acu: goto label_1237ac;
        case 0x1237b0u: goto label_1237b0;
        case 0x1237b4u: goto label_1237b4;
        case 0x1237b8u: goto label_1237b8;
        case 0x1237bcu: goto label_1237bc;
        case 0x1237c0u: goto label_1237c0;
        case 0x1237c4u: goto label_1237c4;
        case 0x1237c8u: goto label_1237c8;
        case 0x1237ccu: goto label_1237cc;
        case 0x1237d0u: goto label_1237d0;
        case 0x1237d4u: goto label_1237d4;
        case 0x1237d8u: goto label_1237d8;
        case 0x1237dcu: goto label_1237dc;
        case 0x1237e0u: goto label_1237e0;
        case 0x1237e4u: goto label_1237e4;
        case 0x1237e8u: goto label_1237e8;
        case 0x1237ecu: goto label_1237ec;
        case 0x1237f0u: goto label_1237f0;
        case 0x1237f4u: goto label_1237f4;
        case 0x1237f8u: goto label_1237f8;
        case 0x1237fcu: goto label_1237fc;
        case 0x123800u: goto label_123800;
        case 0x123804u: goto label_123804;
        case 0x123808u: goto label_123808;
        case 0x12380cu: goto label_12380c;
        case 0x123810u: goto label_123810;
        case 0x123814u: goto label_123814;
        case 0x123818u: goto label_123818;
        case 0x12381cu: goto label_12381c;
        default: break;
    }

    ctx->pc = 0x123480u;

label_123480:
    // 0x123480: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x123480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_123484:
    // 0x123484: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x123484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_123488:
    // 0x123488: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x123488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_12348c:
    // 0x12348c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12348cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_123490:
    // 0x123490: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x123490u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_123494:
    // 0x123494: 0x26300320  addiu       $s0, $s1, 0x320
    ctx->pc = 0x123494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
label_123498:
    // 0x123498: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x123498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_12349c:
    // 0x12349c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x12349cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_1234a0:
    // 0x1234a0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1234a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_1234a4:
    // 0x1234a4: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1234a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1234a8:
    // 0x1234a8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1234a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1234ac:
    // 0x1234ac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1234acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_1234b0:
    // 0x1234b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1234b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1234b4:
    // 0x1234b4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1234b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_1234b8:
    // 0x1234b8: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x1234b8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
label_1234bc:
    // 0x1234bc: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1234bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_1234c0:
    // 0x1234c0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1234c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1234c4:
    // 0x1234c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1234c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1234c8:
    // 0x1234c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1234c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1234cc:
    // 0x1234cc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1234ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1234d0:
    // 0x1234d0: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x1234d0u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1234d4:
    // 0x1234d4: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1234d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1234d8:
    // 0x1234d8: 0xc068194  jal         func_1A0650
label_1234dc:
    if (ctx->pc == 0x1234DCu) {
        ctx->pc = 0x1234DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234D8u;
        // 0x1234dc: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1234E0u;
        goto label_1234e0;
    }
    ctx->pc = 0x1234D8u;
    SET_GPR_U32(ctx, 31, 0x1234E0u);
    ctx->pc = 0x1234DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234D8u;
    // 0x1234dc: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0650u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0650u, 0x1234D8u, 0x1234E0u)) {
        return;
    }
    ctx->pc = 0x1234E0u;
label_1234e0:
    // 0x1234e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1234e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1234e4:
    // 0x1234e4: 0xc067e0c  jal         func_19F830
label_1234e8:
    if (ctx->pc == 0x1234E8u) {
        ctx->pc = 0x1234E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234E4u;
        // 0x1234e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1234ECu;
        goto label_1234ec;
    }
    ctx->pc = 0x1234E4u;
    SET_GPR_U32(ctx, 31, 0x1234ECu);
    ctx->pc = 0x1234E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234E4u;
    // 0x1234e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F830u, 0x1234E4u, 0x1234ECu)) {
        return;
    }
    ctx->pc = 0x1234ECu;
label_1234ec:
    // 0x1234ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1234ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1234f0:
    // 0x1234f0: 0xc067efe  jal         func_19FBF8
label_1234f4:
    if (ctx->pc == 0x1234F4u) {
        ctx->pc = 0x1234F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234F0u;
        // 0x1234f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1234F8u;
        goto label_1234f8;
    }
    ctx->pc = 0x1234F0u;
    SET_GPR_U32(ctx, 31, 0x1234F8u);
    ctx->pc = 0x1234F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234F0u;
    // 0x1234f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FBF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FBF8u, 0x1234F0u, 0x1234F8u)) {
        return;
    }
    ctx->pc = 0x1234F8u;
label_1234f8:
    // 0x1234f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1234f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1234fc:
    // 0x1234fc: 0xc067e7c  jal         func_19F9F0
label_123500:
    if (ctx->pc == 0x123500u) {
        ctx->pc = 0x123500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1234FCu;
        // 0x123500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123504u;
        goto label_123504;
    }
    ctx->pc = 0x1234FCu;
    SET_GPR_U32(ctx, 31, 0x123504u);
    ctx->pc = 0x123500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1234FCu;
    // 0x123500: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F9F0u, 0x1234FCu, 0x123504u)) {
        return;
    }
    ctx->pc = 0x123504u;
label_123504:
    // 0x123504: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x123504u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123508:
    // 0x123508: 0xc067d8c  jal         func_19F630
label_12350c:
    if (ctx->pc == 0x12350Cu) {
        ctx->pc = 0x12350Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123508u;
        // 0x12350c: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123510u;
        goto label_123510;
    }
    ctx->pc = 0x123508u;
    SET_GPR_U32(ctx, 31, 0x123510u);
    ctx->pc = 0x12350Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123508u;
    // 0x12350c: 0x26240320  addiu       $a0, $s1, 0x320 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F630u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F630u, 0x123508u, 0x123510u)) {
        return;
    }
    ctx->pc = 0x123510u;
label_123510:
    // 0x123510: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_123514:
    if (ctx->pc == 0x123514u) {
        ctx->pc = 0x123514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123510u;
        // 0x123514: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123518u;
        goto label_123518;
    }
    ctx->pc = 0x123510u;
    {
        const bool branch_taken_0x123510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x123510) {
            ctx->pc = 0x123514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123510u;
            // 0x123514: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123520u;
            goto label_123520;
        }
    }
    ctx->pc = 0x123518u;
label_123518:
    // 0x123518: 0x56c00001  bnel        $s6, $zero, . + 4 + (0x1 << 2)
label_12351c:
    if (ctx->pc == 0x12351Cu) {
        ctx->pc = 0x12351Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123518u;
        // 0x12351c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123520u;
        goto label_123520;
    }
    ctx->pc = 0x123518u;
    {
        const bool branch_taken_0x123518 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x123518) {
            ctx->pc = 0x12351Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123518u;
            // 0x12351c: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123520u;
            goto label_123520;
        }
    }
    ctx->pc = 0x123520u;
label_123520:
    // 0x123520: 0x12a0005b  beqz        $s5, . + 4 + (0x5B << 2)
label_123524:
    if (ctx->pc == 0x123524u) {
        ctx->pc = 0x123528u;
        goto label_123528;
    }
    ctx->pc = 0x123520u;
    {
        const bool branch_taken_0x123520 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x123520) {
            ctx->pc = 0x123690u;
            goto label_123690;
        }
    }
    ctx->pc = 0x123528u;
label_123528:
    // 0x123528: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123528u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12352c:
    // 0x12352c: 0xc04985c  jal         func_126170
label_123530:
    if (ctx->pc == 0x123530u) {
        ctx->pc = 0x123530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12352Cu;
        // 0x123530: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123534u;
        goto label_123534;
    }
    ctx->pc = 0x12352Cu;
    SET_GPR_U32(ctx, 31, 0x123534u);
    ctx->pc = 0x123530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12352Cu;
    // 0x123530: 0x241e0001  addiu       $fp, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126170u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126170u, 0x12352Cu, 0x123534u)) {
        return;
    }
    ctx->pc = 0x123534u;
label_123534:
    // 0x123534: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x123534u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123538:
    // 0x123538: 0xafb40000  sw          $s4, 0x0($sp)
    ctx->pc = 0x123538u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
label_12353c:
    // 0x12353c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x12353cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_123540:
    // 0x123540: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x123540u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123544:
    // 0x123544: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x123544u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123548:
    // 0x123548: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x123548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12354c:
    // 0x12354c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x12354cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_123550:
    // 0x123550: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x123550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_123554:
    // 0x123554: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x123554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_123558:
    // 0x123558: 0x40f809  jalr        $v0
label_12355c:
    if (ctx->pc == 0x12355Cu) {
        ctx->pc = 0x12355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123558u;
        // 0x12355c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123560u;
        goto label_123560;
    }
    ctx->pc = 0x123558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123560u);
        ctx->pc = 0x12355Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123558u;
        // 0x12355c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123558u, 0x123560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123560u;
label_123560:
    // 0x123560: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_123564:
    if (ctx->pc == 0x123564u) {
        ctx->pc = 0x123568u;
        goto label_123568;
    }
    ctx->pc = 0x123560u;
    {
        const bool branch_taken_0x123560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x123560) {
            ctx->pc = 0x123570u;
            goto label_123570;
        }
    }
    ctx->pc = 0x123568u;
label_123568:
    // 0x123568: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x123568u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_12356c:
    // 0x12356c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x12356cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_123570:
    // 0x123570: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
label_123574:
    if (ctx->pc == 0x123574u) {
        ctx->pc = 0x123574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123570u;
        // 0x123574: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123578u;
        goto label_123578;
    }
    ctx->pc = 0x123570u;
    {
        const bool branch_taken_0x123570 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x123574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123570u;
        // 0x123574: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123570) {
            ctx->pc = 0x12358Cu;
            goto label_12358c;
        }
    }
    ctx->pc = 0x123578u;
label_123578:
    // 0x123578: 0x8e42080c  lw          $v0, 0x80C($s2)
    ctx->pc = 0x123578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2060)));
label_12357c:
    // 0x12357c: 0x8e430848  lw          $v1, 0x848($s2)
    ctx->pc = 0x12357cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2120)));
label_123580:
    // 0x123580: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x123580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_123584:
    // 0x123584: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x123584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_123588:
    // 0x123588: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x123588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_12358c:
    // 0x12358c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_123590:
    if (ctx->pc == 0x123590u) {
        ctx->pc = 0x123590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12358Cu;
        // 0x123590: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123594u;
        goto label_123594;
    }
    ctx->pc = 0x12358Cu;
    {
        const bool branch_taken_0x12358c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x123590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12358Cu;
        // 0x123590: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12358c) {
            ctx->pc = 0x1235A0u;
            goto label_1235a0;
        }
    }
    ctx->pc = 0x123594u;
label_123594:
    // 0x123594: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x123594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_123598:
    // 0x123598: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x123598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_12359c:
    // 0x12359c: 0x282280a  movz        $a1, $s4, $v0
    ctx->pc = 0x12359cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20));
label_1235a0:
    // 0x1235a0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x1235a0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1235a4:
    // 0x1235a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1235a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1235a8:
    // 0x1235a8: 0xc048e08  jal         func_123820
label_1235ac:
    if (ctx->pc == 0x1235ACu) {
        ctx->pc = 0x1235ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235A8u;
        // 0x1235ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235B0u;
        goto label_1235b0;
    }
    ctx->pc = 0x1235A8u;
    SET_GPR_U32(ctx, 31, 0x1235B0u);
    ctx->pc = 0x1235ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235A8u;
    // 0x1235ac: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123820u, 0x1235A8u, 0x1235B0u)) {
        return;
    }
    ctx->pc = 0x1235B0u;
label_1235b0:
    // 0x1235b0: 0x8e430834  lw          $v1, 0x834($s2)
    ctx->pc = 0x1235b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2100)));
label_1235b4:
    // 0x1235b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1235b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1235b8:
    // 0x1235b8: 0x54620012  bnel        $v1, $v0, . + 4 + (0x12 << 2)
label_1235bc:
    if (ctx->pc == 0x1235BCu) {
        ctx->pc = 0x1235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235B8u;
        // 0x1235bc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235C0u;
        goto label_1235c0;
    }
    ctx->pc = 0x1235B8u;
    {
        const bool branch_taken_0x1235b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1235b8) {
            ctx->pc = 0x1235BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1235B8u;
            // 0x1235bc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x123604u;
            goto label_123604;
        }
    }
    ctx->pc = 0x1235C0u;
label_1235c0:
    // 0x1235c0: 0xc04094c  jal         func_102530
label_1235c4:
    if (ctx->pc == 0x1235C4u) {
        ctx->pc = 0x1235C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235C0u;
        // 0x1235c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235C8u;
        goto label_1235c8;
    }
    ctx->pc = 0x1235C0u;
    SET_GPR_U32(ctx, 31, 0x1235C8u);
    ctx->pc = 0x1235C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235C0u;
    // 0x1235c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x1235C0u, 0x1235C8u)) {
        return;
    }
    ctx->pc = 0x1235C8u;
label_1235c8:
    // 0x1235c8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1235c8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_1235cc:
    // 0x1235cc: 0xc040950  jal         func_102540
label_1235d0:
    if (ctx->pc == 0x1235D0u) {
        ctx->pc = 0x1235D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235CCu;
        // 0x1235d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235D4u;
        goto label_1235d4;
    }
    ctx->pc = 0x1235CCu;
    SET_GPR_U32(ctx, 31, 0x1235D4u);
    ctx->pc = 0x1235D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235CCu;
    // 0x1235d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x1235CCu, 0x1235D4u)) {
        return;
    }
    ctx->pc = 0x1235D4u;
label_1235d4:
    // 0x1235d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1235d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1235d8:
    // 0x1235d8: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x1235d8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_1235dc:
    // 0x1235dc: 0xc06809e  jal         func_1A0278
label_1235e0:
    if (ctx->pc == 0x1235E0u) {
        ctx->pc = 0x1235E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235DCu;
        // 0x1235e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235E4u;
        goto label_1235e4;
    }
    ctx->pc = 0x1235DCu;
    SET_GPR_U32(ctx, 31, 0x1235E4u);
    ctx->pc = 0x1235E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1235DCu;
    // 0x1235e0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A0278u, 0x1235DCu, 0x1235E4u)) {
        return;
    }
    ctx->pc = 0x1235E4u;
label_1235e4:
    // 0x1235e4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x1235e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1235e8:
    // 0x1235e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1235e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1235ec:
    // 0x1235ec: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1235ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1235f0:
    // 0x1235f0: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1235f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1235f4:
    // 0x1235f4: 0x60f809  jalr        $v1
label_1235f8:
    if (ctx->pc == 0x1235F8u) {
        ctx->pc = 0x1235F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F4u;
        // 0x1235f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1235FCu;
        goto label_1235fc;
    }
    ctx->pc = 0x1235F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1235FCu);
        ctx->pc = 0x1235F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1235F4u;
        // 0x1235f8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1235F4u, 0x1235FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1235FCu;
label_1235fc:
    // 0x1235fc: 0x10000006  b           . + 4 + (0x6 << 2)
label_123600:
    if (ctx->pc == 0x123600u) {
        ctx->pc = 0x123604u;
        goto label_123604;
    }
    ctx->pc = 0x1235FCu;
    {
        const bool branch_taken_0x1235fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1235fc) {
            ctx->pc = 0x123618u;
            goto label_123618;
        }
    }
    ctx->pc = 0x123604u;
label_123604:
    // 0x123604: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x123604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_123608:
    // 0x123608: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x123608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_12360c:
    // 0x12360c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x12360cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_123610:
    // 0x123610: 0x60f809  jalr        $v1
label_123614:
    if (ctx->pc == 0x123614u) {
        ctx->pc = 0x123614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123610u;
        // 0x123614: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123618u;
        goto label_123618;
    }
    ctx->pc = 0x123610u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123618u);
        ctx->pc = 0x123614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123610u;
        // 0x123614: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123610u, 0x123618u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123618u;
label_123618:
    // 0x123618: 0xc04094c  jal         func_102530
label_12361c:
    if (ctx->pc == 0x12361Cu) {
        ctx->pc = 0x12361Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123618u;
        // 0x12361c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123620u;
        goto label_123620;
    }
    ctx->pc = 0x123618u;
    SET_GPR_U32(ctx, 31, 0x123620u);
    ctx->pc = 0x12361Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123618u;
    // 0x12361c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x123618u, 0x123620u)) {
        return;
    }
    ctx->pc = 0x123620u;
label_123620:
    // 0x123620: 0xc641081c  lwc1        $f1, 0x81C($s2)
    ctx->pc = 0x123620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123624:
    // 0x123624: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_123628:
    // 0x123628: 0xe640081c  swc1        $f0, 0x81C($s2)
    ctx->pc = 0x123628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2076), bits); }
label_12362c:
    // 0x12362c: 0xc040950  jal         func_102540
label_123630:
    if (ctx->pc == 0x123630u) {
        ctx->pc = 0x123630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12362Cu;
        // 0x123630: 0xe6410820  swc1        $f1, 0x820($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2080), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123634u;
        goto label_123634;
    }
    ctx->pc = 0x12362Cu;
    SET_GPR_U32(ctx, 31, 0x123634u);
    ctx->pc = 0x123630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12362Cu;
    // 0x123630: 0xe6410820  swc1        $f1, 0x820($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x12362Cu, 0x123634u)) {
        return;
    }
    ctx->pc = 0x123634u;
label_123634:
    // 0x123634: 0xc6410828  lwc1        $f1, 0x828($s2)
    ctx->pc = 0x123634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123638:
    // 0x123638: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123638u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12363c:
    // 0x12363c: 0xe6400828  swc1        $f0, 0x828($s2)
    ctx->pc = 0x12363cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2088), bits); }
label_123640:
    // 0x123640: 0xc04095e  jal         func_102578
label_123644:
    if (ctx->pc == 0x123644u) {
        ctx->pc = 0x123644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123640u;
        // 0x123644: 0xe641082c  swc1        $f1, 0x82C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123648u;
        goto label_123648;
    }
    ctx->pc = 0x123640u;
    SET_GPR_U32(ctx, 31, 0x123648u);
    ctx->pc = 0x123644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123640u;
    // 0x123644: 0xe641082c  swc1        $f1, 0x82C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x123640u, 0x123648u)) {
        return;
    }
    ctx->pc = 0x123648u;
label_123648:
    // 0x123648: 0xe6400824  swc1        $f0, 0x824($s2)
    ctx->pc = 0x123648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2084), bits); }
label_12364c:
    // 0x12364c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12364cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123650:
    // 0x123650: 0xc067efe  jal         func_19FBF8
label_123654:
    if (ctx->pc == 0x123654u) {
        ctx->pc = 0x123654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123650u;
        // 0x123654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123658u;
        goto label_123658;
    }
    ctx->pc = 0x123650u;
    SET_GPR_U32(ctx, 31, 0x123658u);
    ctx->pc = 0x123654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123650u;
    // 0x123654: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FBF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FBF8u, 0x123650u, 0x123658u)) {
        return;
    }
    ctx->pc = 0x123658u;
label_123658:
    // 0x123658: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x123658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12365c:
    // 0x12365c: 0xc067e0c  jal         func_19F830
label_123660:
    if (ctx->pc == 0x123660u) {
        ctx->pc = 0x123660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12365Cu;
        // 0x123660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123664u;
        goto label_123664;
    }
    ctx->pc = 0x12365Cu;
    SET_GPR_U32(ctx, 31, 0x123664u);
    ctx->pc = 0x123660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12365Cu;
    // 0x123660: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19F830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19F830u, 0x12365Cu, 0x123664u)) {
        return;
    }
    ctx->pc = 0x123664u;
label_123664:
    // 0x123664: 0x2ae20032  slti        $v0, $s7, 0x32
    ctx->pc = 0x123664u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)50) ? 1 : 0);
label_123668:
    // 0x123668: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_12366c:
    if (ctx->pc == 0x12366Cu) {
        ctx->pc = 0x12366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123668u;
        // 0x12366c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123670u;
        goto label_123670;
    }
    ctx->pc = 0x123668u;
    {
        const bool branch_taken_0x123668 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12366Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123668u;
        // 0x12366c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123668) {
            ctx->pc = 0x123688u;
            goto label_123688;
        }
    }
    ctx->pc = 0x123670u;
label_123670:
    // 0x123670: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x123670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_123674:
    // 0x123674: 0x2445be50  addiu       $a1, $v0, -0x41B0
    ctx->pc = 0x123674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950480));
label_123678:
    // 0x123678: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x123678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12367c:
    // 0x12367c: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12367cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_123680:
    // 0x123680: 0x40f809  jalr        $v0
label_123684:
    if (ctx->pc == 0x123684u) {
        ctx->pc = 0x123684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123680u;
        // 0x123684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123688u;
        goto label_123688;
    }
    ctx->pc = 0x123680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123688u);
        ctx->pc = 0x123684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123680u;
        // 0x123684: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123680u, 0x123688u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123688u;
label_123688:
    // 0x123688: 0x16a0ff9f  bnez        $s5, . + 4 + (-0x61 << 2)
label_12368c:
    if (ctx->pc == 0x12368Cu) {
        ctx->pc = 0x12368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123688u;
        // 0x12368c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123690u;
        goto label_123690;
    }
    ctx->pc = 0x123688u;
    {
        const bool branch_taken_0x123688 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x12368Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123688u;
        // 0x12368c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123688) {
            ctx->pc = 0x123508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_123508;
        }
    }
    ctx->pc = 0x123690u;
label_123690:
    // 0x123690: 0x57c00026  bnel        $fp, $zero, . + 4 + (0x26 << 2)
label_123694:
    if (ctx->pc == 0x123694u) {
        ctx->pc = 0x123694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123690u;
        // 0x123694: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123698u;
        goto label_123698;
    }
    ctx->pc = 0x123690u;
    {
        const bool branch_taken_0x123690 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x123690) {
            ctx->pc = 0x123694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123690u;
            // 0x123694: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12372Cu;
            goto label_12372c;
        }
    }
    ctx->pc = 0x123698u;
label_123698:
    // 0x123698: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x123698u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
label_12369c:
    // 0x12369c: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x12369cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1236a0:
    // 0x1236a0: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x1236a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
label_1236a4:
    // 0x1236a4: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x1236a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_1236a8:
    // 0x1236a8: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x1236a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_1236ac:
    // 0x1236ac: 0x84640280  lh          $a0, 0x280($v1)
    ctx->pc = 0x1236acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 640)));
label_1236b0:
    // 0x1236b0: 0x8c620284  lw          $v0, 0x284($v1)
    ctx->pc = 0x1236b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 644)));
label_1236b4:
    // 0x1236b4: 0x40f809  jalr        $v0
label_1236b8:
    if (ctx->pc == 0x1236B8u) {
        ctx->pc = 0x1236B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B4u;
        // 0x1236b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236BCu;
        goto label_1236bc;
    }
    ctx->pc = 0x1236B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1236BCu);
        ctx->pc = 0x1236B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236B4u;
        // 0x1236b8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1236B4u, 0x1236BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1236BCu;
label_1236bc:
    // 0x1236bc: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1236c0:
    if (ctx->pc == 0x1236C0u) {
        ctx->pc = 0x1236C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236BCu;
        // 0x1236c0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236C4u;
        goto label_1236c4;
    }
    ctx->pc = 0x1236BCu;
    {
        const bool branch_taken_0x1236bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1236C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236BCu;
        // 0x1236c0: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236bc) {
            ctx->pc = 0x123728u;
            goto label_123728;
        }
    }
    ctx->pc = 0x1236C4u;
label_1236c4:
    // 0x1236c4: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x1236c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_1236c8:
    // 0x1236c8: 0x50450018  beql        $v0, $a1, . + 4 + (0x18 << 2)
label_1236cc:
    if (ctx->pc == 0x1236CCu) {
        ctx->pc = 0x1236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236C8u;
        // 0x1236cc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236D0u;
        goto label_1236d0;
    }
    ctx->pc = 0x1236C8u;
    {
        const bool branch_taken_0x1236c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1236c8) {
            ctx->pc = 0x1236CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1236C8u;
            // 0x1236cc: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12372Cu;
            goto label_12372c;
        }
    }
    ctx->pc = 0x1236D0u;
label_1236d0:
    // 0x1236d0: 0x10b00015  beq         $a1, $s0, . + 4 + (0x15 << 2)
label_1236d4:
    if (ctx->pc == 0x1236D4u) {
        ctx->pc = 0x1236D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236D0u;
        // 0x1236d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236D8u;
        goto label_1236d8;
    }
    ctx->pc = 0x1236D0u;
    {
        const bool branch_taken_0x1236d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 16));
        ctx->pc = 0x1236D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236D0u;
        // 0x1236d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1236d0) {
            ctx->pc = 0x123728u;
            goto label_123728;
        }
    }
    ctx->pc = 0x1236D8u;
label_1236d8:
    // 0x1236d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1236d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1236dc:
    // 0x1236dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1236dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1236e0:
    // 0x1236e0: 0xc048e08  jal         func_123820
label_1236e4:
    if (ctx->pc == 0x1236E4u) {
        ctx->pc = 0x1236E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E0u;
        // 0x1236e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236E8u;
        goto label_1236e8;
    }
    ctx->pc = 0x1236E0u;
    SET_GPR_U32(ctx, 31, 0x1236E8u);
    ctx->pc = 0x1236E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236E0u;
    // 0x1236e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x123820u, 0x1236E0u, 0x1236E8u)) {
        return;
    }
    ctx->pc = 0x1236E8u;
label_1236e8:
    // 0x1236e8: 0xc04094c  jal         func_102530
label_1236ec:
    if (ctx->pc == 0x1236ECu) {
        ctx->pc = 0x1236ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236E8u;
        // 0x1236ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1236F0u;
        goto label_1236f0;
    }
    ctx->pc = 0x1236E8u;
    SET_GPR_U32(ctx, 31, 0x1236F0u);
    ctx->pc = 0x1236ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236E8u;
    // 0x1236ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102530u, 0x1236E8u, 0x1236F0u)) {
        return;
    }
    ctx->pc = 0x1236F0u;
label_1236f0:
    // 0x1236f0: 0xc641081c  lwc1        $f1, 0x81C($s2)
    ctx->pc = 0x1236f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2076)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1236f4:
    // 0x1236f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1236f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1236f8:
    // 0x1236f8: 0xe640081c  swc1        $f0, 0x81C($s2)
    ctx->pc = 0x1236f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2076), bits); }
label_1236fc:
    // 0x1236fc: 0xc040950  jal         func_102540
label_123700:
    if (ctx->pc == 0x123700u) {
        ctx->pc = 0x123700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1236FCu;
        // 0x123700: 0xe6410820  swc1        $f1, 0x820($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2080), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123704u;
        goto label_123704;
    }
    ctx->pc = 0x1236FCu;
    SET_GPR_U32(ctx, 31, 0x123704u);
    ctx->pc = 0x123700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1236FCu;
    // 0x123700: 0xe6410820  swc1        $f1, 0x820($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2080), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102540u, 0x1236FCu, 0x123704u)) {
        return;
    }
    ctx->pc = 0x123704u;
label_123704:
    // 0x123704: 0xc6410828  lwc1        $f1, 0x828($s2)
    ctx->pc = 0x123704u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 2088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_123708:
    // 0x123708: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x123708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12370c:
    // 0x12370c: 0xe6400828  swc1        $f0, 0x828($s2)
    ctx->pc = 0x12370cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2088), bits); }
label_123710:
    // 0x123710: 0xc04095e  jal         func_102578
label_123714:
    if (ctx->pc == 0x123714u) {
        ctx->pc = 0x123714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123710u;
        // 0x123714: 0xe641082c  swc1        $f1, 0x82C($s2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2092), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x123718u;
        goto label_123718;
    }
    ctx->pc = 0x123710u;
    SET_GPR_U32(ctx, 31, 0x123718u);
    ctx->pc = 0x123714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123710u;
    // 0x123714: 0xe641082c  swc1        $f1, 0x82C($s2) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2092), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x102578u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102578u, 0x123710u, 0x123718u)) {
        return;
    }
    ctx->pc = 0x123718u;
label_123718:
    // 0x123718: 0xe6400824  swc1        $f0, 0x824($s2)
    ctx->pc = 0x123718u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 2084), bits); }
label_12371c:
    // 0x12371c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12371cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_123720:
    // 0x123720: 0xc067efe  jal         func_19FBF8
label_123724:
    if (ctx->pc == 0x123724u) {
        ctx->pc = 0x123724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123720u;
        // 0x123724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123728u;
        goto label_123728;
    }
    ctx->pc = 0x123720u;
    SET_GPR_U32(ctx, 31, 0x123728u);
    ctx->pc = 0x123724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123720u;
    // 0x123724: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FBF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FBF8u, 0x123720u, 0x123728u)) {
        return;
    }
    ctx->pc = 0x123728u;
label_123728:
    // 0x123728: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x123728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_12372c:
    // 0x12372c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x12372cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_123730:
    // 0x123730: 0x84440288  lh          $a0, 0x288($v0)
    ctx->pc = 0x123730u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 648)));
label_123734:
    // 0x123734: 0x8c43028c  lw          $v1, 0x28C($v0)
    ctx->pc = 0x123734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 652)));
label_123738:
    // 0x123738: 0x60f809  jalr        $v1
label_12373c:
    if (ctx->pc == 0x12373Cu) {
        ctx->pc = 0x12373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123738u;
        // 0x12373c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123740u;
        goto label_123740;
    }
    ctx->pc = 0x123738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x123740u);
        ctx->pc = 0x12373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123738u;
        // 0x12373c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123738u, 0x123740u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123740u;
label_123740:
    // 0x123740: 0x53c0000a  beql        $fp, $zero, . + 4 + (0xA << 2)
label_123744:
    if (ctx->pc == 0x123744u) {
        ctx->pc = 0x123744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123740u;
        // 0x123744: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123748u;
        goto label_123748;
    }
    ctx->pc = 0x123740u;
    {
        const bool branch_taken_0x123740 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x123740) {
            ctx->pc = 0x123744u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x123740u;
            // 0x123744: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12376Cu;
            goto label_12376c;
        }
    }
    ctx->pc = 0x123748u;
label_123748:
    // 0x123748: 0xae200e64  sw          $zero, 0xE64($s1)
    ctx->pc = 0x123748u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3684), GPR_U32(ctx, 0));
label_12374c:
    // 0x12374c: 0x8e42083c  lw          $v0, 0x83C($s2)
    ctx->pc = 0x12374cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2108)));
label_123750:
    // 0x123750: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x123750u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_123754:
    // 0x123754: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x123754u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_123758:
    // 0x123758: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_12375c:
    if (ctx->pc == 0x12375Cu) {
        ctx->pc = 0x12375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123758u;
        // 0x12375c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123760u;
        goto label_123760;
    }
    ctx->pc = 0x123758u;
    {
        const bool branch_taken_0x123758 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12375Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123758u;
        // 0x12375c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123758) {
            ctx->pc = 0x123764u;
            goto label_123764;
        }
    }
    ctx->pc = 0x123760u;
label_123760:
    // 0x123760: 0xae220e64  sw          $v0, 0xE64($s1)
    ctx->pc = 0x123760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3684), GPR_U32(ctx, 2));
label_123764:
    // 0x123764: 0xae200c80  sw          $zero, 0xC80($s1)
    ctx->pc = 0x123764u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3200), GPR_U32(ctx, 0));
label_123768:
    // 0x123768: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x123768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_12376c:
    // 0x12376c: 0x26250044  addiu       $a1, $s1, 0x44
    ctx->pc = 0x12376cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_123770:
    // 0x123770: 0x8e500830  lw          $s0, 0x830($s2)
    ctx->pc = 0x123770u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2096)));
label_123774:
    // 0x123774: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x123774u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_123778:
    // 0x123778: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x123778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_12377c:
    // 0x12377c: 0x40f809  jalr        $v0
label_123780:
    if (ctx->pc == 0x123780u) {
        ctx->pc = 0x123780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12377Cu;
        // 0x123780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123784u;
        goto label_123784;
    }
    ctx->pc = 0x12377Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x123784u);
        ctx->pc = 0x123780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12377Cu;
        // 0x123780: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12377Cu, 0x123784u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x123784u;
label_123784:
    // 0x123784: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x123784u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_123788:
    // 0x123788: 0x8e220ca8  lw          $v0, 0xCA8($s1)
    ctx->pc = 0x123788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3240)));
label_12378c:
    // 0x12378c: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
label_123790:
    if (ctx->pc == 0x123790u) {
        ctx->pc = 0x123794u;
        goto label_123794;
    }
    ctx->pc = 0x12378Cu;
    {
        const bool branch_taken_0x12378c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x12378c) {
            ctx->pc = 0x1237A0u;
            goto label_1237a0;
        }
    }
    ctx->pc = 0x123794u;
label_123794:
    // 0x123794: 0xae300ca8  sw          $s0, 0xCA8($s1)
    ctx->pc = 0x123794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3240), GPR_U32(ctx, 16));
label_123798:
    // 0x123798: 0xc049892  jal         func_126248
label_12379c:
    if (ctx->pc == 0x12379Cu) {
        ctx->pc = 0x12379Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123798u;
        // 0x12379c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237A0u;
        goto label_1237a0;
    }
    ctx->pc = 0x123798u;
    SET_GPR_U32(ctx, 31, 0x1237A0u);
    ctx->pc = 0x12379Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123798u;
    // 0x12379c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126248u, 0x123798u, 0x1237A0u)) {
        return;
    }
    ctx->pc = 0x1237A0u;
label_1237a0:
    // 0x1237a0: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_1237a4:
    if (ctx->pc == 0x1237A4u) {
        ctx->pc = 0x1237A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A0u;
        // 0x1237a4: 0x8e220ca0  lw          $v0, 0xCA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237A8u;
        goto label_1237a8;
    }
    ctx->pc = 0x1237A0u;
    {
        const bool branch_taken_0x1237a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A0u;
        // 0x1237a4: 0x8e220ca0  lw          $v0, 0xCA0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237a0) {
            ctx->pc = 0x1237BCu;
            goto label_1237bc;
        }
    }
    ctx->pc = 0x1237A8u;
label_1237a8:
    // 0x1237a8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1237ac:
    if (ctx->pc == 0x1237ACu) {
        ctx->pc = 0x1237ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A8u;
        // 0x1237ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237B0u;
        goto label_1237b0;
    }
    ctx->pc = 0x1237A8u;
    {
        const bool branch_taken_0x1237a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1237ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237A8u;
        // 0x1237ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237a8) {
            ctx->pc = 0x1237DCu;
            goto label_1237dc;
        }
    }
    ctx->pc = 0x1237B0u;
label_1237b0:
    // 0x1237b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1237b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1237b4:
    // 0x1237b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_1237b8:
    if (ctx->pc == 0x1237B8u) {
        ctx->pc = 0x1237B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237B4u;
        // 0x1237b8: 0xae220ca0  sw          $v0, 0xCA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237BCu;
        goto label_1237bc;
    }
    ctx->pc = 0x1237B4u;
    {
        const bool branch_taken_0x1237b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237B4u;
        // 0x1237b8: 0xae220ca0  sw          $v0, 0xCA0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237b4) {
            ctx->pc = 0x1237DCu;
            goto label_1237dc;
        }
    }
    ctx->pc = 0x1237BCu;
label_1237bc:
    // 0x1237bc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1237c0:
    if (ctx->pc == 0x1237C0u) {
        ctx->pc = 0x1237C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237BCu;
        // 0x1237c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237C4u;
        goto label_1237c4;
    }
    ctx->pc = 0x1237BCu;
    {
        const bool branch_taken_0x1237bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1237C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237BCu;
        // 0x1237c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1237bc) {
            ctx->pc = 0x1237DCu;
            goto label_1237dc;
        }
    }
    ctx->pc = 0x1237C4u;
label_1237c4:
    // 0x1237c4: 0xae200ca0  sw          $zero, 0xCA0($s1)
    ctx->pc = 0x1237c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3232), GPR_U32(ctx, 0));
label_1237c8:
    // 0x1237c8: 0xc049892  jal         func_126248
label_1237cc:
    if (ctx->pc == 0x1237CCu) {
        ctx->pc = 0x1237CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237C8u;
        // 0x1237cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237D0u;
        goto label_1237d0;
    }
    ctx->pc = 0x1237C8u;
    SET_GPR_U32(ctx, 31, 0x1237D0u);
    ctx->pc = 0x1237CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237C8u;
    // 0x1237cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126248u, 0x1237C8u, 0x1237D0u)) {
        return;
    }
    ctx->pc = 0x1237D0u;
label_1237d0:
    // 0x1237d0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1237d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1237d4:
    // 0x1237d4: 0xae220ca8  sw          $v0, 0xCA8($s1)
    ctx->pc = 0x1237d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3240), GPR_U32(ctx, 2));
label_1237d8:
    // 0x1237d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1237d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1237dc:
    // 0x1237dc: 0xc049826  jal         func_126098
label_1237e0:
    if (ctx->pc == 0x1237E0u) {
        ctx->pc = 0x1237E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1237DCu;
        // 0x1237e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1237E4u;
        goto label_1237e4;
    }
    ctx->pc = 0x1237DCu;
    SET_GPR_U32(ctx, 31, 0x1237E4u);
    ctx->pc = 0x1237E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1237DCu;
    // 0x1237e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x126098u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x126098u, 0x1237DCu, 0x1237E4u)) {
        return;
    }
    ctx->pc = 0x1237E4u;
label_1237e4:
    // 0x1237e4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1237e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1237e8:
    // 0x1237e8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1237e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1237ec:
    // 0x1237ec: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1237ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1237f0:
    // 0x1237f0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1237f0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1237f4:
    // 0x1237f4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1237f4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1237f8:
    // 0x1237f8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1237f8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1237fc:
    // 0x1237fc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1237fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_123800:
    // 0x123800: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x123800u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_123804:
    // 0x123804: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x123804u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_123808:
    // 0x123808: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x123808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_12380c:
    // 0x12380c: 0xc7b500b8  lwc1        $f21, 0xB8($sp)
    ctx->pc = 0x12380cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_123810:
    // 0x123810: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x123810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_123814:
    // 0x123814: 0x3e00008  jr          $ra
label_123818:
    if (ctx->pc == 0x123818u) {
        ctx->pc = 0x123818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123814u;
        // 0x123818: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12381Cu;
        goto label_12381c;
    }
    ctx->pc = 0x123814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123814u;
        // 0x123818: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12381Cu;
label_12381c:
    // 0x12381c: 0x0  nop
    ctx->pc = 0x12381cu;
    // NOP
    ctx->pc = 0x123820u;
}
