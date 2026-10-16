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

// Function: sub_001A6148
// Address: 0x1a6148 - 0x1a6818
void sub_001A6148_0x1a6148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6148_0x1a6148");
#endif

    switch (ctx->pc) {
        case 0x1a6148u: goto label_1a6148;
        case 0x1a614cu: goto label_1a614c;
        case 0x1a6150u: goto label_1a6150;
        case 0x1a6154u: goto label_1a6154;
        case 0x1a6158u: goto label_1a6158;
        case 0x1a615cu: goto label_1a615c;
        case 0x1a6160u: goto label_1a6160;
        case 0x1a6164u: goto label_1a6164;
        case 0x1a6168u: goto label_1a6168;
        case 0x1a616cu: goto label_1a616c;
        case 0x1a6170u: goto label_1a6170;
        case 0x1a6174u: goto label_1a6174;
        case 0x1a6178u: goto label_1a6178;
        case 0x1a617cu: goto label_1a617c;
        case 0x1a6180u: goto label_1a6180;
        case 0x1a6184u: goto label_1a6184;
        case 0x1a6188u: goto label_1a6188;
        case 0x1a618cu: goto label_1a618c;
        case 0x1a6190u: goto label_1a6190;
        case 0x1a6194u: goto label_1a6194;
        case 0x1a6198u: goto label_1a6198;
        case 0x1a619cu: goto label_1a619c;
        case 0x1a61a0u: goto label_1a61a0;
        case 0x1a61a4u: goto label_1a61a4;
        case 0x1a61a8u: goto label_1a61a8;
        case 0x1a61acu: goto label_1a61ac;
        case 0x1a61b0u: goto label_1a61b0;
        case 0x1a61b4u: goto label_1a61b4;
        case 0x1a61b8u: goto label_1a61b8;
        case 0x1a61bcu: goto label_1a61bc;
        case 0x1a61c0u: goto label_1a61c0;
        case 0x1a61c4u: goto label_1a61c4;
        case 0x1a61c8u: goto label_1a61c8;
        case 0x1a61ccu: goto label_1a61cc;
        case 0x1a61d0u: goto label_1a61d0;
        case 0x1a61d4u: goto label_1a61d4;
        case 0x1a61d8u: goto label_1a61d8;
        case 0x1a61dcu: goto label_1a61dc;
        case 0x1a61e0u: goto label_1a61e0;
        case 0x1a61e4u: goto label_1a61e4;
        case 0x1a61e8u: goto label_1a61e8;
        case 0x1a61ecu: goto label_1a61ec;
        case 0x1a61f0u: goto label_1a61f0;
        case 0x1a61f4u: goto label_1a61f4;
        case 0x1a61f8u: goto label_1a61f8;
        case 0x1a61fcu: goto label_1a61fc;
        case 0x1a6200u: goto label_1a6200;
        case 0x1a6204u: goto label_1a6204;
        case 0x1a6208u: goto label_1a6208;
        case 0x1a620cu: goto label_1a620c;
        case 0x1a6210u: goto label_1a6210;
        case 0x1a6214u: goto label_1a6214;
        case 0x1a6218u: goto label_1a6218;
        case 0x1a621cu: goto label_1a621c;
        case 0x1a6220u: goto label_1a6220;
        case 0x1a6224u: goto label_1a6224;
        case 0x1a6228u: goto label_1a6228;
        case 0x1a622cu: goto label_1a622c;
        case 0x1a6230u: goto label_1a6230;
        case 0x1a6234u: goto label_1a6234;
        case 0x1a6238u: goto label_1a6238;
        case 0x1a623cu: goto label_1a623c;
        case 0x1a6240u: goto label_1a6240;
        case 0x1a6244u: goto label_1a6244;
        case 0x1a6248u: goto label_1a6248;
        case 0x1a624cu: goto label_1a624c;
        case 0x1a6250u: goto label_1a6250;
        case 0x1a6254u: goto label_1a6254;
        case 0x1a6258u: goto label_1a6258;
        case 0x1a625cu: goto label_1a625c;
        case 0x1a6260u: goto label_1a6260;
        case 0x1a6264u: goto label_1a6264;
        case 0x1a6268u: goto label_1a6268;
        case 0x1a626cu: goto label_1a626c;
        case 0x1a6270u: goto label_1a6270;
        case 0x1a6274u: goto label_1a6274;
        case 0x1a6278u: goto label_1a6278;
        case 0x1a627cu: goto label_1a627c;
        case 0x1a6280u: goto label_1a6280;
        case 0x1a6284u: goto label_1a6284;
        case 0x1a6288u: goto label_1a6288;
        case 0x1a628cu: goto label_1a628c;
        case 0x1a6290u: goto label_1a6290;
        case 0x1a6294u: goto label_1a6294;
        case 0x1a6298u: goto label_1a6298;
        case 0x1a629cu: goto label_1a629c;
        case 0x1a62a0u: goto label_1a62a0;
        case 0x1a62a4u: goto label_1a62a4;
        case 0x1a62a8u: goto label_1a62a8;
        case 0x1a62acu: goto label_1a62ac;
        case 0x1a62b0u: goto label_1a62b0;
        case 0x1a62b4u: goto label_1a62b4;
        case 0x1a62b8u: goto label_1a62b8;
        case 0x1a62bcu: goto label_1a62bc;
        case 0x1a62c0u: goto label_1a62c0;
        case 0x1a62c4u: goto label_1a62c4;
        case 0x1a62c8u: goto label_1a62c8;
        case 0x1a62ccu: goto label_1a62cc;
        case 0x1a62d0u: goto label_1a62d0;
        case 0x1a62d4u: goto label_1a62d4;
        case 0x1a62d8u: goto label_1a62d8;
        case 0x1a62dcu: goto label_1a62dc;
        case 0x1a62e0u: goto label_1a62e0;
        case 0x1a62e4u: goto label_1a62e4;
        case 0x1a62e8u: goto label_1a62e8;
        case 0x1a62ecu: goto label_1a62ec;
        case 0x1a62f0u: goto label_1a62f0;
        case 0x1a62f4u: goto label_1a62f4;
        case 0x1a62f8u: goto label_1a62f8;
        case 0x1a62fcu: goto label_1a62fc;
        case 0x1a6300u: goto label_1a6300;
        case 0x1a6304u: goto label_1a6304;
        case 0x1a6308u: goto label_1a6308;
        case 0x1a630cu: goto label_1a630c;
        case 0x1a6310u: goto label_1a6310;
        case 0x1a6314u: goto label_1a6314;
        case 0x1a6318u: goto label_1a6318;
        case 0x1a631cu: goto label_1a631c;
        case 0x1a6320u: goto label_1a6320;
        case 0x1a6324u: goto label_1a6324;
        case 0x1a6328u: goto label_1a6328;
        case 0x1a632cu: goto label_1a632c;
        case 0x1a6330u: goto label_1a6330;
        case 0x1a6334u: goto label_1a6334;
        case 0x1a6338u: goto label_1a6338;
        case 0x1a633cu: goto label_1a633c;
        case 0x1a6340u: goto label_1a6340;
        case 0x1a6344u: goto label_1a6344;
        case 0x1a6348u: goto label_1a6348;
        case 0x1a634cu: goto label_1a634c;
        case 0x1a6350u: goto label_1a6350;
        case 0x1a6354u: goto label_1a6354;
        case 0x1a6358u: goto label_1a6358;
        case 0x1a635cu: goto label_1a635c;
        case 0x1a6360u: goto label_1a6360;
        case 0x1a6364u: goto label_1a6364;
        case 0x1a6368u: goto label_1a6368;
        case 0x1a636cu: goto label_1a636c;
        case 0x1a6370u: goto label_1a6370;
        case 0x1a6374u: goto label_1a6374;
        case 0x1a6378u: goto label_1a6378;
        case 0x1a637cu: goto label_1a637c;
        case 0x1a6380u: goto label_1a6380;
        case 0x1a6384u: goto label_1a6384;
        case 0x1a6388u: goto label_1a6388;
        case 0x1a638cu: goto label_1a638c;
        case 0x1a6390u: goto label_1a6390;
        case 0x1a6394u: goto label_1a6394;
        case 0x1a6398u: goto label_1a6398;
        case 0x1a639cu: goto label_1a639c;
        case 0x1a63a0u: goto label_1a63a0;
        case 0x1a63a4u: goto label_1a63a4;
        case 0x1a63a8u: goto label_1a63a8;
        case 0x1a63acu: goto label_1a63ac;
        case 0x1a63b0u: goto label_1a63b0;
        case 0x1a63b4u: goto label_1a63b4;
        case 0x1a63b8u: goto label_1a63b8;
        case 0x1a63bcu: goto label_1a63bc;
        case 0x1a63c0u: goto label_1a63c0;
        case 0x1a63c4u: goto label_1a63c4;
        case 0x1a63c8u: goto label_1a63c8;
        case 0x1a63ccu: goto label_1a63cc;
        case 0x1a63d0u: goto label_1a63d0;
        case 0x1a63d4u: goto label_1a63d4;
        case 0x1a63d8u: goto label_1a63d8;
        case 0x1a63dcu: goto label_1a63dc;
        case 0x1a63e0u: goto label_1a63e0;
        case 0x1a63e4u: goto label_1a63e4;
        case 0x1a63e8u: goto label_1a63e8;
        case 0x1a63ecu: goto label_1a63ec;
        case 0x1a63f0u: goto label_1a63f0;
        case 0x1a63f4u: goto label_1a63f4;
        case 0x1a63f8u: goto label_1a63f8;
        case 0x1a63fcu: goto label_1a63fc;
        case 0x1a6400u: goto label_1a6400;
        case 0x1a6404u: goto label_1a6404;
        case 0x1a6408u: goto label_1a6408;
        case 0x1a640cu: goto label_1a640c;
        case 0x1a6410u: goto label_1a6410;
        case 0x1a6414u: goto label_1a6414;
        case 0x1a6418u: goto label_1a6418;
        case 0x1a641cu: goto label_1a641c;
        case 0x1a6420u: goto label_1a6420;
        case 0x1a6424u: goto label_1a6424;
        case 0x1a6428u: goto label_1a6428;
        case 0x1a642cu: goto label_1a642c;
        case 0x1a6430u: goto label_1a6430;
        case 0x1a6434u: goto label_1a6434;
        case 0x1a6438u: goto label_1a6438;
        case 0x1a643cu: goto label_1a643c;
        case 0x1a6440u: goto label_1a6440;
        case 0x1a6444u: goto label_1a6444;
        case 0x1a6448u: goto label_1a6448;
        case 0x1a644cu: goto label_1a644c;
        case 0x1a6450u: goto label_1a6450;
        case 0x1a6454u: goto label_1a6454;
        case 0x1a6458u: goto label_1a6458;
        case 0x1a645cu: goto label_1a645c;
        case 0x1a6460u: goto label_1a6460;
        case 0x1a6464u: goto label_1a6464;
        case 0x1a6468u: goto label_1a6468;
        case 0x1a646cu: goto label_1a646c;
        case 0x1a6470u: goto label_1a6470;
        case 0x1a6474u: goto label_1a6474;
        case 0x1a6478u: goto label_1a6478;
        case 0x1a647cu: goto label_1a647c;
        case 0x1a6480u: goto label_1a6480;
        case 0x1a6484u: goto label_1a6484;
        case 0x1a6488u: goto label_1a6488;
        case 0x1a648cu: goto label_1a648c;
        case 0x1a6490u: goto label_1a6490;
        case 0x1a6494u: goto label_1a6494;
        case 0x1a6498u: goto label_1a6498;
        case 0x1a649cu: goto label_1a649c;
        case 0x1a64a0u: goto label_1a64a0;
        case 0x1a64a4u: goto label_1a64a4;
        case 0x1a64a8u: goto label_1a64a8;
        case 0x1a64acu: goto label_1a64ac;
        case 0x1a64b0u: goto label_1a64b0;
        case 0x1a64b4u: goto label_1a64b4;
        case 0x1a64b8u: goto label_1a64b8;
        case 0x1a64bcu: goto label_1a64bc;
        case 0x1a64c0u: goto label_1a64c0;
        case 0x1a64c4u: goto label_1a64c4;
        case 0x1a64c8u: goto label_1a64c8;
        case 0x1a64ccu: goto label_1a64cc;
        case 0x1a64d0u: goto label_1a64d0;
        case 0x1a64d4u: goto label_1a64d4;
        case 0x1a64d8u: goto label_1a64d8;
        case 0x1a64dcu: goto label_1a64dc;
        case 0x1a64e0u: goto label_1a64e0;
        case 0x1a64e4u: goto label_1a64e4;
        case 0x1a64e8u: goto label_1a64e8;
        case 0x1a64ecu: goto label_1a64ec;
        case 0x1a64f0u: goto label_1a64f0;
        case 0x1a64f4u: goto label_1a64f4;
        case 0x1a64f8u: goto label_1a64f8;
        case 0x1a64fcu: goto label_1a64fc;
        case 0x1a6500u: goto label_1a6500;
        case 0x1a6504u: goto label_1a6504;
        case 0x1a6508u: goto label_1a6508;
        case 0x1a650cu: goto label_1a650c;
        case 0x1a6510u: goto label_1a6510;
        case 0x1a6514u: goto label_1a6514;
        case 0x1a6518u: goto label_1a6518;
        case 0x1a651cu: goto label_1a651c;
        case 0x1a6520u: goto label_1a6520;
        case 0x1a6524u: goto label_1a6524;
        case 0x1a6528u: goto label_1a6528;
        case 0x1a652cu: goto label_1a652c;
        case 0x1a6530u: goto label_1a6530;
        case 0x1a6534u: goto label_1a6534;
        case 0x1a6538u: goto label_1a6538;
        case 0x1a653cu: goto label_1a653c;
        case 0x1a6540u: goto label_1a6540;
        case 0x1a6544u: goto label_1a6544;
        case 0x1a6548u: goto label_1a6548;
        case 0x1a654cu: goto label_1a654c;
        case 0x1a6550u: goto label_1a6550;
        case 0x1a6554u: goto label_1a6554;
        case 0x1a6558u: goto label_1a6558;
        case 0x1a655cu: goto label_1a655c;
        case 0x1a6560u: goto label_1a6560;
        case 0x1a6564u: goto label_1a6564;
        case 0x1a6568u: goto label_1a6568;
        case 0x1a656cu: goto label_1a656c;
        case 0x1a6570u: goto label_1a6570;
        case 0x1a6574u: goto label_1a6574;
        case 0x1a6578u: goto label_1a6578;
        case 0x1a657cu: goto label_1a657c;
        case 0x1a6580u: goto label_1a6580;
        case 0x1a6584u: goto label_1a6584;
        case 0x1a6588u: goto label_1a6588;
        case 0x1a658cu: goto label_1a658c;
        case 0x1a6590u: goto label_1a6590;
        case 0x1a6594u: goto label_1a6594;
        case 0x1a6598u: goto label_1a6598;
        case 0x1a659cu: goto label_1a659c;
        case 0x1a65a0u: goto label_1a65a0;
        case 0x1a65a4u: goto label_1a65a4;
        case 0x1a65a8u: goto label_1a65a8;
        case 0x1a65acu: goto label_1a65ac;
        case 0x1a65b0u: goto label_1a65b0;
        case 0x1a65b4u: goto label_1a65b4;
        case 0x1a65b8u: goto label_1a65b8;
        case 0x1a65bcu: goto label_1a65bc;
        case 0x1a65c0u: goto label_1a65c0;
        case 0x1a65c4u: goto label_1a65c4;
        case 0x1a65c8u: goto label_1a65c8;
        case 0x1a65ccu: goto label_1a65cc;
        case 0x1a65d0u: goto label_1a65d0;
        case 0x1a65d4u: goto label_1a65d4;
        case 0x1a65d8u: goto label_1a65d8;
        case 0x1a65dcu: goto label_1a65dc;
        case 0x1a65e0u: goto label_1a65e0;
        case 0x1a65e4u: goto label_1a65e4;
        case 0x1a65e8u: goto label_1a65e8;
        case 0x1a65ecu: goto label_1a65ec;
        case 0x1a65f0u: goto label_1a65f0;
        case 0x1a65f4u: goto label_1a65f4;
        case 0x1a65f8u: goto label_1a65f8;
        case 0x1a65fcu: goto label_1a65fc;
        case 0x1a6600u: goto label_1a6600;
        case 0x1a6604u: goto label_1a6604;
        case 0x1a6608u: goto label_1a6608;
        case 0x1a660cu: goto label_1a660c;
        case 0x1a6610u: goto label_1a6610;
        case 0x1a6614u: goto label_1a6614;
        case 0x1a6618u: goto label_1a6618;
        case 0x1a661cu: goto label_1a661c;
        case 0x1a6620u: goto label_1a6620;
        case 0x1a6624u: goto label_1a6624;
        case 0x1a6628u: goto label_1a6628;
        case 0x1a662cu: goto label_1a662c;
        case 0x1a6630u: goto label_1a6630;
        case 0x1a6634u: goto label_1a6634;
        case 0x1a6638u: goto label_1a6638;
        case 0x1a663cu: goto label_1a663c;
        case 0x1a6640u: goto label_1a6640;
        case 0x1a6644u: goto label_1a6644;
        case 0x1a6648u: goto label_1a6648;
        case 0x1a664cu: goto label_1a664c;
        case 0x1a6650u: goto label_1a6650;
        case 0x1a6654u: goto label_1a6654;
        case 0x1a6658u: goto label_1a6658;
        case 0x1a665cu: goto label_1a665c;
        case 0x1a6660u: goto label_1a6660;
        case 0x1a6664u: goto label_1a6664;
        case 0x1a6668u: goto label_1a6668;
        case 0x1a666cu: goto label_1a666c;
        case 0x1a6670u: goto label_1a6670;
        case 0x1a6674u: goto label_1a6674;
        case 0x1a6678u: goto label_1a6678;
        case 0x1a667cu: goto label_1a667c;
        case 0x1a6680u: goto label_1a6680;
        case 0x1a6684u: goto label_1a6684;
        case 0x1a6688u: goto label_1a6688;
        case 0x1a668cu: goto label_1a668c;
        case 0x1a6690u: goto label_1a6690;
        case 0x1a6694u: goto label_1a6694;
        case 0x1a6698u: goto label_1a6698;
        case 0x1a669cu: goto label_1a669c;
        case 0x1a66a0u: goto label_1a66a0;
        case 0x1a66a4u: goto label_1a66a4;
        case 0x1a66a8u: goto label_1a66a8;
        case 0x1a66acu: goto label_1a66ac;
        case 0x1a66b0u: goto label_1a66b0;
        case 0x1a66b4u: goto label_1a66b4;
        case 0x1a66b8u: goto label_1a66b8;
        case 0x1a66bcu: goto label_1a66bc;
        case 0x1a66c0u: goto label_1a66c0;
        case 0x1a66c4u: goto label_1a66c4;
        case 0x1a66c8u: goto label_1a66c8;
        case 0x1a66ccu: goto label_1a66cc;
        case 0x1a66d0u: goto label_1a66d0;
        case 0x1a66d4u: goto label_1a66d4;
        case 0x1a66d8u: goto label_1a66d8;
        case 0x1a66dcu: goto label_1a66dc;
        case 0x1a66e0u: goto label_1a66e0;
        case 0x1a66e4u: goto label_1a66e4;
        case 0x1a66e8u: goto label_1a66e8;
        case 0x1a66ecu: goto label_1a66ec;
        case 0x1a66f0u: goto label_1a66f0;
        case 0x1a66f4u: goto label_1a66f4;
        case 0x1a66f8u: goto label_1a66f8;
        case 0x1a66fcu: goto label_1a66fc;
        case 0x1a6700u: goto label_1a6700;
        case 0x1a6704u: goto label_1a6704;
        case 0x1a6708u: goto label_1a6708;
        case 0x1a670cu: goto label_1a670c;
        case 0x1a6710u: goto label_1a6710;
        case 0x1a6714u: goto label_1a6714;
        case 0x1a6718u: goto label_1a6718;
        case 0x1a671cu: goto label_1a671c;
        case 0x1a6720u: goto label_1a6720;
        case 0x1a6724u: goto label_1a6724;
        case 0x1a6728u: goto label_1a6728;
        case 0x1a672cu: goto label_1a672c;
        case 0x1a6730u: goto label_1a6730;
        case 0x1a6734u: goto label_1a6734;
        case 0x1a6738u: goto label_1a6738;
        case 0x1a673cu: goto label_1a673c;
        case 0x1a6740u: goto label_1a6740;
        case 0x1a6744u: goto label_1a6744;
        case 0x1a6748u: goto label_1a6748;
        case 0x1a674cu: goto label_1a674c;
        case 0x1a6750u: goto label_1a6750;
        case 0x1a6754u: goto label_1a6754;
        case 0x1a6758u: goto label_1a6758;
        case 0x1a675cu: goto label_1a675c;
        case 0x1a6760u: goto label_1a6760;
        case 0x1a6764u: goto label_1a6764;
        case 0x1a6768u: goto label_1a6768;
        case 0x1a676cu: goto label_1a676c;
        case 0x1a6770u: goto label_1a6770;
        case 0x1a6774u: goto label_1a6774;
        case 0x1a6778u: goto label_1a6778;
        case 0x1a677cu: goto label_1a677c;
        case 0x1a6780u: goto label_1a6780;
        case 0x1a6784u: goto label_1a6784;
        case 0x1a6788u: goto label_1a6788;
        case 0x1a678cu: goto label_1a678c;
        case 0x1a6790u: goto label_1a6790;
        case 0x1a6794u: goto label_1a6794;
        case 0x1a6798u: goto label_1a6798;
        case 0x1a679cu: goto label_1a679c;
        case 0x1a67a0u: goto label_1a67a0;
        case 0x1a67a4u: goto label_1a67a4;
        case 0x1a67a8u: goto label_1a67a8;
        case 0x1a67acu: goto label_1a67ac;
        case 0x1a67b0u: goto label_1a67b0;
        case 0x1a67b4u: goto label_1a67b4;
        case 0x1a67b8u: goto label_1a67b8;
        case 0x1a67bcu: goto label_1a67bc;
        case 0x1a67c0u: goto label_1a67c0;
        case 0x1a67c4u: goto label_1a67c4;
        case 0x1a67c8u: goto label_1a67c8;
        case 0x1a67ccu: goto label_1a67cc;
        case 0x1a67d0u: goto label_1a67d0;
        case 0x1a67d4u: goto label_1a67d4;
        case 0x1a67d8u: goto label_1a67d8;
        case 0x1a67dcu: goto label_1a67dc;
        case 0x1a67e0u: goto label_1a67e0;
        case 0x1a67e4u: goto label_1a67e4;
        case 0x1a67e8u: goto label_1a67e8;
        case 0x1a67ecu: goto label_1a67ec;
        case 0x1a67f0u: goto label_1a67f0;
        case 0x1a67f4u: goto label_1a67f4;
        case 0x1a67f8u: goto label_1a67f8;
        case 0x1a67fcu: goto label_1a67fc;
        case 0x1a6800u: goto label_1a6800;
        case 0x1a6804u: goto label_1a6804;
        case 0x1a6808u: goto label_1a6808;
        case 0x1a680cu: goto label_1a680c;
        case 0x1a6810u: goto label_1a6810;
        case 0x1a6814u: goto label_1a6814;
        default: break;
    }

    ctx->pc = 0x1a6148u;

label_1a6148:
    // 0x1a6148: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x1a6148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_1a614c:
    // 0x1a614c: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x1a614cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_1a6150:
    // 0x1a6150: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x1a6150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_1a6154:
    // 0x1a6154: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1a6154u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a6158:
    // 0x1a6158: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x1a6158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_1a615c:
    // 0x1a615c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1a615cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a6160:
    // 0x1a6160: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x1a6160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_1a6164:
    // 0x1a6164: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a6164u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a6168:
    // 0x1a6168: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x1a6168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_1a616c:
    // 0x1a616c: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x1a616cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_1a6170:
    // 0x1a6170: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x1a6170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_1a6174:
    // 0x1a6174: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x1a6174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_1a6178:
    // 0x1a6178: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x1a6178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_1a617c:
    // 0x1a617c: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1a617cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_1a6180:
    // 0x1a6180: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x1a6180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_1a6184:
    // 0x1a6184: 0x8e760014  lw          $s6, 0x14($s3)
    ctx->pc = 0x1a6184u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1a6188:
    // 0x1a6188: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a6188u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a618c:
    // 0x1a618c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x1a618cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1a6190:
    // 0x1a6190: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x1a6190u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_1a6194:
    // 0x1a6194: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x1a6194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_1a6198:
    // 0x1a6198: 0x40f809  jalr        $v0
label_1a619c:
    if (ctx->pc == 0x1A619Cu) {
        ctx->pc = 0x1A619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6198u;
        // 0x1a619c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61A0u;
        goto label_1a61a0;
    }
    ctx->pc = 0x1A6198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A61A0u);
        ctx->pc = 0x1A619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6198u;
        // 0x1a619c: 0x2c42021  addu        $a0, $s6, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6198u, 0x1A61A0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A61A0u;
label_1a61a0:
    // 0x1a61a0: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_1a61a4:
    if (ctx->pc == 0x1A61A4u) {
        ctx->pc = 0x1A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A0u;
        // 0x1a61a4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A61A8u;
        goto label_1a61a8;
    }
    ctx->pc = 0x1A61A0u;
    {
        const bool branch_taken_0x1a61a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A61A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61A0u;
        // 0x1a61a4: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a61a0) {
            ctx->pc = 0x1A67D8u;
            goto label_1a67d8;
        }
    }
    ctx->pc = 0x1A61A8u;
label_1a61a8:
    // 0x1a61a8: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x1a61a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1a61ac:
    // 0x1a61ac: 0x26630060  addiu       $v1, $s3, 0x60
    ctx->pc = 0x1a61acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 96));
label_1a61b0:
    // 0x1a61b0: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x1a61b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1a61b4:
    // 0x1a61b4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1a61b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1a61b8:
    // 0x1a61b8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1a61b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1a61bc:
    // 0x1a61bc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1a61bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1a61c0:
    // 0x1a61c0: 0x241e0030  addiu       $fp, $zero, 0x30
    ctx->pc = 0x1a61c0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1a61c4:
    // 0x1a61c4: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x1a61c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
label_1a61c8:
    // 0x1a61c8: 0x2417000c  addiu       $s7, $zero, 0xC
    ctx->pc = 0x1a61c8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a61cc:
    // 0x1a61cc: 0xafa30118  sw          $v1, 0x118($sp)
    ctx->pc = 0x1a61ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 3));
label_1a61d0:
    // 0x1a61d0: 0xafa4011c  sw          $a0, 0x11C($sp)
    ctx->pc = 0x1a61d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 4));
label_1a61d4:
    // 0x1a61d4: 0xafa50120  sw          $a1, 0x120($sp)
    ctx->pc = 0x1a61d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 5));
label_1a61d8:
    // 0x1a61d8: 0x8e670014  lw          $a3, 0x14($s3)
    ctx->pc = 0x1a61d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_1a61dc:
    // 0x1a61dc: 0x0  nop
    ctx->pc = 0x1a61dcu;
    // NOP
label_1a61e0:
    // 0x1a61e0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a61e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a61e4:
    // 0x1a61e4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a61e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a61e8:
    // 0x1a61e8: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a61e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a61ec:
    // 0x1a61ec: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1a61ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1a61f0:
    // 0x1a61f0: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a61f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a61f4:
    // 0x1a61f4: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a61f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a61f8:
    // 0x1a61f8: 0x40f809  jalr        $v0
label_1a61fc:
    if (ctx->pc == 0x1A61FCu) {
        ctx->pc = 0x1A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F8u;
        // 0x1a61fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6200u;
        goto label_1a6200;
    }
    ctx->pc = 0x1A61F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6200u);
        ctx->pc = 0x1A61FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A61F8u;
        // 0x1a61fc: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A61F8u, 0x1A6200u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6200u;
label_1a6200:
    // 0x1a6200: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1a6200u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6204:
    // 0x1a6204: 0x11200170  beqz        $t1, . + 4 + (0x170 << 2)
label_1a6208:
    if (ctx->pc == 0x1A6208u) {
        ctx->pc = 0x1A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6204u;
        // 0x1a6208: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A620Cu;
        goto label_1a620c;
    }
    ctx->pc = 0x1A6204u;
    {
        const bool branch_taken_0x1a6204 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6204u;
        // 0x1a6208: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6204) {
            ctx->pc = 0x1A67C8u;
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A620Cu;
label_1a620c:
    // 0x1a620c: 0x9522002e  lhu         $v0, 0x2E($t1)
    ctx->pc = 0x1a620cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 46)));
label_1a6210:
    // 0x1a6210: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1a6210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1a6214:
    // 0x1a6214: 0x5440016d  bnel        $v0, $zero, . + 4 + (0x16D << 2)
label_1a6218:
    if (ctx->pc == 0x1A6218u) {
        ctx->pc = 0x1A6218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6214u;
        // 0x1a6218: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A621Cu;
        goto label_1a621c;
    }
    ctx->pc = 0x1A6214u;
    {
        const bool branch_taken_0x1a6214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6214) {
            ctx->pc = 0x1A6218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6214u;
            // 0x1a6218: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A67CCu;
            goto label_1a67cc;
        }
    }
    ctx->pc = 0x1A621Cu;
label_1a621c:
    // 0x1a621c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1a621cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1a6220:
    // 0x1a6220: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1a6224:
    if (ctx->pc == 0x1A6224u) {
        ctx->pc = 0x1A6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6220u;
        // 0x1a6224: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6228u;
        goto label_1a6228;
    }
    ctx->pc = 0x1A6220u;
    {
        const bool branch_taken_0x1a6220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6220) {
            ctx->pc = 0x1A6224u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6220u;
            // 0x1a6224: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6238u;
            goto label_1a6238;
        }
    }
    ctx->pc = 0x1A6228u;
label_1a6228:
    // 0x1a6228: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a6228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a622c:
    // 0x1a622c: 0x50490167  beql        $v0, $t1, . + 4 + (0x167 << 2)
label_1a6230:
    if (ctx->pc == 0x1A6230u) {
        ctx->pc = 0x1A6230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A622Cu;
        // 0x1a6230: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6234u;
        goto label_1a6234;
    }
    ctx->pc = 0x1A622Cu;
    {
        const bool branch_taken_0x1a622c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1a622c) {
            ctx->pc = 0x1A6230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A622Cu;
            // 0x1a6230: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A67CCu;
            goto label_1a67cc;
        }
    }
    ctx->pc = 0x1A6234u;
label_1a6234:
    // 0x1a6234: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1a6234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6238:
    // 0x1a6238: 0xafa90000  sw          $t1, 0x0($sp)
    ctx->pc = 0x1a6238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
label_1a623c:
    // 0x1a623c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_1a6240:
    if (ctx->pc == 0x1A6240u) {
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6244u;
        goto label_1a6244;
    }
    ctx->pc = 0x1A623Cu;
    {
        const bool branch_taken_0x1a623c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A623Cu;
        // 0x1a6240: 0xafb10004  sw          $s1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a623c) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A6244u;
label_1a6244:
    // 0x1a6244: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1a6244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a6248:
    // 0x1a6248: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a624c:
    if (ctx->pc == 0x1A624Cu) {
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6250u;
        goto label_1a6250;
    }
    ctx->pc = 0x1A6248u;
    {
        const bool branch_taken_0x1a6248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A624Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6248u;
        // 0x1a624c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6248) {
            ctx->pc = 0x1A6278u;
            goto label_1a6278;
        }
    }
    ctx->pc = 0x1A6250u;
label_1a6250:
    // 0x1a6250: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_1a6254:
    if (ctx->pc == 0x1A6254u) {
        ctx->pc = 0x1A6254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6250u;
        // 0x1a6254: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6258u;
        goto label_1a6258;
    }
    ctx->pc = 0x1A6250u;
    {
        const bool branch_taken_0x1a6250 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6250) {
            ctx->pc = 0x1A6254u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6250u;
            // 0x1a6254: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6258u;
            goto label_1a6258;
        }
    }
    ctx->pc = 0x1A6258u;
label_1a6258:
    // 0x1a6258: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x1a6258u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a625c:
    // 0x1a625c: 0x2812  mflo        $a1
    ctx->pc = 0x1a625cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1a6260:
    // 0x1a6260: 0x4a20006  bltzl       $a1, . + 4 + (0x6 << 2)
label_1a6264:
    if (ctx->pc == 0x1A6264u) {
        ctx->pc = 0x1A6264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6260u;
        // 0x1a6264: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6268u;
        goto label_1a6268;
    }
    ctx->pc = 0x1A6260u;
    {
        const bool branch_taken_0x1a6260 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x1a6260) {
            ctx->pc = 0x1A6264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6260u;
            // 0x1a6264: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A627Cu;
            goto label_1a627c;
        }
    }
    ctx->pc = 0x1A6268u;
label_1a6268:
    // 0x1a6268: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1a6268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1a626c:
    // 0x1a626c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1a626cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a6270:
    // 0x1a6270: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1a6274:
    if (ctx->pc == 0x1A6274u) {
        ctx->pc = 0x1A6274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6270u;
        // 0x1a6274: 0x9522002a  lhu         $v0, 0x2A($t1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6278u;
        goto label_1a6278;
    }
    ctx->pc = 0x1A6270u;
    {
        const bool branch_taken_0x1a6270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6270) {
            ctx->pc = 0x1A6274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6270u;
            // 0x1a6274: 0x9522002a  lhu         $v0, 0x2A($t1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6280u;
            goto label_1a6280;
        }
    }
    ctx->pc = 0x1A6278u;
label_1a6278:
    // 0x1a6278: 0x3405ffff  ori         $a1, $zero, 0xFFFF
    ctx->pc = 0x1a6278u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a627c:
    // 0x1a627c: 0x9522002a  lhu         $v0, 0x2A($t1)
    ctx->pc = 0x1a627cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 42)));
label_1a6280:
    // 0x1a6280: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1a6280u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_1a6284:
    // 0x1a6284: 0x9524002c  lhu         $a0, 0x2C($t1)
    ctx->pc = 0x1a6284u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 44)));
label_1a6288:
    // 0x1a6288: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a6288u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a628c:
    // 0x1a628c: 0x451026  xor         $v0, $v0, $a1
    ctx->pc = 0x1a628cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
label_1a6290:
    // 0x1a6290: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1a6290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6294:
    // 0x1a6294: 0x852026  xor         $a0, $a0, $a1
    ctx->pc = 0x1a6294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 5));
label_1a6298:
    // 0x1a6298: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a6298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1a629c:
    // 0x1a629c: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x1a629cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0));
label_1a62a0:
    // 0x1a62a0: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1a62a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1a62a4:
    // 0x1a62a4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a62a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_1a62a8:
    // 0x1a62a8: 0x14a30059  bne         $a1, $v1, . + 4 + (0x59 << 2)
label_1a62ac:
    if (ctx->pc == 0x1A62ACu) {
        ctx->pc = 0x1A62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62A8u;
        // 0x1a62ac: 0xe4a80a  movz        $s5, $a3, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A62B0u;
        goto label_1a62b0;
    }
    ctx->pc = 0x1A62A8u;
    {
        const bool branch_taken_0x1a62a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A62ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A62A8u;
        // 0x1a62ac: 0xe4a80a  movz        $s5, $a3, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a62a8) {
            ctx->pc = 0x1A6410u;
            goto label_1a6410;
        }
    }
    ctx->pc = 0x1A62B0u;
label_1a62b0:
    // 0x1a62b0: 0x26060001  addiu       $a2, $s0, 0x1
    ctx->pc = 0x1a62b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a62b4:
    // 0x1a62b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a62b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a62b8:
    // 0x1a62b8: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x1a62b8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1a62bc:
    // 0x1a62bc: 0x2171818  mult        $v1, $s0, $s7
    ctx->pc = 0x1a62bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a62c0:
    // 0x1a62c0: 0xc4100a  movz        $v0, $a2, $a0
    ctx->pc = 0x1a62c0u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6));
label_1a62c4:
    // 0x1a62c4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1a62c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a62c8:
    // 0x1a62c8: 0x572018  mult        $a0, $v0, $s7
    ctx->pc = 0x1a62c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_1a62cc:
    // 0x1a62cc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x1a62ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1a62d0:
    // 0x1a62d0: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1a62d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a62d4:
    // 0x1a62d4: 0x6865000b  ldl         $a1, 0xB($v1)
    ctx->pc = 0x1a62d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a62d8:
    // 0x1a62d8: 0x6c650004  ldr         $a1, 0x4($v1)
    ctx->pc = 0x1a62d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a62dc:
    // 0x1a62dc: 0x8c67000c  lw          $a3, 0xC($v1)
    ctx->pc = 0x1a62dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a62e0:
    // 0x1a62e0: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x1a62e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a62e4:
    // 0x1a62e4: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x1a62e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a62e8:
    // 0x1a62e8: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x1a62e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_1a62ec:
    // 0x1a62ec: 0x684b000b  ldl         $t3, 0xB($v0)
    ctx->pc = 0x1a62ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1a62f0:
    // 0x1a62f0: 0x6c4b0004  ldr         $t3, 0x4($v0)
    ctx->pc = 0x1a62f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_1a62f4:
    // 0x1a62f4: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x1a62f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1a62f8:
    // 0x1a62f8: 0xb3ab0047  sdl         $t3, 0x47($sp)
    ctx->pc = 0x1a62f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a62fc:
    // 0x1a62fc: 0xb7ab0040  sdr         $t3, 0x40($sp)
    ctx->pc = 0x1a62fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6300:
    // 0x1a6300: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x1a6300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_1a6304:
    // 0x1a6304: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x1a6304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6308:
    // 0x1a6308: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x1a6308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a630c:
    // 0x1a630c: 0x8fa70114  lw          $a3, 0x114($sp)
    ctx->pc = 0x1a630cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
label_1a6310:
    // 0x1a6310: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a6310u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a6314:
    // 0x1a6314: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x1a6314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6318:
    // 0x1a6318: 0xc7a30048  lwc1        $f3, 0x48($sp)
    ctx->pc = 0x1a6318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a631c:
    // 0x1a631c: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a631cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a6320:
    // 0x1a6320: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x1a6320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6324:
    // 0x1a6324: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a6324u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a6328:
    // 0x1a6328: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x1a6328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a632c:
    // 0x1a632c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x1a632cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6330:
    // 0x1a6330: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a6330u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a6334:
    // 0x1a6334: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x1a6334u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a6338:
    // 0x1a6338: 0x6ba80067  ldl         $t0, 0x67($sp)
    ctx->pc = 0x1a6338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1a633c:
    // 0x1a633c: 0x6fa80060  ldr         $t0, 0x60($sp)
    ctx->pc = 0x1a633cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1a6340:
    // 0x1a6340: 0x8faa0068  lw          $t2, 0x68($sp)
    ctx->pc = 0x1a6340u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a6344:
    // 0x1a6344: 0xb3a80057  sdl         $t0, 0x57($sp)
    ctx->pc = 0x1a6344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6348:
    // 0x1a6348: 0xb7a80050  sdr         $t0, 0x50($sp)
    ctx->pc = 0x1a6348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a634c:
    // 0x1a634c: 0xafaa0058  sw          $t2, 0x58($sp)
    ctx->pc = 0x1a634cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 10));
label_1a6350:
    // 0x1a6350: 0xc7a10050  lwc1        $f1, 0x50($sp)
    ctx->pc = 0x1a6350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6354:
    // 0x1a6354: 0xc7a20054  lwc1        $f2, 0x54($sp)
    ctx->pc = 0x1a6354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6358:
    // 0x1a6358: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a6358u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a635c:
    // 0x1a635c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1a635cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6360:
    // 0x1a6360: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1a6360u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1a6364:
    // 0x1a6364: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a6364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a6368:
    // 0x1a6368: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x1a6368u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_1a636c:
    // 0x1a636c: 0xe7a20064  swc1        $f2, 0x64($sp)
    ctx->pc = 0x1a636cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_1a6370:
    // 0x1a6370: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x1a6370u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_1a6374:
    // 0x1a6374: 0x6ba30067  ldl         $v1, 0x67($sp)
    ctx->pc = 0x1a6374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a6378:
    // 0x1a6378: 0x6fa30060  ldr         $v1, 0x60($sp)
    ctx->pc = 0x1a6378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a637c:
    // 0x1a637c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1a637cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_1a6380:
    // 0x1a6380: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x1a6380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6384:
    // 0x1a6384: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x1a6384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6388:
    // 0x1a6388: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x1a6388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_1a638c:
    // 0x1a638c: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x1a638cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6390:
    // 0x1a6390: 0xc7a00020  lwc1        $f0, 0x20($sp)
    ctx->pc = 0x1a6390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6394:
    // 0x1a6394: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x1a6394u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1a6398:
    // 0x1a6398: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1a6398u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1a639c:
    // 0x1a639c: 0xc7a20024  lwc1        $f2, 0x24($sp)
    ctx->pc = 0x1a639cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a63a0:
    // 0x1a63a0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x1a63a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a63a4:
    // 0x1a63a4: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x1a63a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_1a63a8:
    // 0x1a63a8: 0xc5000004  lwc1        $f0, 0x4($t0)
    ctx->pc = 0x1a63a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a63ac:
    // 0x1a63ac: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1a63acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1a63b0:
    // 0x1a63b0: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x1a63b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_1a63b4:
    // 0x1a63b4: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1a63b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a63b8:
    // 0x1a63b8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a63b8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a63bc:
    // 0x1a63bc: 0xe7a10048  swc1        $f1, 0x48($sp)
    ctx->pc = 0x1a63bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_1a63c0:
    // 0x1a63c0: 0x6baa0047  ldl         $t2, 0x47($sp)
    ctx->pc = 0x1a63c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1a63c4:
    // 0x1a63c4: 0x6faa0040  ldr         $t2, 0x40($sp)
    ctx->pc = 0x1a63c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1a63c8:
    // 0x1a63c8: 0x8fab0048  lw          $t3, 0x48($sp)
    ctx->pc = 0x1a63c8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_1a63cc:
    // 0x1a63cc: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x1a63ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a63d0:
    // 0x1a63d0: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x1a63d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a63d4:
    // 0x1a63d4: 0xafab0038  sw          $t3, 0x38($sp)
    ctx->pc = 0x1a63d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 11));
label_1a63d8:
    // 0x1a63d8: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1a63d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a63dc:
    // 0x1a63dc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x1a63dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a63e0:
    // 0x1a63e0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a63e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a63e4:
    // 0x1a63e4: 0xc7a10038  lwc1        $f1, 0x38($sp)
    ctx->pc = 0x1a63e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a63e8:
    // 0x1a63e8: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a63e8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1a63ec:
    // 0x1a63ec: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a63ecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a63f0:
    // 0x1a63f0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a63f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a63f4:
    // 0x1a63f4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a63f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a63f8:
    // 0x1a63f8: 0x0  nop
    ctx->pc = 0x1a63f8u;
    // NOP
label_1a63fc:
    // 0x1a63fc: 0x0  nop
    ctx->pc = 0x1a63fcu;
    // NOP
label_1a6400:
    // 0x1a6400: 0x46000104  c1          0x104
    ctx->pc = 0x1a6400u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
label_1a6404:
    // 0x1a6404: 0x100000aa  b           . + 4 + (0xAA << 2)
label_1a6408:
    if (ctx->pc == 0x1A6408u) {
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6404u;
        // 0x1a6408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A640Cu;
        goto label_1a640c;
    }
    ctx->pc = 0x1A6404u;
    {
        const bool branch_taken_0x1a6404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6404u;
        // 0x1a6408: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6404) {
            ctx->pc = 0x1A66B0u;
            goto label_1a66b0;
        }
    }
    ctx->pc = 0x1A640Cu;
label_1a640c:
    // 0x1a640c: 0x0  nop
    ctx->pc = 0x1a640cu;
    // NOP
label_1a6410:
    // 0x1a6410: 0x8e2c0000  lw          $t4, 0x0($s1)
    ctx->pc = 0x1a6410u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1a6414:
    // 0x1a6414: 0x1120000e  beqz        $t1, . + 4 + (0xE << 2)
label_1a6418:
    if (ctx->pc == 0x1A6418u) {
        ctx->pc = 0x1A6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6414u;
        // 0x1a6418: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A641Cu;
        goto label_1a641c;
    }
    ctx->pc = 0x1A6414u;
    {
        const bool branch_taken_0x1a6414 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6414u;
        // 0x1a6418: 0x180402d  daddu       $t0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6414) {
            ctx->pc = 0x1A6450u;
            goto label_1a6450;
        }
    }
    ctx->pc = 0x1A641Cu;
label_1a641c:
    // 0x1a641c: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1a641cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_1a6420:
    // 0x1a6420: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1a6424:
    if (ctx->pc == 0x1A6424u) {
        ctx->pc = 0x1A6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6420u;
        // 0x1a6424: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6428u;
        goto label_1a6428;
    }
    ctx->pc = 0x1A6420u;
    {
        const bool branch_taken_0x1a6420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6420u;
        // 0x1a6424: 0x1221023  subu        $v0, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6420) {
            ctx->pc = 0x1A6450u;
            goto label_1a6450;
        }
    }
    ctx->pc = 0x1A6428u;
label_1a6428:
    // 0x1a6428: 0x53c00001  beql        $fp, $zero, . + 4 + (0x1 << 2)
label_1a642c:
    if (ctx->pc == 0x1A642Cu) {
        ctx->pc = 0x1A642Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6428u;
        // 0x1a642c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6430u;
        goto label_1a6430;
    }
    ctx->pc = 0x1A6428u;
    {
        const bool branch_taken_0x1a6428 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6428) {
            ctx->pc = 0x1A642Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6428u;
            // 0x1a642c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6430u;
            goto label_1a6430;
        }
    }
    ctx->pc = 0x1A6430u;
label_1a6430:
    // 0x1a6430: 0x5e001b  divu        $zero, $v0, $fp
    ctx->pc = 0x1a6430u;
    { uint32_t divisor = GPR_U32(ctx, 30); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1a6434:
    // 0x1a6434: 0x2012  mflo        $a0
    ctx->pc = 0x1a6434u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_1a6438:
    // 0x1a6438: 0x4820006  bltzl       $a0, . + 4 + (0x6 << 2)
label_1a643c:
    if (ctx->pc == 0x1A643Cu) {
        ctx->pc = 0x1A643Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6438u;
        // 0x1a643c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6440u;
        goto label_1a6440;
    }
    ctx->pc = 0x1A6438u;
    {
        const bool branch_taken_0x1a6438 = (GPR_S64(ctx, 4) < 0);
        if (branch_taken_0x1a6438) {
            ctx->pc = 0x1A643Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6438u;
            // 0x1a643c: 0x3404ffff  ori         $a0, $zero, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6454u;
            goto label_1a6454;
        }
    }
    ctx->pc = 0x1A6440u;
label_1a6440:
    // 0x1a6440: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1a6440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1a6444:
    // 0x1a6444: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a6444u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a6448:
    // 0x1a6448: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a644c:
    if (ctx->pc == 0x1A644Cu) {
        ctx->pc = 0x1A644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6448u;
        // 0x1a644c: 0xb71018  mult        $v0, $a1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6450u;
        goto label_1a6450;
    }
    ctx->pc = 0x1A6448u;
    {
        const bool branch_taken_0x1a6448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A644Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6448u;
        // 0x1a644c: 0xb71018  mult        $v0, $a1, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6448) {
            ctx->pc = 0x1A6458u;
            goto label_1a6458;
        }
    }
    ctx->pc = 0x1A6450u;
label_1a6450:
    // 0x1a6450: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x1a6450u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a6454:
    // 0x1a6454: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x1a6454u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a6458:
    // 0x1a6458: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x1a6458u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1a645c:
    // 0x1a645c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1a645cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6460:
    // 0x1a6460: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x1a6460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1a6464:
    // 0x1a6464: 0x9505002c  lhu         $a1, 0x2C($t0)
    ctx->pc = 0x1a6464u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 44)));
label_1a6468:
    // 0x1a6468: 0x4c3821  addu        $a3, $v0, $t4
    ctx->pc = 0x1a6468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1a646c:
    // 0x1a646c: 0xa42826  xor         $a1, $a1, $a0
    ctx->pc = 0x1a646cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 4));
label_1a6470:
    // 0x1a6470: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x1a6470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1a6474:
    // 0x1a6474: 0x2300b  movn        $a2, $zero, $v0
    ctx->pc = 0x1a6474u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0));
label_1a6478:
    // 0x1a6478: 0x95030028  lhu         $v1, 0x28($t0)
    ctx->pc = 0x1a6478u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 40)));
label_1a647c:
    // 0x1a647c: 0xd71018  mult        $v0, $a2, $s7
    ctx->pc = 0x1a647cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a6480:
    // 0x1a6480: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x1a6480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_1a6484:
    // 0x1a6484: 0x3a00a  movz        $s4, $zero, $v1
    ctx->pc = 0x1a6484u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0));
label_1a6488:
    // 0x1a6488: 0x4c3021  addu        $a2, $v0, $t4
    ctx->pc = 0x1a6488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1a648c:
    // 0x1a648c: 0x9502002a  lhu         $v0, 0x2A($t0)
    ctx->pc = 0x1a648cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 42)));
label_1a6490:
    // 0x1a6490: 0x68e3000b  ldl         $v1, 0xB($a3)
    ctx->pc = 0x1a6490u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a6494:
    // 0x1a6494: 0x6ce30004  ldr         $v1, 0x4($a3)
    ctx->pc = 0x1a6494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a6498:
    // 0x1a6498: 0x8ce8000c  lw          $t0, 0xC($a3)
    ctx->pc = 0x1a6498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1a649c:
    // 0x1a649c: 0xb3a30097  sdl         $v1, 0x97($sp)
    ctx->pc = 0x1a649cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a64a0:
    // 0x1a64a0: 0xb7a30090  sdr         $v1, 0x90($sp)
    ctx->pc = 0x1a64a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a64a4:
    // 0x1a64a4: 0xafa80098  sw          $t0, 0x98($sp)
    ctx->pc = 0x1a64a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 8));
label_1a64a8:
    // 0x1a64a8: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x1a64a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_1a64ac:
    // 0x1a64ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1a64acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a64b0:
    // 0x1a64b0: 0x68c4000b  ldl         $a0, 0xB($a2)
    ctx->pc = 0x1a64b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_1a64b4:
    // 0x1a64b4: 0x6cc40004  ldr         $a0, 0x4($a2)
    ctx->pc = 0x1a64b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_1a64b8:
    // 0x1a64b8: 0x8cc7000c  lw          $a3, 0xC($a2)
    ctx->pc = 0x1a64b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1a64bc:
    // 0x1a64bc: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x1a64bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a64c0:
    // 0x1a64c0: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x1a64c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a64c4:
    // 0x1a64c4: 0xafa700a8  sw          $a3, 0xA8($sp)
    ctx->pc = 0x1a64c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 7));
label_1a64c8:
    // 0x1a64c8: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x1a64c8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3));
label_1a64cc:
    // 0x1a64cc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x1a64ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a64d0:
    // 0x1a64d0: 0x165a00a  movz        $s4, $t3, $a1
    ctx->pc = 0x1a64d0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 20, GPR_U64(ctx, 11));
label_1a64d4:
    // 0x1a64d4: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x1a64d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a64d8:
    // 0x1a64d8: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x1a64d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a64dc:
    // 0x1a64dc: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1a64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_1a64e0:
    // 0x1a64e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a64e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a64e4:
    // 0x1a64e4: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x1a64e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a64e8:
    // 0x1a64e8: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x1a64e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a64ec:
    // 0x1a64ec: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a64ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1a64f0:
    // 0x1a64f0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1a64f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a64f4:
    // 0x1a64f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a64f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a64f8:
    // 0x1a64f8: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x1a64f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a64fc:
    // 0x1a64fc: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1a64fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6500:
    // 0x1a6500: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a6500u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a6504:
    // 0x1a6504: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x1a6504u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1a6508:
    // 0x1a6508: 0x6ba300c7  ldl         $v1, 0xC7($sp)
    ctx->pc = 0x1a6508u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1a650c:
    // 0x1a650c: 0x6fa300c0  ldr         $v1, 0xC0($sp)
    ctx->pc = 0x1a650cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1a6510:
    // 0x1a6510: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1a6510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1a6514:
    // 0x1a6514: 0xb3a300b7  sdl         $v1, 0xB7($sp)
    ctx->pc = 0x1a6514u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6518:
    // 0x1a6518: 0xb7a300b0  sdr         $v1, 0xB0($sp)
    ctx->pc = 0x1a6518u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a651c:
    // 0x1a651c: 0xafa400b8  sw          $a0, 0xB8($sp)
    ctx->pc = 0x1a651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 4));
label_1a6520:
    // 0x1a6520: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x1a6520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6524:
    // 0x1a6524: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x1a6524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6528:
    // 0x1a6528: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a6528u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a652c:
    // 0x1a652c: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a652cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6530:
    // 0x1a6530: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1a6530u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1a6534:
    // 0x1a6534: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a6534u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a6538:
    // 0x1a6538: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x1a6538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1a653c:
    // 0x1a653c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1a653cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1a6540:
    // 0x1a6540: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x1a6540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_1a6544:
    // 0x1a6544: 0x6ba700c7  ldl         $a3, 0xC7($sp)
    ctx->pc = 0x1a6544u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1a6548:
    // 0x1a6548: 0x6fa700c0  ldr         $a3, 0xC0($sp)
    ctx->pc = 0x1a6548u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1a654c:
    // 0x1a654c: 0x8fa800c8  lw          $t0, 0xC8($sp)
    ctx->pc = 0x1a654cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1a6550:
    // 0x1a6550: 0xb3a70087  sdl         $a3, 0x87($sp)
    ctx->pc = 0x1a6550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6554:
    // 0x1a6554: 0xb7a70080  sdr         $a3, 0x80($sp)
    ctx->pc = 0x1a6554u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6558:
    // 0x1a6558: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x1a6558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_1a655c:
    // 0x1a655c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1a655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a6560:
    // 0x1a6560: 0x2971018  mult        $v0, $s4, $s7
    ctx->pc = 0x1a6560u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a6564:
    // 0x1a6564: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x1a6564u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1a6568:
    // 0x1a6568: 0x4c2021  addu        $a0, $v0, $t4
    ctx->pc = 0x1a6568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1a656c:
    // 0x1a656c: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x1a656cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a6570:
    // 0x1a6570: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1a6570u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_1a6574:
    // 0x1a6574: 0x6885000b  ldl         $a1, 0xB($a0)
    ctx->pc = 0x1a6574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a6578:
    // 0x1a6578: 0x6c850004  ldr         $a1, 0x4($a0)
    ctx->pc = 0x1a6578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a657c:
    // 0x1a657c: 0x8c86000c  lw          $a2, 0xC($a0)
    ctx->pc = 0x1a657cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_1a6580:
    // 0x1a6580: 0xb3a500d7  sdl         $a1, 0xD7($sp)
    ctx->pc = 0x1a6580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 215); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6584:
    // 0x1a6584: 0xb7a500d0  sdr         $a1, 0xD0($sp)
    ctx->pc = 0x1a6584u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 208); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6588:
    // 0x1a6588: 0xafa600d8  sw          $a2, 0xD8($sp)
    ctx->pc = 0x1a6588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 6));
label_1a658c:
    // 0x1a658c: 0x771018  mult        $v0, $v1, $s7
    ctx->pc = 0x1a658cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1a6590:
    // 0x1a6590: 0x4c1821  addu        $v1, $v0, $t4
    ctx->pc = 0x1a6590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
label_1a6594:
    // 0x1a6594: 0x686a000b  ldl         $t2, 0xB($v1)
    ctx->pc = 0x1a6594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_1a6598:
    // 0x1a6598: 0x6c6a0004  ldr         $t2, 0x4($v1)
    ctx->pc = 0x1a6598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_1a659c:
    // 0x1a659c: 0x8c6b000c  lw          $t3, 0xC($v1)
    ctx->pc = 0x1a659cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1a65a0:
    // 0x1a65a0: 0xb3aa00e7  sdl         $t2, 0xE7($sp)
    ctx->pc = 0x1a65a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 231); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a65a4:
    // 0x1a65a4: 0xb7aa00e0  sdr         $t2, 0xE0($sp)
    ctx->pc = 0x1a65a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 224); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a65a8:
    // 0x1a65a8: 0xafab00e8  sw          $t3, 0xE8($sp)
    ctx->pc = 0x1a65a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 11));
label_1a65ac:
    // 0x1a65ac: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x1a65acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a65b0:
    // 0x1a65b0: 0xc7a000e0  lwc1        $f0, 0xE0($sp)
    ctx->pc = 0x1a65b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a65b4:
    // 0x1a65b4: 0x8fa50120  lw          $a1, 0x120($sp)
    ctx->pc = 0x1a65b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1a65b8:
    // 0x1a65b8: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a65b8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a65bc:
    // 0x1a65bc: 0xc7a200e4  lwc1        $f2, 0xE4($sp)
    ctx->pc = 0x1a65bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a65c0:
    // 0x1a65c0: 0xc7a300e8  lwc1        $f3, 0xE8($sp)
    ctx->pc = 0x1a65c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a65c4:
    // 0x1a65c4: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1a65c4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1a65c8:
    // 0x1a65c8: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1a65c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a65cc:
    // 0x1a65cc: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a65ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a65d0:
    // 0x1a65d0: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x1a65d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1a65d4:
    // 0x1a65d4: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1a65d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a65d8:
    // 0x1a65d8: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1a65d8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1a65dc:
    // 0x1a65dc: 0xe7a10108  swc1        $f1, 0x108($sp)
    ctx->pc = 0x1a65dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1a65e0:
    // 0x1a65e0: 0x6ba60107  ldl         $a2, 0x107($sp)
    ctx->pc = 0x1a65e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1a65e4:
    // 0x1a65e4: 0x6fa60100  ldr         $a2, 0x100($sp)
    ctx->pc = 0x1a65e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1a65e8:
    // 0x1a65e8: 0x8fa70108  lw          $a3, 0x108($sp)
    ctx->pc = 0x1a65e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1a65ec:
    // 0x1a65ec: 0xb3a600f7  sdl         $a2, 0xF7($sp)
    ctx->pc = 0x1a65ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a65f0:
    // 0x1a65f0: 0xb7a600f0  sdr         $a2, 0xF0($sp)
    ctx->pc = 0x1a65f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a65f4:
    // 0x1a65f4: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x1a65f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_1a65f8:
    // 0x1a65f8: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1a65f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a65fc:
    // 0x1a65fc: 0xc7a200f4  lwc1        $f2, 0xF4($sp)
    ctx->pc = 0x1a65fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6600:
    // 0x1a6600: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x1a6600u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_1a6604:
    // 0x1a6604: 0xc7a000f8  lwc1        $f0, 0xF8($sp)
    ctx->pc = 0x1a6604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6608:
    // 0x1a6608: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x1a6608u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
label_1a660c:
    // 0x1a660c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x1a660cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_1a6610:
    // 0x1a6610: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x1a6610u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_1a6614:
    // 0x1a6614: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x1a6614u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_1a6618:
    // 0x1a6618: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x1a6618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_1a661c:
    // 0x1a661c: 0x6bab0107  ldl         $t3, 0x107($sp)
    ctx->pc = 0x1a661cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 263); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_1a6620:
    // 0x1a6620: 0x6fab0100  ldr         $t3, 0x100($sp)
    ctx->pc = 0x1a6620u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 256); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_1a6624:
    // 0x1a6624: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1a6624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1a6628:
    // 0x1a6628: 0xb3ab0097  sdl         $t3, 0x97($sp)
    ctx->pc = 0x1a6628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a662c:
    // 0x1a662c: 0xb7ab0090  sdr         $t3, 0x90($sp)
    ctx->pc = 0x1a662cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6630:
    // 0x1a6630: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x1a6630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_1a6634:
    // 0x1a6634: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x1a6634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6638:
    // 0x1a6638: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x1a6638u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a663c:
    // 0x1a663c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x1a663cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6640:
    // 0x1a6640: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x1a6640u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_1a6644:
    // 0x1a6644: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x1a6644u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1a6648:
    // 0x1a6648: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x1a6648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a664c:
    // 0x1a664c: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x1a664cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a6650:
    // 0x1a6650: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x1a6650u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_1a6654:
    // 0x1a6654: 0xe7a100a0  swc1        $f1, 0xA0($sp)
    ctx->pc = 0x1a6654u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_1a6658:
    // 0x1a6658: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1a6658u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_1a665c:
    // 0x1a665c: 0xe7a200a4  swc1        $f2, 0xA4($sp)
    ctx->pc = 0x1a665cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_1a6660:
    // 0x1a6660: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x1a6660u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1a6664:
    // 0x1a6664: 0x6ba500a7  ldl         $a1, 0xA7($sp)
    ctx->pc = 0x1a6664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1a6668:
    // 0x1a6668: 0x6fa500a0  ldr         $a1, 0xA0($sp)
    ctx->pc = 0x1a6668u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1a666c:
    // 0x1a666c: 0x8fa600a8  lw          $a2, 0xA8($sp)
    ctx->pc = 0x1a666cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_1a6670:
    // 0x1a6670: 0xb3a50077  sdl         $a1, 0x77($sp)
    ctx->pc = 0x1a6670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6674:
    // 0x1a6674: 0xb7a50070  sdr         $a1, 0x70($sp)
    ctx->pc = 0x1a6674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1a6678:
    // 0x1a6678: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x1a6678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_1a667c:
    // 0x1a667c: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x1a667cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6680:
    // 0x1a6680: 0xc7a20074  lwc1        $f2, 0x74($sp)
    ctx->pc = 0x1a6680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a6684:
    // 0x1a6684: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x1a6684u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_1a6688:
    // 0x1a6688: 0xc7a10078  lwc1        $f1, 0x78($sp)
    ctx->pc = 0x1a6688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a668c:
    // 0x1a668c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x1a668cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_1a6690:
    // 0x1a6690: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x1a6690u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_1a6694:
    // 0x1a6694: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1a6694u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1a6698:
    // 0x1a6698: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1a6698u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1a669c:
    // 0x1a669c: 0x0  nop
    ctx->pc = 0x1a669cu;
    // NOP
label_1a66a0:
    // 0x1a66a0: 0x0  nop
    ctx->pc = 0x1a66a0u;
    // NOP
label_1a66a4:
    // 0x1a66a4: 0x46000104  c1          0x104
    ctx->pc = 0x1a66a4u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
label_1a66a8:
    // 0x1a66a8: 0x26120001  addiu       $s2, $s0, 0x1
    ctx->pc = 0x1a66a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1a66ac:
    // 0x1a66ac: 0x0  nop
    ctx->pc = 0x1a66acu;
    // NOP
label_1a66b0:
    // 0x1a66b0: 0x9522002e  lhu         $v0, 0x2E($t1)
    ctx->pc = 0x1a66b0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 46)));
label_1a66b4:
    // 0x1a66b4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x1a66b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a66b8:
    // 0x1a66b8: 0xc6630084  lwc1        $f3, 0x84($s3)
    ctx->pc = 0x1a66b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1a66bc:
    // 0x1a66bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1a66bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a66c0:
    // 0x1a66c0: 0x30427fff  andi        $v0, $v0, 0x7FFF
    ctx->pc = 0x1a66c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
label_1a66c4:
    // 0x1a66c4: 0xc6220008  lwc1        $f2, 0x8($s1)
    ctx->pc = 0x1a66c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1a66c8:
    // 0x1a66c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1a66c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1a66cc:
    // 0x1a66cc: 0x0  nop
    ctx->pc = 0x1a66ccu;
    // NOP
label_1a66d0:
    // 0x1a66d0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1a66d0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1a66d4:
    // 0x1a66d4: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x1a66d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_1a66d8:
    // 0x1a66d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1a66d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1a66dc:
    // 0x1a66dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1a66dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_1a66e0:
    // 0x1a66e0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x1a66e0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_1a66e4:
    // 0x1a66e4: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x1a66e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_1a66e8:
    // 0x1a66e8: 0x46011040  add.s       $f1, $f2, $f1
    ctx->pc = 0x1a66e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_1a66ec:
    // 0x1a66ec: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1a66ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1a66f0:
    // 0x1a66f0: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1a66f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1a66f4:
    // 0x1a66f4: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a66f4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a66f8:
    // 0x1a66f8: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a66f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a66fc:
    // 0x1a66fc: 0x40f809  jalr        $v0
label_1a6700:
    if (ctx->pc == 0x1A6700u) {
        ctx->pc = 0x1A6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66FCu;
        // 0x1a6700: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6704u;
        goto label_1a6704;
    }
    ctx->pc = 0x1A66FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A6704u);
        ctx->pc = 0x1A6700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A66FCu;
        // 0x1a6700: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A66FCu, 0x1A6704u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A6704u;
label_1a6704:
    // 0x1a6704: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a6704u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a6708:
    // 0x1a6708: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
label_1a670c:
    if (ctx->pc == 0x1A670Cu) {
        ctx->pc = 0x1A670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6708u;
        // 0x1a670c: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6710u;
        goto label_1a6710;
    }
    ctx->pc = 0x1A6708u;
    {
        const bool branch_taken_0x1a6708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6708u;
        // 0x1a670c: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6708) {
            ctx->pc = 0x1A67C8u;
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A6710u;
label_1a6710:
    // 0x1a6710: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a6714:
    // 0x1a6714: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1a6718:
    if (ctx->pc == 0x1A6718u) {
        ctx->pc = 0x1A6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6714u;
        // 0x1a6718: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A671Cu;
        goto label_1a671c;
    }
    ctx->pc = 0x1A6714u;
    {
        const bool branch_taken_0x1a6714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a6714) {
            ctx->pc = 0x1A6718u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6714u;
            // 0x1a6718: 0xc6010008  lwc1        $f1, 0x8($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A672Cu;
            goto label_1a672c;
        }
    }
    ctx->pc = 0x1A671Cu;
label_1a671c:
    // 0x1a671c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a671cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6720:
    // 0x1a6720: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1a6724:
    if (ctx->pc == 0x1A6724u) {
        ctx->pc = 0x1A6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6720u;
        // 0x1a6724: 0xae15001c  sw          $s5, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6728u;
        goto label_1a6728;
    }
    ctx->pc = 0x1A6720u;
    {
        const bool branch_taken_0x1a6720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a6720) {
            ctx->pc = 0x1A6724u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A6720u;
            // 0x1a6724: 0xae15001c  sw          $s5, 0x1C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A6744u;
            goto label_1a6744;
        }
    }
    ctx->pc = 0x1A6728u;
label_1a6728:
    // 0x1a6728: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a6728u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a672c:
    // 0x1a672c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a672cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6730:
    // 0x1a6730: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1a6730u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1a6734:
    // 0x1a6734: 0x0  nop
    ctx->pc = 0x1a6734u;
    // NOP
label_1a6738:
    // 0x1a6738: 0x45010023  bc1t        . + 4 + (0x23 << 2)
label_1a673c:
    if (ctx->pc == 0x1A673Cu) {
        ctx->pc = 0x1A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6738u;
        // 0x1a673c: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6740u;
        goto label_1a6740;
    }
    ctx->pc = 0x1A6738u;
    {
        const bool branch_taken_0x1a6738 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6738u;
        // 0x1a673c: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6738) {
            ctx->pc = 0x1A67C8u;
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A6740u;
label_1a6740:
    // 0x1a6740: 0xae15001c  sw          $s5, 0x1C($s0)
    ctx->pc = 0x1a6740u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 21));
label_1a6744:
    // 0x1a6744: 0x2664002c  addiu       $a0, $s3, 0x2C
    ctx->pc = 0x1a6744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_1a6748:
    // 0x1a6748: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x1a6748u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_1a674c:
    // 0x1a674c: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x1a674cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1a6750:
    // 0x1a6750: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x1a6750u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
label_1a6754:
    // 0x1a6754: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x1a6754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a6758:
    // 0x1a6758: 0xc06a4da  jal         func_1A9368
label_1a675c:
    if (ctx->pc == 0x1A675Cu) {
        ctx->pc = 0x1A675Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6758u;
        // 0x1a675c: 0x8e66000c  lw          $a2, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6760u;
        goto label_1a6760;
    }
    ctx->pc = 0x1A6758u;
    SET_GPR_U32(ctx, 31, 0x1A6760u);
    ctx->pc = 0x1A675Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A6758u;
    // 0x1a675c: 0x8e66000c  lw          $a2, 0xC($s3) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A9368u, 0x1A6758u, 0x1A6760u)) {
        return;
    }
    ctx->pc = 0x1A6760u;
label_1a6760:
    // 0x1a6760: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x1a6760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1a6764:
    // 0x1a6764: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1a6764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1a6768:
    // 0x1a6768: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1a6768u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1a676c:
    // 0x1a676c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1a6770:
    if (ctx->pc == 0x1A6770u) {
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A676Cu;
        // 0x1a6770: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6774u;
        goto label_1a6774;
    }
    ctx->pc = 0x1A676Cu;
    {
        const bool branch_taken_0x1a676c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A676Cu;
        // 0x1a6770: 0xe601000c  swc1        $f1, 0xC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a676c) {
            ctx->pc = 0x1A6778u;
            goto label_1a6778;
        }
    }
    ctx->pc = 0x1A6774u;
label_1a6774:
    // 0x1a6774: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x1a6774u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_1a6778:
    // 0x1a6778: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1a6778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1a677c:
    // 0x1a677c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a6780:
    if (ctx->pc == 0x1A6780u) {
        ctx->pc = 0x1A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A677Cu;
        // 0x1a6780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6784u;
        goto label_1a6784;
    }
    ctx->pc = 0x1A677Cu;
    {
        const bool branch_taken_0x1a677c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A677Cu;
        // 0x1a6780: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a677c) {
            ctx->pc = 0x1A67A4u;
            goto label_1a67a4;
        }
    }
    ctx->pc = 0x1A6784u;
label_1a6784:
    // 0x1a6784: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x1a6784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1a6788:
    // 0x1a6788: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a6788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a678c:
    // 0x1a678c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1a678cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1a6790:
    // 0x1a6790: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1a6790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1a6794:
    // 0x1a6794: 0x60f809  jalr        $v1
label_1a6798:
    if (ctx->pc == 0x1A6798u) {
        ctx->pc = 0x1A6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6794u;
        // 0x1a6798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A679Cu;
        goto label_1a679c;
    }
    ctx->pc = 0x1A6794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A679Cu);
        ctx->pc = 0x1A6798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6794u;
        // 0x1a6798: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A6794u, 0x1A679Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A679Cu;
label_1a679c:
    // 0x1a679c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1a67a0:
    if (ctx->pc == 0x1A67A0u) {
        ctx->pc = 0x1A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A679Cu;
        // 0x1a67a0: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67A4u;
        goto label_1a67a4;
    }
    ctx->pc = 0x1A679Cu;
    {
        const bool branch_taken_0x1a679c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A67A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A679Cu;
        // 0x1a67a0: 0x8fab0110  lw          $t3, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a679c) {
            ctx->pc = 0x1A67C8u;
            goto label_1a67c8;
        }
    }
    ctx->pc = 0x1A67A4u;
label_1a67a4:
    // 0x1a67a4: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x1a67a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_1a67a8:
    // 0x1a67a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1a67a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a67ac:
    // 0x1a67ac: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1a67acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1a67b0:
    // 0x1a67b0: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1a67b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1a67b4:
    // 0x1a67b4: 0x60f809  jalr        $v1
label_1a67b8:
    if (ctx->pc == 0x1A67B8u) {
        ctx->pc = 0x1A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67B4u;
        // 0x1a67b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67BCu;
        goto label_1a67bc;
    }
    ctx->pc = 0x1A67B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A67BCu);
        ctx->pc = 0x1A67B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67B4u;
        // 0x1a67b8: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A67B4u, 0x1A67BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A67BCu;
label_1a67bc:
    // 0x1a67bc: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x1a67bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a67c0:
    // 0x1a67c0: 0xae0a0010  sw          $t2, 0x10($s0)
    ctx->pc = 0x1a67c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 10));
label_1a67c4:
    // 0x1a67c4: 0x8fab0110  lw          $t3, 0x110($sp)
    ctx->pc = 0x1a67c4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
label_1a67c8:
    // 0x1a67c8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a67c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a67cc:
    // 0x1a67cc: 0x20b102b  sltu        $v0, $s0, $t3
    ctx->pc = 0x1a67ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
label_1a67d0:
    // 0x1a67d0: 0x5440fe83  bnel        $v0, $zero, . + 4 + (-0x17D << 2)
label_1a67d4:
    if (ctx->pc == 0x1A67D4u) {
        ctx->pc = 0x1A67D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A67D0u;
        // 0x1a67d4: 0x8e670014  lw          $a3, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A67D8u;
        goto label_1a67d8;
    }
    ctx->pc = 0x1A67D0u;
    {
        const bool branch_taken_0x1a67d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a67d0) {
            ctx->pc = 0x1A67D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A67D0u;
            // 0x1a67d4: 0x8e670014  lw          $a3, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A61E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a61e0;
        }
    }
    ctx->pc = 0x1A67D8u;
label_1a67d8:
    // 0x1a67d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a67dc:
    // 0x1a67dc: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x1a67dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_1a67e0:
    // 0x1a67e0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1a67e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_1a67e4:
    // 0x1a67e4: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x1a67e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_1a67e8:
    // 0x1a67e8: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x1a67e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_1a67ec:
    // 0x1a67ec: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x1a67ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_1a67f0:
    // 0x1a67f0: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x1a67f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_1a67f4:
    // 0x1a67f4: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x1a67f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_1a67f8:
    // 0x1a67f8: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x1a67f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_1a67fc:
    // 0x1a67fc: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x1a67fcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_1a6800:
    // 0x1a6800: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x1a6800u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_1a6804:
    // 0x1a6804: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x1a6804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1a6808:
    // 0x1a6808: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x1a6808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1a680c:
    // 0x1a680c: 0x3e00008  jr          $ra
label_1a6810:
    if (ctx->pc == 0x1A6810u) {
        ctx->pc = 0x1A6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A680Cu;
        // 0x1a6810: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A6814u;
        goto label_1a6814;
    }
    ctx->pc = 0x1A680Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A6810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A680Cu;
        // 0x1a6810: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A680Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A6814u;
label_1a6814:
    // 0x1a6814: 0x0  nop
    ctx->pc = 0x1a6814u;
    // NOP
    ctx->pc = 0x1a6818u;
}
