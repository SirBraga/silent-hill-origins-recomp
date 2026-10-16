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

// Function: sub_001ACE58
// Address: 0x1ace58 - 0x1ad328
void sub_001ACE58_0x1ace58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACE58_0x1ace58");
#endif

    switch (ctx->pc) {
        case 0x1ace58u: goto label_1ace58;
        case 0x1ace5cu: goto label_1ace5c;
        case 0x1ace60u: goto label_1ace60;
        case 0x1ace64u: goto label_1ace64;
        case 0x1ace68u: goto label_1ace68;
        case 0x1ace6cu: goto label_1ace6c;
        case 0x1ace70u: goto label_1ace70;
        case 0x1ace74u: goto label_1ace74;
        case 0x1ace78u: goto label_1ace78;
        case 0x1ace7cu: goto label_1ace7c;
        case 0x1ace80u: goto label_1ace80;
        case 0x1ace84u: goto label_1ace84;
        case 0x1ace88u: goto label_1ace88;
        case 0x1ace8cu: goto label_1ace8c;
        case 0x1ace90u: goto label_1ace90;
        case 0x1ace94u: goto label_1ace94;
        case 0x1ace98u: goto label_1ace98;
        case 0x1ace9cu: goto label_1ace9c;
        case 0x1acea0u: goto label_1acea0;
        case 0x1acea4u: goto label_1acea4;
        case 0x1acea8u: goto label_1acea8;
        case 0x1aceacu: goto label_1aceac;
        case 0x1aceb0u: goto label_1aceb0;
        case 0x1aceb4u: goto label_1aceb4;
        case 0x1aceb8u: goto label_1aceb8;
        case 0x1acebcu: goto label_1acebc;
        case 0x1acec0u: goto label_1acec0;
        case 0x1acec4u: goto label_1acec4;
        case 0x1acec8u: goto label_1acec8;
        case 0x1aceccu: goto label_1acecc;
        case 0x1aced0u: goto label_1aced0;
        case 0x1aced4u: goto label_1aced4;
        case 0x1aced8u: goto label_1aced8;
        case 0x1acedcu: goto label_1acedc;
        case 0x1acee0u: goto label_1acee0;
        case 0x1acee4u: goto label_1acee4;
        case 0x1acee8u: goto label_1acee8;
        case 0x1aceecu: goto label_1aceec;
        case 0x1acef0u: goto label_1acef0;
        case 0x1acef4u: goto label_1acef4;
        case 0x1acef8u: goto label_1acef8;
        case 0x1acefcu: goto label_1acefc;
        case 0x1acf00u: goto label_1acf00;
        case 0x1acf04u: goto label_1acf04;
        case 0x1acf08u: goto label_1acf08;
        case 0x1acf0cu: goto label_1acf0c;
        case 0x1acf10u: goto label_1acf10;
        case 0x1acf14u: goto label_1acf14;
        case 0x1acf18u: goto label_1acf18;
        case 0x1acf1cu: goto label_1acf1c;
        case 0x1acf20u: goto label_1acf20;
        case 0x1acf24u: goto label_1acf24;
        case 0x1acf28u: goto label_1acf28;
        case 0x1acf2cu: goto label_1acf2c;
        case 0x1acf30u: goto label_1acf30;
        case 0x1acf34u: goto label_1acf34;
        case 0x1acf38u: goto label_1acf38;
        case 0x1acf3cu: goto label_1acf3c;
        case 0x1acf40u: goto label_1acf40;
        case 0x1acf44u: goto label_1acf44;
        case 0x1acf48u: goto label_1acf48;
        case 0x1acf4cu: goto label_1acf4c;
        case 0x1acf50u: goto label_1acf50;
        case 0x1acf54u: goto label_1acf54;
        case 0x1acf58u: goto label_1acf58;
        case 0x1acf5cu: goto label_1acf5c;
        case 0x1acf60u: goto label_1acf60;
        case 0x1acf64u: goto label_1acf64;
        case 0x1acf68u: goto label_1acf68;
        case 0x1acf6cu: goto label_1acf6c;
        case 0x1acf70u: goto label_1acf70;
        case 0x1acf74u: goto label_1acf74;
        case 0x1acf78u: goto label_1acf78;
        case 0x1acf7cu: goto label_1acf7c;
        case 0x1acf80u: goto label_1acf80;
        case 0x1acf84u: goto label_1acf84;
        case 0x1acf88u: goto label_1acf88;
        case 0x1acf8cu: goto label_1acf8c;
        case 0x1acf90u: goto label_1acf90;
        case 0x1acf94u: goto label_1acf94;
        case 0x1acf98u: goto label_1acf98;
        case 0x1acf9cu: goto label_1acf9c;
        case 0x1acfa0u: goto label_1acfa0;
        case 0x1acfa4u: goto label_1acfa4;
        case 0x1acfa8u: goto label_1acfa8;
        case 0x1acfacu: goto label_1acfac;
        case 0x1acfb0u: goto label_1acfb0;
        case 0x1acfb4u: goto label_1acfb4;
        case 0x1acfb8u: goto label_1acfb8;
        case 0x1acfbcu: goto label_1acfbc;
        case 0x1acfc0u: goto label_1acfc0;
        case 0x1acfc4u: goto label_1acfc4;
        case 0x1acfc8u: goto label_1acfc8;
        case 0x1acfccu: goto label_1acfcc;
        case 0x1acfd0u: goto label_1acfd0;
        case 0x1acfd4u: goto label_1acfd4;
        case 0x1acfd8u: goto label_1acfd8;
        case 0x1acfdcu: goto label_1acfdc;
        case 0x1acfe0u: goto label_1acfe0;
        case 0x1acfe4u: goto label_1acfe4;
        case 0x1acfe8u: goto label_1acfe8;
        case 0x1acfecu: goto label_1acfec;
        case 0x1acff0u: goto label_1acff0;
        case 0x1acff4u: goto label_1acff4;
        case 0x1acff8u: goto label_1acff8;
        case 0x1acffcu: goto label_1acffc;
        case 0x1ad000u: goto label_1ad000;
        case 0x1ad004u: goto label_1ad004;
        case 0x1ad008u: goto label_1ad008;
        case 0x1ad00cu: goto label_1ad00c;
        case 0x1ad010u: goto label_1ad010;
        case 0x1ad014u: goto label_1ad014;
        case 0x1ad018u: goto label_1ad018;
        case 0x1ad01cu: goto label_1ad01c;
        case 0x1ad020u: goto label_1ad020;
        case 0x1ad024u: goto label_1ad024;
        case 0x1ad028u: goto label_1ad028;
        case 0x1ad02cu: goto label_1ad02c;
        case 0x1ad030u: goto label_1ad030;
        case 0x1ad034u: goto label_1ad034;
        case 0x1ad038u: goto label_1ad038;
        case 0x1ad03cu: goto label_1ad03c;
        case 0x1ad040u: goto label_1ad040;
        case 0x1ad044u: goto label_1ad044;
        case 0x1ad048u: goto label_1ad048;
        case 0x1ad04cu: goto label_1ad04c;
        case 0x1ad050u: goto label_1ad050;
        case 0x1ad054u: goto label_1ad054;
        case 0x1ad058u: goto label_1ad058;
        case 0x1ad05cu: goto label_1ad05c;
        case 0x1ad060u: goto label_1ad060;
        case 0x1ad064u: goto label_1ad064;
        case 0x1ad068u: goto label_1ad068;
        case 0x1ad06cu: goto label_1ad06c;
        case 0x1ad070u: goto label_1ad070;
        case 0x1ad074u: goto label_1ad074;
        case 0x1ad078u: goto label_1ad078;
        case 0x1ad07cu: goto label_1ad07c;
        case 0x1ad080u: goto label_1ad080;
        case 0x1ad084u: goto label_1ad084;
        case 0x1ad088u: goto label_1ad088;
        case 0x1ad08cu: goto label_1ad08c;
        case 0x1ad090u: goto label_1ad090;
        case 0x1ad094u: goto label_1ad094;
        case 0x1ad098u: goto label_1ad098;
        case 0x1ad09cu: goto label_1ad09c;
        case 0x1ad0a0u: goto label_1ad0a0;
        case 0x1ad0a4u: goto label_1ad0a4;
        case 0x1ad0a8u: goto label_1ad0a8;
        case 0x1ad0acu: goto label_1ad0ac;
        case 0x1ad0b0u: goto label_1ad0b0;
        case 0x1ad0b4u: goto label_1ad0b4;
        case 0x1ad0b8u: goto label_1ad0b8;
        case 0x1ad0bcu: goto label_1ad0bc;
        case 0x1ad0c0u: goto label_1ad0c0;
        case 0x1ad0c4u: goto label_1ad0c4;
        case 0x1ad0c8u: goto label_1ad0c8;
        case 0x1ad0ccu: goto label_1ad0cc;
        case 0x1ad0d0u: goto label_1ad0d0;
        case 0x1ad0d4u: goto label_1ad0d4;
        case 0x1ad0d8u: goto label_1ad0d8;
        case 0x1ad0dcu: goto label_1ad0dc;
        case 0x1ad0e0u: goto label_1ad0e0;
        case 0x1ad0e4u: goto label_1ad0e4;
        case 0x1ad0e8u: goto label_1ad0e8;
        case 0x1ad0ecu: goto label_1ad0ec;
        case 0x1ad0f0u: goto label_1ad0f0;
        case 0x1ad0f4u: goto label_1ad0f4;
        case 0x1ad0f8u: goto label_1ad0f8;
        case 0x1ad0fcu: goto label_1ad0fc;
        case 0x1ad100u: goto label_1ad100;
        case 0x1ad104u: goto label_1ad104;
        case 0x1ad108u: goto label_1ad108;
        case 0x1ad10cu: goto label_1ad10c;
        case 0x1ad110u: goto label_1ad110;
        case 0x1ad114u: goto label_1ad114;
        case 0x1ad118u: goto label_1ad118;
        case 0x1ad11cu: goto label_1ad11c;
        case 0x1ad120u: goto label_1ad120;
        case 0x1ad124u: goto label_1ad124;
        case 0x1ad128u: goto label_1ad128;
        case 0x1ad12cu: goto label_1ad12c;
        case 0x1ad130u: goto label_1ad130;
        case 0x1ad134u: goto label_1ad134;
        case 0x1ad138u: goto label_1ad138;
        case 0x1ad13cu: goto label_1ad13c;
        case 0x1ad140u: goto label_1ad140;
        case 0x1ad144u: goto label_1ad144;
        case 0x1ad148u: goto label_1ad148;
        case 0x1ad14cu: goto label_1ad14c;
        case 0x1ad150u: goto label_1ad150;
        case 0x1ad154u: goto label_1ad154;
        case 0x1ad158u: goto label_1ad158;
        case 0x1ad15cu: goto label_1ad15c;
        case 0x1ad160u: goto label_1ad160;
        case 0x1ad164u: goto label_1ad164;
        case 0x1ad168u: goto label_1ad168;
        case 0x1ad16cu: goto label_1ad16c;
        case 0x1ad170u: goto label_1ad170;
        case 0x1ad174u: goto label_1ad174;
        case 0x1ad178u: goto label_1ad178;
        case 0x1ad17cu: goto label_1ad17c;
        case 0x1ad180u: goto label_1ad180;
        case 0x1ad184u: goto label_1ad184;
        case 0x1ad188u: goto label_1ad188;
        case 0x1ad18cu: goto label_1ad18c;
        case 0x1ad190u: goto label_1ad190;
        case 0x1ad194u: goto label_1ad194;
        case 0x1ad198u: goto label_1ad198;
        case 0x1ad19cu: goto label_1ad19c;
        case 0x1ad1a0u: goto label_1ad1a0;
        case 0x1ad1a4u: goto label_1ad1a4;
        case 0x1ad1a8u: goto label_1ad1a8;
        case 0x1ad1acu: goto label_1ad1ac;
        case 0x1ad1b0u: goto label_1ad1b0;
        case 0x1ad1b4u: goto label_1ad1b4;
        case 0x1ad1b8u: goto label_1ad1b8;
        case 0x1ad1bcu: goto label_1ad1bc;
        case 0x1ad1c0u: goto label_1ad1c0;
        case 0x1ad1c4u: goto label_1ad1c4;
        case 0x1ad1c8u: goto label_1ad1c8;
        case 0x1ad1ccu: goto label_1ad1cc;
        case 0x1ad1d0u: goto label_1ad1d0;
        case 0x1ad1d4u: goto label_1ad1d4;
        case 0x1ad1d8u: goto label_1ad1d8;
        case 0x1ad1dcu: goto label_1ad1dc;
        case 0x1ad1e0u: goto label_1ad1e0;
        case 0x1ad1e4u: goto label_1ad1e4;
        case 0x1ad1e8u: goto label_1ad1e8;
        case 0x1ad1ecu: goto label_1ad1ec;
        case 0x1ad1f0u: goto label_1ad1f0;
        case 0x1ad1f4u: goto label_1ad1f4;
        case 0x1ad1f8u: goto label_1ad1f8;
        case 0x1ad1fcu: goto label_1ad1fc;
        case 0x1ad200u: goto label_1ad200;
        case 0x1ad204u: goto label_1ad204;
        case 0x1ad208u: goto label_1ad208;
        case 0x1ad20cu: goto label_1ad20c;
        case 0x1ad210u: goto label_1ad210;
        case 0x1ad214u: goto label_1ad214;
        case 0x1ad218u: goto label_1ad218;
        case 0x1ad21cu: goto label_1ad21c;
        case 0x1ad220u: goto label_1ad220;
        case 0x1ad224u: goto label_1ad224;
        case 0x1ad228u: goto label_1ad228;
        case 0x1ad22cu: goto label_1ad22c;
        case 0x1ad230u: goto label_1ad230;
        case 0x1ad234u: goto label_1ad234;
        case 0x1ad238u: goto label_1ad238;
        case 0x1ad23cu: goto label_1ad23c;
        case 0x1ad240u: goto label_1ad240;
        case 0x1ad244u: goto label_1ad244;
        case 0x1ad248u: goto label_1ad248;
        case 0x1ad24cu: goto label_1ad24c;
        case 0x1ad250u: goto label_1ad250;
        case 0x1ad254u: goto label_1ad254;
        case 0x1ad258u: goto label_1ad258;
        case 0x1ad25cu: goto label_1ad25c;
        case 0x1ad260u: goto label_1ad260;
        case 0x1ad264u: goto label_1ad264;
        case 0x1ad268u: goto label_1ad268;
        case 0x1ad26cu: goto label_1ad26c;
        case 0x1ad270u: goto label_1ad270;
        case 0x1ad274u: goto label_1ad274;
        case 0x1ad278u: goto label_1ad278;
        case 0x1ad27cu: goto label_1ad27c;
        case 0x1ad280u: goto label_1ad280;
        case 0x1ad284u: goto label_1ad284;
        case 0x1ad288u: goto label_1ad288;
        case 0x1ad28cu: goto label_1ad28c;
        case 0x1ad290u: goto label_1ad290;
        case 0x1ad294u: goto label_1ad294;
        case 0x1ad298u: goto label_1ad298;
        case 0x1ad29cu: goto label_1ad29c;
        case 0x1ad2a0u: goto label_1ad2a0;
        case 0x1ad2a4u: goto label_1ad2a4;
        case 0x1ad2a8u: goto label_1ad2a8;
        case 0x1ad2acu: goto label_1ad2ac;
        case 0x1ad2b0u: goto label_1ad2b0;
        case 0x1ad2b4u: goto label_1ad2b4;
        case 0x1ad2b8u: goto label_1ad2b8;
        case 0x1ad2bcu: goto label_1ad2bc;
        case 0x1ad2c0u: goto label_1ad2c0;
        case 0x1ad2c4u: goto label_1ad2c4;
        case 0x1ad2c8u: goto label_1ad2c8;
        case 0x1ad2ccu: goto label_1ad2cc;
        case 0x1ad2d0u: goto label_1ad2d0;
        case 0x1ad2d4u: goto label_1ad2d4;
        case 0x1ad2d8u: goto label_1ad2d8;
        case 0x1ad2dcu: goto label_1ad2dc;
        case 0x1ad2e0u: goto label_1ad2e0;
        case 0x1ad2e4u: goto label_1ad2e4;
        case 0x1ad2e8u: goto label_1ad2e8;
        case 0x1ad2ecu: goto label_1ad2ec;
        case 0x1ad2f0u: goto label_1ad2f0;
        case 0x1ad2f4u: goto label_1ad2f4;
        case 0x1ad2f8u: goto label_1ad2f8;
        case 0x1ad2fcu: goto label_1ad2fc;
        case 0x1ad300u: goto label_1ad300;
        case 0x1ad304u: goto label_1ad304;
        case 0x1ad308u: goto label_1ad308;
        case 0x1ad30cu: goto label_1ad30c;
        case 0x1ad310u: goto label_1ad310;
        case 0x1ad314u: goto label_1ad314;
        case 0x1ad318u: goto label_1ad318;
        case 0x1ad31cu: goto label_1ad31c;
        case 0x1ad320u: goto label_1ad320;
        case 0x1ad324u: goto label_1ad324;
        default: break;
    }

    ctx->pc = 0x1ace58u;

label_1ace58:
    // 0x1ace58: 0x27bdfdc0  addiu       $sp, $sp, -0x240
    ctx->pc = 0x1ace58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966720));
label_1ace5c:
    // 0x1ace5c: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x1ace5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_1ace60:
    // 0x1ace60: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x1ace60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_1ace64:
    // 0x1ace64: 0x3c120073  lui         $s2, 0x73
    ctx->pc = 0x1ace64u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
label_1ace68:
    // 0x1ace68: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x1ace68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_1ace6c:
    // 0x1ace6c: 0x26500fd8  addiu       $s0, $s2, 0xFD8
    ctx->pc = 0x1ace6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4056));
label_1ace70:
    // 0x1ace70: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x1ace70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_1ace74:
    // 0x1ace74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1ace74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ace78:
    // 0x1ace78: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x1ace78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_1ace7c:
    // 0x1ace7c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1ace7cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ace80:
    // 0x1ace80: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x1ace80u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_1ace84:
    // 0x1ace84: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1ace84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1ace88:
    // 0x1ace88: 0xe7b50228  swc1        $f21, 0x228($sp)
    ctx->pc = 0x1ace88u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_1ace8c:
    // 0x1ace8c: 0xe7b40220  swc1        $f20, 0x220($sp)
    ctx->pc = 0x1ace8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_1ace90:
    // 0x1ace90: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x1ace90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_1ace94:
    // 0x1ace94: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x1ace94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_1ace98:
    // 0x1ace98: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x1ace98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_1ace9c:
    // 0x1ace9c: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x1ace9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_1acea0:
    // 0x1acea0: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x1acea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_1acea4:
    // 0x1acea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1acea8:
    // 0x1acea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1acea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aceac:
    // 0x1aceac: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1aceacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1aceb0:
    // 0x1aceb0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1aceb0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1aceb4:
    // 0x1aceb4: 0x40f809  jalr        $v0
label_1aceb8:
    if (ctx->pc == 0x1ACEB8u) {
        ctx->pc = 0x1ACEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEB4u;
        // 0x1aceb8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEBCu;
        goto label_1acebc;
    }
    ctx->pc = 0x1ACEB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACEBCu);
        ctx->pc = 0x1ACEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEB4u;
        // 0x1aceb8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEB4u, 0x1ACEBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACEBCu;
label_1acebc:
    // 0x1acebc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acec0:
    // 0x1acec0: 0x27a50164  addiu       $a1, $sp, 0x164
    ctx->pc = 0x1acec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_1acec4:
    // 0x1acec4: 0x40f809  jalr        $v0
label_1acec8:
    if (ctx->pc == 0x1ACEC8u) {
        ctx->pc = 0x1ACEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEC4u;
        // 0x1acec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACECCu;
        goto label_1acecc;
    }
    ctx->pc = 0x1ACEC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACECCu);
        ctx->pc = 0x1ACEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEC4u;
        // 0x1acec8: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEC4u, 0x1ACECCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACECCu;
label_1acecc:
    // 0x1acecc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1aceccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1aced0:
    // 0x1aced0: 0x27a50168  addiu       $a1, $sp, 0x168
    ctx->pc = 0x1aced0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 360));
label_1aced4:
    // 0x1aced4: 0x40f809  jalr        $v0
label_1aced8:
    if (ctx->pc == 0x1ACED8u) {
        ctx->pc = 0x1ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACED4u;
        // 0x1aced8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEDCu;
        goto label_1acedc;
    }
    ctx->pc = 0x1ACED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACEDCu);
        ctx->pc = 0x1ACED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACED4u;
        // 0x1aced8: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACED4u, 0x1ACEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACEDCu;
label_1acedc:
    // 0x1acedc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acee0:
    // 0x1acee0: 0x27a5016c  addiu       $a1, $sp, 0x16C
    ctx->pc = 0x1acee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
label_1acee4:
    // 0x1acee4: 0x40f809  jalr        $v0
label_1acee8:
    if (ctx->pc == 0x1ACEE8u) {
        ctx->pc = 0x1ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE4u;
        // 0x1acee8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEECu;
        goto label_1aceec;
    }
    ctx->pc = 0x1ACEE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACEECu);
        ctx->pc = 0x1ACEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEE4u;
        // 0x1acee8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEE4u, 0x1ACEECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACEECu;
label_1aceec:
    // 0x1aceec: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1aceecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acef0:
    // 0x1acef0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x1acef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_1acef4:
    // 0x1acef4: 0x40f809  jalr        $v0
label_1acef8:
    if (ctx->pc == 0x1ACEF8u) {
        ctx->pc = 0x1ACEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEF4u;
        // 0x1acef8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACEFCu;
        goto label_1acefc;
    }
    ctx->pc = 0x1ACEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACEFCu);
        ctx->pc = 0x1ACEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACEF4u;
        // 0x1acef8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACEF4u, 0x1ACEFCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACEFCu;
label_1acefc:
    // 0x1acefc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1acefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acf00:
    // 0x1acf00: 0x27a50174  addiu       $a1, $sp, 0x174
    ctx->pc = 0x1acf00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 372));
label_1acf04:
    // 0x1acf04: 0x40f809  jalr        $v0
label_1acf08:
    if (ctx->pc == 0x1ACF08u) {
        ctx->pc = 0x1ACF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF04u;
        // 0x1acf08: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF0Cu;
        goto label_1acf0c;
    }
    ctx->pc = 0x1ACF04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF0Cu);
        ctx->pc = 0x1ACF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF04u;
        // 0x1acf08: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF04u, 0x1ACF0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF0Cu;
label_1acf0c:
    // 0x1acf0c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1acf0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acf10:
    // 0x1acf10: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x1acf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_1acf14:
    // 0x1acf14: 0x40f809  jalr        $v0
label_1acf18:
    if (ctx->pc == 0x1ACF18u) {
        ctx->pc = 0x1ACF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF14u;
        // 0x1acf18: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF1Cu;
        goto label_1acf1c;
    }
    ctx->pc = 0x1ACF14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF1Cu);
        ctx->pc = 0x1ACF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF14u;
        // 0x1acf18: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF14u, 0x1ACF1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF1Cu;
label_1acf1c:
    // 0x1acf1c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1acf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1acf20:
    // 0x1acf20: 0x27a5017c  addiu       $a1, $sp, 0x17C
    ctx->pc = 0x1acf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
label_1acf24:
    // 0x1acf24: 0x40f809  jalr        $v0
label_1acf28:
    if (ctx->pc == 0x1ACF28u) {
        ctx->pc = 0x1ACF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF24u;
        // 0x1acf28: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF2Cu;
        goto label_1acf2c;
    }
    ctx->pc = 0x1ACF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF2Cu);
        ctx->pc = 0x1ACF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF24u;
        // 0x1acf28: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF24u, 0x1ACF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF2Cu;
label_1acf2c:
    // 0x1acf2c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf30:
    // 0x1acf30: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1acf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1acf34:
    // 0x1acf34: 0x40f809  jalr        $v0
label_1acf38:
    if (ctx->pc == 0x1ACF38u) {
        ctx->pc = 0x1ACF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF34u;
        // 0x1acf38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF3Cu;
        goto label_1acf3c;
    }
    ctx->pc = 0x1ACF34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF3Cu);
        ctx->pc = 0x1ACF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF34u;
        // 0x1acf38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF34u, 0x1ACF3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF3Cu;
label_1acf3c:
    // 0x1acf3c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf40:
    // 0x1acf40: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x1acf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1acf44:
    // 0x1acf44: 0x40f809  jalr        $v0
label_1acf48:
    if (ctx->pc == 0x1ACF48u) {
        ctx->pc = 0x1ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF44u;
        // 0x1acf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF4Cu;
        goto label_1acf4c;
    }
    ctx->pc = 0x1ACF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF4Cu);
        ctx->pc = 0x1ACF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF44u;
        // 0x1acf48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF44u, 0x1ACF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF4Cu;
label_1acf4c:
    // 0x1acf4c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf50:
    // 0x1acf50: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1acf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1acf54:
    // 0x1acf54: 0x40f809  jalr        $v0
label_1acf58:
    if (ctx->pc == 0x1ACF58u) {
        ctx->pc = 0x1ACF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF54u;
        // 0x1acf58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF5Cu;
        goto label_1acf5c;
    }
    ctx->pc = 0x1ACF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF5Cu);
        ctx->pc = 0x1ACF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF54u;
        // 0x1acf58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF54u, 0x1ACF5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF5Cu;
label_1acf5c:
    // 0x1acf5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf60:
    // 0x1acf60: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1acf60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1acf64:
    // 0x1acf64: 0x40f809  jalr        $v0
label_1acf68:
    if (ctx->pc == 0x1ACF68u) {
        ctx->pc = 0x1ACF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF64u;
        // 0x1acf68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF6Cu;
        goto label_1acf6c;
    }
    ctx->pc = 0x1ACF64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF6Cu);
        ctx->pc = 0x1ACF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF64u;
        // 0x1acf68: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF64u, 0x1ACF6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF6Cu;
label_1acf6c:
    // 0x1acf6c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf70:
    // 0x1acf70: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1acf70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1acf74:
    // 0x1acf74: 0x40f809  jalr        $v0
label_1acf78:
    if (ctx->pc == 0x1ACF78u) {
        ctx->pc = 0x1ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF74u;
        // 0x1acf78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF7Cu;
        goto label_1acf7c;
    }
    ctx->pc = 0x1ACF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF7Cu);
        ctx->pc = 0x1ACF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF74u;
        // 0x1acf78: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF74u, 0x1ACF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF7Cu;
label_1acf7c:
    // 0x1acf7c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf80:
    // 0x1acf80: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1acf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1acf84:
    // 0x1acf84: 0x40f809  jalr        $v0
label_1acf88:
    if (ctx->pc == 0x1ACF88u) {
        ctx->pc = 0x1ACF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF84u;
        // 0x1acf88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF8Cu;
        goto label_1acf8c;
    }
    ctx->pc = 0x1ACF84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF8Cu);
        ctx->pc = 0x1ACF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF84u;
        // 0x1acf88: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF84u, 0x1ACF8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF8Cu;
label_1acf8c:
    // 0x1acf8c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acf90:
    // 0x1acf90: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1acf90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1acf94:
    // 0x1acf94: 0x40f809  jalr        $v0
label_1acf98:
    if (ctx->pc == 0x1ACF98u) {
        ctx->pc = 0x1ACF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF94u;
        // 0x1acf98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACF9Cu;
        goto label_1acf9c;
    }
    ctx->pc = 0x1ACF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACF9Cu);
        ctx->pc = 0x1ACF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACF94u;
        // 0x1acf98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACF94u, 0x1ACF9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACF9Cu;
label_1acf9c:
    // 0x1acf9c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1acf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1acfa0:
    // 0x1acfa0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1acfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1acfa4:
    // 0x1acfa4: 0x8c6590d8  lw          $a1, -0x6F28($v1)
    ctx->pc = 0x1acfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294938840)));
label_1acfa8:
    // 0x1acfa8: 0x40f809  jalr        $v0
label_1acfac:
    if (ctx->pc == 0x1ACFACu) {
        ctx->pc = 0x1ACFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFA8u;
        // 0x1acfac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFB0u;
        goto label_1acfb0;
    }
    ctx->pc = 0x1ACFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1ACFB0u);
        ctx->pc = 0x1ACFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFA8u;
        // 0x1acfac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACFA8u, 0x1ACFB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACFB0u;
label_1acfb0:
    // 0x1acfb0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1acfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1acfb4:
    // 0x1acfb4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1acfb8:
    // 0x1acfb8: 0xc06b568  jal         func_1AD5A0
label_1acfbc:
    if (ctx->pc == 0x1ACFBCu) {
        ctx->pc = 0x1ACFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACFB8u;
        // 0x1acfbc: 0x8c7e8614  lw          $fp, -0x79EC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936084)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACFC0u;
        goto label_1acfc0;
    }
    ctx->pc = 0x1ACFB8u;
    SET_GPR_U32(ctx, 31, 0x1ACFC0u);
    ctx->pc = 0x1ACFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACFB8u;
    // 0x1acfbc: 0x8c7e8614  lw          $fp, -0x79EC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936084)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD5A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AD5A0u, 0x1ACFB8u, 0x1ACFC0u)) {
        return;
    }
    ctx->pc = 0x1ACFC0u;
label_1acfc0:
    // 0x1acfc0: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1acfc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1acfc4:
    // 0x1acfc4: 0xc681001c  lwc1        $f1, 0x1C($s4)
    ctx->pc = 0x1acfc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1acfc8:
    // 0x1acfc8: 0x24a2b8b0  addiu       $v0, $a1, -0x4750
    ctx->pc = 0x1acfc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949040));
label_1acfcc:
    // 0x1acfcc: 0xc6310080  lwc1        $f17, 0x80($s1)
    ctx->pc = 0x1acfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[17] = f; }
label_1acfd0:
    // 0x1acfd0: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1acfd0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1acfd4:
    // 0x1acfd4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1acfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1acfd8:
    // 0x1acfd8: 0xc6100008  lwc1        $f16, 0x8($s0)
    ctx->pc = 0x1acfd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
label_1acfdc:
    // 0x1acfdc: 0x4611a443  div.s       $f17, $f20, $f17
    ctx->pc = 0x1acfdcu;
    ctx->f[17] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[17]);
label_1acfe0:
    // 0x1acfe0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1acfe0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1acfe4:
    // 0x1acfe4: 0x0  nop
    ctx->pc = 0x1acfe4u;
    // NOP
label_1acfe8:
    // 0x1acfe8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1acfe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1acfec:
    // 0x1acfec: 0xc68c0020  lwc1        $f12, 0x20($s4)
    ctx->pc = 0x1acfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1acff0:
    // 0x1acff0: 0xc68d0024  lwc1        $f13, 0x24($s4)
    ctx->pc = 0x1acff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1acff4:
    // 0x1acff4: 0x27b00110  addiu       $s0, $sp, 0x110
    ctx->pc = 0x1acff4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1acff8:
    // 0x1acff8: 0xc68e0028  lwc1        $f14, 0x28($s4)
    ctx->pc = 0x1acff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1acffc:
    // 0x1acffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1acffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad000:
    // 0x1ad000: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1ad000u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1ad004:
    // 0x1ad004: 0xc68f002c  lwc1        $f15, 0x2C($s4)
    ctx->pc = 0x1ad004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1ad008:
    // 0x1ad008: 0x24a8b8b0  addiu       $t0, $a1, -0x4750
    ctx->pc = 0x1ad008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949040));
label_1ad00c:
    // 0x1ad00c: 0x89020003  lwl         $v0, 0x3($t0)
    ctx->pc = 0x1ad00cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1ad010:
    // 0x1ad010: 0x99020000  lwr         $v0, 0x0($t0)
    ctx->pc = 0x1ad010u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1ad014:
    // 0x1ad014: 0xaba20113  swl         $v0, 0x113($sp)
    ctx->pc = 0x1ad014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 275); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ad018:
    // 0x1ad018: 0xbba20110  swr         $v0, 0x110($sp)
    ctx->pc = 0x1ad018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ad01c:
    // 0x1ad01c: 0x4600ac86  mov.s       $f18, $f21
    ctx->pc = 0x1ad01cu;
    ctx->f[18] = FPU_MOV_S(ctx->f[21]);
label_1ad020:
    // 0x1ad020: 0x4600acc6  mov.s       $f19, $f21
    ctx->pc = 0x1ad020u;
    ctx->f[19] = FPU_MOV_S(ctx->f[21]);
label_1ad024:
    // 0x1ad024: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1ad024u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1ad028:
    // 0x1ad028: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad028u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad02c:
    // 0x1ad02c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ad02cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad030:
    // 0x1ad030: 0xe7b40008  swc1        $f20, 0x8($sp)
    ctx->pc = 0x1ad030u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1ad034:
    // 0x1ad034: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ad034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad038:
    // 0x1ad038: 0xc06ce2a  jal         func_1B38A8
label_1ad03c:
    if (ctx->pc == 0x1AD03Cu) {
        ctx->pc = 0x1AD03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD038u;
        // 0x1ad03c: 0xa3a20113  sb          $v0, 0x113($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD040u;
        goto label_1ad040;
    }
    ctx->pc = 0x1AD038u;
    SET_GPR_U32(ctx, 31, 0x1AD040u);
    ctx->pc = 0x1AD03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD038u;
    // 0x1ad03c: 0xa3a20113  sb          $v0, 0x113($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B38A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B38A8u, 0x1AD038u, 0x1AD040u)) {
        return;
    }
    ctx->pc = 0x1AD040u;
label_1ad040:
    // 0x1ad040: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1ad040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1ad044:
    // 0x1ad044: 0xc06cff8  jal         func_1B3FE0
label_1ad048:
    if (ctx->pc == 0x1AD048u) {
        ctx->pc = 0x1AD048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD044u;
        // 0x1ad048: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD04Cu;
        goto label_1ad04c;
    }
    ctx->pc = 0x1AD044u;
    SET_GPR_U32(ctx, 31, 0x1AD04Cu);
    ctx->pc = 0x1AD048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD044u;
    // 0x1ad048: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3FE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B3FE0u, 0x1AD044u, 0x1AD04Cu)) {
        return;
    }
    ctx->pc = 0x1AD04Cu;
label_1ad04c:
    // 0x1ad04c: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1ad04cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
label_1ad050:
    // 0x1ad050: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x1ad050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1ad054:
    // 0x1ad054: 0x24a2b8b8  addiu       $v0, $a1, -0x4748
    ctx->pc = 0x1ad054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_1ad058:
    // 0x1ad058: 0x3c013faa  lui         $at, 0x3FAA
    ctx->pc = 0x1ad058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16298 << 16));
label_1ad05c:
    // 0x1ad05c: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1ad05cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_1ad060:
    // 0x1ad060: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad060u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad064:
    // 0x1ad064: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1ad064u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1ad068:
    // 0x1ad068: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1ad068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_1ad06c:
    // 0x1ad06c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x1ad06cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_1ad070:
    // 0x1ad070: 0xc682001c  lwc1        $f2, 0x1C($s4)
    ctx->pc = 0x1ad070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad074:
    // 0x1ad074: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1ad074u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad078:
    // 0x1ad078: 0x0  nop
    ctx->pc = 0x1ad078u;
    // NOP
label_1ad07c:
    // 0x1ad07c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ad07cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ad080:
    // 0x1ad080: 0xc48190d0  lwc1        $f1, -0x6F30($a0)
    ctx->pc = 0x1ad080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294938832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad084:
    // 0x1ad084: 0x24a6b8b8  addiu       $a2, $a1, -0x4748
    ctx->pc = 0x1ad084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949048));
label_1ad088:
    // 0x1ad088: 0x88c20003  lwl         $v0, 0x3($a2)
    ctx->pc = 0x1ad088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_1ad08c:
    // 0x1ad08c: 0x98c20000  lwr         $v0, 0x0($a2)
    ctx->pc = 0x1ad08cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_1ad090:
    // 0x1ad090: 0xaba20153  swl         $v0, 0x153($sp)
    ctx->pc = 0x1ad090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 339); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ad094:
    // 0x1ad094: 0xbba20150  swr         $v0, 0x150($sp)
    ctx->pc = 0x1ad094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1ad098:
    // 0x1ad098: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1ad098u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1ad09c:
    // 0x1ad09c: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1ad09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
label_1ad0a0:
    // 0x1ad0a0: 0x34211687  ori         $at, $at, 0x1687
    ctx->pc = 0x1ad0a0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)5767);
label_1ad0a4:
    // 0x1ad0a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1ad0a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1ad0a8:
    // 0x1ad0a8: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1ad0a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1ad0ac:
    // 0x1ad0ac: 0x46020d82  mul.s       $f22, $f1, $f2
    ctx->pc = 0x1ad0acu;
    ctx->f[22] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_1ad0b0:
    // 0x1ad0b0: 0x46036302  mul.s       $f12, $f12, $f3
    ctx->pc = 0x1ad0b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
label_1ad0b4:
    // 0x1ad0b4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad0b4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1ad0b8:
    // 0x1ad0b8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1ad0b8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad0bc:
    // 0x1ad0bc: 0xc09b0e8  jal         func_26C3A0
label_1ad0c0:
    if (ctx->pc == 0x1AD0C0u) {
        ctx->pc = 0x1AD0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD0BCu;
        // 0x1ad0c0: 0xa3a20153  sb          $v0, 0x153($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 339), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD0C4u;
        goto label_1ad0c4;
    }
    ctx->pc = 0x1AD0BCu;
    SET_GPR_U32(ctx, 31, 0x1AD0C4u);
    ctx->pc = 0x1AD0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD0BCu;
    // 0x1ad0c0: 0xa3a20153  sb          $v0, 0x153($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 339), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1AD0BCu, 0x1AD0C4u)) {
        return;
    }
    ctx->pc = 0x1AD0C4u;
label_1ad0c4:
    // 0x1ad0c4: 0x46140000  add.s       $f0, $f0, $f20
    ctx->pc = 0x1ad0c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_1ad0c8:
    // 0x1ad0c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1ad0c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1ad0cc:
    // 0x1ad0cc: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x1ad0ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_1ad0d0:
    // 0x1ad0d0: 0x0  nop
    ctx->pc = 0x1ad0d0u;
    // NOP
label_1ad0d4:
    // 0x1ad0d4: 0x46090002  mul.s       $f0, $f0, $f9
    ctx->pc = 0x1ad0d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[9]);
label_1ad0d8:
    // 0x1ad0d8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ad0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ad0dc:
    // 0x1ad0dc: 0x46150540  add.s       $f21, $f0, $f21
    ctx->pc = 0x1ad0dcu;
    ctx->f[21] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_1ad0e0:
    // 0x1ad0e0: 0x2443b890  addiu       $v1, $v0, -0x4770
    ctx->pc = 0x1ad0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949008));
label_1ad0e4:
    // 0x1ad0e4: 0xc4660004  lwc1        $f6, 0x4($v1)
    ctx->pc = 0x1ad0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_1ad0e8:
    // 0x1ad0e8: 0xc4680008  lwc1        $f8, 0x8($v1)
    ctx->pc = 0x1ad0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_1ad0ec:
    // 0x1ad0ec: 0xc467000c  lwc1        $f7, 0xC($v1)
    ctx->pc = 0x1ad0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_1ad0f0:
    // 0x1ad0f0: 0x46153182  mul.s       $f6, $f6, $f21
    ctx->pc = 0x1ad0f0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[21]);
label_1ad0f4:
    // 0x1ad0f4: 0xc445b890  lwc1        $f5, -0x4770($v0)
    ctx->pc = 0x1ad0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1ad0f8:
    // 0x1ad0f8: 0x46154202  mul.s       $f8, $f8, $f21
    ctx->pc = 0x1ad0f8u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[21]);
label_1ad0fc:
    // 0x1ad0fc: 0x461539c2  mul.s       $f7, $f7, $f21
    ctx->pc = 0x1ad0fcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[21]);
label_1ad100:
    // 0x1ad100: 0x46152942  mul.s       $f5, $f5, $f21
    ctx->pc = 0x1ad100u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
label_1ad104:
    // 0x1ad104: 0xe7a60124  swc1        $f6, 0x124($sp)
    ctx->pc = 0x1ad104u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_1ad108:
    // 0x1ad108: 0xe7a80128  swc1        $f8, 0x128($sp)
    ctx->pc = 0x1ad108u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_1ad10c:
    // 0x1ad10c: 0xe7a7012c  swc1        $f7, 0x12C($sp)
    ctx->pc = 0x1ad10cu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_1ad110:
    // 0x1ad110: 0xe7a50120  swc1        $f5, 0x120($sp)
    ctx->pc = 0x1ad110u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_1ad114:
    // 0x1ad114: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1ad114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_1ad118:
    // 0x1ad118: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x1ad118u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_1ad11c:
    // 0x1ad11c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1ad11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1ad120:
    // 0x1ad120: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x1ad120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1ad124:
    // 0x1ad124: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1ad124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1ad128:
    // 0x1ad128: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x1ad128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1ad12c:
    // 0x1ad12c: 0x46142102  mul.s       $f4, $f4, $f20
    ctx->pc = 0x1ad12cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
label_1ad130:
    // 0x1ad130: 0xc441b8a0  lwc1        $f1, -0x4760($v0)
    ctx->pc = 0x1ad130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1ad134:
    // 0x1ad134: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1ad134u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1ad138:
    // 0x1ad138: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x1ad138u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
label_1ad13c:
    // 0x1ad13c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1ad13cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1ad140:
    // 0x1ad140: 0xe7a4013c  swc1        $f4, 0x13C($sp)
    ctx->pc = 0x1ad140u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_1ad144:
    // 0x1ad144: 0xe7a20134  swc1        $f2, 0x134($sp)
    ctx->pc = 0x1ad144u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1ad148:
    // 0x1ad148: 0xe7a30138  swc1        $f3, 0x138($sp)
    ctx->pc = 0x1ad148u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1ad14c:
    // 0x1ad14c: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x1ad14cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1ad150:
    // 0x1ad150: 0x46050840  add.s       $f1, $f1, $f5
    ctx->pc = 0x1ad150u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_1ad154:
    // 0x1ad154: 0x46061080  add.s       $f2, $f2, $f6
    ctx->pc = 0x1ad154u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[6]);
label_1ad158:
    // 0x1ad158: 0xe7a10140  swc1        $f1, 0x140($sp)
    ctx->pc = 0x1ad158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
label_1ad15c:
    // 0x1ad15c: 0x460818c0  add.s       $f3, $f3, $f8
    ctx->pc = 0x1ad15cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[8]);
label_1ad160:
    // 0x1ad160: 0x46072100  add.s       $f4, $f4, $f7
    ctx->pc = 0x1ad160u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[7]);
label_1ad164:
    // 0x1ad164: 0xe7a20144  swc1        $f2, 0x144($sp)
    ctx->pc = 0x1ad164u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_1ad168:
    // 0x1ad168: 0xe7a30148  swc1        $f3, 0x148($sp)
    ctx->pc = 0x1ad168u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
label_1ad16c:
    // 0x1ad16c: 0xe7a4014c  swc1        $f4, 0x14C($sp)
    ctx->pc = 0x1ad16cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 332), bits); }
label_1ad170:
    // 0x1ad170: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1ad170u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1ad174:
    // 0x1ad174: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ad174u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1ad178:
    // 0x1ad178: 0x0  nop
    ctx->pc = 0x1ad178u;
    // NOP
label_1ad17c:
    // 0x1ad17c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1ad17cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1ad180:
    // 0x1ad180: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x1ad180u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1ad184:
    // 0x1ad184: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1ad184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1ad188:
    // 0x1ad188: 0x46090840  add.s       $f1, $f1, $f9
    ctx->pc = 0x1ad188u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[9]);
label_1ad18c:
    // 0x1ad18c: 0x46091080  add.s       $f2, $f2, $f9
    ctx->pc = 0x1ad18cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[9]);
label_1ad190:
    // 0x1ad190: 0x460918c0  add.s       $f3, $f3, $f9
    ctx->pc = 0x1ad190u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[9]);
label_1ad194:
    // 0x1ad194: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad194u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad198:
    // 0x1ad198: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad198u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad19c:
    // 0x1ad19c: 0xa3a20110  sb          $v0, 0x110($sp)
    ctx->pc = 0x1ad19cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 2));
label_1ad1a0:
    // 0x1ad1a0: 0x46001024  .word       0x46001024                   # cvt.w.s     $f0, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad1a0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad1a4:
    // 0x1ad1a4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad1a4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad1a8:
    // 0x1ad1a8: 0xa3a20111  sb          $v0, 0x111($sp)
    ctx->pc = 0x1ad1a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 273), (uint8_t)GPR_U32(ctx, 2));
label_1ad1ac:
    // 0x1ad1ac: 0x46001824  .word       0x46001824                   # cvt.w.s     $f0, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1ad1acu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_1ad1b0:
    // 0x1ad1b0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1ad1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1ad1b4:
    // 0x1ad1b4: 0xa3a20112  sb          $v0, 0x112($sp)
    ctx->pc = 0x1ad1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 274), (uint8_t)GPR_U32(ctx, 2));
label_1ad1b8:
    // 0x1ad1b8: 0x93a20153  lbu         $v0, 0x153($sp)
    ctx->pc = 0x1ad1b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 339)));
label_1ad1bc:
    // 0x1ad1bc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1ad1bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ad1c0:
    // 0x1ad1c0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1ad1c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad1c4:
    // 0x1ad1c4: 0x27a70150  addiu       $a3, $sp, 0x150
    ctx->pc = 0x1ad1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ad1c8:
    // 0x1ad1c8: 0x8e840008  lw          $a0, 0x8($s4)
    ctx->pc = 0x1ad1c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_1ad1cc:
    // 0x1ad1cc: 0x8e850030  lw          $a1, 0x30($s4)
    ctx->pc = 0x1ad1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_1ad1d0:
    // 0x1ad1d0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x1ad1d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ad1d4:
    // 0x1ad1d4: 0xa3a20113  sb          $v0, 0x113($sp)
    ctx->pc = 0x1ad1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 275), (uint8_t)GPR_U32(ctx, 2));
label_1ad1d8:
    // 0x1ad1d8: 0x2686003c  addiu       $a2, $s4, 0x3C
    ctx->pc = 0x1ad1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 60));
label_1ad1dc:
    // 0x1ad1dc: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad1dcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1ad1e0:
    // 0x1ad1e0: 0xc085cec  jal         func_2173B0
label_1ad1e4:
    if (ctx->pc == 0x1AD1E4u) {
        ctx->pc = 0x1AD1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1E0u;
        // 0x1ad1e4: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1E8u;
        goto label_1ad1e8;
    }
    ctx->pc = 0x1AD1E0u;
    SET_GPR_U32(ctx, 31, 0x1AD1E8u);
    ctx->pc = 0x1AD1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD1E0u;
    // 0x1ad1e4: 0x240b82d  daddu       $s7, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1AD1E0u, 0x1AD1E8u)) {
        return;
    }
    ctx->pc = 0x1AD1E8u;
label_1ad1e8:
    // 0x1ad1e8: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1ad1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_1ad1ec:
    // 0x1ad1ec: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_1ad1f0:
    if (ctx->pc == 0x1AD1F0u) {
        ctx->pc = 0x1AD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1ECu;
        // 0x1ad1f0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD1F4u;
        goto label_1ad1f4;
    }
    ctx->pc = 0x1AD1ECu;
    {
        const bool branch_taken_0x1ad1ec = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1AD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD1ECu;
        // 0x1ad1f0: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad1ec) {
            ctx->pc = 0x1AD268u;
            goto label_1ad268;
        }
    }
    ctx->pc = 0x1AD1F4u;
label_1ad1f4:
    // 0x1ad1f4: 0x26900058  addiu       $s0, $s4, 0x58
    ctx->pc = 0x1ad1f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_1ad1f8:
    // 0x1ad1f8: 0x2691004c  addiu       $s1, $s4, 0x4C
    ctx->pc = 0x1ad1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 76));
label_1ad1fc:
    // 0x1ad1fc: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1ad1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad200:
    // 0x1ad200: 0x8e8200c0  lw          $v0, 0xC0($s4)
    ctx->pc = 0x1ad200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 192)));
label_1ad204:
    // 0x1ad204: 0x1662000b  bne         $s3, $v0, . + 4 + (0xB << 2)
label_1ad208:
    if (ctx->pc == 0x1AD208u) {
        ctx->pc = 0x1AD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD204u;
        // 0x1ad208: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD20Cu;
        goto label_1ad20c;
    }
    ctx->pc = 0x1AD204u;
    {
        const bool branch_taken_0x1ad204 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AD208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD204u;
        // 0x1ad208: 0x8e840008  lw          $a0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad204) {
            ctx->pc = 0x1AD234u;
            goto label_1ad234;
        }
    }
    ctx->pc = 0x1AD20Cu;
label_1ad20c:
    // 0x1ad20c: 0x17d40009  bne         $fp, $s4, . + 4 + (0x9 << 2)
label_1ad210:
    if (ctx->pc == 0x1AD210u) {
        ctx->pc = 0x1AD214u;
        goto label_1ad214;
    }
    ctx->pc = 0x1AD20Cu;
    {
        const bool branch_taken_0x1ad20c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 20));
        if (branch_taken_0x1ad20c) {
            ctx->pc = 0x1AD234u;
            goto label_1ad234;
        }
    }
    ctx->pc = 0x1AD214u;
label_1ad214:
    // 0x1ad214: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1ad214u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ad218:
    // 0x1ad218: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1ad218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad21c:
    // 0x1ad21c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad21cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1ad220:
    // 0x1ad220: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x1ad220u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1ad224:
    // 0x1ad224: 0xc085cec  jal         func_2173B0
label_1ad228:
    if (ctx->pc == 0x1AD228u) {
        ctx->pc = 0x1AD228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD224u;
        // 0x1ad228: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD22Cu;
        goto label_1ad22c;
    }
    ctx->pc = 0x1AD224u;
    SET_GPR_U32(ctx, 31, 0x1AD22Cu);
    ctx->pc = 0x1AD228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD224u;
    // 0x1ad228: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1AD224u, 0x1AD22Cu)) {
        return;
    }
    ctx->pc = 0x1AD22Cu;
label_1ad22c:
    // 0x1ad22c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1ad230:
    if (ctx->pc == 0x1AD230u) {
        ctx->pc = 0x1AD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD22Cu;
        // 0x1ad230: 0x8e8200bc  lw          $v0, 0xBC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD234u;
        goto label_1ad234;
    }
    ctx->pc = 0x1AD22Cu;
    {
        const bool branch_taken_0x1ad22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD22Cu;
        // 0x1ad230: 0x8e8200bc  lw          $v0, 0xBC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad22c) {
            ctx->pc = 0x1AD250u;
            goto label_1ad250;
        }
    }
    ctx->pc = 0x1AD234u;
label_1ad234:
    // 0x1ad234: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1ad234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1ad238:
    // 0x1ad238: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1ad238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1ad23c:
    // 0x1ad23c: 0x4600b306  mov.s       $f12, $f22
    ctx->pc = 0x1ad23cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
label_1ad240:
    // 0x1ad240: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x1ad240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1ad244:
    // 0x1ad244: 0xc085cec  jal         func_2173B0
label_1ad248:
    if (ctx->pc == 0x1AD248u) {
        ctx->pc = 0x1AD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD244u;
        // 0x1ad248: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD24Cu;
        goto label_1ad24c;
    }
    ctx->pc = 0x1AD244u;
    SET_GPR_U32(ctx, 31, 0x1AD24Cu);
    ctx->pc = 0x1AD248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AD244u;
    // 0x1ad248: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2173B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2173B0u, 0x1AD244u, 0x1AD24Cu)) {
        return;
    }
    ctx->pc = 0x1AD24Cu;
label_1ad24c:
    // 0x1ad24c: 0x8e8200bc  lw          $v0, 0xBC($s4)
    ctx->pc = 0x1ad24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_1ad250:
    // 0x1ad250: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ad250u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ad254:
    // 0x1ad254: 0x2631001c  addiu       $s1, $s1, 0x1C
    ctx->pc = 0x1ad254u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_1ad258:
    // 0x1ad258: 0x2652001c  addiu       $s2, $s2, 0x1C
    ctx->pc = 0x1ad258u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
label_1ad25c:
    // 0x1ad25c: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ad25cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ad260:
    // 0x1ad260: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1ad264:
    if (ctx->pc == 0x1AD264u) {
        ctx->pc = 0x1AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD260u;
        // 0x1ad264: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD268u;
        goto label_1ad268;
    }
    ctx->pc = 0x1AD260u;
    {
        const bool branch_taken_0x1ad260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD260u;
        // 0x1ad264: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad260) {
            ctx->pc = 0x1AD200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ad200;
        }
    }
    ctx->pc = 0x1AD268u;
label_1ad268:
    // 0x1ad268: 0x26f00fd8  addiu       $s0, $s7, 0xFD8
    ctx->pc = 0x1ad268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), 4056));
label_1ad26c:
    // 0x1ad26c: 0x8fa50160  lw          $a1, 0x160($sp)
    ctx->pc = 0x1ad26cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1ad270:
    // 0x1ad270: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad274:
    // 0x1ad274: 0x40f809  jalr        $v0
label_1ad278:
    if (ctx->pc == 0x1AD278u) {
        ctx->pc = 0x1AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD274u;
        // 0x1ad278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD27Cu;
        goto label_1ad27c;
    }
    ctx->pc = 0x1AD274u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD27Cu);
        ctx->pc = 0x1AD278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD274u;
        // 0x1ad278: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD274u, 0x1AD27Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD27Cu;
label_1ad27c:
    // 0x1ad27c: 0x8fa50164  lw          $a1, 0x164($sp)
    ctx->pc = 0x1ad27cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 356)));
label_1ad280:
    // 0x1ad280: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad284:
    // 0x1ad284: 0x40f809  jalr        $v0
label_1ad288:
    if (ctx->pc == 0x1AD288u) {
        ctx->pc = 0x1AD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD284u;
        // 0x1ad288: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD28Cu;
        goto label_1ad28c;
    }
    ctx->pc = 0x1AD284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD28Cu);
        ctx->pc = 0x1AD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD284u;
        // 0x1ad288: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD284u, 0x1AD28Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD28Cu;
label_1ad28c:
    // 0x1ad28c: 0x8fa50168  lw          $a1, 0x168($sp)
    ctx->pc = 0x1ad28cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
label_1ad290:
    // 0x1ad290: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad294:
    // 0x1ad294: 0x40f809  jalr        $v0
label_1ad298:
    if (ctx->pc == 0x1AD298u) {
        ctx->pc = 0x1AD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD294u;
        // 0x1ad298: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD29Cu;
        goto label_1ad29c;
    }
    ctx->pc = 0x1AD294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD29Cu);
        ctx->pc = 0x1AD298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD294u;
        // 0x1ad298: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD294u, 0x1AD29Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD29Cu;
label_1ad29c:
    // 0x1ad29c: 0x8fa5016c  lw          $a1, 0x16C($sp)
    ctx->pc = 0x1ad29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 364)));
label_1ad2a0:
    // 0x1ad2a0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad2a4:
    // 0x1ad2a4: 0x40f809  jalr        $v0
label_1ad2a8:
    if (ctx->pc == 0x1AD2A8u) {
        ctx->pc = 0x1AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2A4u;
        // 0x1ad2a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2ACu;
        goto label_1ad2ac;
    }
    ctx->pc = 0x1AD2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2ACu);
        ctx->pc = 0x1AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2A4u;
        // 0x1ad2a8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2A4u, 0x1AD2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD2ACu;
label_1ad2ac:
    // 0x1ad2ac: 0x8fa50170  lw          $a1, 0x170($sp)
    ctx->pc = 0x1ad2acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1ad2b0:
    // 0x1ad2b0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad2b4:
    // 0x1ad2b4: 0x40f809  jalr        $v0
label_1ad2b8:
    if (ctx->pc == 0x1AD2B8u) {
        ctx->pc = 0x1AD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2B4u;
        // 0x1ad2b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2BCu;
        goto label_1ad2bc;
    }
    ctx->pc = 0x1AD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2BCu);
        ctx->pc = 0x1AD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2B4u;
        // 0x1ad2b8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2B4u, 0x1AD2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD2BCu;
label_1ad2bc:
    // 0x1ad2bc: 0x8fa50174  lw          $a1, 0x174($sp)
    ctx->pc = 0x1ad2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 372)));
label_1ad2c0:
    // 0x1ad2c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad2c4:
    // 0x1ad2c4: 0x40f809  jalr        $v0
label_1ad2c8:
    if (ctx->pc == 0x1AD2C8u) {
        ctx->pc = 0x1AD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2C4u;
        // 0x1ad2c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2CCu;
        goto label_1ad2cc;
    }
    ctx->pc = 0x1AD2C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2CCu);
        ctx->pc = 0x1AD2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2C4u;
        // 0x1ad2c8: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2C4u, 0x1AD2CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD2CCu;
label_1ad2cc:
    // 0x1ad2cc: 0x8fa50178  lw          $a1, 0x178($sp)
    ctx->pc = 0x1ad2ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 376)));
label_1ad2d0:
    // 0x1ad2d0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad2d4:
    // 0x1ad2d4: 0x40f809  jalr        $v0
label_1ad2d8:
    if (ctx->pc == 0x1AD2D8u) {
        ctx->pc = 0x1AD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2D4u;
        // 0x1ad2d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2DCu;
        goto label_1ad2dc;
    }
    ctx->pc = 0x1AD2D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2DCu);
        ctx->pc = 0x1AD2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2D4u;
        // 0x1ad2d8: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2D4u, 0x1AD2DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD2DCu;
label_1ad2dc:
    // 0x1ad2dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1ad2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1ad2e0:
    // 0x1ad2e0: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x1ad2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ad2e4:
    // 0x1ad2e4: 0x40f809  jalr        $v0
label_1ad2e8:
    if (ctx->pc == 0x1AD2E8u) {
        ctx->pc = 0x1AD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E4u;
        // 0x1ad2e8: 0x8fa5017c  lw          $a1, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD2ECu;
        goto label_1ad2ec;
    }
    ctx->pc = 0x1AD2E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AD2ECu);
        ctx->pc = 0x1AD2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD2E4u;
        // 0x1ad2e8: 0x8fa5017c  lw          $a1, 0x17C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD2E4u, 0x1AD2ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AD2ECu;
label_1ad2ec:
    // 0x1ad2ec: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x1ad2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_1ad2f0:
    // 0x1ad2f0: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x1ad2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_1ad2f4:
    // 0x1ad2f4: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x1ad2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_1ad2f8:
    // 0x1ad2f8: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x1ad2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_1ad2fc:
    // 0x1ad2fc: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x1ad2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_1ad300:
    // 0x1ad300: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x1ad300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1ad304:
    // 0x1ad304: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x1ad304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1ad308:
    // 0x1ad308: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x1ad308u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1ad30c:
    // 0x1ad30c: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x1ad30cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1ad310:
    // 0x1ad310: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x1ad310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_1ad314:
    // 0x1ad314: 0xc7b60230  lwc1        $f22, 0x230($sp)
    ctx->pc = 0x1ad314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1ad318:
    // 0x1ad318: 0xc7b50228  lwc1        $f21, 0x228($sp)
    ctx->pc = 0x1ad318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1ad31c:
    // 0x1ad31c: 0xc7b40220  lwc1        $f20, 0x220($sp)
    ctx->pc = 0x1ad31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1ad320:
    // 0x1ad320: 0x3e00008  jr          $ra
label_1ad324:
    if (ctx->pc == 0x1AD324u) {
        ctx->pc = 0x1AD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD320u;
        // 0x1ad324: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AD328u;
        goto label_fallthrough_0x1ad320;
    }
    ctx->pc = 0x1AD320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AD324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD320u;
        // 0x1ad324: 0x27bd0240  addiu       $sp, $sp, 0x240 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1ad320:
    ctx->pc = 0x1AD328u;
}
