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

// Function: sub_00143F48
// Address: 0x143f48 - 0x144740
void sub_00143F48_0x143f48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143F48_0x143f48");
#endif

    switch (ctx->pc) {
        case 0x143f48u: goto label_143f48;
        case 0x143f4cu: goto label_143f4c;
        case 0x143f50u: goto label_143f50;
        case 0x143f54u: goto label_143f54;
        case 0x143f58u: goto label_143f58;
        case 0x143f5cu: goto label_143f5c;
        case 0x143f60u: goto label_143f60;
        case 0x143f64u: goto label_143f64;
        case 0x143f68u: goto label_143f68;
        case 0x143f6cu: goto label_143f6c;
        case 0x143f70u: goto label_143f70;
        case 0x143f74u: goto label_143f74;
        case 0x143f78u: goto label_143f78;
        case 0x143f7cu: goto label_143f7c;
        case 0x143f80u: goto label_143f80;
        case 0x143f84u: goto label_143f84;
        case 0x143f88u: goto label_143f88;
        case 0x143f8cu: goto label_143f8c;
        case 0x143f90u: goto label_143f90;
        case 0x143f94u: goto label_143f94;
        case 0x143f98u: goto label_143f98;
        case 0x143f9cu: goto label_143f9c;
        case 0x143fa0u: goto label_143fa0;
        case 0x143fa4u: goto label_143fa4;
        case 0x143fa8u: goto label_143fa8;
        case 0x143facu: goto label_143fac;
        case 0x143fb0u: goto label_143fb0;
        case 0x143fb4u: goto label_143fb4;
        case 0x143fb8u: goto label_143fb8;
        case 0x143fbcu: goto label_143fbc;
        case 0x143fc0u: goto label_143fc0;
        case 0x143fc4u: goto label_143fc4;
        case 0x143fc8u: goto label_143fc8;
        case 0x143fccu: goto label_143fcc;
        case 0x143fd0u: goto label_143fd0;
        case 0x143fd4u: goto label_143fd4;
        case 0x143fd8u: goto label_143fd8;
        case 0x143fdcu: goto label_143fdc;
        case 0x143fe0u: goto label_143fe0;
        case 0x143fe4u: goto label_143fe4;
        case 0x143fe8u: goto label_143fe8;
        case 0x143fecu: goto label_143fec;
        case 0x143ff0u: goto label_143ff0;
        case 0x143ff4u: goto label_143ff4;
        case 0x143ff8u: goto label_143ff8;
        case 0x143ffcu: goto label_143ffc;
        case 0x144000u: goto label_144000;
        case 0x144004u: goto label_144004;
        case 0x144008u: goto label_144008;
        case 0x14400cu: goto label_14400c;
        case 0x144010u: goto label_144010;
        case 0x144014u: goto label_144014;
        case 0x144018u: goto label_144018;
        case 0x14401cu: goto label_14401c;
        case 0x144020u: goto label_144020;
        case 0x144024u: goto label_144024;
        case 0x144028u: goto label_144028;
        case 0x14402cu: goto label_14402c;
        case 0x144030u: goto label_144030;
        case 0x144034u: goto label_144034;
        case 0x144038u: goto label_144038;
        case 0x14403cu: goto label_14403c;
        case 0x144040u: goto label_144040;
        case 0x144044u: goto label_144044;
        case 0x144048u: goto label_144048;
        case 0x14404cu: goto label_14404c;
        case 0x144050u: goto label_144050;
        case 0x144054u: goto label_144054;
        case 0x144058u: goto label_144058;
        case 0x14405cu: goto label_14405c;
        case 0x144060u: goto label_144060;
        case 0x144064u: goto label_144064;
        case 0x144068u: goto label_144068;
        case 0x14406cu: goto label_14406c;
        case 0x144070u: goto label_144070;
        case 0x144074u: goto label_144074;
        case 0x144078u: goto label_144078;
        case 0x14407cu: goto label_14407c;
        case 0x144080u: goto label_144080;
        case 0x144084u: goto label_144084;
        case 0x144088u: goto label_144088;
        case 0x14408cu: goto label_14408c;
        case 0x144090u: goto label_144090;
        case 0x144094u: goto label_144094;
        case 0x144098u: goto label_144098;
        case 0x14409cu: goto label_14409c;
        case 0x1440a0u: goto label_1440a0;
        case 0x1440a4u: goto label_1440a4;
        case 0x1440a8u: goto label_1440a8;
        case 0x1440acu: goto label_1440ac;
        case 0x1440b0u: goto label_1440b0;
        case 0x1440b4u: goto label_1440b4;
        case 0x1440b8u: goto label_1440b8;
        case 0x1440bcu: goto label_1440bc;
        case 0x1440c0u: goto label_1440c0;
        case 0x1440c4u: goto label_1440c4;
        case 0x1440c8u: goto label_1440c8;
        case 0x1440ccu: goto label_1440cc;
        case 0x1440d0u: goto label_1440d0;
        case 0x1440d4u: goto label_1440d4;
        case 0x1440d8u: goto label_1440d8;
        case 0x1440dcu: goto label_1440dc;
        case 0x1440e0u: goto label_1440e0;
        case 0x1440e4u: goto label_1440e4;
        case 0x1440e8u: goto label_1440e8;
        case 0x1440ecu: goto label_1440ec;
        case 0x1440f0u: goto label_1440f0;
        case 0x1440f4u: goto label_1440f4;
        case 0x1440f8u: goto label_1440f8;
        case 0x1440fcu: goto label_1440fc;
        case 0x144100u: goto label_144100;
        case 0x144104u: goto label_144104;
        case 0x144108u: goto label_144108;
        case 0x14410cu: goto label_14410c;
        case 0x144110u: goto label_144110;
        case 0x144114u: goto label_144114;
        case 0x144118u: goto label_144118;
        case 0x14411cu: goto label_14411c;
        case 0x144120u: goto label_144120;
        case 0x144124u: goto label_144124;
        case 0x144128u: goto label_144128;
        case 0x14412cu: goto label_14412c;
        case 0x144130u: goto label_144130;
        case 0x144134u: goto label_144134;
        case 0x144138u: goto label_144138;
        case 0x14413cu: goto label_14413c;
        case 0x144140u: goto label_144140;
        case 0x144144u: goto label_144144;
        case 0x144148u: goto label_144148;
        case 0x14414cu: goto label_14414c;
        case 0x144150u: goto label_144150;
        case 0x144154u: goto label_144154;
        case 0x144158u: goto label_144158;
        case 0x14415cu: goto label_14415c;
        case 0x144160u: goto label_144160;
        case 0x144164u: goto label_144164;
        case 0x144168u: goto label_144168;
        case 0x14416cu: goto label_14416c;
        case 0x144170u: goto label_144170;
        case 0x144174u: goto label_144174;
        case 0x144178u: goto label_144178;
        case 0x14417cu: goto label_14417c;
        case 0x144180u: goto label_144180;
        case 0x144184u: goto label_144184;
        case 0x144188u: goto label_144188;
        case 0x14418cu: goto label_14418c;
        case 0x144190u: goto label_144190;
        case 0x144194u: goto label_144194;
        case 0x144198u: goto label_144198;
        case 0x14419cu: goto label_14419c;
        case 0x1441a0u: goto label_1441a0;
        case 0x1441a4u: goto label_1441a4;
        case 0x1441a8u: goto label_1441a8;
        case 0x1441acu: goto label_1441ac;
        case 0x1441b0u: goto label_1441b0;
        case 0x1441b4u: goto label_1441b4;
        case 0x1441b8u: goto label_1441b8;
        case 0x1441bcu: goto label_1441bc;
        case 0x1441c0u: goto label_1441c0;
        case 0x1441c4u: goto label_1441c4;
        case 0x1441c8u: goto label_1441c8;
        case 0x1441ccu: goto label_1441cc;
        case 0x1441d0u: goto label_1441d0;
        case 0x1441d4u: goto label_1441d4;
        case 0x1441d8u: goto label_1441d8;
        case 0x1441dcu: goto label_1441dc;
        case 0x1441e0u: goto label_1441e0;
        case 0x1441e4u: goto label_1441e4;
        case 0x1441e8u: goto label_1441e8;
        case 0x1441ecu: goto label_1441ec;
        case 0x1441f0u: goto label_1441f0;
        case 0x1441f4u: goto label_1441f4;
        case 0x1441f8u: goto label_1441f8;
        case 0x1441fcu: goto label_1441fc;
        case 0x144200u: goto label_144200;
        case 0x144204u: goto label_144204;
        case 0x144208u: goto label_144208;
        case 0x14420cu: goto label_14420c;
        case 0x144210u: goto label_144210;
        case 0x144214u: goto label_144214;
        case 0x144218u: goto label_144218;
        case 0x14421cu: goto label_14421c;
        case 0x144220u: goto label_144220;
        case 0x144224u: goto label_144224;
        case 0x144228u: goto label_144228;
        case 0x14422cu: goto label_14422c;
        case 0x144230u: goto label_144230;
        case 0x144234u: goto label_144234;
        case 0x144238u: goto label_144238;
        case 0x14423cu: goto label_14423c;
        case 0x144240u: goto label_144240;
        case 0x144244u: goto label_144244;
        case 0x144248u: goto label_144248;
        case 0x14424cu: goto label_14424c;
        case 0x144250u: goto label_144250;
        case 0x144254u: goto label_144254;
        case 0x144258u: goto label_144258;
        case 0x14425cu: goto label_14425c;
        case 0x144260u: goto label_144260;
        case 0x144264u: goto label_144264;
        case 0x144268u: goto label_144268;
        case 0x14426cu: goto label_14426c;
        case 0x144270u: goto label_144270;
        case 0x144274u: goto label_144274;
        case 0x144278u: goto label_144278;
        case 0x14427cu: goto label_14427c;
        case 0x144280u: goto label_144280;
        case 0x144284u: goto label_144284;
        case 0x144288u: goto label_144288;
        case 0x14428cu: goto label_14428c;
        case 0x144290u: goto label_144290;
        case 0x144294u: goto label_144294;
        case 0x144298u: goto label_144298;
        case 0x14429cu: goto label_14429c;
        case 0x1442a0u: goto label_1442a0;
        case 0x1442a4u: goto label_1442a4;
        case 0x1442a8u: goto label_1442a8;
        case 0x1442acu: goto label_1442ac;
        case 0x1442b0u: goto label_1442b0;
        case 0x1442b4u: goto label_1442b4;
        case 0x1442b8u: goto label_1442b8;
        case 0x1442bcu: goto label_1442bc;
        case 0x1442c0u: goto label_1442c0;
        case 0x1442c4u: goto label_1442c4;
        case 0x1442c8u: goto label_1442c8;
        case 0x1442ccu: goto label_1442cc;
        case 0x1442d0u: goto label_1442d0;
        case 0x1442d4u: goto label_1442d4;
        case 0x1442d8u: goto label_1442d8;
        case 0x1442dcu: goto label_1442dc;
        case 0x1442e0u: goto label_1442e0;
        case 0x1442e4u: goto label_1442e4;
        case 0x1442e8u: goto label_1442e8;
        case 0x1442ecu: goto label_1442ec;
        case 0x1442f0u: goto label_1442f0;
        case 0x1442f4u: goto label_1442f4;
        case 0x1442f8u: goto label_1442f8;
        case 0x1442fcu: goto label_1442fc;
        case 0x144300u: goto label_144300;
        case 0x144304u: goto label_144304;
        case 0x144308u: goto label_144308;
        case 0x14430cu: goto label_14430c;
        case 0x144310u: goto label_144310;
        case 0x144314u: goto label_144314;
        case 0x144318u: goto label_144318;
        case 0x14431cu: goto label_14431c;
        case 0x144320u: goto label_144320;
        case 0x144324u: goto label_144324;
        case 0x144328u: goto label_144328;
        case 0x14432cu: goto label_14432c;
        case 0x144330u: goto label_144330;
        case 0x144334u: goto label_144334;
        case 0x144338u: goto label_144338;
        case 0x14433cu: goto label_14433c;
        case 0x144340u: goto label_144340;
        case 0x144344u: goto label_144344;
        case 0x144348u: goto label_144348;
        case 0x14434cu: goto label_14434c;
        case 0x144350u: goto label_144350;
        case 0x144354u: goto label_144354;
        case 0x144358u: goto label_144358;
        case 0x14435cu: goto label_14435c;
        case 0x144360u: goto label_144360;
        case 0x144364u: goto label_144364;
        case 0x144368u: goto label_144368;
        case 0x14436cu: goto label_14436c;
        case 0x144370u: goto label_144370;
        case 0x144374u: goto label_144374;
        case 0x144378u: goto label_144378;
        case 0x14437cu: goto label_14437c;
        case 0x144380u: goto label_144380;
        case 0x144384u: goto label_144384;
        case 0x144388u: goto label_144388;
        case 0x14438cu: goto label_14438c;
        case 0x144390u: goto label_144390;
        case 0x144394u: goto label_144394;
        case 0x144398u: goto label_144398;
        case 0x14439cu: goto label_14439c;
        case 0x1443a0u: goto label_1443a0;
        case 0x1443a4u: goto label_1443a4;
        case 0x1443a8u: goto label_1443a8;
        case 0x1443acu: goto label_1443ac;
        case 0x1443b0u: goto label_1443b0;
        case 0x1443b4u: goto label_1443b4;
        case 0x1443b8u: goto label_1443b8;
        case 0x1443bcu: goto label_1443bc;
        case 0x1443c0u: goto label_1443c0;
        case 0x1443c4u: goto label_1443c4;
        case 0x1443c8u: goto label_1443c8;
        case 0x1443ccu: goto label_1443cc;
        case 0x1443d0u: goto label_1443d0;
        case 0x1443d4u: goto label_1443d4;
        case 0x1443d8u: goto label_1443d8;
        case 0x1443dcu: goto label_1443dc;
        case 0x1443e0u: goto label_1443e0;
        case 0x1443e4u: goto label_1443e4;
        case 0x1443e8u: goto label_1443e8;
        case 0x1443ecu: goto label_1443ec;
        case 0x1443f0u: goto label_1443f0;
        case 0x1443f4u: goto label_1443f4;
        case 0x1443f8u: goto label_1443f8;
        case 0x1443fcu: goto label_1443fc;
        case 0x144400u: goto label_144400;
        case 0x144404u: goto label_144404;
        case 0x144408u: goto label_144408;
        case 0x14440cu: goto label_14440c;
        case 0x144410u: goto label_144410;
        case 0x144414u: goto label_144414;
        case 0x144418u: goto label_144418;
        case 0x14441cu: goto label_14441c;
        case 0x144420u: goto label_144420;
        case 0x144424u: goto label_144424;
        case 0x144428u: goto label_144428;
        case 0x14442cu: goto label_14442c;
        case 0x144430u: goto label_144430;
        case 0x144434u: goto label_144434;
        case 0x144438u: goto label_144438;
        case 0x14443cu: goto label_14443c;
        case 0x144440u: goto label_144440;
        case 0x144444u: goto label_144444;
        case 0x144448u: goto label_144448;
        case 0x14444cu: goto label_14444c;
        case 0x144450u: goto label_144450;
        case 0x144454u: goto label_144454;
        case 0x144458u: goto label_144458;
        case 0x14445cu: goto label_14445c;
        case 0x144460u: goto label_144460;
        case 0x144464u: goto label_144464;
        case 0x144468u: goto label_144468;
        case 0x14446cu: goto label_14446c;
        case 0x144470u: goto label_144470;
        case 0x144474u: goto label_144474;
        case 0x144478u: goto label_144478;
        case 0x14447cu: goto label_14447c;
        case 0x144480u: goto label_144480;
        case 0x144484u: goto label_144484;
        case 0x144488u: goto label_144488;
        case 0x14448cu: goto label_14448c;
        case 0x144490u: goto label_144490;
        case 0x144494u: goto label_144494;
        case 0x144498u: goto label_144498;
        case 0x14449cu: goto label_14449c;
        case 0x1444a0u: goto label_1444a0;
        case 0x1444a4u: goto label_1444a4;
        case 0x1444a8u: goto label_1444a8;
        case 0x1444acu: goto label_1444ac;
        case 0x1444b0u: goto label_1444b0;
        case 0x1444b4u: goto label_1444b4;
        case 0x1444b8u: goto label_1444b8;
        case 0x1444bcu: goto label_1444bc;
        case 0x1444c0u: goto label_1444c0;
        case 0x1444c4u: goto label_1444c4;
        case 0x1444c8u: goto label_1444c8;
        case 0x1444ccu: goto label_1444cc;
        case 0x1444d0u: goto label_1444d0;
        case 0x1444d4u: goto label_1444d4;
        case 0x1444d8u: goto label_1444d8;
        case 0x1444dcu: goto label_1444dc;
        case 0x1444e0u: goto label_1444e0;
        case 0x1444e4u: goto label_1444e4;
        case 0x1444e8u: goto label_1444e8;
        case 0x1444ecu: goto label_1444ec;
        case 0x1444f0u: goto label_1444f0;
        case 0x1444f4u: goto label_1444f4;
        case 0x1444f8u: goto label_1444f8;
        case 0x1444fcu: goto label_1444fc;
        case 0x144500u: goto label_144500;
        case 0x144504u: goto label_144504;
        case 0x144508u: goto label_144508;
        case 0x14450cu: goto label_14450c;
        case 0x144510u: goto label_144510;
        case 0x144514u: goto label_144514;
        case 0x144518u: goto label_144518;
        case 0x14451cu: goto label_14451c;
        case 0x144520u: goto label_144520;
        case 0x144524u: goto label_144524;
        case 0x144528u: goto label_144528;
        case 0x14452cu: goto label_14452c;
        case 0x144530u: goto label_144530;
        case 0x144534u: goto label_144534;
        case 0x144538u: goto label_144538;
        case 0x14453cu: goto label_14453c;
        case 0x144540u: goto label_144540;
        case 0x144544u: goto label_144544;
        case 0x144548u: goto label_144548;
        case 0x14454cu: goto label_14454c;
        case 0x144550u: goto label_144550;
        case 0x144554u: goto label_144554;
        case 0x144558u: goto label_144558;
        case 0x14455cu: goto label_14455c;
        case 0x144560u: goto label_144560;
        case 0x144564u: goto label_144564;
        case 0x144568u: goto label_144568;
        case 0x14456cu: goto label_14456c;
        case 0x144570u: goto label_144570;
        case 0x144574u: goto label_144574;
        case 0x144578u: goto label_144578;
        case 0x14457cu: goto label_14457c;
        case 0x144580u: goto label_144580;
        case 0x144584u: goto label_144584;
        case 0x144588u: goto label_144588;
        case 0x14458cu: goto label_14458c;
        case 0x144590u: goto label_144590;
        case 0x144594u: goto label_144594;
        case 0x144598u: goto label_144598;
        case 0x14459cu: goto label_14459c;
        case 0x1445a0u: goto label_1445a0;
        case 0x1445a4u: goto label_1445a4;
        case 0x1445a8u: goto label_1445a8;
        case 0x1445acu: goto label_1445ac;
        case 0x1445b0u: goto label_1445b0;
        case 0x1445b4u: goto label_1445b4;
        case 0x1445b8u: goto label_1445b8;
        case 0x1445bcu: goto label_1445bc;
        case 0x1445c0u: goto label_1445c0;
        case 0x1445c4u: goto label_1445c4;
        case 0x1445c8u: goto label_1445c8;
        case 0x1445ccu: goto label_1445cc;
        case 0x1445d0u: goto label_1445d0;
        case 0x1445d4u: goto label_1445d4;
        case 0x1445d8u: goto label_1445d8;
        case 0x1445dcu: goto label_1445dc;
        case 0x1445e0u: goto label_1445e0;
        case 0x1445e4u: goto label_1445e4;
        case 0x1445e8u: goto label_1445e8;
        case 0x1445ecu: goto label_1445ec;
        case 0x1445f0u: goto label_1445f0;
        case 0x1445f4u: goto label_1445f4;
        case 0x1445f8u: goto label_1445f8;
        case 0x1445fcu: goto label_1445fc;
        case 0x144600u: goto label_144600;
        case 0x144604u: goto label_144604;
        case 0x144608u: goto label_144608;
        case 0x14460cu: goto label_14460c;
        case 0x144610u: goto label_144610;
        case 0x144614u: goto label_144614;
        case 0x144618u: goto label_144618;
        case 0x14461cu: goto label_14461c;
        case 0x144620u: goto label_144620;
        case 0x144624u: goto label_144624;
        case 0x144628u: goto label_144628;
        case 0x14462cu: goto label_14462c;
        case 0x144630u: goto label_144630;
        case 0x144634u: goto label_144634;
        case 0x144638u: goto label_144638;
        case 0x14463cu: goto label_14463c;
        case 0x144640u: goto label_144640;
        case 0x144644u: goto label_144644;
        case 0x144648u: goto label_144648;
        case 0x14464cu: goto label_14464c;
        case 0x144650u: goto label_144650;
        case 0x144654u: goto label_144654;
        case 0x144658u: goto label_144658;
        case 0x14465cu: goto label_14465c;
        case 0x144660u: goto label_144660;
        case 0x144664u: goto label_144664;
        case 0x144668u: goto label_144668;
        case 0x14466cu: goto label_14466c;
        case 0x144670u: goto label_144670;
        case 0x144674u: goto label_144674;
        case 0x144678u: goto label_144678;
        case 0x14467cu: goto label_14467c;
        case 0x144680u: goto label_144680;
        case 0x144684u: goto label_144684;
        case 0x144688u: goto label_144688;
        case 0x14468cu: goto label_14468c;
        case 0x144690u: goto label_144690;
        case 0x144694u: goto label_144694;
        case 0x144698u: goto label_144698;
        case 0x14469cu: goto label_14469c;
        case 0x1446a0u: goto label_1446a0;
        case 0x1446a4u: goto label_1446a4;
        case 0x1446a8u: goto label_1446a8;
        case 0x1446acu: goto label_1446ac;
        case 0x1446b0u: goto label_1446b0;
        case 0x1446b4u: goto label_1446b4;
        case 0x1446b8u: goto label_1446b8;
        case 0x1446bcu: goto label_1446bc;
        case 0x1446c0u: goto label_1446c0;
        case 0x1446c4u: goto label_1446c4;
        case 0x1446c8u: goto label_1446c8;
        case 0x1446ccu: goto label_1446cc;
        case 0x1446d0u: goto label_1446d0;
        case 0x1446d4u: goto label_1446d4;
        case 0x1446d8u: goto label_1446d8;
        case 0x1446dcu: goto label_1446dc;
        case 0x1446e0u: goto label_1446e0;
        case 0x1446e4u: goto label_1446e4;
        case 0x1446e8u: goto label_1446e8;
        case 0x1446ecu: goto label_1446ec;
        case 0x1446f0u: goto label_1446f0;
        case 0x1446f4u: goto label_1446f4;
        case 0x1446f8u: goto label_1446f8;
        case 0x1446fcu: goto label_1446fc;
        case 0x144700u: goto label_144700;
        case 0x144704u: goto label_144704;
        case 0x144708u: goto label_144708;
        case 0x14470cu: goto label_14470c;
        case 0x144710u: goto label_144710;
        case 0x144714u: goto label_144714;
        case 0x144718u: goto label_144718;
        case 0x14471cu: goto label_14471c;
        case 0x144720u: goto label_144720;
        case 0x144724u: goto label_144724;
        case 0x144728u: goto label_144728;
        case 0x14472cu: goto label_14472c;
        case 0x144730u: goto label_144730;
        case 0x144734u: goto label_144734;
        case 0x144738u: goto label_144738;
        case 0x14473cu: goto label_14473c;
        default: break;
    }

    ctx->pc = 0x143f48u;

label_143f48:
    // 0x143f48: 0x27bdfe00  addiu       $sp, $sp, -0x200
    ctx->pc = 0x143f48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966784));
label_143f4c:
    // 0x143f4c: 0x7fb70170  sq          $s7, 0x170($sp)
    ctx->pc = 0x143f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 23));
label_143f50:
    // 0x143f50: 0x7fb001e0  sq          $s0, 0x1E0($sp)
    ctx->pc = 0x143f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 16));
label_143f54:
    // 0x143f54: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x143f54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143f58:
    // 0x143f58: 0x7fb101d0  sq          $s1, 0x1D0($sp)
    ctx->pc = 0x143f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 17));
label_143f5c:
    // 0x143f5c: 0x7fb201c0  sq          $s2, 0x1C0($sp)
    ctx->pc = 0x143f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 18));
label_143f60:
    // 0x143f60: 0x7fb301b0  sq          $s3, 0x1B0($sp)
    ctx->pc = 0x143f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 19));
label_143f64:
    // 0x143f64: 0x7fb401a0  sq          $s4, 0x1A0($sp)
    ctx->pc = 0x143f64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 20));
label_143f68:
    // 0x143f68: 0x7fb50190  sq          $s5, 0x190($sp)
    ctx->pc = 0x143f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 21));
label_143f6c:
    // 0x143f6c: 0x7fb60180  sq          $s6, 0x180($sp)
    ctx->pc = 0x143f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 22));
label_143f70:
    // 0x143f70: 0x7fbe0160  sq          $fp, 0x160($sp)
    ctx->pc = 0x143f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 30));
label_143f74:
    // 0x143f74: 0xffbf0150  sd          $ra, 0x150($sp)
    ctx->pc = 0x143f74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 31));
label_143f78:
    // 0x143f78: 0xe7b501f8  swc1        $f21, 0x1F8($sp)
    ctx->pc = 0x143f78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_143f7c:
    // 0x143f7c: 0xe7b401f0  swc1        $f20, 0x1F0($sp)
    ctx->pc = 0x143f7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_143f80:
    // 0x143f80: 0x8ee201a0  lw          $v0, 0x1A0($s7)
    ctx->pc = 0x143f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 416)));
label_143f84:
    // 0x143f84: 0x104001e0  beqz        $v0, . + 4 + (0x1E0 << 2)
label_143f88:
    if (ctx->pc == 0x143F88u) {
        ctx->pc = 0x143F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F84u;
        // 0x143f88: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F8Cu;
        goto label_143f8c;
    }
    ctx->pc = 0x143F84u;
    {
        const bool branch_taken_0x143f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F84u;
        // 0x143f88: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f84) {
            ctx->pc = 0x144708u;
            goto label_144708;
        }
    }
    ctx->pc = 0x143F8Cu;
label_143f8c:
    // 0x143f8c: 0x8c4384b0  lw          $v1, -0x7B50($v0)
    ctx->pc = 0x143f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935728)));
label_143f90:
    // 0x143f90: 0x106001dd  beqz        $v1, . + 4 + (0x1DD << 2)
label_143f94:
    if (ctx->pc == 0x143F94u) {
        ctx->pc = 0x143F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F90u;
        // 0x143f94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F98u;
        goto label_143f98;
    }
    ctx->pc = 0x143F90u;
    {
        const bool branch_taken_0x143f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x143F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F90u;
        // 0x143f94: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143f90) {
            ctx->pc = 0x144708u;
            goto label_144708;
        }
    }
    ctx->pc = 0x143F98u;
label_143f98:
    // 0x143f98: 0xc07cc06  jal         func_1F3018
label_143f9c:
    if (ctx->pc == 0x143F9Cu) {
        ctx->pc = 0x143F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F98u;
        // 0x143f9c: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FA0u;
        goto label_143fa0;
    }
    ctx->pc = 0x143F98u;
    SET_GPR_U32(ctx, 31, 0x143FA0u);
    ctx->pc = 0x143F9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143F98u;
    // 0x143f9c: 0x3c140073  lui         $s4, 0x73 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3018u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3018u, 0x143F98u, 0x143FA0u)) {
        return;
    }
    ctx->pc = 0x143FA0u;
label_143fa0:
    // 0x143fa0: 0x26900fd8  addiu       $s0, $s4, 0xFD8
    ctx->pc = 0x143fa0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4056));
label_143fa4:
    // 0x143fa4: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x143fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_143fa8:
    // 0x143fa8: 0xc091fdc  jal         func_247F70
label_143fac:
    if (ctx->pc == 0x143FACu) {
        ctx->pc = 0x143FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FA8u;
        // 0x143fac: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FB0u;
        goto label_143fb0;
    }
    ctx->pc = 0x143FA8u;
    SET_GPR_U32(ctx, 31, 0x143FB0u);
    ctx->pc = 0x143FACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143FA8u;
    // 0x143fac: 0x3c120034  lui         $s2, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x143FA8u, 0x143FB0u)) {
        return;
    }
    ctx->pc = 0x143FB0u;
label_143fb0:
    // 0x143fb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143fb4:
    // 0x143fb4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x143fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_143fb8:
    // 0x143fb8: 0x40f809  jalr        $v0
label_143fbc:
    if (ctx->pc == 0x143FBCu) {
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FC0u;
        goto label_143fc0;
    }
    ctx->pc = 0x143FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143FC0u);
        ctx->pc = 0x143FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FB8u;
        // 0x143fbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FB8u, 0x143FC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143FC0u;
label_143fc0:
    // 0x143fc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143fc4:
    // 0x143fc4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x143fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143fc8:
    // 0x143fc8: 0x40f809  jalr        $v0
label_143fcc:
    if (ctx->pc == 0x143FCCu) {
        ctx->pc = 0x143FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FC8u;
        // 0x143fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FD0u;
        goto label_143fd0;
    }
    ctx->pc = 0x143FC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143FD0u);
        ctx->pc = 0x143FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FC8u;
        // 0x143fcc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FC8u, 0x143FD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143FD0u;
label_143fd0:
    // 0x143fd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143fd4:
    // 0x143fd4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x143fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_143fd8:
    // 0x143fd8: 0x40f809  jalr        $v0
label_143fdc:
    if (ctx->pc == 0x143FDCu) {
        ctx->pc = 0x143FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FD8u;
        // 0x143fdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FE0u;
        goto label_143fe0;
    }
    ctx->pc = 0x143FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143FE0u);
        ctx->pc = 0x143FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FD8u;
        // 0x143fdc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FD8u, 0x143FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143FE0u;
label_143fe0:
    // 0x143fe0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143fe4:
    // 0x143fe4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_143fe8:
    // 0x143fe8: 0x40f809  jalr        $v0
label_143fec:
    if (ctx->pc == 0x143FECu) {
        ctx->pc = 0x143FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE8u;
        // 0x143fec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143FF0u;
        goto label_143ff0;
    }
    ctx->pc = 0x143FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143FF0u);
        ctx->pc = 0x143FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FE8u;
        // 0x143fec: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FE8u, 0x143FF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143FF0u;
label_143ff0:
    // 0x143ff0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ff4:
    // 0x143ff4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_143ff8:
    // 0x143ff8: 0x40f809  jalr        $v0
label_143ffc:
    if (ctx->pc == 0x143FFCu) {
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144000u;
        goto label_144000;
    }
    ctx->pc = 0x143FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144000u);
        ctx->pc = 0x143FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143FF8u;
        // 0x143ffc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143FF8u, 0x144000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144000u;
label_144000:
    // 0x144000: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144004:
    // 0x144004: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x144004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_144008:
    // 0x144008: 0x40f809  jalr        $v0
label_14400c:
    if (ctx->pc == 0x14400Cu) {
        ctx->pc = 0x14400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144008u;
        // 0x14400c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144010u;
        goto label_144010;
    }
    ctx->pc = 0x144008u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144010u);
        ctx->pc = 0x14400Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144008u;
        // 0x14400c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144008u, 0x144010u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144010u;
label_144010:
    // 0x144010: 0x8e458494  lw          $a1, -0x7B6C($s2)
    ctx->pc = 0x144010u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935700)));
label_144014:
    // 0x144014: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x144014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_144018:
    // 0x144018: 0x40f809  jalr        $v0
label_14401c:
    if (ctx->pc == 0x14401Cu) {
        ctx->pc = 0x14401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144018u;
        // 0x14401c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144020u;
        goto label_144020;
    }
    ctx->pc = 0x144018u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144020u);
        ctx->pc = 0x14401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144018u;
        // 0x14401c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144018u, 0x144020u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144020u;
label_144020:
    // 0x144020: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144024:
    // 0x144024: 0xc07cc0a  jal         func_1F3028
label_144028:
    if (ctx->pc == 0x144028u) {
        ctx->pc = 0x144028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144024u;
        // 0x144028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14402Cu;
        goto label_14402c;
    }
    ctx->pc = 0x144024u;
    SET_GPR_U32(ctx, 31, 0x14402Cu);
    ctx->pc = 0x144028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144024u;
    // 0x144028: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x144024u, 0x14402Cu)) {
        return;
    }
    ctx->pc = 0x14402Cu;
label_14402c:
    // 0x14402c: 0x8ee2012c  lw          $v0, 0x12C($s7)
    ctx->pc = 0x14402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
label_144030:
    // 0x144030: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x144030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_144034:
    // 0x144034: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x144034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_144038:
    // 0x144038: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x144038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_14403c:
    // 0x14403c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x14403cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_144040:
    // 0x144040: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x144040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_144044:
    // 0x144044: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x144044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_144048:
    // 0x144048: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x144048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14404c:
    // 0x14404c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x14404cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_144050:
    // 0x144050: 0xb3a30107  sdl         $v1, 0x107($sp)
    ctx->pc = 0x144050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144054:
    // 0x144054: 0xb7a30100  sdr         $v1, 0x100($sp)
    ctx->pc = 0x144054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144058:
    // 0x144058: 0xb3a4010f  sdl         $a0, 0x10F($sp)
    ctx->pc = 0x144058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14405c:
    // 0x14405c: 0xb7a40108  sdr         $a0, 0x108($sp)
    ctx->pc = 0x14405cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144060:
    // 0x144060: 0xb3a50117  sdl         $a1, 0x117($sp)
    ctx->pc = 0x144060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144064:
    // 0x144064: 0xb7a50110  sdr         $a1, 0x110($sp)
    ctx->pc = 0x144064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144068:
    // 0x144068: 0xb3a6011f  sdl         $a2, 0x11F($sp)
    ctx->pc = 0x144068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 287); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14406c:
    // 0x14406c: 0xb7a60118  sdr         $a2, 0x118($sp)
    ctx->pc = 0x14406cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 280); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144070:
    // 0x144070: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x144070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_144074:
    // 0x144074: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x144074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_144078:
    // 0x144078: 0x6844002f  ldl         $a0, 0x2F($v0)
    ctx->pc = 0x144078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_14407c:
    // 0x14407c: 0x6c440028  ldr         $a0, 0x28($v0)
    ctx->pc = 0x14407cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_144080:
    // 0x144080: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x144080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_144084:
    // 0x144084: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x144084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_144088:
    // 0x144088: 0x6846003f  ldl         $a2, 0x3F($v0)
    ctx->pc = 0x144088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_14408c:
    // 0x14408c: 0x6c460038  ldr         $a2, 0x38($v0)
    ctx->pc = 0x14408cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_144090:
    // 0x144090: 0xb3a30127  sdl         $v1, 0x127($sp)
    ctx->pc = 0x144090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_144094:
    // 0x144094: 0xb7a30120  sdr         $v1, 0x120($sp)
    ctx->pc = 0x144094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_144098:
    // 0x144098: 0xb3a4012f  sdl         $a0, 0x12F($sp)
    ctx->pc = 0x144098u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14409c:
    // 0x14409c: 0xb7a40128  sdr         $a0, 0x128($sp)
    ctx->pc = 0x14409cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1440a0:
    // 0x1440a0: 0xb3a50137  sdl         $a1, 0x137($sp)
    ctx->pc = 0x1440a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 311); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1440a4:
    // 0x1440a4: 0xb7a50130  sdr         $a1, 0x130($sp)
    ctx->pc = 0x1440a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 304); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1440a8:
    // 0x1440a8: 0xb3a6013f  sdl         $a2, 0x13F($sp)
    ctx->pc = 0x1440a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 319); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1440ac:
    // 0x1440ac: 0xb7a60138  sdr         $a2, 0x138($sp)
    ctx->pc = 0x1440acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 312); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1440b0:
    // 0x1440b0: 0xc7a50120  lwc1        $f5, 0x120($sp)
    ctx->pc = 0x1440b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1440b4:
    // 0x1440b4: 0x3c013ba3  lui         $at, 0x3BA3
    ctx->pc = 0x1440b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15267 << 16));
label_1440b8:
    // 0x1440b8: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x1440b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_1440bc:
    // 0x1440bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1440bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1440c0:
    // 0x1440c0: 0xc7a30124  lwc1        $f3, 0x124($sp)
    ctx->pc = 0x1440c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1440c4:
    // 0x1440c4: 0xc7a40128  lwc1        $f4, 0x128($sp)
    ctx->pc = 0x1440c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1440c8:
    // 0x1440c8: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x1440c8u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_1440cc:
    // 0x1440cc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x1440ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1440d0:
    // 0x1440d0: 0xc7a20130  lwc1        $f2, 0x130($sp)
    ctx->pc = 0x1440d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1440d4:
    // 0x1440d4: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x1440d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1440d8:
    // 0x1440d8: 0xc7a10134  lwc1        $f1, 0x134($sp)
    ctx->pc = 0x1440d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1440dc:
    // 0x1440dc: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x1440dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1440e0:
    // 0x1440e0: 0x46051080  add.s       $f2, $f2, $f5
    ctx->pc = 0x1440e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[5]);
label_1440e4:
    // 0x1440e4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1440e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1440e8:
    // 0x1440e8: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x1440e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_1440ec:
    // 0x1440ec: 0xe7a20130  swc1        $f2, 0x130($sp)
    ctx->pc = 0x1440ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_1440f0:
    // 0x1440f0: 0xe7a10134  swc1        $f1, 0x134($sp)
    ctx->pc = 0x1440f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_1440f4:
    // 0x1440f4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x1440f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_1440f8:
    // 0x1440f8: 0x27b10040  addiu       $s1, $sp, 0x40
    ctx->pc = 0x1440f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_1440fc:
    // 0x1440fc: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1440fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_144100:
    // 0x144100: 0xc092e7c  jal         func_24B9F0
label_144104:
    if (ctx->pc == 0x144104u) {
        ctx->pc = 0x144104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144100u;
        // 0x144104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144108u;
        goto label_144108;
    }
    ctx->pc = 0x144100u;
    SET_GPR_U32(ctx, 31, 0x144108u);
    ctx->pc = 0x144104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144100u;
    // 0x144104: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x144100u, 0x144108u)) {
        return;
    }
    ctx->pc = 0x144108u;
label_144108:
    // 0x144108: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x144108u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_14410c:
    // 0x14410c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x14410cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_144110:
    // 0x144110: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x144110u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_144114:
    // 0x144114: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x144114u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_144118:
    // 0x144118: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x144118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_14411c:
    // 0x14411c: 0x24020208  addiu       $v0, $zero, 0x208
    ctx->pc = 0x14411cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_144120:
    // 0x144120: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x144120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144124:
    // 0x144124: 0xafa3014c  sw          $v1, 0x14C($sp)
    ctx->pc = 0x144124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
label_144128:
    // 0x144128: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x144128u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_14412c:
    // 0x14412c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x14412cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_144130:
    // 0x144130: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x144130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_144134:
    // 0x144134: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x144134u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144138:
    // 0x144138: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x144138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_14413c:
    // 0x14413c: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x14413cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_144140:
    // 0x144140: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x144140u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_144144:
    // 0x144144: 0x3c12006b  lui         $s2, 0x6B
    ctx->pc = 0x144144u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)107 << 16));
label_144148:
    // 0x144148: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x144148u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_14414c:
    // 0x14414c: 0x3c14006b  lui         $s4, 0x6B
    ctx->pc = 0x14414cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)107 << 16));
label_144150:
    // 0x144150: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x144150u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_144154:
    // 0x144154: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x144154u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144158:
    // 0x144158: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x144158u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_14415c:
    // 0x14415c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x14415cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_144160:
    // 0x144160: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x144160u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_144164:
    // 0x144164: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x144164u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_144168:
    // 0x144168: 0xe7b400d4  swc1        $f20, 0xD4($sp)
    ctx->pc = 0x144168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_14416c:
    // 0x14416c: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x14416cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_144170:
    // 0x144170: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x144170u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_144174:
    // 0x144174: 0xe7b500e0  swc1        $f21, 0xE0($sp)
    ctx->pc = 0x144174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_144178:
    // 0x144178: 0xe7b400e4  swc1        $f20, 0xE4($sp)
    ctx->pc = 0x144178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_14417c:
    // 0x14417c: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x14417cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_144180:
    // 0x144180: 0xe7b400ec  swc1        $f20, 0xEC($sp)
    ctx->pc = 0x144180u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_144184:
    // 0x144184: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x144184u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_144188:
    // 0x144188: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x144188u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_14418c:
    // 0x14418c: 0xe7b500f8  swc1        $f21, 0xF8($sp)
    ctx->pc = 0x14418cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_144190:
    // 0x144190: 0xafa20148  sw          $v0, 0x148($sp)
    ctx->pc = 0x144190u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 2));
label_144194:
    // 0x144194: 0xc0a5dfc  jal         func_2977F0
label_144198:
    if (ctx->pc == 0x144198u) {
        ctx->pc = 0x144198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144194u;
        // 0x144198: 0xe7b400fc  swc1        $f20, 0xFC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14419Cu;
        goto label_14419c;
    }
    ctx->pc = 0x144194u;
    SET_GPR_U32(ctx, 31, 0x14419Cu);
    ctx->pc = 0x144198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144194u;
    // 0x144198: 0xe7b400fc  swc1        $f20, 0xFC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x144194u, 0x14419Cu)) {
        return;
    }
    ctx->pc = 0x14419Cu;
label_14419c:
    // 0x14419c: 0x8ee400f0  lw          $a0, 0xF0($s7)
    ctx->pc = 0x14419cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_1441a0:
    // 0x1441a0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1441a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1441a4:
    // 0x1441a4: 0xc097a9e  jal         func_25EA78
label_1441a8:
    if (ctx->pc == 0x1441A8u) {
        ctx->pc = 0x1441A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441A4u;
        // 0x1441a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441ACu;
        goto label_1441ac;
    }
    ctx->pc = 0x1441A4u;
    SET_GPR_U32(ctx, 31, 0x1441ACu);
    ctx->pc = 0x1441A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441A4u;
    // 0x1441a8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x1441A4u, 0x1441ACu)) {
        return;
    }
    ctx->pc = 0x1441ACu;
label_1441ac:
    // 0x1441ac: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1441acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1441b0:
    // 0x1441b0: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1441b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1441b4:
    // 0x1441b4: 0x40f809  jalr        $v0
label_1441b8:
    if (ctx->pc == 0x1441B8u) {
        ctx->pc = 0x1441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441B4u;
        // 0x1441b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441BCu;
        goto label_1441bc;
    }
    ctx->pc = 0x1441B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1441BCu);
        ctx->pc = 0x1441B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441B4u;
        // 0x1441b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1441B4u, 0x1441BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1441BCu;
label_1441bc:
    // 0x1441bc: 0x8e65848c  lw          $a1, -0x7B74($s3)
    ctx->pc = 0x1441bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935692)));
label_1441c0:
    // 0x1441c0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1441c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1441c4:
    // 0x1441c4: 0x40f809  jalr        $v0
label_1441c8:
    if (ctx->pc == 0x1441C8u) {
        ctx->pc = 0x1441C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441C4u;
        // 0x1441c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441CCu;
        goto label_1441cc;
    }
    ctx->pc = 0x1441C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1441CCu);
        ctx->pc = 0x1441C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441C4u;
        // 0x1441c8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1441C4u, 0x1441CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1441CCu;
label_1441cc:
    // 0x1441cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1441ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1441d0:
    // 0x1441d0: 0xc08c4aa  jal         func_2312A8
label_1441d4:
    if (ctx->pc == 0x1441D4u) {
        ctx->pc = 0x1441D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441D0u;
        // 0x1441d4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441D8u;
        goto label_1441d8;
    }
    ctx->pc = 0x1441D0u;
    SET_GPR_U32(ctx, 31, 0x1441D8u);
    ctx->pc = 0x1441D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441D0u;
    // 0x1441d4: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x1441D0u, 0x1441D8u)) {
        return;
    }
    ctx->pc = 0x1441D8u;
label_1441d8:
    // 0x1441d8: 0x8e64848c  lw          $a0, -0x7B74($s3)
    ctx->pc = 0x1441d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935692)));
label_1441dc:
    // 0x1441dc: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x1441dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_1441e0:
    // 0x1441e0: 0xc091de2  jal         func_247788
label_1441e4:
    if (ctx->pc == 0x1441E4u) {
        ctx->pc = 0x1441E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441E0u;
        // 0x1441e4: 0x27a60144  addiu       $a2, $sp, 0x144 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1441E8u;
        goto label_1441e8;
    }
    ctx->pc = 0x1441E0u;
    SET_GPR_U32(ctx, 31, 0x1441E8u);
    ctx->pc = 0x1441E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441E0u;
    // 0x1441e4: 0x27a60144  addiu       $a2, $sp, 0x144 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 324));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x1441E0u, 0x1441E8u)) {
        return;
    }
    ctx->pc = 0x1441E8u;
label_1441e8:
    // 0x1441e8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x1441e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1441ec:
    // 0x1441ec: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1441ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1441f0:
    // 0x1441f0: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x1441f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_1441f4:
    // 0x1441f4: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1441f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_1441f8:
    // 0x1441f8: 0x52942  srl         $a1, $a1, 5
    ctx->pc = 0x1441f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_1441fc:
    // 0x1441fc: 0xc091f3e  jal         func_247CF8
label_144200:
    if (ctx->pc == 0x144200u) {
        ctx->pc = 0x144200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1441FCu;
        // 0x144200: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x144204u;
        goto label_144204;
    }
    ctx->pc = 0x1441FCu;
    SET_GPR_U32(ctx, 31, 0x144204u);
    ctx->pc = 0x144200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1441FCu;
    // 0x144200: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247CF8u, 0x1441FCu, 0x144204u)) {
        return;
    }
    ctx->pc = 0x144204u;
label_144204:
    // 0x144204: 0x8ee5012c  lw          $a1, 0x12C($s7)
    ctx->pc = 0x144204u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 300)));
label_144208:
    // 0x144208: 0xc092e7c  jal         func_24B9F0
label_14420c:
    if (ctx->pc == 0x14420Cu) {
        ctx->pc = 0x14420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144208u;
        // 0x14420c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144210u;
        goto label_144210;
    }
    ctx->pc = 0x144208u;
    SET_GPR_U32(ctx, 31, 0x144210u);
    ctx->pc = 0x14420Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144208u;
    // 0x14420c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B9F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B9F0u, 0x144208u, 0x144210u)) {
        return;
    }
    ctx->pc = 0x144210u;
label_144210:
    // 0x144210: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x144210u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_144214:
    // 0x144214: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x144214u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_144218:
    // 0x144218: 0x3c01bf00  lui         $at, 0xBF00
    ctx->pc = 0x144218u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48896 << 16));
label_14421c:
    // 0x14421c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14421cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_144220:
    // 0x144220: 0xc6ec0174  lwc1        $f12, 0x174($s7)
    ctx->pc = 0x144220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_144224:
    // 0x144224: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x144224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_144228:
    // 0x144228: 0xe7a100b4  swc1        $f1, 0xB4($sp)
    ctx->pc = 0x144228u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_14422c:
    // 0x14422c: 0xe7b4006c  swc1        $f20, 0x6C($sp)
    ctx->pc = 0x14422cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_144230:
    // 0x144230: 0xe7b4005c  swc1        $f20, 0x5C($sp)
    ctx->pc = 0x144230u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_144234:
    // 0x144234: 0xe7b4004c  swc1        $f20, 0x4C($sp)
    ctx->pc = 0x144234u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
label_144238:
    // 0x144238: 0xe7b5007c  swc1        $f21, 0x7C($sp)
    ctx->pc = 0x144238u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_14423c:
    // 0x14423c: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x14423cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_144240:
    // 0x144240: 0xe7b40084  swc1        $f20, 0x84($sp)
    ctx->pc = 0x144240u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_144244:
    // 0x144244: 0xe7b40088  swc1        $f20, 0x88($sp)
    ctx->pc = 0x144244u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_144248:
    // 0x144248: 0xe7b4008c  swc1        $f20, 0x8C($sp)
    ctx->pc = 0x144248u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
label_14424c:
    // 0x14424c: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x14424cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_144250:
    // 0x144250: 0xe7b40098  swc1        $f20, 0x98($sp)
    ctx->pc = 0x144250u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_144254:
    // 0x144254: 0xe7b4009c  swc1        $f20, 0x9C($sp)
    ctx->pc = 0x144254u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
label_144258:
    // 0x144258: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x144258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_14425c:
    // 0x14425c: 0xe7b400a4  swc1        $f20, 0xA4($sp)
    ctx->pc = 0x14425cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_144260:
    // 0x144260: 0xe7b400a8  swc1        $f20, 0xA8($sp)
    ctx->pc = 0x144260u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_144264:
    // 0x144264: 0xe7b500ac  swc1        $f21, 0xAC($sp)
    ctx->pc = 0x144264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_144268:
    // 0x144268: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x144268u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_14426c:
    // 0x14426c: 0xe7b500b8  swc1        $f21, 0xB8($sp)
    ctx->pc = 0x14426cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_144270:
    // 0x144270: 0xc09b1a0  jal         func_26C680
label_144274:
    if (ctx->pc == 0x144274u) {
        ctx->pc = 0x144274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144270u;
        // 0x144274: 0xe7b400bc  swc1        $f20, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x144278u;
        goto label_144278;
    }
    ctx->pc = 0x144270u;
    SET_GPR_U32(ctx, 31, 0x144278u);
    ctx->pc = 0x144274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144270u;
    // 0x144274: 0xe7b400bc  swc1        $f20, 0xBC($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x144270u, 0x144278u)) {
        return;
    }
    ctx->pc = 0x144278u;
label_144278:
    // 0x144278: 0x4600a803  div.s       $f0, $f21, $f0
    ctx->pc = 0x144278u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[21], ctx->f[0]);
label_14427c:
    // 0x14427c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x14427cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_144280:
    // 0x144280: 0xe7b500ec  swc1        $f21, 0xEC($sp)
    ctx->pc = 0x144280u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
label_144284:
    // 0x144284: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x144284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_144288:
    // 0x144288: 0xe7b400fc  swc1        $f20, 0xFC($sp)
    ctx->pc = 0x144288u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_14428c:
    // 0x14428c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x14428cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_144290:
    // 0x144290: 0xe7b400c4  swc1        $f20, 0xC4($sp)
    ctx->pc = 0x144290u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_144294:
    // 0x144294: 0xe7b400c8  swc1        $f20, 0xC8($sp)
    ctx->pc = 0x144294u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_144298:
    // 0x144298: 0xe7b400cc  swc1        $f20, 0xCC($sp)
    ctx->pc = 0x144298u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_14429c:
    // 0x14429c: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x14429cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
label_1442a0:
    // 0x1442a0: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1442a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1442a4:
    // 0x1442a4: 0xe7b400d0  swc1        $f20, 0xD0($sp)
    ctx->pc = 0x1442a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_1442a8:
    // 0x1442a8: 0xe7b400d8  swc1        $f20, 0xD8($sp)
    ctx->pc = 0x1442a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
label_1442ac:
    // 0x1442ac: 0xe7b400dc  swc1        $f20, 0xDC($sp)
    ctx->pc = 0x1442acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
label_1442b0:
    // 0x1442b0: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x1442b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
label_1442b4:
    // 0x1442b4: 0xe7b400e4  swc1        $f20, 0xE4($sp)
    ctx->pc = 0x1442b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
label_1442b8:
    // 0x1442b8: 0xe7b500e8  swc1        $f21, 0xE8($sp)
    ctx->pc = 0x1442b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
label_1442bc:
    // 0x1442bc: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x1442bcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_1442c0:
    // 0x1442c0: 0xe7b400f4  swc1        $f20, 0xF4($sp)
    ctx->pc = 0x1442c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_1442c4:
    // 0x1442c4: 0xc0a5dfc  jal         func_2977F0
label_1442c8:
    if (ctx->pc == 0x1442C8u) {
        ctx->pc = 0x1442C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442C4u;
        // 0x1442c8: 0xe7b400f8  swc1        $f20, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442CCu;
        goto label_1442cc;
    }
    ctx->pc = 0x1442C4u;
    SET_GPR_U32(ctx, 31, 0x1442CCu);
    ctx->pc = 0x1442C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442C4u;
    // 0x1442c8: 0xe7b400f8  swc1        $f20, 0xF8($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x1442C4u, 0x1442CCu)) {
        return;
    }
    ctx->pc = 0x1442CCu;
label_1442cc:
    // 0x1442cc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1442ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1442d0:
    // 0x1442d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1442d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1442d4:
    // 0x1442d4: 0xc0a5dfc  jal         func_2977F0
label_1442d8:
    if (ctx->pc == 0x1442D8u) {
        ctx->pc = 0x1442D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442D4u;
        // 0x1442d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442DCu;
        goto label_1442dc;
    }
    ctx->pc = 0x1442D4u;
    SET_GPR_U32(ctx, 31, 0x1442DCu);
    ctx->pc = 0x1442D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442D4u;
    // 0x1442d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2977F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2977F0u, 0x1442D4u, 0x1442DCu)) {
        return;
    }
    ctx->pc = 0x1442DCu;
label_1442dc:
    // 0x1442dc: 0x8ee400f0  lw          $a0, 0xF0($s7)
    ctx->pc = 0x1442dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 240)));
label_1442e0:
    // 0x1442e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1442e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1442e4:
    // 0x1442e4: 0xc097a9e  jal         func_25EA78
label_1442e8:
    if (ctx->pc == 0x1442E8u) {
        ctx->pc = 0x1442E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442E4u;
        // 0x1442e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442ECu;
        goto label_1442ec;
    }
    ctx->pc = 0x1442E4u;
    SET_GPR_U32(ctx, 31, 0x1442ECu);
    ctx->pc = 0x1442E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442E4u;
    // 0x1442e8: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25EA78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x25EA78u, 0x1442E4u, 0x1442ECu)) {
        return;
    }
    ctx->pc = 0x1442ECu;
label_1442ec:
    // 0x1442ec: 0xc05146c  jal         func_1451B0
label_1442f0:
    if (ctx->pc == 0x1442F0u) {
        ctx->pc = 0x1442F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442ECu;
        // 0x1442f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1442F4u;
        goto label_1442f4;
    }
    ctx->pc = 0x1442ECu;
    SET_GPR_U32(ctx, 31, 0x1442F4u);
    ctx->pc = 0x1442F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442ECu;
    // 0x1442f0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1451B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1451B0u, 0x1442ECu, 0x1442F4u)) {
        return;
    }
    ctx->pc = 0x1442F4u;
label_1442f4:
    // 0x1442f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1442f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1442f8:
    // 0x1442f8: 0xc079cfa  jal         func_1E73E8
label_1442fc:
    if (ctx->pc == 0x1442FCu) {
        ctx->pc = 0x1442FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1442F8u;
        // 0x1442fc: 0xaee20110  sw          $v0, 0x110($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144300u;
        goto label_144300;
    }
    ctx->pc = 0x1442F8u;
    SET_GPR_U32(ctx, 31, 0x144300u);
    ctx->pc = 0x1442FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1442F8u;
    // 0x1442fc: 0xaee20110  sw          $v0, 0x110($s7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 23), 272), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x1442F8u, 0x144300u)) {
        return;
    }
    ctx->pc = 0x144300u;
label_144300:
    // 0x144300: 0x9e4334c8  lwu         $v1, 0x34C8($s2)
    ctx->pc = 0x144300u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 13512)));
label_144304:
    // 0x144304: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_144308:
    // 0x144308: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x144308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_14430c:
    // 0x14430c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x14430cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_144310:
    // 0x144310: 0xc079d0e  jal         func_1E7438
label_144314:
    if (ctx->pc == 0x144314u) {
        ctx->pc = 0x144314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144310u;
        // 0x144314: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144318u;
        goto label_144318;
    }
    ctx->pc = 0x144310u;
    SET_GPR_U32(ctx, 31, 0x144318u);
    ctx->pc = 0x144314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144310u;
    // 0x144314: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144310u, 0x144318u)) {
        return;
    }
    ctx->pc = 0x144318u;
label_144318:
    // 0x144318: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x144318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_14431c:
    // 0x14431c: 0xc079d0e  jal         func_1E7438
label_144320:
    if (ctx->pc == 0x144320u) {
        ctx->pc = 0x144320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14431Cu;
        // 0x144320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144324u;
        goto label_144324;
    }
    ctx->pc = 0x14431Cu;
    SET_GPR_U32(ctx, 31, 0x144324u);
    ctx->pc = 0x144320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14431Cu;
    // 0x144320: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14431Cu, 0x144324u)) {
        return;
    }
    ctx->pc = 0x144324u;
label_144324:
    // 0x144324: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x144324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_144328:
    // 0x144328: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x144328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
label_14432c:
    // 0x14432c: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x14432cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_144330:
    // 0x144330: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x144330u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
label_144334:
    // 0x144334: 0xc079d0e  jal         func_1E7438
label_144338:
    if (ctx->pc == 0x144338u) {
        ctx->pc = 0x144338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144334u;
        // 0x144338: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14433Cu;
        goto label_14433c;
    }
    ctx->pc = 0x144334u;
    SET_GPR_U32(ctx, 31, 0x14433Cu);
    ctx->pc = 0x144338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144334u;
    // 0x144338: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144334u, 0x14433Cu)) {
        return;
    }
    ctx->pc = 0x14433Cu;
label_14433c:
    // 0x14433c: 0xde8234c0  ld          $v0, 0x34C0($s4)
    ctx->pc = 0x14433cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 13504)));
label_144340:
    // 0x144340: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x144340u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_144344:
    // 0x144344: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x144344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_144348:
    // 0x144348: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_14434c:
    // 0x14434c: 0xc079d0e  jal         func_1E7438
label_144350:
    if (ctx->pc == 0x144350u) {
        ctx->pc = 0x144350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14434Cu;
        // 0x144350: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144354u;
        goto label_144354;
    }
    ctx->pc = 0x14434Cu;
    SET_GPR_U32(ctx, 31, 0x144354u);
    ctx->pc = 0x144350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14434Cu;
    // 0x144350: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14434Cu, 0x144354u)) {
        return;
    }
    ctx->pc = 0x144354u;
label_144354:
    // 0x144354: 0xde4534c8  ld          $a1, 0x34C8($s2)
    ctx->pc = 0x144354u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 13512)));
label_144358:
    // 0x144358: 0x3402f320  ori         $v0, $zero, 0xF320
    ctx->pc = 0x144358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)62240);
label_14435c:
    // 0x14435c: 0x214f8  dsll        $v0, $v0, 19
    ctx->pc = 0x14435cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 19);
label_144360:
    // 0x144360: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x144360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_144364:
    // 0x144364: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x144364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_144368:
    // 0x144368: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_14436c:
    // 0x14436c: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x14436cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
label_144370:
    // 0x144370: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x144370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
label_144374:
    // 0x144374: 0xc079d0e  jal         func_1E7438
label_144378:
    if (ctx->pc == 0x144378u) {
        ctx->pc = 0x144378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144374u;
        // 0x144378: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14437Cu;
        goto label_14437c;
    }
    ctx->pc = 0x144374u;
    SET_GPR_U32(ctx, 31, 0x14437Cu);
    ctx->pc = 0x144378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144374u;
    // 0x144378: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144374u, 0x14437Cu)) {
        return;
    }
    ctx->pc = 0x14437Cu;
label_14437c:
    // 0x14437c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_144380:
    // 0x144380: 0xc079d0e  jal         func_1E7438
label_144384:
    if (ctx->pc == 0x144384u) {
        ctx->pc = 0x144384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144380u;
        // 0x144384: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144388u;
        goto label_144388;
    }
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 31, 0x144388u);
    ctx->pc = 0x144384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144380u;
    // 0x144384: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144380u, 0x144388u)) {
        return;
    }
    ctx->pc = 0x144388u;
label_144388:
    // 0x144388: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x144388u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_14438c:
    // 0x14438c: 0x34a50009  ori         $a1, $a1, 0x9
    ctx->pc = 0x14438cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9);
label_144390:
    // 0x144390: 0xc079d0e  jal         func_1E7438
label_144394:
    if (ctx->pc == 0x144394u) {
        ctx->pc = 0x144394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144390u;
        // 0x144394: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144398u;
        goto label_144398;
    }
    ctx->pc = 0x144390u;
    SET_GPR_U32(ctx, 31, 0x144398u);
    ctx->pc = 0x144394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144390u;
    // 0x144394: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144390u, 0x144398u)) {
        return;
    }
    ctx->pc = 0x144398u;
label_144398:
    // 0x144398: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14439c:
    // 0x14439c: 0xc079d0e  jal         func_1E7438
label_1443a0:
    if (ctx->pc == 0x1443A0u) {
        ctx->pc = 0x1443A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14439Cu;
        // 0x1443a0: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443A4u;
        goto label_1443a4;
    }
    ctx->pc = 0x14439Cu;
    SET_GPR_U32(ctx, 31, 0x1443A4u);
    ctx->pc = 0x1443A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14439Cu;
    // 0x1443a0: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14439Cu, 0x1443A4u)) {
        return;
    }
    ctx->pc = 0x1443A4u;
label_1443a4:
    // 0x1443a4: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1443a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1443a8:
    // 0x1443a8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1443a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1443ac:
    // 0x1443ac: 0xc079d0e  jal         func_1E7438
label_1443b0:
    if (ctx->pc == 0x1443B0u) {
        ctx->pc = 0x1443B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443ACu;
        // 0x1443b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443B4u;
        goto label_1443b4;
    }
    ctx->pc = 0x1443ACu;
    SET_GPR_U32(ctx, 31, 0x1443B4u);
    ctx->pc = 0x1443B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443ACu;
    // 0x1443b0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1443ACu, 0x1443B4u)) {
        return;
    }
    ctx->pc = 0x1443B4u;
label_1443b4:
    // 0x1443b4: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x1443b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_1443b8:
    // 0x1443b8: 0x168240  sll         $s0, $s6, 9
    ctx->pc = 0x1443b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 22), 9));
label_1443bc:
    // 0x1443bc: 0x3c42825  or          $a1, $fp, $a0
    ctx->pc = 0x1443bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) | GPR_U64(ctx, 4));
label_1443c0:
    // 0x1443c0: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1443c0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1443c4:
    // 0x1443c4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1443c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1443c8:
    // 0x1443c8: 0xc079d0e  jal         func_1E7438
label_1443cc:
    if (ctx->pc == 0x1443CCu) {
        ctx->pc = 0x1443CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443C8u;
        // 0x1443cc: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443D0u;
        goto label_1443d0;
    }
    ctx->pc = 0x1443C8u;
    SET_GPR_U32(ctx, 31, 0x1443D0u);
    ctx->pc = 0x1443CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443C8u;
    // 0x1443cc: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1443C8u, 0x1443D0u)) {
        return;
    }
    ctx->pc = 0x1443D0u;
label_1443d0:
    // 0x1443d0: 0x27de0200  addiu       $fp, $fp, 0x200
    ctx->pc = 0x1443d0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 512));
label_1443d4:
    // 0x1443d4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1443d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1443d8:
    // 0x1443d8: 0xc079d0e  jal         func_1E7438
label_1443dc:
    if (ctx->pc == 0x1443DCu) {
        ctx->pc = 0x1443DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443D8u;
        // 0x1443dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443E0u;
        goto label_1443e0;
    }
    ctx->pc = 0x1443D8u;
    SET_GPR_U32(ctx, 31, 0x1443E0u);
    ctx->pc = 0x1443DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443D8u;
    // 0x1443dc: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1443D8u, 0x1443E0u)) {
        return;
    }
    ctx->pc = 0x1443E0u;
label_1443e0:
    // 0x1443e0: 0x8fa60148  lw          $a2, 0x148($sp)
    ctx->pc = 0x1443e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_1443e4:
    // 0x1443e4: 0x3c021c08  lui         $v0, 0x1C08
    ctx->pc = 0x1443e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7176 << 16));
label_1443e8:
    // 0x1443e8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1443e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1443ec:
    // 0x1443ec: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x1443ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_1443f0:
    // 0x1443f0: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x1443f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
label_1443f4:
    // 0x1443f4: 0xc079d0e  jal         func_1E7438
label_1443f8:
    if (ctx->pc == 0x1443F8u) {
        ctx->pc = 0x1443F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1443F4u;
        // 0x1443f8: 0xafa60148  sw          $a2, 0x148($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1443FCu;
        goto label_1443fc;
    }
    ctx->pc = 0x1443F4u;
    SET_GPR_U32(ctx, 31, 0x1443FCu);
    ctx->pc = 0x1443F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1443F4u;
    // 0x1443f8: 0xafa60148  sw          $a2, 0x148($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 328), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1443F4u, 0x1443FCu)) {
        return;
    }
    ctx->pc = 0x1443FCu;
label_1443fc:
    // 0x1443fc: 0x8fa3014c  lw          $v1, 0x14C($sp)
    ctx->pc = 0x1443fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 332)));
label_144400:
    // 0x144400: 0x3c041c00  lui         $a0, 0x1C00
    ctx->pc = 0x144400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)7168 << 16));
label_144404:
    // 0x144404: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x144404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_144408:
    // 0x144408: 0x24630200  addiu       $v1, $v1, 0x200
    ctx->pc = 0x144408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 512));
label_14440c:
    // 0x14440c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x14440cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_144410:
    // 0x144410: 0xc079d0e  jal         func_1E7438
label_144414:
    if (ctx->pc == 0x144414u) {
        ctx->pc = 0x144414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144410u;
        // 0x144414: 0xafa3014c  sw          $v1, 0x14C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144418u;
        goto label_144418;
    }
    ctx->pc = 0x144410u;
    SET_GPR_U32(ctx, 31, 0x144418u);
    ctx->pc = 0x144414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144410u;
    // 0x144414: 0xafa3014c  sw          $v1, 0x14C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 332), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144410u, 0x144418u)) {
        return;
    }
    ctx->pc = 0x144418u;
label_144418:
    // 0x144418: 0x2ac20010  slti        $v0, $s6, 0x10
    ctx->pc = 0x144418u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
label_14441c:
    // 0x14441c: 0x5440ffe6  bnel        $v0, $zero, . + 4 + (-0x1A << 2)
label_144420:
    if (ctx->pc == 0x144420u) {
        ctx->pc = 0x144420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14441Cu;
        // 0x144420: 0x3c040008  lui         $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144424u;
        goto label_144424;
    }
    ctx->pc = 0x14441Cu;
    {
        const bool branch_taken_0x14441c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14441c) {
            ctx->pc = 0x144420u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14441Cu;
            // 0x144420: 0x3c040008  lui         $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1443B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1443b8;
        }
    }
    ctx->pc = 0x144424u;
label_144424:
    // 0x144424: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144424u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144428:
    // 0x144428: 0xc079ca0  jal         func_1E7280
label_14442c:
    if (ctx->pc == 0x14442Cu) {
        ctx->pc = 0x14442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144428u;
        // 0x14442c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144430u;
        goto label_144430;
    }
    ctx->pc = 0x144428u;
    SET_GPR_U32(ctx, 31, 0x144430u);
    ctx->pc = 0x14442Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144428u;
    // 0x14442c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x144428u, 0x144430u)) {
        return;
    }
    ctx->pc = 0x144430u;
label_144430:
    // 0x144430: 0x3c121c00  lui         $s2, 0x1C00
    ctx->pc = 0x144430u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7168 << 16));
label_144434:
    // 0x144434: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144438:
    // 0x144438: 0xc091eaa  jal         func_247AA8
label_14443c:
    if (ctx->pc == 0x14443Cu) {
        ctx->pc = 0x14443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144438u;
        // 0x14443c: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144440u;
        goto label_144440;
    }
    ctx->pc = 0x144438u;
    SET_GPR_U32(ctx, 31, 0x144440u);
    ctx->pc = 0x14443Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144438u;
    // 0x14443c: 0x24110200  addiu       $s1, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247AA8u, 0x144438u, 0x144440u)) {
        return;
    }
    ctx->pc = 0x144440u;
label_144440:
    // 0x144440: 0xc079cfa  jal         func_1E73E8
label_144444:
    if (ctx->pc == 0x144444u) {
        ctx->pc = 0x144444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144440u;
        // 0x144444: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144448u;
        goto label_144448;
    }
    ctx->pc = 0x144440u;
    SET_GPR_U32(ctx, 31, 0x144448u);
    ctx->pc = 0x144444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144440u;
    // 0x144444: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x144440u, 0x144448u)) {
        return;
    }
    ctx->pc = 0x144448u;
label_144448:
    // 0x144448: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x144448u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_14444c:
    // 0x14444c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x14444cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_144450:
    // 0x144450: 0x9ca334c8  lwu         $v1, 0x34C8($a1)
    ctx->pc = 0x144450u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 13512)));
label_144454:
    // 0x144454: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_144458:
    // 0x144458: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x144458u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_14445c:
    // 0x14445c: 0xc079d0e  jal         func_1E7438
label_144460:
    if (ctx->pc == 0x144460u) {
        ctx->pc = 0x144460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14445Cu;
        // 0x144460: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144464u;
        goto label_144464;
    }
    ctx->pc = 0x14445Cu;
    SET_GPR_U32(ctx, 31, 0x144464u);
    ctx->pc = 0x144460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14445Cu;
    // 0x144460: 0x652825  or          $a1, $v1, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14445Cu, 0x144464u)) {
        return;
    }
    ctx->pc = 0x144464u;
label_144464:
    // 0x144464: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x144464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_144468:
    // 0x144468: 0xc079d0e  jal         func_1E7438
label_14446c:
    if (ctx->pc == 0x14446Cu) {
        ctx->pc = 0x14446Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144468u;
        // 0x14446c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144470u;
        goto label_144470;
    }
    ctx->pc = 0x144468u;
    SET_GPR_U32(ctx, 31, 0x144470u);
    ctx->pc = 0x14446Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144468u;
    // 0x14446c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144468u, 0x144470u)) {
        return;
    }
    ctx->pc = 0x144470u;
label_144470:
    // 0x144470: 0x3405e000  ori         $a1, $zero, 0xE000
    ctx->pc = 0x144470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57344);
label_144474:
    // 0x144474: 0x52ff8  dsll        $a1, $a1, 31
    ctx->pc = 0x144474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 31);
label_144478:
    // 0x144478: 0x34a58000  ori         $a1, $a1, 0x8000
    ctx->pc = 0x144478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
label_14447c:
    // 0x14447c: 0x52ab8  dsll        $a1, $a1, 10
    ctx->pc = 0x14447cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 10);
label_144480:
    // 0x144480: 0xc079d0e  jal         func_1E7438
label_144484:
    if (ctx->pc == 0x144484u) {
        ctx->pc = 0x144484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144480u;
        // 0x144484: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144488u;
        goto label_144488;
    }
    ctx->pc = 0x144480u;
    SET_GPR_U32(ctx, 31, 0x144488u);
    ctx->pc = 0x144484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144480u;
    // 0x144484: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144480u, 0x144488u)) {
        return;
    }
    ctx->pc = 0x144488u;
label_144488:
    // 0x144488: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x144488u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_14448c:
    // 0x14448c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x14448cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_144490:
    // 0x144490: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x144490u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
label_144494:
    // 0x144494: 0xdcc234c0  ld          $v0, 0x34C0($a2)
    ctx->pc = 0x144494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 13504)));
label_144498:
    // 0x144498: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_14449c:
    // 0x14449c: 0xc079d0e  jal         func_1E7438
label_1444a0:
    if (ctx->pc == 0x1444A0u) {
        ctx->pc = 0x1444A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14449Cu;
        // 0x1444a0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444A4u;
        goto label_1444a4;
    }
    ctx->pc = 0x14449Cu;
    SET_GPR_U32(ctx, 31, 0x1444A4u);
    ctx->pc = 0x1444A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14449Cu;
    // 0x1444a0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14449Cu, 0x1444A4u)) {
        return;
    }
    ctx->pc = 0x1444A4u;
label_1444a4:
    // 0x1444a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x1444a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_1444a8:
    // 0x1444a8: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x1444a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_1444ac:
    // 0x1444ac: 0xc079d0e  jal         func_1E7438
label_1444b0:
    if (ctx->pc == 0x1444B0u) {
        ctx->pc = 0x1444B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444ACu;
        // 0x1444b0: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444B4u;
        goto label_1444b4;
    }
    ctx->pc = 0x1444ACu;
    SET_GPR_U32(ctx, 31, 0x1444B4u);
    ctx->pc = 0x1444B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444ACu;
    // 0x1444b0: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1444ACu, 0x1444B4u)) {
        return;
    }
    ctx->pc = 0x1444B4u;
label_1444b4:
    // 0x1444b4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1444b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1444b8:
    // 0x1444b8: 0xc079d0e  jal         func_1E7438
label_1444bc:
    if (ctx->pc == 0x1444BCu) {
        ctx->pc = 0x1444BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444B8u;
        // 0x1444bc: 0x24050106  addiu       $a1, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444C0u;
        goto label_1444c0;
    }
    ctx->pc = 0x1444B8u;
    SET_GPR_U32(ctx, 31, 0x1444C0u);
    ctx->pc = 0x1444BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444B8u;
    // 0x1444bc: 0x24050106  addiu       $a1, $zero, 0x106 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1444B8u, 0x1444C0u)) {
        return;
    }
    ctx->pc = 0x1444C0u;
label_1444c0:
    // 0x1444c0: 0x34058080  ori         $a1, $zero, 0x8080
    ctx->pc = 0x1444c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
label_1444c4:
    // 0x1444c4: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1444c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_1444c8:
    // 0x1444c8: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x1444c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
label_1444cc:
    // 0x1444cc: 0xc079d0e  jal         func_1E7438
label_1444d0:
    if (ctx->pc == 0x1444D0u) {
        ctx->pc = 0x1444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444CCu;
        // 0x1444d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444D4u;
        goto label_1444d4;
    }
    ctx->pc = 0x1444CCu;
    SET_GPR_U32(ctx, 31, 0x1444D4u);
    ctx->pc = 0x1444D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444CCu;
    // 0x1444d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1444CCu, 0x1444D4u)) {
        return;
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0x102a40  sll         $a1, $s0, 9
    ctx->pc = 0x1444d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
label_1444d8:
    // 0x1444d8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1444d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1444dc:
    // 0x1444dc: 0xc079d0e  jal         func_1E7438
label_1444e0:
    if (ctx->pc == 0x1444E0u) {
        ctx->pc = 0x1444E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444DCu;
        // 0x1444e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444E4u;
        goto label_1444e4;
    }
    ctx->pc = 0x1444DCu;
    SET_GPR_U32(ctx, 31, 0x1444E4u);
    ctx->pc = 0x1444E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444DCu;
    // 0x1444e0: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1444DCu, 0x1444E4u)) {
        return;
    }
    ctx->pc = 0x1444E4u;
label_1444e4:
    // 0x1444e4: 0x2322825  or          $a1, $s1, $s2
    ctx->pc = 0x1444e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 18));
label_1444e8:
    // 0x1444e8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1444e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1444ec:
    // 0x1444ec: 0xc079d0e  jal         func_1E7438
label_1444f0:
    if (ctx->pc == 0x1444F0u) {
        ctx->pc = 0x1444F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444ECu;
        // 0x1444f0: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1444F4u;
        goto label_1444f4;
    }
    ctx->pc = 0x1444ECu;
    SET_GPR_U32(ctx, 31, 0x1444F4u);
    ctx->pc = 0x1444F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1444ECu;
    // 0x1444f0: 0x26310200  addiu       $s1, $s1, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1444ECu, 0x1444F4u)) {
        return;
    }
    ctx->pc = 0x1444F4u;
label_1444f4:
    // 0x1444f4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1444f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1444f8:
    // 0x1444f8: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1444fc:
    if (ctx->pc == 0x1444FCu) {
        ctx->pc = 0x1444FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1444F8u;
        // 0x1444fc: 0x102a40  sll         $a1, $s0, 9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144500u;
        goto label_144500;
    }
    ctx->pc = 0x1444F8u;
    {
        const bool branch_taken_0x1444f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1444f8) {
            ctx->pc = 0x1444FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1444F8u;
            // 0x1444fc: 0x102a40  sll         $a1, $s0, 9 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 9));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1444D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1444d8;
        }
    }
    ctx->pc = 0x144500u;
label_144500:
    // 0x144500: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144504:
    // 0x144504: 0xc079ca0  jal         func_1E7280
label_144508:
    if (ctx->pc == 0x144508u) {
        ctx->pc = 0x144508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144504u;
        // 0x144508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14450Cu;
        goto label_14450c;
    }
    ctx->pc = 0x144504u;
    SET_GPR_U32(ctx, 31, 0x14450Cu);
    ctx->pc = 0x144508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144504u;
    // 0x144508: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x144504u, 0x14450Cu)) {
        return;
    }
    ctx->pc = 0x14450Cu;
label_14450c:
    // 0x14450c: 0x3c1e0008  lui         $fp, 0x8
    ctx->pc = 0x14450cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8 << 16));
label_144510:
    // 0x144510: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x144510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_144514:
    // 0x144514: 0xc079cfa  jal         func_1E73E8
label_144518:
    if (ctx->pc == 0x144518u) {
        ctx->pc = 0x144518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144514u;
        // 0x144518: 0x3c161c08  lui         $s6, 0x1C08 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)7176 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14451Cu;
        goto label_14451c;
    }
    ctx->pc = 0x144514u;
    SET_GPR_U32(ctx, 31, 0x14451Cu);
    ctx->pc = 0x144518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144514u;
    // 0x144518: 0x3c161c08  lui         $s6, 0x1C08 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)7176 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x144514u, 0x14451Cu)) {
        return;
    }
    ctx->pc = 0x14451Cu;
label_14451c:
    // 0x14451c: 0x3c151c00  lui         $s5, 0x1C00
    ctx->pc = 0x14451cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)7168 << 16));
label_144520:
    // 0x144520: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x144520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_144524:
    // 0x144524: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x144524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_144528:
    // 0x144528: 0xdc4534c8  ld          $a1, 0x34C8($v0)
    ctx->pc = 0x144528u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13512)));
label_14452c:
    // 0x14452c: 0x24140208  addiu       $s4, $zero, 0x208
    ctx->pc = 0x14452cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_144530:
    // 0x144530: 0x3402cc80  ori         $v0, $zero, 0xCC80
    ctx->pc = 0x144530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)52352);
label_144534:
    // 0x144534: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x144534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
label_144538:
    // 0x144538: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x144538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
label_14453c:
    // 0x14453c: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x14453cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_144540:
    // 0x144540: 0x24130200  addiu       $s3, $zero, 0x200
    ctx->pc = 0x144540u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_144544:
    // 0x144544: 0x30a501ff  andi        $a1, $a1, 0x1FF
    ctx->pc = 0x144544u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)511);
label_144548:
    // 0x144548: 0x24120008  addiu       $s2, $zero, 0x8
    ctx->pc = 0x144548u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_14454c:
    // 0x14454c: 0x52978  dsll        $a1, $a1, 5
    ctx->pc = 0x14454cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 5);
label_144550:
    // 0x144550: 0xc079d0e  jal         func_1E7438
label_144554:
    if (ctx->pc == 0x144554u) {
        ctx->pc = 0x144554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144550u;
        // 0x144554: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144558u;
        goto label_144558;
    }
    ctx->pc = 0x144550u;
    SET_GPR_U32(ctx, 31, 0x144558u);
    ctx->pc = 0x144554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144550u;
    // 0x144554: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144550u, 0x144558u)) {
        return;
    }
    ctx->pc = 0x144558u;
label_144558:
    // 0x144558: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x144558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_14455c:
    // 0x14455c: 0xc079d0e  jal         func_1E7438
label_144560:
    if (ctx->pc == 0x144560u) {
        ctx->pc = 0x144560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14455Cu;
        // 0x144560: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144564u;
        goto label_144564;
    }
    ctx->pc = 0x14455Cu;
    SET_GPR_U32(ctx, 31, 0x144564u);
    ctx->pc = 0x144560u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14455Cu;
    // 0x144560: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14455Cu, 0x144564u)) {
        return;
    }
    ctx->pc = 0x144564u;
label_144564:
    // 0x144564: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x144564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_144568:
    // 0x144568: 0x34a5000d  ori         $a1, $a1, 0xD
    ctx->pc = 0x144568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13);
label_14456c:
    // 0x14456c: 0xc079d0e  jal         func_1E7438
label_144570:
    if (ctx->pc == 0x144570u) {
        ctx->pc = 0x144570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14456Cu;
        // 0x144570: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144574u;
        goto label_144574;
    }
    ctx->pc = 0x14456Cu;
    SET_GPR_U32(ctx, 31, 0x144574u);
    ctx->pc = 0x144570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14456Cu;
    // 0x144570: 0x24040047  addiu       $a0, $zero, 0x47 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14456Cu, 0x144574u)) {
        return;
    }
    ctx->pc = 0x144574u;
label_144574:
    // 0x144574: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x144574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144578:
    // 0x144578: 0xc079d0e  jal         func_1E7438
label_14457c:
    if (ctx->pc == 0x14457Cu) {
        ctx->pc = 0x14457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144578u;
        // 0x14457c: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144580u;
        goto label_144580;
    }
    ctx->pc = 0x144578u;
    SET_GPR_U32(ctx, 31, 0x144580u);
    ctx->pc = 0x14457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144578u;
    // 0x14457c: 0x24050116  addiu       $a1, $zero, 0x116 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144578u, 0x144580u)) {
        return;
    }
    ctx->pc = 0x144580u;
label_144580:
    // 0x144580: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x144580u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_144584:
    // 0x144584: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x144584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_144588:
    // 0x144588: 0xc079d0e  jal         func_1E7438
label_14458c:
    if (ctx->pc == 0x14458Cu) {
        ctx->pc = 0x14458Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144588u;
        // 0x14458c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144590u;
        goto label_144590;
    }
    ctx->pc = 0x144588u;
    SET_GPR_U32(ctx, 31, 0x144590u);
    ctx->pc = 0x14458Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144588u;
    // 0x14458c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144588u, 0x144590u)) {
        return;
    }
    ctx->pc = 0x144590u;
label_144590:
    // 0x144590: 0x25e2825  or          $a1, $s2, $fp
    ctx->pc = 0x144590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 30));
label_144594:
    // 0x144594: 0x0  nop
    ctx->pc = 0x144594u;
    // NOP
label_144598:
    // 0x144598: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x144598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14459c:
    // 0x14459c: 0xc079d0e  jal         func_1E7438
label_1445a0:
    if (ctx->pc == 0x1445A0u) {
        ctx->pc = 0x1445A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14459Cu;
        // 0x1445a0: 0x118240  sll         $s0, $s1, 9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445A4u;
        goto label_1445a4;
    }
    ctx->pc = 0x14459Cu;
    SET_GPR_U32(ctx, 31, 0x1445A4u);
    ctx->pc = 0x1445A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14459Cu;
    // 0x1445a0: 0x118240  sll         $s0, $s1, 9 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x14459Cu, 0x1445A4u)) {
        return;
    }
    ctx->pc = 0x1445A4u;
label_1445a4:
    // 0x1445a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1445a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1445a8:
    // 0x1445a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1445a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1445ac:
    // 0x1445ac: 0xc079d0e  jal         func_1E7438
label_1445b0:
    if (ctx->pc == 0x1445B0u) {
        ctx->pc = 0x1445B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445ACu;
        // 0x1445b0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445B4u;
        goto label_1445b4;
    }
    ctx->pc = 0x1445ACu;
    SET_GPR_U32(ctx, 31, 0x1445B4u);
    ctx->pc = 0x1445B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445ACu;
    // 0x1445b0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1445ACu, 0x1445B4u)) {
        return;
    }
    ctx->pc = 0x1445B4u;
label_1445b4:
    // 0x1445b4: 0x26520200  addiu       $s2, $s2, 0x200
    ctx->pc = 0x1445b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_1445b8:
    // 0x1445b8: 0x2962825  or          $a1, $s4, $s6
    ctx->pc = 0x1445b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) | GPR_U64(ctx, 22));
label_1445bc:
    // 0x1445bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1445bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1445c0:
    // 0x1445c0: 0xc079d0e  jal         func_1E7438
label_1445c4:
    if (ctx->pc == 0x1445C4u) {
        ctx->pc = 0x1445C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445C0u;
        // 0x1445c4: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445C8u;
        goto label_1445c8;
    }
    ctx->pc = 0x1445C0u;
    SET_GPR_U32(ctx, 31, 0x1445C8u);
    ctx->pc = 0x1445C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445C0u;
    // 0x1445c4: 0x26940200  addiu       $s4, $s4, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1445C0u, 0x1445C8u)) {
        return;
    }
    ctx->pc = 0x1445C8u;
label_1445c8:
    // 0x1445c8: 0x2752825  or          $a1, $s3, $s5
    ctx->pc = 0x1445c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) | GPR_U64(ctx, 21));
label_1445cc:
    // 0x1445cc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1445ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1445d0:
    // 0x1445d0: 0xc079d0e  jal         func_1E7438
label_1445d4:
    if (ctx->pc == 0x1445D4u) {
        ctx->pc = 0x1445D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445D0u;
        // 0x1445d4: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445D8u;
        goto label_1445d8;
    }
    ctx->pc = 0x1445D0u;
    SET_GPR_U32(ctx, 31, 0x1445D8u);
    ctx->pc = 0x1445D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445D0u;
    // 0x1445d4: 0x26730200  addiu       $s3, $s3, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1445D0u, 0x1445D8u)) {
        return;
    }
    ctx->pc = 0x1445D8u;
label_1445d8:
    // 0x1445d8: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1445d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1445dc:
    // 0x1445dc: 0x5440ffee  bnel        $v0, $zero, . + 4 + (-0x12 << 2)
label_1445e0:
    if (ctx->pc == 0x1445E0u) {
        ctx->pc = 0x1445E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445DCu;
        // 0x1445e0: 0x25e2825  or          $a1, $s2, $fp (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445E4u;
        goto label_1445e4;
    }
    ctx->pc = 0x1445DCu;
    {
        const bool branch_taken_0x1445dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1445dc) {
            ctx->pc = 0x1445E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1445DCu;
            // 0x1445e0: 0x25e2825  or          $a1, $s2, $fp (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x144598u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_144598;
        }
    }
    ctx->pc = 0x1445E4u;
label_1445e4:
    // 0x1445e4: 0x2404004a  addiu       $a0, $zero, 0x4A
    ctx->pc = 0x1445e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1445e8:
    // 0x1445e8: 0xc079d0e  jal         func_1E7438
label_1445ec:
    if (ctx->pc == 0x1445ECu) {
        ctx->pc = 0x1445ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1445E8u;
        // 0x1445ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1445F0u;
        goto label_1445f0;
    }
    ctx->pc = 0x1445E8u;
    SET_GPR_U32(ctx, 31, 0x1445F0u);
    ctx->pc = 0x1445ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1445E8u;
    // 0x1445ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1445E8u, 0x1445F0u)) {
        return;
    }
    ctx->pc = 0x1445F0u;
label_1445f0:
    // 0x1445f0: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x1445f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_1445f4:
    // 0x1445f4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x1445f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_1445f8:
    // 0x1445f8: 0x9c8534c8  lwu         $a1, 0x34C8($a0)
    ctx->pc = 0x1445f8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 13512)));
label_1445fc:
    // 0x1445fc: 0x24700fd8  addiu       $s0, $v1, 0xFD8
    ctx->pc = 0x1445fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4056));
label_144600:
    // 0x144600: 0xc079d0e  jal         func_1E7438
label_144604:
    if (ctx->pc == 0x144604u) {
        ctx->pc = 0x144604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144600u;
        // 0x144604: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144608u;
        goto label_144608;
    }
    ctx->pc = 0x144600u;
    SET_GPR_U32(ctx, 31, 0x144608u);
    ctx->pc = 0x144604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144600u;
    // 0x144604: 0x2404004c  addiu       $a0, $zero, 0x4C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144600u, 0x144608u)) {
        return;
    }
    ctx->pc = 0x144608u;
label_144608:
    // 0x144608: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x144608u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_14460c:
    // 0x14460c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x14460cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_144610:
    // 0x144610: 0xc079d0e  jal         func_1E7438
label_144614:
    if (ctx->pc == 0x144614u) {
        ctx->pc = 0x144614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144610u;
        // 0x144614: 0xdcc534c0  ld          $a1, 0x34C0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 13504)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144618u;
        goto label_144618;
    }
    ctx->pc = 0x144610u;
    SET_GPR_U32(ctx, 31, 0x144618u);
    ctx->pc = 0x144614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144610u;
    // 0x144614: 0xdcc534c0  ld          $a1, 0x34C0($a2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 13504)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144610u, 0x144618u)) {
        return;
    }
    ctx->pc = 0x144618u;
label_144618:
    // 0x144618: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x144618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_14461c:
    // 0x14461c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x14461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_144620:
    // 0x144620: 0xc079d0e  jal         func_1E7438
label_144624:
    if (ctx->pc == 0x144624u) {
        ctx->pc = 0x144624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144620u;
        // 0x144624: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144628u;
        goto label_144628;
    }
    ctx->pc = 0x144620u;
    SET_GPR_U32(ctx, 31, 0x144628u);
    ctx->pc = 0x144624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144620u;
    // 0x144624: 0xdc453500  ld          $a1, 0x3500($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144620u, 0x144628u)) {
        return;
    }
    ctx->pc = 0x144628u;
label_144628:
    // 0x144628: 0xc079ca0  jal         func_1E7280
label_14462c:
    if (ctx->pc == 0x14462Cu) {
        ctx->pc = 0x14462Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144628u;
        // 0x14462c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144630u;
        goto label_144630;
    }
    ctx->pc = 0x144628u;
    SET_GPR_U32(ctx, 31, 0x144630u);
    ctx->pc = 0x14462Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144628u;
    // 0x14462c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x144628u, 0x144630u)) {
        return;
    }
    ctx->pc = 0x144630u;
label_144630:
    // 0x144630: 0xc091eaa  jal         func_247AA8
label_144634:
    if (ctx->pc == 0x144634u) {
        ctx->pc = 0x144634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144630u;
        // 0x144634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144638u;
        goto label_144638;
    }
    ctx->pc = 0x144630u;
    SET_GPR_U32(ctx, 31, 0x144638u);
    ctx->pc = 0x144634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144630u;
    // 0x144634: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247AA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247AA8u, 0x144630u, 0x144638u)) {
        return;
    }
    ctx->pc = 0x144638u;
label_144638:
    // 0x144638: 0xc079cfa  jal         func_1E73E8
label_14463c:
    if (ctx->pc == 0x14463Cu) {
        ctx->pc = 0x14463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144638u;
        // 0x14463c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144640u;
        goto label_144640;
    }
    ctx->pc = 0x144638u;
    SET_GPR_U32(ctx, 31, 0x144640u);
    ctx->pc = 0x14463Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144638u;
    // 0x14463c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x144638u, 0x144640u)) {
        return;
    }
    ctx->pc = 0x144640u;
label_144640:
    // 0x144640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_144644:
    // 0x144644: 0xc079d0e  jal         func_1E7438
label_144648:
    if (ctx->pc == 0x144648u) {
        ctx->pc = 0x144648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144644u;
        // 0x144648: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14464Cu;
        goto label_14464c;
    }
    ctx->pc = 0x144644u;
    SET_GPR_U32(ctx, 31, 0x14464Cu);
    ctx->pc = 0x144648u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144644u;
    // 0x144648: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144644u, 0x14464Cu)) {
        return;
    }
    ctx->pc = 0x14464Cu;
label_14464c:
    // 0x14464c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x14464cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_144650:
    // 0x144650: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x144650u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
label_144654:
    // 0x144654: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x144654u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_144658:
    // 0x144658: 0x9c6234c8  lwu         $v0, 0x34C8($v1)
    ctx->pc = 0x144658u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 13512)));
label_14465c:
    // 0x14465c: 0x2404004c  addiu       $a0, $zero, 0x4C
    ctx->pc = 0x14465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_144660:
    // 0x144660: 0xc079d0e  jal         func_1E7438
label_144664:
    if (ctx->pc == 0x144664u) {
        ctx->pc = 0x144664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144660u;
        // 0x144664: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144668u;
        goto label_144668;
    }
    ctx->pc = 0x144660u;
    SET_GPR_U32(ctx, 31, 0x144668u);
    ctx->pc = 0x144664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144660u;
    // 0x144664: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144660u, 0x144668u)) {
        return;
    }
    ctx->pc = 0x144668u;
label_144668:
    // 0x144668: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x144668u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_14466c:
    // 0x14466c: 0xdc8534c0  ld          $a1, 0x34C0($a0)
    ctx->pc = 0x14466cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 13504)));
label_144670:
    // 0x144670: 0xc079d0e  jal         func_1E7438
label_144674:
    if (ctx->pc == 0x144674u) {
        ctx->pc = 0x144674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144670u;
        // 0x144674: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144678u;
        goto label_144678;
    }
    ctx->pc = 0x144670u;
    SET_GPR_U32(ctx, 31, 0x144678u);
    ctx->pc = 0x144674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144670u;
    // 0x144674: 0x2404004e  addiu       $a0, $zero, 0x4E (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144670u, 0x144678u)) {
        return;
    }
    ctx->pc = 0x144678u;
label_144678:
    // 0x144678: 0x3c06006b  lui         $a2, 0x6B
    ctx->pc = 0x144678u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)107 << 16));
label_14467c:
    // 0x14467c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x14467cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_144680:
    // 0x144680: 0xc079d0e  jal         func_1E7438
label_144684:
    if (ctx->pc == 0x144684u) {
        ctx->pc = 0x144684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144680u;
        // 0x144684: 0xdcc53500  ld          $a1, 0x3500($a2) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 13568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144688u;
        goto label_144688;
    }
    ctx->pc = 0x144680u;
    SET_GPR_U32(ctx, 31, 0x144688u);
    ctx->pc = 0x144684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144680u;
    // 0x144684: 0xdcc53500  ld          $a1, 0x3500($a2) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 13568)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144680u, 0x144688u)) {
        return;
    }
    ctx->pc = 0x144688u;
label_144688:
    // 0x144688: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x144688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_14468c:
    // 0x14468c: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x14468cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_144690:
    // 0x144690: 0xc079d0e  jal         func_1E7438
label_144694:
    if (ctx->pc == 0x144694u) {
        ctx->pc = 0x144694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144690u;
        // 0x144694: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144698u;
        goto label_144698;
    }
    ctx->pc = 0x144690u;
    SET_GPR_U32(ctx, 31, 0x144698u);
    ctx->pc = 0x144694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x144690u;
    // 0x144694: 0xdc4534d8  ld          $a1, 0x34D8($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13528)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x144690u, 0x144698u)) {
        return;
    }
    ctx->pc = 0x144698u;
label_144698:
    // 0x144698: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x144698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_14469c:
    // 0x14469c: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x14469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1446a0:
    // 0x1446a0: 0xc079d0e  jal         func_1E7438
label_1446a4:
    if (ctx->pc == 0x1446A4u) {
        ctx->pc = 0x1446A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446A0u;
        // 0x1446a4: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446A8u;
        goto label_1446a8;
    }
    ctx->pc = 0x1446A0u;
    SET_GPR_U32(ctx, 31, 0x1446A8u);
    ctx->pc = 0x1446A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446A0u;
    // 0x1446a4: 0xdc4534e0  ld          $a1, 0x34E0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 13536)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x1446A0u, 0x1446A8u)) {
        return;
    }
    ctx->pc = 0x1446A8u;
label_1446a8:
    // 0x1446a8: 0xc079ca0  jal         func_1E7280
label_1446ac:
    if (ctx->pc == 0x1446ACu) {
        ctx->pc = 0x1446ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446A8u;
        // 0x1446ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446B0u;
        goto label_1446b0;
    }
    ctx->pc = 0x1446A8u;
    SET_GPR_U32(ctx, 31, 0x1446B0u);
    ctx->pc = 0x1446ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446A8u;
    // 0x1446ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x1446A8u, 0x1446B0u)) {
        return;
    }
    ctx->pc = 0x1446B0u;
label_1446b0:
    // 0x1446b0: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1446b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1446b4:
    // 0x1446b4: 0x8c458494  lw          $a1, -0x7B6C($v0)
    ctx->pc = 0x1446b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935700)));
label_1446b8:
    // 0x1446b8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1446b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1446bc:
    // 0x1446bc: 0x40f809  jalr        $v0
label_1446c0:
    if (ctx->pc == 0x1446C0u) {
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446BCu;
        // 0x1446c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446C4u;
        goto label_1446c4;
    }
    ctx->pc = 0x1446BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1446C4u);
        ctx->pc = 0x1446C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446BCu;
        // 0x1446c0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446BCu, 0x1446C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1446C4u;
label_1446c4:
    // 0x1446c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1446c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1446c8:
    // 0x1446c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1446c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1446cc:
    // 0x1446cc: 0x40f809  jalr        $v0
label_1446d0:
    if (ctx->pc == 0x1446D0u) {
        ctx->pc = 0x1446D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446CCu;
        // 0x1446d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446D4u;
        goto label_1446d4;
    }
    ctx->pc = 0x1446CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1446D4u);
        ctx->pc = 0x1446D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446CCu;
        // 0x1446d0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446CCu, 0x1446D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1446D4u;
label_1446d4:
    // 0x1446d4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1446d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1446d8:
    // 0x1446d8: 0xc07cc0a  jal         func_1F3028
label_1446dc:
    if (ctx->pc == 0x1446DCu) {
        ctx->pc = 0x1446DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446D8u;
        // 0x1446dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446E0u;
        goto label_1446e0;
    }
    ctx->pc = 0x1446D8u;
    SET_GPR_U32(ctx, 31, 0x1446E0u);
    ctx->pc = 0x1446DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1446D8u;
    // 0x1446dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3028u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3028u, 0x1446D8u, 0x1446E0u)) {
        return;
    }
    ctx->pc = 0x1446E0u;
label_1446e0:
    // 0x1446e0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1446e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1446e4:
    // 0x1446e4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1446e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1446e8:
    // 0x1446e8: 0x40f809  jalr        $v0
label_1446ec:
    if (ctx->pc == 0x1446ECu) {
        ctx->pc = 0x1446ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446E8u;
        // 0x1446ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1446F0u;
        goto label_1446f0;
    }
    ctx->pc = 0x1446E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1446F0u);
        ctx->pc = 0x1446ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446E8u;
        // 0x1446ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446E8u, 0x1446F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1446F0u;
label_1446f0:
    // 0x1446f0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1446f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1446f4:
    // 0x1446f4: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1446f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1446f8:
    // 0x1446f8: 0x40f809  jalr        $v0
label_1446fc:
    if (ctx->pc == 0x1446FCu) {
        ctx->pc = 0x1446FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446F8u;
        // 0x1446fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144700u;
        goto label_144700;
    }
    ctx->pc = 0x1446F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x144700u);
        ctx->pc = 0x1446FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1446F8u;
        // 0x1446fc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1446F8u, 0x144700u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x144700u;
label_144700:
    // 0x144700: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x144700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_144704:
    // 0x144704: 0xac778480  sw          $s7, -0x7B80($v1)
    ctx->pc = 0x144704u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294935680), GPR_U32(ctx, 23));
label_144708:
    // 0x144708: 0x7bb001e0  lq          $s0, 0x1E0($sp)
    ctx->pc = 0x144708u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_14470c:
    // 0x14470c: 0x7bb101d0  lq          $s1, 0x1D0($sp)
    ctx->pc = 0x14470cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_144710:
    // 0x144710: 0x7bb201c0  lq          $s2, 0x1C0($sp)
    ctx->pc = 0x144710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_144714:
    // 0x144714: 0x7bb301b0  lq          $s3, 0x1B0($sp)
    ctx->pc = 0x144714u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_144718:
    // 0x144718: 0x7bb401a0  lq          $s4, 0x1A0($sp)
    ctx->pc = 0x144718u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_14471c:
    // 0x14471c: 0x7bb50190  lq          $s5, 0x190($sp)
    ctx->pc = 0x14471cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_144720:
    // 0x144720: 0x7bb60180  lq          $s6, 0x180($sp)
    ctx->pc = 0x144720u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_144724:
    // 0x144724: 0x7bb70170  lq          $s7, 0x170($sp)
    ctx->pc = 0x144724u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_144728:
    // 0x144728: 0x7bbe0160  lq          $fp, 0x160($sp)
    ctx->pc = 0x144728u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_14472c:
    // 0x14472c: 0xdfbf0150  ld          $ra, 0x150($sp)
    ctx->pc = 0x14472cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_144730:
    // 0x144730: 0xc7b501f8  lwc1        $f21, 0x1F8($sp)
    ctx->pc = 0x144730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_144734:
    // 0x144734: 0xc7b401f0  lwc1        $f20, 0x1F0($sp)
    ctx->pc = 0x144734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_144738:
    // 0x144738: 0x3e00008  jr          $ra
label_14473c:
    if (ctx->pc == 0x14473Cu) {
        ctx->pc = 0x14473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144738u;
        // 0x14473c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x144740u;
        goto label_fallthrough_0x144738;
    }
    ctx->pc = 0x144738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x144738u;
        // 0x14473c: 0x27bd0200  addiu       $sp, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x144738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x144738:
    ctx->pc = 0x144740u;
}
