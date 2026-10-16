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

// Function: sub_002344A0
// Address: 0x2344a0 - 0x235c70
void sub_002344A0_0x2344a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002344A0_0x2344a0");
#endif

    switch (ctx->pc) {
        case 0x2344a0u: goto label_2344a0;
        case 0x2344a4u: goto label_2344a4;
        case 0x2344a8u: goto label_2344a8;
        case 0x2344acu: goto label_2344ac;
        case 0x2344b0u: goto label_2344b0;
        case 0x2344b4u: goto label_2344b4;
        case 0x2344b8u: goto label_2344b8;
        case 0x2344bcu: goto label_2344bc;
        case 0x2344c0u: goto label_2344c0;
        case 0x2344c4u: goto label_2344c4;
        case 0x2344c8u: goto label_2344c8;
        case 0x2344ccu: goto label_2344cc;
        case 0x2344d0u: goto label_2344d0;
        case 0x2344d4u: goto label_2344d4;
        case 0x2344d8u: goto label_2344d8;
        case 0x2344dcu: goto label_2344dc;
        case 0x2344e0u: goto label_2344e0;
        case 0x2344e4u: goto label_2344e4;
        case 0x2344e8u: goto label_2344e8;
        case 0x2344ecu: goto label_2344ec;
        case 0x2344f0u: goto label_2344f0;
        case 0x2344f4u: goto label_2344f4;
        case 0x2344f8u: goto label_2344f8;
        case 0x2344fcu: goto label_2344fc;
        case 0x234500u: goto label_234500;
        case 0x234504u: goto label_234504;
        case 0x234508u: goto label_234508;
        case 0x23450cu: goto label_23450c;
        case 0x234510u: goto label_234510;
        case 0x234514u: goto label_234514;
        case 0x234518u: goto label_234518;
        case 0x23451cu: goto label_23451c;
        case 0x234520u: goto label_234520;
        case 0x234524u: goto label_234524;
        case 0x234528u: goto label_234528;
        case 0x23452cu: goto label_23452c;
        case 0x234530u: goto label_234530;
        case 0x234534u: goto label_234534;
        case 0x234538u: goto label_234538;
        case 0x23453cu: goto label_23453c;
        case 0x234540u: goto label_234540;
        case 0x234544u: goto label_234544;
        case 0x234548u: goto label_234548;
        case 0x23454cu: goto label_23454c;
        case 0x234550u: goto label_234550;
        case 0x234554u: goto label_234554;
        case 0x234558u: goto label_234558;
        case 0x23455cu: goto label_23455c;
        case 0x234560u: goto label_234560;
        case 0x234564u: goto label_234564;
        case 0x234568u: goto label_234568;
        case 0x23456cu: goto label_23456c;
        case 0x234570u: goto label_234570;
        case 0x234574u: goto label_234574;
        case 0x234578u: goto label_234578;
        case 0x23457cu: goto label_23457c;
        case 0x234580u: goto label_234580;
        case 0x234584u: goto label_234584;
        case 0x234588u: goto label_234588;
        case 0x23458cu: goto label_23458c;
        case 0x234590u: goto label_234590;
        case 0x234594u: goto label_234594;
        case 0x234598u: goto label_234598;
        case 0x23459cu: goto label_23459c;
        case 0x2345a0u: goto label_2345a0;
        case 0x2345a4u: goto label_2345a4;
        case 0x2345a8u: goto label_2345a8;
        case 0x2345acu: goto label_2345ac;
        case 0x2345b0u: goto label_2345b0;
        case 0x2345b4u: goto label_2345b4;
        case 0x2345b8u: goto label_2345b8;
        case 0x2345bcu: goto label_2345bc;
        case 0x2345c0u: goto label_2345c0;
        case 0x2345c4u: goto label_2345c4;
        case 0x2345c8u: goto label_2345c8;
        case 0x2345ccu: goto label_2345cc;
        case 0x2345d0u: goto label_2345d0;
        case 0x2345d4u: goto label_2345d4;
        case 0x2345d8u: goto label_2345d8;
        case 0x2345dcu: goto label_2345dc;
        case 0x2345e0u: goto label_2345e0;
        case 0x2345e4u: goto label_2345e4;
        case 0x2345e8u: goto label_2345e8;
        case 0x2345ecu: goto label_2345ec;
        case 0x2345f0u: goto label_2345f0;
        case 0x2345f4u: goto label_2345f4;
        case 0x2345f8u: goto label_2345f8;
        case 0x2345fcu: goto label_2345fc;
        case 0x234600u: goto label_234600;
        case 0x234604u: goto label_234604;
        case 0x234608u: goto label_234608;
        case 0x23460cu: goto label_23460c;
        case 0x234610u: goto label_234610;
        case 0x234614u: goto label_234614;
        case 0x234618u: goto label_234618;
        case 0x23461cu: goto label_23461c;
        case 0x234620u: goto label_234620;
        case 0x234624u: goto label_234624;
        case 0x234628u: goto label_234628;
        case 0x23462cu: goto label_23462c;
        case 0x234630u: goto label_234630;
        case 0x234634u: goto label_234634;
        case 0x234638u: goto label_234638;
        case 0x23463cu: goto label_23463c;
        case 0x234640u: goto label_234640;
        case 0x234644u: goto label_234644;
        case 0x234648u: goto label_234648;
        case 0x23464cu: goto label_23464c;
        case 0x234650u: goto label_234650;
        case 0x234654u: goto label_234654;
        case 0x234658u: goto label_234658;
        case 0x23465cu: goto label_23465c;
        case 0x234660u: goto label_234660;
        case 0x234664u: goto label_234664;
        case 0x234668u: goto label_234668;
        case 0x23466cu: goto label_23466c;
        case 0x234670u: goto label_234670;
        case 0x234674u: goto label_234674;
        case 0x234678u: goto label_234678;
        case 0x23467cu: goto label_23467c;
        case 0x234680u: goto label_234680;
        case 0x234684u: goto label_234684;
        case 0x234688u: goto label_234688;
        case 0x23468cu: goto label_23468c;
        case 0x234690u: goto label_234690;
        case 0x234694u: goto label_234694;
        case 0x234698u: goto label_234698;
        case 0x23469cu: goto label_23469c;
        case 0x2346a0u: goto label_2346a0;
        case 0x2346a4u: goto label_2346a4;
        case 0x2346a8u: goto label_2346a8;
        case 0x2346acu: goto label_2346ac;
        case 0x2346b0u: goto label_2346b0;
        case 0x2346b4u: goto label_2346b4;
        case 0x2346b8u: goto label_2346b8;
        case 0x2346bcu: goto label_2346bc;
        case 0x2346c0u: goto label_2346c0;
        case 0x2346c4u: goto label_2346c4;
        case 0x2346c8u: goto label_2346c8;
        case 0x2346ccu: goto label_2346cc;
        case 0x2346d0u: goto label_2346d0;
        case 0x2346d4u: goto label_2346d4;
        case 0x2346d8u: goto label_2346d8;
        case 0x2346dcu: goto label_2346dc;
        case 0x2346e0u: goto label_2346e0;
        case 0x2346e4u: goto label_2346e4;
        case 0x2346e8u: goto label_2346e8;
        case 0x2346ecu: goto label_2346ec;
        case 0x2346f0u: goto label_2346f0;
        case 0x2346f4u: goto label_2346f4;
        case 0x2346f8u: goto label_2346f8;
        case 0x2346fcu: goto label_2346fc;
        case 0x234700u: goto label_234700;
        case 0x234704u: goto label_234704;
        case 0x234708u: goto label_234708;
        case 0x23470cu: goto label_23470c;
        case 0x234710u: goto label_234710;
        case 0x234714u: goto label_234714;
        case 0x234718u: goto label_234718;
        case 0x23471cu: goto label_23471c;
        case 0x234720u: goto label_234720;
        case 0x234724u: goto label_234724;
        case 0x234728u: goto label_234728;
        case 0x23472cu: goto label_23472c;
        case 0x234730u: goto label_234730;
        case 0x234734u: goto label_234734;
        case 0x234738u: goto label_234738;
        case 0x23473cu: goto label_23473c;
        case 0x234740u: goto label_234740;
        case 0x234744u: goto label_234744;
        case 0x234748u: goto label_234748;
        case 0x23474cu: goto label_23474c;
        case 0x234750u: goto label_234750;
        case 0x234754u: goto label_234754;
        case 0x234758u: goto label_234758;
        case 0x23475cu: goto label_23475c;
        case 0x234760u: goto label_234760;
        case 0x234764u: goto label_234764;
        case 0x234768u: goto label_234768;
        case 0x23476cu: goto label_23476c;
        case 0x234770u: goto label_234770;
        case 0x234774u: goto label_234774;
        case 0x234778u: goto label_234778;
        case 0x23477cu: goto label_23477c;
        case 0x234780u: goto label_234780;
        case 0x234784u: goto label_234784;
        case 0x234788u: goto label_234788;
        case 0x23478cu: goto label_23478c;
        case 0x234790u: goto label_234790;
        case 0x234794u: goto label_234794;
        case 0x234798u: goto label_234798;
        case 0x23479cu: goto label_23479c;
        case 0x2347a0u: goto label_2347a0;
        case 0x2347a4u: goto label_2347a4;
        case 0x2347a8u: goto label_2347a8;
        case 0x2347acu: goto label_2347ac;
        case 0x2347b0u: goto label_2347b0;
        case 0x2347b4u: goto label_2347b4;
        case 0x2347b8u: goto label_2347b8;
        case 0x2347bcu: goto label_2347bc;
        case 0x2347c0u: goto label_2347c0;
        case 0x2347c4u: goto label_2347c4;
        case 0x2347c8u: goto label_2347c8;
        case 0x2347ccu: goto label_2347cc;
        case 0x2347d0u: goto label_2347d0;
        case 0x2347d4u: goto label_2347d4;
        case 0x2347d8u: goto label_2347d8;
        case 0x2347dcu: goto label_2347dc;
        case 0x2347e0u: goto label_2347e0;
        case 0x2347e4u: goto label_2347e4;
        case 0x2347e8u: goto label_2347e8;
        case 0x2347ecu: goto label_2347ec;
        case 0x2347f0u: goto label_2347f0;
        case 0x2347f4u: goto label_2347f4;
        case 0x2347f8u: goto label_2347f8;
        case 0x2347fcu: goto label_2347fc;
        case 0x234800u: goto label_234800;
        case 0x234804u: goto label_234804;
        case 0x234808u: goto label_234808;
        case 0x23480cu: goto label_23480c;
        case 0x234810u: goto label_234810;
        case 0x234814u: goto label_234814;
        case 0x234818u: goto label_234818;
        case 0x23481cu: goto label_23481c;
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae4u: goto label_234ae4;
        case 0x234ae8u: goto label_234ae8;
        case 0x234aecu: goto label_234aec;
        case 0x234af0u: goto label_234af0;
        case 0x234af4u: goto label_234af4;
        case 0x234af8u: goto label_234af8;
        case 0x234afcu: goto label_234afc;
        case 0x234b00u: goto label_234b00;
        case 0x234b04u: goto label_234b04;
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b50u: goto label_234b50;
        case 0x234b54u: goto label_234b54;
        case 0x234b58u: goto label_234b58;
        case 0x234b5cu: goto label_234b5c;
        case 0x234b60u: goto label_234b60;
        case 0x234b64u: goto label_234b64;
        case 0x234b68u: goto label_234b68;
        case 0x234b6cu: goto label_234b6c;
        case 0x234b70u: goto label_234b70;
        case 0x234b74u: goto label_234b74;
        case 0x234b78u: goto label_234b78;
        case 0x234b7cu: goto label_234b7c;
        case 0x234b80u: goto label_234b80;
        case 0x234b84u: goto label_234b84;
        case 0x234b88u: goto label_234b88;
        case 0x234b8cu: goto label_234b8c;
        case 0x234b90u: goto label_234b90;
        case 0x234b94u: goto label_234b94;
        case 0x234b98u: goto label_234b98;
        case 0x234b9cu: goto label_234b9c;
        case 0x234ba0u: goto label_234ba0;
        case 0x234ba4u: goto label_234ba4;
        case 0x234ba8u: goto label_234ba8;
        case 0x234bacu: goto label_234bac;
        case 0x234bb0u: goto label_234bb0;
        case 0x234bb4u: goto label_234bb4;
        case 0x234bb8u: goto label_234bb8;
        case 0x234bbcu: goto label_234bbc;
        case 0x234bc0u: goto label_234bc0;
        case 0x234bc4u: goto label_234bc4;
        case 0x234bc8u: goto label_234bc8;
        case 0x234bccu: goto label_234bcc;
        case 0x234bd0u: goto label_234bd0;
        case 0x234bd4u: goto label_234bd4;
        case 0x234bd8u: goto label_234bd8;
        case 0x234bdcu: goto label_234bdc;
        case 0x234be0u: goto label_234be0;
        case 0x234be4u: goto label_234be4;
        case 0x234be8u: goto label_234be8;
        case 0x234becu: goto label_234bec;
        case 0x234bf0u: goto label_234bf0;
        case 0x234bf4u: goto label_234bf4;
        case 0x234bf8u: goto label_234bf8;
        case 0x234bfcu: goto label_234bfc;
        case 0x234c00u: goto label_234c00;
        case 0x234c04u: goto label_234c04;
        case 0x234c08u: goto label_234c08;
        case 0x234c0cu: goto label_234c0c;
        case 0x234c10u: goto label_234c10;
        case 0x234c14u: goto label_234c14;
        case 0x234c18u: goto label_234c18;
        case 0x234c1cu: goto label_234c1c;
        case 0x234c20u: goto label_234c20;
        case 0x234c24u: goto label_234c24;
        case 0x234c28u: goto label_234c28;
        case 0x234c2cu: goto label_234c2c;
        case 0x234c30u: goto label_234c30;
        case 0x234c34u: goto label_234c34;
        case 0x234c38u: goto label_234c38;
        case 0x234c3cu: goto label_234c3c;
        case 0x234c40u: goto label_234c40;
        case 0x234c44u: goto label_234c44;
        case 0x234c48u: goto label_234c48;
        case 0x234c4cu: goto label_234c4c;
        case 0x234c50u: goto label_234c50;
        case 0x234c54u: goto label_234c54;
        case 0x234c58u: goto label_234c58;
        case 0x234c5cu: goto label_234c5c;
        case 0x234c60u: goto label_234c60;
        case 0x234c64u: goto label_234c64;
        case 0x234c68u: goto label_234c68;
        case 0x234c6cu: goto label_234c6c;
        case 0x234c70u: goto label_234c70;
        case 0x234c74u: goto label_234c74;
        case 0x234c78u: goto label_234c78;
        case 0x234c7cu: goto label_234c7c;
        case 0x234c80u: goto label_234c80;
        case 0x234c84u: goto label_234c84;
        case 0x234c88u: goto label_234c88;
        case 0x234c8cu: goto label_234c8c;
        case 0x234c90u: goto label_234c90;
        case 0x234c94u: goto label_234c94;
        case 0x234c98u: goto label_234c98;
        case 0x234c9cu: goto label_234c9c;
        case 0x234ca0u: goto label_234ca0;
        case 0x234ca4u: goto label_234ca4;
        case 0x234ca8u: goto label_234ca8;
        case 0x234cacu: goto label_234cac;
        case 0x234cb0u: goto label_234cb0;
        case 0x234cb4u: goto label_234cb4;
        case 0x234cb8u: goto label_234cb8;
        case 0x234cbcu: goto label_234cbc;
        case 0x234cc0u: goto label_234cc0;
        case 0x234cc4u: goto label_234cc4;
        case 0x234cc8u: goto label_234cc8;
        case 0x234cccu: goto label_234ccc;
        case 0x234cd0u: goto label_234cd0;
        case 0x234cd4u: goto label_234cd4;
        case 0x234cd8u: goto label_234cd8;
        case 0x234cdcu: goto label_234cdc;
        case 0x234ce0u: goto label_234ce0;
        case 0x234ce4u: goto label_234ce4;
        case 0x234ce8u: goto label_234ce8;
        case 0x234cecu: goto label_234cec;
        case 0x234cf0u: goto label_234cf0;
        case 0x234cf4u: goto label_234cf4;
        case 0x234cf8u: goto label_234cf8;
        case 0x234cfcu: goto label_234cfc;
        case 0x234d00u: goto label_234d00;
        case 0x234d04u: goto label_234d04;
        case 0x234d08u: goto label_234d08;
        case 0x234d0cu: goto label_234d0c;
        case 0x234d10u: goto label_234d10;
        case 0x234d14u: goto label_234d14;
        case 0x234d18u: goto label_234d18;
        case 0x234d1cu: goto label_234d1c;
        case 0x234d20u: goto label_234d20;
        case 0x234d24u: goto label_234d24;
        case 0x234d28u: goto label_234d28;
        case 0x234d2cu: goto label_234d2c;
        case 0x234d30u: goto label_234d30;
        case 0x234d34u: goto label_234d34;
        case 0x234d38u: goto label_234d38;
        case 0x234d3cu: goto label_234d3c;
        case 0x234d40u: goto label_234d40;
        case 0x234d44u: goto label_234d44;
        case 0x234d48u: goto label_234d48;
        case 0x234d4cu: goto label_234d4c;
        case 0x234d50u: goto label_234d50;
        case 0x234d54u: goto label_234d54;
        case 0x234d58u: goto label_234d58;
        case 0x234d5cu: goto label_234d5c;
        case 0x234d60u: goto label_234d60;
        case 0x234d64u: goto label_234d64;
        case 0x234d68u: goto label_234d68;
        case 0x234d6cu: goto label_234d6c;
        case 0x234d70u: goto label_234d70;
        case 0x234d74u: goto label_234d74;
        case 0x234d78u: goto label_234d78;
        case 0x234d7cu: goto label_234d7c;
        case 0x234d80u: goto label_234d80;
        case 0x234d84u: goto label_234d84;
        case 0x234d88u: goto label_234d88;
        case 0x234d8cu: goto label_234d8c;
        case 0x234d90u: goto label_234d90;
        case 0x234d94u: goto label_234d94;
        case 0x234d98u: goto label_234d98;
        case 0x234d9cu: goto label_234d9c;
        case 0x234da0u: goto label_234da0;
        case 0x234da4u: goto label_234da4;
        case 0x234da8u: goto label_234da8;
        case 0x234dacu: goto label_234dac;
        case 0x234db0u: goto label_234db0;
        case 0x234db4u: goto label_234db4;
        case 0x234db8u: goto label_234db8;
        case 0x234dbcu: goto label_234dbc;
        case 0x234dc0u: goto label_234dc0;
        case 0x234dc4u: goto label_234dc4;
        case 0x234dc8u: goto label_234dc8;
        case 0x234dccu: goto label_234dcc;
        case 0x234dd0u: goto label_234dd0;
        case 0x234dd4u: goto label_234dd4;
        case 0x234dd8u: goto label_234dd8;
        case 0x234ddcu: goto label_234ddc;
        case 0x234de0u: goto label_234de0;
        case 0x234de4u: goto label_234de4;
        case 0x234de8u: goto label_234de8;
        case 0x234decu: goto label_234dec;
        case 0x234df0u: goto label_234df0;
        case 0x234df4u: goto label_234df4;
        case 0x234df8u: goto label_234df8;
        case 0x234dfcu: goto label_234dfc;
        case 0x234e00u: goto label_234e00;
        case 0x234e04u: goto label_234e04;
        case 0x234e08u: goto label_234e08;
        case 0x234e0cu: goto label_234e0c;
        case 0x234e10u: goto label_234e10;
        case 0x234e14u: goto label_234e14;
        case 0x234e18u: goto label_234e18;
        case 0x234e1cu: goto label_234e1c;
        case 0x234e20u: goto label_234e20;
        case 0x234e24u: goto label_234e24;
        case 0x234e28u: goto label_234e28;
        case 0x234e2cu: goto label_234e2c;
        case 0x234e30u: goto label_234e30;
        case 0x234e34u: goto label_234e34;
        case 0x234e38u: goto label_234e38;
        case 0x234e3cu: goto label_234e3c;
        case 0x234e40u: goto label_234e40;
        case 0x234e44u: goto label_234e44;
        case 0x234e48u: goto label_234e48;
        case 0x234e4cu: goto label_234e4c;
        case 0x234e50u: goto label_234e50;
        case 0x234e54u: goto label_234e54;
        case 0x234e58u: goto label_234e58;
        case 0x234e5cu: goto label_234e5c;
        case 0x234e60u: goto label_234e60;
        case 0x234e64u: goto label_234e64;
        case 0x234e68u: goto label_234e68;
        case 0x234e6cu: goto label_234e6c;
        case 0x234e70u: goto label_234e70;
        case 0x234e74u: goto label_234e74;
        case 0x234e78u: goto label_234e78;
        case 0x234e7cu: goto label_234e7c;
        case 0x234e80u: goto label_234e80;
        case 0x234e84u: goto label_234e84;
        case 0x234e88u: goto label_234e88;
        case 0x234e8cu: goto label_234e8c;
        case 0x234e90u: goto label_234e90;
        case 0x234e94u: goto label_234e94;
        case 0x234e98u: goto label_234e98;
        case 0x234e9cu: goto label_234e9c;
        case 0x234ea0u: goto label_234ea0;
        case 0x234ea4u: goto label_234ea4;
        case 0x234ea8u: goto label_234ea8;
        case 0x234eacu: goto label_234eac;
        case 0x234eb0u: goto label_234eb0;
        case 0x234eb4u: goto label_234eb4;
        case 0x234eb8u: goto label_234eb8;
        case 0x234ebcu: goto label_234ebc;
        case 0x234ec0u: goto label_234ec0;
        case 0x234ec4u: goto label_234ec4;
        case 0x234ec8u: goto label_234ec8;
        case 0x234eccu: goto label_234ecc;
        case 0x234ed0u: goto label_234ed0;
        case 0x234ed4u: goto label_234ed4;
        case 0x234ed8u: goto label_234ed8;
        case 0x234edcu: goto label_234edc;
        case 0x234ee0u: goto label_234ee0;
        case 0x234ee4u: goto label_234ee4;
        case 0x234ee8u: goto label_234ee8;
        case 0x234eecu: goto label_234eec;
        case 0x234ef0u: goto label_234ef0;
        case 0x234ef4u: goto label_234ef4;
        case 0x234ef8u: goto label_234ef8;
        case 0x234efcu: goto label_234efc;
        case 0x234f00u: goto label_234f00;
        case 0x234f04u: goto label_234f04;
        case 0x234f08u: goto label_234f08;
        case 0x234f0cu: goto label_234f0c;
        case 0x234f10u: goto label_234f10;
        case 0x234f14u: goto label_234f14;
        case 0x234f18u: goto label_234f18;
        case 0x234f1cu: goto label_234f1c;
        case 0x234f20u: goto label_234f20;
        case 0x234f24u: goto label_234f24;
        case 0x234f28u: goto label_234f28;
        case 0x234f2cu: goto label_234f2c;
        case 0x234f30u: goto label_234f30;
        case 0x234f34u: goto label_234f34;
        case 0x234f38u: goto label_234f38;
        case 0x234f3cu: goto label_234f3c;
        case 0x234f40u: goto label_234f40;
        case 0x234f44u: goto label_234f44;
        case 0x234f48u: goto label_234f48;
        case 0x234f4cu: goto label_234f4c;
        case 0x234f50u: goto label_234f50;
        case 0x234f54u: goto label_234f54;
        case 0x234f58u: goto label_234f58;
        case 0x234f5cu: goto label_234f5c;
        case 0x234f60u: goto label_234f60;
        case 0x234f64u: goto label_234f64;
        case 0x234f68u: goto label_234f68;
        case 0x234f6cu: goto label_234f6c;
        case 0x234f70u: goto label_234f70;
        case 0x234f74u: goto label_234f74;
        case 0x234f78u: goto label_234f78;
        case 0x234f7cu: goto label_234f7c;
        case 0x234f80u: goto label_234f80;
        case 0x234f84u: goto label_234f84;
        case 0x234f88u: goto label_234f88;
        case 0x234f8cu: goto label_234f8c;
        case 0x234f90u: goto label_234f90;
        case 0x234f94u: goto label_234f94;
        case 0x234f98u: goto label_234f98;
        case 0x234f9cu: goto label_234f9c;
        case 0x234fa0u: goto label_234fa0;
        case 0x234fa4u: goto label_234fa4;
        case 0x234fa8u: goto label_234fa8;
        case 0x234facu: goto label_234fac;
        case 0x234fb0u: goto label_234fb0;
        case 0x234fb4u: goto label_234fb4;
        case 0x234fb8u: goto label_234fb8;
        case 0x234fbcu: goto label_234fbc;
        case 0x234fc0u: goto label_234fc0;
        case 0x234fc4u: goto label_234fc4;
        case 0x234fc8u: goto label_234fc8;
        case 0x234fccu: goto label_234fcc;
        case 0x234fd0u: goto label_234fd0;
        case 0x234fd4u: goto label_234fd4;
        case 0x234fd8u: goto label_234fd8;
        case 0x234fdcu: goto label_234fdc;
        case 0x234fe0u: goto label_234fe0;
        case 0x234fe4u: goto label_234fe4;
        case 0x234fe8u: goto label_234fe8;
        case 0x234fecu: goto label_234fec;
        case 0x234ff0u: goto label_234ff0;
        case 0x234ff4u: goto label_234ff4;
        case 0x234ff8u: goto label_234ff8;
        case 0x234ffcu: goto label_234ffc;
        case 0x235000u: goto label_235000;
        case 0x235004u: goto label_235004;
        case 0x235008u: goto label_235008;
        case 0x23500cu: goto label_23500c;
        case 0x235010u: goto label_235010;
        case 0x235014u: goto label_235014;
        case 0x235018u: goto label_235018;
        case 0x23501cu: goto label_23501c;
        case 0x235020u: goto label_235020;
        case 0x235024u: goto label_235024;
        case 0x235028u: goto label_235028;
        case 0x23502cu: goto label_23502c;
        case 0x235030u: goto label_235030;
        case 0x235034u: goto label_235034;
        case 0x235038u: goto label_235038;
        case 0x23503cu: goto label_23503c;
        case 0x235040u: goto label_235040;
        case 0x235044u: goto label_235044;
        case 0x235048u: goto label_235048;
        case 0x23504cu: goto label_23504c;
        case 0x235050u: goto label_235050;
        case 0x235054u: goto label_235054;
        case 0x235058u: goto label_235058;
        case 0x23505cu: goto label_23505c;
        case 0x235060u: goto label_235060;
        case 0x235064u: goto label_235064;
        case 0x235068u: goto label_235068;
        case 0x23506cu: goto label_23506c;
        case 0x235070u: goto label_235070;
        case 0x235074u: goto label_235074;
        case 0x235078u: goto label_235078;
        case 0x23507cu: goto label_23507c;
        case 0x235080u: goto label_235080;
        case 0x235084u: goto label_235084;
        case 0x235088u: goto label_235088;
        case 0x23508cu: goto label_23508c;
        case 0x235090u: goto label_235090;
        case 0x235094u: goto label_235094;
        case 0x235098u: goto label_235098;
        case 0x23509cu: goto label_23509c;
        case 0x2350a0u: goto label_2350a0;
        case 0x2350a4u: goto label_2350a4;
        case 0x2350a8u: goto label_2350a8;
        case 0x2350acu: goto label_2350ac;
        case 0x2350b0u: goto label_2350b0;
        case 0x2350b4u: goto label_2350b4;
        case 0x2350b8u: goto label_2350b8;
        case 0x2350bcu: goto label_2350bc;
        case 0x2350c0u: goto label_2350c0;
        case 0x2350c4u: goto label_2350c4;
        case 0x2350c8u: goto label_2350c8;
        case 0x2350ccu: goto label_2350cc;
        case 0x2350d0u: goto label_2350d0;
        case 0x2350d4u: goto label_2350d4;
        case 0x2350d8u: goto label_2350d8;
        case 0x2350dcu: goto label_2350dc;
        case 0x2350e0u: goto label_2350e0;
        case 0x2350e4u: goto label_2350e4;
        case 0x2350e8u: goto label_2350e8;
        case 0x2350ecu: goto label_2350ec;
        case 0x2350f0u: goto label_2350f0;
        case 0x2350f4u: goto label_2350f4;
        case 0x2350f8u: goto label_2350f8;
        case 0x2350fcu: goto label_2350fc;
        case 0x235100u: goto label_235100;
        case 0x235104u: goto label_235104;
        case 0x235108u: goto label_235108;
        case 0x23510cu: goto label_23510c;
        case 0x235110u: goto label_235110;
        case 0x235114u: goto label_235114;
        case 0x235118u: goto label_235118;
        case 0x23511cu: goto label_23511c;
        case 0x235120u: goto label_235120;
        case 0x235124u: goto label_235124;
        case 0x235128u: goto label_235128;
        case 0x23512cu: goto label_23512c;
        case 0x235130u: goto label_235130;
        case 0x235134u: goto label_235134;
        case 0x235138u: goto label_235138;
        case 0x23513cu: goto label_23513c;
        case 0x235140u: goto label_235140;
        case 0x235144u: goto label_235144;
        case 0x235148u: goto label_235148;
        case 0x23514cu: goto label_23514c;
        case 0x235150u: goto label_235150;
        case 0x235154u: goto label_235154;
        case 0x235158u: goto label_235158;
        case 0x23515cu: goto label_23515c;
        case 0x235160u: goto label_235160;
        case 0x235164u: goto label_235164;
        case 0x235168u: goto label_235168;
        case 0x23516cu: goto label_23516c;
        case 0x235170u: goto label_235170;
        case 0x235174u: goto label_235174;
        case 0x235178u: goto label_235178;
        case 0x23517cu: goto label_23517c;
        case 0x235180u: goto label_235180;
        case 0x235184u: goto label_235184;
        case 0x235188u: goto label_235188;
        case 0x23518cu: goto label_23518c;
        case 0x235190u: goto label_235190;
        case 0x235194u: goto label_235194;
        case 0x235198u: goto label_235198;
        case 0x23519cu: goto label_23519c;
        case 0x2351a0u: goto label_2351a0;
        case 0x2351a4u: goto label_2351a4;
        case 0x2351a8u: goto label_2351a8;
        case 0x2351acu: goto label_2351ac;
        case 0x2351b0u: goto label_2351b0;
        case 0x2351b4u: goto label_2351b4;
        case 0x2351b8u: goto label_2351b8;
        case 0x2351bcu: goto label_2351bc;
        case 0x2351c0u: goto label_2351c0;
        case 0x2351c4u: goto label_2351c4;
        case 0x2351c8u: goto label_2351c8;
        case 0x2351ccu: goto label_2351cc;
        case 0x2351d0u: goto label_2351d0;
        case 0x2351d4u: goto label_2351d4;
        case 0x2351d8u: goto label_2351d8;
        case 0x2351dcu: goto label_2351dc;
        case 0x2351e0u: goto label_2351e0;
        case 0x2351e4u: goto label_2351e4;
        case 0x2351e8u: goto label_2351e8;
        case 0x2351ecu: goto label_2351ec;
        case 0x2351f0u: goto label_2351f0;
        case 0x2351f4u: goto label_2351f4;
        case 0x2351f8u: goto label_2351f8;
        case 0x2351fcu: goto label_2351fc;
        case 0x235200u: goto label_235200;
        case 0x235204u: goto label_235204;
        case 0x235208u: goto label_235208;
        case 0x23520cu: goto label_23520c;
        case 0x235210u: goto label_235210;
        case 0x235214u: goto label_235214;
        case 0x235218u: goto label_235218;
        case 0x23521cu: goto label_23521c;
        case 0x235220u: goto label_235220;
        case 0x235224u: goto label_235224;
        case 0x235228u: goto label_235228;
        case 0x23522cu: goto label_23522c;
        case 0x235230u: goto label_235230;
        case 0x235234u: goto label_235234;
        case 0x235238u: goto label_235238;
        case 0x23523cu: goto label_23523c;
        case 0x235240u: goto label_235240;
        case 0x235244u: goto label_235244;
        case 0x235248u: goto label_235248;
        case 0x23524cu: goto label_23524c;
        case 0x235250u: goto label_235250;
        case 0x235254u: goto label_235254;
        case 0x235258u: goto label_235258;
        case 0x23525cu: goto label_23525c;
        case 0x235260u: goto label_235260;
        case 0x235264u: goto label_235264;
        case 0x235268u: goto label_235268;
        case 0x23526cu: goto label_23526c;
        case 0x235270u: goto label_235270;
        case 0x235274u: goto label_235274;
        case 0x235278u: goto label_235278;
        case 0x23527cu: goto label_23527c;
        case 0x235280u: goto label_235280;
        case 0x235284u: goto label_235284;
        case 0x235288u: goto label_235288;
        case 0x23528cu: goto label_23528c;
        case 0x235290u: goto label_235290;
        case 0x235294u: goto label_235294;
        case 0x235298u: goto label_235298;
        case 0x23529cu: goto label_23529c;
        case 0x2352a0u: goto label_2352a0;
        case 0x2352a4u: goto label_2352a4;
        case 0x2352a8u: goto label_2352a8;
        case 0x2352acu: goto label_2352ac;
        case 0x2352b0u: goto label_2352b0;
        case 0x2352b4u: goto label_2352b4;
        case 0x2352b8u: goto label_2352b8;
        case 0x2352bcu: goto label_2352bc;
        case 0x2352c0u: goto label_2352c0;
        case 0x2352c4u: goto label_2352c4;
        case 0x2352c8u: goto label_2352c8;
        case 0x2352ccu: goto label_2352cc;
        case 0x2352d0u: goto label_2352d0;
        case 0x2352d4u: goto label_2352d4;
        case 0x2352d8u: goto label_2352d8;
        case 0x2352dcu: goto label_2352dc;
        case 0x2352e0u: goto label_2352e0;
        case 0x2352e4u: goto label_2352e4;
        case 0x2352e8u: goto label_2352e8;
        case 0x2352ecu: goto label_2352ec;
        case 0x2352f0u: goto label_2352f0;
        case 0x2352f4u: goto label_2352f4;
        case 0x2352f8u: goto label_2352f8;
        case 0x2352fcu: goto label_2352fc;
        case 0x235300u: goto label_235300;
        case 0x235304u: goto label_235304;
        case 0x235308u: goto label_235308;
        case 0x23530cu: goto label_23530c;
        case 0x235310u: goto label_235310;
        case 0x235314u: goto label_235314;
        case 0x235318u: goto label_235318;
        case 0x23531cu: goto label_23531c;
        case 0x235320u: goto label_235320;
        case 0x235324u: goto label_235324;
        case 0x235328u: goto label_235328;
        case 0x23532cu: goto label_23532c;
        case 0x235330u: goto label_235330;
        case 0x235334u: goto label_235334;
        case 0x235338u: goto label_235338;
        case 0x23533cu: goto label_23533c;
        case 0x235340u: goto label_235340;
        case 0x235344u: goto label_235344;
        case 0x235348u: goto label_235348;
        case 0x23534cu: goto label_23534c;
        case 0x235350u: goto label_235350;
        case 0x235354u: goto label_235354;
        case 0x235358u: goto label_235358;
        case 0x23535cu: goto label_23535c;
        case 0x235360u: goto label_235360;
        case 0x235364u: goto label_235364;
        case 0x235368u: goto label_235368;
        case 0x23536cu: goto label_23536c;
        case 0x235370u: goto label_235370;
        case 0x235374u: goto label_235374;
        case 0x235378u: goto label_235378;
        case 0x23537cu: goto label_23537c;
        case 0x235380u: goto label_235380;
        case 0x235384u: goto label_235384;
        case 0x235388u: goto label_235388;
        case 0x23538cu: goto label_23538c;
        case 0x235390u: goto label_235390;
        case 0x235394u: goto label_235394;
        case 0x235398u: goto label_235398;
        case 0x23539cu: goto label_23539c;
        case 0x2353a0u: goto label_2353a0;
        case 0x2353a4u: goto label_2353a4;
        case 0x2353a8u: goto label_2353a8;
        case 0x2353acu: goto label_2353ac;
        case 0x2353b0u: goto label_2353b0;
        case 0x2353b4u: goto label_2353b4;
        case 0x2353b8u: goto label_2353b8;
        case 0x2353bcu: goto label_2353bc;
        case 0x2353c0u: goto label_2353c0;
        case 0x2353c4u: goto label_2353c4;
        case 0x2353c8u: goto label_2353c8;
        case 0x2353ccu: goto label_2353cc;
        case 0x2353d0u: goto label_2353d0;
        case 0x2353d4u: goto label_2353d4;
        case 0x2353d8u: goto label_2353d8;
        case 0x2353dcu: goto label_2353dc;
        case 0x2353e0u: goto label_2353e0;
        case 0x2353e4u: goto label_2353e4;
        case 0x2353e8u: goto label_2353e8;
        case 0x2353ecu: goto label_2353ec;
        case 0x2353f0u: goto label_2353f0;
        case 0x2353f4u: goto label_2353f4;
        case 0x2353f8u: goto label_2353f8;
        case 0x2353fcu: goto label_2353fc;
        case 0x235400u: goto label_235400;
        case 0x235404u: goto label_235404;
        case 0x235408u: goto label_235408;
        case 0x23540cu: goto label_23540c;
        case 0x235410u: goto label_235410;
        case 0x235414u: goto label_235414;
        case 0x235418u: goto label_235418;
        case 0x23541cu: goto label_23541c;
        case 0x235420u: goto label_235420;
        case 0x235424u: goto label_235424;
        case 0x235428u: goto label_235428;
        case 0x23542cu: goto label_23542c;
        case 0x235430u: goto label_235430;
        case 0x235434u: goto label_235434;
        case 0x235438u: goto label_235438;
        case 0x23543cu: goto label_23543c;
        case 0x235440u: goto label_235440;
        case 0x235444u: goto label_235444;
        case 0x235448u: goto label_235448;
        case 0x23544cu: goto label_23544c;
        case 0x235450u: goto label_235450;
        case 0x235454u: goto label_235454;
        case 0x235458u: goto label_235458;
        case 0x23545cu: goto label_23545c;
        case 0x235460u: goto label_235460;
        case 0x235464u: goto label_235464;
        case 0x235468u: goto label_235468;
        case 0x23546cu: goto label_23546c;
        case 0x235470u: goto label_235470;
        case 0x235474u: goto label_235474;
        case 0x235478u: goto label_235478;
        case 0x23547cu: goto label_23547c;
        case 0x235480u: goto label_235480;
        case 0x235484u: goto label_235484;
        case 0x235488u: goto label_235488;
        case 0x23548cu: goto label_23548c;
        case 0x235490u: goto label_235490;
        case 0x235494u: goto label_235494;
        case 0x235498u: goto label_235498;
        case 0x23549cu: goto label_23549c;
        case 0x2354a0u: goto label_2354a0;
        case 0x2354a4u: goto label_2354a4;
        case 0x2354a8u: goto label_2354a8;
        case 0x2354acu: goto label_2354ac;
        case 0x2354b0u: goto label_2354b0;
        case 0x2354b4u: goto label_2354b4;
        case 0x2354b8u: goto label_2354b8;
        case 0x2354bcu: goto label_2354bc;
        case 0x2354c0u: goto label_2354c0;
        case 0x2354c4u: goto label_2354c4;
        case 0x2354c8u: goto label_2354c8;
        case 0x2354ccu: goto label_2354cc;
        case 0x2354d0u: goto label_2354d0;
        case 0x2354d4u: goto label_2354d4;
        case 0x2354d8u: goto label_2354d8;
        case 0x2354dcu: goto label_2354dc;
        case 0x2354e0u: goto label_2354e0;
        case 0x2354e4u: goto label_2354e4;
        case 0x2354e8u: goto label_2354e8;
        case 0x2354ecu: goto label_2354ec;
        case 0x2354f0u: goto label_2354f0;
        case 0x2354f4u: goto label_2354f4;
        case 0x2354f8u: goto label_2354f8;
        case 0x2354fcu: goto label_2354fc;
        case 0x235500u: goto label_235500;
        case 0x235504u: goto label_235504;
        case 0x235508u: goto label_235508;
        case 0x23550cu: goto label_23550c;
        case 0x235510u: goto label_235510;
        case 0x235514u: goto label_235514;
        case 0x235518u: goto label_235518;
        case 0x23551cu: goto label_23551c;
        case 0x235520u: goto label_235520;
        case 0x235524u: goto label_235524;
        case 0x235528u: goto label_235528;
        case 0x23552cu: goto label_23552c;
        case 0x235530u: goto label_235530;
        case 0x235534u: goto label_235534;
        case 0x235538u: goto label_235538;
        case 0x23553cu: goto label_23553c;
        case 0x235540u: goto label_235540;
        case 0x235544u: goto label_235544;
        case 0x235548u: goto label_235548;
        case 0x23554cu: goto label_23554c;
        case 0x235550u: goto label_235550;
        case 0x235554u: goto label_235554;
        case 0x235558u: goto label_235558;
        case 0x23555cu: goto label_23555c;
        case 0x235560u: goto label_235560;
        case 0x235564u: goto label_235564;
        case 0x235568u: goto label_235568;
        case 0x23556cu: goto label_23556c;
        case 0x235570u: goto label_235570;
        case 0x235574u: goto label_235574;
        case 0x235578u: goto label_235578;
        case 0x23557cu: goto label_23557c;
        case 0x235580u: goto label_235580;
        case 0x235584u: goto label_235584;
        case 0x235588u: goto label_235588;
        case 0x23558cu: goto label_23558c;
        case 0x235590u: goto label_235590;
        case 0x235594u: goto label_235594;
        case 0x235598u: goto label_235598;
        case 0x23559cu: goto label_23559c;
        case 0x2355a0u: goto label_2355a0;
        case 0x2355a4u: goto label_2355a4;
        case 0x2355a8u: goto label_2355a8;
        case 0x2355acu: goto label_2355ac;
        case 0x2355b0u: goto label_2355b0;
        case 0x2355b4u: goto label_2355b4;
        case 0x2355b8u: goto label_2355b8;
        case 0x2355bcu: goto label_2355bc;
        case 0x2355c0u: goto label_2355c0;
        case 0x2355c4u: goto label_2355c4;
        case 0x2355c8u: goto label_2355c8;
        case 0x2355ccu: goto label_2355cc;
        case 0x2355d0u: goto label_2355d0;
        case 0x2355d4u: goto label_2355d4;
        case 0x2355d8u: goto label_2355d8;
        case 0x2355dcu: goto label_2355dc;
        case 0x2355e0u: goto label_2355e0;
        case 0x2355e4u: goto label_2355e4;
        case 0x2355e8u: goto label_2355e8;
        case 0x2355ecu: goto label_2355ec;
        case 0x2355f0u: goto label_2355f0;
        case 0x2355f4u: goto label_2355f4;
        case 0x2355f8u: goto label_2355f8;
        case 0x2355fcu: goto label_2355fc;
        case 0x235600u: goto label_235600;
        case 0x235604u: goto label_235604;
        case 0x235608u: goto label_235608;
        case 0x23560cu: goto label_23560c;
        case 0x235610u: goto label_235610;
        case 0x235614u: goto label_235614;
        case 0x235618u: goto label_235618;
        case 0x23561cu: goto label_23561c;
        case 0x235620u: goto label_235620;
        case 0x235624u: goto label_235624;
        case 0x235628u: goto label_235628;
        case 0x23562cu: goto label_23562c;
        case 0x235630u: goto label_235630;
        case 0x235634u: goto label_235634;
        case 0x235638u: goto label_235638;
        case 0x23563cu: goto label_23563c;
        case 0x235640u: goto label_235640;
        case 0x235644u: goto label_235644;
        case 0x235648u: goto label_235648;
        case 0x23564cu: goto label_23564c;
        case 0x235650u: goto label_235650;
        case 0x235654u: goto label_235654;
        case 0x235658u: goto label_235658;
        case 0x23565cu: goto label_23565c;
        case 0x235660u: goto label_235660;
        case 0x235664u: goto label_235664;
        case 0x235668u: goto label_235668;
        case 0x23566cu: goto label_23566c;
        case 0x235670u: goto label_235670;
        case 0x235674u: goto label_235674;
        case 0x235678u: goto label_235678;
        case 0x23567cu: goto label_23567c;
        case 0x235680u: goto label_235680;
        case 0x235684u: goto label_235684;
        case 0x235688u: goto label_235688;
        case 0x23568cu: goto label_23568c;
        case 0x235690u: goto label_235690;
        case 0x235694u: goto label_235694;
        case 0x235698u: goto label_235698;
        case 0x23569cu: goto label_23569c;
        case 0x2356a0u: goto label_2356a0;
        case 0x2356a4u: goto label_2356a4;
        case 0x2356a8u: goto label_2356a8;
        case 0x2356acu: goto label_2356ac;
        case 0x2356b0u: goto label_2356b0;
        case 0x2356b4u: goto label_2356b4;
        case 0x2356b8u: goto label_2356b8;
        case 0x2356bcu: goto label_2356bc;
        case 0x2356c0u: goto label_2356c0;
        case 0x2356c4u: goto label_2356c4;
        case 0x2356c8u: goto label_2356c8;
        case 0x2356ccu: goto label_2356cc;
        case 0x2356d0u: goto label_2356d0;
        case 0x2356d4u: goto label_2356d4;
        case 0x2356d8u: goto label_2356d8;
        case 0x2356dcu: goto label_2356dc;
        case 0x2356e0u: goto label_2356e0;
        case 0x2356e4u: goto label_2356e4;
        case 0x2356e8u: goto label_2356e8;
        case 0x2356ecu: goto label_2356ec;
        case 0x2356f0u: goto label_2356f0;
        case 0x2356f4u: goto label_2356f4;
        case 0x2356f8u: goto label_2356f8;
        case 0x2356fcu: goto label_2356fc;
        case 0x235700u: goto label_235700;
        case 0x235704u: goto label_235704;
        case 0x235708u: goto label_235708;
        case 0x23570cu: goto label_23570c;
        case 0x235710u: goto label_235710;
        case 0x235714u: goto label_235714;
        case 0x235718u: goto label_235718;
        case 0x23571cu: goto label_23571c;
        case 0x235720u: goto label_235720;
        case 0x235724u: goto label_235724;
        case 0x235728u: goto label_235728;
        case 0x23572cu: goto label_23572c;
        case 0x235730u: goto label_235730;
        case 0x235734u: goto label_235734;
        case 0x235738u: goto label_235738;
        case 0x23573cu: goto label_23573c;
        case 0x235740u: goto label_235740;
        case 0x235744u: goto label_235744;
        case 0x235748u: goto label_235748;
        case 0x23574cu: goto label_23574c;
        case 0x235750u: goto label_235750;
        case 0x235754u: goto label_235754;
        case 0x235758u: goto label_235758;
        case 0x23575cu: goto label_23575c;
        case 0x235760u: goto label_235760;
        case 0x235764u: goto label_235764;
        case 0x235768u: goto label_235768;
        case 0x23576cu: goto label_23576c;
        case 0x235770u: goto label_235770;
        case 0x235774u: goto label_235774;
        case 0x235778u: goto label_235778;
        case 0x23577cu: goto label_23577c;
        case 0x235780u: goto label_235780;
        case 0x235784u: goto label_235784;
        case 0x235788u: goto label_235788;
        case 0x23578cu: goto label_23578c;
        case 0x235790u: goto label_235790;
        case 0x235794u: goto label_235794;
        case 0x235798u: goto label_235798;
        case 0x23579cu: goto label_23579c;
        case 0x2357a0u: goto label_2357a0;
        case 0x2357a4u: goto label_2357a4;
        case 0x2357a8u: goto label_2357a8;
        case 0x2357acu: goto label_2357ac;
        case 0x2357b0u: goto label_2357b0;
        case 0x2357b4u: goto label_2357b4;
        case 0x2357b8u: goto label_2357b8;
        case 0x2357bcu: goto label_2357bc;
        case 0x2357c0u: goto label_2357c0;
        case 0x2357c4u: goto label_2357c4;
        case 0x2357c8u: goto label_2357c8;
        case 0x2357ccu: goto label_2357cc;
        case 0x2357d0u: goto label_2357d0;
        case 0x2357d4u: goto label_2357d4;
        case 0x2357d8u: goto label_2357d8;
        case 0x2357dcu: goto label_2357dc;
        case 0x2357e0u: goto label_2357e0;
        case 0x2357e4u: goto label_2357e4;
        case 0x2357e8u: goto label_2357e8;
        case 0x2357ecu: goto label_2357ec;
        case 0x2357f0u: goto label_2357f0;
        case 0x2357f4u: goto label_2357f4;
        case 0x2357f8u: goto label_2357f8;
        case 0x2357fcu: goto label_2357fc;
        case 0x235800u: goto label_235800;
        case 0x235804u: goto label_235804;
        case 0x235808u: goto label_235808;
        case 0x23580cu: goto label_23580c;
        case 0x235810u: goto label_235810;
        case 0x235814u: goto label_235814;
        case 0x235818u: goto label_235818;
        case 0x23581cu: goto label_23581c;
        case 0x235820u: goto label_235820;
        case 0x235824u: goto label_235824;
        case 0x235828u: goto label_235828;
        case 0x23582cu: goto label_23582c;
        case 0x235830u: goto label_235830;
        case 0x235834u: goto label_235834;
        case 0x235838u: goto label_235838;
        case 0x23583cu: goto label_23583c;
        case 0x235840u: goto label_235840;
        case 0x235844u: goto label_235844;
        case 0x235848u: goto label_235848;
        case 0x23584cu: goto label_23584c;
        case 0x235850u: goto label_235850;
        case 0x235854u: goto label_235854;
        case 0x235858u: goto label_235858;
        case 0x23585cu: goto label_23585c;
        case 0x235860u: goto label_235860;
        case 0x235864u: goto label_235864;
        case 0x235868u: goto label_235868;
        case 0x23586cu: goto label_23586c;
        case 0x235870u: goto label_235870;
        case 0x235874u: goto label_235874;
        case 0x235878u: goto label_235878;
        case 0x23587cu: goto label_23587c;
        case 0x235880u: goto label_235880;
        case 0x235884u: goto label_235884;
        case 0x235888u: goto label_235888;
        case 0x23588cu: goto label_23588c;
        case 0x235890u: goto label_235890;
        case 0x235894u: goto label_235894;
        case 0x235898u: goto label_235898;
        case 0x23589cu: goto label_23589c;
        case 0x2358a0u: goto label_2358a0;
        case 0x2358a4u: goto label_2358a4;
        case 0x2358a8u: goto label_2358a8;
        case 0x2358acu: goto label_2358ac;
        case 0x2358b0u: goto label_2358b0;
        case 0x2358b4u: goto label_2358b4;
        case 0x2358b8u: goto label_2358b8;
        case 0x2358bcu: goto label_2358bc;
        case 0x2358c0u: goto label_2358c0;
        case 0x2358c4u: goto label_2358c4;
        case 0x2358c8u: goto label_2358c8;
        case 0x2358ccu: goto label_2358cc;
        case 0x2358d0u: goto label_2358d0;
        case 0x2358d4u: goto label_2358d4;
        case 0x2358d8u: goto label_2358d8;
        case 0x2358dcu: goto label_2358dc;
        case 0x2358e0u: goto label_2358e0;
        case 0x2358e4u: goto label_2358e4;
        case 0x2358e8u: goto label_2358e8;
        case 0x2358ecu: goto label_2358ec;
        case 0x2358f0u: goto label_2358f0;
        case 0x2358f4u: goto label_2358f4;
        case 0x2358f8u: goto label_2358f8;
        case 0x2358fcu: goto label_2358fc;
        case 0x235900u: goto label_235900;
        case 0x235904u: goto label_235904;
        case 0x235908u: goto label_235908;
        case 0x23590cu: goto label_23590c;
        case 0x235910u: goto label_235910;
        case 0x235914u: goto label_235914;
        case 0x235918u: goto label_235918;
        case 0x23591cu: goto label_23591c;
        case 0x235920u: goto label_235920;
        case 0x235924u: goto label_235924;
        case 0x235928u: goto label_235928;
        case 0x23592cu: goto label_23592c;
        case 0x235930u: goto label_235930;
        case 0x235934u: goto label_235934;
        case 0x235938u: goto label_235938;
        case 0x23593cu: goto label_23593c;
        case 0x235940u: goto label_235940;
        case 0x235944u: goto label_235944;
        case 0x235948u: goto label_235948;
        case 0x23594cu: goto label_23594c;
        case 0x235950u: goto label_235950;
        case 0x235954u: goto label_235954;
        case 0x235958u: goto label_235958;
        case 0x23595cu: goto label_23595c;
        case 0x235960u: goto label_235960;
        case 0x235964u: goto label_235964;
        case 0x235968u: goto label_235968;
        case 0x23596cu: goto label_23596c;
        case 0x235970u: goto label_235970;
        case 0x235974u: goto label_235974;
        case 0x235978u: goto label_235978;
        case 0x23597cu: goto label_23597c;
        case 0x235980u: goto label_235980;
        case 0x235984u: goto label_235984;
        case 0x235988u: goto label_235988;
        case 0x23598cu: goto label_23598c;
        case 0x235990u: goto label_235990;
        case 0x235994u: goto label_235994;
        case 0x235998u: goto label_235998;
        case 0x23599cu: goto label_23599c;
        case 0x2359a0u: goto label_2359a0;
        case 0x2359a4u: goto label_2359a4;
        case 0x2359a8u: goto label_2359a8;
        case 0x2359acu: goto label_2359ac;
        case 0x2359b0u: goto label_2359b0;
        case 0x2359b4u: goto label_2359b4;
        case 0x2359b8u: goto label_2359b8;
        case 0x2359bcu: goto label_2359bc;
        case 0x2359c0u: goto label_2359c0;
        case 0x2359c4u: goto label_2359c4;
        case 0x2359c8u: goto label_2359c8;
        case 0x2359ccu: goto label_2359cc;
        case 0x2359d0u: goto label_2359d0;
        case 0x2359d4u: goto label_2359d4;
        case 0x2359d8u: goto label_2359d8;
        case 0x2359dcu: goto label_2359dc;
        case 0x2359e0u: goto label_2359e0;
        case 0x2359e4u: goto label_2359e4;
        case 0x2359e8u: goto label_2359e8;
        case 0x2359ecu: goto label_2359ec;
        case 0x2359f0u: goto label_2359f0;
        case 0x2359f4u: goto label_2359f4;
        case 0x2359f8u: goto label_2359f8;
        case 0x2359fcu: goto label_2359fc;
        case 0x235a00u: goto label_235a00;
        case 0x235a04u: goto label_235a04;
        case 0x235a08u: goto label_235a08;
        case 0x235a0cu: goto label_235a0c;
        case 0x235a10u: goto label_235a10;
        case 0x235a14u: goto label_235a14;
        case 0x235a18u: goto label_235a18;
        case 0x235a1cu: goto label_235a1c;
        case 0x235a20u: goto label_235a20;
        case 0x235a24u: goto label_235a24;
        case 0x235a28u: goto label_235a28;
        case 0x235a2cu: goto label_235a2c;
        case 0x235a30u: goto label_235a30;
        case 0x235a34u: goto label_235a34;
        case 0x235a38u: goto label_235a38;
        case 0x235a3cu: goto label_235a3c;
        case 0x235a40u: goto label_235a40;
        case 0x235a44u: goto label_235a44;
        case 0x235a48u: goto label_235a48;
        case 0x235a4cu: goto label_235a4c;
        case 0x235a50u: goto label_235a50;
        case 0x235a54u: goto label_235a54;
        case 0x235a58u: goto label_235a58;
        case 0x235a5cu: goto label_235a5c;
        case 0x235a60u: goto label_235a60;
        case 0x235a64u: goto label_235a64;
        case 0x235a68u: goto label_235a68;
        case 0x235a6cu: goto label_235a6c;
        case 0x235a70u: goto label_235a70;
        case 0x235a74u: goto label_235a74;
        case 0x235a78u: goto label_235a78;
        case 0x235a7cu: goto label_235a7c;
        case 0x235a80u: goto label_235a80;
        case 0x235a84u: goto label_235a84;
        case 0x235a88u: goto label_235a88;
        case 0x235a8cu: goto label_235a8c;
        case 0x235a90u: goto label_235a90;
        case 0x235a94u: goto label_235a94;
        case 0x235a98u: goto label_235a98;
        case 0x235a9cu: goto label_235a9c;
        case 0x235aa0u: goto label_235aa0;
        case 0x235aa4u: goto label_235aa4;
        case 0x235aa8u: goto label_235aa8;
        case 0x235aacu: goto label_235aac;
        case 0x235ab0u: goto label_235ab0;
        case 0x235ab4u: goto label_235ab4;
        case 0x235ab8u: goto label_235ab8;
        case 0x235abcu: goto label_235abc;
        case 0x235ac0u: goto label_235ac0;
        case 0x235ac4u: goto label_235ac4;
        case 0x235ac8u: goto label_235ac8;
        case 0x235accu: goto label_235acc;
        case 0x235ad0u: goto label_235ad0;
        case 0x235ad4u: goto label_235ad4;
        case 0x235ad8u: goto label_235ad8;
        case 0x235adcu: goto label_235adc;
        case 0x235ae0u: goto label_235ae0;
        case 0x235ae4u: goto label_235ae4;
        case 0x235ae8u: goto label_235ae8;
        case 0x235aecu: goto label_235aec;
        case 0x235af0u: goto label_235af0;
        case 0x235af4u: goto label_235af4;
        case 0x235af8u: goto label_235af8;
        case 0x235afcu: goto label_235afc;
        case 0x235b00u: goto label_235b00;
        case 0x235b04u: goto label_235b04;
        case 0x235b08u: goto label_235b08;
        case 0x235b0cu: goto label_235b0c;
        case 0x235b10u: goto label_235b10;
        case 0x235b14u: goto label_235b14;
        case 0x235b18u: goto label_235b18;
        case 0x235b1cu: goto label_235b1c;
        case 0x235b20u: goto label_235b20;
        case 0x235b24u: goto label_235b24;
        case 0x235b28u: goto label_235b28;
        case 0x235b2cu: goto label_235b2c;
        case 0x235b30u: goto label_235b30;
        case 0x235b34u: goto label_235b34;
        case 0x235b38u: goto label_235b38;
        case 0x235b3cu: goto label_235b3c;
        case 0x235b40u: goto label_235b40;
        case 0x235b44u: goto label_235b44;
        case 0x235b48u: goto label_235b48;
        case 0x235b4cu: goto label_235b4c;
        case 0x235b50u: goto label_235b50;
        case 0x235b54u: goto label_235b54;
        case 0x235b58u: goto label_235b58;
        case 0x235b5cu: goto label_235b5c;
        case 0x235b60u: goto label_235b60;
        case 0x235b64u: goto label_235b64;
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        default: break;
    }

    ctx->pc = 0x2344a0u;

label_2344a0:
    // 0x2344a0: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x2344a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
label_2344a4:
    // 0x2344a4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2344a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_2344a8:
    // 0x2344a8: 0x8c42416c  lw          $v0, 0x416C($v0)
    ctx->pc = 0x2344a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16748)));
label_2344ac:
    // 0x2344ac: 0x7fb301e0  sq          $s3, 0x1E0($sp)
    ctx->pc = 0x2344acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 19));
label_2344b0:
    // 0x2344b0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2344b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2344b4:
    // 0x2344b4: 0x7fb201f0  sq          $s2, 0x1F0($sp)
    ctx->pc = 0x2344b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 18));
label_2344b8:
    // 0x2344b8: 0x7fb00210  sq          $s0, 0x210($sp)
    ctx->pc = 0x2344b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 16));
label_2344bc:
    // 0x2344bc: 0x7fb10200  sq          $s1, 0x200($sp)
    ctx->pc = 0x2344bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 17));
label_2344c0:
    // 0x2344c0: 0x7fb401d0  sq          $s4, 0x1D0($sp)
    ctx->pc = 0x2344c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 20));
label_2344c4:
    // 0x2344c4: 0x7fb501c0  sq          $s5, 0x1C0($sp)
    ctx->pc = 0x2344c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 21));
label_2344c8:
    // 0x2344c8: 0x7fb601b0  sq          $s6, 0x1B0($sp)
    ctx->pc = 0x2344c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 22));
label_2344cc:
    // 0x2344cc: 0x7fb701a0  sq          $s7, 0x1A0($sp)
    ctx->pc = 0x2344ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 23));
label_2344d0:
    // 0x2344d0: 0x7fbe0190  sq          $fp, 0x190($sp)
    ctx->pc = 0x2344d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 30));
label_2344d4:
    // 0x2344d4: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2344d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
label_2344d8:
    // 0x2344d8: 0xc08cb92  jal         func_232E48
label_2344dc:
    if (ctx->pc == 0x2344DCu) {
        ctx->pc = 0x2344DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344D8u;
        // 0x2344dc: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344E0u;
        goto label_2344e0;
    }
    ctx->pc = 0x2344D8u;
    SET_GPR_U32(ctx, 31, 0x2344E0u);
    ctx->pc = 0x2344DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2344D8u;
    // 0x2344dc: 0x2629021  addu        $s2, $s3, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x232E48u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x232E48u, 0x2344D8u, 0x2344E0u)) {
        return;
    }
    ctx->pc = 0x2344E0u;
label_2344e0:
    // 0x2344e0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_2344e4:
    if (ctx->pc == 0x2344E4u) {
        ctx->pc = 0x2344E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344E0u;
        // 0x2344e4: 0x92620023  lbu         $v0, 0x23($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344E8u;
        goto label_2344e8;
    }
    ctx->pc = 0x2344E0u;
    {
        const bool branch_taken_0x2344e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344e0) {
            ctx->pc = 0x2344E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344E0u;
            // 0x2344e4: 0x92620023  lbu         $v0, 0x23($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2344F0u;
            goto label_2344f0;
        }
    }
    ctx->pc = 0x2344E8u;
label_2344e8:
    // 0x2344e8: 0x100005d2  b           . + 4 + (0x5D2 << 2)
label_2344ec:
    if (ctx->pc == 0x2344ECu) {
        ctx->pc = 0x2344ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344E8u;
        // 0x2344ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344F0u;
        goto label_2344f0;
    }
    ctx->pc = 0x2344E8u;
    {
        const bool branch_taken_0x2344e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2344ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344E8u;
        // 0x2344ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2344e8) {
            ctx->pc = 0x235C34u;
            goto label_235c34;
        }
    }
    ctx->pc = 0x2344F0u;
label_2344f0:
    // 0x2344f0: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2344f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
label_2344f4:
    // 0x2344f4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2344f8:
    if (ctx->pc == 0x2344F8u) {
        ctx->pc = 0x2344F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2344F4u;
        // 0x2344f8: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2344FCu;
        goto label_2344fc;
    }
    ctx->pc = 0x2344F4u;
    {
        const bool branch_taken_0x2344f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2344f4) {
            ctx->pc = 0x2344F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2344F4u;
            // 0x2344f8: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23450Cu;
            goto label_23450c;
        }
    }
    ctx->pc = 0x2344FCu;
label_2344fc:
    // 0x2344fc: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x2344fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_234500:
    // 0x234500: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x234500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
label_234504:
    // 0x234504: 0xa2620021  sb          $v0, 0x21($s3)
    ctx->pc = 0x234504u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
label_234508:
    // 0x234508: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x234508u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_23450c:
    // 0x23450c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x23450cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_234510:
    // 0x234510: 0xa2400017  sb          $zero, 0x17($s2)
    ctx->pc = 0x234510u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 23), (uint8_t)GPR_U32(ctx, 0));
label_234514:
    // 0x234514: 0xa2400034  sb          $zero, 0x34($s2)
    ctx->pc = 0x234514u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 0));
label_234518:
    // 0x234518: 0xae400038  sw          $zero, 0x38($s2)
    ctx->pc = 0x234518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 0));
label_23451c:
    // 0x23451c: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x23451cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_234520:
    // 0x234520: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x234520u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_234524:
    // 0x234524: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x234524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_234528:
    // 0x234528: 0xae400048  sw          $zero, 0x48($s2)
    ctx->pc = 0x234528u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
label_23452c:
    // 0x23452c: 0xae40004c  sw          $zero, 0x4C($s2)
    ctx->pc = 0x23452cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 0));
label_234530:
    // 0x234530: 0xae400050  sw          $zero, 0x50($s2)
    ctx->pc = 0x234530u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 0));
label_234534:
    // 0x234534: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x234534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_234538:
    // 0x234538: 0xae400058  sw          $zero, 0x58($s2)
    ctx->pc = 0x234538u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 88), GPR_U32(ctx, 0));
label_23453c:
    // 0x23453c: 0xa2400036  sb          $zero, 0x36($s2)
    ctx->pc = 0x23453cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 0));
label_234540:
    // 0x234540: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x234540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234544:
    // 0x234544: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x234544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234548:
    // 0x234548: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x234548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_23454c:
    // 0x23454c: 0xae630028  sw          $v1, 0x28($s3)
    ctx->pc = 0x23454cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 3));
label_234550:
    // 0x234550: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x234550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_234554:
    // 0x234554: 0x106005aa  beqz        $v1, . + 4 + (0x5AA << 2)
label_234558:
    if (ctx->pc == 0x234558u) {
        ctx->pc = 0x234558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234554u;
        // 0x234558: 0xae64002c  sw          $a0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23455Cu;
        goto label_23455c;
    }
    ctx->pc = 0x234554u;
    {
        const bool branch_taken_0x234554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234554u;
        // 0x234558: 0xae64002c  sw          $a0, 0x2C($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234554) {
            ctx->pc = 0x235C00u;
            goto label_235c00;
        }
    }
    ctx->pc = 0x23455Cu;
label_23455c:
    // 0x23455c: 0x108005a9  beqz        $a0, . + 4 + (0x5A9 << 2)
label_234560:
    if (ctx->pc == 0x234560u) {
        ctx->pc = 0x234560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23455Cu;
        // 0x234560: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234564u;
        goto label_234564;
    }
    ctx->pc = 0x23455Cu;
    {
        const bool branch_taken_0x23455c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23455Cu;
        // 0x234560: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23455c) {
            ctx->pc = 0x235C04u;
            goto label_235c04;
        }
    }
    ctx->pc = 0x234564u;
label_234564:
    // 0x234564: 0x92630020  lbu         $v1, 0x20($s3)
    ctx->pc = 0x234564u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
label_234568:
    // 0x234568: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x234568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_23456c:
    // 0x23456c: 0x1040ffde  beqz        $v0, . + 4 + (-0x22 << 2)
label_234570:
    if (ctx->pc == 0x234570u) {
        ctx->pc = 0x234570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23456Cu;
        // 0x234570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234574u;
        goto label_234574;
    }
    ctx->pc = 0x23456Cu;
    {
        const bool branch_taken_0x23456c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23456Cu;
        // 0x234570: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23456c) {
            ctx->pc = 0x2344E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2344e8;
        }
    }
    ctx->pc = 0x234574u;
label_234574:
    // 0x234574: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234574u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_234578:
    // 0x234578: 0x2442b040  addiu       $v0, $v0, -0x4FC0
    ctx->pc = 0x234578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946880));
label_23457c:
    // 0x23457c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x23457cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234580:
    // 0x234580: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234584:
    // 0x234584: 0x800008  jr          $a0
label_234588:
    if (ctx->pc == 0x234588u) {
        ctx->pc = 0x23458Cu;
        goto label_23458c;
    }
    ctx->pc = 0x234584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2344E8u: goto label_2344e8;
            case 0x23458Cu: goto label_23458c;
            case 0x2345D8u: goto label_2345d8;
            case 0x235A20u: goto label_235a20;
            case 0x235B0Cu: goto label_235b0c;
            case 0x235B60u: goto label_235b60;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234584u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x23458Cu;
label_23458c:
    // 0x23458c: 0x8f848428  lw          $a0, -0x7BD8($gp)
    ctx->pc = 0x23458cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
label_234590:
    // 0x234590: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x234590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234594:
    // 0x234594: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x234594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_234598:
    // 0x234598: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x234598u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_23459c:
    // 0x23459c: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x23459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_2345a0:
    // 0x2345a0: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x2345a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_2345a4:
    // 0x2345a4: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2345a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2345a8:
    // 0x2345a8: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x2345a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_2345ac:
    // 0x2345ac: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x2345acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_2345b0:
    // 0x2345b0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2345b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2345b4:
    // 0x2345b4: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x2345b4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2345b8:
    // 0x2345b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2345b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2345bc:
    // 0x2345bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2345c0:
    if (ctx->pc == 0x2345C0u) {
        ctx->pc = 0x2345C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345BCu;
        // 0x2345c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345C4u;
        goto label_2345c4;
    }
    ctx->pc = 0x2345BCu;
    {
        const bool branch_taken_0x2345bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345BCu;
        // 0x2345c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345bc) {
            ctx->pc = 0x2345D8u;
            goto label_2345d8;
        }
    }
    ctx->pc = 0x2345C4u;
label_2345c4:
    // 0x2345c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2345c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2345c8:
    // 0x2345c8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2345c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2345cc:
    // 0x2345cc: 0x10000577  b           . + 4 + (0x577 << 2)
label_2345d0:
    if (ctx->pc == 0x2345D0u) {
        ctx->pc = 0x2345D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345CCu;
        // 0x2345d0: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2345D4u;
        goto label_2345d4;
    }
    ctx->pc = 0x2345CCu;
    {
        const bool branch_taken_0x2345cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2345D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2345CCu;
        // 0x2345d0: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2345cc) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x2345D4u;
label_2345d4:
    // 0x2345d4: 0x0  nop
    ctx->pc = 0x2345d4u;
    // NOP
label_2345d8:
    // 0x2345d8: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x2345d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2345dc:
    // 0x2345dc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2345dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_2345e0:
    // 0x2345e0: 0x2463af20  addiu       $v1, $v1, -0x50E0
    ctx->pc = 0x2345e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946592));
label_2345e4:
    // 0x2345e4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2345e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_2345e8:
    // 0x2345e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2345e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2345ec:
    // 0x2345ec: 0x24a5aea0  addiu       $a1, $a1, -0x5160
    ctx->pc = 0x2345ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946464));
label_2345f0:
    // 0x2345f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2345f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2345f4:
    // 0x2345f4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x2345f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2345f8:
    // 0x2345f8: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2345f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2345fc:
    // 0x2345fc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2345fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234600:
    // 0x234600: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x234600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_234604:
    // 0x234604: 0x8c6e0000  lw          $t6, 0x0($v1)
    ctx->pc = 0x234604u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234608:
    // 0x234608: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x234608u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23460c:
    // 0x23460c: 0x7fae0170  sq          $t6, 0x170($sp)
    ctx->pc = 0x23460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
label_234610:
    // 0x234610: 0xc08c0c4  jal         func_230310
label_234614:
    if (ctx->pc == 0x234614u) {
        ctx->pc = 0x234614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234610u;
        // 0x234614: 0x7fa90120  sq          $t1, 0x120($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234618u;
        goto label_234618;
    }
    ctx->pc = 0x234610u;
    SET_GPR_U32(ctx, 31, 0x234618u);
    ctx->pc = 0x234614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234610u;
    // 0x234614: 0x7fa90120  sq          $t1, 0x120($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x234610u, 0x234618u)) {
        return;
    }
    ctx->pc = 0x234618u;
label_234618:
    // 0x234618: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x234618u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23461c:
    // 0x23461c: 0x8e65000c  lw          $a1, 0xC($s3)
    ctx->pc = 0x23461cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234620:
    // 0x234620: 0x2301804  sllv        $v1, $s0, $s1
    ctx->pc = 0x234620u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 17) & 0x1F));
label_234624:
    // 0x234624: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x234624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234628:
    // 0x234628: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x234628u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_23462c:
    // 0x23462c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x23462cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_234630:
    // 0x234630: 0xc08c0c4  jal         func_230310
label_234634:
    if (ctx->pc == 0x234634u) {
        ctx->pc = 0x234634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234630u;
        // 0x234634: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234638u;
        goto label_234638;
    }
    ctx->pc = 0x234630u;
    SET_GPR_U32(ctx, 31, 0x234638u);
    ctx->pc = 0x234634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234630u;
    // 0x234634: 0x43880a  movz        $s1, $v0, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x230310u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x230310u, 0x234630u, 0x234638u)) {
        return;
    }
    ctx->pc = 0x234638u;
label_234638:
    // 0x234638: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x234638u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23463c:
    // 0x23463c: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x23463cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234640:
    // 0x234640: 0xb08004  sllv        $s0, $s0, $a1
    ctx->pc = 0x234640u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), GPR_U32(ctx, 5) & 0x1F));
label_234644:
    // 0x234644: 0x3223000f  andi        $v1, $s1, 0xF
    ctx->pc = 0x234644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
label_234648:
    // 0x234648: 0x204802a  slt         $s0, $s0, $a0
    ctx->pc = 0x234648u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_23464c:
    // 0x23464c: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x23464cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234650:
    // 0x234650: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x234650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_234654:
    // 0x234654: 0x7ba90120  lq          $t1, 0x120($sp)
    ctx->pc = 0x234654u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_234658:
    // 0x234658: 0x50280a  movz        $a1, $v0, $s0
    ctx->pc = 0x234658u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_23465c:
    // 0x23465c: 0x32680  sll         $a0, $v1, 26
    ctx->pc = 0x23465cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 26));
label_234660:
    // 0x234660: 0x126102b  sltu        $v0, $t1, $a2
    ctx->pc = 0x234660u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_234664:
    // 0x234664: 0x51f80  sll         $v1, $a1, 30
    ctx->pc = 0x234664u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
label_234668:
    // 0x234668: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23466c:
    if (ctx->pc == 0x23466Cu) {
        ctx->pc = 0x23466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234668u;
        // 0x23466c: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234670u;
        goto label_234670;
    }
    ctx->pc = 0x234668u;
    {
        const bool branch_taken_0x234668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23466Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234668u;
        // 0x23466c: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234668) {
            ctx->pc = 0x234678u;
            goto label_234678;
        }
    }
    ctx->pc = 0x234670u;
label_234670:
    // 0x234670: 0x10000002  b           . + 4 + (0x2 << 2)
label_234674:
    if (ctx->pc == 0x234674u) {
        ctx->pc = 0x234674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234670u;
        // 0x234674: 0x61182  srl         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234678u;
        goto label_234678;
    }
    ctx->pc = 0x234670u;
    {
        const bool branch_taken_0x234670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234670u;
        // 0x234674: 0x61182  srl         $v0, $a2, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234670) {
            ctx->pc = 0x23467Cu;
            goto label_23467c;
        }
    }
    ctx->pc = 0x234678u;
label_234678:
    // 0x234678: 0x91182  srl         $v0, $t1, 6
    ctx->pc = 0x234678u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
label_23467c:
    // 0x23467c: 0x21380  sll         $v0, $v0, 14
    ctx->pc = 0x23467cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 14));
label_234680:
    // 0x234680: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x234680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_234684:
    // 0x234684: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x234684u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234688:
    // 0x234688: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x234688u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_23468c:
    // 0x23468c: 0xae470008  sw          $a3, 0x8($s2)
    ctx->pc = 0x23468cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 7));
label_234690:
    // 0x234690: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x234690u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_234694:
    // 0x234694: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x234694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234698:
    // 0x234698: 0xae46000c  sw          $a2, 0xC($s2)
    ctx->pc = 0x234698u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 6));
label_23469c:
    // 0x23469c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x23469cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2346a0:
    // 0x2346a0: 0x978284c8  lhu         $v0, -0x7B38($gp)
    ctx->pc = 0x2346a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935752)));
label_2346a4:
    // 0x2346a4: 0xa2430034  sb          $v1, 0x34($s2)
    ctx->pc = 0x2346a4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 52), (uint8_t)GPR_U32(ctx, 3));
label_2346a8:
    // 0x2346a8: 0xa6420014  sh          $v0, 0x14($s2)
    ctx->pc = 0x2346a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 20), (uint16_t)GPR_U32(ctx, 2));
label_2346ac:
    // 0x2346ac: 0x92650023  lbu         $a1, 0x23($s3)
    ctx->pc = 0x2346acu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_2346b0:
    // 0x2346b0: 0x30a30060  andi        $v1, $a1, 0x60
    ctx->pc = 0x2346b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)96);
label_2346b4:
    // 0x2346b4: 0x10640050  beq         $v1, $a0, . + 4 + (0x50 << 2)
label_2346b8:
    if (ctx->pc == 0x2346B8u) {
        ctx->pc = 0x2346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346B4u;
        // 0x2346b8: 0x28620021  slti        $v0, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346BCu;
        goto label_2346bc;
    }
    ctx->pc = 0x2346B4u;
    {
        const bool branch_taken_0x2346b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x2346B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346B4u;
        // 0x2346b8: 0x28620021  slti        $v0, $v1, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346b4) {
            ctx->pc = 0x2347F8u;
            goto label_2347f8;
        }
    }
    ctx->pc = 0x2346BCu;
label_2346bc:
    // 0x2346bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2346c0:
    if (ctx->pc == 0x2346C0u) {
        ctx->pc = 0x2346C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346BCu;
        // 0x2346c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346C4u;
        goto label_2346c4;
    }
    ctx->pc = 0x2346BCu;
    {
        const bool branch_taken_0x2346bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346BCu;
        // 0x2346c0: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346bc) {
            ctx->pc = 0x2346D4u;
            goto label_2346d4;
        }
    }
    ctx->pc = 0x2346C4u;
label_2346c4:
    // 0x2346c4: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_2346c8:
    if (ctx->pc == 0x2346C8u) {
        ctx->pc = 0x2346C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C4u;
        // 0x2346c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346CCu;
        goto label_2346cc;
    }
    ctx->pc = 0x2346C4u;
    {
        const bool branch_taken_0x2346c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2346C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346C4u;
        // 0x2346c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346c4) {
            ctx->pc = 0x2346E4u;
            goto label_2346e4;
        }
    }
    ctx->pc = 0x2346CCu;
label_2346cc:
    // 0x2346cc: 0x1000006e  b           . + 4 + (0x6E << 2)
label_2346d0:
    if (ctx->pc == 0x2346D0u) {
        ctx->pc = 0x2346D4u;
        goto label_2346d4;
    }
    ctx->pc = 0x2346CCu;
    {
        const bool branch_taken_0x2346cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346cc) {
            ctx->pc = 0x234888u;
            goto label_234888;
        }
    }
    ctx->pc = 0x2346D4u;
label_2346d4:
    // 0x2346d4: 0x10620028  beq         $v1, $v0, . + 4 + (0x28 << 2)
label_2346d8:
    if (ctx->pc == 0x2346D8u) {
        ctx->pc = 0x2346D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346D4u;
        // 0x2346d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2346DCu;
        goto label_2346dc;
    }
    ctx->pc = 0x2346D4u;
    {
        const bool branch_taken_0x2346d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2346D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346D4u;
        // 0x2346d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346d4) {
            ctx->pc = 0x234778u;
            goto label_234778;
        }
    }
    ctx->pc = 0x2346DCu;
label_2346dc:
    // 0x2346dc: 0x1000006a  b           . + 4 + (0x6A << 2)
label_2346e0:
    if (ctx->pc == 0x2346E0u) {
        ctx->pc = 0x2346E4u;
        goto label_2346e4;
    }
    ctx->pc = 0x2346DCu;
    {
        const bool branch_taken_0x2346dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2346dc) {
            ctx->pc = 0x234888u;
            goto label_234888;
        }
    }
    ctx->pc = 0x2346E4u;
label_2346e4:
    // 0x2346e4: 0x30a3000f  andi        $v1, $a1, 0xF
    ctx->pc = 0x2346e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
label_2346e8:
    // 0x2346e8: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x2346e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_2346ec:
    // 0x2346ec: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x2346ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_2346f0:
    // 0x2346f0: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2346f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2346f4:
    // 0x2346f4: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x2346f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_2346f8:
    // 0x2346f8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2346f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2346fc:
    // 0x2346fc: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_234700:
    if (ctx->pc == 0x234700u) {
        ctx->pc = 0x234700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346FCu;
        // 0x234700: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234704u;
        goto label_234704;
    }
    ctx->pc = 0x2346FCu;
    {
        const bool branch_taken_0x2346fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2346FCu;
        // 0x234700: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2346fc) {
            ctx->pc = 0x234758u;
            goto label_234758;
        }
    }
    ctx->pc = 0x234704u;
label_234704:
    // 0x234704: 0x28620006  slti        $v0, $v1, 0x6
    ctx->pc = 0x234704u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)6) ? 1 : 0);
label_234708:
    // 0x234708: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_23470c:
    if (ctx->pc == 0x23470Cu) {
        ctx->pc = 0x23470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234708u;
        // 0x23470c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234710u;
        goto label_234710;
    }
    ctx->pc = 0x234708u;
    {
        const bool branch_taken_0x234708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23470Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234708u;
        // 0x23470c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234708) {
            ctx->pc = 0x234720u;
            goto label_234720;
        }
    }
    ctx->pc = 0x234710u;
label_234710:
    // 0x234710: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_234714:
    if (ctx->pc == 0x234714u) {
        ctx->pc = 0x234714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234710u;
        // 0x234714: 0x3c0200a0  lui         $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234718u;
        goto label_234718;
    }
    ctx->pc = 0x234710u;
    {
        const bool branch_taken_0x234710 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234710u;
        // 0x234714: 0x3c0200a0  lui         $v0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)160 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234710) {
            ctx->pc = 0x234734u;
            goto label_234734;
        }
    }
    ctx->pc = 0x234718u;
label_234718:
    // 0x234718: 0x10000013  b           . + 4 + (0x13 << 2)
label_23471c:
    if (ctx->pc == 0x23471Cu) {
        ctx->pc = 0x23471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234718u;
        // 0x23471c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234720u;
        goto label_234720;
    }
    ctx->pc = 0x234718u;
    {
        const bool branch_taken_0x234718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23471Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234718u;
        // 0x23471c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234718) {
            ctx->pc = 0x234768u;
            goto label_234768;
        }
    }
    ctx->pc = 0x234720u;
label_234720:
    // 0x234720: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x234720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_234724:
    // 0x234724: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_234728:
    if (ctx->pc == 0x234728u) {
        ctx->pc = 0x234728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234724u;
        // 0x234728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23472Cu;
        goto label_23472c;
    }
    ctx->pc = 0x234724u;
    {
        const bool branch_taken_0x234724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x234728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234724u;
        // 0x234728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234724) {
            ctx->pc = 0x234748u;
            goto label_234748;
        }
    }
    ctx->pc = 0x23472Cu;
label_23472c:
    // 0x23472c: 0x1000000e  b           . + 4 + (0xE << 2)
label_234730:
    if (ctx->pc == 0x234730u) {
        ctx->pc = 0x234734u;
        goto label_234734;
    }
    ctx->pc = 0x23472Cu;
    {
        const bool branch_taken_0x23472c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23472c) {
            ctx->pc = 0x234768u;
            goto label_234768;
        }
    }
    ctx->pc = 0x234734u;
label_234734:
    // 0x234734: 0x34c30004  ori         $v1, $a2, 0x4
    ctx->pc = 0x234734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_234738:
    // 0x234738: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x234738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_23473c:
    // 0x23473c: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x23473cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_234740:
    // 0x234740: 0x10000055  b           . + 4 + (0x55 << 2)
label_234744:
    if (ctx->pc == 0x234744u) {
        ctx->pc = 0x234744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234740u;
        // 0x234744: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234748u;
        goto label_234748;
    }
    ctx->pc = 0x234740u;
    {
        const bool branch_taken_0x234740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234740u;
        // 0x234744: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234740) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234748u;
label_234748:
    // 0x234748: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x234748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_23474c:
    // 0x23474c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x23474cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_234750:
    // 0x234750: 0x10000051  b           . + 4 + (0x51 << 2)
label_234754:
    if (ctx->pc == 0x234754u) {
        ctx->pc = 0x234754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234750u;
        // 0x234754: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234758u;
        goto label_234758;
    }
    ctx->pc = 0x234750u;
    {
        const bool branch_taken_0x234750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234750u;
        // 0x234754: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234750) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234758u;
label_234758:
    // 0x234758: 0x34c20004  ori         $v0, $a2, 0x4
    ctx->pc = 0x234758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4);
label_23475c:
    // 0x23475c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_234760:
    if (ctx->pc == 0x234760u) {
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23475Cu;
        // 0x234760: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234764u;
        goto label_234764;
    }
    ctx->pc = 0x23475Cu;
    {
        const bool branch_taken_0x23475c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23475Cu;
        // 0x234760: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23475c) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234764u;
label_234764:
    // 0x234764: 0x0  nop
    ctx->pc = 0x234764u;
    // NOP
label_234768:
    // 0x234768: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x234768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23476c:
    // 0x23476c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23476cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234770:
    // 0x234770: 0x1000050e  b           . + 4 + (0x50E << 2)
label_234774:
    if (ctx->pc == 0x234774u) {
        ctx->pc = 0x234774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234770u;
        // 0x234774: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234778u;
        goto label_234778;
    }
    ctx->pc = 0x234770u;
    {
        const bool branch_taken_0x234770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234770u;
        // 0x234774: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234770) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x234778u;
label_234778:
    // 0x234778: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x234778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_23477c:
    // 0x23477c: 0x3c030140  lui         $v1, 0x140
    ctx->pc = 0x23477cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)320 << 16));
label_234780:
    // 0x234780: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x234780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_234784:
    // 0x234784: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x234784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_234788:
    // 0x234788: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x234788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_23478c:
    // 0x23478c: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x23478cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_234790:
    // 0x234790: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x234790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_234794:
    // 0x234794: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234798:
    // 0x234798: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x234798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23479c:
    // 0x23479c: 0xafa300d0  sw          $v1, 0xD0($sp)
    ctx->pc = 0x23479cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 3));
label_2347a0:
    // 0x2347a0: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x2347a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_2347a4:
    // 0x2347a4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2347a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2347a8:
    // 0x2347a8: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x2347a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_2347ac:
    // 0x2347ac: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x2347acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2347b0:
    // 0x2347b0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2347b4:
    if (ctx->pc == 0x2347B4u) {
        ctx->pc = 0x2347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B0u;
        // 0x2347b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347B8u;
        goto label_2347b8;
    }
    ctx->pc = 0x2347B0u;
    {
        const bool branch_taken_0x2347b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2347B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B0u;
        // 0x2347b4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347b0) {
            ctx->pc = 0x2347C8u;
            goto label_2347c8;
        }
    }
    ctx->pc = 0x2347B8u;
label_2347b8:
    // 0x2347b8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2347bc:
    if (ctx->pc == 0x2347BCu) {
        ctx->pc = 0x2347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B8u;
        // 0x2347bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347C0u;
        goto label_2347c0;
    }
    ctx->pc = 0x2347B8u;
    {
        const bool branch_taken_0x2347b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2347BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347B8u;
        // 0x2347bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347b8) {
            ctx->pc = 0x2347D8u;
            goto label_2347d8;
        }
    }
    ctx->pc = 0x2347C0u;
label_2347c0:
    // 0x2347c0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2347c4:
    if (ctx->pc == 0x2347C4u) {
        ctx->pc = 0x2347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C0u;
        // 0x2347c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347C8u;
        goto label_2347c8;
    }
    ctx->pc = 0x2347C0u;
    {
        const bool branch_taken_0x2347c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347C0u;
        // 0x2347c4: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347c0) {
            ctx->pc = 0x2347ECu;
            goto label_2347ec;
        }
    }
    ctx->pc = 0x2347C8u;
label_2347c8:
    // 0x2347c8: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x2347c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_2347cc:
    // 0x2347cc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2347ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2347d0:
    // 0x2347d0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2347d4:
    if (ctx->pc == 0x2347D4u) {
        ctx->pc = 0x2347D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D0u;
        // 0x2347d4: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347D8u;
        goto label_2347d8;
    }
    ctx->pc = 0x2347D0u;
    {
        const bool branch_taken_0x2347d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347D0u;
        // 0x2347d4: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347d0) {
            ctx->pc = 0x234850u;
            goto label_234850;
        }
    }
    ctx->pc = 0x2347D8u;
label_2347d8:
    // 0x2347d8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2347d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2347dc:
    // 0x2347dc: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x2347dcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2347e0:
    // 0x2347e0: 0xafa600c0  sw          $a2, 0xC0($sp)
    ctx->pc = 0x2347e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 6));
label_2347e4:
    // 0x2347e4: 0x1000002c  b           . + 4 + (0x2C << 2)
label_2347e8:
    if (ctx->pc == 0x2347E8u) {
        ctx->pc = 0x2347E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347E4u;
        // 0x2347e8: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347ECu;
        goto label_2347ec;
    }
    ctx->pc = 0x2347E4u;
    {
        const bool branch_taken_0x2347e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347E4u;
        // 0x2347e8: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347e4) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x2347ECu;
label_2347ec:
    // 0x2347ec: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2347ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2347f0:
    // 0x2347f0: 0x100004ee  b           . + 4 + (0x4EE << 2)
label_2347f4:
    if (ctx->pc == 0x2347F4u) {
        ctx->pc = 0x2347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347F0u;
        // 0x2347f4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2347F8u;
        goto label_2347f8;
    }
    ctx->pc = 0x2347F0u;
    {
        const bool branch_taken_0x2347f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2347F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2347F0u;
        // 0x2347f4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2347f0) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x2347F8u;
label_2347f8:
    // 0x2347f8: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x2347f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
label_2347fc:
    // 0x2347fc: 0x3c030130  lui         $v1, 0x130
    ctx->pc = 0x2347fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)304 << 16));
label_234800:
    // 0x234800: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x234800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_234804:
    // 0x234804: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x234804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_234808:
    // 0x234808: 0xc22825  or          $a1, $a2, $v0
    ctx->pc = 0x234808u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_23480c:
    // 0x23480c: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x23480cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_234810:
    // 0x234810: 0xae45000c  sw          $a1, 0xC($s2)
    ctx->pc = 0x234810u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 5));
label_234814:
    // 0x234814: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x234814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_234818:
    // 0x234818: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x234818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_23481c:
    // 0x23481c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23481cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234820:
    // 0x234820: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x234820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_234824:
    // 0x234824: 0x92620023  lbu         $v0, 0x23($s3)
    ctx->pc = 0x234824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_234828:
    // 0x234828: 0x3044000f  andi        $a0, $v0, 0xF
    ctx->pc = 0x234828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23482c:
    // 0x23482c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_234830:
    if (ctx->pc == 0x234830u) {
        ctx->pc = 0x234830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23482Cu;
        // 0x234830: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234834u;
        goto label_234834;
    }
    ctx->pc = 0x23482Cu;
    {
        const bool branch_taken_0x23482c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x234830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23482Cu;
        // 0x234830: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23482c) {
            ctx->pc = 0x234844u;
            goto label_234844;
        }
    }
    ctx->pc = 0x234834u;
label_234834:
    // 0x234834: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_234838:
    if (ctx->pc == 0x234838u) {
        ctx->pc = 0x234838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234834u;
        // 0x234838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23483Cu;
        goto label_23483c;
    }
    ctx->pc = 0x234834u;
    {
        const bool branch_taken_0x234834 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x234838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234834u;
        // 0x234838: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234834) {
            ctx->pc = 0x234864u;
            goto label_234864;
        }
    }
    ctx->pc = 0x23483Cu;
label_23483c:
    // 0x23483c: 0x1000000e  b           . + 4 + (0xE << 2)
label_234840:
    if (ctx->pc == 0x234840u) {
        ctx->pc = 0x234840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23483Cu;
        // 0x234840: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234844u;
        goto label_234844;
    }
    ctx->pc = 0x23483Cu;
    {
        const bool branch_taken_0x23483c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23483Cu;
        // 0x234840: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23483c) {
            ctx->pc = 0x234878u;
            goto label_234878;
        }
    }
    ctx->pc = 0x234844u;
label_234844:
    // 0x234844: 0x3c020050  lui         $v0, 0x50
    ctx->pc = 0x234844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)80 << 16));
label_234848:
    // 0x234848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x234848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23484c:
    // 0x23484c: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x23484cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
label_234850:
    // 0x234850: 0xa21025  or          $v0, $a1, $v0
    ctx->pc = 0x234850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_234854:
    // 0x234854: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x234854u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_234858:
    // 0x234858: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x234858u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_23485c:
    // 0x23485c: 0x1000000e  b           . + 4 + (0xE << 2)
label_234860:
    if (ctx->pc == 0x234860u) {
        ctx->pc = 0x234860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23485Cu;
        // 0x234860: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234864u;
        goto label_234864;
    }
    ctx->pc = 0x23485Cu;
    {
        const bool branch_taken_0x23485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23485Cu;
        // 0x234860: 0x240b0040  addiu       $t3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23485c) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234864u;
label_234864:
    // 0x234864: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x234864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_234868:
    // 0x234868: 0x240d0040  addiu       $t5, $zero, 0x40
    ctx->pc = 0x234868u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_23486c:
    // 0x23486c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x23486cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_234870:
    // 0x234870: 0x10000009  b           . + 4 + (0x9 << 2)
label_234874:
    if (ctx->pc == 0x234874u) {
        ctx->pc = 0x234874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234870u;
        // 0x234874: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234878u;
        goto label_234878;
    }
    ctx->pc = 0x234870u;
    {
        const bool branch_taken_0x234870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234870u;
        // 0x234874: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234870) {
            ctx->pc = 0x234898u;
            goto label_234898;
        }
    }
    ctx->pc = 0x234878u;
label_234878:
    // 0x234878: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23487c:
    // 0x23487c: 0x100004cb  b           . + 4 + (0x4CB << 2)
label_234880:
    if (ctx->pc == 0x234880u) {
        ctx->pc = 0x234880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23487Cu;
        // 0x234880: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234884u;
        goto label_234884;
    }
    ctx->pc = 0x23487Cu;
    {
        const bool branch_taken_0x23487c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23487Cu;
        // 0x234880: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23487c) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x234884u;
label_234884:
    // 0x234884: 0x0  nop
    ctx->pc = 0x234884u;
    // NOP
label_234888:
    // 0x234888: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_23488c:
    // 0x23488c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x23488cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_234890:
    // 0x234890: 0x100004c6  b           . + 4 + (0x4C6 << 2)
label_234894:
    if (ctx->pc == 0x234894u) {
        ctx->pc = 0x234894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234890u;
        // 0x234894: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234898u;
        goto label_234898;
    }
    ctx->pc = 0x234890u;
    {
        const bool branch_taken_0x234890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234890u;
        // 0x234894: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234890) {
            ctx->pc = 0x235BACu;
            goto label_235bac;
        }
    }
    ctx->pc = 0x234898u;
label_234898:
    // 0x234898: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_23489c:
    // 0x23489c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x23489cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2348a0:
    // 0x2348a0: 0x92630023  lbu         $v1, 0x23($s3)
    ctx->pc = 0x2348a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
label_2348a4:
    // 0x2348a4: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2348a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2348a8:
    // 0x2348a8: 0x30630080  andi        $v1, $v1, 0x80
    ctx->pc = 0x2348a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_2348ac:
    // 0x2348ac: 0x230c3  sra         $a2, $v0, 3
    ctx->pc = 0x2348acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 3));
label_2348b0:
    // 0x2348b0: 0x10600114  beqz        $v1, . + 4 + (0x114 << 2)
label_2348b4:
    if (ctx->pc == 0x2348B4u) {
        ctx->pc = 0x2348B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B0u;
        // 0x2348b4: 0xae660018  sw          $a2, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348B8u;
        goto label_2348b8;
    }
    ctx->pc = 0x2348B0u;
    {
        const bool branch_taken_0x2348b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348B0u;
        // 0x2348b4: 0xae660018  sw          $a2, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348b0) {
            ctx->pc = 0x234D04u;
            goto label_234d04;
        }
    }
    ctx->pc = 0x2348B8u;
label_2348b8:
    // 0x2348b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2348bc:
    // 0x2348bc: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2348bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2348c0:
    // 0x2348c0: 0xffa20080  sd          $v0, 0x80($sp)
    ctx->pc = 0x2348c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 2));
label_2348c4:
    // 0x2348c4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2348c4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2348c8:
    // 0x2348c8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2348c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2348cc:
    // 0x2348cc: 0x13e182b  sltu        $v1, $t1, $fp
    ctx->pc = 0x2348ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_2348d0:
    // 0x2348d0: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x2348d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_2348d4:
    // 0x2348d4: 0xafa000f0  sw          $zero, 0xF0($sp)
    ctx->pc = 0x2348d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
label_2348d8:
    // 0x2348d8: 0xafa000b0  sw          $zero, 0xB0($sp)
    ctx->pc = 0x2348d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
label_2348dc:
    // 0x2348dc: 0xffa00020  sd          $zero, 0x20($sp)
    ctx->pc = 0x2348dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
label_2348e0:
    // 0x2348e0: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x2348e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_2348e4:
    // 0x2348e4: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x2348e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_2348e8:
    // 0x2348e8: 0xffa00038  sd          $zero, 0x38($sp)
    ctx->pc = 0x2348e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 0));
label_2348ec:
    // 0x2348ec: 0xffa00030  sd          $zero, 0x30($sp)
    ctx->pc = 0x2348ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 0));
label_2348f0:
    // 0x2348f0: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x2348f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
label_2348f4:
    // 0x2348f4: 0xffa00040  sd          $zero, 0x40($sp)
    ctx->pc = 0x2348f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 0));
label_2348f8:
    // 0x2348f8: 0xffa20060  sd          $v0, 0x60($sp)
    ctx->pc = 0x2348f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 2));
label_2348fc:
    // 0x2348fc: 0xffa20058  sd          $v0, 0x58($sp)
    ctx->pc = 0x2348fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 2));
label_234900:
    // 0x234900: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x234900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
label_234904:
    // 0x234904: 0xffa20078  sd          $v0, 0x78($sp)
    ctx->pc = 0x234904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 2));
label_234908:
    // 0x234908: 0xffa20070  sd          $v0, 0x70($sp)
    ctx->pc = 0x234908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 2));
label_23490c:
    // 0x23490c: 0xffa20068  sd          $v0, 0x68($sp)
    ctx->pc = 0x23490cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 2));
label_234910:
    // 0x234910: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_234914:
    if (ctx->pc == 0x234914u) {
        ctx->pc = 0x234914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234910u;
        // 0x234914: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234918u;
        goto label_234918;
    }
    ctx->pc = 0x234910u;
    {
        const bool branch_taken_0x234910 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x234914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234910u;
        // 0x234914: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234910) {
            ctx->pc = 0x23491Cu;
            goto label_23491c;
        }
    }
    ctx->pc = 0x234918u;
label_234918:
    // 0x234918: 0x1e1182  srl         $v0, $fp, 6
    ctx->pc = 0x234918u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
label_23491c:
    // 0x23491c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x23491cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_234920:
    // 0x234920: 0x2403e  dsrl32      $t0, $v0, 0
    ctx->pc = 0x234920u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) >> (32 + 0));
label_234924:
    // 0x234924: 0x27b60050  addiu       $s6, $sp, 0x50
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_234928:
    // 0x234928: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x234928u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23492c:
    // 0x23492c: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x23492cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_234930:
    // 0x234930: 0x27aa00b0  addiu       $t2, $sp, 0xB0
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_234934:
    // 0x234934: 0x108000a3  beqz        $a0, . + 4 + (0xA3 << 2)
label_234938:
    if (ctx->pc == 0x234938u) {
        ctx->pc = 0x234938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234934u;
        // 0x234938: 0x27ab00b4  addiu       $t3, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23493Cu;
        goto label_23493c;
    }
    ctx->pc = 0x234934u;
    {
        const bool branch_taken_0x234934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x234938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234934u;
        // 0x234938: 0x27ab00b4  addiu       $t3, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234934) {
            ctx->pc = 0x234BC4u;
            goto label_234bc4;
        }
    }
    ctx->pc = 0x23493Cu;
label_23493c:
    // 0x23493c: 0x10e000a1  beqz        $a3, . + 4 + (0xA1 << 2)
label_234940:
    if (ctx->pc == 0x234940u) {
        ctx->pc = 0x234940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23493Cu;
        // 0x234940: 0x8f8284b0  lw          $v0, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234944u;
        goto label_234944;
    }
    ctx->pc = 0x23493Cu;
    {
        const bool branch_taken_0x23493c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x234940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23493Cu;
        // 0x234940: 0x8f8284b0  lw          $v0, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23493c) {
            ctx->pc = 0x234BC4u;
            goto label_234bc4;
        }
    }
    ctx->pc = 0x234944u;
label_234944:
    // 0x234944: 0x504000a0  beql        $v0, $zero, . + 4 + (0xA0 << 2)
label_234948:
    if (ctx->pc == 0x234948u) {
        ctx->pc = 0x234948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234944u;
        // 0x234948: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23494Cu;
        goto label_23494c;
    }
    ctx->pc = 0x234944u;
    {
        const bool branch_taken_0x234944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234944) {
            ctx->pc = 0x234948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234944u;
            // 0x234948: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234BC8u;
            goto label_234bc8;
        }
    }
    ctx->pc = 0x23494Cu;
label_23494c:
    // 0x23494c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x23494cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234950:
    // 0x234950: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x234950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_234954:
    // 0x234954: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_234958:
    if (ctx->pc == 0x234958u) {
        ctx->pc = 0x234958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234954u;
        // 0x234958: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23495Cu;
        goto label_23495c;
    }
    ctx->pc = 0x234954u;
    {
        const bool branch_taken_0x234954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234954) {
            ctx->pc = 0x234958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234954u;
            // 0x234958: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x23495Cu;
label_23495c:
    // 0x23495c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x23495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234960:
    // 0x234960: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x234960u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_234964:
    // 0x234964: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_234968:
    if (ctx->pc == 0x234968u) {
        ctx->pc = 0x234968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234964u;
        // 0x234968: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23496Cu;
        goto label_23496c;
    }
    ctx->pc = 0x234964u;
    {
        const bool branch_taken_0x234964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234964) {
            ctx->pc = 0x234968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234964u;
            // 0x234968: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234978u;
            goto label_234978;
        }
    }
    ctx->pc = 0x23496Cu;
label_23496c:
    // 0x23496c: 0x10000091  b           . + 4 + (0x91 << 2)
label_234970:
    if (ctx->pc == 0x234970u) {
        ctx->pc = 0x234970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23496Cu;
        // 0x234970: 0x2c820008  sltiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234974u;
        goto label_234974;
    }
    ctx->pc = 0x23496Cu;
    {
        const bool branch_taken_0x23496c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23496Cu;
        // 0x234970: 0x2c820008  sltiu       $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23496c) {
            ctx->pc = 0x234BB4u;
            goto label_234bb4;
        }
    }
    ctx->pc = 0x234974u;
label_234974:
    // 0x234974: 0x0  nop
    ctx->pc = 0x234974u;
    // NOP
label_234978:
    // 0x234978: 0xd10c0  sll         $v0, $t5, 3
    ctx->pc = 0x234978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 3));
label_23497c:
    // 0x23497c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x23497cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234980:
    // 0x234980: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x234980u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_234984:
    // 0x234984: 0x7e1818  mult        $v1, $v1, $fp
    ctx->pc = 0x234984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_234988:
    // 0x234988: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x234988u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23498c:
    // 0x23498c: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x23498cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
label_234990:
    // 0x234990: 0x13e282b  sltu        $a1, $t1, $fp
    ctx->pc = 0x234990u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_234994:
    // 0x234994: 0x671818  mult        $v1, $v1, $a3
    ctx->pc = 0x234994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_234998:
    // 0x234998: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x234998u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_23499c:
    // 0x23499c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x23499cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_2349a0:
    // 0x2349a0: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2349a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2349a4:
    // 0x2349a4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2349a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_2349a8:
    // 0x2349a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2349a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2349ac:
    // 0x2349ac: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x2349acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
label_2349b0:
    // 0x2349b0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2349b4:
    if (ctx->pc == 0x2349B4u) {
        ctx->pc = 0x2349B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B0u;
        // 0x2349b4: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349B8u;
        goto label_2349b8;
    }
    ctx->pc = 0x2349B0u;
    {
        const bool branch_taken_0x2349b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B0u;
        // 0x2349b4: 0x91182  srl         $v0, $t1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349b0) {
            ctx->pc = 0x2349BCu;
            goto label_2349bc;
        }
    }
    ctx->pc = 0x2349B8u;
label_2349b8:
    // 0x2349b8: 0x1e1182  srl         $v0, $fp, 6
    ctx->pc = 0x2349b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 6));
label_2349bc:
    // 0x2349bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2349bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2349c0:
    // 0x2349c0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2349c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2349c4:
    // 0x2349c4: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2349c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_2349c8:
    // 0x2349c8: 0x2d1a821  addu        $s5, $s6, $s1
    ctx->pc = 0x2349c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 17)));
label_2349cc:
    // 0x2349cc: 0xdeb00000  ld          $s0, 0x0($s5)
    ctx->pc = 0x2349ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_2349d0:
    // 0x2349d0: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x2349d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2349d4:
    // 0x2349d4: 0x7fa70100  sq          $a3, 0x100($sp)
    ctx->pc = 0x2349d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 7));
label_2349d8:
    // 0x2349d8: 0x1029b8  dsll        $a1, $s0, 6
    ctx->pc = 0x2349d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << 6);
label_2349dc:
    // 0x2349dc: 0x7fa80110  sq          $t0, 0x110($sp)
    ctx->pc = 0x2349dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 8));
label_2349e0:
    // 0x2349e0: 0x7fa90120  sq          $t1, 0x120($sp)
    ctx->pc = 0x2349e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 9));
label_2349e4:
    // 0x2349e4: 0x7faa0130  sq          $t2, 0x130($sp)
    ctx->pc = 0x2349e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 10));
label_2349e8:
    // 0x2349e8: 0x7fab0140  sq          $t3, 0x140($sp)
    ctx->pc = 0x2349e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 11));
label_2349ec:
    // 0x2349ec: 0x7fac0150  sq          $t4, 0x150($sp)
    ctx->pc = 0x2349ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 12));
label_2349f0:
    // 0x2349f0: 0x7fad0160  sq          $t5, 0x160($sp)
    ctx->pc = 0x2349f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
label_2349f4:
    // 0x2349f4: 0xc07e4e4  jal         func_1F9390
label_2349f8:
    if (ctx->pc == 0x2349F8u) {
        ctx->pc = 0x2349F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349F4u;
        // 0x2349f8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349FCu;
        goto label_2349fc;
    }
    ctx->pc = 0x2349F4u;
    SET_GPR_U32(ctx, 31, 0x2349FCu);
    ctx->pc = 0x2349F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349F4u;
    // 0x2349f8: 0x7fae0170  sq          $t6, 0x170($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9390u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F9390u, 0x2349F4u, 0x2349FCu)) {
        return;
    }
    ctx->pc = 0x2349FCu;
label_2349fc:
    // 0x2349fc: 0x7ba80110  lq          $t0, 0x110($sp)
    ctx->pc = 0x2349fcu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_234a00:
    // 0x234a00: 0x23778  dsll        $a2, $v0, 29
    ctx->pc = 0x234a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << 29);
label_234a04:
    // 0x234a04: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x234a04u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_234a08:
    // 0x234a08: 0x7ba70100  lq          $a3, 0x100($sp)
    ctx->pc = 0x234a08u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_234a0c:
    // 0x234a0c: 0x7ba90120  lq          $t1, 0x120($sp)
    ctx->pc = 0x234a0cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_234a10:
    // 0x234a10: 0x7baa0130  lq          $t2, 0x130($sp)
    ctx->pc = 0x234a10u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_234a14:
    // 0x234a14: 0x7bab0140  lq          $t3, 0x140($sp)
    ctx->pc = 0x234a14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_234a18:
    // 0x234a18: 0x7bac0150  lq          $t4, 0x150($sp)
    ctx->pc = 0x234a18u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_234a1c:
    // 0x234a1c: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x234a1cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_234a20:
    // 0x234a20: 0x12080017  beq         $s0, $t0, . + 4 + (0x17 << 2)
label_234a24:
    if (ctx->pc == 0x234A24u) {
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A20u;
        // 0x234a24: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A28u;
        goto label_234a28;
    }
    ctx->pc = 0x234A20u;
    {
        const bool branch_taken_0x234a20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A20u;
        // 0x234a24: 0x7bae0170  lq          $t6, 0x170($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 29), 368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234a20) {
            ctx->pc = 0x234A80u;
            goto label_234a80;
        }
    }
    ctx->pc = 0x234A28u;
label_234a28:
    // 0x234a28: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_234a2c:
    if (ctx->pc == 0x234A2Cu) {
        ctx->pc = 0x234A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A28u;
        // 0x234a2c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A30u;
        goto label_234a30;
    }
    ctx->pc = 0x234A28u;
    {
        const bool branch_taken_0x234a28 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x234a28) {
            ctx->pc = 0x234A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A28u;
            // 0x234a2c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A30u;
            goto label_234a30;
        }
    }
    ctx->pc = 0x234A30u;
label_234a30:
    // 0x234a30: 0x25a4ffff  addiu       $a0, $t5, -0x1
    ctx->pc = 0x234a30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_234a34:
    // 0x234a34: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x234a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234a38:
    // 0x234a38: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x234a38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_234a3c:
    // 0x234a3c: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x234a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234a40:
    // 0x234a40: 0x34a5f800  ori         $a1, $a1, 0xF800
    ctx->pc = 0x234a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)63488);
label_234a44:
    // 0x234a44: 0x821007  srav        $v0, $v0, $a0
    ctx->pc = 0x234a44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
label_234a48:
    // 0x234a48: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_234a4c:
    // 0x234a4c: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x234a4cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
label_234a50:
    // 0x234a50: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x234a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_234a54:
    // 0x234a54: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x234a54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_234a58:
    // 0x234a58: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x234a58u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_234a5c:
    // 0x234a5c: 0x6e1821  addu        $v1, $v1, $t6
    ctx->pc = 0x234a5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 14)));
label_234a60:
    // 0x234a60: 0x1012  mflo        $v0
    ctx->pc = 0x234a60u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_234a64:
    // 0x234a64: 0x6e001b  divu        $zero, $v1, $t6
    ctx->pc = 0x234a64u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_234a68:
    // 0x234a68: 0x1812  mflo        $v1
    ctx->pc = 0x234a68u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_234a6c:
    // 0x234a6c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x234a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234a70:
    // 0x234a70: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_234a74:
    // 0x234a74: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x234a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_234a78:
    // 0x234a78: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x234a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_234a7c:
    // 0x234a7c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x234a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_234a80:
    // 0x234a80: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x234a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_234a84:
    // 0x234a84: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x234a84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_234a88:
    // 0x234a88: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x234a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234a8c:
    // 0x234a8c: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x234a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
label_234a90:
    // 0x234a90: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x234a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_234a94:
    // 0x234a94: 0xdea80000  ld          $t0, 0x0($s5)
    ctx->pc = 0x234a94u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 21), 0)));
label_234a98:
    // 0x234a98: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x234a98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_234a9c:
    // 0x234a9c: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x234a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
label_234aa0:
    // 0x234aa0: 0x304207c0  andi        $v0, $v0, 0x7C0
    ctx->pc = 0x234aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1984);
label_234aa4:
    // 0x234aa4: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x234aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_234aa8:
    // 0x234aa8: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_234aac:
    // 0x234aac: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x234aacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_234ab0:
    // 0x234ab0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_234ab4:
    if (ctx->pc == 0x234AB4u) {
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AB8u;
        goto label_234ab8;
    }
    ctx->pc = 0x234AB0u;
    {
        const bool branch_taken_0x234ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0xafa400b0  sw          $a0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab0) {
            ctx->pc = 0x234B48u;
            goto label_234b48;
        }
    }
    ctx->pc = 0x234AB8u;
label_234ab8:
    // 0x234ab8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x234ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_234abc:
    // 0x234abc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x234abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_234ac0:
    // 0x234ac0: 0x2442b060  addiu       $v0, $v0, -0x4FA0
    ctx->pc = 0x234ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
label_234ac4:
    // 0x234ac4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x234ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_234ac8:
    // 0x234ac8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x234ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_234acc:
    // 0x234acc: 0x800008  jr          $a0
label_234ad0:
    if (ctx->pc == 0x234AD0u) {
        ctx->pc = 0x234AD4u;
        goto label_234ad4;
    }
    ctx->pc = 0x234ACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x234AD4u: goto label_234ad4;
            case 0x234AE4u: goto label_234ae4;
            case 0x234AF4u: goto label_234af4;
            case 0x234B04u: goto label_234b04;
            case 0x234B14u: goto label_234b14;
            case 0x234B48u: goto label_234b48;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234ACCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x234AD4u;
label_234ad4:
    // 0x234ad4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_234ad8:
    // 0x234ad8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234adc:
    // 0x234adc: 0x10000010  b           . + 4 + (0x10 << 2)
label_234ae0:
    if (ctx->pc == 0x234AE0u) {
        ctx->pc = 0x234AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ADCu;
        // 0x234ae0: 0x2463afa0  addiu       $v1, $v1, -0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AE4u;
        goto label_234ae4;
    }
    ctx->pc = 0x234ADCu;
    {
        const bool branch_taken_0x234adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ADCu;
        // 0x234ae0: 0x2463afa0  addiu       $v1, $v1, -0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946720));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234adc) {
            ctx->pc = 0x234B20u;
            goto label_234b20;
        }
    }
    ctx->pc = 0x234AE4u;
label_234ae4:
    // 0x234ae4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_234ae8:
    // 0x234ae8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234ae8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234aec:
    // 0x234aec: 0x1000000c  b           . + 4 + (0xC << 2)
label_234af0:
    if (ctx->pc == 0x234AF0u) {
        ctx->pc = 0x234AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AECu;
        // 0x234af0: 0x2463afc0  addiu       $v1, $v1, -0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AF4u;
        goto label_234af4;
    }
    ctx->pc = 0x234AECu;
    {
        const bool branch_taken_0x234aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AECu;
        // 0x234af0: 0x2463afc0  addiu       $v1, $v1, -0x5040 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234aec) {
            ctx->pc = 0x234B20u;
            goto label_234b20;
        }
    }
    ctx->pc = 0x234AF4u;
label_234af4:
    // 0x234af4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234af4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_234af8:
    // 0x234af8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234af8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234afc:
    // 0x234afc: 0x10000008  b           . + 4 + (0x8 << 2)
label_234b00:
    if (ctx->pc == 0x234B00u) {
        ctx->pc = 0x234B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AFCu;
        // 0x234b00: 0x2463afe0  addiu       $v1, $v1, -0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B04u;
        goto label_234b04;
    }
    ctx->pc = 0x234AFCu;
    {
        const bool branch_taken_0x234afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AFCu;
        // 0x234b00: 0x2463afe0  addiu       $v1, $v1, -0x5020 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946784));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234afc) {
            ctx->pc = 0x234B20u;
            goto label_234b20;
        }
    }
    ctx->pc = 0x234B04u;
label_234b04:
    // 0x234b04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_234b08:
    // 0x234b08: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234b08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234b0c:
    // 0x234b0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_234b10:
    if (ctx->pc == 0x234B10u) {
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x2463b000  addiu       $v1, $v1, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B14u;
        goto label_234b14;
    }
    ctx->pc = 0x234B0Cu;
    {
        const bool branch_taken_0x234b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B0Cu;
        // 0x234b10: 0x2463b000  addiu       $v1, $v1, -0x5000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b0c) {
            ctx->pc = 0x234B20u;
            goto label_234b20;
        }
    }
    ctx->pc = 0x234B14u;
label_234b14:
    // 0x234b14: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x234b14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_234b18:
    // 0x234b18: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234b1c:
    // 0x234b1c: 0x2463b020  addiu       $v1, $v1, -0x4FE0
    ctx->pc = 0x234b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946848));
label_234b20:
    // 0x234b20: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x234b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_234b24:
    // 0x234b24: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x234b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_234b28:
    // 0x234b28: 0x2912821  addu        $a1, $s4, $s1
    ctx->pc = 0x234b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_234b2c:
    // 0x234b2c: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x234b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
label_234b30:
    // 0x234b30: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x234b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_234b34:
    // 0x234b34: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x234b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_234b38:
    // 0x234b38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234b3c:
    // 0x234b3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x234b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_234b40:
    // 0x234b40: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x234b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_234b44:
    // 0x234b44: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x234b44u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_234b48:
    // 0x234b48: 0xe61018  mult        $v0, $a3, $a2
    ctx->pc = 0x234b48u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234b4c:
    // 0x234b4c: 0x8fac00b0  lw          $t4, 0xB0($sp)
    ctx->pc = 0x234b4cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_234b50:
    // 0x234b50: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x234b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_234b54:
    // 0x234b54: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x234b54u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
label_234b58:
    // 0x234b58: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x234b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_234b5c:
    // 0x234b5c: 0x1ef042  srl         $fp, $fp, 1
    ctx->pc = 0x234b5cu;
    SET_GPR_S32(ctx, 30, (int32_t)SRL32(GPR_U32(ctx, 30), 1));
label_234b60:
    // 0x234b60: 0x73842  srl         $a3, $a3, 1
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 1));
label_234b64:
    // 0x234b64: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_234b68:
    // 0x234b68: 0x1821021  addu        $v0, $t4, $v0
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_234b6c:
    // 0x234b6c: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x234b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_234b70:
    // 0x234b70: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234b74:
    // 0x234b74: 0x13c00013  beqz        $fp, . + 4 + (0x13 << 2)
label_234b78:
    if (ctx->pc == 0x234B78u) {
        ctx->pc = 0x234B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B74u;
        // 0x234b78: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B7Cu;
        goto label_234b7c;
    }
    ctx->pc = 0x234B74u;
    {
        const bool branch_taken_0x234b74 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B74u;
        // 0x234b78: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b74) {
            ctx->pc = 0x234BC4u;
            goto label_234bc4;
        }
    }
    ctx->pc = 0x234B7Cu;
label_234b7c:
    // 0x234b7c: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_234b80:
    if (ctx->pc == 0x234B80u) {
        ctx->pc = 0x234B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B7Cu;
        // 0x234b80: 0x8f8284b0  lw          $v0, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B84u;
        goto label_234b84;
    }
    ctx->pc = 0x234B7Cu;
    {
        const bool branch_taken_0x234b7c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x234B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B7Cu;
        // 0x234b80: 0x8f8284b0  lw          $v0, -0x7B50($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935728)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b7c) {
            ctx->pc = 0x234BC4u;
            goto label_234bc4;
        }
    }
    ctx->pc = 0x234B84u;
label_234b84:
    // 0x234b84: 0x1a2102b  sltu        $v0, $t5, $v0
    ctx->pc = 0x234b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 13) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_234b88:
    // 0x234b88: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_234b8c:
    if (ctx->pc == 0x234B8Cu) {
        ctx->pc = 0x234B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B88u;
        // 0x234b8c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B90u;
        goto label_234b90;
    }
    ctx->pc = 0x234B88u;
    {
        const bool branch_taken_0x234b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b88) {
            ctx->pc = 0x234B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234B88u;
            // 0x234b8c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234BC8u;
            goto label_234bc8;
        }
    }
    ctx->pc = 0x234B90u;
label_234b90:
    // 0x234b90: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x234b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234b94:
    // 0x234b94: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x234b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_234b98:
    // 0x234b98: 0x5440ff77  bnel        $v0, $zero, . + 4 + (-0x89 << 2)
label_234b9c:
    if (ctx->pc == 0x234B9Cu) {
        ctx->pc = 0x234B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B98u;
        // 0x234b9c: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BA0u;
        goto label_234ba0;
    }
    ctx->pc = 0x234B98u;
    {
        const bool branch_taken_0x234b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234b98) {
            ctx->pc = 0x234B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234B98u;
            // 0x234b9c: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234978;
        }
    }
    ctx->pc = 0x234BA0u;
label_234ba0:
    // 0x234ba0: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x234ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234ba4:
    // 0x234ba4: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x234ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_234ba8:
    // 0x234ba8: 0x5440ff73  bnel        $v0, $zero, . + 4 + (-0x8D << 2)
label_234bac:
    if (ctx->pc == 0x234BACu) {
        ctx->pc = 0x234BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BA8u;
        // 0x234bac: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BB0u;
        goto label_234bb0;
    }
    ctx->pc = 0x234BA8u;
    {
        const bool branch_taken_0x234ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234ba8) {
            ctx->pc = 0x234BACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234BA8u;
            // 0x234bac: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234978;
        }
    }
    ctx->pc = 0x234BB0u;
label_234bb0:
    // 0x234bb0: 0x2fc20008  sltiu       $v0, $fp, 0x8
    ctx->pc = 0x234bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_234bb4:
    // 0x234bb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_234bb8:
    if (ctx->pc == 0x234BB8u) {
        ctx->pc = 0x234BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BB4u;
        // 0x234bb8: 0x2ce20008  sltiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BBCu;
        goto label_234bbc;
    }
    ctx->pc = 0x234BB4u;
    {
        const bool branch_taken_0x234bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BB4u;
        // 0x234bb8: 0x2ce20008  sltiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234bb4) {
            ctx->pc = 0x234BC4u;
            goto label_234bc4;
        }
    }
    ctx->pc = 0x234BBCu;
label_234bbc:
    // 0x234bbc: 0x5040ff6e  beql        $v0, $zero, . + 4 + (-0x92 << 2)
label_234bc0:
    if (ctx->pc == 0x234BC0u) {
        ctx->pc = 0x234BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BBCu;
        // 0x234bc0: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BC4u;
        goto label_234bc4;
    }
    ctx->pc = 0x234BBCu;
    {
        const bool branch_taken_0x234bbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234bbc) {
            ctx->pc = 0x234BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234BBCu;
            // 0x234bc0: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234978u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234978;
        }
    }
    ctx->pc = 0x234BC4u;
label_234bc4:
    // 0x234bc4: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234bc8:
    // 0x234bc8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x234bc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_234bcc:
    // 0x234bcc: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x234bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234bd0:
    // 0x234bd0: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x234bd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_234bd4:
    // 0x234bd4: 0x8e650010  lw          $a1, 0x10($s3)
    ctx->pc = 0x234bd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234bd8:
    // 0x234bd8: 0x63502  srl         $a2, $a2, 20
    ctx->pc = 0x234bd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 20));
label_234bdc:
    // 0x234bdc: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x234bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
label_234be0:
    // 0x234be0: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x234be0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_234be4:
    // 0x234be4: 0xc08cc8a  jal         func_233228
label_234be8:
    if (ctx->pc == 0x234BE8u) {
        ctx->pc = 0x234BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BE4u;
        // 0x234be8: 0x7fad0160  sq          $t5, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BECu;
        goto label_234bec;
    }
    ctx->pc = 0x234BE4u;
    SET_GPR_U32(ctx, 31, 0x234BECu);
    ctx->pc = 0x234BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BE4u;
    // 0x234be8: 0x7fad0160  sq          $t5, 0x160($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x233228u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x233228u, 0x234BE4u, 0x234BECu)) {
        return;
    }
    ctx->pc = 0x234BECu;
label_234bec:
    // 0x234bec: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x234becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_234bf0:
    // 0x234bf0: 0x8fa300d0  lw          $v1, 0xD0($sp)
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_234bf4:
    // 0x234bf4: 0xdfa40018  ld          $a0, 0x18($sp)
    ctx->pc = 0x234bf4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_234bf8:
    // 0x234bf8: 0x436018  mult        $t4, $v0, $v1
    ctx->pc = 0x234bf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_234bfc:
    // 0x234bfc: 0xdfa50058  ld          $a1, 0x58($sp)
    ctx->pc = 0x234bfcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_234c00:
    // 0x234c00: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x234c00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_234c04:
    // 0x234c04: 0x30843fff  andi        $a0, $a0, 0x3FFF
    ctx->pc = 0x234c04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16383);
label_234c08:
    // 0x234c08: 0xdfab0060  ld          $t3, 0x60($sp)
    ctx->pc = 0x234c08u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_234c0c:
    // 0x234c0c: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x234c0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
label_234c10:
    // 0x234c10: 0xdfa70028  ld          $a3, 0x28($sp)
    ctx->pc = 0x234c10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_234c14:
    // 0x234c14: 0x30633fff  andi        $v1, $v1, 0x3FFF
    ctx->pc = 0x234c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16383);
label_234c18:
    // 0x234c18: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x234c18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_234c1c:
    // 0x234c1c: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x234c1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
label_234c20:
    // 0x234c20: 0xdfa90068  ld          $t1, 0x68($sp)
    ctx->pc = 0x234c20u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_234c24:
    // 0x234c24: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x234c24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_234c28:
    // 0x234c28: 0xb58bc  dsll32      $t3, $t3, 2
    ctx->pc = 0x234c28u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (32 + 2));
label_234c2c:
    // 0x234c2c: 0x30e73fff  andi        $a3, $a3, 0x3FFF
    ctx->pc = 0x234c2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16383);
label_234c30:
    // 0x234c30: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x234c30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_234c34:
    // 0x234c34: 0x73a3c  dsll32      $a3, $a3, 8
    ctx->pc = 0x234c34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 8));
label_234c38:
    // 0x234c38: 0xdfa80070  ld          $t0, 0x70($sp)
    ctx->pc = 0x234c38u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_234c3c:
    // 0x234c3c: 0x8b2025  or          $a0, $a0, $t3
    ctx->pc = 0x234c3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 11));
label_234c40:
    // 0x234c40: 0xdfa60038  ld          $a2, 0x38($sp)
    ctx->pc = 0x234c40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_234c44:
    // 0x234c44: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x234c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
label_234c48:
    // 0x234c48: 0x94dbc  dsll32      $t1, $t1, 22
    ctx->pc = 0x234c48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 22));
label_234c4c:
    // 0x234c4c: 0xdfaa0078  ld          $t2, 0x78($sp)
    ctx->pc = 0x234c4cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_234c50:
    // 0x234c50: 0xdfa50040  ld          $a1, 0x40($sp)
    ctx->pc = 0x234c50u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_234c54:
    // 0x234c54: 0x893825  or          $a3, $a0, $t1
    ctx->pc = 0x234c54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_234c58:
    // 0x234c58: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x234c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_234c5c:
    // 0x234c5c: 0x843b8  dsll        $t0, $t0, 14
    ctx->pc = 0x234c5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 14);
label_234c60:
    // 0x234c60: 0x30c63fff  andi        $a2, $a2, 0x3FFF
    ctx->pc = 0x234c60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16383);
label_234c64:
    // 0x234c64: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x234c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_234c68:
    // 0x234c68: 0x63538  dsll        $a2, $a2, 20
    ctx->pc = 0x234c68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 20);
label_234c6c:
    // 0x234c6c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x234c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
label_234c70:
    // 0x234c70: 0xdfa30080  ld          $v1, 0x80($sp)
    ctx->pc = 0x234c70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_234c74:
    // 0x234c74: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x234c74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_234c78:
    // 0x234c78: 0xa50bc  dsll32      $t2, $t2, 2
    ctx->pc = 0x234c78u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 2));
label_234c7c:
    // 0x234c7c: 0x30a53fff  andi        $a1, $a1, 0x3FFF
    ctx->pc = 0x234c7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
label_234c80:
    // 0x234c80: 0x1846018  mult        $t4, $t4, $a0
    ctx->pc = 0x234c80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 12, (int32_t)result); }
label_234c84:
    // 0x234c84: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x234c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
label_234c88:
    // 0x234c88: 0x52a3c  dsll32      $a1, $a1, 8
    ctx->pc = 0x234c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 8));
label_234c8c:
    // 0x234c8c: 0x7303f  dsra32      $a2, $a3, 0
    ctx->pc = 0x234c8cu;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 7) >> (32 + 0));
label_234c90:
    // 0x234c90: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x234c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_234c94:
    // 0x234c94: 0x31dbc  dsll32      $v1, $v1, 22
    ctx->pc = 0x234c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 22));
label_234c98:
    // 0x234c98: 0x7203c  dsll32      $a0, $a3, 0
    ctx->pc = 0x234c98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) << (32 + 0));
label_234c9c:
    // 0x234c9c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x234c9cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_234ca0:
    // 0x234ca0: 0x7bad0160  lq          $t5, 0x160($sp)
    ctx->pc = 0x234ca0u;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_234ca4:
    // 0x234ca4: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x234ca4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234ca8:
    // 0x234ca8: 0x8fae00b0  lw          $t6, 0xB0($sp)
    ctx->pc = 0x234ca8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_234cac:
    // 0x234cac: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x234cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_234cb0:
    // 0x234cb0: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x234cb0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_234cb4:
    // 0x234cb4: 0xd6880  sll         $t5, $t5, 2
    ctx->pc = 0x234cb4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
label_234cb8:
    // 0x234cb8: 0x7183f  dsra32      $v1, $a3, 0
    ctx->pc = 0x234cb8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 7) >> (32 + 0));
label_234cbc:
    // 0x234cbc: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x234cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_234cc0:
    // 0x234cc0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x234cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_234cc4:
    // 0x234cc4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x234cc4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_234cc8:
    // 0x234cc8: 0xa24d0016  sb          $t5, 0x16($s2)
    ctx->pc = 0x234cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 13));
label_234ccc:
    // 0x234ccc: 0xae440018  sw          $a0, 0x18($s2)
    ctx->pc = 0x234cccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 4));
label_234cd0:
    // 0x234cd0: 0xae46001c  sw          $a2, 0x1C($s2)
    ctx->pc = 0x234cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 6));
label_234cd4:
    // 0x234cd4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x234cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_234cd8:
    // 0x234cd8: 0xae430024  sw          $v1, 0x24($s2)
    ctx->pc = 0x234cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 3));
label_234cdc:
    // 0x234cdc: 0xae4c002c  sw          $t4, 0x2C($s2)
    ctx->pc = 0x234cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 12));
label_234ce0:
    // 0x234ce0: 0x11800057  beqz        $t4, . + 4 + (0x57 << 2)
label_234ce4:
    if (ctx->pc == 0x234CE4u) {
        ctx->pc = 0x234CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE0u;
        // 0x234ce4: 0xae4e0030  sw          $t6, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CE8u;
        goto label_234ce8;
    }
    ctx->pc = 0x234CE0u;
    {
        const bool branch_taken_0x234ce0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x234CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CE0u;
        // 0x234ce4: 0xae4e0030  sw          $t6, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ce0) {
            ctx->pc = 0x234E40u;
            goto label_234e40;
        }
    }
    ctx->pc = 0x234CE8u;
label_234ce8:
    // 0x234ce8: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x234ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_234cec:
    // 0x234cec: 0x21980  sll         $v1, $v0, 6
    ctx->pc = 0x234cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_234cf0:
    // 0x234cf0: 0x146e0054  bne         $v1, $t6, . + 4 + (0x54 << 2)
label_234cf4:
    if (ctx->pc == 0x234CF4u) {
        ctx->pc = 0x234CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CF0u;
        // 0x234cf4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CF8u;
        goto label_234cf8;
    }
    ctx->pc = 0x234CF0u;
    {
        const bool branch_taken_0x234cf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 14));
        ctx->pc = 0x234CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CF0u;
        // 0x234cf4: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cf0) {
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234CF8u;
label_234cf8:
    // 0x234cf8: 0x24620800  addiu       $v0, $v1, 0x800
    ctx->pc = 0x234cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2048));
label_234cfc:
    // 0x234cfc: 0x10000051  b           . + 4 + (0x51 << 2)
label_234d00:
    if (ctx->pc == 0x234D00u) {
        ctx->pc = 0x234D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CFCu;
        // 0x234d00: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D04u;
        goto label_234d04;
    }
    ctx->pc = 0x234CFCu;
    {
        const bool branch_taken_0x234cfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CFCu;
        // 0x234d00: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234cfc) {
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234D04u;
label_234d04:
    // 0x234d04: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x234d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234d08:
    // 0x234d08: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x234d08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_234d0c:
    // 0x234d0c: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x234d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_234d10:
    // 0x234d10: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x234d10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_234d14:
    // 0x234d14: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x234d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234d18:
    // 0x234d18: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x234d18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
label_234d1c:
    // 0x234d1c: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x234d1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_234d20:
    // 0x234d20: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x234d20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
label_234d24:
    // 0x234d24: 0xae440024  sw          $a0, 0x24($s2)
    ctx->pc = 0x234d24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 4));
label_234d28:
    // 0x234d28: 0x2408f800  addiu       $t0, $zero, -0x800
    ctx->pc = 0x234d28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
label_234d2c:
    // 0x234d2c: 0x663818  mult        $a3, $v1, $a2
    ctx->pc = 0x234d2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_234d30:
    // 0x234d30: 0xae44001c  sw          $a0, 0x1C($s2)
    ctx->pc = 0x234d30u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 4));
label_234d34:
    // 0x234d34: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x234d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_234d38:
    // 0x234d38: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x234d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_234d3c:
    // 0x234d3c: 0xae460020  sw          $a2, 0x20($s2)
    ctx->pc = 0x234d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 6));
label_234d40:
    // 0x234d40: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x234d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_234d44:
    // 0x234d44: 0xae460018  sw          $a2, 0x18($s2)
    ctx->pc = 0x234d44u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 6));
label_234d48:
    // 0x234d48: 0x91982  srl         $v1, $t1, 6
    ctx->pc = 0x234d48u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 6));
label_234d4c:
    // 0x234d4c: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x234d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_234d50:
    // 0x234d50: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x234d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_234d54:
    // 0x234d54: 0xa2400016  sb          $zero, 0x16($s2)
    ctx->pc = 0x234d54u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 22), (uint8_t)GPR_U32(ctx, 0));
label_234d58:
    // 0x234d58: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x234d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_234d5c:
    // 0x234d5c: 0xe23818  mult        $a3, $a3, $v0
    ctx->pc = 0x234d5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_234d60:
    // 0x234d60: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
label_234d64:
    if (ctx->pc == 0x234D64u) {
        ctx->pc = 0x234D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234D60u;
        // 0x234d64: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234D68u;
        goto label_234d68;
    }
    ctx->pc = 0x234D60u;
    {
        const bool branch_taken_0x234d60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x234d60) {
            ctx->pc = 0x234D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234D60u;
            // 0x234d64: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234D68u;
            goto label_234d68;
        }
    }
    ctx->pc = 0x234D68u;
label_234d68:
    // 0x234d68: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x234d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234d6c:
    // 0x234d6c: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x234d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_234d70:
    // 0x234d70: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x234d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_234d74:
    // 0x234d74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_234d78:
    // 0x234d78: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x234d78u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_234d7c:
    // 0x234d7c: 0x2012  mflo        $a0
    ctx->pc = 0x234d7cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_234d80:
    // 0x234d80: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x234d80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_234d84:
    // 0x234d84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x234d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_234d88:
    // 0x234d88: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x234d88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_234d8c:
    // 0x234d8c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x234d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
label_234d90:
    // 0x234d90: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x234d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234d94:
    // 0x234d94: 0xae47002c  sw          $a3, 0x2C($s2)
    ctx->pc = 0x234d94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 7));
label_234d98:
    // 0x234d98: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x234d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_234d9c:
    // 0x234d9c: 0x4e1021  addu        $v0, $v0, $t6
    ctx->pc = 0x234d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 14)));
label_234da0:
    // 0x234da0: 0x4e001b  divu        $zero, $v0, $t6
    ctx->pc = 0x234da0u;
    { uint32_t divisor = GPR_U32(ctx, 14); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_234da4:
    // 0x234da4: 0x1012  mflo        $v0
    ctx->pc = 0x234da4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_234da8:
    // 0x234da8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x234da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234dac:
    // 0x234dac: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x234dacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234db0:
    // 0x234db0: 0x22ac0  sll         $a1, $v0, 11
    ctx->pc = 0x234db0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_234db4:
    // 0x234db4: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
label_234db8:
    if (ctx->pc == 0x234DB8u) {
        ctx->pc = 0x234DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DB4u;
        // 0x234db8: 0xae450030  sw          $a1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DBCu;
        goto label_234dbc;
    }
    ctx->pc = 0x234DB4u;
    {
        const bool branch_taken_0x234db4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DB4u;
        // 0x234db8: 0xae450030  sw          $a1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234db4) {
            ctx->pc = 0x234E40u;
            goto label_234e40;
        }
    }
    ctx->pc = 0x234DBCu;
label_234dbc:
    // 0x234dbc: 0x891818  mult        $v1, $a0, $t1
    ctx->pc = 0x234dbcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_234dc0:
    // 0x234dc0: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x234dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234dc4:
    // 0x234dc4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x234dc4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_234dc8:
    // 0x234dc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_234dcc:
    if (ctx->pc == 0x234DCCu) {
        ctx->pc = 0x234DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DC8u;
        // 0x234dcc: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DD0u;
        goto label_234dd0;
    }
    ctx->pc = 0x234DC8u;
    {
        const bool branch_taken_0x234dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DC8u;
        // 0x234dcc: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234dc8) {
            ctx->pc = 0x234DE4u;
            goto label_234de4;
        }
    }
    ctx->pc = 0x234DD0u;
label_234dd0:
    // 0x234dd0: 0xce1818  mult        $v1, $a2, $t6
    ctx->pc = 0x234dd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_234dd4:
    // 0x234dd4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x234dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234dd8:
    // 0x234dd8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x234dd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_234ddc:
    // 0x234ddc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_234de0:
    if (ctx->pc == 0x234DE0u) {
        ctx->pc = 0x234DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DDCu;
        // 0x234de0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DE4u;
        goto label_234de4;
    }
    ctx->pc = 0x234DDCu;
    {
        const bool branch_taken_0x234ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DDCu;
        // 0x234de0: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ddc) {
            ctx->pc = 0x234DF0u;
            goto label_234df0;
        }
    }
    ctx->pc = 0x234DE4u;
label_234de4:
    // 0x234de4: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x234de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
label_234de8:
    // 0x234de8: 0x10000016  b           . + 4 + (0x16 << 2)
label_234dec:
    if (ctx->pc == 0x234DECu) {
        ctx->pc = 0x234DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DE8u;
        // 0x234dec: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234DF0u;
        goto label_234df0;
    }
    ctx->pc = 0x234DE8u;
    {
        const bool branch_taken_0x234de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234DE8u;
        // 0x234dec: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234de8) {
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234DF0u;
label_234df0:
    // 0x234df0: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x234df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_234df4:
    // 0x234df4: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x234df4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_234df8:
    // 0x234df8: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x234df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_234dfc:
    // 0x234dfc: 0x8d2021  addu        $a0, $a0, $t5
    ctx->pc = 0x234dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 13)));
label_234e00:
    // 0x234e00: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x234e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_234e04:
    // 0x234e04: 0x8d001b  divu        $zero, $a0, $t5
    ctx->pc = 0x234e04u;
    { uint32_t divisor = GPR_U32(ctx, 13); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
label_234e08:
    // 0x234e08: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x234e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_234e0c:
    // 0x234e0c: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x234e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
label_234e10:
    // 0x234e10: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x234e10u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_234e14:
    // 0x234e14: 0x51a00001  beql        $t5, $zero, . + 4 + (0x1 << 2)
label_234e18:
    if (ctx->pc == 0x234E18u) {
        ctx->pc = 0x234E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E14u;
        // 0x234e18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E1Cu;
        goto label_234e1c;
    }
    ctx->pc = 0x234E14u;
    {
        const bool branch_taken_0x234e14 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        if (branch_taken_0x234e14) {
            ctx->pc = 0x234E18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E14u;
            // 0x234e18: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x234E1Cu;
            goto label_234e1c;
        }
    }
    ctx->pc = 0x234E1Cu;
label_234e1c:
    // 0x234e1c: 0x2012  mflo        $a0
    ctx->pc = 0x234e1cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_234e20:
    // 0x234e20: 0x6b001b  divu        $zero, $v1, $t3
    ctx->pc = 0x234e20u;
    { uint32_t divisor = GPR_U32(ctx, 11); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_234e24:
    // 0x234e24: 0x1812  mflo        $v1
    ctx->pc = 0x234e24u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_234e28:
    // 0x234e28: 0x831018  mult        $v0, $a0, $v1
    ctx->pc = 0x234e28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234e2c:
    // 0x234e2c: 0x212c0  sll         $v0, $v0, 11
    ctx->pc = 0x234e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 11));
label_234e30:
    // 0x234e30: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x234e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_234e34:
    // 0x234e34: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x234e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_234e38:
    // 0x234e38: 0x10000002  b           . + 4 + (0x2 << 2)
label_234e3c:
    if (ctx->pc == 0x234E3Cu) {
        ctx->pc = 0x234E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E38u;
        // 0x234e3c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E40u;
        goto label_234e40;
    }
    ctx->pc = 0x234E38u;
    {
        const bool branch_taken_0x234e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E38u;
        // 0x234e3c: 0xae420030  sw          $v0, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e38) {
            ctx->pc = 0x234E44u;
            goto label_234e44;
        }
    }
    ctx->pc = 0x234E40u;
label_234e40:
    // 0x234e40: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x234e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_234e44:
    // 0x234e44: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x234e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_234e48:
    // 0x234e48: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x234e48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_234e4c:
    // 0x234e4c: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x234e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_234e50:
    // 0x234e50: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x234e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_234e54:
    // 0x234e54: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234e58:
    // 0x234e58: 0xae420028  sw          $v0, 0x28($s2)
    ctx->pc = 0x234e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
label_234e5c:
    // 0x234e5c: 0x8f838438  lw          $v1, -0x7BC8($gp)
    ctx->pc = 0x234e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935608)));
label_234e60:
    // 0x234e60: 0x146002b1  bnez        $v1, . + 4 + (0x2B1 << 2)
label_234e64:
    if (ctx->pc == 0x234E64u) {
        ctx->pc = 0x234E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E60u;
        // 0x234e64: 0x92620021  lbu         $v0, 0x21($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E68u;
        goto label_234e68;
    }
    ctx->pc = 0x234E60u;
    {
        const bool branch_taken_0x234e60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x234E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E60u;
        // 0x234e64: 0x92620021  lbu         $v0, 0x21($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e60) {
            ctx->pc = 0x235928u;
            goto label_235928;
        }
    }
    ctx->pc = 0x234E68u;
label_234e68:
    // 0x234e68: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x234e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_234e6c:
    // 0x234e6c: 0x544002ae  bnel        $v0, $zero, . + 4 + (0x2AE << 2)
label_234e70:
    if (ctx->pc == 0x234E70u) {
        ctx->pc = 0x234E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E6Cu;
        // 0x234e70: 0x92620021  lbu         $v0, 0x21($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E74u;
        goto label_234e74;
    }
    ctx->pc = 0x234E6Cu;
    {
        const bool branch_taken_0x234e6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234e6c) {
            ctx->pc = 0x234E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234E6Cu;
            // 0x234e70: 0x92620021  lbu         $v0, 0x21($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235928u;
            goto label_235928;
        }
    }
    ctx->pc = 0x234E74u;
label_234e74:
    // 0x234e74: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x234e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_234e78:
    // 0x234e78: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x234e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_234e7c:
    // 0x234e7c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x234e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_234e80:
    // 0x234e80: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x234e80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234e84:
    // 0x234e84: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x234e84u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_234e88:
    // 0x234e88: 0x211c3  sra         $v0, $v0, 7
    ctx->pc = 0x234e88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 7));
label_234e8c:
    // 0x234e8c: 0x28427fff  slti        $v0, $v0, 0x7FFF
    ctx->pc = 0x234e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)32767) ? 1 : 0);
label_234e90:
    // 0x234e90: 0x104002a4  beqz        $v0, . + 4 + (0x2A4 << 2)
label_234e94:
    if (ctx->pc == 0x234E94u) {
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234E98u;
        goto label_234e98;
    }
    ctx->pc = 0x234E90u;
    {
        const bool branch_taken_0x234e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234E90u;
        // 0x234e94: 0x24040013  addiu       $a0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234e90) {
            ctx->pc = 0x235924u;
            goto label_235924;
        }
    }
    ctx->pc = 0x234E98u;
label_234e98:
    // 0x234e98: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x234e98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_234e9c:
    // 0x234e9c: 0xffa000f8  sd          $zero, 0xF8($sp)
    ctx->pc = 0x234e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
label_234ea0:
    // 0x234ea0: 0x34450001  ori         $a1, $v0, 0x1
    ctx->pc = 0x234ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_234ea4:
    // 0x234ea4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x234ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234ea8:
    // 0x234ea8: 0x31d02  srl         $v1, $v1, 20
    ctx->pc = 0x234ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 20));
label_234eac:
    // 0x234eac: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x234eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
label_234eb0:
    // 0x234eb0: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
label_234eb4:
    if (ctx->pc == 0x234EB4u) {
        ctx->pc = 0x234EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB0u;
        // 0x234eb4: 0xa2450036  sb          $a1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EB8u;
        goto label_234eb8;
    }
    ctx->pc = 0x234EB0u;
    {
        const bool branch_taken_0x234eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EB0u;
        // 0x234eb4: 0xa2450036  sb          $a1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234eb0) {
            ctx->pc = 0x234FC4u;
            goto label_234fc4;
        }
    }
    ctx->pc = 0x234EB8u;
label_234eb8:
    // 0x234eb8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x234eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_234ebc:
    // 0x234ebc: 0x34a30002  ori         $v1, $a1, 0x2
    ctx->pc = 0x234ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
label_234ec0:
    // 0x234ec0: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x234ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_234ec4:
    // 0x234ec4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x234ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_234ec8:
    // 0x234ec8: 0x1440003e  bnez        $v0, . + 4 + (0x3E << 2)
label_234ecc:
    if (ctx->pc == 0x234ECCu) {
        ctx->pc = 0x234ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EC8u;
        // 0x234ecc: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234ED0u;
        goto label_234ed0;
    }
    ctx->pc = 0x234EC8u;
    {
        const bool branch_taken_0x234ec8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EC8u;
        // 0x234ecc: 0xa2430036  sb          $v1, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ec8) {
            ctx->pc = 0x234FC4u;
            goto label_234fc4;
        }
    }
    ctx->pc = 0x234ED0u;
label_234ed0:
    // 0x234ed0: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x234ed0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_234ed4:
    // 0x234ed4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234ed8:
    // 0x234ed8: 0x23882  srl         $a3, $v0, 2
    ctx->pc = 0x234ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_234edc:
    // 0x234edc: 0x728c0  sll         $a1, $a3, 3
    ctx->pc = 0x234edcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_234ee0:
    // 0x234ee0: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x234ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_234ee4:
    // 0x234ee4: 0xdc430050  ld          $v1, 0x50($v0)
    ctx->pc = 0x234ee4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 80)));
label_234ee8:
    // 0x234ee8: 0x54640037  bnel        $v1, $a0, . + 4 + (0x37 << 2)
label_234eec:
    if (ctx->pc == 0x234EECu) {
        ctx->pc = 0x234EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234EE8u;
        // 0x234eec: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234EF0u;
        goto label_234ef0;
    }
    ctx->pc = 0x234EE8u;
    {
        const bool branch_taken_0x234ee8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x234ee8) {
            ctx->pc = 0x234EECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234EE8u;
            // 0x234eec: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234FC8u;
            goto label_234fc8;
        }
    }
    ctx->pc = 0x234EF0u;
label_234ef0:
    // 0x234ef0: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x234ef0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_234ef4:
    // 0x234ef4: 0x2404ffe1  addiu       $a0, $zero, -0x1F
    ctx->pc = 0x234ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967265));
label_234ef8:
    // 0x234ef8: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x234ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_234efc:
    // 0x234efc: 0x30c20002  andi        $v0, $a2, 0x2
    ctx->pc = 0x234efcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2);
label_234f00:
    // 0x234f00: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x234f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
label_234f04:
    // 0x234f04: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x234f04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_234f08:
    // 0x234f08: 0x30c50004  andi        $a1, $a2, 0x4
    ctx->pc = 0x234f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_234f0c:
    // 0x234f0c: 0x8e470010  lw          $a3, 0x10($s2)
    ctx->pc = 0x234f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_234f10:
    // 0x234f10: 0x3a34821  addu        $t1, $sp, $v1
    ctx->pc = 0x234f10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
label_234f14:
    // 0x234f14: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x234f14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_234f18:
    // 0x234f18: 0x5287a  dsrl        $a1, $a1, 1
    ctx->pc = 0x234f18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 1);
label_234f1c:
    // 0x234f1c: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x234f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
label_234f20:
    // 0x234f20: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x234f20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_234f24:
    // 0x234f24: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x234f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_234f28:
    // 0x234f28: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x234f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_234f2c:
    // 0x234f2c: 0x30e50002  andi        $a1, $a3, 0x2
    ctx->pc = 0x234f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_234f30:
    // 0x234f30: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x234f30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_234f34:
    // 0x234f34: 0x3463ffe1  ori         $v1, $v1, 0xFFE1
    ctx->pc = 0x234f34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65505);
label_234f38:
    // 0x234f38: 0x8d280090  lw          $t0, 0x90($t1)
    ctx->pc = 0x234f38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 144)));
label_234f3c:
    // 0x234f3c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x234f3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_234f40:
    // 0x234f40: 0x630ba  dsrl        $a2, $a2, 2
    ctx->pc = 0x234f40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 2);
label_234f44:
    // 0x234f44: 0xe31824  and         $v1, $a3, $v1
    ctx->pc = 0x234f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
label_234f48:
    // 0x234f48: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x234f48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_234f4c:
    // 0x234f4c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x234f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_234f50:
    // 0x234f50: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x234f50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_234f54:
    // 0x234f54: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x234f54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_234f58:
    // 0x234f58: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x234f58u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_234f5c:
    // 0x234f5c: 0x310507ff  andi        $a1, $t0, 0x7FF
    ctx->pc = 0x234f5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2047);
label_234f60:
    // 0x234f60: 0x30e60008  andi        $a2, $a3, 0x8
    ctx->pc = 0x234f60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_234f64:
    // 0x234f64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x234f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_234f68:
    // 0x234f68: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x234f68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_234f6c:
    // 0x234f6c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x234f6cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_234f70:
    // 0x234f70: 0x52902  srl         $a1, $a1, 4
    ctx->pc = 0x234f70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
label_234f74:
    // 0x234f74: 0x84442  srl         $t0, $t0, 17
    ctx->pc = 0x234f74u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 17));
label_234f78:
    // 0x234f78: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x234f78u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_234f7c:
    // 0x234f7c: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x234f7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_234f80:
    // 0x234f80: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x234f80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_234f84:
    // 0x234f84: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x234f84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_234f88:
    // 0x234f88: 0x310803f8  andi        $t0, $t0, 0x3F8
    ctx->pc = 0x234f88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)1016);
label_234f8c:
    // 0x234f8c: 0x73882  srl         $a3, $a3, 2
    ctx->pc = 0x234f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 2));
label_234f90:
    // 0x234f90: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x234f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_234f94:
    // 0x234f94: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x234f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
label_234f98:
    // 0x234f98: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x234f98u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_234f9c:
    // 0x234f9c: 0x320c2  srl         $a0, $v1, 3
    ctx->pc = 0x234f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_234fa0:
    // 0x234fa0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x234fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_234fa4:
    // 0x234fa4: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x234fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_234fa8:
    // 0x234fa8: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x234fa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_234fac:
    // 0x234fac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_234fb0:
    if (ctx->pc == 0x234FB0u) {
        ctx->pc = 0x234FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FACu;
        // 0x234fb0: 0x3063003f  andi        $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FB4u;
        goto label_234fb4;
    }
    ctx->pc = 0x234FACu;
    {
        const bool branch_taken_0x234fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FACu;
        // 0x234fb0: 0x3063003f  andi        $v1, $v1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x234fac) {
            ctx->pc = 0x234FC4u;
            goto label_234fc4;
        }
    }
    ctx->pc = 0x234FB4u;
label_234fb4:
    // 0x234fb4: 0x414c0  sll         $v0, $a0, 19
    ctx->pc = 0x234fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 19));
label_234fb8:
    // 0x234fb8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x234fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_234fbc:
    // 0x234fbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x234fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_234fc0:
    // 0x234fc0: 0xffa200f8  sd          $v0, 0xF8($sp)
    ctx->pc = 0x234fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
label_234fc4:
    // 0x234fc4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x234fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_234fc8:
    // 0x234fc8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x234fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_234fcc:
    // 0x234fcc: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x234fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_234fd0:
    // 0x234fd0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x234fd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_234fd4:
    // 0x234fd4: 0x5443004d  bnel        $v0, $v1, . + 4 + (0x4D << 2)
label_234fd8:
    if (ctx->pc == 0x234FD8u) {
        ctx->pc = 0x234FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FD4u;
        // 0x234fd8: 0x92430016  lbu         $v1, 0x16($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FDCu;
        goto label_234fdc;
    }
    ctx->pc = 0x234FD4u;
    {
        const bool branch_taken_0x234fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x234fd4) {
            ctx->pc = 0x234FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234FD4u;
            // 0x234fd8: 0x92430016  lbu         $v1, 0x16($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23510Cu;
            goto label_23510c;
        }
    }
    ctx->pc = 0x234FDCu;
label_234fdc:
    // 0x234fdc: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x234fdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_234fe0:
    // 0x234fe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x234fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234fe4:
    // 0x234fe4: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x234fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_234fe8:
    // 0x234fe8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x234fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_234fec:
    // 0x234fec: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x234fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_234ff0:
    // 0x234ff0: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x234ff0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_234ff4:
    // 0x234ff4: 0x14640044  bne         $v1, $a0, . + 4 + (0x44 << 2)
label_234ff8:
    if (ctx->pc == 0x234FF8u) {
        ctx->pc = 0x234FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FF4u;
        // 0x234ff8: 0xa2420036  sb          $v0, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234FFCu;
        goto label_234ffc;
    }
    ctx->pc = 0x234FF4u;
    {
        const bool branch_taken_0x234ff4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x234FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234FF4u;
        // 0x234ff8: 0xa2420036  sb          $v0, 0x36($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ff4) {
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x234FFCu;
label_234ffc:
    // 0x234ffc: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x234ffcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_235000:
    // 0x235000: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x235000u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235004:
    // 0x235004: 0x23082  srl         $a2, $v0, 2
    ctx->pc = 0x235004u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_235008:
    // 0x235008: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x235008u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_23500c:
    // 0x23500c: 0x3a51021  addu        $v0, $sp, $a1
    ctx->pc = 0x23500cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_235010:
    // 0x235010: 0xdc430050  ld          $v1, 0x50($v0)
    ctx->pc = 0x235010u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 80)));
label_235014:
    // 0x235014: 0x5464003c  bnel        $v1, $a0, . + 4 + (0x3C << 2)
label_235018:
    if (ctx->pc == 0x235018u) {
        ctx->pc = 0x235018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235014u;
        // 0x235018: 0xffa000f8  sd          $zero, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23501Cu;
        goto label_23501c;
    }
    ctx->pc = 0x235014u;
    {
        const bool branch_taken_0x235014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x235014) {
            ctx->pc = 0x235018u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235014u;
            // 0x235018: 0xffa000f8  sd          $zero, 0xF8($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x23501Cu;
label_23501c:
    // 0x23501c: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x23501cu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_235020:
    // 0x235020: 0x2405ffe0  addiu       $a1, $zero, -0x20
    ctx->pc = 0x235020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967264));
label_235024:
    // 0x235024: 0x8e490010  lw          $t1, 0x10($s2)
    ctx->pc = 0x235024u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_235028:
    // 0x235028: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x235028u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23502c:
    // 0x23502c: 0x30e20001  andi        $v0, $a3, 0x1
    ctx->pc = 0x23502cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)1);
label_235030:
    // 0x235030: 0xe52824  and         $a1, $a3, $a1
    ctx->pc = 0x235030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) & GPR_U64(ctx, 5));
label_235034:
    // 0x235034: 0x210b8  dsll        $v0, $v0, 2
    ctx->pc = 0x235034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 2);
label_235038:
    // 0x235038: 0x30e30002  andi        $v1, $a3, 0x2
    ctx->pc = 0x235038u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
label_23503c:
    // 0x23503c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x23503cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_235040:
    // 0x235040: 0x3187a  dsrl        $v1, $v1, 1
    ctx->pc = 0x235040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 1);
label_235044:
    // 0x235044: 0x3a65821  addu        $t3, $sp, $a2
    ctx->pc = 0x235044u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 6)));
label_235048:
    // 0x235048: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x235048u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_23504c:
    // 0x23504c: 0x30e20004  andi        $v0, $a3, 0x4
    ctx->pc = 0x23504cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)4);
label_235050:
    // 0x235050: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x235050u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_235054:
    // 0x235054: 0x31260001  andi        $a2, $t1, 0x1
    ctx->pc = 0x235054u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)1);
label_235058:
    // 0x235058: 0x3484ffe0  ori         $a0, $a0, 0xFFE0
    ctx->pc = 0x235058u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65504);
label_23505c:
    // 0x23505c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x23505cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
label_235060:
    // 0x235060: 0x30e80008  andi        $t0, $a3, 0x8
    ctx->pc = 0x235060u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)8);
label_235064:
    // 0x235064: 0x1242024  and         $a0, $t1, $a0
    ctx->pc = 0x235064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & GPR_U64(ctx, 4));
label_235068:
    // 0x235068: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x235068u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_23506c:
    // 0x23506c: 0x31230002  andi        $v1, $t1, 0x2
    ctx->pc = 0x23506cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)2);
label_235070:
    // 0x235070: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x235070u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_235074:
    // 0x235074: 0x8d6a0090  lw          $t2, 0x90($t3)
    ctx->pc = 0x235074u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 144)));
label_235078:
    // 0x235078: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x235078u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_23507c:
    // 0x23507c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x23507cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_235080:
    // 0x235080: 0x840ba  dsrl        $t0, $t0, 2
    ctx->pc = 0x235080u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 2);
label_235084:
    // 0x235084: 0x31220004  andi        $v0, $t1, 0x4
    ctx->pc = 0x235084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)4);
label_235088:
    // 0x235088: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x235088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_23508c:
    // 0x23508c: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x23508cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_235090:
    // 0x235090: 0x30e70010  andi        $a3, $a3, 0x10
    ctx->pc = 0x235090u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)16);
label_235094:
    // 0x235094: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x235094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_235098:
    // 0x235098: 0x314307ff  andi        $v1, $t2, 0x7FF
    ctx->pc = 0x235098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)2047);
label_23509c:
    // 0x23509c: 0x31260008  andi        $a2, $t1, 0x8
    ctx->pc = 0x23509cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)8);
label_2350a0:
    // 0x2350a0: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x2350a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
label_2350a4:
    // 0x2350a4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2350a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2350a8:
    // 0x2350a8: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2350a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_2350ac:
    // 0x2350ac: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2350acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_2350b0:
    // 0x2350b0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x2350b0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_2350b4:
    // 0x2350b4: 0xa5482  srl         $t2, $t2, 18
    ctx->pc = 0x2350b4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
label_2350b8:
    // 0x2350b8: 0x63082  srl         $a2, $a2, 2
    ctx->pc = 0x2350b8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 2));
label_2350bc:
    // 0x2350bc: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x2350bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_2350c0:
    // 0x2350c0: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x2350c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2350c4:
    // 0x2350c4: 0x314a01fc  andi        $t2, $t2, 0x1FC
    ctx->pc = 0x2350c4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)508);
label_2350c8:
    // 0x2350c8: 0x31290010  andi        $t1, $t1, 0x10
    ctx->pc = 0x2350c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)16);
label_2350cc:
    // 0x2350cc: 0xaa2823  subu        $a1, $a1, $t2
    ctx->pc = 0x2350ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 10)));
label_2350d0:
    // 0x2350d0: 0x892025  or          $a0, $a0, $t1
    ctx->pc = 0x2350d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 9));
label_2350d4:
    // 0x2350d4: 0x852023  subu        $a0, $a0, $a1
    ctx->pc = 0x2350d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2350d8:
    // 0x2350d8: 0x41882  srl         $v1, $a0, 2
    ctx->pc = 0x2350d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_2350dc:
    // 0x2350dc: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2350dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2350e0:
    // 0x2350e0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x2350e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2350e4:
    // 0x2350e4: 0x2c420800  sltiu       $v0, $v0, 0x800
    ctx->pc = 0x2350e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2048) ? 1 : 0);
label_2350e8:
    // 0x2350e8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2350ec:
    if (ctx->pc == 0x2350ECu) {
        ctx->pc = 0x2350ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350E8u;
        // 0x2350ec: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2350F0u;
        goto label_2350f0;
    }
    ctx->pc = 0x2350E8u;
    {
        const bool branch_taken_0x2350e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2350ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350E8u;
        // 0x2350ec: 0x3084003f  andi        $a0, $a0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350e8) {
            ctx->pc = 0x235104u;
            goto label_235104;
        }
    }
    ctx->pc = 0x2350F0u;
label_2350f0:
    // 0x2350f0: 0x314c0  sll         $v0, $v1, 19
    ctx->pc = 0x2350f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 19));
label_2350f4:
    // 0x2350f4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2350f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2350f8:
    // 0x2350f8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2350f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2350fc:
    // 0x2350fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_235100:
    if (ctx->pc == 0x235100u) {
        ctx->pc = 0x235100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350FCu;
        // 0x235100: 0xffa200f8  sd          $v0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235104u;
        goto label_235104;
    }
    ctx->pc = 0x2350FCu;
    {
        const bool branch_taken_0x2350fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2350FCu;
        // 0x235100: 0xffa200f8  sd          $v0, 0xF8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2350fc) {
            ctx->pc = 0x235108u;
            goto label_235108;
        }
    }
    ctx->pc = 0x235104u;
label_235104:
    // 0x235104: 0xffa000f8  sd          $zero, 0xF8($sp)
    ctx->pc = 0x235104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 0));
label_235108:
    // 0x235108: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x235108u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_23510c:
    // 0x23510c: 0x27a600b8  addiu       $a2, $sp, 0xB8
    ctx->pc = 0x23510cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_235110:
    // 0x235110: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x235110u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_235114:
    // 0x235114: 0x27a700bc  addiu       $a3, $sp, 0xBC
    ctx->pc = 0x235114u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 188));
label_235118:
    // 0x235118: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x235118u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_23511c:
    // 0x23511c: 0x92450036  lbu         $a1, 0x36($s2)
    ctx->pc = 0x23511cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_235120:
    // 0x235120: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x235120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_235124:
    // 0x235124: 0x42502  srl         $a0, $a0, 20
    ctx->pc = 0x235124u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 20));
label_235128:
    // 0x235128: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x235128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_23512c:
    // 0x23512c: 0x3084003f  andi        $a0, $a0, 0x3F
    ctx->pc = 0x23512cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
label_235130:
    // 0x235130: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235134:
    // 0x235134: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x235134u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_235138:
    // 0x235138: 0xc08d102  jal         func_234408
label_23513c:
    if (ctx->pc == 0x23513Cu) {
        ctx->pc = 0x23513Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235138u;
        // 0x23513c: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235140u;
        goto label_235140;
    }
    ctx->pc = 0x235138u;
    SET_GPR_U32(ctx, 31, 0x235140u);
    ctx->pc = 0x23513Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235138u;
    // 0x23513c: 0xae420028  sw          $v0, 0x28($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x234408u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x234408u, 0x235138u, 0x235140u)) {
        return;
    }
    ctx->pc = 0x235140u;
label_235140:
    // 0x235140: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x235140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_235144:
    // 0x235144: 0x3c090073  lui         $t1, 0x73
    ctx->pc = 0x235144u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)115 << 16));
label_235148:
    // 0x235148: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x235148u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23514c:
    // 0x23514c: 0x21882  srl         $v1, $v0, 2
    ctx->pc = 0x23514cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_235150:
    // 0x235150: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x235150u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_235154:
    // 0x235154: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_235158:
    if (ctx->pc == 0x235158u) {
        ctx->pc = 0x235158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235154u;
        // 0x235158: 0x8e6e0010  lw          $t6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23515Cu;
        goto label_23515c;
    }
    ctx->pc = 0x235154u;
    {
        const bool branch_taken_0x235154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235154u;
        // 0x235158: 0x8e6e0010  lw          $t6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235154) {
            ctx->pc = 0x2351BCu;
            goto label_2351bc;
        }
    }
    ctx->pc = 0x23515Cu;
label_23515c:
    // 0x23515c: 0x8fa600b8  lw          $a2, 0xB8($sp)
    ctx->pc = 0x23515cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_235160:
    // 0x235160: 0x246c0001  addiu       $t4, $v1, 0x1
    ctx->pc = 0x235160u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_235164:
    // 0x235164: 0x8fa700bc  lw          $a3, 0xBC($sp)
    ctx->pc = 0x235164u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_235168:
    // 0x235168: 0x2408fff0  addiu       $t0, $zero, -0x10
    ctx->pc = 0x235168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_23516c:
    // 0x23516c: 0x0  nop
    ctx->pc = 0x23516cu;
    // NOP
label_235170:
    // 0x235170: 0x1e6202a  slt         $a0, $t7, $a2
    ctx->pc = 0x235170u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_235174:
    // 0x235174: 0x1c7282a  slt         $a1, $t6, $a3
    ctx->pc = 0x235174u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_235178:
    // 0x235178: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x235178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_23517c:
    // 0x23517c: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x23517cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235180:
    // 0x235180: 0x1e4100a  movz        $v0, $t7, $a0
    ctx->pc = 0x235180u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15));
label_235184:
    // 0x235184: 0x1c5180a  movz        $v1, $t6, $a1
    ctx->pc = 0x235184u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14));
label_235188:
    // 0x235188: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x235188u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_23518c:
    // 0x23518c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x23518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_235190:
    // 0x235190: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x235190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235194:
    // 0x235194: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x235194u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_235198:
    // 0x235198: 0xe7043  sra         $t6, $t6, 1
    ctx->pc = 0x235198u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
label_23519c:
    // 0x23519c: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x23519cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
label_2351a0:
    // 0x2351a0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2351a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2351a4:
    // 0x2351a4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x2351a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_2351a8:
    // 0x2351a8: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x2351a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_2351ac:
    // 0x2351ac: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2351acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
label_2351b0:
    // 0x2351b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2351b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2351b4:
    // 0x2351b4: 0x1580ffee  bnez        $t4, . + 4 + (-0x12 << 2)
label_2351b8:
    if (ctx->pc == 0x2351B8u) {
        ctx->pc = 0x2351B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351B4u;
        // 0x2351b8: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2351BCu;
        goto label_2351bc;
    }
    ctx->pc = 0x2351B4u;
    {
        const bool branch_taken_0x2351b4 = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x2351B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351B4u;
        // 0x2351b8: 0xae430028  sw          $v1, 0x28($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351b4) {
            ctx->pc = 0x235170u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235170;
        }
    }
    ctx->pc = 0x2351BCu;
label_2351bc:
    // 0x2351bc: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2351bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2351c0:
    // 0x2351c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2351c4:
    if (ctx->pc == 0x2351C4u) {
        ctx->pc = 0x2351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351C0u;
        // 0x2351c4: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2351C8u;
        goto label_2351c8;
    }
    ctx->pc = 0x2351C0u;
    {
        const bool branch_taken_0x2351c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2351C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2351C0u;
        // 0x2351c4: 0x8fa200d0  lw          $v0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2351c0) {
            ctx->pc = 0x2351F0u;
            goto label_2351f0;
        }
    }
    ctx->pc = 0x2351C8u;
label_2351c8:
    // 0x2351c8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2351c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2351cc:
    // 0x2351cc: 0x38430002  xori        $v1, $v0, 0x2
    ctx->pc = 0x2351ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_2351d0:
    // 0x2351d0: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2351d0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_2351d4:
    // 0x2351d4: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x2351d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_2351d8:
    // 0x2351d8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x2351d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_2351dc:
    // 0x2351dc: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x2351dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2351e0:
    // 0x2351e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2351e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2351e4:
    // 0x2351e4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2351e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2351e8:
    // 0x2351e8: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x2351e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_2351ec:
    // 0x2351ec: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2351ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
label_2351f0:
    // 0x2351f0: 0x92420016  lbu         $v0, 0x16($s2)
    ctx->pc = 0x2351f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_2351f4:
    // 0x2351f4: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x2351f4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2351f8:
    // 0x2351f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2351f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2351fc:
    // 0x2351fc: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2351fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235200:
    // 0x235200: 0x22882  srl         $a1, $v0, 2
    ctx->pc = 0x235200u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_235204:
    // 0x235204: 0x28a20000  slti        $v0, $a1, 0x0
    ctx->pc = 0x235204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)0) ? 1 : 0);
label_235208:
    // 0x235208: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23520c:
    if (ctx->pc == 0x23520Cu) {
        ctx->pc = 0x23520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235208u;
        // 0x23520c: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235210u;
        goto label_235210;
    }
    ctx->pc = 0x235208u;
    {
        const bool branch_taken_0x235208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23520Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235208u;
        // 0x23520c: 0x8e43002c  lw          $v1, 0x2C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235208) {
            ctx->pc = 0x235234u;
            goto label_235234;
        }
    }
    ctx->pc = 0x235210u;
label_235210:
    // 0x235210: 0x24ac0001  addiu       $t4, $a1, 0x1
    ctx->pc = 0x235210u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_235214:
    // 0x235214: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x235214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235218:
    // 0x235218: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x235218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23521c:
    // 0x23521c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_235220:
    if (ctx->pc == 0x235220u) {
        ctx->pc = 0x235220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23521Cu;
        // 0x235220: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235224u;
        goto label_235224;
    }
    ctx->pc = 0x23521Cu;
    {
        const bool branch_taken_0x23521c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23521Cu;
        // 0x235220: 0x258cffff  addiu       $t4, $t4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23521c) {
            ctx->pc = 0x23522Cu;
            goto label_23522c;
        }
    }
    ctx->pc = 0x235224u;
label_235224:
    // 0x235224: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x235224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_235228:
    // 0x235228: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x235228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_23522c:
    // 0x23522c: 0x1580fffa  bnez        $t4, . + 4 + (-0x6 << 2)
label_235230:
    if (ctx->pc == 0x235230u) {
        ctx->pc = 0x235230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23522Cu;
        // 0x235230: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235234u;
        goto label_235234;
    }
    ctx->pc = 0x23522Cu;
    {
        const bool branch_taken_0x23522c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 0));
        ctx->pc = 0x235230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23522Cu;
        // 0x235230: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23522c) {
            ctx->pc = 0x235218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_235218;
        }
    }
    ctx->pc = 0x235234u;
label_235234:
    // 0x235234: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_235238:
    if (ctx->pc == 0x235238u) {
        ctx->pc = 0x235238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235234u;
        // 0x235238: 0xdfa600f8  ld          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23523Cu;
        goto label_23523c;
    }
    ctx->pc = 0x235234u;
    {
        const bool branch_taken_0x235234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x235238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235234u;
        // 0x235238: 0xdfa600f8  ld          $a2, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235234) {
            ctx->pc = 0x235284u;
            goto label_235284;
        }
    }
    ctx->pc = 0x23523Cu;
label_23523c:
    // 0x23523c: 0x26d60040  addiu       $s6, $s6, 0x40
    ctx->pc = 0x23523cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 64));
label_235240:
    // 0x235240: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
label_235244:
    if (ctx->pc == 0x235244u) {
        ctx->pc = 0x235244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235240u;
        // 0x235244: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235248u;
        goto label_235248;
    }
    ctx->pc = 0x235240u;
    {
        const bool branch_taken_0x235240 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x235244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235240u;
        // 0x235244: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235240) {
            ctx->pc = 0x235284u;
            goto label_235284;
        }
    }
    ctx->pc = 0x235248u;
label_235248:
    // 0x235248: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x235248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23524c:
    // 0x23524c: 0x2484007f  addiu       $a0, $a0, 0x7F
    ctx->pc = 0x23524cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 127));
label_235250:
    // 0x235250: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x235250u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_235254:
    // 0x235254: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x235254u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_235258:
    // 0x235258: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x235258u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_23525c:
    // 0x23525c: 0x34a5ffc0  ori         $a1, $a1, 0xFFC0
    ctx->pc = 0x23525cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65472);
label_235260:
    // 0x235260: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x235260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_235264:
    // 0x235264: 0x25260fc8  addiu       $a2, $t1, 0xFC8
    ctx->pc = 0x235264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
label_235268:
    // 0x235268: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x235268u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_23526c:
    // 0x23526c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x23526cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_235270:
    // 0x235270: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x235270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_235274:
    // 0x235274: 0x8cc20108  lw          $v0, 0x108($a2)
    ctx->pc = 0x235274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 264)));
label_235278:
    // 0x235278: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x235278u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_23527c:
    // 0x23527c: 0x1000000b  b           . + 4 + (0xB << 2)
label_235280:
    if (ctx->pc == 0x235280u) {
        ctx->pc = 0x235280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23527Cu;
        // 0x235280: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235284u;
        goto label_235284;
    }
    ctx->pc = 0x23527Cu;
    {
        const bool branch_taken_0x23527c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23527Cu;
        // 0x235280: 0x832021  addu        $a0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23527c) {
            ctx->pc = 0x2352ACu;
            goto label_2352ac;
        }
    }
    ctx->pc = 0x235284u;
label_235284:
    // 0x235284: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x235284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_235288:
    // 0x235288: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x235288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_23528c:
    // 0x23528c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x23528cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
label_235290:
    // 0x235290: 0x2484003f  addiu       $a0, $a0, 0x3F
    ctx->pc = 0x235290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 63));
label_235294:
    // 0x235294: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x235294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_235298:
    // 0x235298: 0x25230fc8  addiu       $v1, $t1, 0xFC8
    ctx->pc = 0x235298u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 4040));
label_23529c:
    // 0x23529c: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x23529cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_2352a0:
    // 0x2352a0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2352a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2352a4:
    // 0x2352a4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2352a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2352a8:
    // 0x2352a8: 0x2c42021  addu        $a0, $s6, $a0
    ctx->pc = 0x2352a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2352ac:
    // 0x2352ac: 0x40f809  jalr        $v0
label_2352b0:
    if (ctx->pc == 0x2352B0u) {
        ctx->pc = 0x2352B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ACu;
        // 0x2352b0: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352B4u;
        goto label_2352b4;
    }
    ctx->pc = 0x2352ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2352B4u);
        ctx->pc = 0x2352B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352ACu;
        // 0x2352b0: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2352ACu, 0x2352B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2352B4u;
label_2352b4:
    // 0x2352b4: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x2352b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
label_2352b8:
    // 0x2352b8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x2352b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2352bc:
    // 0x2352bc: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
label_2352c0:
    if (ctx->pc == 0x2352C0u) {
        ctx->pc = 0x2352C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2352BCu;
        // 0x2352c0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2352C4u;
        goto label_2352c4;
    }
    ctx->pc = 0x2352BCu;
    {
        const bool branch_taken_0x2352bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2352bc) {
            ctx->pc = 0x2352C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2352BCu;
            // 0x2352c0: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235318u;
            goto label_235318;
        }
    }
    ctx->pc = 0x2352C4u;
label_2352c4:
    // 0x2352c4: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x2352c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2352c8:
    // 0x2352c8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2352c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2352cc:
    // 0x2352cc: 0x8e46002c  lw          $a2, 0x2C($s2)
    ctx->pc = 0x2352ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2352d0:
    // 0x2352d0: 0x3442ff80  ori         $v0, $v0, 0xFF80
    ctx->pc = 0x2352d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65408);
label_2352d4:
    // 0x2352d4: 0x24a5007f  addiu       $a1, $a1, 0x7F
    ctx->pc = 0x2352d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
label_2352d8:
    // 0x2352d8: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2352d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2352dc:
    // 0x2352dc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2352dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2352e0:
    // 0x2352e0: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x2352e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
label_2352e4:
    // 0x2352e4: 0x24c6003f  addiu       $a2, $a2, 0x3F
    ctx->pc = 0x2352e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
label_2352e8:
    // 0x2352e8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x2352e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_2352ec:
    // 0x2352ec: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x2352ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_2352f0:
    // 0x2352f0: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x2352f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
label_2352f4:
    // 0x2352f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2352f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2352f8:
    // 0x2352f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2352f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_2352fc:
    // 0x2352fc: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x2352fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_235300:
    // 0x235300: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235304:
    // 0x235304: 0xc092848  jal         func_24A120
label_235308:
    if (ctx->pc == 0x235308u) {
        ctx->pc = 0x235308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235304u;
        // 0x235308: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23530Cu;
        goto label_23530c;
    }
    ctx->pc = 0x235304u;
    SET_GPR_U32(ctx, 31, 0x23530Cu);
    ctx->pc = 0x235308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235304u;
    // 0x235308: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x235304u, 0x23530Cu)) {
        return;
    }
    ctx->pc = 0x23530Cu;
label_23530c:
    // 0x23530c: 0x1000022a  b           . + 4 + (0x22A << 2)
label_235310:
    if (ctx->pc == 0x235310u) {
        ctx->pc = 0x235310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23530Cu;
        // 0x235310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235314u;
        goto label_235314;
    }
    ctx->pc = 0x23530Cu;
    {
        const bool branch_taken_0x23530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23530Cu;
        // 0x235310: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23530c) {
            ctx->pc = 0x235BB8u;
            goto label_235bb8;
        }
    }
    ctx->pc = 0x235314u;
label_235314:
    // 0x235314: 0x0  nop
    ctx->pc = 0x235314u;
    // NOP
label_235318:
    // 0x235318: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x235318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_23531c:
    // 0x23531c: 0x101180  sll         $v0, $s0, 6
    ctx->pc = 0x23531cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_235320:
    // 0x235320: 0x34a5ff80  ori         $a1, $a1, 0xFF80
    ctx->pc = 0x235320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65408);
label_235324:
    // 0x235324: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x235324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_235328:
    // 0x235328: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x235328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_23532c:
    // 0x23532c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x23532cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_235330:
    // 0x235330: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x235330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_235334:
    // 0x235334: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x235334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_235338:
    // 0x235338: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x235338u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_23533c:
    // 0x23533c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x23533cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_235340:
    // 0x235340: 0xac700008  sw          $s0, 0x8($v1)
    ctx->pc = 0x235340u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 16));
label_235344:
    // 0x235344: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x235344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_235348:
    // 0x235348: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_23534c:
    if (ctx->pc == 0x23534Cu) {
        ctx->pc = 0x23534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235348u;
        // 0x23534c: 0xdfa200f8  ld          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235350u;
        goto label_235350;
    }
    ctx->pc = 0x235348u;
    {
        const bool branch_taken_0x235348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235348u;
        // 0x23534c: 0xdfa200f8  ld          $v0, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235348) {
            ctx->pc = 0x235380u;
            goto label_235380;
        }
    }
    ctx->pc = 0x235350u;
label_235350:
    // 0x235350: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_235354:
    if (ctx->pc == 0x235354u) {
        ctx->pc = 0x235354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235350u;
        // 0x235354: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235358u;
        goto label_235358;
    }
    ctx->pc = 0x235350u;
    {
        const bool branch_taken_0x235350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235350u;
        // 0x235354: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235350) {
            ctx->pc = 0x235384u;
            goto label_235384;
        }
    }
    ctx->pc = 0x235358u;
label_235358:
    // 0x235358: 0x2404ff80  addiu       $a0, $zero, -0x80
    ctx->pc = 0x235358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_23535c:
    // 0x23535c: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x23535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235360:
    // 0x235360: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x235360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_235364:
    // 0x235364: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x235364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_235368:
    // 0x235368: 0x2463007f  addiu       $v1, $v1, 0x7F
    ctx->pc = 0x235368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
label_23536c:
    // 0x23536c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x23536cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_235370:
    // 0x235370: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x235370u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_235374:
    // 0x235374: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x235374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_235378:
    // 0x235378: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x235378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_23537c:
    // 0x23537c: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x23537cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_235380:
    // 0x235380: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x235380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_235384:
    // 0x235384: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x235384u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_235388:
    // 0x235388: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x235388u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
label_23538c:
    // 0x23538c: 0x35080003  ori         $t0, $t0, 0x3
    ctx->pc = 0x23538cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)3);
label_235390:
    // 0x235390: 0x2409000e  addiu       $t1, $zero, 0xE
    ctx->pc = 0x235390u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_235394:
    // 0x235394: 0x8e6f000c  lw          $t7, 0xC($s3)
    ctx->pc = 0x235394u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_235398:
    // 0x235398: 0x7128a389  pcpyld      $s4, $t1, $t0
    ctx->pc = 0x235398u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_23539c:
    // 0x23539c: 0x244b0010  addiu       $t3, $v0, 0x10
    ctx->pc = 0x23539cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2353a0:
    // 0x2353a0: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x2353a0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2353a4:
    // 0x2353a4: 0x8437c  dsll32      $t0, $t0, 13
    ctx->pc = 0x2353a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 13));
label_2353a8:
    // 0x2353a8: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x2353a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
label_2353ac:
    // 0x2353ac: 0x8c4a0004  lw          $t2, 0x4($v0)
    ctx->pc = 0x2353acu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2353b0:
    // 0x2353b0: 0x7128ab89  pcpyld      $s5, $t1, $t0
    ctx->pc = 0x2353b0u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_2353b4:
    // 0x2353b4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2353b4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2353b8:
    // 0x2353b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2353b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2353bc:
    // 0x2353bc: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_2353c0:
    if (ctx->pc == 0x2353C0u) {
        ctx->pc = 0x2353C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353BCu;
        // 0x2353c0: 0x8e6e0010  lw          $t6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2353C4u;
        goto label_2353c4;
    }
    ctx->pc = 0x2353BCu;
    {
        const bool branch_taken_0x2353bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2353C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2353BCu;
        // 0x2353c0: 0x8e6e0010  lw          $t6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2353bc) {
            ctx->pc = 0x2356E8u;
            goto label_2356e8;
        }
    }
    ctx->pc = 0x2353C4u;
label_2353c4:
    // 0x2353c4: 0x241e0013  addiu       $fp, $zero, 0x13
    ctx->pc = 0x2353c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2353c8:
    // 0x2353c8: 0x24190014  addiu       $t9, $zero, 0x14
    ctx->pc = 0x2353c8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2353cc:
    // 0x2353cc: 0x27ad0010  addiu       $t5, $sp, 0x10
    ctx->pc = 0x2353ccu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2353d0:
    // 0x2353d0: 0xc02d  daddu       $t8, $zero, $zero
    ctx->pc = 0x2353d0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2353d4:
    // 0x2353d4: 0x27b10090  addiu       $s1, $sp, 0x90
    ctx->pc = 0x2353d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2353d8:
    // 0x2353d8: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x2353d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2353dc:
    // 0x2353dc: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x2353dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2353e0:
    // 0x2353e0: 0x7d540000  sq          $s4, 0x0($t2)
    ctx->pc = 0x2353e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 20));
label_2353e4:
    // 0x2353e4: 0x1e4102a  slt         $v0, $t7, $a0
    ctx->pc = 0x2353e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 15) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2353e8:
    // 0x2353e8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2353e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2353ec:
    // 0x2353ec: 0x1c5182a  slt         $v1, $t6, $a1
    ctx->pc = 0x2353ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 14) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2353f0:
    // 0x2353f0: 0x92440036  lbu         $a0, 0x36($s2)
    ctx->pc = 0x2353f0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2353f4:
    // 0x2353f4: 0x1e2300a  movz        $a2, $t7, $v0
    ctx->pc = 0x2353f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 15));
label_2353f8:
    // 0x2353f8: 0x1c3280a  movz        $a1, $t6, $v1
    ctx->pc = 0x2353f8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 14));
label_2353fc:
    // 0x2353fc: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x2353fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_235400:
    // 0x235400: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_235404:
    if (ctx->pc == 0x235404u) {
        ctx->pc = 0x235404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235400u;
        // 0x235404: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235408u;
        goto label_235408;
    }
    ctx->pc = 0x235400u;
    {
        const bool branch_taken_0x235400 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235400u;
        // 0x235404: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235400) {
            ctx->pc = 0x23541Cu;
            goto label_23541c;
        }
    }
    ctx->pc = 0x235408u;
label_235408:
    // 0x235408: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x235408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_23540c:
    // 0x23540c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x23540cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_235410:
    // 0x235410: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x235410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_235414:
    // 0x235414: 0x505e000a  beql        $v0, $fp, . + 4 + (0xA << 2)
label_235418:
    if (ctx->pc == 0x235418u) {
        ctx->pc = 0x235418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235414u;
        // 0x235418: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23541Cu;
        goto label_23541c;
    }
    ctx->pc = 0x235414u;
    {
        const bool branch_taken_0x235414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x235414) {
            ctx->pc = 0x235418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235414u;
            // 0x235418: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235440u;
            goto label_235440;
        }
    }
    ctx->pc = 0x23541Cu;
label_23541c:
    // 0x23541c: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x23541cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_235420:
    // 0x235420: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_235424:
    if (ctx->pc == 0x235424u) {
        ctx->pc = 0x235424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235420u;
        // 0x235424: 0x9e220000  lwu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235428u;
        goto label_235428;
    }
    ctx->pc = 0x235420u;
    {
        const bool branch_taken_0x235420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235420) {
            ctx->pc = 0x235424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235420u;
            // 0x235424: 0x9e220000  lwu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23545Cu;
            goto label_23545c;
        }
    }
    ctx->pc = 0x235428u;
label_235428:
    // 0x235428: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x235428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_23542c:
    // 0x23542c: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x23542cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_235430:
    // 0x235430: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x235430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_235434:
    // 0x235434: 0x54590009  bnel        $v0, $t9, . + 4 + (0x9 << 2)
label_235438:
    if (ctx->pc == 0x235438u) {
        ctx->pc = 0x235438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235434u;
        // 0x235438: 0x9e220000  lwu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23543Cu;
        goto label_23543c;
    }
    ctx->pc = 0x235434u;
    {
        const bool branch_taken_0x235434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x235434) {
            ctx->pc = 0x235438u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235434u;
            // 0x235438: 0x9e220000  lwu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23545Cu;
            goto label_23545c;
        }
    }
    ctx->pc = 0x23543Cu;
label_23543c:
    // 0x23543c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x23543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_235440:
    // 0x235440: 0x3c02fffe  lui         $v0, 0xFFFE
    ctx->pc = 0x235440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65534 << 16));
label_235444:
    // 0x235444: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x235444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_235448:
    // 0x235448: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x235448u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23544c:
    // 0x23544c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x23544cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_235450:
    // 0x235450: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x235450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_235454:
    // 0x235454: 0x10000003  b           . + 4 + (0x3 << 2)
label_235458:
    if (ctx->pc == 0x235458u) {
        ctx->pc = 0x235458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235454u;
        // 0x235458: 0x3407a  dsrl        $t0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23545Cu;
        goto label_23545c;
    }
    ctx->pc = 0x235454u;
    {
        const bool branch_taken_0x235454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235454u;
        // 0x235458: 0x3407a  dsrl        $t0, $v1, 1 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) >> 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235454) {
            ctx->pc = 0x235464u;
            goto label_235464;
        }
    }
    ctx->pc = 0x23545Cu;
label_23545c:
    // 0x23545c: 0x27b70090  addiu       $s7, $sp, 0x90
    ctx->pc = 0x23545cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_235460:
    // 0x235460: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x235460u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
label_235464:
    // 0x235464: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x235464u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_235468:
    // 0x235468: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x235468u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_23546c:
    // 0x23546c: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x23546cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_235470:
    // 0x235470: 0x92430036  lbu         $v1, 0x36($s2)
    ctx->pc = 0x235470u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_235474:
    // 0x235474: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x235474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_235478:
    // 0x235478: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23547c:
    if (ctx->pc == 0x23547Cu) {
        ctx->pc = 0x23547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235478u;
        // 0x23547c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235480u;
        goto label_235480;
    }
    ctx->pc = 0x235478u;
    {
        const bool branch_taken_0x235478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23547Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235478u;
        // 0x23547c: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235478) {
            ctx->pc = 0x235494u;
            goto label_235494;
        }
    }
    ctx->pc = 0x235480u;
label_235480:
    // 0x235480: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x235480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_235484:
    // 0x235484: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x235484u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_235488:
    // 0x235488: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x235488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_23548c:
    // 0x23548c: 0x105e000a  beq         $v0, $fp, . + 4 + (0xA << 2)
label_235490:
    if (ctx->pc == 0x235490u) {
        ctx->pc = 0x235490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23548Cu;
        // 0x235490: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235494u;
        goto label_235494;
    }
    ctx->pc = 0x23548Cu;
    {
        const bool branch_taken_0x23548c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        ctx->pc = 0x235490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23548Cu;
        // 0x235490: 0x51043  sra         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23548c) {
            ctx->pc = 0x2354B8u;
            goto label_2354b8;
        }
    }
    ctx->pc = 0x235494u;
label_235494:
    // 0x235494: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x235494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_235498:
    // 0x235498: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23549c:
    if (ctx->pc == 0x23549Cu) {
        ctx->pc = 0x23549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235498u;
        // 0x23549c: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354A0u;
        goto label_2354a0;
    }
    ctx->pc = 0x235498u;
    {
        const bool branch_taken_0x235498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235498u;
        // 0x23549c: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235498) {
            ctx->pc = 0x2354C8u;
            goto label_2354c8;
        }
    }
    ctx->pc = 0x2354A0u;
label_2354a0:
    // 0x2354a0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2354a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2354a4:
    // 0x2354a4: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x2354a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_2354a8:
    // 0x2354a8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2354a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2354ac:
    // 0x2354ac: 0x14590006  bne         $v0, $t9, . + 4 + (0x6 << 2)
label_2354b0:
    if (ctx->pc == 0x2354B0u) {
        ctx->pc = 0x2354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354ACu;
        // 0x2354b0: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354B4u;
        goto label_2354b4;
    }
    ctx->pc = 0x2354ACu;
    {
        const bool branch_taken_0x2354ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        ctx->pc = 0x2354B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354ACu;
        // 0x2354b0: 0x5103c  dsll32      $v0, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354ac) {
            ctx->pc = 0x2354C8u;
            goto label_2354c8;
        }
    }
    ctx->pc = 0x2354B4u;
label_2354b4:
    // 0x2354b4: 0x51043  sra         $v0, $a1, 1
    ctx->pc = 0x2354b4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 5), 1));
label_2354b8:
    // 0x2354b8: 0x61843  sra         $v1, $a2, 1
    ctx->pc = 0x2354b8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 1));
label_2354bc:
    // 0x2354bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2354bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2354c0:
    // 0x2354c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2354c4:
    if (ctx->pc == 0x2354C4u) {
        ctx->pc = 0x2354C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354C0u;
        // 0x2354c4: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2354C8u;
        goto label_2354c8;
    }
    ctx->pc = 0x2354C0u;
    {
        const bool branch_taken_0x2354c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2354C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2354C0u;
        // 0x2354c4: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2354c0) {
            ctx->pc = 0x2354CCu;
            goto label_2354cc;
        }
    }
    ctx->pc = 0x2354C8u;
label_2354c8:
    // 0x2354c8: 0xc24025  or          $t0, $a2, $v0
    ctx->pc = 0x2354c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
label_2354cc:
    // 0x2354cc: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x2354ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_2354d0:
    // 0x2354d0: 0xc51818  mult        $v1, $a2, $a1
    ctx->pc = 0x2354d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2354d4:
    // 0x2354d4: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x2354d4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_2354d8:
    // 0x2354d8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2354d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2354dc:
    // 0x2354dc: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x2354dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
label_2354e0:
    // 0x2354e0: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x2354e0u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_2354e4:
    // 0x2354e4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2354e4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2354e8:
    // 0x2354e8: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x2354e8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_2354ec:
    // 0x2354ec: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x2354ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_2354f0:
    // 0x2354f0: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x2354f0u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_2354f4:
    // 0x2354f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2354f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2354f8:
    // 0x2354f8: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x2354f8u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_2354fc:
    // 0x2354fc: 0x2f82821  addu        $a1, $s7, $t8
    ctx->pc = 0x2354fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 24)));
label_235500:
    // 0x235500: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x235500u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_235504:
    // 0x235504: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x235504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_235508:
    // 0x235508: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x235508u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_23550c:
    // 0x23550c: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x23550cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_235510:
    // 0x235510: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x235510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_235514:
    // 0x235514: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x235514u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_235518:
    // 0x235518: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x235518u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_23551c:
    // 0x23551c: 0x70883b89  pcpyld      $a3, $a0, $t0
    ctx->pc = 0x23551cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
label_235520:
    // 0x235520: 0x31027fff  andi        $v0, $t0, 0x7FFF
    ctx->pc = 0x235520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
label_235524:
    // 0x235524: 0x7d470000  sq          $a3, 0x0($t2)
    ctx->pc = 0x235524u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 7));
label_235528:
    // 0x235528: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x235528u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_23552c:
    // 0x23552c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x23552cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_235530:
    // 0x235530: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x235530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_235534:
    // 0x235534: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
label_235538:
    if (ctx->pc == 0x235538u) {
        ctx->pc = 0x235538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235534u;
        // 0x235538: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23553Cu;
        goto label_23553c;
    }
    ctx->pc = 0x235534u;
    {
        const bool branch_taken_0x235534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235534u;
        // 0x235538: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235534) {
            ctx->pc = 0x23567Cu;
            goto label_23567c;
        }
    }
    ctx->pc = 0x23553Cu;
label_23553c:
    // 0x23553c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x23553cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_235540:
    // 0x235540: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x235540u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_235544:
    // 0x235544: 0x3409a000  ori         $t1, $zero, 0xA000
    ctx->pc = 0x235544u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_235548:
    // 0x235548: 0x94f78  dsll        $t1, $t1, 29
    ctx->pc = 0x235548u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 29);
label_23554c:
    // 0x23554c: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x23554cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
label_235550:
    // 0x235550: 0x94cb8  dsll        $t1, $t1, 18
    ctx->pc = 0x235550u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 18);
label_235554:
    // 0x235554: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x235554u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_235558:
    // 0x235558: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x235558u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_23555c:
    // 0x23555c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x23555cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_235560:
    // 0x235560: 0x7d750000  sq          $s5, 0x0($t3)
    ctx->pc = 0x235560u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 21));
label_235564:
    // 0x235564: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x235564u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_235568:
    // 0x235568: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x235568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_23556c:
    // 0x23556c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_235570:
    if (ctx->pc == 0x235570u) {
        ctx->pc = 0x235570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23556Cu;
        // 0x235570: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235574u;
        goto label_235574;
    }
    ctx->pc = 0x23556Cu;
    {
        const bool branch_taken_0x23556c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23556Cu;
        // 0x235570: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23556c) {
            ctx->pc = 0x2355ACu;
            goto label_2355ac;
        }
    }
    ctx->pc = 0x235574u;
label_235574:
    // 0x235574: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x235574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_235578:
    // 0x235578: 0x21502  srl         $v0, $v0, 20
    ctx->pc = 0x235578u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 20));
label_23557c:
    // 0x23557c: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x23557cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_235580:
    // 0x235580: 0x545e000b  bnel        $v0, $fp, . + 4 + (0xB << 2)
label_235584:
    if (ctx->pc == 0x235584u) {
        ctx->pc = 0x235584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235580u;
        // 0x235584: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235588u;
        goto label_235588;
    }
    ctx->pc = 0x235580u;
    {
        const bool branch_taken_0x235580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        if (branch_taken_0x235580) {
            ctx->pc = 0x235584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235580u;
            // 0x235584: 0x92420036  lbu         $v0, 0x36($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2355B0u;
            goto label_2355b0;
        }
    }
    ctx->pc = 0x235588u;
label_235588:
    // 0x235588: 0xdda20040  ld          $v0, 0x40($t5)
    ctx->pc = 0x235588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_23558c:
    // 0x23558c: 0xdda40000  ld          $a0, 0x0($t5)
    ctx->pc = 0x23558cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_235590:
    // 0x235590: 0x3042003e  andi        $v0, $v0, 0x3E
    ctx->pc = 0x235590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)62);
label_235594:
    // 0x235594: 0x21bf8  dsll        $v1, $v0, 15
    ctx->pc = 0x235594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 15);
label_235598:
    // 0x235598: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x235598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_23559c:
    // 0x23559c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x23559cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2355a0:
    // 0x2355a0: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x2355a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
label_2355a4:
    // 0x2355a4: 0x10000024  b           . + 4 + (0x24 << 2)
label_2355a8:
    if (ctx->pc == 0x2355A8u) {
        ctx->pc = 0x2355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355A4u;
        // 0x2355a8: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355ACu;
        goto label_2355ac;
    }
    ctx->pc = 0x2355A4u;
    {
        const bool branch_taken_0x2355a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355A4u;
        // 0x2355a8: 0x624025  or          $t0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355a4) {
            ctx->pc = 0x235638u;
            goto label_235638;
        }
    }
    ctx->pc = 0x2355ACu;
label_2355ac:
    // 0x2355ac: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x2355acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2355b0:
    // 0x2355b0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2355b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_2355b4:
    // 0x2355b4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2355b8:
    if (ctx->pc == 0x2355B8u) {
        ctx->pc = 0x2355B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355B4u;
        // 0x2355b8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355BCu;
        goto label_2355bc;
    }
    ctx->pc = 0x2355B4u;
    {
        const bool branch_taken_0x2355b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2355B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355B4u;
        // 0x2355b8: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355b4) {
            ctx->pc = 0x235604u;
            goto label_235604;
        }
    }
    ctx->pc = 0x2355BCu;
label_2355bc:
    // 0x2355bc: 0x51502  srl         $v0, $a1, 20
    ctx->pc = 0x2355bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
label_2355c0:
    // 0x2355c0: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x2355c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_2355c4:
    // 0x2355c4: 0x54590010  bnel        $v0, $t9, . + 4 + (0x10 << 2)
label_2355c8:
    if (ctx->pc == 0x2355C8u) {
        ctx->pc = 0x2355C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355C4u;
        // 0x2355c8: 0xdda60040  ld          $a2, 0x40($t5) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2355CCu;
        goto label_2355cc;
    }
    ctx->pc = 0x2355C4u;
    {
        const bool branch_taken_0x2355c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 25));
        if (branch_taken_0x2355c4) {
            ctx->pc = 0x2355C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2355C4u;
            // 0x2355c8: 0xdda60040  ld          $a2, 0x40($t5) (Delay Slot)
            SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235608u;
            goto label_235608;
        }
    }
    ctx->pc = 0x2355CCu;
label_2355cc:
    // 0x2355cc: 0xdda40040  ld          $a0, 0x40($t5)
    ctx->pc = 0x2355ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_2355d0:
    // 0x2355d0: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x2355d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
label_2355d4:
    // 0x2355d4: 0xdda30000  ld          $v1, 0x0($t5)
    ctx->pc = 0x2355d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_2355d8:
    // 0x2355d8: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x2355d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2355dc:
    // 0x2355dc: 0x632bc  dsll32      $a2, $a2, 10
    ctx->pc = 0x2355dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 10));
label_2355e0:
    // 0x2355e0: 0x3084003e  andi        $a0, $a0, 0x3E
    ctx->pc = 0x2355e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)62);
label_2355e4:
    // 0x2355e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2355e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_2355e8:
    // 0x2355e8: 0x413f8  dsll        $v0, $a0, 15
    ctx->pc = 0x2355e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << 15);
label_2355ec:
    // 0x2355ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2355ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2355f0:
    // 0x2355f0: 0x423fc  dsll32      $a0, $a0, 15
    ctx->pc = 0x2355f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 15));
label_2355f4:
    // 0x2355f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2355f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2355f8:
    // 0x2355f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2355f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2355fc:
    // 0x2355fc: 0x1000000e  b           . + 4 + (0xE << 2)
label_235600:
    if (ctx->pc == 0x235600u) {
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x464025  or          $t0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235604u;
        goto label_235604;
    }
    ctx->pc = 0x2355FCu;
    {
        const bool branch_taken_0x2355fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2355FCu;
        // 0x235600: 0x464025  or          $t0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2355fc) {
            ctx->pc = 0x235638u;
            goto label_235638;
        }
    }
    ctx->pc = 0x235604u;
label_235604:
    // 0x235604: 0xdda60040  ld          $a2, 0x40($t5)
    ctx->pc = 0x235604u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 13), 64)));
label_235608:
    // 0x235608: 0x52d02  srl         $a1, $a1, 20
    ctx->pc = 0x235608u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 20));
label_23560c:
    // 0x23560c: 0x30a5003f  andi        $a1, $a1, 0x3F
    ctx->pc = 0x23560cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
label_235610:
    // 0x235610: 0xdda40000  ld          $a0, 0x0($t5)
    ctx->pc = 0x235610u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 13), 0)));
label_235614:
    // 0x235614: 0x61438  dsll        $v0, $a2, 16
    ctx->pc = 0x235614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << 16);
label_235618:
    // 0x235618: 0x51e00  sll         $v1, $a1, 24
    ctx->pc = 0x235618u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_23561c:
    // 0x23561c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x23561cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_235620:
    // 0x235620: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x235620u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_235624:
    // 0x235624: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x235624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_235628:
    // 0x235628: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x235628u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
label_23562c:
    // 0x23562c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x23562cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_235630:
    // 0x235630: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x235630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
label_235634:
    // 0x235634: 0x454025  or          $t0, $v0, $a1
    ctx->pc = 0x235634u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_235638:
    // 0x235638: 0x26040005  addiu       $a0, $s0, 0x5
    ctx->pc = 0x235638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_23563c:
    // 0x23563c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x23563cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
label_235640:
    // 0x235640: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x235640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_235644:
    // 0x235644: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x235644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_235648:
    // 0x235648: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x235648u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_23564c:
    // 0x23564c: 0x2542ffb0  addiu       $v0, $t2, -0x50
    ctx->pc = 0x23564cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
label_235650:
    // 0x235650: 0x70a83b89  pcpyld      $a3, $a1, $t0
    ctx->pc = 0x235650u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
label_235654:
    // 0x235654: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x235654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_235658:
    // 0x235658: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x235658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_23565c:
    // 0x23565c: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x23565cu;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_235660:
    // 0x235660: 0x824025  or          $t0, $a0, $v0
    ctx->pc = 0x235660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_235664:
    // 0x235664: 0x3483c  dsll32      $t1, $v1, 0
    ctx->pc = 0x235664u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 3) << (32 + 0));
label_235668:
    // 0x235668: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x235668u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_23566c:
    // 0x23566c: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x23566cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_235670:
    // 0x235670: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x235670u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_235674:
    // 0x235674: 0x10000010  b           . + 4 + (0x10 << 2)
label_235678:
    if (ctx->pc == 0x235678u) {
        ctx->pc = 0x235678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235674u;
        // 0x235678: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23567Cu;
        goto label_23567c;
    }
    ctx->pc = 0x235674u;
    {
        const bool branch_taken_0x235674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235674u;
        // 0x235678: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235674) {
            ctx->pc = 0x2356B8u;
            goto label_2356b8;
        }
    }
    ctx->pc = 0x23567Cu;
label_23567c:
    // 0x23567c: 0x9562fff0  lhu         $v0, -0x10($t3)
    ctx->pc = 0x23567cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967280)));
label_235680:
    // 0x235680: 0x26050005  addiu       $a1, $s0, 0x5
    ctx->pc = 0x235680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_235684:
    // 0x235684: 0x9564fffc  lhu         $a0, -0x4($t3)
    ctx->pc = 0x235684u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967292)));
label_235688:
    // 0x235688: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x235688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_23568c:
    // 0x23568c: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x23568cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_235690:
    // 0x235690: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x235690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
label_235694:
    // 0x235694: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x235694u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_235698:
    // 0x235698: 0x85202d  daddu       $a0, $a0, $a1
    ctx->pc = 0x235698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 5));
label_23569c:
    // 0x23569c: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x23569cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
label_2356a0:
    // 0x2356a0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2356a0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_2356a4:
    // 0x2356a4: 0x864025  or          $t0, $a0, $a2
    ctx->pc = 0x2356a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_2356a8:
    // 0x2356a8: 0xad63fff0  sw          $v1, -0x10($t3)
    ctx->pc = 0x2356a8u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967280), GPR_U32(ctx, 3));
label_2356ac:
    // 0x2356ac: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x2356acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_2356b0:
    // 0x2356b0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2356b0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2356b4:
    // 0x2356b4: 0xad62fffc  sw          $v0, -0x4($t3)
    ctx->pc = 0x2356b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967292), GPR_U32(ctx, 2));
label_2356b8:
    // 0x2356b8: 0x92430016  lbu         $v1, 0x16($s2)
    ctx->pc = 0x2356b8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 22)));
label_2356bc:
    // 0x2356bc: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2356bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_2356c0:
    // 0x2356c0: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2356c0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2356c4:
    // 0x2356c4: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x2356c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_2356c8:
    // 0x2356c8: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2356c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2356cc:
    // 0x2356cc: 0xf7843  sra         $t7, $t7, 1
    ctx->pc = 0x2356ccu;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 15), 1));
label_2356d0:
    // 0x2356d0: 0x6c182a  slt         $v1, $v1, $t4
    ctx->pc = 0x2356d0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
label_2356d4:
    // 0x2356d4: 0xe7043  sra         $t6, $t6, 1
    ctx->pc = 0x2356d4u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 14), 1));
label_2356d8:
    // 0x2356d8: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x2356d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
label_2356dc:
    // 0x2356dc: 0x27180004  addiu       $t8, $t8, 0x4
    ctx->pc = 0x2356dcu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
label_2356e0:
    // 0x2356e0: 0x1060ff3d  beqz        $v1, . + 4 + (-0xC3 << 2)
label_2356e4:
    if (ctx->pc == 0x2356E4u) {
        ctx->pc = 0x2356E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356E0u;
        // 0x2356e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356E8u;
        goto label_2356e8;
    }
    ctx->pc = 0x2356E0u;
    {
        const bool branch_taken_0x2356e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356E0u;
        // 0x2356e4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356e0) {
            ctx->pc = 0x2353D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2353d8;
        }
    }
    ctx->pc = 0x2356E8u;
label_2356e8:
    // 0x2356e8: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x2356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2356ec:
    // 0x2356ec: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_2356f0:
    if (ctx->pc == 0x2356F0u) {
        ctx->pc = 0x2356F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356ECu;
        // 0x2356f0: 0xdfa300f8  ld          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356F4u;
        goto label_2356f4;
    }
    ctx->pc = 0x2356ECu;
    {
        const bool branch_taken_0x2356ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356ECu;
        // 0x2356f0: 0xdfa300f8  ld          $v1, 0xF8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356ec) {
            ctx->pc = 0x2358CCu;
            goto label_2358cc;
        }
    }
    ctx->pc = 0x2356F4u;
label_2356f4:
    // 0x2356f4: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_2356f8:
    if (ctx->pc == 0x2356F8u) {
        ctx->pc = 0x2356F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F4u;
        // 0x2356f8: 0x25420050  addiu       $v0, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2356FCu;
        goto label_2356fc;
    }
    ctx->pc = 0x2356F4u;
    {
        const bool branch_taken_0x2356f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2356F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2356F4u;
        // 0x2356f8: 0x25420050  addiu       $v0, $t2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2356f4) {
            ctx->pc = 0x235700u;
            goto label_235700;
        }
    }
    ctx->pc = 0x2356FCu;
label_2356fc:
    // 0x2356fc: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2356fcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_235700:
    // 0x235700: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x235700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_235704:
    // 0x235704: 0x24090051  addiu       $t1, $zero, 0x51
    ctx->pc = 0x235704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_235708:
    // 0x235708: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x235708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_23570c:
    // 0x23570c: 0x8e6a0008  lw          $t2, 0x8($s3)
    ctx->pc = 0x23570cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_235710:
    // 0x235710: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x235710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
label_235714:
    // 0x235714: 0x861018  mult        $v0, $a0, $a2
    ctx->pc = 0x235714u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_235718:
    // 0x235718: 0xdfa400f8  ld          $a0, 0xF8($sp)
    ctx->pc = 0x235718u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_23571c:
    // 0x23571c: 0x8fa600e0  lw          $a2, 0xE0($sp)
    ctx->pc = 0x23571cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_235720:
    // 0x235720: 0x71243b89  pcpyld      $a3, $t1, $a0
    ctx->pc = 0x235720u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 4)));
label_235724:
    // 0x235724: 0x7d47ffc0  sq          $a3, -0x40($t2)
    ctx->pc = 0x235724u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967232), GPR_VEC(ctx, 7));
label_235728:
    // 0x235728: 0x24090052  addiu       $t1, $zero, 0x52
    ctx->pc = 0x235728u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_23572c:
    // 0x23572c: 0xc34025  or          $t0, $a2, $v1
    ctx->pc = 0x23572cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_235730:
    // 0x235730: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x235730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235734:
    // 0x235734: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x235734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_235738:
    // 0x235738: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x235738u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_23573c:
    // 0x23573c: 0x7d47ffd0  sq          $a3, -0x30($t2)
    ctx->pc = 0x23573cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967248), GPR_VEC(ctx, 7));
label_235740:
    // 0x235740: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x235740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235744:
    // 0x235744: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x235744u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_235748:
    // 0x235748: 0x24090053  addiu       $t1, $zero, 0x53
    ctx->pc = 0x235748u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_23574c:
    // 0x23574c: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x23574cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_235750:
    // 0x235750: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x235750u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_235754:
    // 0x235754: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x235754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
label_235758:
    // 0x235758: 0x7d47ffe0  sq          $a3, -0x20($t2)
    ctx->pc = 0x235758u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967264), GPR_VEC(ctx, 7));
label_23575c:
    // 0x23575c: 0x3409a000  ori         $t1, $zero, 0xA000
    ctx->pc = 0x23575cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
label_235760:
    // 0x235760: 0x94f78  dsll        $t1, $t1, 29
    ctx->pc = 0x235760u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 29);
label_235764:
    // 0x235764: 0x35298000  ori         $t1, $t1, 0x8000
    ctx->pc = 0x235764u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32768);
label_235768:
    // 0x235768: 0x94cb8  dsll        $t1, $t1, 18
    ctx->pc = 0x235768u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 18);
label_23576c:
    // 0x23576c: 0x7d54ffb0  sq          $s4, -0x50($t2)
    ctx->pc = 0x23576cu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967216), GPR_VEC(ctx, 20));
label_235770:
    // 0x235770: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x235770u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_235774:
    // 0x235774: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x235774u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_235778:
    // 0x235778: 0x70883b89  pcpyld      $a3, $a0, $t0
    ctx->pc = 0x235778u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
label_23577c:
    // 0x23577c: 0x31027fff  andi        $v0, $t0, 0x7FFF
    ctx->pc = 0x23577cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)32767);
label_235780:
    // 0x235780: 0x7d47fff0  sq          $a3, -0x10($t2)
    ctx->pc = 0x235780u;
    WRITE128(ADD32(GPR_U32(ctx, 10), 4294967280), GPR_VEC(ctx, 7));
label_235784:
    // 0x235784: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x235784u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
label_235788:
    // 0x235788: 0x35080002  ori         $t0, $t0, 0x2
    ctx->pc = 0x235788u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)2);
label_23578c:
    // 0x23578c: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x23578cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_235790:
    // 0x235790: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x235790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
label_235794:
    // 0x235794: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x235794u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
label_235798:
    // 0x235798: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x235798u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_23579c:
    // 0x23579c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x23579cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_2357a0:
    // 0x2357a0: 0x7d750000  sq          $s5, 0x0($t3)
    ctx->pc = 0x2357a0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 21));
label_2357a4:
    // 0x2357a4: 0xdfa400f8  ld          $a0, 0xF8($sp)
    ctx->pc = 0x2357a4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_2357a8:
    // 0x2357a8: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
label_2357ac:
    if (ctx->pc == 0x2357ACu) {
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357B0u;
        goto label_2357b0;
    }
    ctx->pc = 0x2357A8u;
    {
        const bool branch_taken_0x2357a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2357ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357A8u;
        // 0x2357ac: 0x256b0010  addiu       $t3, $t3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2357a8) {
            ctx->pc = 0x235824u;
            goto label_235824;
        }
    }
    ctx->pc = 0x2357B0u;
label_2357b0:
    // 0x2357b0: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x2357b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_2357b4:
    // 0x2357b4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2357b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2357b8:
    // 0x2357b8: 0x5440002a  bnel        $v0, $zero, . + 4 + (0x2A << 2)
label_2357bc:
    if (ctx->pc == 0x2357BCu) {
        ctx->pc = 0x2357BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2357B8u;
        // 0x2357bc: 0x7967ffc0  lq          $a3, -0x40($t3) (Delay Slot)
        SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2357C0u;
        goto label_2357c0;
    }
    ctx->pc = 0x2357B8u;
    {
        const bool branch_taken_0x2357b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2357b8) {
            ctx->pc = 0x2357BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2357B8u;
            // 0x2357bc: 0x7967ffc0  lq          $a3, -0x40($t3) (Delay Slot)
            SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235864u;
            goto label_235864;
        }
    }
    ctx->pc = 0x2357C0u;
label_2357c0:
    // 0x2357c0: 0x7962ffc0  lq          $v0, -0x40($t3)
    ctx->pc = 0x2357c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 11), 4294967232)));
label_2357c4:
    // 0x2357c4: 0x26030005  addiu       $v1, $s0, 0x5
    ctx->pc = 0x2357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_2357c8:
    // 0x2357c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2357c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2357cc:
    // 0x2357cc: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2357ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2357d0:
    // 0x2357d0: 0x7d620000  sq          $v0, 0x0($t3)
    ctx->pc = 0x2357d0u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 2));
label_2357d4:
    // 0x2357d4: 0x3c063000  lui         $a2, 0x3000
    ctx->pc = 0x2357d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12288 << 16));
label_2357d8:
    // 0x2357d8: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x2357d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_2357dc:
    // 0x2357dc: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x2357dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
label_2357e0:
    // 0x2357e0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2357e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2357e4:
    // 0x2357e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2357e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2357e8:
    // 0x2357e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2357e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2357ec:
    // 0x2357ec: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2357ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2357f0:
    // 0x2357f0: 0x9563ffc0  lhu         $v1, -0x40($t3)
    ctx->pc = 0x2357f0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967232)));
label_2357f4:
    // 0x2357f4: 0x9562ffcc  lhu         $v0, -0x34($t3)
    ctx->pc = 0x2357f4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 4294967244)));
label_2357f8:
    // 0x2357f8: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x2357f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
label_2357fc:
    // 0x2357fc: 0x664025  or          $t0, $v1, $a2
    ctx->pc = 0x2357fcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_235800:
    // 0x235800: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x235800u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
label_235804:
    // 0x235804: 0x8183c  dsll32      $v1, $t0, 0
    ctx->pc = 0x235804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) << (32 + 0));
label_235808:
    // 0x235808: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x235808u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_23580c:
    // 0x23580c: 0x474025  or          $t0, $v0, $a3
    ctx->pc = 0x23580cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_235810:
    // 0x235810: 0xad63ffc0  sw          $v1, -0x40($t3)
    ctx->pc = 0x235810u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294967232), GPR_U32(ctx, 3));
label_235814:
    // 0x235814: 0x8103c  dsll32      $v0, $t0, 0
    ctx->pc = 0x235814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << (32 + 0));
label_235818:
    // 0x235818: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x235818u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_23581c:
    // 0x23581c: 0x10000014  b           . + 4 + (0x14 << 2)
label_235820:
    if (ctx->pc == 0x235820u) {
        ctx->pc = 0x235820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23581Cu;
        // 0x235820: 0xad62ffcc  sw          $v0, -0x34($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235824u;
        goto label_235824;
    }
    ctx->pc = 0x23581Cu;
    {
        const bool branch_taken_0x23581c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23581Cu;
        // 0x235820: 0xad62ffcc  sw          $v0, -0x34($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 4294967244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23581c) {
            ctx->pc = 0x235870u;
            goto label_235870;
        }
    }
    ctx->pc = 0x235824u;
label_235824:
    // 0x235824: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x235824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_235828:
    // 0x235828: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x235828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_23582c:
    // 0x23582c: 0x9e440010  lwu         $a0, 0x10($s2)
    ctx->pc = 0x23582cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_235830:
    // 0x235830: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x235830u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_235834:
    // 0x235834: 0x6307c  dsll32      $a2, $a2, 1
    ctx->pc = 0x235834u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 1));
label_235838:
    // 0x235838: 0x214c2  srl         $v0, $v0, 19
    ctx->pc = 0x235838u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 19));
label_23583c:
    // 0x23583c: 0x24070050  addiu       $a3, $zero, 0x50
    ctx->pc = 0x23583cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_235840:
    // 0x235840: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x235840u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_235844:
    // 0x235844: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x235844u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
label_235848:
    // 0x235848: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x235848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_23584c:
    // 0x23584c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23584cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_235850:
    // 0x235850: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x235850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_235854:
    // 0x235854: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x235854u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
label_235858:
    // 0x235858: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x235858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23585c:
    // 0x23585c: 0x434025  or          $t0, $v0, $v1
    ctx->pc = 0x23585cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_235860:
    // 0x235860: 0x70e83b89  pcpyld      $a3, $a3, $t0
    ctx->pc = 0x235860u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
label_235864:
    // 0x235864: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x235864u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_235868:
    // 0x235868: 0x26090005  addiu       $t1, $s0, 0x5
    ctx->pc = 0x235868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
label_23586c:
    // 0x23586c: 0x256b0010  addiu       $t3, $t3, 0x10
    ctx->pc = 0x23586cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_235870:
    // 0x235870: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x235870u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_235874:
    // 0x235874: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x235874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_235878:
    // 0x235878: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_23587c:
    if (ctx->pc == 0x23587Cu) {
        ctx->pc = 0x23587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235878u;
        // 0x23587c: 0x2542ffb0  addiu       $v0, $t2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235880u;
        goto label_235880;
    }
    ctx->pc = 0x235878u;
    {
        const bool branch_taken_0x235878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23587Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235878u;
        // 0x23587c: 0x2542ffb0  addiu       $v0, $t2, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967216));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235878) {
            ctx->pc = 0x2358A8u;
            goto label_2358a8;
        }
    }
    ctx->pc = 0x235880u;
label_235880:
    // 0x235880: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x235880u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_235884:
    // 0x235884: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x235884u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_235888:
    // 0x235888: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x235888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_23588c:
    // 0x23588c: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x23588cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_235890:
    // 0x235890: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x235890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_235894:
    // 0x235894: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x235894u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_235898:
    // 0x235898: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x235898u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_23589c:
    // 0x23589c: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x23589cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_2358a0:
    // 0x2358a0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2358a4:
    if (ctx->pc == 0x2358A4u) {
        ctx->pc = 0x2358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A0u;
        // 0x2358a4: 0x7d670000  sq          $a3, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358A8u;
        goto label_2358a8;
    }
    ctx->pc = 0x2358A0u;
    {
        const bool branch_taken_0x2358a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358A0u;
        // 0x2358a4: 0x7d670000  sq          $a3, 0x0($t3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358a0) {
            ctx->pc = 0x2358CCu;
            goto label_2358cc;
        }
    }
    ctx->pc = 0x2358A8u;
label_2358a8:
    // 0x2358a8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x2358a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
label_2358ac:
    // 0x2358ac: 0x3c045000  lui         $a0, 0x5000
    ctx->pc = 0x2358acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
label_2358b0:
    // 0x2358b0: 0x1231825  or          $v1, $t1, $v1
    ctx->pc = 0x2358b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
label_2358b4:
    // 0x2358b4: 0x1242025  or          $a0, $t1, $a0
    ctx->pc = 0x2358b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_2358b8:
    // 0x2358b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2358b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2358bc:
    // 0x2358bc: 0x624025  or          $t0, $v1, $v0
    ctx->pc = 0x2358bcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2358c0:
    // 0x2358c0: 0x4483c  dsll32      $t1, $a0, 0
    ctx->pc = 0x2358c0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 4) << (32 + 0));
label_2358c4:
    // 0x2358c4: 0x71283b89  pcpyld      $a3, $t1, $t0
    ctx->pc = 0x2358c4u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
label_2358c8:
    // 0x2358c8: 0x7d670000  sq          $a3, 0x0($t3)
    ctx->pc = 0x2358c8u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 7));
label_2358cc:
    // 0x2358cc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2358ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2358d0:
    // 0x2358d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2358d4:
    if (ctx->pc == 0x2358D4u) {
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358D8u;
        goto label_2358d8;
    }
    ctx->pc = 0x2358D0u;
    {
        const bool branch_taken_0x2358d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358D0u;
        // 0x2358d4: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358d0) {
            ctx->pc = 0x2358F0u;
            goto label_2358f0;
        }
    }
    ctx->pc = 0x2358D8u;
label_2358d8:
    // 0x2358d8: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x2358d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2358dc:
    // 0x2358dc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2358dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2358e0:
    // 0x2358e0: 0xc0c86e4  jal         func_321B90
label_2358e4:
    if (ctx->pc == 0x2358E4u) {
        ctx->pc = 0x2358E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358E0u;
        // 0x2358e4: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358E8u;
        goto label_2358e8;
    }
    ctx->pc = 0x2358E0u;
    SET_GPR_U32(ctx, 31, 0x2358E8u);
    ctx->pc = 0x2358E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2358E0u;
    // 0x2358e4: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x2358E0u, 0x2358E8u)) {
        return;
    }
    ctx->pc = 0x2358E8u;
label_2358e8:
    // 0x2358e8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_2358ec:
    if (ctx->pc == 0x2358ECu) {
        ctx->pc = 0x2358ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358E8u;
        // 0x2358ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2358F0u;
        goto label_2358f0;
    }
    ctx->pc = 0x2358E8u;
    {
        const bool branch_taken_0x2358e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2358ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2358E8u;
        // 0x2358ec: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2358e8) {
            ctx->pc = 0x2359E4u;
            goto label_2359e4;
        }
    }
    ctx->pc = 0x2358F0u;
label_2358f0:
    // 0x2358f0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2358f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_2358f4:
    // 0x2358f4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2358f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2358f8:
    // 0x2358f8: 0x2406ff80  addiu       $a2, $zero, -0x80
    ctx->pc = 0x2358f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967168));
label_2358fc:
    // 0x2358fc: 0x962821  addu        $a1, $a0, $s6
    ctx->pc = 0x2358fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_235900:
    // 0x235900: 0x3463ff80  ori         $v1, $v1, 0xFF80
    ctx->pc = 0x235900u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65408);
label_235904:
    // 0x235904: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x235904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
label_235908:
    // 0x235908: 0x2442007f  addiu       $v0, $v0, 0x7F
    ctx->pc = 0x235908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 127));
label_23590c:
    // 0x23590c: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x23590cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
label_235910:
    // 0x235910: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x235910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_235914:
    // 0x235914: 0xc0c86e4  jal         func_321B90
label_235918:
    if (ctx->pc == 0x235918u) {
        ctx->pc = 0x235918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235914u;
        // 0x235918: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23591Cu;
        goto label_23591c;
    }
    ctx->pc = 0x235914u;
    SET_GPR_U32(ctx, 31, 0x23591Cu);
    ctx->pc = 0x235918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235914u;
    // 0x235918: 0xa22821  addu        $a1, $a1, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x235914u, 0x23591Cu)) {
        return;
    }
    ctx->pc = 0x23591Cu;
label_23591c:
    // 0x23591c: 0x10000031  b           . + 4 + (0x31 << 2)
label_235920:
    if (ctx->pc == 0x235920u) {
        ctx->pc = 0x235920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23591Cu;
        // 0x235920: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235924u;
        goto label_235924;
    }
    ctx->pc = 0x23591Cu;
    {
        const bool branch_taken_0x23591c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23591Cu;
        // 0x235920: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23591c) {
            ctx->pc = 0x2359E4u;
            goto label_2359e4;
        }
    }
    ctx->pc = 0x235924u;
label_235924:
    // 0x235924: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x235924u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_235928:
    // 0x235928: 0x304200bf  andi        $v0, $v0, 0xBF
    ctx->pc = 0x235928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)191);
label_23592c:
    // 0x23592c: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x23592cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_235930:
    // 0x235930: 0x14600028  bnez        $v1, . + 4 + (0x28 << 2)
label_235934:
    if (ctx->pc == 0x235934u) {
        ctx->pc = 0x235934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235930u;
        // 0x235934: 0xa2620021  sb          $v0, 0x21($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235938u;
        goto label_235938;
    }
    ctx->pc = 0x235930u;
    {
        const bool branch_taken_0x235930 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235930u;
        // 0x235934: 0xa2620021  sb          $v0, 0x21($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235930) {
            ctx->pc = 0x2359D4u;
            goto label_2359d4;
        }
    }
    ctx->pc = 0x235938u;
label_235938:
    // 0x235938: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x235938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_23593c:
    // 0x23593c: 0x8e460028  lw          $a2, 0x28($s2)
    ctx->pc = 0x23593cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235940:
    // 0x235940: 0x8e44002c  lw          $a0, 0x2C($s2)
    ctx->pc = 0x235940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_235944:
    // 0x235944: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x235944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_235948:
    // 0x235948: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x235948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_23594c:
    // 0x23594c: 0x34a50411  ori         $a1, $a1, 0x411
    ctx->pc = 0x23594cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
label_235950:
    // 0x235950: 0x40f809  jalr        $v0
label_235954:
    if (ctx->pc == 0x235954u) {
        ctx->pc = 0x235954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235950u;
        // 0x235954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235958u;
        goto label_235958;
    }
    ctx->pc = 0x235950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235958u);
        ctx->pc = 0x235954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235950u;
        // 0x235954: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235950u, 0x235958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235958u;
label_235958:
    // 0x235958: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x235958u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23595c:
    // 0x23595c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_235960:
    if (ctx->pc == 0x235960u) {
        ctx->pc = 0x235960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23595Cu;
        // 0x235960: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235964u;
        goto label_235964;
    }
    ctx->pc = 0x23595Cu;
    {
        const bool branch_taken_0x23595c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23595Cu;
        // 0x235960: 0xae630004  sw          $v1, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23595c) {
            ctx->pc = 0x235990u;
            goto label_235990;
        }
    }
    ctx->pc = 0x235964u;
label_235964:
    // 0x235964: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x235964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_235968:
    // 0x235968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23596c:
    // 0x23596c: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x23596cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235970:
    // 0x235970: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x235970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_235974:
    // 0x235974: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235978:
    // 0x235978: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x235978u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_23597c:
    // 0x23597c: 0xc092848  jal         func_24A120
label_235980:
    if (ctx->pc == 0x235980u) {
        ctx->pc = 0x235980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23597Cu;
        // 0x235980: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235984u;
        goto label_235984;
    }
    ctx->pc = 0x23597Cu;
    SET_GPR_U32(ctx, 31, 0x235984u);
    ctx->pc = 0x235980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23597Cu;
    // 0x235980: 0xa32821  addu        $a1, $a1, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x23597Cu, 0x235984u)) {
        return;
    }
    ctx->pc = 0x235984u;
label_235984:
    // 0x235984: 0x1000008c  b           . + 4 + (0x8C << 2)
label_235988:
    if (ctx->pc == 0x235988u) {
        ctx->pc = 0x235988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235984u;
        // 0x235988: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23598Cu;
        goto label_23598c;
    }
    ctx->pc = 0x235984u;
    {
        const bool branch_taken_0x235984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235984u;
        // 0x235988: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235984) {
            ctx->pc = 0x235BB8u;
            goto label_235bb8;
        }
    }
    ctx->pc = 0x23598Cu;
label_23598c:
    // 0x23598c: 0x0  nop
    ctx->pc = 0x23598cu;
    // NOP
label_235990:
    // 0x235990: 0x8e42002c  lw          $v0, 0x2C($s2)
    ctx->pc = 0x235990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_235994:
    // 0x235994: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_235998:
    if (ctx->pc == 0x235998u) {
        ctx->pc = 0x235998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235994u;
        // 0x235998: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23599Cu;
        goto label_23599c;
    }
    ctx->pc = 0x235994u;
    {
        const bool branch_taken_0x235994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235994) {
            ctx->pc = 0x235998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235994u;
            // 0x235998: 0x8e630014  lw          $v1, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2359ACu;
            goto label_2359ac;
        }
    }
    ctx->pc = 0x23599Cu;
label_23599c:
    // 0x23599c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x23599cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2359a0:
    // 0x2359a0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2359a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2359a4:
    // 0x2359a4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2359a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2359a8:
    // 0x2359a8: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x2359a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_2359ac:
    // 0x2359ac: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x2359acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2359b0:
    // 0x2359b0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2359b4:
    if (ctx->pc == 0x2359B4u) {
        ctx->pc = 0x2359B8u;
        goto label_2359b8;
    }
    ctx->pc = 0x2359B0u;
    {
        const bool branch_taken_0x2359b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2359b0) {
            ctx->pc = 0x2359C4u;
            goto label_2359c4;
        }
    }
    ctx->pc = 0x2359B8u;
label_2359b8:
    // 0x2359b8: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x2359b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2359bc:
    // 0x2359bc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x2359bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
label_2359c0:
    // 0x2359c0: 0xa2420036  sb          $v0, 0x36($s2)
    ctx->pc = 0x2359c0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 54), (uint8_t)GPR_U32(ctx, 2));
label_2359c4:
    // 0x2359c4: 0xc0913f2  jal         func_244FC8
label_2359c8:
    if (ctx->pc == 0x2359C8u) {
        ctx->pc = 0x2359C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359C4u;
        // 0x2359c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2359CCu;
        goto label_2359cc;
    }
    ctx->pc = 0x2359C4u;
    SET_GPR_U32(ctx, 31, 0x2359CCu);
    ctx->pc = 0x2359C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2359C4u;
    // 0x2359c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x244FC8u, 0x2359C4u, 0x2359CCu)) {
        return;
    }
    ctx->pc = 0x2359CCu;
label_2359cc:
    // 0x2359cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2359d0:
    if (ctx->pc == 0x2359D0u) {
        ctx->pc = 0x2359D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359CCu;
        // 0x2359d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2359D4u;
        goto label_2359d4;
    }
    ctx->pc = 0x2359CCu;
    {
        const bool branch_taken_0x2359cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2359D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359CCu;
        // 0x2359d0: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2359cc) {
            ctx->pc = 0x2359E4u;
            goto label_2359e4;
        }
    }
    ctx->pc = 0x2359D4u;
label_2359d4:
    // 0x2359d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x2359d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_2359d8:
    // 0x2359d8: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x2359d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
label_2359dc:
    // 0x2359dc: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x2359dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_2359e0:
    // 0x2359e0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2359e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2359e4:
    // 0x2359e4: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x2359e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2359e8:
    // 0x2359e8: 0xae640024  sw          $a0, 0x24($s3)
    ctx->pc = 0x2359e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 4));
label_2359ec:
    // 0x2359ec: 0xae630030  sw          $v1, 0x30($s3)
    ctx->pc = 0x2359ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
label_2359f0:
    // 0x2359f0: 0x92420036  lbu         $v0, 0x36($s2)
    ctx->pc = 0x2359f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 54)));
label_2359f4:
    // 0x2359f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2359f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2359f8:
    // 0x2359f8: 0x50400087  beql        $v0, $zero, . + 4 + (0x87 << 2)
label_2359fc:
    if (ctx->pc == 0x2359FCu) {
        ctx->pc = 0x2359FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2359F8u;
        // 0x2359fc: 0x8f8490fc  lw          $a0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A00u;
        goto label_235a00;
    }
    ctx->pc = 0x2359F8u;
    {
        const bool branch_taken_0x2359f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2359f8) {
            ctx->pc = 0x2359FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2359F8u;
            // 0x2359fc: 0x8f8490fc  lw          $a0, -0x6F04($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235C18u;
            goto label_235c18;
        }
    }
    ctx->pc = 0x235A00u;
label_235a00:
    // 0x235a00: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x235a00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_235a04:
    // 0x235a04: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x235a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_235a08:
    // 0x235a08: 0x54400083  bnel        $v0, $zero, . + 4 + (0x83 << 2)
label_235a0c:
    if (ctx->pc == 0x235A0Cu) {
        ctx->pc = 0x235A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A08u;
        // 0x235a0c: 0x8f8490fc  lw          $a0, -0x6F04($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A10u;
        goto label_235a10;
    }
    ctx->pc = 0x235A08u;
    {
        const bool branch_taken_0x235a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235a08) {
            ctx->pc = 0x235A0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A08u;
            // 0x235a0c: 0x8f8490fc  lw          $a0, -0x6F04($gp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235C18u;
            goto label_235c18;
        }
    }
    ctx->pc = 0x235A10u;
label_235a10:
    // 0x235a10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x235a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235a14:
    // 0x235a14: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x235a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_235a18:
    // 0x235a18: 0x1000007d  b           . + 4 + (0x7D << 2)
label_235a1c:
    if (ctx->pc == 0x235A1Cu) {
        ctx->pc = 0x235A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A18u;
        // 0x235a1c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A20u;
        goto label_235a20;
    }
    ctx->pc = 0x235A18u;
    {
        const bool branch_taken_0x235a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A18u;
        // 0x235a1c: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235a18) {
            ctx->pc = 0x235C10u;
            goto label_235c10;
        }
    }
    ctx->pc = 0x235A20u;
label_235a20:
    // 0x235a20: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x235a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_235a24:
    // 0x235a24: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x235a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
label_235a28:
    // 0x235a28: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x235a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_235a2c:
    // 0x235a2c: 0x24a5aea0  addiu       $a1, $a1, -0x5160
    ctx->pc = 0x235a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946464));
label_235a30:
    // 0x235a30: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x235a30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_235a34:
    // 0x235a34: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x235a34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235a38:
    // 0x235a38: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x235a38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_235a3c:
    // 0x235a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x235a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_235a40:
    // 0x235a40: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x235a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_235a44:
    // 0x235a44: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x235a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_235a48:
    // 0x235a48: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x235a48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_235a4c:
    // 0x235a4c: 0x2442af20  addiu       $v0, $v0, -0x50E0
    ctx->pc = 0x235a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946592));
label_235a50:
    // 0x235a50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x235a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235a54:
    // 0x235a54: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x235a54u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
label_235a58:
    // 0x235a58: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x235a58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_235a5c:
    // 0x235a5c: 0xe43818  mult        $a3, $a3, $a0
    ctx->pc = 0x235a5cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_235a60:
    // 0x235a60: 0xae640018  sw          $a0, 0x18($s3)
    ctx->pc = 0x235a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 4));
label_235a64:
    // 0x235a64: 0xae470028  sw          $a3, 0x28($s2)
    ctx->pc = 0x235a64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 40), GPR_U32(ctx, 7));
label_235a68:
    // 0x235a68: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_235a6c:
    if (ctx->pc == 0x235A6Cu) {
        ctx->pc = 0x235A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235A68u;
        // 0x235a6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235A70u;
        goto label_235a70;
    }
    ctx->pc = 0x235A68u;
    {
        const bool branch_taken_0x235a68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x235a68) {
            ctx->pc = 0x235A6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235A68u;
            // 0x235a6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x235A70u;
            goto label_235a70;
        }
    }
    ctx->pc = 0x235A70u;
label_235a70:
    // 0x235a70: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x235a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_235a74:
    // 0x235a74: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x235a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235a78:
    // 0x235a78: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x235a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_235a7c:
    // 0x235a7c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x235a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_235a80:
    // 0x235a80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_235a84:
    // 0x235a84: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x235a84u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
label_235a88:
    // 0x235a88: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x235a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_235a8c:
    // 0x235a8c: 0x1812  mflo        $v1
    ctx->pc = 0x235a8cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_235a90:
    // 0x235a90: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x235a90u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_235a94:
    // 0x235a94: 0x1012  mflo        $v0
    ctx->pc = 0x235a94u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_235a98:
    // 0x235a98: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x235a98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_235a9c:
    // 0x235a9c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x235a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
label_235aa0:
    // 0x235aa0: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x235aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
label_235aa4:
    // 0x235aa4: 0x92620021  lbu         $v0, 0x21($s3)
    ctx->pc = 0x235aa4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
label_235aa8:
    // 0x235aa8: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x235aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_235aac:
    // 0x235aac: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_235ab0:
    if (ctx->pc == 0x235AB0u) {
        ctx->pc = 0x235AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AACu;
        // 0x235ab0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AB4u;
        goto label_235ab4;
    }
    ctx->pc = 0x235AACu;
    {
        const bool branch_taken_0x235aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235aac) {
            ctx->pc = 0x235AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235AACu;
            // 0x235ab0: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235AF8u;
            goto label_235af8;
        }
    }
    ctx->pc = 0x235AB4u;
label_235ab4:
    // 0x235ab4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x235ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_235ab8:
    // 0x235ab8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x235ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_235abc:
    // 0x235abc: 0x8c6210d0  lw          $v0, 0x10D0($v1)
    ctx->pc = 0x235abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4304)));
label_235ac0:
    // 0x235ac0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x235ac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235ac4:
    // 0x235ac4: 0x40f809  jalr        $v0
label_235ac8:
    if (ctx->pc == 0x235AC8u) {
        ctx->pc = 0x235AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AC4u;
        // 0x235ac8: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235ACCu;
        goto label_235acc;
    }
    ctx->pc = 0x235AC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235ACCu);
        ctx->pc = 0x235AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AC4u;
        // 0x235ac8: 0x34a50411  ori         $a1, $a1, 0x411 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1041);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235AC4u, 0x235ACCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235ACCu;
label_235acc:
    // 0x235acc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_235ad0:
    if (ctx->pc == 0x235AD0u) {
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AD4u;
        goto label_235ad4;
    }
    ctx->pc = 0x235ACCu;
    {
        const bool branch_taken_0x235acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ACCu;
        // 0x235ad0: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235acc) {
            ctx->pc = 0x235AF8u;
            goto label_235af8;
        }
    }
    ctx->pc = 0x235AD4u;
label_235ad4:
    // 0x235ad4: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x235ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_235ad8:
    // 0x235ad8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235adc:
    // 0x235adc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x235adcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_235ae0:
    // 0x235ae0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235ae4:
    // 0x235ae4: 0xc092848  jal         func_24A120
label_235ae8:
    if (ctx->pc == 0x235AE8u) {
        ctx->pc = 0x235AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AE4u;
        // 0x235ae8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AECu;
        goto label_235aec;
    }
    ctx->pc = 0x235AE4u;
    SET_GPR_U32(ctx, 31, 0x235AECu);
    ctx->pc = 0x235AE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235AE4u;
    // 0x235ae8: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x235AE4u, 0x235AECu)) {
        return;
    }
    ctx->pc = 0x235AECu;
label_235aec:
    // 0x235aec: 0x10000032  b           . + 4 + (0x32 << 2)
label_235af0:
    if (ctx->pc == 0x235AF0u) {
        ctx->pc = 0x235AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AECu;
        // 0x235af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235AF4u;
        goto label_235af4;
    }
    ctx->pc = 0x235AECu;
    {
        const bool branch_taken_0x235aec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235AF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235AECu;
        // 0x235af0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235aec) {
            ctx->pc = 0x235BB8u;
            goto label_235bb8;
        }
    }
    ctx->pc = 0x235AF4u;
label_235af4:
    // 0x235af4: 0x0  nop
    ctx->pc = 0x235af4u;
    // NOP
label_235af8:
    // 0x235af8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x235af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_235afc:
    // 0x235afc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x235afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_235b00:
    // 0x235b00: 0xae620024  sw          $v0, 0x24($s3)
    ctx->pc = 0x235b00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 2));
label_235b04:
    // 0x235b04: 0x10000042  b           . + 4 + (0x42 << 2)
label_235b08:
    if (ctx->pc == 0x235B08u) {
        ctx->pc = 0x235B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B04u;
        // 0x235b08: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B0Cu;
        goto label_235b0c;
    }
    ctx->pc = 0x235B04u;
    {
        const bool branch_taken_0x235b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B04u;
        // 0x235b08: 0xae630030  sw          $v1, 0x30($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b04) {
            ctx->pc = 0x235C10u;
            goto label_235c10;
        }
    }
    ctx->pc = 0x235B0Cu;
label_235b0c:
    // 0x235b0c: 0x8f848428  lw          $a0, -0x7BD8($gp)
    ctx->pc = 0x235b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
label_235b10:
    // 0x235b10: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x235b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_235b14:
    // 0x235b14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x235b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_235b18:
    // 0x235b18: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x235b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_235b1c:
    // 0x235b1c: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x235b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_235b20:
    // 0x235b20: 0x2442003f  addiu       $v0, $v0, 0x3F
    ctx->pc = 0x235b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
label_235b24:
    // 0x235b24: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x235b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235b28:
    // 0x235b28: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x235b28u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_235b2c:
    // 0x235b2c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x235b2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_235b30:
    // 0x235b30: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x235b30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_235b34:
    // 0x235b34: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x235b34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_235b38:
    // 0x235b38: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x235b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_235b3c:
    // 0x235b3c: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
label_235b40:
    if (ctx->pc == 0x235B40u) {
        ctx->pc = 0x235B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B3Cu;
        // 0x235b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B44u;
        goto label_235b44;
    }
    ctx->pc = 0x235B3Cu;
    {
        const bool branch_taken_0x235b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B3Cu;
        // 0x235b40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b3c) {
            ctx->pc = 0x235BA0u;
            goto label_235ba0;
        }
    }
    ctx->pc = 0x235B44u;
label_235b44:
    // 0x235b44: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x235b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_235b48:
    // 0x235b48: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x235b48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_235b4c:
    // 0x235b4c: 0xa2620021  sb          $v0, 0x21($s3)
    ctx->pc = 0x235b4cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
label_235b50:
    // 0x235b50: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x235b50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_235b54:
    // 0x235b54: 0x1000002d  b           . + 4 + (0x2D << 2)
label_235b58:
    if (ctx->pc == 0x235B58u) {
        ctx->pc = 0x235B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B54u;
        // 0x235b58: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B5Cu;
        goto label_235b5c;
    }
    ctx->pc = 0x235B54u;
    {
        const bool branch_taken_0x235b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B54u;
        // 0x235b58: 0xae600024  sw          $zero, 0x24($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b54) {
            ctx->pc = 0x235C0Cu;
            goto label_235c0c;
        }
    }
    ctx->pc = 0x235B5Cu;
label_235b5c:
    // 0x235b5c: 0x0  nop
    ctx->pc = 0x235b5cu;
    // NOP
label_235b60:
    // 0x235b60: 0x8f828428  lw          $v0, -0x7BD8($gp)
    ctx->pc = 0x235b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935592)));
label_235b64:
    // 0x235b64: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x235b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_235b68:
    // 0x235b68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x235b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_235b6c:
    // 0x235b6c: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x235b6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_235b70:
    // 0x235b70: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_235b74:
    if (ctx->pc == 0x235B74u) {
        ctx->pc = 0x235B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B70u;
        // 0x235b74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B78u;
        goto label_235b78;
    }
    ctx->pc = 0x235B70u;
    {
        const bool branch_taken_0x235b70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B70u;
        // 0x235b74: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235b70) {
            ctx->pc = 0x235B8Cu;
            goto label_235b8c;
        }
    }
    ctx->pc = 0x235B78u;
label_235b78:
    // 0x235b78: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x235b78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235b7c:
    // 0x235b7c: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x235b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_235b80:
    // 0x235b80: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x235b80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_235b84:
    // 0x235b84: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_235b88:
    if (ctx->pc == 0x235B88u) {
        ctx->pc = 0x235B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B84u;
        // 0x235b88: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B8Cu;
        goto label_235b8c;
    }
    ctx->pc = 0x235B84u;
    {
        const bool branch_taken_0x235b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235b84) {
            ctx->pc = 0x235B88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235B84u;
            // 0x235b88: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235BC8u;
            goto label_235bc8;
        }
    }
    ctx->pc = 0x235B8Cu;
label_235b8c:
    // 0x235b8c: 0x93828434  lbu         $v0, -0x7BCC($gp)
    ctx->pc = 0x235b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935604)));
label_235b90:
    // 0x235b90: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_235b94:
    if (ctx->pc == 0x235B94u) {
        ctx->pc = 0x235B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235B90u;
        // 0x235b94: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235B98u;
        goto label_235b98;
    }
    ctx->pc = 0x235B90u;
    {
        const bool branch_taken_0x235b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235b90) {
            ctx->pc = 0x235B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235B90u;
            // 0x235b94: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235BC8u;
            goto label_235bc8;
        }
    }
    ctx->pc = 0x235B98u;
label_235b98:
    // 0x235b98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235b9c:
    // 0x235b9c: 0x0  nop
    ctx->pc = 0x235b9cu;
    // NOP
label_235ba0:
    // 0x235ba0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_235ba4:
    // 0x235ba4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x235ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_235ba8:
    // 0x235ba8: 0x34840010  ori         $a0, $a0, 0x10
    ctx->pc = 0x235ba8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16);
label_235bac:
    // 0x235bac: 0xc092848  jal         func_24A120
label_235bb0:
    if (ctx->pc == 0x235BB0u) {
        ctx->pc = 0x235BB4u;
        goto label_235bb4;
    }
    ctx->pc = 0x235BACu;
    SET_GPR_U32(ctx, 31, 0x235BB4u);
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x235BACu, 0x235BB4u)) {
        return;
    }
    ctx->pc = 0x235BB4u;
label_235bb4:
    // 0x235bb4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235bb8:
    // 0x235bb8: 0xc09281a  jal         func_24A068
label_235bbc:
    if (ctx->pc == 0x235BBCu) {
        ctx->pc = 0x235BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BB8u;
        // 0x235bbc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BC0u;
        goto label_235bc0;
    }
    ctx->pc = 0x235BB8u;
    SET_GPR_U32(ctx, 31, 0x235BC0u);
    ctx->pc = 0x235BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BB8u;
    // 0x235bbc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x235BB8u, 0x235BC0u)) {
        return;
    }
    ctx->pc = 0x235BC0u;
label_235bc0:
    // 0x235bc0: 0x1000001c  b           . + 4 + (0x1C << 2)
label_235bc4:
    if (ctx->pc == 0x235BC4u) {
        ctx->pc = 0x235BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC0u;
        // 0x235bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BC8u;
        goto label_235bc8;
    }
    ctx->pc = 0x235BC0u;
    {
        const bool branch_taken_0x235bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC0u;
        // 0x235bc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc0) {
            ctx->pc = 0x235C34u;
            goto label_235c34;
        }
    }
    ctx->pc = 0x235BC8u;
label_235bc8:
    // 0x235bc8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x235bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_235bcc:
    // 0x235bcc: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x235bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_235bd0:
    // 0x235bd0: 0x2463003f  addiu       $v1, $v1, 0x3F
    ctx->pc = 0x235bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_235bd4:
    // 0x235bd4: 0xa2640021  sb          $a0, 0x21($s3)
    ctx->pc = 0x235bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 4));
label_235bd8:
    // 0x235bd8: 0x24420007  addiu       $v0, $v0, 0x7
    ctx->pc = 0x235bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
label_235bdc:
    // 0x235bdc: 0x31983  sra         $v1, $v1, 6
    ctx->pc = 0x235bdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 6));
label_235be0:
    // 0x235be0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x235be0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_235be4:
    // 0x235be4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x235be4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_235be8:
    // 0x235be8: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x235be8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_235bec:
    // 0x235bec: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x235becu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_235bf0:
    // 0x235bf0: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x235bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_235bf4:
    // 0x235bf4: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x235bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_235bf8:
    // 0x235bf8: 0x10000005  b           . + 4 + (0x5 << 2)
label_235bfc:
    if (ctx->pc == 0x235BFCu) {
        ctx->pc = 0x235BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF8u;
        // 0x235bfc: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C00u;
        goto label_235c00;
    }
    ctx->pc = 0x235BF8u;
    {
        const bool branch_taken_0x235bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF8u;
        // 0x235bfc: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bf8) {
            ctx->pc = 0x235C10u;
            goto label_235c10;
        }
    }
    ctx->pc = 0x235C00u;
label_235c00:
    // 0x235c00: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x235c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_235c04:
    // 0x235c04: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x235c04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
label_235c08:
    // 0x235c08: 0xa2620021  sb          $v0, 0x21($s3)
    ctx->pc = 0x235c08u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 33), (uint8_t)GPR_U32(ctx, 2));
label_235c0c:
    // 0x235c0c: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x235c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
label_235c10:
    // 0x235c10: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x235c10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_235c14:
    // 0x235c14: 0x8c84416c  lw          $a0, 0x416C($a0)
    ctx->pc = 0x235c14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16748)));
label_235c18:
    // 0x235c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x235c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235c1c:
    // 0x235c1c: 0x2642021  addu        $a0, $s3, $a0
    ctx->pc = 0x235c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_235c20:
    // 0x235c20: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x235c20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_235c24:
    // 0x235c24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x235c24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_235c28:
    // 0x235c28: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x235c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
label_235c2c:
    // 0x235c2c: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x235c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_235c30:
    // 0x235c30: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x235c30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_235c34:
    // 0x235c34: 0x7bb00210  lq          $s0, 0x210($sp)
    ctx->pc = 0x235c34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 528)));
label_235c38:
    // 0x235c38: 0x7bb10200  lq          $s1, 0x200($sp)
    ctx->pc = 0x235c38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_235c3c:
    // 0x235c3c: 0x7bb201f0  lq          $s2, 0x1F0($sp)
    ctx->pc = 0x235c3cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_235c40:
    // 0x235c40: 0x7bb301e0  lq          $s3, 0x1E0($sp)
    ctx->pc = 0x235c40u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 480)));
label_235c44:
    // 0x235c44: 0x7bb401d0  lq          $s4, 0x1D0($sp)
    ctx->pc = 0x235c44u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 464)));
label_235c48:
    // 0x235c48: 0x7bb501c0  lq          $s5, 0x1C0($sp)
    ctx->pc = 0x235c48u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_235c4c:
    // 0x235c4c: 0x7bb601b0  lq          $s6, 0x1B0($sp)
    ctx->pc = 0x235c4cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_235c50:
    // 0x235c50: 0x7bb701a0  lq          $s7, 0x1A0($sp)
    ctx->pc = 0x235c50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_235c54:
    // 0x235c54: 0x7bbe0190  lq          $fp, 0x190($sp)
    ctx->pc = 0x235c54u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_235c58:
    // 0x235c58: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x235c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_235c5c:
    // 0x235c5c: 0x3e00008  jr          $ra
label_235c60:
    if (ctx->pc == 0x235C60u) {
        ctx->pc = 0x235C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C5Cu;
        // 0x235c60: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C64u;
        goto label_235c64;
    }
    ctx->pc = 0x235C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C5Cu;
        // 0x235c60: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235C64u;
label_235c64:
    // 0x235c64: 0x0  nop
    ctx->pc = 0x235c64u;
    // NOP
label_235c68:
    // 0x235c68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x235c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_235c6c:
    // 0x235c6c: 0x0  nop
    ctx->pc = 0x235c6cu;
    // NOP
    ctx->pc = 0x235c70u;
}
