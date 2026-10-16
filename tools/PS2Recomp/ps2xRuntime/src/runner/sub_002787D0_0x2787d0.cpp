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

// Function: sub_002787D0
// Address: 0x2787d0 - 0x278f88
void sub_002787D0_0x2787d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002787D0_0x2787d0");
#endif

    switch (ctx->pc) {
        case 0x2787d0u: goto label_2787d0;
        case 0x2787d4u: goto label_2787d4;
        case 0x2787d8u: goto label_2787d8;
        case 0x2787dcu: goto label_2787dc;
        case 0x2787e0u: goto label_2787e0;
        case 0x2787e4u: goto label_2787e4;
        case 0x2787e8u: goto label_2787e8;
        case 0x2787ecu: goto label_2787ec;
        case 0x2787f0u: goto label_2787f0;
        case 0x2787f4u: goto label_2787f4;
        case 0x2787f8u: goto label_2787f8;
        case 0x2787fcu: goto label_2787fc;
        case 0x278800u: goto label_278800;
        case 0x278804u: goto label_278804;
        case 0x278808u: goto label_278808;
        case 0x27880cu: goto label_27880c;
        case 0x278810u: goto label_278810;
        case 0x278814u: goto label_278814;
        case 0x278818u: goto label_278818;
        case 0x27881cu: goto label_27881c;
        case 0x278820u: goto label_278820;
        case 0x278824u: goto label_278824;
        case 0x278828u: goto label_278828;
        case 0x27882cu: goto label_27882c;
        case 0x278830u: goto label_278830;
        case 0x278834u: goto label_278834;
        case 0x278838u: goto label_278838;
        case 0x27883cu: goto label_27883c;
        case 0x278840u: goto label_278840;
        case 0x278844u: goto label_278844;
        case 0x278848u: goto label_278848;
        case 0x27884cu: goto label_27884c;
        case 0x278850u: goto label_278850;
        case 0x278854u: goto label_278854;
        case 0x278858u: goto label_278858;
        case 0x27885cu: goto label_27885c;
        case 0x278860u: goto label_278860;
        case 0x278864u: goto label_278864;
        case 0x278868u: goto label_278868;
        case 0x27886cu: goto label_27886c;
        case 0x278870u: goto label_278870;
        case 0x278874u: goto label_278874;
        case 0x278878u: goto label_278878;
        case 0x27887cu: goto label_27887c;
        case 0x278880u: goto label_278880;
        case 0x278884u: goto label_278884;
        case 0x278888u: goto label_278888;
        case 0x27888cu: goto label_27888c;
        case 0x278890u: goto label_278890;
        case 0x278894u: goto label_278894;
        case 0x278898u: goto label_278898;
        case 0x27889cu: goto label_27889c;
        case 0x2788a0u: goto label_2788a0;
        case 0x2788a4u: goto label_2788a4;
        case 0x2788a8u: goto label_2788a8;
        case 0x2788acu: goto label_2788ac;
        case 0x2788b0u: goto label_2788b0;
        case 0x2788b4u: goto label_2788b4;
        case 0x2788b8u: goto label_2788b8;
        case 0x2788bcu: goto label_2788bc;
        case 0x2788c0u: goto label_2788c0;
        case 0x2788c4u: goto label_2788c4;
        case 0x2788c8u: goto label_2788c8;
        case 0x2788ccu: goto label_2788cc;
        case 0x2788d0u: goto label_2788d0;
        case 0x2788d4u: goto label_2788d4;
        case 0x2788d8u: goto label_2788d8;
        case 0x2788dcu: goto label_2788dc;
        case 0x2788e0u: goto label_2788e0;
        case 0x2788e4u: goto label_2788e4;
        case 0x2788e8u: goto label_2788e8;
        case 0x2788ecu: goto label_2788ec;
        case 0x2788f0u: goto label_2788f0;
        case 0x2788f4u: goto label_2788f4;
        case 0x2788f8u: goto label_2788f8;
        case 0x2788fcu: goto label_2788fc;
        case 0x278900u: goto label_278900;
        case 0x278904u: goto label_278904;
        case 0x278908u: goto label_278908;
        case 0x27890cu: goto label_27890c;
        case 0x278910u: goto label_278910;
        case 0x278914u: goto label_278914;
        case 0x278918u: goto label_278918;
        case 0x27891cu: goto label_27891c;
        case 0x278920u: goto label_278920;
        case 0x278924u: goto label_278924;
        case 0x278928u: goto label_278928;
        case 0x27892cu: goto label_27892c;
        case 0x278930u: goto label_278930;
        case 0x278934u: goto label_278934;
        case 0x278938u: goto label_278938;
        case 0x27893cu: goto label_27893c;
        case 0x278940u: goto label_278940;
        case 0x278944u: goto label_278944;
        case 0x278948u: goto label_278948;
        case 0x27894cu: goto label_27894c;
        case 0x278950u: goto label_278950;
        case 0x278954u: goto label_278954;
        case 0x278958u: goto label_278958;
        case 0x27895cu: goto label_27895c;
        case 0x278960u: goto label_278960;
        case 0x278964u: goto label_278964;
        case 0x278968u: goto label_278968;
        case 0x27896cu: goto label_27896c;
        case 0x278970u: goto label_278970;
        case 0x278974u: goto label_278974;
        case 0x278978u: goto label_278978;
        case 0x27897cu: goto label_27897c;
        case 0x278980u: goto label_278980;
        case 0x278984u: goto label_278984;
        case 0x278988u: goto label_278988;
        case 0x27898cu: goto label_27898c;
        case 0x278990u: goto label_278990;
        case 0x278994u: goto label_278994;
        case 0x278998u: goto label_278998;
        case 0x27899cu: goto label_27899c;
        case 0x2789a0u: goto label_2789a0;
        case 0x2789a4u: goto label_2789a4;
        case 0x2789a8u: goto label_2789a8;
        case 0x2789acu: goto label_2789ac;
        case 0x2789b0u: goto label_2789b0;
        case 0x2789b4u: goto label_2789b4;
        case 0x2789b8u: goto label_2789b8;
        case 0x2789bcu: goto label_2789bc;
        case 0x2789c0u: goto label_2789c0;
        case 0x2789c4u: goto label_2789c4;
        case 0x2789c8u: goto label_2789c8;
        case 0x2789ccu: goto label_2789cc;
        case 0x2789d0u: goto label_2789d0;
        case 0x2789d4u: goto label_2789d4;
        case 0x2789d8u: goto label_2789d8;
        case 0x2789dcu: goto label_2789dc;
        case 0x2789e0u: goto label_2789e0;
        case 0x2789e4u: goto label_2789e4;
        case 0x2789e8u: goto label_2789e8;
        case 0x2789ecu: goto label_2789ec;
        case 0x2789f0u: goto label_2789f0;
        case 0x2789f4u: goto label_2789f4;
        case 0x2789f8u: goto label_2789f8;
        case 0x2789fcu: goto label_2789fc;
        case 0x278a00u: goto label_278a00;
        case 0x278a04u: goto label_278a04;
        case 0x278a08u: goto label_278a08;
        case 0x278a0cu: goto label_278a0c;
        case 0x278a10u: goto label_278a10;
        case 0x278a14u: goto label_278a14;
        case 0x278a18u: goto label_278a18;
        case 0x278a1cu: goto label_278a1c;
        case 0x278a20u: goto label_278a20;
        case 0x278a24u: goto label_278a24;
        case 0x278a28u: goto label_278a28;
        case 0x278a2cu: goto label_278a2c;
        case 0x278a30u: goto label_278a30;
        case 0x278a34u: goto label_278a34;
        case 0x278a38u: goto label_278a38;
        case 0x278a3cu: goto label_278a3c;
        case 0x278a40u: goto label_278a40;
        case 0x278a44u: goto label_278a44;
        case 0x278a48u: goto label_278a48;
        case 0x278a4cu: goto label_278a4c;
        case 0x278a50u: goto label_278a50;
        case 0x278a54u: goto label_278a54;
        case 0x278a58u: goto label_278a58;
        case 0x278a5cu: goto label_278a5c;
        case 0x278a60u: goto label_278a60;
        case 0x278a64u: goto label_278a64;
        case 0x278a68u: goto label_278a68;
        case 0x278a6cu: goto label_278a6c;
        case 0x278a70u: goto label_278a70;
        case 0x278a74u: goto label_278a74;
        case 0x278a78u: goto label_278a78;
        case 0x278a7cu: goto label_278a7c;
        case 0x278a80u: goto label_278a80;
        case 0x278a84u: goto label_278a84;
        case 0x278a88u: goto label_278a88;
        case 0x278a8cu: goto label_278a8c;
        case 0x278a90u: goto label_278a90;
        case 0x278a94u: goto label_278a94;
        case 0x278a98u: goto label_278a98;
        case 0x278a9cu: goto label_278a9c;
        case 0x278aa0u: goto label_278aa0;
        case 0x278aa4u: goto label_278aa4;
        case 0x278aa8u: goto label_278aa8;
        case 0x278aacu: goto label_278aac;
        case 0x278ab0u: goto label_278ab0;
        case 0x278ab4u: goto label_278ab4;
        case 0x278ab8u: goto label_278ab8;
        case 0x278abcu: goto label_278abc;
        case 0x278ac0u: goto label_278ac0;
        case 0x278ac4u: goto label_278ac4;
        case 0x278ac8u: goto label_278ac8;
        case 0x278accu: goto label_278acc;
        case 0x278ad0u: goto label_278ad0;
        case 0x278ad4u: goto label_278ad4;
        case 0x278ad8u: goto label_278ad8;
        case 0x278adcu: goto label_278adc;
        case 0x278ae0u: goto label_278ae0;
        case 0x278ae4u: goto label_278ae4;
        case 0x278ae8u: goto label_278ae8;
        case 0x278aecu: goto label_278aec;
        case 0x278af0u: goto label_278af0;
        case 0x278af4u: goto label_278af4;
        case 0x278af8u: goto label_278af8;
        case 0x278afcu: goto label_278afc;
        case 0x278b00u: goto label_278b00;
        case 0x278b04u: goto label_278b04;
        case 0x278b08u: goto label_278b08;
        case 0x278b0cu: goto label_278b0c;
        case 0x278b10u: goto label_278b10;
        case 0x278b14u: goto label_278b14;
        case 0x278b18u: goto label_278b18;
        case 0x278b1cu: goto label_278b1c;
        case 0x278b20u: goto label_278b20;
        case 0x278b24u: goto label_278b24;
        case 0x278b28u: goto label_278b28;
        case 0x278b2cu: goto label_278b2c;
        case 0x278b30u: goto label_278b30;
        case 0x278b34u: goto label_278b34;
        case 0x278b38u: goto label_278b38;
        case 0x278b3cu: goto label_278b3c;
        case 0x278b40u: goto label_278b40;
        case 0x278b44u: goto label_278b44;
        case 0x278b48u: goto label_278b48;
        case 0x278b4cu: goto label_278b4c;
        case 0x278b50u: goto label_278b50;
        case 0x278b54u: goto label_278b54;
        case 0x278b58u: goto label_278b58;
        case 0x278b5cu: goto label_278b5c;
        case 0x278b60u: goto label_278b60;
        case 0x278b64u: goto label_278b64;
        case 0x278b68u: goto label_278b68;
        case 0x278b6cu: goto label_278b6c;
        case 0x278b70u: goto label_278b70;
        case 0x278b74u: goto label_278b74;
        case 0x278b78u: goto label_278b78;
        case 0x278b7cu: goto label_278b7c;
        case 0x278b80u: goto label_278b80;
        case 0x278b84u: goto label_278b84;
        case 0x278b88u: goto label_278b88;
        case 0x278b8cu: goto label_278b8c;
        case 0x278b90u: goto label_278b90;
        case 0x278b94u: goto label_278b94;
        case 0x278b98u: goto label_278b98;
        case 0x278b9cu: goto label_278b9c;
        case 0x278ba0u: goto label_278ba0;
        case 0x278ba4u: goto label_278ba4;
        case 0x278ba8u: goto label_278ba8;
        case 0x278bacu: goto label_278bac;
        case 0x278bb0u: goto label_278bb0;
        case 0x278bb4u: goto label_278bb4;
        case 0x278bb8u: goto label_278bb8;
        case 0x278bbcu: goto label_278bbc;
        case 0x278bc0u: goto label_278bc0;
        case 0x278bc4u: goto label_278bc4;
        case 0x278bc8u: goto label_278bc8;
        case 0x278bccu: goto label_278bcc;
        case 0x278bd0u: goto label_278bd0;
        case 0x278bd4u: goto label_278bd4;
        case 0x278bd8u: goto label_278bd8;
        case 0x278bdcu: goto label_278bdc;
        case 0x278be0u: goto label_278be0;
        case 0x278be4u: goto label_278be4;
        case 0x278be8u: goto label_278be8;
        case 0x278becu: goto label_278bec;
        case 0x278bf0u: goto label_278bf0;
        case 0x278bf4u: goto label_278bf4;
        case 0x278bf8u: goto label_278bf8;
        case 0x278bfcu: goto label_278bfc;
        case 0x278c00u: goto label_278c00;
        case 0x278c04u: goto label_278c04;
        case 0x278c08u: goto label_278c08;
        case 0x278c0cu: goto label_278c0c;
        case 0x278c10u: goto label_278c10;
        case 0x278c14u: goto label_278c14;
        case 0x278c18u: goto label_278c18;
        case 0x278c1cu: goto label_278c1c;
        case 0x278c20u: goto label_278c20;
        case 0x278c24u: goto label_278c24;
        case 0x278c28u: goto label_278c28;
        case 0x278c2cu: goto label_278c2c;
        case 0x278c30u: goto label_278c30;
        case 0x278c34u: goto label_278c34;
        case 0x278c38u: goto label_278c38;
        case 0x278c3cu: goto label_278c3c;
        case 0x278c40u: goto label_278c40;
        case 0x278c44u: goto label_278c44;
        case 0x278c48u: goto label_278c48;
        case 0x278c4cu: goto label_278c4c;
        case 0x278c50u: goto label_278c50;
        case 0x278c54u: goto label_278c54;
        case 0x278c58u: goto label_278c58;
        case 0x278c5cu: goto label_278c5c;
        case 0x278c60u: goto label_278c60;
        case 0x278c64u: goto label_278c64;
        case 0x278c68u: goto label_278c68;
        case 0x278c6cu: goto label_278c6c;
        case 0x278c70u: goto label_278c70;
        case 0x278c74u: goto label_278c74;
        case 0x278c78u: goto label_278c78;
        case 0x278c7cu: goto label_278c7c;
        case 0x278c80u: goto label_278c80;
        case 0x278c84u: goto label_278c84;
        case 0x278c88u: goto label_278c88;
        case 0x278c8cu: goto label_278c8c;
        case 0x278c90u: goto label_278c90;
        case 0x278c94u: goto label_278c94;
        case 0x278c98u: goto label_278c98;
        case 0x278c9cu: goto label_278c9c;
        case 0x278ca0u: goto label_278ca0;
        case 0x278ca4u: goto label_278ca4;
        case 0x278ca8u: goto label_278ca8;
        case 0x278cacu: goto label_278cac;
        case 0x278cb0u: goto label_278cb0;
        case 0x278cb4u: goto label_278cb4;
        case 0x278cb8u: goto label_278cb8;
        case 0x278cbcu: goto label_278cbc;
        case 0x278cc0u: goto label_278cc0;
        case 0x278cc4u: goto label_278cc4;
        case 0x278cc8u: goto label_278cc8;
        case 0x278cccu: goto label_278ccc;
        case 0x278cd0u: goto label_278cd0;
        case 0x278cd4u: goto label_278cd4;
        case 0x278cd8u: goto label_278cd8;
        case 0x278cdcu: goto label_278cdc;
        case 0x278ce0u: goto label_278ce0;
        case 0x278ce4u: goto label_278ce4;
        case 0x278ce8u: goto label_278ce8;
        case 0x278cecu: goto label_278cec;
        case 0x278cf0u: goto label_278cf0;
        case 0x278cf4u: goto label_278cf4;
        case 0x278cf8u: goto label_278cf8;
        case 0x278cfcu: goto label_278cfc;
        case 0x278d00u: goto label_278d00;
        case 0x278d04u: goto label_278d04;
        case 0x278d08u: goto label_278d08;
        case 0x278d0cu: goto label_278d0c;
        case 0x278d10u: goto label_278d10;
        case 0x278d14u: goto label_278d14;
        case 0x278d18u: goto label_278d18;
        case 0x278d1cu: goto label_278d1c;
        case 0x278d20u: goto label_278d20;
        case 0x278d24u: goto label_278d24;
        case 0x278d28u: goto label_278d28;
        case 0x278d2cu: goto label_278d2c;
        case 0x278d30u: goto label_278d30;
        case 0x278d34u: goto label_278d34;
        case 0x278d38u: goto label_278d38;
        case 0x278d3cu: goto label_278d3c;
        case 0x278d40u: goto label_278d40;
        case 0x278d44u: goto label_278d44;
        case 0x278d48u: goto label_278d48;
        case 0x278d4cu: goto label_278d4c;
        case 0x278d50u: goto label_278d50;
        case 0x278d54u: goto label_278d54;
        case 0x278d58u: goto label_278d58;
        case 0x278d5cu: goto label_278d5c;
        case 0x278d60u: goto label_278d60;
        case 0x278d64u: goto label_278d64;
        case 0x278d68u: goto label_278d68;
        case 0x278d6cu: goto label_278d6c;
        case 0x278d70u: goto label_278d70;
        case 0x278d74u: goto label_278d74;
        case 0x278d78u: goto label_278d78;
        case 0x278d7cu: goto label_278d7c;
        case 0x278d80u: goto label_278d80;
        case 0x278d84u: goto label_278d84;
        case 0x278d88u: goto label_278d88;
        case 0x278d8cu: goto label_278d8c;
        case 0x278d90u: goto label_278d90;
        case 0x278d94u: goto label_278d94;
        case 0x278d98u: goto label_278d98;
        case 0x278d9cu: goto label_278d9c;
        case 0x278da0u: goto label_278da0;
        case 0x278da4u: goto label_278da4;
        case 0x278da8u: goto label_278da8;
        case 0x278dacu: goto label_278dac;
        case 0x278db0u: goto label_278db0;
        case 0x278db4u: goto label_278db4;
        case 0x278db8u: goto label_278db8;
        case 0x278dbcu: goto label_278dbc;
        case 0x278dc0u: goto label_278dc0;
        case 0x278dc4u: goto label_278dc4;
        case 0x278dc8u: goto label_278dc8;
        case 0x278dccu: goto label_278dcc;
        case 0x278dd0u: goto label_278dd0;
        case 0x278dd4u: goto label_278dd4;
        case 0x278dd8u: goto label_278dd8;
        case 0x278ddcu: goto label_278ddc;
        case 0x278de0u: goto label_278de0;
        case 0x278de4u: goto label_278de4;
        case 0x278de8u: goto label_278de8;
        case 0x278decu: goto label_278dec;
        case 0x278df0u: goto label_278df0;
        case 0x278df4u: goto label_278df4;
        case 0x278df8u: goto label_278df8;
        case 0x278dfcu: goto label_278dfc;
        case 0x278e00u: goto label_278e00;
        case 0x278e04u: goto label_278e04;
        case 0x278e08u: goto label_278e08;
        case 0x278e0cu: goto label_278e0c;
        case 0x278e10u: goto label_278e10;
        case 0x278e14u: goto label_278e14;
        case 0x278e18u: goto label_278e18;
        case 0x278e1cu: goto label_278e1c;
        case 0x278e20u: goto label_278e20;
        case 0x278e24u: goto label_278e24;
        case 0x278e28u: goto label_278e28;
        case 0x278e2cu: goto label_278e2c;
        case 0x278e30u: goto label_278e30;
        case 0x278e34u: goto label_278e34;
        case 0x278e38u: goto label_278e38;
        case 0x278e3cu: goto label_278e3c;
        case 0x278e40u: goto label_278e40;
        case 0x278e44u: goto label_278e44;
        case 0x278e48u: goto label_278e48;
        case 0x278e4cu: goto label_278e4c;
        case 0x278e50u: goto label_278e50;
        case 0x278e54u: goto label_278e54;
        case 0x278e58u: goto label_278e58;
        case 0x278e5cu: goto label_278e5c;
        case 0x278e60u: goto label_278e60;
        case 0x278e64u: goto label_278e64;
        case 0x278e68u: goto label_278e68;
        case 0x278e6cu: goto label_278e6c;
        case 0x278e70u: goto label_278e70;
        case 0x278e74u: goto label_278e74;
        case 0x278e78u: goto label_278e78;
        case 0x278e7cu: goto label_278e7c;
        case 0x278e80u: goto label_278e80;
        case 0x278e84u: goto label_278e84;
        case 0x278e88u: goto label_278e88;
        case 0x278e8cu: goto label_278e8c;
        case 0x278e90u: goto label_278e90;
        case 0x278e94u: goto label_278e94;
        case 0x278e98u: goto label_278e98;
        case 0x278e9cu: goto label_278e9c;
        case 0x278ea0u: goto label_278ea0;
        case 0x278ea4u: goto label_278ea4;
        case 0x278ea8u: goto label_278ea8;
        case 0x278eacu: goto label_278eac;
        case 0x278eb0u: goto label_278eb0;
        case 0x278eb4u: goto label_278eb4;
        case 0x278eb8u: goto label_278eb8;
        case 0x278ebcu: goto label_278ebc;
        case 0x278ec0u: goto label_278ec0;
        case 0x278ec4u: goto label_278ec4;
        case 0x278ec8u: goto label_278ec8;
        case 0x278eccu: goto label_278ecc;
        case 0x278ed0u: goto label_278ed0;
        case 0x278ed4u: goto label_278ed4;
        case 0x278ed8u: goto label_278ed8;
        case 0x278edcu: goto label_278edc;
        case 0x278ee0u: goto label_278ee0;
        case 0x278ee4u: goto label_278ee4;
        case 0x278ee8u: goto label_278ee8;
        case 0x278eecu: goto label_278eec;
        case 0x278ef0u: goto label_278ef0;
        case 0x278ef4u: goto label_278ef4;
        case 0x278ef8u: goto label_278ef8;
        case 0x278efcu: goto label_278efc;
        case 0x278f00u: goto label_278f00;
        case 0x278f04u: goto label_278f04;
        case 0x278f08u: goto label_278f08;
        case 0x278f0cu: goto label_278f0c;
        case 0x278f10u: goto label_278f10;
        case 0x278f14u: goto label_278f14;
        case 0x278f18u: goto label_278f18;
        case 0x278f1cu: goto label_278f1c;
        case 0x278f20u: goto label_278f20;
        case 0x278f24u: goto label_278f24;
        case 0x278f28u: goto label_278f28;
        case 0x278f2cu: goto label_278f2c;
        case 0x278f30u: goto label_278f30;
        case 0x278f34u: goto label_278f34;
        case 0x278f38u: goto label_278f38;
        case 0x278f3cu: goto label_278f3c;
        case 0x278f40u: goto label_278f40;
        case 0x278f44u: goto label_278f44;
        case 0x278f48u: goto label_278f48;
        case 0x278f4cu: goto label_278f4c;
        case 0x278f50u: goto label_278f50;
        case 0x278f54u: goto label_278f54;
        case 0x278f58u: goto label_278f58;
        case 0x278f5cu: goto label_278f5c;
        case 0x278f60u: goto label_278f60;
        case 0x278f64u: goto label_278f64;
        case 0x278f68u: goto label_278f68;
        case 0x278f6cu: goto label_278f6c;
        case 0x278f70u: goto label_278f70;
        case 0x278f74u: goto label_278f74;
        case 0x278f78u: goto label_278f78;
        case 0x278f7cu: goto label_278f7c;
        case 0x278f80u: goto label_278f80;
        case 0x278f84u: goto label_278f84;
        default: break;
    }

    ctx->pc = 0x2787d0u;

label_2787d0:
    // 0x2787d0: 0x27bdfc00  addiu       $sp, $sp, -0x400
    ctx->pc = 0x2787d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966272));
label_2787d4:
    // 0x2787d4: 0x7fb60380  sq          $s6, 0x380($sp)
    ctx->pc = 0x2787d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 896), GPR_VEC(ctx, 22));
label_2787d8:
    // 0x2787d8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2787d8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2787dc:
    // 0x2787dc: 0x7fb003e0  sq          $s0, 0x3E0($sp)
    ctx->pc = 0x2787dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 16));
label_2787e0:
    // 0x2787e0: 0x7fb103d0  sq          $s1, 0x3D0($sp)
    ctx->pc = 0x2787e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 17));
label_2787e4:
    // 0x2787e4: 0x2c0682d  daddu       $t5, $s6, $zero
    ctx->pc = 0x2787e4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2787e8:
    // 0x2787e8: 0x7fb203c0  sq          $s2, 0x3C0($sp)
    ctx->pc = 0x2787e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 18));
label_2787ec:
    // 0x2787ec: 0x7fb303b0  sq          $s3, 0x3B0($sp)
    ctx->pc = 0x2787ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 19));
label_2787f0:
    // 0x2787f0: 0x7fb403a0  sq          $s4, 0x3A0($sp)
    ctx->pc = 0x2787f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 20));
label_2787f4:
    // 0x2787f4: 0x7fb50390  sq          $s5, 0x390($sp)
    ctx->pc = 0x2787f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 21));
label_2787f8:
    // 0x2787f8: 0x7fb70370  sq          $s7, 0x370($sp)
    ctx->pc = 0x2787f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 880), GPR_VEC(ctx, 23));
label_2787fc:
    // 0x2787fc: 0x7fbe0360  sq          $fp, 0x360($sp)
    ctx->pc = 0x2787fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 864), GPR_VEC(ctx, 30));
label_278800:
    // 0x278800: 0xffbf0350  sd          $ra, 0x350($sp)
    ctx->pc = 0x278800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 848), GPR_U64(ctx, 31));
label_278804:
    // 0x278804: 0xe7b503f8  swc1        $f21, 0x3F8($sp)
    ctx->pc = 0x278804u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1016), bits); }
label_278808:
    // 0x278808: 0xe7b403f0  swc1        $f20, 0x3F0($sp)
    ctx->pc = 0x278808u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_27880c:
    // 0x27880c: 0xafa602d0  sw          $a2, 0x2D0($sp)
    ctx->pc = 0x27880cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 6));
label_278810:
    // 0x278810: 0xafa702d4  sw          $a3, 0x2D4($sp)
    ctx->pc = 0x278810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 7));
label_278814:
    // 0x278814: 0x6ac20007  ldl         $v0, 0x7($s6)
    ctx->pc = 0x278814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_278818:
    // 0x278818: 0x6ec20000  ldr         $v0, 0x0($s6)
    ctx->pc = 0x278818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_27881c:
    // 0x27881c: 0x6ac3000f  ldl         $v1, 0xF($s6)
    ctx->pc = 0x27881cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_278820:
    // 0x278820: 0x6ec30008  ldr         $v1, 0x8($s6)
    ctx->pc = 0x278820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_278824:
    // 0x278824: 0x6ac50017  ldl         $a1, 0x17($s6)
    ctx->pc = 0x278824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_278828:
    // 0x278828: 0x6ec50010  ldr         $a1, 0x10($s6)
    ctx->pc = 0x278828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_27882c:
    // 0x27882c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x27882cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278830:
    // 0x278830: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x278830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278834:
    // 0x278834: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x278834u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278838:
    // 0x278838: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x278838u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_27883c:
    // 0x27883c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x27883cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278840:
    // 0x278840: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x278840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278844:
    // 0x278844: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x278844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_278848:
    // 0x278848: 0x27a3001c  addiu       $v1, $sp, 0x1C
    ctx->pc = 0x278848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
label_27884c:
    // 0x27884c: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x27884cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_278850:
    // 0x278850: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x278850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_278854:
    // 0x278854: 0x83202b  sltu        $a0, $a0, $v1
    ctx->pc = 0x278854u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278858:
    // 0x278858: 0x108001bc  beqz        $a0, . + 4 + (0x1BC << 2)
label_27885c:
    if (ctx->pc == 0x27885Cu) {
        ctx->pc = 0x27885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278858u;
        // 0x27885c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278860u;
        goto label_278860;
    }
    ctx->pc = 0x278858u;
    {
        const bool branch_taken_0x278858 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27885Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278858u;
        // 0x27885c: 0xafa20018  sw          $v0, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278858) {
            ctx->pc = 0x278F4Cu;
            goto label_278f4c;
        }
    }
    ctx->pc = 0x278860u;
label_278860:
    // 0x278860: 0x27a70154  addiu       $a3, $sp, 0x154
    ctx->pc = 0x278860u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_278864:
    // 0x278864: 0x27a20164  addiu       $v0, $sp, 0x164
    ctx->pc = 0x278864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 356));
label_278868:
    // 0x278868: 0x27a4015c  addiu       $a0, $sp, 0x15C
    ctx->pc = 0x278868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_27886c:
    // 0x27886c: 0xafa702dc  sw          $a3, 0x2DC($sp)
    ctx->pc = 0x27886cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 732), GPR_U32(ctx, 7));
label_278870:
    // 0x278870: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x278870u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_278874:
    // 0x278874: 0xafa402e4  sw          $a0, 0x2E4($sp)
    ctx->pc = 0x278874u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 4));
label_278878:
    // 0x278878: 0x8c62fffc  lw          $v0, -0x4($v1)
    ctx->pc = 0x278878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_27887c:
    // 0x27887c: 0x0  nop
    ctx->pc = 0x27887cu;
    // NOP
label_278880:
    // 0x278880: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x278880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_278884:
    // 0x278884: 0xafa3011c  sw          $v1, 0x11C($sp)
    ctx->pc = 0x278884u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 3));
label_278888:
    // 0x278888: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27888c:
    // 0x27888c: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_278890:
    if (ctx->pc == 0x278890u) {
        ctx->pc = 0x278890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27888Cu;
        // 0x278890: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278894u;
        goto label_278894;
    }
    ctx->pc = 0x27888Cu;
    {
        const bool branch_taken_0x27888c = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x278890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27888Cu;
        // 0x278890: 0x8fa2011c  lw          $v0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27888c) {
            ctx->pc = 0x278908u;
            goto label_278908;
        }
    }
    ctx->pc = 0x278894u;
label_278894:
    // 0x278894: 0x8fa4011c  lw          $a0, 0x11C($sp)
    ctx->pc = 0x278894u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_278898:
    // 0x278898: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x278898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27889c:
    // 0x27889c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2788a0:
    // 0x2788a0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x2788a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_2788a4:
    // 0x2788a4: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x2788a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2788a8:
    // 0x2788a8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2788a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2788ac:
    // 0x2788ac: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2788acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2788b0:
    // 0x2788b0: 0x0  nop
    ctx->pc = 0x2788b0u;
    // NOP
label_2788b4:
    // 0x2788b4: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_2788b8:
    if (ctx->pc == 0x2788B8u) {
        ctx->pc = 0x2788B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788B4u;
        // 0x2788b8: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788BCu;
        goto label_2788bc;
    }
    ctx->pc = 0x2788B4u;
    {
        const bool branch_taken_0x2788b4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2788b4) {
            ctx->pc = 0x2788B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2788B4u;
            // 0x2788b8: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2788C8u;
            goto label_2788c8;
        }
    }
    ctx->pc = 0x2788BCu;
label_2788bc:
    // 0x2788bc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2788c0:
    // 0x2788c0: 0x1000000b  b           . + 4 + (0xB << 2)
label_2788c4:
    if (ctx->pc == 0x2788C4u) {
        ctx->pc = 0x2788C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788C0u;
        // 0x2788c4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788C8u;
        goto label_2788c8;
    }
    ctx->pc = 0x2788C0u;
    {
        const bool branch_taken_0x2788c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2788C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788C0u;
        // 0x2788c4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788c0) {
            ctx->pc = 0x2788F0u;
            goto label_2788f0;
        }
    }
    ctx->pc = 0x2788C8u;
label_2788c8:
    // 0x2788c8: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x2788c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2788cc:
    // 0x2788cc: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2788ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2788d0:
    // 0x2788d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2788d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2788d4:
    // 0x2788d4: 0x0  nop
    ctx->pc = 0x2788d4u;
    // NOP
label_2788d8:
    // 0x2788d8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2788dc:
    if (ctx->pc == 0x2788DCu) {
        ctx->pc = 0x2788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788D8u;
        // 0x2788dc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2788E0u;
        goto label_2788e0;
    }
    ctx->pc = 0x2788D8u;
    {
        const bool branch_taken_0x2788d8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2788DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788D8u;
        // 0x2788dc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788d8) {
            ctx->pc = 0x2788F0u;
            goto label_2788f0;
        }
    }
    ctx->pc = 0x2788E0u;
label_2788e0:
    // 0x2788e0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2788e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2788e4:
    // 0x2788e4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x2788e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_2788e8:
    // 0x2788e8: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x2788e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_2788ec:
    // 0x2788ec: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2788ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_2788f0:
    // 0x2788f0: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x2788f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2788f4:
    // 0x2788f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2788f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2788f8:
    // 0x2788f8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2788f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2788fc:
    // 0x2788fc: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_278900:
    if (ctx->pc == 0x278900u) {
        ctx->pc = 0x278900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788FCu;
        // 0x278900: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278904u;
        goto label_278904;
    }
    ctx->pc = 0x2788FCu;
    {
        const bool branch_taken_0x2788fc = (GPR_S64(ctx, 4) >= 0);
        ctx->pc = 0x278900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2788FCu;
        // 0x278900: 0x8fa4011c  lw          $a0, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2788fc) {
            ctx->pc = 0x278898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278898;
        }
    }
    ctx->pc = 0x278904u;
label_278904:
    // 0x278904: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x278904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_278908:
    // 0x278908: 0x8c4c0000  lw          $t4, 0x0($v0)
    ctx->pc = 0x278908u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27890c:
    // 0x27890c: 0x8f8387d8  lw          $v1, -0x7828($gp)
    ctx->pc = 0x27890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936536)));
label_278910:
    // 0x278910: 0x1831821  addu        $v1, $t4, $v1
    ctx->pc = 0x278910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 3)));
label_278914:
    // 0x278914: 0x8c750000  lw          $s5, 0x0($v1)
    ctx->pc = 0x278914u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_278918:
    // 0x278918: 0x52a00188  beql        $s5, $zero, . + 4 + (0x188 << 2)
label_27891c:
    if (ctx->pc == 0x27891Cu) {
        ctx->pc = 0x27891Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278918u;
        // 0x27891c: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278920u;
        goto label_278920;
    }
    ctx->pc = 0x278918u;
    {
        const bool branch_taken_0x278918 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x278918) {
            ctx->pc = 0x27891Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278918u;
            // 0x27891c: 0x8fa3011c  lw          $v1, 0x11C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278F3Cu;
            goto label_278f3c;
        }
    }
    ctx->pc = 0x278920u;
label_278920:
    // 0x278920: 0x8d850004  lw          $a1, 0x4($t4)
    ctx->pc = 0x278920u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
label_278924:
    // 0x278924: 0xafa502d8  sw          $a1, 0x2D8($sp)
    ctx->pc = 0x278924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 728), GPR_U32(ctx, 5));
label_278928:
    // 0x278928: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x278928u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27892c:
    // 0x27892c: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x27892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278930:
    // 0x278930: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x278930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278934:
    // 0x278934: 0x0  nop
    ctx->pc = 0x278934u;
    // NOP
label_278938:
    // 0x278938: 0x4500006c  bc1f        . + 4 + (0x6C << 2)
label_27893c:
    if (ctx->pc == 0x27893Cu) {
        ctx->pc = 0x27893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278938u;
        // 0x27893c: 0x8d8b0008  lw          $t3, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278940u;
        goto label_278940;
    }
    ctx->pc = 0x278938u;
    {
        const bool branch_taken_0x278938 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27893Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278938u;
        // 0x27893c: 0x8d8b0008  lw          $t3, 0x8($t4) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278938) {
            ctx->pc = 0x278AECu;
            goto label_278aec;
        }
    }
    ctx->pc = 0x278940u;
label_278940:
    // 0x278940: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x278940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278944:
    // 0x278944: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x278944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278948:
    // 0x278948: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x278948u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27894c:
    // 0x27894c: 0x0  nop
    ctx->pc = 0x27894cu;
    // NOP
label_278950:
    // 0x278950: 0x45000067  bc1f        . + 4 + (0x67 << 2)
label_278954:
    if (ctx->pc == 0x278954u) {
        ctx->pc = 0x278954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278950u;
        // 0x278954: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278958u;
        goto label_278958;
    }
    ctx->pc = 0x278950u;
    {
        const bool branch_taken_0x278950 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278950u;
        // 0x278954: 0x8fa602e4  lw          $a2, 0x2E4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278950) {
            ctx->pc = 0x278AF0u;
            goto label_278af0;
        }
    }
    ctx->pc = 0x278958u;
label_278958:
    // 0x278958: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x278958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27895c:
    // 0x27895c: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x27895cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278960:
    // 0x278960: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x278960u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278964:
    // 0x278964: 0x0  nop
    ctx->pc = 0x278964u;
    // NOP
label_278968:
    // 0x278968: 0x45000062  bc1f        . + 4 + (0x62 << 2)
label_27896c:
    if (ctx->pc == 0x27896Cu) {
        ctx->pc = 0x27896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278968u;
        // 0x27896c: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278970u;
        goto label_278970;
    }
    ctx->pc = 0x278968u;
    {
        const bool branch_taken_0x278968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27896Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278968u;
        // 0x27896c: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278968) {
            ctx->pc = 0x278AF4u;
            goto label_278af4;
        }
    }
    ctx->pc = 0x278970u;
label_278970:
    // 0x278970: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x278970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278974:
    // 0x278974: 0xc6c0000c  lwc1        $f0, 0xC($s6)
    ctx->pc = 0x278974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278978:
    // 0x278978: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x278978u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27897c:
    // 0x27897c: 0x0  nop
    ctx->pc = 0x27897cu;
    // NOP
label_278980:
    // 0x278980: 0x4502005d  bc1fl       . + 4 + (0x5D << 2)
label_278984:
    if (ctx->pc == 0x278984u) {
        ctx->pc = 0x278984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278980u;
        // 0x278984: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278988u;
        goto label_278988;
    }
    ctx->pc = 0x278980u;
    {
        const bool branch_taken_0x278980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278980) {
            ctx->pc = 0x278984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278980u;
            // 0x278984: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278988u;
label_278988:
    // 0x278988: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x278988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27898c:
    // 0x27898c: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x27898cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278990:
    // 0x278990: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x278990u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278994:
    // 0x278994: 0x0  nop
    ctx->pc = 0x278994u;
    // NOP
label_278998:
    // 0x278998: 0x45020057  bc1fl       . + 4 + (0x57 << 2)
label_27899c:
    if (ctx->pc == 0x27899Cu) {
        ctx->pc = 0x27899Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278998u;
        // 0x27899c: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789A0u;
        goto label_2789a0;
    }
    ctx->pc = 0x278998u;
    {
        const bool branch_taken_0x278998 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x278998) {
            ctx->pc = 0x27899Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278998u;
            // 0x27899c: 0xafa60264  sw          $a2, 0x264($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x2789A0u;
label_2789a0:
    // 0x2789a0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x2789a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2789a4:
    // 0x2789a4: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x2789a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2789a8:
    // 0x2789a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2789a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2789ac:
    // 0x2789ac: 0x0  nop
    ctx->pc = 0x2789acu;
    // NOP
label_2789b0:
    // 0x2789b0: 0x4500004e  bc1f        . + 4 + (0x4E << 2)
label_2789b4:
    if (ctx->pc == 0x2789B4u) {
        ctx->pc = 0x2789B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789B0u;
        // 0x2789b4: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2789B8u;
        goto label_2789b8;
    }
    ctx->pc = 0x2789B0u;
    {
        const bool branch_taken_0x2789b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2789B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2789B0u;
        // 0x2789b4: 0x240600ff  addiu       $a2, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2789b0) {
            ctx->pc = 0x278AECu;
            goto label_278aec;
        }
    }
    ctx->pc = 0x2789B8u;
label_2789b8:
    // 0x2789b8: 0xa7a00156  sh          $zero, 0x156($sp)
    ctx->pc = 0x2789b8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 342), (uint16_t)GPR_U32(ctx, 0));
label_2789bc:
    // 0x2789bc: 0xa3a60155  sb          $a2, 0x155($sp)
    ctx->pc = 0x2789bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 341), (uint8_t)GPR_U32(ctx, 6));
label_2789c0:
    // 0x2789c0: 0xafb50120  sw          $s5, 0x120($sp)
    ctx->pc = 0x2789c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 21));
label_2789c4:
    // 0x2789c4: 0x96a2001e  lhu         $v0, 0x1E($s5)
    ctx->pc = 0x2789c4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 30)));
label_2789c8:
    // 0x2789c8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2789cc:
    if (ctx->pc == 0x2789CCu) {
        ctx->pc = 0x2789D0u;
        goto label_2789d0;
    }
    ctx->pc = 0x2789C8u;
    {
        const bool branch_taken_0x2789c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2789c8) {
            ctx->pc = 0x2789D8u;
            goto label_2789d8;
        }
    }
    ctx->pc = 0x2789D0u;
label_2789d0:
    // 0x2789d0: 0x92a2001c  lbu         $v0, 0x1C($s5)
    ctx->pc = 0x2789d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 28)));
label_2789d4:
    // 0x2789d4: 0xa3a20155  sb          $v0, 0x155($sp)
    ctx->pc = 0x2789d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 341), (uint8_t)GPR_U32(ctx, 2));
label_2789d8:
    // 0x2789d8: 0x69a70007  ldl         $a3, 0x7($t5)
    ctx->pc = 0x2789d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2789dc:
    // 0x2789dc: 0x6da70000  ldr         $a3, 0x0($t5)
    ctx->pc = 0x2789dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2789e0:
    // 0x2789e0: 0x69a2000f  ldl         $v0, 0xF($t5)
    ctx->pc = 0x2789e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2789e4:
    // 0x2789e4: 0x6da20008  ldr         $v0, 0x8($t5)
    ctx->pc = 0x2789e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2789e8:
    // 0x2789e8: 0x69a30017  ldl         $v1, 0x17($t5)
    ctx->pc = 0x2789e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2789ec:
    // 0x2789ec: 0x6da30010  ldr         $v1, 0x10($t5)
    ctx->pc = 0x2789ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2789f0:
    // 0x2789f0: 0xb3a7012b  sdl         $a3, 0x12B($sp)
    ctx->pc = 0x2789f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 299); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2789f4:
    // 0x2789f4: 0xb7a70124  sdr         $a3, 0x124($sp)
    ctx->pc = 0x2789f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2789f8:
    // 0x2789f8: 0xb3a20133  sdl         $v0, 0x133($sp)
    ctx->pc = 0x2789f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 307); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2789fc:
    // 0x2789fc: 0xb7a2012c  sdr         $v0, 0x12C($sp)
    ctx->pc = 0x2789fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 300); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a00:
    // 0x278a00: 0xb3a3013b  sdl         $v1, 0x13B($sp)
    ctx->pc = 0x278a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 315); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a04:
    // 0x278a04: 0xb7a30134  sdr         $v1, 0x134($sp)
    ctx->pc = 0x278a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a08:
    // 0x278a08: 0x69a50007  ldl         $a1, 0x7($t5)
    ctx->pc = 0x278a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_278a0c:
    // 0x278a0c: 0x6da50000  ldr         $a1, 0x0($t5)
    ctx->pc = 0x278a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_278a10:
    // 0x278a10: 0x69a6000f  ldl         $a2, 0xF($t5)
    ctx->pc = 0x278a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_278a14:
    // 0x278a14: 0x6da60008  ldr         $a2, 0x8($t5)
    ctx->pc = 0x278a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_278a18:
    // 0x278a18: 0x69a70017  ldl         $a3, 0x17($t5)
    ctx->pc = 0x278a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_278a1c:
    // 0x278a1c: 0x6da70010  ldr         $a3, 0x10($t5)
    ctx->pc = 0x278a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_278a20:
    // 0x278a20: 0xb3a50143  sdl         $a1, 0x143($sp)
    ctx->pc = 0x278a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 323); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a24:
    // 0x278a24: 0xb7a5013c  sdr         $a1, 0x13C($sp)
    ctx->pc = 0x278a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 316); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a28:
    // 0x278a28: 0xb3a6014b  sdl         $a2, 0x14B($sp)
    ctx->pc = 0x278a28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 331); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a2c:
    // 0x278a2c: 0xb7a60144  sdr         $a2, 0x144($sp)
    ctx->pc = 0x278a2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 324); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a30:
    // 0x278a30: 0xb3a70153  sdl         $a3, 0x153($sp)
    ctx->pc = 0x278a30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 339); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a34:
    // 0x278a34: 0xb7a7014c  sdr         $a3, 0x14C($sp)
    ctx->pc = 0x278a34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 332); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278a38:
    // 0x278a38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x278a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278a3c:
    // 0x278a3c: 0xc6c1000c  lwc1        $f1, 0xC($s6)
    ctx->pc = 0x278a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278a40:
    // 0x278a40: 0xc6a00010  lwc1        $f0, 0x10($s5)
    ctx->pc = 0x278a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278a44:
    // 0x278a44: 0x8fa402dc  lw          $a0, 0x2DC($sp)
    ctx->pc = 0x278a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 732)));
label_278a48:
    // 0x278a48: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278a48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278a4c:
    // 0x278a4c: 0x0  nop
    ctx->pc = 0x278a4cu;
    // NOP
label_278a50:
    // 0x278a50: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_278a54:
    if (ctx->pc == 0x278A54u) {
        ctx->pc = 0x278A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A50u;
        // 0x278a54: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A58u;
        goto label_278a58;
    }
    ctx->pc = 0x278A50u;
    {
        const bool branch_taken_0x278a50 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x278A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A50u;
        // 0x278a54: 0xafa4015c  sw          $a0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278a50) {
            ctx->pc = 0x278A60u;
            goto label_278a60;
        }
    }
    ctx->pc = 0x278A58u;
label_278a58:
    // 0x278a58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x278a58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_278a5c:
    // 0x278a5c: 0x0  nop
    ctx->pc = 0x278a5cu;
    // NOP
label_278a60:
    // 0x278a60: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x278a60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278a64:
    // 0x278a64: 0xc6c00010  lwc1        $f0, 0x10($s6)
    ctx->pc = 0x278a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278a68:
    // 0x278a68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278a68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278a6c:
    // 0x278a6c: 0x0  nop
    ctx->pc = 0x278a6cu;
    // NOP
label_278a70:
    // 0x278a70: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_278a74:
    if (ctx->pc == 0x278A74u) {
        ctx->pc = 0x278A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A70u;
        // 0x278a74: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A78u;
        goto label_278a78;
    }
    ctx->pc = 0x278A70u;
    {
        const bool branch_taken_0x278a70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278a70) {
            ctx->pc = 0x278A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A70u;
            // 0x278a74: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A78u;
            goto label_278a78;
        }
    }
    ctx->pc = 0x278A78u;
label_278a78:
    // 0x278a78: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x278a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278a7c:
    // 0x278a7c: 0xc6c00014  lwc1        $f0, 0x14($s6)
    ctx->pc = 0x278a7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278a80:
    // 0x278a80: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278a80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278a84:
    // 0x278a84: 0x0  nop
    ctx->pc = 0x278a84u;
    // NOP
label_278a88:
    // 0x278a88: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_278a8c:
    if (ctx->pc == 0x278A8Cu) {
        ctx->pc = 0x278A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278A88u;
        // 0x278a8c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278A90u;
        goto label_278a90;
    }
    ctx->pc = 0x278A88u;
    {
        const bool branch_taken_0x278a88 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278a88) {
            ctx->pc = 0x278A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278A88u;
            // 0x278a8c: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278A90u;
            goto label_278a90;
        }
    }
    ctx->pc = 0x278A90u;
label_278a90:
    // 0x278a90: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x278a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278a94:
    // 0x278a94: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x278a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278a98:
    // 0x278a98: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278a98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278a9c:
    // 0x278a9c: 0x0  nop
    ctx->pc = 0x278a9cu;
    // NOP
label_278aa0:
    // 0x278aa0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_278aa4:
    if (ctx->pc == 0x278AA4u) {
        ctx->pc = 0x278AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AA0u;
        // 0x278aa4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AA8u;
        goto label_278aa8;
    }
    ctx->pc = 0x278AA0u;
    {
        const bool branch_taken_0x278aa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278aa0) {
            ctx->pc = 0x278AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AA0u;
            // 0x278aa4: 0x34420002  ori         $v0, $v0, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AA8u;
            goto label_278aa8;
        }
    }
    ctx->pc = 0x278AA8u;
label_278aa8:
    // 0x278aa8: 0xc6a10008  lwc1        $f1, 0x8($s5)
    ctx->pc = 0x278aa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278aac:
    // 0x278aac: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x278aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ab0:
    // 0x278ab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278ab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278ab4:
    // 0x278ab4: 0x0  nop
    ctx->pc = 0x278ab4u;
    // NOP
label_278ab8:
    // 0x278ab8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_278abc:
    if (ctx->pc == 0x278ABCu) {
        ctx->pc = 0x278ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AB8u;
        // 0x278abc: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AC0u;
        goto label_278ac0;
    }
    ctx->pc = 0x278AB8u;
    {
        const bool branch_taken_0x278ab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278ab8) {
            ctx->pc = 0x278ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AB8u;
            // 0x278abc: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AC0u;
            goto label_278ac0;
        }
    }
    ctx->pc = 0x278AC0u;
label_278ac0:
    // 0x278ac0: 0xc6a1000c  lwc1        $f1, 0xC($s5)
    ctx->pc = 0x278ac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278ac4:
    // 0x278ac4: 0xc6c00008  lwc1        $f0, 0x8($s6)
    ctx->pc = 0x278ac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ac8:
    // 0x278ac8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x278ac8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278acc:
    // 0x278acc: 0x0  nop
    ctx->pc = 0x278accu;
    // NOP
label_278ad0:
    // 0x278ad0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_278ad4:
    if (ctx->pc == 0x278AD4u) {
        ctx->pc = 0x278AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AD0u;
        // 0x278ad4: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AD8u;
        goto label_278ad8;
    }
    ctx->pc = 0x278AD0u;
    {
        const bool branch_taken_0x278ad0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x278ad0) {
            ctx->pc = 0x278AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278AD0u;
            // 0x278ad4: 0x34420020  ori         $v0, $v0, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
            ctx->in_delay_slot = false;
            ctx->pc = 0x278AD8u;
            goto label_278ad8;
        }
    }
    ctx->pc = 0x278AD8u;
label_278ad8:
    // 0x278ad8: 0x8fa502e0  lw          $a1, 0x2E0($sp)
    ctx->pc = 0x278ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 736)));
label_278adc:
    // 0x278adc: 0xafa20160  sw          $v0, 0x160($sp)
    ctx->pc = 0x278adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 2));
label_278ae0:
    // 0x278ae0: 0xafa50264  sw          $a1, 0x264($sp)
    ctx->pc = 0x278ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
label_278ae4:
    // 0x278ae4: 0x10000004  b           . + 4 + (0x4 << 2)
label_278ae8:
    if (ctx->pc == 0x278AE8u) {
        ctx->pc = 0x278AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AE4u;
        // 0x278ae8: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278AECu;
        goto label_278aec;
    }
    ctx->pc = 0x278AE4u;
    {
        const bool branch_taken_0x278ae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278AE4u;
        // 0x278ae8: 0x27aa015c  addiu       $t2, $sp, 0x15C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ae4) {
            ctx->pc = 0x278AF8u;
            goto label_278af8;
        }
    }
    ctx->pc = 0x278AECu;
label_278aec:
    // 0x278aec: 0x8fa602e4  lw          $a2, 0x2E4($sp)
    ctx->pc = 0x278aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 740)));
label_278af0:
    // 0x278af0: 0x27aa015c  addiu       $t2, $sp, 0x15C
    ctx->pc = 0x278af0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_278af4:
    // 0x278af4: 0xafa60264  sw          $a2, 0x264($sp)
    ctx->pc = 0x278af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 6));
label_278af8:
    // 0x278af8: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x278af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_278afc:
    // 0x278afc: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x278afcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278b00:
    // 0x278b00: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
label_278b04:
    if (ctx->pc == 0x278B04u) {
        ctx->pc = 0x278B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B00u;
        // 0x278b04: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B08u;
        goto label_278b08;
    }
    ctx->pc = 0x278B00u;
    {
        const bool branch_taken_0x278b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B00u;
        // 0x278b04: 0x27a70124  addiu       $a3, $sp, 0x124 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b00) {
            ctx->pc = 0x278F38u;
            goto label_278f38;
        }
    }
    ctx->pc = 0x278B08u;
label_278b08:
    // 0x278b08: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x278b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_278b0c:
    // 0x278b0c: 0x27a4013c  addiu       $a0, $sp, 0x13C
    ctx->pc = 0x278b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 316));
label_278b10:
    // 0x278b10: 0x27a50148  addiu       $a1, $sp, 0x148
    ctx->pc = 0x278b10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 328));
label_278b14:
    // 0x278b14: 0xafa702e8  sw          $a3, 0x2E8($sp)
    ctx->pc = 0x278b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 7));
label_278b18:
    // 0x278b18: 0x240900ff  addiu       $t1, $zero, 0xFF
    ctx->pc = 0x278b18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_278b1c:
    // 0x278b1c: 0xafa202ec  sw          $v0, 0x2EC($sp)
    ctx->pc = 0x278b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 2));
label_278b20:
    // 0x278b20: 0xafa402f0  sw          $a0, 0x2F0($sp)
    ctx->pc = 0x278b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 4));
label_278b24:
    // 0x278b24: 0xafa502f4  sw          $a1, 0x2F4($sp)
    ctx->pc = 0x278b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 5));
label_278b28:
    // 0x278b28: 0x8c64fff8  lw          $a0, -0x8($v1)
    ctx->pc = 0x278b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
label_278b2c:
    // 0x278b2c: 0x0  nop
    ctx->pc = 0x278b2cu;
    // NOP
label_278b30:
    // 0x278b30: 0x2465fff8  addiu       $a1, $v1, -0x8
    ctx->pc = 0x278b30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
label_278b34:
    // 0x278b34: 0x10000067  b           . + 4 + (0x67 << 2)
label_278b38:
    if (ctx->pc == 0x278B38u) {
        ctx->pc = 0x278B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B34u;
        // 0x278b38: 0xafa50264  sw          $a1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B3Cu;
        goto label_278b3c;
    }
    ctx->pc = 0x278B34u;
    {
        const bool branch_taken_0x278b34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B34u;
        // 0x278b38: 0xafa50264  sw          $a1, 0x264($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b34) {
            ctx->pc = 0x278CD4u;
            goto label_278cd4;
        }
    }
    ctx->pc = 0x278B3Cu;
label_278b3c:
    // 0x278b3c: 0x0  nop
    ctx->pc = 0x278b3cu;
    // NOP
label_278b40:
    // 0x278b40: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x278b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_278b44:
    // 0x278b44: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_278b48:
    if (ctx->pc == 0x278B48u) {
        ctx->pc = 0x278B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B44u;
        // 0x278b48: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B4Cu;
        goto label_278b4c;
    }
    ctx->pc = 0x278B44u;
    {
        const bool branch_taken_0x278b44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B44u;
        // 0x278b48: 0x8fa30120  lw          $v1, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b44) {
            ctx->pc = 0x278BF4u;
            goto label_278bf4;
        }
    }
    ctx->pc = 0x278B4Cu;
label_278b4c:
    // 0x278b4c: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x278b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_278b50:
    // 0x278b50: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x278b50u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278b54:
    // 0x278b54: 0x8c450020  lw          $a1, 0x20($v0)
    ctx->pc = 0x278b54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_278b58:
    // 0x278b58: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x278b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_278b5c:
    // 0x278b5c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x278b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_278b60:
    // 0x278b60: 0xa32021  addu        $a0, $a1, $v1
    ctx->pc = 0x278b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_278b64:
    // 0x278b64: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x278b64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278b68:
    // 0x278b68: 0x1449000a  bne         $v0, $t1, . + 4 + (0xA << 2)
label_278b6c:
    if (ctx->pc == 0x278B6Cu) {
        ctx->pc = 0x278B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B68u;
        // 0x278b6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B70u;
        goto label_278b70;
    }
    ctx->pc = 0x278B68u;
    {
        const bool branch_taken_0x278b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x278B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B68u;
        // 0x278b6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b68) {
            ctx->pc = 0x278B94u;
            goto label_278b94;
        }
    }
    ctx->pc = 0x278B70u;
label_278b70:
    // 0x278b70: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x278b70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_278b74:
    // 0x278b74: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x278b74u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278b78:
    // 0x278b78: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_278b7c:
    // 0x278b7c: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x278b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_278b80:
    // 0x278b80: 0x90830001  lbu         $v1, 0x1($a0)
    ctx->pc = 0x278b80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278b84:
    // 0x278b84: 0x0  nop
    ctx->pc = 0x278b84u;
    // NOP
label_278b88:
    // 0x278b88: 0x0  nop
    ctx->pc = 0x278b88u;
    // NOP
label_278b8c:
    // 0x278b8c: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_278b90:
    if (ctx->pc == 0x278B90u) {
        ctx->pc = 0x278B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B8Cu;
        // 0x278b90: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278B94u;
        goto label_278b94;
    }
    ctx->pc = 0x278B8Cu;
    {
        const bool branch_taken_0x278b8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x278b8c) {
            ctx->pc = 0x278B90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278B8Cu;
            // 0x278b90: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278b78;
        }
    }
    ctx->pc = 0x278B94u;
label_278b94:
    // 0x278b94: 0x24c50008  addiu       $a1, $a2, 0x8
    ctx->pc = 0x278b94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_278b98:
    // 0x278b98: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x278b98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_278b9c:
    // 0x278b9c: 0x1449000b  bne         $v0, $t1, . + 4 + (0xB << 2)
label_278ba0:
    if (ctx->pc == 0x278BA0u) {
        ctx->pc = 0x278BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B9Cu;
        // 0x278ba0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278BA4u;
        goto label_278ba4;
    }
    ctx->pc = 0x278B9Cu;
    {
        const bool branch_taken_0x278b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 9));
        ctx->pc = 0x278BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278B9Cu;
        // 0x278ba0: 0x94860002  lhu         $a2, 0x2($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278b9c) {
            ctx->pc = 0x278BCCu;
            goto label_278bcc;
        }
    }
    ctx->pc = 0x278BA4u;
label_278ba4:
    // 0x278ba4: 0x8d040020  lw          $a0, 0x20($t0)
    ctx->pc = 0x278ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
label_278ba8:
    // 0x278ba8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x278ba8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_278bac:
    // 0x278bac: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x278bacu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_278bb0:
    // 0x278bb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_278bb4:
    // 0x278bb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x278bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_278bb8:
    // 0x278bb8: 0x24450008  addiu       $a1, $v0, 0x8
    ctx->pc = 0x278bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_278bbc:
    // 0x278bbc: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x278bbcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_278bc0:
    // 0x278bc0: 0x0  nop
    ctx->pc = 0x278bc0u;
    // NOP
label_278bc4:
    // 0x278bc4: 0x5067fffa  beql        $v1, $a3, . + 4 + (-0x6 << 2)
label_278bc8:
    if (ctx->pc == 0x278BC8u) {
        ctx->pc = 0x278BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BC4u;
        // 0x278bc8: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278BCCu;
        goto label_278bcc;
    }
    ctx->pc = 0x278BC4u;
    {
        const bool branch_taken_0x278bc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x278bc4) {
            ctx->pc = 0x278BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278BC4u;
            // 0x278bc8: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278BB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278bb0;
        }
    }
    ctx->pc = 0x278BCCu;
label_278bcc:
    // 0x278bcc: 0xa7a60270  sh          $a2, 0x270($sp)
    ctx->pc = 0x278bccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 6));
label_278bd0:
    // 0x278bd0: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x278bd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_278bd4:
    // 0x278bd4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x278bd4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
label_278bd8:
    // 0x278bd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278bdc:
    // 0x278bdc: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x278bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_278be0:
    // 0x278be0: 0xa7a20272  sh          $v0, 0x272($sp)
    ctx->pc = 0x278be0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 626), (uint16_t)GPR_U32(ctx, 2));
label_278be4:
    // 0x278be4: 0x10000043  b           . + 4 + (0x43 << 2)
label_278be8:
    if (ctx->pc == 0x278BE8u) {
        ctx->pc = 0x278BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BE4u;
        // 0x278be8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278BECu;
        goto label_278bec;
    }
    ctx->pc = 0x278BE4u;
    {
        const bool branch_taken_0x278be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BE4u;
        // 0x278be8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278be4) {
            ctx->pc = 0x278CF4u;
            goto label_278cf4;
        }
    }
    ctx->pc = 0x278BECu;
label_278bec:
    // 0x278bec: 0x10000037  b           . + 4 + (0x37 << 2)
label_278bf0:
    if (ctx->pc == 0x278BF0u) {
        ctx->pc = 0x278BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BECu;
        // 0x278bf0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278BF4u;
        goto label_278bf4;
    }
    ctx->pc = 0x278BECu;
    {
        const bool branch_taken_0x278bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278BECu;
        // 0x278bf0: 0xace40000  sw          $a0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278bec) {
            ctx->pc = 0x278CCCu;
            goto label_278ccc;
        }
    }
    ctx->pc = 0x278BF4u;
label_278bf4:
    // 0x278bf4: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x278bf4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278bf8:
    // 0x278bf8: 0x8c640020  lw          $a0, 0x20($v1)
    ctx->pc = 0x278bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_278bfc:
    // 0x278bfc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x278bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_278c00:
    // 0x278c00: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x278c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_278c04:
    // 0x278c04: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x278c04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_278c08:
    // 0x278c08: 0x3066000c  andi        $a2, $v1, 0xC
    ctx->pc = 0x278c08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
label_278c0c:
    // 0x278c0c: 0x8fa302e8  lw          $v1, 0x2E8($sp)
    ctx->pc = 0x278c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 744)));
label_278c10:
    // 0x278c10: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x278c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278c14:
    // 0x278c14: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x278c14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278c18:
    // 0x278c18: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x278c18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278c1c:
    // 0x278c1c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x278c1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278c20:
    // 0x278c20: 0x0  nop
    ctx->pc = 0x278c20u;
    // NOP
label_278c24:
    // 0x278c24: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_278c28:
    if (ctx->pc == 0x278C28u) {
        ctx->pc = 0x278C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C24u;
        // 0x278c28: 0x8fa502ec  lw          $a1, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C2Cu;
        goto label_278c2c;
    }
    ctx->pc = 0x278C24u;
    {
        const bool branch_taken_0x278c24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x278C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C24u;
        // 0x278c28: 0x8fa502ec  lw          $a1, 0x2EC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 748)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c24) {
            ctx->pc = 0x278BECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278bec;
        }
    }
    ctx->pc = 0x278C2Cu;
label_278c2c:
    // 0x278c2c: 0x24830008  addiu       $v1, $a0, 0x8
    ctx->pc = 0x278c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_278c30:
    // 0x278c30: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x278c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278c34:
    // 0x278c34: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x278c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_278c38:
    // 0x278c38: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x278c38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_278c3c:
    // 0x278c3c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278c40:
    // 0x278c40: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x278c40u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278c44:
    // 0x278c44: 0x0  nop
    ctx->pc = 0x278c44u;
    // NOP
label_278c48:
    // 0x278c48: 0x45000020  bc1f        . + 4 + (0x20 << 2)
label_278c4c:
    if (ctx->pc == 0x278C4Cu) {
        ctx->pc = 0x278C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C48u;
        // 0x278c4c: 0x8fa302f0  lw          $v1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C50u;
        goto label_278c50;
    }
    ctx->pc = 0x278C48u;
    {
        const bool branch_taken_0x278c48 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C48u;
        // 0x278c4c: 0x8fa302f0  lw          $v1, 0x2F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c48) {
            ctx->pc = 0x278CCCu;
            goto label_278ccc;
        }
    }
    ctx->pc = 0x278C50u;
label_278c50:
    // 0x278c50: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x278c50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_278c54:
    // 0x278c54: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x278c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278c58:
    // 0x278c58: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278c5c:
    // 0x278c5c: 0x24e30008  addiu       $v1, $a3, 0x8
    ctx->pc = 0x278c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_278c60:
    // 0x278c60: 0x8c65fffc  lw          $a1, -0x4($v1)
    ctx->pc = 0x278c60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
label_278c64:
    // 0x278c64: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x278c64u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278c68:
    // 0x278c68: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x278c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_278c6c:
    // 0x278c6c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_278c70:
    if (ctx->pc == 0x278C70u) {
        ctx->pc = 0x278C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C6Cu;
        // 0x278c70: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278C74u;
        goto label_278c74;
    }
    ctx->pc = 0x278C6Cu;
    {
        const bool branch_taken_0x278c6c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278C6Cu;
        // 0x278c70: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278c6c) {
            ctx->pc = 0x278C90u;
            goto label_278c90;
        }
    }
    ctx->pc = 0x278C74u;
label_278c74:
    // 0x278c74: 0x61042  srl         $v0, $a2, 1
    ctx->pc = 0x278c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_278c78:
    // 0x278c78: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x278c78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_278c7c:
    // 0x278c7c: 0x471004  sllv        $v0, $a3, $v0
    ctx->pc = 0x278c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_278c80:
    // 0x278c80: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x278c80u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_278c84:
    // 0x278c84: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x278c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_278c88:
    // 0x278c88: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x278c88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_278c8c:
    // 0x278c8c: 0x0  nop
    ctx->pc = 0x278c8cu;
    // NOP
label_278c90:
    // 0x278c90: 0x8fa302f4  lw          $v1, 0x2F4($sp)
    ctx->pc = 0x278c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 756)));
label_278c94:
    // 0x278c94: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x278c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278c98:
    // 0x278c98: 0x661021  addu        $v0, $v1, $a2
    ctx->pc = 0x278c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_278c9c:
    // 0x278c9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x278c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ca0:
    // 0x278ca0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x278ca0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278ca4:
    // 0x278ca4: 0x0  nop
    ctx->pc = 0x278ca4u;
    // NOP
label_278ca8:
    // 0x278ca8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
label_278cac:
    if (ctx->pc == 0x278CACu) {
        ctx->pc = 0x278CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CA8u;
        // 0x278cac: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278CB0u;
        goto label_278cb0;
    }
    ctx->pc = 0x278CA8u;
    {
        const bool branch_taken_0x278ca8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CA8u;
        // 0x278cac: 0x8fa20264  lw          $v0, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ca8) {
            ctx->pc = 0x278CCCu;
            goto label_278ccc;
        }
    }
    ctx->pc = 0x278CB0u;
label_278cb0:
    // 0x278cb0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_278cb4:
    // 0x278cb4: 0x61842  srl         $v1, $a2, 1
    ctx->pc = 0x278cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
label_278cb8:
    // 0x278cb8: 0x641804  sllv        $v1, $a0, $v1
    ctx->pc = 0x278cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 3) & 0x1F));
label_278cbc:
    // 0x278cbc: 0x8c44fffc  lw          $a0, -0x4($v0)
    ctx->pc = 0x278cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_278cc0:
    // 0x278cc0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x278cc0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_278cc4:
    // 0x278cc4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x278cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_278cc8:
    // 0x278cc8: 0xac44fffc  sw          $a0, -0x4($v0)
    ctx->pc = 0x278cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 4));
label_278ccc:
    // 0x278ccc: 0x8fa50264  lw          $a1, 0x264($sp)
    ctx->pc = 0x278cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_278cd0:
    // 0x278cd0: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x278cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_278cd4:
    // 0x278cd4: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x278cd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278cd8:
    // 0x278cd8: 0x1049ff99  beq         $v0, $t1, . + 4 + (-0x67 << 2)
label_278cdc:
    if (ctx->pc == 0x278CDCu) {
        ctx->pc = 0x278CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CD8u;
        // 0x278cdc: 0x8fa70264  lw          $a3, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278CE0u;
        goto label_278ce0;
    }
    ctx->pc = 0x278CD8u;
    {
        const bool branch_taken_0x278cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x278CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278CD8u;
        // 0x278cdc: 0x8fa70264  lw          $a3, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278cd8) {
            ctx->pc = 0x278B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278b40;
        }
    }
    ctx->pc = 0x278CE0u;
label_278ce0:
    // 0x278ce0: 0x94830002  lhu         $v1, 0x2($a0)
    ctx->pc = 0x278ce0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_278ce4:
    // 0x278ce4: 0x8cb70004  lw          $s7, 0x4($a1)
    ctx->pc = 0x278ce4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_278ce8:
    // 0x278ce8: 0xa7a30270  sh          $v1, 0x270($sp)
    ctx->pc = 0x278ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 624), (uint16_t)GPR_U32(ctx, 3));
label_278cec:
    // 0x278cec: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x278cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_278cf0:
    // 0x278cf0: 0xa7a20272  sh          $v0, 0x272($sp)
    ctx->pc = 0x278cf0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 626), (uint16_t)GPR_U32(ctx, 2));
label_278cf4:
    // 0x278cf4: 0x97b40270  lhu         $s4, 0x270($sp)
    ctx->pc = 0x278cf4u;
    SET_GPR_ZE32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
label_278cf8:
    // 0x278cf8: 0x97a20272  lhu         $v0, 0x272($sp)
    ctx->pc = 0x278cf8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 626)));
label_278cfc:
    // 0x278cfc: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x278cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_278d00:
    // 0x278d00: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x278d00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_278d04:
    // 0x278d04: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
label_278d08:
    if (ctx->pc == 0x278D08u) {
        ctx->pc = 0x278D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D04u;
        // 0x278d08: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D0Cu;
        goto label_278d0c;
    }
    ctx->pc = 0x278D04u;
    {
        const bool branch_taken_0x278d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D04u;
        // 0x278d08: 0x8fa30264  lw          $v1, 0x264($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d04) {
            ctx->pc = 0x278F2Cu;
            goto label_278f2c;
        }
    }
    ctx->pc = 0x278D0Cu;
label_278d0c:
    // 0x278d0c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x278d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_278d10:
    // 0x278d10: 0x241e000c  addiu       $fp, $zero, 0xC
    ctx->pc = 0x278d10u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_278d14:
    // 0x278d14: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x278d14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_278d18:
    // 0x278d18: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x278d18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_278d1c:
    // 0x278d1c: 0x8ea30024  lw          $v1, 0x24($s5)
    ctx->pc = 0x278d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
label_278d20:
    // 0x278d20: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_278d24:
    if (ctx->pc == 0x278D24u) {
        ctx->pc = 0x278D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D20u;
        // 0x278d24: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D28u;
        goto label_278d28;
    }
    ctx->pc = 0x278D20u;
    {
        const bool branch_taken_0x278d20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D20u;
        // 0x278d24: 0x141040  sll         $v0, $s4, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d20) {
            ctx->pc = 0x278D34u;
            goto label_278d34;
        }
    }
    ctx->pc = 0x278D28u;
label_278d28:
    // 0x278d28: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_278d2c:
    // 0x278d2c: 0x10000002  b           . + 4 + (0x2 << 2)
label_278d30:
    if (ctx->pc == 0x278D30u) {
        ctx->pc = 0x278D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D2Cu;
        // 0x278d30: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D34u;
        goto label_278d34;
    }
    ctx->pc = 0x278D2Cu;
    {
        const bool branch_taken_0x278d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D2Cu;
        // 0x278d30: 0x94530000  lhu         $s3, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d2c) {
            ctx->pc = 0x278D38u;
            goto label_278d38;
        }
    }
    ctx->pc = 0x278D34u;
label_278d34:
    // 0x278d34: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x278d34u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_278d38:
    // 0x278d38: 0x8fa502d8  lw          $a1, 0x2D8($sp)
    ctx->pc = 0x278d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 728)));
label_278d3c:
    // 0x278d3c: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x278d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_278d40:
    // 0x278d40: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x278d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_278d44:
    // 0x278d44: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x278d44u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_278d48:
    // 0x278d48: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x278d48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_278d4c:
    // 0x278d4c: 0x94450002  lhu         $a1, 0x2($v0)
    ctx->pc = 0x278d4cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_278d50:
    // 0x278d50: 0x7e1018  mult        $v0, $v1, $fp
    ctx->pc = 0x278d50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278d54:
    // 0x278d54: 0x4b9021  addu        $s2, $v0, $t3
    ctx->pc = 0x278d54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_278d58:
    // 0x278d58: 0x9e1018  mult        $v0, $a0, $fp
    ctx->pc = 0x278d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278d5c:
    // 0x278d5c: 0x4b8021  addu        $s0, $v0, $t3
    ctx->pc = 0x278d5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_278d60:
    // 0x278d60: 0xbe1018  mult        $v0, $a1, $fp
    ctx->pc = 0x278d60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 30); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_278d64:
    // 0x278d64: 0x12e00011  beqz        $s7, . + 4 + (0x11 << 2)
label_278d68:
    if (ctx->pc == 0x278D68u) {
        ctx->pc = 0x278D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D64u;
        // 0x278d68: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D6Cu;
        goto label_278d6c;
    }
    ctx->pc = 0x278D64u;
    {
        const bool branch_taken_0x278d64 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x278D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D64u;
        // 0x278d68: 0x4b8821  addu        $s1, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278d64) {
            ctx->pc = 0x278DACu;
            goto label_278dac;
        }
    }
    ctx->pc = 0x278D6Cu;
label_278d6c:
    // 0x278d6c: 0x7fa90300  sq          $t1, 0x300($sp)
    ctx->pc = 0x278d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 9));
label_278d70:
    // 0x278d70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x278d70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_278d74:
    // 0x278d74: 0x7faa0310  sq          $t2, 0x310($sp)
    ctx->pc = 0x278d74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 10));
label_278d78:
    // 0x278d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x278d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278d7c:
    // 0x278d7c: 0x7fab0320  sq          $t3, 0x320($sp)
    ctx->pc = 0x278d7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 11));
label_278d80:
    // 0x278d80: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x278d80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_278d84:
    // 0x278d84: 0x7fac0330  sq          $t4, 0x330($sp)
    ctx->pc = 0x278d84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 12));
label_278d88:
    // 0x278d88: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x278d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_278d8c:
    // 0x278d8c: 0xc0a45ea  jal         func_2917A8
label_278d90:
    if (ctx->pc == 0x278D90u) {
        ctx->pc = 0x278D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278D8Cu;
        // 0x278d90: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278D94u;
        goto label_278d94;
    }
    ctx->pc = 0x278D8Cu;
    SET_GPR_U32(ctx, 31, 0x278D94u);
    ctx->pc = 0x278D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x278D8Cu;
    // 0x278d90: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2917A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2917A8u, 0x278D8Cu, 0x278D94u)) {
        return;
    }
    ctx->pc = 0x278D94u;
label_278d94:
    // 0x278d94: 0x7ba90300  lq          $t1, 0x300($sp)
    ctx->pc = 0x278d94u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_278d98:
    // 0x278d98: 0x7baa0310  lq          $t2, 0x310($sp)
    ctx->pc = 0x278d98u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_278d9c:
    // 0x278d9c: 0x7bab0320  lq          $t3, 0x320($sp)
    ctx->pc = 0x278d9cu;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_278da0:
    // 0x278da0: 0x7bac0330  lq          $t4, 0x330($sp)
    ctx->pc = 0x278da0u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_278da4:
    // 0x278da4: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
label_278da8:
    if (ctx->pc == 0x278DA8u) {
        ctx->pc = 0x278DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA4u;
        // 0x278da8: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278DACu;
        goto label_278dac;
    }
    ctx->pc = 0x278DA4u;
    {
        const bool branch_taken_0x278da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278DA4u;
        // 0x278da8: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278da4) {
            ctx->pc = 0x278F08u;
            goto label_278f08;
        }
    }
    ctx->pc = 0x278DACu;
label_278dac:
    // 0x278dac: 0x6a030007  ldl         $v1, 0x7($s0)
    ctx->pc = 0x278dacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_278db0:
    // 0x278db0: 0x6e030000  ldr         $v1, 0x0($s0)
    ctx->pc = 0x278db0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_278db4:
    // 0x278db4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x278db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_278db8:
    // 0x278db8: 0xb3a30293  sdl         $v1, 0x293($sp)
    ctx->pc = 0x278db8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 659); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_278dbc:
    // 0x278dbc: 0xb7a3028c  sdr         $v1, 0x28C($sp)
    ctx->pc = 0x278dbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 652); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_278dc0:
    // 0x278dc0: 0xafa40294  sw          $a0, 0x294($sp)
    ctx->pc = 0x278dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 660), GPR_U32(ctx, 4));
label_278dc4:
    // 0x278dc4: 0xafb30298  sw          $s3, 0x298($sp)
    ctx->pc = 0x278dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 664), GPR_U32(ctx, 19));
label_278dc8:
    // 0x278dc8: 0xafb0029c  sw          $s0, 0x29C($sp)
    ctx->pc = 0x278dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 668), GPR_U32(ctx, 16));
label_278dcc:
    // 0x278dcc: 0xafb102a0  sw          $s1, 0x2A0($sp)
    ctx->pc = 0x278dccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 672), GPR_U32(ctx, 17));
label_278dd0:
    // 0x278dd0: 0xafb202a4  sw          $s2, 0x2A4($sp)
    ctx->pc = 0x278dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 676), GPR_U32(ctx, 18));
label_278dd4:
    // 0x278dd4: 0xc6270000  lwc1        $f7, 0x0($s1)
    ctx->pc = 0x278dd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_278dd8:
    // 0x278dd8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x278dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278ddc:
    // 0x278ddc: 0x460039c1  sub.s       $f7, $f7, $f0
    ctx->pc = 0x278ddcu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[0]);
label_278de0:
    // 0x278de0: 0xe7a702b0  swc1        $f7, 0x2B0($sp)
    ctx->pc = 0x278de0u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 688), bits); }
label_278de4:
    // 0x278de4: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x278de4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278de8:
    // 0x278de8: 0xc6260004  lwc1        $f6, 0x4($s1)
    ctx->pc = 0x278de8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_278dec:
    // 0x278dec: 0x46003181  sub.s       $f6, $f6, $f0
    ctx->pc = 0x278decu;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
label_278df0:
    // 0x278df0: 0xe7a602b4  swc1        $f6, 0x2B4($sp)
    ctx->pc = 0x278df0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 692), bits); }
label_278df4:
    // 0x278df4: 0xc6250008  lwc1        $f5, 0x8($s1)
    ctx->pc = 0x278df4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_278df8:
    // 0x278df8: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x278df8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278dfc:
    // 0x278dfc: 0x46002941  sub.s       $f5, $f5, $f0
    ctx->pc = 0x278dfcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
label_278e00:
    // 0x278e00: 0xe7a502b8  swc1        $f5, 0x2B8($sp)
    ctx->pc = 0x278e00u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 696), bits); }
label_278e04:
    // 0x278e04: 0xc6420000  lwc1        $f2, 0x0($s2)
    ctx->pc = 0x278e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278e08:
    // 0x278e08: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x278e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278e0c:
    // 0x278e0c: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x278e0cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_278e10:
    // 0x278e10: 0xe7a202c0  swc1        $f2, 0x2C0($sp)
    ctx->pc = 0x278e10u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_278e14:
    // 0x278e14: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x278e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278e18:
    // 0x278e18: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x278e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_278e1c:
    // 0x278e1c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x278e1cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
label_278e20:
    // 0x278e20: 0xe7a402c4  swc1        $f4, 0x2C4($sp)
    ctx->pc = 0x278e20u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 708), bits); }
label_278e24:
    // 0x278e24: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x278e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278e28:
    // 0x278e28: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x278e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278e2c:
    // 0x278e2c: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x278e2cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_278e30:
    // 0x278e30: 0xe7a102c8  swc1        $f1, 0x2C8($sp)
    ctx->pc = 0x278e30u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_278e34:
    // 0x278e34: 0x46013002  mul.s       $f0, $f6, $f1
    ctx->pc = 0x278e34u;
    ctx->f[0] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
label_278e38:
    // 0x278e38: 0x46023182  mul.s       $f6, $f6, $f2
    ctx->pc = 0x278e38u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
label_278e3c:
    // 0x278e3c: 0x460438c2  mul.s       $f3, $f7, $f4
    ctx->pc = 0x278e3cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[7], ctx->f[4]);
label_278e40:
    // 0x278e40: 0x46022882  mul.s       $f2, $f5, $f2
    ctx->pc = 0x278e40u;
    ctx->f[2] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
label_278e44:
    // 0x278e44: 0x460139c2  mul.s       $f7, $f7, $f1
    ctx->pc = 0x278e44u;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[1]);
label_278e48:
    // 0x278e48: 0x46042942  mul.s       $f5, $f5, $f4
    ctx->pc = 0x278e48u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
label_278e4c:
    // 0x278e4c: 0x460618c1  sub.s       $f3, $f3, $f6
    ctx->pc = 0x278e4cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[6]);
label_278e50:
    // 0x278e50: 0x46071081  sub.s       $f2, $f2, $f7
    ctx->pc = 0x278e50u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[7]);
label_278e54:
    // 0x278e54: 0x46050001  sub.s       $f0, $f0, $f5
    ctx->pc = 0x278e54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[5]);
label_278e58:
    // 0x278e58: 0xe7a30288  swc1        $f3, 0x288($sp)
    ctx->pc = 0x278e58u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_278e5c:
    // 0x278e5c: 0xe7a20284  swc1        $f2, 0x284($sp)
    ctx->pc = 0x278e5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_278e60:
    // 0x278e60: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x278e60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_278e64:
    // 0x278e64: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x278e64u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_278e68:
    // 0x278e68: 0x46021082  mul.s       $f2, $f2, $f2
    ctx->pc = 0x278e68u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[2]);
label_278e6c:
    // 0x278e6c: 0x460318c2  mul.s       $f3, $f3, $f3
    ctx->pc = 0x278e6cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
label_278e70:
    // 0x278e70: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x278e70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_278e74:
    // 0x278e74: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x278e74u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
label_278e78:
    // 0x278e78: 0x46000004  c1          0x4
    ctx->pc = 0x278e78u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_278e7c:
    // 0x278e7c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x278e7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_278e80:
    // 0x278e80: 0x0  nop
    ctx->pc = 0x278e80u;
    // NOP
label_278e84:
    // 0x278e84: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_278e88:
    if (ctx->pc == 0x278E88u) {
        ctx->pc = 0x278E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E84u;
        // 0x278e88: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E8Cu;
        goto label_278e8c;
    }
    ctx->pc = 0x278E84u;
    {
        const bool branch_taken_0x278e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x278E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E84u;
        // 0x278e88: 0x460001c6  mov.s       $f7, $f0 (Delay Slot)
        ctx->f[7] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e84) {
            ctx->pc = 0x278E98u;
            goto label_278e98;
        }
    }
    ctx->pc = 0x278E8Cu;
label_278e8c:
    // 0x278e8c: 0x4600a1c3  div.s       $f7, $f20, $f0
    ctx->pc = 0x278e8cu;
    ctx->f[7] = FPU_DIV_S(ctx, ctx->f[20], ctx->f[0]);
label_278e90:
    // 0x278e90: 0x10000003  b           . + 4 + (0x3 << 2)
label_278e94:
    if (ctx->pc == 0x278E94u) {
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0xc7a00280  lwc1        $f0, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x278E98u;
        goto label_278e98;
    }
    ctx->pc = 0x278E90u;
    {
        const bool branch_taken_0x278e90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278E90u;
        // 0x278e94: 0xc7a00280  lwc1        $f0, 0x280($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e90) {
            ctx->pc = 0x278EA0u;
            goto label_278ea0;
        }
    }
    ctx->pc = 0x278E98u;
label_278e98:
    // 0x278e98: 0xc7a00280  lwc1        $f0, 0x280($sp)
    ctx->pc = 0x278e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_278e9c:
    // 0x278e9c: 0x0  nop
    ctx->pc = 0x278e9cu;
    // NOP
label_278ea0:
    // 0x278ea0: 0xc7a10284  lwc1        $f1, 0x284($sp)
    ctx->pc = 0x278ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_278ea4:
    // 0x278ea4: 0xc7a20288  lwc1        $f2, 0x288($sp)
    ctx->pc = 0x278ea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 648)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_278ea8:
    // 0x278ea8: 0x46070002  mul.s       $f0, $f0, $f7
    ctx->pc = 0x278ea8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[7]);
label_278eac:
    // 0x278eac: 0x46070842  mul.s       $f1, $f1, $f7
    ctx->pc = 0x278eacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[7]);
label_278eb0:
    // 0x278eb0: 0x46071082  mul.s       $f2, $f2, $f7
    ctx->pc = 0x278eb0u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[7]);
label_278eb4:
    // 0x278eb4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x278eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
label_278eb8:
    // 0x278eb8: 0xe7a10284  swc1        $f1, 0x284($sp)
    ctx->pc = 0x278eb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
label_278ebc:
    // 0x278ebc: 0xe7a20288  swc1        $f2, 0x288($sp)
    ctx->pc = 0x278ebcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
label_278ec0:
    // 0x278ec0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x278ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_278ec4:
    // 0x278ec4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x278ec4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_278ec8:
    // 0x278ec8: 0x180282d  daddu       $a1, $t4, $zero
    ctx->pc = 0x278ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_278ecc:
    // 0x278ecc: 0x8fa702d4  lw          $a3, 0x2D4($sp)
    ctx->pc = 0x278eccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 724)));
label_278ed0:
    // 0x278ed0: 0x27a60280  addiu       $a2, $sp, 0x280
    ctx->pc = 0x278ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_278ed4:
    // 0x278ed4: 0x8fa302d0  lw          $v1, 0x2D0($sp)
    ctx->pc = 0x278ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 720)));
label_278ed8:
    // 0x278ed8: 0x7fa90300  sq          $t1, 0x300($sp)
    ctx->pc = 0x278ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 9));
label_278edc:
    // 0x278edc: 0x7faa0310  sq          $t2, 0x310($sp)
    ctx->pc = 0x278edcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 10));
label_278ee0:
    // 0x278ee0: 0x7fab0320  sq          $t3, 0x320($sp)
    ctx->pc = 0x278ee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 11));
label_278ee4:
    // 0x278ee4: 0x7fac0330  sq          $t4, 0x330($sp)
    ctx->pc = 0x278ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 12));
label_278ee8:
    // 0x278ee8: 0x60f809  jalr        $v1
label_278eec:
    if (ctx->pc == 0x278EECu) {
        ctx->pc = 0x278EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EE8u;
        // 0x278eec: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278EF0u;
        goto label_278ef0;
    }
    ctx->pc = 0x278EE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x278EF0u);
        ctx->pc = 0x278EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278EE8u;
        // 0x278eec: 0x7fad0340  sq          $t5, 0x340($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 832), GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278EE8u, 0x278EF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x278EF0u;
label_278ef0:
    // 0x278ef0: 0x7ba90300  lq          $t1, 0x300($sp)
    ctx->pc = 0x278ef0u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_278ef4:
    // 0x278ef4: 0x7baa0310  lq          $t2, 0x310($sp)
    ctx->pc = 0x278ef4u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_278ef8:
    // 0x278ef8: 0x7bab0320  lq          $t3, 0x320($sp)
    ctx->pc = 0x278ef8u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 29), 800)));
label_278efc:
    // 0x278efc: 0x7bac0330  lq          $t4, 0x330($sp)
    ctx->pc = 0x278efcu;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 816)));
label_278f00:
    // 0x278f00: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_278f04:
    if (ctx->pc == 0x278F04u) {
        ctx->pc = 0x278F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F00u;
        // 0x278f04: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F08u;
        goto label_278f08;
    }
    ctx->pc = 0x278F00u;
    {
        const bool branch_taken_0x278f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F00u;
        // 0x278f04: 0x7bad0340  lq          $t5, 0x340($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 29), 832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f00) {
            ctx->pc = 0x278F4Cu;
            goto label_278f4c;
        }
    }
    ctx->pc = 0x278F08u;
label_278f08:
    // 0x278f08: 0x97a20270  lhu         $v0, 0x270($sp)
    ctx->pc = 0x278f08u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 624)));
label_278f0c:
    // 0x278f0c: 0x26830001  addiu       $v1, $s4, 0x1
    ctx->pc = 0x278f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_278f10:
    // 0x278f10: 0x97a40272  lhu         $a0, 0x272($sp)
    ctx->pc = 0x278f10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 626)));
label_278f14:
    // 0x278f14: 0x3074ffff  andi        $s4, $v1, 0xFFFF
    ctx->pc = 0x278f14u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_278f18:
    // 0x278f18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x278f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_278f1c:
    // 0x278f1c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x278f1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_278f20:
    // 0x278f20: 0x5440ff7f  bnel        $v0, $zero, . + 4 + (-0x81 << 2)
label_278f24:
    if (ctx->pc == 0x278F24u) {
        ctx->pc = 0x278F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F20u;
        // 0x278f24: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F28u;
        goto label_278f28;
    }
    ctx->pc = 0x278F20u;
    {
        const bool branch_taken_0x278f20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f20) {
            ctx->pc = 0x278F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F20u;
            // 0x278f24: 0x8ea30024  lw          $v1, 0x24($s5) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278D20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278d20;
        }
    }
    ctx->pc = 0x278F28u;
label_278f28:
    // 0x278f28: 0x8fa30264  lw          $v1, 0x264($sp)
    ctx->pc = 0x278f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 612)));
label_278f2c:
    // 0x278f2c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x278f2cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278f30:
    // 0x278f30: 0x5440feff  bnel        $v0, $zero, . + 4 + (-0x101 << 2)
label_278f34:
    if (ctx->pc == 0x278F34u) {
        ctx->pc = 0x278F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F30u;
        // 0x278f34: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F38u;
        goto label_278f38;
    }
    ctx->pc = 0x278F30u;
    {
        const bool branch_taken_0x278f30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f30) {
            ctx->pc = 0x278F34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F30u;
            // 0x278f34: 0x8c64fff8  lw          $a0, -0x8($v1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278b30;
        }
    }
    ctx->pc = 0x278F38u;
label_278f38:
    // 0x278f38: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x278f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_278f3c:
    // 0x278f3c: 0x27a40018  addiu       $a0, $sp, 0x18
    ctx->pc = 0x278f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_278f40:
    // 0x278f40: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x278f40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_278f44:
    // 0x278f44: 0x5440fe4e  bnel        $v0, $zero, . + 4 + (-0x1B2 << 2)
label_278f48:
    if (ctx->pc == 0x278F48u) {
        ctx->pc = 0x278F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F44u;
        // 0x278f48: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F4Cu;
        goto label_278f4c;
    }
    ctx->pc = 0x278F44u;
    {
        const bool branch_taken_0x278f44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278f44) {
            ctx->pc = 0x278F48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x278F44u;
            // 0x278f48: 0x8c62fffc  lw          $v0, -0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x278880u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278880;
        }
    }
    ctx->pc = 0x278F4Cu;
label_278f4c:
    // 0x278f4c: 0x7bb003e0  lq          $s0, 0x3E0($sp)
    ctx->pc = 0x278f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 992)));
label_278f50:
    // 0x278f50: 0x7bb103d0  lq          $s1, 0x3D0($sp)
    ctx->pc = 0x278f50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 976)));
label_278f54:
    // 0x278f54: 0x7bb203c0  lq          $s2, 0x3C0($sp)
    ctx->pc = 0x278f54u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 960)));
label_278f58:
    // 0x278f58: 0x7bb303b0  lq          $s3, 0x3B0($sp)
    ctx->pc = 0x278f58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 944)));
label_278f5c:
    // 0x278f5c: 0x7bb403a0  lq          $s4, 0x3A0($sp)
    ctx->pc = 0x278f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 928)));
label_278f60:
    // 0x278f60: 0x7bb50390  lq          $s5, 0x390($sp)
    ctx->pc = 0x278f60u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 912)));
label_278f64:
    // 0x278f64: 0x7bb60380  lq          $s6, 0x380($sp)
    ctx->pc = 0x278f64u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 896)));
label_278f68:
    // 0x278f68: 0x7bb70370  lq          $s7, 0x370($sp)
    ctx->pc = 0x278f68u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 880)));
label_278f6c:
    // 0x278f6c: 0x7bbe0360  lq          $fp, 0x360($sp)
    ctx->pc = 0x278f6cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 864)));
label_278f70:
    // 0x278f70: 0xdfbf0350  ld          $ra, 0x350($sp)
    ctx->pc = 0x278f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 848)));
label_278f74:
    // 0x278f74: 0xc7b503f8  lwc1        $f21, 0x3F8($sp)
    ctx->pc = 0x278f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1016)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_278f78:
    // 0x278f78: 0xc7b403f0  lwc1        $f20, 0x3F0($sp)
    ctx->pc = 0x278f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1008)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_278f7c:
    // 0x278f7c: 0x3e00008  jr          $ra
label_278f80:
    if (ctx->pc == 0x278F80u) {
        ctx->pc = 0x278F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F7Cu;
        // 0x278f80: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x278F84u;
        goto label_278f84;
    }
    ctx->pc = 0x278F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x278F7Cu;
        // 0x278f80: 0x27bd0400  addiu       $sp, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278F7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278F84u;
label_278f84:
    // 0x278f84: 0x0  nop
    ctx->pc = 0x278f84u;
    // NOP
    ctx->pc = 0x278f88u;
}
