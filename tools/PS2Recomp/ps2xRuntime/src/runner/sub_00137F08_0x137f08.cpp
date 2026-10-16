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

// Function: sub_00137F08
// Address: 0x137f08 - 0x1387d0
void sub_00137F08_0x137f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00137F08_0x137f08");
#endif

    switch (ctx->pc) {
        case 0x137f08u: goto label_137f08;
        case 0x137f0cu: goto label_137f0c;
        case 0x137f10u: goto label_137f10;
        case 0x137f14u: goto label_137f14;
        case 0x137f18u: goto label_137f18;
        case 0x137f1cu: goto label_137f1c;
        case 0x137f20u: goto label_137f20;
        case 0x137f24u: goto label_137f24;
        case 0x137f28u: goto label_137f28;
        case 0x137f2cu: goto label_137f2c;
        case 0x137f30u: goto label_137f30;
        case 0x137f34u: goto label_137f34;
        case 0x137f38u: goto label_137f38;
        case 0x137f3cu: goto label_137f3c;
        case 0x137f40u: goto label_137f40;
        case 0x137f44u: goto label_137f44;
        case 0x137f48u: goto label_137f48;
        case 0x137f4cu: goto label_137f4c;
        case 0x137f50u: goto label_137f50;
        case 0x137f54u: goto label_137f54;
        case 0x137f58u: goto label_137f58;
        case 0x137f5cu: goto label_137f5c;
        case 0x137f60u: goto label_137f60;
        case 0x137f64u: goto label_137f64;
        case 0x137f68u: goto label_137f68;
        case 0x137f6cu: goto label_137f6c;
        case 0x137f70u: goto label_137f70;
        case 0x137f74u: goto label_137f74;
        case 0x137f78u: goto label_137f78;
        case 0x137f7cu: goto label_137f7c;
        case 0x137f80u: goto label_137f80;
        case 0x137f84u: goto label_137f84;
        case 0x137f88u: goto label_137f88;
        case 0x137f8cu: goto label_137f8c;
        case 0x137f90u: goto label_137f90;
        case 0x137f94u: goto label_137f94;
        case 0x137f98u: goto label_137f98;
        case 0x137f9cu: goto label_137f9c;
        case 0x137fa0u: goto label_137fa0;
        case 0x137fa4u: goto label_137fa4;
        case 0x137fa8u: goto label_137fa8;
        case 0x137facu: goto label_137fac;
        case 0x137fb0u: goto label_137fb0;
        case 0x137fb4u: goto label_137fb4;
        case 0x137fb8u: goto label_137fb8;
        case 0x137fbcu: goto label_137fbc;
        case 0x137fc0u: goto label_137fc0;
        case 0x137fc4u: goto label_137fc4;
        case 0x137fc8u: goto label_137fc8;
        case 0x137fccu: goto label_137fcc;
        case 0x137fd0u: goto label_137fd0;
        case 0x137fd4u: goto label_137fd4;
        case 0x137fd8u: goto label_137fd8;
        case 0x137fdcu: goto label_137fdc;
        case 0x137fe0u: goto label_137fe0;
        case 0x137fe4u: goto label_137fe4;
        case 0x137fe8u: goto label_137fe8;
        case 0x137fecu: goto label_137fec;
        case 0x137ff0u: goto label_137ff0;
        case 0x137ff4u: goto label_137ff4;
        case 0x137ff8u: goto label_137ff8;
        case 0x137ffcu: goto label_137ffc;
        case 0x138000u: goto label_138000;
        case 0x138004u: goto label_138004;
        case 0x138008u: goto label_138008;
        case 0x13800cu: goto label_13800c;
        case 0x138010u: goto label_138010;
        case 0x138014u: goto label_138014;
        case 0x138018u: goto label_138018;
        case 0x13801cu: goto label_13801c;
        case 0x138020u: goto label_138020;
        case 0x138024u: goto label_138024;
        case 0x138028u: goto label_138028;
        case 0x13802cu: goto label_13802c;
        case 0x138030u: goto label_138030;
        case 0x138034u: goto label_138034;
        case 0x138038u: goto label_138038;
        case 0x13803cu: goto label_13803c;
        case 0x138040u: goto label_138040;
        case 0x138044u: goto label_138044;
        case 0x138048u: goto label_138048;
        case 0x13804cu: goto label_13804c;
        case 0x138050u: goto label_138050;
        case 0x138054u: goto label_138054;
        case 0x138058u: goto label_138058;
        case 0x13805cu: goto label_13805c;
        case 0x138060u: goto label_138060;
        case 0x138064u: goto label_138064;
        case 0x138068u: goto label_138068;
        case 0x13806cu: goto label_13806c;
        case 0x138070u: goto label_138070;
        case 0x138074u: goto label_138074;
        case 0x138078u: goto label_138078;
        case 0x13807cu: goto label_13807c;
        case 0x138080u: goto label_138080;
        case 0x138084u: goto label_138084;
        case 0x138088u: goto label_138088;
        case 0x13808cu: goto label_13808c;
        case 0x138090u: goto label_138090;
        case 0x138094u: goto label_138094;
        case 0x138098u: goto label_138098;
        case 0x13809cu: goto label_13809c;
        case 0x1380a0u: goto label_1380a0;
        case 0x1380a4u: goto label_1380a4;
        case 0x1380a8u: goto label_1380a8;
        case 0x1380acu: goto label_1380ac;
        case 0x1380b0u: goto label_1380b0;
        case 0x1380b4u: goto label_1380b4;
        case 0x1380b8u: goto label_1380b8;
        case 0x1380bcu: goto label_1380bc;
        case 0x1380c0u: goto label_1380c0;
        case 0x1380c4u: goto label_1380c4;
        case 0x1380c8u: goto label_1380c8;
        case 0x1380ccu: goto label_1380cc;
        case 0x1380d0u: goto label_1380d0;
        case 0x1380d4u: goto label_1380d4;
        case 0x1380d8u: goto label_1380d8;
        case 0x1380dcu: goto label_1380dc;
        case 0x1380e0u: goto label_1380e0;
        case 0x1380e4u: goto label_1380e4;
        case 0x1380e8u: goto label_1380e8;
        case 0x1380ecu: goto label_1380ec;
        case 0x1380f0u: goto label_1380f0;
        case 0x1380f4u: goto label_1380f4;
        case 0x1380f8u: goto label_1380f8;
        case 0x1380fcu: goto label_1380fc;
        case 0x138100u: goto label_138100;
        case 0x138104u: goto label_138104;
        case 0x138108u: goto label_138108;
        case 0x13810cu: goto label_13810c;
        case 0x138110u: goto label_138110;
        case 0x138114u: goto label_138114;
        case 0x138118u: goto label_138118;
        case 0x13811cu: goto label_13811c;
        case 0x138120u: goto label_138120;
        case 0x138124u: goto label_138124;
        case 0x138128u: goto label_138128;
        case 0x13812cu: goto label_13812c;
        case 0x138130u: goto label_138130;
        case 0x138134u: goto label_138134;
        case 0x138138u: goto label_138138;
        case 0x13813cu: goto label_13813c;
        case 0x138140u: goto label_138140;
        case 0x138144u: goto label_138144;
        case 0x138148u: goto label_138148;
        case 0x13814cu: goto label_13814c;
        case 0x138150u: goto label_138150;
        case 0x138154u: goto label_138154;
        case 0x138158u: goto label_138158;
        case 0x13815cu: goto label_13815c;
        case 0x138160u: goto label_138160;
        case 0x138164u: goto label_138164;
        case 0x138168u: goto label_138168;
        case 0x13816cu: goto label_13816c;
        case 0x138170u: goto label_138170;
        case 0x138174u: goto label_138174;
        case 0x138178u: goto label_138178;
        case 0x13817cu: goto label_13817c;
        case 0x138180u: goto label_138180;
        case 0x138184u: goto label_138184;
        case 0x138188u: goto label_138188;
        case 0x13818cu: goto label_13818c;
        case 0x138190u: goto label_138190;
        case 0x138194u: goto label_138194;
        case 0x138198u: goto label_138198;
        case 0x13819cu: goto label_13819c;
        case 0x1381a0u: goto label_1381a0;
        case 0x1381a4u: goto label_1381a4;
        case 0x1381a8u: goto label_1381a8;
        case 0x1381acu: goto label_1381ac;
        case 0x1381b0u: goto label_1381b0;
        case 0x1381b4u: goto label_1381b4;
        case 0x1381b8u: goto label_1381b8;
        case 0x1381bcu: goto label_1381bc;
        case 0x1381c0u: goto label_1381c0;
        case 0x1381c4u: goto label_1381c4;
        case 0x1381c8u: goto label_1381c8;
        case 0x1381ccu: goto label_1381cc;
        case 0x1381d0u: goto label_1381d0;
        case 0x1381d4u: goto label_1381d4;
        case 0x1381d8u: goto label_1381d8;
        case 0x1381dcu: goto label_1381dc;
        case 0x1381e0u: goto label_1381e0;
        case 0x1381e4u: goto label_1381e4;
        case 0x1381e8u: goto label_1381e8;
        case 0x1381ecu: goto label_1381ec;
        case 0x1381f0u: goto label_1381f0;
        case 0x1381f4u: goto label_1381f4;
        case 0x1381f8u: goto label_1381f8;
        case 0x1381fcu: goto label_1381fc;
        case 0x138200u: goto label_138200;
        case 0x138204u: goto label_138204;
        case 0x138208u: goto label_138208;
        case 0x13820cu: goto label_13820c;
        case 0x138210u: goto label_138210;
        case 0x138214u: goto label_138214;
        case 0x138218u: goto label_138218;
        case 0x13821cu: goto label_13821c;
        case 0x138220u: goto label_138220;
        case 0x138224u: goto label_138224;
        case 0x138228u: goto label_138228;
        case 0x13822cu: goto label_13822c;
        case 0x138230u: goto label_138230;
        case 0x138234u: goto label_138234;
        case 0x138238u: goto label_138238;
        case 0x13823cu: goto label_13823c;
        case 0x138240u: goto label_138240;
        case 0x138244u: goto label_138244;
        case 0x138248u: goto label_138248;
        case 0x13824cu: goto label_13824c;
        case 0x138250u: goto label_138250;
        case 0x138254u: goto label_138254;
        case 0x138258u: goto label_138258;
        case 0x13825cu: goto label_13825c;
        case 0x138260u: goto label_138260;
        case 0x138264u: goto label_138264;
        case 0x138268u: goto label_138268;
        case 0x13826cu: goto label_13826c;
        case 0x138270u: goto label_138270;
        case 0x138274u: goto label_138274;
        case 0x138278u: goto label_138278;
        case 0x13827cu: goto label_13827c;
        case 0x138280u: goto label_138280;
        case 0x138284u: goto label_138284;
        case 0x138288u: goto label_138288;
        case 0x13828cu: goto label_13828c;
        case 0x138290u: goto label_138290;
        case 0x138294u: goto label_138294;
        case 0x138298u: goto label_138298;
        case 0x13829cu: goto label_13829c;
        case 0x1382a0u: goto label_1382a0;
        case 0x1382a4u: goto label_1382a4;
        case 0x1382a8u: goto label_1382a8;
        case 0x1382acu: goto label_1382ac;
        case 0x1382b0u: goto label_1382b0;
        case 0x1382b4u: goto label_1382b4;
        case 0x1382b8u: goto label_1382b8;
        case 0x1382bcu: goto label_1382bc;
        case 0x1382c0u: goto label_1382c0;
        case 0x1382c4u: goto label_1382c4;
        case 0x1382c8u: goto label_1382c8;
        case 0x1382ccu: goto label_1382cc;
        case 0x1382d0u: goto label_1382d0;
        case 0x1382d4u: goto label_1382d4;
        case 0x1382d8u: goto label_1382d8;
        case 0x1382dcu: goto label_1382dc;
        case 0x1382e0u: goto label_1382e0;
        case 0x1382e4u: goto label_1382e4;
        case 0x1382e8u: goto label_1382e8;
        case 0x1382ecu: goto label_1382ec;
        case 0x1382f0u: goto label_1382f0;
        case 0x1382f4u: goto label_1382f4;
        case 0x1382f8u: goto label_1382f8;
        case 0x1382fcu: goto label_1382fc;
        case 0x138300u: goto label_138300;
        case 0x138304u: goto label_138304;
        case 0x138308u: goto label_138308;
        case 0x13830cu: goto label_13830c;
        case 0x138310u: goto label_138310;
        case 0x138314u: goto label_138314;
        case 0x138318u: goto label_138318;
        case 0x13831cu: goto label_13831c;
        case 0x138320u: goto label_138320;
        case 0x138324u: goto label_138324;
        case 0x138328u: goto label_138328;
        case 0x13832cu: goto label_13832c;
        case 0x138330u: goto label_138330;
        case 0x138334u: goto label_138334;
        case 0x138338u: goto label_138338;
        case 0x13833cu: goto label_13833c;
        case 0x138340u: goto label_138340;
        case 0x138344u: goto label_138344;
        case 0x138348u: goto label_138348;
        case 0x13834cu: goto label_13834c;
        case 0x138350u: goto label_138350;
        case 0x138354u: goto label_138354;
        case 0x138358u: goto label_138358;
        case 0x13835cu: goto label_13835c;
        case 0x138360u: goto label_138360;
        case 0x138364u: goto label_138364;
        case 0x138368u: goto label_138368;
        case 0x13836cu: goto label_13836c;
        case 0x138370u: goto label_138370;
        case 0x138374u: goto label_138374;
        case 0x138378u: goto label_138378;
        case 0x13837cu: goto label_13837c;
        case 0x138380u: goto label_138380;
        case 0x138384u: goto label_138384;
        case 0x138388u: goto label_138388;
        case 0x13838cu: goto label_13838c;
        case 0x138390u: goto label_138390;
        case 0x138394u: goto label_138394;
        case 0x138398u: goto label_138398;
        case 0x13839cu: goto label_13839c;
        case 0x1383a0u: goto label_1383a0;
        case 0x1383a4u: goto label_1383a4;
        case 0x1383a8u: goto label_1383a8;
        case 0x1383acu: goto label_1383ac;
        case 0x1383b0u: goto label_1383b0;
        case 0x1383b4u: goto label_1383b4;
        case 0x1383b8u: goto label_1383b8;
        case 0x1383bcu: goto label_1383bc;
        case 0x1383c0u: goto label_1383c0;
        case 0x1383c4u: goto label_1383c4;
        case 0x1383c8u: goto label_1383c8;
        case 0x1383ccu: goto label_1383cc;
        case 0x1383d0u: goto label_1383d0;
        case 0x1383d4u: goto label_1383d4;
        case 0x1383d8u: goto label_1383d8;
        case 0x1383dcu: goto label_1383dc;
        case 0x1383e0u: goto label_1383e0;
        case 0x1383e4u: goto label_1383e4;
        case 0x1383e8u: goto label_1383e8;
        case 0x1383ecu: goto label_1383ec;
        case 0x1383f0u: goto label_1383f0;
        case 0x1383f4u: goto label_1383f4;
        case 0x1383f8u: goto label_1383f8;
        case 0x1383fcu: goto label_1383fc;
        case 0x138400u: goto label_138400;
        case 0x138404u: goto label_138404;
        case 0x138408u: goto label_138408;
        case 0x13840cu: goto label_13840c;
        case 0x138410u: goto label_138410;
        case 0x138414u: goto label_138414;
        case 0x138418u: goto label_138418;
        case 0x13841cu: goto label_13841c;
        case 0x138420u: goto label_138420;
        case 0x138424u: goto label_138424;
        case 0x138428u: goto label_138428;
        case 0x13842cu: goto label_13842c;
        case 0x138430u: goto label_138430;
        case 0x138434u: goto label_138434;
        case 0x138438u: goto label_138438;
        case 0x13843cu: goto label_13843c;
        case 0x138440u: goto label_138440;
        case 0x138444u: goto label_138444;
        case 0x138448u: goto label_138448;
        case 0x13844cu: goto label_13844c;
        case 0x138450u: goto label_138450;
        case 0x138454u: goto label_138454;
        case 0x138458u: goto label_138458;
        case 0x13845cu: goto label_13845c;
        case 0x138460u: goto label_138460;
        case 0x138464u: goto label_138464;
        case 0x138468u: goto label_138468;
        case 0x13846cu: goto label_13846c;
        case 0x138470u: goto label_138470;
        case 0x138474u: goto label_138474;
        case 0x138478u: goto label_138478;
        case 0x13847cu: goto label_13847c;
        case 0x138480u: goto label_138480;
        case 0x138484u: goto label_138484;
        case 0x138488u: goto label_138488;
        case 0x13848cu: goto label_13848c;
        case 0x138490u: goto label_138490;
        case 0x138494u: goto label_138494;
        case 0x138498u: goto label_138498;
        case 0x13849cu: goto label_13849c;
        case 0x1384a0u: goto label_1384a0;
        case 0x1384a4u: goto label_1384a4;
        case 0x1384a8u: goto label_1384a8;
        case 0x1384acu: goto label_1384ac;
        case 0x1384b0u: goto label_1384b0;
        case 0x1384b4u: goto label_1384b4;
        case 0x1384b8u: goto label_1384b8;
        case 0x1384bcu: goto label_1384bc;
        case 0x1384c0u: goto label_1384c0;
        case 0x1384c4u: goto label_1384c4;
        case 0x1384c8u: goto label_1384c8;
        case 0x1384ccu: goto label_1384cc;
        case 0x1384d0u: goto label_1384d0;
        case 0x1384d4u: goto label_1384d4;
        case 0x1384d8u: goto label_1384d8;
        case 0x1384dcu: goto label_1384dc;
        case 0x1384e0u: goto label_1384e0;
        case 0x1384e4u: goto label_1384e4;
        case 0x1384e8u: goto label_1384e8;
        case 0x1384ecu: goto label_1384ec;
        case 0x1384f0u: goto label_1384f0;
        case 0x1384f4u: goto label_1384f4;
        case 0x1384f8u: goto label_1384f8;
        case 0x1384fcu: goto label_1384fc;
        case 0x138500u: goto label_138500;
        case 0x138504u: goto label_138504;
        case 0x138508u: goto label_138508;
        case 0x13850cu: goto label_13850c;
        case 0x138510u: goto label_138510;
        case 0x138514u: goto label_138514;
        case 0x138518u: goto label_138518;
        case 0x13851cu: goto label_13851c;
        case 0x138520u: goto label_138520;
        case 0x138524u: goto label_138524;
        case 0x138528u: goto label_138528;
        case 0x13852cu: goto label_13852c;
        case 0x138530u: goto label_138530;
        case 0x138534u: goto label_138534;
        case 0x138538u: goto label_138538;
        case 0x13853cu: goto label_13853c;
        case 0x138540u: goto label_138540;
        case 0x138544u: goto label_138544;
        case 0x138548u: goto label_138548;
        case 0x13854cu: goto label_13854c;
        case 0x138550u: goto label_138550;
        case 0x138554u: goto label_138554;
        case 0x138558u: goto label_138558;
        case 0x13855cu: goto label_13855c;
        case 0x138560u: goto label_138560;
        case 0x138564u: goto label_138564;
        case 0x138568u: goto label_138568;
        case 0x13856cu: goto label_13856c;
        case 0x138570u: goto label_138570;
        case 0x138574u: goto label_138574;
        case 0x138578u: goto label_138578;
        case 0x13857cu: goto label_13857c;
        case 0x138580u: goto label_138580;
        case 0x138584u: goto label_138584;
        case 0x138588u: goto label_138588;
        case 0x13858cu: goto label_13858c;
        case 0x138590u: goto label_138590;
        case 0x138594u: goto label_138594;
        case 0x138598u: goto label_138598;
        case 0x13859cu: goto label_13859c;
        case 0x1385a0u: goto label_1385a0;
        case 0x1385a4u: goto label_1385a4;
        case 0x1385a8u: goto label_1385a8;
        case 0x1385acu: goto label_1385ac;
        case 0x1385b0u: goto label_1385b0;
        case 0x1385b4u: goto label_1385b4;
        case 0x1385b8u: goto label_1385b8;
        case 0x1385bcu: goto label_1385bc;
        case 0x1385c0u: goto label_1385c0;
        case 0x1385c4u: goto label_1385c4;
        case 0x1385c8u: goto label_1385c8;
        case 0x1385ccu: goto label_1385cc;
        case 0x1385d0u: goto label_1385d0;
        case 0x1385d4u: goto label_1385d4;
        case 0x1385d8u: goto label_1385d8;
        case 0x1385dcu: goto label_1385dc;
        case 0x1385e0u: goto label_1385e0;
        case 0x1385e4u: goto label_1385e4;
        case 0x1385e8u: goto label_1385e8;
        case 0x1385ecu: goto label_1385ec;
        case 0x1385f0u: goto label_1385f0;
        case 0x1385f4u: goto label_1385f4;
        case 0x1385f8u: goto label_1385f8;
        case 0x1385fcu: goto label_1385fc;
        case 0x138600u: goto label_138600;
        case 0x138604u: goto label_138604;
        case 0x138608u: goto label_138608;
        case 0x13860cu: goto label_13860c;
        case 0x138610u: goto label_138610;
        case 0x138614u: goto label_138614;
        case 0x138618u: goto label_138618;
        case 0x13861cu: goto label_13861c;
        case 0x138620u: goto label_138620;
        case 0x138624u: goto label_138624;
        case 0x138628u: goto label_138628;
        case 0x13862cu: goto label_13862c;
        case 0x138630u: goto label_138630;
        case 0x138634u: goto label_138634;
        case 0x138638u: goto label_138638;
        case 0x13863cu: goto label_13863c;
        case 0x138640u: goto label_138640;
        case 0x138644u: goto label_138644;
        case 0x138648u: goto label_138648;
        case 0x13864cu: goto label_13864c;
        case 0x138650u: goto label_138650;
        case 0x138654u: goto label_138654;
        case 0x138658u: goto label_138658;
        case 0x13865cu: goto label_13865c;
        case 0x138660u: goto label_138660;
        case 0x138664u: goto label_138664;
        case 0x138668u: goto label_138668;
        case 0x13866cu: goto label_13866c;
        case 0x138670u: goto label_138670;
        case 0x138674u: goto label_138674;
        case 0x138678u: goto label_138678;
        case 0x13867cu: goto label_13867c;
        case 0x138680u: goto label_138680;
        case 0x138684u: goto label_138684;
        case 0x138688u: goto label_138688;
        case 0x13868cu: goto label_13868c;
        case 0x138690u: goto label_138690;
        case 0x138694u: goto label_138694;
        case 0x138698u: goto label_138698;
        case 0x13869cu: goto label_13869c;
        case 0x1386a0u: goto label_1386a0;
        case 0x1386a4u: goto label_1386a4;
        case 0x1386a8u: goto label_1386a8;
        case 0x1386acu: goto label_1386ac;
        case 0x1386b0u: goto label_1386b0;
        case 0x1386b4u: goto label_1386b4;
        case 0x1386b8u: goto label_1386b8;
        case 0x1386bcu: goto label_1386bc;
        case 0x1386c0u: goto label_1386c0;
        case 0x1386c4u: goto label_1386c4;
        case 0x1386c8u: goto label_1386c8;
        case 0x1386ccu: goto label_1386cc;
        case 0x1386d0u: goto label_1386d0;
        case 0x1386d4u: goto label_1386d4;
        case 0x1386d8u: goto label_1386d8;
        case 0x1386dcu: goto label_1386dc;
        case 0x1386e0u: goto label_1386e0;
        case 0x1386e4u: goto label_1386e4;
        case 0x1386e8u: goto label_1386e8;
        case 0x1386ecu: goto label_1386ec;
        case 0x1386f0u: goto label_1386f0;
        case 0x1386f4u: goto label_1386f4;
        case 0x1386f8u: goto label_1386f8;
        case 0x1386fcu: goto label_1386fc;
        case 0x138700u: goto label_138700;
        case 0x138704u: goto label_138704;
        case 0x138708u: goto label_138708;
        case 0x13870cu: goto label_13870c;
        case 0x138710u: goto label_138710;
        case 0x138714u: goto label_138714;
        case 0x138718u: goto label_138718;
        case 0x13871cu: goto label_13871c;
        case 0x138720u: goto label_138720;
        case 0x138724u: goto label_138724;
        case 0x138728u: goto label_138728;
        case 0x13872cu: goto label_13872c;
        case 0x138730u: goto label_138730;
        case 0x138734u: goto label_138734;
        case 0x138738u: goto label_138738;
        case 0x13873cu: goto label_13873c;
        case 0x138740u: goto label_138740;
        case 0x138744u: goto label_138744;
        case 0x138748u: goto label_138748;
        case 0x13874cu: goto label_13874c;
        case 0x138750u: goto label_138750;
        case 0x138754u: goto label_138754;
        case 0x138758u: goto label_138758;
        case 0x13875cu: goto label_13875c;
        case 0x138760u: goto label_138760;
        case 0x138764u: goto label_138764;
        case 0x138768u: goto label_138768;
        case 0x13876cu: goto label_13876c;
        case 0x138770u: goto label_138770;
        case 0x138774u: goto label_138774;
        case 0x138778u: goto label_138778;
        case 0x13877cu: goto label_13877c;
        case 0x138780u: goto label_138780;
        case 0x138784u: goto label_138784;
        case 0x138788u: goto label_138788;
        case 0x13878cu: goto label_13878c;
        case 0x138790u: goto label_138790;
        case 0x138794u: goto label_138794;
        case 0x138798u: goto label_138798;
        case 0x13879cu: goto label_13879c;
        case 0x1387a0u: goto label_1387a0;
        case 0x1387a4u: goto label_1387a4;
        case 0x1387a8u: goto label_1387a8;
        case 0x1387acu: goto label_1387ac;
        case 0x1387b0u: goto label_1387b0;
        case 0x1387b4u: goto label_1387b4;
        case 0x1387b8u: goto label_1387b8;
        case 0x1387bcu: goto label_1387bc;
        case 0x1387c0u: goto label_1387c0;
        case 0x1387c4u: goto label_1387c4;
        case 0x1387c8u: goto label_1387c8;
        case 0x1387ccu: goto label_1387cc;
        default: break;
    }

    ctx->pc = 0x137f08u;

label_137f08:
    // 0x137f08: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x137f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_137f0c:
    // 0x137f0c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x137f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_137f10:
    // 0x137f10: 0x7fb30110  sq          $s3, 0x110($sp)
    ctx->pc = 0x137f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 19));
label_137f14:
    // 0x137f14: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x137f14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_137f18:
    // 0x137f18: 0x7fb500f0  sq          $s5, 0xF0($sp)
    ctx->pc = 0x137f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 21));
label_137f1c:
    // 0x137f1c: 0x7fb10130  sq          $s1, 0x130($sp)
    ctx->pc = 0x137f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 17));
label_137f20:
    // 0x137f20: 0x7fb20120  sq          $s2, 0x120($sp)
    ctx->pc = 0x137f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 18));
label_137f24:
    // 0x137f24: 0x7fb40100  sq          $s4, 0x100($sp)
    ctx->pc = 0x137f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 20));
label_137f28:
    // 0x137f28: 0x7fb600e0  sq          $s6, 0xE0($sp)
    ctx->pc = 0x137f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 22));
label_137f2c:
    // 0x137f2c: 0x7fb700d0  sq          $s7, 0xD0($sp)
    ctx->pc = 0x137f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 23));
label_137f30:
    // 0x137f30: 0x7fbe00c0  sq          $fp, 0xC0($sp)
    ctx->pc = 0x137f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 30));
label_137f34:
    // 0x137f34: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x137f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_137f38:
    // 0x137f38: 0xe7b60160  swc1        $f22, 0x160($sp)
    ctx->pc = 0x137f38u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_137f3c:
    // 0x137f3c: 0xe7b50158  swc1        $f21, 0x158($sp)
    ctx->pc = 0x137f3cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 344), bits); }
label_137f40:
    // 0x137f40: 0xe7b40150  swc1        $f20, 0x150($sp)
    ctx->pc = 0x137f40u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_137f44:
    // 0x137f44: 0x8c448b2c  lw          $a0, -0x74D4($v0)
    ctx->pc = 0x137f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
label_137f48:
    // 0x137f48: 0x7fb00140  sq          $s0, 0x140($sp)
    ctx->pc = 0x137f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 16));
label_137f4c:
    // 0x137f4c: 0x8c90006c  lw          $s0, 0x6C($a0)
    ctx->pc = 0x137f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
label_137f50:
    // 0x137f50: 0x8e741538  lw          $s4, 0x1538($s3)
    ctx->pc = 0x137f50u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5432)));
label_137f54:
    // 0x137f54: 0xc0640b8  jal         func_1902E0
label_137f58:
    if (ctx->pc == 0x137F58u) {
        ctx->pc = 0x137F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F54u;
        // 0x137f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F5Cu;
        goto label_137f5c;
    }
    ctx->pc = 0x137F54u;
    SET_GPR_U32(ctx, 31, 0x137F5Cu);
    ctx->pc = 0x137F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137F54u;
    // 0x137f58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1902E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1902E0u, 0x137F54u, 0x137F5Cu)) {
        return;
    }
    ctx->pc = 0x137F5Cu;
label_137f5c:
    // 0x137f5c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x137f5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137f60:
    // 0x137f60: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x137f60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_137f64:
    // 0x137f64: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x137f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_137f68:
    // 0x137f68: 0x3442423f  ori         $v0, $v0, 0x423F
    ctx->pc = 0x137f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16959);
label_137f6c:
    // 0x137f6c: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
label_137f70:
    if (ctx->pc == 0x137F70u) {
        ctx->pc = 0x137F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F6Cu;
        // 0x137f70: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137F74u;
        goto label_137f74;
    }
    ctx->pc = 0x137F6Cu;
    {
        const bool branch_taken_0x137f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x137f6c) {
            ctx->pc = 0x137F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x137F6Cu;
            // 0x137f70: 0x8e620034  lw          $v0, 0x34($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x137F84u;
            goto label_137f84;
        }
    }
    ctx->pc = 0x137F74u;
label_137f74:
    // 0x137f74: 0x8e020064  lw          $v0, 0x64($s0)
    ctx->pc = 0x137f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 100)));
label_137f78:
    // 0x137f78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x137f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_137f7c:
    // 0x137f7c: 0xae020064  sw          $v0, 0x64($s0)
    ctx->pc = 0x137f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
label_137f80:
    // 0x137f80: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x137f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
label_137f84:
    // 0x137f84: 0x26700004  addiu       $s0, $s3, 0x4
    ctx->pc = 0x137f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_137f88:
    // 0x137f88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x137f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137f8c:
    // 0x137f8c: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x137f8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_137f90:
    // 0x137f90: 0xafb000a0  sw          $s0, 0xA0($sp)
    ctx->pc = 0x137f90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 16));
label_137f94:
    // 0x137f94: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x137f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_137f98:
    // 0x137f98: 0x60f809  jalr        $v1
label_137f9c:
    if (ctx->pc == 0x137F9Cu) {
        ctx->pc = 0x137F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F98u;
        // 0x137f9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FA0u;
        goto label_137fa0;
    }
    ctx->pc = 0x137F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x137FA0u);
        ctx->pc = 0x137F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137F98u;
        // 0x137f9c: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x137F98u, 0x137FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x137FA0u;
label_137fa0:
    // 0x137fa0: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x137fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
label_137fa4:
    // 0x137fa4: 0x3c030014  lui         $v1, 0x14
    ctx->pc = 0x137fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20 << 16));
label_137fa8:
    // 0x137fa8: 0x24428db0  addiu       $v0, $v0, -0x7250
    ctx->pc = 0x137fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938032));
label_137fac:
    // 0x137fac: 0x24638e88  addiu       $v1, $v1, -0x7178
    ctx->pc = 0x137facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938248));
label_137fb0:
    // 0x137fb0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x137fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_137fb4:
    // 0x137fb4: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x137fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
label_137fb8:
    // 0x137fb8: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x137fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_137fbc:
    // 0x137fbc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x137fbcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_137fc0:
    // 0x137fc0: 0xafb3001c  sw          $s3, 0x1C($sp)
    ctx->pc = 0x137fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 19));
label_137fc4:
    // 0x137fc4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x137fc4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137fc8:
    // 0x137fc8: 0x8c918668  lw          $s1, -0x7998($a0)
    ctx->pc = 0x137fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294936168)));
label_137fcc:
    // 0x137fcc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x137fccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_137fd0:
    // 0x137fd0: 0x8ea200c8  lw          $v0, 0xC8($s5)
    ctx->pc = 0x137fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 200)));
label_137fd4:
    // 0x137fd4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x137fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_137fd8:
    // 0x137fd8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x137fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_137fdc:
    // 0x137fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x137fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_137fe0:
    // 0x137fe0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x137fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_137fe4:
    // 0x137fe4: 0xc0596ae  jal         func_165AB8
label_137fe8:
    if (ctx->pc == 0x137FE8u) {
        ctx->pc = 0x137FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FE4u;
        // 0x137fe8: 0x8c451a84  lw          $a1, 0x1A84($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6788)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FECu;
        goto label_137fec;
    }
    ctx->pc = 0x137FE4u;
    SET_GPR_U32(ctx, 31, 0x137FECu);
    ctx->pc = 0x137FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x137FE4u;
    // 0x137fe8: 0x8c451a84  lw          $a1, 0x1A84($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6788)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AB8u, 0x137FE4u, 0x137FECu)) {
        return;
    }
    ctx->pc = 0x137FECu;
label_137fec:
    // 0x137fec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x137fecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_137ff0:
    // 0x137ff0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x137ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_137ff4:
    // 0x137ff4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_137ff8:
    if (ctx->pc == 0x137FF8u) {
        ctx->pc = 0x137FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FF4u;
        // 0x137ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x137FFCu;
        goto label_137ffc;
    }
    ctx->pc = 0x137FF4u;
    {
        const bool branch_taken_0x137ff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x137FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x137FF4u;
        // 0x137ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x137ff4) {
            ctx->pc = 0x138014u;
            goto label_138014;
        }
    }
    ctx->pc = 0x137FFCu;
label_137ffc:
    // 0x137ffc: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x137ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_138000:
    // 0x138000: 0xc0595c6  jal         func_165718
label_138004:
    if (ctx->pc == 0x138004u) {
        ctx->pc = 0x138004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138000u;
        // 0x138004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138008u;
        goto label_138008;
    }
    ctx->pc = 0x138000u;
    SET_GPR_U32(ctx, 31, 0x138008u);
    ctx->pc = 0x138004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138000u;
    // 0x138004: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165718u, 0x138000u, 0x138008u)) {
        return;
    }
    ctx->pc = 0x138008u;
label_138008:
    // 0x138008: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x138008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_13800c:
    // 0x13800c: 0xc0596be  jal         func_165AF8
label_138010:
    if (ctx->pc == 0x138010u) {
        ctx->pc = 0x138010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13800Cu;
        // 0x138010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138014u;
        goto label_138014;
    }
    ctx->pc = 0x13800Cu;
    SET_GPR_U32(ctx, 31, 0x138014u);
    ctx->pc = 0x138010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13800Cu;
    // 0x138010: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165AF8u, 0x13800Cu, 0x138014u)) {
        return;
    }
    ctx->pc = 0x138014u;
label_138014:
    // 0x138014: 0x8e7016cc  lw          $s0, 0x16CC($s3)
    ctx->pc = 0x138014u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 5836)));
label_138018:
    // 0x138018: 0x24050063  addiu       $a1, $zero, 0x63
    ctx->pc = 0x138018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_13801c:
    // 0x13801c: 0xc04ddb6  jal         func_1376D8
label_138020:
    if (ctx->pc == 0x138020u) {
        ctx->pc = 0x138020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13801Cu;
        // 0x138020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138024u;
        goto label_138024;
    }
    ctx->pc = 0x13801Cu;
    SET_GPR_U32(ctx, 31, 0x138024u);
    ctx->pc = 0x138020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13801Cu;
    // 0x138020: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1376D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1376D8u, 0x13801Cu, 0x138024u)) {
        return;
    }
    ctx->pc = 0x138024u;
label_138024:
    // 0x138024: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138028:
    // 0x138028: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x138028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_13802c:
    // 0x13802c: 0x1082001b  beq         $a0, $v0, . + 4 + (0x1B << 2)
label_138030:
    if (ctx->pc == 0x138030u) {
        ctx->pc = 0x138030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13802Cu;
        // 0x138030: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138034u;
        goto label_138034;
    }
    ctx->pc = 0x13802Cu;
    {
        const bool branch_taken_0x13802c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x138030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13802Cu;
        // 0x138030: 0x41100  sll         $v0, $a0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13802c) {
            ctx->pc = 0x13809Cu;
            goto label_13809c;
        }
    }
    ctx->pc = 0x138034u;
label_138034:
    // 0x138034: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x138034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_138038:
    // 0x138038: 0x8e641ab0  lw          $a0, 0x1AB0($s3)
    ctx->pc = 0x138038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6832)));
label_13803c:
    // 0x13803c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13803cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_138040:
    // 0x138040: 0xc08ad6a  jal         func_22B5A8
label_138044:
    if (ctx->pc == 0x138044u) {
        ctx->pc = 0x138044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138040u;
        // 0x138044: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138048u;
        goto label_138048;
    }
    ctx->pc = 0x138040u;
    SET_GPR_U32(ctx, 31, 0x138048u);
    ctx->pc = 0x138044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138040u;
    // 0x138044: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B5A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B5A8u, 0x138040u, 0x138048u)) {
        return;
    }
    ctx->pc = 0x138048u;
label_138048:
    // 0x138048: 0xc097a3e  jal         func_25E8F8
label_13804c:
    if (ctx->pc == 0x13804Cu) {
        ctx->pc = 0x13804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138048u;
        // 0x13804c: 0x8e641ab0  lw          $a0, 0x1AB0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138050u;
        goto label_138050;
    }
    ctx->pc = 0x138048u;
    SET_GPR_U32(ctx, 31, 0x138050u);
    ctx->pc = 0x13804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138048u;
    // 0x13804c: 0x8e641ab0  lw          $a0, 0x1AB0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6832)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25E8F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25E8F8u, 0x138048u, 0x138050u)) {
        return;
    }
    ctx->pc = 0x138050u;
label_138050:
    // 0x138050: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_138054:
    if (ctx->pc == 0x138054u) {
        ctx->pc = 0x138058u;
        goto label_138058;
    }
    ctx->pc = 0x138050u;
    {
        const bool branch_taken_0x138050 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x138050) {
            ctx->pc = 0x13809Cu;
            goto label_13809c;
        }
    }
    ctx->pc = 0x138058u;
label_138058:
    // 0x138058: 0x8e641ab0  lw          $a0, 0x1AB0($s3)
    ctx->pc = 0x138058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6832)));
label_13805c:
    // 0x13805c: 0x6aa200db  ldl         $v0, 0xDB($s5)
    ctx->pc = 0x13805cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 219); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_138060:
    // 0x138060: 0x6ea200d4  ldr         $v0, 0xD4($s5)
    ctx->pc = 0x138060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 212); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_138064:
    // 0x138064: 0x6aa300e3  ldl         $v1, 0xE3($s5)
    ctx->pc = 0x138064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 227); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_138068:
    // 0x138068: 0x6ea300dc  ldr         $v1, 0xDC($s5)
    ctx->pc = 0x138068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 220); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_13806c:
    // 0x13806c: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x13806cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_138070:
    // 0x138070: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x138070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_138074:
    // 0x138074: 0xb3a3002f  sdl         $v1, 0x2F($sp)
    ctx->pc = 0x138074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_138078:
    // 0x138078: 0xb7a30028  sdr         $v1, 0x28($sp)
    ctx->pc = 0x138078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13807c:
    // 0x13807c: 0xc095c4a  jal         func_257128
label_138080:
    if (ctx->pc == 0x138080u) {
        ctx->pc = 0x138080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13807Cu;
        // 0x138080: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138084u;
        goto label_138084;
    }
    ctx->pc = 0x13807Cu;
    SET_GPR_U32(ctx, 31, 0x138084u);
    ctx->pc = 0x138080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13807Cu;
    // 0x138080: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x257128u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x257128u, 0x13807Cu, 0x138084u)) {
        return;
    }
    ctx->pc = 0x138084u;
label_138084:
    // 0x138084: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x138084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_138088:
    // 0x138088: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x138088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_13808c:
    // 0x13808c: 0x8e651ab0  lw          $a1, 0x1AB0($s3)
    ctx->pc = 0x13808cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6832)));
label_138090:
    // 0x138090: 0x8c64870c  lw          $a0, -0x78F4($v1)
    ctx->pc = 0x138090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936332)));
label_138094:
    // 0x138094: 0xc05eeaa  jal         func_17BAA8
label_138098:
    if (ctx->pc == 0x138098u) {
        ctx->pc = 0x138098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138094u;
        // 0x138098: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13809Cu;
        goto label_13809c;
    }
    ctx->pc = 0x138094u;
    SET_GPR_U32(ctx, 31, 0x13809Cu);
    ctx->pc = 0x138098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138094u;
    // 0x138098: 0x8c460008  lw          $a2, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BAA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BAA8u, 0x138094u, 0x13809Cu)) {
        return;
    }
    ctx->pc = 0x13809Cu;
label_13809c:
    // 0x13809c: 0x4480b000  mtc1        $zero, $f22
    ctx->pc = 0x13809cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1380a0:
    // 0x1380a0: 0x128001b8  beqz        $s4, . + 4 + (0x1B8 << 2)
label_1380a4:
    if (ctx->pc == 0x1380A4u) {
        ctx->pc = 0x1380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380A0u;
        // 0x1380a4: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380A8u;
        goto label_1380a8;
    }
    ctx->pc = 0x1380A0u;
    {
        const bool branch_taken_0x1380a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1380A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380A0u;
        // 0x1380a4: 0x27b20020  addiu       $s2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1380a0) {
            ctx->pc = 0x138784u;
            goto label_138784;
        }
    }
    ctx->pc = 0x1380A8u;
label_1380a8:
    // 0x1380a8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1380a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1380ac:
    // 0x1380ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1380acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1380b0:
    // 0x1380b0: 0xc04f0c2  jal         func_13C308
label_1380b4:
    if (ctx->pc == 0x1380B4u) {
        ctx->pc = 0x1380B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380B0u;
        // 0x1380b4: 0x26910040  addiu       $s1, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380B8u;
        goto label_1380b8;
    }
    ctx->pc = 0x1380B0u;
    SET_GPR_U32(ctx, 31, 0x1380B8u);
    ctx->pc = 0x1380B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380B0u;
    // 0x1380b4: 0x26910040  addiu       $s1, $s4, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1380B0u, 0x1380B8u)) {
        return;
    }
    ctx->pc = 0x1380B8u;
label_1380b8:
    // 0x1380b8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1380b8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1380bc:
    // 0x1380bc: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x1380bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1380c0:
    // 0x1380c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1380c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1380c4:
    // 0x1380c4: 0xc04f0c2  jal         func_13C308
label_1380c8:
    if (ctx->pc == 0x1380C8u) {
        ctx->pc = 0x1380C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1380C4u;
        // 0x1380c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1380CCu;
        goto label_1380cc;
    }
    ctx->pc = 0x1380C4u;
    SET_GPR_U32(ctx, 31, 0x1380CCu);
    ctx->pc = 0x1380C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1380C4u;
    // 0x1380c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1380C4u, 0x1380CCu)) {
        return;
    }
    ctx->pc = 0x1380CCu;
label_1380cc:
    // 0x1380cc: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1380ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1380d0:
    // 0x1380d0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x1380d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1380d4:
    // 0x1380d4: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1380d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1380d8:
    // 0x1380d8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1380d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1380dc:
    // 0x1380dc: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x1380dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1380e0:
    // 0x1380e0: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x1380e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1380e4:
    // 0x1380e4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1380e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1380e8:
    // 0x1380e8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1380e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1380ec:
    // 0x1380ec: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1380ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1380f0:
    // 0x1380f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1380f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1380f4:
    // 0x1380f4: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1380f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1380f8:
    // 0x1380f8: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1380f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1380fc:
    // 0x1380fc: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x1380fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_138100:
    // 0x138100: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x138100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_138104:
    // 0x138104: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x138104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_138108:
    // 0x138108: 0xb3a30057  sdl         $v1, 0x57($sp)
    ctx->pc = 0x138108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13810c:
    // 0x13810c: 0xb7a30050  sdr         $v1, 0x50($sp)
    ctx->pc = 0x13810cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_138110:
    // 0x138110: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x138110u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_138114:
    // 0x138114: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x138114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_138118:
    // 0x138118: 0x6ba70057  ldl         $a3, 0x57($sp)
    ctx->pc = 0x138118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_13811c:
    // 0x13811c: 0x6fa70050  ldr         $a3, 0x50($sp)
    ctx->pc = 0x13811cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_138120:
    // 0x138120: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x138120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_138124:
    // 0x138124: 0xb3a70047  sdl         $a3, 0x47($sp)
    ctx->pc = 0x138124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_138128:
    // 0x138128: 0xb7a70040  sdr         $a3, 0x40($sp)
    ctx->pc = 0x138128u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_13812c:
    // 0x13812c: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x13812cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
label_138130:
    // 0x138130: 0xc04642c  jal         func_1190B0
label_138134:
    if (ctx->pc == 0x138134u) {
        ctx->pc = 0x138134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138130u;
        // 0x138134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138138u;
        goto label_138138;
    }
    ctx->pc = 0x138130u;
    SET_GPR_U32(ctx, 31, 0x138138u);
    ctx->pc = 0x138134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138130u;
    // 0x138134: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x138130u, 0x138138u)) {
        return;
    }
    ctx->pc = 0x138138u;
label_138138:
    // 0x138138: 0x0  nop
    ctx->pc = 0x138138u;
    // NOP
label_13813c:
    // 0x13813c: 0x0  nop
    ctx->pc = 0x13813cu;
    // NOP
label_138140:
    // 0x138140: 0x46000044  c1          0x44
    ctx->pc = 0x138140u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_138144:
    // 0x138144: 0x4601b034  c.lt.s      $f22, $f1
    ctx->pc = 0x138144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[22], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138148:
    // 0x138148: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x138148u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_13814c:
    // 0x13814c: 0x4501008a  bc1t        . + 4 + (0x8A << 2)
label_138150:
    if (ctx->pc == 0x138150u) {
        ctx->pc = 0x138150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13814Cu;
        // 0x138150: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138154u;
        goto label_138154;
    }
    ctx->pc = 0x13814Cu;
    {
        const bool branch_taken_0x13814c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13814Cu;
        // 0x138150: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13814c) {
            ctx->pc = 0x138378u;
            goto label_138378;
        }
    }
    ctx->pc = 0x138154u;
label_138154:
    // 0x138154: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x138154u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_138158:
    // 0x138158: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x138158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13815c:
    // 0x13815c: 0x0  nop
    ctx->pc = 0x13815cu;
    // NOP
label_138160:
    // 0x138160: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x138160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138164:
    // 0x138164: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x138164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138168:
    // 0x138168: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x138168u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_13816c:
    // 0x13816c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x13816cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_138170:
    // 0x138170: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x138170u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_138174:
    // 0x138174: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x138174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_138178:
    // 0x138178: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x138178u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_13817c:
    // 0x13817c: 0xe7a20048  swc1        $f2, 0x48($sp)
    ctx->pc = 0x13817cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_138180:
    // 0x138180: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x138180u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_138184:
    // 0x138184: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138188:
    // 0x138188: 0xc04f0f4  jal         func_13C3D0
label_13818c:
    if (ctx->pc == 0x13818Cu) {
        ctx->pc = 0x13818Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138188u;
        // 0x13818c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138190u;
        goto label_138190;
    }
    ctx->pc = 0x138188u;
    SET_GPR_U32(ctx, 31, 0x138190u);
    ctx->pc = 0x13818Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138188u;
    // 0x13818c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3D0u, 0x138188u, 0x138190u)) {
        return;
    }
    ctx->pc = 0x138190u;
label_138190:
    // 0x138190: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x138190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_138194:
    // 0x138194: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x138194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_138198:
    // 0x138198: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x138198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13819c:
    // 0x13819c: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x13819cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1381a0:
    // 0x1381a0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1381a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1381a4:
    // 0x1381a4: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x1381a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1381a8:
    // 0x1381a8: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x1381a8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_1381ac:
    // 0x1381ac: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1381acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1381b0:
    // 0x1381b0: 0x3c013f7a  lui         $at, 0x3F7A
    ctx->pc = 0x1381b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16250 << 16));
label_1381b4:
    // 0x1381b4: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x1381b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_1381b8:
    // 0x1381b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1381b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1381bc:
    // 0x1381bc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x1381bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_1381c0:
    // 0x1381c0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1381c0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1381c4:
    // 0x1381c4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1381c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1381c8:
    // 0x1381c8: 0x46002034  c.lt.s      $f4, $f0
    ctx->pc = 0x1381c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1381cc:
    // 0x1381cc: 0x0  nop
    ctx->pc = 0x1381ccu;
    // NOP
label_1381d0:
    // 0x1381d0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1381d4:
    if (ctx->pc == 0x1381D4u) {
        ctx->pc = 0x1381D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381D0u;
        // 0x1381d4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381D8u;
        goto label_1381d8;
    }
    ctx->pc = 0x1381D0u;
    {
        const bool branch_taken_0x1381d0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1381D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381D0u;
        // 0x1381d4: 0x200f02d  daddu       $fp, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381d0) {
            ctx->pc = 0x1381DCu;
            goto label_1381dc;
        }
    }
    ctx->pc = 0x1381D8u;
label_1381d8:
    // 0x1381d8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1381d8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1381dc:
    // 0x1381dc: 0x12c00169  beqz        $s6, . + 4 + (0x169 << 2)
label_1381e0:
    if (ctx->pc == 0x1381E0u) {
        ctx->pc = 0x1381E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381DCu;
        // 0x1381e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381E4u;
        goto label_1381e4;
    }
    ctx->pc = 0x1381DCu;
    {
        const bool branch_taken_0x1381dc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1381E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381DCu;
        // 0x1381e0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1381dc) {
            ctx->pc = 0x138784u;
            goto label_138784;
        }
    }
    ctx->pc = 0x1381E4u;
label_1381e4:
    // 0x1381e4: 0x8c43870c  lw          $v1, -0x78F4($v0)
    ctx->pc = 0x1381e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
label_1381e8:
    // 0x1381e8: 0xc05e396  jal         func_178E58
label_1381ec:
    if (ctx->pc == 0x1381ECu) {
        ctx->pc = 0x1381ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381E8u;
        // 0x1381ec: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1381F0u;
        goto label_1381f0;
    }
    ctx->pc = 0x1381E8u;
    SET_GPR_U32(ctx, 31, 0x1381F0u);
    ctx->pc = 0x1381ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381E8u;
    // 0x1381ec: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x178E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x178E58u, 0x1381E8u, 0x1381F0u)) {
        return;
    }
    ctx->pc = 0x1381F0u;
label_1381f0:
    // 0x1381f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1381f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1381f4:
    // 0x1381f4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1381f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1381f8:
    // 0x1381f8: 0xc062018  jal         func_188060
label_1381fc:
    if (ctx->pc == 0x1381FCu) {
        ctx->pc = 0x1381FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1381F8u;
        // 0x1381fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138200u;
        goto label_138200;
    }
    ctx->pc = 0x1381F8u;
    SET_GPR_U32(ctx, 31, 0x138200u);
    ctx->pc = 0x1381FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1381F8u;
    // 0x1381fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188060u, 0x1381F8u, 0x138200u)) {
        return;
    }
    ctx->pc = 0x138200u;
label_138200:
    // 0x138200: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138204:
    // 0x138204: 0xc04f0c2  jal         func_13C308
label_138208:
    if (ctx->pc == 0x138208u) {
        ctx->pc = 0x138208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138204u;
        // 0x138208: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13820Cu;
        goto label_13820c;
    }
    ctx->pc = 0x138204u;
    SET_GPR_U32(ctx, 31, 0x13820Cu);
    ctx->pc = 0x138208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138204u;
    // 0x138208: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x138204u, 0x13820Cu)) {
        return;
    }
    ctx->pc = 0x13820Cu;
label_13820c:
    // 0x13820c: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x13820cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138210:
    // 0x138210: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138214:
    // 0x138214: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x138214u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
label_138218:
    // 0x138218: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x138218u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_13821c:
    // 0x13821c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13821cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_138220:
    // 0x138220: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_138224:
    // 0x138224: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x138224u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_138228:
    // 0x138228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x138228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13822c:
    // 0x13822c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x13822cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_138230:
    // 0x138230: 0xc086156  jal         func_218558
label_138234:
    if (ctx->pc == 0x138234u) {
        ctx->pc = 0x138234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138230u;
        // 0x138234: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138238u;
        goto label_138238;
    }
    ctx->pc = 0x138230u;
    SET_GPR_U32(ctx, 31, 0x138238u);
    ctx->pc = 0x138234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138230u;
    // 0x138234: 0xe7a00034  swc1        $f0, 0x34($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x218558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x218558u, 0x138230u, 0x138238u)) {
        return;
    }
    ctx->pc = 0x138238u;
label_138238:
    // 0x138238: 0x14400153  bnez        $v0, . + 4 + (0x153 << 2)
label_13823c:
    if (ctx->pc == 0x13823Cu) {
        ctx->pc = 0x13823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138238u;
        // 0x13823c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138240u;
        goto label_138240;
    }
    ctx->pc = 0x138238u;
    {
        const bool branch_taken_0x138238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13823Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138238u;
        // 0x13823c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138238) {
            ctx->pc = 0x138788u;
            goto label_138788;
        }
    }
    ctx->pc = 0x138240u;
label_138240:
    // 0x138240: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x138240u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_138244:
    // 0x138244: 0xc04de50  jal         func_137940
label_138248:
    if (ctx->pc == 0x138248u) {
        ctx->pc = 0x138248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138244u;
        // 0x138248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13824Cu;
        goto label_13824c;
    }
    ctx->pc = 0x138244u;
    SET_GPR_U32(ctx, 31, 0x13824Cu);
    ctx->pc = 0x138248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138244u;
    // 0x138248: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x137940u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137940u, 0x138244u, 0x13824Cu)) {
        return;
    }
    ctx->pc = 0x13824Cu;
label_13824c:
    // 0x13824c: 0x14400068  bnez        $v0, . + 4 + (0x68 << 2)
label_138250:
    if (ctx->pc == 0x138250u) {
        ctx->pc = 0x138250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13824Cu;
        // 0x138250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138254u;
        goto label_138254;
    }
    ctx->pc = 0x13824Cu;
    {
        const bool branch_taken_0x13824c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13824Cu;
        // 0x138250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13824c) {
            ctx->pc = 0x1383F0u;
            goto label_1383f0;
        }
    }
    ctx->pc = 0x138254u;
label_138254:
    // 0x138254: 0xc04f0c2  jal         func_13C308
label_138258:
    if (ctx->pc == 0x138258u) {
        ctx->pc = 0x138258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138254u;
        // 0x138258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13825Cu;
        goto label_13825c;
    }
    ctx->pc = 0x138254u;
    SET_GPR_U32(ctx, 31, 0x13825Cu);
    ctx->pc = 0x138258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138254u;
    // 0x138258: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x138254u, 0x13825Cu)) {
        return;
    }
    ctx->pc = 0x13825Cu;
label_13825c:
    // 0x13825c: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x13825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138260:
    // 0x138260: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x138260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_138264:
    // 0x138264: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x138264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138268:
    // 0x138268: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x138268u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_13826c:
    // 0x13826c: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x13826cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_138270:
    // 0x138270: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x138270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138274:
    // 0x138274: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x138274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_138278:
    // 0x138278: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x138278u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_13827c:
    // 0x13827c: 0xe7a10070  swc1        $f1, 0x70($sp)
    ctx->pc = 0x13827cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_138280:
    // 0x138280: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x138280u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_138284:
    // 0x138284: 0xe7a20074  swc1        $f2, 0x74($sp)
    ctx->pc = 0x138284u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_138288:
    // 0x138288: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x138288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_13828c:
    // 0x13828c: 0x6ba60077  ldl         $a2, 0x77($sp)
    ctx->pc = 0x13828cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_138290:
    // 0x138290: 0x6fa60070  ldr         $a2, 0x70($sp)
    ctx->pc = 0x138290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_138294:
    // 0x138294: 0x8fa70078  lw          $a3, 0x78($sp)
    ctx->pc = 0x138294u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_138298:
    // 0x138298: 0xb3a60067  sdl         $a2, 0x67($sp)
    ctx->pc = 0x138298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13829c:
    // 0x13829c: 0xb7a60060  sdr         $a2, 0x60($sp)
    ctx->pc = 0x13829cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1382a0:
    // 0x1382a0: 0xafa70068  sw          $a3, 0x68($sp)
    ctx->pc = 0x1382a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 7));
label_1382a4:
    // 0x1382a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1382a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1382a8:
    // 0x1382a8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1382a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1382ac:
    // 0x1382ac: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x1382acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1382b0:
    // 0x1382b0: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1382b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_1382b4:
    // 0x1382b4: 0x6ba50067  ldl         $a1, 0x67($sp)
    ctx->pc = 0x1382b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1382b8:
    // 0x1382b8: 0x6fa50060  ldr         $a1, 0x60($sp)
    ctx->pc = 0x1382b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1382bc:
    // 0x1382bc: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1382bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1382c0:
    // 0x1382c0: 0xb3a50057  sdl         $a1, 0x57($sp)
    ctx->pc = 0x1382c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1382c4:
    // 0x1382c4: 0xb7a50050  sdr         $a1, 0x50($sp)
    ctx->pc = 0x1382c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1382c8:
    // 0x1382c8: 0xafa60058  sw          $a2, 0x58($sp)
    ctx->pc = 0x1382c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 6));
label_1382cc:
    // 0x1382cc: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x1382ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_1382d0:
    // 0x1382d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1382d4:
    if (ctx->pc == 0x1382D4u) {
        ctx->pc = 0x1382D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382D0u;
        // 0x1382d4: 0xc6a300b4  lwc1        $f3, 0xB4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1382D8u;
        goto label_1382d8;
    }
    ctx->pc = 0x1382D0u;
    {
        const bool branch_taken_0x1382d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382D0u;
        // 0x1382d4: 0xc6a300b4  lwc1        $f3, 0xB4($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382d0) {
            ctx->pc = 0x138300u;
            goto label_138300;
        }
    }
    ctx->pc = 0x1382D8u;
label_1382d8:
    // 0x1382d8: 0x8e621988  lw          $v0, 0x1988($s3)
    ctx->pc = 0x1382d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6536)));
label_1382dc:
    // 0x1382dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1382dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1382e0:
    // 0x1382e0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1382e4:
    if (ctx->pc == 0x1382E4u) {
        ctx->pc = 0x1382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382E0u;
        // 0x1382e4: 0xc6a100c0  lwc1        $f1, 0xC0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1382E8u;
        goto label_1382e8;
    }
    ctx->pc = 0x1382E0u;
    {
        const bool branch_taken_0x1382e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1382E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382E0u;
        // 0x1382e4: 0xc6a100c0  lwc1        $f1, 0xC0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1382e0) {
            ctx->pc = 0x1382F8u;
            goto label_1382f8;
        }
    }
    ctx->pc = 0x1382E8u;
label_1382e8:
    // 0x1382e8: 0x8e62198c  lw          $v0, 0x198C($s3)
    ctx->pc = 0x1382e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 6540)));
label_1382ec:
    // 0x1382ec: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1382ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1382f0:
    // 0x1382f0: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1382f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_1382f4:
    // 0x1382f4: 0x0  nop
    ctx->pc = 0x1382f4u;
    // NOP
label_1382f8:
    // 0x1382f8: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
label_1382fc:
    if (ctx->pc == 0x1382FCu) {
        ctx->pc = 0x1382FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1382F8u;
        // 0x1382fc: 0xc6a100bc  lwc1        $f1, 0xBC($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138300u;
        goto label_138300;
    }
    ctx->pc = 0x1382F8u;
    {
        const bool branch_taken_0x1382f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1382f8) {
            ctx->pc = 0x1382FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1382F8u;
            // 0x1382fc: 0xc6a100bc  lwc1        $f1, 0xBC($s5) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x138300u;
            goto label_138300;
        }
    }
    ctx->pc = 0x138300u;
label_138300:
    // 0x138300: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x138300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138304:
    // 0x138304: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x138304u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_138308:
    // 0x138308: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x138308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13830c:
    // 0x13830c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x13830cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_138310:
    // 0x138310: 0xc7a10058  lwc1        $f1, 0x58($sp)
    ctx->pc = 0x138310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138314:
    // 0x138314: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x138314u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_138318:
    // 0x138318: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x138318u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_13831c:
    // 0x13831c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x13831cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_138320:
    // 0x138320: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x138320u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_138324:
    // 0x138324: 0x0  nop
    ctx->pc = 0x138324u;
    // NOP
label_138328:
    // 0x138328: 0x0  nop
    ctx->pc = 0x138328u;
    // NOP
label_13832c:
    // 0x13832c: 0x46000584  c1          0x584
    ctx->pc = 0x13832cu;
    ctx->f[22] = FPU_SQRT_S(ctx->f[0]);
label_138330:
    // 0x138330: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x138330u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_138334:
    // 0x138334: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x138334u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138338:
    // 0x138338: 0x0  nop
    ctx->pc = 0x138338u;
    // NOP
label_13833c:
    // 0x13833c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_138340:
    if (ctx->pc == 0x138340u) {
        ctx->pc = 0x138344u;
        goto label_138344;
    }
    ctx->pc = 0x13833Cu;
    {
        const bool branch_taken_0x13833c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13833c) {
            ctx->pc = 0x1383F0u;
            goto label_1383f0;
        }
    }
    ctx->pc = 0x138344u;
label_138344:
    // 0x138344: 0x4603b001  sub.s       $f0, $f22, $f3
    ctx->pc = 0x138344u;
    ctx->f[0] = FPU_SUB_S(ctx->f[22], ctx->f[3]);
label_138348:
    // 0x138348: 0xc6a100b8  lwc1        $f1, 0xB8($s5)
    ctx->pc = 0x138348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13834c:
    // 0x13834c: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x13834cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_138350:
    // 0x138350: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x138350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_138354:
    // 0x138354: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x138354u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_138358:
    // 0x138358: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x138358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_13835c:
    // 0x13835c: 0x46001501  sub.s       $f20, $f2, $f0
    ctx->pc = 0x13835cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_138360:
    // 0x138360: 0x4603a036  c.le.s      $f20, $f3
    ctx->pc = 0x138360u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138364:
    // 0x138364: 0x0  nop
    ctx->pc = 0x138364u;
    // NOP
label_138368:
    // 0x138368: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_13836c:
    if (ctx->pc == 0x13836Cu) {
        ctx->pc = 0x138370u;
        goto label_138370;
    }
    ctx->pc = 0x138368u;
    {
        const bool branch_taken_0x138368 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x138368) {
            ctx->pc = 0x138390u;
            goto label_138390;
        }
    }
    ctx->pc = 0x138370u;
label_138370:
    // 0x138370: 0x1000001f  b           . + 4 + (0x1F << 2)
label_138374:
    if (ctx->pc == 0x138374u) {
        ctx->pc = 0x138374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138370u;
        // 0x138374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138378u;
        goto label_138378;
    }
    ctx->pc = 0x138370u;
    {
        const bool branch_taken_0x138370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138370u;
        // 0x138374: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138370) {
            ctx->pc = 0x1383F0u;
            goto label_1383f0;
        }
    }
    ctx->pc = 0x138378u;
label_138378:
    // 0x138378: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138378u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_13837c:
    // 0x13837c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13837cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138380:
    // 0x138380: 0x0  nop
    ctx->pc = 0x138380u;
    // NOP
label_138384:
    // 0x138384: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x138384u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_138388:
    // 0x138388: 0x1000ff75  b           . + 4 + (-0x8B << 2)
label_13838c:
    if (ctx->pc == 0x13838Cu) {
        ctx->pc = 0x13838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138388u;
        // 0x13838c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138390u;
        goto label_138390;
    }
    ctx->pc = 0x138388u;
    {
        const bool branch_taken_0x138388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13838Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138388u;
        // 0x13838c: 0xc7a00040  lwc1        $f0, 0x40($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x138388) {
            ctx->pc = 0x138160u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138160;
        }
    }
    ctx->pc = 0x138390u;
label_138390:
    // 0x138390: 0xc0a0644  jal         func_281910
label_138394:
    if (ctx->pc == 0x138394u) {
        ctx->pc = 0x138398u;
        goto label_138398;
    }
    ctx->pc = 0x138390u;
    SET_GPR_U32(ctx, 31, 0x138398u);
    ctx->pc = 0x281910u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281910u, 0x138390u, 0x138398u)) {
        return;
    }
    ctx->pc = 0x138398u;
label_138398:
    // 0x138398: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x138398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_13839c:
    // 0x13839c: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x13839cu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1383a0:
    // 0x1383a0: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1383a4:
    if (ctx->pc == 0x1383A4u) {
        ctx->pc = 0x1383A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383A0u;
        // 0x1383a4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383A8u;
        goto label_1383a8;
    }
    ctx->pc = 0x1383A0u;
    {
        const bool branch_taken_0x1383a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383a0) {
            ctx->pc = 0x1383A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383A0u;
            // 0x1383a4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383A8u;
            goto label_1383a8;
        }
    }
    ctx->pc = 0x1383A8u;
label_1383a8:
    // 0x1383a8: 0x1010  mfhi        $v0
    ctx->pc = 0x1383a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1383ac:
    // 0x1383ac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1383b0:
    if (ctx->pc == 0x1383B0u) {
        ctx->pc = 0x1383B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383ACu;
        // 0x1383b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383B4u;
        goto label_1383b4;
    }
    ctx->pc = 0x1383ACu;
    {
        const bool branch_taken_0x1383ac = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1383B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383ACu;
        // 0x1383b0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383ac) {
            ctx->pc = 0x1383C8u;
            goto label_1383c8;
        }
    }
    ctx->pc = 0x1383B4u;
label_1383b4:
    // 0x1383b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1383b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1383b8:
    // 0x1383b8: 0x0  nop
    ctx->pc = 0x1383b8u;
    // NOP
label_1383bc:
    // 0x1383bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1383bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1383c0:
    // 0x1383c0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1383c4:
    if (ctx->pc == 0x1383C4u) {
        ctx->pc = 0x1383C8u;
        goto label_1383c8;
    }
    ctx->pc = 0x1383C0u;
    {
        const bool branch_taken_0x1383c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1383c0) {
            ctx->pc = 0x1383E0u;
            goto label_1383e0;
        }
    }
    ctx->pc = 0x1383C8u;
label_1383c8:
    // 0x1383c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1383c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1383cc:
    // 0x1383cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1383ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1383d0:
    // 0x1383d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1383d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1383d4:
    // 0x1383d4: 0x0  nop
    ctx->pc = 0x1383d4u;
    // NOP
label_1383d8:
    // 0x1383d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1383d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1383dc:
    // 0x1383dc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1383dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1383e0:
    // 0x1383e0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1383e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1383e4:
    // 0x1383e4: 0x0  nop
    ctx->pc = 0x1383e4u;
    // NOP
label_1383e8:
    // 0x1383e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1383ec:
    if (ctx->pc == 0x1383ECu) {
        ctx->pc = 0x1383ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383E8u;
        // 0x1383ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383F0u;
        goto label_1383f0;
    }
    ctx->pc = 0x1383E8u;
    {
        const bool branch_taken_0x1383e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1383e8) {
            ctx->pc = 0x1383ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1383E8u;
            // 0x1383ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1383F0u;
            goto label_1383f0;
        }
    }
    ctx->pc = 0x1383F0u;
label_1383f0:
    // 0x1383f0: 0x120000e4  beqz        $s0, . + 4 + (0xE4 << 2)
label_1383f4:
    if (ctx->pc == 0x1383F4u) {
        ctx->pc = 0x1383F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383F0u;
        // 0x1383f4: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1383F8u;
        goto label_1383f8;
    }
    ctx->pc = 0x1383F0u;
    {
        const bool branch_taken_0x1383f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1383F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1383F0u;
        // 0x1383f4: 0x27a20040  addiu       $v0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1383f0) {
            ctx->pc = 0x138784u;
            goto label_138784;
        }
    }
    ctx->pc = 0x1383F8u;
label_1383f8:
    // 0x1383f8: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x1383f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_1383fc:
    // 0x1383fc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1383fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_138400:
    // 0x138400: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x138400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_138404:
    // 0x138404: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x138404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_138408:
    // 0x138408: 0x34640440  ori         $a0, $v1, 0x440
    ctx->pc = 0x138408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1088);
label_13840c:
    // 0x13840c: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x13840cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_138410:
    // 0x138410: 0x8ea200e4  lw          $v0, 0xE4($s5)
    ctx->pc = 0x138410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_138414:
    // 0x138414: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_138418:
    if (ctx->pc == 0x138418u) {
        ctx->pc = 0x138418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138414u;
        // 0x138418: 0x34620450  ori         $v0, $v1, 0x450 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1104);
        ctx->in_delay_slot = false;
        ctx->pc = 0x13841Cu;
        goto label_13841c;
    }
    ctx->pc = 0x138414u;
    {
        const bool branch_taken_0x138414 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138414u;
        // 0x138418: 0x34620450  ori         $v0, $v1, 0x450 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1104);
        ctx->in_delay_slot = false;
        if (branch_taken_0x138414) {
            ctx->pc = 0x138424u;
            goto label_138424;
        }
    }
    ctx->pc = 0x13841Cu;
label_13841c:
    // 0x13841c: 0x2402ffef  addiu       $v0, $zero, -0x11
    ctx->pc = 0x13841cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_138420:
    // 0x138420: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x138420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_138424:
    // 0x138424: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x138424u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_138428:
    // 0x138428: 0x8e830074  lw          $v1, 0x74($s4)
    ctx->pc = 0x138428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_13842c:
    // 0x13842c: 0x26900084  addiu       $s0, $s4, 0x84
    ctx->pc = 0x13842cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 132));
label_138430:
    // 0x138430: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x138430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138434:
    // 0x138434: 0x84640180  lh          $a0, 0x180($v1)
    ctx->pc = 0x138434u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 384)));
label_138438:
    // 0x138438: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x138438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
label_13843c:
    // 0x13843c: 0x40f809  jalr        $v0
label_138440:
    if (ctx->pc == 0x138440u) {
        ctx->pc = 0x138440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13843Cu;
        // 0x138440: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138444u;
        goto label_138444;
    }
    ctx->pc = 0x13843Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138444u);
        ctx->pc = 0x138440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13843Cu;
        // 0x138440: 0x2e42021  addu        $a0, $s7, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13843Cu, 0x138444u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138444u;
label_138444:
    // 0x138444: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x138444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_138448:
    // 0x138448: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x138448u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13844c:
    // 0x13844c: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x13844cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_138450:
    // 0x138450: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x138450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_138454:
    // 0x138454: 0x40f809  jalr        $v0
label_138458:
    if (ctx->pc == 0x138458u) {
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13845Cu;
        goto label_13845c;
    }
    ctx->pc = 0x138454u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13845Cu);
        ctx->pc = 0x138458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138454u;
        // 0x138458: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138454u, 0x13845Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13845Cu;
label_13845c:
    // 0x13845c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_138460:
    if (ctx->pc == 0x138460u) {
        ctx->pc = 0x138464u;
        goto label_138464;
    }
    ctx->pc = 0x13845Cu;
    {
        const bool branch_taken_0x13845c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13845c) {
            ctx->pc = 0x138480u;
            goto label_138480;
        }
    }
    ctx->pc = 0x138464u;
label_138464:
    // 0x138464: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x138464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_138468:
    // 0x138468: 0x84640070  lh          $a0, 0x70($v1)
    ctx->pc = 0x138468u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 112)));
label_13846c:
    // 0x13846c: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x13846cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
label_138470:
    // 0x138470: 0x40f809  jalr        $v0
label_138474:
    if (ctx->pc == 0x138474u) {
        ctx->pc = 0x138474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138470u;
        // 0x138474: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138478u;
        goto label_138478;
    }
    ctx->pc = 0x138470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138478u);
        ctx->pc = 0x138474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138470u;
        // 0x138474: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138470u, 0x138478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138478u;
label_138478:
    // 0x138478: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_13847c:
    if (ctx->pc == 0x13847Cu) {
        ctx->pc = 0x138480u;
        goto label_138480;
    }
    ctx->pc = 0x138478u;
    {
        const bool branch_taken_0x138478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x138478) {
            ctx->pc = 0x1384C4u;
            goto label_1384c4;
        }
    }
    ctx->pc = 0x138480u;
label_138480:
    // 0x138480: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_138484:
    if (ctx->pc == 0x138484u) {
        ctx->pc = 0x138484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138480u;
        // 0x138484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138488u;
        goto label_138488;
    }
    ctx->pc = 0x138480u;
    {
        const bool branch_taken_0x138480 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x138484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138480u;
        // 0x138484: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138480) {
            ctx->pc = 0x1384D4u;
            goto label_1384d4;
        }
    }
    ctx->pc = 0x138488u;
label_138488:
    // 0x138488: 0x8ea200e4  lw          $v0, 0xE4($s5)
    ctx->pc = 0x138488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_13848c:
    // 0x13848c: 0x10000011  b           . + 4 + (0x11 << 2)
label_138490:
    if (ctx->pc == 0x138490u) {
        ctx->pc = 0x138490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13848Cu;
        // 0x138490: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138494u;
        goto label_138494;
    }
    ctx->pc = 0x13848Cu;
    {
        const bool branch_taken_0x13848c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x138490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13848Cu;
        // 0x138490: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13848c) {
            ctx->pc = 0x1384D4u;
            goto label_1384d4;
        }
    }
    ctx->pc = 0x138494u;
label_138494:
    // 0x138494: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x138494u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_138498:
    // 0x138498: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x138498u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_13849c:
    // 0x13849c: 0x0  nop
    ctx->pc = 0x13849cu;
    // NOP
label_1384a0:
    // 0x1384a0: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1384a0u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1384a4:
    // 0x1384a4: 0x10000030  b           . + 4 + (0x30 << 2)
label_1384a8:
    if (ctx->pc == 0x1384A8u) {
        ctx->pc = 0x1384A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384A4u;
        // 0x1384a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384ACu;
        goto label_1384ac;
    }
    ctx->pc = 0x1384A4u;
    {
        const bool branch_taken_0x1384a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384A4u;
        // 0x1384a8: 0xc7a00050  lwc1        $f0, 0x50($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384a4) {
            ctx->pc = 0x138568u;
            goto label_138568;
        }
    }
    ctx->pc = 0x1384ACu;
label_1384ac:
    // 0x1384ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1384acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1384b0:
    // 0x1384b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1384b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1384b4:
    // 0x1384b4: 0x0  nop
    ctx->pc = 0x1384b4u;
    // NOP
label_1384b8:
    // 0x1384b8: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x1384b8u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1384bc:
    // 0x1384bc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_1384c0:
    if (ctx->pc == 0x1384C0u) {
        ctx->pc = 0x1384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384BCu;
        // 0x1384c0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384C4u;
        goto label_1384c4;
    }
    ctx->pc = 0x1384BCu;
    {
        const bool branch_taken_0x1384bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384BCu;
        // 0x1384c0: 0xc7a00060  lwc1        $f0, 0x60($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384bc) {
            ctx->pc = 0x138678u;
            goto label_138678;
        }
    }
    ctx->pc = 0x1384C4u;
label_1384c4:
    // 0x1384c4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1384c8:
    if (ctx->pc == 0x1384C8u) {
        ctx->pc = 0x1384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384C4u;
        // 0x1384c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384CCu;
        goto label_1384cc;
    }
    ctx->pc = 0x1384C4u;
    {
        const bool branch_taken_0x1384c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384C4u;
        // 0x1384c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1384c4) {
            ctx->pc = 0x1384D4u;
            goto label_1384d4;
        }
    }
    ctx->pc = 0x1384CCu;
label_1384cc:
    // 0x1384cc: 0x8ea200e4  lw          $v0, 0xE4($s5)
    ctx->pc = 0x1384ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_1384d0:
    // 0x1384d0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1384d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1384d4:
    // 0x1384d4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1384d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1384d8:
    // 0x1384d8: 0x52400031  beql        $s2, $zero, . + 4 + (0x31 << 2)
label_1384dc:
    if (ctx->pc == 0x1384DCu) {
        ctx->pc = 0x1384DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384D8u;
        // 0x1384dc: 0x8e630048  lw          $v1, 0x48($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384E0u;
        goto label_1384e0;
    }
    ctx->pc = 0x1384D8u;
    {
        const bool branch_taken_0x1384d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1384d8) {
            ctx->pc = 0x1384DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1384D8u;
            // 0x1384dc: 0x8e630048  lw          $v1, 0x48($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385A0u;
            goto label_1385a0;
        }
    }
    ctx->pc = 0x1384E0u;
label_1384e0:
    // 0x1384e0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1384e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1384e4:
    // 0x1384e4: 0xc04f0c2  jal         func_13C308
label_1384e8:
    if (ctx->pc == 0x1384E8u) {
        ctx->pc = 0x1384E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384E4u;
        // 0x1384e8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384ECu;
        goto label_1384ec;
    }
    ctx->pc = 0x1384E4u;
    SET_GPR_U32(ctx, 31, 0x1384ECu);
    ctx->pc = 0x1384E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384E4u;
    // 0x1384e8: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x1384E4u, 0x1384ECu)) {
        return;
    }
    ctx->pc = 0x1384ECu;
label_1384ec:
    // 0x1384ec: 0xc04f0cc  jal         func_13C330
label_1384f0:
    if (ctx->pc == 0x1384F0u) {
        ctx->pc = 0x1384F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1384ECu;
        // 0x1384f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1384F4u;
        goto label_1384f4;
    }
    ctx->pc = 0x1384ECu;
    SET_GPR_U32(ctx, 31, 0x1384F4u);
    ctx->pc = 0x1384F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1384ECu;
    // 0x1384f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x1384ECu, 0x1384F4u)) {
        return;
    }
    ctx->pc = 0x1384F4u;
label_1384f4:
    // 0x1384f4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x1384f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1384f8:
    // 0x1384f8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1384f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1384fc:
    // 0x1384fc: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1384fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138500:
    // 0x138500: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138500u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_138504:
    // 0x138504: 0xc04f0cc  jal         func_13C330
label_138508:
    if (ctx->pc == 0x138508u) {
        ctx->pc = 0x138508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138504u;
        // 0x138508: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13850Cu;
        goto label_13850c;
    }
    ctx->pc = 0x138504u;
    SET_GPR_U32(ctx, 31, 0x13850Cu);
    ctx->pc = 0x138508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138504u;
    // 0x138508: 0xe7a00050  swc1        $f0, 0x50($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x138504u, 0x13850Cu)) {
        return;
    }
    ctx->pc = 0x13850Cu;
label_13850c:
    // 0x13850c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x13850cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138510:
    // 0x138510: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x138510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138514:
    // 0x138514: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x138514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138518:
    // 0x138518: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x138518u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_13851c:
    // 0x13851c: 0xc04f0cc  jal         func_13C330
label_138520:
    if (ctx->pc == 0x138520u) {
        ctx->pc = 0x138520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13851Cu;
        // 0x138520: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x138524u;
        goto label_138524;
    }
    ctx->pc = 0x13851Cu;
    SET_GPR_U32(ctx, 31, 0x138524u);
    ctx->pc = 0x138520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13851Cu;
    // 0x138520: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x13851Cu, 0x138524u)) {
        return;
    }
    ctx->pc = 0x138524u;
label_138524:
    // 0x138524: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x138524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138528:
    // 0x138528: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x138528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_13852c:
    // 0x13852c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x13852cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_138530:
    // 0x138530: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x138530u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_138534:
    // 0x138534: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x138534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_138538:
    // 0x138538: 0xc04642c  jal         func_1190B0
label_13853c:
    if (ctx->pc == 0x13853Cu) {
        ctx->pc = 0x13853Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138538u;
        // 0x13853c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138540u;
        goto label_138540;
    }
    ctx->pc = 0x138538u;
    SET_GPR_U32(ctx, 31, 0x138540u);
    ctx->pc = 0x13853Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138538u;
    // 0x13853c: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x138538u, 0x138540u)) {
        return;
    }
    ctx->pc = 0x138540u;
label_138540:
    // 0x138540: 0x0  nop
    ctx->pc = 0x138540u;
    // NOP
label_138544:
    // 0x138544: 0x0  nop
    ctx->pc = 0x138544u;
    // NOP
label_138548:
    // 0x138548: 0x46000044  c1          0x44
    ctx->pc = 0x138548u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_13854c:
    // 0x13854c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x13854cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_138550:
    // 0x138550: 0x0  nop
    ctx->pc = 0x138550u;
    // NOP
label_138554:
    // 0x138554: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x138554u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138558:
    // 0x138558: 0x0  nop
    ctx->pc = 0x138558u;
    // NOP
label_13855c:
    // 0x13855c: 0x4501ffcd  bc1t        . + 4 + (-0x33 << 2)
label_138560:
    if (ctx->pc == 0x138560u) {
        ctx->pc = 0x138560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13855Cu;
        // 0x138560: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x138564u;
        goto label_138564;
    }
    ctx->pc = 0x13855Cu;
    {
        const bool branch_taken_0x13855c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x138560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13855Cu;
        // 0x138560: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13855c) {
            ctx->pc = 0x138494u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_138494;
        }
    }
    ctx->pc = 0x138564u;
label_138564:
    // 0x138564: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x138564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138568:
    // 0x138568: 0xc7a10054  lwc1        $f1, 0x54($sp)
    ctx->pc = 0x138568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13856c:
    // 0x13856c: 0xc7a20058  lwc1        $f2, 0x58($sp)
    ctx->pc = 0x13856cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138570:
    // 0x138570: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x138570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_138574:
    // 0x138574: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x138574u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_138578:
    // 0x138578: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x138578u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_13857c:
    // 0x13857c: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x13857cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_138580:
    // 0x138580: 0xe7a10054  swc1        $f1, 0x54($sp)
    ctx->pc = 0x138580u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_138584:
    // 0x138584: 0xe7a20058  swc1        $f2, 0x58($sp)
    ctx->pc = 0x138584u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_138588:
    // 0x138588: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x138588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_13858c:
    // 0x13858c: 0xc6ac00cc  lwc1        $f12, 0xCC($s5)
    ctx->pc = 0x13858cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_138590:
    // 0x138590: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x138590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_138594:
    // 0x138594: 0xc049c0c  jal         func_127030
label_138598:
    if (ctx->pc == 0x138598u) {
        ctx->pc = 0x138598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138594u;
        // 0x138598: 0xc6ad00d0  lwc1        $f13, 0xD0($s5) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x13859Cu;
        goto label_13859c;
    }
    ctx->pc = 0x138594u;
    SET_GPR_U32(ctx, 31, 0x13859Cu);
    ctx->pc = 0x138598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138594u;
    // 0x138598: 0xc6ad00d0  lwc1        $f13, 0xD0($s5) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x127030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x127030u, 0x138594u, 0x13859Cu)) {
        return;
    }
    ctx->pc = 0x13859Cu;
label_13859c:
    // 0x13859c: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x13859cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1385a0:
    // 0x1385a0: 0x26650044  addiu       $a1, $s3, 0x44
    ctx->pc = 0x1385a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_1385a4:
    // 0x1385a4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1385a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1385a8:
    // 0x1385a8: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1385a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1385ac:
    // 0x1385ac: 0x846400a0  lh          $a0, 0xA0($v1)
    ctx->pc = 0x1385acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1385b0:
    // 0x1385b0: 0x8c6200a4  lw          $v0, 0xA4($v1)
    ctx->pc = 0x1385b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 164)));
label_1385b4:
    // 0x1385b4: 0x40f809  jalr        $v0
label_1385b8:
    if (ctx->pc == 0x1385B8u) {
        ctx->pc = 0x1385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B4u;
        // 0x1385b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385BCu;
        goto label_1385bc;
    }
    ctx->pc = 0x1385B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1385BCu);
        ctx->pc = 0x1385B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385B4u;
        // 0x1385b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1385B4u, 0x1385BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1385BCu;
label_1385bc:
    // 0x1385bc: 0xc6a100c4  lwc1        $f1, 0xC4($s5)
    ctx->pc = 0x1385bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1385c0:
    // 0x1385c0: 0x46160842  mul.s       $f1, $f1, $f22
    ctx->pc = 0x1385c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_1385c4:
    // 0x1385c4: 0x46010501  sub.s       $f20, $f0, $f1
    ctx->pc = 0x1385c4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1385c8:
    // 0x1385c8: 0x4615a034  c.lt.s      $f20, $f21
    ctx->pc = 0x1385c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1385cc:
    // 0x1385cc: 0x0  nop
    ctx->pc = 0x1385ccu;
    // NOP
label_1385d0:
    // 0x1385d0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1385d4:
    if (ctx->pc == 0x1385D4u) {
        ctx->pc = 0x1385D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385D0u;
        // 0x1385d4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385D8u;
        goto label_1385d8;
    }
    ctx->pc = 0x1385D0u;
    {
        const bool branch_taken_0x1385d0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1385d0) {
            ctx->pc = 0x1385D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1385D0u;
            // 0x1385d4: 0x4600ad06  mov.s       $f20, $f21 (Delay Slot)
            ctx->f[20] = FPU_MOV_S(ctx->f[21]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1385D8u;
            goto label_1385d8;
        }
    }
    ctx->pc = 0x1385D8u;
label_1385d8:
    // 0x1385d8: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x1385d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_1385dc:
    // 0x1385dc: 0xc6802d64  lwc1        $f0, 0x2D64($s4)
    ctx->pc = 0x1385dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 11620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1385e0:
    // 0x1385e0: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x1385e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_1385e4:
    // 0x1385e4: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1385e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_1385e8:
    // 0x1385e8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1385e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1385ec:
    // 0x1385ec: 0x40f809  jalr        $v0
label_1385f0:
    if (ctx->pc == 0x1385F0u) {
        ctx->pc = 0x1385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385ECu;
        // 0x1385f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385F4u;
        goto label_1385f4;
    }
    ctx->pc = 0x1385ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1385F4u);
        ctx->pc = 0x1385F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385ECu;
        // 0x1385f0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1385ECu, 0x1385F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1385F4u;
label_1385f4:
    // 0x1385f4: 0x14400064  bnez        $v0, . + 4 + (0x64 << 2)
label_1385f8:
    if (ctx->pc == 0x1385F8u) {
        ctx->pc = 0x1385F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385F4u;
        // 0x1385f8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1385FCu;
        goto label_1385fc;
    }
    ctx->pc = 0x1385F4u;
    {
        const bool branch_taken_0x1385f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1385F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1385F4u;
        // 0x1385f8: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1385f4) {
            ctx->pc = 0x138788u;
            goto label_138788;
        }
    }
    ctx->pc = 0x1385FCu;
label_1385fc:
    // 0x1385fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x1385fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_138600:
    // 0x138600: 0xc062018  jal         func_188060
label_138604:
    if (ctx->pc == 0x138604u) {
        ctx->pc = 0x138604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138600u;
        // 0x138604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138608u;
        goto label_138608;
    }
    ctx->pc = 0x138600u;
    SET_GPR_U32(ctx, 31, 0x138608u);
    ctx->pc = 0x138604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138600u;
    // 0x138604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x188060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x188060u, 0x138600u, 0x138608u)) {
        return;
    }
    ctx->pc = 0x138608u;
label_138608:
    // 0x138608: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x138608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_13860c:
    // 0x13860c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x13860cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_138610:
    // 0x138610: 0xc04f0c2  jal         func_13C308
label_138614:
    if (ctx->pc == 0x138614u) {
        ctx->pc = 0x138614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138610u;
        // 0x138614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138618u;
        goto label_138618;
    }
    ctx->pc = 0x138610u;
    SET_GPR_U32(ctx, 31, 0x138618u);
    ctx->pc = 0x138614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x138610u;
    // 0x138614: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x138610u, 0x138618u)) {
        return;
    }
    ctx->pc = 0x138618u;
label_138618:
    // 0x138618: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x138618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_13861c:
    // 0x13861c: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x13861cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138620:
    // 0x138620: 0xc7a30064  lwc1        $f3, 0x64($sp)
    ctx->pc = 0x138620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_138624:
    // 0x138624: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x138624u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_138628:
    // 0x138628: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x138628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_13862c:
    // 0x13862c: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x13862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138630:
    // 0x138630: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x138630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_138634:
    // 0x138634: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x138634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_138638:
    // 0x138638: 0xe7a20060  swc1        $f2, 0x60($sp)
    ctx->pc = 0x138638u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_13863c:
    // 0x13863c: 0x46040841  sub.s       $f1, $f1, $f4
    ctx->pc = 0x13863cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
label_138640:
    // 0x138640: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x138640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_138644:
    // 0x138644: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x138644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_138648:
    // 0x138648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13864c:
    // 0x13864c: 0xc04642c  jal         func_1190B0
label_138650:
    if (ctx->pc == 0x138650u) {
        ctx->pc = 0x138650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13864Cu;
        // 0x138650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138654u;
        goto label_138654;
    }
    ctx->pc = 0x13864Cu;
    SET_GPR_U32(ctx, 31, 0x138654u);
    ctx->pc = 0x138650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13864Cu;
    // 0x138650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x13864Cu, 0x138654u)) {
        return;
    }
    ctx->pc = 0x138654u;
label_138654:
    // 0x138654: 0x0  nop
    ctx->pc = 0x138654u;
    // NOP
label_138658:
    // 0x138658: 0x0  nop
    ctx->pc = 0x138658u;
    // NOP
label_13865c:
    // 0x13865c: 0x46000044  c1          0x44
    ctx->pc = 0x13865cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_138660:
    // 0x138660: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x138660u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_138664:
    // 0x138664: 0x0  nop
    ctx->pc = 0x138664u;
    // NOP
label_138668:
    // 0x138668: 0x4501ff90  bc1t        . + 4 + (-0x70 << 2)
label_13866c:
    if (ctx->pc == 0x13866Cu) {
        ctx->pc = 0x13866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138668u;
        // 0x13866c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138670u;
        goto label_138670;
    }
    ctx->pc = 0x138668u;
    {
        const bool branch_taken_0x138668 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13866Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138668u;
        // 0x13866c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x138668) {
            ctx->pc = 0x1384ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1384ac;
        }
    }
    ctx->pc = 0x138670u;
label_138670:
    // 0x138670: 0x460008c6  mov.s       $f3, $f1
    ctx->pc = 0x138670u;
    ctx->f[3] = FPU_MOV_S(ctx->f[1]);
label_138674:
    // 0x138674: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x138674u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_138678:
    // 0x138678: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x138678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_13867c:
    // 0x13867c: 0xc7a20068  lwc1        $f2, 0x68($sp)
    ctx->pc = 0x13867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_138680:
    // 0x138680: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x138680u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_138684:
    // 0x138684: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x138684u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_138688:
    // 0x138688: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x138688u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_13868c:
    // 0x13868c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x13868cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_138690:
    // 0x138690: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x138690u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_138694:
    // 0x138694: 0xe7a20068  swc1        $f2, 0x68($sp)
    ctx->pc = 0x138694u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_138698:
    // 0x138698: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x138698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_13869c:
    // 0x13869c: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x13869cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1386a0:
    // 0x1386a0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1386a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_1386a4:
    // 0x1386a4: 0xb3a20057  sdl         $v0, 0x57($sp)
    ctx->pc = 0x1386a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1386a8:
    // 0x1386a8: 0xb7a20050  sdr         $v0, 0x50($sp)
    ctx->pc = 0x1386a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1386ac:
    // 0x1386ac: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x1386acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
label_1386b0:
    // 0x1386b0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1386b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1386b4:
    // 0x1386b4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1386b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1386b8:
    // 0x1386b8: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1386b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_1386bc:
    // 0x1386bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1386bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1386c0:
    // 0x1386c0: 0xae822d80  sw          $v0, 0x2D80($s4)
    ctx->pc = 0x1386c0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 11648), GPR_U32(ctx, 2));
label_1386c4:
    // 0x1386c4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x1386c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1386c8:
    // 0x1386c8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1386c8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1386cc:
    // 0x1386cc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1386ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1386d0:
    // 0x1386d0: 0x846400b8  lh          $a0, 0xB8($v1)
    ctx->pc = 0x1386d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 184)));
label_1386d4:
    // 0x1386d4: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x1386d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_1386d8:
    // 0x1386d8: 0x40f809  jalr        $v0
label_1386dc:
    if (ctx->pc == 0x1386DCu) {
        ctx->pc = 0x1386DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386D8u;
        // 0x1386dc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1386E0u;
        goto label_1386e0;
    }
    ctx->pc = 0x1386D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1386E0u);
        ctx->pc = 0x1386DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386D8u;
        // 0x1386dc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386D8u, 0x1386E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1386E0u;
label_1386e0:
    // 0x1386e0: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x1386e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_1386e4:
    // 0x1386e4: 0x84700100  lh          $s0, 0x100($v1)
    ctx->pc = 0x1386e4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 256)));
label_1386e8:
    // 0x1386e8: 0x24710100  addiu       $s1, $v1, 0x100
    ctx->pc = 0x1386e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 256));
label_1386ec:
    // 0x1386ec: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x1386ecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_1386f0:
    // 0x1386f0: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x1386f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_1386f4:
    // 0x1386f4: 0x2d08021  addu        $s0, $s6, $s0
    ctx->pc = 0x1386f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_1386f8:
    // 0x1386f8: 0x40f809  jalr        $v0
label_1386fc:
    if (ctx->pc == 0x1386FCu) {
        ctx->pc = 0x1386FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386F8u;
        // 0x1386fc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138700u;
        goto label_138700;
    }
    ctx->pc = 0x1386F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138700u);
        ctx->pc = 0x1386FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1386F8u;
        // 0x1386fc: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1386F8u, 0x138700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138700u;
label_138700:
    // 0x138700: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x138700u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_138704:
    // 0x138704: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x138704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_138708:
    // 0x138708: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x138708u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_13870c:
    // 0x13870c: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x13870cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_138710:
    // 0x138710: 0x100f809  jalr        $t0
label_138714:
    if (ctx->pc == 0x138714u) {
        ctx->pc = 0x138714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138710u;
        // 0x138714: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138718u;
        goto label_138718;
    }
    ctx->pc = 0x138710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 8);
        SET_GPR_U32(ctx, 31, 0x138718u);
        ctx->pc = 0x138714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138710u;
        // 0x138714: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138710u, 0x138718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x138718u;
label_138718:
    // 0x138718: 0x8e830088  lw          $v1, 0x88($s4)
    ctx->pc = 0x138718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 136)));
label_13871c:
    // 0x13871c: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x13871cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_138720:
    // 0x138720: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x138720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_138724:
    // 0x138724: 0x40f809  jalr        $v0
label_138728:
    if (ctx->pc == 0x138728u) {
        ctx->pc = 0x138728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138724u;
        // 0x138728: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x13872Cu;
        goto label_13872c;
    }
    ctx->pc = 0x138724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13872Cu);
        ctx->pc = 0x138728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x138724u;
        // 0x138728: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x138724u, 0x13872Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x13872Cu;
label_13872c:
    // 0x13872c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_138730:
    if (ctx->pc == 0x138730u) {
        ctx->pc = 0x138730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13872Cu;
        // 0x138730: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138734u;
        goto label_138734;
    }
    ctx->pc = 0x13872Cu;
    {
        const bool branch_taken_0x13872c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x138730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13872Cu;
        // 0x138730: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13872c) {
            ctx->pc = 0x138788u;
            goto label_138788;
        }
    }
    ctx->pc = 0x138734u;
label_138734:
    // 0x138734: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x138734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_138738:
    // 0x138738: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x138738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_13873c:
    // 0x13873c: 0x8fa70058  lw          $a3, 0x58($sp)
    ctx->pc = 0x13873cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_138740:
    // 0x138740: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x138740u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_138744:
    // 0x138744: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x138744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_138748:
    // 0x138748: 0xafa70088  sw          $a3, 0x88($sp)
    ctx->pc = 0x138748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 7));
label_13874c:
    // 0x13874c: 0x6ba40067  ldl         $a0, 0x67($sp)
    ctx->pc = 0x13874cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_138750:
    // 0x138750: 0x6fa40060  ldr         $a0, 0x60($sp)
    ctx->pc = 0x138750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_138754:
    // 0x138754: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x138754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_138758:
    // 0x138758: 0xb3a40097  sdl         $a0, 0x97($sp)
    ctx->pc = 0x138758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_13875c:
    // 0x13875c: 0xb7a40090  sdr         $a0, 0x90($sp)
    ctx->pc = 0x13875cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_138760:
    // 0x138760: 0xafa50098  sw          $a1, 0x98($sp)
    ctx->pc = 0x138760u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 5));
label_138764:
    // 0x138764: 0xc0561b6  jal         func_1586D8
label_138768:
    if (ctx->pc == 0x138768u) {
        ctx->pc = 0x13876Cu;
        goto label_13876c;
    }
    ctx->pc = 0x138764u;
    SET_GPR_U32(ctx, 31, 0x13876Cu);
    ctx->pc = 0x1586D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1586D8u, 0x138764u, 0x13876Cu)) {
        return;
    }
    ctx->pc = 0x13876Cu;
label_13876c:
    // 0x13876c: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13876cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
label_138770:
    // 0x138770: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x138770u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_138774:
    // 0x138774: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_138778:
    // 0x138778: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x138778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_13877c:
    // 0x13877c: 0xc055e08  jal         func_157820
label_138780:
    if (ctx->pc == 0x138780u) {
        ctx->pc = 0x138780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13877Cu;
        // 0x138780: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138784u;
        goto label_138784;
    }
    ctx->pc = 0x13877Cu;
    SET_GPR_U32(ctx, 31, 0x138784u);
    ctx->pc = 0x138780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13877Cu;
    // 0x138780: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x157820u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x157820u, 0x13877Cu, 0x138784u)) {
        return;
    }
    ctx->pc = 0x138784u;
label_138784:
    // 0x138784: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x138784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_138788:
    // 0x138788: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x138788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13878c:
    // 0x13878c: 0xc0640fa  jal         func_1903E8
label_138790:
    if (ctx->pc == 0x138790u) {
        ctx->pc = 0x138790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13878Cu;
        // 0x138790: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x138794u;
        goto label_138794;
    }
    ctx->pc = 0x13878Cu;
    SET_GPR_U32(ctx, 31, 0x138794u);
    ctx->pc = 0x138790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13878Cu;
    // 0x138790: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1903E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1903E8u, 0x13878Cu, 0x138794u)) {
        return;
    }
    ctx->pc = 0x138794u;
label_138794:
    // 0x138794: 0x7bb00140  lq          $s0, 0x140($sp)
    ctx->pc = 0x138794u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_138798:
    // 0x138798: 0x7bb10130  lq          $s1, 0x130($sp)
    ctx->pc = 0x138798u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_13879c:
    // 0x13879c: 0x7bb20120  lq          $s2, 0x120($sp)
    ctx->pc = 0x13879cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_1387a0:
    // 0x1387a0: 0x7bb30110  lq          $s3, 0x110($sp)
    ctx->pc = 0x1387a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_1387a4:
    // 0x1387a4: 0x7bb40100  lq          $s4, 0x100($sp)
    ctx->pc = 0x1387a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1387a8:
    // 0x1387a8: 0x7bb500f0  lq          $s5, 0xF0($sp)
    ctx->pc = 0x1387a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1387ac:
    // 0x1387ac: 0x7bb600e0  lq          $s6, 0xE0($sp)
    ctx->pc = 0x1387acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1387b0:
    // 0x1387b0: 0x7bb700d0  lq          $s7, 0xD0($sp)
    ctx->pc = 0x1387b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1387b4:
    // 0x1387b4: 0x7bbe00c0  lq          $fp, 0xC0($sp)
    ctx->pc = 0x1387b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1387b8:
    // 0x1387b8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1387b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1387bc:
    // 0x1387bc: 0xc7b60160  lwc1        $f22, 0x160($sp)
    ctx->pc = 0x1387bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1387c0:
    // 0x1387c0: 0xc7b50158  lwc1        $f21, 0x158($sp)
    ctx->pc = 0x1387c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1387c4:
    // 0x1387c4: 0xc7b40150  lwc1        $f20, 0x150($sp)
    ctx->pc = 0x1387c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1387c8:
    // 0x1387c8: 0x3e00008  jr          $ra
label_1387cc:
    if (ctx->pc == 0x1387CCu) {
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1387D0u;
        goto label_fallthrough_0x1387c8;
    }
    ctx->pc = 0x1387C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1387CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1387C8u;
        // 0x1387cc: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1387C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1387c8:
    ctx->pc = 0x1387D0u;
}
