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

// Function: sub_001EF500
// Address: 0x1ef500 - 0x1ef8a0
void sub_001EF500_0x1ef500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EF500_0x1ef500");
#endif

    switch (ctx->pc) {
        case 0x1ef500u: goto label_1ef500;
        case 0x1ef504u: goto label_1ef504;
        case 0x1ef508u: goto label_1ef508;
        case 0x1ef50cu: goto label_1ef50c;
        case 0x1ef510u: goto label_1ef510;
        case 0x1ef514u: goto label_1ef514;
        case 0x1ef518u: goto label_1ef518;
        case 0x1ef51cu: goto label_1ef51c;
        case 0x1ef520u: goto label_1ef520;
        case 0x1ef524u: goto label_1ef524;
        case 0x1ef528u: goto label_1ef528;
        case 0x1ef52cu: goto label_1ef52c;
        case 0x1ef530u: goto label_1ef530;
        case 0x1ef534u: goto label_1ef534;
        case 0x1ef538u: goto label_1ef538;
        case 0x1ef53cu: goto label_1ef53c;
        case 0x1ef540u: goto label_1ef540;
        case 0x1ef544u: goto label_1ef544;
        case 0x1ef548u: goto label_1ef548;
        case 0x1ef54cu: goto label_1ef54c;
        case 0x1ef550u: goto label_1ef550;
        case 0x1ef554u: goto label_1ef554;
        case 0x1ef558u: goto label_1ef558;
        case 0x1ef55cu: goto label_1ef55c;
        case 0x1ef560u: goto label_1ef560;
        case 0x1ef564u: goto label_1ef564;
        case 0x1ef568u: goto label_1ef568;
        case 0x1ef56cu: goto label_1ef56c;
        case 0x1ef570u: goto label_1ef570;
        case 0x1ef574u: goto label_1ef574;
        case 0x1ef578u: goto label_1ef578;
        case 0x1ef57cu: goto label_1ef57c;
        case 0x1ef580u: goto label_1ef580;
        case 0x1ef584u: goto label_1ef584;
        case 0x1ef588u: goto label_1ef588;
        case 0x1ef58cu: goto label_1ef58c;
        case 0x1ef590u: goto label_1ef590;
        case 0x1ef594u: goto label_1ef594;
        case 0x1ef598u: goto label_1ef598;
        case 0x1ef59cu: goto label_1ef59c;
        case 0x1ef5a0u: goto label_1ef5a0;
        case 0x1ef5a4u: goto label_1ef5a4;
        case 0x1ef5a8u: goto label_1ef5a8;
        case 0x1ef5acu: goto label_1ef5ac;
        case 0x1ef5b0u: goto label_1ef5b0;
        case 0x1ef5b4u: goto label_1ef5b4;
        case 0x1ef5b8u: goto label_1ef5b8;
        case 0x1ef5bcu: goto label_1ef5bc;
        case 0x1ef5c0u: goto label_1ef5c0;
        case 0x1ef5c4u: goto label_1ef5c4;
        case 0x1ef5c8u: goto label_1ef5c8;
        case 0x1ef5ccu: goto label_1ef5cc;
        case 0x1ef5d0u: goto label_1ef5d0;
        case 0x1ef5d4u: goto label_1ef5d4;
        case 0x1ef5d8u: goto label_1ef5d8;
        case 0x1ef5dcu: goto label_1ef5dc;
        case 0x1ef5e0u: goto label_1ef5e0;
        case 0x1ef5e4u: goto label_1ef5e4;
        case 0x1ef5e8u: goto label_1ef5e8;
        case 0x1ef5ecu: goto label_1ef5ec;
        case 0x1ef5f0u: goto label_1ef5f0;
        case 0x1ef5f4u: goto label_1ef5f4;
        case 0x1ef5f8u: goto label_1ef5f8;
        case 0x1ef5fcu: goto label_1ef5fc;
        case 0x1ef600u: goto label_1ef600;
        case 0x1ef604u: goto label_1ef604;
        case 0x1ef608u: goto label_1ef608;
        case 0x1ef60cu: goto label_1ef60c;
        case 0x1ef610u: goto label_1ef610;
        case 0x1ef614u: goto label_1ef614;
        case 0x1ef618u: goto label_1ef618;
        case 0x1ef61cu: goto label_1ef61c;
        case 0x1ef620u: goto label_1ef620;
        case 0x1ef624u: goto label_1ef624;
        case 0x1ef628u: goto label_1ef628;
        case 0x1ef62cu: goto label_1ef62c;
        case 0x1ef630u: goto label_1ef630;
        case 0x1ef634u: goto label_1ef634;
        case 0x1ef638u: goto label_1ef638;
        case 0x1ef63cu: goto label_1ef63c;
        case 0x1ef640u: goto label_1ef640;
        case 0x1ef644u: goto label_1ef644;
        case 0x1ef648u: goto label_1ef648;
        case 0x1ef64cu: goto label_1ef64c;
        case 0x1ef650u: goto label_1ef650;
        case 0x1ef654u: goto label_1ef654;
        case 0x1ef658u: goto label_1ef658;
        case 0x1ef65cu: goto label_1ef65c;
        case 0x1ef660u: goto label_1ef660;
        case 0x1ef664u: goto label_1ef664;
        case 0x1ef668u: goto label_1ef668;
        case 0x1ef66cu: goto label_1ef66c;
        case 0x1ef670u: goto label_1ef670;
        case 0x1ef674u: goto label_1ef674;
        case 0x1ef678u: goto label_1ef678;
        case 0x1ef67cu: goto label_1ef67c;
        case 0x1ef680u: goto label_1ef680;
        case 0x1ef684u: goto label_1ef684;
        case 0x1ef688u: goto label_1ef688;
        case 0x1ef68cu: goto label_1ef68c;
        case 0x1ef690u: goto label_1ef690;
        case 0x1ef694u: goto label_1ef694;
        case 0x1ef698u: goto label_1ef698;
        case 0x1ef69cu: goto label_1ef69c;
        case 0x1ef6a0u: goto label_1ef6a0;
        case 0x1ef6a4u: goto label_1ef6a4;
        case 0x1ef6a8u: goto label_1ef6a8;
        case 0x1ef6acu: goto label_1ef6ac;
        case 0x1ef6b0u: goto label_1ef6b0;
        case 0x1ef6b4u: goto label_1ef6b4;
        case 0x1ef6b8u: goto label_1ef6b8;
        case 0x1ef6bcu: goto label_1ef6bc;
        case 0x1ef6c0u: goto label_1ef6c0;
        case 0x1ef6c4u: goto label_1ef6c4;
        case 0x1ef6c8u: goto label_1ef6c8;
        case 0x1ef6ccu: goto label_1ef6cc;
        case 0x1ef6d0u: goto label_1ef6d0;
        case 0x1ef6d4u: goto label_1ef6d4;
        case 0x1ef6d8u: goto label_1ef6d8;
        case 0x1ef6dcu: goto label_1ef6dc;
        case 0x1ef6e0u: goto label_1ef6e0;
        case 0x1ef6e4u: goto label_1ef6e4;
        case 0x1ef6e8u: goto label_1ef6e8;
        case 0x1ef6ecu: goto label_1ef6ec;
        case 0x1ef6f0u: goto label_1ef6f0;
        case 0x1ef6f4u: goto label_1ef6f4;
        case 0x1ef6f8u: goto label_1ef6f8;
        case 0x1ef6fcu: goto label_1ef6fc;
        case 0x1ef700u: goto label_1ef700;
        case 0x1ef704u: goto label_1ef704;
        case 0x1ef708u: goto label_1ef708;
        case 0x1ef70cu: goto label_1ef70c;
        case 0x1ef710u: goto label_1ef710;
        case 0x1ef714u: goto label_1ef714;
        case 0x1ef718u: goto label_1ef718;
        case 0x1ef71cu: goto label_1ef71c;
        case 0x1ef720u: goto label_1ef720;
        case 0x1ef724u: goto label_1ef724;
        case 0x1ef728u: goto label_1ef728;
        case 0x1ef72cu: goto label_1ef72c;
        case 0x1ef730u: goto label_1ef730;
        case 0x1ef734u: goto label_1ef734;
        case 0x1ef738u: goto label_1ef738;
        case 0x1ef73cu: goto label_1ef73c;
        case 0x1ef740u: goto label_1ef740;
        case 0x1ef744u: goto label_1ef744;
        case 0x1ef748u: goto label_1ef748;
        case 0x1ef74cu: goto label_1ef74c;
        case 0x1ef750u: goto label_1ef750;
        case 0x1ef754u: goto label_1ef754;
        case 0x1ef758u: goto label_1ef758;
        case 0x1ef75cu: goto label_1ef75c;
        case 0x1ef760u: goto label_1ef760;
        case 0x1ef764u: goto label_1ef764;
        case 0x1ef768u: goto label_1ef768;
        case 0x1ef76cu: goto label_1ef76c;
        case 0x1ef770u: goto label_1ef770;
        case 0x1ef774u: goto label_1ef774;
        case 0x1ef778u: goto label_1ef778;
        case 0x1ef77cu: goto label_1ef77c;
        case 0x1ef780u: goto label_1ef780;
        case 0x1ef784u: goto label_1ef784;
        case 0x1ef788u: goto label_1ef788;
        case 0x1ef78cu: goto label_1ef78c;
        case 0x1ef790u: goto label_1ef790;
        case 0x1ef794u: goto label_1ef794;
        case 0x1ef798u: goto label_1ef798;
        case 0x1ef79cu: goto label_1ef79c;
        case 0x1ef7a0u: goto label_1ef7a0;
        case 0x1ef7a4u: goto label_1ef7a4;
        case 0x1ef7a8u: goto label_1ef7a8;
        case 0x1ef7acu: goto label_1ef7ac;
        case 0x1ef7b0u: goto label_1ef7b0;
        case 0x1ef7b4u: goto label_1ef7b4;
        case 0x1ef7b8u: goto label_1ef7b8;
        case 0x1ef7bcu: goto label_1ef7bc;
        case 0x1ef7c0u: goto label_1ef7c0;
        case 0x1ef7c4u: goto label_1ef7c4;
        case 0x1ef7c8u: goto label_1ef7c8;
        case 0x1ef7ccu: goto label_1ef7cc;
        case 0x1ef7d0u: goto label_1ef7d0;
        case 0x1ef7d4u: goto label_1ef7d4;
        case 0x1ef7d8u: goto label_1ef7d8;
        case 0x1ef7dcu: goto label_1ef7dc;
        case 0x1ef7e0u: goto label_1ef7e0;
        case 0x1ef7e4u: goto label_1ef7e4;
        case 0x1ef7e8u: goto label_1ef7e8;
        case 0x1ef7ecu: goto label_1ef7ec;
        case 0x1ef7f0u: goto label_1ef7f0;
        case 0x1ef7f4u: goto label_1ef7f4;
        case 0x1ef7f8u: goto label_1ef7f8;
        case 0x1ef7fcu: goto label_1ef7fc;
        case 0x1ef800u: goto label_1ef800;
        case 0x1ef804u: goto label_1ef804;
        case 0x1ef808u: goto label_1ef808;
        case 0x1ef80cu: goto label_1ef80c;
        case 0x1ef810u: goto label_1ef810;
        case 0x1ef814u: goto label_1ef814;
        case 0x1ef818u: goto label_1ef818;
        case 0x1ef81cu: goto label_1ef81c;
        case 0x1ef820u: goto label_1ef820;
        case 0x1ef824u: goto label_1ef824;
        case 0x1ef828u: goto label_1ef828;
        case 0x1ef82cu: goto label_1ef82c;
        case 0x1ef830u: goto label_1ef830;
        case 0x1ef834u: goto label_1ef834;
        case 0x1ef838u: goto label_1ef838;
        case 0x1ef83cu: goto label_1ef83c;
        case 0x1ef840u: goto label_1ef840;
        case 0x1ef844u: goto label_1ef844;
        case 0x1ef848u: goto label_1ef848;
        case 0x1ef84cu: goto label_1ef84c;
        case 0x1ef850u: goto label_1ef850;
        case 0x1ef854u: goto label_1ef854;
        case 0x1ef858u: goto label_1ef858;
        case 0x1ef85cu: goto label_1ef85c;
        case 0x1ef860u: goto label_1ef860;
        case 0x1ef864u: goto label_1ef864;
        case 0x1ef868u: goto label_1ef868;
        case 0x1ef86cu: goto label_1ef86c;
        case 0x1ef870u: goto label_1ef870;
        case 0x1ef874u: goto label_1ef874;
        case 0x1ef878u: goto label_1ef878;
        case 0x1ef87cu: goto label_1ef87c;
        case 0x1ef880u: goto label_1ef880;
        case 0x1ef884u: goto label_1ef884;
        case 0x1ef888u: goto label_1ef888;
        case 0x1ef88cu: goto label_1ef88c;
        case 0x1ef890u: goto label_1ef890;
        case 0x1ef894u: goto label_1ef894;
        case 0x1ef898u: goto label_1ef898;
        case 0x1ef89cu: goto label_1ef89c;
        default: break;
    }

    ctx->pc = 0x1ef500u;

label_1ef500:
    // 0x1ef500: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1ef500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1ef504:
    // 0x1ef504: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1ef504u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1ef508:
    // 0x1ef508: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x1ef508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
label_1ef50c:
    // 0x1ef50c: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x1ef50cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
label_1ef510:
    // 0x1ef510: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1ef510u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef514:
    // 0x1ef514: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x1ef514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_1ef518:
    // 0x1ef518: 0x3c013b00  lui         $at, 0x3B00
    ctx->pc = 0x1ef518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15104 << 16));
label_1ef51c:
    // 0x1ef51c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef51cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef520:
    // 0x1ef520: 0xc4850024  lwc1        $f5, 0x24($a0)
    ctx->pc = 0x1ef520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ef524:
    // 0x1ef524: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x1ef524u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
label_1ef528:
    // 0x1ef528: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x1ef528u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_1ef52c:
    // 0x1ef52c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1ef52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ef530:
    // 0x1ef530: 0xc4880020  lwc1        $f8, 0x20($a0)
    ctx->pc = 0x1ef530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ef534:
    // 0x1ef534: 0x46804220  cvt.s.w     $f8, $f8
    ctx->pc = 0x1ef534u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[8], sizeof(tmp)); ctx->f[8] = FPU_CVT_S_W(tmp); }
label_1ef538:
    // 0x1ef538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1ef538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1ef53c:
    // 0x1ef53c: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1ef53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1ef540:
    // 0x1ef540: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x1ef540u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_1ef544:
    // 0x1ef544: 0x0  nop
    ctx->pc = 0x1ef544u;
    // NOP
label_1ef548:
    // 0x1ef548: 0x0  nop
    ctx->pc = 0x1ef548u;
    // NOP
label_1ef54c:
    // 0x1ef54c: 0x46012a43  div.s       $f9, $f5, $f1
    ctx->pc = 0x1ef54cu;
    ctx->f[9] = FPU_DIV_S(ctx, ctx->f[5], ctx->f[1]);
label_1ef550:
    // 0x1ef550: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x1ef550u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_1ef554:
    // 0x1ef554: 0x46004282  mul.s       $f10, $f8, $f0
    ctx->pc = 0x1ef554u;
    ctx->f[10] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
label_1ef558:
    // 0x1ef558: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1ef55c:
    if (ctx->pc == 0x1EF55Cu) {
        ctx->pc = 0x1EF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF558u;
        // 0x1ef55c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF560u;
        goto label_1ef560;
    }
    ctx->pc = 0x1EF558u;
    {
        const bool branch_taken_0x1ef558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1EF55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF558u;
        // 0x1ef55c: 0xa3a00000  sb          $zero, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef558) {
            ctx->pc = 0x1EF564u;
            goto label_1ef564;
        }
    }
    ctx->pc = 0x1EF560u;
label_1ef560:
    // 0x1ef560: 0x46001306  mov.s       $f12, $f2
    ctx->pc = 0x1ef560u;
    ctx->f[12] = FPU_MOV_S(ctx->f[2]);
label_1ef564:
    // 0x1ef564: 0x460c3834  c.lt.s      $f7, $f12
    ctx->pc = 0x1ef564u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1ef568:
    // 0x1ef568: 0x0  nop
    ctx->pc = 0x1ef568u;
    // NOP
label_1ef56c:
    // 0x1ef56c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1ef570:
    if (ctx->pc == 0x1EF570u) {
        ctx->pc = 0x1EF570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF56Cu;
        // 0x1ef570: 0x46003b06  mov.s       $f12, $f7 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[7]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF574u;
        goto label_1ef574;
    }
    ctx->pc = 0x1EF56Cu;
    {
        const bool branch_taken_0x1ef56c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1ef56c) {
            ctx->pc = 0x1EF570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1EF56Cu;
            // 0x1ef570: 0x46003b06  mov.s       $f12, $f7 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[7]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1EF574u;
            goto label_1ef574;
        }
    }
    ctx->pc = 0x1EF574u;
label_1ef574:
    // 0x1ef574: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1ef574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1ef578:
    // 0x1ef578: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ef578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef57c:
    // 0x1ef57c: 0x0  nop
    ctx->pc = 0x1ef57cu;
    // NOP
label_1ef580:
    // 0x1ef580: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x1ef580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1ef584:
    // 0x1ef584: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ef584u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ef588:
    // 0x1ef588: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ef588u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ef58c:
    // 0x1ef58c: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1ef58cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ef590:
    // 0x1ef590: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ef590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_1ef594:
    // 0x1ef594: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1ef598:
    if (ctx->pc == 0x1EF598u) {
        ctx->pc = 0x1EF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF594u;
        // 0x1ef598: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF59Cu;
        goto label_1ef59c;
    }
    ctx->pc = 0x1EF594u;
    {
        const bool branch_taken_0x1ef594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1EF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF594u;
        // 0x1ef598: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ef594) {
            ctx->pc = 0x1EF5A8u;
            goto label_1ef5a8;
        }
    }
    ctx->pc = 0x1EF59Cu;
label_1ef59c:
    // 0x1ef59c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ef59cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef5a0:
    // 0x1ef5a0: 0xa3a20003  sb          $v0, 0x3($sp)
    ctx->pc = 0x1ef5a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 2));
label_1ef5a4:
    // 0x1ef5a4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ef5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ef5a8:
    // 0x1ef5a8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1ef5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1ef5ac:
    // 0x1ef5ac: 0xc441e840  lwc1        $f1, -0x17C0($v0)
    ctx->pc = 0x1ef5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ef5b0:
    // 0x1ef5b0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ef5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1ef5b4:
    // 0x1ef5b4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1ef5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1ef5b8:
    // 0x1ef5b8: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x1ef5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
label_1ef5bc:
    // 0x1ef5bc: 0xc462e844  lwc1        $f2, -0x17BC($v1)
    ctx->pc = 0x1ef5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294961220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ef5c0:
    // 0x1ef5c0: 0x27b10010  addiu       $s1, $sp, 0x10
    ctx->pc = 0x1ef5c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ef5c4:
    // 0x1ef5c4: 0xc483e848  lwc1        $f3, -0x17B8($a0)
    ctx->pc = 0x1ef5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294961224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ef5c8:
    // 0x1ef5c8: 0xc444e838  lwc1        $f4, -0x17C8($v0)
    ctx->pc = 0x1ef5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294961208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ef5cc:
    // 0x1ef5cc: 0xc4a6e83c  lwc1        $f6, -0x17C4($a1)
    ctx->pc = 0x1ef5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294961212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ef5d0:
    // 0x1ef5d0: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x1ef5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1ef5d4:
    // 0x1ef5d4: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1ef5d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1ef5d8:
    // 0x1ef5d8: 0xe6230008  swc1        $f3, 0x8($s1)
    ctx->pc = 0x1ef5d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1ef5dc:
    // 0x1ef5dc: 0xe6270018  swc1        $f7, 0x18($s1)
    ctx->pc = 0x1ef5dcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1ef5e0:
    // 0x1ef5e0: 0xe6240010  swc1        $f4, 0x10($s1)
    ctx->pc = 0x1ef5e0u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1ef5e4:
    // 0x1ef5e4: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x1ef5e4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1ef5e8:
    // 0x1ef5e8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1ef5e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef5ec:
    // 0x1ef5ec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef5ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef5f0:
    // 0x1ef5f0: 0x0  nop
    ctx->pc = 0x1ef5f0u;
    // NOP
label_1ef5f4:
    // 0x1ef5f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef5f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef5f8:
    // 0x1ef5f8: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1ef5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1ef5fc:
    // 0x1ef5fc: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1ef5fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_1ef600:
    // 0x1ef600: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef600u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef604:
    // 0x1ef604: 0x0  nop
    ctx->pc = 0x1ef604u;
    // NOP
label_1ef608:
    // 0x1ef608: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef608u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef60c:
    // 0x1ef60c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1ef60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1ef610:
    // 0x1ef610: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1ef610u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1ef614:
    // 0x1ef614: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef614u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef618:
    // 0x1ef618: 0x0  nop
    ctx->pc = 0x1ef618u;
    // NOP
label_1ef61c:
    // 0x1ef61c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef61cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef620:
    // 0x1ef620: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1ef620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1ef624:
    // 0x1ef624: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1ef624u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1ef628:
    // 0x1ef628: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef628u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef62c:
    // 0x1ef62c: 0x0  nop
    ctx->pc = 0x1ef62cu;
    // NOP
label_1ef630:
    // 0x1ef630: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef630u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef634:
    // 0x1ef634: 0xe620002c  swc1        $f0, 0x2C($s1)
    ctx->pc = 0x1ef634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1ef638:
    // 0x1ef638: 0x27a30050  addiu       $v1, $sp, 0x50
    ctx->pc = 0x1ef638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_1ef63c:
    // 0x1ef63c: 0x46051140  add.s       $f5, $f2, $f5
    ctx->pc = 0x1ef63cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1ef640:
    // 0x1ef640: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x1ef640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_1ef644:
    // 0x1ef644: 0xe4640010  swc1        $f4, 0x10($v1)
    ctx->pc = 0x1ef644u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1ef648:
    // 0x1ef648: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x1ef648u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ef64c:
    // 0x1ef64c: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1ef64cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1ef650:
    // 0x1ef650: 0xe4670018  swc1        $f7, 0x18($v1)
    ctx->pc = 0x1ef650u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1ef654:
    // 0x1ef654: 0xe4690014  swc1        $f9, 0x14($v1)
    ctx->pc = 0x1ef654u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1ef658:
    // 0x1ef658: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1ef658u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef65c:
    // 0x1ef65c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef65cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef660:
    // 0x1ef660: 0x0  nop
    ctx->pc = 0x1ef660u;
    // NOP
label_1ef664:
    // 0x1ef664: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef668:
    // 0x1ef668: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ef668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1ef66c:
    // 0x1ef66c: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1ef66cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_1ef670:
    // 0x1ef670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef674:
    // 0x1ef674: 0x0  nop
    ctx->pc = 0x1ef674u;
    // NOP
label_1ef678:
    // 0x1ef678: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef678u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef67c:
    // 0x1ef67c: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef67cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1ef680:
    // 0x1ef680: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1ef680u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1ef684:
    // 0x1ef684: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef684u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef688:
    // 0x1ef688: 0x0  nop
    ctx->pc = 0x1ef688u;
    // NOP
label_1ef68c:
    // 0x1ef68c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef68cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef690:
    // 0x1ef690: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1ef690u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1ef694:
    // 0x1ef694: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1ef694u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1ef698:
    // 0x1ef698: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef698u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef69c:
    // 0x1ef69c: 0x0  nop
    ctx->pc = 0x1ef69cu;
    // NOP
label_1ef6a0:
    // 0x1ef6a0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef6a0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef6a4:
    // 0x1ef6a4: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1ef6a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_1ef6a8:
    // 0x1ef6a8: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1ef6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1ef6ac:
    // 0x1ef6ac: 0x46080840  add.s       $f1, $f1, $f8
    ctx->pc = 0x1ef6acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[8]);
label_1ef6b0:
    // 0x1ef6b0: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x1ef6b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_1ef6b4:
    // 0x1ef6b4: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1ef6b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1ef6b8:
    // 0x1ef6b8: 0xe4860014  swc1        $f6, 0x14($a0)
    ctx->pc = 0x1ef6b8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1ef6bc:
    // 0x1ef6bc: 0xe4830008  swc1        $f3, 0x8($a0)
    ctx->pc = 0x1ef6bcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1ef6c0:
    // 0x1ef6c0: 0xe4870018  swc1        $f7, 0x18($a0)
    ctx->pc = 0x1ef6c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1ef6c4:
    // 0x1ef6c4: 0xe48a0010  swc1        $f10, 0x10($a0)
    ctx->pc = 0x1ef6c4u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1ef6c8:
    // 0x1ef6c8: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1ef6c8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef6cc:
    // 0x1ef6cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef6ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef6d0:
    // 0x1ef6d0: 0x0  nop
    ctx->pc = 0x1ef6d0u;
    // NOP
label_1ef6d4:
    // 0x1ef6d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef6d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef6d8:
    // 0x1ef6d8: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x1ef6d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1ef6dc:
    // 0x1ef6dc: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1ef6dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_1ef6e0:
    // 0x1ef6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef6e4:
    // 0x1ef6e4: 0x0  nop
    ctx->pc = 0x1ef6e4u;
    // NOP
label_1ef6e8:
    // 0x1ef6e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef6e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef6ec:
    // 0x1ef6ec: 0xe4800024  swc1        $f0, 0x24($a0)
    ctx->pc = 0x1ef6ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1ef6f0:
    // 0x1ef6f0: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1ef6f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1ef6f4:
    // 0x1ef6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef6f8:
    // 0x1ef6f8: 0x0  nop
    ctx->pc = 0x1ef6f8u;
    // NOP
label_1ef6fc:
    // 0x1ef6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef700:
    // 0x1ef700: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1ef700u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1ef704:
    // 0x1ef704: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1ef704u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1ef708:
    // 0x1ef708: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef708u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef70c:
    // 0x1ef70c: 0x0  nop
    ctx->pc = 0x1ef70cu;
    // NOP
label_1ef710:
    // 0x1ef710: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef710u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef714:
    // 0x1ef714: 0xe480002c  swc1        $f0, 0x2C($a0)
    ctx->pc = 0x1ef714u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 44), bits); }
label_1ef718:
    // 0x1ef718: 0x27a300d0  addiu       $v1, $sp, 0xD0
    ctx->pc = 0x1ef718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ef71c:
    // 0x1ef71c: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x1ef71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1ef720:
    // 0x1ef720: 0xe4650004  swc1        $f5, 0x4($v1)
    ctx->pc = 0x1ef720u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_1ef724:
    // 0x1ef724: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x1ef724u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_1ef728:
    // 0x1ef728: 0xe4670018  swc1        $f7, 0x18($v1)
    ctx->pc = 0x1ef728u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_1ef72c:
    // 0x1ef72c: 0xe46a0010  swc1        $f10, 0x10($v1)
    ctx->pc = 0x1ef72cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_1ef730:
    // 0x1ef730: 0xe4690014  swc1        $f9, 0x14($v1)
    ctx->pc = 0x1ef730u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_1ef734:
    // 0x1ef734: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x1ef734u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1ef738:
    // 0x1ef738: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef738u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef73c:
    // 0x1ef73c: 0x0  nop
    ctx->pc = 0x1ef73cu;
    // NOP
label_1ef740:
    // 0x1ef740: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef740u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef744:
    // 0x1ef744: 0xe4600020  swc1        $f0, 0x20($v1)
    ctx->pc = 0x1ef744u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 32), bits); }
label_1ef748:
    // 0x1ef748: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x1ef748u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_1ef74c:
    // 0x1ef74c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef750:
    // 0x1ef750: 0x0  nop
    ctx->pc = 0x1ef750u;
    // NOP
label_1ef754:
    // 0x1ef754: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef758:
    // 0x1ef758: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x1ef758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
label_1ef75c:
    // 0x1ef75c: 0x93a20002  lbu         $v0, 0x2($sp)
    ctx->pc = 0x1ef75cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
label_1ef760:
    // 0x1ef760: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef760u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef764:
    // 0x1ef764: 0x0  nop
    ctx->pc = 0x1ef764u;
    // NOP
label_1ef768:
    // 0x1ef768: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef768u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef76c:
    // 0x1ef76c: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x1ef76cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
label_1ef770:
    // 0x1ef770: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x1ef770u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
label_1ef774:
    // 0x1ef774: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1ef774u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ef778:
    // 0x1ef778: 0x0  nop
    ctx->pc = 0x1ef778u;
    // NOP
label_1ef77c:
    // 0x1ef77c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ef77cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ef780:
    // 0x1ef780: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x1ef780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_1ef784:
    // 0x1ef784: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x1ef784u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_1ef788:
    // 0x1ef788: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1ef788u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1ef78c:
    // 0x1ef78c: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1ef78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ef790:
    // 0x1ef790: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef794:
    // 0x1ef794: 0x40f809  jalr        $v0
label_1ef798:
    if (ctx->pc == 0x1EF798u) {
        ctx->pc = 0x1EF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF794u;
        // 0x1ef798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF79Cu;
        goto label_1ef79c;
    }
    ctx->pc = 0x1EF794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF79Cu);
        ctx->pc = 0x1EF798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF794u;
        // 0x1ef798: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF794u, 0x1EF79Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF79Cu;
label_1ef79c:
    // 0x1ef79c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7a0:
    // 0x1ef7a0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1ef7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ef7a4:
    // 0x1ef7a4: 0x40f809  jalr        $v0
label_1ef7a8:
    if (ctx->pc == 0x1EF7A8u) {
        ctx->pc = 0x1EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7A4u;
        // 0x1ef7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7ACu;
        goto label_1ef7ac;
    }
    ctx->pc = 0x1EF7A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7ACu);
        ctx->pc = 0x1EF7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7A4u;
        // 0x1ef7a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7A4u, 0x1EF7ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7ACu;
label_1ef7ac:
    // 0x1ef7ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7b0:
    // 0x1ef7b0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ef7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ef7b4:
    // 0x1ef7b4: 0x40f809  jalr        $v0
label_1ef7b8:
    if (ctx->pc == 0x1EF7B8u) {
        ctx->pc = 0x1EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B4u;
        // 0x1ef7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7BCu;
        goto label_1ef7bc;
    }
    ctx->pc = 0x1EF7B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7BCu);
        ctx->pc = 0x1EF7B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7B4u;
        // 0x1ef7b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7B4u, 0x1EF7BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7BCu;
label_1ef7bc:
    // 0x1ef7bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7c0:
    // 0x1ef7c0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1ef7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1ef7c4:
    // 0x1ef7c4: 0x40f809  jalr        $v0
label_1ef7c8:
    if (ctx->pc == 0x1EF7C8u) {
        ctx->pc = 0x1EF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7C4u;
        // 0x1ef7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7CCu;
        goto label_1ef7cc;
    }
    ctx->pc = 0x1EF7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7CCu);
        ctx->pc = 0x1EF7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7C4u;
        // 0x1ef7c8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7C4u, 0x1EF7CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7CCu;
label_1ef7cc:
    // 0x1ef7cc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7d0:
    // 0x1ef7d0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1ef7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ef7d4:
    // 0x1ef7d4: 0x40f809  jalr        $v0
label_1ef7d8:
    if (ctx->pc == 0x1EF7D8u) {
        ctx->pc = 0x1EF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D4u;
        // 0x1ef7d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7DCu;
        goto label_1ef7dc;
    }
    ctx->pc = 0x1EF7D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7DCu);
        ctx->pc = 0x1EF7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7D4u;
        // 0x1ef7d8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7D4u, 0x1EF7DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7DCu;
label_1ef7dc:
    // 0x1ef7dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7e0:
    // 0x1ef7e0: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1ef7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_1ef7e4:
    // 0x1ef7e4: 0x40f809  jalr        $v0
label_1ef7e8:
    if (ctx->pc == 0x1EF7E8u) {
        ctx->pc = 0x1EF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7E4u;
        // 0x1ef7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7ECu;
        goto label_1ef7ec;
    }
    ctx->pc = 0x1EF7E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7ECu);
        ctx->pc = 0x1EF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7E4u;
        // 0x1ef7e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7E4u, 0x1EF7ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7ECu;
label_1ef7ec:
    // 0x1ef7ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef7f0:
    // 0x1ef7f0: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ef7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ef7f4:
    // 0x1ef7f4: 0x40f809  jalr        $v0
label_1ef7f8:
    if (ctx->pc == 0x1EF7F8u) {
        ctx->pc = 0x1EF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7F4u;
        // 0x1ef7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF7FCu;
        goto label_1ef7fc;
    }
    ctx->pc = 0x1EF7F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF7FCu);
        ctx->pc = 0x1EF7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF7F4u;
        // 0x1ef7f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF7F4u, 0x1EF7FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF7FCu;
label_1ef7fc:
    // 0x1ef7fc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef800:
    // 0x1ef800: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ef800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ef804:
    // 0x1ef804: 0x40f809  jalr        $v0
label_1ef808:
    if (ctx->pc == 0x1EF808u) {
        ctx->pc = 0x1EF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF804u;
        // 0x1ef808: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF80Cu;
        goto label_1ef80c;
    }
    ctx->pc = 0x1EF804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF80Cu);
        ctx->pc = 0x1EF808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF804u;
        // 0x1ef808: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF804u, 0x1EF80Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF80Cu;
label_1ef80c:
    // 0x1ef80c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef810:
    // 0x1ef810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ef810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ef814:
    // 0x1ef814: 0x40f809  jalr        $v0
label_1ef818:
    if (ctx->pc == 0x1EF818u) {
        ctx->pc = 0x1EF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF814u;
        // 0x1ef818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF81Cu;
        goto label_1ef81c;
    }
    ctx->pc = 0x1EF814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF81Cu);
        ctx->pc = 0x1EF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF814u;
        // 0x1ef818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF814u, 0x1EF81Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF81Cu;
label_1ef81c:
    // 0x1ef81c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1ef81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1ef820:
    // 0x1ef820: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1ef820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ef824:
    // 0x1ef824: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1ef824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ef828:
    // 0x1ef828: 0x40f809  jalr        $v0
label_1ef82c:
    if (ctx->pc == 0x1EF82Cu) {
        ctx->pc = 0x1EF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF828u;
        // 0x1ef82c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF830u;
        goto label_1ef830;
    }
    ctx->pc = 0x1EF828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF830u);
        ctx->pc = 0x1EF82Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF828u;
        // 0x1ef82c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF828u, 0x1EF830u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF830u;
label_1ef830:
    // 0x1ef830: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef834:
    // 0x1ef834: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x1ef834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1ef838:
    // 0x1ef838: 0x40f809  jalr        $v0
label_1ef83c:
    if (ctx->pc == 0x1EF83Cu) {
        ctx->pc = 0x1EF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF838u;
        // 0x1ef83c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF840u;
        goto label_1ef840;
    }
    ctx->pc = 0x1EF838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF840u);
        ctx->pc = 0x1EF83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF838u;
        // 0x1ef83c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF838u, 0x1EF840u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF840u;
label_1ef840:
    // 0x1ef840: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef844:
    // 0x1ef844: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1ef844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ef848:
    // 0x1ef848: 0x40f809  jalr        $v0
label_1ef84c:
    if (ctx->pc == 0x1EF84Cu) {
        ctx->pc = 0x1EF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF848u;
        // 0x1ef84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF850u;
        goto label_1ef850;
    }
    ctx->pc = 0x1EF848u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF850u);
        ctx->pc = 0x1EF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF848u;
        // 0x1ef84c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF848u, 0x1EF850u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF850u;
label_1ef850:
    // 0x1ef850: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef854:
    // 0x1ef854: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1ef854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ef858:
    // 0x1ef858: 0x40f809  jalr        $v0
label_1ef85c:
    if (ctx->pc == 0x1EF85Cu) {
        ctx->pc = 0x1EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF858u;
        // 0x1ef85c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF860u;
        goto label_1ef860;
    }
    ctx->pc = 0x1EF858u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF860u);
        ctx->pc = 0x1EF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF858u;
        // 0x1ef85c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF858u, 0x1EF860u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF860u;
label_1ef860:
    // 0x1ef860: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef864:
    // 0x1ef864: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1ef864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ef868:
    // 0x1ef868: 0x40f809  jalr        $v0
label_1ef86c:
    if (ctx->pc == 0x1EF86Cu) {
        ctx->pc = 0x1EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF868u;
        // 0x1ef86c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF870u;
        goto label_1ef870;
    }
    ctx->pc = 0x1EF868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF870u);
        ctx->pc = 0x1EF86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF868u;
        // 0x1ef86c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF868u, 0x1EF870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF870u;
label_1ef870:
    // 0x1ef870: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ef870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ef874:
    // 0x1ef874: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ef874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ef878:
    // 0x1ef878: 0x40f809  jalr        $v0
label_1ef87c:
    if (ctx->pc == 0x1EF87Cu) {
        ctx->pc = 0x1EF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF878u;
        // 0x1ef87c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF880u;
        goto label_1ef880;
    }
    ctx->pc = 0x1EF878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EF880u);
        ctx->pc = 0x1EF87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF878u;
        // 0x1ef87c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF878u, 0x1EF880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EF880u;
label_1ef880:
    // 0x1ef880: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1ef880u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_1ef884:
    // 0x1ef884: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1ef884u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1ef888:
    // 0x1ef888: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x1ef888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_1ef88c:
    // 0x1ef88c: 0x3e00008  jr          $ra
label_1ef890:
    if (ctx->pc == 0x1EF890u) {
        ctx->pc = 0x1EF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF88Cu;
        // 0x1ef890: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EF894u;
        goto label_1ef894;
    }
    ctx->pc = 0x1EF88Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EF890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EF88Cu;
        // 0x1ef890: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EF88Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EF894u;
label_1ef894:
    // 0x1ef894: 0x0  nop
    ctx->pc = 0x1ef894u;
    // NOP
label_1ef898:
    // 0x1ef898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1ef898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1ef89c:
    // 0x1ef89c: 0x0  nop
    ctx->pc = 0x1ef89cu;
    // NOP
    ctx->pc = 0x1ef8a0u;
}
