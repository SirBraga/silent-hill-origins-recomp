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

// Function: sub_00122AE0
// Address: 0x122ae0 - 0x123028
void sub_00122AE0_0x122ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122AE0_0x122ae0");
#endif

    switch (ctx->pc) {
        case 0x122ae0u: goto label_122ae0;
        case 0x122ae4u: goto label_122ae4;
        case 0x122ae8u: goto label_122ae8;
        case 0x122aecu: goto label_122aec;
        case 0x122af0u: goto label_122af0;
        case 0x122af4u: goto label_122af4;
        case 0x122af8u: goto label_122af8;
        case 0x122afcu: goto label_122afc;
        case 0x122b00u: goto label_122b00;
        case 0x122b04u: goto label_122b04;
        case 0x122b08u: goto label_122b08;
        case 0x122b0cu: goto label_122b0c;
        case 0x122b10u: goto label_122b10;
        case 0x122b14u: goto label_122b14;
        case 0x122b18u: goto label_122b18;
        case 0x122b1cu: goto label_122b1c;
        case 0x122b20u: goto label_122b20;
        case 0x122b24u: goto label_122b24;
        case 0x122b28u: goto label_122b28;
        case 0x122b2cu: goto label_122b2c;
        case 0x122b30u: goto label_122b30;
        case 0x122b34u: goto label_122b34;
        case 0x122b38u: goto label_122b38;
        case 0x122b3cu: goto label_122b3c;
        case 0x122b40u: goto label_122b40;
        case 0x122b44u: goto label_122b44;
        case 0x122b48u: goto label_122b48;
        case 0x122b4cu: goto label_122b4c;
        case 0x122b50u: goto label_122b50;
        case 0x122b54u: goto label_122b54;
        case 0x122b58u: goto label_122b58;
        case 0x122b5cu: goto label_122b5c;
        case 0x122b60u: goto label_122b60;
        case 0x122b64u: goto label_122b64;
        case 0x122b68u: goto label_122b68;
        case 0x122b6cu: goto label_122b6c;
        case 0x122b70u: goto label_122b70;
        case 0x122b74u: goto label_122b74;
        case 0x122b78u: goto label_122b78;
        case 0x122b7cu: goto label_122b7c;
        case 0x122b80u: goto label_122b80;
        case 0x122b84u: goto label_122b84;
        case 0x122b88u: goto label_122b88;
        case 0x122b8cu: goto label_122b8c;
        case 0x122b90u: goto label_122b90;
        case 0x122b94u: goto label_122b94;
        case 0x122b98u: goto label_122b98;
        case 0x122b9cu: goto label_122b9c;
        case 0x122ba0u: goto label_122ba0;
        case 0x122ba4u: goto label_122ba4;
        case 0x122ba8u: goto label_122ba8;
        case 0x122bacu: goto label_122bac;
        case 0x122bb0u: goto label_122bb0;
        case 0x122bb4u: goto label_122bb4;
        case 0x122bb8u: goto label_122bb8;
        case 0x122bbcu: goto label_122bbc;
        case 0x122bc0u: goto label_122bc0;
        case 0x122bc4u: goto label_122bc4;
        case 0x122bc8u: goto label_122bc8;
        case 0x122bccu: goto label_122bcc;
        case 0x122bd0u: goto label_122bd0;
        case 0x122bd4u: goto label_122bd4;
        case 0x122bd8u: goto label_122bd8;
        case 0x122bdcu: goto label_122bdc;
        case 0x122be0u: goto label_122be0;
        case 0x122be4u: goto label_122be4;
        case 0x122be8u: goto label_122be8;
        case 0x122becu: goto label_122bec;
        case 0x122bf0u: goto label_122bf0;
        case 0x122bf4u: goto label_122bf4;
        case 0x122bf8u: goto label_122bf8;
        case 0x122bfcu: goto label_122bfc;
        case 0x122c00u: goto label_122c00;
        case 0x122c04u: goto label_122c04;
        case 0x122c08u: goto label_122c08;
        case 0x122c0cu: goto label_122c0c;
        case 0x122c10u: goto label_122c10;
        case 0x122c14u: goto label_122c14;
        case 0x122c18u: goto label_122c18;
        case 0x122c1cu: goto label_122c1c;
        case 0x122c20u: goto label_122c20;
        case 0x122c24u: goto label_122c24;
        case 0x122c28u: goto label_122c28;
        case 0x122c2cu: goto label_122c2c;
        case 0x122c30u: goto label_122c30;
        case 0x122c34u: goto label_122c34;
        case 0x122c38u: goto label_122c38;
        case 0x122c3cu: goto label_122c3c;
        case 0x122c40u: goto label_122c40;
        case 0x122c44u: goto label_122c44;
        case 0x122c48u: goto label_122c48;
        case 0x122c4cu: goto label_122c4c;
        case 0x122c50u: goto label_122c50;
        case 0x122c54u: goto label_122c54;
        case 0x122c58u: goto label_122c58;
        case 0x122c5cu: goto label_122c5c;
        case 0x122c60u: goto label_122c60;
        case 0x122c64u: goto label_122c64;
        case 0x122c68u: goto label_122c68;
        case 0x122c6cu: goto label_122c6c;
        case 0x122c70u: goto label_122c70;
        case 0x122c74u: goto label_122c74;
        case 0x122c78u: goto label_122c78;
        case 0x122c7cu: goto label_122c7c;
        case 0x122c80u: goto label_122c80;
        case 0x122c84u: goto label_122c84;
        case 0x122c88u: goto label_122c88;
        case 0x122c8cu: goto label_122c8c;
        case 0x122c90u: goto label_122c90;
        case 0x122c94u: goto label_122c94;
        case 0x122c98u: goto label_122c98;
        case 0x122c9cu: goto label_122c9c;
        case 0x122ca0u: goto label_122ca0;
        case 0x122ca4u: goto label_122ca4;
        case 0x122ca8u: goto label_122ca8;
        case 0x122cacu: goto label_122cac;
        case 0x122cb0u: goto label_122cb0;
        case 0x122cb4u: goto label_122cb4;
        case 0x122cb8u: goto label_122cb8;
        case 0x122cbcu: goto label_122cbc;
        case 0x122cc0u: goto label_122cc0;
        case 0x122cc4u: goto label_122cc4;
        case 0x122cc8u: goto label_122cc8;
        case 0x122cccu: goto label_122ccc;
        case 0x122cd0u: goto label_122cd0;
        case 0x122cd4u: goto label_122cd4;
        case 0x122cd8u: goto label_122cd8;
        case 0x122cdcu: goto label_122cdc;
        case 0x122ce0u: goto label_122ce0;
        case 0x122ce4u: goto label_122ce4;
        case 0x122ce8u: goto label_122ce8;
        case 0x122cecu: goto label_122cec;
        case 0x122cf0u: goto label_122cf0;
        case 0x122cf4u: goto label_122cf4;
        case 0x122cf8u: goto label_122cf8;
        case 0x122cfcu: goto label_122cfc;
        case 0x122d00u: goto label_122d00;
        case 0x122d04u: goto label_122d04;
        case 0x122d08u: goto label_122d08;
        case 0x122d0cu: goto label_122d0c;
        case 0x122d10u: goto label_122d10;
        case 0x122d14u: goto label_122d14;
        case 0x122d18u: goto label_122d18;
        case 0x122d1cu: goto label_122d1c;
        case 0x122d20u: goto label_122d20;
        case 0x122d24u: goto label_122d24;
        case 0x122d28u: goto label_122d28;
        case 0x122d2cu: goto label_122d2c;
        case 0x122d30u: goto label_122d30;
        case 0x122d34u: goto label_122d34;
        case 0x122d38u: goto label_122d38;
        case 0x122d3cu: goto label_122d3c;
        case 0x122d40u: goto label_122d40;
        case 0x122d44u: goto label_122d44;
        case 0x122d48u: goto label_122d48;
        case 0x122d4cu: goto label_122d4c;
        case 0x122d50u: goto label_122d50;
        case 0x122d54u: goto label_122d54;
        case 0x122d58u: goto label_122d58;
        case 0x122d5cu: goto label_122d5c;
        case 0x122d60u: goto label_122d60;
        case 0x122d64u: goto label_122d64;
        case 0x122d68u: goto label_122d68;
        case 0x122d6cu: goto label_122d6c;
        case 0x122d70u: goto label_122d70;
        case 0x122d74u: goto label_122d74;
        case 0x122d78u: goto label_122d78;
        case 0x122d7cu: goto label_122d7c;
        case 0x122d80u: goto label_122d80;
        case 0x122d84u: goto label_122d84;
        case 0x122d88u: goto label_122d88;
        case 0x122d8cu: goto label_122d8c;
        case 0x122d90u: goto label_122d90;
        case 0x122d94u: goto label_122d94;
        case 0x122d98u: goto label_122d98;
        case 0x122d9cu: goto label_122d9c;
        case 0x122da0u: goto label_122da0;
        case 0x122da4u: goto label_122da4;
        case 0x122da8u: goto label_122da8;
        case 0x122dacu: goto label_122dac;
        case 0x122db0u: goto label_122db0;
        case 0x122db4u: goto label_122db4;
        case 0x122db8u: goto label_122db8;
        case 0x122dbcu: goto label_122dbc;
        case 0x122dc0u: goto label_122dc0;
        case 0x122dc4u: goto label_122dc4;
        case 0x122dc8u: goto label_122dc8;
        case 0x122dccu: goto label_122dcc;
        case 0x122dd0u: goto label_122dd0;
        case 0x122dd4u: goto label_122dd4;
        case 0x122dd8u: goto label_122dd8;
        case 0x122ddcu: goto label_122ddc;
        case 0x122de0u: goto label_122de0;
        case 0x122de4u: goto label_122de4;
        case 0x122de8u: goto label_122de8;
        case 0x122decu: goto label_122dec;
        case 0x122df0u: goto label_122df0;
        case 0x122df4u: goto label_122df4;
        case 0x122df8u: goto label_122df8;
        case 0x122dfcu: goto label_122dfc;
        case 0x122e00u: goto label_122e00;
        case 0x122e04u: goto label_122e04;
        case 0x122e08u: goto label_122e08;
        case 0x122e0cu: goto label_122e0c;
        case 0x122e10u: goto label_122e10;
        case 0x122e14u: goto label_122e14;
        case 0x122e18u: goto label_122e18;
        case 0x122e1cu: goto label_122e1c;
        case 0x122e20u: goto label_122e20;
        case 0x122e24u: goto label_122e24;
        case 0x122e28u: goto label_122e28;
        case 0x122e2cu: goto label_122e2c;
        case 0x122e30u: goto label_122e30;
        case 0x122e34u: goto label_122e34;
        case 0x122e38u: goto label_122e38;
        case 0x122e3cu: goto label_122e3c;
        case 0x122e40u: goto label_122e40;
        case 0x122e44u: goto label_122e44;
        case 0x122e48u: goto label_122e48;
        case 0x122e4cu: goto label_122e4c;
        case 0x122e50u: goto label_122e50;
        case 0x122e54u: goto label_122e54;
        case 0x122e58u: goto label_122e58;
        case 0x122e5cu: goto label_122e5c;
        case 0x122e60u: goto label_122e60;
        case 0x122e64u: goto label_122e64;
        case 0x122e68u: goto label_122e68;
        case 0x122e6cu: goto label_122e6c;
        case 0x122e70u: goto label_122e70;
        case 0x122e74u: goto label_122e74;
        case 0x122e78u: goto label_122e78;
        case 0x122e7cu: goto label_122e7c;
        case 0x122e80u: goto label_122e80;
        case 0x122e84u: goto label_122e84;
        case 0x122e88u: goto label_122e88;
        case 0x122e8cu: goto label_122e8c;
        case 0x122e90u: goto label_122e90;
        case 0x122e94u: goto label_122e94;
        case 0x122e98u: goto label_122e98;
        case 0x122e9cu: goto label_122e9c;
        case 0x122ea0u: goto label_122ea0;
        case 0x122ea4u: goto label_122ea4;
        case 0x122ea8u: goto label_122ea8;
        case 0x122eacu: goto label_122eac;
        case 0x122eb0u: goto label_122eb0;
        case 0x122eb4u: goto label_122eb4;
        case 0x122eb8u: goto label_122eb8;
        case 0x122ebcu: goto label_122ebc;
        case 0x122ec0u: goto label_122ec0;
        case 0x122ec4u: goto label_122ec4;
        case 0x122ec8u: goto label_122ec8;
        case 0x122eccu: goto label_122ecc;
        case 0x122ed0u: goto label_122ed0;
        case 0x122ed4u: goto label_122ed4;
        case 0x122ed8u: goto label_122ed8;
        case 0x122edcu: goto label_122edc;
        case 0x122ee0u: goto label_122ee0;
        case 0x122ee4u: goto label_122ee4;
        case 0x122ee8u: goto label_122ee8;
        case 0x122eecu: goto label_122eec;
        case 0x122ef0u: goto label_122ef0;
        case 0x122ef4u: goto label_122ef4;
        case 0x122ef8u: goto label_122ef8;
        case 0x122efcu: goto label_122efc;
        case 0x122f00u: goto label_122f00;
        case 0x122f04u: goto label_122f04;
        case 0x122f08u: goto label_122f08;
        case 0x122f0cu: goto label_122f0c;
        case 0x122f10u: goto label_122f10;
        case 0x122f14u: goto label_122f14;
        case 0x122f18u: goto label_122f18;
        case 0x122f1cu: goto label_122f1c;
        case 0x122f20u: goto label_122f20;
        case 0x122f24u: goto label_122f24;
        case 0x122f28u: goto label_122f28;
        case 0x122f2cu: goto label_122f2c;
        case 0x122f30u: goto label_122f30;
        case 0x122f34u: goto label_122f34;
        case 0x122f38u: goto label_122f38;
        case 0x122f3cu: goto label_122f3c;
        case 0x122f40u: goto label_122f40;
        case 0x122f44u: goto label_122f44;
        case 0x122f48u: goto label_122f48;
        case 0x122f4cu: goto label_122f4c;
        case 0x122f50u: goto label_122f50;
        case 0x122f54u: goto label_122f54;
        case 0x122f58u: goto label_122f58;
        case 0x122f5cu: goto label_122f5c;
        case 0x122f60u: goto label_122f60;
        case 0x122f64u: goto label_122f64;
        case 0x122f68u: goto label_122f68;
        case 0x122f6cu: goto label_122f6c;
        case 0x122f70u: goto label_122f70;
        case 0x122f74u: goto label_122f74;
        case 0x122f78u: goto label_122f78;
        case 0x122f7cu: goto label_122f7c;
        case 0x122f80u: goto label_122f80;
        case 0x122f84u: goto label_122f84;
        case 0x122f88u: goto label_122f88;
        case 0x122f8cu: goto label_122f8c;
        case 0x122f90u: goto label_122f90;
        case 0x122f94u: goto label_122f94;
        case 0x122f98u: goto label_122f98;
        case 0x122f9cu: goto label_122f9c;
        case 0x122fa0u: goto label_122fa0;
        case 0x122fa4u: goto label_122fa4;
        case 0x122fa8u: goto label_122fa8;
        case 0x122facu: goto label_122fac;
        case 0x122fb0u: goto label_122fb0;
        case 0x122fb4u: goto label_122fb4;
        case 0x122fb8u: goto label_122fb8;
        case 0x122fbcu: goto label_122fbc;
        case 0x122fc0u: goto label_122fc0;
        case 0x122fc4u: goto label_122fc4;
        case 0x122fc8u: goto label_122fc8;
        case 0x122fccu: goto label_122fcc;
        case 0x122fd0u: goto label_122fd0;
        case 0x122fd4u: goto label_122fd4;
        case 0x122fd8u: goto label_122fd8;
        case 0x122fdcu: goto label_122fdc;
        case 0x122fe0u: goto label_122fe0;
        case 0x122fe4u: goto label_122fe4;
        case 0x122fe8u: goto label_122fe8;
        case 0x122fecu: goto label_122fec;
        case 0x122ff0u: goto label_122ff0;
        case 0x122ff4u: goto label_122ff4;
        case 0x122ff8u: goto label_122ff8;
        case 0x122ffcu: goto label_122ffc;
        case 0x123000u: goto label_123000;
        case 0x123004u: goto label_123004;
        case 0x123008u: goto label_123008;
        case 0x12300cu: goto label_12300c;
        case 0x123010u: goto label_123010;
        case 0x123014u: goto label_123014;
        case 0x123018u: goto label_123018;
        case 0x12301cu: goto label_12301c;
        case 0x123020u: goto label_123020;
        case 0x123024u: goto label_123024;
        default: break;
    }

    ctx->pc = 0x122ae0u;

label_122ae0:
    // 0x122ae0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x122ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_122ae4:
    // 0x122ae4: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x122ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_122ae8:
    // 0x122ae8: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x122ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_122aec:
    // 0x122aec: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x122aecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
label_122af0:
    // 0x122af0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x122af0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122af4:
    // 0x122af4: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x122af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_122af8:
    // 0x122af8: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x122af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_122afc:
    // 0x122afc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x122afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_122b00:
    // 0x122b00: 0x8e048668  lw          $a0, -0x7998($s0)
    ctx->pc = 0x122b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
label_122b04:
    // 0x122b04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x122b04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_122b08:
    // 0x122b08: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x122b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_122b0c:
    // 0x122b0c: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x122b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_122b10:
    // 0x122b10: 0x26720044  addiu       $s2, $s3, 0x44
    ctx->pc = 0x122b10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 68));
label_122b14:
    // 0x122b14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x122b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_122b18:
    // 0x122b18: 0xc05961c  jal         func_165870
label_122b1c:
    if (ctx->pc == 0x122B1Cu) {
        ctx->pc = 0x122B1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B18u;
        // 0x122b1c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B20u;
        goto label_122b20;
    }
    ctx->pc = 0x122B18u;
    SET_GPR_U32(ctx, 31, 0x122B20u);
    ctx->pc = 0x122B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B18u;
    // 0x122b1c: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165870u, 0x122B18u, 0x122B20u)) {
        return;
    }
    ctx->pc = 0x122B20u;
label_122b20:
    // 0x122b20: 0x8e048668  lw          $a0, -0x7998($s0)
    ctx->pc = 0x122b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294936168)));
label_122b24:
    // 0x122b24: 0xc059614  jal         func_165850
label_122b28:
    if (ctx->pc == 0x122B28u) {
        ctx->pc = 0x122B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B24u;
        // 0x122b28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B2Cu;
        goto label_122b2c;
    }
    ctx->pc = 0x122B24u;
    SET_GPR_U32(ctx, 31, 0x122B2Cu);
    ctx->pc = 0x122B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B24u;
    // 0x122b28: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x165850u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x165850u, 0x122B24u, 0x122B2Cu)) {
        return;
    }
    ctx->pc = 0x122B2Cu;
label_122b2c:
    // 0x122b2c: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x122b2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_122b30:
    // 0x122b30: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x122b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_122b34:
    // 0x122b34: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x122b34u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_122b38:
    // 0x122b38: 0x68620047  ldl         $v0, 0x47($v1)
    ctx->pc = 0x122b38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_122b3c:
    // 0x122b3c: 0x6c620040  ldr         $v0, 0x40($v1)
    ctx->pc = 0x122b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_122b40:
    // 0x122b40: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x122b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_122b44:
    // 0x122b44: 0xb2020017  sdl         $v0, 0x17($s0)
    ctx->pc = 0x122b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122b48:
    // 0x122b48: 0xb6020010  sdr         $v0, 0x10($s0)
    ctx->pc = 0x122b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122b4c:
    // 0x122b4c: 0xae040018  sw          $a0, 0x18($s0)
    ctx->pc = 0x122b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
label_122b50:
    // 0x122b50: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x122b50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
label_122b54:
    // 0x122b54: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x122b54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_122b58:
    // 0x122b58: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x122b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_122b5c:
    // 0x122b5c: 0x60f809  jalr        $v1
label_122b60:
    if (ctx->pc == 0x122B60u) {
        ctx->pc = 0x122B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B5Cu;
        // 0x122b60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B64u;
        goto label_122b64;
    }
    ctx->pc = 0x122B5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x122B64u);
        ctx->pc = 0x122B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B5Cu;
        // 0x122b60: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122B5Cu, 0x122B64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x122B64u;
label_122b64:
    // 0x122b64: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x122b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_122b68:
    // 0x122b68: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x122b68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_122b6c:
    // 0x122b6c: 0xae12006c  sw          $s2, 0x6C($s0)
    ctx->pc = 0x122b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 18));
label_122b70:
    // 0x122b70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x122b70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_122b74:
    // 0x122b74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x122b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_122b78:
    // 0x122b78: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x122b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_122b7c:
    // 0x122b7c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x122b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_122b80:
    // 0x122b80: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x122b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
label_122b84:
    // 0x122b84: 0x8e630f34  lw          $v1, 0xF34($s3)
    ctx->pc = 0x122b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3892)));
label_122b88:
    // 0x122b88: 0xae070084  sw          $a3, 0x84($s0)
    ctx->pc = 0x122b88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 7));
label_122b8c:
    // 0x122b8c: 0xc0c493d  jal         func_3124F4
label_122b90:
    if (ctx->pc == 0x122B90u) {
        ctx->pc = 0x122B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B8Cu;
        // 0x122b90: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122B94u;
        goto label_122b94;
    }
    ctx->pc = 0x122B8Cu;
    SET_GPR_U32(ctx, 31, 0x122B94u);
    ctx->pc = 0x122B90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122B8Cu;
    // 0x122b90: 0xae03008c  sw          $v1, 0x8C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x122B8Cu, 0x122B94u)) {
        return;
    }
    ctx->pc = 0x122B94u;
label_122b94:
    // 0x122b94: 0x8e630f30  lw          $v1, 0xF30($s3)
    ctx->pc = 0x122b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 3888)));
label_122b98:
    // 0x122b98: 0x1060001f  beqz        $v1, . + 4 + (0x1F << 2)
label_122b9c:
    if (ctx->pc == 0x122B9Cu) {
        ctx->pc = 0x122B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B98u;
        // 0x122b9c: 0x26620f40  addiu       $v0, $s3, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122BA0u;
        goto label_122ba0;
    }
    ctx->pc = 0x122B98u;
    {
        const bool branch_taken_0x122b98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x122B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122B98u;
        // 0x122b9c: 0x26620f40  addiu       $v0, $s3, 0xF40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 3904));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122b98) {
            ctx->pc = 0x122C18u;
            goto label_122c18;
        }
    }
    ctx->pc = 0x122BA0u;
label_122ba0:
    // 0x122ba0: 0xc6600f40  lwc1        $f0, 0xF40($s3)
    ctx->pc = 0x122ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 3904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122ba4:
    // 0x122ba4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x122ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122ba8:
    // 0x122ba8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122ba8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_122bac:
    // 0x122bac: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x122bacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_122bb0:
    // 0x122bb0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x122bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122bb4:
    // 0x122bb4: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x122bb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122bb8:
    // 0x122bb8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x122bb8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_122bbc:
    // 0x122bbc: 0xe7a10024  swc1        $f1, 0x24($sp)
    ctx->pc = 0x122bbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
label_122bc0:
    // 0x122bc0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x122bc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122bc4:
    // 0x122bc4: 0xc6210008  lwc1        $f1, 0x8($s1)
    ctx->pc = 0x122bc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122bc8:
    // 0x122bc8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x122bc8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_122bcc:
    // 0x122bcc: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x122bccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
label_122bd0:
    // 0x122bd0: 0x6ba70027  ldl         $a3, 0x27($sp)
    ctx->pc = 0x122bd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_122bd4:
    // 0x122bd4: 0x6fa70020  ldr         $a3, 0x20($sp)
    ctx->pc = 0x122bd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_122bd8:
    // 0x122bd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x122bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_122bdc:
    // 0x122bdc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x122bdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122be0:
    // 0x122be0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x122be0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122be4:
    // 0x122be4: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x122be4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_122be8:
    // 0x122be8: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x122be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_122bec:
    // 0x122bec: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x122becu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_122bf0:
    // 0x122bf0: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x122bf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_122bf4:
    // 0x122bf4: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x122bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_122bf8:
    // 0x122bf8: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x122bf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122bfc:
    // 0x122bfc: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x122bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122c00:
    // 0x122c00: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x122c00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_122c04:
    // 0x122c04: 0xc093a88  jal         func_24EA20
label_122c08:
    if (ctx->pc == 0x122C08u) {
        ctx->pc = 0x122C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C04u;
        // 0x122c08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C0Cu;
        goto label_122c0c;
    }
    ctx->pc = 0x122C04u;
    SET_GPR_U32(ctx, 31, 0x122C0Cu);
    ctx->pc = 0x122C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C04u;
    // 0x122c08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x122C04u, 0x122C0Cu)) {
        return;
    }
    ctx->pc = 0x122C0Cu;
label_122c0c:
    // 0x122c0c: 0x100000d8  b           . + 4 + (0xD8 << 2)
label_122c10:
    if (ctx->pc == 0x122C10u) {
        ctx->pc = 0x122C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C0Cu;
        // 0x122c10: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C14u;
        goto label_122c14;
    }
    ctx->pc = 0x122C0Cu;
    {
        const bool branch_taken_0x122c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C0Cu;
        // 0x122c10: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c0c) {
            ctx->pc = 0x122F70u;
            goto label_122f70;
        }
    }
    ctx->pc = 0x122C14u;
label_122c14:
    // 0x122c14: 0x0  nop
    ctx->pc = 0x122c14u;
    // NOP
label_122c18:
    // 0x122c18: 0xc07600c  jal         func_1D8030
label_122c1c:
    if (ctx->pc == 0x122C1Cu) {
        ctx->pc = 0x122C20u;
        goto label_122c20;
    }
    ctx->pc = 0x122C18u;
    SET_GPR_U32(ctx, 31, 0x122C20u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x122C18u, 0x122C20u)) {
        return;
    }
    ctx->pc = 0x122C20u;
label_122c20:
    // 0x122c20: 0xc04f0cc  jal         func_13C330
label_122c24:
    if (ctx->pc == 0x122C24u) {
        ctx->pc = 0x122C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C20u;
        // 0x122c24: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C28u;
        goto label_122c28;
    }
    ctx->pc = 0x122C20u;
    SET_GPR_U32(ctx, 31, 0x122C28u);
    ctx->pc = 0x122C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122C20u;
    // 0x122c24: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C330u, 0x122C20u, 0x122C28u)) {
        return;
    }
    ctx->pc = 0x122C28u;
label_122c28:
    // 0x122c28: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x122c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_122c2c:
    // 0x122c2c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x122c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_122c30:
    // 0x122c30: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x122c30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122c34:
    // 0x122c34: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x122c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122c38:
    // 0x122c38: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x122c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122c3c:
    // 0x122c3c: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x122c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
label_122c40:
    // 0x122c40: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x122c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122c44:
    // 0x122c44: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x122c44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122c48:
    // 0x122c48: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x122c48u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122c4c:
    // 0x122c4c: 0x0  nop
    ctx->pc = 0x122c4cu;
    // NOP
label_122c50:
    // 0x122c50: 0x45000012  bc1f        . + 4 + (0x12 << 2)
label_122c54:
    if (ctx->pc == 0x122C54u) {
        ctx->pc = 0x122C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C50u;
        // 0x122c54: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C58u;
        goto label_122c58;
    }
    ctx->pc = 0x122C50u;
    {
        const bool branch_taken_0x122c50 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C50u;
        // 0x122c54: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c50) {
            ctx->pc = 0x122C9Cu;
            goto label_122c9c;
        }
    }
    ctx->pc = 0x122C58u;
label_122c58:
    // 0x122c58: 0x3c013fe6  lui         $at, 0x3FE6
    ctx->pc = 0x122c58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16358 << 16));
label_122c5c:
    // 0x122c5c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x122c5cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_122c60:
    // 0x122c60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122c60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122c64:
    // 0x122c64: 0x0  nop
    ctx->pc = 0x122c64u;
    // NOP
label_122c68:
    // 0x122c68: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x122c68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_122c6c:
    // 0x122c6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x122c6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122c70:
    // 0x122c70: 0x0  nop
    ctx->pc = 0x122c70u;
    // NOP
label_122c74:
    // 0x122c74: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_122c78:
    if (ctx->pc == 0x122C78u) {
        ctx->pc = 0x122C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C74u;
        // 0x122c78: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C7Cu;
        goto label_122c7c;
    }
    ctx->pc = 0x122C74u;
    {
        const bool branch_taken_0x122c74 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C74u;
        // 0x122c78: 0xc7a00014  lwc1        $f0, 0x14($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c74) {
            ctx->pc = 0x122C9Cu;
            goto label_122c9c;
        }
    }
    ctx->pc = 0x122C7Cu;
label_122c7c:
    // 0x122c7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_122c80:
    if (ctx->pc == 0x122C80u) {
        ctx->pc = 0x122C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C7Cu;
        // 0x122c80: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C84u;
        goto label_122c84;
    }
    ctx->pc = 0x122C7Cu;
    {
        const bool branch_taken_0x122c7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C7Cu;
        // 0x122c80: 0xe7a10014  swc1        $f1, 0x14($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c7c) {
            ctx->pc = 0x122CB0u;
            goto label_122cb0;
        }
    }
    ctx->pc = 0x122C84u;
label_122c84:
    // 0x122c84: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_122c88:
    // 0x122c88: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x122c88u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122c8c:
    // 0x122c8c: 0x0  nop
    ctx->pc = 0x122c8cu;
    // NOP
label_122c90:
    // 0x122c90: 0x460100c3  div.s       $f3, $f0, $f1
    ctx->pc = 0x122c90u;
    ctx->f[3] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
label_122c94:
    // 0x122c94: 0x10000044  b           . + 4 + (0x44 << 2)
label_122c98:
    if (ctx->pc == 0x122C98u) {
        ctx->pc = 0x122C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C94u;
        // 0x122c98: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122C9Cu;
        goto label_122c9c;
    }
    ctx->pc = 0x122C94u;
    {
        const bool branch_taken_0x122c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122C94u;
        // 0x122c98: 0xc7a00030  lwc1        $f0, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122c94) {
            ctx->pc = 0x122DA8u;
            goto label_122da8;
        }
    }
    ctx->pc = 0x122C9Cu;
label_122c9c:
    // 0x122c9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_122ca0:
    // 0x122ca0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122ca4:
    // 0x122ca4: 0x0  nop
    ctx->pc = 0x122ca4u;
    // NOP
label_122ca8:
    // 0x122ca8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x122ca8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122cac:
    // 0x122cac: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x122cacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_122cb0:
    // 0x122cb0: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x122cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_122cb4:
    // 0x122cb4: 0xc7a10010  lwc1        $f1, 0x10($sp)
    ctx->pc = 0x122cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122cb8:
    // 0x122cb8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x122cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122cbc:
    // 0x122cbc: 0xc7a20014  lwc1        $f2, 0x14($sp)
    ctx->pc = 0x122cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122cc0:
    // 0x122cc0: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x122cc0u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_122cc4:
    // 0x122cc4: 0xc7a30018  lwc1        $f3, 0x18($sp)
    ctx->pc = 0x122cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122cc8:
    // 0x122cc8: 0xe7a10030  swc1        $f1, 0x30($sp)
    ctx->pc = 0x122cc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_122ccc:
    // 0x122ccc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x122cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122cd0:
    // 0x122cd0: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x122cd0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_122cd4:
    // 0x122cd4: 0xe7a20034  swc1        $f2, 0x34($sp)
    ctx->pc = 0x122cd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_122cd8:
    // 0x122cd8: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x122cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122cdc:
    // 0x122cdc: 0x460018c1  sub.s       $f3, $f3, $f0
    ctx->pc = 0x122cdcu;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_122ce0:
    // 0x122ce0: 0xe7a30038  swc1        $f3, 0x38($sp)
    ctx->pc = 0x122ce0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_122ce4:
    // 0x122ce4: 0x6ba20037  ldl         $v0, 0x37($sp)
    ctx->pc = 0x122ce4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_122ce8:
    // 0x122ce8: 0x6fa20030  ldr         $v0, 0x30($sp)
    ctx->pc = 0x122ce8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_122cec:
    // 0x122cec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x122cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_122cf0:
    // 0x122cf0: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x122cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122cf4:
    // 0x122cf4: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x122cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122cf8:
    // 0x122cf8: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x122cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_122cfc:
    // 0x122cfc: 0x6ba60027  ldl         $a2, 0x27($sp)
    ctx->pc = 0x122cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_122d00:
    // 0x122d00: 0x6fa60020  ldr         $a2, 0x20($sp)
    ctx->pc = 0x122d00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_122d04:
    // 0x122d04: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x122d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_122d08:
    // 0x122d08: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x122d08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d0c:
    // 0x122d0c: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x122d0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d10:
    // 0x122d10: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x122d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
label_122d14:
    // 0x122d14: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x122d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_122d18:
    // 0x122d18: 0x6ba50007  ldl         $a1, 0x7($sp)
    ctx->pc = 0x122d18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_122d1c:
    // 0x122d1c: 0x6fa50000  ldr         $a1, 0x0($sp)
    ctx->pc = 0x122d1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_122d20:
    // 0x122d20: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x122d20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_122d24:
    // 0x122d24: 0xb2050027  sdl         $a1, 0x27($s0)
    ctx->pc = 0x122d24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d28:
    // 0x122d28: 0xb6050020  sdr         $a1, 0x20($s0)
    ctx->pc = 0x122d28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d2c:
    // 0x122d2c: 0xae060028  sw          $a2, 0x28($s0)
    ctx->pc = 0x122d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 6));
label_122d30:
    // 0x122d30: 0xc093a88  jal         func_24EA20
label_122d34:
    if (ctx->pc == 0x122D34u) {
        ctx->pc = 0x122D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D30u;
        // 0x122d34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D38u;
        goto label_122d38;
    }
    ctx->pc = 0x122D30u;
    SET_GPR_U32(ctx, 31, 0x122D38u);
    ctx->pc = 0x122D34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D30u;
    // 0x122d34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EA20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EA20u, 0x122D30u, 0x122D38u)) {
        return;
    }
    ctx->pc = 0x122D38u;
label_122d38:
    // 0x122d38: 0xc04f0f0  jal         func_13C3C0
label_122d3c:
    if (ctx->pc == 0x122D3Cu) {
        ctx->pc = 0x122D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D38u;
        // 0x122d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D40u;
        goto label_122d40;
    }
    ctx->pc = 0x122D38u;
    SET_GPR_U32(ctx, 31, 0x122D40u);
    ctx->pc = 0x122D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D38u;
    // 0x122d3c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C3C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C3C0u, 0x122D38u, 0x122D40u)) {
        return;
    }
    ctx->pc = 0x122D40u;
label_122d40:
    // 0x122d40: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x122d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_122d44:
    // 0x122d44: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x122d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_122d48:
    // 0x122d48: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x122d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122d4c:
    // 0x122d4c: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x122d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d50:
    // 0x122d50: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x122d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d54:
    // 0x122d54: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x122d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_122d58:
    // 0x122d58: 0x6a070027  ldl         $a3, 0x27($s0)
    ctx->pc = 0x122d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_122d5c:
    // 0x122d5c: 0x6e070020  ldr         $a3, 0x20($s0)
    ctx->pc = 0x122d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_122d60:
    // 0x122d60: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x122d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_122d64:
    // 0x122d64: 0xb3a70037  sdl         $a3, 0x37($sp)
    ctx->pc = 0x122d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d68:
    // 0x122d68: 0xb7a70030  sdr         $a3, 0x30($sp)
    ctx->pc = 0x122d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122d6c:
    // 0x122d6c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x122d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_122d70:
    // 0x122d70: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x122d70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_122d74:
    // 0x122d74: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x122d74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_122d78:
    // 0x122d78: 0xc04642c  jal         func_1190B0
label_122d7c:
    if (ctx->pc == 0x122D7Cu) {
        ctx->pc = 0x122D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D78u;
        // 0x122d7c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122D80u;
        goto label_122d80;
    }
    ctx->pc = 0x122D78u;
    SET_GPR_U32(ctx, 31, 0x122D80u);
    ctx->pc = 0x122D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122D78u;
    // 0x122d7c: 0xafa00034  sw          $zero, 0x34($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1190B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1190B0u, 0x122D78u, 0x122D80u)) {
        return;
    }
    ctx->pc = 0x122D80u;
label_122d80:
    // 0x122d80: 0x0  nop
    ctx->pc = 0x122d80u;
    // NOP
label_122d84:
    // 0x122d84: 0x0  nop
    ctx->pc = 0x122d84u;
    // NOP
label_122d88:
    // 0x122d88: 0x46000044  c1          0x44
    ctx->pc = 0x122d88u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_122d8c:
    // 0x122d8c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122d8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122d90:
    // 0x122d90: 0x0  nop
    ctx->pc = 0x122d90u;
    // NOP
label_122d94:
    // 0x122d94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x122d94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122d98:
    // 0x122d98: 0x0  nop
    ctx->pc = 0x122d98u;
    // NOP
label_122d9c:
    // 0x122d9c: 0x4501ffb9  bc1t        . + 4 + (-0x47 << 2)
label_122da0:
    if (ctx->pc == 0x122DA0u) {
        ctx->pc = 0x122DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D9Cu;
        // 0x122da0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x122DA4u;
        goto label_122da4;
    }
    ctx->pc = 0x122D9Cu;
    {
        const bool branch_taken_0x122d9c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x122DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122D9Cu;
        // 0x122da0: 0x460008c6  mov.s       $f3, $f1 (Delay Slot)
        ctx->f[3] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x122d9c) {
            ctx->pc = 0x122C84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_122c84;
        }
    }
    ctx->pc = 0x122DA4u;
label_122da4:
    // 0x122da4: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x122da4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122da8:
    // 0x122da8: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x122da8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122dac:
    // 0x122dac: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x122dacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122db0:
    // 0x122db0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x122db0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_122db4:
    // 0x122db4: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x122db4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
label_122db8:
    // 0x122db8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x122db8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_122dbc:
    // 0x122dbc: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x122dbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_122dc0:
    // 0x122dc0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x122dc0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_122dc4:
    // 0x122dc4: 0xe7a20038  swc1        $f2, 0x38($sp)
    ctx->pc = 0x122dc4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
label_122dc8:
    // 0x122dc8: 0xc7a40020  lwc1        $f4, 0x20($sp)
    ctx->pc = 0x122dc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122dcc:
    // 0x122dcc: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x122dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_122dd0:
    // 0x122dd0: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x122dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_122dd4:
    // 0x122dd4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x122dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
label_122dd8:
    // 0x122dd8: 0xc7a50024  lwc1        $f5, 0x24($sp)
    ctx->pc = 0x122dd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_122ddc:
    // 0x122ddc: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x122ddcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_122de0:
    // 0x122de0: 0xc7a30028  lwc1        $f3, 0x28($sp)
    ctx->pc = 0x122de0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122de4:
    // 0x122de4: 0x46050842  mul.s       $f1, $f1, $f5
    ctx->pc = 0x122de4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[5]);
label_122de8:
    // 0x122de8: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x122de8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
label_122dec:
    // 0x122dec: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x122decu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_122df0:
    // 0x122df0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x122df0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_122df4:
    // 0x122df4: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x122df4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122df8:
    // 0x122df8: 0x0  nop
    ctx->pc = 0x122df8u;
    // NOP
label_122dfc:
    // 0x122dfc: 0x4500005c  bc1f        . + 4 + (0x5C << 2)
label_122e00:
    if (ctx->pc == 0x122E00u) {
        ctx->pc = 0x122E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DFCu;
        // 0x122e00: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E04u;
        goto label_122e04;
    }
    ctx->pc = 0x122DFCu;
    {
        const bool branch_taken_0x122dfc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122DFCu;
        // 0x122e00: 0xc7a10000  lwc1        $f1, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122dfc) {
            ctx->pc = 0x122F70u;
            goto label_122f70;
        }
    }
    ctx->pc = 0x122E04u;
label_122e04:
    // 0x122e04: 0xc04f0d4  jal         func_13C350
label_122e08:
    if (ctx->pc == 0x122E08u) {
        ctx->pc = 0x122E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122E04u;
        // 0x122e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122E0Cu;
        goto label_122e0c;
    }
    ctx->pc = 0x122E04u;
    SET_GPR_U32(ctx, 31, 0x122E0Cu);
    ctx->pc = 0x122E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122E04u;
    // 0x122e08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C350u, 0x122E04u, 0x122E0Cu)) {
        return;
    }
    ctx->pc = 0x122E0Cu;
label_122e0c:
    // 0x122e0c: 0x68460007  ldl         $a2, 0x7($v0)
    ctx->pc = 0x122e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_122e10:
    // 0x122e10: 0x6c460000  ldr         $a2, 0x0($v0)
    ctx->pc = 0x122e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_122e14:
    // 0x122e14: 0x8c470008  lw          $a3, 0x8($v0)
    ctx->pc = 0x122e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_122e18:
    // 0x122e18: 0xb3a60047  sdl         $a2, 0x47($sp)
    ctx->pc = 0x122e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_122e1c:
    // 0x122e1c: 0xb7a60040  sdr         $a2, 0x40($sp)
    ctx->pc = 0x122e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_122e20:
    // 0x122e20: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x122e20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
label_122e24:
    // 0x122e24: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x122e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122e28:
    // 0x122e28: 0xc7a30030  lwc1        $f3, 0x30($sp)
    ctx->pc = 0x122e28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122e2c:
    // 0x122e2c: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x122e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122e30:
    // 0x122e30: 0xc7a40044  lwc1        $f4, 0x44($sp)
    ctx->pc = 0x122e30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122e34:
    // 0x122e34: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x122e34u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_122e38:
    // 0x122e38: 0xc7a20038  lwc1        $f2, 0x38($sp)
    ctx->pc = 0x122e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122e3c:
    // 0x122e3c: 0x46040842  mul.s       $f1, $f1, $f4
    ctx->pc = 0x122e3cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
label_122e40:
    // 0x122e40: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x122e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122e44:
    // 0x122e44: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x122e44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_122e48:
    // 0x122e48: 0x460118c0  add.s       $f3, $f3, $f1
    ctx->pc = 0x122e48u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[1]);
label_122e4c:
    // 0x122e4c: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x122e4cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
label_122e50:
    // 0x122e50: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x122e50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_122e54:
    // 0x122e54: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x122e54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_122e58:
    // 0x122e58: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x122e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_122e5c:
    // 0x122e5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122e5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122e60:
    // 0x122e60: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x122e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_122e64:
    // 0x122e64: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x122e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
label_122e68:
    // 0x122e68: 0xe7a10050  swc1        $f1, 0x50($sp)
    ctx->pc = 0x122e68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_122e6c:
    // 0x122e6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x122e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_122e70:
    // 0x122e70: 0xe7a10078  swc1        $f1, 0x78($sp)
    ctx->pc = 0x122e70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_122e74:
    // 0x122e74: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x122e74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
label_122e78:
    // 0x122e78: 0xe7a10064  swc1        $f1, 0x64($sp)
    ctx->pc = 0x122e78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_122e7c:
    // 0x122e7c: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x122e7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_122e80:
    // 0x122e80: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x122e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
label_122e84:
    // 0x122e84: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x122e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_122e88:
    // 0x122e88: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x122e88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_122e8c:
    // 0x122e8c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x122e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_122e90:
    // 0x122e90: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x122e90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_122e94:
    // 0x122e94: 0xe7a00088  swc1        $f0, 0x88($sp)
    ctx->pc = 0x122e94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_122e98:
    // 0x122e98: 0xe7a00084  swc1        $f0, 0x84($sp)
    ctx->pc = 0x122e98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 132), bits); }
label_122e9c:
    // 0x122e9c: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x122e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122ea0:
    // 0x122ea0: 0x0  nop
    ctx->pc = 0x122ea0u;
    // NOP
label_122ea4:
    // 0x122ea4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_122ea8:
    if (ctx->pc == 0x122EA8u) {
        ctx->pc = 0x122EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EA4u;
        // 0x122ea8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EACu;
        goto label_122eac;
    }
    ctx->pc = 0x122EA4u;
    {
        const bool branch_taken_0x122ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x122EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EA4u;
        // 0x122ea8: 0xe7a00080  swc1        $f0, 0x80($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x122ea4) {
            ctx->pc = 0x122EC0u;
            goto label_122ec0;
        }
    }
    ctx->pc = 0x122EACu;
label_122eac:
    // 0x122eac: 0x3c014234  lui         $at, 0x4234
    ctx->pc = 0x122eacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16948 << 16));
label_122eb0:
    // 0x122eb0: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122eb0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122eb4:
    // 0x122eb4: 0x10000005  b           . + 4 + (0x5 << 2)
label_122eb8:
    if (ctx->pc == 0x122EB8u) {
        ctx->pc = 0x122EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB4u;
        // 0x122eb8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EBCu;
        goto label_122ebc;
    }
    ctx->pc = 0x122EB4u;
    {
        const bool branch_taken_0x122eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x122EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122EB4u;
        // 0x122eb8: 0x3c050069  lui         $a1, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122eb4) {
            ctx->pc = 0x122ECCu;
            goto label_122ecc;
        }
    }
    ctx->pc = 0x122EBCu;
label_122ebc:
    // 0x122ebc: 0x0  nop
    ctx->pc = 0x122ebcu;
    // NOP
label_122ec0:
    // 0x122ec0: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x122ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
label_122ec4:
    // 0x122ec4: 0x3c01c234  lui         $at, 0xC234
    ctx->pc = 0x122ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49716 << 16));
label_122ec8:
    // 0x122ec8: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x122ec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_122ecc:
    // 0x122ecc: 0x24a5c4f8  addiu       $a1, $a1, -0x3B08
    ctx->pc = 0x122eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952184));
label_122ed0:
    // 0x122ed0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x122ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_122ed4:
    // 0x122ed4: 0xc092e32  jal         func_24B8C8
label_122ed8:
    if (ctx->pc == 0x122ED8u) {
        ctx->pc = 0x122ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122ED4u;
        // 0x122ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122EDCu;
        goto label_122edc;
    }
    ctx->pc = 0x122ED4u;
    SET_GPR_U32(ctx, 31, 0x122EDCu);
    ctx->pc = 0x122ED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122ED4u;
    // 0x122ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B8C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24B8C8u, 0x122ED4u, 0x122EDCu)) {
        return;
    }
    ctx->pc = 0x122EDCu;
label_122edc:
    // 0x122edc: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x122edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122ee0:
    // 0x122ee0: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x122ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122ee4:
    // 0x122ee4: 0xc7a40060  lwc1        $f4, 0x60($sp)
    ctx->pc = 0x122ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122ee8:
    // 0x122ee8: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x122ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122eec:
    // 0x122eec: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x122eecu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_122ef0:
    // 0x122ef0: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x122ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122ef4:
    // 0x122ef4: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x122ef4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_122ef8:
    // 0x122ef8: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x122ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122efc:
    // 0x122efc: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x122efcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_122f00:
    // 0x122f00: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x122f00u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_122f04:
    // 0x122f04: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x122f04u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_122f08:
    // 0x122f08: 0xe6010020  swc1        $f1, 0x20($s0)
    ctx->pc = 0x122f08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
label_122f0c:
    // 0x122f0c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x122f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122f10:
    // 0x122f10: 0xc7a40064  lwc1        $f4, 0x64($sp)
    ctx->pc = 0x122f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122f14:
    // 0x122f14: 0xc7a20020  lwc1        $f2, 0x20($sp)
    ctx->pc = 0x122f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122f18:
    // 0x122f18: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x122f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122f1c:
    // 0x122f1c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x122f1cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_122f20:
    // 0x122f20: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x122f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122f24:
    // 0x122f24: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x122f24u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_122f28:
    // 0x122f28: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x122f28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122f2c:
    // 0x122f2c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x122f2cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_122f30:
    // 0x122f30: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x122f30u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_122f34:
    // 0x122f34: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x122f34u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
label_122f38:
    // 0x122f38: 0xe6020024  swc1        $f2, 0x24($s0)
    ctx->pc = 0x122f38u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
label_122f3c:
    // 0x122f3c: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x122f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122f40:
    // 0x122f40: 0xc7a10020  lwc1        $f1, 0x20($sp)
    ctx->pc = 0x122f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122f44:
    // 0x122f44: 0xc7a30024  lwc1        $f3, 0x24($sp)
    ctx->pc = 0x122f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_122f48:
    // 0x122f48: 0xc7a40068  lwc1        $f4, 0x68($sp)
    ctx->pc = 0x122f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_122f4c:
    // 0x122f4c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x122f4cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_122f50:
    // 0x122f50: 0xc7a20028  lwc1        $f2, 0x28($sp)
    ctx->pc = 0x122f50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_122f54:
    // 0x122f54: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x122f54u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
label_122f58:
    // 0x122f58: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x122f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122f5c:
    // 0x122f5c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x122f5cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_122f60:
    // 0x122f60: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x122f60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_122f64:
    // 0x122f64: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x122f64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_122f68:
    // 0x122f68: 0xe6010028  swc1        $f1, 0x28($s0)
    ctx->pc = 0x122f68u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
label_122f6c:
    // 0x122f6c: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x122f6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_122f70:
    // 0x122f70: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x122f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_122f74:
    // 0x122f74: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x122f74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
label_122f78:
    // 0x122f78: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x122f78u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_122f7c:
    // 0x122f7c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x122f7cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_122f80:
    // 0x122f80: 0x460c0084  c1          0xC0084
    ctx->pc = 0x122f80u;
    ctx->f[2] = FPU_SQRT_S(ctx->f[12]);
label_122f84:
    // 0x122f84: 0x46021032  c.eq.s      $f2, $f2
    ctx->pc = 0x122f84u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[2], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_122f88:
    // 0x122f88: 0x0  nop
    ctx->pc = 0x122f88u;
    // NOP
label_122f8c:
    // 0x122f8c: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_122f90:
    if (ctx->pc == 0x122F90u) {
        ctx->pc = 0x122F94u;
        goto label_122f94;
    }
    ctx->pc = 0x122F8Cu;
    {
        const bool branch_taken_0x122f8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x122f8c) {
            ctx->pc = 0x122FA0u;
            goto label_122fa0;
        }
    }
    ctx->pc = 0x122F94u;
label_122f94:
    // 0x122f94: 0xc09b52e  jal         func_26D4B8
label_122f98:
    if (ctx->pc == 0x122F98u) {
        ctx->pc = 0x122F9Cu;
        goto label_122f9c;
    }
    ctx->pc = 0x122F94u;
    SET_GPR_U32(ctx, 31, 0x122F9Cu);
    ctx->pc = 0x26D4B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x26D4B8u, 0x122F94u, 0x122F9Cu)) {
        return;
    }
    ctx->pc = 0x122F9Cu;
label_122f9c:
    // 0x122f9c: 0x46000086  mov.s       $f2, $f0
    ctx->pc = 0x122f9cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[0]);
label_122fa0:
    // 0x122fa0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x122fa0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_122fa4:
    // 0x122fa4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x122fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_122fa8:
    // 0x122fa8: 0xe6020040  swc1        $f2, 0x40($s0)
    ctx->pc = 0x122fa8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_122fac:
    // 0x122fac: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x122facu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_122fb0:
    // 0x122fb0: 0xe6600f40  swc1        $f0, 0xF40($s3)
    ctx->pc = 0x122fb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3904), bits); }
label_122fb4:
    // 0x122fb4: 0xae600f30  sw          $zero, 0xF30($s3)
    ctx->pc = 0x122fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 3888), GPR_U32(ctx, 0));
label_122fb8:
    // 0x122fb8: 0xe6600f48  swc1        $f0, 0xF48($s3)
    ctx->pc = 0x122fb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3912), bits); }
label_122fbc:
    // 0x122fbc: 0xe6600f44  swc1        $f0, 0xF44($s3)
    ctx->pc = 0x122fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 3908), bits); }
label_122fc0:
    // 0x122fc0: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x122fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
label_122fc4:
    // 0x122fc4: 0x8c84efb8  lw          $a0, -0x1048($a0)
    ctx->pc = 0x122fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963128)));
label_122fc8:
    // 0x122fc8: 0x8c621a70  lw          $v0, 0x1A70($v1)
    ctx->pc = 0x122fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6768)));
label_122fcc:
    // 0x122fcc: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_122fd0:
    if (ctx->pc == 0x122FD0u) {
        ctx->pc = 0x122FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FCCu;
        // 0x122fd0: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FD4u;
        goto label_122fd4;
    }
    ctx->pc = 0x122FCCu;
    {
        const bool branch_taken_0x122fcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x122FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FCCu;
        // 0x122fd0: 0xafa40010  sw          $a0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fcc) {
            ctx->pc = 0x122FE8u;
            goto label_122fe8;
        }
    }
    ctx->pc = 0x122FD4u;
label_122fd4:
    // 0x122fd4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x122fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_122fd8:
    // 0x122fd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_122fdc:
    if (ctx->pc == 0x122FDCu) {
        ctx->pc = 0x122FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FD8u;
        // 0x122fdc: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FE0u;
        goto label_122fe0;
    }
    ctx->pc = 0x122FD8u;
    {
        const bool branch_taken_0x122fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x122FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FD8u;
        // 0x122fdc: 0x8ea48668  lw          $a0, -0x7998($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x122fd8) {
            ctx->pc = 0x122FECu;
            goto label_122fec;
        }
    }
    ctx->pc = 0x122FE0u;
label_122fe0:
    // 0x122fe0: 0xc07fd18  jal         func_1FF460
label_122fe4:
    if (ctx->pc == 0x122FE4u) {
        ctx->pc = 0x122FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FE0u;
        // 0x122fe4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FE8u;
        goto label_122fe8;
    }
    ctx->pc = 0x122FE0u;
    SET_GPR_U32(ctx, 31, 0x122FE8u);
    ctx->pc = 0x122FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FE0u;
    // 0x122fe4: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x122FE0u, 0x122FE8u)) {
        return;
    }
    ctx->pc = 0x122FE8u;
label_122fe8:
    // 0x122fe8: 0x8ea48668  lw          $a0, -0x7998($s5)
    ctx->pc = 0x122fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294936168)));
label_122fec:
    // 0x122fec: 0xc059092  jal         func_164248
label_122ff0:
    if (ctx->pc == 0x122FF0u) {
        ctx->pc = 0x122FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FECu;
        // 0x122ff0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x122FF4u;
        goto label_122ff4;
    }
    ctx->pc = 0x122FECu;
    SET_GPR_U32(ctx, 31, 0x122FF4u);
    ctx->pc = 0x122FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FECu;
    // 0x122ff0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x164248u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x164248u, 0x122FECu, 0x122FF4u)) {
        return;
    }
    ctx->pc = 0x122FF4u;
label_122ff4:
    // 0x122ff4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x122ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_122ff8:
    // 0x122ff8: 0xc040e20  jal         func_103880
label_122ffc:
    if (ctx->pc == 0x122FFCu) {
        ctx->pc = 0x122FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122FF8u;
        // 0x122ffc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123000u;
        goto label_123000;
    }
    ctx->pc = 0x122FF8u;
    SET_GPR_U32(ctx, 31, 0x123000u);
    ctx->pc = 0x122FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x122FF8u;
    // 0x122ffc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x103880u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x103880u, 0x122FF8u, 0x123000u)) {
        return;
    }
    ctx->pc = 0x123000u;
label_123000:
    // 0x123000: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x123000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_123004:
    // 0x123004: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x123004u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_123008:
    // 0x123008: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x123008u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_12300c:
    // 0x12300c: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x12300cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_123010:
    // 0x123010: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x123010u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_123014:
    // 0x123014: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x123014u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_123018:
    // 0x123018: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x123018u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_12301c:
    // 0x12301c: 0x3e00008  jr          $ra
label_123020:
    if (ctx->pc == 0x123020u) {
        ctx->pc = 0x123020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12301Cu;
        // 0x123020: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x123024u;
        goto label_123024;
    }
    ctx->pc = 0x12301Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12301Cu;
        // 0x123020: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12301Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123024u;
label_123024:
    // 0x123024: 0x0  nop
    ctx->pc = 0x123024u;
    // NOP
    ctx->pc = 0x123028u;
}
