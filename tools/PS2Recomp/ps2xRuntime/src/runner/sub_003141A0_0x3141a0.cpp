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

// Function: sub_003141A0
// Address: 0x3141a0 - 0x314cb0
void sub_003141A0_0x3141a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003141A0_0x3141a0");
#endif

    switch (ctx->pc) {
        case 0x3141a0u: goto label_3141a0;
        case 0x3141a4u: goto label_3141a4;
        case 0x3141a8u: goto label_3141a8;
        case 0x3141acu: goto label_3141ac;
        case 0x3141b0u: goto label_3141b0;
        case 0x3141b4u: goto label_3141b4;
        case 0x3141b8u: goto label_3141b8;
        case 0x3141bcu: goto label_3141bc;
        case 0x3141c0u: goto label_3141c0;
        case 0x3141c4u: goto label_3141c4;
        case 0x3141c8u: goto label_3141c8;
        case 0x3141ccu: goto label_3141cc;
        case 0x3141d0u: goto label_3141d0;
        case 0x3141d4u: goto label_3141d4;
        case 0x3141d8u: goto label_3141d8;
        case 0x3141dcu: goto label_3141dc;
        case 0x3141e0u: goto label_3141e0;
        case 0x3141e4u: goto label_3141e4;
        case 0x3141e8u: goto label_3141e8;
        case 0x3141ecu: goto label_3141ec;
        case 0x3141f0u: goto label_3141f0;
        case 0x3141f4u: goto label_3141f4;
        case 0x3141f8u: goto label_3141f8;
        case 0x3141fcu: goto label_3141fc;
        case 0x314200u: goto label_314200;
        case 0x314204u: goto label_314204;
        case 0x314208u: goto label_314208;
        case 0x31420cu: goto label_31420c;
        case 0x314210u: goto label_314210;
        case 0x314214u: goto label_314214;
        case 0x314218u: goto label_314218;
        case 0x31421cu: goto label_31421c;
        case 0x314220u: goto label_314220;
        case 0x314224u: goto label_314224;
        case 0x314228u: goto label_314228;
        case 0x31422cu: goto label_31422c;
        case 0x314230u: goto label_314230;
        case 0x314234u: goto label_314234;
        case 0x314238u: goto label_314238;
        case 0x31423cu: goto label_31423c;
        case 0x314240u: goto label_314240;
        case 0x314244u: goto label_314244;
        case 0x314248u: goto label_314248;
        case 0x31424cu: goto label_31424c;
        case 0x314250u: goto label_314250;
        case 0x314254u: goto label_314254;
        case 0x314258u: goto label_314258;
        case 0x31425cu: goto label_31425c;
        case 0x314260u: goto label_314260;
        case 0x314264u: goto label_314264;
        case 0x314268u: goto label_314268;
        case 0x31426cu: goto label_31426c;
        case 0x314270u: goto label_314270;
        case 0x314274u: goto label_314274;
        case 0x314278u: goto label_314278;
        case 0x31427cu: goto label_31427c;
        case 0x314280u: goto label_314280;
        case 0x314284u: goto label_314284;
        case 0x314288u: goto label_314288;
        case 0x31428cu: goto label_31428c;
        case 0x314290u: goto label_314290;
        case 0x314294u: goto label_314294;
        case 0x314298u: goto label_314298;
        case 0x31429cu: goto label_31429c;
        case 0x3142a0u: goto label_3142a0;
        case 0x3142a4u: goto label_3142a4;
        case 0x3142a8u: goto label_3142a8;
        case 0x3142acu: goto label_3142ac;
        case 0x3142b0u: goto label_3142b0;
        case 0x3142b4u: goto label_3142b4;
        case 0x3142b8u: goto label_3142b8;
        case 0x3142bcu: goto label_3142bc;
        case 0x3142c0u: goto label_3142c0;
        case 0x3142c4u: goto label_3142c4;
        case 0x3142c8u: goto label_3142c8;
        case 0x3142ccu: goto label_3142cc;
        case 0x3142d0u: goto label_3142d0;
        case 0x3142d4u: goto label_3142d4;
        case 0x3142d8u: goto label_3142d8;
        case 0x3142dcu: goto label_3142dc;
        case 0x3142e0u: goto label_3142e0;
        case 0x3142e4u: goto label_3142e4;
        case 0x3142e8u: goto label_3142e8;
        case 0x3142ecu: goto label_3142ec;
        case 0x3142f0u: goto label_3142f0;
        case 0x3142f4u: goto label_3142f4;
        case 0x3142f8u: goto label_3142f8;
        case 0x3142fcu: goto label_3142fc;
        case 0x314300u: goto label_314300;
        case 0x314304u: goto label_314304;
        case 0x314308u: goto label_314308;
        case 0x31430cu: goto label_31430c;
        case 0x314310u: goto label_314310;
        case 0x314314u: goto label_314314;
        case 0x314318u: goto label_314318;
        case 0x31431cu: goto label_31431c;
        case 0x314320u: goto label_314320;
        case 0x314324u: goto label_314324;
        case 0x314328u: goto label_314328;
        case 0x31432cu: goto label_31432c;
        case 0x314330u: goto label_314330;
        case 0x314334u: goto label_314334;
        case 0x314338u: goto label_314338;
        case 0x31433cu: goto label_31433c;
        case 0x314340u: goto label_314340;
        case 0x314344u: goto label_314344;
        case 0x314348u: goto label_314348;
        case 0x31434cu: goto label_31434c;
        case 0x314350u: goto label_314350;
        case 0x314354u: goto label_314354;
        case 0x314358u: goto label_314358;
        case 0x31435cu: goto label_31435c;
        case 0x314360u: goto label_314360;
        case 0x314364u: goto label_314364;
        case 0x314368u: goto label_314368;
        case 0x31436cu: goto label_31436c;
        case 0x314370u: goto label_314370;
        case 0x314374u: goto label_314374;
        case 0x314378u: goto label_314378;
        case 0x31437cu: goto label_31437c;
        case 0x314380u: goto label_314380;
        case 0x314384u: goto label_314384;
        case 0x314388u: goto label_314388;
        case 0x31438cu: goto label_31438c;
        case 0x314390u: goto label_314390;
        case 0x314394u: goto label_314394;
        case 0x314398u: goto label_314398;
        case 0x31439cu: goto label_31439c;
        case 0x3143a0u: goto label_3143a0;
        case 0x3143a4u: goto label_3143a4;
        case 0x3143a8u: goto label_3143a8;
        case 0x3143acu: goto label_3143ac;
        case 0x3143b0u: goto label_3143b0;
        case 0x3143b4u: goto label_3143b4;
        case 0x3143b8u: goto label_3143b8;
        case 0x3143bcu: goto label_3143bc;
        case 0x3143c0u: goto label_3143c0;
        case 0x3143c4u: goto label_3143c4;
        case 0x3143c8u: goto label_3143c8;
        case 0x3143ccu: goto label_3143cc;
        case 0x3143d0u: goto label_3143d0;
        case 0x3143d4u: goto label_3143d4;
        case 0x3143d8u: goto label_3143d8;
        case 0x3143dcu: goto label_3143dc;
        case 0x3143e0u: goto label_3143e0;
        case 0x3143e4u: goto label_3143e4;
        case 0x3143e8u: goto label_3143e8;
        case 0x3143ecu: goto label_3143ec;
        case 0x3143f0u: goto label_3143f0;
        case 0x3143f4u: goto label_3143f4;
        case 0x3143f8u: goto label_3143f8;
        case 0x3143fcu: goto label_3143fc;
        case 0x314400u: goto label_314400;
        case 0x314404u: goto label_314404;
        case 0x314408u: goto label_314408;
        case 0x31440cu: goto label_31440c;
        case 0x314410u: goto label_314410;
        case 0x314414u: goto label_314414;
        case 0x314418u: goto label_314418;
        case 0x31441cu: goto label_31441c;
        case 0x314420u: goto label_314420;
        case 0x314424u: goto label_314424;
        case 0x314428u: goto label_314428;
        case 0x31442cu: goto label_31442c;
        case 0x314430u: goto label_314430;
        case 0x314434u: goto label_314434;
        case 0x314438u: goto label_314438;
        case 0x31443cu: goto label_31443c;
        case 0x314440u: goto label_314440;
        case 0x314444u: goto label_314444;
        case 0x314448u: goto label_314448;
        case 0x31444cu: goto label_31444c;
        case 0x314450u: goto label_314450;
        case 0x314454u: goto label_314454;
        case 0x314458u: goto label_314458;
        case 0x31445cu: goto label_31445c;
        case 0x314460u: goto label_314460;
        case 0x314464u: goto label_314464;
        case 0x314468u: goto label_314468;
        case 0x31446cu: goto label_31446c;
        case 0x314470u: goto label_314470;
        case 0x314474u: goto label_314474;
        case 0x314478u: goto label_314478;
        case 0x31447cu: goto label_31447c;
        case 0x314480u: goto label_314480;
        case 0x314484u: goto label_314484;
        case 0x314488u: goto label_314488;
        case 0x31448cu: goto label_31448c;
        case 0x314490u: goto label_314490;
        case 0x314494u: goto label_314494;
        case 0x314498u: goto label_314498;
        case 0x31449cu: goto label_31449c;
        case 0x3144a0u: goto label_3144a0;
        case 0x3144a4u: goto label_3144a4;
        case 0x3144a8u: goto label_3144a8;
        case 0x3144acu: goto label_3144ac;
        case 0x3144b0u: goto label_3144b0;
        case 0x3144b4u: goto label_3144b4;
        case 0x3144b8u: goto label_3144b8;
        case 0x3144bcu: goto label_3144bc;
        case 0x3144c0u: goto label_3144c0;
        case 0x3144c4u: goto label_3144c4;
        case 0x3144c8u: goto label_3144c8;
        case 0x3144ccu: goto label_3144cc;
        case 0x3144d0u: goto label_3144d0;
        case 0x3144d4u: goto label_3144d4;
        case 0x3144d8u: goto label_3144d8;
        case 0x3144dcu: goto label_3144dc;
        case 0x3144e0u: goto label_3144e0;
        case 0x3144e4u: goto label_3144e4;
        case 0x3144e8u: goto label_3144e8;
        case 0x3144ecu: goto label_3144ec;
        case 0x3144f0u: goto label_3144f0;
        case 0x3144f4u: goto label_3144f4;
        case 0x3144f8u: goto label_3144f8;
        case 0x3144fcu: goto label_3144fc;
        case 0x314500u: goto label_314500;
        case 0x314504u: goto label_314504;
        case 0x314508u: goto label_314508;
        case 0x31450cu: goto label_31450c;
        case 0x314510u: goto label_314510;
        case 0x314514u: goto label_314514;
        case 0x314518u: goto label_314518;
        case 0x31451cu: goto label_31451c;
        case 0x314520u: goto label_314520;
        case 0x314524u: goto label_314524;
        case 0x314528u: goto label_314528;
        case 0x31452cu: goto label_31452c;
        case 0x314530u: goto label_314530;
        case 0x314534u: goto label_314534;
        case 0x314538u: goto label_314538;
        case 0x31453cu: goto label_31453c;
        case 0x314540u: goto label_314540;
        case 0x314544u: goto label_314544;
        case 0x314548u: goto label_314548;
        case 0x31454cu: goto label_31454c;
        case 0x314550u: goto label_314550;
        case 0x314554u: goto label_314554;
        case 0x314558u: goto label_314558;
        case 0x31455cu: goto label_31455c;
        case 0x314560u: goto label_314560;
        case 0x314564u: goto label_314564;
        case 0x314568u: goto label_314568;
        case 0x31456cu: goto label_31456c;
        case 0x314570u: goto label_314570;
        case 0x314574u: goto label_314574;
        case 0x314578u: goto label_314578;
        case 0x31457cu: goto label_31457c;
        case 0x314580u: goto label_314580;
        case 0x314584u: goto label_314584;
        case 0x314588u: goto label_314588;
        case 0x31458cu: goto label_31458c;
        case 0x314590u: goto label_314590;
        case 0x314594u: goto label_314594;
        case 0x314598u: goto label_314598;
        case 0x31459cu: goto label_31459c;
        case 0x3145a0u: goto label_3145a0;
        case 0x3145a4u: goto label_3145a4;
        case 0x3145a8u: goto label_3145a8;
        case 0x3145acu: goto label_3145ac;
        case 0x3145b0u: goto label_3145b0;
        case 0x3145b4u: goto label_3145b4;
        case 0x3145b8u: goto label_3145b8;
        case 0x3145bcu: goto label_3145bc;
        case 0x3145c0u: goto label_3145c0;
        case 0x3145c4u: goto label_3145c4;
        case 0x3145c8u: goto label_3145c8;
        case 0x3145ccu: goto label_3145cc;
        case 0x3145d0u: goto label_3145d0;
        case 0x3145d4u: goto label_3145d4;
        case 0x3145d8u: goto label_3145d8;
        case 0x3145dcu: goto label_3145dc;
        case 0x3145e0u: goto label_3145e0;
        case 0x3145e4u: goto label_3145e4;
        case 0x3145e8u: goto label_3145e8;
        case 0x3145ecu: goto label_3145ec;
        case 0x3145f0u: goto label_3145f0;
        case 0x3145f4u: goto label_3145f4;
        case 0x3145f8u: goto label_3145f8;
        case 0x3145fcu: goto label_3145fc;
        case 0x314600u: goto label_314600;
        case 0x314604u: goto label_314604;
        case 0x314608u: goto label_314608;
        case 0x31460cu: goto label_31460c;
        case 0x314610u: goto label_314610;
        case 0x314614u: goto label_314614;
        case 0x314618u: goto label_314618;
        case 0x31461cu: goto label_31461c;
        case 0x314620u: goto label_314620;
        case 0x314624u: goto label_314624;
        case 0x314628u: goto label_314628;
        case 0x31462cu: goto label_31462c;
        case 0x314630u: goto label_314630;
        case 0x314634u: goto label_314634;
        case 0x314638u: goto label_314638;
        case 0x31463cu: goto label_31463c;
        case 0x314640u: goto label_314640;
        case 0x314644u: goto label_314644;
        case 0x314648u: goto label_314648;
        case 0x31464cu: goto label_31464c;
        case 0x314650u: goto label_314650;
        case 0x314654u: goto label_314654;
        case 0x314658u: goto label_314658;
        case 0x31465cu: goto label_31465c;
        case 0x314660u: goto label_314660;
        case 0x314664u: goto label_314664;
        case 0x314668u: goto label_314668;
        case 0x31466cu: goto label_31466c;
        case 0x314670u: goto label_314670;
        case 0x314674u: goto label_314674;
        case 0x314678u: goto label_314678;
        case 0x31467cu: goto label_31467c;
        case 0x314680u: goto label_314680;
        case 0x314684u: goto label_314684;
        case 0x314688u: goto label_314688;
        case 0x31468cu: goto label_31468c;
        case 0x314690u: goto label_314690;
        case 0x314694u: goto label_314694;
        case 0x314698u: goto label_314698;
        case 0x31469cu: goto label_31469c;
        case 0x3146a0u: goto label_3146a0;
        case 0x3146a4u: goto label_3146a4;
        case 0x3146a8u: goto label_3146a8;
        case 0x3146acu: goto label_3146ac;
        case 0x3146b0u: goto label_3146b0;
        case 0x3146b4u: goto label_3146b4;
        case 0x3146b8u: goto label_3146b8;
        case 0x3146bcu: goto label_3146bc;
        case 0x3146c0u: goto label_3146c0;
        case 0x3146c4u: goto label_3146c4;
        case 0x3146c8u: goto label_3146c8;
        case 0x3146ccu: goto label_3146cc;
        case 0x3146d0u: goto label_3146d0;
        case 0x3146d4u: goto label_3146d4;
        case 0x3146d8u: goto label_3146d8;
        case 0x3146dcu: goto label_3146dc;
        case 0x3146e0u: goto label_3146e0;
        case 0x3146e4u: goto label_3146e4;
        case 0x3146e8u: goto label_3146e8;
        case 0x3146ecu: goto label_3146ec;
        case 0x3146f0u: goto label_3146f0;
        case 0x3146f4u: goto label_3146f4;
        case 0x3146f8u: goto label_3146f8;
        case 0x3146fcu: goto label_3146fc;
        case 0x314700u: goto label_314700;
        case 0x314704u: goto label_314704;
        case 0x314708u: goto label_314708;
        case 0x31470cu: goto label_31470c;
        case 0x314710u: goto label_314710;
        case 0x314714u: goto label_314714;
        case 0x314718u: goto label_314718;
        case 0x31471cu: goto label_31471c;
        case 0x314720u: goto label_314720;
        case 0x314724u: goto label_314724;
        case 0x314728u: goto label_314728;
        case 0x31472cu: goto label_31472c;
        case 0x314730u: goto label_314730;
        case 0x314734u: goto label_314734;
        case 0x314738u: goto label_314738;
        case 0x31473cu: goto label_31473c;
        case 0x314740u: goto label_314740;
        case 0x314744u: goto label_314744;
        case 0x314748u: goto label_314748;
        case 0x31474cu: goto label_31474c;
        case 0x314750u: goto label_314750;
        case 0x314754u: goto label_314754;
        case 0x314758u: goto label_314758;
        case 0x31475cu: goto label_31475c;
        case 0x314760u: goto label_314760;
        case 0x314764u: goto label_314764;
        case 0x314768u: goto label_314768;
        case 0x31476cu: goto label_31476c;
        case 0x314770u: goto label_314770;
        case 0x314774u: goto label_314774;
        case 0x314778u: goto label_314778;
        case 0x31477cu: goto label_31477c;
        case 0x314780u: goto label_314780;
        case 0x314784u: goto label_314784;
        case 0x314788u: goto label_314788;
        case 0x31478cu: goto label_31478c;
        case 0x314790u: goto label_314790;
        case 0x314794u: goto label_314794;
        case 0x314798u: goto label_314798;
        case 0x31479cu: goto label_31479c;
        case 0x3147a0u: goto label_3147a0;
        case 0x3147a4u: goto label_3147a4;
        case 0x3147a8u: goto label_3147a8;
        case 0x3147acu: goto label_3147ac;
        case 0x3147b0u: goto label_3147b0;
        case 0x3147b4u: goto label_3147b4;
        case 0x3147b8u: goto label_3147b8;
        case 0x3147bcu: goto label_3147bc;
        case 0x3147c0u: goto label_3147c0;
        case 0x3147c4u: goto label_3147c4;
        case 0x3147c8u: goto label_3147c8;
        case 0x3147ccu: goto label_3147cc;
        case 0x3147d0u: goto label_3147d0;
        case 0x3147d4u: goto label_3147d4;
        case 0x3147d8u: goto label_3147d8;
        case 0x3147dcu: goto label_3147dc;
        case 0x3147e0u: goto label_3147e0;
        case 0x3147e4u: goto label_3147e4;
        case 0x3147e8u: goto label_3147e8;
        case 0x3147ecu: goto label_3147ec;
        case 0x3147f0u: goto label_3147f0;
        case 0x3147f4u: goto label_3147f4;
        case 0x3147f8u: goto label_3147f8;
        case 0x3147fcu: goto label_3147fc;
        case 0x314800u: goto label_314800;
        case 0x314804u: goto label_314804;
        case 0x314808u: goto label_314808;
        case 0x31480cu: goto label_31480c;
        case 0x314810u: goto label_314810;
        case 0x314814u: goto label_314814;
        case 0x314818u: goto label_314818;
        case 0x31481cu: goto label_31481c;
        case 0x314820u: goto label_314820;
        case 0x314824u: goto label_314824;
        case 0x314828u: goto label_314828;
        case 0x31482cu: goto label_31482c;
        case 0x314830u: goto label_314830;
        case 0x314834u: goto label_314834;
        case 0x314838u: goto label_314838;
        case 0x31483cu: goto label_31483c;
        case 0x314840u: goto label_314840;
        case 0x314844u: goto label_314844;
        case 0x314848u: goto label_314848;
        case 0x31484cu: goto label_31484c;
        case 0x314850u: goto label_314850;
        case 0x314854u: goto label_314854;
        case 0x314858u: goto label_314858;
        case 0x31485cu: goto label_31485c;
        case 0x314860u: goto label_314860;
        case 0x314864u: goto label_314864;
        case 0x314868u: goto label_314868;
        case 0x31486cu: goto label_31486c;
        case 0x314870u: goto label_314870;
        case 0x314874u: goto label_314874;
        case 0x314878u: goto label_314878;
        case 0x31487cu: goto label_31487c;
        case 0x314880u: goto label_314880;
        case 0x314884u: goto label_314884;
        case 0x314888u: goto label_314888;
        case 0x31488cu: goto label_31488c;
        case 0x314890u: goto label_314890;
        case 0x314894u: goto label_314894;
        case 0x314898u: goto label_314898;
        case 0x31489cu: goto label_31489c;
        case 0x3148a0u: goto label_3148a0;
        case 0x3148a4u: goto label_3148a4;
        case 0x3148a8u: goto label_3148a8;
        case 0x3148acu: goto label_3148ac;
        case 0x3148b0u: goto label_3148b0;
        case 0x3148b4u: goto label_3148b4;
        case 0x3148b8u: goto label_3148b8;
        case 0x3148bcu: goto label_3148bc;
        case 0x3148c0u: goto label_3148c0;
        case 0x3148c4u: goto label_3148c4;
        case 0x3148c8u: goto label_3148c8;
        case 0x3148ccu: goto label_3148cc;
        case 0x3148d0u: goto label_3148d0;
        case 0x3148d4u: goto label_3148d4;
        case 0x3148d8u: goto label_3148d8;
        case 0x3148dcu: goto label_3148dc;
        case 0x3148e0u: goto label_3148e0;
        case 0x3148e4u: goto label_3148e4;
        case 0x3148e8u: goto label_3148e8;
        case 0x3148ecu: goto label_3148ec;
        case 0x3148f0u: goto label_3148f0;
        case 0x3148f4u: goto label_3148f4;
        case 0x3148f8u: goto label_3148f8;
        case 0x3148fcu: goto label_3148fc;
        case 0x314900u: goto label_314900;
        case 0x314904u: goto label_314904;
        case 0x314908u: goto label_314908;
        case 0x31490cu: goto label_31490c;
        case 0x314910u: goto label_314910;
        case 0x314914u: goto label_314914;
        case 0x314918u: goto label_314918;
        case 0x31491cu: goto label_31491c;
        case 0x314920u: goto label_314920;
        case 0x314924u: goto label_314924;
        case 0x314928u: goto label_314928;
        case 0x31492cu: goto label_31492c;
        case 0x314930u: goto label_314930;
        case 0x314934u: goto label_314934;
        case 0x314938u: goto label_314938;
        case 0x31493cu: goto label_31493c;
        case 0x314940u: goto label_314940;
        case 0x314944u: goto label_314944;
        case 0x314948u: goto label_314948;
        case 0x31494cu: goto label_31494c;
        case 0x314950u: goto label_314950;
        case 0x314954u: goto label_314954;
        case 0x314958u: goto label_314958;
        case 0x31495cu: goto label_31495c;
        case 0x314960u: goto label_314960;
        case 0x314964u: goto label_314964;
        case 0x314968u: goto label_314968;
        case 0x31496cu: goto label_31496c;
        case 0x314970u: goto label_314970;
        case 0x314974u: goto label_314974;
        case 0x314978u: goto label_314978;
        case 0x31497cu: goto label_31497c;
        case 0x314980u: goto label_314980;
        case 0x314984u: goto label_314984;
        case 0x314988u: goto label_314988;
        case 0x31498cu: goto label_31498c;
        case 0x314990u: goto label_314990;
        case 0x314994u: goto label_314994;
        case 0x314998u: goto label_314998;
        case 0x31499cu: goto label_31499c;
        case 0x3149a0u: goto label_3149a0;
        case 0x3149a4u: goto label_3149a4;
        case 0x3149a8u: goto label_3149a8;
        case 0x3149acu: goto label_3149ac;
        case 0x3149b0u: goto label_3149b0;
        case 0x3149b4u: goto label_3149b4;
        case 0x3149b8u: goto label_3149b8;
        case 0x3149bcu: goto label_3149bc;
        case 0x3149c0u: goto label_3149c0;
        case 0x3149c4u: goto label_3149c4;
        case 0x3149c8u: goto label_3149c8;
        case 0x3149ccu: goto label_3149cc;
        case 0x3149d0u: goto label_3149d0;
        case 0x3149d4u: goto label_3149d4;
        case 0x3149d8u: goto label_3149d8;
        case 0x3149dcu: goto label_3149dc;
        case 0x3149e0u: goto label_3149e0;
        case 0x3149e4u: goto label_3149e4;
        case 0x3149e8u: goto label_3149e8;
        case 0x3149ecu: goto label_3149ec;
        case 0x3149f0u: goto label_3149f0;
        case 0x3149f4u: goto label_3149f4;
        case 0x3149f8u: goto label_3149f8;
        case 0x3149fcu: goto label_3149fc;
        case 0x314a00u: goto label_314a00;
        case 0x314a04u: goto label_314a04;
        case 0x314a08u: goto label_314a08;
        case 0x314a0cu: goto label_314a0c;
        case 0x314a10u: goto label_314a10;
        case 0x314a14u: goto label_314a14;
        case 0x314a18u: goto label_314a18;
        case 0x314a1cu: goto label_314a1c;
        case 0x314a20u: goto label_314a20;
        case 0x314a24u: goto label_314a24;
        case 0x314a28u: goto label_314a28;
        case 0x314a2cu: goto label_314a2c;
        case 0x314a30u: goto label_314a30;
        case 0x314a34u: goto label_314a34;
        case 0x314a38u: goto label_314a38;
        case 0x314a3cu: goto label_314a3c;
        case 0x314a40u: goto label_314a40;
        case 0x314a44u: goto label_314a44;
        case 0x314a48u: goto label_314a48;
        case 0x314a4cu: goto label_314a4c;
        case 0x314a50u: goto label_314a50;
        case 0x314a54u: goto label_314a54;
        case 0x314a58u: goto label_314a58;
        case 0x314a5cu: goto label_314a5c;
        case 0x314a60u: goto label_314a60;
        case 0x314a64u: goto label_314a64;
        case 0x314a68u: goto label_314a68;
        case 0x314a6cu: goto label_314a6c;
        case 0x314a70u: goto label_314a70;
        case 0x314a74u: goto label_314a74;
        case 0x314a78u: goto label_314a78;
        case 0x314a7cu: goto label_314a7c;
        case 0x314a80u: goto label_314a80;
        case 0x314a84u: goto label_314a84;
        case 0x314a88u: goto label_314a88;
        case 0x314a8cu: goto label_314a8c;
        case 0x314a90u: goto label_314a90;
        case 0x314a94u: goto label_314a94;
        case 0x314a98u: goto label_314a98;
        case 0x314a9cu: goto label_314a9c;
        case 0x314aa0u: goto label_314aa0;
        case 0x314aa4u: goto label_314aa4;
        case 0x314aa8u: goto label_314aa8;
        case 0x314aacu: goto label_314aac;
        case 0x314ab0u: goto label_314ab0;
        case 0x314ab4u: goto label_314ab4;
        case 0x314ab8u: goto label_314ab8;
        case 0x314abcu: goto label_314abc;
        case 0x314ac0u: goto label_314ac0;
        case 0x314ac4u: goto label_314ac4;
        case 0x314ac8u: goto label_314ac8;
        case 0x314accu: goto label_314acc;
        case 0x314ad0u: goto label_314ad0;
        case 0x314ad4u: goto label_314ad4;
        case 0x314ad8u: goto label_314ad8;
        case 0x314adcu: goto label_314adc;
        case 0x314ae0u: goto label_314ae0;
        case 0x314ae4u: goto label_314ae4;
        case 0x314ae8u: goto label_314ae8;
        case 0x314aecu: goto label_314aec;
        case 0x314af0u: goto label_314af0;
        case 0x314af4u: goto label_314af4;
        case 0x314af8u: goto label_314af8;
        case 0x314afcu: goto label_314afc;
        case 0x314b00u: goto label_314b00;
        case 0x314b04u: goto label_314b04;
        case 0x314b08u: goto label_314b08;
        case 0x314b0cu: goto label_314b0c;
        case 0x314b10u: goto label_314b10;
        case 0x314b14u: goto label_314b14;
        case 0x314b18u: goto label_314b18;
        case 0x314b1cu: goto label_314b1c;
        case 0x314b20u: goto label_314b20;
        case 0x314b24u: goto label_314b24;
        case 0x314b28u: goto label_314b28;
        case 0x314b2cu: goto label_314b2c;
        case 0x314b30u: goto label_314b30;
        case 0x314b34u: goto label_314b34;
        case 0x314b38u: goto label_314b38;
        case 0x314b3cu: goto label_314b3c;
        case 0x314b40u: goto label_314b40;
        case 0x314b44u: goto label_314b44;
        case 0x314b48u: goto label_314b48;
        case 0x314b4cu: goto label_314b4c;
        case 0x314b50u: goto label_314b50;
        case 0x314b54u: goto label_314b54;
        case 0x314b58u: goto label_314b58;
        case 0x314b5cu: goto label_314b5c;
        case 0x314b60u: goto label_314b60;
        case 0x314b64u: goto label_314b64;
        case 0x314b68u: goto label_314b68;
        case 0x314b6cu: goto label_314b6c;
        case 0x314b70u: goto label_314b70;
        case 0x314b74u: goto label_314b74;
        case 0x314b78u: goto label_314b78;
        case 0x314b7cu: goto label_314b7c;
        case 0x314b80u: goto label_314b80;
        case 0x314b84u: goto label_314b84;
        case 0x314b88u: goto label_314b88;
        case 0x314b8cu: goto label_314b8c;
        case 0x314b90u: goto label_314b90;
        case 0x314b94u: goto label_314b94;
        case 0x314b98u: goto label_314b98;
        case 0x314b9cu: goto label_314b9c;
        case 0x314ba0u: goto label_314ba0;
        case 0x314ba4u: goto label_314ba4;
        case 0x314ba8u: goto label_314ba8;
        case 0x314bacu: goto label_314bac;
        case 0x314bb0u: goto label_314bb0;
        case 0x314bb4u: goto label_314bb4;
        case 0x314bb8u: goto label_314bb8;
        case 0x314bbcu: goto label_314bbc;
        case 0x314bc0u: goto label_314bc0;
        case 0x314bc4u: goto label_314bc4;
        case 0x314bc8u: goto label_314bc8;
        case 0x314bccu: goto label_314bcc;
        case 0x314bd0u: goto label_314bd0;
        case 0x314bd4u: goto label_314bd4;
        case 0x314bd8u: goto label_314bd8;
        case 0x314bdcu: goto label_314bdc;
        case 0x314be0u: goto label_314be0;
        case 0x314be4u: goto label_314be4;
        case 0x314be8u: goto label_314be8;
        case 0x314becu: goto label_314bec;
        case 0x314bf0u: goto label_314bf0;
        case 0x314bf4u: goto label_314bf4;
        case 0x314bf8u: goto label_314bf8;
        case 0x314bfcu: goto label_314bfc;
        case 0x314c00u: goto label_314c00;
        case 0x314c04u: goto label_314c04;
        case 0x314c08u: goto label_314c08;
        case 0x314c0cu: goto label_314c0c;
        case 0x314c10u: goto label_314c10;
        case 0x314c14u: goto label_314c14;
        case 0x314c18u: goto label_314c18;
        case 0x314c1cu: goto label_314c1c;
        case 0x314c20u: goto label_314c20;
        case 0x314c24u: goto label_314c24;
        case 0x314c28u: goto label_314c28;
        case 0x314c2cu: goto label_314c2c;
        case 0x314c30u: goto label_314c30;
        case 0x314c34u: goto label_314c34;
        case 0x314c38u: goto label_314c38;
        case 0x314c3cu: goto label_314c3c;
        case 0x314c40u: goto label_314c40;
        case 0x314c44u: goto label_314c44;
        case 0x314c48u: goto label_314c48;
        case 0x314c4cu: goto label_314c4c;
        case 0x314c50u: goto label_314c50;
        case 0x314c54u: goto label_314c54;
        case 0x314c58u: goto label_314c58;
        case 0x314c5cu: goto label_314c5c;
        case 0x314c60u: goto label_314c60;
        case 0x314c64u: goto label_314c64;
        case 0x314c68u: goto label_314c68;
        case 0x314c6cu: goto label_314c6c;
        case 0x314c70u: goto label_314c70;
        case 0x314c74u: goto label_314c74;
        case 0x314c78u: goto label_314c78;
        case 0x314c7cu: goto label_314c7c;
        case 0x314c80u: goto label_314c80;
        case 0x314c84u: goto label_314c84;
        case 0x314c88u: goto label_314c88;
        case 0x314c8cu: goto label_314c8c;
        case 0x314c90u: goto label_314c90;
        case 0x314c94u: goto label_314c94;
        case 0x314c98u: goto label_314c98;
        case 0x314c9cu: goto label_314c9c;
        case 0x314ca0u: goto label_314ca0;
        case 0x314ca4u: goto label_314ca4;
        case 0x314ca8u: goto label_314ca8;
        case 0x314cacu: goto label_314cac;
        default: break;
    }

    ctx->pc = 0x3141a0u;

label_3141a0:
    // 0x3141a0: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x3141a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_3141a4:
    // 0x3141a4: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x3141a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3141a8:
    // 0x3141a8: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x3141a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_3141ac:
    // 0x3141ac: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x3141acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_3141b0:
    // 0x3141b0: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x3141b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_3141b4:
    // 0x3141b4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3141b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3141b8:
    // 0x3141b8: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x3141b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_3141bc:
    // 0x3141bc: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3141bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3141c0:
    // 0x3141c0: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x3141c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_3141c4:
    // 0x3141c4: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3141c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3141c8:
    // 0x3141c8: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x3141c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_3141cc:
    // 0x3141cc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3141ccu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3141d0:
    // 0x3141d0: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x3141d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_3141d4:
    // 0x3141d4: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x3141d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_3141d8:
    // 0x3141d8: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x3141d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_3141dc:
    // 0x3141dc: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x3141dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_3141e0:
    // 0x3141e0: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x3141e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_3141e4:
    // 0x3141e4: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x3141e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_3141e8:
    // 0x3141e8: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x3141e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
label_3141ec:
    // 0x3141ec: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x3141ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_3141f0:
    // 0x3141f0: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x3141f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_3141f4:
    // 0x3141f4: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x3141f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_3141f8:
    // 0x3141f8: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x3141f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_3141fc:
    // 0x3141fc: 0x0  nop
    ctx->pc = 0x3141fcu;
    // NOP
label_314200:
    // 0x314200: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x314200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_314204:
    // 0x314204: 0x3c030068  lui         $v1, 0x68
    ctx->pc = 0x314204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)104 << 16));
label_314208:
    // 0x314208: 0x8c446ccc  lw          $a0, 0x6CCC($v0)
    ctx->pc = 0x314208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 27852)));
label_31420c:
    // 0x31420c: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x31420cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_314210:
    // 0x314210: 0x8c677520  lw          $a3, 0x7520($v1)
    ctx->pc = 0x314210u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 29984)));
label_314214:
    // 0x314214: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x314214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_314218:
    // 0x314218: 0xc0c5498  jal         func_315260
label_31421c:
    if (ctx->pc == 0x31421Cu) {
        ctx->pc = 0x31421Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314218u;
        // 0x31421c: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314220u;
        goto label_314220;
    }
    ctx->pc = 0x314218u;
    SET_GPR_U32(ctx, 31, 0x314220u);
    ctx->pc = 0x31421Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314218u;
    // 0x31421c: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315260u, 0x314218u, 0x314220u)) {
        return;
    }
    ctx->pc = 0x314220u;
label_314220:
    // 0x314220: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x314220u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_314224:
    // 0x314224: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x314224u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314228:
    // 0x314228: 0x97a20260  lhu         $v0, 0x260($sp)
    ctx->pc = 0x314228u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 608)));
label_31422c:
    // 0x31422c: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x31422cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_314230:
    // 0x314230: 0x10400292  beqz        $v0, . + 4 + (0x292 << 2)
label_314234:
    if (ctx->pc == 0x314234u) {
        ctx->pc = 0x314234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314230u;
        // 0x314234: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314238u;
        goto label_314238;
    }
    ctx->pc = 0x314230u;
    {
        const bool branch_taken_0x314230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314230u;
        // 0x314234: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314230) {
            ctx->pc = 0x314C7Cu;
            goto label_314c7c;
        }
    }
    ctx->pc = 0x314238u;
label_314238:
    // 0x314238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x314238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31423c:
    // 0x31423c: 0x16c20020  bne         $s6, $v0, . + 4 + (0x20 << 2)
label_314240:
    if (ctx->pc == 0x314240u) {
        ctx->pc = 0x314240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31423Cu;
        // 0x314240: 0x97a30260  lhu         $v1, 0x260($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314244u;
        goto label_314244;
    }
    ctx->pc = 0x31423Cu;
    {
        const bool branch_taken_0x31423c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x314240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31423Cu;
        // 0x314240: 0x97a30260  lhu         $v1, 0x260($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31423c) {
            ctx->pc = 0x3142C0u;
            goto label_3142c0;
        }
    }
    ctx->pc = 0x314244u;
label_314244:
    // 0x314244: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x314244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_314248:
    // 0x314248: 0x244411d1  addiu       $a0, $v0, 0x11D1
    ctx->pc = 0x314248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_31424c:
    // 0x31424c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x31424cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_314250:
    // 0x314250: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x314250u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_314254:
    // 0x314254: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x314254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_314258:
    // 0x314258: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_31425c:
    if (ctx->pc == 0x31425Cu) {
        ctx->pc = 0x31425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314258u;
        // 0x31425c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314260u;
        goto label_314260;
    }
    ctx->pc = 0x314258u;
    {
        const bool branch_taken_0x314258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314258u;
        // 0x31425c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314258) {
            ctx->pc = 0x3142BCu;
            goto label_3142bc;
        }
    }
    ctx->pc = 0x314260u;
label_314260:
    // 0x314260: 0x10000007  b           . + 4 + (0x7 << 2)
label_314264:
    if (ctx->pc == 0x314264u) {
        ctx->pc = 0x314264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314260u;
        // 0x314264: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314268u;
        goto label_314268;
    }
    ctx->pc = 0x314260u;
    {
        const bool branch_taken_0x314260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314260u;
        // 0x314264: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314260) {
            ctx->pc = 0x314280u;
            goto label_314280;
        }
    }
    ctx->pc = 0x314268u;
label_314268:
    // 0x314268: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x314268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31426c:
    // 0x31426c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x31426cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_314270:
    // 0x314270: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x314270u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_314274:
    // 0x314274: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x314274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_314278:
    // 0x314278: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x314278u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_31427c:
    // 0x31427c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x31427cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314280:
    // 0x314280: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_314284:
    if (ctx->pc == 0x314284u) {
        ctx->pc = 0x314284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314280u;
        // 0x314284: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314288u;
        goto label_314288;
    }
    ctx->pc = 0x314280u;
    {
        const bool branch_taken_0x314280 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x314280) {
            ctx->pc = 0x314284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314280u;
            // 0x314284: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31429Cu;
            goto label_31429c;
        }
    }
    ctx->pc = 0x314288u;
label_314288:
    // 0x314288: 0xc0c4f2e  jal         func_313CB8
label_31428c:
    if (ctx->pc == 0x31428Cu) {
        ctx->pc = 0x31428Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314288u;
        // 0x31428c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314290u;
        goto label_314290;
    }
    ctx->pc = 0x314288u;
    SET_GPR_U32(ctx, 31, 0x314290u);
    ctx->pc = 0x31428Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314288u;
    // 0x31428c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314288u, 0x314290u)) {
        return;
    }
    ctx->pc = 0x314290u;
label_314290:
    // 0x314290: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
label_314294:
    if (ctx->pc == 0x314294u) {
        ctx->pc = 0x314294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314290u;
        // 0x314294: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314298u;
        goto label_314298;
    }
    ctx->pc = 0x314290u;
    {
        const bool branch_taken_0x314290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314290u;
        // 0x314294: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314290) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x314298u;
label_314298:
    // 0x314298: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x314298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31429c:
    // 0x31429c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x31429cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3142a0:
    // 0x3142a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3142a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3142a4:
    // 0x3142a4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3142a4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3142a8:
    // 0x3142a8: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3142a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3142ac:
    // 0x3142ac: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_3142b0:
    if (ctx->pc == 0x3142B0u) {
        ctx->pc = 0x3142B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142ACu;
        // 0x3142b0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142B4u;
        goto label_3142b4;
    }
    ctx->pc = 0x3142ACu;
    {
        const bool branch_taken_0x3142ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3142ac) {
            ctx->pc = 0x3142B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3142ACu;
            // 0x3142b0: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314268u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314268;
        }
    }
    ctx->pc = 0x3142B4u;
label_3142b4:
    // 0x3142b4: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3142b8:
    if (ctx->pc == 0x3142B8u) {
        ctx->pc = 0x3142B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142B4u;
        // 0x3142b8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142BCu;
        goto label_3142bc;
    }
    ctx->pc = 0x3142B4u;
    {
        const bool branch_taken_0x3142b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3142B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142B4u;
        // 0x3142b8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142b4) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x3142BCu;
label_3142bc:
    // 0x3142bc: 0x97a30260  lhu         $v1, 0x260($sp)
    ctx->pc = 0x3142bcu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 608)));
label_3142c0:
    // 0x3142c0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3142c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3142c4:
    // 0x3142c4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3142c8:
    if (ctx->pc == 0x3142C8u) {
        ctx->pc = 0x3142C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142C4u;
        // 0x3142c8: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142CCu;
        goto label_3142cc;
    }
    ctx->pc = 0x3142C4u;
    {
        const bool branch_taken_0x3142c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3142C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142C4u;
        // 0x3142c8: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142c4) {
            ctx->pc = 0x31430Cu;
            goto label_31430c;
        }
    }
    ctx->pc = 0x3142CCu;
label_3142cc:
    // 0x3142cc: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3142ccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3142d0:
    // 0x3142d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3142d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3142d4:
    // 0x3142d4: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x3142d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3142d8:
    // 0x3142d8: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x3142d8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3142dc:
    // 0x3142dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3142dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3142e0:
    // 0x3142e0: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x3142e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_3142e4:
    // 0x3142e4: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x3142e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_3142e8:
    // 0x3142e8: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3142ec:
    if (ctx->pc == 0x3142ECu) {
        ctx->pc = 0x3142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E8u;
        // 0x3142ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3142F0u;
        goto label_3142f0;
    }
    ctx->pc = 0x3142E8u;
    {
        const bool branch_taken_0x3142e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3142ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3142E8u;
        // 0x3142ec: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3142e8) {
            ctx->pc = 0x3144B8u;
            goto label_3144b8;
        }
    }
    ctx->pc = 0x3142F0u;
label_3142f0:
    // 0x3142f0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3142f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3142f4:
    // 0x3142f4: 0x24421320  addiu       $v0, $v0, 0x1320
    ctx->pc = 0x3142f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4896));
label_3142f8:
    // 0x3142f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3142f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3142fc:
    // 0x3142fc: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3142fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_314300:
    // 0x314300: 0x800008  jr          $a0
label_314304:
    if (ctx->pc == 0x314304u) {
        ctx->pc = 0x314308u;
        goto label_314308;
    }
    ctx->pc = 0x314300u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x314308u: goto label_314308;
            case 0x314374u: goto label_314374;
            case 0x31437Cu: goto label_31437c;
            case 0x314384u: goto label_314384;
            case 0x31438Cu: goto label_31438c;
            case 0x314394u: goto label_314394;
            case 0x3143A8u: goto label_3143a8;
            case 0x3143ACu: goto label_3143ac;
            case 0x3143BCu: goto label_3143bc;
            case 0x3143D4u: goto label_3143d4;
            case 0x3143D8u: goto label_3143d8;
            case 0x3143F0u: goto label_3143f0;
            case 0x314408u: goto label_314408;
            case 0x314414u: goto label_314414;
            case 0x31441Cu: goto label_31441c;
            case 0x314424u: goto label_314424;
            case 0x314440u: goto label_314440;
            case 0x31444Cu: goto label_31444c;
            case 0x314468u: goto label_314468;
            case 0x3144B0u: goto label_3144b0;
            case 0x3144B8u: goto label_3144b8;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314300u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x314308u;
label_314308:
    // 0x314308: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x314308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_31430c:
    // 0x31430c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x31430cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314310:
    // 0x314310: 0x1ac0ffbb  blez        $s6, . + 4 + (-0x45 << 2)
label_314314:
    if (ctx->pc == 0x314314u) {
        ctx->pc = 0x314314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314310u;
        // 0x314314: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314318u;
        goto label_314318;
    }
    ctx->pc = 0x314310u;
    {
        const bool branch_taken_0x314310 = (GPR_S64(ctx, 22) <= 0);
        ctx->pc = 0x314314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314310u;
        // 0x314314: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314310) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x314318u;
label_314318:
    // 0x314318: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31431c:
    // 0x31431c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_314320:
    if (ctx->pc == 0x314320u) {
        ctx->pc = 0x314320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31431Cu;
        // 0x314320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314324u;
        goto label_314324;
    }
    ctx->pc = 0x31431Cu;
    {
        const bool branch_taken_0x31431c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x31431c) {
            ctx->pc = 0x314320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31431Cu;
            // 0x314320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314338u;
            goto label_314338;
        }
    }
    ctx->pc = 0x314324u;
label_314324:
    // 0x314324: 0xc0c4f2e  jal         func_313CB8
label_314328:
    if (ctx->pc == 0x314328u) {
        ctx->pc = 0x314328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314324u;
        // 0x314328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31432Cu;
        goto label_31432c;
    }
    ctx->pc = 0x314324u;
    SET_GPR_U32(ctx, 31, 0x31432Cu);
    ctx->pc = 0x314328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314324u;
    // 0x314328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314324u, 0x31432Cu)) {
        return;
    }
    ctx->pc = 0x31432Cu;
label_31432c:
    // 0x31432c: 0x14400250  bnez        $v0, . + 4 + (0x250 << 2)
label_314330:
    if (ctx->pc == 0x314330u) {
        ctx->pc = 0x314330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31432Cu;
        // 0x314330: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314334u;
        goto label_314334;
    }
    ctx->pc = 0x31432Cu;
    {
        const bool branch_taken_0x31432c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31432Cu;
        // 0x314330: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31432c) {
            ctx->pc = 0x314C70u;
            goto label_314c70;
        }
    }
    ctx->pc = 0x314334u;
label_314334:
    // 0x314334: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x314334u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314338:
    // 0x314338: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x314338u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_31433c:
    // 0x31433c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x31433cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_314340:
    // 0x314340: 0x1443024e  bne         $v0, $v1, . + 4 + (0x24E << 2)
label_314344:
    if (ctx->pc == 0x314344u) {
        ctx->pc = 0x314344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314340u;
        // 0x314344: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314348u;
        goto label_314348;
    }
    ctx->pc = 0x314340u;
    {
        const bool branch_taken_0x314340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x314344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314340u;
        // 0x314344: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314340) {
            ctx->pc = 0x314C7Cu;
            goto label_314c7c;
        }
    }
    ctx->pc = 0x314348u;
label_314348:
    // 0x314348: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31434c:
    // 0x31434c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x31434cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_314350:
    // 0x314350: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x314350u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_314354:
    // 0x314354: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_314358:
    // 0x314358: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x314358u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_31435c:
    // 0x31435c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x31435cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_314360:
    // 0x314360: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x314360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_314364:
    // 0x314364: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_314368:
    if (ctx->pc == 0x314368u) {
        ctx->pc = 0x314368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314364u;
        // 0x314368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31436Cu;
        goto label_31436c;
    }
    ctx->pc = 0x314364u;
    {
        const bool branch_taken_0x314364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314364u;
        // 0x314368: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314364) {
            ctx->pc = 0x314318u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314318;
        }
    }
    ctx->pc = 0x31436Cu;
label_31436c:
    // 0x31436c: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
label_314370:
    if (ctx->pc == 0x314370u) {
        ctx->pc = 0x314370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31436Cu;
        // 0x314370: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314374u;
        goto label_314374;
    }
    ctx->pc = 0x31436Cu;
    {
        const bool branch_taken_0x31436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31436Cu;
        // 0x314370: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31436c) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x314374u;
label_314374:
    // 0x314374: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_314378:
    if (ctx->pc == 0x314378u) {
        ctx->pc = 0x314378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314374u;
        // 0x314378: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31437Cu;
        goto label_31437c;
    }
    ctx->pc = 0x314374u;
    {
        const bool branch_taken_0x314374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314374u;
        // 0x314378: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314374) {
            ctx->pc = 0x3142D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3142d4;
        }
    }
    ctx->pc = 0x31437Cu;
label_31437c:
    // 0x31437c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_314380:
    if (ctx->pc == 0x314380u) {
        ctx->pc = 0x314380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31437Cu;
        // 0x314380: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314384u;
        goto label_314384;
    }
    ctx->pc = 0x31437Cu;
    {
        const bool branch_taken_0x31437c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31437Cu;
        // 0x314380: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31437c) {
            ctx->pc = 0x3142D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3142d4;
        }
    }
    ctx->pc = 0x314384u;
label_314384:
    // 0x314384: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_314388:
    if (ctx->pc == 0x314388u) {
        ctx->pc = 0x314388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314384u;
        // 0x314388: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31438Cu;
        goto label_31438c;
    }
    ctx->pc = 0x314384u;
    {
        const bool branch_taken_0x314384 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314384u;
        // 0x314388: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314384) {
            ctx->pc = 0x3142D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3142d4;
        }
    }
    ctx->pc = 0x31438Cu;
label_31438c:
    // 0x31438c: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_314390:
    if (ctx->pc == 0x314390u) {
        ctx->pc = 0x314390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31438Cu;
        // 0x314390: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314394u;
        goto label_314394;
    }
    ctx->pc = 0x31438Cu;
    {
        const bool branch_taken_0x31438c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31438Cu;
        // 0x314390: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31438c) {
            ctx->pc = 0x3142D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3142d4;
        }
    }
    ctx->pc = 0x314394u;
label_314394:
    // 0x314394: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x314394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_314398:
    // 0x314398: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x314398u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_31439c:
    // 0x31439c: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x31439cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3143a0:
    // 0x3143a0: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_3143a4:
    if (ctx->pc == 0x3143A4u) {
        ctx->pc = 0x3143A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143A0u;
        // 0x3143a4: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3143A8u;
        goto label_3143a8;
    }
    ctx->pc = 0x3143A0u;
    {
        const bool branch_taken_0x3143a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143A0u;
        // 0x3143a4: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143a0) {
            ctx->pc = 0x3142D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3142d4;
        }
    }
    ctx->pc = 0x3143A8u;
label_3143a8:
    // 0x3143a8: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3143a8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3143ac:
    // 0x3143ac: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x3143acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_3143b0:
    // 0x3143b0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3143b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3143b4:
    // 0x3143b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_3143b8:
    if (ctx->pc == 0x3143B8u) {
        ctx->pc = 0x3143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143B4u;
        // 0x3143b8: 0x2442e6b0  addiu       $v0, $v0, -0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3143BCu;
        goto label_3143bc;
    }
    ctx->pc = 0x3143B4u;
    {
        const bool branch_taken_0x3143b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143B4u;
        // 0x3143b8: 0x2442e6b0  addiu       $v0, $v0, -0x1950 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143b4) {
            ctx->pc = 0x3143FCu;
            goto label_3143fc;
        }
    }
    ctx->pc = 0x3143BCu;
label_3143bc:
    // 0x3143bc: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x3143bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
label_3143c0:
    // 0x3143c0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3143c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3143c4:
    // 0x3143c4: 0x2442e6b0  addiu       $v0, $v0, -0x1950
    ctx->pc = 0x3143c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960816));
label_3143c8:
    // 0x3143c8: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3143c8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3143cc:
    // 0x3143cc: 0x10000045  b           . + 4 + (0x45 << 2)
label_3143d0:
    if (ctx->pc == 0x3143D0u) {
        ctx->pc = 0x3143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143CCu;
        // 0x3143d0: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3143D4u;
        goto label_3143d4;
    }
    ctx->pc = 0x3143CCu;
    {
        const bool branch_taken_0x3143cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143CCu;
        // 0x3143d0: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143cc) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x3143D4u;
label_3143d4:
    // 0x3143d4: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3143d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3143d8:
    // 0x3143d8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x3143d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_3143dc:
    // 0x3143dc: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3143dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3143e0:
    // 0x3143e0: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x3143e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_3143e4:
    // 0x3143e4: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3143e4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3143e8:
    // 0x3143e8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3143ec:
    if (ctx->pc == 0x3143ECu) {
        ctx->pc = 0x3143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143E8u;
        // 0x3143ec: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3143F0u;
        goto label_3143f0;
    }
    ctx->pc = 0x3143E8u;
    {
        const bool branch_taken_0x3143e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3143ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3143E8u;
        // 0x3143ec: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3143e8) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x3143F0u;
label_3143f0:
    // 0x3143f0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x3143f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_3143f4:
    // 0x3143f4: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3143f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3143f8:
    // 0x3143f8: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x3143f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_3143fc:
    // 0x3143fc: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3143fcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_314400:
    // 0x314400: 0x10000038  b           . + 4 + (0x38 << 2)
label_314404:
    if (ctx->pc == 0x314404u) {
        ctx->pc = 0x314404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314400u;
        // 0x314404: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314408u;
        goto label_314408;
    }
    ctx->pc = 0x314400u;
    {
        const bool branch_taken_0x314400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314400u;
        // 0x314404: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314400) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x314408u;
label_314408:
    // 0x314408: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x314408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_31440c:
    // 0x31440c: 0x10000011  b           . + 4 + (0x11 << 2)
label_314410:
    if (ctx->pc == 0x314410u) {
        ctx->pc = 0x314410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31440Cu;
        // 0x314410: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314414u;
        goto label_314414;
    }
    ctx->pc = 0x31440Cu;
    {
        const bool branch_taken_0x31440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31440Cu;
        // 0x314410: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31440c) {
            ctx->pc = 0x314454u;
            goto label_314454;
        }
    }
    ctx->pc = 0x314414u;
label_314414:
    // 0x314414: 0x10000033  b           . + 4 + (0x33 << 2)
label_314418:
    if (ctx->pc == 0x314418u) {
        ctx->pc = 0x314418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314414u;
        // 0x314418: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31441Cu;
        goto label_31441c;
    }
    ctx->pc = 0x314414u;
    {
        const bool branch_taken_0x314414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314414u;
        // 0x314418: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314414) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x31441Cu;
label_31441c:
    // 0x31441c: 0x10000031  b           . + 4 + (0x31 << 2)
label_314420:
    if (ctx->pc == 0x314420u) {
        ctx->pc = 0x314420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31441Cu;
        // 0x314420: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314424u;
        goto label_314424;
    }
    ctx->pc = 0x31441Cu;
    {
        const bool branch_taken_0x31441c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31441Cu;
        // 0x314420: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31441c) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x314424u;
label_314424:
    // 0x314424: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x314424u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_314428:
    // 0x314428: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x314428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31442c:
    // 0x31442c: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x31442cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_314430:
    // 0x314430: 0xc0c532c  jal         func_314CB0
label_314434:
    if (ctx->pc == 0x314434u) {
        ctx->pc = 0x314434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314430u;
        // 0x314434: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314438u;
        goto label_314438;
    }
    ctx->pc = 0x314430u;
    SET_GPR_U32(ctx, 31, 0x314438u);
    ctx->pc = 0x314434u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314430u;
    // 0x314434: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314CB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314CB0u, 0x314430u, 0x314438u)) {
        return;
    }
    ctx->pc = 0x314438u;
label_314438:
    // 0x314438: 0x1000002a  b           . + 4 + (0x2A << 2)
label_31443c:
    if (ctx->pc == 0x31443Cu) {
        ctx->pc = 0x31443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314438u;
        // 0x31443c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314440u;
        goto label_314440;
    }
    ctx->pc = 0x314438u;
    {
        const bool branch_taken_0x314438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314438u;
        // 0x31443c: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314438) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x314440u;
label_314440:
    // 0x314440: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x314440u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_314444:
    // 0x314444: 0x10000027  b           . + 4 + (0x27 << 2)
label_314448:
    if (ctx->pc == 0x314448u) {
        ctx->pc = 0x314448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314444u;
        // 0x314448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31444Cu;
        goto label_31444c;
    }
    ctx->pc = 0x314444u;
    {
        const bool branch_taken_0x314444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314444u;
        // 0x314448: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314444) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x31444Cu;
label_31444c:
    // 0x31444c: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x31444cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_314450:
    // 0x314450: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x314450u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_314454:
    // 0x314454: 0x24427200  addiu       $v0, $v0, 0x7200
    ctx->pc = 0x314454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29184));
label_314458:
    // 0x314458: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x314458u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_31445c:
    // 0x31445c: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x31445cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_314460:
    // 0x314460: 0x10000020  b           . + 4 + (0x20 << 2)
label_314464:
    if (ctx->pc == 0x314464u) {
        ctx->pc = 0x314464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314460u;
        // 0x314464: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314468u;
        goto label_314468;
    }
    ctx->pc = 0x314460u;
    {
        const bool branch_taken_0x314460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314460u;
        // 0x314464: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314460) {
            ctx->pc = 0x3144E4u;
            goto label_3144e4;
        }
    }
    ctx->pc = 0x314468u;
label_314468:
    // 0x314468: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x314468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_31446c:
    // 0x31446c: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
label_314470:
    if (ctx->pc == 0x314470u) {
        ctx->pc = 0x314470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31446Cu;
        // 0x314470: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314474u;
        goto label_314474;
    }
    ctx->pc = 0x31446Cu;
    {
        const bool branch_taken_0x31446c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31446Cu;
        // 0x314470: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31446c) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x314474u;
label_314474:
    // 0x314474: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x314474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_314478:
    // 0x314478: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_31447c:
    if (ctx->pc == 0x31447Cu) {
        ctx->pc = 0x31447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314478u;
        // 0x31447c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314480u;
        goto label_314480;
    }
    ctx->pc = 0x314478u;
    {
        const bool branch_taken_0x314478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31447Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314478u;
        // 0x31447c: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314478) {
            ctx->pc = 0x314490u;
            goto label_314490;
        }
    }
    ctx->pc = 0x314480u;
label_314480:
    // 0x314480: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x314480u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_314484:
    // 0x314484: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x314484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314488:
    // 0x314488: 0x1000ff5d  b           . + 4 + (-0xA3 << 2)
label_31448c:
    if (ctx->pc == 0x31448Cu) {
        ctx->pc = 0x31448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314488u;
        // 0x31448c: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314490u;
        goto label_314490;
    }
    ctx->pc = 0x314488u;
    {
        const bool branch_taken_0x314488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31448Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314488u;
        // 0x31448c: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314488) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x314490u;
label_314490:
    // 0x314490: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_314494:
    if (ctx->pc == 0x314494u) {
        ctx->pc = 0x314494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314490u;
        // 0x314494: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314498u;
        goto label_314498;
    }
    ctx->pc = 0x314490u;
    {
        const bool branch_taken_0x314490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314490u;
        // 0x314494: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314490) {
            ctx->pc = 0x3144A4u;
            goto label_3144a4;
        }
    }
    ctx->pc = 0x314498u;
label_314498:
    // 0x314498: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x314498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_31449c:
    // 0x31449c: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_3144a0:
    if (ctx->pc == 0x3144A0u) {
        ctx->pc = 0x3144A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31449Cu;
        // 0x3144a0: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3144A4u;
        goto label_3144a4;
    }
    ctx->pc = 0x31449Cu;
    {
        const bool branch_taken_0x31449c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31449Cu;
        // 0x3144a0: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31449c) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x3144A4u;
label_3144a4:
    // 0x3144a4: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3144a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3144a8:
    // 0x3144a8: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_3144ac:
    if (ctx->pc == 0x3144ACu) {
        ctx->pc = 0x3144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144A8u;
        // 0x3144ac: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3144B0u;
        goto label_3144b0;
    }
    ctx->pc = 0x3144A8u;
    {
        const bool branch_taken_0x3144a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144A8u;
        // 0x3144ac: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144a8) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x3144B0u;
label_3144b0:
    // 0x3144b0: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_3144b4:
    if (ctx->pc == 0x3144B4u) {
        ctx->pc = 0x3144B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144B0u;
        // 0x3144b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3144B8u;
        goto label_3144b8;
    }
    ctx->pc = 0x3144B0u;
    {
        const bool branch_taken_0x3144b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3144B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144B0u;
        // 0x3144b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144b0) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x3144B8u;
label_3144b8:
    // 0x3144b8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3144b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3144bc:
    // 0x3144bc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x3144bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
label_3144c0:
    // 0x3144c0: 0x2463e6b0  addiu       $v1, $v1, -0x1950
    ctx->pc = 0x3144c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960816));
label_3144c4:
    // 0x3144c4: 0x244211d1  addiu       $v0, $v0, 0x11D1
    ctx->pc = 0x3144c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_3144c8:
    // 0x3144c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3144c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3144cc:
    // 0x3144cc: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x3144ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
label_3144d0:
    // 0x3144d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3144d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3144d4:
    // 0x3144d4: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3144d4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3144d8:
    // 0x3144d8: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3144d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3144dc:
    // 0x3144dc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3144dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3144e0:
    // 0x3144e0: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x3144e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3144e4:
    // 0x3144e4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3144e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3144e8:
    // 0x3144e8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_3144ec:
    if (ctx->pc == 0x3144ECu) {
        ctx->pc = 0x3144ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144E8u;
        // 0x3144ec: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3144F0u;
        goto label_3144f0;
    }
    ctx->pc = 0x3144E8u;
    {
        const bool branch_taken_0x3144e8 = (GPR_S64(ctx, 2) > 0);
        ctx->pc = 0x3144ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144E8u;
        // 0x3144ec: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144e8) {
            ctx->pc = 0x314504u;
            goto label_314504;
        }
    }
    ctx->pc = 0x3144F0u;
label_3144f0:
    // 0x3144f0: 0xc0c4f2e  jal         func_313CB8
label_3144f4:
    if (ctx->pc == 0x3144F4u) {
        ctx->pc = 0x3144F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F0u;
        // 0x3144f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3144F8u;
        goto label_3144f8;
    }
    ctx->pc = 0x3144F0u;
    SET_GPR_U32(ctx, 31, 0x3144F8u);
    ctx->pc = 0x3144F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3144F0u;
    // 0x3144f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x3144F0u, 0x3144F8u)) {
        return;
    }
    ctx->pc = 0x3144F8u;
label_3144f8:
    // 0x3144f8: 0x144001dd  bnez        $v0, . + 4 + (0x1DD << 2)
label_3144fc:
    if (ctx->pc == 0x3144FCu) {
        ctx->pc = 0x3144FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F8u;
        // 0x3144fc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314500u;
        goto label_314500;
    }
    ctx->pc = 0x3144F8u;
    {
        const bool branch_taken_0x3144f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3144FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3144F8u;
        // 0x3144fc: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3144f8) {
            ctx->pc = 0x314C70u;
            goto label_314c70;
        }
    }
    ctx->pc = 0x314500u;
label_314500:
    // 0x314500: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x314500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_314504:
    // 0x314504: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_314508:
    if (ctx->pc == 0x314508u) {
        ctx->pc = 0x314508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314504u;
        // 0x314508: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31450Cu;
        goto label_31450c;
    }
    ctx->pc = 0x314504u;
    {
        const bool branch_taken_0x314504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314504u;
        // 0x314508: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314504) {
            ctx->pc = 0x314584u;
            goto label_314584;
        }
    }
    ctx->pc = 0x31450Cu;
label_31450c:
    // 0x31450c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x31450cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314510:
    // 0x314510: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x314510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_314514:
    // 0x314514: 0x244511d1  addiu       $a1, $v0, 0x11D1
    ctx->pc = 0x314514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_314518:
    // 0x314518: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x314518u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31451c:
    // 0x31451c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x31451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_314520:
    // 0x314520: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x314520u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_314524:
    // 0x314524: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x314524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_314528:
    // 0x314528: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_31452c:
    if (ctx->pc == 0x31452Cu) {
        ctx->pc = 0x31452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314528u;
        // 0x31452c: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314530u;
        goto label_314530;
    }
    ctx->pc = 0x314528u;
    {
        const bool branch_taken_0x314528 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31452Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314528u;
        // 0x31452c: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314528) {
            ctx->pc = 0x314584u;
            goto label_314584;
        }
    }
    ctx->pc = 0x314530u;
label_314530:
    // 0x314530: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x314530u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_314534:
    // 0x314534: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314538:
    // 0x314538: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x314538u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_31453c:
    // 0x31453c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x31453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_314540:
    // 0x314540: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_314544:
    if (ctx->pc == 0x314544u) {
        ctx->pc = 0x314544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314540u;
        // 0x314544: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314548u;
        goto label_314548;
    }
    ctx->pc = 0x314540u;
    {
        const bool branch_taken_0x314540 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x314544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314540u;
        // 0x314544: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314540) {
            ctx->pc = 0x314554u;
            goto label_314554;
        }
    }
    ctx->pc = 0x314548u;
label_314548:
    // 0x314548: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x314548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_31454c:
    // 0x31454c: 0x10000005  b           . + 4 + (0x5 << 2)
label_314550:
    if (ctx->pc == 0x314550u) {
        ctx->pc = 0x314550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31454Cu;
        // 0x314550: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314554u;
        goto label_314554;
    }
    ctx->pc = 0x31454Cu;
    {
        const bool branch_taken_0x31454c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31454Cu;
        // 0x314550: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31454c) {
            ctx->pc = 0x314564u;
            goto label_314564;
        }
    }
    ctx->pc = 0x314554u;
label_314554:
    // 0x314554: 0xc0c4f2e  jal         func_313CB8
label_314558:
    if (ctx->pc == 0x314558u) {
        ctx->pc = 0x314558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314554u;
        // 0x314558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31455Cu;
        goto label_31455c;
    }
    ctx->pc = 0x314554u;
    SET_GPR_U32(ctx, 31, 0x31455Cu);
    ctx->pc = 0x314558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314554u;
    // 0x314558: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314554u, 0x31455Cu)) {
        return;
    }
    ctx->pc = 0x31455Cu;
label_31455c:
    // 0x31455c: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_314560:
    if (ctx->pc == 0x314560u) {
        ctx->pc = 0x314560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31455Cu;
        // 0x314560: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314564u;
        goto label_314564;
    }
    ctx->pc = 0x31455Cu;
    {
        const bool branch_taken_0x31455c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31455Cu;
        // 0x314560: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31455c) {
            ctx->pc = 0x314C70u;
            goto label_314c70;
        }
    }
    ctx->pc = 0x314564u;
label_314564:
    // 0x314564: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x314564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314568:
    // 0x314568: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x314568u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_31456c:
    // 0x31456c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x31456cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_314570:
    // 0x314570: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x314570u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_314574:
    // 0x314574: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x314574u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_314578:
    // 0x314578: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_31457c:
    if (ctx->pc == 0x31457Cu) {
        ctx->pc = 0x31457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314578u;
        // 0x31457c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314580u;
        goto label_314580;
    }
    ctx->pc = 0x314578u;
    {
        const bool branch_taken_0x314578 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x314578) {
            ctx->pc = 0x31457Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314578u;
            // 0x31457c: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314538;
        }
    }
    ctx->pc = 0x314580u;
label_314580:
    // 0x314580: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x314580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_314584:
    // 0x314584: 0x1040ff1f  beqz        $v0, . + 4 + (-0xE1 << 2)
label_314588:
    if (ctx->pc == 0x314588u) {
        ctx->pc = 0x314588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314584u;
        // 0x314588: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31458Cu;
        goto label_31458c;
    }
    ctx->pc = 0x314584u;
    {
        const bool branch_taken_0x314584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314584u;
        // 0x314588: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314584) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x31458Cu;
label_31458c:
    // 0x31458c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_314590:
    // 0x314590: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x314590u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_314594:
    // 0x314594: 0x24421510  addiu       $v0, $v0, 0x1510
    ctx->pc = 0x314594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5392));
label_314598:
    // 0x314598: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x314598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31459c:
    // 0x31459c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31459cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3145a0:
    // 0x3145a0: 0x800008  jr          $a0
label_3145a4:
    if (ctx->pc == 0x3145A4u) {
        ctx->pc = 0x3145A8u;
        goto label_3145a8;
    }
    ctx->pc = 0x3145A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3145A8u: goto label_3145a8;
            case 0x31464Cu: goto label_31464c;
            case 0x314758u: goto label_314758;
            case 0x314864u: goto label_314864;
            case 0x314A9Cu: goto label_314a9c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3145A0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3145A8u;
label_3145a8:
    // 0x3145a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3145a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3145ac:
    // 0x3145ac: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3145acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3145b0:
    // 0x3145b0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3145b4:
    if (ctx->pc == 0x3145B4u) {
        ctx->pc = 0x3145B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145B0u;
        // 0x3145b4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145B8u;
        goto label_3145b8;
    }
    ctx->pc = 0x3145B0u;
    {
        const bool branch_taken_0x3145b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145B0u;
        // 0x3145b4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145b0) {
            ctx->pc = 0x31461Cu;
            goto label_31461c;
        }
    }
    ctx->pc = 0x3145B8u;
label_3145b8:
    // 0x3145b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3145b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3145bc:
    // 0x3145bc: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3145bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3145c0:
    // 0x3145c0: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x3145c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3145c4:
    // 0x3145c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3145c8:
    if (ctx->pc == 0x3145C8u) {
        ctx->pc = 0x3145C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145C4u;
        // 0x3145c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145CCu;
        goto label_3145cc;
    }
    ctx->pc = 0x3145C4u;
    {
        const bool branch_taken_0x3145c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145C4u;
        // 0x3145c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145c4) {
            ctx->pc = 0x3145FCu;
            goto label_3145fc;
        }
    }
    ctx->pc = 0x3145CCu;
label_3145cc:
    // 0x3145cc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3145ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3145d0:
    // 0x3145d0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3145d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3145d4:
    // 0x3145d4: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x3145d4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3145d8:
    // 0x3145d8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3145d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3145dc:
    // 0x3145dc: 0xc0c4f2e  jal         func_313CB8
label_3145e0:
    if (ctx->pc == 0x3145E0u) {
        ctx->pc = 0x3145E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145DCu;
        // 0x3145e0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145E4u;
        goto label_3145e4;
    }
    ctx->pc = 0x3145DCu;
    SET_GPR_U32(ctx, 31, 0x3145E4u);
    ctx->pc = 0x3145E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3145DCu;
    // 0x3145e0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x3145DCu, 0x3145E4u)) {
        return;
    }
    ctx->pc = 0x3145E4u;
label_3145e4:
    // 0x3145e4: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_3145e8:
    if (ctx->pc == 0x3145E8u) {
        ctx->pc = 0x3145E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145E4u;
        // 0x3145e8: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145ECu;
        goto label_3145ec;
    }
    ctx->pc = 0x3145E4u;
    {
        const bool branch_taken_0x3145e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3145e4) {
            ctx->pc = 0x3145E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3145E4u;
            // 0x3145e8: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3145C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3145c0;
        }
    }
    ctx->pc = 0x3145ECu;
label_3145ec:
    // 0x3145ec: 0x1220019f  beqz        $s1, . + 4 + (0x19F << 2)
label_3145f0:
    if (ctx->pc == 0x3145F0u) {
        ctx->pc = 0x3145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145ECu;
        // 0x3145f0: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145F4u;
        goto label_3145f4;
    }
    ctx->pc = 0x3145ECu;
    {
        const bool branch_taken_0x3145ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145ECu;
        // 0x3145f0: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145ec) {
            ctx->pc = 0x314C6Cu;
            goto label_314c6c;
        }
    }
    ctx->pc = 0x3145F4u;
label_3145f4:
    // 0x3145f4: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_3145f8:
    if (ctx->pc == 0x3145F8u) {
        ctx->pc = 0x3145F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145F4u;
        // 0x3145f8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3145FCu;
        goto label_3145fc;
    }
    ctx->pc = 0x3145F4u;
    {
        const bool branch_taken_0x3145f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3145F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3145F4u;
        // 0x3145f8: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3145f4) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x3145FCu;
label_3145fc:
    // 0x3145fc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3145fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314600:
    // 0x314600: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x314600u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_314604:
    // 0x314604: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x314604u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_314608:
    // 0x314608: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x314608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_31460c:
    // 0x31460c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x31460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_314610:
    // 0x314610: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x314610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_314614:
    // 0x314614: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_314618:
    if (ctx->pc == 0x314618u) {
        ctx->pc = 0x314618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314614u;
        // 0x314618: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31461Cu;
        goto label_31461c;
    }
    ctx->pc = 0x314614u;
    {
        const bool branch_taken_0x314614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314614u;
        // 0x314618: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314614) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x31461Cu;
label_31461c:
    // 0x31461c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x31461cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_314620:
    // 0x314620: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x314620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_314624:
    // 0x314624: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x314624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314628:
    // 0x314628: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x314628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31462c:
    // 0x31462c: 0xc0c4d44  jal         func_313510
label_314630:
    if (ctx->pc == 0x314630u) {
        ctx->pc = 0x314630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31462Cu;
        // 0x314630: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314634u;
        goto label_314634;
    }
    ctx->pc = 0x31462Cu;
    SET_GPR_U32(ctx, 31, 0x314634u);
    ctx->pc = 0x314630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31462Cu;
    // 0x314630: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313510u, 0x31462Cu, 0x314634u)) {
        return;
    }
    ctx->pc = 0x314634u;
label_314634:
    // 0x314634: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_314638:
    if (ctx->pc == 0x314638u) {
        ctx->pc = 0x314638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314634u;
        // 0x314638: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31463Cu;
        goto label_31463c;
    }
    ctx->pc = 0x314634u;
    {
        const bool branch_taken_0x314634 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314634u;
        // 0x314638: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314634) {
            ctx->pc = 0x314C6Cu;
            goto label_314c6c;
        }
    }
    ctx->pc = 0x31463Cu;
label_31463c:
    // 0x31463c: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x31463cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_314640:
    // 0x314640: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x314640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_314644:
    // 0x314644: 0x1000feee  b           . + 4 + (-0x112 << 2)
label_314648:
    if (ctx->pc == 0x314648u) {
        ctx->pc = 0x314648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314644u;
        // 0x314648: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31464Cu;
        goto label_31464c;
    }
    ctx->pc = 0x314644u;
    {
        const bool branch_taken_0x314644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314644u;
        // 0x314648: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314644) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x31464Cu;
label_31464c:
    // 0x31464c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x31464cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_314650:
    // 0x314650: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x314650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_314654:
    // 0x314654: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_314658:
    // 0x314658: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_31465c:
    if (ctx->pc == 0x31465Cu) {
        ctx->pc = 0x31465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314658u;
        // 0x31465c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314660u;
        goto label_314660;
    }
    ctx->pc = 0x314658u;
    {
        const bool branch_taken_0x314658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31465Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314658u;
        // 0x31465c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314658) {
            ctx->pc = 0x3146C8u;
            goto label_3146c8;
        }
    }
    ctx->pc = 0x314660u;
label_314660:
    // 0x314660: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x314660u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314664:
    // 0x314664: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x314664u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314668:
    // 0x314668: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x314668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_31466c:
    // 0x31466c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x31466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_314670:
    // 0x314670: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x314670u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_314674:
    // 0x314674: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_314678:
    if (ctx->pc == 0x314678u) {
        ctx->pc = 0x314678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314674u;
        // 0x314678: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31467Cu;
        goto label_31467c;
    }
    ctx->pc = 0x314674u;
    {
        const bool branch_taken_0x314674 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x314678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314674u;
        // 0x314678: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314674) {
            ctx->pc = 0x3146B8u;
            goto label_3146b8;
        }
    }
    ctx->pc = 0x31467Cu;
label_31467c:
    // 0x31467c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x31467cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314680:
    // 0x314680: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x314680u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_314684:
    // 0x314684: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x314684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_314688:
    // 0x314688: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x314688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31468c:
    // 0x31468c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x31468cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_314690:
    // 0x314690: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_314694:
    if (ctx->pc == 0x314694u) {
        ctx->pc = 0x314694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314690u;
        // 0x314694: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314698u;
        goto label_314698;
    }
    ctx->pc = 0x314690u;
    {
        const bool branch_taken_0x314690 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x314694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314690u;
        // 0x314694: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314690) {
            ctx->pc = 0x3146B8u;
            goto label_3146b8;
        }
    }
    ctx->pc = 0x314698u;
label_314698:
    // 0x314698: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_31469c:
    if (ctx->pc == 0x31469Cu) {
        ctx->pc = 0x31469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314698u;
        // 0x31469c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146A0u;
        goto label_3146a0;
    }
    ctx->pc = 0x314698u;
    {
        const bool branch_taken_0x314698 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x314698) {
            ctx->pc = 0x31469Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314698u;
            // 0x31469c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314668;
        }
    }
    ctx->pc = 0x3146A0u;
label_3146a0:
    // 0x3146a0: 0xc0c4f2e  jal         func_313CB8
label_3146a4:
    if (ctx->pc == 0x3146A4u) {
        ctx->pc = 0x3146A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146A0u;
        // 0x3146a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146A8u;
        goto label_3146a8;
    }
    ctx->pc = 0x3146A0u;
    SET_GPR_U32(ctx, 31, 0x3146A8u);
    ctx->pc = 0x3146A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3146A0u;
    // 0x3146a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x3146A0u, 0x3146A8u)) {
        return;
    }
    ctx->pc = 0x3146A8u;
label_3146a8:
    // 0x3146a8: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_3146ac:
    if (ctx->pc == 0x3146ACu) {
        ctx->pc = 0x3146ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146A8u;
        // 0x3146ac: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146B0u;
        goto label_3146b0;
    }
    ctx->pc = 0x3146A8u;
    {
        const bool branch_taken_0x3146a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3146a8) {
            ctx->pc = 0x3146ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3146A8u;
            // 0x3146ac: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314668;
        }
    }
    ctx->pc = 0x3146B0u;
label_3146b0:
    // 0x3146b0: 0x1200016f  beqz        $s0, . + 4 + (0x16F << 2)
label_3146b4:
    if (ctx->pc == 0x3146B4u) {
        ctx->pc = 0x3146B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B0u;
        // 0x3146b4: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146B8u;
        goto label_3146b8;
    }
    ctx->pc = 0x3146B0u;
    {
        const bool branch_taken_0x3146b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B0u;
        // 0x3146b4: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146b0) {
            ctx->pc = 0x314C70u;
            goto label_314c70;
        }
    }
    ctx->pc = 0x3146B8u;
label_3146b8:
    // 0x3146b8: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
label_3146bc:
    if (ctx->pc == 0x3146BCu) {
        ctx->pc = 0x3146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B8u;
        // 0x3146bc: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146C0u;
        goto label_3146c0;
    }
    ctx->pc = 0x3146B8u;
    {
        const bool branch_taken_0x3146b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146B8u;
        // 0x3146bc: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146b8) {
            ctx->pc = 0x314C7Cu;
            goto label_314c7c;
        }
    }
    ctx->pc = 0x3146C0u;
label_3146c0:
    // 0x3146c0: 0x1000fed0  b           . + 4 + (-0x130 << 2)
label_3146c4:
    if (ctx->pc == 0x3146C4u) {
        ctx->pc = 0x3146C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146C0u;
        // 0x3146c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146C8u;
        goto label_3146c8;
    }
    ctx->pc = 0x3146C0u;
    {
        const bool branch_taken_0x3146c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3146C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146C0u;
        // 0x3146c4: 0x3c020068  lui         $v0, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3146c0) {
            ctx->pc = 0x314204u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314204;
        }
    }
    ctx->pc = 0x3146C8u;
label_3146c8:
    // 0x3146c8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3146c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3146cc:
    // 0x3146cc: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3146ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3146d0:
    // 0x3146d0: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3146d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3146d4:
    // 0x3146d4: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3146d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3146d8:
    // 0x3146d8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3146d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3146dc:
    // 0x3146dc: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3146dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3146e0:
    // 0x3146e0: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3146e0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3146e4:
    // 0x3146e4: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_3146e8:
    if (ctx->pc == 0x3146E8u) {
        ctx->pc = 0x3146E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3146E4u;
        // 0x3146e8: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3146ECu;
        goto label_3146ec;
    }
    ctx->pc = 0x3146E4u;
    {
        const bool branch_taken_0x3146e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3146e4) {
            ctx->pc = 0x3146E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3146E4u;
            // 0x3146e8: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31473Cu;
            goto label_31473c;
        }
    }
    ctx->pc = 0x3146ECu;
label_3146ec:
    // 0x3146ec: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3146ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3146f0:
    // 0x3146f0: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3146f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3146f4:
    // 0x3146f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3146f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3146f8:
    // 0x3146f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3146f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3146fc:
    // 0x3146fc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3146fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_314700:
    // 0x314700: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x314700u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_314704:
    // 0x314704: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x314704u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_314708:
    // 0x314708: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x314708u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_31470c:
    // 0x31470c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_314710:
    if (ctx->pc == 0x314710u) {
        ctx->pc = 0x314710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31470Cu;
        // 0x314710: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314714u;
        goto label_314714;
    }
    ctx->pc = 0x31470Cu;
    {
        const bool branch_taken_0x31470c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x314710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31470Cu;
        // 0x314710: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31470c) {
            ctx->pc = 0x314738u;
            goto label_314738;
        }
    }
    ctx->pc = 0x314714u;
label_314714:
    // 0x314714: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314718:
    // 0x314718: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_31471c:
    if (ctx->pc == 0x31471Cu) {
        ctx->pc = 0x31471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314718u;
        // 0x31471c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314720u;
        goto label_314720;
    }
    ctx->pc = 0x314718u;
    {
        const bool branch_taken_0x314718 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x314718) {
            ctx->pc = 0x31471Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314718u;
            // 0x31471c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3146D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3146d8;
        }
    }
    ctx->pc = 0x314720u;
label_314720:
    // 0x314720: 0xc0c4f2e  jal         func_313CB8
label_314724:
    if (ctx->pc == 0x314724u) {
        ctx->pc = 0x314724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314720u;
        // 0x314724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314728u;
        goto label_314728;
    }
    ctx->pc = 0x314720u;
    SET_GPR_U32(ctx, 31, 0x314728u);
    ctx->pc = 0x314724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314720u;
    // 0x314724: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314720u, 0x314728u)) {
        return;
    }
    ctx->pc = 0x314728u;
label_314728:
    // 0x314728: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_31472c:
    if (ctx->pc == 0x31472Cu) {
        ctx->pc = 0x31472Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314728u;
        // 0x31472c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314730u;
        goto label_314730;
    }
    ctx->pc = 0x314728u;
    {
        const bool branch_taken_0x314728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314728) {
            ctx->pc = 0x31472Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314728u;
            // 0x31472c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3146D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3146d8;
        }
    }
    ctx->pc = 0x314730u;
label_314730:
    // 0x314730: 0x1230014f  beq         $s1, $s0, . + 4 + (0x14F << 2)
label_314734:
    if (ctx->pc == 0x314734u) {
        ctx->pc = 0x314734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314730u;
        // 0x314734: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314738u;
        goto label_314738;
    }
    ctx->pc = 0x314730u;
    {
        const bool branch_taken_0x314730 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x314734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314730u;
        // 0x314734: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314730) {
            ctx->pc = 0x314C70u;
            goto label_314c70;
        }
    }
    ctx->pc = 0x314738u;
label_314738:
    // 0x314738: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x314738u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_31473c:
    // 0x31473c: 0x12000150  beqz        $s0, . + 4 + (0x150 << 2)
label_314740:
    if (ctx->pc == 0x314740u) {
        ctx->pc = 0x314740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31473Cu;
        // 0x314740: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314744u;
        goto label_314744;
    }
    ctx->pc = 0x31473Cu;
    {
        const bool branch_taken_0x31473c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x314740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31473Cu;
        // 0x314740: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31473c) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x314744u;
label_314744:
    // 0x314744: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x314744u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_314748:
    // 0x314748: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x314748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_31474c:
    // 0x31474c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31474cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_314750:
    // 0x314750: 0x1000001e  b           . + 4 + (0x1E << 2)
label_314754:
    if (ctx->pc == 0x314754u) {
        ctx->pc = 0x314754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314750u;
        // 0x314754: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314758u;
        goto label_314758;
    }
    ctx->pc = 0x314750u;
    {
        const bool branch_taken_0x314750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314750u;
        // 0x314754: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314750) {
            ctx->pc = 0x3147CCu;
            goto label_3147cc;
        }
    }
    ctx->pc = 0x314758u;
label_314758:
    // 0x314758: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x314758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_31475c:
    // 0x31475c: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x31475cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_314760:
    // 0x314760: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x314760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_314764:
    // 0x314764: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_314768:
    if (ctx->pc == 0x314768u) {
        ctx->pc = 0x314768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314764u;
        // 0x314768: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31476Cu;
        goto label_31476c;
    }
    ctx->pc = 0x314764u;
    {
        const bool branch_taken_0x314764 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x314768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314764u;
        // 0x314768: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314764) {
            ctx->pc = 0x3147D4u;
            goto label_3147d4;
        }
    }
    ctx->pc = 0x31476Cu;
label_31476c:
    // 0x31476c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x31476cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_314770:
    // 0x314770: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x314770u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314774:
    // 0x314774: 0x245111d1  addiu       $s1, $v0, 0x11D1
    ctx->pc = 0x314774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_314778:
    // 0x314778: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x314778u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31477c:
    // 0x31477c: 0x0  nop
    ctx->pc = 0x31477cu;
    // NOP
label_314780:
    // 0x314780: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x314780u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_314784:
    // 0x314784: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x314784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_314788:
    // 0x314788: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x314788u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_31478c:
    // 0x31478c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x31478cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_314790:
    // 0x314790: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_314794:
    if (ctx->pc == 0x314794u) {
        ctx->pc = 0x314794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314790u;
        // 0x314794: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314798u;
        goto label_314798;
    }
    ctx->pc = 0x314790u;
    {
        const bool branch_taken_0x314790 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314790u;
        // 0x314794: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314790) {
            ctx->pc = 0x3147CCu;
            goto label_3147cc;
        }
    }
    ctx->pc = 0x314798u;
label_314798:
    // 0x314798: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x314798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_31479c:
    // 0x31479c: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x31479cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3147a0:
    // 0x3147a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3147a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3147a4:
    // 0x3147a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3147a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3147a8:
    // 0x3147a8: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3147a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3147ac:
    // 0x3147ac: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_3147b0:
    if (ctx->pc == 0x3147B0u) {
        ctx->pc = 0x3147B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ACu;
        // 0x3147b0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147B4u;
        goto label_3147b4;
    }
    ctx->pc = 0x3147ACu;
    {
        const bool branch_taken_0x3147ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147ACu;
        // 0x3147b0: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147ac) {
            ctx->pc = 0x3147CCu;
            goto label_3147cc;
        }
    }
    ctx->pc = 0x3147B4u;
label_3147b4:
    // 0x3147b4: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_3147b8:
    if (ctx->pc == 0x3147B8u) {
        ctx->pc = 0x3147B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147B4u;
        // 0x3147b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147BCu;
        goto label_3147bc;
    }
    ctx->pc = 0x3147B4u;
    {
        const bool branch_taken_0x3147b4 = (GPR_S64(ctx, 3) > 0);
        if (branch_taken_0x3147b4) {
            ctx->pc = 0x3147B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3147B4u;
            // 0x3147b8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314780;
        }
    }
    ctx->pc = 0x3147BCu;
label_3147bc:
    // 0x3147bc: 0xc0c4f2e  jal         func_313CB8
label_3147c0:
    if (ctx->pc == 0x3147C0u) {
        ctx->pc = 0x3147C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147BCu;
        // 0x3147c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147C4u;
        goto label_3147c4;
    }
    ctx->pc = 0x3147BCu;
    SET_GPR_U32(ctx, 31, 0x3147C4u);
    ctx->pc = 0x3147C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3147BCu;
    // 0x3147c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x3147BCu, 0x3147C4u)) {
        return;
    }
    ctx->pc = 0x3147C4u;
label_3147c4:
    // 0x3147c4: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_3147c8:
    if (ctx->pc == 0x3147C8u) {
        ctx->pc = 0x3147C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147C4u;
        // 0x3147c8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147CCu;
        goto label_3147cc;
    }
    ctx->pc = 0x3147C4u;
    {
        const bool branch_taken_0x3147c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3147c4) {
            ctx->pc = 0x3147C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3147C4u;
            // 0x3147c8: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314780u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314780;
        }
    }
    ctx->pc = 0x3147CCu;
label_3147cc:
    // 0x3147cc: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
label_3147d0:
    if (ctx->pc == 0x3147D0u) {
        ctx->pc = 0x3147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147CCu;
        // 0x3147d0: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3147D4u;
        goto label_3147d4;
    }
    ctx->pc = 0x3147CCu;
    {
        const bool branch_taken_0x3147cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3147D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3147CCu;
        // 0x3147d0: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3147cc) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x3147D4u;
label_3147d4:
    // 0x3147d4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3147d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3147d8:
    // 0x3147d8: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3147d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3147dc:
    // 0x3147dc: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3147dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3147e0:
    // 0x3147e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3147e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3147e4:
    // 0x3147e4: 0x245611d1  addiu       $s6, $v0, 0x11D1
    ctx->pc = 0x3147e4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4561));
label_3147e8:
    // 0x3147e8: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3147e8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3147ec:
    // 0x3147ec: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3147ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3147f0:
    // 0x3147f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3147f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3147f4:
    // 0x3147f4: 0x0  nop
    ctx->pc = 0x3147f4u;
    // NOP
label_3147f8:
    // 0x3147f8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3147f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3147fc:
    // 0x3147fc: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3147fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_314800:
    // 0x314800: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x314800u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_314804:
    // 0x314804: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x314804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_314808:
    // 0x314808: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_31480c:
    if (ctx->pc == 0x31480Cu) {
        ctx->pc = 0x31480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314808u;
        // 0x31480c: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314810u;
        goto label_314810;
    }
    ctx->pc = 0x314808u;
    {
        const bool branch_taken_0x314808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x31480Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314808u;
        // 0x31480c: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314808) {
            ctx->pc = 0x314850u;
            goto label_314850;
        }
    }
    ctx->pc = 0x314810u;
label_314810:
    // 0x314810: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314814:
    // 0x314814: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x314814u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_314818:
    // 0x314818: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31481c:
    // 0x31481c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x31481cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_314820:
    // 0x314820: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x314820u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_314824:
    // 0x314824: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x314824u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_314828:
    // 0x314828: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x314828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_31482c:
    // 0x31482c: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_314830:
    if (ctx->pc == 0x314830u) {
        ctx->pc = 0x314830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31482Cu;
        // 0x314830: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314834u;
        goto label_314834;
    }
    ctx->pc = 0x31482Cu;
    {
        const bool branch_taken_0x31482c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x314830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31482Cu;
        // 0x314830: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31482c) {
            ctx->pc = 0x314850u;
            goto label_314850;
        }
    }
    ctx->pc = 0x314834u;
label_314834:
    // 0x314834: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314838:
    // 0x314838: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_31483c:
    if (ctx->pc == 0x31483Cu) {
        ctx->pc = 0x31483Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314838u;
        // 0x31483c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314840u;
        goto label_314840;
    }
    ctx->pc = 0x314838u;
    {
        const bool branch_taken_0x314838 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x314838) {
            ctx->pc = 0x31483Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314838u;
            // 0x31483c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3147F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3147f8;
        }
    }
    ctx->pc = 0x314840u;
label_314840:
    // 0x314840: 0xc0c4f2e  jal         func_313CB8
label_314844:
    if (ctx->pc == 0x314844u) {
        ctx->pc = 0x314844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314840u;
        // 0x314844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314848u;
        goto label_314848;
    }
    ctx->pc = 0x314840u;
    SET_GPR_U32(ctx, 31, 0x314848u);
    ctx->pc = 0x314844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314840u;
    // 0x314844: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314840u, 0x314848u)) {
        return;
    }
    ctx->pc = 0x314848u;
label_314848:
    // 0x314848: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_31484c:
    if (ctx->pc == 0x31484Cu) {
        ctx->pc = 0x31484Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314848u;
        // 0x31484c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314850u;
        goto label_314850;
    }
    ctx->pc = 0x314848u;
    {
        const bool branch_taken_0x314848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314848) {
            ctx->pc = 0x31484Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314848u;
            // 0x31484c: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3147F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3147f8;
        }
    }
    ctx->pc = 0x314850u;
label_314850:
    // 0x314850: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x314850u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_314854:
    // 0x314854: 0xafb3026c  sw          $s3, 0x26C($sp)
    ctx->pc = 0x314854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
label_314858:
    // 0x314858: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x314858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_31485c:
    // 0x31485c: 0x1000fe68  b           . + 4 + (-0x198 << 2)
label_314860:
    if (ctx->pc == 0x314860u) {
        ctx->pc = 0x314860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31485Cu;
        // 0x314860: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314864u;
        goto label_314864;
    }
    ctx->pc = 0x31485Cu;
    {
        const bool branch_taken_0x31485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31485Cu;
        // 0x314860: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31485c) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x314864u;
label_314864:
    // 0x314864: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x314864u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_314868:
    // 0x314868: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x314868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_31486c:
    // 0x31486c: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x31486cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_314870:
    // 0x314870: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x314870u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_314874:
    // 0x314874: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x314874u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
label_314878:
    // 0x314878: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x314878u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_31487c:
    // 0x31487c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x31487cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_314880:
    // 0x314880: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_314884:
    if (ctx->pc == 0x314884u) {
        ctx->pc = 0x314884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314880u;
        // 0x314884: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314888u;
        goto label_314888;
    }
    ctx->pc = 0x314880u;
    {
        const bool branch_taken_0x314880 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x314884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314880u;
        // 0x314884: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314880) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x314888u;
label_314888:
    // 0x314888: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_31488c:
    // 0x31488c: 0x0  nop
    ctx->pc = 0x31488cu;
    // NOP
label_314890:
    // 0x314890: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x314890u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_314894:
    // 0x314894: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x314894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_314898:
    // 0x314898: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x314898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_31489c:
    // 0x31489c: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3148a0:
    if (ctx->pc == 0x3148A0u) {
        ctx->pc = 0x3148A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31489Cu;
        // 0x3148a0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148A4u;
        goto label_3148a4;
    }
    ctx->pc = 0x31489Cu;
    {
        const bool branch_taken_0x31489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31489Cu;
        // 0x3148a0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31489c) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x3148A4u;
label_3148a4:
    // 0x3148a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3148a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3148a8:
    // 0x3148a8: 0x24421530  addiu       $v0, $v0, 0x1530
    ctx->pc = 0x3148a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5424));
label_3148ac:
    // 0x3148ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3148acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3148b0:
    // 0x3148b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3148b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3148b4:
    // 0x3148b4: 0x800008  jr          $a0
label_3148b8:
    if (ctx->pc == 0x3148B8u) {
        ctx->pc = 0x3148BCu;
        goto label_3148bc;
    }
    ctx->pc = 0x3148B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3148BCu: goto label_3148bc;
            case 0x3148E0u: goto label_3148e0;
            case 0x314900u: goto label_314900;
            case 0x314928u: goto label_314928;
            case 0x31493Cu: goto label_31493c;
            case 0x314950u: goto label_314950;
            case 0x3149B0u: goto label_3149b0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3148B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3148BCu;
label_3148bc:
    // 0x3148bc: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_3148c0:
    if (ctx->pc == 0x3148C0u) {
        ctx->pc = 0x3148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148BCu;
        // 0x3148c0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148C4u;
        goto label_3148c4;
    }
    ctx->pc = 0x3148BCu;
    {
        const bool branch_taken_0x3148bc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3148C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148BCu;
        // 0x3148c0: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148bc) {
            ctx->pc = 0x3148D0u;
            goto label_3148d0;
        }
    }
    ctx->pc = 0x3148C4u;
label_3148c4:
    // 0x3148c4: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3148c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3148c8:
    // 0x3148c8: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x3148c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_3148cc:
    // 0x3148cc: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x3148ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_3148d0:
    // 0x3148d0: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3148d4:
    if (ctx->pc == 0x3148D4u) {
        ctx->pc = 0x3148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D0u;
        // 0x3148d4: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148D8u;
        goto label_3148d8;
    }
    ctx->pc = 0x3148D0u;
    {
        const bool branch_taken_0x3148d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3148D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D0u;
        // 0x3148d4: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148d0) {
            ctx->pc = 0x314968u;
            goto label_314968;
        }
    }
    ctx->pc = 0x3148D8u;
label_3148d8:
    // 0x3148d8: 0x10000023  b           . + 4 + (0x23 << 2)
label_3148dc:
    if (ctx->pc == 0x3148DCu) {
        ctx->pc = 0x3148DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D8u;
        // 0x3148dc: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3148E0u;
        goto label_3148e0;
    }
    ctx->pc = 0x3148D8u;
    {
        const bool branch_taken_0x3148d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148D8u;
        // 0x3148dc: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148d8) {
            ctx->pc = 0x314968u;
            goto label_314968;
        }
    }
    ctx->pc = 0x3148E0u;
label_3148e0:
    // 0x3148e0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3148e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3148e4:
    // 0x3148e4: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x3148e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3148e8:
    // 0x3148e8: 0x244212f0  addiu       $v0, $v0, 0x12F0
    ctx->pc = 0x3148e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
label_3148ec:
    // 0x3148ec: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x3148ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_3148f0:
    // 0x3148f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3148f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3148f4:
    // 0x3148f4: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x3148f4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_3148f8:
    // 0x3148f8: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3148fc:
    if (ctx->pc == 0x3148FCu) {
        ctx->pc = 0x3148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148F8u;
        // 0x3148fc: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314900u;
        goto label_314900;
    }
    ctx->pc = 0x3148F8u;
    {
        const bool branch_taken_0x3148f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3148FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3148F8u;
        // 0x3148fc: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3148f8) {
            ctx->pc = 0x31496Cu;
            goto label_31496c;
        }
    }
    ctx->pc = 0x314900u;
label_314900:
    // 0x314900: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x314900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_314904:
    // 0x314904: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x314904u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_314908:
    // 0x314908: 0x244212f0  addiu       $v0, $v0, 0x12F0
    ctx->pc = 0x314908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4848));
label_31490c:
    // 0x31490c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31490cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314910:
    // 0x314910: 0x847e0000  lh          $fp, 0x0($v1)
    ctx->pc = 0x314910u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_314914:
    // 0x314914: 0x2bc20009  slti        $v0, $fp, 0x9
    ctx->pc = 0x314914u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_314918:
    // 0x314918: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_31491c:
    if (ctx->pc == 0x31491Cu) {
        ctx->pc = 0x31491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314918u;
        // 0x31491c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314920u;
        goto label_314920;
    }
    ctx->pc = 0x314918u;
    {
        const bool branch_taken_0x314918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31491Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314918u;
        // 0x31491c: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314918) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x314920u;
label_314920:
    // 0x314920: 0x10000012  b           . + 4 + (0x12 << 2)
label_314924:
    if (ctx->pc == 0x314924u) {
        ctx->pc = 0x314924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314920u;
        // 0x314924: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314928u;
        goto label_314928;
    }
    ctx->pc = 0x314920u;
    {
        const bool branch_taken_0x314920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314920u;
        // 0x314924: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314920) {
            ctx->pc = 0x31496Cu;
            goto label_31496c;
        }
    }
    ctx->pc = 0x314928u;
label_314928:
    // 0x314928: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x314928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_31492c:
    // 0x31492c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_314930:
    if (ctx->pc == 0x314930u) {
        ctx->pc = 0x314930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31492Cu;
        // 0x314930: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314934u;
        goto label_314934;
    }
    ctx->pc = 0x31492Cu;
    {
        const bool branch_taken_0x31492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31492Cu;
        // 0x314930: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31492c) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x314934u;
label_314934:
    // 0x314934: 0x1000000d  b           . + 4 + (0xD << 2)
label_314938:
    if (ctx->pc == 0x314938u) {
        ctx->pc = 0x314938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314934u;
        // 0x314938: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31493Cu;
        goto label_31493c;
    }
    ctx->pc = 0x314934u;
    {
        const bool branch_taken_0x314934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314934u;
        // 0x314938: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314934) {
            ctx->pc = 0x31496Cu;
            goto label_31496c;
        }
    }
    ctx->pc = 0x31493Cu;
label_31493c:
    // 0x31493c: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x31493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_314940:
    // 0x314940: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_314944:
    if (ctx->pc == 0x314944u) {
        ctx->pc = 0x314944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314940u;
        // 0x314944: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314948u;
        goto label_314948;
    }
    ctx->pc = 0x314940u;
    {
        const bool branch_taken_0x314940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314940u;
        // 0x314944: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314940) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x314948u;
label_314948:
    // 0x314948: 0x10000008  b           . + 4 + (0x8 << 2)
label_31494c:
    if (ctx->pc == 0x31494Cu) {
        ctx->pc = 0x31494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314948u;
        // 0x31494c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314950u;
        goto label_314950;
    }
    ctx->pc = 0x314948u;
    {
        const bool branch_taken_0x314948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314948u;
        // 0x31494c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314948) {
            ctx->pc = 0x31496Cu;
            goto label_31496c;
        }
    }
    ctx->pc = 0x314950u;
label_314950:
    // 0x314950: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x314950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_314954:
    // 0x314954: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_314958:
    if (ctx->pc == 0x314958u) {
        ctx->pc = 0x314958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314954u;
        // 0x314958: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31495Cu;
        goto label_31495c;
    }
    ctx->pc = 0x314954u;
    {
        const bool branch_taken_0x314954 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314954u;
        // 0x314958: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314954) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x31495Cu;
label_31495c:
    // 0x31495c: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
label_314960:
    if (ctx->pc == 0x314960u) {
        ctx->pc = 0x314960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31495Cu;
        // 0x314960: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314964u;
        goto label_314964;
    }
    ctx->pc = 0x31495Cu;
    {
        const bool branch_taken_0x31495c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x314960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31495Cu;
        // 0x314960: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31495c) {
            ctx->pc = 0x3149B0u;
            goto label_3149b0;
        }
    }
    ctx->pc = 0x314964u;
label_314964:
    // 0x314964: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x314964u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_314968:
    // 0x314968: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x314968u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_31496c:
    // 0x31496c: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x31496cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_314970:
    // 0x314970: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x314970u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_314974:
    // 0x314974: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314978:
    // 0x314978: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31497c:
    // 0x31497c: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_314980:
    if (ctx->pc == 0x314980u) {
        ctx->pc = 0x314980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31497Cu;
        // 0x314980: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314984u;
        goto label_314984;
    }
    ctx->pc = 0x31497Cu;
    {
        const bool branch_taken_0x31497c = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x314980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31497Cu;
        // 0x314980: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31497c) {
            ctx->pc = 0x314994u;
            goto label_314994;
        }
    }
    ctx->pc = 0x314984u;
label_314984:
    // 0x314984: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314988:
    // 0x314988: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x314988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31498c:
    // 0x31498c: 0x10000005  b           . + 4 + (0x5 << 2)
label_314990:
    if (ctx->pc == 0x314990u) {
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314994u;
        goto label_314994;
    }
    ctx->pc = 0x31498Cu;
    {
        const bool branch_taken_0x31498c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31498Cu;
        // 0x314990: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31498c) {
            ctx->pc = 0x3149A4u;
            goto label_3149a4;
        }
    }
    ctx->pc = 0x314994u;
label_314994:
    // 0x314994: 0xc0c4f2e  jal         func_313CB8
label_314998:
    if (ctx->pc == 0x314998u) {
        ctx->pc = 0x314998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314994u;
        // 0x314998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31499Cu;
        goto label_31499c;
    }
    ctx->pc = 0x314994u;
    SET_GPR_U32(ctx, 31, 0x31499Cu);
    ctx->pc = 0x314998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314994u;
    // 0x314998: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314994u, 0x31499Cu)) {
        return;
    }
    ctx->pc = 0x31499Cu;
label_31499c:
    // 0x31499c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3149a0:
    if (ctx->pc == 0x3149A0u) {
        ctx->pc = 0x3149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31499Cu;
        // 0x3149a0: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149A4u;
        goto label_3149a4;
    }
    ctx->pc = 0x31499Cu;
    {
        const bool branch_taken_0x31499c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3149A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31499Cu;
        // 0x3149a0: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x31499c) {
            ctx->pc = 0x3149B4u;
            goto label_3149b4;
        }
    }
    ctx->pc = 0x3149A4u;
label_3149a4:
    // 0x3149a4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3149a4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3149a8:
    // 0x3149a8: 0x5680ffb9  bnel        $s4, $zero, . + 4 + (-0x47 << 2)
label_3149ac:
    if (ctx->pc == 0x3149ACu) {
        ctx->pc = 0x3149ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149A8u;
        // 0x3149ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149B0u;
        goto label_3149b0;
    }
    ctx->pc = 0x3149A8u;
    {
        const bool branch_taken_0x3149a8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3149a8) {
            ctx->pc = 0x3149ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3149A8u;
            // 0x3149ac: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314890u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314890;
        }
    }
    ctx->pc = 0x3149B0u;
label_3149b0:
    // 0x3149b0: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x3149b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_3149b4:
    // 0x3149b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3149b8:
    if (ctx->pc == 0x3149B8u) {
        ctx->pc = 0x3149B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B4u;
        // 0x3149b8: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149BCu;
        goto label_3149bc;
    }
    ctx->pc = 0x3149B4u;
    {
        const bool branch_taken_0x3149b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149B4u;
        // 0x3149b8: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149b4) {
            ctx->pc = 0x3149D8u;
            goto label_3149d8;
        }
    }
    ctx->pc = 0x3149BCu;
label_3149bc:
    // 0x3149bc: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3149c0:
    if (ctx->pc == 0x3149C0u) {
        ctx->pc = 0x3149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149BCu;
        // 0x3149c0: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149C4u;
        goto label_3149c4;
    }
    ctx->pc = 0x3149BCu;
    {
        const bool branch_taken_0x3149bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149BCu;
        // 0x3149c0: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149bc) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x3149C4u;
label_3149c4:
    // 0x3149c4: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x3149c4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3149c8:
    // 0x3149c8: 0xc0c7ed8  jal         func_31FB60
label_3149cc:
    if (ctx->pc == 0x3149CCu) {
        ctx->pc = 0x3149CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149C8u;
        // 0x3149cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149D0u;
        goto label_3149d0;
    }
    ctx->pc = 0x3149C8u;
    SET_GPR_U32(ctx, 31, 0x3149D0u);
    ctx->pc = 0x3149CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149C8u;
    // 0x3149cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FB60u, 0x3149C8u, 0x3149D0u)) {
        return;
    }
    ctx->pc = 0x3149D0u;
label_3149d0:
    // 0x3149d0: 0x100000ab  b           . + 4 + (0xAB << 2)
label_3149d4:
    if (ctx->pc == 0x3149D4u) {
        ctx->pc = 0x3149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149D0u;
        // 0x3149d4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149D8u;
        goto label_3149d8;
    }
    ctx->pc = 0x3149D0u;
    {
        const bool branch_taken_0x3149d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3149D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149D0u;
        // 0x3149d4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149d0) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x3149D8u;
label_3149d8:
    // 0x3149d8: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x3149d8u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3149dc:
    // 0x3149dc: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3149dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3149e0:
    // 0x3149e0: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_3149e4:
    if (ctx->pc == 0x3149E4u) {
        ctx->pc = 0x3149E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E0u;
        // 0x3149e4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149E8u;
        goto label_3149e8;
    }
    ctx->pc = 0x3149E0u;
    {
        const bool branch_taken_0x3149e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3149E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E0u;
        // 0x3149e4: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149e0) {
            ctx->pc = 0x3149F0u;
            goto label_3149f0;
        }
    }
    ctx->pc = 0x3149E8u;
label_3149e8:
    // 0x3149e8: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3149ec:
    if (ctx->pc == 0x3149ECu) {
        ctx->pc = 0x3149ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E8u;
        // 0x3149ec: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3149F0u;
        goto label_3149f0;
    }
    ctx->pc = 0x3149E8u;
    {
        const bool branch_taken_0x3149e8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3149ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149E8u;
        // 0x3149ec: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3149e8) {
            ctx->pc = 0x314A04u;
            goto label_314a04;
        }
    }
    ctx->pc = 0x3149F0u;
label_3149f0:
    // 0x3149f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3149f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3149f4:
    // 0x3149f4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3149f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3149f8:
    // 0x3149f8: 0xc0c7ed8  jal         func_31FB60
label_3149fc:
    if (ctx->pc == 0x3149FCu) {
        ctx->pc = 0x3149FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3149F8u;
        // 0x3149fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A00u;
        goto label_314a00;
    }
    ctx->pc = 0x3149F8u;
    SET_GPR_U32(ctx, 31, 0x314A00u);
    ctx->pc = 0x3149FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3149F8u;
    // 0x3149fc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FB60u, 0x3149F8u, 0x314A00u)) {
        return;
    }
    ctx->pc = 0x314A00u;
label_314a00:
    // 0x314a00: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x314a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_314a04:
    // 0x314a04: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_314a08:
    if (ctx->pc == 0x314A08u) {
        ctx->pc = 0x314A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A04u;
        // 0x314a08: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A0Cu;
        goto label_314a0c;
    }
    ctx->pc = 0x314A04u;
    {
        const bool branch_taken_0x314a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A04u;
        // 0x314a08: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a04) {
            ctx->pc = 0x314C64u;
            goto label_314c64;
        }
    }
    ctx->pc = 0x314A0Cu;
label_314a0c:
    // 0x314a0c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x314a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_314a10:
    // 0x314a10: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x314a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_314a14:
    // 0x314a14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x314a14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_314a18:
    // 0x314a18: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x314a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_314a1c:
    // 0x314a1c: 0x60f809  jalr        $v1
label_314a20:
    if (ctx->pc == 0x314A20u) {
        ctx->pc = 0x314A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A1Cu;
        // 0x314a20: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A24u;
        goto label_314a24;
    }
    ctx->pc = 0x314A1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x314A24u);
        ctx->pc = 0x314A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A1Cu;
        // 0x314a20: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314A1Cu, 0x314A24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x314A24u;
label_314a24:
    // 0x314a24: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x314a24u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314a28:
    // 0x314a28: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x314a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_314a2c:
    // 0x314a2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_314a30:
    if (ctx->pc == 0x314A30u) {
        ctx->pc = 0x314A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A2Cu;
        // 0x314a30: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A34u;
        goto label_314a34;
    }
    ctx->pc = 0x314A2Cu;
    {
        const bool branch_taken_0x314a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A2Cu;
        // 0x314a30: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a2c) {
            ctx->pc = 0x314A4Cu;
            goto label_314a4c;
        }
    }
    ctx->pc = 0x314A34u;
label_314a34:
    // 0x314a34: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x314a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_314a38:
    // 0x314a38: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x314a38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_314a3c:
    // 0x314a3c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x314a3cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_314a40:
    // 0x314a40: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x314a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314a44:
    // 0x314a44: 0x10000011  b           . + 4 + (0x11 << 2)
label_314a48:
    if (ctx->pc == 0x314A48u) {
        ctx->pc = 0x314A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A44u;
        // 0x314a48: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A4Cu;
        goto label_314a4c;
    }
    ctx->pc = 0x314A44u;
    {
        const bool branch_taken_0x314a44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A44u;
        // 0x314a48: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a44) {
            ctx->pc = 0x314A8Cu;
            goto label_314a8c;
        }
    }
    ctx->pc = 0x314A4Cu;
label_314a4c:
    // 0x314a4c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_314a50:
    if (ctx->pc == 0x314A50u) {
        ctx->pc = 0x314A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A4Cu;
        // 0x314a50: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A54u;
        goto label_314a54;
    }
    ctx->pc = 0x314A4Cu;
    {
        const bool branch_taken_0x314a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A4Cu;
        // 0x314a50: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a4c) {
            ctx->pc = 0x314A64u;
            goto label_314a64;
        }
    }
    ctx->pc = 0x314A54u;
label_314a54:
    // 0x314a54: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x314a54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_314a58:
    // 0x314a58: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x314a58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314a5c:
    // 0x314a5c: 0x1000000b  b           . + 4 + (0xB << 2)
label_314a60:
    if (ctx->pc == 0x314A60u) {
        ctx->pc = 0x314A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A5Cu;
        // 0x314a60: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A64u;
        goto label_314a64;
    }
    ctx->pc = 0x314A5Cu;
    {
        const bool branch_taken_0x314a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A5Cu;
        // 0x314a60: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a5c) {
            ctx->pc = 0x314A8Cu;
            goto label_314a8c;
        }
    }
    ctx->pc = 0x314A64u;
label_314a64:
    // 0x314a64: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x314a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_314a68:
    // 0x314a68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_314a6c:
    if (ctx->pc == 0x314A6Cu) {
        ctx->pc = 0x314A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A68u;
        // 0x314a6c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A70u;
        goto label_314a70;
    }
    ctx->pc = 0x314A68u;
    {
        const bool branch_taken_0x314a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A68u;
        // 0x314a6c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a68) {
            ctx->pc = 0x314A7Cu;
            goto label_314a7c;
        }
    }
    ctx->pc = 0x314A70u;
label_314a70:
    // 0x314a70: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x314a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314a74:
    // 0x314a74: 0x10000005  b           . + 4 + (0x5 << 2)
label_314a78:
    if (ctx->pc == 0x314A78u) {
        ctx->pc = 0x314A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A74u;
        // 0x314a78: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A7Cu;
        goto label_314a7c;
    }
    ctx->pc = 0x314A74u;
    {
        const bool branch_taken_0x314a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A74u;
        // 0x314a78: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a74) {
            ctx->pc = 0x314A8Cu;
            goto label_314a8c;
        }
    }
    ctx->pc = 0x314A7Cu;
label_314a7c:
    // 0x314a7c: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x314a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_314a80:
    // 0x314a80: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x314a80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_314a84:
    // 0x314a84: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x314a84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314a88:
    // 0x314a88: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x314a88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_314a8c:
    // 0x314a8c: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x314a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_314a90:
    // 0x314a90: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x314a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_314a94:
    // 0x314a94: 0x10000072  b           . + 4 + (0x72 << 2)
label_314a98:
    if (ctx->pc == 0x314A98u) {
        ctx->pc = 0x314A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A94u;
        // 0x314a98: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314A9Cu;
        goto label_314a9c;
    }
    ctx->pc = 0x314A94u;
    {
        const bool branch_taken_0x314a94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314A94u;
        // 0x314a98: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314a94) {
            ctx->pc = 0x314C60u;
            goto label_314c60;
        }
    }
    ctx->pc = 0x314A9Cu;
label_314a9c:
    // 0x314a9c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x314a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_314aa0:
    // 0x314aa0: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x314aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_314aa4:
    // 0x314aa4: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x314aa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_314aa8:
    // 0x314aa8: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x314aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_314aac:
    // 0x314aac: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x314aacu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
label_314ab0:
    // 0x314ab0: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x314ab0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_314ab4:
    // 0x314ab4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x314ab4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_314ab8:
    // 0x314ab8: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_314abc:
    if (ctx->pc == 0x314ABCu) {
        ctx->pc = 0x314ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AB8u;
        // 0x314abc: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314AC0u;
        goto label_314ac0;
    }
    ctx->pc = 0x314AB8u;
    {
        const bool branch_taken_0x314ab8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x314ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AB8u;
        // 0x314abc: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ab8) {
            ctx->pc = 0x314B84u;
            goto label_314b84;
        }
    }
    ctx->pc = 0x314AC0u;
label_314ac0:
    // 0x314ac0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314ac4:
    // 0x314ac4: 0x0  nop
    ctx->pc = 0x314ac4u;
    // NOP
label_314ac8:
    // 0x314ac8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x314ac8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_314acc:
    // 0x314acc: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x314accu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_314ad0:
    // 0x314ad0: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x314ad0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_314ad4:
    // 0x314ad4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_314ad8:
    if (ctx->pc == 0x314AD8u) {
        ctx->pc = 0x314AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AD4u;
        // 0x314ad8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314ADCu;
        goto label_314adc;
    }
    ctx->pc = 0x314AD4u;
    {
        const bool branch_taken_0x314ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AD4u;
        // 0x314ad8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314ad4) {
            ctx->pc = 0x314B84u;
            goto label_314b84;
        }
    }
    ctx->pc = 0x314ADCu;
label_314adc:
    // 0x314adc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x314adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_314ae0:
    // 0x314ae0: 0x24421670  addiu       $v0, $v0, 0x1670
    ctx->pc = 0x314ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5744));
label_314ae4:
    // 0x314ae4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x314ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_314ae8:
    // 0x314ae8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x314ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_314aec:
    // 0x314aec: 0x800008  jr          $a0
label_314af0:
    if (ctx->pc == 0x314AF0u) {
        ctx->pc = 0x314AF4u;
        goto label_314af4;
    }
    ctx->pc = 0x314AECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x314AF4u: goto label_314af4;
            case 0x314B00u: goto label_314b00;
            case 0x314B14u: goto label_314b14;
            case 0x314B28u: goto label_314b28;
            case 0x314B84u: goto label_314b84;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314AECu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x314AF4u;
label_314af4:
    // 0x314af4: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x314af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_314af8:
    // 0x314af8: 0x10000011  b           . + 4 + (0x11 << 2)
label_314afc:
    if (ctx->pc == 0x314AFCu) {
        ctx->pc = 0x314AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AF8u;
        // 0x314afc: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B00u;
        goto label_314b00;
    }
    ctx->pc = 0x314AF8u;
    {
        const bool branch_taken_0x314af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314AF8u;
        // 0x314afc: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314af8) {
            ctx->pc = 0x314B40u;
            goto label_314b40;
        }
    }
    ctx->pc = 0x314B00u;
label_314b00:
    // 0x314b00: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x314b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_314b04:
    // 0x314b04: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_314b08:
    if (ctx->pc == 0x314B08u) {
        ctx->pc = 0x314B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B04u;
        // 0x314b08: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B0Cu;
        goto label_314b0c;
    }
    ctx->pc = 0x314B04u;
    {
        const bool branch_taken_0x314b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B04u;
        // 0x314b08: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b04) {
            ctx->pc = 0x314B84u;
            goto label_314b84;
        }
    }
    ctx->pc = 0x314B0Cu;
label_314b0c:
    // 0x314b0c: 0x1000000c  b           . + 4 + (0xC << 2)
label_314b10:
    if (ctx->pc == 0x314B10u) {
        ctx->pc = 0x314B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B0Cu;
        // 0x314b10: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B14u;
        goto label_314b14;
    }
    ctx->pc = 0x314B0Cu;
    {
        const bool branch_taken_0x314b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B0Cu;
        // 0x314b10: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b0c) {
            ctx->pc = 0x314B40u;
            goto label_314b40;
        }
    }
    ctx->pc = 0x314B14u;
label_314b14:
    // 0x314b14: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x314b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_314b18:
    // 0x314b18: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_314b1c:
    if (ctx->pc == 0x314B1Cu) {
        ctx->pc = 0x314B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B18u;
        // 0x314b1c: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B20u;
        goto label_314b20;
    }
    ctx->pc = 0x314B18u;
    {
        const bool branch_taken_0x314b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B18u;
        // 0x314b1c: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b18) {
            ctx->pc = 0x314B84u;
            goto label_314b84;
        }
    }
    ctx->pc = 0x314B20u;
label_314b20:
    // 0x314b20: 0x10000007  b           . + 4 + (0x7 << 2)
label_314b24:
    if (ctx->pc == 0x314B24u) {
        ctx->pc = 0x314B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B20u;
        // 0x314b24: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B28u;
        goto label_314b28;
    }
    ctx->pc = 0x314B20u;
    {
        const bool branch_taken_0x314b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B20u;
        // 0x314b24: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b20) {
            ctx->pc = 0x314B40u;
            goto label_314b40;
        }
    }
    ctx->pc = 0x314B28u;
label_314b28:
    // 0x314b28: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x314b28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_314b2c:
    // 0x314b2c: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x314b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_314b30:
    // 0x314b30: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_314b34:
    if (ctx->pc == 0x314B34u) {
        ctx->pc = 0x314B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B30u;
        // 0x314b34: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B38u;
        goto label_314b38;
    }
    ctx->pc = 0x314B30u;
    {
        const bool branch_taken_0x314b30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x314B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B30u;
        // 0x314b34: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b30) {
            ctx->pc = 0x314B84u;
            goto label_314b84;
        }
    }
    ctx->pc = 0x314B38u;
label_314b38:
    // 0x314b38: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x314b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_314b3c:
    // 0x314b3c: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x314b3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_314b40:
    // 0x314b40: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x314b40u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_314b44:
    // 0x314b44: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x314b44u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_314b48:
    // 0x314b48: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x314b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_314b4c:
    // 0x314b4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x314b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_314b50:
    // 0x314b50: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_314b54:
    if (ctx->pc == 0x314B54u) {
        ctx->pc = 0x314B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B50u;
        // 0x314b54: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B58u;
        goto label_314b58;
    }
    ctx->pc = 0x314B50u;
    {
        const bool branch_taken_0x314b50 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x314B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B50u;
        // 0x314b54: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b50) {
            ctx->pc = 0x314B68u;
            goto label_314b68;
        }
    }
    ctx->pc = 0x314B58u;
label_314b58:
    // 0x314b58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x314b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_314b5c:
    // 0x314b5c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x314b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_314b60:
    // 0x314b60: 0x10000005  b           . + 4 + (0x5 << 2)
label_314b64:
    if (ctx->pc == 0x314B64u) {
        ctx->pc = 0x314B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B60u;
        // 0x314b64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B68u;
        goto label_314b68;
    }
    ctx->pc = 0x314B60u;
    {
        const bool branch_taken_0x314b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B60u;
        // 0x314b64: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b60) {
            ctx->pc = 0x314B78u;
            goto label_314b78;
        }
    }
    ctx->pc = 0x314B68u;
label_314b68:
    // 0x314b68: 0xc0c4f2e  jal         func_313CB8
label_314b6c:
    if (ctx->pc == 0x314B6Cu) {
        ctx->pc = 0x314B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B68u;
        // 0x314b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B70u;
        goto label_314b70;
    }
    ctx->pc = 0x314B68u;
    SET_GPR_U32(ctx, 31, 0x314B70u);
    ctx->pc = 0x314B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314B68u;
    // 0x314b6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x313CB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x313CB8u, 0x314B68u, 0x314B70u)) {
        return;
    }
    ctx->pc = 0x314B70u;
label_314b70:
    // 0x314b70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_314b74:
    if (ctx->pc == 0x314B74u) {
        ctx->pc = 0x314B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B70u;
        // 0x314b74: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B78u;
        goto label_314b78;
    }
    ctx->pc = 0x314B70u;
    {
        const bool branch_taken_0x314b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B70u;
        // 0x314b74: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b70) {
            ctx->pc = 0x314B88u;
            goto label_314b88;
        }
    }
    ctx->pc = 0x314B78u;
label_314b78:
    // 0x314b78: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x314b78u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_314b7c:
    // 0x314b7c: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_314b80:
    if (ctx->pc == 0x314B80u) {
        ctx->pc = 0x314B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B7Cu;
        // 0x314b80: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B84u;
        goto label_314b84;
    }
    ctx->pc = 0x314B7Cu;
    {
        const bool branch_taken_0x314b7c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x314b7c) {
            ctx->pc = 0x314B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314B7Cu;
            // 0x314b80: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314AC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ac8;
        }
    }
    ctx->pc = 0x314B84u;
label_314b84:
    // 0x314b84: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x314b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_314b88:
    // 0x314b88: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_314b8c:
    if (ctx->pc == 0x314B8Cu) {
        ctx->pc = 0x314B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B88u;
        // 0x314b8c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B90u;
        goto label_314b90;
    }
    ctx->pc = 0x314B88u;
    {
        const bool branch_taken_0x314b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B88u;
        // 0x314b8c: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b88) {
            ctx->pc = 0x314C00u;
            goto label_314c00;
        }
    }
    ctx->pc = 0x314B90u;
label_314b90:
    // 0x314b90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_314b94:
    if (ctx->pc == 0x314B94u) {
        ctx->pc = 0x314B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B90u;
        // 0x314b94: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x314B98u;
        goto label_314b98;
    }
    ctx->pc = 0x314B90u;
    {
        const bool branch_taken_0x314b90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B90u;
        // 0x314b94: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b90) {
            ctx->pc = 0x314BC8u;
            goto label_314bc8;
        }
    }
    ctx->pc = 0x314B98u;
label_314b98:
    // 0x314b98: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_314b9c:
    if (ctx->pc == 0x314B9Cu) {
        ctx->pc = 0x314B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B98u;
        // 0x314b9c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BA0u;
        goto label_314ba0;
    }
    ctx->pc = 0x314B98u;
    {
        const bool branch_taken_0x314b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x314B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314B98u;
        // 0x314b9c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314b98) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x314BA0u;
label_314ba0:
    // 0x314ba0: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x314ba0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_314ba4:
    // 0x314ba4: 0x0  nop
    ctx->pc = 0x314ba4u;
    // NOP
label_314ba8:
    // 0x314ba8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x314ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_314bac:
    // 0x314bac: 0xc0c7ed8  jal         func_31FB60
label_314bb0:
    if (ctx->pc == 0x314BB0u) {
        ctx->pc = 0x314BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BACu;
        // 0x314bb0: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BB4u;
        goto label_314bb4;
    }
    ctx->pc = 0x314BACu;
    SET_GPR_U32(ctx, 31, 0x314BB4u);
    ctx->pc = 0x314BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BACu;
    // 0x314bb0: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FB60u, 0x314BACu, 0x314BB4u)) {
        return;
    }
    ctx->pc = 0x314BB4u;
label_314bb4:
    // 0x314bb4: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x314bb4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_314bb8:
    // 0x314bb8: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_314bbc:
    if (ctx->pc == 0x314BBCu) {
        ctx->pc = 0x314BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BB8u;
        // 0x314bbc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BC0u;
        goto label_314bc0;
    }
    ctx->pc = 0x314BB8u;
    {
        const bool branch_taken_0x314bb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x314BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BB8u;
        // 0x314bbc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bb8) {
            ctx->pc = 0x314BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314ba8;
        }
    }
    ctx->pc = 0x314BC0u;
label_314bc0:
    // 0x314bc0: 0x1000002f  b           . + 4 + (0x2F << 2)
label_314bc4:
    if (ctx->pc == 0x314BC4u) {
        ctx->pc = 0x314BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BC0u;
        // 0x314bc4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BC8u;
        goto label_314bc8;
    }
    ctx->pc = 0x314BC0u;
    {
        const bool branch_taken_0x314bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BC0u;
        // 0x314bc4: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bc0) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x314BC8u;
label_314bc8:
    // 0x314bc8: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x314bc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_314bcc:
    // 0x314bcc: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x314bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_314bd0:
    // 0x314bd0: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x314bd0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_314bd4:
    // 0x314bd4: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_314bd8:
    if (ctx->pc == 0x314BD8u) {
        ctx->pc = 0x314BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BD4u;
        // 0x314bd8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BDCu;
        goto label_314bdc;
    }
    ctx->pc = 0x314BD4u;
    {
        const bool branch_taken_0x314bd4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x314BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BD4u;
        // 0x314bd8: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bd4) {
            ctx->pc = 0x314BF4u;
            goto label_314bf4;
        }
    }
    ctx->pc = 0x314BDCu;
label_314bdc:
    // 0x314bdc: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_314be0:
    if (ctx->pc == 0x314BE0u) {
        ctx->pc = 0x314BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BDCu;
        // 0x314be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BE4u;
        goto label_314be4;
    }
    ctx->pc = 0x314BDCu;
    {
        const bool branch_taken_0x314bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x314BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BDCu;
        // 0x314be0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314bdc) {
            ctx->pc = 0x314BF4u;
            goto label_314bf4;
        }
    }
    ctx->pc = 0x314BE4u;
label_314be4:
    // 0x314be4: 0xc0c7ed8  jal         func_31FB60
label_314be8:
    if (ctx->pc == 0x314BE8u) {
        ctx->pc = 0x314BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BE4u;
        // 0x314be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314BECu;
        goto label_314bec;
    }
    ctx->pc = 0x314BE4u;
    SET_GPR_U32(ctx, 31, 0x314BECu);
    ctx->pc = 0x314BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BE4u;
    // 0x314be8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FB60u, 0x314BE4u, 0x314BECu)) {
        return;
    }
    ctx->pc = 0x314BECu;
label_314bec:
    // 0x314bec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x314becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_314bf0:
    // 0x314bf0: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x314bf0u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_314bf4:
    // 0x314bf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x314bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_314bf8:
    // 0x314bf8: 0xc0c7ed8  jal         func_31FB60
label_314bfc:
    if (ctx->pc == 0x314BFCu) {
        ctx->pc = 0x314BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314BF8u;
        // 0x314bfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C00u;
        goto label_314c00;
    }
    ctx->pc = 0x314BF8u;
    SET_GPR_U32(ctx, 31, 0x314C00u);
    ctx->pc = 0x314BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314BF8u;
    // 0x314bfc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31FB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31FB60u, 0x314BF8u, 0x314C00u)) {
        return;
    }
    ctx->pc = 0x314C00u;
label_314c00:
    // 0x314c00: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x314c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_314c04:
    // 0x314c04: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_314c08:
    if (ctx->pc == 0x314C08u) {
        ctx->pc = 0x314C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C04u;
        // 0x314c08: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C0Cu;
        goto label_314c0c;
    }
    ctx->pc = 0x314C04u;
    {
        const bool branch_taken_0x314c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x314C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C04u;
        // 0x314c08: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c04) {
            ctx->pc = 0x314C64u;
            goto label_314c64;
        }
    }
    ctx->pc = 0x314C0Cu;
label_314c0c:
    // 0x314c0c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x314c0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_314c10:
    // 0x314c10: 0xc0c53d6  jal         func_314F58
label_314c14:
    if (ctx->pc == 0x314C14u) {
        ctx->pc = 0x314C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C10u;
        // 0x314c14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C18u;
        goto label_314c18;
    }
    ctx->pc = 0x314C10u;
    SET_GPR_U32(ctx, 31, 0x314C18u);
    ctx->pc = 0x314C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C10u;
    // 0x314c14: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314F58u, 0x314C10u, 0x314C18u)) {
        return;
    }
    ctx->pc = 0x314C18u;
label_314c18:
    // 0x314c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x314c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_314c1c:
    // 0x314c1c: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x314c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_314c20:
    // 0x314c20: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_314c24:
    if (ctx->pc == 0x314C24u) {
        ctx->pc = 0x314C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C20u;
        // 0x314c24: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C28u;
        goto label_314c28;
    }
    ctx->pc = 0x314C20u;
    {
        const bool branch_taken_0x314c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x314c20) {
            ctx->pc = 0x314C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x314C20u;
            // 0x314c24: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x314C38u;
            goto label_314c38;
        }
    }
    ctx->pc = 0x314C28u;
label_314c28:
    // 0x314c28: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x314c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_314c2c:
    // 0x314c2c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_314c30:
    if (ctx->pc == 0x314C30u) {
        ctx->pc = 0x314C34u;
        goto label_314c34;
    }
    ctx->pc = 0x314C2Cu;
    {
        const bool branch_taken_0x314c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x314c2c) {
            ctx->pc = 0x314C44u;
            goto label_314c44;
        }
    }
    ctx->pc = 0x314C34u;
label_314c34:
    // 0x314c34: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x314c34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_314c38:
    // 0x314c38: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x314c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314c3c:
    // 0x314c3c: 0x10000005  b           . + 4 + (0x5 << 2)
label_314c40:
    if (ctx->pc == 0x314C40u) {
        ctx->pc = 0x314C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C3Cu;
        // 0x314c40: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C44u;
        goto label_314c44;
    }
    ctx->pc = 0x314C3Cu;
    {
        const bool branch_taken_0x314c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C3Cu;
        // 0x314c40: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c3c) {
            ctx->pc = 0x314C54u;
            goto label_314c54;
        }
    }
    ctx->pc = 0x314C44u;
label_314c44:
    // 0x314c44: 0xc07df98  jal         func_1F7E60
label_314c48:
    if (ctx->pc == 0x314C48u) {
        ctx->pc = 0x314C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C44u;
        // 0x314c48: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C4Cu;
        goto label_314c4c;
    }
    ctx->pc = 0x314C44u;
    SET_GPR_U32(ctx, 31, 0x314C4Cu);
    ctx->pc = 0x314C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x314C44u;
    // 0x314c48: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7E60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7E60u, 0x314C44u, 0x314C4Cu)) {
        return;
    }
    ctx->pc = 0x314C4Cu;
label_314c4c:
    // 0x314c4c: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x314c4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_314c50:
    // 0x314c50: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x314c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_314c54:
    // 0x314c54: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x314c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_314c58:
    // 0x314c58: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x314c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_314c5c:
    // 0x314c5c: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x314c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_314c60:
    // 0x314c60: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x314c60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_314c64:
    // 0x314c64: 0x1000fd66  b           . + 4 + (-0x29A << 2)
label_314c68:
    if (ctx->pc == 0x314C68u) {
        ctx->pc = 0x314C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C64u;
        // 0x314c68: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C6Cu;
        goto label_314c6c;
    }
    ctx->pc = 0x314C64u;
    {
        const bool branch_taken_0x314c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C64u;
        // 0x314c68: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c64) {
            ctx->pc = 0x314200u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_314200;
        }
    }
    ctx->pc = 0x314C6Cu;
label_314c6c:
    // 0x314c6c: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x314c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_314c70:
    // 0x314c70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x314c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_314c74:
    // 0x314c74: 0x10000002  b           . + 4 + (0x2 << 2)
label_314c78:
    if (ctx->pc == 0x314C78u) {
        ctx->pc = 0x314C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C74u;
        // 0x314c78: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314C7Cu;
        goto label_314c7c;
    }
    ctx->pc = 0x314C74u;
    {
        const bool branch_taken_0x314c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x314C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314C74u;
        // 0x314c78: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x314c74) {
            ctx->pc = 0x314C80u;
            goto label_314c80;
        }
    }
    ctx->pc = 0x314C7Cu;
label_314c7c:
    // 0x314c7c: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x314c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_314c80:
    // 0x314c80: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x314c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_314c84:
    // 0x314c84: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x314c84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_314c88:
    // 0x314c88: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x314c88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_314c8c:
    // 0x314c8c: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x314c8cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_314c90:
    // 0x314c90: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x314c90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_314c94:
    // 0x314c94: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x314c94u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_314c98:
    // 0x314c98: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x314c98u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_314c9c:
    // 0x314c9c: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x314c9cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_314ca0:
    // 0x314ca0: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x314ca0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_314ca4:
    // 0x314ca4: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x314ca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_314ca8:
    // 0x314ca8: 0x3e00008  jr          $ra
label_314cac:
    if (ctx->pc == 0x314CACu) {
        ctx->pc = 0x314CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CA8u;
        // 0x314cac: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x314CB0u;
        goto label_fallthrough_0x314ca8;
    }
    ctx->pc = 0x314CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x314CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x314CA8u;
        // 0x314cac: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x314CA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x314ca8:
    ctx->pc = 0x314CB0u;
}
