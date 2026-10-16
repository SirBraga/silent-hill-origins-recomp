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

// Function: sub_00229F70
// Address: 0x229f70 - 0x22a4f8
void sub_00229F70_0x229f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00229F70_0x229f70");
#endif

    switch (ctx->pc) {
        case 0x229f70u: goto label_229f70;
        case 0x229f74u: goto label_229f74;
        case 0x229f78u: goto label_229f78;
        case 0x229f7cu: goto label_229f7c;
        case 0x229f80u: goto label_229f80;
        case 0x229f84u: goto label_229f84;
        case 0x229f88u: goto label_229f88;
        case 0x229f8cu: goto label_229f8c;
        case 0x229f90u: goto label_229f90;
        case 0x229f94u: goto label_229f94;
        case 0x229f98u: goto label_229f98;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fa0u: goto label_229fa0;
        case 0x229fa4u: goto label_229fa4;
        case 0x229fa8u: goto label_229fa8;
        case 0x229facu: goto label_229fac;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fb4u: goto label_229fb4;
        case 0x229fb8u: goto label_229fb8;
        case 0x229fbcu: goto label_229fbc;
        case 0x229fc0u: goto label_229fc0;
        case 0x229fc4u: goto label_229fc4;
        case 0x229fc8u: goto label_229fc8;
        case 0x229fccu: goto label_229fcc;
        case 0x229fd0u: goto label_229fd0;
        case 0x229fd4u: goto label_229fd4;
        case 0x229fd8u: goto label_229fd8;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fe0u: goto label_229fe0;
        case 0x229fe4u: goto label_229fe4;
        case 0x229fe8u: goto label_229fe8;
        case 0x229fecu: goto label_229fec;
        case 0x229ff0u: goto label_229ff0;
        case 0x229ff4u: goto label_229ff4;
        case 0x229ff8u: goto label_229ff8;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a000u: goto label_22a000;
        case 0x22a004u: goto label_22a004;
        case 0x22a008u: goto label_22a008;
        case 0x22a00cu: goto label_22a00c;
        case 0x22a010u: goto label_22a010;
        case 0x22a014u: goto label_22a014;
        case 0x22a018u: goto label_22a018;
        case 0x22a01cu: goto label_22a01c;
        case 0x22a020u: goto label_22a020;
        case 0x22a024u: goto label_22a024;
        case 0x22a028u: goto label_22a028;
        case 0x22a02cu: goto label_22a02c;
        case 0x22a030u: goto label_22a030;
        case 0x22a034u: goto label_22a034;
        case 0x22a038u: goto label_22a038;
        case 0x22a03cu: goto label_22a03c;
        case 0x22a040u: goto label_22a040;
        case 0x22a044u: goto label_22a044;
        case 0x22a048u: goto label_22a048;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a050u: goto label_22a050;
        case 0x22a054u: goto label_22a054;
        case 0x22a058u: goto label_22a058;
        case 0x22a05cu: goto label_22a05c;
        case 0x22a060u: goto label_22a060;
        case 0x22a064u: goto label_22a064;
        case 0x22a068u: goto label_22a068;
        case 0x22a06cu: goto label_22a06c;
        case 0x22a070u: goto label_22a070;
        case 0x22a074u: goto label_22a074;
        case 0x22a078u: goto label_22a078;
        case 0x22a07cu: goto label_22a07c;
        case 0x22a080u: goto label_22a080;
        case 0x22a084u: goto label_22a084;
        case 0x22a088u: goto label_22a088;
        case 0x22a08cu: goto label_22a08c;
        case 0x22a090u: goto label_22a090;
        case 0x22a094u: goto label_22a094;
        case 0x22a098u: goto label_22a098;
        case 0x22a09cu: goto label_22a09c;
        case 0x22a0a0u: goto label_22a0a0;
        case 0x22a0a4u: goto label_22a0a4;
        case 0x22a0a8u: goto label_22a0a8;
        case 0x22a0acu: goto label_22a0ac;
        case 0x22a0b0u: goto label_22a0b0;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0b8u: goto label_22a0b8;
        case 0x22a0bcu: goto label_22a0bc;
        case 0x22a0c0u: goto label_22a0c0;
        case 0x22a0c4u: goto label_22a0c4;
        case 0x22a0c8u: goto label_22a0c8;
        case 0x22a0ccu: goto label_22a0cc;
        case 0x22a0d0u: goto label_22a0d0;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0d8u: goto label_22a0d8;
        case 0x22a0dcu: goto label_22a0dc;
        case 0x22a0e0u: goto label_22a0e0;
        case 0x22a0e4u: goto label_22a0e4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a0ecu: goto label_22a0ec;
        case 0x22a0f0u: goto label_22a0f0;
        case 0x22a0f4u: goto label_22a0f4;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a0fcu: goto label_22a0fc;
        case 0x22a100u: goto label_22a100;
        case 0x22a104u: goto label_22a104;
        case 0x22a108u: goto label_22a108;
        case 0x22a10cu: goto label_22a10c;
        case 0x22a110u: goto label_22a110;
        case 0x22a114u: goto label_22a114;
        case 0x22a118u: goto label_22a118;
        case 0x22a11cu: goto label_22a11c;
        case 0x22a120u: goto label_22a120;
        case 0x22a124u: goto label_22a124;
        case 0x22a128u: goto label_22a128;
        case 0x22a12cu: goto label_22a12c;
        case 0x22a130u: goto label_22a130;
        case 0x22a134u: goto label_22a134;
        case 0x22a138u: goto label_22a138;
        case 0x22a13cu: goto label_22a13c;
        case 0x22a140u: goto label_22a140;
        case 0x22a144u: goto label_22a144;
        case 0x22a148u: goto label_22a148;
        case 0x22a14cu: goto label_22a14c;
        case 0x22a150u: goto label_22a150;
        case 0x22a154u: goto label_22a154;
        case 0x22a158u: goto label_22a158;
        case 0x22a15cu: goto label_22a15c;
        case 0x22a160u: goto label_22a160;
        case 0x22a164u: goto label_22a164;
        case 0x22a168u: goto label_22a168;
        case 0x22a16cu: goto label_22a16c;
        case 0x22a170u: goto label_22a170;
        case 0x22a174u: goto label_22a174;
        case 0x22a178u: goto label_22a178;
        case 0x22a17cu: goto label_22a17c;
        case 0x22a180u: goto label_22a180;
        case 0x22a184u: goto label_22a184;
        case 0x22a188u: goto label_22a188;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a190u: goto label_22a190;
        case 0x22a194u: goto label_22a194;
        case 0x22a198u: goto label_22a198;
        case 0x22a19cu: goto label_22a19c;
        case 0x22a1a0u: goto label_22a1a0;
        case 0x22a1a4u: goto label_22a1a4;
        case 0x22a1a8u: goto label_22a1a8;
        case 0x22a1acu: goto label_22a1ac;
        case 0x22a1b0u: goto label_22a1b0;
        case 0x22a1b4u: goto label_22a1b4;
        case 0x22a1b8u: goto label_22a1b8;
        case 0x22a1bcu: goto label_22a1bc;
        case 0x22a1c0u: goto label_22a1c0;
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a1c8u: goto label_22a1c8;
        case 0x22a1ccu: goto label_22a1cc;
        case 0x22a1d0u: goto label_22a1d0;
        case 0x22a1d4u: goto label_22a1d4;
        case 0x22a1d8u: goto label_22a1d8;
        case 0x22a1dcu: goto label_22a1dc;
        case 0x22a1e0u: goto label_22a1e0;
        case 0x22a1e4u: goto label_22a1e4;
        case 0x22a1e8u: goto label_22a1e8;
        case 0x22a1ecu: goto label_22a1ec;
        case 0x22a1f0u: goto label_22a1f0;
        case 0x22a1f4u: goto label_22a1f4;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a1fcu: goto label_22a1fc;
        case 0x22a200u: goto label_22a200;
        case 0x22a204u: goto label_22a204;
        case 0x22a208u: goto label_22a208;
        case 0x22a20cu: goto label_22a20c;
        case 0x22a210u: goto label_22a210;
        case 0x22a214u: goto label_22a214;
        case 0x22a218u: goto label_22a218;
        case 0x22a21cu: goto label_22a21c;
        case 0x22a220u: goto label_22a220;
        case 0x22a224u: goto label_22a224;
        case 0x22a228u: goto label_22a228;
        case 0x22a22cu: goto label_22a22c;
        case 0x22a230u: goto label_22a230;
        case 0x22a234u: goto label_22a234;
        case 0x22a238u: goto label_22a238;
        case 0x22a23cu: goto label_22a23c;
        case 0x22a240u: goto label_22a240;
        case 0x22a244u: goto label_22a244;
        case 0x22a248u: goto label_22a248;
        case 0x22a24cu: goto label_22a24c;
        case 0x22a250u: goto label_22a250;
        case 0x22a254u: goto label_22a254;
        case 0x22a258u: goto label_22a258;
        case 0x22a25cu: goto label_22a25c;
        case 0x22a260u: goto label_22a260;
        case 0x22a264u: goto label_22a264;
        case 0x22a268u: goto label_22a268;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a270u: goto label_22a270;
        case 0x22a274u: goto label_22a274;
        case 0x22a278u: goto label_22a278;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a280u: goto label_22a280;
        case 0x22a284u: goto label_22a284;
        case 0x22a288u: goto label_22a288;
        case 0x22a28cu: goto label_22a28c;
        case 0x22a290u: goto label_22a290;
        case 0x22a294u: goto label_22a294;
        case 0x22a298u: goto label_22a298;
        case 0x22a29cu: goto label_22a29c;
        case 0x22a2a0u: goto label_22a2a0;
        case 0x22a2a4u: goto label_22a2a4;
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2acu: goto label_22a2ac;
        case 0x22a2b0u: goto label_22a2b0;
        case 0x22a2b4u: goto label_22a2b4;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2bcu: goto label_22a2bc;
        case 0x22a2c0u: goto label_22a2c0;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2ccu: goto label_22a2cc;
        case 0x22a2d0u: goto label_22a2d0;
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2ecu: goto label_22a2ec;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f4u: goto label_22a2f4;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a2fcu: goto label_22a2fc;
        case 0x22a300u: goto label_22a300;
        case 0x22a304u: goto label_22a304;
        case 0x22a308u: goto label_22a308;
        case 0x22a30cu: goto label_22a30c;
        case 0x22a310u: goto label_22a310;
        case 0x22a314u: goto label_22a314;
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4ccu: goto label_22a4cc;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        default: break;
    }

    ctx->pc = 0x229f70u;

label_229f70:
    // 0x229f70: 0x27bdf8f0  addiu       $sp, $sp, -0x710
    ctx->pc = 0x229f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965488));
label_229f74:
    // 0x229f74: 0x7fb306d0  sq          $s3, 0x6D0($sp)
    ctx->pc = 0x229f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1744), GPR_VEC(ctx, 19));
label_229f78:
    // 0x229f78: 0x7fb406c0  sq          $s4, 0x6C0($sp)
    ctx->pc = 0x229f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1728), GPR_VEC(ctx, 20));
label_229f7c:
    // 0x229f7c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x229f7cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229f80:
    // 0x229f80: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x229f80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229f84:
    // 0x229f84: 0x7fb00700  sq          $s0, 0x700($sp)
    ctx->pc = 0x229f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1792), GPR_VEC(ctx, 16));
label_229f88:
    // 0x229f88: 0x7fb106f0  sq          $s1, 0x6F0($sp)
    ctx->pc = 0x229f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1776), GPR_VEC(ctx, 17));
label_229f8c:
    // 0x229f8c: 0x7fb206e0  sq          $s2, 0x6E0($sp)
    ctx->pc = 0x229f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1760), GPR_VEC(ctx, 18));
label_229f90:
    // 0x229f90: 0x7fb506b0  sq          $s5, 0x6B0($sp)
    ctx->pc = 0x229f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1712), GPR_VEC(ctx, 21));
label_229f94:
    // 0x229f94: 0x7fb606a0  sq          $s6, 0x6A0($sp)
    ctx->pc = 0x229f94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1696), GPR_VEC(ctx, 22));
label_229f98:
    // 0x229f98: 0x7fb70690  sq          $s7, 0x690($sp)
    ctx->pc = 0x229f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 23));
label_229f9c:
    // 0x229f9c: 0x7fbe0680  sq          $fp, 0x680($sp)
    ctx->pc = 0x229f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 30));
label_229fa0:
    // 0x229fa0: 0xffbf0670  sd          $ra, 0x670($sp)
    ctx->pc = 0x229fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 31));
label_229fa4:
    // 0x229fa4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x229fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_229fa8:
    // 0x229fa8: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x229fa8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_229fac:
    // 0x229fac: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x229facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_229fb0:
    // 0x229fb0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x229fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_229fb4:
    // 0x229fb4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x229fb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229fb8:
    // 0x229fb8: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229fbc:
    // 0x229fbc: 0x40f809  jalr        $v0
label_229fc0:
    if (ctx->pc == 0x229FC0u) {
        ctx->pc = 0x229FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FBCu;
        // 0x229fc0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FC4u;
        goto label_229fc4;
    }
    ctx->pc = 0x229FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229FC4u);
        ctx->pc = 0x229FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FBCu;
        // 0x229fc0: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229FBCu, 0x229FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229FC4u;
label_229fc4:
    // 0x229fc4: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x229fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_229fc8:
    // 0x229fc8: 0x40f809  jalr        $v0
label_229fcc:
    if (ctx->pc == 0x229FCCu) {
        ctx->pc = 0x229FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC8u;
        // 0x229fcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FD0u;
        goto label_229fd0;
    }
    ctx->pc = 0x229FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x229FD0u);
        ctx->pc = 0x229FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FC8u;
        // 0x229fcc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229FC8u, 0x229FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x229FD0u;
label_229fd0:
    // 0x229fd0: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x229fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_229fd4:
    // 0x229fd4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_229fd8:
    if (ctx->pc == 0x229FD8u) {
        ctx->pc = 0x229FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FD4u;
        // 0x229fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FDCu;
        goto label_229fdc;
    }
    ctx->pc = 0x229FD4u;
    {
        const bool branch_taken_0x229fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x229FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FD4u;
        // 0x229fd8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fd4) {
            ctx->pc = 0x22A010u;
            goto label_22a010;
        }
    }
    ctx->pc = 0x229FDCu;
label_229fdc:
    // 0x229fdc: 0x828800ff  lb          $t0, 0xFF($s4)
    ctx->pc = 0x229fdcu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 255)));
label_229fe0:
    // 0x229fe0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x229fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_229fe4:
    // 0x229fe4: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x229fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_229fe8:
    // 0x229fe8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x229fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229fec:
    // 0x229fec: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x229fecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_229ff0:
    // 0x229ff0: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x229ff0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_229ff4:
    // 0x229ff4: 0xc092848  jal         func_24A120
label_229ff8:
    if (ctx->pc == 0x229FF8u) {
        ctx->pc = 0x229FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229FF4u;
        // 0x229ff8: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x229FFCu;
        goto label_229ffc;
    }
    ctx->pc = 0x229FF4u;
    SET_GPR_U32(ctx, 31, 0x229FFCu);
    ctx->pc = 0x229FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x229FF4u;
    // 0x229ff8: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x229FF4u, 0x229FFCu)) {
        return;
    }
    ctx->pc = 0x229FFCu;
label_229ffc:
    // 0x229ffc: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x229ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_22a000:
    // 0x22a000: 0xc09281a  jal         func_24A068
label_22a004:
    if (ctx->pc == 0x22A004u) {
        ctx->pc = 0x22A004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A000u;
        // 0x22a004: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A008u;
        goto label_22a008;
    }
    ctx->pc = 0x22A000u;
    SET_GPR_U32(ctx, 31, 0x22A008u);
    ctx->pc = 0x22A004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A000u;
    // 0x22a004: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22A000u, 0x22A008u)) {
        return;
    }
    ctx->pc = 0x22A008u;
label_22a008:
    // 0x22a008: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x22a008u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_22a00c:
    // 0x22a00c: 0x0  nop
    ctx->pc = 0x22a00cu;
    // NOP
label_22a010:
    // 0x22a010: 0xa3a00540  sb          $zero, 0x540($sp)
    ctx->pc = 0x22a010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
label_22a014:
    // 0x22a014: 0x1260001a  beqz        $s3, . + 4 + (0x1A << 2)
label_22a018:
    if (ctx->pc == 0x22A018u) {
        ctx->pc = 0x22A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A014u;
        // 0x22a018: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A01Cu;
        goto label_22a01c;
    }
    ctx->pc = 0x22A014u;
    {
        const bool branch_taken_0x22a014 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A014u;
        // 0x22a018: 0x27b60540  addiu       $s6, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a014) {
            ctx->pc = 0x22A080u;
            goto label_22a080;
        }
    }
    ctx->pc = 0x22A01Cu;
label_22a01c:
    // 0x22a01c: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x22a01cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_22a020:
    // 0x22a020: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_22a024:
    if (ctx->pc == 0x22A024u) {
        ctx->pc = 0x22A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A020u;
        // 0x22a024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A028u;
        goto label_22a028;
    }
    ctx->pc = 0x22A020u;
    {
        const bool branch_taken_0x22a020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A020u;
        // 0x22a024: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a020) {
            ctx->pc = 0x22A080u;
            goto label_22a080;
        }
    }
    ctx->pc = 0x22A028u;
label_22a028:
    // 0x22a028: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x22a028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_22a02c:
    // 0x22a02c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a02cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a030:
    // 0x22a030: 0x40f809  jalr        $v0
label_22a034:
    if (ctx->pc == 0x22A034u) {
        ctx->pc = 0x22A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A030u;
        // 0x22a034: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A038u;
        goto label_22a038;
    }
    ctx->pc = 0x22A030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A038u);
        ctx->pc = 0x22A034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A030u;
        // 0x22a034: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A030u, 0x22A038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A038u;
label_22a038:
    // 0x22a038: 0x8e0200f4  lw          $v0, 0xF4($s0)
    ctx->pc = 0x22a038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_22a03c:
    // 0x22a03c: 0x40f809  jalr        $v0
label_22a040:
    if (ctx->pc == 0x22A040u) {
        ctx->pc = 0x22A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A03Cu;
        // 0x22a040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A044u;
        goto label_22a044;
    }
    ctx->pc = 0x22A03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A044u);
        ctx->pc = 0x22A040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A03Cu;
        // 0x22a040: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A03Cu, 0x22A044u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A044u;
label_22a044:
    // 0x22a044: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x22a044u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_22a048:
    // 0x22a048: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_22a04c:
    if (ctx->pc == 0x22A04Cu) {
        ctx->pc = 0x22A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A048u;
        // 0x22a04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A050u;
        goto label_22a050;
    }
    ctx->pc = 0x22A048u;
    {
        const bool branch_taken_0x22a048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A048u;
        // 0x22a04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a048) {
            ctx->pc = 0x22A080u;
            goto label_22a080;
        }
    }
    ctx->pc = 0x22A050u;
label_22a050:
    // 0x22a050: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_22a054:
    // 0x22a054: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22a054u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22a058:
    // 0x22a058: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x22a058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_22a05c:
    // 0x22a05c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a05cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a060:
    // 0x22a060: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22a060u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a064:
    // 0x22a064: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x22a064u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22a068:
    // 0x22a068: 0xc092848  jal         func_24A120
label_22a06c:
    if (ctx->pc == 0x22A06Cu) {
        ctx->pc = 0x22A06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A068u;
        // 0x22a06c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A070u;
        goto label_22a070;
    }
    ctx->pc = 0x22A068u;
    SET_GPR_U32(ctx, 31, 0x22A070u);
    ctx->pc = 0x22A06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A068u;
    // 0x22a06c: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22A068u, 0x22A070u)) {
        return;
    }
    ctx->pc = 0x22A070u;
label_22a070:
    // 0x22a070: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x22a070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_22a074:
    // 0x22a074: 0xc09281a  jal         func_24A068
label_22a078:
    if (ctx->pc == 0x22A078u) {
        ctx->pc = 0x22A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A074u;
        // 0x22a078: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A07Cu;
        goto label_22a07c;
    }
    ctx->pc = 0x22A074u;
    SET_GPR_U32(ctx, 31, 0x22A07Cu);
    ctx->pc = 0x22A078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A074u;
    // 0x22a078: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22A074u, 0x22A07Cu)) {
        return;
    }
    ctx->pc = 0x22A07Cu;
label_22a07c:
    // 0x22a07c: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x22a07cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_22a080:
    // 0x22a080: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x22a080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_22a084:
    // 0x22a084: 0x8c633ea0  lw          $v1, 0x3EA0($v1)
    ctx->pc = 0x22a084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16032)));
label_22a088:
    // 0x22a088: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x22a088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_22a08c:
    // 0x22a08c: 0x26300fc8  addiu       $s0, $s1, 0xFC8
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_22a090:
    // 0x22a090: 0xafa20660  sw          $v0, 0x660($sp)
    ctx->pc = 0x22a090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 2));
label_22a094:
    // 0x22a094: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x22a094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_22a098:
    // 0x22a098: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x22a098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_22a09c:
    // 0x22a09c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22a0a0:
    if (ctx->pc == 0x22A0A0u) {
        ctx->pc = 0x22A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A09Cu;
        // 0x22a0a0: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0A4u;
        goto label_22a0a4;
    }
    ctx->pc = 0x22A09Cu;
    {
        const bool branch_taken_0x22a09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A09Cu;
        // 0x22a0a0: 0x34048004  ori         $a0, $zero, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a09c) {
            ctx->pc = 0x22A0B4u;
            goto label_22a0b4;
        }
    }
    ctx->pc = 0x22A0A4u;
label_22a0a4:
    // 0x22a0a4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x22a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_22a0a8:
    // 0x22a0a8: 0x34029004  ori         $v0, $zero, 0x9004
    ctx->pc = 0x22a0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36868);
label_22a0ac:
    // 0x22a0ac: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x22a0acu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2));
label_22a0b0:
    // 0x22a0b0: 0xafa40660  sw          $a0, 0x660($sp)
    ctx->pc = 0x22a0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1632), GPR_U32(ctx, 4));
label_22a0b4:
    // 0x22a0b4: 0x8fa70660  lw          $a3, 0x660($sp)
    ctx->pc = 0x22a0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_22a0b8:
    // 0x22a0b8: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_22a0bc:
    // 0x22a0bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x22a0bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22a0c0:
    // 0x22a0c0: 0xc08ac24  jal         func_22B090
label_22a0c4:
    if (ctx->pc == 0x22A0C4u) {
        ctx->pc = 0x22A0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0C0u;
        // 0x22a0c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0C8u;
        goto label_22a0c8;
    }
    ctx->pc = 0x22A0C0u;
    SET_GPR_U32(ctx, 31, 0x22A0C8u);
    ctx->pc = 0x22A0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0C0u;
    // 0x22a0c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B090u, 0x22A0C0u, 0x22A0C8u)) {
        return;
    }
    ctx->pc = 0x22A0C8u;
label_22a0c8:
    // 0x22a0c8: 0x8fa60660  lw          $a2, 0x660($sp)
    ctx->pc = 0x22a0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_22a0cc:
    // 0x22a0cc: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x22a0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_22a0d0:
    // 0x22a0d0: 0x27a80654  addiu       $t0, $sp, 0x654
    ctx->pc = 0x22a0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_22a0d4:
    // 0x22a0d4: 0x27a90658  addiu       $t1, $sp, 0x658
    ctx->pc = 0x22a0d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_22a0d8:
    // 0x22a0d8: 0x27aa065c  addiu       $t2, $sp, 0x65C
    ctx->pc = 0x22a0d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
label_22a0dc:
    // 0x22a0dc: 0xafa00650  sw          $zero, 0x650($sp)
    ctx->pc = 0x22a0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 0));
label_22a0e0:
    // 0x22a0e0: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22a0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_22a0e4:
    // 0x22a0e4: 0xafa00654  sw          $zero, 0x654($sp)
    ctx->pc = 0x22a0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 0));
label_22a0e8:
    // 0x22a0e8: 0xc08a676  jal         func_2299D8
label_22a0ec:
    if (ctx->pc == 0x22A0ECu) {
        ctx->pc = 0x22A0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0E8u;
        // 0x22a0ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0F0u;
        goto label_22a0f0;
    }
    ctx->pc = 0x22A0E8u;
    SET_GPR_U32(ctx, 31, 0x22A0F0u);
    ctx->pc = 0x22A0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A0E8u;
    // 0x22a0ec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2299D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2299D8u, 0x22A0E8u, 0x22A0F0u)) {
        return;
    }
    ctx->pc = 0x22A0F0u;
label_22a0f0:
    // 0x22a0f0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_22a0f4:
    if (ctx->pc == 0x22A0F4u) {
        ctx->pc = 0x22A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0F0u;
        // 0x22a0f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A0F8u;
        goto label_22a0f8;
    }
    ctx->pc = 0x22A0F0u;
    {
        const bool branch_taken_0x22a0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0F0u;
        // 0x22a0f4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0f0) {
            ctx->pc = 0x22A100u;
            goto label_22a100;
        }
    }
    ctx->pc = 0x22A0F8u;
label_22a0f8:
    // 0x22a0f8: 0x100000f3  b           . + 4 + (0xF3 << 2)
label_22a0fc:
    if (ctx->pc == 0x22A0FCu) {
        ctx->pc = 0x22A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0F8u;
        // 0x22a0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A100u;
        goto label_22a100;
    }
    ctx->pc = 0x22A0F8u;
    {
        const bool branch_taken_0x22a0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A0F8u;
        // 0x22a0fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a0f8) {
            ctx->pc = 0x22A4C8u;
            goto label_22a4c8;
        }
    }
    ctx->pc = 0x22A100u;
label_22a100:
    // 0x22a100: 0x8fa40650  lw          $a0, 0x650($sp)
    ctx->pc = 0x22a100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1616)));
label_22a104:
    // 0x22a104: 0x8fa50654  lw          $a1, 0x654($sp)
    ctx->pc = 0x22a104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1620)));
label_22a108:
    // 0x22a108: 0x8fa60658  lw          $a2, 0x658($sp)
    ctx->pc = 0x22a108u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1624)));
label_22a10c:
    // 0x22a10c: 0xc08a1b0  jal         func_2286C0
label_22a110:
    if (ctx->pc == 0x22A110u) {
        ctx->pc = 0x22A110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A10Cu;
        // 0x22a110: 0x8fa7065c  lw          $a3, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A114u;
        goto label_22a114;
    }
    ctx->pc = 0x22A10Cu;
    SET_GPR_U32(ctx, 31, 0x22A114u);
    ctx->pc = 0x22A110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A10Cu;
    // 0x22a110: 0x8fa7065c  lw          $a3, 0x65C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2286C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2286C0u, 0x22A10Cu, 0x22A114u)) {
        return;
    }
    ctx->pc = 0x22A114u;
label_22a114:
    // 0x22a114: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a114u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a118:
    // 0x22a118: 0x124000cf  beqz        $s2, . + 4 + (0xCF << 2)
label_22a11c:
    if (ctx->pc == 0x22A11Cu) {
        ctx->pc = 0x22A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A118u;
        // 0x22a11c: 0x8fa3065c  lw          $v1, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A120u;
        goto label_22a120;
    }
    ctx->pc = 0x22A118u;
    {
        const bool branch_taken_0x22a118 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A118u;
        // 0x22a11c: 0x8fa3065c  lw          $v1, 0x65C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a118) {
            ctx->pc = 0x22A458u;
            goto label_22a458;
        }
    }
    ctx->pc = 0x22A120u;
label_22a120:
    // 0x22a120: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x22a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
label_22a124:
    // 0x22a124: 0x104000c3  beqz        $v0, . + 4 + (0xC3 << 2)
label_22a128:
    if (ctx->pc == 0x22A128u) {
        ctx->pc = 0x22A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A124u;
        // 0x22a128: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A12Cu;
        goto label_22a12c;
    }
    ctx->pc = 0x22A124u;
    {
        const bool branch_taken_0x22a124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A124u;
        // 0x22a128: 0x30621000  andi        $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a124) {
            ctx->pc = 0x22A434u;
            goto label_22a434;
        }
    }
    ctx->pc = 0x22A12Cu;
label_22a12c:
    // 0x22a12c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_22a130:
    if (ctx->pc == 0x22A130u) {
        ctx->pc = 0x22A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A12Cu;
        // 0x22a130: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A134u;
        goto label_22a134;
    }
    ctx->pc = 0x22A12Cu;
    {
        const bool branch_taken_0x22a12c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A12Cu;
        // 0x22a130: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a12c) {
            ctx->pc = 0x22A154u;
            goto label_22a154;
        }
    }
    ctx->pc = 0x22A134u;
label_22a134:
    // 0x22a134: 0xc08a066  jal         func_228198
label_22a138:
    if (ctx->pc == 0x22A138u) {
        ctx->pc = 0x22A138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A134u;
        // 0x22a138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A13Cu;
        goto label_22a13c;
    }
    ctx->pc = 0x22A134u;
    SET_GPR_U32(ctx, 31, 0x22A13Cu);
    ctx->pc = 0x22A138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A134u;
    // 0x22a138: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x22A134u, 0x22A13Cu)) {
        return;
    }
    ctx->pc = 0x22A13Cu;
label_22a13c:
    // 0x22a13c: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_22a140:
    if (ctx->pc == 0x22A140u) {
        ctx->pc = 0x22A144u;
        goto label_22a144;
    }
    ctx->pc = 0x22A13Cu;
    {
        const bool branch_taken_0x22a13c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a13c) {
            ctx->pc = 0x22A450u;
            goto label_22a450;
        }
    }
    ctx->pc = 0x22A144u;
label_22a144:
    // 0x22a144: 0xc089b96  jal         func_226E58
label_22a148:
    if (ctx->pc == 0x22A148u) {
        ctx->pc = 0x22A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A144u;
        // 0x22a148: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A14Cu;
        goto label_22a14c;
    }
    ctx->pc = 0x22A144u;
    SET_GPR_U32(ctx, 31, 0x22A14Cu);
    ctx->pc = 0x22A148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A144u;
    // 0x22a148: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A144u, 0x22A14Cu)) {
        return;
    }
    ctx->pc = 0x22A14Cu;
label_22a14c:
    // 0x22a14c: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_22a150:
    if (ctx->pc == 0x22A150u) {
        ctx->pc = 0x22A154u;
        goto label_22a154;
    }
    ctx->pc = 0x22A14Cu;
    {
        const bool branch_taken_0x22a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a14c) {
            ctx->pc = 0x22A470u;
            goto label_22a470;
        }
    }
    ctx->pc = 0x22A154u;
label_22a154:
    // 0x22a154: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a158:
    // 0x22a158: 0xc08a15a  jal         func_228568
label_22a15c:
    if (ctx->pc == 0x22A15Cu) {
        ctx->pc = 0x22A15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A158u;
        // 0x22a15c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A160u;
        goto label_22a160;
    }
    ctx->pc = 0x22A158u;
    SET_GPR_U32(ctx, 31, 0x22A160u);
    ctx->pc = 0x22A15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A158u;
    // 0x22a15c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228568u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228568u, 0x22A158u, 0x22A160u)) {
        return;
    }
    ctx->pc = 0x22A160u;
label_22a160:
    // 0x22a160: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22a160u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a164:
    // 0x22a164: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x22a164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_22a168:
    // 0x22a168: 0x5040006a  beql        $v0, $zero, . + 4 + (0x6A << 2)
label_22a16c:
    if (ctx->pc == 0x22A16Cu) {
        ctx->pc = 0x22A16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A168u;
        // 0x22a16c: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A170u;
        goto label_22a170;
    }
    ctx->pc = 0x22A168u;
    {
        const bool branch_taken_0x22a168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a168) {
            ctx->pc = 0x22A16Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A168u;
            // 0x22a16c: 0x92420023  lbu         $v0, 0x23($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A314u;
            goto label_22a314;
        }
    }
    ctx->pc = 0x22A170u;
label_22a170:
    // 0x22a170: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x22a170u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a174:
    // 0x22a174: 0x27be0004  addiu       $fp, $sp, 0x4
    ctx->pc = 0x22a174u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_22a178:
    // 0x22a178: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x22a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_22a17c:
    // 0x22a17c: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22a17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_22a180:
    // 0x22a180: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22a184:
    // 0x22a184: 0x40f809  jalr        $v0
label_22a188:
    if (ctx->pc == 0x22A188u) {
        ctx->pc = 0x22A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A184u;
        // 0x22a188: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A18Cu;
        goto label_22a18c;
    }
    ctx->pc = 0x22A184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A18Cu);
        ctx->pc = 0x22A188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A184u;
        // 0x22a188: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A184u, 0x22A18Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A18Cu;
label_22a18c:
    // 0x22a18c: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x22a18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_22a190:
    // 0x22a190: 0x40f809  jalr        $v0
label_22a194:
    if (ctx->pc == 0x22A194u) {
        ctx->pc = 0x22A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A190u;
        // 0x22a194: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A198u;
        goto label_22a198;
    }
    ctx->pc = 0x22A190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A198u);
        ctx->pc = 0x22A194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A190u;
        // 0x22a194: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A190u, 0x22A198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A198u;
label_22a198:
    // 0x22a198: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x22a198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_22a19c:
    // 0x22a19c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22a1a0:
    if (ctx->pc == 0x22A1A0u) {
        ctx->pc = 0x22A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A19Cu;
        // 0x22a1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1A4u;
        goto label_22a1a4;
    }
    ctx->pc = 0x22A19Cu;
    {
        const bool branch_taken_0x22a19c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A19Cu;
        // 0x22a1a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a19c) {
            ctx->pc = 0x22A1D8u;
            goto label_22a1d8;
        }
    }
    ctx->pc = 0x22A1A4u;
label_22a1a4:
    // 0x22a1a4: 0x828800ff  lb          $t0, 0xFF($s4)
    ctx->pc = 0x22a1a4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 255)));
label_22a1a8:
    // 0x22a1a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22a1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22a1ac:
    // 0x22a1ac: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x22a1acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_22a1b0:
    // 0x22a1b0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x22a1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_22a1b4:
    // 0x22a1b4: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a1b8:
    // 0x22a1b8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x22a1b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22a1bc:
    // 0x22a1bc: 0xc092848  jal         func_24A120
label_22a1c0:
    if (ctx->pc == 0x22A1C0u) {
        ctx->pc = 0x22A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1BCu;
        // 0x22a1c0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1C4u;
        goto label_22a1c4;
    }
    ctx->pc = 0x22A1BCu;
    SET_GPR_U32(ctx, 31, 0x22A1C4u);
    ctx->pc = 0x22A1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1BCu;
    // 0x22a1c0: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22A1BCu, 0x22A1C4u)) {
        return;
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x22a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_22a1c8:
    // 0x22a1c8: 0xc09281a  jal         func_24A068
label_22a1cc:
    if (ctx->pc == 0x22A1CCu) {
        ctx->pc = 0x22A1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1C8u;
        // 0x22a1cc: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1D0u;
        goto label_22a1d0;
    }
    ctx->pc = 0x22A1C8u;
    SET_GPR_U32(ctx, 31, 0x22A1D0u);
    ctx->pc = 0x22A1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A1C8u;
    // 0x22a1cc: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22A1C8u, 0x22A1D0u)) {
        return;
    }
    ctx->pc = 0x22A1D0u;
label_22a1d0:
    // 0x22a1d0: 0xa3a0053f  sb          $zero, 0x53F($sp)
    ctx->pc = 0x22a1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1343), (uint8_t)GPR_U32(ctx, 0));
label_22a1d4:
    // 0x22a1d4: 0x0  nop
    ctx->pc = 0x22a1d4u;
    // NOP
label_22a1d8:
    // 0x22a1d8: 0x1260001b  beqz        $s3, . + 4 + (0x1B << 2)
label_22a1dc:
    if (ctx->pc == 0x22A1DCu) {
        ctx->pc = 0x22A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1D8u;
        // 0x22a1dc: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1E0u;
        goto label_22a1e0;
    }
    ctx->pc = 0x22A1D8u;
    {
        const bool branch_taken_0x22a1d8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1D8u;
        // 0x22a1dc: 0xa3a00540  sb          $zero, 0x540($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 1344), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1d8) {
            ctx->pc = 0x22A248u;
            goto label_22a248;
        }
    }
    ctx->pc = 0x22A1E0u;
label_22a1e0:
    // 0x22a1e0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x22a1e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_22a1e4:
    // 0x22a1e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_22a1e8:
    if (ctx->pc == 0x22A1E8u) {
        ctx->pc = 0x22A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1E4u;
        // 0x22a1e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1ECu;
        goto label_22a1ec;
    }
    ctx->pc = 0x22A1E4u;
    {
        const bool branch_taken_0x22a1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1E4u;
        // 0x22a1e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a1e4) {
            ctx->pc = 0x22A248u;
            goto label_22a248;
        }
    }
    ctx->pc = 0x22A1ECu;
label_22a1ec:
    // 0x22a1ec: 0x8ee200d0  lw          $v0, 0xD0($s7)
    ctx->pc = 0x22a1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 208)));
label_22a1f0:
    // 0x22a1f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x22a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_22a1f4:
    // 0x22a1f4: 0x40f809  jalr        $v0
label_22a1f8:
    if (ctx->pc == 0x22A1F8u) {
        ctx->pc = 0x22A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1F4u;
        // 0x22a1f8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A1FCu;
        goto label_22a1fc;
    }
    ctx->pc = 0x22A1F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A1FCu);
        ctx->pc = 0x22A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A1F4u;
        // 0x22a1f8: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A1F4u, 0x22A1FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A1FCu;
label_22a1fc:
    // 0x22a1fc: 0x8ee200f4  lw          $v0, 0xF4($s7)
    ctx->pc = 0x22a1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 244)));
label_22a200:
    // 0x22a200: 0x40f809  jalr        $v0
label_22a204:
    if (ctx->pc == 0x22A204u) {
        ctx->pc = 0x22A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A200u;
        // 0x22a204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A208u;
        goto label_22a208;
    }
    ctx->pc = 0x22A200u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22A208u);
        ctx->pc = 0x22A204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A200u;
        // 0x22a204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A200u, 0x22A208u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22A208u;
label_22a208:
    // 0x22a208: 0x2c420100  sltiu       $v0, $v0, 0x100
    ctx->pc = 0x22a208u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
label_22a20c:
    // 0x22a20c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22a210:
    if (ctx->pc == 0x22A210u) {
        ctx->pc = 0x22A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A20Cu;
        // 0x22a210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A214u;
        goto label_22a214;
    }
    ctx->pc = 0x22A20Cu;
    {
        const bool branch_taken_0x22a20c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A20Cu;
        // 0x22a210: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a20c) {
            ctx->pc = 0x22A248u;
            goto label_22a248;
        }
    }
    ctx->pc = 0x22A214u;
label_22a214:
    // 0x22a214: 0x826800ff  lb          $t0, 0xFF($s3)
    ctx->pc = 0x22a214u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 255)));
label_22a218:
    // 0x22a218: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x22a218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_22a21c:
    // 0x22a21c: 0xafa20640  sw          $v0, 0x640($sp)
    ctx->pc = 0x22a21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1600), GPR_U32(ctx, 2));
label_22a220:
    // 0x22a220: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a224:
    // 0x22a224: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x22a224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22a228:
    // 0x22a228: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x22a228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_22a22c:
    // 0x22a22c: 0xc092848  jal         func_24A120
label_22a230:
    if (ctx->pc == 0x22A230u) {
        ctx->pc = 0x22A230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A22Cu;
        // 0x22a230: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A234u;
        goto label_22a234;
    }
    ctx->pc = 0x22A22Cu;
    SET_GPR_U32(ctx, 31, 0x22A234u);
    ctx->pc = 0x22A230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A22Cu;
    // 0x22a230: 0x3484001e  ori         $a0, $a0, 0x1E (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)30);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x22A22Cu, 0x22A234u)) {
        return;
    }
    ctx->pc = 0x22A234u;
label_22a234:
    // 0x22a234: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x22a234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_22a238:
    // 0x22a238: 0xc09281a  jal         func_24A068
label_22a23c:
    if (ctx->pc == 0x22A23Cu) {
        ctx->pc = 0x22A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A238u;
        // 0x22a23c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A240u;
        goto label_22a240;
    }
    ctx->pc = 0x22A238u;
    SET_GPR_U32(ctx, 31, 0x22A240u);
    ctx->pc = 0x22A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A238u;
    // 0x22a23c: 0x27a40640  addiu       $a0, $sp, 0x640 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x22A238u, 0x22A240u)) {
        return;
    }
    ctx->pc = 0x22A240u;
label_22a240:
    // 0x22a240: 0xa3a0063f  sb          $zero, 0x63F($sp)
    ctx->pc = 0x22a240u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1599), (uint8_t)GPR_U32(ctx, 0));
label_22a244:
    // 0x22a244: 0x0  nop
    ctx->pc = 0x22a244u;
    // NOP
label_22a248:
    // 0x22a248: 0x8fa70660  lw          $a3, 0x660($sp)
    ctx->pc = 0x22a248u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_22a24c:
    // 0x22a24c: 0x323000ff  andi        $s0, $s1, 0xFF
    ctx->pc = 0x22a24cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_22a250:
    // 0x22a250: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22a250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_22a254:
    // 0x22a254: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x22a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_22a258:
    // 0x22a258: 0xc08ac24  jal         func_22B090
label_22a25c:
    if (ctx->pc == 0x22A25Cu) {
        ctx->pc = 0x22A25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A258u;
        // 0x22a25c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A260u;
        goto label_22a260;
    }
    ctx->pc = 0x22A258u;
    SET_GPR_U32(ctx, 31, 0x22A260u);
    ctx->pc = 0x22A25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A258u;
    // 0x22a25c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B090u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B090u, 0x22A258u, 0x22A260u)) {
        return;
    }
    ctx->pc = 0x22A260u;
label_22a260:
    // 0x22a260: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a264:
    // 0x22a264: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x22a264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_22a268:
    // 0x22a268: 0xc08a1f2  jal         func_2287C8
label_22a26c:
    if (ctx->pc == 0x22A26Cu) {
        ctx->pc = 0x22A26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A268u;
        // 0x22a26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A270u;
        goto label_22a270;
    }
    ctx->pc = 0x22A268u;
    SET_GPR_U32(ctx, 31, 0x22A270u);
    ctx->pc = 0x22A26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A268u;
    // 0x22a26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x22A268u, 0x22A270u)) {
        return;
    }
    ctx->pc = 0x22A270u;
label_22a270:
    // 0x22a270: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22a270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22a274:
    // 0x22a274: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a278:
    // 0x22a278: 0xafa30650  sw          $v1, 0x650($sp)
    ctx->pc = 0x22a278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1616), GPR_U32(ctx, 3));
label_22a27c:
    // 0x22a27c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x22a27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_22a280:
    // 0x22a280: 0xafa20654  sw          $v0, 0x654($sp)
    ctx->pc = 0x22a280u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1620), GPR_U32(ctx, 2));
label_22a284:
    // 0x22a284: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x22a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_22a288:
    // 0x22a288: 0xafa30658  sw          $v1, 0x658($sp)
    ctx->pc = 0x22a288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1624), GPR_U32(ctx, 3));
label_22a28c:
    // 0x22a28c: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x22a28cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_22a290:
    // 0x22a290: 0x92430020  lbu         $v1, 0x20($s2)
    ctx->pc = 0x22a290u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 32)));
label_22a294:
    // 0x22a294: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22a298:
    // 0x22a298: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x22a298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_22a29c:
    // 0x22a29c: 0xc08a0b0  jal         func_2282C0
label_22a2a0:
    if (ctx->pc == 0x22A2A0u) {
        ctx->pc = 0x22A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A29Cu;
        // 0x22a2a0: 0xafa2065c  sw          $v0, 0x65C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1628), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2A4u;
        goto label_22a2a4;
    }
    ctx->pc = 0x22A29Cu;
    SET_GPR_U32(ctx, 31, 0x22A2A4u);
    ctx->pc = 0x22A2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A29Cu;
    // 0x22a2a0: 0xafa2065c  sw          $v0, 0x65C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1628), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x22A29Cu, 0x22A2A4u)) {
        return;
    }
    ctx->pc = 0x22A2A4u;
label_22a2a4:
    // 0x22a2a4: 0x8fa60660  lw          $a2, 0x660($sp)
    ctx->pc = 0x22a2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1632)));
label_22a2a8:
    // 0x22a2a8: 0x27a40440  addiu       $a0, $sp, 0x440
    ctx->pc = 0x22a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_22a2ac:
    // 0x22a2ac: 0x27a50540  addiu       $a1, $sp, 0x540
    ctx->pc = 0x22a2acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
label_22a2b0:
    // 0x22a2b0: 0x27a70650  addiu       $a3, $sp, 0x650
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1616));
label_22a2b4:
    // 0x22a2b4: 0x27a80654  addiu       $t0, $sp, 0x654
    ctx->pc = 0x22a2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1620));
label_22a2b8:
    // 0x22a2b8: 0x27a90658  addiu       $t1, $sp, 0x658
    ctx->pc = 0x22a2b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1624));
label_22a2bc:
    // 0x22a2bc: 0xc08a676  jal         func_2299D8
label_22a2c0:
    if (ctx->pc == 0x22A2C0u) {
        ctx->pc = 0x22A2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2BCu;
        // 0x22a2c0: 0x27aa065c  addiu       $t2, $sp, 0x65C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2C4u;
        goto label_22a2c4;
    }
    ctx->pc = 0x22A2BCu;
    SET_GPR_U32(ctx, 31, 0x22A2C4u);
    ctx->pc = 0x22A2C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2BCu;
    // 0x22a2c0: 0x27aa065c  addiu       $t2, $sp, 0x65C (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1628));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2299D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2299D8u, 0x22A2BCu, 0x22A2C4u)) {
        return;
    }
    ctx->pc = 0x22A2C4u;
label_22a2c4:
    // 0x22a2c4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_22a2c8:
    if (ctx->pc == 0x22A2C8u) {
        ctx->pc = 0x22A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2C4u;
        // 0x22a2c8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2CCu;
        goto label_22a2cc;
    }
    ctx->pc = 0x22A2C4u;
    {
        const bool branch_taken_0x22a2c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2C4u;
        // 0x22a2c8: 0xafc20000  sw          $v0, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2c4) {
            ctx->pc = 0x22A300u;
            goto label_22a300;
        }
    }
    ctx->pc = 0x22A2CCu;
label_22a2cc:
    // 0x22a2cc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a2ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22a2d0:
    // 0x22a2d0: 0x620006c  bltz        $s1, . + 4 + (0x6C << 2)
label_22a2d4:
    if (ctx->pc == 0x22A2D4u) {
        ctx->pc = 0x22A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2D0u;
        // 0x22a2d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2D8u;
        goto label_22a2d8;
    }
    ctx->pc = 0x22A2D0u;
    {
        const bool branch_taken_0x22a2d0 = (GPR_S64(ctx, 17) < 0);
        ctx->pc = 0x22A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2D0u;
        // 0x22a2d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a2d0) {
            ctx->pc = 0x22A484u;
            goto label_22a484;
        }
    }
    ctx->pc = 0x22A2D8u;
label_22a2d8:
    // 0x22a2d8: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x22a2d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_22a2dc:
    // 0x22a2dc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a2e0:
    // 0x22a2e0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a2e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22a2e4:
    // 0x22a2e4: 0xc089b96  jal         func_226E58
label_22a2e8:
    if (ctx->pc == 0x22A2E8u) {
        ctx->pc = 0x22A2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2E4u;
        // 0x22a2e8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2ECu;
        goto label_22a2ec;
    }
    ctx->pc = 0x22A2E4u;
    SET_GPR_U32(ctx, 31, 0x22A2ECu);
    ctx->pc = 0x22A2E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A2E4u;
    // 0x22a2e8: 0x2610fffc  addiu       $s0, $s0, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A2E4u, 0x22A2ECu)) {
        return;
    }
    ctx->pc = 0x22A2ECu;
label_22a2ec:
    // 0x22a2ec: 0x0  nop
    ctx->pc = 0x22a2ecu;
    // NOP
label_22a2f0:
    // 0x22a2f0: 0x623fffb  bgezl       $s1, . + 4 + (-0x5 << 2)
label_22a2f4:
    if (ctx->pc == 0x22A2F4u) {
        ctx->pc = 0x22A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A2F0u;
        // 0x22a2f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A2F8u;
        goto label_22a2f8;
    }
    ctx->pc = 0x22A2F0u;
    {
        const bool branch_taken_0x22a2f0 = (GPR_S64(ctx, 17) >= 0);
        if (branch_taken_0x22a2f0) {
            ctx->pc = 0x22A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A2F0u;
            // 0x22a2f4: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A2E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a2e0;
        }
    }
    ctx->pc = 0x22A2F8u;
label_22a2f8:
    // 0x22a2f8: 0x10000062  b           . + 4 + (0x62 << 2)
label_22a2fc:
    if (ctx->pc == 0x22A2FCu) {
        ctx->pc = 0x22A300u;
        goto label_22a300;
    }
    ctx->pc = 0x22A2F8u;
    {
        const bool branch_taken_0x22a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2f8) {
            ctx->pc = 0x22A484u;
            goto label_22a484;
        }
    }
    ctx->pc = 0x22A300u;
label_22a300:
    // 0x22a300: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a304:
    // 0x22a304: 0x235102a  slt         $v0, $s1, $s5
    ctx->pc = 0x22a304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_22a308:
    // 0x22a308: 0x1440ff9b  bnez        $v0, . + 4 + (-0x65 << 2)
label_22a30c:
    if (ctx->pc == 0x22A30Cu) {
        ctx->pc = 0x22A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A308u;
        // 0x22a30c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A310u;
        goto label_22a310;
    }
    ctx->pc = 0x22A308u;
    {
        const bool branch_taken_0x22a308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A308u;
        // 0x22a30c: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a308) {
            ctx->pc = 0x22A178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a178;
        }
    }
    ctx->pc = 0x22A310u;
label_22a310:
    // 0x22a310: 0x92420023  lbu         $v0, 0x23($s2)
    ctx->pc = 0x22a310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_22a314:
    // 0x22a314: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x22a314u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_22a318:
    // 0x22a318: 0x30436000  andi        $v1, $v0, 0x6000
    ctx->pc = 0x22a318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)24576);
label_22a31c:
    // 0x22a31c: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_22a320:
    if (ctx->pc == 0x22A320u) {
        ctx->pc = 0x22A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A31Cu;
        // 0x22a320: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A324u;
        goto label_22a324;
    }
    ctx->pc = 0x22A31Cu;
    {
        const bool branch_taken_0x22a31c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A31Cu;
        // 0x22a320: 0x30424000  andi        $v0, $v0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a31c) {
            ctx->pc = 0x22A36Cu;
            goto label_22a36c;
        }
    }
    ctx->pc = 0x22A324u;
label_22a324:
    // 0x22a324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_22a328:
    if (ctx->pc == 0x22A328u) {
        ctx->pc = 0x22A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A324u;
        // 0x22a328: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A32Cu;
        goto label_22a32c;
    }
    ctx->pc = 0x22A324u;
    {
        const bool branch_taken_0x22a324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A324u;
        // 0x22a328: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a324) {
            ctx->pc = 0x22A348u;
            goto label_22a348;
        }
    }
    ctx->pc = 0x22A32Cu;
label_22a32c:
    // 0x22a32c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a32cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a330:
    // 0x22a330: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22a330u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22a334:
    // 0x22a334: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22a334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22a338:
    // 0x22a338: 0xc08a5f4  jal         func_2297D0
label_22a33c:
    if (ctx->pc == 0x22A33Cu) {
        ctx->pc = 0x22A33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A338u;
        // 0x22a33c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A340u;
        goto label_22a340;
    }
    ctx->pc = 0x22A338u;
    SET_GPR_U32(ctx, 31, 0x22A340u);
    ctx->pc = 0x22A33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A338u;
    // 0x22a33c: 0x24080004  addiu       $t0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x22A338u, 0x22A340u)) {
        return;
    }
    ctx->pc = 0x22A340u;
label_22a340:
    // 0x22a340: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a344:
    if (ctx->pc == 0x22A344u) {
        ctx->pc = 0x22A348u;
        goto label_22a348;
    }
    ctx->pc = 0x22A340u;
    {
        const bool branch_taken_0x22a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a340) {
            ctx->pc = 0x22A35Cu;
            goto label_22a35c;
        }
    }
    ctx->pc = 0x22A348u;
label_22a348:
    // 0x22a348: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22a348u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a34c:
    // 0x22a34c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x22a34cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22a350:
    // 0x22a350: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22a350u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22a354:
    // 0x22a354: 0xc08a5f4  jal         func_2297D0
label_22a358:
    if (ctx->pc == 0x22A358u) {
        ctx->pc = 0x22A358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A354u;
        // 0x22a358: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A35Cu;
        goto label_22a35c;
    }
    ctx->pc = 0x22A354u;
    SET_GPR_U32(ctx, 31, 0x22A35Cu);
    ctx->pc = 0x22A358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A354u;
    // 0x22a358: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2297D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2297D0u, 0x22A354u, 0x22A35Cu)) {
        return;
    }
    ctx->pc = 0x22A35Cu;
label_22a35c:
    // 0x22a35c: 0xc089fa6  jal         func_227E98
label_22a360:
    if (ctx->pc == 0x22A360u) {
        ctx->pc = 0x22A360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A35Cu;
        // 0x22a360: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A364u;
        goto label_22a364;
    }
    ctx->pc = 0x22A35Cu;
    SET_GPR_U32(ctx, 31, 0x22A364u);
    ctx->pc = 0x22A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A35Cu;
    // 0x22a360: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x22A35Cu, 0x22A364u)) {
        return;
    }
    ctx->pc = 0x22A364u;
label_22a364:
    // 0x22a364: 0x1000000d  b           . + 4 + (0xD << 2)
label_22a368:
    if (ctx->pc == 0x22A368u) {
        ctx->pc = 0x22A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A364u;
        // 0x22a368: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A36Cu;
        goto label_22a36c;
    }
    ctx->pc = 0x22A364u;
    {
        const bool branch_taken_0x22a364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A364u;
        // 0x22a368: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a364) {
            ctx->pc = 0x22A39Cu;
            goto label_22a39c;
        }
    }
    ctx->pc = 0x22A36Cu;
label_22a36c:
    // 0x22a36c: 0x1aa0000a  blez        $s5, . + 4 + (0xA << 2)
label_22a370:
    if (ctx->pc == 0x22A370u) {
        ctx->pc = 0x22A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A36Cu;
        // 0x22a370: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A374u;
        goto label_22a374;
    }
    ctx->pc = 0x22A36Cu;
    {
        const bool branch_taken_0x22a36c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x22A370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A36Cu;
        // 0x22a370: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a36c) {
            ctx->pc = 0x22A398u;
            goto label_22a398;
        }
    }
    ctx->pc = 0x22A374u;
label_22a374:
    // 0x22a374: 0x2a0882d  daddu       $s1, $s5, $zero
    ctx->pc = 0x22a374u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22a378:
    // 0x22a378: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a37c:
    // 0x22a37c: 0x0  nop
    ctx->pc = 0x22a37cu;
    // NOP
label_22a380:
    // 0x22a380: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22a384:
    // 0x22a384: 0xc089fa6  jal         func_227E98
label_22a388:
    if (ctx->pc == 0x22A388u) {
        ctx->pc = 0x22A388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A384u;
        // 0x22a388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A38Cu;
        goto label_22a38c;
    }
    ctx->pc = 0x22A384u;
    SET_GPR_U32(ctx, 31, 0x22A38Cu);
    ctx->pc = 0x22A388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A384u;
    // 0x22a388: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x22A384u, 0x22A38Cu)) {
        return;
    }
    ctx->pc = 0x22A38Cu;
label_22a38c:
    // 0x22a38c: 0x0  nop
    ctx->pc = 0x22a38cu;
    // NOP
label_22a390:
    // 0x22a390: 0x5620fffb  bnel        $s1, $zero, . + 4 + (-0x5 << 2)
label_22a394:
    if (ctx->pc == 0x22A394u) {
        ctx->pc = 0x22A394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A390u;
        // 0x22a394: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A398u;
        goto label_22a398;
    }
    ctx->pc = 0x22A390u;
    {
        const bool branch_taken_0x22a390 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a390) {
            ctx->pc = 0x22A394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A390u;
            // 0x22a394: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a380;
        }
    }
    ctx->pc = 0x22A398u;
label_22a398:
    // 0x22a398: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22a398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22a39c:
    // 0x22a39c: 0x1aa00034  blez        $s5, . + 4 + (0x34 << 2)
label_22a3a0:
    if (ctx->pc == 0x22A3A0u) {
        ctx->pc = 0x22A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A39Cu;
        // 0x22a3a0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3A4u;
        goto label_22a3a4;
    }
    ctx->pc = 0x22A39Cu;
    {
        const bool branch_taken_0x22a39c = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x22A3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A39Cu;
        // 0x22a3a0: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a39c) {
            ctx->pc = 0x22A470u;
            goto label_22a470;
        }
    }
    ctx->pc = 0x22A3A4u;
label_22a3a4:
    // 0x22a3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x22a3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a3a8:
    // 0x22a3a8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x22a3a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_22a3ac:
    // 0x22a3ac: 0xc08a1f2  jal         func_2287C8
label_22a3b0:
    if (ctx->pc == 0x22A3B0u) {
        ctx->pc = 0x22A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3ACu;
        // 0x22a3b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3B4u;
        goto label_22a3b4;
    }
    ctx->pc = 0x22A3ACu;
    SET_GPR_U32(ctx, 31, 0x22A3B4u);
    ctx->pc = 0x22A3B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3ACu;
    // 0x22a3b0: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2287C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2287C8u, 0x22A3ACu, 0x22A3B4u)) {
        return;
    }
    ctx->pc = 0x22A3B4u;
label_22a3b4:
    // 0x22a3b4: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_22a3b8:
    if (ctx->pc == 0x22A3B8u) {
        ctx->pc = 0x22A3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3B4u;
        // 0x22a3b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3BCu;
        goto label_22a3bc;
    }
    ctx->pc = 0x22A3B4u;
    {
        const bool branch_taken_0x22a3b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3b4) {
            ctx->pc = 0x22A3B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3B4u;
            // 0x22a3b8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A414u;
            goto label_22a414;
        }
    }
    ctx->pc = 0x22A3BCu;
label_22a3bc:
    // 0x22a3bc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x22a3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a3c0:
    // 0x22a3c0: 0xc08a066  jal         func_228198
label_22a3c4:
    if (ctx->pc == 0x22A3C4u) {
        ctx->pc = 0x22A3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C0u;
        // 0x22a3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3C8u;
        goto label_22a3c8;
    }
    ctx->pc = 0x22A3C0u;
    SET_GPR_U32(ctx, 31, 0x22A3C8u);
    ctx->pc = 0x22A3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3C0u;
    // 0x22a3c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x22A3C0u, 0x22A3C8u)) {
        return;
    }
    ctx->pc = 0x22A3C8u;
label_22a3c8:
    // 0x22a3c8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_22a3cc:
    if (ctx->pc == 0x22A3CCu) {
        ctx->pc = 0x22A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C8u;
        // 0x22a3cc: 0x235102a  slt         $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3D0u;
        goto label_22a3d0;
    }
    ctx->pc = 0x22A3C8u;
    {
        const bool branch_taken_0x22a3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3C8u;
        // 0x22a3cc: 0x235102a  slt         $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3c8) {
            ctx->pc = 0x22A408u;
            goto label_22a408;
        }
    }
    ctx->pc = 0x22A3D0u;
label_22a3d0:
    // 0x22a3d0: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_22a3d4:
    if (ctx->pc == 0x22A3D4u) {
        ctx->pc = 0x22A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D0u;
        // 0x22a3d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3D8u;
        goto label_22a3d8;
    }
    ctx->pc = 0x22A3D0u;
    {
        const bool branch_taken_0x22a3d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A3D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3D0u;
        // 0x22a3d4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3d0) {
            ctx->pc = 0x22A484u;
            goto label_22a484;
        }
    }
    ctx->pc = 0x22A3D8u;
label_22a3d8:
    // 0x22a3d8: 0x5d8021  addu        $s0, $v0, $sp
    ctx->pc = 0x22a3d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_22a3dc:
    // 0x22a3dc: 0x2b18823  subu        $s1, $s5, $s1
    ctx->pc = 0x22a3dcu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 17)));
label_22a3e0:
    // 0x22a3e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a3e4:
    // 0x22a3e4: 0x0  nop
    ctx->pc = 0x22a3e4u;
    // NOP
label_22a3e8:
    // 0x22a3e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x22a3e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_22a3ec:
    // 0x22a3ec: 0xc089b96  jal         func_226E58
label_22a3f0:
    if (ctx->pc == 0x22A3F0u) {
        ctx->pc = 0x22A3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3ECu;
        // 0x22a3f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A3F4u;
        goto label_22a3f4;
    }
    ctx->pc = 0x22A3ECu;
    SET_GPR_U32(ctx, 31, 0x22A3F4u);
    ctx->pc = 0x22A3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A3ECu;
    // 0x22a3f0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A3ECu, 0x22A3F4u)) {
        return;
    }
    ctx->pc = 0x22A3F4u;
label_22a3f4:
    // 0x22a3f4: 0x0  nop
    ctx->pc = 0x22a3f4u;
    // NOP
label_22a3f8:
    // 0x22a3f8: 0x5620fffb  bnel        $s1, $zero, . + 4 + (-0x5 << 2)
label_22a3fc:
    if (ctx->pc == 0x22A3FCu) {
        ctx->pc = 0x22A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A3F8u;
        // 0x22a3fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A400u;
        goto label_22a400;
    }
    ctx->pc = 0x22A3F8u;
    {
        const bool branch_taken_0x22a3f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a3f8) {
            ctx->pc = 0x22A3FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22A3F8u;
            // 0x22a3fc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22A3E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3e8;
        }
    }
    ctx->pc = 0x22A400u;
label_22a400:
    // 0x22a400: 0x10000020  b           . + 4 + (0x20 << 2)
label_22a404:
    if (ctx->pc == 0x22A404u) {
        ctx->pc = 0x22A408u;
        goto label_22a408;
    }
    ctx->pc = 0x22A400u;
    {
        const bool branch_taken_0x22a400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a400) {
            ctx->pc = 0x22A484u;
            goto label_22a484;
        }
    }
    ctx->pc = 0x22A408u;
label_22a408:
    // 0x22a408: 0xc08a0b0  jal         func_2282C0
label_22a40c:
    if (ctx->pc == 0x22A40Cu) {
        ctx->pc = 0x22A40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A408u;
        // 0x22a40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A410u;
        goto label_22a410;
    }
    ctx->pc = 0x22A408u;
    SET_GPR_U32(ctx, 31, 0x22A410u);
    ctx->pc = 0x22A40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A408u;
    // 0x22a40c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2282C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2282C0u, 0x22A408u, 0x22A410u)) {
        return;
    }
    ctx->pc = 0x22A410u;
label_22a410:
    // 0x22a410: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x22a410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a414:
    // 0x22a414: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22a414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22a418:
    // 0x22a418: 0xc089b96  jal         func_226E58
label_22a41c:
    if (ctx->pc == 0x22A41Cu) {
        ctx->pc = 0x22A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A418u;
        // 0x22a41c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A420u;
        goto label_22a420;
    }
    ctx->pc = 0x22A418u;
    SET_GPR_U32(ctx, 31, 0x22A420u);
    ctx->pc = 0x22A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A418u;
    // 0x22a41c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A418u, 0x22A420u)) {
        return;
    }
    ctx->pc = 0x22A420u;
label_22a420:
    // 0x22a420: 0x235182a  slt         $v1, $s1, $s5
    ctx->pc = 0x22a420u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_22a424:
    // 0x22a424: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_22a428:
    if (ctx->pc == 0x22A428u) {
        ctx->pc = 0x22A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A424u;
        // 0x22a428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A42Cu;
        goto label_22a42c;
    }
    ctx->pc = 0x22A424u;
    {
        const bool branch_taken_0x22a424 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A424u;
        // 0x22a428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a424) {
            ctx->pc = 0x22A3A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_22a3a8;
        }
    }
    ctx->pc = 0x22A42Cu;
label_22a42c:
    // 0x22a42c: 0x10000010  b           . + 4 + (0x10 << 2)
label_22a430:
    if (ctx->pc == 0x22A430u) {
        ctx->pc = 0x22A434u;
        goto label_22a434;
    }
    ctx->pc = 0x22A42Cu;
    {
        const bool branch_taken_0x22a42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a42c) {
            ctx->pc = 0x22A470u;
            goto label_22a470;
        }
    }
    ctx->pc = 0x22A434u;
label_22a434:
    // 0x22a434: 0xc089fa6  jal         func_227E98
label_22a438:
    if (ctx->pc == 0x22A438u) {
        ctx->pc = 0x22A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A434u;
        // 0x22a438: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A43Cu;
        goto label_22a43c;
    }
    ctx->pc = 0x22A434u;
    SET_GPR_U32(ctx, 31, 0x22A43Cu);
    ctx->pc = 0x22A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A434u;
    // 0x22a438: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x227E98u, 0x22A434u, 0x22A43Cu)) {
        return;
    }
    ctx->pc = 0x22A43Cu;
label_22a43c:
    // 0x22a43c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x22a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22a440:
    // 0x22a440: 0xc08a066  jal         func_228198
label_22a444:
    if (ctx->pc == 0x22A444u) {
        ctx->pc = 0x22A444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A440u;
        // 0x22a444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A448u;
        goto label_22a448;
    }
    ctx->pc = 0x22A440u;
    SET_GPR_U32(ctx, 31, 0x22A448u);
    ctx->pc = 0x22A444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A440u;
    // 0x22a444: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228198u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228198u, 0x22A440u, 0x22A448u)) {
        return;
    }
    ctx->pc = 0x22A448u;
label_22a448:
    // 0x22a448: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_22a44c:
    if (ctx->pc == 0x22A44Cu) {
        ctx->pc = 0x22A450u;
        goto label_22a450;
    }
    ctx->pc = 0x22A448u;
    {
        const bool branch_taken_0x22a448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a448) {
            ctx->pc = 0x22A468u;
            goto label_22a468;
        }
    }
    ctx->pc = 0x22A450u;
label_22a450:
    // 0x22a450: 0xc08a0e2  jal         func_228388
label_22a454:
    if (ctx->pc == 0x22A454u) {
        ctx->pc = 0x22A454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A450u;
        // 0x22a454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A458u;
        goto label_22a458;
    }
    ctx->pc = 0x22A450u;
    SET_GPR_U32(ctx, 31, 0x22A458u);
    ctx->pc = 0x22A454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A450u;
    // 0x22a454: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x22A450u, 0x22A458u)) {
        return;
    }
    ctx->pc = 0x22A458u;
label_22a458:
    // 0x22a458: 0xc089b96  jal         func_226E58
label_22a45c:
    if (ctx->pc == 0x22A45Cu) {
        ctx->pc = 0x22A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A458u;
        // 0x22a45c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A460u;
        goto label_22a460;
    }
    ctx->pc = 0x22A458u;
    SET_GPR_U32(ctx, 31, 0x22A460u);
    ctx->pc = 0x22A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A458u;
    // 0x22a45c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A458u, 0x22A460u)) {
        return;
    }
    ctx->pc = 0x22A460u;
label_22a460:
    // 0x22a460: 0x10000019  b           . + 4 + (0x19 << 2)
label_22a464:
    if (ctx->pc == 0x22A464u) {
        ctx->pc = 0x22A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A460u;
        // 0x22a464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A468u;
        goto label_22a468;
    }
    ctx->pc = 0x22A460u;
    {
        const bool branch_taken_0x22a460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A460u;
        // 0x22a464: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a460) {
            ctx->pc = 0x22A4C8u;
            goto label_22a4c8;
        }
    }
    ctx->pc = 0x22A468u;
label_22a468:
    // 0x22a468: 0xc089b96  jal         func_226E58
label_22a46c:
    if (ctx->pc == 0x22A46Cu) {
        ctx->pc = 0x22A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A468u;
        // 0x22a46c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A470u;
        goto label_22a470;
    }
    ctx->pc = 0x22A468u;
    SET_GPR_U32(ctx, 31, 0x22A470u);
    ctx->pc = 0x22A46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A468u;
    // 0x22a46c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226E58u, 0x22A468u, 0x22A470u)) {
        return;
    }
    ctx->pc = 0x22A470u;
label_22a470:
    // 0x22a470: 0xc08ab50  jal         func_22AD40
label_22a474:
    if (ctx->pc == 0x22A474u) {
        ctx->pc = 0x22A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A470u;
        // 0x22a474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A478u;
        goto label_22a478;
    }
    ctx->pc = 0x22A470u;
    SET_GPR_U32(ctx, 31, 0x22A478u);
    ctx->pc = 0x22A474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A470u;
    // 0x22a474: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AD40u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AD40u, 0x22A470u, 0x22A478u)) {
        return;
    }
    ctx->pc = 0x22A478u;
label_22a478:
    // 0x22a478: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a478u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a47c:
    // 0x22a47c: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_22a480:
    if (ctx->pc == 0x22A480u) {
        ctx->pc = 0x22A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A47Cu;
        // 0x22a480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A484u;
        goto label_22a484;
    }
    ctx->pc = 0x22A47Cu;
    {
        const bool branch_taken_0x22a47c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x22A480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A47Cu;
        // 0x22a480: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a47c) {
            ctx->pc = 0x22A494u;
            goto label_22a494;
        }
    }
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0xc08a0e2  jal         func_228388
label_22a488:
    if (ctx->pc == 0x22A488u) {
        ctx->pc = 0x22A488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A484u;
        // 0x22a488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A48Cu;
        goto label_22a48c;
    }
    ctx->pc = 0x22A484u;
    SET_GPR_U32(ctx, 31, 0x22A48Cu);
    ctx->pc = 0x22A488u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A484u;
    // 0x22a488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x228388u, 0x22A484u, 0x22A48Cu)) {
        return;
    }
    ctx->pc = 0x22A48Cu;
label_22a48c:
    // 0x22a48c: 0x1000000e  b           . + 4 + (0xE << 2)
label_22a490:
    if (ctx->pc == 0x22A490u) {
        ctx->pc = 0x22A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A48Cu;
        // 0x22a490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A494u;
        goto label_22a494;
    }
    ctx->pc = 0x22A48Cu;
    {
        const bool branch_taken_0x22a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A48Cu;
        // 0x22a490: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a48c) {
            ctx->pc = 0x22A4C8u;
            goto label_22a4c8;
        }
    }
    ctx->pc = 0x22A494u;
label_22a494:
    // 0x22a494: 0xc08ab82  jal         func_22AE08
label_22a498:
    if (ctx->pc == 0x22A498u) {
        ctx->pc = 0x22A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A494u;
        // 0x22a498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A49Cu;
        goto label_22a49c;
    }
    ctx->pc = 0x22A494u;
    SET_GPR_U32(ctx, 31, 0x22A49Cu);
    ctx->pc = 0x22A498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A494u;
    // 0x22a498: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AE08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AE08u, 0x22A494u, 0x22A49Cu)) {
        return;
    }
    ctx->pc = 0x22A49Cu;
label_22a49c:
    // 0x22a49c: 0x12600006  beqz        $s3, . + 4 + (0x6 << 2)
label_22a4a0:
    if (ctx->pc == 0x22A4A0u) {
        ctx->pc = 0x22A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A49Cu;
        // 0x22a4a0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4A4u;
        goto label_22a4a4;
    }
    ctx->pc = 0x22A49Cu;
    {
        const bool branch_taken_0x22a49c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A49Cu;
        // 0x22a4a0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a49c) {
            ctx->pc = 0x22A4B8u;
            goto label_22a4b8;
        }
    }
    ctx->pc = 0x22A4A4u;
label_22a4a4:
    // 0x22a4a4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a4a8:
    // 0x22a4a8: 0xc08abaa  jal         func_22AEA8
label_22a4ac:
    if (ctx->pc == 0x22A4ACu) {
        ctx->pc = 0x22A4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4A8u;
        // 0x22a4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4B0u;
        goto label_22a4b0;
    }
    ctx->pc = 0x22A4A8u;
    SET_GPR_U32(ctx, 31, 0x22A4B0u);
    ctx->pc = 0x22A4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4A8u;
    // 0x22a4ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AEA8u, 0x22A4A8u, 0x22A4B0u)) {
        return;
    }
    ctx->pc = 0x22A4B0u;
label_22a4b0:
    // 0x22a4b0: 0x10000005  b           . + 4 + (0x5 << 2)
label_22a4b4:
    if (ctx->pc == 0x22A4B4u) {
        ctx->pc = 0x22A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4B0u;
        // 0x22a4b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4B8u;
        goto label_22a4b8;
    }
    ctx->pc = 0x22A4B0u;
    {
        const bool branch_taken_0x22a4b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4B0u;
        // 0x22a4b4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4b0) {
            ctx->pc = 0x22A4C8u;
            goto label_22a4c8;
        }
    }
    ctx->pc = 0x22A4B8u;
label_22a4b8:
    // 0x22a4b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a4b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a4bc:
    // 0x22a4bc: 0xc08abaa  jal         func_22AEA8
label_22a4c0:
    if (ctx->pc == 0x22A4C0u) {
        ctx->pc = 0x22A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4BCu;
        // 0x22a4c0: 0x24a53448  addiu       $a1, $a1, 0x3448 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4C4u;
        goto label_22a4c4;
    }
    ctx->pc = 0x22A4BCu;
    SET_GPR_U32(ctx, 31, 0x22A4C4u);
    ctx->pc = 0x22A4C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22A4BCu;
    // 0x22a4c0: 0x24a53448  addiu       $a1, $a1, 0x3448 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AEA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AEA8u, 0x22A4BCu, 0x22A4C4u)) {
        return;
    }
    ctx->pc = 0x22A4C4u;
label_22a4c4:
    // 0x22a4c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x22a4c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a4c8:
    // 0x22a4c8: 0x7bb00700  lq          $s0, 0x700($sp)
    ctx->pc = 0x22a4c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1792)));
label_22a4cc:
    // 0x22a4cc: 0x7bb106f0  lq          $s1, 0x6F0($sp)
    ctx->pc = 0x22a4ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1776)));
label_22a4d0:
    // 0x22a4d0: 0x7bb206e0  lq          $s2, 0x6E0($sp)
    ctx->pc = 0x22a4d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1760)));
label_22a4d4:
    // 0x22a4d4: 0x7bb306d0  lq          $s3, 0x6D0($sp)
    ctx->pc = 0x22a4d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1744)));
label_22a4d8:
    // 0x22a4d8: 0x7bb406c0  lq          $s4, 0x6C0($sp)
    ctx->pc = 0x22a4d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1728)));
label_22a4dc:
    // 0x22a4dc: 0x7bb506b0  lq          $s5, 0x6B0($sp)
    ctx->pc = 0x22a4dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1712)));
label_22a4e0:
    // 0x22a4e0: 0x7bb606a0  lq          $s6, 0x6A0($sp)
    ctx->pc = 0x22a4e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1696)));
label_22a4e4:
    // 0x22a4e4: 0x7bb70690  lq          $s7, 0x690($sp)
    ctx->pc = 0x22a4e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_22a4e8:
    // 0x22a4e8: 0x7bbe0680  lq          $fp, 0x680($sp)
    ctx->pc = 0x22a4e8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_22a4ec:
    // 0x22a4ec: 0xdfbf0670  ld          $ra, 0x670($sp)
    ctx->pc = 0x22a4ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_22a4f0:
    // 0x22a4f0: 0x3e00008  jr          $ra
label_22a4f4:
    if (ctx->pc == 0x22A4F4u) {
        ctx->pc = 0x22A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F0u;
        // 0x22a4f4: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22A4F8u;
        goto label_fallthrough_0x22a4f0;
    }
    ctx->pc = 0x22A4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22A4F0u;
        // 0x22a4f4: 0x27bd0710  addiu       $sp, $sp, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1808));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22A4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x22a4f0:
    ctx->pc = 0x22A4F8u;
}
