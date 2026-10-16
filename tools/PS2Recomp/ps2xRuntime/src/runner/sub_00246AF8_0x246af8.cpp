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

// Function: sub_00246AF8
// Address: 0x246af8 - 0x246f40
void sub_00246AF8_0x246af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00246AF8_0x246af8");
#endif

    switch (ctx->pc) {
        case 0x246af8u: goto label_246af8;
        case 0x246afcu: goto label_246afc;
        case 0x246b00u: goto label_246b00;
        case 0x246b04u: goto label_246b04;
        case 0x246b08u: goto label_246b08;
        case 0x246b0cu: goto label_246b0c;
        case 0x246b10u: goto label_246b10;
        case 0x246b14u: goto label_246b14;
        case 0x246b18u: goto label_246b18;
        case 0x246b1cu: goto label_246b1c;
        case 0x246b20u: goto label_246b20;
        case 0x246b24u: goto label_246b24;
        case 0x246b28u: goto label_246b28;
        case 0x246b2cu: goto label_246b2c;
        case 0x246b30u: goto label_246b30;
        case 0x246b34u: goto label_246b34;
        case 0x246b38u: goto label_246b38;
        case 0x246b3cu: goto label_246b3c;
        case 0x246b40u: goto label_246b40;
        case 0x246b44u: goto label_246b44;
        case 0x246b48u: goto label_246b48;
        case 0x246b4cu: goto label_246b4c;
        case 0x246b50u: goto label_246b50;
        case 0x246b54u: goto label_246b54;
        case 0x246b58u: goto label_246b58;
        case 0x246b5cu: goto label_246b5c;
        case 0x246b60u: goto label_246b60;
        case 0x246b64u: goto label_246b64;
        case 0x246b68u: goto label_246b68;
        case 0x246b6cu: goto label_246b6c;
        case 0x246b70u: goto label_246b70;
        case 0x246b74u: goto label_246b74;
        case 0x246b78u: goto label_246b78;
        case 0x246b7cu: goto label_246b7c;
        case 0x246b80u: goto label_246b80;
        case 0x246b84u: goto label_246b84;
        case 0x246b88u: goto label_246b88;
        case 0x246b8cu: goto label_246b8c;
        case 0x246b90u: goto label_246b90;
        case 0x246b94u: goto label_246b94;
        case 0x246b98u: goto label_246b98;
        case 0x246b9cu: goto label_246b9c;
        case 0x246ba0u: goto label_246ba0;
        case 0x246ba4u: goto label_246ba4;
        case 0x246ba8u: goto label_246ba8;
        case 0x246bacu: goto label_246bac;
        case 0x246bb0u: goto label_246bb0;
        case 0x246bb4u: goto label_246bb4;
        case 0x246bb8u: goto label_246bb8;
        case 0x246bbcu: goto label_246bbc;
        case 0x246bc0u: goto label_246bc0;
        case 0x246bc4u: goto label_246bc4;
        case 0x246bc8u: goto label_246bc8;
        case 0x246bccu: goto label_246bcc;
        case 0x246bd0u: goto label_246bd0;
        case 0x246bd4u: goto label_246bd4;
        case 0x246bd8u: goto label_246bd8;
        case 0x246bdcu: goto label_246bdc;
        case 0x246be0u: goto label_246be0;
        case 0x246be4u: goto label_246be4;
        case 0x246be8u: goto label_246be8;
        case 0x246becu: goto label_246bec;
        case 0x246bf0u: goto label_246bf0;
        case 0x246bf4u: goto label_246bf4;
        case 0x246bf8u: goto label_246bf8;
        case 0x246bfcu: goto label_246bfc;
        case 0x246c00u: goto label_246c00;
        case 0x246c04u: goto label_246c04;
        case 0x246c08u: goto label_246c08;
        case 0x246c0cu: goto label_246c0c;
        case 0x246c10u: goto label_246c10;
        case 0x246c14u: goto label_246c14;
        case 0x246c18u: goto label_246c18;
        case 0x246c1cu: goto label_246c1c;
        case 0x246c20u: goto label_246c20;
        case 0x246c24u: goto label_246c24;
        case 0x246c28u: goto label_246c28;
        case 0x246c2cu: goto label_246c2c;
        case 0x246c30u: goto label_246c30;
        case 0x246c34u: goto label_246c34;
        case 0x246c38u: goto label_246c38;
        case 0x246c3cu: goto label_246c3c;
        case 0x246c40u: goto label_246c40;
        case 0x246c44u: goto label_246c44;
        case 0x246c48u: goto label_246c48;
        case 0x246c4cu: goto label_246c4c;
        case 0x246c50u: goto label_246c50;
        case 0x246c54u: goto label_246c54;
        case 0x246c58u: goto label_246c58;
        case 0x246c5cu: goto label_246c5c;
        case 0x246c60u: goto label_246c60;
        case 0x246c64u: goto label_246c64;
        case 0x246c68u: goto label_246c68;
        case 0x246c6cu: goto label_246c6c;
        case 0x246c70u: goto label_246c70;
        case 0x246c74u: goto label_246c74;
        case 0x246c78u: goto label_246c78;
        case 0x246c7cu: goto label_246c7c;
        case 0x246c80u: goto label_246c80;
        case 0x246c84u: goto label_246c84;
        case 0x246c88u: goto label_246c88;
        case 0x246c8cu: goto label_246c8c;
        case 0x246c90u: goto label_246c90;
        case 0x246c94u: goto label_246c94;
        case 0x246c98u: goto label_246c98;
        case 0x246c9cu: goto label_246c9c;
        case 0x246ca0u: goto label_246ca0;
        case 0x246ca4u: goto label_246ca4;
        case 0x246ca8u: goto label_246ca8;
        case 0x246cacu: goto label_246cac;
        case 0x246cb0u: goto label_246cb0;
        case 0x246cb4u: goto label_246cb4;
        case 0x246cb8u: goto label_246cb8;
        case 0x246cbcu: goto label_246cbc;
        case 0x246cc0u: goto label_246cc0;
        case 0x246cc4u: goto label_246cc4;
        case 0x246cc8u: goto label_246cc8;
        case 0x246cccu: goto label_246ccc;
        case 0x246cd0u: goto label_246cd0;
        case 0x246cd4u: goto label_246cd4;
        case 0x246cd8u: goto label_246cd8;
        case 0x246cdcu: goto label_246cdc;
        case 0x246ce0u: goto label_246ce0;
        case 0x246ce4u: goto label_246ce4;
        case 0x246ce8u: goto label_246ce8;
        case 0x246cecu: goto label_246cec;
        case 0x246cf0u: goto label_246cf0;
        case 0x246cf4u: goto label_246cf4;
        case 0x246cf8u: goto label_246cf8;
        case 0x246cfcu: goto label_246cfc;
        case 0x246d00u: goto label_246d00;
        case 0x246d04u: goto label_246d04;
        case 0x246d08u: goto label_246d08;
        case 0x246d0cu: goto label_246d0c;
        case 0x246d10u: goto label_246d10;
        case 0x246d14u: goto label_246d14;
        case 0x246d18u: goto label_246d18;
        case 0x246d1cu: goto label_246d1c;
        case 0x246d20u: goto label_246d20;
        case 0x246d24u: goto label_246d24;
        case 0x246d28u: goto label_246d28;
        case 0x246d2cu: goto label_246d2c;
        case 0x246d30u: goto label_246d30;
        case 0x246d34u: goto label_246d34;
        case 0x246d38u: goto label_246d38;
        case 0x246d3cu: goto label_246d3c;
        case 0x246d40u: goto label_246d40;
        case 0x246d44u: goto label_246d44;
        case 0x246d48u: goto label_246d48;
        case 0x246d4cu: goto label_246d4c;
        case 0x246d50u: goto label_246d50;
        case 0x246d54u: goto label_246d54;
        case 0x246d58u: goto label_246d58;
        case 0x246d5cu: goto label_246d5c;
        case 0x246d60u: goto label_246d60;
        case 0x246d64u: goto label_246d64;
        case 0x246d68u: goto label_246d68;
        case 0x246d6cu: goto label_246d6c;
        case 0x246d70u: goto label_246d70;
        case 0x246d74u: goto label_246d74;
        case 0x246d78u: goto label_246d78;
        case 0x246d7cu: goto label_246d7c;
        case 0x246d80u: goto label_246d80;
        case 0x246d84u: goto label_246d84;
        case 0x246d88u: goto label_246d88;
        case 0x246d8cu: goto label_246d8c;
        case 0x246d90u: goto label_246d90;
        case 0x246d94u: goto label_246d94;
        case 0x246d98u: goto label_246d98;
        case 0x246d9cu: goto label_246d9c;
        case 0x246da0u: goto label_246da0;
        case 0x246da4u: goto label_246da4;
        case 0x246da8u: goto label_246da8;
        case 0x246dacu: goto label_246dac;
        case 0x246db0u: goto label_246db0;
        case 0x246db4u: goto label_246db4;
        case 0x246db8u: goto label_246db8;
        case 0x246dbcu: goto label_246dbc;
        case 0x246dc0u: goto label_246dc0;
        case 0x246dc4u: goto label_246dc4;
        case 0x246dc8u: goto label_246dc8;
        case 0x246dccu: goto label_246dcc;
        case 0x246dd0u: goto label_246dd0;
        case 0x246dd4u: goto label_246dd4;
        case 0x246dd8u: goto label_246dd8;
        case 0x246ddcu: goto label_246ddc;
        case 0x246de0u: goto label_246de0;
        case 0x246de4u: goto label_246de4;
        case 0x246de8u: goto label_246de8;
        case 0x246decu: goto label_246dec;
        case 0x246df0u: goto label_246df0;
        case 0x246df4u: goto label_246df4;
        case 0x246df8u: goto label_246df8;
        case 0x246dfcu: goto label_246dfc;
        case 0x246e00u: goto label_246e00;
        case 0x246e04u: goto label_246e04;
        case 0x246e08u: goto label_246e08;
        case 0x246e0cu: goto label_246e0c;
        case 0x246e10u: goto label_246e10;
        case 0x246e14u: goto label_246e14;
        case 0x246e18u: goto label_246e18;
        case 0x246e1cu: goto label_246e1c;
        case 0x246e20u: goto label_246e20;
        case 0x246e24u: goto label_246e24;
        case 0x246e28u: goto label_246e28;
        case 0x246e2cu: goto label_246e2c;
        case 0x246e30u: goto label_246e30;
        case 0x246e34u: goto label_246e34;
        case 0x246e38u: goto label_246e38;
        case 0x246e3cu: goto label_246e3c;
        case 0x246e40u: goto label_246e40;
        case 0x246e44u: goto label_246e44;
        case 0x246e48u: goto label_246e48;
        case 0x246e4cu: goto label_246e4c;
        case 0x246e50u: goto label_246e50;
        case 0x246e54u: goto label_246e54;
        case 0x246e58u: goto label_246e58;
        case 0x246e5cu: goto label_246e5c;
        case 0x246e60u: goto label_246e60;
        case 0x246e64u: goto label_246e64;
        case 0x246e68u: goto label_246e68;
        case 0x246e6cu: goto label_246e6c;
        case 0x246e70u: goto label_246e70;
        case 0x246e74u: goto label_246e74;
        case 0x246e78u: goto label_246e78;
        case 0x246e7cu: goto label_246e7c;
        case 0x246e80u: goto label_246e80;
        case 0x246e84u: goto label_246e84;
        case 0x246e88u: goto label_246e88;
        case 0x246e8cu: goto label_246e8c;
        case 0x246e90u: goto label_246e90;
        case 0x246e94u: goto label_246e94;
        case 0x246e98u: goto label_246e98;
        case 0x246e9cu: goto label_246e9c;
        case 0x246ea0u: goto label_246ea0;
        case 0x246ea4u: goto label_246ea4;
        case 0x246ea8u: goto label_246ea8;
        case 0x246eacu: goto label_246eac;
        case 0x246eb0u: goto label_246eb0;
        case 0x246eb4u: goto label_246eb4;
        case 0x246eb8u: goto label_246eb8;
        case 0x246ebcu: goto label_246ebc;
        case 0x246ec0u: goto label_246ec0;
        case 0x246ec4u: goto label_246ec4;
        case 0x246ec8u: goto label_246ec8;
        case 0x246eccu: goto label_246ecc;
        case 0x246ed0u: goto label_246ed0;
        case 0x246ed4u: goto label_246ed4;
        case 0x246ed8u: goto label_246ed8;
        case 0x246edcu: goto label_246edc;
        case 0x246ee0u: goto label_246ee0;
        case 0x246ee4u: goto label_246ee4;
        case 0x246ee8u: goto label_246ee8;
        case 0x246eecu: goto label_246eec;
        case 0x246ef0u: goto label_246ef0;
        case 0x246ef4u: goto label_246ef4;
        case 0x246ef8u: goto label_246ef8;
        case 0x246efcu: goto label_246efc;
        case 0x246f00u: goto label_246f00;
        case 0x246f04u: goto label_246f04;
        case 0x246f08u: goto label_246f08;
        case 0x246f0cu: goto label_246f0c;
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        default: break;
    }

    ctx->pc = 0x246af8u;

label_246af8:
    // 0x246af8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x246af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_246afc:
    // 0x246afc: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x246afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
label_246b00:
    // 0x246b00: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x246b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_246b04:
    // 0x246b04: 0x24461180  addiu       $a2, $v0, 0x1180
    ctx->pc = 0x246b04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4480));
label_246b08:
    // 0x246b08: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x246b08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_246b0c:
    // 0x246b0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246b0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_246b10:
    // 0x246b10: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x246b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_246b14:
    // 0x246b14: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x246b14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
label_246b18:
    // 0x246b18: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x246b18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_246b1c:
    // 0x246b1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x246b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_246b20:
    // 0x246b20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x246b20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246b24:
    // 0x246b24: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x246b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_246b28:
    // 0x246b28: 0x8c63416c  lw          $v1, 0x416C($v1)
    ctx->pc = 0x246b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16748)));
label_246b2c:
    // 0x246b2c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x246b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
label_246b30:
    // 0x246b30: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
label_246b34:
    if (ctx->pc == 0x246B34u) {
        ctx->pc = 0x246B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B30u;
        // 0x246b34: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B38u;
        goto label_246b38;
    }
    ctx->pc = 0x246B30u;
    {
        const bool branch_taken_0x246b30 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x246B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B30u;
        // 0x246b34: 0x2238021  addu        $s0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b30) {
            ctx->pc = 0x246B68u;
            goto label_246b68;
        }
    }
    ctx->pc = 0x246B38u;
label_246b38:
    // 0x246b38: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x246b38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_246b3c:
    // 0x246b3c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x246b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_246b40:
    // 0x246b40: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_246b44:
    if (ctx->pc == 0x246B44u) {
        ctx->pc = 0x246B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B40u;
        // 0x246b44: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B48u;
        goto label_246b48;
    }
    ctx->pc = 0x246B40u;
    {
        const bool branch_taken_0x246b40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B40u;
        // 0x246b44: 0x8e030058  lw          $v1, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b40) {
            ctx->pc = 0x246B6Cu;
            goto label_246b6c;
        }
    }
    ctx->pc = 0x246B48u;
label_246b48:
    // 0x246b48: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x246b48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_246b4c:
    // 0x246b4c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_246b50:
    if (ctx->pc == 0x246B50u) {
        ctx->pc = 0x246B54u;
        goto label_246b54;
    }
    ctx->pc = 0x246B4Cu;
    {
        const bool branch_taken_0x246b4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b4c) {
            ctx->pc = 0x246B6Cu;
            goto label_246b6c;
        }
    }
    ctx->pc = 0x246B54u;
label_246b54:
    // 0x246b54: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_246b58:
    if (ctx->pc == 0x246B58u) {
        ctx->pc = 0x246B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B54u;
        // 0x246b58: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B5Cu;
        goto label_246b5c;
    }
    ctx->pc = 0x246B54u;
    {
        const bool branch_taken_0x246b54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x246B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B54u;
        // 0x246b58: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b54) {
            ctx->pc = 0x246B74u;
            goto label_246b74;
        }
    }
    ctx->pc = 0x246B5Cu;
label_246b5c:
    // 0x246b5c: 0x8cc20020  lw          $v0, 0x20($a2)
    ctx->pc = 0x246b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
label_246b60:
    // 0x246b60: 0x40f809  jalr        $v0
label_246b64:
    if (ctx->pc == 0x246B64u) {
        ctx->pc = 0x246B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B60u;
        // 0x246b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B68u;
        goto label_246b68;
    }
    ctx->pc = 0x246B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x246B68u);
        ctx->pc = 0x246B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B60u;
        // 0x246b64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246B60u, 0x246B68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x246B68u;
label_246b68:
    // 0x246b68: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x246b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246b6c:
    // 0x246b6c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_246b70:
    if (ctx->pc == 0x246B70u) {
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B74u;
        goto label_246b74;
    }
    ctx->pc = 0x246B6Cu;
    {
        const bool branch_taken_0x246b6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x246B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B6Cu;
        // 0x246b70: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246b6c) {
            ctx->pc = 0x246BC8u;
            goto label_246bc8;
        }
    }
    ctx->pc = 0x246B74u;
label_246b74:
    // 0x246b74: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_246b78:
    if (ctx->pc == 0x246B78u) {
        ctx->pc = 0x246B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246B74u;
        // 0x246b78: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246B7Cu;
        goto label_246b7c;
    }
    ctx->pc = 0x246B74u;
    {
        const bool branch_taken_0x246b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246b74) {
            ctx->pc = 0x246B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246B74u;
            // 0x246b78: 0x92220020  lbu         $v0, 0x20($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246BCCu;
            goto label_246bcc;
        }
    }
    ctx->pc = 0x246B7Cu;
label_246b7c:
    // 0x246b7c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x246b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_246b80:
    // 0x246b80: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x246b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_246b84:
    // 0x246b84: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x246b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_246b88:
    // 0x246b88: 0x3c05fff8  lui         $a1, 0xFFF8
    ctx->pc = 0x246b88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65528 << 16));
label_246b8c:
    // 0x246b8c: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x246b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_246b90:
    // 0x246b90: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x246b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_246b94:
    // 0x246b94: 0x30483fff  andi        $t0, $v0, 0x3FFF
    ctx->pc = 0x246b94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246b98:
    // 0x246b98: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x246b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_246b9c:
    // 0x246b9c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x246b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_246ba0:
    // 0x246ba0: 0x34c6c000  ori         $a2, $a2, 0xC000
    ctx->pc = 0x246ba0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)49152);
label_246ba4:
    // 0x246ba4: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x246ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246ba8:
    // 0x246ba8: 0x34a5001f  ori         $a1, $a1, 0x1F
    ctx->pc = 0x246ba8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)31);
label_246bac:
    // 0x246bac: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x246bacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_246bb0:
    // 0x246bb0: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x246bb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
label_246bb4:
    // 0x246bb4: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x246bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_246bb8:
    // 0x246bb8: 0x882025  or          $a0, $a0, $t0
    ctx->pc = 0x246bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 8));
label_246bbc:
    // 0x246bbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x246bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_246bc0:
    // 0x246bc0: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x246bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_246bc4:
    // 0x246bc4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x246bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_246bc8:
    // 0x246bc8: 0x92220020  lbu         $v0, 0x20($s1)
    ctx->pc = 0x246bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_246bcc:
    // 0x246bcc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x246bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246bd0:
    // 0x246bd0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x246bd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_246bd4:
    // 0x246bd4: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x246bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_246bd8:
    // 0x246bd8: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_246bdc:
    if (ctx->pc == 0x246BDCu) {
        ctx->pc = 0x246BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD8u;
        // 0x246bdc: 0x26641180  addiu       $a0, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BE0u;
        goto label_246be0;
    }
    ctx->pc = 0x246BD8u;
    {
        const bool branch_taken_0x246bd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x246BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BD8u;
        // 0x246bdc: 0x26641180  addiu       $a0, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bd8) {
            ctx->pc = 0x246BF4u;
            goto label_246bf4;
        }
    }
    ctx->pc = 0x246BE0u;
label_246be0:
    // 0x246be0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x246be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246be4:
    // 0x246be4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_246be8:
    if (ctx->pc == 0x246BE8u) {
        ctx->pc = 0x246BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BE4u;
        // 0x246be8: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BECu;
        goto label_246bec;
    }
    ctx->pc = 0x246BE4u;
    {
        const bool branch_taken_0x246be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246be4) {
            ctx->pc = 0x246BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BE4u;
            // 0x246be8: 0x8c820024  lw          $v0, 0x24($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246BF8u;
            goto label_246bf8;
        }
    }
    ctx->pc = 0x246BECu;
label_246bec:
    // 0x246bec: 0x100000cd  b           . + 4 + (0xCD << 2)
label_246bf0:
    if (ctx->pc == 0x246BF0u) {
        ctx->pc = 0x246BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BECu;
        // 0x246bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246BF4u;
        goto label_246bf4;
    }
    ctx->pc = 0x246BECu;
    {
        const bool branch_taken_0x246bec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BECu;
        // 0x246bf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246bec) {
            ctx->pc = 0x246F24u;
            goto label_246f24;
        }
    }
    ctx->pc = 0x246BF4u;
label_246bf4:
    // 0x246bf4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x246bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_246bf8:
    // 0x246bf8: 0x54510011  bnel        $v0, $s1, . + 4 + (0x11 << 2)
label_246bfc:
    if (ctx->pc == 0x246BFCu) {
        ctx->pc = 0x246BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246BF8u;
        // 0x246bfc: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C00u;
        goto label_246c00;
    }
    ctx->pc = 0x246BF8u;
    {
        const bool branch_taken_0x246bf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x246bf8) {
            ctx->pc = 0x246BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246BF8u;
            // 0x246bfc: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C00u;
label_246c00:
    // 0x246c00: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x246c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_246c04:
    // 0x246c04: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x246c04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_246c08:
    // 0x246c08: 0x8c634138  lw          $v1, 0x4138($v1)
    ctx->pc = 0x246c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16696)));
label_246c0c:
    // 0x246c0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x246c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_246c10:
    // 0x246c10: 0x5062000b  beql        $v1, $v0, . + 4 + (0xB << 2)
label_246c14:
    if (ctx->pc == 0x246C14u) {
        ctx->pc = 0x246C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C10u;
        // 0x246c14: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C18u;
        goto label_246c18;
    }
    ctx->pc = 0x246C10u;
    {
        const bool branch_taken_0x246c10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x246c10) {
            ctx->pc = 0x246C14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C10u;
            // 0x246c14: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C18u;
label_246c18:
    // 0x246c18: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x246c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_246c1c:
    // 0x246c1c: 0x54520008  bnel        $v0, $s2, . + 4 + (0x8 << 2)
label_246c20:
    if (ctx->pc == 0x246C20u) {
        ctx->pc = 0x246C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C1Cu;
        // 0x246c20: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C24u;
        goto label_246c24;
    }
    ctx->pc = 0x246C1Cu;
    {
        const bool branch_taken_0x246c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x246c1c) {
            ctx->pc = 0x246C20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C1Cu;
            // 0x246c20: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C40u;
            goto label_246c40;
        }
    }
    ctx->pc = 0x246C24u;
label_246c24:
    // 0x246c24: 0x30a30007  andi        $v1, $a1, 0x7
    ctx->pc = 0x246c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
label_246c28:
    // 0x246c28: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x246c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246c2c:
    // 0x246c2c: 0x146200bd  bne         $v1, $v0, . + 4 + (0xBD << 2)
label_246c30:
    if (ctx->pc == 0x246C30u) {
        ctx->pc = 0x246C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C2Cu;
        // 0x246c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C34u;
        goto label_246c34;
    }
    ctx->pc = 0x246C2Cu;
    {
        const bool branch_taken_0x246c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x246C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C2Cu;
        // 0x246c30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c2c) {
            ctx->pc = 0x246F24u;
            goto label_246f24;
        }
    }
    ctx->pc = 0x246C34u;
label_246c34:
    // 0x246c34: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x246c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_246c38:
    // 0x246c38: 0x105100b9  beq         $v0, $s1, . + 4 + (0xB9 << 2)
label_246c3c:
    if (ctx->pc == 0x246C3Cu) {
        ctx->pc = 0x246C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C38u;
        // 0x246c3c: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C40u;
        goto label_246c40;
    }
    ctx->pc = 0x246C38u;
    {
        const bool branch_taken_0x246c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x246C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C38u;
        // 0x246c3c: 0x26651180  addiu       $a1, $s3, 0x1180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c38) {
            ctx->pc = 0x246F20u;
            goto label_246f20;
        }
    }
    ctx->pc = 0x246C40u;
label_246c40:
    // 0x246c40: 0xacb10024  sw          $s1, 0x24($a1)
    ctx->pc = 0x246c40u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 17));
label_246c44:
    // 0x246c44: 0xacb20028  sw          $s2, 0x28($a1)
    ctx->pc = 0x246c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 18));
label_246c48:
    // 0x246c48: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x246c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_246c4c:
    // 0x246c4c: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_246c50:
    if (ctx->pc == 0x246C50u) {
        ctx->pc = 0x246C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C4Cu;
        // 0x246c50: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C54u;
        goto label_246c54;
    }
    ctx->pc = 0x246C4Cu;
    {
        const bool branch_taken_0x246c4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C4Cu;
        // 0x246c50: 0x8e621180  lw          $v0, 0x1180($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c4c) {
            ctx->pc = 0x246C98u;
            goto label_246c98;
        }
    }
    ctx->pc = 0x246C54u;
label_246c54:
    // 0x246c54: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
label_246c58:
    if (ctx->pc == 0x246C58u) {
        ctx->pc = 0x246C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C54u;
        // 0x246c58: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C5Cu;
        goto label_246c5c;
    }
    ctx->pc = 0x246C54u;
    {
        const bool branch_taken_0x246c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x246c54) {
            ctx->pc = 0x246C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246C54u;
            // 0x246c58: 0x92020017  lbu         $v0, 0x17($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246C9Cu;
            goto label_246c9c;
        }
    }
    ctx->pc = 0x246C5Cu;
label_246c5c:
    // 0x246c5c: 0x16400008  bnez        $s2, . + 4 + (0x8 << 2)
label_246c60:
    if (ctx->pc == 0x246C60u) {
        ctx->pc = 0x246C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C5Cu;
        // 0x246c60: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C64u;
        goto label_246c64;
    }
    ctx->pc = 0x246C5Cu;
    {
        const bool branch_taken_0x246c5c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x246C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C5Cu;
        // 0x246c60: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c5c) {
            ctx->pc = 0x246C80u;
            goto label_246c80;
        }
    }
    ctx->pc = 0x246C64u;
label_246c64:
    // 0x246c64: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x246c64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_246c68:
    // 0x246c68: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x246c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_246c6c:
    // 0x246c6c: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x246c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246c70:
    // 0x246c70: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x246c70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_246c74:
    // 0x246c74: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x246c74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_246c78:
    // 0x246c78: 0x10000007  b           . + 4 + (0x7 << 2)
label_246c7c:
    if (ctx->pc == 0x246C7Cu) {
        ctx->pc = 0x246C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C78u;
        // 0x246c7c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246C80u;
        goto label_246c80;
    }
    ctx->pc = 0x246C78u;
    {
        const bool branch_taken_0x246c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C78u;
        // 0x246c7c: 0xaca2002c  sw          $v0, 0x2C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c78) {
            ctx->pc = 0x246C98u;
            goto label_246c98;
        }
    }
    ctx->pc = 0x246C80u;
label_246c80:
    // 0x246c80: 0x3c03aaaa  lui         $v1, 0xAAAA
    ctx->pc = 0x246c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43690 << 16));
label_246c84:
    // 0x246c84: 0x3463aaab  ori         $v1, $v1, 0xAAAB
    ctx->pc = 0x246c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)43691);
label_246c88:
    // 0x246c88: 0x821023  subu        $v0, $a0, $v0
    ctx->pc = 0x246c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_246c8c:
    // 0x246c8c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x246c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_246c90:
    // 0x246c90: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x246c90u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_246c94:
    // 0x246c94: 0xaca20030  sw          $v0, 0x30($a1)
    ctx->pc = 0x246c94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 2));
label_246c98:
    // 0x246c98: 0x92020017  lbu         $v0, 0x17($s0)
    ctx->pc = 0x246c98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 23)));
label_246c9c:
    // 0x246c9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_246ca0:
    if (ctx->pc == 0x246CA0u) {
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CA4u;
        goto label_246ca4;
    }
    ctx->pc = 0x246C9Cu;
    {
        const bool branch_taken_0x246c9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246C9Cu;
        // 0x246ca0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246c9c) {
            ctx->pc = 0x246CC0u;
            goto label_246cc0;
        }
    }
    ctx->pc = 0x246CA4u;
label_246ca4:
    // 0x246ca4: 0x8f828504  lw          $v0, -0x7AFC($gp)
    ctx->pc = 0x246ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935812)));
label_246ca8:
    // 0x246ca8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_246cac:
    if (ctx->pc == 0x246CACu) {
        ctx->pc = 0x246CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA8u;
        // 0x246cac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CB0u;
        goto label_246cb0;
    }
    ctx->pc = 0x246CA8u;
    {
        const bool branch_taken_0x246ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x246CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CA8u;
        // 0x246cac: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ca8) {
            ctx->pc = 0x246CC0u;
            goto label_246cc0;
        }
    }
    ctx->pc = 0x246CB0u;
label_246cb0:
    // 0x246cb0: 0x8e621180  lw          $v0, 0x1180($s3)
    ctx->pc = 0x246cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
label_246cb4:
    // 0x246cb4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_246cb8:
    if (ctx->pc == 0x246CB8u) {
        ctx->pc = 0x246CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CB4u;
        // 0x246cb8: 0xaf8090f4  sw          $zero, -0x6F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CBCu;
        goto label_246cbc;
    }
    ctx->pc = 0x246CB4u;
    {
        const bool branch_taken_0x246cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x246cb4) {
            ctx->pc = 0x246CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x246CB4u;
            // 0x246cb8: 0xaf8090f4  sw          $zero, -0x6F0C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938868), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x246CBCu;
            goto label_246cbc;
        }
    }
    ctx->pc = 0x246CBCu;
label_246cbc:
    // 0x246cbc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x246cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_246cc0:
    // 0x246cc0: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x246cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_246cc4:
    // 0x246cc4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x246cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_246cc8:
    // 0x246cc8: 0xc08bbd6  jal         func_22EF58
label_246ccc:
    if (ctx->pc == 0x246CCCu) {
        ctx->pc = 0x246CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246CC8u;
        // 0x246ccc: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246CD0u;
        goto label_246cd0;
    }
    ctx->pc = 0x246CC8u;
    SET_GPR_U32(ctx, 31, 0x246CD0u);
    ctx->pc = 0x246CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x246CC8u;
    // 0x246ccc: 0x52280a  movz        $a1, $v0, $s2 (Delay Slot)
    if (GPR_U64(ctx, 18) == 0) SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x246CC8u, 0x246CD0u)) {
        return;
    }
    ctx->pc = 0x246CD0u;
label_246cd0:
    // 0x246cd0: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x246cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_246cd4:
    // 0x246cd4: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x246cd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
label_246cd8:
    // 0x246cd8: 0x34638004  ori         $v1, $v1, 0x8004
    ctx->pc = 0x246cd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32772);
label_246cdc:
    // 0x246cdc: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x246cdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_246ce0:
    // 0x246ce0: 0x6337c  dsll32      $a2, $a2, 13
    ctx->pc = 0x246ce0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 13));
label_246ce4:
    // 0x246ce4: 0x34c68005  ori         $a2, $a2, 0x8005
    ctx->pc = 0x246ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32773);
label_246ce8:
    // 0x246ce8: 0x72300b  movn        $a2, $v1, $s2
    ctx->pc = 0x246ce8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3));
label_246cec:
    // 0x246cec: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x246cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_246cf0:
    // 0x246cf0: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x246cf0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_246cf4:
    // 0x246cf4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x246cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_246cf8:
    // 0x246cf8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x246cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_246cfc:
    // 0x246cfc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x246cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_246d00:
    // 0x246d00: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x246d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_246d04:
    // 0x246d04: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246d04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246d08:
    // 0x246d08: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246d08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246d0c:
    // 0x246d0c: 0x2404003f  addiu       $a0, $zero, 0x3F
    ctx->pc = 0x246d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_246d10:
    // 0x246d10: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x246d10u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246d14:
    // 0x246d14: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x246d14u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
label_246d18:
    // 0x246d18: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x246d18u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_246d1c:
    // 0x246d1c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x246d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_246d20:
    // 0x246d20: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246d20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246d24:
    // 0x246d24: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246d24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246d28:
    // 0x246d28: 0x9e040008  lwu         $a0, 0x8($s0)
    ctx->pc = 0x246d28u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_246d2c:
    // 0x246d2c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x246d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_246d30:
    // 0x246d30: 0x9e02000c  lwu         $v0, 0xC($s0)
    ctx->pc = 0x246d30u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_246d34:
    // 0x246d34: 0x92230020  lbu         $v1, 0x20($s1)
    ctx->pc = 0x246d34u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 32)));
label_246d38:
    // 0x246d38: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246d3c:
    // 0x246d3c: 0x30630007  andi        $v1, $v1, 0x7
    ctx->pc = 0x246d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
label_246d40:
    // 0x246d40: 0x14650013  bne         $v1, $a1, . + 4 + (0x13 << 2)
label_246d44:
    if (ctx->pc == 0x246D44u) {
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D48u;
        goto label_246d48;
    }
    ctx->pc = 0x246D40u;
    {
        const bool branch_taken_0x246d40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x246D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D40u;
        // 0x246d44: 0x823025  or          $a2, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d40) {
            ctx->pc = 0x246D90u;
            goto label_246d90;
        }
    }
    ctx->pc = 0x246D48u;
label_246d48:
    // 0x246d48: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x246d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_246d4c:
    // 0x246d4c: 0x8c423524  lw          $v0, 0x3524($v0)
    ctx->pc = 0x246d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13604)));
label_246d50:
    // 0x246d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x246d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_246d54:
    // 0x246d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_246d58:
    if (ctx->pc == 0x246D58u) {
        ctx->pc = 0x246D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D54u;
        // 0x246d58: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D5Cu;
        goto label_246d5c;
    }
    ctx->pc = 0x246D54u;
    {
        const bool branch_taken_0x246d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D54u;
        // 0x246d58: 0x3c020073  lui         $v0, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d54) {
            ctx->pc = 0x246D68u;
            goto label_246d68;
        }
    }
    ctx->pc = 0x246D5Cu;
label_246d5c:
    // 0x246d5c: 0x10000004  b           . + 4 + (0x4 << 2)
label_246d60:
    if (ctx->pc == 0x246D60u) {
        ctx->pc = 0x246D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D5Cu;
        // 0x246d60: 0xdc445290  ld          $a0, 0x5290($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 21136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246D64u;
        goto label_246d64;
    }
    ctx->pc = 0x246D5Cu;
    {
        const bool branch_taken_0x246d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246D5Cu;
        // 0x246d60: 0xdc445290  ld          $a0, 0x5290($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 21136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246d5c) {
            ctx->pc = 0x246D70u;
            goto label_246d70;
        }
    }
    ctx->pc = 0x246D64u;
label_246d64:
    // 0x246d64: 0x0  nop
    ctx->pc = 0x246d64u;
    // NOP
label_246d68:
    // 0x246d68: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x246d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_246d6c:
    // 0x246d6c: 0xdc445120  ld          $a0, 0x5120($v0)
    ctx->pc = 0x246d6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 20768)));
label_246d70:
    // 0x246d70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x246d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_246d74:
    // 0x246d74: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x246d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
label_246d78:
    // 0x246d78: 0x42178  dsll        $a0, $a0, 5
    ctx->pc = 0x246d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 5);
label_246d7c:
    // 0x246d7c: 0x2403c000  addiu       $v1, $zero, -0x4000
    ctx->pc = 0x246d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
label_246d80:
    // 0x246d80: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x246d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246d84:
    // 0x246d84: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x246d84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
label_246d88:
    // 0x246d88: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x246d88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_246d8c:
    // 0x246d8c: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x246d8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_246d90:
    // 0x246d90: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x246d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_246d94:
    // 0x246d94: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x246d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_246d98:
    // 0x246d98: 0x52180b  movn        $v1, $v0, $s2
    ctx->pc = 0x246d98u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2));
label_246d9c:
    // 0x246d9c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x246d9cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_246da0:
    // 0x246da0: 0x3c07006b  lui         $a3, 0x6B
    ctx->pc = 0x246da0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)107 << 16));
label_246da4:
    // 0x246da4: 0x8ce7412c  lw          $a3, 0x412C($a3)
    ctx->pc = 0x246da4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16684)));
label_246da8:
    // 0x246da8: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x246da8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_246dac:
    // 0x246dac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x246dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_246db0:
    // 0x246db0: 0x1640001d  bnez        $s2, . + 4 + (0x1D << 2)
label_246db4:
    if (ctx->pc == 0x246DB4u) {
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0xaf8790bc  sw          $a3, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246DB8u;
        goto label_246db8;
    }
    ctx->pc = 0x246DB0u;
    {
        const bool branch_taken_0x246db0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x246DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246DB0u;
        // 0x246db4: 0xaf8790bc  sw          $a3, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246db0) {
            ctx->pc = 0x246E28u;
            goto label_246e28;
        }
    }
    ctx->pc = 0x246DB8u;
label_246db8:
    // 0x246db8: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x246db8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
label_246dbc:
    // 0x246dbc: 0xdc8434f8  ld          $a0, 0x34F8($a0)
    ctx->pc = 0x246dbcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 13560)));
label_246dc0:
    // 0x246dc0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x246dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_246dc4:
    // 0x246dc4: 0x3442ff3f  ori         $v0, $v0, 0xFF3F
    ctx->pc = 0x246dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65343);
label_246dc8:
    // 0x246dc8: 0x21378  dsll        $v0, $v0, 13
    ctx->pc = 0x246dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 13);
label_246dcc:
    // 0x246dcc: 0x34421de3  ori         $v0, $v0, 0x1DE3
    ctx->pc = 0x246dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7651);
label_246dd0:
    // 0x246dd0: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x246dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_246dd4:
    // 0x246dd4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x246dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_246dd8:
    // 0x246dd8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246dd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246ddc:
    // 0x246ddc: 0xfc2434f8  sd          $a0, 0x34F8($at)
    ctx->pc = 0x246ddcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 13560), GPR_U64(ctx, 4));
label_246de0:
    // 0x246de0: 0x96020014  lhu         $v0, 0x14($s0)
    ctx->pc = 0x246de0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_246de4:
    // 0x246de4: 0x92050016  lbu         $a1, 0x16($s0)
    ctx->pc = 0x246de4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 22)));
label_246de8:
    // 0x246de8: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x246de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
label_246dec:
    // 0x246dec: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x246decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
label_246df0:
    // 0x246df0: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x246df0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_246df4:
    // 0x246df4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246df8:
    // 0x246df8: 0x31cf8  dsll        $v1, $v1, 19
    ctx->pc = 0x246df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 19);
label_246dfc:
    // 0x246dfc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x246dfcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_246e00:
    // 0x246e00: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x246e00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_246e04:
    // 0x246e04: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x246e04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_246e08:
    // 0x246e08: 0x70c41b89  pcpyld      $v1, $a2, $a0
    ctx->pc = 0x246e08u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
label_246e0c:
    // 0x246e0c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246e10:
    // 0x246e10: 0xfc2434f8  sd          $a0, 0x34F8($at)
    ctx->pc = 0x246e10u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 13560), GPR_U64(ctx, 4));
label_246e14:
    // 0x246e14: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x246e14u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
label_246e18:
    // 0x246e18: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x246e18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_246e1c:
    // 0x246e1c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246e1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246e20:
    // 0x246e20: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246e20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246e24:
    // 0x246e24: 0x0  nop
    ctx->pc = 0x246e24u;
    // NOP
label_246e28:
    // 0x246e28: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x246e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_246e2c:
    // 0x246e2c: 0x8e651180  lw          $a1, 0x1180($s3)
    ctx->pc = 0x246e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4480)));
label_246e30:
    // 0x246e30: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x246e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_246e34:
    // 0x246e34: 0x2223c  dsll32      $a0, $v0, 8
    ctx->pc = 0x246e34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 8));
label_246e38:
    // 0x246e38: 0x21d38  dsll        $v1, $v0, 20
    ctx->pc = 0x246e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 20);
label_246e3c:
    // 0x246e3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x246e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_246e40:
    // 0x246e40: 0x10a0001b  beqz        $a1, . + 4 + (0x1B << 2)
label_246e44:
    if (ctx->pc == 0x246E44u) {
        ctx->pc = 0x246E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E40u;
        // 0x246e44: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246E48u;
        goto label_246e48;
    }
    ctx->pc = 0x246E40u;
    {
        const bool branch_taken_0x246e40 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x246E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246E40u;
        // 0x246e44: 0x443825  or          $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246e40) {
            ctx->pc = 0x246EB0u;
            goto label_246eb0;
        }
    }
    ctx->pc = 0x246E48u;
label_246e48:
    // 0x246e48: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x246e48u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_246e4c:
    // 0x246e4c: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x246e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_246e50:
    // 0x246e50: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x246e50u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_246e54:
    // 0x246e54: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x246e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_246e58:
    // 0x246e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246e5c:
    // 0x246e5c: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x246e5cu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_246e60:
    // 0x246e60: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x246e60u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_246e64:
    // 0x246e64: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x246e64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_246e68:
    // 0x246e68: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x246e68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_246e6c:
    // 0x246e6c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x246e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_246e70:
    // 0x246e70: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x246e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_246e74:
    // 0x246e74: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x246e74u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_246e78:
    // 0x246e78: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x246e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_246e7c:
    // 0x246e7c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246e7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246e80:
    // 0x246e80: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246e80u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246e84:
    // 0x246e84: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x246e84u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_246e88:
    // 0x246e88: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x246e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_246e8c:
    // 0x246e8c: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x246e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_246e90:
    // 0x246e90: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x246e90u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_246e94:
    // 0x246e94: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x246e94u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_246e98:
    // 0x246e98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x246e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_246e9c:
    // 0x246e9c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x246e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_246ea0:
    // 0x246ea0: 0xc7302d  daddu       $a2, $a2, $a3
    ctx->pc = 0x246ea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 7));
label_246ea4:
    // 0x246ea4: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x246ea4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_246ea8:
    // 0x246ea8: 0x10000019  b           . + 4 + (0x19 << 2)
label_246eac:
    if (ctx->pc == 0x246EACu) {
        ctx->pc = 0x246EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA8u;
        // 0x246eac: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246EB0u;
        goto label_246eb0;
    }
    ctx->pc = 0x246EA8u;
    {
        const bool branch_taken_0x246ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x246EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246EA8u;
        // 0x246eac: 0x7c430000  sq          $v1, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246ea8) {
            ctx->pc = 0x246F10u;
            goto label_246f10;
        }
    }
    ctx->pc = 0x246EB0u;
label_246eb0:
    // 0x246eb0: 0x9e02001c  lwu         $v0, 0x1C($s0)
    ctx->pc = 0x246eb0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_246eb4:
    // 0x246eb4: 0x24040035  addiu       $a0, $zero, 0x35
    ctx->pc = 0x246eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
label_246eb8:
    // 0x246eb8: 0x9e050018  lwu         $a1, 0x18($s0)
    ctx->pc = 0x246eb8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_246ebc:
    // 0x246ebc: 0x24030034  addiu       $v1, $zero, 0x34
    ctx->pc = 0x246ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_246ec0:
    // 0x246ec0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x246ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_246ec4:
    // 0x246ec4: 0x92180b  movn        $v1, $a0, $s2
    ctx->pc = 0x246ec4u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
label_246ec8:
    // 0x246ec8: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x246ec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_246ecc:
    // 0x246ecc: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x246eccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
label_246ed0:
    // 0x246ed0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x246ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_246ed4:
    // 0x246ed4: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x246ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16684)));
label_246ed8:
    // 0x246ed8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x246ed8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_246edc:
    // 0x246edc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x246edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_246ee0:
    // 0x246ee0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246ee4:
    // 0x246ee4: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246ee8:
    // 0x246ee8: 0x9e060020  lwu         $a2, 0x20($s0)
    ctx->pc = 0x246ee8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_246eec:
    // 0x246eec: 0x24050037  addiu       $a1, $zero, 0x37
    ctx->pc = 0x246eecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_246ef0:
    // 0x246ef0: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x246ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_246ef4:
    // 0x246ef4: 0x9e030024  lwu         $v1, 0x24($s0)
    ctx->pc = 0x246ef4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_246ef8:
    // 0x246ef8: 0xb2200b  movn        $a0, $a1, $s2
    ctx->pc = 0x246ef8u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5));
label_246efc:
    // 0x246efc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x246efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_246f00:
    // 0x246f00: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x246f00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
label_246f04:
    // 0x246f04: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x246f04u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
label_246f08:
    // 0x246f08: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x246f08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_246f0c:
    // 0x246f0c: 0x0  nop
    ctx->pc = 0x246f0cu;
    // NOP
label_246f10:
    // 0x246f10: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_246f14:
    // 0x246f14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x246f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
label_246f18:
    // 0x246f18: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x246f18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 16684), GPR_U32(ctx, 2));
label_246f1c:
    // 0x246f1c: 0xaf808504  sw          $zero, -0x7AFC($gp)
    ctx->pc = 0x246f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935812), GPR_U32(ctx, 0));
label_246f20:
    // 0x246f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x246f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_246f24:
    // 0x246f24: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x246f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_246f28:
    // 0x246f28: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x246f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_246f2c:
    // 0x246f2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x246f2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_246f30:
    // 0x246f30: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x246f30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_246f34:
    // 0x246f34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x246f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_246f38:
    // 0x246f38: 0x3e00008  jr          $ra
label_246f3c:
    if (ctx->pc == 0x246F3Cu) {
        ctx->pc = 0x246F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F38u;
        // 0x246f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x246F40u;
        goto label_fallthrough_0x246f38;
    }
    ctx->pc = 0x246F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x246F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x246F38u;
        // 0x246f3c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x246F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x246f38:
    ctx->pc = 0x246F40u;
}
