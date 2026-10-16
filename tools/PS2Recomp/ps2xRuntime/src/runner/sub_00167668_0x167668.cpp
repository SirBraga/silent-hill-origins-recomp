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

// Function: sub_00167668
// Address: 0x167668 - 0x168170
void sub_00167668_0x167668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167668_0x167668");
#endif

    switch (ctx->pc) {
        case 0x167668u: goto label_167668;
        case 0x16766cu: goto label_16766c;
        case 0x167670u: goto label_167670;
        case 0x167674u: goto label_167674;
        case 0x167678u: goto label_167678;
        case 0x16767cu: goto label_16767c;
        case 0x167680u: goto label_167680;
        case 0x167684u: goto label_167684;
        case 0x167688u: goto label_167688;
        case 0x16768cu: goto label_16768c;
        case 0x167690u: goto label_167690;
        case 0x167694u: goto label_167694;
        case 0x167698u: goto label_167698;
        case 0x16769cu: goto label_16769c;
        case 0x1676a0u: goto label_1676a0;
        case 0x1676a4u: goto label_1676a4;
        case 0x1676a8u: goto label_1676a8;
        case 0x1676acu: goto label_1676ac;
        case 0x1676b0u: goto label_1676b0;
        case 0x1676b4u: goto label_1676b4;
        case 0x1676b8u: goto label_1676b8;
        case 0x1676bcu: goto label_1676bc;
        case 0x1676c0u: goto label_1676c0;
        case 0x1676c4u: goto label_1676c4;
        case 0x1676c8u: goto label_1676c8;
        case 0x1676ccu: goto label_1676cc;
        case 0x1676d0u: goto label_1676d0;
        case 0x1676d4u: goto label_1676d4;
        case 0x1676d8u: goto label_1676d8;
        case 0x1676dcu: goto label_1676dc;
        case 0x1676e0u: goto label_1676e0;
        case 0x1676e4u: goto label_1676e4;
        case 0x1676e8u: goto label_1676e8;
        case 0x1676ecu: goto label_1676ec;
        case 0x1676f0u: goto label_1676f0;
        case 0x1676f4u: goto label_1676f4;
        case 0x1676f8u: goto label_1676f8;
        case 0x1676fcu: goto label_1676fc;
        case 0x167700u: goto label_167700;
        case 0x167704u: goto label_167704;
        case 0x167708u: goto label_167708;
        case 0x16770cu: goto label_16770c;
        case 0x167710u: goto label_167710;
        case 0x167714u: goto label_167714;
        case 0x167718u: goto label_167718;
        case 0x16771cu: goto label_16771c;
        case 0x167720u: goto label_167720;
        case 0x167724u: goto label_167724;
        case 0x167728u: goto label_167728;
        case 0x16772cu: goto label_16772c;
        case 0x167730u: goto label_167730;
        case 0x167734u: goto label_167734;
        case 0x167738u: goto label_167738;
        case 0x16773cu: goto label_16773c;
        case 0x167740u: goto label_167740;
        case 0x167744u: goto label_167744;
        case 0x167748u: goto label_167748;
        case 0x16774cu: goto label_16774c;
        case 0x167750u: goto label_167750;
        case 0x167754u: goto label_167754;
        case 0x167758u: goto label_167758;
        case 0x16775cu: goto label_16775c;
        case 0x167760u: goto label_167760;
        case 0x167764u: goto label_167764;
        case 0x167768u: goto label_167768;
        case 0x16776cu: goto label_16776c;
        case 0x167770u: goto label_167770;
        case 0x167774u: goto label_167774;
        case 0x167778u: goto label_167778;
        case 0x16777cu: goto label_16777c;
        case 0x167780u: goto label_167780;
        case 0x167784u: goto label_167784;
        case 0x167788u: goto label_167788;
        case 0x16778cu: goto label_16778c;
        case 0x167790u: goto label_167790;
        case 0x167794u: goto label_167794;
        case 0x167798u: goto label_167798;
        case 0x16779cu: goto label_16779c;
        case 0x1677a0u: goto label_1677a0;
        case 0x1677a4u: goto label_1677a4;
        case 0x1677a8u: goto label_1677a8;
        case 0x1677acu: goto label_1677ac;
        case 0x1677b0u: goto label_1677b0;
        case 0x1677b4u: goto label_1677b4;
        case 0x1677b8u: goto label_1677b8;
        case 0x1677bcu: goto label_1677bc;
        case 0x1677c0u: goto label_1677c0;
        case 0x1677c4u: goto label_1677c4;
        case 0x1677c8u: goto label_1677c8;
        case 0x1677ccu: goto label_1677cc;
        case 0x1677d0u: goto label_1677d0;
        case 0x1677d4u: goto label_1677d4;
        case 0x1677d8u: goto label_1677d8;
        case 0x1677dcu: goto label_1677dc;
        case 0x1677e0u: goto label_1677e0;
        case 0x1677e4u: goto label_1677e4;
        case 0x1677e8u: goto label_1677e8;
        case 0x1677ecu: goto label_1677ec;
        case 0x1677f0u: goto label_1677f0;
        case 0x1677f4u: goto label_1677f4;
        case 0x1677f8u: goto label_1677f8;
        case 0x1677fcu: goto label_1677fc;
        case 0x167800u: goto label_167800;
        case 0x167804u: goto label_167804;
        case 0x167808u: goto label_167808;
        case 0x16780cu: goto label_16780c;
        case 0x167810u: goto label_167810;
        case 0x167814u: goto label_167814;
        case 0x167818u: goto label_167818;
        case 0x16781cu: goto label_16781c;
        case 0x167820u: goto label_167820;
        case 0x167824u: goto label_167824;
        case 0x167828u: goto label_167828;
        case 0x16782cu: goto label_16782c;
        case 0x167830u: goto label_167830;
        case 0x167834u: goto label_167834;
        case 0x167838u: goto label_167838;
        case 0x16783cu: goto label_16783c;
        case 0x167840u: goto label_167840;
        case 0x167844u: goto label_167844;
        case 0x167848u: goto label_167848;
        case 0x16784cu: goto label_16784c;
        case 0x167850u: goto label_167850;
        case 0x167854u: goto label_167854;
        case 0x167858u: goto label_167858;
        case 0x16785cu: goto label_16785c;
        case 0x167860u: goto label_167860;
        case 0x167864u: goto label_167864;
        case 0x167868u: goto label_167868;
        case 0x16786cu: goto label_16786c;
        case 0x167870u: goto label_167870;
        case 0x167874u: goto label_167874;
        case 0x167878u: goto label_167878;
        case 0x16787cu: goto label_16787c;
        case 0x167880u: goto label_167880;
        case 0x167884u: goto label_167884;
        case 0x167888u: goto label_167888;
        case 0x16788cu: goto label_16788c;
        case 0x167890u: goto label_167890;
        case 0x167894u: goto label_167894;
        case 0x167898u: goto label_167898;
        case 0x16789cu: goto label_16789c;
        case 0x1678a0u: goto label_1678a0;
        case 0x1678a4u: goto label_1678a4;
        case 0x1678a8u: goto label_1678a8;
        case 0x1678acu: goto label_1678ac;
        case 0x1678b0u: goto label_1678b0;
        case 0x1678b4u: goto label_1678b4;
        case 0x1678b8u: goto label_1678b8;
        case 0x1678bcu: goto label_1678bc;
        case 0x1678c0u: goto label_1678c0;
        case 0x1678c4u: goto label_1678c4;
        case 0x1678c8u: goto label_1678c8;
        case 0x1678ccu: goto label_1678cc;
        case 0x1678d0u: goto label_1678d0;
        case 0x1678d4u: goto label_1678d4;
        case 0x1678d8u: goto label_1678d8;
        case 0x1678dcu: goto label_1678dc;
        case 0x1678e0u: goto label_1678e0;
        case 0x1678e4u: goto label_1678e4;
        case 0x1678e8u: goto label_1678e8;
        case 0x1678ecu: goto label_1678ec;
        case 0x1678f0u: goto label_1678f0;
        case 0x1678f4u: goto label_1678f4;
        case 0x1678f8u: goto label_1678f8;
        case 0x1678fcu: goto label_1678fc;
        case 0x167900u: goto label_167900;
        case 0x167904u: goto label_167904;
        case 0x167908u: goto label_167908;
        case 0x16790cu: goto label_16790c;
        case 0x167910u: goto label_167910;
        case 0x167914u: goto label_167914;
        case 0x167918u: goto label_167918;
        case 0x16791cu: goto label_16791c;
        case 0x167920u: goto label_167920;
        case 0x167924u: goto label_167924;
        case 0x167928u: goto label_167928;
        case 0x16792cu: goto label_16792c;
        case 0x167930u: goto label_167930;
        case 0x167934u: goto label_167934;
        case 0x167938u: goto label_167938;
        case 0x16793cu: goto label_16793c;
        case 0x167940u: goto label_167940;
        case 0x167944u: goto label_167944;
        case 0x167948u: goto label_167948;
        case 0x16794cu: goto label_16794c;
        case 0x167950u: goto label_167950;
        case 0x167954u: goto label_167954;
        case 0x167958u: goto label_167958;
        case 0x16795cu: goto label_16795c;
        case 0x167960u: goto label_167960;
        case 0x167964u: goto label_167964;
        case 0x167968u: goto label_167968;
        case 0x16796cu: goto label_16796c;
        case 0x167970u: goto label_167970;
        case 0x167974u: goto label_167974;
        case 0x167978u: goto label_167978;
        case 0x16797cu: goto label_16797c;
        case 0x167980u: goto label_167980;
        case 0x167984u: goto label_167984;
        case 0x167988u: goto label_167988;
        case 0x16798cu: goto label_16798c;
        case 0x167990u: goto label_167990;
        case 0x167994u: goto label_167994;
        case 0x167998u: goto label_167998;
        case 0x16799cu: goto label_16799c;
        case 0x1679a0u: goto label_1679a0;
        case 0x1679a4u: goto label_1679a4;
        case 0x1679a8u: goto label_1679a8;
        case 0x1679acu: goto label_1679ac;
        case 0x1679b0u: goto label_1679b0;
        case 0x1679b4u: goto label_1679b4;
        case 0x1679b8u: goto label_1679b8;
        case 0x1679bcu: goto label_1679bc;
        case 0x1679c0u: goto label_1679c0;
        case 0x1679c4u: goto label_1679c4;
        case 0x1679c8u: goto label_1679c8;
        case 0x1679ccu: goto label_1679cc;
        case 0x1679d0u: goto label_1679d0;
        case 0x1679d4u: goto label_1679d4;
        case 0x1679d8u: goto label_1679d8;
        case 0x1679dcu: goto label_1679dc;
        case 0x1679e0u: goto label_1679e0;
        case 0x1679e4u: goto label_1679e4;
        case 0x1679e8u: goto label_1679e8;
        case 0x1679ecu: goto label_1679ec;
        case 0x1679f0u: goto label_1679f0;
        case 0x1679f4u: goto label_1679f4;
        case 0x1679f8u: goto label_1679f8;
        case 0x1679fcu: goto label_1679fc;
        case 0x167a00u: goto label_167a00;
        case 0x167a04u: goto label_167a04;
        case 0x167a08u: goto label_167a08;
        case 0x167a0cu: goto label_167a0c;
        case 0x167a10u: goto label_167a10;
        case 0x167a14u: goto label_167a14;
        case 0x167a18u: goto label_167a18;
        case 0x167a1cu: goto label_167a1c;
        case 0x167a20u: goto label_167a20;
        case 0x167a24u: goto label_167a24;
        case 0x167a28u: goto label_167a28;
        case 0x167a2cu: goto label_167a2c;
        case 0x167a30u: goto label_167a30;
        case 0x167a34u: goto label_167a34;
        case 0x167a38u: goto label_167a38;
        case 0x167a3cu: goto label_167a3c;
        case 0x167a40u: goto label_167a40;
        case 0x167a44u: goto label_167a44;
        case 0x167a48u: goto label_167a48;
        case 0x167a4cu: goto label_167a4c;
        case 0x167a50u: goto label_167a50;
        case 0x167a54u: goto label_167a54;
        case 0x167a58u: goto label_167a58;
        case 0x167a5cu: goto label_167a5c;
        case 0x167a60u: goto label_167a60;
        case 0x167a64u: goto label_167a64;
        case 0x167a68u: goto label_167a68;
        case 0x167a6cu: goto label_167a6c;
        case 0x167a70u: goto label_167a70;
        case 0x167a74u: goto label_167a74;
        case 0x167a78u: goto label_167a78;
        case 0x167a7cu: goto label_167a7c;
        case 0x167a80u: goto label_167a80;
        case 0x167a84u: goto label_167a84;
        case 0x167a88u: goto label_167a88;
        case 0x167a8cu: goto label_167a8c;
        case 0x167a90u: goto label_167a90;
        case 0x167a94u: goto label_167a94;
        case 0x167a98u: goto label_167a98;
        case 0x167a9cu: goto label_167a9c;
        case 0x167aa0u: goto label_167aa0;
        case 0x167aa4u: goto label_167aa4;
        case 0x167aa8u: goto label_167aa8;
        case 0x167aacu: goto label_167aac;
        case 0x167ab0u: goto label_167ab0;
        case 0x167ab4u: goto label_167ab4;
        case 0x167ab8u: goto label_167ab8;
        case 0x167abcu: goto label_167abc;
        case 0x167ac0u: goto label_167ac0;
        case 0x167ac4u: goto label_167ac4;
        case 0x167ac8u: goto label_167ac8;
        case 0x167accu: goto label_167acc;
        case 0x167ad0u: goto label_167ad0;
        case 0x167ad4u: goto label_167ad4;
        case 0x167ad8u: goto label_167ad8;
        case 0x167adcu: goto label_167adc;
        case 0x167ae0u: goto label_167ae0;
        case 0x167ae4u: goto label_167ae4;
        case 0x167ae8u: goto label_167ae8;
        case 0x167aecu: goto label_167aec;
        case 0x167af0u: goto label_167af0;
        case 0x167af4u: goto label_167af4;
        case 0x167af8u: goto label_167af8;
        case 0x167afcu: goto label_167afc;
        case 0x167b00u: goto label_167b00;
        case 0x167b04u: goto label_167b04;
        case 0x167b08u: goto label_167b08;
        case 0x167b0cu: goto label_167b0c;
        case 0x167b10u: goto label_167b10;
        case 0x167b14u: goto label_167b14;
        case 0x167b18u: goto label_167b18;
        case 0x167b1cu: goto label_167b1c;
        case 0x167b20u: goto label_167b20;
        case 0x167b24u: goto label_167b24;
        case 0x167b28u: goto label_167b28;
        case 0x167b2cu: goto label_167b2c;
        case 0x167b30u: goto label_167b30;
        case 0x167b34u: goto label_167b34;
        case 0x167b38u: goto label_167b38;
        case 0x167b3cu: goto label_167b3c;
        case 0x167b40u: goto label_167b40;
        case 0x167b44u: goto label_167b44;
        case 0x167b48u: goto label_167b48;
        case 0x167b4cu: goto label_167b4c;
        case 0x167b50u: goto label_167b50;
        case 0x167b54u: goto label_167b54;
        case 0x167b58u: goto label_167b58;
        case 0x167b5cu: goto label_167b5c;
        case 0x167b60u: goto label_167b60;
        case 0x167b64u: goto label_167b64;
        case 0x167b68u: goto label_167b68;
        case 0x167b6cu: goto label_167b6c;
        case 0x167b70u: goto label_167b70;
        case 0x167b74u: goto label_167b74;
        case 0x167b78u: goto label_167b78;
        case 0x167b7cu: goto label_167b7c;
        case 0x167b80u: goto label_167b80;
        case 0x167b84u: goto label_167b84;
        case 0x167b88u: goto label_167b88;
        case 0x167b8cu: goto label_167b8c;
        case 0x167b90u: goto label_167b90;
        case 0x167b94u: goto label_167b94;
        case 0x167b98u: goto label_167b98;
        case 0x167b9cu: goto label_167b9c;
        case 0x167ba0u: goto label_167ba0;
        case 0x167ba4u: goto label_167ba4;
        case 0x167ba8u: goto label_167ba8;
        case 0x167bacu: goto label_167bac;
        case 0x167bb0u: goto label_167bb0;
        case 0x167bb4u: goto label_167bb4;
        case 0x167bb8u: goto label_167bb8;
        case 0x167bbcu: goto label_167bbc;
        case 0x167bc0u: goto label_167bc0;
        case 0x167bc4u: goto label_167bc4;
        case 0x167bc8u: goto label_167bc8;
        case 0x167bccu: goto label_167bcc;
        case 0x167bd0u: goto label_167bd0;
        case 0x167bd4u: goto label_167bd4;
        case 0x167bd8u: goto label_167bd8;
        case 0x167bdcu: goto label_167bdc;
        case 0x167be0u: goto label_167be0;
        case 0x167be4u: goto label_167be4;
        case 0x167be8u: goto label_167be8;
        case 0x167becu: goto label_167bec;
        case 0x167bf0u: goto label_167bf0;
        case 0x167bf4u: goto label_167bf4;
        case 0x167bf8u: goto label_167bf8;
        case 0x167bfcu: goto label_167bfc;
        case 0x167c00u: goto label_167c00;
        case 0x167c04u: goto label_167c04;
        case 0x167c08u: goto label_167c08;
        case 0x167c0cu: goto label_167c0c;
        case 0x167c10u: goto label_167c10;
        case 0x167c14u: goto label_167c14;
        case 0x167c18u: goto label_167c18;
        case 0x167c1cu: goto label_167c1c;
        case 0x167c20u: goto label_167c20;
        case 0x167c24u: goto label_167c24;
        case 0x167c28u: goto label_167c28;
        case 0x167c2cu: goto label_167c2c;
        case 0x167c30u: goto label_167c30;
        case 0x167c34u: goto label_167c34;
        case 0x167c38u: goto label_167c38;
        case 0x167c3cu: goto label_167c3c;
        case 0x167c40u: goto label_167c40;
        case 0x167c44u: goto label_167c44;
        case 0x167c48u: goto label_167c48;
        case 0x167c4cu: goto label_167c4c;
        case 0x167c50u: goto label_167c50;
        case 0x167c54u: goto label_167c54;
        case 0x167c58u: goto label_167c58;
        case 0x167c5cu: goto label_167c5c;
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        case 0x167e48u: goto label_167e48;
        case 0x167e4cu: goto label_167e4c;
        case 0x167e50u: goto label_167e50;
        case 0x167e54u: goto label_167e54;
        case 0x167e58u: goto label_167e58;
        case 0x167e5cu: goto label_167e5c;
        case 0x167e60u: goto label_167e60;
        case 0x167e64u: goto label_167e64;
        case 0x167e68u: goto label_167e68;
        case 0x167e6cu: goto label_167e6c;
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        case 0x167ebcu: goto label_167ebc;
        case 0x167ec0u: goto label_167ec0;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ec8u: goto label_167ec8;
        case 0x167eccu: goto label_167ecc;
        case 0x167ed0u: goto label_167ed0;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ed8u: goto label_167ed8;
        case 0x167edcu: goto label_167edc;
        case 0x167ee0u: goto label_167ee0;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ee8u: goto label_167ee8;
        case 0x167eecu: goto label_167eec;
        case 0x167ef0u: goto label_167ef0;
        case 0x167ef4u: goto label_167ef4;
        case 0x167ef8u: goto label_167ef8;
        case 0x167efcu: goto label_167efc;
        case 0x167f00u: goto label_167f00;
        case 0x167f04u: goto label_167f04;
        case 0x167f08u: goto label_167f08;
        case 0x167f0cu: goto label_167f0c;
        case 0x167f10u: goto label_167f10;
        case 0x167f14u: goto label_167f14;
        case 0x167f18u: goto label_167f18;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f20u: goto label_167f20;
        case 0x167f24u: goto label_167f24;
        case 0x167f28u: goto label_167f28;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f30u: goto label_167f30;
        case 0x167f34u: goto label_167f34;
        case 0x167f38u: goto label_167f38;
        case 0x167f3cu: goto label_167f3c;
        case 0x167f40u: goto label_167f40;
        case 0x167f44u: goto label_167f44;
        case 0x167f48u: goto label_167f48;
        case 0x167f4cu: goto label_167f4c;
        case 0x167f50u: goto label_167f50;
        case 0x167f54u: goto label_167f54;
        case 0x167f58u: goto label_167f58;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f60u: goto label_167f60;
        case 0x167f64u: goto label_167f64;
        case 0x167f68u: goto label_167f68;
        case 0x167f6cu: goto label_167f6c;
        case 0x167f70u: goto label_167f70;
        case 0x167f74u: goto label_167f74;
        case 0x167f78u: goto label_167f78;
        case 0x167f7cu: goto label_167f7c;
        case 0x167f80u: goto label_167f80;
        case 0x167f84u: goto label_167f84;
        case 0x167f88u: goto label_167f88;
        case 0x167f8cu: goto label_167f8c;
        case 0x167f90u: goto label_167f90;
        case 0x167f94u: goto label_167f94;
        case 0x167f98u: goto label_167f98;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa0u: goto label_167fa0;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fa8u: goto label_167fa8;
        case 0x167facu: goto label_167fac;
        case 0x167fb0u: goto label_167fb0;
        case 0x167fb4u: goto label_167fb4;
        case 0x167fb8u: goto label_167fb8;
        case 0x167fbcu: goto label_167fbc;
        case 0x167fc0u: goto label_167fc0;
        case 0x167fc4u: goto label_167fc4;
        case 0x167fc8u: goto label_167fc8;
        case 0x167fccu: goto label_167fcc;
        case 0x167fd0u: goto label_167fd0;
        case 0x167fd4u: goto label_167fd4;
        case 0x167fd8u: goto label_167fd8;
        case 0x167fdcu: goto label_167fdc;
        case 0x167fe0u: goto label_167fe0;
        case 0x167fe4u: goto label_167fe4;
        case 0x167fe8u: goto label_167fe8;
        case 0x167fecu: goto label_167fec;
        case 0x167ff0u: goto label_167ff0;
        case 0x167ff4u: goto label_167ff4;
        case 0x167ff8u: goto label_167ff8;
        case 0x167ffcu: goto label_167ffc;
        case 0x168000u: goto label_168000;
        case 0x168004u: goto label_168004;
        case 0x168008u: goto label_168008;
        case 0x16800cu: goto label_16800c;
        case 0x168010u: goto label_168010;
        case 0x168014u: goto label_168014;
        case 0x168018u: goto label_168018;
        case 0x16801cu: goto label_16801c;
        case 0x168020u: goto label_168020;
        case 0x168024u: goto label_168024;
        case 0x168028u: goto label_168028;
        case 0x16802cu: goto label_16802c;
        case 0x168030u: goto label_168030;
        case 0x168034u: goto label_168034;
        case 0x168038u: goto label_168038;
        case 0x16803cu: goto label_16803c;
        case 0x168040u: goto label_168040;
        case 0x168044u: goto label_168044;
        case 0x168048u: goto label_168048;
        case 0x16804cu: goto label_16804c;
        case 0x168050u: goto label_168050;
        case 0x168054u: goto label_168054;
        case 0x168058u: goto label_168058;
        case 0x16805cu: goto label_16805c;
        case 0x168060u: goto label_168060;
        case 0x168064u: goto label_168064;
        case 0x168068u: goto label_168068;
        case 0x16806cu: goto label_16806c;
        case 0x168070u: goto label_168070;
        case 0x168074u: goto label_168074;
        case 0x168078u: goto label_168078;
        case 0x16807cu: goto label_16807c;
        case 0x168080u: goto label_168080;
        case 0x168084u: goto label_168084;
        case 0x168088u: goto label_168088;
        case 0x16808cu: goto label_16808c;
        case 0x168090u: goto label_168090;
        case 0x168094u: goto label_168094;
        case 0x168098u: goto label_168098;
        case 0x16809cu: goto label_16809c;
        case 0x1680a0u: goto label_1680a0;
        case 0x1680a4u: goto label_1680a4;
        case 0x1680a8u: goto label_1680a8;
        case 0x1680acu: goto label_1680ac;
        case 0x1680b0u: goto label_1680b0;
        case 0x1680b4u: goto label_1680b4;
        case 0x1680b8u: goto label_1680b8;
        case 0x1680bcu: goto label_1680bc;
        case 0x1680c0u: goto label_1680c0;
        case 0x1680c4u: goto label_1680c4;
        case 0x1680c8u: goto label_1680c8;
        case 0x1680ccu: goto label_1680cc;
        case 0x1680d0u: goto label_1680d0;
        case 0x1680d4u: goto label_1680d4;
        case 0x1680d8u: goto label_1680d8;
        case 0x1680dcu: goto label_1680dc;
        case 0x1680e0u: goto label_1680e0;
        case 0x1680e4u: goto label_1680e4;
        case 0x1680e8u: goto label_1680e8;
        case 0x1680ecu: goto label_1680ec;
        case 0x1680f0u: goto label_1680f0;
        case 0x1680f4u: goto label_1680f4;
        case 0x1680f8u: goto label_1680f8;
        case 0x1680fcu: goto label_1680fc;
        case 0x168100u: goto label_168100;
        case 0x168104u: goto label_168104;
        case 0x168108u: goto label_168108;
        case 0x16810cu: goto label_16810c;
        case 0x168110u: goto label_168110;
        case 0x168114u: goto label_168114;
        case 0x168118u: goto label_168118;
        case 0x16811cu: goto label_16811c;
        case 0x168120u: goto label_168120;
        case 0x168124u: goto label_168124;
        case 0x168128u: goto label_168128;
        case 0x16812cu: goto label_16812c;
        case 0x168130u: goto label_168130;
        case 0x168134u: goto label_168134;
        case 0x168138u: goto label_168138;
        case 0x16813cu: goto label_16813c;
        case 0x168140u: goto label_168140;
        case 0x168144u: goto label_168144;
        case 0x168148u: goto label_168148;
        case 0x16814cu: goto label_16814c;
        case 0x168150u: goto label_168150;
        case 0x168154u: goto label_168154;
        case 0x168158u: goto label_168158;
        case 0x16815cu: goto label_16815c;
        case 0x168160u: goto label_168160;
        case 0x168164u: goto label_168164;
        case 0x168168u: goto label_168168;
        case 0x16816cu: goto label_16816c;
        default: break;
    }

    ctx->pc = 0x167668u;

label_167668:
    // 0x167668: 0x27bdf040  addiu       $sp, $sp, -0xFC0
    ctx->pc = 0x167668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963264));
label_16766c:
    // 0x16766c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16766cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_167670:
    // 0x167670: 0x7fb10f40  sq          $s1, 0xF40($sp)
    ctx->pc = 0x167670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3904), GPR_VEC(ctx, 17));
label_167674:
    // 0x167674: 0x7fb30f20  sq          $s3, 0xF20($sp)
    ctx->pc = 0x167674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3872), GPR_VEC(ctx, 19));
label_167678:
    // 0x167678: 0x3a0882d  daddu       $s1, $sp, $zero
    ctx->pc = 0x167678u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_16767c:
    // 0x16767c: 0x7fb40f10  sq          $s4, 0xF10($sp)
    ctx->pc = 0x16767cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3856), GPR_VEC(ctx, 20));
label_167680:
    // 0x167680: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x167680u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167684:
    // 0x167684: 0x7fb50f00  sq          $s5, 0xF00($sp)
    ctx->pc = 0x167684u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3840), GPR_VEC(ctx, 21));
label_167688:
    // 0x167688: 0x27b40e00  addiu       $s4, $sp, 0xE00
    ctx->pc = 0x167688u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 3584));
label_16768c:
    // 0x16768c: 0x7fbe0ed0  sq          $fp, 0xED0($sp)
    ctx->pc = 0x16768cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3792), GPR_VEC(ctx, 30));
label_167690:
    // 0x167690: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x167690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167694:
    // 0x167694: 0xe7ba0f90  swc1        $f26, 0xF90($sp)
    ctx->pc = 0x167694u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3984), bits); }
label_167698:
    // 0x167698: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x167698u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16769c:
    // 0x16769c: 0x7fb00f50  sq          $s0, 0xF50($sp)
    ctx->pc = 0x16769cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3920), GPR_VEC(ctx, 16));
label_1676a0:
    // 0x1676a0: 0x7fb20f30  sq          $s2, 0xF30($sp)
    ctx->pc = 0x1676a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3888), GPR_VEC(ctx, 18));
label_1676a4:
    // 0x1676a4: 0x7fb60ef0  sq          $s6, 0xEF0($sp)
    ctx->pc = 0x1676a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3824), GPR_VEC(ctx, 22));
label_1676a8:
    // 0x1676a8: 0x7fb70ee0  sq          $s7, 0xEE0($sp)
    ctx->pc = 0x1676a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 3808), GPR_VEC(ctx, 23));
label_1676ac:
    // 0x1676ac: 0xffbf0ec0  sd          $ra, 0xEC0($sp)
    ctx->pc = 0x1676acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 3776), GPR_U64(ctx, 31));
label_1676b0:
    // 0x1676b0: 0xe7bf0fb8  swc1        $f31, 0xFB8($sp)
    ctx->pc = 0x1676b0u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4024), bits); }
label_1676b4:
    // 0x1676b4: 0xe7be0fb0  swc1        $f30, 0xFB0($sp)
    ctx->pc = 0x1676b4u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4016), bits); }
label_1676b8:
    // 0x1676b8: 0xe7bd0fa8  swc1        $f29, 0xFA8($sp)
    ctx->pc = 0x1676b8u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4008), bits); }
label_1676bc:
    // 0x1676bc: 0xe7bc0fa0  swc1        $f28, 0xFA0($sp)
    ctx->pc = 0x1676bcu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4000), bits); }
label_1676c0:
    // 0x1676c0: 0xe7bb0f98  swc1        $f27, 0xF98($sp)
    ctx->pc = 0x1676c0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3992), bits); }
label_1676c4:
    // 0x1676c4: 0xe7b90f88  swc1        $f25, 0xF88($sp)
    ctx->pc = 0x1676c4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3976), bits); }
label_1676c8:
    // 0x1676c8: 0xe7b80f80  swc1        $f24, 0xF80($sp)
    ctx->pc = 0x1676c8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3968), bits); }
label_1676cc:
    // 0x1676cc: 0xe7b70f78  swc1        $f23, 0xF78($sp)
    ctx->pc = 0x1676ccu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3960), bits); }
label_1676d0:
    // 0x1676d0: 0xe7b60f70  swc1        $f22, 0xF70($sp)
    ctx->pc = 0x1676d0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3952), bits); }
label_1676d4:
    // 0x1676d4: 0xe7b50f68  swc1        $f21, 0xF68($sp)
    ctx->pc = 0x1676d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3944), bits); }
label_1676d8:
    // 0x1676d8: 0xe7b40f60  swc1        $f20, 0xF60($sp)
    ctx->pc = 0x1676d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3936), bits); }
label_1676dc:
    // 0x1676dc: 0xc44086a4  lwc1        $f0, -0x795C($v0)
    ctx->pc = 0x1676dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1676e0:
    // 0x1676e0: 0xc661004c  lwc1        $f1, 0x4C($s3)
    ctx->pc = 0x1676e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1676e4:
    // 0x1676e4: 0xc6620050  lwc1        $f2, 0x50($s3)
    ctx->pc = 0x1676e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1676e8:
    // 0x1676e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1676e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1676ec:
    // 0x1676ec: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x1676ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1676f0:
    // 0x1676f0: 0x46020042  mul.s       $f1, $f0, $f2
    ctx->pc = 0x1676f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_1676f4:
    // 0x1676f4: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x1676f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1676f8:
    // 0x1676f8: 0x0  nop
    ctx->pc = 0x1676f8u;
    // NOP
label_1676fc:
    // 0x1676fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_167700:
    if (ctx->pc == 0x167700u) {
        ctx->pc = 0x167700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676FCu;
        // 0x167700: 0x46006686  mov.s       $f26, $f12 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167704u;
        goto label_167704;
    }
    ctx->pc = 0x1676FCu;
    {
        const bool branch_taken_0x1676fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1676FCu;
        // 0x167700: 0x46006686  mov.s       $f26, $f12 (Delay Slot)
        ctx->f[26] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676fc) {
            ctx->pc = 0x167708u;
            goto label_167708;
        }
    }
    ctx->pc = 0x167704u;
label_167704:
    // 0x167704: 0x46002046  mov.s       $f1, $f4
    ctx->pc = 0x167704u;
    ctx->f[1] = FPU_MOV_S(ctx->f[4]);
label_167708:
    // 0x167708: 0xc6600078  lwc1        $f0, 0x78($s3)
    ctx->pc = 0x167708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16770c:
    // 0x16770c: 0xc6620058  lwc1        $f2, 0x58($s3)
    ctx->pc = 0x16770cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167710:
    // 0x167710: 0x460100c0  add.s       $f3, $f0, $f1
    ctx->pc = 0x167710u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_167714:
    // 0x167714: 0xc661005c  lwc1        $f1, 0x5C($s3)
    ctx->pc = 0x167714u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167718:
    // 0x167718: 0xe6630078  swc1        $f3, 0x78($s3)
    ctx->pc = 0x167718u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
label_16771c:
    // 0x16771c: 0xc44086a4  lwc1        $f0, -0x795C($v0)
    ctx->pc = 0x16771cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167720:
    // 0x167720: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x167720u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_167724:
    // 0x167724: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x167724u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_167728:
    // 0x167728: 0x46040034  c.lt.s      $f0, $f4
    ctx->pc = 0x167728u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16772c:
    // 0x16772c: 0x0  nop
    ctx->pc = 0x16772cu;
    // NOP
label_167730:
    // 0x167730: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_167734:
    if (ctx->pc == 0x167734u) {
        ctx->pc = 0x167734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167730u;
        // 0x167734: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167738u;
        goto label_167738;
    }
    ctx->pc = 0x167730u;
    {
        const bool branch_taken_0x167730 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x167730) {
            ctx->pc = 0x167734u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167730u;
            // 0x167734: 0x46002006  mov.s       $f0, $f4 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167738u;
            goto label_167738;
        }
    }
    ctx->pc = 0x167738u;
label_167738:
    // 0x167738: 0x46001864  .word       0x46001864                   # cvt.w.s     $f1, $f3 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x167738u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[3]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_16773c:
    // 0x16773c: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x16773cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_167740:
    // 0x167740: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x167740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_167744:
    // 0x167744: 0x4600d082  mul.s       $f2, $f26, $f0
    ctx->pc = 0x167744u;
    ctx->f[2] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_167748:
    // 0x167748: 0xc661007c  lwc1        $f1, 0x7C($s3)
    ctx->pc = 0x167748u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16774c:
    // 0x16774c: 0x4604d032  c.eq.s      $f26, $f4
    ctx->pc = 0x16774cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[26], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167750:
    // 0x167750: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x167750u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167754:
    // 0x167754: 0x0  nop
    ctx->pc = 0x167754u;
    // NOP
label_167758:
    // 0x167758: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167758u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16775c:
    // 0x16775c: 0x28820009  slti        $v0, $a0, 0x9
    ctx->pc = 0x16775cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)9) ? 1 : 0);
label_167760:
    // 0x167760: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x167760u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_167764:
    // 0x167764: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x167764u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3));
label_167768:
    // 0x167768: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x167768u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_16776c:
    // 0x16776c: 0xe661007c  swc1        $f1, 0x7C($s3)
    ctx->pc = 0x16776cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_167770:
    // 0x167770: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_167774:
    if (ctx->pc == 0x167774u) {
        ctx->pc = 0x167774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167770u;
        // 0x167774: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167778u;
        goto label_167778;
    }
    ctx->pc = 0x167770u;
    {
        const bool branch_taken_0x167770 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167770u;
        // 0x167774: 0xe6600078  swc1        $f0, 0x78($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 120), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167770) {
            ctx->pc = 0x16777Cu;
            goto label_16777c;
        }
    }
    ctx->pc = 0x167778u;
label_167778:
    // 0x167778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16777c:
    // 0x16777c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x16777cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_167780:
    // 0x167780: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x167780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
label_167784:
    // 0x167784: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x167784u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_167788:
    // 0x167788: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x167788u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16778c:
    // 0x16778c: 0x8c43830c  lw          $v1, -0x7CF4($v0)
    ctx->pc = 0x16778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_167790:
    // 0x167790: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x167790u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_167794:
    // 0x167794: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x167794u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_167798:
    // 0x167798: 0x4481e000  mtc1        $at, $f28
    ctx->pc = 0x167798u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[28], &bits, sizeof(bits)); }
label_16779c:
    // 0x16779c: 0x8c620198  lw          $v0, 0x198($v1)
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 408)));
label_1677a0:
    // 0x1677a0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_1677a4:
    // 0x1677a4: 0x4481d800  mtc1        $at, $f27
    ctx->pc = 0x1677a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[27], &bits, sizeof(bits)); }
label_1677a8:
    // 0x1677a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1677ac:
    if (ctx->pc == 0x1677ACu) {
        ctx->pc = 0x1677ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A8u;
        // 0x1677ac: 0xe7a20eb0  swc1        $f2, 0xEB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3760), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1677B0u;
        goto label_1677b0;
    }
    ctx->pc = 0x1677A8u;
    {
        const bool branch_taken_0x1677a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677A8u;
        // 0x1677ac: 0xe7a20eb0  swc1        $f2, 0xEB0($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3760), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677a8) {
            ctx->pc = 0x1677C4u;
            goto label_1677c4;
        }
    }
    ctx->pc = 0x1677B0u;
label_1677b0:
    // 0x1677b0: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x1677b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
label_1677b4:
    // 0x1677b4: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x1677b4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
label_1677b8:
    // 0x1677b8: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x1677b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_1677bc:
    // 0x1677bc: 0x0  nop
    ctx->pc = 0x1677bcu;
    // NOP
label_1677c0:
    // 0x1677c0: 0xe7a70eb0  swc1        $f7, 0xEB0($sp)
    ctx->pc = 0x1677c0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 3760), bits); }
label_1677c4:
    // 0x1677c4: 0x108000c8  beqz        $a0, . + 4 + (0xC8 << 2)
label_1677c8:
    if (ctx->pc == 0x1677C8u) {
        ctx->pc = 0x1677C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677C4u;
        // 0x1677c8: 0x26770080  addiu       $s7, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1677CCu;
        goto label_1677cc;
    }
    ctx->pc = 0x1677C4u;
    {
        const bool branch_taken_0x1677c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1677C4u;
        // 0x1677c8: 0x26770080  addiu       $s7, $s3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677c4) {
            ctx->pc = 0x167AE8u;
            goto label_167ae8;
        }
    }
    ctx->pc = 0x1677CCu;
label_1677cc:
    // 0x1677cc: 0x188000c6  blez        $a0, . + 4 + (0xC6 << 2)
label_1677d0:
    if (ctx->pc == 0x1677D0u) {
        ctx->pc = 0x1677D4u;
        goto label_1677d4;
    }
    ctx->pc = 0x1677CCu;
    {
        const bool branch_taken_0x1677cc = (GPR_S64(ctx, 4) <= 0);
        if (branch_taken_0x1677cc) {
            ctx->pc = 0x167AE8u;
            goto label_167ae8;
        }
    }
    ctx->pc = 0x1677D4u;
label_1677d4:
    // 0x1677d4: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x1677d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_1677d8:
    // 0x1677d8: 0x4481e800  mtc1        $at, $f29
    ctx->pc = 0x1677d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[29], &bits, sizeof(bits)); }
label_1677dc:
    // 0x1677dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1677dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1677e0:
    // 0x1677e0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1677e4:
    // 0x1677e4: 0x4481f800  mtc1        $at, $f31
    ctx->pc = 0x1677e4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[31], &bits, sizeof(bits)); }
label_1677e8:
    // 0x1677e8: 0x241601c0  addiu       $s6, $zero, 0x1C0
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1677ec:
    // 0x1677ec: 0x3c013d80  lui         $at, 0x3D80
    ctx->pc = 0x1677ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15744 << 16));
label_1677f0:
    // 0x1677f0: 0x4481f000  mtc1        $at, $f30
    ctx->pc = 0x1677f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[30], &bits, sizeof(bits)); }
label_1677f4:
    // 0x1677f4: 0x0  nop
    ctx->pc = 0x1677f4u;
    // NOP
label_1677f8:
    // 0x1677f8: 0xc0a074a  jal         func_281D28
label_1677fc:
    if (ctx->pc == 0x1677FCu) {
        ctx->pc = 0x167800u;
        goto label_167800;
    }
    ctx->pc = 0x1677F8u;
    SET_GPR_U32(ctx, 31, 0x167800u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1677F8u, 0x167800u)) {
        return;
    }
    ctx->pc = 0x167800u;
label_167800:
    // 0x167800: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x167800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_167804:
    // 0x167804: 0xc0a074a  jal         func_281D28
label_167808:
    if (ctx->pc == 0x167808u) {
        ctx->pc = 0x167808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167804u;
        // 0x167808: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x16780Cu;
        goto label_16780c;
    }
    ctx->pc = 0x167804u;
    SET_GPR_U32(ctx, 31, 0x16780Cu);
    ctx->pc = 0x167808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167804u;
    // 0x167808: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167804u, 0x16780Cu)) {
        return;
    }
    ctx->pc = 0x16780Cu;
label_16780c:
    // 0x16780c: 0x304301ff  andi        $v1, $v0, 0x1FF
    ctx->pc = 0x16780cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_167810:
    // 0x167810: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_167814:
    if (ctx->pc == 0x167814u) {
        ctx->pc = 0x167814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167810u;
        // 0x167814: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167818u;
        goto label_167818;
    }
    ctx->pc = 0x167810u;
    {
        const bool branch_taken_0x167810 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x167814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167810u;
        // 0x167814: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167810) {
            ctx->pc = 0x16782Cu;
            goto label_16782c;
        }
    }
    ctx->pc = 0x167818u;
label_167818:
    // 0x167818: 0x4483b800  mtc1        $v1, $f23
    ctx->pc = 0x167818u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_16781c:
    // 0x16781c: 0x0  nop
    ctx->pc = 0x16781cu;
    // NOP
label_167820:
    // 0x167820: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x167820u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_167824:
    // 0x167824: 0x10000007  b           . + 4 + (0x7 << 2)
label_167828:
    if (ctx->pc == 0x167828u) {
        ctx->pc = 0x16782Cu;
        goto label_16782c;
    }
    ctx->pc = 0x167824u;
    {
        const bool branch_taken_0x167824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167824) {
            ctx->pc = 0x167844u;
            goto label_167844;
        }
    }
    ctx->pc = 0x16782Cu;
label_16782c:
    // 0x16782c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x16782cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_167830:
    // 0x167830: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167834:
    // 0x167834: 0x4482b800  mtc1        $v0, $f23
    ctx->pc = 0x167834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_167838:
    // 0x167838: 0x0  nop
    ctx->pc = 0x167838u;
    // NOP
label_16783c:
    // 0x16783c: 0x4680bde0  cvt.s.w     $f23, $f23
    ctx->pc = 0x16783cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[23], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
label_167840:
    // 0x167840: 0x4617bdc0  add.s       $f23, $f23, $f23
    ctx->pc = 0x167840u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[23]);
label_167844:
    // 0x167844: 0xc0a074a  jal         func_281D28
label_167848:
    if (ctx->pc == 0x167848u) {
        ctx->pc = 0x16784Cu;
        goto label_16784c;
    }
    ctx->pc = 0x167844u;
    SET_GPR_U32(ctx, 31, 0x16784Cu);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167844u, 0x16784Cu)) {
        return;
    }
    ctx->pc = 0x16784Cu;
label_16784c:
    // 0x16784c: 0x56001b  divu        $zero, $v0, $s6
    ctx->pc = 0x16784cu;
    { uint32_t divisor = GPR_U32(ctx, 22); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_167850:
    // 0x167850: 0x52c00001  beql        $s6, $zero, . + 4 + (0x1 << 2)
label_167854:
    if (ctx->pc == 0x167854u) {
        ctx->pc = 0x167854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167850u;
        // 0x167854: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167858u;
        goto label_167858;
    }
    ctx->pc = 0x167850u;
    {
        const bool branch_taken_0x167850 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x167850) {
            ctx->pc = 0x167854u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167850u;
            // 0x167854: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167858u;
            goto label_167858;
        }
    }
    ctx->pc = 0x167858u;
label_167858:
    // 0x167858: 0x1010  mfhi        $v0
    ctx->pc = 0x167858u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_16785c:
    // 0x16785c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_167860:
    if (ctx->pc == 0x167860u) {
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167864u;
        goto label_167864;
    }
    ctx->pc = 0x16785Cu;
    {
        const bool branch_taken_0x16785c = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x167860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16785Cu;
        // 0x167860: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16785c) {
            ctx->pc = 0x167878u;
            goto label_167878;
        }
    }
    ctx->pc = 0x167864u;
label_167864:
    // 0x167864: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x167864u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_167868:
    // 0x167868: 0x0  nop
    ctx->pc = 0x167868u;
    // NOP
label_16786c:
    // 0x16786c: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x16786cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_167870:
    // 0x167870: 0x10000007  b           . + 4 + (0x7 << 2)
label_167874:
    if (ctx->pc == 0x167874u) {
        ctx->pc = 0x167878u;
        goto label_167878;
    }
    ctx->pc = 0x167870u;
    {
        const bool branch_taken_0x167870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167870) {
            ctx->pc = 0x167890u;
            goto label_167890;
        }
    }
    ctx->pc = 0x167878u;
label_167878:
    // 0x167878: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x167878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_16787c:
    // 0x16787c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16787cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167880:
    // 0x167880: 0x4482b000  mtc1        $v0, $f22
    ctx->pc = 0x167880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_167884:
    // 0x167884: 0x0  nop
    ctx->pc = 0x167884u;
    // NOP
label_167888:
    // 0x167888: 0x4680b5a0  cvt.s.w     $f22, $f22
    ctx->pc = 0x167888u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[22], sizeof(tmp)); ctx->f[22] = FPU_CVT_S_W(tmp); }
label_16788c:
    // 0x16788c: 0x4616b580  add.s       $f22, $f22, $f22
    ctx->pc = 0x16788cu;
    ctx->f[22] = FPU_ADD_S(ctx->f[22], ctx->f[22]);
label_167890:
    // 0x167890: 0xc0a074a  jal         func_281D28
label_167894:
    if (ctx->pc == 0x167894u) {
        ctx->pc = 0x167898u;
        goto label_167898;
    }
    ctx->pc = 0x167890u;
    SET_GPR_U32(ctx, 31, 0x167898u);
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167890u, 0x167898u)) {
        return;
    }
    ctx->pc = 0x167898u;
label_167898:
    // 0x167898: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x167898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_16789c:
    // 0x16789c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_1678a0:
    if (ctx->pc == 0x1678A0u) {
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678A4u;
        goto label_1678a4;
    }
    ctx->pc = 0x16789Cu;
    {
        const bool branch_taken_0x16789c = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x1678A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16789Cu;
        // 0x1678a0: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16789c) {
            ctx->pc = 0x1678B8u;
            goto label_1678b8;
        }
    }
    ctx->pc = 0x1678A4u;
label_1678a4:
    // 0x1678a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1678a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1678a8:
    // 0x1678a8: 0x0  nop
    ctx->pc = 0x1678a8u;
    // NOP
label_1678ac:
    // 0x1678ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1678acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1678b0:
    // 0x1678b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1678b4:
    if (ctx->pc == 0x1678B4u) {
        ctx->pc = 0x1678B8u;
        goto label_1678b8;
    }
    ctx->pc = 0x1678B0u;
    {
        const bool branch_taken_0x1678b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1678b0) {
            ctx->pc = 0x1678D0u;
            goto label_1678d0;
        }
    }
    ctx->pc = 0x1678B8u;
label_1678b8:
    // 0x1678b8: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x1678b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_1678bc:
    // 0x1678bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1678bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1678c0:
    // 0x1678c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1678c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1678c4:
    // 0x1678c4: 0x0  nop
    ctx->pc = 0x1678c4u;
    // NOP
label_1678c8:
    // 0x1678c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1678c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1678cc:
    // 0x1678cc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x1678ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_1678d0:
    // 0x1678d0: 0x0  nop
    ctx->pc = 0x1678d0u;
    // NOP
label_1678d4:
    // 0x1678d4: 0x0  nop
    ctx->pc = 0x1678d4u;
    // NOP
label_1678d8:
    // 0x1678d8: 0x461d0003  div.s       $f0, $f0, $f29
    ctx->pc = 0x1678d8u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[29]);
label_1678dc:
    // 0x1678dc: 0xc6610054  lwc1        $f1, 0x54($s3)
    ctx->pc = 0x1678dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1678e0:
    // 0x1678e0: 0x3c013fd2  lui         $at, 0x3FD2
    ctx->pc = 0x1678e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16338 << 16));
label_1678e4:
    // 0x1678e4: 0x3421d2d3  ori         $at, $at, 0xD2D3
    ctx->pc = 0x1678e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53971);
label_1678e8:
    // 0x1678e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1678e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1678ec:
    // 0x1678ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1678ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1678f0:
    // 0x1678f0: 0xc0a074a  jal         func_281D28
label_1678f4:
    if (ctx->pc == 0x1678F4u) {
        ctx->pc = 0x1678F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1678F0u;
        // 0x1678f4: 0x46020602  mul.s       $f24, $f0, $f2 (Delay Slot)
        ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1678F8u;
        goto label_1678f8;
    }
    ctx->pc = 0x1678F0u;
    SET_GPR_U32(ctx, 31, 0x1678F8u);
    ctx->pc = 0x1678F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1678F0u;
    // 0x1678f4: 0x46020602  mul.s       $f24, $f0, $f2 (Delay Slot)
    ctx->f[24] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1678F0u, 0x1678F8u)) {
        return;
    }
    ctx->pc = 0x1678F8u;
label_1678f8:
    // 0x1678f8: 0xc7a00eb0  lwc1        $f0, 0xEB0($sp)
    ctx->pc = 0x1678f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1678fc:
    // 0x1678fc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x1678fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_167900:
    // 0x167900: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_167904:
    if (ctx->pc == 0x167904u) {
        ctx->pc = 0x167904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167900u;
        // 0x167904: 0x4600c642  mul.s       $f25, $f24, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167908u;
        goto label_167908;
    }
    ctx->pc = 0x167900u;
    {
        const bool branch_taken_0x167900 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x167904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167900u;
        // 0x167904: 0x4600c642  mul.s       $f25, $f24, $f0 (Delay Slot)
        ctx->f[25] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167900) {
            ctx->pc = 0x16791Cu;
            goto label_16791c;
        }
    }
    ctx->pc = 0x167908u;
label_167908:
    // 0x167908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16790c:
    // 0x16790c: 0x0  nop
    ctx->pc = 0x16790cu;
    // NOP
label_167910:
    // 0x167910: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167914:
    // 0x167914: 0x10000008  b           . + 4 + (0x8 << 2)
label_167918:
    if (ctx->pc == 0x167918u) {
        ctx->pc = 0x16791Cu;
        goto label_16791c;
    }
    ctx->pc = 0x167914u;
    {
        const bool branch_taken_0x167914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167914) {
            ctx->pc = 0x167938u;
            goto label_167938;
        }
    }
    ctx->pc = 0x16791Cu;
label_16791c:
    // 0x16791c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_167920:
    // 0x167920: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x167920u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_167924:
    // 0x167924: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167928:
    // 0x167928: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167928u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16792c:
    // 0x16792c: 0x0  nop
    ctx->pc = 0x16792cu;
    // NOP
label_167930:
    // 0x167930: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167930u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167934:
    // 0x167934: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x167934u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_167938:
    // 0x167938: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x167938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
label_16793c:
    // 0x16793c: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x16793cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_167940:
    // 0x167940: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167944:
    // 0x167944: 0x0  nop
    ctx->pc = 0x167944u;
    // NOP
label_167948:
    // 0x167948: 0x46140502  mul.s       $f20, $f0, $f20
    ctx->pc = 0x167948u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_16794c:
    // 0x16794c: 0xc09b164  jal         func_26C590
label_167950:
    if (ctx->pc == 0x167950u) {
        ctx->pc = 0x167950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16794Cu;
        // 0x167950: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167954u;
        goto label_167954;
    }
    ctx->pc = 0x16794Cu;
    SET_GPR_U32(ctx, 31, 0x167954u);
    ctx->pc = 0x167950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16794Cu;
    // 0x167950: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x16794Cu, 0x167954u)) {
        return;
    }
    ctx->pc = 0x167954u;
label_167954:
    // 0x167954: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x167954u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_167958:
    // 0x167958: 0xc09b0e8  jal         func_26C3A0
label_16795c:
    if (ctx->pc == 0x16795Cu) {
        ctx->pc = 0x16795Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167958u;
        // 0x16795c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167960u;
        goto label_167960;
    }
    ctx->pc = 0x167958u;
    SET_GPR_U32(ctx, 31, 0x167960u);
    ctx->pc = 0x16795Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167958u;
    // 0x16795c: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x167958u, 0x167960u)) {
        return;
    }
    ctx->pc = 0x167960u;
label_167960:
    // 0x167960: 0xc0a074a  jal         func_281D28
label_167964:
    if (ctx->pc == 0x167964u) {
        ctx->pc = 0x167964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167960u;
        // 0x167964: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167968u;
        goto label_167968;
    }
    ctx->pc = 0x167960u;
    SET_GPR_U32(ctx, 31, 0x167968u);
    ctx->pc = 0x167964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167960u;
    // 0x167964: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167960u, 0x167968u)) {
        return;
    }
    ctx->pc = 0x167968u;
label_167968:
    // 0x167968: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x167968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_16796c:
    // 0x16796c: 0x44901800  mtc1        $s0, $f3
    ctx->pc = 0x16796cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_167970:
    // 0x167970: 0x0  nop
    ctx->pc = 0x167970u;
    // NOP
label_167974:
    // 0x167974: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x167974u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_167978:
    // 0x167978: 0x24430040  addiu       $v1, $v0, 0x40
    ctx->pc = 0x167978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_16797c:
    // 0x16797c: 0x4619a942  mul.s       $f5, $f21, $f25
    ctx->pc = 0x16797cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
label_167980:
    // 0x167980: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x167980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_167984:
    // 0x167984: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167984u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167988:
    // 0x167988: 0x0  nop
    ctx->pc = 0x167988u;
    // NOP
label_16798c:
    // 0x16798c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16798cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167990:
    // 0x167990: 0xc44186a8  lwc1        $f1, -0x7958($v0)
    ctx->pc = 0x167990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294936232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167994:
    // 0x167994: 0x4618a102  mul.s       $f4, $f20, $f24
    ctx->pc = 0x167994u;
    ctx->f[4] = FPU_MUL_S(ctx->f[20], ctx->f[24]);
label_167998:
    // 0x167998: 0x461e18c2  mul.s       $f3, $f3, $f30
    ctx->pc = 0x167998u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[30]);
label_16799c:
    // 0x16799c: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x16799cu;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_1679a0:
    // 0x1679a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1679a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1679a4:
    // 0x1679a4: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x1679a4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_1679a8:
    // 0x1679a8: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1679a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1679ac:
    // 0x1679ac: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1679acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1679b0:
    // 0x1679b0: 0x4604b080  add.s       $f2, $f22, $f4
    ctx->pc = 0x1679b0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[22], ctx->f[4]);
label_1679b4:
    // 0x1679b4: 0x461e1980  add.s       $f6, $f3, $f30
    ctx->pc = 0x1679b4u;
    ctx->f[6] = FPU_ADD_S(ctx->f[3], ctx->f[30]);
label_1679b8:
    // 0x1679b8: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1679b8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1679bc:
    // 0x1679bc: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x1679bcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_1679c0:
    // 0x1679c0: 0x460001e4  .word       0x460001E4                   # cvt.w.s     $f7, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1679c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[7], &tmp, sizeof(tmp)); }
label_1679c4:
    // 0x1679c4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x1679c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_1679c8:
    // 0x1679c8: 0x4605b840  add.s       $f1, $f23, $f5
    ctx->pc = 0x1679c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[23], ctx->f[5]);
label_1679cc:
    // 0x1679cc: 0xe6220004  swc1        $f2, 0x4($s1)
    ctx->pc = 0x1679ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_1679d0:
    // 0x1679d0: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x1679d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1679d4:
    // 0x1679d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1679d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1679d8:
    // 0x1679d8: 0x0  nop
    ctx->pc = 0x1679d8u;
    // NOP
label_1679dc:
    // 0x1679dc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1679dcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1679e0:
    // 0x1679e0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x1679e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_1679e4:
    // 0x1679e4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x1679e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_1679e8:
    // 0x1679e8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x1679e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_1679ec:
    // 0x1679ec: 0xe63d002c  swc1        $f29, 0x2C($s1)
    ctx->pc = 0x1679ecu;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_1679f0:
    // 0x1679f0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x1679f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1679f4:
    // 0x1679f4: 0x4619a502  mul.s       $f20, $f20, $f25
    ctx->pc = 0x1679f4u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[25]);
label_1679f8:
    // 0x1679f8: 0xe6230014  swc1        $f3, 0x14($s1)
    ctx->pc = 0x1679f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_1679fc:
    // 0x1679fc: 0x4618ad42  mul.s       $f21, $f21, $f24
    ctx->pc = 0x1679fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[24]);
label_167a00:
    // 0x167a00: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167a00u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167a04:
    // 0x167a04: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167a04u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167a08:
    // 0x167a08: 0x4614b880  add.s       $f2, $f23, $f20
    ctx->pc = 0x167a08u;
    ctx->f[2] = FPU_ADD_S(ctx->f[23], ctx->f[20]);
label_167a0c:
    // 0x167a0c: 0xe63f0010  swc1        $f31, 0x10($s1)
    ctx->pc = 0x167a0cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167a10:
    // 0x167a10: 0x4615b041  sub.s       $f1, $f22, $f21
    ctx->pc = 0x167a10u;
    ctx->f[1] = FPU_SUB_S(ctx->f[22], ctx->f[21]);
label_167a14:
    // 0x167a14: 0xe6220000  swc1        $f2, 0x0($s1)
    ctx->pc = 0x167a14u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167a18:
    // 0x167a18: 0xe6210004  swc1        $f1, 0x4($s1)
    ctx->pc = 0x167a18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_167a1c:
    // 0x167a1c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167a20:
    // 0x167a20: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x167a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_167a24:
    // 0x167a24: 0x24423fe0  addiu       $v0, $v0, 0x3FE0
    ctx->pc = 0x167a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16352));
label_167a28:
    // 0x167a28: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167a28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167a2c:
    // 0x167a2c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x167a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167a30:
    // 0x167a30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x167a30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_167a34:
    // 0x167a34: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167a38:
    // 0x167a38: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x167a38u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167a3c:
    // 0x167a3c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167a3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167a40:
    // 0x167a40: 0x4605b941  sub.s       $f5, $f23, $f5
    ctx->pc = 0x167a40u;
    ctx->f[5] = FPU_SUB_S(ctx->f[23], ctx->f[5]);
label_167a44:
    // 0x167a44: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167a44u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167a48:
    // 0x167a48: 0x4604b101  sub.s       $f4, $f22, $f4
    ctx->pc = 0x167a48u;
    ctx->f[4] = FPU_SUB_S(ctx->f[22], ctx->f[4]);
label_167a4c:
    // 0x167a4c: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167a4cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167a50:
    // 0x167a50: 0xe63f0010  swc1        $f31, 0x10($s1)
    ctx->pc = 0x167a50u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167a54:
    // 0x167a54: 0xe6250000  swc1        $f5, 0x0($s1)
    ctx->pc = 0x167a54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167a58:
    // 0x167a58: 0xe6240004  swc1        $f4, 0x4($s1)
    ctx->pc = 0x167a58u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_167a5c:
    // 0x167a5c: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x167a5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167a60:
    // 0x167a60: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167a64:
    // 0x167a64: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167a68:
    // 0x167a68: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167a6c:
    // 0x167a6c: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x167a6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167a70:
    // 0x167a70: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167a70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167a74:
    // 0x167a74: 0x4614bd01  sub.s       $f20, $f23, $f20
    ctx->pc = 0x167a74u;
    ctx->f[20] = FPU_SUB_S(ctx->f[23], ctx->f[20]);
label_167a78:
    // 0x167a78: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x167a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_167a7c:
    // 0x167a7c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x167a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_167a80:
    // 0x167a80: 0x4615b540  add.s       $f21, $f22, $f21
    ctx->pc = 0x167a80u;
    ctx->f[21] = FPU_ADD_S(ctx->f[22], ctx->f[21]);
label_167a84:
    // 0x167a84: 0xe6260014  swc1        $f6, 0x14($s1)
    ctx->pc = 0x167a84u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167a88:
    // 0x167a88: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167a88u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167a8c:
    // 0x167a8c: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167a8cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167a90:
    // 0x167a90: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x167a90u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167a94:
    // 0x167a94: 0xe6350004  swc1        $f21, 0x4($s1)
    ctx->pc = 0x167a94u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_167a98:
    // 0x167a98: 0xe6220010  swc1        $f2, 0x10($s1)
    ctx->pc = 0x167a98u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167a9c:
    // 0x167a9c: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167aa0:
    // 0x167aa0: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167aa0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167aa4:
    // 0x167aa4: 0xe621002c  swc1        $f1, 0x2C($s1)
    ctx->pc = 0x167aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167aa8:
    // 0x167aa8: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167aac:
    // 0x167aac: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167aacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167ab0:
    // 0x167ab0: 0x26a40002  addiu       $a0, $s5, 0x2
    ctx->pc = 0x167ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_167ab4:
    // 0x167ab4: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x167ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_167ab8:
    // 0x167ab8: 0x26a30003  addiu       $v1, $s5, 0x3
    ctx->pc = 0x167ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_167abc:
    // 0x167abc: 0xa6950000  sh          $s5, 0x0($s4)
    ctx->pc = 0x167abcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 21));
label_167ac0:
    // 0x167ac0: 0xa6950006  sh          $s5, 0x6($s4)
    ctx->pc = 0x167ac0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 21));
label_167ac4:
    // 0x167ac4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x167ac4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_167ac8:
    // 0x167ac8: 0xa6820004  sh          $v0, 0x4($s4)
    ctx->pc = 0x167ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 2));
label_167acc:
    // 0x167acc: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x167accu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_167ad0:
    // 0x167ad0: 0xa6830008  sh          $v1, 0x8($s4)
    ctx->pc = 0x167ad0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 3));
label_167ad4:
    // 0x167ad4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x167ad4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_167ad8:
    // 0x167ad8: 0xa684000a  sh          $a0, 0xA($s4)
    ctx->pc = 0x167ad8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 4));
label_167adc:
    // 0x167adc: 0xa6840002  sh          $a0, 0x2($s4)
    ctx->pc = 0x167adcu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 4));
label_167ae0:
    // 0x167ae0: 0x1640ff45  bnez        $s2, . + 4 + (-0xBB << 2)
label_167ae4:
    if (ctx->pc == 0x167AE4u) {
        ctx->pc = 0x167AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE0u;
        // 0x167ae4: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167AE8u;
        goto label_167ae8;
    }
    ctx->pc = 0x167AE0u;
    {
        const bool branch_taken_0x167ae0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x167AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167AE0u;
        // 0x167ae4: 0x2694000c  addiu       $s4, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ae0) {
            ctx->pc = 0x1677F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1677f8;
        }
    }
    ctx->pc = 0x167AE8u;
label_167ae8:
    // 0x167ae8: 0x3c0140d6  lui         $at, 0x40D6
    ctx->pc = 0x167ae8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16598 << 16));
label_167aec:
    // 0x167aec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x167aecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_167af0:
    // 0x167af0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x167af0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_167af4:
    // 0x167af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167af8:
    // 0x167af8: 0x3c01404a  lui         $at, 0x404A
    ctx->pc = 0x167af8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16458 << 16));
label_167afc:
    // 0x167afc: 0x3421e148  ori         $at, $at, 0xE148
    ctx->pc = 0x167afcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)57672);
label_167b00:
    // 0x167b00: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x167b00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_167b04:
    // 0x167b04: 0x26630084  addiu       $v1, $s3, 0x84
    ctx->pc = 0x167b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_167b08:
    // 0x167b08: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x167b08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
label_167b0c:
    // 0x167b0c: 0x44814000  mtc1        $at, $f8
    ctx->pc = 0x167b0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[8], &bits, sizeof(bits)); }
label_167b10:
    // 0x167b10: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x167b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_167b14:
    // 0x167b14: 0x26e600d8  addiu       $a2, $s7, 0xD8
    ctx->pc = 0x167b14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 216));
label_167b18:
    // 0x167b18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x167b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_167b1c:
    // 0x167b1c: 0x5040001d  beql        $v0, $zero, . + 4 + (0x1D << 2)
label_167b20:
    if (ctx->pc == 0x167B20u) {
        ctx->pc = 0x167B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B1Cu;
        // 0x167b20: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B24u;
        goto label_167b24;
    }
    ctx->pc = 0x167B1Cu;
    {
        const bool branch_taken_0x167b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167b1c) {
            ctx->pc = 0x167B20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167B1Cu;
            // 0x167b20: 0x24840024  addiu       $a0, $a0, 0x24 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167B94u;
            goto label_167b94;
        }
    }
    ctx->pc = 0x167B24u;
label_167b24:
    // 0x167b24: 0xc6600070  lwc1        $f0, 0x70($s3)
    ctx->pc = 0x167b24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b28:
    // 0x167b28: 0x460ad142  mul.s       $f5, $f26, $f10
    ctx->pc = 0x167b28u;
    ctx->f[5] = FPU_MUL_S(ctx->f[26], ctx->f[10]);
label_167b2c:
    // 0x167b2c: 0xc4620014  lwc1        $f2, 0x14($v1)
    ctx->pc = 0x167b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167b30:
    // 0x167b30: 0x4609d1c2  mul.s       $f7, $f26, $f9
    ctx->pc = 0x167b30u;
    ctx->f[7] = FPU_MUL_S(ctx->f[26], ctx->f[9]);
label_167b34:
    // 0x167b34: 0x4600d002  mul.s       $f0, $f26, $f0
    ctx->pc = 0x167b34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[26], ctx->f[0]);
label_167b38:
    // 0x167b38: 0xc4640018  lwc1        $f4, 0x18($v1)
    ctx->pc = 0x167b38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_167b3c:
    // 0x167b3c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x167b3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167b40:
    // 0x167b40: 0xc466001c  lwc1        $f6, 0x1C($v1)
    ctx->pc = 0x167b40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_167b44:
    // 0x167b44: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x167b44u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_167b48:
    // 0x167b48: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x167b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167b4c:
    // 0x167b4c: 0x461a0842  mul.s       $f1, $f1, $f26
    ctx->pc = 0x167b4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[26]);
label_167b50:
    // 0x167b50: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x167b50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_167b54:
    // 0x167b54: 0x46081034  c.lt.s      $f2, $f8
    ctx->pc = 0x167b54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[8])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167b58:
    // 0x167b58: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x167b58u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_167b5c:
    // 0x167b5c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x167b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b60:
    // 0x167b60: 0x46002942  mul.s       $f5, $f5, $f0
    ctx->pc = 0x167b60u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
label_167b64:
    // 0x167b64: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x167b64u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
label_167b68:
    // 0x167b68: 0xe4640018  swc1        $f4, 0x18($v1)
    ctx->pc = 0x167b68u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_167b6c:
    // 0x167b6c: 0xc6600074  lwc1        $f0, 0x74($s3)
    ctx->pc = 0x167b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167b70:
    // 0x167b70: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x167b70u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_167b74:
    // 0x167b74: 0x460039c2  mul.s       $f7, $f7, $f0
    ctx->pc = 0x167b74u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[0]);
label_167b78:
    // 0x167b78: 0x46073180  add.s       $f6, $f6, $f7
    ctx->pc = 0x167b78u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[7]);
label_167b7c:
    // 0x167b7c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_167b80:
    if (ctx->pc == 0x167B80u) {
        ctx->pc = 0x167B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B7Cu;
        // 0x167b80: 0xe466001c  swc1        $f6, 0x1C($v1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B84u;
        goto label_167b84;
    }
    ctx->pc = 0x167B7Cu;
    {
        const bool branch_taken_0x167b7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B7Cu;
        // 0x167b80: 0xe466001c  swc1        $f6, 0x1C($v1) (Delay Slot)
        { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b7c) {
            ctx->pc = 0x167B8Cu;
            goto label_167b8c;
        }
    }
    ctx->pc = 0x167B84u;
label_167b84:
    // 0x167b84: 0x10000002  b           . + 4 + (0x2 << 2)
label_167b88:
    if (ctx->pc == 0x167B88u) {
        ctx->pc = 0x167B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B84u;
        // 0x167b88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167B8Cu;
        goto label_167b8c;
    }
    ctx->pc = 0x167B84u;
    {
        const bool branch_taken_0x167b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B84u;
        // 0x167b88: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b84) {
            ctx->pc = 0x167B90u;
            goto label_167b90;
        }
    }
    ctx->pc = 0x167B8Cu;
label_167b8c:
    // 0x167b8c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x167b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_167b90:
    // 0x167b90: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x167b90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
label_167b94:
    // 0x167b94: 0x86102a  slt         $v0, $a0, $a2
    ctx->pc = 0x167b94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_167b98:
    // 0x167b98: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_167b9c:
    if (ctx->pc == 0x167B9Cu) {
        ctx->pc = 0x167B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B98u;
        // 0x167b9c: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BA0u;
        goto label_167ba0;
    }
    ctx->pc = 0x167B98u;
    {
        const bool branch_taken_0x167b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167B98u;
        // 0x167b9c: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167b98) {
            ctx->pc = 0x167B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167b18;
        }
    }
    ctx->pc = 0x167BA0u;
label_167ba0:
    // 0x167ba0: 0x18a00079  blez        $a1, . + 4 + (0x79 << 2)
label_167ba4:
    if (ctx->pc == 0x167BA4u) {
        ctx->pc = 0x167BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA0u;
        // 0x167ba4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BA8u;
        goto label_167ba8;
    }
    ctx->pc = 0x167BA0u;
    {
        const bool branch_taken_0x167ba0 = (GPR_S64(ctx, 5) <= 0);
        ctx->pc = 0x167BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BA0u;
        // 0x167ba4: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ba0) {
            ctx->pc = 0x167D88u;
            goto label_167d88;
        }
    }
    ctx->pc = 0x167BA8u;
label_167ba8:
    // 0x167ba8: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x167ba8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_167bac:
    // 0x167bac: 0x4481c800  mtc1        $at, $f25
    ctx->pc = 0x167bacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_167bb0:
    // 0x167bb0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x167bb0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167bb4:
    // 0x167bb4: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x167bb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_167bb8:
    // 0x167bb8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x167bb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_167bbc:
    // 0x167bbc: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x167bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_167bc0:
    // 0x167bc0: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x167bc0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_167bc4:
    // 0x167bc4: 0x0  nop
    ctx->pc = 0x167bc4u;
    // NOP
label_167bc8:
    // 0x167bc8: 0x2c29018  mult        $s2, $s6, $v0
    ctx->pc = 0x167bc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
label_167bcc:
    // 0x167bcc: 0x2f21821  addu        $v1, $s7, $s2
    ctx->pc = 0x167bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 18)));
label_167bd0:
    // 0x167bd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167bd4:
    // 0x167bd4: 0x10400068  beqz        $v0, . + 4 + (0x68 << 2)
label_167bd8:
    if (ctx->pc == 0x167BD8u) {
        ctx->pc = 0x167BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BD4u;
        // 0x167bd8: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BDCu;
        goto label_167bdc;
    }
    ctx->pc = 0x167BD4u;
    {
        const bool branch_taken_0x167bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x167BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BD4u;
        // 0x167bd8: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167bd4) {
            ctx->pc = 0x167D78u;
            goto label_167d78;
        }
    }
    ctx->pc = 0x167BDCu;
label_167bdc:
    // 0x167bdc: 0x26700084  addiu       $s0, $s3, 0x84
    ctx->pc = 0x167bdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_167be0:
    // 0x167be0: 0xc455008c  lwc1        $f21, 0x8C($v0)
    ctx->pc = 0x167be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_167be4:
    // 0x167be4: 0x4680ad60  cvt.s.w     $f21, $f21
    ctx->pc = 0x167be4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[21], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
label_167be8:
    // 0x167be8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167be8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167bec:
    // 0x167bec: 0xc46c009c  lwc1        $f12, 0x9C($v1)
    ctx->pc = 0x167becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167bf0:
    // 0x167bf0: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x167bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_167bf4:
    // 0x167bf4: 0xc09b164  jal         func_26C590
label_167bf8:
    if (ctx->pc == 0x167BF8u) {
        ctx->pc = 0x167BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167BF4u;
        // 0x167bf8: 0x4619ad42  mul.s       $f21, $f21, $f25 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167BFCu;
        goto label_167bfc;
    }
    ctx->pc = 0x167BF4u;
    SET_GPR_U32(ctx, 31, 0x167BFCu);
    ctx->pc = 0x167BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167BF4u;
    // 0x167bf8: 0x4619ad42  mul.s       $f21, $f21, $f25 (Delay Slot)
    ctx->f[21] = FPU_MUL_S(ctx->f[21], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x167BF4u, 0x167BFCu)) {
        return;
    }
    ctx->pc = 0x167BFCu;
label_167bfc:
    // 0x167bfc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x167bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_167c00:
    // 0x167c00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x167c00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_167c04:
    // 0x167c04: 0xc44c00a0  lwc1        $f12, 0xA0($v0)
    ctx->pc = 0x167c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167c08:
    // 0x167c08: 0xc09b164  jal         func_26C590
label_167c0c:
    if (ctx->pc == 0x167C0Cu) {
        ctx->pc = 0x167C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167C08u;
        // 0x167c0c: 0x4619ad80  add.s       $f22, $f21, $f25 (Delay Slot)
        ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167C10u;
        goto label_167c10;
    }
    ctx->pc = 0x167C08u;
    SET_GPR_U32(ctx, 31, 0x167C10u);
    ctx->pc = 0x167C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167C08u;
    // 0x167c0c: 0x4619ad80  add.s       $f22, $f21, $f25 (Delay Slot)
    ctx->f[22] = FPU_ADD_S(ctx->f[21], ctx->f[25]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x167C08u, 0x167C10u)) {
        return;
    }
    ctx->pc = 0x167C10u;
label_167c10:
    // 0x167c10: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x167c10u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_167c14:
    // 0x167c14: 0xc661006c  lwc1        $f1, 0x6C($s3)
    ctx->pc = 0x167c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167c18:
    // 0x167c18: 0xc6620068  lwc1        $f2, 0x68($s3)
    ctx->pc = 0x167c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_167c1c:
    // 0x167c1c: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x167c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_167c20:
    // 0x167c20: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x167c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_167c24:
    // 0x167c24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x167c24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167c28:
    // 0x167c28: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167c28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167c2c:
    // 0x167c2c: 0x4601a502  mul.s       $f20, $f20, $f1
    ctx->pc = 0x167c2cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_167c30:
    // 0x167c30: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x167c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_167c34:
    // 0x167c34: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x167c34u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_167c38:
    // 0x167c38: 0xc7a70eb0  lwc1        $f7, 0xEB0($sp)
    ctx->pc = 0x167c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_167c3c:
    // 0x167c3c: 0xc4410098  lwc1        $f1, 0x98($v0)
    ctx->pc = 0x167c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_167c40:
    // 0x167c40: 0xc4650094  lwc1        $f5, 0x94($v1)
    ctx->pc = 0x167c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_167c44:
    // 0x167c44: 0x461418c0  add.s       $f3, $f3, $f20
    ctx->pc = 0x167c44u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[20]);
label_167c48:
    // 0x167c48: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x167c48u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_167c4c:
    // 0x167c4c: 0x8c430090  lw          $v1, 0x90($v0)
    ctx->pc = 0x167c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_167c50:
    // 0x167c50: 0x46050940  add.s       $f5, $f1, $f5
    ctx->pc = 0x167c50u;
    ctx->f[5] = FPU_ADD_S(ctx->f[1], ctx->f[5]);
label_167c54:
    // 0x167c54: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x167c54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_167c58:
    // 0x167c58: 0x46180842  mul.s       $f1, $f1, $f24
    ctx->pc = 0x167c58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_167c5c:
    // 0x167c5c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x167c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_167c60:
    // 0x167c60: 0x46021981  sub.s       $f6, $f3, $f2
    ctx->pc = 0x167c60u;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_167c64:
    // 0x167c64: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_167c68:
    // 0x167c68: 0x46182942  mul.s       $f5, $f5, $f24
    ctx->pc = 0x167c68u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[24]);
label_167c6c:
    // 0x167c6c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x167c6cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
label_167c70:
    // 0x167c70: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167c70u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167c74:
    // 0x167c74: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167c74u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167c78:
    // 0x167c78: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x167c78u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167c7c:
    // 0x167c7c: 0xe6350010  swc1        $f21, 0x10($s1)
    ctx->pc = 0x167c7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167c80:
    // 0x167c80: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x167c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167c84:
    // 0x167c84: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167c84u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167c88:
    // 0x167c88: 0x0  nop
    ctx->pc = 0x167c88u;
    // NOP
label_167c8c:
    // 0x167c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167c90:
    // 0x167c90: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x167c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
label_167c94:
    // 0x167c94: 0x24423fe0  addiu       $v0, $v0, 0x3FE0
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16352));
label_167c98:
    // 0x167c98: 0xc4440000  lwc1        $f4, 0x0($v0)
    ctx->pc = 0x167c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_167c9c:
    // 0x167c9c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x167c9cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_167ca0:
    // 0x167ca0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167ca4:
    // 0x167ca4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167ca8:
    // 0x167ca8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167ca8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167cac:
    // 0x167cac: 0xe624002c  swc1        $f4, 0x2C($s1)
    ctx->pc = 0x167cacu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167cb0:
    // 0x167cb0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167cb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167cb4:
    // 0x167cb4: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x167cb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_167cb8:
    // 0x167cb8: 0xe6360010  swc1        $f22, 0x10($s1)
    ctx->pc = 0x167cb8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167cbc:
    // 0x167cbc: 0xe6210014  swc1        $f1, 0x14($s1)
    ctx->pc = 0x167cbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167cc0:
    // 0x167cc0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x167cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_167cc4:
    // 0x167cc4: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x167cc4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167cc8:
    // 0x167cc8: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167cc8u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167ccc:
    // 0x167ccc: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167cccu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167cd0:
    // 0x167cd0: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167cd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167cd4:
    // 0x167cd4: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167cd8:
    // 0x167cd8: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167cdc:
    // 0x167cdc: 0xe624002c  swc1        $f4, 0x2C($s1)
    ctx->pc = 0x167cdcu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167ce0:
    // 0x167ce0: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167ce0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167ce4:
    // 0x167ce4: 0xe6260000  swc1        $f6, 0x0($s1)
    ctx->pc = 0x167ce4u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167ce8:
    // 0x167ce8: 0xe6350010  swc1        $f21, 0x10($s1)
    ctx->pc = 0x167ce8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167cec:
    // 0x167cec: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x167cecu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_167cf0:
    // 0x167cf0: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167cf0u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167cf4:
    // 0x167cf4: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167cf4u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167cf8:
    // 0x167cf8: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x167cf8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167cfc:
    // 0x167cfc: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167cfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167d00:
    // 0x167d00: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167d04:
    // 0x167d04: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167d04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167d08:
    // 0x167d08: 0xe624002c  swc1        $f4, 0x2C($s1)
    ctx->pc = 0x167d08u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167d0c:
    // 0x167d0c: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167d0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167d10:
    // 0x167d10: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_167d14:
    // 0x167d14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167d14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167d18:
    // 0x167d18: 0xe6230000  swc1        $f3, 0x0($s1)
    ctx->pc = 0x167d18u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_167d1c:
    // 0x167d1c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x167d1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_167d20:
    // 0x167d20: 0xe6250014  swc1        $f5, 0x14($s1)
    ctx->pc = 0x167d20u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 20), bits); }
label_167d24:
    // 0x167d24: 0xe6370004  swc1        $f23, 0x4($s1)
    ctx->pc = 0x167d24u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
label_167d28:
    // 0x167d28: 0xe63c0008  swc1        $f28, 0x8($s1)
    ctx->pc = 0x167d28u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
label_167d2c:
    // 0x167d2c: 0xe63b0018  swc1        $f27, 0x18($s1)
    ctx->pc = 0x167d2cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 24), bits); }
label_167d30:
    // 0x167d30: 0xe6200020  swc1        $f0, 0x20($s1)
    ctx->pc = 0x167d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 32), bits); }
label_167d34:
    // 0x167d34: 0xe6200028  swc1        $f0, 0x28($s1)
    ctx->pc = 0x167d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 40), bits); }
label_167d38:
    // 0x167d38: 0xe624002c  swc1        $f4, 0x2C($s1)
    ctx->pc = 0x167d38u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 44), bits); }
label_167d3c:
    // 0x167d3c: 0xe6200024  swc1        $f0, 0x24($s1)
    ctx->pc = 0x167d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 36), bits); }
label_167d40:
    // 0x167d40: 0x26310040  addiu       $s1, $s1, 0x40
    ctx->pc = 0x167d40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_167d44:
    // 0x167d44: 0x26a40003  addiu       $a0, $s5, 0x3
    ctx->pc = 0x167d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 3));
label_167d48:
    // 0x167d48: 0x26a20001  addiu       $v0, $s5, 0x1
    ctx->pc = 0x167d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_167d4c:
    // 0x167d4c: 0x26a30002  addiu       $v1, $s5, 0x2
    ctx->pc = 0x167d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_167d50:
    // 0x167d50: 0xa6950000  sh          $s5, 0x0($s4)
    ctx->pc = 0x167d50u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 21));
label_167d54:
    // 0x167d54: 0xa6950006  sh          $s5, 0x6($s4)
    ctx->pc = 0x167d54u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 6), (uint16_t)GPR_U32(ctx, 21));
label_167d58:
    // 0x167d58: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_167d5c:
    // 0x167d5c: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x167d5cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_167d60:
    // 0x167d60: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x167d60u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_167d64:
    // 0x167d64: 0xa6840008  sh          $a0, 0x8($s4)
    ctx->pc = 0x167d64u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 8), (uint16_t)GPR_U32(ctx, 4));
label_167d68:
    // 0x167d68: 0xa683000a  sh          $v1, 0xA($s4)
    ctx->pc = 0x167d68u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 10), (uint16_t)GPR_U32(ctx, 3));
label_167d6c:
    // 0x167d6c: 0xa6840004  sh          $a0, 0x4($s4)
    ctx->pc = 0x167d6cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 4), (uint16_t)GPR_U32(ctx, 4));
label_167d70:
    // 0x167d70: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
label_167d74:
    // 0x167d74: 0x0  nop
    ctx->pc = 0x167d74u;
    // NOP
label_167d78:
    // 0x167d78: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x167d78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_167d7c:
    // 0x167d7c: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x167d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_167d80:
    // 0x167d80: 0x1440ff91  bnez        $v0, . + 4 + (-0x6F << 2)
label_167d84:
    if (ctx->pc == 0x167D84u) {
        ctx->pc = 0x167D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D80u;
        // 0x167d84: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D88u;
        goto label_167d88;
    }
    ctx->pc = 0x167D80u;
    {
        const bool branch_taken_0x167d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D80u;
        // 0x167d84: 0x24020024  addiu       $v0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d80) {
            ctx->pc = 0x167BC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167bc8;
        }
    }
    ctx->pc = 0x167D88u;
label_167d88:
    // 0x167d88: 0x13c0003d  beqz        $fp, . + 4 + (0x3D << 2)
label_167d8c:
    if (ctx->pc == 0x167D8Cu) {
        ctx->pc = 0x167D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D88u;
        // 0x167d8c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167D90u;
        goto label_167d90;
    }
    ctx->pc = 0x167D88u;
    {
        const bool branch_taken_0x167d88 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x167D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D88u;
        // 0x167d8c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167d88) {
            ctx->pc = 0x167E80u;
            goto label_167e80;
        }
    }
    ctx->pc = 0x167D90u;
label_167d90:
    // 0x167d90: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_167d94:
    // 0x167d94: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x167d94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_167d98:
    // 0x167d98: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167d9c:
    // 0x167d9c: 0x40f809  jalr        $v0
label_167da0:
    if (ctx->pc == 0x167DA0u) {
        ctx->pc = 0x167DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D9Cu;
        // 0x167da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DA4u;
        goto label_167da4;
    }
    ctx->pc = 0x167D9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DA4u);
        ctx->pc = 0x167DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167D9Cu;
        // 0x167da0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D9Cu, 0x167DA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DA4u;
label_167da4:
    // 0x167da4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167da8:
    // 0x167da8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x167da8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_167dac:
    // 0x167dac: 0x40f809  jalr        $v0
label_167db0:
    if (ctx->pc == 0x167DB0u) {
        ctx->pc = 0x167DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DACu;
        // 0x167db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DB4u;
        goto label_167db4;
    }
    ctx->pc = 0x167DACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DB4u);
        ctx->pc = 0x167DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DACu;
        // 0x167db0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DACu, 0x167DB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DB4u;
label_167db4:
    // 0x167db4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167db8:
    // 0x167db8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_167dbc:
    // 0x167dbc: 0x40f809  jalr        $v0
label_167dc0:
    if (ctx->pc == 0x167DC0u) {
        ctx->pc = 0x167DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DBCu;
        // 0x167dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DC4u;
        goto label_167dc4;
    }
    ctx->pc = 0x167DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DC4u);
        ctx->pc = 0x167DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DBCu;
        // 0x167dc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DBCu, 0x167DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DC4u;
label_167dc4:
    // 0x167dc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167dc8:
    // 0x167dc8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_167dcc:
    // 0x167dcc: 0x40f809  jalr        $v0
label_167dd0:
    if (ctx->pc == 0x167DD0u) {
        ctx->pc = 0x167DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DCCu;
        // 0x167dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DD4u;
        goto label_167dd4;
    }
    ctx->pc = 0x167DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DD4u);
        ctx->pc = 0x167DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DCCu;
        // 0x167dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DCCu, 0x167DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DD4u;
label_167dd4:
    // 0x167dd4: 0x8e650048  lw          $a1, 0x48($s3)
    ctx->pc = 0x167dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_167dd8:
    // 0x167dd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167ddc:
    // 0x167ddc: 0x40f809  jalr        $v0
label_167de0:
    if (ctx->pc == 0x167DE0u) {
        ctx->pc = 0x167DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DDCu;
        // 0x167de0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DE4u;
        goto label_167de4;
    }
    ctx->pc = 0x167DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DE4u);
        ctx->pc = 0x167DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DDCu;
        // 0x167de0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DDCu, 0x167DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DE4u;
label_167de4:
    // 0x167de4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167de8:
    // 0x167de8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x167de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_167dec:
    // 0x167dec: 0x40f809  jalr        $v0
label_167df0:
    if (ctx->pc == 0x167DF0u) {
        ctx->pc = 0x167DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DECu;
        // 0x167df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167DF4u;
        goto label_167df4;
    }
    ctx->pc = 0x167DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167DF4u);
        ctx->pc = 0x167DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DECu;
        // 0x167df0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DECu, 0x167DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167DF4u;
label_167df4:
    // 0x167df4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167df8:
    // 0x167df8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x167df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_167dfc:
    // 0x167dfc: 0x40f809  jalr        $v0
label_167e00:
    if (ctx->pc == 0x167E00u) {
        ctx->pc = 0x167E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DFCu;
        // 0x167e00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E04u;
        goto label_167e04;
    }
    ctx->pc = 0x167DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E04u);
        ctx->pc = 0x167E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167DFCu;
        // 0x167e00: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167DFCu, 0x167E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E04u;
label_167e04:
    // 0x167e04: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167e08:
    // 0x167e08: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x167e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_167e0c:
    // 0x167e0c: 0x40f809  jalr        $v0
label_167e10:
    if (ctx->pc == 0x167E10u) {
        ctx->pc = 0x167E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E0Cu;
        // 0x167e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E14u;
        goto label_167e14;
    }
    ctx->pc = 0x167E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E14u);
        ctx->pc = 0x167E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E0Cu;
        // 0x167e10: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E0Cu, 0x167E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E14u;
label_167e14:
    // 0x167e14: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167e18:
    // 0x167e18: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x167e18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_167e1c:
    // 0x167e1c: 0x40f809  jalr        $v0
label_167e20:
    if (ctx->pc == 0x167E20u) {
        ctx->pc = 0x167E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E1Cu;
        // 0x167e20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E24u;
        goto label_167e24;
    }
    ctx->pc = 0x167E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E24u);
        ctx->pc = 0x167E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E1Cu;
        // 0x167e20: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E1Cu, 0x167E24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E24u;
label_167e24:
    // 0x167e24: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167e28:
    // 0x167e28: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x167e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_167e2c:
    // 0x167e2c: 0x40f809  jalr        $v0
label_167e30:
    if (ctx->pc == 0x167E30u) {
        ctx->pc = 0x167E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E2Cu;
        // 0x167e30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E34u;
        goto label_167e34;
    }
    ctx->pc = 0x167E2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E34u);
        ctx->pc = 0x167E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E2Cu;
        // 0x167e30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E2Cu, 0x167E34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E34u;
label_167e34:
    // 0x167e34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x167e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167e38:
    // 0x167e38: 0xc08c4aa  jal         func_2312A8
label_167e3c:
    if (ctx->pc == 0x167E3Cu) {
        ctx->pc = 0x167E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E38u;
        // 0x167e3c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E40u;
        goto label_167e40;
    }
    ctx->pc = 0x167E38u;
    SET_GPR_U32(ctx, 31, 0x167E40u);
    ctx->pc = 0x167E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E38u;
    // 0x167e3c: 0x24050042  addiu       $a1, $zero, 0x42 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x167E38u, 0x167E40u)) {
        return;
    }
    ctx->pc = 0x167E40u;
label_167e40:
    // 0x167e40: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x167e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_167e44:
    // 0x167e44: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x167e44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_167e48:
    // 0x167e48: 0x40f809  jalr        $v0
label_167e4c:
    if (ctx->pc == 0x167E4Cu) {
        ctx->pc = 0x167E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E48u;
        // 0x167e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E50u;
        goto label_167e50;
    }
    ctx->pc = 0x167E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E50u);
        ctx->pc = 0x167E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E48u;
        // 0x167e4c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E48u, 0x167E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E50u;
label_167e50:
    // 0x167e50: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x167e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_167e54:
    // 0x167e54: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x167e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_167e58:
    // 0x167e58: 0x3c80018  mult        $zero, $fp, $t0
    ctx->pc = 0x167e58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_167e5c:
    // 0x167e5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x167e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167e60:
    // 0x167e60: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x167e60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_167e64:
    // 0x167e64: 0x27a70e00  addiu       $a3, $sp, 0xE00
    ctx->pc = 0x167e64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 3584));
label_167e68:
    // 0x167e68: 0x4012  mflo        $t0
    ctx->pc = 0x167e68u;
    SET_GPR_U64(ctx, 8, ctx->lo);
label_167e6c:
    // 0x167e6c: 0x40f809  jalr        $v0
label_167e70:
    if (ctx->pc == 0x167E70u) {
        ctx->pc = 0x167E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E6Cu;
        // 0x167e70: 0x1e3080  sll         $a2, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E74u;
        goto label_167e74;
    }
    ctx->pc = 0x167E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x167E74u);
        ctx->pc = 0x167E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E6Cu;
        // 0x167e70: 0x1e3080  sll         $a2, $fp, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E6Cu, 0x167E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167E74u;
label_167e74:
    // 0x167e74: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x167e74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167e78:
    // 0x167e78: 0xc08c4aa  jal         func_2312A8
label_167e7c:
    if (ctx->pc == 0x167E7Cu) {
        ctx->pc = 0x167E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E78u;
        // 0x167e7c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167E80u;
        goto label_167e80;
    }
    ctx->pc = 0x167E78u;
    SET_GPR_U32(ctx, 31, 0x167E80u);
    ctx->pc = 0x167E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167E78u;
    // 0x167e7c: 0x24050044  addiu       $a1, $zero, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2312A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2312A8u, 0x167E78u, 0x167E80u)) {
        return;
    }
    ctx->pc = 0x167E80u;
label_167e80:
    // 0x167e80: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x167e80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167e84:
    // 0x167e84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x167e84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_167e88:
    // 0x167e88: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x167e88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167e8c:
    // 0x167e8c: 0x0  nop
    ctx->pc = 0x167e8cu;
    // NOP
label_167e90:
    // 0x167e90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x167e90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_167e94:
    // 0x167e94: 0x0  nop
    ctx->pc = 0x167e94u;
    // NOP
label_167e98:
    // 0x167e98: 0x4500009d  bc1f        . + 4 + (0x9D << 2)
label_167e9c:
    if (ctx->pc == 0x167E9Cu) {
        ctx->pc = 0x167E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E98u;
        // 0x167e9c: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EA0u;
        goto label_167ea0;
    }
    ctx->pc = 0x167E98u;
    {
        const bool branch_taken_0x167e98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x167E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167E98u;
        // 0x167e9c: 0x24120024  addiu       $s2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167e98) {
            ctx->pc = 0x168110u;
            goto label_168110;
        }
    }
    ctx->pc = 0x167EA0u;
label_167ea0:
    // 0x167ea0: 0x3c013cc9  lui         $at, 0x3CC9
    ctx->pc = 0x167ea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15561 << 16));
label_167ea4:
    // 0x167ea4: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x167ea4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_167ea8:
    // 0x167ea8: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x167ea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_167eac:
    // 0x167eac: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x167eacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_167eb0:
    // 0x167eb0: 0x24150003  addiu       $s5, $zero, 0x3
    ctx->pc = 0x167eb0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_167eb4:
    // 0x167eb4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x167eb4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_167eb8:
    // 0x167eb8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x167eb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_167ebc:
    // 0x167ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x167ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167ec0:
    // 0x167ec0: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x167ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_167ec4:
    // 0x167ec4: 0xe660007c  swc1        $f0, 0x7C($s3)
    ctx->pc = 0x167ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 124), bits); }
label_167ec8:
    // 0x167ec8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x167ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_167ecc:
    // 0x167ecc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_167ed0:
    if (ctx->pc == 0x167ED0u) {
        ctx->pc = 0x167ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167ECCu;
        // 0x167ed0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167ED4u;
        goto label_167ed4;
    }
    ctx->pc = 0x167ECCu;
    {
        const bool branch_taken_0x167ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167ecc) {
            ctx->pc = 0x167ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167ECCu;
            // 0x167ed0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x167EE4u;
            goto label_167ee4;
        }
    }
    ctx->pc = 0x167ED4u;
label_167ed4:
    // 0x167ed4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167ed4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_167ed8:
    // 0x167ed8: 0x268300d8  addiu       $v1, $s4, 0xD8
    ctx->pc = 0x167ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 216));
label_167edc:
    // 0x167edc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x167edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_167ee0:
    // 0x167ee0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_167ee4:
    // 0x167ee4: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x167ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_167ee8:
    // 0x167ee8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_167eec:
    if (ctx->pc == 0x167EECu) {
        ctx->pc = 0x167EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EE8u;
        // 0x167eec: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EF0u;
        goto label_167ef0;
    }
    ctx->pc = 0x167EE8u;
    {
        const bool branch_taken_0x167ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EE8u;
        // 0x167eec: 0x24630024  addiu       $v1, $v1, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ee8) {
            ctx->pc = 0x167EC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167ec8;
        }
    }
    ctx->pc = 0x167EF0u;
label_167ef0:
    // 0x167ef0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x167ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_167ef4:
    // 0x167ef4: 0x1222007e  beq         $s1, $v0, . + 4 + (0x7E << 2)
label_167ef8:
    if (ctx->pc == 0x167EF8u) {
        ctx->pc = 0x167EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EF4u;
        // 0x167ef8: 0x2328018  mult        $s0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167EFCu;
        goto label_167efc;
    }
    ctx->pc = 0x167EF4u;
    {
        const bool branch_taken_0x167ef4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x167EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167EF4u;
        // 0x167ef8: 0x2328018  mult        $s0, $s1, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ef4) {
            ctx->pc = 0x1680F0u;
            goto label_1680f0;
        }
    }
    ctx->pc = 0x167EFCu;
label_167efc:
    // 0x167efc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x167efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167f00:
    // 0x167f00: 0x2f01021  addu        $v0, $s7, $s0
    ctx->pc = 0x167f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_167f04:
    // 0x167f04: 0xc0a074a  jal         func_281D28
label_167f08:
    if (ctx->pc == 0x167F08u) {
        ctx->pc = 0x167F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F04u;
        // 0x167f08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F0Cu;
        goto label_167f0c;
    }
    ctx->pc = 0x167F04u;
    SET_GPR_U32(ctx, 31, 0x167F0Cu);
    ctx->pc = 0x167F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F04u;
    // 0x167f08: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167F04u, 0x167F0Cu)) {
        return;
    }
    ctx->pc = 0x167F0Cu;
label_167f0c:
    // 0x167f0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f10:
    // 0x167f10: 0x26620084  addiu       $v0, $s3, 0x84
    ctx->pc = 0x167f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 132));
label_167f14:
    // 0x167f14: 0x308301ff  andi        $v1, $a0, 0x1FF
    ctx->pc = 0x167f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_167f18:
    // 0x167f18: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_167f1c:
    if (ctx->pc == 0x167F1Cu) {
        ctx->pc = 0x167F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F18u;
        // 0x167f1c: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F20u;
        goto label_167f20;
    }
    ctx->pc = 0x167F18u;
    {
        const bool branch_taken_0x167f18 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x167F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F18u;
        // 0x167f1c: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167f18) {
            ctx->pc = 0x167F34u;
            goto label_167f34;
        }
    }
    ctx->pc = 0x167F20u;
label_167f20:
    // 0x167f20: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167f20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167f24:
    // 0x167f24: 0x0  nop
    ctx->pc = 0x167f24u;
    // NOP
label_167f28:
    // 0x167f28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167f28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167f2c:
    // 0x167f2c: 0x10000008  b           . + 4 + (0x8 << 2)
label_167f30:
    if (ctx->pc == 0x167F30u) {
        ctx->pc = 0x167F34u;
        goto label_167f34;
    }
    ctx->pc = 0x167F2Cu;
    {
        const bool branch_taken_0x167f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f2c) {
            ctx->pc = 0x167F50u;
            goto label_167f50;
        }
    }
    ctx->pc = 0x167F34u;
label_167f34:
    // 0x167f34: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x167f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_167f38:
    // 0x167f38: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x167f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_167f3c:
    // 0x167f3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167f3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167f40:
    // 0x167f40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167f40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167f44:
    // 0x167f44: 0x0  nop
    ctx->pc = 0x167f44u;
    // NOP
label_167f48:
    // 0x167f48: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167f48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167f4c:
    // 0x167f4c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x167f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_167f50:
    // 0x167f50: 0xc0a074a  jal         func_281D28
label_167f54:
    if (ctx->pc == 0x167F54u) {
        ctx->pc = 0x167F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F50u;
        // 0x167f54: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F58u;
        goto label_167f58;
    }
    ctx->pc = 0x167F50u;
    SET_GPR_U32(ctx, 31, 0x167F58u);
    ctx->pc = 0x167F54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F50u;
    // 0x167f54: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167F50u, 0x167F58u)) {
        return;
    }
    ctx->pc = 0x167F58u;
label_167f58:
    // 0x167f58: 0x55001b  divu        $zero, $v0, $s5
    ctx->pc = 0x167f58u;
    { uint32_t divisor = GPR_U32(ctx, 21); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_167f5c:
    // 0x167f5c: 0x52a00001  beql        $s5, $zero, . + 4 + (0x1 << 2)
label_167f60:
    if (ctx->pc == 0x167F60u) {
        ctx->pc = 0x167F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F5Cu;
        // 0x167f60: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F64u;
        goto label_167f64;
    }
    ctx->pc = 0x167F5Cu;
    {
        const bool branch_taken_0x167f5c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f5c) {
            ctx->pc = 0x167F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x167F5Cu;
            // 0x167f60: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167F64u;
            goto label_167f64;
        }
    }
    ctx->pc = 0x167F64u;
label_167f64:
    // 0x167f64: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x167f64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_167f68:
    // 0x167f68: 0x2810  mfhi        $a1
    ctx->pc = 0x167f68u;
    SET_GPR_U64(ctx, 5, ctx->hi);
label_167f6c:
    // 0x167f6c: 0x2328018  mult        $s0, $s1, $s2
    ctx->pc = 0x167f6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_167f70:
    // 0x167f70: 0x2701021  addu        $v0, $s3, $s0
    ctx->pc = 0x167f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_167f74:
    // 0x167f74: 0xac45008c  sw          $a1, 0x8C($v0)
    ctx->pc = 0x167f74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 5));
label_167f78:
    // 0x167f78: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x167f78u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f7c:
    // 0x167f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f80:
    // 0x167f80: 0xc6600064  lwc1        $f0, 0x64($s3)
    ctx->pc = 0x167f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167f84:
    // 0x167f84: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x167f84u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_167f88:
    // 0x167f88: 0xe4600094  swc1        $f0, 0x94($v1)
    ctx->pc = 0x167f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 148), bits); }
label_167f8c:
    // 0x167f8c: 0xc0a074a  jal         func_281D28
label_167f90:
    if (ctx->pc == 0x167F90u) {
        ctx->pc = 0x167F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167F8Cu;
        // 0x167f90: 0xe4810098  swc1        $f1, 0x98($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167F94u;
        goto label_167f94;
    }
    ctx->pc = 0x167F8Cu;
    SET_GPR_U32(ctx, 31, 0x167F94u);
    ctx->pc = 0x167F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167F8Cu;
    // 0x167f90: 0xe4810098  swc1        $f1, 0x98($a0) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 152), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167F8Cu, 0x167F94u)) {
        return;
    }
    ctx->pc = 0x167F94u;
label_167f94:
    // 0x167f94: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f98:
    // 0x167f98: 0x2662009c  addiu       $v0, $s3, 0x9C
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
label_167f9c:
    // 0x167f9c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x167f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_167fa0:
    // 0x167fa0: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
label_167fa4:
    if (ctx->pc == 0x167FA4u) {
        ctx->pc = 0x167FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FA0u;
        // 0x167fa4: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FA8u;
        goto label_167fa8;
    }
    ctx->pc = 0x167FA0u;
    {
        const bool branch_taken_0x167fa0 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x167FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FA0u;
        // 0x167fa4: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fa0) {
            ctx->pc = 0x167FBCu;
            goto label_167fbc;
        }
    }
    ctx->pc = 0x167FA8u;
label_167fa8:
    // 0x167fa8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x167fa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167fac:
    // 0x167fac: 0x0  nop
    ctx->pc = 0x167facu;
    // NOP
label_167fb0:
    // 0x167fb0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167fb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167fb4:
    // 0x167fb4: 0x10000009  b           . + 4 + (0x9 << 2)
label_167fb8:
    if (ctx->pc == 0x167FB8u) {
        ctx->pc = 0x167FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FB4u;
        // 0x167fb8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FBCu;
        goto label_167fbc;
    }
    ctx->pc = 0x167FB4u;
    {
        const bool branch_taken_0x167fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x167FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FB4u;
        // 0x167fb8: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x167fb4) {
            ctx->pc = 0x167FDCu;
            goto label_167fdc;
        }
    }
    ctx->pc = 0x167FBCu;
label_167fbc:
    // 0x167fbc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x167fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_167fc0:
    // 0x167fc0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x167fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_167fc4:
    // 0x167fc4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x167fc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_167fc8:
    // 0x167fc8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x167fc8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_167fcc:
    // 0x167fcc: 0x0  nop
    ctx->pc = 0x167fccu;
    // NOP
label_167fd0:
    // 0x167fd0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x167fd0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_167fd4:
    // 0x167fd4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x167fd4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_167fd8:
    // 0x167fd8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x167fd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_167fdc:
    // 0x167fdc: 0xc0a074a  jal         func_281D28
label_167fe0:
    if (ctx->pc == 0x167FE0u) {
        ctx->pc = 0x167FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FDCu;
        // 0x167fe0: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FE4u;
        goto label_167fe4;
    }
    ctx->pc = 0x167FDCu;
    SET_GPR_U32(ctx, 31, 0x167FE4u);
    ctx->pc = 0x167FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x167FDCu;
    // 0x167fe0: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x167FDCu, 0x167FE4u)) {
        return;
    }
    ctx->pc = 0x167FE4u;
label_167fe4:
    // 0x167fe4: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x167fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_167fe8:
    // 0x167fe8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167fec:
    // 0x167fec: 0x266200a0  addiu       $v0, $s3, 0xA0
    ctx->pc = 0x167fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 160));
label_167ff0:
    // 0x167ff0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x167ff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_167ff4:
    // 0x167ff4: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_167ff8:
    if (ctx->pc == 0x167FF8u) {
        ctx->pc = 0x167FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FF4u;
        // 0x167ff8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x167FFCu;
        goto label_167ffc;
    }
    ctx->pc = 0x167FF4u;
    {
        const bool branch_taken_0x167ff4 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x167FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x167FF4u;
        // 0x167ff8: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167ff4) {
            ctx->pc = 0x168010u;
            goto label_168010;
        }
    }
    ctx->pc = 0x167FFCu;
label_167ffc:
    // 0x167ffc: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x167ffcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168000:
    // 0x168000: 0x0  nop
    ctx->pc = 0x168000u;
    // NOP
label_168004:
    // 0x168004: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168004u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_168008:
    // 0x168008: 0x10000009  b           . + 4 + (0x9 << 2)
label_16800c:
    if (ctx->pc == 0x16800Cu) {
        ctx->pc = 0x16800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168008u;
        // 0x16800c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168010u;
        goto label_168010;
    }
    ctx->pc = 0x168008u;
    {
        const bool branch_taken_0x168008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16800Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168008u;
        // 0x16800c: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x168008) {
            ctx->pc = 0x168030u;
            goto label_168030;
        }
    }
    ctx->pc = 0x168010u;
label_168010:
    // 0x168010: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x168010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_168014:
    // 0x168014: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x168014u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_168018:
    // 0x168018: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x168018u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_16801c:
    // 0x16801c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16801cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_168020:
    // 0x168020: 0x0  nop
    ctx->pc = 0x168020u;
    // NOP
label_168024:
    // 0x168024: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x168024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_168028:
    // 0x168028: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x168028u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_16802c:
    // 0x16802c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x16802cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_168030:
    // 0x168030: 0xc0a074a  jal         func_281D28
label_168034:
    if (ctx->pc == 0x168034u) {
        ctx->pc = 0x168034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168030u;
        // 0x168034: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x168038u;
        goto label_168038;
    }
    ctx->pc = 0x168030u;
    SET_GPR_U32(ctx, 31, 0x168038u);
    ctx->pc = 0x168034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x168030u;
    // 0x168034: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x168030u, 0x168038u)) {
        return;
    }
    ctx->pc = 0x168038u;
label_168038:
    // 0x168038: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x168038u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_16803c:
    // 0x16803c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16803cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_168040:
    // 0x168040: 0x26620088  addiu       $v0, $s3, 0x88
    ctx->pc = 0x168040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
label_168044:
    // 0x168044: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x168044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_168048:
    // 0x168048: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_16804c:
    if (ctx->pc == 0x16804Cu) {
        ctx->pc = 0x16804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168048u;
        // 0x16804c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168050u;
        goto label_168050;
    }
    ctx->pc = 0x168048u;
    {
        const bool branch_taken_0x168048 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x16804Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168048u;
        // 0x16804c: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x168048) {
            ctx->pc = 0x168064u;
            goto label_168064;
        }
    }
    ctx->pc = 0x168050u;
label_168050:
    // 0x168050: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x168050u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168054:
    // 0x168054: 0x0  nop
    ctx->pc = 0x168054u;
    // NOP
label_168058:
    // 0x168058: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168058u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16805c:
    // 0x16805c: 0x10000008  b           . + 4 + (0x8 << 2)
label_168060:
    if (ctx->pc == 0x168060u) {
        ctx->pc = 0x168064u;
        goto label_168064;
    }
    ctx->pc = 0x16805Cu;
    {
        const bool branch_taken_0x16805c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16805c) {
            ctx->pc = 0x168080u;
            goto label_168080;
        }
    }
    ctx->pc = 0x168064u;
label_168064:
    // 0x168064: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x168064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_168068:
    // 0x168068: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x168068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
label_16806c:
    // 0x16806c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x16806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_168070:
    // 0x168070: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x168070u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_168074:
    // 0x168074: 0x0  nop
    ctx->pc = 0x168074u;
    // NOP
label_168078:
    // 0x168078: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x168078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_16807c:
    // 0x16807c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x16807cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_168080:
    // 0x168080: 0x3c013c00  lui         $at, 0x3C00
    ctx->pc = 0x168080u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15360 << 16));
label_168084:
    // 0x168084: 0x34218081  ori         $at, $at, 0x8081
    ctx->pc = 0x168084u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32897);
label_168088:
    // 0x168088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x168088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16808c:
    // 0x16808c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16808cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_168090:
    // 0x168090: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x168090u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_168094:
    // 0x168094: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x168094u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_168098:
    // 0x168098: 0xc6610060  lwc1        $f1, 0x60($s3)
    ctx->pc = 0x168098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16809c:
    // 0x16809c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x16809cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1680a0:
    // 0x1680a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1680a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1680a4:
    // 0x1680a4: 0xc0a074a  jal         func_281D28
label_1680a8:
    if (ctx->pc == 0x1680A8u) {
        ctx->pc = 0x1680A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680A4u;
        // 0x1680a8: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1680ACu;
        goto label_1680ac;
    }
    ctx->pc = 0x1680A4u;
    SET_GPR_U32(ctx, 31, 0x1680ACu);
    ctx->pc = 0x1680A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680A4u;
    // 0x1680a8: 0xe4c00000  swc1        $f0, 0x0($a2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1680A4u, 0x1680ACu)) {
        return;
    }
    ctx->pc = 0x1680ACu;
label_1680ac:
    // 0x1680ac: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x1680acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1680b0:
    // 0x1680b0: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1680b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1680b4:
    // 0x1680b4: 0x26700090  addiu       $s0, $s3, 0x90
    ctx->pc = 0x1680b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 144));
label_1680b8:
    // 0x1680b8: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1680b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1680bc:
    // 0x1680bc: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x1680bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_1680c0:
    // 0x1680c0: 0xc0a074a  jal         func_281D28
label_1680c4:
    if (ctx->pc == 0x1680C4u) {
        ctx->pc = 0x1680C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1680C0u;
        // 0x1680c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1680C8u;
        goto label_1680c8;
    }
    ctx->pc = 0x1680C0u;
    SET_GPR_U32(ctx, 31, 0x1680C8u);
    ctx->pc = 0x1680C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1680C0u;
    // 0x1680c4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x281D28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x281D28u, 0x1680C0u, 0x1680C8u)) {
        return;
    }
    ctx->pc = 0x1680C8u;
label_1680c8:
    // 0x1680c8: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x1680c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_1680cc:
    // 0x1680cc: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1680ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1680d0:
    // 0x1680d0: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x1680d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_1680d4:
    // 0x1680d4: 0xc46186a8  lwc1        $f1, -0x7958($v1)
    ctx->pc = 0x1680d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294936232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1680d8:
    // 0x1680d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1680d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1680dc:
    // 0x1680dc: 0x0  nop
    ctx->pc = 0x1680dcu;
    // NOP
label_1680e0:
    // 0x1680e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1680e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1680e4:
    // 0x1680e4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1680e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1680e8:
    // 0x1680e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1680e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_1680ec:
    // 0x1680ec: 0xe6010000  swc1        $f1, 0x0($s0)
    ctx->pc = 0x1680ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_1680f0:
    // 0x1680f0: 0xc660007c  lwc1        $f0, 0x7C($s3)
    ctx->pc = 0x1680f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1680f4:
    // 0x1680f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1680f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1680f8:
    // 0x1680f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1680f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1680fc:
    // 0x1680fc: 0x0  nop
    ctx->pc = 0x1680fcu;
    // NOP
label_168100:
    // 0x168100: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x168100u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_168104:
    // 0x168104: 0x0  nop
    ctx->pc = 0x168104u;
    // NOP
label_168108:
    // 0x168108: 0x4503ff6b  bc1tl       . + 4 + (-0x95 << 2)
label_16810c:
    if (ctx->pc == 0x16810Cu) {
        ctx->pc = 0x16810Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168108u;
        // 0x16810c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x168110u;
        goto label_168110;
    }
    ctx->pc = 0x168108u;
    {
        const bool branch_taken_0x168108 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x168108) {
            ctx->pc = 0x16810Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x168108u;
            // 0x16810c: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
            ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x167EB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167eb8;
        }
    }
    ctx->pc = 0x168110u;
label_168110:
    // 0x168110: 0x7bb00f50  lq          $s0, 0xF50($sp)
    ctx->pc = 0x168110u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 3920)));
label_168114:
    // 0x168114: 0x7bb10f40  lq          $s1, 0xF40($sp)
    ctx->pc = 0x168114u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 3904)));
label_168118:
    // 0x168118: 0x7bb20f30  lq          $s2, 0xF30($sp)
    ctx->pc = 0x168118u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 3888)));
label_16811c:
    // 0x16811c: 0x7bb30f20  lq          $s3, 0xF20($sp)
    ctx->pc = 0x16811cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 3872)));
label_168120:
    // 0x168120: 0x7bb40f10  lq          $s4, 0xF10($sp)
    ctx->pc = 0x168120u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 3856)));
label_168124:
    // 0x168124: 0x7bb50f00  lq          $s5, 0xF00($sp)
    ctx->pc = 0x168124u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 3840)));
label_168128:
    // 0x168128: 0x7bb60ef0  lq          $s6, 0xEF0($sp)
    ctx->pc = 0x168128u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 3824)));
label_16812c:
    // 0x16812c: 0x7bb70ee0  lq          $s7, 0xEE0($sp)
    ctx->pc = 0x16812cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 3808)));
label_168130:
    // 0x168130: 0x7bbe0ed0  lq          $fp, 0xED0($sp)
    ctx->pc = 0x168130u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 3792)));
label_168134:
    // 0x168134: 0xdfbf0ec0  ld          $ra, 0xEC0($sp)
    ctx->pc = 0x168134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 3776)));
label_168138:
    // 0x168138: 0xc7bf0fb8  lwc1        $f31, 0xFB8($sp)
    ctx->pc = 0x168138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4024)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_16813c:
    // 0x16813c: 0xc7be0fb0  lwc1        $f30, 0xFB0($sp)
    ctx->pc = 0x16813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_168140:
    // 0x168140: 0xc7bd0fa8  lwc1        $f29, 0xFA8($sp)
    ctx->pc = 0x168140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_168144:
    // 0x168144: 0xc7bc0fa0  lwc1        $f28, 0xFA0($sp)
    ctx->pc = 0x168144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_168148:
    // 0x168148: 0xc7bb0f98  lwc1        $f27, 0xF98($sp)
    ctx->pc = 0x168148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3992)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_16814c:
    // 0x16814c: 0xc7ba0f90  lwc1        $f26, 0xF90($sp)
    ctx->pc = 0x16814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3984)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_168150:
    // 0x168150: 0xc7b90f88  lwc1        $f25, 0xF88($sp)
    ctx->pc = 0x168150u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3976)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_168154:
    // 0x168154: 0xc7b80f80  lwc1        $f24, 0xF80($sp)
    ctx->pc = 0x168154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_168158:
    // 0x168158: 0xc7b70f78  lwc1        $f23, 0xF78($sp)
    ctx->pc = 0x168158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16815c:
    // 0x16815c: 0xc7b60f70  lwc1        $f22, 0xF70($sp)
    ctx->pc = 0x16815cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_168160:
    // 0x168160: 0xc7b50f68  lwc1        $f21, 0xF68($sp)
    ctx->pc = 0x168160u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_168164:
    // 0x168164: 0xc7b40f60  lwc1        $f20, 0xF60($sp)
    ctx->pc = 0x168164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 3936)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_168168:
    // 0x168168: 0x3e00008  jr          $ra
label_16816c:
    if (ctx->pc == 0x16816Cu) {
        ctx->pc = 0x16816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168168u;
        // 0x16816c: 0x27bd0fc0  addiu       $sp, $sp, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4032));
        ctx->in_delay_slot = false;
        ctx->pc = 0x168170u;
        goto label_fallthrough_0x168168;
    }
    ctx->pc = 0x168168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16816Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x168168u;
        // 0x16816c: 0x27bd0fc0  addiu       $sp, $sp, 0xFC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4032));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x168168u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x168168:
    ctx->pc = 0x168170u;
}
