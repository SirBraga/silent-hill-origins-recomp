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

// Function: sub_002846F0
// Address: 0x2846f0 - 0x2856a0
void sub_002846F0_0x2846f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002846F0_0x2846f0");
#endif

    switch (ctx->pc) {
        case 0x2846f0u: goto label_2846f0;
        case 0x2846f4u: goto label_2846f4;
        case 0x2846f8u: goto label_2846f8;
        case 0x2846fcu: goto label_2846fc;
        case 0x284700u: goto label_284700;
        case 0x284704u: goto label_284704;
        case 0x284708u: goto label_284708;
        case 0x28470cu: goto label_28470c;
        case 0x284710u: goto label_284710;
        case 0x284714u: goto label_284714;
        case 0x284718u: goto label_284718;
        case 0x28471cu: goto label_28471c;
        case 0x284720u: goto label_284720;
        case 0x284724u: goto label_284724;
        case 0x284728u: goto label_284728;
        case 0x28472cu: goto label_28472c;
        case 0x284730u: goto label_284730;
        case 0x284734u: goto label_284734;
        case 0x284738u: goto label_284738;
        case 0x28473cu: goto label_28473c;
        case 0x284740u: goto label_284740;
        case 0x284744u: goto label_284744;
        case 0x284748u: goto label_284748;
        case 0x28474cu: goto label_28474c;
        case 0x284750u: goto label_284750;
        case 0x284754u: goto label_284754;
        case 0x284758u: goto label_284758;
        case 0x28475cu: goto label_28475c;
        case 0x284760u: goto label_284760;
        case 0x284764u: goto label_284764;
        case 0x284768u: goto label_284768;
        case 0x28476cu: goto label_28476c;
        case 0x284770u: goto label_284770;
        case 0x284774u: goto label_284774;
        case 0x284778u: goto label_284778;
        case 0x28477cu: goto label_28477c;
        case 0x284780u: goto label_284780;
        case 0x284784u: goto label_284784;
        case 0x284788u: goto label_284788;
        case 0x28478cu: goto label_28478c;
        case 0x284790u: goto label_284790;
        case 0x284794u: goto label_284794;
        case 0x284798u: goto label_284798;
        case 0x28479cu: goto label_28479c;
        case 0x2847a0u: goto label_2847a0;
        case 0x2847a4u: goto label_2847a4;
        case 0x2847a8u: goto label_2847a8;
        case 0x2847acu: goto label_2847ac;
        case 0x2847b0u: goto label_2847b0;
        case 0x2847b4u: goto label_2847b4;
        case 0x2847b8u: goto label_2847b8;
        case 0x2847bcu: goto label_2847bc;
        case 0x2847c0u: goto label_2847c0;
        case 0x2847c4u: goto label_2847c4;
        case 0x2847c8u: goto label_2847c8;
        case 0x2847ccu: goto label_2847cc;
        case 0x2847d0u: goto label_2847d0;
        case 0x2847d4u: goto label_2847d4;
        case 0x2847d8u: goto label_2847d8;
        case 0x2847dcu: goto label_2847dc;
        case 0x2847e0u: goto label_2847e0;
        case 0x2847e4u: goto label_2847e4;
        case 0x2847e8u: goto label_2847e8;
        case 0x2847ecu: goto label_2847ec;
        case 0x2847f0u: goto label_2847f0;
        case 0x2847f4u: goto label_2847f4;
        case 0x2847f8u: goto label_2847f8;
        case 0x2847fcu: goto label_2847fc;
        case 0x284800u: goto label_284800;
        case 0x284804u: goto label_284804;
        case 0x284808u: goto label_284808;
        case 0x28480cu: goto label_28480c;
        case 0x284810u: goto label_284810;
        case 0x284814u: goto label_284814;
        case 0x284818u: goto label_284818;
        case 0x28481cu: goto label_28481c;
        case 0x284820u: goto label_284820;
        case 0x284824u: goto label_284824;
        case 0x284828u: goto label_284828;
        case 0x28482cu: goto label_28482c;
        case 0x284830u: goto label_284830;
        case 0x284834u: goto label_284834;
        case 0x284838u: goto label_284838;
        case 0x28483cu: goto label_28483c;
        case 0x284840u: goto label_284840;
        case 0x284844u: goto label_284844;
        case 0x284848u: goto label_284848;
        case 0x28484cu: goto label_28484c;
        case 0x284850u: goto label_284850;
        case 0x284854u: goto label_284854;
        case 0x284858u: goto label_284858;
        case 0x28485cu: goto label_28485c;
        case 0x284860u: goto label_284860;
        case 0x284864u: goto label_284864;
        case 0x284868u: goto label_284868;
        case 0x28486cu: goto label_28486c;
        case 0x284870u: goto label_284870;
        case 0x284874u: goto label_284874;
        case 0x284878u: goto label_284878;
        case 0x28487cu: goto label_28487c;
        case 0x284880u: goto label_284880;
        case 0x284884u: goto label_284884;
        case 0x284888u: goto label_284888;
        case 0x28488cu: goto label_28488c;
        case 0x284890u: goto label_284890;
        case 0x284894u: goto label_284894;
        case 0x284898u: goto label_284898;
        case 0x28489cu: goto label_28489c;
        case 0x2848a0u: goto label_2848a0;
        case 0x2848a4u: goto label_2848a4;
        case 0x2848a8u: goto label_2848a8;
        case 0x2848acu: goto label_2848ac;
        case 0x2848b0u: goto label_2848b0;
        case 0x2848b4u: goto label_2848b4;
        case 0x2848b8u: goto label_2848b8;
        case 0x2848bcu: goto label_2848bc;
        case 0x2848c0u: goto label_2848c0;
        case 0x2848c4u: goto label_2848c4;
        case 0x2848c8u: goto label_2848c8;
        case 0x2848ccu: goto label_2848cc;
        case 0x2848d0u: goto label_2848d0;
        case 0x2848d4u: goto label_2848d4;
        case 0x2848d8u: goto label_2848d8;
        case 0x2848dcu: goto label_2848dc;
        case 0x2848e0u: goto label_2848e0;
        case 0x2848e4u: goto label_2848e4;
        case 0x2848e8u: goto label_2848e8;
        case 0x2848ecu: goto label_2848ec;
        case 0x2848f0u: goto label_2848f0;
        case 0x2848f4u: goto label_2848f4;
        case 0x2848f8u: goto label_2848f8;
        case 0x2848fcu: goto label_2848fc;
        case 0x284900u: goto label_284900;
        case 0x284904u: goto label_284904;
        case 0x284908u: goto label_284908;
        case 0x28490cu: goto label_28490c;
        case 0x284910u: goto label_284910;
        case 0x284914u: goto label_284914;
        case 0x284918u: goto label_284918;
        case 0x28491cu: goto label_28491c;
        case 0x284920u: goto label_284920;
        case 0x284924u: goto label_284924;
        case 0x284928u: goto label_284928;
        case 0x28492cu: goto label_28492c;
        case 0x284930u: goto label_284930;
        case 0x284934u: goto label_284934;
        case 0x284938u: goto label_284938;
        case 0x28493cu: goto label_28493c;
        case 0x284940u: goto label_284940;
        case 0x284944u: goto label_284944;
        case 0x284948u: goto label_284948;
        case 0x28494cu: goto label_28494c;
        case 0x284950u: goto label_284950;
        case 0x284954u: goto label_284954;
        case 0x284958u: goto label_284958;
        case 0x28495cu: goto label_28495c;
        case 0x284960u: goto label_284960;
        case 0x284964u: goto label_284964;
        case 0x284968u: goto label_284968;
        case 0x28496cu: goto label_28496c;
        case 0x284970u: goto label_284970;
        case 0x284974u: goto label_284974;
        case 0x284978u: goto label_284978;
        case 0x28497cu: goto label_28497c;
        case 0x284980u: goto label_284980;
        case 0x284984u: goto label_284984;
        case 0x284988u: goto label_284988;
        case 0x28498cu: goto label_28498c;
        case 0x284990u: goto label_284990;
        case 0x284994u: goto label_284994;
        case 0x284998u: goto label_284998;
        case 0x28499cu: goto label_28499c;
        case 0x2849a0u: goto label_2849a0;
        case 0x2849a4u: goto label_2849a4;
        case 0x2849a8u: goto label_2849a8;
        case 0x2849acu: goto label_2849ac;
        case 0x2849b0u: goto label_2849b0;
        case 0x2849b4u: goto label_2849b4;
        case 0x2849b8u: goto label_2849b8;
        case 0x2849bcu: goto label_2849bc;
        case 0x2849c0u: goto label_2849c0;
        case 0x2849c4u: goto label_2849c4;
        case 0x2849c8u: goto label_2849c8;
        case 0x2849ccu: goto label_2849cc;
        case 0x2849d0u: goto label_2849d0;
        case 0x2849d4u: goto label_2849d4;
        case 0x2849d8u: goto label_2849d8;
        case 0x2849dcu: goto label_2849dc;
        case 0x2849e0u: goto label_2849e0;
        case 0x2849e4u: goto label_2849e4;
        case 0x2849e8u: goto label_2849e8;
        case 0x2849ecu: goto label_2849ec;
        case 0x2849f0u: goto label_2849f0;
        case 0x2849f4u: goto label_2849f4;
        case 0x2849f8u: goto label_2849f8;
        case 0x2849fcu: goto label_2849fc;
        case 0x284a00u: goto label_284a00;
        case 0x284a04u: goto label_284a04;
        case 0x284a08u: goto label_284a08;
        case 0x284a0cu: goto label_284a0c;
        case 0x284a10u: goto label_284a10;
        case 0x284a14u: goto label_284a14;
        case 0x284a18u: goto label_284a18;
        case 0x284a1cu: goto label_284a1c;
        case 0x284a20u: goto label_284a20;
        case 0x284a24u: goto label_284a24;
        case 0x284a28u: goto label_284a28;
        case 0x284a2cu: goto label_284a2c;
        case 0x284a30u: goto label_284a30;
        case 0x284a34u: goto label_284a34;
        case 0x284a38u: goto label_284a38;
        case 0x284a3cu: goto label_284a3c;
        case 0x284a40u: goto label_284a40;
        case 0x284a44u: goto label_284a44;
        case 0x284a48u: goto label_284a48;
        case 0x284a4cu: goto label_284a4c;
        case 0x284a50u: goto label_284a50;
        case 0x284a54u: goto label_284a54;
        case 0x284a58u: goto label_284a58;
        case 0x284a5cu: goto label_284a5c;
        case 0x284a60u: goto label_284a60;
        case 0x284a64u: goto label_284a64;
        case 0x284a68u: goto label_284a68;
        case 0x284a6cu: goto label_284a6c;
        case 0x284a70u: goto label_284a70;
        case 0x284a74u: goto label_284a74;
        case 0x284a78u: goto label_284a78;
        case 0x284a7cu: goto label_284a7c;
        case 0x284a80u: goto label_284a80;
        case 0x284a84u: goto label_284a84;
        case 0x284a88u: goto label_284a88;
        case 0x284a8cu: goto label_284a8c;
        case 0x284a90u: goto label_284a90;
        case 0x284a94u: goto label_284a94;
        case 0x284a98u: goto label_284a98;
        case 0x284a9cu: goto label_284a9c;
        case 0x284aa0u: goto label_284aa0;
        case 0x284aa4u: goto label_284aa4;
        case 0x284aa8u: goto label_284aa8;
        case 0x284aacu: goto label_284aac;
        case 0x284ab0u: goto label_284ab0;
        case 0x284ab4u: goto label_284ab4;
        case 0x284ab8u: goto label_284ab8;
        case 0x284abcu: goto label_284abc;
        case 0x284ac0u: goto label_284ac0;
        case 0x284ac4u: goto label_284ac4;
        case 0x284ac8u: goto label_284ac8;
        case 0x284accu: goto label_284acc;
        case 0x284ad0u: goto label_284ad0;
        case 0x284ad4u: goto label_284ad4;
        case 0x284ad8u: goto label_284ad8;
        case 0x284adcu: goto label_284adc;
        case 0x284ae0u: goto label_284ae0;
        case 0x284ae4u: goto label_284ae4;
        case 0x284ae8u: goto label_284ae8;
        case 0x284aecu: goto label_284aec;
        case 0x284af0u: goto label_284af0;
        case 0x284af4u: goto label_284af4;
        case 0x284af8u: goto label_284af8;
        case 0x284afcu: goto label_284afc;
        case 0x284b00u: goto label_284b00;
        case 0x284b04u: goto label_284b04;
        case 0x284b08u: goto label_284b08;
        case 0x284b0cu: goto label_284b0c;
        case 0x284b10u: goto label_284b10;
        case 0x284b14u: goto label_284b14;
        case 0x284b18u: goto label_284b18;
        case 0x284b1cu: goto label_284b1c;
        case 0x284b20u: goto label_284b20;
        case 0x284b24u: goto label_284b24;
        case 0x284b28u: goto label_284b28;
        case 0x284b2cu: goto label_284b2c;
        case 0x284b30u: goto label_284b30;
        case 0x284b34u: goto label_284b34;
        case 0x284b38u: goto label_284b38;
        case 0x284b3cu: goto label_284b3c;
        case 0x284b40u: goto label_284b40;
        case 0x284b44u: goto label_284b44;
        case 0x284b48u: goto label_284b48;
        case 0x284b4cu: goto label_284b4c;
        case 0x284b50u: goto label_284b50;
        case 0x284b54u: goto label_284b54;
        case 0x284b58u: goto label_284b58;
        case 0x284b5cu: goto label_284b5c;
        case 0x284b60u: goto label_284b60;
        case 0x284b64u: goto label_284b64;
        case 0x284b68u: goto label_284b68;
        case 0x284b6cu: goto label_284b6c;
        case 0x284b70u: goto label_284b70;
        case 0x284b74u: goto label_284b74;
        case 0x284b78u: goto label_284b78;
        case 0x284b7cu: goto label_284b7c;
        case 0x284b80u: goto label_284b80;
        case 0x284b84u: goto label_284b84;
        case 0x284b88u: goto label_284b88;
        case 0x284b8cu: goto label_284b8c;
        case 0x284b90u: goto label_284b90;
        case 0x284b94u: goto label_284b94;
        case 0x284b98u: goto label_284b98;
        case 0x284b9cu: goto label_284b9c;
        case 0x284ba0u: goto label_284ba0;
        case 0x284ba4u: goto label_284ba4;
        case 0x284ba8u: goto label_284ba8;
        case 0x284bacu: goto label_284bac;
        case 0x284bb0u: goto label_284bb0;
        case 0x284bb4u: goto label_284bb4;
        case 0x284bb8u: goto label_284bb8;
        case 0x284bbcu: goto label_284bbc;
        case 0x284bc0u: goto label_284bc0;
        case 0x284bc4u: goto label_284bc4;
        case 0x284bc8u: goto label_284bc8;
        case 0x284bccu: goto label_284bcc;
        case 0x284bd0u: goto label_284bd0;
        case 0x284bd4u: goto label_284bd4;
        case 0x284bd8u: goto label_284bd8;
        case 0x284bdcu: goto label_284bdc;
        case 0x284be0u: goto label_284be0;
        case 0x284be4u: goto label_284be4;
        case 0x284be8u: goto label_284be8;
        case 0x284becu: goto label_284bec;
        case 0x284bf0u: goto label_284bf0;
        case 0x284bf4u: goto label_284bf4;
        case 0x284bf8u: goto label_284bf8;
        case 0x284bfcu: goto label_284bfc;
        case 0x284c00u: goto label_284c00;
        case 0x284c04u: goto label_284c04;
        case 0x284c08u: goto label_284c08;
        case 0x284c0cu: goto label_284c0c;
        case 0x284c10u: goto label_284c10;
        case 0x284c14u: goto label_284c14;
        case 0x284c18u: goto label_284c18;
        case 0x284c1cu: goto label_284c1c;
        case 0x284c20u: goto label_284c20;
        case 0x284c24u: goto label_284c24;
        case 0x284c28u: goto label_284c28;
        case 0x284c2cu: goto label_284c2c;
        case 0x284c30u: goto label_284c30;
        case 0x284c34u: goto label_284c34;
        case 0x284c38u: goto label_284c38;
        case 0x284c3cu: goto label_284c3c;
        case 0x284c40u: goto label_284c40;
        case 0x284c44u: goto label_284c44;
        case 0x284c48u: goto label_284c48;
        case 0x284c4cu: goto label_284c4c;
        case 0x284c50u: goto label_284c50;
        case 0x284c54u: goto label_284c54;
        case 0x284c58u: goto label_284c58;
        case 0x284c5cu: goto label_284c5c;
        case 0x284c60u: goto label_284c60;
        case 0x284c64u: goto label_284c64;
        case 0x284c68u: goto label_284c68;
        case 0x284c6cu: goto label_284c6c;
        case 0x284c70u: goto label_284c70;
        case 0x284c74u: goto label_284c74;
        case 0x284c78u: goto label_284c78;
        case 0x284c7cu: goto label_284c7c;
        case 0x284c80u: goto label_284c80;
        case 0x284c84u: goto label_284c84;
        case 0x284c88u: goto label_284c88;
        case 0x284c8cu: goto label_284c8c;
        case 0x284c90u: goto label_284c90;
        case 0x284c94u: goto label_284c94;
        case 0x284c98u: goto label_284c98;
        case 0x284c9cu: goto label_284c9c;
        case 0x284ca0u: goto label_284ca0;
        case 0x284ca4u: goto label_284ca4;
        case 0x284ca8u: goto label_284ca8;
        case 0x284cacu: goto label_284cac;
        case 0x284cb0u: goto label_284cb0;
        case 0x284cb4u: goto label_284cb4;
        case 0x284cb8u: goto label_284cb8;
        case 0x284cbcu: goto label_284cbc;
        case 0x284cc0u: goto label_284cc0;
        case 0x284cc4u: goto label_284cc4;
        case 0x284cc8u: goto label_284cc8;
        case 0x284cccu: goto label_284ccc;
        case 0x284cd0u: goto label_284cd0;
        case 0x284cd4u: goto label_284cd4;
        case 0x284cd8u: goto label_284cd8;
        case 0x284cdcu: goto label_284cdc;
        case 0x284ce0u: goto label_284ce0;
        case 0x284ce4u: goto label_284ce4;
        case 0x284ce8u: goto label_284ce8;
        case 0x284cecu: goto label_284cec;
        case 0x284cf0u: goto label_284cf0;
        case 0x284cf4u: goto label_284cf4;
        case 0x284cf8u: goto label_284cf8;
        case 0x284cfcu: goto label_284cfc;
        case 0x284d00u: goto label_284d00;
        case 0x284d04u: goto label_284d04;
        case 0x284d08u: goto label_284d08;
        case 0x284d0cu: goto label_284d0c;
        case 0x284d10u: goto label_284d10;
        case 0x284d14u: goto label_284d14;
        case 0x284d18u: goto label_284d18;
        case 0x284d1cu: goto label_284d1c;
        case 0x284d20u: goto label_284d20;
        case 0x284d24u: goto label_284d24;
        case 0x284d28u: goto label_284d28;
        case 0x284d2cu: goto label_284d2c;
        case 0x284d30u: goto label_284d30;
        case 0x284d34u: goto label_284d34;
        case 0x284d38u: goto label_284d38;
        case 0x284d3cu: goto label_284d3c;
        case 0x284d40u: goto label_284d40;
        case 0x284d44u: goto label_284d44;
        case 0x284d48u: goto label_284d48;
        case 0x284d4cu: goto label_284d4c;
        case 0x284d50u: goto label_284d50;
        case 0x284d54u: goto label_284d54;
        case 0x284d58u: goto label_284d58;
        case 0x284d5cu: goto label_284d5c;
        case 0x284d60u: goto label_284d60;
        case 0x284d64u: goto label_284d64;
        case 0x284d68u: goto label_284d68;
        case 0x284d6cu: goto label_284d6c;
        case 0x284d70u: goto label_284d70;
        case 0x284d74u: goto label_284d74;
        case 0x284d78u: goto label_284d78;
        case 0x284d7cu: goto label_284d7c;
        case 0x284d80u: goto label_284d80;
        case 0x284d84u: goto label_284d84;
        case 0x284d88u: goto label_284d88;
        case 0x284d8cu: goto label_284d8c;
        case 0x284d90u: goto label_284d90;
        case 0x284d94u: goto label_284d94;
        case 0x284d98u: goto label_284d98;
        case 0x284d9cu: goto label_284d9c;
        case 0x284da0u: goto label_284da0;
        case 0x284da4u: goto label_284da4;
        case 0x284da8u: goto label_284da8;
        case 0x284dacu: goto label_284dac;
        case 0x284db0u: goto label_284db0;
        case 0x284db4u: goto label_284db4;
        case 0x284db8u: goto label_284db8;
        case 0x284dbcu: goto label_284dbc;
        case 0x284dc0u: goto label_284dc0;
        case 0x284dc4u: goto label_284dc4;
        case 0x284dc8u: goto label_284dc8;
        case 0x284dccu: goto label_284dcc;
        case 0x284dd0u: goto label_284dd0;
        case 0x284dd4u: goto label_284dd4;
        case 0x284dd8u: goto label_284dd8;
        case 0x284ddcu: goto label_284ddc;
        case 0x284de0u: goto label_284de0;
        case 0x284de4u: goto label_284de4;
        case 0x284de8u: goto label_284de8;
        case 0x284decu: goto label_284dec;
        case 0x284df0u: goto label_284df0;
        case 0x284df4u: goto label_284df4;
        case 0x284df8u: goto label_284df8;
        case 0x284dfcu: goto label_284dfc;
        case 0x284e00u: goto label_284e00;
        case 0x284e04u: goto label_284e04;
        case 0x284e08u: goto label_284e08;
        case 0x284e0cu: goto label_284e0c;
        case 0x284e10u: goto label_284e10;
        case 0x284e14u: goto label_284e14;
        case 0x284e18u: goto label_284e18;
        case 0x284e1cu: goto label_284e1c;
        case 0x284e20u: goto label_284e20;
        case 0x284e24u: goto label_284e24;
        case 0x284e28u: goto label_284e28;
        case 0x284e2cu: goto label_284e2c;
        case 0x284e30u: goto label_284e30;
        case 0x284e34u: goto label_284e34;
        case 0x284e38u: goto label_284e38;
        case 0x284e3cu: goto label_284e3c;
        case 0x284e40u: goto label_284e40;
        case 0x284e44u: goto label_284e44;
        case 0x284e48u: goto label_284e48;
        case 0x284e4cu: goto label_284e4c;
        case 0x284e50u: goto label_284e50;
        case 0x284e54u: goto label_284e54;
        case 0x284e58u: goto label_284e58;
        case 0x284e5cu: goto label_284e5c;
        case 0x284e60u: goto label_284e60;
        case 0x284e64u: goto label_284e64;
        case 0x284e68u: goto label_284e68;
        case 0x284e6cu: goto label_284e6c;
        case 0x284e70u: goto label_284e70;
        case 0x284e74u: goto label_284e74;
        case 0x284e78u: goto label_284e78;
        case 0x284e7cu: goto label_284e7c;
        case 0x284e80u: goto label_284e80;
        case 0x284e84u: goto label_284e84;
        case 0x284e88u: goto label_284e88;
        case 0x284e8cu: goto label_284e8c;
        case 0x284e90u: goto label_284e90;
        case 0x284e94u: goto label_284e94;
        case 0x284e98u: goto label_284e98;
        case 0x284e9cu: goto label_284e9c;
        case 0x284ea0u: goto label_284ea0;
        case 0x284ea4u: goto label_284ea4;
        case 0x284ea8u: goto label_284ea8;
        case 0x284eacu: goto label_284eac;
        case 0x284eb0u: goto label_284eb0;
        case 0x284eb4u: goto label_284eb4;
        case 0x284eb8u: goto label_284eb8;
        case 0x284ebcu: goto label_284ebc;
        case 0x284ec0u: goto label_284ec0;
        case 0x284ec4u: goto label_284ec4;
        case 0x284ec8u: goto label_284ec8;
        case 0x284eccu: goto label_284ecc;
        case 0x284ed0u: goto label_284ed0;
        case 0x284ed4u: goto label_284ed4;
        case 0x284ed8u: goto label_284ed8;
        case 0x284edcu: goto label_284edc;
        case 0x284ee0u: goto label_284ee0;
        case 0x284ee4u: goto label_284ee4;
        case 0x284ee8u: goto label_284ee8;
        case 0x284eecu: goto label_284eec;
        case 0x284ef0u: goto label_284ef0;
        case 0x284ef4u: goto label_284ef4;
        case 0x284ef8u: goto label_284ef8;
        case 0x284efcu: goto label_284efc;
        case 0x284f00u: goto label_284f00;
        case 0x284f04u: goto label_284f04;
        case 0x284f08u: goto label_284f08;
        case 0x284f0cu: goto label_284f0c;
        case 0x284f10u: goto label_284f10;
        case 0x284f14u: goto label_284f14;
        case 0x284f18u: goto label_284f18;
        case 0x284f1cu: goto label_284f1c;
        case 0x284f20u: goto label_284f20;
        case 0x284f24u: goto label_284f24;
        case 0x284f28u: goto label_284f28;
        case 0x284f2cu: goto label_284f2c;
        case 0x284f30u: goto label_284f30;
        case 0x284f34u: goto label_284f34;
        case 0x284f38u: goto label_284f38;
        case 0x284f3cu: goto label_284f3c;
        case 0x284f40u: goto label_284f40;
        case 0x284f44u: goto label_284f44;
        case 0x284f48u: goto label_284f48;
        case 0x284f4cu: goto label_284f4c;
        case 0x284f50u: goto label_284f50;
        case 0x284f54u: goto label_284f54;
        case 0x284f58u: goto label_284f58;
        case 0x284f5cu: goto label_284f5c;
        case 0x284f60u: goto label_284f60;
        case 0x284f64u: goto label_284f64;
        case 0x284f68u: goto label_284f68;
        case 0x284f6cu: goto label_284f6c;
        case 0x284f70u: goto label_284f70;
        case 0x284f74u: goto label_284f74;
        case 0x284f78u: goto label_284f78;
        case 0x284f7cu: goto label_284f7c;
        case 0x284f80u: goto label_284f80;
        case 0x284f84u: goto label_284f84;
        case 0x284f88u: goto label_284f88;
        case 0x284f8cu: goto label_284f8c;
        case 0x284f90u: goto label_284f90;
        case 0x284f94u: goto label_284f94;
        case 0x284f98u: goto label_284f98;
        case 0x284f9cu: goto label_284f9c;
        case 0x284fa0u: goto label_284fa0;
        case 0x284fa4u: goto label_284fa4;
        case 0x284fa8u: goto label_284fa8;
        case 0x284facu: goto label_284fac;
        case 0x284fb0u: goto label_284fb0;
        case 0x284fb4u: goto label_284fb4;
        case 0x284fb8u: goto label_284fb8;
        case 0x284fbcu: goto label_284fbc;
        case 0x284fc0u: goto label_284fc0;
        case 0x284fc4u: goto label_284fc4;
        case 0x284fc8u: goto label_284fc8;
        case 0x284fccu: goto label_284fcc;
        case 0x284fd0u: goto label_284fd0;
        case 0x284fd4u: goto label_284fd4;
        case 0x284fd8u: goto label_284fd8;
        case 0x284fdcu: goto label_284fdc;
        case 0x284fe0u: goto label_284fe0;
        case 0x284fe4u: goto label_284fe4;
        case 0x284fe8u: goto label_284fe8;
        case 0x284fecu: goto label_284fec;
        case 0x284ff0u: goto label_284ff0;
        case 0x284ff4u: goto label_284ff4;
        case 0x284ff8u: goto label_284ff8;
        case 0x284ffcu: goto label_284ffc;
        case 0x285000u: goto label_285000;
        case 0x285004u: goto label_285004;
        case 0x285008u: goto label_285008;
        case 0x28500cu: goto label_28500c;
        case 0x285010u: goto label_285010;
        case 0x285014u: goto label_285014;
        case 0x285018u: goto label_285018;
        case 0x28501cu: goto label_28501c;
        case 0x285020u: goto label_285020;
        case 0x285024u: goto label_285024;
        case 0x285028u: goto label_285028;
        case 0x28502cu: goto label_28502c;
        case 0x285030u: goto label_285030;
        case 0x285034u: goto label_285034;
        case 0x285038u: goto label_285038;
        case 0x28503cu: goto label_28503c;
        case 0x285040u: goto label_285040;
        case 0x285044u: goto label_285044;
        case 0x285048u: goto label_285048;
        case 0x28504cu: goto label_28504c;
        case 0x285050u: goto label_285050;
        case 0x285054u: goto label_285054;
        case 0x285058u: goto label_285058;
        case 0x28505cu: goto label_28505c;
        case 0x285060u: goto label_285060;
        case 0x285064u: goto label_285064;
        case 0x285068u: goto label_285068;
        case 0x28506cu: goto label_28506c;
        case 0x285070u: goto label_285070;
        case 0x285074u: goto label_285074;
        case 0x285078u: goto label_285078;
        case 0x28507cu: goto label_28507c;
        case 0x285080u: goto label_285080;
        case 0x285084u: goto label_285084;
        case 0x285088u: goto label_285088;
        case 0x28508cu: goto label_28508c;
        case 0x285090u: goto label_285090;
        case 0x285094u: goto label_285094;
        case 0x285098u: goto label_285098;
        case 0x28509cu: goto label_28509c;
        case 0x2850a0u: goto label_2850a0;
        case 0x2850a4u: goto label_2850a4;
        case 0x2850a8u: goto label_2850a8;
        case 0x2850acu: goto label_2850ac;
        case 0x2850b0u: goto label_2850b0;
        case 0x2850b4u: goto label_2850b4;
        case 0x2850b8u: goto label_2850b8;
        case 0x2850bcu: goto label_2850bc;
        case 0x2850c0u: goto label_2850c0;
        case 0x2850c4u: goto label_2850c4;
        case 0x2850c8u: goto label_2850c8;
        case 0x2850ccu: goto label_2850cc;
        case 0x2850d0u: goto label_2850d0;
        case 0x2850d4u: goto label_2850d4;
        case 0x2850d8u: goto label_2850d8;
        case 0x2850dcu: goto label_2850dc;
        case 0x2850e0u: goto label_2850e0;
        case 0x2850e4u: goto label_2850e4;
        case 0x2850e8u: goto label_2850e8;
        case 0x2850ecu: goto label_2850ec;
        case 0x2850f0u: goto label_2850f0;
        case 0x2850f4u: goto label_2850f4;
        case 0x2850f8u: goto label_2850f8;
        case 0x2850fcu: goto label_2850fc;
        case 0x285100u: goto label_285100;
        case 0x285104u: goto label_285104;
        case 0x285108u: goto label_285108;
        case 0x28510cu: goto label_28510c;
        case 0x285110u: goto label_285110;
        case 0x285114u: goto label_285114;
        case 0x285118u: goto label_285118;
        case 0x28511cu: goto label_28511c;
        case 0x285120u: goto label_285120;
        case 0x285124u: goto label_285124;
        case 0x285128u: goto label_285128;
        case 0x28512cu: goto label_28512c;
        case 0x285130u: goto label_285130;
        case 0x285134u: goto label_285134;
        case 0x285138u: goto label_285138;
        case 0x28513cu: goto label_28513c;
        case 0x285140u: goto label_285140;
        case 0x285144u: goto label_285144;
        case 0x285148u: goto label_285148;
        case 0x28514cu: goto label_28514c;
        case 0x285150u: goto label_285150;
        case 0x285154u: goto label_285154;
        case 0x285158u: goto label_285158;
        case 0x28515cu: goto label_28515c;
        case 0x285160u: goto label_285160;
        case 0x285164u: goto label_285164;
        case 0x285168u: goto label_285168;
        case 0x28516cu: goto label_28516c;
        case 0x285170u: goto label_285170;
        case 0x285174u: goto label_285174;
        case 0x285178u: goto label_285178;
        case 0x28517cu: goto label_28517c;
        case 0x285180u: goto label_285180;
        case 0x285184u: goto label_285184;
        case 0x285188u: goto label_285188;
        case 0x28518cu: goto label_28518c;
        case 0x285190u: goto label_285190;
        case 0x285194u: goto label_285194;
        case 0x285198u: goto label_285198;
        case 0x28519cu: goto label_28519c;
        case 0x2851a0u: goto label_2851a0;
        case 0x2851a4u: goto label_2851a4;
        case 0x2851a8u: goto label_2851a8;
        case 0x2851acu: goto label_2851ac;
        case 0x2851b0u: goto label_2851b0;
        case 0x2851b4u: goto label_2851b4;
        case 0x2851b8u: goto label_2851b8;
        case 0x2851bcu: goto label_2851bc;
        case 0x2851c0u: goto label_2851c0;
        case 0x2851c4u: goto label_2851c4;
        case 0x2851c8u: goto label_2851c8;
        case 0x2851ccu: goto label_2851cc;
        case 0x2851d0u: goto label_2851d0;
        case 0x2851d4u: goto label_2851d4;
        case 0x2851d8u: goto label_2851d8;
        case 0x2851dcu: goto label_2851dc;
        case 0x2851e0u: goto label_2851e0;
        case 0x2851e4u: goto label_2851e4;
        case 0x2851e8u: goto label_2851e8;
        case 0x2851ecu: goto label_2851ec;
        case 0x2851f0u: goto label_2851f0;
        case 0x2851f4u: goto label_2851f4;
        case 0x2851f8u: goto label_2851f8;
        case 0x2851fcu: goto label_2851fc;
        case 0x285200u: goto label_285200;
        case 0x285204u: goto label_285204;
        case 0x285208u: goto label_285208;
        case 0x28520cu: goto label_28520c;
        case 0x285210u: goto label_285210;
        case 0x285214u: goto label_285214;
        case 0x285218u: goto label_285218;
        case 0x28521cu: goto label_28521c;
        case 0x285220u: goto label_285220;
        case 0x285224u: goto label_285224;
        case 0x285228u: goto label_285228;
        case 0x28522cu: goto label_28522c;
        case 0x285230u: goto label_285230;
        case 0x285234u: goto label_285234;
        case 0x285238u: goto label_285238;
        case 0x28523cu: goto label_28523c;
        case 0x285240u: goto label_285240;
        case 0x285244u: goto label_285244;
        case 0x285248u: goto label_285248;
        case 0x28524cu: goto label_28524c;
        case 0x285250u: goto label_285250;
        case 0x285254u: goto label_285254;
        case 0x285258u: goto label_285258;
        case 0x28525cu: goto label_28525c;
        case 0x285260u: goto label_285260;
        case 0x285264u: goto label_285264;
        case 0x285268u: goto label_285268;
        case 0x28526cu: goto label_28526c;
        case 0x285270u: goto label_285270;
        case 0x285274u: goto label_285274;
        case 0x285278u: goto label_285278;
        case 0x28527cu: goto label_28527c;
        case 0x285280u: goto label_285280;
        case 0x285284u: goto label_285284;
        case 0x285288u: goto label_285288;
        case 0x28528cu: goto label_28528c;
        case 0x285290u: goto label_285290;
        case 0x285294u: goto label_285294;
        case 0x285298u: goto label_285298;
        case 0x28529cu: goto label_28529c;
        case 0x2852a0u: goto label_2852a0;
        case 0x2852a4u: goto label_2852a4;
        case 0x2852a8u: goto label_2852a8;
        case 0x2852acu: goto label_2852ac;
        case 0x2852b0u: goto label_2852b0;
        case 0x2852b4u: goto label_2852b4;
        case 0x2852b8u: goto label_2852b8;
        case 0x2852bcu: goto label_2852bc;
        case 0x2852c0u: goto label_2852c0;
        case 0x2852c4u: goto label_2852c4;
        case 0x2852c8u: goto label_2852c8;
        case 0x2852ccu: goto label_2852cc;
        case 0x2852d0u: goto label_2852d0;
        case 0x2852d4u: goto label_2852d4;
        case 0x2852d8u: goto label_2852d8;
        case 0x2852dcu: goto label_2852dc;
        case 0x2852e0u: goto label_2852e0;
        case 0x2852e4u: goto label_2852e4;
        case 0x2852e8u: goto label_2852e8;
        case 0x2852ecu: goto label_2852ec;
        case 0x2852f0u: goto label_2852f0;
        case 0x2852f4u: goto label_2852f4;
        case 0x2852f8u: goto label_2852f8;
        case 0x2852fcu: goto label_2852fc;
        case 0x285300u: goto label_285300;
        case 0x285304u: goto label_285304;
        case 0x285308u: goto label_285308;
        case 0x28530cu: goto label_28530c;
        case 0x285310u: goto label_285310;
        case 0x285314u: goto label_285314;
        case 0x285318u: goto label_285318;
        case 0x28531cu: goto label_28531c;
        case 0x285320u: goto label_285320;
        case 0x285324u: goto label_285324;
        case 0x285328u: goto label_285328;
        case 0x28532cu: goto label_28532c;
        case 0x285330u: goto label_285330;
        case 0x285334u: goto label_285334;
        case 0x285338u: goto label_285338;
        case 0x28533cu: goto label_28533c;
        case 0x285340u: goto label_285340;
        case 0x285344u: goto label_285344;
        case 0x285348u: goto label_285348;
        case 0x28534cu: goto label_28534c;
        case 0x285350u: goto label_285350;
        case 0x285354u: goto label_285354;
        case 0x285358u: goto label_285358;
        case 0x28535cu: goto label_28535c;
        case 0x285360u: goto label_285360;
        case 0x285364u: goto label_285364;
        case 0x285368u: goto label_285368;
        case 0x28536cu: goto label_28536c;
        case 0x285370u: goto label_285370;
        case 0x285374u: goto label_285374;
        case 0x285378u: goto label_285378;
        case 0x28537cu: goto label_28537c;
        case 0x285380u: goto label_285380;
        case 0x285384u: goto label_285384;
        case 0x285388u: goto label_285388;
        case 0x28538cu: goto label_28538c;
        case 0x285390u: goto label_285390;
        case 0x285394u: goto label_285394;
        case 0x285398u: goto label_285398;
        case 0x28539cu: goto label_28539c;
        case 0x2853a0u: goto label_2853a0;
        case 0x2853a4u: goto label_2853a4;
        case 0x2853a8u: goto label_2853a8;
        case 0x2853acu: goto label_2853ac;
        case 0x2853b0u: goto label_2853b0;
        case 0x2853b4u: goto label_2853b4;
        case 0x2853b8u: goto label_2853b8;
        case 0x2853bcu: goto label_2853bc;
        case 0x2853c0u: goto label_2853c0;
        case 0x2853c4u: goto label_2853c4;
        case 0x2853c8u: goto label_2853c8;
        case 0x2853ccu: goto label_2853cc;
        case 0x2853d0u: goto label_2853d0;
        case 0x2853d4u: goto label_2853d4;
        case 0x2853d8u: goto label_2853d8;
        case 0x2853dcu: goto label_2853dc;
        case 0x2853e0u: goto label_2853e0;
        case 0x2853e4u: goto label_2853e4;
        case 0x2853e8u: goto label_2853e8;
        case 0x2853ecu: goto label_2853ec;
        case 0x2853f0u: goto label_2853f0;
        case 0x2853f4u: goto label_2853f4;
        case 0x2853f8u: goto label_2853f8;
        case 0x2853fcu: goto label_2853fc;
        case 0x285400u: goto label_285400;
        case 0x285404u: goto label_285404;
        case 0x285408u: goto label_285408;
        case 0x28540cu: goto label_28540c;
        case 0x285410u: goto label_285410;
        case 0x285414u: goto label_285414;
        case 0x285418u: goto label_285418;
        case 0x28541cu: goto label_28541c;
        case 0x285420u: goto label_285420;
        case 0x285424u: goto label_285424;
        case 0x285428u: goto label_285428;
        case 0x28542cu: goto label_28542c;
        case 0x285430u: goto label_285430;
        case 0x285434u: goto label_285434;
        case 0x285438u: goto label_285438;
        case 0x28543cu: goto label_28543c;
        case 0x285440u: goto label_285440;
        case 0x285444u: goto label_285444;
        case 0x285448u: goto label_285448;
        case 0x28544cu: goto label_28544c;
        case 0x285450u: goto label_285450;
        case 0x285454u: goto label_285454;
        case 0x285458u: goto label_285458;
        case 0x28545cu: goto label_28545c;
        case 0x285460u: goto label_285460;
        case 0x285464u: goto label_285464;
        case 0x285468u: goto label_285468;
        case 0x28546cu: goto label_28546c;
        case 0x285470u: goto label_285470;
        case 0x285474u: goto label_285474;
        case 0x285478u: goto label_285478;
        case 0x28547cu: goto label_28547c;
        case 0x285480u: goto label_285480;
        case 0x285484u: goto label_285484;
        case 0x285488u: goto label_285488;
        case 0x28548cu: goto label_28548c;
        case 0x285490u: goto label_285490;
        case 0x285494u: goto label_285494;
        case 0x285498u: goto label_285498;
        case 0x28549cu: goto label_28549c;
        case 0x2854a0u: goto label_2854a0;
        case 0x2854a4u: goto label_2854a4;
        case 0x2854a8u: goto label_2854a8;
        case 0x2854acu: goto label_2854ac;
        case 0x2854b0u: goto label_2854b0;
        case 0x2854b4u: goto label_2854b4;
        case 0x2854b8u: goto label_2854b8;
        case 0x2854bcu: goto label_2854bc;
        case 0x2854c0u: goto label_2854c0;
        case 0x2854c4u: goto label_2854c4;
        case 0x2854c8u: goto label_2854c8;
        case 0x2854ccu: goto label_2854cc;
        case 0x2854d0u: goto label_2854d0;
        case 0x2854d4u: goto label_2854d4;
        case 0x2854d8u: goto label_2854d8;
        case 0x2854dcu: goto label_2854dc;
        case 0x2854e0u: goto label_2854e0;
        case 0x2854e4u: goto label_2854e4;
        case 0x2854e8u: goto label_2854e8;
        case 0x2854ecu: goto label_2854ec;
        case 0x2854f0u: goto label_2854f0;
        case 0x2854f4u: goto label_2854f4;
        case 0x2854f8u: goto label_2854f8;
        case 0x2854fcu: goto label_2854fc;
        case 0x285500u: goto label_285500;
        case 0x285504u: goto label_285504;
        case 0x285508u: goto label_285508;
        case 0x28550cu: goto label_28550c;
        case 0x285510u: goto label_285510;
        case 0x285514u: goto label_285514;
        case 0x285518u: goto label_285518;
        case 0x28551cu: goto label_28551c;
        case 0x285520u: goto label_285520;
        case 0x285524u: goto label_285524;
        case 0x285528u: goto label_285528;
        case 0x28552cu: goto label_28552c;
        case 0x285530u: goto label_285530;
        case 0x285534u: goto label_285534;
        case 0x285538u: goto label_285538;
        case 0x28553cu: goto label_28553c;
        case 0x285540u: goto label_285540;
        case 0x285544u: goto label_285544;
        case 0x285548u: goto label_285548;
        case 0x28554cu: goto label_28554c;
        case 0x285550u: goto label_285550;
        case 0x285554u: goto label_285554;
        case 0x285558u: goto label_285558;
        case 0x28555cu: goto label_28555c;
        case 0x285560u: goto label_285560;
        case 0x285564u: goto label_285564;
        case 0x285568u: goto label_285568;
        case 0x28556cu: goto label_28556c;
        case 0x285570u: goto label_285570;
        case 0x285574u: goto label_285574;
        case 0x285578u: goto label_285578;
        case 0x28557cu: goto label_28557c;
        case 0x285580u: goto label_285580;
        case 0x285584u: goto label_285584;
        case 0x285588u: goto label_285588;
        case 0x28558cu: goto label_28558c;
        case 0x285590u: goto label_285590;
        case 0x285594u: goto label_285594;
        case 0x285598u: goto label_285598;
        case 0x28559cu: goto label_28559c;
        case 0x2855a0u: goto label_2855a0;
        case 0x2855a4u: goto label_2855a4;
        case 0x2855a8u: goto label_2855a8;
        case 0x2855acu: goto label_2855ac;
        case 0x2855b0u: goto label_2855b0;
        case 0x2855b4u: goto label_2855b4;
        case 0x2855b8u: goto label_2855b8;
        case 0x2855bcu: goto label_2855bc;
        case 0x2855c0u: goto label_2855c0;
        case 0x2855c4u: goto label_2855c4;
        case 0x2855c8u: goto label_2855c8;
        case 0x2855ccu: goto label_2855cc;
        case 0x2855d0u: goto label_2855d0;
        case 0x2855d4u: goto label_2855d4;
        case 0x2855d8u: goto label_2855d8;
        case 0x2855dcu: goto label_2855dc;
        case 0x2855e0u: goto label_2855e0;
        case 0x2855e4u: goto label_2855e4;
        case 0x2855e8u: goto label_2855e8;
        case 0x2855ecu: goto label_2855ec;
        case 0x2855f0u: goto label_2855f0;
        case 0x2855f4u: goto label_2855f4;
        case 0x2855f8u: goto label_2855f8;
        case 0x2855fcu: goto label_2855fc;
        case 0x285600u: goto label_285600;
        case 0x285604u: goto label_285604;
        case 0x285608u: goto label_285608;
        case 0x28560cu: goto label_28560c;
        case 0x285610u: goto label_285610;
        case 0x285614u: goto label_285614;
        case 0x285618u: goto label_285618;
        case 0x28561cu: goto label_28561c;
        case 0x285620u: goto label_285620;
        case 0x285624u: goto label_285624;
        case 0x285628u: goto label_285628;
        case 0x28562cu: goto label_28562c;
        case 0x285630u: goto label_285630;
        case 0x285634u: goto label_285634;
        case 0x285638u: goto label_285638;
        case 0x28563cu: goto label_28563c;
        case 0x285640u: goto label_285640;
        case 0x285644u: goto label_285644;
        case 0x285648u: goto label_285648;
        case 0x28564cu: goto label_28564c;
        case 0x285650u: goto label_285650;
        case 0x285654u: goto label_285654;
        case 0x285658u: goto label_285658;
        case 0x28565cu: goto label_28565c;
        case 0x285660u: goto label_285660;
        case 0x285664u: goto label_285664;
        case 0x285668u: goto label_285668;
        case 0x28566cu: goto label_28566c;
        case 0x285670u: goto label_285670;
        case 0x285674u: goto label_285674;
        case 0x285678u: goto label_285678;
        case 0x28567cu: goto label_28567c;
        case 0x285680u: goto label_285680;
        case 0x285684u: goto label_285684;
        case 0x285688u: goto label_285688;
        case 0x28568cu: goto label_28568c;
        case 0x285690u: goto label_285690;
        case 0x285694u: goto label_285694;
        case 0x285698u: goto label_285698;
        case 0x28569cu: goto label_28569c;
        default: break;
    }

    ctx->pc = 0x2846f0u;

label_2846f0:
    // 0x2846f0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2846f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2846f4:
    // 0x2846f4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x2846f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
label_2846f8:
    // 0x2846f8: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x2846f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
label_2846fc:
    // 0x2846fc: 0x24820038  addiu       $v0, $a0, 0x38
    ctx->pc = 0x2846fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 56));
label_284700:
    // 0x284700: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x284700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
label_284704:
    // 0x284704: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x284704u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284708:
    // 0x284708: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x284708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
label_28470c:
    // 0x28470c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x28470cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
label_284710:
    // 0x284710: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x284710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
label_284714:
    // 0x284714: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x284714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
label_284718:
    // 0x284718: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x284718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
label_28471c:
    // 0x28471c: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x28471cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
label_284720:
    // 0x284720: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x284720u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_284724:
    // 0x284724: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x284724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_284728:
    // 0x284728: 0xe7b40120  swc1        $f20, 0x120($sp)
    ctx->pc = 0x284728u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_28472c:
    // 0x28472c: 0xc0a182e  jal         func_2860B8
label_284730:
    if (ctx->pc == 0x284730u) {
        ctx->pc = 0x284730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28472Cu;
        // 0x284730: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284734u;
        goto label_284734;
    }
    ctx->pc = 0x28472Cu;
    SET_GPR_U32(ctx, 31, 0x284734u);
    ctx->pc = 0x284730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28472Cu;
    // 0x284730: 0xafa20074  sw          $v0, 0x74($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2860B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2860B8u, 0x28472Cu, 0x284734u)) {
        return;
    }
    ctx->pc = 0x284734u;
label_284734:
    // 0x284734: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x284734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_284738:
    // 0x284738: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28473c:
    // 0x28473c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x28473cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_284740:
    // 0x284740: 0x10650006  beq         $v1, $a1, . + 4 + (0x6 << 2)
label_284744:
    if (ctx->pc == 0x284744u) {
        ctx->pc = 0x284744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284740u;
        // 0x284744: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284748u;
        goto label_284748;
    }
    ctx->pc = 0x284740u;
    {
        const bool branch_taken_0x284740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x284744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284740u;
        // 0x284744: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284740) {
            ctx->pc = 0x28475Cu;
            goto label_28475c;
        }
    }
    ctx->pc = 0x284748u;
label_284748:
    // 0x284748: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28474c:
    // 0x28474c: 0x10620123  beq         $v1, $v0, . + 4 + (0x123 << 2)
label_284750:
    if (ctx->pc == 0x284750u) {
        ctx->pc = 0x284750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28474Cu;
        // 0x284750: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284754u;
        goto label_284754;
    }
    ctx->pc = 0x28474Cu;
    {
        const bool branch_taken_0x28474c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x284750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28474Cu;
        // 0x284750: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28474c) {
            ctx->pc = 0x284BDCu;
            goto label_284bdc;
        }
    }
    ctx->pc = 0x284754u;
label_284754:
    // 0x284754: 0x100003be  b           . + 4 + (0x3BE << 2)
label_284758:
    if (ctx->pc == 0x284758u) {
        ctx->pc = 0x284758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284754u;
        // 0x284758: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28475Cu;
        goto label_28475c;
    }
    ctx->pc = 0x284754u;
    {
        const bool branch_taken_0x284754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284754u;
        // 0x284758: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284754) {
            ctx->pc = 0x285650u;
            goto label_285650;
        }
    }
    ctx->pc = 0x28475Cu;
label_28475c:
    // 0x28475c: 0x2a62000b  slti        $v0, $s3, 0xB
    ctx->pc = 0x28475cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_284760:
    // 0x284760: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x284760u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_284764:
    // 0x284764: 0x262f00b  movn        $fp, $s3, $v0
    ctx->pc = 0x284764u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19));
label_284768:
    // 0x284768: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x284768u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_28476c:
    // 0x28476c: 0x24636380  addiu       $v1, $v1, 0x6380
    ctx->pc = 0x28476cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 25472));
label_284770:
    // 0x284770: 0x1e1080  sll         $v0, $fp, 2
    ctx->pc = 0x284770u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 2));
label_284774:
    // 0x284774: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x284774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_284778:
    // 0x284778: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x284778u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28477c:
    // 0x28477c: 0x15200008  bnez        $t1, . + 4 + (0x8 << 2)
label_284780:
    if (ctx->pc == 0x284780u) {
        ctx->pc = 0x284780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28477Cu;
        // 0x284780: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284784u;
        goto label_284784;
    }
    ctx->pc = 0x28477Cu;
    {
        const bool branch_taken_0x28477c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x284780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28477Cu;
        // 0x284780: 0x24020102  addiu       $v0, $zero, 0x102 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28477c) {
            ctx->pc = 0x2847A0u;
            goto label_2847a0;
        }
    }
    ctx->pc = 0x284784u;
label_284784:
    // 0x284784: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x284784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_284788:
    // 0x284788: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x284788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_28478c:
    // 0x28478c: 0xc092848  jal         func_24A120
label_284790:
    if (ctx->pc == 0x284790u) {
        ctx->pc = 0x284790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28478Cu;
        // 0x284790: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284794u;
        goto label_284794;
    }
    ctx->pc = 0x28478Cu;
    SET_GPR_U32(ctx, 31, 0x284794u);
    ctx->pc = 0x284790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28478Cu;
    // 0x284790: 0x34840016  ori         $a0, $a0, 0x16 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x28478Cu, 0x284794u)) {
        return;
    }
    ctx->pc = 0x284794u;
label_284794:
    // 0x284794: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x284794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_284798:
    // 0x284798: 0x100003b1  b           . + 4 + (0x3B1 << 2)
label_28479c:
    if (ctx->pc == 0x28479Cu) {
        ctx->pc = 0x28479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284798u;
        // 0x28479c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2847A0u;
        goto label_2847a0;
    }
    ctx->pc = 0x284798u;
    {
        const bool branch_taken_0x284798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28479Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284798u;
        // 0x28479c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284798) {
            ctx->pc = 0x285660u;
            goto label_285660;
        }
    }
    ctx->pc = 0x2847A0u;
label_2847a0:
    // 0x2847a0: 0x1a6000fc  blez        $s3, . + 4 + (0xFC << 2)
label_2847a4:
    if (ctx->pc == 0x2847A4u) {
        ctx->pc = 0x2847A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847A0u;
        // 0x2847a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2847A8u;
        goto label_2847a8;
    }
    ctx->pc = 0x2847A0u;
    {
        const bool branch_taken_0x2847a0 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x2847A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847A0u;
        // 0x2847a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847a0) {
            ctx->pc = 0x284B94u;
            goto label_284b94;
        }
    }
    ctx->pc = 0x2847A8u;
label_2847a8:
    // 0x2847a8: 0x1e17c2  srl         $v0, $fp, 31
    ctx->pc = 0x2847a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 31));
label_2847ac:
    // 0x2847ac: 0x240d000c  addiu       $t5, $zero, 0xC
    ctx->pc = 0x2847acu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2847b0:
    // 0x2847b0: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x2847b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
label_2847b4:
    // 0x2847b4: 0x27e1823  subu        $v1, $s3, $fp
    ctx->pc = 0x2847b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 30)));
label_2847b8:
    // 0x2847b8: 0x25043  sra         $t2, $v0, 1
    ctx->pc = 0x2847b8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 1));
label_2847bc:
    // 0x2847bc: 0x6d8818  mult        $s1, $v1, $t5
    ctx->pc = 0x2847bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_2847c0:
    // 0x2847c0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2847c0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2847c4:
    // 0x2847c4: 0x26a8023  subu        $s0, $s3, $t2
    ctx->pc = 0x2847c4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 10)));
label_2847c8:
    // 0x2847c8: 0x3cb1018  mult        $v0, $fp, $t3
    ctx->pc = 0x2847c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2847cc:
    // 0x2847cc: 0x2412000c  addiu       $s2, $zero, 0xC
    ctx->pc = 0x2847ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2847d0:
    // 0x2847d0: 0x3d37023  subu        $t6, $fp, $s3
    ctx->pc = 0x2847d0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 19)));
label_2847d4:
    // 0x2847d4: 0x27880  sll         $t7, $v0, 2
    ctx->pc = 0x2847d4u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2847d8:
    // 0x2847d8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2847d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2847dc:
    // 0x2847dc: 0x0  nop
    ctx->pc = 0x2847dcu;
    // NOP
label_2847e0:
    // 0x2847e0: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x2847e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_2847e4:
    // 0x2847e4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2847e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2847e8:
    // 0x2847e8: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2847ec:
    if (ctx->pc == 0x2847ECu) {
        ctx->pc = 0x2847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847E8u;
        // 0x2847ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2847F0u;
        goto label_2847f0;
    }
    ctx->pc = 0x2847E8u;
    {
        const bool branch_taken_0x2847e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2847ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847E8u;
        // 0x2847ec: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847e8) {
            ctx->pc = 0x284910u;
            goto label_284910;
        }
    }
    ctx->pc = 0x2847F0u;
label_2847f0:
    // 0x2847f0: 0x1bc000db  blez        $fp, . + 4 + (0xDB << 2)
label_2847f4:
    if (ctx->pc == 0x2847F4u) {
        ctx->pc = 0x2847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847F0u;
        // 0x2847f4: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2847F8u;
        goto label_2847f8;
    }
    ctx->pc = 0x2847F0u;
    {
        const bool branch_taken_0x2847f0 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x2847F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2847F0u;
        // 0x2847f4: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2847f0) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x2847F8u;
label_2847f8:
    // 0x2847f8: 0x11e1018  mult        $v0, $t0, $fp
    ctx->pc = 0x2847f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2847fc:
    // 0x2847fc: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2847fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_284800:
    // 0x284800: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x284800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_284804:
    // 0x284804: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x284804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_284808:
    // 0x284808: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284808u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28480c:
    // 0x28480c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x28480cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_284810:
    // 0x284810: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_284814:
    if (ctx->pc == 0x284814u) {
        ctx->pc = 0x284814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284810u;
        // 0x284814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284818u;
        goto label_284818;
    }
    ctx->pc = 0x284810u;
    {
        const bool branch_taken_0x284810 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284810u;
        // 0x284814: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284810) {
            ctx->pc = 0x284858u;
            goto label_284858;
        }
    }
    ctx->pc = 0x284818u;
label_284818:
    // 0x284818: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28481c:
    // 0x28481c: 0xc6c40000  lwc1        $f4, 0x0($s6)
    ctx->pc = 0x28481cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284820:
    // 0x284820: 0xc6c50004  lwc1        $f5, 0x4($s6)
    ctx->pc = 0x284820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_284824:
    // 0x284824: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x284824u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284828:
    // 0x284828: 0xc6c40008  lwc1        $f4, 0x8($s6)
    ctx->pc = 0x284828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28482c:
    // 0x28482c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x28482cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284830:
    // 0x284830: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284834:
    // 0x284834: 0x46032842  mul.s       $f1, $f5, $f3
    ctx->pc = 0x284834u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_284838:
    // 0x284838: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28483c:
    // 0x28483c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28483cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284840:
    // 0x284840: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x284840u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284844:
    // 0x284844: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284844u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284848:
    // 0x284848: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x284848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_28484c:
    // 0x28484c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28484cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_284850:
    // 0x284850: 0x10a000c3  beqz        $a1, . + 4 + (0xC3 << 2)
label_284854:
    if (ctx->pc == 0x284854u) {
        ctx->pc = 0x284854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284850u;
        // 0x284854: 0x26c6000c  addiu       $a2, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284858u;
        goto label_284858;
    }
    ctx->pc = 0x284850u;
    {
        const bool branch_taken_0x284850 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284850u;
        // 0x284854: 0x26c6000c  addiu       $a2, $s6, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284850) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x284858u;
label_284858:
    // 0x284858: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x284858u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28485c:
    // 0x28485c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28485cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284860:
    // 0x284860: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x284860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284864:
    // 0x284864: 0x0  nop
    ctx->pc = 0x284864u;
    // NOP
label_284868:
    // 0x284868: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x284868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28486c:
    // 0x28486c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28486cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284870:
    // 0x284870: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x284870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284874:
    // 0x284874: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284874u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284878:
    // 0x284878: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x284878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28487c:
    // 0x28487c: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x28487cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_284880:
    // 0x284880: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x284880u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_284884:
    // 0x284884: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284888:
    // 0x284888: 0xc4c50004  lwc1        $f5, 0x4($a2)
    ctx->pc = 0x284888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28488c:
    // 0x28488c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28488cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284890:
    // 0x284890: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x284890u;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_284894:
    // 0x284894: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x284894u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_284898:
    // 0x284898: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28489c:
    // 0x28489c: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x28489cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2848a0:
    // 0x2848a0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2848a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2848a4:
    // 0x2848a4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2848a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2848a8:
    // 0x2848a8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2848a8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2848ac:
    // 0x2848ac: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2848acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2848b0:
    // 0x2848b0: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2848b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2848b4:
    // 0x2848b4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2848b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2848b8:
    // 0x2848b8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2848b8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2848bc:
    // 0x2848bc: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2848bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2848c0:
    // 0x2848c0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2848c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2848c4:
    // 0x2848c4: 0xc4c50010  lwc1        $f5, 0x10($a2)
    ctx->pc = 0x2848c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2848c8:
    // 0x2848c8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2848c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2848cc:
    // 0x2848cc: 0x460328c2  mul.s       $f3, $f5, $f3
    ctx->pc = 0x2848ccu;
    ctx->f[3] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_2848d0:
    // 0x2848d0: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2848d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2848d4:
    // 0x2848d4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2848d4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2848d8:
    // 0x2848d8: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x2848d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2848dc:
    // 0x2848dc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2848dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2848e0:
    // 0x2848e0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2848e0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2848e4:
    // 0x2848e4: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2848e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2848e8:
    // 0x2848e8: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2848e8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2848ec:
    // 0x2848ec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2848ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2848f0:
    // 0x2848f0: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x2848f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_2848f4:
    // 0x2848f4: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2848f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_2848f8:
    // 0x2848f8: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x2848f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_2848fc:
    // 0x2848fc: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_284900:
    if (ctx->pc == 0x284900u) {
        ctx->pc = 0x284900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848FCu;
        // 0x284900: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284904u;
        goto label_284904;
    }
    ctx->pc = 0x2848FCu;
    {
        const bool branch_taken_0x2848fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x284900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2848FCu;
        // 0x284900: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2848fc) {
            ctx->pc = 0x284868u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284868;
        }
    }
    ctx->pc = 0x284904u;
label_284904:
    // 0x284904: 0x10000097  b           . + 4 + (0x97 << 2)
label_284908:
    if (ctx->pc == 0x284908u) {
        ctx->pc = 0x284908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284904u;
        // 0x284908: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28490Cu;
        goto label_28490c;
    }
    ctx->pc = 0x284904u;
    {
        const bool branch_taken_0x284904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284904u;
        // 0x284908: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284904) {
            ctx->pc = 0x284B64u;
            goto label_284b64;
        }
    }
    ctx->pc = 0x28490Cu;
label_28490c:
    // 0x28490c: 0x0  nop
    ctx->pc = 0x28490cu;
    // NOP
label_284910:
    // 0x284910: 0x110102a  slt         $v0, $t0, $s0
    ctx->pc = 0x284910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_284914:
    // 0x284914: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
label_284918:
    if (ctx->pc == 0x284918u) {
        ctx->pc = 0x28491Cu;
        goto label_28491c;
    }
    ctx->pc = 0x284914u;
    {
        const bool branch_taken_0x284914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284914) {
            ctx->pc = 0x284A40u;
            goto label_284a40;
        }
    }
    ctx->pc = 0x28491Cu;
label_28491c:
    // 0x28491c: 0x1bc00090  blez        $fp, . + 4 + (0x90 << 2)
label_284920:
    if (ctx->pc == 0x284920u) {
        ctx->pc = 0x284920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28491Cu;
        // 0x284920: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284924u;
        goto label_284924;
    }
    ctx->pc = 0x28491Cu;
    {
        const bool branch_taken_0x28491c = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x284920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28491Cu;
        // 0x284920: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28491c) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x284924u;
label_284924:
    // 0x284924: 0x10b1023  subu        $v0, $t0, $t3
    ctx->pc = 0x284924u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
label_284928:
    // 0x284928: 0x1e91821  addu        $v1, $t7, $t1
    ctx->pc = 0x284928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 9)));
label_28492c:
    // 0x28492c: 0x522818  mult        $a1, $v0, $s2
    ctx->pc = 0x28492cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_284930:
    // 0x284930: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x284930u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284934:
    // 0x284934: 0xb62021  addu        $a0, $a1, $s6
    ctx->pc = 0x284934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_284938:
    // 0x284938: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x284938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28493c:
    // 0x28493c: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x28493cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_284940:
    // 0x284940: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_284944:
    if (ctx->pc == 0x284944u) {
        ctx->pc = 0x284944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284940u;
        // 0x284944: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284948u;
        goto label_284948;
    }
    ctx->pc = 0x284940u;
    {
        const bool branch_taken_0x284940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284940u;
        // 0x284944: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284940) {
            ctx->pc = 0x284988u;
            goto label_284988;
        }
    }
    ctx->pc = 0x284948u;
label_284948:
    // 0x284948: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x284948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28494c:
    // 0x28494c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x28494cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284950:
    // 0x284950: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x284950u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284954:
    // 0x284954: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284954u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284958:
    // 0x284958: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x284958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28495c:
    // 0x28495c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28495cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284960:
    // 0x284960: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x284960u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284964:
    // 0x284964: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284968:
    // 0x284968: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x284968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28496c:
    // 0x28496c: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x28496cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284970:
    // 0x284970: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x284970u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284974:
    // 0x284974: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284978:
    // 0x284978: 0x24670004  addiu       $a3, $v1, 0x4
    ctx->pc = 0x284978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_28497c:
    // 0x28497c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28497cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_284980:
    // 0x284980: 0x10a00077  beqz        $a1, . + 4 + (0x77 << 2)
label_284984:
    if (ctx->pc == 0x284984u) {
        ctx->pc = 0x284984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284980u;
        // 0x284984: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284988u;
        goto label_284988;
    }
    ctx->pc = 0x284980u;
    {
        const bool branch_taken_0x284980 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284980u;
        // 0x284984: 0x2486000c  addiu       $a2, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284980) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x284988u;
label_284988:
    // 0x284988: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x284988u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28498c:
    // 0x28498c: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x28498cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_284990:
    // 0x284990: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x284990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284994:
    // 0x284994: 0x0  nop
    ctx->pc = 0x284994u;
    // NOP
label_284998:
    // 0x284998: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x284998u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_28499c:
    // 0x28499c: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x28499cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2849a0:
    // 0x2849a0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x2849a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2849a4:
    // 0x2849a4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2849a4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2849a8:
    // 0x2849a8: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2849a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2849ac:
    // 0x2849ac: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2849acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2849b0:
    // 0x2849b0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2849b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2849b4:
    // 0x2849b4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2849b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2849b8:
    // 0x2849b8: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x2849b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2849bc:
    // 0x2849bc: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2849bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2849c0:
    // 0x2849c0: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2849c0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2849c4:
    // 0x2849c4: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2849c4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_2849c8:
    // 0x2849c8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x2849c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_2849cc:
    // 0x2849cc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2849ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2849d0:
    // 0x2849d0: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x2849d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2849d4:
    // 0x2849d4: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2849d4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2849d8:
    // 0x2849d8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x2849d8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_2849dc:
    // 0x2849dc: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x2849dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2849e0:
    // 0x2849e0: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x2849e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2849e4:
    // 0x2849e4: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2849e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2849e8:
    // 0x2849e8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2849e8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_2849ec:
    // 0x2849ec: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2849ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_2849f0:
    // 0x2849f0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2849f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_2849f4:
    // 0x2849f4: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x2849f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2849f8:
    // 0x2849f8: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x2849f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2849fc:
    // 0x2849fc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x2849fcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284a00:
    // 0x284a00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x284a00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_284a04:
    // 0x284a04: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284a04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284a08:
    // 0x284a08: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x284a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284a0c:
    // 0x284a0c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x284a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284a10:
    // 0x284a10: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284a10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284a14:
    // 0x284a14: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x284a14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_284a18:
    // 0x284a18: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284a18u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284a1c:
    // 0x284a1c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x284a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_284a20:
    // 0x284a20: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x284a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_284a24:
    // 0x284a24: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x284a24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_284a28:
    // 0x284a28: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x284a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_284a2c:
    // 0x284a2c: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_284a30:
    if (ctx->pc == 0x284A30u) {
        ctx->pc = 0x284A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A2Cu;
        // 0x284a30: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284A34u;
        goto label_284a34;
    }
    ctx->pc = 0x284A2Cu;
    {
        const bool branch_taken_0x284a2c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x284A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A2Cu;
        // 0x284a30: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a2c) {
            ctx->pc = 0x284998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284998;
        }
    }
    ctx->pc = 0x284A34u;
label_284a34:
    // 0x284a34: 0x1000004b  b           . + 4 + (0x4B << 2)
label_284a38:
    if (ctx->pc == 0x284A38u) {
        ctx->pc = 0x284A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A34u;
        // 0x284a38: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284A3Cu;
        goto label_284a3c;
    }
    ctx->pc = 0x284A34u;
    {
        const bool branch_taken_0x284a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A34u;
        // 0x284a38: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a34) {
            ctx->pc = 0x284B64u;
            goto label_284b64;
        }
    }
    ctx->pc = 0x284A3Cu;
label_284a3c:
    // 0x284a3c: 0x0  nop
    ctx->pc = 0x284a3cu;
    // NOP
label_284a40:
    // 0x284a40: 0x1bc00047  blez        $fp, . + 4 + (0x47 << 2)
label_284a44:
    if (ctx->pc == 0x284A44u) {
        ctx->pc = 0x284A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A40u;
        // 0x284a44: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284A48u;
        goto label_284a48;
    }
    ctx->pc = 0x284A40u;
    {
        const bool branch_taken_0x284a40 = (GPR_S64(ctx, 30) <= 0);
        ctx->pc = 0x284A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A40u;
        // 0x284a44: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a40) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x284A48u;
label_284a48:
    // 0x284a48: 0x1c81021  addu        $v0, $t6, $t0
    ctx->pc = 0x284a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 8)));
label_284a4c:
    // 0x284a4c: 0x2362021  addu        $a0, $s1, $s6
    ctx->pc = 0x284a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_284a50:
    // 0x284a50: 0x3c21018  mult        $v0, $fp, $v0
    ctx->pc = 0x284a50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_284a54:
    // 0x284a54: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x284a54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_284a58:
    // 0x284a58: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x284a58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284a5c:
    // 0x284a5c: 0x30a30001  andi        $v1, $a1, 0x1
    ctx->pc = 0x284a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_284a60:
    // 0x284a60: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284a60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284a64:
    // 0x284a64: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x284a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_284a68:
    // 0x284a68: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
label_284a6c:
    if (ctx->pc == 0x284A6Cu) {
        ctx->pc = 0x284A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A68u;
        // 0x284a6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284A70u;
        goto label_284a70;
    }
    ctx->pc = 0x284A68u;
    {
        const bool branch_taken_0x284a68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284A68u;
        // 0x284a6c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284a68) {
            ctx->pc = 0x284AB0u;
            goto label_284ab0;
        }
    }
    ctx->pc = 0x284A70u;
label_284a70:
    // 0x284a70: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284a74:
    // 0x284a74: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x284a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284a78:
    // 0x284a78: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x284a78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284a7c:
    // 0x284a7c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284a7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284a80:
    // 0x284a80: 0xc4840004  lwc1        $f4, 0x4($a0)
    ctx->pc = 0x284a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284a84:
    // 0x284a84: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284a88:
    // 0x284a88: 0x46032042  mul.s       $f1, $f4, $f3
    ctx->pc = 0x284a88u;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284a8c:
    // 0x284a8c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284a8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284a90:
    // 0x284a90: 0xc4840008  lwc1        $f4, 0x8($a0)
    ctx->pc = 0x284a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284a94:
    // 0x284a94: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284a98:
    // 0x284a98: 0x46032082  mul.s       $f2, $f4, $f3
    ctx->pc = 0x284a98u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284a9c:
    // 0x284a9c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284a9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284aa0:
    // 0x284aa0: 0x24460004  addiu       $a2, $v0, 0x4
    ctx->pc = 0x284aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_284aa4:
    // 0x284aa4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x284aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_284aa8:
    // 0x284aa8: 0x10a0002d  beqz        $a1, . + 4 + (0x2D << 2)
label_284aac:
    if (ctx->pc == 0x284AACu) {
        ctx->pc = 0x284AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AA8u;
        // 0x284aac: 0x2487000c  addiu       $a3, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284AB0u;
        goto label_284ab0;
    }
    ctx->pc = 0x284AA8u;
    {
        const bool branch_taken_0x284aa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284AA8u;
        // 0x284aac: 0x2487000c  addiu       $a3, $a0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284aa8) {
            ctx->pc = 0x284B60u;
            goto label_284b60;
        }
    }
    ctx->pc = 0x284AB0u;
label_284ab0:
    // 0x284ab0: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x284ab0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_284ab4:
    // 0x284ab4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x284ab4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_284ab8:
    // 0x284ab8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x284ab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284abc:
    // 0x284abc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x284abcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_284ac0:
    // 0x284ac0: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x284ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284ac4:
    // 0x284ac4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284ac8:
    // 0x284ac8: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x284ac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284acc:
    // 0x284acc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284accu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284ad0:
    // 0x284ad0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x284ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_284ad4:
    // 0x284ad4: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x284ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_284ad8:
    // 0x284ad8: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x284ad8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_284adc:
    // 0x284adc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284adcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284ae0:
    // 0x284ae0: 0xc4c40004  lwc1        $f4, 0x4($a2)
    ctx->pc = 0x284ae0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284ae4:
    // 0x284ae4: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284ae4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284ae8:
    // 0x284ae8: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284ae8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284aec:
    // 0x284aec: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x284aecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_284af0:
    // 0x284af0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284af4:
    // 0x284af4: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x284af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284af8:
    // 0x284af8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x284af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284afc:
    // 0x284afc: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284afcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284b00:
    // 0x284b00: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x284b00u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_284b04:
    // 0x284b04: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284b04u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284b08:
    // 0x284b08: 0xc484000c  lwc1        $f4, 0xC($a0)
    ctx->pc = 0x284b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284b0c:
    // 0x284b0c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x284b0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284b10:
    // 0x284b10: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284b10u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284b14:
    // 0x284b14: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x284b14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_284b18:
    // 0x284b18: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x284b18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_284b1c:
    // 0x284b1c: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x284b1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284b20:
    // 0x284b20: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x284b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284b24:
    // 0x284b24: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284b24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284b28:
    // 0x284b28: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x284b28u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_284b2c:
    // 0x284b2c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x284b2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_284b30:
    // 0x284b30: 0xc4640014  lwc1        $f4, 0x14($v1)
    ctx->pc = 0x284b30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_284b34:
    // 0x284b34: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x284b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_284b38:
    // 0x284b38: 0x460320c2  mul.s       $f3, $f4, $f3
    ctx->pc = 0x284b38u;
    ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_284b3c:
    // 0x284b3c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x284b3cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_284b40:
    // 0x284b40: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x284b40u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_284b44:
    // 0x284b44: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x284b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_284b48:
    // 0x284b48: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x284b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_284b4c:
    // 0x284b4c: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x284b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_284b50:
    // 0x284b50: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x284b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_284b54:
    // 0x284b54: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_284b58:
    if (ctx->pc == 0x284B58u) {
        ctx->pc = 0x284B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B54u;
        // 0x284b58: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B5Cu;
        goto label_284b5c;
    }
    ctx->pc = 0x284B54u;
    {
        const bool branch_taken_0x284b54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x284B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B54u;
        // 0x284b58: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284b54) {
            ctx->pc = 0x284AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284ac0;
        }
    }
    ctx->pc = 0x284B5Cu;
label_284b5c:
    // 0x284b5c: 0x0  nop
    ctx->pc = 0x284b5cu;
    // NOP
label_284b60:
    // 0x284b60: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x284b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_284b64:
    // 0x284b64: 0x400013  mtlo        $v0
    ctx->pc = 0x284b64u;
    ctx->lo = GPR_U64(ctx, 2);
label_284b68:
    // 0x284b68: 0x710d1800  madd        $v1, $t0, $t5
    ctx->pc = 0x284b68u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 13); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_284b6c:
    // 0x284b6c: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x284b6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_284b70:
    // 0x284b70: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x284b70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_284b74:
    // 0x284b74: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x284b74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_284b78:
    // 0x284b78: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x284b78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_284b7c:
    // 0x284b7c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x284b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_284b80:
    // 0x284b80: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x284b80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_284b84:
    // 0x284b84: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x284b84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_284b88:
    // 0x284b88: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x284b88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
label_284b8c:
    // 0x284b8c: 0x5440ff14  bnel        $v0, $zero, . + 4 + (-0xEC << 2)
label_284b90:
    if (ctx->pc == 0x284B90u) {
        ctx->pc = 0x284B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284B8Cu;
        // 0x284b90: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284B94u;
        goto label_284b94;
    }
    ctx->pc = 0x284B8Cu;
    {
        const bool branch_taken_0x284b8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284b8c) {
            ctx->pc = 0x284B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284B8Cu;
            // 0x284b90: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2847E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2847e0;
        }
    }
    ctx->pc = 0x284B94u;
label_284b94:
    // 0x284b94: 0x8fa80074  lw          $t0, 0x74($sp)
    ctx->pc = 0x284b94u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_284b98:
    // 0x284b98: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x284b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_284b9c:
    // 0x284b9c: 0x1000013  mtlo        $t0
    ctx->pc = 0x284b9cu;
    ctx->lo = GPR_U64(ctx, 8);
label_284ba0:
    // 0x284ba0: 0x6909001f  ldl         $t1, 0x1F($t0)
    ctx->pc = 0x284ba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_284ba4:
    // 0x284ba4: 0x6d090018  ldr         $t1, 0x18($t0)
    ctx->pc = 0x284ba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_284ba8:
    // 0x284ba8: 0x8d030020  lw          $v1, 0x20($t0)
    ctx->pc = 0x284ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_284bac:
    // 0x284bac: 0xb1090007  sdl         $t1, 0x7($t0)
    ctx->pc = 0x284bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_284bb0:
    // 0x284bb0: 0xb5090000  sdr         $t1, 0x0($t0)
    ctx->pc = 0x284bb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_284bb4:
    // 0x284bb4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x284bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
label_284bb8:
    // 0x284bb8: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x284bb8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_284bbc:
    // 0x284bbc: 0x6844fffb  ldl         $a0, -0x5($v0)
    ctx->pc = 0x284bbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967291); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_284bc0:
    // 0x284bc0: 0x6c44fff4  ldr         $a0, -0xC($v0)
    ctx->pc = 0x284bc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4294967284); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_284bc4:
    // 0x284bc4: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x284bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_284bc8:
    // 0x284bc8: 0xb0440013  sdl         $a0, 0x13($v0)
    ctx->pc = 0x284bc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_284bcc:
    // 0x284bcc: 0xb444000c  sdr         $a0, 0xC($v0)
    ctx->pc = 0x284bccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_284bd0:
    // 0x284bd0: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x284bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_284bd4:
    // 0x284bd4: 0x100002a5  b           . + 4 + (0x2A5 << 2)
label_284bd8:
    if (ctx->pc == 0x284BD8u) {
        ctx->pc = 0x284BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BD4u;
        // 0x284bd8: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BDCu;
        goto label_284bdc;
    }
    ctx->pc = 0x284BD4u;
    {
        const bool branch_taken_0x284bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BD4u;
        // 0x284bd8: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bd4) {
            ctx->pc = 0x28566Cu;
            goto label_28566c;
        }
    }
    ctx->pc = 0x284BDCu;
label_284bdc:
    // 0x284bdc: 0x2a63000b  slti        $v1, $s3, 0xB
    ctx->pc = 0x284bdcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)11) ? 1 : 0);
label_284be0:
    // 0x284be0: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x284be0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_284be4:
    // 0x284be4: 0x263f00b  movn        $fp, $s3, $v1
    ctx->pc = 0x284be4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 30, GPR_U64(ctx, 19));
label_284be8:
    // 0x284be8: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x284be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_284bec:
    // 0x284bec: 0x104000c9  beqz        $v0, . + 4 + (0xC9 << 2)
label_284bf0:
    if (ctx->pc == 0x284BF0u) {
        ctx->pc = 0x284BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BECu;
        // 0x284bf0: 0x1e87c3  sra         $s0, $fp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284BF4u;
        goto label_284bf4;
    }
    ctx->pc = 0x284BECu;
    {
        const bool branch_taken_0x284bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284BECu;
        // 0x284bf0: 0x1e87c3  sra         $s0, $fp, 31 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 30), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284bec) {
            ctx->pc = 0x284F14u;
            goto label_284f14;
        }
    }
    ctx->pc = 0x284BF4u;
label_284bf4:
    // 0x284bf4: 0x3c110073  lui         $s1, 0x73
    ctx->pc = 0x284bf4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
label_284bf8:
    // 0x284bf8: 0x3d01023  subu        $v0, $fp, $s0
    ctx->pc = 0x284bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
label_284bfc:
    // 0x284bfc: 0x26230fc8  addiu       $v1, $s1, 0xFC8
    ctx->pc = 0x284bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4040));
label_284c00:
    // 0x284c00: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x284c00u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_284c04:
    // 0x284c04: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x284c04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_284c08:
    // 0x284c08: 0x26950001  addiu       $s5, $s4, 0x1
    ctx->pc = 0x284c08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_284c0c:
    // 0x284c0c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x284c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_284c10:
    // 0x284c10: 0x159080  sll         $s2, $s5, 2
    ctx->pc = 0x284c10u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_284c14:
    // 0x284c14: 0x27b70020  addiu       $s7, $sp, 0x20
    ctx->pc = 0x284c14u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_284c18:
    // 0x284c18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284c1c:
    // 0x284c1c: 0x40f809  jalr        $v0
label_284c20:
    if (ctx->pc == 0x284C20u) {
        ctx->pc = 0x284C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C1Cu;
        // 0x284c20: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C24u;
        goto label_284c24;
    }
    ctx->pc = 0x284C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284C24u);
        ctx->pc = 0x284C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C1Cu;
        // 0x284c20: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284C1Cu, 0x284C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284C24u;
label_284c24:
    // 0x284c24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284c28:
    // 0x284c28: 0x1480000d  bnez        $a0, . + 4 + (0xD << 2)
label_284c2c:
    if (ctx->pc == 0x284C2Cu) {
        ctx->pc = 0x284C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C28u;
        // 0x284c2c: 0xafb00078  sw          $s0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C30u;
        goto label_284c30;
    }
    ctx->pc = 0x284C28u;
    {
        const bool branch_taken_0x284c28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x284C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C28u;
        // 0x284c2c: 0xafb00078  sw          $s0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c28) {
            ctx->pc = 0x284C60u;
            goto label_284c60;
        }
    }
    ctx->pc = 0x284C30u;
label_284c30:
    // 0x284c30: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x284c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_284c34:
    // 0x284c34: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x284c34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_284c38:
    // 0x284c38: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x284c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_284c3c:
    // 0x284c3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x284c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284c40:
    // 0x284c40: 0xc092848  jal         func_24A120
label_284c44:
    if (ctx->pc == 0x284C44u) {
        ctx->pc = 0x284C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C40u;
        // 0x284c44: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C48u;
        goto label_284c48;
    }
    ctx->pc = 0x284C40u;
    SET_GPR_U32(ctx, 31, 0x284C48u);
    ctx->pc = 0x284C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C40u;
    // 0x284c44: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x284C40u, 0x284C48u)) {
        return;
    }
    ctx->pc = 0x284C48u;
label_284c48:
    // 0x284c48: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x284c48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_284c4c:
    // 0x284c4c: 0xc09281a  jal         func_24A068
label_284c50:
    if (ctx->pc == 0x284C50u) {
        ctx->pc = 0x284C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C4Cu;
        // 0x284c50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C54u;
        goto label_284c54;
    }
    ctx->pc = 0x284C4Cu;
    SET_GPR_U32(ctx, 31, 0x284C54u);
    ctx->pc = 0x284C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284C4Cu;
    // 0x284c50: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x284C4Cu, 0x284C54u)) {
        return;
    }
    ctx->pc = 0x284C54u;
label_284c54:
    // 0x284c54: 0x10000046  b           . + 4 + (0x46 << 2)
label_284c58:
    if (ctx->pc == 0x284C58u) {
        ctx->pc = 0x284C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C54u;
        // 0x284c58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C5Cu;
        goto label_284c5c;
    }
    ctx->pc = 0x284C54u;
    {
        const bool branch_taken_0x284c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C54u;
        // 0x284c58: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c54) {
            ctx->pc = 0x284D70u;
            goto label_284d70;
        }
    }
    ctx->pc = 0x284C5Cu;
label_284c5c:
    // 0x284c5c: 0x0  nop
    ctx->pc = 0x284c5cu;
    // NOP
label_284c60:
    // 0x284c60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284c64:
    // 0x284c64: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x284c64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284c68:
    // 0x284c68: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_284c6c:
    // 0x284c6c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x284c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_284c70:
    // 0x284c70: 0x75182a  slt         $v1, $v1, $s5
    ctx->pc = 0x284c70u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_284c74:
    // 0x284c74: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
label_284c78:
    if (ctx->pc == 0x284C78u) {
        ctx->pc = 0x284C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C74u;
        // 0x284c78: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C7Cu;
        goto label_284c7c;
    }
    ctx->pc = 0x284C74u;
    {
        const bool branch_taken_0x284c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C74u;
        // 0x284c78: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c74) {
            ctx->pc = 0x284D6Cu;
            goto label_284d6c;
        }
    }
    ctx->pc = 0x284C7Cu;
label_284c7c:
    // 0x284c7c: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x284c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_284c80:
    // 0x284c80: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x284c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_284c84:
    // 0x284c84: 0x31023  negu        $v0, $v1
    ctx->pc = 0x284c84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_284c88:
    // 0x284c88: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x284c88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284c8c:
    // 0x284c8c: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_284c90:
    if (ctx->pc == 0x284C90u) {
        ctx->pc = 0x284C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C8Cu;
        // 0x284c90: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284C94u;
        goto label_284c94;
    }
    ctx->pc = 0x284C8Cu;
    {
        const bool branch_taken_0x284c8c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C8Cu;
        // 0x284c90: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c8c) {
            ctx->pc = 0x284D00u;
            goto label_284d00;
        }
    }
    ctx->pc = 0x284C94u;
label_284c94:
    // 0x284c94: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x284c94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_284c98:
    // 0x284c98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_284c9c:
    if (ctx->pc == 0x284C9Cu) {
        ctx->pc = 0x284C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C98u;
        // 0x284c9c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284CA0u;
        goto label_284ca0;
    }
    ctx->pc = 0x284C98u;
    {
        const bool branch_taken_0x284c98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284C98u;
        // 0x284c9c: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284c98) {
            ctx->pc = 0x284CE0u;
            goto label_284ce0;
        }
    }
    ctx->pc = 0x284CA0u;
label_284ca0:
    // 0x284ca0: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_284ca4:
    if (ctx->pc == 0x284CA4u) {
        ctx->pc = 0x284CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CA0u;
        // 0x284ca4: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284CA8u;
        goto label_284ca8;
    }
    ctx->pc = 0x284CA0u;
    {
        const bool branch_taken_0x284ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284ca0) {
            ctx->pc = 0x284CA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284CA0u;
            // 0x284ca4: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284CC8u;
            goto label_284cc8;
        }
    }
    ctx->pc = 0x284CA8u;
label_284ca8:
    // 0x284ca8: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x284ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_284cac:
    // 0x284cac: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x284cacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_284cb0:
    // 0x284cb0: 0x8ce5fff8  lw          $a1, -0x8($a3)
    ctx->pc = 0x284cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_284cb4:
    // 0x284cb4: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x284cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_284cb8:
    // 0x284cb8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284cbc:
    // 0x284cbc: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284cc0:
    // 0x284cc0: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x284cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_284cc4:
    // 0x284cc4: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_284cc8:
    // 0x284cc8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284ccc:
    // 0x284ccc: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x284cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_284cd0:
    // 0x284cd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284cd4:
    // 0x284cd4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284cd8:
    // 0x284cd8: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x284cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_284cdc:
    // 0x284cdc: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x284cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_284ce0:
    // 0x284ce0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_284ce4:
    // 0x284ce4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284ce8:
    // 0x284ce8: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x284ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_284cec:
    // 0x284cec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284cf0:
    // 0x284cf0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284cf4:
    // 0x284cf4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x284cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_284cf8:
    // 0x284cf8: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_284cfc:
    if (ctx->pc == 0x284CFCu) {
        ctx->pc = 0x284CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF8u;
        // 0x284cfc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284D00u;
        goto label_284d00;
    }
    ctx->pc = 0x284CF8u;
    {
        const bool branch_taken_0x284cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284CF8u;
        // 0x284cfc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284cf8) {
            ctx->pc = 0x284D6Cu;
            goto label_284d6c;
        }
    }
    ctx->pc = 0x284D00u;
label_284d00:
    // 0x284d00: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x284d00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_284d04:
    // 0x284d04: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x284d04u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_284d08:
    // 0x284d08: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x284d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_284d0c:
    // 0x284d0c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x284d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_284d10:
    // 0x284d10: 0x8d05fff8  lw          $a1, -0x8($t0)
    ctx->pc = 0x284d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
label_284d14:
    // 0x284d14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284d14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284d18:
    // 0x284d18: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284d18u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284d1c:
    // 0x284d1c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x284d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_284d20:
    // 0x284d20: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x284d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_284d24:
    // 0x284d24: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x284d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
label_284d28:
    // 0x284d28: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284d2c:
    // 0x284d2c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284d30:
    // 0x284d30: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x284d30u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_284d34:
    // 0x284d34: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x284d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_284d38:
    // 0x284d38: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x284d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_284d3c:
    // 0x284d3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284d40:
    // 0x284d40: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284d44:
    // 0x284d44: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x284d44u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_284d48:
    // 0x284d48: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x284d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_284d4c:
    // 0x284d4c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x284d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_284d50:
    // 0x284d50: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x284d50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_284d54:
    // 0x284d54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284d54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284d58:
    // 0x284d58: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x284d58u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_284d5c:
    // 0x284d5c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284d60:
    // 0x284d60: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x284d60u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_284d64:
    // 0x284d64: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_284d68:
    if (ctx->pc == 0x284D68u) {
        ctx->pc = 0x284D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D64u;
        // 0x284d68: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284D6Cu;
        goto label_284d6c;
    }
    ctx->pc = 0x284D64u;
    {
        const bool branch_taken_0x284d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D64u;
        // 0x284d68: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d64) {
            ctx->pc = 0x284D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284d08;
        }
    }
    ctx->pc = 0x284D6Cu;
label_284d6c:
    // 0x284d6c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x284d6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_284d70:
    // 0x284d70: 0x12a0023d  beqz        $s5, . + 4 + (0x23D << 2)
label_284d74:
    if (ctx->pc == 0x284D74u) {
        ctx->pc = 0x284D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D70u;
        // 0x284d74: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284D78u;
        goto label_284d78;
    }
    ctx->pc = 0x284D70u;
    {
        const bool branch_taken_0x284d70 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x284D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284D70u;
        // 0x284d74: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284d70) {
            ctx->pc = 0x285668u;
            goto label_285668;
        }
    }
    ctx->pc = 0x284D78u;
label_284d78:
    // 0x284d78: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x284d78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_284d7c:
    // 0x284d7c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x284d7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_284d80:
    // 0x284d80: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x284d80u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_284d84:
    // 0x284d84: 0x24700fc8  addiu       $s0, $v1, 0xFC8
    ctx->pc = 0x284d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_284d88:
    // 0x284d88: 0x3c91023  subu        $v0, $fp, $t1
    ctx->pc = 0x284d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_284d8c:
    // 0x284d8c: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x284d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_284d90:
    // 0x284d90: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x284d90u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_284d94:
    // 0x284d94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x284d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_284d98:
    // 0x284d98: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x284d98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_284d9c:
    // 0x284d9c: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x284d9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_284da0:
    // 0x284da0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x284da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_284da4:
    // 0x284da4: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x284da4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_284da8:
    // 0x284da8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x284da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_284dac:
    // 0x284dac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x284dacu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_284db0:
    // 0x284db0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x284db0u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_284db4:
    // 0x284db4: 0x60f809  jalr        $v1
label_284db8:
    if (ctx->pc == 0x284DB8u) {
        ctx->pc = 0x284DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DB4u;
        // 0x284db8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DBCu;
        goto label_284dbc;
    }
    ctx->pc = 0x284DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x284DBCu);
        ctx->pc = 0x284DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DB4u;
        // 0x284db8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284DB4u, 0x284DBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284DBCu;
label_284dbc:
    // 0x284dbc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x284dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_284dc0:
    // 0x284dc0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x284dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_284dc4:
    // 0x284dc4: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x284dc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_284dc8:
    // 0x284dc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284dc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284dcc:
    // 0x284dcc: 0x40f809  jalr        $v0
label_284dd0:
    if (ctx->pc == 0x284DD0u) {
        ctx->pc = 0x284DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DCCu;
        // 0x284dd0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DD4u;
        goto label_284dd4;
    }
    ctx->pc = 0x284DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284DD4u);
        ctx->pc = 0x284DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DCCu;
        // 0x284dd0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284DCCu, 0x284DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284DD4u;
label_284dd4:
    // 0x284dd4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x284dd4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284dd8:
    // 0x284dd8: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
label_284ddc:
    if (ctx->pc == 0x284DDCu) {
        ctx->pc = 0x284DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DD8u;
        // 0x284ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DE0u;
        goto label_284de0;
    }
    ctx->pc = 0x284DD8u;
    {
        const bool branch_taken_0x284dd8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x284DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DD8u;
        // 0x284ddc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284dd8) {
            ctx->pc = 0x284E00u;
            goto label_284e00;
        }
    }
    ctx->pc = 0x284DE0u;
label_284de0:
    // 0x284de0: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x284de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_284de4:
    // 0x284de4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x284de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_284de8:
    // 0x284de8: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x284de8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_284dec:
    // 0x284dec: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x284decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_284df0:
    // 0x284df0: 0xc092848  jal         func_24A120
label_284df4:
    if (ctx->pc == 0x284DF4u) {
        ctx->pc = 0x284DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DF0u;
        // 0x284df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284DF8u;
        goto label_284df8;
    }
    ctx->pc = 0x284DF0u;
    SET_GPR_U32(ctx, 31, 0x284DF8u);
    ctx->pc = 0x284DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284DF0u;
    // 0x284df4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x284DF0u, 0x284DF8u)) {
        return;
    }
    ctx->pc = 0x284DF8u;
label_284df8:
    // 0x284df8: 0x100000c9  b           . + 4 + (0xC9 << 2)
label_284dfc:
    if (ctx->pc == 0x284DFCu) {
        ctx->pc = 0x284DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DF8u;
        // 0x284dfc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E00u;
        goto label_284e00;
    }
    ctx->pc = 0x284DF8u;
    {
        const bool branch_taken_0x284df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284DF8u;
        // 0x284dfc: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284df8) {
            ctx->pc = 0x285120u;
            goto label_285120;
        }
    }
    ctx->pc = 0x284E00u;
label_284e00:
    // 0x284e00: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x284e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_284e04:
    // 0x284e04: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x284e04u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_284e08:
    // 0x284e08: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x284e08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_284e0c:
    // 0x284e0c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x284e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_284e10:
    // 0x284e10: 0x1060010a  beqz        $v1, . + 4 + (0x10A << 2)
label_284e14:
    if (ctx->pc == 0x284E14u) {
        ctx->pc = 0x284E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E10u;
        // 0x284e14: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E18u;
        goto label_284e18;
    }
    ctx->pc = 0x284E10u;
    {
        const bool branch_taken_0x284e10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E10u;
        // 0x284e14: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e10) {
            ctx->pc = 0x28523Cu;
            goto label_28523c;
        }
    }
    ctx->pc = 0x284E18u;
label_284e18:
    // 0x284e18: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x284e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_284e1c:
    // 0x284e1c: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x284e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_284e20:
    // 0x284e20: 0x31023  negu        $v0, $v1
    ctx->pc = 0x284e20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_284e24:
    // 0x284e24: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x284e24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284e28:
    // 0x284e28: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_284e2c:
    if (ctx->pc == 0x284E2Cu) {
        ctx->pc = 0x284E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E28u;
        // 0x284e2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E30u;
        goto label_284e30;
    }
    ctx->pc = 0x284E28u;
    {
        const bool branch_taken_0x284e28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E28u;
        // 0x284e2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e28) {
            ctx->pc = 0x284E9Cu;
            goto label_284e9c;
        }
    }
    ctx->pc = 0x284E30u;
label_284e30:
    // 0x284e30: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x284e30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_284e34:
    // 0x284e34: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_284e38:
    if (ctx->pc == 0x284E38u) {
        ctx->pc = 0x284E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E34u;
        // 0x284e38: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E3Cu;
        goto label_284e3c;
    }
    ctx->pc = 0x284E34u;
    {
        const bool branch_taken_0x284e34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E34u;
        // 0x284e38: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e34) {
            ctx->pc = 0x284E7Cu;
            goto label_284e7c;
        }
    }
    ctx->pc = 0x284E3Cu;
label_284e3c:
    // 0x284e3c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_284e40:
    if (ctx->pc == 0x284E40u) {
        ctx->pc = 0x284E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E3Cu;
        // 0x284e40: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E44u;
        goto label_284e44;
    }
    ctx->pc = 0x284E3Cu;
    {
        const bool branch_taken_0x284e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284e3c) {
            ctx->pc = 0x284E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284E3Cu;
            // 0x284e40: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284E64u;
            goto label_284e64;
        }
    }
    ctx->pc = 0x284E44u;
label_284e44:
    // 0x284e44: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_284e48:
    // 0x284e48: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x284e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_284e4c:
    // 0x284e4c: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x284e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_284e50:
    // 0x284e50: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x284e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_284e54:
    // 0x284e54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284e54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284e58:
    // 0x284e58: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284e58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284e5c:
    // 0x284e5c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x284e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_284e60:
    // 0x284e60: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x284e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_284e64:
    // 0x284e64: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284e68:
    // 0x284e68: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x284e68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_284e6c:
    // 0x284e6c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284e70:
    // 0x284e70: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284e74:
    // 0x284e74: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284e74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284e78:
    // 0x284e78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x284e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_284e7c:
    // 0x284e7c: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x284e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_284e80:
    // 0x284e80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284e84:
    // 0x284e84: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x284e84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_284e88:
    // 0x284e88: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284e8c:
    // 0x284e8c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284e90:
    // 0x284e90: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284e90u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284e94:
    // 0x284e94: 0x106000e9  beqz        $v1, . + 4 + (0xE9 << 2)
label_284e98:
    if (ctx->pc == 0x284E98u) {
        ctx->pc = 0x284E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E94u;
        // 0x284e98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284E9Cu;
        goto label_284e9c;
    }
    ctx->pc = 0x284E94u;
    {
        const bool branch_taken_0x284e94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284E94u;
        // 0x284e98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284e94) {
            ctx->pc = 0x28523Cu;
            goto label_28523c;
        }
    }
    ctx->pc = 0x284E9Cu;
label_284e9c:
    // 0x284e9c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x284e9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284ea0:
    // 0x284ea0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x284ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_284ea4:
    // 0x284ea4: 0x0  nop
    ctx->pc = 0x284ea4u;
    // NOP
label_284ea8:
    // 0x284ea8: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_284eac:
    // 0x284eac: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x284eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_284eb0:
    // 0x284eb0: 0x8ce4fff8  lw          $a0, -0x8($a3)
    ctx->pc = 0x284eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_284eb4:
    // 0x284eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284eb8:
    // 0x284eb8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284ebc:
    // 0x284ebc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x284ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_284ec0:
    // 0x284ec0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x284ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_284ec4:
    // 0x284ec4: 0x8ce4fffc  lw          $a0, -0x4($a3)
    ctx->pc = 0x284ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_284ec8:
    // 0x284ec8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284ecc:
    // 0x284ecc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284ed0:
    // 0x284ed0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x284ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_284ed4:
    // 0x284ed4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x284ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_284ed8:
    // 0x284ed8: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x284ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_284edc:
    // 0x284edc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284ee0:
    // 0x284ee0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284ee4:
    // 0x284ee4: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x284ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_284ee8:
    // 0x284ee8: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x284ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_284eec:
    // 0x284eec: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x284eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_284ef0:
    // 0x284ef0: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x284ef0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_284ef4:
    // 0x284ef4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284ef8:
    // 0x284ef8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x284ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_284efc:
    // 0x284efc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x284efcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_284f00:
    // 0x284f00: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x284f00u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_284f04:
    // 0x284f04: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_284f08:
    if (ctx->pc == 0x284F08u) {
        ctx->pc = 0x284F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F04u;
        // 0x284f08: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F0Cu;
        goto label_284f0c;
    }
    ctx->pc = 0x284F04u;
    {
        const bool branch_taken_0x284f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x284F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F04u;
        // 0x284f08: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f04) {
            ctx->pc = 0x284EA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_284ea8;
        }
    }
    ctx->pc = 0x284F0Cu;
label_284f0c:
    // 0x284f0c: 0x100000cc  b           . + 4 + (0xCC << 2)
label_284f10:
    if (ctx->pc == 0x284F10u) {
        ctx->pc = 0x284F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F0Cu;
        // 0x284f10: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F14u;
        goto label_284f14;
    }
    ctx->pc = 0x284F0Cu;
    {
        const bool branch_taken_0x284f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F0Cu;
        // 0x284f10: 0x100a82d  daddu       $s5, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f0c) {
            ctx->pc = 0x285240u;
            goto label_285240;
        }
    }
    ctx->pc = 0x284F14u;
label_284f14:
    // 0x284f14: 0x1e37c3  sra         $a2, $fp, 31
    ctx->pc = 0x284f14u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 30), 31));
label_284f18:
    // 0x284f18: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x284f18u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_284f1c:
    // 0x284f1c: 0x3c61023  subu        $v0, $fp, $a2
    ctx->pc = 0x284f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_284f20:
    // 0x284f20: 0x26030fc8  addiu       $v1, $s0, 0xFC8
    ctx->pc = 0x284f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4040));
label_284f24:
    // 0x284f24: 0x28843  sra         $s1, $v0, 1
    ctx->pc = 0x284f24u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 1));
label_284f28:
    // 0x284f28: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x284f28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_284f2c:
    // 0x284f2c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x284f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_284f30:
    // 0x284f30: 0x119080  sll         $s2, $s1, 2
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_284f34:
    // 0x284f34: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x284f34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284f38:
    // 0x284f38: 0x27b40040  addiu       $s4, $sp, 0x40
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_284f3c:
    // 0x284f3c: 0x34a50102  ori         $a1, $a1, 0x102
    ctx->pc = 0x284f3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
label_284f40:
    // 0x284f40: 0x40f809  jalr        $v0
label_284f44:
    if (ctx->pc == 0x284F44u) {
        ctx->pc = 0x284F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F40u;
        // 0x284f44: 0xafa60078  sw          $a2, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F48u;
        goto label_284f48;
    }
    ctx->pc = 0x284F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x284F48u);
        ctx->pc = 0x284F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F40u;
        // 0x284f44: 0xafa60078  sw          $a2, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x284F40u, 0x284F48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x284F48u;
label_284f48:
    // 0x284f48: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x284f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_284f4c:
    // 0x284f4c: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
label_284f50:
    if (ctx->pc == 0x284F50u) {
        ctx->pc = 0x284F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F4Cu;
        // 0x284f50: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F54u;
        goto label_284f54;
    }
    ctx->pc = 0x284F4Cu;
    {
        const bool branch_taken_0x284f4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x284F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F4Cu;
        // 0x284f50: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f4c) {
            ctx->pc = 0x284F80u;
            goto label_284f80;
        }
    }
    ctx->pc = 0x284F54u;
label_284f54:
    // 0x284f54: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x284f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_284f58:
    // 0x284f58: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_284f5c:
    // 0x284f5c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x284f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_284f60:
    // 0x284f60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x284f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_284f64:
    // 0x284f64: 0xc092848  jal         func_24A120
label_284f68:
    if (ctx->pc == 0x284F68u) {
        ctx->pc = 0x284F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F64u;
        // 0x284f68: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F6Cu;
        goto label_284f6c;
    }
    ctx->pc = 0x284F64u;
    SET_GPR_U32(ctx, 31, 0x284F6Cu);
    ctx->pc = 0x284F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F64u;
    // 0x284f68: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x284F64u, 0x284F6Cu)) {
        return;
    }
    ctx->pc = 0x284F6Cu;
label_284f6c:
    // 0x284f6c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x284f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_284f70:
    // 0x284f70: 0xc09281a  jal         func_24A068
label_284f74:
    if (ctx->pc == 0x284F74u) {
        ctx->pc = 0x284F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F70u;
        // 0x284f74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F78u;
        goto label_284f78;
    }
    ctx->pc = 0x284F70u;
    SET_GPR_U32(ctx, 31, 0x284F78u);
    ctx->pc = 0x284F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x284F70u;
    // 0x284f74: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x284F70u, 0x284F78u)) {
        return;
    }
    ctx->pc = 0x284F78u;
label_284f78:
    // 0x284f78: 0x10000045  b           . + 4 + (0x45 << 2)
label_284f7c:
    if (ctx->pc == 0x284F7Cu) {
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F78u;
        // 0x284f7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F80u;
        goto label_284f80;
    }
    ctx->pc = 0x284F78u;
    {
        const bool branch_taken_0x284f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F78u;
        // 0x284f7c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f78) {
            ctx->pc = 0x285090u;
            goto label_285090;
        }
    }
    ctx->pc = 0x284F80u;
label_284f80:
    // 0x284f80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x284f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_284f84:
    // 0x284f84: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x284f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_284f88:
    // 0x284f88: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x284f88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_284f8c:
    // 0x284f8c: 0x71182a  slt         $v1, $v1, $s1
    ctx->pc = 0x284f8cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_284f90:
    // 0x284f90: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_284f94:
    if (ctx->pc == 0x284F94u) {
        ctx->pc = 0x284F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F90u;
        // 0x284f94: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284F98u;
        goto label_284f98;
    }
    ctx->pc = 0x284F90u;
    {
        const bool branch_taken_0x284f90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284F90u;
        // 0x284f94: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f90) {
            ctx->pc = 0x28508Cu;
            goto label_28508c;
        }
    }
    ctx->pc = 0x284F98u;
label_284f98:
    // 0x284f98: 0x2623fffe  addiu       $v1, $s1, -0x2
    ctx->pc = 0x284f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967294));
label_284f9c:
    // 0x284f9c: 0x24870008  addiu       $a3, $a0, 0x8
    ctx->pc = 0x284f9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_284fa0:
    // 0x284fa0: 0x31023  negu        $v0, $v1
    ctx->pc = 0x284fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_284fa4:
    // 0x284fa4: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x284fa4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_284fa8:
    // 0x284fa8: 0x10a0001c  beqz        $a1, . + 4 + (0x1C << 2)
label_284fac:
    if (ctx->pc == 0x284FACu) {
        ctx->pc = 0x284FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FA8u;
        // 0x284fac: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FB0u;
        goto label_284fb0;
    }
    ctx->pc = 0x284FA8u;
    {
        const bool branch_taken_0x284fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FA8u;
        // 0x284fac: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fa8) {
            ctx->pc = 0x28501Cu;
            goto label_28501c;
        }
    }
    ctx->pc = 0x284FB0u;
label_284fb0:
    // 0x284fb0: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x284fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
label_284fb4:
    // 0x284fb4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_284fb8:
    if (ctx->pc == 0x284FB8u) {
        ctx->pc = 0x284FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FB4u;
        // 0x284fb8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FBCu;
        goto label_284fbc;
    }
    ctx->pc = 0x284FB4u;
    {
        const bool branch_taken_0x284fb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FB4u;
        // 0x284fb8: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284fb4) {
            ctx->pc = 0x284FFCu;
            goto label_284ffc;
        }
    }
    ctx->pc = 0x284FBCu;
label_284fbc:
    // 0x284fbc: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_284fc0:
    if (ctx->pc == 0x284FC0u) {
        ctx->pc = 0x284FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x284FBCu;
        // 0x284fc0: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x284FC4u;
        goto label_284fc4;
    }
    ctx->pc = 0x284FBCu;
    {
        const bool branch_taken_0x284fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284fbc) {
            ctx->pc = 0x284FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x284FBCu;
            // 0x284fc0: 0x8cc2fffc  lw          $v0, -0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x284FE4u;
            goto label_284fe4;
        }
    }
    ctx->pc = 0x284FC4u;
label_284fc4:
    // 0x284fc4: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x284fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_284fc8:
    // 0x284fc8: 0x2623fffd  addiu       $v1, $s1, -0x3
    ctx->pc = 0x284fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967293));
label_284fcc:
    // 0x284fcc: 0x8ce5fff8  lw          $a1, -0x8($a3)
    ctx->pc = 0x284fccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_284fd0:
    // 0x284fd0: 0x2486000c  addiu       $a2, $a0, 0xC
    ctx->pc = 0x284fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
label_284fd4:
    // 0x284fd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284fd8:
    // 0x284fd8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284fdc:
    // 0x284fdc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x284fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_284fe0:
    // 0x284fe0: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_284fe4:
    // 0x284fe4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x284fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_284fe8:
    // 0x284fe8: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x284fe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_284fec:
    // 0x284fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x284fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_284ff0:
    // 0x284ff0: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x284ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_284ff4:
    // 0x284ff4: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x284ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_284ff8:
    // 0x284ff8: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x284ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_284ffc:
    // 0x284ffc: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x284ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_285000:
    // 0x285000: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_285004:
    // 0x285004: 0x8cc5fff8  lw          $a1, -0x8($a2)
    ctx->pc = 0x285004u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_285008:
    // 0x285008: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28500c:
    // 0x28500c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28500cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_285010:
    // 0x285010: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x285010u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_285014:
    // 0x285014: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_285018:
    if (ctx->pc == 0x285018u) {
        ctx->pc = 0x285018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285014u;
        // 0x285018: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28501Cu;
        goto label_28501c;
    }
    ctx->pc = 0x285014u;
    {
        const bool branch_taken_0x285014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285014u;
        // 0x285018: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285014) {
            ctx->pc = 0x28508Cu;
            goto label_28508c;
        }
    }
    ctx->pc = 0x28501Cu;
label_28501c:
    // 0x28501c: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x28501cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285020:
    // 0x285020: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x285020u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285024:
    // 0x285024: 0x0  nop
    ctx->pc = 0x285024u;
    // NOP
label_285028:
    // 0x285028: 0x8ce2fffc  lw          $v0, -0x4($a3)
    ctx->pc = 0x285028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_28502c:
    // 0x28502c: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x28502cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_285030:
    // 0x285030: 0x8d05fff8  lw          $a1, -0x8($t0)
    ctx->pc = 0x285030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967288)));
label_285034:
    // 0x285034: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285034u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285038:
    // 0x285038: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x285038u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28503c:
    // 0x28503c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x28503cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_285040:
    // 0x285040: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x285040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_285044:
    // 0x285044: 0x8d05fffc  lw          $a1, -0x4($t0)
    ctx->pc = 0x285044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
label_285048:
    // 0x285048: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28504c:
    // 0x28504c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28504cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_285050:
    // 0x285050: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x285050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_285054:
    // 0x285054: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x285054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_285058:
    // 0x285058: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x285058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_28505c:
    // 0x28505c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28505cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285060:
    // 0x285060: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x285060u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_285064:
    // 0x285064: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x285064u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
label_285068:
    // 0x285068: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_28506c:
    // 0x28506c: 0x8d050004  lw          $a1, 0x4($t0)
    ctx->pc = 0x28506cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_285070:
    // 0x285070: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x285070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_285074:
    // 0x285074: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285078:
    // 0x285078: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x285078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_28507c:
    // 0x28507c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x28507cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_285080:
    // 0x285080: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x285080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_285084:
    // 0x285084: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_285088:
    if (ctx->pc == 0x285088u) {
        ctx->pc = 0x285088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285084u;
        // 0x285088: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28508Cu;
        goto label_28508c;
    }
    ctx->pc = 0x285084u;
    {
        const bool branch_taken_0x285084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285084u;
        // 0x285088: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285084) {
            ctx->pc = 0x285028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285028;
        }
    }
    ctx->pc = 0x28508Cu;
label_28508c:
    // 0x28508c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28508cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285090:
    // 0x285090: 0x12a00175  beqz        $s5, . + 4 + (0x175 << 2)
label_285094:
    if (ctx->pc == 0x285094u) {
        ctx->pc = 0x285094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285090u;
        // 0x285094: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285098u;
        goto label_285098;
    }
    ctx->pc = 0x285090u;
    {
        const bool branch_taken_0x285090 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x285094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285090u;
        // 0x285094: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285090) {
            ctx->pc = 0x285668u;
            goto label_285668;
        }
    }
    ctx->pc = 0x285098u;
label_285098:
    // 0x285098: 0x3c070073  lui         $a3, 0x73
    ctx->pc = 0x285098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)115 << 16));
label_28509c:
    // 0x28509c: 0x24f00fc8  addiu       $s0, $a3, 0xFC8
    ctx->pc = 0x28509cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 7), 4040));
label_2850a0:
    // 0x2850a0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2850a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2850a4:
    // 0x2850a4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2850a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2850a8:
    // 0x2850a8: 0x3c61023  subu        $v0, $fp, $a2
    ctx->pc = 0x2850a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 6)));
label_2850ac:
    // 0x2850ac: 0x8e03010c  lw          $v1, 0x10C($s0)
    ctx->pc = 0x2850acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
label_2850b0:
    // 0x2850b0: 0x2a043  sra         $s4, $v0, 1
    ctx->pc = 0x2850b0u;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 2), 1));
label_2850b4:
    // 0x2850b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2850b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2850b8:
    // 0x2850b8: 0x141080  sll         $v0, $s4, 2
    ctx->pc = 0x2850b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_2850bc:
    // 0x2850bc: 0x26970001  addiu       $s7, $s4, 0x1
    ctx->pc = 0x2850bcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2850c0:
    // 0x2850c0: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x2850c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_2850c4:
    // 0x2850c4: 0x179080  sll         $s2, $s7, 2
    ctx->pc = 0x2850c4u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 23), 2));
label_2850c8:
    // 0x2850c8: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x2850c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2850cc:
    // 0x2850cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2850ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2850d0:
    // 0x2850d0: 0x46000d03  div.s       $f20, $f1, $f0
    ctx->pc = 0x2850d0u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
label_2850d4:
    // 0x2850d4: 0x60f809  jalr        $v1
label_2850d8:
    if (ctx->pc == 0x2850D8u) {
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850DCu;
        goto label_2850dc;
    }
    ctx->pc = 0x2850D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2850DCu);
        ctx->pc = 0x2850D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850D4u;
        // 0x2850d8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2850D4u, 0x2850DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2850DCu;
label_2850dc:
    // 0x2850dc: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x2850dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_2850e0:
    // 0x2850e0: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x2850e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_2850e4:
    // 0x2850e4: 0x27b10050  addiu       $s1, $sp, 0x50
    ctx->pc = 0x2850e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2850e8:
    // 0x2850e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2850e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2850ec:
    // 0x2850ec: 0x40f809  jalr        $v0
label_2850f0:
    if (ctx->pc == 0x2850F0u) {
        ctx->pc = 0x2850F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850ECu;
        // 0x2850f0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2850F4u;
        goto label_2850f4;
    }
    ctx->pc = 0x2850ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2850F4u);
        ctx->pc = 0x2850F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850ECu;
        // 0x2850f0: 0x34a50102  ori         $a1, $a1, 0x102 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)258);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2850ECu, 0x2850F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2850F4u;
label_2850f4:
    // 0x2850f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2850f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2850f8:
    // 0x2850f8: 0x1500000d  bnez        $t0, . + 4 + (0xD << 2)
label_2850fc:
    if (ctx->pc == 0x2850FCu) {
        ctx->pc = 0x2850FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850F8u;
        // 0x2850fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285100u;
        goto label_285100;
    }
    ctx->pc = 0x2850F8u;
    {
        const bool branch_taken_0x2850f8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x2850FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2850F8u;
        // 0x2850fc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2850f8) {
            ctx->pc = 0x285130u;
            goto label_285130;
        }
    }
    ctx->pc = 0x285100u;
label_285100:
    // 0x285100: 0x24020102  addiu       $v0, $zero, 0x102
    ctx->pc = 0x285100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
label_285104:
    // 0x285104: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x285104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_285108:
    // 0x285108: 0x34840013  ori         $a0, $a0, 0x13
    ctx->pc = 0x285108u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
label_28510c:
    // 0x28510c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x28510cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_285110:
    // 0x285110: 0xc092848  jal         func_24A120
label_285114:
    if (ctx->pc == 0x285114u) {
        ctx->pc = 0x285114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285110u;
        // 0x285114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285118u;
        goto label_285118;
    }
    ctx->pc = 0x285110u;
    SET_GPR_U32(ctx, 31, 0x285118u);
    ctx->pc = 0x285114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285110u;
    // 0x285114: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285110u, 0x285118u)) {
        return;
    }
    ctx->pc = 0x285118u;
label_285118:
    // 0x285118: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x285118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_28511c:
    // 0x28511c: 0x0  nop
    ctx->pc = 0x28511cu;
    // NOP
label_285120:
    // 0x285120: 0xc09281a  jal         func_24A068
label_285124:
    if (ctx->pc == 0x285124u) {
        ctx->pc = 0x285124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285120u;
        // 0x285124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285128u;
        goto label_285128;
    }
    ctx->pc = 0x285120u;
    SET_GPR_U32(ctx, 31, 0x285128u);
    ctx->pc = 0x285124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285120u;
    // 0x285124: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285120u, 0x285128u)) {
        return;
    }
    ctx->pc = 0x285128u;
label_285128:
    // 0x285128: 0x10000045  b           . + 4 + (0x45 << 2)
label_28512c:
    if (ctx->pc == 0x28512Cu) {
        ctx->pc = 0x285130u;
        goto label_285130;
    }
    ctx->pc = 0x285128u;
    {
        const bool branch_taken_0x285128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x285128) {
            ctx->pc = 0x285240u;
            goto label_285240;
        }
    }
    ctx->pc = 0x285130u;
label_285130:
    // 0x285130: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x285130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285134:
    // 0x285134: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x285134u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_285138:
    // 0x285138: 0x77182a  slt         $v1, $v1, $s7
    ctx->pc = 0x285138u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_28513c:
    // 0x28513c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28513cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285140:
    // 0x285140: 0x1060003e  beqz        $v1, . + 4 + (0x3E << 2)
label_285144:
    if (ctx->pc == 0x285144u) {
        ctx->pc = 0x285144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285140u;
        // 0x285144: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285148u;
        goto label_285148;
    }
    ctx->pc = 0x285140u;
    {
        const bool branch_taken_0x285140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285140u;
        // 0x285144: 0xad020004  sw          $v0, 0x4($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285140) {
            ctx->pc = 0x28523Cu;
            goto label_28523c;
        }
    }
    ctx->pc = 0x285148u;
label_285148:
    // 0x285148: 0x2683ffff  addiu       $v1, $s4, -0x1
    ctx->pc = 0x285148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_28514c:
    // 0x28514c: 0x25060008  addiu       $a2, $t0, 0x8
    ctx->pc = 0x28514cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
label_285150:
    // 0x285150: 0x31023  negu        $v0, $v1
    ctx->pc = 0x285150u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_285154:
    // 0x285154: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x285154u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_285158:
    // 0x285158: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_28515c:
    if (ctx->pc == 0x28515Cu) {
        ctx->pc = 0x28515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285158u;
        // 0x28515c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285160u;
        goto label_285160;
    }
    ctx->pc = 0x285158u;
    {
        const bool branch_taken_0x285158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285158u;
        // 0x28515c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285158) {
            ctx->pc = 0x2851CCu;
            goto label_2851cc;
        }
    }
    ctx->pc = 0x285160u;
label_285160:
    // 0x285160: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x285160u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_285164:
    // 0x285164: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_285168:
    if (ctx->pc == 0x285168u) {
        ctx->pc = 0x285168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285164u;
        // 0x285168: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28516Cu;
        goto label_28516c;
    }
    ctx->pc = 0x285164u;
    {
        const bool branch_taken_0x285164 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285164u;
        // 0x285168: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285164) {
            ctx->pc = 0x2851ACu;
            goto label_2851ac;
        }
    }
    ctx->pc = 0x28516Cu;
label_28516c:
    // 0x28516c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_285170:
    if (ctx->pc == 0x285170u) {
        ctx->pc = 0x285170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28516Cu;
        // 0x285170: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285174u;
        goto label_285174;
    }
    ctx->pc = 0x28516Cu;
    {
        const bool branch_taken_0x28516c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28516c) {
            ctx->pc = 0x285170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28516Cu;
            // 0x285170: 0x8ca2fffc  lw          $v0, -0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285194u;
            goto label_285194;
        }
    }
    ctx->pc = 0x285174u;
label_285174:
    // 0x285174: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x285174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_285178:
    // 0x285178: 0x2683fffe  addiu       $v1, $s4, -0x2
    ctx->pc = 0x285178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967294));
label_28517c:
    // 0x28517c: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x28517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_285180:
    // 0x285180: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x285180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_285184:
    // 0x285184: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285188:
    // 0x285188: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x285188u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28518c:
    // 0x28518c: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x28518cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
label_285190:
    // 0x285190: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x285190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_285194:
    // 0x285194: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x285194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_285198:
    // 0x285198: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x285198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_28519c:
    // 0x28519c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28519cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2851a0:
    // 0x2851a0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2851a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2851a4:
    // 0x2851a4: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2851a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2851a8:
    // 0x2851a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2851a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2851ac:
    // 0x2851ac: 0x8ca2fffc  lw          $v0, -0x4($a1)
    ctx->pc = 0x2851acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
label_2851b0:
    // 0x2851b0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2851b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2851b4:
    // 0x2851b4: 0x8ca4fff8  lw          $a0, -0x8($a1)
    ctx->pc = 0x2851b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967288)));
label_2851b8:
    // 0x2851b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2851b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2851bc:
    // 0x2851bc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2851bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2851c0:
    // 0x2851c0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2851c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2851c4:
    // 0x2851c4: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_2851c8:
    if (ctx->pc == 0x2851C8u) {
        ctx->pc = 0x2851C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C4u;
        // 0x2851c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2851CCu;
        goto label_2851cc;
    }
    ctx->pc = 0x2851C4u;
    {
        const bool branch_taken_0x2851c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2851C4u;
        // 0x2851c8: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851c4) {
            ctx->pc = 0x28523Cu;
            goto label_28523c;
        }
    }
    ctx->pc = 0x2851CCu;
label_2851cc:
    // 0x2851cc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2851ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2851d0:
    // 0x2851d0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2851d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2851d4:
    // 0x2851d4: 0x0  nop
    ctx->pc = 0x2851d4u;
    // NOP
label_2851d8:
    // 0x2851d8: 0x8cc2fffc  lw          $v0, -0x4($a2)
    ctx->pc = 0x2851d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967292)));
label_2851dc:
    // 0x2851dc: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2851dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2851e0:
    // 0x2851e0: 0x8ce4fff8  lw          $a0, -0x8($a3)
    ctx->pc = 0x2851e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967288)));
label_2851e4:
    // 0x2851e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2851e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2851e8:
    // 0x2851e8: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2851e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2851ec:
    // 0x2851ec: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x2851ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2851f0:
    // 0x2851f0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2851f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2851f4:
    // 0x2851f4: 0x8ce4fffc  lw          $a0, -0x4($a3)
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294967292)));
label_2851f8:
    // 0x2851f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2851f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2851fc:
    // 0x2851fc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2851fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_285200:
    // 0x285200: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x285200u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_285204:
    // 0x285204: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_285208:
    // 0x285208: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x285208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28520c:
    // 0x28520c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28520cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285210:
    // 0x285210: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x285210u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_285214:
    // 0x285214: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x285214u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_285218:
    // 0x285218: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x285218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_28521c:
    // 0x28521c: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x28521cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_285220:
    // 0x285220: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x285220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_285224:
    // 0x285224: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285228:
    // 0x285228: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_28522c:
    // 0x28522c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x28522cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_285230:
    // 0x285230: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x285230u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
label_285234:
    // 0x285234: 0x1460ffe8  bnez        $v1, . + 4 + (-0x18 << 2)
label_285238:
    if (ctx->pc == 0x285238u) {
        ctx->pc = 0x285238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285234u;
        // 0x285238: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28523Cu;
        goto label_28523c;
    }
    ctx->pc = 0x285234u;
    {
        const bool branch_taken_0x285234 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285234u;
        // 0x285238: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285234) {
            ctx->pc = 0x2851D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2851d8;
        }
    }
    ctx->pc = 0x28523Cu;
label_28523c:
    // 0x28523c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x28523cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_285240:
    // 0x285240: 0x12a00109  beqz        $s5, . + 4 + (0x109 << 2)
label_285244:
    if (ctx->pc == 0x285244u) {
        ctx->pc = 0x285244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285240u;
        // 0x285244: 0x8fa80078  lw          $t0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285248u;
        goto label_285248;
    }
    ctx->pc = 0x285240u;
    {
        const bool branch_taken_0x285240 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x285244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285240u;
        // 0x285244: 0x8fa80078  lw          $t0, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285240) {
            ctx->pc = 0x285668u;
            goto label_285668;
        }
    }
    ctx->pc = 0x285248u;
label_285248:
    // 0x285248: 0x3c81023  subu        $v0, $fp, $t0
    ctx->pc = 0x285248u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_28524c:
    // 0x28524c: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x28524cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_285250:
    // 0x285250: 0x24c8ffff  addiu       $t0, $a2, -0x1
    ctx->pc = 0x285250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_285254:
    // 0x285254: 0x500002d  bltz        $t0, . + 4 + (0x2D << 2)
label_285258:
    if (ctx->pc == 0x285258u) {
        ctx->pc = 0x285258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285254u;
        // 0x285258: 0x81827  nor         $v1, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28525Cu;
        goto label_28525c;
    }
    ctx->pc = 0x285254u;
    {
        const bool branch_taken_0x285254 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x285258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285254u;
        // 0x285258: 0x81827  nor         $v1, $zero, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285254) {
            ctx->pc = 0x28530Cu;
            goto label_28530c;
        }
    }
    ctx->pc = 0x28525Cu;
label_28525c:
    // 0x28525c: 0x81080  sll         $v0, $t0, 2
    ctx->pc = 0x28525cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_285260:
    // 0x285260: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_285264:
    // 0x285264: 0x30640007  andi        $a0, $v1, 0x7
    ctx->pc = 0x285264u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_285268:
    // 0x285268: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_28526c:
    if (ctx->pc == 0x28526Cu) {
        ctx->pc = 0x28526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285268u;
        // 0x28526c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285270u;
        goto label_285270;
    }
    ctx->pc = 0x285268u;
    {
        const bool branch_taken_0x285268 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28526Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285268u;
        // 0x28526c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285268) {
            ctx->pc = 0x2852CCu;
            goto label_2852cc;
        }
    }
    ctx->pc = 0x285270u;
label_285270:
    // 0x285270: 0x28820006  slti        $v0, $a0, 0x6
    ctx->pc = 0x285270u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_285274:
    // 0x285274: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_285278:
    if (ctx->pc == 0x285278u) {
        ctx->pc = 0x285278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285274u;
        // 0x285278: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28527Cu;
        goto label_28527c;
    }
    ctx->pc = 0x285274u;
    {
        const bool branch_taken_0x285274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285274u;
        // 0x285278: 0x28820004  slti        $v0, $a0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285274) {
            ctx->pc = 0x2852B4u;
            goto label_2852b4;
        }
    }
    ctx->pc = 0x28527Cu;
label_28527c:
    // 0x28527c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_285280:
    if (ctx->pc == 0x285280u) {
        ctx->pc = 0x285280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28527Cu;
        // 0x285280: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285284u;
        goto label_285284;
    }
    ctx->pc = 0x28527Cu;
    {
        const bool branch_taken_0x28527c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28527Cu;
        // 0x285280: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28527c) {
            ctx->pc = 0x2852A0u;
            goto label_2852a0;
        }
    }
    ctx->pc = 0x285284u;
label_285284:
    // 0x285284: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_285288:
    if (ctx->pc == 0x285288u) {
        ctx->pc = 0x285288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285284u;
        // 0x285288: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28528Cu;
        goto label_28528c;
    }
    ctx->pc = 0x285284u;
    {
        const bool branch_taken_0x285284 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285284) {
            ctx->pc = 0x285288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285284u;
            // 0x285288: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2852D0u;
            goto label_2852d0;
        }
    }
    ctx->pc = 0x28528Cu;
label_28528c:
    // 0x28528c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28528cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_285290:
    // 0x285290: 0x24a3fff8  addiu       $v1, $a1, -0x8
    ctx->pc = 0x285290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
label_285294:
    // 0x285294: 0x24c8fffd  addiu       $t0, $a2, -0x3
    ctx->pc = 0x285294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967293));
label_285298:
    // 0x285298: 0x21023  negu        $v0, $v0
    ctx->pc = 0x285298u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_28529c:
    // 0x28529c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x28529cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_2852a0:
    // 0x2852a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2852a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2852a4:
    // 0x2852a4: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x2852a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_2852a8:
    // 0x2852a8: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2852a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2852ac:
    // 0x2852ac: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2852acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2852b0:
    // 0x2852b0: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x2852b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_2852b4:
    // 0x2852b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2852b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2852b8:
    // 0x2852b8: 0x2508fffe  addiu       $t0, $t0, -0x2
    ctx->pc = 0x2852b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967294));
label_2852bc:
    // 0x2852bc: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2852bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2852c0:
    // 0x2852c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2852c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2852c4:
    // 0x2852c4: 0x5000011  bltz        $t0, . + 4 + (0x11 << 2)
label_2852c8:
    if (ctx->pc == 0x2852C8u) {
        ctx->pc = 0x2852C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852C4u;
        // 0x2852c8: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2852CCu;
        goto label_2852cc;
    }
    ctx->pc = 0x2852C4u;
    {
        const bool branch_taken_0x2852c4 = (GPR_S64(ctx, 8) < 0);
        ctx->pc = 0x2852C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2852C4u;
        // 0x2852c8: 0x2463fff8  addiu       $v1, $v1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2852c4) {
            ctx->pc = 0x28530Cu;
            goto label_28530c;
        }
    }
    ctx->pc = 0x2852CCu;
label_2852cc:
    // 0x2852cc: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2852ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2852d0:
    // 0x2852d0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2852d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2852d4:
    // 0x2852d4: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x2852d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_2852d8:
    // 0x2852d8: 0x8cc4fff8  lw          $a0, -0x8($a2)
    ctx->pc = 0x2852d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967288)));
label_2852dc:
    // 0x2852dc: 0x8cc5fff0  lw          $a1, -0x10($a2)
    ctx->pc = 0x2852dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967280)));
label_2852e0:
    // 0x2852e0: 0x31823  negu        $v1, $v1
    ctx->pc = 0x2852e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_2852e4:
    // 0x2852e4: 0x8cc2ffe8  lw          $v0, -0x18($a2)
    ctx->pc = 0x2852e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967272)));
label_2852e8:
    // 0x2852e8: 0x42023  negu        $a0, $a0
    ctx->pc = 0x2852e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_2852ec:
    // 0x2852ec: 0x52823  negu        $a1, $a1
    ctx->pc = 0x2852ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
label_2852f0:
    // 0x2852f0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x2852f0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_2852f4:
    // 0x2852f4: 0x21023  negu        $v0, $v0
    ctx->pc = 0x2852f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_2852f8:
    // 0x2852f8: 0xacc4fff8  sw          $a0, -0x8($a2)
    ctx->pc = 0x2852f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967288), GPR_U32(ctx, 4));
label_2852fc:
    // 0x2852fc: 0xacc5fff0  sw          $a1, -0x10($a2)
    ctx->pc = 0x2852fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967280), GPR_U32(ctx, 5));
label_285300:
    // 0x285300: 0xacc2ffe8  sw          $v0, -0x18($a2)
    ctx->pc = 0x285300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294967272), GPR_U32(ctx, 2));
label_285304:
    // 0x285304: 0x501fff2  bgez        $t0, . + 4 + (-0xE << 2)
label_285308:
    if (ctx->pc == 0x285308u) {
        ctx->pc = 0x285308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285304u;
        // 0x285308: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x28530Cu;
        goto label_28530c;
    }
    ctx->pc = 0x285304u;
    {
        const bool branch_taken_0x285304 = (GPR_S64(ctx, 8) >= 0);
        ctx->pc = 0x285308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285304u;
        // 0x285308: 0x24c6ffe0  addiu       $a2, $a2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285304) {
            ctx->pc = 0x2852D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2852d0;
        }
    }
    ctx->pc = 0x28530Cu;
label_28530c:
    // 0x28530c: 0x1a6000b2  blez        $s3, . + 4 + (0xB2 << 2)
label_285310:
    if (ctx->pc == 0x285310u) {
        ctx->pc = 0x285310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28530Cu;
        // 0x285310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285314u;
        goto label_285314;
    }
    ctx->pc = 0x28530Cu;
    {
        const bool branch_taken_0x28530c = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x285310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28530Cu;
        // 0x285310: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28530c) {
            ctx->pc = 0x2855D8u;
            goto label_2855d8;
        }
    }
    ctx->pc = 0x285314u;
label_285314:
    // 0x285314: 0x8fa90078  lw          $t1, 0x78($sp)
    ctx->pc = 0x285314u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_285318:
    // 0x285318: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x285318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28531c:
    // 0x28531c: 0x327c2  srl         $a0, $v1, 31
    ctx->pc = 0x28531cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
label_285320:
    // 0x285320: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x285320u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285324:
    // 0x285324: 0x3c91023  subu        $v0, $fp, $t1
    ctx->pc = 0x285324u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 9)));
label_285328:
    // 0x285328: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_28532c:
    // 0x28532c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x28532cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_285330:
    // 0x285330: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x285330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_285334:
    // 0x285334: 0x24540001  addiu       $s4, $v0, 0x1
    ctx->pc = 0x285334u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_285338:
    // 0x285338: 0x38043  sra         $s0, $v1, 1
    ctx->pc = 0x285338u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 3), 1));
label_28533c:
    // 0x28533c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28533cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285340:
    // 0x285340: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x285340u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285344:
    // 0x285344: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x285344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_285348:
    // 0x285348: 0x1e7fc3  sra         $t7, $fp, 31
    ctx->pc = 0x285348u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 30), 31));
label_28534c:
    // 0x28534c: 0xc4470000  lwc1        $f7, 0x0($v0)
    ctx->pc = 0x28534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_285350:
    // 0x285350: 0x468039e0  cvt.s.w     $f7, $f7
    ctx->pc = 0x285350u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[7], sizeof(tmp)); ctx->f[7] = FPU_CVT_S_W(tmp); }
label_285354:
    // 0x285354: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x285354u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285358:
    // 0x285358: 0x113001a  div         $zero, $t0, $s3
    ctx->pc = 0x285358u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 8);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_28535c:
    // 0x28535c: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_285360:
    if (ctx->pc == 0x285360u) {
        ctx->pc = 0x285360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28535Cu;
        // 0x285360: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285364u;
        goto label_285364;
    }
    ctx->pc = 0x28535Cu;
    {
        const bool branch_taken_0x28535c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x28535c) {
            ctx->pc = 0x285360u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28535Cu;
            // 0x285360: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285364u;
            goto label_285364;
        }
    }
    ctx->pc = 0x285364u;
label_285364:
    // 0x285364: 0x1010  mfhi        $v0
    ctx->pc = 0x285364u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_285368:
    // 0x285368: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x285368u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_28536c:
    // 0x28536c: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x28536cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_285370:
    // 0x285370: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x285370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285374:
    // 0x285374: 0x46070082  mul.s       $f2, $f0, $f7
    ctx->pc = 0x285374u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_285378:
    // 0x285378: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x285378u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28537c:
    // 0x28537c: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_285380:
    if (ctx->pc == 0x285380u) {
        ctx->pc = 0x285380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28537Cu;
        // 0x285380: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285384u;
        goto label_285384;
    }
    ctx->pc = 0x28537Cu;
    {
        const bool branch_taken_0x28537c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x28537c) {
            ctx->pc = 0x285380u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28537Cu;
            // 0x285380: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285384u;
            goto label_285384;
        }
    }
    ctx->pc = 0x285384u;
label_285384:
    // 0x285384: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x285384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285388:
    // 0x285388: 0x46070042  mul.s       $f1, $f0, $f7
    ctx->pc = 0x285388u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_28538c:
    // 0x28538c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x28538cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_285390:
    // 0x285390: 0x526d0001  beql        $s3, $t5, . + 4 + (0x1 << 2)
label_285394:
    if (ctx->pc == 0x285394u) {
        ctx->pc = 0x285394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285390u;
        // 0x285394: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x285398u;
        goto label_285398;
    }
    ctx->pc = 0x285390u;
    {
        const bool branch_taken_0x285390 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 13));
        if (branch_taken_0x285390) {
            ctx->pc = 0x285394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285390u;
            // 0x285394: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x285398u;
            goto label_285398;
        }
    }
    ctx->pc = 0x285398u;
label_285398:
    // 0x285398: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x285398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28539c:
    // 0x28539c: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x28539cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_2853a0:
    // 0x2853a0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x2853a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_2853a4:
    // 0x2853a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2853a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2853a8:
    // 0x2853a8: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x2853a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
label_2853ac:
    // 0x2853ac: 0xb4102a  slt         $v0, $a1, $s4
    ctx->pc = 0x2853acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_2853b0:
    // 0x2853b0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_2853b4:
    if (ctx->pc == 0x2853B4u) {
        ctx->pc = 0x2853B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853B0u;
        // 0x2853b4: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853B8u;
        goto label_2853b8;
    }
    ctx->pc = 0x2853B0u;
    {
        const bool branch_taken_0x2853b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2853B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853B0u;
        // 0x2853b4: 0x250c0001  addiu       $t4, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2853b0) {
            ctx->pc = 0x285458u;
            goto label_285458;
        }
    }
    ctx->pc = 0x2853B8u;
label_2853b8:
    // 0x2853b8: 0x46001186  mov.s       $f6, $f2
    ctx->pc = 0x2853b8u;
    ctx->f[6] = FPU_MOV_S(ctx->f[2]);
label_2853bc:
    // 0x2853bc: 0x46000946  mov.s       $f5, $f1
    ctx->pc = 0x2853bcu;
    ctx->f[5] = FPU_MOV_S(ctx->f[1]);
label_2853c0:
    // 0x2853c0: 0x46000106  mov.s       $f4, $f0
    ctx->pc = 0x2853c0u;
    ctx->f[4] = FPU_MOV_S(ctx->f[0]);
label_2853c4:
    // 0x2853c4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2853c4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2853c8:
    // 0x2853c8: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x2853c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2853cc:
    // 0x2853cc: 0x180382d  daddu       $a3, $t4, $zero
    ctx->pc = 0x2853ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2853d0:
    // 0x2853d0: 0xf3001a  div         $zero, $a3, $s3
    ctx->pc = 0x2853d0u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2853d4:
    // 0x2853d4: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_2853d8:
    if (ctx->pc == 0x2853D8u) {
        ctx->pc = 0x2853D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2853D4u;
        // 0x2853d8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2853DCu;
        goto label_2853dc;
    }
    ctx->pc = 0x2853D4u;
    {
        const bool branch_taken_0x2853d4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x2853d4) {
            ctx->pc = 0x2853D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2853D4u;
            // 0x2853d8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2853DCu;
            goto label_2853dc;
        }
    }
    ctx->pc = 0x2853DCu;
label_2853dc:
    // 0x2853dc: 0x1810  mfhi        $v1
    ctx->pc = 0x2853dcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_2853e0:
    // 0x2853e0: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x2853e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2853e4:
    // 0x2853e4: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x2853e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2853e8:
    // 0x2853e8: 0x627c2  srl         $a0, $a2, 31
    ctx->pc = 0x2853e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_2853ec:
    // 0x2853ec: 0x3c42021  addu        $a0, $fp, $a0
    ctx->pc = 0x2853ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
label_2853f0:
    // 0x2853f0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2853f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2853f4:
    // 0x2853f4: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x2853f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
label_2853f8:
    // 0x2853f8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2853f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2853fc:
    // 0x2853fc: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x2853fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_285400:
    // 0x285400: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x285400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285404:
    // 0x285404: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x285404u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_285408:
    // 0x285408: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x285408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_28540c:
    // 0x28540c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x28540cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285410:
    // 0x285410: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285410u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285414:
    // 0x285414: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x285414u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_285418:
    // 0x285418: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x285418u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28541c:
    // 0x28541c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x28541cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_285420:
    // 0x285420: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x285420u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_285424:
    // 0x285424: 0x46023180  add.s       $f6, $f6, $f2
    ctx->pc = 0x285424u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[2]);
label_285428:
    // 0x285428: 0x46012940  add.s       $f5, $f5, $f1
    ctx->pc = 0x285428u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[1]);
label_28542c:
    // 0x28542c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28542cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_285430:
    // 0x285430: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x285430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_285434:
    // 0x285434: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x285434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_285438:
    // 0x285438: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x285438u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28543c:
    // 0x28543c: 0x1480ffe4  bnez        $a0, . + 4 + (-0x1C << 2)
label_285440:
    if (ctx->pc == 0x285440u) {
        ctx->pc = 0x285440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28543Cu;
        // 0x285440: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285444u;
        goto label_285444;
    }
    ctx->pc = 0x28543Cu;
    {
        const bool branch_taken_0x28543c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x285440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28543Cu;
        // 0x285440: 0x8fa60078  lw          $a2, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28543c) {
            ctx->pc = 0x2853D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2853d0;
        }
    }
    ctx->pc = 0x285444u;
label_285444:
    // 0x285444: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x285444u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_285448:
    // 0x285448: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x285448u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28544c:
    // 0x28544c: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x28544cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_285450:
    // 0x285450: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285454:
    // 0x285454: 0x0  nop
    ctx->pc = 0x285454u;
    // NOP
label_285458:
    // 0x285458: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x285458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28545c:
    // 0x28545c: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
label_285460:
    if (ctx->pc == 0x285460u) {
        ctx->pc = 0x285460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28545Cu;
        // 0x285460: 0x123843  sra         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285464u;
        goto label_285464;
    }
    ctx->pc = 0x28545Cu;
    {
        const bool branch_taken_0x28545c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28545Cu;
        // 0x285460: 0x123843  sra         $a3, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28545c) {
            ctx->pc = 0x285594u;
            goto label_285594;
        }
    }
    ctx->pc = 0x285464u;
label_285464:
    // 0x285464: 0x2683021  addu        $a2, $s3, $t0
    ctx->pc = 0x285464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 8)));
label_285468:
    // 0x285468: 0x24e5ffff  addiu       $a1, $a3, -0x1
    ctx->pc = 0x285468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
label_28546c:
    // 0x28546c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28546cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285470:
    // 0x285470: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x285470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_285474:
    // 0x285474: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x285474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_285478:
    // 0x285478: 0xc7a50004  lwc1        $f5, 0x4($sp)
    ctx->pc = 0x285478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_28547c:
    // 0x28547c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x28547cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_285480:
    // 0x285480: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x285480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_285484:
    // 0x285484: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x285484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_285488:
    // 0x285488: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_28548c:
    if (ctx->pc == 0x28548Cu) {
        ctx->pc = 0x28548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285488u;
        // 0x28548c: 0x2564fffc  addiu       $a0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285490u;
        goto label_285490;
    }
    ctx->pc = 0x285488u;
    {
        const bool branch_taken_0x285488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28548Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285488u;
        // 0x28548c: 0x2564fffc  addiu       $a0, $t3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285488) {
            ctx->pc = 0x2854E8u;
            goto label_2854e8;
        }
    }
    ctx->pc = 0x285490u;
label_285490:
    // 0x285490: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x285490u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_285494:
    // 0x285494: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_285498:
    if (ctx->pc == 0x285498u) {
        ctx->pc = 0x285498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285494u;
        // 0x285498: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28549Cu;
        goto label_28549c;
    }
    ctx->pc = 0x285494u;
    {
        const bool branch_taken_0x285494 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x285494) {
            ctx->pc = 0x285498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285494u;
            // 0x285498: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28549Cu;
            goto label_28549c;
        }
    }
    ctx->pc = 0x28549Cu;
label_28549c:
    // 0x28549c: 0x1010  mfhi        $v0
    ctx->pc = 0x28549cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2854a0:
    // 0x2854a0: 0x491818  mult        $v1, $v0, $t1
    ctx->pc = 0x2854a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2854a4:
    // 0x2854a4: 0x761021  addu        $v0, $v1, $s6
    ctx->pc = 0x2854a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
label_2854a8:
    // 0x2854a8: 0xc560fffc  lwc1        $f0, -0x4($t3)
    ctx->pc = 0x2854a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2854ac:
    // 0x2854ac: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2854acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2854b0:
    // 0x2854b0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2854b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2854b4:
    // 0x2854b4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2854b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2854b8:
    // 0x2854b8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2854b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2854bc:
    // 0x2854bc: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2854bcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2854c0:
    // 0x2854c0: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2854c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2854c4:
    // 0x2854c4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2854c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_2854c8:
    // 0x2854c8: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x2854c8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_2854cc:
    // 0x2854cc: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x2854ccu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_2854d0:
    // 0x2854d0: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x2854d0u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_2854d4:
    // 0x2854d4: 0x2564fff8  addiu       $a0, $t3, -0x8
    ctx->pc = 0x2854d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967288));
label_2854d8:
    // 0x2854d8: 0x24e5fffe  addiu       $a1, $a3, -0x2
    ctx->pc = 0x2854d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967294));
label_2854dc:
    // 0x2854dc: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
label_2854e0:
    if (ctx->pc == 0x2854E0u) {
        ctx->pc = 0x2854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854DCu;
        // 0x2854e0: 0x24c3fffe  addiu       $v1, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854E4u;
        goto label_2854e4;
    }
    ctx->pc = 0x2854DCu;
    {
        const bool branch_taken_0x2854dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2854E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854DCu;
        // 0x2854e0: 0x24c3fffe  addiu       $v1, $a2, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2854dc) {
            ctx->pc = 0x285588u;
            goto label_285588;
        }
    }
    ctx->pc = 0x2854E4u;
label_2854e4:
    // 0x2854e4: 0x0  nop
    ctx->pc = 0x2854e4u;
    // NOP
label_2854e8:
    // 0x2854e8: 0x73001a  div         $zero, $v1, $s3
    ctx->pc = 0x2854e8u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_2854ec:
    // 0x2854ec: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_2854f0:
    if (ctx->pc == 0x2854F0u) {
        ctx->pc = 0x2854F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2854ECu;
        // 0x2854f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2854F4u;
        goto label_2854f4;
    }
    ctx->pc = 0x2854ECu;
    {
        const bool branch_taken_0x2854ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x2854ec) {
            ctx->pc = 0x2854F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2854ECu;
            // 0x2854f0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2854F4u;
            goto label_2854f4;
        }
    }
    ctx->pc = 0x2854F4u;
label_2854f4:
    // 0x2854f4: 0x1010  mfhi        $v0
    ctx->pc = 0x2854f4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2854f8:
    // 0x2854f8: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x2854f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2854fc:
    // 0x2854fc: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x2854fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_285500:
    // 0x285500: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x285500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_285504:
    // 0x285504: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x285504u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285508:
    // 0x285508: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x285508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_28550c:
    // 0x28550c: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x28550cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285510:
    // 0x285510: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x285510u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_285514:
    // 0x285514: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x285514u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_285518:
    // 0x285518: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x285518u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_28551c:
    // 0x28551c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28551cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_285520:
    // 0x285520: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x285520u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_285524:
    // 0x285524: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x285524u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_285528:
    // 0x285528: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x285528u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_28552c:
    // 0x28552c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x28552cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_285530:
    // 0x285530: 0x53001a  div         $zero, $v0, $s3
    ctx->pc = 0x285530u;
    { int32_t divisor = GPR_S32(ctx, 19);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_285534:
    // 0x285534: 0x526a0001  beql        $s3, $t2, . + 4 + (0x1 << 2)
label_285538:
    if (ctx->pc == 0x285538u) {
        ctx->pc = 0x285538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285534u;
        // 0x285538: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x28553Cu;
        goto label_28553c;
    }
    ctx->pc = 0x285534u;
    {
        const bool branch_taken_0x285534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 10));
        if (branch_taken_0x285534) {
            ctx->pc = 0x285538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x285534u;
            // 0x285538: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28553Cu;
            goto label_28553c;
        }
    }
    ctx->pc = 0x28553Cu;
label_28553c:
    // 0x28553c: 0x1010  mfhi        $v0
    ctx->pc = 0x28553cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_285540:
    // 0x285540: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x285540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_285544:
    // 0x285544: 0xd61021  addu        $v0, $a2, $s6
    ctx->pc = 0x285544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 22)));
label_285548:
    // 0x285548: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x285548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28554c:
    // 0x28554c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28554cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_285550:
    // 0x285550: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x285550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_285554:
    // 0x285554: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x285554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_285558:
    // 0x285558: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x285558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28555c:
    // 0x28555c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x28555cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_285560:
    // 0x285560: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x285560u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_285564:
    // 0x285564: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x285564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_285568:
    // 0x285568: 0x46032100  add.s       $f4, $f4, $f3
    ctx->pc = 0x285568u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[3]);
label_28556c:
    // 0x28556c: 0x46013180  add.s       $f6, $f6, $f1
    ctx->pc = 0x28556cu;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[1]);
label_285570:
    // 0x285570: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x285570u;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_285574:
    // 0x285574: 0x2484fff8  addiu       $a0, $a0, -0x8
    ctx->pc = 0x285574u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
label_285578:
    // 0x285578: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x285578u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
label_28557c:
    // 0x28557c: 0x14a0ffda  bnez        $a1, . + 4 + (-0x26 << 2)
label_285580:
    if (ctx->pc == 0x285580u) {
        ctx->pc = 0x285580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28557Cu;
        // 0x285580: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285584u;
        goto label_285584;
    }
    ctx->pc = 0x28557Cu;
    {
        const bool branch_taken_0x28557c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x285580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28557Cu;
        // 0x285580: 0x2463fffe  addiu       $v1, $v1, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28557c) {
            ctx->pc = 0x2854E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2854e8;
        }
    }
    ctx->pc = 0x285584u;
label_285584:
    // 0x285584: 0x0  nop
    ctx->pc = 0x285584u;
    // NOP
label_285588:
    // 0x285588: 0xe7a40008  swc1        $f4, 0x8($sp)
    ctx->pc = 0x285588u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_28558c:
    // 0x28558c: 0xe7a50004  swc1        $f5, 0x4($sp)
    ctx->pc = 0x28558cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_285590:
    // 0x285590: 0xe7a60000  swc1        $f6, 0x0($sp)
    ctx->pc = 0x285590u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_285594:
    // 0x285594: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x285594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_285598:
    // 0x285598: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x285598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_28559c:
    // 0x28559c: 0x600013  mtlo        $v1
    ctx->pc = 0x28559cu;
    ctx->lo = GPR_U64(ctx, 3);
label_2855a0:
    // 0x2855a0: 0x710e1000  madd        $v0, $t0, $t6
    ctx->pc = 0x2855a0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 14); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2855a4:
    // 0x2855a4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2855a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2855a8:
    // 0x2855a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x2855a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_2855ac:
    // 0x2855ac: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x2855acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_2855b0:
    // 0x2855b0: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x2855b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2855b4:
    // 0x2855b4: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x2855b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2855b8:
    // 0x2855b8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x2855b8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_2855bc:
    // 0x2855bc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x2855bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_2855c0:
    // 0x2855c0: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x2855c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2855c4:
    // 0x2855c4: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x2855c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2855c8:
    // 0x2855c8: 0x113102a  slt         $v0, $t0, $s3
    ctx->pc = 0x2855c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2855cc:
    // 0x2855cc: 0x1440ff62  bnez        $v0, . + 4 + (-0x9E << 2)
label_2855d0:
    if (ctx->pc == 0x2855D0u) {
        ctx->pc = 0x2855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855CCu;
        // 0x2855d0: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2855D4u;
        goto label_2855d4;
    }
    ctx->pc = 0x2855CCu;
    {
        const bool branch_taken_0x2855cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2855D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2855CCu;
        // 0x2855d0: 0xe4600008  swc1        $f0, 0x8($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2855cc) {
            ctx->pc = 0x285358u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_285358;
        }
    }
    ctx->pc = 0x2855D4u;
label_2855d4:
    // 0x2855d4: 0x0  nop
    ctx->pc = 0x2855d4u;
    // NOP
label_2855d8:
    // 0x2855d8: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x2855d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2855dc:
    // 0x2855dc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2855dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2855e0:
    // 0x2855e0: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x2855e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
label_2855e4:
    // 0x2855e4: 0x600013  mtlo        $v1
    ctx->pc = 0x2855e4u;
    ctx->lo = GPR_U64(ctx, 3);
label_2855e8:
    // 0x2855e8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2855e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2855ec:
    // 0x2855ec: 0x72621000  madd        $v0, $s3, $v0
    ctx->pc = 0x2855ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2855f0:
    // 0x2855f0: 0x24850fc8  addiu       $a1, $a0, 0xFC8
    ctx->pc = 0x2855f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4040));
label_2855f4:
    // 0x2855f4: 0x68470007  ldl         $a3, 0x7($v0)
    ctx->pc = 0x2855f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2855f8:
    // 0x2855f8: 0x6c470000  ldr         $a3, 0x0($v0)
    ctx->pc = 0x2855f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2855fc:
    // 0x2855fc: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x2855fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_285600:
    // 0x285600: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x285600u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_285604:
    // 0x285604: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x285604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_285608:
    // 0x285608: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x285608u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
label_28560c:
    // 0x28560c: 0x68c70013  ldl         $a3, 0x13($a2)
    ctx->pc = 0x28560cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_285610:
    // 0x285610: 0x6cc7000c  ldr         $a3, 0xC($a2)
    ctx->pc = 0x285610u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_285614:
    // 0x285614: 0x8cc80014  lw          $t0, 0x14($a2)
    ctx->pc = 0x285614u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_285618:
    // 0x285618: 0xb0470013  sdl         $a3, 0x13($v0)
    ctx->pc = 0x285618u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_28561c:
    // 0x28561c: 0xb447000c  sdr         $a3, 0xC($v0)
    ctx->pc = 0x28561cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_285620:
    // 0x285620: 0xac480014  sw          $t0, 0x14($v0)
    ctx->pc = 0x285620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 8));
label_285624:
    // 0x285624: 0x68c7001f  ldl         $a3, 0x1F($a2)
    ctx->pc = 0x285624u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_285628:
    // 0x285628: 0x6cc70018  ldr         $a3, 0x18($a2)
    ctx->pc = 0x285628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_28562c:
    // 0x28562c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x28562cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_285630:
    // 0x285630: 0xb047001f  sdl         $a3, 0x1F($v0)
    ctx->pc = 0x285630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_285634:
    // 0x285634: 0xb4470018  sdr         $a3, 0x18($v0)
    ctx->pc = 0x285634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_285638:
    // 0x285638: 0xac480020  sw          $t0, 0x20($v0)
    ctx->pc = 0x285638u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 8));
label_28563c:
    // 0x28563c: 0x8ca3010c  lw          $v1, 0x10C($a1)
    ctx->pc = 0x28563cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 268)));
label_285640:
    // 0x285640: 0x60f809  jalr        $v1
label_285644:
    if (ctx->pc == 0x285644u) {
        ctx->pc = 0x285644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285640u;
        // 0x285644: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285648u;
        goto label_285648;
    }
    ctx->pc = 0x285640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x285648u);
        ctx->pc = 0x285644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285640u;
        // 0x285644: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285640u, 0x285648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x285648u;
label_285648:
    // 0x285648: 0x10000008  b           . + 4 + (0x8 << 2)
label_28564c:
    if (ctx->pc == 0x28564Cu) {
        ctx->pc = 0x28564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285648u;
        // 0x28564c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285650u;
        goto label_285650;
    }
    ctx->pc = 0x285648u;
    {
        const bool branch_taken_0x285648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28564Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285648u;
        // 0x28564c: 0x8fa20070  lw          $v0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285648) {
            ctx->pc = 0x28566Cu;
            goto label_28566c;
        }
    }
    ctx->pc = 0x285650u;
label_285650:
    // 0x285650: 0xc092848  jal         func_24A120
label_285654:
    if (ctx->pc == 0x285654u) {
        ctx->pc = 0x285654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285650u;
        // 0x285654: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x285658u;
        goto label_285658;
    }
    ctx->pc = 0x285650u;
    SET_GPR_U32(ctx, 31, 0x285658u);
    ctx->pc = 0x285654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x285650u;
    // 0x285654: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A120u, 0x285650u, 0x285658u)) {
        return;
    }
    ctx->pc = 0x285658u;
label_285658:
    // 0x285658: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x285658u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_28565c:
    // 0x28565c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28565cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_285660:
    // 0x285660: 0xc09281a  jal         func_24A068
label_285664:
    if (ctx->pc == 0x285664u) {
        ctx->pc = 0x285668u;
        goto label_285668;
    }
    ctx->pc = 0x285660u;
    SET_GPR_U32(ctx, 31, 0x285668u);
    ctx->pc = 0x24A068u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A068u, 0x285660u, 0x285668u)) {
        return;
    }
    ctx->pc = 0x285668u;
label_285668:
    // 0x285668: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x285668u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28566c:
    // 0x28566c: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x28566cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_285670:
    // 0x285670: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x285670u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_285674:
    // 0x285674: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x285674u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_285678:
    // 0x285678: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x285678u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28567c:
    // 0x28567c: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x28567cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_285680:
    // 0x285680: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x285680u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_285684:
    // 0x285684: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x285684u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_285688:
    // 0x285688: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x285688u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_28568c:
    // 0x28568c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28568cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_285690:
    // 0x285690: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x285690u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_285694:
    // 0x285694: 0xc7b40120  lwc1        $f20, 0x120($sp)
    ctx->pc = 0x285694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_285698:
    // 0x285698: 0x3e00008  jr          $ra
label_28569c:
    if (ctx->pc == 0x28569Cu) {
        ctx->pc = 0x28569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285698u;
        // 0x28569c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2856A0u;
        goto label_fallthrough_0x285698;
    }
    ctx->pc = 0x285698u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28569Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x285698u;
        // 0x28569c: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x285698u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x285698:
    ctx->pc = 0x2856A0u;
}
