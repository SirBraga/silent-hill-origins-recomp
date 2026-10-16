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

// Function: sub_002E4AE8
// Address: 0x2e4ae8 - 0x2e4ec8
void sub_002E4AE8_0x2e4ae8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E4AE8_0x2e4ae8");
#endif

    switch (ctx->pc) {
        case 0x2e4ae8u: goto label_2e4ae8;
        case 0x2e4aecu: goto label_2e4aec;
        case 0x2e4af0u: goto label_2e4af0;
        case 0x2e4af4u: goto label_2e4af4;
        case 0x2e4af8u: goto label_2e4af8;
        case 0x2e4afcu: goto label_2e4afc;
        case 0x2e4b00u: goto label_2e4b00;
        case 0x2e4b04u: goto label_2e4b04;
        case 0x2e4b08u: goto label_2e4b08;
        case 0x2e4b0cu: goto label_2e4b0c;
        case 0x2e4b10u: goto label_2e4b10;
        case 0x2e4b14u: goto label_2e4b14;
        case 0x2e4b18u: goto label_2e4b18;
        case 0x2e4b1cu: goto label_2e4b1c;
        case 0x2e4b20u: goto label_2e4b20;
        case 0x2e4b24u: goto label_2e4b24;
        case 0x2e4b28u: goto label_2e4b28;
        case 0x2e4b2cu: goto label_2e4b2c;
        case 0x2e4b30u: goto label_2e4b30;
        case 0x2e4b34u: goto label_2e4b34;
        case 0x2e4b38u: goto label_2e4b38;
        case 0x2e4b3cu: goto label_2e4b3c;
        case 0x2e4b40u: goto label_2e4b40;
        case 0x2e4b44u: goto label_2e4b44;
        case 0x2e4b48u: goto label_2e4b48;
        case 0x2e4b4cu: goto label_2e4b4c;
        case 0x2e4b50u: goto label_2e4b50;
        case 0x2e4b54u: goto label_2e4b54;
        case 0x2e4b58u: goto label_2e4b58;
        case 0x2e4b5cu: goto label_2e4b5c;
        case 0x2e4b60u: goto label_2e4b60;
        case 0x2e4b64u: goto label_2e4b64;
        case 0x2e4b68u: goto label_2e4b68;
        case 0x2e4b6cu: goto label_2e4b6c;
        case 0x2e4b70u: goto label_2e4b70;
        case 0x2e4b74u: goto label_2e4b74;
        case 0x2e4b78u: goto label_2e4b78;
        case 0x2e4b7cu: goto label_2e4b7c;
        case 0x2e4b80u: goto label_2e4b80;
        case 0x2e4b84u: goto label_2e4b84;
        case 0x2e4b88u: goto label_2e4b88;
        case 0x2e4b8cu: goto label_2e4b8c;
        case 0x2e4b90u: goto label_2e4b90;
        case 0x2e4b94u: goto label_2e4b94;
        case 0x2e4b98u: goto label_2e4b98;
        case 0x2e4b9cu: goto label_2e4b9c;
        case 0x2e4ba0u: goto label_2e4ba0;
        case 0x2e4ba4u: goto label_2e4ba4;
        case 0x2e4ba8u: goto label_2e4ba8;
        case 0x2e4bacu: goto label_2e4bac;
        case 0x2e4bb0u: goto label_2e4bb0;
        case 0x2e4bb4u: goto label_2e4bb4;
        case 0x2e4bb8u: goto label_2e4bb8;
        case 0x2e4bbcu: goto label_2e4bbc;
        case 0x2e4bc0u: goto label_2e4bc0;
        case 0x2e4bc4u: goto label_2e4bc4;
        case 0x2e4bc8u: goto label_2e4bc8;
        case 0x2e4bccu: goto label_2e4bcc;
        case 0x2e4bd0u: goto label_2e4bd0;
        case 0x2e4bd4u: goto label_2e4bd4;
        case 0x2e4bd8u: goto label_2e4bd8;
        case 0x2e4bdcu: goto label_2e4bdc;
        case 0x2e4be0u: goto label_2e4be0;
        case 0x2e4be4u: goto label_2e4be4;
        case 0x2e4be8u: goto label_2e4be8;
        case 0x2e4becu: goto label_2e4bec;
        case 0x2e4bf0u: goto label_2e4bf0;
        case 0x2e4bf4u: goto label_2e4bf4;
        case 0x2e4bf8u: goto label_2e4bf8;
        case 0x2e4bfcu: goto label_2e4bfc;
        case 0x2e4c00u: goto label_2e4c00;
        case 0x2e4c04u: goto label_2e4c04;
        case 0x2e4c08u: goto label_2e4c08;
        case 0x2e4c0cu: goto label_2e4c0c;
        case 0x2e4c10u: goto label_2e4c10;
        case 0x2e4c14u: goto label_2e4c14;
        case 0x2e4c18u: goto label_2e4c18;
        case 0x2e4c1cu: goto label_2e4c1c;
        case 0x2e4c20u: goto label_2e4c20;
        case 0x2e4c24u: goto label_2e4c24;
        case 0x2e4c28u: goto label_2e4c28;
        case 0x2e4c2cu: goto label_2e4c2c;
        case 0x2e4c30u: goto label_2e4c30;
        case 0x2e4c34u: goto label_2e4c34;
        case 0x2e4c38u: goto label_2e4c38;
        case 0x2e4c3cu: goto label_2e4c3c;
        case 0x2e4c40u: goto label_2e4c40;
        case 0x2e4c44u: goto label_2e4c44;
        case 0x2e4c48u: goto label_2e4c48;
        case 0x2e4c4cu: goto label_2e4c4c;
        case 0x2e4c50u: goto label_2e4c50;
        case 0x2e4c54u: goto label_2e4c54;
        case 0x2e4c58u: goto label_2e4c58;
        case 0x2e4c5cu: goto label_2e4c5c;
        case 0x2e4c60u: goto label_2e4c60;
        case 0x2e4c64u: goto label_2e4c64;
        case 0x2e4c68u: goto label_2e4c68;
        case 0x2e4c6cu: goto label_2e4c6c;
        case 0x2e4c70u: goto label_2e4c70;
        case 0x2e4c74u: goto label_2e4c74;
        case 0x2e4c78u: goto label_2e4c78;
        case 0x2e4c7cu: goto label_2e4c7c;
        case 0x2e4c80u: goto label_2e4c80;
        case 0x2e4c84u: goto label_2e4c84;
        case 0x2e4c88u: goto label_2e4c88;
        case 0x2e4c8cu: goto label_2e4c8c;
        case 0x2e4c90u: goto label_2e4c90;
        case 0x2e4c94u: goto label_2e4c94;
        case 0x2e4c98u: goto label_2e4c98;
        case 0x2e4c9cu: goto label_2e4c9c;
        case 0x2e4ca0u: goto label_2e4ca0;
        case 0x2e4ca4u: goto label_2e4ca4;
        case 0x2e4ca8u: goto label_2e4ca8;
        case 0x2e4cacu: goto label_2e4cac;
        case 0x2e4cb0u: goto label_2e4cb0;
        case 0x2e4cb4u: goto label_2e4cb4;
        case 0x2e4cb8u: goto label_2e4cb8;
        case 0x2e4cbcu: goto label_2e4cbc;
        case 0x2e4cc0u: goto label_2e4cc0;
        case 0x2e4cc4u: goto label_2e4cc4;
        case 0x2e4cc8u: goto label_2e4cc8;
        case 0x2e4cccu: goto label_2e4ccc;
        case 0x2e4cd0u: goto label_2e4cd0;
        case 0x2e4cd4u: goto label_2e4cd4;
        case 0x2e4cd8u: goto label_2e4cd8;
        case 0x2e4cdcu: goto label_2e4cdc;
        case 0x2e4ce0u: goto label_2e4ce0;
        case 0x2e4ce4u: goto label_2e4ce4;
        case 0x2e4ce8u: goto label_2e4ce8;
        case 0x2e4cecu: goto label_2e4cec;
        case 0x2e4cf0u: goto label_2e4cf0;
        case 0x2e4cf4u: goto label_2e4cf4;
        case 0x2e4cf8u: goto label_2e4cf8;
        case 0x2e4cfcu: goto label_2e4cfc;
        case 0x2e4d00u: goto label_2e4d00;
        case 0x2e4d04u: goto label_2e4d04;
        case 0x2e4d08u: goto label_2e4d08;
        case 0x2e4d0cu: goto label_2e4d0c;
        case 0x2e4d10u: goto label_2e4d10;
        case 0x2e4d14u: goto label_2e4d14;
        case 0x2e4d18u: goto label_2e4d18;
        case 0x2e4d1cu: goto label_2e4d1c;
        case 0x2e4d20u: goto label_2e4d20;
        case 0x2e4d24u: goto label_2e4d24;
        case 0x2e4d28u: goto label_2e4d28;
        case 0x2e4d2cu: goto label_2e4d2c;
        case 0x2e4d30u: goto label_2e4d30;
        case 0x2e4d34u: goto label_2e4d34;
        case 0x2e4d38u: goto label_2e4d38;
        case 0x2e4d3cu: goto label_2e4d3c;
        case 0x2e4d40u: goto label_2e4d40;
        case 0x2e4d44u: goto label_2e4d44;
        case 0x2e4d48u: goto label_2e4d48;
        case 0x2e4d4cu: goto label_2e4d4c;
        case 0x2e4d50u: goto label_2e4d50;
        case 0x2e4d54u: goto label_2e4d54;
        case 0x2e4d58u: goto label_2e4d58;
        case 0x2e4d5cu: goto label_2e4d5c;
        case 0x2e4d60u: goto label_2e4d60;
        case 0x2e4d64u: goto label_2e4d64;
        case 0x2e4d68u: goto label_2e4d68;
        case 0x2e4d6cu: goto label_2e4d6c;
        case 0x2e4d70u: goto label_2e4d70;
        case 0x2e4d74u: goto label_2e4d74;
        case 0x2e4d78u: goto label_2e4d78;
        case 0x2e4d7cu: goto label_2e4d7c;
        case 0x2e4d80u: goto label_2e4d80;
        case 0x2e4d84u: goto label_2e4d84;
        case 0x2e4d88u: goto label_2e4d88;
        case 0x2e4d8cu: goto label_2e4d8c;
        case 0x2e4d90u: goto label_2e4d90;
        case 0x2e4d94u: goto label_2e4d94;
        case 0x2e4d98u: goto label_2e4d98;
        case 0x2e4d9cu: goto label_2e4d9c;
        case 0x2e4da0u: goto label_2e4da0;
        case 0x2e4da4u: goto label_2e4da4;
        case 0x2e4da8u: goto label_2e4da8;
        case 0x2e4dacu: goto label_2e4dac;
        case 0x2e4db0u: goto label_2e4db0;
        case 0x2e4db4u: goto label_2e4db4;
        case 0x2e4db8u: goto label_2e4db8;
        case 0x2e4dbcu: goto label_2e4dbc;
        case 0x2e4dc0u: goto label_2e4dc0;
        case 0x2e4dc4u: goto label_2e4dc4;
        case 0x2e4dc8u: goto label_2e4dc8;
        case 0x2e4dccu: goto label_2e4dcc;
        case 0x2e4dd0u: goto label_2e4dd0;
        case 0x2e4dd4u: goto label_2e4dd4;
        case 0x2e4dd8u: goto label_2e4dd8;
        case 0x2e4ddcu: goto label_2e4ddc;
        case 0x2e4de0u: goto label_2e4de0;
        case 0x2e4de4u: goto label_2e4de4;
        case 0x2e4de8u: goto label_2e4de8;
        case 0x2e4decu: goto label_2e4dec;
        case 0x2e4df0u: goto label_2e4df0;
        case 0x2e4df4u: goto label_2e4df4;
        case 0x2e4df8u: goto label_2e4df8;
        case 0x2e4dfcu: goto label_2e4dfc;
        case 0x2e4e00u: goto label_2e4e00;
        case 0x2e4e04u: goto label_2e4e04;
        case 0x2e4e08u: goto label_2e4e08;
        case 0x2e4e0cu: goto label_2e4e0c;
        case 0x2e4e10u: goto label_2e4e10;
        case 0x2e4e14u: goto label_2e4e14;
        case 0x2e4e18u: goto label_2e4e18;
        case 0x2e4e1cu: goto label_2e4e1c;
        case 0x2e4e20u: goto label_2e4e20;
        case 0x2e4e24u: goto label_2e4e24;
        case 0x2e4e28u: goto label_2e4e28;
        case 0x2e4e2cu: goto label_2e4e2c;
        case 0x2e4e30u: goto label_2e4e30;
        case 0x2e4e34u: goto label_2e4e34;
        case 0x2e4e38u: goto label_2e4e38;
        case 0x2e4e3cu: goto label_2e4e3c;
        case 0x2e4e40u: goto label_2e4e40;
        case 0x2e4e44u: goto label_2e4e44;
        case 0x2e4e48u: goto label_2e4e48;
        case 0x2e4e4cu: goto label_2e4e4c;
        case 0x2e4e50u: goto label_2e4e50;
        case 0x2e4e54u: goto label_2e4e54;
        case 0x2e4e58u: goto label_2e4e58;
        case 0x2e4e5cu: goto label_2e4e5c;
        case 0x2e4e60u: goto label_2e4e60;
        case 0x2e4e64u: goto label_2e4e64;
        case 0x2e4e68u: goto label_2e4e68;
        case 0x2e4e6cu: goto label_2e4e6c;
        case 0x2e4e70u: goto label_2e4e70;
        case 0x2e4e74u: goto label_2e4e74;
        case 0x2e4e78u: goto label_2e4e78;
        case 0x2e4e7cu: goto label_2e4e7c;
        case 0x2e4e80u: goto label_2e4e80;
        case 0x2e4e84u: goto label_2e4e84;
        case 0x2e4e88u: goto label_2e4e88;
        case 0x2e4e8cu: goto label_2e4e8c;
        case 0x2e4e90u: goto label_2e4e90;
        case 0x2e4e94u: goto label_2e4e94;
        case 0x2e4e98u: goto label_2e4e98;
        case 0x2e4e9cu: goto label_2e4e9c;
        case 0x2e4ea0u: goto label_2e4ea0;
        case 0x2e4ea4u: goto label_2e4ea4;
        case 0x2e4ea8u: goto label_2e4ea8;
        case 0x2e4eacu: goto label_2e4eac;
        case 0x2e4eb0u: goto label_2e4eb0;
        case 0x2e4eb4u: goto label_2e4eb4;
        case 0x2e4eb8u: goto label_2e4eb8;
        case 0x2e4ebcu: goto label_2e4ebc;
        case 0x2e4ec0u: goto label_2e4ec0;
        case 0x2e4ec4u: goto label_2e4ec4;
        default: break;
    }

    ctx->pc = 0x2e4ae8u;

label_2e4ae8:
    // 0x2e4ae8: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2e4ae8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2e4aec:
    // 0x2e4aec: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x2e4aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
label_2e4af0:
    // 0x2e4af0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x2e4af0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
label_2e4af4:
    // 0x2e4af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2e4af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e4af8:
    // 0x2e4af8: 0xafa50074  sw          $a1, 0x74($sp)
    ctx->pc = 0x2e4af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 5));
label_2e4afc:
    // 0x2e4afc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2e4afcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b00:
    // 0x2e4b00: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x2e4b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
label_2e4b04:
    // 0x2e4b04: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x2e4b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
label_2e4b08:
    // 0x2e4b08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b0c:
    // 0x2e4b0c: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x2e4b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
label_2e4b10:
    // 0x2e4b10: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x2e4b10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
label_2e4b14:
    // 0x2e4b14: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x2e4b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
label_2e4b18:
    // 0x2e4b18: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x2e4b18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
label_2e4b1c:
    // 0x2e4b1c: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x2e4b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_2e4b20:
    // 0x2e4b20: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2e4b20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2e4b24:
    // 0x2e4b24: 0xafa60078  sw          $a2, 0x78($sp)
    ctx->pc = 0x2e4b24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 6));
label_2e4b28:
    // 0x2e4b28: 0xc0b76b0  jal         func_2DDAC0
label_2e4b2c:
    if (ctx->pc == 0x2E4B2Cu) {
        ctx->pc = 0x2E4B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B28u;
        // 0x2e4b2c: 0xafa8007c  sw          $t0, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B30u;
        goto label_2e4b30;
    }
    ctx->pc = 0x2E4B28u;
    SET_GPR_U32(ctx, 31, 0x2E4B30u);
    ctx->pc = 0x2E4B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B28u;
    // 0x2e4b2c: 0xafa8007c  sw          $t0, 0x7C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDAC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDAC0u, 0x2E4B28u, 0x2E4B30u)) {
        return;
    }
    ctx->pc = 0x2E4B30u;
label_2e4b30:
    // 0x2e4b30: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2e4b34:
    if (ctx->pc == 0x2E4B34u) {
        ctx->pc = 0x2E4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B30u;
        // 0x2e4b34: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B38u;
        goto label_2e4b38;
    }
    ctx->pc = 0x2E4B30u;
    {
        const bool branch_taken_0x2e4b30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B30u;
        // 0x2e4b34: 0x8fa4007c  lw          $a0, 0x7C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b30) {
            ctx->pc = 0x2E4B64u;
            goto label_2e4b64;
        }
    }
    ctx->pc = 0x2E4B38u;
label_2e4b38:
    // 0x2e4b38: 0x8e660008  lw          $a2, 0x8($s3)
    ctx->pc = 0x2e4b38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2e4b3c:
    // 0x2e4b3c: 0xc075fdc  jal         func_1D7F70
label_2e4b40:
    if (ctx->pc == 0x2E4B40u) {
        ctx->pc = 0x2E4B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B3Cu;
        // 0x2e4b40: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B44u;
        goto label_2e4b44;
    }
    ctx->pc = 0x2E4B3Cu;
    SET_GPR_U32(ctx, 31, 0x2E4B44u);
    ctx->pc = 0x2E4B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B3Cu;
    // 0x2e4b40: 0x8fa50074  lw          $a1, 0x74($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E4B3Cu, 0x2E4B44u)) {
        return;
    }
    ctx->pc = 0x2E4B44u;
label_2e4b44:
    // 0x2e4b44: 0x100000d3  b           . + 4 + (0xD3 << 2)
label_2e4b48:
    if (ctx->pc == 0x2E4B48u) {
        ctx->pc = 0x2E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B44u;
        // 0x2e4b48: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B4Cu;
        goto label_2e4b4c;
    }
    ctx->pc = 0x2E4B44u;
    {
        const bool branch_taken_0x2e4b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B44u;
        // 0x2e4b48: 0x8e620008  lw          $v0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b44) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4B4Cu;
label_2e4b4c:
    // 0x2e4b4c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e4b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4b50:
    // 0x2e4b50: 0x10000014  b           . + 4 + (0x14 << 2)
label_2e4b54:
    if (ctx->pc == 0x2E4B54u) {
        ctx->pc = 0x2E4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B50u;
        // 0x2e4b54: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B58u;
        goto label_2e4b58;
    }
    ctx->pc = 0x2E4B50u;
    {
        const bool branch_taken_0x2e4b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B50u;
        // 0x2e4b54: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b50) {
            ctx->pc = 0x2E4BA4u;
            goto label_2e4ba4;
        }
    }
    ctx->pc = 0x2E4B58u;
label_2e4b58:
    // 0x2e4b58: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2e4b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e4b5c:
    // 0x2e4b5c: 0x10000021  b           . + 4 + (0x21 << 2)
label_2e4b60:
    if (ctx->pc == 0x2E4B60u) {
        ctx->pc = 0x2E4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B5Cu;
        // 0x2e4b60: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B64u;
        goto label_2e4b64;
    }
    ctx->pc = 0x2E4B5Cu;
    {
        const bool branch_taken_0x2e4b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B5Cu;
        // 0x2e4b60: 0x8c460004  lw          $a2, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b5c) {
            ctx->pc = 0x2E4BE4u;
            goto label_2e4be4;
        }
    }
    ctx->pc = 0x2E4B64u;
label_2e4b64:
    // 0x2e4b64: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e4b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2e4b68:
    // 0x2e4b68: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e4b68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b6c:
    // 0x2e4b6c: 0x24505518  addiu       $s0, $v0, 0x5518
    ctx->pc = 0x2e4b6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
label_2e4b70:
    // 0x2e4b70: 0x27b60020  addiu       $s6, $sp, 0x20
    ctx->pc = 0x2e4b70u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2e4b74:
    // 0x2e4b74: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e4b74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b78:
    // 0x2e4b78: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e4b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4b7c:
    // 0x2e4b7c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2e4b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e4b80:
    // 0x2e4b80: 0xc0b7742  jal         func_2DDD08
label_2e4b84:
    if (ctx->pc == 0x2E4B84u) {
        ctx->pc = 0x2E4B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B80u;
        // 0x2e4b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B88u;
        goto label_2e4b88;
    }
    ctx->pc = 0x2E4B80u;
    SET_GPR_U32(ctx, 31, 0x2E4B88u);
    ctx->pc = 0x2E4B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4B80u;
    // 0x2e4b84: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDD08u, 0x2E4B80u, 0x2E4B88u)) {
        return;
    }
    ctx->pc = 0x2E4B88u;
label_2e4b88:
    // 0x2e4b88: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2e4b8c:
    if (ctx->pc == 0x2E4B8Cu) {
        ctx->pc = 0x2E4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B88u;
        // 0x2e4b8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4B90u;
        goto label_2e4b90;
    }
    ctx->pc = 0x2E4B88u;
    {
        const bool branch_taken_0x2e4b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B88u;
        // 0x2e4b8c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b88) {
            ctx->pc = 0x2E4B4Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4b4c;
        }
    }
    ctx->pc = 0x2E4B90u;
label_2e4b90:
    // 0x2e4b90: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e4b90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2e4b94:
    // 0x2e4b94: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x2e4b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2e4b98:
    // 0x2e4b98: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2e4b9c:
    if (ctx->pc == 0x2E4B9Cu) {
        ctx->pc = 0x2E4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B98u;
        // 0x2e4b9c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BA0u;
        goto label_2e4ba0;
    }
    ctx->pc = 0x2E4B98u;
    {
        const bool branch_taken_0x2e4b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4B98u;
        // 0x2e4b9c: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4b98) {
            ctx->pc = 0x2E4B78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4b78;
        }
    }
    ctx->pc = 0x2E4BA0u;
label_2e4ba0:
    // 0x2e4ba0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2e4ba0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ba4:
    // 0x2e4ba4: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x2e4ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
label_2e4ba8:
    // 0x2e4ba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2e4ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bac:
    // 0x2e4bac: 0x24505518  addiu       $s0, $v0, 0x5518
    ctx->pc = 0x2e4bacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21784));
label_2e4bb0:
    // 0x2e4bb0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x2e4bb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bb4:
    // 0x2e4bb4: 0x0  nop
    ctx->pc = 0x2e4bb4u;
    // NOP
label_2e4bb8:
    // 0x2e4bb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e4bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e4bbc:
    // 0x2e4bbc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e4bbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bc0:
    // 0x2e4bc0: 0xc0b7742  jal         func_2DDD08
label_2e4bc4:
    if (ctx->pc == 0x2E4BC4u) {
        ctx->pc = 0x2E4BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BC0u;
        // 0x2e4bc4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BC8u;
        goto label_2e4bc8;
    }
    ctx->pc = 0x2E4BC0u;
    SET_GPR_U32(ctx, 31, 0x2E4BC8u);
    ctx->pc = 0x2E4BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4BC0u;
    // 0x2e4bc4: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDD08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDD08u, 0x2E4BC0u, 0x2E4BC8u)) {
        return;
    }
    ctx->pc = 0x2E4BC8u;
label_2e4bc8:
    // 0x2e4bc8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_2e4bcc:
    if (ctx->pc == 0x2E4BCCu) {
        ctx->pc = 0x2E4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BC8u;
        // 0x2e4bcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BD0u;
        goto label_2e4bd0;
    }
    ctx->pc = 0x2E4BC8u;
    {
        const bool branch_taken_0x2e4bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BC8u;
        // 0x2e4bcc: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bc8) {
            ctx->pc = 0x2E4B58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4b58;
        }
    }
    ctx->pc = 0x2E4BD0u;
label_2e4bd0:
    // 0x2e4bd0: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x2e4bd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2e4bd4:
    // 0x2e4bd4: 0x2e220033  sltiu       $v0, $s1, 0x33
    ctx->pc = 0x2e4bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_2e4bd8:
    // 0x2e4bd8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2e4bdc:
    if (ctx->pc == 0x2E4BDCu) {
        ctx->pc = 0x2E4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BD8u;
        // 0x2e4bdc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4BE0u;
        goto label_2e4be0;
    }
    ctx->pc = 0x2E4BD8u;
    {
        const bool branch_taken_0x2e4bd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4BD8u;
        // 0x2e4bdc: 0x26520008  addiu       $s2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4bd8) {
            ctx->pc = 0x2E4BB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4bb8;
        }
    }
    ctx->pc = 0x2E4BE0u;
label_2e4be0:
    // 0x2e4be0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4be4:
    // 0x2e4be4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2e4be4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2e4be8:
    // 0x2e4be8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x2e4be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e4bec:
    // 0x2e4bec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e4becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e4bf0:
    // 0x2e4bf0: 0x8e870000  lw          $a3, 0x0($s4)
    ctx->pc = 0x2e4bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e4bf4:
    // 0x2e4bf4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e4bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e4bf8:
    // 0x2e4bf8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2e4bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2e4bfc:
    // 0x2e4bfc: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2e4bfcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e4c00:
    // 0x2e4c00: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x2e4c00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4c04:
    // 0x2e4c04: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2e4c04u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e4c08:
    // 0x2e4c08: 0xc0b9144  jal         func_2E4510
label_2e4c0c:
    if (ctx->pc == 0x2E4C0Cu) {
        ctx->pc = 0x2E4C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C08u;
        // 0x2e4c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4C10u;
        goto label_2e4c10;
    }
    ctx->pc = 0x2E4C08u;
    SET_GPR_U32(ctx, 31, 0x2E4C10u);
    ctx->pc = 0x2E4C0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C08u;
    // 0x2e4c0c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4510u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E4510u, 0x2E4C08u, 0x2E4C10u)) {
        return;
    }
    ctx->pc = 0x2E4C10u;
label_2e4c10:
    // 0x2e4c10: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2e4c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4c14:
    // 0x2e4c14: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x2e4c14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
label_2e4c18:
    // 0x2e4c18: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2e4c18u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4c1c:
    // 0x2e4c1c: 0x6a620007  ldl         $v0, 0x7($s3)
    ctx->pc = 0x2e4c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2e4c20:
    // 0x2e4c20: 0x6e620000  ldr         $v0, 0x0($s3)
    ctx->pc = 0x2e4c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2e4c24:
    // 0x2e4c24: 0x6a63000f  ldl         $v1, 0xF($s3)
    ctx->pc = 0x2e4c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2e4c28:
    // 0x2e4c28: 0x6e630008  ldr         $v1, 0x8($s3)
    ctx->pc = 0x2e4c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2e4c2c:
    // 0x2e4c2c: 0x6a640017  ldl         $a0, 0x17($s3)
    ctx->pc = 0x2e4c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2e4c30:
    // 0x2e4c30: 0x6e640010  ldr         $a0, 0x10($s3)
    ctx->pc = 0x2e4c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2e4c34:
    // 0x2e4c34: 0x8e650018  lw          $a1, 0x18($s3)
    ctx->pc = 0x2e4c34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_2e4c38:
    // 0x2e4c38: 0xb3a20037  sdl         $v0, 0x37($sp)
    ctx->pc = 0x2e4c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c3c:
    // 0x2e4c3c: 0xb7a20030  sdr         $v0, 0x30($sp)
    ctx->pc = 0x2e4c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c40:
    // 0x2e4c40: 0xb3a3003f  sdl         $v1, 0x3F($sp)
    ctx->pc = 0x2e4c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c44:
    // 0x2e4c44: 0xb7a30038  sdr         $v1, 0x38($sp)
    ctx->pc = 0x2e4c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c48:
    // 0x2e4c48: 0xb3a40047  sdl         $a0, 0x47($sp)
    ctx->pc = 0x2e4c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c4c:
    // 0x2e4c4c: 0xb7a40040  sdr         $a0, 0x40($sp)
    ctx->pc = 0x2e4c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2e4c50:
    // 0x2e4c50: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x2e4c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_2e4c54:
    // 0x2e4c54: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x2e4c54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_2e4c58:
    // 0x2e4c58: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x2e4c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_2e4c5c:
    // 0x2e4c5c: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x2e4c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
label_2e4c60:
    // 0x2e4c60: 0xa3a0005c  sb          $zero, 0x5C($sp)
    ctx->pc = 0x2e4c60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 92), (uint8_t)GPR_U32(ctx, 0));
label_2e4c64:
    // 0x2e4c64: 0xa3a0005d  sb          $zero, 0x5D($sp)
    ctx->pc = 0x2e4c64u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 93), (uint8_t)GPR_U32(ctx, 0));
label_2e4c68:
    // 0x2e4c68: 0xa3a00068  sb          $zero, 0x68($sp)
    ctx->pc = 0x2e4c68u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 104), (uint8_t)GPR_U32(ctx, 0));
label_2e4c6c:
    // 0x2e4c6c: 0xa3a00069  sb          $zero, 0x69($sp)
    ctx->pc = 0x2e4c6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 105), (uint8_t)GPR_U32(ctx, 0));
label_2e4c70:
    // 0x2e4c70: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2e4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_2e4c74:
    // 0x2e4c74: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x2e4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_2e4c78:
    // 0x2e4c78: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x2e4c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2e4c7c:
    // 0x2e4c7c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e4c7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2e4c80:
    // 0x2e4c80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4c84:
    // 0x2e4c84: 0xc0b708c  jal         func_2DC230
label_2e4c88:
    if (ctx->pc == 0x2E4C88u) {
        ctx->pc = 0x2E4C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C84u;
        // 0x2e4c88: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4C8Cu;
        goto label_2e4c8c;
    }
    ctx->pc = 0x2E4C84u;
    SET_GPR_U32(ctx, 31, 0x2E4C8Cu);
    ctx->pc = 0x2E4C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4C84u;
    // 0x2e4c88: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E4C84u, 0x2E4C8Cu)) {
        return;
    }
    ctx->pc = 0x2E4C8Cu;
label_2e4c8c:
    // 0x2e4c8c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e4c8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4c90:
    // 0x2e4c90: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_2e4c94:
    if (ctx->pc == 0x2E4C94u) {
        ctx->pc = 0x2E4C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C90u;
        // 0x2e4c94: 0x8e730008  lw          $s3, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4C98u;
        goto label_2e4c98;
    }
    ctx->pc = 0x2E4C90u;
    {
        const bool branch_taken_0x2e4c90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e4c90) {
            ctx->pc = 0x2E4C94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E4C90u;
            // 0x2e4c94: 0x8e730008  lw          $s3, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E4CA0u;
            goto label_2e4ca0;
        }
    }
    ctx->pc = 0x2E4C98u;
label_2e4c98:
    // 0x2e4c98: 0x1000007e  b           . + 4 + (0x7E << 2)
label_2e4c9c:
    if (ctx->pc == 0x2E4C9Cu) {
        ctx->pc = 0x2E4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C98u;
        // 0x2e4c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4CA0u;
        goto label_2e4ca0;
    }
    ctx->pc = 0x2E4C98u;
    {
        const bool branch_taken_0x2e4c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4C98u;
        // 0x2e4c9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4c98) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4CA0u;
label_2e4ca0:
    // 0x2e4ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e4ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4ca4:
    // 0x2e4ca4: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2e4ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e4ca8:
    // 0x2e4ca8: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2e4ca8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4cac:
    // 0x2e4cac: 0xafb30084  sw          $s3, 0x84($sp)
    ctx->pc = 0x2e4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 19));
label_2e4cb0:
    // 0x2e4cb0: 0xc075fdc  jal         func_1D7F70
label_2e4cb4:
    if (ctx->pc == 0x2E4CB4u) {
        ctx->pc = 0x2E4CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CB0u;
        // 0x2e4cb4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4CB8u;
        goto label_2e4cb8;
    }
    ctx->pc = 0x2E4CB0u;
    SET_GPR_U32(ctx, 31, 0x2E4CB8u);
    ctx->pc = 0x2E4CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CB0u;
    // 0x2e4cb4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E4CB0u, 0x2E4CB8u)) {
        return;
    }
    ctx->pc = 0x2E4CB8u;
label_2e4cb8:
    // 0x2e4cb8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2e4cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2e4cbc:
    // 0x2e4cbc: 0x242182b  sltu        $v1, $s2, $v0
    ctx->pc = 0x2e4cbcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e4cc0:
    // 0x2e4cc0: 0x1060006a  beqz        $v1, . + 4 + (0x6A << 2)
label_2e4cc4:
    if (ctx->pc == 0x2E4CC4u) {
        ctx->pc = 0x2E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CC0u;
        // 0x2e4cc4: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4CC8u;
        goto label_2e4cc8;
    }
    ctx->pc = 0x2E4CC0u;
    {
        const bool branch_taken_0x2e4cc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CC0u;
        // 0x2e4cc4: 0x27b60050  addiu       $s6, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cc0) {
            ctx->pc = 0x2E4E6Cu;
            goto label_2e4e6c;
        }
    }
    ctx->pc = 0x2E4CC8u;
label_2e4cc8:
    // 0x2e4cc8: 0x27b30010  addiu       $s3, $sp, 0x10
    ctx->pc = 0x2e4cc8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2e4ccc:
    // 0x2e4ccc: 0x0  nop
    ctx->pc = 0x2e4cccu;
    // NOP
label_2e4cd0:
    // 0x2e4cd0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e4cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e4cd4:
    // 0x2e4cd4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x2e4cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e4cd8:
    // 0x2e4cd8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2e4cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4cdc:
    // 0x2e4cdc: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2e4cdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4ce0:
    // 0x2e4ce0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2e4ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4ce4:
    // 0x2e4ce4: 0xc0b7720  jal         func_2DDC80
label_2e4ce8:
    if (ctx->pc == 0x2E4CE8u) {
        ctx->pc = 0x2E4CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CE4u;
        // 0x2e4ce8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4CECu;
        goto label_2e4cec;
    }
    ctx->pc = 0x2E4CE4u;
    SET_GPR_U32(ctx, 31, 0x2E4CECu);
    ctx->pc = 0x2E4CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4CE4u;
    // 0x2e4ce8: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDC80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDC80u, 0x2E4CE4u, 0x2E4CECu)) {
        return;
    }
    ctx->pc = 0x2E4CECu;
label_2e4cec:
    // 0x2e4cec: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e4cf0:
    // 0x2e4cf0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e4cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e4cf4:
    // 0x2e4cf4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2e4cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2e4cf8:
    // 0x2e4cf8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2e4cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2e4cfc:
    // 0x2e4cfc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2e4d00:
    if (ctx->pc == 0x2E4D00u) {
        ctx->pc = 0x2E4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CFCu;
        // 0x2e4d00: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D04u;
        goto label_2e4d04;
    }
    ctx->pc = 0x2E4CFCu;
    {
        const bool branch_taken_0x2e4cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4CFCu;
        // 0x2e4d00: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4cfc) {
            ctx->pc = 0x2E4D08u;
            goto label_2e4d08;
        }
    }
    ctx->pc = 0x2E4D04u;
label_2e4d04:
    // 0x2e4d04: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2e4d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2e4d08:
    // 0x2e4d08: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x2e4d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_2e4d0c:
    // 0x2e4d0c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e4d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e4d10:
    // 0x2e4d10: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2e4d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4d14:
    // 0x2e4d14: 0x8fa60078  lw          $a2, 0x78($sp)
    ctx->pc = 0x2e4d14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2e4d18:
    // 0x2e4d18: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2e4d18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d1c:
    // 0x2e4d1c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e4d20:
    // 0x2e4d20: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e4d20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d24:
    // 0x2e4d24: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x2e4d24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2e4d28:
    // 0x2e4d28: 0x40f809  jalr        $v0
label_2e4d2c:
    if (ctx->pc == 0x2E4D2Cu) {
        ctx->pc = 0x2E4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D28u;
        // 0x2e4d2c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D30u;
        goto label_2e4d30;
    }
    ctx->pc = 0x2E4D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4D30u);
        ctx->pc = 0x2E4D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D28u;
        // 0x2e4d2c: 0x27a90070  addiu       $t1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4D28u, 0x2E4D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4D30u;
label_2e4d30:
    // 0x2e4d30: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2e4d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e4d34:
    // 0x2e4d34: 0x3c2182b  sltu        $v1, $fp, $v0
    ctx->pc = 0x2e4d34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 30) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2e4d38:
    // 0x2e4d38: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_2e4d3c:
    if (ctx->pc == 0x2E4D3Cu) {
        ctx->pc = 0x2E4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D38u;
        // 0x2e4d3c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D40u;
        goto label_2e4d40;
    }
    ctx->pc = 0x2E4D38u;
    {
        const bool branch_taken_0x2e4d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D38u;
        // 0x2e4d3c: 0xafa20058  sw          $v0, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d38) {
            ctx->pc = 0x2E4D88u;
            goto label_2e4d88;
        }
    }
    ctx->pc = 0x2E4D40u;
label_2e4d40:
    // 0x2e4d40: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
label_2e4d44:
    if (ctx->pc == 0x2E4D44u) {
        ctx->pc = 0x2E4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D40u;
        // 0x2e4d44: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D48u;
        goto label_2e4d48;
    }
    ctx->pc = 0x2E4D40u;
    {
        const bool branch_taken_0x2e4d40 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D40u;
        // 0x2e4d44: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d40) {
            ctx->pc = 0x2E4D54u;
            goto label_2e4d54;
        }
    }
    ctx->pc = 0x2E4D48u;
label_2e4d48:
    // 0x2e4d48: 0xc0b7080  jal         func_2DC200
label_2e4d4c:
    if (ctx->pc == 0x2E4D4Cu) {
        ctx->pc = 0x2E4D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D48u;
        // 0x2e4d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D50u;
        goto label_2e4d50;
    }
    ctx->pc = 0x2E4D48u;
    SET_GPR_U32(ctx, 31, 0x2E4D50u);
    ctx->pc = 0x2E4D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D48u;
    // 0x2e4d4c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4D48u, 0x2E4D50u)) {
        return;
    }
    ctx->pc = 0x2E4D50u;
label_2e4d50:
    // 0x2e4d50: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2e4d50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2e4d54:
    // 0x2e4d54: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2e4d54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2e4d58:
    // 0x2e4d58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e4d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e4d5c:
    // 0x2e4d5c: 0xc0b708c  jal         func_2DC230
label_2e4d60:
    if (ctx->pc == 0x2E4D60u) {
        ctx->pc = 0x2E4D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D5Cu;
        // 0x2e4d60: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D64u;
        goto label_2e4d64;
    }
    ctx->pc = 0x2E4D5Cu;
    SET_GPR_U32(ctx, 31, 0x2E4D64u);
    ctx->pc = 0x2E4D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D5Cu;
    // 0x2e4d60: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC230u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC230u, 0x2E4D5Cu, 0x2E4D64u)) {
        return;
    }
    ctx->pc = 0x2E4D64u;
label_2e4d64:
    // 0x2e4d64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2e4d64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d68:
    // 0x2e4d68: 0x16400007  bnez        $s2, . + 4 + (0x7 << 2)
label_2e4d6c:
    if (ctx->pc == 0x2E4D6Cu) {
        ctx->pc = 0x2E4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D68u;
        // 0x2e4d6c: 0x8fbe0058  lw          $fp, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D70u;
        goto label_2e4d70;
    }
    ctx->pc = 0x2E4D68u;
    {
        const bool branch_taken_0x2e4d68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D68u;
        // 0x2e4d6c: 0x8fbe0058  lw          $fp, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d68) {
            ctx->pc = 0x2E4D88u;
            goto label_2e4d88;
        }
    }
    ctx->pc = 0x2E4D70u;
label_2e4d70:
    // 0x2e4d70: 0x12200048  beqz        $s1, . + 4 + (0x48 << 2)
label_2e4d74:
    if (ctx->pc == 0x2E4D74u) {
        ctx->pc = 0x2E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D70u;
        // 0x2e4d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D78u;
        goto label_2e4d78;
    }
    ctx->pc = 0x2E4D70u;
    {
        const bool branch_taken_0x2e4d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D70u;
        // 0x2e4d74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d70) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4D78u;
label_2e4d78:
    // 0x2e4d78: 0xc0b7080  jal         func_2DC200
label_2e4d7c:
    if (ctx->pc == 0x2E4D7Cu) {
        ctx->pc = 0x2E4D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D78u;
        // 0x2e4d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D80u;
        goto label_2e4d80;
    }
    ctx->pc = 0x2E4D78u;
    SET_GPR_U32(ctx, 31, 0x2E4D80u);
    ctx->pc = 0x2E4D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4D78u;
    // 0x2e4d7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4D78u, 0x2E4D80u)) {
        return;
    }
    ctx->pc = 0x2E4D80u;
label_2e4d80:
    // 0x2e4d80: 0x10000044  b           . + 4 + (0x44 << 2)
label_2e4d84:
    if (ctx->pc == 0x2E4D84u) {
        ctx->pc = 0x2E4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D80u;
        // 0x2e4d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4D88u;
        goto label_2e4d88;
    }
    ctx->pc = 0x2E4D80u;
    {
        const bool branch_taken_0x2e4d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4D80u;
        // 0x2e4d84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4d80) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4D88u;
label_2e4d88:
    // 0x2e4d88: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x2e4d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2e4d8c:
    // 0x2e4d8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d90:
    // 0x2e4d90: 0x8e830014  lw          $v1, 0x14($s4)
    ctx->pc = 0x2e4d90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2e4d94:
    // 0x2e4d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4d98:
    // 0x2e4d98: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2e4d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_2e4d9c:
    // 0x2e4d9c: 0x2a80b  movn        $s5, $zero, $v0
    ctx->pc = 0x2e4d9cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0));
label_2e4da0:
    // 0x2e4da0: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x2e4da0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_2e4da4:
    // 0x2e4da4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e4da4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e4da8:
    // 0x2e4da8: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2e4da8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2e4dac:
    // 0x2e4dac: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x2e4dacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2e4db0:
    // 0x2e4db0: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2e4db0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2e4db4:
    // 0x2e4db4: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2e4db4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4db8:
    // 0x2e4db8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2e4db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2e4dbc:
    // 0x2e4dbc: 0x40f809  jalr        $v0
label_2e4dc0:
    if (ctx->pc == 0x2E4DC0u) {
        ctx->pc = 0x2E4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DBCu;
        // 0x2e4dc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DC4u;
        goto label_2e4dc4;
    }
    ctx->pc = 0x2E4DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E4DC4u);
        ctx->pc = 0x2E4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DBCu;
        // 0x2e4dc0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4DBCu, 0x2E4DC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E4DC4u;
label_2e4dc4:
    // 0x2e4dc4: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_2e4dc8:
    if (ctx->pc == 0x2E4DC8u) {
        ctx->pc = 0x2E4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DC4u;
        // 0x2e4dc8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DCCu;
        goto label_2e4dcc;
    }
    ctx->pc = 0x2E4DC4u;
    {
        const bool branch_taken_0x2e4dc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E4DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DC4u;
        // 0x2e4dc8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dc4) {
            ctx->pc = 0x2E4DF4u;
            goto label_2e4df4;
        }
    }
    ctx->pc = 0x2E4DCCu;
label_2e4dcc:
    // 0x2e4dcc: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_2e4dd0:
    if (ctx->pc == 0x2E4DD0u) {
        ctx->pc = 0x2E4DD4u;
        goto label_2e4dd4;
    }
    ctx->pc = 0x2E4DCCu;
    {
        const bool branch_taken_0x2e4dcc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e4dcc) {
            ctx->pc = 0x2E4DDCu;
            goto label_2e4ddc;
        }
    }
    ctx->pc = 0x2E4DD4u;
label_2e4dd4:
    // 0x2e4dd4: 0xc0b7080  jal         func_2DC200
label_2e4dd8:
    if (ctx->pc == 0x2E4DD8u) {
        ctx->pc = 0x2E4DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DD4u;
        // 0x2e4dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DDCu;
        goto label_2e4ddc;
    }
    ctx->pc = 0x2E4DD4u;
    SET_GPR_U32(ctx, 31, 0x2E4DDCu);
    ctx->pc = 0x2E4DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DD4u;
    // 0x2e4dd8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4DD4u, 0x2E4DDCu)) {
        return;
    }
    ctx->pc = 0x2E4DDCu;
label_2e4ddc:
    // 0x2e4ddc: 0x1220002d  beqz        $s1, . + 4 + (0x2D << 2)
label_2e4de0:
    if (ctx->pc == 0x2E4DE0u) {
        ctx->pc = 0x2E4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DDCu;
        // 0x2e4de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DE4u;
        goto label_2e4de4;
    }
    ctx->pc = 0x2E4DDCu;
    {
        const bool branch_taken_0x2e4ddc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DDCu;
        // 0x2e4de0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4ddc) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4DE4u;
label_2e4de4:
    // 0x2e4de4: 0xc0b7080  jal         func_2DC200
label_2e4de8:
    if (ctx->pc == 0x2E4DE8u) {
        ctx->pc = 0x2E4DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DE4u;
        // 0x2e4de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DECu;
        goto label_2e4dec;
    }
    ctx->pc = 0x2E4DE4u;
    SET_GPR_U32(ctx, 31, 0x2E4DECu);
    ctx->pc = 0x2E4DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4DE4u;
    // 0x2e4de8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4DE4u, 0x2E4DECu)) {
        return;
    }
    ctx->pc = 0x2E4DECu;
label_2e4dec:
    // 0x2e4dec: 0x10000029  b           . + 4 + (0x29 << 2)
label_2e4df0:
    if (ctx->pc == 0x2E4DF0u) {
        ctx->pc = 0x2E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DECu;
        // 0x2e4df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4DF4u;
        goto label_2e4df4;
    }
    ctx->pc = 0x2E4DECu;
    {
        const bool branch_taken_0x2e4dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DECu;
        // 0x2e4df0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4dec) {
            ctx->pc = 0x2E4E94u;
            goto label_2e4e94;
        }
    }
    ctx->pc = 0x2E4DF4u;
label_2e4df4:
    // 0x2e4df4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2e4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2e4df8:
    // 0x2e4df8: 0x16e20005  bne         $s7, $v0, . + 4 + (0x5 << 2)
label_2e4dfc:
    if (ctx->pc == 0x2E4DFCu) {
        ctx->pc = 0x2E4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DF8u;
        // 0x2e4dfc: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E00u;
        goto label_2e4e00;
    }
    ctx->pc = 0x2E4DF8u;
    {
        const bool branch_taken_0x2e4df8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E4DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4DF8u;
        // 0x2e4dfc: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4df8) {
            ctx->pc = 0x2E4E10u;
            goto label_2e4e10;
        }
    }
    ctx->pc = 0x2E4E00u;
label_2e4e00:
    // 0x2e4e00: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2e4e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2e4e04:
    // 0x2e4e04: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x2e4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
label_2e4e08:
    // 0x2e4e08: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e4e0c:
    if (ctx->pc == 0x2E4E0Cu) {
        ctx->pc = 0x2E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E08u;
        // 0x2e4e0c: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E10u;
        goto label_2e4e10;
    }
    ctx->pc = 0x2E4E08u;
    {
        const bool branch_taken_0x2e4e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E08u;
        // 0x2e4e0c: 0xae830014  sw          $v1, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e08) {
            ctx->pc = 0x2E4E20u;
            goto label_2e4e20;
        }
    }
    ctx->pc = 0x2E4E10u;
label_2e4e10:
    // 0x2e4e10: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
label_2e4e14:
    if (ctx->pc == 0x2E4E14u) {
        ctx->pc = 0x2E4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E10u;
        // 0x2e4e14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E18u;
        goto label_2e4e18;
    }
    ctx->pc = 0x2E4E10u;
    {
        const bool branch_taken_0x2e4e10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E10u;
        // 0x2e4e14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e10) {
            ctx->pc = 0x2E4E24u;
            goto label_2e4e24;
        }
    }
    ctx->pc = 0x2E4E18u;
label_2e4e18:
    // 0x2e4e18: 0xc0b7768  jal         func_2DDDA0
label_2e4e1c:
    if (ctx->pc == 0x2E4E1Cu) {
        ctx->pc = 0x2E4E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E18u;
        // 0x2e4e1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E20u;
        goto label_2e4e20;
    }
    ctx->pc = 0x2E4E18u;
    SET_GPR_U32(ctx, 31, 0x2E4E20u);
    ctx->pc = 0x2E4E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E18u;
    // 0x2e4e1c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DDDA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DDDA0u, 0x2E4E18u, 0x2E4E20u)) {
        return;
    }
    ctx->pc = 0x2E4E20u;
label_2e4e20:
    // 0x2e4e20: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e24:
    // 0x2e4e24: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2e4e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2e4e28:
    // 0x2e4e28: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2e4e28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e2c:
    // 0x2e4e2c: 0x7ba20050  lq          $v0, 0x50($sp)
    ctx->pc = 0x2e4e2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2e4e30:
    // 0x2e4e30: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2e4e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e34:
    // 0x2e4e34: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x2e4e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
label_2e4e38:
    // 0x2e4e38: 0x8fa60084  lw          $a2, 0x84($sp)
    ctx->pc = 0x2e4e38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
label_2e4e3c:
    // 0x2e4e3c: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x2e4e3cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_2e4e40:
    // 0x2e4e40: 0xdfa30060  ld          $v1, 0x60($sp)
    ctx->pc = 0x2e4e40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2e4e44:
    // 0x2e4e44: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2e4e44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2e4e48:
    // 0x2e4e48: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2e4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2e4e4c:
    // 0x2e4e4c: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x2e4e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_2e4e50:
    // 0x2e4e50: 0xafbe0084  sw          $fp, 0x84($sp)
    ctx->pc = 0x2e4e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 30));
label_2e4e54:
    // 0x2e4e54: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x2e4e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_2e4e58:
    // 0x2e4e58: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2e4e58u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e5c:
    // 0x2e4e5c: 0xffa30040  sd          $v1, 0x40($sp)
    ctx->pc = 0x2e4e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 3));
label_2e4e60:
    // 0x2e4e60: 0x2e5102b  sltu        $v0, $s7, $a1
    ctx->pc = 0x2e4e60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_2e4e64:
    // 0x2e4e64: 0x1440ff9a  bnez        $v0, . + 4 + (-0x66 << 2)
label_2e4e68:
    if (ctx->pc == 0x2E4E68u) {
        ctx->pc = 0x2E4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E64u;
        // 0x2e4e68: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E6Cu;
        goto label_2e4e6c;
    }
    ctx->pc = 0x2E4E64u;
    {
        const bool branch_taken_0x2e4e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E4E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E64u;
        // 0x2e4e68: 0xafa40078  sw          $a0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e4e64) {
            ctx->pc = 0x2E4CD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e4cd0;
        }
    }
    ctx->pc = 0x2E4E6Cu;
label_2e4e6c:
    // 0x2e4e6c: 0x8fb00058  lw          $s0, 0x58($sp)
    ctx->pc = 0x2e4e6cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2e4e70:
    // 0x2e4e70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e4e70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e74:
    // 0x2e4e74: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x2e4e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
label_2e4e78:
    // 0x2e4e78: 0xc075fdc  jal         func_1D7F70
label_2e4e7c:
    if (ctx->pc == 0x2E4E7Cu) {
        ctx->pc = 0x2E4E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E78u;
        // 0x2e4e7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E80u;
        goto label_2e4e80;
    }
    ctx->pc = 0x2E4E78u;
    SET_GPR_U32(ctx, 31, 0x2E4E80u);
    ctx->pc = 0x2E4E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E78u;
    // 0x2e4e7c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7F70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7F70u, 0x2E4E78u, 0x2E4E80u)) {
        return;
    }
    ctx->pc = 0x2E4E80u;
label_2e4e80:
    // 0x2e4e80: 0xc0b7080  jal         func_2DC200
label_2e4e84:
    if (ctx->pc == 0x2E4E84u) {
        ctx->pc = 0x2E4E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E80u;
        // 0x2e4e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E88u;
        goto label_2e4e88;
    }
    ctx->pc = 0x2E4E80u;
    SET_GPR_U32(ctx, 31, 0x2E4E88u);
    ctx->pc = 0x2E4E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E80u;
    // 0x2e4e84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4E80u, 0x2E4E88u)) {
        return;
    }
    ctx->pc = 0x2E4E88u;
label_2e4e88:
    // 0x2e4e88: 0xc0b7080  jal         func_2DC200
label_2e4e8c:
    if (ctx->pc == 0x2E4E8Cu) {
        ctx->pc = 0x2E4E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4E88u;
        // 0x2e4e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4E90u;
        goto label_2e4e90;
    }
    ctx->pc = 0x2E4E88u;
    SET_GPR_U32(ctx, 31, 0x2E4E90u);
    ctx->pc = 0x2E4E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4E88u;
    // 0x2e4e8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2E4E88u, 0x2E4E90u)) {
        return;
    }
    ctx->pc = 0x2E4E90u;
label_2e4e90:
    // 0x2e4e90: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e4e90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e4e94:
    // 0x2e4e94: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x2e4e94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_2e4e98:
    // 0x2e4e98: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x2e4e98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
label_2e4e9c:
    // 0x2e4e9c: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x2e4e9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_2e4ea0:
    // 0x2e4ea0: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x2e4ea0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_2e4ea4:
    // 0x2e4ea4: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x2e4ea4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_2e4ea8:
    // 0x2e4ea8: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x2e4ea8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_2e4eac:
    // 0x2e4eac: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x2e4eacu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2e4eb0:
    // 0x2e4eb0: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x2e4eb0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2e4eb4:
    // 0x2e4eb4: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x2e4eb4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2e4eb8:
    // 0x2e4eb8: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2e4eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2e4ebc:
    // 0x2e4ebc: 0x3e00008  jr          $ra
label_2e4ec0:
    if (ctx->pc == 0x2E4EC0u) {
        ctx->pc = 0x2E4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EBCu;
        // 0x2e4ec0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E4EC4u;
        goto label_2e4ec4;
    }
    ctx->pc = 0x2E4EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E4EBCu;
        // 0x2e4ec0: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E4EBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4EC4u;
label_2e4ec4:
    // 0x2e4ec4: 0x0  nop
    ctx->pc = 0x2e4ec4u;
    // NOP
    ctx->pc = 0x2e4ec8u;
}
