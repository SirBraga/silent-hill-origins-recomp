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

// Function: sub_00315650
// Address: 0x315650 - 0x316030
void sub_00315650_0x315650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00315650_0x315650");
#endif

    switch (ctx->pc) {
        case 0x315650u: goto label_315650;
        case 0x315654u: goto label_315654;
        case 0x315658u: goto label_315658;
        case 0x31565cu: goto label_31565c;
        case 0x315660u: goto label_315660;
        case 0x315664u: goto label_315664;
        case 0x315668u: goto label_315668;
        case 0x31566cu: goto label_31566c;
        case 0x315670u: goto label_315670;
        case 0x315674u: goto label_315674;
        case 0x315678u: goto label_315678;
        case 0x31567cu: goto label_31567c;
        case 0x315680u: goto label_315680;
        case 0x315684u: goto label_315684;
        case 0x315688u: goto label_315688;
        case 0x31568cu: goto label_31568c;
        case 0x315690u: goto label_315690;
        case 0x315694u: goto label_315694;
        case 0x315698u: goto label_315698;
        case 0x31569cu: goto label_31569c;
        case 0x3156a0u: goto label_3156a0;
        case 0x3156a4u: goto label_3156a4;
        case 0x3156a8u: goto label_3156a8;
        case 0x3156acu: goto label_3156ac;
        case 0x3156b0u: goto label_3156b0;
        case 0x3156b4u: goto label_3156b4;
        case 0x3156b8u: goto label_3156b8;
        case 0x3156bcu: goto label_3156bc;
        case 0x3156c0u: goto label_3156c0;
        case 0x3156c4u: goto label_3156c4;
        case 0x3156c8u: goto label_3156c8;
        case 0x3156ccu: goto label_3156cc;
        case 0x3156d0u: goto label_3156d0;
        case 0x3156d4u: goto label_3156d4;
        case 0x3156d8u: goto label_3156d8;
        case 0x3156dcu: goto label_3156dc;
        case 0x3156e0u: goto label_3156e0;
        case 0x3156e4u: goto label_3156e4;
        case 0x3156e8u: goto label_3156e8;
        case 0x3156ecu: goto label_3156ec;
        case 0x3156f0u: goto label_3156f0;
        case 0x3156f4u: goto label_3156f4;
        case 0x3156f8u: goto label_3156f8;
        case 0x3156fcu: goto label_3156fc;
        case 0x315700u: goto label_315700;
        case 0x315704u: goto label_315704;
        case 0x315708u: goto label_315708;
        case 0x31570cu: goto label_31570c;
        case 0x315710u: goto label_315710;
        case 0x315714u: goto label_315714;
        case 0x315718u: goto label_315718;
        case 0x31571cu: goto label_31571c;
        case 0x315720u: goto label_315720;
        case 0x315724u: goto label_315724;
        case 0x315728u: goto label_315728;
        case 0x31572cu: goto label_31572c;
        case 0x315730u: goto label_315730;
        case 0x315734u: goto label_315734;
        case 0x315738u: goto label_315738;
        case 0x31573cu: goto label_31573c;
        case 0x315740u: goto label_315740;
        case 0x315744u: goto label_315744;
        case 0x315748u: goto label_315748;
        case 0x31574cu: goto label_31574c;
        case 0x315750u: goto label_315750;
        case 0x315754u: goto label_315754;
        case 0x315758u: goto label_315758;
        case 0x31575cu: goto label_31575c;
        case 0x315760u: goto label_315760;
        case 0x315764u: goto label_315764;
        case 0x315768u: goto label_315768;
        case 0x31576cu: goto label_31576c;
        case 0x315770u: goto label_315770;
        case 0x315774u: goto label_315774;
        case 0x315778u: goto label_315778;
        case 0x31577cu: goto label_31577c;
        case 0x315780u: goto label_315780;
        case 0x315784u: goto label_315784;
        case 0x315788u: goto label_315788;
        case 0x31578cu: goto label_31578c;
        case 0x315790u: goto label_315790;
        case 0x315794u: goto label_315794;
        case 0x315798u: goto label_315798;
        case 0x31579cu: goto label_31579c;
        case 0x3157a0u: goto label_3157a0;
        case 0x3157a4u: goto label_3157a4;
        case 0x3157a8u: goto label_3157a8;
        case 0x3157acu: goto label_3157ac;
        case 0x3157b0u: goto label_3157b0;
        case 0x3157b4u: goto label_3157b4;
        case 0x3157b8u: goto label_3157b8;
        case 0x3157bcu: goto label_3157bc;
        case 0x3157c0u: goto label_3157c0;
        case 0x3157c4u: goto label_3157c4;
        case 0x3157c8u: goto label_3157c8;
        case 0x3157ccu: goto label_3157cc;
        case 0x3157d0u: goto label_3157d0;
        case 0x3157d4u: goto label_3157d4;
        case 0x3157d8u: goto label_3157d8;
        case 0x3157dcu: goto label_3157dc;
        case 0x3157e0u: goto label_3157e0;
        case 0x3157e4u: goto label_3157e4;
        case 0x3157e8u: goto label_3157e8;
        case 0x3157ecu: goto label_3157ec;
        case 0x3157f0u: goto label_3157f0;
        case 0x3157f4u: goto label_3157f4;
        case 0x3157f8u: goto label_3157f8;
        case 0x3157fcu: goto label_3157fc;
        case 0x315800u: goto label_315800;
        case 0x315804u: goto label_315804;
        case 0x315808u: goto label_315808;
        case 0x31580cu: goto label_31580c;
        case 0x315810u: goto label_315810;
        case 0x315814u: goto label_315814;
        case 0x315818u: goto label_315818;
        case 0x31581cu: goto label_31581c;
        case 0x315820u: goto label_315820;
        case 0x315824u: goto label_315824;
        case 0x315828u: goto label_315828;
        case 0x31582cu: goto label_31582c;
        case 0x315830u: goto label_315830;
        case 0x315834u: goto label_315834;
        case 0x315838u: goto label_315838;
        case 0x31583cu: goto label_31583c;
        case 0x315840u: goto label_315840;
        case 0x315844u: goto label_315844;
        case 0x315848u: goto label_315848;
        case 0x31584cu: goto label_31584c;
        case 0x315850u: goto label_315850;
        case 0x315854u: goto label_315854;
        case 0x315858u: goto label_315858;
        case 0x31585cu: goto label_31585c;
        case 0x315860u: goto label_315860;
        case 0x315864u: goto label_315864;
        case 0x315868u: goto label_315868;
        case 0x31586cu: goto label_31586c;
        case 0x315870u: goto label_315870;
        case 0x315874u: goto label_315874;
        case 0x315878u: goto label_315878;
        case 0x31587cu: goto label_31587c;
        case 0x315880u: goto label_315880;
        case 0x315884u: goto label_315884;
        case 0x315888u: goto label_315888;
        case 0x31588cu: goto label_31588c;
        case 0x315890u: goto label_315890;
        case 0x315894u: goto label_315894;
        case 0x315898u: goto label_315898;
        case 0x31589cu: goto label_31589c;
        case 0x3158a0u: goto label_3158a0;
        case 0x3158a4u: goto label_3158a4;
        case 0x3158a8u: goto label_3158a8;
        case 0x3158acu: goto label_3158ac;
        case 0x3158b0u: goto label_3158b0;
        case 0x3158b4u: goto label_3158b4;
        case 0x3158b8u: goto label_3158b8;
        case 0x3158bcu: goto label_3158bc;
        case 0x3158c0u: goto label_3158c0;
        case 0x3158c4u: goto label_3158c4;
        case 0x3158c8u: goto label_3158c8;
        case 0x3158ccu: goto label_3158cc;
        case 0x3158d0u: goto label_3158d0;
        case 0x3158d4u: goto label_3158d4;
        case 0x3158d8u: goto label_3158d8;
        case 0x3158dcu: goto label_3158dc;
        case 0x3158e0u: goto label_3158e0;
        case 0x3158e4u: goto label_3158e4;
        case 0x3158e8u: goto label_3158e8;
        case 0x3158ecu: goto label_3158ec;
        case 0x3158f0u: goto label_3158f0;
        case 0x3158f4u: goto label_3158f4;
        case 0x3158f8u: goto label_3158f8;
        case 0x3158fcu: goto label_3158fc;
        case 0x315900u: goto label_315900;
        case 0x315904u: goto label_315904;
        case 0x315908u: goto label_315908;
        case 0x31590cu: goto label_31590c;
        case 0x315910u: goto label_315910;
        case 0x315914u: goto label_315914;
        case 0x315918u: goto label_315918;
        case 0x31591cu: goto label_31591c;
        case 0x315920u: goto label_315920;
        case 0x315924u: goto label_315924;
        case 0x315928u: goto label_315928;
        case 0x31592cu: goto label_31592c;
        case 0x315930u: goto label_315930;
        case 0x315934u: goto label_315934;
        case 0x315938u: goto label_315938;
        case 0x31593cu: goto label_31593c;
        case 0x315940u: goto label_315940;
        case 0x315944u: goto label_315944;
        case 0x315948u: goto label_315948;
        case 0x31594cu: goto label_31594c;
        case 0x315950u: goto label_315950;
        case 0x315954u: goto label_315954;
        case 0x315958u: goto label_315958;
        case 0x31595cu: goto label_31595c;
        case 0x315960u: goto label_315960;
        case 0x315964u: goto label_315964;
        case 0x315968u: goto label_315968;
        case 0x31596cu: goto label_31596c;
        case 0x315970u: goto label_315970;
        case 0x315974u: goto label_315974;
        case 0x315978u: goto label_315978;
        case 0x31597cu: goto label_31597c;
        case 0x315980u: goto label_315980;
        case 0x315984u: goto label_315984;
        case 0x315988u: goto label_315988;
        case 0x31598cu: goto label_31598c;
        case 0x315990u: goto label_315990;
        case 0x315994u: goto label_315994;
        case 0x315998u: goto label_315998;
        case 0x31599cu: goto label_31599c;
        case 0x3159a0u: goto label_3159a0;
        case 0x3159a4u: goto label_3159a4;
        case 0x3159a8u: goto label_3159a8;
        case 0x3159acu: goto label_3159ac;
        case 0x3159b0u: goto label_3159b0;
        case 0x3159b4u: goto label_3159b4;
        case 0x3159b8u: goto label_3159b8;
        case 0x3159bcu: goto label_3159bc;
        case 0x3159c0u: goto label_3159c0;
        case 0x3159c4u: goto label_3159c4;
        case 0x3159c8u: goto label_3159c8;
        case 0x3159ccu: goto label_3159cc;
        case 0x3159d0u: goto label_3159d0;
        case 0x3159d4u: goto label_3159d4;
        case 0x3159d8u: goto label_3159d8;
        case 0x3159dcu: goto label_3159dc;
        case 0x3159e0u: goto label_3159e0;
        case 0x3159e4u: goto label_3159e4;
        case 0x3159e8u: goto label_3159e8;
        case 0x3159ecu: goto label_3159ec;
        case 0x3159f0u: goto label_3159f0;
        case 0x3159f4u: goto label_3159f4;
        case 0x3159f8u: goto label_3159f8;
        case 0x3159fcu: goto label_3159fc;
        case 0x315a00u: goto label_315a00;
        case 0x315a04u: goto label_315a04;
        case 0x315a08u: goto label_315a08;
        case 0x315a0cu: goto label_315a0c;
        case 0x315a10u: goto label_315a10;
        case 0x315a14u: goto label_315a14;
        case 0x315a18u: goto label_315a18;
        case 0x315a1cu: goto label_315a1c;
        case 0x315a20u: goto label_315a20;
        case 0x315a24u: goto label_315a24;
        case 0x315a28u: goto label_315a28;
        case 0x315a2cu: goto label_315a2c;
        case 0x315a30u: goto label_315a30;
        case 0x315a34u: goto label_315a34;
        case 0x315a38u: goto label_315a38;
        case 0x315a3cu: goto label_315a3c;
        case 0x315a40u: goto label_315a40;
        case 0x315a44u: goto label_315a44;
        case 0x315a48u: goto label_315a48;
        case 0x315a4cu: goto label_315a4c;
        case 0x315a50u: goto label_315a50;
        case 0x315a54u: goto label_315a54;
        case 0x315a58u: goto label_315a58;
        case 0x315a5cu: goto label_315a5c;
        case 0x315a60u: goto label_315a60;
        case 0x315a64u: goto label_315a64;
        case 0x315a68u: goto label_315a68;
        case 0x315a6cu: goto label_315a6c;
        case 0x315a70u: goto label_315a70;
        case 0x315a74u: goto label_315a74;
        case 0x315a78u: goto label_315a78;
        case 0x315a7cu: goto label_315a7c;
        case 0x315a80u: goto label_315a80;
        case 0x315a84u: goto label_315a84;
        case 0x315a88u: goto label_315a88;
        case 0x315a8cu: goto label_315a8c;
        case 0x315a90u: goto label_315a90;
        case 0x315a94u: goto label_315a94;
        case 0x315a98u: goto label_315a98;
        case 0x315a9cu: goto label_315a9c;
        case 0x315aa0u: goto label_315aa0;
        case 0x315aa4u: goto label_315aa4;
        case 0x315aa8u: goto label_315aa8;
        case 0x315aacu: goto label_315aac;
        case 0x315ab0u: goto label_315ab0;
        case 0x315ab4u: goto label_315ab4;
        case 0x315ab8u: goto label_315ab8;
        case 0x315abcu: goto label_315abc;
        case 0x315ac0u: goto label_315ac0;
        case 0x315ac4u: goto label_315ac4;
        case 0x315ac8u: goto label_315ac8;
        case 0x315accu: goto label_315acc;
        case 0x315ad0u: goto label_315ad0;
        case 0x315ad4u: goto label_315ad4;
        case 0x315ad8u: goto label_315ad8;
        case 0x315adcu: goto label_315adc;
        case 0x315ae0u: goto label_315ae0;
        case 0x315ae4u: goto label_315ae4;
        case 0x315ae8u: goto label_315ae8;
        case 0x315aecu: goto label_315aec;
        case 0x315af0u: goto label_315af0;
        case 0x315af4u: goto label_315af4;
        case 0x315af8u: goto label_315af8;
        case 0x315afcu: goto label_315afc;
        case 0x315b00u: goto label_315b00;
        case 0x315b04u: goto label_315b04;
        case 0x315b08u: goto label_315b08;
        case 0x315b0cu: goto label_315b0c;
        case 0x315b10u: goto label_315b10;
        case 0x315b14u: goto label_315b14;
        case 0x315b18u: goto label_315b18;
        case 0x315b1cu: goto label_315b1c;
        case 0x315b20u: goto label_315b20;
        case 0x315b24u: goto label_315b24;
        case 0x315b28u: goto label_315b28;
        case 0x315b2cu: goto label_315b2c;
        case 0x315b30u: goto label_315b30;
        case 0x315b34u: goto label_315b34;
        case 0x315b38u: goto label_315b38;
        case 0x315b3cu: goto label_315b3c;
        case 0x315b40u: goto label_315b40;
        case 0x315b44u: goto label_315b44;
        case 0x315b48u: goto label_315b48;
        case 0x315b4cu: goto label_315b4c;
        case 0x315b50u: goto label_315b50;
        case 0x315b54u: goto label_315b54;
        case 0x315b58u: goto label_315b58;
        case 0x315b5cu: goto label_315b5c;
        case 0x315b60u: goto label_315b60;
        case 0x315b64u: goto label_315b64;
        case 0x315b68u: goto label_315b68;
        case 0x315b6cu: goto label_315b6c;
        case 0x315b70u: goto label_315b70;
        case 0x315b74u: goto label_315b74;
        case 0x315b78u: goto label_315b78;
        case 0x315b7cu: goto label_315b7c;
        case 0x315b80u: goto label_315b80;
        case 0x315b84u: goto label_315b84;
        case 0x315b88u: goto label_315b88;
        case 0x315b8cu: goto label_315b8c;
        case 0x315b90u: goto label_315b90;
        case 0x315b94u: goto label_315b94;
        case 0x315b98u: goto label_315b98;
        case 0x315b9cu: goto label_315b9c;
        case 0x315ba0u: goto label_315ba0;
        case 0x315ba4u: goto label_315ba4;
        case 0x315ba8u: goto label_315ba8;
        case 0x315bacu: goto label_315bac;
        case 0x315bb0u: goto label_315bb0;
        case 0x315bb4u: goto label_315bb4;
        case 0x315bb8u: goto label_315bb8;
        case 0x315bbcu: goto label_315bbc;
        case 0x315bc0u: goto label_315bc0;
        case 0x315bc4u: goto label_315bc4;
        case 0x315bc8u: goto label_315bc8;
        case 0x315bccu: goto label_315bcc;
        case 0x315bd0u: goto label_315bd0;
        case 0x315bd4u: goto label_315bd4;
        case 0x315bd8u: goto label_315bd8;
        case 0x315bdcu: goto label_315bdc;
        case 0x315be0u: goto label_315be0;
        case 0x315be4u: goto label_315be4;
        case 0x315be8u: goto label_315be8;
        case 0x315becu: goto label_315bec;
        case 0x315bf0u: goto label_315bf0;
        case 0x315bf4u: goto label_315bf4;
        case 0x315bf8u: goto label_315bf8;
        case 0x315bfcu: goto label_315bfc;
        case 0x315c00u: goto label_315c00;
        case 0x315c04u: goto label_315c04;
        case 0x315c08u: goto label_315c08;
        case 0x315c0cu: goto label_315c0c;
        case 0x315c10u: goto label_315c10;
        case 0x315c14u: goto label_315c14;
        case 0x315c18u: goto label_315c18;
        case 0x315c1cu: goto label_315c1c;
        case 0x315c20u: goto label_315c20;
        case 0x315c24u: goto label_315c24;
        case 0x315c28u: goto label_315c28;
        case 0x315c2cu: goto label_315c2c;
        case 0x315c30u: goto label_315c30;
        case 0x315c34u: goto label_315c34;
        case 0x315c38u: goto label_315c38;
        case 0x315c3cu: goto label_315c3c;
        case 0x315c40u: goto label_315c40;
        case 0x315c44u: goto label_315c44;
        case 0x315c48u: goto label_315c48;
        case 0x315c4cu: goto label_315c4c;
        case 0x315c50u: goto label_315c50;
        case 0x315c54u: goto label_315c54;
        case 0x315c58u: goto label_315c58;
        case 0x315c5cu: goto label_315c5c;
        case 0x315c60u: goto label_315c60;
        case 0x315c64u: goto label_315c64;
        case 0x315c68u: goto label_315c68;
        case 0x315c6cu: goto label_315c6c;
        case 0x315c70u: goto label_315c70;
        case 0x315c74u: goto label_315c74;
        case 0x315c78u: goto label_315c78;
        case 0x315c7cu: goto label_315c7c;
        case 0x315c80u: goto label_315c80;
        case 0x315c84u: goto label_315c84;
        case 0x315c88u: goto label_315c88;
        case 0x315c8cu: goto label_315c8c;
        case 0x315c90u: goto label_315c90;
        case 0x315c94u: goto label_315c94;
        case 0x315c98u: goto label_315c98;
        case 0x315c9cu: goto label_315c9c;
        case 0x315ca0u: goto label_315ca0;
        case 0x315ca4u: goto label_315ca4;
        case 0x315ca8u: goto label_315ca8;
        case 0x315cacu: goto label_315cac;
        case 0x315cb0u: goto label_315cb0;
        case 0x315cb4u: goto label_315cb4;
        case 0x315cb8u: goto label_315cb8;
        case 0x315cbcu: goto label_315cbc;
        case 0x315cc0u: goto label_315cc0;
        case 0x315cc4u: goto label_315cc4;
        case 0x315cc8u: goto label_315cc8;
        case 0x315cccu: goto label_315ccc;
        case 0x315cd0u: goto label_315cd0;
        case 0x315cd4u: goto label_315cd4;
        case 0x315cd8u: goto label_315cd8;
        case 0x315cdcu: goto label_315cdc;
        case 0x315ce0u: goto label_315ce0;
        case 0x315ce4u: goto label_315ce4;
        case 0x315ce8u: goto label_315ce8;
        case 0x315cecu: goto label_315cec;
        case 0x315cf0u: goto label_315cf0;
        case 0x315cf4u: goto label_315cf4;
        case 0x315cf8u: goto label_315cf8;
        case 0x315cfcu: goto label_315cfc;
        case 0x315d00u: goto label_315d00;
        case 0x315d04u: goto label_315d04;
        case 0x315d08u: goto label_315d08;
        case 0x315d0cu: goto label_315d0c;
        case 0x315d10u: goto label_315d10;
        case 0x315d14u: goto label_315d14;
        case 0x315d18u: goto label_315d18;
        case 0x315d1cu: goto label_315d1c;
        case 0x315d20u: goto label_315d20;
        case 0x315d24u: goto label_315d24;
        case 0x315d28u: goto label_315d28;
        case 0x315d2cu: goto label_315d2c;
        case 0x315d30u: goto label_315d30;
        case 0x315d34u: goto label_315d34;
        case 0x315d38u: goto label_315d38;
        case 0x315d3cu: goto label_315d3c;
        case 0x315d40u: goto label_315d40;
        case 0x315d44u: goto label_315d44;
        case 0x315d48u: goto label_315d48;
        case 0x315d4cu: goto label_315d4c;
        case 0x315d50u: goto label_315d50;
        case 0x315d54u: goto label_315d54;
        case 0x315d58u: goto label_315d58;
        case 0x315d5cu: goto label_315d5c;
        case 0x315d60u: goto label_315d60;
        case 0x315d64u: goto label_315d64;
        case 0x315d68u: goto label_315d68;
        case 0x315d6cu: goto label_315d6c;
        case 0x315d70u: goto label_315d70;
        case 0x315d74u: goto label_315d74;
        case 0x315d78u: goto label_315d78;
        case 0x315d7cu: goto label_315d7c;
        case 0x315d80u: goto label_315d80;
        case 0x315d84u: goto label_315d84;
        case 0x315d88u: goto label_315d88;
        case 0x315d8cu: goto label_315d8c;
        case 0x315d90u: goto label_315d90;
        case 0x315d94u: goto label_315d94;
        case 0x315d98u: goto label_315d98;
        case 0x315d9cu: goto label_315d9c;
        case 0x315da0u: goto label_315da0;
        case 0x315da4u: goto label_315da4;
        case 0x315da8u: goto label_315da8;
        case 0x315dacu: goto label_315dac;
        case 0x315db0u: goto label_315db0;
        case 0x315db4u: goto label_315db4;
        case 0x315db8u: goto label_315db8;
        case 0x315dbcu: goto label_315dbc;
        case 0x315dc0u: goto label_315dc0;
        case 0x315dc4u: goto label_315dc4;
        case 0x315dc8u: goto label_315dc8;
        case 0x315dccu: goto label_315dcc;
        case 0x315dd0u: goto label_315dd0;
        case 0x315dd4u: goto label_315dd4;
        case 0x315dd8u: goto label_315dd8;
        case 0x315ddcu: goto label_315ddc;
        case 0x315de0u: goto label_315de0;
        case 0x315de4u: goto label_315de4;
        case 0x315de8u: goto label_315de8;
        case 0x315decu: goto label_315dec;
        case 0x315df0u: goto label_315df0;
        case 0x315df4u: goto label_315df4;
        case 0x315df8u: goto label_315df8;
        case 0x315dfcu: goto label_315dfc;
        case 0x315e00u: goto label_315e00;
        case 0x315e04u: goto label_315e04;
        case 0x315e08u: goto label_315e08;
        case 0x315e0cu: goto label_315e0c;
        case 0x315e10u: goto label_315e10;
        case 0x315e14u: goto label_315e14;
        case 0x315e18u: goto label_315e18;
        case 0x315e1cu: goto label_315e1c;
        case 0x315e20u: goto label_315e20;
        case 0x315e24u: goto label_315e24;
        case 0x315e28u: goto label_315e28;
        case 0x315e2cu: goto label_315e2c;
        case 0x315e30u: goto label_315e30;
        case 0x315e34u: goto label_315e34;
        case 0x315e38u: goto label_315e38;
        case 0x315e3cu: goto label_315e3c;
        case 0x315e40u: goto label_315e40;
        case 0x315e44u: goto label_315e44;
        case 0x315e48u: goto label_315e48;
        case 0x315e4cu: goto label_315e4c;
        case 0x315e50u: goto label_315e50;
        case 0x315e54u: goto label_315e54;
        case 0x315e58u: goto label_315e58;
        case 0x315e5cu: goto label_315e5c;
        case 0x315e60u: goto label_315e60;
        case 0x315e64u: goto label_315e64;
        case 0x315e68u: goto label_315e68;
        case 0x315e6cu: goto label_315e6c;
        case 0x315e70u: goto label_315e70;
        case 0x315e74u: goto label_315e74;
        case 0x315e78u: goto label_315e78;
        case 0x315e7cu: goto label_315e7c;
        case 0x315e80u: goto label_315e80;
        case 0x315e84u: goto label_315e84;
        case 0x315e88u: goto label_315e88;
        case 0x315e8cu: goto label_315e8c;
        case 0x315e90u: goto label_315e90;
        case 0x315e94u: goto label_315e94;
        case 0x315e98u: goto label_315e98;
        case 0x315e9cu: goto label_315e9c;
        case 0x315ea0u: goto label_315ea0;
        case 0x315ea4u: goto label_315ea4;
        case 0x315ea8u: goto label_315ea8;
        case 0x315eacu: goto label_315eac;
        case 0x315eb0u: goto label_315eb0;
        case 0x315eb4u: goto label_315eb4;
        case 0x315eb8u: goto label_315eb8;
        case 0x315ebcu: goto label_315ebc;
        case 0x315ec0u: goto label_315ec0;
        case 0x315ec4u: goto label_315ec4;
        case 0x315ec8u: goto label_315ec8;
        case 0x315eccu: goto label_315ecc;
        case 0x315ed0u: goto label_315ed0;
        case 0x315ed4u: goto label_315ed4;
        case 0x315ed8u: goto label_315ed8;
        case 0x315edcu: goto label_315edc;
        case 0x315ee0u: goto label_315ee0;
        case 0x315ee4u: goto label_315ee4;
        case 0x315ee8u: goto label_315ee8;
        case 0x315eecu: goto label_315eec;
        case 0x315ef0u: goto label_315ef0;
        case 0x315ef4u: goto label_315ef4;
        case 0x315ef8u: goto label_315ef8;
        case 0x315efcu: goto label_315efc;
        case 0x315f00u: goto label_315f00;
        case 0x315f04u: goto label_315f04;
        case 0x315f08u: goto label_315f08;
        case 0x315f0cu: goto label_315f0c;
        case 0x315f10u: goto label_315f10;
        case 0x315f14u: goto label_315f14;
        case 0x315f18u: goto label_315f18;
        case 0x315f1cu: goto label_315f1c;
        case 0x315f20u: goto label_315f20;
        case 0x315f24u: goto label_315f24;
        case 0x315f28u: goto label_315f28;
        case 0x315f2cu: goto label_315f2c;
        case 0x315f30u: goto label_315f30;
        case 0x315f34u: goto label_315f34;
        case 0x315f38u: goto label_315f38;
        case 0x315f3cu: goto label_315f3c;
        case 0x315f40u: goto label_315f40;
        case 0x315f44u: goto label_315f44;
        case 0x315f48u: goto label_315f48;
        case 0x315f4cu: goto label_315f4c;
        case 0x315f50u: goto label_315f50;
        case 0x315f54u: goto label_315f54;
        case 0x315f58u: goto label_315f58;
        case 0x315f5cu: goto label_315f5c;
        case 0x315f60u: goto label_315f60;
        case 0x315f64u: goto label_315f64;
        case 0x315f68u: goto label_315f68;
        case 0x315f6cu: goto label_315f6c;
        case 0x315f70u: goto label_315f70;
        case 0x315f74u: goto label_315f74;
        case 0x315f78u: goto label_315f78;
        case 0x315f7cu: goto label_315f7c;
        case 0x315f80u: goto label_315f80;
        case 0x315f84u: goto label_315f84;
        case 0x315f88u: goto label_315f88;
        case 0x315f8cu: goto label_315f8c;
        case 0x315f90u: goto label_315f90;
        case 0x315f94u: goto label_315f94;
        case 0x315f98u: goto label_315f98;
        case 0x315f9cu: goto label_315f9c;
        case 0x315fa0u: goto label_315fa0;
        case 0x315fa4u: goto label_315fa4;
        case 0x315fa8u: goto label_315fa8;
        case 0x315facu: goto label_315fac;
        case 0x315fb0u: goto label_315fb0;
        case 0x315fb4u: goto label_315fb4;
        case 0x315fb8u: goto label_315fb8;
        case 0x315fbcu: goto label_315fbc;
        case 0x315fc0u: goto label_315fc0;
        case 0x315fc4u: goto label_315fc4;
        case 0x315fc8u: goto label_315fc8;
        case 0x315fccu: goto label_315fcc;
        case 0x315fd0u: goto label_315fd0;
        case 0x315fd4u: goto label_315fd4;
        case 0x315fd8u: goto label_315fd8;
        case 0x315fdcu: goto label_315fdc;
        case 0x315fe0u: goto label_315fe0;
        case 0x315fe4u: goto label_315fe4;
        case 0x315fe8u: goto label_315fe8;
        case 0x315fecu: goto label_315fec;
        case 0x315ff0u: goto label_315ff0;
        case 0x315ff4u: goto label_315ff4;
        case 0x315ff8u: goto label_315ff8;
        case 0x315ffcu: goto label_315ffc;
        case 0x316000u: goto label_316000;
        case 0x316004u: goto label_316004;
        case 0x316008u: goto label_316008;
        case 0x31600cu: goto label_31600c;
        case 0x316010u: goto label_316010;
        case 0x316014u: goto label_316014;
        case 0x316018u: goto label_316018;
        case 0x31601cu: goto label_31601c;
        case 0x316020u: goto label_316020;
        case 0x316024u: goto label_316024;
        case 0x316028u: goto label_316028;
        case 0x31602cu: goto label_31602c;
        default: break;
    }

    ctx->pc = 0x315650u;

label_315650:
    // 0x315650: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x315650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_315654:
    // 0x315654: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x315654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
label_315658:
    // 0x315658: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x315658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_31565c:
    // 0x31565c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x31565cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_315660:
    // 0x315660: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x315660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_315664:
    // 0x315664: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x315664u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315668:
    // 0x315668: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x315668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
label_31566c:
    // 0x31566c: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x31566cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315670:
    // 0x315670: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x315670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
label_315674:
    // 0x315674: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x315674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
label_315678:
    // 0x315678: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x315678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
label_31567c:
    // 0x31567c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x31567cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
label_315680:
    // 0x315680: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x315680u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
label_315684:
    // 0x315684: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x315684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_315688:
    // 0x315688: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x315688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_31568c:
    // 0x31568c: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x31568cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
label_315690:
    // 0x315690: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_315694:
    if (ctx->pc == 0x315694u) {
        ctx->pc = 0x315694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315690u;
        // 0x315694: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315698u;
        goto label_315698;
    }
    ctx->pc = 0x315690u;
    {
        const bool branch_taken_0x315690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315690u;
        // 0x315694: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315690) {
            ctx->pc = 0x3156ACu;
            goto label_3156ac;
        }
    }
    ctx->pc = 0x315698u;
label_315698:
    // 0x315698: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x315698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
label_31569c:
    // 0x31569c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_3156a0:
    if (ctx->pc == 0x3156A0u) {
        ctx->pc = 0x3156A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31569Cu;
        // 0x3156a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156A4u;
        goto label_3156a4;
    }
    ctx->pc = 0x31569Cu;
    {
        const bool branch_taken_0x31569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31569c) {
            ctx->pc = 0x3156A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31569Cu;
            // 0x3156a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3156ACu;
            goto label_3156ac;
        }
    }
    ctx->pc = 0x3156A4u;
label_3156a4:
    // 0x3156a4: 0x3a420008  xori        $v0, $s2, 0x8
    ctx->pc = 0x3156a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
label_3156a8:
    // 0x3156a8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3156a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_3156ac:
    // 0x3156ac: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3156acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_3156b0:
    // 0x3156b0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3156b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3156b4:
    // 0x3156b4: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x3156b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_3156b8:
    // 0x3156b8: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_3156bc:
    if (ctx->pc == 0x3156BCu) {
        ctx->pc = 0x3156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B8u;
        // 0x3156bc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156C0u;
        goto label_3156c0;
    }
    ctx->pc = 0x3156B8u;
    {
        const bool branch_taken_0x3156b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156B8u;
        // 0x3156bc: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156b8) {
            ctx->pc = 0x3157B8u;
            goto label_3157b8;
        }
    }
    ctx->pc = 0x3156C0u;
label_3156c0:
    // 0x3156c0: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x3156c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3156c4:
    // 0x3156c4: 0x2d28021  addu        $s0, $s6, $s2
    ctx->pc = 0x3156c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_3156c8:
    // 0x3156c8: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x3156c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3156cc:
    // 0x3156cc: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3156ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3156d0:
    // 0x3156d0: 0x1040024a  beqz        $v0, . + 4 + (0x24A << 2)
label_3156d4:
    if (ctx->pc == 0x3156D4u) {
        ctx->pc = 0x3156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156D0u;
        // 0x3156d4: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156D8u;
        goto label_3156d8;
    }
    ctx->pc = 0x3156D0u;
    {
        const bool branch_taken_0x3156d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156D0u;
        // 0x3156d4: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156d0) {
            ctx->pc = 0x315FFCu;
            goto label_315ffc;
        }
    }
    ctx->pc = 0x3156D8u;
label_3156d8:
    // 0x3156d8: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x3156d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
label_3156dc:
    // 0x3156dc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3156dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_3156e0:
    // 0x3156e0: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x3156e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_3156e4:
    // 0x3156e4: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x3156e4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_3156e8:
    // 0x3156e8: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x3156e8u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_3156ec:
    // 0x3156ec: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3156ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3156f0:
    // 0x3156f0: 0x10000022  b           . + 4 + (0x22 << 2)
label_3156f4:
    if (ctx->pc == 0x3156F4u) {
        ctx->pc = 0x3156F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156F0u;
        // 0x3156f4: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3156F8u;
        goto label_3156f8;
    }
    ctx->pc = 0x3156F0u;
    {
        const bool branch_taken_0x3156f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3156F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3156F0u;
        // 0x3156f4: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3156f0) {
            ctx->pc = 0x31577Cu;
            goto label_31577c;
        }
    }
    ctx->pc = 0x3156F8u;
label_3156f8:
    // 0x3156f8: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_3156fc:
    if (ctx->pc == 0x3156FCu) {
        ctx->pc = 0x315700u;
        goto label_315700;
    }
    ctx->pc = 0x3156F8u;
    {
        const bool branch_taken_0x3156f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3156f8) {
            ctx->pc = 0x315714u;
            goto label_315714;
        }
    }
    ctx->pc = 0x315700u;
label_315700:
    // 0x315700: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x315700u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_315704:
    // 0x315704: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x315704u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_315708:
    // 0x315708: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x315708u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_31570c:
    // 0x31570c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_315710:
    if (ctx->pc == 0x315710u) {
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315714u;
        goto label_315714;
    }
    ctx->pc = 0x31570Cu;
    {
        const bool branch_taken_0x31570c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31570Cu;
        // 0x315710: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31570c) {
            ctx->pc = 0x315778u;
            goto label_315778;
        }
    }
    ctx->pc = 0x315714u;
label_315714:
    // 0x315714: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_315718:
    if (ctx->pc == 0x315718u) {
        ctx->pc = 0x315718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315714u;
        // 0x315718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31571Cu;
        goto label_31571c;
    }
    ctx->pc = 0x315714u;
    {
        const bool branch_taken_0x315714 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x315718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315714u;
        // 0x315718: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315714) {
            ctx->pc = 0x315750u;
            goto label_315750;
        }
    }
    ctx->pc = 0x31571Cu;
label_31571c:
    // 0x31571c: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x31571cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_315720:
    // 0x315720: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x315720u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315724:
    // 0x315724: 0x0  nop
    ctx->pc = 0x315724u;
    // NOP
label_315728:
    // 0x315728: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x315728u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_31572c:
    // 0x31572c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x31572cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315730:
    // 0x315730: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x315730u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315734:
    // 0x315734: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x315734u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_315738:
    // 0x315738: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315738u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_31573c:
    // 0x31573c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x31573cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_315740:
    // 0x315740: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315744:
    if (ctx->pc == 0x315744u) {
        ctx->pc = 0x315744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315740u;
        // 0x315744: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315748u;
        goto label_315748;
    }
    ctx->pc = 0x315740u;
    {
        const bool branch_taken_0x315740 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315740u;
        // 0x315744: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315740) {
            ctx->pc = 0x315728u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315728;
        }
    }
    ctx->pc = 0x315748u;
label_315748:
    // 0x315748: 0x1000000c  b           . + 4 + (0xC << 2)
label_31574c:
    if (ctx->pc == 0x31574Cu) {
        ctx->pc = 0x31574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315748u;
        // 0x31574c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315750u;
        goto label_315750;
    }
    ctx->pc = 0x315748u;
    {
        const bool branch_taken_0x315748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31574Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315748u;
        // 0x31574c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315748) {
            ctx->pc = 0x31577Cu;
            goto label_31577c;
        }
    }
    ctx->pc = 0x315750u;
label_315750:
    // 0x315750: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x315750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_315754:
    // 0x315754: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x315754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315758:
    // 0x315758: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x315758u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_31575c:
    // 0x31575c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x31575cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315760:
    // 0x315760: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x315760u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315764:
    // 0x315764: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x315764u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_315768:
    // 0x315768: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x315768u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_31576c:
    // 0x31576c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x31576cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_315770:
    // 0x315770: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315774:
    if (ctx->pc == 0x315774u) {
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315778u;
        goto label_315778;
    }
    ctx->pc = 0x315770u;
    {
        const bool branch_taken_0x315770 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315770u;
        // 0x315774: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315770) {
            ctx->pc = 0x315758u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315758;
        }
    }
    ctx->pc = 0x315778u;
label_315778:
    // 0x315778: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x315778u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31577c:
    // 0x31577c: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x31577cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_315780:
    // 0x315780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_315784:
    if (ctx->pc == 0x315784u) {
        ctx->pc = 0x315784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315780u;
        // 0x315784: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315788u;
        goto label_315788;
    }
    ctx->pc = 0x315780u;
    {
        const bool branch_taken_0x315780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315780u;
        // 0x315784: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315780) {
            ctx->pc = 0x31579Cu;
            goto label_31579c;
        }
    }
    ctx->pc = 0x315788u;
label_315788:
    // 0x315788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31578c:
    // 0x31578c: 0x2e0f809  jalr        $s7
label_315790:
    if (ctx->pc == 0x315790u) {
        ctx->pc = 0x315790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31578Cu;
        // 0x315790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315794u;
        goto label_315794;
    }
    ctx->pc = 0x31578Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315794u);
        ctx->pc = 0x315790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31578Cu;
        // 0x315790: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31578Cu, 0x315794u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315794u;
label_315794:
    // 0x315794: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_315798:
    if (ctx->pc == 0x315798u) {
        ctx->pc = 0x315798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315794u;
        // 0x315798: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31579Cu;
        goto label_31579c;
    }
    ctx->pc = 0x315794u;
    {
        const bool branch_taken_0x315794 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x315794) {
            ctx->pc = 0x315798u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315794u;
            // 0x315798: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3156F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3156f8;
        }
    }
    ctx->pc = 0x31579Cu;
label_31579c:
    // 0x31579c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x31579cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3157a0:
    // 0x3157a0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x3157a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3157a4:
    // 0x3157a4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x3157a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3157a8:
    // 0x3157a8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_3157ac:
    if (ctx->pc == 0x3157ACu) {
        ctx->pc = 0x3157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157A8u;
        // 0x3157ac: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157B0u;
        goto label_3157b0;
    }
    ctx->pc = 0x3157A8u;
    {
        const bool branch_taken_0x3157a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3157ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157A8u;
        // 0x3157ac: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157a8) {
            ctx->pc = 0x3156F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3156f0;
        }
    }
    ctx->pc = 0x3157B0u;
label_3157b0:
    // 0x3157b0: 0x10000213  b           . + 4 + (0x213 << 2)
label_3157b4:
    if (ctx->pc == 0x3157B4u) {
        ctx->pc = 0x3157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157B0u;
        // 0x3157b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157B8u;
        goto label_3157b8;
    }
    ctx->pc = 0x3157B0u;
    {
        const bool branch_taken_0x3157b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3157B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157B0u;
        // 0x3157b4: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157b0) {
            ctx->pc = 0x316000u;
            goto label_316000;
        }
    }
    ctx->pc = 0x3157B8u;
label_3157b8:
    // 0x3157b8: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3157b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3157bc:
    // 0x3157bc: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x3157bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_3157c0:
    // 0x3157c0: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x3157c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_3157c4:
    // 0x3157c4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3157c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3157c8:
    // 0x3157c8: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x3157c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_3157cc:
    // 0x3157cc: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x3157ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_3157d0:
    // 0x3157d0: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
label_3157d4:
    if (ctx->pc == 0x3157D4u) {
        ctx->pc = 0x3157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157D0u;
        // 0x3157d4: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157D8u;
        goto label_3157d8;
    }
    ctx->pc = 0x3157D0u;
    {
        const bool branch_taken_0x3157d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3157D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157D0u;
        // 0x3157d4: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157d0) {
            ctx->pc = 0x315A00u;
            goto label_315a00;
        }
    }
    ctx->pc = 0x3157D8u;
label_3157d8:
    // 0x3157d8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3157d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3157dc:
    // 0x3157dc: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3157dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3157e0:
    // 0x3157e0: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x3157e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
label_3157e4:
    // 0x3157e4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3157e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3157e8:
    // 0x3157e8: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x3157e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3157ec:
    // 0x3157ec: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
label_3157f0:
    if (ctx->pc == 0x3157F0u) {
        ctx->pc = 0x3157F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157ECu;
        // 0x3157f0: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3157F4u;
        goto label_3157f4;
    }
    ctx->pc = 0x3157ECu;
    {
        const bool branch_taken_0x3157ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3157F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3157ECu;
        // 0x3157f0: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3157ec) {
            ctx->pc = 0x315988u;
            goto label_315988;
        }
    }
    ctx->pc = 0x3157F4u;
label_3157f4:
    // 0x3157f4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3157f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3157f8:
    // 0x3157f8: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x3157f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
label_3157fc:
    // 0x3157fc: 0x52f018  mult        $fp, $v0, $s2
    ctx->pc = 0x3157fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
label_315800:
    // 0x315800: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x315800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315804:
    // 0x315804: 0x2de8821  addu        $s1, $s6, $fp
    ctx->pc = 0x315804u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
label_315808:
    // 0x315808: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x315808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_31580c:
    // 0x31580c: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x31580cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_315810:
    // 0x315810: 0x2e0f809  jalr        $s7
label_315814:
    if (ctx->pc == 0x315814u) {
        ctx->pc = 0x315814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315810u;
        // 0x315814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315818u;
        goto label_315818;
    }
    ctx->pc = 0x315810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315818u);
        ctx->pc = 0x315814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315810u;
        // 0x315814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315810u, 0x315818u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315818u;
label_315818:
    // 0x315818: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_31581c:
    if (ctx->pc == 0x31581Cu) {
        ctx->pc = 0x31581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315818u;
        // 0x31581c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315820u;
        goto label_315820;
    }
    ctx->pc = 0x315818u;
    {
        const bool branch_taken_0x315818 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31581Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315818u;
        // 0x31581c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315818) {
            ctx->pc = 0x31584Cu;
            goto label_31584c;
        }
    }
    ctx->pc = 0x315820u;
label_315820:
    // 0x315820: 0x2e0f809  jalr        $s7
label_315824:
    if (ctx->pc == 0x315824u) {
        ctx->pc = 0x315824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315820u;
        // 0x315824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315828u;
        goto label_315828;
    }
    ctx->pc = 0x315820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315828u);
        ctx->pc = 0x315824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315820u;
        // 0x315824: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315820u, 0x315828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315828u;
label_315828:
    // 0x315828: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_31582c:
    if (ctx->pc == 0x31582Cu) {
        ctx->pc = 0x31582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315828u;
        // 0x31582c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315830u;
        goto label_315830;
    }
    ctx->pc = 0x315828u;
    {
        const bool branch_taken_0x315828 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x31582Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315828u;
        // 0x31582c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315828) {
            ctx->pc = 0x31587Cu;
            goto label_31587c;
        }
    }
    ctx->pc = 0x315830u;
label_315830:
    // 0x315830: 0x2e0f809  jalr        $s7
label_315834:
    if (ctx->pc == 0x315834u) {
        ctx->pc = 0x315834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315830u;
        // 0x315834: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315838u;
        goto label_315838;
    }
    ctx->pc = 0x315830u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315838u);
        ctx->pc = 0x315834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315830u;
        // 0x315834: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315830u, 0x315838u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315838u;
label_315838:
    // 0x315838: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x315838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31583c:
    // 0x31583c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x31583cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315840:
    // 0x315840: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x315840u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_315844:
    // 0x315844: 0x1000000e  b           . + 4 + (0xE << 2)
label_315848:
    if (ctx->pc == 0x315848u) {
        ctx->pc = 0x315848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315844u;
        // 0x315848: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31584Cu;
        goto label_31584c;
    }
    ctx->pc = 0x315844u;
    {
        const bool branch_taken_0x315844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315844u;
        // 0x315848: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315844) {
            ctx->pc = 0x315880u;
            goto label_315880;
        }
    }
    ctx->pc = 0x31584Cu;
label_31584c:
    // 0x31584c: 0x2e0f809  jalr        $s7
label_315850:
    if (ctx->pc == 0x315850u) {
        ctx->pc = 0x315850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31584Cu;
        // 0x315850: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315854u;
        goto label_315854;
    }
    ctx->pc = 0x31584Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315854u);
        ctx->pc = 0x315850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31584Cu;
        // 0x315850: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31584Cu, 0x315854u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315854u;
label_315854:
    // 0x315854: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_315858:
    if (ctx->pc == 0x315858u) {
        ctx->pc = 0x315858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315854u;
        // 0x315858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31585Cu;
        goto label_31585c;
    }
    ctx->pc = 0x315854u;
    {
        const bool branch_taken_0x315854 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x315854) {
            ctx->pc = 0x315858u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315854u;
            // 0x315858: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315880u;
            goto label_315880;
        }
    }
    ctx->pc = 0x31585Cu;
label_31585c:
    // 0x31585c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31585cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315860:
    // 0x315860: 0x2e0f809  jalr        $s7
label_315864:
    if (ctx->pc == 0x315864u) {
        ctx->pc = 0x315864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315860u;
        // 0x315864: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315868u;
        goto label_315868;
    }
    ctx->pc = 0x315860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315868u);
        ctx->pc = 0x315864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315860u;
        // 0x315864: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315860u, 0x315868u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315868u;
label_315868:
    // 0x315868: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x315868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_31586c:
    // 0x31586c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x31586cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315870:
    // 0x315870: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x315870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_315874:
    // 0x315874: 0x10000002  b           . + 4 + (0x2 << 2)
label_315878:
    if (ctx->pc == 0x315878u) {
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31587Cu;
        goto label_31587c;
    }
    ctx->pc = 0x315874u;
    {
        const bool branch_taken_0x315874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315874u;
        // 0x315878: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315874) {
            ctx->pc = 0x315880u;
            goto label_315880;
        }
    }
    ctx->pc = 0x31587Cu;
label_31587c:
    // 0x31587c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31587cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315880:
    // 0x315880: 0x21ea023  subu        $s4, $s0, $fp
    ctx->pc = 0x315880u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_315884:
    // 0x315884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x315884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315888:
    // 0x315888: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x315888u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_31588c:
    // 0x31588c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x31588cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315890:
    // 0x315890: 0x2e0f809  jalr        $s7
label_315894:
    if (ctx->pc == 0x315894u) {
        ctx->pc = 0x315894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315890u;
        // 0x315894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315898u;
        goto label_315898;
    }
    ctx->pc = 0x315890u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315898u);
        ctx->pc = 0x315894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315890u;
        // 0x315894: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315890u, 0x315898u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315898u;
label_315898:
    // 0x315898: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_31589c:
    if (ctx->pc == 0x31589Cu) {
        ctx->pc = 0x31589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315898u;
        // 0x31589c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158A0u;
        goto label_3158a0;
    }
    ctx->pc = 0x315898u;
    {
        const bool branch_taken_0x315898 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x31589Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315898u;
        // 0x31589c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315898) {
            ctx->pc = 0x3158CCu;
            goto label_3158cc;
        }
    }
    ctx->pc = 0x3158A0u;
label_3158a0:
    // 0x3158a0: 0x2e0f809  jalr        $s7
label_3158a4:
    if (ctx->pc == 0x3158A4u) {
        ctx->pc = 0x3158A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A0u;
        // 0x3158a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158A8u;
        goto label_3158a8;
    }
    ctx->pc = 0x3158A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3158A8u);
        ctx->pc = 0x3158A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A0u;
        // 0x3158a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158A0u, 0x3158A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3158A8u;
label_3158a8:
    // 0x3158a8: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3158ac:
    if (ctx->pc == 0x3158ACu) {
        ctx->pc = 0x3158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A8u;
        // 0x3158ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158B0u;
        goto label_3158b0;
    }
    ctx->pc = 0x3158A8u;
    {
        const bool branch_taken_0x3158a8 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3158ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158A8u;
        // 0x3158ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158a8) {
            ctx->pc = 0x3158FCu;
            goto label_3158fc;
        }
    }
    ctx->pc = 0x3158B0u;
label_3158b0:
    // 0x3158b0: 0x2e0f809  jalr        $s7
label_3158b4:
    if (ctx->pc == 0x3158B4u) {
        ctx->pc = 0x3158B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158B0u;
        // 0x3158b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158B8u;
        goto label_3158b8;
    }
    ctx->pc = 0x3158B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3158B8u);
        ctx->pc = 0x3158B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158B0u;
        // 0x3158b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158B0u, 0x3158B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3158B8u;
label_3158b8:
    // 0x3158b8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3158b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3158bc:
    // 0x3158bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3158bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3158c0:
    // 0x3158c0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3158c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3158c4:
    // 0x3158c4: 0x1000000e  b           . + 4 + (0xE << 2)
label_3158c8:
    if (ctx->pc == 0x3158C8u) {
        ctx->pc = 0x3158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C4u;
        // 0x3158c8: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158CCu;
        goto label_3158cc;
    }
    ctx->pc = 0x3158C4u;
    {
        const bool branch_taken_0x3158c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158C4u;
        // 0x3158c8: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158c4) {
            ctx->pc = 0x315900u;
            goto label_315900;
        }
    }
    ctx->pc = 0x3158CCu;
label_3158cc:
    // 0x3158cc: 0x2e0f809  jalr        $s7
label_3158d0:
    if (ctx->pc == 0x3158D0u) {
        ctx->pc = 0x3158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158CCu;
        // 0x3158d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158D4u;
        goto label_3158d4;
    }
    ctx->pc = 0x3158CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3158D4u);
        ctx->pc = 0x3158D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158CCu;
        // 0x3158d0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158CCu, 0x3158D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3158D4u;
label_3158d4:
    // 0x3158d4: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3158d8:
    if (ctx->pc == 0x3158D8u) {
        ctx->pc = 0x3158D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158D4u;
        // 0x3158d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158DCu;
        goto label_3158dc;
    }
    ctx->pc = 0x3158D4u;
    {
        const bool branch_taken_0x3158d4 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3158d4) {
            ctx->pc = 0x3158D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3158D4u;
            // 0x3158d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315900u;
            goto label_315900;
        }
    }
    ctx->pc = 0x3158DCu;
label_3158dc:
    // 0x3158dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3158dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3158e0:
    // 0x3158e0: 0x2e0f809  jalr        $s7
label_3158e4:
    if (ctx->pc == 0x3158E4u) {
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E0u;
        // 0x3158e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158E8u;
        goto label_3158e8;
    }
    ctx->pc = 0x3158E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3158E8u);
        ctx->pc = 0x3158E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158E0u;
        // 0x3158e4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3158E0u, 0x3158E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3158E8u;
label_3158e8:
    // 0x3158e8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3158e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3158ec:
    // 0x3158ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3158ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3158f0:
    // 0x3158f0: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3158f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3158f4:
    // 0x3158f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_3158f8:
    if (ctx->pc == 0x3158F8u) {
        ctx->pc = 0x3158F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158F4u;
        // 0x3158f8: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3158FCu;
        goto label_3158fc;
    }
    ctx->pc = 0x3158F4u;
    {
        const bool branch_taken_0x3158f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3158F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3158F4u;
        // 0x3158f8: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3158f4) {
            ctx->pc = 0x315900u;
            goto label_315900;
        }
    }
    ctx->pc = 0x3158FCu;
label_3158fc:
    // 0x3158fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3158fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315900:
    // 0x315900: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x315900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_315904:
    // 0x315904: 0x2be9823  subu        $s3, $s5, $fp
    ctx->pc = 0x315904u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
label_315908:
    // 0x315908: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x315908u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
label_31590c:
    // 0x31590c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31590cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315910:
    // 0x315910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x315910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315914:
    // 0x315914: 0x2e0f809  jalr        $s7
label_315918:
    if (ctx->pc == 0x315918u) {
        ctx->pc = 0x315918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315914u;
        // 0x315918: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31591Cu;
        goto label_31591c;
    }
    ctx->pc = 0x315914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x31591Cu);
        ctx->pc = 0x315918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315914u;
        // 0x315918: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315914u, 0x31591Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31591Cu;
label_31591c:
    // 0x31591c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_315920:
    if (ctx->pc == 0x315920u) {
        ctx->pc = 0x315920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31591Cu;
        // 0x315920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315924u;
        goto label_315924;
    }
    ctx->pc = 0x31591Cu;
    {
        const bool branch_taken_0x31591c = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x315920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31591Cu;
        // 0x315920: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31591c) {
            ctx->pc = 0x315950u;
            goto label_315950;
        }
    }
    ctx->pc = 0x315924u;
label_315924:
    // 0x315924: 0x2e0f809  jalr        $s7
label_315928:
    if (ctx->pc == 0x315928u) {
        ctx->pc = 0x315928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315924u;
        // 0x315928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31592Cu;
        goto label_31592c;
    }
    ctx->pc = 0x315924u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x31592Cu);
        ctx->pc = 0x315928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315924u;
        // 0x315928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315924u, 0x31592Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31592Cu;
label_31592c:
    // 0x31592c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_315930:
    if (ctx->pc == 0x315930u) {
        ctx->pc = 0x315930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31592Cu;
        // 0x315930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315934u;
        goto label_315934;
    }
    ctx->pc = 0x31592Cu;
    {
        const bool branch_taken_0x31592c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x315930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31592Cu;
        // 0x315930: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31592c) {
            ctx->pc = 0x315980u;
            goto label_315980;
        }
    }
    ctx->pc = 0x315934u;
label_315934:
    // 0x315934: 0x2e0f809  jalr        $s7
label_315938:
    if (ctx->pc == 0x315938u) {
        ctx->pc = 0x315938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315934u;
        // 0x315938: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31593Cu;
        goto label_31593c;
    }
    ctx->pc = 0x315934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x31593Cu);
        ctx->pc = 0x315938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315934u;
        // 0x315938: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315934u, 0x31593Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31593Cu;
label_31593c:
    // 0x31593c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31593cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_315940:
    // 0x315940: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x315940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_315944:
    // 0x315944: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x315944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_315948:
    // 0x315948: 0x1000000e  b           . + 4 + (0xE << 2)
label_31594c:
    if (ctx->pc == 0x31594Cu) {
        ctx->pc = 0x31594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315948u;
        // 0x31594c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315950u;
        goto label_315950;
    }
    ctx->pc = 0x315948u;
    {
        const bool branch_taken_0x315948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31594Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315948u;
        // 0x31594c: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315948) {
            ctx->pc = 0x315984u;
            goto label_315984;
        }
    }
    ctx->pc = 0x315950u;
label_315950:
    // 0x315950: 0x2e0f809  jalr        $s7
label_315954:
    if (ctx->pc == 0x315954u) {
        ctx->pc = 0x315954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315950u;
        // 0x315954: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315958u;
        goto label_315958;
    }
    ctx->pc = 0x315950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315958u);
        ctx->pc = 0x315954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315950u;
        // 0x315954: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315950u, 0x315958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315958u;
label_315958:
    // 0x315958: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_31595c:
    if (ctx->pc == 0x31595Cu) {
        ctx->pc = 0x31595Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315958u;
        // 0x31595c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315960u;
        goto label_315960;
    }
    ctx->pc = 0x315958u;
    {
        const bool branch_taken_0x315958 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x315958) {
            ctx->pc = 0x31595Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315958u;
            // 0x31595c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315984u;
            goto label_315984;
        }
    }
    ctx->pc = 0x315960u;
label_315960:
    // 0x315960: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x315960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315964:
    // 0x315964: 0x2e0f809  jalr        $s7
label_315968:
    if (ctx->pc == 0x315968u) {
        ctx->pc = 0x315968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315964u;
        // 0x315968: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31596Cu;
        goto label_31596c;
    }
    ctx->pc = 0x315964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x31596Cu);
        ctx->pc = 0x315968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315964u;
        // 0x315968: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315964u, 0x31596Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31596Cu;
label_31596c:
    // 0x31596c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x31596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_315970:
    // 0x315970: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x315970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315974:
    // 0x315974: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x315974u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_315978:
    // 0x315978: 0x10000002  b           . + 4 + (0x2 << 2)
label_31597c:
    if (ctx->pc == 0x31597Cu) {
        ctx->pc = 0x31597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315978u;
        // 0x31597c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315980u;
        goto label_315980;
    }
    ctx->pc = 0x315978u;
    {
        const bool branch_taken_0x315978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31597Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315978u;
        // 0x31597c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315978) {
            ctx->pc = 0x315984u;
            goto label_315984;
        }
    }
    ctx->pc = 0x315980u;
label_315980:
    // 0x315980: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x315980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315984:
    // 0x315984: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x315984u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315988:
    // 0x315988: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31598c:
    // 0x31598c: 0x2e0f809  jalr        $s7
label_315990:
    if (ctx->pc == 0x315990u) {
        ctx->pc = 0x315990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31598Cu;
        // 0x315990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315994u;
        goto label_315994;
    }
    ctx->pc = 0x31598Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315994u);
        ctx->pc = 0x315990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31598Cu;
        // 0x315990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31598Cu, 0x315994u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315994u;
label_315994:
    // 0x315994: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
label_315998:
    if (ctx->pc == 0x315998u) {
        ctx->pc = 0x315998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315994u;
        // 0x315998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31599Cu;
        goto label_31599c;
    }
    ctx->pc = 0x315994u;
    {
        const bool branch_taken_0x315994 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x315998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315994u;
        // 0x315998: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315994) {
            ctx->pc = 0x3159C8u;
            goto label_3159c8;
        }
    }
    ctx->pc = 0x31599Cu;
label_31599c:
    // 0x31599c: 0x2e0f809  jalr        $s7
label_3159a0:
    if (ctx->pc == 0x3159A0u) {
        ctx->pc = 0x3159A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31599Cu;
        // 0x3159a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159A4u;
        goto label_3159a4;
    }
    ctx->pc = 0x31599Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3159A4u);
        ctx->pc = 0x3159A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31599Cu;
        // 0x3159a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31599Cu, 0x3159A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3159A4u;
label_3159a4:
    // 0x3159a4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
label_3159a8:
    if (ctx->pc == 0x3159A8u) {
        ctx->pc = 0x3159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159A4u;
        // 0x3159a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159ACu;
        goto label_3159ac;
    }
    ctx->pc = 0x3159A4u;
    {
        const bool branch_taken_0x3159a4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x3159A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159A4u;
        // 0x3159a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159a4) {
            ctx->pc = 0x3159F8u;
            goto label_3159f8;
        }
    }
    ctx->pc = 0x3159ACu;
label_3159ac:
    // 0x3159ac: 0x2e0f809  jalr        $s7
label_3159b0:
    if (ctx->pc == 0x3159B0u) {
        ctx->pc = 0x3159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159ACu;
        // 0x3159b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159B4u;
        goto label_3159b4;
    }
    ctx->pc = 0x3159ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3159B4u);
        ctx->pc = 0x3159B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159ACu;
        // 0x3159b0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3159ACu, 0x3159B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3159B4u;
label_3159b4:
    // 0x3159b4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3159b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3159b8:
    // 0x3159b8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3159b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3159bc:
    // 0x3159bc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3159bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3159c0:
    // 0x3159c0: 0x1000000e  b           . + 4 + (0xE << 2)
label_3159c4:
    if (ctx->pc == 0x3159C4u) {
        ctx->pc = 0x3159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C0u;
        // 0x3159c4: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159C8u;
        goto label_3159c8;
    }
    ctx->pc = 0x3159C0u;
    {
        const bool branch_taken_0x3159c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C0u;
        // 0x3159c4: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159c0) {
            ctx->pc = 0x3159FCu;
            goto label_3159fc;
        }
    }
    ctx->pc = 0x3159C8u;
label_3159c8:
    // 0x3159c8: 0x2e0f809  jalr        $s7
label_3159cc:
    if (ctx->pc == 0x3159CCu) {
        ctx->pc = 0x3159CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C8u;
        // 0x3159cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159D0u;
        goto label_3159d0;
    }
    ctx->pc = 0x3159C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3159D0u);
        ctx->pc = 0x3159CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159C8u;
        // 0x3159cc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3159C8u, 0x3159D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3159D0u;
label_3159d0:
    // 0x3159d0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
label_3159d4:
    if (ctx->pc == 0x3159D4u) {
        ctx->pc = 0x3159D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159D0u;
        // 0x3159d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159D8u;
        goto label_3159d8;
    }
    ctx->pc = 0x3159D0u;
    {
        const bool branch_taken_0x3159d0 = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x3159d0) {
            ctx->pc = 0x3159D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3159D0u;
            // 0x3159d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3159FCu;
            goto label_3159fc;
        }
    }
    ctx->pc = 0x3159D8u;
label_3159d8:
    // 0x3159d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3159d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3159dc:
    // 0x3159dc: 0x2e0f809  jalr        $s7
label_3159e0:
    if (ctx->pc == 0x3159E0u) {
        ctx->pc = 0x3159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159DCu;
        // 0x3159e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159E4u;
        goto label_3159e4;
    }
    ctx->pc = 0x3159DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x3159E4u);
        ctx->pc = 0x3159E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159DCu;
        // 0x3159e0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3159DCu, 0x3159E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3159E4u;
label_3159e4:
    // 0x3159e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3159e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3159e8:
    // 0x3159e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3159e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3159ec:
    // 0x3159ec: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x3159ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3159f0:
    // 0x3159f0: 0x10000002  b           . + 4 + (0x2 << 2)
label_3159f4:
    if (ctx->pc == 0x3159F4u) {
        ctx->pc = 0x3159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F0u;
        // 0x3159f4: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3159F8u;
        goto label_3159f8;
    }
    ctx->pc = 0x3159F0u;
    {
        const bool branch_taken_0x3159f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3159F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3159F0u;
        // 0x3159f4: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3159f0) {
            ctx->pc = 0x3159FCu;
            goto label_3159fc;
        }
    }
    ctx->pc = 0x3159F8u;
label_3159f8:
    // 0x3159f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3159f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3159fc:
    // 0x3159fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3159fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_315a00:
    // 0x315a00: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x315a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315a04:
    // 0x315a04: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_315a08:
    if (ctx->pc == 0x315A08u) {
        ctx->pc = 0x315A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A04u;
        // 0x315a08: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A0Cu;
        goto label_315a0c;
    }
    ctx->pc = 0x315A04u;
    {
        const bool branch_taken_0x315a04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A04u;
        // 0x315a08: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a04) {
            ctx->pc = 0x315A28u;
            goto label_315a28;
        }
    }
    ctx->pc = 0x315A0Cu;
label_315a0c:
    // 0x315a0c: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x315a0cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_315a10:
    // 0x315a10: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x315a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_315a14:
    // 0x315a14: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x315a14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
label_315a18:
    // 0x315a18: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x315a18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
label_315a1c:
    // 0x315a1c: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x315a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
label_315a20:
    // 0x315a20: 0x10000023  b           . + 4 + (0x23 << 2)
label_315a24:
    if (ctx->pc == 0x315A24u) {
        ctx->pc = 0x315A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A20u;
        // 0x315a24: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A28u;
        goto label_315a28;
    }
    ctx->pc = 0x315A20u;
    {
        const bool branch_taken_0x315a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A20u;
        // 0x315a24: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a20) {
            ctx->pc = 0x315AB0u;
            goto label_315ab0;
        }
    }
    ctx->pc = 0x315A28u;
label_315a28:
    // 0x315a28: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x315a28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_315a2c:
    // 0x315a2c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_315a30:
    if (ctx->pc == 0x315A30u) {
        ctx->pc = 0x315A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A2Cu;
        // 0x315a30: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A34u;
        goto label_315a34;
    }
    ctx->pc = 0x315A2Cu;
    {
        const bool branch_taken_0x315a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A2Cu;
        // 0x315a30: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a2c) {
            ctx->pc = 0x315A78u;
            goto label_315a78;
        }
    }
    ctx->pc = 0x315A34u;
label_315a34:
    // 0x315a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315a38:
    // 0x315a38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315a38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_315a3c:
    // 0x315a3c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x315a3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315a40:
    // 0x315a40: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315a40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315a44:
    // 0x315a44: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x315a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_315a48:
    // 0x315a48: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x315a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_315a4c:
    // 0x315a4c: 0x0  nop
    ctx->pc = 0x315a4cu;
    // NOP
label_315a50:
    // 0x315a50: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x315a50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315a54:
    // 0x315a54: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315a54u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315a58:
    // 0x315a58: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x315a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_315a5c:
    // 0x315a5c: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x315a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
label_315a60:
    // 0x315a60: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x315a60u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_315a64:
    // 0x315a64: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x315a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_315a68:
    // 0x315a68: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315a6c:
    if (ctx->pc == 0x315A6Cu) {
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A70u;
        goto label_315a70;
    }
    ctx->pc = 0x315A68u;
    {
        const bool branch_taken_0x315a68 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A68u;
        // 0x315a6c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a68) {
            ctx->pc = 0x315A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315a50;
        }
    }
    ctx->pc = 0x315A70u;
label_315a70:
    // 0x315a70: 0x10000010  b           . + 4 + (0x10 << 2)
label_315a74:
    if (ctx->pc == 0x315A74u) {
        ctx->pc = 0x315A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A70u;
        // 0x315a74: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315A78u;
        goto label_315a78;
    }
    ctx->pc = 0x315A70u;
    {
        const bool branch_taken_0x315a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315A70u;
        // 0x315a74: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315a70) {
            ctx->pc = 0x315AB4u;
            goto label_315ab4;
        }
    }
    ctx->pc = 0x315A78u;
label_315a78:
    // 0x315a78: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x315a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
label_315a7c:
    // 0x315a7c: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x315a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
label_315a80:
    // 0x315a80: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x315a80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_315a84:
    // 0x315a84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315a88:
    // 0x315a88: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315a8c:
    // 0x315a8c: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x315a8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315a90:
    // 0x315a90: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x315a90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315a94:
    // 0x315a94: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315a94u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315a98:
    // 0x315a98: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x315a98u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_315a9c:
    // 0x315a9c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x315a9cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_315aa0:
    // 0x315aa0: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x315aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_315aa4:
    // 0x315aa4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x315aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_315aa8:
    // 0x315aa8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315aac:
    if (ctx->pc == 0x315AACu) {
        ctx->pc = 0x315AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AA8u;
        // 0x315aac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AB0u;
        goto label_315ab0;
    }
    ctx->pc = 0x315AA8u;
    {
        const bool branch_taken_0x315aa8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AA8u;
        // 0x315aac: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315aa8) {
            ctx->pc = 0x315A90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315a90;
        }
    }
    ctx->pc = 0x315AB0u;
label_315ab0:
    // 0x315ab0: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x315ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_315ab4:
    // 0x315ab4: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x315ab4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
label_315ab8:
    // 0x315ab8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x315ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315abc:
    // 0x315abc: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x315abcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_315ac0:
    // 0x315ac0: 0x8fb1002c  lw          $s1, 0x2C($sp)
    ctx->pc = 0x315ac0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_315ac4:
    // 0x315ac4: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x315ac4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_315ac8:
    // 0x315ac8: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x315ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
label_315acc:
    // 0x315acc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x315accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_315ad0:
    // 0x315ad0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x315ad0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315ad4:
    // 0x315ad4: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x315ad4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_315ad8:
    // 0x315ad8: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x315ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_315adc:
    // 0x315adc: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x315adcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315ae0:
    // 0x315ae0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_315ae4:
    // 0x315ae4: 0x10000030  b           . + 4 + (0x30 << 2)
label_315ae8:
    if (ctx->pc == 0x315AE8u) {
        ctx->pc = 0x315AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AE4u;
        // 0x315ae8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AECu;
        goto label_315aec;
    }
    ctx->pc = 0x315AE4u;
    {
        const bool branch_taken_0x315ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AE4u;
        // 0x315ae8: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ae4) {
            ctx->pc = 0x315BA8u;
            goto label_315ba8;
        }
    }
    ctx->pc = 0x315AECu;
label_315aec:
    // 0x315aec: 0x0  nop
    ctx->pc = 0x315aecu;
    // NOP
label_315af0:
    // 0x315af0: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
label_315af4:
    if (ctx->pc == 0x315AF4u) {
        ctx->pc = 0x315AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AF0u;
        // 0x315af4: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315AF8u;
        goto label_315af8;
    }
    ctx->pc = 0x315AF0u;
    {
        const bool branch_taken_0x315af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x315AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315AF0u;
        // 0x315af4: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315af0) {
            ctx->pc = 0x315BA4u;
            goto label_315ba4;
        }
    }
    ctx->pc = 0x315AF8u;
label_315af8:
    // 0x315af8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315afc:
    // 0x315afc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x315afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315b00:
    // 0x315b00: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_315b04:
    if (ctx->pc == 0x315B04u) {
        ctx->pc = 0x315B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B00u;
        // 0x315b04: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B08u;
        goto label_315b08;
    }
    ctx->pc = 0x315B00u;
    {
        const bool branch_taken_0x315b00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B00u;
        // 0x315b04: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b00) {
            ctx->pc = 0x315B20u;
            goto label_315b20;
        }
    }
    ctx->pc = 0x315B08u;
label_315b08:
    // 0x315b08: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x315b08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_315b0c:
    // 0x315b0c: 0x2723821  addu        $a3, $s3, $s2
    ctx->pc = 0x315b0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_315b10:
    // 0x315b10: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x315b10u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_315b14:
    // 0x315b14: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x315b14u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
label_315b18:
    // 0x315b18: 0x10000021  b           . + 4 + (0x21 << 2)
label_315b1c:
    if (ctx->pc == 0x315B1Cu) {
        ctx->pc = 0x315B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B18u;
        // 0x315b1c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B20u;
        goto label_315b20;
    }
    ctx->pc = 0x315B18u;
    {
        const bool branch_taken_0x315b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B18u;
        // 0x315b1c: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b18) {
            ctx->pc = 0x315BA0u;
            goto label_315ba0;
        }
    }
    ctx->pc = 0x315B20u;
label_315b20:
    // 0x315b20: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x315b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_315b24:
    // 0x315b24: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_315b28:
    if (ctx->pc == 0x315B28u) {
        ctx->pc = 0x315B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B24u;
        // 0x315b28: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B2Cu;
        goto label_315b2c;
    }
    ctx->pc = 0x315B24u;
    {
        const bool branch_taken_0x315b24 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B24u;
        // 0x315b28: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b24) {
            ctx->pc = 0x315B68u;
            goto label_315b68;
        }
    }
    ctx->pc = 0x315B2Cu;
label_315b2c:
    // 0x315b2c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x315b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315b30:
    // 0x315b30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315b34:
    // 0x315b34: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x315b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315b38:
    // 0x315b38: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x315b38u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_315b3c:
    // 0x315b3c: 0x0  nop
    ctx->pc = 0x315b3cu;
    // NOP
label_315b40:
    // 0x315b40: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x315b40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315b44:
    // 0x315b44: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315b44u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315b48:
    // 0x315b48: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x315b48u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_315b4c:
    // 0x315b4c: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x315b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_315b50:
    // 0x315b50: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x315b50u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_315b54:
    // 0x315b54: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x315b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_315b58:
    // 0x315b58: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315b5c:
    if (ctx->pc == 0x315B5Cu) {
        ctx->pc = 0x315B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B58u;
        // 0x315b5c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B60u;
        goto label_315b60;
    }
    ctx->pc = 0x315B58u;
    {
        const bool branch_taken_0x315b58 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B58u;
        // 0x315b5c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b58) {
            ctx->pc = 0x315B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315b40;
        }
    }
    ctx->pc = 0x315B60u;
label_315b60:
    // 0x315b60: 0x10000010  b           . + 4 + (0x10 << 2)
label_315b64:
    if (ctx->pc == 0x315B64u) {
        ctx->pc = 0x315B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B60u;
        // 0x315b64: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315B68u;
        goto label_315b68;
    }
    ctx->pc = 0x315B60u;
    {
        const bool branch_taken_0x315b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B60u;
        // 0x315b64: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b60) {
            ctx->pc = 0x315BA4u;
            goto label_315ba4;
        }
    }
    ctx->pc = 0x315B68u;
label_315b68:
    // 0x315b68: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x315b68u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315b6c:
    // 0x315b6c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x315b6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315b70:
    // 0x315b70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315b74:
    // 0x315b74: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x315b74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315b78:
    // 0x315b78: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x315b78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_315b7c:
    // 0x315b7c: 0x0  nop
    ctx->pc = 0x315b7cu;
    // NOP
label_315b80:
    // 0x315b80: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x315b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315b84:
    // 0x315b84: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315b84u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315b88:
    // 0x315b88: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x315b88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_315b8c:
    // 0x315b8c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x315b8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_315b90:
    // 0x315b90: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x315b90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_315b94:
    // 0x315b94: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x315b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_315b98:
    // 0x315b98: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315b9c:
    if (ctx->pc == 0x315B9Cu) {
        ctx->pc = 0x315B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B98u;
        // 0x315b9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BA0u;
        goto label_315ba0;
    }
    ctx->pc = 0x315B98u;
    {
        const bool branch_taken_0x315b98 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315B98u;
        // 0x315b9c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315b98) {
            ctx->pc = 0x315B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315b80;
        }
    }
    ctx->pc = 0x315BA0u;
label_315ba0:
    // 0x315ba0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x315ba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315ba4:
    // 0x315ba4: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x315ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_315ba8:
    // 0x315ba8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x315ba8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_315bac:
    // 0x315bac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_315bb0:
    if (ctx->pc == 0x315BB0u) {
        ctx->pc = 0x315BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BACu;
        // 0x315bb0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BB4u;
        goto label_315bb4;
    }
    ctx->pc = 0x315BACu;
    {
        const bool branch_taken_0x315bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BACu;
        // 0x315bb0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bac) {
            ctx->pc = 0x315BCCu;
            goto label_315bcc;
        }
    }
    ctx->pc = 0x315BB4u;
label_315bb4:
    // 0x315bb4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x315bb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315bb8:
    // 0x315bb8: 0x2e0f809  jalr        $s7
label_315bbc:
    if (ctx->pc == 0x315BBCu) {
        ctx->pc = 0x315BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BB8u;
        // 0x315bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BC0u;
        goto label_315bc0;
    }
    ctx->pc = 0x315BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315BC0u);
        ctx->pc = 0x315BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BB8u;
        // 0x315bbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315BB8u, 0x315BC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315BC0u;
label_315bc0:
    // 0x315bc0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315bc4:
    // 0x315bc4: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
label_315bc8:
    if (ctx->pc == 0x315BC8u) {
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BCCu;
        goto label_315bcc;
    }
    ctx->pc = 0x315BC4u;
    {
        const bool branch_taken_0x315bc4 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x315BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BC4u;
        // 0x315bc8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bc4) {
            ctx->pc = 0x315AF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315af0;
        }
    }
    ctx->pc = 0x315BCCu;
label_315bcc:
    // 0x315bcc: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x315bccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
label_315bd0:
    // 0x315bd0: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x315bd0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_315bd4:
    // 0x315bd4: 0x12a83c  dsll32      $s5, $s2, 0
    ctx->pc = 0x315bd4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << (32 + 0));
label_315bd8:
    // 0x315bd8: 0x1000002b  b           . + 4 + (0x2B << 2)
label_315bdc:
    if (ctx->pc == 0x315BDCu) {
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD8u;
        // 0x315bdc: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BE0u;
        goto label_315be0;
    }
    ctx->pc = 0x315BD8u;
    {
        const bool branch_taken_0x315bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BD8u;
        // 0x315bdc: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bd8) {
            ctx->pc = 0x315C88u;
            goto label_315c88;
        }
    }
    ctx->pc = 0x315BE0u;
label_315be0:
    // 0x315be0: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
label_315be4:
    if (ctx->pc == 0x315BE4u) {
        ctx->pc = 0x315BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BE0u;
        // 0x315be4: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BE8u;
        goto label_315be8;
    }
    ctx->pc = 0x315BE0u;
    {
        const bool branch_taken_0x315be0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BE0u;
        // 0x315be4: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315be0) {
            ctx->pc = 0x315C84u;
            goto label_315c84;
        }
    }
    ctx->pc = 0x315BE8u;
label_315be8:
    // 0x315be8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x315be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315bec:
    // 0x315bec: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x315becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315bf0:
    // 0x315bf0: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_315bf4:
    if (ctx->pc == 0x315BF4u) {
        ctx->pc = 0x315BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF0u;
        // 0x315bf4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315BF8u;
        goto label_315bf8;
    }
    ctx->pc = 0x315BF0u;
    {
        const bool branch_taken_0x315bf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x315BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315BF0u;
        // 0x315bf4: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315bf0) {
            ctx->pc = 0x315C10u;
            goto label_315c10;
        }
    }
    ctx->pc = 0x315BF8u;
label_315bf8:
    // 0x315bf8: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x315bf8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
label_315bfc:
    // 0x315bfc: 0x2923823  subu        $a3, $s4, $s2
    ctx->pc = 0x315bfcu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_315c00:
    // 0x315c00: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x315c00u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_315c04:
    // 0x315c04: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x315c04u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
label_315c08:
    // 0x315c08: 0x1000001d  b           . + 4 + (0x1D << 2)
label_315c0c:
    if (ctx->pc == 0x315C0Cu) {
        ctx->pc = 0x315C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C08u;
        // 0x315c0c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C10u;
        goto label_315c10;
    }
    ctx->pc = 0x315C08u;
    {
        const bool branch_taken_0x315c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C08u;
        // 0x315c0c: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c08) {
            ctx->pc = 0x315C80u;
            goto label_315c80;
        }
    }
    ctx->pc = 0x315C10u;
label_315c10:
    // 0x315c10: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
label_315c14:
    if (ctx->pc == 0x315C14u) {
        ctx->pc = 0x315C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C10u;
        // 0x315c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C18u;
        goto label_315c18;
    }
    ctx->pc = 0x315C10u;
    {
        const bool branch_taken_0x315c10 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C10u;
        // 0x315c14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c10) {
            ctx->pc = 0x315C50u;
            goto label_315c50;
        }
    }
    ctx->pc = 0x315C18u;
label_315c18:
    // 0x315c18: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x315c18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315c1c:
    // 0x315c1c: 0x1e303e  dsrl32      $a2, $fp, 0
    ctx->pc = 0x315c1cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) >> (32 + 0));
label_315c20:
    // 0x315c20: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x315c20u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315c24:
    // 0x315c24: 0x0  nop
    ctx->pc = 0x315c24u;
    // NOP
label_315c28:
    // 0x315c28: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x315c28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_315c2c:
    // 0x315c2c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315c2cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315c30:
    // 0x315c30: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x315c30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315c34:
    // 0x315c34: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x315c34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_315c38:
    // 0x315c38: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x315c38u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
label_315c3c:
    // 0x315c3c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x315c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_315c40:
    // 0x315c40: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315c44:
    if (ctx->pc == 0x315C44u) {
        ctx->pc = 0x315C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C40u;
        // 0x315c44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C48u;
        goto label_315c48;
    }
    ctx->pc = 0x315C40u;
    {
        const bool branch_taken_0x315c40 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C40u;
        // 0x315c44: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c40) {
            ctx->pc = 0x315C28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315c28;
        }
    }
    ctx->pc = 0x315C48u;
label_315c48:
    // 0x315c48: 0x1000000e  b           . + 4 + (0xE << 2)
label_315c4c:
    if (ctx->pc == 0x315C4Cu) {
        ctx->pc = 0x315C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C48u;
        // 0x315c4c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C50u;
        goto label_315c50;
    }
    ctx->pc = 0x315C48u;
    {
        const bool branch_taken_0x315c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C48u;
        // 0x315c4c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c48) {
            ctx->pc = 0x315C84u;
            goto label_315c84;
        }
    }
    ctx->pc = 0x315C50u;
label_315c50:
    // 0x315c50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x315c50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_315c54:
    // 0x315c54: 0x15303e  dsrl32      $a2, $s5, 0
    ctx->pc = 0x315c54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) >> (32 + 0));
label_315c58:
    // 0x315c58: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x315c58u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315c5c:
    // 0x315c5c: 0x0  nop
    ctx->pc = 0x315c5cu;
    // NOP
label_315c60:
    // 0x315c60: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x315c60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_315c64:
    // 0x315c64: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315c64u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315c68:
    // 0x315c68: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x315c68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315c6c:
    // 0x315c6c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x315c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_315c70:
    // 0x315c70: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x315c70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
label_315c74:
    // 0x315c74: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x315c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_315c78:
    // 0x315c78: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315c7c:
    if (ctx->pc == 0x315C7Cu) {
        ctx->pc = 0x315C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C78u;
        // 0x315c7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C80u;
        goto label_315c80;
    }
    ctx->pc = 0x315C78u;
    {
        const bool branch_taken_0x315c78 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C78u;
        // 0x315c7c: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c78) {
            ctx->pc = 0x315C60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315c60;
        }
    }
    ctx->pc = 0x315C80u;
label_315c80:
    // 0x315c80: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x315c80u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315c84:
    // 0x315c84: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x315c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_315c88:
    // 0x315c88: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x315c88u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_315c8c:
    // 0x315c8c: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_315c90:
    if (ctx->pc == 0x315C90u) {
        ctx->pc = 0x315C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C8Cu;
        // 0x315c90: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315C94u;
        goto label_315c94;
    }
    ctx->pc = 0x315C8Cu;
    {
        const bool branch_taken_0x315c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C8Cu;
        // 0x315c90: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315c8c) {
            ctx->pc = 0x315D64u;
            goto label_315d64;
        }
    }
    ctx->pc = 0x315C94u;
label_315c94:
    // 0x315c94: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x315c94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
label_315c98:
    // 0x315c98: 0x2e0f809  jalr        $s7
label_315c9c:
    if (ctx->pc == 0x315C9Cu) {
        ctx->pc = 0x315C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C98u;
        // 0x315c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CA0u;
        goto label_315ca0;
    }
    ctx->pc = 0x315C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315CA0u);
        ctx->pc = 0x315C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315C98u;
        // 0x315c9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315C98u, 0x315CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315CA0u;
label_315ca0:
    // 0x315ca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x315ca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_315ca4:
    // 0x315ca4: 0x4a1ffce  bgez        $a1, . + 4 + (-0x32 << 2)
label_315ca8:
    if (ctx->pc == 0x315CA8u) {
        ctx->pc = 0x315CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CA4u;
        // 0x315ca8: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CACu;
        goto label_315cac;
    }
    ctx->pc = 0x315CA4u;
    {
        const bool branch_taken_0x315ca4 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x315CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CA4u;
        // 0x315ca8: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ca4) {
            ctx->pc = 0x315BE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315be0;
        }
    }
    ctx->pc = 0x315CACu;
label_315cac:
    // 0x315cac: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x315cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315cb0:
    // 0x315cb0: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
label_315cb4:
    if (ctx->pc == 0x315CB4u) {
        ctx->pc = 0x315CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CB0u;
        // 0x315cb4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CB8u;
        goto label_315cb8;
    }
    ctx->pc = 0x315CB0u;
    {
        const bool branch_taken_0x315cb0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x315CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CB0u;
        // 0x315cb4: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cb0) {
            ctx->pc = 0x315CD4u;
            goto label_315cd4;
        }
    }
    ctx->pc = 0x315CB8u;
label_315cb8:
    // 0x315cb8: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x315cb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_315cbc:
    // 0x315cbc: 0x2324821  addu        $t1, $s1, $s2
    ctx->pc = 0x315cbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_315cc0:
    // 0x315cc0: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x315cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_315cc4:
    // 0x315cc4: 0x2124023  subu        $t0, $s0, $s2
    ctx->pc = 0x315cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_315cc8:
    // 0x315cc8: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x315cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
label_315ccc:
    // 0x315ccc: 0x10000020  b           . + 4 + (0x20 << 2)
label_315cd0:
    if (ctx->pc == 0x315CD0u) {
        ctx->pc = 0x315CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CCCu;
        // 0x315cd0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CD4u;
        goto label_315cd4;
    }
    ctx->pc = 0x315CCCu;
    {
        const bool branch_taken_0x315ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CCCu;
        // 0x315cd0: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ccc) {
            ctx->pc = 0x315D50u;
            goto label_315d50;
        }
    }
    ctx->pc = 0x315CD4u;
label_315cd4:
    // 0x315cd4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_315cd8:
    if (ctx->pc == 0x315CD8u) {
        ctx->pc = 0x315CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CD4u;
        // 0x315cd8: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315CDCu;
        goto label_315cdc;
    }
    ctx->pc = 0x315CD4u;
    {
        const bool branch_taken_0x315cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315CD4u;
        // 0x315cd8: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315cd4) {
            ctx->pc = 0x315D18u;
            goto label_315d18;
        }
    }
    ctx->pc = 0x315CDCu;
label_315cdc:
    // 0x315cdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315cdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315ce0:
    // 0x315ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315ce4:
    // 0x315ce4: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x315ce4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315ce8:
    // 0x315ce8: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x315ce8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
label_315cec:
    // 0x315cec: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x315cecu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_315cf0:
    // 0x315cf0: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x315cf0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315cf4:
    // 0x315cf4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315cf4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315cf8:
    // 0x315cf8: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x315cf8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_315cfc:
    // 0x315cfc: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x315cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
label_315d00:
    // 0x315d00: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x315d00u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_315d04:
    // 0x315d04: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x315d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_315d08:
    // 0x315d08: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315d0c:
    if (ctx->pc == 0x315D0Cu) {
        ctx->pc = 0x315D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D08u;
        // 0x315d0c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D10u;
        goto label_315d10;
    }
    ctx->pc = 0x315D08u;
    {
        const bool branch_taken_0x315d08 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D08u;
        // 0x315d0c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d08) {
            ctx->pc = 0x315CF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315cf0;
        }
    }
    ctx->pc = 0x315D10u;
label_315d10:
    // 0x315d10: 0x10000010  b           . + 4 + (0x10 << 2)
label_315d14:
    if (ctx->pc == 0x315D14u) {
        ctx->pc = 0x315D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D10u;
        // 0x315d14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D18u;
        goto label_315d18;
    }
    ctx->pc = 0x315D10u;
    {
        const bool branch_taken_0x315d10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D10u;
        // 0x315d14: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d10) {
            ctx->pc = 0x315D54u;
            goto label_315d54;
        }
    }
    ctx->pc = 0x315D18u;
label_315d18:
    // 0x315d18: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x315d18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_315d1c:
    // 0x315d1c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315d1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315d20:
    // 0x315d20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x315d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315d24:
    // 0x315d24: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x315d24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
label_315d28:
    // 0x315d28: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x315d28u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
label_315d2c:
    // 0x315d2c: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x315d2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_315d30:
    // 0x315d30: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x315d30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315d34:
    // 0x315d34: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x315d34u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
label_315d38:
    // 0x315d38: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x315d38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_315d3c:
    // 0x315d3c: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x315d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_315d40:
    // 0x315d40: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x315d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
label_315d44:
    // 0x315d44: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x315d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_315d48:
    // 0x315d48: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
label_315d4c:
    if (ctx->pc == 0x315D4Cu) {
        ctx->pc = 0x315D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D48u;
        // 0x315d4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D50u;
        goto label_315d50;
    }
    ctx->pc = 0x315D48u;
    {
        const bool branch_taken_0x315d48 = (GPR_S64(ctx, 6) > 0);
        ctx->pc = 0x315D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D48u;
        // 0x315d4c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d48) {
            ctx->pc = 0x315D30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315d30;
        }
    }
    ctx->pc = 0x315D50u;
label_315d50:
    // 0x315d50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x315d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_315d54:
    // 0x315d54: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x315d54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_315d58:
    // 0x315d58: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x315d58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_315d5c:
    // 0x315d5c: 0x1000ff92  b           . + 4 + (-0x6E << 2)
label_315d60:
    if (ctx->pc == 0x315D60u) {
        ctx->pc = 0x315D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D5Cu;
        // 0x315d60: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D64u;
        goto label_315d64;
    }
    ctx->pc = 0x315D5Cu;
    {
        const bool branch_taken_0x315d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D5Cu;
        // 0x315d60: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d5c) {
            ctx->pc = 0x315BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315ba8;
        }
    }
    ctx->pc = 0x315D64u;
label_315d64:
    // 0x315d64: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x315d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_315d68:
    // 0x315d68: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
label_315d6c:
    if (ctx->pc == 0x315D6Cu) {
        ctx->pc = 0x315D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D68u;
        // 0x315d6c: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D70u;
        goto label_315d70;
    }
    ctx->pc = 0x315D68u;
    {
        const bool branch_taken_0x315d68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x315D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D68u;
        // 0x315d6c: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d68) {
            ctx->pc = 0x315E70u;
            goto label_315e70;
        }
    }
    ctx->pc = 0x315D70u;
label_315d70:
    // 0x315d70: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x315d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_315d74:
    // 0x315d74: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x315d74u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_315d78:
    // 0x315d78: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x315d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_315d7c:
    // 0x315d7c: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x315d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_315d80:
    // 0x315d80: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x315d80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315d84:
    // 0x315d84: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
label_315d88:
    if (ctx->pc == 0x315D88u) {
        ctx->pc = 0x315D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D84u;
        // 0x315d88: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315D8Cu;
        goto label_315d8c;
    }
    ctx->pc = 0x315D84u;
    {
        const bool branch_taken_0x315d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315D84u;
        // 0x315d88: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315d84) {
            ctx->pc = 0x315FFCu;
            goto label_315ffc;
        }
    }
    ctx->pc = 0x315D8Cu;
label_315d8c:
    // 0x315d8c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x315d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_315d90:
    // 0x315d90: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x315d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315d94:
    // 0x315d94: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x315d94u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
label_315d98:
    // 0x315d98: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x315d98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
label_315d9c:
    // 0x315d9c: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x315d9cu;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_315da0:
    // 0x315da0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x315da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315da4:
    // 0x315da4: 0x0  nop
    ctx->pc = 0x315da4u;
    // NOP
label_315da8:
    // 0x315da8: 0x10000022  b           . + 4 + (0x22 << 2)
label_315dac:
    if (ctx->pc == 0x315DACu) {
        ctx->pc = 0x315DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DA8u;
        // 0x315dac: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DB0u;
        goto label_315db0;
    }
    ctx->pc = 0x315DA8u;
    {
        const bool branch_taken_0x315da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DA8u;
        // 0x315dac: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315da8) {
            ctx->pc = 0x315E34u;
            goto label_315e34;
        }
    }
    ctx->pc = 0x315DB0u;
label_315db0:
    // 0x315db0: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_315db4:
    if (ctx->pc == 0x315DB4u) {
        ctx->pc = 0x315DB8u;
        goto label_315db8;
    }
    ctx->pc = 0x315DB0u;
    {
        const bool branch_taken_0x315db0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x315db0) {
            ctx->pc = 0x315DCCu;
            goto label_315dcc;
        }
    }
    ctx->pc = 0x315DB8u;
label_315db8:
    // 0x315db8: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x315db8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_315dbc:
    // 0x315dbc: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x315dbcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_315dc0:
    // 0x315dc0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x315dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_315dc4:
    // 0x315dc4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_315dc8:
    if (ctx->pc == 0x315DC8u) {
        ctx->pc = 0x315DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DC4u;
        // 0x315dc8: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DCCu;
        goto label_315dcc;
    }
    ctx->pc = 0x315DC4u;
    {
        const bool branch_taken_0x315dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DC4u;
        // 0x315dc8: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315dc4) {
            ctx->pc = 0x315E30u;
            goto label_315e30;
        }
    }
    ctx->pc = 0x315DCCu;
label_315dcc:
    // 0x315dcc: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
label_315dd0:
    if (ctx->pc == 0x315DD0u) {
        ctx->pc = 0x315DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DCCu;
        // 0x315dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315DD4u;
        goto label_315dd4;
    }
    ctx->pc = 0x315DCCu;
    {
        const bool branch_taken_0x315dcc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x315DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DCCu;
        // 0x315dd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315dcc) {
            ctx->pc = 0x315E08u;
            goto label_315e08;
        }
    }
    ctx->pc = 0x315DD4u;
label_315dd4:
    // 0x315dd4: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x315dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
label_315dd8:
    // 0x315dd8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x315dd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315ddc:
    // 0x315ddc: 0x0  nop
    ctx->pc = 0x315ddcu;
    // NOP
label_315de0:
    // 0x315de0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x315de0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_315de4:
    // 0x315de4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315de4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315de8:
    // 0x315de8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x315de8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315dec:
    // 0x315dec: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x315decu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_315df0:
    // 0x315df0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315df0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_315df4:
    // 0x315df4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x315df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_315df8:
    // 0x315df8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315dfc:
    if (ctx->pc == 0x315DFCu) {
        ctx->pc = 0x315DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DF8u;
        // 0x315dfc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E00u;
        goto label_315e00;
    }
    ctx->pc = 0x315DF8u;
    {
        const bool branch_taken_0x315df8 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315DF8u;
        // 0x315dfc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315df8) {
            ctx->pc = 0x315DE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315de0;
        }
    }
    ctx->pc = 0x315E00u;
label_315e00:
    // 0x315e00: 0x1000000c  b           . + 4 + (0xC << 2)
label_315e04:
    if (ctx->pc == 0x315E04u) {
        ctx->pc = 0x315E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E00u;
        // 0x315e04: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E08u;
        goto label_315e08;
    }
    ctx->pc = 0x315E00u;
    {
        const bool branch_taken_0x315e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E00u;
        // 0x315e04: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e00) {
            ctx->pc = 0x315E34u;
            goto label_315e34;
        }
    }
    ctx->pc = 0x315E08u;
label_315e08:
    // 0x315e08: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x315e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
label_315e0c:
    // 0x315e0c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x315e0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315e10:
    // 0x315e10: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x315e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_315e14:
    // 0x315e14: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315e14u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315e18:
    // 0x315e18: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x315e18u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315e1c:
    // 0x315e1c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x315e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_315e20:
    // 0x315e20: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x315e20u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_315e24:
    // 0x315e24: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x315e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_315e28:
    // 0x315e28: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315e2c:
    if (ctx->pc == 0x315E2Cu) {
        ctx->pc = 0x315E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E28u;
        // 0x315e2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E30u;
        goto label_315e30;
    }
    ctx->pc = 0x315E28u;
    {
        const bool branch_taken_0x315e28 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E28u;
        // 0x315e2c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e28) {
            ctx->pc = 0x315E10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315e10;
        }
    }
    ctx->pc = 0x315E30u;
label_315e30:
    // 0x315e30: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x315e30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315e34:
    // 0x315e34: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x315e34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_315e38:
    // 0x315e38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_315e3c:
    if (ctx->pc == 0x315E3Cu) {
        ctx->pc = 0x315E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E38u;
        // 0x315e3c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E40u;
        goto label_315e40;
    }
    ctx->pc = 0x315E38u;
    {
        const bool branch_taken_0x315e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E38u;
        // 0x315e3c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e38) {
            ctx->pc = 0x315E54u;
            goto label_315e54;
        }
    }
    ctx->pc = 0x315E40u;
label_315e40:
    // 0x315e40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x315e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315e44:
    // 0x315e44: 0x2e0f809  jalr        $s7
label_315e48:
    if (ctx->pc == 0x315E48u) {
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E4Cu;
        goto label_315e4c;
    }
    ctx->pc = 0x315E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x315E4Cu);
        ctx->pc = 0x315E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E44u;
        // 0x315e48: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x315E44u, 0x315E4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x315E4Cu;
label_315e4c:
    // 0x315e4c: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
label_315e50:
    if (ctx->pc == 0x315E50u) {
        ctx->pc = 0x315E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E4Cu;
        // 0x315e50: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E54u;
        goto label_315e54;
    }
    ctx->pc = 0x315E4Cu;
    {
        const bool branch_taken_0x315e4c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x315e4c) {
            ctx->pc = 0x315E50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315E4Cu;
            // 0x315e50: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315DB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315db0;
        }
    }
    ctx->pc = 0x315E54u;
label_315e54:
    // 0x315e54: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x315e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_315e58:
    // 0x315e58: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x315e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_315e5c:
    // 0x315e5c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x315e5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_315e60:
    // 0x315e60: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
label_315e64:
    if (ctx->pc == 0x315E64u) {
        ctx->pc = 0x315E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E60u;
        // 0x315e64: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E68u;
        goto label_315e68;
    }
    ctx->pc = 0x315E60u;
    {
        const bool branch_taken_0x315e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x315E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E60u;
        // 0x315e64: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e60) {
            ctx->pc = 0x315DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315da8;
        }
    }
    ctx->pc = 0x315E68u;
label_315e68:
    // 0x315e68: 0x10000065  b           . + 4 + (0x65 << 2)
label_315e6c:
    if (ctx->pc == 0x315E6Cu) {
        ctx->pc = 0x315E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E68u;
        // 0x315e6c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E70u;
        goto label_315e70;
    }
    ctx->pc = 0x315E68u;
    {
        const bool branch_taken_0x315e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E68u;
        // 0x315e6c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e68) {
            ctx->pc = 0x316000u;
            goto label_316000;
        }
    }
    ctx->pc = 0x315E70u;
label_315e70:
    // 0x315e70: 0x2761823  subu        $v1, $s3, $s6
    ctx->pc = 0x315e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
label_315e74:
    // 0x315e74: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x315e74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_315e78:
    // 0x315e78: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x315e78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_315e7c:
    // 0x315e7c: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x315e7cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3));
label_315e80:
    // 0x315e80: 0x2908023  subu        $s0, $s4, $s0
    ctx->pc = 0x315e80u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_315e84:
    // 0x315e84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x315e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_315e88:
    // 0x315e88: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x315e88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_315e8c:
    // 0x315e8c: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
label_315e90:
    if (ctx->pc == 0x315E90u) {
        ctx->pc = 0x315E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E8Cu;
        // 0x315e90: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315E94u;
        goto label_315e94;
    }
    ctx->pc = 0x315E8Cu;
    {
        const bool branch_taken_0x315e8c = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x315E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E8Cu;
        // 0x315e90: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e8c) {
            ctx->pc = 0x315F10u;
            goto label_315f10;
        }
    }
    ctx->pc = 0x315E94u;
label_315e94:
    // 0x315e94: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x315e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_315e98:
    // 0x315e98: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x315e98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_315e9c:
    // 0x315e9c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_315ea0:
    if (ctx->pc == 0x315EA0u) {
        ctx->pc = 0x315EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E9Cu;
        // 0x315ea0: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315EA4u;
        goto label_315ea4;
    }
    ctx->pc = 0x315E9Cu;
    {
        const bool branch_taken_0x315e9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315E9Cu;
        // 0x315ea0: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315e9c) {
            ctx->pc = 0x315EE0u;
            goto label_315ee0;
        }
    }
    ctx->pc = 0x315EA4u;
label_315ea4:
    // 0x315ea4: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x315ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_315ea8:
    // 0x315ea8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x315ea8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_315eac:
    // 0x315eac: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_315eb0:
    // 0x315eb0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x315eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315eb4:
    // 0x315eb4: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315eb8:
    // 0x315eb8: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x315eb8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_315ebc:
    // 0x315ebc: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315ebcu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315ec0:
    // 0x315ec0: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x315ec0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315ec4:
    // 0x315ec4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x315ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_315ec8:
    // 0x315ec8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_315ecc:
    // 0x315ecc: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x315eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_315ed0:
    // 0x315ed0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315ed4:
    if (ctx->pc == 0x315ED4u) {
        ctx->pc = 0x315ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED0u;
        // 0x315ed4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315ED8u;
        goto label_315ed8;
    }
    ctx->pc = 0x315ED0u;
    {
        const bool branch_taken_0x315ed0 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED0u;
        // 0x315ed4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ed0) {
            ctx->pc = 0x315EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315eb8;
        }
    }
    ctx->pc = 0x315ED8u;
label_315ed8:
    // 0x315ed8: 0x1000000e  b           . + 4 + (0xE << 2)
label_315edc:
    if (ctx->pc == 0x315EDCu) {
        ctx->pc = 0x315EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED8u;
        // 0x315edc: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315EE0u;
        goto label_315ee0;
    }
    ctx->pc = 0x315ED8u;
    {
        const bool branch_taken_0x315ed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315ED8u;
        // 0x315edc: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ed8) {
            ctx->pc = 0x315F14u;
            goto label_315f14;
        }
    }
    ctx->pc = 0x315EE0u;
label_315ee0:
    // 0x315ee0: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x315ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_315ee4:
    // 0x315ee4: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x315ee4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_315ee8:
    // 0x315ee8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315ee8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315eec:
    // 0x315eec: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x315eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315ef0:
    // 0x315ef0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x315ef0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_315ef4:
    // 0x315ef4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315ef4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315ef8:
    // 0x315ef8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x315ef8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315efc:
    // 0x315efc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x315efcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_315f00:
    // 0x315f00: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x315f00u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_315f04:
    // 0x315f04: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x315f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_315f08:
    // 0x315f08: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315f0c:
    if (ctx->pc == 0x315F0Cu) {
        ctx->pc = 0x315F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F08u;
        // 0x315f0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F10u;
        goto label_315f10;
    }
    ctx->pc = 0x315F08u;
    {
        const bool branch_taken_0x315f08 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F08u;
        // 0x315f0c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f08) {
            ctx->pc = 0x315EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315ef0;
        }
    }
    ctx->pc = 0x315F10u;
label_315f10:
    // 0x315f10: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x315f10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_315f14:
    // 0x315f14: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x315f14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_315f18:
    // 0x315f18: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x315f18u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_315f1c:
    // 0x315f1c: 0x203280b  movn        $a1, $s0, $v1
    ctx->pc = 0x315f1cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16));
label_315f20:
    // 0x315f20: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
label_315f24:
    if (ctx->pc == 0x315F24u) {
        ctx->pc = 0x315F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F20u;
        // 0x315f24: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F28u;
        goto label_315f28;
    }
    ctx->pc = 0x315F20u;
    {
        const bool branch_taken_0x315f20 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x315F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F20u;
        // 0x315f24: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f20) {
            ctx->pc = 0x315FA0u;
            goto label_315fa0;
        }
    }
    ctx->pc = 0x315F28u;
label_315f28:
    // 0x315f28: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x315f28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_315f2c:
    // 0x315f2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_315f30:
    if (ctx->pc == 0x315F30u) {
        ctx->pc = 0x315F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F2Cu;
        // 0x315f30: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F34u;
        goto label_315f34;
    }
    ctx->pc = 0x315F2Cu;
    {
        const bool branch_taken_0x315f2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F2Cu;
        // 0x315f30: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f2c) {
            ctx->pc = 0x315F70u;
            goto label_315f70;
        }
    }
    ctx->pc = 0x315F34u;
label_315f34:
    // 0x315f34: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x315f34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
label_315f38:
    // 0x315f38: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315f3c:
    // 0x315f3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x315f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_315f40:
    // 0x315f40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x315f40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_315f44:
    // 0x315f44: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315f44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315f48:
    // 0x315f48: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x315f48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_315f4c:
    // 0x315f4c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315f4cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315f50:
    // 0x315f50: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x315f50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_315f54:
    // 0x315f54: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x315f54u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_315f58:
    // 0x315f58: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x315f58u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
label_315f5c:
    // 0x315f5c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x315f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_315f60:
    // 0x315f60: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315f64:
    if (ctx->pc == 0x315F64u) {
        ctx->pc = 0x315F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F60u;
        // 0x315f64: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F68u;
        goto label_315f68;
    }
    ctx->pc = 0x315F60u;
    {
        const bool branch_taken_0x315f60 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F60u;
        // 0x315f64: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f60) {
            ctx->pc = 0x315F48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f48;
        }
    }
    ctx->pc = 0x315F68u;
label_315f68:
    // 0x315f68: 0x1000000e  b           . + 4 + (0xE << 2)
label_315f6c:
    if (ctx->pc == 0x315F6Cu) {
        ctx->pc = 0x315F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F68u;
        // 0x315f6c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315F70u;
        goto label_315f70;
    }
    ctx->pc = 0x315F68u;
    {
        const bool branch_taken_0x315f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F68u;
        // 0x315f6c: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f68) {
            ctx->pc = 0x315FA4u;
            goto label_315fa4;
        }
    }
    ctx->pc = 0x315F70u;
label_315f70:
    // 0x315f70: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x315f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
label_315f74:
    // 0x315f74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x315f74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_315f78:
    // 0x315f78: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x315f78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_315f7c:
    // 0x315f7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x315f7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_315f80:
    // 0x315f80: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x315f80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_315f84:
    // 0x315f84: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x315f84u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
label_315f88:
    // 0x315f88: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x315f88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_315f8c:
    // 0x315f8c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x315f8cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_315f90:
    // 0x315f90: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x315f90u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_315f94:
    // 0x315f94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x315f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_315f98:
    // 0x315f98: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_315f9c:
    if (ctx->pc == 0x315F9Cu) {
        ctx->pc = 0x315F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F98u;
        // 0x315f9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FA0u;
        goto label_315fa0;
    }
    ctx->pc = 0x315F98u;
    {
        const bool branch_taken_0x315f98 = (GPR_S64(ctx, 5) > 0);
        ctx->pc = 0x315F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315F98u;
        // 0x315f9c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315f98) {
            ctx->pc = 0x315F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_315f80;
        }
    }
    ctx->pc = 0x315FA0u;
label_315fa0:
    // 0x315fa0: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x315fa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_315fa4:
    // 0x315fa4: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x315fa4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_315fa8:
    // 0x315fa8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_315fac:
    if (ctx->pc == 0x315FACu) {
        ctx->pc = 0x315FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FA8u;
        // 0x315fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FB0u;
        goto label_315fb0;
    }
    ctx->pc = 0x315FA8u;
    {
        const bool branch_taken_0x315fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x315fa8) {
            ctx->pc = 0x315FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FA8u;
            // 0x315fac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x315FD4u;
            goto label_315fd4;
        }
    }
    ctx->pc = 0x315FB0u;
label_315fb0:
    // 0x315fb0: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x315fb0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_315fb4:
    // 0x315fb4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_315fb8:
    if (ctx->pc == 0x315FB8u) {
        ctx->pc = 0x315FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FB4u;
        // 0x315fb8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FBCu;
        goto label_315fbc;
    }
    ctx->pc = 0x315FB4u;
    {
        const bool branch_taken_0x315fb4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x315fb4) {
            ctx->pc = 0x315FB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FB4u;
            // 0x315fb8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315FBCu;
            goto label_315fbc;
        }
    }
    ctx->pc = 0x315FBCu;
label_315fbc:
    // 0x315fbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x315fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_315fc0:
    // 0x315fc0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x315fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_315fc4:
    // 0x315fc4: 0x2812  mflo        $a1
    ctx->pc = 0x315fc4u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_315fc8:
    // 0x315fc8: 0xc0c5594  jal         func_315650
label_315fcc:
    if (ctx->pc == 0x315FCCu) {
        ctx->pc = 0x315FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FC8u;
        // 0x315fcc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FD0u;
        goto label_315fd0;
    }
    ctx->pc = 0x315FC8u;
    SET_GPR_U32(ctx, 31, 0x315FD0u);
    ctx->pc = 0x315FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x315FC8u;
    // 0x315fcc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315650u;
    goto label_315650;
    ctx->pc = 0x315FD0u;
label_315fd0:
    // 0x315fd0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x315fd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_315fd4:
    // 0x315fd4: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x315fd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_315fd8:
    // 0x315fd8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_315fdc:
    if (ctx->pc == 0x315FDCu) {
        ctx->pc = 0x315FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FD8u;
        // 0x315fdc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FE0u;
        goto label_315fe0;
    }
    ctx->pc = 0x315FD8u;
    {
        const bool branch_taken_0x315fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FD8u;
        // 0x315fdc: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315fd8) {
            ctx->pc = 0x316000u;
            goto label_316000;
        }
    }
    ctx->pc = 0x315FE0u;
label_315fe0:
    // 0x315fe0: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x315fe0u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
label_315fe4:
    // 0x315fe4: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
label_315fe8:
    if (ctx->pc == 0x315FE8u) {
        ctx->pc = 0x315FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FE4u;
        // 0x315fe8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FECu;
        goto label_315fec;
    }
    ctx->pc = 0x315FE4u;
    {
        const bool branch_taken_0x315fe4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x315fe4) {
            ctx->pc = 0x315FE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x315FE4u;
            // 0x315fe8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x315FECu;
            goto label_315fec;
        }
    }
    ctx->pc = 0x315FECu;
label_315fec:
    // 0x315fec: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x315fecu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
label_315ff0:
    // 0x315ff0: 0x1012  mflo        $v0
    ctx->pc = 0x315ff0u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_315ff4:
    // 0x315ff4: 0x1000fda5  b           . + 4 + (-0x25B << 2)
label_315ff8:
    if (ctx->pc == 0x315FF8u) {
        ctx->pc = 0x315FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FF4u;
        // 0x315ff8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x315FFCu;
        goto label_315ffc;
    }
    ctx->pc = 0x315FF4u;
    {
        const bool branch_taken_0x315ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x315FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x315FF4u;
        // 0x315ff8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x315ff4) {
            ctx->pc = 0x31568Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31568c;
        }
    }
    ctx->pc = 0x315FFCu;
label_315ffc:
    // 0x315ffc: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x315ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_316000:
    // 0x316000: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x316000u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_316004:
    // 0x316004: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x316004u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_316008:
    // 0x316008: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x316008u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_31600c:
    // 0x31600c: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x31600cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_316010:
    // 0x316010: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x316010u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_316014:
    // 0x316014: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x316014u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_316018:
    // 0x316018: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x316018u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31601c:
    // 0x31601c: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x31601cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_316020:
    // 0x316020: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x316020u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_316024:
    // 0x316024: 0x3e00008  jr          $ra
label_316028:
    if (ctx->pc == 0x316028u) {
        ctx->pc = 0x316028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316024u;
        // 0x316028: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31602Cu;
        goto label_31602c;
    }
    ctx->pc = 0x316024u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x316028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x316024u;
        // 0x316028: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x316024u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31602Cu;
label_31602c:
    // 0x31602c: 0x0  nop
    ctx->pc = 0x31602cu;
    // NOP
    ctx->pc = 0x316030u;
}
