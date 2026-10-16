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

// Function: sub_0012A490
// Address: 0x12a490 - 0x12aeb8
void sub_0012A490_0x12a490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A490_0x12a490");
#endif

    switch (ctx->pc) {
        case 0x12a490u: goto label_12a490;
        case 0x12a494u: goto label_12a494;
        case 0x12a498u: goto label_12a498;
        case 0x12a49cu: goto label_12a49c;
        case 0x12a4a0u: goto label_12a4a0;
        case 0x12a4a4u: goto label_12a4a4;
        case 0x12a4a8u: goto label_12a4a8;
        case 0x12a4acu: goto label_12a4ac;
        case 0x12a4b0u: goto label_12a4b0;
        case 0x12a4b4u: goto label_12a4b4;
        case 0x12a4b8u: goto label_12a4b8;
        case 0x12a4bcu: goto label_12a4bc;
        case 0x12a4c0u: goto label_12a4c0;
        case 0x12a4c4u: goto label_12a4c4;
        case 0x12a4c8u: goto label_12a4c8;
        case 0x12a4ccu: goto label_12a4cc;
        case 0x12a4d0u: goto label_12a4d0;
        case 0x12a4d4u: goto label_12a4d4;
        case 0x12a4d8u: goto label_12a4d8;
        case 0x12a4dcu: goto label_12a4dc;
        case 0x12a4e0u: goto label_12a4e0;
        case 0x12a4e4u: goto label_12a4e4;
        case 0x12a4e8u: goto label_12a4e8;
        case 0x12a4ecu: goto label_12a4ec;
        case 0x12a4f0u: goto label_12a4f0;
        case 0x12a4f4u: goto label_12a4f4;
        case 0x12a4f8u: goto label_12a4f8;
        case 0x12a4fcu: goto label_12a4fc;
        case 0x12a500u: goto label_12a500;
        case 0x12a504u: goto label_12a504;
        case 0x12a508u: goto label_12a508;
        case 0x12a50cu: goto label_12a50c;
        case 0x12a510u: goto label_12a510;
        case 0x12a514u: goto label_12a514;
        case 0x12a518u: goto label_12a518;
        case 0x12a51cu: goto label_12a51c;
        case 0x12a520u: goto label_12a520;
        case 0x12a524u: goto label_12a524;
        case 0x12a528u: goto label_12a528;
        case 0x12a52cu: goto label_12a52c;
        case 0x12a530u: goto label_12a530;
        case 0x12a534u: goto label_12a534;
        case 0x12a538u: goto label_12a538;
        case 0x12a53cu: goto label_12a53c;
        case 0x12a540u: goto label_12a540;
        case 0x12a544u: goto label_12a544;
        case 0x12a548u: goto label_12a548;
        case 0x12a54cu: goto label_12a54c;
        case 0x12a550u: goto label_12a550;
        case 0x12a554u: goto label_12a554;
        case 0x12a558u: goto label_12a558;
        case 0x12a55cu: goto label_12a55c;
        case 0x12a560u: goto label_12a560;
        case 0x12a564u: goto label_12a564;
        case 0x12a568u: goto label_12a568;
        case 0x12a56cu: goto label_12a56c;
        case 0x12a570u: goto label_12a570;
        case 0x12a574u: goto label_12a574;
        case 0x12a578u: goto label_12a578;
        case 0x12a57cu: goto label_12a57c;
        case 0x12a580u: goto label_12a580;
        case 0x12a584u: goto label_12a584;
        case 0x12a588u: goto label_12a588;
        case 0x12a58cu: goto label_12a58c;
        case 0x12a590u: goto label_12a590;
        case 0x12a594u: goto label_12a594;
        case 0x12a598u: goto label_12a598;
        case 0x12a59cu: goto label_12a59c;
        case 0x12a5a0u: goto label_12a5a0;
        case 0x12a5a4u: goto label_12a5a4;
        case 0x12a5a8u: goto label_12a5a8;
        case 0x12a5acu: goto label_12a5ac;
        case 0x12a5b0u: goto label_12a5b0;
        case 0x12a5b4u: goto label_12a5b4;
        case 0x12a5b8u: goto label_12a5b8;
        case 0x12a5bcu: goto label_12a5bc;
        case 0x12a5c0u: goto label_12a5c0;
        case 0x12a5c4u: goto label_12a5c4;
        case 0x12a5c8u: goto label_12a5c8;
        case 0x12a5ccu: goto label_12a5cc;
        case 0x12a5d0u: goto label_12a5d0;
        case 0x12a5d4u: goto label_12a5d4;
        case 0x12a5d8u: goto label_12a5d8;
        case 0x12a5dcu: goto label_12a5dc;
        case 0x12a5e0u: goto label_12a5e0;
        case 0x12a5e4u: goto label_12a5e4;
        case 0x12a5e8u: goto label_12a5e8;
        case 0x12a5ecu: goto label_12a5ec;
        case 0x12a5f0u: goto label_12a5f0;
        case 0x12a5f4u: goto label_12a5f4;
        case 0x12a5f8u: goto label_12a5f8;
        case 0x12a5fcu: goto label_12a5fc;
        case 0x12a600u: goto label_12a600;
        case 0x12a604u: goto label_12a604;
        case 0x12a608u: goto label_12a608;
        case 0x12a60cu: goto label_12a60c;
        case 0x12a610u: goto label_12a610;
        case 0x12a614u: goto label_12a614;
        case 0x12a618u: goto label_12a618;
        case 0x12a61cu: goto label_12a61c;
        case 0x12a620u: goto label_12a620;
        case 0x12a624u: goto label_12a624;
        case 0x12a628u: goto label_12a628;
        case 0x12a62cu: goto label_12a62c;
        case 0x12a630u: goto label_12a630;
        case 0x12a634u: goto label_12a634;
        case 0x12a638u: goto label_12a638;
        case 0x12a63cu: goto label_12a63c;
        case 0x12a640u: goto label_12a640;
        case 0x12a644u: goto label_12a644;
        case 0x12a648u: goto label_12a648;
        case 0x12a64cu: goto label_12a64c;
        case 0x12a650u: goto label_12a650;
        case 0x12a654u: goto label_12a654;
        case 0x12a658u: goto label_12a658;
        case 0x12a65cu: goto label_12a65c;
        case 0x12a660u: goto label_12a660;
        case 0x12a664u: goto label_12a664;
        case 0x12a668u: goto label_12a668;
        case 0x12a66cu: goto label_12a66c;
        case 0x12a670u: goto label_12a670;
        case 0x12a674u: goto label_12a674;
        case 0x12a678u: goto label_12a678;
        case 0x12a67cu: goto label_12a67c;
        case 0x12a680u: goto label_12a680;
        case 0x12a684u: goto label_12a684;
        case 0x12a688u: goto label_12a688;
        case 0x12a68cu: goto label_12a68c;
        case 0x12a690u: goto label_12a690;
        case 0x12a694u: goto label_12a694;
        case 0x12a698u: goto label_12a698;
        case 0x12a69cu: goto label_12a69c;
        case 0x12a6a0u: goto label_12a6a0;
        case 0x12a6a4u: goto label_12a6a4;
        case 0x12a6a8u: goto label_12a6a8;
        case 0x12a6acu: goto label_12a6ac;
        case 0x12a6b0u: goto label_12a6b0;
        case 0x12a6b4u: goto label_12a6b4;
        case 0x12a6b8u: goto label_12a6b8;
        case 0x12a6bcu: goto label_12a6bc;
        case 0x12a6c0u: goto label_12a6c0;
        case 0x12a6c4u: goto label_12a6c4;
        case 0x12a6c8u: goto label_12a6c8;
        case 0x12a6ccu: goto label_12a6cc;
        case 0x12a6d0u: goto label_12a6d0;
        case 0x12a6d4u: goto label_12a6d4;
        case 0x12a6d8u: goto label_12a6d8;
        case 0x12a6dcu: goto label_12a6dc;
        case 0x12a6e0u: goto label_12a6e0;
        case 0x12a6e4u: goto label_12a6e4;
        case 0x12a6e8u: goto label_12a6e8;
        case 0x12a6ecu: goto label_12a6ec;
        case 0x12a6f0u: goto label_12a6f0;
        case 0x12a6f4u: goto label_12a6f4;
        case 0x12a6f8u: goto label_12a6f8;
        case 0x12a6fcu: goto label_12a6fc;
        case 0x12a700u: goto label_12a700;
        case 0x12a704u: goto label_12a704;
        case 0x12a708u: goto label_12a708;
        case 0x12a70cu: goto label_12a70c;
        case 0x12a710u: goto label_12a710;
        case 0x12a714u: goto label_12a714;
        case 0x12a718u: goto label_12a718;
        case 0x12a71cu: goto label_12a71c;
        case 0x12a720u: goto label_12a720;
        case 0x12a724u: goto label_12a724;
        case 0x12a728u: goto label_12a728;
        case 0x12a72cu: goto label_12a72c;
        case 0x12a730u: goto label_12a730;
        case 0x12a734u: goto label_12a734;
        case 0x12a738u: goto label_12a738;
        case 0x12a73cu: goto label_12a73c;
        case 0x12a740u: goto label_12a740;
        case 0x12a744u: goto label_12a744;
        case 0x12a748u: goto label_12a748;
        case 0x12a74cu: goto label_12a74c;
        case 0x12a750u: goto label_12a750;
        case 0x12a754u: goto label_12a754;
        case 0x12a758u: goto label_12a758;
        case 0x12a75cu: goto label_12a75c;
        case 0x12a760u: goto label_12a760;
        case 0x12a764u: goto label_12a764;
        case 0x12a768u: goto label_12a768;
        case 0x12a76cu: goto label_12a76c;
        case 0x12a770u: goto label_12a770;
        case 0x12a774u: goto label_12a774;
        case 0x12a778u: goto label_12a778;
        case 0x12a77cu: goto label_12a77c;
        case 0x12a780u: goto label_12a780;
        case 0x12a784u: goto label_12a784;
        case 0x12a788u: goto label_12a788;
        case 0x12a78cu: goto label_12a78c;
        case 0x12a790u: goto label_12a790;
        case 0x12a794u: goto label_12a794;
        case 0x12a798u: goto label_12a798;
        case 0x12a79cu: goto label_12a79c;
        case 0x12a7a0u: goto label_12a7a0;
        case 0x12a7a4u: goto label_12a7a4;
        case 0x12a7a8u: goto label_12a7a8;
        case 0x12a7acu: goto label_12a7ac;
        case 0x12a7b0u: goto label_12a7b0;
        case 0x12a7b4u: goto label_12a7b4;
        case 0x12a7b8u: goto label_12a7b8;
        case 0x12a7bcu: goto label_12a7bc;
        case 0x12a7c0u: goto label_12a7c0;
        case 0x12a7c4u: goto label_12a7c4;
        case 0x12a7c8u: goto label_12a7c8;
        case 0x12a7ccu: goto label_12a7cc;
        case 0x12a7d0u: goto label_12a7d0;
        case 0x12a7d4u: goto label_12a7d4;
        case 0x12a7d8u: goto label_12a7d8;
        case 0x12a7dcu: goto label_12a7dc;
        case 0x12a7e0u: goto label_12a7e0;
        case 0x12a7e4u: goto label_12a7e4;
        case 0x12a7e8u: goto label_12a7e8;
        case 0x12a7ecu: goto label_12a7ec;
        case 0x12a7f0u: goto label_12a7f0;
        case 0x12a7f4u: goto label_12a7f4;
        case 0x12a7f8u: goto label_12a7f8;
        case 0x12a7fcu: goto label_12a7fc;
        case 0x12a800u: goto label_12a800;
        case 0x12a804u: goto label_12a804;
        case 0x12a808u: goto label_12a808;
        case 0x12a80cu: goto label_12a80c;
        case 0x12a810u: goto label_12a810;
        case 0x12a814u: goto label_12a814;
        case 0x12a818u: goto label_12a818;
        case 0x12a81cu: goto label_12a81c;
        case 0x12a820u: goto label_12a820;
        case 0x12a824u: goto label_12a824;
        case 0x12a828u: goto label_12a828;
        case 0x12a82cu: goto label_12a82c;
        case 0x12a830u: goto label_12a830;
        case 0x12a834u: goto label_12a834;
        case 0x12a838u: goto label_12a838;
        case 0x12a83cu: goto label_12a83c;
        case 0x12a840u: goto label_12a840;
        case 0x12a844u: goto label_12a844;
        case 0x12a848u: goto label_12a848;
        case 0x12a84cu: goto label_12a84c;
        case 0x12a850u: goto label_12a850;
        case 0x12a854u: goto label_12a854;
        case 0x12a858u: goto label_12a858;
        case 0x12a85cu: goto label_12a85c;
        case 0x12a860u: goto label_12a860;
        case 0x12a864u: goto label_12a864;
        case 0x12a868u: goto label_12a868;
        case 0x12a86cu: goto label_12a86c;
        case 0x12a870u: goto label_12a870;
        case 0x12a874u: goto label_12a874;
        case 0x12a878u: goto label_12a878;
        case 0x12a87cu: goto label_12a87c;
        case 0x12a880u: goto label_12a880;
        case 0x12a884u: goto label_12a884;
        case 0x12a888u: goto label_12a888;
        case 0x12a88cu: goto label_12a88c;
        case 0x12a890u: goto label_12a890;
        case 0x12a894u: goto label_12a894;
        case 0x12a898u: goto label_12a898;
        case 0x12a89cu: goto label_12a89c;
        case 0x12a8a0u: goto label_12a8a0;
        case 0x12a8a4u: goto label_12a8a4;
        case 0x12a8a8u: goto label_12a8a8;
        case 0x12a8acu: goto label_12a8ac;
        case 0x12a8b0u: goto label_12a8b0;
        case 0x12a8b4u: goto label_12a8b4;
        case 0x12a8b8u: goto label_12a8b8;
        case 0x12a8bcu: goto label_12a8bc;
        case 0x12a8c0u: goto label_12a8c0;
        case 0x12a8c4u: goto label_12a8c4;
        case 0x12a8c8u: goto label_12a8c8;
        case 0x12a8ccu: goto label_12a8cc;
        case 0x12a8d0u: goto label_12a8d0;
        case 0x12a8d4u: goto label_12a8d4;
        case 0x12a8d8u: goto label_12a8d8;
        case 0x12a8dcu: goto label_12a8dc;
        case 0x12a8e0u: goto label_12a8e0;
        case 0x12a8e4u: goto label_12a8e4;
        case 0x12a8e8u: goto label_12a8e8;
        case 0x12a8ecu: goto label_12a8ec;
        case 0x12a8f0u: goto label_12a8f0;
        case 0x12a8f4u: goto label_12a8f4;
        case 0x12a8f8u: goto label_12a8f8;
        case 0x12a8fcu: goto label_12a8fc;
        case 0x12a900u: goto label_12a900;
        case 0x12a904u: goto label_12a904;
        case 0x12a908u: goto label_12a908;
        case 0x12a90cu: goto label_12a90c;
        case 0x12a910u: goto label_12a910;
        case 0x12a914u: goto label_12a914;
        case 0x12a918u: goto label_12a918;
        case 0x12a91cu: goto label_12a91c;
        case 0x12a920u: goto label_12a920;
        case 0x12a924u: goto label_12a924;
        case 0x12a928u: goto label_12a928;
        case 0x12a92cu: goto label_12a92c;
        case 0x12a930u: goto label_12a930;
        case 0x12a934u: goto label_12a934;
        case 0x12a938u: goto label_12a938;
        case 0x12a93cu: goto label_12a93c;
        case 0x12a940u: goto label_12a940;
        case 0x12a944u: goto label_12a944;
        case 0x12a948u: goto label_12a948;
        case 0x12a94cu: goto label_12a94c;
        case 0x12a950u: goto label_12a950;
        case 0x12a954u: goto label_12a954;
        case 0x12a958u: goto label_12a958;
        case 0x12a95cu: goto label_12a95c;
        case 0x12a960u: goto label_12a960;
        case 0x12a964u: goto label_12a964;
        case 0x12a968u: goto label_12a968;
        case 0x12a96cu: goto label_12a96c;
        case 0x12a970u: goto label_12a970;
        case 0x12a974u: goto label_12a974;
        case 0x12a978u: goto label_12a978;
        case 0x12a97cu: goto label_12a97c;
        case 0x12a980u: goto label_12a980;
        case 0x12a984u: goto label_12a984;
        case 0x12a988u: goto label_12a988;
        case 0x12a98cu: goto label_12a98c;
        case 0x12a990u: goto label_12a990;
        case 0x12a994u: goto label_12a994;
        case 0x12a998u: goto label_12a998;
        case 0x12a99cu: goto label_12a99c;
        case 0x12a9a0u: goto label_12a9a0;
        case 0x12a9a4u: goto label_12a9a4;
        case 0x12a9a8u: goto label_12a9a8;
        case 0x12a9acu: goto label_12a9ac;
        case 0x12a9b0u: goto label_12a9b0;
        case 0x12a9b4u: goto label_12a9b4;
        case 0x12a9b8u: goto label_12a9b8;
        case 0x12a9bcu: goto label_12a9bc;
        case 0x12a9c0u: goto label_12a9c0;
        case 0x12a9c4u: goto label_12a9c4;
        case 0x12a9c8u: goto label_12a9c8;
        case 0x12a9ccu: goto label_12a9cc;
        case 0x12a9d0u: goto label_12a9d0;
        case 0x12a9d4u: goto label_12a9d4;
        case 0x12a9d8u: goto label_12a9d8;
        case 0x12a9dcu: goto label_12a9dc;
        case 0x12a9e0u: goto label_12a9e0;
        case 0x12a9e4u: goto label_12a9e4;
        case 0x12a9e8u: goto label_12a9e8;
        case 0x12a9ecu: goto label_12a9ec;
        case 0x12a9f0u: goto label_12a9f0;
        case 0x12a9f4u: goto label_12a9f4;
        case 0x12a9f8u: goto label_12a9f8;
        case 0x12a9fcu: goto label_12a9fc;
        case 0x12aa00u: goto label_12aa00;
        case 0x12aa04u: goto label_12aa04;
        case 0x12aa08u: goto label_12aa08;
        case 0x12aa0cu: goto label_12aa0c;
        case 0x12aa10u: goto label_12aa10;
        case 0x12aa14u: goto label_12aa14;
        case 0x12aa18u: goto label_12aa18;
        case 0x12aa1cu: goto label_12aa1c;
        case 0x12aa20u: goto label_12aa20;
        case 0x12aa24u: goto label_12aa24;
        case 0x12aa28u: goto label_12aa28;
        case 0x12aa2cu: goto label_12aa2c;
        case 0x12aa30u: goto label_12aa30;
        case 0x12aa34u: goto label_12aa34;
        case 0x12aa38u: goto label_12aa38;
        case 0x12aa3cu: goto label_12aa3c;
        case 0x12aa40u: goto label_12aa40;
        case 0x12aa44u: goto label_12aa44;
        case 0x12aa48u: goto label_12aa48;
        case 0x12aa4cu: goto label_12aa4c;
        case 0x12aa50u: goto label_12aa50;
        case 0x12aa54u: goto label_12aa54;
        case 0x12aa58u: goto label_12aa58;
        case 0x12aa5cu: goto label_12aa5c;
        case 0x12aa60u: goto label_12aa60;
        case 0x12aa64u: goto label_12aa64;
        case 0x12aa68u: goto label_12aa68;
        case 0x12aa6cu: goto label_12aa6c;
        case 0x12aa70u: goto label_12aa70;
        case 0x12aa74u: goto label_12aa74;
        case 0x12aa78u: goto label_12aa78;
        case 0x12aa7cu: goto label_12aa7c;
        case 0x12aa80u: goto label_12aa80;
        case 0x12aa84u: goto label_12aa84;
        case 0x12aa88u: goto label_12aa88;
        case 0x12aa8cu: goto label_12aa8c;
        case 0x12aa90u: goto label_12aa90;
        case 0x12aa94u: goto label_12aa94;
        case 0x12aa98u: goto label_12aa98;
        case 0x12aa9cu: goto label_12aa9c;
        case 0x12aaa0u: goto label_12aaa0;
        case 0x12aaa4u: goto label_12aaa4;
        case 0x12aaa8u: goto label_12aaa8;
        case 0x12aaacu: goto label_12aaac;
        case 0x12aab0u: goto label_12aab0;
        case 0x12aab4u: goto label_12aab4;
        case 0x12aab8u: goto label_12aab8;
        case 0x12aabcu: goto label_12aabc;
        case 0x12aac0u: goto label_12aac0;
        case 0x12aac4u: goto label_12aac4;
        case 0x12aac8u: goto label_12aac8;
        case 0x12aaccu: goto label_12aacc;
        case 0x12aad0u: goto label_12aad0;
        case 0x12aad4u: goto label_12aad4;
        case 0x12aad8u: goto label_12aad8;
        case 0x12aadcu: goto label_12aadc;
        case 0x12aae0u: goto label_12aae0;
        case 0x12aae4u: goto label_12aae4;
        case 0x12aae8u: goto label_12aae8;
        case 0x12aaecu: goto label_12aaec;
        case 0x12aaf0u: goto label_12aaf0;
        case 0x12aaf4u: goto label_12aaf4;
        case 0x12aaf8u: goto label_12aaf8;
        case 0x12aafcu: goto label_12aafc;
        case 0x12ab00u: goto label_12ab00;
        case 0x12ab04u: goto label_12ab04;
        case 0x12ab08u: goto label_12ab08;
        case 0x12ab0cu: goto label_12ab0c;
        case 0x12ab10u: goto label_12ab10;
        case 0x12ab14u: goto label_12ab14;
        case 0x12ab18u: goto label_12ab18;
        case 0x12ab1cu: goto label_12ab1c;
        case 0x12ab20u: goto label_12ab20;
        case 0x12ab24u: goto label_12ab24;
        case 0x12ab28u: goto label_12ab28;
        case 0x12ab2cu: goto label_12ab2c;
        case 0x12ab30u: goto label_12ab30;
        case 0x12ab34u: goto label_12ab34;
        case 0x12ab38u: goto label_12ab38;
        case 0x12ab3cu: goto label_12ab3c;
        case 0x12ab40u: goto label_12ab40;
        case 0x12ab44u: goto label_12ab44;
        case 0x12ab48u: goto label_12ab48;
        case 0x12ab4cu: goto label_12ab4c;
        case 0x12ab50u: goto label_12ab50;
        case 0x12ab54u: goto label_12ab54;
        case 0x12ab58u: goto label_12ab58;
        case 0x12ab5cu: goto label_12ab5c;
        case 0x12ab60u: goto label_12ab60;
        case 0x12ab64u: goto label_12ab64;
        case 0x12ab68u: goto label_12ab68;
        case 0x12ab6cu: goto label_12ab6c;
        case 0x12ab70u: goto label_12ab70;
        case 0x12ab74u: goto label_12ab74;
        case 0x12ab78u: goto label_12ab78;
        case 0x12ab7cu: goto label_12ab7c;
        case 0x12ab80u: goto label_12ab80;
        case 0x12ab84u: goto label_12ab84;
        case 0x12ab88u: goto label_12ab88;
        case 0x12ab8cu: goto label_12ab8c;
        case 0x12ab90u: goto label_12ab90;
        case 0x12ab94u: goto label_12ab94;
        case 0x12ab98u: goto label_12ab98;
        case 0x12ab9cu: goto label_12ab9c;
        case 0x12aba0u: goto label_12aba0;
        case 0x12aba4u: goto label_12aba4;
        case 0x12aba8u: goto label_12aba8;
        case 0x12abacu: goto label_12abac;
        case 0x12abb0u: goto label_12abb0;
        case 0x12abb4u: goto label_12abb4;
        case 0x12abb8u: goto label_12abb8;
        case 0x12abbcu: goto label_12abbc;
        case 0x12abc0u: goto label_12abc0;
        case 0x12abc4u: goto label_12abc4;
        case 0x12abc8u: goto label_12abc8;
        case 0x12abccu: goto label_12abcc;
        case 0x12abd0u: goto label_12abd0;
        case 0x12abd4u: goto label_12abd4;
        case 0x12abd8u: goto label_12abd8;
        case 0x12abdcu: goto label_12abdc;
        case 0x12abe0u: goto label_12abe0;
        case 0x12abe4u: goto label_12abe4;
        case 0x12abe8u: goto label_12abe8;
        case 0x12abecu: goto label_12abec;
        case 0x12abf0u: goto label_12abf0;
        case 0x12abf4u: goto label_12abf4;
        case 0x12abf8u: goto label_12abf8;
        case 0x12abfcu: goto label_12abfc;
        case 0x12ac00u: goto label_12ac00;
        case 0x12ac04u: goto label_12ac04;
        case 0x12ac08u: goto label_12ac08;
        case 0x12ac0cu: goto label_12ac0c;
        case 0x12ac10u: goto label_12ac10;
        case 0x12ac14u: goto label_12ac14;
        case 0x12ac18u: goto label_12ac18;
        case 0x12ac1cu: goto label_12ac1c;
        case 0x12ac20u: goto label_12ac20;
        case 0x12ac24u: goto label_12ac24;
        case 0x12ac28u: goto label_12ac28;
        case 0x12ac2cu: goto label_12ac2c;
        case 0x12ac30u: goto label_12ac30;
        case 0x12ac34u: goto label_12ac34;
        case 0x12ac38u: goto label_12ac38;
        case 0x12ac3cu: goto label_12ac3c;
        case 0x12ac40u: goto label_12ac40;
        case 0x12ac44u: goto label_12ac44;
        case 0x12ac48u: goto label_12ac48;
        case 0x12ac4cu: goto label_12ac4c;
        case 0x12ac50u: goto label_12ac50;
        case 0x12ac54u: goto label_12ac54;
        case 0x12ac58u: goto label_12ac58;
        case 0x12ac5cu: goto label_12ac5c;
        case 0x12ac60u: goto label_12ac60;
        case 0x12ac64u: goto label_12ac64;
        case 0x12ac68u: goto label_12ac68;
        case 0x12ac6cu: goto label_12ac6c;
        case 0x12ac70u: goto label_12ac70;
        case 0x12ac74u: goto label_12ac74;
        case 0x12ac78u: goto label_12ac78;
        case 0x12ac7cu: goto label_12ac7c;
        case 0x12ac80u: goto label_12ac80;
        case 0x12ac84u: goto label_12ac84;
        case 0x12ac88u: goto label_12ac88;
        case 0x12ac8cu: goto label_12ac8c;
        case 0x12ac90u: goto label_12ac90;
        case 0x12ac94u: goto label_12ac94;
        case 0x12ac98u: goto label_12ac98;
        case 0x12ac9cu: goto label_12ac9c;
        case 0x12aca0u: goto label_12aca0;
        case 0x12aca4u: goto label_12aca4;
        case 0x12aca8u: goto label_12aca8;
        case 0x12acacu: goto label_12acac;
        case 0x12acb0u: goto label_12acb0;
        case 0x12acb4u: goto label_12acb4;
        case 0x12acb8u: goto label_12acb8;
        case 0x12acbcu: goto label_12acbc;
        case 0x12acc0u: goto label_12acc0;
        case 0x12acc4u: goto label_12acc4;
        case 0x12acc8u: goto label_12acc8;
        case 0x12acccu: goto label_12accc;
        case 0x12acd0u: goto label_12acd0;
        case 0x12acd4u: goto label_12acd4;
        case 0x12acd8u: goto label_12acd8;
        case 0x12acdcu: goto label_12acdc;
        case 0x12ace0u: goto label_12ace0;
        case 0x12ace4u: goto label_12ace4;
        case 0x12ace8u: goto label_12ace8;
        case 0x12acecu: goto label_12acec;
        case 0x12acf0u: goto label_12acf0;
        case 0x12acf4u: goto label_12acf4;
        case 0x12acf8u: goto label_12acf8;
        case 0x12acfcu: goto label_12acfc;
        case 0x12ad00u: goto label_12ad00;
        case 0x12ad04u: goto label_12ad04;
        case 0x12ad08u: goto label_12ad08;
        case 0x12ad0cu: goto label_12ad0c;
        case 0x12ad10u: goto label_12ad10;
        case 0x12ad14u: goto label_12ad14;
        case 0x12ad18u: goto label_12ad18;
        case 0x12ad1cu: goto label_12ad1c;
        case 0x12ad20u: goto label_12ad20;
        case 0x12ad24u: goto label_12ad24;
        case 0x12ad28u: goto label_12ad28;
        case 0x12ad2cu: goto label_12ad2c;
        case 0x12ad30u: goto label_12ad30;
        case 0x12ad34u: goto label_12ad34;
        case 0x12ad38u: goto label_12ad38;
        case 0x12ad3cu: goto label_12ad3c;
        case 0x12ad40u: goto label_12ad40;
        case 0x12ad44u: goto label_12ad44;
        case 0x12ad48u: goto label_12ad48;
        case 0x12ad4cu: goto label_12ad4c;
        case 0x12ad50u: goto label_12ad50;
        case 0x12ad54u: goto label_12ad54;
        case 0x12ad58u: goto label_12ad58;
        case 0x12ad5cu: goto label_12ad5c;
        case 0x12ad60u: goto label_12ad60;
        case 0x12ad64u: goto label_12ad64;
        case 0x12ad68u: goto label_12ad68;
        case 0x12ad6cu: goto label_12ad6c;
        case 0x12ad70u: goto label_12ad70;
        case 0x12ad74u: goto label_12ad74;
        case 0x12ad78u: goto label_12ad78;
        case 0x12ad7cu: goto label_12ad7c;
        case 0x12ad80u: goto label_12ad80;
        case 0x12ad84u: goto label_12ad84;
        case 0x12ad88u: goto label_12ad88;
        case 0x12ad8cu: goto label_12ad8c;
        case 0x12ad90u: goto label_12ad90;
        case 0x12ad94u: goto label_12ad94;
        case 0x12ad98u: goto label_12ad98;
        case 0x12ad9cu: goto label_12ad9c;
        case 0x12ada0u: goto label_12ada0;
        case 0x12ada4u: goto label_12ada4;
        case 0x12ada8u: goto label_12ada8;
        case 0x12adacu: goto label_12adac;
        case 0x12adb0u: goto label_12adb0;
        case 0x12adb4u: goto label_12adb4;
        case 0x12adb8u: goto label_12adb8;
        case 0x12adbcu: goto label_12adbc;
        case 0x12adc0u: goto label_12adc0;
        case 0x12adc4u: goto label_12adc4;
        case 0x12adc8u: goto label_12adc8;
        case 0x12adccu: goto label_12adcc;
        case 0x12add0u: goto label_12add0;
        case 0x12add4u: goto label_12add4;
        case 0x12add8u: goto label_12add8;
        case 0x12addcu: goto label_12addc;
        case 0x12ade0u: goto label_12ade0;
        case 0x12ade4u: goto label_12ade4;
        case 0x12ade8u: goto label_12ade8;
        case 0x12adecu: goto label_12adec;
        case 0x12adf0u: goto label_12adf0;
        case 0x12adf4u: goto label_12adf4;
        case 0x12adf8u: goto label_12adf8;
        case 0x12adfcu: goto label_12adfc;
        case 0x12ae00u: goto label_12ae00;
        case 0x12ae04u: goto label_12ae04;
        case 0x12ae08u: goto label_12ae08;
        case 0x12ae0cu: goto label_12ae0c;
        case 0x12ae10u: goto label_12ae10;
        case 0x12ae14u: goto label_12ae14;
        case 0x12ae18u: goto label_12ae18;
        case 0x12ae1cu: goto label_12ae1c;
        case 0x12ae20u: goto label_12ae20;
        case 0x12ae24u: goto label_12ae24;
        case 0x12ae28u: goto label_12ae28;
        case 0x12ae2cu: goto label_12ae2c;
        case 0x12ae30u: goto label_12ae30;
        case 0x12ae34u: goto label_12ae34;
        case 0x12ae38u: goto label_12ae38;
        case 0x12ae3cu: goto label_12ae3c;
        case 0x12ae40u: goto label_12ae40;
        case 0x12ae44u: goto label_12ae44;
        case 0x12ae48u: goto label_12ae48;
        case 0x12ae4cu: goto label_12ae4c;
        case 0x12ae50u: goto label_12ae50;
        case 0x12ae54u: goto label_12ae54;
        case 0x12ae58u: goto label_12ae58;
        case 0x12ae5cu: goto label_12ae5c;
        case 0x12ae60u: goto label_12ae60;
        case 0x12ae64u: goto label_12ae64;
        case 0x12ae68u: goto label_12ae68;
        case 0x12ae6cu: goto label_12ae6c;
        case 0x12ae70u: goto label_12ae70;
        case 0x12ae74u: goto label_12ae74;
        case 0x12ae78u: goto label_12ae78;
        case 0x12ae7cu: goto label_12ae7c;
        case 0x12ae80u: goto label_12ae80;
        case 0x12ae84u: goto label_12ae84;
        case 0x12ae88u: goto label_12ae88;
        case 0x12ae8cu: goto label_12ae8c;
        case 0x12ae90u: goto label_12ae90;
        case 0x12ae94u: goto label_12ae94;
        case 0x12ae98u: goto label_12ae98;
        case 0x12ae9cu: goto label_12ae9c;
        case 0x12aea0u: goto label_12aea0;
        case 0x12aea4u: goto label_12aea4;
        case 0x12aea8u: goto label_12aea8;
        case 0x12aeacu: goto label_12aeac;
        case 0x12aeb0u: goto label_12aeb0;
        case 0x12aeb4u: goto label_12aeb4;
        default: break;
    }

    ctx->pc = 0x12a490u;

label_12a490:
    // 0x12a490: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x12a490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_12a494:
    // 0x12a494: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x12a494u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
label_12a498:
    // 0x12a498: 0xe7b401d0  swc1        $f20, 0x1D0($sp)
    ctx->pc = 0x12a498u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_12a49c:
    // 0x12a49c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x12a49cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12a4a0:
    // 0x12a4a0: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x12a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
label_12a4a4:
    // 0x12a4a4: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x12a4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
label_12a4a8:
    // 0x12a4a8: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x12a4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
label_12a4ac:
    // 0x12a4ac: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x12a4acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
label_12a4b0:
    // 0x12a4b0: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x12a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
label_12a4b4:
    // 0x12a4b4: 0x7fb60160  sq          $s6, 0x160($sp)
    ctx->pc = 0x12a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 22));
label_12a4b8:
    // 0x12a4b8: 0x7fb70150  sq          $s7, 0x150($sp)
    ctx->pc = 0x12a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 23));
label_12a4bc:
    // 0x12a4bc: 0x7fbe0140  sq          $fp, 0x140($sp)
    ctx->pc = 0x12a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 30));
label_12a4c0:
    // 0x12a4c0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x12a4c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
label_12a4c4:
    // 0x12a4c4: 0xe7b501d8  swc1        $f21, 0x1D8($sp)
    ctx->pc = 0x12a4c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_12a4c8:
    // 0x12a4c8: 0x8e220c40  lw          $v0, 0xC40($s1)
    ctx->pc = 0x12a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3136)));
label_12a4cc:
    // 0x12a4cc: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_12a4d0:
    if (ctx->pc == 0x12A4D0u) {
        ctx->pc = 0x12A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4CCu;
        // 0x12a4d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A4D4u;
        goto label_12a4d4;
    }
    ctx->pc = 0x12A4CCu;
    {
        const bool branch_taken_0x12a4cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4CCu;
        // 0x12a4d0: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4cc) {
            ctx->pc = 0x12A548u;
            goto label_12a548;
        }
    }
    ctx->pc = 0x12A4D4u;
label_12a4d4:
    // 0x12a4d4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x12a4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_12a4d8:
    // 0x12a4d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12a4dc:
    if (ctx->pc == 0x12A4DCu) {
        ctx->pc = 0x12A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4D8u;
        // 0x12a4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A4E0u;
        goto label_12a4e0;
    }
    ctx->pc = 0x12A4D8u;
    {
        const bool branch_taken_0x12a4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4D8u;
        // 0x12a4dc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4d8) {
            ctx->pc = 0x12A4F0u;
            goto label_12a4f0;
        }
    }
    ctx->pc = 0x12A4E0u;
label_12a4e0:
    // 0x12a4e0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x12a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_12a4e4:
    // 0x12a4e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12a4e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a4e8:
    // 0x12a4e8: 0x10000002  b           . + 4 + (0x2 << 2)
label_12a4ec:
    if (ctx->pc == 0x12A4ECu) {
        ctx->pc = 0x12A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4E8u;
        // 0x12a4ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A4F0u;
        goto label_12a4f0;
    }
    ctx->pc = 0x12A4E8u;
    {
        const bool branch_taken_0x12a4e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4E8u;
        // 0x12a4ec: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4e8) {
            ctx->pc = 0x12A4F4u;
            goto label_12a4f4;
        }
    }
    ctx->pc = 0x12A4F0u;
label_12a4f0:
    // 0x12a4f0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x12a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_12a4f4:
    // 0x12a4f4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_12a4f8:
    if (ctx->pc == 0x12A4F8u) {
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4F4u;
        // 0x12a4f8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A4FCu;
        goto label_12a4fc;
    }
    ctx->pc = 0x12A4F4u;
    {
        const bool branch_taken_0x12a4f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A4F4u;
        // 0x12a4f8: 0x8c700004  lw          $s0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a4f4) {
            ctx->pc = 0x12A508u;
            goto label_12a508;
        }
    }
    ctx->pc = 0x12A4FCu;
label_12a4fc:
    // 0x12a4fc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x12a4fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a500:
    // 0x12a500: 0xc0aa756  jal         func_2A9D58
label_12a504:
    if (ctx->pc == 0x12A504u) {
        ctx->pc = 0x12A508u;
        goto label_12a508;
    }
    ctx->pc = 0x12A500u;
    SET_GPR_U32(ctx, 31, 0x12A508u);
    ctx->pc = 0x2A9D58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2A9D58u, 0x12A500u, 0x12A508u)) {
        return;
    }
    ctx->pc = 0x12A508u;
label_12a508:
    // 0x12a508: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
label_12a50c:
    if (ctx->pc == 0x12A50Cu) {
        ctx->pc = 0x12A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A508u;
        // 0x12a50c: 0x26250084  addiu       $a1, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A510u;
        goto label_12a510;
    }
    ctx->pc = 0x12A508u;
    {
        const bool branch_taken_0x12a508 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A508u;
        // 0x12a50c: 0x26250084  addiu       $a1, $s1, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a508) {
            ctx->pc = 0x12A548u;
            goto label_12a548;
        }
    }
    ctx->pc = 0x12A510u;
label_12a510:
    // 0x12a510: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x12a510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_12a514:
    // 0x12a514: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x12a514u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
label_12a518:
    // 0x12a518: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x12a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
label_12a51c:
    // 0x12a51c: 0x40f809  jalr        $v0
label_12a520:
    if (ctx->pc == 0x12A520u) {
        ctx->pc = 0x12A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A51Cu;
        // 0x12a520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A524u;
        goto label_12a524;
    }
    ctx->pc = 0x12A51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A524u);
        ctx->pc = 0x12A520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A51Cu;
        // 0x12a520: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A51Cu, 0x12A524u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A524u;
label_12a524:
    // 0x12a524: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x12a524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_12a528:
    // 0x12a528: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x12a528u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_12a52c:
    // 0x12a52c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a52cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a530:
    // 0x12a530: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_12a534:
    if (ctx->pc == 0x12A534u) {
        ctx->pc = 0x12A538u;
        goto label_12a538;
    }
    ctx->pc = 0x12A530u;
    {
        const bool branch_taken_0x12a530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a530) {
            ctx->pc = 0x12A540u;
            goto label_12a540;
        }
    }
    ctx->pc = 0x12A538u;
label_12a538:
    // 0x12a538: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x12a538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_12a53c:
    // 0x12a53c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x12a53cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_12a540:
    // 0x12a540: 0xc0ab838  jal         func_2AE0E0
label_12a544:
    if (ctx->pc == 0x12A544u) {
        ctx->pc = 0x12A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A540u;
        // 0x12a544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A548u;
        goto label_12a548;
    }
    ctx->pc = 0x12A540u;
    SET_GPR_U32(ctx, 31, 0x12A548u);
    ctx->pc = 0x12A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A540u;
    // 0x12a544: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AE0E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2AE0E0u, 0x12A540u, 0x12A548u)) {
        return;
    }
    ctx->pc = 0x12A548u;
label_12a548:
    // 0x12a548: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x12a548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a54c:
    // 0x12a54c: 0xc04a6dc  jal         func_129B70
label_12a550:
    if (ctx->pc == 0x12A550u) {
        ctx->pc = 0x12A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A54Cu;
        // 0x12a550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A554u;
        goto label_12a554;
    }
    ctx->pc = 0x12A54Cu;
    SET_GPR_U32(ctx, 31, 0x12A554u);
    ctx->pc = 0x12A550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A54Cu;
    // 0x12a550: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x129B70u, 0x12A54Cu, 0x12A554u)) {
        return;
    }
    ctx->pc = 0x12A554u;
label_12a554:
    // 0x12a554: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x12a554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_12a558:
    // 0x12a558: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x12a558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_12a55c:
    // 0x12a55c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x12a55cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_12a560:
    // 0x12a560: 0xc048516  jal         func_121458
label_12a564:
    if (ctx->pc == 0x12A564u) {
        ctx->pc = 0x12A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A560u;
        // 0x12a564: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A568u;
        goto label_12a568;
    }
    ctx->pc = 0x12A560u;
    SET_GPR_U32(ctx, 31, 0x12A568u);
    ctx->pc = 0x12A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A560u;
    // 0x12a564: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121458u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x121458u, 0x12A560u, 0x12A568u)) {
        return;
    }
    ctx->pc = 0x12A568u;
label_12a568:
    // 0x12a568: 0xc07600c  jal         func_1D8030
label_12a56c:
    if (ctx->pc == 0x12A56Cu) {
        ctx->pc = 0x12A570u;
        goto label_12a570;
    }
    ctx->pc = 0x12A568u;
    SET_GPR_U32(ctx, 31, 0x12A570u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x12A568u, 0x12A570u)) {
        return;
    }
    ctx->pc = 0x12A570u;
label_12a570:
    // 0x12a570: 0xc6202aa0  lwc1        $f0, 0x2AA0($s1)
    ctx->pc = 0x12a570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a574:
    // 0x12a574: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x12a574u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a578:
    // 0x12a578: 0x0  nop
    ctx->pc = 0x12a578u;
    // NOP
label_12a57c:
    // 0x12a57c: 0x45000038  bc1f        . + 4 + (0x38 << 2)
label_12a580:
    if (ctx->pc == 0x12A580u) {
        ctx->pc = 0x12A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A57Cu;
        // 0x12a580: 0x8c540014  lw          $s4, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A584u;
        goto label_12a584;
    }
    ctx->pc = 0x12A57Cu;
    {
        const bool branch_taken_0x12a57c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A57Cu;
        // 0x12a580: 0x8c540014  lw          $s4, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a57c) {
            ctx->pc = 0x12A660u;
            goto label_12a660;
        }
    }
    ctx->pc = 0x12A584u;
label_12a584:
    // 0x12a584: 0x52800037  beql        $s4, $zero, . + 4 + (0x37 << 2)
label_12a588:
    if (ctx->pc == 0x12A588u) {
        ctx->pc = 0x12A588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A584u;
        // 0x12a588: 0x8e222c68  lw          $v0, 0x2C68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11368)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A58Cu;
        goto label_12a58c;
    }
    ctx->pc = 0x12A584u;
    {
        const bool branch_taken_0x12a584 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a584) {
            ctx->pc = 0x12A588u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A584u;
            // 0x12a588: 0x8e222c68  lw          $v0, 0x2C68($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11368)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A664u;
            goto label_12a664;
        }
    }
    ctx->pc = 0x12A58Cu;
label_12a58c:
    // 0x12a58c: 0xc04f0cc  jal         func_13C330
label_12a590:
    if (ctx->pc == 0x12A590u) {
        ctx->pc = 0x12A590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A58Cu;
        // 0x12a590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A594u;
        goto label_12a594;
    }
    ctx->pc = 0x12A58Cu;
    SET_GPR_U32(ctx, 31, 0x12A594u);
    ctx->pc = 0x12A590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A58Cu;
    // 0x12a590: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12A58Cu, 0x12A594u)) {
        return;
    }
    ctx->pc = 0x12A594u;
label_12a594:
    // 0x12a594: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12a594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12a598:
    // 0x12a598: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12a598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12a59c:
    // 0x12a59c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12a59cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12a5a0:
    // 0x12a5a0: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x12a5a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a5a4:
    // 0x12a5a4: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x12a5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a5a8:
    // 0x12a5a8: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x12a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_12a5ac:
    // 0x12a5ac: 0xc04f0cc  jal         func_13C330
label_12a5b0:
    if (ctx->pc == 0x12A5B0u) {
        ctx->pc = 0x12A5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A5ACu;
        // 0x12a5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A5B4u;
        goto label_12a5b4;
    }
    ctx->pc = 0x12A5ACu;
    SET_GPR_U32(ctx, 31, 0x12A5B4u);
    ctx->pc = 0x12A5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A5ACu;
    // 0x12a5b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12A5ACu, 0x12A5B4u)) {
        return;
    }
    ctx->pc = 0x12A5B4u;
label_12a5b4:
    // 0x12a5b4: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12a5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12a5b8:
    // 0x12a5b8: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12a5b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12a5bc:
    // 0x12a5bc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12a5c0:
    // 0x12a5c0: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x12a5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a5c4:
    // 0x12a5c4: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x12a5c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a5c8:
    // 0x12a5c8: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x12a5c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_12a5cc:
    // 0x12a5cc: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x12a5ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a5d0:
    // 0x12a5d0: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x12a5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a5d4:
    // 0x12a5d4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12a5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a5d8:
    // 0x12a5d8: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x12a5d8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
label_12a5dc:
    // 0x12a5dc: 0xc7a40024  lwc1        $f4, 0x24($sp)
    ctx->pc = 0x12a5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12a5e0:
    // 0x12a5e0: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x12a5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a5e4:
    // 0x12a5e4: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x12a5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a5e8:
    // 0x12a5e8: 0x46041081  sub.s       $f2, $f2, $f4
    ctx->pc = 0x12a5e8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[4]);
label_12a5ec:
    // 0x12a5ec: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12a5ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12a5f0:
    // 0x12a5f0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x12a5f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
label_12a5f4:
    // 0x12a5f4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x12a5f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12a5f8:
    // 0x12a5f8: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12a5f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12a5fc:
    // 0x12a5fc: 0x6ba70037  ldl         $a3, 0x37($sp)
    ctx->pc = 0x12a5fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12a600:
    // 0x12a600: 0x6fa70030  ldr         $a3, 0x30($sp)
    ctx->pc = 0x12a600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12a604:
    // 0x12a604: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x12a604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_12a608:
    // 0x12a608: 0xb3a70007  sdl         $a3, 0x7($sp)
    ctx->pc = 0x12a608u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a60c:
    // 0x12a60c: 0xb7a70000  sdr         $a3, 0x0($sp)
    ctx->pc = 0x12a60cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a610:
    // 0x12a610: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x12a610u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_12a614:
    // 0x12a614: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x12a614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a618:
    // 0x12a618: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x12a618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a61c:
    // 0x12a61c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12a61cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12a620:
    // 0x12a620: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x12a620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a624:
    // 0x12a624: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x12a624u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_12a628:
    // 0x12a628: 0xc6212aa0  lwc1        $f1, 0x2AA0($s1)
    ctx->pc = 0x12a628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a62c:
    // 0x12a62c: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12a62cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12a630:
    // 0x12a630: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12a630u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12a634:
    // 0x12a634: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12a634u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_12a638:
    // 0x12a638: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12a638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12a63c:
    // 0x12a63c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a63cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a640:
    // 0x12a640: 0x0  nop
    ctx->pc = 0x12a640u;
    // NOP
label_12a644:
    // 0x12a644: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_12a648:
    if (ctx->pc == 0x12A648u) {
        ctx->pc = 0x12A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A644u;
        // 0x12a648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A64Cu;
        goto label_12a64c;
    }
    ctx->pc = 0x12A644u;
    {
        const bool branch_taken_0x12a644 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A644u;
        // 0x12a648: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a644) {
            ctx->pc = 0x12A660u;
            goto label_12a660;
        }
    }
    ctx->pc = 0x12A64Cu;
label_12a64c:
    // 0x12a64c: 0xe6350c1c  swc1        $f21, 0xC1C($s1)
    ctx->pc = 0x12a64cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3100), bits); }
label_12a650:
    // 0x12a650: 0xae200f04  sw          $zero, 0xF04($s1)
    ctx->pc = 0x12a650u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3844), GPR_U32(ctx, 0));
label_12a654:
    // 0x12a654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12a654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a658:
    // 0x12a658: 0xc049a70  jal         func_1269C0
label_12a65c:
    if (ctx->pc == 0x12A65Cu) {
        ctx->pc = 0x12A65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A658u;
        // 0x12a65c: 0xae222cd8  sw          $v0, 0x2CD8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11480), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A660u;
        goto label_12a660;
    }
    ctx->pc = 0x12A658u;
    SET_GPR_U32(ctx, 31, 0x12A660u);
    ctx->pc = 0x12A65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A658u;
    // 0x12a65c: 0xae222cd8  sw          $v0, 0x2CD8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 11480), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1269C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1269C0u, 0x12A658u, 0x12A660u)) {
        return;
    }
    ctx->pc = 0x12A660u;
label_12a660:
    // 0x12a660: 0x8e222c68  lw          $v0, 0x2C68($s1)
    ctx->pc = 0x12a660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11368)));
label_12a664:
    // 0x12a664: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12a668:
    if (ctx->pc == 0x12A668u) {
        ctx->pc = 0x12A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A664u;
        // 0x12a668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A66Cu;
        goto label_12a66c;
    }
    ctx->pc = 0x12A664u;
    {
        const bool branch_taken_0x12a664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A664u;
        // 0x12a668: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a664) {
            ctx->pc = 0x12A67Cu;
            goto label_12a67c;
        }
    }
    ctx->pc = 0x12A66Cu;
label_12a66c:
    // 0x12a66c: 0xc040678  jal         func_1019E0
label_12a670:
    if (ctx->pc == 0x12A670u) {
        ctx->pc = 0x12A670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A66Cu;
        // 0x12a670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A674u;
        goto label_12a674;
    }
    ctx->pc = 0x12A66Cu;
    SET_GPR_U32(ctx, 31, 0x12A674u);
    ctx->pc = 0x12A670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A66Cu;
    // 0x12a670: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1019E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1019E0u, 0x12A66Cu, 0x12A674u)) {
        return;
    }
    ctx->pc = 0x12A674u;
label_12a674:
    // 0x12a674: 0xae202c68  sw          $zero, 0x2C68($s1)
    ctx->pc = 0x12a674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11368), GPR_U32(ctx, 0));
label_12a678:
    // 0x12a678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x12a678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_12a67c:
    // 0x12a67c: 0xc04f0c2  jal         func_13C308
label_12a680:
    if (ctx->pc == 0x12A680u) {
        ctx->pc = 0x12A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A67Cu;
        // 0x12a680: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A684u;
        goto label_12a684;
    }
    ctx->pc = 0x12A67Cu;
    SET_GPR_U32(ctx, 31, 0x12A684u);
    ctx->pc = 0x12A680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A67Cu;
    // 0x12a680: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C308u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C308u, 0x12A67Cu, 0x12A684u)) {
        return;
    }
    ctx->pc = 0x12A684u;
label_12a684:
    // 0x12a684: 0x26222a80  addiu       $v0, $s1, 0x2A80
    ctx->pc = 0x12a684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10880));
label_12a688:
    // 0x12a688: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x12a688u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a68c:
    // 0x12a68c: 0xc6202a80  lwc1        $f0, 0x2A80($s1)
    ctx->pc = 0x12a68cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 10880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a690:
    // 0x12a690: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x12a690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a694:
    // 0x12a694: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x12a694u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_12a698:
    // 0x12a698: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x12a698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12a69c:
    // 0x12a69c: 0xe7a10020  swc1        $f1, 0x20($sp)
    ctx->pc = 0x12a69cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_12a6a0:
    // 0x12a6a0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x12a6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a6a4:
    // 0x12a6a4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x12a6a4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_12a6a8:
    // 0x12a6a8: 0xe7a20024  swc1        $f2, 0x24($sp)
    ctx->pc = 0x12a6a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_12a6ac:
    // 0x12a6ac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x12a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a6b0:
    // 0x12a6b0: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x12a6b0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_12a6b4:
    // 0x12a6b4: 0xe7a30028  swc1        $f3, 0x28($sp)
    ctx->pc = 0x12a6b4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_12a6b8:
    // 0x12a6b8: 0x6ba50027  ldl         $a1, 0x27($sp)
    ctx->pc = 0x12a6b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_12a6bc:
    // 0x12a6bc: 0x6fa50020  ldr         $a1, 0x20($sp)
    ctx->pc = 0x12a6bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_12a6c0:
    // 0x12a6c0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x12a6c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_12a6c4:
    // 0x12a6c4: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x12a6c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a6c8:
    // 0x12a6c8: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x12a6c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a6cc:
    // 0x12a6cc: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x12a6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_12a6d0:
    // 0x12a6d0: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x12a6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a6d4:
    // 0x12a6d4: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x12a6d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12a6d8:
    // 0x12a6d8: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x12a6d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_12a6dc:
    // 0x12a6dc: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x12a6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a6e0:
    // 0x12a6e0: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x12a6e0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_12a6e4:
    // 0x12a6e4: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x12a6e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_12a6e8:
    // 0x12a6e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x12a6e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_12a6ec:
    // 0x12a6ec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x12a6ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_12a6f0:
    // 0x12a6f0: 0x0  nop
    ctx->pc = 0x12a6f0u;
    // NOP
label_12a6f4:
    // 0x12a6f4: 0x0  nop
    ctx->pc = 0x12a6f4u;
    // NOP
label_12a6f8:
    // 0x12a6f8: 0x46000004  c1          0x4
    ctx->pc = 0x12a6f8u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_12a6fc:
    // 0x12a6fc: 0xe6202a90  swc1        $f0, 0x2A90($s1)
    ctx->pc = 0x12a6fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 10896), bits); }
label_12a700:
    // 0x12a700: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12a700u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a704:
    // 0x12a704: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x12a704u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_12a708:
    // 0x12a708: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x12a708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12a70c:
    // 0x12a70c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x12a70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12a710:
    // 0x12a710: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x12a710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_12a714:
    // 0x12a714: 0xb2232a87  sdl         $v1, 0x2A87($s1)
    ctx->pc = 0x12a714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10887); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a718:
    // 0x12a718: 0xb6232a80  sdr         $v1, 0x2A80($s1)
    ctx->pc = 0x12a718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10880); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12a71c:
    // 0x12a71c: 0xae242a88  sw          $a0, 0x2A88($s1)
    ctx->pc = 0x12a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 10888), GPR_U32(ctx, 4));
label_12a720:
    // 0x12a720: 0x27b30040  addiu       $s3, $sp, 0x40
    ctx->pc = 0x12a720u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_12a724:
    // 0x12a724: 0x26230084  addiu       $v1, $s1, 0x84
    ctx->pc = 0x12a724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_12a728:
    // 0x12a728: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a72c:
    // 0x12a72c: 0xafa300e8  sw          $v1, 0xE8($sp)
    ctx->pc = 0x12a72cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 3));
label_12a730:
    // 0x12a730: 0xc0c493d  jal         func_3124F4
label_12a734:
    if (ctx->pc == 0x12A734u) {
        ctx->pc = 0x12A734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A730u;
        // 0x12a734: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A738u;
        goto label_12a738;
    }
    ctx->pc = 0x12A730u;
    SET_GPR_U32(ctx, 31, 0x12A738u);
    ctx->pc = 0x12A734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A730u;
    // 0x12a734: 0x26300360  addiu       $s0, $s1, 0x360 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x12A730u, 0x12A738u)) {
        return;
    }
    ctx->pc = 0x12A738u;
label_12a738:
    // 0x12a738: 0x263629a4  addiu       $s6, $s1, 0x29A4
    ctx->pc = 0x12a738u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), 10660));
label_12a73c:
    // 0x12a73c: 0xc6210c1c  lwc1        $f1, 0xC1C($s1)
    ctx->pc = 0x12a73cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a740:
    // 0x12a740: 0x26242904  addiu       $a0, $s1, 0x2904
    ctx->pc = 0x12a740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10500));
label_12a744:
    // 0x12a744: 0x2625290c  addiu       $a1, $s1, 0x290C
    ctx->pc = 0x12a744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10508));
label_12a748:
    // 0x12a748: 0x26262914  addiu       $a2, $s1, 0x2914
    ctx->pc = 0x12a748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10516));
label_12a74c:
    // 0x12a74c: 0x2627291c  addiu       $a3, $s1, 0x291C
    ctx->pc = 0x12a74cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 10524));
label_12a750:
    // 0x12a750: 0x26222924  addiu       $v0, $s1, 0x2924
    ctx->pc = 0x12a750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10532));
label_12a754:
    // 0x12a754: 0x2623292c  addiu       $v1, $s1, 0x292C
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10540));
label_12a758:
    // 0x12a758: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a75c:
    // 0x12a75c: 0xafa40108  sw          $a0, 0x108($sp)
    ctx->pc = 0x12a75cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 4));
label_12a760:
    // 0x12a760: 0x263729ac  addiu       $s7, $s1, 0x29AC
    ctx->pc = 0x12a760u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 10668));
label_12a764:
    // 0x12a764: 0xafa5010c  sw          $a1, 0x10C($sp)
    ctx->pc = 0x12a764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 5));
label_12a768:
    // 0x12a768: 0x26242934  addiu       $a0, $s1, 0x2934
    ctx->pc = 0x12a768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10548));
label_12a76c:
    // 0x12a76c: 0xafa60110  sw          $a2, 0x110($sp)
    ctx->pc = 0x12a76cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 6));
label_12a770:
    // 0x12a770: 0x2625293c  addiu       $a1, $s1, 0x293C
    ctx->pc = 0x12a770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10556));
label_12a774:
    // 0x12a774: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x12a774u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
label_12a778:
    // 0x12a778: 0x26262944  addiu       $a2, $s1, 0x2944
    ctx->pc = 0x12a778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10564));
label_12a77c:
    // 0x12a77c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x12a77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
label_12a780:
    // 0x12a780: 0x2627294c  addiu       $a3, $s1, 0x294C
    ctx->pc = 0x12a780u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 10572));
label_12a784:
    // 0x12a784: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x12a784u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_12a788:
    // 0x12a788: 0x26222954  addiu       $v0, $s1, 0x2954
    ctx->pc = 0x12a788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10580));
label_12a78c:
    // 0x12a78c: 0x2623295c  addiu       $v1, $s1, 0x295C
    ctx->pc = 0x12a78cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10588));
label_12a790:
    // 0x12a790: 0xafa40120  sw          $a0, 0x120($sp)
    ctx->pc = 0x12a790u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 4));
label_12a794:
    // 0x12a794: 0xafa500d8  sw          $a1, 0xD8($sp)
    ctx->pc = 0x12a794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 5));
label_12a798:
    // 0x12a798: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a79c:
    // 0x12a79c: 0xafa600dc  sw          $a2, 0xDC($sp)
    ctx->pc = 0x12a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 6));
label_12a7a0:
    // 0x12a7a0: 0x26242964  addiu       $a0, $s1, 0x2964
    ctx->pc = 0x12a7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 10596));
label_12a7a4:
    // 0x12a7a4: 0xafa700e0  sw          $a3, 0xE0($sp)
    ctx->pc = 0x12a7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 7));
label_12a7a8:
    // 0x12a7a8: 0x2625296c  addiu       $a1, $s1, 0x296C
    ctx->pc = 0x12a7a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 10604));
label_12a7ac:
    // 0x12a7ac: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x12a7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
label_12a7b0:
    // 0x12a7b0: 0x26262974  addiu       $a2, $s1, 0x2974
    ctx->pc = 0x12a7b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 10612));
label_12a7b4:
    // 0x12a7b4: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x12a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
label_12a7b8:
    // 0x12a7b8: 0x2627297c  addiu       $a3, $s1, 0x297C
    ctx->pc = 0x12a7b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 10620));
label_12a7bc:
    // 0x12a7bc: 0x26222984  addiu       $v0, $s1, 0x2984
    ctx->pc = 0x12a7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 10628));
label_12a7c0:
    // 0x12a7c0: 0x2623298c  addiu       $v1, $s1, 0x298C
    ctx->pc = 0x12a7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 10636));
label_12a7c4:
    // 0x12a7c4: 0x263e28fc  addiu       $fp, $s1, 0x28FC
    ctx->pc = 0x12a7c4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 10492));
label_12a7c8:
    // 0x12a7c8: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x12a7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
label_12a7cc:
    // 0x12a7cc: 0xafa500f4  sw          $a1, 0xF4($sp)
    ctx->pc = 0x12a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 5));
label_12a7d0:
    // 0x12a7d0: 0x26351510  addiu       $s5, $s1, 0x1510
    ctx->pc = 0x12a7d0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 5392));
label_12a7d4:
    // 0x12a7d4: 0xafa600f8  sw          $a2, 0xF8($sp)
    ctx->pc = 0x12a7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 6));
label_12a7d8:
    // 0x12a7d8: 0xafa700fc  sw          $a3, 0xFC($sp)
    ctx->pc = 0x12a7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 7));
label_12a7dc:
    // 0x12a7dc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x12a7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
label_12a7e0:
    // 0x12a7e0: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_12a7e4:
    if (ctx->pc == 0x12A7E4u) {
        ctx->pc = 0x12A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7E0u;
        // 0x12a7e4: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A7E8u;
        goto label_12a7e8;
    }
    ctx->pc = 0x12A7E0u;
    {
        const bool branch_taken_0x12a7e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A7E0u;
        // 0x12a7e4: 0xafa30104  sw          $v1, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7e0) {
            ctx->pc = 0x12A82Cu;
            goto label_12a82c;
        }
    }
    ctx->pc = 0x12A7E8u;
label_12a7e8:
    // 0x12a7e8: 0x8e222aa8  lw          $v0, 0x2AA8($s1)
    ctx->pc = 0x12a7e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10920)));
label_12a7ec:
    // 0x12a7ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x12a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_12a7f0:
    // 0x12a7f0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x12a7f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_12a7f4:
    // 0x12a7f4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x12a7f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a7f8:
    // 0x12a7f8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x12a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_12a7fc:
    // 0x12a7fc: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x12a7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_12a800:
    // 0x12a800: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a804:
    // 0x12a804: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a804u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a808:
    // 0x12a808: 0x0  nop
    ctx->pc = 0x12a808u;
    // NOP
label_12a80c:
    // 0x12a80c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_12a810:
    if (ctx->pc == 0x12A810u) {
        ctx->pc = 0x12A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A80Cu;
        // 0x12a810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A814u;
        goto label_12a814;
    }
    ctx->pc = 0x12A80Cu;
    {
        const bool branch_taken_0x12a80c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A80Cu;
        // 0x12a810: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a80c) {
            ctx->pc = 0x12A818u;
            goto label_12a818;
        }
    }
    ctx->pc = 0x12A814u;
label_12a814:
    // 0x12a814: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12a814u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a818:
    // 0x12a818: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x12a818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_12a81c:
    // 0x12a81c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12a81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_12a820:
    // 0x12a820: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12a820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_12a824:
    // 0x12a824: 0x4a1fff6  bgez        $a1, . + 4 + (-0xA << 2)
label_12a828:
    if (ctx->pc == 0x12A828u) {
        ctx->pc = 0x12A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A824u;
        // 0x12a828: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A82Cu;
        goto label_12a82c;
    }
    ctx->pc = 0x12A824u;
    {
        const bool branch_taken_0x12a824 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x12A828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A824u;
        // 0x12a828: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a824) {
            ctx->pc = 0x12A800u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_12a800;
        }
    }
    ctx->pc = 0x12A82Cu;
label_12a82c:
    // 0x12a82c: 0x8e420c7c  lw          $v0, 0xC7C($s2)
    ctx->pc = 0x12a82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 3196)));
label_12a830:
    // 0x12a830: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_12a834:
    if (ctx->pc == 0x12A834u) {
        ctx->pc = 0x12A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A830u;
        // 0x12a834: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A838u;
        goto label_12a838;
    }
    ctx->pc = 0x12A830u;
    {
        const bool branch_taken_0x12a830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A830u;
        // 0x12a834: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a830) {
            ctx->pc = 0x12A83Cu;
            goto label_12a83c;
        }
    }
    ctx->pc = 0x12A838u;
label_12a838:
    // 0x12a838: 0xae222d88  sw          $v0, 0x2D88($s1)
    ctx->pc = 0x12a838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11656), GPR_U32(ctx, 2));
label_12a83c:
    // 0x12a83c: 0x8e222d88  lw          $v0, 0x2D88($s1)
    ctx->pc = 0x12a83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11656)));
label_12a840:
    // 0x12a840: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_12a844:
    if (ctx->pc == 0x12A844u) {
        ctx->pc = 0x12A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A840u;
        // 0x12a844: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A848u;
        goto label_12a848;
    }
    ctx->pc = 0x12A840u;
    {
        const bool branch_taken_0x12a840 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x12A844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A840u;
        // 0x12a844: 0x8fa30040  lw          $v1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a840) {
            ctx->pc = 0x12A858u;
            goto label_12a858;
        }
    }
    ctx->pc = 0x12A848u;
label_12a848:
    // 0x12a848: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12a848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12a84c:
    // 0x12a84c: 0xae222d88  sw          $v0, 0x2D88($s1)
    ctx->pc = 0x12a84cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11656), GPR_U32(ctx, 2));
label_12a850:
    // 0x12a850: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x12a850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_12a854:
    // 0x12a854: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x12a854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
label_12a858:
    // 0x12a858: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x12a858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_12a85c:
    // 0x12a85c: 0x8fa500e8  lw          $a1, 0xE8($sp)
    ctx->pc = 0x12a85cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_12a860:
    // 0x12a860: 0x846400b0  lh          $a0, 0xB0($v1)
    ctx->pc = 0x12a860u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 176)));
label_12a864:
    // 0x12a864: 0x8c6200b4  lw          $v0, 0xB4($v1)
    ctx->pc = 0x12a864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
label_12a868:
    // 0x12a868: 0x40f809  jalr        $v0
label_12a86c:
    if (ctx->pc == 0x12A86Cu) {
        ctx->pc = 0x12A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A868u;
        // 0x12a86c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A870u;
        goto label_12a870;
    }
    ctx->pc = 0x12A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A870u);
        ctx->pc = 0x12A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A868u;
        // 0x12a86c: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A868u, 0x12A870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A870u;
label_12a870:
    // 0x12a870: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_12a874:
    if (ctx->pc == 0x12A874u) {
        ctx->pc = 0x12A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A870u;
        // 0x12a874: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A878u;
        goto label_12a878;
    }
    ctx->pc = 0x12A870u;
    {
        const bool branch_taken_0x12a870 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A870u;
        // 0x12a874: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a870) {
            ctx->pc = 0x12A960u;
            goto label_12a960;
        }
    }
    ctx->pc = 0x12A878u;
label_12a878:
    // 0x12a878: 0xc6202be8  lwc1        $f0, 0x2BE8($s1)
    ctx->pc = 0x12a878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a87c:
    // 0x12a87c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x12a87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_12a880:
    // 0x12a880: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x12a880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_12a884:
    // 0x12a884: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x12a884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_12a888:
    // 0x12a888: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x12a888u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_12a88c:
    // 0x12a88c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a88cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a890:
    // 0x12a890: 0x0  nop
    ctx->pc = 0x12a890u;
    // NOP
label_12a894:
    // 0x12a894: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_12a898:
    if (ctx->pc == 0x12A898u) {
        ctx->pc = 0x12A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A894u;
        // 0x12a898: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A89Cu;
        goto label_12a89c;
    }
    ctx->pc = 0x12A894u;
    {
        const bool branch_taken_0x12a894 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A894u;
        // 0x12a898: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a894) {
            ctx->pc = 0x12A8A0u;
            goto label_12a8a0;
        }
    }
    ctx->pc = 0x12A89Cu;
label_12a89c:
    // 0x12a89c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x12a89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_12a8a0:
    // 0x12a8a0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x12a8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a8a4:
    // 0x12a8a4: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_12a8a8:
    if (ctx->pc == 0x12A8A8u) {
        ctx->pc = 0x12A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8A4u;
        // 0x12a8a8: 0xe6202be8  swc1        $f0, 0x2BE8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11240), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8ACu;
        goto label_12a8ac;
    }
    ctx->pc = 0x12A8A4u;
    {
        const bool branch_taken_0x12a8a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8A4u;
        // 0x12a8a8: 0xe6202be8  swc1        $f0, 0x2BE8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 11240), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8a4) {
            ctx->pc = 0x12A8CCu;
            goto label_12a8cc;
        }
    }
    ctx->pc = 0x12A8ACu;
label_12a8ac:
    // 0x12a8ac: 0x8e830048  lw          $v1, 0x48($s4)
    ctx->pc = 0x12a8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_12a8b0:
    // 0x12a8b0: 0x26850044  addiu       $a1, $s4, 0x44
    ctx->pc = 0x12a8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 68));
label_12a8b4:
    // 0x12a8b4: 0x84640080  lh          $a0, 0x80($v1)
    ctx->pc = 0x12a8b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 128)));
label_12a8b8:
    // 0x12a8b8: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x12a8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
label_12a8bc:
    // 0x12a8bc: 0x40f809  jalr        $v0
label_12a8c0:
    if (ctx->pc == 0x12A8C0u) {
        ctx->pc = 0x12A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8BCu;
        // 0x12a8c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8C4u;
        goto label_12a8c4;
    }
    ctx->pc = 0x12A8BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A8C4u);
        ctx->pc = 0x12A8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8BCu;
        // 0x12a8c0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12A8BCu, 0x12A8C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12A8C4u;
label_12a8c4:
    // 0x12a8c4: 0x10000002  b           . + 4 + (0x2 << 2)
label_12a8c8:
    if (ctx->pc == 0x12A8C8u) {
        ctx->pc = 0x12A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8C4u;
        // 0x12a8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8CCu;
        goto label_12a8cc;
    }
    ctx->pc = 0x12A8C4u;
    {
        const bool branch_taken_0x12a8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8C4u;
        // 0x12a8c8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a8c4) {
            ctx->pc = 0x12A8D0u;
            goto label_12a8d0;
        }
    }
    ctx->pc = 0x12A8CCu;
label_12a8cc:
    // 0x12a8cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x12a8ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12a8d0:
    // 0x12a8d0: 0x8e222bec  lw          $v0, 0x2BEC($s1)
    ctx->pc = 0x12a8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11244)));
label_12a8d4:
    // 0x12a8d4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_12a8d8:
    if (ctx->pc == 0x12A8D8u) {
        ctx->pc = 0x12A8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8D4u;
        // 0x12a8d8: 0xc6210c1c  lwc1        $f1, 0xC1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8DCu;
        goto label_12a8dc;
    }
    ctx->pc = 0x12A8D4u;
    {
        const bool branch_taken_0x12a8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8d4) {
            ctx->pc = 0x12A8D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8D4u;
            // 0x12a8d8: 0xc6210c1c  lwc1        $f1, 0xC1C($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A904u;
            goto label_12a904;
        }
    }
    ctx->pc = 0x12A8DCu;
label_12a8dc:
    // 0x12a8dc: 0xc6212be8  lwc1        $f1, 0x2BE8($s1)
    ctx->pc = 0x12a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a8e0:
    // 0x12a8e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a8e4:
    // 0x12a8e4: 0x0  nop
    ctx->pc = 0x12a8e4u;
    // NOP
label_12a8e8:
    // 0x12a8e8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x12a8e8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a8ec:
    // 0x12a8ec: 0x0  nop
    ctx->pc = 0x12a8ecu;
    // NOP
label_12a8f0:
    // 0x12a8f0: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_12a8f4:
    if (ctx->pc == 0x12A8F4u) {
        ctx->pc = 0x12A8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F0u;
        // 0x12a8f4: 0x8e262bc4  lw          $a2, 0x2BC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A8F8u;
        goto label_12a8f8;
    }
    ctx->pc = 0x12A8F0u;
    {
        const bool branch_taken_0x12a8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x12a8f0) {
            ctx->pc = 0x12A8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8F0u;
            // 0x12a8f4: 0x8e262bc4  lw          $a2, 0x2BC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A964u;
            goto label_12a964;
        }
    }
    ctx->pc = 0x12A8F8u;
label_12a8f8:
    // 0x12a8f8: 0x5460001a  bnel        $v1, $zero, . + 4 + (0x1A << 2)
label_12a8fc:
    if (ctx->pc == 0x12A8FCu) {
        ctx->pc = 0x12A8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A8F8u;
        // 0x12a8fc: 0x8e262bc4  lw          $a2, 0x2BC4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A900u;
        goto label_12a900;
    }
    ctx->pc = 0x12A8F8u;
    {
        const bool branch_taken_0x12a8f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x12a8f8) {
            ctx->pc = 0x12A8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A8F8u;
            // 0x12a8fc: 0x8e262bc4  lw          $a2, 0x2BC4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A964u;
            goto label_12a964;
        }
    }
    ctx->pc = 0x12A900u;
label_12a900:
    // 0x12a900: 0xc6210c1c  lwc1        $f1, 0xC1C($s1)
    ctx->pc = 0x12a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 3100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a904:
    // 0x12a904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_12a908:
    // 0x12a908: 0x0  nop
    ctx->pc = 0x12a908u;
    // NOP
label_12a90c:
    // 0x12a90c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x12a90cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_12a910:
    // 0x12a910: 0x0  nop
    ctx->pc = 0x12a910u;
    // NOP
label_12a914:
    // 0x12a914: 0x45000011  bc1f        . + 4 + (0x11 << 2)
label_12a918:
    if (ctx->pc == 0x12A918u) {
        ctx->pc = 0x12A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A914u;
        // 0x12a918: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A91Cu;
        goto label_12a91c;
    }
    ctx->pc = 0x12A914u;
    {
        const bool branch_taken_0x12a914 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A914u;
        // 0x12a918: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a914) {
            ctx->pc = 0x12A95Cu;
            goto label_12a95c;
        }
    }
    ctx->pc = 0x12A91Cu;
label_12a91c:
    // 0x12a91c: 0xc6400bd8  lwc1        $f0, 0xBD8($s2)
    ctx->pc = 0x12a91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 3032)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12a920:
    // 0x12a920: 0xc6212bd4  lwc1        $f1, 0x2BD4($s1)
    ctx->pc = 0x12a920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12a924:
    // 0x12a924: 0xae202bc4  sw          $zero, 0x2BC4($s1)
    ctx->pc = 0x12a924u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11204), GPR_U32(ctx, 0));
label_12a928:
    // 0x12a928: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x12a928u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_12a92c:
    // 0x12a92c: 0x8e242d50  lw          $a0, 0x2D50($s1)
    ctx->pc = 0x12a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11600)));
label_12a930:
    // 0x12a930: 0xe6200c1c  swc1        $f0, 0xC1C($s1)
    ctx->pc = 0x12a930u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 3100), bits); }
label_12a934:
    // 0x12a934: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x12a934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_12a938:
    // 0x12a938: 0x50820009  beql        $a0, $v0, . + 4 + (0x9 << 2)
label_12a93c:
    if (ctx->pc == 0x12A93Cu) {
        ctx->pc = 0x12A93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A938u;
        // 0x12a93c: 0xae202bec  sw          $zero, 0x2BEC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A940u;
        goto label_12a940;
    }
    ctx->pc = 0x12A938u;
    {
        const bool branch_taken_0x12a938 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x12a938) {
            ctx->pc = 0x12A93Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12A938u;
            // 0x12a93c: 0xae202bec  sw          $zero, 0x2BEC($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 11244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12A960u;
            goto label_12a960;
        }
    }
    ctx->pc = 0x12A940u;
label_12a940:
    // 0x12a940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_12a944:
    // 0x12a944: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_12a948:
    if (ctx->pc == 0x12A948u) {
        ctx->pc = 0x12A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A944u;
        // 0x12a948: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A94Cu;
        goto label_12a94c;
    }
    ctx->pc = 0x12A944u;
    {
        const bool branch_taken_0x12a944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A944u;
        // 0x12a948: 0x27a20020  addiu       $v0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a944) {
            ctx->pc = 0x12A95Cu;
            goto label_12a95c;
        }
    }
    ctx->pc = 0x12A94Cu;
label_12a94c:
    // 0x12a94c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x12a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_12a950:
    // 0x12a950: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12a950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12a954:
    // 0x12a954: 0xc07fd18  jal         func_1FF460
label_12a958:
    if (ctx->pc == 0x12A958u) {
        ctx->pc = 0x12A958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A954u;
        // 0x12a958: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A95Cu;
        goto label_12a95c;
    }
    ctx->pc = 0x12A954u;
    SET_GPR_U32(ctx, 31, 0x12A95Cu);
    ctx->pc = 0x12A958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A954u;
    // 0x12a958: 0xac400004  sw          $zero, 0x4($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12A954u, 0x12A95Cu)) {
        return;
    }
    ctx->pc = 0x12A95Cu;
label_12a95c:
    // 0x12a95c: 0xae202bec  sw          $zero, 0x2BEC($s1)
    ctx->pc = 0x12a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11244), GPR_U32(ctx, 0));
label_12a960:
    // 0x12a960: 0x8e262bc4  lw          $a2, 0x2BC4($s1)
    ctx->pc = 0x12a960u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11204)));
label_12a964:
    // 0x12a964: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x12a964u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_12a968:
    // 0x12a968: 0xc067fca  jal         func_19FF28
label_12a96c:
    if (ctx->pc == 0x12A96Cu) {
        ctx->pc = 0x12A96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A968u;
        // 0x12a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A970u;
        goto label_12a970;
    }
    ctx->pc = 0x12A968u;
    SET_GPR_U32(ctx, 31, 0x12A970u);
    ctx->pc = 0x12A96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A968u;
    // 0x12a96c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A968u, 0x12A970u)) {
        return;
    }
    ctx->pc = 0x12A970u;
label_12a970:
    // 0x12a970: 0x8e262bc8  lw          $a2, 0x2BC8($s1)
    ctx->pc = 0x12a970u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11208)));
label_12a974:
    // 0x12a974: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_12a978:
    // 0x12a978: 0xc067fca  jal         func_19FF28
label_12a97c:
    if (ctx->pc == 0x12A97Cu) {
        ctx->pc = 0x12A97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A978u;
        // 0x12a97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A980u;
        goto label_12a980;
    }
    ctx->pc = 0x12A978u;
    SET_GPR_U32(ctx, 31, 0x12A980u);
    ctx->pc = 0x12A97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A978u;
    // 0x12a97c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A978u, 0x12A980u)) {
        return;
    }
    ctx->pc = 0x12A980u;
label_12a980:
    // 0x12a980: 0x8e4201d8  lw          $v0, 0x1D8($s2)
    ctx->pc = 0x12a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 472)));
label_12a984:
    // 0x12a984: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x12a984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_12a988:
    // 0x12a988: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12a98c:
    // 0x12a98c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a990:
    // 0x12a990: 0xc067fca  jal         func_19FF28
label_12a994:
    if (ctx->pc == 0x12A994u) {
        ctx->pc = 0x12A994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A990u;
        // 0x12a994: 0xae222a70  sw          $v0, 0x2A70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 10864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A998u;
        goto label_12a998;
    }
    ctx->pc = 0x12A990u;
    SET_GPR_U32(ctx, 31, 0x12A998u);
    ctx->pc = 0x12A994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A990u;
    // 0x12a994: 0xae222a70  sw          $v0, 0x2A70($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 10864), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A990u, 0x12A998u)) {
        return;
    }
    ctx->pc = 0x12A998u;
label_12a998:
    // 0x12a998: 0x8fa60048  lw          $a2, 0x48($sp)
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12a99c:
    // 0x12a99c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9a0:
    // 0x12a9a0: 0xc067fca  jal         func_19FF28
label_12a9a4:
    if (ctx->pc == 0x12A9A4u) {
        ctx->pc = 0x12A9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9A0u;
        // 0x12a9a4: 0x8fa50108  lw          $a1, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9A8u;
        goto label_12a9a8;
    }
    ctx->pc = 0x12A9A0u;
    SET_GPR_U32(ctx, 31, 0x12A9A8u);
    ctx->pc = 0x12A9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9A0u;
    // 0x12a9a4: 0x8fa50108  lw          $a1, 0x108($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9A0u, 0x12A9A8u)) {
        return;
    }
    ctx->pc = 0x12A9A8u;
label_12a9a8:
    // 0x12a9a8: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x12a9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12a9ac:
    // 0x12a9ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9b0:
    // 0x12a9b0: 0xc067fca  jal         func_19FF28
label_12a9b4:
    if (ctx->pc == 0x12A9B4u) {
        ctx->pc = 0x12A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9B0u;
        // 0x12a9b4: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9B8u;
        goto label_12a9b8;
    }
    ctx->pc = 0x12A9B0u;
    SET_GPR_U32(ctx, 31, 0x12A9B8u);
    ctx->pc = 0x12A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9B0u;
    // 0x12a9b4: 0x8fa5010c  lw          $a1, 0x10C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9B0u, 0x12A9B8u)) {
        return;
    }
    ctx->pc = 0x12A9B8u;
label_12a9b8:
    // 0x12a9b8: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x12a9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_12a9bc:
    // 0x12a9bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9c0:
    // 0x12a9c0: 0xc067fca  jal         func_19FF28
label_12a9c4:
    if (ctx->pc == 0x12A9C4u) {
        ctx->pc = 0x12A9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9C0u;
        // 0x12a9c4: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9C8u;
        goto label_12a9c8;
    }
    ctx->pc = 0x12A9C0u;
    SET_GPR_U32(ctx, 31, 0x12A9C8u);
    ctx->pc = 0x12A9C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9C0u;
    // 0x12a9c4: 0x8fa50110  lw          $a1, 0x110($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9C0u, 0x12A9C8u)) {
        return;
    }
    ctx->pc = 0x12A9C8u;
label_12a9c8:
    // 0x12a9c8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x12a9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12a9cc:
    // 0x12a9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9d0:
    // 0x12a9d0: 0xc067fca  jal         func_19FF28
label_12a9d4:
    if (ctx->pc == 0x12A9D4u) {
        ctx->pc = 0x12A9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9D0u;
        // 0x12a9d4: 0x8fa50114  lw          $a1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9D8u;
        goto label_12a9d8;
    }
    ctx->pc = 0x12A9D0u;
    SET_GPR_U32(ctx, 31, 0x12A9D8u);
    ctx->pc = 0x12A9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9D0u;
    // 0x12a9d4: 0x8fa50114  lw          $a1, 0x114($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9D0u, 0x12A9D8u)) {
        return;
    }
    ctx->pc = 0x12A9D8u;
label_12a9d8:
    // 0x12a9d8: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x12a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_12a9dc:
    // 0x12a9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9e0:
    // 0x12a9e0: 0xc067fca  jal         func_19FF28
label_12a9e4:
    if (ctx->pc == 0x12A9E4u) {
        ctx->pc = 0x12A9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9E0u;
        // 0x12a9e4: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9E8u;
        goto label_12a9e8;
    }
    ctx->pc = 0x12A9E0u;
    SET_GPR_U32(ctx, 31, 0x12A9E8u);
    ctx->pc = 0x12A9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9E0u;
    // 0x12a9e4: 0x8fa50118  lw          $a1, 0x118($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9E0u, 0x12A9E8u)) {
        return;
    }
    ctx->pc = 0x12A9E8u;
label_12a9e8:
    // 0x12a9e8: 0x8fa60074  lw          $a2, 0x74($sp)
    ctx->pc = 0x12a9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_12a9ec:
    // 0x12a9ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12a9f0:
    // 0x12a9f0: 0xc067fca  jal         func_19FF28
label_12a9f4:
    if (ctx->pc == 0x12A9F4u) {
        ctx->pc = 0x12A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12A9F0u;
        // 0x12a9f4: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12A9F8u;
        goto label_12a9f8;
    }
    ctx->pc = 0x12A9F0u;
    SET_GPR_U32(ctx, 31, 0x12A9F8u);
    ctx->pc = 0x12A9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12A9F0u;
    // 0x12a9f4: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12A9F0u, 0x12A9F8u)) {
        return;
    }
    ctx->pc = 0x12A9F8u;
label_12a9f8:
    // 0x12a9f8: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x12a9f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_12a9fc:
    // 0x12a9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12a9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa00:
    // 0x12aa00: 0xc067fca  jal         func_19FF28
label_12aa04:
    if (ctx->pc == 0x12AA04u) {
        ctx->pc = 0x12AA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA00u;
        // 0x12aa04: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA08u;
        goto label_12aa08;
    }
    ctx->pc = 0x12AA00u;
    SET_GPR_U32(ctx, 31, 0x12AA08u);
    ctx->pc = 0x12AA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA00u;
    // 0x12aa04: 0x8fa50120  lw          $a1, 0x120($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AA00u, 0x12AA08u)) {
        return;
    }
    ctx->pc = 0x12AA08u;
label_12aa08:
    // 0x12aa08: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x12aa08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_12aa0c:
    // 0x12aa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12aa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12aa10:
    // 0x12aa10: 0xc067fca  jal         func_19FF28
label_12aa14:
    if (ctx->pc == 0x12AA14u) {
        ctx->pc = 0x12AA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA10u;
        // 0x12aa14: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA18u;
        goto label_12aa18;
    }
    ctx->pc = 0x12AA10u;
    SET_GPR_U32(ctx, 31, 0x12AA18u);
    ctx->pc = 0x12AA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA10u;
    // 0x12aa14: 0x8fa500d8  lw          $a1, 0xD8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 216)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AA10u, 0x12AA18u)) {
        return;
    }
    ctx->pc = 0x12AA18u;
label_12aa18:
    // 0x12aa18: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12aa18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_12aa1c:
    // 0x12aa1c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aa20:
    if (ctx->pc == 0x12AA20u) {
        ctx->pc = 0x12AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA1Cu;
        // 0x12aa20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA24u;
        goto label_12aa24;
    }
    ctx->pc = 0x12AA1Cu;
    {
        const bool branch_taken_0x12aa1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA1Cu;
        // 0x12aa20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa1c) {
            ctx->pc = 0x12AA30u;
            goto label_12aa30;
        }
    }
    ctx->pc = 0x12AA24u;
label_12aa24:
    // 0x12aa24: 0x8e222a4c  lw          $v0, 0x2A4C($s1)
    ctx->pc = 0x12aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10828)));
label_12aa28:
    // 0x12aa28: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aa28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aa2c:
    // 0x12aa2c: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aa2cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aa30:
    // 0x12aa30: 0x8fa500dc  lw          $a1, 0xDC($sp)
    ctx->pc = 0x12aa30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 220)));
label_12aa34:
    // 0x12aa34: 0xc067fca  jal         func_19FF28
label_12aa38:
    if (ctx->pc == 0x12AA38u) {
        ctx->pc = 0x12AA38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA34u;
        // 0x12aa38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA3Cu;
        goto label_12aa3c;
    }
    ctx->pc = 0x12AA34u;
    SET_GPR_U32(ctx, 31, 0x12AA3Cu);
    ctx->pc = 0x12AA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA34u;
    // 0x12aa38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AA34u, 0x12AA3Cu)) {
        return;
    }
    ctx->pc = 0x12AA3Cu;
label_12aa3c:
    // 0x12aa3c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x12aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_12aa40:
    // 0x12aa40: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aa44:
    if (ctx->pc == 0x12AA44u) {
        ctx->pc = 0x12AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA40u;
        // 0x12aa44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA48u;
        goto label_12aa48;
    }
    ctx->pc = 0x12AA40u;
    {
        const bool branch_taken_0x12aa40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA40u;
        // 0x12aa44: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa40) {
            ctx->pc = 0x12AA54u;
            goto label_12aa54;
        }
    }
    ctx->pc = 0x12AA48u;
label_12aa48:
    // 0x12aa48: 0x8e222a30  lw          $v0, 0x2A30($s1)
    ctx->pc = 0x12aa48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10800)));
label_12aa4c:
    // 0x12aa4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aa4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aa50:
    // 0x12aa50: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aa50u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aa54:
    // 0x12aa54: 0x8fa500e0  lw          $a1, 0xE0($sp)
    ctx->pc = 0x12aa54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_12aa58:
    // 0x12aa58: 0xc067fca  jal         func_19FF28
label_12aa5c:
    if (ctx->pc == 0x12AA5Cu) {
        ctx->pc = 0x12AA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA58u;
        // 0x12aa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA60u;
        goto label_12aa60;
    }
    ctx->pc = 0x12AA58u;
    SET_GPR_U32(ctx, 31, 0x12AA60u);
    ctx->pc = 0x12AA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA58u;
    // 0x12aa5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AA58u, 0x12AA60u)) {
        return;
    }
    ctx->pc = 0x12AA60u;
label_12aa60:
    // 0x12aa60: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_12aa64:
    // 0x12aa64: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aa68:
    if (ctx->pc == 0x12AA68u) {
        ctx->pc = 0x12AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA64u;
        // 0x12aa68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA6Cu;
        goto label_12aa6c;
    }
    ctx->pc = 0x12AA64u;
    {
        const bool branch_taken_0x12aa64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA64u;
        // 0x12aa68: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa64) {
            ctx->pc = 0x12AA78u;
            goto label_12aa78;
        }
    }
    ctx->pc = 0x12AA6Cu;
label_12aa6c:
    // 0x12aa6c: 0x8e222a2c  lw          $v0, 0x2A2C($s1)
    ctx->pc = 0x12aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10796)));
label_12aa70:
    // 0x12aa70: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aa74:
    // 0x12aa74: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aa74u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aa78:
    // 0x12aa78: 0x8fa500e4  lw          $a1, 0xE4($sp)
    ctx->pc = 0x12aa78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_12aa7c:
    // 0x12aa7c: 0xc067fca  jal         func_19FF28
label_12aa80:
    if (ctx->pc == 0x12AA80u) {
        ctx->pc = 0x12AA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA7Cu;
        // 0x12aa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA84u;
        goto label_12aa84;
    }
    ctx->pc = 0x12AA7Cu;
    SET_GPR_U32(ctx, 31, 0x12AA84u);
    ctx->pc = 0x12AA80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AA7Cu;
    // 0x12aa80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AA7Cu, 0x12AA84u)) {
        return;
    }
    ctx->pc = 0x12AA84u;
label_12aa84:
    // 0x12aa84: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x12aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_12aa88:
    // 0x12aa88: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aa8c:
    if (ctx->pc == 0x12AA8Cu) {
        ctx->pc = 0x12AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA88u;
        // 0x12aa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AA90u;
        goto label_12aa90;
    }
    ctx->pc = 0x12AA88u;
    {
        const bool branch_taken_0x12aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AA8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AA88u;
        // 0x12aa8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aa88) {
            ctx->pc = 0x12AA9Cu;
            goto label_12aa9c;
        }
    }
    ctx->pc = 0x12AA90u;
label_12aa90:
    // 0x12aa90: 0x8e222a24  lw          $v0, 0x2A24($s1)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10788)));
label_12aa94:
    // 0x12aa94: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aa94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aa98:
    // 0x12aa98: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aa98u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aa9c:
    // 0x12aa9c: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_12aaa0:
    // 0x12aaa0: 0xc067fca  jal         func_19FF28
label_12aaa4:
    if (ctx->pc == 0x12AAA4u) {
        ctx->pc = 0x12AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAA0u;
        // 0x12aaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAA8u;
        goto label_12aaa8;
    }
    ctx->pc = 0x12AAA0u;
    SET_GPR_U32(ctx, 31, 0x12AAA8u);
    ctx->pc = 0x12AAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAA0u;
    // 0x12aaa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AAA0u, 0x12AAA8u)) {
        return;
    }
    ctx->pc = 0x12AAA8u;
label_12aaa8:
    // 0x12aaa8: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x12aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_12aaac:
    // 0x12aaac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aab0:
    if (ctx->pc == 0x12AAB0u) {
        ctx->pc = 0x12AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAACu;
        // 0x12aab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAB4u;
        goto label_12aab4;
    }
    ctx->pc = 0x12AAACu;
    {
        const bool branch_taken_0x12aaac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AAB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAACu;
        // 0x12aab0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaac) {
            ctx->pc = 0x12AAC0u;
            goto label_12aac0;
        }
    }
    ctx->pc = 0x12AAB4u;
label_12aab4:
    // 0x12aab4: 0x8e222a28  lw          $v0, 0x2A28($s1)
    ctx->pc = 0x12aab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10792)));
label_12aab8:
    // 0x12aab8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aabc:
    // 0x12aabc: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aabcu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aac0:
    // 0x12aac0: 0x8fa500f0  lw          $a1, 0xF0($sp)
    ctx->pc = 0x12aac0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_12aac4:
    // 0x12aac4: 0xc067fca  jal         func_19FF28
label_12aac8:
    if (ctx->pc == 0x12AAC8u) {
        ctx->pc = 0x12AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAC4u;
        // 0x12aac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AACCu;
        goto label_12aacc;
    }
    ctx->pc = 0x12AAC4u;
    SET_GPR_U32(ctx, 31, 0x12AACCu);
    ctx->pc = 0x12AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAC4u;
    // 0x12aac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AAC4u, 0x12AACCu)) {
        return;
    }
    ctx->pc = 0x12AACCu;
label_12aacc:
    // 0x12aacc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x12aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_12aad0:
    // 0x12aad0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aad4:
    if (ctx->pc == 0x12AAD4u) {
        ctx->pc = 0x12AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAD0u;
        // 0x12aad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAD8u;
        goto label_12aad8;
    }
    ctx->pc = 0x12AAD0u;
    {
        const bool branch_taken_0x12aad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AAD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAD0u;
        // 0x12aad4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aad0) {
            ctx->pc = 0x12AAE4u;
            goto label_12aae4;
        }
    }
    ctx->pc = 0x12AAD8u;
label_12aad8:
    // 0x12aad8: 0x8e222a54  lw          $v0, 0x2A54($s1)
    ctx->pc = 0x12aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10836)));
label_12aadc:
    // 0x12aadc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12aadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12aae0:
    // 0x12aae0: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12aae0u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12aae4:
    // 0x12aae4: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x12aae4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
label_12aae8:
    // 0x12aae8: 0xc067fca  jal         func_19FF28
label_12aaec:
    if (ctx->pc == 0x12AAECu) {
        ctx->pc = 0x12AAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAE8u;
        // 0x12aaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAF0u;
        goto label_12aaf0;
    }
    ctx->pc = 0x12AAE8u;
    SET_GPR_U32(ctx, 31, 0x12AAF0u);
    ctx->pc = 0x12AAECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AAE8u;
    // 0x12aaec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AAE8u, 0x12AAF0u)) {
        return;
    }
    ctx->pc = 0x12AAF0u;
label_12aaf0:
    // 0x12aaf0: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x12aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_12aaf4:
    // 0x12aaf4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12aaf8:
    if (ctx->pc == 0x12AAF8u) {
        ctx->pc = 0x12AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAF4u;
        // 0x12aaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AAFCu;
        goto label_12aafc;
    }
    ctx->pc = 0x12AAF4u;
    {
        const bool branch_taken_0x12aaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AAF4u;
        // 0x12aaf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12aaf4) {
            ctx->pc = 0x12AB08u;
            goto label_12ab08;
        }
    }
    ctx->pc = 0x12AAFCu;
label_12aafc:
    // 0x12aafc: 0x8e222a58  lw          $v0, 0x2A58($s1)
    ctx->pc = 0x12aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10840)));
label_12ab00:
    // 0x12ab00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12ab00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12ab04:
    // 0x12ab04: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12ab04u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12ab08:
    // 0x12ab08: 0x8fa500f8  lw          $a1, 0xF8($sp)
    ctx->pc = 0x12ab08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_12ab0c:
    // 0x12ab0c: 0xc067fca  jal         func_19FF28
label_12ab10:
    if (ctx->pc == 0x12AB10u) {
        ctx->pc = 0x12AB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB0Cu;
        // 0x12ab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB14u;
        goto label_12ab14;
    }
    ctx->pc = 0x12AB0Cu;
    SET_GPR_U32(ctx, 31, 0x12AB14u);
    ctx->pc = 0x12AB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB0Cu;
    // 0x12ab10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AB0Cu, 0x12AB14u)) {
        return;
    }
    ctx->pc = 0x12AB14u;
label_12ab14:
    // 0x12ab14: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x12ab14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_12ab18:
    // 0x12ab18: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_12ab1c:
    if (ctx->pc == 0x12AB1Cu) {
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB20u;
        goto label_12ab20;
    }
    ctx->pc = 0x12AB18u;
    {
        const bool branch_taken_0x12ab18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12AB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB18u;
        // 0x12ab1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ab18) {
            ctx->pc = 0x12AB2Cu;
            goto label_12ab2c;
        }
    }
    ctx->pc = 0x12AB20u;
label_12ab20:
    // 0x12ab20: 0x8e222a50  lw          $v0, 0x2A50($s1)
    ctx->pc = 0x12ab20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10832)));
label_12ab24:
    // 0x12ab24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x12ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_12ab28:
    // 0x12ab28: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x12ab28u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_12ab2c:
    // 0x12ab2c: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x12ab2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_12ab30:
    // 0x12ab30: 0xc067fca  jal         func_19FF28
label_12ab34:
    if (ctx->pc == 0x12AB34u) {
        ctx->pc = 0x12AB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB30u;
        // 0x12ab34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB38u;
        goto label_12ab38;
    }
    ctx->pc = 0x12AB30u;
    SET_GPR_U32(ctx, 31, 0x12AB38u);
    ctx->pc = 0x12AB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB30u;
    // 0x12ab34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AB30u, 0x12AB38u)) {
        return;
    }
    ctx->pc = 0x12AB38u;
label_12ab38:
    // 0x12ab38: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x12ab38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_12ab3c:
    // 0x12ab3c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x12ab3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12ab40:
    // 0x12ab40: 0xc067fca  jal         func_19FF28
label_12ab44:
    if (ctx->pc == 0x12AB44u) {
        ctx->pc = 0x12AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB40u;
        // 0x12ab44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB48u;
        goto label_12ab48;
    }
    ctx->pc = 0x12AB40u;
    SET_GPR_U32(ctx, 31, 0x12AB48u);
    ctx->pc = 0x12AB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB40u;
    // 0x12ab44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AB40u, 0x12AB48u)) {
        return;
    }
    ctx->pc = 0x12AB48u;
label_12ab48:
    // 0x12ab48: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x12ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_12ab4c:
    // 0x12ab4c: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x12ab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
label_12ab50:
    // 0x12ab50: 0x846400e8  lh          $a0, 0xE8($v1)
    ctx->pc = 0x12ab50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 232)));
label_12ab54:
    // 0x12ab54: 0x8c6200ec  lw          $v0, 0xEC($v1)
    ctx->pc = 0x12ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 236)));
label_12ab58:
    // 0x12ab58: 0x40f809  jalr        $v0
label_12ab5c:
    if (ctx->pc == 0x12AB5Cu) {
        ctx->pc = 0x12AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB58u;
        // 0x12ab5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB60u;
        goto label_12ab60;
    }
    ctx->pc = 0x12AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12AB60u);
        ctx->pc = 0x12AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB58u;
        // 0x12ab5c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AB58u, 0x12AB60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x12AB60u;
label_12ab60:
    // 0x12ab60: 0x8fa50104  lw          $a1, 0x104($sp)
    ctx->pc = 0x12ab60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
label_12ab64:
    // 0x12ab64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12ab64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_12ab68:
    // 0x12ab68: 0xc067fca  jal         func_19FF28
label_12ab6c:
    if (ctx->pc == 0x12AB6Cu) {
        ctx->pc = 0x12AB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AB68u;
        // 0x12ab6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AB70u;
        goto label_12ab70;
    }
    ctx->pc = 0x12AB68u;
    SET_GPR_U32(ctx, 31, 0x12AB70u);
    ctx->pc = 0x12AB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AB68u;
    // 0x12ab6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FF28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x19FF28u, 0x12AB68u, 0x12AB70u)) {
        return;
    }
    ctx->pc = 0x12AB70u;
label_12ab70:
    // 0x12ab70: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x12ab70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12ab74:
    // 0x12ab74: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x12ab74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12ab78:
    // 0x12ab78: 0x6ba2004f  ldl         $v0, 0x4F($sp)
    ctx->pc = 0x12ab78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12ab7c:
    // 0x12ab7c: 0x6fa20048  ldr         $v0, 0x48($sp)
    ctx->pc = 0x12ab7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12ab80:
    // 0x12ab80: 0x6ba30057  ldl         $v1, 0x57($sp)
    ctx->pc = 0x12ab80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12ab84:
    // 0x12ab84: 0x6fa30050  ldr         $v1, 0x50($sp)
    ctx->pc = 0x12ab84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12ab88:
    // 0x12ab88: 0x6ba4005f  ldl         $a0, 0x5F($sp)
    ctx->pc = 0x12ab88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 95); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12ab8c:
    // 0x12ab8c: 0x6fa40058  ldr         $a0, 0x58($sp)
    ctx->pc = 0x12ab8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 88); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12ab90:
    // 0x12ab90: 0xb2272a2b  sdl         $a3, 0x2A2B($s1)
    ctx->pc = 0x12ab90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10795); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ab94:
    // 0x12ab94: 0xb6272a24  sdr         $a3, 0x2A24($s1)
    ctx->pc = 0x12ab94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10788); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ab98:
    // 0x12ab98: 0xb2222a33  sdl         $v0, 0x2A33($s1)
    ctx->pc = 0x12ab98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10803); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ab9c:
    // 0x12ab9c: 0xb6222a2c  sdr         $v0, 0x2A2C($s1)
    ctx->pc = 0x12ab9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10796); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12aba0:
    // 0x12aba0: 0xb2232a3b  sdl         $v1, 0x2A3B($s1)
    ctx->pc = 0x12aba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12aba4:
    // 0x12aba4: 0xb6232a34  sdr         $v1, 0x2A34($s1)
    ctx->pc = 0x12aba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10804); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12aba8:
    // 0x12aba8: 0xb2242a43  sdl         $a0, 0x2A43($s1)
    ctx->pc = 0x12aba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10819); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abac:
    // 0x12abac: 0xb6242a3c  sdr         $a0, 0x2A3C($s1)
    ctx->pc = 0x12abacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10812); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abb0:
    // 0x12abb0: 0x6ba70067  ldl         $a3, 0x67($sp)
    ctx->pc = 0x12abb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12abb4:
    // 0x12abb4: 0x6fa70060  ldr         $a3, 0x60($sp)
    ctx->pc = 0x12abb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12abb8:
    // 0x12abb8: 0x6ba2006f  ldl         $v0, 0x6F($sp)
    ctx->pc = 0x12abb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 111); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12abbc:
    // 0x12abbc: 0x6fa20068  ldr         $v0, 0x68($sp)
    ctx->pc = 0x12abbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 104); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12abc0:
    // 0x12abc0: 0x6ba30077  ldl         $v1, 0x77($sp)
    ctx->pc = 0x12abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12abc4:
    // 0x12abc4: 0x6fa30070  ldr         $v1, 0x70($sp)
    ctx->pc = 0x12abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12abc8:
    // 0x12abc8: 0x6ba4007f  ldl         $a0, 0x7F($sp)
    ctx->pc = 0x12abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 127); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12abcc:
    // 0x12abcc: 0x6fa40078  ldr         $a0, 0x78($sp)
    ctx->pc = 0x12abccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 120); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12abd0:
    // 0x12abd0: 0xb2272a4b  sdl         $a3, 0x2A4B($s1)
    ctx->pc = 0x12abd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10827); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abd4:
    // 0x12abd4: 0xb6272a44  sdr         $a3, 0x2A44($s1)
    ctx->pc = 0x12abd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10820); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abd8:
    // 0x12abd8: 0xb2222a53  sdl         $v0, 0x2A53($s1)
    ctx->pc = 0x12abd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10835); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abdc:
    // 0x12abdc: 0xb6222a4c  sdr         $v0, 0x2A4C($s1)
    ctx->pc = 0x12abdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10828); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abe0:
    // 0x12abe0: 0xb2232a5b  sdl         $v1, 0x2A5B($s1)
    ctx->pc = 0x12abe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10843); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abe4:
    // 0x12abe4: 0xb6232a54  sdr         $v1, 0x2A54($s1)
    ctx->pc = 0x12abe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10836); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abe8:
    // 0x12abe8: 0xb2242a63  sdl         $a0, 0x2A63($s1)
    ctx->pc = 0x12abe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10851); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abec:
    // 0x12abec: 0xb6242a5c  sdr         $a0, 0x2A5C($s1)
    ctx->pc = 0x12abecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 10844); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12abf0:
    // 0x12abf0: 0xc08992e  jal         func_2264B8
label_12abf4:
    if (ctx->pc == 0x12ABF4u) {
        ctx->pc = 0x12ABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABF0u;
        // 0x12abf4: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ABF8u;
        goto label_12abf8;
    }
    ctx->pc = 0x12ABF0u;
    SET_GPR_U32(ctx, 31, 0x12ABF8u);
    ctx->pc = 0x12ABF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ABF0u;
    // 0x12abf4: 0x8e440040  lw          $a0, 0x40($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2264B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2264B8u, 0x12ABF0u, 0x12ABF8u)) {
        return;
    }
    ctx->pc = 0x12ABF8u;
label_12abf8:
    // 0x12abf8: 0x8e222d20  lw          $v0, 0x2D20($s1)
    ctx->pc = 0x12abf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11552)));
label_12abfc:
    // 0x12abfc: 0x5040006e  beql        $v0, $zero, . + 4 + (0x6E << 2)
label_12ac00:
    if (ctx->pc == 0x12AC00u) {
        ctx->pc = 0x12AC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ABFCu;
        // 0x12ac00: 0x8ea21340  lw          $v0, 0x1340($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4928)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC04u;
        goto label_12ac04;
    }
    ctx->pc = 0x12ABFCu;
    {
        const bool branch_taken_0x12abfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12abfc) {
            ctx->pc = 0x12AC00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x12ABFCu;
            // 0x12ac00: 0x8ea21340  lw          $v0, 0x1340($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4928)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x12ADB8u;
            goto label_12adb8;
        }
    }
    ctx->pc = 0x12AC04u;
label_12ac04:
    // 0x12ac04: 0x68450037  ldl         $a1, 0x37($v0)
    ctx->pc = 0x12ac04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_12ac08:
    // 0x12ac08: 0x6c450030  ldr         $a1, 0x30($v0)
    ctx->pc = 0x12ac08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_12ac0c:
    // 0x12ac0c: 0x8c460038  lw          $a2, 0x38($v0)
    ctx->pc = 0x12ac0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_12ac10:
    // 0x12ac10: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x12ac10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac14:
    // 0x12ac14: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x12ac14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac18:
    // 0x12ac18: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x12ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
label_12ac1c:
    // 0x12ac1c: 0xc04f0d4  jal         func_13C350
label_12ac20:
    if (ctx->pc == 0x12AC20u) {
        ctx->pc = 0x12AC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC1Cu;
        // 0x12ac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC24u;
        goto label_12ac24;
    }
    ctx->pc = 0x12AC1Cu;
    SET_GPR_U32(ctx, 31, 0x12AC24u);
    ctx->pc = 0x12AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC1Cu;
    // 0x12ac20: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x12AC1Cu, 0x12AC24u)) {
        return;
    }
    ctx->pc = 0x12AC24u;
label_12ac24:
    // 0x12ac24: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x12ac24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12ac28:
    // 0x12ac28: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x12ac28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12ac2c:
    // 0x12ac2c: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12ac30:
    // 0x12ac30: 0xb3a40037  sdl         $a0, 0x37($sp)
    ctx->pc = 0x12ac30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac34:
    // 0x12ac34: 0xb7a40030  sdr         $a0, 0x30($sp)
    ctx->pc = 0x12ac34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac38:
    // 0x12ac38: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x12ac38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
label_12ac3c:
    // 0x12ac3c: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x12ac3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ac40:
    // 0x12ac40: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x12ac40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ac44:
    // 0x12ac44: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x12ac44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ac48:
    // 0x12ac48: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12ac48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12ac4c:
    // 0x12ac4c: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ac4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ac50:
    // 0x12ac50: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12ac50u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12ac54:
    // 0x12ac54: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ac54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12ac58:
    // 0x12ac58: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x12ac58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_12ac5c:
    // 0x12ac5c: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x12ac5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_12ac60:
    // 0x12ac60: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x12ac60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_12ac64:
    // 0x12ac64: 0xc04f0e2  jal         func_13C388
label_12ac68:
    if (ctx->pc == 0x12AC68u) {
        ctx->pc = 0x12AC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AC64u;
        // 0x12ac68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AC6Cu;
        goto label_12ac6c;
    }
    ctx->pc = 0x12AC64u;
    SET_GPR_U32(ctx, 31, 0x12AC6Cu);
    ctx->pc = 0x12AC68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AC64u;
    // 0x12ac68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C388u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C388u, 0x12AC64u, 0x12AC6Cu)) {
        return;
    }
    ctx->pc = 0x12AC6Cu;
label_12ac6c:
    // 0x12ac6c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x12ac6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_12ac70:
    // 0x12ac70: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x12ac70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_12ac74:
    // 0x12ac74: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x12ac74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12ac78:
    // 0x12ac78: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x12ac78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac7c:
    // 0x12ac7c: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x12ac7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ac80:
    // 0x12ac80: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x12ac80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
label_12ac84:
    // 0x12ac84: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x12ac84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ac88:
    // 0x12ac88: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x12ac88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ac8c:
    // 0x12ac8c: 0xc7a20084  lwc1        $f2, 0x84($sp)
    ctx->pc = 0x12ac8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ac90:
    // 0x12ac90: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12ac90u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12ac94:
    // 0x12ac94: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x12ac94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ac98:
    // 0x12ac98: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12ac98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12ac9c:
    // 0x12ac9c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ac9cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12aca0:
    // 0x12aca0: 0xe7a10080  swc1        $f1, 0x80($sp)
    ctx->pc = 0x12aca0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_12aca4:
    // 0x12aca4: 0xe7a20084  swc1        $f2, 0x84($sp)
    ctx->pc = 0x12aca4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_12aca8:
    // 0x12aca8: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x12aca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_12acac:
    // 0x12acac: 0xc04f0f0  jal         func_13C3C0
label_12acb0:
    if (ctx->pc == 0x12ACB0u) {
        ctx->pc = 0x12ACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ACACu;
        // 0x12acb0: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ACB4u;
        goto label_12acb4;
    }
    ctx->pc = 0x12ACACu;
    SET_GPR_U32(ctx, 31, 0x12ACB4u);
    ctx->pc = 0x12ACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ACACu;
    // 0x12acb0: 0x26240040  addiu       $a0, $s1, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x12ACACu, 0x12ACB4u)) {
        return;
    }
    ctx->pc = 0x12ACB4u;
label_12acb4:
    // 0x12acb4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x12acb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_12acb8:
    // 0x12acb8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x12acb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_12acbc:
    // 0x12acbc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x12acbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12acc0:
    // 0x12acc0: 0xb3a70097  sdl         $a3, 0x97($sp)
    ctx->pc = 0x12acc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12acc4:
    // 0x12acc4: 0xb7a70090  sdr         $a3, 0x90($sp)
    ctx->pc = 0x12acc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12acc8:
    // 0x12acc8: 0xafa30098  sw          $v1, 0x98($sp)
    ctx->pc = 0x12acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
label_12accc:
    // 0x12accc: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x12acccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12acd0:
    // 0x12acd0: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x12acd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12acd4:
    // 0x12acd4: 0xc7a20094  lwc1        $f2, 0x94($sp)
    ctx->pc = 0x12acd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12acd8:
    // 0x12acd8: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x12acd8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_12acdc:
    // 0x12acdc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x12acdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ace0:
    // 0x12ace0: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x12ace0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_12ace4:
    // 0x12ace4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x12ace4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_12ace8:
    // 0x12ace8: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x12ace8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_12acec:
    // 0x12acec: 0xe7a20094  swc1        $f2, 0x94($sp)
    ctx->pc = 0x12acecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_12acf0:
    // 0x12acf0: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x12acf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_12acf4:
    // 0x12acf4: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x12acf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12acf8:
    // 0x12acf8: 0xc7a30080  lwc1        $f3, 0x80($sp)
    ctx->pc = 0x12acf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12acfc:
    // 0x12acfc: 0xc7a20034  lwc1        $f2, 0x34($sp)
    ctx->pc = 0x12acfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ad00:
    // 0x12ad00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12ad00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_12ad04:
    // 0x12ad04: 0xc7a40084  lwc1        $f4, 0x84($sp)
    ctx->pc = 0x12ad04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12ad08:
    // 0x12ad08: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x12ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad0c:
    // 0x12ad0c: 0xc7a30088  lwc1        $f3, 0x88($sp)
    ctx->pc = 0x12ad0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ad10:
    // 0x12ad10: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x12ad10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_12ad14:
    // 0x12ad14: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x12ad14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_12ad18:
    // 0x12ad18: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12ad18u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_12ad1c:
    // 0x12ad1c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x12ad1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_12ad20:
    // 0x12ad20: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x12ad20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_12ad24:
    // 0x12ad24: 0x6ba600c7  ldl         $a2, 0xC7($sp)
    ctx->pc = 0x12ad24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12ad28:
    // 0x12ad28: 0x6fa600c0  ldr         $a2, 0xC0($sp)
    ctx->pc = 0x12ad28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12ad2c:
    // 0x12ad2c: 0x8fa700c8  lw          $a3, 0xC8($sp)
    ctx->pc = 0x12ad2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_12ad30:
    // 0x12ad30: 0xb3a600b7  sdl         $a2, 0xB7($sp)
    ctx->pc = 0x12ad30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 183); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad34:
    // 0x12ad34: 0xb7a600b0  sdr         $a2, 0xB0($sp)
    ctx->pc = 0x12ad34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 176); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad38:
    // 0x12ad38: 0xafa700b8  sw          $a3, 0xB8($sp)
    ctx->pc = 0x12ad38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 7));
label_12ad3c:
    // 0x12ad3c: 0xc7a100b0  lwc1        $f1, 0xB0($sp)
    ctx->pc = 0x12ad3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_12ad40:
    // 0x12ad40: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x12ad40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ad44:
    // 0x12ad44: 0xc7a200b4  lwc1        $f2, 0xB4($sp)
    ctx->pc = 0x12ad44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_12ad48:
    // 0x12ad48: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x12ad48u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_12ad4c:
    // 0x12ad4c: 0xc7a40094  lwc1        $f4, 0x94($sp)
    ctx->pc = 0x12ad4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_12ad50:
    // 0x12ad50: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x12ad50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ad54:
    // 0x12ad54: 0xc7a30098  lwc1        $f3, 0x98($sp)
    ctx->pc = 0x12ad54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_12ad58:
    // 0x12ad58: 0x46041080  add.s       $f2, $f2, $f4
    ctx->pc = 0x12ad58u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[4]);
label_12ad5c:
    // 0x12ad5c: 0xe7a100c0  swc1        $f1, 0xC0($sp)
    ctx->pc = 0x12ad5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_12ad60:
    // 0x12ad60: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x12ad60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_12ad64:
    // 0x12ad64: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x12ad64u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_12ad68:
    // 0x12ad68: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x12ad68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_12ad6c:
    // 0x12ad6c: 0x6ba400c7  ldl         $a0, 0xC7($sp)
    ctx->pc = 0x12ad6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 199); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12ad70:
    // 0x12ad70: 0x6fa400c0  ldr         $a0, 0xC0($sp)
    ctx->pc = 0x12ad70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12ad74:
    // 0x12ad74: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x12ad74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_12ad78:
    // 0x12ad78: 0xb3a400a7  sdl         $a0, 0xA7($sp)
    ctx->pc = 0x12ad78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad7c:
    // 0x12ad7c: 0xb7a400a0  sdr         $a0, 0xA0($sp)
    ctx->pc = 0x12ad7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad80:
    // 0x12ad80: 0xafa500a8  sw          $a1, 0xA8($sp)
    ctx->pc = 0x12ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 5));
label_12ad84:
    // 0x12ad84: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x12ad84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12ad88:
    // 0x12ad88: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x12ad88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12ad8c:
    // 0x12ad8c: 0x8fa300a8  lw          $v1, 0xA8($sp)
    ctx->pc = 0x12ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_12ad90:
    // 0x12ad90: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x12ad90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad94:
    // 0x12ad94: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x12ad94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ad98:
    // 0x12ad98: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_12ad9c:
    // 0x12ad9c: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x12ad9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_12ada0:
    // 0x12ada0: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x12ada0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_12ada4:
    // 0x12ada4: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x12ada4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_12ada8:
    // 0x12ada8: 0xb2260017  sdl         $a2, 0x17($s1)
    ctx->pc = 0x12ada8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12adac:
    // 0x12adac: 0xb6260010  sdr         $a2, 0x10($s1)
    ctx->pc = 0x12adacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12adb0:
    // 0x12adb0: 0xae270018  sw          $a3, 0x18($s1)
    ctx->pc = 0x12adb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 7));
label_12adb4:
    // 0x12adb4: 0x8ea21340  lw          $v0, 0x1340($s5)
    ctx->pc = 0x12adb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4928)));
label_12adb8:
    // 0x12adb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12adb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12adbc:
    // 0x12adbc: 0x8ea31344  lw          $v1, 0x1344($s5)
    ctx->pc = 0x12adbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4932)));
label_12adc0:
    // 0x12adc0: 0x2444fffe  addiu       $a0, $v0, -0x2
    ctx->pc = 0x12adc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_12adc4:
    // 0x12adc4: 0xaea21344  sw          $v0, 0x1344($s5)
    ctx->pc = 0x12adc4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4932), GPR_U32(ctx, 2));
label_12adc8:
    // 0x12adc8: 0x2c630002  sltiu       $v1, $v1, 0x2
    ctx->pc = 0x12adc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_12adcc:
    // 0x12adcc: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_12add0:
    if (ctx->pc == 0x12ADD0u) {
        ctx->pc = 0x12ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADCCu;
        // 0x12add0: 0x2c840002  sltiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADD4u;
        goto label_12add4;
    }
    ctx->pc = 0x12ADCCu;
    {
        const bool branch_taken_0x12adcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADCCu;
        // 0x12add0: 0x2c840002  sltiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12adcc) {
            ctx->pc = 0x12ADD8u;
            goto label_12add8;
        }
    }
    ctx->pc = 0x12ADD4u;
label_12add4:
    // 0x12add4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x12add4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_12add8:
    // 0x12add8: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
label_12addc:
    if (ctx->pc == 0x12ADDCu) {
        ctx->pc = 0x12ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD8u;
        // 0x12addc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADE0u;
        goto label_12ade0;
    }
    ctx->pc = 0x12ADD8u;
    {
        const bool branch_taken_0x12add8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12ADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADD8u;
        // 0x12addc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12add8) {
            ctx->pc = 0x12AE7Cu;
            goto label_12ae7c;
        }
    }
    ctx->pc = 0x12ADE0u;
label_12ade0:
    // 0x12ade0: 0xc04f0cc  jal         func_13C330
label_12ade4:
    if (ctx->pc == 0x12ADE4u) {
        ctx->pc = 0x12ADE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADE0u;
        // 0x12ade4: 0x26300350  addiu       $s0, $s1, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADE8u;
        goto label_12ade8;
    }
    ctx->pc = 0x12ADE0u;
    SET_GPR_U32(ctx, 31, 0x12ADE8u);
    ctx->pc = 0x12ADE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADE0u;
    // 0x12ade4: 0x26300350  addiu       $s0, $s1, 0x350 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12ADE0u, 0x12ADE8u)) {
        return;
    }
    ctx->pc = 0x12ADE8u;
label_12ade8:
    // 0x12ade8: 0x8e252d68  lw          $a1, 0x2D68($s1)
    ctx->pc = 0x12ade8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11624)));
label_12adec:
    // 0x12adec: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x12adecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_12adf0:
    // 0x12adf0: 0xc043c7c  jal         func_10F1F0
label_12adf4:
    if (ctx->pc == 0x12ADF4u) {
        ctx->pc = 0x12ADF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADF0u;
        // 0x12adf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12ADF8u;
        goto label_12adf8;
    }
    ctx->pc = 0x12ADF0u;
    SET_GPR_U32(ctx, 31, 0x12ADF8u);
    ctx->pc = 0x12ADF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADF0u;
    // 0x12adf4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F1F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10F1F0u, 0x12ADF0u, 0x12ADF8u)) {
        return;
    }
    ctx->pc = 0x12ADF8u;
label_12adf8:
    // 0x12adf8: 0xc04f0cc  jal         func_13C330
label_12adfc:
    if (ctx->pc == 0x12ADFCu) {
        ctx->pc = 0x12ADFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12ADF8u;
        // 0x12adfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE00u;
        goto label_12ae00;
    }
    ctx->pc = 0x12ADF8u;
    SET_GPR_U32(ctx, 31, 0x12AE00u);
    ctx->pc = 0x12ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12ADF8u;
    // 0x12adfc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x12ADF8u, 0x12AE00u)) {
        return;
    }
    ctx->pc = 0x12AE00u;
label_12ae00:
    // 0x12ae00: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x12ae00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_12ae04:
    // 0x12ae04: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x12ae04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_12ae08:
    // 0x12ae08: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x12ae08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_12ae0c:
    // 0x12ae0c: 0xb3a40087  sdl         $a0, 0x87($sp)
    ctx->pc = 0x12ae0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ae10:
    // 0x12ae10: 0xb7a40080  sdr         $a0, 0x80($sp)
    ctx->pc = 0x12ae10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ae14:
    // 0x12ae14: 0xafa50088  sw          $a1, 0x88($sp)
    ctx->pc = 0x12ae14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 5));
label_12ae18:
    // 0x12ae18: 0x6ba20087  ldl         $v0, 0x87($sp)
    ctx->pc = 0x12ae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_12ae1c:
    // 0x12ae1c: 0x6fa20080  ldr         $v0, 0x80($sp)
    ctx->pc = 0x12ae1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_12ae20:
    // 0x12ae20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_12ae24:
    // 0x12ae24: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x12ae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ae28:
    // 0x12ae28: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x12ae28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_12ae2c:
    // 0x12ae2c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x12ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_12ae30:
    // 0x12ae30: 0xc0691ec  jal         func_1A47B0
label_12ae34:
    if (ctx->pc == 0x12AE34u) {
        ctx->pc = 0x12AE38u;
        goto label_12ae38;
    }
    ctx->pc = 0x12AE30u;
    SET_GPR_U32(ctx, 31, 0x12AE38u);
    ctx->pc = 0x1A47B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A47B0u, 0x12AE30u, 0x12AE38u)) {
        return;
    }
    ctx->pc = 0x12AE38u;
label_12ae38:
    // 0x12ae38: 0x8c430474  lw          $v1, 0x474($v0)
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1140)));
label_12ae3c:
    // 0x12ae3c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x12ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
label_12ae40:
    // 0x12ae40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x12ae40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_12ae44:
    // 0x12ae44: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x12ae44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_12ae48:
    // 0x12ae48: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x12ae48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_12ae4c:
    // 0x12ae4c: 0x8c464668  lw          $a2, 0x4668($v0)
    ctx->pc = 0x12ae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18024)));
label_12ae50:
    // 0x12ae50: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x12ae50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_12ae54:
    // 0x12ae54: 0x8c821a70  lw          $v0, 0x1A70($a0)
    ctx->pc = 0x12ae54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6768)));
label_12ae58:
    // 0x12ae58: 0xc46027b4  lwc1        $f0, 0x27B4($v1)
    ctx->pc = 0x12ae58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 10164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_12ae5c:
    // 0x12ae5c: 0x10c20007  beq         $a2, $v0, . + 4 + (0x7 << 2)
label_12ae60:
    if (ctx->pc == 0x12AE60u) {
        ctx->pc = 0x12AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE5Cu;
        // 0x12ae60: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE64u;
        goto label_12ae64;
    }
    ctx->pc = 0x12AE5Cu;
    {
        const bool branch_taken_0x12ae5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x12AE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE5Cu;
        // 0x12ae60: 0xe7a00030  swc1        $f0, 0x30($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae5c) {
            ctx->pc = 0x12AE7Cu;
            goto label_12ae7c;
        }
    }
    ctx->pc = 0x12AE64u;
label_12ae64:
    // 0x12ae64: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x12ae64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_12ae68:
    // 0x12ae68: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_12ae6c:
    if (ctx->pc == 0x12AE6Cu) {
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE68u;
        // 0x12ae6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE70u;
        goto label_12ae70;
    }
    ctx->pc = 0x12AE68u;
    {
        const bool branch_taken_0x12ae68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12AE6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE68u;
        // 0x12ae6c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ae68) {
            ctx->pc = 0x12AE7Cu;
            goto label_12ae7c;
        }
    }
    ctx->pc = 0x12AE70u;
label_12ae70:
    // 0x12ae70: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x12ae70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_12ae74:
    // 0x12ae74: 0xc07fd18  jal         func_1FF460
label_12ae78:
    if (ctx->pc == 0x12AE78u) {
        ctx->pc = 0x12AE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AE74u;
        // 0x12ae78: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AE7Cu;
        goto label_12ae7c;
    }
    ctx->pc = 0x12AE74u;
    SET_GPR_U32(ctx, 31, 0x12AE7Cu);
    ctx->pc = 0x12AE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12AE74u;
    // 0x12ae78: 0xac850004  sw          $a1, 0x4($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x12AE74u, 0x12AE7Cu)) {
        return;
    }
    ctx->pc = 0x12AE7Cu;
label_12ae7c:
    // 0x12ae7c: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x12ae7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
label_12ae80:
    // 0x12ae80: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x12ae80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_12ae84:
    // 0x12ae84: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x12ae84u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
label_12ae88:
    // 0x12ae88: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x12ae88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
label_12ae8c:
    // 0x12ae8c: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x12ae8cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
label_12ae90:
    // 0x12ae90: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x12ae90u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
label_12ae94:
    // 0x12ae94: 0x7bb60160  lq          $s6, 0x160($sp)
    ctx->pc = 0x12ae94u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_12ae98:
    // 0x12ae98: 0x7bb70150  lq          $s7, 0x150($sp)
    ctx->pc = 0x12ae98u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_12ae9c:
    // 0x12ae9c: 0x7bbe0140  lq          $fp, 0x140($sp)
    ctx->pc = 0x12ae9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_12aea0:
    // 0x12aea0: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x12aea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_12aea4:
    // 0x12aea4: 0xc7b501d8  lwc1        $f21, 0x1D8($sp)
    ctx->pc = 0x12aea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_12aea8:
    // 0x12aea8: 0xc7b401d0  lwc1        $f20, 0x1D0($sp)
    ctx->pc = 0x12aea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_12aeac:
    // 0x12aeac: 0x3e00008  jr          $ra
label_12aeb0:
    if (ctx->pc == 0x12AEB0u) {
        ctx->pc = 0x12AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEACu;
        // 0x12aeb0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x12AEB4u;
        goto label_12aeb4;
    }
    ctx->pc = 0x12AEACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AEB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12AEACu;
        // 0x12aeb0: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12AEACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12AEB4u;
label_12aeb4:
    // 0x12aeb4: 0x0  nop
    ctx->pc = 0x12aeb4u;
    // NOP
    ctx->pc = 0x12aeb8u;
}
