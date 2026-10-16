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

// Function: sub_00322C98
// Address: 0x322c98 - 0x3239b0
void sub_00322C98_0x322c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00322C98_0x322c98");
#endif

    switch (ctx->pc) {
        case 0x322c98u: goto label_322c98;
        case 0x322c9cu: goto label_322c9c;
        case 0x322ca0u: goto label_322ca0;
        case 0x322ca4u: goto label_322ca4;
        case 0x322ca8u: goto label_322ca8;
        case 0x322cacu: goto label_322cac;
        case 0x322cb0u: goto label_322cb0;
        case 0x322cb4u: goto label_322cb4;
        case 0x322cb8u: goto label_322cb8;
        case 0x322cbcu: goto label_322cbc;
        case 0x322cc0u: goto label_322cc0;
        case 0x322cc4u: goto label_322cc4;
        case 0x322cc8u: goto label_322cc8;
        case 0x322cccu: goto label_322ccc;
        case 0x322cd0u: goto label_322cd0;
        case 0x322cd4u: goto label_322cd4;
        case 0x322cd8u: goto label_322cd8;
        case 0x322cdcu: goto label_322cdc;
        case 0x322ce0u: goto label_322ce0;
        case 0x322ce4u: goto label_322ce4;
        case 0x322ce8u: goto label_322ce8;
        case 0x322cecu: goto label_322cec;
        case 0x322cf0u: goto label_322cf0;
        case 0x322cf4u: goto label_322cf4;
        case 0x322cf8u: goto label_322cf8;
        case 0x322cfcu: goto label_322cfc;
        case 0x322d00u: goto label_322d00;
        case 0x322d04u: goto label_322d04;
        case 0x322d08u: goto label_322d08;
        case 0x322d0cu: goto label_322d0c;
        case 0x322d10u: goto label_322d10;
        case 0x322d14u: goto label_322d14;
        case 0x322d18u: goto label_322d18;
        case 0x322d1cu: goto label_322d1c;
        case 0x322d20u: goto label_322d20;
        case 0x322d24u: goto label_322d24;
        case 0x322d28u: goto label_322d28;
        case 0x322d2cu: goto label_322d2c;
        case 0x322d30u: goto label_322d30;
        case 0x322d34u: goto label_322d34;
        case 0x322d38u: goto label_322d38;
        case 0x322d3cu: goto label_322d3c;
        case 0x322d40u: goto label_322d40;
        case 0x322d44u: goto label_322d44;
        case 0x322d48u: goto label_322d48;
        case 0x322d4cu: goto label_322d4c;
        case 0x322d50u: goto label_322d50;
        case 0x322d54u: goto label_322d54;
        case 0x322d58u: goto label_322d58;
        case 0x322d5cu: goto label_322d5c;
        case 0x322d60u: goto label_322d60;
        case 0x322d64u: goto label_322d64;
        case 0x322d68u: goto label_322d68;
        case 0x322d6cu: goto label_322d6c;
        case 0x322d70u: goto label_322d70;
        case 0x322d74u: goto label_322d74;
        case 0x322d78u: goto label_322d78;
        case 0x322d7cu: goto label_322d7c;
        case 0x322d80u: goto label_322d80;
        case 0x322d84u: goto label_322d84;
        case 0x322d88u: goto label_322d88;
        case 0x322d8cu: goto label_322d8c;
        case 0x322d90u: goto label_322d90;
        case 0x322d94u: goto label_322d94;
        case 0x322d98u: goto label_322d98;
        case 0x322d9cu: goto label_322d9c;
        case 0x322da0u: goto label_322da0;
        case 0x322da4u: goto label_322da4;
        case 0x322da8u: goto label_322da8;
        case 0x322dacu: goto label_322dac;
        case 0x322db0u: goto label_322db0;
        case 0x322db4u: goto label_322db4;
        case 0x322db8u: goto label_322db8;
        case 0x322dbcu: goto label_322dbc;
        case 0x322dc0u: goto label_322dc0;
        case 0x322dc4u: goto label_322dc4;
        case 0x322dc8u: goto label_322dc8;
        case 0x322dccu: goto label_322dcc;
        case 0x322dd0u: goto label_322dd0;
        case 0x322dd4u: goto label_322dd4;
        case 0x322dd8u: goto label_322dd8;
        case 0x322ddcu: goto label_322ddc;
        case 0x322de0u: goto label_322de0;
        case 0x322de4u: goto label_322de4;
        case 0x322de8u: goto label_322de8;
        case 0x322decu: goto label_322dec;
        case 0x322df0u: goto label_322df0;
        case 0x322df4u: goto label_322df4;
        case 0x322df8u: goto label_322df8;
        case 0x322dfcu: goto label_322dfc;
        case 0x322e00u: goto label_322e00;
        case 0x322e04u: goto label_322e04;
        case 0x322e08u: goto label_322e08;
        case 0x322e0cu: goto label_322e0c;
        case 0x322e10u: goto label_322e10;
        case 0x322e14u: goto label_322e14;
        case 0x322e18u: goto label_322e18;
        case 0x322e1cu: goto label_322e1c;
        case 0x322e20u: goto label_322e20;
        case 0x322e24u: goto label_322e24;
        case 0x322e28u: goto label_322e28;
        case 0x322e2cu: goto label_322e2c;
        case 0x322e30u: goto label_322e30;
        case 0x322e34u: goto label_322e34;
        case 0x322e38u: goto label_322e38;
        case 0x322e3cu: goto label_322e3c;
        case 0x322e40u: goto label_322e40;
        case 0x322e44u: goto label_322e44;
        case 0x322e48u: goto label_322e48;
        case 0x322e4cu: goto label_322e4c;
        case 0x322e50u: goto label_322e50;
        case 0x322e54u: goto label_322e54;
        case 0x322e58u: goto label_322e58;
        case 0x322e5cu: goto label_322e5c;
        case 0x322e60u: goto label_322e60;
        case 0x322e64u: goto label_322e64;
        case 0x322e68u: goto label_322e68;
        case 0x322e6cu: goto label_322e6c;
        case 0x322e70u: goto label_322e70;
        case 0x322e74u: goto label_322e74;
        case 0x322e78u: goto label_322e78;
        case 0x322e7cu: goto label_322e7c;
        case 0x322e80u: goto label_322e80;
        case 0x322e84u: goto label_322e84;
        case 0x322e88u: goto label_322e88;
        case 0x322e8cu: goto label_322e8c;
        case 0x322e90u: goto label_322e90;
        case 0x322e94u: goto label_322e94;
        case 0x322e98u: goto label_322e98;
        case 0x322e9cu: goto label_322e9c;
        case 0x322ea0u: goto label_322ea0;
        case 0x322ea4u: goto label_322ea4;
        case 0x322ea8u: goto label_322ea8;
        case 0x322eacu: goto label_322eac;
        case 0x322eb0u: goto label_322eb0;
        case 0x322eb4u: goto label_322eb4;
        case 0x322eb8u: goto label_322eb8;
        case 0x322ebcu: goto label_322ebc;
        case 0x322ec0u: goto label_322ec0;
        case 0x322ec4u: goto label_322ec4;
        case 0x322ec8u: goto label_322ec8;
        case 0x322eccu: goto label_322ecc;
        case 0x322ed0u: goto label_322ed0;
        case 0x322ed4u: goto label_322ed4;
        case 0x322ed8u: goto label_322ed8;
        case 0x322edcu: goto label_322edc;
        case 0x322ee0u: goto label_322ee0;
        case 0x322ee4u: goto label_322ee4;
        case 0x322ee8u: goto label_322ee8;
        case 0x322eecu: goto label_322eec;
        case 0x322ef0u: goto label_322ef0;
        case 0x322ef4u: goto label_322ef4;
        case 0x322ef8u: goto label_322ef8;
        case 0x322efcu: goto label_322efc;
        case 0x322f00u: goto label_322f00;
        case 0x322f04u: goto label_322f04;
        case 0x322f08u: goto label_322f08;
        case 0x322f0cu: goto label_322f0c;
        case 0x322f10u: goto label_322f10;
        case 0x322f14u: goto label_322f14;
        case 0x322f18u: goto label_322f18;
        case 0x322f1cu: goto label_322f1c;
        case 0x322f20u: goto label_322f20;
        case 0x322f24u: goto label_322f24;
        case 0x322f28u: goto label_322f28;
        case 0x322f2cu: goto label_322f2c;
        case 0x322f30u: goto label_322f30;
        case 0x322f34u: goto label_322f34;
        case 0x322f38u: goto label_322f38;
        case 0x322f3cu: goto label_322f3c;
        case 0x322f40u: goto label_322f40;
        case 0x322f44u: goto label_322f44;
        case 0x322f48u: goto label_322f48;
        case 0x322f4cu: goto label_322f4c;
        case 0x322f50u: goto label_322f50;
        case 0x322f54u: goto label_322f54;
        case 0x322f58u: goto label_322f58;
        case 0x322f5cu: goto label_322f5c;
        case 0x322f60u: goto label_322f60;
        case 0x322f64u: goto label_322f64;
        case 0x322f68u: goto label_322f68;
        case 0x322f6cu: goto label_322f6c;
        case 0x322f70u: goto label_322f70;
        case 0x322f74u: goto label_322f74;
        case 0x322f78u: goto label_322f78;
        case 0x322f7cu: goto label_322f7c;
        case 0x322f80u: goto label_322f80;
        case 0x322f84u: goto label_322f84;
        case 0x322f88u: goto label_322f88;
        case 0x322f8cu: goto label_322f8c;
        case 0x322f90u: goto label_322f90;
        case 0x322f94u: goto label_322f94;
        case 0x322f98u: goto label_322f98;
        case 0x322f9cu: goto label_322f9c;
        case 0x322fa0u: goto label_322fa0;
        case 0x322fa4u: goto label_322fa4;
        case 0x322fa8u: goto label_322fa8;
        case 0x322facu: goto label_322fac;
        case 0x322fb0u: goto label_322fb0;
        case 0x322fb4u: goto label_322fb4;
        case 0x322fb8u: goto label_322fb8;
        case 0x322fbcu: goto label_322fbc;
        case 0x322fc0u: goto label_322fc0;
        case 0x322fc4u: goto label_322fc4;
        case 0x322fc8u: goto label_322fc8;
        case 0x322fccu: goto label_322fcc;
        case 0x322fd0u: goto label_322fd0;
        case 0x322fd4u: goto label_322fd4;
        case 0x322fd8u: goto label_322fd8;
        case 0x322fdcu: goto label_322fdc;
        case 0x322fe0u: goto label_322fe0;
        case 0x322fe4u: goto label_322fe4;
        case 0x322fe8u: goto label_322fe8;
        case 0x322fecu: goto label_322fec;
        case 0x322ff0u: goto label_322ff0;
        case 0x322ff4u: goto label_322ff4;
        case 0x322ff8u: goto label_322ff8;
        case 0x322ffcu: goto label_322ffc;
        case 0x323000u: goto label_323000;
        case 0x323004u: goto label_323004;
        case 0x323008u: goto label_323008;
        case 0x32300cu: goto label_32300c;
        case 0x323010u: goto label_323010;
        case 0x323014u: goto label_323014;
        case 0x323018u: goto label_323018;
        case 0x32301cu: goto label_32301c;
        case 0x323020u: goto label_323020;
        case 0x323024u: goto label_323024;
        case 0x323028u: goto label_323028;
        case 0x32302cu: goto label_32302c;
        case 0x323030u: goto label_323030;
        case 0x323034u: goto label_323034;
        case 0x323038u: goto label_323038;
        case 0x32303cu: goto label_32303c;
        case 0x323040u: goto label_323040;
        case 0x323044u: goto label_323044;
        case 0x323048u: goto label_323048;
        case 0x32304cu: goto label_32304c;
        case 0x323050u: goto label_323050;
        case 0x323054u: goto label_323054;
        case 0x323058u: goto label_323058;
        case 0x32305cu: goto label_32305c;
        case 0x323060u: goto label_323060;
        case 0x323064u: goto label_323064;
        case 0x323068u: goto label_323068;
        case 0x32306cu: goto label_32306c;
        case 0x323070u: goto label_323070;
        case 0x323074u: goto label_323074;
        case 0x323078u: goto label_323078;
        case 0x32307cu: goto label_32307c;
        case 0x323080u: goto label_323080;
        case 0x323084u: goto label_323084;
        case 0x323088u: goto label_323088;
        case 0x32308cu: goto label_32308c;
        case 0x323090u: goto label_323090;
        case 0x323094u: goto label_323094;
        case 0x323098u: goto label_323098;
        case 0x32309cu: goto label_32309c;
        case 0x3230a0u: goto label_3230a0;
        case 0x3230a4u: goto label_3230a4;
        case 0x3230a8u: goto label_3230a8;
        case 0x3230acu: goto label_3230ac;
        case 0x3230b0u: goto label_3230b0;
        case 0x3230b4u: goto label_3230b4;
        case 0x3230b8u: goto label_3230b8;
        case 0x3230bcu: goto label_3230bc;
        case 0x3230c0u: goto label_3230c0;
        case 0x3230c4u: goto label_3230c4;
        case 0x3230c8u: goto label_3230c8;
        case 0x3230ccu: goto label_3230cc;
        case 0x3230d0u: goto label_3230d0;
        case 0x3230d4u: goto label_3230d4;
        case 0x3230d8u: goto label_3230d8;
        case 0x3230dcu: goto label_3230dc;
        case 0x3230e0u: goto label_3230e0;
        case 0x3230e4u: goto label_3230e4;
        case 0x3230e8u: goto label_3230e8;
        case 0x3230ecu: goto label_3230ec;
        case 0x3230f0u: goto label_3230f0;
        case 0x3230f4u: goto label_3230f4;
        case 0x3230f8u: goto label_3230f8;
        case 0x3230fcu: goto label_3230fc;
        case 0x323100u: goto label_323100;
        case 0x323104u: goto label_323104;
        case 0x323108u: goto label_323108;
        case 0x32310cu: goto label_32310c;
        case 0x323110u: goto label_323110;
        case 0x323114u: goto label_323114;
        case 0x323118u: goto label_323118;
        case 0x32311cu: goto label_32311c;
        case 0x323120u: goto label_323120;
        case 0x323124u: goto label_323124;
        case 0x323128u: goto label_323128;
        case 0x32312cu: goto label_32312c;
        case 0x323130u: goto label_323130;
        case 0x323134u: goto label_323134;
        case 0x323138u: goto label_323138;
        case 0x32313cu: goto label_32313c;
        case 0x323140u: goto label_323140;
        case 0x323144u: goto label_323144;
        case 0x323148u: goto label_323148;
        case 0x32314cu: goto label_32314c;
        case 0x323150u: goto label_323150;
        case 0x323154u: goto label_323154;
        case 0x323158u: goto label_323158;
        case 0x32315cu: goto label_32315c;
        case 0x323160u: goto label_323160;
        case 0x323164u: goto label_323164;
        case 0x323168u: goto label_323168;
        case 0x32316cu: goto label_32316c;
        case 0x323170u: goto label_323170;
        case 0x323174u: goto label_323174;
        case 0x323178u: goto label_323178;
        case 0x32317cu: goto label_32317c;
        case 0x323180u: goto label_323180;
        case 0x323184u: goto label_323184;
        case 0x323188u: goto label_323188;
        case 0x32318cu: goto label_32318c;
        case 0x323190u: goto label_323190;
        case 0x323194u: goto label_323194;
        case 0x323198u: goto label_323198;
        case 0x32319cu: goto label_32319c;
        case 0x3231a0u: goto label_3231a0;
        case 0x3231a4u: goto label_3231a4;
        case 0x3231a8u: goto label_3231a8;
        case 0x3231acu: goto label_3231ac;
        case 0x3231b0u: goto label_3231b0;
        case 0x3231b4u: goto label_3231b4;
        case 0x3231b8u: goto label_3231b8;
        case 0x3231bcu: goto label_3231bc;
        case 0x3231c0u: goto label_3231c0;
        case 0x3231c4u: goto label_3231c4;
        case 0x3231c8u: goto label_3231c8;
        case 0x3231ccu: goto label_3231cc;
        case 0x3231d0u: goto label_3231d0;
        case 0x3231d4u: goto label_3231d4;
        case 0x3231d8u: goto label_3231d8;
        case 0x3231dcu: goto label_3231dc;
        case 0x3231e0u: goto label_3231e0;
        case 0x3231e4u: goto label_3231e4;
        case 0x3231e8u: goto label_3231e8;
        case 0x3231ecu: goto label_3231ec;
        case 0x3231f0u: goto label_3231f0;
        case 0x3231f4u: goto label_3231f4;
        case 0x3231f8u: goto label_3231f8;
        case 0x3231fcu: goto label_3231fc;
        case 0x323200u: goto label_323200;
        case 0x323204u: goto label_323204;
        case 0x323208u: goto label_323208;
        case 0x32320cu: goto label_32320c;
        case 0x323210u: goto label_323210;
        case 0x323214u: goto label_323214;
        case 0x323218u: goto label_323218;
        case 0x32321cu: goto label_32321c;
        case 0x323220u: goto label_323220;
        case 0x323224u: goto label_323224;
        case 0x323228u: goto label_323228;
        case 0x32322cu: goto label_32322c;
        case 0x323230u: goto label_323230;
        case 0x323234u: goto label_323234;
        case 0x323238u: goto label_323238;
        case 0x32323cu: goto label_32323c;
        case 0x323240u: goto label_323240;
        case 0x323244u: goto label_323244;
        case 0x323248u: goto label_323248;
        case 0x32324cu: goto label_32324c;
        case 0x323250u: goto label_323250;
        case 0x323254u: goto label_323254;
        case 0x323258u: goto label_323258;
        case 0x32325cu: goto label_32325c;
        case 0x323260u: goto label_323260;
        case 0x323264u: goto label_323264;
        case 0x323268u: goto label_323268;
        case 0x32326cu: goto label_32326c;
        case 0x323270u: goto label_323270;
        case 0x323274u: goto label_323274;
        case 0x323278u: goto label_323278;
        case 0x32327cu: goto label_32327c;
        case 0x323280u: goto label_323280;
        case 0x323284u: goto label_323284;
        case 0x323288u: goto label_323288;
        case 0x32328cu: goto label_32328c;
        case 0x323290u: goto label_323290;
        case 0x323294u: goto label_323294;
        case 0x323298u: goto label_323298;
        case 0x32329cu: goto label_32329c;
        case 0x3232a0u: goto label_3232a0;
        case 0x3232a4u: goto label_3232a4;
        case 0x3232a8u: goto label_3232a8;
        case 0x3232acu: goto label_3232ac;
        case 0x3232b0u: goto label_3232b0;
        case 0x3232b4u: goto label_3232b4;
        case 0x3232b8u: goto label_3232b8;
        case 0x3232bcu: goto label_3232bc;
        case 0x3232c0u: goto label_3232c0;
        case 0x3232c4u: goto label_3232c4;
        case 0x3232c8u: goto label_3232c8;
        case 0x3232ccu: goto label_3232cc;
        case 0x3232d0u: goto label_3232d0;
        case 0x3232d4u: goto label_3232d4;
        case 0x3232d8u: goto label_3232d8;
        case 0x3232dcu: goto label_3232dc;
        case 0x3232e0u: goto label_3232e0;
        case 0x3232e4u: goto label_3232e4;
        case 0x3232e8u: goto label_3232e8;
        case 0x3232ecu: goto label_3232ec;
        case 0x3232f0u: goto label_3232f0;
        case 0x3232f4u: goto label_3232f4;
        case 0x3232f8u: goto label_3232f8;
        case 0x3232fcu: goto label_3232fc;
        case 0x323300u: goto label_323300;
        case 0x323304u: goto label_323304;
        case 0x323308u: goto label_323308;
        case 0x32330cu: goto label_32330c;
        case 0x323310u: goto label_323310;
        case 0x323314u: goto label_323314;
        case 0x323318u: goto label_323318;
        case 0x32331cu: goto label_32331c;
        case 0x323320u: goto label_323320;
        case 0x323324u: goto label_323324;
        case 0x323328u: goto label_323328;
        case 0x32332cu: goto label_32332c;
        case 0x323330u: goto label_323330;
        case 0x323334u: goto label_323334;
        case 0x323338u: goto label_323338;
        case 0x32333cu: goto label_32333c;
        case 0x323340u: goto label_323340;
        case 0x323344u: goto label_323344;
        case 0x323348u: goto label_323348;
        case 0x32334cu: goto label_32334c;
        case 0x323350u: goto label_323350;
        case 0x323354u: goto label_323354;
        case 0x323358u: goto label_323358;
        case 0x32335cu: goto label_32335c;
        case 0x323360u: goto label_323360;
        case 0x323364u: goto label_323364;
        case 0x323368u: goto label_323368;
        case 0x32336cu: goto label_32336c;
        case 0x323370u: goto label_323370;
        case 0x323374u: goto label_323374;
        case 0x323378u: goto label_323378;
        case 0x32337cu: goto label_32337c;
        case 0x323380u: goto label_323380;
        case 0x323384u: goto label_323384;
        case 0x323388u: goto label_323388;
        case 0x32338cu: goto label_32338c;
        case 0x323390u: goto label_323390;
        case 0x323394u: goto label_323394;
        case 0x323398u: goto label_323398;
        case 0x32339cu: goto label_32339c;
        case 0x3233a0u: goto label_3233a0;
        case 0x3233a4u: goto label_3233a4;
        case 0x3233a8u: goto label_3233a8;
        case 0x3233acu: goto label_3233ac;
        case 0x3233b0u: goto label_3233b0;
        case 0x3233b4u: goto label_3233b4;
        case 0x3233b8u: goto label_3233b8;
        case 0x3233bcu: goto label_3233bc;
        case 0x3233c0u: goto label_3233c0;
        case 0x3233c4u: goto label_3233c4;
        case 0x3233c8u: goto label_3233c8;
        case 0x3233ccu: goto label_3233cc;
        case 0x3233d0u: goto label_3233d0;
        case 0x3233d4u: goto label_3233d4;
        case 0x3233d8u: goto label_3233d8;
        case 0x3233dcu: goto label_3233dc;
        case 0x3233e0u: goto label_3233e0;
        case 0x3233e4u: goto label_3233e4;
        case 0x3233e8u: goto label_3233e8;
        case 0x3233ecu: goto label_3233ec;
        case 0x3233f0u: goto label_3233f0;
        case 0x3233f4u: goto label_3233f4;
        case 0x3233f8u: goto label_3233f8;
        case 0x3233fcu: goto label_3233fc;
        case 0x323400u: goto label_323400;
        case 0x323404u: goto label_323404;
        case 0x323408u: goto label_323408;
        case 0x32340cu: goto label_32340c;
        case 0x323410u: goto label_323410;
        case 0x323414u: goto label_323414;
        case 0x323418u: goto label_323418;
        case 0x32341cu: goto label_32341c;
        case 0x323420u: goto label_323420;
        case 0x323424u: goto label_323424;
        case 0x323428u: goto label_323428;
        case 0x32342cu: goto label_32342c;
        case 0x323430u: goto label_323430;
        case 0x323434u: goto label_323434;
        case 0x323438u: goto label_323438;
        case 0x32343cu: goto label_32343c;
        case 0x323440u: goto label_323440;
        case 0x323444u: goto label_323444;
        case 0x323448u: goto label_323448;
        case 0x32344cu: goto label_32344c;
        case 0x323450u: goto label_323450;
        case 0x323454u: goto label_323454;
        case 0x323458u: goto label_323458;
        case 0x32345cu: goto label_32345c;
        case 0x323460u: goto label_323460;
        case 0x323464u: goto label_323464;
        case 0x323468u: goto label_323468;
        case 0x32346cu: goto label_32346c;
        case 0x323470u: goto label_323470;
        case 0x323474u: goto label_323474;
        case 0x323478u: goto label_323478;
        case 0x32347cu: goto label_32347c;
        case 0x323480u: goto label_323480;
        case 0x323484u: goto label_323484;
        case 0x323488u: goto label_323488;
        case 0x32348cu: goto label_32348c;
        case 0x323490u: goto label_323490;
        case 0x323494u: goto label_323494;
        case 0x323498u: goto label_323498;
        case 0x32349cu: goto label_32349c;
        case 0x3234a0u: goto label_3234a0;
        case 0x3234a4u: goto label_3234a4;
        case 0x3234a8u: goto label_3234a8;
        case 0x3234acu: goto label_3234ac;
        case 0x3234b0u: goto label_3234b0;
        case 0x3234b4u: goto label_3234b4;
        case 0x3234b8u: goto label_3234b8;
        case 0x3234bcu: goto label_3234bc;
        case 0x3234c0u: goto label_3234c0;
        case 0x3234c4u: goto label_3234c4;
        case 0x3234c8u: goto label_3234c8;
        case 0x3234ccu: goto label_3234cc;
        case 0x3234d0u: goto label_3234d0;
        case 0x3234d4u: goto label_3234d4;
        case 0x3234d8u: goto label_3234d8;
        case 0x3234dcu: goto label_3234dc;
        case 0x3234e0u: goto label_3234e0;
        case 0x3234e4u: goto label_3234e4;
        case 0x3234e8u: goto label_3234e8;
        case 0x3234ecu: goto label_3234ec;
        case 0x3234f0u: goto label_3234f0;
        case 0x3234f4u: goto label_3234f4;
        case 0x3234f8u: goto label_3234f8;
        case 0x3234fcu: goto label_3234fc;
        case 0x323500u: goto label_323500;
        case 0x323504u: goto label_323504;
        case 0x323508u: goto label_323508;
        case 0x32350cu: goto label_32350c;
        case 0x323510u: goto label_323510;
        case 0x323514u: goto label_323514;
        case 0x323518u: goto label_323518;
        case 0x32351cu: goto label_32351c;
        case 0x323520u: goto label_323520;
        case 0x323524u: goto label_323524;
        case 0x323528u: goto label_323528;
        case 0x32352cu: goto label_32352c;
        case 0x323530u: goto label_323530;
        case 0x323534u: goto label_323534;
        case 0x323538u: goto label_323538;
        case 0x32353cu: goto label_32353c;
        case 0x323540u: goto label_323540;
        case 0x323544u: goto label_323544;
        case 0x323548u: goto label_323548;
        case 0x32354cu: goto label_32354c;
        case 0x323550u: goto label_323550;
        case 0x323554u: goto label_323554;
        case 0x323558u: goto label_323558;
        case 0x32355cu: goto label_32355c;
        case 0x323560u: goto label_323560;
        case 0x323564u: goto label_323564;
        case 0x323568u: goto label_323568;
        case 0x32356cu: goto label_32356c;
        case 0x323570u: goto label_323570;
        case 0x323574u: goto label_323574;
        case 0x323578u: goto label_323578;
        case 0x32357cu: goto label_32357c;
        case 0x323580u: goto label_323580;
        case 0x323584u: goto label_323584;
        case 0x323588u: goto label_323588;
        case 0x32358cu: goto label_32358c;
        case 0x323590u: goto label_323590;
        case 0x323594u: goto label_323594;
        case 0x323598u: goto label_323598;
        case 0x32359cu: goto label_32359c;
        case 0x3235a0u: goto label_3235a0;
        case 0x3235a4u: goto label_3235a4;
        case 0x3235a8u: goto label_3235a8;
        case 0x3235acu: goto label_3235ac;
        case 0x3235b0u: goto label_3235b0;
        case 0x3235b4u: goto label_3235b4;
        case 0x3235b8u: goto label_3235b8;
        case 0x3235bcu: goto label_3235bc;
        case 0x3235c0u: goto label_3235c0;
        case 0x3235c4u: goto label_3235c4;
        case 0x3235c8u: goto label_3235c8;
        case 0x3235ccu: goto label_3235cc;
        case 0x3235d0u: goto label_3235d0;
        case 0x3235d4u: goto label_3235d4;
        case 0x3235d8u: goto label_3235d8;
        case 0x3235dcu: goto label_3235dc;
        case 0x3235e0u: goto label_3235e0;
        case 0x3235e4u: goto label_3235e4;
        case 0x3235e8u: goto label_3235e8;
        case 0x3235ecu: goto label_3235ec;
        case 0x3235f0u: goto label_3235f0;
        case 0x3235f4u: goto label_3235f4;
        case 0x3235f8u: goto label_3235f8;
        case 0x3235fcu: goto label_3235fc;
        case 0x323600u: goto label_323600;
        case 0x323604u: goto label_323604;
        case 0x323608u: goto label_323608;
        case 0x32360cu: goto label_32360c;
        case 0x323610u: goto label_323610;
        case 0x323614u: goto label_323614;
        case 0x323618u: goto label_323618;
        case 0x32361cu: goto label_32361c;
        case 0x323620u: goto label_323620;
        case 0x323624u: goto label_323624;
        case 0x323628u: goto label_323628;
        case 0x32362cu: goto label_32362c;
        case 0x323630u: goto label_323630;
        case 0x323634u: goto label_323634;
        case 0x323638u: goto label_323638;
        case 0x32363cu: goto label_32363c;
        case 0x323640u: goto label_323640;
        case 0x323644u: goto label_323644;
        case 0x323648u: goto label_323648;
        case 0x32364cu: goto label_32364c;
        case 0x323650u: goto label_323650;
        case 0x323654u: goto label_323654;
        case 0x323658u: goto label_323658;
        case 0x32365cu: goto label_32365c;
        case 0x323660u: goto label_323660;
        case 0x323664u: goto label_323664;
        case 0x323668u: goto label_323668;
        case 0x32366cu: goto label_32366c;
        case 0x323670u: goto label_323670;
        case 0x323674u: goto label_323674;
        case 0x323678u: goto label_323678;
        case 0x32367cu: goto label_32367c;
        case 0x323680u: goto label_323680;
        case 0x323684u: goto label_323684;
        case 0x323688u: goto label_323688;
        case 0x32368cu: goto label_32368c;
        case 0x323690u: goto label_323690;
        case 0x323694u: goto label_323694;
        case 0x323698u: goto label_323698;
        case 0x32369cu: goto label_32369c;
        case 0x3236a0u: goto label_3236a0;
        case 0x3236a4u: goto label_3236a4;
        case 0x3236a8u: goto label_3236a8;
        case 0x3236acu: goto label_3236ac;
        case 0x3236b0u: goto label_3236b0;
        case 0x3236b4u: goto label_3236b4;
        case 0x3236b8u: goto label_3236b8;
        case 0x3236bcu: goto label_3236bc;
        case 0x3236c0u: goto label_3236c0;
        case 0x3236c4u: goto label_3236c4;
        case 0x3236c8u: goto label_3236c8;
        case 0x3236ccu: goto label_3236cc;
        case 0x3236d0u: goto label_3236d0;
        case 0x3236d4u: goto label_3236d4;
        case 0x3236d8u: goto label_3236d8;
        case 0x3236dcu: goto label_3236dc;
        case 0x3236e0u: goto label_3236e0;
        case 0x3236e4u: goto label_3236e4;
        case 0x3236e8u: goto label_3236e8;
        case 0x3236ecu: goto label_3236ec;
        case 0x3236f0u: goto label_3236f0;
        case 0x3236f4u: goto label_3236f4;
        case 0x3236f8u: goto label_3236f8;
        case 0x3236fcu: goto label_3236fc;
        case 0x323700u: goto label_323700;
        case 0x323704u: goto label_323704;
        case 0x323708u: goto label_323708;
        case 0x32370cu: goto label_32370c;
        case 0x323710u: goto label_323710;
        case 0x323714u: goto label_323714;
        case 0x323718u: goto label_323718;
        case 0x32371cu: goto label_32371c;
        case 0x323720u: goto label_323720;
        case 0x323724u: goto label_323724;
        case 0x323728u: goto label_323728;
        case 0x32372cu: goto label_32372c;
        case 0x323730u: goto label_323730;
        case 0x323734u: goto label_323734;
        case 0x323738u: goto label_323738;
        case 0x32373cu: goto label_32373c;
        case 0x323740u: goto label_323740;
        case 0x323744u: goto label_323744;
        case 0x323748u: goto label_323748;
        case 0x32374cu: goto label_32374c;
        case 0x323750u: goto label_323750;
        case 0x323754u: goto label_323754;
        case 0x323758u: goto label_323758;
        case 0x32375cu: goto label_32375c;
        case 0x323760u: goto label_323760;
        case 0x323764u: goto label_323764;
        case 0x323768u: goto label_323768;
        case 0x32376cu: goto label_32376c;
        case 0x323770u: goto label_323770;
        case 0x323774u: goto label_323774;
        case 0x323778u: goto label_323778;
        case 0x32377cu: goto label_32377c;
        case 0x323780u: goto label_323780;
        case 0x323784u: goto label_323784;
        case 0x323788u: goto label_323788;
        case 0x32378cu: goto label_32378c;
        case 0x323790u: goto label_323790;
        case 0x323794u: goto label_323794;
        case 0x323798u: goto label_323798;
        case 0x32379cu: goto label_32379c;
        case 0x3237a0u: goto label_3237a0;
        case 0x3237a4u: goto label_3237a4;
        case 0x3237a8u: goto label_3237a8;
        case 0x3237acu: goto label_3237ac;
        case 0x3237b0u: goto label_3237b0;
        case 0x3237b4u: goto label_3237b4;
        case 0x3237b8u: goto label_3237b8;
        case 0x3237bcu: goto label_3237bc;
        case 0x3237c0u: goto label_3237c0;
        case 0x3237c4u: goto label_3237c4;
        case 0x3237c8u: goto label_3237c8;
        case 0x3237ccu: goto label_3237cc;
        case 0x3237d0u: goto label_3237d0;
        case 0x3237d4u: goto label_3237d4;
        case 0x3237d8u: goto label_3237d8;
        case 0x3237dcu: goto label_3237dc;
        case 0x3237e0u: goto label_3237e0;
        case 0x3237e4u: goto label_3237e4;
        case 0x3237e8u: goto label_3237e8;
        case 0x3237ecu: goto label_3237ec;
        case 0x3237f0u: goto label_3237f0;
        case 0x3237f4u: goto label_3237f4;
        case 0x3237f8u: goto label_3237f8;
        case 0x3237fcu: goto label_3237fc;
        case 0x323800u: goto label_323800;
        case 0x323804u: goto label_323804;
        case 0x323808u: goto label_323808;
        case 0x32380cu: goto label_32380c;
        case 0x323810u: goto label_323810;
        case 0x323814u: goto label_323814;
        case 0x323818u: goto label_323818;
        case 0x32381cu: goto label_32381c;
        case 0x323820u: goto label_323820;
        case 0x323824u: goto label_323824;
        case 0x323828u: goto label_323828;
        case 0x32382cu: goto label_32382c;
        case 0x323830u: goto label_323830;
        case 0x323834u: goto label_323834;
        case 0x323838u: goto label_323838;
        case 0x32383cu: goto label_32383c;
        case 0x323840u: goto label_323840;
        case 0x323844u: goto label_323844;
        case 0x323848u: goto label_323848;
        case 0x32384cu: goto label_32384c;
        case 0x323850u: goto label_323850;
        case 0x323854u: goto label_323854;
        case 0x323858u: goto label_323858;
        case 0x32385cu: goto label_32385c;
        case 0x323860u: goto label_323860;
        case 0x323864u: goto label_323864;
        case 0x323868u: goto label_323868;
        case 0x32386cu: goto label_32386c;
        case 0x323870u: goto label_323870;
        case 0x323874u: goto label_323874;
        case 0x323878u: goto label_323878;
        case 0x32387cu: goto label_32387c;
        case 0x323880u: goto label_323880;
        case 0x323884u: goto label_323884;
        case 0x323888u: goto label_323888;
        case 0x32388cu: goto label_32388c;
        case 0x323890u: goto label_323890;
        case 0x323894u: goto label_323894;
        case 0x323898u: goto label_323898;
        case 0x32389cu: goto label_32389c;
        case 0x3238a0u: goto label_3238a0;
        case 0x3238a4u: goto label_3238a4;
        case 0x3238a8u: goto label_3238a8;
        case 0x3238acu: goto label_3238ac;
        case 0x3238b0u: goto label_3238b0;
        case 0x3238b4u: goto label_3238b4;
        case 0x3238b8u: goto label_3238b8;
        case 0x3238bcu: goto label_3238bc;
        case 0x3238c0u: goto label_3238c0;
        case 0x3238c4u: goto label_3238c4;
        case 0x3238c8u: goto label_3238c8;
        case 0x3238ccu: goto label_3238cc;
        case 0x3238d0u: goto label_3238d0;
        case 0x3238d4u: goto label_3238d4;
        case 0x3238d8u: goto label_3238d8;
        case 0x3238dcu: goto label_3238dc;
        case 0x3238e0u: goto label_3238e0;
        case 0x3238e4u: goto label_3238e4;
        case 0x3238e8u: goto label_3238e8;
        case 0x3238ecu: goto label_3238ec;
        case 0x3238f0u: goto label_3238f0;
        case 0x3238f4u: goto label_3238f4;
        case 0x3238f8u: goto label_3238f8;
        case 0x3238fcu: goto label_3238fc;
        case 0x323900u: goto label_323900;
        case 0x323904u: goto label_323904;
        case 0x323908u: goto label_323908;
        case 0x32390cu: goto label_32390c;
        case 0x323910u: goto label_323910;
        case 0x323914u: goto label_323914;
        case 0x323918u: goto label_323918;
        case 0x32391cu: goto label_32391c;
        case 0x323920u: goto label_323920;
        case 0x323924u: goto label_323924;
        case 0x323928u: goto label_323928;
        case 0x32392cu: goto label_32392c;
        case 0x323930u: goto label_323930;
        case 0x323934u: goto label_323934;
        case 0x323938u: goto label_323938;
        case 0x32393cu: goto label_32393c;
        case 0x323940u: goto label_323940;
        case 0x323944u: goto label_323944;
        case 0x323948u: goto label_323948;
        case 0x32394cu: goto label_32394c;
        case 0x323950u: goto label_323950;
        case 0x323954u: goto label_323954;
        case 0x323958u: goto label_323958;
        case 0x32395cu: goto label_32395c;
        case 0x323960u: goto label_323960;
        case 0x323964u: goto label_323964;
        case 0x323968u: goto label_323968;
        case 0x32396cu: goto label_32396c;
        case 0x323970u: goto label_323970;
        case 0x323974u: goto label_323974;
        case 0x323978u: goto label_323978;
        case 0x32397cu: goto label_32397c;
        case 0x323980u: goto label_323980;
        case 0x323984u: goto label_323984;
        case 0x323988u: goto label_323988;
        case 0x32398cu: goto label_32398c;
        case 0x323990u: goto label_323990;
        case 0x323994u: goto label_323994;
        case 0x323998u: goto label_323998;
        case 0x32399cu: goto label_32399c;
        case 0x3239a0u: goto label_3239a0;
        case 0x3239a4u: goto label_3239a4;
        case 0x3239a8u: goto label_3239a8;
        case 0x3239acu: goto label_3239ac;
        default: break;
    }

    ctx->pc = 0x322c98u;

label_322c98:
    // 0x322c98: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x322c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_322c9c:
    // 0x322c9c: 0xffbe0100  sd          $fp, 0x100($sp)
    ctx->pc = 0x322c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 30));
label_322ca0:
    // 0x322ca0: 0x27a2001f  addiu       $v0, $sp, 0x1F
    ctx->pc = 0x322ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
label_322ca4:
    // 0x322ca4: 0xffb600e0  sd          $s6, 0xE0($sp)
    ctx->pc = 0x322ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 22));
label_322ca8:
    // 0x322ca8: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x322ca8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_322cac:
    // 0x322cac: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x322cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_322cb0:
    // 0x322cb0: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x322cb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_322cb4:
    // 0x322cb4: 0xffb700f0  sd          $s7, 0xF0($sp)
    ctx->pc = 0x322cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 23));
label_322cb8:
    // 0x322cb8: 0xffb500d0  sd          $s5, 0xD0($sp)
    ctx->pc = 0x322cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 21));
label_322cbc:
    // 0x322cbc: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x322cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_322cc0:
    // 0x322cc0: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x322cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
label_322cc4:
    // 0x322cc4: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x322cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
label_322cc8:
    // 0x322cc8: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x322cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
label_322ccc:
    // 0x322ccc: 0xffb00080  sd          $s0, 0x80($sp)
    ctx->pc = 0x322cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
label_322cd0:
    // 0x322cd0: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x322cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
label_322cd4:
    // 0x322cd4: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x322cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
label_322cd8:
    // 0x322cd8: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x322cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_322cdc:
    // 0x322cdc: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x322cdcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_322ce0:
    // 0x322ce0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x322ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_322ce4:
    // 0x322ce4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x322ce4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_322ce8:
    // 0x322ce8: 0x1040031c  beqz        $v0, . + 4 + (0x31C << 2)
label_322cec:
    if (ctx->pc == 0x322CECu) {
        ctx->pc = 0x322CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE8u;
        // 0x322cec: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322CF0u;
        goto label_322cf0;
    }
    ctx->pc = 0x322CE8u;
    {
        const bool branch_taken_0x322ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322CE8u;
        // 0x322cec: 0xafa00058  sw          $zero, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ce8) {
            ctx->pc = 0x32395Cu;
            goto label_32395c;
        }
    }
    ctx->pc = 0x322CF0u;
label_322cf0:
    // 0x322cf0: 0x27a30040  addiu       $v1, $sp, 0x40
    ctx->pc = 0x322cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_322cf4:
    // 0x322cf4: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x322cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_322cf8:
    // 0x322cf8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x322cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_322cfc:
    // 0x322cfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x322cfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322d00:
    // 0x322d00: 0x23603  sra         $a2, $v0, 24
    ctx->pc = 0x322d00u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 24));
label_322d04:
    // 0x322d04: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x322d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_322d08:
    // 0x322d08: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x322d08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322d0c:
    // 0x322d0c: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x322d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_322d10:
    // 0x322d10: 0x14c20300  bne         $a2, $v0, . + 4 + (0x300 << 2)
label_322d14:
    if (ctx->pc == 0x322D14u) {
        ctx->pc = 0x322D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D10u;
        // 0x322d14: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D18u;
        goto label_322d18;
    }
    ctx->pc = 0x322D10u;
    {
        const bool branch_taken_0x322d10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x322D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D10u;
        // 0x322d14: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d10) {
            ctx->pc = 0x323914u;
            goto label_323914;
        }
    }
    ctx->pc = 0x322D18u;
label_322d18:
    // 0x322d18: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x322d18u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322d1c:
    // 0x322d1c: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x322d1cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_322d20:
    // 0x322d20: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x322d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_322d24:
    // 0x322d24: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x322d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_322d28:
    // 0x322d28: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x322d28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
label_322d2c:
    // 0x322d2c: 0x2c830059  sltiu       $v1, $a0, 0x59
    ctx->pc = 0x322d2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
label_322d30:
    // 0x322d30: 0x106001cc  beqz        $v1, . + 4 + (0x1CC << 2)
label_322d34:
    if (ctx->pc == 0x322D34u) {
        ctx->pc = 0x322D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D30u;
        // 0x322d34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D38u;
        goto label_322d38;
    }
    ctx->pc = 0x322D30u;
    {
        const bool branch_taken_0x322d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D30u;
        // 0x322d34: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d30) {
            ctx->pc = 0x323464u;
            goto label_323464;
        }
    }
    ctx->pc = 0x322D38u;
label_322d38:
    // 0x322d38: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322d38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322d3c:
    // 0x322d3c: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x322d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_322d40:
    // 0x322d40: 0x244225f0  addiu       $v0, $v0, 0x25F0
    ctx->pc = 0x322d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9712));
label_322d44:
    // 0x322d44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x322d44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_322d48:
    // 0x322d48: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x322d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_322d4c:
    // 0x322d4c: 0x800008  jr          $a0
label_322d50:
    if (ctx->pc == 0x322D50u) {
        ctx->pc = 0x322D54u;
        goto label_322d54;
    }
    ctx->pc = 0x322D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x322D54u: goto label_322d54;
            case 0x322D5Cu: goto label_322d5c;
            case 0x322D64u: goto label_322d64;
            case 0x322D6Cu: goto label_322d6c;
            case 0x322DB4u: goto label_322db4;
            case 0x322E3Cu: goto label_322e3c;
            case 0x322E44u: goto label_322e44;
            case 0x322E4Cu: goto label_322e4c;
            case 0x322E54u: goto label_322e54;
            case 0x322E5Cu: goto label_322e5c;
            case 0x322F10u: goto label_322f10;
            case 0x322F3Cu: goto label_322f3c;
            case 0x322FFCu: goto label_322ffc;
            case 0x323114u: goto label_323114;
            case 0x3231D8u: goto label_3231d8;
            case 0x32323Cu: goto label_32323c;
            case 0x323380u: goto label_323380;
            case 0x3233B8u: goto label_3233b8;
            case 0x323464u: goto label_323464;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x322D4Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x322D54u;
label_322d54:
    // 0x322d54: 0x1000fff0  b           . + 4 + (-0x10 << 2)
label_322d58:
    if (ctx->pc == 0x322D58u) {
        ctx->pc = 0x322D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D54u;
        // 0x322d58: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D5Cu;
        goto label_322d5c;
    }
    ctx->pc = 0x322D54u;
    {
        const bool branch_taken_0x322d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D54u;
        // 0x322d58: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d54) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322D5Cu;
label_322d5c:
    // 0x322d5c: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_322d60:
    if (ctx->pc == 0x322D60u) {
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D64u;
        goto label_322d64;
    }
    ctx->pc = 0x322D5Cu;
    {
        const bool branch_taken_0x322d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D5Cu;
        // 0x322d60: 0x36b50002  ori         $s5, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d5c) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322D64u;
label_322d64:
    // 0x322d64: 0x1000ffec  b           . + 4 + (-0x14 << 2)
label_322d68:
    if (ctx->pc == 0x322D68u) {
        ctx->pc = 0x322D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D64u;
        // 0x322d68: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322D6Cu;
        goto label_322d6c;
    }
    ctx->pc = 0x322D64u;
    {
        const bool branch_taken_0x322d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D64u;
        // 0x322d68: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d64) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322D6Cu;
label_322d6c:
    // 0x322d6c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x322d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_322d70:
    // 0x322d70: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x322d70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_322d74:
    // 0x322d74: 0x0  nop
    ctx->pc = 0x322d74u;
    // NOP
label_322d78:
    // 0x322d78: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x322d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_322d7c:
    // 0x322d7c: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x322d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_322d80:
    // 0x322d80: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x322d80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322d84:
    // 0x322d84: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x322d84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_322d88:
    // 0x322d88: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x322d88u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_322d8c:
    // 0x322d8c: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x322d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_322d90:
    // 0x322d90: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x322d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_322d94:
    // 0x322d94: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x322d94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_322d98:
    // 0x322d98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_322d9c:
    if (ctx->pc == 0x322D9Cu) {
        ctx->pc = 0x322D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D98u;
        // 0x322d9c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DA0u;
        goto label_322da0;
    }
    ctx->pc = 0x322D98u;
    {
        const bool branch_taken_0x322d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322D98u;
        // 0x322d9c: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322d98) {
            ctx->pc = 0x322D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d78;
        }
    }
    ctx->pc = 0x322DA0u;
label_322da0:
    // 0x322da0: 0xafb00050  sw          $s0, 0x50($sp)
    ctx->pc = 0x322da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 16));
label_322da4:
    // 0x322da4: 0x10a002e7  beqz        $a1, . + 4 + (0x2E7 << 2)
label_322da8:
    if (ctx->pc == 0x322DA8u) {
        ctx->pc = 0x322DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DA4u;
        // 0x322da8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DACu;
        goto label_322dac;
    }
    ctx->pc = 0x322DA4u;
    {
        const bool branch_taken_0x322da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DA4u;
        // 0x322da8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322da4) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x322DACu;
label_322dac:
    // 0x322dac: 0x1000ffda  b           . + 4 + (-0x26 << 2)
label_322db0:
    if (ctx->pc == 0x322DB0u) {
        ctx->pc = 0x322DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DACu;
        // 0x322db0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DB4u;
        goto label_322db4;
    }
    ctx->pc = 0x322DACu;
    {
        const bool branch_taken_0x322dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DACu;
        // 0x322db0: 0x26d6ffff  addiu       $s6, $s6, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dac) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322DB4u;
label_322db4:
    // 0x322db4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x322db4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322db8:
    // 0x322db8: 0x36b50020  ori         $s5, $s5, 0x20
    ctx->pc = 0x322db8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
label_322dbc:
    // 0x322dbc: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x322dbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_322dc0:
    // 0x322dc0: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x322dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_322dc4:
    // 0x322dc4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_322dc8:
    if (ctx->pc == 0x322DC8u) {
        ctx->pc = 0x322DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DC4u;
        // 0x322dc8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DCCu;
        goto label_322dcc;
    }
    ctx->pc = 0x322DC4u;
    {
        const bool branch_taken_0x322dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x322DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DC4u;
        // 0x322dc8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322dc4) {
            ctx->pc = 0x322DE8u;
            goto label_322de8;
        }
    }
    ctx->pc = 0x322DCCu;
label_322dcc:
    // 0x322dcc: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x322dccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_322dd0:
    // 0x322dd0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x322dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_322dd4:
    // 0x322dd4: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x322dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_322dd8:
    // 0x322dd8: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x322dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322ddc:
    // 0x322ddc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x322ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_322de0:
    // 0x322de0: 0x1000ffcd  b           . + 4 + (-0x33 << 2)
label_322de4:
    if (ctx->pc == 0x322DE4u) {
        ctx->pc = 0x322DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DE0u;
        // 0x322de4: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DE8u;
        goto label_322de8;
    }
    ctx->pc = 0x322DE0u;
    {
        const bool branch_taken_0x322de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DE0u;
        // 0x322de4: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322de0) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322DE8u;
label_322de8:
    // 0x322de8: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x322de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_322dec:
    // 0x322dec: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x322decu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_322df0:
    // 0x322df0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_322df4:
    if (ctx->pc == 0x322DF4u) {
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DF0u;
        // 0x322df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322DF8u;
        goto label_322df8;
    }
    ctx->pc = 0x322DF0u;
    {
        const bool branch_taken_0x322df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322DF0u;
        // 0x322df4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322df0) {
            ctx->pc = 0x322E28u;
            goto label_322e28;
        }
    }
    ctx->pc = 0x322DF8u;
label_322df8:
    // 0x322df8: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x322df8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_322dfc:
    // 0x322dfc: 0x0  nop
    ctx->pc = 0x322dfcu;
    // NOP
label_322e00:
    // 0x322e00: 0x2062018  mult        $a0, $s0, $a2
    ctx->pc = 0x322e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_322e04:
    // 0x322e04: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x322e04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_322e08:
    // 0x322e08: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x322e08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322e0c:
    // 0x322e0c: 0x31e03  sra         $v1, $v1, 24
    ctx->pc = 0x322e0cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 24));
label_322e10:
    // 0x322e10: 0x92c50000  lbu         $a1, 0x0($s6)
    ctx->pc = 0x322e10u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_322e14:
    // 0x322e14: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x322e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_322e18:
    // 0x322e18: 0x24a2ffd0  addiu       $v0, $a1, -0x30
    ctx->pc = 0x322e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967248));
label_322e1c:
    // 0x322e1c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x322e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_322e20:
    // 0x322e20: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_322e24:
    if (ctx->pc == 0x322E24u) {
        ctx->pc = 0x322E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E20u;
        // 0x322e24: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E28u;
        goto label_322e28;
    }
    ctx->pc = 0x322E20u;
    {
        const bool branch_taken_0x322e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E20u;
        // 0x322e24: 0x838021  addu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e20) {
            ctx->pc = 0x322E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322e00;
        }
    }
    ctx->pc = 0x322E28u;
label_322e28:
    // 0x322e28: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x322e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_322e2c:
    // 0x322e2c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x322e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_322e30:
    // 0x322e30: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x322e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_322e34:
    // 0x322e34: 0x1000ffdb  b           . + 4 + (-0x25 << 2)
label_322e38:
    if (ctx->pc == 0x322E38u) {
        ctx->pc = 0x322E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E34u;
        // 0x322e38: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E3Cu;
        goto label_322e3c;
    }
    ctx->pc = 0x322E34u;
    {
        const bool branch_taken_0x322e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E34u;
        // 0x322e38: 0x202400b  movn        $t0, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e34) {
            ctx->pc = 0x322DA4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322da4;
        }
    }
    ctx->pc = 0x322E3Cu;
label_322e3c:
    // 0x322e3c: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
label_322e40:
    if (ctx->pc == 0x322E40u) {
        ctx->pc = 0x322E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E3Cu;
        // 0x322e40: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E44u;
        goto label_322e44;
    }
    ctx->pc = 0x322E3Cu;
    {
        const bool branch_taken_0x322e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E3Cu;
        // 0x322e40: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e3c) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322E44u;
label_322e44:
    // 0x322e44: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_322e48:
    if (ctx->pc == 0x322E48u) {
        ctx->pc = 0x322E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E44u;
        // 0x322e48: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E4Cu;
        goto label_322e4c;
    }
    ctx->pc = 0x322E44u;
    {
        const bool branch_taken_0x322e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E44u;
        // 0x322e48: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e44) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322E4Cu;
label_322e4c:
    // 0x322e4c: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
label_322e50:
    if (ctx->pc == 0x322E50u) {
        ctx->pc = 0x322E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E4Cu;
        // 0x322e50: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E54u;
        goto label_322e54;
    }
    ctx->pc = 0x322E4Cu;
    {
        const bool branch_taken_0x322e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E4Cu;
        // 0x322e50: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e4c) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322E54u;
label_322e54:
    // 0x322e54: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_322e58:
    if (ctx->pc == 0x322E58u) {
        ctx->pc = 0x322E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E54u;
        // 0x322e58: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E5Cu;
        goto label_322e5c;
    }
    ctx->pc = 0x322E54u;
    {
        const bool branch_taken_0x322e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E54u;
        // 0x322e58: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e54) {
            ctx->pc = 0x322D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322d18;
        }
    }
    ctx->pc = 0x322E5Cu;
label_322e5c:
    // 0x322e5c: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x322e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_322e60:
    // 0x322e60: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_322e64:
    if (ctx->pc == 0x322E64u) {
        ctx->pc = 0x322E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E60u;
        // 0x322e64: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E68u;
        goto label_322e68;
    }
    ctx->pc = 0x322E60u;
    {
        const bool branch_taken_0x322e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E60u;
        // 0x322e64: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e60) {
            ctx->pc = 0x322E74u;
            goto label_322e74;
        }
    }
    ctx->pc = 0x322E68u;
label_322e68:
    // 0x322e68: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x322e68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_322e6c:
    // 0x322e6c: 0x10000006  b           . + 4 + (0x6 << 2)
label_322e70:
    if (ctx->pc == 0x322E70u) {
        ctx->pc = 0x322E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E6Cu;
        // 0x322e70: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E74u;
        goto label_322e74;
    }
    ctx->pc = 0x322E6Cu;
    {
        const bool branch_taken_0x322e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E6Cu;
        // 0x322e70: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e6c) {
            ctx->pc = 0x322E88u;
            goto label_322e88;
        }
    }
    ctx->pc = 0x322E74u;
label_322e74:
    // 0x322e74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322e78:
    if (ctx->pc == 0x322E78u) {
        ctx->pc = 0x322E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E74u;
        // 0x322e78: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E7Cu;
        goto label_322e7c;
    }
    ctx->pc = 0x322E74u;
    {
        const bool branch_taken_0x322e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E74u;
        // 0x322e78: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e74) {
            ctx->pc = 0x322E84u;
            goto label_322e84;
        }
    }
    ctx->pc = 0x322E7Cu;
label_322e7c:
    // 0x322e7c: 0x10000002  b           . + 4 + (0x2 << 2)
label_322e80:
    if (ctx->pc == 0x322E80u) {
        ctx->pc = 0x322E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E7Cu;
        // 0x322e80: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E84u;
        goto label_322e84;
    }
    ctx->pc = 0x322E7Cu;
    {
        const bool branch_taken_0x322e7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E7Cu;
        // 0x322e80: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e7c) {
            ctx->pc = 0x322E88u;
            goto label_322e88;
        }
    }
    ctx->pc = 0x322E84u;
label_322e84:
    // 0x322e84: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x322e84u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_322e88:
    // 0x322e88: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_322e8c:
    if (ctx->pc == 0x322E8Cu) {
        ctx->pc = 0x322E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E88u;
        // 0x322e8c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E90u;
        goto label_322e90;
    }
    ctx->pc = 0x322E88u;
    {
        const bool branch_taken_0x322e88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x322E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E88u;
        // 0x322e8c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e88) {
            ctx->pc = 0x322EB8u;
            goto label_322eb8;
        }
    }
    ctx->pc = 0x322E90u;
label_322e90:
    // 0x322e90: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x322e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_322e94:
    // 0x322e94: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322e98:
    if (ctx->pc == 0x322E98u) {
        ctx->pc = 0x322E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E94u;
        // 0x322e98: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322E9Cu;
        goto label_322e9c;
    }
    ctx->pc = 0x322E94u;
    {
        const bool branch_taken_0x322e94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E94u;
        // 0x322e98: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e94) {
            ctx->pc = 0x322EA4u;
            goto label_322ea4;
        }
    }
    ctx->pc = 0x322E9Cu;
label_322e9c:
    // 0x322e9c: 0x11000017  beqz        $t0, . + 4 + (0x17 << 2)
label_322ea0:
    if (ctx->pc == 0x322EA0u) {
        ctx->pc = 0x322EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E9Cu;
        // 0x322ea0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EA4u;
        goto label_322ea4;
    }
    ctx->pc = 0x322E9Cu;
    {
        const bool branch_taken_0x322e9c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322E9Cu;
        // 0x322ea0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322e9c) {
            ctx->pc = 0x322EFCu;
            goto label_322efc;
        }
    }
    ctx->pc = 0x322EA4u;
label_322ea4:
    // 0x322ea4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x322ea4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322ea8:
    // 0x322ea8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x322ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_322eac:
    // 0x322eac: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x322eacu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_322eb0:
    // 0x322eb0: 0x10000013  b           . + 4 + (0x13 << 2)
label_322eb4:
    if (ctx->pc == 0x322EB4u) {
        ctx->pc = 0x322EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB0u;
        // 0x322eb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EB8u;
        goto label_322eb8;
    }
    ctx->pc = 0x322EB0u;
    {
        const bool branch_taken_0x322eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EB0u;
        // 0x322eb4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322eb0) {
            ctx->pc = 0x322F00u;
            goto label_322f00;
        }
    }
    ctx->pc = 0x322EB8u;
label_322eb8:
    // 0x322eb8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x322eb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322ebc:
    // 0x322ebc: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x322ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_322ec0:
    // 0x322ec0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x322ec0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_322ec4:
    // 0x322ec4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x322ec4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_322ec8:
    // 0x322ec8: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x322ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
label_322ecc:
    // 0x322ecc: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x322eccu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_322ed0:
    // 0x322ed0: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x322ed0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
label_322ed4:
    // 0x322ed4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x322ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_322ed8:
    // 0x322ed8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x322ed8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_322edc:
    // 0x322edc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x322edcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_322ee0:
    // 0x322ee0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
label_322ee4:
    if (ctx->pc == 0x322EE4u) {
        ctx->pc = 0x322EE8u;
        goto label_322ee8;
    }
    ctx->pc = 0x322EE0u;
    {
        const bool branch_taken_0x322ee0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x322ee0) {
            ctx->pc = 0x322EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322ec8;
        }
    }
    ctx->pc = 0x322EE8u;
label_322ee8:
    // 0x322ee8: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_322eec:
    if (ctx->pc == 0x322EECu) {
        ctx->pc = 0x322EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EE8u;
        // 0x322eec: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EF0u;
        goto label_322ef0;
    }
    ctx->pc = 0x322EE8u;
    {
        const bool branch_taken_0x322ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EE8u;
        // 0x322eec: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ee8) {
            ctx->pc = 0x322F04u;
            goto label_322f04;
        }
    }
    ctx->pc = 0x322EF0u;
label_322ef0:
    // 0x322ef0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x322ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_322ef4:
    // 0x322ef4: 0x10000003  b           . + 4 + (0x3 << 2)
label_322ef8:
    if (ctx->pc == 0x322EF8u) {
        ctx->pc = 0x322EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EF4u;
        // 0x322ef8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322EFCu;
        goto label_322efc;
    }
    ctx->pc = 0x322EF4u;
    {
        const bool branch_taken_0x322ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322EF4u;
        // 0x322ef8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ef4) {
            ctx->pc = 0x322F04u;
            goto label_322f04;
        }
    }
    ctx->pc = 0x322EFCu;
label_322efc:
    // 0x322efc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x322efcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_322f00:
    // 0x322f00: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x322f00u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_322f04:
    // 0x322f04: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x322f04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_322f08:
    // 0x322f08: 0x10000162  b           . + 4 + (0x162 << 2)
label_322f0c:
    if (ctx->pc == 0x322F0Cu) {
        ctx->pc = 0x322F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F08u;
        // 0x322f0c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F10u;
        goto label_322f10;
    }
    ctx->pc = 0x322F08u;
    {
        const bool branch_taken_0x322f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F08u;
        // 0x322f0c: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f08) {
            ctx->pc = 0x323494u;
            goto label_323494;
        }
    }
    ctx->pc = 0x322F10u;
label_322f10:
    // 0x322f10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322f10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322f14:
    // 0x322f14: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x322f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_322f18:
    // 0x322f18: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_322f1c:
    if (ctx->pc == 0x322F1Cu) {
        ctx->pc = 0x322F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F18u;
        // 0x322f1c: 0x244425c0  addiu       $a0, $v0, 0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9664));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F20u;
        goto label_322f20;
    }
    ctx->pc = 0x322F18u;
    {
        const bool branch_taken_0x322f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F18u;
        // 0x322f1c: 0x244425c0  addiu       $a0, $v0, 0x25C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9664));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f18) {
            ctx->pc = 0x322F64u;
            goto label_322f64;
        }
    }
    ctx->pc = 0x322F20u;
label_322f20:
    // 0x322f20: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x322f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_322f24:
    // 0x322f24: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x322f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_322f28:
    // 0x322f28: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x322f28u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_322f2c:
    // 0x322f2c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x322f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_322f30:
    // 0x322f30: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x322f30u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_322f34:
    // 0x322f34: 0x1000000b  b           . + 4 + (0xB << 2)
label_322f38:
    if (ctx->pc == 0x322F38u) {
        ctx->pc = 0x322F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F34u;
        // 0x322f38: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F3Cu;
        goto label_322f3c;
    }
    ctx->pc = 0x322F34u;
    {
        const bool branch_taken_0x322f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F34u;
        // 0x322f38: 0xafa20054  sw          $v0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f34) {
            ctx->pc = 0x322F64u;
            goto label_322f64;
        }
    }
    ctx->pc = 0x322F3Cu;
label_322f3c:
    // 0x322f3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x322f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_322f40:
    // 0x322f40: 0x32a30010  andi        $v1, $s5, 0x10
    ctx->pc = 0x322f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
label_322f44:
    // 0x322f44: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_322f48:
    if (ctx->pc == 0x322F48u) {
        ctx->pc = 0x322F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F44u;
        // 0x322f48: 0x244425d8  addiu       $a0, $v0, 0x25D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F4Cu;
        goto label_322f4c;
    }
    ctx->pc = 0x322F44u;
    {
        const bool branch_taken_0x322f44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F44u;
        // 0x322f48: 0x244425d8  addiu       $a0, $v0, 0x25D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9688));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f44) {
            ctx->pc = 0x322F64u;
            goto label_322f64;
        }
    }
    ctx->pc = 0x322F4Cu;
label_322f4c:
    // 0x322f4c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x322f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_322f50:
    // 0x322f50: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x322f50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_322f54:
    // 0x322f54: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x322f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_322f58:
    // 0x322f58: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x322f58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_322f5c:
    // 0x322f5c: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x322f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_322f60:
    // 0x322f60: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x322f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_322f64:
    // 0x322f64: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x322f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_322f68:
    // 0x322f68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_322f6c:
    if (ctx->pc == 0x322F6Cu) {
        ctx->pc = 0x322F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F68u;
        // 0x322f6c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F70u;
        goto label_322f70;
    }
    ctx->pc = 0x322F68u;
    {
        const bool branch_taken_0x322f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F68u;
        // 0x322f6c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f68) {
            ctx->pc = 0x322F7Cu;
            goto label_322f7c;
        }
    }
    ctx->pc = 0x322F70u;
label_322f70:
    // 0x322f70: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x322f70u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_322f74:
    // 0x322f74: 0x10000006  b           . + 4 + (0x6 << 2)
label_322f78:
    if (ctx->pc == 0x322F78u) {
        ctx->pc = 0x322F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F74u;
        // 0x322f78: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F7Cu;
        goto label_322f7c;
    }
    ctx->pc = 0x322F74u;
    {
        const bool branch_taken_0x322f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F74u;
        // 0x322f78: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f74) {
            ctx->pc = 0x322F90u;
            goto label_322f90;
        }
    }
    ctx->pc = 0x322F7Cu;
label_322f7c:
    // 0x322f7c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322f80:
    if (ctx->pc == 0x322F80u) {
        ctx->pc = 0x322F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F7Cu;
        // 0x322f80: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F84u;
        goto label_322f84;
    }
    ctx->pc = 0x322F7Cu;
    {
        const bool branch_taken_0x322f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F7Cu;
        // 0x322f80: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f7c) {
            ctx->pc = 0x322F8Cu;
            goto label_322f8c;
        }
    }
    ctx->pc = 0x322F84u;
label_322f84:
    // 0x322f84: 0x10000002  b           . + 4 + (0x2 << 2)
label_322f88:
    if (ctx->pc == 0x322F88u) {
        ctx->pc = 0x322F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F84u;
        // 0x322f88: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F8Cu;
        goto label_322f8c;
    }
    ctx->pc = 0x322F84u;
    {
        const bool branch_taken_0x322f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F84u;
        // 0x322f88: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f84) {
            ctx->pc = 0x322F90u;
            goto label_322f90;
        }
    }
    ctx->pc = 0x322F8Cu;
label_322f8c:
    // 0x322f8c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x322f8cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_322f90:
    // 0x322f90: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_322f94:
    if (ctx->pc == 0x322F94u) {
        ctx->pc = 0x322F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F90u;
        // 0x322f94: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322F98u;
        goto label_322f98;
    }
    ctx->pc = 0x322F90u;
    {
        const bool branch_taken_0x322f90 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x322F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F90u;
        // 0x322f94: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f90) {
            ctx->pc = 0x322FC4u;
            goto label_322fc4;
        }
    }
    ctx->pc = 0x322F98u;
label_322f98:
    // 0x322f98: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x322f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_322f9c:
    // 0x322f9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_322fa0:
    if (ctx->pc == 0x322FA0u) {
        ctx->pc = 0x322FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F9Cu;
        // 0x322fa0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FA4u;
        goto label_322fa4;
    }
    ctx->pc = 0x322F9Cu;
    {
        const bool branch_taken_0x322f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322F9Cu;
        // 0x322fa0: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322f9c) {
            ctx->pc = 0x322FACu;
            goto label_322fac;
        }
    }
    ctx->pc = 0x322FA4u;
label_322fa4:
    // 0x322fa4: 0x11000086  beqz        $t0, . + 4 + (0x86 << 2)
label_322fa8:
    if (ctx->pc == 0x322FA8u) {
        ctx->pc = 0x322FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FA4u;
        // 0x322fa8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FACu;
        goto label_322fac;
    }
    ctx->pc = 0x322FA4u;
    {
        const bool branch_taken_0x322fa4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FA4u;
        // 0x322fa8: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fa4) {
            ctx->pc = 0x3231C0u;
            goto label_3231c0;
        }
    }
    ctx->pc = 0x322FACu;
label_322fac:
    // 0x322fac: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x322facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_322fb0:
    // 0x322fb0: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x322fb0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322fb4:
    // 0x322fb4: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x322fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_322fb8:
    // 0x322fb8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x322fb8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_322fbc:
    // 0x322fbc: 0x10000081  b           . + 4 + (0x81 << 2)
label_322fc0:
    if (ctx->pc == 0x322FC0u) {
        ctx->pc = 0x322FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FBCu;
        // 0x322fc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FC4u;
        goto label_322fc4;
    }
    ctx->pc = 0x322FBCu;
    {
        const bool branch_taken_0x322fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FBCu;
        // 0x322fc0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fbc) {
            ctx->pc = 0x3231C4u;
            goto label_3231c4;
        }
    }
    ctx->pc = 0x322FC4u;
label_322fc4:
    // 0x322fc4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x322fc4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_322fc8:
    // 0x322fc8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x322fc8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_322fcc:
    // 0x322fcc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x322fccu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_322fd0:
    // 0x322fd0: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x322fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_322fd4:
    // 0x322fd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x322fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_322fd8:
    // 0x322fd8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x322fd8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_322fdc:
    // 0x322fdc: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x322fdcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_322fe0:
    // 0x322fe0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x322fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_322fe4:
    // 0x322fe4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x322fe4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_322fe8:
    // 0x322fe8: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x322fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_322fec:
    // 0x322fec: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_322ff0:
    if (ctx->pc == 0x322FF0u) {
        ctx->pc = 0x322FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FECu;
        // 0x322ff0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FF4u;
        goto label_322ff4;
    }
    ctx->pc = 0x322FECu;
    {
        const bool branch_taken_0x322fec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x322FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FECu;
        // 0x322ff0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322fec) {
            ctx->pc = 0x322FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322fd0;
        }
    }
    ctx->pc = 0x322FF4u;
label_322ff4:
    // 0x322ff4: 0x10000075  b           . + 4 + (0x75 << 2)
label_322ff8:
    if (ctx->pc == 0x322FF8u) {
        ctx->pc = 0x322FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF4u;
        // 0x322ff8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x322FFCu;
        goto label_322ffc;
    }
    ctx->pc = 0x322FF4u;
    {
        const bool branch_taken_0x322ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x322FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x322FF4u;
        // 0x322ff8: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x322ff4) {
            ctx->pc = 0x3231CCu;
            goto label_3231cc;
        }
    }
    ctx->pc = 0x322FFCu;
label_322ffc:
    // 0x322ffc: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x322ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_323000:
    // 0x323000: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_323004:
    if (ctx->pc == 0x323004u) {
        ctx->pc = 0x323004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323000u;
        // 0x323004: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x323008u;
        goto label_323008;
    }
    ctx->pc = 0x323000u;
    {
        const bool branch_taken_0x323000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323000u;
        // 0x323004: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323000) {
            ctx->pc = 0x323014u;
            goto label_323014;
        }
    }
    ctx->pc = 0x323008u;
label_323008:
    // 0x323008: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x323008u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_32300c:
    // 0x32300c: 0x10000006  b           . + 4 + (0x6 << 2)
label_323010:
    if (ctx->pc == 0x323010u) {
        ctx->pc = 0x323010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32300Cu;
        // 0x323010: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323014u;
        goto label_323014;
    }
    ctx->pc = 0x32300Cu;
    {
        const bool branch_taken_0x32300c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32300Cu;
        // 0x323010: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32300c) {
            ctx->pc = 0x323028u;
            goto label_323028;
        }
    }
    ctx->pc = 0x323014u;
label_323014:
    // 0x323014: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_323018:
    if (ctx->pc == 0x323018u) {
        ctx->pc = 0x323018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323014u;
        // 0x323018: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32301Cu;
        goto label_32301c;
    }
    ctx->pc = 0x323014u;
    {
        const bool branch_taken_0x323014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323014u;
        // 0x323018: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323014) {
            ctx->pc = 0x323024u;
            goto label_323024;
        }
    }
    ctx->pc = 0x32301Cu;
label_32301c:
    // 0x32301c: 0x10000002  b           . + 4 + (0x2 << 2)
label_323020:
    if (ctx->pc == 0x323020u) {
        ctx->pc = 0x323020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32301Cu;
        // 0x323020: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323024u;
        goto label_323024;
    }
    ctx->pc = 0x32301Cu;
    {
        const bool branch_taken_0x32301c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32301Cu;
        // 0x323020: 0x87d0fff8  lh          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32301c) {
            ctx->pc = 0x323028u;
            goto label_323028;
        }
    }
    ctx->pc = 0x323024u;
label_323024:
    // 0x323024: 0x8fd0fff8  lw          $s0, -0x8($fp)
    ctx->pc = 0x323024u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_323028:
    // 0x323028: 0x600000d  bltz        $s0, . + 4 + (0xD << 2)
label_32302c:
    if (ctx->pc == 0x32302Cu) {
        ctx->pc = 0x32302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323028u;
        // 0x32302c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323030u;
        goto label_323030;
    }
    ctx->pc = 0x323028u;
    {
        const bool branch_taken_0x323028 = (GPR_S64(ctx, 16) < 0);
        ctx->pc = 0x32302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323028u;
        // 0x32302c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323028) {
            ctx->pc = 0x323060u;
            goto label_323060;
        }
    }
    ctx->pc = 0x323030u;
label_323030:
    // 0x323030: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x323030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
label_323034:
    // 0x323034: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_323038:
    if (ctx->pc == 0x323038u) {
        ctx->pc = 0x323038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323034u;
        // 0x323038: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32303Cu;
        goto label_32303c;
    }
    ctx->pc = 0x323034u;
    {
        const bool branch_taken_0x323034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323034u;
        // 0x323038: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323034) {
            ctx->pc = 0x323048u;
            goto label_323048;
        }
    }
    ctx->pc = 0x32303Cu;
label_32303c:
    // 0x32303c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32303cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323040:
    // 0x323040: 0x1000000a  b           . + 4 + (0xA << 2)
label_323044:
    if (ctx->pc == 0x323044u) {
        ctx->pc = 0x323044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323040u;
        // 0x323044: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323048u;
        goto label_323048;
    }
    ctx->pc = 0x323040u;
    {
        const bool branch_taken_0x323040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323040u;
        // 0x323044: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323040) {
            ctx->pc = 0x32306Cu;
            goto label_32306c;
        }
    }
    ctx->pc = 0x323048u;
label_323048:
    // 0x323048: 0x32a20008  andi        $v0, $s5, 0x8
    ctx->pc = 0x323048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)8);
label_32304c:
    // 0x32304c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_323050:
    if (ctx->pc == 0x323050u) {
        ctx->pc = 0x323050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32304Cu;
        // 0x323050: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323054u;
        goto label_323054;
    }
    ctx->pc = 0x32304Cu;
    {
        const bool branch_taken_0x32304c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32304Cu;
        // 0x323050: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32304c) {
            ctx->pc = 0x323070u;
            goto label_323070;
        }
    }
    ctx->pc = 0x323054u;
label_323054:
    // 0x323054: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x323054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323058:
    // 0x323058: 0x10000004  b           . + 4 + (0x4 << 2)
label_32305c:
    if (ctx->pc == 0x32305Cu) {
        ctx->pc = 0x32305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323058u;
        // 0x32305c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323060u;
        goto label_323060;
    }
    ctx->pc = 0x323058u;
    {
        const bool branch_taken_0x323058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32305Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323058u;
        // 0x32305c: 0xafa40054  sw          $a0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323058) {
            ctx->pc = 0x32306Cu;
            goto label_32306c;
        }
    }
    ctx->pc = 0x323060u;
label_323060:
    // 0x323060: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x323060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_323064:
    // 0x323064: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x323064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323068:
    // 0x323068: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x323068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
label_32306c:
    // 0x32306c: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x32306cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_323070:
    // 0x323070: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_323074:
    if (ctx->pc == 0x323074u) {
        ctx->pc = 0x323074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323070u;
        // 0x323074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323078u;
        goto label_323078;
    }
    ctx->pc = 0x323070u;
    {
        const bool branch_taken_0x323070 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323070u;
        // 0x323074: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323070) {
            ctx->pc = 0x3230A4u;
            goto label_3230a4;
        }
    }
    ctx->pc = 0x323078u;
label_323078:
    // 0x323078: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x323078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_32307c:
    // 0x32307c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_323080:
    if (ctx->pc == 0x323080u) {
        ctx->pc = 0x323080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32307Cu;
        // 0x323080: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323084u;
        goto label_323084;
    }
    ctx->pc = 0x32307Cu;
    {
        const bool branch_taken_0x32307c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32307Cu;
        // 0x323080: 0x8fa3004c  lw          $v1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32307c) {
            ctx->pc = 0x32308Cu;
            goto label_32308c;
        }
    }
    ctx->pc = 0x323084u;
label_323084:
    // 0x323084: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
label_323088:
    if (ctx->pc == 0x323088u) {
        ctx->pc = 0x323088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323084u;
        // 0x323088: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32308Cu;
        goto label_32308c;
    }
    ctx->pc = 0x323084u;
    {
        const bool branch_taken_0x323084 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x323088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323084u;
        // 0x323088: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323084) {
            ctx->pc = 0x323100u;
            goto label_323100;
        }
    }
    ctx->pc = 0x32308Cu;
label_32308c:
    // 0x32308c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x32308cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_323090:
    // 0x323090: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x323090u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323094:
    // 0x323094: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323094u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323098:
    // 0x323098: 0x2471ffff  addiu       $s1, $v1, -0x1
    ctx->pc = 0x323098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_32309c:
    // 0x32309c: 0x10000019  b           . + 4 + (0x19 << 2)
label_3230a0:
    if (ctx->pc == 0x3230A0u) {
        ctx->pc = 0x3230A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32309Cu;
        // 0x3230a0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230A4u;
        goto label_3230a4;
    }
    ctx->pc = 0x32309Cu;
    {
        const bool branch_taken_0x32309c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32309Cu;
        // 0x3230a0: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32309c) {
            ctx->pc = 0x323104u;
            goto label_323104;
        }
    }
    ctx->pc = 0x3230A4u;
label_3230a4:
    // 0x3230a4: 0x10182f  dsubu       $v1, $zero, $s0
    ctx->pc = 0x3230a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
label_3230a8:
    // 0x3230a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x3230a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3230ac:
    // 0x3230ac: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x3230acu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3));
label_3230b0:
    // 0x3230b0: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_3230b4:
    if (ctx->pc == 0x3230B4u) {
        ctx->pc = 0x3230B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B0u;
        // 0x3230b4: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230B8u;
        goto label_3230b8;
    }
    ctx->pc = 0x3230B0u;
    {
        const bool branch_taken_0x3230b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230B0u;
        // 0x3230b4: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230b0) {
            ctx->pc = 0x323100u;
            goto label_323100;
        }
    }
    ctx->pc = 0x3230B8u;
label_3230b8:
    // 0x3230b8: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3230b8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3230bc:
    // 0x3230bc: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3230bcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3230c0:
    // 0x3230c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3230c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3230c4:
    // 0x3230c4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3230c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3230c8:
    // 0x3230c8: 0xc0ca4d8  jal         func_329360
label_3230cc:
    if (ctx->pc == 0x3230CCu) {
        ctx->pc = 0x3230CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230C8u;
        // 0x3230cc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230D0u;
        goto label_3230d0;
    }
    ctx->pc = 0x3230C8u;
    SET_GPR_U32(ctx, 31, 0x3230D0u);
    ctx->pc = 0x3230CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230C8u;
    // 0x3230cc: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x329360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x329360u, 0x3230C8u, 0x3230D0u)) {
        return;
    }
    ctx->pc = 0x3230D0u;
label_3230d0:
    // 0x3230d0: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x3230d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_3230d4:
    // 0x3230d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3230d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3230d8:
    // 0x3230d8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3230d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3230dc:
    // 0x3230dc: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x3230dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3230e0:
    // 0x3230e0: 0xc0ca2b8  jal         func_328AE0
label_3230e4:
    if (ctx->pc == 0x3230E4u) {
        ctx->pc = 0x3230E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230E0u;
        // 0x3230e4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230E8u;
        goto label_3230e8;
    }
    ctx->pc = 0x3230E0u;
    SET_GPR_U32(ctx, 31, 0x3230E8u);
    ctx->pc = 0x3230E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3230E0u;
    // 0x3230e4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x328AE0u, 0x3230E0u, 0x3230E8u)) {
        return;
    }
    ctx->pc = 0x3230E8u;
label_3230e8:
    // 0x3230e8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3230e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3230ec:
    // 0x3230ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3230ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3230f0:
    // 0x3230f0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3230f4:
    if (ctx->pc == 0x3230F4u) {
        ctx->pc = 0x3230F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230F0u;
        // 0x3230f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3230F8u;
        goto label_3230f8;
    }
    ctx->pc = 0x3230F0u;
    {
        const bool branch_taken_0x3230f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3230F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230F0u;
        // 0x3230f4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230f0) {
            ctx->pc = 0x3230C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3230c0;
        }
    }
    ctx->pc = 0x3230F8u;
label_3230f8:
    // 0x3230f8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3230fc:
    if (ctx->pc == 0x3230FCu) {
        ctx->pc = 0x3230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230F8u;
        // 0x3230fc: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323100u;
        goto label_323100;
    }
    ctx->pc = 0x3230F8u;
    {
        const bool branch_taken_0x3230f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3230FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3230F8u;
        // 0x3230fc: 0x8fa5004c  lw          $a1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3230f8) {
            ctx->pc = 0x32310Cu;
            goto label_32310c;
        }
    }
    ctx->pc = 0x323100u;
label_323100:
    // 0x323100: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323100u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323104:
    // 0x323104: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323104u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323108:
    // 0x323108: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x323108u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_32310c:
    // 0x32310c: 0x100000e1  b           . + 4 + (0xE1 << 2)
label_323110:
    if (ctx->pc == 0x323110u) {
        ctx->pc = 0x323110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32310Cu;
        // 0x323110: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323114u;
        goto label_323114;
    }
    ctx->pc = 0x32310Cu;
    {
        const bool branch_taken_0x32310c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32310Cu;
        // 0x323110: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32310c) {
            ctx->pc = 0x323494u;
            goto label_323494;
        }
    }
    ctx->pc = 0x323114u;
label_323114:
    // 0x323114: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x323114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
label_323118:
    // 0x323118: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_32311c:
    if (ctx->pc == 0x32311Cu) {
        ctx->pc = 0x32311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323118u;
        // 0x32311c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x323120u;
        goto label_323120;
    }
    ctx->pc = 0x323118u;
    {
        const bool branch_taken_0x323118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32311Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323118u;
        // 0x32311c: 0x32a20080  andi        $v0, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323118) {
            ctx->pc = 0x32312Cu;
            goto label_32312c;
        }
    }
    ctx->pc = 0x323120u;
label_323120:
    // 0x323120: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x323120u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_323124:
    // 0x323124: 0x10000006  b           . + 4 + (0x6 << 2)
label_323128:
    if (ctx->pc == 0x323128u) {
        ctx->pc = 0x323128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323124u;
        // 0x323128: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32312Cu;
        goto label_32312c;
    }
    ctx->pc = 0x323124u;
    {
        const bool branch_taken_0x323124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323124u;
        // 0x323128: 0xdfd0fff8  ld          $s0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323124) {
            ctx->pc = 0x323140u;
            goto label_323140;
        }
    }
    ctx->pc = 0x32312Cu;
label_32312c:
    // 0x32312c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_323130:
    if (ctx->pc == 0x323130u) {
        ctx->pc = 0x323130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32312Cu;
        // 0x323130: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323134u;
        goto label_323134;
    }
    ctx->pc = 0x32312Cu;
    {
        const bool branch_taken_0x32312c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32312Cu;
        // 0x323130: 0x27de0008  addiu       $fp, $fp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32312c) {
            ctx->pc = 0x32313Cu;
            goto label_32313c;
        }
    }
    ctx->pc = 0x323134u;
label_323134:
    // 0x323134: 0x10000002  b           . + 4 + (0x2 << 2)
label_323138:
    if (ctx->pc == 0x323138u) {
        ctx->pc = 0x323138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323134u;
        // 0x323138: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32313Cu;
        goto label_32313c;
    }
    ctx->pc = 0x323134u;
    {
        const bool branch_taken_0x323134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323134u;
        // 0x323138: 0x97d0fff8  lhu         $s0, -0x8($fp) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323134) {
            ctx->pc = 0x323140u;
            goto label_323140;
        }
    }
    ctx->pc = 0x32313Cu;
label_32313c:
    // 0x32313c: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x32313cu;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_323140:
    // 0x323140: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_323144:
    if (ctx->pc == 0x323144u) {
        ctx->pc = 0x323144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323140u;
        // 0x323144: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323148u;
        goto label_323148;
    }
    ctx->pc = 0x323140u;
    {
        const bool branch_taken_0x323140 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323140u;
        // 0x323144: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323140) {
            ctx->pc = 0x323170u;
            goto label_323170;
        }
    }
    ctx->pc = 0x323148u;
label_323148:
    // 0x323148: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x323148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_32314c:
    // 0x32314c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_323150:
    if (ctx->pc == 0x323150u) {
        ctx->pc = 0x323150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32314Cu;
        // 0x323150: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323154u;
        goto label_323154;
    }
    ctx->pc = 0x32314Cu;
    {
        const bool branch_taken_0x32314c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32314Cu;
        // 0x323150: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32314c) {
            ctx->pc = 0x32315Cu;
            goto label_32315c;
        }
    }
    ctx->pc = 0x323154u;
label_323154:
    // 0x323154: 0x1100001a  beqz        $t0, . + 4 + (0x1A << 2)
label_323158:
    if (ctx->pc == 0x323158u) {
        ctx->pc = 0x323158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323154u;
        // 0x323158: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32315Cu;
        goto label_32315c;
    }
    ctx->pc = 0x323154u;
    {
        const bool branch_taken_0x323154 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x323158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323154u;
        // 0x323158: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323154) {
            ctx->pc = 0x3231C0u;
            goto label_3231c0;
        }
    }
    ctx->pc = 0x32315Cu;
label_32315c:
    // 0x32315c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x32315cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323160:
    // 0x323160: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x323160u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_323164:
    // 0x323164: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323164u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323168:
    // 0x323168: 0x10000016  b           . + 4 + (0x16 << 2)
label_32316c:
    if (ctx->pc == 0x32316Cu) {
        ctx->pc = 0x32316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323168u;
        // 0x32316c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323170u;
        goto label_323170;
    }
    ctx->pc = 0x323168u;
    {
        const bool branch_taken_0x323168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323168u;
        // 0x32316c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323168) {
            ctx->pc = 0x3231C4u;
            goto label_3231c4;
        }
    }
    ctx->pc = 0x323170u;
label_323170:
    // 0x323170: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x323170u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323174:
    // 0x323174: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323174u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323178:
    // 0x323178: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323178u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_32317c:
    // 0x32317c: 0x0  nop
    ctx->pc = 0x32317cu;
    // NOP
label_323180:
    // 0x323180: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323184:
    // 0x323184: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x323184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_323188:
    // 0x323188: 0xc0ca672  jal         func_3299C8
label_32318c:
    if (ctx->pc == 0x32318Cu) {
        ctx->pc = 0x32318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323188u;
        // 0x32318c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323190u;
        goto label_323190;
    }
    ctx->pc = 0x323188u;
    SET_GPR_U32(ctx, 31, 0x323190u);
    ctx->pc = 0x32318Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323188u;
    // 0x32318c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3299C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3299C8u, 0x323188u, 0x323190u)) {
        return;
    }
    ctx->pc = 0x323190u;
label_323190:
    // 0x323190: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x323190u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
label_323194:
    // 0x323194: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x323194u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_323198:
    // 0x323198: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x323198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_32319c:
    // 0x32319c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x32319cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3231a0:
    // 0x3231a0: 0xc07db0a  jal         func_1F6C28
label_3231a4:
    if (ctx->pc == 0x3231A4u) {
        ctx->pc = 0x3231A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231A0u;
        // 0x3231a4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231A8u;
        goto label_3231a8;
    }
    ctx->pc = 0x3231A0u;
    SET_GPR_U32(ctx, 31, 0x3231A8u);
    ctx->pc = 0x3231A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231A0u;
    // 0x3231a4: 0xa2220000  sb          $v0, 0x0($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6C28u, 0x3231A0u, 0x3231A8u)) {
        return;
    }
    ctx->pc = 0x3231A8u;
label_3231a8:
    // 0x3231a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3231a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3231ac:
    // 0x3231ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3231acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3231b0:
    // 0x3231b0: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3231b4:
    if (ctx->pc == 0x3231B4u) {
        ctx->pc = 0x3231B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B0u;
        // 0x3231b4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231B8u;
        goto label_3231b8;
    }
    ctx->pc = 0x3231B0u;
    {
        const bool branch_taken_0x3231b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3231B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B0u;
        // 0x3231b4: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231b0) {
            ctx->pc = 0x323180u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323180;
        }
    }
    ctx->pc = 0x3231B8u;
label_3231b8:
    // 0x3231b8: 0x10000004  b           . + 4 + (0x4 << 2)
label_3231bc:
    if (ctx->pc == 0x3231BCu) {
        ctx->pc = 0x3231BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B8u;
        // 0x3231bc: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231C0u;
        goto label_3231c0;
    }
    ctx->pc = 0x3231B8u;
    {
        const bool branch_taken_0x3231b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231B8u;
        // 0x3231bc: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231b8) {
            ctx->pc = 0x3231CCu;
            goto label_3231cc;
        }
    }
    ctx->pc = 0x3231C0u;
label_3231c0:
    // 0x3231c0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3231c0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3231c4:
    // 0x3231c4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3231c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3231c8:
    // 0x3231c8: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x3231c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3231cc:
    // 0x3231cc: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x3231ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3231d0:
    // 0x3231d0: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_3231d4:
    if (ctx->pc == 0x3231D4u) {
        ctx->pc = 0x3231D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231D0u;
        // 0x3231d4: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231D8u;
        goto label_3231d8;
    }
    ctx->pc = 0x3231D0u;
    {
        const bool branch_taken_0x3231d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3231D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231D0u;
        // 0x3231d4: 0x512023  subu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231d0) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x3231D8u;
label_3231d8:
    // 0x3231d8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3231d8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3231dc:
    // 0x3231dc: 0xc07df98  jal         func_1F7E60
label_3231e0:
    if (ctx->pc == 0x3231E0u) {
        ctx->pc = 0x3231E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231DCu;
        // 0x3231e0: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231E4u;
        goto label_3231e4;
    }
    ctx->pc = 0x3231DCu;
    SET_GPR_U32(ctx, 31, 0x3231E4u);
    ctx->pc = 0x3231E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3231DCu;
    // 0x3231e0: 0xdfc4fff8  ld          $a0, -0x8($fp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 30), 4294967288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x3231DCu, 0x3231E4u)) {
        return;
    }
    ctx->pc = 0x3231E4u;
label_3231e4:
    // 0x3231e4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3231e4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3231e8:
    // 0x3231e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3231e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3231ec:
    // 0x3231ec: 0x46006032  c.eq.s      $f12, $f0
    ctx->pc = 0x3231ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3231f0:
    // 0x3231f0: 0x0  nop
    ctx->pc = 0x3231f0u;
    // NOP
label_3231f4:
    // 0x3231f4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_3231f8:
    if (ctx->pc == 0x3231F8u) {
        ctx->pc = 0x3231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231F4u;
        // 0x3231f8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3231FCu;
        goto label_3231fc;
    }
    ctx->pc = 0x3231F4u;
    {
        const bool branch_taken_0x3231f4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3231F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3231F4u;
        // 0x3231f8: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3231f4) {
            ctx->pc = 0x32320Cu;
            goto label_32320c;
        }
    }
    ctx->pc = 0x3231FCu;
label_3231fc:
    // 0x3231fc: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3231fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_323200:
    // 0x323200: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323204:
    // 0x323204: 0x100001c7  b           . + 4 + (0x1C7 << 2)
label_323208:
    if (ctx->pc == 0x323208u) {
        ctx->pc = 0x323208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323204u;
        // 0x323208: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32320Cu;
        goto label_32320c;
    }
    ctx->pc = 0x323204u;
    {
        const bool branch_taken_0x323204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323204u;
        // 0x323208: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323204) {
            ctx->pc = 0x323924u;
            goto label_323924;
        }
    }
    ctx->pc = 0x32320Cu;
label_32320c:
    // 0x32320c: 0xc07e054  jal         func_1F8150
label_323210:
    if (ctx->pc == 0x323210u) {
        ctx->pc = 0x323210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32320Cu;
        // 0x323210: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323214u;
        goto label_323214;
    }
    ctx->pc = 0x32320Cu;
    SET_GPR_U32(ctx, 31, 0x323214u);
    ctx->pc = 0x323210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32320Cu;
    // 0x323210: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8150u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8150u, 0x32320Cu, 0x323214u)) {
        return;
    }
    ctx->pc = 0x323214u;
label_323214:
    // 0x323214: 0x8fa40044  lw          $a0, 0x44($sp)
    ctx->pc = 0x323214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323218:
    // 0x323218: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x323218u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_32321c:
    // 0x32321c: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x32321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323220:
    // 0x323220: 0xc0c8ab0  jal         func_322AC0
label_323224:
    if (ctx->pc == 0x323224u) {
        ctx->pc = 0x323224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323220u;
        // 0x323224: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323228u;
        goto label_323228;
    }
    ctx->pc = 0x323220u;
    SET_GPR_U32(ctx, 31, 0x323228u);
    ctx->pc = 0x323224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x323220u;
    // 0x323224: 0x8fa6005c  lw          $a2, 0x5C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x322AC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x322AC0u, 0x323220u, 0x323228u)) {
        return;
    }
    ctx->pc = 0x323228u;
label_323228:
    // 0x323228: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x323228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32322c:
    // 0x32322c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x32322cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_323230:
    // 0x323230: 0xafa50058  sw          $a1, 0x58($sp)
    ctx->pc = 0x323230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 5));
label_323234:
    // 0x323234: 0x100001c3  b           . + 4 + (0x1C3 << 2)
label_323238:
    if (ctx->pc == 0x323238u) {
        ctx->pc = 0x323238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323234u;
        // 0x323238: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32323Cu;
        goto label_32323c;
    }
    ctx->pc = 0x323234u;
    {
        const bool branch_taken_0x323234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323234u;
        // 0x323238: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323234) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x32323Cu;
label_32323c:
    // 0x32323c: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x32323cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_323240:
    // 0x323240: 0x8fc3fff8  lw          $v1, -0x8($fp)
    ctx->pc = 0x323240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_323244:
    // 0x323244: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_323248:
    if (ctx->pc == 0x323248u) {
        ctx->pc = 0x323248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323244u;
        // 0x323248: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x32324Cu;
        goto label_32324c;
    }
    ctx->pc = 0x323244u;
    {
        const bool branch_taken_0x323244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x323248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323244u;
        // 0x323248: 0x32a20020  andi        $v0, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x323244) {
            ctx->pc = 0x3232D0u;
            goto label_3232d0;
        }
    }
    ctx->pc = 0x32324Cu;
label_32324c:
    // 0x32324c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32324cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323250:
    // 0x323250: 0x24060028  addiu       $a2, $zero, 0x28
    ctx->pc = 0x323250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_323254:
    // 0x323254: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323258:
    // 0x323258: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_32325c:
    // 0x32325c: 0x60f809  jalr        $v1
label_323260:
    if (ctx->pc == 0x323260u) {
        ctx->pc = 0x323260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32325Cu;
        // 0x323260: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323264u;
        goto label_323264;
    }
    ctx->pc = 0x32325Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323264u);
        ctx->pc = 0x323260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32325Cu;
        // 0x323260: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32325Cu, 0x323264u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323264u;
label_323264:
    // 0x323264: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323268:
    // 0x323268: 0x2406006e  addiu       $a2, $zero, 0x6E
    ctx->pc = 0x323268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_32326c:
    // 0x32326c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32326cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323270:
    // 0x323270: 0x60f809  jalr        $v1
label_323274:
    if (ctx->pc == 0x323274u) {
        ctx->pc = 0x323274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323270u;
        // 0x323274: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323278u;
        goto label_323278;
    }
    ctx->pc = 0x323270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323278u);
        ctx->pc = 0x323274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323270u;
        // 0x323274: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323270u, 0x323278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323278u;
label_323278:
    // 0x323278: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_32327c:
    // 0x32327c: 0x24060075  addiu       $a2, $zero, 0x75
    ctx->pc = 0x32327cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_323280:
    // 0x323280: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323284:
    // 0x323284: 0x60f809  jalr        $v1
label_323288:
    if (ctx->pc == 0x323288u) {
        ctx->pc = 0x323288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323284u;
        // 0x323288: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32328Cu;
        goto label_32328c;
    }
    ctx->pc = 0x323284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32328Cu);
        ctx->pc = 0x323288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323284u;
        // 0x323288: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323284u, 0x32328Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32328Cu;
label_32328c:
    // 0x32328c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32328cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323290:
    // 0x323290: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x323290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_323294:
    // 0x323294: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323298:
    // 0x323298: 0x60f809  jalr        $v1
label_32329c:
    if (ctx->pc == 0x32329Cu) {
        ctx->pc = 0x32329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323298u;
        // 0x32329c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232A0u;
        goto label_3232a0;
    }
    ctx->pc = 0x323298u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3232A0u);
        ctx->pc = 0x32329Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323298u;
        // 0x32329c: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323298u, 0x3232A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3232A0u;
label_3232a0:
    // 0x3232a0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3232a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3232a4:
    // 0x3232a4: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x3232a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_3232a8:
    // 0x3232a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3232a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3232ac:
    // 0x3232ac: 0x60f809  jalr        $v1
label_3232b0:
    if (ctx->pc == 0x3232B0u) {
        ctx->pc = 0x3232B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232ACu;
        // 0x3232b0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232B4u;
        goto label_3232b4;
    }
    ctx->pc = 0x3232ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3232B4u);
        ctx->pc = 0x3232B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232ACu;
        // 0x3232b0: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232ACu, 0x3232B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3232B4u;
label_3232b4:
    // 0x3232b4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3232b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3232b8:
    // 0x3232b8: 0x24060029  addiu       $a2, $zero, 0x29
    ctx->pc = 0x3232b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_3232bc:
    // 0x3232bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3232bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3232c0:
    // 0x3232c0: 0x60f809  jalr        $v1
label_3232c4:
    if (ctx->pc == 0x3232C4u) {
        ctx->pc = 0x3232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C0u;
        // 0x3232c4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232C8u;
        goto label_3232c8;
    }
    ctx->pc = 0x3232C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3232C8u);
        ctx->pc = 0x3232C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C0u;
        // 0x3232c4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3232C0u, 0x3232C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3232C8u;
label_3232c8:
    // 0x3232c8: 0x1000019e  b           . + 4 + (0x19E << 2)
label_3232cc:
    if (ctx->pc == 0x3232CCu) {
        ctx->pc = 0x3232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C8u;
        // 0x3232cc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232D0u;
        goto label_3232d0;
    }
    ctx->pc = 0x3232C8u;
    {
        const bool branch_taken_0x3232c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232C8u;
        // 0x3232cc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232c8) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x3232D0u;
label_3232d0:
    // 0x3232d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3232d4:
    if (ctx->pc == 0x3232D4u) {
        ctx->pc = 0x3232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D0u;
        // 0x3232d4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232D8u;
        goto label_3232d8;
    }
    ctx->pc = 0x3232D0u;
    {
        const bool branch_taken_0x3232d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D0u;
        // 0x3232d4: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232d0) {
            ctx->pc = 0x323330u;
            goto label_323330;
        }
    }
    ctx->pc = 0x3232D8u;
label_3232d8:
    // 0x3232d8: 0x19000010  blez        $t0, . + 4 + (0x10 << 2)
label_3232dc:
    if (ctx->pc == 0x3232DCu) {
        ctx->pc = 0x3232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D8u;
        // 0x3232dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232E0u;
        goto label_3232e0;
    }
    ctx->pc = 0x3232D8u;
    {
        const bool branch_taken_0x3232d8 = (GPR_S64(ctx, 8) <= 0);
        ctx->pc = 0x3232DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232D8u;
        // 0x3232dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232d8) {
            ctx->pc = 0x32331Cu;
            goto label_32331c;
        }
    }
    ctx->pc = 0x3232E0u;
label_3232e0:
    // 0x3232e0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x3232e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3232e4:
    // 0x3232e4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3232e8:
    if (ctx->pc == 0x3232E8u) {
        ctx->pc = 0x3232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232E4u;
        // 0x3232e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3232ECu;
        goto label_3232ec;
    }
    ctx->pc = 0x3232E4u;
    {
        const bool branch_taken_0x3232e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3232E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3232E4u;
        // 0x3232e8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3232e4) {
            ctx->pc = 0x32331Cu;
            goto label_32331c;
        }
    }
    ctx->pc = 0x3232ECu;
label_3232ec:
    // 0x3232ec: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3232ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3232f0:
    // 0x3232f0: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3232f0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3232f4:
    // 0x3232f4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3232f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3232f8:
    // 0x3232f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3232f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3232fc:
    // 0x3232fc: 0x208102a  slt         $v0, $s0, $t0
    ctx->pc = 0x3232fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_323300:
    // 0x323300: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_323304:
    if (ctx->pc == 0x323304u) {
        ctx->pc = 0x323304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323300u;
        // 0x323304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323308u;
        goto label_323308;
    }
    ctx->pc = 0x323300u;
    {
        const bool branch_taken_0x323300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323300u;
        // 0x323304: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323300) {
            ctx->pc = 0x323378u;
            goto label_323378;
        }
    }
    ctx->pc = 0x323308u;
label_323308:
    // 0x323308: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x323308u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_32330c:
    // 0x32330c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_323310:
    if (ctx->pc == 0x323310u) {
        ctx->pc = 0x323310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32330Cu;
        // 0x323310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323314u;
        goto label_323314;
    }
    ctx->pc = 0x32330Cu;
    {
        const bool branch_taken_0x32330c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32330Cu;
        // 0x323310: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32330c) {
            ctx->pc = 0x3232F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3232f8;
        }
    }
    ctx->pc = 0x323314u;
label_323314:
    // 0x323314: 0x10000060  b           . + 4 + (0x60 << 2)
label_323318:
    if (ctx->pc == 0x323318u) {
        ctx->pc = 0x323318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323314u;
        // 0x323318: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32331Cu;
        goto label_32331c;
    }
    ctx->pc = 0x323314u;
    {
        const bool branch_taken_0x323314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323314u;
        // 0x323318: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323314) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x32331Cu;
label_32331c:
    // 0x32331c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x32331cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323320:
    // 0x323320: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323320u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323324:
    // 0x323324: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323324u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323328:
    // 0x323328: 0x10000013  b           . + 4 + (0x13 << 2)
label_32332c:
    if (ctx->pc == 0x32332Cu) {
        ctx->pc = 0x32332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323328u;
        // 0x32332c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323330u;
        goto label_323330;
    }
    ctx->pc = 0x323328u;
    {
        const bool branch_taken_0x323328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32332Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323328u;
        // 0x32332c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323328) {
            ctx->pc = 0x323378u;
            goto label_323378;
        }
    }
    ctx->pc = 0x323330u;
label_323330:
    // 0x323330: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x323330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_323334:
    // 0x323334: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_323338:
    if (ctx->pc == 0x323338u) {
        ctx->pc = 0x323338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323334u;
        // 0x323338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32333Cu;
        goto label_32333c;
    }
    ctx->pc = 0x323334u;
    {
        const bool branch_taken_0x323334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323334u;
        // 0x323338: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323334) {
            ctx->pc = 0x32336Cu;
            goto label_32336c;
        }
    }
    ctx->pc = 0x32333Cu;
label_32333c:
    // 0x32333c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x32333cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323340:
    // 0x323340: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323340u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323344:
    // 0x323344: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323344u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323348:
    // 0x323348: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x323348u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32334c:
    // 0x32334c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x32334cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_323350:
    // 0x323350: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x323350u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_323354:
    // 0x323354: 0x0  nop
    ctx->pc = 0x323354u;
    // NOP
label_323358:
    // 0x323358: 0x0  nop
    ctx->pc = 0x323358u;
    // NOP
label_32335c:
    // 0x32335c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_323360:
    if (ctx->pc == 0x323360u) {
        ctx->pc = 0x323364u;
        goto label_323364;
    }
    ctx->pc = 0x32335Cu;
    {
        const bool branch_taken_0x32335c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x32335c) {
            ctx->pc = 0x323348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323348;
        }
    }
    ctx->pc = 0x323364u;
label_323364:
    // 0x323364: 0x1000004c  b           . + 4 + (0x4C << 2)
label_323368:
    if (ctx->pc == 0x323368u) {
        ctx->pc = 0x323368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323364u;
        // 0x323368: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32336Cu;
        goto label_32336c;
    }
    ctx->pc = 0x323364u;
    {
        const bool branch_taken_0x323364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323364u;
        // 0x323368: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323364) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x32336Cu;
label_32336c:
    // 0x32336c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x32336cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323370:
    // 0x323370: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323370u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323374:
    // 0x323374: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323374u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323378:
    // 0x323378: 0x10000047  b           . + 4 + (0x47 << 2)
label_32337c:
    if (ctx->pc == 0x32337Cu) {
        ctx->pc = 0x32337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323378u;
        // 0x32337c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323380u;
        goto label_323380;
    }
    ctx->pc = 0x323378u;
    {
        const bool branch_taken_0x323378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323378u;
        // 0x32337c: 0x60902d  daddu       $s2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323378) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x323380u;
label_323380:
    // 0x323380: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x323380u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_323384:
    // 0x323384: 0x8fb1004c  lw          $s1, 0x4C($sp)
    ctx->pc = 0x323384u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_323388:
    // 0x323388: 0x83d0fff8  lb          $s0, -0x8($fp)
    ctx->pc = 0x323388u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_32338c:
    // 0x32338c: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x32338cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_323390:
    // 0x323390: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x323390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323394:
    // 0x323394: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x323394u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323398:
    // 0x323398: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x323398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_32339c:
    // 0x32339c: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x32339cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3233a0:
    // 0x3233a0: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3233a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3233a4:
    // 0x3233a4: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x3233a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_3233a8:
    // 0x3233a8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3233a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3233ac:
    // 0x3233ac: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x3233acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_3233b0:
    // 0x3233b0: 0x10000038  b           . + 4 + (0x38 << 2)
label_3233b4:
    if (ctx->pc == 0x3233B4u) {
        ctx->pc = 0x3233B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233B0u;
        // 0x3233b4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233B8u;
        goto label_3233b8;
    }
    ctx->pc = 0x3233B0u;
    {
        const bool branch_taken_0x3233b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233B0u;
        // 0x3233b4: 0x26320001  addiu       $s2, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233b0) {
            ctx->pc = 0x323494u;
            goto label_323494;
        }
    }
    ctx->pc = 0x3233B8u;
label_3233b8:
    // 0x3233b8: 0x27de0008  addiu       $fp, $fp, 0x8
    ctx->pc = 0x3233b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 8));
label_3233bc:
    // 0x3233bc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3233bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3233c0:
    // 0x3233c0: 0x9fd0fff8  lwu         $s0, -0x8($fp)
    ctx->pc = 0x3233c0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 30), 4294967288)));
label_3233c4:
    // 0x3233c4: 0x244425c0  addiu       $a0, $v0, 0x25C0
    ctx->pc = 0x3233c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9664));
label_3233c8:
    // 0x3233c8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_3233cc:
    if (ctx->pc == 0x3233CCu) {
        ctx->pc = 0x3233CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233C8u;
        // 0x3233cc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233D0u;
        goto label_3233d0;
    }
    ctx->pc = 0x3233C8u;
    {
        const bool branch_taken_0x3233c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3233CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233C8u;
        // 0x3233cc: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233c8) {
            ctx->pc = 0x3233F8u;
            goto label_3233f8;
        }
    }
    ctx->pc = 0x3233D0u;
label_3233d0:
    // 0x3233d0: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x3233d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
label_3233d4:
    // 0x3233d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3233d8:
    if (ctx->pc == 0x3233D8u) {
        ctx->pc = 0x3233D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233D4u;
        // 0x3233d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233DCu;
        goto label_3233dc;
    }
    ctx->pc = 0x3233D4u;
    {
        const bool branch_taken_0x3233d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233D4u;
        // 0x3233d8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233d4) {
            ctx->pc = 0x3233E4u;
            goto label_3233e4;
        }
    }
    ctx->pc = 0x3233DCu;
label_3233dc:
    // 0x3233dc: 0x11000015  beqz        $t0, . + 4 + (0x15 << 2)
label_3233e0:
    if (ctx->pc == 0x3233E0u) {
        ctx->pc = 0x3233E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233DCu;
        // 0x3233e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233E4u;
        goto label_3233e4;
    }
    ctx->pc = 0x3233DCu;
    {
        const bool branch_taken_0x3233dc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233DCu;
        // 0x3233e0: 0x26d70001  addiu       $s7, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233dc) {
            ctx->pc = 0x323434u;
            goto label_323434;
        }
    }
    ctx->pc = 0x3233E4u;
label_3233e4:
    // 0x3233e4: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3233e4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3233e8:
    // 0x3233e8: 0xa2220000  sb          $v0, 0x0($s1)
    ctx->pc = 0x3233e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 2));
label_3233ec:
    // 0x3233ec: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3233ecu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_3233f0:
    // 0x3233f0: 0x10000011  b           . + 4 + (0x11 << 2)
label_3233f4:
    if (ctx->pc == 0x3233F4u) {
        ctx->pc = 0x3233F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233F0u;
        // 0x3233f4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3233F8u;
        goto label_3233f8;
    }
    ctx->pc = 0x3233F0u;
    {
        const bool branch_taken_0x3233f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3233F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3233F0u;
        // 0x3233f4: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3233f0) {
            ctx->pc = 0x323438u;
            goto label_323438;
        }
    }
    ctx->pc = 0x3233F8u;
label_3233f8:
    // 0x3233f8: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x3233f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_3233fc:
    // 0x3233fc: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x3233fcu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323400:
    // 0x323400: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323400u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323404:
    // 0x323404: 0x0  nop
    ctx->pc = 0x323404u;
    // NOP
label_323408:
    // 0x323408: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x323408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
label_32340c:
    // 0x32340c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x32340cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_323410:
    // 0x323410: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x323410u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_323414:
    // 0x323414: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x323414u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
label_323418:
    // 0x323418: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x323418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32341c:
    // 0x32341c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x32341cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_323420:
    // 0x323420: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x323420u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_323424:
    // 0x323424: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_323428:
    if (ctx->pc == 0x323428u) {
        ctx->pc = 0x323428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323424u;
        // 0x323428: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32342Cu;
        goto label_32342c;
    }
    ctx->pc = 0x323424u;
    {
        const bool branch_taken_0x323424 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323424u;
        // 0x323428: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323424) {
            ctx->pc = 0x323408u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323408;
        }
    }
    ctx->pc = 0x32342Cu;
label_32342c:
    // 0x32342c: 0x10000004  b           . + 4 + (0x4 << 2)
label_323430:
    if (ctx->pc == 0x323430u) {
        ctx->pc = 0x323430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32342Cu;
        // 0x323430: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323434u;
        goto label_323434;
    }
    ctx->pc = 0x32342Cu;
    {
        const bool branch_taken_0x32342c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32342Cu;
        // 0x323430: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32342c) {
            ctx->pc = 0x323440u;
            goto label_323440;
        }
    }
    ctx->pc = 0x323434u;
label_323434:
    // 0x323434: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323434u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323438:
    // 0x323438: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323438u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_32343c:
    // 0x32343c: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x32343cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_323440:
    // 0x323440: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x323440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_323444:
    // 0x323444: 0xa3a20020  sb          $v0, 0x20($sp)
    ctx->pc = 0x323444u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 2));
label_323448:
    // 0x323448: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x323448u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_32344c:
    // 0x32344c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x32344cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_323450:
    // 0x323450: 0xa3a30021  sb          $v1, 0x21($sp)
    ctx->pc = 0x323450u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 33), (uint8_t)GPR_U32(ctx, 3));
label_323454:
    // 0x323454: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x323454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_323458:
    // 0x323458: 0x512023  subu        $a0, $v0, $s1
    ctx->pc = 0x323458u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_32345c:
    // 0x32345c: 0x1000000e  b           . + 4 + (0xE << 2)
label_323460:
    if (ctx->pc == 0x323460u) {
        ctx->pc = 0x323460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32345Cu;
        // 0x323460: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323464u;
        goto label_323464;
    }
    ctx->pc = 0x32345Cu;
    {
        const bool branch_taken_0x32345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32345Cu;
        // 0x323460: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32345c) {
            ctx->pc = 0x323498u;
            goto label_323498;
        }
    }
    ctx->pc = 0x323464u;
label_323464:
    // 0x323464: 0x61600  sll         $v0, $a2, 24
    ctx->pc = 0x323464u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
label_323468:
    // 0x323468: 0x10400135  beqz        $v0, . + 4 + (0x135 << 2)
label_32346c:
    if (ctx->pc == 0x32346Cu) {
        ctx->pc = 0x32346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323468u;
        // 0x32346c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323470u;
        goto label_323470;
    }
    ctx->pc = 0x323468u;
    {
        const bool branch_taken_0x323468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32346Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323468u;
        // 0x32346c: 0x8fb1004c  lw          $s1, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323468) {
            ctx->pc = 0x323940u;
            goto label_323940;
        }
    }
    ctx->pc = 0x323470u;
label_323470:
    // 0x323470: 0x36b50100  ori         $s5, $s5, 0x100
    ctx->pc = 0x323470u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)256);
label_323474:
    // 0x323474: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x323474u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_323478:
    // 0x323478: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x323478u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_32347c:
    // 0x32347c: 0xa2250000  sb          $a1, 0x0($s1)
    ctx->pc = 0x32347cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 5));
label_323480:
    // 0x323480: 0x32b40100  andi        $s4, $s5, 0x100
    ctx->pc = 0x323480u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)256);
label_323484:
    // 0x323484: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x323484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_323488:
    // 0x323488: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x323488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_32348c:
    // 0x32348c: 0x26320001  addiu       $s2, $s1, 0x1
    ctx->pc = 0x32348cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_323490:
    // 0x323490: 0x32b30001  andi        $s3, $s5, 0x1
    ctx->pc = 0x323490u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_323494:
    // 0x323494: 0xb12023  subu        $a0, $a1, $s1
    ctx->pc = 0x323494u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_323498:
    // 0x323498: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x323498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_32349c:
    // 0x32349c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x32349cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3234a0:
    // 0x3234a0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x3234a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3234a4:
    // 0x3234a4: 0x1044023  subu        $t0, $t0, $a0
    ctx->pc = 0x3234a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_3234a8:
    // 0x3234a8: 0x2400a  movz        $t0, $zero, $v0
    ctx->pc = 0x3234a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0));
label_3234ac:
    // 0x3234ac: 0xa41823  subu        $v1, $a1, $a0
    ctx->pc = 0x3234acu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_3234b0:
    // 0x3234b0: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x3234b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_3234b4:
    // 0x3234b4: 0x2448821  addu        $s1, $s2, $a0
    ctx->pc = 0x3234b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_3234b8:
    // 0x3234b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x3234b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3234bc:
    // 0x3234bc: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x3234bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_3234c0:
    // 0x3234c0: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3234c4:
    if (ctx->pc == 0x3234C4u) {
        ctx->pc = 0x3234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234C0u;
        // 0x3234c4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3234C8u;
        goto label_3234c8;
    }
    ctx->pc = 0x3234C0u;
    {
        const bool branch_taken_0x3234c0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234C0u;
        // 0x3234c4: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234c0) {
            ctx->pc = 0x3234E4u;
            goto label_3234e4;
        }
    }
    ctx->pc = 0x3234C8u;
label_3234c8:
    // 0x3234c8: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x3234c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_3234cc:
    // 0x3234cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3234d0:
    if (ctx->pc == 0x3234D0u) {
        ctx->pc = 0x3234D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234CCu;
        // 0x3234d0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3234D4u;
        goto label_3234d4;
    }
    ctx->pc = 0x3234CCu;
    {
        const bool branch_taken_0x3234cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234CCu;
        // 0x3234d0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234cc) {
            ctx->pc = 0x323504u;
            goto label_323504;
        }
    }
    ctx->pc = 0x3234D4u;
label_3234d4:
    // 0x3234d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x3234d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3234d8:
    // 0x3234d8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3234d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3234dc:
    // 0x3234dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_3234e0:
    if (ctx->pc == 0x3234E0u) {
        ctx->pc = 0x3234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234DCu;
        // 0x3234e0: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3234E4u;
        goto label_3234e4;
    }
    ctx->pc = 0x3234DCu;
    {
        const bool branch_taken_0x3234dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3234E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234DCu;
        // 0x3234e0: 0x28820001  slti        $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234dc) {
            ctx->pc = 0x323500u;
            goto label_323500;
        }
    }
    ctx->pc = 0x3234E4u;
label_3234e4:
    // 0x3234e4: 0x32a30024  andi        $v1, $s5, 0x24
    ctx->pc = 0x3234e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)36);
label_3234e8:
    // 0x3234e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3234e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3234ec:
    // 0x3234ec: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_3234f0:
    if (ctx->pc == 0x3234F0u) {
        ctx->pc = 0x3234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234ECu;
        // 0x3234f0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3234F4u;
        goto label_3234f4;
    }
    ctx->pc = 0x3234ECu;
    {
        const bool branch_taken_0x3234ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3234F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3234ECu;
        // 0x3234f0: 0x24070020  addiu       $a3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3234ec) {
            ctx->pc = 0x323504u;
            goto label_323504;
        }
    }
    ctx->pc = 0x3234F4u;
label_3234f4:
    // 0x3234f4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3234f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3234f8:
    // 0x3234f8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x3234f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3234fc:
    // 0x3234fc: 0x28a20001  slti        $v0, $a1, 0x1
    ctx->pc = 0x3234fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_323500:
    // 0x323500: 0x62380a  movz        $a3, $v1, $v0
    ctx->pc = 0x323500u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3));
label_323504:
    // 0x323504: 0x12600042  beqz        $s3, . + 4 + (0x42 << 2)
label_323508:
    if (ctx->pc == 0x323508u) {
        ctx->pc = 0x323508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323504u;
        // 0x323508: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32350Cu;
        goto label_32350c;
    }
    ctx->pc = 0x323504u;
    {
        const bool branch_taken_0x323504 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x323508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323504u;
        // 0x323508: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323504) {
            ctx->pc = 0x323610u;
            goto label_323610;
        }
    }
    ctx->pc = 0x32350Cu;
label_32350c:
    // 0x32350c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_323510:
    if (ctx->pc == 0x323510u) {
        ctx->pc = 0x323510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32350Cu;
        // 0x323510: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323514u;
        goto label_323514;
    }
    ctx->pc = 0x32350Cu;
    {
        const bool branch_taken_0x32350c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32350Cu;
        // 0x323510: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32350c) {
            ctx->pc = 0x323564u;
            goto label_323564;
        }
    }
    ctx->pc = 0x323514u;
label_323514:
    // 0x323514: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x323514u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_323518:
    // 0x323518: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323518u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_32351c:
    // 0x32351c: 0x0  nop
    ctx->pc = 0x32351cu;
    // NOP
label_323520:
    // 0x323520: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x323520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_323524:
    // 0x323524: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323528:
    // 0x323528: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x323528u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_32352c:
    // 0x32352c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x32352cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_323530:
    // 0x323530: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323530u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323534:
    // 0x323534: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323538:
    // 0x323538: 0x60f809  jalr        $v1
label_32353c:
    if (ctx->pc == 0x32353Cu) {
        ctx->pc = 0x32353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323538u;
        // 0x32353c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323540u;
        goto label_323540;
    }
    ctx->pc = 0x323538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323540u);
        ctx->pc = 0x32353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323538u;
        // 0x32353c: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323538u, 0x323540u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323540u;
label_323540:
    // 0x323540: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_323544:
    // 0x323544: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x323544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323548:
    // 0x323548: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_32354c:
    // 0x32354c: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x32354cu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_323550:
    // 0x323550: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x323550u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_323554:
    // 0x323554: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_323558:
    if (ctx->pc == 0x323558u) {
        ctx->pc = 0x323558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323554u;
        // 0x323558: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32355Cu;
        goto label_32355c;
    }
    ctx->pc = 0x323554u;
    {
        const bool branch_taken_0x323554 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323554u;
        // 0x323558: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323554) {
            ctx->pc = 0x323520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323520;
        }
    }
    ctx->pc = 0x32355Cu;
label_32355c:
    // 0x32355c: 0x10000002  b           . + 4 + (0x2 << 2)
label_323560:
    if (ctx->pc == 0x323560u) {
        ctx->pc = 0x323564u;
        goto label_323564;
    }
    ctx->pc = 0x32355Cu;
    {
        const bool branch_taken_0x32355c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x32355c) {
            ctx->pc = 0x323568u;
            goto label_323568;
        }
    }
    ctx->pc = 0x323564u;
label_323564:
    // 0x323564: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323564u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323568:
    // 0x323568: 0x1900000d  blez        $t0, . + 4 + (0xD << 2)
label_32356c:
    if (ctx->pc == 0x32356Cu) {
        ctx->pc = 0x323570u;
        goto label_323570;
    }
    ctx->pc = 0x323568u;
    {
        const bool branch_taken_0x323568 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x323568) {
            ctx->pc = 0x3235A0u;
            goto label_3235a0;
        }
    }
    ctx->pc = 0x323570u;
label_323570:
    // 0x323570: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x323570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_323574:
    // 0x323574: 0x0  nop
    ctx->pc = 0x323574u;
    // NOP
label_323578:
    // 0x323578: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323578u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_32357c:
    // 0x32357c: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x32357cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_323580:
    // 0x323580: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323584:
    // 0x323584: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323588:
    // 0x323588: 0x60f809  jalr        $v1
label_32358c:
    if (ctx->pc == 0x32358Cu) {
        ctx->pc = 0x32358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323588u;
        // 0x32358c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323590u;
        goto label_323590;
    }
    ctx->pc = 0x323588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323590u);
        ctx->pc = 0x32358Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323588u;
        // 0x32358c: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323588u, 0x323590u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323590u;
label_323590:
    // 0x323590: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_323594:
    // 0x323594: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323598:
    // 0x323598: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_32359c:
    if (ctx->pc == 0x32359Cu) {
        ctx->pc = 0x32359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323598u;
        // 0x32359c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235A0u;
        goto label_3235a0;
    }
    ctx->pc = 0x323598u;
    {
        const bool branch_taken_0x323598 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x32359Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323598u;
        // 0x32359c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323598) {
            ctx->pc = 0x323578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323578;
        }
    }
    ctx->pc = 0x3235A0u;
label_3235a0:
    // 0x3235a0: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
label_3235a4:
    if (ctx->pc == 0x3235A4u) {
        ctx->pc = 0x3235A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235A0u;
        // 0x3235a4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235A8u;
        goto label_3235a8;
    }
    ctx->pc = 0x3235A0u;
    {
        const bool branch_taken_0x3235a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3235A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235A0u;
        // 0x3235a4: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235a0) {
            ctx->pc = 0x3235D8u;
            goto label_3235d8;
        }
    }
    ctx->pc = 0x3235A8u;
label_3235a8:
    // 0x3235a8: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3235a8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3235ac:
    // 0x3235ac: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3235acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3235b0:
    // 0x3235b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3235b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3235b4:
    // 0x3235b4: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3235b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3235b8:
    // 0x3235b8: 0x60f809  jalr        $v1
label_3235bc:
    if (ctx->pc == 0x3235BCu) {
        ctx->pc = 0x3235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235B8u;
        // 0x3235bc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235C0u;
        goto label_3235c0;
    }
    ctx->pc = 0x3235B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3235C0u);
        ctx->pc = 0x3235BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235B8u;
        // 0x3235bc: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3235B8u, 0x3235C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3235C0u;
label_3235c0:
    // 0x3235c0: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3235c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3235c4:
    // 0x3235c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3235c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3235c8:
    // 0x3235c8: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3235c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3235cc:
    // 0x3235cc: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3235d0:
    if (ctx->pc == 0x3235D0u) {
        ctx->pc = 0x3235D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235CCu;
        // 0x3235d0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235D4u;
        goto label_3235d4;
    }
    ctx->pc = 0x3235CCu;
    {
        const bool branch_taken_0x3235cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3235D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235CCu;
        // 0x3235d0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235cc) {
            ctx->pc = 0x3235A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3235a8;
        }
    }
    ctx->pc = 0x3235D4u;
label_3235d4:
    // 0x3235d4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3235d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3235d8:
    // 0x3235d8: 0x18a0ff16  blez        $a1, . + 4 + (-0xEA << 2)
label_3235dc:
    if (ctx->pc == 0x3235DCu) {
        ctx->pc = 0x3235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235D8u;
        // 0x3235dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235E0u;
        goto label_3235e0;
    }
    ctx->pc = 0x3235D8u;
    {
        const bool branch_taken_0x3235d8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3235DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235D8u;
        // 0x3235dc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3235d8) {
            ctx->pc = 0x323234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323234;
        }
    }
    ctx->pc = 0x3235E0u;
label_3235e0:
    // 0x3235e0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3235e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3235e4:
    // 0x3235e4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3235e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3235e8:
    // 0x3235e8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3235e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3235ec:
    // 0x3235ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3235ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3235f0:
    // 0x3235f0: 0x60f809  jalr        $v1
label_3235f4:
    if (ctx->pc == 0x3235F4u) {
        ctx->pc = 0x3235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235F0u;
        // 0x3235f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3235F8u;
        goto label_3235f8;
    }
    ctx->pc = 0x3235F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3235F8u);
        ctx->pc = 0x3235F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3235F0u;
        // 0x3235f4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3235F0u, 0x3235F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3235F8u;
label_3235f8:
    // 0x3235f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3235f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3235fc:
    // 0x3235fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3235fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323600:
    // 0x323600: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_323604:
    if (ctx->pc == 0x323604u) {
        ctx->pc = 0x323604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323600u;
        // 0x323604: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323608u;
        goto label_323608;
    }
    ctx->pc = 0x323600u;
    {
        const bool branch_taken_0x323600 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x323604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323600u;
        // 0x323604: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323600) {
            ctx->pc = 0x3235E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3235e0;
        }
    }
    ctx->pc = 0x323608u;
label_323608:
    // 0x323608: 0x100000ce  b           . + 4 + (0xCE << 2)
label_32360c:
    if (ctx->pc == 0x32360Cu) {
        ctx->pc = 0x32360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323608u;
        // 0x32360c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323610u;
        goto label_323610;
    }
    ctx->pc = 0x323608u;
    {
        const bool branch_taken_0x323608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32360Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323608u;
        // 0x32360c: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323608) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x323610u;
label_323610:
    // 0x323610: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x323610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
label_323614:
    // 0x323614: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_323618:
    if (ctx->pc == 0x323618u) {
        ctx->pc = 0x323618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323614u;
        // 0x323618: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32361Cu;
        goto label_32361c;
    }
    ctx->pc = 0x323614u;
    {
        const bool branch_taken_0x323614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x323618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323614u;
        // 0x323618: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323614) {
            ctx->pc = 0x3237F4u;
            goto label_3237f4;
        }
    }
    ctx->pc = 0x32361Cu;
label_32361c:
    // 0x32361c: 0x14e2002e  bne         $a3, $v0, . + 4 + (0x2E << 2)
label_323620:
    if (ctx->pc == 0x323620u) {
        ctx->pc = 0x323620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32361Cu;
        // 0x323620: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323624u;
        goto label_323624;
    }
    ctx->pc = 0x32361Cu;
    {
        const bool branch_taken_0x32361c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x323620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32361Cu;
        // 0x323620: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32361c) {
            ctx->pc = 0x3236D8u;
            goto label_3236d8;
        }
    }
    ctx->pc = 0x323624u;
label_323624:
    // 0x323624: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x323624u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323628:
    // 0x323628: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_32362c:
    if (ctx->pc == 0x32362Cu) {
        ctx->pc = 0x32362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323628u;
        // 0x32362c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323630u;
        goto label_323630;
    }
    ctx->pc = 0x323628u;
    {
        const bool branch_taken_0x323628 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x32362Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323628u;
        // 0x32362c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323628) {
            ctx->pc = 0x323684u;
            goto label_323684;
        }
    }
    ctx->pc = 0x323630u;
label_323630:
    // 0x323630: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x323630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_323634:
    // 0x323634: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323634u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323638:
    // 0x323638: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x323638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_32363c:
    // 0x32363c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32363cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323640:
    // 0x323640: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x323640u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_323644:
    // 0x323644: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323644u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_323648:
    // 0x323648: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_32364c:
    // 0x32364c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32364cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323650:
    // 0x323650: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x323650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_323654:
    // 0x323654: 0x60f809  jalr        $v1
label_323658:
    if (ctx->pc == 0x323658u) {
        ctx->pc = 0x323658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323654u;
        // 0x323658: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32365Cu;
        goto label_32365c;
    }
    ctx->pc = 0x323654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x32365Cu);
        ctx->pc = 0x323658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323654u;
        // 0x323658: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323654u, 0x32365Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x32365Cu;
label_32365c:
    // 0x32365c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x32365cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_323660:
    // 0x323660: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x323660u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323664:
    // 0x323664: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323668:
    // 0x323668: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x323668u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_32366c:
    // 0x32366c: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x32366cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_323670:
    // 0x323670: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x323670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_323674:
    // 0x323674: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_323678:
    if (ctx->pc == 0x323678u) {
        ctx->pc = 0x323678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323674u;
        // 0x323678: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32367Cu;
        goto label_32367c;
    }
    ctx->pc = 0x323674u;
    {
        const bool branch_taken_0x323674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323674u;
        // 0x323678: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323674) {
            ctx->pc = 0x323638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323638;
        }
    }
    ctx->pc = 0x32367Cu;
label_32367c:
    // 0x32367c: 0x10000003  b           . + 4 + (0x3 << 2)
label_323680:
    if (ctx->pc == 0x323680u) {
        ctx->pc = 0x323680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32367Cu;
        // 0x323680: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323684u;
        goto label_323684;
    }
    ctx->pc = 0x32367Cu;
    {
        const bool branch_taken_0x32367c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32367Cu;
        // 0x323680: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32367c) {
            ctx->pc = 0x32368Cu;
            goto label_32368c;
        }
    }
    ctx->pc = 0x323684u;
label_323684:
    // 0x323684: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323684u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323688:
    // 0x323688: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x323688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_32368c:
    // 0x32368c: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_323690:
    if (ctx->pc == 0x323690u) {
        ctx->pc = 0x323694u;
        goto label_323694;
    }
    ctx->pc = 0x32368Cu;
    {
        const bool branch_taken_0x32368c = (GPR_S64(ctx, 2) <= 0);
        if (branch_taken_0x32368c) {
            ctx->pc = 0x323784u;
            goto label_323784;
        }
    }
    ctx->pc = 0x323694u;
label_323694:
    // 0x323694: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x323694u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_323698:
    // 0x323698: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_32369c:
    // 0x32369c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32369cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3236a0:
    // 0x3236a0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3236a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3236a4:
    // 0x3236a4: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x3236a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_3236a8:
    // 0x3236a8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3236a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3236ac:
    // 0x3236ac: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3236acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_3236b0:
    // 0x3236b0: 0x60f809  jalr        $v1
label_3236b4:
    if (ctx->pc == 0x3236B4u) {
        ctx->pc = 0x3236B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236B0u;
        // 0x3236b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3236B8u;
        goto label_3236b8;
    }
    ctx->pc = 0x3236B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3236B8u);
        ctx->pc = 0x3236B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236B0u;
        // 0x3236b4: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3236B0u, 0x3236B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3236B8u;
label_3236b8:
    // 0x3236b8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3236b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3236bc:
    // 0x3236bc: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x3236bcu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3236c0:
    // 0x3236c0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3236c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3236c4:
    // 0x3236c4: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x3236c4u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3236c8:
    // 0x3236c8: 0x1600fff3  bnez        $s0, . + 4 + (-0xD << 2)
label_3236cc:
    if (ctx->pc == 0x3236CCu) {
        ctx->pc = 0x3236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236C8u;
        // 0x3236cc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3236D0u;
        goto label_3236d0;
    }
    ctx->pc = 0x3236C8u;
    {
        const bool branch_taken_0x3236c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3236CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236C8u;
        // 0x3236cc: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236c8) {
            ctx->pc = 0x323698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323698;
        }
    }
    ctx->pc = 0x3236D0u;
label_3236d0:
    // 0x3236d0: 0x1000002c  b           . + 4 + (0x2C << 2)
label_3236d4:
    if (ctx->pc == 0x3236D4u) {
        ctx->pc = 0x3236D8u;
        goto label_3236d8;
    }
    ctx->pc = 0x3236D0u;
    {
        const bool branch_taken_0x3236d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3236d0) {
            ctx->pc = 0x323784u;
            goto label_323784;
        }
    }
    ctx->pc = 0x3236D8u;
label_3236d8:
    // 0x3236d8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3236dc:
    if (ctx->pc == 0x3236DCu) {
        ctx->pc = 0x3236DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236D8u;
        // 0x3236dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3236E0u;
        goto label_3236e0;
    }
    ctx->pc = 0x3236D8u;
    {
        const bool branch_taken_0x3236d8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3236DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3236D8u;
        // 0x3236dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3236d8) {
            ctx->pc = 0x323730u;
            goto label_323730;
        }
    }
    ctx->pc = 0x3236E0u;
label_3236e0:
    // 0x3236e0: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x3236e0u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3236e4:
    // 0x3236e4: 0x0  nop
    ctx->pc = 0x3236e4u;
    // NOP
label_3236e8:
    // 0x3236e8: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3236e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3236ec:
    // 0x3236ec: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3236ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3236f0:
    // 0x3236f0: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3236f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3236f4:
    // 0x3236f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3236f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3236f8:
    // 0x3236f8: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3236f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3236fc:
    // 0x3236fc: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x3236fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_323700:
    // 0x323700: 0x60f809  jalr        $v1
label_323704:
    if (ctx->pc == 0x323704u) {
        ctx->pc = 0x323704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323700u;
        // 0x323704: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323708u;
        goto label_323708;
    }
    ctx->pc = 0x323700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323708u);
        ctx->pc = 0x323704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323700u;
        // 0x323704: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323700u, 0x323708u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323708u;
label_323708:
    // 0x323708: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32370c:
    // 0x32370c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x32370cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_323710:
    // 0x323710: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323714:
    // 0x323714: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x323714u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_323718:
    // 0x323718: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x323718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_32371c:
    // 0x32371c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x32371cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_323720:
    // 0x323720: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_323724:
    if (ctx->pc == 0x323724u) {
        ctx->pc = 0x323724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323720u;
        // 0x323724: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323728u;
        goto label_323728;
    }
    ctx->pc = 0x323720u;
    {
        const bool branch_taken_0x323720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323720u;
        // 0x323724: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323720) {
            ctx->pc = 0x3236E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3236e8;
        }
    }
    ctx->pc = 0x323728u;
label_323728:
    // 0x323728: 0x10000003  b           . + 4 + (0x3 << 2)
label_32372c:
    if (ctx->pc == 0x32372Cu) {
        ctx->pc = 0x32372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323728u;
        // 0x32372c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323730u;
        goto label_323730;
    }
    ctx->pc = 0x323728u;
    {
        const bool branch_taken_0x323728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32372Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323728u;
        // 0x32372c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323728) {
            ctx->pc = 0x323738u;
            goto label_323738;
        }
    }
    ctx->pc = 0x323730u;
label_323730:
    // 0x323730: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323730u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323734:
    // 0x323734: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x323734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323738:
    // 0x323738: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_32373c:
    if (ctx->pc == 0x32373Cu) {
        ctx->pc = 0x32373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323738u;
        // 0x32373c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323740u;
        goto label_323740;
    }
    ctx->pc = 0x323738u;
    {
        const bool branch_taken_0x323738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32373Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323738u;
        // 0x32373c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323738) {
            ctx->pc = 0x323784u;
            goto label_323784;
        }
    }
    ctx->pc = 0x323740u;
label_323740:
    // 0x323740: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x323740u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_323744:
    // 0x323744: 0x0  nop
    ctx->pc = 0x323744u;
    // NOP
label_323748:
    // 0x323748: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x323748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_32374c:
    // 0x32374c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32374cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323750:
    // 0x323750: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x323750u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_323754:
    // 0x323754: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323754u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_323758:
    // 0x323758: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323758u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_32375c:
    // 0x32375c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32375cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323760:
    // 0x323760: 0x60f809  jalr        $v1
label_323764:
    if (ctx->pc == 0x323764u) {
        ctx->pc = 0x323764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323760u;
        // 0x323764: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323768u;
        goto label_323768;
    }
    ctx->pc = 0x323760u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323768u);
        ctx->pc = 0x323764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323760u;
        // 0x323764: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323760u, 0x323768u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323768u;
label_323768:
    // 0x323768: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323768u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32376c:
    // 0x32376c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x32376cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323770:
    // 0x323770: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323770u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323774:
    // 0x323774: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x323774u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_323778:
    // 0x323778: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x323778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_32377c:
    // 0x32377c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_323780:
    if (ctx->pc == 0x323780u) {
        ctx->pc = 0x323780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32377Cu;
        // 0x323780: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323784u;
        goto label_323784;
    }
    ctx->pc = 0x32377Cu;
    {
        const bool branch_taken_0x32377c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32377Cu;
        // 0x323780: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32377c) {
            ctx->pc = 0x323748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323748;
        }
    }
    ctx->pc = 0x323784u;
label_323784:
    // 0x323784: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_323788:
    if (ctx->pc == 0x323788u) {
        ctx->pc = 0x32378Cu;
        goto label_32378c;
    }
    ctx->pc = 0x323784u;
    {
        const bool branch_taken_0x323784 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x323784) {
            ctx->pc = 0x3237B8u;
            goto label_3237b8;
        }
    }
    ctx->pc = 0x32378Cu;
label_32378c:
    // 0x32378c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x32378cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_323790:
    // 0x323790: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323794:
    // 0x323794: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x323794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_323798:
    // 0x323798: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323798u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_32379c:
    // 0x32379c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32379cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3237a0:
    // 0x3237a0: 0x60f809  jalr        $v1
label_3237a4:
    if (ctx->pc == 0x3237A4u) {
        ctx->pc = 0x3237A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237A0u;
        // 0x3237a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237A8u;
        goto label_3237a8;
    }
    ctx->pc = 0x3237A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3237A8u);
        ctx->pc = 0x3237A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237A0u;
        // 0x3237a4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3237A0u, 0x3237A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3237A8u;
label_3237a8:
    // 0x3237a8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3237a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3237ac:
    // 0x3237ac: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3237acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3237b0:
    // 0x3237b0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3237b4:
    if (ctx->pc == 0x3237B4u) {
        ctx->pc = 0x3237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237B0u;
        // 0x3237b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237B8u;
        goto label_3237b8;
    }
    ctx->pc = 0x3237B0u;
    {
        const bool branch_taken_0x3237b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237B0u;
        // 0x3237b4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237b0) {
            ctx->pc = 0x323790u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323790;
        }
    }
    ctx->pc = 0x3237B8u;
label_3237b8:
    // 0x3237b8: 0x52800062  beql        $s4, $zero, . + 4 + (0x62 << 2)
label_3237bc:
    if (ctx->pc == 0x3237BCu) {
        ctx->pc = 0x3237BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237B8u;
        // 0x3237bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237C0u;
        goto label_3237c0;
    }
    ctx->pc = 0x3237B8u;
    {
        const bool branch_taken_0x3237b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3237b8) {
            ctx->pc = 0x3237BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3237B8u;
            // 0x3237bc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x3237C0u;
label_3237c0:
    // 0x3237c0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3237c0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3237c4:
    // 0x3237c4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3237c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3237c8:
    // 0x3237c8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3237c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3237cc:
    // 0x3237cc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3237ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3237d0:
    // 0x3237d0: 0x60f809  jalr        $v1
label_3237d4:
    if (ctx->pc == 0x3237D4u) {
        ctx->pc = 0x3237D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237D0u;
        // 0x3237d4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237D8u;
        goto label_3237d8;
    }
    ctx->pc = 0x3237D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3237D8u);
        ctx->pc = 0x3237D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237D0u;
        // 0x3237d4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3237D0u, 0x3237D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3237D8u;
label_3237d8:
    // 0x3237d8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3237d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3237dc:
    // 0x3237dc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3237dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3237e0:
    // 0x3237e0: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x3237e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3237e4:
    // 0x3237e4: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_3237e8:
    if (ctx->pc == 0x3237E8u) {
        ctx->pc = 0x3237E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237E4u;
        // 0x3237e8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237ECu;
        goto label_3237ec;
    }
    ctx->pc = 0x3237E4u;
    {
        const bool branch_taken_0x3237e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3237E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237E4u;
        // 0x3237e8: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237e4) {
            ctx->pc = 0x3237C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3237c0;
        }
    }
    ctx->pc = 0x3237ECu;
label_3237ec:
    // 0x3237ec: 0x10000055  b           . + 4 + (0x55 << 2)
label_3237f0:
    if (ctx->pc == 0x3237F0u) {
        ctx->pc = 0x3237F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237ECu;
        // 0x3237f0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3237F4u;
        goto label_3237f4;
    }
    ctx->pc = 0x3237ECu;
    {
        const bool branch_taken_0x3237ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3237F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237ECu;
        // 0x3237f0: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237ec) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x3237F4u;
label_3237f4:
    // 0x3237f4: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3237f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_3237f8:
    // 0x3237f8: 0x18a00015  blez        $a1, . + 4 + (0x15 << 2)
label_3237fc:
    if (ctx->pc == 0x3237FCu) {
        ctx->pc = 0x3237FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237F8u;
        // 0x3237fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323800u;
        goto label_323800;
    }
    ctx->pc = 0x3237F8u;
    {
        const bool branch_taken_0x3237f8 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x3237FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3237F8u;
        // 0x3237fc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3237f8) {
            ctx->pc = 0x323850u;
            goto label_323850;
        }
    }
    ctx->pc = 0x323800u;
label_323800:
    // 0x323800: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323800u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323804:
    // 0x323804: 0x0  nop
    ctx->pc = 0x323804u;
    // NOP
label_323808:
    // 0x323808: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_32380c:
    // 0x32380c: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x32380cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_323810:
    // 0x323810: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323814:
    // 0x323814: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_323818:
    // 0x323818: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_32381c:
    // 0x32381c: 0x7fa70060  sq          $a3, 0x60($sp)
    ctx->pc = 0x32381cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 7));
label_323820:
    // 0x323820: 0x60f809  jalr        $v1
label_323824:
    if (ctx->pc == 0x323824u) {
        ctx->pc = 0x323824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323820u;
        // 0x323824: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323828u;
        goto label_323828;
    }
    ctx->pc = 0x323820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323828u);
        ctx->pc = 0x323824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323820u;
        // 0x323824: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323820u, 0x323828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323828u;
label_323828:
    // 0x323828: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32382c:
    // 0x32382c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x32382cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_323830:
    // 0x323830: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323834:
    // 0x323834: 0x7ba70060  lq          $a3, 0x60($sp)
    ctx->pc = 0x323834u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_323838:
    // 0x323838: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x323838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_32383c:
    // 0x32383c: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x32383cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_323840:
    // 0x323840: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_323844:
    if (ctx->pc == 0x323844u) {
        ctx->pc = 0x323844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323840u;
        // 0x323844: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323848u;
        goto label_323848;
    }
    ctx->pc = 0x323840u;
    {
        const bool branch_taken_0x323840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323840u;
        // 0x323844: 0x7ba80070  lq          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323840) {
            ctx->pc = 0x323808u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323808;
        }
    }
    ctx->pc = 0x323848u;
label_323848:
    // 0x323848: 0x10000003  b           . + 4 + (0x3 << 2)
label_32384c:
    if (ctx->pc == 0x32384Cu) {
        ctx->pc = 0x32384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323848u;
        // 0x32384c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323850u;
        goto label_323850;
    }
    ctx->pc = 0x323848u;
    {
        const bool branch_taken_0x323848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32384Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323848u;
        // 0x32384c: 0x8fa20054  lw          $v0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323848) {
            ctx->pc = 0x323858u;
            goto label_323858;
        }
    }
    ctx->pc = 0x323850u;
label_323850:
    // 0x323850: 0x251a02b  sltu        $s4, $s2, $s1
    ctx->pc = 0x323850u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323854:
    // 0x323854: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x323854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323858:
    // 0x323858: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_32385c:
    if (ctx->pc == 0x32385Cu) {
        ctx->pc = 0x32385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323858u;
        // 0x32385c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323860u;
        goto label_323860;
    }
    ctx->pc = 0x323858u;
    {
        const bool branch_taken_0x323858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32385Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323858u;
        // 0x32385c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323858) {
            ctx->pc = 0x3238A4u;
            goto label_3238a4;
        }
    }
    ctx->pc = 0x323860u;
label_323860:
    // 0x323860: 0x27b30020  addiu       $s3, $sp, 0x20
    ctx->pc = 0x323860u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_323864:
    // 0x323864: 0x0  nop
    ctx->pc = 0x323864u;
    // NOP
label_323868:
    // 0x323868: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x323868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_32386c:
    // 0x32386c: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x32386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323870:
    // 0x323870: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x323870u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_323874:
    // 0x323874: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x323874u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_323878:
    // 0x323878: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323878u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_32387c:
    // 0x32387c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32387cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323880:
    // 0x323880: 0x60f809  jalr        $v1
label_323884:
    if (ctx->pc == 0x323884u) {
        ctx->pc = 0x323884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323880u;
        // 0x323884: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323888u;
        goto label_323888;
    }
    ctx->pc = 0x323880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323888u);
        ctx->pc = 0x323884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323880u;
        // 0x323884: 0x7fa80070  sq          $t0, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323880u, 0x323888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323888u;
label_323888:
    // 0x323888: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32388c:
    // 0x32388c: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x32388cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_323890:
    // 0x323890: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323894:
    // 0x323894: 0x7ba80070  lq          $t0, 0x70($sp)
    ctx->pc = 0x323894u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_323898:
    // 0x323898: 0x205102a  slt         $v0, $s0, $a1
    ctx->pc = 0x323898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_32389c:
    // 0x32389c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_3238a0:
    if (ctx->pc == 0x3238A0u) {
        ctx->pc = 0x3238A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32389Cu;
        // 0x3238a0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238A4u;
        goto label_3238a4;
    }
    ctx->pc = 0x32389Cu;
    {
        const bool branch_taken_0x32389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3238A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32389Cu;
        // 0x3238a0: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32389c) {
            ctx->pc = 0x323868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323868;
        }
    }
    ctx->pc = 0x3238A4u;
label_3238a4:
    // 0x3238a4: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_3238a8:
    if (ctx->pc == 0x3238A8u) {
        ctx->pc = 0x3238ACu;
        goto label_3238ac;
    }
    ctx->pc = 0x3238A4u;
    {
        const bool branch_taken_0x3238a4 = (GPR_S64(ctx, 8) <= 0);
        if (branch_taken_0x3238a4) {
            ctx->pc = 0x3238D8u;
            goto label_3238d8;
        }
    }
    ctx->pc = 0x3238ACu;
label_3238ac:
    // 0x3238ac: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x3238acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3238b0:
    // 0x3238b0: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3238b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3238b4:
    // 0x3238b4: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x3238b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3238b8:
    // 0x3238b8: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x3238b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_3238bc:
    // 0x3238bc: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3238bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3238c0:
    // 0x3238c0: 0x60f809  jalr        $v1
label_3238c4:
    if (ctx->pc == 0x3238C4u) {
        ctx->pc = 0x3238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238C0u;
        // 0x3238c4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238C8u;
        goto label_3238c8;
    }
    ctx->pc = 0x3238C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3238C8u);
        ctx->pc = 0x3238C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238C0u;
        // 0x3238c4: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238C0u, 0x3238C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3238C8u;
label_3238c8:
    // 0x3238c8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3238c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3238cc:
    // 0x3238cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3238ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_3238d0:
    // 0x3238d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
label_3238d4:
    if (ctx->pc == 0x3238D4u) {
        ctx->pc = 0x3238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D0u;
        // 0x3238d4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238D8u;
        goto label_3238d8;
    }
    ctx->pc = 0x3238D0u;
    {
        const bool branch_taken_0x3238d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3238D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D0u;
        // 0x3238d4: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3238d0) {
            ctx->pc = 0x3238B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3238b0;
        }
    }
    ctx->pc = 0x3238D8u;
label_3238d8:
    // 0x3238d8: 0x5280001a  beql        $s4, $zero, . + 4 + (0x1A << 2)
label_3238dc:
    if (ctx->pc == 0x3238DCu) {
        ctx->pc = 0x3238DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238D8u;
        // 0x3238dc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238E0u;
        goto label_3238e0;
    }
    ctx->pc = 0x3238D8u;
    {
        const bool branch_taken_0x3238d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x3238d8) {
            ctx->pc = 0x3238DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3238D8u;
            // 0x3238dc: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x3238E0u;
label_3238e0:
    // 0x3238e0: 0x82460000  lb          $a2, 0x0($s2)
    ctx->pc = 0x3238e0u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_3238e4:
    // 0x3238e4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x3238e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_3238e8:
    // 0x3238e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3238e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3238ec:
    // 0x3238ec: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x3238ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_3238f0:
    // 0x3238f0: 0x60f809  jalr        $v1
label_3238f4:
    if (ctx->pc == 0x3238F4u) {
        ctx->pc = 0x3238F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238F0u;
        // 0x3238f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3238F8u;
        goto label_3238f8;
    }
    ctx->pc = 0x3238F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3238F8u);
        ctx->pc = 0x3238F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3238F0u;
        // 0x3238f4: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3238F0u, 0x3238F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3238F8u;
label_3238f8:
    // 0x3238f8: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x3238f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_3238fc:
    // 0x3238fc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3238fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323900:
    // 0x323900: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x323900u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_323904:
    // 0x323904: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_323908:
    if (ctx->pc == 0x323908u) {
        ctx->pc = 0x323908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323904u;
        // 0x323908: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32390Cu;
        goto label_32390c;
    }
    ctx->pc = 0x323904u;
    {
        const bool branch_taken_0x323904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323904u;
        // 0x323908: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323904) {
            ctx->pc = 0x3238E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3238e0;
        }
    }
    ctx->pc = 0x32390Cu;
label_32390c:
    // 0x32390c: 0x1000000d  b           . + 4 + (0xD << 2)
label_323910:
    if (ctx->pc == 0x323910u) {
        ctx->pc = 0x323910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32390Cu;
        // 0x323910: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323914u;
        goto label_323914;
    }
    ctx->pc = 0x32390Cu;
    {
        const bool branch_taken_0x32390c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32390Cu;
        // 0x323910: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32390c) {
            ctx->pc = 0x323944u;
            goto label_323944;
        }
    }
    ctx->pc = 0x323914u;
label_323914:
    // 0x323914: 0x10c0000a  beqz        $a2, . + 4 + (0xA << 2)
label_323918:
    if (ctx->pc == 0x323918u) {
        ctx->pc = 0x323918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323914u;
        // 0x323918: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32391Cu;
        goto label_32391c;
    }
    ctx->pc = 0x323914u;
    {
        const bool branch_taken_0x323914 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x323918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323914u;
        // 0x323918: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323914) {
            ctx->pc = 0x323940u;
            goto label_323940;
        }
    }
    ctx->pc = 0x32391Cu;
label_32391c:
    // 0x32391c: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x32391cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323920:
    // 0x323920: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x323920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_323924:
    // 0x323924: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x323924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323928:
    // 0x323928: 0x60f809  jalr        $v1
label_32392c:
    if (ctx->pc == 0x32392Cu) {
        ctx->pc = 0x323930u;
        goto label_323930;
    }
    ctx->pc = 0x323928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323930u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323928u, 0x323930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323930u;
label_323930:
    // 0x323930: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x323930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_323934:
    // 0x323934: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x323934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_323938:
    // 0x323938: 0x1000fe3e  b           . + 4 + (-0x1C2 << 2)
label_32393c:
    if (ctx->pc == 0x32393Cu) {
        ctx->pc = 0x32393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323938u;
        // 0x32393c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323940u;
        goto label_323940;
    }
    ctx->pc = 0x323938u;
    {
        const bool branch_taken_0x323938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x32393Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323938u;
        // 0x32393c: 0xafa40058  sw          $a0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323938) {
            ctx->pc = 0x323234u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_323234;
        }
    }
    ctx->pc = 0x323940u;
label_323940:
    // 0x323940: 0x26d70001  addiu       $s7, $s6, 0x1
    ctx->pc = 0x323940u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_323944:
    // 0x323944: 0x2e5b00b  movn        $s6, $s7, $a1
    ctx->pc = 0x323944u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_U64(ctx, 22, GPR_U64(ctx, 23));
label_323948:
    // 0x323948: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x323948u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
label_32394c:
    // 0x32394c: 0x1440fcea  bnez        $v0, . + 4 + (-0x316 << 2)
label_323950:
    if (ctx->pc == 0x323950u) {
        ctx->pc = 0x323950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32394Cu;
        // 0x323950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323954u;
        goto label_323954;
    }
    ctx->pc = 0x32394Cu;
    {
        const bool branch_taken_0x32394c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x323950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32394Cu;
        // 0x323950: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32394c) {
            ctx->pc = 0x322CF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_322cf8;
        }
    }
    ctx->pc = 0x323954u;
label_323954:
    // 0x323954: 0x10000004  b           . + 4 + (0x4 << 2)
label_323958:
    if (ctx->pc == 0x323958u) {
        ctx->pc = 0x323958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323954u;
        // 0x323958: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x32395Cu;
        goto label_32395c;
    }
    ctx->pc = 0x323954u;
    {
        const bool branch_taken_0x323954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x323958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323954u;
        // 0x323958: 0x8fa40048  lw          $a0, 0x48($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x323954) {
            ctx->pc = 0x323968u;
            goto label_323968;
        }
    }
    ctx->pc = 0x32395Cu;
label_32395c:
    // 0x32395c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x32395cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_323960:
    // 0x323960: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x323960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_323964:
    // 0x323964: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x323964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_323968:
    // 0x323968: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x323968u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32396c:
    // 0x32396c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x32396cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_323970:
    // 0x323970: 0x60f809  jalr        $v1
label_323974:
    if (ctx->pc == 0x323974u) {
        ctx->pc = 0x323974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323970u;
        // 0x323974: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x323978u;
        goto label_323978;
    }
    ctx->pc = 0x323970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x323978u);
        ctx->pc = 0x323974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x323970u;
        // 0x323974: 0x8fa5005c  lw          $a1, 0x5C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x323970u, 0x323978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x323978u;
label_323978:
    // 0x323978: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x323978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_32397c:
    // 0x32397c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x32397cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_323980:
    // 0x323980: 0xdfbe0100  ld          $fp, 0x100($sp)
    ctx->pc = 0x323980u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_323984:
    // 0x323984: 0xdfb700f0  ld          $s7, 0xF0($sp)
    ctx->pc = 0x323984u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_323988:
    // 0x323988: 0xdfb600e0  ld          $s6, 0xE0($sp)
    ctx->pc = 0x323988u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_32398c:
    // 0x32398c: 0xdfb500d0  ld          $s5, 0xD0($sp)
    ctx->pc = 0x32398cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_323990:
    // 0x323990: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x323990u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_323994:
    // 0x323994: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x323994u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_323998:
    // 0x323998: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x323998u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_32399c:
    // 0x32399c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x32399cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_3239a0:
    // 0x3239a0: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x3239a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_3239a4:
    // 0x3239a4: 0x3e00008  jr          $ra
label_3239a8:
    if (ctx->pc == 0x3239A8u) {
        ctx->pc = 0x3239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239A4u;
        // 0x3239a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3239ACu;
        goto label_3239ac;
    }
    ctx->pc = 0x3239A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3239A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3239A4u;
        // 0x3239a8: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3239A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3239ACu;
label_3239ac:
    // 0x3239ac: 0x0  nop
    ctx->pc = 0x3239acu;
    // NOP
    ctx->pc = 0x3239b0u;
}
