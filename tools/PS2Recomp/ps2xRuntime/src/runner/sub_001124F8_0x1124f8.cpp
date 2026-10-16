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

// Function: sub_001124F8
// Address: 0x1124f8 - 0x112c70
void sub_001124F8_0x1124f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001124F8_0x1124f8");
#endif

    switch (ctx->pc) {
        case 0x1124f8u: goto label_1124f8;
        case 0x1124fcu: goto label_1124fc;
        case 0x112500u: goto label_112500;
        case 0x112504u: goto label_112504;
        case 0x112508u: goto label_112508;
        case 0x11250cu: goto label_11250c;
        case 0x112510u: goto label_112510;
        case 0x112514u: goto label_112514;
        case 0x112518u: goto label_112518;
        case 0x11251cu: goto label_11251c;
        case 0x112520u: goto label_112520;
        case 0x112524u: goto label_112524;
        case 0x112528u: goto label_112528;
        case 0x11252cu: goto label_11252c;
        case 0x112530u: goto label_112530;
        case 0x112534u: goto label_112534;
        case 0x112538u: goto label_112538;
        case 0x11253cu: goto label_11253c;
        case 0x112540u: goto label_112540;
        case 0x112544u: goto label_112544;
        case 0x112548u: goto label_112548;
        case 0x11254cu: goto label_11254c;
        case 0x112550u: goto label_112550;
        case 0x112554u: goto label_112554;
        case 0x112558u: goto label_112558;
        case 0x11255cu: goto label_11255c;
        case 0x112560u: goto label_112560;
        case 0x112564u: goto label_112564;
        case 0x112568u: goto label_112568;
        case 0x11256cu: goto label_11256c;
        case 0x112570u: goto label_112570;
        case 0x112574u: goto label_112574;
        case 0x112578u: goto label_112578;
        case 0x11257cu: goto label_11257c;
        case 0x112580u: goto label_112580;
        case 0x112584u: goto label_112584;
        case 0x112588u: goto label_112588;
        case 0x11258cu: goto label_11258c;
        case 0x112590u: goto label_112590;
        case 0x112594u: goto label_112594;
        case 0x112598u: goto label_112598;
        case 0x11259cu: goto label_11259c;
        case 0x1125a0u: goto label_1125a0;
        case 0x1125a4u: goto label_1125a4;
        case 0x1125a8u: goto label_1125a8;
        case 0x1125acu: goto label_1125ac;
        case 0x1125b0u: goto label_1125b0;
        case 0x1125b4u: goto label_1125b4;
        case 0x1125b8u: goto label_1125b8;
        case 0x1125bcu: goto label_1125bc;
        case 0x1125c0u: goto label_1125c0;
        case 0x1125c4u: goto label_1125c4;
        case 0x1125c8u: goto label_1125c8;
        case 0x1125ccu: goto label_1125cc;
        case 0x1125d0u: goto label_1125d0;
        case 0x1125d4u: goto label_1125d4;
        case 0x1125d8u: goto label_1125d8;
        case 0x1125dcu: goto label_1125dc;
        case 0x1125e0u: goto label_1125e0;
        case 0x1125e4u: goto label_1125e4;
        case 0x1125e8u: goto label_1125e8;
        case 0x1125ecu: goto label_1125ec;
        case 0x1125f0u: goto label_1125f0;
        case 0x1125f4u: goto label_1125f4;
        case 0x1125f8u: goto label_1125f8;
        case 0x1125fcu: goto label_1125fc;
        case 0x112600u: goto label_112600;
        case 0x112604u: goto label_112604;
        case 0x112608u: goto label_112608;
        case 0x11260cu: goto label_11260c;
        case 0x112610u: goto label_112610;
        case 0x112614u: goto label_112614;
        case 0x112618u: goto label_112618;
        case 0x11261cu: goto label_11261c;
        case 0x112620u: goto label_112620;
        case 0x112624u: goto label_112624;
        case 0x112628u: goto label_112628;
        case 0x11262cu: goto label_11262c;
        case 0x112630u: goto label_112630;
        case 0x112634u: goto label_112634;
        case 0x112638u: goto label_112638;
        case 0x11263cu: goto label_11263c;
        case 0x112640u: goto label_112640;
        case 0x112644u: goto label_112644;
        case 0x112648u: goto label_112648;
        case 0x11264cu: goto label_11264c;
        case 0x112650u: goto label_112650;
        case 0x112654u: goto label_112654;
        case 0x112658u: goto label_112658;
        case 0x11265cu: goto label_11265c;
        case 0x112660u: goto label_112660;
        case 0x112664u: goto label_112664;
        case 0x112668u: goto label_112668;
        case 0x11266cu: goto label_11266c;
        case 0x112670u: goto label_112670;
        case 0x112674u: goto label_112674;
        case 0x112678u: goto label_112678;
        case 0x11267cu: goto label_11267c;
        case 0x112680u: goto label_112680;
        case 0x112684u: goto label_112684;
        case 0x112688u: goto label_112688;
        case 0x11268cu: goto label_11268c;
        case 0x112690u: goto label_112690;
        case 0x112694u: goto label_112694;
        case 0x112698u: goto label_112698;
        case 0x11269cu: goto label_11269c;
        case 0x1126a0u: goto label_1126a0;
        case 0x1126a4u: goto label_1126a4;
        case 0x1126a8u: goto label_1126a8;
        case 0x1126acu: goto label_1126ac;
        case 0x1126b0u: goto label_1126b0;
        case 0x1126b4u: goto label_1126b4;
        case 0x1126b8u: goto label_1126b8;
        case 0x1126bcu: goto label_1126bc;
        case 0x1126c0u: goto label_1126c0;
        case 0x1126c4u: goto label_1126c4;
        case 0x1126c8u: goto label_1126c8;
        case 0x1126ccu: goto label_1126cc;
        case 0x1126d0u: goto label_1126d0;
        case 0x1126d4u: goto label_1126d4;
        case 0x1126d8u: goto label_1126d8;
        case 0x1126dcu: goto label_1126dc;
        case 0x1126e0u: goto label_1126e0;
        case 0x1126e4u: goto label_1126e4;
        case 0x1126e8u: goto label_1126e8;
        case 0x1126ecu: goto label_1126ec;
        case 0x1126f0u: goto label_1126f0;
        case 0x1126f4u: goto label_1126f4;
        case 0x1126f8u: goto label_1126f8;
        case 0x1126fcu: goto label_1126fc;
        case 0x112700u: goto label_112700;
        case 0x112704u: goto label_112704;
        case 0x112708u: goto label_112708;
        case 0x11270cu: goto label_11270c;
        case 0x112710u: goto label_112710;
        case 0x112714u: goto label_112714;
        case 0x112718u: goto label_112718;
        case 0x11271cu: goto label_11271c;
        case 0x112720u: goto label_112720;
        case 0x112724u: goto label_112724;
        case 0x112728u: goto label_112728;
        case 0x11272cu: goto label_11272c;
        case 0x112730u: goto label_112730;
        case 0x112734u: goto label_112734;
        case 0x112738u: goto label_112738;
        case 0x11273cu: goto label_11273c;
        case 0x112740u: goto label_112740;
        case 0x112744u: goto label_112744;
        case 0x112748u: goto label_112748;
        case 0x11274cu: goto label_11274c;
        case 0x112750u: goto label_112750;
        case 0x112754u: goto label_112754;
        case 0x112758u: goto label_112758;
        case 0x11275cu: goto label_11275c;
        case 0x112760u: goto label_112760;
        case 0x112764u: goto label_112764;
        case 0x112768u: goto label_112768;
        case 0x11276cu: goto label_11276c;
        case 0x112770u: goto label_112770;
        case 0x112774u: goto label_112774;
        case 0x112778u: goto label_112778;
        case 0x11277cu: goto label_11277c;
        case 0x112780u: goto label_112780;
        case 0x112784u: goto label_112784;
        case 0x112788u: goto label_112788;
        case 0x11278cu: goto label_11278c;
        case 0x112790u: goto label_112790;
        case 0x112794u: goto label_112794;
        case 0x112798u: goto label_112798;
        case 0x11279cu: goto label_11279c;
        case 0x1127a0u: goto label_1127a0;
        case 0x1127a4u: goto label_1127a4;
        case 0x1127a8u: goto label_1127a8;
        case 0x1127acu: goto label_1127ac;
        case 0x1127b0u: goto label_1127b0;
        case 0x1127b4u: goto label_1127b4;
        case 0x1127b8u: goto label_1127b8;
        case 0x1127bcu: goto label_1127bc;
        case 0x1127c0u: goto label_1127c0;
        case 0x1127c4u: goto label_1127c4;
        case 0x1127c8u: goto label_1127c8;
        case 0x1127ccu: goto label_1127cc;
        case 0x1127d0u: goto label_1127d0;
        case 0x1127d4u: goto label_1127d4;
        case 0x1127d8u: goto label_1127d8;
        case 0x1127dcu: goto label_1127dc;
        case 0x1127e0u: goto label_1127e0;
        case 0x1127e4u: goto label_1127e4;
        case 0x1127e8u: goto label_1127e8;
        case 0x1127ecu: goto label_1127ec;
        case 0x1127f0u: goto label_1127f0;
        case 0x1127f4u: goto label_1127f4;
        case 0x1127f8u: goto label_1127f8;
        case 0x1127fcu: goto label_1127fc;
        case 0x112800u: goto label_112800;
        case 0x112804u: goto label_112804;
        case 0x112808u: goto label_112808;
        case 0x11280cu: goto label_11280c;
        case 0x112810u: goto label_112810;
        case 0x112814u: goto label_112814;
        case 0x112818u: goto label_112818;
        case 0x11281cu: goto label_11281c;
        case 0x112820u: goto label_112820;
        case 0x112824u: goto label_112824;
        case 0x112828u: goto label_112828;
        case 0x11282cu: goto label_11282c;
        case 0x112830u: goto label_112830;
        case 0x112834u: goto label_112834;
        case 0x112838u: goto label_112838;
        case 0x11283cu: goto label_11283c;
        case 0x112840u: goto label_112840;
        case 0x112844u: goto label_112844;
        case 0x112848u: goto label_112848;
        case 0x11284cu: goto label_11284c;
        case 0x112850u: goto label_112850;
        case 0x112854u: goto label_112854;
        case 0x112858u: goto label_112858;
        case 0x11285cu: goto label_11285c;
        case 0x112860u: goto label_112860;
        case 0x112864u: goto label_112864;
        case 0x112868u: goto label_112868;
        case 0x11286cu: goto label_11286c;
        case 0x112870u: goto label_112870;
        case 0x112874u: goto label_112874;
        case 0x112878u: goto label_112878;
        case 0x11287cu: goto label_11287c;
        case 0x112880u: goto label_112880;
        case 0x112884u: goto label_112884;
        case 0x112888u: goto label_112888;
        case 0x11288cu: goto label_11288c;
        case 0x112890u: goto label_112890;
        case 0x112894u: goto label_112894;
        case 0x112898u: goto label_112898;
        case 0x11289cu: goto label_11289c;
        case 0x1128a0u: goto label_1128a0;
        case 0x1128a4u: goto label_1128a4;
        case 0x1128a8u: goto label_1128a8;
        case 0x1128acu: goto label_1128ac;
        case 0x1128b0u: goto label_1128b0;
        case 0x1128b4u: goto label_1128b4;
        case 0x1128b8u: goto label_1128b8;
        case 0x1128bcu: goto label_1128bc;
        case 0x1128c0u: goto label_1128c0;
        case 0x1128c4u: goto label_1128c4;
        case 0x1128c8u: goto label_1128c8;
        case 0x1128ccu: goto label_1128cc;
        case 0x1128d0u: goto label_1128d0;
        case 0x1128d4u: goto label_1128d4;
        case 0x1128d8u: goto label_1128d8;
        case 0x1128dcu: goto label_1128dc;
        case 0x1128e0u: goto label_1128e0;
        case 0x1128e4u: goto label_1128e4;
        case 0x1128e8u: goto label_1128e8;
        case 0x1128ecu: goto label_1128ec;
        case 0x1128f0u: goto label_1128f0;
        case 0x1128f4u: goto label_1128f4;
        case 0x1128f8u: goto label_1128f8;
        case 0x1128fcu: goto label_1128fc;
        case 0x112900u: goto label_112900;
        case 0x112904u: goto label_112904;
        case 0x112908u: goto label_112908;
        case 0x11290cu: goto label_11290c;
        case 0x112910u: goto label_112910;
        case 0x112914u: goto label_112914;
        case 0x112918u: goto label_112918;
        case 0x11291cu: goto label_11291c;
        case 0x112920u: goto label_112920;
        case 0x112924u: goto label_112924;
        case 0x112928u: goto label_112928;
        case 0x11292cu: goto label_11292c;
        case 0x112930u: goto label_112930;
        case 0x112934u: goto label_112934;
        case 0x112938u: goto label_112938;
        case 0x11293cu: goto label_11293c;
        case 0x112940u: goto label_112940;
        case 0x112944u: goto label_112944;
        case 0x112948u: goto label_112948;
        case 0x11294cu: goto label_11294c;
        case 0x112950u: goto label_112950;
        case 0x112954u: goto label_112954;
        case 0x112958u: goto label_112958;
        case 0x11295cu: goto label_11295c;
        case 0x112960u: goto label_112960;
        case 0x112964u: goto label_112964;
        case 0x112968u: goto label_112968;
        case 0x11296cu: goto label_11296c;
        case 0x112970u: goto label_112970;
        case 0x112974u: goto label_112974;
        case 0x112978u: goto label_112978;
        case 0x11297cu: goto label_11297c;
        case 0x112980u: goto label_112980;
        case 0x112984u: goto label_112984;
        case 0x112988u: goto label_112988;
        case 0x11298cu: goto label_11298c;
        case 0x112990u: goto label_112990;
        case 0x112994u: goto label_112994;
        case 0x112998u: goto label_112998;
        case 0x11299cu: goto label_11299c;
        case 0x1129a0u: goto label_1129a0;
        case 0x1129a4u: goto label_1129a4;
        case 0x1129a8u: goto label_1129a8;
        case 0x1129acu: goto label_1129ac;
        case 0x1129b0u: goto label_1129b0;
        case 0x1129b4u: goto label_1129b4;
        case 0x1129b8u: goto label_1129b8;
        case 0x1129bcu: goto label_1129bc;
        case 0x1129c0u: goto label_1129c0;
        case 0x1129c4u: goto label_1129c4;
        case 0x1129c8u: goto label_1129c8;
        case 0x1129ccu: goto label_1129cc;
        case 0x1129d0u: goto label_1129d0;
        case 0x1129d4u: goto label_1129d4;
        case 0x1129d8u: goto label_1129d8;
        case 0x1129dcu: goto label_1129dc;
        case 0x1129e0u: goto label_1129e0;
        case 0x1129e4u: goto label_1129e4;
        case 0x1129e8u: goto label_1129e8;
        case 0x1129ecu: goto label_1129ec;
        case 0x1129f0u: goto label_1129f0;
        case 0x1129f4u: goto label_1129f4;
        case 0x1129f8u: goto label_1129f8;
        case 0x1129fcu: goto label_1129fc;
        case 0x112a00u: goto label_112a00;
        case 0x112a04u: goto label_112a04;
        case 0x112a08u: goto label_112a08;
        case 0x112a0cu: goto label_112a0c;
        case 0x112a10u: goto label_112a10;
        case 0x112a14u: goto label_112a14;
        case 0x112a18u: goto label_112a18;
        case 0x112a1cu: goto label_112a1c;
        case 0x112a20u: goto label_112a20;
        case 0x112a24u: goto label_112a24;
        case 0x112a28u: goto label_112a28;
        case 0x112a2cu: goto label_112a2c;
        case 0x112a30u: goto label_112a30;
        case 0x112a34u: goto label_112a34;
        case 0x112a38u: goto label_112a38;
        case 0x112a3cu: goto label_112a3c;
        case 0x112a40u: goto label_112a40;
        case 0x112a44u: goto label_112a44;
        case 0x112a48u: goto label_112a48;
        case 0x112a4cu: goto label_112a4c;
        case 0x112a50u: goto label_112a50;
        case 0x112a54u: goto label_112a54;
        case 0x112a58u: goto label_112a58;
        case 0x112a5cu: goto label_112a5c;
        case 0x112a60u: goto label_112a60;
        case 0x112a64u: goto label_112a64;
        case 0x112a68u: goto label_112a68;
        case 0x112a6cu: goto label_112a6c;
        case 0x112a70u: goto label_112a70;
        case 0x112a74u: goto label_112a74;
        case 0x112a78u: goto label_112a78;
        case 0x112a7cu: goto label_112a7c;
        case 0x112a80u: goto label_112a80;
        case 0x112a84u: goto label_112a84;
        case 0x112a88u: goto label_112a88;
        case 0x112a8cu: goto label_112a8c;
        case 0x112a90u: goto label_112a90;
        case 0x112a94u: goto label_112a94;
        case 0x112a98u: goto label_112a98;
        case 0x112a9cu: goto label_112a9c;
        case 0x112aa0u: goto label_112aa0;
        case 0x112aa4u: goto label_112aa4;
        case 0x112aa8u: goto label_112aa8;
        case 0x112aacu: goto label_112aac;
        case 0x112ab0u: goto label_112ab0;
        case 0x112ab4u: goto label_112ab4;
        case 0x112ab8u: goto label_112ab8;
        case 0x112abcu: goto label_112abc;
        case 0x112ac0u: goto label_112ac0;
        case 0x112ac4u: goto label_112ac4;
        case 0x112ac8u: goto label_112ac8;
        case 0x112accu: goto label_112acc;
        case 0x112ad0u: goto label_112ad0;
        case 0x112ad4u: goto label_112ad4;
        case 0x112ad8u: goto label_112ad8;
        case 0x112adcu: goto label_112adc;
        case 0x112ae0u: goto label_112ae0;
        case 0x112ae4u: goto label_112ae4;
        case 0x112ae8u: goto label_112ae8;
        case 0x112aecu: goto label_112aec;
        case 0x112af0u: goto label_112af0;
        case 0x112af4u: goto label_112af4;
        case 0x112af8u: goto label_112af8;
        case 0x112afcu: goto label_112afc;
        case 0x112b00u: goto label_112b00;
        case 0x112b04u: goto label_112b04;
        case 0x112b08u: goto label_112b08;
        case 0x112b0cu: goto label_112b0c;
        case 0x112b10u: goto label_112b10;
        case 0x112b14u: goto label_112b14;
        case 0x112b18u: goto label_112b18;
        case 0x112b1cu: goto label_112b1c;
        case 0x112b20u: goto label_112b20;
        case 0x112b24u: goto label_112b24;
        case 0x112b28u: goto label_112b28;
        case 0x112b2cu: goto label_112b2c;
        case 0x112b30u: goto label_112b30;
        case 0x112b34u: goto label_112b34;
        case 0x112b38u: goto label_112b38;
        case 0x112b3cu: goto label_112b3c;
        case 0x112b40u: goto label_112b40;
        case 0x112b44u: goto label_112b44;
        case 0x112b48u: goto label_112b48;
        case 0x112b4cu: goto label_112b4c;
        case 0x112b50u: goto label_112b50;
        case 0x112b54u: goto label_112b54;
        case 0x112b58u: goto label_112b58;
        case 0x112b5cu: goto label_112b5c;
        case 0x112b60u: goto label_112b60;
        case 0x112b64u: goto label_112b64;
        case 0x112b68u: goto label_112b68;
        case 0x112b6cu: goto label_112b6c;
        case 0x112b70u: goto label_112b70;
        case 0x112b74u: goto label_112b74;
        case 0x112b78u: goto label_112b78;
        case 0x112b7cu: goto label_112b7c;
        case 0x112b80u: goto label_112b80;
        case 0x112b84u: goto label_112b84;
        case 0x112b88u: goto label_112b88;
        case 0x112b8cu: goto label_112b8c;
        case 0x112b90u: goto label_112b90;
        case 0x112b94u: goto label_112b94;
        case 0x112b98u: goto label_112b98;
        case 0x112b9cu: goto label_112b9c;
        case 0x112ba0u: goto label_112ba0;
        case 0x112ba4u: goto label_112ba4;
        case 0x112ba8u: goto label_112ba8;
        case 0x112bacu: goto label_112bac;
        case 0x112bb0u: goto label_112bb0;
        case 0x112bb4u: goto label_112bb4;
        case 0x112bb8u: goto label_112bb8;
        case 0x112bbcu: goto label_112bbc;
        case 0x112bc0u: goto label_112bc0;
        case 0x112bc4u: goto label_112bc4;
        case 0x112bc8u: goto label_112bc8;
        case 0x112bccu: goto label_112bcc;
        case 0x112bd0u: goto label_112bd0;
        case 0x112bd4u: goto label_112bd4;
        case 0x112bd8u: goto label_112bd8;
        case 0x112bdcu: goto label_112bdc;
        case 0x112be0u: goto label_112be0;
        case 0x112be4u: goto label_112be4;
        case 0x112be8u: goto label_112be8;
        case 0x112becu: goto label_112bec;
        case 0x112bf0u: goto label_112bf0;
        case 0x112bf4u: goto label_112bf4;
        case 0x112bf8u: goto label_112bf8;
        case 0x112bfcu: goto label_112bfc;
        case 0x112c00u: goto label_112c00;
        case 0x112c04u: goto label_112c04;
        case 0x112c08u: goto label_112c08;
        case 0x112c0cu: goto label_112c0c;
        case 0x112c10u: goto label_112c10;
        case 0x112c14u: goto label_112c14;
        case 0x112c18u: goto label_112c18;
        case 0x112c1cu: goto label_112c1c;
        case 0x112c20u: goto label_112c20;
        case 0x112c24u: goto label_112c24;
        case 0x112c28u: goto label_112c28;
        case 0x112c2cu: goto label_112c2c;
        case 0x112c30u: goto label_112c30;
        case 0x112c34u: goto label_112c34;
        case 0x112c38u: goto label_112c38;
        case 0x112c3cu: goto label_112c3c;
        case 0x112c40u: goto label_112c40;
        case 0x112c44u: goto label_112c44;
        case 0x112c48u: goto label_112c48;
        case 0x112c4cu: goto label_112c4c;
        case 0x112c50u: goto label_112c50;
        case 0x112c54u: goto label_112c54;
        case 0x112c58u: goto label_112c58;
        case 0x112c5cu: goto label_112c5c;
        case 0x112c60u: goto label_112c60;
        case 0x112c64u: goto label_112c64;
        case 0x112c68u: goto label_112c68;
        case 0x112c6cu: goto label_112c6c;
        default: break;
    }

    ctx->pc = 0x1124f8u;

label_1124f8:
    // 0x1124f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1124f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_1124fc:
    // 0x1124fc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1124fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_112500:
    // 0x112500: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x112500u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_112504:
    // 0x112504: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x112504u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_112508:
    // 0x112508: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x112508u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_11250c:
    // 0x11250c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x11250cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_112510:
    // 0x112510: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x112510u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_112514:
    // 0x112514: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x112514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_112518:
    // 0x112518: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x112518u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_11251c:
    // 0x11251c: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x11251cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_112520:
    // 0x112520: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x112520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_112524:
    // 0x112524: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_112528:
    if (ctx->pc == 0x112528u) {
        ctx->pc = 0x112528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112524u;
        // 0x112528: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11252Cu;
        goto label_11252c;
    }
    ctx->pc = 0x112524u;
    {
        const bool branch_taken_0x112524 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x112528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112524u;
        // 0x112528: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112524) {
            ctx->pc = 0x112538u;
            goto label_112538;
        }
    }
    ctx->pc = 0x11252Cu;
label_11252c:
    // 0x11252c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x11252cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112530:
    // 0x112530: 0x4a10040  bgez        $a1, . + 4 + (0x40 << 2)
label_112534:
    if (ctx->pc == 0x112534u) {
        ctx->pc = 0x112534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112530u;
        // 0x112534: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112538u;
        goto label_112538;
    }
    ctx->pc = 0x112530u;
    {
        const bool branch_taken_0x112530 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x112534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112530u;
        // 0x112534: 0x3c03006c  lui         $v1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112530) {
            ctx->pc = 0x112634u;
            goto label_112634;
        }
    }
    ctx->pc = 0x112538u;
label_112538:
    // 0x112538: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x112538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_11253c:
    // 0x11253c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x11253cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_112540:
    // 0x112540: 0x8c438978  lw          $v1, -0x7688($v0)
    ctx->pc = 0x112540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936952)));
label_112544:
    // 0x112544: 0x148301c0  bne         $a0, $v1, . + 4 + (0x1C0 << 2)
label_112548:
    if (ctx->pc == 0x112548u) {
        ctx->pc = 0x112548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112544u;
        // 0x112548: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11254Cu;
        goto label_11254c;
    }
    ctx->pc = 0x112544u;
    {
        const bool branch_taken_0x112544 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112544u;
        // 0x112548: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112544) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x11254Cu;
label_11254c:
    // 0x11254c: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x11254cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_112550:
    // 0x112550: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x112550u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_112554:
    // 0x112554: 0x8a230013  lwl         $v1, 0x13($s1)
    ctx->pc = 0x112554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_112558:
    // 0x112558: 0x9a230010  lwr         $v1, 0x10($s1)
    ctx->pc = 0x112558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_11255c:
    // 0x11255c: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x11255cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_112560:
    // 0x112560: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x112560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_112564:
    // 0x112564: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_112568:
    if (ctx->pc == 0x112568u) {
        ctx->pc = 0x112568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112564u;
        // 0x112568: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11256Cu;
        goto label_11256c;
    }
    ctx->pc = 0x112564u;
    {
        const bool branch_taken_0x112564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112564) {
            ctx->pc = 0x112568u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112564u;
            // 0x112568: 0xa3a00003  sb          $zero, 0x3($sp) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11257Cu;
            goto label_11257c;
        }
    }
    ctx->pc = 0x11256Cu;
label_11256c:
    // 0x11256c: 0xa3a00000  sb          $zero, 0x0($sp)
    ctx->pc = 0x11256cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 0));
label_112570:
    // 0x112570: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x112570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
label_112574:
    // 0x112574: 0xa3a00002  sb          $zero, 0x2($sp)
    ctx->pc = 0x112574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
label_112578:
    // 0x112578: 0xa3a00003  sb          $zero, 0x3($sp)
    ctx->pc = 0x112578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 3), (uint8_t)GPR_U32(ctx, 0));
label_11257c:
    // 0x11257c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x11257cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_112580:
    // 0x112580: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x112580u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_112584:
    // 0x112584: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x112584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_112588:
    // 0x112588: 0x8e2201a0  lw          $v0, 0x1A0($s1)
    ctx->pc = 0x112588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 416)));
label_11258c:
    // 0x11258c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x11258cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_112590:
    // 0x112590: 0xc08941c  jal         func_225070
label_112594:
    if (ctx->pc == 0x112594u) {
        ctx->pc = 0x112594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112590u;
        // 0x112594: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112598u;
        goto label_112598;
    }
    ctx->pc = 0x112590u;
    SET_GPR_U32(ctx, 31, 0x112598u);
    ctx->pc = 0x112594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112590u;
    // 0x112594: 0x62300a  movz        $a2, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225070u, 0x112590u, 0x112598u)) {
        return;
    }
    ctx->pc = 0x112598u;
label_112598:
    // 0x112598: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x112598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_11259c:
    // 0x11259c: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x11259cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1125a0:
    // 0x1125a0: 0xc089a04  jal         func_226810
label_1125a4:
    if (ctx->pc == 0x1125A4u) {
        ctx->pc = 0x1125A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125A0u;
        // 0x1125a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125A8u;
        goto label_1125a8;
    }
    ctx->pc = 0x1125A0u;
    SET_GPR_U32(ctx, 31, 0x1125A8u);
    ctx->pc = 0x1125A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125A0u;
    // 0x1125a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226810u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226810u, 0x1125A0u, 0x1125A8u)) {
        return;
    }
    ctx->pc = 0x1125A8u;
label_1125a8:
    // 0x1125a8: 0xc08992e  jal         func_2264B8
label_1125ac:
    if (ctx->pc == 0x1125ACu) {
        ctx->pc = 0x1125ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125A8u;
        // 0x1125ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125B0u;
        goto label_1125b0;
    }
    ctx->pc = 0x1125A8u;
    SET_GPR_U32(ctx, 31, 0x1125B0u);
    ctx->pc = 0x1125ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125A8u;
    // 0x1125ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x1125A8u, 0x1125B0u)) {
        return;
    }
    ctx->pc = 0x1125B0u;
label_1125b0:
    // 0x1125b0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1125b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_1125b4:
    // 0x1125b4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1125b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1125b8:
    // 0x1125b8: 0x8c458910  lw          $a1, -0x76F0($v0)
    ctx->pc = 0x1125b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936848)));
label_1125bc:
    // 0x1125bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1125bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1125c0:
    // 0x1125c0: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1125c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_1125c4:
    // 0x1125c4: 0x10a30007  beq         $a1, $v1, . + 4 + (0x7 << 2)
label_1125c8:
    if (ctx->pc == 0x1125C8u) {
        ctx->pc = 0x1125C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125C4u;
        // 0x1125c8: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125CCu;
        goto label_1125cc;
    }
    ctx->pc = 0x1125C4u;
    {
        const bool branch_taken_0x1125c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1125C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125C4u;
        // 0x1125c8: 0x8e460004  lw          $a2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125c4) {
            ctx->pc = 0x1125E4u;
            goto label_1125e4;
        }
    }
    ctx->pc = 0x1125CCu;
label_1125cc:
    // 0x1125cc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1125ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1125d0:
    // 0x1125d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1125d4:
    if (ctx->pc == 0x1125D4u) {
        ctx->pc = 0x1125D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125D0u;
        // 0x1125d4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125D8u;
        goto label_1125d8;
    }
    ctx->pc = 0x1125D0u;
    {
        const bool branch_taken_0x1125d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125D0u;
        // 0x1125d4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125d0) {
            ctx->pc = 0x1125E4u;
            goto label_1125e4;
        }
    }
    ctx->pc = 0x1125D8u;
label_1125d8:
    // 0x1125d8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x1125d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_1125dc:
    // 0x1125dc: 0xc07fd18  jal         func_1FF460
label_1125e0:
    if (ctx->pc == 0x1125E0u) {
        ctx->pc = 0x1125E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125DCu;
        // 0x1125e0: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125E4u;
        goto label_1125e4;
    }
    ctx->pc = 0x1125DCu;
    SET_GPR_U32(ctx, 31, 0x1125E4u);
    ctx->pc = 0x1125E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125DCu;
    // 0x1125e0: 0xac860004  sw          $a2, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1125DCu, 0x1125E4u)) {
        return;
    }
    ctx->pc = 0x1125E4u;
label_1125e4:
    // 0x1125e4: 0xc0893a2  jal         func_224E88
label_1125e8:
    if (ctx->pc == 0x1125E8u) {
        ctx->pc = 0x1125E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125E4u;
        // 0x1125e8: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125ECu;
        goto label_1125ec;
    }
    ctx->pc = 0x1125E4u;
    SET_GPR_U32(ctx, 31, 0x1125ECu);
    ctx->pc = 0x1125E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1125E4u;
    // 0x1125e8: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E88u, 0x1125E4u, 0x1125ECu)) {
        return;
    }
    ctx->pc = 0x1125ECu;
label_1125ec:
    // 0x1125ec: 0x10400195  beqz        $v0, . + 4 + (0x195 << 2)
label_1125f0:
    if (ctx->pc == 0x1125F0u) {
        ctx->pc = 0x1125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125ECu;
        // 0x1125f0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1125F4u;
        goto label_1125f4;
    }
    ctx->pc = 0x1125ECu;
    {
        const bool branch_taken_0x1125ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1125F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125ECu;
        // 0x1125f0: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125ec) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x1125F4u;
label_1125f4:
    // 0x1125f4: 0x8e031a70  lw          $v1, 0x1A70($s0)
    ctx->pc = 0x1125f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6768)));
label_1125f8:
    // 0x1125f8: 0x8c468918  lw          $a2, -0x76E8($v0)
    ctx->pc = 0x1125f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
label_1125fc:
    // 0x1125fc: 0x10c30007  beq         $a2, $v1, . + 4 + (0x7 << 2)
label_112600:
    if (ctx->pc == 0x112600u) {
        ctx->pc = 0x112600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125FCu;
        // 0x112600: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112604u;
        goto label_112604;
    }
    ctx->pc = 0x1125FCu;
    {
        const bool branch_taken_0x1125fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x112600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1125FCu;
        // 0x112600: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1125fc) {
            ctx->pc = 0x11261Cu;
            goto label_11261c;
        }
    }
    ctx->pc = 0x112604u;
label_112604:
    // 0x112604: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x112604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_112608:
    // 0x112608: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_11260c:
    if (ctx->pc == 0x11260Cu) {
        ctx->pc = 0x11260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112608u;
        // 0x11260c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112610u;
        goto label_112610;
    }
    ctx->pc = 0x112608u;
    {
        const bool branch_taken_0x112608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11260Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112608u;
        // 0x11260c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112608) {
            ctx->pc = 0x11261Cu;
            goto label_11261c;
        }
    }
    ctx->pc = 0x112610u;
label_112610:
    // 0x112610: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x112610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
label_112614:
    // 0x112614: 0xc07fd18  jal         func_1FF460
label_112618:
    if (ctx->pc == 0x112618u) {
        ctx->pc = 0x112618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112614u;
        // 0x112618: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11261Cu;
        goto label_11261c;
    }
    ctx->pc = 0x112614u;
    SET_GPR_U32(ctx, 31, 0x11261Cu);
    ctx->pc = 0x112618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112614u;
    // 0x112618: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x112614u, 0x11261Cu)) {
        return;
    }
    ctx->pc = 0x11261Cu;
label_11261c:
    // 0x11261c: 0xc06b908  jal         func_1AE420
label_112620:
    if (ctx->pc == 0x112620u) {
        ctx->pc = 0x112620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11261Cu;
        // 0x112620: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112624u;
        goto label_112624;
    }
    ctx->pc = 0x11261Cu;
    SET_GPR_U32(ctx, 31, 0x112624u);
    ctx->pc = 0x112620u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11261Cu;
    // 0x112620: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE420u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AE420u, 0x11261Cu, 0x112624u)) {
        return;
    }
    ctx->pc = 0x112624u;
label_112624:
    // 0x112624: 0xc08939a  jal         func_224E68
label_112628:
    if (ctx->pc == 0x112628u) {
        ctx->pc = 0x112628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112624u;
        // 0x112628: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11262Cu;
        goto label_11262c;
    }
    ctx->pc = 0x112624u;
    SET_GPR_U32(ctx, 31, 0x11262Cu);
    ctx->pc = 0x112628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112624u;
    // 0x112628: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x224E68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x224E68u, 0x112624u, 0x11262Cu)) {
        return;
    }
    ctx->pc = 0x11262Cu;
label_11262c:
    // 0x11262c: 0x10000186  b           . + 4 + (0x186 << 2)
label_112630:
    if (ctx->pc == 0x112630u) {
        ctx->pc = 0x112630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11262Cu;
        // 0x112630: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112634u;
        goto label_112634;
    }
    ctx->pc = 0x11262Cu;
    {
        const bool branch_taken_0x11262c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11262Cu;
        // 0x112630: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11262c) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x112634u;
label_112634:
    // 0x112634: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x112634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_112638:
    // 0x112638: 0x8c62f880  lw          $v0, -0x780($v1)
    ctx->pc = 0x112638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294965376)));
label_11263c:
    // 0x11263c: 0x1482001c  bne         $a0, $v0, . + 4 + (0x1C << 2)
label_112640:
    if (ctx->pc == 0x112640u) {
        ctx->pc = 0x112640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11263Cu;
        // 0x112640: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112644u;
        goto label_112644;
    }
    ctx->pc = 0x11263Cu;
    {
        const bool branch_taken_0x11263c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x112640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11263Cu;
        // 0x112640: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11263c) {
            ctx->pc = 0x1126B0u;
            goto label_1126b0;
        }
    }
    ctx->pc = 0x112644u;
label_112644:
    // 0x112644: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_112648:
    // 0x112648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_11264c:
    // 0x11264c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11264cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_112650:
    // 0x112650: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x112650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_112654:
    // 0x112654: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x112654u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_112658:
    // 0x112658: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x112658u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_11265c:
    // 0x11265c: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x11265cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_112660:
    // 0x112660: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x112660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_112664:
    // 0x112664: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x112664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_112668:
    // 0x112668: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x112668u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_11266c:
    // 0x11266c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x11266cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_112670:
    // 0x112670: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x112670u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_112674:
    // 0x112674: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x112674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
label_112678:
    // 0x112678: 0xe6200040  swc1        $f0, 0x40($s1)
    ctx->pc = 0x112678u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 64), bits); }
label_11267c:
    // 0x11267c: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x11267cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_112680:
    // 0x112680: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x112680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_112684:
    // 0x112684: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x112684u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_112688:
    // 0x112688: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x112688u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_11268c:
    // 0x11268c: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x11268cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_112690:
    // 0x112690: 0xae200058  sw          $zero, 0x58($s1)
    ctx->pc = 0x112690u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 0));
label_112694:
    // 0x112694: 0xac400034  sw          $zero, 0x34($v0)
    ctx->pc = 0x112694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 0));
label_112698:
    // 0x112698: 0xac400038  sw          $zero, 0x38($v0)
    ctx->pc = 0x112698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 0));
label_11269c:
    // 0x11269c: 0xae200070  sw          $zero, 0x70($s1)
    ctx->pc = 0x11269cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 0));
label_1126a0:
    // 0x1126a0: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x1126a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1126a4:
    // 0x1126a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1126a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1126a8:
    // 0x1126a8: 0x10000166  b           . + 4 + (0x166 << 2)
label_1126ac:
    if (ctx->pc == 0x1126ACu) {
        ctx->pc = 0x1126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126A8u;
        // 0x1126ac: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126B0u;
        goto label_1126b0;
    }
    ctx->pc = 0x1126A8u;
    {
        const bool branch_taken_0x1126a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126A8u;
        // 0x1126ac: 0xae22004c  sw          $v0, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126a8) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x1126B0u;
label_1126b0:
    // 0x1126b0: 0x8c4344d0  lw          $v1, 0x44D0($v0)
    ctx->pc = 0x1126b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17616)));
label_1126b4:
    // 0x1126b4: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_1126b8:
    if (ctx->pc == 0x1126B8u) {
        ctx->pc = 0x1126B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126B4u;
        // 0x1126b8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126BCu;
        goto label_1126bc;
    }
    ctx->pc = 0x1126B4u;
    {
        const bool branch_taken_0x1126b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1126B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126B4u;
        // 0x1126b8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126b4) {
            ctx->pc = 0x112740u;
            goto label_112740;
        }
    }
    ctx->pc = 0x1126BCu;
label_1126bc:
    // 0x1126bc: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1126bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_1126c0:
    // 0x1126c0: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x1126c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_1126c4:
    // 0x1126c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1126c8:
    if (ctx->pc == 0x1126C8u) {
        ctx->pc = 0x1126C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126C4u;
        // 0x1126c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126CCu;
        goto label_1126cc;
    }
    ctx->pc = 0x1126C4u;
    {
        const bool branch_taken_0x1126c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126C4u;
        // 0x1126c8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126c4) {
            ctx->pc = 0x1126D0u;
            goto label_1126d0;
        }
    }
    ctx->pc = 0x1126CCu;
label_1126cc:
    // 0x1126cc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1126ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1126d0:
    // 0x1126d0: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_1126d4:
    if (ctx->pc == 0x1126D4u) {
        ctx->pc = 0x1126D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126D0u;
        // 0x1126d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126D8u;
        goto label_1126d8;
    }
    ctx->pc = 0x1126D0u;
    {
        const bool branch_taken_0x1126d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1126d0) {
            ctx->pc = 0x1126D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1126D0u;
            // 0x1126d4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1126E4u;
            goto label_1126e4;
        }
    }
    ctx->pc = 0x1126D8u;
label_1126d8:
    // 0x1126d8: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1126d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1126dc:
    // 0x1126dc: 0x10000159  b           . + 4 + (0x159 << 2)
label_1126e0:
    if (ctx->pc == 0x1126E0u) {
        ctx->pc = 0x1126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126DCu;
        // 0x1126e0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126E4u;
        goto label_1126e4;
    }
    ctx->pc = 0x1126DCu;
    {
        const bool branch_taken_0x1126dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126DCu;
        // 0x1126e0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1126dc) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x1126E4u;
label_1126e4:
    // 0x1126e4: 0x263000d8  addiu       $s0, $s1, 0xD8
    ctx->pc = 0x1126e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_1126e8:
    // 0x1126e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1126e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1126ec:
    // 0x1126ec: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1126ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1126f0:
    // 0x1126f0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1126f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1126f4:
    // 0x1126f4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1126f8:
    if (ctx->pc == 0x1126F8u) {
        ctx->pc = 0x1126F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1126F4u;
        // 0x1126f8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1126FCu;
        goto label_1126fc;
    }
    ctx->pc = 0x1126F4u;
    {
        const bool branch_taken_0x1126f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1126f4) {
            ctx->pc = 0x1126F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1126F4u;
            // 0x1126f8: 0x8e2500d8  lw          $a1, 0xD8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112708u;
            goto label_112708;
        }
    }
    ctx->pc = 0x1126FCu;
label_1126fc:
    // 0x1126fc: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x1126fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_112700:
    // 0x112700: 0x10000150  b           . + 4 + (0x150 << 2)
label_112704:
    if (ctx->pc == 0x112704u) {
        ctx->pc = 0x112704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112700u;
        // 0x112704: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112708u;
        goto label_112708;
    }
    ctx->pc = 0x112700u;
    {
        const bool branch_taken_0x112700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112700u;
        // 0x112704: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112700) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112708u;
label_112708:
    // 0x112708: 0x10a0014e  beqz        $a1, . + 4 + (0x14E << 2)
label_11270c:
    if (ctx->pc == 0x11270Cu) {
        ctx->pc = 0x11270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112708u;
        // 0x11270c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112710u;
        goto label_112710;
    }
    ctx->pc = 0x112708u;
    {
        const bool branch_taken_0x112708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11270Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112708u;
        // 0x11270c: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112708) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112710u;
label_112710:
    // 0x112710: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x112710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
label_112714:
    // 0x112714: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x112714u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_112718:
    // 0x112718: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x112718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_11271c:
    // 0x11271c: 0x60f809  jalr        $v1
label_112720:
    if (ctx->pc == 0x112720u) {
        ctx->pc = 0x112720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11271Cu;
        // 0x112720: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112724u;
        goto label_112724;
    }
    ctx->pc = 0x11271Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112724u);
        ctx->pc = 0x112720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11271Cu;
        // 0x112720: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11271Cu, 0x112724u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112724u;
label_112724:
    // 0x112724: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x112724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112728:
    // 0x112728: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_11272c:
    // 0x11272c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x11272cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_112730:
    // 0x112730: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112734:
    // 0x112734: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x112734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_112738:
    // 0x112738: 0x10000142  b           . + 4 + (0x142 << 2)
label_11273c:
    if (ctx->pc == 0x11273Cu) {
        ctx->pc = 0x11273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112738u;
        // 0x11273c: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112740u;
        goto label_112740;
    }
    ctx->pc = 0x112738u;
    {
        const bool branch_taken_0x112738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11273Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112738u;
        // 0x11273c: 0xae440004  sw          $a0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112738) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112740u;
label_112740:
    // 0x112740: 0x8c4344c8  lw          $v1, 0x44C8($v0)
    ctx->pc = 0x112740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17608)));
label_112744:
    // 0x112744: 0x14830022  bne         $a0, $v1, . + 4 + (0x22 << 2)
label_112748:
    if (ctx->pc == 0x112748u) {
        ctx->pc = 0x112748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112744u;
        // 0x112748: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11274Cu;
        goto label_11274c;
    }
    ctx->pc = 0x112744u;
    {
        const bool branch_taken_0x112744 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112744u;
        // 0x112748: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112744) {
            ctx->pc = 0x1127D0u;
            goto label_1127d0;
        }
    }
    ctx->pc = 0x11274Cu;
label_11274c:
    // 0x11274c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x11274cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_112750:
    // 0x112750: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x112750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_112754:
    // 0x112754: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x112754u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_112758:
    // 0x112758: 0x6844000f  ldl         $a0, 0xF($v0)
    ctx->pc = 0x112758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11275c:
    // 0x11275c: 0x6c440008  ldr         $a0, 0x8($v0)
    ctx->pc = 0x11275cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_112760:
    // 0x112760: 0x68450017  ldl         $a1, 0x17($v0)
    ctx->pc = 0x112760u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_112764:
    // 0x112764: 0x6c450010  ldr         $a1, 0x10($v0)
    ctx->pc = 0x112764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_112768:
    // 0x112768: 0x6846001f  ldl         $a2, 0x1F($v0)
    ctx->pc = 0x112768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_11276c:
    // 0x11276c: 0x6c460018  ldr         $a2, 0x18($v0)
    ctx->pc = 0x11276cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_112770:
    // 0x112770: 0xb223015f  sdl         $v1, 0x15F($s1)
    ctx->pc = 0x112770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 351); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_112774:
    // 0x112774: 0xb6230158  sdr         $v1, 0x158($s1)
    ctx->pc = 0x112774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 344); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112778:
    // 0x112778: 0xb2240167  sdl         $a0, 0x167($s1)
    ctx->pc = 0x112778u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 359); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11277c:
    // 0x11277c: 0xb6240160  sdr         $a0, 0x160($s1)
    ctx->pc = 0x11277cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 352); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112780:
    // 0x112780: 0xb225016f  sdl         $a1, 0x16F($s1)
    ctx->pc = 0x112780u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 367); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_112784:
    // 0x112784: 0xb6250168  sdr         $a1, 0x168($s1)
    ctx->pc = 0x112784u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 360); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112788:
    // 0x112788: 0xb2260177  sdl         $a2, 0x177($s1)
    ctx->pc = 0x112788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 375); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_11278c:
    // 0x11278c: 0xb6260170  sdr         $a2, 0x170($s1)
    ctx->pc = 0x11278cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 368); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112790:
    // 0x112790: 0x68430027  ldl         $v1, 0x27($v0)
    ctx->pc = 0x112790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_112794:
    // 0x112794: 0x6c430020  ldr         $v1, 0x20($v0)
    ctx->pc = 0x112794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_112798:
    // 0x112798: 0x6844002f  ldl         $a0, 0x2F($v0)
    ctx->pc = 0x112798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_11279c:
    // 0x11279c: 0x6c440028  ldr         $a0, 0x28($v0)
    ctx->pc = 0x11279cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1127a0:
    // 0x1127a0: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x1127a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1127a4:
    // 0x1127a4: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x1127a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1127a8:
    // 0x1127a8: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x1127a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1127ac:
    // 0x1127ac: 0xb223017f  sdl         $v1, 0x17F($s1)
    ctx->pc = 0x1127acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127b0:
    // 0x1127b0: 0xb6230178  sdr         $v1, 0x178($s1)
    ctx->pc = 0x1127b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127b4:
    // 0x1127b4: 0xb2240187  sdl         $a0, 0x187($s1)
    ctx->pc = 0x1127b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 391); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127b8:
    // 0x1127b8: 0xb6240180  sdr         $a0, 0x180($s1)
    ctx->pc = 0x1127b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 384); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127bc:
    // 0x1127bc: 0xb225018f  sdl         $a1, 0x18F($s1)
    ctx->pc = 0x1127bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 399); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127c0:
    // 0x1127c0: 0xb6250188  sdr         $a1, 0x188($s1)
    ctx->pc = 0x1127c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 392); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1127c4:
    // 0x1127c4: 0xae260190  sw          $a2, 0x190($s1)
    ctx->pc = 0x1127c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 400), GPR_U32(ctx, 6));
label_1127c8:
    // 0x1127c8: 0x1000011f  b           . + 4 + (0x11F << 2)
label_1127cc:
    if (ctx->pc == 0x1127CCu) {
        ctx->pc = 0x1127CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C8u;
        // 0x1127cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1127D0u;
        goto label_1127d0;
    }
    ctx->pc = 0x1127C8u;
    {
        const bool branch_taken_0x1127c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1127CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127C8u;
        // 0x1127cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127c8) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x1127D0u;
label_1127d0:
    // 0x1127d0: 0x8c438978  lw          $v1, -0x7688($v0)
    ctx->pc = 0x1127d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936952)));
label_1127d4:
    // 0x1127d4: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_1127d8:
    if (ctx->pc == 0x1127D8u) {
        ctx->pc = 0x1127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127D4u;
        // 0x1127d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1127DCu;
        goto label_1127dc;
    }
    ctx->pc = 0x1127D4u;
    {
        const bool branch_taken_0x1127d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127D4u;
        // 0x1127d8: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1127d4) {
            ctx->pc = 0x11287Cu;
            goto label_11287c;
        }
    }
    ctx->pc = 0x1127DCu;
label_1127dc:
    // 0x1127dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x1127dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1127e0:
    // 0x1127e0: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1127e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1127e4:
    // 0x1127e4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1127e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1127e8:
    // 0x1127e8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1127ec:
    if (ctx->pc == 0x1127ECu) {
        ctx->pc = 0x1127ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127E8u;
        // 0x1127ec: 0xc4750008  lwc1        $f21, 0x8($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1127F0u;
        goto label_1127f0;
    }
    ctx->pc = 0x1127E8u;
    {
        const bool branch_taken_0x1127e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1127e8) {
            ctx->pc = 0x1127ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1127E8u;
            // 0x1127ec: 0xc4750008  lwc1        $f21, 0x8($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1127F0u;
            goto label_1127f0;
        }
    }
    ctx->pc = 0x1127F0u;
label_1127f0:
    // 0x1127f0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1127f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1127f4:
    // 0x1127f4: 0xc058652  jal         func_161948
label_1127f8:
    if (ctx->pc == 0x1127F8u) {
        ctx->pc = 0x1127F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127F4u;
        // 0x1127f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1127FCu;
        goto label_1127fc;
    }
    ctx->pc = 0x1127F4u;
    SET_GPR_U32(ctx, 31, 0x1127FCu);
    ctx->pc = 0x1127F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127F4u;
    // 0x1127f8: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x161948u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x161948u, 0x1127F4u, 0x1127FCu)) {
        return;
    }
    ctx->pc = 0x1127FCu;
label_1127fc:
    // 0x1127fc: 0xc0791de  jal         func_1E4778
label_112800:
    if (ctx->pc == 0x112800u) {
        ctx->pc = 0x112800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1127FCu;
        // 0x112800: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112804u;
        goto label_112804;
    }
    ctx->pc = 0x1127FCu;
    SET_GPR_U32(ctx, 31, 0x112804u);
    ctx->pc = 0x112800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1127FCu;
    // 0x112800: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4778u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4778u, 0x1127FCu, 0x112804u)) {
        return;
    }
    ctx->pc = 0x112804u;
label_112804:
    // 0x112804: 0xc044f6e  jal         func_113DB8
label_112808:
    if (ctx->pc == 0x112808u) {
        ctx->pc = 0x112808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112804u;
        // 0x112808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11280Cu;
        goto label_11280c;
    }
    ctx->pc = 0x112804u;
    SET_GPR_U32(ctx, 31, 0x11280Cu);
    ctx->pc = 0x112808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112804u;
    // 0x112808: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113DB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113DB8u, 0x112804u, 0x11280Cu)) {
        return;
    }
    ctx->pc = 0x11280Cu;
label_11280c:
    // 0x11280c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x11280cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112810:
    // 0x112810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112814:
    // 0x112814: 0xc044dc6  jal         func_113718
label_112818:
    if (ctx->pc == 0x112818u) {
        ctx->pc = 0x112818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112814u;
        // 0x112818: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11281Cu;
        goto label_11281c;
    }
    ctx->pc = 0x112814u;
    SET_GPR_U32(ctx, 31, 0x11281Cu);
    ctx->pc = 0x112818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112814u;
    // 0x112818: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113718u, 0x112814u, 0x11281Cu)) {
        return;
    }
    ctx->pc = 0x11281Cu;
label_11281c:
    // 0x11281c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11281cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112820:
    // 0x112820: 0xc044b1c  jal         func_112C70
label_112824:
    if (ctx->pc == 0x112824u) {
        ctx->pc = 0x112824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112820u;
        // 0x112824: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112828u;
        goto label_112828;
    }
    ctx->pc = 0x112820u;
    SET_GPR_U32(ctx, 31, 0x112828u);
    ctx->pc = 0x112824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112820u;
    // 0x112824: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112C70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x112C70u, 0x112820u, 0x112828u)) {
        return;
    }
    ctx->pc = 0x112828u;
label_112828:
    // 0x112828: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11282c:
    // 0x11282c: 0xc044fac  jal         func_113EB0
label_112830:
    if (ctx->pc == 0x112830u) {
        ctx->pc = 0x112830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11282Cu;
        // 0x112830: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112834u;
        goto label_112834;
    }
    ctx->pc = 0x11282Cu;
    SET_GPR_U32(ctx, 31, 0x112834u);
    ctx->pc = 0x112830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11282Cu;
    // 0x112830: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113EB0u, 0x11282Cu, 0x112834u)) {
        return;
    }
    ctx->pc = 0x112834u;
label_112834:
    // 0x112834: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112834u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112838:
    // 0x112838: 0xc044b96  jal         func_112E58
label_11283c:
    if (ctx->pc == 0x11283Cu) {
        ctx->pc = 0x11283Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112838u;
        // 0x11283c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x112840u;
        goto label_112840;
    }
    ctx->pc = 0x112838u;
    SET_GPR_U32(ctx, 31, 0x112840u);
    ctx->pc = 0x11283Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112838u;
    // 0x11283c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x112E58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x112E58u, 0x112838u, 0x112840u)) {
        return;
    }
    ctx->pc = 0x112840u;
label_112840:
    // 0x112840: 0x8e3001a8  lw          $s0, 0x1A8($s1)
    ctx->pc = 0x112840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_112844:
    // 0x112844: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_112848:
    if (ctx->pc == 0x112848u) {
        ctx->pc = 0x112848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112844u;
        // 0x112848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11284Cu;
        goto label_11284c;
    }
    ctx->pc = 0x112844u;
    {
        const bool branch_taken_0x112844 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112844u;
        // 0x112848: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112844) {
            ctx->pc = 0x11286Cu;
            goto label_11286c;
        }
    }
    ctx->pc = 0x11284Cu;
label_11284c:
    // 0x11284c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x11284cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_112850:
    // 0x112850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112854:
    // 0x112854: 0xc044dc6  jal         func_113718
label_112858:
    if (ctx->pc == 0x112858u) {
        ctx->pc = 0x112858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112854u;
        // 0x112858: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x11285Cu;
        goto label_11285c;
    }
    ctx->pc = 0x112854u;
    SET_GPR_U32(ctx, 31, 0x11285Cu);
    ctx->pc = 0x112858u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112854u;
    // 0x112858: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x113718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113718u, 0x112854u, 0x11285Cu)) {
        return;
    }
    ctx->pc = 0x11285Cu;
label_11285c:
    // 0x11285c: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x11285cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_112860:
    // 0x112860: 0x5600fffb  bnel        $s0, $zero, . + 4 + (-0x5 << 2)
label_112864:
    if (ctx->pc == 0x112864u) {
        ctx->pc = 0x112864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112860u;
        // 0x112864: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112868u;
        goto label_112868;
    }
    ctx->pc = 0x112860u;
    {
        const bool branch_taken_0x112860 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112860) {
            ctx->pc = 0x112864u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x112860u;
            // 0x112864: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_112850;
        }
    }
    ctx->pc = 0x112868u;
label_112868:
    // 0x112868: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x112868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11286c:
    // 0x11286c: 0xc044cbc  jal         func_1132F0
label_112870:
    if (ctx->pc == 0x112870u) {
        ctx->pc = 0x112870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11286Cu;
        // 0x112870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112874u;
        goto label_112874;
    }
    ctx->pc = 0x11286Cu;
    SET_GPR_U32(ctx, 31, 0x112874u);
    ctx->pc = 0x112870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11286Cu;
    // 0x112870: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1132F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1132F0u, 0x11286Cu, 0x112874u)) {
        return;
    }
    ctx->pc = 0x112874u;
label_112874:
    // 0x112874: 0x100000f4  b           . + 4 + (0xF4 << 2)
label_112878:
    if (ctx->pc == 0x112878u) {
        ctx->pc = 0x112878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112874u;
        // 0x112878: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11287Cu;
        goto label_11287c;
    }
    ctx->pc = 0x112874u;
    {
        const bool branch_taken_0x112874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112874u;
        // 0x112878: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112874) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x11287Cu;
label_11287c:
    // 0x11287c: 0x8c4344d8  lw          $v1, 0x44D8($v0)
    ctx->pc = 0x11287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17624)));
label_112880:
    // 0x112880: 0x14830050  bne         $a0, $v1, . + 4 + (0x50 << 2)
label_112884:
    if (ctx->pc == 0x112884u) {
        ctx->pc = 0x112884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112880u;
        // 0x112884: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112888u;
        goto label_112888;
    }
    ctx->pc = 0x112880u;
    {
        const bool branch_taken_0x112880 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112880u;
        // 0x112884: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112880) {
            ctx->pc = 0x1129C4u;
            goto label_1129c4;
        }
    }
    ctx->pc = 0x112888u;
label_112888:
    // 0x112888: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x112888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_11288c:
    // 0x11288c: 0x263000d8  addiu       $s0, $s1, 0xD8
    ctx->pc = 0x11288cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 216));
label_112890:
    // 0x112890: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x112890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_112894:
    // 0x112894: 0x262500b0  addiu       $a1, $s1, 0xB0
    ctx->pc = 0x112894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
label_112898:
    // 0x112898: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x112898u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11289c:
    // 0x11289c: 0x262600b4  addiu       $a2, $s1, 0xB4
    ctx->pc = 0x11289cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 180));
label_1128a0:
    // 0x1128a0: 0x8ce20034  lw          $v0, 0x34($a3)
    ctx->pc = 0x1128a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 52)));
label_1128a4:
    // 0x1128a4: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x1128a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_1128a8:
    // 0x1128a8: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x1128a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_1128ac:
    // 0x1128ac: 0x60f809  jalr        $v1
label_1128b0:
    if (ctx->pc == 0x1128B0u) {
        ctx->pc = 0x1128B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128ACu;
        // 0x1128b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1128B4u;
        goto label_1128b4;
    }
    ctx->pc = 0x1128ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1128B4u);
        ctx->pc = 0x1128B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128ACu;
        // 0x1128b0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1128ACu, 0x1128B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1128B4u;
label_1128b4:
    // 0x1128b4: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x1128b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1128b8:
    // 0x1128b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1128b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1128bc:
    // 0x1128bc: 0x0  nop
    ctx->pc = 0x1128bcu;
    // NOP
label_1128c0:
    // 0x1128c0: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1128c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1128c4:
    // 0x1128c4: 0x0  nop
    ctx->pc = 0x1128c4u;
    // NOP
label_1128c8:
    // 0x1128c8: 0x450300df  bc1tl       . + 4 + (0xDF << 2)
label_1128cc:
    if (ctx->pc == 0x1128CCu) {
        ctx->pc = 0x1128CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128C8u;
        // 0x1128cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1128D0u;
        goto label_1128d0;
    }
    ctx->pc = 0x1128C8u;
    {
        const bool branch_taken_0x1128c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1128c8) {
            ctx->pc = 0x1128CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1128C8u;
            // 0x1128cc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x1128D0u;
label_1128d0:
    // 0x1128d0: 0x8e520004  lw          $s2, 0x4($s2)
    ctx->pc = 0x1128d0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1128d4:
    // 0x1128d4: 0x1240000a  beqz        $s2, . + 4 + (0xA << 2)
label_1128d8:
    if (ctx->pc == 0x1128D8u) {
        ctx->pc = 0x1128DCu;
        goto label_1128dc;
    }
    ctx->pc = 0x1128D4u;
    {
        const bool branch_taken_0x1128d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1128d4) {
            ctx->pc = 0x112900u;
            goto label_112900;
        }
    }
    ctx->pc = 0x1128DCu;
label_1128dc:
    // 0x1128dc: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1128dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1128e0:
    // 0x1128e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1128e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1128e4:
    // 0x1128e4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1128e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1128e8:
    // 0x1128e8: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x1128e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_1128ec:
    // 0x1128ec: 0xc6420004  lwc1        $f2, 0x4($s2)
    ctx->pc = 0x1128ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1128f0:
    // 0x1128f0: 0x0  nop
    ctx->pc = 0x1128f0u;
    // NOP
label_1128f4:
    // 0x1128f4: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x1128f4u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[2]);
label_1128f8:
    // 0x1128f8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1128fc:
    if (ctx->pc == 0x1128FCu) {
        ctx->pc = 0x1128FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128F8u;
        // 0x1128fc: 0xe6210090  swc1        $f1, 0x90($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x112900u;
        goto label_112900;
    }
    ctx->pc = 0x1128F8u;
    {
        const bool branch_taken_0x1128f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1128FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1128F8u;
        // 0x1128fc: 0xe6210090  swc1        $f1, 0x90($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1128f8) {
            ctx->pc = 0x112914u;
            goto label_112914;
        }
    }
    ctx->pc = 0x112900u;
label_112900:
    // 0x112900: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112900u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_112904:
    // 0x112904: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112904u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112908:
    // 0x112908: 0x0  nop
    ctx->pc = 0x112908u;
    // NOP
label_11290c:
    // 0x11290c: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x11290cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_112910:
    // 0x112910: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x112910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
label_112914:
    // 0x112914: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x112914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_112918:
    // 0x112918: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_11291c:
    if (ctx->pc == 0x11291Cu) {
        ctx->pc = 0x11291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112918u;
        // 0x11291c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112920u;
        goto label_112920;
    }
    ctx->pc = 0x112918u;
    {
        const bool branch_taken_0x112918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11291Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112918u;
        // 0x11291c: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112918) {
            ctx->pc = 0x11293Cu;
            goto label_11293c;
        }
    }
    ctx->pc = 0x112920u;
label_112920:
    // 0x112920: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112920u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112924:
    // 0x112924: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x112924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_112928:
    // 0x112928: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11292c:
    // 0x11292c: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x11292cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112930:
    // 0x112930: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x112930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_112934:
    // 0x112934: 0x10000006  b           . + 4 + (0x6 << 2)
label_112938:
    if (ctx->pc == 0x112938u) {
        ctx->pc = 0x112938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112934u;
        // 0x112938: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x11293Cu;
        goto label_11293c;
    }
    ctx->pc = 0x112934u;
    {
        const bool branch_taken_0x112934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112934u;
        // 0x112938: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x112934) {
            ctx->pc = 0x112950u;
            goto label_112950;
        }
    }
    ctx->pc = 0x11293Cu;
label_11293c:
    // 0x11293c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11293cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112940:
    // 0x112940: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x112940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_112944:
    // 0x112944: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x112944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112948:
    // 0x112948: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x112948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_11294c:
    // 0x11294c: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x11294cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_112950:
    // 0x112950: 0xc62c00ac  lwc1        $f12, 0xAC($s1)
    ctx->pc = 0x112950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_112954:
    // 0x112954: 0x3c01402a  lui         $at, 0x402A
    ctx->pc = 0x112954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16426 << 16));
label_112958:
    // 0x112958: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x112958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
label_11295c:
    // 0x11295c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x11295cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112960:
    // 0x112960: 0x3c013fa0  lui         $at, 0x3FA0
    ctx->pc = 0x112960u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16288 << 16));
label_112964:
    // 0x112964: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x112964u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_112968:
    // 0x112968: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x112968u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_11296c:
    // 0x11296c: 0xc62100b0  lwc1        $f1, 0xB0($s1)
    ctx->pc = 0x11296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112970:
    // 0x112970: 0x46026302  mul.s       $f12, $f12, $f2
    ctx->pc = 0x112970u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[2]);
label_112974:
    // 0x112974: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x112974u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[1]);
label_112978:
    // 0x112978: 0xc09b008  jal         func_26C020
label_11297c:
    if (ctx->pc == 0x11297Cu) {
        ctx->pc = 0x112980u;
        goto label_112980;
    }
    ctx->pc = 0x112978u;
    SET_GPR_U32(ctx, 31, 0x112980u);
    ctx->pc = 0x26C020u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C020u, 0x112978u, 0x112980u)) {
        return;
    }
    ctx->pc = 0x112980u;
label_112980:
    // 0x112980: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x112980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_112984:
    // 0x112984: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x112984u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_112988:
    // 0x112988: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x112988u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_11298c:
    // 0x11298c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11298cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_112990:
    // 0x112990: 0xae200098  sw          $zero, 0x98($s1)
    ctx->pc = 0x112990u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
label_112994:
    // 0x112994: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x112994u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_112998:
    // 0x112998: 0xae22009c  sw          $v0, 0x9C($s1)
    ctx->pc = 0x112998u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 2));
label_11299c:
    // 0x11299c: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x11299cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_1129a0:
    // 0x1129a0: 0xc6210098  lwc1        $f1, 0x98($s1)
    ctx->pc = 0x1129a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1129a4:
    // 0x1129a4: 0xe62000a0  swc1        $f0, 0xA0($s1)
    ctx->pc = 0x1129a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_1129a8:
    // 0x1129a8: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1129a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1129ac:
    // 0x1129ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1129acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1129b0:
    // 0x1129b0: 0x0  nop
    ctx->pc = 0x1129b0u;
    // NOP
label_1129b4:
    // 0x1129b4: 0x450300a3  bc1tl       . + 4 + (0xA3 << 2)
label_1129b8:
    if (ctx->pc == 0x1129B8u) {
        ctx->pc = 0x1129B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129B4u;
        // 0x1129b8: 0xe62000b4  swc1        $f0, 0xB4($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1129BCu;
        goto label_1129bc;
    }
    ctx->pc = 0x1129B4u;
    {
        const bool branch_taken_0x1129b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1129b4) {
            ctx->pc = 0x1129B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1129B4u;
            // 0x1129b8: 0xe62000b4  swc1        $f0, 0xB4($s1) (Delay Slot)
            { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x1129BCu;
label_1129bc:
    // 0x1129bc: 0x100000a2  b           . + 4 + (0xA2 << 2)
label_1129c0:
    if (ctx->pc == 0x1129C0u) {
        ctx->pc = 0x1129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129BCu;
        // 0x1129c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1129C4u;
        goto label_1129c4;
    }
    ctx->pc = 0x1129BCu;
    {
        const bool branch_taken_0x1129bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129BCu;
        // 0x1129c0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129bc) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x1129C4u;
label_1129c4:
    // 0x1129c4: 0x8c4344e0  lw          $v1, 0x44E0($v0)
    ctx->pc = 0x1129c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17632)));
label_1129c8:
    // 0x1129c8: 0x1483001d  bne         $a0, $v1, . + 4 + (0x1D << 2)
label_1129cc:
    if (ctx->pc == 0x1129CCu) {
        ctx->pc = 0x1129CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C8u;
        // 0x1129cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1129D0u;
        goto label_1129d0;
    }
    ctx->pc = 0x1129C8u;
    {
        const bool branch_taken_0x1129c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1129CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129C8u;
        // 0x1129cc: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129c8) {
            ctx->pc = 0x112A40u;
            goto label_112a40;
        }
    }
    ctx->pc = 0x1129D0u;
label_1129d0:
    // 0x1129d0: 0x8e22009c  lw          $v0, 0x9C($s1)
    ctx->pc = 0x1129d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 156)));
label_1129d4:
    // 0x1129d4: 0x1040009c  beqz        $v0, . + 4 + (0x9C << 2)
label_1129d8:
    if (ctx->pc == 0x1129D8u) {
        ctx->pc = 0x1129D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129D4u;
        // 0x1129d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1129DCu;
        goto label_1129dc;
    }
    ctx->pc = 0x1129D4u;
    {
        const bool branch_taken_0x1129d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1129D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129D4u;
        // 0x1129d8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129d4) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x1129DCu;
label_1129dc:
    // 0x1129dc: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1129dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1129e0:
    // 0x1129e0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_1129e4:
    if (ctx->pc == 0x1129E4u) {
        ctx->pc = 0x1129E8u;
        goto label_1129e8;
    }
    ctx->pc = 0x1129E0u;
    {
        const bool branch_taken_0x1129e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1129e0) {
            ctx->pc = 0x112A04u;
            goto label_112a04;
        }
    }
    ctx->pc = 0x1129E8u;
label_1129e8:
    // 0x1129e8: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1129e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1129ec:
    // 0x1129ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1129ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1129f0:
    // 0x1129f0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1129f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1129f4:
    // 0x1129f4: 0x0  nop
    ctx->pc = 0x1129f4u;
    // NOP
label_1129f8:
    // 0x1129f8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1129f8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_1129fc:
    // 0x1129fc: 0x10000005  b           . + 4 + (0x5 << 2)
label_112a00:
    if (ctx->pc == 0x112A00u) {
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A04u;
        goto label_112a04;
    }
    ctx->pc = 0x1129FCu;
    {
        const bool branch_taken_0x1129fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1129FCu;
        // 0x112a00: 0xe6200090  swc1        $f0, 0x90($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1129fc) {
            ctx->pc = 0x112A14u;
            goto label_112a14;
        }
    }
    ctx->pc = 0x112A04u;
label_112a04:
    // 0x112a04: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x112a04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_112a08:
    // 0x112a08: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x112a08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_112a0c:
    // 0x112a0c: 0x0  nop
    ctx->pc = 0x112a0cu;
    // NOP
label_112a10:
    // 0x112a10: 0xe6200090  swc1        $f0, 0x90($s1)
    ctx->pc = 0x112a10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 144), bits); }
label_112a14:
    // 0x112a14: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x112a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112a18:
    // 0x112a18: 0xc62100a8  lwc1        $f1, 0xA8($s1)
    ctx->pc = 0x112a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112a1c:
    // 0x112a1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112a20:
    // 0x112a20: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x112a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112a24:
    // 0x112a24: 0x8c4300d8  lw          $v1, 0xD8($v0)
    ctx->pc = 0x112a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_112a28:
    // 0x112a28: 0xc4600058  lwc1        $f0, 0x58($v1)
    ctx->pc = 0x112a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112a2c:
    // 0x112a2c: 0xe62100a0  swc1        $f1, 0xA0($s1)
    ctx->pc = 0x112a2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 160), bits); }
label_112a30:
    // 0x112a30: 0xe62000a4  swc1        $f0, 0xA4($s1)
    ctx->pc = 0x112a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 164), bits); }
label_112a34:
    // 0x112a34: 0xae200094  sw          $zero, 0x94($s1)
    ctx->pc = 0x112a34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 148), GPR_U32(ctx, 0));
label_112a38:
    // 0x112a38: 0x10000082  b           . + 4 + (0x82 << 2)
label_112a3c:
    if (ctx->pc == 0x112A3Cu) {
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A40u;
        goto label_112a40;
    }
    ctx->pc = 0x112A38u;
    {
        const bool branch_taken_0x112a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A38u;
        // 0x112a3c: 0xae200098  sw          $zero, 0x98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a38) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112A40u;
label_112a40:
    // 0x112a40: 0x8c434510  lw          $v1, 0x4510($v0)
    ctx->pc = 0x112a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17680)));
label_112a44:
    // 0x112a44: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_112a48:
    if (ctx->pc == 0x112A48u) {
        ctx->pc = 0x112A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A44u;
        // 0x112a48: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A4Cu;
        goto label_112a4c;
    }
    ctx->pc = 0x112A44u;
    {
        const bool branch_taken_0x112a44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A44u;
        // 0x112a48: 0x3c02006c  lui         $v0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a44) {
            ctx->pc = 0x112AA4u;
            goto label_112aa4;
        }
    }
    ctx->pc = 0x112A4Cu;
label_112a4c:
    // 0x112a4c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_112a50:
    // 0x112a50: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x112a50u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_112a54:
    // 0x112a54: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x112a54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_112a58:
    // 0x112a58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x112a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112a5c:
    // 0x112a5c: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x112a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
label_112a60:
    // 0x112a60: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x112a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112a64:
    // 0x112a64: 0xe62100bc  swc1        $f1, 0xBC($s1)
    ctx->pc = 0x112a64u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
label_112a68:
    // 0x112a68: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x112a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112a6c:
    // 0x112a6c: 0xe62000c0  swc1        $f0, 0xC0($s1)
    ctx->pc = 0x112a6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
label_112a70:
    // 0x112a70: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x112a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_112a74:
    // 0x112a74: 0xae2000c8  sw          $zero, 0xC8($s1)
    ctx->pc = 0x112a74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 200), GPR_U32(ctx, 0));
label_112a78:
    // 0x112a78: 0xae2300c4  sw          $v1, 0xC4($s1)
    ctx->pc = 0x112a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 3));
label_112a7c:
    // 0x112a7c: 0xc04f0cc  jal         func_13C330
label_112a80:
    if (ctx->pc == 0x112A80u) {
        ctx->pc = 0x112A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A7Cu;
        // 0x112a80: 0x8ca400d8  lw          $a0, 0xD8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112A84u;
        goto label_112a84;
    }
    ctx->pc = 0x112A7Cu;
    SET_GPR_U32(ctx, 31, 0x112A84u);
    ctx->pc = 0x112A80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112A7Cu;
    // 0x112a80: 0x8ca400d8  lw          $a0, 0xD8($a1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x112A7Cu, 0x112A84u)) {
        return;
    }
    ctx->pc = 0x112A84u;
label_112a84:
    // 0x112a84: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x112a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_112a88:
    // 0x112a88: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x112a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_112a8c:
    // 0x112a8c: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x112a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_112a90:
    // 0x112a90: 0xb22300d3  sdl         $v1, 0xD3($s1)
    ctx->pc = 0x112a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 211); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_112a94:
    // 0x112a94: 0xb62300cc  sdr         $v1, 0xCC($s1)
    ctx->pc = 0x112a94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 204); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_112a98:
    // 0x112a98: 0xae2400d4  sw          $a0, 0xD4($s1)
    ctx->pc = 0x112a98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 212), GPR_U32(ctx, 4));
label_112a9c:
    // 0x112a9c: 0x1000006a  b           . + 4 + (0x6A << 2)
label_112aa0:
    if (ctx->pc == 0x112AA0u) {
        ctx->pc = 0x112AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A9Cu;
        // 0x112aa0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AA4u;
        goto label_112aa4;
    }
    ctx->pc = 0x112A9Cu;
    {
        const bool branch_taken_0x112a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112A9Cu;
        // 0x112aa0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a9c) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x112AA4u;
label_112aa4:
    // 0x112aa4: 0x8c43f8d0  lw          $v1, -0x730($v0)
    ctx->pc = 0x112aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294965456)));
label_112aa8:
    // 0x112aa8: 0x1483000f  bne         $a0, $v1, . + 4 + (0xF << 2)
label_112aac:
    if (ctx->pc == 0x112AACu) {
        ctx->pc = 0x112AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA8u;
        // 0x112aac: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AB0u;
        goto label_112ab0;
    }
    ctx->pc = 0x112AA8u;
    {
        const bool branch_taken_0x112aa8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AA8u;
        // 0x112aac: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa8) {
            ctx->pc = 0x112AE8u;
            goto label_112ae8;
        }
    }
    ctx->pc = 0x112AB0u;
label_112ab0:
    // 0x112ab0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_112ab4:
    // 0x112ab4: 0xc6210158  lwc1        $f1, 0x158($s1)
    ctx->pc = 0x112ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_112ab8:
    // 0x112ab8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x112ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112abc:
    // 0x112abc: 0xc622015c  lwc1        $f2, 0x15C($s1)
    ctx->pc = 0x112abcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_112ac0:
    // 0x112ac0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x112ac0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_112ac4:
    // 0x112ac4: 0xc6230160  lwc1        $f3, 0x160($s1)
    ctx->pc = 0x112ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_112ac8:
    // 0x112ac8: 0xe6210158  swc1        $f1, 0x158($s1)
    ctx->pc = 0x112ac8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 344), bits); }
label_112acc:
    // 0x112acc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x112accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112ad0:
    // 0x112ad0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x112ad0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_112ad4:
    // 0x112ad4: 0xe622015c  swc1        $f2, 0x15C($s1)
    ctx->pc = 0x112ad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 348), bits); }
label_112ad8:
    // 0x112ad8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x112ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_112adc:
    // 0x112adc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x112adcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_112ae0:
    // 0x112ae0: 0xe6230160  swc1        $f3, 0x160($s1)
    ctx->pc = 0x112ae0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 352), bits); }
label_112ae4:
    // 0x112ae4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x112ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_112ae8:
    // 0x112ae8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x112ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_112aec:
    // 0x112aec: 0x8c4386c8  lw          $v1, -0x7938($v0)
    ctx->pc = 0x112aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936264)));
label_112af0:
    // 0x112af0: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_112af4:
    if (ctx->pc == 0x112AF4u) {
        ctx->pc = 0x112AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AF0u;
        // 0x112af4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112AF8u;
        goto label_112af8;
    }
    ctx->pc = 0x112AF0u;
    {
        const bool branch_taken_0x112af0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x112AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AF0u;
        // 0x112af4: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112af0) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x112AF8u;
label_112af8:
    // 0x112af8: 0x8e2201a8  lw          $v0, 0x1A8($s1)
    ctx->pc = 0x112af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 424)));
label_112afc:
    // 0x112afc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_112b00:
    if (ctx->pc == 0x112B00u) {
        ctx->pc = 0x112B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AFCu;
        // 0x112b00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B04u;
        goto label_112b04;
    }
    ctx->pc = 0x112AFCu;
    {
        const bool branch_taken_0x112afc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112AFCu;
        // 0x112b00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112afc) {
            ctx->pc = 0x112B08u;
            goto label_112b08;
        }
    }
    ctx->pc = 0x112B04u;
label_112b04:
    // 0x112b04: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x112b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_112b08:
    // 0x112b08: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_112b0c:
    if (ctx->pc == 0x112B0Cu) {
        ctx->pc = 0x112B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B08u;
        // 0x112b0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B10u;
        goto label_112b10;
    }
    ctx->pc = 0x112B08u;
    {
        const bool branch_taken_0x112b08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x112B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B08u;
        // 0x112b0c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b08) {
            ctx->pc = 0x112B20u;
            goto label_112b20;
        }
    }
    ctx->pc = 0x112B10u;
label_112b10:
    // 0x112b10: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x112b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_112b14:
    // 0x112b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_112b18:
    // 0x112b18: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x112b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_112b1c:
    // 0x112b1c: 0x8c5000d8  lw          $s0, 0xD8($v0)
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 216)));
label_112b20:
    // 0x112b20: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_112b24:
    // 0x112b24: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_112b28:
    if (ctx->pc == 0x112B28u) {
        ctx->pc = 0x112B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B24u;
        // 0x112b28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B2Cu;
        goto label_112b2c;
    }
    ctx->pc = 0x112B24u;
    {
        const bool branch_taken_0x112b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B24u;
        // 0x112b28: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b24) {
            ctx->pc = 0x112B30u;
            goto label_112b30;
        }
    }
    ctx->pc = 0x112B2Cu;
label_112b2c:
    // 0x112b2c: 0x8c520014  lw          $s2, 0x14($v0)
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_112b30:
    // 0x112b30: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x112b30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_112b34:
    // 0x112b34: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_112b38:
    // 0x112b38: 0x2453aae0  addiu       $s3, $v0, -0x5520
    ctx->pc = 0x112b38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945504));
label_112b3c:
    // 0x112b3c: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x112b3cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_112b40:
    // 0x112b40: 0xc07d234  jal         func_1F48D0
label_112b44:
    if (ctx->pc == 0x112B44u) {
        ctx->pc = 0x112B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B40u;
        // 0x112b44: 0x8c718308  lw          $s1, -0x7CF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935304)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B48u;
        goto label_112b48;
    }
    ctx->pc = 0x112B40u;
    SET_GPR_U32(ctx, 31, 0x112B48u);
    ctx->pc = 0x112B44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B40u;
    // 0x112b44: 0x8c718308  lw          $s1, -0x7CF8($v1) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935304)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x112B40u, 0x112B48u)) {
        return;
    }
    ctx->pc = 0x112B48u;
label_112b48:
    // 0x112b48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_112b4c:
    if (ctx->pc == 0x112B4Cu) {
        ctx->pc = 0x112B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B48u;
        // 0x112b4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B50u;
        goto label_112b50;
    }
    ctx->pc = 0x112B48u;
    {
        const bool branch_taken_0x112b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B48u;
        // 0x112b4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b48) {
            ctx->pc = 0x112B70u;
            goto label_112b70;
        }
    }
    ctx->pc = 0x112B50u;
label_112b50:
    // 0x112b50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112b54:
    // 0x112b54: 0xc07d3d6  jal         func_1F4F58
label_112b58:
    if (ctx->pc == 0x112B58u) {
        ctx->pc = 0x112B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B54u;
        // 0x112b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B5Cu;
        goto label_112b5c;
    }
    ctx->pc = 0x112B54u;
    SET_GPR_U32(ctx, 31, 0x112B5Cu);
    ctx->pc = 0x112B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B54u;
    // 0x112b58: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x112B54u, 0x112B5Cu)) {
        return;
    }
    ctx->pc = 0x112B5Cu;
label_112b5c:
    // 0x112b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_112b60:
    if (ctx->pc == 0x112B60u) {
        ctx->pc = 0x112B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B5Cu;
        // 0x112b60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B64u;
        goto label_112b64;
    }
    ctx->pc = 0x112B5Cu;
    {
        const bool branch_taken_0x112b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B5Cu;
        // 0x112b60: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b5c) {
            ctx->pc = 0x112B70u;
            goto label_112b70;
        }
    }
    ctx->pc = 0x112B64u;
label_112b64:
    // 0x112b64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112b68:
    // 0x112b68: 0xc07d316  jal         func_1F4C58
label_112b6c:
    if (ctx->pc == 0x112B6Cu) {
        ctx->pc = 0x112B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B68u;
        // 0x112b6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B70u;
        goto label_112b70;
    }
    ctx->pc = 0x112B68u;
    SET_GPR_U32(ctx, 31, 0x112B70u);
    ctx->pc = 0x112B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112B68u;
    // 0x112b6c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4C58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4C58u, 0x112B68u, 0x112B70u)) {
        return;
    }
    ctx->pc = 0x112B70u;
label_112b70:
    // 0x112b70: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x112b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_112b74:
    // 0x112b74: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x112b74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_112b78:
    // 0x112b78: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x112b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_112b7c:
    // 0x112b7c: 0x40f809  jalr        $v0
label_112b80:
    if (ctx->pc == 0x112B80u) {
        ctx->pc = 0x112B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B7Cu;
        // 0x112b80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B84u;
        goto label_112b84;
    }
    ctx->pc = 0x112B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112B84u);
        ctx->pc = 0x112B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B7Cu;
        // 0x112b80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B7Cu, 0x112B84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112B84u;
label_112b84:
    // 0x112b84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x112b84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112b88:
    // 0x112b88: 0x1a400019  blez        $s2, . + 4 + (0x19 << 2)
label_112b8c:
    if (ctx->pc == 0x112B8Cu) {
        ctx->pc = 0x112B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B88u;
        // 0x112b8c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112B90u;
        goto label_112b90;
    }
    ctx->pc = 0x112B88u;
    {
        const bool branch_taken_0x112b88 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x112B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B88u;
        // 0x112b8c: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b88) {
            ctx->pc = 0x112BF0u;
            goto label_112bf0;
        }
    }
    ctx->pc = 0x112B90u;
label_112b90:
    // 0x112b90: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x112b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_112b94:
    // 0x112b94: 0x84640078  lh          $a0, 0x78($v1)
    ctx->pc = 0x112b94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 120)));
label_112b98:
    // 0x112b98: 0x8c62007c  lw          $v0, 0x7C($v1)
    ctx->pc = 0x112b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 124)));
label_112b9c:
    // 0x112b9c: 0x40f809  jalr        $v0
label_112ba0:
    if (ctx->pc == 0x112BA0u) {
        ctx->pc = 0x112BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B9Cu;
        // 0x112ba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BA4u;
        goto label_112ba4;
    }
    ctx->pc = 0x112B9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x112BA4u);
        ctx->pc = 0x112BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112B9Cu;
        // 0x112ba0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112B9Cu, 0x112BA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112BA4u;
label_112ba4:
    // 0x112ba4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x112ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112ba8:
    // 0x112ba8: 0x12200026  beqz        $s1, . + 4 + (0x26 << 2)
label_112bac:
    if (ctx->pc == 0x112BACu) {
        ctx->pc = 0x112BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BA8u;
        // 0x112bac: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BB0u;
        goto label_112bb0;
    }
    ctx->pc = 0x112BA8u;
    {
        const bool branch_taken_0x112ba8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BA8u;
        // 0x112bac: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ba8) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112BB0u;
label_112bb0:
    // 0x112bb0: 0x8e908308  lw          $s0, -0x7CF8($s4)
    ctx->pc = 0x112bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935304)));
label_112bb4:
    // 0x112bb4: 0xc07d234  jal         func_1F48D0
label_112bb8:
    if (ctx->pc == 0x112BB8u) {
        ctx->pc = 0x112BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BB4u;
        // 0x112bb8: 0x2453aae8  addiu       $s3, $v0, -0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BBCu;
        goto label_112bbc;
    }
    ctx->pc = 0x112BB4u;
    SET_GPR_U32(ctx, 31, 0x112BBCu);
    ctx->pc = 0x112BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BB4u;
    // 0x112bb8: 0x2453aae8  addiu       $s3, $v0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x112BB4u, 0x112BBCu)) {
        return;
    }
    ctx->pc = 0x112BBCu;
label_112bbc:
    // 0x112bbc: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_112bc0:
    if (ctx->pc == 0x112BC0u) {
        ctx->pc = 0x112BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BBCu;
        // 0x112bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BC4u;
        goto label_112bc4;
    }
    ctx->pc = 0x112BBCu;
    {
        const bool branch_taken_0x112bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BBCu;
        // 0x112bc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bbc) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112BC4u;
label_112bc4:
    // 0x112bc4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112bc8:
    // 0x112bc8: 0xc07d3d6  jal         func_1F4F58
label_112bcc:
    if (ctx->pc == 0x112BCCu) {
        ctx->pc = 0x112BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BC8u;
        // 0x112bcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BD0u;
        goto label_112bd0;
    }
    ctx->pc = 0x112BC8u;
    SET_GPR_U32(ctx, 31, 0x112BD0u);
    ctx->pc = 0x112BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BC8u;
    // 0x112bcc: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x112BC8u, 0x112BD0u)) {
        return;
    }
    ctx->pc = 0x112BD0u;
label_112bd0:
    // 0x112bd0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_112bd4:
    if (ctx->pc == 0x112BD4u) {
        ctx->pc = 0x112BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD0u;
        // 0x112bd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BD8u;
        goto label_112bd8;
    }
    ctx->pc = 0x112BD0u;
    {
        const bool branch_taken_0x112bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BD0u;
        // 0x112bd4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bd0) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112BD8u;
label_112bd8:
    // 0x112bd8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112bdc:
    // 0x112bdc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x112bdcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_112be0:
    // 0x112be0: 0xc07d32a  jal         func_1F4CA8
label_112be4:
    if (ctx->pc == 0x112BE4u) {
        ctx->pc = 0x112BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE0u;
        // 0x112be4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BE8u;
        goto label_112be8;
    }
    ctx->pc = 0x112BE0u;
    SET_GPR_U32(ctx, 31, 0x112BE8u);
    ctx->pc = 0x112BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BE0u;
    // 0x112be4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CA8u, 0x112BE0u, 0x112BE8u)) {
        return;
    }
    ctx->pc = 0x112BE8u;
label_112be8:
    // 0x112be8: 0x10000017  b           . + 4 + (0x17 << 2)
label_112bec:
    if (ctx->pc == 0x112BECu) {
        ctx->pc = 0x112BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE8u;
        // 0x112bec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BF0u;
        goto label_112bf0;
    }
    ctx->pc = 0x112BE8u;
    {
        const bool branch_taken_0x112be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BE8u;
        // 0x112bec: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112be8) {
            ctx->pc = 0x112C48u;
            goto label_112c48;
        }
    }
    ctx->pc = 0x112BF0u;
label_112bf0:
    // 0x112bf0: 0x8e908308  lw          $s0, -0x7CF8($s4)
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294935304)));
label_112bf4:
    // 0x112bf4: 0xc07d234  jal         func_1F48D0
label_112bf8:
    if (ctx->pc == 0x112BF8u) {
        ctx->pc = 0x112BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BF4u;
        // 0x112bf8: 0x2451aae8  addiu       $s1, $v0, -0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112BFCu;
        goto label_112bfc;
    }
    ctx->pc = 0x112BF4u;
    SET_GPR_U32(ctx, 31, 0x112BFCu);
    ctx->pc = 0x112BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112BF4u;
    // 0x112bf8: 0x2451aae8  addiu       $s1, $v0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x112BF4u, 0x112BFCu)) {
        return;
    }
    ctx->pc = 0x112BFCu;
label_112bfc:
    // 0x112bfc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_112c00:
    if (ctx->pc == 0x112C00u) {
        ctx->pc = 0x112C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BFCu;
        // 0x112c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C04u;
        goto label_112c04;
    }
    ctx->pc = 0x112BFCu;
    {
        const bool branch_taken_0x112bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112BFCu;
        // 0x112c00: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bfc) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112C04u;
label_112c04:
    // 0x112c04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112c04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112c08:
    // 0x112c08: 0xc07d3d6  jal         func_1F4F58
label_112c0c:
    if (ctx->pc == 0x112C0Cu) {
        ctx->pc = 0x112C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C08u;
        // 0x112c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C10u;
        goto label_112c10;
    }
    ctx->pc = 0x112C08u;
    SET_GPR_U32(ctx, 31, 0x112C10u);
    ctx->pc = 0x112C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C08u;
    // 0x112c0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x112C08u, 0x112C10u)) {
        return;
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_112c14:
    if (ctx->pc == 0x112C14u) {
        ctx->pc = 0x112C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C10u;
        // 0x112c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C18u;
        goto label_112c18;
    }
    ctx->pc = 0x112C10u;
    {
        const bool branch_taken_0x112c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C10u;
        // 0x112c14: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c10) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112C18u;
label_112c18:
    // 0x112c18: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x112c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112c1c:
    // 0x112c1c: 0xc07d3a6  jal         func_1F4E98
label_112c20:
    if (ctx->pc == 0x112C20u) {
        ctx->pc = 0x112C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C1Cu;
        // 0x112c20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C24u;
        goto label_112c24;
    }
    ctx->pc = 0x112C1Cu;
    SET_GPR_U32(ctx, 31, 0x112C24u);
    ctx->pc = 0x112C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x112C1Cu;
    // 0x112c20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4E98u, 0x112C1Cu, 0x112C24u)) {
        return;
    }
    ctx->pc = 0x112C24u;
label_112c24:
    // 0x112c24: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x112c24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_112c28:
    // 0x112c28: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
label_112c2c:
    if (ctx->pc == 0x112C2Cu) {
        ctx->pc = 0x112C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C28u;
        // 0x112c2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C30u;
        goto label_112c30;
    }
    ctx->pc = 0x112C28u;
    {
        const bool branch_taken_0x112c28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C28u;
        // 0x112c2c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c28) {
            ctx->pc = 0x112C44u;
            goto label_112c44;
        }
    }
    ctx->pc = 0x112C30u;
label_112c30:
    // 0x112c30: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x112c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_112c34:
    // 0x112c34: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
label_112c38:
    // 0x112c38: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x112c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_112c3c:
    // 0x112c3c: 0x60f809  jalr        $v1
label_112c40:
    if (ctx->pc == 0x112C40u) {
        ctx->pc = 0x112C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C3Cu;
        // 0x112c40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C44u;
        goto label_112c44;
    }
    ctx->pc = 0x112C3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x112C44u);
        ctx->pc = 0x112C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C3Cu;
        // 0x112c40: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C3Cu, 0x112C44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x112C44u;
label_112c44:
    // 0x112c44: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x112c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_112c48:
    // 0x112c48: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x112c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_112c4c:
    // 0x112c4c: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x112c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_112c50:
    // 0x112c50: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x112c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_112c54:
    // 0x112c54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x112c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_112c58:
    // 0x112c58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x112c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_112c5c:
    // 0x112c5c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x112c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_112c60:
    // 0x112c60: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x112c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_112c64:
    // 0x112c64: 0x3e00008  jr          $ra
label_112c68:
    if (ctx->pc == 0x112C68u) {
        ctx->pc = 0x112C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C64u;
        // 0x112c68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x112C6Cu;
        goto label_112c6c;
    }
    ctx->pc = 0x112C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112C64u;
        // 0x112c68: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x112C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x112C6Cu;
label_112c6c:
    // 0x112c6c: 0x0  nop
    ctx->pc = 0x112c6cu;
    // NOP
    ctx->pc = 0x112c70u;
}
