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

// Function: sub_001459D0
// Address: 0x1459d0 - 0x1461d8
void sub_001459D0_0x1459d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001459D0_0x1459d0");
#endif

    switch (ctx->pc) {
        case 0x1459d0u: goto label_1459d0;
        case 0x1459d4u: goto label_1459d4;
        case 0x1459d8u: goto label_1459d8;
        case 0x1459dcu: goto label_1459dc;
        case 0x1459e0u: goto label_1459e0;
        case 0x1459e4u: goto label_1459e4;
        case 0x1459e8u: goto label_1459e8;
        case 0x1459ecu: goto label_1459ec;
        case 0x1459f0u: goto label_1459f0;
        case 0x1459f4u: goto label_1459f4;
        case 0x1459f8u: goto label_1459f8;
        case 0x1459fcu: goto label_1459fc;
        case 0x145a00u: goto label_145a00;
        case 0x145a04u: goto label_145a04;
        case 0x145a08u: goto label_145a08;
        case 0x145a0cu: goto label_145a0c;
        case 0x145a10u: goto label_145a10;
        case 0x145a14u: goto label_145a14;
        case 0x145a18u: goto label_145a18;
        case 0x145a1cu: goto label_145a1c;
        case 0x145a20u: goto label_145a20;
        case 0x145a24u: goto label_145a24;
        case 0x145a28u: goto label_145a28;
        case 0x145a2cu: goto label_145a2c;
        case 0x145a30u: goto label_145a30;
        case 0x145a34u: goto label_145a34;
        case 0x145a38u: goto label_145a38;
        case 0x145a3cu: goto label_145a3c;
        case 0x145a40u: goto label_145a40;
        case 0x145a44u: goto label_145a44;
        case 0x145a48u: goto label_145a48;
        case 0x145a4cu: goto label_145a4c;
        case 0x145a50u: goto label_145a50;
        case 0x145a54u: goto label_145a54;
        case 0x145a58u: goto label_145a58;
        case 0x145a5cu: goto label_145a5c;
        case 0x145a60u: goto label_145a60;
        case 0x145a64u: goto label_145a64;
        case 0x145a68u: goto label_145a68;
        case 0x145a6cu: goto label_145a6c;
        case 0x145a70u: goto label_145a70;
        case 0x145a74u: goto label_145a74;
        case 0x145a78u: goto label_145a78;
        case 0x145a7cu: goto label_145a7c;
        case 0x145a80u: goto label_145a80;
        case 0x145a84u: goto label_145a84;
        case 0x145a88u: goto label_145a88;
        case 0x145a8cu: goto label_145a8c;
        case 0x145a90u: goto label_145a90;
        case 0x145a94u: goto label_145a94;
        case 0x145a98u: goto label_145a98;
        case 0x145a9cu: goto label_145a9c;
        case 0x145aa0u: goto label_145aa0;
        case 0x145aa4u: goto label_145aa4;
        case 0x145aa8u: goto label_145aa8;
        case 0x145aacu: goto label_145aac;
        case 0x145ab0u: goto label_145ab0;
        case 0x145ab4u: goto label_145ab4;
        case 0x145ab8u: goto label_145ab8;
        case 0x145abcu: goto label_145abc;
        case 0x145ac0u: goto label_145ac0;
        case 0x145ac4u: goto label_145ac4;
        case 0x145ac8u: goto label_145ac8;
        case 0x145accu: goto label_145acc;
        case 0x145ad0u: goto label_145ad0;
        case 0x145ad4u: goto label_145ad4;
        case 0x145ad8u: goto label_145ad8;
        case 0x145adcu: goto label_145adc;
        case 0x145ae0u: goto label_145ae0;
        case 0x145ae4u: goto label_145ae4;
        case 0x145ae8u: goto label_145ae8;
        case 0x145aecu: goto label_145aec;
        case 0x145af0u: goto label_145af0;
        case 0x145af4u: goto label_145af4;
        case 0x145af8u: goto label_145af8;
        case 0x145afcu: goto label_145afc;
        case 0x145b00u: goto label_145b00;
        case 0x145b04u: goto label_145b04;
        case 0x145b08u: goto label_145b08;
        case 0x145b0cu: goto label_145b0c;
        case 0x145b10u: goto label_145b10;
        case 0x145b14u: goto label_145b14;
        case 0x145b18u: goto label_145b18;
        case 0x145b1cu: goto label_145b1c;
        case 0x145b20u: goto label_145b20;
        case 0x145b24u: goto label_145b24;
        case 0x145b28u: goto label_145b28;
        case 0x145b2cu: goto label_145b2c;
        case 0x145b30u: goto label_145b30;
        case 0x145b34u: goto label_145b34;
        case 0x145b38u: goto label_145b38;
        case 0x145b3cu: goto label_145b3c;
        case 0x145b40u: goto label_145b40;
        case 0x145b44u: goto label_145b44;
        case 0x145b48u: goto label_145b48;
        case 0x145b4cu: goto label_145b4c;
        case 0x145b50u: goto label_145b50;
        case 0x145b54u: goto label_145b54;
        case 0x145b58u: goto label_145b58;
        case 0x145b5cu: goto label_145b5c;
        case 0x145b60u: goto label_145b60;
        case 0x145b64u: goto label_145b64;
        case 0x145b68u: goto label_145b68;
        case 0x145b6cu: goto label_145b6c;
        case 0x145b70u: goto label_145b70;
        case 0x145b74u: goto label_145b74;
        case 0x145b78u: goto label_145b78;
        case 0x145b7cu: goto label_145b7c;
        case 0x145b80u: goto label_145b80;
        case 0x145b84u: goto label_145b84;
        case 0x145b88u: goto label_145b88;
        case 0x145b8cu: goto label_145b8c;
        case 0x145b90u: goto label_145b90;
        case 0x145b94u: goto label_145b94;
        case 0x145b98u: goto label_145b98;
        case 0x145b9cu: goto label_145b9c;
        case 0x145ba0u: goto label_145ba0;
        case 0x145ba4u: goto label_145ba4;
        case 0x145ba8u: goto label_145ba8;
        case 0x145bacu: goto label_145bac;
        case 0x145bb0u: goto label_145bb0;
        case 0x145bb4u: goto label_145bb4;
        case 0x145bb8u: goto label_145bb8;
        case 0x145bbcu: goto label_145bbc;
        case 0x145bc0u: goto label_145bc0;
        case 0x145bc4u: goto label_145bc4;
        case 0x145bc8u: goto label_145bc8;
        case 0x145bccu: goto label_145bcc;
        case 0x145bd0u: goto label_145bd0;
        case 0x145bd4u: goto label_145bd4;
        case 0x145bd8u: goto label_145bd8;
        case 0x145bdcu: goto label_145bdc;
        case 0x145be0u: goto label_145be0;
        case 0x145be4u: goto label_145be4;
        case 0x145be8u: goto label_145be8;
        case 0x145becu: goto label_145bec;
        case 0x145bf0u: goto label_145bf0;
        case 0x145bf4u: goto label_145bf4;
        case 0x145bf8u: goto label_145bf8;
        case 0x145bfcu: goto label_145bfc;
        case 0x145c00u: goto label_145c00;
        case 0x145c04u: goto label_145c04;
        case 0x145c08u: goto label_145c08;
        case 0x145c0cu: goto label_145c0c;
        case 0x145c10u: goto label_145c10;
        case 0x145c14u: goto label_145c14;
        case 0x145c18u: goto label_145c18;
        case 0x145c1cu: goto label_145c1c;
        case 0x145c20u: goto label_145c20;
        case 0x145c24u: goto label_145c24;
        case 0x145c28u: goto label_145c28;
        case 0x145c2cu: goto label_145c2c;
        case 0x145c30u: goto label_145c30;
        case 0x145c34u: goto label_145c34;
        case 0x145c38u: goto label_145c38;
        case 0x145c3cu: goto label_145c3c;
        case 0x145c40u: goto label_145c40;
        case 0x145c44u: goto label_145c44;
        case 0x145c48u: goto label_145c48;
        case 0x145c4cu: goto label_145c4c;
        case 0x145c50u: goto label_145c50;
        case 0x145c54u: goto label_145c54;
        case 0x145c58u: goto label_145c58;
        case 0x145c5cu: goto label_145c5c;
        case 0x145c60u: goto label_145c60;
        case 0x145c64u: goto label_145c64;
        case 0x145c68u: goto label_145c68;
        case 0x145c6cu: goto label_145c6c;
        case 0x145c70u: goto label_145c70;
        case 0x145c74u: goto label_145c74;
        case 0x145c78u: goto label_145c78;
        case 0x145c7cu: goto label_145c7c;
        case 0x145c80u: goto label_145c80;
        case 0x145c84u: goto label_145c84;
        case 0x145c88u: goto label_145c88;
        case 0x145c8cu: goto label_145c8c;
        case 0x145c90u: goto label_145c90;
        case 0x145c94u: goto label_145c94;
        case 0x145c98u: goto label_145c98;
        case 0x145c9cu: goto label_145c9c;
        case 0x145ca0u: goto label_145ca0;
        case 0x145ca4u: goto label_145ca4;
        case 0x145ca8u: goto label_145ca8;
        case 0x145cacu: goto label_145cac;
        case 0x145cb0u: goto label_145cb0;
        case 0x145cb4u: goto label_145cb4;
        case 0x145cb8u: goto label_145cb8;
        case 0x145cbcu: goto label_145cbc;
        case 0x145cc0u: goto label_145cc0;
        case 0x145cc4u: goto label_145cc4;
        case 0x145cc8u: goto label_145cc8;
        case 0x145cccu: goto label_145ccc;
        case 0x145cd0u: goto label_145cd0;
        case 0x145cd4u: goto label_145cd4;
        case 0x145cd8u: goto label_145cd8;
        case 0x145cdcu: goto label_145cdc;
        case 0x145ce0u: goto label_145ce0;
        case 0x145ce4u: goto label_145ce4;
        case 0x145ce8u: goto label_145ce8;
        case 0x145cecu: goto label_145cec;
        case 0x145cf0u: goto label_145cf0;
        case 0x145cf4u: goto label_145cf4;
        case 0x145cf8u: goto label_145cf8;
        case 0x145cfcu: goto label_145cfc;
        case 0x145d00u: goto label_145d00;
        case 0x145d04u: goto label_145d04;
        case 0x145d08u: goto label_145d08;
        case 0x145d0cu: goto label_145d0c;
        case 0x145d10u: goto label_145d10;
        case 0x145d14u: goto label_145d14;
        case 0x145d18u: goto label_145d18;
        case 0x145d1cu: goto label_145d1c;
        case 0x145d20u: goto label_145d20;
        case 0x145d24u: goto label_145d24;
        case 0x145d28u: goto label_145d28;
        case 0x145d2cu: goto label_145d2c;
        case 0x145d30u: goto label_145d30;
        case 0x145d34u: goto label_145d34;
        case 0x145d38u: goto label_145d38;
        case 0x145d3cu: goto label_145d3c;
        case 0x145d40u: goto label_145d40;
        case 0x145d44u: goto label_145d44;
        case 0x145d48u: goto label_145d48;
        case 0x145d4cu: goto label_145d4c;
        case 0x145d50u: goto label_145d50;
        case 0x145d54u: goto label_145d54;
        case 0x145d58u: goto label_145d58;
        case 0x145d5cu: goto label_145d5c;
        case 0x145d60u: goto label_145d60;
        case 0x145d64u: goto label_145d64;
        case 0x145d68u: goto label_145d68;
        case 0x145d6cu: goto label_145d6c;
        case 0x145d70u: goto label_145d70;
        case 0x145d74u: goto label_145d74;
        case 0x145d78u: goto label_145d78;
        case 0x145d7cu: goto label_145d7c;
        case 0x145d80u: goto label_145d80;
        case 0x145d84u: goto label_145d84;
        case 0x145d88u: goto label_145d88;
        case 0x145d8cu: goto label_145d8c;
        case 0x145d90u: goto label_145d90;
        case 0x145d94u: goto label_145d94;
        case 0x145d98u: goto label_145d98;
        case 0x145d9cu: goto label_145d9c;
        case 0x145da0u: goto label_145da0;
        case 0x145da4u: goto label_145da4;
        case 0x145da8u: goto label_145da8;
        case 0x145dacu: goto label_145dac;
        case 0x145db0u: goto label_145db0;
        case 0x145db4u: goto label_145db4;
        case 0x145db8u: goto label_145db8;
        case 0x145dbcu: goto label_145dbc;
        case 0x145dc0u: goto label_145dc0;
        case 0x145dc4u: goto label_145dc4;
        case 0x145dc8u: goto label_145dc8;
        case 0x145dccu: goto label_145dcc;
        case 0x145dd0u: goto label_145dd0;
        case 0x145dd4u: goto label_145dd4;
        case 0x145dd8u: goto label_145dd8;
        case 0x145ddcu: goto label_145ddc;
        case 0x145de0u: goto label_145de0;
        case 0x145de4u: goto label_145de4;
        case 0x145de8u: goto label_145de8;
        case 0x145decu: goto label_145dec;
        case 0x145df0u: goto label_145df0;
        case 0x145df4u: goto label_145df4;
        case 0x145df8u: goto label_145df8;
        case 0x145dfcu: goto label_145dfc;
        case 0x145e00u: goto label_145e00;
        case 0x145e04u: goto label_145e04;
        case 0x145e08u: goto label_145e08;
        case 0x145e0cu: goto label_145e0c;
        case 0x145e10u: goto label_145e10;
        case 0x145e14u: goto label_145e14;
        case 0x145e18u: goto label_145e18;
        case 0x145e1cu: goto label_145e1c;
        case 0x145e20u: goto label_145e20;
        case 0x145e24u: goto label_145e24;
        case 0x145e28u: goto label_145e28;
        case 0x145e2cu: goto label_145e2c;
        case 0x145e30u: goto label_145e30;
        case 0x145e34u: goto label_145e34;
        case 0x145e38u: goto label_145e38;
        case 0x145e3cu: goto label_145e3c;
        case 0x145e40u: goto label_145e40;
        case 0x145e44u: goto label_145e44;
        case 0x145e48u: goto label_145e48;
        case 0x145e4cu: goto label_145e4c;
        case 0x145e50u: goto label_145e50;
        case 0x145e54u: goto label_145e54;
        case 0x145e58u: goto label_145e58;
        case 0x145e5cu: goto label_145e5c;
        case 0x145e60u: goto label_145e60;
        case 0x145e64u: goto label_145e64;
        case 0x145e68u: goto label_145e68;
        case 0x145e6cu: goto label_145e6c;
        case 0x145e70u: goto label_145e70;
        case 0x145e74u: goto label_145e74;
        case 0x145e78u: goto label_145e78;
        case 0x145e7cu: goto label_145e7c;
        case 0x145e80u: goto label_145e80;
        case 0x145e84u: goto label_145e84;
        case 0x145e88u: goto label_145e88;
        case 0x145e8cu: goto label_145e8c;
        case 0x145e90u: goto label_145e90;
        case 0x145e94u: goto label_145e94;
        case 0x145e98u: goto label_145e98;
        case 0x145e9cu: goto label_145e9c;
        case 0x145ea0u: goto label_145ea0;
        case 0x145ea4u: goto label_145ea4;
        case 0x145ea8u: goto label_145ea8;
        case 0x145eacu: goto label_145eac;
        case 0x145eb0u: goto label_145eb0;
        case 0x145eb4u: goto label_145eb4;
        case 0x145eb8u: goto label_145eb8;
        case 0x145ebcu: goto label_145ebc;
        case 0x145ec0u: goto label_145ec0;
        case 0x145ec4u: goto label_145ec4;
        case 0x145ec8u: goto label_145ec8;
        case 0x145eccu: goto label_145ecc;
        case 0x145ed0u: goto label_145ed0;
        case 0x145ed4u: goto label_145ed4;
        case 0x145ed8u: goto label_145ed8;
        case 0x145edcu: goto label_145edc;
        case 0x145ee0u: goto label_145ee0;
        case 0x145ee4u: goto label_145ee4;
        case 0x145ee8u: goto label_145ee8;
        case 0x145eecu: goto label_145eec;
        case 0x145ef0u: goto label_145ef0;
        case 0x145ef4u: goto label_145ef4;
        case 0x145ef8u: goto label_145ef8;
        case 0x145efcu: goto label_145efc;
        case 0x145f00u: goto label_145f00;
        case 0x145f04u: goto label_145f04;
        case 0x145f08u: goto label_145f08;
        case 0x145f0cu: goto label_145f0c;
        case 0x145f10u: goto label_145f10;
        case 0x145f14u: goto label_145f14;
        case 0x145f18u: goto label_145f18;
        case 0x145f1cu: goto label_145f1c;
        case 0x145f20u: goto label_145f20;
        case 0x145f24u: goto label_145f24;
        case 0x145f28u: goto label_145f28;
        case 0x145f2cu: goto label_145f2c;
        case 0x145f30u: goto label_145f30;
        case 0x145f34u: goto label_145f34;
        case 0x145f38u: goto label_145f38;
        case 0x145f3cu: goto label_145f3c;
        case 0x145f40u: goto label_145f40;
        case 0x145f44u: goto label_145f44;
        case 0x145f48u: goto label_145f48;
        case 0x145f4cu: goto label_145f4c;
        case 0x145f50u: goto label_145f50;
        case 0x145f54u: goto label_145f54;
        case 0x145f58u: goto label_145f58;
        case 0x145f5cu: goto label_145f5c;
        case 0x145f60u: goto label_145f60;
        case 0x145f64u: goto label_145f64;
        case 0x145f68u: goto label_145f68;
        case 0x145f6cu: goto label_145f6c;
        case 0x145f70u: goto label_145f70;
        case 0x145f74u: goto label_145f74;
        case 0x145f78u: goto label_145f78;
        case 0x145f7cu: goto label_145f7c;
        case 0x145f80u: goto label_145f80;
        case 0x145f84u: goto label_145f84;
        case 0x145f88u: goto label_145f88;
        case 0x145f8cu: goto label_145f8c;
        case 0x145f90u: goto label_145f90;
        case 0x145f94u: goto label_145f94;
        case 0x145f98u: goto label_145f98;
        case 0x145f9cu: goto label_145f9c;
        case 0x145fa0u: goto label_145fa0;
        case 0x145fa4u: goto label_145fa4;
        case 0x145fa8u: goto label_145fa8;
        case 0x145facu: goto label_145fac;
        case 0x145fb0u: goto label_145fb0;
        case 0x145fb4u: goto label_145fb4;
        case 0x145fb8u: goto label_145fb8;
        case 0x145fbcu: goto label_145fbc;
        case 0x145fc0u: goto label_145fc0;
        case 0x145fc4u: goto label_145fc4;
        case 0x145fc8u: goto label_145fc8;
        case 0x145fccu: goto label_145fcc;
        case 0x145fd0u: goto label_145fd0;
        case 0x145fd4u: goto label_145fd4;
        case 0x145fd8u: goto label_145fd8;
        case 0x145fdcu: goto label_145fdc;
        case 0x145fe0u: goto label_145fe0;
        case 0x145fe4u: goto label_145fe4;
        case 0x145fe8u: goto label_145fe8;
        case 0x145fecu: goto label_145fec;
        case 0x145ff0u: goto label_145ff0;
        case 0x145ff4u: goto label_145ff4;
        case 0x145ff8u: goto label_145ff8;
        case 0x145ffcu: goto label_145ffc;
        case 0x146000u: goto label_146000;
        case 0x146004u: goto label_146004;
        case 0x146008u: goto label_146008;
        case 0x14600cu: goto label_14600c;
        case 0x146010u: goto label_146010;
        case 0x146014u: goto label_146014;
        case 0x146018u: goto label_146018;
        case 0x14601cu: goto label_14601c;
        case 0x146020u: goto label_146020;
        case 0x146024u: goto label_146024;
        case 0x146028u: goto label_146028;
        case 0x14602cu: goto label_14602c;
        case 0x146030u: goto label_146030;
        case 0x146034u: goto label_146034;
        case 0x146038u: goto label_146038;
        case 0x14603cu: goto label_14603c;
        case 0x146040u: goto label_146040;
        case 0x146044u: goto label_146044;
        case 0x146048u: goto label_146048;
        case 0x14604cu: goto label_14604c;
        case 0x146050u: goto label_146050;
        case 0x146054u: goto label_146054;
        case 0x146058u: goto label_146058;
        case 0x14605cu: goto label_14605c;
        case 0x146060u: goto label_146060;
        case 0x146064u: goto label_146064;
        case 0x146068u: goto label_146068;
        case 0x14606cu: goto label_14606c;
        case 0x146070u: goto label_146070;
        case 0x146074u: goto label_146074;
        case 0x146078u: goto label_146078;
        case 0x14607cu: goto label_14607c;
        case 0x146080u: goto label_146080;
        case 0x146084u: goto label_146084;
        case 0x146088u: goto label_146088;
        case 0x14608cu: goto label_14608c;
        case 0x146090u: goto label_146090;
        case 0x146094u: goto label_146094;
        case 0x146098u: goto label_146098;
        case 0x14609cu: goto label_14609c;
        case 0x1460a0u: goto label_1460a0;
        case 0x1460a4u: goto label_1460a4;
        case 0x1460a8u: goto label_1460a8;
        case 0x1460acu: goto label_1460ac;
        case 0x1460b0u: goto label_1460b0;
        case 0x1460b4u: goto label_1460b4;
        case 0x1460b8u: goto label_1460b8;
        case 0x1460bcu: goto label_1460bc;
        case 0x1460c0u: goto label_1460c0;
        case 0x1460c4u: goto label_1460c4;
        case 0x1460c8u: goto label_1460c8;
        case 0x1460ccu: goto label_1460cc;
        case 0x1460d0u: goto label_1460d0;
        case 0x1460d4u: goto label_1460d4;
        case 0x1460d8u: goto label_1460d8;
        case 0x1460dcu: goto label_1460dc;
        case 0x1460e0u: goto label_1460e0;
        case 0x1460e4u: goto label_1460e4;
        case 0x1460e8u: goto label_1460e8;
        case 0x1460ecu: goto label_1460ec;
        case 0x1460f0u: goto label_1460f0;
        case 0x1460f4u: goto label_1460f4;
        case 0x1460f8u: goto label_1460f8;
        case 0x1460fcu: goto label_1460fc;
        case 0x146100u: goto label_146100;
        case 0x146104u: goto label_146104;
        case 0x146108u: goto label_146108;
        case 0x14610cu: goto label_14610c;
        case 0x146110u: goto label_146110;
        case 0x146114u: goto label_146114;
        case 0x146118u: goto label_146118;
        case 0x14611cu: goto label_14611c;
        case 0x146120u: goto label_146120;
        case 0x146124u: goto label_146124;
        case 0x146128u: goto label_146128;
        case 0x14612cu: goto label_14612c;
        case 0x146130u: goto label_146130;
        case 0x146134u: goto label_146134;
        case 0x146138u: goto label_146138;
        case 0x14613cu: goto label_14613c;
        case 0x146140u: goto label_146140;
        case 0x146144u: goto label_146144;
        case 0x146148u: goto label_146148;
        case 0x14614cu: goto label_14614c;
        case 0x146150u: goto label_146150;
        case 0x146154u: goto label_146154;
        case 0x146158u: goto label_146158;
        case 0x14615cu: goto label_14615c;
        case 0x146160u: goto label_146160;
        case 0x146164u: goto label_146164;
        case 0x146168u: goto label_146168;
        case 0x14616cu: goto label_14616c;
        case 0x146170u: goto label_146170;
        case 0x146174u: goto label_146174;
        case 0x146178u: goto label_146178;
        case 0x14617cu: goto label_14617c;
        case 0x146180u: goto label_146180;
        case 0x146184u: goto label_146184;
        case 0x146188u: goto label_146188;
        case 0x14618cu: goto label_14618c;
        case 0x146190u: goto label_146190;
        case 0x146194u: goto label_146194;
        case 0x146198u: goto label_146198;
        case 0x14619cu: goto label_14619c;
        case 0x1461a0u: goto label_1461a0;
        case 0x1461a4u: goto label_1461a4;
        case 0x1461a8u: goto label_1461a8;
        case 0x1461acu: goto label_1461ac;
        case 0x1461b0u: goto label_1461b0;
        case 0x1461b4u: goto label_1461b4;
        case 0x1461b8u: goto label_1461b8;
        case 0x1461bcu: goto label_1461bc;
        case 0x1461c0u: goto label_1461c0;
        case 0x1461c4u: goto label_1461c4;
        case 0x1461c8u: goto label_1461c8;
        case 0x1461ccu: goto label_1461cc;
        case 0x1461d0u: goto label_1461d0;
        case 0x1461d4u: goto label_1461d4;
        default: break;
    }

    ctx->pc = 0x1459d0u;

label_1459d0:
    // 0x1459d0: 0x27bdeed0  addiu       $sp, $sp, -0x1130
    ctx->pc = 0x1459d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294962896));
label_1459d4:
    // 0x1459d4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1459d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1459d8:
    // 0x1459d8: 0x7fb210e0  sq          $s2, 0x10E0($sp)
    ctx->pc = 0x1459d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4320), GPR_VEC(ctx, 18));
label_1459dc:
    // 0x1459dc: 0x7fb610a0  sq          $s6, 0x10A0($sp)
    ctx->pc = 0x1459dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4256), GPR_VEC(ctx, 22));
label_1459e0:
    // 0x1459e0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1459e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1459e4:
    // 0x1459e4: 0x7fb71090  sq          $s7, 0x1090($sp)
    ctx->pc = 0x1459e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4240), GPR_VEC(ctx, 23));
label_1459e8:
    // 0x1459e8: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1459e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1459ec:
    // 0x1459ec: 0x7fb01100  sq          $s0, 0x1100($sp)
    ctx->pc = 0x1459ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4352), GPR_VEC(ctx, 16));
label_1459f0:
    // 0x1459f0: 0x7fb110f0  sq          $s1, 0x10F0($sp)
    ctx->pc = 0x1459f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4336), GPR_VEC(ctx, 17));
label_1459f4:
    // 0x1459f4: 0x7fb310d0  sq          $s3, 0x10D0($sp)
    ctx->pc = 0x1459f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4304), GPR_VEC(ctx, 19));
label_1459f8:
    // 0x1459f8: 0x7fb410c0  sq          $s4, 0x10C0($sp)
    ctx->pc = 0x1459f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4288), GPR_VEC(ctx, 20));
label_1459fc:
    // 0x1459fc: 0x7fb510b0  sq          $s5, 0x10B0($sp)
    ctx->pc = 0x1459fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4272), GPR_VEC(ctx, 21));
label_145a00:
    // 0x145a00: 0x7fbe1080  sq          $fp, 0x1080($sp)
    ctx->pc = 0x145a00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4224), GPR_VEC(ctx, 30));
label_145a04:
    // 0x145a04: 0xffbf1070  sd          $ra, 0x1070($sp)
    ctx->pc = 0x145a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4208), GPR_U64(ctx, 31));
label_145a08:
    // 0x145a08: 0xe7b71128  swc1        $f23, 0x1128($sp)
    ctx->pc = 0x145a08u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4392), bits); }
label_145a0c:
    // 0x145a0c: 0xe7b61120  swc1        $f22, 0x1120($sp)
    ctx->pc = 0x145a0cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4384), bits); }
label_145a10:
    // 0x145a10: 0xe7b51118  swc1        $f21, 0x1118($sp)
    ctx->pc = 0x145a10u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4376), bits); }
label_145a14:
    // 0x145a14: 0xe7b41110  swc1        $f20, 0x1110($sp)
    ctx->pc = 0x145a14u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4368), bits); }
label_145a18:
    // 0x145a18: 0xc641018c  lwc1        $f1, 0x18C($s2)
    ctx->pc = 0x145a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145a1c:
    // 0x145a1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x145a1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_145a20:
    // 0x145a20: 0x0  nop
    ctx->pc = 0x145a20u;
    // NOP
label_145a24:
    // 0x145a24: 0x450000fc  bc1f        . + 4 + (0xFC << 2)
label_145a28:
    if (ctx->pc == 0x145A28u) {
        ctx->pc = 0x145A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A24u;
        // 0x145a28: 0x3c170034  lui         $s7, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A2Cu;
        goto label_145a2c;
    }
    ctx->pc = 0x145A24u;
    {
        const bool branch_taken_0x145a24 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A24u;
        // 0x145a28: 0x3c170034  lui         $s7, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a24) {
            ctx->pc = 0x145E18u;
            goto label_145e18;
        }
    }
    ctx->pc = 0x145A2Cu;
label_145a2c:
    // 0x145a2c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x145a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_145a30:
    // 0x145a30: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_145a34:
    // 0x145a34: 0x8c44830c  lw          $a0, -0x7CF4($v0)
    ctx->pc = 0x145a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294935308)));
label_145a38:
    // 0x145a38: 0x27a61000  addiu       $a2, $sp, 0x1000
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4096));
label_145a3c:
    // 0x145a3c: 0xc4690080  lwc1        $f9, 0x80($v1)
    ctx->pc = 0x145a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
label_145a40:
    // 0x145a40: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x145a40u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_145a44:
    // 0x145a44: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_145a48:
    // 0x145a48: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145a48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145a4c:
    // 0x145a4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x145a4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145a50:
    // 0x145a50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_145a54:
    // 0x145a54: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x145a54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_145a58:
    // 0x145a58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x145a58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145a5c:
    // 0x145a5c: 0x8c820198  lw          $v0, 0x198($a0)
    ctx->pc = 0x145a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 408)));
label_145a60:
    // 0x145a60: 0x46000c42  mul.s       $f17, $f1, $f0
    ctx->pc = 0x145a60u;
    ctx->f[17] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_145a64:
    // 0x145a64: 0x0  nop
    ctx->pc = 0x145a64u;
    // NOP
label_145a68:
    // 0x145a68: 0x0  nop
    ctx->pc = 0x145a68u;
    // NOP
label_145a6c:
    // 0x145a6c: 0x46091283  div.s       $f10, $f2, $f9
    ctx->pc = 0x145a6cu;
    ctx->f[10] = FPU_DIV_S(ctx, ctx->f[2], ctx->f[9]);
label_145a70:
    // 0x145a70: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x145a70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_145a74:
    // 0x145a74: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x145a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_145a78:
    // 0x145a78: 0x3c014360  lui         $at, 0x4360
    ctx->pc = 0x145a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17248 << 16));
label_145a7c:
    // 0x145a7c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x145a7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_145a80:
    // 0x145a80: 0x3c013f5b  lui         $at, 0x3F5B
    ctx->pc = 0x145a80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16219 << 16));
label_145a84:
    // 0x145a84: 0x34216db7  ori         $at, $at, 0x6DB7
    ctx->pc = 0x145a84u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28087);
label_145a88:
    // 0x145a88: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x145a88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_145a8c:
    // 0x145a8c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_145a90:
    if (ctx->pc == 0x145A90u) {
        ctx->pc = 0x145A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A8Cu;
        // 0x145a90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145A94u;
        goto label_145a94;
    }
    ctx->pc = 0x145A8Cu;
    {
        const bool branch_taken_0x145a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145A8Cu;
        // 0x145a90: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a8c) {
            ctx->pc = 0x145AA0u;
            goto label_145aa0;
        }
    }
    ctx->pc = 0x145A94u;
label_145a94:
    // 0x145a94: 0x3c013f24  lui         $at, 0x3F24
    ctx->pc = 0x145a94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16164 << 16));
label_145a98:
    // 0x145a98: 0x3421924a  ori         $at, $at, 0x924A
    ctx->pc = 0x145a98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)37450);
label_145a9c:
    // 0x145a9c: 0x44818000  mtc1        $at, $f16
    ctx->pc = 0x145a9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
label_145aa0:
    // 0x145aa0: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x145aa0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_145aa4:
    // 0x145aa4: 0x44819800  mtc1        $at, $f19
    ctx->pc = 0x145aa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[19], &bits, sizeof(bits)); }
label_145aa8:
    // 0x145aa8: 0x460002c6  mov.s       $f11, $f0
    ctx->pc = 0x145aa8u;
    ctx->f[11] = FPU_MOV_S(ctx->f[0]);
label_145aac:
    // 0x145aac: 0x3c013fd2  lui         $at, 0x3FD2
    ctx->pc = 0x145aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16338 << 16));
label_145ab0:
    // 0x145ab0: 0x3421d2d3  ori         $at, $at, 0xD2D3
    ctx->pc = 0x145ab0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53971);
label_145ab4:
    // 0x145ab4: 0x44819000  mtc1        $at, $f18
    ctx->pc = 0x145ab4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[18], &bits, sizeof(bits)); }
label_145ab8:
    // 0x145ab8: 0x46001346  mov.s       $f13, $f2
    ctx->pc = 0x145ab8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[2]);
label_145abc:
    // 0x145abc: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x145abcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_145ac0:
    // 0x145ac0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x145ac0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_145ac4:
    // 0x145ac4: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x145ac4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145ac8:
    // 0x145ac8: 0x26470070  addiu       $a3, $s2, 0x70
    ctx->pc = 0x145ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_145acc:
    // 0x145acc: 0x264a0074  addiu       $t2, $s2, 0x74
    ctx->pc = 0x145accu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 18), 116));
label_145ad0:
    // 0x145ad0: 0x240c00ff  addiu       $t4, $zero, 0xFF
    ctx->pc = 0x145ad0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_145ad4:
    // 0x145ad4: 0x2649006c  addiu       $t1, $s2, 0x6C
    ctx->pc = 0x145ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 108));
label_145ad8:
    // 0x145ad8: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x145ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145adc:
    // 0x145adc: 0x46008802  mul.s       $f0, $f17, $f0
    ctx->pc = 0x145adcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[17], ctx->f[0]);
label_145ae0:
    // 0x145ae0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145ae0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_145ae4:
    // 0x145ae4: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x145ae4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_145ae8:
    // 0x145ae8: 0x18600053  blez        $v1, . + 4 + (0x53 << 2)
label_145aec:
    if (ctx->pc == 0x145AECu) {
        ctx->pc = 0x145AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE8u;
        // 0x145aec: 0x28620100  slti        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145AF0u;
        goto label_145af0;
    }
    ctx->pc = 0x145AE8u;
    {
        const bool branch_taken_0x145ae8 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x145AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145AE8u;
        // 0x145aec: 0x28620100  slti        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)256) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ae8) {
            ctx->pc = 0x145C38u;
            goto label_145c38;
        }
    }
    ctx->pc = 0x145AF0u;
label_145af0:
    // 0x145af0: 0xc4e0fff8  lwc1        $f0, -0x8($a3)
    ctx->pc = 0x145af0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145af4:
    // 0x145af4: 0xc5240000  lwc1        $f4, 0x0($t1)
    ctx->pc = 0x145af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_145af8:
    // 0x145af8: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x145af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
label_145afc:
    // 0x145afc: 0xc6410194  lwc1        $f1, 0x194($s2)
    ctx->pc = 0x145afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_145b00:
    // 0x145b00: 0xc6420198  lwc1        $f2, 0x198($s2)
    ctx->pc = 0x145b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_145b04:
    // 0x145b04: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x145b04u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_145b08:
    // 0x145b08: 0xc4e30000  lwc1        $f3, 0x0($a3)
    ctx->pc = 0x145b08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_145b0c:
    // 0x145b0c: 0x460f0841  sub.s       $f1, $f1, $f15
    ctx->pc = 0x145b0cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[15]);
label_145b10:
    // 0x145b10: 0x460e1081  sub.s       $f2, $f2, $f14
    ctx->pc = 0x145b10u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[14]);
label_145b14:
    // 0x145b14: 0x182180a  movz        $v1, $t4, $v0
    ctx->pc = 0x145b14u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12));
label_145b18:
    // 0x145b18: 0x461318c2  mul.s       $f3, $f3, $f19
    ctx->pc = 0x145b18u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[19]);
label_145b1c:
    // 0x145b1c: 0xe4a90008  swc1        $f9, 0x8($a1)
    ctx->pc = 0x145b1cu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_145b20:
    // 0x145b20: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x145b20u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_145b24:
    // 0x145b24: 0xe4aa0018  swc1        $f10, 0x18($a1)
    ctx->pc = 0x145b24u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_145b28:
    // 0x145b28: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x145b28u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_145b2c:
    // 0x145b2c: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x145b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_145b30:
    // 0x145b30: 0x461218c2  mul.s       $f3, $f3, $f18
    ctx->pc = 0x145b30u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[18]);
label_145b34:
    // 0x145b34: 0x460f0840  add.s       $f1, $f1, $f15
    ctx->pc = 0x145b34u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[15]);
label_145b38:
    // 0x145b38: 0x460e1080  add.s       $f2, $f2, $f14
    ctx->pc = 0x145b38u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[14]);
label_145b3c:
    // 0x145b3c: 0x46101982  mul.s       $f6, $f3, $f16
    ctx->pc = 0x145b3cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[16]);
label_145b40:
    // 0x145b40: 0x460c2102  mul.s       $f4, $f4, $f12
    ctx->pc = 0x145b40u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[12]);
label_145b44:
    // 0x145b44: 0x46031141  sub.s       $f5, $f2, $f3
    ctx->pc = 0x145b44u;
    ctx->f[5] = FPU_SUB_S(ctx->f[2], ctx->f[3]);
label_145b48:
    // 0x145b48: 0x460609c1  sub.s       $f7, $f1, $f6
    ctx->pc = 0x145b48u;
    ctx->f[7] = FPU_SUB_S(ctx->f[1], ctx->f[6]);
label_145b4c:
    // 0x145b4c: 0x460c2200  add.s       $f8, $f4, $f12
    ctx->pc = 0x145b4cu;
    ctx->f[8] = FPU_ADD_S(ctx->f[4], ctx->f[12]);
label_145b50:
    // 0x145b50: 0xe4a40014  swc1        $f4, 0x14($a1)
    ctx->pc = 0x145b50u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_145b54:
    // 0x145b54: 0xe4a50004  swc1        $f5, 0x4($a1)
    ctx->pc = 0x145b54u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_145b58:
    // 0x145b58: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x145b58u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_145b5c:
    // 0x145b5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x145b5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145b60:
    // 0x145b60: 0x0  nop
    ctx->pc = 0x145b60u;
    // NOP
label_145b64:
    // 0x145b64: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x145b64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_145b68:
    // 0x145b68: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x145b68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_145b6c:
    // 0x145b6c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x145b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_145b70:
    // 0x145b70: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x145b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_145b74:
    // 0x145b74: 0xe4ab002c  swc1        $f11, 0x2C($a1)
    ctx->pc = 0x145b74u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_145b78:
    // 0x145b78: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_145b7c:
    // 0x145b7c: 0x46060840  add.s       $f1, $f1, $f6
    ctx->pc = 0x145b7cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[6]);
label_145b80:
    // 0x145b80: 0xe4a50004  swc1        $f5, 0x4($a1)
    ctx->pc = 0x145b80u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_145b84:
    // 0x145b84: 0xe4a40014  swc1        $f4, 0x14($a1)
    ctx->pc = 0x145b84u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_145b88:
    // 0x145b88: 0xe4a90008  swc1        $f9, 0x8($a1)
    ctx->pc = 0x145b88u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_145b8c:
    // 0x145b8c: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x145b8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_145b90:
    // 0x145b90: 0xe4aa0018  swc1        $f10, 0x18($a1)
    ctx->pc = 0x145b90u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_145b94:
    // 0x145b94: 0xe4ad0010  swc1        $f13, 0x10($a1)
    ctx->pc = 0x145b94u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_145b98:
    // 0x145b98: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x145b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_145b9c:
    // 0x145b9c: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x145b9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_145ba0:
    // 0x145ba0: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x145ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_145ba4:
    // 0x145ba4: 0xe4ab002c  swc1        $f11, 0x2C($a1)
    ctx->pc = 0x145ba4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_145ba8:
    // 0x145ba8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_145bac:
    // 0x145bac: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x145bacu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_145bb0:
    // 0x145bb0: 0xe4a10000  swc1        $f1, 0x0($a1)
    ctx->pc = 0x145bb0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_145bb4:
    // 0x145bb4: 0xe4a90008  swc1        $f9, 0x8($a1)
    ctx->pc = 0x145bb4u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_145bb8:
    // 0x145bb8: 0xe4aa0018  swc1        $f10, 0x18($a1)
    ctx->pc = 0x145bb8u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_145bbc:
    // 0x145bbc: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x145bbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_145bc0:
    // 0x145bc0: 0xe4ad0010  swc1        $f13, 0x10($a1)
    ctx->pc = 0x145bc0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_145bc4:
    // 0x145bc4: 0xe4a80014  swc1        $f8, 0x14($a1)
    ctx->pc = 0x145bc4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_145bc8:
    // 0x145bc8: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x145bc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_145bcc:
    // 0x145bcc: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x145bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_145bd0:
    // 0x145bd0: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x145bd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_145bd4:
    // 0x145bd4: 0xe4ab002c  swc1        $f11, 0x2C($a1)
    ctx->pc = 0x145bd4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_145bd8:
    // 0x145bd8: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x145bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_145bdc:
    // 0x145bdc: 0xe4a70000  swc1        $f7, 0x0($a1)
    ctx->pc = 0x145bdcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
label_145be0:
    // 0x145be0: 0xe4a20004  swc1        $f2, 0x4($a1)
    ctx->pc = 0x145be0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_145be4:
    // 0x145be4: 0xe4a80014  swc1        $f8, 0x14($a1)
    ctx->pc = 0x145be4u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_145be8:
    // 0x145be8: 0xe4a90008  swc1        $f9, 0x8($a1)
    ctx->pc = 0x145be8u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_145bec:
    // 0x145bec: 0xe4aa0018  swc1        $f10, 0x18($a1)
    ctx->pc = 0x145becu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
label_145bf0:
    // 0x145bf0: 0xaca00010  sw          $zero, 0x10($a1)
    ctx->pc = 0x145bf0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
label_145bf4:
    // 0x145bf4: 0xe4a00020  swc1        $f0, 0x20($a1)
    ctx->pc = 0x145bf4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
label_145bf8:
    // 0x145bf8: 0xe4a00028  swc1        $f0, 0x28($a1)
    ctx->pc = 0x145bf8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 40), bits); }
label_145bfc:
    // 0x145bfc: 0xe4a00024  swc1        $f0, 0x24($a1)
    ctx->pc = 0x145bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 36), bits); }
label_145c00:
    // 0x145c00: 0xe4ab002c  swc1        $f11, 0x2C($a1)
    ctx->pc = 0x145c00u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_145c04:
    // 0x145c04: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x145c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_145c08:
    // 0x145c08: 0x25040002  addiu       $a0, $t0, 0x2
    ctx->pc = 0x145c08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
label_145c0c:
    // 0x145c0c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x145c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_145c10:
    // 0x145c10: 0x25030003  addiu       $v1, $t0, 0x3
    ctx->pc = 0x145c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 3));
label_145c14:
    // 0x145c14: 0xa4c80000  sh          $t0, 0x0($a2)
    ctx->pc = 0x145c14u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 8));
label_145c18:
    // 0x145c18: 0xa4c80006  sh          $t0, 0x6($a2)
    ctx->pc = 0x145c18u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 6), (uint16_t)GPR_U32(ctx, 8));
label_145c1c:
    // 0x145c1c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x145c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_145c20:
    // 0x145c20: 0xa4c20002  sh          $v0, 0x2($a2)
    ctx->pc = 0x145c20u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 2), (uint16_t)GPR_U32(ctx, 2));
label_145c24:
    // 0x145c24: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x145c24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_145c28:
    // 0x145c28: 0xa4c40008  sh          $a0, 0x8($a2)
    ctx->pc = 0x145c28u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 8), (uint16_t)GPR_U32(ctx, 4));
label_145c2c:
    // 0x145c2c: 0xa4c3000a  sh          $v1, 0xA($a2)
    ctx->pc = 0x145c2cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 10), (uint16_t)GPR_U32(ctx, 3));
label_145c30:
    // 0x145c30: 0xa4c40004  sh          $a0, 0x4($a2)
    ctx->pc = 0x145c30u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 4));
label_145c34:
    // 0x145c34: 0x24c6000c  addiu       $a2, $a2, 0xC
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
label_145c38:
    // 0x145c38: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x145c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
label_145c3c:
    // 0x145c3c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x145c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_145c40:
    // 0x145c40: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x145c40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_145c44:
    // 0x145c44: 0x29620008  slti        $v0, $t3, 0x8
    ctx->pc = 0x145c44u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)8) ? 1 : 0);
label_145c48:
    // 0x145c48: 0x1440ffa3  bnez        $v0, . + 4 + (-0x5D << 2)
label_145c4c:
    if (ctx->pc == 0x145C4Cu) {
        ctx->pc = 0x145C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C48u;
        // 0x145c4c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C50u;
        goto label_145c50;
    }
    ctx->pc = 0x145C48u;
    {
        const bool branch_taken_0x145c48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C48u;
        // 0x145c4c: 0x25290010  addiu       $t1, $t1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c48) {
            ctx->pc = 0x145AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145ad8;
        }
    }
    ctx->pc = 0x145C50u;
label_145c50:
    // 0x145c50: 0x12800071  beqz        $s4, . + 4 + (0x71 << 2)
label_145c54:
    if (ctx->pc == 0x145C54u) {
        ctx->pc = 0x145C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C50u;
        // 0x145c54: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C58u;
        goto label_145c58;
    }
    ctx->pc = 0x145C50u;
    {
        const bool branch_taken_0x145c50 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C50u;
        // 0x145c54: 0x3c110073  lui         $s1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c50) {
            ctx->pc = 0x145E18u;
            goto label_145e18;
        }
    }
    ctx->pc = 0x145C58u;
label_145c58:
    // 0x145c58: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x145c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145c5c:
    // 0x145c5c: 0x26300fd8  addiu       $s0, $s1, 0xFD8
    ctx->pc = 0x145c5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_145c60:
    // 0x145c60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145c60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_145c64:
    // 0x145c64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145c68:
    // 0x145c68: 0x40f809  jalr        $v0
label_145c6c:
    if (ctx->pc == 0x145C6Cu) {
        ctx->pc = 0x145C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C68u;
        // 0x145c6c: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C70u;
        goto label_145c70;
    }
    ctx->pc = 0x145C68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145C70u);
        ctx->pc = 0x145C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C68u;
        // 0x145c6c: 0x149880  sll         $s3, $s4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C68u, 0x145C70u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145C70u;
label_145c70:
    // 0x145c70: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145c74:
    // 0x145c74: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x145c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_145c78:
    // 0x145c78: 0x40f809  jalr        $v0
label_145c7c:
    if (ctx->pc == 0x145C7Cu) {
        ctx->pc = 0x145C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C78u;
        // 0x145c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C80u;
        goto label_145c80;
    }
    ctx->pc = 0x145C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145C80u);
        ctx->pc = 0x145C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C78u;
        // 0x145c7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C78u, 0x145C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145C80u;
label_145c80:
    // 0x145c80: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145c84:
    // 0x145c84: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x145c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145c88:
    // 0x145c88: 0x40f809  jalr        $v0
label_145c8c:
    if (ctx->pc == 0x145C8Cu) {
        ctx->pc = 0x145C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C88u;
        // 0x145c8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145C90u;
        goto label_145c90;
    }
    ctx->pc = 0x145C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145C90u);
        ctx->pc = 0x145C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C88u;
        // 0x145c8c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C88u, 0x145C90u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145C90u;
label_145c90:
    // 0x145c90: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145c94:
    // 0x145c94: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x145c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_145c98:
    // 0x145c98: 0x40f809  jalr        $v0
label_145c9c:
    if (ctx->pc == 0x145C9Cu) {
        ctx->pc = 0x145C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C98u;
        // 0x145c9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CA0u;
        goto label_145ca0;
    }
    ctx->pc = 0x145C98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CA0u);
        ctx->pc = 0x145C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145C98u;
        // 0x145c9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145C98u, 0x145CA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CA0u;
label_145ca0:
    // 0x145ca0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145ca4:
    // 0x145ca4: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145ca8:
    // 0x145ca8: 0x40f809  jalr        $v0
label_145cac:
    if (ctx->pc == 0x145CACu) {
        ctx->pc = 0x145CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CA8u;
        // 0x145cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CB0u;
        goto label_145cb0;
    }
    ctx->pc = 0x145CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CB0u);
        ctx->pc = 0x145CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CA8u;
        // 0x145cac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CA8u, 0x145CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CB0u;
label_145cb0:
    // 0x145cb0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145cb4:
    // 0x145cb4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x145cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_145cb8:
    // 0x145cb8: 0x40f809  jalr        $v0
label_145cbc:
    if (ctx->pc == 0x145CBCu) {
        ctx->pc = 0x145CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CB8u;
        // 0x145cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CC0u;
        goto label_145cc0;
    }
    ctx->pc = 0x145CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CC0u);
        ctx->pc = 0x145CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CB8u;
        // 0x145cbc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CB8u, 0x145CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CC0u;
label_145cc0:
    // 0x145cc0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145cc4:
    // 0x145cc4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145cc8:
    // 0x145cc8: 0x40f809  jalr        $v0
label_145ccc:
    if (ctx->pc == 0x145CCCu) {
        ctx->pc = 0x145CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CC8u;
        // 0x145ccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CD0u;
        goto label_145cd0;
    }
    ctx->pc = 0x145CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CD0u);
        ctx->pc = 0x145CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CC8u;
        // 0x145ccc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CC8u, 0x145CD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CD0u;
label_145cd0:
    // 0x145cd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145cd4:
    // 0x145cd4: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_145cd8:
    // 0x145cd8: 0x40f809  jalr        $v0
label_145cdc:
    if (ctx->pc == 0x145CDCu) {
        ctx->pc = 0x145CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CD8u;
        // 0x145cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CE0u;
        goto label_145ce0;
    }
    ctx->pc = 0x145CD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145CE0u);
        ctx->pc = 0x145CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CD8u;
        // 0x145cdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CD8u, 0x145CE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CE0u;
label_145ce0:
    // 0x145ce0: 0xc0791e2  jal         func_1E4788
label_145ce4:
    if (ctx->pc == 0x145CE4u) {
        ctx->pc = 0x145CE8u;
        goto label_145ce8;
    }
    ctx->pc = 0x145CE0u;
    SET_GPR_U32(ctx, 31, 0x145CE8u);
    ctx->pc = 0x1E4788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4788u, 0x145CE0u, 0x145CE8u)) {
        return;
    }
    ctx->pc = 0x145CE8u;
label_145ce8:
    // 0x145ce8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x145ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145cec:
    // 0x145cec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x145cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_145cf0:
    // 0x145cf0: 0x60f809  jalr        $v1
label_145cf4:
    if (ctx->pc == 0x145CF4u) {
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF0u;
        // 0x145cf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145CF8u;
        goto label_145cf8;
    }
    ctx->pc = 0x145CF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x145CF8u);
        ctx->pc = 0x145CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145CF0u;
        // 0x145cf4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145CF0u, 0x145CF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145CF8u;
label_145cf8:
    // 0x145cf8: 0x27a30800  addiu       $v1, $sp, 0x800
    ctx->pc = 0x145cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2048));
label_145cfc:
    // 0x145cfc: 0x3a0102d  daddu       $v0, $sp, $zero
    ctx->pc = 0x145cfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145d00:
    // 0x145d00: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x145d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_145d04:
    // 0x145d04: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x145d04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_145d08:
    // 0x145d08: 0x78450000  lq          $a1, 0x0($v0)
    ctx->pc = 0x145d08u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_145d0c:
    // 0x145d0c: 0x78460010  lq          $a2, 0x10($v0)
    ctx->pc = 0x145d0cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_145d10:
    // 0x145d10: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x145d10u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
label_145d14:
    // 0x145d14: 0x7c660010  sq          $a2, 0x10($v1)
    ctx->pc = 0x145d14u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 6));
label_145d18:
    // 0x145d18: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x145d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_145d1c:
    // 0x145d1c: 0x1444fffa  bne         $v0, $a0, . + 4 + (-0x6 << 2)
label_145d20:
    if (ctx->pc == 0x145D20u) {
        ctx->pc = 0x145D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D1Cu;
        // 0x145d20: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D24u;
        goto label_145d24;
    }
    ctx->pc = 0x145D1Cu;
    {
        const bool branch_taken_0x145d1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x145D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D1Cu;
        // 0x145d20: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d1c) {
            ctx->pc = 0x145D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145d08;
        }
    }
    ctx->pc = 0x145D24u;
label_145d24:
    // 0x145d24: 0xc640010c  lwc1        $f0, 0x10C($s2)
    ctx->pc = 0x145d24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_145d28:
    // 0x145d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x145d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_145d2c:
    // 0x145d2c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x145d2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_145d30:
    // 0x145d30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x145d30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_145d34:
    // 0x145d34: 0x3c013e00  lui         $at, 0x3E00
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15872 << 16));
label_145d38:
    // 0x145d38: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145d38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_145d3c:
    // 0x145d3c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x145d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145d40:
    // 0x145d40: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x145d40u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_145d44:
    // 0x145d44: 0x1a60000e  blez        $s3, . + 4 + (0xE << 2)
label_145d48:
    if (ctx->pc == 0x145D48u) {
        ctx->pc = 0x145D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D44u;
        // 0x145d48: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D4Cu;
        goto label_145d4c;
    }
    ctx->pc = 0x145D44u;
    {
        const bool branch_taken_0x145d44 = (GPR_S64(ctx, 19) <= 0);
        ctx->pc = 0x145D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D44u;
        // 0x145d48: 0x46010002  mul.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d44) {
            ctx->pc = 0x145D80u;
            goto label_145d80;
        }
    }
    ctx->pc = 0x145D4Cu;
label_145d4c:
    // 0x145d4c: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x145d4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_145d50:
    // 0x145d50: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145d50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_145d54:
    // 0x145d54: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x145d54u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145d58:
    // 0x145d58: 0xe4a00010  swc1        $f0, 0x10($a1)
    ctx->pc = 0x145d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 16), bits); }
label_145d5c:
    // 0x145d5c: 0xe4a20014  swc1        $f2, 0x14($a1)
    ctx->pc = 0x145d5cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20), bits); }
label_145d60:
    // 0x145d60: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x145d60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_145d64:
    // 0x145d64: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x145d64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_145d68:
    // 0x145d68: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x145d68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
label_145d6c:
    // 0x145d6c: 0xe4a1002c  swc1        $f1, 0x2C($a1)
    ctx->pc = 0x145d6cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 44), bits); }
label_145d70:
    // 0x145d70: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_145d74:
    // 0x145d74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_145d78:
    if (ctx->pc == 0x145D78u) {
        ctx->pc = 0x145D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D74u;
        // 0x145d78: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D7Cu;
        goto label_145d7c;
    }
    ctx->pc = 0x145D74u;
    {
        const bool branch_taken_0x145d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D74u;
        // 0x145d78: 0x24a50040  addiu       $a1, $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d74) {
            ctx->pc = 0x145D58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_145d58;
        }
    }
    ctx->pc = 0x145D7Cu;
label_145d7c:
    // 0x145d7c: 0x0  nop
    ctx->pc = 0x145d7cu;
    // NOP
label_145d80:
    // 0x145d80: 0x26300fd8  addiu       $s0, $s1, 0xFD8
    ctx->pc = 0x145d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 4056));
label_145d84:
    // 0x145d84: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145d88:
    // 0x145d88: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145d8c:
    // 0x145d8c: 0x40f809  jalr        $v0
label_145d90:
    if (ctx->pc == 0x145D90u) {
        ctx->pc = 0x145D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D8Cu;
        // 0x145d90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145D94u;
        goto label_145d94;
    }
    ctx->pc = 0x145D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145D94u);
        ctx->pc = 0x145D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145D8Cu;
        // 0x145d90: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145D8Cu, 0x145D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145D94u;
label_145d94:
    // 0x145d94: 0x24110006  addiu       $s1, $zero, 0x6
    ctx->pc = 0x145d94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145d98:
    // 0x145d98: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x145d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_145d9c:
    // 0x145d9c: 0x2918818  mult        $s1, $s4, $s1
    ctx->pc = 0x145d9cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_145da0:
    // 0x145da0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x145da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145da4:
    // 0x145da4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x145da4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_145da8:
    // 0x145da8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x145da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_145dac:
    // 0x145dac: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x145dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_145db0:
    // 0x145db0: 0x40f809  jalr        $v0
label_145db4:
    if (ctx->pc == 0x145DB4u) {
        ctx->pc = 0x145DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DB0u;
        // 0x145db4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145DB8u;
        goto label_145db8;
    }
    ctx->pc = 0x145DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145DB8u);
        ctx->pc = 0x145DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DB0u;
        // 0x145db4: 0x220402d  daddu       $t0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145DB0u, 0x145DB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145DB8u;
label_145db8:
    // 0x145db8: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x145db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
label_145dbc:
    // 0x145dbc: 0xc091fdc  jal         func_247F70
label_145dc0:
    if (ctx->pc == 0x145DC0u) {
        ctx->pc = 0x145DC4u;
        goto label_145dc4;
    }
    ctx->pc = 0x145DBCu;
    SET_GPR_U32(ctx, 31, 0x145DC4u);
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x145DBCu, 0x145DC4u)) {
        return;
    }
    ctx->pc = 0x145DC4u;
label_145dc4:
    // 0x145dc4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145dc8:
    // 0x145dc8: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145dcc:
    // 0x145dcc: 0x40f809  jalr        $v0
label_145dd0:
    if (ctx->pc == 0x145DD0u) {
        ctx->pc = 0x145DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DCCu;
        // 0x145dd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145DD4u;
        goto label_145dd4;
    }
    ctx->pc = 0x145DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145DD4u);
        ctx->pc = 0x145DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DCCu;
        // 0x145dd0: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145DCCu, 0x145DD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145DD4u;
label_145dd4:
    // 0x145dd4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145dd8:
    // 0x145dd8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_145ddc:
    // 0x145ddc: 0x40f809  jalr        $v0
label_145de0:
    if (ctx->pc == 0x145DE0u) {
        ctx->pc = 0x145DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DDCu;
        // 0x145de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145DE4u;
        goto label_145de4;
    }
    ctx->pc = 0x145DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145DE4u);
        ctx->pc = 0x145DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DDCu;
        // 0x145de0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145DDCu, 0x145DE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145DE4u;
label_145de4:
    // 0x145de4: 0x8e4501c0  lw          $a1, 0x1C0($s2)
    ctx->pc = 0x145de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
label_145de8:
    // 0x145de8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145dec:
    // 0x145dec: 0x40f809  jalr        $v0
label_145df0:
    if (ctx->pc == 0x145DF0u) {
        ctx->pc = 0x145DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DECu;
        // 0x145df0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145DF4u;
        goto label_145df4;
    }
    ctx->pc = 0x145DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145DF4u);
        ctx->pc = 0x145DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145DECu;
        // 0x145df0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145DECu, 0x145DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145DF4u;
label_145df4:
    // 0x145df4: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x145df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_145df8:
    // 0x145df8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x145df8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_145dfc:
    // 0x145dfc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x145dfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_145e00:
    // 0x145e00: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x145e00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_145e04:
    // 0x145e04: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x145e04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_145e08:
    // 0x145e08: 0x40f809  jalr        $v0
label_145e0c:
    if (ctx->pc == 0x145E0Cu) {
        ctx->pc = 0x145E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E08u;
        // 0x145e0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145E10u;
        goto label_145e10;
    }
    ctx->pc = 0x145E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145E10u);
        ctx->pc = 0x145E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E08u;
        // 0x145e0c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145E08u, 0x145E10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145E10u;
label_145e10:
    // 0x145e10: 0xc091fdc  jal         func_247F70
label_145e14:
    if (ctx->pc == 0x145E14u) {
        ctx->pc = 0x145E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E10u;
        // 0x145e14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145E18u;
        goto label_145e18;
    }
    ctx->pc = 0x145E10u;
    SET_GPR_U32(ctx, 31, 0x145E18u);
    ctx->pc = 0x145E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E10u;
    // 0x145e14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247F70u, 0x145E10u, 0x145E18u)) {
        return;
    }
    ctx->pc = 0x145E18u;
label_145e18:
    // 0x145e18: 0x8ee284a8  lw          $v0, -0x7B58($s7)
    ctx->pc = 0x145e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294935720)));
label_145e1c:
    // 0x145e1c: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
label_145e20:
    if (ctx->pc == 0x145E20u) {
        ctx->pc = 0x145E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E1Cu;
        // 0x145e20: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145E24u;
        goto label_145e24;
    }
    ctx->pc = 0x145E1Cu;
    {
        const bool branch_taken_0x145e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E1Cu;
        // 0x145e20: 0x3c110034  lui         $s1, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e1c) {
            ctx->pc = 0x145FD8u;
            goto label_145fd8;
        }
    }
    ctx->pc = 0x145E24u;
label_145e24:
    // 0x145e24: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x145e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_145e28:
    // 0x145e28: 0x8e24848c  lw          $a0, -0x7B74($s1)
    ctx->pc = 0x145e28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935692)));
label_145e2c:
    // 0x145e2c: 0x27a51060  addiu       $a1, $sp, 0x1060
    ctx->pc = 0x145e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 4192));
label_145e30:
    // 0x145e30: 0xc4550080  lwc1        $f21, 0x80($v0)
    ctx->pc = 0x145e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_145e34:
    // 0x145e34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145e34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_145e38:
    // 0x145e38: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x145e38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_145e3c:
    // 0x145e3c: 0xc091de2  jal         func_247788
label_145e40:
    if (ctx->pc == 0x145E40u) {
        ctx->pc = 0x145E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E3Cu;
        // 0x145e40: 0x27a61064  addiu       $a2, $sp, 0x1064 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4196));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145E44u;
        goto label_145e44;
    }
    ctx->pc = 0x145E3Cu;
    SET_GPR_U32(ctx, 31, 0x145E44u);
    ctx->pc = 0x145E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E3Cu;
    // 0x145e40: 0x27a61064  addiu       $a2, $sp, 0x1064 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247788u, 0x145E3Cu, 0x145E44u)) {
        return;
    }
    ctx->pc = 0x145E44u;
label_145e44:
    // 0x145e44: 0x8fa51060  lw          $a1, 0x1060($sp)
    ctx->pc = 0x145e44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4192)));
label_145e48:
    // 0x145e48: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x145e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_145e4c:
    // 0x145e4c: 0x0  nop
    ctx->pc = 0x145e4cu;
    // NOP
label_145e50:
    // 0x145e50: 0x0  nop
    ctx->pc = 0x145e50u;
    // NOP
label_145e54:
    // 0x145e54: 0x4615b5c3  div.s       $f23, $f22, $f21
    ctx->pc = 0x145e54u;
    ctx->f[23] = FPU_DIV_S(ctx, ctx->f[22], ctx->f[21]);
label_145e58:
    // 0x145e58: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_145e5c:
    // 0x145e5c: 0x52942  srl         $a1, $a1, 5
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
label_145e60:
    // 0x145e60: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x145e60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_145e64:
    // 0x145e64: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x145e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_145e68:
    // 0x145e68: 0xc091f3e  jal         func_247CF8
label_145e6c:
    if (ctx->pc == 0x145E6Cu) {
        ctx->pc = 0x145E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145E68u;
        // 0x145e6c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
        ctx->in_delay_slot = false;
        ctx->pc = 0x145E70u;
        goto label_145e70;
    }
    ctx->pc = 0x145E68u;
    SET_GPR_U32(ctx, 31, 0x145E70u);
    ctx->pc = 0x145E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x145E68u;
    // 0x145e6c: 0x30a53fff  andi        $a1, $a1, 0x3FFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)16383);
    ctx->in_delay_slot = false;
    ctx->pc = 0x247CF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247CF8u, 0x145E68u, 0x145E70u)) {
        return;
    }
    ctx->pc = 0x145E70u;
label_145e70:
    // 0x145e70: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x145e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_145e74:
    // 0x145e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_145e78:
    // 0x145e78: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x145e78u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_145e7c:
    // 0x145e7c: 0xe7b40004  swc1        $f20, 0x4($sp)
    ctx->pc = 0x145e7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_145e80:
    // 0x145e80: 0xe7b50008  swc1        $f21, 0x8($sp)
    ctx->pc = 0x145e80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_145e84:
    // 0x145e84: 0xe7b70018  swc1        $f23, 0x18($sp)
    ctx->pc = 0x145e84u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_145e88:
    // 0x145e88: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x145e88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_145e8c:
    // 0x145e8c: 0xe7b40014  swc1        $f20, 0x14($sp)
    ctx->pc = 0x145e8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_145e90:
    // 0x145e90: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x145e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_145e94:
    // 0x145e94: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x145e94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_145e98:
    // 0x145e98: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x145e98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_145e9c:
    // 0x145e9c: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x145e9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_145ea0:
    // 0x145ea0: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x145ea0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_145ea4:
    // 0x145ea4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x145ea4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_145ea8:
    // 0x145ea8: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_145eac:
    // 0x145eac: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x145eacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_145eb0:
    // 0x145eb0: 0xe4540004  swc1        $f20, 0x4($v0)
    ctx->pc = 0x145eb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_145eb4:
    // 0x145eb4: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x145eb4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_145eb8:
    // 0x145eb8: 0xe4570018  swc1        $f23, 0x18($v0)
    ctx->pc = 0x145eb8u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_145ebc:
    // 0x145ebc: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x145ebcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_145ec0:
    // 0x145ec0: 0xe4540014  swc1        $f20, 0x14($v0)
    ctx->pc = 0x145ec0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_145ec4:
    // 0x145ec4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x145ec4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_145ec8:
    // 0x145ec8: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x145ec8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_145ecc:
    // 0x145ecc: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x145eccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_145ed0:
    // 0x145ed0: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x145ed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_145ed4:
    // 0x145ed4: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x145ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_145ed8:
    // 0x145ed8: 0xe7a00080  swc1        $f0, 0x80($sp)
    ctx->pc = 0x145ed8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_145edc:
    // 0x145edc: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x145edcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_145ee0:
    // 0x145ee0: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x145ee0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_145ee4:
    // 0x145ee4: 0xe4570018  swc1        $f23, 0x18($v0)
    ctx->pc = 0x145ee4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_145ee8:
    // 0x145ee8: 0xe4560010  swc1        $f22, 0x10($v0)
    ctx->pc = 0x145ee8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_145eec:
    // 0x145eec: 0xe4560014  swc1        $f22, 0x14($v0)
    ctx->pc = 0x145eecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_145ef0:
    // 0x145ef0: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x145ef0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_145ef4:
    // 0x145ef4: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x145ef4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_145ef8:
    // 0x145ef8: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x145ef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_145efc:
    // 0x145efc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x145efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_145f00:
    // 0x145f00: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x145f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_145f04:
    // 0x145f04: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x145f04u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_145f08:
    // 0x145f08: 0xe4550008  swc1        $f21, 0x8($v0)
    ctx->pc = 0x145f08u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_145f0c:
    // 0x145f0c: 0xe4570018  swc1        $f23, 0x18($v0)
    ctx->pc = 0x145f0cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_145f10:
    // 0x145f10: 0xe4540010  swc1        $f20, 0x10($v0)
    ctx->pc = 0x145f10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_145f14:
    // 0x145f14: 0xe4560014  swc1        $f22, 0x14($v0)
    ctx->pc = 0x145f14u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_145f18:
    // 0x145f18: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x145f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_145f1c:
    // 0x145f1c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x145f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_145f20:
    // 0x145f20: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x145f20u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_145f24:
    // 0x145f24: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x145f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_145f28:
    // 0x145f28: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x145f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_145f2c:
    // 0x145f2c: 0x3c100073  lui         $s0, 0x73
    ctx->pc = 0x145f2cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
label_145f30:
    // 0x145f30: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x145f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_145f34:
    // 0x145f34: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x145f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_145f38:
    // 0x145f38: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f3c:
    // 0x145f3c: 0x40f809  jalr        $v0
label_145f40:
    if (ctx->pc == 0x145F40u) {
        ctx->pc = 0x145F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F3Cu;
        // 0x145f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F44u;
        goto label_145f44;
    }
    ctx->pc = 0x145F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F44u);
        ctx->pc = 0x145F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F3Cu;
        // 0x145f40: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F3Cu, 0x145F44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F44u;
label_145f44:
    // 0x145f44: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f48:
    // 0x145f48: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x145f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_145f4c:
    // 0x145f4c: 0x40f809  jalr        $v0
label_145f50:
    if (ctx->pc == 0x145F50u) {
        ctx->pc = 0x145F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F4Cu;
        // 0x145f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F54u;
        goto label_145f54;
    }
    ctx->pc = 0x145F4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F54u);
        ctx->pc = 0x145F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F4Cu;
        // 0x145f50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F4Cu, 0x145F54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F54u;
label_145f54:
    // 0x145f54: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f58:
    // 0x145f58: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x145f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_145f5c:
    // 0x145f5c: 0x40f809  jalr        $v0
label_145f60:
    if (ctx->pc == 0x145F60u) {
        ctx->pc = 0x145F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F5Cu;
        // 0x145f60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F64u;
        goto label_145f64;
    }
    ctx->pc = 0x145F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F64u);
        ctx->pc = 0x145F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F5Cu;
        // 0x145f60: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F5Cu, 0x145F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F64u;
label_145f64:
    // 0x145f64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f68:
    // 0x145f68: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x145f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_145f6c:
    // 0x145f6c: 0x40f809  jalr        $v0
label_145f70:
    if (ctx->pc == 0x145F70u) {
        ctx->pc = 0x145F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F6Cu;
        // 0x145f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F74u;
        goto label_145f74;
    }
    ctx->pc = 0x145F6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F74u);
        ctx->pc = 0x145F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F6Cu;
        // 0x145f70: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F6Cu, 0x145F74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F74u;
label_145f74:
    // 0x145f74: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f78:
    // 0x145f78: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x145f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145f7c:
    // 0x145f7c: 0x40f809  jalr        $v0
label_145f80:
    if (ctx->pc == 0x145F80u) {
        ctx->pc = 0x145F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F7Cu;
        // 0x145f80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F84u;
        goto label_145f84;
    }
    ctx->pc = 0x145F7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F84u);
        ctx->pc = 0x145F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F7Cu;
        // 0x145f80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F7Cu, 0x145F84u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F84u;
label_145f84:
    // 0x145f84: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f88:
    // 0x145f88: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x145f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_145f8c:
    // 0x145f8c: 0x40f809  jalr        $v0
label_145f90:
    if (ctx->pc == 0x145F90u) {
        ctx->pc = 0x145F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F8Cu;
        // 0x145f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145F94u;
        goto label_145f94;
    }
    ctx->pc = 0x145F8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145F94u);
        ctx->pc = 0x145F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F8Cu;
        // 0x145f90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F8Cu, 0x145F94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145F94u;
label_145f94:
    // 0x145f94: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145f98:
    // 0x145f98: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x145f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_145f9c:
    // 0x145f9c: 0x40f809  jalr        $v0
label_145fa0:
    if (ctx->pc == 0x145FA0u) {
        ctx->pc = 0x145FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F9Cu;
        // 0x145fa0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145FA4u;
        goto label_145fa4;
    }
    ctx->pc = 0x145F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145FA4u);
        ctx->pc = 0x145FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145F9Cu;
        // 0x145fa0: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145F9Cu, 0x145FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145FA4u;
label_145fa4:
    // 0x145fa4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145fa8:
    // 0x145fa8: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x145fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_145fac:
    // 0x145fac: 0x40f809  jalr        $v0
label_145fb0:
    if (ctx->pc == 0x145FB0u) {
        ctx->pc = 0x145FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FACu;
        // 0x145fb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145FB4u;
        goto label_145fb4;
    }
    ctx->pc = 0x145FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145FB4u);
        ctx->pc = 0x145FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FACu;
        // 0x145fb0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FACu, 0x145FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145FB4u;
label_145fb4:
    // 0x145fb4: 0x8e25848c  lw          $a1, -0x7B74($s1)
    ctx->pc = 0x145fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294935692)));
label_145fb8:
    // 0x145fb8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x145fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_145fbc:
    // 0x145fbc: 0x40f809  jalr        $v0
label_145fc0:
    if (ctx->pc == 0x145FC0u) {
        ctx->pc = 0x145FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FBCu;
        // 0x145fc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145FC4u;
        goto label_145fc4;
    }
    ctx->pc = 0x145FBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145FC4u);
        ctx->pc = 0x145FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FBCu;
        // 0x145fc0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FBCu, 0x145FC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145FC4u;
label_145fc4:
    // 0x145fc4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x145fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_145fc8:
    // 0x145fc8: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_145fcc:
    // 0x145fcc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x145fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_145fd0:
    // 0x145fd0: 0x40f809  jalr        $v0
label_145fd4:
    if (ctx->pc == 0x145FD4u) {
        ctx->pc = 0x145FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FD0u;
        // 0x145fd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145FD8u;
        goto label_145fd8;
    }
    ctx->pc = 0x145FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x145FD8u);
        ctx->pc = 0x145FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FD0u;
        // 0x145fd4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x145FD0u, 0x145FD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x145FD8u;
label_145fd8:
    // 0x145fd8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x145fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_145fdc:
    // 0x145fdc: 0x8c6284ac  lw          $v0, -0x7B54($v1)
    ctx->pc = 0x145fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294935724)));
label_145fe0:
    // 0x145fe0: 0x1040006d  beqz        $v0, . + 4 + (0x6D << 2)
label_145fe4:
    if (ctx->pc == 0x145FE4u) {
        ctx->pc = 0x145FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FE0u;
        // 0x145fe4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x145FE8u;
        goto label_145fe8;
    }
    ctx->pc = 0x145FE0u;
    {
        const bool branch_taken_0x145fe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x145FE0u;
        // 0x145fe4: 0x3c100073  lui         $s0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fe0) {
            ctx->pc = 0x146198u;
            goto label_146198;
        }
    }
    ctx->pc = 0x145FE8u;
label_145fe8:
    // 0x145fe8: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x145fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_145fec:
    // 0x145fec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x145fecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_145ff0:
    // 0x145ff0: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x145ff0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_145ff4:
    // 0x145ff4: 0xc4420080  lwc1        $f2, 0x80($v0)
    ctx->pc = 0x145ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_145ff8:
    // 0x145ff8: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x145ff8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
label_145ffc:
    // 0x145ffc: 0x44813800  mtc1        $at, $f7
    ctx->pc = 0x145ffcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[7], &bits, sizeof(bits)); }
label_146000:
    // 0x146000: 0x0  nop
    ctx->pc = 0x146000u;
    // NOP
label_146004:
    // 0x146004: 0x0  nop
    ctx->pc = 0x146004u;
    // NOP
label_146008:
    // 0x146008: 0x46021903  div.s       $f4, $f3, $f2
    ctx->pc = 0x146008u;
    ctx->f[4] = FPU_DIV_S(ctx, ctx->f[3], ctx->f[2]);
label_14600c:
    // 0x14600c: 0x3c014200  lui         $at, 0x4200
    ctx->pc = 0x14600cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16896 << 16));
label_146010:
    // 0x146010: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x146010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_146014:
    // 0x146014: 0xe7a70000  swc1        $f7, 0x0($sp)
    ctx->pc = 0x146014u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_146018:
    // 0x146018: 0xe7a60004  swc1        $f6, 0x4($sp)
    ctx->pc = 0x146018u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14601c:
    // 0x14601c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x14601cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_146020:
    // 0x146020: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x146020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_146024:
    // 0x146024: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x146024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_146028:
    // 0x146028: 0xe7a40018  swc1        $f4, 0x18($sp)
    ctx->pc = 0x146028u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_14602c:
    // 0x14602c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_146030:
    // 0x146030: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x146030u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_146034:
    // 0x146034: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x146034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_146038:
    // 0x146038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x146038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14603c:
    // 0x14603c: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x14603cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_146040:
    // 0x146040: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x146040u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_146044:
    // 0x146044: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x146044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_146048:
    // 0x146048: 0xe7a1002c  swc1        $f1, 0x2C($sp)
    ctx->pc = 0x146048u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
label_14604c:
    // 0x14604c: 0x27a20040  addiu       $v0, $sp, 0x40
    ctx->pc = 0x14604cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_146050:
    // 0x146050: 0x3c014310  lui         $at, 0x4310
    ctx->pc = 0x146050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17168 << 16));
label_146054:
    // 0x146054: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x146054u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_146058:
    // 0x146058: 0x0  nop
    ctx->pc = 0x146058u;
    // NOP
label_14605c:
    // 0x14605c: 0xe7a50040  swc1        $f5, 0x40($sp)
    ctx->pc = 0x14605cu;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_146060:
    // 0x146060: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x146060u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_146064:
    // 0x146064: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x146064u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_146068:
    // 0x146068: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x146068u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_14606c:
    // 0x14606c: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x14606cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_146070:
    // 0x146070: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x146070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_146074:
    // 0x146074: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x146074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_146078:
    // 0x146078: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x146078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_14607c:
    // 0x14607c: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x14607cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_146080:
    // 0x146080: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x146080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_146084:
    // 0x146084: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x146084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_146088:
    // 0x146088: 0x3c0142c0  lui         $at, 0x42C0
    ctx->pc = 0x146088u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17088 << 16));
label_14608c:
    // 0x14608c: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x14608cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_146090:
    // 0x146090: 0xe7a50080  swc1        $f5, 0x80($sp)
    ctx->pc = 0x146090u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_146094:
    // 0x146094: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x146094u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_146098:
    // 0x146098: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x146098u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_14609c:
    // 0x14609c: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x14609cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1460a0:
    // 0x1460a0: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x1460a0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_1460a4:
    // 0x1460a4: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x1460a4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1460a8:
    // 0x1460a8: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1460a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1460ac:
    // 0x1460ac: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x1460acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_1460b0:
    // 0x1460b0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1460b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1460b4:
    // 0x1460b4: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1460b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1460b8:
    // 0x1460b8: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x1460b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1460bc:
    // 0x1460bc: 0xe7a700c0  swc1        $f7, 0xC0($sp)
    ctx->pc = 0x1460bcu;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_1460c0:
    // 0x1460c0: 0xe4460004  swc1        $f6, 0x4($v0)
    ctx->pc = 0x1460c0u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1460c4:
    // 0x1460c4: 0xe4420008  swc1        $f2, 0x8($v0)
    ctx->pc = 0x1460c4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1460c8:
    // 0x1460c8: 0xe4440018  swc1        $f4, 0x18($v0)
    ctx->pc = 0x1460c8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_1460cc:
    // 0x1460cc: 0xe4430014  swc1        $f3, 0x14($v0)
    ctx->pc = 0x1460ccu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_1460d0:
    // 0x1460d0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x1460d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_1460d4:
    // 0x1460d4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x1460d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_1460d8:
    // 0x1460d8: 0xe441002c  swc1        $f1, 0x2C($v0)
    ctx->pc = 0x1460d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
label_1460dc:
    // 0x1460dc: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x1460dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
label_1460e0:
    // 0x1460e0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x1460e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1460e4:
    // 0x1460e4: 0x26100fd8  addiu       $s0, $s0, 0xFD8
    ctx->pc = 0x1460e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4056));
label_1460e8:
    // 0x1460e8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x1460e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1460ec:
    // 0x1460ec: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1460ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1460f0:
    // 0x1460f0: 0x40f809  jalr        $v0
label_1460f4:
    if (ctx->pc == 0x1460F4u) {
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F0u;
        // 0x1460f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1460F8u;
        goto label_1460f8;
    }
    ctx->pc = 0x1460F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1460F8u);
        ctx->pc = 0x1460F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1460F0u;
        // 0x1460f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1460F0u, 0x1460F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1460F8u;
label_1460f8:
    // 0x1460f8: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1460f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1460fc:
    // 0x1460fc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1460fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_146100:
    // 0x146100: 0x40f809  jalr        $v0
label_146104:
    if (ctx->pc == 0x146104u) {
        ctx->pc = 0x146104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146100u;
        // 0x146104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146108u;
        goto label_146108;
    }
    ctx->pc = 0x146100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146108u);
        ctx->pc = 0x146104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146100u;
        // 0x146104: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146100u, 0x146108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146108u;
label_146108:
    // 0x146108: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14610c:
    // 0x14610c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x14610cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_146110:
    // 0x146110: 0x40f809  jalr        $v0
label_146114:
    if (ctx->pc == 0x146114u) {
        ctx->pc = 0x146114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146110u;
        // 0x146114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146118u;
        goto label_146118;
    }
    ctx->pc = 0x146110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146118u);
        ctx->pc = 0x146114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146110u;
        // 0x146114: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146110u, 0x146118u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146118u;
label_146118:
    // 0x146118: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14611c:
    // 0x14611c: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x14611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_146120:
    // 0x146120: 0x40f809  jalr        $v0
label_146124:
    if (ctx->pc == 0x146124u) {
        ctx->pc = 0x146124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146120u;
        // 0x146124: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146128u;
        goto label_146128;
    }
    ctx->pc = 0x146120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146128u);
        ctx->pc = 0x146124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146120u;
        // 0x146124: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146120u, 0x146128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146128u;
label_146128:
    // 0x146128: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14612c:
    // 0x14612c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x14612cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_146130:
    // 0x146130: 0x40f809  jalr        $v0
label_146134:
    if (ctx->pc == 0x146134u) {
        ctx->pc = 0x146134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146130u;
        // 0x146134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146138u;
        goto label_146138;
    }
    ctx->pc = 0x146130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146138u);
        ctx->pc = 0x146134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146130u;
        // 0x146134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146130u, 0x146138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146138u;
label_146138:
    // 0x146138: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14613c:
    // 0x14613c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x14613cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_146140:
    // 0x146140: 0x40f809  jalr        $v0
label_146144:
    if (ctx->pc == 0x146144u) {
        ctx->pc = 0x146144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146140u;
        // 0x146144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146148u;
        goto label_146148;
    }
    ctx->pc = 0x146140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146148u);
        ctx->pc = 0x146144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146140u;
        // 0x146144: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146140u, 0x146148u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146148u;
label_146148:
    // 0x146148: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14614c:
    // 0x14614c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x14614cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_146150:
    // 0x146150: 0x40f809  jalr        $v0
label_146154:
    if (ctx->pc == 0x146154u) {
        ctx->pc = 0x146154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146150u;
        // 0x146154: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146158u;
        goto label_146158;
    }
    ctx->pc = 0x146150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146158u);
        ctx->pc = 0x146154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146150u;
        // 0x146154: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146150u, 0x146158u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146158u;
label_146158:
    // 0x146158: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x146158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_14615c:
    // 0x14615c: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x14615cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_146160:
    // 0x146160: 0x40f809  jalr        $v0
label_146164:
    if (ctx->pc == 0x146164u) {
        ctx->pc = 0x146164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146160u;
        // 0x146164: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146168u;
        goto label_146168;
    }
    ctx->pc = 0x146160u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146168u);
        ctx->pc = 0x146164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146160u;
        // 0x146164: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146160u, 0x146168u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146168u;
label_146168:
    // 0x146168: 0xc0791e2  jal         func_1E4788
label_14616c:
    if (ctx->pc == 0x14616Cu) {
        ctx->pc = 0x146170u;
        goto label_146170;
    }
    ctx->pc = 0x146168u;
    SET_GPR_U32(ctx, 31, 0x146170u);
    ctx->pc = 0x1E4788u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4788u, 0x146168u, 0x146170u)) {
        return;
    }
    ctx->pc = 0x146170u;
label_146170:
    // 0x146170: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x146170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_146174:
    // 0x146174: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x146174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146178:
    // 0x146178: 0x60f809  jalr        $v1
label_14617c:
    if (ctx->pc == 0x14617Cu) {
        ctx->pc = 0x14617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146178u;
        // 0x14617c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146180u;
        goto label_146180;
    }
    ctx->pc = 0x146178u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x146180u);
        ctx->pc = 0x14617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146178u;
        // 0x14617c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146178u, 0x146180u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146180u;
label_146180:
    // 0x146180: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x146180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_146184:
    // 0x146184: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x146184u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_146188:
    // 0x146188: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x146188u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_14618c:
    // 0x14618c: 0x40f809  jalr        $v0
label_146190:
    if (ctx->pc == 0x146190u) {
        ctx->pc = 0x146190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14618Cu;
        // 0x146190: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x146194u;
        goto label_146194;
    }
    ctx->pc = 0x14618Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x146194u);
        ctx->pc = 0x146190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14618Cu;
        // 0x146190: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14618Cu, 0x146194u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x146194u;
label_146194:
    // 0x146194: 0x0  nop
    ctx->pc = 0x146194u;
    // NOP
label_146198:
    // 0x146198: 0x7bb01100  lq          $s0, 0x1100($sp)
    ctx->pc = 0x146198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4352)));
label_14619c:
    // 0x14619c: 0x7bb110f0  lq          $s1, 0x10F0($sp)
    ctx->pc = 0x14619cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4336)));
label_1461a0:
    // 0x1461a0: 0x7bb210e0  lq          $s2, 0x10E0($sp)
    ctx->pc = 0x1461a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4320)));
label_1461a4:
    // 0x1461a4: 0x7bb310d0  lq          $s3, 0x10D0($sp)
    ctx->pc = 0x1461a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4304)));
label_1461a8:
    // 0x1461a8: 0x7bb410c0  lq          $s4, 0x10C0($sp)
    ctx->pc = 0x1461a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4288)));
label_1461ac:
    // 0x1461ac: 0x7bb510b0  lq          $s5, 0x10B0($sp)
    ctx->pc = 0x1461acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4272)));
label_1461b0:
    // 0x1461b0: 0x7bb610a0  lq          $s6, 0x10A0($sp)
    ctx->pc = 0x1461b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4256)));
label_1461b4:
    // 0x1461b4: 0x7bb71090  lq          $s7, 0x1090($sp)
    ctx->pc = 0x1461b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4240)));
label_1461b8:
    // 0x1461b8: 0x7bbe1080  lq          $fp, 0x1080($sp)
    ctx->pc = 0x1461b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4224)));
label_1461bc:
    // 0x1461bc: 0xdfbf1070  ld          $ra, 0x1070($sp)
    ctx->pc = 0x1461bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4208)));
label_1461c0:
    // 0x1461c0: 0xc7b71128  lwc1        $f23, 0x1128($sp)
    ctx->pc = 0x1461c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_1461c4:
    // 0x1461c4: 0xc7b61120  lwc1        $f22, 0x1120($sp)
    ctx->pc = 0x1461c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1461c8:
    // 0x1461c8: 0xc7b51118  lwc1        $f21, 0x1118($sp)
    ctx->pc = 0x1461c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1461cc:
    // 0x1461cc: 0xc7b41110  lwc1        $f20, 0x1110($sp)
    ctx->pc = 0x1461ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1461d0:
    // 0x1461d0: 0x3e00008  jr          $ra
label_1461d4:
    if (ctx->pc == 0x1461D4u) {
        ctx->pc = 0x1461D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461D0u;
        // 0x1461d4: 0x27bd1130  addiu       $sp, $sp, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1461D8u;
        goto label_fallthrough_0x1461d0;
    }
    ctx->pc = 0x1461D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1461D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1461D0u;
        // 0x1461d4: 0x27bd1130  addiu       $sp, $sp, 0x1130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1461D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1461d0:
    ctx->pc = 0x1461D8u;
}
