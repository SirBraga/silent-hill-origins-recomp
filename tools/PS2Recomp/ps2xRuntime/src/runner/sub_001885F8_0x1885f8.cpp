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

// Function: sub_001885F8
// Address: 0x1885f8 - 0x188b10
void sub_001885F8_0x1885f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001885F8_0x1885f8");
#endif

    switch (ctx->pc) {
        case 0x1885f8u: goto label_1885f8;
        case 0x1885fcu: goto label_1885fc;
        case 0x188600u: goto label_188600;
        case 0x188604u: goto label_188604;
        case 0x188608u: goto label_188608;
        case 0x18860cu: goto label_18860c;
        case 0x188610u: goto label_188610;
        case 0x188614u: goto label_188614;
        case 0x188618u: goto label_188618;
        case 0x18861cu: goto label_18861c;
        case 0x188620u: goto label_188620;
        case 0x188624u: goto label_188624;
        case 0x188628u: goto label_188628;
        case 0x18862cu: goto label_18862c;
        case 0x188630u: goto label_188630;
        case 0x188634u: goto label_188634;
        case 0x188638u: goto label_188638;
        case 0x18863cu: goto label_18863c;
        case 0x188640u: goto label_188640;
        case 0x188644u: goto label_188644;
        case 0x188648u: goto label_188648;
        case 0x18864cu: goto label_18864c;
        case 0x188650u: goto label_188650;
        case 0x188654u: goto label_188654;
        case 0x188658u: goto label_188658;
        case 0x18865cu: goto label_18865c;
        case 0x188660u: goto label_188660;
        case 0x188664u: goto label_188664;
        case 0x188668u: goto label_188668;
        case 0x18866cu: goto label_18866c;
        case 0x188670u: goto label_188670;
        case 0x188674u: goto label_188674;
        case 0x188678u: goto label_188678;
        case 0x18867cu: goto label_18867c;
        case 0x188680u: goto label_188680;
        case 0x188684u: goto label_188684;
        case 0x188688u: goto label_188688;
        case 0x18868cu: goto label_18868c;
        case 0x188690u: goto label_188690;
        case 0x188694u: goto label_188694;
        case 0x188698u: goto label_188698;
        case 0x18869cu: goto label_18869c;
        case 0x1886a0u: goto label_1886a0;
        case 0x1886a4u: goto label_1886a4;
        case 0x1886a8u: goto label_1886a8;
        case 0x1886acu: goto label_1886ac;
        case 0x1886b0u: goto label_1886b0;
        case 0x1886b4u: goto label_1886b4;
        case 0x1886b8u: goto label_1886b8;
        case 0x1886bcu: goto label_1886bc;
        case 0x1886c0u: goto label_1886c0;
        case 0x1886c4u: goto label_1886c4;
        case 0x1886c8u: goto label_1886c8;
        case 0x1886ccu: goto label_1886cc;
        case 0x1886d0u: goto label_1886d0;
        case 0x1886d4u: goto label_1886d4;
        case 0x1886d8u: goto label_1886d8;
        case 0x1886dcu: goto label_1886dc;
        case 0x1886e0u: goto label_1886e0;
        case 0x1886e4u: goto label_1886e4;
        case 0x1886e8u: goto label_1886e8;
        case 0x1886ecu: goto label_1886ec;
        case 0x1886f0u: goto label_1886f0;
        case 0x1886f4u: goto label_1886f4;
        case 0x1886f8u: goto label_1886f8;
        case 0x1886fcu: goto label_1886fc;
        case 0x188700u: goto label_188700;
        case 0x188704u: goto label_188704;
        case 0x188708u: goto label_188708;
        case 0x18870cu: goto label_18870c;
        case 0x188710u: goto label_188710;
        case 0x188714u: goto label_188714;
        case 0x188718u: goto label_188718;
        case 0x18871cu: goto label_18871c;
        case 0x188720u: goto label_188720;
        case 0x188724u: goto label_188724;
        case 0x188728u: goto label_188728;
        case 0x18872cu: goto label_18872c;
        case 0x188730u: goto label_188730;
        case 0x188734u: goto label_188734;
        case 0x188738u: goto label_188738;
        case 0x18873cu: goto label_18873c;
        case 0x188740u: goto label_188740;
        case 0x188744u: goto label_188744;
        case 0x188748u: goto label_188748;
        case 0x18874cu: goto label_18874c;
        case 0x188750u: goto label_188750;
        case 0x188754u: goto label_188754;
        case 0x188758u: goto label_188758;
        case 0x18875cu: goto label_18875c;
        case 0x188760u: goto label_188760;
        case 0x188764u: goto label_188764;
        case 0x188768u: goto label_188768;
        case 0x18876cu: goto label_18876c;
        case 0x188770u: goto label_188770;
        case 0x188774u: goto label_188774;
        case 0x188778u: goto label_188778;
        case 0x18877cu: goto label_18877c;
        case 0x188780u: goto label_188780;
        case 0x188784u: goto label_188784;
        case 0x188788u: goto label_188788;
        case 0x18878cu: goto label_18878c;
        case 0x188790u: goto label_188790;
        case 0x188794u: goto label_188794;
        case 0x188798u: goto label_188798;
        case 0x18879cu: goto label_18879c;
        case 0x1887a0u: goto label_1887a0;
        case 0x1887a4u: goto label_1887a4;
        case 0x1887a8u: goto label_1887a8;
        case 0x1887acu: goto label_1887ac;
        case 0x1887b0u: goto label_1887b0;
        case 0x1887b4u: goto label_1887b4;
        case 0x1887b8u: goto label_1887b8;
        case 0x1887bcu: goto label_1887bc;
        case 0x1887c0u: goto label_1887c0;
        case 0x1887c4u: goto label_1887c4;
        case 0x1887c8u: goto label_1887c8;
        case 0x1887ccu: goto label_1887cc;
        case 0x1887d0u: goto label_1887d0;
        case 0x1887d4u: goto label_1887d4;
        case 0x1887d8u: goto label_1887d8;
        case 0x1887dcu: goto label_1887dc;
        case 0x1887e0u: goto label_1887e0;
        case 0x1887e4u: goto label_1887e4;
        case 0x1887e8u: goto label_1887e8;
        case 0x1887ecu: goto label_1887ec;
        case 0x1887f0u: goto label_1887f0;
        case 0x1887f4u: goto label_1887f4;
        case 0x1887f8u: goto label_1887f8;
        case 0x1887fcu: goto label_1887fc;
        case 0x188800u: goto label_188800;
        case 0x188804u: goto label_188804;
        case 0x188808u: goto label_188808;
        case 0x18880cu: goto label_18880c;
        case 0x188810u: goto label_188810;
        case 0x188814u: goto label_188814;
        case 0x188818u: goto label_188818;
        case 0x18881cu: goto label_18881c;
        case 0x188820u: goto label_188820;
        case 0x188824u: goto label_188824;
        case 0x188828u: goto label_188828;
        case 0x18882cu: goto label_18882c;
        case 0x188830u: goto label_188830;
        case 0x188834u: goto label_188834;
        case 0x188838u: goto label_188838;
        case 0x18883cu: goto label_18883c;
        case 0x188840u: goto label_188840;
        case 0x188844u: goto label_188844;
        case 0x188848u: goto label_188848;
        case 0x18884cu: goto label_18884c;
        case 0x188850u: goto label_188850;
        case 0x188854u: goto label_188854;
        case 0x188858u: goto label_188858;
        case 0x18885cu: goto label_18885c;
        case 0x188860u: goto label_188860;
        case 0x188864u: goto label_188864;
        case 0x188868u: goto label_188868;
        case 0x18886cu: goto label_18886c;
        case 0x188870u: goto label_188870;
        case 0x188874u: goto label_188874;
        case 0x188878u: goto label_188878;
        case 0x18887cu: goto label_18887c;
        case 0x188880u: goto label_188880;
        case 0x188884u: goto label_188884;
        case 0x188888u: goto label_188888;
        case 0x18888cu: goto label_18888c;
        case 0x188890u: goto label_188890;
        case 0x188894u: goto label_188894;
        case 0x188898u: goto label_188898;
        case 0x18889cu: goto label_18889c;
        case 0x1888a0u: goto label_1888a0;
        case 0x1888a4u: goto label_1888a4;
        case 0x1888a8u: goto label_1888a8;
        case 0x1888acu: goto label_1888ac;
        case 0x1888b0u: goto label_1888b0;
        case 0x1888b4u: goto label_1888b4;
        case 0x1888b8u: goto label_1888b8;
        case 0x1888bcu: goto label_1888bc;
        case 0x1888c0u: goto label_1888c0;
        case 0x1888c4u: goto label_1888c4;
        case 0x1888c8u: goto label_1888c8;
        case 0x1888ccu: goto label_1888cc;
        case 0x1888d0u: goto label_1888d0;
        case 0x1888d4u: goto label_1888d4;
        case 0x1888d8u: goto label_1888d8;
        case 0x1888dcu: goto label_1888dc;
        case 0x1888e0u: goto label_1888e0;
        case 0x1888e4u: goto label_1888e4;
        case 0x1888e8u: goto label_1888e8;
        case 0x1888ecu: goto label_1888ec;
        case 0x1888f0u: goto label_1888f0;
        case 0x1888f4u: goto label_1888f4;
        case 0x1888f8u: goto label_1888f8;
        case 0x1888fcu: goto label_1888fc;
        case 0x188900u: goto label_188900;
        case 0x188904u: goto label_188904;
        case 0x188908u: goto label_188908;
        case 0x18890cu: goto label_18890c;
        case 0x188910u: goto label_188910;
        case 0x188914u: goto label_188914;
        case 0x188918u: goto label_188918;
        case 0x18891cu: goto label_18891c;
        case 0x188920u: goto label_188920;
        case 0x188924u: goto label_188924;
        case 0x188928u: goto label_188928;
        case 0x18892cu: goto label_18892c;
        case 0x188930u: goto label_188930;
        case 0x188934u: goto label_188934;
        case 0x188938u: goto label_188938;
        case 0x18893cu: goto label_18893c;
        case 0x188940u: goto label_188940;
        case 0x188944u: goto label_188944;
        case 0x188948u: goto label_188948;
        case 0x18894cu: goto label_18894c;
        case 0x188950u: goto label_188950;
        case 0x188954u: goto label_188954;
        case 0x188958u: goto label_188958;
        case 0x18895cu: goto label_18895c;
        case 0x188960u: goto label_188960;
        case 0x188964u: goto label_188964;
        case 0x188968u: goto label_188968;
        case 0x18896cu: goto label_18896c;
        case 0x188970u: goto label_188970;
        case 0x188974u: goto label_188974;
        case 0x188978u: goto label_188978;
        case 0x18897cu: goto label_18897c;
        case 0x188980u: goto label_188980;
        case 0x188984u: goto label_188984;
        case 0x188988u: goto label_188988;
        case 0x18898cu: goto label_18898c;
        case 0x188990u: goto label_188990;
        case 0x188994u: goto label_188994;
        case 0x188998u: goto label_188998;
        case 0x18899cu: goto label_18899c;
        case 0x1889a0u: goto label_1889a0;
        case 0x1889a4u: goto label_1889a4;
        case 0x1889a8u: goto label_1889a8;
        case 0x1889acu: goto label_1889ac;
        case 0x1889b0u: goto label_1889b0;
        case 0x1889b4u: goto label_1889b4;
        case 0x1889b8u: goto label_1889b8;
        case 0x1889bcu: goto label_1889bc;
        case 0x1889c0u: goto label_1889c0;
        case 0x1889c4u: goto label_1889c4;
        case 0x1889c8u: goto label_1889c8;
        case 0x1889ccu: goto label_1889cc;
        case 0x1889d0u: goto label_1889d0;
        case 0x1889d4u: goto label_1889d4;
        case 0x1889d8u: goto label_1889d8;
        case 0x1889dcu: goto label_1889dc;
        case 0x1889e0u: goto label_1889e0;
        case 0x1889e4u: goto label_1889e4;
        case 0x1889e8u: goto label_1889e8;
        case 0x1889ecu: goto label_1889ec;
        case 0x1889f0u: goto label_1889f0;
        case 0x1889f4u: goto label_1889f4;
        case 0x1889f8u: goto label_1889f8;
        case 0x1889fcu: goto label_1889fc;
        case 0x188a00u: goto label_188a00;
        case 0x188a04u: goto label_188a04;
        case 0x188a08u: goto label_188a08;
        case 0x188a0cu: goto label_188a0c;
        case 0x188a10u: goto label_188a10;
        case 0x188a14u: goto label_188a14;
        case 0x188a18u: goto label_188a18;
        case 0x188a1cu: goto label_188a1c;
        case 0x188a20u: goto label_188a20;
        case 0x188a24u: goto label_188a24;
        case 0x188a28u: goto label_188a28;
        case 0x188a2cu: goto label_188a2c;
        case 0x188a30u: goto label_188a30;
        case 0x188a34u: goto label_188a34;
        case 0x188a38u: goto label_188a38;
        case 0x188a3cu: goto label_188a3c;
        case 0x188a40u: goto label_188a40;
        case 0x188a44u: goto label_188a44;
        case 0x188a48u: goto label_188a48;
        case 0x188a4cu: goto label_188a4c;
        case 0x188a50u: goto label_188a50;
        case 0x188a54u: goto label_188a54;
        case 0x188a58u: goto label_188a58;
        case 0x188a5cu: goto label_188a5c;
        case 0x188a60u: goto label_188a60;
        case 0x188a64u: goto label_188a64;
        case 0x188a68u: goto label_188a68;
        case 0x188a6cu: goto label_188a6c;
        case 0x188a70u: goto label_188a70;
        case 0x188a74u: goto label_188a74;
        case 0x188a78u: goto label_188a78;
        case 0x188a7cu: goto label_188a7c;
        case 0x188a80u: goto label_188a80;
        case 0x188a84u: goto label_188a84;
        case 0x188a88u: goto label_188a88;
        case 0x188a8cu: goto label_188a8c;
        case 0x188a90u: goto label_188a90;
        case 0x188a94u: goto label_188a94;
        case 0x188a98u: goto label_188a98;
        case 0x188a9cu: goto label_188a9c;
        case 0x188aa0u: goto label_188aa0;
        case 0x188aa4u: goto label_188aa4;
        case 0x188aa8u: goto label_188aa8;
        case 0x188aacu: goto label_188aac;
        case 0x188ab0u: goto label_188ab0;
        case 0x188ab4u: goto label_188ab4;
        case 0x188ab8u: goto label_188ab8;
        case 0x188abcu: goto label_188abc;
        case 0x188ac0u: goto label_188ac0;
        case 0x188ac4u: goto label_188ac4;
        case 0x188ac8u: goto label_188ac8;
        case 0x188accu: goto label_188acc;
        case 0x188ad0u: goto label_188ad0;
        case 0x188ad4u: goto label_188ad4;
        case 0x188ad8u: goto label_188ad8;
        case 0x188adcu: goto label_188adc;
        case 0x188ae0u: goto label_188ae0;
        case 0x188ae4u: goto label_188ae4;
        case 0x188ae8u: goto label_188ae8;
        case 0x188aecu: goto label_188aec;
        case 0x188af0u: goto label_188af0;
        case 0x188af4u: goto label_188af4;
        case 0x188af8u: goto label_188af8;
        case 0x188afcu: goto label_188afc;
        case 0x188b00u: goto label_188b00;
        case 0x188b04u: goto label_188b04;
        case 0x188b08u: goto label_188b08;
        case 0x188b0cu: goto label_188b0c;
        default: break;
    }

    ctx->pc = 0x1885f8u;

label_1885f8:
    // 0x1885f8: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x1885f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_1885fc:
    // 0x1885fc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1885fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_188600:
    // 0x188600: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x188600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
label_188604:
    // 0x188604: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x188604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
label_188608:
    // 0x188608: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x188608u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_18860c:
    // 0x18860c: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x18860cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_188610:
    // 0x188610: 0x26500110  addiu       $s0, $s2, 0x110
    ctx->pc = 0x188610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
label_188614:
    // 0x188614: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x188614u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_188618:
    // 0x188618: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x188618u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_18861c:
    // 0x18861c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x18861cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
label_188620:
    // 0x188620: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x188620u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188624:
    // 0x188624: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x188624u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
label_188628:
    // 0x188628: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x188628u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_18862c:
    // 0x18862c: 0xe7ba0100  swc1        $f26, 0x100($sp)
    ctx->pc = 0x18862cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_188630:
    // 0x188630: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x188630u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_188634:
    // 0x188634: 0xe7b900f8  swc1        $f25, 0xF8($sp)
    ctx->pc = 0x188634u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_188638:
    // 0x188638: 0xe7b800f0  swc1        $f24, 0xF0($sp)
    ctx->pc = 0x188638u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_18863c:
    // 0x18863c: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x18863cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
label_188640:
    // 0x188640: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x188640u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
label_188644:
    // 0x188644: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x188644u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
label_188648:
    // 0x188648: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x188648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_18864c:
    // 0x18864c: 0xe7b700e8  swc1        $f23, 0xE8($sp)
    ctx->pc = 0x18864cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_188650:
    // 0x188650: 0xe7b600e0  swc1        $f22, 0xE0($sp)
    ctx->pc = 0x188650u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_188654:
    // 0x188654: 0xe7b500d8  swc1        $f21, 0xD8($sp)
    ctx->pc = 0x188654u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_188658:
    // 0x188658: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x188658u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_18865c:
    // 0x18865c: 0xc4588aa0  lwc1        $f24, -0x7560($v0)
    ctx->pc = 0x18865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294937248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_188660:
    // 0x188660: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x188660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188664:
    // 0x188664: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x188664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_188668:
    // 0x188668: 0x4480d000  mtc1        $zero, $f26
    ctx->pc = 0x188668u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[26], &bits, sizeof(bits)); }
label_18866c:
    // 0x18866c: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_188670:
    if (ctx->pc == 0x188670u) {
        ctx->pc = 0x188670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18866Cu;
        // 0x188670: 0x4600c646  mov.s       $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188674u;
        goto label_188674;
    }
    ctx->pc = 0x18866Cu;
    {
        const bool branch_taken_0x18866c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18866Cu;
        // 0x188670: 0x4600c646  mov.s       $f25, $f24 (Delay Slot)
        ctx->f[25] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x18866c) {
            ctx->pc = 0x1886D0u;
            goto label_1886d0;
        }
    }
    ctx->pc = 0x188674u;
label_188674:
    // 0x188674: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x188674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188678:
    // 0x188678: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_18867c:
    if (ctx->pc == 0x18867Cu) {
        ctx->pc = 0x18867Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188678u;
        // 0x18867c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188680u;
        goto label_188680;
    }
    ctx->pc = 0x188678u;
    {
        const bool branch_taken_0x188678 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188678) {
            ctx->pc = 0x18867Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188678u;
            // 0x18867c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1886C8u;
            goto label_1886c8;
        }
    }
    ctx->pc = 0x188680u;
label_188680:
    // 0x188680: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x188680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_188684:
    // 0x188684: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_188688:
    if (ctx->pc == 0x188688u) {
        ctx->pc = 0x188688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188684u;
        // 0x188688: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18868Cu;
        goto label_18868c;
    }
    ctx->pc = 0x188684u;
    {
        const bool branch_taken_0x188684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188684u;
        // 0x188688: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188684) {
            ctx->pc = 0x188694u;
            goto label_188694;
        }
    }
    ctx->pc = 0x18868Cu;
label_18868c:
    // 0x18868c: 0x10000002  b           . + 4 + (0x2 << 2)
label_188690:
    if (ctx->pc == 0x188690u) {
        ctx->pc = 0x188690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18868Cu;
        // 0x188690: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188694u;
        goto label_188694;
    }
    ctx->pc = 0x18868Cu;
    {
        const bool branch_taken_0x18868c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18868Cu;
        // 0x188690: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18868c) {
            ctx->pc = 0x188698u;
            goto label_188698;
        }
    }
    ctx->pc = 0x188694u;
label_188694:
    // 0x188694: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x188694u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_188698:
    // 0x188698: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x188698u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_18869c:
    // 0x18869c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_1886a0:
    if (ctx->pc == 0x1886A0u) {
        ctx->pc = 0x1886A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18869Cu;
        // 0x1886a0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886A4u;
        goto label_1886a4;
    }
    ctx->pc = 0x18869Cu;
    {
        const bool branch_taken_0x18869c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1886A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18869Cu;
        // 0x1886a0: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18869c) {
            ctx->pc = 0x1886ACu;
            goto label_1886ac;
        }
    }
    ctx->pc = 0x1886A4u;
label_1886a4:
    // 0x1886a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1886a8:
    if (ctx->pc == 0x1886A8u) {
        ctx->pc = 0x1886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886A4u;
        // 0x1886a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886ACu;
        goto label_1886ac;
    }
    ctx->pc = 0x1886A4u;
    {
        const bool branch_taken_0x1886a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1886A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886A4u;
        // 0x1886a8: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886a4) {
            ctx->pc = 0x1886B0u;
            goto label_1886b0;
        }
    }
    ctx->pc = 0x1886ACu;
label_1886ac:
    // 0x1886ac: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1886acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1886b0:
    // 0x1886b0: 0xc0808b8  jal         func_2022E0
label_1886b4:
    if (ctx->pc == 0x1886B4u) {
        ctx->pc = 0x1886B8u;
        goto label_1886b8;
    }
    ctx->pc = 0x1886B0u;
    SET_GPR_U32(ctx, 31, 0x1886B8u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1886B0u, 0x1886B8u)) {
        return;
    }
    ctx->pc = 0x1886B8u;
label_1886b8:
    // 0x1886b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1886b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1886bc:
    // 0x1886bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1886bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1886c0:
    // 0x1886c0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1886c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1886c4:
    // 0x1886c4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1886c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1886c8:
    // 0x1886c8: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_1886cc:
    if (ctx->pc == 0x1886CCu) {
        ctx->pc = 0x1886CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886C8u;
        // 0x1886cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886D0u;
        goto label_1886d0;
    }
    ctx->pc = 0x1886C8u;
    {
        const bool branch_taken_0x1886c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1886c8) {
            ctx->pc = 0x1886CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1886C8u;
            // 0x1886cc: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188678u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188678;
        }
    }
    ctx->pc = 0x1886D0u;
label_1886d0:
    // 0x1886d0: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x1886d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_1886d4:
    // 0x1886d4: 0x184000b2  blez        $v0, . + 4 + (0xB2 << 2)
label_1886d8:
    if (ctx->pc == 0x1886D8u) {
        ctx->pc = 0x1886D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D4u;
        // 0x1886d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1886DCu;
        goto label_1886dc;
    }
    ctx->pc = 0x1886D4u;
    {
        const bool branch_taken_0x1886d4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1886D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886D4u;
        // 0x1886d8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1886d4) {
            ctx->pc = 0x1889A0u;
            goto label_1889a0;
        }
    }
    ctx->pc = 0x1886DCu;
label_1886dc:
    // 0x1886dc: 0x4480b800  mtc1        $zero, $f23
    ctx->pc = 0x1886dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_1886e0:
    // 0x1886e0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1886e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1886e4:
    // 0x1886e4: 0x0  nop
    ctx->pc = 0x1886e4u;
    // NOP
label_1886e8:
    // 0x1886e8: 0x8e910000  lw          $s1, 0x0($s4)
    ctx->pc = 0x1886e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1886ec:
    // 0x1886ec: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x1886ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_1886f0:
    // 0x1886f0: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x1886f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
label_1886f4:
    // 0x1886f4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x1886f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_1886f8:
    // 0x1886f8: 0x40f809  jalr        $v0
label_1886fc:
    if (ctx->pc == 0x1886FCu) {
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188700u;
        goto label_188700;
    }
    ctx->pc = 0x1886F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188700u);
        ctx->pc = 0x1886FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1886F8u;
        // 0x1886fc: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1886F8u, 0x188700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188700u;
label_188700:
    // 0x188700: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
label_188704:
    if (ctx->pc == 0x188704u) {
        ctx->pc = 0x188704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188700u;
        // 0x188704: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188708u;
        goto label_188708;
    }
    ctx->pc = 0x188700u;
    {
        const bool branch_taken_0x188700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188700u;
        // 0x188704: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188700) {
            ctx->pc = 0x18898Cu;
            goto label_18898c;
        }
    }
    ctx->pc = 0x188708u;
label_188708:
    // 0x188708: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x188708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_18870c:
    // 0x18870c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x18870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_188710:
    // 0x188710: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x188710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_188714:
    // 0x188714: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x188714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_188718:
    // 0x188718: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x188718u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_18871c:
    // 0x18871c: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x18871cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_188720:
    // 0x188720: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x188720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_188724:
    // 0x188724: 0xc062118  jal         func_188460
label_188728:
    if (ctx->pc == 0x188728u) {
        ctx->pc = 0x188728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188724u;
        // 0x188728: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18872Cu;
        goto label_18872c;
    }
    ctx->pc = 0x188724u;
    SET_GPR_U32(ctx, 31, 0x18872Cu);
    ctx->pc = 0x188728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188724u;
    // 0x188728: 0xafa60008  sw          $a2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188460u, 0x188724u, 0x18872Cu)) {
        return;
    }
    ctx->pc = 0x18872Cu;
label_18872c:
    // 0x18872c: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x18872cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188730:
    // 0x188730: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x188730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188734:
    // 0x188734: 0xc6420124  lwc1        $f2, 0x124($s2)
    ctx->pc = 0x188734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188738:
    // 0x188738: 0x46010581  sub.s       $f22, $f0, $f1
    ctx->pc = 0x188738u;
    ctx->f[22] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_18873c:
    // 0x18873c: 0x46161036  c.le.s      $f2, $f22
    ctx->pc = 0x18873cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188740:
    // 0x188740: 0x0  nop
    ctx->pc = 0x188740u;
    // NOP
label_188744:
    // 0x188744: 0x45020092  bc1fl       . + 4 + (0x92 << 2)
label_188748:
    if (ctx->pc == 0x188748u) {
        ctx->pc = 0x188748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188744u;
        // 0x188748: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x18874Cu;
        goto label_18874c;
    }
    ctx->pc = 0x188744u;
    {
        const bool branch_taken_0x188744 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188744) {
            ctx->pc = 0x188748u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188744u;
            // 0x188748: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x18874Cu;
label_18874c:
    // 0x18874c: 0xc6400120  lwc1        $f0, 0x120($s2)
    ctx->pc = 0x18874cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188750:
    // 0x188750: 0x4600b036  c.le.s      $f22, $f0
    ctx->pc = 0x188750u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188754:
    // 0x188754: 0x0  nop
    ctx->pc = 0x188754u;
    // NOP
label_188758:
    // 0x188758: 0x4502008d  bc1fl       . + 4 + (0x8D << 2)
label_18875c:
    if (ctx->pc == 0x18875Cu) {
        ctx->pc = 0x18875Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188758u;
        // 0x18875c: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188760u;
        goto label_188760;
    }
    ctx->pc = 0x188758u;
    {
        const bool branch_taken_0x188758 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188758) {
            ctx->pc = 0x18875Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188758u;
            // 0x18875c: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x188760u;
label_188760:
    // 0x188760: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x188760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_188764:
    // 0x188764: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x188764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188768:
    // 0x188768: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x188768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18876c:
    // 0x18876c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x18876cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_188770:
    // 0x188770: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x188770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188774:
    // 0x188774: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x188774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_188778:
    // 0x188778: 0xe7b70014  swc1        $f23, 0x14($sp)
    ctx->pc = 0x188778u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18877c:
    // 0x18877c: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x18877cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_188780:
    // 0x188780: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x188780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_188784:
    // 0x188784: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x188784u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_188788:
    // 0x188788: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x188788u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_18878c:
    // 0x18878c: 0x4617b882  mul.s       $f2, $f23, $f23
    ctx->pc = 0x18878cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[23]);
label_188790:
    // 0x188790: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x188790u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_188794:
    // 0x188794: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x188794u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_188798:
    // 0x188798: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x188798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_18879c:
    // 0x18879c: 0x0  nop
    ctx->pc = 0x18879cu;
    // NOP
label_1887a0:
    // 0x1887a0: 0x0  nop
    ctx->pc = 0x1887a0u;
    // NOP
label_1887a4:
    // 0x1887a4: 0x46000504  c1          0x504
    ctx->pc = 0x1887a4u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
label_1887a8:
    // 0x1887a8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1887a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1887ac:
    // 0x1887ac: 0xc04642c  jal         func_1190B0
label_1887b0:
    if (ctx->pc == 0x1887B0u) {
        ctx->pc = 0x1887B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887ACu;
        // 0x1887b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887B4u;
        goto label_1887b4;
    }
    ctx->pc = 0x1887ACu;
    SET_GPR_U32(ctx, 31, 0x1887B4u);
    ctx->pc = 0x1887B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1887ACu;
    // 0x1887b0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x1887ACu, 0x1887B4u)) {
        return;
    }
    ctx->pc = 0x1887B4u;
label_1887b4:
    // 0x1887b4: 0x0  nop
    ctx->pc = 0x1887b4u;
    // NOP
label_1887b8:
    // 0x1887b8: 0x0  nop
    ctx->pc = 0x1887b8u;
    // NOP
label_1887bc:
    // 0x1887bc: 0x46000044  c1          0x44
    ctx->pc = 0x1887bcu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1887c0:
    // 0x1887c0: 0x4601b834  c.lt.s      $f23, $f1
    ctx->pc = 0x1887c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1887c4:
    // 0x1887c4: 0x0  nop
    ctx->pc = 0x1887c4u;
    // NOP
label_1887c8:
    // 0x1887c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_1887cc:
    if (ctx->pc == 0x1887CCu) {
        ctx->pc = 0x1887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887C8u;
        // 0x1887cc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887D0u;
        goto label_1887d0;
    }
    ctx->pc = 0x1887C8u;
    {
        const bool branch_taken_0x1887c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1887CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887C8u;
        // 0x1887cc: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887c8) {
            ctx->pc = 0x1887E8u;
            goto label_1887e8;
        }
    }
    ctx->pc = 0x1887D0u;
label_1887d0:
    // 0x1887d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1887d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1887d4:
    // 0x1887d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1887d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1887d8:
    // 0x1887d8: 0x0  nop
    ctx->pc = 0x1887d8u;
    // NOP
label_1887dc:
    // 0x1887dc: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1887dcu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1887e0:
    // 0x1887e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1887e4:
    if (ctx->pc == 0x1887E4u) {
        ctx->pc = 0x1887E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887E0u;
        // 0x1887e4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1887E8u;
        goto label_1887e8;
    }
    ctx->pc = 0x1887E0u;
    {
        const bool branch_taken_0x1887e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1887E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1887E0u;
        // 0x1887e4: 0xc7a00010  lwc1        $f0, 0x10($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1887e0) {
            ctx->pc = 0x1887F0u;
            goto label_1887f0;
        }
    }
    ctx->pc = 0x1887E8u;
label_1887e8:
    // 0x1887e8: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1887e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1887ec:
    // 0x1887ec: 0x0  nop
    ctx->pc = 0x1887ecu;
    // NOP
label_1887f0:
    // 0x1887f0: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1887f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1887f4:
    // 0x1887f4: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1887f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1887f8:
    // 0x1887f8: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1887f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1887fc:
    // 0x1887fc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1887fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_188800:
    // 0x188800: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x188800u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_188804:
    // 0x188804: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x188804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_188808:
    // 0x188808: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x188808u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_18880c:
    // 0x18880c: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x18880cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_188810:
    // 0x188810: 0xc6a30000  lwc1        $f3, 0x0($s5)
    ctx->pc = 0x188810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_188814:
    // 0x188814: 0xc6a40004  lwc1        $f4, 0x4($s5)
    ctx->pc = 0x188814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_188818:
    // 0x188818: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x188818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_18881c:
    // 0x18881c: 0xc6a50008  lwc1        $f5, 0x8($s5)
    ctx->pc = 0x18881cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_188820:
    // 0x188820: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x188820u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_188824:
    // 0x188824: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x188824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_188828:
    // 0x188828: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x188828u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_18882c:
    // 0x18882c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18882cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188830:
    // 0x188830: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_188834:
    if (ctx->pc == 0x188834u) {
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0x46020540  add.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x188838u;
        goto label_188838;
    }
    ctx->pc = 0x188830u;
    {
        const bool branch_taken_0x188830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x188834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188830u;
        // 0x188834: 0x46020540  add.s       $f21, $f0, $f2 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x188830) {
            ctx->pc = 0x188884u;
            goto label_188884;
        }
    }
    ctx->pc = 0x188838u;
label_188838:
    // 0x188838: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x188838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_18883c:
    // 0x18883c: 0x4601a036  c.le.s      $f20, $f1
    ctx->pc = 0x18883cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188840:
    // 0x188840: 0x0  nop
    ctx->pc = 0x188840u;
    // NOP
label_188844:
    // 0x188844: 0x45020010  bc1fl       . + 4 + (0x10 << 2)
label_188848:
    if (ctx->pc == 0x188848u) {
        ctx->pc = 0x188848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188844u;
        // 0x188848: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18884Cu;
        goto label_18884c;
    }
    ctx->pc = 0x188844u;
    {
        const bool branch_taken_0x188844 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188844) {
            ctx->pc = 0x188848u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188844u;
            // 0x188848: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x188888u;
            goto label_188888;
        }
    }
    ctx->pc = 0x18884Cu;
label_18884c:
    // 0x18884c: 0xc6400130  lwc1        $f0, 0x130($s2)
    ctx->pc = 0x18884cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188850:
    // 0x188850: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x188850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188854:
    // 0x188854: 0x0  nop
    ctx->pc = 0x188854u;
    // NOP
label_188858:
    // 0x188858: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_18885c:
    if (ctx->pc == 0x18885Cu) {
        ctx->pc = 0x188860u;
        goto label_188860;
    }
    ctx->pc = 0x188858u;
    {
        const bool branch_taken_0x188858 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188858) {
            ctx->pc = 0x18886Cu;
            goto label_18886c;
        }
    }
    ctx->pc = 0x188860u;
label_188860:
    // 0x188860: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x188860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_188864:
    // 0x188864: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_188868:
    if (ctx->pc == 0x188868u) {
        ctx->pc = 0x188868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188864u;
        // 0x188868: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18886Cu;
        goto label_18886c;
    }
    ctx->pc = 0x188864u;
    {
        const bool branch_taken_0x188864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188864) {
            ctx->pc = 0x188868u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188864u;
            // 0x188868: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x188888u;
            goto label_188888;
        }
    }
    ctx->pc = 0x18886Cu;
label_18886c:
    // 0x18886c: 0x4601d034  c.lt.s      $f26, $f1
    ctx->pc = 0x18886cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[26], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188870:
    // 0x188870: 0x0  nop
    ctx->pc = 0x188870u;
    // NOP
label_188874:
    // 0x188874: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_188878:
    if (ctx->pc == 0x188878u) {
        ctx->pc = 0x188878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188874u;
        // 0x188878: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x18887Cu;
        goto label_18887c;
    }
    ctx->pc = 0x188874u;
    {
        const bool branch_taken_0x188874 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188874) {
            ctx->pc = 0x188878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188874u;
            // 0x188878: 0xc6210028  lwc1        $f1, 0x28($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x188888u;
            goto label_188888;
        }
    }
    ctx->pc = 0x18887Cu;
label_18887c:
    // 0x18887c: 0x46000e86  mov.s       $f26, $f1
    ctx->pc = 0x18887cu;
    ctx->f[26] = FPU_MOV_S(ctx->f[1]);
label_188880:
    // 0x188880: 0x260f02d  daddu       $fp, $s3, $zero
    ctx->pc = 0x188880u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_188884:
    // 0x188884: 0xc6210028  lwc1        $f1, 0x28($s1)
    ctx->pc = 0x188884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_188888:
    // 0x188888: 0xc6400128  lwc1        $f0, 0x128($s2)
    ctx->pc = 0x188888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_18888c:
    // 0x18888c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x18888cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_188890:
    // 0x188890: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x188890u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188894:
    // 0x188894: 0x0  nop
    ctx->pc = 0x188894u;
    // NOP
label_188898:
    // 0x188898: 0x4502003d  bc1fl       . + 4 + (0x3D << 2)
label_18889c:
    if (ctx->pc == 0x18889Cu) {
        ctx->pc = 0x18889Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188898u;
        // 0x18889c: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888A0u;
        goto label_1888a0;
    }
    ctx->pc = 0x188898u;
    {
        const bool branch_taken_0x188898 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x188898) {
            ctx->pc = 0x18889Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188898u;
            // 0x18889c: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x1888A0u;
label_1888a0:
    // 0x1888a0: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x1888a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1888a4:
    // 0x1888a4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1888a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1888a8:
    // 0x1888a8: 0x0  nop
    ctx->pc = 0x1888a8u;
    // NOP
label_1888ac:
    // 0x1888ac: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_1888b0:
    if (ctx->pc == 0x1888B0u) {
        ctx->pc = 0x1888B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888ACu;
        // 0x1888b0: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888B4u;
        goto label_1888b4;
    }
    ctx->pc = 0x1888ACu;
    {
        const bool branch_taken_0x1888ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1888B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888ACu;
        // 0x1888b0: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888ac) {
            ctx->pc = 0x188928u;
            goto label_188928;
        }
    }
    ctx->pc = 0x1888B4u;
label_1888b4:
    // 0x1888b4: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1888b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1888b8:
    // 0x1888b8: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1888b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1888bc:
    // 0x1888bc: 0x40f809  jalr        $v0
label_1888c0:
    if (ctx->pc == 0x1888C0u) {
        ctx->pc = 0x1888C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888BCu;
        // 0x1888c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888C4u;
        goto label_1888c4;
    }
    ctx->pc = 0x1888BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1888C4u);
        ctx->pc = 0x1888C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888BCu;
        // 0x1888c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1888BCu, 0x1888C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1888C4u;
label_1888c4:
    // 0x1888c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1888c8:
    if (ctx->pc == 0x1888C8u) {
        ctx->pc = 0x1888C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888C4u;
        // 0x1888c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888CCu;
        goto label_1888cc;
    }
    ctx->pc = 0x1888C4u;
    {
        const bool branch_taken_0x1888c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1888C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888C4u;
        // 0x1888c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1888c4) {
            ctx->pc = 0x188910u;
            goto label_188910;
        }
    }
    ctx->pc = 0x1888CCu;
label_1888cc:
    // 0x1888cc: 0xc080858  jal         func_202160
label_1888d0:
    if (ctx->pc == 0x1888D0u) {
        ctx->pc = 0x1888D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888CCu;
        // 0x1888d0: 0x26500110  addiu       $s0, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888D4u;
        goto label_1888d4;
    }
    ctx->pc = 0x1888CCu;
    SET_GPR_U32(ctx, 31, 0x1888D4u);
    ctx->pc = 0x1888D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1888CCu;
    // 0x1888d0: 0x26500110  addiu       $s0, $s2, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x1888CCu, 0x1888D4u)) {
        return;
    }
    ctx->pc = 0x1888D4u;
label_1888d4:
    // 0x1888d4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1888d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1888d8:
    // 0x1888d8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x1888d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_1888dc:
    // 0x1888dc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1888dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1888e0:
    // 0x1888e0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x1888e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_1888e4:
    // 0x1888e4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x1888e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_1888e8:
    // 0x1888e8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1888e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1888ec:
    // 0x1888ec: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1888f0:
    if (ctx->pc == 0x1888F0u) {
        ctx->pc = 0x1888F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888ECu;
        // 0x1888f0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1888F4u;
        goto label_1888f4;
    }
    ctx->pc = 0x1888ECu;
    {
        const bool branch_taken_0x1888ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1888ec) {
            ctx->pc = 0x1888F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1888ECu;
            // 0x1888f0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1888F4u;
            goto label_1888f4;
        }
    }
    ctx->pc = 0x1888F4u;
label_1888f4:
    // 0x1888f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1888f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1888f8:
    // 0x1888f8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1888fc:
    if (ctx->pc == 0x1888FCu) {
        ctx->pc = 0x1888FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1888F8u;
        // 0x1888fc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188900u;
        goto label_188900;
    }
    ctx->pc = 0x1888F8u;
    {
        const bool branch_taken_0x1888f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1888f8) {
            ctx->pc = 0x1888FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1888F8u;
            // 0x1888fc: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188900u;
            goto label_188900;
        }
    }
    ctx->pc = 0x188900u;
label_188900:
    // 0x188900: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x188900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_188904:
    // 0x188904: 0x8e420110  lw          $v0, 0x110($s2)
    ctx->pc = 0x188904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 272)));
label_188908:
    // 0x188908: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x188908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_18890c:
    // 0x18890c: 0xae420110  sw          $v0, 0x110($s2)
    ctx->pc = 0x18890cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 2));
label_188910:
    // 0x188910: 0x4618a034  c.lt.s      $f20, $f24
    ctx->pc = 0x188910u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188914:
    // 0x188914: 0x0  nop
    ctx->pc = 0x188914u;
    // NOP
label_188918:
    // 0x188918: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_18891c:
    if (ctx->pc == 0x18891Cu) {
        ctx->pc = 0x18891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188918u;
        // 0x18891c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188920u;
        goto label_188920;
    }
    ctx->pc = 0x188918u;
    {
        const bool branch_taken_0x188918 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x18891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188918u;
        // 0x18891c: 0x8e230030  lw          $v1, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188918) {
            ctx->pc = 0x188928u;
            goto label_188928;
        }
    }
    ctx->pc = 0x188920u;
label_188920:
    // 0x188920: 0x4600a606  mov.s       $f24, $f20
    ctx->pc = 0x188920u;
    ctx->f[24] = FPU_MOV_S(ctx->f[20]);
label_188924:
    // 0x188924: 0x260b02d  daddu       $s6, $s3, $zero
    ctx->pc = 0x188924u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_188928:
    // 0x188928: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x188928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_18892c:
    // 0x18892c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x18892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_188930:
    // 0x188930: 0x40f809  jalr        $v0
label_188934:
    if (ctx->pc == 0x188934u) {
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188938u;
        goto label_188938;
    }
    ctx->pc = 0x188930u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x188938u);
        ctx->pc = 0x188934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188930u;
        // 0x188934: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188930u, 0x188938u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x188938u;
label_188938:
    // 0x188938: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x188938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18893c:
    // 0x18893c: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
label_188940:
    if (ctx->pc == 0x188940u) {
        ctx->pc = 0x188940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18893Cu;
        // 0x188940: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188944u;
        goto label_188944;
    }
    ctx->pc = 0x18893Cu;
    {
        const bool branch_taken_0x18893c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18893c) {
            ctx->pc = 0x188940u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18893Cu;
            // 0x188940: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x188944u;
label_188944:
    // 0x188944: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x188944u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_188948:
    // 0x188948: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x188948u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_18894c:
    // 0x18894c: 0x0  nop
    ctx->pc = 0x18894cu;
    // NOP
label_188950:
    // 0x188950: 0x4600b034  c.lt.s      $f22, $f0
    ctx->pc = 0x188950u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188954:
    // 0x188954: 0x0  nop
    ctx->pc = 0x188954u;
    // NOP
label_188958:
    // 0x188958: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_18895c:
    if (ctx->pc == 0x18895Cu) {
        ctx->pc = 0x188960u;
        goto label_188960;
    }
    ctx->pc = 0x188958u;
    {
        const bool branch_taken_0x188958 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x188958) {
            ctx->pc = 0x188974u;
            goto label_188974;
        }
    }
    ctx->pc = 0x188960u;
label_188960:
    // 0x188960: 0xc640012c  lwc1        $f0, 0x12C($s2)
    ctx->pc = 0x188960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_188964:
    // 0x188964: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x188964u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188968:
    // 0x188968: 0x0  nop
    ctx->pc = 0x188968u;
    // NOP
label_18896c:
    // 0x18896c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
label_188970:
    if (ctx->pc == 0x188970u) {
        ctx->pc = 0x188970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18896Cu;
        // 0x188970: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188974u;
        goto label_188974;
    }
    ctx->pc = 0x18896Cu;
    {
        const bool branch_taken_0x18896c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18896c) {
            ctx->pc = 0x188970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18896Cu;
            // 0x188970: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x188974u;
label_188974:
    // 0x188974: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x188974u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_188978:
    // 0x188978: 0x0  nop
    ctx->pc = 0x188978u;
    // NOP
label_18897c:
    // 0x18897c: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_188980:
    if (ctx->pc == 0x188980u) {
        ctx->pc = 0x188980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18897Cu;
        // 0x188980: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188984u;
        goto label_188984;
    }
    ctx->pc = 0x18897Cu;
    {
        const bool branch_taken_0x18897c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x18897c) {
            ctx->pc = 0x188980u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x18897Cu;
            // 0x188980: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188990u;
            goto label_188990;
        }
    }
    ctx->pc = 0x188984u;
label_188984:
    // 0x188984: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x188984u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
label_188988:
    // 0x188988: 0x260b82d  daddu       $s7, $s3, $zero
    ctx->pc = 0x188988u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_18898c:
    // 0x18898c: 0x8e420100  lw          $v0, 0x100($s2)
    ctx->pc = 0x18898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
label_188990:
    // 0x188990: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x188990u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_188994:
    // 0x188994: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x188994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_188998:
    // 0x188998: 0x1440ff53  bnez        $v0, . + 4 + (-0xAD << 2)
label_18899c:
    if (ctx->pc == 0x18899Cu) {
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A0u;
        goto label_1889a0;
    }
    ctx->pc = 0x188998u;
    {
        const bool branch_taken_0x188998 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188998u;
        // 0x18899c: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188998) {
            ctx->pc = 0x1886E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1886e8;
        }
    }
    ctx->pc = 0x1889A0u;
label_1889a0:
    // 0x1889a0: 0x6c00005  bltz        $s6, . + 4 + (0x5 << 2)
label_1889a4:
    if (ctx->pc == 0x1889A4u) {
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A0u;
        // 0x1889a4: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889A8u;
        goto label_1889a8;
    }
    ctx->pc = 0x1889A0u;
    {
        const bool branch_taken_0x1889a0 = (GPR_S64(ctx, 22) < 0);
        ctx->pc = 0x1889A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889A0u;
        // 0x1889a4: 0x161080  sll         $v0, $s6, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889a0) {
            ctx->pc = 0x1889B8u;
            goto label_1889b8;
        }
    }
    ctx->pc = 0x1889A8u;
label_1889a8:
    // 0x1889a8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1889a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1889ac:
    // 0x1889ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1889acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1889b0:
    // 0x1889b0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1889b4:
    if (ctx->pc == 0x1889B4u) {
        ctx->pc = 0x1889B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889B0u;
        // 0x1889b4: 0xae430108  sw          $v1, 0x108($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889B8u;
        goto label_1889b8;
    }
    ctx->pc = 0x1889B0u;
    {
        const bool branch_taken_0x1889b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889B0u;
        // 0x1889b4: 0xae430108  sw          $v1, 0x108($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889b0) {
            ctx->pc = 0x1889BCu;
            goto label_1889bc;
        }
    }
    ctx->pc = 0x1889B8u;
label_1889b8:
    // 0x1889b8: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x1889b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
label_1889bc:
    // 0x1889bc: 0x6e00005  bltz        $s7, . + 4 + (0x5 << 2)
label_1889c0:
    if (ctx->pc == 0x1889C0u) {
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889BCu;
        // 0x1889c0: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889C4u;
        goto label_1889c4;
    }
    ctx->pc = 0x1889BCu;
    {
        const bool branch_taken_0x1889bc = (GPR_S64(ctx, 23) < 0);
        ctx->pc = 0x1889C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889BCu;
        // 0x1889c0: 0x171080  sll         $v0, $s7, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889bc) {
            ctx->pc = 0x1889D4u;
            goto label_1889d4;
        }
    }
    ctx->pc = 0x1889C4u;
label_1889c4:
    // 0x1889c4: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1889c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1889c8:
    // 0x1889c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1889c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1889cc:
    // 0x1889cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1889d0:
    if (ctx->pc == 0x1889D0u) {
        ctx->pc = 0x1889D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889CCu;
        // 0x1889d0: 0xae43010c  sw          $v1, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889D4u;
        goto label_1889d4;
    }
    ctx->pc = 0x1889CCu;
    {
        const bool branch_taken_0x1889cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889CCu;
        // 0x1889d0: 0xae43010c  sw          $v1, 0x10C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889cc) {
            ctx->pc = 0x1889D8u;
            goto label_1889d8;
        }
    }
    ctx->pc = 0x1889D4u;
label_1889d4:
    // 0x1889d4: 0xae40010c  sw          $zero, 0x10C($s2)
    ctx->pc = 0x1889d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 268), GPR_U32(ctx, 0));
label_1889d8:
    // 0x1889d8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x1889d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
label_1889dc:
    // 0x1889dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1889e0:
    if (ctx->pc == 0x1889E0u) {
        ctx->pc = 0x1889E4u;
        goto label_1889e4;
    }
    ctx->pc = 0x1889DCu;
    {
        const bool branch_taken_0x1889dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889dc) {
            ctx->pc = 0x1889F8u;
            goto label_1889f8;
        }
    }
    ctx->pc = 0x1889E4u;
label_1889e4:
    // 0x1889e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1889e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1889e8:
    // 0x1889e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1889ec:
    if (ctx->pc == 0x1889ECu) {
        ctx->pc = 0x1889F0u;
        goto label_1889f0;
    }
    ctx->pc = 0x1889E8u;
    {
        const bool branch_taken_0x1889e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1889e8) {
            ctx->pc = 0x1889F8u;
            goto label_1889f8;
        }
    }
    ctx->pc = 0x1889F0u;
label_1889f0:
    // 0x1889f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1889f4:
    if (ctx->pc == 0x1889F4u) {
        ctx->pc = 0x1889F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889F0u;
        // 0x1889f4: 0xae430104  sw          $v1, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1889F8u;
        goto label_1889f8;
    }
    ctx->pc = 0x1889F0u;
    {
        const bool branch_taken_0x1889f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1889F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889F0u;
        // 0x1889f4: 0xae430104  sw          $v1, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889f0) {
            ctx->pc = 0x188A14u;
            goto label_188a14;
        }
    }
    ctx->pc = 0x1889F8u;
label_1889f8:
    // 0x1889f8: 0x7c00005  bltz        $fp, . + 4 + (0x5 << 2)
label_1889fc:
    if (ctx->pc == 0x1889FCu) {
        ctx->pc = 0x1889FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889F8u;
        // 0x1889fc: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A00u;
        goto label_188a00;
    }
    ctx->pc = 0x1889F8u;
    {
        const bool branch_taken_0x1889f8 = (GPR_S64(ctx, 30) < 0);
        ctx->pc = 0x1889FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1889F8u;
        // 0x1889fc: 0x1e1080  sll         $v0, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1889f8) {
            ctx->pc = 0x188A10u;
            goto label_188a10;
        }
    }
    ctx->pc = 0x188A00u;
label_188a00:
    // 0x188a00: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x188a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_188a04:
    // 0x188a04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x188a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_188a08:
    // 0x188a08: 0x10000002  b           . + 4 + (0x2 << 2)
label_188a0c:
    if (ctx->pc == 0x188A0Cu) {
        ctx->pc = 0x188A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A08u;
        // 0x188a0c: 0xae430104  sw          $v1, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A10u;
        goto label_188a10;
    }
    ctx->pc = 0x188A08u;
    {
        const bool branch_taken_0x188a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A08u;
        // 0x188a0c: 0xae430104  sw          $v1, 0x104($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a08) {
            ctx->pc = 0x188A14u;
            goto label_188a14;
        }
    }
    ctx->pc = 0x188A10u;
label_188a10:
    // 0x188a10: 0xae400104  sw          $zero, 0x104($s2)
    ctx->pc = 0x188a10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 260), GPR_U32(ctx, 0));
label_188a14:
    // 0x188a14: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x188a14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_188a18:
    // 0x188a18: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x188a18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_188a1c:
    // 0x188a1c: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x188a1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_188a20:
    // 0x188a20: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x188a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_188a24:
    // 0x188a24: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x188a24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_188a28:
    // 0x188a28: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x188a28u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_188a2c:
    // 0x188a2c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x188a2cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_188a30:
    // 0x188a30: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x188a30u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_188a34:
    // 0x188a34: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x188a34u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_188a38:
    // 0x188a38: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x188a38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_188a3c:
    // 0x188a3c: 0xc7ba0100  lwc1        $f26, 0x100($sp)
    ctx->pc = 0x188a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_188a40:
    // 0x188a40: 0xc7b900f8  lwc1        $f25, 0xF8($sp)
    ctx->pc = 0x188a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_188a44:
    // 0x188a44: 0xc7b800f0  lwc1        $f24, 0xF0($sp)
    ctx->pc = 0x188a44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_188a48:
    // 0x188a48: 0xc7b700e8  lwc1        $f23, 0xE8($sp)
    ctx->pc = 0x188a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_188a4c:
    // 0x188a4c: 0xc7b600e0  lwc1        $f22, 0xE0($sp)
    ctx->pc = 0x188a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_188a50:
    // 0x188a50: 0xc7b500d8  lwc1        $f21, 0xD8($sp)
    ctx->pc = 0x188a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_188a54:
    // 0x188a54: 0xc7b400d0  lwc1        $f20, 0xD0($sp)
    ctx->pc = 0x188a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_188a58:
    // 0x188a58: 0x3e00008  jr          $ra
label_188a5c:
    if (ctx->pc == 0x188A5Cu) {
        ctx->pc = 0x188A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A58u;
        // 0x188a5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A60u;
        goto label_188a60;
    }
    ctx->pc = 0x188A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A58u;
        // 0x188a5c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x188A60u;
label_188a60:
    // 0x188a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x188a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_188a64:
    // 0x188a64: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x188a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_188a68:
    // 0x188a68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x188a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_188a6c:
    // 0x188a6c: 0x24428aa8  addiu       $v0, $v0, -0x7558
    ctx->pc = 0x188a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937256));
label_188a70:
    // 0x188a70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x188a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_188a74:
    // 0x188a74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x188a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_188a78:
    // 0x188a78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x188a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_188a7c:
    // 0x188a7c: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x188a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_188a80:
    // 0x188a80: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x188a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188a84:
    // 0x188a84: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_188a88:
    if (ctx->pc == 0x188A88u) {
        ctx->pc = 0x188A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A84u;
        // 0x188a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A8Cu;
        goto label_188a8c;
    }
    ctx->pc = 0x188A84u;
    {
        const bool branch_taken_0x188a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x188A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A84u;
        // 0x188a88: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a84) {
            ctx->pc = 0x188AE8u;
            goto label_188ae8;
        }
    }
    ctx->pc = 0x188A8Cu;
label_188a8c:
    // 0x188a8c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x188a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188a90:
    // 0x188a90: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
label_188a94:
    if (ctx->pc == 0x188A94u) {
        ctx->pc = 0x188A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A90u;
        // 0x188a94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188A98u;
        goto label_188a98;
    }
    ctx->pc = 0x188A90u;
    {
        const bool branch_taken_0x188a90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x188a90) {
            ctx->pc = 0x188A94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188A90u;
            // 0x188a94: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188AE0u;
            goto label_188ae0;
        }
    }
    ctx->pc = 0x188A98u;
label_188a98:
    // 0x188a98: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x188a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_188a9c:
    // 0x188a9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_188aa0:
    if (ctx->pc == 0x188AA0u) {
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AA4u;
        goto label_188aa4;
    }
    ctx->pc = 0x188A9Cu;
    {
        const bool branch_taken_0x188a9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188A9Cu;
        // 0x188aa0: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188a9c) {
            ctx->pc = 0x188AACu;
            goto label_188aac;
        }
    }
    ctx->pc = 0x188AA4u;
label_188aa4:
    // 0x188aa4: 0x10000002  b           . + 4 + (0x2 << 2)
label_188aa8:
    if (ctx->pc == 0x188AA8u) {
        ctx->pc = 0x188AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AA4u;
        // 0x188aa8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AACu;
        goto label_188aac;
    }
    ctx->pc = 0x188AA4u;
    {
        const bool branch_taken_0x188aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AA4u;
        // 0x188aa8: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188aa4) {
            ctx->pc = 0x188AB0u;
            goto label_188ab0;
        }
    }
    ctx->pc = 0x188AACu;
label_188aac:
    // 0x188aac: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x188aacu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_188ab0:
    // 0x188ab0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x188ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_188ab4:
    // 0x188ab4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_188ab8:
    if (ctx->pc == 0x188AB8u) {
        ctx->pc = 0x188AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB4u;
        // 0x188ab8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188ABCu;
        goto label_188abc;
    }
    ctx->pc = 0x188AB4u;
    {
        const bool branch_taken_0x188ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x188AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AB4u;
        // 0x188ab8: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188ab4) {
            ctx->pc = 0x188AC4u;
            goto label_188ac4;
        }
    }
    ctx->pc = 0x188ABCu;
label_188abc:
    // 0x188abc: 0x10000002  b           . + 4 + (0x2 << 2)
label_188ac0:
    if (ctx->pc == 0x188AC0u) {
        ctx->pc = 0x188AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ABCu;
        // 0x188ac0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AC4u;
        goto label_188ac4;
    }
    ctx->pc = 0x188ABCu;
    {
        const bool branch_taken_0x188abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x188AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188ABCu;
        // 0x188ac0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x188abc) {
            ctx->pc = 0x188AC8u;
            goto label_188ac8;
        }
    }
    ctx->pc = 0x188AC4u;
label_188ac4:
    // 0x188ac4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x188ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_188ac8:
    // 0x188ac8: 0xc0808b8  jal         func_2022E0
label_188acc:
    if (ctx->pc == 0x188ACCu) {
        ctx->pc = 0x188AD0u;
        goto label_188ad0;
    }
    ctx->pc = 0x188AC8u;
    SET_GPR_U32(ctx, 31, 0x188AD0u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x188AC8u, 0x188AD0u)) {
        return;
    }
    ctx->pc = 0x188AD0u;
label_188ad0:
    // 0x188ad0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x188ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_188ad4:
    // 0x188ad4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x188ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_188ad8:
    // 0x188ad8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x188ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_188adc:
    // 0x188adc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x188adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_188ae0:
    // 0x188ae0: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
label_188ae4:
    if (ctx->pc == 0x188AE4u) {
        ctx->pc = 0x188AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AE0u;
        // 0x188ae4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AE8u;
        goto label_188ae8;
    }
    ctx->pc = 0x188AE0u;
    {
        const bool branch_taken_0x188ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x188ae0) {
            ctx->pc = 0x188AE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188AE0u;
            // 0x188ae4: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_188a90;
        }
    }
    ctx->pc = 0x188AE8u;
label_188ae8:
    // 0x188ae8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x188ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_188aec:
    // 0x188aec: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_188af0:
    if (ctx->pc == 0x188AF0u) {
        ctx->pc = 0x188AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AECu;
        // 0x188af0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AF4u;
        goto label_188af4;
    }
    ctx->pc = 0x188AECu;
    {
        const bool branch_taken_0x188aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x188aec) {
            ctx->pc = 0x188AF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x188AECu;
            // 0x188af0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x188B00u;
            goto label_188b00;
        }
    }
    ctx->pc = 0x188AF4u;
label_188af4:
    // 0x188af4: 0xc0808b8  jal         func_2022E0
label_188af8:
    if (ctx->pc == 0x188AF8u) {
        ctx->pc = 0x188AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188AF4u;
        // 0x188af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188AFCu;
        goto label_188afc;
    }
    ctx->pc = 0x188AF4u;
    SET_GPR_U32(ctx, 31, 0x188AFCu);
    ctx->pc = 0x188AF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x188AF4u;
    // 0x188af8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x188AF4u, 0x188AFCu)) {
        return;
    }
    ctx->pc = 0x188AFCu;
label_188afc:
    // 0x188afc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x188afcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_188b00:
    // 0x188b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x188b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_188b04:
    // 0x188b04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x188b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_188b08:
    // 0x188b08: 0x3e00008  jr          $ra
label_188b0c:
    if (ctx->pc == 0x188B0Cu) {
        ctx->pc = 0x188B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B08u;
        // 0x188b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x188B10u;
        goto label_fallthrough_0x188b08;
    }
    ctx->pc = 0x188B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x188B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x188B08u;
        // 0x188b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x188B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x188b08:
    ctx->pc = 0x188B10u;
}
