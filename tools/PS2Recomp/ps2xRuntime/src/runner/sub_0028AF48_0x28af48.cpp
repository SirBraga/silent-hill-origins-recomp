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

// Function: sub_0028AF48
// Address: 0x28af48 - 0x28b648
void sub_0028AF48_0x28af48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028AF48_0x28af48");
#endif

    switch (ctx->pc) {
        case 0x28af48u: goto label_28af48;
        case 0x28af4cu: goto label_28af4c;
        case 0x28af50u: goto label_28af50;
        case 0x28af54u: goto label_28af54;
        case 0x28af58u: goto label_28af58;
        case 0x28af5cu: goto label_28af5c;
        case 0x28af60u: goto label_28af60;
        case 0x28af64u: goto label_28af64;
        case 0x28af68u: goto label_28af68;
        case 0x28af6cu: goto label_28af6c;
        case 0x28af70u: goto label_28af70;
        case 0x28af74u: goto label_28af74;
        case 0x28af78u: goto label_28af78;
        case 0x28af7cu: goto label_28af7c;
        case 0x28af80u: goto label_28af80;
        case 0x28af84u: goto label_28af84;
        case 0x28af88u: goto label_28af88;
        case 0x28af8cu: goto label_28af8c;
        case 0x28af90u: goto label_28af90;
        case 0x28af94u: goto label_28af94;
        case 0x28af98u: goto label_28af98;
        case 0x28af9cu: goto label_28af9c;
        case 0x28afa0u: goto label_28afa0;
        case 0x28afa4u: goto label_28afa4;
        case 0x28afa8u: goto label_28afa8;
        case 0x28afacu: goto label_28afac;
        case 0x28afb0u: goto label_28afb0;
        case 0x28afb4u: goto label_28afb4;
        case 0x28afb8u: goto label_28afb8;
        case 0x28afbcu: goto label_28afbc;
        case 0x28afc0u: goto label_28afc0;
        case 0x28afc4u: goto label_28afc4;
        case 0x28afc8u: goto label_28afc8;
        case 0x28afccu: goto label_28afcc;
        case 0x28afd0u: goto label_28afd0;
        case 0x28afd4u: goto label_28afd4;
        case 0x28afd8u: goto label_28afd8;
        case 0x28afdcu: goto label_28afdc;
        case 0x28afe0u: goto label_28afe0;
        case 0x28afe4u: goto label_28afe4;
        case 0x28afe8u: goto label_28afe8;
        case 0x28afecu: goto label_28afec;
        case 0x28aff0u: goto label_28aff0;
        case 0x28aff4u: goto label_28aff4;
        case 0x28aff8u: goto label_28aff8;
        case 0x28affcu: goto label_28affc;
        case 0x28b000u: goto label_28b000;
        case 0x28b004u: goto label_28b004;
        case 0x28b008u: goto label_28b008;
        case 0x28b00cu: goto label_28b00c;
        case 0x28b010u: goto label_28b010;
        case 0x28b014u: goto label_28b014;
        case 0x28b018u: goto label_28b018;
        case 0x28b01cu: goto label_28b01c;
        case 0x28b020u: goto label_28b020;
        case 0x28b024u: goto label_28b024;
        case 0x28b028u: goto label_28b028;
        case 0x28b02cu: goto label_28b02c;
        case 0x28b030u: goto label_28b030;
        case 0x28b034u: goto label_28b034;
        case 0x28b038u: goto label_28b038;
        case 0x28b03cu: goto label_28b03c;
        case 0x28b040u: goto label_28b040;
        case 0x28b044u: goto label_28b044;
        case 0x28b048u: goto label_28b048;
        case 0x28b04cu: goto label_28b04c;
        case 0x28b050u: goto label_28b050;
        case 0x28b054u: goto label_28b054;
        case 0x28b058u: goto label_28b058;
        case 0x28b05cu: goto label_28b05c;
        case 0x28b060u: goto label_28b060;
        case 0x28b064u: goto label_28b064;
        case 0x28b068u: goto label_28b068;
        case 0x28b06cu: goto label_28b06c;
        case 0x28b070u: goto label_28b070;
        case 0x28b074u: goto label_28b074;
        case 0x28b078u: goto label_28b078;
        case 0x28b07cu: goto label_28b07c;
        case 0x28b080u: goto label_28b080;
        case 0x28b084u: goto label_28b084;
        case 0x28b088u: goto label_28b088;
        case 0x28b08cu: goto label_28b08c;
        case 0x28b090u: goto label_28b090;
        case 0x28b094u: goto label_28b094;
        case 0x28b098u: goto label_28b098;
        case 0x28b09cu: goto label_28b09c;
        case 0x28b0a0u: goto label_28b0a0;
        case 0x28b0a4u: goto label_28b0a4;
        case 0x28b0a8u: goto label_28b0a8;
        case 0x28b0acu: goto label_28b0ac;
        case 0x28b0b0u: goto label_28b0b0;
        case 0x28b0b4u: goto label_28b0b4;
        case 0x28b0b8u: goto label_28b0b8;
        case 0x28b0bcu: goto label_28b0bc;
        case 0x28b0c0u: goto label_28b0c0;
        case 0x28b0c4u: goto label_28b0c4;
        case 0x28b0c8u: goto label_28b0c8;
        case 0x28b0ccu: goto label_28b0cc;
        case 0x28b0d0u: goto label_28b0d0;
        case 0x28b0d4u: goto label_28b0d4;
        case 0x28b0d8u: goto label_28b0d8;
        case 0x28b0dcu: goto label_28b0dc;
        case 0x28b0e0u: goto label_28b0e0;
        case 0x28b0e4u: goto label_28b0e4;
        case 0x28b0e8u: goto label_28b0e8;
        case 0x28b0ecu: goto label_28b0ec;
        case 0x28b0f0u: goto label_28b0f0;
        case 0x28b0f4u: goto label_28b0f4;
        case 0x28b0f8u: goto label_28b0f8;
        case 0x28b0fcu: goto label_28b0fc;
        case 0x28b100u: goto label_28b100;
        case 0x28b104u: goto label_28b104;
        case 0x28b108u: goto label_28b108;
        case 0x28b10cu: goto label_28b10c;
        case 0x28b110u: goto label_28b110;
        case 0x28b114u: goto label_28b114;
        case 0x28b118u: goto label_28b118;
        case 0x28b11cu: goto label_28b11c;
        case 0x28b120u: goto label_28b120;
        case 0x28b124u: goto label_28b124;
        case 0x28b128u: goto label_28b128;
        case 0x28b12cu: goto label_28b12c;
        case 0x28b130u: goto label_28b130;
        case 0x28b134u: goto label_28b134;
        case 0x28b138u: goto label_28b138;
        case 0x28b13cu: goto label_28b13c;
        case 0x28b140u: goto label_28b140;
        case 0x28b144u: goto label_28b144;
        case 0x28b148u: goto label_28b148;
        case 0x28b14cu: goto label_28b14c;
        case 0x28b150u: goto label_28b150;
        case 0x28b154u: goto label_28b154;
        case 0x28b158u: goto label_28b158;
        case 0x28b15cu: goto label_28b15c;
        case 0x28b160u: goto label_28b160;
        case 0x28b164u: goto label_28b164;
        case 0x28b168u: goto label_28b168;
        case 0x28b16cu: goto label_28b16c;
        case 0x28b170u: goto label_28b170;
        case 0x28b174u: goto label_28b174;
        case 0x28b178u: goto label_28b178;
        case 0x28b17cu: goto label_28b17c;
        case 0x28b180u: goto label_28b180;
        case 0x28b184u: goto label_28b184;
        case 0x28b188u: goto label_28b188;
        case 0x28b18cu: goto label_28b18c;
        case 0x28b190u: goto label_28b190;
        case 0x28b194u: goto label_28b194;
        case 0x28b198u: goto label_28b198;
        case 0x28b19cu: goto label_28b19c;
        case 0x28b1a0u: goto label_28b1a0;
        case 0x28b1a4u: goto label_28b1a4;
        case 0x28b1a8u: goto label_28b1a8;
        case 0x28b1acu: goto label_28b1ac;
        case 0x28b1b0u: goto label_28b1b0;
        case 0x28b1b4u: goto label_28b1b4;
        case 0x28b1b8u: goto label_28b1b8;
        case 0x28b1bcu: goto label_28b1bc;
        case 0x28b1c0u: goto label_28b1c0;
        case 0x28b1c4u: goto label_28b1c4;
        case 0x28b1c8u: goto label_28b1c8;
        case 0x28b1ccu: goto label_28b1cc;
        case 0x28b1d0u: goto label_28b1d0;
        case 0x28b1d4u: goto label_28b1d4;
        case 0x28b1d8u: goto label_28b1d8;
        case 0x28b1dcu: goto label_28b1dc;
        case 0x28b1e0u: goto label_28b1e0;
        case 0x28b1e4u: goto label_28b1e4;
        case 0x28b1e8u: goto label_28b1e8;
        case 0x28b1ecu: goto label_28b1ec;
        case 0x28b1f0u: goto label_28b1f0;
        case 0x28b1f4u: goto label_28b1f4;
        case 0x28b1f8u: goto label_28b1f8;
        case 0x28b1fcu: goto label_28b1fc;
        case 0x28b200u: goto label_28b200;
        case 0x28b204u: goto label_28b204;
        case 0x28b208u: goto label_28b208;
        case 0x28b20cu: goto label_28b20c;
        case 0x28b210u: goto label_28b210;
        case 0x28b214u: goto label_28b214;
        case 0x28b218u: goto label_28b218;
        case 0x28b21cu: goto label_28b21c;
        case 0x28b220u: goto label_28b220;
        case 0x28b224u: goto label_28b224;
        case 0x28b228u: goto label_28b228;
        case 0x28b22cu: goto label_28b22c;
        case 0x28b230u: goto label_28b230;
        case 0x28b234u: goto label_28b234;
        case 0x28b238u: goto label_28b238;
        case 0x28b23cu: goto label_28b23c;
        case 0x28b240u: goto label_28b240;
        case 0x28b244u: goto label_28b244;
        case 0x28b248u: goto label_28b248;
        case 0x28b24cu: goto label_28b24c;
        case 0x28b250u: goto label_28b250;
        case 0x28b254u: goto label_28b254;
        case 0x28b258u: goto label_28b258;
        case 0x28b25cu: goto label_28b25c;
        case 0x28b260u: goto label_28b260;
        case 0x28b264u: goto label_28b264;
        case 0x28b268u: goto label_28b268;
        case 0x28b26cu: goto label_28b26c;
        case 0x28b270u: goto label_28b270;
        case 0x28b274u: goto label_28b274;
        case 0x28b278u: goto label_28b278;
        case 0x28b27cu: goto label_28b27c;
        case 0x28b280u: goto label_28b280;
        case 0x28b284u: goto label_28b284;
        case 0x28b288u: goto label_28b288;
        case 0x28b28cu: goto label_28b28c;
        case 0x28b290u: goto label_28b290;
        case 0x28b294u: goto label_28b294;
        case 0x28b298u: goto label_28b298;
        case 0x28b29cu: goto label_28b29c;
        case 0x28b2a0u: goto label_28b2a0;
        case 0x28b2a4u: goto label_28b2a4;
        case 0x28b2a8u: goto label_28b2a8;
        case 0x28b2acu: goto label_28b2ac;
        case 0x28b2b0u: goto label_28b2b0;
        case 0x28b2b4u: goto label_28b2b4;
        case 0x28b2b8u: goto label_28b2b8;
        case 0x28b2bcu: goto label_28b2bc;
        case 0x28b2c0u: goto label_28b2c0;
        case 0x28b2c4u: goto label_28b2c4;
        case 0x28b2c8u: goto label_28b2c8;
        case 0x28b2ccu: goto label_28b2cc;
        case 0x28b2d0u: goto label_28b2d0;
        case 0x28b2d4u: goto label_28b2d4;
        case 0x28b2d8u: goto label_28b2d8;
        case 0x28b2dcu: goto label_28b2dc;
        case 0x28b2e0u: goto label_28b2e0;
        case 0x28b2e4u: goto label_28b2e4;
        case 0x28b2e8u: goto label_28b2e8;
        case 0x28b2ecu: goto label_28b2ec;
        case 0x28b2f0u: goto label_28b2f0;
        case 0x28b2f4u: goto label_28b2f4;
        case 0x28b2f8u: goto label_28b2f8;
        case 0x28b2fcu: goto label_28b2fc;
        case 0x28b300u: goto label_28b300;
        case 0x28b304u: goto label_28b304;
        case 0x28b308u: goto label_28b308;
        case 0x28b30cu: goto label_28b30c;
        case 0x28b310u: goto label_28b310;
        case 0x28b314u: goto label_28b314;
        case 0x28b318u: goto label_28b318;
        case 0x28b31cu: goto label_28b31c;
        case 0x28b320u: goto label_28b320;
        case 0x28b324u: goto label_28b324;
        case 0x28b328u: goto label_28b328;
        case 0x28b32cu: goto label_28b32c;
        case 0x28b330u: goto label_28b330;
        case 0x28b334u: goto label_28b334;
        case 0x28b338u: goto label_28b338;
        case 0x28b33cu: goto label_28b33c;
        case 0x28b340u: goto label_28b340;
        case 0x28b344u: goto label_28b344;
        case 0x28b348u: goto label_28b348;
        case 0x28b34cu: goto label_28b34c;
        case 0x28b350u: goto label_28b350;
        case 0x28b354u: goto label_28b354;
        case 0x28b358u: goto label_28b358;
        case 0x28b35cu: goto label_28b35c;
        case 0x28b360u: goto label_28b360;
        case 0x28b364u: goto label_28b364;
        case 0x28b368u: goto label_28b368;
        case 0x28b36cu: goto label_28b36c;
        case 0x28b370u: goto label_28b370;
        case 0x28b374u: goto label_28b374;
        case 0x28b378u: goto label_28b378;
        case 0x28b37cu: goto label_28b37c;
        case 0x28b380u: goto label_28b380;
        case 0x28b384u: goto label_28b384;
        case 0x28b388u: goto label_28b388;
        case 0x28b38cu: goto label_28b38c;
        case 0x28b390u: goto label_28b390;
        case 0x28b394u: goto label_28b394;
        case 0x28b398u: goto label_28b398;
        case 0x28b39cu: goto label_28b39c;
        case 0x28b3a0u: goto label_28b3a0;
        case 0x28b3a4u: goto label_28b3a4;
        case 0x28b3a8u: goto label_28b3a8;
        case 0x28b3acu: goto label_28b3ac;
        case 0x28b3b0u: goto label_28b3b0;
        case 0x28b3b4u: goto label_28b3b4;
        case 0x28b3b8u: goto label_28b3b8;
        case 0x28b3bcu: goto label_28b3bc;
        case 0x28b3c0u: goto label_28b3c0;
        case 0x28b3c4u: goto label_28b3c4;
        case 0x28b3c8u: goto label_28b3c8;
        case 0x28b3ccu: goto label_28b3cc;
        case 0x28b3d0u: goto label_28b3d0;
        case 0x28b3d4u: goto label_28b3d4;
        case 0x28b3d8u: goto label_28b3d8;
        case 0x28b3dcu: goto label_28b3dc;
        case 0x28b3e0u: goto label_28b3e0;
        case 0x28b3e4u: goto label_28b3e4;
        case 0x28b3e8u: goto label_28b3e8;
        case 0x28b3ecu: goto label_28b3ec;
        case 0x28b3f0u: goto label_28b3f0;
        case 0x28b3f4u: goto label_28b3f4;
        case 0x28b3f8u: goto label_28b3f8;
        case 0x28b3fcu: goto label_28b3fc;
        case 0x28b400u: goto label_28b400;
        case 0x28b404u: goto label_28b404;
        case 0x28b408u: goto label_28b408;
        case 0x28b40cu: goto label_28b40c;
        case 0x28b410u: goto label_28b410;
        case 0x28b414u: goto label_28b414;
        case 0x28b418u: goto label_28b418;
        case 0x28b41cu: goto label_28b41c;
        case 0x28b420u: goto label_28b420;
        case 0x28b424u: goto label_28b424;
        case 0x28b428u: goto label_28b428;
        case 0x28b42cu: goto label_28b42c;
        case 0x28b430u: goto label_28b430;
        case 0x28b434u: goto label_28b434;
        case 0x28b438u: goto label_28b438;
        case 0x28b43cu: goto label_28b43c;
        case 0x28b440u: goto label_28b440;
        case 0x28b444u: goto label_28b444;
        case 0x28b448u: goto label_28b448;
        case 0x28b44cu: goto label_28b44c;
        case 0x28b450u: goto label_28b450;
        case 0x28b454u: goto label_28b454;
        case 0x28b458u: goto label_28b458;
        case 0x28b45cu: goto label_28b45c;
        case 0x28b460u: goto label_28b460;
        case 0x28b464u: goto label_28b464;
        case 0x28b468u: goto label_28b468;
        case 0x28b46cu: goto label_28b46c;
        case 0x28b470u: goto label_28b470;
        case 0x28b474u: goto label_28b474;
        case 0x28b478u: goto label_28b478;
        case 0x28b47cu: goto label_28b47c;
        case 0x28b480u: goto label_28b480;
        case 0x28b484u: goto label_28b484;
        case 0x28b488u: goto label_28b488;
        case 0x28b48cu: goto label_28b48c;
        case 0x28b490u: goto label_28b490;
        case 0x28b494u: goto label_28b494;
        case 0x28b498u: goto label_28b498;
        case 0x28b49cu: goto label_28b49c;
        case 0x28b4a0u: goto label_28b4a0;
        case 0x28b4a4u: goto label_28b4a4;
        case 0x28b4a8u: goto label_28b4a8;
        case 0x28b4acu: goto label_28b4ac;
        case 0x28b4b0u: goto label_28b4b0;
        case 0x28b4b4u: goto label_28b4b4;
        case 0x28b4b8u: goto label_28b4b8;
        case 0x28b4bcu: goto label_28b4bc;
        case 0x28b4c0u: goto label_28b4c0;
        case 0x28b4c4u: goto label_28b4c4;
        case 0x28b4c8u: goto label_28b4c8;
        case 0x28b4ccu: goto label_28b4cc;
        case 0x28b4d0u: goto label_28b4d0;
        case 0x28b4d4u: goto label_28b4d4;
        case 0x28b4d8u: goto label_28b4d8;
        case 0x28b4dcu: goto label_28b4dc;
        case 0x28b4e0u: goto label_28b4e0;
        case 0x28b4e4u: goto label_28b4e4;
        case 0x28b4e8u: goto label_28b4e8;
        case 0x28b4ecu: goto label_28b4ec;
        case 0x28b4f0u: goto label_28b4f0;
        case 0x28b4f4u: goto label_28b4f4;
        case 0x28b4f8u: goto label_28b4f8;
        case 0x28b4fcu: goto label_28b4fc;
        case 0x28b500u: goto label_28b500;
        case 0x28b504u: goto label_28b504;
        case 0x28b508u: goto label_28b508;
        case 0x28b50cu: goto label_28b50c;
        case 0x28b510u: goto label_28b510;
        case 0x28b514u: goto label_28b514;
        case 0x28b518u: goto label_28b518;
        case 0x28b51cu: goto label_28b51c;
        case 0x28b520u: goto label_28b520;
        case 0x28b524u: goto label_28b524;
        case 0x28b528u: goto label_28b528;
        case 0x28b52cu: goto label_28b52c;
        case 0x28b530u: goto label_28b530;
        case 0x28b534u: goto label_28b534;
        case 0x28b538u: goto label_28b538;
        case 0x28b53cu: goto label_28b53c;
        case 0x28b540u: goto label_28b540;
        case 0x28b544u: goto label_28b544;
        case 0x28b548u: goto label_28b548;
        case 0x28b54cu: goto label_28b54c;
        case 0x28b550u: goto label_28b550;
        case 0x28b554u: goto label_28b554;
        case 0x28b558u: goto label_28b558;
        case 0x28b55cu: goto label_28b55c;
        case 0x28b560u: goto label_28b560;
        case 0x28b564u: goto label_28b564;
        case 0x28b568u: goto label_28b568;
        case 0x28b56cu: goto label_28b56c;
        case 0x28b570u: goto label_28b570;
        case 0x28b574u: goto label_28b574;
        case 0x28b578u: goto label_28b578;
        case 0x28b57cu: goto label_28b57c;
        case 0x28b580u: goto label_28b580;
        case 0x28b584u: goto label_28b584;
        case 0x28b588u: goto label_28b588;
        case 0x28b58cu: goto label_28b58c;
        case 0x28b590u: goto label_28b590;
        case 0x28b594u: goto label_28b594;
        case 0x28b598u: goto label_28b598;
        case 0x28b59cu: goto label_28b59c;
        case 0x28b5a0u: goto label_28b5a0;
        case 0x28b5a4u: goto label_28b5a4;
        case 0x28b5a8u: goto label_28b5a8;
        case 0x28b5acu: goto label_28b5ac;
        case 0x28b5b0u: goto label_28b5b0;
        case 0x28b5b4u: goto label_28b5b4;
        case 0x28b5b8u: goto label_28b5b8;
        case 0x28b5bcu: goto label_28b5bc;
        case 0x28b5c0u: goto label_28b5c0;
        case 0x28b5c4u: goto label_28b5c4;
        case 0x28b5c8u: goto label_28b5c8;
        case 0x28b5ccu: goto label_28b5cc;
        case 0x28b5d0u: goto label_28b5d0;
        case 0x28b5d4u: goto label_28b5d4;
        case 0x28b5d8u: goto label_28b5d8;
        case 0x28b5dcu: goto label_28b5dc;
        case 0x28b5e0u: goto label_28b5e0;
        case 0x28b5e4u: goto label_28b5e4;
        case 0x28b5e8u: goto label_28b5e8;
        case 0x28b5ecu: goto label_28b5ec;
        case 0x28b5f0u: goto label_28b5f0;
        case 0x28b5f4u: goto label_28b5f4;
        case 0x28b5f8u: goto label_28b5f8;
        case 0x28b5fcu: goto label_28b5fc;
        case 0x28b600u: goto label_28b600;
        case 0x28b604u: goto label_28b604;
        case 0x28b608u: goto label_28b608;
        case 0x28b60cu: goto label_28b60c;
        case 0x28b610u: goto label_28b610;
        case 0x28b614u: goto label_28b614;
        case 0x28b618u: goto label_28b618;
        case 0x28b61cu: goto label_28b61c;
        case 0x28b620u: goto label_28b620;
        case 0x28b624u: goto label_28b624;
        case 0x28b628u: goto label_28b628;
        case 0x28b62cu: goto label_28b62c;
        case 0x28b630u: goto label_28b630;
        case 0x28b634u: goto label_28b634;
        case 0x28b638u: goto label_28b638;
        case 0x28b63cu: goto label_28b63c;
        case 0x28b640u: goto label_28b640;
        case 0x28b644u: goto label_28b644;
        default: break;
    }

    ctx->pc = 0x28af48u;

label_28af48:
    // 0x28af48: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x28af48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_28af4c:
    // 0x28af4c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x28af4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_28af50:
    // 0x28af50: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x28af50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_28af54:
    // 0x28af54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28af54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28af58:
    // 0x28af58: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x28af58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_28af5c:
    // 0x28af5c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28af5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28af60:
    // 0x28af60: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x28af60u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28af64:
    // 0x28af64: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x28af64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_28af68:
    // 0x28af68: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x28af68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_28af6c:
    // 0x28af6c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28af6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28af70:
    // 0x28af70: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28af70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_28af74:
    // 0x28af74: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x28af74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_28af78:
    // 0x28af78: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28af78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_28af7c:
    // 0x28af7c: 0xc093546  jal         func_24D518
label_28af80:
    if (ctx->pc == 0x28AF80u) {
        ctx->pc = 0x28AF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF7Cu;
        // 0x28af80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF84u;
        goto label_28af84;
    }
    ctx->pc = 0x28AF7Cu;
    SET_GPR_U32(ctx, 31, 0x28AF84u);
    ctx->pc = 0x28AF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AF7Cu;
    // 0x28af80: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x28AF7Cu, 0x28AF84u)) {
        return;
    }
    ctx->pc = 0x28AF84u;
label_28af84:
    // 0x28af84: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x28af84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28af88:
    // 0x28af88: 0x144301a4  bne         $v0, $v1, . + 4 + (0x1A4 << 2)
label_28af8c:
    if (ctx->pc == 0x28AF8Cu) {
        ctx->pc = 0x28AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF88u;
        // 0x28af8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AF90u;
        goto label_28af90;
    }
    ctx->pc = 0x28AF88u;
    {
        const bool branch_taken_0x28af88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28AF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AF88u;
        // 0x28af8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28af88) {
            ctx->pc = 0x28B61Cu;
            goto label_28b61c;
        }
    }
    ctx->pc = 0x28AF90u;
label_28af90:
    // 0x28af90: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x28af90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_28af94:
    // 0x28af94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28af94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28af98:
    // 0x28af98: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28af98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28af9c:
    // 0x28af9c: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x28af9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
label_28afa0:
    // 0x28afa0: 0xc092858  jal         func_24A160
label_28afa4:
    if (ctx->pc == 0x28AFA4u) {
        ctx->pc = 0x28AFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA0u;
        // 0x28afa4: 0xae5000b4  sw          $s0, 0xB4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFA8u;
        goto label_28afa8;
    }
    ctx->pc = 0x28AFA0u;
    SET_GPR_U32(ctx, 31, 0x28AFA8u);
    ctx->pc = 0x28AFA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFA0u;
    // 0x28afa4: 0xae5000b4  sw          $s0, 0xB4($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x28AFA0u, 0x28AFA8u)) {
        return;
    }
    ctx->pc = 0x28AFA8u;
label_28afa8:
    // 0x28afa8: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_28afac:
    if (ctx->pc == 0x28AFACu) {
        ctx->pc = 0x28AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA8u;
        // 0x28afac: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFB0u;
        goto label_28afb0;
    }
    ctx->pc = 0x28AFA8u;
    {
        const bool branch_taken_0x28afa8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFA8u;
        // 0x28afac: 0xae4200b0  sw          $v0, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28afa8) {
            ctx->pc = 0x28AFDCu;
            goto label_28afdc;
        }
    }
    ctx->pc = 0x28AFB0u;
label_28afb0:
    // 0x28afb0: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x28afb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
label_28afb4:
    // 0x28afb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28afb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28afb8:
    // 0x28afb8: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x28afb8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
label_28afbc:
    // 0x28afbc: 0xc0928de  jal         func_24A378
label_28afc0:
    if (ctx->pc == 0x28AFC0u) {
        ctx->pc = 0x28AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFBCu;
        // 0x28afc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFC4u;
        goto label_28afc4;
    }
    ctx->pc = 0x28AFBCu;
    SET_GPR_U32(ctx, 31, 0x28AFC4u);
    ctx->pc = 0x28AFC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFBCu;
    // 0x28afc0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x28AFBCu, 0x28AFC4u)) {
        return;
    }
    ctx->pc = 0x28AFC4u;
label_28afc4:
    // 0x28afc4: 0xc09292a  jal         func_24A4A8
label_28afc8:
    if (ctx->pc == 0x28AFC8u) {
        ctx->pc = 0x28AFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFC4u;
        // 0x28afc8: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFCCu;
        goto label_28afcc;
    }
    ctx->pc = 0x28AFC4u;
    SET_GPR_U32(ctx, 31, 0x28AFCCu);
    ctx->pc = 0x28AFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFC4u;
    // 0x28afc8: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28AFC4u, 0x28AFCCu)) {
        return;
    }
    ctx->pc = 0x28AFCCu;
label_28afcc:
    // 0x28afcc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28afccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28afd0:
    // 0x28afd0: 0x103080  sll         $a2, $s0, 2
    ctx->pc = 0x28afd0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_28afd4:
    // 0x28afd4: 0xc0c493d  jal         func_3124F4
label_28afd8:
    if (ctx->pc == 0x28AFD8u) {
        ctx->pc = 0x28AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFD4u;
        // 0x28afd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFDCu;
        goto label_28afdc;
    }
    ctx->pc = 0x28AFD4u;
    SET_GPR_U32(ctx, 31, 0x28AFDCu);
    ctx->pc = 0x28AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFD4u;
    // 0x28afd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x28AFD4u, 0x28AFDCu)) {
        return;
    }
    ctx->pc = 0x28AFDCu;
label_28afdc:
    // 0x28afdc: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x28afdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28afe0:
    // 0x28afe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28afe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28afe4:
    // 0x28afe4: 0xae4000b8  sw          $zero, 0xB8($s2)
    ctx->pc = 0x28afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 184), GPR_U32(ctx, 0));
label_28afe8:
    // 0x28afe8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28afe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28afec:
    // 0x28afec: 0xae4000bc  sw          $zero, 0xBC($s2)
    ctx->pc = 0x28afecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 188), GPR_U32(ctx, 0));
label_28aff0:
    // 0x28aff0: 0xc0a2726  jal         func_289C98
label_28aff4:
    if (ctx->pc == 0x28AFF4u) {
        ctx->pc = 0x28AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF0u;
        // 0x28aff4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28AFF8u;
        goto label_28aff8;
    }
    ctx->pc = 0x28AFF0u;
    SET_GPR_U32(ctx, 31, 0x28AFF8u);
    ctx->pc = 0x28AFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28AFF0u;
    // 0x28aff4: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289C98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289C98u, 0x28AFF0u, 0x28AFF8u)) {
        return;
    }
    ctx->pc = 0x28AFF8u;
label_28aff8:
    // 0x28aff8: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_28affc:
    if (ctx->pc == 0x28AFFCu) {
        ctx->pc = 0x28AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF8u;
        // 0x28affc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B000u;
        goto label_28b000;
    }
    ctx->pc = 0x28AFF8u;
    {
        const bool branch_taken_0x28aff8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28AFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28AFF8u;
        // 0x28affc: 0x3c020029  lui         $v0, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28aff8) {
            ctx->pc = 0x28B058u;
            goto label_28b058;
        }
    }
    ctx->pc = 0x28B000u;
label_28b000:
    // 0x28b000: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x28b000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28b004:
    // 0x28b004: 0xafb30000  sw          $s3, 0x0($sp)
    ctx->pc = 0x28b004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 19));
label_28b008:
    // 0x28b008: 0x2454bd18  addiu       $s4, $v0, -0x42E8
    ctx->pc = 0x28b008u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950168));
label_28b00c:
    // 0x28b00c: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x28b00cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_28b010:
    // 0x28b010: 0xc09292a  jal         func_24A4A8
label_28b014:
    if (ctx->pc == 0x28B014u) {
        ctx->pc = 0x28B014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B010u;
        // 0x28b014: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B018u;
        goto label_28b018;
    }
    ctx->pc = 0x28B010u;
    SET_GPR_U32(ctx, 31, 0x28B018u);
    ctx->pc = 0x28B014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B010u;
    // 0x28b014: 0x3a0982d  daddu       $s3, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B010u, 0x28B018u)) {
        return;
    }
    ctx->pc = 0x28B018u;
label_28b018:
    // 0x28b018: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x28b018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28b01c:
    // 0x28b01c: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28b01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28b020:
    // 0x28b020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b024:
    // 0x28b024: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28b024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28b028:
    // 0x28b028: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28b028u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b02c:
    // 0x28b02c: 0x1211006c  beq         $s0, $s1, . + 4 + (0x6C << 2)
label_28b030:
    if (ctx->pc == 0x28B030u) {
        ctx->pc = 0x28B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B02Cu;
        // 0x28b030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B034u;
        goto label_28b034;
    }
    ctx->pc = 0x28B02Cu;
    {
        const bool branch_taken_0x28b02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B02Cu;
        // 0x28b030: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b02c) {
            ctx->pc = 0x28B1E0u;
            goto label_28b1e0;
        }
    }
    ctx->pc = 0x28B034u;
label_28b034:
    // 0x28b034: 0x0  nop
    ctx->pc = 0x28b034u;
    // NOP
label_28b038:
    // 0x28b038: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28b038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b03c:
    // 0x28b03c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x28b03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b040:
    // 0x28b040: 0x280f809  jalr        $s4
label_28b044:
    if (ctx->pc == 0x28B044u) {
        ctx->pc = 0x28B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B040u;
        // 0x28b044: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B048u;
        goto label_28b048;
    }
    ctx->pc = 0x28B040u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x28B048u);
        ctx->pc = 0x28B044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B040u;
        // 0x28b044: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B040u, 0x28B048u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B048u;
label_28b048:
    // 0x28b048: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28b04c:
    if (ctx->pc == 0x28B04Cu) {
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B048u;
        // 0x28b04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B050u;
        goto label_28b050;
    }
    ctx->pc = 0x28B048u;
    {
        const bool branch_taken_0x28b048 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28B04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B048u;
        // 0x28b04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b048) {
            ctx->pc = 0x28B038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b038;
        }
    }
    ctx->pc = 0x28B050u;
label_28b050:
    // 0x28b050: 0x10000063  b           . + 4 + (0x63 << 2)
label_28b054:
    if (ctx->pc == 0x28B054u) {
        ctx->pc = 0x28B058u;
        goto label_28b058;
    }
    ctx->pc = 0x28B050u;
    {
        const bool branch_taken_0x28b050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b050) {
            ctx->pc = 0x28B1E0u;
            goto label_28b1e0;
        }
    }
    ctx->pc = 0x28B058u;
label_28b058:
    // 0x28b058: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x28b058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28b05c:
    // 0x28b05c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28b060:
    // 0x28b060: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x28b060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_28b064:
    // 0x28b064: 0xc0927be  jal         func_249EF8
label_28b068:
    if (ctx->pc == 0x28B068u) {
        ctx->pc = 0x28B068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B064u;
        // 0x28b068: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B06Cu;
        goto label_28b06c;
    }
    ctx->pc = 0x28B064u;
    SET_GPR_U32(ctx, 31, 0x28B06Cu);
    ctx->pc = 0x28B068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B064u;
    // 0x28b068: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249EF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249EF8u, 0x28B064u, 0x28B06Cu)) {
        return;
    }
    ctx->pc = 0x28B06Cu;
label_28b06c:
    // 0x28b06c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28b070:
    if (ctx->pc == 0x28B070u) {
        ctx->pc = 0x28B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B06Cu;
        // 0x28b070: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B074u;
        goto label_28b074;
    }
    ctx->pc = 0x28B06Cu;
    {
        const bool branch_taken_0x28b06c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B06Cu;
        // 0x28b070: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b06c) {
            ctx->pc = 0x28B07Cu;
            goto label_28b07c;
        }
    }
    ctx->pc = 0x28B074u;
label_28b074:
    // 0x28b074: 0x1000002b  b           . + 4 + (0x2B << 2)
label_28b078:
    if (ctx->pc == 0x28B078u) {
        ctx->pc = 0x28B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B074u;
        // 0x28b078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B07Cu;
        goto label_28b07c;
    }
    ctx->pc = 0x28B074u;
    {
        const bool branch_taken_0x28b074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B074u;
        // 0x28b078: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b074) {
            ctx->pc = 0x28B124u;
            goto label_28b124;
        }
    }
    ctx->pc = 0x28B07Cu;
label_28b07c:
    // 0x28b07c: 0x10800027  beqz        $a0, . + 4 + (0x27 << 2)
label_28b080:
    if (ctx->pc == 0x28B080u) {
        ctx->pc = 0x28B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B07Cu;
        // 0x28b080: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B084u;
        goto label_28b084;
    }
    ctx->pc = 0x28B07Cu;
    {
        const bool branch_taken_0x28b07c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B07Cu;
        // 0x28b080: 0xafa40014  sw          $a0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b07c) {
            ctx->pc = 0x28B11Cu;
            goto label_28b11c;
        }
    }
    ctx->pc = 0x28B084u;
label_28b084:
    // 0x28b084: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x28b084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_28b088:
    // 0x28b088: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x28b088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_28b08c:
    // 0x28b08c: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x28b08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_28b090:
    // 0x28b090: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x28b090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_28b094:
    // 0x28b094: 0x40f809  jalr        $v0
label_28b098:
    if (ctx->pc == 0x28B098u) {
        ctx->pc = 0x28B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B094u;
        // 0x28b098: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B09Cu;
        goto label_28b09c;
    }
    ctx->pc = 0x28B094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28B09Cu);
        ctx->pc = 0x28B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B094u;
        // 0x28b098: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B094u, 0x28B09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B09Cu;
label_28b09c:
    // 0x28b09c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_28b0a0:
    if (ctx->pc == 0x28B0A0u) {
        ctx->pc = 0x28B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B09Cu;
        // 0x28b0a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0A4u;
        goto label_28b0a4;
    }
    ctx->pc = 0x28B09Cu;
    {
        const bool branch_taken_0x28b09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B09Cu;
        // 0x28b0a0: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b09c) {
            ctx->pc = 0x28B0D8u;
            goto label_28b0d8;
        }
    }
    ctx->pc = 0x28B0A4u;
label_28b0a4:
    // 0x28b0a4: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x28b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28b0a8:
    // 0x28b0a8: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_28b0ac:
    // 0x28b0ac: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x28b0acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_28b0b0:
    // 0x28b0b0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28b0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_28b0b4:
    // 0x28b0b4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x28b0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_28b0b8:
    // 0x28b0b8: 0xc092848  jal         func_24A120
label_28b0bc:
    if (ctx->pc == 0x28B0BCu) {
        ctx->pc = 0x28B0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0B8u;
        // 0x28b0bc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0C0u;
        goto label_28b0c0;
    }
    ctx->pc = 0x28B0B8u;
    SET_GPR_U32(ctx, 31, 0x28B0C0u);
    ctx->pc = 0x28B0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0B8u;
    // 0x28b0bc: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x28B0B8u, 0x28B0C0u)) {
        return;
    }
    ctx->pc = 0x28B0C0u;
label_28b0c0:
    // 0x28b0c0: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28b0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_28b0c4:
    // 0x28b0c4: 0xc09281a  jal         func_24A068
label_28b0c8:
    if (ctx->pc == 0x28B0C8u) {
        ctx->pc = 0x28B0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0C4u;
        // 0x28b0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0CCu;
        goto label_28b0cc;
    }
    ctx->pc = 0x28B0C4u;
    SET_GPR_U32(ctx, 31, 0x28B0CCu);
    ctx->pc = 0x28B0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0C4u;
    // 0x28b0c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x28B0C4u, 0x28B0CCu)) {
        return;
    }
    ctx->pc = 0x28B0CCu;
label_28b0cc:
    // 0x28b0cc: 0x10000015  b           . + 4 + (0x15 << 2)
label_28b0d0:
    if (ctx->pc == 0x28B0D0u) {
        ctx->pc = 0x28B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0CCu;
        // 0x28b0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0D4u;
        goto label_28b0d4;
    }
    ctx->pc = 0x28B0CCu;
    {
        const bool branch_taken_0x28b0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0CCu;
        // 0x28b0d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0cc) {
            ctx->pc = 0x28B124u;
            goto label_28b124;
        }
    }
    ctx->pc = 0x28B0D4u;
label_28b0d4:
    // 0x28b0d4: 0x0  nop
    ctx->pc = 0x28b0d4u;
    // NOP
label_28b0d8:
    // 0x28b0d8: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x28b0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28b0dc:
    // 0x28b0dc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_28b0e0:
    if (ctx->pc == 0x28B0E0u) {
        ctx->pc = 0x28B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0DCu;
        // 0x28b0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0E4u;
        goto label_28b0e4;
    }
    ctx->pc = 0x28B0DCu;
    {
        const bool branch_taken_0x28b0dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0DCu;
        // 0x28b0e0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0dc) {
            ctx->pc = 0x28B120u;
            goto label_28b120;
        }
    }
    ctx->pc = 0x28B0E4u;
label_28b0e4:
    // 0x28b0e4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b0e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b0e8:
    // 0x28b0e8: 0xc0a312a  jal         func_28C4A8
label_28b0ec:
    if (ctx->pc == 0x28B0ECu) {
        ctx->pc = 0x28B0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0E8u;
        // 0x28b0ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B0F0u;
        goto label_28b0f0;
    }
    ctx->pc = 0x28B0E8u;
    SET_GPR_U32(ctx, 31, 0x28B0F0u);
    ctx->pc = 0x28B0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B0E8u;
    // 0x28b0ec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28C4A8u, 0x28B0E8u, 0x28B0F0u)) {
        return;
    }
    ctx->pc = 0x28B0F0u;
label_28b0f0:
    // 0x28b0f0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x28b0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28b0f4:
    // 0x28b0f4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x28b0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_28b0f8:
    // 0x28b0f8: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
label_28b0fc:
    if (ctx->pc == 0x28B0FCu) {
        ctx->pc = 0x28B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F8u;
        // 0x28b0fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B100u;
        goto label_28b100;
    }
    ctx->pc = 0x28B0F8u;
    {
        const bool branch_taken_0x28b0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B0F8u;
        // 0x28b0fc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b0f8) {
            ctx->pc = 0x28B074u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b074;
        }
    }
    ctx->pc = 0x28B100u;
label_28b100:
    // 0x28b100: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x28b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_28b104:
    // 0x28b104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28b104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28b108:
    // 0x28b108: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x28b108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b10c:
    // 0x28b10c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_28b110:
    if (ctx->pc == 0x28B110u) {
        ctx->pc = 0x28B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B10Cu;
        // 0x28b110: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B114u;
        goto label_28b114;
    }
    ctx->pc = 0x28B10Cu;
    {
        const bool branch_taken_0x28b10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B10Cu;
        // 0x28b110: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b10c) {
            ctx->pc = 0x28B0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b0e8;
        }
    }
    ctx->pc = 0x28B114u;
label_28b114:
    // 0x28b114: 0x10000003  b           . + 4 + (0x3 << 2)
label_28b118:
    if (ctx->pc == 0x28B118u) {
        ctx->pc = 0x28B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B114u;
        // 0x28b118: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B11Cu;
        goto label_28b11c;
    }
    ctx->pc = 0x28B114u;
    {
        const bool branch_taken_0x28b114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B114u;
        // 0x28b118: 0x27a20010  addiu       $v0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b114) {
            ctx->pc = 0x28B124u;
            goto label_28b124;
        }
    }
    ctx->pc = 0x28B11Cu;
label_28b11c:
    // 0x28b11c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x28b11cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_28b120:
    // 0x28b120: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x28b120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b124:
    // 0x28b124: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_28b128:
    if (ctx->pc == 0x28B128u) {
        ctx->pc = 0x28B128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B124u;
        // 0x28b128: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B12Cu;
        goto label_28b12c;
    }
    ctx->pc = 0x28B124u;
    {
        const bool branch_taken_0x28b124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b124) {
            ctx->pc = 0x28B128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B124u;
            // 0x28b128: 0x8e4400b0  lw          $a0, 0xB0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B134u;
            goto label_28b134;
        }
    }
    ctx->pc = 0x28B12Cu;
label_28b12c:
    // 0x28b12c: 0x1000013b  b           . + 4 + (0x13B << 2)
label_28b130:
    if (ctx->pc == 0x28B130u) {
        ctx->pc = 0x28B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B12Cu;
        // 0x28b130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B134u;
        goto label_28b134;
    }
    ctx->pc = 0x28B12Cu;
    {
        const bool branch_taken_0x28b12c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B12Cu;
        // 0x28b130: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b12c) {
            ctx->pc = 0x28B61Cu;
            goto label_28b61c;
        }
    }
    ctx->pc = 0x28B134u;
label_28b134:
    // 0x28b134: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x28b134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_28b138:
    // 0x28b138: 0x3c020029  lui         $v0, 0x29
    ctx->pc = 0x28b138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)41 << 16));
label_28b13c:
    // 0x28b13c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x28b13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_28b140:
    // 0x28b140: 0x2454bd18  addiu       $s4, $v0, -0x42E8
    ctx->pc = 0x28b140u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950168));
label_28b144:
    // 0x28b144: 0xc09292a  jal         func_24A4A8
label_28b148:
    if (ctx->pc == 0x28B148u) {
        ctx->pc = 0x28B148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B144u;
        // 0x28b148: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B14Cu;
        goto label_28b14c;
    }
    ctx->pc = 0x28B144u;
    SET_GPR_U32(ctx, 31, 0x28B14Cu);
    ctx->pc = 0x28B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B144u;
    // 0x28b148: 0xafb30020  sw          $s3, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B144u, 0x28B14Cu)) {
        return;
    }
    ctx->pc = 0x28B14Cu;
label_28b14c:
    // 0x28b14c: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x28b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28b150:
    // 0x28b150: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x28b150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_28b154:
    // 0x28b154: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b158:
    // 0x28b158: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x28b158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_28b15c:
    // 0x28b15c: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x28b15cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_28b160:
    // 0x28b160: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_28b164:
    if (ctx->pc == 0x28B164u) {
        ctx->pc = 0x28B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B160u;
        // 0x28b164: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B168u;
        goto label_28b168;
    }
    ctx->pc = 0x28B160u;
    {
        const bool branch_taken_0x28b160 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B160u;
        // 0x28b164: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b160) {
            ctx->pc = 0x28B18Cu;
            goto label_28b18c;
        }
    }
    ctx->pc = 0x28B168u;
label_28b168:
    // 0x28b168: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b16c:
    // 0x28b16c: 0x0  nop
    ctx->pc = 0x28b16cu;
    // NOP
label_28b170:
    // 0x28b170: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28b170u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b174:
    // 0x28b174: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x28b174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_28b178:
    // 0x28b178: 0x280f809  jalr        $s4
label_28b17c:
    if (ctx->pc == 0x28B17Cu) {
        ctx->pc = 0x28B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B178u;
        // 0x28b17c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B180u;
        goto label_28b180;
    }
    ctx->pc = 0x28B178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x28B180u);
        ctx->pc = 0x28B17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B178u;
        // 0x28b17c: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B178u, 0x28B180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B180u;
label_28b180:
    // 0x28b180: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_28b184:
    if (ctx->pc == 0x28B184u) {
        ctx->pc = 0x28B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B180u;
        // 0x28b184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B188u;
        goto label_28b188;
    }
    ctx->pc = 0x28B180u;
    {
        const bool branch_taken_0x28b180 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28B184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B180u;
        // 0x28b184: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b180) {
            ctx->pc = 0x28B170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b170;
        }
    }
    ctx->pc = 0x28B188u;
label_28b188:
    // 0x28b188: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x28b188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28b18c:
    // 0x28b18c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_28b190:
    if (ctx->pc == 0x28B190u) {
        ctx->pc = 0x28B194u;
        goto label_28b194;
    }
    ctx->pc = 0x28B18Cu;
    {
        const bool branch_taken_0x28b18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b18c) {
            ctx->pc = 0x28B1E0u;
            goto label_28b1e0;
        }
    }
    ctx->pc = 0x28B194u;
label_28b194:
    // 0x28b194: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_28b198:
    if (ctx->pc == 0x28B198u) {
        ctx->pc = 0x28B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B194u;
        // 0x28b198: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B19Cu;
        goto label_28b19c;
    }
    ctx->pc = 0x28B194u;
    {
        const bool branch_taken_0x28b194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B194u;
        // 0x28b198: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b194) {
            ctx->pc = 0x28B1CCu;
            goto label_28b1cc;
        }
    }
    ctx->pc = 0x28B19Cu;
label_28b19c:
    // 0x28b19c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28b19cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b1a0:
    // 0x28b1a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28b1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_28b1a4:
    // 0x28b1a4: 0x0  nop
    ctx->pc = 0x28b1a4u;
    // NOP
label_28b1a8:
    // 0x28b1a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28b1a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28b1ac:
    // 0x28b1ac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x28b1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_28b1b0:
    // 0x28b1b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x28b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28b1b4:
    // 0x28b1b4: 0xc0a3434  jal         func_28D0D0
label_28b1b8:
    if (ctx->pc == 0x28B1B8u) {
        ctx->pc = 0x28B1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1B4u;
        // 0x28b1b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1BCu;
        goto label_28b1bc;
    }
    ctx->pc = 0x28B1B4u;
    SET_GPR_U32(ctx, 31, 0x28B1BCu);
    ctx->pc = 0x28B1B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1B4u;
    // 0x28b1b8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D0D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x28D0D0u, 0x28B1B4u, 0x28B1BCu)) {
        return;
    }
    ctx->pc = 0x28B1BCu;
label_28b1bc:
    // 0x28b1bc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x28b1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_28b1c0:
    // 0x28b1c0: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x28b1c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_28b1c4:
    // 0x28b1c4: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_28b1c8:
    if (ctx->pc == 0x28B1C8u) {
        ctx->pc = 0x28B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1C4u;
        // 0x28b1c8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1CCu;
        goto label_28b1cc;
    }
    ctx->pc = 0x28B1C4u;
    {
        const bool branch_taken_0x28b1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1C4u;
        // 0x28b1c8: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1c4) {
            ctx->pc = 0x28B1A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b1a8;
        }
    }
    ctx->pc = 0x28B1CCu;
label_28b1cc:
    // 0x28b1cc: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x28b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_28b1d0:
    // 0x28b1d0: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x28b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_28b1d4:
    // 0x28b1d4: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x28b1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_28b1d8:
    // 0x28b1d8: 0x60f809  jalr        $v1
label_28b1dc:
    if (ctx->pc == 0x28B1DCu) {
        ctx->pc = 0x28B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1D8u;
        // 0x28b1dc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1E0u;
        goto label_28b1e0;
    }
    ctx->pc = 0x28B1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x28B1E0u);
        ctx->pc = 0x28B1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1D8u;
        // 0x28b1dc: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B1D8u, 0x28B1E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x28B1E0u;
label_28b1e0:
    // 0x28b1e0: 0xc09292a  jal         func_24A4A8
label_28b1e4:
    if (ctx->pc == 0x28B1E4u) {
        ctx->pc = 0x28B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1E0u;
        // 0x28b1e4: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B1E8u;
        goto label_28b1e8;
    }
    ctx->pc = 0x28B1E0u;
    SET_GPR_U32(ctx, 31, 0x28B1E8u);
    ctx->pc = 0x28B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1E0u;
    // 0x28b1e4: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B1E0u, 0x28B1E8u)) {
        return;
    }
    ctx->pc = 0x28B1E8u;
label_28b1e8:
    // 0x28b1e8: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x28b1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28b1ec:
    // 0x28b1ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28b1ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b1f0:
    // 0x28b1f0: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x28b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_28b1f4:
    // 0x28b1f4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28b1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_28b1f8:
    // 0x28b1f8: 0xc09292a  jal         func_24A4A8
label_28b1fc:
    if (ctx->pc == 0x28B1FCu) {
        ctx->pc = 0x28B1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B1F8u;
        // 0x28b1fc: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B200u;
        goto label_28b200;
    }
    ctx->pc = 0x28B1F8u;
    SET_GPR_U32(ctx, 31, 0x28B200u);
    ctx->pc = 0x28B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B1F8u;
    // 0x28b1fc: 0x438821  addu        $s1, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B1F8u, 0x28B200u)) {
        return;
    }
    ctx->pc = 0x28B200u;
label_28b200:
    // 0x28b200: 0x12110028  beq         $s0, $s1, . + 4 + (0x28 << 2)
label_28b204:
    if (ctx->pc == 0x28B204u) {
        ctx->pc = 0x28B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B200u;
        // 0x28b204: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B208u;
        goto label_28b208;
    }
    ctx->pc = 0x28B200u;
    {
        const bool branch_taken_0x28b200 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B200u;
        // 0x28b204: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b200) {
            ctx->pc = 0x28B2A4u;
            goto label_28b2a4;
        }
    }
    ctx->pc = 0x28B208u;
label_28b208:
    // 0x28b208: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x28b208u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_28b20c:
    // 0x28b20c: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x28b20cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_28b210:
    // 0x28b210: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_28b214:
    if (ctx->pc == 0x28B214u) {
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B210u;
        // 0x28b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B218u;
        goto label_28b218;
    }
    ctx->pc = 0x28B210u;
    {
        const bool branch_taken_0x28b210 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B210u;
        // 0x28b214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b210) {
            ctx->pc = 0x28B270u;
            goto label_28b270;
        }
    }
    ctx->pc = 0x28B218u;
label_28b218:
    // 0x28b218: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x28b218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_28b21c:
    // 0x28b21c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_28b220:
    if (ctx->pc == 0x28B220u) {
        ctx->pc = 0x28B220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B21Cu;
        // 0x28b220: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B224u;
        goto label_28b224;
    }
    ctx->pc = 0x28B21Cu;
    {
        const bool branch_taken_0x28b21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b21c) {
            ctx->pc = 0x28B220u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B21Cu;
            // 0x28b220: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B260u;
            goto label_28b260;
        }
    }
    ctx->pc = 0x28B224u;
label_28b224:
    // 0x28b224: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28b224u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_28b228:
    // 0x28b228: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_28b22c:
    if (ctx->pc == 0x28B22Cu) {
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B228u;
        // 0x28b22c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B230u;
        goto label_28b230;
    }
    ctx->pc = 0x28B228u;
    {
        const bool branch_taken_0x28b228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b228) {
            ctx->pc = 0x28B22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B228u;
            // 0x28b22c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B250u;
            goto label_28b250;
        }
    }
    ctx->pc = 0x28B230u;
label_28b230:
    // 0x28b230: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28b230u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_28b234:
    // 0x28b234: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28b238:
    if (ctx->pc == 0x28B238u) {
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B234u;
        // 0x28b238: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B23Cu;
        goto label_28b23c;
    }
    ctx->pc = 0x28B234u;
    {
        const bool branch_taken_0x28b234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B234u;
        // 0x28b238: 0x26020008  addiu       $v0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b234) {
            ctx->pc = 0x28B270u;
            goto label_28b270;
        }
    }
    ctx->pc = 0x28B23Cu;
label_28b23c:
    // 0x28b23c: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x28b23cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
label_28b240:
    // 0x28b240: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b244:
    // 0x28b244: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x28b244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_28b248:
    // 0x28b248: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b248u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b24c:
    // 0x28b24c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_28b250:
    // 0x28b250: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x28b250u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_28b254:
    // 0x28b254: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28b254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28b258:
    // 0x28b258: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x28b258u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_28b25c:
    // 0x28b25c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x28b25cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_28b260:
    // 0x28b260: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x28b260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_28b264:
    // 0x28b264: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28b264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28b268:
    // 0x28b268: 0x1211000e  beq         $s0, $s1, . + 4 + (0xE << 2)
label_28b26c:
    if (ctx->pc == 0x28B26Cu) {
        ctx->pc = 0x28B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B268u;
        // 0x28b26c: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B270u;
        goto label_28b270;
    }
    ctx->pc = 0x28B268u;
    {
        const bool branch_taken_0x28b268 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x28B26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B268u;
        // 0x28b26c: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b268) {
            ctx->pc = 0x28B2A4u;
            goto label_28b2a4;
        }
    }
    ctx->pc = 0x28B270u;
label_28b270:
    // 0x28b270: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28b270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b274:
    // 0x28b274: 0x0  nop
    ctx->pc = 0x28b274u;
    // NOP
label_28b278:
    // 0x28b278: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x28b278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
label_28b27c:
    // 0x28b27c: 0x24c30220  addiu       $v1, $a2, 0x220
    ctx->pc = 0x28b27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
label_28b280:
    // 0x28b280: 0x24c40330  addiu       $a0, $a2, 0x330
    ctx->pc = 0x28b280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
label_28b284:
    // 0x28b284: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x28b284u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_28b288:
    // 0x28b288: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x28b288u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_28b28c:
    // 0x28b28c: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x28b28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_28b290:
    // 0x28b290: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x28b290u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
label_28b294:
    // 0x28b294: 0x24c60440  addiu       $a2, $a2, 0x440
    ctx->pc = 0x28b294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
label_28b298:
    // 0x28b298: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x28b298u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
label_28b29c:
    // 0x28b29c: 0x1611fff6  bne         $s0, $s1, . + 4 + (-0xA << 2)
label_28b2a0:
    if (ctx->pc == 0x28B2A0u) {
        ctx->pc = 0x28B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B29Cu;
        // 0x28b2a0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2A4u;
        goto label_28b2a4;
    }
    ctx->pc = 0x28B29Cu;
    {
        const bool branch_taken_0x28b29c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x28B2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B29Cu;
        // 0x28b2a0: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b29c) {
            ctx->pc = 0x28B278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b278;
        }
    }
    ctx->pc = 0x28B2A4u;
label_28b2a4:
    // 0x28b2a4: 0xc09292a  jal         func_24A4A8
label_28b2a8:
    if (ctx->pc == 0x28B2A8u) {
        ctx->pc = 0x28B2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2A4u;
        // 0x28b2a8: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2ACu;
        goto label_28b2ac;
    }
    ctx->pc = 0x28B2A4u;
    SET_GPR_U32(ctx, 31, 0x28B2ACu);
    ctx->pc = 0x28B2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28B2A4u;
    // 0x28b2a8: 0x8e4400b8  lw          $a0, 0xB8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x28B2A4u, 0x28B2ACu)) {
        return;
    }
    ctx->pc = 0x28B2ACu;
label_28b2ac:
    // 0x28b2ac: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x28b2acu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b2b0:
    // 0x28b2b0: 0x8e4200b4  lw          $v0, 0xB4($s2)
    ctx->pc = 0x28b2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_28b2b4:
    // 0x28b2b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_28b2b8:
    // 0x28b2b8: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x28b2b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_28b2bc:
    // 0x28b2bc: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
label_28b2c0:
    if (ctx->pc == 0x28B2C0u) {
        ctx->pc = 0x28B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2BCu;
        // 0x28b2c0: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2C4u;
        goto label_28b2c4;
    }
    ctx->pc = 0x28B2BCu;
    {
        const bool branch_taken_0x28b2bc = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x28B2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2BCu;
        // 0x28b2c0: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2bc) {
            ctx->pc = 0x28B608u;
            goto label_28b608;
        }
    }
    ctx->pc = 0x28B2C4u;
label_28b2c4:
    // 0x28b2c4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x28b2c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_28b2c8:
    // 0x28b2c8: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x28b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_28b2cc:
    // 0x28b2cc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x28b2ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_28b2d0:
    // 0x28b2d0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_28b2d4:
    if (ctx->pc == 0x28B2D4u) {
        ctx->pc = 0x28B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D0u;
        // 0x28b2d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2D8u;
        goto label_28b2d8;
    }
    ctx->pc = 0x28B2D0u;
    {
        const bool branch_taken_0x28b2d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2D0u;
        // 0x28b2d4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2d0) {
            ctx->pc = 0x28B33Cu;
            goto label_28b33c;
        }
    }
    ctx->pc = 0x28B2D8u;
label_28b2d8:
    // 0x28b2d8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x28b2d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
label_28b2dc:
    // 0x28b2dc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_28b2e0:
    if (ctx->pc == 0x28B2E0u) {
        ctx->pc = 0x28B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2DCu;
        // 0x28b2e0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2E4u;
        goto label_28b2e4;
    }
    ctx->pc = 0x28B2DCu;
    {
        const bool branch_taken_0x28b2dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2dc) {
            ctx->pc = 0x28B2E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B2DCu;
            // 0x28b2e0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B328u;
            goto label_28b328;
        }
    }
    ctx->pc = 0x28B2E4u;
label_28b2e4:
    // 0x28b2e4: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28b2e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_28b2e8:
    // 0x28b2e8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_28b2ec:
    if (ctx->pc == 0x28B2ECu) {
        ctx->pc = 0x28B2ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2E8u;
        // 0x28b2ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2F0u;
        goto label_28b2f0;
    }
    ctx->pc = 0x28B2E8u;
    {
        const bool branch_taken_0x28b2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b2e8) {
            ctx->pc = 0x28B2ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B2E8u;
            // 0x28b2ec: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B314u;
            goto label_28b314;
        }
    }
    ctx->pc = 0x28B2F0u;
label_28b2f0:
    // 0x28b2f0: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28b2f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_28b2f4:
    // 0x28b2f4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_28b2f8:
    if (ctx->pc == 0x28B2F8u) {
        ctx->pc = 0x28B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F4u;
        // 0x28b2f8: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B2FCu;
        goto label_28b2fc;
    }
    ctx->pc = 0x28B2F4u;
    {
        const bool branch_taken_0x28b2f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B2F4u;
        // 0x28b2f8: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b2f4) {
            ctx->pc = 0x28B33Cu;
            goto label_28b33c;
        }
    }
    ctx->pc = 0x28B2FCu;
label_28b2fc:
    // 0x28b2fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28b2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28b300:
    // 0x28b300: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x28b300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28b304:
    // 0x28b304: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x28b304u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28b308:
    // 0x28b308: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x28b308u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
label_28b30c:
    // 0x28b30c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28b30cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b310:
    // 0x28b310: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28b310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28b314:
    // 0x28b314: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28b314u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_28b318:
    // 0x28b318: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28b318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28b31c:
    // 0x28b31c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28b31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_28b320:
    // 0x28b320: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28b320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_28b324:
    // 0x28b324: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28b328:
    // 0x28b328: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28b328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_28b32c:
    // 0x28b32c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28b330:
    // 0x28b330: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28b330u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_28b334:
    // 0x28b334: 0x10ea0014  beq         $a3, $t2, . + 4 + (0x14 << 2)
label_28b338:
    if (ctx->pc == 0x28B338u) {
        ctx->pc = 0x28B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B334u;
        // 0x28b338: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B33Cu;
        goto label_28b33c;
    }
    ctx->pc = 0x28B334u;
    {
        const bool branch_taken_0x28b334 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x28B338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B334u;
        // 0x28b338: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b334) {
            ctx->pc = 0x28B388u;
            goto label_28b388;
        }
    }
    ctx->pc = 0x28B33Cu;
label_28b33c:
    // 0x28b33c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28b33cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28b340:
    // 0x28b340: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x28b340u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28b344:
    // 0x28b344: 0x0  nop
    ctx->pc = 0x28b344u;
    // NOP
label_28b348:
    // 0x28b348: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x28b348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_28b34c:
    // 0x28b34c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x28b34cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_28b350:
    // 0x28b350: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x28b350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_28b354:
    // 0x28b354: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28b354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28b358:
    // 0x28b358: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x28b358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
label_28b35c:
    // 0x28b35c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x28b35cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_28b360:
    // 0x28b360: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x28b360u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
label_28b364:
    // 0x28b364: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28b364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28b368:
    // 0x28b368: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x28b368u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_28b36c:
    // 0x28b36c: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x28b36cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
label_28b370:
    // 0x28b370: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28b370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_28b374:
    // 0x28b374: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x28b374u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
label_28b378:
    // 0x28b378: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28b378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_28b37c:
    // 0x28b37c: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x28b37cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
label_28b380:
    // 0x28b380: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
label_28b384:
    if (ctx->pc == 0x28B384u) {
        ctx->pc = 0x28B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B380u;
        // 0x28b384: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B388u;
        goto label_28b388;
    }
    ctx->pc = 0x28B380u;
    {
        const bool branch_taken_0x28b380 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x28B384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B380u;
        // 0x28b384: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b380) {
            ctx->pc = 0x28B348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b348;
        }
    }
    ctx->pc = 0x28B388u;
label_28b388:
    // 0x28b388: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x28b388u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_28b38c:
    // 0x28b38c: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x28b38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
label_28b390:
    // 0x28b390: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
label_28b394:
    if (ctx->pc == 0x28B394u) {
        ctx->pc = 0x28B394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B390u;
        // 0x28b394: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B398u;
        goto label_28b398;
    }
    ctx->pc = 0x28B390u;
    {
        const bool branch_taken_0x28b390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b390) {
            ctx->pc = 0x28B394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B390u;
            // 0x28b394: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B60Cu;
            goto label_28b60c;
        }
    }
    ctx->pc = 0x28B398u;
label_28b398:
    // 0x28b398: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x28b398u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_28b39c:
    // 0x28b39c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x28b39cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_28b3a0:
    // 0x28b3a0: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28b3a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_28b3a4:
    // 0x28b3a4: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
label_28b3a8:
    if (ctx->pc == 0x28B3A8u) {
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A4u;
        // 0x28b3a8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3ACu;
        goto label_28b3ac;
    }
    ctx->pc = 0x28B3A4u;
    {
        const bool branch_taken_0x28b3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3A4u;
        // 0x28b3a8: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3a4) {
            ctx->pc = 0x28B5F8u;
            goto label_28b5f8;
        }
    }
    ctx->pc = 0x28B3ACu;
label_28b3ac:
    // 0x28b3ac: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x28b3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_28b3b0:
    // 0x28b3b0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28b3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28b3b4:
    // 0x28b3b4: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x28b3b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_28b3b8:
    // 0x28b3b8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_28b3bc:
    if (ctx->pc == 0x28B3BCu) {
        ctx->pc = 0x28B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B8u;
        // 0x28b3bc: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3C0u;
        goto label_28b3c0;
    }
    ctx->pc = 0x28B3B8u;
    {
        const bool branch_taken_0x28b3b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3B8u;
        // 0x28b3bc: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3b8) {
            ctx->pc = 0x28B484u;
            goto label_28b484;
        }
    }
    ctx->pc = 0x28B3C0u;
label_28b3c0:
    // 0x28b3c0: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
label_28b3c4:
    if (ctx->pc == 0x28B3C4u) {
        ctx->pc = 0x28B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C0u;
        // 0x28b3c4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3C8u;
        goto label_28b3c8;
    }
    ctx->pc = 0x28B3C0u;
    {
        const bool branch_taken_0x28b3c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C0u;
        // 0x28b3c4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3c0) {
            ctx->pc = 0x28B4D4u;
            goto label_28b4d4;
        }
    }
    ctx->pc = 0x28B3C8u;
label_28b3c8:
    // 0x28b3c8: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
label_28b3cc:
    if (ctx->pc == 0x28B3CCu) {
        ctx->pc = 0x28B3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3C8u;
        // 0x28b3cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3D0u;
        goto label_28b3d0;
    }
    ctx->pc = 0x28B3C8u;
    {
        const bool branch_taken_0x28b3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b3c8) {
            ctx->pc = 0x28B3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B3C8u;
            // 0x28b3cc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B488u;
            goto label_28b488;
        }
    }
    ctx->pc = 0x28B3D0u;
label_28b3d0:
    // 0x28b3d0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28b3d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
label_28b3d4:
    // 0x28b3d4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_28b3d8:
    if (ctx->pc == 0x28B3D8u) {
        ctx->pc = 0x28B3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3D4u;
        // 0x28b3d8: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3DCu;
        goto label_28b3dc;
    }
    ctx->pc = 0x28B3D4u;
    {
        const bool branch_taken_0x28b3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b3d4) {
            ctx->pc = 0x28B3D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B3D4u;
            // 0x28b3d8: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B43Cu;
            goto label_28b43c;
        }
    }
    ctx->pc = 0x28B3DCu;
label_28b3dc:
    // 0x28b3dc: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28b3dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_28b3e0:
    // 0x28b3e0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
label_28b3e4:
    if (ctx->pc == 0x28B3E4u) {
        ctx->pc = 0x28B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3E0u;
        // 0x28b3e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3E8u;
        goto label_28b3e8;
    }
    ctx->pc = 0x28B3E0u;
    {
        const bool branch_taken_0x28b3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3E0u;
        // 0x28b3e4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3e0) {
            ctx->pc = 0x28B4D8u;
            goto label_28b4d8;
        }
    }
    ctx->pc = 0x28B3E8u;
label_28b3e8:
    // 0x28b3e8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b3ec:
    // 0x28b3ec: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x28b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_28b3f0:
    // 0x28b3f0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b3f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b3f4:
    // 0x28b3f4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_28b3f8:
    if (ctx->pc == 0x28B3F8u) {
        ctx->pc = 0x28B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3F4u;
        // 0x28b3f8: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B3FCu;
        goto label_28b3fc;
    }
    ctx->pc = 0x28B3F4u;
    {
        const bool branch_taken_0x28b3f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B3F4u;
        // 0x28b3f8: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b3f4) {
            ctx->pc = 0x28B430u;
            goto label_28b430;
        }
    }
    ctx->pc = 0x28B3FCu;
label_28b3fc:
    // 0x28b3fc: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b3fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b400:
    // 0x28b400: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b400u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b404:
    // 0x28b404: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b404u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b408:
    // 0x28b408: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b40c:
    // 0x28b40c: 0x68e4000f  ldl         $a0, 0xF($a3)
    ctx->pc = 0x28b40cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_28b410:
    // 0x28b410: 0x6ce40008  ldr         $a0, 0x8($a3)
    ctx->pc = 0x28b410u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_28b414:
    // 0x28b414: 0xb0e40007  sdl         $a0, 0x7($a3)
    ctx->pc = 0x28b414u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b418:
    // 0x28b418: 0xb4e40000  sdr         $a0, 0x0($a3)
    ctx->pc = 0x28b418u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b41c:
    // 0x28b41c: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x28b41cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28b420:
    // 0x28b420: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x28b420u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_28b424:
    // 0x28b424: 0xb0e2000f  sdl         $v0, 0xF($a3)
    ctx->pc = 0x28b424u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b428:
    // 0x28b428: 0xb4e20008  sdr         $v0, 0x8($a3)
    ctx->pc = 0x28b428u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b42c:
    // 0x28b42c: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x28b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_28b430:
    // 0x28b430: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28b430u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28b434:
    // 0x28b434: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28b434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b438:
    // 0x28b438: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b43c:
    // 0x28b43c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28b440:
    // 0x28b440: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b444:
    // 0x28b444: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_28b448:
    if (ctx->pc == 0x28B448u) {
        ctx->pc = 0x28B448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B444u;
        // 0x28b448: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B44Cu;
        goto label_28b44c;
    }
    ctx->pc = 0x28B444u;
    {
        const bool branch_taken_0x28b444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b444) {
            ctx->pc = 0x28B448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B444u;
            // 0x28b448: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B480u;
            goto label_28b480;
        }
    }
    ctx->pc = 0x28B44Cu;
label_28b44c:
    // 0x28b44c: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b44cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b450:
    // 0x28b450: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b454:
    // 0x28b454: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b458:
    // 0x28b458: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b45c:
    // 0x28b45c: 0x68850007  ldl         $a1, 0x7($a0)
    ctx->pc = 0x28b45cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_28b460:
    // 0x28b460: 0x6c850000  ldr         $a1, 0x0($a0)
    ctx->pc = 0x28b460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_28b464:
    // 0x28b464: 0xb0e50007  sdl         $a1, 0x7($a3)
    ctx->pc = 0x28b464u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b468:
    // 0x28b468: 0xb4e50000  sdr         $a1, 0x0($a3)
    ctx->pc = 0x28b468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b46c:
    // 0x28b46c: 0x6ba30047  ldl         $v1, 0x47($sp)
    ctx->pc = 0x28b46cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_28b470:
    // 0x28b470: 0x6fa30040  ldr         $v1, 0x40($sp)
    ctx->pc = 0x28b470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_28b474:
    // 0x28b474: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x28b474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b478:
    // 0x28b478: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x28b478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b47c:
    // 0x28b47c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28b47cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28b480:
    // 0x28b480: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28b480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28b484:
    // 0x28b484: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b488:
    // 0x28b488: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28b488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_28b48c:
    // 0x28b48c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b48cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b490:
    // 0x28b490: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_28b494:
    if (ctx->pc == 0x28B494u) {
        ctx->pc = 0x28B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B490u;
        // 0x28b494: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B498u;
        goto label_28b498;
    }
    ctx->pc = 0x28B490u;
    {
        const bool branch_taken_0x28b490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B490u;
        // 0x28b494: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b490) {
            ctx->pc = 0x28B4C8u;
            goto label_28b4c8;
        }
    }
    ctx->pc = 0x28B498u;
label_28b498:
    // 0x28b498: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x28b498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_28b49c:
    // 0x28b49c: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x28b49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_28b4a0:
    // 0x28b4a0: 0xb3a20047  sdl         $v0, 0x47($sp)
    ctx->pc = 0x28b4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4a4:
    // 0x28b4a4: 0xb7a20040  sdr         $v0, 0x40($sp)
    ctx->pc = 0x28b4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4a8:
    // 0x28b4a8: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x28b4a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_28b4ac:
    // 0x28b4ac: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x28b4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_28b4b0:
    // 0x28b4b0: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28b4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4b4:
    // 0x28b4b4: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28b4b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4b8:
    // 0x28b4b8: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x28b4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b4bc:
    // 0x28b4bc: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x28b4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b4c0:
    // 0x28b4c0: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x28b4c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4c4:
    // 0x28b4c4: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x28b4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4c8:
    // 0x28b4c8: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28b4c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_28b4cc:
    // 0x28b4cc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_28b4d0:
    if (ctx->pc == 0x28B4D0u) {
        ctx->pc = 0x28B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4CCu;
        // 0x28b4d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4D4u;
        goto label_28b4d4;
    }
    ctx->pc = 0x28B4CCu;
    {
        const bool branch_taken_0x28b4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4CCu;
        // 0x28b4d0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b4cc) {
            ctx->pc = 0x28B5F8u;
            goto label_28b5f8;
        }
    }
    ctx->pc = 0x28B4D4u;
label_28b4d4:
    // 0x28b4d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28b4d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28b4d8:
    // 0x28b4d8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b4dc:
    // 0x28b4dc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28b4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_28b4e0:
    // 0x28b4e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b4e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b4e4:
    // 0x28b4e4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_28b4e8:
    if (ctx->pc == 0x28B4E8u) {
        ctx->pc = 0x28B4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B4E4u;
        // 0x28b4e8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B4ECu;
        goto label_28b4ec;
    }
    ctx->pc = 0x28B4E4u;
    {
        const bool branch_taken_0x28b4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b4e4) {
            ctx->pc = 0x28B4E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B4E4u;
            // 0x28b4e8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B524u;
            goto label_28b524;
        }
    }
    ctx->pc = 0x28B4ECu;
label_28b4ec:
    // 0x28b4ec: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b4ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b4f0:
    // 0x28b4f0: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b4f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b4f4:
    // 0x28b4f4: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b4f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4f8:
    // 0x28b4f8: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b4f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b4fc:
    // 0x28b4fc: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x28b4fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b500:
    // 0x28b500: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x28b500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b504:
    // 0x28b504: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28b504u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b508:
    // 0x28b508: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28b508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b50c:
    // 0x28b50c: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x28b50cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b510:
    // 0x28b510: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x28b510u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b514:
    // 0x28b514: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x28b514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b518:
    // 0x28b518: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x28b518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b51c:
    // 0x28b51c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b51cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b520:
    // 0x28b520: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x28b520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28b524:
    // 0x28b524: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b524u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b528:
    // 0x28b528: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_28b52c:
    if (ctx->pc == 0x28B52Cu) {
        ctx->pc = 0x28B52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B528u;
        // 0x28b52c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B530u;
        goto label_28b530;
    }
    ctx->pc = 0x28B528u;
    {
        const bool branch_taken_0x28b528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b528) {
            ctx->pc = 0x28B52Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B528u;
            // 0x28b52c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B564u;
            goto label_28b564;
        }
    }
    ctx->pc = 0x28B530u;
label_28b530:
    // 0x28b530: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b530u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b534:
    // 0x28b534: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b534u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b538:
    // 0x28b538: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b538u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b53c:
    // 0x28b53c: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b53cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b540:
    // 0x28b540: 0x688b000f  ldl         $t3, 0xF($a0)
    ctx->pc = 0x28b540u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b544:
    // 0x28b544: 0x6c8b0008  ldr         $t3, 0x8($a0)
    ctx->pc = 0x28b544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b548:
    // 0x28b548: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28b548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b54c:
    // 0x28b54c: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28b54cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b550:
    // 0x28b550: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x28b550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b554:
    // 0x28b554: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x28b554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b558:
    // 0x28b558: 0xb08b000f  sdl         $t3, 0xF($a0)
    ctx->pc = 0x28b558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b55c:
    // 0x28b55c: 0xb48b0008  sdr         $t3, 0x8($a0)
    ctx->pc = 0x28b55cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b560:
    // 0x28b560: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b564:
    // 0x28b564: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x28b564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_28b568:
    // 0x28b568: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b568u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b56c:
    // 0x28b56c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_28b570:
    if (ctx->pc == 0x28B570u) {
        ctx->pc = 0x28B570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B56Cu;
        // 0x28b570: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B574u;
        goto label_28b574;
    }
    ctx->pc = 0x28B56Cu;
    {
        const bool branch_taken_0x28b56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28b56c) {
            ctx->pc = 0x28B570u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B56Cu;
            // 0x28b570: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B5A8u;
            goto label_28b5a8;
        }
    }
    ctx->pc = 0x28B574u;
label_28b574:
    // 0x28b574: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b578:
    // 0x28b578: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b57c:
    // 0x28b57c: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b57cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b580:
    // 0x28b580: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b584:
    // 0x28b584: 0x688b0017  ldl         $t3, 0x17($a0)
    ctx->pc = 0x28b584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b588:
    // 0x28b588: 0x6c8b0010  ldr         $t3, 0x10($a0)
    ctx->pc = 0x28b588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b58c:
    // 0x28b58c: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28b58cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b590:
    // 0x28b590: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28b590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b594:
    // 0x28b594: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x28b594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b598:
    // 0x28b598: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x28b598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b59c:
    // 0x28b59c: 0xb08b0017  sdl         $t3, 0x17($a0)
    ctx->pc = 0x28b59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5a0:
    // 0x28b5a0: 0xb48b0010  sdr         $t3, 0x10($a0)
    ctx->pc = 0x28b5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5a4:
    // 0x28b5a4: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28b5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28b5a8:
    // 0x28b5a8: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x28b5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_28b5ac:
    // 0x28b5ac: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28b5acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28b5b0:
    // 0x28b5b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_28b5b4:
    if (ctx->pc == 0x28B5B4u) {
        ctx->pc = 0x28B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B0u;
        // 0x28b5b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5B8u;
        goto label_28b5b8;
    }
    ctx->pc = 0x28B5B0u;
    {
        const bool branch_taken_0x28b5b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5B0u;
        // 0x28b5b4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5b0) {
            ctx->pc = 0x28B5E8u;
            goto label_28b5e8;
        }
    }
    ctx->pc = 0x28B5B8u;
label_28b5b8:
    // 0x28b5b8: 0x68eb0007  ldl         $t3, 0x7($a3)
    ctx->pc = 0x28b5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b5bc:
    // 0x28b5bc: 0x6ceb0000  ldr         $t3, 0x0($a3)
    ctx->pc = 0x28b5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b5c0:
    // 0x28b5c0: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x28b5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5c4:
    // 0x28b5c4: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x28b5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5c8:
    // 0x28b5c8: 0x688b001f  ldl         $t3, 0x1F($a0)
    ctx->pc = 0x28b5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b5cc:
    // 0x28b5cc: 0x6c8b0018  ldr         $t3, 0x18($a0)
    ctx->pc = 0x28b5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b5d0:
    // 0x28b5d0: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28b5d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5d4:
    // 0x28b5d4: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28b5d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5d8:
    // 0x28b5d8: 0x6bab0047  ldl         $t3, 0x47($sp)
    ctx->pc = 0x28b5d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_28b5dc:
    // 0x28b5dc: 0x6fab0040  ldr         $t3, 0x40($sp)
    ctx->pc = 0x28b5dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_28b5e0:
    // 0x28b5e0: 0xb08b001f  sdl         $t3, 0x1F($a0)
    ctx->pc = 0x28b5e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5e4:
    // 0x28b5e4: 0xb48b0018  sdr         $t3, 0x18($a0)
    ctx->pc = 0x28b5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28b5e8:
    // 0x28b5e8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x28b5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_28b5ec:
    // 0x28b5ec: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28b5ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
label_28b5f0:
    // 0x28b5f0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
label_28b5f4:
    if (ctx->pc == 0x28B5F4u) {
        ctx->pc = 0x28B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F0u;
        // 0x28b5f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B5F8u;
        goto label_28b5f8;
    }
    ctx->pc = 0x28B5F0u;
    {
        const bool branch_taken_0x28b5f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B5F0u;
        // 0x28b5f4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b5f0) {
            ctx->pc = 0x28B4D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b4d8;
        }
    }
    ctx->pc = 0x28B5F8u;
label_28b5f8:
    // 0x28b5f8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28b5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28b5fc:
    // 0x28b5fc: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x28b5fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
label_28b600:
    // 0x28b600: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
label_28b604:
    if (ctx->pc == 0x28B604u) {
        ctx->pc = 0x28B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B600u;
        // 0x28b604: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B608u;
        goto label_28b608;
    }
    ctx->pc = 0x28B600u;
    {
        const bool branch_taken_0x28b600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b600) {
            ctx->pc = 0x28B604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28B600u;
            // 0x28b604: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28B3A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28b3a0;
        }
    }
    ctx->pc = 0x28B608u;
label_28b608:
    // 0x28b608: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x28b608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_28b60c:
    // 0x28b60c: 0x2404fffe  addiu       $a0, $zero, -0x2
    ctx->pc = 0x28b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_28b610:
    // 0x28b610: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x28b610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28b614:
    // 0x28b614: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x28b614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_28b618:
    // 0x28b618: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x28b618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_28b61c:
    // 0x28b61c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x28b61cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_28b620:
    // 0x28b620: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x28b620u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28b624:
    // 0x28b624: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x28b624u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28b628:
    // 0x28b628: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x28b628u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28b62c:
    // 0x28b62c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x28b62cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28b630:
    // 0x28b630: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28b630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_28b634:
    // 0x28b634: 0x3e00008  jr          $ra
label_28b638:
    if (ctx->pc == 0x28B638u) {
        ctx->pc = 0x28B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B634u;
        // 0x28b638: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28B63Cu;
        goto label_28b63c;
    }
    ctx->pc = 0x28B634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28B634u;
        // 0x28b638: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28B634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28B63Cu;
label_28b63c:
    // 0x28b63c: 0x0  nop
    ctx->pc = 0x28b63cu;
    // NOP
label_28b640:
    // 0x28b640: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x28b640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_28b644:
    // 0x28b644: 0x0  nop
    ctx->pc = 0x28b644u;
    // NOP
    ctx->pc = 0x28b648u;
}
