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

// Function: sub_001436F0
// Address: 0x1436f0 - 0x143f48
void sub_001436F0_0x1436f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001436F0_0x1436f0");
#endif

    switch (ctx->pc) {
        case 0x1436f0u: goto label_1436f0;
        case 0x1436f4u: goto label_1436f4;
        case 0x1436f8u: goto label_1436f8;
        case 0x1436fcu: goto label_1436fc;
        case 0x143700u: goto label_143700;
        case 0x143704u: goto label_143704;
        case 0x143708u: goto label_143708;
        case 0x14370cu: goto label_14370c;
        case 0x143710u: goto label_143710;
        case 0x143714u: goto label_143714;
        case 0x143718u: goto label_143718;
        case 0x14371cu: goto label_14371c;
        case 0x143720u: goto label_143720;
        case 0x143724u: goto label_143724;
        case 0x143728u: goto label_143728;
        case 0x14372cu: goto label_14372c;
        case 0x143730u: goto label_143730;
        case 0x143734u: goto label_143734;
        case 0x143738u: goto label_143738;
        case 0x14373cu: goto label_14373c;
        case 0x143740u: goto label_143740;
        case 0x143744u: goto label_143744;
        case 0x143748u: goto label_143748;
        case 0x14374cu: goto label_14374c;
        case 0x143750u: goto label_143750;
        case 0x143754u: goto label_143754;
        case 0x143758u: goto label_143758;
        case 0x14375cu: goto label_14375c;
        case 0x143760u: goto label_143760;
        case 0x143764u: goto label_143764;
        case 0x143768u: goto label_143768;
        case 0x14376cu: goto label_14376c;
        case 0x143770u: goto label_143770;
        case 0x143774u: goto label_143774;
        case 0x143778u: goto label_143778;
        case 0x14377cu: goto label_14377c;
        case 0x143780u: goto label_143780;
        case 0x143784u: goto label_143784;
        case 0x143788u: goto label_143788;
        case 0x14378cu: goto label_14378c;
        case 0x143790u: goto label_143790;
        case 0x143794u: goto label_143794;
        case 0x143798u: goto label_143798;
        case 0x14379cu: goto label_14379c;
        case 0x1437a0u: goto label_1437a0;
        case 0x1437a4u: goto label_1437a4;
        case 0x1437a8u: goto label_1437a8;
        case 0x1437acu: goto label_1437ac;
        case 0x1437b0u: goto label_1437b0;
        case 0x1437b4u: goto label_1437b4;
        case 0x1437b8u: goto label_1437b8;
        case 0x1437bcu: goto label_1437bc;
        case 0x1437c0u: goto label_1437c0;
        case 0x1437c4u: goto label_1437c4;
        case 0x1437c8u: goto label_1437c8;
        case 0x1437ccu: goto label_1437cc;
        case 0x1437d0u: goto label_1437d0;
        case 0x1437d4u: goto label_1437d4;
        case 0x1437d8u: goto label_1437d8;
        case 0x1437dcu: goto label_1437dc;
        case 0x1437e0u: goto label_1437e0;
        case 0x1437e4u: goto label_1437e4;
        case 0x1437e8u: goto label_1437e8;
        case 0x1437ecu: goto label_1437ec;
        case 0x1437f0u: goto label_1437f0;
        case 0x1437f4u: goto label_1437f4;
        case 0x1437f8u: goto label_1437f8;
        case 0x1437fcu: goto label_1437fc;
        case 0x143800u: goto label_143800;
        case 0x143804u: goto label_143804;
        case 0x143808u: goto label_143808;
        case 0x14380cu: goto label_14380c;
        case 0x143810u: goto label_143810;
        case 0x143814u: goto label_143814;
        case 0x143818u: goto label_143818;
        case 0x14381cu: goto label_14381c;
        case 0x143820u: goto label_143820;
        case 0x143824u: goto label_143824;
        case 0x143828u: goto label_143828;
        case 0x14382cu: goto label_14382c;
        case 0x143830u: goto label_143830;
        case 0x143834u: goto label_143834;
        case 0x143838u: goto label_143838;
        case 0x14383cu: goto label_14383c;
        case 0x143840u: goto label_143840;
        case 0x143844u: goto label_143844;
        case 0x143848u: goto label_143848;
        case 0x14384cu: goto label_14384c;
        case 0x143850u: goto label_143850;
        case 0x143854u: goto label_143854;
        case 0x143858u: goto label_143858;
        case 0x14385cu: goto label_14385c;
        case 0x143860u: goto label_143860;
        case 0x143864u: goto label_143864;
        case 0x143868u: goto label_143868;
        case 0x14386cu: goto label_14386c;
        case 0x143870u: goto label_143870;
        case 0x143874u: goto label_143874;
        case 0x143878u: goto label_143878;
        case 0x14387cu: goto label_14387c;
        case 0x143880u: goto label_143880;
        case 0x143884u: goto label_143884;
        case 0x143888u: goto label_143888;
        case 0x14388cu: goto label_14388c;
        case 0x143890u: goto label_143890;
        case 0x143894u: goto label_143894;
        case 0x143898u: goto label_143898;
        case 0x14389cu: goto label_14389c;
        case 0x1438a0u: goto label_1438a0;
        case 0x1438a4u: goto label_1438a4;
        case 0x1438a8u: goto label_1438a8;
        case 0x1438acu: goto label_1438ac;
        case 0x1438b0u: goto label_1438b0;
        case 0x1438b4u: goto label_1438b4;
        case 0x1438b8u: goto label_1438b8;
        case 0x1438bcu: goto label_1438bc;
        case 0x1438c0u: goto label_1438c0;
        case 0x1438c4u: goto label_1438c4;
        case 0x1438c8u: goto label_1438c8;
        case 0x1438ccu: goto label_1438cc;
        case 0x1438d0u: goto label_1438d0;
        case 0x1438d4u: goto label_1438d4;
        case 0x1438d8u: goto label_1438d8;
        case 0x1438dcu: goto label_1438dc;
        case 0x1438e0u: goto label_1438e0;
        case 0x1438e4u: goto label_1438e4;
        case 0x1438e8u: goto label_1438e8;
        case 0x1438ecu: goto label_1438ec;
        case 0x1438f0u: goto label_1438f0;
        case 0x1438f4u: goto label_1438f4;
        case 0x1438f8u: goto label_1438f8;
        case 0x1438fcu: goto label_1438fc;
        case 0x143900u: goto label_143900;
        case 0x143904u: goto label_143904;
        case 0x143908u: goto label_143908;
        case 0x14390cu: goto label_14390c;
        case 0x143910u: goto label_143910;
        case 0x143914u: goto label_143914;
        case 0x143918u: goto label_143918;
        case 0x14391cu: goto label_14391c;
        case 0x143920u: goto label_143920;
        case 0x143924u: goto label_143924;
        case 0x143928u: goto label_143928;
        case 0x14392cu: goto label_14392c;
        case 0x143930u: goto label_143930;
        case 0x143934u: goto label_143934;
        case 0x143938u: goto label_143938;
        case 0x14393cu: goto label_14393c;
        case 0x143940u: goto label_143940;
        case 0x143944u: goto label_143944;
        case 0x143948u: goto label_143948;
        case 0x14394cu: goto label_14394c;
        case 0x143950u: goto label_143950;
        case 0x143954u: goto label_143954;
        case 0x143958u: goto label_143958;
        case 0x14395cu: goto label_14395c;
        case 0x143960u: goto label_143960;
        case 0x143964u: goto label_143964;
        case 0x143968u: goto label_143968;
        case 0x14396cu: goto label_14396c;
        case 0x143970u: goto label_143970;
        case 0x143974u: goto label_143974;
        case 0x143978u: goto label_143978;
        case 0x14397cu: goto label_14397c;
        case 0x143980u: goto label_143980;
        case 0x143984u: goto label_143984;
        case 0x143988u: goto label_143988;
        case 0x14398cu: goto label_14398c;
        case 0x143990u: goto label_143990;
        case 0x143994u: goto label_143994;
        case 0x143998u: goto label_143998;
        case 0x14399cu: goto label_14399c;
        case 0x1439a0u: goto label_1439a0;
        case 0x1439a4u: goto label_1439a4;
        case 0x1439a8u: goto label_1439a8;
        case 0x1439acu: goto label_1439ac;
        case 0x1439b0u: goto label_1439b0;
        case 0x1439b4u: goto label_1439b4;
        case 0x1439b8u: goto label_1439b8;
        case 0x1439bcu: goto label_1439bc;
        case 0x1439c0u: goto label_1439c0;
        case 0x1439c4u: goto label_1439c4;
        case 0x1439c8u: goto label_1439c8;
        case 0x1439ccu: goto label_1439cc;
        case 0x1439d0u: goto label_1439d0;
        case 0x1439d4u: goto label_1439d4;
        case 0x1439d8u: goto label_1439d8;
        case 0x1439dcu: goto label_1439dc;
        case 0x1439e0u: goto label_1439e0;
        case 0x1439e4u: goto label_1439e4;
        case 0x1439e8u: goto label_1439e8;
        case 0x1439ecu: goto label_1439ec;
        case 0x1439f0u: goto label_1439f0;
        case 0x1439f4u: goto label_1439f4;
        case 0x1439f8u: goto label_1439f8;
        case 0x1439fcu: goto label_1439fc;
        case 0x143a00u: goto label_143a00;
        case 0x143a04u: goto label_143a04;
        case 0x143a08u: goto label_143a08;
        case 0x143a0cu: goto label_143a0c;
        case 0x143a10u: goto label_143a10;
        case 0x143a14u: goto label_143a14;
        case 0x143a18u: goto label_143a18;
        case 0x143a1cu: goto label_143a1c;
        case 0x143a20u: goto label_143a20;
        case 0x143a24u: goto label_143a24;
        case 0x143a28u: goto label_143a28;
        case 0x143a2cu: goto label_143a2c;
        case 0x143a30u: goto label_143a30;
        case 0x143a34u: goto label_143a34;
        case 0x143a38u: goto label_143a38;
        case 0x143a3cu: goto label_143a3c;
        case 0x143a40u: goto label_143a40;
        case 0x143a44u: goto label_143a44;
        case 0x143a48u: goto label_143a48;
        case 0x143a4cu: goto label_143a4c;
        case 0x143a50u: goto label_143a50;
        case 0x143a54u: goto label_143a54;
        case 0x143a58u: goto label_143a58;
        case 0x143a5cu: goto label_143a5c;
        case 0x143a60u: goto label_143a60;
        case 0x143a64u: goto label_143a64;
        case 0x143a68u: goto label_143a68;
        case 0x143a6cu: goto label_143a6c;
        case 0x143a70u: goto label_143a70;
        case 0x143a74u: goto label_143a74;
        case 0x143a78u: goto label_143a78;
        case 0x143a7cu: goto label_143a7c;
        case 0x143a80u: goto label_143a80;
        case 0x143a84u: goto label_143a84;
        case 0x143a88u: goto label_143a88;
        case 0x143a8cu: goto label_143a8c;
        case 0x143a90u: goto label_143a90;
        case 0x143a94u: goto label_143a94;
        case 0x143a98u: goto label_143a98;
        case 0x143a9cu: goto label_143a9c;
        case 0x143aa0u: goto label_143aa0;
        case 0x143aa4u: goto label_143aa4;
        case 0x143aa8u: goto label_143aa8;
        case 0x143aacu: goto label_143aac;
        case 0x143ab0u: goto label_143ab0;
        case 0x143ab4u: goto label_143ab4;
        case 0x143ab8u: goto label_143ab8;
        case 0x143abcu: goto label_143abc;
        case 0x143ac0u: goto label_143ac0;
        case 0x143ac4u: goto label_143ac4;
        case 0x143ac8u: goto label_143ac8;
        case 0x143accu: goto label_143acc;
        case 0x143ad0u: goto label_143ad0;
        case 0x143ad4u: goto label_143ad4;
        case 0x143ad8u: goto label_143ad8;
        case 0x143adcu: goto label_143adc;
        case 0x143ae0u: goto label_143ae0;
        case 0x143ae4u: goto label_143ae4;
        case 0x143ae8u: goto label_143ae8;
        case 0x143aecu: goto label_143aec;
        case 0x143af0u: goto label_143af0;
        case 0x143af4u: goto label_143af4;
        case 0x143af8u: goto label_143af8;
        case 0x143afcu: goto label_143afc;
        case 0x143b00u: goto label_143b00;
        case 0x143b04u: goto label_143b04;
        case 0x143b08u: goto label_143b08;
        case 0x143b0cu: goto label_143b0c;
        case 0x143b10u: goto label_143b10;
        case 0x143b14u: goto label_143b14;
        case 0x143b18u: goto label_143b18;
        case 0x143b1cu: goto label_143b1c;
        case 0x143b20u: goto label_143b20;
        case 0x143b24u: goto label_143b24;
        case 0x143b28u: goto label_143b28;
        case 0x143b2cu: goto label_143b2c;
        case 0x143b30u: goto label_143b30;
        case 0x143b34u: goto label_143b34;
        case 0x143b38u: goto label_143b38;
        case 0x143b3cu: goto label_143b3c;
        case 0x143b40u: goto label_143b40;
        case 0x143b44u: goto label_143b44;
        case 0x143b48u: goto label_143b48;
        case 0x143b4cu: goto label_143b4c;
        case 0x143b50u: goto label_143b50;
        case 0x143b54u: goto label_143b54;
        case 0x143b58u: goto label_143b58;
        case 0x143b5cu: goto label_143b5c;
        case 0x143b60u: goto label_143b60;
        case 0x143b64u: goto label_143b64;
        case 0x143b68u: goto label_143b68;
        case 0x143b6cu: goto label_143b6c;
        case 0x143b70u: goto label_143b70;
        case 0x143b74u: goto label_143b74;
        case 0x143b78u: goto label_143b78;
        case 0x143b7cu: goto label_143b7c;
        case 0x143b80u: goto label_143b80;
        case 0x143b84u: goto label_143b84;
        case 0x143b88u: goto label_143b88;
        case 0x143b8cu: goto label_143b8c;
        case 0x143b90u: goto label_143b90;
        case 0x143b94u: goto label_143b94;
        case 0x143b98u: goto label_143b98;
        case 0x143b9cu: goto label_143b9c;
        case 0x143ba0u: goto label_143ba0;
        case 0x143ba4u: goto label_143ba4;
        case 0x143ba8u: goto label_143ba8;
        case 0x143bacu: goto label_143bac;
        case 0x143bb0u: goto label_143bb0;
        case 0x143bb4u: goto label_143bb4;
        case 0x143bb8u: goto label_143bb8;
        case 0x143bbcu: goto label_143bbc;
        case 0x143bc0u: goto label_143bc0;
        case 0x143bc4u: goto label_143bc4;
        case 0x143bc8u: goto label_143bc8;
        case 0x143bccu: goto label_143bcc;
        case 0x143bd0u: goto label_143bd0;
        case 0x143bd4u: goto label_143bd4;
        case 0x143bd8u: goto label_143bd8;
        case 0x143bdcu: goto label_143bdc;
        case 0x143be0u: goto label_143be0;
        case 0x143be4u: goto label_143be4;
        case 0x143be8u: goto label_143be8;
        case 0x143becu: goto label_143bec;
        case 0x143bf0u: goto label_143bf0;
        case 0x143bf4u: goto label_143bf4;
        case 0x143bf8u: goto label_143bf8;
        case 0x143bfcu: goto label_143bfc;
        case 0x143c00u: goto label_143c00;
        case 0x143c04u: goto label_143c04;
        case 0x143c08u: goto label_143c08;
        case 0x143c0cu: goto label_143c0c;
        case 0x143c10u: goto label_143c10;
        case 0x143c14u: goto label_143c14;
        case 0x143c18u: goto label_143c18;
        case 0x143c1cu: goto label_143c1c;
        case 0x143c20u: goto label_143c20;
        case 0x143c24u: goto label_143c24;
        case 0x143c28u: goto label_143c28;
        case 0x143c2cu: goto label_143c2c;
        case 0x143c30u: goto label_143c30;
        case 0x143c34u: goto label_143c34;
        case 0x143c38u: goto label_143c38;
        case 0x143c3cu: goto label_143c3c;
        case 0x143c40u: goto label_143c40;
        case 0x143c44u: goto label_143c44;
        case 0x143c48u: goto label_143c48;
        case 0x143c4cu: goto label_143c4c;
        case 0x143c50u: goto label_143c50;
        case 0x143c54u: goto label_143c54;
        case 0x143c58u: goto label_143c58;
        case 0x143c5cu: goto label_143c5c;
        case 0x143c60u: goto label_143c60;
        case 0x143c64u: goto label_143c64;
        case 0x143c68u: goto label_143c68;
        case 0x143c6cu: goto label_143c6c;
        case 0x143c70u: goto label_143c70;
        case 0x143c74u: goto label_143c74;
        case 0x143c78u: goto label_143c78;
        case 0x143c7cu: goto label_143c7c;
        case 0x143c80u: goto label_143c80;
        case 0x143c84u: goto label_143c84;
        case 0x143c88u: goto label_143c88;
        case 0x143c8cu: goto label_143c8c;
        case 0x143c90u: goto label_143c90;
        case 0x143c94u: goto label_143c94;
        case 0x143c98u: goto label_143c98;
        case 0x143c9cu: goto label_143c9c;
        case 0x143ca0u: goto label_143ca0;
        case 0x143ca4u: goto label_143ca4;
        case 0x143ca8u: goto label_143ca8;
        case 0x143cacu: goto label_143cac;
        case 0x143cb0u: goto label_143cb0;
        case 0x143cb4u: goto label_143cb4;
        case 0x143cb8u: goto label_143cb8;
        case 0x143cbcu: goto label_143cbc;
        case 0x143cc0u: goto label_143cc0;
        case 0x143cc4u: goto label_143cc4;
        case 0x143cc8u: goto label_143cc8;
        case 0x143cccu: goto label_143ccc;
        case 0x143cd0u: goto label_143cd0;
        case 0x143cd4u: goto label_143cd4;
        case 0x143cd8u: goto label_143cd8;
        case 0x143cdcu: goto label_143cdc;
        case 0x143ce0u: goto label_143ce0;
        case 0x143ce4u: goto label_143ce4;
        case 0x143ce8u: goto label_143ce8;
        case 0x143cecu: goto label_143cec;
        case 0x143cf0u: goto label_143cf0;
        case 0x143cf4u: goto label_143cf4;
        case 0x143cf8u: goto label_143cf8;
        case 0x143cfcu: goto label_143cfc;
        case 0x143d00u: goto label_143d00;
        case 0x143d04u: goto label_143d04;
        case 0x143d08u: goto label_143d08;
        case 0x143d0cu: goto label_143d0c;
        case 0x143d10u: goto label_143d10;
        case 0x143d14u: goto label_143d14;
        case 0x143d18u: goto label_143d18;
        case 0x143d1cu: goto label_143d1c;
        case 0x143d20u: goto label_143d20;
        case 0x143d24u: goto label_143d24;
        case 0x143d28u: goto label_143d28;
        case 0x143d2cu: goto label_143d2c;
        case 0x143d30u: goto label_143d30;
        case 0x143d34u: goto label_143d34;
        case 0x143d38u: goto label_143d38;
        case 0x143d3cu: goto label_143d3c;
        case 0x143d40u: goto label_143d40;
        case 0x143d44u: goto label_143d44;
        case 0x143d48u: goto label_143d48;
        case 0x143d4cu: goto label_143d4c;
        case 0x143d50u: goto label_143d50;
        case 0x143d54u: goto label_143d54;
        case 0x143d58u: goto label_143d58;
        case 0x143d5cu: goto label_143d5c;
        case 0x143d60u: goto label_143d60;
        case 0x143d64u: goto label_143d64;
        case 0x143d68u: goto label_143d68;
        case 0x143d6cu: goto label_143d6c;
        case 0x143d70u: goto label_143d70;
        case 0x143d74u: goto label_143d74;
        case 0x143d78u: goto label_143d78;
        case 0x143d7cu: goto label_143d7c;
        case 0x143d80u: goto label_143d80;
        case 0x143d84u: goto label_143d84;
        case 0x143d88u: goto label_143d88;
        case 0x143d8cu: goto label_143d8c;
        case 0x143d90u: goto label_143d90;
        case 0x143d94u: goto label_143d94;
        case 0x143d98u: goto label_143d98;
        case 0x143d9cu: goto label_143d9c;
        case 0x143da0u: goto label_143da0;
        case 0x143da4u: goto label_143da4;
        case 0x143da8u: goto label_143da8;
        case 0x143dacu: goto label_143dac;
        case 0x143db0u: goto label_143db0;
        case 0x143db4u: goto label_143db4;
        case 0x143db8u: goto label_143db8;
        case 0x143dbcu: goto label_143dbc;
        case 0x143dc0u: goto label_143dc0;
        case 0x143dc4u: goto label_143dc4;
        case 0x143dc8u: goto label_143dc8;
        case 0x143dccu: goto label_143dcc;
        case 0x143dd0u: goto label_143dd0;
        case 0x143dd4u: goto label_143dd4;
        case 0x143dd8u: goto label_143dd8;
        case 0x143ddcu: goto label_143ddc;
        case 0x143de0u: goto label_143de0;
        case 0x143de4u: goto label_143de4;
        case 0x143de8u: goto label_143de8;
        case 0x143decu: goto label_143dec;
        case 0x143df0u: goto label_143df0;
        case 0x143df4u: goto label_143df4;
        case 0x143df8u: goto label_143df8;
        case 0x143dfcu: goto label_143dfc;
        case 0x143e00u: goto label_143e00;
        case 0x143e04u: goto label_143e04;
        case 0x143e08u: goto label_143e08;
        case 0x143e0cu: goto label_143e0c;
        case 0x143e10u: goto label_143e10;
        case 0x143e14u: goto label_143e14;
        case 0x143e18u: goto label_143e18;
        case 0x143e1cu: goto label_143e1c;
        case 0x143e20u: goto label_143e20;
        case 0x143e24u: goto label_143e24;
        case 0x143e28u: goto label_143e28;
        case 0x143e2cu: goto label_143e2c;
        case 0x143e30u: goto label_143e30;
        case 0x143e34u: goto label_143e34;
        case 0x143e38u: goto label_143e38;
        case 0x143e3cu: goto label_143e3c;
        case 0x143e40u: goto label_143e40;
        case 0x143e44u: goto label_143e44;
        case 0x143e48u: goto label_143e48;
        case 0x143e4cu: goto label_143e4c;
        case 0x143e50u: goto label_143e50;
        case 0x143e54u: goto label_143e54;
        case 0x143e58u: goto label_143e58;
        case 0x143e5cu: goto label_143e5c;
        case 0x143e60u: goto label_143e60;
        case 0x143e64u: goto label_143e64;
        case 0x143e68u: goto label_143e68;
        case 0x143e6cu: goto label_143e6c;
        case 0x143e70u: goto label_143e70;
        case 0x143e74u: goto label_143e74;
        case 0x143e78u: goto label_143e78;
        case 0x143e7cu: goto label_143e7c;
        case 0x143e80u: goto label_143e80;
        case 0x143e84u: goto label_143e84;
        case 0x143e88u: goto label_143e88;
        case 0x143e8cu: goto label_143e8c;
        case 0x143e90u: goto label_143e90;
        case 0x143e94u: goto label_143e94;
        case 0x143e98u: goto label_143e98;
        case 0x143e9cu: goto label_143e9c;
        case 0x143ea0u: goto label_143ea0;
        case 0x143ea4u: goto label_143ea4;
        case 0x143ea8u: goto label_143ea8;
        case 0x143eacu: goto label_143eac;
        case 0x143eb0u: goto label_143eb0;
        case 0x143eb4u: goto label_143eb4;
        case 0x143eb8u: goto label_143eb8;
        case 0x143ebcu: goto label_143ebc;
        case 0x143ec0u: goto label_143ec0;
        case 0x143ec4u: goto label_143ec4;
        case 0x143ec8u: goto label_143ec8;
        case 0x143eccu: goto label_143ecc;
        case 0x143ed0u: goto label_143ed0;
        case 0x143ed4u: goto label_143ed4;
        case 0x143ed8u: goto label_143ed8;
        case 0x143edcu: goto label_143edc;
        case 0x143ee0u: goto label_143ee0;
        case 0x143ee4u: goto label_143ee4;
        case 0x143ee8u: goto label_143ee8;
        case 0x143eecu: goto label_143eec;
        case 0x143ef0u: goto label_143ef0;
        case 0x143ef4u: goto label_143ef4;
        case 0x143ef8u: goto label_143ef8;
        case 0x143efcu: goto label_143efc;
        case 0x143f00u: goto label_143f00;
        case 0x143f04u: goto label_143f04;
        case 0x143f08u: goto label_143f08;
        case 0x143f0cu: goto label_143f0c;
        case 0x143f10u: goto label_143f10;
        case 0x143f14u: goto label_143f14;
        case 0x143f18u: goto label_143f18;
        case 0x143f1cu: goto label_143f1c;
        case 0x143f20u: goto label_143f20;
        case 0x143f24u: goto label_143f24;
        case 0x143f28u: goto label_143f28;
        case 0x143f2cu: goto label_143f2c;
        case 0x143f30u: goto label_143f30;
        case 0x143f34u: goto label_143f34;
        case 0x143f38u: goto label_143f38;
        case 0x143f3cu: goto label_143f3c;
        case 0x143f40u: goto label_143f40;
        case 0x143f44u: goto label_143f44;
        default: break;
    }

    ctx->pc = 0x1436f0u;

label_1436f0:
    // 0x1436f0: 0x27bdfac0  addiu       $sp, $sp, -0x540
    ctx->pc = 0x1436f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965952));
label_1436f4:
    // 0x1436f4: 0x7fb00500  sq          $s0, 0x500($sp)
    ctx->pc = 0x1436f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1280), GPR_VEC(ctx, 16));
label_1436f8:
    // 0x1436f8: 0x7fb404c0  sq          $s4, 0x4C0($sp)
    ctx->pc = 0x1436f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1216), GPR_VEC(ctx, 20));
label_1436fc:
    // 0x1436fc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1436fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_143700:
    // 0x143700: 0x7fb104f0  sq          $s1, 0x4F0($sp)
    ctx->pc = 0x143700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1264), GPR_VEC(ctx, 17));
label_143704:
    // 0x143704: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x143704u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143708:
    // 0x143708: 0x7fb204e0  sq          $s2, 0x4E0($sp)
    ctx->pc = 0x143708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1248), GPR_VEC(ctx, 18));
label_14370c:
    // 0x14370c: 0x7fb304d0  sq          $s3, 0x4D0($sp)
    ctx->pc = 0x14370cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1232), GPR_VEC(ctx, 19));
label_143710:
    // 0x143710: 0x7fb504b0  sq          $s5, 0x4B0($sp)
    ctx->pc = 0x143710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1200), GPR_VEC(ctx, 21));
label_143714:
    // 0x143714: 0x7fb604a0  sq          $s6, 0x4A0($sp)
    ctx->pc = 0x143714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1184), GPR_VEC(ctx, 22));
label_143718:
    // 0x143718: 0x7fb70490  sq          $s7, 0x490($sp)
    ctx->pc = 0x143718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 23));
label_14371c:
    // 0x14371c: 0x7fbe0480  sq          $fp, 0x480($sp)
    ctx->pc = 0x14371cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 30));
label_143720:
    // 0x143720: 0xffbf0470  sd          $ra, 0x470($sp)
    ctx->pc = 0x143720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1136), GPR_U64(ctx, 31));
label_143724:
    // 0x143724: 0xe7b80530  swc1        $f24, 0x530($sp)
    ctx->pc = 0x143724u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1328), bits); }
label_143728:
    // 0x143728: 0xe7b70528  swc1        $f23, 0x528($sp)
    ctx->pc = 0x143728u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1320), bits); }
label_14372c:
    // 0x14372c: 0xe7b60520  swc1        $f22, 0x520($sp)
    ctx->pc = 0x14372cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1312), bits); }
label_143730:
    // 0x143730: 0xe7b50518  swc1        $f21, 0x518($sp)
    ctx->pc = 0x143730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1304), bits); }
label_143734:
    // 0x143734: 0xe7b40510  swc1        $f20, 0x510($sp)
    ctx->pc = 0x143734u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1296), bits); }
label_143738:
    // 0x143738: 0x8e8501b8  lw          $a1, 0x1B8($s4)
    ctx->pc = 0x143738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 440)));
label_14373c:
    // 0x14373c: 0x10a001f0  beqz        $a1, . + 4 + (0x1F0 << 2)
label_143740:
    if (ctx->pc == 0x143740u) {
        ctx->pc = 0x143740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14373Cu;
        // 0x143740: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143744u;
        goto label_143744;
    }
    ctx->pc = 0x14373Cu;
    {
        const bool branch_taken_0x14373c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x143740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14373Cu;
        // 0x143740: 0x3c030034  lui         $v1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14373c) {
            ctx->pc = 0x143F00u;
            goto label_143f00;
        }
    }
    ctx->pc = 0x143744u;
label_143744:
    // 0x143744: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x143744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_143748:
    // 0x143748: 0x8c628488  lw          $v0, -0x7B78($v1)
    ctx->pc = 0x143748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935688)));
label_14374c:
    // 0x14374c: 0x42280b  movn        $a1, $v0, $v0
    ctx->pc = 0x14374cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
label_143750:
    // 0x143750: 0xc08994a  jal         func_226528
label_143754:
    if (ctx->pc == 0x143754u) {
        ctx->pc = 0x143754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143750u;
        // 0x143754: 0xafa50460  sw          $a1, 0x460($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143758u;
        goto label_143758;
    }
    ctx->pc = 0x143750u;
    SET_GPR_U32(ctx, 31, 0x143758u);
    ctx->pc = 0x143754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143750u;
    // 0x143754: 0xafa50460  sw          $a1, 0x460($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 1120), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x143750u, 0x143758u)) {
        return;
    }
    ctx->pc = 0x143758u;
label_143758:
    // 0x143758: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x143758u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14375c:
    // 0x14375c: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x14375cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_143760:
    // 0x143760: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x143760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_143764:
    // 0x143764: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_143768:
    if (ctx->pc == 0x143768u) {
        ctx->pc = 0x143768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143764u;
        // 0x143768: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14376Cu;
        goto label_14376c;
    }
    ctx->pc = 0x143764u;
    {
        const bool branch_taken_0x143764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143764) {
            ctx->pc = 0x143768u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143764u;
            // 0x143768: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143778u;
            goto label_143778;
        }
    }
    ctx->pc = 0x14376Cu;
label_14376c:
    // 0x14376c: 0xc0952e0  jal         func_254B80
label_143770:
    if (ctx->pc == 0x143770u) {
        ctx->pc = 0x143770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14376Cu;
        // 0x143770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143774u;
        goto label_143774;
    }
    ctx->pc = 0x14376Cu;
    SET_GPR_U32(ctx, 31, 0x143774u);
    ctx->pc = 0x143770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14376Cu;
    // 0x143770: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x254B80u, 0x14376Cu, 0x143774u)) {
        return;
    }
    ctx->pc = 0x143774u;
label_143774:
    // 0x143774: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x143774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_143778:
    // 0x143778: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x143778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
label_14377c:
    // 0x14377c: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x14377cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
label_143780:
    // 0x143780: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143780u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_143784:
    // 0x143784: 0xc086cea  jal         func_21B3A8
label_143788:
    if (ctx->pc == 0x143788u) {
        ctx->pc = 0x143788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143784u;
        // 0x143788: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14378Cu;
        goto label_14378c;
    }
    ctx->pc = 0x143784u;
    SET_GPR_U32(ctx, 31, 0x14378Cu);
    ctx->pc = 0x143788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143784u;
    // 0x143788: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21B3A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21B3A8u, 0x143784u, 0x14378Cu)) {
        return;
    }
    ctx->pc = 0x14378Cu;
label_14378c:
    // 0x14378c: 0x6843000b  ldl         $v1, 0xB($v0)
    ctx->pc = 0x14378cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_143790:
    // 0x143790: 0x6c430004  ldr         $v1, 0x4($v0)
    ctx->pc = 0x143790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_143794:
    // 0x143794: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x143794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_143798:
    // 0x143798: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x143798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14379c:
    // 0x14379c: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x14379cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1437a0:
    // 0x1437a0: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x1437a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
label_1437a4:
    // 0x1437a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1437a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1437a8:
    // 0x1437a8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1437a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1437ac:
    // 0x1437ac: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1437acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1437b0:
    // 0x1437b0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1437b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1437b4:
    // 0x1437b4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1437b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1437b8:
    // 0x1437b8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1437b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1437bc:
    // 0x1437bc: 0xc4400014  lwc1        $f0, 0x14($v0)
    ctx->pc = 0x1437bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1437c0:
    // 0x1437c0: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1437c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1437c4:
    // 0x1437c4: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x1437c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1437c8:
    // 0x1437c8: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x1437c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_1437cc:
    // 0x1437cc: 0x68480017  ldl         $t0, 0x17($v0)
    ctx->pc = 0x1437ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_1437d0:
    // 0x1437d0: 0x6c480010  ldr         $t0, 0x10($v0)
    ctx->pc = 0x1437d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_1437d4:
    // 0x1437d4: 0x8c490018  lw          $t1, 0x18($v0)
    ctx->pc = 0x1437d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1437d8:
    // 0x1437d8: 0xb3a8001f  sdl         $t0, 0x1F($sp)
    ctx->pc = 0x1437d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1437dc:
    // 0x1437dc: 0xb7a80018  sdr         $t0, 0x18($sp)
    ctx->pc = 0x1437dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1437e0:
    // 0x1437e0: 0xafa90020  sw          $t1, 0x20($sp)
    ctx->pc = 0x1437e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 9));
label_1437e4:
    // 0x1437e4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x1437e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1437e8:
    // 0x1437e8: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x1437e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_1437ec:
    // 0x1437ec: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1437ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1437f0:
    // 0x1437f0: 0xe7a10028  swc1        $f1, 0x28($sp)
    ctx->pc = 0x1437f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_1437f4:
    // 0x1437f4: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x1437f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1437f8:
    // 0x1437f8: 0xc093afa  jal         func_24EBE8
label_1437fc:
    if (ctx->pc == 0x1437FCu) {
        ctx->pc = 0x1437FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1437F8u;
        // 0x1437fc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143800u;
        goto label_143800;
    }
    ctx->pc = 0x1437F8u;
    SET_GPR_U32(ctx, 31, 0x143800u);
    ctx->pc = 0x1437FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1437F8u;
    // 0x1437fc: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x1437F8u, 0x143800u)) {
        return;
    }
    ctx->pc = 0x143800u;
label_143800:
    // 0x143800: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x143800u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_143804:
    // 0x143804: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x143804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_143808:
    // 0x143808: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x143808u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_14380c:
    // 0x14380c: 0xb3a401c7  sdl         $a0, 0x1C7($sp)
    ctx->pc = 0x14380cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_143810:
    // 0x143810: 0xb7a401c0  sdr         $a0, 0x1C0($sp)
    ctx->pc = 0x143810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_143814:
    // 0x143814: 0xafa501c8  sw          $a1, 0x1C8($sp)
    ctx->pc = 0x143814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 5));
label_143818:
    // 0x143818: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x143818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_14381c:
    // 0x14381c: 0x6ba80043  ldl         $t0, 0x43($sp)
    ctx->pc = 0x14381cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_143820:
    // 0x143820: 0x6fa8003c  ldr         $t0, 0x3C($sp)
    ctx->pc = 0x143820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_143824:
    // 0x143824: 0x8fa90044  lw          $t1, 0x44($sp)
    ctx->pc = 0x143824u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_143828:
    // 0x143828: 0xb3a801d7  sdl         $t0, 0x1D7($sp)
    ctx->pc = 0x143828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14382c:
    // 0x14382c: 0xb7a801d0  sdr         $t0, 0x1D0($sp)
    ctx->pc = 0x14382cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_143830:
    // 0x143830: 0xafa901d8  sw          $t1, 0x1D8($sp)
    ctx->pc = 0x143830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 9));
label_143834:
    // 0x143834: 0x6ba4004f  ldl         $a0, 0x4F($sp)
    ctx->pc = 0x143834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_143838:
    // 0x143838: 0x6fa40048  ldr         $a0, 0x48($sp)
    ctx->pc = 0x143838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_14383c:
    // 0x14383c: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x14383cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_143840:
    // 0x143840: 0xb3a401e7  sdl         $a0, 0x1E7($sp)
    ctx->pc = 0x143840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_143844:
    // 0x143844: 0xb7a401e0  sdr         $a0, 0x1E0($sp)
    ctx->pc = 0x143844u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_143848:
    // 0x143848: 0xafa501e8  sw          $a1, 0x1E8($sp)
    ctx->pc = 0x143848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 488), GPR_U32(ctx, 5));
label_14384c:
    // 0x14384c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x14384cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_143850:
    // 0x143850: 0x6ba8005b  ldl         $t0, 0x5B($sp)
    ctx->pc = 0x143850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 91); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_143854:
    // 0x143854: 0x6fa80054  ldr         $t0, 0x54($sp)
    ctx->pc = 0x143854u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 84); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_143858:
    // 0x143858: 0x8fa9005c  lw          $t1, 0x5C($sp)
    ctx->pc = 0x143858u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_14385c:
    // 0x14385c: 0xb3a801f7  sdl         $t0, 0x1F7($sp)
    ctx->pc = 0x14385cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_143860:
    // 0x143860: 0xb7a801f0  sdr         $t0, 0x1F0($sp)
    ctx->pc = 0x143860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_143864:
    // 0x143864: 0xafa901f8  sw          $t1, 0x1F8($sp)
    ctx->pc = 0x143864u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 9));
label_143868:
    // 0x143868: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x143868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_14386c:
    // 0x14386c: 0xac4300c0  sw          $v1, 0xC0($v0)
    ctx->pc = 0x14386cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 3));
label_143870:
    // 0x143870: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x143870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143874:
    // 0x143874: 0x6ba601c7  ldl         $a2, 0x1C7($sp)
    ctx->pc = 0x143874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_143878:
    // 0x143878: 0x6fa601c0  ldr         $a2, 0x1C0($sp)
    ctx->pc = 0x143878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_14387c:
    // 0x14387c: 0x8fa701c8  lw          $a3, 0x1C8($sp)
    ctx->pc = 0x14387cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
label_143880:
    // 0x143880: 0xb3a600f7  sdl         $a2, 0xF7($sp)
    ctx->pc = 0x143880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 247); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_143884:
    // 0x143884: 0xb7a600f0  sdr         $a2, 0xF0($sp)
    ctx->pc = 0x143884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 240); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_143888:
    // 0x143888: 0xafa700f8  sw          $a3, 0xF8($sp)
    ctx->pc = 0x143888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 7));
label_14388c:
    // 0x14388c: 0x6baa01d7  ldl         $t2, 0x1D7($sp)
    ctx->pc = 0x14388cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_143890:
    // 0x143890: 0x6faa01d0  ldr         $t2, 0x1D0($sp)
    ctx->pc = 0x143890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_143894:
    // 0x143894: 0x8fa201d8  lw          $v0, 0x1D8($sp)
    ctx->pc = 0x143894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 472)));
label_143898:
    // 0x143898: 0xb3aa0103  sdl         $t2, 0x103($sp)
    ctx->pc = 0x143898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 259); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_14389c:
    // 0x14389c: 0xb7aa00fc  sdr         $t2, 0xFC($sp)
    ctx->pc = 0x14389cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438a0:
    // 0x1438a0: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1438a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
label_1438a4:
    // 0x1438a4: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x1438a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_1438a8:
    // 0x1438a8: 0x6ba701e7  ldl         $a3, 0x1E7($sp)
    ctx->pc = 0x1438a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 487); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1438ac:
    // 0x1438ac: 0x6fa701e0  ldr         $a3, 0x1E0($sp)
    ctx->pc = 0x1438acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 480); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1438b0:
    // 0x1438b0: 0x8fa801e8  lw          $t0, 0x1E8($sp)
    ctx->pc = 0x1438b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 488)));
label_1438b4:
    // 0x1438b4: 0xb3a7010f  sdl         $a3, 0x10F($sp)
    ctx->pc = 0x1438b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 271); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438b8:
    // 0x1438b8: 0xb7a70108  sdr         $a3, 0x108($sp)
    ctx->pc = 0x1438b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 264); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438bc:
    // 0x1438bc: 0xafa80110  sw          $t0, 0x110($sp)
    ctx->pc = 0x1438bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 8));
label_1438c0:
    // 0x1438c0: 0x6ba201f7  ldl         $v0, 0x1F7($sp)
    ctx->pc = 0x1438c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 503); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_1438c4:
    // 0x1438c4: 0x6fa201f0  ldr         $v0, 0x1F0($sp)
    ctx->pc = 0x1438c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 496); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_1438c8:
    // 0x1438c8: 0x8fa601f8  lw          $a2, 0x1F8($sp)
    ctx->pc = 0x1438c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
label_1438cc:
    // 0x1438cc: 0xb3a2011b  sdl         $v0, 0x11B($sp)
    ctx->pc = 0x1438ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 283); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438d0:
    // 0x1438d0: 0xb7a20114  sdr         $v0, 0x114($sp)
    ctx->pc = 0x1438d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 276); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438d4:
    // 0x1438d4: 0xafa6011c  sw          $a2, 0x11C($sp)
    ctx->pc = 0x1438d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 6));
label_1438d8:
    // 0x1438d8: 0x8e820128  lw          $v0, 0x128($s4)
    ctx->pc = 0x1438d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_1438dc:
    // 0x1438dc: 0x68690027  ldl         $t1, 0x27($v1)
    ctx->pc = 0x1438dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_1438e0:
    // 0x1438e0: 0x6c690020  ldr         $t1, 0x20($v1)
    ctx->pc = 0x1438e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_1438e4:
    // 0x1438e4: 0x8c6a0028  lw          $t2, 0x28($v1)
    ctx->pc = 0x1438e4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_1438e8:
    // 0x1438e8: 0xb3a901c7  sdl         $t1, 0x1C7($sp)
    ctx->pc = 0x1438e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438ec:
    // 0x1438ec: 0xb7a901c0  sdr         $t1, 0x1C0($sp)
    ctx->pc = 0x1438ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1438f0:
    // 0x1438f0: 0xafaa01c8  sw          $t2, 0x1C8($sp)
    ctx->pc = 0x1438f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 10));
label_1438f4:
    // 0x1438f4: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1438f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1438f8:
    // 0x1438f8: 0xc4440034  lwc1        $f4, 0x34($v0)
    ctx->pc = 0x1438f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1438fc:
    // 0x1438fc: 0xc7a001c0  lwc1        $f0, 0x1C0($sp)
    ctx->pc = 0x1438fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143900:
    // 0x143900: 0xc7a201c4  lwc1        $f2, 0x1C4($sp)
    ctx->pc = 0x143900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143904:
    // 0x143904: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x143904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_143908:
    // 0x143908: 0xc4430038  lwc1        $f3, 0x38($v0)
    ctx->pc = 0x143908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14390c:
    // 0x14390c: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x14390cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_143910:
    // 0x143910: 0xc7a101c8  lwc1        $f1, 0x1C8($sp)
    ctx->pc = 0x143910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143914:
    // 0x143914: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x143914u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_143918:
    // 0x143918: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x143918u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_14391c:
    // 0x14391c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x14391cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_143920:
    // 0x143920: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143920u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143924:
    // 0x143924: 0xc080d22  jal         func_203488
label_143928:
    if (ctx->pc == 0x143928u) {
        ctx->pc = 0x143928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143924u;
        // 0x143928: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x14392Cu;
        goto label_14392c;
    }
    ctx->pc = 0x143924u;
    SET_GPR_U32(ctx, 31, 0x14392Cu);
    ctx->pc = 0x143928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143924u;
    // 0x143928: 0xe7a001cc  swc1        $f0, 0x1CC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203488u, 0x143924u, 0x14392Cu)) {
        return;
    }
    ctx->pc = 0x14392Cu;
label_14392c:
    // 0x14392c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x14392cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_143930:
    // 0x143930: 0x27a80260  addiu       $t0, $sp, 0x260
    ctx->pc = 0x143930u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_143934:
    // 0x143934: 0x8c5e0fc8  lw          $fp, 0xFC8($v0)
    ctx->pc = 0x143934u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4040)));
label_143938:
    // 0x143938: 0x27b501d0  addiu       $s5, $sp, 0x1D0
    ctx->pc = 0x143938u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_14393c:
    // 0x14393c: 0xafa80464  sw          $t0, 0x464($sp)
    ctx->pc = 0x14393cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1124), GPR_U32(ctx, 8));
label_143940:
    // 0x143940: 0x27b70200  addiu       $s7, $sp, 0x200
    ctx->pc = 0x143940u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_143944:
    // 0x143944: 0x27b60204  addiu       $s6, $sp, 0x204
    ctx->pc = 0x143944u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 516));
label_143948:
    // 0x143948: 0x27b20208  addiu       $s2, $sp, 0x208
    ctx->pc = 0x143948u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 520));
label_14394c:
    // 0x14394c: 0x27d00094  addiu       $s0, $fp, 0x94
    ctx->pc = 0x14394cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 148));
label_143950:
    // 0x143950: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x143950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143954:
    // 0x143954: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x143954u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143958:
    // 0x143958: 0xe7a001d0  swc1        $f0, 0x1D0($sp)
    ctx->pc = 0x143958u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_14395c:
    // 0x14395c: 0xc6010004  lwc1        $f1, 0x4($s0)
    ctx->pc = 0x14395cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143960:
    // 0x143960: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x143960u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_143964:
    // 0x143964: 0xe7a101d4  swc1        $f1, 0x1D4($sp)
    ctx->pc = 0x143964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_143968:
    // 0x143968: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x143968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14396c:
    // 0x14396c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x14396cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_143970:
    // 0x143970: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x143970u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_143974:
    // 0x143974: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x143974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143978:
    // 0x143978: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x143978u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_14397c:
    // 0x14397c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_143980:
    if (ctx->pc == 0x143980u) {
        ctx->pc = 0x143980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14397Cu;
        // 0x143980: 0xe7a001dc  swc1        $f0, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143984u;
        goto label_143984;
    }
    ctx->pc = 0x14397Cu;
    {
        const bool branch_taken_0x14397c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14397Cu;
        // 0x143980: 0xe7a001dc  swc1        $f0, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14397c) {
            ctx->pc = 0x143990u;
            goto label_143990;
        }
    }
    ctx->pc = 0x143984u;
label_143984:
    // 0x143984: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x143984u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_143988:
    // 0x143988: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x143988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_14398c:
    // 0x14398c: 0x0  nop
    ctx->pc = 0x14398cu;
    // NOP
label_143990:
    // 0x143990: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143994:
    // 0x143994: 0xc080d22  jal         func_203488
label_143998:
    if (ctx->pc == 0x143998u) {
        ctx->pc = 0x143998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143994u;
        // 0x143998: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14399Cu;
        goto label_14399c;
    }
    ctx->pc = 0x143994u;
    SET_GPR_U32(ctx, 31, 0x14399Cu);
    ctx->pc = 0x143998u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143994u;
    // 0x143998: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203488u, 0x143994u, 0x14399Cu)) {
        return;
    }
    ctx->pc = 0x14399Cu;
label_14399c:
    // 0x14399c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x14399cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1439a0:
    // 0x1439a0: 0x2a220006  slti        $v0, $s1, 0x6
    ctx->pc = 0x1439a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)6) ? 1 : 0);
label_1439a4:
    // 0x1439a4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_1439a8:
    if (ctx->pc == 0x1439A8u) {
        ctx->pc = 0x1439A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A4u;
        // 0x1439a8: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1439ACu;
        goto label_1439ac;
    }
    ctx->pc = 0x1439A4u;
    {
        const bool branch_taken_0x1439a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1439A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439A4u;
        // 0x1439a8: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1439a4) {
            ctx->pc = 0x143950u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143950;
        }
    }
    ctx->pc = 0x1439ACu;
label_1439ac:
    // 0x1439ac: 0x3c013ec9  lui         $at, 0x3EC9
    ctx->pc = 0x1439acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16073 << 16));
label_1439b0:
    // 0x1439b0: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1439b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1439b4:
    // 0x1439b4: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1439b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1439b8:
    // 0x1439b8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1439b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1439bc:
    // 0x1439bc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1439bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1439c0:
    // 0x1439c0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1439c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1439c4:
    // 0x1439c4: 0x26130060  addiu       $s3, $s0, 0x60
    ctx->pc = 0x1439c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
label_1439c8:
    // 0x1439c8: 0x3c013f49  lui         $at, 0x3F49
    ctx->pc = 0x1439c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16201 << 16));
label_1439cc:
    // 0x1439cc: 0x34210fda  ori         $at, $at, 0xFDA
    ctx->pc = 0x1439ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4058);
label_1439d0:
    // 0x1439d0: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x1439d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_1439d4:
    // 0x1439d4: 0xc09b0e8  jal         func_26C3A0
label_1439d8:
    if (ctx->pc == 0x1439D8u) {
        ctx->pc = 0x1439D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439D4u;
        // 0x1439d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1439DCu;
        goto label_1439dc;
    }
    ctx->pc = 0x1439D4u;
    SET_GPR_U32(ctx, 31, 0x1439DCu);
    ctx->pc = 0x1439D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439D4u;
    // 0x1439d8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x1439D4u, 0x1439DCu)) {
        return;
    }
    ctx->pc = 0x1439DCu;
label_1439dc:
    // 0x1439dc: 0x4600a5c6  mov.s       $f23, $f20
    ctx->pc = 0x1439dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[20]);
label_1439e0:
    // 0x1439e0: 0x0  nop
    ctx->pc = 0x1439e0u;
    // NOP
label_1439e4:
    // 0x1439e4: 0x0  nop
    ctx->pc = 0x1439e4u;
    // NOP
label_1439e8:
    // 0x1439e8: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1439e8u;
    ctx->f[20] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_1439ec:
    // 0x1439ec: 0xc68c0174  lwc1        $f12, 0x174($s4)
    ctx->pc = 0x1439ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1439f0:
    // 0x1439f0: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x1439f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1439f4:
    // 0x1439f4: 0xc09b1a0  jal         func_26C680
label_1439f8:
    if (ctx->pc == 0x1439F8u) {
        ctx->pc = 0x1439F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1439F4u;
        // 0x1439f8: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1439FCu;
        goto label_1439fc;
    }
    ctx->pc = 0x1439F4u;
    SET_GPR_U32(ctx, 31, 0x1439FCu);
    ctx->pc = 0x1439F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1439F4u;
    // 0x1439f8: 0x2e0882d  daddu       $s1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C680u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C680u, 0x1439F4u, 0x1439FCu)) {
        return;
    }
    ctx->pc = 0x1439FCu;
label_1439fc:
    // 0x1439fc: 0x46140542  mul.s       $f21, $f0, $f20
    ctx->pc = 0x1439fcu;
    ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_143a00:
    // 0x143a00: 0xc09b164  jal         func_26C590
label_143a04:
    if (ctx->pc == 0x143A04u) {
        ctx->pc = 0x143A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A00u;
        // 0x143a04: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A08u;
        goto label_143a08;
    }
    ctx->pc = 0x143A00u;
    SET_GPR_U32(ctx, 31, 0x143A08u);
    ctx->pc = 0x143A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A00u;
    // 0x143a04: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C590u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C590u, 0x143A00u, 0x143A08u)) {
        return;
    }
    ctx->pc = 0x143A08u;
label_143a08:
    // 0x143a08: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x143a08u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_143a0c:
    // 0x143a0c: 0xc09b0e8  jal         func_26C3A0
label_143a10:
    if (ctx->pc == 0x143A10u) {
        ctx->pc = 0x143A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A0Cu;
        // 0x143a10: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A14u;
        goto label_143a14;
    }
    ctx->pc = 0x143A0Cu;
    SET_GPR_U32(ctx, 31, 0x143A14u);
    ctx->pc = 0x143A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A0Cu;
    // 0x143a10: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[22]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x26C3A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26C3A0u, 0x143A0Cu, 0x143A14u)) {
        return;
    }
    ctx->pc = 0x143A14u;
label_143a14:
    // 0x143a14: 0x4618b581  sub.s       $f22, $f22, $f24
    ctx->pc = 0x143a14u;
    ctx->f[22] = FPU_SUB_S(ctx->f[22], ctx->f[24]);
label_143a18:
    // 0x143a18: 0x4615a502  mul.s       $f20, $f20, $f21
    ctx->pc = 0x143a18u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[21]);
label_143a1c:
    // 0x143a1c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x143a1cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_143a20:
    // 0x143a20: 0xe6340000  swc1        $f20, 0x0($s1)
    ctx->pc = 0x143a20u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_143a24:
    // 0x143a24: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x143a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_143a28:
    // 0x143a28: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x143a28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_143a2c:
    // 0x143a2c: 0xe6170000  swc1        $f23, 0x0($s0)
    ctx->pc = 0x143a2cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_143a30:
    // 0x143a30: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x143a30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_143a34:
    // 0x143a34: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x143a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_143a38:
    // 0x143a38: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_143a3c:
    if (ctx->pc == 0x143A3Cu) {
        ctx->pc = 0x143A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A38u;
        // 0x143a3c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A40u;
        goto label_143a40;
    }
    ctx->pc = 0x143A38u;
    {
        const bool branch_taken_0x143a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A38u;
        // 0x143a3c: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a38) {
            ctx->pc = 0x143A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143a00;
        }
    }
    ctx->pc = 0x143A40u;
label_143a40:
    // 0x143a40: 0x8e87012c  lw          $a3, 0x12C($s4)
    ctx->pc = 0x143a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_143a44:
    // 0x143a44: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x143a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_143a48:
    // 0x143a48: 0x8fa40464  lw          $a0, 0x464($sp)
    ctx->pc = 0x143a48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
label_143a4c:
    // 0x143a4c: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143a50:
    // 0x143a50: 0x2413000c  addiu       $s3, $zero, 0xC
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_143a54:
    // 0x143a54: 0xc093b1a  jal         func_24EC68
label_143a58:
    if (ctx->pc == 0x143A58u) {
        ctx->pc = 0x143A58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143A54u;
        // 0x143a58: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143A5Cu;
        goto label_143a5c;
    }
    ctx->pc = 0x143A54u;
    SET_GPR_U32(ctx, 31, 0x143A5Cu);
    ctx->pc = 0x143A58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143A54u;
    // 0x143a58: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EC68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EC68u, 0x143A54u, 0x143A5Cu)) {
        return;
    }
    ctx->pc = 0x143A5Cu;
label_143a5c:
    // 0x143a5c: 0x8fb10464  lw          $s1, 0x464($sp)
    ctx->pc = 0x143a5cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1124)));
label_143a60:
    // 0x143a60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x143a60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143a64:
    // 0x143a64: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x143a64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_143a68:
    // 0x143a68: 0x24620008  addiu       $v0, $v1, 0x8
    ctx->pc = 0x143a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_143a6c:
    // 0x143a6c: 0x250182a  slt         $v1, $s2, $s0
    ctx->pc = 0x143a6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_143a70:
    // 0x143a70: 0xc6220004  lwc1        $f2, 0x4($s1)
    ctx->pc = 0x143a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143a74:
    // 0x143a74: 0x203100b  movn        $v0, $s0, $v1
    ctx->pc = 0x143a74u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16));
label_143a78:
    // 0x143a78: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x143a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_143a7c:
    // 0x143a7c: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x143a7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_143a80:
    // 0x143a80: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x143a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_143a84:
    // 0x143a84: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x143a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_143a88:
    // 0x143a88: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x143a88u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_143a8c:
    // 0x143a8c: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x143a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_143a90:
    // 0x143a90: 0x24430260  addiu       $v1, $v0, 0x260
    ctx->pc = 0x143a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 608));
label_143a94:
    // 0x143a94: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x143a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143a98:
    // 0x143a98: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x143a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143a9c:
    // 0x143a9c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x143a9cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_143aa0:
    // 0x143aa0: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x143aa0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_143aa4:
    // 0x143aa4: 0x46031081  sub.s       $f2, $f2, $f3
    ctx->pc = 0x143aa4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_143aa8:
    // 0x143aa8: 0xe7a201d0  swc1        $f2, 0x1D0($sp)
    ctx->pc = 0x143aa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_143aac:
    // 0x143aac: 0xc4410260  lwc1        $f1, 0x260($v0)
    ctx->pc = 0x143aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143ab0:
    // 0x143ab0: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x143ab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_143ab4:
    // 0x143ab4: 0xc6230008  lwc1        $f3, 0x8($s1)
    ctx->pc = 0x143ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_143ab8:
    // 0x143ab8: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x143ab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143abc:
    // 0x143abc: 0x460118c2  mul.s       $f3, $f3, $f1
    ctx->pc = 0x143abcu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_143ac0:
    // 0x143ac0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x143ac0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_143ac4:
    // 0x143ac4: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x143ac4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_143ac8:
    // 0x143ac8: 0xe7a301d4  swc1        $f3, 0x1D4($sp)
    ctx->pc = 0x143ac8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_143acc:
    // 0x143acc: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x143accu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_143ad0:
    // 0x143ad0: 0xc4450260  lwc1        $f5, 0x260($v0)
    ctx->pc = 0x143ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 608)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_143ad4:
    // 0x143ad4: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x143ad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143ad8:
    // 0x143ad8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x143ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143adc:
    // 0x143adc: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x143adcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_143ae0:
    // 0x143ae0: 0x46050002  mul.s       $f0, $f0, $f5
    ctx->pc = 0x143ae0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[5]);
label_143ae4:
    // 0x143ae4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x143ae4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_143ae8:
    // 0x143ae8: 0xe7a101d8  swc1        $f1, 0x1D8($sp)
    ctx->pc = 0x143ae8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_143aec:
    // 0x143aec: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x143aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_143af0:
    // 0x143af0: 0xc4440030  lwc1        $f4, 0x30($v0)
    ctx->pc = 0x143af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_143af4:
    // 0x143af4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143af8:
    // 0x143af8: 0xc4450034  lwc1        $f5, 0x34($v0)
    ctx->pc = 0x143af8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_143afc:
    // 0x143afc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x143afcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_143b00:
    // 0x143b00: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x143b00u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_143b04:
    // 0x143b04: 0xc4400038  lwc1        $f0, 0x38($v0)
    ctx->pc = 0x143b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143b08:
    // 0x143b08: 0x460518c2  mul.s       $f3, $f3, $f5
    ctx->pc = 0x143b08u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
label_143b0c:
    // 0x143b0c: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x143b0cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_143b10:
    // 0x143b10: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x143b10u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_143b14:
    // 0x143b14: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x143b14u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_143b18:
    // 0x143b18: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x143b18u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_143b1c:
    // 0x143b1c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x143b1cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_143b20:
    // 0x143b20: 0xc080d22  jal         func_203488
label_143b24:
    if (ctx->pc == 0x143B24u) {
        ctx->pc = 0x143B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B20u;
        // 0x143b24: 0xe7a201dc  swc1        $f2, 0x1DC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B28u;
        goto label_143b28;
    }
    ctx->pc = 0x143B20u;
    SET_GPR_U32(ctx, 31, 0x143B28u);
    ctx->pc = 0x143B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B20u;
    // 0x143b24: 0xe7a201dc  swc1        $f2, 0x1DC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x203488u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203488u, 0x143B20u, 0x143B28u)) {
        return;
    }
    ctx->pc = 0x143B28u;
label_143b28:
    // 0x143b28: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x143b28u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143b2c:
    // 0x143b2c: 0x28620008  slti        $v0, $v1, 0x8
    ctx->pc = 0x143b2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_143b30:
    // 0x143b30: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
label_143b34:
    if (ctx->pc == 0x143B34u) {
        ctx->pc = 0x143B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B30u;
        // 0x143b34: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B38u;
        goto label_143b38;
    }
    ctx->pc = 0x143B30u;
    {
        const bool branch_taken_0x143b30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B30u;
        // 0x143b34: 0x24700001  addiu       $s0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b30) {
            ctx->pc = 0x143A68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143a68;
        }
    }
    ctx->pc = 0x143B38u;
label_143b38:
    // 0x143b38: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x143b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_143b3c:
    // 0x143b3c: 0xc080db0  jal         func_2036C0
label_143b40:
    if (ctx->pc == 0x143B40u) {
        ctx->pc = 0x143B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B3Cu;
        // 0x143b40: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B44u;
        goto label_143b44;
    }
    ctx->pc = 0x143B3Cu;
    SET_GPR_U32(ctx, 31, 0x143B44u);
    ctx->pc = 0x143B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143B3Cu;
    // 0x143b40: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2036C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2036C0u, 0x143B3Cu, 0x143B44u)) {
        return;
    }
    ctx->pc = 0x143B44u;
label_143b44:
    // 0x143b44: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x143b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143b48:
    // 0x143b48: 0x124000ed  beqz        $s2, . + 4 + (0xED << 2)
label_143b4c:
    if (ctx->pc == 0x143B4Cu) {
        ctx->pc = 0x143B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B48u;
        // 0x143b4c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B50u;
        goto label_143b50;
    }
    ctx->pc = 0x143B48u;
    {
        const bool branch_taken_0x143b48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B48u;
        // 0x143b4c: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b48) {
            ctx->pc = 0x143F00u;
            goto label_143f00;
        }
    }
    ctx->pc = 0x143B50u;
label_143b50:
    // 0x143b50: 0x27a50440  addiu       $a1, $sp, 0x440
    ctx->pc = 0x143b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_143b54:
    // 0x143b54: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x143b54u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143b58:
    // 0x143b58: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x143b58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_143b5c:
    // 0x143b5c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143b60:
    // 0x143b60: 0x40f809  jalr        $v0
label_143b64:
    if (ctx->pc == 0x143B64u) {
        ctx->pc = 0x143B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B60u;
        // 0x143b64: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B68u;
        goto label_143b68;
    }
    ctx->pc = 0x143B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143B68u);
        ctx->pc = 0x143B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B60u;
        // 0x143b64: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B60u, 0x143B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143B68u;
label_143b68:
    // 0x143b68: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143b6c:
    // 0x143b6c: 0x27a50444  addiu       $a1, $sp, 0x444
    ctx->pc = 0x143b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1092));
label_143b70:
    // 0x143b70: 0x40f809  jalr        $v0
label_143b74:
    if (ctx->pc == 0x143B74u) {
        ctx->pc = 0x143B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B70u;
        // 0x143b74: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B78u;
        goto label_143b78;
    }
    ctx->pc = 0x143B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143B78u);
        ctx->pc = 0x143B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B70u;
        // 0x143b74: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B70u, 0x143B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143B78u;
label_143b78:
    // 0x143b78: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143b7c:
    // 0x143b7c: 0x27a50448  addiu       $a1, $sp, 0x448
    ctx->pc = 0x143b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1096));
label_143b80:
    // 0x143b80: 0x40f809  jalr        $v0
label_143b84:
    if (ctx->pc == 0x143B84u) {
        ctx->pc = 0x143B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B80u;
        // 0x143b84: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B88u;
        goto label_143b88;
    }
    ctx->pc = 0x143B80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143B88u);
        ctx->pc = 0x143B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B80u;
        // 0x143b84: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B80u, 0x143B88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143B88u;
label_143b88:
    // 0x143b88: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143b8c:
    // 0x143b8c: 0x27a5044c  addiu       $a1, $sp, 0x44C
    ctx->pc = 0x143b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1100));
label_143b90:
    // 0x143b90: 0x40f809  jalr        $v0
label_143b94:
    if (ctx->pc == 0x143B94u) {
        ctx->pc = 0x143B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B90u;
        // 0x143b94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143B98u;
        goto label_143b98;
    }
    ctx->pc = 0x143B90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143B98u);
        ctx->pc = 0x143B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143B90u;
        // 0x143b94: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143B90u, 0x143B98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143B98u;
label_143b98:
    // 0x143b98: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143b9c:
    // 0x143b9c: 0x27a50450  addiu       $a1, $sp, 0x450
    ctx->pc = 0x143b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_143ba0:
    // 0x143ba0: 0x40f809  jalr        $v0
label_143ba4:
    if (ctx->pc == 0x143BA4u) {
        ctx->pc = 0x143BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA0u;
        // 0x143ba4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BA8u;
        goto label_143ba8;
    }
    ctx->pc = 0x143BA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BA8u);
        ctx->pc = 0x143BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BA0u;
        // 0x143ba4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BA0u, 0x143BA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BA8u;
label_143ba8:
    // 0x143ba8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143bac:
    // 0x143bac: 0x27a50454  addiu       $a1, $sp, 0x454
    ctx->pc = 0x143bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1108));
label_143bb0:
    // 0x143bb0: 0x40f809  jalr        $v0
label_143bb4:
    if (ctx->pc == 0x143BB4u) {
        ctx->pc = 0x143BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB0u;
        // 0x143bb4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BB8u;
        goto label_143bb8;
    }
    ctx->pc = 0x143BB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BB8u);
        ctx->pc = 0x143BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BB0u;
        // 0x143bb4: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BB0u, 0x143BB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BB8u;
label_143bb8:
    // 0x143bb8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143bbc:
    // 0x143bbc: 0x27a50458  addiu       $a1, $sp, 0x458
    ctx->pc = 0x143bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1112));
label_143bc0:
    // 0x143bc0: 0x40f809  jalr        $v0
label_143bc4:
    if (ctx->pc == 0x143BC4u) {
        ctx->pc = 0x143BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BC0u;
        // 0x143bc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BC8u;
        goto label_143bc8;
    }
    ctx->pc = 0x143BC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BC8u);
        ctx->pc = 0x143BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BC0u;
        // 0x143bc4: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BC0u, 0x143BC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BC8u;
label_143bc8:
    // 0x143bc8: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x143bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_143bcc:
    // 0x143bcc: 0x27a5045c  addiu       $a1, $sp, 0x45C
    ctx->pc = 0x143bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1116));
label_143bd0:
    // 0x143bd0: 0x40f809  jalr        $v0
label_143bd4:
    if (ctx->pc == 0x143BD4u) {
        ctx->pc = 0x143BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD0u;
        // 0x143bd4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BD8u;
        goto label_143bd8;
    }
    ctx->pc = 0x143BD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BD8u);
        ctx->pc = 0x143BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BD0u;
        // 0x143bd4: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BD0u, 0x143BD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BD8u;
label_143bd8:
    // 0x143bd8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143bdc:
    // 0x143bdc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x143bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_143be0:
    // 0x143be0: 0x40f809  jalr        $v0
label_143be4:
    if (ctx->pc == 0x143BE4u) {
        ctx->pc = 0x143BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE0u;
        // 0x143be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BE8u;
        goto label_143be8;
    }
    ctx->pc = 0x143BE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BE8u);
        ctx->pc = 0x143BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BE0u;
        // 0x143be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BE0u, 0x143BE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BE8u;
label_143be8:
    // 0x143be8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143bec:
    // 0x143bec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x143becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_143bf0:
    // 0x143bf0: 0x40f809  jalr        $v0
label_143bf4:
    if (ctx->pc == 0x143BF4u) {
        ctx->pc = 0x143BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BF0u;
        // 0x143bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143BF8u;
        goto label_143bf8;
    }
    ctx->pc = 0x143BF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143BF8u);
        ctx->pc = 0x143BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143BF0u;
        // 0x143bf4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143BF0u, 0x143BF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143BF8u;
label_143bf8:
    // 0x143bf8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143bfc:
    // 0x143bfc: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x143bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_143c00:
    // 0x143c00: 0x40f809  jalr        $v0
label_143c04:
    if (ctx->pc == 0x143C04u) {
        ctx->pc = 0x143C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C00u;
        // 0x143c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C08u;
        goto label_143c08;
    }
    ctx->pc = 0x143C00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C08u);
        ctx->pc = 0x143C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C00u;
        // 0x143c04: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C00u, 0x143C08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C08u;
label_143c08:
    // 0x143c08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c0c:
    // 0x143c0c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x143c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_143c10:
    // 0x143c10: 0x40f809  jalr        $v0
label_143c14:
    if (ctx->pc == 0x143C14u) {
        ctx->pc = 0x143C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C10u;
        // 0x143c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C18u;
        goto label_143c18;
    }
    ctx->pc = 0x143C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C18u);
        ctx->pc = 0x143C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C10u;
        // 0x143c14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C10u, 0x143C18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C18u;
label_143c18:
    // 0x143c18: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c1c:
    // 0x143c1c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x143c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_143c20:
    // 0x143c20: 0x40f809  jalr        $v0
label_143c24:
    if (ctx->pc == 0x143C24u) {
        ctx->pc = 0x143C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C20u;
        // 0x143c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C28u;
        goto label_143c28;
    }
    ctx->pc = 0x143C20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C28u);
        ctx->pc = 0x143C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C20u;
        // 0x143c24: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C20u, 0x143C28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C28u;
label_143c28:
    // 0x143c28: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c2c:
    // 0x143c2c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x143c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_143c30:
    // 0x143c30: 0x40f809  jalr        $v0
label_143c34:
    if (ctx->pc == 0x143C34u) {
        ctx->pc = 0x143C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C30u;
        // 0x143c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C38u;
        goto label_143c38;
    }
    ctx->pc = 0x143C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C38u);
        ctx->pc = 0x143C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C30u;
        // 0x143c34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C30u, 0x143C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C38u;
label_143c38:
    // 0x143c38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c3c:
    // 0x143c3c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x143c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_143c40:
    // 0x143c40: 0x40f809  jalr        $v0
label_143c44:
    if (ctx->pc == 0x143C44u) {
        ctx->pc = 0x143C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C40u;
        // 0x143c44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C48u;
        goto label_143c48;
    }
    ctx->pc = 0x143C40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C48u);
        ctx->pc = 0x143C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C40u;
        // 0x143c44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C40u, 0x143C48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C48u;
label_143c48:
    // 0x143c48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c4c:
    // 0x143c4c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_143c50:
    // 0x143c50: 0x40f809  jalr        $v0
label_143c54:
    if (ctx->pc == 0x143C54u) {
        ctx->pc = 0x143C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C50u;
        // 0x143c54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C58u;
        goto label_143c58;
    }
    ctx->pc = 0x143C50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C58u);
        ctx->pc = 0x143C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C50u;
        // 0x143c54: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C50u, 0x143C58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C58u;
label_143c58:
    // 0x143c58: 0x8fa50460  lw          $a1, 0x460($sp)
    ctx->pc = 0x143c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1120)));
label_143c5c:
    // 0x143c5c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143c60:
    // 0x143c60: 0x40f809  jalr        $v0
label_143c64:
    if (ctx->pc == 0x143C64u) {
        ctx->pc = 0x143C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C60u;
        // 0x143c64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C68u;
        goto label_143c68;
    }
    ctx->pc = 0x143C60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143C68u);
        ctx->pc = 0x143C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C60u;
        // 0x143c64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143C60u, 0x143C68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143C68u;
label_143c68:
    // 0x143c68: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x143c68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_143c6c:
    // 0x143c6c: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143c70:
    // 0x143c70: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x143c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143c74:
    // 0x143c74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x143c74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143c78:
    // 0x143c78: 0xc093afa  jal         func_24EBE8
label_143c7c:
    if (ctx->pc == 0x143C7Cu) {
        ctx->pc = 0x143C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C78u;
        // 0x143c7c: 0x27c70020  addiu       $a3, $fp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C80u;
        goto label_143c80;
    }
    ctx->pc = 0x143C78u;
    SET_GPR_U32(ctx, 31, 0x143C80u);
    ctx->pc = 0x143C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C78u;
    // 0x143c7c: 0x27c70020  addiu       $a3, $fp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x143C78u, 0x143C80u)) {
        return;
    }
    ctx->pc = 0x143C80u;
label_143c80:
    // 0x143c80: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_143c84:
    // 0x143c84: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x143c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143c88:
    // 0x143c88: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x143c88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_143c8c:
    // 0x143c8c: 0x26870130  addiu       $a3, $s4, 0x130
    ctx->pc = 0x143c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 304));
label_143c90:
    // 0x143c90: 0xc093afa  jal         func_24EBE8
label_143c94:
    if (ctx->pc == 0x143C94u) {
        ctx->pc = 0x143C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143C90u;
        // 0x143c94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143C98u;
        goto label_143c98;
    }
    ctx->pc = 0x143C90u;
    SET_GPR_U32(ctx, 31, 0x143C98u);
    ctx->pc = 0x143C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143C90u;
    // 0x143c94: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x143C90u, 0x143C98u)) {
        return;
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_143c9c:
    // 0x143c9c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x143c9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_143ca0:
    // 0x143ca0: 0xc7c00080  lwc1        $f0, 0x80($fp)
    ctx->pc = 0x143ca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143ca4:
    // 0x143ca4: 0xc7c10084  lwc1        $f1, 0x84($fp)
    ctx->pc = 0x143ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143ca8:
    // 0x143ca8: 0x0  nop
    ctx->pc = 0x143ca8u;
    // NOP
label_143cac:
    // 0x143cac: 0x0  nop
    ctx->pc = 0x143cacu;
    // NOP
label_143cb0:
    // 0x143cb0: 0x46001103  div.s       $f4, $f2, $f0
    ctx->pc = 0x143cb0u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[0]);
label_143cb4:
    // 0x143cb4: 0x0  nop
    ctx->pc = 0x143cb4u;
    // NOP
label_143cb8:
    // 0x143cb8: 0x0  nop
    ctx->pc = 0x143cb8u;
    // NOP
label_143cbc:
    // 0x143cbc: 0x46011003  div.s       $f0, $f2, $f1
    ctx->pc = 0x143cbcu;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[1]);
label_143cc0:
    // 0x143cc0: 0x1a40003a  blez        $s2, . + 4 + (0x3A << 2)
label_143cc4:
    if (ctx->pc == 0x143CC4u) {
        ctx->pc = 0x143CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CC0u;
        // 0x143cc4: 0x46001186  mov.s       $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x143CC8u;
        goto label_143cc8;
    }
    ctx->pc = 0x143CC0u;
    {
        const bool branch_taken_0x143cc0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x143CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143CC0u;
        // 0x143cc4: 0x46001186  mov.s       $f6, $f2 (Delay Slot)
        ctx->f[6] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x143cc0) {
            ctx->pc = 0x143DACu;
            goto label_143dac;
        }
    }
    ctx->pc = 0x143CC8u;
label_143cc8:
    // 0x143cc8: 0x46040201  sub.s       $f8, $f0, $f4
    ctx->pc = 0x143cc8u;
    ctx->f[8] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
label_143ccc:
    // 0x143ccc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x143cccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_143cd0:
    // 0x143cd0: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x143cd0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_143cd4:
    // 0x143cd4: 0x3c014400  lui         $at, 0x4400
    ctx->pc = 0x143cd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17408 << 16));
label_143cd8:
    // 0x143cd8: 0x44815800  mtc1        $at, $f11
    ctx->pc = 0x143cd8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[11], &bits, sizeof(bits)); }
label_143cdc:
    // 0x143cdc: 0x3c0143e0  lui         $at, 0x43E0
    ctx->pc = 0x143cdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17376 << 16));
label_143ce0:
    // 0x143ce0: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x143ce0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
label_143ce4:
    // 0x143ce4: 0x27a20388  addiu       $v0, $sp, 0x388
    ctx->pc = 0x143ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 904));
label_143ce8:
    // 0x143ce8: 0x3c01477f  lui         $at, 0x477F
    ctx->pc = 0x143ce8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18303 << 16));
label_143cec:
    // 0x143cec: 0x3421ff00  ori         $at, $at, 0xFF00
    ctx->pc = 0x143cecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65280);
label_143cf0:
    // 0x143cf0: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x143cf0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_143cf4:
    // 0x143cf4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x143cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143cf8:
    // 0x143cf8: 0x3c014500  lui         $at, 0x4500
    ctx->pc = 0x143cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17664 << 16));
label_143cfc:
    // 0x143cfc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x143cfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_143d00:
    // 0x143d00: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x143d00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_143d04:
    // 0x143d04: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x143d04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_143d08:
    // 0x143d08: 0xc443ff40  lwc1        $f3, -0xC0($v0)
    ctx->pc = 0x143d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_143d0c:
    // 0x143d0c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_143d10:
    // 0x143d10: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x143d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143d14:
    // 0x143d14: 0x0  nop
    ctx->pc = 0x143d14u;
    // NOP
label_143d18:
    // 0x143d18: 0x0  nop
    ctx->pc = 0x143d18u;
    // NOP
label_143d1c:
    // 0x143d1c: 0x460330c3  div.s       $f3, $f6, $f3
    ctx->pc = 0x143d1cu;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[6], ctx->f[3]);
label_143d20:
    // 0x143d20: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x143d20u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_143d24:
    // 0x143d24: 0x46041881  sub.s       $f2, $f3, $f4
    ctx->pc = 0x143d24u;
    ctx->f[2] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
label_143d28:
    // 0x143d28: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x143d28u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
label_143d2c:
    // 0x143d2c: 0x0  nop
    ctx->pc = 0x143d2cu;
    // NOP
label_143d30:
    // 0x143d30: 0x0  nop
    ctx->pc = 0x143d30u;
    // NOP
label_143d34:
    // 0x143d34: 0x46081083  div.s       $f2, $f2, $f8
    ctx->pc = 0x143d34u;
    ctx->f[2] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[8]);
label_143d38:
    // 0x143d38: 0x460b0002  mul.s       $f0, $f0, $f11
    ctx->pc = 0x143d38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[11]);
label_143d3c:
    // 0x143d3c: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x143d3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_143d40:
    // 0x143d40: 0x46023081  sub.s       $f2, $f6, $f2
    ctx->pc = 0x143d40u;
    ctx->f[2] = FPU_SUB_S(ctx->f[6], ctx->f[2]);
label_143d44:
    // 0x143d44: 0xc441ff3c  lwc1        $f1, -0xC4($v0)
    ctx->pc = 0x143d44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143d48:
    // 0x143d48: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x143d48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_143d4c:
    // 0x143d4c: 0x46091082  mul.s       $f2, $f2, $f9
    ctx->pc = 0x143d4cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
label_143d50:
    // 0x143d50: 0x46070841  sub.s       $f1, $f1, $f7
    ctx->pc = 0x143d50u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[7]);
label_143d54:
    // 0x143d54: 0xe442ff40  swc1        $f2, -0xC0($v0)
    ctx->pc = 0x143d54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967104), bits); }
label_143d58:
    // 0x143d58: 0x460a0842  mul.s       $f1, $f1, $f10
    ctx->pc = 0x143d58u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[10]);
label_143d5c:
    // 0x143d5c: 0xe441ff3c  swc1        $f1, -0xC4($v0)
    ctx->pc = 0x143d5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967100), bits); }
label_143d60:
    // 0x143d60: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x143d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143d64:
    // 0x143d64: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x143d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_143d68:
    // 0x143d68: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x143d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_143d6c:
    // 0x143d6c: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x143d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
label_143d70:
    // 0x143d70: 0xc440ff3c  lwc1        $f0, -0xC4($v0)
    ctx->pc = 0x143d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143d74:
    // 0x143d74: 0x46050000  add.s       $f0, $f0, $f5
    ctx->pc = 0x143d74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[5]);
label_143d78:
    // 0x143d78: 0xe440ff3c  swc1        $f0, -0xC4($v0)
    ctx->pc = 0x143d78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967100), bits); }
label_143d7c:
    // 0x143d7c: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x143d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143d80:
    // 0x143d80: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x143d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_143d84:
    // 0x143d84: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x143d84u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_143d88:
    // 0x143d88: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x143d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_143d8c:
    // 0x143d8c: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x143d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143d90:
    // 0x143d90: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x143d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143d94:
    // 0x143d94: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x143d94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_143d98:
    // 0x143d98: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x143d98u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_143d9c:
    // 0x143d9c: 0xe440fffc  swc1        $f0, -0x4($v0)
    ctx->pc = 0x143d9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), bits); }
label_143da0:
    // 0x143da0: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x143da0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_143da4:
    // 0x143da4: 0x1480ffd8  bnez        $a0, . + 4 + (-0x28 << 2)
label_143da8:
    if (ctx->pc == 0x143DA8u) {
        ctx->pc = 0x143DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DA4u;
        // 0x143da8: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DACu;
        goto label_143dac;
    }
    ctx->pc = 0x143DA4u;
    {
        const bool branch_taken_0x143da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x143DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DA4u;
        // 0x143da8: 0x2442000c  addiu       $v0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143da4) {
            ctx->pc = 0x143D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143d08;
        }
    }
    ctx->pc = 0x143DACu;
label_143dac:
    // 0x143dac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143db0:
    // 0x143db0: 0xc079cfa  jal         func_1E73E8
label_143db4:
    if (ctx->pc == 0x143DB4u) {
        ctx->pc = 0x143DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DB0u;
        // 0x143db4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DB8u;
        goto label_143db8;
    }
    ctx->pc = 0x143DB0u;
    SET_GPR_U32(ctx, 31, 0x143DB8u);
    ctx->pc = 0x143DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DB0u;
    // 0x143db4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E73E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E73E8u, 0x143DB0u, 0x143DB8u)) {
        return;
    }
    ctx->pc = 0x143DB8u;
label_143db8:
    // 0x143db8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143dbc:
    // 0x143dbc: 0xc079d0e  jal         func_1E7438
label_143dc0:
    if (ctx->pc == 0x143DC0u) {
        ctx->pc = 0x143DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DBCu;
        // 0x143dc0: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DC4u;
        goto label_143dc4;
    }
    ctx->pc = 0x143DBCu;
    SET_GPR_U32(ctx, 31, 0x143DC4u);
    ctx->pc = 0x143DC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DBCu;
    // 0x143dc0: 0x24050055  addiu       $a1, $zero, 0x55 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x143DBCu, 0x143DC4u)) {
        return;
    }
    ctx->pc = 0x143DC4u;
label_143dc4:
    // 0x143dc4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x143dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_143dc8:
    // 0x143dc8: 0xc079d0e  jal         func_1E7438
label_143dcc:
    if (ctx->pc == 0x143DCCu) {
        ctx->pc = 0x143DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DC8u;
        // 0x143dcc: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DD0u;
        goto label_143dd0;
    }
    ctx->pc = 0x143DC8u;
    SET_GPR_U32(ctx, 31, 0x143DD0u);
    ctx->pc = 0x143DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143DC8u;
    // 0x143dcc: 0x24050261  addiu       $a1, $zero, 0x261 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 609));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x143DC8u, 0x143DD0u)) {
        return;
    }
    ctx->pc = 0x143DD0u;
label_143dd0:
    // 0x143dd0: 0x1a400028  blez        $s2, . + 4 + (0x28 << 2)
label_143dd4:
    if (ctx->pc == 0x143DD4u) {
        ctx->pc = 0x143DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DD0u;
        // 0x143dd4: 0x27b002c8  addiu       $s0, $sp, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143DD8u;
        goto label_143dd8;
    }
    ctx->pc = 0x143DD0u;
    {
        const bool branch_taken_0x143dd0 = (GPR_S64(ctx, 18) <= 0);
        ctx->pc = 0x143DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143DD0u;
        // 0x143dd4: 0x27b002c8  addiu       $s0, $sp, 0x2C8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143dd0) {
            ctx->pc = 0x143E74u;
            goto label_143e74;
        }
    }
    ctx->pc = 0x143DD8u;
label_143dd8:
    // 0x143dd8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x143dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_143ddc:
    // 0x143ddc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x143ddcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_143de0:
    // 0x143de0: 0x34148040  ori         $s4, $zero, 0x8040
    ctx->pc = 0x143de0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32832);
label_143de4:
    // 0x143de4: 0x14a438  dsll        $s4, $s4, 16
    ctx->pc = 0x143de4u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) << 16);
label_143de8:
    // 0x143de8: 0x36944040  ori         $s4, $s4, 0x4040
    ctx->pc = 0x143de8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)16448);
label_143dec:
    // 0x143dec: 0x9e250004  lwu         $a1, 0x4($s1)
    ctx->pc = 0x143decu;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_143df0:
    // 0x143df0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x143df0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_143df4:
    // 0x143df4: 0x9e220000  lwu         $v0, 0x0($s1)
    ctx->pc = 0x143df4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_143df8:
    // 0x143df8: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x143df8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_143dfc:
    // 0x143dfc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x143dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_143e00:
    // 0x143e00: 0xc079d0e  jal         func_1E7438
label_143e04:
    if (ctx->pc == 0x143E04u) {
        ctx->pc = 0x143E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E00u;
        // 0x143e04: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E08u;
        goto label_143e08;
    }
    ctx->pc = 0x143E00u;
    SET_GPR_U32(ctx, 31, 0x143E08u);
    ctx->pc = 0x143E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E00u;
    // 0x143e04: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x143E00u, 0x143E08u)) {
        return;
    }
    ctx->pc = 0x143E08u;
label_143e08:
    // 0x143e08: 0x9e250008  lwu         $a1, 0x8($s1)
    ctx->pc = 0x143e08u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_143e0c:
    // 0x143e0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x143e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143e10:
    // 0x143e10: 0x2631000c  addiu       $s1, $s1, 0xC
    ctx->pc = 0x143e10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_143e14:
    // 0x143e14: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x143e14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_143e18:
    // 0x143e18: 0xc079d0e  jal         func_1E7438
label_143e1c:
    if (ctx->pc == 0x143E1Cu) {
        ctx->pc = 0x143E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E18u;
        // 0x143e1c: 0xb42825  or          $a1, $a1, $s4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E20u;
        goto label_143e20;
    }
    ctx->pc = 0x143E18u;
    SET_GPR_U32(ctx, 31, 0x143E20u);
    ctx->pc = 0x143E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E18u;
    // 0x143e1c: 0xb42825  or          $a1, $a1, $s4 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x143E18u, 0x143E20u)) {
        return;
    }
    ctx->pc = 0x143E20u;
label_143e20:
    // 0x143e20: 0xc601fffc  lwc1        $f1, -0x4($s0)
    ctx->pc = 0x143e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_143e24:
    // 0x143e24: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_143e28:
    // 0x143e28: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x143e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_143e2c:
    // 0x143e2c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x143e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_143e30:
    // 0x143e30: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x143e30u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
label_143e34:
    // 0x143e34: 0x460010e4  .word       0x460010E4                   # cvt.w.s     $f3, $f2 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143e34u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[2]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
label_143e38:
    // 0x143e38: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x143e38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_143e3c:
    // 0x143e3c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x143e3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_143e40:
    // 0x143e40: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x143e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_143e44:
    // 0x143e44: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_143e48:
    // 0x143e48: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143e48u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
label_143e4c:
    // 0x143e4c: 0x44051000  mfc1        $a1, $f2
    ctx->pc = 0x143e4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
label_143e50:
    // 0x143e50: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x143e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_143e54:
    // 0x143e54: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143e54u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_143e58:
    // 0x143e58: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x143e58u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_143e5c:
    // 0x143e5c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x143e5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_143e60:
    // 0x143e60: 0x652825  or          $a1, $v1, $a1
    ctx->pc = 0x143e60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_143e64:
    // 0x143e64: 0xc079d0e  jal         func_1E7438
label_143e68:
    if (ctx->pc == 0x143E68u) {
        ctx->pc = 0x143E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E64u;
        // 0x143e68: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E6Cu;
        goto label_143e6c;
    }
    ctx->pc = 0x143E64u;
    SET_GPR_U32(ctx, 31, 0x143E6Cu);
    ctx->pc = 0x143E68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E64u;
    // 0x143e68: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7438u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7438u, 0x143E64u, 0x143E6Cu)) {
        return;
    }
    ctx->pc = 0x143E6Cu;
label_143e6c:
    // 0x143e6c: 0x5640ffe0  bnel        $s2, $zero, . + 4 + (-0x20 << 2)
label_143e70:
    if (ctx->pc == 0x143E70u) {
        ctx->pc = 0x143E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E6Cu;
        // 0x143e70: 0x9e250004  lwu         $a1, 0x4($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E74u;
        goto label_143e74;
    }
    ctx->pc = 0x143E6Cu;
    {
        const bool branch_taken_0x143e6c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x143e6c) {
            ctx->pc = 0x143E70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x143E6Cu;
            // 0x143e70: 0x9e250004  lwu         $a1, 0x4($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x143DF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_143df0;
        }
    }
    ctx->pc = 0x143E74u;
label_143e74:
    // 0x143e74: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x143e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143e78:
    // 0x143e78: 0xc079ca0  jal         func_1E7280
label_143e7c:
    if (ctx->pc == 0x143E7Cu) {
        ctx->pc = 0x143E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E78u;
        // 0x143e7c: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E80u;
        goto label_143e80;
    }
    ctx->pc = 0x143E78u;
    SET_GPR_U32(ctx, 31, 0x143E80u);
    ctx->pc = 0x143E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x143E78u;
    // 0x143e7c: 0x26b00fd8  addiu       $s0, $s5, 0xFD8 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E7280u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E7280u, 0x143E78u, 0x143E80u)) {
        return;
    }
    ctx->pc = 0x143E80u;
label_143e80:
    // 0x143e80: 0x8fa50440  lw          $a1, 0x440($sp)
    ctx->pc = 0x143e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1088)));
label_143e84:
    // 0x143e84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143e88:
    // 0x143e88: 0x40f809  jalr        $v0
label_143e8c:
    if (ctx->pc == 0x143E8Cu) {
        ctx->pc = 0x143E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E88u;
        // 0x143e8c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143E90u;
        goto label_143e90;
    }
    ctx->pc = 0x143E88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143E90u);
        ctx->pc = 0x143E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E88u;
        // 0x143e8c: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E88u, 0x143E90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E90u;
label_143e90:
    // 0x143e90: 0x8fa50444  lw          $a1, 0x444($sp)
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1092)));
label_143e94:
    // 0x143e94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143e98:
    // 0x143e98: 0x40f809  jalr        $v0
label_143e9c:
    if (ctx->pc == 0x143E9Cu) {
        ctx->pc = 0x143E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E98u;
        // 0x143e9c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EA0u;
        goto label_143ea0;
    }
    ctx->pc = 0x143E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143EA0u);
        ctx->pc = 0x143E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143E98u;
        // 0x143e9c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E98u, 0x143EA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EA0u;
label_143ea0:
    // 0x143ea0: 0x8fa50448  lw          $a1, 0x448($sp)
    ctx->pc = 0x143ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1096)));
label_143ea4:
    // 0x143ea4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ea8:
    // 0x143ea8: 0x40f809  jalr        $v0
label_143eac:
    if (ctx->pc == 0x143EACu) {
        ctx->pc = 0x143EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA8u;
        // 0x143eac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EB0u;
        goto label_143eb0;
    }
    ctx->pc = 0x143EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143EB0u);
        ctx->pc = 0x143EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EA8u;
        // 0x143eac: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EA8u, 0x143EB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EB0u;
label_143eb0:
    // 0x143eb0: 0x8fa5044c  lw          $a1, 0x44C($sp)
    ctx->pc = 0x143eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1100)));
label_143eb4:
    // 0x143eb4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143eb8:
    // 0x143eb8: 0x40f809  jalr        $v0
label_143ebc:
    if (ctx->pc == 0x143EBCu) {
        ctx->pc = 0x143EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EB8u;
        // 0x143ebc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EC0u;
        goto label_143ec0;
    }
    ctx->pc = 0x143EB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143EC0u);
        ctx->pc = 0x143EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EB8u;
        // 0x143ebc: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EB8u, 0x143EC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EC0u;
label_143ec0:
    // 0x143ec0: 0x8fa50450  lw          $a1, 0x450($sp)
    ctx->pc = 0x143ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1104)));
label_143ec4:
    // 0x143ec4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ec8:
    // 0x143ec8: 0x40f809  jalr        $v0
label_143ecc:
    if (ctx->pc == 0x143ECCu) {
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143ED0u;
        goto label_143ed0;
    }
    ctx->pc = 0x143EC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143ED0u);
        ctx->pc = 0x143ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EC8u;
        // 0x143ecc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EC8u, 0x143ED0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143ED0u;
label_143ed0:
    // 0x143ed0: 0x8fa50454  lw          $a1, 0x454($sp)
    ctx->pc = 0x143ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1108)));
label_143ed4:
    // 0x143ed4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ed8:
    // 0x143ed8: 0x40f809  jalr        $v0
label_143edc:
    if (ctx->pc == 0x143EDCu) {
        ctx->pc = 0x143EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ED8u;
        // 0x143edc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EE0u;
        goto label_143ee0;
    }
    ctx->pc = 0x143ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143EE0u);
        ctx->pc = 0x143EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143ED8u;
        // 0x143edc: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143ED8u, 0x143EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EE0u;
label_143ee0:
    // 0x143ee0: 0x8fa50458  lw          $a1, 0x458($sp)
    ctx->pc = 0x143ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1112)));
label_143ee4:
    // 0x143ee4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ee8:
    // 0x143ee8: 0x40f809  jalr        $v0
label_143eec:
    if (ctx->pc == 0x143EECu) {
        ctx->pc = 0x143EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE8u;
        // 0x143eec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143EF0u;
        goto label_143ef0;
    }
    ctx->pc = 0x143EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143EF0u);
        ctx->pc = 0x143EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EE8u;
        // 0x143eec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EE8u, 0x143EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143EF0u;
label_143ef0:
    // 0x143ef0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x143ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_143ef4:
    // 0x143ef4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x143ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_143ef8:
    // 0x143ef8: 0x40f809  jalr        $v0
label_143efc:
    if (ctx->pc == 0x143EFCu) {
        ctx->pc = 0x143EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF8u;
        // 0x143efc: 0x8fa5045c  lw          $a1, 0x45C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F00u;
        goto label_143f00;
    }
    ctx->pc = 0x143EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x143F00u);
        ctx->pc = 0x143EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143EF8u;
        // 0x143efc: 0x8fa5045c  lw          $a1, 0x45C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1116)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EF8u, 0x143F00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143F00u;
label_143f00:
    // 0x143f00: 0x7bb00500  lq          $s0, 0x500($sp)
    ctx->pc = 0x143f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1280)));
label_143f04:
    // 0x143f04: 0x7bb104f0  lq          $s1, 0x4F0($sp)
    ctx->pc = 0x143f04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1264)));
label_143f08:
    // 0x143f08: 0x7bb204e0  lq          $s2, 0x4E0($sp)
    ctx->pc = 0x143f08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1248)));
label_143f0c:
    // 0x143f0c: 0x7bb304d0  lq          $s3, 0x4D0($sp)
    ctx->pc = 0x143f0cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 1232)));
label_143f10:
    // 0x143f10: 0x7bb404c0  lq          $s4, 0x4C0($sp)
    ctx->pc = 0x143f10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 1216)));
label_143f14:
    // 0x143f14: 0x7bb504b0  lq          $s5, 0x4B0($sp)
    ctx->pc = 0x143f14u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 1200)));
label_143f18:
    // 0x143f18: 0x7bb604a0  lq          $s6, 0x4A0($sp)
    ctx->pc = 0x143f18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 1184)));
label_143f1c:
    // 0x143f1c: 0x7bb70490  lq          $s7, 0x490($sp)
    ctx->pc = 0x143f1cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_143f20:
    // 0x143f20: 0x7bbe0480  lq          $fp, 0x480($sp)
    ctx->pc = 0x143f20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_143f24:
    // 0x143f24: 0xdfbf0470  ld          $ra, 0x470($sp)
    ctx->pc = 0x143f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1136)));
label_143f28:
    // 0x143f28: 0xc7b80530  lwc1        $f24, 0x530($sp)
    ctx->pc = 0x143f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_143f2c:
    // 0x143f2c: 0xc7b70528  lwc1        $f23, 0x528($sp)
    ctx->pc = 0x143f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_143f30:
    // 0x143f30: 0xc7b60520  lwc1        $f22, 0x520($sp)
    ctx->pc = 0x143f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_143f34:
    // 0x143f34: 0xc7b50518  lwc1        $f21, 0x518($sp)
    ctx->pc = 0x143f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_143f38:
    // 0x143f38: 0xc7b40510  lwc1        $f20, 0x510($sp)
    ctx->pc = 0x143f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_143f3c:
    // 0x143f3c: 0x3e00008  jr          $ra
label_143f40:
    if (ctx->pc == 0x143F40u) {
        ctx->pc = 0x143F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F3Cu;
        // 0x143f40: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = 0x143F44u;
        goto label_143f44;
    }
    ctx->pc = 0x143F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x143F3Cu;
        // 0x143f40: 0x27bd0540  addiu       $sp, $sp, 0x540 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1344));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143F44u;
label_143f44:
    // 0x143f44: 0x0  nop
    ctx->pc = 0x143f44u;
    // NOP
    ctx->pc = 0x143f48u;
}
