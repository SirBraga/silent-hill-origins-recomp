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

// Function: sub_002B07F0
// Address: 0x2b07f0 - 0x2b15a0
void sub_002B07F0_0x2b07f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B07F0_0x2b07f0");
#endif

    switch (ctx->pc) {
        case 0x2b07f0u: goto label_2b07f0;
        case 0x2b07f4u: goto label_2b07f4;
        case 0x2b07f8u: goto label_2b07f8;
        case 0x2b07fcu: goto label_2b07fc;
        case 0x2b0800u: goto label_2b0800;
        case 0x2b0804u: goto label_2b0804;
        case 0x2b0808u: goto label_2b0808;
        case 0x2b080cu: goto label_2b080c;
        case 0x2b0810u: goto label_2b0810;
        case 0x2b0814u: goto label_2b0814;
        case 0x2b0818u: goto label_2b0818;
        case 0x2b081cu: goto label_2b081c;
        case 0x2b0820u: goto label_2b0820;
        case 0x2b0824u: goto label_2b0824;
        case 0x2b0828u: goto label_2b0828;
        case 0x2b082cu: goto label_2b082c;
        case 0x2b0830u: goto label_2b0830;
        case 0x2b0834u: goto label_2b0834;
        case 0x2b0838u: goto label_2b0838;
        case 0x2b083cu: goto label_2b083c;
        case 0x2b0840u: goto label_2b0840;
        case 0x2b0844u: goto label_2b0844;
        case 0x2b0848u: goto label_2b0848;
        case 0x2b084cu: goto label_2b084c;
        case 0x2b0850u: goto label_2b0850;
        case 0x2b0854u: goto label_2b0854;
        case 0x2b0858u: goto label_2b0858;
        case 0x2b085cu: goto label_2b085c;
        case 0x2b0860u: goto label_2b0860;
        case 0x2b0864u: goto label_2b0864;
        case 0x2b0868u: goto label_2b0868;
        case 0x2b086cu: goto label_2b086c;
        case 0x2b0870u: goto label_2b0870;
        case 0x2b0874u: goto label_2b0874;
        case 0x2b0878u: goto label_2b0878;
        case 0x2b087cu: goto label_2b087c;
        case 0x2b0880u: goto label_2b0880;
        case 0x2b0884u: goto label_2b0884;
        case 0x2b0888u: goto label_2b0888;
        case 0x2b088cu: goto label_2b088c;
        case 0x2b0890u: goto label_2b0890;
        case 0x2b0894u: goto label_2b0894;
        case 0x2b0898u: goto label_2b0898;
        case 0x2b089cu: goto label_2b089c;
        case 0x2b08a0u: goto label_2b08a0;
        case 0x2b08a4u: goto label_2b08a4;
        case 0x2b08a8u: goto label_2b08a8;
        case 0x2b08acu: goto label_2b08ac;
        case 0x2b08b0u: goto label_2b08b0;
        case 0x2b08b4u: goto label_2b08b4;
        case 0x2b08b8u: goto label_2b08b8;
        case 0x2b08bcu: goto label_2b08bc;
        case 0x2b08c0u: goto label_2b08c0;
        case 0x2b08c4u: goto label_2b08c4;
        case 0x2b08c8u: goto label_2b08c8;
        case 0x2b08ccu: goto label_2b08cc;
        case 0x2b08d0u: goto label_2b08d0;
        case 0x2b08d4u: goto label_2b08d4;
        case 0x2b08d8u: goto label_2b08d8;
        case 0x2b08dcu: goto label_2b08dc;
        case 0x2b08e0u: goto label_2b08e0;
        case 0x2b08e4u: goto label_2b08e4;
        case 0x2b08e8u: goto label_2b08e8;
        case 0x2b08ecu: goto label_2b08ec;
        case 0x2b08f0u: goto label_2b08f0;
        case 0x2b08f4u: goto label_2b08f4;
        case 0x2b08f8u: goto label_2b08f8;
        case 0x2b08fcu: goto label_2b08fc;
        case 0x2b0900u: goto label_2b0900;
        case 0x2b0904u: goto label_2b0904;
        case 0x2b0908u: goto label_2b0908;
        case 0x2b090cu: goto label_2b090c;
        case 0x2b0910u: goto label_2b0910;
        case 0x2b0914u: goto label_2b0914;
        case 0x2b0918u: goto label_2b0918;
        case 0x2b091cu: goto label_2b091c;
        case 0x2b0920u: goto label_2b0920;
        case 0x2b0924u: goto label_2b0924;
        case 0x2b0928u: goto label_2b0928;
        case 0x2b092cu: goto label_2b092c;
        case 0x2b0930u: goto label_2b0930;
        case 0x2b0934u: goto label_2b0934;
        case 0x2b0938u: goto label_2b0938;
        case 0x2b093cu: goto label_2b093c;
        case 0x2b0940u: goto label_2b0940;
        case 0x2b0944u: goto label_2b0944;
        case 0x2b0948u: goto label_2b0948;
        case 0x2b094cu: goto label_2b094c;
        case 0x2b0950u: goto label_2b0950;
        case 0x2b0954u: goto label_2b0954;
        case 0x2b0958u: goto label_2b0958;
        case 0x2b095cu: goto label_2b095c;
        case 0x2b0960u: goto label_2b0960;
        case 0x2b0964u: goto label_2b0964;
        case 0x2b0968u: goto label_2b0968;
        case 0x2b096cu: goto label_2b096c;
        case 0x2b0970u: goto label_2b0970;
        case 0x2b0974u: goto label_2b0974;
        case 0x2b0978u: goto label_2b0978;
        case 0x2b097cu: goto label_2b097c;
        case 0x2b0980u: goto label_2b0980;
        case 0x2b0984u: goto label_2b0984;
        case 0x2b0988u: goto label_2b0988;
        case 0x2b098cu: goto label_2b098c;
        case 0x2b0990u: goto label_2b0990;
        case 0x2b0994u: goto label_2b0994;
        case 0x2b0998u: goto label_2b0998;
        case 0x2b099cu: goto label_2b099c;
        case 0x2b09a0u: goto label_2b09a0;
        case 0x2b09a4u: goto label_2b09a4;
        case 0x2b09a8u: goto label_2b09a8;
        case 0x2b09acu: goto label_2b09ac;
        case 0x2b09b0u: goto label_2b09b0;
        case 0x2b09b4u: goto label_2b09b4;
        case 0x2b09b8u: goto label_2b09b8;
        case 0x2b09bcu: goto label_2b09bc;
        case 0x2b09c0u: goto label_2b09c0;
        case 0x2b09c4u: goto label_2b09c4;
        case 0x2b09c8u: goto label_2b09c8;
        case 0x2b09ccu: goto label_2b09cc;
        case 0x2b09d0u: goto label_2b09d0;
        case 0x2b09d4u: goto label_2b09d4;
        case 0x2b09d8u: goto label_2b09d8;
        case 0x2b09dcu: goto label_2b09dc;
        case 0x2b09e0u: goto label_2b09e0;
        case 0x2b09e4u: goto label_2b09e4;
        case 0x2b09e8u: goto label_2b09e8;
        case 0x2b09ecu: goto label_2b09ec;
        case 0x2b09f0u: goto label_2b09f0;
        case 0x2b09f4u: goto label_2b09f4;
        case 0x2b09f8u: goto label_2b09f8;
        case 0x2b09fcu: goto label_2b09fc;
        case 0x2b0a00u: goto label_2b0a00;
        case 0x2b0a04u: goto label_2b0a04;
        case 0x2b0a08u: goto label_2b0a08;
        case 0x2b0a0cu: goto label_2b0a0c;
        case 0x2b0a10u: goto label_2b0a10;
        case 0x2b0a14u: goto label_2b0a14;
        case 0x2b0a18u: goto label_2b0a18;
        case 0x2b0a1cu: goto label_2b0a1c;
        case 0x2b0a20u: goto label_2b0a20;
        case 0x2b0a24u: goto label_2b0a24;
        case 0x2b0a28u: goto label_2b0a28;
        case 0x2b0a2cu: goto label_2b0a2c;
        case 0x2b0a30u: goto label_2b0a30;
        case 0x2b0a34u: goto label_2b0a34;
        case 0x2b0a38u: goto label_2b0a38;
        case 0x2b0a3cu: goto label_2b0a3c;
        case 0x2b0a40u: goto label_2b0a40;
        case 0x2b0a44u: goto label_2b0a44;
        case 0x2b0a48u: goto label_2b0a48;
        case 0x2b0a4cu: goto label_2b0a4c;
        case 0x2b0a50u: goto label_2b0a50;
        case 0x2b0a54u: goto label_2b0a54;
        case 0x2b0a58u: goto label_2b0a58;
        case 0x2b0a5cu: goto label_2b0a5c;
        case 0x2b0a60u: goto label_2b0a60;
        case 0x2b0a64u: goto label_2b0a64;
        case 0x2b0a68u: goto label_2b0a68;
        case 0x2b0a6cu: goto label_2b0a6c;
        case 0x2b0a70u: goto label_2b0a70;
        case 0x2b0a74u: goto label_2b0a74;
        case 0x2b0a78u: goto label_2b0a78;
        case 0x2b0a7cu: goto label_2b0a7c;
        case 0x2b0a80u: goto label_2b0a80;
        case 0x2b0a84u: goto label_2b0a84;
        case 0x2b0a88u: goto label_2b0a88;
        case 0x2b0a8cu: goto label_2b0a8c;
        case 0x2b0a90u: goto label_2b0a90;
        case 0x2b0a94u: goto label_2b0a94;
        case 0x2b0a98u: goto label_2b0a98;
        case 0x2b0a9cu: goto label_2b0a9c;
        case 0x2b0aa0u: goto label_2b0aa0;
        case 0x2b0aa4u: goto label_2b0aa4;
        case 0x2b0aa8u: goto label_2b0aa8;
        case 0x2b0aacu: goto label_2b0aac;
        case 0x2b0ab0u: goto label_2b0ab0;
        case 0x2b0ab4u: goto label_2b0ab4;
        case 0x2b0ab8u: goto label_2b0ab8;
        case 0x2b0abcu: goto label_2b0abc;
        case 0x2b0ac0u: goto label_2b0ac0;
        case 0x2b0ac4u: goto label_2b0ac4;
        case 0x2b0ac8u: goto label_2b0ac8;
        case 0x2b0accu: goto label_2b0acc;
        case 0x2b0ad0u: goto label_2b0ad0;
        case 0x2b0ad4u: goto label_2b0ad4;
        case 0x2b0ad8u: goto label_2b0ad8;
        case 0x2b0adcu: goto label_2b0adc;
        case 0x2b0ae0u: goto label_2b0ae0;
        case 0x2b0ae4u: goto label_2b0ae4;
        case 0x2b0ae8u: goto label_2b0ae8;
        case 0x2b0aecu: goto label_2b0aec;
        case 0x2b0af0u: goto label_2b0af0;
        case 0x2b0af4u: goto label_2b0af4;
        case 0x2b0af8u: goto label_2b0af8;
        case 0x2b0afcu: goto label_2b0afc;
        case 0x2b0b00u: goto label_2b0b00;
        case 0x2b0b04u: goto label_2b0b04;
        case 0x2b0b08u: goto label_2b0b08;
        case 0x2b0b0cu: goto label_2b0b0c;
        case 0x2b0b10u: goto label_2b0b10;
        case 0x2b0b14u: goto label_2b0b14;
        case 0x2b0b18u: goto label_2b0b18;
        case 0x2b0b1cu: goto label_2b0b1c;
        case 0x2b0b20u: goto label_2b0b20;
        case 0x2b0b24u: goto label_2b0b24;
        case 0x2b0b28u: goto label_2b0b28;
        case 0x2b0b2cu: goto label_2b0b2c;
        case 0x2b0b30u: goto label_2b0b30;
        case 0x2b0b34u: goto label_2b0b34;
        case 0x2b0b38u: goto label_2b0b38;
        case 0x2b0b3cu: goto label_2b0b3c;
        case 0x2b0b40u: goto label_2b0b40;
        case 0x2b0b44u: goto label_2b0b44;
        case 0x2b0b48u: goto label_2b0b48;
        case 0x2b0b4cu: goto label_2b0b4c;
        case 0x2b0b50u: goto label_2b0b50;
        case 0x2b0b54u: goto label_2b0b54;
        case 0x2b0b58u: goto label_2b0b58;
        case 0x2b0b5cu: goto label_2b0b5c;
        case 0x2b0b60u: goto label_2b0b60;
        case 0x2b0b64u: goto label_2b0b64;
        case 0x2b0b68u: goto label_2b0b68;
        case 0x2b0b6cu: goto label_2b0b6c;
        case 0x2b0b70u: goto label_2b0b70;
        case 0x2b0b74u: goto label_2b0b74;
        case 0x2b0b78u: goto label_2b0b78;
        case 0x2b0b7cu: goto label_2b0b7c;
        case 0x2b0b80u: goto label_2b0b80;
        case 0x2b0b84u: goto label_2b0b84;
        case 0x2b0b88u: goto label_2b0b88;
        case 0x2b0b8cu: goto label_2b0b8c;
        case 0x2b0b90u: goto label_2b0b90;
        case 0x2b0b94u: goto label_2b0b94;
        case 0x2b0b98u: goto label_2b0b98;
        case 0x2b0b9cu: goto label_2b0b9c;
        case 0x2b0ba0u: goto label_2b0ba0;
        case 0x2b0ba4u: goto label_2b0ba4;
        case 0x2b0ba8u: goto label_2b0ba8;
        case 0x2b0bacu: goto label_2b0bac;
        case 0x2b0bb0u: goto label_2b0bb0;
        case 0x2b0bb4u: goto label_2b0bb4;
        case 0x2b0bb8u: goto label_2b0bb8;
        case 0x2b0bbcu: goto label_2b0bbc;
        case 0x2b0bc0u: goto label_2b0bc0;
        case 0x2b0bc4u: goto label_2b0bc4;
        case 0x2b0bc8u: goto label_2b0bc8;
        case 0x2b0bccu: goto label_2b0bcc;
        case 0x2b0bd0u: goto label_2b0bd0;
        case 0x2b0bd4u: goto label_2b0bd4;
        case 0x2b0bd8u: goto label_2b0bd8;
        case 0x2b0bdcu: goto label_2b0bdc;
        case 0x2b0be0u: goto label_2b0be0;
        case 0x2b0be4u: goto label_2b0be4;
        case 0x2b0be8u: goto label_2b0be8;
        case 0x2b0becu: goto label_2b0bec;
        case 0x2b0bf0u: goto label_2b0bf0;
        case 0x2b0bf4u: goto label_2b0bf4;
        case 0x2b0bf8u: goto label_2b0bf8;
        case 0x2b0bfcu: goto label_2b0bfc;
        case 0x2b0c00u: goto label_2b0c00;
        case 0x2b0c04u: goto label_2b0c04;
        case 0x2b0c08u: goto label_2b0c08;
        case 0x2b0c0cu: goto label_2b0c0c;
        case 0x2b0c10u: goto label_2b0c10;
        case 0x2b0c14u: goto label_2b0c14;
        case 0x2b0c18u: goto label_2b0c18;
        case 0x2b0c1cu: goto label_2b0c1c;
        case 0x2b0c20u: goto label_2b0c20;
        case 0x2b0c24u: goto label_2b0c24;
        case 0x2b0c28u: goto label_2b0c28;
        case 0x2b0c2cu: goto label_2b0c2c;
        case 0x2b0c30u: goto label_2b0c30;
        case 0x2b0c34u: goto label_2b0c34;
        case 0x2b0c38u: goto label_2b0c38;
        case 0x2b0c3cu: goto label_2b0c3c;
        case 0x2b0c40u: goto label_2b0c40;
        case 0x2b0c44u: goto label_2b0c44;
        case 0x2b0c48u: goto label_2b0c48;
        case 0x2b0c4cu: goto label_2b0c4c;
        case 0x2b0c50u: goto label_2b0c50;
        case 0x2b0c54u: goto label_2b0c54;
        case 0x2b0c58u: goto label_2b0c58;
        case 0x2b0c5cu: goto label_2b0c5c;
        case 0x2b0c60u: goto label_2b0c60;
        case 0x2b0c64u: goto label_2b0c64;
        case 0x2b0c68u: goto label_2b0c68;
        case 0x2b0c6cu: goto label_2b0c6c;
        case 0x2b0c70u: goto label_2b0c70;
        case 0x2b0c74u: goto label_2b0c74;
        case 0x2b0c78u: goto label_2b0c78;
        case 0x2b0c7cu: goto label_2b0c7c;
        case 0x2b0c80u: goto label_2b0c80;
        case 0x2b0c84u: goto label_2b0c84;
        case 0x2b0c88u: goto label_2b0c88;
        case 0x2b0c8cu: goto label_2b0c8c;
        case 0x2b0c90u: goto label_2b0c90;
        case 0x2b0c94u: goto label_2b0c94;
        case 0x2b0c98u: goto label_2b0c98;
        case 0x2b0c9cu: goto label_2b0c9c;
        case 0x2b0ca0u: goto label_2b0ca0;
        case 0x2b0ca4u: goto label_2b0ca4;
        case 0x2b0ca8u: goto label_2b0ca8;
        case 0x2b0cacu: goto label_2b0cac;
        case 0x2b0cb0u: goto label_2b0cb0;
        case 0x2b0cb4u: goto label_2b0cb4;
        case 0x2b0cb8u: goto label_2b0cb8;
        case 0x2b0cbcu: goto label_2b0cbc;
        case 0x2b0cc0u: goto label_2b0cc0;
        case 0x2b0cc4u: goto label_2b0cc4;
        case 0x2b0cc8u: goto label_2b0cc8;
        case 0x2b0cccu: goto label_2b0ccc;
        case 0x2b0cd0u: goto label_2b0cd0;
        case 0x2b0cd4u: goto label_2b0cd4;
        case 0x2b0cd8u: goto label_2b0cd8;
        case 0x2b0cdcu: goto label_2b0cdc;
        case 0x2b0ce0u: goto label_2b0ce0;
        case 0x2b0ce4u: goto label_2b0ce4;
        case 0x2b0ce8u: goto label_2b0ce8;
        case 0x2b0cecu: goto label_2b0cec;
        case 0x2b0cf0u: goto label_2b0cf0;
        case 0x2b0cf4u: goto label_2b0cf4;
        case 0x2b0cf8u: goto label_2b0cf8;
        case 0x2b0cfcu: goto label_2b0cfc;
        case 0x2b0d00u: goto label_2b0d00;
        case 0x2b0d04u: goto label_2b0d04;
        case 0x2b0d08u: goto label_2b0d08;
        case 0x2b0d0cu: goto label_2b0d0c;
        case 0x2b0d10u: goto label_2b0d10;
        case 0x2b0d14u: goto label_2b0d14;
        case 0x2b0d18u: goto label_2b0d18;
        case 0x2b0d1cu: goto label_2b0d1c;
        case 0x2b0d20u: goto label_2b0d20;
        case 0x2b0d24u: goto label_2b0d24;
        case 0x2b0d28u: goto label_2b0d28;
        case 0x2b0d2cu: goto label_2b0d2c;
        case 0x2b0d30u: goto label_2b0d30;
        case 0x2b0d34u: goto label_2b0d34;
        case 0x2b0d38u: goto label_2b0d38;
        case 0x2b0d3cu: goto label_2b0d3c;
        case 0x2b0d40u: goto label_2b0d40;
        case 0x2b0d44u: goto label_2b0d44;
        case 0x2b0d48u: goto label_2b0d48;
        case 0x2b0d4cu: goto label_2b0d4c;
        case 0x2b0d50u: goto label_2b0d50;
        case 0x2b0d54u: goto label_2b0d54;
        case 0x2b0d58u: goto label_2b0d58;
        case 0x2b0d5cu: goto label_2b0d5c;
        case 0x2b0d60u: goto label_2b0d60;
        case 0x2b0d64u: goto label_2b0d64;
        case 0x2b0d68u: goto label_2b0d68;
        case 0x2b0d6cu: goto label_2b0d6c;
        case 0x2b0d70u: goto label_2b0d70;
        case 0x2b0d74u: goto label_2b0d74;
        case 0x2b0d78u: goto label_2b0d78;
        case 0x2b0d7cu: goto label_2b0d7c;
        case 0x2b0d80u: goto label_2b0d80;
        case 0x2b0d84u: goto label_2b0d84;
        case 0x2b0d88u: goto label_2b0d88;
        case 0x2b0d8cu: goto label_2b0d8c;
        case 0x2b0d90u: goto label_2b0d90;
        case 0x2b0d94u: goto label_2b0d94;
        case 0x2b0d98u: goto label_2b0d98;
        case 0x2b0d9cu: goto label_2b0d9c;
        case 0x2b0da0u: goto label_2b0da0;
        case 0x2b0da4u: goto label_2b0da4;
        case 0x2b0da8u: goto label_2b0da8;
        case 0x2b0dacu: goto label_2b0dac;
        case 0x2b0db0u: goto label_2b0db0;
        case 0x2b0db4u: goto label_2b0db4;
        case 0x2b0db8u: goto label_2b0db8;
        case 0x2b0dbcu: goto label_2b0dbc;
        case 0x2b0dc0u: goto label_2b0dc0;
        case 0x2b0dc4u: goto label_2b0dc4;
        case 0x2b0dc8u: goto label_2b0dc8;
        case 0x2b0dccu: goto label_2b0dcc;
        case 0x2b0dd0u: goto label_2b0dd0;
        case 0x2b0dd4u: goto label_2b0dd4;
        case 0x2b0dd8u: goto label_2b0dd8;
        case 0x2b0ddcu: goto label_2b0ddc;
        case 0x2b0de0u: goto label_2b0de0;
        case 0x2b0de4u: goto label_2b0de4;
        case 0x2b0de8u: goto label_2b0de8;
        case 0x2b0decu: goto label_2b0dec;
        case 0x2b0df0u: goto label_2b0df0;
        case 0x2b0df4u: goto label_2b0df4;
        case 0x2b0df8u: goto label_2b0df8;
        case 0x2b0dfcu: goto label_2b0dfc;
        case 0x2b0e00u: goto label_2b0e00;
        case 0x2b0e04u: goto label_2b0e04;
        case 0x2b0e08u: goto label_2b0e08;
        case 0x2b0e0cu: goto label_2b0e0c;
        case 0x2b0e10u: goto label_2b0e10;
        case 0x2b0e14u: goto label_2b0e14;
        case 0x2b0e18u: goto label_2b0e18;
        case 0x2b0e1cu: goto label_2b0e1c;
        case 0x2b0e20u: goto label_2b0e20;
        case 0x2b0e24u: goto label_2b0e24;
        case 0x2b0e28u: goto label_2b0e28;
        case 0x2b0e2cu: goto label_2b0e2c;
        case 0x2b0e30u: goto label_2b0e30;
        case 0x2b0e34u: goto label_2b0e34;
        case 0x2b0e38u: goto label_2b0e38;
        case 0x2b0e3cu: goto label_2b0e3c;
        case 0x2b0e40u: goto label_2b0e40;
        case 0x2b0e44u: goto label_2b0e44;
        case 0x2b0e48u: goto label_2b0e48;
        case 0x2b0e4cu: goto label_2b0e4c;
        case 0x2b0e50u: goto label_2b0e50;
        case 0x2b0e54u: goto label_2b0e54;
        case 0x2b0e58u: goto label_2b0e58;
        case 0x2b0e5cu: goto label_2b0e5c;
        case 0x2b0e60u: goto label_2b0e60;
        case 0x2b0e64u: goto label_2b0e64;
        case 0x2b0e68u: goto label_2b0e68;
        case 0x2b0e6cu: goto label_2b0e6c;
        case 0x2b0e70u: goto label_2b0e70;
        case 0x2b0e74u: goto label_2b0e74;
        case 0x2b0e78u: goto label_2b0e78;
        case 0x2b0e7cu: goto label_2b0e7c;
        case 0x2b0e80u: goto label_2b0e80;
        case 0x2b0e84u: goto label_2b0e84;
        case 0x2b0e88u: goto label_2b0e88;
        case 0x2b0e8cu: goto label_2b0e8c;
        case 0x2b0e90u: goto label_2b0e90;
        case 0x2b0e94u: goto label_2b0e94;
        case 0x2b0e98u: goto label_2b0e98;
        case 0x2b0e9cu: goto label_2b0e9c;
        case 0x2b0ea0u: goto label_2b0ea0;
        case 0x2b0ea4u: goto label_2b0ea4;
        case 0x2b0ea8u: goto label_2b0ea8;
        case 0x2b0eacu: goto label_2b0eac;
        case 0x2b0eb0u: goto label_2b0eb0;
        case 0x2b0eb4u: goto label_2b0eb4;
        case 0x2b0eb8u: goto label_2b0eb8;
        case 0x2b0ebcu: goto label_2b0ebc;
        case 0x2b0ec0u: goto label_2b0ec0;
        case 0x2b0ec4u: goto label_2b0ec4;
        case 0x2b0ec8u: goto label_2b0ec8;
        case 0x2b0eccu: goto label_2b0ecc;
        case 0x2b0ed0u: goto label_2b0ed0;
        case 0x2b0ed4u: goto label_2b0ed4;
        case 0x2b0ed8u: goto label_2b0ed8;
        case 0x2b0edcu: goto label_2b0edc;
        case 0x2b0ee0u: goto label_2b0ee0;
        case 0x2b0ee4u: goto label_2b0ee4;
        case 0x2b0ee8u: goto label_2b0ee8;
        case 0x2b0eecu: goto label_2b0eec;
        case 0x2b0ef0u: goto label_2b0ef0;
        case 0x2b0ef4u: goto label_2b0ef4;
        case 0x2b0ef8u: goto label_2b0ef8;
        case 0x2b0efcu: goto label_2b0efc;
        case 0x2b0f00u: goto label_2b0f00;
        case 0x2b0f04u: goto label_2b0f04;
        case 0x2b0f08u: goto label_2b0f08;
        case 0x2b0f0cu: goto label_2b0f0c;
        case 0x2b0f10u: goto label_2b0f10;
        case 0x2b0f14u: goto label_2b0f14;
        case 0x2b0f18u: goto label_2b0f18;
        case 0x2b0f1cu: goto label_2b0f1c;
        case 0x2b0f20u: goto label_2b0f20;
        case 0x2b0f24u: goto label_2b0f24;
        case 0x2b0f28u: goto label_2b0f28;
        case 0x2b0f2cu: goto label_2b0f2c;
        case 0x2b0f30u: goto label_2b0f30;
        case 0x2b0f34u: goto label_2b0f34;
        case 0x2b0f38u: goto label_2b0f38;
        case 0x2b0f3cu: goto label_2b0f3c;
        case 0x2b0f40u: goto label_2b0f40;
        case 0x2b0f44u: goto label_2b0f44;
        case 0x2b0f48u: goto label_2b0f48;
        case 0x2b0f4cu: goto label_2b0f4c;
        case 0x2b0f50u: goto label_2b0f50;
        case 0x2b0f54u: goto label_2b0f54;
        case 0x2b0f58u: goto label_2b0f58;
        case 0x2b0f5cu: goto label_2b0f5c;
        case 0x2b0f60u: goto label_2b0f60;
        case 0x2b0f64u: goto label_2b0f64;
        case 0x2b0f68u: goto label_2b0f68;
        case 0x2b0f6cu: goto label_2b0f6c;
        case 0x2b0f70u: goto label_2b0f70;
        case 0x2b0f74u: goto label_2b0f74;
        case 0x2b0f78u: goto label_2b0f78;
        case 0x2b0f7cu: goto label_2b0f7c;
        case 0x2b0f80u: goto label_2b0f80;
        case 0x2b0f84u: goto label_2b0f84;
        case 0x2b0f88u: goto label_2b0f88;
        case 0x2b0f8cu: goto label_2b0f8c;
        case 0x2b0f90u: goto label_2b0f90;
        case 0x2b0f94u: goto label_2b0f94;
        case 0x2b0f98u: goto label_2b0f98;
        case 0x2b0f9cu: goto label_2b0f9c;
        case 0x2b0fa0u: goto label_2b0fa0;
        case 0x2b0fa4u: goto label_2b0fa4;
        case 0x2b0fa8u: goto label_2b0fa8;
        case 0x2b0facu: goto label_2b0fac;
        case 0x2b0fb0u: goto label_2b0fb0;
        case 0x2b0fb4u: goto label_2b0fb4;
        case 0x2b0fb8u: goto label_2b0fb8;
        case 0x2b0fbcu: goto label_2b0fbc;
        case 0x2b0fc0u: goto label_2b0fc0;
        case 0x2b0fc4u: goto label_2b0fc4;
        case 0x2b0fc8u: goto label_2b0fc8;
        case 0x2b0fccu: goto label_2b0fcc;
        case 0x2b0fd0u: goto label_2b0fd0;
        case 0x2b0fd4u: goto label_2b0fd4;
        case 0x2b0fd8u: goto label_2b0fd8;
        case 0x2b0fdcu: goto label_2b0fdc;
        case 0x2b0fe0u: goto label_2b0fe0;
        case 0x2b0fe4u: goto label_2b0fe4;
        case 0x2b0fe8u: goto label_2b0fe8;
        case 0x2b0fecu: goto label_2b0fec;
        case 0x2b0ff0u: goto label_2b0ff0;
        case 0x2b0ff4u: goto label_2b0ff4;
        case 0x2b0ff8u: goto label_2b0ff8;
        case 0x2b0ffcu: goto label_2b0ffc;
        case 0x2b1000u: goto label_2b1000;
        case 0x2b1004u: goto label_2b1004;
        case 0x2b1008u: goto label_2b1008;
        case 0x2b100cu: goto label_2b100c;
        case 0x2b1010u: goto label_2b1010;
        case 0x2b1014u: goto label_2b1014;
        case 0x2b1018u: goto label_2b1018;
        case 0x2b101cu: goto label_2b101c;
        case 0x2b1020u: goto label_2b1020;
        case 0x2b1024u: goto label_2b1024;
        case 0x2b1028u: goto label_2b1028;
        case 0x2b102cu: goto label_2b102c;
        case 0x2b1030u: goto label_2b1030;
        case 0x2b1034u: goto label_2b1034;
        case 0x2b1038u: goto label_2b1038;
        case 0x2b103cu: goto label_2b103c;
        case 0x2b1040u: goto label_2b1040;
        case 0x2b1044u: goto label_2b1044;
        case 0x2b1048u: goto label_2b1048;
        case 0x2b104cu: goto label_2b104c;
        case 0x2b1050u: goto label_2b1050;
        case 0x2b1054u: goto label_2b1054;
        case 0x2b1058u: goto label_2b1058;
        case 0x2b105cu: goto label_2b105c;
        case 0x2b1060u: goto label_2b1060;
        case 0x2b1064u: goto label_2b1064;
        case 0x2b1068u: goto label_2b1068;
        case 0x2b106cu: goto label_2b106c;
        case 0x2b1070u: goto label_2b1070;
        case 0x2b1074u: goto label_2b1074;
        case 0x2b1078u: goto label_2b1078;
        case 0x2b107cu: goto label_2b107c;
        case 0x2b1080u: goto label_2b1080;
        case 0x2b1084u: goto label_2b1084;
        case 0x2b1088u: goto label_2b1088;
        case 0x2b108cu: goto label_2b108c;
        case 0x2b1090u: goto label_2b1090;
        case 0x2b1094u: goto label_2b1094;
        case 0x2b1098u: goto label_2b1098;
        case 0x2b109cu: goto label_2b109c;
        case 0x2b10a0u: goto label_2b10a0;
        case 0x2b10a4u: goto label_2b10a4;
        case 0x2b10a8u: goto label_2b10a8;
        case 0x2b10acu: goto label_2b10ac;
        case 0x2b10b0u: goto label_2b10b0;
        case 0x2b10b4u: goto label_2b10b4;
        case 0x2b10b8u: goto label_2b10b8;
        case 0x2b10bcu: goto label_2b10bc;
        case 0x2b10c0u: goto label_2b10c0;
        case 0x2b10c4u: goto label_2b10c4;
        case 0x2b10c8u: goto label_2b10c8;
        case 0x2b10ccu: goto label_2b10cc;
        case 0x2b10d0u: goto label_2b10d0;
        case 0x2b10d4u: goto label_2b10d4;
        case 0x2b10d8u: goto label_2b10d8;
        case 0x2b10dcu: goto label_2b10dc;
        case 0x2b10e0u: goto label_2b10e0;
        case 0x2b10e4u: goto label_2b10e4;
        case 0x2b10e8u: goto label_2b10e8;
        case 0x2b10ecu: goto label_2b10ec;
        case 0x2b10f0u: goto label_2b10f0;
        case 0x2b10f4u: goto label_2b10f4;
        case 0x2b10f8u: goto label_2b10f8;
        case 0x2b10fcu: goto label_2b10fc;
        case 0x2b1100u: goto label_2b1100;
        case 0x2b1104u: goto label_2b1104;
        case 0x2b1108u: goto label_2b1108;
        case 0x2b110cu: goto label_2b110c;
        case 0x2b1110u: goto label_2b1110;
        case 0x2b1114u: goto label_2b1114;
        case 0x2b1118u: goto label_2b1118;
        case 0x2b111cu: goto label_2b111c;
        case 0x2b1120u: goto label_2b1120;
        case 0x2b1124u: goto label_2b1124;
        case 0x2b1128u: goto label_2b1128;
        case 0x2b112cu: goto label_2b112c;
        case 0x2b1130u: goto label_2b1130;
        case 0x2b1134u: goto label_2b1134;
        case 0x2b1138u: goto label_2b1138;
        case 0x2b113cu: goto label_2b113c;
        case 0x2b1140u: goto label_2b1140;
        case 0x2b1144u: goto label_2b1144;
        case 0x2b1148u: goto label_2b1148;
        case 0x2b114cu: goto label_2b114c;
        case 0x2b1150u: goto label_2b1150;
        case 0x2b1154u: goto label_2b1154;
        case 0x2b1158u: goto label_2b1158;
        case 0x2b115cu: goto label_2b115c;
        case 0x2b1160u: goto label_2b1160;
        case 0x2b1164u: goto label_2b1164;
        case 0x2b1168u: goto label_2b1168;
        case 0x2b116cu: goto label_2b116c;
        case 0x2b1170u: goto label_2b1170;
        case 0x2b1174u: goto label_2b1174;
        case 0x2b1178u: goto label_2b1178;
        case 0x2b117cu: goto label_2b117c;
        case 0x2b1180u: goto label_2b1180;
        case 0x2b1184u: goto label_2b1184;
        case 0x2b1188u: goto label_2b1188;
        case 0x2b118cu: goto label_2b118c;
        case 0x2b1190u: goto label_2b1190;
        case 0x2b1194u: goto label_2b1194;
        case 0x2b1198u: goto label_2b1198;
        case 0x2b119cu: goto label_2b119c;
        case 0x2b11a0u: goto label_2b11a0;
        case 0x2b11a4u: goto label_2b11a4;
        case 0x2b11a8u: goto label_2b11a8;
        case 0x2b11acu: goto label_2b11ac;
        case 0x2b11b0u: goto label_2b11b0;
        case 0x2b11b4u: goto label_2b11b4;
        case 0x2b11b8u: goto label_2b11b8;
        case 0x2b11bcu: goto label_2b11bc;
        case 0x2b11c0u: goto label_2b11c0;
        case 0x2b11c4u: goto label_2b11c4;
        case 0x2b11c8u: goto label_2b11c8;
        case 0x2b11ccu: goto label_2b11cc;
        case 0x2b11d0u: goto label_2b11d0;
        case 0x2b11d4u: goto label_2b11d4;
        case 0x2b11d8u: goto label_2b11d8;
        case 0x2b11dcu: goto label_2b11dc;
        case 0x2b11e0u: goto label_2b11e0;
        case 0x2b11e4u: goto label_2b11e4;
        case 0x2b11e8u: goto label_2b11e8;
        case 0x2b11ecu: goto label_2b11ec;
        case 0x2b11f0u: goto label_2b11f0;
        case 0x2b11f4u: goto label_2b11f4;
        case 0x2b11f8u: goto label_2b11f8;
        case 0x2b11fcu: goto label_2b11fc;
        case 0x2b1200u: goto label_2b1200;
        case 0x2b1204u: goto label_2b1204;
        case 0x2b1208u: goto label_2b1208;
        case 0x2b120cu: goto label_2b120c;
        case 0x2b1210u: goto label_2b1210;
        case 0x2b1214u: goto label_2b1214;
        case 0x2b1218u: goto label_2b1218;
        case 0x2b121cu: goto label_2b121c;
        case 0x2b1220u: goto label_2b1220;
        case 0x2b1224u: goto label_2b1224;
        case 0x2b1228u: goto label_2b1228;
        case 0x2b122cu: goto label_2b122c;
        case 0x2b1230u: goto label_2b1230;
        case 0x2b1234u: goto label_2b1234;
        case 0x2b1238u: goto label_2b1238;
        case 0x2b123cu: goto label_2b123c;
        case 0x2b1240u: goto label_2b1240;
        case 0x2b1244u: goto label_2b1244;
        case 0x2b1248u: goto label_2b1248;
        case 0x2b124cu: goto label_2b124c;
        case 0x2b1250u: goto label_2b1250;
        case 0x2b1254u: goto label_2b1254;
        case 0x2b1258u: goto label_2b1258;
        case 0x2b125cu: goto label_2b125c;
        case 0x2b1260u: goto label_2b1260;
        case 0x2b1264u: goto label_2b1264;
        case 0x2b1268u: goto label_2b1268;
        case 0x2b126cu: goto label_2b126c;
        case 0x2b1270u: goto label_2b1270;
        case 0x2b1274u: goto label_2b1274;
        case 0x2b1278u: goto label_2b1278;
        case 0x2b127cu: goto label_2b127c;
        case 0x2b1280u: goto label_2b1280;
        case 0x2b1284u: goto label_2b1284;
        case 0x2b1288u: goto label_2b1288;
        case 0x2b128cu: goto label_2b128c;
        case 0x2b1290u: goto label_2b1290;
        case 0x2b1294u: goto label_2b1294;
        case 0x2b1298u: goto label_2b1298;
        case 0x2b129cu: goto label_2b129c;
        case 0x2b12a0u: goto label_2b12a0;
        case 0x2b12a4u: goto label_2b12a4;
        case 0x2b12a8u: goto label_2b12a8;
        case 0x2b12acu: goto label_2b12ac;
        case 0x2b12b0u: goto label_2b12b0;
        case 0x2b12b4u: goto label_2b12b4;
        case 0x2b12b8u: goto label_2b12b8;
        case 0x2b12bcu: goto label_2b12bc;
        case 0x2b12c0u: goto label_2b12c0;
        case 0x2b12c4u: goto label_2b12c4;
        case 0x2b12c8u: goto label_2b12c8;
        case 0x2b12ccu: goto label_2b12cc;
        case 0x2b12d0u: goto label_2b12d0;
        case 0x2b12d4u: goto label_2b12d4;
        case 0x2b12d8u: goto label_2b12d8;
        case 0x2b12dcu: goto label_2b12dc;
        case 0x2b12e0u: goto label_2b12e0;
        case 0x2b12e4u: goto label_2b12e4;
        case 0x2b12e8u: goto label_2b12e8;
        case 0x2b12ecu: goto label_2b12ec;
        case 0x2b12f0u: goto label_2b12f0;
        case 0x2b12f4u: goto label_2b12f4;
        case 0x2b12f8u: goto label_2b12f8;
        case 0x2b12fcu: goto label_2b12fc;
        case 0x2b1300u: goto label_2b1300;
        case 0x2b1304u: goto label_2b1304;
        case 0x2b1308u: goto label_2b1308;
        case 0x2b130cu: goto label_2b130c;
        case 0x2b1310u: goto label_2b1310;
        case 0x2b1314u: goto label_2b1314;
        case 0x2b1318u: goto label_2b1318;
        case 0x2b131cu: goto label_2b131c;
        case 0x2b1320u: goto label_2b1320;
        case 0x2b1324u: goto label_2b1324;
        case 0x2b1328u: goto label_2b1328;
        case 0x2b132cu: goto label_2b132c;
        case 0x2b1330u: goto label_2b1330;
        case 0x2b1334u: goto label_2b1334;
        case 0x2b1338u: goto label_2b1338;
        case 0x2b133cu: goto label_2b133c;
        case 0x2b1340u: goto label_2b1340;
        case 0x2b1344u: goto label_2b1344;
        case 0x2b1348u: goto label_2b1348;
        case 0x2b134cu: goto label_2b134c;
        case 0x2b1350u: goto label_2b1350;
        case 0x2b1354u: goto label_2b1354;
        case 0x2b1358u: goto label_2b1358;
        case 0x2b135cu: goto label_2b135c;
        case 0x2b1360u: goto label_2b1360;
        case 0x2b1364u: goto label_2b1364;
        case 0x2b1368u: goto label_2b1368;
        case 0x2b136cu: goto label_2b136c;
        case 0x2b1370u: goto label_2b1370;
        case 0x2b1374u: goto label_2b1374;
        case 0x2b1378u: goto label_2b1378;
        case 0x2b137cu: goto label_2b137c;
        case 0x2b1380u: goto label_2b1380;
        case 0x2b1384u: goto label_2b1384;
        case 0x2b1388u: goto label_2b1388;
        case 0x2b138cu: goto label_2b138c;
        case 0x2b1390u: goto label_2b1390;
        case 0x2b1394u: goto label_2b1394;
        case 0x2b1398u: goto label_2b1398;
        case 0x2b139cu: goto label_2b139c;
        case 0x2b13a0u: goto label_2b13a0;
        case 0x2b13a4u: goto label_2b13a4;
        case 0x2b13a8u: goto label_2b13a8;
        case 0x2b13acu: goto label_2b13ac;
        case 0x2b13b0u: goto label_2b13b0;
        case 0x2b13b4u: goto label_2b13b4;
        case 0x2b13b8u: goto label_2b13b8;
        case 0x2b13bcu: goto label_2b13bc;
        case 0x2b13c0u: goto label_2b13c0;
        case 0x2b13c4u: goto label_2b13c4;
        case 0x2b13c8u: goto label_2b13c8;
        case 0x2b13ccu: goto label_2b13cc;
        case 0x2b13d0u: goto label_2b13d0;
        case 0x2b13d4u: goto label_2b13d4;
        case 0x2b13d8u: goto label_2b13d8;
        case 0x2b13dcu: goto label_2b13dc;
        case 0x2b13e0u: goto label_2b13e0;
        case 0x2b13e4u: goto label_2b13e4;
        case 0x2b13e8u: goto label_2b13e8;
        case 0x2b13ecu: goto label_2b13ec;
        case 0x2b13f0u: goto label_2b13f0;
        case 0x2b13f4u: goto label_2b13f4;
        case 0x2b13f8u: goto label_2b13f8;
        case 0x2b13fcu: goto label_2b13fc;
        case 0x2b1400u: goto label_2b1400;
        case 0x2b1404u: goto label_2b1404;
        case 0x2b1408u: goto label_2b1408;
        case 0x2b140cu: goto label_2b140c;
        case 0x2b1410u: goto label_2b1410;
        case 0x2b1414u: goto label_2b1414;
        case 0x2b1418u: goto label_2b1418;
        case 0x2b141cu: goto label_2b141c;
        case 0x2b1420u: goto label_2b1420;
        case 0x2b1424u: goto label_2b1424;
        case 0x2b1428u: goto label_2b1428;
        case 0x2b142cu: goto label_2b142c;
        case 0x2b1430u: goto label_2b1430;
        case 0x2b1434u: goto label_2b1434;
        case 0x2b1438u: goto label_2b1438;
        case 0x2b143cu: goto label_2b143c;
        case 0x2b1440u: goto label_2b1440;
        case 0x2b1444u: goto label_2b1444;
        case 0x2b1448u: goto label_2b1448;
        case 0x2b144cu: goto label_2b144c;
        case 0x2b1450u: goto label_2b1450;
        case 0x2b1454u: goto label_2b1454;
        case 0x2b1458u: goto label_2b1458;
        case 0x2b145cu: goto label_2b145c;
        case 0x2b1460u: goto label_2b1460;
        case 0x2b1464u: goto label_2b1464;
        case 0x2b1468u: goto label_2b1468;
        case 0x2b146cu: goto label_2b146c;
        case 0x2b1470u: goto label_2b1470;
        case 0x2b1474u: goto label_2b1474;
        case 0x2b1478u: goto label_2b1478;
        case 0x2b147cu: goto label_2b147c;
        case 0x2b1480u: goto label_2b1480;
        case 0x2b1484u: goto label_2b1484;
        case 0x2b1488u: goto label_2b1488;
        case 0x2b148cu: goto label_2b148c;
        case 0x2b1490u: goto label_2b1490;
        case 0x2b1494u: goto label_2b1494;
        case 0x2b1498u: goto label_2b1498;
        case 0x2b149cu: goto label_2b149c;
        case 0x2b14a0u: goto label_2b14a0;
        case 0x2b14a4u: goto label_2b14a4;
        case 0x2b14a8u: goto label_2b14a8;
        case 0x2b14acu: goto label_2b14ac;
        case 0x2b14b0u: goto label_2b14b0;
        case 0x2b14b4u: goto label_2b14b4;
        case 0x2b14b8u: goto label_2b14b8;
        case 0x2b14bcu: goto label_2b14bc;
        case 0x2b14c0u: goto label_2b14c0;
        case 0x2b14c4u: goto label_2b14c4;
        case 0x2b14c8u: goto label_2b14c8;
        case 0x2b14ccu: goto label_2b14cc;
        case 0x2b14d0u: goto label_2b14d0;
        case 0x2b14d4u: goto label_2b14d4;
        case 0x2b14d8u: goto label_2b14d8;
        case 0x2b14dcu: goto label_2b14dc;
        case 0x2b14e0u: goto label_2b14e0;
        case 0x2b14e4u: goto label_2b14e4;
        case 0x2b14e8u: goto label_2b14e8;
        case 0x2b14ecu: goto label_2b14ec;
        case 0x2b14f0u: goto label_2b14f0;
        case 0x2b14f4u: goto label_2b14f4;
        case 0x2b14f8u: goto label_2b14f8;
        case 0x2b14fcu: goto label_2b14fc;
        case 0x2b1500u: goto label_2b1500;
        case 0x2b1504u: goto label_2b1504;
        case 0x2b1508u: goto label_2b1508;
        case 0x2b150cu: goto label_2b150c;
        case 0x2b1510u: goto label_2b1510;
        case 0x2b1514u: goto label_2b1514;
        case 0x2b1518u: goto label_2b1518;
        case 0x2b151cu: goto label_2b151c;
        case 0x2b1520u: goto label_2b1520;
        case 0x2b1524u: goto label_2b1524;
        case 0x2b1528u: goto label_2b1528;
        case 0x2b152cu: goto label_2b152c;
        case 0x2b1530u: goto label_2b1530;
        case 0x2b1534u: goto label_2b1534;
        case 0x2b1538u: goto label_2b1538;
        case 0x2b153cu: goto label_2b153c;
        case 0x2b1540u: goto label_2b1540;
        case 0x2b1544u: goto label_2b1544;
        case 0x2b1548u: goto label_2b1548;
        case 0x2b154cu: goto label_2b154c;
        case 0x2b1550u: goto label_2b1550;
        case 0x2b1554u: goto label_2b1554;
        case 0x2b1558u: goto label_2b1558;
        case 0x2b155cu: goto label_2b155c;
        case 0x2b1560u: goto label_2b1560;
        case 0x2b1564u: goto label_2b1564;
        case 0x2b1568u: goto label_2b1568;
        case 0x2b156cu: goto label_2b156c;
        case 0x2b1570u: goto label_2b1570;
        case 0x2b1574u: goto label_2b1574;
        case 0x2b1578u: goto label_2b1578;
        case 0x2b157cu: goto label_2b157c;
        case 0x2b1580u: goto label_2b1580;
        case 0x2b1584u: goto label_2b1584;
        case 0x2b1588u: goto label_2b1588;
        case 0x2b158cu: goto label_2b158c;
        case 0x2b1590u: goto label_2b1590;
        case 0x2b1594u: goto label_2b1594;
        case 0x2b1598u: goto label_2b1598;
        case 0x2b159cu: goto label_2b159c;
        default: break;
    }

    ctx->pc = 0x2b07f0u;

label_2b07f0:
    // 0x2b07f0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2b07f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
label_2b07f4:
    // 0x2b07f4: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x2b07f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
label_2b07f8:
    // 0x2b07f8: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x2b07f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
label_2b07fc:
    // 0x2b07fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b07fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0800:
    // 0x2b0800: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x2b0800u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
label_2b0804:
    // 0x2b0804: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2b0804u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0808:
    // 0x2b0808: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x2b0808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
label_2b080c:
    // 0x2b080c: 0x160902d  daddu       $s2, $t3, $zero
    ctx->pc = 0x2b080cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2b0810:
    // 0x2b0810: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x2b0810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
label_2b0814:
    // 0x2b0814: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b0814u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0818:
    // 0x2b0818: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x2b0818u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
label_2b081c:
    // 0x2b081c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2b081cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0820:
    // 0x2b0820: 0xe7b40170  swc1        $f20, 0x170($sp)
    ctx->pc = 0x2b0820u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_2b0824:
    // 0x2b0824: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x2b0824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
label_2b0828:
    // 0x2b0828: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2b0828u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_2b082c:
    // 0x2b082c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x2b082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
label_2b0830:
    // 0x2b0830: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x2b0830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
label_2b0834:
    // 0x2b0834: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x2b0834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
label_2b0838:
    // 0x2b0838: 0xe7b70188  swc1        $f23, 0x188($sp)
    ctx->pc = 0x2b0838u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
label_2b083c:
    // 0x2b083c: 0xe7b60180  swc1        $f22, 0x180($sp)
    ctx->pc = 0x2b083cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
label_2b0840:
    // 0x2b0840: 0xe7b50178  swc1        $f21, 0x178($sp)
    ctx->pc = 0x2b0840u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
label_2b0844:
    // 0x2b0844: 0x8fb70190  lw          $s7, 0x190($sp)
    ctx->pc = 0x2b0844u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_2b0848:
    // 0x2b0848: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2b0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2b084c:
    // 0x2b084c: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b084cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
label_2b0850:
    // 0x2b0850: 0xafa70064  sw          $a3, 0x64($sp)
    ctx->pc = 0x2b0850u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 7));
label_2b0854:
    // 0x2b0854: 0xafa80068  sw          $t0, 0x68($sp)
    ctx->pc = 0x2b0854u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 8));
label_2b0858:
    // 0x2b0858: 0xafa9006c  sw          $t1, 0x6C($sp)
    ctx->pc = 0x2b0858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 9));
label_2b085c:
    // 0x2b085c: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_2b0860:
    if (ctx->pc == 0x2B0860u) {
        ctx->pc = 0x2B0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B085Cu;
        // 0x2b0860: 0xafaa0070  sw          $t2, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0864u;
        goto label_2b0864;
    }
    ctx->pc = 0x2B085Cu;
    {
        const bool branch_taken_0x2b085c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B085Cu;
        // 0x2b0860: 0xafaa0070  sw          $t2, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b085c) {
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B0864u;
label_2b0864:
    // 0x2b0864: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x2b0864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2b0868:
    // 0x2b0868: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2b0868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b086c:
    // 0x2b086c: 0x30c40003  andi        $a0, $a2, 0x3
    ctx->pc = 0x2b086cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
label_2b0870:
    // 0x2b0870: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_2b0874:
    if (ctx->pc == 0x2B0874u) {
        ctx->pc = 0x2B0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0870u;
        // 0x2b0874: 0x24a30014  addiu       $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0878u;
        goto label_2b0878;
    }
    ctx->pc = 0x2B0870u;
    {
        const bool branch_taken_0x2b0870 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0870u;
        // 0x2b0874: 0x24a30014  addiu       $v1, $a1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0870) {
            ctx->pc = 0x2B08E4u;
            goto label_2b08e4;
        }
    }
    ctx->pc = 0x2B0878u;
label_2b0878:
    // 0x2b0878: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2b0878u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b087c:
    // 0x2b087c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2b0880:
    if (ctx->pc == 0x2B0880u) {
        ctx->pc = 0x2B0880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B087Cu;
        // 0x2b0880: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0884u;
        goto label_2b0884;
    }
    ctx->pc = 0x2B087Cu;
    {
        const bool branch_taken_0x2b087c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b087c) {
            ctx->pc = 0x2B0880u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B087Cu;
            // 0x2b0880: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B08C8u;
            goto label_2b08c8;
        }
    }
    ctx->pc = 0x2B0884u;
label_2b0884:
    // 0x2b0884: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b0884u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b0888:
    // 0x2b0888: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2b088c:
    if (ctx->pc == 0x2B088Cu) {
        ctx->pc = 0x2B088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0888u;
        // 0x2b088c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0890u;
        goto label_2b0890;
    }
    ctx->pc = 0x2B0888u;
    {
        const bool branch_taken_0x2b0888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0888u;
        // 0x2b088c: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0888) {
            ctx->pc = 0x2B08A8u;
            goto label_2b08a8;
        }
    }
    ctx->pc = 0x2B0890u;
label_2b0890:
    // 0x2b0890: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b0890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b0894:
    // 0x2b0894: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_2b0898:
    if (ctx->pc == 0x2B0898u) {
        ctx->pc = 0x2B0898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0894u;
        // 0x2b0898: 0x8cb00014  lw          $s0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B089Cu;
        goto label_2b089c;
    }
    ctx->pc = 0x2B0894u;
    {
        const bool branch_taken_0x2b0894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0894) {
            ctx->pc = 0x2B0898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0894u;
            // 0x2b0898: 0x8cb00014  lw          $s0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B089Cu;
            goto label_2b089c;
        }
    }
    ctx->pc = 0x2B089Cu;
label_2b089c:
    // 0x2b089c: 0x24a3003c  addiu       $v1, $a1, 0x3C
    ctx->pc = 0x2b089cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 60));
label_2b08a0:
    // 0x2b08a0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b08a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b08a4:
    // 0x2b08a4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b08a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b08a8:
    // 0x2b08a8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b08a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b08ac:
    // 0x2b08ac: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b08b0:
    if (ctx->pc == 0x2B08B0u) {
        ctx->pc = 0x2B08B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08ACu;
        // 0x2b08b0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08B4u;
        goto label_2b08b4;
    }
    ctx->pc = 0x2B08ACu;
    {
        const bool branch_taken_0x2b08ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b08ac) {
            ctx->pc = 0x2B08B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B08ACu;
            // 0x2b08b0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B08C0u;
            goto label_2b08c0;
        }
    }
    ctx->pc = 0x2B08B4u;
label_2b08b4:
    // 0x2b08b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b08b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b08b8:
    // 0x2b08b8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b08b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b08bc:
    // 0x2b08bc: 0x24630028  addiu       $v1, $v1, 0x28
    ctx->pc = 0x2b08bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
label_2b08c0:
    // 0x2b08c0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b08c0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2b08c4:
    // 0x2b08c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b08c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b08c8:
    // 0x2b08c8: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b08c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b08cc:
    // 0x2b08cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b08d0:
    if (ctx->pc == 0x2B08D0u) {
        ctx->pc = 0x2B08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08CCu;
        // 0x2b08d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08D4u;
        goto label_2b08d4;
    }
    ctx->pc = 0x2B08CCu;
    {
        const bool branch_taken_0x2b08cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B08D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08CCu;
        // 0x2b08d0: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08cc) {
            ctx->pc = 0x2B08DCu;
            goto label_2b08dc;
        }
    }
    ctx->pc = 0x2B08D4u;
label_2b08d4:
    // 0x2b08d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b08d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b08d8:
    // 0x2b08d8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b08d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b08dc:
    // 0x2b08dc: 0x12a6001e  beq         $s5, $a2, . + 4 + (0x1E << 2)
label_2b08e0:
    if (ctx->pc == 0x2B08E0u) {
        ctx->pc = 0x2B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08DCu;
        // 0x2b08e0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08E4u;
        goto label_2b08e4;
    }
    ctx->pc = 0x2B08DCu;
    {
        const bool branch_taken_0x2b08dc = (GPR_U64(ctx, 21) == GPR_U64(ctx, 6));
        ctx->pc = 0x2B08E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08DCu;
        // 0x2b08e0: 0x24630028  addiu       $v1, $v1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b08dc) {
            ctx->pc = 0x2B0958u;
            goto label_2b0958;
        }
    }
    ctx->pc = 0x2B08E4u;
label_2b08e4:
    // 0x2b08e4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b08e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b08e8:
    // 0x2b08e8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b08e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b08ec:
    // 0x2b08ec: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b08ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b08f0:
    // 0x2b08f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b08f4:
    if (ctx->pc == 0x2B08F4u) {
        ctx->pc = 0x2B08F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B08F0u;
        // 0x2b08f4: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B08F8u;
        goto label_2b08f8;
    }
    ctx->pc = 0x2B08F0u;
    {
        const bool branch_taken_0x2b08f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b08f0) {
            ctx->pc = 0x2B08F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B08F0u;
            // 0x2b08f4: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0904u;
            goto label_2b0904;
        }
    }
    ctx->pc = 0x2B08F8u;
label_2b08f8:
    // 0x2b08f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b08f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b08fc:
    // 0x2b08fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b08fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b0900:
    // 0x2b0900: 0x8c82002c  lw          $v0, 0x2C($a0)
    ctx->pc = 0x2b0900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
label_2b0904:
    // 0x2b0904: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b0904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b0908:
    // 0x2b0908: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b090c:
    if (ctx->pc == 0x2B090Cu) {
        ctx->pc = 0x2B090Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0908u;
        // 0x2b090c: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0910u;
        goto label_2b0910;
    }
    ctx->pc = 0x2B0908u;
    {
        const bool branch_taken_0x2b0908 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0908) {
            ctx->pc = 0x2B090Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0908u;
            // 0x2b090c: 0x8c820054  lw          $v0, 0x54($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B091Cu;
            goto label_2b091c;
        }
    }
    ctx->pc = 0x2B0910u;
label_2b0910:
    // 0x2b0910: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2b0910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2b0914:
    // 0x2b0914: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b0914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b0918:
    // 0x2b0918: 0x8c820054  lw          $v0, 0x54($a0)
    ctx->pc = 0x2b0918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_2b091c:
    // 0x2b091c: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b091cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b0920:
    // 0x2b0920: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b0924:
    if (ctx->pc == 0x2B0924u) {
        ctx->pc = 0x2B0924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0920u;
        // 0x2b0924: 0x8c82007c  lw          $v0, 0x7C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0928u;
        goto label_2b0928;
    }
    ctx->pc = 0x2B0920u;
    {
        const bool branch_taken_0x2b0920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0920) {
            ctx->pc = 0x2B0924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0920u;
            // 0x2b0924: 0x8c82007c  lw          $v0, 0x7C($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0934u;
            goto label_2b0934;
        }
    }
    ctx->pc = 0x2B0928u;
label_2b0928:
    // 0x2b0928: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x2b0928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
label_2b092c:
    // 0x2b092c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b092cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b0930:
    // 0x2b0930: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x2b0930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_2b0934:
    // 0x2b0934: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x2b0934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_2b0938:
    // 0x2b0938: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b093c:
    if (ctx->pc == 0x2B093Cu) {
        ctx->pc = 0x2B093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0938u;
        // 0x2b093c: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0940u;
        goto label_2b0940;
    }
    ctx->pc = 0x2B0938u;
    {
        const bool branch_taken_0x2b0938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0938) {
            ctx->pc = 0x2B093Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0938u;
            // 0x2b093c: 0x246300a0  addiu       $v1, $v1, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B094Cu;
            goto label_2b094c;
        }
    }
    ctx->pc = 0x2B0940u;
label_2b0940:
    // 0x2b0940: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2b0940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
label_2b0944:
    // 0x2b0944: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2b0944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b0948:
    // 0x2b0948: 0x246300a0  addiu       $v1, $v1, 0xA0
    ctx->pc = 0x2b0948u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 160));
label_2b094c:
    // 0x2b094c: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2b094cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2b0950:
    // 0x2b0950: 0x16a6ffe5  bne         $s5, $a2, . + 4 + (-0x1B << 2)
label_2b0954:
    if (ctx->pc == 0x2B0954u) {
        ctx->pc = 0x2B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0950u;
        // 0x2b0954: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0958u;
        goto label_2b0958;
    }
    ctx->pc = 0x2B0950u;
    {
        const bool branch_taken_0x2b0950 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B0954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0950u;
        // 0x2b0954: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0950) {
            ctx->pc = 0x2B08E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b08e8;
        }
    }
    ctx->pc = 0x2B0958u;
label_2b0958:
    // 0x2b0958: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2b0958u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b095c:
    // 0x2b095c: 0xc0b03c6  jal         func_2C0F18
label_2b0960:
    if (ctx->pc == 0x2B0960u) {
        ctx->pc = 0x2B0960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B095Cu;
        // 0x2b0960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0964u;
        goto label_2b0964;
    }
    ctx->pc = 0x2B095Cu;
    SET_GPR_U32(ctx, 31, 0x2B0964u);
    ctx->pc = 0x2B0960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B095Cu;
    // 0x2b0960: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0F18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0F18u, 0x2B095Cu, 0x2B0964u)) {
        return;
    }
    ctx->pc = 0x2B0964u;
label_2b0964:
    // 0x2b0964: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b0964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0968:
    // 0x2b0968: 0x26e3004c  addiu       $v1, $s7, 0x4C
    ctx->pc = 0x2b0968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 76));
label_2b096c:
    // 0x2b096c: 0x8fa60060  lw          $a2, 0x60($sp)
    ctx->pc = 0x2b096cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2b0970:
    // 0x2b0970: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0974:
    // 0x2b0974: 0x2445003c  addiu       $a1, $v0, 0x3C
    ctx->pc = 0x2b0974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 60));
label_2b0978:
    // 0x2b0978: 0x26c70058  addiu       $a3, $s6, 0x58
    ctx->pc = 0x2b0978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), 88));
label_2b097c:
    // 0x2b097c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x2b097cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
label_2b0980:
    // 0x2b0980: 0x26c20018  addiu       $v0, $s6, 0x18
    ctx->pc = 0x2b0980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 24));
label_2b0984:
    // 0x2b0984: 0x26c80030  addiu       $t0, $s6, 0x30
    ctx->pc = 0x2b0984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), 48));
label_2b0988:
    // 0x2b0988: 0x26c90020  addiu       $t1, $s6, 0x20
    ctx->pc = 0x2b0988u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
label_2b098c:
    // 0x2b098c: 0xc6ec0000  lwc1        $f12, 0x0($s7)
    ctx->pc = 0x2b098cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b0990:
    // 0x2b0990: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x2b0990u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b0994:
    // 0x2b0994: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2b0994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2b0998:
    // 0x2b0998: 0x26cb0008  addiu       $t3, $s6, 0x8
    ctx->pc = 0x2b0998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_2b099c:
    // 0x2b099c: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x2b099cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_2b09a0:
    // 0x2b09a0: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x2b09a0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_2b09a4:
    // 0x2b09a4: 0xc0ac05a  jal         func_2B0168
label_2b09a8:
    if (ctx->pc == 0x2B09A8u) {
        ctx->pc = 0x2B09A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B09A4u;
        // 0x2b09a8: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B09ACu;
        goto label_2b09ac;
    }
    ctx->pc = 0x2B09A4u;
    SET_GPR_U32(ctx, 31, 0x2B09ACu);
    ctx->pc = 0x2B09A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B09A4u;
    // 0x2b09a8: 0xafb20008  sw          $s2, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B0168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B0168u, 0x2B09A4u, 0x2B09ACu)) {
        return;
    }
    ctx->pc = 0x2B09ACu;
label_2b09ac:
    // 0x2b09ac: 0x26250118  addiu       $a1, $s1, 0x118
    ctx->pc = 0x2b09acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 280));
label_2b09b0:
    // 0x2b09b0: 0x3c014348  lui         $at, 0x4348
    ctx->pc = 0x2b09b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17224 << 16));
label_2b09b4:
    // 0x2b09b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b09b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2b09b8:
    // 0x2b09b8: 0xafa5008c  sw          $a1, 0x8C($sp)
    ctx->pc = 0x2b09b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 5));
label_2b09bc:
    // 0x2b09bc: 0x2626010c  addiu       $a2, $s1, 0x10C
    ctx->pc = 0x2b09bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 268));
label_2b09c0:
    // 0x2b09c0: 0xe6200144  swc1        $f0, 0x144($s1)
    ctx->pc = 0x2b09c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_2b09c4:
    // 0x2b09c4: 0x8ee20068  lw          $v0, 0x68($s7)
    ctx->pc = 0x2b09c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 104)));
label_2b09c8:
    // 0x2b09c8: 0xafa60080  sw          $a2, 0x80($sp)
    ctx->pc = 0x2b09c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 6));
label_2b09cc:
    // 0x2b09cc: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x2b09ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_2b09d0:
    // 0x2b09d0: 0xc6e00000  lwc1        $f0, 0x0($s7)
    ctx->pc = 0x2b09d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b09d4:
    // 0x2b09d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b09d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2b09d8:
    // 0x2b09d8: 0x8ee30058  lw          $v1, 0x58($s7)
    ctx->pc = 0x2b09d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 88)));
label_2b09dc:
    // 0x2b09dc: 0xe6200124  swc1        $f0, 0x124($s1)
    ctx->pc = 0x2b09dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 292), bits); }
label_2b09e0:
    // 0x2b09e0: 0xae220158  sw          $v0, 0x158($s1)
    ctx->pc = 0x2b09e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 344), GPR_U32(ctx, 2));
label_2b09e4:
    // 0x2b09e4: 0xae23014c  sw          $v1, 0x14C($s1)
    ctx->pc = 0x2b09e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 3));
label_2b09e8:
    // 0x2b09e8: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2b09e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b09ec:
    // 0x2b09ec: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x2b09ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_2b09f0:
    // 0x2b09f0: 0xafa30084  sw          $v1, 0x84($sp)
    ctx->pc = 0x2b09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 3));
label_2b09f4:
    // 0x2b09f4: 0xae200134  sw          $zero, 0x134($s1)
    ctx->pc = 0x2b09f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 308), GPR_U32(ctx, 0));
label_2b09f8:
    // 0x2b09f8: 0x6ac40037  ldl         $a0, 0x37($s6)
    ctx->pc = 0x2b09f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b09fc:
    // 0x2b09fc: 0x6ec40030  ldr         $a0, 0x30($s6)
    ctx->pc = 0x2b09fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b0a00:
    // 0x2b0a00: 0x6ac70027  ldl         $a3, 0x27($s6)
    ctx->pc = 0x2b0a00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b0a04:
    // 0x2b0a04: 0x6ec70020  ldr         $a3, 0x20($s6)
    ctx->pc = 0x2b0a04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b0a08:
    // 0x2b0a08: 0x6ac8002f  ldl         $t0, 0x2F($s6)
    ctx->pc = 0x2b0a08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b0a0c:
    // 0x2b0a0c: 0x6ec80028  ldr         $t0, 0x28($s6)
    ctx->pc = 0x2b0a0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b0a10:
    // 0x2b0a10: 0x6ac90007  ldl         $t1, 0x7($s6)
    ctx->pc = 0x2b0a10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2b0a14:
    // 0x2b0a14: 0x6ec90000  ldr         $t1, 0x0($s6)
    ctx->pc = 0x2b0a14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2b0a18:
    // 0x2b0a18: 0x6aca000f  ldl         $t2, 0xF($s6)
    ctx->pc = 0x2b0a18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2b0a1c:
    // 0x2b0a1c: 0x6eca0008  ldr         $t2, 0x8($s6)
    ctx->pc = 0x2b0a1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2b0a20:
    // 0x2b0a20: 0x6acb001f  ldl         $t3, 0x1F($s6)
    ctx->pc = 0x2b0a20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_2b0a24:
    // 0x2b0a24: 0x6ecb0018  ldr         $t3, 0x18($s6)
    ctx->pc = 0x2b0a24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_2b0a28:
    // 0x2b0a28: 0xc0ae25e  jal         func_2B8978
label_2b0a2c:
    if (ctx->pc == 0x2B0A2Cu) {
        ctx->pc = 0x2B0A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A28u;
        // 0x2b0a2c: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A30u;
        goto label_2b0a30;
    }
    ctx->pc = 0x2B0A28u;
    SET_GPR_U32(ctx, 31, 0x2B0A30u);
    ctx->pc = 0x2B0A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A28u;
    // 0x2b0a2c: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B8978u, 0x2B0A28u, 0x2B0A30u)) {
        return;
    }
    ctx->pc = 0x2B0A30u;
label_2b0a30:
    // 0x2b0a30: 0x1200023d  beqz        $s0, . + 4 + (0x23D << 2)
label_2b0a34:
    if (ctx->pc == 0x2B0A34u) {
        ctx->pc = 0x2B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A30u;
        // 0x2b0a34: 0x26280034  addiu       $t0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A38u;
        goto label_2b0a38;
    }
    ctx->pc = 0x2B0A30u;
    {
        const bool branch_taken_0x2b0a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A30u;
        // 0x2b0a34: 0x26280034  addiu       $t0, $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0a30) {
            ctx->pc = 0x2B1328u;
            goto label_2b1328;
        }
    }
    ctx->pc = 0x2B0A38u;
label_2b0a38:
    // 0x2b0a38: 0x8e260108  lw          $a2, 0x108($s1)
    ctx->pc = 0x2b0a38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
label_2b0a3c:
    // 0x2b0a3c: 0x8e2700f4  lw          $a3, 0xF4($s1)
    ctx->pc = 0x2b0a3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_2b0a40:
    // 0x2b0a40: 0x26220040  addiu       $v0, $s1, 0x40
    ctx->pc = 0x2b0a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_2b0a44:
    // 0x2b0a44: 0x8fa4006c  lw          $a0, 0x6C($sp)
    ctx->pc = 0x2b0a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2b0a48:
    // 0x2b0a48: 0x2632001c  addiu       $s2, $s1, 0x1C
    ctx->pc = 0x2b0a48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
label_2b0a4c:
    // 0x2b0a4c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2b0a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0a50:
    // 0x2b0a50: 0x26300028  addiu       $s0, $s1, 0x28
    ctx->pc = 0x2b0a50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_2b0a54:
    // 0x2b0a54: 0xafa80088  sw          $t0, 0x88($sp)
    ctx->pc = 0x2b0a54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 8));
label_2b0a58:
    // 0x2b0a58: 0x263400dc  addiu       $s4, $s1, 0xDC
    ctx->pc = 0x2b0a58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 220));
label_2b0a5c:
    // 0x2b0a5c: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x2b0a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_2b0a60:
    // 0x2b0a60: 0xc0b03ae  jal         func_2C0EB8
label_2b0a64:
    if (ctx->pc == 0x2B0A64u) {
        ctx->pc = 0x2B0A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0A60u;
        // 0x2b0a64: 0x263300e8  addiu       $s3, $s1, 0xE8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0A68u;
        goto label_2b0a68;
    }
    ctx->pc = 0x2B0A60u;
    SET_GPR_U32(ctx, 31, 0x2B0A68u);
    ctx->pc = 0x2B0A64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0A60u;
    // 0x2b0a64: 0x263300e8  addiu       $s3, $s1, 0xE8 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C0EB8u, 0x2B0A60u, 0x2B0A68u)) {
        return;
    }
    ctx->pc = 0x2B0A68u;
label_2b0a68:
    // 0x2b0a68: 0x263e0010  addiu       $fp, $s1, 0x10
    ctx->pc = 0x2b0a68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2b0a6c:
    // 0x2b0a6c: 0x2623004c  addiu       $v1, $s1, 0x4C
    ctx->pc = 0x2b0a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
label_2b0a70:
    // 0x2b0a70: 0x26240058  addiu       $a0, $s1, 0x58
    ctx->pc = 0x2b0a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
label_2b0a74:
    // 0x2b0a74: 0xafa300a0  sw          $v1, 0xA0($sp)
    ctx->pc = 0x2b0a74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 3));
label_2b0a78:
    // 0x2b0a78: 0x26290064  addiu       $t1, $s1, 0x64
    ctx->pc = 0x2b0a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_2b0a7c:
    // 0x2b0a7c: 0x8e230068  lw          $v1, 0x68($s1)
    ctx->pc = 0x2b0a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_2b0a80:
    // 0x2b0a80: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b0a80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b0a84:
    // 0x2b0a84: 0x8e2200f4  lw          $v0, 0xF4($s1)
    ctx->pc = 0x2b0a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
label_2b0a88:
    // 0x2b0a88: 0xafa400a8  sw          $a0, 0xA8($sp)
    ctx->pc = 0x2b0a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 4));
label_2b0a8c:
    // 0x2b0a8c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2b0a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2b0a90:
    // 0x2b0a90: 0x26240124  addiu       $a0, $s1, 0x124
    ctx->pc = 0x2b0a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
label_2b0a94:
    // 0x2b0a94: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x2b0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_2b0a98:
    // 0x2b0a98: 0xafa40098  sw          $a0, 0x98($sp)
    ctx->pc = 0x2b0a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 4));
label_2b0a9c:
    // 0x2b0a9c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2b0a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0aa0:
    // 0x2b0aa0: 0x262400ac  addiu       $a0, $s1, 0xAC
    ctx->pc = 0x2b0aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_2b0aa4:
    // 0x2b0aa4: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x2b0aa4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0aa8:
    // 0x2b0aa8: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x2b0aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0aac:
    // 0x2b0aac: 0x24a50094  addiu       $a1, $a1, 0x94
    ctx->pc = 0x2b0aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 148));
label_2b0ab0:
    // 0x2b0ab0: 0x24c60018  addiu       $a2, $a2, 0x18
    ctx->pc = 0x2b0ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
label_2b0ab4:
    // 0x2b0ab4: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x2b0ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0ab8:
    // 0x2b0ab8: 0x24e70054  addiu       $a3, $a3, 0x54
    ctx->pc = 0x2b0ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 84));
label_2b0abc:
    // 0x2b0abc: 0xafa500bc  sw          $a1, 0xBC($sp)
    ctx->pc = 0x2b0abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 5));
label_2b0ac0:
    // 0x2b0ac0: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2b0ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2b0ac4:
    // 0x2b0ac4: 0x25080088  addiu       $t0, $t0, 0x88
    ctx->pc = 0x2b0ac4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 136));
label_2b0ac8:
    // 0x2b0ac8: 0xafa700a4  sw          $a3, 0xA4($sp)
    ctx->pc = 0x2b0ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 7));
label_2b0acc:
    // 0x2b0acc: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x2b0accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_2b0ad0:
    // 0x2b0ad0: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2b0ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0ad4:
    // 0x2b0ad4: 0x8fa60064  lw          $a2, 0x64($sp)
    ctx->pc = 0x2b0ad4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0ad8:
    // 0x2b0ad8: 0x8fa70064  lw          $a3, 0x64($sp)
    ctx->pc = 0x2b0ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0adc:
    // 0x2b0adc: 0x24a5000c  addiu       $a1, $a1, 0xC
    ctx->pc = 0x2b0adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
label_2b0ae0:
    // 0x2b0ae0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b0ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b0ae4:
    // 0x2b0ae4: 0x24c60024  addiu       $a2, $a2, 0x24
    ctx->pc = 0x2b0ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 36));
label_2b0ae8:
    // 0x2b0ae8: 0xafa800b8  sw          $t0, 0xB8($sp)
    ctx->pc = 0x2b0ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 8));
label_2b0aec:
    // 0x2b0aec: 0x24e70060  addiu       $a3, $a3, 0x60
    ctx->pc = 0x2b0aecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 96));
label_2b0af0:
    // 0x2b0af0: 0x2628007c  addiu       $t0, $s1, 0x7C
    ctx->pc = 0x2b0af0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 124));
label_2b0af4:
    // 0x2b0af4: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x2b0af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
label_2b0af8:
    // 0x2b0af8: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x2b0af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_2b0afc:
    // 0x2b0afc: 0xafa6007c  sw          $a2, 0x7C($sp)
    ctx->pc = 0x2b0afcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 6));
label_2b0b00:
    // 0x2b0b00: 0xafa700ac  sw          $a3, 0xAC($sp)
    ctx->pc = 0x2b0b00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 7));
label_2b0b04:
    // 0x2b0b04: 0xafa800b4  sw          $t0, 0xB4($sp)
    ctx->pc = 0x2b0b04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 8));
label_2b0b08:
    // 0x2b0b08: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x2b0b08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_2b0b0c:
    // 0x2b0b0c: 0x10600091  beqz        $v1, . + 4 + (0x91 << 2)
label_2b0b10:
    if (ctx->pc == 0x2B0B10u) {
        ctx->pc = 0x2B0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B0Cu;
        // 0x2b0b10: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B14u;
        goto label_2b0b14;
    }
    ctx->pc = 0x2B0B0Cu;
    {
        const bool branch_taken_0x2b0b0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B0Cu;
        // 0x2b0b10: 0xafa400c0  sw          $a0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b0c) {
            ctx->pc = 0x2B0D54u;
            goto label_2b0d54;
        }
    }
    ctx->pc = 0x2B0B14u;
label_2b0b14:
    // 0x2b0b14: 0x8e250064  lw          $a1, 0x64($s1)
    ctx->pc = 0x2b0b14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_2b0b18:
    // 0x2b0b18: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2b0b18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0b1c:
    // 0x2b0b1c: 0x31440003  andi        $a0, $t2, 0x3
    ctx->pc = 0x2b0b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
label_2b0b20:
    // 0x2b0b20: 0x1080003d  beqz        $a0, . + 4 + (0x3D << 2)
label_2b0b24:
    if (ctx->pc == 0x2B0B24u) {
        ctx->pc = 0x2B0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B20u;
        // 0x2b0b24: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B28u;
        goto label_2b0b28;
    }
    ctx->pc = 0x2B0B20u;
    {
        const bool branch_taken_0x2b0b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B20u;
        // 0x2b0b24: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b20) {
            ctx->pc = 0x2B0C18u;
            goto label_2b0c18;
        }
    }
    ctx->pc = 0x2B0B28u;
label_2b0b28:
    // 0x2b0b28: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x2b0b28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b0b2c:
    // 0x2b0b2c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_2b0b30:
    if (ctx->pc == 0x2B0B30u) {
        ctx->pc = 0x2B0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B2Cu;
        // 0x2b0b30: 0xc6e00064  lwc1        $f0, 0x64($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0B34u;
        goto label_2b0b34;
    }
    ctx->pc = 0x2B0B2Cu;
    {
        const bool branch_taken_0x2b0b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B0B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0B2Cu;
        // 0x2b0b30: 0xc6e00064  lwc1        $f0, 0x64($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0b2c) {
            ctx->pc = 0x2B0BD0u;
            goto label_2b0bd0;
        }
    }
    ctx->pc = 0x2B0B34u;
label_2b0b34:
    // 0x2b0b34: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x2b0b34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b0b38:
    // 0x2b0b38: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_2b0b3c:
    if (ctx->pc == 0x2B0B3Cu) {
        ctx->pc = 0x2B0B40u;
        goto label_2b0b40;
    }
    ctx->pc = 0x2B0B38u;
    {
        const bool branch_taken_0x2b0b38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b0b38) {
            ctx->pc = 0x2B0B88u;
            goto label_2b0b88;
        }
    }
    ctx->pc = 0x2B0B40u;
label_2b0b40:
    // 0x2b0b40: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x2b0b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2b0b44:
    // 0x2b0b44: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b0b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0b48:
    // 0x2b0b48: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b0b48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0b4c:
    // 0x2b0b4c: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b0b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b0b50:
    // 0x2b0b50: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0b50u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0b54:
    // 0x2b0b54: 0xc4a30008  lwc1        $f3, 0x8($a1)
    ctx->pc = 0x2b0b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b0b58:
    // 0x2b0b58: 0xc4a4000c  lwc1        $f4, 0xC($a1)
    ctx->pc = 0x2b0b58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b0b5c:
    // 0x2b0b5c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x2b0b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_2b0b60:
    // 0x2b0b60: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0b64:
    // 0x2b0b64: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0b64u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b0b68:
    // 0x2b0b68: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x2b0b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2b0b6c:
    // 0x2b0b6c: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0b70:
    // 0x2b0b70: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b0b70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2b0b74:
    // 0x2b0b74: 0xe4a30008  swc1        $f3, 0x8($a1)
    ctx->pc = 0x2b0b74u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_2b0b78:
    // 0x2b0b78: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0b78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0b7c:
    // 0x2b0b7c: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b0b7cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2b0b80:
    // 0x2b0b80: 0xe4a4000c  swc1        $f4, 0xC($a1)
    ctx->pc = 0x2b0b80u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
label_2b0b84:
    // 0x2b0b84: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0b84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0b88:
    // 0x2b0b88: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b0b88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2b0b8c:
    // 0x2b0b8c: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b0b8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0b90:
    // 0x2b0b90: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2b0b90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b0b94:
    // 0x2b0b94: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0b94u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0b98:
    // 0x2b0b98: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2b0b98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b0b9c:
    // 0x2b0b9c: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x2b0b9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b0ba0:
    // 0x2b0ba0: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b0ba0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b0ba4:
    // 0x2b0ba4: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0ba8:
    // 0x2b0ba8: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0ba8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b0bac:
    // 0x2b0bac: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2b0bacu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b0bb0:
    // 0x2b0bb0: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0bb4:
    // 0x2b0bb4: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b0bb4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2b0bb8:
    // 0x2b0bb8: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2b0bb8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b0bbc:
    // 0x2b0bbc: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0bbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0bc0:
    // 0x2b0bc0: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b0bc0u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2b0bc4:
    // 0x2b0bc4: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x2b0bc4u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2b0bc8:
    // 0x2b0bc8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2b0bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2b0bcc:
    // 0x2b0bcc: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0bccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0bd0:
    // 0x2b0bd0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b0bd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2b0bd4:
    // 0x2b0bd4: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b0bd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0bd8:
    // 0x2b0bd8: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x2b0bd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b0bdc:
    // 0x2b0bdc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0bdcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0be0:
    // 0x2b0be0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2b0be0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b0be4:
    // 0x2b0be4: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x2b0be4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b0be8:
    // 0x2b0be8: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x2b0be8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_2b0bec:
    // 0x2b0bec: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0becu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0bf0:
    // 0x2b0bf0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b0bf0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b0bf4:
    // 0x2b0bf4: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2b0bf4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_2b0bf8:
    // 0x2b0bf8: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0bfc:
    // 0x2b0bfc: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b0bfcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2b0c00:
    // 0x2b0c00: 0xe4630008  swc1        $f3, 0x8($v1)
    ctx->pc = 0x2b0c00u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_2b0c04:
    // 0x2b0c04: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c08:
    // 0x2b0c08: 0x46002100  add.s       $f4, $f4, $f0
    ctx->pc = 0x2b0c08u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2b0c0c:
    // 0x2b0c0c: 0xe464000c  swc1        $f4, 0xC($v1)
    ctx->pc = 0x2b0c0cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2b0c10:
    // 0x2b0c10: 0x12aa0050  beq         $s5, $t2, . + 4 + (0x50 << 2)
label_2b0c14:
    if (ctx->pc == 0x2B0C14u) {
        ctx->pc = 0x2B0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C10u;
        // 0x2b0c14: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0C18u;
        goto label_2b0c18;
    }
    ctx->pc = 0x2B0C10u;
    {
        const bool branch_taken_0x2b0c10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 10));
        ctx->pc = 0x2B0C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0C10u;
        // 0x2b0c14: 0x24630010  addiu       $v1, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0c10) {
            ctx->pc = 0x2B0D54u;
            goto label_2b0d54;
        }
    }
    ctx->pc = 0x2B0C18u;
label_2b0c18:
    // 0x2b0c18: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x2b0c18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c1c:
    // 0x2b0c1c: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2b0c1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c20:
    // 0x2b0c20: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2b0c20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c24:
    // 0x2b0c24: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2b0c24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c28:
    // 0x2b0c28: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2b0c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c2c:
    // 0x2b0c2c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2b0c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0c30:
    // 0x2b0c30: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0c30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c34:
    // 0x2b0c34: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x2b0c34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2b0c38:
    // 0x2b0c38: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b0c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c3c:
    // 0x2b0c3c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0c3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0c40:
    // 0x2b0c40: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2b0c40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b0c44:
    // 0x2b0c44: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x2b0c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c48:
    // 0x2b0c48: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0c48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c4c:
    // 0x2b0c4c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0c4cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0c50:
    // 0x2b0c50: 0xe4a10004  swc1        $f1, 0x4($a1)
    ctx->pc = 0x2b0c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_2b0c54:
    // 0x2b0c54: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x2b0c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c58:
    // 0x2b0c58: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c5c:
    // 0x2b0c5c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0c5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0c60:
    // 0x2b0c60: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x2b0c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_2b0c64:
    // 0x2b0c64: 0xc501000c  lwc1        $f1, 0xC($t0)
    ctx->pc = 0x2b0c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c68:
    // 0x2b0c68: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c6c:
    // 0x2b0c6c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0c6cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0c70:
    // 0x2b0c70: 0xe461000c  swc1        $f1, 0xC($v1)
    ctx->pc = 0x2b0c70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2b0c74:
    // 0x2b0c74: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c78:
    // 0x2b0c78: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2b0c78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c7c:
    // 0x2b0c7c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0c80:
    // 0x2b0c80: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x2b0c80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_2b0c84:
    // 0x2b0c84: 0xc4810014  lwc1        $f1, 0x14($a0)
    ctx->pc = 0x2b0c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c88:
    // 0x2b0c88: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c8c:
    // 0x2b0c8c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0c8cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0c90:
    // 0x2b0c90: 0xe4a10014  swc1        $f1, 0x14($a1)
    ctx->pc = 0x2b0c90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_2b0c94:
    // 0x2b0c94: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x2b0c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0c98:
    // 0x2b0c98: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0c98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0c9c:
    // 0x2b0c9c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0c9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0ca0:
    // 0x2b0ca0: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x2b0ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_2b0ca4:
    // 0x2b0ca4: 0xc501001c  lwc1        $f1, 0x1C($t0)
    ctx->pc = 0x2b0ca4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0ca8:
    // 0x2b0ca8: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0ca8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0cac:
    // 0x2b0cac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0cacu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0cb0:
    // 0x2b0cb0: 0xe461001c  swc1        $f1, 0x1C($v1)
    ctx->pc = 0x2b0cb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_2b0cb4:
    // 0x2b0cb4: 0xc4400020  lwc1        $f0, 0x20($v0)
    ctx->pc = 0x2b0cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0cb8:
    // 0x2b0cb8: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0cbc:
    // 0x2b0cbc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0cbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0cc0:
    // 0x2b0cc0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2b0cc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_2b0cc4:
    // 0x2b0cc4: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x2b0cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0cc8:
    // 0x2b0cc8: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0ccc:
    // 0x2b0ccc: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0cccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0cd0:
    // 0x2b0cd0: 0xe4a10024  swc1        $f1, 0x24($a1)
    ctx->pc = 0x2b0cd0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_2b0cd4:
    // 0x2b0cd4: 0xc4c00028  lwc1        $f0, 0x28($a2)
    ctx->pc = 0x2b0cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0cd8:
    // 0x2b0cd8: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0cdc:
    // 0x2b0cdc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0cdcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0ce0:
    // 0x2b0ce0: 0xe4e00028  swc1        $f0, 0x28($a3)
    ctx->pc = 0x2b0ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 40), bits); }
label_2b0ce4:
    // 0x2b0ce4: 0xc501002c  lwc1        $f1, 0x2C($t0)
    ctx->pc = 0x2b0ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0ce8:
    // 0x2b0ce8: 0xc6e00064  lwc1        $f0, 0x64($s7)
    ctx->pc = 0x2b0ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0cec:
    // 0x2b0cec: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b0cecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b0cf0:
    // 0x2b0cf0: 0xe461002c  swc1        $f1, 0x2C($v1)
    ctx->pc = 0x2b0cf0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_2b0cf4:
    // 0x2b0cf4: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0cf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0cf8:
    // 0x2b0cf8: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0cfc:
    // 0x2b0cfc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0cfcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0d00:
    // 0x2b0d00: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x2b0d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_2b0d04:
    // 0x2b0d04: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x2b0d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
label_2b0d08:
    // 0x2b0d08: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x2b0d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0d0c:
    // 0x2b0d0c: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0d10:
    // 0x2b0d10: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x2b0d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_2b0d14:
    // 0x2b0d14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0d14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0d18:
    // 0x2b0d18: 0xe4a00034  swc1        $f0, 0x34($a1)
    ctx->pc = 0x2b0d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 52), bits); }
label_2b0d1c:
    // 0x2b0d1c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x2b0d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2b0d20:
    // 0x2b0d20: 0xc4c00038  lwc1        $f0, 0x38($a2)
    ctx->pc = 0x2b0d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0d24:
    // 0x2b0d24: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0d28:
    // 0x2b0d28: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x2b0d28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_2b0d2c:
    // 0x2b0d2c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0d2cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0d30:
    // 0x2b0d30: 0xe4e00038  swc1        $f0, 0x38($a3)
    ctx->pc = 0x2b0d30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 56), bits); }
label_2b0d34:
    // 0x2b0d34: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2b0d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_2b0d38:
    // 0x2b0d38: 0xc500003c  lwc1        $f0, 0x3C($t0)
    ctx->pc = 0x2b0d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0d3c:
    // 0x2b0d3c: 0xc6e10064  lwc1        $f1, 0x64($s7)
    ctx->pc = 0x2b0d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0d40:
    // 0x2b0d40: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x2b0d40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_2b0d44:
    // 0x2b0d44: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2b0d44u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2b0d48:
    // 0x2b0d48: 0xe460003c  swc1        $f0, 0x3C($v1)
    ctx->pc = 0x2b0d48u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 60), bits); }
label_2b0d4c:
    // 0x2b0d4c: 0x16aaffb8  bne         $s5, $t2, . + 4 + (-0x48 << 2)
label_2b0d50:
    if (ctx->pc == 0x2B0D50u) {
        ctx->pc = 0x2B0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D4Cu;
        // 0x2b0d50: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0D54u;
        goto label_2b0d54;
    }
    ctx->pc = 0x2B0D4Cu;
    {
        const bool branch_taken_0x2b0d4c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 10));
        ctx->pc = 0x2B0D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D4Cu;
        // 0x2b0d50: 0x24630040  addiu       $v1, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0d4c) {
            ctx->pc = 0x2B0C30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0c30;
        }
    }
    ctx->pc = 0x2B0D54u;
label_2b0d54:
    // 0x2b0d54: 0xc6200124  lwc1        $f0, 0x124($s1)
    ctx->pc = 0x2b0d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0d58:
    // 0x2b0d58: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x2b0d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d5c:
    // 0x2b0d5c: 0x8fa800a8  lw          $t0, 0xA8($sp)
    ctx->pc = 0x2b0d5cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2b0d60:
    // 0x2b0d60: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x2b0d60u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d64:
    // 0x2b0d64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b0d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b0d68:
    // 0x2b0d68: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b0d68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b0d6c:
    // 0x2b0d6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b0d6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d70:
    // 0x2b0d70: 0xae200128  sw          $zero, 0x128($s1)
    ctx->pc = 0x2b0d70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 296), GPR_U32(ctx, 0));
label_2b0d74:
    // 0x2b0d74: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2b0d74u;
    ctx->f[12] = FPU_DIV_S(ctx, ctx->f[12], ctx->f[0]);
label_2b0d78:
    // 0x2b0d78: 0x8fa5008c  lw          $a1, 0x8C($sp)
    ctx->pc = 0x2b0d78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b0d7c:
    // 0x2b0d7c: 0x8fa60094  lw          $a2, 0x94($sp)
    ctx->pc = 0x2b0d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2b0d80:
    // 0x2b0d80: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2b0d80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2b0d84:
    // 0x2b0d84: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x2b0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b0d88:
    // 0x2b0d88: 0xc0b0418  jal         func_2C1060
label_2b0d8c:
    if (ctx->pc == 0x2B0D8Cu) {
        ctx->pc = 0x2B0D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D88u;
        // 0x2b0d8c: 0x8fa700a0  lw          $a3, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0D90u;
        goto label_2b0d90;
    }
    ctx->pc = 0x2B0D88u;
    SET_GPR_U32(ctx, 31, 0x2B0D90u);
    ctx->pc = 0x2B0D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D88u;
    // 0x2b0d8c: 0x8fa700a0  lw          $a3, 0xA0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C1060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2C1060u, 0x2B0D88u, 0x2B0D90u)) {
        return;
    }
    ctx->pc = 0x2B0D90u;
label_2b0d90:
    // 0x2b0d90: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2b0d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0d94:
    // 0x2b0d94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2b0d94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d98:
    // 0x2b0d98: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2b0d98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2b0d9c:
    // 0x2b0d9c: 0xc0ad75a  jal         func_2B5D68
label_2b0da0:
    if (ctx->pc == 0x2B0DA0u) {
        ctx->pc = 0x2B0DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0D9Cu;
        // 0x2b0da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DA4u;
        goto label_2b0da4;
    }
    ctx->pc = 0x2B0D9Cu;
    SET_GPR_U32(ctx, 31, 0x2B0DA4u);
    ctx->pc = 0x2B0DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B0D9Cu;
    // 0x2b0da0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5D68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B5D68u, 0x2B0D9Cu, 0x2B0DA4u)) {
        return;
    }
    ctx->pc = 0x2B0DA4u;
label_2b0da4:
    // 0x2b0da4: 0x8fa20198  lw          $v0, 0x198($sp)
    ctx->pc = 0x2b0da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
label_2b0da8:
    // 0x2b0da8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2b0da8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dac:
    // 0x2b0dac: 0xc62c0124  lwc1        $f12, 0x124($s1)
    ctx->pc = 0x2b0dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2b0db0:
    // 0x2b0db0: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2b0db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b0db4:
    // 0x2b0db4: 0x8faa0080  lw          $t2, 0x80($sp)
    ctx->pc = 0x2b0db4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2b0db8:
    // 0x2b0db8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2b0db8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dbc:
    // 0x2b0dbc: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b0dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b0dc0:
    // 0x2b0dc0: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x2b0dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0dc4:
    // 0x2b0dc4: 0x40f809  jalr        $v0
label_2b0dc8:
    if (ctx->pc == 0x2B0DC8u) {
        ctx->pc = 0x2B0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DC4u;
        // 0x2b0dc8: 0x8fa9008c  lw          $t1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DCCu;
        goto label_2b0dcc;
    }
    ctx->pc = 0x2B0DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B0DCCu);
        ctx->pc = 0x2B0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DC4u;
        // 0x2b0dc8: 0x8fa9008c  lw          $t1, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0DC4u, 0x2B0DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B0DCCu;
label_2b0dcc:
    // 0x2b0dcc: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2b0dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2b0dd0:
    // 0x2b0dd0: 0x10400087  beqz        $v0, . + 4 + (0x87 << 2)
label_2b0dd4:
    if (ctx->pc == 0x2B0DD4u) {
        ctx->pc = 0x2B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DD0u;
        // 0x2b0dd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0DD8u;
        goto label_2b0dd8;
    }
    ctx->pc = 0x2B0DD0u;
    {
        const bool branch_taken_0x2b0dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0DD0u;
        // 0x2b0dd4: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0dd0) {
            ctx->pc = 0x2B0FF0u;
            goto label_2b0ff0;
        }
    }
    ctx->pc = 0x2B0DD8u;
label_2b0dd8:
    // 0x2b0dd8: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x2b0dd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b0ddc:
    // 0x2b0ddc: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b0ddcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0de0:
    // 0x2b0de0: 0x8e27007c  lw          $a3, 0x7C($s1)
    ctx->pc = 0x2b0de0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
label_2b0de4:
    // 0x2b0de4: 0x33c20001  andi        $v0, $fp, 0x1
    ctx->pc = 0x2b0de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
label_2b0de8:
    // 0x2b0de8: 0x8e260070  lw          $a2, 0x70($s1)
    ctx->pc = 0x2b0de8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2b0dec:
    // 0x2b0dec: 0x8e250028  lw          $a1, 0x28($s1)
    ctx->pc = 0x2b0decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2b0df0:
    // 0x2b0df0: 0xe0602d  daddu       $t4, $a3, $zero
    ctx->pc = 0x2b0df0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b0df4:
    // 0x2b0df4: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x2b0df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2b0df8:
    // 0x2b0df8: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x2b0df8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0dfc:
    // 0x2b0dfc: 0x8d040088  lw          $a0, 0x88($t0)
    ctx->pc = 0x2b0dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 136)));
label_2b0e00:
    // 0x2b0e00: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x2b0e00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e04:
    // 0x2b0e04: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x2b0e04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e08:
    // 0x2b0e08: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2b0e0c:
    if (ctx->pc == 0x2B0E0Cu) {
        ctx->pc = 0x2B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E08u;
        // 0x2b0e0c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E10u;
        goto label_2b0e10;
    }
    ctx->pc = 0x2B0E08u;
    {
        const bool branch_taken_0x2b0e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E08u;
        // 0x2b0e0c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e08) {
            ctx->pc = 0x2B0E8Cu;
            goto label_2b0e8c;
        }
    }
    ctx->pc = 0x2B0E10u;
label_2b0e10:
    // 0x2b0e10: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b0e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0e14:
    // 0x2b0e14: 0x24ec0010  addiu       $t4, $a3, 0x10
    ctx->pc = 0x2b0e14u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_2b0e18:
    // 0x2b0e18: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x2b0e18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0e1c:
    // 0x2b0e1c: 0x24cb0010  addiu       $t3, $a2, 0x10
    ctx->pc = 0x2b0e1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2b0e20:
    // 0x2b0e20: 0x24aa0010  addiu       $t2, $a1, 0x10
    ctx->pc = 0x2b0e20u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_2b0e24:
    // 0x2b0e24: 0x24690010  addiu       $t1, $v1, 0x10
    ctx->pc = 0x2b0e24u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_2b0e28:
    // 0x2b0e28: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0e28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b0e2c:
    // 0x2b0e2c: 0x24880010  addiu       $t0, $a0, 0x10
    ctx->pc = 0x2b0e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2b0e30:
    // 0x2b0e30: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2b0e30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b0e34:
    // 0x2b0e34: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x2b0e34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2b0e38:
    // 0x2b0e38: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2b0e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0e3c:
    // 0x2b0e3c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2b0e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0e40:
    // 0x2b0e40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0e44:
    // 0x2b0e44: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x2b0e44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2b0e48:
    // 0x2b0e48: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b0e48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0e4c:
    // 0x2b0e4c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x2b0e4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0e50:
    // 0x2b0e50: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0e50u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b0e54:
    // 0x2b0e54: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x2b0e54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2b0e58:
    // 0x2b0e58: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2b0e58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0e5c:
    // 0x2b0e5c: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2b0e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0e60:
    // 0x2b0e60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0e60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0e64:
    // 0x2b0e64: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x2b0e64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2b0e68:
    // 0x2b0e68: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2b0e68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2b0e6c:
    // 0x2b0e6c: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x2b0e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_2b0e70:
    // 0x2b0e70: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x2b0e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_2b0e74:
    // 0x2b0e74: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x2b0e74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_2b0e78:
    // 0x2b0e78: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b0e78u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2b0e7c:
    // 0x2b0e7c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x2b0e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_2b0e80:
    // 0x2b0e80: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x2b0e80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_2b0e84:
    // 0x2b0e84: 0x13d5005a  beq         $fp, $s5, . + 4 + (0x5A << 2)
label_2b0e88:
    if (ctx->pc == 0x2B0E88u) {
        ctx->pc = 0x2B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E84u;
        // 0x2b0e88: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0E8Cu;
        goto label_2b0e8c;
    }
    ctx->pc = 0x2B0E84u;
    {
        const bool branch_taken_0x2b0e84 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 21));
        ctx->pc = 0x2B0E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0E84u;
        // 0x2b0e88: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0e84) {
            ctx->pc = 0x2B0FF0u;
            goto label_2b0ff0;
        }
    }
    ctx->pc = 0x2B0E8Cu;
label_2b0e8c:
    // 0x2b0e8c: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x2b0e8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e90:
    // 0x2b0e90: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2b0e90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e94:
    // 0x2b0e94: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x2b0e94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e98:
    // 0x2b0e98: 0x180102d  daddu       $v0, $t4, $zero
    ctx->pc = 0x2b0e98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_2b0e9c:
    // 0x2b0e9c: 0x160182d  daddu       $v1, $t3, $zero
    ctx->pc = 0x2b0e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ea0:
    // 0x2b0ea0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2b0ea0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ea4:
    // 0x2b0ea4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2b0ea4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ea8:
    // 0x2b0ea8: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2b0ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b0eac:
    // 0x2b0eac: 0xa0c82d  daddu       $t9, $a1, $zero
    ctx->pc = 0x2b0eacu;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0eb0:
    // 0x2b0eb0: 0xa0c02d  daddu       $t8, $a1, $zero
    ctx->pc = 0x2b0eb0u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0eb4:
    // 0x2b0eb4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2b0eb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b0eb8:
    // 0x2b0eb8: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x2b0eb8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ebc:
    // 0x2b0ebc: 0x80702d  daddu       $t6, $a0, $zero
    ctx->pc = 0x2b0ebcu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ec0:
    // 0x2b0ec0: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x2b0ec0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ec4:
    // 0x2b0ec4: 0x60602d  daddu       $t4, $v1, $zero
    ctx->pc = 0x2b0ec4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ec8:
    // 0x2b0ec8: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2b0ec8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ecc:
    // 0x2b0ecc: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2b0eccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ed0:
    // 0x2b0ed0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x2b0ed0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ed4:
    // 0x2b0ed4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b0ed4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b0ed8:
    // 0x2b0ed8: 0xc5a00000  lwc1        $f0, 0x0($t5)
    ctx->pc = 0x2b0ed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0edc:
    // 0x2b0edc: 0x26b50002  addiu       $s5, $s5, 0x2
    ctx->pc = 0x2b0edcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_2b0ee0:
    // 0x2b0ee0: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x2b0ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0ee4:
    // 0x2b0ee4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0ee4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b0ee8:
    // 0x2b0ee8: 0xe6410000  swc1        $f1, 0x0($s2)
    ctx->pc = 0x2b0ee8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2b0eec:
    // 0x2b0eec: 0xc5c10004  lwc1        $f1, 0x4($t6)
    ctx->pc = 0x2b0eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0ef0:
    // 0x2b0ef0: 0xc7000004  lwc1        $f0, 0x4($t8)
    ctx->pc = 0x2b0ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0ef4:
    // 0x2b0ef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0ef8:
    // 0x2b0ef8: 0xe6600004  swc1        $f0, 0x4($s3)
    ctx->pc = 0x2b0ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4), bits); }
label_2b0efc:
    // 0x2b0efc: 0xc5e00008  lwc1        $f0, 0x8($t7)
    ctx->pc = 0x2b0efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f00:
    // 0x2b0f00: 0xc7210008  lwc1        $f1, 0x8($t9)
    ctx->pc = 0x2b0f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f04:
    // 0x2b0f04: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b0f04u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b0f08:
    // 0x2b0f08: 0xe6810008  swc1        $f1, 0x8($s4)
    ctx->pc = 0x2b0f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 8), bits); }
label_2b0f0c:
    // 0x2b0f0c: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2b0f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f10:
    // 0x2b0f10: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b0f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f14:
    // 0x2b0f14: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0f14u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0f18:
    // 0x2b0f18: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x2b0f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2b0f1c:
    // 0x2b0f1c: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x2b0f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
label_2b0f20:
    // 0x2b0f20: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x2b0f20u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
label_2b0f24:
    // 0x2b0f24: 0xad800008  sw          $zero, 0x8($t4)
    ctx->pc = 0x2b0f24u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 0));
label_2b0f28:
    // 0x2b0f28: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x2b0f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
label_2b0f2c:
    // 0x2b0f2c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2b0f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_2b0f30:
    // 0x2b0f30: 0xad000004  sw          $zero, 0x4($t0)
    ctx->pc = 0x2b0f30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 0));
label_2b0f34:
    // 0x2b0f34: 0xad200008  sw          $zero, 0x8($t1)
    ctx->pc = 0x2b0f34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 0));
label_2b0f38:
    // 0x2b0f38: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b0f38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2b0f3c:
    // 0x2b0f3c: 0xc5a10010  lwc1        $f1, 0x10($t5)
    ctx->pc = 0x2b0f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f40:
    // 0x2b0f40: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x2b0f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f44:
    // 0x2b0f44: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x2b0f44u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
label_2b0f48:
    // 0x2b0f48: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x2b0f48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_2b0f4c:
    // 0x2b0f4c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0f4cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0f50:
    // 0x2b0f50: 0xe6400010  swc1        $f0, 0x10($s2)
    ctx->pc = 0x2b0f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 16), bits); }
label_2b0f54:
    // 0x2b0f54: 0x26520020  addiu       $s2, $s2, 0x20
    ctx->pc = 0x2b0f54u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_2b0f58:
    // 0x2b0f58: 0xc5c10014  lwc1        $f1, 0x14($t6)
    ctx->pc = 0x2b0f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 14), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f5c:
    // 0x2b0f5c: 0xc7000014  lwc1        $f0, 0x14($t8)
    ctx->pc = 0x2b0f5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f60:
    // 0x2b0f60: 0x25ce0020  addiu       $t6, $t6, 0x20
    ctx->pc = 0x2b0f60u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 32));
label_2b0f64:
    // 0x2b0f64: 0x27180020  addiu       $t8, $t8, 0x20
    ctx->pc = 0x2b0f64u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 32));
label_2b0f68:
    // 0x2b0f68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0f68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0f6c:
    // 0x2b0f6c: 0xe6600014  swc1        $f0, 0x14($s3)
    ctx->pc = 0x2b0f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 20), bits); }
label_2b0f70:
    // 0x2b0f70: 0x26730020  addiu       $s3, $s3, 0x20
    ctx->pc = 0x2b0f70u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_2b0f74:
    // 0x2b0f74: 0xc5e10018  lwc1        $f1, 0x18($t7)
    ctx->pc = 0x2b0f74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f78:
    // 0x2b0f78: 0xc7200018  lwc1        $f0, 0x18($t9)
    ctx->pc = 0x2b0f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 25), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f7c:
    // 0x2b0f7c: 0x25ef0020  addiu       $t7, $t7, 0x20
    ctx->pc = 0x2b0f7cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 32));
label_2b0f80:
    // 0x2b0f80: 0x27390020  addiu       $t9, $t9, 0x20
    ctx->pc = 0x2b0f80u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 32));
label_2b0f84:
    // 0x2b0f84: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0f84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0f88:
    // 0x2b0f88: 0xe6800018  swc1        $f0, 0x18($s4)
    ctx->pc = 0x2b0f88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 24), bits); }
label_2b0f8c:
    // 0x2b0f8c: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x2b0f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2b0f90:
    // 0x2b0f90: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x2b0f90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b0f94:
    // 0x2b0f94: 0xc481001c  lwc1        $f1, 0x1C($a0)
    ctx->pc = 0x2b0f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b0f98:
    // 0x2b0f98: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2b0f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2b0f9c:
    // 0x2b0f9c: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2b0f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2b0fa0:
    // 0x2b0fa0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2b0fa0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2b0fa4:
    // 0x2b0fa4: 0xe4c0001c  swc1        $f0, 0x1C($a2)
    ctx->pc = 0x2b0fa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_2b0fa8:
    // 0x2b0fa8: 0xad400010  sw          $zero, 0x10($t2)
    ctx->pc = 0x2b0fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 0));
label_2b0fac:
    // 0x2b0fac: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2b0facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2b0fb0:
    // 0x2b0fb0: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x2b0fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
label_2b0fb4:
    // 0x2b0fb4: 0x254a0020  addiu       $t2, $t2, 0x20
    ctx->pc = 0x2b0fb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_2b0fb8:
    // 0x2b0fb8: 0xad800018  sw          $zero, 0x18($t4)
    ctx->pc = 0x2b0fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 24), GPR_U32(ctx, 0));
label_2b0fbc:
    // 0x2b0fbc: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x2b0fbcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
label_2b0fc0:
    // 0x2b0fc0: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x2b0fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_2b0fc4:
    // 0x2b0fc4: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x2b0fc4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
label_2b0fc8:
    // 0x2b0fc8: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x2b0fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_2b0fcc:
    // 0x2b0fcc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x2b0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_2b0fd0:
    // 0x2b0fd0: 0xad000014  sw          $zero, 0x14($t0)
    ctx->pc = 0x2b0fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 0));
label_2b0fd4:
    // 0x2b0fd4: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x2b0fd4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
label_2b0fd8:
    // 0x2b0fd8: 0xad200018  sw          $zero, 0x18($t1)
    ctx->pc = 0x2b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 0));
label_2b0fdc:
    // 0x2b0fdc: 0x25080020  addiu       $t0, $t0, 0x20
    ctx->pc = 0x2b0fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
label_2b0fe0:
    // 0x2b0fe0: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x2b0fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_2b0fe4:
    // 0x2b0fe4: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x2b0fe4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
label_2b0fe8:
    // 0x2b0fe8: 0x16beffbb  bne         $s5, $fp, . + 4 + (-0x45 << 2)
label_2b0fec:
    if (ctx->pc == 0x2B0FECu) {
        ctx->pc = 0x2B0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FE8u;
        // 0x2b0fec: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B0FF0u;
        goto label_2b0ff0;
    }
    ctx->pc = 0x2B0FE8u;
    {
        const bool branch_taken_0x2b0fe8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 30));
        ctx->pc = 0x2B0FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0FE8u;
        // 0x2b0fec: 0x24420020  addiu       $v0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0fe8) {
            ctx->pc = 0x2B0ED8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b0ed8;
        }
    }
    ctx->pc = 0x2B0FF0u;
label_2b0ff0:
    // 0x2b0ff0: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x2b0ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
label_2b0ff4:
    // 0x2b0ff4: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x2b0ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b0ff8:
    // 0x2b0ff8: 0x8fa600a4  lw          $a2, 0xA4($sp)
    ctx->pc = 0x2b0ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 164)));
label_2b0ffc:
    // 0x2b0ffc: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x2b0ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_2b1000:
    // 0x2b1000: 0xc6e0005c  lwc1        $f0, 0x5C($s7)
    ctx->pc = 0x2b1000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1004:
    // 0x2b1004: 0x8fa2019c  lw          $v0, 0x19C($sp)
    ctx->pc = 0x2b1004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2b1008:
    // 0x2b1008: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2b1008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b100c:
    // 0x2b100c: 0x8faa0088  lw          $t2, 0x88($sp)
    ctx->pc = 0x2b100cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b1010:
    // 0x2b1010: 0x8fab0094  lw          $t3, 0x94($sp)
    ctx->pc = 0x2b1010u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2b1014:
    // 0x2b1014: 0xe6200140  swc1        $f0, 0x140($s1)
    ctx->pc = 0x2b1014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_2b1018:
    // 0x2b1018: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x2b1018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_2b101c:
    // 0x2b101c: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x2b101cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
label_2b1020:
    // 0x2b1020: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2b1020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2b1024:
    // 0x2b1024: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2b1024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2b1028:
    // 0x2b1028: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2b1028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2b102c:
    // 0x2b102c: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x2b102cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2b1030:
    // 0x2b1030: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2b1030u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2b1034:
    // 0x2b1034: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x2b1034u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b1038:
    // 0x2b1038: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2b1038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2b103c:
    // 0x2b103c: 0xaf808fb4  sw          $zero, -0x704C($gp)
    ctx->pc = 0x2b103cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938548), GPR_U32(ctx, 0));
label_2b1040:
    // 0x2b1040: 0x8fa9008c  lw          $t1, 0x8C($sp)
    ctx->pc = 0x2b1040u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1044:
    // 0x2b1044: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2b1044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2b1048:
    // 0x2b1048: 0x60f809  jalr        $v1
label_2b104c:
    if (ctx->pc == 0x2B104Cu) {
        ctx->pc = 0x2B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1048u;
        // 0x2b104c: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1050u;
        goto label_2b1050;
    }
    ctx->pc = 0x2B1048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B1050u);
        ctx->pc = 0x2B104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1048u;
        // 0x2b104c: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1048u, 0x2B1050u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B1050u;
label_2b1050:
    // 0x2b1050: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b1050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2b1054:
    // 0x2b1054: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2b1054u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b1058:
    // 0x2b1058: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b1058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b105c:
    // 0x2b105c: 0x68a6001f  ldl         $a2, 0x1F($a1)
    ctx->pc = 0x2b105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b1060:
    // 0x2b1060: 0x6ca60018  ldr         $a2, 0x18($a1)
    ctx->pc = 0x2b1060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b1064:
    // 0x2b1064: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x2b1064u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2b1068:
    // 0x2b1068: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x2b1068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b106c:
    // 0x2b106c: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x2b106cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1070:
    // 0x2b1070: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x2b1070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_2b1074:
    // 0x2b1074: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_2b1078:
    if (ctx->pc == 0x2B1078u) {
        ctx->pc = 0x2B1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1074u;
        // 0x2b1078: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B107Cu;
        goto label_2b107c;
    }
    ctx->pc = 0x2B1074u;
    {
        const bool branch_taken_0x2b1074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1074u;
        // 0x2b1078: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1074) {
            ctx->pc = 0x2B1264u;
            goto label_2b1264;
        }
    }
    ctx->pc = 0x2B107Cu;
label_2b107c:
    // 0x2b107c: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2b107cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1080:
    // 0x2b1080: 0x40682d  daddu       $t5, $v0, $zero
    ctx->pc = 0x2b1080u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b1084:
    // 0x2b1084: 0x8fa70060  lw          $a3, 0x60($sp)
    ctx->pc = 0x2b1084u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2b1088:
    // 0x2b1088: 0x31a30003  andi        $v1, $t5, 0x3
    ctx->pc = 0x2b1088u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)3);
label_2b108c:
    // 0x2b108c: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x2b108cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b1090:
    // 0x2b1090: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2b1090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b1094:
    // 0x2b1094: 0x8fab0030  lw          $t3, 0x30($sp)
    ctx->pc = 0x2b1094u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2b1098:
    // 0x2b1098: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2b1098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b109c:
    // 0x2b109c: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
label_2b10a0:
    if (ctx->pc == 0x2B10A0u) {
        ctx->pc = 0x2B10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B109Cu;
        // 0x2b10a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B10A4u;
        goto label_2b10a4;
    }
    ctx->pc = 0x2B109Cu;
    {
        const bool branch_taken_0x2b109c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B10A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B109Cu;
        // 0x2b10a0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b109c) {
            ctx->pc = 0x2B1174u;
            goto label_2b1174;
        }
    }
    ctx->pc = 0x2B10A4u;
label_2b10a4:
    // 0x2b10a4: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2b10a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b10a8:
    // 0x2b10a8: 0x54400023  bnel        $v0, $zero, . + 4 + (0x23 << 2)
label_2b10ac:
    if (ctx->pc == 0x2B10ACu) {
        ctx->pc = 0x2B10ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10A8u;
        // 0x2b10ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B10B0u;
        goto label_2b10b0;
    }
    ctx->pc = 0x2B10A8u;
    {
        const bool branch_taken_0x2b10a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b10a8) {
            ctx->pc = 0x2B10ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10A8u;
            // 0x2b10ac: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1138u;
            goto label_2b1138;
        }
    }
    ctx->pc = 0x2B10B0u;
label_2b10b0:
    // 0x2b10b0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x2b10b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_2b10b4:
    // 0x2b10b4: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2b10b8:
    if (ctx->pc == 0x2B10B8u) {
        ctx->pc = 0x2B10B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B10B4u;
        // 0x2b10b8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B10BCu;
        goto label_2b10bc;
    }
    ctx->pc = 0x2B10B4u;
    {
        const bool branch_taken_0x2b10b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b10b4) {
            ctx->pc = 0x2B10B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B10B4u;
            // 0x2b10b8: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B10FCu;
            goto label_2b10fc;
        }
    }
    ctx->pc = 0x2B10BCu;
label_2b10bc:
    // 0x2b10bc: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2b10bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b10c0:
    // 0x2b10c0: 0x24c40010  addiu       $a0, $a2, 0x10
    ctx->pc = 0x2b10c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
label_2b10c4:
    // 0x2b10c4: 0x24a70004  addiu       $a3, $a1, 0x4
    ctx->pc = 0x2b10c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2b10c8:
    // 0x2b10c8: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2b10c8u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b10cc:
    // 0x2b10cc: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b10ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b10d0:
    // 0x2b10d0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b10d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b10d4:
    // 0x2b10d4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2b10d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2b10d8:
    // 0x2b10d8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b10d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b10dc:
    // 0x2b10dc: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b10dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2b10e0:
    // 0x2b10e0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b10e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b10e4:
    // 0x2b10e4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2b10e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
label_2b10e8:
    // 0x2b10e8: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2b10e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b10ec:
    // 0x2b10ec: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x2b10ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
label_2b10f0:
    // 0x2b10f0: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2b10f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b10f4:
    // 0x2b10f4: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2b10f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2b10f8:
    // 0x2b10f8: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2b10f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b10fc:
    // 0x2b10fc: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2b10fcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2b1100:
    // 0x2b1100: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b1100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2b1104:
    // 0x2b1104: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b1104u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b1108:
    // 0x2b1108: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b1108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b110c:
    // 0x2b110c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2b110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2b1110:
    // 0x2b1110: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b1110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1114:
    // 0x2b1114: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b1114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2b1118:
    // 0x2b1118: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b1118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b111c:
    // 0x2b111c: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b111cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2b1120:
    // 0x2b1120: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2b1120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1124:
    // 0x2b1124: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b1124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2b1128:
    // 0x2b1128: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2b1128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b112c:
    // 0x2b112c: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b112cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2b1130:
    // 0x2b1130: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2b1130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_2b1134:
    // 0x2b1134: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x2b1134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2b1138:
    // 0x2b1138: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x2b1138u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_2b113c:
    // 0x2b113c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x2b113cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_2b1140:
    // 0x2b1140: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b1140u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b1144:
    // 0x2b1144: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b1144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b1148:
    // 0x2b1148: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2b1148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2b114c:
    // 0x2b114c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b114cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1150:
    // 0x2b1150: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2b1150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2b1154:
    // 0x2b1154: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b1154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1158:
    // 0x2b1158: 0xe4810004  swc1        $f1, 0x4($a0)
    ctx->pc = 0x2b1158u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_2b115c:
    // 0x2b115c: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2b115cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1160:
    // 0x2b1160: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x2b1160u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2b1164:
    // 0x2b1164: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2b1164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1168:
    // 0x2b1168: 0xe481000c  swc1        $f1, 0xC($a0)
    ctx->pc = 0x2b1168u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_2b116c:
    // 0x2b116c: 0x118d003d  beq         $t4, $t5, . + 4 + (0x3D << 2)
label_2b1170:
    if (ctx->pc == 0x2B1170u) {
        ctx->pc = 0x2B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B116Cu;
        // 0x2b1170: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1174u;
        goto label_2b1174;
    }
    ctx->pc = 0x2B116Cu;
    {
        const bool branch_taken_0x2b116c = (GPR_U64(ctx, 12) == GPR_U64(ctx, 13));
        ctx->pc = 0x2B1170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B116Cu;
        // 0x2b1170: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b116c) {
            ctx->pc = 0x2B1264u;
            goto label_2b1264;
        }
    }
    ctx->pc = 0x2B1174u;
label_2b1174:
    // 0x2b1174: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2b1174u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b1178:
    // 0x2b1178: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x2b1178u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b117c:
    // 0x2b117c: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x2b117cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b1180:
    // 0x2b1180: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x2b1180u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b1184:
    // 0x2b1184: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x2b1184u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b1188:
    // 0x2b1188: 0x8d420000  lw          $v0, 0x0($t2)
    ctx->pc = 0x2b1188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
label_2b118c:
    // 0x2b118c: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x2b118cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
label_2b1190:
    // 0x2b1190: 0x8d430004  lw          $v1, 0x4($t2)
    ctx->pc = 0x2b1190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4)));
label_2b1194:
    // 0x2b1194: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x2b1194u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_2b1198:
    // 0x2b1198: 0x8d440008  lw          $a0, 0x8($t2)
    ctx->pc = 0x2b1198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
label_2b119c:
    // 0x2b119c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2b119cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2b11a0:
    // 0x2b11a0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x2b11a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
label_2b11a4:
    // 0x2b11a4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x2b11a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
label_2b11a8:
    // 0x2b11a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b11a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b11ac:
    // 0x2b11ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b11acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b11b0:
    // 0x2b11b0: 0x6b1821  addu        $v1, $v1, $t3
    ctx->pc = 0x2b11b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
label_2b11b4:
    // 0x2b11b4: 0x42082  srl         $a0, $a0, 2
    ctx->pc = 0x2b11b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 2));
label_2b11b8:
    // 0x2b11b8: 0x8d45000c  lw          $a1, 0xC($t2)
    ctx->pc = 0x2b11b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
label_2b11bc:
    // 0x2b11bc: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x2b11bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_2b11c0:
    // 0x2b11c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2b11c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_2b11c4:
    // 0x2b11c4: 0x8b2021  addu        $a0, $a0, $t3
    ctx->pc = 0x2b11c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_2b11c8:
    // 0x2b11c8: 0x52882  srl         $a1, $a1, 2
    ctx->pc = 0x2b11c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
label_2b11cc:
    // 0x2b11cc: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2b11ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b11d0:
    // 0x2b11d0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x2b11d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_2b11d4:
    // 0x2b11d4: 0xab2821  addu        $a1, $a1, $t3
    ctx->pc = 0x2b11d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
label_2b11d8:
    // 0x2b11d8: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x2b11d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_2b11dc:
    // 0x2b11dc: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x2b11dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_2b11e0:
    // 0x2b11e0: 0xc4400018  lwc1        $f0, 0x18($v0)
    ctx->pc = 0x2b11e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b11e4:
    // 0x2b11e4: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x2b11e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_2b11e8:
    // 0x2b11e8: 0xc4410024  lwc1        $f1, 0x24($v0)
    ctx->pc = 0x2b11e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b11ec:
    // 0x2b11ec: 0xe4c1000c  swc1        $f1, 0xC($a2)
    ctx->pc = 0x2b11ecu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_2b11f0:
    // 0x2b11f0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b11f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b11f4:
    // 0x2b11f4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x2b11f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_2b11f8:
    // 0x2b11f8: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x2b11f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b11fc:
    // 0x2b11fc: 0xe5010014  swc1        $f1, 0x14($t0)
    ctx->pc = 0x2b11fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 20), bits); }
label_2b1200:
    // 0x2b1200: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x2b1200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1204:
    // 0x2b1204: 0xe5200018  swc1        $f0, 0x18($t1)
    ctx->pc = 0x2b1204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_2b1208:
    // 0x2b1208: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x2b1208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b120c:
    // 0x2b120c: 0xe4c1001c  swc1        $f1, 0x1C($a2)
    ctx->pc = 0x2b120cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
label_2b1210:
    // 0x2b1210: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2b1210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1214:
    // 0x2b1214: 0xe4e00020  swc1        $f0, 0x20($a3)
    ctx->pc = 0x2b1214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_2b1218:
    // 0x2b1218: 0xc481000c  lwc1        $f1, 0xC($a0)
    ctx->pc = 0x2b1218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b121c:
    // 0x2b121c: 0xe5010024  swc1        $f1, 0x24($t0)
    ctx->pc = 0x2b121cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 36), bits); }
label_2b1220:
    // 0x2b1220: 0xc4800018  lwc1        $f0, 0x18($a0)
    ctx->pc = 0x2b1220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1224:
    // 0x2b1224: 0xe5200028  swc1        $f0, 0x28($t1)
    ctx->pc = 0x2b1224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 40), bits); }
label_2b1228:
    // 0x2b1228: 0xc4810024  lwc1        $f1, 0x24($a0)
    ctx->pc = 0x2b1228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b122c:
    // 0x2b122c: 0xe4c1002c  swc1        $f1, 0x2C($a2)
    ctx->pc = 0x2b122cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 44), bits); }
label_2b1230:
    // 0x2b1230: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x2b1230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1234:
    // 0x2b1234: 0xe4e00030  swc1        $f0, 0x30($a3)
    ctx->pc = 0x2b1234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 48), bits); }
label_2b1238:
    // 0x2b1238: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x2b1238u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_2b123c:
    // 0x2b123c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x2b123cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1240:
    // 0x2b1240: 0xe5000034  swc1        $f0, 0x34($t0)
    ctx->pc = 0x2b1240u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 52), bits); }
label_2b1244:
    // 0x2b1244: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x2b1244u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_2b1248:
    // 0x2b1248: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2b1248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b124c:
    // 0x2b124c: 0xe5200038  swc1        $f0, 0x38($t1)
    ctx->pc = 0x2b124cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 56), bits); }
label_2b1250:
    // 0x2b1250: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x2b1250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1254:
    // 0x2b1254: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x2b1254u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
label_2b1258:
    // 0x2b1258: 0xe4c1003c  swc1        $f1, 0x3C($a2)
    ctx->pc = 0x2b1258u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
label_2b125c:
    // 0x2b125c: 0x158dffca  bne         $t4, $t5, . + 4 + (-0x36 << 2)
label_2b1260:
    if (ctx->pc == 0x2B1260u) {
        ctx->pc = 0x2B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B125Cu;
        // 0x2b1260: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1264u;
        goto label_2b1264;
    }
    ctx->pc = 0x2B125Cu;
    {
        const bool branch_taken_0x2b125c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 13));
        ctx->pc = 0x2B1260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B125Cu;
        // 0x2b1260: 0x24c60040  addiu       $a2, $a2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b125c) {
            ctx->pc = 0x2B1188u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1188;
        }
    }
    ctx->pc = 0x2B1264u;
label_2b1264:
    // 0x2b1264: 0x8fa80060  lw          $t0, 0x60($sp)
    ctx->pc = 0x2b1264u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2b1268:
    // 0x2b1268: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x2b1268u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b126c:
    // 0x2b126c: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2b126cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2b1270:
    // 0x2b1270: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x2b1270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_2b1274:
    // 0x2b1274: 0x8fa5007c  lw          $a1, 0x7C($sp)
    ctx->pc = 0x2b1274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2b1278:
    // 0x2b1278: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2b1278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2b127c:
    // 0x2b127c: 0xc6e00060  lwc1        $f0, 0x60($s7)
    ctx->pc = 0x2b127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1280:
    // 0x2b1280: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x2b1280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_2b1284:
    // 0x2b1284: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2b1284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2b1288:
    // 0x2b1288: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x2b1288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
label_2b128c:
    // 0x2b128c: 0x8fa600ac  lw          $a2, 0xAC($sp)
    ctx->pc = 0x2b128cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2b1290:
    // 0x2b1290: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x2b1290u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2b1294:
    // 0x2b1294: 0x8fa80068  lw          $t0, 0x68($sp)
    ctx->pc = 0x2b1294u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2b1298:
    // 0x2b1298: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2b1298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_2b129c:
    // 0x2b129c: 0x8faa00a0  lw          $t2, 0xA0($sp)
    ctx->pc = 0x2b129cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2b12a0:
    // 0x2b12a0: 0xae220138  sw          $v0, 0x138($s1)
    ctx->pc = 0x2b12a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 312), GPR_U32(ctx, 2));
label_2b12a4:
    // 0x2b12a4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x2b12a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
label_2b12a8:
    // 0x2b12a8: 0x8fab00a8  lw          $t3, 0xA8($sp)
    ctx->pc = 0x2b12a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
label_2b12ac:
    // 0x2b12ac: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x2b12acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_2b12b0:
    // 0x2b12b0: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2b12b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2b12b4:
    // 0x2b12b4: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x2b12b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b12b8:
    // 0x2b12b8: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x2b12b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_2b12bc:
    // 0x2b12bc: 0x8fa9008c  lw          $t1, 0x8C($sp)
    ctx->pc = 0x2b12bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b12c0:
    // 0x2b12c0: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x2b12c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_2b12c4:
    // 0x2b12c4: 0xe6200140  swc1        $f0, 0x140($s1)
    ctx->pc = 0x2b12c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 320), bits); }
label_2b12c8:
    // 0x2b12c8: 0xaf8c8fb4  sw          $t4, -0x704C($gp)
    ctx->pc = 0x2b12c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938548), GPR_U32(ctx, 12));
label_2b12cc:
    // 0x2b12cc: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x2b12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
label_2b12d0:
    // 0x2b12d0: 0x60f809  jalr        $v1
label_2b12d4:
    if (ctx->pc == 0x2B12D4u) {
        ctx->pc = 0x2B12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12D0u;
        // 0x2b12d4: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B12D8u;
        goto label_2b12d8;
    }
    ctx->pc = 0x2B12D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2B12D8u);
        ctx->pc = 0x2B12D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B12D0u;
        // 0x2b12d4: 0xafb10010  sw          $s1, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B12D0u, 0x2B12D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B12D8u;
label_2b12d8:
    // 0x2b12d8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b12dc:
    // 0x2b12dc: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x2b12dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b12e0:
    // 0x2b12e0: 0x6ac4004f  ldl         $a0, 0x4F($s6)
    ctx->pc = 0x2b12e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b12e4:
    // 0x2b12e4: 0x6ec40048  ldr         $a0, 0x48($s6)
    ctx->pc = 0x2b12e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b12e8:
    // 0x2b12e8: 0x8fa60090  lw          $a2, 0x90($sp)
    ctx->pc = 0x2b12e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2b12ec:
    // 0x2b12ec: 0x6ac80037  ldl         $t0, 0x37($s6)
    ctx->pc = 0x2b12ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b12f0:
    // 0x2b12f0: 0x6ec80030  ldr         $t0, 0x30($s6)
    ctx->pc = 0x2b12f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b12f4:
    // 0x2b12f4: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x2b12f4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b12f8:
    // 0x2b12f8: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x2b12f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2b12fc:
    // 0x2b12fc: 0x8faa00c0  lw          $t2, 0xC0($sp)
    ctx->pc = 0x2b12fcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2b1300:
    // 0x2b1300: 0x8fab0074  lw          $t3, 0x74($sp)
    ctx->pc = 0x2b1300u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2b1304:
    // 0x2b1304: 0xc0ad4fa  jal         func_2B53E8
label_2b1308:
    if (ctx->pc == 0x2B1308u) {
        ctx->pc = 0x2B1308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1304u;
        // 0x2b1308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B130Cu;
        goto label_2b130c;
    }
    ctx->pc = 0x2B1304u;
    SET_GPR_U32(ctx, 31, 0x2B130Cu);
    ctx->pc = 0x2B1308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1304u;
    // 0x2b1308: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B53E8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B53E8u, 0x2B1304u, 0x2B130Cu)) {
        return;
    }
    ctx->pc = 0x2B130Cu;
label_2b130c:
    // 0x2b130c: 0x6ac40047  ldl         $a0, 0x47($s6)
    ctx->pc = 0x2b130cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b1310:
    // 0x2b1310: 0x6ec40040  ldr         $a0, 0x40($s6)
    ctx->pc = 0x2b1310u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b1314:
    // 0x2b1314: 0x8fa7008c  lw          $a3, 0x8C($sp)
    ctx->pc = 0x2b1314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2b1318:
    // 0x2b1318: 0x6ac6004f  ldl         $a2, 0x4F($s6)
    ctx->pc = 0x2b1318u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 79); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b131c:
    // 0x2b131c: 0x6ec60048  ldr         $a2, 0x48($s6)
    ctx->pc = 0x2b131cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 72); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b1320:
    // 0x2b1320: 0xc0ae088  jal         func_2B8220
label_2b1324:
    if (ctx->pc == 0x2B1324u) {
        ctx->pc = 0x2B1324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1320u;
        // 0x2b1324: 0x8fa50084  lw          $a1, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1328u;
        goto label_2b1328;
    }
    ctx->pc = 0x2B1320u;
    SET_GPR_U32(ctx, 31, 0x2B1328u);
    ctx->pc = 0x2B1324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1320u;
    // 0x2b1324: 0x8fa50084  lw          $a1, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B8220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B8220u, 0x2B1320u, 0x2B1328u)) {
        return;
    }
    ctx->pc = 0x2B1328u;
label_2b1328:
    // 0x2b1328: 0x6ac40007  ldl         $a0, 0x7($s6)
    ctx->pc = 0x2b1328u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b132c:
    // 0x2b132c: 0x6ec40000  ldr         $a0, 0x0($s6)
    ctx->pc = 0x2b132cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b1330:
    // 0x2b1330: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b1330u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b1334:
    // 0x2b1334: 0x6ac50017  ldl         $a1, 0x17($s6)
    ctx->pc = 0x2b1334u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2b1338:
    // 0x2b1338: 0x6ec50010  ldr         $a1, 0x10($s6)
    ctx->pc = 0x2b1338u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b133c:
    // 0x2b133c: 0x6ac70057  ldl         $a3, 0x57($s6)
    ctx->pc = 0x2b133cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b1340:
    // 0x2b1340: 0x6ec70050  ldr         $a3, 0x50($s6)
    ctx->pc = 0x2b1340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b1344:
    // 0x2b1344: 0x6ac8001f  ldl         $t0, 0x1F($s6)
    ctx->pc = 0x2b1344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2b1348:
    // 0x2b1348: 0x6ec80018  ldr         $t0, 0x18($s6)
    ctx->pc = 0x2b1348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2b134c:
    // 0x2b134c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2b134cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2b1350:
    // 0x2b1350: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2b1350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2b1354:
    // 0x2b1354: 0xc0afa32  jal         func_2BE8C8
label_2b1358:
    if (ctx->pc == 0x2B1358u) {
        ctx->pc = 0x2B1358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1354u;
        // 0x2b1358: 0x8fa60084  lw          $a2, 0x84($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B135Cu;
        goto label_2b135c;
    }
    ctx->pc = 0x2B1354u;
    SET_GPR_U32(ctx, 31, 0x2B135Cu);
    ctx->pc = 0x2B1358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1354u;
    // 0x2b1358: 0x8fa60084  lw          $a2, 0x84($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BE8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BE8C8u, 0x2B1354u, 0x2B135Cu)) {
        return;
    }
    ctx->pc = 0x2B135Cu;
label_2b135c:
    // 0x2b135c: 0x6ac4000f  ldl         $a0, 0xF($s6)
    ctx->pc = 0x2b135cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2b1360:
    // 0x2b1360: 0x6ec40008  ldr         $a0, 0x8($s6)
    ctx->pc = 0x2b1360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2b1364:
    // 0x2b1364: 0x6ac50047  ldl         $a1, 0x47($s6)
    ctx->pc = 0x2b1364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_2b1368:
    // 0x2b1368: 0x6ec50040  ldr         $a1, 0x40($s6)
    ctx->pc = 0x2b1368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_2b136c:
    // 0x2b136c: 0xc0afb26  jal         func_2BEC98
label_2b1370:
    if (ctx->pc == 0x2B1370u) {
        ctx->pc = 0x2B1370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B136Cu;
        // 0x2b1370: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1374u;
        goto label_2b1374;
    }
    ctx->pc = 0x2B136Cu;
    SET_GPR_U32(ctx, 31, 0x2B1374u);
    ctx->pc = 0x2B1370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B136Cu;
    // 0x2b1370: 0xc6ec0000  lwc1        $f12, 0x0($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BEC98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2BEC98u, 0x2B136Cu, 0x2B1374u)) {
        return;
    }
    ctx->pc = 0x2B1374u;
label_2b1374:
    // 0x2b1374: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x2b1374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_2b1378:
    // 0x2b1378: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b1378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b137c:
    // 0x2b137c: 0x1040005d  beqz        $v0, . + 4 + (0x5D << 2)
label_2b1380:
    if (ctx->pc == 0x2B1380u) {
        ctx->pc = 0x2B1384u;
        goto label_2b1384;
    }
    ctx->pc = 0x2B137Cu;
    {
        const bool branch_taken_0x2b137c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b137c) {
            ctx->pc = 0x2B14F4u;
            goto label_2b14f4;
        }
    }
    ctx->pc = 0x2B1384u;
label_2b1384:
    // 0x2b1384: 0x3c018080  lui         $at, 0x8080
    ctx->pc = 0x2b1384u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32896 << 16));
label_2b1388:
    // 0x2b1388: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x2b1388u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_2b138c:
    // 0x2b138c: 0x24150030  addiu       $s5, $zero, 0x30
    ctx->pc = 0x2b138cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2b1390:
    // 0x2b1390: 0x3c010080  lui         $at, 0x80
    ctx->pc = 0x2b1390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)128 << 16));
label_2b1394:
    // 0x2b1394: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2b1394u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2b1398:
    // 0x2b1398: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2b1398u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b139c:
    // 0x2b139c: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x2b139cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2b13a0:
    // 0x2b13a0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b13a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b13a4:
    // 0x2b13a4: 0x0  nop
    ctx->pc = 0x2b13a4u;
    // NOP
label_2b13a8:
    // 0x2b13a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b13a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b13ac:
    // 0x2b13ac: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2b13acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b13b0:
    // 0x2b13b0: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x2b13b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2b13b4:
    // 0x2b13b4: 0x8ec40030  lw          $a0, 0x30($s6)
    ctx->pc = 0x2b13b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
label_2b13b8:
    // 0x2b13b8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2b13b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b13bc:
    // 0x2b13bc: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x2b13bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_2b13c0:
    // 0x2b13c0: 0x118140  sll         $s0, $s1, 5
    ctx->pc = 0x2b13c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_2b13c4:
    // 0x2b13c4: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x2b13c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_2b13c8:
    // 0x2b13c8: 0x2042821  addu        $a1, $s0, $a0
    ctx->pc = 0x2b13c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_2b13cc:
    // 0x2b13cc: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2b13ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b13d0:
    // 0x2b13d0: 0xc4640004  lwc1        $f4, 0x4($v1)
    ctx->pc = 0x2b13d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2b13d4:
    // 0x2b13d4: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2b13d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b13d8:
    // 0x2b13d8: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x2b13d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b13dc:
    // 0x2b13dc: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x2b13dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2b13e0:
    // 0x2b13e0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2b13e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b13e4:
    // 0x2b13e4: 0x46041082  mul.s       $f2, $f2, $f4
    ctx->pc = 0x2b13e4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
label_2b13e8:
    // 0x2b13e8: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x2b13e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b13ec:
    // 0x2b13ec: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x2b13ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_2b13f0:
    // 0x2b13f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2b13f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2b13f4:
    // 0x2b13f4: 0x46000d00  add.s       $f20, $f1, $f0
    ctx->pc = 0x2b13f4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b13f8:
    // 0x2b13f8: 0x4614b836  c.le.s      $f23, $f20
    ctx->pc = 0x2b13f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[23], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b13fc:
    // 0x2b13fc: 0x0  nop
    ctx->pc = 0x2b13fcu;
    // NOP
label_2b1400:
    // 0x2b1400: 0x45030036  bc1tl       . + 4 + (0x36 << 2)
label_2b1404:
    if (ctx->pc == 0x2B1404u) {
        ctx->pc = 0x2B1404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1400u;
        // 0x2b1404: 0x8ec30054  lw          $v1, 0x54($s6) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1408u;
        goto label_2b1408;
    }
    ctx->pc = 0x2B1400u;
    {
        const bool branch_taken_0x2b1400 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1400) {
            ctx->pc = 0x2B1404u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1400u;
            // 0x2b1404: 0x8ec30054  lw          $v1, 0x54($s6) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B14DCu;
            goto label_2b14dc;
        }
    }
    ctx->pc = 0x2B1408u;
label_2b1408:
    // 0x2b1408: 0xc0ad20c  jal         func_2B4830
label_2b140c:
    if (ctx->pc == 0x2B140Cu) {
        ctx->pc = 0x2B140Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1408u;
        // 0x2b140c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1410u;
        goto label_2b1410;
    }
    ctx->pc = 0x2B1408u;
    SET_GPR_U32(ctx, 31, 0x2B1410u);
    ctx->pc = 0x2B140Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B1408u;
    // 0x2b140c: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4830u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2B4830u, 0x2B1408u, 0x2B1410u)) {
        return;
    }
    ctx->pc = 0x2B1410u;
label_2b1410:
    // 0x2b1410: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x2b1410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2b1414:
    // 0x2b1414: 0x2351818  mult        $v1, $s1, $s5
    ctx->pc = 0x2b1414u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2b1418:
    // 0x2b1418: 0xc7a30040  lwc1        $f3, 0x40($sp)
    ctx->pc = 0x2b1418u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b141c:
    // 0x2b141c: 0x4614a100  add.s       $f4, $f20, $f20
    ctx->pc = 0x2b141cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_2b1420:
    // 0x2b1420: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x2b1420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2b1424:
    // 0x2b1424: 0xc7a20044  lwc1        $f2, 0x44($sp)
    ctx->pc = 0x2b1424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b1428:
    // 0x2b1428: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2b1428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b142c:
    // 0x2b142c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x2b142cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1430:
    // 0x2b1430: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x2b1430u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2b1434:
    // 0x2b1434: 0xc4450008  lwc1        $f5, 0x8($v0)
    ctx->pc = 0x2b1434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2b1438:
    // 0x2b1438: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x2b1438u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_2b143c:
    // 0x2b143c: 0x8ec20020  lw          $v0, 0x20($s6)
    ctx->pc = 0x2b143cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 32)));
label_2b1440:
    // 0x2b1440: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x2b1440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b1444:
    // 0x2b1444: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b1444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2b1448:
    // 0x2b1448: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x2b1448u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_2b144c:
    // 0x2b144c: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x2b144cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1450:
    // 0x2b1450: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x2b1450u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_2b1454:
    // 0x2b1454: 0x46002103  div.s       $f4, $f4, $f0
    ctx->pc = 0x2b1454u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[4], ctx->f[0]);
label_2b1458:
    // 0x2b1458: 0x46011840  add.s       $f1, $f3, $f1
    ctx->pc = 0x2b1458u;
    ctx->f[1] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_2b145c:
    // 0x2b145c: 0x46010802  mul.s       $f0, $f1, $f1
    ctx->pc = 0x2b145cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_2b1460:
    // 0x2b1460: 0x46002500  add.s       $f20, $f4, $f0
    ctx->pc = 0x2b1460u;
    ctx->f[20] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_2b1464:
    // 0x2b1464: 0x4616a036  c.le.s      $f20, $f22
    ctx->pc = 0x2b1464u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b1468:
    // 0x2b1468: 0x44802000  mtc1        $zero, $f4
    ctx->pc = 0x2b1468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_2b146c:
    // 0x2b146c: 0x45030008  bc1tl       . + 4 + (0x8 << 2)
label_2b1470:
    if (ctx->pc == 0x2B1470u) {
        ctx->pc = 0x2B1470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B146Cu;
        // 0x2b1470: 0x46012101  sub.s       $f4, $f4, $f1 (Delay Slot)
        ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1474u;
        goto label_2b1474;
    }
    ctx->pc = 0x2B146Cu;
    {
        const bool branch_taken_0x2b146c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b146c) {
            ctx->pc = 0x2B1470u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B146Cu;
            // 0x2b1470: 0x46012101  sub.s       $f4, $f4, $f1 (Delay Slot)
            ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1490u;
            goto label_2b1490;
        }
    }
    ctx->pc = 0x2B1474u;
label_2b1474:
    // 0x2b1474: 0x46140104  c1          0x140104
    ctx->pc = 0x2b1474u;
    ctx->f[4] = FPU_SQRT_S(ctx->f[20]);
label_2b1478:
    // 0x2b1478: 0x46150834  c.lt.s      $f1, $f21
    ctx->pc = 0x2b1478u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2b147c:
    // 0x2b147c: 0x0  nop
    ctx->pc = 0x2b147cu;
    // NOP
label_2b1480:
    // 0x2b1480: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2b1484:
    if (ctx->pc == 0x2B1484u) {
        ctx->pc = 0x2B1484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1480u;
        // 0x2b1484: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
        ctx->f[4] = FPU_NEG_S(ctx->f[4]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1488u;
        goto label_2b1488;
    }
    ctx->pc = 0x2B1480u;
    {
        const bool branch_taken_0x2b1480 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b1480) {
            ctx->pc = 0x2B1484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B1480u;
            // 0x2b1484: 0x46002107  neg.s       $f4, $f4 (Delay Slot)
            ctx->f[4] = FPU_NEG_S(ctx->f[4]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B1488u;
            goto label_2b1488;
        }
    }
    ctx->pc = 0x2B1488u;
label_2b1488:
    // 0x2b1488: 0x46012101  sub.s       $f4, $f4, $f1
    ctx->pc = 0x2b1488u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_2b148c:
    // 0x2b148c: 0x0  nop
    ctx->pc = 0x2b148cu;
    // NOP
label_2b1490:
    // 0x2b1490: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x2b1490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b1494:
    // 0x2b1494: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x2b1494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_2b1498:
    // 0x2b1498: 0x111140  sll         $v0, $s1, 5
    ctx->pc = 0x2b1498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 5));
label_2b149c:
    // 0x2b149c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b149cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b14a0:
    // 0x2b14a0: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b14a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2b14a4:
    // 0x2b14a4: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x2b14a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2b14a8:
    // 0x2b14a8: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x2b14a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2b14ac:
    // 0x2b14ac: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x2b14acu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_2b14b0:
    // 0x2b14b0: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x2b14b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2b14b4:
    // 0x2b14b4: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2b14b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2b14b8:
    // 0x2b14b8: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x2b14b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b14bc:
    // 0x2b14bc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b14bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2b14c0:
    // 0x2b14c0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x2b14c0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2b14c4:
    // 0x2b14c4: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x2b14c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2b14c8:
    // 0x2b14c8: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x2b14c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b14cc:
    // 0x2b14cc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x2b14ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_2b14d0:
    // 0x2b14d0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x2b14d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
label_2b14d4:
    // 0x2b14d4: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x2b14d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_2b14d8:
    // 0x2b14d8: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x2b14d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
label_2b14dc:
    // 0x2b14dc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b14dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b14e0:
    // 0x2b14e0: 0x26940020  addiu       $s4, $s4, 0x20
    ctx->pc = 0x2b14e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
label_2b14e4:
    // 0x2b14e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2b14e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2b14e8:
    // 0x2b14e8: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x2b14e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2b14ec:
    // 0x2b14ec: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_2b14f0:
    if (ctx->pc == 0x2B14F0u) {
        ctx->pc = 0x2B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14ECu;
        // 0x2b14f0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B14F4u;
        goto label_2b14f4;
    }
    ctx->pc = 0x2B14ECu;
    {
        const bool branch_taken_0x2b14ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B14F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B14ECu;
        // 0x2b14f0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b14ec) {
            ctx->pc = 0x2B13A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b13a8;
        }
    }
    ctx->pc = 0x2B14F4u;
label_2b14f4:
    // 0x2b14f4: 0x6ac60037  ldl         $a2, 0x37($s6)
    ctx->pc = 0x2b14f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b14f8:
    // 0x2b14f8: 0x6ec60030  ldr         $a2, 0x30($s6)
    ctx->pc = 0x2b14f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b14fc:
    // 0x2b14fc: 0xb3a60057  sdl         $a2, 0x57($sp)
    ctx->pc = 0x2b14fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1500:
    // 0x2b1500: 0xb7a60050  sdr         $a2, 0x50($sp)
    ctx->pc = 0x2b1500u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b1504:
    // 0x2b1504: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x2b1504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_2b1508:
    // 0x2b1508: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2b1508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2b150c:
    // 0x2b150c: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b1510:
    if (ctx->pc == 0x2B1510u) {
        ctx->pc = 0x2B1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B150Cu;
        // 0x2b1510: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1514u;
        goto label_2b1514;
    }
    ctx->pc = 0x2B150Cu;
    {
        const bool branch_taken_0x2b150c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B1510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B150Cu;
        // 0x2b1510: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b150c) {
            ctx->pc = 0x2B1560u;
            goto label_2b1560;
        }
    }
    ctx->pc = 0x2B1514u;
label_2b1514:
    // 0x2b1514: 0x8fa80050  lw          $t0, 0x50($sp)
    ctx->pc = 0x2b1514u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_2b1518:
    // 0x2b1518: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b1518u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b151c:
    // 0x2b151c: 0x0  nop
    ctx->pc = 0x2b151cu;
    // NOP
label_2b1520:
    // 0x2b1520: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2b1520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2b1524:
    // 0x2b1524: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2b1524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2b1528:
    // 0x2b1528: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2b1528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2b152c:
    // 0x2b152c: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x2b152cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2b1530:
    // 0x2b1530: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2b1530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2b1534:
    // 0x2b1534: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x2b1534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2b1538:
    // 0x2b1538: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x2b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_2b153c:
    // 0x2b153c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2b153cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2b1540:
    // 0x2b1540: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2b1540u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2b1544:
    // 0x2b1544: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x2b1544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_2b1548:
    // 0x2b1548: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2b1548u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_2b154c:
    // 0x2b154c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2b154cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2b1550:
    // 0x2b1550: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x2b1550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_2b1554:
    // 0x2b1554: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x2b1554u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_2b1558:
    // 0x2b1558: 0x14e4fff1  bne         $a3, $a0, . + 4 + (-0xF << 2)
label_2b155c:
    if (ctx->pc == 0x2B155Cu) {
        ctx->pc = 0x2B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1558u;
        // 0x2b155c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B1560u;
        goto label_2b1560;
    }
    ctx->pc = 0x2B1558u;
    {
        const bool branch_taken_0x2b1558 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B155Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1558u;
        // 0x2b155c: 0xac400010  sw          $zero, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b1558) {
            ctx->pc = 0x2B1520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b1520;
        }
    }
    ctx->pc = 0x2B1560u;
label_2b1560:
    // 0x2b1560: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x2b1560u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
label_2b1564:
    // 0x2b1564: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x2b1564u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_2b1568:
    // 0x2b1568: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x2b1568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_2b156c:
    // 0x2b156c: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x2b156cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_2b1570:
    // 0x2b1570: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x2b1570u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2b1574:
    // 0x2b1574: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x2b1574u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2b1578:
    // 0x2b1578: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x2b1578u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2b157c:
    // 0x2b157c: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x2b157cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2b1580:
    // 0x2b1580: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x2b1580u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2b1584:
    // 0x2b1584: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x2b1584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2b1588:
    // 0x2b1588: 0xc7b70188  lwc1        $f23, 0x188($sp)
    ctx->pc = 0x2b1588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2b158c:
    // 0x2b158c: 0xc7b60180  lwc1        $f22, 0x180($sp)
    ctx->pc = 0x2b158cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2b1590:
    // 0x2b1590: 0xc7b50178  lwc1        $f21, 0x178($sp)
    ctx->pc = 0x2b1590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2b1594:
    // 0x2b1594: 0xc7b40170  lwc1        $f20, 0x170($sp)
    ctx->pc = 0x2b1594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2b1598:
    // 0x2b1598: 0x3e00008  jr          $ra
label_2b159c:
    if (ctx->pc == 0x2B159Cu) {
        ctx->pc = 0x2B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1598u;
        // 0x2b159c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B15A0u;
        goto label_fallthrough_0x2b1598;
    }
    ctx->pc = 0x2B1598u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B1598u;
        // 0x2b159c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B1598u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2b1598:
    ctx->pc = 0x2B15A0u;
}
