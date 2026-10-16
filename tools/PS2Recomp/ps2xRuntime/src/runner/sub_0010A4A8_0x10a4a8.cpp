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

// Function: sub_0010A4A8
// Address: 0x10a4a8 - 0x10adb8
void sub_0010A4A8_0x10a4a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A4A8_0x10a4a8");
#endif

    switch (ctx->pc) {
        case 0x10a4a8u: goto label_10a4a8;
        case 0x10a4acu: goto label_10a4ac;
        case 0x10a4b0u: goto label_10a4b0;
        case 0x10a4b4u: goto label_10a4b4;
        case 0x10a4b8u: goto label_10a4b8;
        case 0x10a4bcu: goto label_10a4bc;
        case 0x10a4c0u: goto label_10a4c0;
        case 0x10a4c4u: goto label_10a4c4;
        case 0x10a4c8u: goto label_10a4c8;
        case 0x10a4ccu: goto label_10a4cc;
        case 0x10a4d0u: goto label_10a4d0;
        case 0x10a4d4u: goto label_10a4d4;
        case 0x10a4d8u: goto label_10a4d8;
        case 0x10a4dcu: goto label_10a4dc;
        case 0x10a4e0u: goto label_10a4e0;
        case 0x10a4e4u: goto label_10a4e4;
        case 0x10a4e8u: goto label_10a4e8;
        case 0x10a4ecu: goto label_10a4ec;
        case 0x10a4f0u: goto label_10a4f0;
        case 0x10a4f4u: goto label_10a4f4;
        case 0x10a4f8u: goto label_10a4f8;
        case 0x10a4fcu: goto label_10a4fc;
        case 0x10a500u: goto label_10a500;
        case 0x10a504u: goto label_10a504;
        case 0x10a508u: goto label_10a508;
        case 0x10a50cu: goto label_10a50c;
        case 0x10a510u: goto label_10a510;
        case 0x10a514u: goto label_10a514;
        case 0x10a518u: goto label_10a518;
        case 0x10a51cu: goto label_10a51c;
        case 0x10a520u: goto label_10a520;
        case 0x10a524u: goto label_10a524;
        case 0x10a528u: goto label_10a528;
        case 0x10a52cu: goto label_10a52c;
        case 0x10a530u: goto label_10a530;
        case 0x10a534u: goto label_10a534;
        case 0x10a538u: goto label_10a538;
        case 0x10a53cu: goto label_10a53c;
        case 0x10a540u: goto label_10a540;
        case 0x10a544u: goto label_10a544;
        case 0x10a548u: goto label_10a548;
        case 0x10a54cu: goto label_10a54c;
        case 0x10a550u: goto label_10a550;
        case 0x10a554u: goto label_10a554;
        case 0x10a558u: goto label_10a558;
        case 0x10a55cu: goto label_10a55c;
        case 0x10a560u: goto label_10a560;
        case 0x10a564u: goto label_10a564;
        case 0x10a568u: goto label_10a568;
        case 0x10a56cu: goto label_10a56c;
        case 0x10a570u: goto label_10a570;
        case 0x10a574u: goto label_10a574;
        case 0x10a578u: goto label_10a578;
        case 0x10a57cu: goto label_10a57c;
        case 0x10a580u: goto label_10a580;
        case 0x10a584u: goto label_10a584;
        case 0x10a588u: goto label_10a588;
        case 0x10a58cu: goto label_10a58c;
        case 0x10a590u: goto label_10a590;
        case 0x10a594u: goto label_10a594;
        case 0x10a598u: goto label_10a598;
        case 0x10a59cu: goto label_10a59c;
        case 0x10a5a0u: goto label_10a5a0;
        case 0x10a5a4u: goto label_10a5a4;
        case 0x10a5a8u: goto label_10a5a8;
        case 0x10a5acu: goto label_10a5ac;
        case 0x10a5b0u: goto label_10a5b0;
        case 0x10a5b4u: goto label_10a5b4;
        case 0x10a5b8u: goto label_10a5b8;
        case 0x10a5bcu: goto label_10a5bc;
        case 0x10a5c0u: goto label_10a5c0;
        case 0x10a5c4u: goto label_10a5c4;
        case 0x10a5c8u: goto label_10a5c8;
        case 0x10a5ccu: goto label_10a5cc;
        case 0x10a5d0u: goto label_10a5d0;
        case 0x10a5d4u: goto label_10a5d4;
        case 0x10a5d8u: goto label_10a5d8;
        case 0x10a5dcu: goto label_10a5dc;
        case 0x10a5e0u: goto label_10a5e0;
        case 0x10a5e4u: goto label_10a5e4;
        case 0x10a5e8u: goto label_10a5e8;
        case 0x10a5ecu: goto label_10a5ec;
        case 0x10a5f0u: goto label_10a5f0;
        case 0x10a5f4u: goto label_10a5f4;
        case 0x10a5f8u: goto label_10a5f8;
        case 0x10a5fcu: goto label_10a5fc;
        case 0x10a600u: goto label_10a600;
        case 0x10a604u: goto label_10a604;
        case 0x10a608u: goto label_10a608;
        case 0x10a60cu: goto label_10a60c;
        case 0x10a610u: goto label_10a610;
        case 0x10a614u: goto label_10a614;
        case 0x10a618u: goto label_10a618;
        case 0x10a61cu: goto label_10a61c;
        case 0x10a620u: goto label_10a620;
        case 0x10a624u: goto label_10a624;
        case 0x10a628u: goto label_10a628;
        case 0x10a62cu: goto label_10a62c;
        case 0x10a630u: goto label_10a630;
        case 0x10a634u: goto label_10a634;
        case 0x10a638u: goto label_10a638;
        case 0x10a63cu: goto label_10a63c;
        case 0x10a640u: goto label_10a640;
        case 0x10a644u: goto label_10a644;
        case 0x10a648u: goto label_10a648;
        case 0x10a64cu: goto label_10a64c;
        case 0x10a650u: goto label_10a650;
        case 0x10a654u: goto label_10a654;
        case 0x10a658u: goto label_10a658;
        case 0x10a65cu: goto label_10a65c;
        case 0x10a660u: goto label_10a660;
        case 0x10a664u: goto label_10a664;
        case 0x10a668u: goto label_10a668;
        case 0x10a66cu: goto label_10a66c;
        case 0x10a670u: goto label_10a670;
        case 0x10a674u: goto label_10a674;
        case 0x10a678u: goto label_10a678;
        case 0x10a67cu: goto label_10a67c;
        case 0x10a680u: goto label_10a680;
        case 0x10a684u: goto label_10a684;
        case 0x10a688u: goto label_10a688;
        case 0x10a68cu: goto label_10a68c;
        case 0x10a690u: goto label_10a690;
        case 0x10a694u: goto label_10a694;
        case 0x10a698u: goto label_10a698;
        case 0x10a69cu: goto label_10a69c;
        case 0x10a6a0u: goto label_10a6a0;
        case 0x10a6a4u: goto label_10a6a4;
        case 0x10a6a8u: goto label_10a6a8;
        case 0x10a6acu: goto label_10a6ac;
        case 0x10a6b0u: goto label_10a6b0;
        case 0x10a6b4u: goto label_10a6b4;
        case 0x10a6b8u: goto label_10a6b8;
        case 0x10a6bcu: goto label_10a6bc;
        case 0x10a6c0u: goto label_10a6c0;
        case 0x10a6c4u: goto label_10a6c4;
        case 0x10a6c8u: goto label_10a6c8;
        case 0x10a6ccu: goto label_10a6cc;
        case 0x10a6d0u: goto label_10a6d0;
        case 0x10a6d4u: goto label_10a6d4;
        case 0x10a6d8u: goto label_10a6d8;
        case 0x10a6dcu: goto label_10a6dc;
        case 0x10a6e0u: goto label_10a6e0;
        case 0x10a6e4u: goto label_10a6e4;
        case 0x10a6e8u: goto label_10a6e8;
        case 0x10a6ecu: goto label_10a6ec;
        case 0x10a6f0u: goto label_10a6f0;
        case 0x10a6f4u: goto label_10a6f4;
        case 0x10a6f8u: goto label_10a6f8;
        case 0x10a6fcu: goto label_10a6fc;
        case 0x10a700u: goto label_10a700;
        case 0x10a704u: goto label_10a704;
        case 0x10a708u: goto label_10a708;
        case 0x10a70cu: goto label_10a70c;
        case 0x10a710u: goto label_10a710;
        case 0x10a714u: goto label_10a714;
        case 0x10a718u: goto label_10a718;
        case 0x10a71cu: goto label_10a71c;
        case 0x10a720u: goto label_10a720;
        case 0x10a724u: goto label_10a724;
        case 0x10a728u: goto label_10a728;
        case 0x10a72cu: goto label_10a72c;
        case 0x10a730u: goto label_10a730;
        case 0x10a734u: goto label_10a734;
        case 0x10a738u: goto label_10a738;
        case 0x10a73cu: goto label_10a73c;
        case 0x10a740u: goto label_10a740;
        case 0x10a744u: goto label_10a744;
        case 0x10a748u: goto label_10a748;
        case 0x10a74cu: goto label_10a74c;
        case 0x10a750u: goto label_10a750;
        case 0x10a754u: goto label_10a754;
        case 0x10a758u: goto label_10a758;
        case 0x10a75cu: goto label_10a75c;
        case 0x10a760u: goto label_10a760;
        case 0x10a764u: goto label_10a764;
        case 0x10a768u: goto label_10a768;
        case 0x10a76cu: goto label_10a76c;
        case 0x10a770u: goto label_10a770;
        case 0x10a774u: goto label_10a774;
        case 0x10a778u: goto label_10a778;
        case 0x10a77cu: goto label_10a77c;
        case 0x10a780u: goto label_10a780;
        case 0x10a784u: goto label_10a784;
        case 0x10a788u: goto label_10a788;
        case 0x10a78cu: goto label_10a78c;
        case 0x10a790u: goto label_10a790;
        case 0x10a794u: goto label_10a794;
        case 0x10a798u: goto label_10a798;
        case 0x10a79cu: goto label_10a79c;
        case 0x10a7a0u: goto label_10a7a0;
        case 0x10a7a4u: goto label_10a7a4;
        case 0x10a7a8u: goto label_10a7a8;
        case 0x10a7acu: goto label_10a7ac;
        case 0x10a7b0u: goto label_10a7b0;
        case 0x10a7b4u: goto label_10a7b4;
        case 0x10a7b8u: goto label_10a7b8;
        case 0x10a7bcu: goto label_10a7bc;
        case 0x10a7c0u: goto label_10a7c0;
        case 0x10a7c4u: goto label_10a7c4;
        case 0x10a7c8u: goto label_10a7c8;
        case 0x10a7ccu: goto label_10a7cc;
        case 0x10a7d0u: goto label_10a7d0;
        case 0x10a7d4u: goto label_10a7d4;
        case 0x10a7d8u: goto label_10a7d8;
        case 0x10a7dcu: goto label_10a7dc;
        case 0x10a7e0u: goto label_10a7e0;
        case 0x10a7e4u: goto label_10a7e4;
        case 0x10a7e8u: goto label_10a7e8;
        case 0x10a7ecu: goto label_10a7ec;
        case 0x10a7f0u: goto label_10a7f0;
        case 0x10a7f4u: goto label_10a7f4;
        case 0x10a7f8u: goto label_10a7f8;
        case 0x10a7fcu: goto label_10a7fc;
        case 0x10a800u: goto label_10a800;
        case 0x10a804u: goto label_10a804;
        case 0x10a808u: goto label_10a808;
        case 0x10a80cu: goto label_10a80c;
        case 0x10a810u: goto label_10a810;
        case 0x10a814u: goto label_10a814;
        case 0x10a818u: goto label_10a818;
        case 0x10a81cu: goto label_10a81c;
        case 0x10a820u: goto label_10a820;
        case 0x10a824u: goto label_10a824;
        case 0x10a828u: goto label_10a828;
        case 0x10a82cu: goto label_10a82c;
        case 0x10a830u: goto label_10a830;
        case 0x10a834u: goto label_10a834;
        case 0x10a838u: goto label_10a838;
        case 0x10a83cu: goto label_10a83c;
        case 0x10a840u: goto label_10a840;
        case 0x10a844u: goto label_10a844;
        case 0x10a848u: goto label_10a848;
        case 0x10a84cu: goto label_10a84c;
        case 0x10a850u: goto label_10a850;
        case 0x10a854u: goto label_10a854;
        case 0x10a858u: goto label_10a858;
        case 0x10a85cu: goto label_10a85c;
        case 0x10a860u: goto label_10a860;
        case 0x10a864u: goto label_10a864;
        case 0x10a868u: goto label_10a868;
        case 0x10a86cu: goto label_10a86c;
        case 0x10a870u: goto label_10a870;
        case 0x10a874u: goto label_10a874;
        case 0x10a878u: goto label_10a878;
        case 0x10a87cu: goto label_10a87c;
        case 0x10a880u: goto label_10a880;
        case 0x10a884u: goto label_10a884;
        case 0x10a888u: goto label_10a888;
        case 0x10a88cu: goto label_10a88c;
        case 0x10a890u: goto label_10a890;
        case 0x10a894u: goto label_10a894;
        case 0x10a898u: goto label_10a898;
        case 0x10a89cu: goto label_10a89c;
        case 0x10a8a0u: goto label_10a8a0;
        case 0x10a8a4u: goto label_10a8a4;
        case 0x10a8a8u: goto label_10a8a8;
        case 0x10a8acu: goto label_10a8ac;
        case 0x10a8b0u: goto label_10a8b0;
        case 0x10a8b4u: goto label_10a8b4;
        case 0x10a8b8u: goto label_10a8b8;
        case 0x10a8bcu: goto label_10a8bc;
        case 0x10a8c0u: goto label_10a8c0;
        case 0x10a8c4u: goto label_10a8c4;
        case 0x10a8c8u: goto label_10a8c8;
        case 0x10a8ccu: goto label_10a8cc;
        case 0x10a8d0u: goto label_10a8d0;
        case 0x10a8d4u: goto label_10a8d4;
        case 0x10a8d8u: goto label_10a8d8;
        case 0x10a8dcu: goto label_10a8dc;
        case 0x10a8e0u: goto label_10a8e0;
        case 0x10a8e4u: goto label_10a8e4;
        case 0x10a8e8u: goto label_10a8e8;
        case 0x10a8ecu: goto label_10a8ec;
        case 0x10a8f0u: goto label_10a8f0;
        case 0x10a8f4u: goto label_10a8f4;
        case 0x10a8f8u: goto label_10a8f8;
        case 0x10a8fcu: goto label_10a8fc;
        case 0x10a900u: goto label_10a900;
        case 0x10a904u: goto label_10a904;
        case 0x10a908u: goto label_10a908;
        case 0x10a90cu: goto label_10a90c;
        case 0x10a910u: goto label_10a910;
        case 0x10a914u: goto label_10a914;
        case 0x10a918u: goto label_10a918;
        case 0x10a91cu: goto label_10a91c;
        case 0x10a920u: goto label_10a920;
        case 0x10a924u: goto label_10a924;
        case 0x10a928u: goto label_10a928;
        case 0x10a92cu: goto label_10a92c;
        case 0x10a930u: goto label_10a930;
        case 0x10a934u: goto label_10a934;
        case 0x10a938u: goto label_10a938;
        case 0x10a93cu: goto label_10a93c;
        case 0x10a940u: goto label_10a940;
        case 0x10a944u: goto label_10a944;
        case 0x10a948u: goto label_10a948;
        case 0x10a94cu: goto label_10a94c;
        case 0x10a950u: goto label_10a950;
        case 0x10a954u: goto label_10a954;
        case 0x10a958u: goto label_10a958;
        case 0x10a95cu: goto label_10a95c;
        case 0x10a960u: goto label_10a960;
        case 0x10a964u: goto label_10a964;
        case 0x10a968u: goto label_10a968;
        case 0x10a96cu: goto label_10a96c;
        case 0x10a970u: goto label_10a970;
        case 0x10a974u: goto label_10a974;
        case 0x10a978u: goto label_10a978;
        case 0x10a97cu: goto label_10a97c;
        case 0x10a980u: goto label_10a980;
        case 0x10a984u: goto label_10a984;
        case 0x10a988u: goto label_10a988;
        case 0x10a98cu: goto label_10a98c;
        case 0x10a990u: goto label_10a990;
        case 0x10a994u: goto label_10a994;
        case 0x10a998u: goto label_10a998;
        case 0x10a99cu: goto label_10a99c;
        case 0x10a9a0u: goto label_10a9a0;
        case 0x10a9a4u: goto label_10a9a4;
        case 0x10a9a8u: goto label_10a9a8;
        case 0x10a9acu: goto label_10a9ac;
        case 0x10a9b0u: goto label_10a9b0;
        case 0x10a9b4u: goto label_10a9b4;
        case 0x10a9b8u: goto label_10a9b8;
        case 0x10a9bcu: goto label_10a9bc;
        case 0x10a9c0u: goto label_10a9c0;
        case 0x10a9c4u: goto label_10a9c4;
        case 0x10a9c8u: goto label_10a9c8;
        case 0x10a9ccu: goto label_10a9cc;
        case 0x10a9d0u: goto label_10a9d0;
        case 0x10a9d4u: goto label_10a9d4;
        case 0x10a9d8u: goto label_10a9d8;
        case 0x10a9dcu: goto label_10a9dc;
        case 0x10a9e0u: goto label_10a9e0;
        case 0x10a9e4u: goto label_10a9e4;
        case 0x10a9e8u: goto label_10a9e8;
        case 0x10a9ecu: goto label_10a9ec;
        case 0x10a9f0u: goto label_10a9f0;
        case 0x10a9f4u: goto label_10a9f4;
        case 0x10a9f8u: goto label_10a9f8;
        case 0x10a9fcu: goto label_10a9fc;
        case 0x10aa00u: goto label_10aa00;
        case 0x10aa04u: goto label_10aa04;
        case 0x10aa08u: goto label_10aa08;
        case 0x10aa0cu: goto label_10aa0c;
        case 0x10aa10u: goto label_10aa10;
        case 0x10aa14u: goto label_10aa14;
        case 0x10aa18u: goto label_10aa18;
        case 0x10aa1cu: goto label_10aa1c;
        case 0x10aa20u: goto label_10aa20;
        case 0x10aa24u: goto label_10aa24;
        case 0x10aa28u: goto label_10aa28;
        case 0x10aa2cu: goto label_10aa2c;
        case 0x10aa30u: goto label_10aa30;
        case 0x10aa34u: goto label_10aa34;
        case 0x10aa38u: goto label_10aa38;
        case 0x10aa3cu: goto label_10aa3c;
        case 0x10aa40u: goto label_10aa40;
        case 0x10aa44u: goto label_10aa44;
        case 0x10aa48u: goto label_10aa48;
        case 0x10aa4cu: goto label_10aa4c;
        case 0x10aa50u: goto label_10aa50;
        case 0x10aa54u: goto label_10aa54;
        case 0x10aa58u: goto label_10aa58;
        case 0x10aa5cu: goto label_10aa5c;
        case 0x10aa60u: goto label_10aa60;
        case 0x10aa64u: goto label_10aa64;
        case 0x10aa68u: goto label_10aa68;
        case 0x10aa6cu: goto label_10aa6c;
        case 0x10aa70u: goto label_10aa70;
        case 0x10aa74u: goto label_10aa74;
        case 0x10aa78u: goto label_10aa78;
        case 0x10aa7cu: goto label_10aa7c;
        case 0x10aa80u: goto label_10aa80;
        case 0x10aa84u: goto label_10aa84;
        case 0x10aa88u: goto label_10aa88;
        case 0x10aa8cu: goto label_10aa8c;
        case 0x10aa90u: goto label_10aa90;
        case 0x10aa94u: goto label_10aa94;
        case 0x10aa98u: goto label_10aa98;
        case 0x10aa9cu: goto label_10aa9c;
        case 0x10aaa0u: goto label_10aaa0;
        case 0x10aaa4u: goto label_10aaa4;
        case 0x10aaa8u: goto label_10aaa8;
        case 0x10aaacu: goto label_10aaac;
        case 0x10aab0u: goto label_10aab0;
        case 0x10aab4u: goto label_10aab4;
        case 0x10aab8u: goto label_10aab8;
        case 0x10aabcu: goto label_10aabc;
        case 0x10aac0u: goto label_10aac0;
        case 0x10aac4u: goto label_10aac4;
        case 0x10aac8u: goto label_10aac8;
        case 0x10aaccu: goto label_10aacc;
        case 0x10aad0u: goto label_10aad0;
        case 0x10aad4u: goto label_10aad4;
        case 0x10aad8u: goto label_10aad8;
        case 0x10aadcu: goto label_10aadc;
        case 0x10aae0u: goto label_10aae0;
        case 0x10aae4u: goto label_10aae4;
        case 0x10aae8u: goto label_10aae8;
        case 0x10aaecu: goto label_10aaec;
        case 0x10aaf0u: goto label_10aaf0;
        case 0x10aaf4u: goto label_10aaf4;
        case 0x10aaf8u: goto label_10aaf8;
        case 0x10aafcu: goto label_10aafc;
        case 0x10ab00u: goto label_10ab00;
        case 0x10ab04u: goto label_10ab04;
        case 0x10ab08u: goto label_10ab08;
        case 0x10ab0cu: goto label_10ab0c;
        case 0x10ab10u: goto label_10ab10;
        case 0x10ab14u: goto label_10ab14;
        case 0x10ab18u: goto label_10ab18;
        case 0x10ab1cu: goto label_10ab1c;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab24u: goto label_10ab24;
        case 0x10ab28u: goto label_10ab28;
        case 0x10ab2cu: goto label_10ab2c;
        case 0x10ab30u: goto label_10ab30;
        case 0x10ab34u: goto label_10ab34;
        case 0x10ab38u: goto label_10ab38;
        case 0x10ab3cu: goto label_10ab3c;
        case 0x10ab40u: goto label_10ab40;
        case 0x10ab44u: goto label_10ab44;
        case 0x10ab48u: goto label_10ab48;
        case 0x10ab4cu: goto label_10ab4c;
        case 0x10ab50u: goto label_10ab50;
        case 0x10ab54u: goto label_10ab54;
        case 0x10ab58u: goto label_10ab58;
        case 0x10ab5cu: goto label_10ab5c;
        case 0x10ab60u: goto label_10ab60;
        case 0x10ab64u: goto label_10ab64;
        case 0x10ab68u: goto label_10ab68;
        case 0x10ab6cu: goto label_10ab6c;
        case 0x10ab70u: goto label_10ab70;
        case 0x10ab74u: goto label_10ab74;
        case 0x10ab78u: goto label_10ab78;
        case 0x10ab7cu: goto label_10ab7c;
        case 0x10ab80u: goto label_10ab80;
        case 0x10ab84u: goto label_10ab84;
        case 0x10ab88u: goto label_10ab88;
        case 0x10ab8cu: goto label_10ab8c;
        case 0x10ab90u: goto label_10ab90;
        case 0x10ab94u: goto label_10ab94;
        case 0x10ab98u: goto label_10ab98;
        case 0x10ab9cu: goto label_10ab9c;
        case 0x10aba0u: goto label_10aba0;
        case 0x10aba4u: goto label_10aba4;
        case 0x10aba8u: goto label_10aba8;
        case 0x10abacu: goto label_10abac;
        case 0x10abb0u: goto label_10abb0;
        case 0x10abb4u: goto label_10abb4;
        case 0x10abb8u: goto label_10abb8;
        case 0x10abbcu: goto label_10abbc;
        case 0x10abc0u: goto label_10abc0;
        case 0x10abc4u: goto label_10abc4;
        case 0x10abc8u: goto label_10abc8;
        case 0x10abccu: goto label_10abcc;
        case 0x10abd0u: goto label_10abd0;
        case 0x10abd4u: goto label_10abd4;
        case 0x10abd8u: goto label_10abd8;
        case 0x10abdcu: goto label_10abdc;
        case 0x10abe0u: goto label_10abe0;
        case 0x10abe4u: goto label_10abe4;
        case 0x10abe8u: goto label_10abe8;
        case 0x10abecu: goto label_10abec;
        case 0x10abf0u: goto label_10abf0;
        case 0x10abf4u: goto label_10abf4;
        case 0x10abf8u: goto label_10abf8;
        case 0x10abfcu: goto label_10abfc;
        case 0x10ac00u: goto label_10ac00;
        case 0x10ac04u: goto label_10ac04;
        case 0x10ac08u: goto label_10ac08;
        case 0x10ac0cu: goto label_10ac0c;
        case 0x10ac10u: goto label_10ac10;
        case 0x10ac14u: goto label_10ac14;
        case 0x10ac18u: goto label_10ac18;
        case 0x10ac1cu: goto label_10ac1c;
        case 0x10ac20u: goto label_10ac20;
        case 0x10ac24u: goto label_10ac24;
        case 0x10ac28u: goto label_10ac28;
        case 0x10ac2cu: goto label_10ac2c;
        case 0x10ac30u: goto label_10ac30;
        case 0x10ac34u: goto label_10ac34;
        case 0x10ac38u: goto label_10ac38;
        case 0x10ac3cu: goto label_10ac3c;
        case 0x10ac40u: goto label_10ac40;
        case 0x10ac44u: goto label_10ac44;
        case 0x10ac48u: goto label_10ac48;
        case 0x10ac4cu: goto label_10ac4c;
        case 0x10ac50u: goto label_10ac50;
        case 0x10ac54u: goto label_10ac54;
        case 0x10ac58u: goto label_10ac58;
        case 0x10ac5cu: goto label_10ac5c;
        case 0x10ac60u: goto label_10ac60;
        case 0x10ac64u: goto label_10ac64;
        case 0x10ac68u: goto label_10ac68;
        case 0x10ac6cu: goto label_10ac6c;
        case 0x10ac70u: goto label_10ac70;
        case 0x10ac74u: goto label_10ac74;
        case 0x10ac78u: goto label_10ac78;
        case 0x10ac7cu: goto label_10ac7c;
        case 0x10ac80u: goto label_10ac80;
        case 0x10ac84u: goto label_10ac84;
        case 0x10ac88u: goto label_10ac88;
        case 0x10ac8cu: goto label_10ac8c;
        case 0x10ac90u: goto label_10ac90;
        case 0x10ac94u: goto label_10ac94;
        case 0x10ac98u: goto label_10ac98;
        case 0x10ac9cu: goto label_10ac9c;
        case 0x10aca0u: goto label_10aca0;
        case 0x10aca4u: goto label_10aca4;
        case 0x10aca8u: goto label_10aca8;
        case 0x10acacu: goto label_10acac;
        case 0x10acb0u: goto label_10acb0;
        case 0x10acb4u: goto label_10acb4;
        case 0x10acb8u: goto label_10acb8;
        case 0x10acbcu: goto label_10acbc;
        case 0x10acc0u: goto label_10acc0;
        case 0x10acc4u: goto label_10acc4;
        case 0x10acc8u: goto label_10acc8;
        case 0x10acccu: goto label_10accc;
        case 0x10acd0u: goto label_10acd0;
        case 0x10acd4u: goto label_10acd4;
        case 0x10acd8u: goto label_10acd8;
        case 0x10acdcu: goto label_10acdc;
        case 0x10ace0u: goto label_10ace0;
        case 0x10ace4u: goto label_10ace4;
        case 0x10ace8u: goto label_10ace8;
        case 0x10acecu: goto label_10acec;
        case 0x10acf0u: goto label_10acf0;
        case 0x10acf4u: goto label_10acf4;
        case 0x10acf8u: goto label_10acf8;
        case 0x10acfcu: goto label_10acfc;
        case 0x10ad00u: goto label_10ad00;
        case 0x10ad04u: goto label_10ad04;
        case 0x10ad08u: goto label_10ad08;
        case 0x10ad0cu: goto label_10ad0c;
        case 0x10ad10u: goto label_10ad10;
        case 0x10ad14u: goto label_10ad14;
        case 0x10ad18u: goto label_10ad18;
        case 0x10ad1cu: goto label_10ad1c;
        case 0x10ad20u: goto label_10ad20;
        case 0x10ad24u: goto label_10ad24;
        case 0x10ad28u: goto label_10ad28;
        case 0x10ad2cu: goto label_10ad2c;
        case 0x10ad30u: goto label_10ad30;
        case 0x10ad34u: goto label_10ad34;
        case 0x10ad38u: goto label_10ad38;
        case 0x10ad3cu: goto label_10ad3c;
        case 0x10ad40u: goto label_10ad40;
        case 0x10ad44u: goto label_10ad44;
        case 0x10ad48u: goto label_10ad48;
        case 0x10ad4cu: goto label_10ad4c;
        case 0x10ad50u: goto label_10ad50;
        case 0x10ad54u: goto label_10ad54;
        case 0x10ad58u: goto label_10ad58;
        case 0x10ad5cu: goto label_10ad5c;
        case 0x10ad60u: goto label_10ad60;
        case 0x10ad64u: goto label_10ad64;
        case 0x10ad68u: goto label_10ad68;
        case 0x10ad6cu: goto label_10ad6c;
        case 0x10ad70u: goto label_10ad70;
        case 0x10ad74u: goto label_10ad74;
        case 0x10ad78u: goto label_10ad78;
        case 0x10ad7cu: goto label_10ad7c;
        case 0x10ad80u: goto label_10ad80;
        case 0x10ad84u: goto label_10ad84;
        case 0x10ad88u: goto label_10ad88;
        case 0x10ad8cu: goto label_10ad8c;
        case 0x10ad90u: goto label_10ad90;
        case 0x10ad94u: goto label_10ad94;
        case 0x10ad98u: goto label_10ad98;
        case 0x10ad9cu: goto label_10ad9c;
        case 0x10ada0u: goto label_10ada0;
        case 0x10ada4u: goto label_10ada4;
        case 0x10ada8u: goto label_10ada8;
        case 0x10adacu: goto label_10adac;
        case 0x10adb0u: goto label_10adb0;
        case 0x10adb4u: goto label_10adb4;
        default: break;
    }

    ctx->pc = 0x10a4a8u;

label_10a4a8:
    // 0x10a4a8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x10a4a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_10a4ac:
    // 0x10a4ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x10a4acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_10a4b0:
    // 0x10a4b0: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x10a4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
label_10a4b4:
    // 0x10a4b4: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x10a4b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
label_10a4b8:
    // 0x10a4b8: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x10a4b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
label_10a4bc:
    // 0x10a4bc: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x10a4bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
label_10a4c0:
    // 0x10a4c0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x10a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
label_10a4c4:
    // 0x10a4c4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x10a4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
label_10a4c8:
    // 0x10a4c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x10a4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_10a4cc:
    // 0x10a4cc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x10a4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
label_10a4d0:
    // 0x10a4d0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x10a4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
label_10a4d4:
    // 0x10a4d4: 0x14a2022b  bne         $a1, $v0, . + 4 + (0x22B << 2)
label_10a4d8:
    if (ctx->pc == 0x10A4D8u) {
        ctx->pc = 0x10A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4D4u;
        // 0x10a4d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4DCu;
        goto label_10a4dc;
    }
    ctx->pc = 0x10A4D4u;
    {
        const bool branch_taken_0x10a4d4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4D4u;
        // 0x10a4d8: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4d4) {
            ctx->pc = 0x10AD84u;
            goto label_10ad84;
        }
    }
    ctx->pc = 0x10A4DCu;
label_10a4dc:
    // 0x10a4dc: 0x108001a0  beqz        $a0, . + 4 + (0x1A0 << 2)
label_10a4e0:
    if (ctx->pc == 0x10A4E0u) {
        ctx->pc = 0x10A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4DCu;
        // 0x10a4e0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A4E4u;
        goto label_10a4e4;
    }
    ctx->pc = 0x10A4DCu;
    {
        const bool branch_taken_0x10a4dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A4DCu;
        // 0x10a4e0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a4dc) {
            ctx->pc = 0x10AB60u;
            goto label_10ab60;
        }
    }
    ctx->pc = 0x10A4E4u;
label_10a4e4:
    // 0x10a4e4: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x10a4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_10a4e8:
    // 0x10a4e8: 0xac404290  sw          $zero, 0x4290($v0)
    ctx->pc = 0x10a4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17040), GPR_U32(ctx, 0));
label_10a4ec:
    // 0x10a4ec: 0x24574290  addiu       $s7, $v0, 0x4290
    ctx->pc = 0x10a4ecu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
label_10a4f0:
    // 0x10a4f0: 0x26e3000c  addiu       $v1, $s7, 0xC
    ctx->pc = 0x10a4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_10a4f4:
    // 0x10a4f4: 0xaee00004  sw          $zero, 0x4($s7)
    ctx->pc = 0x10a4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 0));
label_10a4f8:
    // 0x10a4f8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x10a4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_10a4fc:
    // 0x10a4fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x10a4fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a500:
    // 0x10a500: 0xaee00008  sw          $zero, 0x8($s7)
    ctx->pc = 0x10a500u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 0));
label_10a504:
    // 0x10a504: 0xaee0000c  sw          $zero, 0xC($s7)
    ctx->pc = 0x10a504u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 0));
label_10a508:
    // 0x10a508: 0xc0c5472  jal         func_3151C8
label_10a50c:
    if (ctx->pc == 0x10A50Cu) {
        ctx->pc = 0x10A50Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A508u;
        // 0x10a50c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A510u;
        goto label_10a510;
    }
    ctx->pc = 0x10A508u;
    SET_GPR_U32(ctx, 31, 0x10A510u);
    ctx->pc = 0x10A50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A508u;
    // 0x10a50c: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A508u, 0x10A510u)) {
        return;
    }
    ctx->pc = 0x10A510u;
label_10a510:
    // 0x10a510: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a510u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a514:
    // 0x10a514: 0x16000018  bnez        $s0, . + 4 + (0x18 << 2)
label_10a518:
    if (ctx->pc == 0x10A518u) {
        ctx->pc = 0x10A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A514u;
        // 0x10a518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A51Cu;
        goto label_10a51c;
    }
    ctx->pc = 0x10A514u;
    {
        const bool branch_taken_0x10a514 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A514u;
        // 0x10a518: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a514) {
            ctx->pc = 0x10A578u;
            goto label_10a578;
        }
    }
    ctx->pc = 0x10A51Cu;
label_10a51c:
    // 0x10a51c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x10a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_10a520:
    // 0x10a520: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x10a520u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
label_10a524:
    // 0x10a524: 0x24549850  addiu       $s4, $v0, -0x67B0
    ctx->pc = 0x10a524u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_10a528:
    // 0x10a528: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x10a528u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
label_10a52c:
    // 0x10a52c: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x10a52cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
label_10a530:
    // 0x10a530: 0x8e62828c  lw          $v0, -0x7D74($s3)
    ctx->pc = 0x10a530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935180)));
label_10a534:
    // 0x10a534: 0x0  nop
    ctx->pc = 0x10a534u;
    // NOP
label_10a538:
    // 0x10a538: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_10a53c:
    if (ctx->pc == 0x10A53Cu) {
        ctx->pc = 0x10A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A538u;
        // 0x10a53c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A540u;
        goto label_10a540;
    }
    ctx->pc = 0x10A538u;
    {
        const bool branch_taken_0x10a538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A538u;
        // 0x10a53c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a538) {
            ctx->pc = 0x10A558u;
            goto label_10a558;
        }
    }
    ctx->pc = 0x10A540u;
label_10a540:
    // 0x10a540: 0xc0a6492  jal         func_299248
label_10a544:
    if (ctx->pc == 0x10A544u) {
        ctx->pc = 0x10A544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A540u;
        // 0x10a544: 0x26259ca8  addiu       $a1, $s1, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A548u;
        goto label_10a548;
    }
    ctx->pc = 0x10A540u;
    SET_GPR_U32(ctx, 31, 0x10A548u);
    ctx->pc = 0x10A544u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A540u;
    // 0x10a544: 0x26259ca8  addiu       $a1, $s1, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x10A540u, 0x10A548u)) {
        return;
    }
    ctx->pc = 0x10A548u;
label_10a548:
    // 0x10a548: 0x280f809  jalr        $s4
label_10a54c:
    if (ctx->pc == 0x10A54Cu) {
        ctx->pc = 0x10A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A548u;
        // 0x10a54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A550u;
        goto label_10a550;
    }
    ctx->pc = 0x10A548u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x10A550u);
        ctx->pc = 0x10A54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A548u;
        // 0x10a54c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A548u, 0x10A550u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A550u;
label_10a550:
    // 0x10a550: 0xc07da60  jal         func_1F6980
label_10a554:
    if (ctx->pc == 0x10A554u) {
        ctx->pc = 0x10A554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A550u;
        // 0x10a554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A558u;
        goto label_10a558;
    }
    ctx->pc = 0x10A550u;
    SET_GPR_U32(ctx, 31, 0x10A558u);
    ctx->pc = 0x10A554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A550u;
    // 0x10a554: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x10A550u, 0x10A558u)) {
        return;
    }
    ctx->pc = 0x10A558u;
label_10a558:
    // 0x10a558: 0x40f809  jalr        $v0
label_10a55c:
    if (ctx->pc == 0x10A55Cu) {
        ctx->pc = 0x10A560u;
        goto label_10a560;
    }
    ctx->pc = 0x10A558u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A560u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A558u, 0x10A560u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A560u;
label_10a560:
    // 0x10a560: 0xc0c5472  jal         func_3151C8
label_10a564:
    if (ctx->pc == 0x10A564u) {
        ctx->pc = 0x10A564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A560u;
        // 0x10a564: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A568u;
        goto label_10a568;
    }
    ctx->pc = 0x10A560u;
    SET_GPR_U32(ctx, 31, 0x10A568u);
    ctx->pc = 0x10A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A560u;
    // 0x10a564: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A560u, 0x10A568u)) {
        return;
    }
    ctx->pc = 0x10A568u;
label_10a568:
    // 0x10a568: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_10a56c:
    if (ctx->pc == 0x10A56Cu) {
        ctx->pc = 0x10A56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A568u;
        // 0x10a56c: 0x8e62828c  lw          $v0, -0x7D74($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A570u;
        goto label_10a570;
    }
    ctx->pc = 0x10A568u;
    {
        const bool branch_taken_0x10a568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a568) {
            ctx->pc = 0x10A56Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A568u;
            // 0x10a56c: 0x8e62828c  lw          $v0, -0x7D74($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A538u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a538;
        }
    }
    ctx->pc = 0x10A570u;
label_10a570:
    // 0x10a570: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a570u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a574:
    // 0x10a574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a578:
    // 0x10a578: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10a578u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a57c:
    // 0x10a57c: 0x298c0  sll         $s3, $v0, 3
    ctx->pc = 0x10a57cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_10a580:
    // 0x10a580: 0x1072000a  beq         $v1, $s2, . + 4 + (0xA << 2)
label_10a584:
    if (ctx->pc == 0x10A584u) {
        ctx->pc = 0x10A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A580u;
        // 0x10a584: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A588u;
        goto label_10a588;
    }
    ctx->pc = 0x10A580u;
    {
        const bool branch_taken_0x10a580 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x10A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A580u;
        // 0x10a584: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a580) {
            ctx->pc = 0x10A5ACu;
            goto label_10a5ac;
        }
    }
    ctx->pc = 0x10A588u;
label_10a588:
    // 0x10a588: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10a58c:
    if (ctx->pc == 0x10A58Cu) {
        ctx->pc = 0x10A58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A588u;
        // 0x10a58c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A590u;
        goto label_10a590;
    }
    ctx->pc = 0x10A588u;
    {
        const bool branch_taken_0x10a588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a588) {
            ctx->pc = 0x10A58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A588u;
            // 0x10a58c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A5A4u;
            goto label_10a5a4;
        }
    }
    ctx->pc = 0x10A590u;
label_10a590:
    // 0x10a590: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x10a590u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10a594:
    // 0x10a594: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x10a594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10a598:
    // 0x10a598: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x10a598u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a59c:
    // 0x10a59c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x10a59cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a5a0:
    // 0x10a5a0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a5a4:
    // 0x10a5a4: 0x1472fff8  bne         $v1, $s2, . + 4 + (-0x8 << 2)
label_10a5a8:
    if (ctx->pc == 0x10A5A8u) {
        ctx->pc = 0x10A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5A4u;
        // 0x10a5a8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5ACu;
        goto label_10a5ac;
    }
    ctx->pc = 0x10A5A4u;
    {
        const bool branch_taken_0x10a5a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x10A5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5A4u;
        // 0x10a5a8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5a4) {
            ctx->pc = 0x10A588u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a588;
        }
    }
    ctx->pc = 0x10A5ACu;
label_10a5ac:
    // 0x10a5ac: 0x8ee30000  lw          $v1, 0x0($s7)
    ctx->pc = 0x10a5acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 0)));
label_10a5b0:
    // 0x10a5b0: 0x26110800  addiu       $s1, $s0, 0x800
    ctx->pc = 0x10a5b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2048));
label_10a5b4:
    // 0x10a5b4: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x10a5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_10a5b8:
    // 0x10a5b8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10a5b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a5bc:
    // 0x10a5bc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a5bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a5c0:
    // 0x10a5c0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10a5c4:
    if (ctx->pc == 0x10A5C4u) {
        ctx->pc = 0x10A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5C0u;
        // 0x10a5c4: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5C8u;
        goto label_10a5c8;
    }
    ctx->pc = 0x10A5C0u;
    {
        const bool branch_taken_0x10a5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5C0u;
        // 0x10a5c4: 0x8ee60008  lw          $a2, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5c0) {
            ctx->pc = 0x10A5E8u;
            goto label_10a5e8;
        }
    }
    ctx->pc = 0x10A5C8u;
label_10a5c8:
    // 0x10a5c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a5cc:
    // 0x10a5cc: 0x0  nop
    ctx->pc = 0x10a5ccu;
    // NOP
label_10a5d0:
    // 0x10a5d0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a5d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a5d4:
    // 0x10a5d4: 0x0  nop
    ctx->pc = 0x10a5d4u;
    // NOP
label_10a5d8:
    // 0x10a5d8: 0x0  nop
    ctx->pc = 0x10a5d8u;
    // NOP
label_10a5dc:
    // 0x10a5dc: 0x0  nop
    ctx->pc = 0x10a5dcu;
    // NOP
label_10a5e0:
    // 0x10a5e0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_10a5e4:
    if (ctx->pc == 0x10A5E4u) {
        ctx->pc = 0x10A5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5E0u;
        // 0x10a5e4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5E8u;
        goto label_10a5e8;
    }
    ctx->pc = 0x10A5E0u;
    {
        const bool branch_taken_0x10a5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a5e0) {
            ctx->pc = 0x10A5E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A5E0u;
            // 0x10a5e4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A5D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a5d0;
        }
    }
    ctx->pc = 0x10A5E8u;
label_10a5e8:
    // 0x10a5e8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10a5ec:
    // 0x10a5ec: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a5ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10a5f0:
    // 0x10a5f0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10a5f4:
    if (ctx->pc == 0x10A5F4u) {
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A5F8u;
        goto label_10a5f8;
    }
    ctx->pc = 0x10A5F0u;
    {
        const bool branch_taken_0x10a5f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A5F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5F0u;
        // 0x10a5f4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5f0) {
            ctx->pc = 0x10A634u;
            goto label_10a634;
        }
    }
    ctx->pc = 0x10A5F8u;
label_10a5f8:
    // 0x10a5f8: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10a5f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10a5fc:
    // 0x10a5fc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10a600:
    if (ctx->pc == 0x10A600u) {
        ctx->pc = 0x10A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5FCu;
        // 0x10a600: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A604u;
        goto label_10a604;
    }
    ctx->pc = 0x10A5FCu;
    {
        const bool branch_taken_0x10a5fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A5FCu;
        // 0x10a600: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a5fc) {
            ctx->pc = 0x10A614u;
            goto label_10a614;
        }
    }
    ctx->pc = 0x10A604u;
label_10a604:
    // 0x10a604: 0xc0c5486  jal         func_315218
label_10a608:
    if (ctx->pc == 0x10A608u) {
        ctx->pc = 0x10A608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A604u;
        // 0x10a608: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A60Cu;
        goto label_10a60c;
    }
    ctx->pc = 0x10A604u;
    SET_GPR_U32(ctx, 31, 0x10A60Cu);
    ctx->pc = 0x10A608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A604u;
    // 0x10a608: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10A604u, 0x10A60Cu)) {
        return;
    }
    ctx->pc = 0x10A60Cu;
label_10a60c:
    // 0x10a60c: 0x1000000a  b           . + 4 + (0xA << 2)
label_10a610:
    if (ctx->pc == 0x10A610u) {
        ctx->pc = 0x10A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A60Cu;
        // 0x10a610: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A614u;
        goto label_10a614;
    }
    ctx->pc = 0x10A60Cu;
    {
        const bool branch_taken_0x10a60c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A60Cu;
        // 0x10a610: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a60c) {
            ctx->pc = 0x10A638u;
            goto label_10a638;
        }
    }
    ctx->pc = 0x10A614u;
label_10a614:
    // 0x10a614: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10a614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10a618:
    // 0x10a618: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10a61c:
    // 0x10a61c: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10a61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10a620:
    // 0x10a620: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a624:
    // 0x10a624: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a628:
    // 0x10a628: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10a628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10a62c:
    // 0x10a62c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10a62cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10a630:
    // 0x10a630: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10a630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10a634:
    // 0x10a634: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x10a634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_10a638:
    // 0x10a638: 0xaef10008  sw          $s1, 0x8($s7)
    ctx->pc = 0x10a638u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 8), GPR_U32(ctx, 17));
label_10a63c:
    // 0x10a63c: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x10a63cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
label_10a640:
    // 0x10a640: 0x26f1000c  addiu       $s1, $s7, 0xC
    ctx->pc = 0x10a640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
label_10a644:
    // 0x10a644: 0xaef00000  sw          $s0, 0x0($s7)
    ctx->pc = 0x10a644u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 16));
label_10a648:
    // 0x10a648: 0x8ef3000c  lw          $s3, 0xC($s7)
    ctx->pc = 0x10a648u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_10a64c:
    // 0x10a64c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10a64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10a650:
    // 0x10a650: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x10a650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_10a654:
    // 0x10a654: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a654u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10a658:
    // 0x10a658: 0x2c420040  sltiu       $v0, $v0, 0x40
    ctx->pc = 0x10a658u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_10a65c:
    // 0x10a65c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_10a660:
    if (ctx->pc == 0x10A660u) {
        ctx->pc = 0x10A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A65Cu;
        // 0x10a660: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A664u;
        goto label_10a664;
    }
    ctx->pc = 0x10A65Cu;
    {
        const bool branch_taken_0x10a65c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A65Cu;
        // 0x10a660: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a65c) {
            ctx->pc = 0x10A7A4u;
            goto label_10a7a4;
        }
    }
    ctx->pc = 0x10A664u;
label_10a664:
    // 0x10a664: 0x8e920004  lw          $s2, 0x4($s4)
    ctx->pc = 0x10a664u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_10a668:
    // 0x10a668: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x10a668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_10a66c:
    // 0x10a66c: 0x2531023  subu        $v0, $s2, $s3
    ctx->pc = 0x10a66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
label_10a670:
    // 0x10a670: 0xc0c5472  jal         func_3151C8
label_10a674:
    if (ctx->pc == 0x10A674u) {
        ctx->pc = 0x10A674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A670u;
        // 0x10a674: 0x2f0c3  sra         $fp, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A678u;
        goto label_10a678;
    }
    ctx->pc = 0x10A670u;
    SET_GPR_U32(ctx, 31, 0x10A678u);
    ctx->pc = 0x10A674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A670u;
    // 0x10a674: 0x2f0c3  sra         $fp, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A670u, 0x10A678u)) {
        return;
    }
    ctx->pc = 0x10A678u;
label_10a678:
    // 0x10a678: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a678u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a67c:
    // 0x10a67c: 0x16000016  bnez        $s0, . + 4 + (0x16 << 2)
label_10a680:
    if (ctx->pc == 0x10A680u) {
        ctx->pc = 0x10A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A67Cu;
        // 0x10a680: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A684u;
        goto label_10a684;
    }
    ctx->pc = 0x10A67Cu;
    {
        const bool branch_taken_0x10a67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A67Cu;
        // 0x10a680: 0x260182d  daddu       $v1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a67c) {
            ctx->pc = 0x10A6D8u;
            goto label_10a6d8;
        }
    }
    ctx->pc = 0x10A684u;
label_10a684:
    // 0x10a684: 0x3c160034  lui         $s6, 0x34
    ctx->pc = 0x10a684u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
label_10a688:
    // 0x10a688: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x10a688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
label_10a68c:
    // 0x10a68c: 0x3c150069  lui         $s5, 0x69
    ctx->pc = 0x10a68cu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)105 << 16));
label_10a690:
    // 0x10a690: 0x8ec2828c  lw          $v0, -0x7D74($s6)
    ctx->pc = 0x10a690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
label_10a694:
    // 0x10a694: 0x0  nop
    ctx->pc = 0x10a694u;
    // NOP
label_10a698:
    // 0x10a698: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_10a69c:
    if (ctx->pc == 0x10A69Cu) {
        ctx->pc = 0x10A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A698u;
        // 0x10a69c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6A0u;
        goto label_10a6a0;
    }
    ctx->pc = 0x10A698u;
    {
        const bool branch_taken_0x10a698 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A698u;
        // 0x10a69c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a698) {
            ctx->pc = 0x10A6B8u;
            goto label_10a6b8;
        }
    }
    ctx->pc = 0x10A6A0u;
label_10a6a0:
    // 0x10a6a0: 0xc0a6492  jal         func_299248
label_10a6a4:
    if (ctx->pc == 0x10A6A4u) {
        ctx->pc = 0x10A6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6A0u;
        // 0x10a6a4: 0x26a59ca8  addiu       $a1, $s5, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6A8u;
        goto label_10a6a8;
    }
    ctx->pc = 0x10A6A0u;
    SET_GPR_U32(ctx, 31, 0x10A6A8u);
    ctx->pc = 0x10A6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6A0u;
    // 0x10a6a4: 0x26a59ca8  addiu       $a1, $s5, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x10A6A0u, 0x10A6A8u)) {
        return;
    }
    ctx->pc = 0x10A6A8u;
label_10a6a8:
    // 0x10a6a8: 0xc0a6614  jal         func_299850
label_10a6ac:
    if (ctx->pc == 0x10A6ACu) {
        ctx->pc = 0x10A6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6A8u;
        // 0x10a6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6B0u;
        goto label_10a6b0;
    }
    ctx->pc = 0x10A6A8u;
    SET_GPR_U32(ctx, 31, 0x10A6B0u);
    ctx->pc = 0x10A6ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6A8u;
    // 0x10a6ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299850u, 0x10A6A8u, 0x10A6B0u)) {
        return;
    }
    ctx->pc = 0x10A6B0u;
label_10a6b0:
    // 0x10a6b0: 0xc07da60  jal         func_1F6980
label_10a6b4:
    if (ctx->pc == 0x10A6B4u) {
        ctx->pc = 0x10A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6B0u;
        // 0x10a6b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6B8u;
        goto label_10a6b8;
    }
    ctx->pc = 0x10A6B0u;
    SET_GPR_U32(ctx, 31, 0x10A6B8u);
    ctx->pc = 0x10A6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6B0u;
    // 0x10a6b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x10A6B0u, 0x10A6B8u)) {
        return;
    }
    ctx->pc = 0x10A6B8u;
label_10a6b8:
    // 0x10a6b8: 0x40f809  jalr        $v0
label_10a6bc:
    if (ctx->pc == 0x10A6BCu) {
        ctx->pc = 0x10A6C0u;
        goto label_10a6c0;
    }
    ctx->pc = 0x10A6B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A6C0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6B8u, 0x10A6C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A6C0u;
label_10a6c0:
    // 0x10a6c0: 0xc0c5472  jal         func_3151C8
label_10a6c4:
    if (ctx->pc == 0x10A6C4u) {
        ctx->pc = 0x10A6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C0u;
        // 0x10a6c4: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6C8u;
        goto label_10a6c8;
    }
    ctx->pc = 0x10A6C0u;
    SET_GPR_U32(ctx, 31, 0x10A6C8u);
    ctx->pc = 0x10A6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A6C0u;
    // 0x10a6c4: 0x24040200  addiu       $a0, $zero, 0x200 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A6C0u, 0x10A6C8u)) {
        return;
    }
    ctx->pc = 0x10A6C8u;
label_10a6c8:
    // 0x10a6c8: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_10a6cc:
    if (ctx->pc == 0x10A6CCu) {
        ctx->pc = 0x10A6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6C8u;
        // 0x10a6cc: 0x8ec2828c  lw          $v0, -0x7D74($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6D0u;
        goto label_10a6d0;
    }
    ctx->pc = 0x10A6C8u;
    {
        const bool branch_taken_0x10a6c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6c8) {
            ctx->pc = 0x10A6CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A6C8u;
            // 0x10a6cc: 0x8ec2828c  lw          $v0, -0x7D74($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A698u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a698;
        }
    }
    ctx->pc = 0x10A6D0u;
label_10a6d0:
    // 0x10a6d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a6d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a6d4:
    // 0x10a6d4: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x10a6d4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_10a6d8:
    // 0x10a6d8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x10a6d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_10a6dc:
    // 0x10a6dc: 0x1072000b  beq         $v1, $s2, . + 4 + (0xB << 2)
label_10a6e0:
    if (ctx->pc == 0x10A6E0u) {
        ctx->pc = 0x10A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6DCu;
        // 0x10a6e0: 0x1e98c0  sll         $s3, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6E4u;
        goto label_10a6e4;
    }
    ctx->pc = 0x10A6DCu;
    {
        const bool branch_taken_0x10a6dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x10A6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6DCu;
        // 0x10a6e0: 0x1e98c0  sll         $s3, $fp, 3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a6dc) {
            ctx->pc = 0x10A70Cu;
            goto label_10a70c;
        }
    }
    ctx->pc = 0x10A6E4u;
label_10a6e4:
    // 0x10a6e4: 0x0  nop
    ctx->pc = 0x10a6e4u;
    // NOP
label_10a6e8:
    // 0x10a6e8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10a6ec:
    if (ctx->pc == 0x10A6ECu) {
        ctx->pc = 0x10A6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6E8u;
        // 0x10a6ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A6F0u;
        goto label_10a6f0;
    }
    ctx->pc = 0x10A6E8u;
    {
        const bool branch_taken_0x10a6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a6e8) {
            ctx->pc = 0x10A6ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A6E8u;
            // 0x10a6ec: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A704u;
            goto label_10a704;
        }
    }
    ctx->pc = 0x10A6F0u;
label_10a6f0:
    // 0x10a6f0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x10a6f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10a6f4:
    // 0x10a6f4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x10a6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10a6f8:
    // 0x10a6f8: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x10a6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a6fc:
    // 0x10a6fc: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x10a6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a700:
    // 0x10a700: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a704:
    // 0x10a704: 0x1472fff8  bne         $v1, $s2, . + 4 + (-0x8 << 2)
label_10a708:
    if (ctx->pc == 0x10A708u) {
        ctx->pc = 0x10A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A704u;
        // 0x10a708: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A70Cu;
        goto label_10a70c;
    }
    ctx->pc = 0x10A704u;
    {
        const bool branch_taken_0x10a704 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x10A708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A704u;
        // 0x10a708: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a704) {
            ctx->pc = 0x10A6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a6e8;
        }
    }
    ctx->pc = 0x10A70Cu;
label_10a70c:
    // 0x10a70c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10a70cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10a710:
    // 0x10a710: 0x26120200  addiu       $s2, $s0, 0x200
    ctx->pc = 0x10a710u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 512));
label_10a714:
    // 0x10a714: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10a714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10a718:
    // 0x10a718: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10a718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a71c:
    // 0x10a71c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a71cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a720:
    // 0x10a720: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10a724:
    if (ctx->pc == 0x10A724u) {
        ctx->pc = 0x10A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A720u;
        // 0x10a724: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A728u;
        goto label_10a728;
    }
    ctx->pc = 0x10A720u;
    {
        const bool branch_taken_0x10a720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A720u;
        // 0x10a724: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a720) {
            ctx->pc = 0x10A748u;
            goto label_10a748;
        }
    }
    ctx->pc = 0x10A728u;
label_10a728:
    // 0x10a728: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a72c:
    // 0x10a72c: 0x0  nop
    ctx->pc = 0x10a72cu;
    // NOP
label_10a730:
    // 0x10a730: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a734:
    // 0x10a734: 0x0  nop
    ctx->pc = 0x10a734u;
    // NOP
label_10a738:
    // 0x10a738: 0x0  nop
    ctx->pc = 0x10a738u;
    // NOP
label_10a73c:
    // 0x10a73c: 0x0  nop
    ctx->pc = 0x10a73cu;
    // NOP
label_10a740:
    // 0x10a740: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10a744:
    if (ctx->pc == 0x10A744u) {
        ctx->pc = 0x10A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A740u;
        // 0x10a744: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A748u;
        goto label_10a748;
    }
    ctx->pc = 0x10A740u;
    {
        const bool branch_taken_0x10a740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A740u;
        // 0x10a744: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a740) {
            ctx->pc = 0x10A730u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a730;
        }
    }
    ctx->pc = 0x10A748u;
label_10a748:
    // 0x10a748: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10a748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10a74c:
    // 0x10a74c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a74cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10a750:
    // 0x10a750: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10a754:
    if (ctx->pc == 0x10A754u) {
        ctx->pc = 0x10A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A750u;
        // 0x10a754: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A758u;
        goto label_10a758;
    }
    ctx->pc = 0x10A750u;
    {
        const bool branch_taken_0x10a750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A750u;
        // 0x10a754: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a750) {
            ctx->pc = 0x10A794u;
            goto label_10a794;
        }
    }
    ctx->pc = 0x10A758u;
label_10a758:
    // 0x10a758: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10a758u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10a75c:
    // 0x10a75c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10a760:
    if (ctx->pc == 0x10A760u) {
        ctx->pc = 0x10A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A75Cu;
        // 0x10a760: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A764u;
        goto label_10a764;
    }
    ctx->pc = 0x10A75Cu;
    {
        const bool branch_taken_0x10a75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A75Cu;
        // 0x10a760: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a75c) {
            ctx->pc = 0x10A774u;
            goto label_10a774;
        }
    }
    ctx->pc = 0x10A764u;
label_10a764:
    // 0x10a764: 0xc0c5486  jal         func_315218
label_10a768:
    if (ctx->pc == 0x10A768u) {
        ctx->pc = 0x10A768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A764u;
        // 0x10a768: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A76Cu;
        goto label_10a76c;
    }
    ctx->pc = 0x10A764u;
    SET_GPR_U32(ctx, 31, 0x10A76Cu);
    ctx->pc = 0x10A768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A764u;
    // 0x10a768: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10A764u, 0x10A76Cu)) {
        return;
    }
    ctx->pc = 0x10A76Cu;
label_10a76c:
    // 0x10a76c: 0x1000000a  b           . + 4 + (0xA << 2)
label_10a770:
    if (ctx->pc == 0x10A770u) {
        ctx->pc = 0x10A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A76Cu;
        // 0x10a770: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A774u;
        goto label_10a774;
    }
    ctx->pc = 0x10A76Cu;
    {
        const bool branch_taken_0x10a76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A76Cu;
        // 0x10a770: 0x2131021  addu        $v0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a76c) {
            ctx->pc = 0x10A798u;
            goto label_10a798;
        }
    }
    ctx->pc = 0x10A774u;
label_10a774:
    // 0x10a774: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10a774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10a778:
    // 0x10a778: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10a77c:
    // 0x10a77c: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10a77cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10a780:
    // 0x10a780: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a784:
    // 0x10a784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a788:
    // 0x10a788: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10a788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10a78c:
    // 0x10a78c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10a78cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10a790:
    // 0x10a790: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10a790u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10a794:
    // 0x10a794: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x10a794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_10a798:
    // 0x10a798: 0xae320008  sw          $s2, 0x8($s1)
    ctx->pc = 0x10a798u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 18));
label_10a79c:
    // 0x10a79c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x10a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_10a7a0:
    // 0x10a7a0: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x10a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_10a7a4:
    // 0x10a7a4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x10a7a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_10a7a8:
    // 0x10a7a8: 0x24035400  addiu       $v1, $zero, 0x5400
    ctx->pc = 0x10a7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
label_10a7ac:
    // 0x10a7ac: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x10a7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_10a7b0:
    // 0x10a7b0: 0x3c04001e  lui         $a0, 0x1E
    ctx->pc = 0x10a7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)30 << 16));
label_10a7b4:
    // 0x10a7b4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x10a7b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_10a7b8:
    // 0x10a7b8: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_10a7bc:
    if (ctx->pc == 0x10A7BCu) {
        ctx->pc = 0x10A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7B8u;
        // 0x10a7bc: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7C0u;
        goto label_10a7c0;
    }
    ctx->pc = 0x10A7B8u;
    {
        const bool branch_taken_0x10a7b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7B8u;
        // 0x10a7bc: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7b8) {
            ctx->pc = 0x10A7E8u;
            goto label_10a7e8;
        }
    }
    ctx->pc = 0x10A7C0u;
label_10a7c0:
    // 0x10a7c0: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_10a7c4:
    if (ctx->pc == 0x10A7C4u) {
        ctx->pc = 0x10A7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7C0u;
        // 0x10a7c4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7C8u;
        goto label_10a7c8;
    }
    ctx->pc = 0x10A7C0u;
    {
        const bool branch_taken_0x10a7c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a7c0) {
            ctx->pc = 0x10A7C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A7C0u;
            // 0x10a7c4: 0x8e820004  lw          $v0, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A7DCu;
            goto label_10a7dc;
        }
    }
    ctx->pc = 0x10A7C8u;
label_10a7c8:
    // 0x10a7c8: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x10a7c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_10a7cc:
    // 0x10a7cc: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x10a7ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10a7d0:
    // 0x10a7d0: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x10a7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7d4:
    // 0x10a7d4: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x10a7d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a7d8:
    // 0x10a7d8: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x10a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_10a7dc:
    // 0x10a7dc: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10a7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_10a7e0:
    // 0x10a7e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_10a7e4:
    if (ctx->pc == 0x10A7E4u) {
        ctx->pc = 0x10A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7E0u;
        // 0x10a7e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7E8u;
        goto label_10a7e8;
    }
    ctx->pc = 0x10A7E0u;
    {
        const bool branch_taken_0x10a7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7E0u;
        // 0x10a7e4: 0xae820004  sw          $v0, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a7e0) {
            ctx->pc = 0x10A7F4u;
            goto label_10a7f4;
        }
    }
    ctx->pc = 0x10A7E8u;
label_10a7e8:
    // 0x10a7e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x10a7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_10a7ec:
    // 0x10a7ec: 0xc042602  jal         func_109808
label_10a7f0:
    if (ctx->pc == 0x10A7F0u) {
        ctx->pc = 0x10A7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A7ECu;
        // 0x10a7f0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A7F4u;
        goto label_10a7f4;
    }
    ctx->pc = 0x10A7ECu;
    SET_GPR_U32(ctx, 31, 0x10A7F4u);
    ctx->pc = 0x10A7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A7ECu;
    // 0x10a7f0: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x10A7ECu, 0x10A7F4u)) {
        return;
    }
    ctx->pc = 0x10A7F4u;
label_10a7f4:
    // 0x10a7f4: 0x3c02001d  lui         $v0, 0x1D
    ctx->pc = 0x10a7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)29 << 16));
label_10a7f8:
    // 0x10a7f8: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x10a7f8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_10a7fc:
    // 0x10a7fc: 0x3442ac00  ori         $v0, $v0, 0xAC00
    ctx->pc = 0x10a7fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)44032);
label_10a800:
    // 0x10a800: 0x24fe42b0  addiu       $fp, $a3, 0x42B0
    ctx->pc = 0x10a800u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 7), 17072));
label_10a804:
    // 0x10a804: 0xaee2001c  sw          $v0, 0x1C($s7)
    ctx->pc = 0x10a804u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 28), GPR_U32(ctx, 2));
label_10a808:
    // 0x10a808: 0x27c3000c  addiu       $v1, $fp, 0xC
    ctx->pc = 0x10a808u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_10a80c:
    // 0x10a80c: 0xace042b0  sw          $zero, 0x42B0($a3)
    ctx->pc = 0x10a80cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 17072), GPR_U32(ctx, 0));
label_10a810:
    // 0x10a810: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x10a810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_10a814:
    // 0x10a814: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x10a814u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_10a818:
    // 0x10a818: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x10a818u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a81c:
    // 0x10a81c: 0xaee00018  sw          $zero, 0x18($s7)
    ctx->pc = 0x10a81cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 24), GPR_U32(ctx, 0));
label_10a820:
    // 0x10a820: 0xafc00004  sw          $zero, 0x4($fp)
    ctx->pc = 0x10a820u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 0));
label_10a824:
    // 0x10a824: 0xafc00008  sw          $zero, 0x8($fp)
    ctx->pc = 0x10a824u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 0));
label_10a828:
    // 0x10a828: 0xafc0000c  sw          $zero, 0xC($fp)
    ctx->pc = 0x10a828u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 12), GPR_U32(ctx, 0));
label_10a82c:
    // 0x10a82c: 0xc0c5472  jal         func_3151C8
label_10a830:
    if (ctx->pc == 0x10A830u) {
        ctx->pc = 0x10A830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A82Cu;
        // 0x10a830: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A834u;
        goto label_10a834;
    }
    ctx->pc = 0x10A82Cu;
    SET_GPR_U32(ctx, 31, 0x10A834u);
    ctx->pc = 0x10A830u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A82Cu;
    // 0x10a830: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A82Cu, 0x10A834u)) {
        return;
    }
    ctx->pc = 0x10A834u;
label_10a834:
    // 0x10a834: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a834u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a838:
    // 0x10a838: 0x16000017  bnez        $s0, . + 4 + (0x17 << 2)
label_10a83c:
    if (ctx->pc == 0x10A83Cu) {
        ctx->pc = 0x10A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A838u;
        // 0x10a83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A840u;
        goto label_10a840;
    }
    ctx->pc = 0x10A838u;
    {
        const bool branch_taken_0x10a838 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A83Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A838u;
        // 0x10a83c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a838) {
            ctx->pc = 0x10A898u;
            goto label_10a898;
        }
    }
    ctx->pc = 0x10A840u;
label_10a840:
    // 0x10a840: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x10a840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_10a844:
    // 0x10a844: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x10a844u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
label_10a848:
    // 0x10a848: 0x24549850  addiu       $s4, $v0, -0x67B0
    ctx->pc = 0x10a848u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940752));
label_10a84c:
    // 0x10a84c: 0x3c100068  lui         $s0, 0x68
    ctx->pc = 0x10a84cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)104 << 16));
label_10a850:
    // 0x10a850: 0x3c110069  lui         $s1, 0x69
    ctx->pc = 0x10a850u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)105 << 16));
label_10a854:
    // 0x10a854: 0x8e42828c  lw          $v0, -0x7D74($s2)
    ctx->pc = 0x10a854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935180)));
label_10a858:
    // 0x10a858: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_10a85c:
    if (ctx->pc == 0x10A85Cu) {
        ctx->pc = 0x10A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A858u;
        // 0x10a85c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A860u;
        goto label_10a860;
    }
    ctx->pc = 0x10A858u;
    {
        const bool branch_taken_0x10a858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A858u;
        // 0x10a85c: 0x26041878  addiu       $a0, $s0, 0x1878 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a858) {
            ctx->pc = 0x10A878u;
            goto label_10a878;
        }
    }
    ctx->pc = 0x10A860u;
label_10a860:
    // 0x10a860: 0xc0a6492  jal         func_299248
label_10a864:
    if (ctx->pc == 0x10A864u) {
        ctx->pc = 0x10A864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A860u;
        // 0x10a864: 0x26259ca8  addiu       $a1, $s1, -0x6358 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A868u;
        goto label_10a868;
    }
    ctx->pc = 0x10A860u;
    SET_GPR_U32(ctx, 31, 0x10A868u);
    ctx->pc = 0x10A864u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A860u;
    // 0x10a864: 0x26259ca8  addiu       $a1, $s1, -0x6358 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294941864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x299248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x299248u, 0x10A860u, 0x10A868u)) {
        return;
    }
    ctx->pc = 0x10A868u;
label_10a868:
    // 0x10a868: 0x280f809  jalr        $s4
label_10a86c:
    if (ctx->pc == 0x10A86Cu) {
        ctx->pc = 0x10A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A868u;
        // 0x10a86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A870u;
        goto label_10a870;
    }
    ctx->pc = 0x10A868u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x10A870u);
        ctx->pc = 0x10A86Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A868u;
        // 0x10a86c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A868u, 0x10A870u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A870u;
label_10a870:
    // 0x10a870: 0xc07da60  jal         func_1F6980
label_10a874:
    if (ctx->pc == 0x10A874u) {
        ctx->pc = 0x10A874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A870u;
        // 0x10a874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A878u;
        goto label_10a878;
    }
    ctx->pc = 0x10A870u;
    SET_GPR_U32(ctx, 31, 0x10A878u);
    ctx->pc = 0x10A874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A870u;
    // 0x10a874: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F6980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F6980u, 0x10A870u, 0x10A878u)) {
        return;
    }
    ctx->pc = 0x10A878u;
label_10a878:
    // 0x10a878: 0x40f809  jalr        $v0
label_10a87c:
    if (ctx->pc == 0x10A87Cu) {
        ctx->pc = 0x10A880u;
        goto label_10a880;
    }
    ctx->pc = 0x10A878u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x10A880u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A878u, 0x10A880u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10A880u;
label_10a880:
    // 0x10a880: 0xc0c5472  jal         func_3151C8
label_10a884:
    if (ctx->pc == 0x10A884u) {
        ctx->pc = 0x10A884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A880u;
        // 0x10a884: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A888u;
        goto label_10a888;
    }
    ctx->pc = 0x10A880u;
    SET_GPR_U32(ctx, 31, 0x10A888u);
    ctx->pc = 0x10A884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A880u;
    // 0x10a884: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3151C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3151C8u, 0x10A880u, 0x10A888u)) {
        return;
    }
    ctx->pc = 0x10A888u;
label_10a888:
    // 0x10a888: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
label_10a88c:
    if (ctx->pc == 0x10A88Cu) {
        ctx->pc = 0x10A88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A888u;
        // 0x10a88c: 0x8e42828c  lw          $v0, -0x7D74($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A890u;
        goto label_10a890;
    }
    ctx->pc = 0x10A888u;
    {
        const bool branch_taken_0x10a888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a888) {
            ctx->pc = 0x10A88Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A888u;
            // 0x10a88c: 0x8e42828c  lw          $v0, -0x7D74($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294935180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a858;
        }
    }
    ctx->pc = 0x10A890u;
label_10a890:
    // 0x10a890: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x10a890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a894:
    // 0x10a894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10a894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a898:
    // 0x10a898: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x10a898u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10a89c:
    // 0x10a89c: 0x290c0  sll         $s2, $v0, 3
    ctx->pc = 0x10a89cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_10a8a0:
    // 0x10a8a0: 0x1073000a  beq         $v1, $s3, . + 4 + (0xA << 2)
label_10a8a4:
    if (ctx->pc == 0x10A8A4u) {
        ctx->pc = 0x10A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A0u;
        // 0x10a8a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8A8u;
        goto label_10a8a8;
    }
    ctx->pc = 0x10A8A0u;
    {
        const bool branch_taken_0x10a8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10A8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A0u;
        // 0x10a8a4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8a0) {
            ctx->pc = 0x10A8CCu;
            goto label_10a8cc;
        }
    }
    ctx->pc = 0x10A8A8u;
label_10a8a8:
    // 0x10a8a8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10a8ac:
    if (ctx->pc == 0x10A8ACu) {
        ctx->pc = 0x10A8ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8A8u;
        // 0x10a8ac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8B0u;
        goto label_10a8b0;
    }
    ctx->pc = 0x10A8A8u;
    {
        const bool branch_taken_0x10a8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10a8a8) {
            ctx->pc = 0x10A8ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A8A8u;
            // 0x10a8ac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A8C4u;
            goto label_10a8c4;
        }
    }
    ctx->pc = 0x10A8B0u;
label_10a8b0:
    // 0x10a8b0: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x10a8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10a8b4:
    // 0x10a8b4: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x10a8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10a8b8:
    // 0x10a8b8: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x10a8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8bc:
    // 0x10a8bc: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x10a8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10a8c0:
    // 0x10a8c0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a8c4:
    // 0x10a8c4: 0x1473fff8  bne         $v1, $s3, . + 4 + (-0x8 << 2)
label_10a8c8:
    if (ctx->pc == 0x10A8C8u) {
        ctx->pc = 0x10A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C4u;
        // 0x10a8c8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8CCu;
        goto label_10a8cc;
    }
    ctx->pc = 0x10A8C4u;
    {
        const bool branch_taken_0x10a8c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x10A8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8C4u;
        // 0x10a8c8: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8c4) {
            ctx->pc = 0x10A8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8a8;
        }
    }
    ctx->pc = 0x10A8CCu;
label_10a8cc:
    // 0x10a8cc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x10a8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_10a8d0:
    // 0x10a8d0: 0x26110100  addiu       $s1, $s0, 0x100
    ctx->pc = 0x10a8d0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_10a8d4:
    // 0x10a8d4: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x10a8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_10a8d8:
    // 0x10a8d8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10a8d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a8dc:
    // 0x10a8dc: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a8dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a8e0:
    // 0x10a8e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10a8e4:
    if (ctx->pc == 0x10A8E4u) {
        ctx->pc = 0x10A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E0u;
        // 0x10a8e4: 0x8fc60008  lw          $a2, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A8E8u;
        goto label_10a8e8;
    }
    ctx->pc = 0x10A8E0u;
    {
        const bool branch_taken_0x10a8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A8E0u;
        // 0x10a8e4: 0x8fc60008  lw          $a2, 0x8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a8e0) {
            ctx->pc = 0x10A908u;
            goto label_10a908;
        }
    }
    ctx->pc = 0x10A8E8u;
label_10a8e8:
    // 0x10a8e8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10a8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10a8ec:
    // 0x10a8ec: 0x0  nop
    ctx->pc = 0x10a8ecu;
    // NOP
label_10a8f0:
    // 0x10a8f0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10a8f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10a8f4:
    // 0x10a8f4: 0x0  nop
    ctx->pc = 0x10a8f4u;
    // NOP
label_10a8f8:
    // 0x10a8f8: 0x0  nop
    ctx->pc = 0x10a8f8u;
    // NOP
label_10a8fc:
    // 0x10a8fc: 0x0  nop
    ctx->pc = 0x10a8fcu;
    // NOP
label_10a900:
    // 0x10a900: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_10a904:
    if (ctx->pc == 0x10A904u) {
        ctx->pc = 0x10A904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A900u;
        // 0x10a904: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A908u;
        goto label_10a908;
    }
    ctx->pc = 0x10A900u;
    {
        const bool branch_taken_0x10a900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10a900) {
            ctx->pc = 0x10A904u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10A900u;
            // 0x10a904: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10A8F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10a8f0;
        }
    }
    ctx->pc = 0x10A908u;
label_10a908:
    // 0x10a908: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10a908u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10a90c:
    // 0x10a90c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a90cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10a910:
    // 0x10a910: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10a914:
    if (ctx->pc == 0x10A914u) {
        ctx->pc = 0x10A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A910u;
        // 0x10a914: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A918u;
        goto label_10a918;
    }
    ctx->pc = 0x10A910u;
    {
        const bool branch_taken_0x10a910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A910u;
        // 0x10a914: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a910) {
            ctx->pc = 0x10A954u;
            goto label_10a954;
        }
    }
    ctx->pc = 0x10A918u;
label_10a918:
    // 0x10a918: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10a918u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10a91c:
    // 0x10a91c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10a920:
    if (ctx->pc == 0x10A920u) {
        ctx->pc = 0x10A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A91Cu;
        // 0x10a920: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A924u;
        goto label_10a924;
    }
    ctx->pc = 0x10A91Cu;
    {
        const bool branch_taken_0x10a91c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A91Cu;
        // 0x10a920: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a91c) {
            ctx->pc = 0x10A934u;
            goto label_10a934;
        }
    }
    ctx->pc = 0x10A924u;
label_10a924:
    // 0x10a924: 0xc0c5486  jal         func_315218
label_10a928:
    if (ctx->pc == 0x10A928u) {
        ctx->pc = 0x10A928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A924u;
        // 0x10a928: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A92Cu;
        goto label_10a92c;
    }
    ctx->pc = 0x10A924u;
    SET_GPR_U32(ctx, 31, 0x10A92Cu);
    ctx->pc = 0x10A928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A924u;
    // 0x10a928: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10A924u, 0x10A92Cu)) {
        return;
    }
    ctx->pc = 0x10A92Cu;
label_10a92c:
    // 0x10a92c: 0x1000000a  b           . + 4 + (0xA << 2)
label_10a930:
    if (ctx->pc == 0x10A930u) {
        ctx->pc = 0x10A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A92Cu;
        // 0x10a930: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A934u;
        goto label_10a934;
    }
    ctx->pc = 0x10A92Cu;
    {
        const bool branch_taken_0x10a92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A92Cu;
        // 0x10a930: 0x2121021  addu        $v0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a92c) {
            ctx->pc = 0x10A958u;
            goto label_10a958;
        }
    }
    ctx->pc = 0x10A934u;
label_10a934:
    // 0x10a934: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10a934u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10a938:
    // 0x10a938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10a938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10a93c:
    // 0x10a93c: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10a940:
    // 0x10a940: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10a940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10a944:
    // 0x10a944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10a944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10a948:
    // 0x10a948: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10a948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10a94c:
    // 0x10a94c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10a94cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10a950:
    // 0x10a950: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10a950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10a954:
    // 0x10a954: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x10a954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_10a958:
    // 0x10a958: 0xafd10008  sw          $s1, 0x8($fp)
    ctx->pc = 0x10a958u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 8), GPR_U32(ctx, 17));
label_10a95c:
    // 0x10a95c: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x10a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_10a960:
    // 0x10a960: 0x27d1000c  addiu       $s1, $fp, 0xC
    ctx->pc = 0x10a960u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 12));
label_10a964:
    // 0x10a964: 0xafd00000  sw          $s0, 0x0($fp)
    ctx->pc = 0x10a964u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 16));
label_10a968:
    // 0x10a968: 0x8fd5000c  lw          $s5, 0xC($fp)
    ctx->pc = 0x10a968u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 12)));
label_10a96c:
    // 0x10a96c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x10a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_10a970:
    // 0x10a970: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x10a970u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_10a974:
    // 0x10a974: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10a974u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10a978:
    // 0x10a978: 0x2c420010  sltiu       $v0, $v0, 0x10
    ctx->pc = 0x10a978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_10a97c:
    // 0x10a97c: 0x10400060  beqz        $v0, . + 4 + (0x60 << 2)
label_10a980:
    if (ctx->pc == 0x10A980u) {
        ctx->pc = 0x10A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A97Cu;
        // 0x10a980: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A984u;
        goto label_10a984;
    }
    ctx->pc = 0x10A97Cu;
    {
        const bool branch_taken_0x10a97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A97Cu;
        // 0x10a980: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a97c) {
            ctx->pc = 0x10AB00u;
            goto label_10ab00;
        }
    }
    ctx->pc = 0x10A984u;
label_10a984:
    // 0x10a984: 0x8ed30004  lw          $s3, 0x4($s6)
    ctx->pc = 0x10a984u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_10a988:
    // 0x10a988: 0x2751023  subu        $v0, $s3, $s5
    ctx->pc = 0x10a988u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 21)));
label_10a98c:
    // 0x10a98c: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10a990:
    // 0x10a990: 0x24748290  addiu       $s4, $v1, -0x7D70
    ctx->pc = 0x10a990u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10a994:
    // 0x10a994: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x10a994u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a998:
    // 0x10a998: 0x8e83003c  lw          $v1, 0x3C($s4)
    ctx->pc = 0x10a998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
label_10a99c:
    // 0x10a99c: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
label_10a9a0:
    if (ctx->pc == 0x10A9A0u) {
        ctx->pc = 0x10A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A99Cu;
        // 0x10a9a0: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9A4u;
        goto label_10a9a4;
    }
    ctx->pc = 0x10A99Cu;
    {
        const bool branch_taken_0x10a99c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x10A9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A99Cu;
        // 0x10a9a0: 0x280c3  sra         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a99c) {
            ctx->pc = 0x10AA28u;
            goto label_10aa28;
        }
    }
    ctx->pc = 0x10A9A4u;
label_10a9a4:
    // 0x10a9a4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x10a9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_10a9a8:
    // 0x10a9a8: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x10a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_10a9ac:
    // 0x10a9ac: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x10a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_10a9b0:
    // 0x10a9b0: 0xc04257c  jal         func_1095F0
label_10a9b4:
    if (ctx->pc == 0x10A9B4u) {
        ctx->pc = 0x10A9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9B0u;
        // 0x10a9b4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9B8u;
        goto label_10a9b8;
    }
    ctx->pc = 0x10A9B0u;
    SET_GPR_U32(ctx, 31, 0x10A9B8u);
    ctx->pc = 0x10A9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10A9B0u;
    // 0x10a9b4: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1095F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1095F0u, 0x10A9B0u, 0x10A9B8u)) {
        return;
    }
    ctx->pc = 0x10A9B8u;
label_10a9b8:
    // 0x10a9b8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x10a9b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_10a9bc:
    // 0x10a9bc: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10a9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10a9c0:
    // 0x10a9c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a9c4:
    // 0x10a9c4: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
label_10a9c8:
    if (ctx->pc == 0x10A9C8u) {
        ctx->pc = 0x10A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9C4u;
        // 0x10a9c8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9CCu;
        goto label_10a9cc;
    }
    ctx->pc = 0x10A9C4u;
    {
        const bool branch_taken_0x10a9c4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x10A9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9C4u;
        // 0x10a9c8: 0x24120080  addiu       $s2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9c4) {
            ctx->pc = 0x10A9D8u;
            goto label_10a9d8;
        }
    }
    ctx->pc = 0x10A9CCu;
label_10a9cc:
    // 0x10a9cc: 0x10000014  b           . + 4 + (0x14 << 2)
label_10a9d0:
    if (ctx->pc == 0x10A9D0u) {
        ctx->pc = 0x10A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9CCu;
        // 0x10a9d0: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9D4u;
        goto label_10a9d4;
    }
    ctx->pc = 0x10A9CCu;
    {
        const bool branch_taken_0x10a9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9CCu;
        // 0x10a9d0: 0x1080c0  sll         $s0, $s0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9cc) {
            ctx->pc = 0x10AA20u;
            goto label_10aa20;
        }
    }
    ctx->pc = 0x10A9D4u;
label_10a9d4:
    // 0x10a9d4: 0x0  nop
    ctx->pc = 0x10a9d4u;
    // NOP
label_10a9d8:
    // 0x10a9d8: 0x24c30080  addiu       $v1, $a2, 0x80
    ctx->pc = 0x10a9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
label_10a9dc:
    // 0x10a9dc: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x10a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_10a9e0:
    // 0x10a9e0: 0xae83003c  sw          $v1, 0x3C($s4)
    ctx->pc = 0x10a9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 3));
label_10a9e4:
    // 0x10a9e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10a9e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10a9e8:
    // 0x10a9e8: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x10a9e8u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_10a9ec:
    // 0x10a9ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x10a9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_10a9f0:
    // 0x10a9f0: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_10a9f4:
    if (ctx->pc == 0x10A9F4u) {
        ctx->pc = 0x10A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9F0u;
        // 0x10a9f4: 0x24c30100  addiu       $v1, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10A9F8u;
        goto label_10a9f8;
    }
    ctx->pc = 0x10A9F0u;
    {
        const bool branch_taken_0x10a9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x10A9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9F0u;
        // 0x10a9f4: 0x24c30100  addiu       $v1, $a2, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9f0) {
            ctx->pc = 0x10AA00u;
            goto label_10aa00;
        }
    }
    ctx->pc = 0x10A9F8u;
label_10a9f8:
    // 0x10a9f8: 0x10000009  b           . + 4 + (0x9 << 2)
label_10a9fc:
    if (ctx->pc == 0x10A9FCu) {
        ctx->pc = 0x10A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9F8u;
        // 0x10a9fc: 0xacc00080  sw          $zero, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA00u;
        goto label_10aa00;
    }
    ctx->pc = 0x10A9F8u;
    {
        const bool branch_taken_0x10a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10A9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A9F8u;
        // 0x10a9fc: 0xacc00080  sw          $zero, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10a9f8) {
            ctx->pc = 0x10AA20u;
            goto label_10aa20;
        }
    }
    ctx->pc = 0x10AA00u;
label_10aa00:
    // 0x10aa00: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x10aa00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_10aa04:
    // 0x10aa04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x10aa04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_10aa08:
    // 0x10aa08: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x10aa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10aa0c:
    // 0x10aa0c: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10aa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_10aa10:
    // 0x10aa10: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10aa10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10aa14:
    // 0x10aa14: 0x1445fffa  bne         $v0, $a1, . + 4 + (-0x6 << 2)
label_10aa18:
    if (ctx->pc == 0x10AA18u) {
        ctx->pc = 0x10AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA14u;
        // 0x10aa18: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA1Cu;
        goto label_10aa1c;
    }
    ctx->pc = 0x10AA14u;
    {
        const bool branch_taken_0x10aa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x10AA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA14u;
        // 0x10aa18: 0x921821  addu        $v1, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa14) {
            ctx->pc = 0x10AA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa00;
        }
    }
    ctx->pc = 0x10AA1Cu;
label_10aa1c:
    // 0x10aa1c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x10aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_10aa20:
    // 0x10aa20: 0x10000005  b           . + 4 + (0x5 << 2)
label_10aa24:
    if (ctx->pc == 0x10AA24u) {
        ctx->pc = 0x10AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA20u;
        // 0x10aa24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA28u;
        goto label_10aa28;
    }
    ctx->pc = 0x10AA20u;
    {
        const bool branch_taken_0x10aa20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA20u;
        // 0x10aa24: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa20) {
            ctx->pc = 0x10AA38u;
            goto label_10aa38;
        }
    }
    ctx->pc = 0x10AA28u;
label_10aa28:
    // 0x10aa28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x10aa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_10aa2c:
    // 0x10aa2c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x10aa2cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10aa30:
    // 0x10aa30: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x10aa30u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
label_10aa34:
    // 0x10aa34: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x10aa34u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
label_10aa38:
    // 0x10aa38: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x10aa38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_10aa3c:
    // 0x10aa3c: 0x1073000b  beq         $v1, $s3, . + 4 + (0xB << 2)
label_10aa40:
    if (ctx->pc == 0x10AA40u) {
        ctx->pc = 0x10AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA3Cu;
        // 0x10aa40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA44u;
        goto label_10aa44;
    }
    ctx->pc = 0x10AA3Cu;
    {
        const bool branch_taken_0x10aa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x10AA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA3Cu;
        // 0x10aa40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa3c) {
            ctx->pc = 0x10AA6Cu;
            goto label_10aa6c;
        }
    }
    ctx->pc = 0x10AA44u;
label_10aa44:
    // 0x10aa44: 0x0  nop
    ctx->pc = 0x10aa44u;
    // NOP
label_10aa48:
    // 0x10aa48: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_10aa4c:
    if (ctx->pc == 0x10AA4Cu) {
        ctx->pc = 0x10AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA48u;
        // 0x10aa4c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA50u;
        goto label_10aa50;
    }
    ctx->pc = 0x10AA48u;
    {
        const bool branch_taken_0x10aa48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aa48) {
            ctx->pc = 0x10AA4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AA48u;
            // 0x10aa4c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AA64u;
            goto label_10aa64;
        }
    }
    ctx->pc = 0x10AA50u;
label_10aa50:
    // 0x10aa50: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x10aa50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_10aa54:
    // 0x10aa54: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x10aa54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_10aa58:
    // 0x10aa58: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x10aa58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10aa5c:
    // 0x10aa5c: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x10aa5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10aa60:
    // 0x10aa60: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10aa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10aa64:
    // 0x10aa64: 0x1473fff8  bne         $v1, $s3, . + 4 + (-0x8 << 2)
label_10aa68:
    if (ctx->pc == 0x10AA68u) {
        ctx->pc = 0x10AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA64u;
        // 0x10aa68: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA6Cu;
        goto label_10aa6c;
    }
    ctx->pc = 0x10AA64u;
    {
        const bool branch_taken_0x10aa64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        ctx->pc = 0x10AA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA64u;
        // 0x10aa68: 0x24420008  addiu       $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa64) {
            ctx->pc = 0x10AA48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa48;
        }
    }
    ctx->pc = 0x10AA6Cu;
label_10aa6c:
    // 0x10aa6c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x10aa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_10aa70:
    // 0x10aa70: 0x26530080  addiu       $s3, $s2, 0x80
    ctx->pc = 0x10aa70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
label_10aa74:
    // 0x10aa74: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x10aa74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_10aa78:
    // 0x10aa78: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10aa78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10aa7c:
    // 0x10aa7c: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10aa7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10aa80:
    // 0x10aa80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_10aa84:
    if (ctx->pc == 0x10AA84u) {
        ctx->pc = 0x10AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA80u;
        // 0x10aa84: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AA88u;
        goto label_10aa88;
    }
    ctx->pc = 0x10AA80u;
    {
        const bool branch_taken_0x10aa80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AA80u;
        // 0x10aa84: 0x8e260008  lw          $a2, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aa80) {
            ctx->pc = 0x10AAA8u;
            goto label_10aaa8;
        }
    }
    ctx->pc = 0x10AA88u;
label_10aa88:
    // 0x10aa88: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10aa8c:
    // 0x10aa8c: 0x0  nop
    ctx->pc = 0x10aa8cu;
    // NOP
label_10aa90:
    // 0x10aa90: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10aa90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10aa94:
    // 0x10aa94: 0x0  nop
    ctx->pc = 0x10aa94u;
    // NOP
label_10aa98:
    // 0x10aa98: 0x0  nop
    ctx->pc = 0x10aa98u;
    // NOP
label_10aa9c:
    // 0x10aa9c: 0x0  nop
    ctx->pc = 0x10aa9cu;
    // NOP
label_10aaa0:
    // 0x10aaa0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10aaa4:
    if (ctx->pc == 0x10AAA4u) {
        ctx->pc = 0x10AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAA0u;
        // 0x10aaa4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAA8u;
        goto label_10aaa8;
    }
    ctx->pc = 0x10AAA0u;
    {
        const bool branch_taken_0x10aaa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAA0u;
        // 0x10aaa4: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aaa0) {
            ctx->pc = 0x10AA90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10aa90;
        }
    }
    ctx->pc = 0x10AAA8u;
label_10aaa8:
    // 0x10aaa8: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10aaac:
    // 0x10aaac: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10aaacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10aab0:
    // 0x10aab0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_10aab4:
    if (ctx->pc == 0x10AAB4u) {
        ctx->pc = 0x10AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAB0u;
        // 0x10aab4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAB8u;
        goto label_10aab8;
    }
    ctx->pc = 0x10AAB0u;
    {
        const bool branch_taken_0x10aab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAB0u;
        // 0x10aab4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aab0) {
            ctx->pc = 0x10AAF0u;
            goto label_10aaf0;
        }
    }
    ctx->pc = 0x10AAB8u;
label_10aab8:
    // 0x10aab8: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10aab8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10aabc:
    // 0x10aabc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10aac0:
    if (ctx->pc == 0x10AAC0u) {
        ctx->pc = 0x10AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AABCu;
        // 0x10aac0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAC4u;
        goto label_10aac4;
    }
    ctx->pc = 0x10AABCu;
    {
        const bool branch_taken_0x10aabc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AABCu;
        // 0x10aac0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aabc) {
            ctx->pc = 0x10AAD4u;
            goto label_10aad4;
        }
    }
    ctx->pc = 0x10AAC4u;
label_10aac4:
    // 0x10aac4: 0xc0c5486  jal         func_315218
label_10aac8:
    if (ctx->pc == 0x10AAC8u) {
        ctx->pc = 0x10AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AAC4u;
        // 0x10aac8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AACCu;
        goto label_10aacc;
    }
    ctx->pc = 0x10AAC4u;
    SET_GPR_U32(ctx, 31, 0x10AACCu);
    ctx->pc = 0x10AAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AAC4u;
    // 0x10aac8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10AAC4u, 0x10AACCu)) {
        return;
    }
    ctx->pc = 0x10AACCu;
label_10aacc:
    // 0x10aacc: 0x10000009  b           . + 4 + (0x9 << 2)
label_10aad0:
    if (ctx->pc == 0x10AAD0u) {
        ctx->pc = 0x10AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AACCu;
        // 0x10aad0: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AAD4u;
        goto label_10aad4;
    }
    ctx->pc = 0x10AACCu;
    {
        const bool branch_taken_0x10aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AACCu;
        // 0x10aad0: 0x2501021  addu        $v0, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aacc) {
            ctx->pc = 0x10AAF4u;
            goto label_10aaf4;
        }
    }
    ctx->pc = 0x10AAD4u;
label_10aad4:
    // 0x10aad4: 0x26e48290  addiu       $a0, $s7, -0x7D70
    ctx->pc = 0x10aad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294935184));
label_10aad8:
    // 0x10aad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10aad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10aadc:
    // 0x10aadc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10aadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10aae0:
    // 0x10aae0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_10aae4:
    // 0x10aae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x10aae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10aae8:
    // 0x10aae8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x10aae8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_10aaec:
    // 0x10aaec: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10aaecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10aaf0:
    // 0x10aaf0: 0x2501021  addu        $v0, $s2, $s0
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_10aaf4:
    // 0x10aaf4: 0xae330008  sw          $s3, 0x8($s1)
    ctx->pc = 0x10aaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 19));
label_10aaf8:
    // 0x10aaf8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x10aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_10aafc:
    // 0x10aafc: 0xae320000  sw          $s2, 0x0($s1)
    ctx->pc = 0x10aafcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
label_10ab00:
    // 0x10ab00: 0x8ec50004  lw          $a1, 0x4($s6)
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_10ab04:
    // 0x10ab04: 0x3c03001e  lui         $v1, 0x1E
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)30 << 16));
label_10ab08:
    // 0x10ab08: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x10ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_10ab0c:
    // 0x10ab0c: 0x3c040020  lui         $a0, 0x20
    ctx->pc = 0x10ab0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
label_10ab10:
    // 0x10ab10: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x10ab10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_10ab14:
    // 0x10ab14: 0x10a2000b  beq         $a1, $v0, . + 4 + (0xB << 2)
label_10ab18:
    if (ctx->pc == 0x10AB18u) {
        ctx->pc = 0x10AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB14u;
        // 0x10ab18: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB1Cu;
        goto label_10ab1c;
    }
    ctx->pc = 0x10AB14u;
    {
        const bool branch_taken_0x10ab14 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x10AB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB14u;
        // 0x10ab18: 0xafa40024  sw          $a0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab14) {
            ctx->pc = 0x10AB44u;
            goto label_10ab44;
        }
    }
    ctx->pc = 0x10AB1Cu;
label_10ab1c:
    // 0x10ab1c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
label_10ab20:
    if (ctx->pc == 0x10AB20u) {
        ctx->pc = 0x10AB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB1Cu;
        // 0x10ab20: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB24u;
        goto label_10ab24;
    }
    ctx->pc = 0x10AB1Cu;
    {
        const bool branch_taken_0x10ab1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ab1c) {
            ctx->pc = 0x10AB20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AB1Cu;
            // 0x10ab20: 0x8ec20004  lw          $v0, 0x4($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AB38u;
            goto label_10ab38;
        }
    }
    ctx->pc = 0x10AB24u;
label_10ab24:
    // 0x10ab24: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x10ab24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_10ab28:
    // 0x10ab28: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x10ab28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_10ab2c:
    // 0x10ab2c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x10ab2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_10ab30:
    // 0x10ab30: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x10ab30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_10ab34:
    // 0x10ab34: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x10ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_10ab38:
    // 0x10ab38: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x10ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_10ab3c:
    // 0x10ab3c: 0x10000004  b           . + 4 + (0x4 << 2)
label_10ab40:
    if (ctx->pc == 0x10AB40u) {
        ctx->pc = 0x10AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB3Cu;
        // 0x10ab40: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB44u;
        goto label_10ab44;
    }
    ctx->pc = 0x10AB3Cu;
    {
        const bool branch_taken_0x10ab3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB3Cu;
        // 0x10ab40: 0xaec20004  sw          $v0, 0x4($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab3c) {
            ctx->pc = 0x10AB50u;
            goto label_10ab50;
        }
    }
    ctx->pc = 0x10AB44u;
label_10ab44:
    // 0x10ab44: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x10ab44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_10ab48:
    // 0x10ab48: 0xc042602  jal         func_109808
label_10ab4c:
    if (ctx->pc == 0x10AB4Cu) {
        ctx->pc = 0x10AB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB48u;
        // 0x10ab4c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB50u;
        goto label_10ab50;
    }
    ctx->pc = 0x10AB48u;
    SET_GPR_U32(ctx, 31, 0x10AB50u);
    ctx->pc = 0x10AB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AB48u;
    // 0x10ab4c: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x109808u, 0x10AB48u, 0x10AB50u)) {
        return;
    }
    ctx->pc = 0x10AB50u;
label_10ab50:
    // 0x10ab50: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x10ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_10ab54:
    // 0x10ab54: 0xafc00018  sw          $zero, 0x18($fp)
    ctx->pc = 0x10ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 0));
label_10ab58:
    // 0x10ab58: 0x1000008a  b           . + 4 + (0x8A << 2)
label_10ab5c:
    if (ctx->pc == 0x10AB5Cu) {
        ctx->pc = 0x10AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB58u;
        // 0x10ab5c: 0xafc2001c  sw          $v0, 0x1C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB60u;
        goto label_10ab60;
    }
    ctx->pc = 0x10AB58u;
    {
        const bool branch_taken_0x10ab58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB58u;
        // 0x10ab5c: 0xafc2001c  sw          $v0, 0x1C($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab58) {
            ctx->pc = 0x10AD84u;
            goto label_10ad84;
        }
    }
    ctx->pc = 0x10AB60u;
label_10ab60:
    // 0x10ab60: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_10ab64:
    // 0x10ab64: 0x245042b0  addiu       $s0, $v0, 0x42B0
    ctx->pc = 0x10ab64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17072));
label_10ab68:
    // 0x10ab68: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x10ab68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_10ab6c:
    // 0x10ab6c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10ab70:
    // 0x10ab70: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10ab70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_10ab74:
    // 0x10ab74: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ab74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ab78:
    // 0x10ab78: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_10ab7c:
    if (ctx->pc == 0x10AB7Cu) {
        ctx->pc = 0x10AB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB78u;
        // 0x10ab7c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AB80u;
        goto label_10ab80;
    }
    ctx->pc = 0x10AB78u;
    {
        const bool branch_taken_0x10ab78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ab78) {
            ctx->pc = 0x10AB7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AB78u;
            // 0x10ab7c: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ABA4u;
            goto label_10aba4;
        }
    }
    ctx->pc = 0x10AB80u;
label_10ab80:
    // 0x10ab80: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10ab80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10ab84:
    // 0x10ab84: 0x0  nop
    ctx->pc = 0x10ab84u;
    // NOP
label_10ab88:
    // 0x10ab88: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ab88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ab8c:
    // 0x10ab8c: 0x0  nop
    ctx->pc = 0x10ab8cu;
    // NOP
label_10ab90:
    // 0x10ab90: 0x0  nop
    ctx->pc = 0x10ab90u;
    // NOP
label_10ab94:
    // 0x10ab94: 0x0  nop
    ctx->pc = 0x10ab94u;
    // NOP
label_10ab98:
    // 0x10ab98: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10ab9c:
    if (ctx->pc == 0x10AB9Cu) {
        ctx->pc = 0x10AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB98u;
        // 0x10ab9c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABA0u;
        goto label_10aba0;
    }
    ctx->pc = 0x10AB98u;
    {
        const bool branch_taken_0x10ab98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AB98u;
        // 0x10ab9c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ab98) {
            ctx->pc = 0x10AB88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ab88;
        }
    }
    ctx->pc = 0x10ABA0u;
label_10aba0:
    // 0x10aba0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x10aba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10aba4:
    // 0x10aba4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x10aba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_10aba8:
    // 0x10aba8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10aba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10abac:
    // 0x10abac: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10abb0:
    // 0x10abb0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10abb4:
    if (ctx->pc == 0x10ABB4u) {
        ctx->pc = 0x10ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB0u;
        // 0x10abb4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABB8u;
        goto label_10abb8;
    }
    ctx->pc = 0x10ABB0u;
    {
        const bool branch_taken_0x10abb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABB0u;
        // 0x10abb4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abb0) {
            ctx->pc = 0x10ABF4u;
            goto label_10abf4;
        }
    }
    ctx->pc = 0x10ABB8u;
label_10abb8:
    // 0x10abb8: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10abb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10abbc:
    // 0x10abbc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10abc0:
    if (ctx->pc == 0x10ABC0u) {
        ctx->pc = 0x10ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABBCu;
        // 0x10abc0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABC4u;
        goto label_10abc4;
    }
    ctx->pc = 0x10ABBCu;
    {
        const bool branch_taken_0x10abbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABBCu;
        // 0x10abc0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abbc) {
            ctx->pc = 0x10ABD4u;
            goto label_10abd4;
        }
    }
    ctx->pc = 0x10ABC4u;
label_10abc4:
    // 0x10abc4: 0xc0c5486  jal         func_315218
label_10abc8:
    if (ctx->pc == 0x10ABC8u) {
        ctx->pc = 0x10ABC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABC4u;
        // 0x10abc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABCCu;
        goto label_10abcc;
    }
    ctx->pc = 0x10ABC4u;
    SET_GPR_U32(ctx, 31, 0x10ABCCu);
    ctx->pc = 0x10ABC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ABC4u;
    // 0x10abc8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10ABC4u, 0x10ABCCu)) {
        return;
    }
    ctx->pc = 0x10ABCCu;
label_10abcc:
    // 0x10abcc: 0x1000000a  b           . + 4 + (0xA << 2)
label_10abd0:
    if (ctx->pc == 0x10ABD0u) {
        ctx->pc = 0x10ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABCCu;
        // 0x10abd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ABD4u;
        goto label_10abd4;
    }
    ctx->pc = 0x10ABCCu;
    {
        const bool branch_taken_0x10abcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ABCCu;
        // 0x10abd0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10abcc) {
            ctx->pc = 0x10ABF8u;
            goto label_10abf8;
        }
    }
    ctx->pc = 0x10ABD4u;
label_10abd4:
    // 0x10abd4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10abd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10abd8:
    // 0x10abd8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10abdc:
    // 0x10abdc: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10abdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10abe0:
    // 0x10abe0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10abe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10abe4:
    // 0x10abe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10abe8:
    // 0x10abe8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10abe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10abec:
    // 0x10abec: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10abecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10abf0:
    // 0x10abf0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10abf4:
    // 0x10abf4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10abf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10abf8:
    // 0x10abf8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10abf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10abfc:
    // 0x10abfc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10abfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10ac00:
    // 0x10ac00: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ac00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ac04:
    // 0x10ac04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ac08:
    if (ctx->pc == 0x10AC08u) {
        ctx->pc = 0x10AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC04u;
        // 0x10ac08: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC0Cu;
        goto label_10ac0c;
    }
    ctx->pc = 0x10AC04u;
    {
        const bool branch_taken_0x10ac04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC04u;
        // 0x10ac08: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac04) {
            ctx->pc = 0x10AC28u;
            goto label_10ac28;
        }
    }
    ctx->pc = 0x10AC0Cu;
label_10ac0c:
    // 0x10ac0c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10ac10:
    // 0x10ac10: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ac10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ac14:
    // 0x10ac14: 0x0  nop
    ctx->pc = 0x10ac14u;
    // NOP
label_10ac18:
    // 0x10ac18: 0x0  nop
    ctx->pc = 0x10ac18u;
    // NOP
label_10ac1c:
    // 0x10ac1c: 0x0  nop
    ctx->pc = 0x10ac1cu;
    // NOP
label_10ac20:
    // 0x10ac20: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10ac24:
    if (ctx->pc == 0x10AC24u) {
        ctx->pc = 0x10AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC20u;
        // 0x10ac24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC28u;
        goto label_10ac28;
    }
    ctx->pc = 0x10AC20u;
    {
        const bool branch_taken_0x10ac20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC20u;
        // 0x10ac24: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac20) {
            ctx->pc = 0x10AC10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ac10;
        }
    }
    ctx->pc = 0x10AC28u;
label_10ac28:
    // 0x10ac28: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10ac28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10ac2c:
    // 0x10ac2c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10ac2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10ac30:
    // 0x10ac30: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10ac34:
    if (ctx->pc == 0x10AC34u) {
        ctx->pc = 0x10AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC30u;
        // 0x10ac34: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC38u;
        goto label_10ac38;
    }
    ctx->pc = 0x10AC30u;
    {
        const bool branch_taken_0x10ac30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC30u;
        // 0x10ac34: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac30) {
            ctx->pc = 0x10AC74u;
            goto label_10ac74;
        }
    }
    ctx->pc = 0x10AC38u;
label_10ac38:
    // 0x10ac38: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10ac38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10ac3c:
    // 0x10ac3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10ac40:
    if (ctx->pc == 0x10AC40u) {
        ctx->pc = 0x10AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC3Cu;
        // 0x10ac40: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC44u;
        goto label_10ac44;
    }
    ctx->pc = 0x10AC3Cu;
    {
        const bool branch_taken_0x10ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC3Cu;
        // 0x10ac40: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac3c) {
            ctx->pc = 0x10AC54u;
            goto label_10ac54;
        }
    }
    ctx->pc = 0x10AC44u;
label_10ac44:
    // 0x10ac44: 0xc0c5486  jal         func_315218
label_10ac48:
    if (ctx->pc == 0x10AC48u) {
        ctx->pc = 0x10AC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC44u;
        // 0x10ac48: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC4Cu;
        goto label_10ac4c;
    }
    ctx->pc = 0x10AC44u;
    SET_GPR_U32(ctx, 31, 0x10AC4Cu);
    ctx->pc = 0x10AC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AC44u;
    // 0x10ac48: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10AC44u, 0x10AC4Cu)) {
        return;
    }
    ctx->pc = 0x10AC4Cu;
label_10ac4c:
    // 0x10ac4c: 0x1000000a  b           . + 4 + (0xA << 2)
label_10ac50:
    if (ctx->pc == 0x10AC50u) {
        ctx->pc = 0x10AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC4Cu;
        // 0x10ac50: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC54u;
        goto label_10ac54;
    }
    ctx->pc = 0x10AC4Cu;
    {
        const bool branch_taken_0x10ac4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC4Cu;
        // 0x10ac50: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ac4c) {
            ctx->pc = 0x10AC78u;
            goto label_10ac78;
        }
    }
    ctx->pc = 0x10AC54u;
label_10ac54:
    // 0x10ac54: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10ac58:
    // 0x10ac58: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10ac5c:
    // 0x10ac5c: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10ac5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10ac60:
    // 0x10ac60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ac60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10ac64:
    // 0x10ac64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ac68:
    // 0x10ac68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10ac6c:
    // 0x10ac6c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10ac70:
    // 0x10ac70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10ac74:
    // 0x10ac74: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x10ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_10ac78:
    // 0x10ac78: 0x24504290  addiu       $s0, $v0, 0x4290
    ctx->pc = 0x10ac78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 17040));
label_10ac7c:
    // 0x10ac7c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x10ac7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_10ac80:
    // 0x10ac80: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x10ac80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_10ac84:
    // 0x10ac84: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x10ac84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_10ac88:
    // 0x10ac88: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ac88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ac8c:
    // 0x10ac8c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_10ac90:
    if (ctx->pc == 0x10AC90u) {
        ctx->pc = 0x10AC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AC8Cu;
        // 0x10ac90: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AC94u;
        goto label_10ac94;
    }
    ctx->pc = 0x10AC8Cu;
    {
        const bool branch_taken_0x10ac8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10ac8c) {
            ctx->pc = 0x10AC90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AC8Cu;
            // 0x10ac90: 0x8cc50000  lw          $a1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10ACB4u;
            goto label_10acb4;
        }
    }
    ctx->pc = 0x10AC94u;
label_10ac94:
    // 0x10ac94: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10ac98:
    // 0x10ac98: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ac98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ac9c:
    // 0x10ac9c: 0x0  nop
    ctx->pc = 0x10ac9cu;
    // NOP
label_10aca0:
    // 0x10aca0: 0x0  nop
    ctx->pc = 0x10aca0u;
    // NOP
label_10aca4:
    // 0x10aca4: 0x0  nop
    ctx->pc = 0x10aca4u;
    // NOP
label_10aca8:
    // 0x10aca8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_10acac:
    if (ctx->pc == 0x10ACACu) {
        ctx->pc = 0x10ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA8u;
        // 0x10acac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACB0u;
        goto label_10acb0;
    }
    ctx->pc = 0x10ACA8u;
    {
        const bool branch_taken_0x10aca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ACACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACA8u;
        // 0x10acac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10aca8) {
            ctx->pc = 0x10AC98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ac98;
        }
    }
    ctx->pc = 0x10ACB0u;
label_10acb0:
    // 0x10acb0: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x10acb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_10acb4:
    // 0x10acb4: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x10acb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_10acb8:
    // 0x10acb8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x10acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_10acbc:
    // 0x10acbc: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10acbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10acc0:
    // 0x10acc0: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10acc4:
    if (ctx->pc == 0x10ACC4u) {
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACC8u;
        goto label_10acc8;
    }
    ctx->pc = 0x10ACC0u;
    {
        const bool branch_taken_0x10acc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACC0u;
        // 0x10acc4: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acc0) {
            ctx->pc = 0x10AD04u;
            goto label_10ad04;
        }
    }
    ctx->pc = 0x10ACC8u;
label_10acc8:
    // 0x10acc8: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10acc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10accc:
    // 0x10accc: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10acd0:
    if (ctx->pc == 0x10ACD0u) {
        ctx->pc = 0x10ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACCCu;
        // 0x10acd0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACD4u;
        goto label_10acd4;
    }
    ctx->pc = 0x10ACCCu;
    {
        const bool branch_taken_0x10accc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10ACD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACCCu;
        // 0x10acd0: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10accc) {
            ctx->pc = 0x10ACE4u;
            goto label_10ace4;
        }
    }
    ctx->pc = 0x10ACD4u;
label_10acd4:
    // 0x10acd4: 0xc0c5486  jal         func_315218
label_10acd8:
    if (ctx->pc == 0x10ACD8u) {
        ctx->pc = 0x10ACD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACD4u;
        // 0x10acd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACDCu;
        goto label_10acdc;
    }
    ctx->pc = 0x10ACD4u;
    SET_GPR_U32(ctx, 31, 0x10ACDCu);
    ctx->pc = 0x10ACD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10ACD4u;
    // 0x10acd8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10ACD4u, 0x10ACDCu)) {
        return;
    }
    ctx->pc = 0x10ACDCu;
label_10acdc:
    // 0x10acdc: 0x1000000a  b           . + 4 + (0xA << 2)
label_10ace0:
    if (ctx->pc == 0x10ACE0u) {
        ctx->pc = 0x10ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACDCu;
        // 0x10ace0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ACE4u;
        goto label_10ace4;
    }
    ctx->pc = 0x10ACDCu;
    {
        const bool branch_taken_0x10acdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10ACE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ACDCu;
        // 0x10ace0: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10acdc) {
            ctx->pc = 0x10AD08u;
            goto label_10ad08;
        }
    }
    ctx->pc = 0x10ACE4u;
label_10ace4:
    // 0x10ace4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10ace8:
    // 0x10ace8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10acec:
    // 0x10acec: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10acecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10acf0:
    // 0x10acf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10acf4:
    // 0x10acf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10acf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10acf8:
    // 0x10acf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10acfc:
    // 0x10acfc: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10acfcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10ad00:
    // 0x10ad00: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10ad00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10ad04:
    // 0x10ad04: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x10ad04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_10ad08:
    // 0x10ad08: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x10ad08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_10ad0c:
    // 0x10ad0c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x10ad0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_10ad10:
    // 0x10ad10: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ad10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ad14:
    // 0x10ad14: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_10ad18:
    if (ctx->pc == 0x10AD18u) {
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD1Cu;
        goto label_10ad1c;
    }
    ctx->pc = 0x10AD14u;
    {
        const bool branch_taken_0x10ad14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD14u;
        // 0x10ad18: 0x8e060008  lw          $a2, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad14) {
            ctx->pc = 0x10AD38u;
            goto label_10ad38;
        }
    }
    ctx->pc = 0x10AD1Cu;
label_10ad1c:
    // 0x10ad1c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x10ad1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_10ad20:
    // 0x10ad20: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x10ad20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_10ad24:
    // 0x10ad24: 0x0  nop
    ctx->pc = 0x10ad24u;
    // NOP
label_10ad28:
    // 0x10ad28: 0x0  nop
    ctx->pc = 0x10ad28u;
    // NOP
label_10ad2c:
    // 0x10ad2c: 0x0  nop
    ctx->pc = 0x10ad2cu;
    // NOP
label_10ad30:
    // 0x10ad30: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_10ad34:
    if (ctx->pc == 0x10AD34u) {
        ctx->pc = 0x10AD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD30u;
        // 0x10ad34: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD38u;
        goto label_10ad38;
    }
    ctx->pc = 0x10AD30u;
    {
        const bool branch_taken_0x10ad30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ad30) {
            ctx->pc = 0x10AD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x10AD30u;
            // 0x10ad34: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10AD20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10ad20;
        }
    }
    ctx->pc = 0x10AD38u;
label_10ad38:
    // 0x10ad38: 0xc51023  subu        $v0, $a2, $a1
    ctx->pc = 0x10ad38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_10ad3c:
    // 0x10ad3c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x10ad3cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_10ad40:
    // 0x10ad40: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_10ad44:
    if (ctx->pc == 0x10AD44u) {
        ctx->pc = 0x10AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD40u;
        // 0x10ad44: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD48u;
        goto label_10ad48;
    }
    ctx->pc = 0x10AD40u;
    {
        const bool branch_taken_0x10ad40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD40u;
        // 0x10ad44: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad40) {
            ctx->pc = 0x10AD84u;
            goto label_10ad84;
        }
    }
    ctx->pc = 0x10AD48u;
label_10ad48:
    // 0x10ad48: 0x2c620081  sltiu       $v0, $v1, 0x81
    ctx->pc = 0x10ad48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_10ad4c:
    // 0x10ad4c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_10ad50:
    if (ctx->pc == 0x10AD50u) {
        ctx->pc = 0x10AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD4Cu;
        // 0x10ad50: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD54u;
        goto label_10ad54;
    }
    ctx->pc = 0x10AD4Cu;
    {
        const bool branch_taken_0x10ad4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x10AD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD4Cu;
        // 0x10ad50: 0x310c2  srl         $v0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad4c) {
            ctx->pc = 0x10AD64u;
            goto label_10ad64;
        }
    }
    ctx->pc = 0x10AD54u;
label_10ad54:
    // 0x10ad54: 0xc0c5486  jal         func_315218
label_10ad58:
    if (ctx->pc == 0x10AD58u) {
        ctx->pc = 0x10AD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD54u;
        // 0x10ad58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD5Cu;
        goto label_10ad5c;
    }
    ctx->pc = 0x10AD54u;
    SET_GPR_U32(ctx, 31, 0x10AD5Cu);
    ctx->pc = 0x10AD58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10AD54u;
    // 0x10ad58: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315218u, 0x10AD54u, 0x10AD5Cu)) {
        return;
    }
    ctx->pc = 0x10AD5Cu;
label_10ad5c:
    // 0x10ad5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_10ad60:
    if (ctx->pc == 0x10AD60u) {
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10AD64u;
        goto label_10ad64;
    }
    ctx->pc = 0x10AD5Cu;
    {
        const bool branch_taken_0x10ad5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10AD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10AD5Cu;
        // 0x10ad60: 0x7bb000d0  lq          $s0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ad5c) {
            ctx->pc = 0x10AD88u;
            goto label_10ad88;
        }
    }
    ctx->pc = 0x10AD64u;
label_10ad64:
    // 0x10ad64: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x10ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_10ad68:
    // 0x10ad68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x10ad68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_10ad6c:
    // 0x10ad6c: 0x24638290  addiu       $v1, $v1, -0x7D70
    ctx->pc = 0x10ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935184));
label_10ad70:
    // 0x10ad70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x10ad70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_10ad74:
    // 0x10ad74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x10ad74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_10ad78:
    // 0x10ad78: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x10ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_10ad7c:
    // 0x10ad7c: 0xaca40000  sw          $a0, 0x0($a1)
    ctx->pc = 0x10ad7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
label_10ad80:
    // 0x10ad80: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x10ad80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_10ad84:
    // 0x10ad84: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x10ad84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_10ad88:
    // 0x10ad88: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x10ad88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_10ad8c:
    // 0x10ad8c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x10ad8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_10ad90:
    // 0x10ad90: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x10ad90u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_10ad94:
    // 0x10ad94: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x10ad94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_10ad98:
    // 0x10ad98: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x10ad98u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_10ad9c:
    // 0x10ad9c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x10ad9cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_10ada0:
    // 0x10ada0: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x10ada0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_10ada4:
    // 0x10ada4: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x10ada4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_10ada8:
    // 0x10ada8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x10ada8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_10adac:
    // 0x10adac: 0x3e00008  jr          $ra
label_10adb0:
    if (ctx->pc == 0x10ADB0u) {
        ctx->pc = 0x10ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADACu;
        // 0x10adb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10ADB4u;
        goto label_10adb4;
    }
    ctx->pc = 0x10ADACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10ADB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10ADACu;
        // 0x10adb0: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10ADACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10ADB4u;
label_10adb4:
    // 0x10adb4: 0x0  nop
    ctx->pc = 0x10adb4u;
    // NOP
    ctx->pc = 0x10adb8u;
}
