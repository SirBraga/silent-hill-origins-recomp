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

// Function: sub_00277D58
// Address: 0x277d58 - 0x2787d0
void sub_00277D58_0x277d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277D58_0x277d58");
#endif

    switch (ctx->pc) {
        case 0x277d58u: goto label_277d58;
        case 0x277d5cu: goto label_277d5c;
        case 0x277d60u: goto label_277d60;
        case 0x277d64u: goto label_277d64;
        case 0x277d68u: goto label_277d68;
        case 0x277d6cu: goto label_277d6c;
        case 0x277d70u: goto label_277d70;
        case 0x277d74u: goto label_277d74;
        case 0x277d78u: goto label_277d78;
        case 0x277d7cu: goto label_277d7c;
        case 0x277d80u: goto label_277d80;
        case 0x277d84u: goto label_277d84;
        case 0x277d88u: goto label_277d88;
        case 0x277d8cu: goto label_277d8c;
        case 0x277d90u: goto label_277d90;
        case 0x277d94u: goto label_277d94;
        case 0x277d98u: goto label_277d98;
        case 0x277d9cu: goto label_277d9c;
        case 0x277da0u: goto label_277da0;
        case 0x277da4u: goto label_277da4;
        case 0x277da8u: goto label_277da8;
        case 0x277dacu: goto label_277dac;
        case 0x277db0u: goto label_277db0;
        case 0x277db4u: goto label_277db4;
        case 0x277db8u: goto label_277db8;
        case 0x277dbcu: goto label_277dbc;
        case 0x277dc0u: goto label_277dc0;
        case 0x277dc4u: goto label_277dc4;
        case 0x277dc8u: goto label_277dc8;
        case 0x277dccu: goto label_277dcc;
        case 0x277dd0u: goto label_277dd0;
        case 0x277dd4u: goto label_277dd4;
        case 0x277dd8u: goto label_277dd8;
        case 0x277ddcu: goto label_277ddc;
        case 0x277de0u: goto label_277de0;
        case 0x277de4u: goto label_277de4;
        case 0x277de8u: goto label_277de8;
        case 0x277decu: goto label_277dec;
        case 0x277df0u: goto label_277df0;
        case 0x277df4u: goto label_277df4;
        case 0x277df8u: goto label_277df8;
        case 0x277dfcu: goto label_277dfc;
        case 0x277e00u: goto label_277e00;
        case 0x277e04u: goto label_277e04;
        case 0x277e08u: goto label_277e08;
        case 0x277e0cu: goto label_277e0c;
        case 0x277e10u: goto label_277e10;
        case 0x277e14u: goto label_277e14;
        case 0x277e18u: goto label_277e18;
        case 0x277e1cu: goto label_277e1c;
        case 0x277e20u: goto label_277e20;
        case 0x277e24u: goto label_277e24;
        case 0x277e28u: goto label_277e28;
        case 0x277e2cu: goto label_277e2c;
        case 0x277e30u: goto label_277e30;
        case 0x277e34u: goto label_277e34;
        case 0x277e38u: goto label_277e38;
        case 0x277e3cu: goto label_277e3c;
        case 0x277e40u: goto label_277e40;
        case 0x277e44u: goto label_277e44;
        case 0x277e48u: goto label_277e48;
        case 0x277e4cu: goto label_277e4c;
        case 0x277e50u: goto label_277e50;
        case 0x277e54u: goto label_277e54;
        case 0x277e58u: goto label_277e58;
        case 0x277e5cu: goto label_277e5c;
        case 0x277e60u: goto label_277e60;
        case 0x277e64u: goto label_277e64;
        case 0x277e68u: goto label_277e68;
        case 0x277e6cu: goto label_277e6c;
        case 0x277e70u: goto label_277e70;
        case 0x277e74u: goto label_277e74;
        case 0x277e78u: goto label_277e78;
        case 0x277e7cu: goto label_277e7c;
        case 0x277e80u: goto label_277e80;
        case 0x277e84u: goto label_277e84;
        case 0x277e88u: goto label_277e88;
        case 0x277e8cu: goto label_277e8c;
        case 0x277e90u: goto label_277e90;
        case 0x277e94u: goto label_277e94;
        case 0x277e98u: goto label_277e98;
        case 0x277e9cu: goto label_277e9c;
        case 0x277ea0u: goto label_277ea0;
        case 0x277ea4u: goto label_277ea4;
        case 0x277ea8u: goto label_277ea8;
        case 0x277eacu: goto label_277eac;
        case 0x277eb0u: goto label_277eb0;
        case 0x277eb4u: goto label_277eb4;
        case 0x277eb8u: goto label_277eb8;
        case 0x277ebcu: goto label_277ebc;
        case 0x277ec0u: goto label_277ec0;
        case 0x277ec4u: goto label_277ec4;
        case 0x277ec8u: goto label_277ec8;
        case 0x277eccu: goto label_277ecc;
        case 0x277ed0u: goto label_277ed0;
        case 0x277ed4u: goto label_277ed4;
        case 0x277ed8u: goto label_277ed8;
        case 0x277edcu: goto label_277edc;
        case 0x277ee0u: goto label_277ee0;
        case 0x277ee4u: goto label_277ee4;
        case 0x277ee8u: goto label_277ee8;
        case 0x277eecu: goto label_277eec;
        case 0x277ef0u: goto label_277ef0;
        case 0x277ef4u: goto label_277ef4;
        case 0x277ef8u: goto label_277ef8;
        case 0x277efcu: goto label_277efc;
        case 0x277f00u: goto label_277f00;
        case 0x277f04u: goto label_277f04;
        case 0x277f08u: goto label_277f08;
        case 0x277f0cu: goto label_277f0c;
        case 0x277f10u: goto label_277f10;
        case 0x277f14u: goto label_277f14;
        case 0x277f18u: goto label_277f18;
        case 0x277f1cu: goto label_277f1c;
        case 0x277f20u: goto label_277f20;
        case 0x277f24u: goto label_277f24;
        case 0x277f28u: goto label_277f28;
        case 0x277f2cu: goto label_277f2c;
        case 0x277f30u: goto label_277f30;
        case 0x277f34u: goto label_277f34;
        case 0x277f38u: goto label_277f38;
        case 0x277f3cu: goto label_277f3c;
        case 0x277f40u: goto label_277f40;
        case 0x277f44u: goto label_277f44;
        case 0x277f48u: goto label_277f48;
        case 0x277f4cu: goto label_277f4c;
        case 0x277f50u: goto label_277f50;
        case 0x277f54u: goto label_277f54;
        case 0x277f58u: goto label_277f58;
        case 0x277f5cu: goto label_277f5c;
        case 0x277f60u: goto label_277f60;
        case 0x277f64u: goto label_277f64;
        case 0x277f68u: goto label_277f68;
        case 0x277f6cu: goto label_277f6c;
        case 0x277f70u: goto label_277f70;
        case 0x277f74u: goto label_277f74;
        case 0x277f78u: goto label_277f78;
        case 0x277f7cu: goto label_277f7c;
        case 0x277f80u: goto label_277f80;
        case 0x277f84u: goto label_277f84;
        case 0x277f88u: goto label_277f88;
        case 0x277f8cu: goto label_277f8c;
        case 0x277f90u: goto label_277f90;
        case 0x277f94u: goto label_277f94;
        case 0x277f98u: goto label_277f98;
        case 0x277f9cu: goto label_277f9c;
        case 0x277fa0u: goto label_277fa0;
        case 0x277fa4u: goto label_277fa4;
        case 0x277fa8u: goto label_277fa8;
        case 0x277facu: goto label_277fac;
        case 0x277fb0u: goto label_277fb0;
        case 0x277fb4u: goto label_277fb4;
        case 0x277fb8u: goto label_277fb8;
        case 0x277fbcu: goto label_277fbc;
        case 0x277fc0u: goto label_277fc0;
        case 0x277fc4u: goto label_277fc4;
        case 0x277fc8u: goto label_277fc8;
        case 0x277fccu: goto label_277fcc;
        case 0x277fd0u: goto label_277fd0;
        case 0x277fd4u: goto label_277fd4;
        case 0x277fd8u: goto label_277fd8;
        case 0x277fdcu: goto label_277fdc;
        case 0x277fe0u: goto label_277fe0;
        case 0x277fe4u: goto label_277fe4;
        case 0x277fe8u: goto label_277fe8;
        case 0x277fecu: goto label_277fec;
        case 0x277ff0u: goto label_277ff0;
        case 0x277ff4u: goto label_277ff4;
        case 0x277ff8u: goto label_277ff8;
        case 0x277ffcu: goto label_277ffc;
        case 0x278000u: goto label_278000;
        case 0x278004u: goto label_278004;
        case 0x278008u: goto label_278008;
        case 0x27800cu: goto label_27800c;
        case 0x278010u: goto label_278010;
        case 0x278014u: goto label_278014;
        case 0x278018u: goto label_278018;
        case 0x27801cu: goto label_27801c;
        case 0x278020u: goto label_278020;
        case 0x278024u: goto label_278024;
        case 0x278028u: goto label_278028;
        case 0x27802cu: goto label_27802c;
        case 0x278030u: goto label_278030;
        case 0x278034u: goto label_278034;
        case 0x278038u: goto label_278038;
        case 0x27803cu: goto label_27803c;
        case 0x278040u: goto label_278040;
        case 0x278044u: goto label_278044;
        case 0x278048u: goto label_278048;
        case 0x27804cu: goto label_27804c;
        case 0x278050u: goto label_278050;
        case 0x278054u: goto label_278054;
        case 0x278058u: goto label_278058;
        case 0x27805cu: goto label_27805c;
        case 0x278060u: goto label_278060;
        case 0x278064u: goto label_278064;
        case 0x278068u: goto label_278068;
        case 0x27806cu: goto label_27806c;
        case 0x278070u: goto label_278070;
        case 0x278074u: goto label_278074;
        case 0x278078u: goto label_278078;
        case 0x27807cu: goto label_27807c;
        case 0x278080u: goto label_278080;
        case 0x278084u: goto label_278084;
        case 0x278088u: goto label_278088;
        case 0x27808cu: goto label_27808c;
        case 0x278090u: goto label_278090;
        case 0x278094u: goto label_278094;
        case 0x278098u: goto label_278098;
        case 0x27809cu: goto label_27809c;
        case 0x2780a0u: goto label_2780a0;
        case 0x2780a4u: goto label_2780a4;
        case 0x2780a8u: goto label_2780a8;
        case 0x2780acu: goto label_2780ac;
        case 0x2780b0u: goto label_2780b0;
        case 0x2780b4u: goto label_2780b4;
        case 0x2780b8u: goto label_2780b8;
        case 0x2780bcu: goto label_2780bc;
        case 0x2780c0u: goto label_2780c0;
        case 0x2780c4u: goto label_2780c4;
        case 0x2780c8u: goto label_2780c8;
        case 0x2780ccu: goto label_2780cc;
        case 0x2780d0u: goto label_2780d0;
        case 0x2780d4u: goto label_2780d4;
        case 0x2780d8u: goto label_2780d8;
        case 0x2780dcu: goto label_2780dc;
        case 0x2780e0u: goto label_2780e0;
        case 0x2780e4u: goto label_2780e4;
        case 0x2780e8u: goto label_2780e8;
        case 0x2780ecu: goto label_2780ec;
        case 0x2780f0u: goto label_2780f0;
        case 0x2780f4u: goto label_2780f4;
        case 0x2780f8u: goto label_2780f8;
        case 0x2780fcu: goto label_2780fc;
        case 0x278100u: goto label_278100;
        case 0x278104u: goto label_278104;
        case 0x278108u: goto label_278108;
        case 0x27810cu: goto label_27810c;
        case 0x278110u: goto label_278110;
        case 0x278114u: goto label_278114;
        case 0x278118u: goto label_278118;
        case 0x27811cu: goto label_27811c;
        case 0x278120u: goto label_278120;
        case 0x278124u: goto label_278124;
        case 0x278128u: goto label_278128;
        case 0x27812cu: goto label_27812c;
        case 0x278130u: goto label_278130;
        case 0x278134u: goto label_278134;
        case 0x278138u: goto label_278138;
        case 0x27813cu: goto label_27813c;
        case 0x278140u: goto label_278140;
        case 0x278144u: goto label_278144;
        case 0x278148u: goto label_278148;
        case 0x27814cu: goto label_27814c;
        case 0x278150u: goto label_278150;
        case 0x278154u: goto label_278154;
        case 0x278158u: goto label_278158;
        case 0x27815cu: goto label_27815c;
        case 0x278160u: goto label_278160;
        case 0x278164u: goto label_278164;
        case 0x278168u: goto label_278168;
        case 0x27816cu: goto label_27816c;
        case 0x278170u: goto label_278170;
        case 0x278174u: goto label_278174;
        case 0x278178u: goto label_278178;
        case 0x27817cu: goto label_27817c;
        case 0x278180u: goto label_278180;
        case 0x278184u: goto label_278184;
        case 0x278188u: goto label_278188;
        case 0x27818cu: goto label_27818c;
        case 0x278190u: goto label_278190;
        case 0x278194u: goto label_278194;
        case 0x278198u: goto label_278198;
        case 0x27819cu: goto label_27819c;
        case 0x2781a0u: goto label_2781a0;
        case 0x2781a4u: goto label_2781a4;
        case 0x2781a8u: goto label_2781a8;
        case 0x2781acu: goto label_2781ac;
        case 0x2781b0u: goto label_2781b0;
        case 0x2781b4u: goto label_2781b4;
        case 0x2781b8u: goto label_2781b8;
        case 0x2781bcu: goto label_2781bc;
        case 0x2781c0u: goto label_2781c0;
        case 0x2781c4u: goto label_2781c4;
        case 0x2781c8u: goto label_2781c8;
        case 0x2781ccu: goto label_2781cc;
        case 0x2781d0u: goto label_2781d0;
        case 0x2781d4u: goto label_2781d4;
        case 0x2781d8u: goto label_2781d8;
        case 0x2781dcu: goto label_2781dc;
        case 0x2781e0u: goto label_2781e0;
        case 0x2781e4u: goto label_2781e4;
        case 0x2781e8u: goto label_2781e8;
        case 0x2781ecu: goto label_2781ec;
        case 0x2781f0u: goto label_2781f0;
        case 0x2781f4u: goto label_2781f4;
        case 0x2781f8u: goto label_2781f8;
        case 0x2781fcu: goto label_2781fc;
        case 0x278200u: goto label_278200;
        case 0x278204u: goto label_278204;
        case 0x278208u: goto label_278208;
        case 0x27820cu: goto label_27820c;
        case 0x278210u: goto label_278210;
        case 0x278214u: goto label_278214;
        case 0x278218u: goto label_278218;
        case 0x27821cu: goto label_27821c;
        case 0x278220u: goto label_278220;
        case 0x278224u: goto label_278224;
        case 0x278228u: goto label_278228;
        case 0x27822cu: goto label_27822c;
        case 0x278230u: goto label_278230;
        case 0x278234u: goto label_278234;
        case 0x278238u: goto label_278238;
        case 0x27823cu: goto label_27823c;
        case 0x278240u: goto label_278240;
        case 0x278244u: goto label_278244;
        case 0x278248u: goto label_278248;
        case 0x27824cu: goto label_27824c;
        case 0x278250u: goto label_278250;
        case 0x278254u: goto label_278254;
        case 0x278258u: goto label_278258;
        case 0x27825cu: goto label_27825c;
        case 0x278260u: goto label_278260;
        case 0x278264u: goto label_278264;
        case 0x278268u: goto label_278268;
        case 0x27826cu: goto label_27826c;
        case 0x278270u: goto label_278270;
        case 0x278274u: goto label_278274;
        case 0x278278u: goto label_278278;
        case 0x27827cu: goto label_27827c;
        case 0x278280u: goto label_278280;
        case 0x278284u: goto label_278284;
        case 0x278288u: goto label_278288;
        case 0x27828cu: goto label_27828c;
        case 0x278290u: goto label_278290;
        case 0x278294u: goto label_278294;
        case 0x278298u: goto label_278298;
        case 0x27829cu: goto label_27829c;
        case 0x2782a0u: goto label_2782a0;
        case 0x2782a4u: goto label_2782a4;
        case 0x2782a8u: goto label_2782a8;
        case 0x2782acu: goto label_2782ac;
        case 0x2782b0u: goto label_2782b0;
        case 0x2782b4u: goto label_2782b4;
        case 0x2782b8u: goto label_2782b8;
        case 0x2782bcu: goto label_2782bc;
        case 0x2782c0u: goto label_2782c0;
        case 0x2782c4u: goto label_2782c4;
        case 0x2782c8u: goto label_2782c8;
        case 0x2782ccu: goto label_2782cc;
        case 0x2782d0u: goto label_2782d0;
        case 0x2782d4u: goto label_2782d4;
        case 0x2782d8u: goto label_2782d8;
        case 0x2782dcu: goto label_2782dc;
        case 0x2782e0u: goto label_2782e0;
        case 0x2782e4u: goto label_2782e4;
        case 0x2782e8u: goto label_2782e8;
        case 0x2782ecu: goto label_2782ec;
        case 0x2782f0u: goto label_2782f0;
        case 0x2782f4u: goto label_2782f4;
        case 0x2782f8u: goto label_2782f8;
        case 0x2782fcu: goto label_2782fc;
        case 0x278300u: goto label_278300;
        case 0x278304u: goto label_278304;
        case 0x278308u: goto label_278308;
        case 0x27830cu: goto label_27830c;
        case 0x278310u: goto label_278310;
        case 0x278314u: goto label_278314;
        case 0x278318u: goto label_278318;
        case 0x27831cu: goto label_27831c;
        case 0x278320u: goto label_278320;
        case 0x278324u: goto label_278324;
        case 0x278328u: goto label_278328;
        case 0x27832cu: goto label_27832c;
        case 0x278330u: goto label_278330;
        case 0x278334u: goto label_278334;
        case 0x278338u: goto label_278338;
        case 0x27833cu: goto label_27833c;
        case 0x278340u: goto label_278340;
        case 0x278344u: goto label_278344;
        case 0x278348u: goto label_278348;
        case 0x27834cu: goto label_27834c;
        case 0x278350u: goto label_278350;
        case 0x278354u: goto label_278354;
        case 0x278358u: goto label_278358;
        case 0x27835cu: goto label_27835c;
        case 0x278360u: goto label_278360;
        case 0x278364u: goto label_278364;
        case 0x278368u: goto label_278368;
        case 0x27836cu: goto label_27836c;
        case 0x278370u: goto label_278370;
        case 0x278374u: goto label_278374;
        case 0x278378u: goto label_278378;
        case 0x27837cu: goto label_27837c;
        case 0x278380u: goto label_278380;
        case 0x278384u: goto label_278384;
        case 0x278388u: goto label_278388;
        case 0x27838cu: goto label_27838c;
        case 0x278390u: goto label_278390;
        case 0x278394u: goto label_278394;
        case 0x278398u: goto label_278398;
        case 0x27839cu: goto label_27839c;
        case 0x2783a0u: goto label_2783a0;
        case 0x2783a4u: goto label_2783a4;
        case 0x2783a8u: goto label_2783a8;
        case 0x2783acu: goto label_2783ac;
        case 0x2783b0u: goto label_2783b0;
        case 0x2783b4u: goto label_2783b4;
        case 0x2783b8u: goto label_2783b8;
        case 0x2783bcu: goto label_2783bc;
        case 0x2783c0u: goto label_2783c0;
        case 0x2783c4u: goto label_2783c4;
        case 0x2783c8u: goto label_2783c8;
        case 0x2783ccu: goto label_2783cc;
        case 0x2783d0u: goto label_2783d0;
        case 0x2783d4u: goto label_2783d4;
        case 0x2783d8u: goto label_2783d8;
        case 0x2783dcu: goto label_2783dc;
        case 0x2783e0u: goto label_2783e0;
        case 0x2783e4u: goto label_2783e4;
        case 0x2783e8u: goto label_2783e8;
        case 0x2783ecu: goto label_2783ec;
        case 0x2783f0u: goto label_2783f0;
        case 0x2783f4u: goto label_2783f4;
        case 0x2783f8u: goto label_2783f8;
        case 0x2783fcu: goto label_2783fc;
        case 0x278400u: goto label_278400;
        case 0x278404u: goto label_278404;
        case 0x278408u: goto label_278408;
        case 0x27840cu: goto label_27840c;
        case 0x278410u: goto label_278410;
        case 0x278414u: goto label_278414;
        case 0x278418u: goto label_278418;
        case 0x27841cu: goto label_27841c;
        case 0x278420u: goto label_278420;
        case 0x278424u: goto label_278424;
        case 0x278428u: goto label_278428;
        case 0x27842cu: goto label_27842c;
        case 0x278430u: goto label_278430;
        case 0x278434u: goto label_278434;
        case 0x278438u: goto label_278438;
        case 0x27843cu: goto label_27843c;
        case 0x278440u: goto label_278440;
        case 0x278444u: goto label_278444;
        case 0x278448u: goto label_278448;
        case 0x27844cu: goto label_27844c;
        case 0x278450u: goto label_278450;
        case 0x278454u: goto label_278454;
        case 0x278458u: goto label_278458;
        case 0x27845cu: goto label_27845c;
        case 0x278460u: goto label_278460;
        case 0x278464u: goto label_278464;
        case 0x278468u: goto label_278468;
        case 0x27846cu: goto label_27846c;
        case 0x278470u: goto label_278470;
        case 0x278474u: goto label_278474;
        case 0x278478u: goto label_278478;
        case 0x27847cu: goto label_27847c;
        case 0x278480u: goto label_278480;
        case 0x278484u: goto label_278484;
        case 0x278488u: goto label_278488;
        case 0x27848cu: goto label_27848c;
        case 0x278490u: goto label_278490;
        case 0x278494u: goto label_278494;
        case 0x278498u: goto label_278498;
        case 0x27849cu: goto label_27849c;
        case 0x2784a0u: goto label_2784a0;
        case 0x2784a4u: goto label_2784a4;
        case 0x2784a8u: goto label_2784a8;
        case 0x2784acu: goto label_2784ac;
        case 0x2784b0u: goto label_2784b0;
        case 0x2784b4u: goto label_2784b4;
        case 0x2784b8u: goto label_2784b8;
        case 0x2784bcu: goto label_2784bc;
        case 0x2784c0u: goto label_2784c0;
        case 0x2784c4u: goto label_2784c4;
        case 0x2784c8u: goto label_2784c8;
        case 0x2784ccu: goto label_2784cc;
        case 0x2784d0u: goto label_2784d0;
        case 0x2784d4u: goto label_2784d4;
        case 0x2784d8u: goto label_2784d8;
        case 0x2784dcu: goto label_2784dc;
        case 0x2784e0u: goto label_2784e0;
        case 0x2784e4u: goto label_2784e4;
        case 0x2784e8u: goto label_2784e8;
        case 0x2784ecu: goto label_2784ec;
        case 0x2784f0u: goto label_2784f0;
        case 0x2784f4u: goto label_2784f4;
        case 0x2784f8u: goto label_2784f8;
        case 0x2784fcu: goto label_2784fc;
        case 0x278500u: goto label_278500;
        case 0x278504u: goto label_278504;
        case 0x278508u: goto label_278508;
        case 0x27850cu: goto label_27850c;
        case 0x278510u: goto label_278510;
        case 0x278514u: goto label_278514;
        case 0x278518u: goto label_278518;
        case 0x27851cu: goto label_27851c;
        case 0x278520u: goto label_278520;
        case 0x278524u: goto label_278524;
        case 0x278528u: goto label_278528;
        case 0x27852cu: goto label_27852c;
        case 0x278530u: goto label_278530;
        case 0x278534u: goto label_278534;
        case 0x278538u: goto label_278538;
        case 0x27853cu: goto label_27853c;
        case 0x278540u: goto label_278540;
        case 0x278544u: goto label_278544;
        case 0x278548u: goto label_278548;
        case 0x27854cu: goto label_27854c;
        case 0x278550u: goto label_278550;
        case 0x278554u: goto label_278554;
        case 0x278558u: goto label_278558;
        case 0x27855cu: goto label_27855c;
        case 0x278560u: goto label_278560;
        case 0x278564u: goto label_278564;
        case 0x278568u: goto label_278568;
        case 0x27856cu: goto label_27856c;
        case 0x278570u: goto label_278570;
        case 0x278574u: goto label_278574;
        case 0x278578u: goto label_278578;
        case 0x27857cu: goto label_27857c;
        case 0x278580u: goto label_278580;
        case 0x278584u: goto label_278584;
        case 0x278588u: goto label_278588;
        case 0x27858cu: goto label_27858c;
        case 0x278590u: goto label_278590;
        case 0x278594u: goto label_278594;
        case 0x278598u: goto label_278598;
        case 0x27859cu: goto label_27859c;
        case 0x2785a0u: goto label_2785a0;
        case 0x2785a4u: goto label_2785a4;
        case 0x2785a8u: goto label_2785a8;
        case 0x2785acu: goto label_2785ac;
        case 0x2785b0u: goto label_2785b0;
        case 0x2785b4u: goto label_2785b4;
        case 0x2785b8u: goto label_2785b8;
        case 0x2785bcu: goto label_2785bc;
        case 0x2785c0u: goto label_2785c0;
        case 0x2785c4u: goto label_2785c4;
        case 0x2785c8u: goto label_2785c8;
        case 0x2785ccu: goto label_2785cc;
        case 0x2785d0u: goto label_2785d0;
        case 0x2785d4u: goto label_2785d4;
        case 0x2785d8u: goto label_2785d8;
        case 0x2785dcu: goto label_2785dc;
        case 0x2785e0u: goto label_2785e0;
        case 0x2785e4u: goto label_2785e4;
        case 0x2785e8u: goto label_2785e8;
        case 0x2785ecu: goto label_2785ec;
        case 0x2785f0u: goto label_2785f0;
        case 0x2785f4u: goto label_2785f4;
        case 0x2785f8u: goto label_2785f8;
        case 0x2785fcu: goto label_2785fc;
        case 0x278600u: goto label_278600;
        case 0x278604u: goto label_278604;
        case 0x278608u: goto label_278608;
        case 0x27860cu: goto label_27860c;
        case 0x278610u: goto label_278610;
        case 0x278614u: goto label_278614;
        case 0x278618u: goto label_278618;
        case 0x27861cu: goto label_27861c;
        case 0x278620u: goto label_278620;
        case 0x278624u: goto label_278624;
        case 0x278628u: goto label_278628;
        case 0x27862cu: goto label_27862c;
        case 0x278630u: goto label_278630;
        case 0x278634u: goto label_278634;
        case 0x278638u: goto label_278638;
        case 0x27863cu: goto label_27863c;
        case 0x278640u: goto label_278640;
        case 0x278644u: goto label_278644;
        case 0x278648u: goto label_278648;
        case 0x27864cu: goto label_27864c;
        case 0x278650u: goto label_278650;
        case 0x278654u: goto label_278654;
        case 0x278658u: goto label_278658;
        case 0x27865cu: goto label_27865c;
        case 0x278660u: goto label_278660;
        case 0x278664u: goto label_278664;
        case 0x278668u: goto label_278668;
        case 0x27866cu: goto label_27866c;
        case 0x278670u: goto label_278670;
        case 0x278674u: goto label_278674;
        case 0x278678u: goto label_278678;
        case 0x27867cu: goto label_27867c;
        case 0x278680u: goto label_278680;
        case 0x278684u: goto label_278684;
        case 0x278688u: goto label_278688;
        case 0x27868cu: goto label_27868c;
        case 0x278690u: goto label_278690;
        case 0x278694u: goto label_278694;
        case 0x278698u: goto label_278698;
        case 0x27869cu: goto label_27869c;
        case 0x2786a0u: goto label_2786a0;
        case 0x2786a4u: goto label_2786a4;
        case 0x2786a8u: goto label_2786a8;
        case 0x2786acu: goto label_2786ac;
        case 0x2786b0u: goto label_2786b0;
        case 0x2786b4u: goto label_2786b4;
        case 0x2786b8u: goto label_2786b8;
        case 0x2786bcu: goto label_2786bc;
        case 0x2786c0u: goto label_2786c0;
        case 0x2786c4u: goto label_2786c4;
        case 0x2786c8u: goto label_2786c8;
        case 0x2786ccu: goto label_2786cc;
        case 0x2786d0u: goto label_2786d0;
        case 0x2786d4u: goto label_2786d4;
        case 0x2786d8u: goto label_2786d8;
        case 0x2786dcu: goto label_2786dc;
        case 0x2786e0u: goto label_2786e0;
        case 0x2786e4u: goto label_2786e4;
        case 0x2786e8u: goto label_2786e8;
        case 0x2786ecu: goto label_2786ec;
        case 0x2786f0u: goto label_2786f0;
        case 0x2786f4u: goto label_2786f4;
        case 0x2786f8u: goto label_2786f8;
        case 0x2786fcu: goto label_2786fc;
        case 0x278700u: goto label_278700;
        case 0x278704u: goto label_278704;
        case 0x278708u: goto label_278708;
        case 0x27870cu: goto label_27870c;
        case 0x278710u: goto label_278710;
        case 0x278714u: goto label_278714;
        case 0x278718u: goto label_278718;
        case 0x27871cu: goto label_27871c;
        case 0x278720u: goto label_278720;
        case 0x278724u: goto label_278724;
        case 0x278728u: goto label_278728;
        case 0x27872cu: goto label_27872c;
        case 0x278730u: goto label_278730;
        case 0x278734u: goto label_278734;
        case 0x278738u: goto label_278738;
        case 0x27873cu: goto label_27873c;
        case 0x278740u: goto label_278740;
        case 0x278744u: goto label_278744;
        case 0x278748u: goto label_278748;
        case 0x27874cu: goto label_27874c;
        case 0x278750u: goto label_278750;
        case 0x278754u: goto label_278754;
        case 0x278758u: goto label_278758;
        case 0x27875cu: goto label_27875c;
        case 0x278760u: goto label_278760;
        case 0x278764u: goto label_278764;
        case 0x278768u: goto label_278768;
        case 0x27876cu: goto label_27876c;
        case 0x278770u: goto label_278770;
        case 0x278774u: goto label_278774;
        case 0x278778u: goto label_278778;
        case 0x27877cu: goto label_27877c;
        case 0x278780u: goto label_278780;
        case 0x278784u: goto label_278784;
        case 0x278788u: goto label_278788;
        case 0x27878cu: goto label_27878c;
        case 0x278790u: goto label_278790;
        case 0x278794u: goto label_278794;
        case 0x278798u: goto label_278798;
        case 0x27879cu: goto label_27879c;
        case 0x2787a0u: goto label_2787a0;
        case 0x2787a4u: goto label_2787a4;
        case 0x2787a8u: goto label_2787a8;
        case 0x2787acu: goto label_2787ac;
        case 0x2787b0u: goto label_2787b0;
        case 0x2787b4u: goto label_2787b4;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787bcu: goto label_2787bc;
        case 0x2787c0u: goto label_2787c0;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787c8u: goto label_2787c8;
        case 0x2787ccu: goto label_2787cc;
        default: break;
    }

    ctx->pc = 0x277d58u;

label_277d58:
    // 0x277d58: 0x27bdf940  addiu       $sp, $sp, -0x6C0
    ctx->pc = 0x277d58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965568));
label_277d5c:
    // 0x277d5c: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x277d5cu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_277d60:
    // 0x277d60: 0x7fb10680  sq          $s1, 0x680($sp)
    ctx->pc = 0x277d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1664), GPR_VEC(ctx, 17));
label_277d64:
    // 0x277d64: 0x7fb00690  sq          $s0, 0x690($sp)
    ctx->pc = 0x277d64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1680), GPR_VEC(ctx, 16));
label_277d68:
    // 0x277d68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x277d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_277d6c:
    // 0x277d6c: 0x7fb20670  sq          $s2, 0x670($sp)
    ctx->pc = 0x277d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1648), GPR_VEC(ctx, 18));
label_277d70:
    // 0x277d70: 0x7fb30660  sq          $s3, 0x660($sp)
    ctx->pc = 0x277d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1632), GPR_VEC(ctx, 19));
label_277d74:
    // 0x277d74: 0x7fb40650  sq          $s4, 0x650($sp)
    ctx->pc = 0x277d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1616), GPR_VEC(ctx, 20));
label_277d78:
    // 0x277d78: 0x7fb50640  sq          $s5, 0x640($sp)
    ctx->pc = 0x277d78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1600), GPR_VEC(ctx, 21));
label_277d7c:
    // 0x277d7c: 0x7fb60630  sq          $s6, 0x630($sp)
    ctx->pc = 0x277d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1584), GPR_VEC(ctx, 22));
label_277d80:
    // 0x277d80: 0x7fb70620  sq          $s7, 0x620($sp)
    ctx->pc = 0x277d80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1568), GPR_VEC(ctx, 23));
label_277d84:
    // 0x277d84: 0x7fbe0610  sq          $fp, 0x610($sp)
    ctx->pc = 0x277d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1552), GPR_VEC(ctx, 30));
label_277d88:
    // 0x277d88: 0xffbf0600  sd          $ra, 0x600($sp)
    ctx->pc = 0x277d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 31));
label_277d8c:
    // 0x277d8c: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x277d8cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_277d90:
    // 0x277d90: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x277d90u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_277d94:
    // 0x277d94: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x277d94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_277d98:
    // 0x277d98: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x277d98u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_277d9c:
    // 0x277d9c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x277d9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_277da0:
    // 0x277da0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x277da0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_277da4:
    // 0x277da4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x277da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_277da8:
    // 0x277da8: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x277da8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_277dac:
    // 0x277dac: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x277dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_277db0:
    // 0x277db0: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x277db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_277db4:
    // 0x277db4: 0xc622000c  lwc1        $f2, 0xC($s1)
    ctx->pc = 0x277db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277db8:
    // 0x277db8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x277db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277dbc:
    // 0x277dbc: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x277dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277dc0:
    // 0x277dc0: 0x46001101  sub.s       $f4, $f2, $f0
    ctx->pc = 0x277dc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_277dc4:
    // 0x277dc4: 0xc6230004  lwc1        $f3, 0x4($s1)
    ctx->pc = 0x277dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277dc8:
    // 0x277dc8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x277dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277dcc:
    // 0x277dcc: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x277dccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277dd0:
    // 0x277dd0: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x277dd0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_277dd4:
    // 0x277dd4: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x277dd4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_277dd8:
    // 0x277dd8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x277dd8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_277ddc:
    // 0x277ddc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x277ddcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_277de0:
    // 0x277de0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x277de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_277de4:
    // 0x277de4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x277de4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277de8:
    // 0x277de8: 0x46002032  c.eq.s      $f4, $f0
    ctx->pc = 0x277de8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277dec:
    // 0x277dec: 0x0  nop
    ctx->pc = 0x277decu;
    // NOP
label_277df0:
    // 0x277df0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
label_277df4:
    if (ctx->pc == 0x277DF4u) {
        ctx->pc = 0x277DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DF0u;
        // 0x277df4: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277DF8u;
        goto label_277df8;
    }
    ctx->pc = 0x277DF0u;
    {
        const bool branch_taken_0x277df0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277DF0u;
        // 0x277df4: 0xe0c82d  daddu       $t9, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277df0) {
            ctx->pc = 0x277E08u;
            goto label_277e08;
        }
    }
    ctx->pc = 0x277DF8u;
label_277df8:
    // 0x277df8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277dfc:
    // 0x277dfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277dfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e00:
    // 0x277e00: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x277e00u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[4]);
label_277e04:
    // 0x277e04: 0x0  nop
    ctx->pc = 0x277e04u;
    // NOP
label_277e08:
    // 0x277e08: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x277e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277e0c:
    // 0x277e0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x277e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277e10:
    // 0x277e10: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x277e10u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277e14:
    // 0x277e14: 0x0  nop
    ctx->pc = 0x277e14u;
    // NOP
label_277e18:
    // 0x277e18: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_277e1c:
    if (ctx->pc == 0x277E1Cu) {
        ctx->pc = 0x277E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E18u;
        // 0x277e1c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277E20u;
        goto label_277e20;
    }
    ctx->pc = 0x277E18u;
    {
        const bool branch_taken_0x277e18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E18u;
        // 0x277e1c: 0xe7a00018  swc1        $f0, 0x18($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e18) {
            ctx->pc = 0x277E34u;
            goto label_277e34;
        }
    }
    ctx->pc = 0x277E20u;
label_277e20:
    // 0x277e20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277e20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277e24:
    // 0x277e24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277e24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e28:
    // 0x277e28: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x277e28u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_277e2c:
    // 0x277e2c: 0x10000004  b           . + 4 + (0x4 << 2)
label_277e30:
    if (ctx->pc == 0x277E30u) {
        ctx->pc = 0x277E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E2Cu;
        // 0x277e30: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277E34u;
        goto label_277e34;
    }
    ctx->pc = 0x277E2Cu;
    {
        const bool branch_taken_0x277e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E2Cu;
        // 0x277e30: 0xc7a10014  lwc1        $f1, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e2c) {
            ctx->pc = 0x277E40u;
            goto label_277e40;
        }
    }
    ctx->pc = 0x277E34u;
label_277e34:
    // 0x277e34: 0x46001006  mov.s       $f0, $f2
    ctx->pc = 0x277e34u;
    ctx->f[0] = FPU_MOV_S(ctx->f[2]);
label_277e38:
    // 0x277e38: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x277e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277e3c:
    // 0x277e3c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x277e3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_277e40:
    // 0x277e40: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x277e40u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277e44:
    // 0x277e44: 0x0  nop
    ctx->pc = 0x277e44u;
    // NOP
label_277e48:
    // 0x277e48: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_277e4c:
    if (ctx->pc == 0x277E4Cu) {
        ctx->pc = 0x277E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E48u;
        // 0x277e4c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277E50u;
        goto label_277e50;
    }
    ctx->pc = 0x277E48u;
    {
        const bool branch_taken_0x277e48 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x277E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E48u;
        // 0x277e4c: 0xe7a0001c  swc1        $f0, 0x1C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e48) {
            ctx->pc = 0x277E64u;
            goto label_277e64;
        }
    }
    ctx->pc = 0x277E50u;
label_277e50:
    // 0x277e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277e54:
    // 0x277e54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277e58:
    // 0x277e58: 0x46010183  div.s       $f6, $f0, $f1
    ctx->pc = 0x277e58u;
    ctx->f[6] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_277e5c:
    // 0x277e5c: 0x10000003  b           . + 4 + (0x3 << 2)
label_277e60:
    if (ctx->pc == 0x277E60u) {
        ctx->pc = 0x277E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E5Cu;
        // 0x277e60: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277E64u;
        goto label_277e64;
    }
    ctx->pc = 0x277E5Cu;
    {
        const bool branch_taken_0x277e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277E5Cu;
        // 0x277e60: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277e5c) {
            ctx->pc = 0x277E6Cu;
            goto label_277e6c;
        }
    }
    ctx->pc = 0x277E64u;
label_277e64:
    // 0x277e64: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x277e64u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_277e68:
    // 0x277e68: 0xc620000c  lwc1        $f0, 0xC($s1)
    ctx->pc = 0x277e68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277e6c:
    // 0x277e6c: 0xc6230000  lwc1        $f3, 0x0($s1)
    ctx->pc = 0x277e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277e70:
    // 0x277e70: 0xc6250010  lwc1        $f5, 0x10($s1)
    ctx->pc = 0x277e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277e74:
    // 0x277e74: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x277e74u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_277e78:
    // 0x277e78: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x277e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277e7c:
    // 0x277e7c: 0x460018c5  abs.s       $f3, $f3
    ctx->pc = 0x277e7cu;
    ctx->f[3] = FPU_ABS_S(ctx->f[3]);
label_277e80:
    // 0x277e80: 0xc6240014  lwc1        $f4, 0x14($s1)
    ctx->pc = 0x277e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277e84:
    // 0x277e84: 0x46002945  abs.s       $f5, $f5
    ctx->pc = 0x277e84u;
    ctx->f[5] = FPU_ABS_S(ctx->f[5]);
label_277e88:
    // 0x277e88: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x277e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277e8c:
    // 0x277e8c: 0x46001085  abs.s       $f2, $f2
    ctx->pc = 0x277e8cu;
    ctx->f[2] = FPU_ABS_S(ctx->f[2]);
label_277e90:
    // 0x277e90: 0x46002105  abs.s       $f4, $f4
    ctx->pc = 0x277e90u;
    ctx->f[4] = FPU_ABS_S(ctx->f[4]);
label_277e94:
    // 0x277e94: 0x460018e8  max.s       $f3, $f3, $f0
    ctx->pc = 0x277e94u;
    ctx->f[3] = std::max(ctx->f[3], ctx->f[0]);
label_277e98:
    // 0x277e98: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x277e98u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
label_277e9c:
    // 0x277e9c: 0xe7a60020  swc1        $f6, 0x20($sp)
    ctx->pc = 0x277e9cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_277ea0:
    // 0x277ea0: 0x460510a8  max.s       $f2, $f2, $f5
    ctx->pc = 0x277ea0u;
    ctx->f[2] = std::max(ctx->f[2], ctx->f[5]);
label_277ea4:
    // 0x277ea4: 0x46040868  max.s       $f1, $f1, $f4
    ctx->pc = 0x277ea4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[4]);
label_277ea8:
    // 0x277ea8: 0xc7808018  lwc1        $f0, -0x7FE8($gp)
    ctx->pc = 0x277ea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277eac:
    // 0x277eac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x277eacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_277eb0:
    // 0x277eb0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x277eb0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_277eb4:
    // 0x277eb4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x277eb4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_277eb8:
    // 0x277eb8: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x277eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_277ebc:
    // 0x277ebc: 0xe7a30024  swc1        $f3, 0x24($sp)
    ctx->pc = 0x277ebcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_277ec0:
    // 0x277ec0: 0xe7a20028  swc1        $f2, 0x28($sp)
    ctx->pc = 0x277ec0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_277ec4:
    // 0x277ec4: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x277ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_277ec8:
    // 0x277ec8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x277ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_277ecc:
    // 0x277ecc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x277eccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277ed0:
    // 0x277ed0: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x277ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_277ed4:
    // 0x277ed4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x277ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_277ed8:
    // 0x277ed8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x277ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_277edc:
    // 0x277edc: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x277edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_277ee0:
    // 0x277ee0: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x277ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_277ee4:
    // 0x277ee4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x277ee4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_277ee8:
    // 0x277ee8: 0x10400228  beqz        $v0, . + 4 + (0x228 << 2)
label_277eec:
    if (ctx->pc == 0x277EECu) {
        ctx->pc = 0x277EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EE8u;
        // 0x277eec: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277EF0u;
        goto label_277ef0;
    }
    ctx->pc = 0x277EE8u;
    {
        const bool branch_taken_0x277ee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x277EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277EE8u;
        // 0x277eec: 0xafa3033c  sw          $v1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ee8) {
            ctx->pc = 0x27878Cu;
            goto label_27878c;
        }
    }
    ctx->pc = 0x277EF0u;
label_277ef0:
    // 0x277ef0: 0x27a8037c  addiu       $t0, $sp, 0x37C
    ctx->pc = 0x277ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
label_277ef4:
    // 0x277ef4: 0x27ae0374  addiu       $t6, $sp, 0x374
    ctx->pc = 0x277ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_277ef8:
    // 0x277ef8: 0xafa805c0  sw          $t0, 0x5C0($sp)
    ctx->pc = 0x277ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1472), GPR_U32(ctx, 8));
label_277efc:
    // 0x277efc: 0x27b70388  addiu       $s7, $sp, 0x388
    ctx->pc = 0x277efcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_277f00:
    // 0x277f00: 0x8c62fff4  lw          $v0, -0xC($v1)
    ctx->pc = 0x277f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_277f04:
    // 0x277f04: 0x0  nop
    ctx->pc = 0x277f04u;
    // NOP
label_277f08:
    // 0x277f08: 0x2463fff4  addiu       $v1, $v1, -0xC
    ctx->pc = 0x277f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_277f0c:
    // 0x277f0c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x277f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_277f10:
    // 0x277f10: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x277f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_277f14:
    // 0x277f14: 0x4800060  bltz        $a0, . + 4 + (0x60 << 2)
label_277f18:
    if (ctx->pc == 0x277F18u) {
        ctx->pc = 0x277F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F14u;
        // 0x277f18: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277F1Cu;
        goto label_277f1c;
    }
    ctx->pc = 0x277F14u;
    {
        const bool branch_taken_0x277f14 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x277F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F14u;
        // 0x277f18: 0x8fa2033c  lw          $v0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f14) {
            ctx->pc = 0x278098u;
            goto label_278098;
        }
    }
    ctx->pc = 0x277F1Cu;
label_277f1c:
    // 0x277f1c: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x277f1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_277f20:
    // 0x277f20: 0x8fa4033c  lw          $a0, 0x33C($sp)
    ctx->pc = 0x277f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_277f24:
    // 0x277f24: 0x0  nop
    ctx->pc = 0x277f24u;
    // NOP
label_277f28:
    // 0x277f28: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x277f28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_277f2c:
    // 0x277f2c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x277f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_277f30:
    // 0x277f30: 0x5d3021  addu        $a2, $v0, $sp
    ctx->pc = 0x277f30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_277f34:
    // 0x277f34: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x277f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_277f38:
    // 0x277f38: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x277f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277f3c:
    // 0x277f3c: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x277f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277f40:
    // 0x277f40: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x277f40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_277f44:
    // 0x277f44: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x277f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_277f48:
    // 0x277f48: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x277f48u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_277f4c:
    // 0x277f4c: 0xc4c30024  lwc1        $f3, 0x24($a2)
    ctx->pc = 0x277f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_277f50:
    // 0x277f50: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x277f50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277f54:
    // 0x277f54: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x277f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_277f58:
    // 0x277f58: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x277f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277f5c:
    // 0x277f5c: 0x46022880  add.s       $f2, $f5, $f2
    ctx->pc = 0x277f5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[5], ctx->f[2]);
label_277f60:
    // 0x277f60: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x277f60u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_277f64:
    // 0x277f64: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x277f64u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_277f68:
    // 0x277f68: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_277f6c:
    if (ctx->pc == 0x277F6Cu) {
        ctx->pc = 0x277F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F68u;
        // 0x277f6c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277F70u;
        goto label_277f70;
    }
    ctx->pc = 0x277F68u;
    {
        const bool branch_taken_0x277f68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F68u;
        // 0x277f6c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277f68) {
            ctx->pc = 0x277FECu;
            goto label_277fec;
        }
    }
    ctx->pc = 0x277F70u;
label_277f70:
    // 0x277f70: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x277f70u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277f74:
    // 0x277f74: 0x0  nop
    ctx->pc = 0x277f74u;
    // NOP
label_277f78:
    // 0x277f78: 0x45030027  bc1tl       . + 4 + (0x27 << 2)
label_277f7c:
    if (ctx->pc == 0x277F7Cu) {
        ctx->pc = 0x277F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F78u;
        // 0x277f7c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277F80u;
        goto label_277f80;
    }
    ctx->pc = 0x277F78u;
    {
        const bool branch_taken_0x277f78 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277f78) {
            ctx->pc = 0x277F7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277F78u;
            // 0x277f7c: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278018u;
            goto label_278018;
        }
    }
    ctx->pc = 0x277F80u;
label_277f80:
    // 0x277f80: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x277f80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277f84:
    // 0x277f84: 0x0  nop
    ctx->pc = 0x277f84u;
    // NOP
label_277f88:
    // 0x277f88: 0x4503001c  bc1tl       . + 4 + (0x1C << 2)
label_277f8c:
    if (ctx->pc == 0x277F8Cu) {
        ctx->pc = 0x277F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277F88u;
        // 0x277f8c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277F90u;
        goto label_277f90;
    }
    ctx->pc = 0x277F88u;
    {
        const bool branch_taken_0x277f88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x277f88) {
            ctx->pc = 0x277F8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277F88u;
            // 0x277f8c: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277FFCu;
            goto label_277ffc;
        }
    }
    ctx->pc = 0x277F90u;
label_277f90:
    // 0x277f90: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x277f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_277f94:
    // 0x277f94: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x277f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_277f98:
    // 0x277f98: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x277f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_277f9c:
    // 0x277f9c: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x277f9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277fa0:
    // 0x277fa0: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x277fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_277fa4:
    // 0x277fa4: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x277fa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_277fa8:
    // 0x277fa8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x277fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_277fac:
    // 0x277fac: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x277facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_277fb0:
    // 0x277fb0: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x277fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_277fb4:
    // 0x277fb4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_277fb8:
    if (ctx->pc == 0x277FB8u) {
        ctx->pc = 0x277FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FB4u;
        // 0x277fb8: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x277FBCu;
        goto label_277fbc;
    }
    ctx->pc = 0x277FB4u;
    {
        const bool branch_taken_0x277fb4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FB4u;
        // 0x277fb8: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fb4) {
            ctx->pc = 0x277FD0u;
            goto label_277fd0;
        }
    }
    ctx->pc = 0x277FBCu;
label_277fbc:
    // 0x277fbc: 0x46021801  sub.s       $f0, $f3, $f2
    ctx->pc = 0x277fbcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_277fc0:
    // 0x277fc0: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x277fc0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_277fc4:
    // 0x277fc4: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x277fc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_277fc8:
    // 0x277fc8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x277fc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_277fcc:
    // 0x277fcc: 0x0  nop
    ctx->pc = 0x277fccu;
    // NOP
label_277fd0:
    // 0x277fd0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x277fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_277fd4:
    // 0x277fd4: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x277fd4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277fd8:
    // 0x277fd8: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x277fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_277fdc:
    // 0x277fdc: 0x45000028  bc1f        . + 4 + (0x28 << 2)
label_277fe0:
    if (ctx->pc == 0x277FE0u) {
        ctx->pc = 0x277FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FDCu;
        // 0x277fe0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277FE4u;
        goto label_277fe4;
    }
    ctx->pc = 0x277FDCu;
    {
        const bool branch_taken_0x277fdc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FDCu;
        // 0x277fe0: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fdc) {
            ctx->pc = 0x278080u;
            goto label_278080;
        }
    }
    ctx->pc = 0x277FE4u;
label_277fe4:
    // 0x277fe4: 0x10000022  b           . + 4 + (0x22 << 2)
label_277fe8:
    if (ctx->pc == 0x277FE8u) {
        ctx->pc = 0x277FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FE4u;
        // 0x277fe8: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277FECu;
        goto label_277fec;
    }
    ctx->pc = 0x277FE4u;
    {
        const bool branch_taken_0x277fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FE4u;
        // 0x277fe8: 0x46050801  sub.s       $f0, $f1, $f5 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277fe4) {
            ctx->pc = 0x278070u;
            goto label_278070;
        }
    }
    ctx->pc = 0x277FECu;
label_277fec:
    // 0x277fec: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x277fecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277ff0:
    // 0x277ff0: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_277ff4:
    if (ctx->pc == 0x277FF4u) {
        ctx->pc = 0x277FF8u;
        goto label_277ff8;
    }
    ctx->pc = 0x277FF0u;
    {
        const bool branch_taken_0x277ff0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x277ff0) {
            ctx->pc = 0x278004u;
            goto label_278004;
        }
    }
    ctx->pc = 0x277FF8u;
label_277ff8:
    // 0x277ff8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x277ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_277ffc:
    // 0x277ffc: 0x10000020  b           . + 4 + (0x20 << 2)
label_278000:
    if (ctx->pc == 0x278000u) {
        ctx->pc = 0x278000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FFCu;
        // 0x278000: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278004u;
        goto label_278004;
    }
    ctx->pc = 0x277FFCu;
    {
        const bool branch_taken_0x277ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277FFCu;
        // 0x278000: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277ffc) {
            ctx->pc = 0x278080u;
            goto label_278080;
        }
    }
    ctx->pc = 0x278004u;
label_278004:
    // 0x278004: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x278004u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278008:
    // 0x278008: 0x0  nop
    ctx->pc = 0x278008u;
    // NOP
label_27800c:
    // 0x27800c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_278010:
    if (ctx->pc == 0x278010u) {
        ctx->pc = 0x278010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27800Cu;
        // 0x278010: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278014u;
        goto label_278014;
    }
    ctx->pc = 0x27800Cu;
    {
        const bool branch_taken_0x27800c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27800Cu;
        // 0x278010: 0x2483000c  addiu       $v1, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27800c) {
            ctx->pc = 0x278020u;
            goto label_278020;
        }
    }
    ctx->pc = 0x278014u;
label_278014:
    // 0x278014: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x278014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_278018:
    // 0x278018: 0x10000019  b           . + 4 + (0x19 << 2)
label_27801c:
    if (ctx->pc == 0x27801Cu) {
        ctx->pc = 0x27801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278018u;
        // 0x27801c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278020u;
        goto label_278020;
    }
    ctx->pc = 0x278018u;
    {
        const bool branch_taken_0x278018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278018u;
        // 0x27801c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278018) {
            ctx->pc = 0x278080u;
            goto label_278080;
        }
    }
    ctx->pc = 0x278020u;
label_278020:
    // 0x278020: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x278020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_278024:
    // 0x278024: 0xc460fff8  lwc1        $f0, -0x8($v1)
    ctx->pc = 0x278024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278028:
    // 0x278028: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x278028u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27802c:
    // 0x27802c: 0xc4c60018  lwc1        $f6, 0x18($a2)
    ctx->pc = 0x27802cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_278030:
    // 0x278030: 0xc464fffc  lwc1        $f4, -0x4($v1)
    ctx->pc = 0x278030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278034:
    // 0x278034: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x278034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_278038:
    // 0x278038: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x278038u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27803c:
    // 0x27803c: 0xafa3033c  sw          $v1, 0x33C($sp)
    ctx->pc = 0x27803cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 3));
label_278040:
    // 0x278040: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_278044:
    if (ctx->pc == 0x278044u) {
        ctx->pc = 0x278044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278040u;
        // 0x278044: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278048u;
        goto label_278048;
    }
    ctx->pc = 0x278040u;
    {
        const bool branch_taken_0x278040 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278040u;
        // 0x278044: 0xe4640008  swc1        $f4, 0x8($v1) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278040) {
            ctx->pc = 0x278058u;
            goto label_278058;
        }
    }
    ctx->pc = 0x278048u;
label_278048:
    // 0x278048: 0x46020801  sub.s       $f0, $f1, $f2
    ctx->pc = 0x278048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
label_27804c:
    // 0x27804c: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x27804cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_278050:
    // 0x278050: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x278050u;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_278054:
    // 0x278054: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x278054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_278058:
    // 0x278058: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x278058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_27805c:
    // 0x27805c: 0x46051834  c.lt.s      $f3, $f5
    ctx->pc = 0x27805cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278060:
    // 0x278060: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x278060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_278064:
    // 0x278064: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_278068:
    if (ctx->pc == 0x278068u) {
        ctx->pc = 0x278068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278064u;
        // 0x278068: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27806Cu;
        goto label_27806c;
    }
    ctx->pc = 0x278064u;
    {
        const bool branch_taken_0x278064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278064u;
        // 0x278068: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278064) {
            ctx->pc = 0x278080u;
            goto label_278080;
        }
    }
    ctx->pc = 0x27806Cu;
label_27806c:
    // 0x27806c: 0x46051801  sub.s       $f0, $f3, $f5
    ctx->pc = 0x27806cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[5]);
label_278070:
    // 0x278070: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x278070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278074:
    // 0x278074: 0x46003002  mul.s       $f0, $f6, $f0
    ctx->pc = 0x278074u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_278078:
    // 0x278078: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278078u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27807c:
    // 0x27807c: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x27807cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
label_278080:
    // 0x278080: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x278080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_278084:
    // 0x278084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278088:
    // 0x278088: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x278088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_27808c:
    // 0x27808c: 0x481ffa6  bgez        $a0, . + 4 + (-0x5A << 2)
label_278090:
    if (ctx->pc == 0x278090u) {
        ctx->pc = 0x278090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27808Cu;
        // 0x278090: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278094u;
        goto label_278094;
    }
    ctx->pc = 0x27808Cu;
    {
        const bool branch_taken_0x27808c = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x278090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27808Cu;
        // 0x278090: 0x8fa4033c  lw          $a0, 0x33C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27808c) {
            ctx->pc = 0x277F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277f28;
        }
    }
    ctx->pc = 0x278094u;
label_278094:
    // 0x278094: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x278094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_278098:
    // 0x278098: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x278098u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27809c:
    // 0x27809c: 0x8f8387d8  lw          $v1, -0x7828($gp)
    ctx->pc = 0x27809cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
label_2780a0:
    // 0x2780a0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2780a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2780a4:
    // 0x2780a4: 0x8c720000  lw          $s2, 0x0($v1)
    ctx->pc = 0x2780a4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2780a8:
    // 0x2780a8: 0x124001b3  beqz        $s2, . + 4 + (0x1B3 << 2)
label_2780ac:
    if (ctx->pc == 0x2780ACu) {
        ctx->pc = 0x2780ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780A8u;
        // 0x2780ac: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2780B0u;
        goto label_2780b0;
    }
    ctx->pc = 0x2780A8u;
    {
        const bool branch_taken_0x2780a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2780ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2780A8u;
        // 0x2780ac: 0x240900ff  addiu       $t1, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2780a8) {
            ctx->pc = 0x278778u;
            goto label_278778;
        }
    }
    ctx->pc = 0x2780B0u;
label_2780b0:
    // 0x2780b0: 0x8e960004  lw          $s6, 0x4($s4)
    ctx->pc = 0x2780b0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2780b4:
    // 0x2780b4: 0x8e930008  lw          $s3, 0x8($s4)
    ctx->pc = 0x2780b4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2780b8:
    // 0x2780b8: 0xafb20340  sw          $s2, 0x340($sp)
    ctx->pc = 0x2780b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 18));
label_2780bc:
    // 0x2780bc: 0xa7a00376  sh          $zero, 0x376($sp)
    ctx->pc = 0x2780bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 886), (uint16_t)GPR_U32(ctx, 0));
label_2780c0:
    // 0x2780c0: 0xa3a90375  sb          $t1, 0x375($sp)
    ctx->pc = 0x2780c0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 885), (uint8_t)GPR_U32(ctx, 9));
label_2780c4:
    // 0x2780c4: 0x9642001e  lhu         $v0, 0x1E($s2)
    ctx->pc = 0x2780c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 30)));
label_2780c8:
    // 0x2780c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2780cc:
    if (ctx->pc == 0x2780CCu) {
        ctx->pc = 0x2780D0u;
        goto label_2780d0;
    }
    ctx->pc = 0x2780C8u;
    {
        const bool branch_taken_0x2780c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2780c8) {
            ctx->pc = 0x2780D8u;
            goto label_2780d8;
        }
    }
    ctx->pc = 0x2780D0u;
label_2780d0:
    // 0x2780d0: 0x9242001c  lbu         $v0, 0x1C($s2)
    ctx->pc = 0x2780d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_2780d4:
    // 0x2780d4: 0xa3a20375  sb          $v0, 0x375($sp)
    ctx->pc = 0x2780d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 885), (uint8_t)GPR_U32(ctx, 2));
label_2780d8:
    // 0x2780d8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x2780d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2780dc:
    // 0x2780dc: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x2780dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2780e0:
    // 0x2780e0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2780e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2780e4:
    // 0x2780e4: 0xb3a2034b  sdl         $v0, 0x34B($sp)
    ctx->pc = 0x2780e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 843); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2780e8:
    // 0x2780e8: 0xb7a20344  sdr         $v0, 0x344($sp)
    ctx->pc = 0x2780e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 836); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2780ec:
    // 0x2780ec: 0xafa3034c  sw          $v1, 0x34C($sp)
    ctx->pc = 0x2780ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 3));
label_2780f0:
    // 0x2780f0: 0x6ba60013  ldl         $a2, 0x13($sp)
    ctx->pc = 0x2780f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2780f4:
    // 0x2780f4: 0x6fa6000c  ldr         $a2, 0xC($sp)
    ctx->pc = 0x2780f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2780f8:
    // 0x2780f8: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x2780f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2780fc:
    // 0x2780fc: 0xb3a60357  sdl         $a2, 0x357($sp)
    ctx->pc = 0x2780fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 855); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278100:
    // 0x278100: 0xb7a60350  sdr         $a2, 0x350($sp)
    ctx->pc = 0x278100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 848); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278104:
    // 0x278104: 0xafa80358  sw          $t0, 0x358($sp)
    ctx->pc = 0x278104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 856), GPR_U32(ctx, 8));
label_278108:
    // 0x278108: 0x6ba3001f  ldl         $v1, 0x1F($sp)
    ctx->pc = 0x278108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_27810c:
    // 0x27810c: 0x6fa30018  ldr         $v1, 0x18($sp)
    ctx->pc = 0x27810cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_278110:
    // 0x278110: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x278110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_278114:
    // 0x278114: 0xb3a30363  sdl         $v1, 0x363($sp)
    ctx->pc = 0x278114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 867); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278118:
    // 0x278118: 0xb7a3035c  sdr         $v1, 0x35C($sp)
    ctx->pc = 0x278118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 860); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27811c:
    // 0x27811c: 0xafa40364  sw          $a0, 0x364($sp)
    ctx->pc = 0x27811cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 4));
label_278120:
    // 0x278120: 0x6ba8002b  ldl         $t0, 0x2B($sp)
    ctx->pc = 0x278120u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_278124:
    // 0x278124: 0x6fa80024  ldr         $t0, 0x24($sp)
    ctx->pc = 0x278124u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_278128:
    // 0x278128: 0x8fa9002c  lw          $t1, 0x2C($sp)
    ctx->pc = 0x278128u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_27812c:
    // 0x27812c: 0xb3a8036f  sdl         $t0, 0x36F($sp)
    ctx->pc = 0x27812cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 879); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278130:
    // 0x278130: 0xb7a80368  sdr         $t0, 0x368($sp)
    ctx->pc = 0x278130u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 872); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278134:
    // 0x278134: 0xafa90370  sw          $t1, 0x370($sp)
    ctx->pc = 0x278134u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 9));
label_278138:
    // 0x278138: 0xafae037c  sw          $t6, 0x37C($sp)
    ctx->pc = 0x278138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 892), GPR_U32(ctx, 14));
label_27813c:
    // 0x27813c: 0x8fa2033c  lw          $v0, 0x33C($sp)
    ctx->pc = 0x27813cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_278140:
    // 0x278140: 0xafb70508  sw          $s7, 0x508($sp)
    ctx->pc = 0x278140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 23));
label_278144:
    // 0x278144: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278148:
    // 0x278148: 0xe7a00380  swc1        $f0, 0x380($sp)
    ctx->pc = 0x278148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 896), bits); }
label_27814c:
    // 0x27814c: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x27814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278150:
    // 0x278150: 0xe7a10384  swc1        $f1, 0x384($sp)
    ctx->pc = 0x278150u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 900), bits); }
label_278154:
    // 0x278154: 0x2e0182d  daddu       $v1, $s7, $zero
    ctx->pc = 0x278154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_278158:
    // 0x278158: 0x8fa405c0  lw          $a0, 0x5C0($sp)
    ctx->pc = 0x278158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1472)));
label_27815c:
    // 0x27815c: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x27815cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278160:
    // 0x278160: 0x10400185  beqz        $v0, . + 4 + (0x185 << 2)
label_278164:
    if (ctx->pc == 0x278164u) {
        ctx->pc = 0x278164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278160u;
        // 0x278164: 0x27be037c  addiu       $fp, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278168u;
        goto label_278168;
    }
    ctx->pc = 0x278160u;
    {
        const bool branch_taken_0x278160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278160u;
        // 0x278164: 0x27be037c  addiu       $fp, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278160) {
            ctx->pc = 0x278778u;
            goto label_278778;
        }
    }
    ctx->pc = 0x278168u;
label_278168:
    // 0x278168: 0x2462fff4  addiu       $v0, $v1, -0xC
    ctx->pc = 0x278168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
label_27816c:
    // 0x27816c: 0x0  nop
    ctx->pc = 0x27816cu;
    // NOP
label_278170:
    // 0x278170: 0x8c64fff4  lw          $a0, -0xC($v1)
    ctx->pc = 0x278170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
label_278174:
    // 0x278174: 0xafa20508  sw          $v0, 0x508($sp)
    ctx->pc = 0x278174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 2));
label_278178:
    // 0x278178: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x278178u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27817c:
    // 0x27817c: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x27817cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278180:
    // 0x278180: 0x14650071  bne         $v1, $a1, . + 4 + (0x71 << 2)
label_278184:
    if (ctx->pc == 0x278184u) {
        ctx->pc = 0x278184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278180u;
        // 0x278184: 0x8fa20508  lw          $v0, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278188u;
        goto label_278188;
    }
    ctx->pc = 0x278180u;
    {
        const bool branch_taken_0x278180 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x278184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278180u;
        // 0x278184: 0x8fa20508  lw          $v0, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278180) {
            ctx->pc = 0x278348u;
            goto label_278348;
        }
    }
    ctx->pc = 0x278188u;
label_278188:
    // 0x278188: 0x8fa20340  lw          $v0, 0x340($sp)
    ctx->pc = 0x278188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 832)));
label_27818c:
    // 0x27818c: 0x27ab0350  addiu       $t3, $sp, 0x350
    ctx->pc = 0x27818cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
label_278190:
    // 0x278190: 0x44803800  mtc1        $zero, $f7
    ctx->pc = 0x278190u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_278194:
    // 0x278194: 0x27aa0344  addiu       $t2, $sp, 0x344
    ctx->pc = 0x278194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 836));
label_278198:
    // 0x278198: 0x8c4c0020  lw          $t4, 0x20($v0)
    ctx->pc = 0x278198u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_27819c:
    // 0x27819c: 0x27a90368  addiu       $t1, $sp, 0x368
    ctx->pc = 0x27819cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 872));
label_2781a0:
    // 0x2781a0: 0x27a8035c  addiu       $t0, $sp, 0x35C
    ctx->pc = 0x2781a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 860));
label_2781a4:
    // 0x2781a4: 0x240d00ff  addiu       $t5, $zero, 0xFF
    ctx->pc = 0x2781a4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2781a8:
    // 0x2781a8: 0x8fa50508  lw          $a1, 0x508($sp)
    ctx->pc = 0x2781a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_2781ac:
    // 0x2781ac: 0x0  nop
    ctx->pc = 0x2781acu;
    // NOP
label_2781b0:
    // 0x2781b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2781b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2781b4:
    // 0x2781b4: 0x94620002  lhu         $v0, 0x2($v1)
    ctx->pc = 0x2781b4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_2781b8:
    // 0x2781b8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2781b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2781bc:
    // 0x2781bc: 0x1823021  addu        $a2, $t4, $v0
    ctx->pc = 0x2781bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2781c0:
    // 0x2781c0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2781c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2781c4:
    // 0x2781c4: 0x3067000c  andi        $a3, $v1, 0xC
    ctx->pc = 0x2781c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_2781c8:
    // 0x2781c8: 0x1671021  addu        $v0, $t3, $a3
    ctx->pc = 0x2781c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
label_2781cc:
    // 0x2781cc: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2781ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781d0:
    // 0x2781d0: 0x1471821  addu        $v1, $t2, $a3
    ctx->pc = 0x2781d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
label_2781d4:
    // 0x2781d4: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2781d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2781d8:
    // 0x2781d8: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x2781d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_2781dc:
    // 0x2781dc: 0xc4a40004  lwc1        $f4, 0x4($a1)
    ctx->pc = 0x2781dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2781e0:
    // 0x2781e0: 0x46003834  c.lt.s      $f7, $f0
    ctx->pc = 0x2781e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[7], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2781e4:
    // 0x2781e4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2781e4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2781e8:
    // 0x2781e8: 0xc4650000  lwc1        $f5, 0x0($v1)
    ctx->pc = 0x2781e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2781ec:
    // 0x2781ec: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x2781ecu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_2781f0:
    // 0x2781f0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2781f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2781f4:
    // 0x2781f4: 0xc4c2000c  lwc1        $f2, 0xC($a2)
    ctx->pc = 0x2781f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2781f8:
    // 0x2781f8: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2781f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2781fc:
    // 0x2781fc: 0x460328c0  add.s       $f3, $f5, $f3
    ctx->pc = 0x2781fcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[5], ctx->f[3]);
label_278200:
    // 0x278200: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x278200u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_278204:
    // 0x278204: 0x46010180  add.s       $f6, $f0, $f1
    ctx->pc = 0x278204u;
    ctx->f[6] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_278208:
    // 0x278208: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_27820c:
    if (ctx->pc == 0x27820Cu) {
        ctx->pc = 0x27820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278208u;
        // 0x27820c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278210u;
        goto label_278210;
    }
    ctx->pc = 0x278208u;
    {
        const bool branch_taken_0x278208 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278208u;
        // 0x27820c: 0x46042940  add.s       $f5, $f5, $f4 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278208) {
            ctx->pc = 0x27829Cu;
            goto label_27829c;
        }
    }
    ctx->pc = 0x278210u;
label_278210:
    // 0x278210: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x278210u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278214:
    // 0x278214: 0x0  nop
    ctx->pc = 0x278214u;
    // NOP
label_278218:
    // 0x278218: 0x45030045  bc1tl       . + 4 + (0x45 << 2)
label_27821c:
    if (ctx->pc == 0x27821Cu) {
        ctx->pc = 0x27821Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278218u;
        // 0x27821c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278220u;
        goto label_278220;
    }
    ctx->pc = 0x278218u;
    {
        const bool branch_taken_0x278218 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278218) {
            ctx->pc = 0x27821Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278218u;
            // 0x27821c: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x278220u;
label_278220:
    // 0x278220: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x278220u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278224:
    // 0x278224: 0x0  nop
    ctx->pc = 0x278224u;
    // NOP
label_278228:
    // 0x278228: 0x45010020  bc1t        . + 4 + (0x20 << 2)
label_27822c:
    if (ctx->pc == 0x27822Cu) {
        ctx->pc = 0x27822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278228u;
        // 0x27822c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278230u;
        goto label_278230;
    }
    ctx->pc = 0x278228u;
    {
        const bool branch_taken_0x278228 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x27822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278228u;
        // 0x27822c: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278228) {
            ctx->pc = 0x2782ACu;
            goto label_2782ac;
        }
    }
    ctx->pc = 0x278230u;
label_278230:
    // 0x278230: 0x24a4000c  addiu       $a0, $a1, 0xC
    ctx->pc = 0x278230u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_278234:
    // 0x278234: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x278234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_278238:
    // 0x278238: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x278238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27823c:
    // 0x27823c: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x27823cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278240:
    // 0x278240: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x278240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278244:
    // 0x278244: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x278244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278248:
    // 0x278248: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x278248u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_27824c:
    // 0x27824c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x27824cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_278250:
    // 0x278250: 0xafa40508  sw          $a0, 0x508($sp)
    ctx->pc = 0x278250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 4));
label_278254:
    // 0x278254: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_278258:
    if (ctx->pc == 0x278258u) {
        ctx->pc = 0x278258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278254u;
        // 0x278258: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27825Cu;
        goto label_27825c;
    }
    ctx->pc = 0x278254u;
    {
        const bool branch_taken_0x278254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278254u;
        // 0x278258: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278254) {
            ctx->pc = 0x278270u;
            goto label_278270;
        }
    }
    ctx->pc = 0x27825Cu;
label_27825c:
    // 0x27825c: 0x46033001  sub.s       $f0, $f6, $f3
    ctx->pc = 0x27825cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[3]);
label_278260:
    // 0x278260: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x278260u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_278264:
    // 0x278264: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278264u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_278268:
    // 0x278268: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x278268u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_27826c:
    // 0x27826c: 0x0  nop
    ctx->pc = 0x27826cu;
    // NOP
label_278270:
    // 0x278270: 0x8fa30508  lw          $v1, 0x508($sp)
    ctx->pc = 0x278270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_278274:
    // 0x278274: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x278274u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278278:
    // 0x278278: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x278278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27827c:
    // 0x27827c: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_278280:
    if (ctx->pc == 0x278280u) {
        ctx->pc = 0x278280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27827Cu;
        // 0x278280: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278284u;
        goto label_278284;
    }
    ctx->pc = 0x27827Cu;
    {
        const bool branch_taken_0x27827c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27827Cu;
        // 0x278280: 0xac62fff4  sw          $v0, -0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294967284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27827c) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x278284u;
label_278284:
    // 0x278284: 0x46051001  sub.s       $f0, $f2, $f5
    ctx->pc = 0x278284u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
label_278288:
    // 0x278288: 0xc461fff8  lwc1        $f1, -0x8($v1)
    ctx->pc = 0x278288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27828c:
    // 0x27828c: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x27828cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_278290:
    // 0x278290: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278290u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_278294:
    // 0x278294: 0x10000026  b           . + 4 + (0x26 << 2)
label_278298:
    if (ctx->pc == 0x278298u) {
        ctx->pc = 0x278298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278294u;
        // 0x278298: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27829Cu;
        goto label_27829c;
    }
    ctx->pc = 0x278294u;
    {
        const bool branch_taken_0x278294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278294u;
        // 0x278298: 0xe461fff8  swc1        $f1, -0x8($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278294) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x27829Cu;
label_27829c:
    // 0x27829c: 0x46033034  c.lt.s      $f6, $f3
    ctx->pc = 0x27829cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2782a0:
    // 0x2782a0: 0x0  nop
    ctx->pc = 0x2782a0u;
    // NOP
label_2782a4:
    // 0x2782a4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2782a8:
    if (ctx->pc == 0x2782A8u) {
        ctx->pc = 0x2782A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782A4u;
        // 0x2782a8: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782ACu;
        goto label_2782ac;
    }
    ctx->pc = 0x2782A4u;
    {
        const bool branch_taken_0x2782a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2782A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782A4u;
        // 0x2782a8: 0x24c20008  addiu       $v0, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782a4) {
            ctx->pc = 0x2782B4u;
            goto label_2782b4;
        }
    }
    ctx->pc = 0x2782ACu;
label_2782ac:
    // 0x2782ac: 0x10000020  b           . + 4 + (0x20 << 2)
label_2782b0:
    if (ctx->pc == 0x2782B0u) {
        ctx->pc = 0x2782B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782ACu;
        // 0x2782b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782B4u;
        goto label_2782b4;
    }
    ctx->pc = 0x2782ACu;
    {
        const bool branch_taken_0x2782ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2782B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782ACu;
        // 0x2782b0: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782ac) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x2782B4u;
label_2782b4:
    // 0x2782b4: 0x46022834  c.lt.s      $f5, $f2
    ctx->pc = 0x2782b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2782b8:
    // 0x2782b8: 0x0  nop
    ctx->pc = 0x2782b8u;
    // NOP
label_2782bc:
    // 0x2782bc: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_2782c0:
    if (ctx->pc == 0x2782C0u) {
        ctx->pc = 0x2782C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782BCu;
        // 0x2782c0: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782C4u;
        goto label_2782c4;
    }
    ctx->pc = 0x2782BCu;
    {
        const bool branch_taken_0x2782bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2782C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782BCu;
        // 0x2782c0: 0x24a4000c  addiu       $a0, $a1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782bc) {
            ctx->pc = 0x2782CCu;
            goto label_2782cc;
        }
    }
    ctx->pc = 0x2782C4u;
label_2782c4:
    // 0x2782c4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2782c8:
    if (ctx->pc == 0x2782C8u) {
        ctx->pc = 0x2782C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782C4u;
        // 0x2782c8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782CCu;
        goto label_2782cc;
    }
    ctx->pc = 0x2782C4u;
    {
        const bool branch_taken_0x2782c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2782C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782C4u;
        // 0x2782c8: 0xaca60000  sw          $a2, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782c4) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x2782CCu;
label_2782cc:
    // 0x2782cc: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x2782ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_2782d0:
    // 0x2782d0: 0xc480fff8  lwc1        $f0, -0x8($a0)
    ctx->pc = 0x2782d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2782d4:
    // 0x2782d4: 0x24c20008  addiu       $v0, $a2, 0x8
    ctx->pc = 0x2782d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2782d8:
    // 0x2782d8: 0xc4640000  lwc1        $f4, 0x0($v1)
    ctx->pc = 0x2782d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2782dc:
    // 0x2782dc: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x2782dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2782e0:
    // 0x2782e0: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x2782e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2782e4:
    // 0x2782e4: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x2782e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_2782e8:
    // 0x2782e8: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2782e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2782ec:
    // 0x2782ec: 0xafa40508  sw          $a0, 0x508($sp)
    ctx->pc = 0x2782ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1288), GPR_U32(ctx, 4));
label_2782f0:
    // 0x2782f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2782f4:
    if (ctx->pc == 0x2782F4u) {
        ctx->pc = 0x2782F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782F0u;
        // 0x2782f4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2782F8u;
        goto label_2782f8;
    }
    ctx->pc = 0x2782F0u;
    {
        const bool branch_taken_0x2782f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2782F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2782F0u;
        // 0x2782f4: 0xe4810008  swc1        $f1, 0x8($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2782f0) {
            ctx->pc = 0x278308u;
            goto label_278308;
        }
    }
    ctx->pc = 0x2782F8u;
label_2782f8:
    // 0x2782f8: 0x46031001  sub.s       $f0, $f2, $f3
    ctx->pc = 0x2782f8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_2782fc:
    // 0x2782fc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x2782fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_278300:
    // 0x278300: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x278300u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_278304:
    // 0x278304: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x278304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_278308:
    // 0x278308: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x278308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_27830c:
    // 0x27830c: 0x46053034  c.lt.s      $f6, $f5
    ctx->pc = 0x27830cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[6], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278310:
    // 0x278310: 0x0  nop
    ctx->pc = 0x278310u;
    // NOP
label_278314:
    // 0x278314: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_278318:
    if (ctx->pc == 0x278318u) {
        ctx->pc = 0x278318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278314u;
        // 0x278318: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27831Cu;
        goto label_27831c;
    }
    ctx->pc = 0x278314u;
    {
        const bool branch_taken_0x278314 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278314u;
        // 0x278318: 0xac46fff4  sw          $a2, -0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278314) {
            ctx->pc = 0x278330u;
            goto label_278330;
        }
    }
    ctx->pc = 0x27831Cu;
label_27831c:
    // 0x27831c: 0x46053001  sub.s       $f0, $f6, $f5
    ctx->pc = 0x27831cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
label_278320:
    // 0x278320: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x278320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278324:
    // 0x278324: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x278324u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_278328:
    // 0x278328: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x278328u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27832c:
    // 0x27832c: 0xe441fff8  swc1        $f1, -0x8($v0)
    ctx->pc = 0x27832cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), bits); }
label_278330:
    // 0x278330: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x278330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_278334:
    // 0x278334: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x278334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_278338:
    // 0x278338: 0x90640001  lbu         $a0, 0x1($v1)
    ctx->pc = 0x278338u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_27833c:
    // 0x27833c: 0x108dff9c  beq         $a0, $t5, . + 4 + (-0x64 << 2)
label_278340:
    if (ctx->pc == 0x278340u) {
        ctx->pc = 0x278340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27833Cu;
        // 0x278340: 0x8fa50508  lw          $a1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278344u;
        goto label_278344;
    }
    ctx->pc = 0x27833Cu;
    {
        const bool branch_taken_0x27833c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 13));
        ctx->pc = 0x278340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27833Cu;
        // 0x278340: 0x8fa50508  lw          $a1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27833c) {
            ctx->pc = 0x2781B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2781b0;
        }
    }
    ctx->pc = 0x278344u;
label_278344:
    // 0x278344: 0x8fa20508  lw          $v0, 0x508($sp)
    ctx->pc = 0x278344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_278348:
    // 0x278348: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x278348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27834c:
    // 0x27834c: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x27834cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278350:
    // 0x278350: 0xa7a30510  sh          $v1, 0x510($sp)
    ctx->pc = 0x278350u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1296), (uint16_t)GPR_U32(ctx, 3));
label_278354:
    // 0x278354: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x278354u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278358:
    // 0x278358: 0xa7a20512  sh          $v0, 0x512($sp)
    ctx->pc = 0x278358u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 1298), (uint16_t)GPR_U32(ctx, 2));
label_27835c:
    // 0x27835c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x27835cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_278360:
    // 0x278360: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x278360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_278364:
    // 0x278364: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x278364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_278368:
    // 0x278368: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x278368u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27836c:
    // 0x27836c: 0x104000ff  beqz        $v0, . + 4 + (0xFF << 2)
label_278370:
    if (ctx->pc == 0x278370u) {
        ctx->pc = 0x278370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27836Cu;
        // 0x278370: 0x8fa30508  lw          $v1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278374u;
        goto label_278374;
    }
    ctx->pc = 0x27836Cu;
    {
        const bool branch_taken_0x27836c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27836Cu;
        // 0x278370: 0x8fa30508  lw          $v1, 0x508($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27836c) {
            ctx->pc = 0x27876Cu;
            goto label_27876c;
        }
    }
    ctx->pc = 0x278374u;
label_278374:
    // 0x278374: 0xc797801c  lwc1        $f23, -0x7FE4($gp)
    ctx->pc = 0x278374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_278378:
    // 0x278378: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x278378u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27837c:
    // 0x27837c: 0xc7968020  lwc1        $f22, -0x7FE0($gp)
    ctx->pc = 0x27837cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_278380:
    // 0x278380: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x278380u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_278384:
    // 0x278384: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_278388:
    // 0x278388: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_27838c:
    // 0x27838c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x27838cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_278390:
    // 0x278390: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_278394:
    if (ctx->pc == 0x278394u) {
        ctx->pc = 0x278394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278390u;
        // 0x278394: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278398u;
        goto label_278398;
    }
    ctx->pc = 0x278390u;
    {
        const bool branch_taken_0x278390 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278390u;
        // 0x278394: 0x101040  sll         $v0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278390) {
            ctx->pc = 0x2783A4u;
            goto label_2783a4;
        }
    }
    ctx->pc = 0x278398u;
label_278398:
    // 0x278398: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27839c:
    // 0x27839c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2783a0:
    if (ctx->pc == 0x2783A0u) {
        ctx->pc = 0x2783A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27839Cu;
        // 0x2783a0: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2783A4u;
        goto label_2783a4;
    }
    ctx->pc = 0x27839Cu;
    {
        const bool branch_taken_0x27839c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2783A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27839Cu;
        // 0x2783a0: 0x94470000  lhu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27839c) {
            ctx->pc = 0x2783A8u;
            goto label_2783a8;
        }
    }
    ctx->pc = 0x2783A4u;
label_2783a4:
    // 0x2783a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2783a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2783a8:
    // 0x2783a8: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2783a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_2783ac:
    // 0x2783ac: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2783acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2783b0:
    // 0x2783b0: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x2783b0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2783b4:
    // 0x2783b4: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x2783b4u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2783b8:
    // 0x2783b8: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x2783b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2783bc:
    // 0x2783bc: 0x751018  mult        $v0, $v1, $s5
    ctx->pc = 0x2783bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2783c0:
    // 0x2783c0: 0x951818  mult        $v1, $a0, $s5
    ctx->pc = 0x2783c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2783c4:
    // 0x2783c4: 0x533021  addu        $a2, $v0, $s3
    ctx->pc = 0x2783c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2783c8:
    // 0x2783c8: 0x731021  addu        $v0, $v1, $s3
    ctx->pc = 0x2783c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2783cc:
    // 0x2783cc: 0xb51818  mult        $v1, $a1, $s5
    ctx->pc = 0x2783ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2783d0:
    // 0x2783d0: 0x732021  addu        $a0, $v1, $s3
    ctx->pc = 0x2783d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_2783d4:
    // 0x2783d4: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x2783d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_2783d8:
    // 0x2783d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2783d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2783dc:
    // 0x2783dc: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x2783dcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_2783e0:
    // 0x2783e0: 0xe7a70550  swc1        $f7, 0x550($sp)
    ctx->pc = 0x2783e0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1360), bits); }
label_2783e4:
    // 0x2783e4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2783e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2783e8:
    // 0x2783e8: 0xc48a0004  lwc1        $f10, 0x4($a0)
    ctx->pc = 0x2783e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
label_2783ec:
    // 0x2783ec: 0x46005281  sub.s       $f10, $f10, $f0
    ctx->pc = 0x2783ecu;
    ctx->f[10] = FPU_SUB_S(ctx->f[10], ctx->f[0]);
label_2783f0:
    // 0x2783f0: 0xe7aa0554  swc1        $f10, 0x554($sp)
    ctx->pc = 0x2783f0u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1364), bits); }
label_2783f4:
    // 0x2783f4: 0xc4880008  lwc1        $f8, 0x8($a0)
    ctx->pc = 0x2783f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_2783f8:
    // 0x2783f8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2783f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2783fc:
    // 0x2783fc: 0x46004201  sub.s       $f8, $f8, $f0
    ctx->pc = 0x2783fcu;
    ctx->f[8] = FPU_SUB_S(ctx->f[8], ctx->f[0]);
label_278400:
    // 0x278400: 0xe7a80558  swc1        $f8, 0x558($sp)
    ctx->pc = 0x278400u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1368), bits); }
label_278404:
    // 0x278404: 0xc4c50000  lwc1        $f5, 0x0($a2)
    ctx->pc = 0x278404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_278408:
    // 0x278408: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27840c:
    // 0x27840c: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x27840cu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_278410:
    // 0x278410: 0xe7a50560  swc1        $f5, 0x560($sp)
    ctx->pc = 0x278410u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1376), bits); }
label_278414:
    // 0x278414: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278418:
    // 0x278418: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x278418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27841c:
    // 0x27841c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x27841cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_278420:
    // 0x278420: 0xe7a40564  swc1        $f4, 0x564($sp)
    ctx->pc = 0x278420u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1380), bits); }
label_278424:
    // 0x278424: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x278424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278428:
    // 0x278428: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x278428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27842c:
    // 0x27842c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x27842cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_278430:
    // 0x278430: 0xe7a10568  swc1        $f1, 0x568($sp)
    ctx->pc = 0x278430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_278434:
    // 0x278434: 0xc7a60010  lwc1        $f6, 0x10($sp)
    ctx->pc = 0x278434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_278438:
    // 0x278438: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x278438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27843c:
    // 0x27843c: 0x46053242  mul.s       $f9, $f6, $f5
    ctx->pc = 0x27843cu;
    ctx->f[9] = FPU_MUL_S(ctx->f[6], ctx->f[5]);
label_278440:
    // 0x278440: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x278440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278444:
    // 0x278444: 0x46013182  mul.s       $f6, $f6, $f1
    ctx->pc = 0x278444u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_278448:
    // 0x278448: 0x46051142  mul.s       $f5, $f2, $f5
    ctx->pc = 0x278448u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_27844c:
    // 0x27844c: 0x460400c2  mul.s       $f3, $f0, $f4
    ctx->pc = 0x27844cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_278450:
    // 0x278450: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x278450u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_278454:
    // 0x278454: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x278454u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_278458:
    // 0x278458: 0x46091901  sub.s       $f4, $f3, $f9
    ctx->pc = 0x278458u;
    ctx->f[4] = FPU_SUB_S(ctx->f[3], ctx->f[9]);
label_27845c:
    // 0x27845c: 0x46023181  sub.s       $f6, $f6, $f2
    ctx->pc = 0x27845cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_278460:
    // 0x278460: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x278460u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_278464:
    // 0x278464: 0xe7a40588  swc1        $f4, 0x588($sp)
    ctx->pc = 0x278464u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1416), bits); }
label_278468:
    // 0x278468: 0xe7a60580  swc1        $f6, 0x580($sp)
    ctx->pc = 0x278468u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1408), bits); }
label_27846c:
    // 0x27846c: 0xe7a50584  swc1        $f5, 0x584($sp)
    ctx->pc = 0x27846cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1412), bits); }
label_278470:
    // 0x278470: 0x460639c2  mul.s       $f7, $f7, $f6
    ctx->pc = 0x278470u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[6]);
label_278474:
    // 0x278474: 0x46055282  mul.s       $f10, $f10, $f5
    ctx->pc = 0x278474u;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_278478:
    // 0x278478: 0x46044202  mul.s       $f8, $f8, $f4
    ctx->pc = 0x278478u;
    ctx->f[8] = FPU_MUL_S(ctx->f[8], ctx->f[4]);
label_27847c:
    // 0x27847c: 0x460a39c0  add.s       $f7, $f7, $f10
    ctx->pc = 0x27847cu;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[10]);
label_278480:
    // 0x278480: 0x46083a80  add.s       $f10, $f7, $f8
    ctx->pc = 0x278480u;
    ctx->f[10] = FPU_ADD_S(ctx->f[7], ctx->f[8]);
label_278484:
    // 0x278484: 0x460ab834  c.lt.s      $f23, $f10
    ctx->pc = 0x278484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[10])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278488:
    // 0x278488: 0x0  nop
    ctx->pc = 0x278488u;
    // NOP
label_27848c:
    // 0x27848c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_278490:
    if (ctx->pc == 0x278490u) {
        ctx->pc = 0x278490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27848Cu;
        // 0x278490: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278494u;
        goto label_278494;
    }
    ctx->pc = 0x27848Cu;
    {
        const bool branch_taken_0x27848c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x278490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27848Cu;
        // 0x278490: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27848c) {
            ctx->pc = 0x278498u;
            goto label_278498;
        }
    }
    ctx->pc = 0x278494u;
label_278494:
    // 0x278494: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x278494u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278498:
    // 0x278498: 0x106000ab  beqz        $v1, . + 4 + (0xAB << 2)
label_27849c:
    if (ctx->pc == 0x27849Cu) {
        ctx->pc = 0x27849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278498u;
        // 0x27849c: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784A0u;
        goto label_2784a0;
    }
    ctx->pc = 0x278498u;
    {
        const bool branch_taken_0x278498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27849Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278498u;
        // 0x27849c: 0xc7a20000  lwc1        $f2, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278498) {
            ctx->pc = 0x278748u;
            goto label_278748;
        }
    }
    ctx->pc = 0x2784A0u;
label_2784a0:
    // 0x2784a0: 0x46005007  neg.s       $f0, $f10
    ctx->pc = 0x2784a0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[10]);
label_2784a4:
    // 0x2784a4: 0x46160242  mul.s       $f9, $f0, $f22
    ctx->pc = 0x2784a4u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_2784a8:
    // 0x2784a8: 0x460952c1  sub.s       $f11, $f10, $f9
    ctx->pc = 0x2784a8u;
    ctx->f[11] = FPU_SUB_S(ctx->f[10], ctx->f[9]);
label_2784ac:
    // 0x2784ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2784acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2784b0:
    // 0x2784b0: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x2784b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2784b4:
    // 0x2784b4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2784b4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2784b8:
    // 0x2784b8: 0xc7a10008  lwc1        $f1, 0x8($sp)
    ctx->pc = 0x2784b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2784bc:
    // 0x2784bc: 0xe7a20570  swc1        $f2, 0x570($sp)
    ctx->pc = 0x2784bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1392), bits); }
label_2784c0:
    // 0x2784c0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2784c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2784c4:
    // 0x2784c4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x2784c4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_2784c8:
    // 0x2784c8: 0xe7a30574  swc1        $f3, 0x574($sp)
    ctx->pc = 0x2784c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1396), bits); }
label_2784cc:
    // 0x2784cc: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2784ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2784d0:
    // 0x2784d0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2784d0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_2784d4:
    // 0x2784d4: 0xe7a10578  swc1        $f1, 0x578($sp)
    ctx->pc = 0x2784d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1400), bits); }
label_2784d8:
    // 0x2784d8: 0x46061082  mul.s       $f2, $f2, $f6
    ctx->pc = 0x2784d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[6]);
label_2784dc:
    // 0x2784dc: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x2784dcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_2784e0:
    // 0x2784e0: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x2784e0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_2784e4:
    // 0x2784e4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2784e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2784e8:
    // 0x2784e8: 0x46011200  add.s       $f8, $f2, $f1
    ctx->pc = 0x2784e8u;
    ctx->f[8] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_2784ec:
    // 0x2784ec: 0x46084836  c.le.s      $f9, $f8
    ctx->pc = 0x2784ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2784f0:
    // 0x2784f0: 0x0  nop
    ctx->pc = 0x2784f0u;
    // NOP
label_2784f4:
    // 0x2784f4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_2784f8:
    if (ctx->pc == 0x2784F8u) {
        ctx->pc = 0x2784F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784F4u;
        // 0x2784f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2784FCu;
        goto label_2784fc;
    }
    ctx->pc = 0x2784F4u;
    {
        const bool branch_taken_0x2784f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2784F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2784F4u;
        // 0x2784f8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2784f4) {
            ctx->pc = 0x278510u;
            goto label_278510;
        }
    }
    ctx->pc = 0x2784FCu;
label_2784fc:
    // 0x2784fc: 0x460b4036  c.le.s      $f8, $f11
    ctx->pc = 0x2784fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[8], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278500:
    // 0x278500: 0x0  nop
    ctx->pc = 0x278500u;
    // NOP
label_278504:
    // 0x278504: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
label_278508:
    if (ctx->pc == 0x278508u) {
        ctx->pc = 0x278508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278504u;
        // 0x278508: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27850Cu;
        goto label_27850c;
    }
    ctx->pc = 0x278504u;
    {
        const bool branch_taken_0x278504 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278504) {
            ctx->pc = 0x278508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278504u;
            // 0x278508: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278510u;
            goto label_278510;
        }
    }
    ctx->pc = 0x27850Cu;
label_27850c:
    // 0x27850c: 0x0  nop
    ctx->pc = 0x27850cu;
    // NOP
label_278510:
    // 0x278510: 0x1060008d  beqz        $v1, . + 4 + (0x8D << 2)
label_278514:
    if (ctx->pc == 0x278514u) {
        ctx->pc = 0x278514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278510u;
        // 0x278514: 0xc7a30578  lwc1        $f3, 0x578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278518u;
        goto label_278518;
    }
    ctx->pc = 0x278510u;
    {
        const bool branch_taken_0x278510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278510u;
        // 0x278514: 0xc7a30578  lwc1        $f3, 0x578($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278510) {
            ctx->pc = 0x278748u;
            goto label_278748;
        }
    }
    ctx->pc = 0x278518u;
label_278518:
    // 0x278518: 0xc7a40554  lwc1        $f4, 0x554($sp)
    ctx->pc = 0x278518u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_27851c:
    // 0x27851c: 0xc7a20574  lwc1        $f2, 0x574($sp)
    ctx->pc = 0x27851cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278520:
    // 0x278520: 0xc7a50558  lwc1        $f5, 0x558($sp)
    ctx->pc = 0x278520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_278524:
    // 0x278524: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x278524u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_278528:
    // 0x278528: 0xc7a00570  lwc1        $f0, 0x570($sp)
    ctx->pc = 0x278528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27852c:
    // 0x27852c: 0xc7a10550  lwc1        $f1, 0x550($sp)
    ctx->pc = 0x27852cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278530:
    // 0x278530: 0x460511c2  mul.s       $f7, $f2, $f5
    ctx->pc = 0x278530u;
    ctx->f[7] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_278534:
    // 0x278534: 0x46040102  mul.s       $f4, $f0, $f4
    ctx->pc = 0x278534u;
    ctx->f[4] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_278538:
    // 0x278538: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x278538u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27853c:
    // 0x27853c: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x27853cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_278540:
    // 0x278540: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x278540u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_278544:
    // 0x278544: 0x460639c1  sub.s       $f7, $f7, $f6
    ctx->pc = 0x278544u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
label_278548:
    // 0x278548: 0x46022101  sub.s       $f4, $f4, $f2
    ctx->pc = 0x278548u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
label_27854c:
    // 0x27854c: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x27854cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_278550:
    // 0x278550: 0xe7a70590  swc1        $f7, 0x590($sp)
    ctx->pc = 0x278550u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1424), bits); }
label_278554:
    // 0x278554: 0xe7a40598  swc1        $f4, 0x598($sp)
    ctx->pc = 0x278554u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1432), bits); }
label_278558:
    // 0x278558: 0xe7a30594  swc1        $f3, 0x594($sp)
    ctx->pc = 0x278558u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1428), bits); }
label_27855c:
    // 0x27855c: 0xc7a2000c  lwc1        $f2, 0xC($sp)
    ctx->pc = 0x27855cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278560:
    // 0x278560: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x278560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278564:
    // 0x278564: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x278564u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_278568:
    // 0x278568: 0xc7a00014  lwc1        $f0, 0x14($sp)
    ctx->pc = 0x278568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27856c:
    // 0x27856c: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x27856cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_278570:
    // 0x278570: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x278570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_278574:
    // 0x278574: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x278574u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_278578:
    // 0x278578: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x278578u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_27857c:
    // 0x27857c: 0x46004836  c.le.s      $f9, $f0
    ctx->pc = 0x27857cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278580:
    // 0x278580: 0x0  nop
    ctx->pc = 0x278580u;
    // NOP
label_278584:
    // 0x278584: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_278588:
    if (ctx->pc == 0x278588u) {
        ctx->pc = 0x278588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278584u;
        // 0x278588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27858Cu;
        goto label_27858c;
    }
    ctx->pc = 0x278584u;
    {
        const bool branch_taken_0x278584 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278584u;
        // 0x278588: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278584) {
            ctx->pc = 0x2785A0u;
            goto label_2785a0;
        }
    }
    ctx->pc = 0x27858Cu;
label_27858c:
    // 0x27858c: 0x46004000  add.s       $f0, $f8, $f0
    ctx->pc = 0x27858cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[8], ctx->f[0]);
label_278590:
    // 0x278590: 0x460b0036  c.le.s      $f0, $f11
    ctx->pc = 0x278590u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278594:
    // 0x278594: 0x0  nop
    ctx->pc = 0x278594u;
    // NOP
label_278598:
    // 0x278598: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_27859c:
    if (ctx->pc == 0x27859Cu) {
        ctx->pc = 0x27859Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278598u;
        // 0x27859c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785A0u;
        goto label_2785a0;
    }
    ctx->pc = 0x278598u;
    {
        const bool branch_taken_0x278598 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278598) {
            ctx->pc = 0x27859Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278598u;
            // 0x27859c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785A0u;
            goto label_2785a0;
        }
    }
    ctx->pc = 0x2785A0u;
label_2785a0:
    // 0x2785a0: 0x10600069  beqz        $v1, . + 4 + (0x69 << 2)
label_2785a4:
    if (ctx->pc == 0x2785A4u) {
        ctx->pc = 0x2785A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785A0u;
        // 0x2785a4: 0xc7a00590  lwc1        $f0, 0x590($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785A8u;
        goto label_2785a8;
    }
    ctx->pc = 0x2785A0u;
    {
        const bool branch_taken_0x2785a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2785A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785A0u;
        // 0x2785a4: 0xc7a00590  lwc1        $f0, 0x590($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785a0) {
            ctx->pc = 0x278748u;
            goto label_278748;
        }
    }
    ctx->pc = 0x2785A8u;
label_2785a8:
    // 0x2785a8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2785a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2785ac:
    // 0x2785ac: 0xc7a30560  lwc1        $f3, 0x560($sp)
    ctx->pc = 0x2785acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2785b0:
    // 0x2785b0: 0xc7a20564  lwc1        $f2, 0x564($sp)
    ctx->pc = 0x2785b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2785b4:
    // 0x2785b4: 0xc7a40594  lwc1        $f4, 0x594($sp)
    ctx->pc = 0x2785b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2785b8:
    // 0x2785b8: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2785b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2785bc:
    // 0x2785bc: 0xc7a10568  lwc1        $f1, 0x568($sp)
    ctx->pc = 0x2785bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2785c0:
    // 0x2785c0: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2785c0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2785c4:
    // 0x2785c4: 0xc7a00598  lwc1        $f0, 0x598($sp)
    ctx->pc = 0x2785c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2785c8:
    // 0x2785c8: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2785c8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2785cc:
    // 0x2785cc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2785ccu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2785d0:
    // 0x2785d0: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x2785d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2785d4:
    // 0x2785d4: 0x46034836  c.le.s      $f9, $f3
    ctx->pc = 0x2785d4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[9], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2785d8:
    // 0x2785d8: 0x0  nop
    ctx->pc = 0x2785d8u;
    // NOP
label_2785dc:
    // 0x2785dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2785e0:
    if (ctx->pc == 0x2785E0u) {
        ctx->pc = 0x2785E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785DCu;
        // 0x2785e0: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785E4u;
        goto label_2785e4;
    }
    ctx->pc = 0x2785DCu;
    {
        const bool branch_taken_0x2785dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2785E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785DCu;
        // 0x2785e0: 0x46001b06  mov.s       $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2785dc) {
            ctx->pc = 0x2785F4u;
            goto label_2785f4;
        }
    }
    ctx->pc = 0x2785E4u;
label_2785e4:
    // 0x2785e4: 0x460b1836  c.le.s      $f3, $f11
    ctx->pc = 0x2785e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[11])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2785e8:
    // 0x2785e8: 0x0  nop
    ctx->pc = 0x2785e8u;
    // NOP
label_2785ec:
    // 0x2785ec: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2785f0:
    if (ctx->pc == 0x2785F0u) {
        ctx->pc = 0x2785F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785ECu;
        // 0x2785f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785F4u;
        goto label_2785f4;
    }
    ctx->pc = 0x2785ECu;
    {
        const bool branch_taken_0x2785ec = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2785ec) {
            ctx->pc = 0x2785F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2785ECu;
            // 0x2785f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2785F4u;
            goto label_2785f4;
        }
    }
    ctx->pc = 0x2785F4u;
label_2785f4:
    // 0x2785f4: 0x50600055  beql        $v1, $zero, . + 4 + (0x55 << 2)
label_2785f8:
    if (ctx->pc == 0x2785F8u) {
        ctx->pc = 0x2785F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2785F4u;
        // 0x2785f8: 0x97a20510  lhu         $v0, 0x510($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2785FCu;
        goto label_2785fc;
    }
    ctx->pc = 0x2785F4u;
    {
        const bool branch_taken_0x2785f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2785f4) {
            ctx->pc = 0x2785F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2785F4u;
            // 0x2785f8: 0x97a20510  lhu         $v0, 0x510($sp) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27874Cu;
            goto label_27874c;
        }
    }
    ctx->pc = 0x2785FCu;
label_2785fc:
    // 0x2785fc: 0x460a6303  div.s       $f12, $f12, $f10
    ctx->pc = 0x2785fcu;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[10]);
label_278600:
    // 0x278600: 0x68450007  ldl         $a1, 0x7($v0)
    ctx->pc = 0x278600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_278604:
    // 0x278604: 0x6c450000  ldr         $a1, 0x0($v0)
    ctx->pc = 0x278604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_278608:
    // 0x278608: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x278608u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_27860c:
    // 0x27860c: 0xb3a50533  sdl         $a1, 0x533($sp)
    ctx->pc = 0x27860cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278610:
    // 0x278610: 0xb7a5052c  sdr         $a1, 0x52C($sp)
    ctx->pc = 0x278610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 1324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278614:
    // 0x278614: 0xafa80534  sw          $t0, 0x534($sp)
    ctx->pc = 0x278614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1332), GPR_U32(ctx, 8));
label_278618:
    // 0x278618: 0xafa70538  sw          $a3, 0x538($sp)
    ctx->pc = 0x278618u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1336), GPR_U32(ctx, 7));
label_27861c:
    // 0x27861c: 0xafa2053c  sw          $v0, 0x53C($sp)
    ctx->pc = 0x27861cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1340), GPR_U32(ctx, 2));
label_278620:
    // 0x278620: 0xafa40540  sw          $a0, 0x540($sp)
    ctx->pc = 0x278620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1344), GPR_U32(ctx, 4));
label_278624:
    // 0x278624: 0xafa60544  sw          $a2, 0x544($sp)
    ctx->pc = 0x278624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1348), GPR_U32(ctx, 6));
label_278628:
    // 0x278628: 0xc4870000  lwc1        $f7, 0x0($a0)
    ctx->pc = 0x278628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_27862c:
    // 0x27862c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278630:
    // 0x278630: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x278630u;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_278634:
    // 0x278634: 0xe7a705a0  swc1        $f7, 0x5A0($sp)
    ctx->pc = 0x278634u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1440), bits); }
label_278638:
    // 0x278638: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27863c:
    // 0x27863c: 0xc4860004  lwc1        $f6, 0x4($a0)
    ctx->pc = 0x27863cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_278640:
    // 0x278640: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x278640u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_278644:
    // 0x278644: 0xe7a605a4  swc1        $f6, 0x5A4($sp)
    ctx->pc = 0x278644u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1444), bits); }
label_278648:
    // 0x278648: 0xc4850008  lwc1        $f5, 0x8($a0)
    ctx->pc = 0x278648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_27864c:
    // 0x27864c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27864cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278650:
    // 0x278650: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x278650u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_278654:
    // 0x278654: 0xe7a505a8  swc1        $f5, 0x5A8($sp)
    ctx->pc = 0x278654u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1448), bits); }
label_278658:
    // 0x278658: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x278658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27865c:
    // 0x27865c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x27865cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278660:
    // 0x278660: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x278660u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_278664:
    // 0x278664: 0xe7a205b0  swc1        $f2, 0x5B0($sp)
    ctx->pc = 0x278664u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1456), bits); }
label_278668:
    // 0x278668: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x278668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27866c:
    // 0x27866c: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x27866cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278670:
    // 0x278670: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x278670u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_278674:
    // 0x278674: 0xe7a405b4  swc1        $f4, 0x5B4($sp)
    ctx->pc = 0x278674u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1460), bits); }
label_278678:
    // 0x278678: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x278678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27867c:
    // 0x27867c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x27867cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278680:
    // 0x278680: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x278680u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_278684:
    // 0x278684: 0xe7a105b8  swc1        $f1, 0x5B8($sp)
    ctx->pc = 0x278684u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1464), bits); }
label_278688:
    // 0x278688: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x278688u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_27868c:
    // 0x27868c: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x27868cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_278690:
    // 0x278690: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x278690u;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_278694:
    // 0x278694: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x278694u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_278698:
    // 0x278698: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x278698u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_27869c:
    // 0x27869c: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x27869cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_2786a0:
    // 0x2786a0: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x2786a0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_2786a4:
    // 0x2786a4: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x2786a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_2786a8:
    // 0x2786a8: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x2786a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_2786ac:
    // 0x2786ac: 0xe7a30528  swc1        $f3, 0x528($sp)
    ctx->pc = 0x2786acu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_2786b0:
    // 0x2786b0: 0xe7a20524  swc1        $f2, 0x524($sp)
    ctx->pc = 0x2786b0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_2786b4:
    // 0x2786b4: 0xe7a00520  swc1        $f0, 0x520($sp)
    ctx->pc = 0x2786b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_2786b8:
    // 0x2786b8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2786b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_2786bc:
    // 0x2786bc: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x2786bcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_2786c0:
    // 0x2786c0: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x2786c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_2786c4:
    // 0x2786c4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2786c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_2786c8:
    // 0x2786c8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2786c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2786cc:
    // 0x2786cc: 0x46000004  c1          0x4
    ctx->pc = 0x2786ccu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_2786d0:
    // 0x2786d0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2786d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2786d4:
    // 0x2786d4: 0x0  nop
    ctx->pc = 0x2786d4u;
    // NOP
label_2786d8:
    // 0x2786d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2786dc:
    if (ctx->pc == 0x2786DCu) {
        ctx->pc = 0x2786DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786D8u;
        // 0x2786dc: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786E0u;
        goto label_2786e0;
    }
    ctx->pc = 0x2786D8u;
    {
        const bool branch_taken_0x2786d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2786DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786D8u;
        // 0x2786dc: 0x46000146  mov.s       $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786d8) {
            ctx->pc = 0x2786F0u;
            goto label_2786f0;
        }
    }
    ctx->pc = 0x2786E0u;
label_2786e0:
    // 0x2786e0: 0x4600a143  div.s       $f5, $f20, $f0
    ctx->pc = 0x2786e0u;
    ctx->f[5] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_2786e4:
    // 0x2786e4: 0x10000004  b           . + 4 + (0x4 << 2)
label_2786e8:
    if (ctx->pc == 0x2786E8u) {
        ctx->pc = 0x2786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E4u;
        // 0x2786e8: 0xc7a00520  lwc1        $f0, 0x520($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2786ECu;
        goto label_2786ec;
    }
    ctx->pc = 0x2786E4u;
    {
        const bool branch_taken_0x2786e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2786E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2786E4u;
        // 0x2786e8: 0xc7a00520  lwc1        $f0, 0x520($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2786e4) {
            ctx->pc = 0x2786F8u;
            goto label_2786f8;
        }
    }
    ctx->pc = 0x2786ECu;
label_2786ec:
    // 0x2786ec: 0x0  nop
    ctx->pc = 0x2786ecu;
    // NOP
label_2786f0:
    // 0x2786f0: 0xc7a00520  lwc1        $f0, 0x520($sp)
    ctx->pc = 0x2786f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2786f4:
    // 0x2786f4: 0x0  nop
    ctx->pc = 0x2786f4u;
    // NOP
label_2786f8:
    // 0x2786f8: 0xc7a10524  lwc1        $f1, 0x524($sp)
    ctx->pc = 0x2786f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2786fc:
    // 0x2786fc: 0xc7a20528  lwc1        $f2, 0x528($sp)
    ctx->pc = 0x2786fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278700:
    // 0x278700: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x278700u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_278704:
    // 0x278704: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x278704u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_278708:
    // 0x278708: 0x46051082  mul.s       $f2, $f2, $f5
    ctx->pc = 0x278708u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
label_27870c:
    // 0x27870c: 0xe7a00520  swc1        $f0, 0x520($sp)
    ctx->pc = 0x27870cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_278710:
    // 0x278710: 0xe7a10524  swc1        $f1, 0x524($sp)
    ctx->pc = 0x278710u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1316), bits); }
label_278714:
    // 0x278714: 0xe7a20528  swc1        $f2, 0x528($sp)
    ctx->pc = 0x278714u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_278718:
    // 0x278718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x278718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27871c:
    // 0x27871c: 0x320382d  daddu       $a3, $t9, $zero
    ctx->pc = 0x27871cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_278720:
    // 0x278720: 0x7fae05d0  sq          $t6, 0x5D0($sp)
    ctx->pc = 0x278720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1488), GPR_VEC(ctx, 14));
label_278724:
    // 0x278724: 0x7faf05e0  sq          $t7, 0x5E0($sp)
    ctx->pc = 0x278724u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1504), GPR_VEC(ctx, 15));
label_278728:
    // 0x278728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x278728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27872c:
    // 0x27872c: 0x7fb905f0  sq          $t9, 0x5F0($sp)
    ctx->pc = 0x27872cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1520), GPR_VEC(ctx, 25));
label_278730:
    // 0x278730: 0x1e0f809  jalr        $t7
label_278734:
    if (ctx->pc == 0x278734u) {
        ctx->pc = 0x278734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278730u;
        // 0x278734: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278738u;
        goto label_278738;
    }
    ctx->pc = 0x278730u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 15);
        SET_GPR_U32(ctx, 31, 0x278738u);
        ctx->pc = 0x278734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278730u;
        // 0x278734: 0x27a60520  addiu       $a2, $sp, 0x520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1312));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278730u, 0x278738u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278738u;
label_278738:
    // 0x278738: 0x7bae05d0  lq          $t6, 0x5D0($sp)
    ctx->pc = 0x278738u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 1488)));
label_27873c:
    // 0x27873c: 0x7baf05e0  lq          $t7, 0x5E0($sp)
    ctx->pc = 0x27873cu;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 29), 1504)));
label_278740:
    // 0x278740: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_278744:
    if (ctx->pc == 0x278744u) {
        ctx->pc = 0x278744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278740u;
        // 0x278744: 0x7bb905f0  lq          $t9, 0x5F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278748u;
        goto label_278748;
    }
    ctx->pc = 0x278740u;
    {
        const bool branch_taken_0x278740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278740u;
        // 0x278744: 0x7bb905f0  lq          $t9, 0x5F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278740) {
            ctx->pc = 0x27878Cu;
            goto label_27878c;
        }
    }
    ctx->pc = 0x278748u;
label_278748:
    // 0x278748: 0x97a20510  lhu         $v0, 0x510($sp)
    ctx->pc = 0x278748u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1296)));
label_27874c:
    // 0x27874c: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x27874cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_278750:
    // 0x278750: 0x97a40512  lhu         $a0, 0x512($sp)
    ctx->pc = 0x278750u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 1298)));
label_278754:
    // 0x278754: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x278754u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_278758:
    // 0x278758: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x278758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_27875c:
    // 0x27875c: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x27875cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_278760:
    // 0x278760: 0x5440ff0b  bnel        $v0, $zero, . + 4 + (-0xF5 << 2)
label_278764:
    if (ctx->pc == 0x278764u) {
        ctx->pc = 0x278764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278760u;
        // 0x278764: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278768u;
        goto label_278768;
    }
    ctx->pc = 0x278760u;
    {
        const bool branch_taken_0x278760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278760) {
            ctx->pc = 0x278764u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278760u;
            // 0x278764: 0x8e430024  lw          $v1, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278390;
        }
    }
    ctx->pc = 0x278768u;
label_278768:
    // 0x278768: 0x8fa30508  lw          $v1, 0x508($sp)
    ctx->pc = 0x278768u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1288)));
label_27876c:
    // 0x27876c: 0x3c3102b  sltu        $v0, $fp, $v1
    ctx->pc = 0x27876cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278770:
    // 0x278770: 0x1440fe7f  bnez        $v0, . + 4 + (-0x181 << 2)
label_278774:
    if (ctx->pc == 0x278774u) {
        ctx->pc = 0x278774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278770u;
        // 0x278774: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278778u;
        goto label_278778;
    }
    ctx->pc = 0x278770u;
    {
        const bool branch_taken_0x278770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278770u;
        // 0x278774: 0x2462fff4  addiu       $v0, $v1, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278770) {
            ctx->pc = 0x278170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278170;
        }
    }
    ctx->pc = 0x278778u;
label_278778:
    // 0x278778: 0x8fa3033c  lw          $v1, 0x33C($sp)
    ctx->pc = 0x278778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 828)));
label_27877c:
    // 0x27877c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x27877cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_278780:
    // 0x278780: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x278780u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278784:
    // 0x278784: 0x5440fde0  bnel        $v0, $zero, . + 4 + (-0x220 << 2)
label_278788:
    if (ctx->pc == 0x278788u) {
        ctx->pc = 0x278788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278784u;
        // 0x278788: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27878Cu;
        goto label_27878c;
    }
    ctx->pc = 0x278784u;
    {
        const bool branch_taken_0x278784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278784) {
            ctx->pc = 0x278788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278784u;
            // 0x278788: 0x8c62fff4  lw          $v0, -0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x277F08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277f08;
        }
    }
    ctx->pc = 0x27878Cu;
label_27878c:
    // 0x27878c: 0x7bb00690  lq          $s0, 0x690($sp)
    ctx->pc = 0x27878cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1680)));
label_278790:
    // 0x278790: 0x7bb10680  lq          $s1, 0x680($sp)
    ctx->pc = 0x278790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1664)));
label_278794:
    // 0x278794: 0x7bb20670  lq          $s2, 0x670($sp)
    ctx->pc = 0x278794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1648)));
label_278798:
    // 0x278798: 0x7bb30660  lq          $s3, 0x660($sp)
    ctx->pc = 0x278798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1632)));
label_27879c:
    // 0x27879c: 0x7bb40650  lq          $s4, 0x650($sp)
    ctx->pc = 0x27879cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1616)));
label_2787a0:
    // 0x2787a0: 0x7bb50640  lq          $s5, 0x640($sp)
    ctx->pc = 0x2787a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1600)));
label_2787a4:
    // 0x2787a4: 0x7bb60630  lq          $s6, 0x630($sp)
    ctx->pc = 0x2787a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1584)));
label_2787a8:
    // 0x2787a8: 0x7bb70620  lq          $s7, 0x620($sp)
    ctx->pc = 0x2787a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1568)));
label_2787ac:
    // 0x2787ac: 0x7bbe0610  lq          $fp, 0x610($sp)
    ctx->pc = 0x2787acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1552)));
label_2787b0:
    // 0x2787b0: 0xdfbf0600  ld          $ra, 0x600($sp)
    ctx->pc = 0x2787b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_2787b4:
    // 0x2787b4: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x2787b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2787b8:
    // 0x2787b8: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x2787b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2787bc:
    // 0x2787bc: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x2787bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2787c0:
    // 0x2787c0: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x2787c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2787c4:
    // 0x2787c4: 0x3e00008  jr          $ra
label_2787c8:
    if (ctx->pc == 0x2787C8u) {
        ctx->pc = 0x2787C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C4u;
        // 0x2787c8: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2787CCu;
        goto label_2787cc;
    }
    ctx->pc = 0x2787C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2787C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2787C4u;
        // 0x2787c8: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2787C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2787CCu;
label_2787cc:
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
    ctx->pc = 0x2787d0u;
}
