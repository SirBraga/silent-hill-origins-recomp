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

// Function: sub_0027A030
// Address: 0x27a030 - 0x27ab90
void sub_0027A030_0x27a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027A030_0x27a030");
#endif

    switch (ctx->pc) {
        case 0x27a030u: goto label_27a030;
        case 0x27a034u: goto label_27a034;
        case 0x27a038u: goto label_27a038;
        case 0x27a03cu: goto label_27a03c;
        case 0x27a040u: goto label_27a040;
        case 0x27a044u: goto label_27a044;
        case 0x27a048u: goto label_27a048;
        case 0x27a04cu: goto label_27a04c;
        case 0x27a050u: goto label_27a050;
        case 0x27a054u: goto label_27a054;
        case 0x27a058u: goto label_27a058;
        case 0x27a05cu: goto label_27a05c;
        case 0x27a060u: goto label_27a060;
        case 0x27a064u: goto label_27a064;
        case 0x27a068u: goto label_27a068;
        case 0x27a06cu: goto label_27a06c;
        case 0x27a070u: goto label_27a070;
        case 0x27a074u: goto label_27a074;
        case 0x27a078u: goto label_27a078;
        case 0x27a07cu: goto label_27a07c;
        case 0x27a080u: goto label_27a080;
        case 0x27a084u: goto label_27a084;
        case 0x27a088u: goto label_27a088;
        case 0x27a08cu: goto label_27a08c;
        case 0x27a090u: goto label_27a090;
        case 0x27a094u: goto label_27a094;
        case 0x27a098u: goto label_27a098;
        case 0x27a09cu: goto label_27a09c;
        case 0x27a0a0u: goto label_27a0a0;
        case 0x27a0a4u: goto label_27a0a4;
        case 0x27a0a8u: goto label_27a0a8;
        case 0x27a0acu: goto label_27a0ac;
        case 0x27a0b0u: goto label_27a0b0;
        case 0x27a0b4u: goto label_27a0b4;
        case 0x27a0b8u: goto label_27a0b8;
        case 0x27a0bcu: goto label_27a0bc;
        case 0x27a0c0u: goto label_27a0c0;
        case 0x27a0c4u: goto label_27a0c4;
        case 0x27a0c8u: goto label_27a0c8;
        case 0x27a0ccu: goto label_27a0cc;
        case 0x27a0d0u: goto label_27a0d0;
        case 0x27a0d4u: goto label_27a0d4;
        case 0x27a0d8u: goto label_27a0d8;
        case 0x27a0dcu: goto label_27a0dc;
        case 0x27a0e0u: goto label_27a0e0;
        case 0x27a0e4u: goto label_27a0e4;
        case 0x27a0e8u: goto label_27a0e8;
        case 0x27a0ecu: goto label_27a0ec;
        case 0x27a0f0u: goto label_27a0f0;
        case 0x27a0f4u: goto label_27a0f4;
        case 0x27a0f8u: goto label_27a0f8;
        case 0x27a0fcu: goto label_27a0fc;
        case 0x27a100u: goto label_27a100;
        case 0x27a104u: goto label_27a104;
        case 0x27a108u: goto label_27a108;
        case 0x27a10cu: goto label_27a10c;
        case 0x27a110u: goto label_27a110;
        case 0x27a114u: goto label_27a114;
        case 0x27a118u: goto label_27a118;
        case 0x27a11cu: goto label_27a11c;
        case 0x27a120u: goto label_27a120;
        case 0x27a124u: goto label_27a124;
        case 0x27a128u: goto label_27a128;
        case 0x27a12cu: goto label_27a12c;
        case 0x27a130u: goto label_27a130;
        case 0x27a134u: goto label_27a134;
        case 0x27a138u: goto label_27a138;
        case 0x27a13cu: goto label_27a13c;
        case 0x27a140u: goto label_27a140;
        case 0x27a144u: goto label_27a144;
        case 0x27a148u: goto label_27a148;
        case 0x27a14cu: goto label_27a14c;
        case 0x27a150u: goto label_27a150;
        case 0x27a154u: goto label_27a154;
        case 0x27a158u: goto label_27a158;
        case 0x27a15cu: goto label_27a15c;
        case 0x27a160u: goto label_27a160;
        case 0x27a164u: goto label_27a164;
        case 0x27a168u: goto label_27a168;
        case 0x27a16cu: goto label_27a16c;
        case 0x27a170u: goto label_27a170;
        case 0x27a174u: goto label_27a174;
        case 0x27a178u: goto label_27a178;
        case 0x27a17cu: goto label_27a17c;
        case 0x27a180u: goto label_27a180;
        case 0x27a184u: goto label_27a184;
        case 0x27a188u: goto label_27a188;
        case 0x27a18cu: goto label_27a18c;
        case 0x27a190u: goto label_27a190;
        case 0x27a194u: goto label_27a194;
        case 0x27a198u: goto label_27a198;
        case 0x27a19cu: goto label_27a19c;
        case 0x27a1a0u: goto label_27a1a0;
        case 0x27a1a4u: goto label_27a1a4;
        case 0x27a1a8u: goto label_27a1a8;
        case 0x27a1acu: goto label_27a1ac;
        case 0x27a1b0u: goto label_27a1b0;
        case 0x27a1b4u: goto label_27a1b4;
        case 0x27a1b8u: goto label_27a1b8;
        case 0x27a1bcu: goto label_27a1bc;
        case 0x27a1c0u: goto label_27a1c0;
        case 0x27a1c4u: goto label_27a1c4;
        case 0x27a1c8u: goto label_27a1c8;
        case 0x27a1ccu: goto label_27a1cc;
        case 0x27a1d0u: goto label_27a1d0;
        case 0x27a1d4u: goto label_27a1d4;
        case 0x27a1d8u: goto label_27a1d8;
        case 0x27a1dcu: goto label_27a1dc;
        case 0x27a1e0u: goto label_27a1e0;
        case 0x27a1e4u: goto label_27a1e4;
        case 0x27a1e8u: goto label_27a1e8;
        case 0x27a1ecu: goto label_27a1ec;
        case 0x27a1f0u: goto label_27a1f0;
        case 0x27a1f4u: goto label_27a1f4;
        case 0x27a1f8u: goto label_27a1f8;
        case 0x27a1fcu: goto label_27a1fc;
        case 0x27a200u: goto label_27a200;
        case 0x27a204u: goto label_27a204;
        case 0x27a208u: goto label_27a208;
        case 0x27a20cu: goto label_27a20c;
        case 0x27a210u: goto label_27a210;
        case 0x27a214u: goto label_27a214;
        case 0x27a218u: goto label_27a218;
        case 0x27a21cu: goto label_27a21c;
        case 0x27a220u: goto label_27a220;
        case 0x27a224u: goto label_27a224;
        case 0x27a228u: goto label_27a228;
        case 0x27a22cu: goto label_27a22c;
        case 0x27a230u: goto label_27a230;
        case 0x27a234u: goto label_27a234;
        case 0x27a238u: goto label_27a238;
        case 0x27a23cu: goto label_27a23c;
        case 0x27a240u: goto label_27a240;
        case 0x27a244u: goto label_27a244;
        case 0x27a248u: goto label_27a248;
        case 0x27a24cu: goto label_27a24c;
        case 0x27a250u: goto label_27a250;
        case 0x27a254u: goto label_27a254;
        case 0x27a258u: goto label_27a258;
        case 0x27a25cu: goto label_27a25c;
        case 0x27a260u: goto label_27a260;
        case 0x27a264u: goto label_27a264;
        case 0x27a268u: goto label_27a268;
        case 0x27a26cu: goto label_27a26c;
        case 0x27a270u: goto label_27a270;
        case 0x27a274u: goto label_27a274;
        case 0x27a278u: goto label_27a278;
        case 0x27a27cu: goto label_27a27c;
        case 0x27a280u: goto label_27a280;
        case 0x27a284u: goto label_27a284;
        case 0x27a288u: goto label_27a288;
        case 0x27a28cu: goto label_27a28c;
        case 0x27a290u: goto label_27a290;
        case 0x27a294u: goto label_27a294;
        case 0x27a298u: goto label_27a298;
        case 0x27a29cu: goto label_27a29c;
        case 0x27a2a0u: goto label_27a2a0;
        case 0x27a2a4u: goto label_27a2a4;
        case 0x27a2a8u: goto label_27a2a8;
        case 0x27a2acu: goto label_27a2ac;
        case 0x27a2b0u: goto label_27a2b0;
        case 0x27a2b4u: goto label_27a2b4;
        case 0x27a2b8u: goto label_27a2b8;
        case 0x27a2bcu: goto label_27a2bc;
        case 0x27a2c0u: goto label_27a2c0;
        case 0x27a2c4u: goto label_27a2c4;
        case 0x27a2c8u: goto label_27a2c8;
        case 0x27a2ccu: goto label_27a2cc;
        case 0x27a2d0u: goto label_27a2d0;
        case 0x27a2d4u: goto label_27a2d4;
        case 0x27a2d8u: goto label_27a2d8;
        case 0x27a2dcu: goto label_27a2dc;
        case 0x27a2e0u: goto label_27a2e0;
        case 0x27a2e4u: goto label_27a2e4;
        case 0x27a2e8u: goto label_27a2e8;
        case 0x27a2ecu: goto label_27a2ec;
        case 0x27a2f0u: goto label_27a2f0;
        case 0x27a2f4u: goto label_27a2f4;
        case 0x27a2f8u: goto label_27a2f8;
        case 0x27a2fcu: goto label_27a2fc;
        case 0x27a300u: goto label_27a300;
        case 0x27a304u: goto label_27a304;
        case 0x27a308u: goto label_27a308;
        case 0x27a30cu: goto label_27a30c;
        case 0x27a310u: goto label_27a310;
        case 0x27a314u: goto label_27a314;
        case 0x27a318u: goto label_27a318;
        case 0x27a31cu: goto label_27a31c;
        case 0x27a320u: goto label_27a320;
        case 0x27a324u: goto label_27a324;
        case 0x27a328u: goto label_27a328;
        case 0x27a32cu: goto label_27a32c;
        case 0x27a330u: goto label_27a330;
        case 0x27a334u: goto label_27a334;
        case 0x27a338u: goto label_27a338;
        case 0x27a33cu: goto label_27a33c;
        case 0x27a340u: goto label_27a340;
        case 0x27a344u: goto label_27a344;
        case 0x27a348u: goto label_27a348;
        case 0x27a34cu: goto label_27a34c;
        case 0x27a350u: goto label_27a350;
        case 0x27a354u: goto label_27a354;
        case 0x27a358u: goto label_27a358;
        case 0x27a35cu: goto label_27a35c;
        case 0x27a360u: goto label_27a360;
        case 0x27a364u: goto label_27a364;
        case 0x27a368u: goto label_27a368;
        case 0x27a36cu: goto label_27a36c;
        case 0x27a370u: goto label_27a370;
        case 0x27a374u: goto label_27a374;
        case 0x27a378u: goto label_27a378;
        case 0x27a37cu: goto label_27a37c;
        case 0x27a380u: goto label_27a380;
        case 0x27a384u: goto label_27a384;
        case 0x27a388u: goto label_27a388;
        case 0x27a38cu: goto label_27a38c;
        case 0x27a390u: goto label_27a390;
        case 0x27a394u: goto label_27a394;
        case 0x27a398u: goto label_27a398;
        case 0x27a39cu: goto label_27a39c;
        case 0x27a3a0u: goto label_27a3a0;
        case 0x27a3a4u: goto label_27a3a4;
        case 0x27a3a8u: goto label_27a3a8;
        case 0x27a3acu: goto label_27a3ac;
        case 0x27a3b0u: goto label_27a3b0;
        case 0x27a3b4u: goto label_27a3b4;
        case 0x27a3b8u: goto label_27a3b8;
        case 0x27a3bcu: goto label_27a3bc;
        case 0x27a3c0u: goto label_27a3c0;
        case 0x27a3c4u: goto label_27a3c4;
        case 0x27a3c8u: goto label_27a3c8;
        case 0x27a3ccu: goto label_27a3cc;
        case 0x27a3d0u: goto label_27a3d0;
        case 0x27a3d4u: goto label_27a3d4;
        case 0x27a3d8u: goto label_27a3d8;
        case 0x27a3dcu: goto label_27a3dc;
        case 0x27a3e0u: goto label_27a3e0;
        case 0x27a3e4u: goto label_27a3e4;
        case 0x27a3e8u: goto label_27a3e8;
        case 0x27a3ecu: goto label_27a3ec;
        case 0x27a3f0u: goto label_27a3f0;
        case 0x27a3f4u: goto label_27a3f4;
        case 0x27a3f8u: goto label_27a3f8;
        case 0x27a3fcu: goto label_27a3fc;
        case 0x27a400u: goto label_27a400;
        case 0x27a404u: goto label_27a404;
        case 0x27a408u: goto label_27a408;
        case 0x27a40cu: goto label_27a40c;
        case 0x27a410u: goto label_27a410;
        case 0x27a414u: goto label_27a414;
        case 0x27a418u: goto label_27a418;
        case 0x27a41cu: goto label_27a41c;
        case 0x27a420u: goto label_27a420;
        case 0x27a424u: goto label_27a424;
        case 0x27a428u: goto label_27a428;
        case 0x27a42cu: goto label_27a42c;
        case 0x27a430u: goto label_27a430;
        case 0x27a434u: goto label_27a434;
        case 0x27a438u: goto label_27a438;
        case 0x27a43cu: goto label_27a43c;
        case 0x27a440u: goto label_27a440;
        case 0x27a444u: goto label_27a444;
        case 0x27a448u: goto label_27a448;
        case 0x27a44cu: goto label_27a44c;
        case 0x27a450u: goto label_27a450;
        case 0x27a454u: goto label_27a454;
        case 0x27a458u: goto label_27a458;
        case 0x27a45cu: goto label_27a45c;
        case 0x27a460u: goto label_27a460;
        case 0x27a464u: goto label_27a464;
        case 0x27a468u: goto label_27a468;
        case 0x27a46cu: goto label_27a46c;
        case 0x27a470u: goto label_27a470;
        case 0x27a474u: goto label_27a474;
        case 0x27a478u: goto label_27a478;
        case 0x27a47cu: goto label_27a47c;
        case 0x27a480u: goto label_27a480;
        case 0x27a484u: goto label_27a484;
        case 0x27a488u: goto label_27a488;
        case 0x27a48cu: goto label_27a48c;
        case 0x27a490u: goto label_27a490;
        case 0x27a494u: goto label_27a494;
        case 0x27a498u: goto label_27a498;
        case 0x27a49cu: goto label_27a49c;
        case 0x27a4a0u: goto label_27a4a0;
        case 0x27a4a4u: goto label_27a4a4;
        case 0x27a4a8u: goto label_27a4a8;
        case 0x27a4acu: goto label_27a4ac;
        case 0x27a4b0u: goto label_27a4b0;
        case 0x27a4b4u: goto label_27a4b4;
        case 0x27a4b8u: goto label_27a4b8;
        case 0x27a4bcu: goto label_27a4bc;
        case 0x27a4c0u: goto label_27a4c0;
        case 0x27a4c4u: goto label_27a4c4;
        case 0x27a4c8u: goto label_27a4c8;
        case 0x27a4ccu: goto label_27a4cc;
        case 0x27a4d0u: goto label_27a4d0;
        case 0x27a4d4u: goto label_27a4d4;
        case 0x27a4d8u: goto label_27a4d8;
        case 0x27a4dcu: goto label_27a4dc;
        case 0x27a4e0u: goto label_27a4e0;
        case 0x27a4e4u: goto label_27a4e4;
        case 0x27a4e8u: goto label_27a4e8;
        case 0x27a4ecu: goto label_27a4ec;
        case 0x27a4f0u: goto label_27a4f0;
        case 0x27a4f4u: goto label_27a4f4;
        case 0x27a4f8u: goto label_27a4f8;
        case 0x27a4fcu: goto label_27a4fc;
        case 0x27a500u: goto label_27a500;
        case 0x27a504u: goto label_27a504;
        case 0x27a508u: goto label_27a508;
        case 0x27a50cu: goto label_27a50c;
        case 0x27a510u: goto label_27a510;
        case 0x27a514u: goto label_27a514;
        case 0x27a518u: goto label_27a518;
        case 0x27a51cu: goto label_27a51c;
        case 0x27a520u: goto label_27a520;
        case 0x27a524u: goto label_27a524;
        case 0x27a528u: goto label_27a528;
        case 0x27a52cu: goto label_27a52c;
        case 0x27a530u: goto label_27a530;
        case 0x27a534u: goto label_27a534;
        case 0x27a538u: goto label_27a538;
        case 0x27a53cu: goto label_27a53c;
        case 0x27a540u: goto label_27a540;
        case 0x27a544u: goto label_27a544;
        case 0x27a548u: goto label_27a548;
        case 0x27a54cu: goto label_27a54c;
        case 0x27a550u: goto label_27a550;
        case 0x27a554u: goto label_27a554;
        case 0x27a558u: goto label_27a558;
        case 0x27a55cu: goto label_27a55c;
        case 0x27a560u: goto label_27a560;
        case 0x27a564u: goto label_27a564;
        case 0x27a568u: goto label_27a568;
        case 0x27a56cu: goto label_27a56c;
        case 0x27a570u: goto label_27a570;
        case 0x27a574u: goto label_27a574;
        case 0x27a578u: goto label_27a578;
        case 0x27a57cu: goto label_27a57c;
        case 0x27a580u: goto label_27a580;
        case 0x27a584u: goto label_27a584;
        case 0x27a588u: goto label_27a588;
        case 0x27a58cu: goto label_27a58c;
        case 0x27a590u: goto label_27a590;
        case 0x27a594u: goto label_27a594;
        case 0x27a598u: goto label_27a598;
        case 0x27a59cu: goto label_27a59c;
        case 0x27a5a0u: goto label_27a5a0;
        case 0x27a5a4u: goto label_27a5a4;
        case 0x27a5a8u: goto label_27a5a8;
        case 0x27a5acu: goto label_27a5ac;
        case 0x27a5b0u: goto label_27a5b0;
        case 0x27a5b4u: goto label_27a5b4;
        case 0x27a5b8u: goto label_27a5b8;
        case 0x27a5bcu: goto label_27a5bc;
        case 0x27a5c0u: goto label_27a5c0;
        case 0x27a5c4u: goto label_27a5c4;
        case 0x27a5c8u: goto label_27a5c8;
        case 0x27a5ccu: goto label_27a5cc;
        case 0x27a5d0u: goto label_27a5d0;
        case 0x27a5d4u: goto label_27a5d4;
        case 0x27a5d8u: goto label_27a5d8;
        case 0x27a5dcu: goto label_27a5dc;
        case 0x27a5e0u: goto label_27a5e0;
        case 0x27a5e4u: goto label_27a5e4;
        case 0x27a5e8u: goto label_27a5e8;
        case 0x27a5ecu: goto label_27a5ec;
        case 0x27a5f0u: goto label_27a5f0;
        case 0x27a5f4u: goto label_27a5f4;
        case 0x27a5f8u: goto label_27a5f8;
        case 0x27a5fcu: goto label_27a5fc;
        case 0x27a600u: goto label_27a600;
        case 0x27a604u: goto label_27a604;
        case 0x27a608u: goto label_27a608;
        case 0x27a60cu: goto label_27a60c;
        case 0x27a610u: goto label_27a610;
        case 0x27a614u: goto label_27a614;
        case 0x27a618u: goto label_27a618;
        case 0x27a61cu: goto label_27a61c;
        case 0x27a620u: goto label_27a620;
        case 0x27a624u: goto label_27a624;
        case 0x27a628u: goto label_27a628;
        case 0x27a62cu: goto label_27a62c;
        case 0x27a630u: goto label_27a630;
        case 0x27a634u: goto label_27a634;
        case 0x27a638u: goto label_27a638;
        case 0x27a63cu: goto label_27a63c;
        case 0x27a640u: goto label_27a640;
        case 0x27a644u: goto label_27a644;
        case 0x27a648u: goto label_27a648;
        case 0x27a64cu: goto label_27a64c;
        case 0x27a650u: goto label_27a650;
        case 0x27a654u: goto label_27a654;
        case 0x27a658u: goto label_27a658;
        case 0x27a65cu: goto label_27a65c;
        case 0x27a660u: goto label_27a660;
        case 0x27a664u: goto label_27a664;
        case 0x27a668u: goto label_27a668;
        case 0x27a66cu: goto label_27a66c;
        case 0x27a670u: goto label_27a670;
        case 0x27a674u: goto label_27a674;
        case 0x27a678u: goto label_27a678;
        case 0x27a67cu: goto label_27a67c;
        case 0x27a680u: goto label_27a680;
        case 0x27a684u: goto label_27a684;
        case 0x27a688u: goto label_27a688;
        case 0x27a68cu: goto label_27a68c;
        case 0x27a690u: goto label_27a690;
        case 0x27a694u: goto label_27a694;
        case 0x27a698u: goto label_27a698;
        case 0x27a69cu: goto label_27a69c;
        case 0x27a6a0u: goto label_27a6a0;
        case 0x27a6a4u: goto label_27a6a4;
        case 0x27a6a8u: goto label_27a6a8;
        case 0x27a6acu: goto label_27a6ac;
        case 0x27a6b0u: goto label_27a6b0;
        case 0x27a6b4u: goto label_27a6b4;
        case 0x27a6b8u: goto label_27a6b8;
        case 0x27a6bcu: goto label_27a6bc;
        case 0x27a6c0u: goto label_27a6c0;
        case 0x27a6c4u: goto label_27a6c4;
        case 0x27a6c8u: goto label_27a6c8;
        case 0x27a6ccu: goto label_27a6cc;
        case 0x27a6d0u: goto label_27a6d0;
        case 0x27a6d4u: goto label_27a6d4;
        case 0x27a6d8u: goto label_27a6d8;
        case 0x27a6dcu: goto label_27a6dc;
        case 0x27a6e0u: goto label_27a6e0;
        case 0x27a6e4u: goto label_27a6e4;
        case 0x27a6e8u: goto label_27a6e8;
        case 0x27a6ecu: goto label_27a6ec;
        case 0x27a6f0u: goto label_27a6f0;
        case 0x27a6f4u: goto label_27a6f4;
        case 0x27a6f8u: goto label_27a6f8;
        case 0x27a6fcu: goto label_27a6fc;
        case 0x27a700u: goto label_27a700;
        case 0x27a704u: goto label_27a704;
        case 0x27a708u: goto label_27a708;
        case 0x27a70cu: goto label_27a70c;
        case 0x27a710u: goto label_27a710;
        case 0x27a714u: goto label_27a714;
        case 0x27a718u: goto label_27a718;
        case 0x27a71cu: goto label_27a71c;
        case 0x27a720u: goto label_27a720;
        case 0x27a724u: goto label_27a724;
        case 0x27a728u: goto label_27a728;
        case 0x27a72cu: goto label_27a72c;
        case 0x27a730u: goto label_27a730;
        case 0x27a734u: goto label_27a734;
        case 0x27a738u: goto label_27a738;
        case 0x27a73cu: goto label_27a73c;
        case 0x27a740u: goto label_27a740;
        case 0x27a744u: goto label_27a744;
        case 0x27a748u: goto label_27a748;
        case 0x27a74cu: goto label_27a74c;
        case 0x27a750u: goto label_27a750;
        case 0x27a754u: goto label_27a754;
        case 0x27a758u: goto label_27a758;
        case 0x27a75cu: goto label_27a75c;
        case 0x27a760u: goto label_27a760;
        case 0x27a764u: goto label_27a764;
        case 0x27a768u: goto label_27a768;
        case 0x27a76cu: goto label_27a76c;
        case 0x27a770u: goto label_27a770;
        case 0x27a774u: goto label_27a774;
        case 0x27a778u: goto label_27a778;
        case 0x27a77cu: goto label_27a77c;
        case 0x27a780u: goto label_27a780;
        case 0x27a784u: goto label_27a784;
        case 0x27a788u: goto label_27a788;
        case 0x27a78cu: goto label_27a78c;
        case 0x27a790u: goto label_27a790;
        case 0x27a794u: goto label_27a794;
        case 0x27a798u: goto label_27a798;
        case 0x27a79cu: goto label_27a79c;
        case 0x27a7a0u: goto label_27a7a0;
        case 0x27a7a4u: goto label_27a7a4;
        case 0x27a7a8u: goto label_27a7a8;
        case 0x27a7acu: goto label_27a7ac;
        case 0x27a7b0u: goto label_27a7b0;
        case 0x27a7b4u: goto label_27a7b4;
        case 0x27a7b8u: goto label_27a7b8;
        case 0x27a7bcu: goto label_27a7bc;
        case 0x27a7c0u: goto label_27a7c0;
        case 0x27a7c4u: goto label_27a7c4;
        case 0x27a7c8u: goto label_27a7c8;
        case 0x27a7ccu: goto label_27a7cc;
        case 0x27a7d0u: goto label_27a7d0;
        case 0x27a7d4u: goto label_27a7d4;
        case 0x27a7d8u: goto label_27a7d8;
        case 0x27a7dcu: goto label_27a7dc;
        case 0x27a7e0u: goto label_27a7e0;
        case 0x27a7e4u: goto label_27a7e4;
        case 0x27a7e8u: goto label_27a7e8;
        case 0x27a7ecu: goto label_27a7ec;
        case 0x27a7f0u: goto label_27a7f0;
        case 0x27a7f4u: goto label_27a7f4;
        case 0x27a7f8u: goto label_27a7f8;
        case 0x27a7fcu: goto label_27a7fc;
        case 0x27a800u: goto label_27a800;
        case 0x27a804u: goto label_27a804;
        case 0x27a808u: goto label_27a808;
        case 0x27a80cu: goto label_27a80c;
        case 0x27a810u: goto label_27a810;
        case 0x27a814u: goto label_27a814;
        case 0x27a818u: goto label_27a818;
        case 0x27a81cu: goto label_27a81c;
        case 0x27a820u: goto label_27a820;
        case 0x27a824u: goto label_27a824;
        case 0x27a828u: goto label_27a828;
        case 0x27a82cu: goto label_27a82c;
        case 0x27a830u: goto label_27a830;
        case 0x27a834u: goto label_27a834;
        case 0x27a838u: goto label_27a838;
        case 0x27a83cu: goto label_27a83c;
        case 0x27a840u: goto label_27a840;
        case 0x27a844u: goto label_27a844;
        case 0x27a848u: goto label_27a848;
        case 0x27a84cu: goto label_27a84c;
        case 0x27a850u: goto label_27a850;
        case 0x27a854u: goto label_27a854;
        case 0x27a858u: goto label_27a858;
        case 0x27a85cu: goto label_27a85c;
        case 0x27a860u: goto label_27a860;
        case 0x27a864u: goto label_27a864;
        case 0x27a868u: goto label_27a868;
        case 0x27a86cu: goto label_27a86c;
        case 0x27a870u: goto label_27a870;
        case 0x27a874u: goto label_27a874;
        case 0x27a878u: goto label_27a878;
        case 0x27a87cu: goto label_27a87c;
        case 0x27a880u: goto label_27a880;
        case 0x27a884u: goto label_27a884;
        case 0x27a888u: goto label_27a888;
        case 0x27a88cu: goto label_27a88c;
        case 0x27a890u: goto label_27a890;
        case 0x27a894u: goto label_27a894;
        case 0x27a898u: goto label_27a898;
        case 0x27a89cu: goto label_27a89c;
        case 0x27a8a0u: goto label_27a8a0;
        case 0x27a8a4u: goto label_27a8a4;
        case 0x27a8a8u: goto label_27a8a8;
        case 0x27a8acu: goto label_27a8ac;
        case 0x27a8b0u: goto label_27a8b0;
        case 0x27a8b4u: goto label_27a8b4;
        case 0x27a8b8u: goto label_27a8b8;
        case 0x27a8bcu: goto label_27a8bc;
        case 0x27a8c0u: goto label_27a8c0;
        case 0x27a8c4u: goto label_27a8c4;
        case 0x27a8c8u: goto label_27a8c8;
        case 0x27a8ccu: goto label_27a8cc;
        case 0x27a8d0u: goto label_27a8d0;
        case 0x27a8d4u: goto label_27a8d4;
        case 0x27a8d8u: goto label_27a8d8;
        case 0x27a8dcu: goto label_27a8dc;
        case 0x27a8e0u: goto label_27a8e0;
        case 0x27a8e4u: goto label_27a8e4;
        case 0x27a8e8u: goto label_27a8e8;
        case 0x27a8ecu: goto label_27a8ec;
        case 0x27a8f0u: goto label_27a8f0;
        case 0x27a8f4u: goto label_27a8f4;
        case 0x27a8f8u: goto label_27a8f8;
        case 0x27a8fcu: goto label_27a8fc;
        case 0x27a900u: goto label_27a900;
        case 0x27a904u: goto label_27a904;
        case 0x27a908u: goto label_27a908;
        case 0x27a90cu: goto label_27a90c;
        case 0x27a910u: goto label_27a910;
        case 0x27a914u: goto label_27a914;
        case 0x27a918u: goto label_27a918;
        case 0x27a91cu: goto label_27a91c;
        case 0x27a920u: goto label_27a920;
        case 0x27a924u: goto label_27a924;
        case 0x27a928u: goto label_27a928;
        case 0x27a92cu: goto label_27a92c;
        case 0x27a930u: goto label_27a930;
        case 0x27a934u: goto label_27a934;
        case 0x27a938u: goto label_27a938;
        case 0x27a93cu: goto label_27a93c;
        case 0x27a940u: goto label_27a940;
        case 0x27a944u: goto label_27a944;
        case 0x27a948u: goto label_27a948;
        case 0x27a94cu: goto label_27a94c;
        case 0x27a950u: goto label_27a950;
        case 0x27a954u: goto label_27a954;
        case 0x27a958u: goto label_27a958;
        case 0x27a95cu: goto label_27a95c;
        case 0x27a960u: goto label_27a960;
        case 0x27a964u: goto label_27a964;
        case 0x27a968u: goto label_27a968;
        case 0x27a96cu: goto label_27a96c;
        case 0x27a970u: goto label_27a970;
        case 0x27a974u: goto label_27a974;
        case 0x27a978u: goto label_27a978;
        case 0x27a97cu: goto label_27a97c;
        case 0x27a980u: goto label_27a980;
        case 0x27a984u: goto label_27a984;
        case 0x27a988u: goto label_27a988;
        case 0x27a98cu: goto label_27a98c;
        case 0x27a990u: goto label_27a990;
        case 0x27a994u: goto label_27a994;
        case 0x27a998u: goto label_27a998;
        case 0x27a99cu: goto label_27a99c;
        case 0x27a9a0u: goto label_27a9a0;
        case 0x27a9a4u: goto label_27a9a4;
        case 0x27a9a8u: goto label_27a9a8;
        case 0x27a9acu: goto label_27a9ac;
        case 0x27a9b0u: goto label_27a9b0;
        case 0x27a9b4u: goto label_27a9b4;
        case 0x27a9b8u: goto label_27a9b8;
        case 0x27a9bcu: goto label_27a9bc;
        case 0x27a9c0u: goto label_27a9c0;
        case 0x27a9c4u: goto label_27a9c4;
        case 0x27a9c8u: goto label_27a9c8;
        case 0x27a9ccu: goto label_27a9cc;
        case 0x27a9d0u: goto label_27a9d0;
        case 0x27a9d4u: goto label_27a9d4;
        case 0x27a9d8u: goto label_27a9d8;
        case 0x27a9dcu: goto label_27a9dc;
        case 0x27a9e0u: goto label_27a9e0;
        case 0x27a9e4u: goto label_27a9e4;
        case 0x27a9e8u: goto label_27a9e8;
        case 0x27a9ecu: goto label_27a9ec;
        case 0x27a9f0u: goto label_27a9f0;
        case 0x27a9f4u: goto label_27a9f4;
        case 0x27a9f8u: goto label_27a9f8;
        case 0x27a9fcu: goto label_27a9fc;
        case 0x27aa00u: goto label_27aa00;
        case 0x27aa04u: goto label_27aa04;
        case 0x27aa08u: goto label_27aa08;
        case 0x27aa0cu: goto label_27aa0c;
        case 0x27aa10u: goto label_27aa10;
        case 0x27aa14u: goto label_27aa14;
        case 0x27aa18u: goto label_27aa18;
        case 0x27aa1cu: goto label_27aa1c;
        case 0x27aa20u: goto label_27aa20;
        case 0x27aa24u: goto label_27aa24;
        case 0x27aa28u: goto label_27aa28;
        case 0x27aa2cu: goto label_27aa2c;
        case 0x27aa30u: goto label_27aa30;
        case 0x27aa34u: goto label_27aa34;
        case 0x27aa38u: goto label_27aa38;
        case 0x27aa3cu: goto label_27aa3c;
        case 0x27aa40u: goto label_27aa40;
        case 0x27aa44u: goto label_27aa44;
        case 0x27aa48u: goto label_27aa48;
        case 0x27aa4cu: goto label_27aa4c;
        case 0x27aa50u: goto label_27aa50;
        case 0x27aa54u: goto label_27aa54;
        case 0x27aa58u: goto label_27aa58;
        case 0x27aa5cu: goto label_27aa5c;
        case 0x27aa60u: goto label_27aa60;
        case 0x27aa64u: goto label_27aa64;
        case 0x27aa68u: goto label_27aa68;
        case 0x27aa6cu: goto label_27aa6c;
        case 0x27aa70u: goto label_27aa70;
        case 0x27aa74u: goto label_27aa74;
        case 0x27aa78u: goto label_27aa78;
        case 0x27aa7cu: goto label_27aa7c;
        case 0x27aa80u: goto label_27aa80;
        case 0x27aa84u: goto label_27aa84;
        case 0x27aa88u: goto label_27aa88;
        case 0x27aa8cu: goto label_27aa8c;
        case 0x27aa90u: goto label_27aa90;
        case 0x27aa94u: goto label_27aa94;
        case 0x27aa98u: goto label_27aa98;
        case 0x27aa9cu: goto label_27aa9c;
        case 0x27aaa0u: goto label_27aaa0;
        case 0x27aaa4u: goto label_27aaa4;
        case 0x27aaa8u: goto label_27aaa8;
        case 0x27aaacu: goto label_27aaac;
        case 0x27aab0u: goto label_27aab0;
        case 0x27aab4u: goto label_27aab4;
        case 0x27aab8u: goto label_27aab8;
        case 0x27aabcu: goto label_27aabc;
        case 0x27aac0u: goto label_27aac0;
        case 0x27aac4u: goto label_27aac4;
        case 0x27aac8u: goto label_27aac8;
        case 0x27aaccu: goto label_27aacc;
        case 0x27aad0u: goto label_27aad0;
        case 0x27aad4u: goto label_27aad4;
        case 0x27aad8u: goto label_27aad8;
        case 0x27aadcu: goto label_27aadc;
        case 0x27aae0u: goto label_27aae0;
        case 0x27aae4u: goto label_27aae4;
        case 0x27aae8u: goto label_27aae8;
        case 0x27aaecu: goto label_27aaec;
        case 0x27aaf0u: goto label_27aaf0;
        case 0x27aaf4u: goto label_27aaf4;
        case 0x27aaf8u: goto label_27aaf8;
        case 0x27aafcu: goto label_27aafc;
        case 0x27ab00u: goto label_27ab00;
        case 0x27ab04u: goto label_27ab04;
        case 0x27ab08u: goto label_27ab08;
        case 0x27ab0cu: goto label_27ab0c;
        case 0x27ab10u: goto label_27ab10;
        case 0x27ab14u: goto label_27ab14;
        case 0x27ab18u: goto label_27ab18;
        case 0x27ab1cu: goto label_27ab1c;
        case 0x27ab20u: goto label_27ab20;
        case 0x27ab24u: goto label_27ab24;
        case 0x27ab28u: goto label_27ab28;
        case 0x27ab2cu: goto label_27ab2c;
        case 0x27ab30u: goto label_27ab30;
        case 0x27ab34u: goto label_27ab34;
        case 0x27ab38u: goto label_27ab38;
        case 0x27ab3cu: goto label_27ab3c;
        case 0x27ab40u: goto label_27ab40;
        case 0x27ab44u: goto label_27ab44;
        case 0x27ab48u: goto label_27ab48;
        case 0x27ab4cu: goto label_27ab4c;
        case 0x27ab50u: goto label_27ab50;
        case 0x27ab54u: goto label_27ab54;
        case 0x27ab58u: goto label_27ab58;
        case 0x27ab5cu: goto label_27ab5c;
        case 0x27ab60u: goto label_27ab60;
        case 0x27ab64u: goto label_27ab64;
        case 0x27ab68u: goto label_27ab68;
        case 0x27ab6cu: goto label_27ab6c;
        case 0x27ab70u: goto label_27ab70;
        case 0x27ab74u: goto label_27ab74;
        case 0x27ab78u: goto label_27ab78;
        case 0x27ab7cu: goto label_27ab7c;
        case 0x27ab80u: goto label_27ab80;
        case 0x27ab84u: goto label_27ab84;
        case 0x27ab88u: goto label_27ab88;
        case 0x27ab8cu: goto label_27ab8c;
        default: break;
    }

    ctx->pc = 0x27a030u;

label_27a030:
    // 0x27a030: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x27a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_27a034:
    // 0x27a034: 0x8f8287d4  lw          $v0, -0x782C($gp)
    ctx->pc = 0x27a034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936532)));
label_27a038:
    // 0x27a038: 0x7fb00350  sq          $s0, 0x350($sp)
    ctx->pc = 0x27a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 848), GPR_VEC(ctx, 16));
label_27a03c:
    // 0x27a03c: 0x7fb602f0  sq          $s6, 0x2F0($sp)
    ctx->pc = 0x27a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 22));
label_27a040:
    // 0x27a040: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x27a040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_27a044:
    // 0x27a044: 0x7fb702e0  sq          $s7, 0x2E0($sp)
    ctx->pc = 0x27a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 23));
label_27a048:
    // 0x27a048: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x27a048u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27a04c:
    // 0x27a04c: 0x7fbe02d0  sq          $fp, 0x2D0($sp)
    ctx->pc = 0x27a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 30));
label_27a050:
    // 0x27a050: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x27a050u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27a054:
    // 0x27a054: 0x7fb10340  sq          $s1, 0x340($sp)
    ctx->pc = 0x27a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 17));
label_27a058:
    // 0x27a058: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x27a058u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27a05c:
    // 0x27a05c: 0x7fb30320  sq          $s3, 0x320($sp)
    ctx->pc = 0x27a05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 19));
label_27a060:
    // 0x27a060: 0x7fb40310  sq          $s4, 0x310($sp)
    ctx->pc = 0x27a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 20));
label_27a064:
    // 0x27a064: 0x7fb50300  sq          $s5, 0x300($sp)
    ctx->pc = 0x27a064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 21));
label_27a068:
    // 0x27a068: 0xffbf02c0  sd          $ra, 0x2C0($sp)
    ctx->pc = 0x27a068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 704), GPR_U64(ctx, 31));
label_27a06c:
    // 0x27a06c: 0xe7b70378  swc1        $f23, 0x378($sp)
    ctx->pc = 0x27a06cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 888), bits); }
label_27a070:
    // 0x27a070: 0xe7b60370  swc1        $f22, 0x370($sp)
    ctx->pc = 0x27a070u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 880), bits); }
label_27a074:
    // 0x27a074: 0xe7b50368  swc1        $f21, 0x368($sp)
    ctx->pc = 0x27a074u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
label_27a078:
    // 0x27a078: 0xe7b40360  swc1        $f20, 0x360($sp)
    ctx->pc = 0x27a078u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
label_27a07c:
    // 0x27a07c: 0x7fb20330  sq          $s2, 0x330($sp)
    ctx->pc = 0x27a07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 18));
label_27a080:
    // 0x27a080: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x27a080u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27a084:
    // 0x27a084: 0x124002ac  beqz        $s2, . + 4 + (0x2AC << 2)
label_27a088:
    if (ctx->pc == 0x27A088u) {
        ctx->pc = 0x27A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A084u;
        // 0x27a088: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A08Cu;
        goto label_27a08c;
    }
    ctx->pc = 0x27A084u;
    {
        const bool branch_taken_0x27a084 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A084u;
        // 0x27a088: 0x100f02d  daddu       $fp, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a084) {
            ctx->pc = 0x27AB38u;
            goto label_27ab38;
        }
    }
    ctx->pc = 0x27A08Cu;
label_27a08c:
    // 0x27a08c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x27a08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a090:
    // 0x27a090: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a094:
    // 0x27a094: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x27a094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a098:
    // 0x27a098: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x27a098u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_27a09c:
    // 0x27a09c: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x27a09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a0a0:
    // 0x27a0a0: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27a0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a0a4:
    // 0x27a0a4: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x27a0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a0a8:
    // 0x27a0a8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x27a0a8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_27a0ac:
    // 0x27a0ac: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x27a0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_27a0b0:
    // 0x27a0b0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x27a0b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_27a0b4:
    // 0x27a0b4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x27a0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_27a0b8:
    // 0x27a0b8: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x27a0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_27a0bc:
    // 0x27a0bc: 0x8c82005c  lw          $v0, 0x5C($a0)
    ctx->pc = 0x27a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_27a0c0:
    // 0x27a0c0: 0x8c84002c  lw          $a0, 0x2C($a0)
    ctx->pc = 0x27a0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_27a0c4:
    // 0x27a0c4: 0x8c550014  lw          $s5, 0x14($v0)
    ctx->pc = 0x27a0c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_27a0c8:
    // 0x27a0c8: 0xafa402b0  sw          $a0, 0x2B0($sp)
    ctx->pc = 0x27a0c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 4));
label_27a0cc:
    // 0x27a0cc: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x27a0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
label_27a0d0:
    // 0x27a0d0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x27a0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27a0d4:
    // 0x27a0d4: 0xa3a20045  sb          $v0, 0x45($sp)
    ctx->pc = 0x27a0d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 2));
label_27a0d8:
    // 0x27a0d8: 0xa7a00046  sh          $zero, 0x46($sp)
    ctx->pc = 0x27a0d8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 70), (uint16_t)GPR_U32(ctx, 0));
label_27a0dc:
    // 0x27a0dc: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x27a0dcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_27a0e0:
    // 0x27a0e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27a0e4:
    if (ctx->pc == 0x27A0E4u) {
        ctx->pc = 0x27A0E8u;
        goto label_27a0e8;
    }
    ctx->pc = 0x27A0E0u;
    {
        const bool branch_taken_0x27a0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27a0e0) {
            ctx->pc = 0x27A0F0u;
            goto label_27a0f0;
        }
    }
    ctx->pc = 0x27A0E8u;
label_27a0e8:
    // 0x27a0e8: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x27a0e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_27a0ec:
    // 0x27a0ec: 0xa3a20045  sb          $v0, 0x45($sp)
    ctx->pc = 0x27a0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 69), (uint8_t)GPR_U32(ctx, 2));
label_27a0f0:
    // 0x27a0f0: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x27a0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_27a0f4:
    // 0x27a0f4: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x27a0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27a0f8:
    // 0x27a0f8: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x27a0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_27a0fc:
    // 0x27a0fc: 0xb3a2001b  sdl         $v0, 0x1B($sp)
    ctx->pc = 0x27a0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27a100:
    // 0x27a100: 0xb7a20014  sdr         $v0, 0x14($sp)
    ctx->pc = 0x27a100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27a104:
    // 0x27a104: 0xafa3001c  sw          $v1, 0x1C($sp)
    ctx->pc = 0x27a104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 3));
label_27a108:
    // 0x27a108: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x27a108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a10c:
    // 0x27a10c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x27a10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a110:
    // 0x27a110: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x27a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a114:
    // 0x27a114: 0x46000901  sub.s       $f4, $f1, $f0
    ctx->pc = 0x27a114u;
    ctx->f[4] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a118:
    // 0x27a118: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x27a118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a11c:
    // 0x27a11c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x27a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a120:
    // 0x27a120: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27a120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a124:
    // 0x27a124: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x27a124u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27a128:
    // 0x27a128: 0xe7a40020  swc1        $f4, 0x20($sp)
    ctx->pc = 0x27a128u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_27a12c:
    // 0x27a12c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x27a12cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_27a130:
    // 0x27a130: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x27a130u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_27a134:
    // 0x27a134: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x27a134u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_27a138:
    // 0x27a138: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a138u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a13c:
    // 0x27a13c: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x27a13cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a140:
    // 0x27a140: 0x0  nop
    ctx->pc = 0x27a140u;
    // NOP
label_27a144:
    // 0x27a144: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_27a148:
    if (ctx->pc == 0x27A148u) {
        ctx->pc = 0x27A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A144u;
        // 0x27a148: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A14Cu;
        goto label_27a14c;
    }
    ctx->pc = 0x27A144u;
    {
        const bool branch_taken_0x27a144 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A144u;
        // 0x27a148: 0xc7a10024  lwc1        $f1, 0x24($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a144) {
            ctx->pc = 0x27A158u;
            goto label_27a158;
        }
    }
    ctx->pc = 0x27A14Cu;
label_27a14c:
    // 0x27a14c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a14cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a150:
    // 0x27a150: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a150u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a154:
    // 0x27a154: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x27a154u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_27a158:
    // 0x27a158: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27a158u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27a15c:
    // 0x27a15c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x27a15cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a160:
    // 0x27a160: 0x0  nop
    ctx->pc = 0x27a160u;
    // NOP
label_27a164:
    // 0x27a164: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27a168:
    if (ctx->pc == 0x27A168u) {
        ctx->pc = 0x27A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A164u;
        // 0x27a168: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A16Cu;
        goto label_27a16c;
    }
    ctx->pc = 0x27A164u;
    {
        const bool branch_taken_0x27a164 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A164u;
        // 0x27a168: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a164) {
            ctx->pc = 0x27A180u;
            goto label_27a180;
        }
    }
    ctx->pc = 0x27A16Cu;
label_27a16c:
    // 0x27a16c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a16cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a170:
    // 0x27a170: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a170u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a174:
    // 0x27a174: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x27a174u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27a178:
    // 0x27a178: 0x10000004  b           . + 4 + (0x4 << 2)
label_27a17c:
    if (ctx->pc == 0x27A17Cu) {
        ctx->pc = 0x27A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A178u;
        // 0x27a17c: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A180u;
        goto label_27a180;
    }
    ctx->pc = 0x27A178u;
    {
        const bool branch_taken_0x27a178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A178u;
        // 0x27a17c: 0xc7a10028  lwc1        $f1, 0x28($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a178) {
            ctx->pc = 0x27A18Cu;
            goto label_27a18c;
        }
    }
    ctx->pc = 0x27A180u;
label_27a180:
    // 0x27a180: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x27a180u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_27a184:
    // 0x27a184: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x27a184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a188:
    // 0x27a188: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27a188u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27a18c:
    // 0x27a18c: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x27a18cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a190:
    // 0x27a190: 0x0  nop
    ctx->pc = 0x27a190u;
    // NOP
label_27a194:
    // 0x27a194: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_27a198:
    if (ctx->pc == 0x27A198u) {
        ctx->pc = 0x27A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A194u;
        // 0x27a198: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A19Cu;
        goto label_27a19c;
    }
    ctx->pc = 0x27A194u;
    {
        const bool branch_taken_0x27a194 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A194u;
        // 0x27a198: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a194) {
            ctx->pc = 0x27A1B0u;
            goto label_27a1b0;
        }
    }
    ctx->pc = 0x27A19Cu;
label_27a19c:
    // 0x27a19c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a19cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a1a0:
    // 0x27a1a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27a1a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a1a4:
    // 0x27a1a4: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x27a1a4u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_27a1a8:
    // 0x27a1a8: 0x10000003  b           . + 4 + (0x3 << 2)
label_27a1ac:
    if (ctx->pc == 0x27A1ACu) {
        ctx->pc = 0x27A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1A8u;
        // 0x27a1ac: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A1B0u;
        goto label_27a1b0;
    }
    ctx->pc = 0x27A1A8u;
    {
        const bool branch_taken_0x27a1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A1A8u;
        // 0x27a1ac: 0xc600000c  lwc1        $f0, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a1a8) {
            ctx->pc = 0x27A1B8u;
            goto label_27a1b8;
        }
    }
    ctx->pc = 0x27A1B0u;
label_27a1b0:
    // 0x27a1b0: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x27a1b0u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_27a1b4:
    // 0x27a1b4: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x27a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a1b8:
    // 0x27a1b8: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x27a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a1bc:
    // 0x27a1bc: 0xc6050010  lwc1        $f5, 0x10($s0)
    ctx->pc = 0x27a1bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27a1c0:
    // 0x27a1c0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x27a1c0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_27a1c4:
    // 0x27a1c4: 0xc6040004  lwc1        $f4, 0x4($s0)
    ctx->pc = 0x27a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a1c8:
    // 0x27a1c8: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x27a1c8u;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_27a1cc:
    // 0x27a1cc: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x27a1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a1d0:
    // 0x27a1d0: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x27a1d0u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_27a1d4:
    // 0x27a1d4: 0xc6020008  lwc1        $f2, 0x8($s0)
    ctx->pc = 0x27a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a1d8:
    // 0x27a1d8: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x27a1d8u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_27a1dc:
    // 0x27a1dc: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x27a1dcu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_27a1e0:
    // 0x27a1e0: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x27a1e0u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_27a1e4:
    // 0x27a1e4: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x27a1e4u;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_27a1e8:
    // 0x27a1e8: 0xe7a60034  swc1        $f6, 0x34($sp)
    ctx->pc = 0x27a1e8u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_27a1ec:
    // 0x27a1ec: 0x46052128  max.s       $f4, $f4, $f5
    ctx->pc = 0x27a1ecu;
    ctx->f[4] = std::max(ctx->f[4], ctx->f[5]);
label_27a1f0:
    // 0x27a1f0: 0x460110a8  max.s       $f2, $f2, $f1
    ctx->pc = 0x27a1f0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[1]);
label_27a1f4:
    // 0x27a1f4: 0xc7808030  lwc1        $f0, -0x7FD0($gp)
    ctx->pc = 0x27a1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a1f8:
    // 0x27a1f8: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27a1f8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27a1fc:
    // 0x27a1fc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x27a1fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_27a200:
    // 0x27a200: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x27a200u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27a204:
    // 0x27a204: 0xe7a20040  swc1        $f2, 0x40($sp)
    ctx->pc = 0x27a204u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_27a208:
    // 0x27a208: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x27a208u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_27a20c:
    // 0x27a20c: 0xe7a4003c  swc1        $f4, 0x3C($sp)
    ctx->pc = 0x27a20cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_27a210:
    // 0x27a210: 0x27a30044  addiu       $v1, $sp, 0x44
    ctx->pc = 0x27a210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
label_27a214:
    // 0x27a214: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a218:
    // 0x27a218: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x27a218u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_27a21c:
    // 0x27a21c: 0x27a20058  addiu       $v0, $sp, 0x58
    ctx->pc = 0x27a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_27a220:
    // 0x27a220: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x27a220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_27a224:
    // 0x27a224: 0xe7a60054  swc1        $f6, 0x54($sp)
    ctx->pc = 0x27a224u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27a228:
    // 0x27a228: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x27a228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_27a22c:
    // 0x27a22c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_27a230:
    // 0x27a230: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x27a230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a234:
    // 0x27a234: 0x46030141  sub.s       $f5, $f0, $f3
    ctx->pc = 0x27a234u;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_27a238:
    // 0x27a238: 0xe7a501ec  swc1        $f5, 0x1EC($sp)
    ctx->pc = 0x27a238u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_27a23c:
    // 0x27a23c: 0xc6400014  lwc1        $f0, 0x14($s2)
    ctx->pc = 0x27a23cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a240:
    // 0x27a240: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x27a240u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_27a244:
    // 0x27a244: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x27a244u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_27a248:
    // 0x27a248: 0xc6410018  lwc1        $f1, 0x18($s2)
    ctx->pc = 0x27a248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a24c:
    // 0x27a24c: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27a24cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27a250:
    // 0x27a250: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x27a250u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_27a254:
    // 0x27a254: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x27a254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a258:
    // 0x27a258: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x27a258u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27a25c:
    // 0x27a25c: 0xe7a301e0  swc1        $f3, 0x1E0($sp)
    ctx->pc = 0x27a25cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_27a260:
    // 0x27a260: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x27a260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a264:
    // 0x27a264: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x27a264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_27a268:
    // 0x27a268: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x27a268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_27a26c:
    // 0x27a26c: 0xc641000c  lwc1        $f1, 0xC($s2)
    ctx->pc = 0x27a26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a270:
    // 0x27a270: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x27a270u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_27a274:
    // 0x27a274: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x27a274u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_27a278:
    // 0x27a278: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x27a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a27c:
    // 0x27a27c: 0xc7a40050  lwc1        $f4, 0x50($sp)
    ctx->pc = 0x27a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a280:
    // 0x27a280: 0x46041032  c.eq.s      $f2, $f4
    ctx->pc = 0x27a280u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a284:
    // 0x27a284: 0x0  nop
    ctx->pc = 0x27a284u;
    // NOP
label_27a288:
    // 0x27a288: 0x4500000b  bc1f        . + 4 + (0xB << 2)
label_27a28c:
    if (ctx->pc == 0x27A28Cu) {
        ctx->pc = 0x27A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A288u;
        // 0x27a28c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A290u;
        goto label_27a290;
    }
    ctx->pc = 0x27A288u;
    {
        const bool branch_taken_0x27a288 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A288u;
        // 0x27a28c: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a288) {
            ctx->pc = 0x27A2B8u;
            goto label_27a2b8;
        }
    }
    ctx->pc = 0x27A290u;
label_27a290:
    // 0x27a290: 0x46002836  c.le.s      $f5, $f0
    ctx->pc = 0x27a290u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a294:
    // 0x27a294: 0x0  nop
    ctx->pc = 0x27a294u;
    // NOP
label_27a298:
    // 0x27a298: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_27a29c:
    if (ctx->pc == 0x27A29Cu) {
        ctx->pc = 0x27A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A298u;
        // 0x27a29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2A0u;
        goto label_27a2a0;
    }
    ctx->pc = 0x27A298u;
    {
        const bool branch_taken_0x27a298 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A298u;
        // 0x27a29c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a298) {
            ctx->pc = 0x27A33Cu;
            goto label_27a33c;
        }
    }
    ctx->pc = 0x27A2A0u;
label_27a2a0:
    // 0x27a2a0: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x27a2a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a2a4:
    // 0x27a2a4: 0x0  nop
    ctx->pc = 0x27a2a4u;
    // NOP
label_27a2a8:
    // 0x27a2a8: 0x45030024  bc1tl       . + 4 + (0x24 << 2)
label_27a2ac:
    if (ctx->pc == 0x27A2ACu) {
        ctx->pc = 0x27A2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2A8u;
        // 0x27a2ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2B0u;
        goto label_27a2b0;
    }
    ctx->pc = 0x27A2A8u;
    {
        const bool branch_taken_0x27a2a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a2a8) {
            ctx->pc = 0x27A2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2A8u;
            // 0x27a2ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A33Cu;
            goto label_27a33c;
        }
    }
    ctx->pc = 0x27A2B0u;
label_27a2b0:
    // 0x27a2b0: 0x10000022  b           . + 4 + (0x22 << 2)
label_27a2b4:
    if (ctx->pc == 0x27A2B4u) {
        ctx->pc = 0x27A2B8u;
        goto label_27a2b8;
    }
    ctx->pc = 0x27A2B0u;
    {
        const bool branch_taken_0x27a2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a2b0) {
            ctx->pc = 0x27A33Cu;
            goto label_27a33c;
        }
    }
    ctx->pc = 0x27A2B8u;
label_27a2b8:
    // 0x27a2b8: 0x46001841  sub.s       $f1, $f3, $f0
    ctx->pc = 0x27a2b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27a2bc:
    // 0x27a2bc: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x27a2bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_27a2c0:
    // 0x27a2c0: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27a2c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27a2c4:
    // 0x27a2c4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x27a2c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_27a2c8:
    // 0x27a2c8: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x27a2c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a2cc:
    // 0x27a2cc: 0x0  nop
    ctx->pc = 0x27a2ccu;
    // NOP
label_27a2d0:
    // 0x27a2d0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a2d4:
    if (ctx->pc == 0x27A2D4u) {
        ctx->pc = 0x27A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D0u;
        // 0x27a2d4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2D8u;
        goto label_27a2d8;
    }
    ctx->pc = 0x27A2D0u;
    {
        const bool branch_taken_0x27a2d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2D0u;
        // 0x27a2d4: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2d0) {
            ctx->pc = 0x27A2E0u;
            goto label_27a2e0;
        }
    }
    ctx->pc = 0x27A2D8u;
label_27a2d8:
    // 0x27a2d8: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27a2d8u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_27a2dc:
    // 0x27a2dc: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x27a2dcu;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
label_27a2e0:
    // 0x27a2e0: 0x46012036  c.le.s      $f4, $f1
    ctx->pc = 0x27a2e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a2e4:
    // 0x27a2e4: 0x0  nop
    ctx->pc = 0x27a2e4u;
    // NOP
label_27a2e8:
    // 0x27a2e8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27a2ec:
    if (ctx->pc == 0x27A2ECu) {
        ctx->pc = 0x27A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2E8u;
        // 0x27a2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A2F0u;
        goto label_27a2f0;
    }
    ctx->pc = 0x27A2E8u;
    {
        const bool branch_taken_0x27a2e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2E8u;
        // 0x27a2ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a2e8) {
            ctx->pc = 0x27A300u;
            goto label_27a300;
        }
    }
    ctx->pc = 0x27A2F0u;
label_27a2f0:
    // 0x27a2f0: 0x46061036  c.le.s      $f2, $f6
    ctx->pc = 0x27a2f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a2f4:
    // 0x27a2f4: 0x0  nop
    ctx->pc = 0x27a2f4u;
    // NOP
label_27a2f8:
    // 0x27a2f8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a2fc:
    if (ctx->pc == 0x27A2FCu) {
        ctx->pc = 0x27A2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A2F8u;
        // 0x27a2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A300u;
        goto label_27a300;
    }
    ctx->pc = 0x27A2F8u;
    {
        const bool branch_taken_0x27a2f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a2f8) {
            ctx->pc = 0x27A2FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A2F8u;
            // 0x27a2fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A300u;
            goto label_27a300;
        }
    }
    ctx->pc = 0x27A300u;
label_27a300:
    // 0x27a300: 0x50400086  beql        $v0, $zero, . + 4 + (0x86 << 2)
label_27a304:
    if (ctx->pc == 0x27A304u) {
        ctx->pc = 0x27A304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A300u;
        // 0x27a304: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A308u;
        goto label_27a308;
    }
    ctx->pc = 0x27A300u;
    {
        const bool branch_taken_0x27a300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a300) {
            ctx->pc = 0x27A304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A300u;
            // 0x27a304: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A51Cu;
            goto label_27a51c;
        }
    }
    ctx->pc = 0x27A308u;
label_27a308:
    // 0x27a308: 0x46041036  c.le.s      $f2, $f4
    ctx->pc = 0x27a308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a30c:
    // 0x27a30c: 0x0  nop
    ctx->pc = 0x27a30cu;
    // NOP
label_27a310:
    // 0x27a310: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a314:
    if (ctx->pc == 0x27A314u) {
        ctx->pc = 0x27A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A310u;
        // 0x27a314: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A318u;
        goto label_27a318;
    }
    ctx->pc = 0x27A310u;
    {
        const bool branch_taken_0x27a310 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A310u;
        // 0x27a314: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a310) {
            ctx->pc = 0x27A31Cu;
            goto label_27a31c;
        }
    }
    ctx->pc = 0x27A318u;
label_27a318:
    // 0x27a318: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x27a318u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_27a31c:
    // 0x27a31c: 0xc7a30054  lwc1        $f3, 0x54($sp)
    ctx->pc = 0x27a31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a320:
    // 0x27a320: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x27a320u;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_27a324:
    // 0x27a324: 0x46011836  c.le.s      $f3, $f1
    ctx->pc = 0x27a324u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a328:
    // 0x27a328: 0x0  nop
    ctx->pc = 0x27a328u;
    // NOP
label_27a32c:
    // 0x27a32c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a330:
    if (ctx->pc == 0x27A330u) {
        ctx->pc = 0x27A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A32Cu;
        // 0x27a330: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A334u;
        goto label_27a334;
    }
    ctx->pc = 0x27A32Cu;
    {
        const bool branch_taken_0x27a32c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A32Cu;
        // 0x27a330: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a32c) {
            ctx->pc = 0x27A338u;
            goto label_27a338;
        }
    }
    ctx->pc = 0x27A334u;
label_27a334:
    // 0x27a334: 0x46001886  mov.s       $f2, $f3
    ctx->pc = 0x27a334u;
    ctx->f[2] = FPU_MOV_S(ctx->f[3]);
label_27a338:
    // 0x27a338: 0xe7a20054  swc1        $f2, 0x54($sp)
    ctx->pc = 0x27a338u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27a33c:
    // 0x27a33c: 0x10400076  beqz        $v0, . + 4 + (0x76 << 2)
label_27a340:
    if (ctx->pc == 0x27A340u) {
        ctx->pc = 0x27A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A33Cu;
        // 0x27a340: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A344u;
        goto label_27a344;
    }
    ctx->pc = 0x27A33Cu;
    {
        const bool branch_taken_0x27a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A33Cu;
        // 0x27a340: 0xc7a30030  lwc1        $f3, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a33c) {
            ctx->pc = 0x27A518u;
            goto label_27a518;
        }
    }
    ctx->pc = 0x27A344u;
label_27a344:
    // 0x27a344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a348:
    // 0x27a348: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x27a348u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a34c:
    // 0x27a34c: 0x0  nop
    ctx->pc = 0x27a34cu;
    // NOP
label_27a350:
    // 0x27a350: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_27a354:
    if (ctx->pc == 0x27A354u) {
        ctx->pc = 0x27A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A350u;
        // 0x27a354: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A358u;
        goto label_27a358;
    }
    ctx->pc = 0x27A350u;
    {
        const bool branch_taken_0x27a350 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A350u;
        // 0x27a354: 0xc7a10018  lwc1        $f1, 0x18($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a350) {
            ctx->pc = 0x27A388u;
            goto label_27a388;
        }
    }
    ctx->pc = 0x27A358u;
label_27a358:
    // 0x27a358: 0xc7a001f0  lwc1        $f0, 0x1F0($sp)
    ctx->pc = 0x27a358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a35c:
    // 0x27a35c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27a35cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a360:
    // 0x27a360: 0x0  nop
    ctx->pc = 0x27a360u;
    // NOP
label_27a364:
    // 0x27a364: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_27a368:
    if (ctx->pc == 0x27A368u) {
        ctx->pc = 0x27A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A364u;
        // 0x27a368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A36Cu;
        goto label_27a36c;
    }
    ctx->pc = 0x27A364u;
    {
        const bool branch_taken_0x27a364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A364u;
        // 0x27a368: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a364) {
            ctx->pc = 0x27A424u;
            goto label_27a424;
        }
    }
    ctx->pc = 0x27A36Cu;
label_27a36c:
    // 0x27a36c: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x27a36cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a370:
    // 0x27a370: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a370u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a374:
    // 0x27a374: 0x0  nop
    ctx->pc = 0x27a374u;
    // NOP
label_27a378:
    // 0x27a378: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_27a37c:
    if (ctx->pc == 0x27A37Cu) {
        ctx->pc = 0x27A37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A378u;
        // 0x27a37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A380u;
        goto label_27a380;
    }
    ctx->pc = 0x27A378u;
    {
        const bool branch_taken_0x27a378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a378) {
            ctx->pc = 0x27A37Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A378u;
            // 0x27a37c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A424u;
            goto label_27a424;
        }
    }
    ctx->pc = 0x27A380u;
label_27a380:
    // 0x27a380: 0x10000028  b           . + 4 + (0x28 << 2)
label_27a384:
    if (ctx->pc == 0x27A384u) {
        ctx->pc = 0x27A388u;
        goto label_27a388;
    }
    ctx->pc = 0x27A380u;
    {
        const bool branch_taken_0x27a380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a380) {
            ctx->pc = 0x27A424u;
            goto label_27a424;
        }
    }
    ctx->pc = 0x27A388u;
label_27a388:
    // 0x27a388: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x27a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a38c:
    // 0x27a38c: 0xc7a101f0  lwc1        $f1, 0x1F0($sp)
    ctx->pc = 0x27a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a390:
    // 0x27a390: 0xc7a201e4  lwc1        $f2, 0x1E4($sp)
    ctx->pc = 0x27a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a394:
    // 0x27a394: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27a394u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a398:
    // 0x27a398: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27a398u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27a39c:
    // 0x27a39c: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x27a39cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27a3a0:
    // 0x27a3a0: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x27a3a0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27a3a4:
    // 0x27a3a4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x27a3a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a3a8:
    // 0x27a3a8: 0x0  nop
    ctx->pc = 0x27a3a8u;
    // NOP
label_27a3ac:
    // 0x27a3ac: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a3b0:
    if (ctx->pc == 0x27A3B0u) {
        ctx->pc = 0x27A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3ACu;
        // 0x27a3b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3B4u;
        goto label_27a3b4;
    }
    ctx->pc = 0x27A3ACu;
    {
        const bool branch_taken_0x27a3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3ACu;
        // 0x27a3b0: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3ac) {
            ctx->pc = 0x27A3BCu;
            goto label_27a3bc;
        }
    }
    ctx->pc = 0x27A3B4u;
label_27a3b4:
    // 0x27a3b4: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x27a3b4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_27a3b8:
    // 0x27a3b8: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27a3b8u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_27a3bc:
    // 0x27a3bc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a3c0:
    // 0x27a3c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a3c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a3c4:
    // 0x27a3c4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x27a3c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a3c8:
    // 0x27a3c8: 0x0  nop
    ctx->pc = 0x27a3c8u;
    // NOP
label_27a3cc:
    // 0x27a3cc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27a3d0:
    if (ctx->pc == 0x27A3D0u) {
        ctx->pc = 0x27A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3CCu;
        // 0x27a3d0: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3D4u;
        goto label_27a3d4;
    }
    ctx->pc = 0x27A3CCu;
    {
        const bool branch_taken_0x27a3cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3CCu;
        // 0x27a3d0: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3cc) {
            ctx->pc = 0x27A3E8u;
            goto label_27a3e8;
        }
    }
    ctx->pc = 0x27A3D4u;
label_27a3d4:
    // 0x27a3d4: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x27a3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a3d8:
    // 0x27a3d8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a3d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a3dc:
    // 0x27a3dc: 0x0  nop
    ctx->pc = 0x27a3dcu;
    // NOP
label_27a3e0:
    // 0x27a3e0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a3e4:
    if (ctx->pc == 0x27A3E4u) {
        ctx->pc = 0x27A3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3E0u;
        // 0x27a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3E8u;
        goto label_27a3e8;
    }
    ctx->pc = 0x27A3E0u;
    {
        const bool branch_taken_0x27a3e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a3e0) {
            ctx->pc = 0x27A3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A3E0u;
            // 0x27a3e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A3E8u;
            goto label_27a3e8;
        }
    }
    ctx->pc = 0x27A3E8u;
label_27a3e8:
    // 0x27a3e8: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
label_27a3ec:
    if (ctx->pc == 0x27A3ECu) {
        ctx->pc = 0x27A3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3E8u;
        // 0x27a3ec: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A3F0u;
        goto label_27a3f0;
    }
    ctx->pc = 0x27A3E8u;
    {
        const bool branch_taken_0x27a3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a3e8) {
            ctx->pc = 0x27A3ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A3E8u;
            // 0x27a3ec: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A51Cu;
            goto label_27a51c;
        }
    }
    ctx->pc = 0x27A3F0u;
label_27a3f0:
    // 0x27a3f0: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x27a3f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a3f4:
    // 0x27a3f4: 0x0  nop
    ctx->pc = 0x27a3f4u;
    // NOP
label_27a3f8:
    // 0x27a3f8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a3fc:
    if (ctx->pc == 0x27A3FCu) {
        ctx->pc = 0x27A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3F8u;
        // 0x27a3fc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A400u;
        goto label_27a400;
    }
    ctx->pc = 0x27A3F8u;
    {
        const bool branch_taken_0x27a3f8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A3F8u;
        // 0x27a3fc: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a3f8) {
            ctx->pc = 0x27A404u;
            goto label_27a404;
        }
    }
    ctx->pc = 0x27A400u;
label_27a400:
    // 0x27a400: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x27a400u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_27a404:
    // 0x27a404: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x27a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a408:
    // 0x27a408: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x27a408u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_27a40c:
    // 0x27a40c: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x27a40cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a410:
    // 0x27a410: 0x0  nop
    ctx->pc = 0x27a410u;
    // NOP
label_27a414:
    // 0x27a414: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a418:
    if (ctx->pc == 0x27A418u) {
        ctx->pc = 0x27A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A414u;
        // 0x27a418: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A41Cu;
        goto label_27a41c;
    }
    ctx->pc = 0x27A414u;
    {
        const bool branch_taken_0x27a414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A414u;
        // 0x27a418: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a414) {
            ctx->pc = 0x27A420u;
            goto label_27a420;
        }
    }
    ctx->pc = 0x27A41Cu;
label_27a41c:
    // 0x27a41c: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x27a41cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_27a420:
    // 0x27a420: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x27a420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27a424:
    // 0x27a424: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_27a428:
    if (ctx->pc == 0x27A428u) {
        ctx->pc = 0x27A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A424u;
        // 0x27a428: 0xc7a30034  lwc1        $f3, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A42Cu;
        goto label_27a42c;
    }
    ctx->pc = 0x27A424u;
    {
        const bool branch_taken_0x27a424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A424u;
        // 0x27a428: 0xc7a30034  lwc1        $f3, 0x34($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a424) {
            ctx->pc = 0x27A518u;
            goto label_27a518;
        }
    }
    ctx->pc = 0x27A42Cu;
label_27a42c:
    // 0x27a42c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x27a42cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27a430:
    // 0x27a430: 0x46001832  c.eq.s      $f3, $f0
    ctx->pc = 0x27a430u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a434:
    // 0x27a434: 0x0  nop
    ctx->pc = 0x27a434u;
    // NOP
label_27a438:
    // 0x27a438: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_27a43c:
    if (ctx->pc == 0x27A43Cu) {
        ctx->pc = 0x27A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A438u;
        // 0x27a43c: 0xc7a1001c  lwc1        $f1, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A440u;
        goto label_27a440;
    }
    ctx->pc = 0x27A438u;
    {
        const bool branch_taken_0x27a438 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A43Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A438u;
        // 0x27a43c: 0xc7a1001c  lwc1        $f1, 0x1C($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a438) {
            ctx->pc = 0x27A470u;
            goto label_27a470;
        }
    }
    ctx->pc = 0x27A440u;
label_27a440:
    // 0x27a440: 0xc7a001f4  lwc1        $f0, 0x1F4($sp)
    ctx->pc = 0x27a440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a444:
    // 0x27a444: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27a444u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a448:
    // 0x27a448: 0x0  nop
    ctx->pc = 0x27a448u;
    // NOP
label_27a44c:
    // 0x27a44c: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
label_27a450:
    if (ctx->pc == 0x27A450u) {
        ctx->pc = 0x27A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A44Cu;
        // 0x27a450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A454u;
        goto label_27a454;
    }
    ctx->pc = 0x27A44Cu;
    {
        const bool branch_taken_0x27a44c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A44Cu;
        // 0x27a450: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a44c) {
            ctx->pc = 0x27A50Cu;
            goto label_27a50c;
        }
    }
    ctx->pc = 0x27A454u;
label_27a454:
    // 0x27a454: 0xc7a001e8  lwc1        $f0, 0x1E8($sp)
    ctx->pc = 0x27a454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a458:
    // 0x27a458: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a458u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a45c:
    // 0x27a45c: 0x0  nop
    ctx->pc = 0x27a45cu;
    // NOP
label_27a460:
    // 0x27a460: 0x4503002a  bc1tl       . + 4 + (0x2A << 2)
label_27a464:
    if (ctx->pc == 0x27A464u) {
        ctx->pc = 0x27A464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A460u;
        // 0x27a464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A468u;
        goto label_27a468;
    }
    ctx->pc = 0x27A460u;
    {
        const bool branch_taken_0x27a460 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a460) {
            ctx->pc = 0x27A464u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A460u;
            // 0x27a464: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A50Cu;
            goto label_27a50c;
        }
    }
    ctx->pc = 0x27A468u;
label_27a468:
    // 0x27a468: 0x10000029  b           . + 4 + (0x29 << 2)
label_27a46c:
    if (ctx->pc == 0x27A46Cu) {
        ctx->pc = 0x27A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A468u;
        // 0x27a46c: 0x27b3004c  addiu       $s3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A470u;
        goto label_27a470;
    }
    ctx->pc = 0x27A468u;
    {
        const bool branch_taken_0x27a468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A468u;
        // 0x27a46c: 0x27b3004c  addiu       $s3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a468) {
            ctx->pc = 0x27A510u;
            goto label_27a510;
        }
    }
    ctx->pc = 0x27A470u;
label_27a470:
    // 0x27a470: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x27a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a474:
    // 0x27a474: 0xc7a101f4  lwc1        $f1, 0x1F4($sp)
    ctx->pc = 0x27a474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a478:
    // 0x27a478: 0xc7a201e8  lwc1        $f2, 0x1E8($sp)
    ctx->pc = 0x27a478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a47c:
    // 0x27a47c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27a47cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a480:
    // 0x27a480: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27a480u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27a484:
    // 0x27a484: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x27a484u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27a488:
    // 0x27a488: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x27a488u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
label_27a48c:
    // 0x27a48c: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x27a48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a490:
    // 0x27a490: 0x0  nop
    ctx->pc = 0x27a490u;
    // NOP
label_27a494:
    // 0x27a494: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a498:
    if (ctx->pc == 0x27A498u) {
        ctx->pc = 0x27A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A494u;
        // 0x27a498: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A49Cu;
        goto label_27a49c;
    }
    ctx->pc = 0x27A494u;
    {
        const bool branch_taken_0x27a494 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A494u;
        // 0x27a498: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a494) {
            ctx->pc = 0x27A4A4u;
            goto label_27a4a4;
        }
    }
    ctx->pc = 0x27A49Cu;
label_27a49c:
    // 0x27a49c: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x27a49cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_27a4a0:
    // 0x27a4a0: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x27a4a0u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
label_27a4a4:
    // 0x27a4a4: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x27a4a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a4a8:
    // 0x27a4a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27a4a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a4ac:
    // 0x27a4ac: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x27a4acu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a4b0:
    // 0x27a4b0: 0x0  nop
    ctx->pc = 0x27a4b0u;
    // NOP
label_27a4b4:
    // 0x27a4b4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27a4b8:
    if (ctx->pc == 0x27A4B8u) {
        ctx->pc = 0x27A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B4u;
        // 0x27a4b8: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4BCu;
        goto label_27a4bc;
    }
    ctx->pc = 0x27A4B4u;
    {
        const bool branch_taken_0x27a4b4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4B4u;
        // 0x27a4b8: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4b4) {
            ctx->pc = 0x27A4D0u;
            goto label_27a4d0;
        }
    }
    ctx->pc = 0x27A4BCu;
label_27a4bc:
    // 0x27a4bc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x27a4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a4c0:
    // 0x27a4c0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x27a4c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a4c4:
    // 0x27a4c4: 0x0  nop
    ctx->pc = 0x27a4c4u;
    // NOP
label_27a4c8:
    // 0x27a4c8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a4cc:
    if (ctx->pc == 0x27A4CCu) {
        ctx->pc = 0x27A4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4C8u;
        // 0x27a4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4D0u;
        goto label_27a4d0;
    }
    ctx->pc = 0x27A4C8u;
    {
        const bool branch_taken_0x27a4c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a4c8) {
            ctx->pc = 0x27A4CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A4C8u;
            // 0x27a4cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A4D0u;
            goto label_27a4d0;
        }
    }
    ctx->pc = 0x27A4D0u;
label_27a4d0:
    // 0x27a4d0: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_27a4d4:
    if (ctx->pc == 0x27A4D4u) {
        ctx->pc = 0x27A4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4D0u;
        // 0x27a4d4: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4D8u;
        goto label_27a4d8;
    }
    ctx->pc = 0x27A4D0u;
    {
        const bool branch_taken_0x27a4d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a4d0) {
            ctx->pc = 0x27A4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A4D0u;
            // 0x27a4d4: 0x27a2004c  addiu       $v0, $sp, 0x4C (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A51Cu;
            goto label_27a51c;
        }
    }
    ctx->pc = 0x27A4D8u;
label_27a4d8:
    // 0x27a4d8: 0x46040836  c.le.s      $f1, $f4
    ctx->pc = 0x27a4d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a4dc:
    // 0x27a4dc: 0x0  nop
    ctx->pc = 0x27a4dcu;
    // NOP
label_27a4e0:
    // 0x27a4e0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a4e4:
    if (ctx->pc == 0x27A4E4u) {
        ctx->pc = 0x27A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E0u;
        // 0x27a4e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A4E8u;
        goto label_27a4e8;
    }
    ctx->pc = 0x27A4E0u;
    {
        const bool branch_taken_0x27a4e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4E0u;
        // 0x27a4e4: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4e0) {
            ctx->pc = 0x27A4ECu;
            goto label_27a4ec;
        }
    }
    ctx->pc = 0x27A4E8u;
label_27a4e8:
    // 0x27a4e8: 0x46002006  mov.s       $f0, $f4
    ctx->pc = 0x27a4e8u;
    ctx->f[0] = FPU_MOV_S(ctx->f[4]);
label_27a4ec:
    // 0x27a4ec: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x27a4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a4f0:
    // 0x27a4f0: 0x46001846  mov.s       $f1, $f3
    ctx->pc = 0x27a4f0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[3]);
label_27a4f4:
    // 0x27a4f4: 0x46031036  c.le.s      $f2, $f3
    ctx->pc = 0x27a4f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a4f8:
    // 0x27a4f8: 0x0  nop
    ctx->pc = 0x27a4f8u;
    // NOP
label_27a4fc:
    // 0x27a4fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27a500:
    if (ctx->pc == 0x27A500u) {
        ctx->pc = 0x27A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4FCu;
        // 0x27a500: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A504u;
        goto label_27a504;
    }
    ctx->pc = 0x27A4FCu;
    {
        const bool branch_taken_0x27a4fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A4FCu;
        // 0x27a500: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a4fc) {
            ctx->pc = 0x27A508u;
            goto label_27a508;
        }
    }
    ctx->pc = 0x27A504u;
label_27a504:
    // 0x27a504: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x27a504u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_27a508:
    // 0x27a508: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x27a508u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_27a50c:
    // 0x27a50c: 0x27b3004c  addiu       $s3, $sp, 0x4C
    ctx->pc = 0x27a50cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_27a510:
    // 0x27a510: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_27a514:
    if (ctx->pc == 0x27A514u) {
        ctx->pc = 0x27A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A510u;
        // 0x27a514: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A518u;
        goto label_27a518;
    }
    ctx->pc = 0x27A510u;
    {
        const bool branch_taken_0x27a510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27A514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A510u;
        // 0x27a514: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a510) {
            ctx->pc = 0x27A528u;
            goto label_27a528;
        }
    }
    ctx->pc = 0x27A518u;
label_27a518:
    // 0x27a518: 0x27a2004c  addiu       $v0, $sp, 0x4C
    ctx->pc = 0x27a518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
label_27a51c:
    // 0x27a51c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_27a520:
    // 0x27a520: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27a520u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27a524:
    // 0x27a524: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x27a524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a528:
    // 0x27a528: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x27a528u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27a52c:
    // 0x27a52c: 0x50400188  beql        $v0, $zero, . + 4 + (0x188 << 2)
label_27a530:
    if (ctx->pc == 0x27A530u) {
        ctx->pc = 0x27A530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A52Cu;
        // 0x27a530: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A534u;
        goto label_27a534;
    }
    ctx->pc = 0x27A52Cu;
    {
        const bool branch_taken_0x27a52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a52c) {
            ctx->pc = 0x27A530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A52Cu;
            // 0x27a530: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB50u;
            goto label_27ab50;
        }
    }
    ctx->pc = 0x27A534u;
label_27a534:
    // 0x27a534: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x27a534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_27a538:
    // 0x27a538: 0x8c64fff4  lw          $a0, -0xC($v1)
    ctx->pc = 0x27a538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_27a53c:
    // 0x27a53c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a53cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_27a540:
    // 0x27a540: 0x240800ff  addiu       $t0, $zero, 0xFF
    ctx->pc = 0x27a540u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27a544:
    // 0x27a544: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x27a544u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27a548:
    // 0x27a548: 0x14680071  bne         $v1, $t0, . + 4 + (0x71 << 2)
label_27a54c:
    if (ctx->pc == 0x27A54Cu) {
        ctx->pc = 0x27A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A548u;
        // 0x27a54c: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A550u;
        goto label_27a550;
    }
    ctx->pc = 0x27A548u;
    {
        const bool branch_taken_0x27a548 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 8));
        ctx->pc = 0x27A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A548u;
        // 0x27a54c: 0x8fa201d8  lw          $v0, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a548) {
            ctx->pc = 0x27A710u;
            goto label_27a710;
        }
    }
    ctx->pc = 0x27A550u;
label_27a550:
    // 0x27a550: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27a550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_27a554:
    // 0x27a554: 0x27ab0020  addiu       $t3, $sp, 0x20
    ctx->pc = 0x27a554u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_27a558:
    // 0x27a558: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x27a558u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_27a55c:
    // 0x27a55c: 0x27aa0014  addiu       $t2, $sp, 0x14
    ctx->pc = 0x27a55cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_27a560:
    // 0x27a560: 0x8c4c0020  lw          $t4, 0x20($v0)
    ctx->pc = 0x27a560u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_27a564:
    // 0x27a564: 0x27a90038  addiu       $t1, $sp, 0x38
    ctx->pc = 0x27a564u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_27a568:
    // 0x27a568: 0x27a8002c  addiu       $t0, $sp, 0x2C
    ctx->pc = 0x27a568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_27a56c:
    // 0x27a56c: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x27a56cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27a570:
    // 0x27a570: 0x8fa501d8  lw          $a1, 0x1D8($sp)
    ctx->pc = 0x27a570u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a574:
    // 0x27a574: 0x0  nop
    ctx->pc = 0x27a574u;
    // NOP
label_27a578:
    // 0x27a578: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x27a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_27a57c:
    // 0x27a57c: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x27a57cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_27a580:
    // 0x27a580: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x27a580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_27a584:
    // 0x27a584: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x27a584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_27a588:
    // 0x27a588: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x27a588u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_27a58c:
    // 0x27a58c: 0x3067000c  andi        $a3, $v1, 0xC
    ctx->pc = 0x27a58cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_27a590:
    // 0x27a590: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x27a590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_27a594:
    // 0x27a594: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a598:
    // 0x27a598: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x27a598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_27a59c:
    // 0x27a59c: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x27a59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a5a0:
    // 0x27a5a0: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x27a5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_27a5a4:
    // 0x27a5a4: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x27a5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a5a8:
    // 0x27a5a8: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x27a5a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a5ac:
    // 0x27a5ac: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x27a5acu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_27a5b0:
    // 0x27a5b0: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x27a5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27a5b4:
    // 0x27a5b4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x27a5b4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_27a5b8:
    // 0x27a5b8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x27a5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a5bc:
    // 0x27a5bc: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x27a5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a5c0:
    // 0x27a5c0: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x27a5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a5c4:
    // 0x27a5c4: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x27a5c4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_27a5c8:
    // 0x27a5c8: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x27a5c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27a5cc:
    // 0x27a5cc: 0x46020080  add.s       $f2, $f0, $f2
    ctx->pc = 0x27a5ccu;
    ctx->f[2] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27a5d0:
    // 0x27a5d0: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_27a5d4:
    if (ctx->pc == 0x27A5D4u) {
        ctx->pc = 0x27A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D0u;
        // 0x27a5d4: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5D8u;
        goto label_27a5d8;
    }
    ctx->pc = 0x27A5D0u;
    {
        const bool branch_taken_0x27a5d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5D0u;
        // 0x27a5d4: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5d0) {
            ctx->pc = 0x27A664u;
            goto label_27a664;
        }
    }
    ctx->pc = 0x27A5D8u;
label_27a5d8:
    // 0x27a5d8: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x27a5d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a5dc:
    // 0x27a5dc: 0x0  nop
    ctx->pc = 0x27a5dcu;
    // NOP
label_27a5e0:
    // 0x27a5e0: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_27a5e4:
    if (ctx->pc == 0x27A5E4u) {
        ctx->pc = 0x27A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5E0u;
        // 0x27a5e4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5E8u;
        goto label_27a5e8;
    }
    ctx->pc = 0x27A5E0u;
    {
        const bool branch_taken_0x27a5e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a5e0) {
            ctx->pc = 0x27A5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A5E0u;
            // 0x27a5e4: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A5E8u;
label_27a5e8:
    // 0x27a5e8: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x27a5e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a5ec:
    // 0x27a5ec: 0x0  nop
    ctx->pc = 0x27a5ecu;
    // NOP
label_27a5f0:
    // 0x27a5f0: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_27a5f4:
    if (ctx->pc == 0x27A5F4u) {
        ctx->pc = 0x27A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F0u;
        // 0x27a5f4: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A5F8u;
        goto label_27a5f8;
    }
    ctx->pc = 0x27A5F0u;
    {
        const bool branch_taken_0x27a5f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A5F0u;
        // 0x27a5f4: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a5f0) {
            ctx->pc = 0x27A674u;
            goto label_27a674;
        }
    }
    ctx->pc = 0x27A5F8u;
label_27a5f8:
    // 0x27a5f8: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x27a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_27a5fc:
    // 0x27a5fc: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x27a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_27a600:
    // 0x27a600: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x27a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a604:
    // 0x27a604: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x27a604u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a608:
    // 0x27a608: 0xc4460000  lwc1        $f6, 0x0($v0)
    ctx->pc = 0x27a608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27a60c:
    // 0x27a60c: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x27a60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a610:
    // 0x27a610: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x27a610u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_27a614:
    // 0x27a614: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x27a614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_27a618:
    // 0x27a618: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x27a618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_27a61c:
    // 0x27a61c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27a620:
    if (ctx->pc == 0x27A620u) {
        ctx->pc = 0x27A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A61Cu;
        // 0x27a620: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A624u;
        goto label_27a624;
    }
    ctx->pc = 0x27A61Cu;
    {
        const bool branch_taken_0x27a61c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A61Cu;
        // 0x27a620: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a61c) {
            ctx->pc = 0x27A638u;
            goto label_27a638;
        }
    }
    ctx->pc = 0x27A624u;
label_27a624:
    // 0x27a624: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x27a624u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_27a628:
    // 0x27a628: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27a628u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27a62c:
    // 0x27a62c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x27a62cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_27a630:
    // 0x27a630: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27a630u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27a634:
    // 0x27a634: 0x0  nop
    ctx->pc = 0x27a634u;
    // NOP
label_27a638:
    // 0x27a638: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x27a638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a63c:
    // 0x27a63c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27a63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a640:
    // 0x27a640: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x27a640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27a644:
    // 0x27a644: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_27a648:
    if (ctx->pc == 0x27A648u) {
        ctx->pc = 0x27A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A644u;
        // 0x27a648: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A64Cu;
        goto label_27a64c;
    }
    ctx->pc = 0x27A644u;
    {
        const bool branch_taken_0x27a644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A644u;
        // 0x27a648: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a644) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A64Cu;
label_27a64c:
    // 0x27a64c: 0x46050801  sub.s       $f0, $f1, $f5
    ctx->pc = 0x27a64cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
label_27a650:
    // 0x27a650: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x27a650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a654:
    // 0x27a654: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27a654u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27a658:
    // 0x27a658: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27a658u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27a65c:
    // 0x27a65c: 0x10000026  b           . + 4 + (0x26 << 2)
label_27a660:
    if (ctx->pc == 0x27A660u) {
        ctx->pc = 0x27A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A65Cu;
        // 0x27a660: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A664u;
        goto label_27a664;
    }
    ctx->pc = 0x27A65Cu;
    {
        const bool branch_taken_0x27a65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A65Cu;
        // 0x27a660: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a65c) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A664u;
label_27a664:
    // 0x27a664: 0x46031034  c.lt.s      $f2, $f3
    ctx->pc = 0x27a664u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a668:
    // 0x27a668: 0x0  nop
    ctx->pc = 0x27a668u;
    // NOP
label_27a66c:
    // 0x27a66c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a670:
    if (ctx->pc == 0x27A670u) {
        ctx->pc = 0x27A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A66Cu;
        // 0x27a670: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A674u;
        goto label_27a674;
    }
    ctx->pc = 0x27A66Cu;
    {
        const bool branch_taken_0x27a66c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A66Cu;
        // 0x27a670: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a66c) {
            ctx->pc = 0x27A67Cu;
            goto label_27a67c;
        }
    }
    ctx->pc = 0x27A674u;
label_27a674:
    // 0x27a674: 0x10000020  b           . + 4 + (0x20 << 2)
label_27a678:
    if (ctx->pc == 0x27A678u) {
        ctx->pc = 0x27A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A674u;
        // 0x27a678: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A67Cu;
        goto label_27a67c;
    }
    ctx->pc = 0x27A674u;
    {
        const bool branch_taken_0x27a674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A674u;
        // 0x27a678: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a674) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A67Cu;
label_27a67c:
    // 0x27a67c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x27a67cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a680:
    // 0x27a680: 0x0  nop
    ctx->pc = 0x27a680u;
    // NOP
label_27a684:
    // 0x27a684: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27a688:
    if (ctx->pc == 0x27A688u) {
        ctx->pc = 0x27A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A684u;
        // 0x27a688: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A68Cu;
        goto label_27a68c;
    }
    ctx->pc = 0x27A684u;
    {
        const bool branch_taken_0x27a684 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A684u;
        // 0x27a688: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a684) {
            ctx->pc = 0x27A694u;
            goto label_27a694;
        }
    }
    ctx->pc = 0x27A68Cu;
label_27a68c:
    // 0x27a68c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_27a690:
    if (ctx->pc == 0x27A690u) {
        ctx->pc = 0x27A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A68Cu;
        // 0x27a690: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A694u;
        goto label_27a694;
    }
    ctx->pc = 0x27A68Cu;
    {
        const bool branch_taken_0x27a68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A68Cu;
        // 0x27a690: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a68c) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A694u;
label_27a694:
    // 0x27a694: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x27a694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_27a698:
    // 0x27a698: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x27a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a69c:
    // 0x27a69c: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x27a69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27a6a0:
    // 0x27a6a0: 0xc4660000  lwc1        $f6, 0x0($v1)
    ctx->pc = 0x27a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27a6a4:
    // 0x27a6a4: 0x46011834  c.lt.s      $f3, $f1
    ctx->pc = 0x27a6a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a6a8:
    // 0x27a6a8: 0xc484fffc  lwc1        $f4, -0x4($a0)
    ctx->pc = 0x27a6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a6ac:
    // 0x27a6ac: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x27a6acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_27a6b0:
    // 0x27a6b0: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x27a6b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_27a6b4:
    // 0x27a6b4: 0xafa401d8  sw          $a0, 0x1D8($sp)
    ctx->pc = 0x27a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 4));
label_27a6b8:
    // 0x27a6b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27a6bc:
    if (ctx->pc == 0x27A6BCu) {
        ctx->pc = 0x27A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6B8u;
        // 0x27a6bc: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A6C0u;
        goto label_27a6c0;
    }
    ctx->pc = 0x27A6B8u;
    {
        const bool branch_taken_0x27a6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6B8u;
        // 0x27a6bc: 0xe4840008  swc1        $f4, 0x8($a0) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6b8) {
            ctx->pc = 0x27A6D0u;
            goto label_27a6d0;
        }
    }
    ctx->pc = 0x27A6C0u;
label_27a6c0:
    // 0x27a6c0: 0x46030801  sub.s       $f0, $f1, $f3
    ctx->pc = 0x27a6c0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_27a6c4:
    // 0x27a6c4: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27a6c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27a6c8:
    // 0x27a6c8: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x27a6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_27a6cc:
    // 0x27a6cc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x27a6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27a6d0:
    // 0x27a6d0: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a6d4:
    // 0x27a6d4: 0x46051034  c.lt.s      $f2, $f5
    ctx->pc = 0x27a6d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a6d8:
    // 0x27a6d8: 0x0  nop
    ctx->pc = 0x27a6d8u;
    // NOP
label_27a6dc:
    // 0x27a6dc: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27a6e0:
    if (ctx->pc == 0x27A6E0u) {
        ctx->pc = 0x27A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6DCu;
        // 0x27a6e0: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A6E4u;
        goto label_27a6e4;
    }
    ctx->pc = 0x27A6DCu;
    {
        const bool branch_taken_0x27a6dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A6DCu;
        // 0x27a6e0: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a6dc) {
            ctx->pc = 0x27A6F8u;
            goto label_27a6f8;
        }
    }
    ctx->pc = 0x27A6E4u;
label_27a6e4:
    // 0x27a6e4: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x27a6e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_27a6e8:
    // 0x27a6e8: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x27a6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a6ec:
    // 0x27a6ec: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27a6ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_27a6f0:
    // 0x27a6f0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x27a6f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27a6f4:
    // 0x27a6f4: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x27a6f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_27a6f8:
    // 0x27a6f8: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a6fc:
    // 0x27a6fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27a700:
    // 0x27a700: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x27a700u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_27a704:
    // 0x27a704: 0x108dff9c  beq         $a0, $t5, . + 4 + (-0x64 << 2)
label_27a708:
    if (ctx->pc == 0x27A708u) {
        ctx->pc = 0x27A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A704u;
        // 0x27a708: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A70Cu;
        goto label_27a70c;
    }
    ctx->pc = 0x27A704u;
    {
        const bool branch_taken_0x27a704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x27A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A704u;
        // 0x27a708: 0x8fa501d8  lw          $a1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a704) {
            ctx->pc = 0x27A578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a578;
        }
    }
    ctx->pc = 0x27A70Cu;
label_27a70c:
    // 0x27a70c: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x27a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27a710:
    // 0x27a710: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x27a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27a714:
    // 0x27a714: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x27a714u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_27a718:
    // 0x27a718: 0xa7a30200  sh          $v1, 0x200($sp)
    ctx->pc = 0x27a718u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 512), (uint16_t)GPR_U32(ctx, 3));
label_27a71c:
    // 0x27a71c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x27a71cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_27a720:
    // 0x27a720: 0xa7a20202  sh          $v0, 0x202($sp)
    ctx->pc = 0x27a720u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 514), (uint16_t)GPR_U32(ctx, 2));
label_27a724:
    // 0x27a724: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x27a724u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27a728:
    // 0x27a728: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x27a728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_27a72c:
    // 0x27a72c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x27a72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_27a730:
    // 0x27a730: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27a730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27a734:
    // 0x27a734: 0x104000fb  beqz        $v0, . + 4 + (0xFB << 2)
label_27a738:
    if (ctx->pc == 0x27A738u) {
        ctx->pc = 0x27A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A734u;
        // 0x27a738: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A73Cu;
        goto label_27a73c;
    }
    ctx->pc = 0x27A734u;
    {
        const bool branch_taken_0x27a734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A734u;
        // 0x27a738: 0x8fa301d8  lw          $v1, 0x1D8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a734) {
            ctx->pc = 0x27AB24u;
            goto label_27ab24;
        }
    }
    ctx->pc = 0x27A73Cu;
label_27a73c:
    // 0x27a73c: 0xc7978034  lwc1        $f23, -0x7FCC($gp)
    ctx->pc = 0x27a73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27a740:
    // 0x27a740: 0x2414000c  addiu       $s4, $zero, 0xC
    ctx->pc = 0x27a740u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27a744:
    // 0x27a744: 0xc7968038  lwc1        $f22, -0x7FC8($gp)
    ctx->pc = 0x27a744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934584)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27a748:
    // 0x27a748: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x27a748u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_27a74c:
    // 0x27a74c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27a74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27a750:
    // 0x27a750: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27a750u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27a754:
    // 0x27a754: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x27a754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_27a758:
    // 0x27a758: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_27a75c:
    if (ctx->pc == 0x27A75Cu) {
        ctx->pc = 0x27A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A758u;
        // 0x27a75c: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A760u;
        goto label_27a760;
    }
    ctx->pc = 0x27A758u;
    {
        const bool branch_taken_0x27a758 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A75Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A758u;
        // 0x27a75c: 0x111040  sll         $v0, $s1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a758) {
            ctx->pc = 0x27A76Cu;
            goto label_27a76c;
        }
    }
    ctx->pc = 0x27A760u;
label_27a760:
    // 0x27a760: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27a760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27a764:
    // 0x27a764: 0x10000002  b           . + 4 + (0x2 << 2)
label_27a768:
    if (ctx->pc == 0x27A768u) {
        ctx->pc = 0x27A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A764u;
        // 0x27a768: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A76Cu;
        goto label_27a76c;
    }
    ctx->pc = 0x27A764u;
    {
        const bool branch_taken_0x27a764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A764u;
        // 0x27a768: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a764) {
            ctx->pc = 0x27A770u;
            goto label_27a770;
        }
    }
    ctx->pc = 0x27A76Cu;
label_27a76c:
    // 0x27a76c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27a76cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27a770:
    // 0x27a770: 0x8fa902b0  lw          $t1, 0x2B0($sp)
    ctx->pc = 0x27a770u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 688)));
label_27a774:
    // 0x27a774: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x27a774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_27a778:
    // 0x27a778: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x27a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_27a77c:
    // 0x27a77c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x27a77cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_27a780:
    // 0x27a780: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x27a780u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_27a784:
    // 0x27a784: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x27a784u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_27a788:
    // 0x27a788: 0x741018  mult        $v0, $v1, $s4
    ctx->pc = 0x27a788u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_27a78c:
    // 0x27a78c: 0x941818  mult        $v1, $a0, $s4
    ctx->pc = 0x27a78cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27a790:
    // 0x27a790: 0x553021  addu        $a2, $v0, $s5
    ctx->pc = 0x27a790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_27a794:
    // 0x27a794: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x27a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_27a798:
    // 0x27a798: 0xb41818  mult        $v1, $a1, $s4
    ctx->pc = 0x27a798u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27a79c:
    // 0x27a79c: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x27a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_27a7a0:
    // 0x27a7a0: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x27a7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27a7a4:
    // 0x27a7a4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a7a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7a8:
    // 0x27a7a8: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27a7a8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_27a7ac:
    // 0x27a7ac: 0xe7a70210  swc1        $f7, 0x210($sp)
    ctx->pc = 0x27a7acu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_27a7b0:
    // 0x27a7b0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27a7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7b4:
    // 0x27a7b4: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x27a7b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_27a7b8:
    // 0x27a7b8: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x27a7b8u;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_27a7bc:
    // 0x27a7bc: 0xe7aa0214  swc1        $f10, 0x214($sp)
    ctx->pc = 0x27a7bcu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_27a7c0:
    // 0x27a7c0: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x27a7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_27a7c4:
    // 0x27a7c4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a7c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7c8:
    // 0x27a7c8: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x27a7c8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_27a7cc:
    // 0x27a7cc: 0xe7a80218  swc1        $f8, 0x218($sp)
    ctx->pc = 0x27a7ccu;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_27a7d0:
    // 0x27a7d0: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x27a7d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a7d4:
    // 0x27a7d4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7d8:
    // 0x27a7d8: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27a7d8u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27a7dc:
    // 0x27a7dc: 0xe7a40220  swc1        $f4, 0x220($sp)
    ctx->pc = 0x27a7dcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 544), bits); }
label_27a7e0:
    // 0x27a7e0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7e4:
    // 0x27a7e4: 0xc4c60004  lwc1        $f6, 0x4($a2)
    ctx->pc = 0x27a7e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27a7e8:
    // 0x27a7e8: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27a7e8u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27a7ec:
    // 0x27a7ec: 0xe7a60224  swc1        $f6, 0x224($sp)
    ctx->pc = 0x27a7ecu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 548), bits); }
label_27a7f0:
    // 0x27a7f0: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x27a7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a7f4:
    // 0x27a7f4: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a7f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a7f8:
    // 0x27a7f8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27a7f8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a7fc:
    // 0x27a7fc: 0xe7a10228  swc1        $f1, 0x228($sp)
    ctx->pc = 0x27a7fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 552), bits); }
label_27a800:
    // 0x27a800: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x27a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27a804:
    // 0x27a804: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x27a804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a808:
    // 0x27a808: 0x46042a42  mul.s       $f9, $f5, $f4
    ctx->pc = 0x27a808u;
    ctx->f[9] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27a80c:
    // 0x27a80c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x27a80cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a810:
    // 0x27a810: 0x46012942  mul.s       $f5, $f5, $f1
    ctx->pc = 0x27a810u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
label_27a814:
    // 0x27a814: 0x46041102  mul.s       $f4, $f2, $f4
    ctx->pc = 0x27a814u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27a818:
    // 0x27a818: 0x460600c2  mul.s       $f3, $f0, $f6
    ctx->pc = 0x27a818u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
label_27a81c:
    // 0x27a81c: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x27a81cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_27a820:
    // 0x27a820: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x27a820u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_27a824:
    // 0x27a824: 0x46091981  sub.s       $f6, $f3, $f9
    ctx->pc = 0x27a824u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_27a828:
    // 0x27a828: 0x46022941  sub.s       $f5, $f5, $f2
    ctx->pc = 0x27a828u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[2]);
label_27a82c:
    // 0x27a82c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27a82cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27a830:
    // 0x27a830: 0xe7a60248  swc1        $f6, 0x248($sp)
    ctx->pc = 0x27a830u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 584), bits); }
label_27a834:
    // 0x27a834: 0xe7a50240  swc1        $f5, 0x240($sp)
    ctx->pc = 0x27a834u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 576), bits); }
label_27a838:
    // 0x27a838: 0xe7a40244  swc1        $f4, 0x244($sp)
    ctx->pc = 0x27a838u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 580), bits); }
label_27a83c:
    // 0x27a83c: 0x460539c2  mul.s       $f7, $f7, $f5
    ctx->pc = 0x27a83cu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[5]);
label_27a840:
    // 0x27a840: 0x46045282  mul.s       $f10, $f10, $f4
    ctx->pc = 0x27a840u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
label_27a844:
    // 0x27a844: 0x46064202  mul.s       $f8, $f8, $f6
    ctx->pc = 0x27a844u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[6]);
label_27a848:
    // 0x27a848: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x27a848u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_27a84c:
    // 0x27a84c: 0x46083a80  add.s       $f10, $f7, $f8
    ctx->pc = 0x27a84cu;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_27a850:
    // 0x27a850: 0x460ab834  c.lt.s      $f23, $f10
    ctx->pc = 0x27a850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a854:
    // 0x27a854: 0x0  nop
    ctx->pc = 0x27a854u;
    // NOP
label_27a858:
    // 0x27a858: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_27a85c:
    if (ctx->pc == 0x27A85Cu) {
        ctx->pc = 0x27A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A858u;
        // 0x27a85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A860u;
        goto label_27a860;
    }
    ctx->pc = 0x27A858u;
    {
        const bool branch_taken_0x27a858 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A858u;
        // 0x27a85c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a858) {
            ctx->pc = 0x27A868u;
            goto label_27a868;
        }
    }
    ctx->pc = 0x27A860u;
label_27a860:
    // 0x27a860: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27a860u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a864:
    // 0x27a864: 0x0  nop
    ctx->pc = 0x27a864u;
    // NOP
label_27a868:
    // 0x27a868: 0x506000a6  beql        $v1, $zero, . + 4 + (0xA6 << 2)
label_27a86c:
    if (ctx->pc == 0x27A86Cu) {
        ctx->pc = 0x27A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A868u;
        // 0x27a86c: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A870u;
        goto label_27a870;
    }
    ctx->pc = 0x27A868u;
    {
        const bool branch_taken_0x27a868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a868) {
            ctx->pc = 0x27A86Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A868u;
            // 0x27a86c: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB04u;
            goto label_27ab04;
        }
    }
    ctx->pc = 0x27A870u;
label_27a870:
    // 0x27a870: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x27a870u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_27a874:
    // 0x27a874: 0x46160242  mul.s       $f9, $f0, $f22
    ctx->pc = 0x27a874u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_27a878:
    // 0x27a878: 0x460952c1  sub.s       $f11, $f10, $f9
    ctx->pc = 0x27a878u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_27a87c:
    // 0x27a87c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x27a87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a880:
    // 0x27a880: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a884:
    // 0x27a884: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x27a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a888:
    // 0x27a888: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27a888u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27a88c:
    // 0x27a88c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x27a88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a890:
    // 0x27a890: 0xe7a20230  swc1        $f2, 0x230($sp)
    ctx->pc = 0x27a890u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_27a894:
    // 0x27a894: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27a894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a898:
    // 0x27a898: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27a898u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27a89c:
    // 0x27a89c: 0xe7a30234  swc1        $f3, 0x234($sp)
    ctx->pc = 0x27a89cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 564), bits); }
label_27a8a0:
    // 0x27a8a0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a8a4:
    // 0x27a8a4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27a8a4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27a8a8:
    // 0x27a8a8: 0xe7a10238  swc1        $f1, 0x238($sp)
    ctx->pc = 0x27a8a8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 568), bits); }
label_27a8ac:
    // 0x27a8ac: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x27a8acu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_27a8b0:
    // 0x27a8b0: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x27a8b0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27a8b4:
    // 0x27a8b4: 0x46060842  mul.s       $f1, $f1, $f6
    ctx->pc = 0x27a8b4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[6]);
label_27a8b8:
    // 0x27a8b8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x27a8b8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_27a8bc:
    // 0x27a8bc: 0x46011200  add.s       $f8, $f2, $f1
    ctx->pc = 0x27a8bcu;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27a8c0:
    // 0x27a8c0: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x27a8c0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a8c4:
    // 0x27a8c4: 0x0  nop
    ctx->pc = 0x27a8c4u;
    // NOP
label_27a8c8:
    // 0x27a8c8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27a8cc:
    if (ctx->pc == 0x27A8CCu) {
        ctx->pc = 0x27A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8C8u;
        // 0x27a8cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8D0u;
        goto label_27a8d0;
    }
    ctx->pc = 0x27A8C8u;
    {
        const bool branch_taken_0x27a8c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8C8u;
        // 0x27a8cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8c8) {
            ctx->pc = 0x27A8E0u;
            goto label_27a8e0;
        }
    }
    ctx->pc = 0x27A8D0u;
label_27a8d0:
    // 0x27a8d0: 0x460b4036  c.le.s      $f8, $f11
    ctx->pc = 0x27a8d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a8d4:
    // 0x27a8d4: 0x0  nop
    ctx->pc = 0x27a8d4u;
    // NOP
label_27a8d8:
    // 0x27a8d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a8dc:
    if (ctx->pc == 0x27A8DCu) {
        ctx->pc = 0x27A8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8D8u;
        // 0x27a8dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8E0u;
        goto label_27a8e0;
    }
    ctx->pc = 0x27A8D8u;
    {
        const bool branch_taken_0x27a8d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a8d8) {
            ctx->pc = 0x27A8DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A8D8u;
            // 0x27a8dc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A8E0u;
            goto label_27a8e0;
        }
    }
    ctx->pc = 0x27A8E0u;
label_27a8e0:
    // 0x27a8e0: 0x10600087  beqz        $v1, . + 4 + (0x87 << 2)
label_27a8e4:
    if (ctx->pc == 0x27A8E4u) {
        ctx->pc = 0x27A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8E0u;
        // 0x27a8e4: 0xc7a30238  lwc1        $f3, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A8E8u;
        goto label_27a8e8;
    }
    ctx->pc = 0x27A8E0u;
    {
        const bool branch_taken_0x27a8e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A8E0u;
        // 0x27a8e4: 0xc7a30238  lwc1        $f3, 0x238($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a8e0) {
            ctx->pc = 0x27AB00u;
            goto label_27ab00;
        }
    }
    ctx->pc = 0x27A8E8u;
label_27a8e8:
    // 0x27a8e8: 0xc7a40214  lwc1        $f4, 0x214($sp)
    ctx->pc = 0x27a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 532)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a8ec:
    // 0x27a8ec: 0xc7a20234  lwc1        $f2, 0x234($sp)
    ctx->pc = 0x27a8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 564)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a8f0:
    // 0x27a8f0: 0xc7a70218  lwc1        $f7, 0x218($sp)
    ctx->pc = 0x27a8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27a8f4:
    // 0x27a8f4: 0x46041942  mul.s       $f5, $f3, $f4
    ctx->pc = 0x27a8f4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_27a8f8:
    // 0x27a8f8: 0xc7a00230  lwc1        $f0, 0x230($sp)
    ctx->pc = 0x27a8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a8fc:
    // 0x27a8fc: 0xc7a10210  lwc1        $f1, 0x210($sp)
    ctx->pc = 0x27a8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a900:
    // 0x27a900: 0x46071182  mul.s       $f6, $f2, $f7
    ctx->pc = 0x27a900u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_27a904:
    // 0x27a904: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x27a904u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27a908:
    // 0x27a908: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x27a908u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27a90c:
    // 0x27a90c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27a90cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_27a910:
    // 0x27a910: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x27a910u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_27a914:
    // 0x27a914: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x27a914u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_27a918:
    // 0x27a918: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x27a918u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_27a91c:
    // 0x27a91c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27a91cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_27a920:
    // 0x27a920: 0xe7a60250  swc1        $f6, 0x250($sp)
    ctx->pc = 0x27a920u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 592), bits); }
label_27a924:
    // 0x27a924: 0xe7a40258  swc1        $f4, 0x258($sp)
    ctx->pc = 0x27a924u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 600), bits); }
label_27a928:
    // 0x27a928: 0xe7a30254  swc1        $f3, 0x254($sp)
    ctx->pc = 0x27a928u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 596), bits); }
label_27a92c:
    // 0x27a92c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x27a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a930:
    // 0x27a930: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x27a930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a934:
    // 0x27a934: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x27a934u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_27a938:
    // 0x27a938: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x27a938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a93c:
    // 0x27a93c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27a93cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_27a940:
    // 0x27a940: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27a940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27a944:
    // 0x27a944: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x27a944u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_27a948:
    // 0x27a948: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x27a948u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27a94c:
    // 0x27a94c: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x27a94cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a950:
    // 0x27a950: 0x0  nop
    ctx->pc = 0x27a950u;
    // NOP
label_27a954:
    // 0x27a954: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_27a958:
    if (ctx->pc == 0x27A958u) {
        ctx->pc = 0x27A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A954u;
        // 0x27a958: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A95Cu;
        goto label_27a95c;
    }
    ctx->pc = 0x27A954u;
    {
        const bool branch_taken_0x27a954 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A954u;
        // 0x27a958: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a954) {
            ctx->pc = 0x27A970u;
            goto label_27a970;
        }
    }
    ctx->pc = 0x27A95Cu;
label_27a95c:
    // 0x27a95c: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x27a95cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_27a960:
    // 0x27a960: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x27a960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a964:
    // 0x27a964: 0x0  nop
    ctx->pc = 0x27a964u;
    // NOP
label_27a968:
    // 0x27a968: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a96c:
    if (ctx->pc == 0x27A96Cu) {
        ctx->pc = 0x27A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A968u;
        // 0x27a96c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A970u;
        goto label_27a970;
    }
    ctx->pc = 0x27A968u;
    {
        const bool branch_taken_0x27a968 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a968) {
            ctx->pc = 0x27A96Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A968u;
            // 0x27a96c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A970u;
            goto label_27a970;
        }
    }
    ctx->pc = 0x27A970u;
label_27a970:
    // 0x27a970: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
label_27a974:
    if (ctx->pc == 0x27A974u) {
        ctx->pc = 0x27A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A970u;
        // 0x27a974: 0xc7a00250  lwc1        $f0, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A978u;
        goto label_27a978;
    }
    ctx->pc = 0x27A970u;
    {
        const bool branch_taken_0x27a970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27A974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A970u;
        // 0x27a974: 0xc7a00250  lwc1        $f0, 0x250($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 592)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a970) {
            ctx->pc = 0x27AB00u;
            goto label_27ab00;
        }
    }
    ctx->pc = 0x27A978u;
label_27a978:
    // 0x27a978: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x27a978u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27a97c:
    // 0x27a97c: 0xc7a30220  lwc1        $f3, 0x220($sp)
    ctx->pc = 0x27a97cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27a980:
    // 0x27a980: 0xc7a20224  lwc1        $f2, 0x224($sp)
    ctx->pc = 0x27a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27a984:
    // 0x27a984: 0xc7a40254  lwc1        $f4, 0x254($sp)
    ctx->pc = 0x27a984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27a988:
    // 0x27a988: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x27a988u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_27a98c:
    // 0x27a98c: 0xc7a10228  lwc1        $f1, 0x228($sp)
    ctx->pc = 0x27a98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27a990:
    // 0x27a990: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27a990u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27a994:
    // 0x27a994: 0xc7a00258  lwc1        $f0, 0x258($sp)
    ctx->pc = 0x27a994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27a998:
    // 0x27a998: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x27a998u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_27a99c:
    // 0x27a99c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x27a99cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_27a9a0:
    // 0x27a9a0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x27a9a0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_27a9a4:
    // 0x27a9a4: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x27a9a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a9a8:
    // 0x27a9a8: 0x0  nop
    ctx->pc = 0x27a9a8u;
    // NOP
label_27a9ac:
    // 0x27a9ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27a9b0:
    if (ctx->pc == 0x27A9B0u) {
        ctx->pc = 0x27A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9ACu;
        // 0x27a9b0: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9B4u;
        goto label_27a9b4;
    }
    ctx->pc = 0x27A9ACu;
    {
        const bool branch_taken_0x27a9ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27A9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9ACu;
        // 0x27a9b0: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27a9ac) {
            ctx->pc = 0x27A9C4u;
            goto label_27a9c4;
        }
    }
    ctx->pc = 0x27A9B4u;
label_27a9b4:
    // 0x27a9b4: 0x460b1836  c.le.s      $f3, $f11
    ctx->pc = 0x27a9b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27a9b8:
    // 0x27a9b8: 0x0  nop
    ctx->pc = 0x27a9b8u;
    // NOP
label_27a9bc:
    // 0x27a9bc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27a9c0:
    if (ctx->pc == 0x27A9C0u) {
        ctx->pc = 0x27A9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9BCu;
        // 0x27a9c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9C4u;
        goto label_27a9c4;
    }
    ctx->pc = 0x27A9BCu;
    {
        const bool branch_taken_0x27a9bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27a9bc) {
            ctx->pc = 0x27A9C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A9BCu;
            // 0x27a9c0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A9C4u;
            goto label_27a9c4;
        }
    }
    ctx->pc = 0x27A9C4u;
label_27a9c4:
    // 0x27a9c4: 0x5060004f  beql        $v1, $zero, . + 4 + (0x4F << 2)
label_27a9c8:
    if (ctx->pc == 0x27A9C8u) {
        ctx->pc = 0x27A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27A9C4u;
        // 0x27a9c8: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27A9CCu;
        goto label_27a9cc;
    }
    ctx->pc = 0x27A9C4u;
    {
        const bool branch_taken_0x27a9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27a9c4) {
            ctx->pc = 0x27A9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27A9C4u;
            // 0x27a9c8: 0x97a20200  lhu         $v0, 0x200($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB04u;
            goto label_27ab04;
        }
    }
    ctx->pc = 0x27A9CCu;
label_27a9cc:
    // 0x27a9cc: 0x460a6303  div.s       $f12, $f12, $f10
    ctx->pc = 0x27a9ccu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[10]);
label_27a9d0:
    // 0x27a9d0: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x27a9d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_27a9d4:
    // 0x27a9d4: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x27a9d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27a9d8:
    // 0x27a9d8: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x27a9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27a9dc:
    // 0x27a9dc: 0xb3a50273  sdl         $a1, 0x273($sp)
    ctx->pc = 0x27a9dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 627); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_27a9e0:
    // 0x27a9e0: 0xb7a5026c  sdr         $a1, 0x26C($sp)
    ctx->pc = 0x27a9e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 620); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27a9e4:
    // 0x27a9e4: 0xafa80274  sw          $t0, 0x274($sp)
    ctx->pc = 0x27a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 8));
label_27a9e8:
    // 0x27a9e8: 0xafa70278  sw          $a3, 0x278($sp)
    ctx->pc = 0x27a9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 7));
label_27a9ec:
    // 0x27a9ec: 0xafa2027c  sw          $v0, 0x27C($sp)
    ctx->pc = 0x27a9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 2));
label_27a9f0:
    // 0x27a9f0: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x27a9f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
label_27a9f4:
    // 0x27a9f4: 0xafa60284  sw          $a2, 0x284($sp)
    ctx->pc = 0x27a9f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 6));
label_27a9f8:
    // 0x27a9f8: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x27a9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27a9fc:
    // 0x27a9fc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27a9fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa00:
    // 0x27aa00: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x27aa00u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_27aa04:
    // 0x27aa04: 0xe7a70290  swc1        $f7, 0x290($sp)
    ctx->pc = 0x27aa04u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 656), bits); }
label_27aa08:
    // 0x27aa08: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa0c:
    // 0x27aa0c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x27aa0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_27aa10:
    // 0x27aa10: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x27aa10u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_27aa14:
    // 0x27aa14: 0xe7a60294  swc1        $f6, 0x294($sp)
    ctx->pc = 0x27aa14u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 660), bits); }
label_27aa18:
    // 0x27aa18: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x27aa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27aa1c:
    // 0x27aa1c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27aa1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa20:
    // 0x27aa20: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27aa20u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_27aa24:
    // 0x27aa24: 0xe7a50298  swc1        $f5, 0x298($sp)
    ctx->pc = 0x27aa24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 664), bits); }
label_27aa28:
    // 0x27aa28: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x27aa28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27aa2c:
    // 0x27aa2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27aa2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa30:
    // 0x27aa30: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x27aa30u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_27aa34:
    // 0x27aa34: 0xe7a202a0  swc1        $f2, 0x2A0($sp)
    ctx->pc = 0x27aa34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 672), bits); }
label_27aa38:
    // 0x27aa38: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x27aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa3c:
    // 0x27aa3c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x27aa3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27aa40:
    // 0x27aa40: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27aa40u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_27aa44:
    // 0x27aa44: 0xe7a402a4  swc1        $f4, 0x2A4($sp)
    ctx->pc = 0x27aa44u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 676), bits); }
label_27aa48:
    // 0x27aa48: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x27aa48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27aa4c:
    // 0x27aa4c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27aa4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aa50:
    // 0x27aa50: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27aa50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27aa54:
    // 0x27aa54: 0xe7a102a8  swc1        $f1, 0x2A8($sp)
    ctx->pc = 0x27aa54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 680), bits); }
label_27aa58:
    // 0x27aa58: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x27aa58u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_27aa5c:
    // 0x27aa5c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x27aa5cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_27aa60:
    // 0x27aa60: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x27aa60u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_27aa64:
    // 0x27aa64: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x27aa64u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_27aa68:
    // 0x27aa68: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x27aa68u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_27aa6c:
    // 0x27aa6c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27aa6cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_27aa70:
    // 0x27aa70: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x27aa70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_27aa74:
    // 0x27aa74: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x27aa74u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_27aa78:
    // 0x27aa78: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x27aa78u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_27aa7c:
    // 0x27aa7c: 0xe7a30268  swc1        $f3, 0x268($sp)
    ctx->pc = 0x27aa7cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_27aa80:
    // 0x27aa80: 0xe7a20264  swc1        $f2, 0x264($sp)
    ctx->pc = 0x27aa80u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_27aa84:
    // 0x27aa84: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x27aa84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_27aa88:
    // 0x27aa88: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x27aa88u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_27aa8c:
    // 0x27aa8c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x27aa8cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_27aa90:
    // 0x27aa90: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x27aa90u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_27aa94:
    // 0x27aa94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x27aa94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_27aa98:
    // 0x27aa98: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x27aa98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_27aa9c:
    // 0x27aa9c: 0x46000004  c1          0x4
    ctx->pc = 0x27aa9cu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_27aaa0:
    // 0x27aaa0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x27aaa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27aaa4:
    // 0x27aaa4: 0x0  nop
    ctx->pc = 0x27aaa4u;
    // NOP
label_27aaa8:
    // 0x27aaa8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_27aaac:
    if (ctx->pc == 0x27AAACu) {
        ctx->pc = 0x27AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAA8u;
        // 0x27aaac: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AAB0u;
        goto label_27aab0;
    }
    ctx->pc = 0x27AAA8u;
    {
        const bool branch_taken_0x27aaa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27AAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAA8u;
        // 0x27aaac: 0x46000106  mov.s       $f4, $f0 (Delay Slot)
        ctx->f[4] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aaa8) {
            ctx->pc = 0x27AAC0u;
            goto label_27aac0;
        }
    }
    ctx->pc = 0x27AAB0u;
label_27aab0:
    // 0x27aab0: 0x4600a103  div.s       $f4, $f20, $f0
    ctx->pc = 0x27aab0u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_27aab4:
    // 0x27aab4: 0x10000004  b           . + 4 + (0x4 << 2)
label_27aab8:
    if (ctx->pc == 0x27AAB8u) {
        ctx->pc = 0x27AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAB4u;
        // 0x27aab8: 0xc7a00260  lwc1        $f0, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AABCu;
        goto label_27aabc;
    }
    ctx->pc = 0x27AAB4u;
    {
        const bool branch_taken_0x27aab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAB4u;
        // 0x27aab8: 0xc7a00260  lwc1        $f0, 0x260($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27aab4) {
            ctx->pc = 0x27AAC8u;
            goto label_27aac8;
        }
    }
    ctx->pc = 0x27AABCu;
label_27aabc:
    // 0x27aabc: 0x0  nop
    ctx->pc = 0x27aabcu;
    // NOP
label_27aac0:
    // 0x27aac0: 0xc7a00260  lwc1        $f0, 0x260($sp)
    ctx->pc = 0x27aac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27aac4:
    // 0x27aac4: 0x0  nop
    ctx->pc = 0x27aac4u;
    // NOP
label_27aac8:
    // 0x27aac8: 0xc7a10264  lwc1        $f1, 0x264($sp)
    ctx->pc = 0x27aac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27aacc:
    // 0x27aacc: 0xc7a20268  lwc1        $f2, 0x268($sp)
    ctx->pc = 0x27aaccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 616)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27aad0:
    // 0x27aad0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x27aad0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_27aad4:
    // 0x27aad4: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x27aad4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_27aad8:
    // 0x27aad8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x27aad8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_27aadc:
    // 0x27aadc: 0xe7a00260  swc1        $f0, 0x260($sp)
    ctx->pc = 0x27aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 608), bits); }
label_27aae0:
    // 0x27aae0: 0xe7a10264  swc1        $f1, 0x264($sp)
    ctx->pc = 0x27aae0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 612), bits); }
label_27aae4:
    // 0x27aae4: 0xe7a20268  swc1        $f2, 0x268($sp)
    ctx->pc = 0x27aae4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 616), bits); }
label_27aae8:
    // 0x27aae8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x27aae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27aaec:
    // 0x27aaec: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x27aaecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_27aaf0:
    // 0x27aaf0: 0x2e0f809  jalr        $s7
label_27aaf4:
    if (ctx->pc == 0x27AAF4u) {
        ctx->pc = 0x27AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAF0u;
        // 0x27aaf4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AAF8u;
        goto label_27aaf8;
    }
    ctx->pc = 0x27AAF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x27AAF8u);
        ctx->pc = 0x27AAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAF0u;
        // 0x27aaf4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AAF0u, 0x27AAF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27AAF8u;
label_27aaf8:
    // 0x27aaf8: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_27aafc:
    if (ctx->pc == 0x27AAFCu) {
        ctx->pc = 0x27AAFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AAF8u;
        // 0x27aafc: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB00u;
        goto label_27ab00;
    }
    ctx->pc = 0x27AAF8u;
    {
        const bool branch_taken_0x27aaf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27aaf8) {
            ctx->pc = 0x27AAFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AAF8u;
            // 0x27aafc: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27AB50u;
            goto label_27ab50;
        }
    }
    ctx->pc = 0x27AB00u;
label_27ab00:
    // 0x27ab00: 0x97a20200  lhu         $v0, 0x200($sp)
    ctx->pc = 0x27ab00u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 512)));
label_27ab04:
    // 0x27ab04: 0x26230001  addiu       $v1, $s1, 0x1
    ctx->pc = 0x27ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27ab08:
    // 0x27ab08: 0x97a40202  lhu         $a0, 0x202($sp)
    ctx->pc = 0x27ab08u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 514)));
label_27ab0c:
    // 0x27ab0c: 0x3071ffff  andi        $s1, $v1, 0xFFFF
    ctx->pc = 0x27ab0cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_27ab10:
    // 0x27ab10: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27ab14:
    // 0x27ab14: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x27ab14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27ab18:
    // 0x27ab18: 0x5440ff0f  bnel        $v0, $zero, . + 4 + (-0xF1 << 2)
label_27ab1c:
    if (ctx->pc == 0x27AB1Cu) {
        ctx->pc = 0x27AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB18u;
        // 0x27ab1c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB20u;
        goto label_27ab20;
    }
    ctx->pc = 0x27AB18u;
    {
        const bool branch_taken_0x27ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ab18) {
            ctx->pc = 0x27AB1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27AB18u;
            // 0x27ab1c: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27A758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a758;
        }
    }
    ctx->pc = 0x27AB20u;
label_27ab20:
    // 0x27ab20: 0x8fa301d8  lw          $v1, 0x1D8($sp)
    ctx->pc = 0x27ab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_27ab24:
    // 0x27ab24: 0x263102b  sltu        $v0, $s3, $v1
    ctx->pc = 0x27ab24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_27ab28:
    // 0x27ab28: 0x1440fe83  bnez        $v0, . + 4 + (-0x17D << 2)
label_27ab2c:
    if (ctx->pc == 0x27AB2Cu) {
        ctx->pc = 0x27AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB28u;
        // 0x27ab2c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB30u;
        goto label_27ab30;
    }
    ctx->pc = 0x27AB28u;
    {
        const bool branch_taken_0x27ab28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27AB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB28u;
        // 0x27ab2c: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab28) {
            ctx->pc = 0x27A538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27a538;
        }
    }
    ctx->pc = 0x27AB30u;
label_27ab30:
    // 0x27ab30: 0x10000007  b           . + 4 + (0x7 << 2)
label_27ab34:
    if (ctx->pc == 0x27AB34u) {
        ctx->pc = 0x27AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB30u;
        // 0x27ab34: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB38u;
        goto label_27ab38;
    }
    ctx->pc = 0x27AB30u;
    {
        const bool branch_taken_0x27ab30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB30u;
        // 0x27ab34: 0x7bb00350  lq          $s0, 0x350($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ab30) {
            ctx->pc = 0x27AB50u;
            goto label_27ab50;
        }
    }
    ctx->pc = 0x27AB38u;
label_27ab38:
    // 0x27ab38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27ab38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ab3c:
    // 0x27ab3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x27ab3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_27ab40:
    // 0x27ab40: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x27ab40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_27ab44:
    // 0x27ab44: 0xc09e65a  jal         func_279968
label_27ab48:
    if (ctx->pc == 0x27AB48u) {
        ctx->pc = 0x27AB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB44u;
        // 0x27ab48: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB4Cu;
        goto label_27ab4c;
    }
    ctx->pc = 0x27AB44u;
    SET_GPR_U32(ctx, 31, 0x27AB4Cu);
    ctx->pc = 0x27AB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AB44u;
    // 0x27ab48: 0x3c0402d  daddu       $t0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279968u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x279968u, 0x27AB44u, 0x27AB4Cu)) {
        return;
    }
    ctx->pc = 0x27AB4Cu;
label_27ab4c:
    // 0x27ab4c: 0x7bb00350  lq          $s0, 0x350($sp)
    ctx->pc = 0x27ab4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 848)));
label_27ab50:
    // 0x27ab50: 0x7bb10340  lq          $s1, 0x340($sp)
    ctx->pc = 0x27ab50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 832)));
label_27ab54:
    // 0x27ab54: 0x7bb20330  lq          $s2, 0x330($sp)
    ctx->pc = 0x27ab54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_27ab58:
    // 0x27ab58: 0x7bb30320  lq          $s3, 0x320($sp)
    ctx->pc = 0x27ab58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_27ab5c:
    // 0x27ab5c: 0x7bb40310  lq          $s4, 0x310($sp)
    ctx->pc = 0x27ab5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_27ab60:
    // 0x27ab60: 0x7bb50300  lq          $s5, 0x300($sp)
    ctx->pc = 0x27ab60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_27ab64:
    // 0x27ab64: 0x7bb602f0  lq          $s6, 0x2F0($sp)
    ctx->pc = 0x27ab64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_27ab68:
    // 0x27ab68: 0x7bb702e0  lq          $s7, 0x2E0($sp)
    ctx->pc = 0x27ab68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_27ab6c:
    // 0x27ab6c: 0x7bbe02d0  lq          $fp, 0x2D0($sp)
    ctx->pc = 0x27ab6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_27ab70:
    // 0x27ab70: 0xdfbf02c0  ld          $ra, 0x2C0($sp)
    ctx->pc = 0x27ab70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 704)));
label_27ab74:
    // 0x27ab74: 0xc7b70378  lwc1        $f23, 0x378($sp)
    ctx->pc = 0x27ab74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 888)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_27ab78:
    // 0x27ab78: 0xc7b60370  lwc1        $f22, 0x370($sp)
    ctx->pc = 0x27ab78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_27ab7c:
    // 0x27ab7c: 0xc7b50368  lwc1        $f21, 0x368($sp)
    ctx->pc = 0x27ab7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 872)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_27ab80:
    // 0x27ab80: 0xc7b40360  lwc1        $f20, 0x360($sp)
    ctx->pc = 0x27ab80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 864)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_27ab84:
    // 0x27ab84: 0x3e00008  jr          $ra
label_27ab88:
    if (ctx->pc == 0x27AB88u) {
        ctx->pc = 0x27AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB84u;
        // 0x27ab88: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27AB8Cu;
        goto label_27ab8c;
    }
    ctx->pc = 0x27AB84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AB84u;
        // 0x27ab88: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AB84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AB8Cu;
label_27ab8c:
    // 0x27ab8c: 0x0  nop
    ctx->pc = 0x27ab8cu;
    // NOP
    ctx->pc = 0x27ab90u;
}
