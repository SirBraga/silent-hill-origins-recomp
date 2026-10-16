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

// Function: sub_00179FF8
// Address: 0x179ff8 - 0x17a538
void sub_00179FF8_0x179ff8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00179FF8_0x179ff8");
#endif

    switch (ctx->pc) {
        case 0x179ff8u: goto label_179ff8;
        case 0x179ffcu: goto label_179ffc;
        case 0x17a000u: goto label_17a000;
        case 0x17a004u: goto label_17a004;
        case 0x17a008u: goto label_17a008;
        case 0x17a00cu: goto label_17a00c;
        case 0x17a010u: goto label_17a010;
        case 0x17a014u: goto label_17a014;
        case 0x17a018u: goto label_17a018;
        case 0x17a01cu: goto label_17a01c;
        case 0x17a020u: goto label_17a020;
        case 0x17a024u: goto label_17a024;
        case 0x17a028u: goto label_17a028;
        case 0x17a02cu: goto label_17a02c;
        case 0x17a030u: goto label_17a030;
        case 0x17a034u: goto label_17a034;
        case 0x17a038u: goto label_17a038;
        case 0x17a03cu: goto label_17a03c;
        case 0x17a040u: goto label_17a040;
        case 0x17a044u: goto label_17a044;
        case 0x17a048u: goto label_17a048;
        case 0x17a04cu: goto label_17a04c;
        case 0x17a050u: goto label_17a050;
        case 0x17a054u: goto label_17a054;
        case 0x17a058u: goto label_17a058;
        case 0x17a05cu: goto label_17a05c;
        case 0x17a060u: goto label_17a060;
        case 0x17a064u: goto label_17a064;
        case 0x17a068u: goto label_17a068;
        case 0x17a06cu: goto label_17a06c;
        case 0x17a070u: goto label_17a070;
        case 0x17a074u: goto label_17a074;
        case 0x17a078u: goto label_17a078;
        case 0x17a07cu: goto label_17a07c;
        case 0x17a080u: goto label_17a080;
        case 0x17a084u: goto label_17a084;
        case 0x17a088u: goto label_17a088;
        case 0x17a08cu: goto label_17a08c;
        case 0x17a090u: goto label_17a090;
        case 0x17a094u: goto label_17a094;
        case 0x17a098u: goto label_17a098;
        case 0x17a09cu: goto label_17a09c;
        case 0x17a0a0u: goto label_17a0a0;
        case 0x17a0a4u: goto label_17a0a4;
        case 0x17a0a8u: goto label_17a0a8;
        case 0x17a0acu: goto label_17a0ac;
        case 0x17a0b0u: goto label_17a0b0;
        case 0x17a0b4u: goto label_17a0b4;
        case 0x17a0b8u: goto label_17a0b8;
        case 0x17a0bcu: goto label_17a0bc;
        case 0x17a0c0u: goto label_17a0c0;
        case 0x17a0c4u: goto label_17a0c4;
        case 0x17a0c8u: goto label_17a0c8;
        case 0x17a0ccu: goto label_17a0cc;
        case 0x17a0d0u: goto label_17a0d0;
        case 0x17a0d4u: goto label_17a0d4;
        case 0x17a0d8u: goto label_17a0d8;
        case 0x17a0dcu: goto label_17a0dc;
        case 0x17a0e0u: goto label_17a0e0;
        case 0x17a0e4u: goto label_17a0e4;
        case 0x17a0e8u: goto label_17a0e8;
        case 0x17a0ecu: goto label_17a0ec;
        case 0x17a0f0u: goto label_17a0f0;
        case 0x17a0f4u: goto label_17a0f4;
        case 0x17a0f8u: goto label_17a0f8;
        case 0x17a0fcu: goto label_17a0fc;
        case 0x17a100u: goto label_17a100;
        case 0x17a104u: goto label_17a104;
        case 0x17a108u: goto label_17a108;
        case 0x17a10cu: goto label_17a10c;
        case 0x17a110u: goto label_17a110;
        case 0x17a114u: goto label_17a114;
        case 0x17a118u: goto label_17a118;
        case 0x17a11cu: goto label_17a11c;
        case 0x17a120u: goto label_17a120;
        case 0x17a124u: goto label_17a124;
        case 0x17a128u: goto label_17a128;
        case 0x17a12cu: goto label_17a12c;
        case 0x17a130u: goto label_17a130;
        case 0x17a134u: goto label_17a134;
        case 0x17a138u: goto label_17a138;
        case 0x17a13cu: goto label_17a13c;
        case 0x17a140u: goto label_17a140;
        case 0x17a144u: goto label_17a144;
        case 0x17a148u: goto label_17a148;
        case 0x17a14cu: goto label_17a14c;
        case 0x17a150u: goto label_17a150;
        case 0x17a154u: goto label_17a154;
        case 0x17a158u: goto label_17a158;
        case 0x17a15cu: goto label_17a15c;
        case 0x17a160u: goto label_17a160;
        case 0x17a164u: goto label_17a164;
        case 0x17a168u: goto label_17a168;
        case 0x17a16cu: goto label_17a16c;
        case 0x17a170u: goto label_17a170;
        case 0x17a174u: goto label_17a174;
        case 0x17a178u: goto label_17a178;
        case 0x17a17cu: goto label_17a17c;
        case 0x17a180u: goto label_17a180;
        case 0x17a184u: goto label_17a184;
        case 0x17a188u: goto label_17a188;
        case 0x17a18cu: goto label_17a18c;
        case 0x17a190u: goto label_17a190;
        case 0x17a194u: goto label_17a194;
        case 0x17a198u: goto label_17a198;
        case 0x17a19cu: goto label_17a19c;
        case 0x17a1a0u: goto label_17a1a0;
        case 0x17a1a4u: goto label_17a1a4;
        case 0x17a1a8u: goto label_17a1a8;
        case 0x17a1acu: goto label_17a1ac;
        case 0x17a1b0u: goto label_17a1b0;
        case 0x17a1b4u: goto label_17a1b4;
        case 0x17a1b8u: goto label_17a1b8;
        case 0x17a1bcu: goto label_17a1bc;
        case 0x17a1c0u: goto label_17a1c0;
        case 0x17a1c4u: goto label_17a1c4;
        case 0x17a1c8u: goto label_17a1c8;
        case 0x17a1ccu: goto label_17a1cc;
        case 0x17a1d0u: goto label_17a1d0;
        case 0x17a1d4u: goto label_17a1d4;
        case 0x17a1d8u: goto label_17a1d8;
        case 0x17a1dcu: goto label_17a1dc;
        case 0x17a1e0u: goto label_17a1e0;
        case 0x17a1e4u: goto label_17a1e4;
        case 0x17a1e8u: goto label_17a1e8;
        case 0x17a1ecu: goto label_17a1ec;
        case 0x17a1f0u: goto label_17a1f0;
        case 0x17a1f4u: goto label_17a1f4;
        case 0x17a1f8u: goto label_17a1f8;
        case 0x17a1fcu: goto label_17a1fc;
        case 0x17a200u: goto label_17a200;
        case 0x17a204u: goto label_17a204;
        case 0x17a208u: goto label_17a208;
        case 0x17a20cu: goto label_17a20c;
        case 0x17a210u: goto label_17a210;
        case 0x17a214u: goto label_17a214;
        case 0x17a218u: goto label_17a218;
        case 0x17a21cu: goto label_17a21c;
        case 0x17a220u: goto label_17a220;
        case 0x17a224u: goto label_17a224;
        case 0x17a228u: goto label_17a228;
        case 0x17a22cu: goto label_17a22c;
        case 0x17a230u: goto label_17a230;
        case 0x17a234u: goto label_17a234;
        case 0x17a238u: goto label_17a238;
        case 0x17a23cu: goto label_17a23c;
        case 0x17a240u: goto label_17a240;
        case 0x17a244u: goto label_17a244;
        case 0x17a248u: goto label_17a248;
        case 0x17a24cu: goto label_17a24c;
        case 0x17a250u: goto label_17a250;
        case 0x17a254u: goto label_17a254;
        case 0x17a258u: goto label_17a258;
        case 0x17a25cu: goto label_17a25c;
        case 0x17a260u: goto label_17a260;
        case 0x17a264u: goto label_17a264;
        case 0x17a268u: goto label_17a268;
        case 0x17a26cu: goto label_17a26c;
        case 0x17a270u: goto label_17a270;
        case 0x17a274u: goto label_17a274;
        case 0x17a278u: goto label_17a278;
        case 0x17a27cu: goto label_17a27c;
        case 0x17a280u: goto label_17a280;
        case 0x17a284u: goto label_17a284;
        case 0x17a288u: goto label_17a288;
        case 0x17a28cu: goto label_17a28c;
        case 0x17a290u: goto label_17a290;
        case 0x17a294u: goto label_17a294;
        case 0x17a298u: goto label_17a298;
        case 0x17a29cu: goto label_17a29c;
        case 0x17a2a0u: goto label_17a2a0;
        case 0x17a2a4u: goto label_17a2a4;
        case 0x17a2a8u: goto label_17a2a8;
        case 0x17a2acu: goto label_17a2ac;
        case 0x17a2b0u: goto label_17a2b0;
        case 0x17a2b4u: goto label_17a2b4;
        case 0x17a2b8u: goto label_17a2b8;
        case 0x17a2bcu: goto label_17a2bc;
        case 0x17a2c0u: goto label_17a2c0;
        case 0x17a2c4u: goto label_17a2c4;
        case 0x17a2c8u: goto label_17a2c8;
        case 0x17a2ccu: goto label_17a2cc;
        case 0x17a2d0u: goto label_17a2d0;
        case 0x17a2d4u: goto label_17a2d4;
        case 0x17a2d8u: goto label_17a2d8;
        case 0x17a2dcu: goto label_17a2dc;
        case 0x17a2e0u: goto label_17a2e0;
        case 0x17a2e4u: goto label_17a2e4;
        case 0x17a2e8u: goto label_17a2e8;
        case 0x17a2ecu: goto label_17a2ec;
        case 0x17a2f0u: goto label_17a2f0;
        case 0x17a2f4u: goto label_17a2f4;
        case 0x17a2f8u: goto label_17a2f8;
        case 0x17a2fcu: goto label_17a2fc;
        case 0x17a300u: goto label_17a300;
        case 0x17a304u: goto label_17a304;
        case 0x17a308u: goto label_17a308;
        case 0x17a30cu: goto label_17a30c;
        case 0x17a310u: goto label_17a310;
        case 0x17a314u: goto label_17a314;
        case 0x17a318u: goto label_17a318;
        case 0x17a31cu: goto label_17a31c;
        case 0x17a320u: goto label_17a320;
        case 0x17a324u: goto label_17a324;
        case 0x17a328u: goto label_17a328;
        case 0x17a32cu: goto label_17a32c;
        case 0x17a330u: goto label_17a330;
        case 0x17a334u: goto label_17a334;
        case 0x17a338u: goto label_17a338;
        case 0x17a33cu: goto label_17a33c;
        case 0x17a340u: goto label_17a340;
        case 0x17a344u: goto label_17a344;
        case 0x17a348u: goto label_17a348;
        case 0x17a34cu: goto label_17a34c;
        case 0x17a350u: goto label_17a350;
        case 0x17a354u: goto label_17a354;
        case 0x17a358u: goto label_17a358;
        case 0x17a35cu: goto label_17a35c;
        case 0x17a360u: goto label_17a360;
        case 0x17a364u: goto label_17a364;
        case 0x17a368u: goto label_17a368;
        case 0x17a36cu: goto label_17a36c;
        case 0x17a370u: goto label_17a370;
        case 0x17a374u: goto label_17a374;
        case 0x17a378u: goto label_17a378;
        case 0x17a37cu: goto label_17a37c;
        case 0x17a380u: goto label_17a380;
        case 0x17a384u: goto label_17a384;
        case 0x17a388u: goto label_17a388;
        case 0x17a38cu: goto label_17a38c;
        case 0x17a390u: goto label_17a390;
        case 0x17a394u: goto label_17a394;
        case 0x17a398u: goto label_17a398;
        case 0x17a39cu: goto label_17a39c;
        case 0x17a3a0u: goto label_17a3a0;
        case 0x17a3a4u: goto label_17a3a4;
        case 0x17a3a8u: goto label_17a3a8;
        case 0x17a3acu: goto label_17a3ac;
        case 0x17a3b0u: goto label_17a3b0;
        case 0x17a3b4u: goto label_17a3b4;
        case 0x17a3b8u: goto label_17a3b8;
        case 0x17a3bcu: goto label_17a3bc;
        case 0x17a3c0u: goto label_17a3c0;
        case 0x17a3c4u: goto label_17a3c4;
        case 0x17a3c8u: goto label_17a3c8;
        case 0x17a3ccu: goto label_17a3cc;
        case 0x17a3d0u: goto label_17a3d0;
        case 0x17a3d4u: goto label_17a3d4;
        case 0x17a3d8u: goto label_17a3d8;
        case 0x17a3dcu: goto label_17a3dc;
        case 0x17a3e0u: goto label_17a3e0;
        case 0x17a3e4u: goto label_17a3e4;
        case 0x17a3e8u: goto label_17a3e8;
        case 0x17a3ecu: goto label_17a3ec;
        case 0x17a3f0u: goto label_17a3f0;
        case 0x17a3f4u: goto label_17a3f4;
        case 0x17a3f8u: goto label_17a3f8;
        case 0x17a3fcu: goto label_17a3fc;
        case 0x17a400u: goto label_17a400;
        case 0x17a404u: goto label_17a404;
        case 0x17a408u: goto label_17a408;
        case 0x17a40cu: goto label_17a40c;
        case 0x17a410u: goto label_17a410;
        case 0x17a414u: goto label_17a414;
        case 0x17a418u: goto label_17a418;
        case 0x17a41cu: goto label_17a41c;
        case 0x17a420u: goto label_17a420;
        case 0x17a424u: goto label_17a424;
        case 0x17a428u: goto label_17a428;
        case 0x17a42cu: goto label_17a42c;
        case 0x17a430u: goto label_17a430;
        case 0x17a434u: goto label_17a434;
        case 0x17a438u: goto label_17a438;
        case 0x17a43cu: goto label_17a43c;
        case 0x17a440u: goto label_17a440;
        case 0x17a444u: goto label_17a444;
        case 0x17a448u: goto label_17a448;
        case 0x17a44cu: goto label_17a44c;
        case 0x17a450u: goto label_17a450;
        case 0x17a454u: goto label_17a454;
        case 0x17a458u: goto label_17a458;
        case 0x17a45cu: goto label_17a45c;
        case 0x17a460u: goto label_17a460;
        case 0x17a464u: goto label_17a464;
        case 0x17a468u: goto label_17a468;
        case 0x17a46cu: goto label_17a46c;
        case 0x17a470u: goto label_17a470;
        case 0x17a474u: goto label_17a474;
        case 0x17a478u: goto label_17a478;
        case 0x17a47cu: goto label_17a47c;
        case 0x17a480u: goto label_17a480;
        case 0x17a484u: goto label_17a484;
        case 0x17a488u: goto label_17a488;
        case 0x17a48cu: goto label_17a48c;
        case 0x17a490u: goto label_17a490;
        case 0x17a494u: goto label_17a494;
        case 0x17a498u: goto label_17a498;
        case 0x17a49cu: goto label_17a49c;
        case 0x17a4a0u: goto label_17a4a0;
        case 0x17a4a4u: goto label_17a4a4;
        case 0x17a4a8u: goto label_17a4a8;
        case 0x17a4acu: goto label_17a4ac;
        case 0x17a4b0u: goto label_17a4b0;
        case 0x17a4b4u: goto label_17a4b4;
        case 0x17a4b8u: goto label_17a4b8;
        case 0x17a4bcu: goto label_17a4bc;
        case 0x17a4c0u: goto label_17a4c0;
        case 0x17a4c4u: goto label_17a4c4;
        case 0x17a4c8u: goto label_17a4c8;
        case 0x17a4ccu: goto label_17a4cc;
        case 0x17a4d0u: goto label_17a4d0;
        case 0x17a4d4u: goto label_17a4d4;
        case 0x17a4d8u: goto label_17a4d8;
        case 0x17a4dcu: goto label_17a4dc;
        case 0x17a4e0u: goto label_17a4e0;
        case 0x17a4e4u: goto label_17a4e4;
        case 0x17a4e8u: goto label_17a4e8;
        case 0x17a4ecu: goto label_17a4ec;
        case 0x17a4f0u: goto label_17a4f0;
        case 0x17a4f4u: goto label_17a4f4;
        case 0x17a4f8u: goto label_17a4f8;
        case 0x17a4fcu: goto label_17a4fc;
        case 0x17a500u: goto label_17a500;
        case 0x17a504u: goto label_17a504;
        case 0x17a508u: goto label_17a508;
        case 0x17a50cu: goto label_17a50c;
        case 0x17a510u: goto label_17a510;
        case 0x17a514u: goto label_17a514;
        case 0x17a518u: goto label_17a518;
        case 0x17a51cu: goto label_17a51c;
        case 0x17a520u: goto label_17a520;
        case 0x17a524u: goto label_17a524;
        case 0x17a528u: goto label_17a528;
        case 0x17a52cu: goto label_17a52c;
        case 0x17a530u: goto label_17a530;
        case 0x17a534u: goto label_17a534;
        default: break;
    }

    ctx->pc = 0x179ff8u;

label_179ff8:
    // 0x179ff8: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x179ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_179ffc:
    // 0x179ffc: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x179ffcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_17a000:
    // 0x17a000: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x17a000u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_17a004:
    // 0x17a004: 0x8c4bbdd8  lw          $t3, -0x4228($v0)
    ctx->pc = 0x17a004u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950360)));
label_17a008:
    // 0x17a008: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x17a008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_17a00c:
    // 0x17a00c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x17a00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_17a010:
    // 0x17a010: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x17a010u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_17a014:
    // 0x17a014: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x17a014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
label_17a018:
    // 0x17a018: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x17a018u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17a01c:
    // 0x17a01c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x17a01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
label_17a020:
    // 0x17a020: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x17a020u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17a024:
    // 0x17a024: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x17a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_17a028:
    // 0x17a028: 0x140f02d  daddu       $fp, $t2, $zero
    ctx->pc = 0x17a028u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_17a02c:
    // 0x17a02c: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x17a02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_17a030:
    // 0x17a030: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x17a030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_17a034:
    // 0x17a034: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x17a034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_17a038:
    // 0x17a038: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x17a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_17a03c:
    // 0x17a03c: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x17a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_17a040:
    // 0x17a040: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x17a040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_17a044:
    // 0x17a044: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x17a044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_17a048:
    // 0x17a048: 0xafa70014  sw          $a3, 0x14($sp)
    ctx->pc = 0x17a048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 7));
label_17a04c:
    // 0x17a04c: 0x11620007  beq         $t3, $v0, . + 4 + (0x7 << 2)
label_17a050:
    if (ctx->pc == 0x17A050u) {
        ctx->pc = 0x17A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A04Cu;
        // 0x17a050: 0xafa80018  sw          $t0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A054u;
        goto label_17a054;
    }
    ctx->pc = 0x17A04Cu;
    {
        const bool branch_taken_0x17a04c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 2));
        ctx->pc = 0x17A050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A04Cu;
        // 0x17a050: 0xafa80018  sw          $t0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a04c) {
            ctx->pc = 0x17A06Cu;
            goto label_17a06c;
        }
    }
    ctx->pc = 0x17A054u;
label_17a054:
    // 0x17a054: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x17a054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
label_17a058:
    // 0x17a058: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_17a05c:
    if (ctx->pc == 0x17A05Cu) {
        ctx->pc = 0x17A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A058u;
        // 0x17a05c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A060u;
        goto label_17a060;
    }
    ctx->pc = 0x17A058u;
    {
        const bool branch_taken_0x17a058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A058u;
        // 0x17a05c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a058) {
            ctx->pc = 0x17A06Cu;
            goto label_17a06c;
        }
    }
    ctx->pc = 0x17A060u;
label_17a060:
    // 0x17a060: 0xafab0000  sw          $t3, 0x0($sp)
    ctx->pc = 0x17a060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 11));
label_17a064:
    // 0x17a064: 0xc07fd18  jal         func_1FF460
label_17a068:
    if (ctx->pc == 0x17A068u) {
        ctx->pc = 0x17A068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A064u;
        // 0x17a068: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A06Cu;
        goto label_17a06c;
    }
    ctx->pc = 0x17A064u;
    SET_GPR_U32(ctx, 31, 0x17A06Cu);
    ctx->pc = 0x17A068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A064u;
    // 0x17a068: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x17A064u, 0x17A06Cu)) {
        return;
    }
    ctx->pc = 0x17A06Cu;
label_17a06c:
    // 0x17a06c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x17a06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_17a070:
    // 0x17a070: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x17a070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_17a074:
    // 0x17a074: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17a078:
    if (ctx->pc == 0x17A078u) {
        ctx->pc = 0x17A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A074u;
        // 0x17a078: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A07Cu;
        goto label_17a07c;
    }
    ctx->pc = 0x17A074u;
    {
        const bool branch_taken_0x17a074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A074u;
        // 0x17a078: 0xae820034  sw          $v0, 0x34($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a074) {
            ctx->pc = 0x17A094u;
            goto label_17a094;
        }
    }
    ctx->pc = 0x17A07Cu;
label_17a07c:
    // 0x17a07c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17a07cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_17a080:
    // 0x17a080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a084:
    // 0x17a084: 0x8c4482f0  lw          $a0, -0x7D10($v0)
    ctx->pc = 0x17a084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935280)));
label_17a088:
    // 0x17a088: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x17a088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a08c:
    // 0x17a08c: 0xc043642  jal         func_10D908
label_17a090:
    if (ctx->pc == 0x17A090u) {
        ctx->pc = 0x17A090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A08Cu;
        // 0x17a090: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A094u;
        goto label_17a094;
    }
    ctx->pc = 0x17A08Cu;
    SET_GPR_U32(ctx, 31, 0x17A094u);
    ctx->pc = 0x17A090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A08Cu;
    // 0x17a090: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10D908u, 0x17A08Cu, 0x17A094u)) {
        return;
    }
    ctx->pc = 0x17A094u;
label_17a094:
    // 0x17a094: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17a094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17a098:
    // 0x17a098: 0x26830014  addiu       $v1, $s4, 0x14
    ctx->pc = 0x17a098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_17a09c:
    // 0x17a09c: 0xae8200c4  sw          $v0, 0xC4($s4)
    ctx->pc = 0x17a09cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 2));
label_17a0a0:
    // 0x17a0a0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x17a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_17a0a4:
    // 0x17a0a4: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x17a0a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_17a0a8:
    // 0x17a0a8: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_17a0ac:
    if (ctx->pc == 0x17A0ACu) {
        ctx->pc = 0x17A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0A8u;
        // 0x17a0ac: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0B0u;
        goto label_17a0b0;
    }
    ctx->pc = 0x17A0A8u;
    {
        const bool branch_taken_0x17a0a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0A8u;
        // 0x17a0ac: 0x60b02d  daddu       $s6, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0a8) {
            ctx->pc = 0x17A10Cu;
            goto label_17a10c;
        }
    }
    ctx->pc = 0x17A0B0u;
label_17a0b0:
    // 0x17a0b0: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x17a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_17a0b4:
    // 0x17a0b4: 0x2451108c  addiu       $s1, $v0, 0x108C
    ctx->pc = 0x17a0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_17a0b8:
    // 0x17a0b8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x17a0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_17a0bc:
    // 0x17a0bc: 0x0  nop
    ctx->pc = 0x17a0bcu;
    // NOP
label_17a0c0:
    // 0x17a0c0: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x17a0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_17a0c4:
    // 0x17a0c4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_17a0c8:
    if (ctx->pc == 0x17A0C8u) {
        ctx->pc = 0x17A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C4u;
        // 0x17a0c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0CCu;
        goto label_17a0cc;
    }
    ctx->pc = 0x17A0C4u;
    {
        const bool branch_taken_0x17a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0C4u;
        // 0x17a0c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0c4) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0CCu;
label_17a0cc:
    // 0x17a0cc: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
label_17a0d0:
    if (ctx->pc == 0x17A0D0u) {
        ctx->pc = 0x17A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0CCu;
        // 0x17a0d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0D4u;
        goto label_17a0d4;
    }
    ctx->pc = 0x17A0CCu;
    {
        const bool branch_taken_0x17a0cc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0CCu;
        // 0x17a0d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0cc) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0D4u;
label_17a0d4:
    // 0x17a0d4: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x17a0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_17a0d8:
    // 0x17a0d8: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_17a0dc:
    if (ctx->pc == 0x17A0DCu) {
        ctx->pc = 0x17A0E0u;
        goto label_17a0e0;
    }
    ctx->pc = 0x17A0D8u;
    {
        const bool branch_taken_0x17a0d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a0d8) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0E0u;
label_17a0e0:
    // 0x17a0e0: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x17a0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_17a0e4:
    // 0x17a0e4: 0x40f809  jalr        $v0
label_17a0e8:
    if (ctx->pc == 0x17A0E8u) {
        ctx->pc = 0x17A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E4u;
        // 0x17a0e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0ECu;
        goto label_17a0ec;
    }
    ctx->pc = 0x17A0E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A0ECu);
        ctx->pc = 0x17A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0E4u;
        // 0x17a0e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A0E4u, 0x17A0ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17A0ECu;
label_17a0ec:
    // 0x17a0ec: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_17a0f0:
    if (ctx->pc == 0x17A0F0u) {
        ctx->pc = 0x17A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0ECu;
        // 0x17a0f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A0F4u;
        goto label_17a0f4;
    }
    ctx->pc = 0x17A0ECu;
    {
        const bool branch_taken_0x17a0ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0ECu;
        // 0x17a0f0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0ec) {
            ctx->pc = 0x17A0F8u;
            goto label_17a0f8;
        }
    }
    ctx->pc = 0x17A0F4u;
label_17a0f4:
    // 0x17a0f4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a0f8:
    // 0x17a0f8: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_17a0fc:
    if (ctx->pc == 0x17A0FCu) {
        ctx->pc = 0x17A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0F8u;
        // 0x17a0fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A100u;
        goto label_17a100;
    }
    ctx->pc = 0x17A0F8u;
    {
        const bool branch_taken_0x17a0f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A0F8u;
        // 0x17a0fc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a0f8) {
            ctx->pc = 0x17A110u;
            goto label_17a110;
        }
    }
    ctx->pc = 0x17A100u;
label_17a100:
    // 0x17a100: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x17a100u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_17a104:
    // 0x17a104: 0x5600ffee  bnel        $s0, $zero, . + 4 + (-0x12 << 2)
label_17a108:
    if (ctx->pc == 0x17A108u) {
        ctx->pc = 0x17A108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A104u;
        // 0x17a108: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A10Cu;
        goto label_17a10c;
    }
    ctx->pc = 0x17A104u;
    {
        const bool branch_taken_0x17a104 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x17a104) {
            ctx->pc = 0x17A108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A104u;
            // 0x17a108: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A0C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a0c0;
        }
    }
    ctx->pc = 0x17A10Cu;
label_17a10c:
    // 0x17a10c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x17a10cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a110:
    // 0x17a110: 0x144000fd  bnez        $v0, . + 4 + (0xFD << 2)
label_17a114:
    if (ctx->pc == 0x17A114u) {
        ctx->pc = 0x17A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A110u;
        // 0x17a114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A118u;
        goto label_17a118;
    }
    ctx->pc = 0x17A110u;
    {
        const bool branch_taken_0x17a110 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17A114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A110u;
        // 0x17a114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a110) {
            ctx->pc = 0x17A508u;
            goto label_17a508;
        }
    }
    ctx->pc = 0x17A118u;
label_17a118:
    // 0x17a118: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17a11c:
    // 0x17a11c: 0xc05ec5a  jal         func_17B168
label_17a120:
    if (ctx->pc == 0x17A120u) {
        ctx->pc = 0x17A120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A11Cu;
        // 0x17a120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A124u;
        goto label_17a124;
    }
    ctx->pc = 0x17A11Cu;
    SET_GPR_U32(ctx, 31, 0x17A124u);
    ctx->pc = 0x17A120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A11Cu;
    // 0x17a120: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B168u, 0x17A11Cu, 0x17A124u)) {
        return;
    }
    ctx->pc = 0x17A124u;
label_17a124:
    // 0x17a124: 0x2410000c  addiu       $s0, $zero, 0xC
    ctx->pc = 0x17a124u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17a128:
    // 0x17a128: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x17a128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_17a12c:
    // 0x17a12c: 0xc0808f0  jal         func_2023C0
label_17a130:
    if (ctx->pc == 0x17A130u) {
        ctx->pc = 0x17A130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A12Cu;
        // 0x17a130: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A134u;
        goto label_17a134;
    }
    ctx->pc = 0x17A12Cu;
    SET_GPR_U32(ctx, 31, 0x17A134u);
    ctx->pc = 0x17A130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A12Cu;
    // 0x17a130: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17A12Cu, 0x17A134u)) {
        return;
    }
    ctx->pc = 0x17A134u;
label_17a134:
    // 0x17a134: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x17a134u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a138:
    // 0x17a138: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17a138u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a13c:
    // 0x17a13c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a13cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a140:
    // 0x17a140: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a144:
    // 0x17a144: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x17a144u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_17a148:
    // 0x17a148: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x17a148u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_17a14c:
    // 0x17a14c: 0xc081b56  jal         func_206D58
label_17a150:
    if (ctx->pc == 0x17A150u) {
        ctx->pc = 0x17A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A14Cu;
        // 0x17a150: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A154u;
        goto label_17a154;
    }
    ctx->pc = 0x17A14Cu;
    SET_GPR_U32(ctx, 31, 0x17A154u);
    ctx->pc = 0x17A150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A14Cu;
    // 0x17a150: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A14Cu, 0x17A154u)) {
        return;
    }
    ctx->pc = 0x17A154u;
label_17a154:
    // 0x17a154: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x17a154u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_17a158:
    // 0x17a158: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a15c:
    // 0x17a15c: 0xc081b56  jal         func_206D58
label_17a160:
    if (ctx->pc == 0x17A160u) {
        ctx->pc = 0x17A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A15Cu;
        // 0x17a160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A164u;
        goto label_17a164;
    }
    ctx->pc = 0x17A15Cu;
    SET_GPR_U32(ctx, 31, 0x17A164u);
    ctx->pc = 0x17A160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A15Cu;
    // 0x17a160: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A15Cu, 0x17A164u)) {
        return;
    }
    ctx->pc = 0x17A164u;
label_17a164:
    // 0x17a164: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x17a164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_17a168:
    // 0x17a168: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x17a168u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_17a16c:
    // 0x17a16c: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x17a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_17a170:
    // 0x17a170: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x17a170u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
label_17a174:
    // 0x17a174: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x17a174u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_17a178:
    // 0x17a178: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_17a17c:
    if (ctx->pc == 0x17A17Cu) {
        ctx->pc = 0x17A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A178u;
        // 0x17a17c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A180u;
        goto label_17a180;
    }
    ctx->pc = 0x17A178u;
    {
        const bool branch_taken_0x17a178 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A178u;
        // 0x17a17c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a178) {
            ctx->pc = 0x17A184u;
            goto label_17a184;
        }
    }
    ctx->pc = 0x17A180u;
label_17a180:
    // 0x17a180: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x17a180u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_17a184:
    // 0x17a184: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_17a188:
    // 0x17a188: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_17a18c:
    if (ctx->pc == 0x17A18Cu) {
        ctx->pc = 0x17A18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A188u;
        // 0x17a18c: 0xaed20004  sw          $s2, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A190u;
        goto label_17a190;
    }
    ctx->pc = 0x17A188u;
    {
        const bool branch_taken_0x17a188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a188) {
            ctx->pc = 0x17A18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A188u;
            // 0x17a18c: 0xaed20004  sw          $s2, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A190u;
            goto label_17a190;
        }
    }
    ctx->pc = 0x17A190u;
label_17a190:
    // 0x17a190: 0xaed20008  sw          $s2, 0x8($s6)
    ctx->pc = 0x17a190u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 18));
label_17a194:
    // 0x17a194: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a198:
    // 0x17a198: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x17a198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17a19c:
    // 0x17a19c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a19cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a1a0:
    // 0x17a1a0: 0xc06491a  jal         func_192468
label_17a1a4:
    if (ctx->pc == 0x17A1A4u) {
        ctx->pc = 0x17A1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A0u;
        // 0x17a1a4: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1A8u;
        goto label_17a1a8;
    }
    ctx->pc = 0x17A1A0u;
    SET_GPR_U32(ctx, 31, 0x17A1A8u);
    ctx->pc = 0x17A1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1A0u;
    // 0x17a1a4: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17A1A0u, 0x17A1A8u)) {
        return;
    }
    ctx->pc = 0x17A1A8u;
label_17a1a8:
    // 0x17a1a8: 0x13c00026  beqz        $fp, . + 4 + (0x26 << 2)
label_17a1ac:
    if (ctx->pc == 0x17A1ACu) {
        ctx->pc = 0x17A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A8u;
        // 0x17a1ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1B0u;
        goto label_17a1b0;
    }
    ctx->pc = 0x17A1A8u;
    {
        const bool branch_taken_0x17a1a8 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1A8u;
        // 0x17a1ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1a8) {
            ctx->pc = 0x17A244u;
            goto label_17a244;
        }
    }
    ctx->pc = 0x17A1B0u;
label_17a1b0:
    // 0x17a1b0: 0x8fd50000  lw          $s5, 0x0($fp)
    ctx->pc = 0x17a1b0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_17a1b4:
    // 0x17a1b4: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_17a1b8:
    if (ctx->pc == 0x17A1B8u) {
        ctx->pc = 0x17A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1B4u;
        // 0x17a1b8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1BCu;
        goto label_17a1bc;
    }
    ctx->pc = 0x17A1B4u;
    {
        const bool branch_taken_0x17a1b4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1B4u;
        // 0x17a1b8: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a1b4) {
            ctx->pc = 0x17A240u;
            goto label_17a240;
        }
    }
    ctx->pc = 0x17A1BCu;
label_17a1bc:
    // 0x17a1bc: 0x8fd00004  lw          $s0, 0x4($fp)
    ctx->pc = 0x17a1bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_17a1c0:
    // 0x17a1c0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a1c4:
    // 0x17a1c4: 0xc0808f0  jal         func_2023C0
label_17a1c8:
    if (ctx->pc == 0x17A1C8u) {
        ctx->pc = 0x17A1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1C4u;
        // 0x17a1c8: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1CCu;
        goto label_17a1cc;
    }
    ctx->pc = 0x17A1C4u;
    SET_GPR_U32(ctx, 31, 0x17A1CCu);
    ctx->pc = 0x17A1C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1C4u;
    // 0x17a1c8: 0x2411000d  addiu       $s1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17A1C4u, 0x17A1CCu)) {
        return;
    }
    ctx->pc = 0x17A1CCu;
label_17a1cc:
    // 0x17a1cc: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x17a1ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_17a1d0:
    // 0x17a1d0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17a1d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a1d4:
    // 0x17a1d4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x17a1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_17a1d8:
    // 0x17a1d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a1d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a1dc:
    // 0x17a1dc: 0xae710008  sw          $s1, 0x8($s3)
    ctx->pc = 0x17a1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 17));
label_17a1e0:
    // 0x17a1e0: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x17a1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_17a1e4:
    // 0x17a1e4: 0xc081b56  jal         func_206D58
label_17a1e8:
    if (ctx->pc == 0x17A1E8u) {
        ctx->pc = 0x17A1E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1E4u;
        // 0x17a1e8: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1ECu;
        goto label_17a1ec;
    }
    ctx->pc = 0x17A1E4u;
    SET_GPR_U32(ctx, 31, 0x17A1ECu);
    ctx->pc = 0x17A1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1E4u;
    // 0x17a1e8: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A1E4u, 0x17A1ECu)) {
        return;
    }
    ctx->pc = 0x17A1ECu;
label_17a1ec:
    // 0x17a1ec: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x17a1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_17a1f0:
    // 0x17a1f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17a1f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a1f4:
    // 0x17a1f4: 0xc081b56  jal         func_206D58
label_17a1f8:
    if (ctx->pc == 0x17A1F8u) {
        ctx->pc = 0x17A1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A1F4u;
        // 0x17a1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A1FCu;
        goto label_17a1fc;
    }
    ctx->pc = 0x17A1F4u;
    SET_GPR_U32(ctx, 31, 0x17A1FCu);
    ctx->pc = 0x17A1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A1F4u;
    // 0x17a1f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A1F4u, 0x17A1FCu)) {
        return;
    }
    ctx->pc = 0x17A1FCu;
label_17a1fc:
    // 0x17a1fc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x17a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_17a200:
    // 0x17a200: 0xae620010  sw          $v0, 0x10($s3)
    ctx->pc = 0x17a200u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
label_17a204:
    // 0x17a204: 0xae720014  sw          $s2, 0x14($s3)
    ctx->pc = 0x17a204u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 18));
label_17a208:
    // 0x17a208: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x17a208u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_17a20c:
    // 0x17a20c: 0xae630004  sw          $v1, 0x4($s3)
    ctx->pc = 0x17a20cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
label_17a210:
    // 0x17a210: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_17a214:
    if (ctx->pc == 0x17A214u) {
        ctx->pc = 0x17A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A210u;
        // 0x17a214: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A218u;
        goto label_17a218;
    }
    ctx->pc = 0x17A210u;
    {
        const bool branch_taken_0x17a210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A210u;
        // 0x17a214: 0xae600000  sw          $zero, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a210) {
            ctx->pc = 0x17A21Cu;
            goto label_17a21c;
        }
    }
    ctx->pc = 0x17A218u;
label_17a218:
    // 0x17a218: 0xac730000  sw          $s3, 0x0($v1)
    ctx->pc = 0x17a218u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 19));
label_17a21c:
    // 0x17a21c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_17a220:
    // 0x17a220: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_17a224:
    if (ctx->pc == 0x17A224u) {
        ctx->pc = 0x17A224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A220u;
        // 0x17a224: 0xaed30004  sw          $s3, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A228u;
        goto label_17a228;
    }
    ctx->pc = 0x17A220u;
    {
        const bool branch_taken_0x17a220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a220) {
            ctx->pc = 0x17A224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A220u;
            // 0x17a224: 0xaed30004  sw          $s3, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A228u;
            goto label_17a228;
        }
    }
    ctx->pc = 0x17A228u;
label_17a228:
    // 0x17a228: 0xaed30008  sw          $s3, 0x8($s6)
    ctx->pc = 0x17a228u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 19));
label_17a22c:
    // 0x17a22c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a22cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a230:
    // 0x17a230: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x17a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17a234:
    // 0x17a234: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a238:
    // 0x17a238: 0xc06491a  jal         func_192468
label_17a23c:
    if (ctx->pc == 0x17A23Cu) {
        ctx->pc = 0x17A23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A238u;
        // 0x17a23c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A240u;
        goto label_17a240;
    }
    ctx->pc = 0x17A238u;
    SET_GPR_U32(ctx, 31, 0x17A240u);
    ctx->pc = 0x17A23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A238u;
    // 0x17a23c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17A238u, 0x17A240u)) {
        return;
    }
    ctx->pc = 0x17A240u;
label_17a240:
    // 0x17a240: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a244:
    // 0x17a244: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x17a244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_17a248:
    // 0x17a248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a24c:
    // 0x17a24c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a24cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a250:
    // 0x17a250: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a250u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a254:
    // 0x17a254: 0xc05e6c8  jal         func_179B20
label_17a258:
    if (ctx->pc == 0x17A258u) {
        ctx->pc = 0x17A258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A254u;
        // 0x17a258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A25Cu;
        goto label_17a25c;
    }
    ctx->pc = 0x17A254u;
    SET_GPR_U32(ctx, 31, 0x17A25Cu);
    ctx->pc = 0x17A258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A254u;
    // 0x17a258: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A254u, 0x17A25Cu)) {
        return;
    }
    ctx->pc = 0x17A25Cu;
label_17a25c:
    // 0x17a25c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a25cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a260:
    // 0x17a260: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x17a260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_17a264:
    // 0x17a264: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a264u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a268:
    // 0x17a268: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a268u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a26c:
    // 0x17a26c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a26cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a270:
    // 0x17a270: 0xc05e6c8  jal         func_179B20
label_17a274:
    if (ctx->pc == 0x17A274u) {
        ctx->pc = 0x17A274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A270u;
        // 0x17a274: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A278u;
        goto label_17a278;
    }
    ctx->pc = 0x17A270u;
    SET_GPR_U32(ctx, 31, 0x17A278u);
    ctx->pc = 0x17A274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A270u;
    // 0x17a274: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A270u, 0x17A278u)) {
        return;
    }
    ctx->pc = 0x17A278u;
label_17a278:
    // 0x17a278: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x17a278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_17a27c:
    // 0x17a27c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17a280:
    if (ctx->pc == 0x17A280u) {
        ctx->pc = 0x17A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A27Cu;
        // 0x17a280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A284u;
        goto label_17a284;
    }
    ctx->pc = 0x17A27Cu;
    {
        const bool branch_taken_0x17a27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A27Cu;
        // 0x17a280: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a27c) {
            ctx->pc = 0x17A29Cu;
            goto label_17a29c;
        }
    }
    ctx->pc = 0x17A284u;
label_17a284:
    // 0x17a284: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x17a284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_17a288:
    // 0x17a288: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a28c:
    // 0x17a28c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a290:
    // 0x17a290: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a290u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a294:
    // 0x17a294: 0xc05e6c8  jal         func_179B20
label_17a298:
    if (ctx->pc == 0x17A298u) {
        ctx->pc = 0x17A298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A294u;
        // 0x17a298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A29Cu;
        goto label_17a29c;
    }
    ctx->pc = 0x17A294u;
    SET_GPR_U32(ctx, 31, 0x17A29Cu);
    ctx->pc = 0x17A298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A294u;
    // 0x17a298: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A294u, 0x17A29Cu)) {
        return;
    }
    ctx->pc = 0x17A29Cu;
label_17a29c:
    // 0x17a29c: 0x12e0003b  beqz        $s7, . + 4 + (0x3B << 2)
label_17a2a0:
    if (ctx->pc == 0x17A2A0u) {
        ctx->pc = 0x17A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A29Cu;
        // 0x17a2a0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2A4u;
        goto label_17a2a4;
    }
    ctx->pc = 0x17A29Cu;
    {
        const bool branch_taken_0x17a29c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A29Cu;
        // 0x17a2a0: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a29c) {
            ctx->pc = 0x17A38Cu;
            goto label_17a38c;
        }
    }
    ctx->pc = 0x17A2A4u;
label_17a2a4:
    // 0x17a2a4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_17a2a8:
    if (ctx->pc == 0x17A2A8u) {
        ctx->pc = 0x17A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2A4u;
        // 0x17a2a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2ACu;
        goto label_17a2ac;
    }
    ctx->pc = 0x17A2A4u;
    {
        const bool branch_taken_0x17a2a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2A4u;
        // 0x17a2a8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2a4) {
            ctx->pc = 0x17A2D4u;
            goto label_17a2d4;
        }
    }
    ctx->pc = 0x17A2ACu;
label_17a2ac:
    // 0x17a2ac: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17a2acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_17a2b0:
    // 0x17a2b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a2b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a2b4:
    // 0x17a2b4: 0x24c66e88  addiu       $a2, $a2, 0x6E88
    ctx->pc = 0x17a2b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28296));
label_17a2b8:
    // 0x17a2b8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x17a2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_17a2bc:
    // 0x17a2bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a2bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2c0:
    // 0x17a2c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a2c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a2c4:
    // 0x17a2c4: 0xc05e6c8  jal         func_179B20
label_17a2c8:
    if (ctx->pc == 0x17A2C8u) {
        ctx->pc = 0x17A2C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2C4u;
        // 0x17a2c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2CCu;
        goto label_17a2cc;
    }
    ctx->pc = 0x17A2C4u;
    SET_GPR_U32(ctx, 31, 0x17A2CCu);
    ctx->pc = 0x17A2C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2C4u;
    // 0x17a2c8: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A2C4u, 0x17A2CCu)) {
        return;
    }
    ctx->pc = 0x17A2CCu;
label_17a2cc:
    // 0x17a2cc: 0x10000013  b           . + 4 + (0x13 << 2)
label_17a2d0:
    if (ctx->pc == 0x17A2D0u) {
        ctx->pc = 0x17A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2CCu;
        // 0x17a2d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2D4u;
        goto label_17a2d4;
    }
    ctx->pc = 0x17A2CCu;
    {
        const bool branch_taken_0x17a2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2CCu;
        // 0x17a2d0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2cc) {
            ctx->pc = 0x17A31Cu;
            goto label_17a31c;
        }
    }
    ctx->pc = 0x17A2D4u;
label_17a2d4:
    // 0x17a2d4: 0x8e84000c  lw          $a0, 0xC($s4)
    ctx->pc = 0x17a2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_17a2d8:
    // 0x17a2d8: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
label_17a2dc:
    if (ctx->pc == 0x17A2DCu) {
        ctx->pc = 0x17A2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2D8u;
        // 0x17a2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2E0u;
        goto label_17a2e0;
    }
    ctx->pc = 0x17A2D8u;
    {
        const bool branch_taken_0x17a2d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a2d8) {
            ctx->pc = 0x17A2DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A2D8u;
            // 0x17a2dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A31Cu;
            goto label_17a31c;
        }
    }
    ctx->pc = 0x17A2E0u;
label_17a2e0:
    // 0x17a2e0: 0xc05e258  jal         func_178960
label_17a2e4:
    if (ctx->pc == 0x17A2E4u) {
        ctx->pc = 0x17A2E8u;
        goto label_17a2e8;
    }
    ctx->pc = 0x17A2E0u;
    SET_GPR_U32(ctx, 31, 0x17A2E8u);
    ctx->pc = 0x178960u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178960u, 0x17A2E0u, 0x17A2E8u)) {
        return;
    }
    ctx->pc = 0x17A2E8u;
label_17a2e8:
    // 0x17a2e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a2e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a2ec:
    // 0x17a2ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x17a2ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17a2f0:
    // 0x17a2f0: 0xc0c4a1f  jal         func_31287C
label_17a2f4:
    if (ctx->pc == 0x17A2F4u) {
        ctx->pc = 0x17A2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F0u;
        // 0x17a2f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A2F8u;
        goto label_17a2f8;
    }
    ctx->pc = 0x17A2F0u;
    SET_GPR_U32(ctx, 31, 0x17A2F8u);
    ctx->pc = 0x17A2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A2F0u;
    // 0x17a2f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31287Cu;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31287Cu, 0x17A2F0u, 0x17A2F8u)) {
        return;
    }
    ctx->pc = 0x17A2F8u;
label_17a2f8:
    // 0x17a2f8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_17a2fc:
    if (ctx->pc == 0x17A2FCu) {
        ctx->pc = 0x17A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F8u;
        // 0x17a2fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A300u;
        goto label_17a300;
    }
    ctx->pc = 0x17A2F8u;
    {
        const bool branch_taken_0x17a2f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A2F8u;
        // 0x17a2fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a2f8) {
            ctx->pc = 0x17A318u;
            goto label_17a318;
        }
    }
    ctx->pc = 0x17A300u;
label_17a300:
    // 0x17a300: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x17a300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_17a304:
    // 0x17a304: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x17a304u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a308:
    // 0x17a308: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a308u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a30c:
    // 0x17a30c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a30cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a310:
    // 0x17a310: 0xc05e6c8  jal         func_179B20
label_17a314:
    if (ctx->pc == 0x17A314u) {
        ctx->pc = 0x17A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A310u;
        // 0x17a314: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A318u;
        goto label_17a318;
    }
    ctx->pc = 0x17A310u;
    SET_GPR_U32(ctx, 31, 0x17A318u);
    ctx->pc = 0x17A314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A310u;
    // 0x17a314: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A310u, 0x17A318u)) {
        return;
    }
    ctx->pc = 0x17A318u;
label_17a318:
    // 0x17a318: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a31c:
    // 0x17a31c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17a31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a320:
    // 0x17a320: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17a320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17a324:
    // 0x17a324: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17a324u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a328:
    // 0x17a328: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a328u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a32c:
    // 0x17a32c: 0xc05e6c8  jal         func_179B20
label_17a330:
    if (ctx->pc == 0x17A330u) {
        ctx->pc = 0x17A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A32Cu;
        // 0x17a330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A334u;
        goto label_17a334;
    }
    ctx->pc = 0x17A32Cu;
    SET_GPR_U32(ctx, 31, 0x17A334u);
    ctx->pc = 0x17A330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A32Cu;
    // 0x17a330: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A32Cu, 0x17A334u)) {
        return;
    }
    ctx->pc = 0x17A334u;
label_17a334:
    // 0x17a334: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x17a334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17a338:
    // 0x17a338: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a33c:
    // 0x17a33c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x17a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_17a340:
    // 0x17a340: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17a340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17a344:
    // 0x17a344: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a348:
    // 0x17a348: 0xc05e6c8  jal         func_179B20
label_17a34c:
    if (ctx->pc == 0x17A34Cu) {
        ctx->pc = 0x17A34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A348u;
        // 0x17a34c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A350u;
        goto label_17a350;
    }
    ctx->pc = 0x17A348u;
    SET_GPR_U32(ctx, 31, 0x17A350u);
    ctx->pc = 0x17A34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A348u;
    // 0x17a34c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A348u, 0x17A350u)) {
        return;
    }
    ctx->pc = 0x17A350u;
label_17a350:
    // 0x17a350: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x17a350u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a354:
    // 0x17a354: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a358:
    // 0x17a358: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x17a358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_17a35c:
    // 0x17a35c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17a35cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17a360:
    // 0x17a360: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a360u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a364:
    // 0x17a364: 0xc05e6c8  jal         func_179B20
label_17a368:
    if (ctx->pc == 0x17A368u) {
        ctx->pc = 0x17A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A364u;
        // 0x17a368: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A36Cu;
        goto label_17a36c;
    }
    ctx->pc = 0x17A364u;
    SET_GPR_U32(ctx, 31, 0x17A36Cu);
    ctx->pc = 0x17A368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A364u;
    // 0x17a368: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A364u, 0x17A36Cu)) {
        return;
    }
    ctx->pc = 0x17A36Cu;
label_17a36c:
    // 0x17a36c: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x17a36cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_17a370:
    // 0x17a370: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x17a370u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_17a374:
    // 0x17a374: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a378:
    // 0x17a378: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x17a378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_17a37c:
    // 0x17a37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a380:
    // 0x17a380: 0xc05e6c8  jal         func_179B20
label_17a384:
    if (ctx->pc == 0x17A384u) {
        ctx->pc = 0x17A384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A380u;
        // 0x17a384: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A388u;
        goto label_17a388;
    }
    ctx->pc = 0x17A380u;
    SET_GPR_U32(ctx, 31, 0x17A388u);
    ctx->pc = 0x17A384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A380u;
    // 0x17a384: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A380u, 0x17A388u)) {
        return;
    }
    ctx->pc = 0x17A388u;
label_17a388:
    // 0x17a388: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x17a388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
label_17a38c:
    // 0x17a38c: 0x13c00025  beqz        $fp, . + 4 + (0x25 << 2)
label_17a390:
    if (ctx->pc == 0x17A390u) {
        ctx->pc = 0x17A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A38Cu;
        // 0x17a390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A394u;
        goto label_17a394;
    }
    ctx->pc = 0x17A38Cu;
    {
        const bool branch_taken_0x17a38c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A38Cu;
        // 0x17a390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a38c) {
            ctx->pc = 0x17A424u;
            goto label_17a424;
        }
    }
    ctx->pc = 0x17A394u;
label_17a394:
    // 0x17a394: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x17a394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_17a398:
    // 0x17a398: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_17a39c:
    if (ctx->pc == 0x17A39Cu) {
        ctx->pc = 0x17A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A398u;
        // 0x17a39c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3A0u;
        goto label_17a3a0;
    }
    ctx->pc = 0x17A398u;
    {
        const bool branch_taken_0x17a398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A398u;
        // 0x17a39c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a398) {
            ctx->pc = 0x17A424u;
            goto label_17a424;
        }
    }
    ctx->pc = 0x17A3A0u;
label_17a3a0:
    // 0x17a3a0: 0xc0808f0  jal         func_2023C0
label_17a3a4:
    if (ctx->pc == 0x17A3A4u) {
        ctx->pc = 0x17A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3A0u;
        // 0x17a3a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3A8u;
        goto label_17a3a8;
    }
    ctx->pc = 0x17A3A0u;
    SET_GPR_U32(ctx, 31, 0x17A3A8u);
    ctx->pc = 0x17A3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3A0u;
    // 0x17a3a4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17A3A0u, 0x17A3A8u)) {
        return;
    }
    ctx->pc = 0x17A3A8u;
label_17a3a8:
    // 0x17a3a8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17a3a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17a3ac:
    // 0x17a3ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a3acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a3b0:
    // 0x17a3b0: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x17a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_17a3b4:
    // 0x17a3b4: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x17a3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_17a3b8:
    // 0x17a3b8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3bc:
    // 0x17a3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3c0:
    // 0x17a3c0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17a3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17a3c4:
    // 0x17a3c4: 0xc081b56  jal         func_206D58
label_17a3c8:
    if (ctx->pc == 0x17A3C8u) {
        ctx->pc = 0x17A3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3C4u;
        // 0x17a3c8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3CCu;
        goto label_17a3cc;
    }
    ctx->pc = 0x17A3C4u;
    SET_GPR_U32(ctx, 31, 0x17A3CCu);
    ctx->pc = 0x17A3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3C4u;
    // 0x17a3c8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A3C4u, 0x17A3CCu)) {
        return;
    }
    ctx->pc = 0x17A3CCu;
label_17a3cc:
    // 0x17a3cc: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x17a3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_17a3d0:
    // 0x17a3d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a3d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a3d4:
    // 0x17a3d4: 0xc081b56  jal         func_206D58
label_17a3d8:
    if (ctx->pc == 0x17A3D8u) {
        ctx->pc = 0x17A3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3D4u;
        // 0x17a3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3DCu;
        goto label_17a3dc;
    }
    ctx->pc = 0x17A3D4u;
    SET_GPR_U32(ctx, 31, 0x17A3DCu);
    ctx->pc = 0x17A3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A3D4u;
    // 0x17a3d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A3D4u, 0x17A3DCu)) {
        return;
    }
    ctx->pc = 0x17A3DCu;
label_17a3dc:
    // 0x17a3dc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x17a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_17a3e0:
    // 0x17a3e0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17a3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_17a3e4:
    // 0x17a3e4: 0xae300018  sw          $s0, 0x18($s1)
    ctx->pc = 0x17a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
label_17a3e8:
    // 0x17a3e8: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17a3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_17a3ec:
    // 0x17a3ec: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x17a3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_17a3f0:
    // 0x17a3f0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_17a3f4:
    if (ctx->pc == 0x17A3F4u) {
        ctx->pc = 0x17A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3F0u;
        // 0x17a3f4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A3F8u;
        goto label_17a3f8;
    }
    ctx->pc = 0x17A3F0u;
    {
        const bool branch_taken_0x17a3f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A3F0u;
        // 0x17a3f4: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a3f0) {
            ctx->pc = 0x17A3FCu;
            goto label_17a3fc;
        }
    }
    ctx->pc = 0x17A3F8u;
label_17a3f8:
    // 0x17a3f8: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x17a3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_17a3fc:
    // 0x17a3fc: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_17a400:
    // 0x17a400: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_17a404:
    if (ctx->pc == 0x17A404u) {
        ctx->pc = 0x17A404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A400u;
        // 0x17a404: 0xaed10004  sw          $s1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A408u;
        goto label_17a408;
    }
    ctx->pc = 0x17A400u;
    {
        const bool branch_taken_0x17a400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a400) {
            ctx->pc = 0x17A404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A400u;
            // 0x17a404: 0xaed10004  sw          $s1, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A408u;
            goto label_17a408;
        }
    }
    ctx->pc = 0x17A408u;
label_17a408:
    // 0x17a408: 0xaed10008  sw          $s1, 0x8($s6)
    ctx->pc = 0x17a408u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 17));
label_17a40c:
    // 0x17a40c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a410:
    // 0x17a410: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x17a410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17a414:
    // 0x17a414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a418:
    // 0x17a418: 0xc06491a  jal         func_192468
label_17a41c:
    if (ctx->pc == 0x17A41Cu) {
        ctx->pc = 0x17A41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A418u;
        // 0x17a41c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A420u;
        goto label_17a420;
    }
    ctx->pc = 0x17A418u;
    SET_GPR_U32(ctx, 31, 0x17A420u);
    ctx->pc = 0x17A41Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A418u;
    // 0x17a41c: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17A418u, 0x17A420u)) {
        return;
    }
    ctx->pc = 0x17A420u;
label_17a420:
    // 0x17a420: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a420u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a424:
    // 0x17a424: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a428:
    // 0x17a428: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x17a428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17a42c:
    // 0x17a42c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a42cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a430:
    // 0x17a430: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a430u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a434:
    // 0x17a434: 0xc05e6c8  jal         func_179B20
label_17a438:
    if (ctx->pc == 0x17A438u) {
        ctx->pc = 0x17A438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A434u;
        // 0x17a438: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A43Cu;
        goto label_17a43c;
    }
    ctx->pc = 0x17A434u;
    SET_GPR_U32(ctx, 31, 0x17A43Cu);
    ctx->pc = 0x17A438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A434u;
    // 0x17a438: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A434u, 0x17A43Cu)) {
        return;
    }
    ctx->pc = 0x17A43Cu;
label_17a43c:
    // 0x17a43c: 0x24100011  addiu       $s0, $zero, 0x11
    ctx->pc = 0x17a43cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_17a440:
    // 0x17a440: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x17a440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
label_17a444:
    // 0x17a444: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a444u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a448:
    // 0x17a448: 0x24c66e98  addiu       $a2, $a2, 0x6E98
    ctx->pc = 0x17a448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28312));
label_17a44c:
    // 0x17a44c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a44cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a450:
    // 0x17a450: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x17a450u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a454:
    // 0x17a454: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a458:
    // 0x17a458: 0xc05e6c8  jal         func_179B20
label_17a45c:
    if (ctx->pc == 0x17A45Cu) {
        ctx->pc = 0x17A45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A458u;
        // 0x17a45c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A460u;
        goto label_17a460;
    }
    ctx->pc = 0x17A458u;
    SET_GPR_U32(ctx, 31, 0x17A460u);
    ctx->pc = 0x17A45Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A458u;
    // 0x17a45c: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A458u, 0x17A460u)) {
        return;
    }
    ctx->pc = 0x17A460u;
label_17a460:
    // 0x17a460: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x17a460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_17a464:
    // 0x17a464: 0xc0808f0  jal         func_2023C0
label_17a468:
    if (ctx->pc == 0x17A468u) {
        ctx->pc = 0x17A468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A464u;
        // 0x17a468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A46Cu;
        goto label_17a46c;
    }
    ctx->pc = 0x17A464u;
    SET_GPR_U32(ctx, 31, 0x17A46Cu);
    ctx->pc = 0x17A468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A464u;
    // 0x17a468: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x17A464u, 0x17A46Cu)) {
        return;
    }
    ctx->pc = 0x17A46Cu;
label_17a46c:
    // 0x17a46c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x17a46cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17a470:
    // 0x17a470: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a474:
    // 0x17a474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17a474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a478:
    // 0x17a478: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x17a478u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
label_17a47c:
    // 0x17a47c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x17a47cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_17a480:
    // 0x17a480: 0xc081b56  jal         func_206D58
label_17a484:
    if (ctx->pc == 0x17A484u) {
        ctx->pc = 0x17A484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A480u;
        // 0x17a484: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A488u;
        goto label_17a488;
    }
    ctx->pc = 0x17A480u;
    SET_GPR_U32(ctx, 31, 0x17A488u);
    ctx->pc = 0x17A484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A480u;
    // 0x17a484: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A480u, 0x17A488u)) {
        return;
    }
    ctx->pc = 0x17A488u;
label_17a488:
    // 0x17a488: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x17a488u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_17a48c:
    // 0x17a48c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a48cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a490:
    // 0x17a490: 0xc081b56  jal         func_206D58
label_17a494:
    if (ctx->pc == 0x17A494u) {
        ctx->pc = 0x17A494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A490u;
        // 0x17a494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A498u;
        goto label_17a498;
    }
    ctx->pc = 0x17A490u;
    SET_GPR_U32(ctx, 31, 0x17A498u);
    ctx->pc = 0x17A494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A490u;
    // 0x17a494: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x206D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x206D58u, 0x17A490u, 0x17A498u)) {
        return;
    }
    ctx->pc = 0x17A498u;
label_17a498:
    // 0x17a498: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x17a498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_17a49c:
    // 0x17a49c: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x17a49cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_17a4a0:
    // 0x17a4a0: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x17a4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
label_17a4a4:
    // 0x17a4a4: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x17a4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
label_17a4a8:
    // 0x17a4a8: 0xae230004  sw          $v1, 0x4($s1)
    ctx->pc = 0x17a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
label_17a4ac:
    // 0x17a4ac: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_17a4b0:
    if (ctx->pc == 0x17A4B0u) {
        ctx->pc = 0x17A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4ACu;
        // 0x17a4b0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4B4u;
        goto label_17a4b4;
    }
    ctx->pc = 0x17A4ACu;
    {
        const bool branch_taken_0x17a4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4ACu;
        // 0x17a4b0: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a4ac) {
            ctx->pc = 0x17A4B8u;
            goto label_17a4b8;
        }
    }
    ctx->pc = 0x17A4B4u;
label_17a4b4:
    // 0x17a4b4: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x17a4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_17a4b8:
    // 0x17a4b8: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x17a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_17a4bc:
    // 0x17a4bc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_17a4c0:
    if (ctx->pc == 0x17A4C0u) {
        ctx->pc = 0x17A4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4BCu;
        // 0x17a4c0: 0xaed10004  sw          $s1, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4C4u;
        goto label_17a4c4;
    }
    ctx->pc = 0x17A4BCu;
    {
        const bool branch_taken_0x17a4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a4bc) {
            ctx->pc = 0x17A4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17A4BCu;
            // 0x17a4c0: 0xaed10004  sw          $s1, 0x4($s6) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17A4C4u;
            goto label_17a4c4;
        }
    }
    ctx->pc = 0x17A4C4u;
label_17a4c4:
    // 0x17a4c4: 0xaed10008  sw          $s1, 0x8($s6)
    ctx->pc = 0x17a4c4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 17));
label_17a4c8:
    // 0x17a4c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x17a4c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a4cc:
    // 0x17a4cc: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x17a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_17a4d0:
    // 0x17a4d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x17a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_17a4d4:
    // 0x17a4d4: 0xc06491a  jal         func_192468
label_17a4d8:
    if (ctx->pc == 0x17A4D8u) {
        ctx->pc = 0x17A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4D4u;
        // 0x17a4d8: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4DCu;
        goto label_17a4dc;
    }
    ctx->pc = 0x17A4D4u;
    SET_GPR_U32(ctx, 31, 0x17A4DCu);
    ctx->pc = 0x17A4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4D4u;
    // 0x17a4d8: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x192468u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x192468u, 0x17A4D4u, 0x17A4DCu)) {
        return;
    }
    ctx->pc = 0x17A4DCu;
label_17a4dc:
    // 0x17a4dc: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x17a4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_17a4e0:
    // 0x17a4e0: 0xc05ec5a  jal         func_17B168
label_17a4e4:
    if (ctx->pc == 0x17A4E4u) {
        ctx->pc = 0x17A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4E0u;
        // 0x17a4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A4E8u;
        goto label_17a4e8;
    }
    ctx->pc = 0x17A4E0u;
    SET_GPR_U32(ctx, 31, 0x17A4E8u);
    ctx->pc = 0x17A4E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4E0u;
    // 0x17a4e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17B168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17B168u, 0x17A4E0u, 0x17A4E8u)) {
        return;
    }
    ctx->pc = 0x17A4E8u;
label_17a4e8:
    // 0x17a4e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x17a4e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17a4ec:
    // 0x17a4ec: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17a4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_17a4f0:
    // 0x17a4f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17a4f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a4f4:
    // 0x17a4f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17a4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a4f8:
    // 0x17a4f8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17a4f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17a4fc:
    // 0x17a4fc: 0xc05e6c8  jal         func_179B20
label_17a500:
    if (ctx->pc == 0x17A500u) {
        ctx->pc = 0x17A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A4FCu;
        // 0x17a500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A504u;
        goto label_17a504;
    }
    ctx->pc = 0x17A4FCu;
    SET_GPR_U32(ctx, 31, 0x17A504u);
    ctx->pc = 0x17A500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17A4FCu;
    // 0x17a500: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179B20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179B20u, 0x17A4FCu, 0x17A504u)) {
        return;
    }
    ctx->pc = 0x17A504u;
label_17a504:
    // 0x17a504: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x17a504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_17a508:
    // 0x17a508: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x17a508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_17a50c:
    // 0x17a50c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x17a50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17a510:
    // 0x17a510: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x17a510u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17a514:
    // 0x17a514: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x17a514u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17a518:
    // 0x17a518: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x17a518u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17a51c:
    // 0x17a51c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x17a51cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17a520:
    // 0x17a520: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x17a520u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17a524:
    // 0x17a524: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x17a524u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17a528:
    // 0x17a528: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x17a528u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17a52c:
    // 0x17a52c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x17a52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_17a530:
    // 0x17a530: 0x3e00008  jr          $ra
label_17a534:
    if (ctx->pc == 0x17A534u) {
        ctx->pc = 0x17A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A530u;
        // 0x17a534: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17A538u;
        goto label_fallthrough_0x17a530;
    }
    ctx->pc = 0x17A530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17A530u;
        // 0x17a534: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17A530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x17a530:
    ctx->pc = 0x17A538u;
}
