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

// Function: sub_001B0B70
// Address: 0x1b0b70 - 0x1b1058
void sub_001B0B70_0x1b0b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B0B70_0x1b0b70");
#endif

    switch (ctx->pc) {
        case 0x1b0b70u: goto label_1b0b70;
        case 0x1b0b74u: goto label_1b0b74;
        case 0x1b0b78u: goto label_1b0b78;
        case 0x1b0b7cu: goto label_1b0b7c;
        case 0x1b0b80u: goto label_1b0b80;
        case 0x1b0b84u: goto label_1b0b84;
        case 0x1b0b88u: goto label_1b0b88;
        case 0x1b0b8cu: goto label_1b0b8c;
        case 0x1b0b90u: goto label_1b0b90;
        case 0x1b0b94u: goto label_1b0b94;
        case 0x1b0b98u: goto label_1b0b98;
        case 0x1b0b9cu: goto label_1b0b9c;
        case 0x1b0ba0u: goto label_1b0ba0;
        case 0x1b0ba4u: goto label_1b0ba4;
        case 0x1b0ba8u: goto label_1b0ba8;
        case 0x1b0bacu: goto label_1b0bac;
        case 0x1b0bb0u: goto label_1b0bb0;
        case 0x1b0bb4u: goto label_1b0bb4;
        case 0x1b0bb8u: goto label_1b0bb8;
        case 0x1b0bbcu: goto label_1b0bbc;
        case 0x1b0bc0u: goto label_1b0bc0;
        case 0x1b0bc4u: goto label_1b0bc4;
        case 0x1b0bc8u: goto label_1b0bc8;
        case 0x1b0bccu: goto label_1b0bcc;
        case 0x1b0bd0u: goto label_1b0bd0;
        case 0x1b0bd4u: goto label_1b0bd4;
        case 0x1b0bd8u: goto label_1b0bd8;
        case 0x1b0bdcu: goto label_1b0bdc;
        case 0x1b0be0u: goto label_1b0be0;
        case 0x1b0be4u: goto label_1b0be4;
        case 0x1b0be8u: goto label_1b0be8;
        case 0x1b0becu: goto label_1b0bec;
        case 0x1b0bf0u: goto label_1b0bf0;
        case 0x1b0bf4u: goto label_1b0bf4;
        case 0x1b0bf8u: goto label_1b0bf8;
        case 0x1b0bfcu: goto label_1b0bfc;
        case 0x1b0c00u: goto label_1b0c00;
        case 0x1b0c04u: goto label_1b0c04;
        case 0x1b0c08u: goto label_1b0c08;
        case 0x1b0c0cu: goto label_1b0c0c;
        case 0x1b0c10u: goto label_1b0c10;
        case 0x1b0c14u: goto label_1b0c14;
        case 0x1b0c18u: goto label_1b0c18;
        case 0x1b0c1cu: goto label_1b0c1c;
        case 0x1b0c20u: goto label_1b0c20;
        case 0x1b0c24u: goto label_1b0c24;
        case 0x1b0c28u: goto label_1b0c28;
        case 0x1b0c2cu: goto label_1b0c2c;
        case 0x1b0c30u: goto label_1b0c30;
        case 0x1b0c34u: goto label_1b0c34;
        case 0x1b0c38u: goto label_1b0c38;
        case 0x1b0c3cu: goto label_1b0c3c;
        case 0x1b0c40u: goto label_1b0c40;
        case 0x1b0c44u: goto label_1b0c44;
        case 0x1b0c48u: goto label_1b0c48;
        case 0x1b0c4cu: goto label_1b0c4c;
        case 0x1b0c50u: goto label_1b0c50;
        case 0x1b0c54u: goto label_1b0c54;
        case 0x1b0c58u: goto label_1b0c58;
        case 0x1b0c5cu: goto label_1b0c5c;
        case 0x1b0c60u: goto label_1b0c60;
        case 0x1b0c64u: goto label_1b0c64;
        case 0x1b0c68u: goto label_1b0c68;
        case 0x1b0c6cu: goto label_1b0c6c;
        case 0x1b0c70u: goto label_1b0c70;
        case 0x1b0c74u: goto label_1b0c74;
        case 0x1b0c78u: goto label_1b0c78;
        case 0x1b0c7cu: goto label_1b0c7c;
        case 0x1b0c80u: goto label_1b0c80;
        case 0x1b0c84u: goto label_1b0c84;
        case 0x1b0c88u: goto label_1b0c88;
        case 0x1b0c8cu: goto label_1b0c8c;
        case 0x1b0c90u: goto label_1b0c90;
        case 0x1b0c94u: goto label_1b0c94;
        case 0x1b0c98u: goto label_1b0c98;
        case 0x1b0c9cu: goto label_1b0c9c;
        case 0x1b0ca0u: goto label_1b0ca0;
        case 0x1b0ca4u: goto label_1b0ca4;
        case 0x1b0ca8u: goto label_1b0ca8;
        case 0x1b0cacu: goto label_1b0cac;
        case 0x1b0cb0u: goto label_1b0cb0;
        case 0x1b0cb4u: goto label_1b0cb4;
        case 0x1b0cb8u: goto label_1b0cb8;
        case 0x1b0cbcu: goto label_1b0cbc;
        case 0x1b0cc0u: goto label_1b0cc0;
        case 0x1b0cc4u: goto label_1b0cc4;
        case 0x1b0cc8u: goto label_1b0cc8;
        case 0x1b0cccu: goto label_1b0ccc;
        case 0x1b0cd0u: goto label_1b0cd0;
        case 0x1b0cd4u: goto label_1b0cd4;
        case 0x1b0cd8u: goto label_1b0cd8;
        case 0x1b0cdcu: goto label_1b0cdc;
        case 0x1b0ce0u: goto label_1b0ce0;
        case 0x1b0ce4u: goto label_1b0ce4;
        case 0x1b0ce8u: goto label_1b0ce8;
        case 0x1b0cecu: goto label_1b0cec;
        case 0x1b0cf0u: goto label_1b0cf0;
        case 0x1b0cf4u: goto label_1b0cf4;
        case 0x1b0cf8u: goto label_1b0cf8;
        case 0x1b0cfcu: goto label_1b0cfc;
        case 0x1b0d00u: goto label_1b0d00;
        case 0x1b0d04u: goto label_1b0d04;
        case 0x1b0d08u: goto label_1b0d08;
        case 0x1b0d0cu: goto label_1b0d0c;
        case 0x1b0d10u: goto label_1b0d10;
        case 0x1b0d14u: goto label_1b0d14;
        case 0x1b0d18u: goto label_1b0d18;
        case 0x1b0d1cu: goto label_1b0d1c;
        case 0x1b0d20u: goto label_1b0d20;
        case 0x1b0d24u: goto label_1b0d24;
        case 0x1b0d28u: goto label_1b0d28;
        case 0x1b0d2cu: goto label_1b0d2c;
        case 0x1b0d30u: goto label_1b0d30;
        case 0x1b0d34u: goto label_1b0d34;
        case 0x1b0d38u: goto label_1b0d38;
        case 0x1b0d3cu: goto label_1b0d3c;
        case 0x1b0d40u: goto label_1b0d40;
        case 0x1b0d44u: goto label_1b0d44;
        case 0x1b0d48u: goto label_1b0d48;
        case 0x1b0d4cu: goto label_1b0d4c;
        case 0x1b0d50u: goto label_1b0d50;
        case 0x1b0d54u: goto label_1b0d54;
        case 0x1b0d58u: goto label_1b0d58;
        case 0x1b0d5cu: goto label_1b0d5c;
        case 0x1b0d60u: goto label_1b0d60;
        case 0x1b0d64u: goto label_1b0d64;
        case 0x1b0d68u: goto label_1b0d68;
        case 0x1b0d6cu: goto label_1b0d6c;
        case 0x1b0d70u: goto label_1b0d70;
        case 0x1b0d74u: goto label_1b0d74;
        case 0x1b0d78u: goto label_1b0d78;
        case 0x1b0d7cu: goto label_1b0d7c;
        case 0x1b0d80u: goto label_1b0d80;
        case 0x1b0d84u: goto label_1b0d84;
        case 0x1b0d88u: goto label_1b0d88;
        case 0x1b0d8cu: goto label_1b0d8c;
        case 0x1b0d90u: goto label_1b0d90;
        case 0x1b0d94u: goto label_1b0d94;
        case 0x1b0d98u: goto label_1b0d98;
        case 0x1b0d9cu: goto label_1b0d9c;
        case 0x1b0da0u: goto label_1b0da0;
        case 0x1b0da4u: goto label_1b0da4;
        case 0x1b0da8u: goto label_1b0da8;
        case 0x1b0dacu: goto label_1b0dac;
        case 0x1b0db0u: goto label_1b0db0;
        case 0x1b0db4u: goto label_1b0db4;
        case 0x1b0db8u: goto label_1b0db8;
        case 0x1b0dbcu: goto label_1b0dbc;
        case 0x1b0dc0u: goto label_1b0dc0;
        case 0x1b0dc4u: goto label_1b0dc4;
        case 0x1b0dc8u: goto label_1b0dc8;
        case 0x1b0dccu: goto label_1b0dcc;
        case 0x1b0dd0u: goto label_1b0dd0;
        case 0x1b0dd4u: goto label_1b0dd4;
        case 0x1b0dd8u: goto label_1b0dd8;
        case 0x1b0ddcu: goto label_1b0ddc;
        case 0x1b0de0u: goto label_1b0de0;
        case 0x1b0de4u: goto label_1b0de4;
        case 0x1b0de8u: goto label_1b0de8;
        case 0x1b0decu: goto label_1b0dec;
        case 0x1b0df0u: goto label_1b0df0;
        case 0x1b0df4u: goto label_1b0df4;
        case 0x1b0df8u: goto label_1b0df8;
        case 0x1b0dfcu: goto label_1b0dfc;
        case 0x1b0e00u: goto label_1b0e00;
        case 0x1b0e04u: goto label_1b0e04;
        case 0x1b0e08u: goto label_1b0e08;
        case 0x1b0e0cu: goto label_1b0e0c;
        case 0x1b0e10u: goto label_1b0e10;
        case 0x1b0e14u: goto label_1b0e14;
        case 0x1b0e18u: goto label_1b0e18;
        case 0x1b0e1cu: goto label_1b0e1c;
        case 0x1b0e20u: goto label_1b0e20;
        case 0x1b0e24u: goto label_1b0e24;
        case 0x1b0e28u: goto label_1b0e28;
        case 0x1b0e2cu: goto label_1b0e2c;
        case 0x1b0e30u: goto label_1b0e30;
        case 0x1b0e34u: goto label_1b0e34;
        case 0x1b0e38u: goto label_1b0e38;
        case 0x1b0e3cu: goto label_1b0e3c;
        case 0x1b0e40u: goto label_1b0e40;
        case 0x1b0e44u: goto label_1b0e44;
        case 0x1b0e48u: goto label_1b0e48;
        case 0x1b0e4cu: goto label_1b0e4c;
        case 0x1b0e50u: goto label_1b0e50;
        case 0x1b0e54u: goto label_1b0e54;
        case 0x1b0e58u: goto label_1b0e58;
        case 0x1b0e5cu: goto label_1b0e5c;
        case 0x1b0e60u: goto label_1b0e60;
        case 0x1b0e64u: goto label_1b0e64;
        case 0x1b0e68u: goto label_1b0e68;
        case 0x1b0e6cu: goto label_1b0e6c;
        case 0x1b0e70u: goto label_1b0e70;
        case 0x1b0e74u: goto label_1b0e74;
        case 0x1b0e78u: goto label_1b0e78;
        case 0x1b0e7cu: goto label_1b0e7c;
        case 0x1b0e80u: goto label_1b0e80;
        case 0x1b0e84u: goto label_1b0e84;
        case 0x1b0e88u: goto label_1b0e88;
        case 0x1b0e8cu: goto label_1b0e8c;
        case 0x1b0e90u: goto label_1b0e90;
        case 0x1b0e94u: goto label_1b0e94;
        case 0x1b0e98u: goto label_1b0e98;
        case 0x1b0e9cu: goto label_1b0e9c;
        case 0x1b0ea0u: goto label_1b0ea0;
        case 0x1b0ea4u: goto label_1b0ea4;
        case 0x1b0ea8u: goto label_1b0ea8;
        case 0x1b0eacu: goto label_1b0eac;
        case 0x1b0eb0u: goto label_1b0eb0;
        case 0x1b0eb4u: goto label_1b0eb4;
        case 0x1b0eb8u: goto label_1b0eb8;
        case 0x1b0ebcu: goto label_1b0ebc;
        case 0x1b0ec0u: goto label_1b0ec0;
        case 0x1b0ec4u: goto label_1b0ec4;
        case 0x1b0ec8u: goto label_1b0ec8;
        case 0x1b0eccu: goto label_1b0ecc;
        case 0x1b0ed0u: goto label_1b0ed0;
        case 0x1b0ed4u: goto label_1b0ed4;
        case 0x1b0ed8u: goto label_1b0ed8;
        case 0x1b0edcu: goto label_1b0edc;
        case 0x1b0ee0u: goto label_1b0ee0;
        case 0x1b0ee4u: goto label_1b0ee4;
        case 0x1b0ee8u: goto label_1b0ee8;
        case 0x1b0eecu: goto label_1b0eec;
        case 0x1b0ef0u: goto label_1b0ef0;
        case 0x1b0ef4u: goto label_1b0ef4;
        case 0x1b0ef8u: goto label_1b0ef8;
        case 0x1b0efcu: goto label_1b0efc;
        case 0x1b0f00u: goto label_1b0f00;
        case 0x1b0f04u: goto label_1b0f04;
        case 0x1b0f08u: goto label_1b0f08;
        case 0x1b0f0cu: goto label_1b0f0c;
        case 0x1b0f10u: goto label_1b0f10;
        case 0x1b0f14u: goto label_1b0f14;
        case 0x1b0f18u: goto label_1b0f18;
        case 0x1b0f1cu: goto label_1b0f1c;
        case 0x1b0f20u: goto label_1b0f20;
        case 0x1b0f24u: goto label_1b0f24;
        case 0x1b0f28u: goto label_1b0f28;
        case 0x1b0f2cu: goto label_1b0f2c;
        case 0x1b0f30u: goto label_1b0f30;
        case 0x1b0f34u: goto label_1b0f34;
        case 0x1b0f38u: goto label_1b0f38;
        case 0x1b0f3cu: goto label_1b0f3c;
        case 0x1b0f40u: goto label_1b0f40;
        case 0x1b0f44u: goto label_1b0f44;
        case 0x1b0f48u: goto label_1b0f48;
        case 0x1b0f4cu: goto label_1b0f4c;
        case 0x1b0f50u: goto label_1b0f50;
        case 0x1b0f54u: goto label_1b0f54;
        case 0x1b0f58u: goto label_1b0f58;
        case 0x1b0f5cu: goto label_1b0f5c;
        case 0x1b0f60u: goto label_1b0f60;
        case 0x1b0f64u: goto label_1b0f64;
        case 0x1b0f68u: goto label_1b0f68;
        case 0x1b0f6cu: goto label_1b0f6c;
        case 0x1b0f70u: goto label_1b0f70;
        case 0x1b0f74u: goto label_1b0f74;
        case 0x1b0f78u: goto label_1b0f78;
        case 0x1b0f7cu: goto label_1b0f7c;
        case 0x1b0f80u: goto label_1b0f80;
        case 0x1b0f84u: goto label_1b0f84;
        case 0x1b0f88u: goto label_1b0f88;
        case 0x1b0f8cu: goto label_1b0f8c;
        case 0x1b0f90u: goto label_1b0f90;
        case 0x1b0f94u: goto label_1b0f94;
        case 0x1b0f98u: goto label_1b0f98;
        case 0x1b0f9cu: goto label_1b0f9c;
        case 0x1b0fa0u: goto label_1b0fa0;
        case 0x1b0fa4u: goto label_1b0fa4;
        case 0x1b0fa8u: goto label_1b0fa8;
        case 0x1b0facu: goto label_1b0fac;
        case 0x1b0fb0u: goto label_1b0fb0;
        case 0x1b0fb4u: goto label_1b0fb4;
        case 0x1b0fb8u: goto label_1b0fb8;
        case 0x1b0fbcu: goto label_1b0fbc;
        case 0x1b0fc0u: goto label_1b0fc0;
        case 0x1b0fc4u: goto label_1b0fc4;
        case 0x1b0fc8u: goto label_1b0fc8;
        case 0x1b0fccu: goto label_1b0fcc;
        case 0x1b0fd0u: goto label_1b0fd0;
        case 0x1b0fd4u: goto label_1b0fd4;
        case 0x1b0fd8u: goto label_1b0fd8;
        case 0x1b0fdcu: goto label_1b0fdc;
        case 0x1b0fe0u: goto label_1b0fe0;
        case 0x1b0fe4u: goto label_1b0fe4;
        case 0x1b0fe8u: goto label_1b0fe8;
        case 0x1b0fecu: goto label_1b0fec;
        case 0x1b0ff0u: goto label_1b0ff0;
        case 0x1b0ff4u: goto label_1b0ff4;
        case 0x1b0ff8u: goto label_1b0ff8;
        case 0x1b0ffcu: goto label_1b0ffc;
        case 0x1b1000u: goto label_1b1000;
        case 0x1b1004u: goto label_1b1004;
        case 0x1b1008u: goto label_1b1008;
        case 0x1b100cu: goto label_1b100c;
        case 0x1b1010u: goto label_1b1010;
        case 0x1b1014u: goto label_1b1014;
        case 0x1b1018u: goto label_1b1018;
        case 0x1b101cu: goto label_1b101c;
        case 0x1b1020u: goto label_1b1020;
        case 0x1b1024u: goto label_1b1024;
        case 0x1b1028u: goto label_1b1028;
        case 0x1b102cu: goto label_1b102c;
        case 0x1b1030u: goto label_1b1030;
        case 0x1b1034u: goto label_1b1034;
        case 0x1b1038u: goto label_1b1038;
        case 0x1b103cu: goto label_1b103c;
        case 0x1b1040u: goto label_1b1040;
        case 0x1b1044u: goto label_1b1044;
        case 0x1b1048u: goto label_1b1048;
        case 0x1b104cu: goto label_1b104c;
        case 0x1b1050u: goto label_1b1050;
        case 0x1b1054u: goto label_1b1054;
        default: break;
    }

    ctx->pc = 0x1b0b70u;

label_1b0b70:
    // 0x1b0b70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1b0b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1b0b74:
    // 0x1b0b74: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x1b0b74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_1b0b78:
    // 0x1b0b78: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1b0b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1b0b7c:
    // 0x1b0b7c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b0b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b0b80:
    // 0x1b0b80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b0b80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b0b84:
    // 0x1b0b84: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1b0b84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_1b0b88:
    // 0x1b0b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b0b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1b0b8c:
    // 0x1b0b8c: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x1b0b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936704)));
label_1b0b90:
    // 0x1b0b90: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1b0b90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b0b94:
    // 0x1b0b94: 0x10c20004  beq         $a2, $v0, . + 4 + (0x4 << 2)
label_1b0b98:
    if (ctx->pc == 0x1B0B98u) {
        ctx->pc = 0x1B0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B94u;
        // 0x1b0b98: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0B9Cu;
        goto label_1b0b9c;
    }
    ctx->pc = 0x1B0B94u;
    {
        const bool branch_taken_0x1b0b94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1B0B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0B94u;
        // 0x1b0b98: 0x3c030070  lui         $v1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0b94) {
            ctx->pc = 0x1B0BA8u;
            goto label_1b0ba8;
        }
    }
    ctx->pc = 0x1B0B9Cu;
label_1b0b9c:
    // 0x1b0b9c: 0x8c628898  lw          $v0, -0x7768($v1)
    ctx->pc = 0x1b0b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
label_1b0ba0:
    // 0x1b0ba0: 0x14c200b6  bne         $a2, $v0, . + 4 + (0xB6 << 2)
label_1b0ba4:
    if (ctx->pc == 0x1B0BA4u) {
        ctx->pc = 0x1B0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BA0u;
        // 0x1b0ba4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BA8u;
        goto label_1b0ba8;
    }
    ctx->pc = 0x1B0BA0u;
    {
        const bool branch_taken_0x1b0ba0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1B0BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BA0u;
        // 0x1b0ba4: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ba0) {
            ctx->pc = 0x1B0E7Cu;
            goto label_1b0e7c;
        }
    }
    ctx->pc = 0x1B0BA8u;
label_1b0ba8:
    // 0x1b0ba8: 0x8cb20004  lw          $s2, 0x4($a1)
    ctx->pc = 0x1b0ba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b0bac:
    // 0x1b0bac: 0x52400004  beql        $s2, $zero, . + 4 + (0x4 << 2)
label_1b0bb0:
    if (ctx->pc == 0x1B0BB0u) {
        ctx->pc = 0x1B0BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BACu;
        // 0x1b0bb0: 0x8c638898  lw          $v1, -0x7768($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BB4u;
        goto label_1b0bb4;
    }
    ctx->pc = 0x1B0BACu;
    {
        const bool branch_taken_0x1b0bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bac) {
            ctx->pc = 0x1B0BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0BACu;
            // 0x1b0bb0: 0x8c638898  lw          $v1, -0x7768($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0BC0u;
            goto label_1b0bc0;
        }
    }
    ctx->pc = 0x1B0BB4u;
label_1b0bb4:
    // 0x1b0bb4: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1b0bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b0bb8:
    // 0x1b0bb8: 0xe6000138  swc1        $f0, 0x138($s0)
    ctx->pc = 0x1b0bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 312), bits); }
label_1b0bbc:
    // 0x1b0bbc: 0x8c638898  lw          $v1, -0x7768($v1)
    ctx->pc = 0x1b0bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936728)));
label_1b0bc0:
    // 0x1b0bc0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1b0bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1b0bc4:
    // 0x1b0bc4: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
label_1b0bc8:
    if (ctx->pc == 0x1B0BC8u) {
        ctx->pc = 0x1B0BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BC4u;
        // 0x1b0bc8: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BCCu;
        goto label_1b0bcc;
    }
    ctx->pc = 0x1B0BC4u;
    {
        const bool branch_taken_0x1b0bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0bc4) {
            ctx->pc = 0x1B0BC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0BC4u;
            // 0x1b0bc8: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0BF4u;
            goto label_1b0bf4;
        }
    }
    ctx->pc = 0x1B0BCCu;
label_1b0bcc:
    // 0x1b0bcc: 0x8e020158  lw          $v0, 0x158($s0)
    ctx->pc = 0x1b0bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_1b0bd0:
    // 0x1b0bd0: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_1b0bd4:
    if (ctx->pc == 0x1B0BD4u) {
        ctx->pc = 0x1B0BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BD0u;
        // 0x1b0bd4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BD8u;
        goto label_1b0bd8;
    }
    ctx->pc = 0x1B0BD0u;
    {
        const bool branch_taken_0x1b0bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bd0) {
            ctx->pc = 0x1B0BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0BD0u;
            // 0x1b0bd4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0BF4u;
            goto label_1b0bf4;
        }
    }
    ctx->pc = 0x1B0BD8u;
label_1b0bd8:
    // 0x1b0bd8: 0xc076062  jal         func_1D8188
label_1b0bdc:
    if (ctx->pc == 0x1B0BDCu) {
        ctx->pc = 0x1B0BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BD8u;
        // 0x1b0bdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BE0u;
        goto label_1b0be0;
    }
    ctx->pc = 0x1B0BD8u;
    SET_GPR_U32(ctx, 31, 0x1B0BE0u);
    ctx->pc = 0x1B0BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BD8u;
    // 0x1b0bdc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8188u, 0x1B0BD8u, 0x1B0BE0u)) {
        return;
    }
    ctx->pc = 0x1B0BE0u;
label_1b0be0:
    // 0x1b0be0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b0be4:
    if (ctx->pc == 0x1B0BE4u) {
        ctx->pc = 0x1B0BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BE0u;
        // 0x1b0be4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BE8u;
        goto label_1b0be8;
    }
    ctx->pc = 0x1B0BE0u;
    {
        const bool branch_taken_0x1b0be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0be0) {
            ctx->pc = 0x1B0BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0BE0u;
            // 0x1b0be4: 0x8e020218  lw          $v0, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0BF4u;
            goto label_1b0bf4;
        }
    }
    ctx->pc = 0x1B0BE8u;
label_1b0be8:
    // 0x1b0be8: 0xc04dbac  jal         func_136EB0
label_1b0bec:
    if (ctx->pc == 0x1B0BECu) {
        ctx->pc = 0x1B0BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0BE8u;
        // 0x1b0bec: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0BF0u;
        goto label_1b0bf0;
    }
    ctx->pc = 0x1B0BE8u;
    SET_GPR_U32(ctx, 31, 0x1B0BF0u);
    ctx->pc = 0x1B0BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0BE8u;
    // 0x1b0bec: 0xc64c0004  lwc1        $f12, 0x4($s2) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x136EB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x136EB0u, 0x1B0BE8u, 0x1B0BF0u)) {
        return;
    }
    ctx->pc = 0x1B0BF0u;
label_1b0bf0:
    // 0x1b0bf0: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x1b0bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_1b0bf4:
    // 0x1b0bf4: 0x14400088  bnez        $v0, . + 4 + (0x88 << 2)
label_1b0bf8:
    if (ctx->pc == 0x1B0BF8u) {
        ctx->pc = 0x1B0BFCu;
        goto label_1b0bfc;
    }
    ctx->pc = 0x1B0BF4u;
    {
        const bool branch_taken_0x1b0bf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0bf4) {
            ctx->pc = 0x1B0E18u;
            goto label_1b0e18;
        }
    }
    ctx->pc = 0x1B0BFCu;
label_1b0bfc:
    // 0x1b0bfc: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x1b0bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_1b0c00:
    // 0x1b0c00: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1b0c04:
    if (ctx->pc == 0x1B0C04u) {
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C00u;
        // 0x1b0c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C08u;
        goto label_1b0c08;
    }
    ctx->pc = 0x1B0C00u;
    {
        const bool branch_taken_0x1b0c00 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C00u;
        // 0x1b0c04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c00) {
            ctx->pc = 0x1B0C14u;
            goto label_1b0c14;
        }
    }
    ctx->pc = 0x1B0C08u;
label_1b0c08:
    // 0x1b0c08: 0xc04de98  jal         func_137A60
label_1b0c0c:
    if (ctx->pc == 0x1B0C0Cu) {
        ctx->pc = 0x1B0C10u;
        goto label_1b0c10;
    }
    ctx->pc = 0x1B0C08u;
    SET_GPR_U32(ctx, 31, 0x1B0C10u);
    ctx->pc = 0x137A60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x137A60u, 0x1B0C08u, 0x1B0C10u)) {
        return;
    }
    ctx->pc = 0x1B0C10u;
label_1b0c10:
    // 0x1b0c10: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1b0c10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c14:
    // 0x1b0c14: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1b0c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0c18:
    // 0x1b0c18: 0x8ca40008  lw          $a0, 0x8($a1)
    ctx->pc = 0x1b0c18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b0c1c:
    // 0x1b0c1c: 0x1880001f  blez        $a0, . + 4 + (0x1F << 2)
label_1b0c20:
    if (ctx->pc == 0x1B0C20u) {
        ctx->pc = 0x1B0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C1Cu;
        // 0x1b0c20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C24u;
        goto label_1b0c24;
    }
    ctx->pc = 0x1B0C1Cu;
    {
        const bool branch_taken_0x1b0c1c = (GPR_S64(ctx, 4) <= 0);
        ctx->pc = 0x1B0C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C1Cu;
        // 0x1b0c20: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c1c) {
            ctx->pc = 0x1B0C9Cu;
            goto label_1b0c9c;
        }
    }
    ctx->pc = 0x1B0C24u;
label_1b0c24:
    // 0x1b0c24: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x1b0c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_1b0c28:
    // 0x1b0c28: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x1b0c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1b0c2c:
    // 0x1b0c2c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b0c30:
    // 0x1b0c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b0c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b0c34:
    // 0x1b0c34: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1b0c38:
    if (ctx->pc == 0x1B0C38u) {
        ctx->pc = 0x1B0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C34u;
        // 0x1b0c38: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C3Cu;
        goto label_1b0c3c;
    }
    ctx->pc = 0x1B0C34u;
    {
        const bool branch_taken_0x1b0c34 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C34u;
        // 0x1b0c38: 0x8c510000  lw          $s1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c34) {
            ctx->pc = 0x1B0C80u;
            goto label_1b0c80;
        }
    }
    ctx->pc = 0x1B0C3Cu;
label_1b0c3c:
    // 0x1b0c3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0c40:
    // 0x1b0c40: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1b0c40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b0c44:
    // 0x1b0c44: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1b0c48:
    if (ctx->pc == 0x1B0C48u) {
        ctx->pc = 0x1B0C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C44u;
        // 0x1b0c48: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C4Cu;
        goto label_1b0c4c;
    }
    ctx->pc = 0x1B0C44u;
    {
        const bool branch_taken_0x1b0c44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c44) {
            ctx->pc = 0x1B0C48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0C44u;
            // 0x1b0c48: 0x8ce2000c  lw          $v0, 0xC($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0C58u;
            goto label_1b0c58;
        }
    }
    ctx->pc = 0x1B0C4Cu;
label_1b0c4c:
    // 0x1b0c4c: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x1b0c4cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
label_1b0c50:
    // 0x1b0c50: 0x1000000b  b           . + 4 + (0xB << 2)
label_1b0c54:
    if (ctx->pc == 0x1B0C54u) {
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C58u;
        goto label_1b0c58;
    }
    ctx->pc = 0x1B0C50u;
    {
        const bool branch_taken_0x1b0c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C50u;
        // 0x1b0c54: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c50) {
            ctx->pc = 0x1B0C80u;
            goto label_1b0c80;
        }
    }
    ctx->pc = 0x1B0C58u;
label_1b0c58:
    // 0x1b0c58: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x1b0c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_1b0c5c:
    // 0x1b0c5c: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x1b0c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1b0c60:
    // 0x1b0c60: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x1b0c60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_1b0c64:
    // 0x1b0c64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1b0c68:
    if (ctx->pc == 0x1B0C68u) {
        ctx->pc = 0x1B0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C64u;
        // 0x1b0c68: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C6Cu;
        goto label_1b0c6c;
    }
    ctx->pc = 0x1B0C64u;
    {
        const bool branch_taken_0x1b0c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C64u;
        // 0x1b0c68: 0xace3000c  sw          $v1, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0c64) {
            ctx->pc = 0x1B0C74u;
            goto label_1b0c74;
        }
    }
    ctx->pc = 0x1B0C6Cu;
label_1b0c6c:
    // 0x1b0c6c: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x1b0c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1b0c70:
    // 0x1b0c70: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x1b0c70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_1b0c74:
    // 0x1b0c74: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x1b0c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_1b0c78:
    // 0x1b0c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1b0c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1b0c7c:
    // 0x1b0c7c: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x1b0c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
label_1b0c80:
    // 0x1b0c80: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1b0c84:
    if (ctx->pc == 0x1B0C84u) {
        ctx->pc = 0x1B0C88u;
        goto label_1b0c88;
    }
    ctx->pc = 0x1B0C80u;
    {
        const bool branch_taken_0x1b0c80 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c80) {
            ctx->pc = 0x1B0C9Cu;
            goto label_1b0c9c;
        }
    }
    ctx->pc = 0x1B0C88u;
label_1b0c88:
    // 0x1b0c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0c8c:
    // 0x1b0c8c: 0xc06c150  jal         func_1B0540
label_1b0c90:
    if (ctx->pc == 0x1B0C90u) {
        ctx->pc = 0x1B0C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C8Cu;
        // 0x1b0c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C94u;
        goto label_1b0c94;
    }
    ctx->pc = 0x1B0C8Cu;
    SET_GPR_U32(ctx, 31, 0x1B0C94u);
    ctx->pc = 0x1B0C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C8Cu;
    // 0x1b0c90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0540u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B0540u, 0x1B0C8Cu, 0x1B0C94u)) {
        return;
    }
    ctx->pc = 0x1B0C94u;
label_1b0c94:
    // 0x1b0c94: 0xc0808b8  jal         func_2022E0
label_1b0c98:
    if (ctx->pc == 0x1B0C98u) {
        ctx->pc = 0x1B0C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C94u;
        // 0x1b0c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0C9Cu;
        goto label_1b0c9c;
    }
    ctx->pc = 0x1B0C94u;
    SET_GPR_U32(ctx, 31, 0x1B0C9Cu);
    ctx->pc = 0x1B0C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0C94u;
    // 0x1b0c98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B0C94u, 0x1B0C9Cu)) {
        return;
    }
    ctx->pc = 0x1B0C9Cu;
label_1b0c9c:
    // 0x1b0c9c: 0x5240000f  beql        $s2, $zero, . + 4 + (0xF << 2)
label_1b0ca0:
    if (ctx->pc == 0x1B0CA0u) {
        ctx->pc = 0x1B0CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0C9Cu;
        // 0x1b0ca0: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CA4u;
        goto label_1b0ca4;
    }
    ctx->pc = 0x1B0C9Cu;
    {
        const bool branch_taken_0x1b0c9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0c9c) {
            ctx->pc = 0x1B0CA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0C9Cu;
            // 0x1b0ca0: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0CDCu;
            goto label_1b0cdc;
        }
    }
    ctx->pc = 0x1B0CA4u;
label_1b0ca4:
    // 0x1b0ca4: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x1b0ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_1b0ca8:
    // 0x1b0ca8: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_1b0cac:
    if (ctx->pc == 0x1B0CACu) {
        ctx->pc = 0x1B0CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CA8u;
        // 0x1b0cac: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CB0u;
        goto label_1b0cb0;
    }
    ctx->pc = 0x1B0CA8u;
    {
        const bool branch_taken_0x1b0ca8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ca8) {
            ctx->pc = 0x1B0CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0CA8u;
            // 0x1b0cac: 0x8e02001c  lw          $v0, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0CDCu;
            goto label_1b0cdc;
        }
    }
    ctx->pc = 0x1B0CB0u;
label_1b0cb0:
    // 0x1b0cb0: 0x8e020150  lw          $v0, 0x150($s0)
    ctx->pc = 0x1b0cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1b0cb4:
    // 0x1b0cb4: 0x3842001b  xori        $v0, $v0, 0x1B
    ctx->pc = 0x1b0cb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)27);
label_1b0cb8:
    // 0x1b0cb8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1b0cbc:
    if (ctx->pc == 0x1B0CBCu) {
        ctx->pc = 0x1B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CB8u;
        // 0x1b0cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CC0u;
        goto label_1b0cc0;
    }
    ctx->pc = 0x1B0CB8u;
    {
        const bool branch_taken_0x1b0cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CB8u;
        // 0x1b0cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0cb8) {
            ctx->pc = 0x1B0CD8u;
            goto label_1b0cd8;
        }
    }
    ctx->pc = 0x1B0CC0u;
label_1b0cc0:
    // 0x1b0cc0: 0x8e060158  lw          $a2, 0x158($s0)
    ctx->pc = 0x1b0cc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_1b0cc4:
    // 0x1b0cc4: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b0cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b0cc8:
    // 0x1b0cc8: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x1b0cc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_1b0ccc:
    // 0x1b0ccc: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1b0cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1b0cd0:
    // 0x1b0cd0: 0x60f809  jalr        $v1
label_1b0cd4:
    if (ctx->pc == 0x1B0CD4u) {
        ctx->pc = 0x1B0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD0u;
        // 0x1b0cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CD8u;
        goto label_1b0cd8;
    }
    ctx->pc = 0x1B0CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0CD8u);
        ctx->pc = 0x1B0CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CD0u;
        // 0x1b0cd4: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0CD0u, 0x1B0CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0CD8u;
label_1b0cd8:
    // 0x1b0cd8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1b0cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1b0cdc:
    // 0x1b0cdc: 0x504000d8  beql        $v0, $zero, . + 4 + (0xD8 << 2)
label_1b0ce0:
    if (ctx->pc == 0x1B0CE0u) {
        ctx->pc = 0x1B0CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CDCu;
        // 0x1b0ce0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CE4u;
        goto label_1b0ce4;
    }
    ctx->pc = 0x1B0CDCu;
    {
        const bool branch_taken_0x1b0cdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cdc) {
            ctx->pc = 0x1B0CE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0CDCu;
            // 0x1b0ce0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0CE4u;
label_1b0ce4:
    // 0x1b0ce4: 0xc07be38  jal         func_1EF8E0
label_1b0ce8:
    if (ctx->pc == 0x1B0CE8u) {
        ctx->pc = 0x1B0CECu;
        goto label_1b0cec;
    }
    ctx->pc = 0x1B0CE4u;
    SET_GPR_U32(ctx, 31, 0x1B0CECu);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x1B0CE4u, 0x1B0CECu)) {
        return;
    }
    ctx->pc = 0x1B0CECu;
label_1b0cec:
    // 0x1b0cec: 0x544000d4  bnel        $v0, $zero, . + 4 + (0xD4 << 2)
label_1b0cf0:
    if (ctx->pc == 0x1B0CF0u) {
        ctx->pc = 0x1B0CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0CECu;
        // 0x1b0cf0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0CF4u;
        goto label_1b0cf4;
    }
    ctx->pc = 0x1B0CECu;
    {
        const bool branch_taken_0x1b0cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0cec) {
            ctx->pc = 0x1B0CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0CECu;
            // 0x1b0cf0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0CF4u;
label_1b0cf4:
    // 0x1b0cf4: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1b0cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
label_1b0cf8:
    // 0x1b0cf8: 0x261100f8  addiu       $s1, $s0, 0xF8
    ctx->pc = 0x1b0cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
label_1b0cfc:
    // 0x1b0cfc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d00:
    // 0x1b0d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0d04:
    // 0x1b0d04: 0xc0c493d  jal         func_3124F4
label_1b0d08:
    if (ctx->pc == 0x1B0D08u) {
        ctx->pc = 0x1B0D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D04u;
        // 0x1b0d08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D0Cu;
        goto label_1b0d0c;
    }
    ctx->pc = 0x1B0D04u;
    SET_GPR_U32(ctx, 31, 0x1B0D0Cu);
    ctx->pc = 0x1B0D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D04u;
    // 0x1b0d08: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B0D04u, 0x1B0D0Cu)) {
        return;
    }
    ctx->pc = 0x1B0D0Cu;
label_1b0d0c:
    // 0x1b0d0c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x1b0d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1b0d10:
    // 0x1b0d10: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_1b0d14:
    if (ctx->pc == 0x1B0D14u) {
        ctx->pc = 0x1B0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D10u;
        // 0x1b0d14: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D18u;
        goto label_1b0d18;
    }
    ctx->pc = 0x1B0D10u;
    {
        const bool branch_taken_0x1b0d10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D10u;
        // 0x1b0d14: 0x8e020024  lw          $v0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d10) {
            ctx->pc = 0x1B0D28u;
            goto label_1b0d28;
        }
    }
    ctx->pc = 0x1B0D18u;
label_1b0d18:
    // 0x1b0d18: 0x544000c8  bnel        $v0, $zero, . + 4 + (0xC8 << 2)
label_1b0d1c:
    if (ctx->pc == 0x1B0D1Cu) {
        ctx->pc = 0x1B0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D18u;
        // 0x1b0d1c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D20u;
        goto label_1b0d20;
    }
    ctx->pc = 0x1B0D18u;
    {
        const bool branch_taken_0x1b0d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0d18) {
            ctx->pc = 0x1B0D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0D18u;
            // 0x1b0d1c: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0D20u;
label_1b0d20:
    // 0x1b0d20: 0x100000c7  b           . + 4 + (0xC7 << 2)
label_1b0d24:
    if (ctx->pc == 0x1B0D24u) {
        ctx->pc = 0x1B0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D20u;
        // 0x1b0d24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D28u;
        goto label_1b0d28;
    }
    ctx->pc = 0x1B0D20u;
    {
        const bool branch_taken_0x1b0d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D20u;
        // 0x1b0d24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d20) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0D28u;
label_1b0d28:
    // 0x1b0d28: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1b0d2c:
    if (ctx->pc == 0x1B0D2Cu) {
        ctx->pc = 0x1B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D28u;
        // 0x1b0d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D30u;
        goto label_1b0d30;
    }
    ctx->pc = 0x1B0D28u;
    {
        const bool branch_taken_0x1b0d28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D28u;
        // 0x1b0d2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d28) {
            ctx->pc = 0x1B0D80u;
            goto label_1b0d80;
        }
    }
    ctx->pc = 0x1B0D30u;
label_1b0d30:
    // 0x1b0d30: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d34:
    // 0x1b0d34: 0xc06bede  jal         func_1AFB78
label_1b0d38:
    if (ctx->pc == 0x1B0D38u) {
        ctx->pc = 0x1B0D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D34u;
        // 0x1b0d38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D3Cu;
        goto label_1b0d3c;
    }
    ctx->pc = 0x1B0D34u;
    SET_GPR_U32(ctx, 31, 0x1B0D3Cu);
    ctx->pc = 0x1B0D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D34u;
    // 0x1b0d38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFB78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AFB78u, 0x1B0D34u, 0x1B0D3Cu)) {
        return;
    }
    ctx->pc = 0x1B0D3Cu;
label_1b0d3c:
    // 0x1b0d3c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b0d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1b0d40:
    // 0x1b0d40: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b0d40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1b0d44:
    // 0x1b0d44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0d44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0d48:
    // 0x1b0d48: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1b0d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
label_1b0d4c:
    // 0x1b0d4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d50:
    // 0x1b0d50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0d50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d54:
    // 0x1b0d54: 0xc07bf5e  jal         func_1EFD78
label_1b0d58:
    if (ctx->pc == 0x1B0D58u) {
        ctx->pc = 0x1B0D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D54u;
        // 0x1b0d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D5Cu;
        goto label_1b0d5c;
    }
    ctx->pc = 0x1B0D54u;
    SET_GPR_U32(ctx, 31, 0x1B0D5Cu);
    ctx->pc = 0x1B0D58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D54u;
    // 0x1b0d58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1B0D54u, 0x1B0D5Cu)) {
        return;
    }
    ctx->pc = 0x1B0D5Cu;
label_1b0d5c:
    // 0x1b0d5c: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b0d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1b0d60:
    // 0x1b0d60: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d64:
    // 0x1b0d64: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d68:
    // 0x1b0d68: 0xc0c493d  jal         func_3124F4
label_1b0d6c:
    if (ctx->pc == 0x1B0D6Cu) {
        ctx->pc = 0x1B0D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D68u;
        // 0x1b0d6c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D70u;
        goto label_1b0d70;
    }
    ctx->pc = 0x1B0D68u;
    SET_GPR_U32(ctx, 31, 0x1B0D70u);
    ctx->pc = 0x1B0D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D68u;
    // 0x1b0d6c: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B0D68u, 0x1B0D70u)) {
        return;
    }
    ctx->pc = 0x1B0D70u;
label_1b0d70:
    // 0x1b0d70: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1b0d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0d74:
    // 0x1b0d74: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1b0d74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1b0d78:
    // 0x1b0d78: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_1b0d7c:
    if (ctx->pc == 0x1B0D7Cu) {
        ctx->pc = 0x1B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D78u;
        // 0x1b0d7c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D80u;
        goto label_1b0d80;
    }
    ctx->pc = 0x1B0D78u;
    {
        const bool branch_taken_0x1b0d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D78u;
        // 0x1b0d7c: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0d78) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0D80u;
label_1b0d80:
    // 0x1b0d80: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b0d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1b0d84:
    // 0x1b0d84: 0x24a58918  addiu       $a1, $a1, -0x76E8
    ctx->pc = 0x1b0d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936856));
label_1b0d88:
    // 0x1b0d88: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d8c:
    // 0x1b0d8c: 0xc07fc98  jal         func_1FF260
label_1b0d90:
    if (ctx->pc == 0x1B0D90u) {
        ctx->pc = 0x1B0D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0D8Cu;
        // 0x1b0d90: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0D94u;
        goto label_1b0d94;
    }
    ctx->pc = 0x1B0D8Cu;
    SET_GPR_U32(ctx, 31, 0x1B0D94u);
    ctx->pc = 0x1B0D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0D8Cu;
    // 0x1b0d90: 0x2407000a  addiu       $a3, $zero, 0xA (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B0D8Cu, 0x1B0D94u)) {
        return;
    }
    ctx->pc = 0x1B0D94u;
label_1b0d94:
    // 0x1b0d94: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x1b0d94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_1b0d98:
    // 0x1b0d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0d9c:
    // 0x1b0d9c: 0x24a58910  addiu       $a1, $a1, -0x76F0
    ctx->pc = 0x1b0d9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936848));
label_1b0da0:
    // 0x1b0da0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0da0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0da4:
    // 0x1b0da4: 0xc07fc98  jal         func_1FF260
label_1b0da8:
    if (ctx->pc == 0x1B0DA8u) {
        ctx->pc = 0x1B0DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DA4u;
        // 0x1b0da8: 0x24077d00  addiu       $a3, $zero, 0x7D00 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DACu;
        goto label_1b0dac;
    }
    ctx->pc = 0x1B0DA4u;
    SET_GPR_U32(ctx, 31, 0x1B0DACu);
    ctx->pc = 0x1B0DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DA4u;
    // 0x1b0da8: 0x24077d00  addiu       $a3, $zero, 0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x1B0DA4u, 0x1B0DACu)) {
        return;
    }
    ctx->pc = 0x1B0DACu;
label_1b0dac:
    // 0x1b0dac: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x1b0dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_1b0db0:
    // 0x1b0db0: 0x3c014020  lui         $at, 0x4020
    ctx->pc = 0x1b0db0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16416 << 16));
label_1b0db4:
    // 0x1b0db4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1b0db4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1b0db8:
    // 0x1b0db8: 0x8c444120  lw          $a0, 0x4120($v0)
    ctx->pc = 0x1b0db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
label_1b0dbc:
    // 0x1b0dbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dc0:
    // 0x1b0dc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1b0dc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dc4:
    // 0x1b0dc4: 0xc07bf5e  jal         func_1EFD78
label_1b0dc8:
    if (ctx->pc == 0x1B0DC8u) {
        ctx->pc = 0x1B0DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DC4u;
        // 0x1b0dc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DCCu;
        goto label_1b0dcc;
    }
    ctx->pc = 0x1B0DC4u;
    SET_GPR_U32(ctx, 31, 0x1B0DCCu);
    ctx->pc = 0x1B0DC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DC4u;
    // 0x1b0dc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFD78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFD78u, 0x1B0DC4u, 0x1B0DCCu)) {
        return;
    }
    ctx->pc = 0x1B0DCCu;
label_1b0dcc:
    // 0x1b0dcc: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1b0dccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1b0dd0:
    // 0x1b0dd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1b0dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd4:
    // 0x1b0dd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0dd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dd8:
    // 0x1b0dd8: 0xc0c493d  jal         func_3124F4
label_1b0ddc:
    if (ctx->pc == 0x1B0DDCu) {
        ctx->pc = 0x1B0DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DD8u;
        // 0x1b0ddc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DE0u;
        goto label_1b0de0;
    }
    ctx->pc = 0x1B0DD8u;
    SET_GPR_U32(ctx, 31, 0x1B0DE0u);
    ctx->pc = 0x1B0DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DD8u;
    // 0x1b0ddc: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B0DD8u, 0x1B0DE0u)) {
        return;
    }
    ctx->pc = 0x1B0DE0u;
label_1b0de0:
    // 0x1b0de0: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1b0de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1b0de4:
    // 0x1b0de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0de8:
    // 0x1b0de8: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x1b0de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
label_1b0dec:
    // 0x1b0dec: 0x10600093  beqz        $v1, . + 4 + (0x93 << 2)
label_1b0df0:
    if (ctx->pc == 0x1B0DF0u) {
        ctx->pc = 0x1B0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DECu;
        // 0x1b0df0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0DF4u;
        goto label_1b0df4;
    }
    ctx->pc = 0x1B0DECu;
    {
        const bool branch_taken_0x1b0dec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DECu;
        // 0x1b0df0: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0dec) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0DF4u;
label_1b0df4:
    // 0x1b0df4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1b0df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1b0df8:
    // 0x1b0df8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b0df8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0dfc:
    // 0x1b0dfc: 0xc05eee2  jal         func_17BB88
label_1b0e00:
    if (ctx->pc == 0x1B0E00u) {
        ctx->pc = 0x1B0E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0DFCu;
        // 0x1b0e00: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E04u;
        goto label_1b0e04;
    }
    ctx->pc = 0x1B0DFCu;
    SET_GPR_U32(ctx, 31, 0x1B0E04u);
    ctx->pc = 0x1B0E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0DFCu;
    // 0x1b0e00: 0x8c44870c  lw          $a0, -0x78F4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936332)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17BB88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x17BB88u, 0x1B0DFCu, 0x1B0E04u)) {
        return;
    }
    ctx->pc = 0x1B0E04u;
label_1b0e04:
    // 0x1b0e04: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1b0e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1b0e08:
    // 0x1b0e08: 0xc076068  jal         func_1D81A0
label_1b0e0c:
    if (ctx->pc == 0x1B0E0Cu) {
        ctx->pc = 0x1B0E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E08u;
        // 0x1b0e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E10u;
        goto label_1b0e10;
    }
    ctx->pc = 0x1B0E08u;
    SET_GPR_U32(ctx, 31, 0x1B0E10u);
    ctx->pc = 0x1B0E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E08u;
    // 0x1b0e0c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D81A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D81A0u, 0x1B0E08u, 0x1B0E10u)) {
        return;
    }
    ctx->pc = 0x1B0E10u;
label_1b0e10:
    // 0x1b0e10: 0x1000008b  b           . + 4 + (0x8B << 2)
label_1b0e14:
    if (ctx->pc == 0x1B0E14u) {
        ctx->pc = 0x1B0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E10u;
        // 0x1b0e14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E18u;
        goto label_1b0e18;
    }
    ctx->pc = 0x1B0E10u;
    {
        const bool branch_taken_0x1b0e10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E10u;
        // 0x1b0e14: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e10) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0E18u;
label_1b0e18:
    // 0x1b0e18: 0xc07be38  jal         func_1EF8E0
label_1b0e1c:
    if (ctx->pc == 0x1B0E1Cu) {
        ctx->pc = 0x1B0E20u;
        goto label_1b0e20;
    }
    ctx->pc = 0x1B0E18u;
    SET_GPR_U32(ctx, 31, 0x1B0E20u);
    ctx->pc = 0x1EF8E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF8E0u, 0x1B0E18u, 0x1B0E20u)) {
        return;
    }
    ctx->pc = 0x1B0E20u;
label_1b0e20:
    // 0x1b0e20: 0x54400087  bnel        $v0, $zero, . + 4 + (0x87 << 2)
label_1b0e24:
    if (ctx->pc == 0x1B0E24u) {
        ctx->pc = 0x1B0E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E20u;
        // 0x1b0e24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E28u;
        goto label_1b0e28;
    }
    ctx->pc = 0x1B0E20u;
    {
        const bool branch_taken_0x1b0e20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e20) {
            ctx->pc = 0x1B0E24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E20u;
            // 0x1b0e24: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0E28u;
label_1b0e28:
    // 0x1b0e28: 0x8e02021c  lw          $v0, 0x21C($s0)
    ctx->pc = 0x1b0e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 540)));
label_1b0e2c:
    // 0x1b0e2c: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1b0e30:
    if (ctx->pc == 0x1B0E30u) {
        ctx->pc = 0x1B0E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E2Cu;
        // 0x1b0e30: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E34u;
        goto label_1b0e34;
    }
    ctx->pc = 0x1B0E2Cu;
    {
        const bool branch_taken_0x1b0e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e2c) {
            ctx->pc = 0x1B0E30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E2Cu;
            // 0x1b0e30: 0xae000218  sw          $zero, 0x218($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B0E64u;
            goto label_1b0e64;
        }
    }
    ctx->pc = 0x1B0E34u;
label_1b0e34:
    // 0x1b0e34: 0x8e060224  lw          $a2, 0x224($s0)
    ctx->pc = 0x1b0e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
label_1b0e38:
    // 0x1b0e38: 0x8e050220  lw          $a1, 0x220($s0)
    ctx->pc = 0x1b0e38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 544)));
label_1b0e3c:
    // 0x1b0e3c: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b0e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b0e40:
    // 0x1b0e40: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1b0e40u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
label_1b0e44:
    // 0x1b0e44: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x1b0e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1b0e48:
    // 0x1b0e48: 0x60f809  jalr        $v1
label_1b0e4c:
    if (ctx->pc == 0x1B0E4Cu) {
        ctx->pc = 0x1B0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E48u;
        // 0x1b0e4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E50u;
        goto label_1b0e50;
    }
    ctx->pc = 0x1B0E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0E50u);
        ctx->pc = 0x1B0E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E48u;
        // 0x1b0e4c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0E48u, 0x1B0E50u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0E50u;
label_1b0e50:
    // 0x1b0e50: 0xae00021c  sw          $zero, 0x21C($s0)
    ctx->pc = 0x1b0e50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 540), GPR_U32(ctx, 0));
label_1b0e54:
    // 0x1b0e54: 0xc06ca60  jal         func_1B2980
label_1b0e58:
    if (ctx->pc == 0x1B0E58u) {
        ctx->pc = 0x1B0E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E54u;
        // 0x1b0e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E5Cu;
        goto label_1b0e5c;
    }
    ctx->pc = 0x1B0E54u;
    SET_GPR_U32(ctx, 31, 0x1B0E5Cu);
    ctx->pc = 0x1B0E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E54u;
    // 0x1b0e58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B2980u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B2980u, 0x1B0E54u, 0x1B0E5Cu)) {
        return;
    }
    ctx->pc = 0x1B0E5Cu;
label_1b0e5c:
    // 0x1b0e5c: 0x10000078  b           . + 4 + (0x78 << 2)
label_1b0e60:
    if (ctx->pc == 0x1B0E60u) {
        ctx->pc = 0x1B0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E5Cu;
        // 0x1b0e60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E64u;
        goto label_1b0e64;
    }
    ctx->pc = 0x1B0E5Cu;
    {
        const bool branch_taken_0x1b0e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E5Cu;
        // 0x1b0e60: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e5c) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0E64u;
label_1b0e64:
    // 0x1b0e64: 0x260400f8  addiu       $a0, $s0, 0xF8
    ctx->pc = 0x1b0e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
label_1b0e68:
    // 0x1b0e68: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1b0e68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0e6c:
    // 0x1b0e6c: 0xc0c493d  jal         func_3124F4
label_1b0e70:
    if (ctx->pc == 0x1B0E70u) {
        ctx->pc = 0x1B0E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E6Cu;
        // 0x1b0e70: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E74u;
        goto label_1b0e74;
    }
    ctx->pc = 0x1B0E6Cu;
    SET_GPR_U32(ctx, 31, 0x1B0E74u);
    ctx->pc = 0x1B0E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E6Cu;
    // 0x1b0e70: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1B0E6Cu, 0x1B0E74u)) {
        return;
    }
    ctx->pc = 0x1B0E74u;
label_1b0e74:
    // 0x1b0e74: 0x10000072  b           . + 4 + (0x72 << 2)
label_1b0e78:
    if (ctx->pc == 0x1B0E78u) {
        ctx->pc = 0x1B0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E74u;
        // 0x1b0e78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E7Cu;
        goto label_1b0e7c;
    }
    ctx->pc = 0x1B0E74u;
    {
        const bool branch_taken_0x1b0e74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E74u;
        // 0x1b0e78: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e74) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0E7Cu;
label_1b0e7c:
    // 0x1b0e7c: 0x8c438918  lw          $v1, -0x76E8($v0)
    ctx->pc = 0x1b0e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936856)));
label_1b0e80:
    // 0x1b0e80: 0x14c3000a  bne         $a2, $v1, . + 4 + (0xA << 2)
label_1b0e84:
    if (ctx->pc == 0x1B0E84u) {
        ctx->pc = 0x1B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E80u;
        // 0x1b0e84: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E88u;
        goto label_1b0e88;
    }
    ctx->pc = 0x1B0E80u;
    {
        const bool branch_taken_0x1b0e80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E80u;
        // 0x1b0e84: 0x3c020070  lui         $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0e80) {
            ctx->pc = 0x1B0EACu;
            goto label_1b0eac;
        }
    }
    ctx->pc = 0x1B0E88u;
label_1b0e88:
    // 0x1b0e88: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b0e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b0e8c:
    // 0x1b0e8c: 0x5040006c  beql        $v0, $zero, . + 4 + (0x6C << 2)
label_1b0e90:
    if (ctx->pc == 0x1B0E90u) {
        ctx->pc = 0x1B0E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E8Cu;
        // 0x1b0e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0E94u;
        goto label_1b0e94;
    }
    ctx->pc = 0x1B0E8Cu;
    {
        const bool branch_taken_0x1b0e8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0e8c) {
            ctx->pc = 0x1B0E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0E8Cu;
            // 0x1b0e90: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0E94u;
label_1b0e94:
    // 0x1b0e94: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1b0e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b0e98:
    // 0x1b0e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1b0e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1b0e9c:
    // 0x1b0e9c: 0xc06c416  jal         func_1B1058
label_1b0ea0:
    if (ctx->pc == 0x1B0EA0u) {
        ctx->pc = 0x1B0EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0E9Cu;
        // 0x1b0ea0: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EA4u;
        goto label_1b0ea4;
    }
    ctx->pc = 0x1B0E9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0EA4u);
    ctx->pc = 0x1B0EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0E9Cu;
    // 0x1b0ea0: 0x8c45000c  lw          $a1, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1058u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B1058u, 0x1B0E9Cu, 0x1B0EA4u)) {
        return;
    }
    ctx->pc = 0x1B0EA4u;
label_1b0ea4:
    // 0x1b0ea4: 0x10000066  b           . + 4 + (0x66 << 2)
label_1b0ea8:
    if (ctx->pc == 0x1B0EA8u) {
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EACu;
        goto label_1b0eac;
    }
    ctx->pc = 0x1B0EA4u;
    {
        const bool branch_taken_0x1b0ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EA4u;
        // 0x1b0ea8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ea4) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0EACu;
label_1b0eac:
    // 0x1b0eac: 0x8c438910  lw          $v1, -0x76F0($v0)
    ctx->pc = 0x1b0eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294936848)));
label_1b0eb0:
    // 0x1b0eb0: 0x14c3000d  bne         $a2, $v1, . + 4 + (0xD << 2)
label_1b0eb4:
    if (ctx->pc == 0x1B0EB4u) {
        ctx->pc = 0x1B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EB0u;
        // 0x1b0eb4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EB8u;
        goto label_1b0eb8;
    }
    ctx->pc = 0x1B0EB0u;
    {
        const bool branch_taken_0x1b0eb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EB0u;
        // 0x1b0eb4: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0eb0) {
            ctx->pc = 0x1B0EE8u;
            goto label_1b0ee8;
        }
    }
    ctx->pc = 0x1B0EB8u;
label_1b0eb8:
    // 0x1b0eb8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1b0eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1b0ebc:
    // 0x1b0ebc: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_1b0ec0:
    if (ctx->pc == 0x1B0EC0u) {
        ctx->pc = 0x1B0EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EBCu;
        // 0x1b0ec0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EC4u;
        goto label_1b0ec4;
    }
    ctx->pc = 0x1B0EBCu;
    {
        const bool branch_taken_0x1b0ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b0ebc) {
            ctx->pc = 0x1B0EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0EBCu;
            // 0x1b0ec0: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0EC4u;
label_1b0ec4:
    // 0x1b0ec4: 0x8e060158  lw          $a2, 0x158($s0)
    ctx->pc = 0x1b0ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 344)));
label_1b0ec8:
    // 0x1b0ec8: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x1b0ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_1b0ecc:
    // 0x1b0ecc: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1b0eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1b0ed0:
    // 0x1b0ed0: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1b0ed0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1b0ed4:
    // 0x1b0ed4: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1b0ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1b0ed8:
    // 0x1b0ed8: 0x60f809  jalr        $v1
label_1b0edc:
    if (ctx->pc == 0x1B0EDCu) {
        ctx->pc = 0x1B0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ED8u;
        // 0x1b0edc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE0u;
        goto label_1b0ee0;
    }
    ctx->pc = 0x1B0ED8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1B0EE0u);
        ctx->pc = 0x1B0EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0ED8u;
        // 0x1b0edc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B0ED8u, 0x1B0EE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1B0EE0u;
label_1b0ee0:
    // 0x1b0ee0: 0x10000057  b           . + 4 + (0x57 << 2)
label_1b0ee4:
    if (ctx->pc == 0x1B0EE4u) {
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EE8u;
        goto label_1b0ee8;
    }
    ctx->pc = 0x1B0EE0u;
    {
        const bool branch_taken_0x1b0ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EE0u;
        // 0x1b0ee4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ee0) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0EE8u;
label_1b0ee8:
    // 0x1b0ee8: 0x8c43bcf0  lw          $v1, -0x4310($v0)
    ctx->pc = 0x1b0ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950128)));
label_1b0eec:
    // 0x1b0eec: 0x14c30004  bne         $a2, $v1, . + 4 + (0x4 << 2)
label_1b0ef0:
    if (ctx->pc == 0x1B0EF0u) {
        ctx->pc = 0x1B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EECu;
        // 0x1b0ef0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0EF4u;
        goto label_1b0ef4;
    }
    ctx->pc = 0x1B0EECu;
    {
        const bool branch_taken_0x1b0eec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EECu;
        // 0x1b0ef0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0eec) {
            ctx->pc = 0x1B0F00u;
            goto label_1b0f00;
        }
    }
    ctx->pc = 0x1B0EF4u;
label_1b0ef4:
    // 0x1b0ef4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b0ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1b0ef8:
    // 0x1b0ef8: 0x10000050  b           . + 4 + (0x50 << 2)
label_1b0efc:
    if (ctx->pc == 0x1B0EFCu) {
        ctx->pc = 0x1B0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EF8u;
        // 0x1b0efc: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F00u;
        goto label_1b0f00;
    }
    ctx->pc = 0x1B0EF8u;
    {
        const bool branch_taken_0x1b0ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0EF8u;
        // 0x1b0efc: 0xae020240  sw          $v0, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0ef8) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0F00u;
label_1b0f00:
    // 0x1b0f00: 0x8c43bcf8  lw          $v1, -0x4308($v0)
    ctx->pc = 0x1b0f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950136)));
label_1b0f04:
    // 0x1b0f04: 0x14c30003  bne         $a2, $v1, . + 4 + (0x3 << 2)
label_1b0f08:
    if (ctx->pc == 0x1B0F08u) {
        ctx->pc = 0x1B0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F04u;
        // 0x1b0f08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F0Cu;
        goto label_1b0f0c;
    }
    ctx->pc = 0x1B0F04u;
    {
        const bool branch_taken_0x1b0f04 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F04u;
        // 0x1b0f08: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f04) {
            ctx->pc = 0x1B0F14u;
            goto label_1b0f14;
        }
    }
    ctx->pc = 0x1B0F0Cu;
label_1b0f0c:
    // 0x1b0f0c: 0x1000004b  b           . + 4 + (0x4B << 2)
label_1b0f10:
    if (ctx->pc == 0x1B0F10u) {
        ctx->pc = 0x1B0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F0Cu;
        // 0x1b0f10: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F14u;
        goto label_1b0f14;
    }
    ctx->pc = 0x1B0F0Cu;
    {
        const bool branch_taken_0x1b0f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F0Cu;
        // 0x1b0f10: 0xae000240  sw          $zero, 0x240($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 576), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f0c) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0F14u;
label_1b0f14:
    // 0x1b0f14: 0x8c434710  lw          $v1, 0x4710($v0)
    ctx->pc = 0x1b0f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18192)));
label_1b0f18:
    // 0x1b0f18: 0x14c30024  bne         $a2, $v1, . + 4 + (0x24 << 2)
label_1b0f1c:
    if (ctx->pc == 0x1B0F1Cu) {
        ctx->pc = 0x1B0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F18u;
        // 0x1b0f1c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F20u;
        goto label_1b0f20;
    }
    ctx->pc = 0x1B0F18u;
    {
        const bool branch_taken_0x1b0f18 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B0F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F18u;
        // 0x1b0f1c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f18) {
            ctx->pc = 0x1B0FACu;
            goto label_1b0fac;
        }
    }
    ctx->pc = 0x1B0F20u;
label_1b0f20:
    // 0x1b0f20: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b0f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b0f24:
    // 0x1b0f24: 0xc0808f0  jal         func_2023C0
label_1b0f28:
    if (ctx->pc == 0x1B0F28u) {
        ctx->pc = 0x1B0F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F24u;
        // 0x1b0f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F2Cu;
        goto label_1b0f2c;
    }
    ctx->pc = 0x1B0F24u;
    SET_GPR_U32(ctx, 31, 0x1B0F2Cu);
    ctx->pc = 0x1B0F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F24u;
    // 0x1b0f28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0F24u, 0x1B0F2Cu)) {
        return;
    }
    ctx->pc = 0x1B0F2Cu;
label_1b0f2c:
    // 0x1b0f2c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b0f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f30:
    // 0x1b0f30: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b0f30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0f34:
    // 0x1b0f34: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1b0f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1b0f38:
    // 0x1b0f38: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b0f38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f3c:
    // 0x1b0f3c: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1b0f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1b0f40:
    // 0x1b0f40: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1b0f40u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1b0f44:
    // 0x1b0f44: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
label_1b0f48:
    if (ctx->pc == 0x1B0F48u) {
        ctx->pc = 0x1B0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F44u;
        // 0x1b0f48: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F4Cu;
        goto label_1b0f4c;
    }
    ctx->pc = 0x1B0F44u;
    {
        const bool branch_taken_0x1b0f44 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F44u;
        // 0x1b0f48: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f44) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0F4Cu;
label_1b0f4c:
    // 0x1b0f4c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b0f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b0f50:
    // 0x1b0f50: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b0f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1b0f54:
    // 0x1b0f54: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_1b0f58:
    if (ctx->pc == 0x1B0F58u) {
        ctx->pc = 0x1B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F54u;
        // 0x1b0f58: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F5Cu;
        goto label_1b0f5c;
    }
    ctx->pc = 0x1B0F54u;
    {
        const bool branch_taken_0x1b0f54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F54u;
        // 0x1b0f58: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f54) {
            ctx->pc = 0x1B0F90u;
            goto label_1b0f90;
        }
    }
    ctx->pc = 0x1B0F5Cu;
label_1b0f5c:
    // 0x1b0f5c: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b0f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1b0f60:
    // 0x1b0f60: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b0f60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b0f64:
    // 0x1b0f64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0f64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b0f68:
    // 0x1b0f68: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b0f68u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b0f6c:
    // 0x1b0f6c: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b0f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b0f70:
    // 0x1b0f70: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b0f70u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_1b0f74:
    // 0x1b0f74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b0f74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b0f78:
    // 0x1b0f78: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b0f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b0f7c:
    // 0x1b0f7c: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b0f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_1b0f80:
    // 0x1b0f80: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b0f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b0f84:
    // 0x1b0f84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b0f88:
    // 0x1b0f88: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b0f8c:
    if (ctx->pc == 0x1B0F8Cu) {
        ctx->pc = 0x1B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F88u;
        // 0x1b0f8c: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F90u;
        goto label_1b0f90;
    }
    ctx->pc = 0x1B0F88u;
    {
        const bool branch_taken_0x1b0f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F88u;
        // 0x1b0f8c: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f88) {
            ctx->pc = 0x1B0F94u;
            goto label_1b0f94;
        }
    }
    ctx->pc = 0x1B0F90u;
label_1b0f90:
    // 0x1b0f90: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b0f90u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b0f94:
    // 0x1b0f94: 0x1500002a  bnez        $t0, . + 4 + (0x2A << 2)
label_1b0f98:
    if (ctx->pc == 0x1B0F98u) {
        ctx->pc = 0x1B0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F94u;
        // 0x1b0f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0F9Cu;
        goto label_1b0f9c;
    }
    ctx->pc = 0x1B0F94u;
    {
        const bool branch_taken_0x1b0f94 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B0F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F94u;
        // 0x1b0f98: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0f94) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0F9Cu;
label_1b0f9c:
    // 0x1b0f9c: 0xc0808b8  jal         func_2022E0
label_1b0fa0:
    if (ctx->pc == 0x1B0FA0u) {
        ctx->pc = 0x1B0FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0F9Cu;
        // 0x1b0fa0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FA4u;
        goto label_1b0fa4;
    }
    ctx->pc = 0x1B0F9Cu;
    SET_GPR_U32(ctx, 31, 0x1B0FA4u);
    ctx->pc = 0x1B0FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0F9Cu;
    // 0x1b0fa0: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B0F9Cu, 0x1B0FA4u)) {
        return;
    }
    ctx->pc = 0x1B0FA4u;
label_1b0fa4:
    // 0x1b0fa4: 0x10000026  b           . + 4 + (0x26 << 2)
label_1b0fa8:
    if (ctx->pc == 0x1B0FA8u) {
        ctx->pc = 0x1B0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FA4u;
        // 0x1b0fa8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FACu;
        goto label_1b0fac;
    }
    ctx->pc = 0x1B0FA4u;
    {
        const bool branch_taken_0x1b0fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FA4u;
        // 0x1b0fa8: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fa4) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0FACu;
label_1b0fac:
    // 0x1b0fac: 0x8c434718  lw          $v1, 0x4718($v0)
    ctx->pc = 0x1b0facu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18200)));
label_1b0fb0:
    // 0x1b0fb0: 0x54c30023  bnel        $a2, $v1, . + 4 + (0x23 << 2)
label_1b0fb4:
    if (ctx->pc == 0x1B0FB4u) {
        ctx->pc = 0x1B0FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FB0u;
        // 0x1b0fb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FB8u;
        goto label_1b0fb8;
    }
    ctx->pc = 0x1B0FB0u;
    {
        const bool branch_taken_0x1b0fb0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b0fb0) {
            ctx->pc = 0x1B0FB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B0FB0u;
            // 0x1b0fb4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B0FB8u;
label_1b0fb8:
    // 0x1b0fb8: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x1b0fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1b0fbc:
    // 0x1b0fbc: 0xc0808f0  jal         func_2023C0
label_1b0fc0:
    if (ctx->pc == 0x1B0FC0u) {
        ctx->pc = 0x1B0FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FBCu;
        // 0x1b0fc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FC4u;
        goto label_1b0fc4;
    }
    ctx->pc = 0x1B0FBCu;
    SET_GPR_U32(ctx, 31, 0x1B0FC4u);
    ctx->pc = 0x1B0FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B0FBCu;
    // 0x1b0fc0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x1B0FBCu, 0x1B0FC4u)) {
        return;
    }
    ctx->pc = 0x1B0FC4u;
label_1b0fc4:
    // 0x1b0fc4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b0fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b0fc8:
    // 0x1b0fc8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x1b0fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1b0fcc:
    // 0x1b0fcc: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x1b0fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_1b0fd0:
    // 0x1b0fd0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1b0fd0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b0fd4:
    // 0x1b0fd4: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x1b0fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_1b0fd8:
    // 0x1b0fd8: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x1b0fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_1b0fdc:
    // 0x1b0fdc: 0x10c00017  beqz        $a2, . + 4 + (0x17 << 2)
label_1b0fe0:
    if (ctx->pc == 0x1B0FE0u) {
        ctx->pc = 0x1B0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FDCu;
        // 0x1b0fe0: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FE4u;
        goto label_1b0fe4;
    }
    ctx->pc = 0x1B0FDCu;
    {
        const bool branch_taken_0x1b0fdc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B0FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FDCu;
        // 0x1b0fe0: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fdc) {
            ctx->pc = 0x1B103Cu;
            goto label_1b103c;
        }
    }
    ctx->pc = 0x1B0FE4u;
label_1b0fe4:
    // 0x1b0fe4: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x1b0fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b0fe8:
    // 0x1b0fe8: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b0fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1b0fec:
    // 0x1b0fec: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
label_1b0ff0:
    if (ctx->pc == 0x1B0FF0u) {
        ctx->pc = 0x1B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FECu;
        // 0x1b0ff0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B0FF4u;
        goto label_1b0ff4;
    }
    ctx->pc = 0x1B0FECu;
    {
        const bool branch_taken_0x1b0fec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B0FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B0FECu;
        // 0x1b0ff0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b0fec) {
            ctx->pc = 0x1B1028u;
            goto label_1b1028;
        }
    }
    ctx->pc = 0x1B0FF4u;
label_1b0ff4:
    // 0x1b0ff4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x1b0ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_1b0ff8:
    // 0x1b0ff8: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1b0ff8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1b0ffc:
    // 0x1b0ffc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1b0ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1b1000:
    // 0x1b1000: 0x432023  subu        $a0, $v0, $v1
    ctx->pc = 0x1b1000u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1b1004:
    // 0x1b1004: 0x43182a  slt         $v1, $v0, $v1
    ctx->pc = 0x1b1004u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1b1008:
    // 0x1b1008: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1b1008u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
label_1b100c:
    // 0x1b100c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b100cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1b1010:
    // 0x1b1010: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1b1010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1b1014:
    // 0x1b1014: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x1b1014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 7));
label_1b1018:
    // 0x1b1018: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x1b1018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_1b101c:
    // 0x1b101c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b101cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1b1020:
    // 0x1b1020: 0x10000002  b           . + 4 + (0x2 << 2)
label_1b1024:
    if (ctx->pc == 0x1B1024u) {
        ctx->pc = 0x1B1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1020u;
        // 0x1b1024: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1028u;
        goto label_1b1028;
    }
    ctx->pc = 0x1B1020u;
    {
        const bool branch_taken_0x1b1020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1020u;
        // 0x1b1024: 0xacc30008  sw          $v1, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1020) {
            ctx->pc = 0x1B102Cu;
            goto label_1b102c;
        }
    }
    ctx->pc = 0x1B1028u;
label_1b1028:
    // 0x1b1028: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1b1028u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b102c:
    // 0x1b102c: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
label_1b1030:
    if (ctx->pc == 0x1B1030u) {
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1034u;
        goto label_1b1034;
    }
    ctx->pc = 0x1B102Cu;
    {
        const bool branch_taken_0x1b102c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B102Cu;
        // 0x1b1030: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b102c) {
            ctx->pc = 0x1B1040u;
            goto label_1b1040;
        }
    }
    ctx->pc = 0x1B1034u;
label_1b1034:
    // 0x1b1034: 0xc0808b8  jal         func_2022E0
label_1b1038:
    if (ctx->pc == 0x1B1038u) {
        ctx->pc = 0x1B1038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B1034u;
        // 0x1b1038: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B103Cu;
        goto label_1b103c;
    }
    ctx->pc = 0x1B1034u;
    SET_GPR_U32(ctx, 31, 0x1B103Cu);
    ctx->pc = 0x1B1038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1B1034u;
    // 0x1b1038: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x1B1034u, 0x1B103Cu)) {
        return;
    }
    ctx->pc = 0x1B103Cu;
label_1b103c:
    // 0x1b103c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1b103cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b1040:
    // 0x1b1040: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b1040u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b1044:
    // 0x1b1044: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1b1044u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b1048:
    // 0x1b1048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b1048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1b104c:
    // 0x1b104c: 0x3e00008  jr          $ra
label_1b1050:
    if (ctx->pc == 0x1B1050u) {
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1B1054u;
        goto label_1b1054;
    }
    ctx->pc = 0x1B104Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B1050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B104Cu;
        // 0x1b1050: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B104Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B1054u;
label_1b1054:
    // 0x1b1054: 0x0  nop
    ctx->pc = 0x1b1054u;
    // NOP
    ctx->pc = 0x1b1058u;
}
