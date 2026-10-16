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

// Function: sub_001C1BF8
// Address: 0x1c1bf8 - 0x1c1e30
void sub_001C1BF8_0x1c1bf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C1BF8_0x1c1bf8");
#endif

    switch (ctx->pc) {
        case 0x1c1bf8u: goto label_1c1bf8;
        case 0x1c1bfcu: goto label_1c1bfc;
        case 0x1c1c00u: goto label_1c1c00;
        case 0x1c1c04u: goto label_1c1c04;
        case 0x1c1c08u: goto label_1c1c08;
        case 0x1c1c0cu: goto label_1c1c0c;
        case 0x1c1c10u: goto label_1c1c10;
        case 0x1c1c14u: goto label_1c1c14;
        case 0x1c1c18u: goto label_1c1c18;
        case 0x1c1c1cu: goto label_1c1c1c;
        case 0x1c1c20u: goto label_1c1c20;
        case 0x1c1c24u: goto label_1c1c24;
        case 0x1c1c28u: goto label_1c1c28;
        case 0x1c1c2cu: goto label_1c1c2c;
        case 0x1c1c30u: goto label_1c1c30;
        case 0x1c1c34u: goto label_1c1c34;
        case 0x1c1c38u: goto label_1c1c38;
        case 0x1c1c3cu: goto label_1c1c3c;
        case 0x1c1c40u: goto label_1c1c40;
        case 0x1c1c44u: goto label_1c1c44;
        case 0x1c1c48u: goto label_1c1c48;
        case 0x1c1c4cu: goto label_1c1c4c;
        case 0x1c1c50u: goto label_1c1c50;
        case 0x1c1c54u: goto label_1c1c54;
        case 0x1c1c58u: goto label_1c1c58;
        case 0x1c1c5cu: goto label_1c1c5c;
        case 0x1c1c60u: goto label_1c1c60;
        case 0x1c1c64u: goto label_1c1c64;
        case 0x1c1c68u: goto label_1c1c68;
        case 0x1c1c6cu: goto label_1c1c6c;
        case 0x1c1c70u: goto label_1c1c70;
        case 0x1c1c74u: goto label_1c1c74;
        case 0x1c1c78u: goto label_1c1c78;
        case 0x1c1c7cu: goto label_1c1c7c;
        case 0x1c1c80u: goto label_1c1c80;
        case 0x1c1c84u: goto label_1c1c84;
        case 0x1c1c88u: goto label_1c1c88;
        case 0x1c1c8cu: goto label_1c1c8c;
        case 0x1c1c90u: goto label_1c1c90;
        case 0x1c1c94u: goto label_1c1c94;
        case 0x1c1c98u: goto label_1c1c98;
        case 0x1c1c9cu: goto label_1c1c9c;
        case 0x1c1ca0u: goto label_1c1ca0;
        case 0x1c1ca4u: goto label_1c1ca4;
        case 0x1c1ca8u: goto label_1c1ca8;
        case 0x1c1cacu: goto label_1c1cac;
        case 0x1c1cb0u: goto label_1c1cb0;
        case 0x1c1cb4u: goto label_1c1cb4;
        case 0x1c1cb8u: goto label_1c1cb8;
        case 0x1c1cbcu: goto label_1c1cbc;
        case 0x1c1cc0u: goto label_1c1cc0;
        case 0x1c1cc4u: goto label_1c1cc4;
        case 0x1c1cc8u: goto label_1c1cc8;
        case 0x1c1cccu: goto label_1c1ccc;
        case 0x1c1cd0u: goto label_1c1cd0;
        case 0x1c1cd4u: goto label_1c1cd4;
        case 0x1c1cd8u: goto label_1c1cd8;
        case 0x1c1cdcu: goto label_1c1cdc;
        case 0x1c1ce0u: goto label_1c1ce0;
        case 0x1c1ce4u: goto label_1c1ce4;
        case 0x1c1ce8u: goto label_1c1ce8;
        case 0x1c1cecu: goto label_1c1cec;
        case 0x1c1cf0u: goto label_1c1cf0;
        case 0x1c1cf4u: goto label_1c1cf4;
        case 0x1c1cf8u: goto label_1c1cf8;
        case 0x1c1cfcu: goto label_1c1cfc;
        case 0x1c1d00u: goto label_1c1d00;
        case 0x1c1d04u: goto label_1c1d04;
        case 0x1c1d08u: goto label_1c1d08;
        case 0x1c1d0cu: goto label_1c1d0c;
        case 0x1c1d10u: goto label_1c1d10;
        case 0x1c1d14u: goto label_1c1d14;
        case 0x1c1d18u: goto label_1c1d18;
        case 0x1c1d1cu: goto label_1c1d1c;
        case 0x1c1d20u: goto label_1c1d20;
        case 0x1c1d24u: goto label_1c1d24;
        case 0x1c1d28u: goto label_1c1d28;
        case 0x1c1d2cu: goto label_1c1d2c;
        case 0x1c1d30u: goto label_1c1d30;
        case 0x1c1d34u: goto label_1c1d34;
        case 0x1c1d38u: goto label_1c1d38;
        case 0x1c1d3cu: goto label_1c1d3c;
        case 0x1c1d40u: goto label_1c1d40;
        case 0x1c1d44u: goto label_1c1d44;
        case 0x1c1d48u: goto label_1c1d48;
        case 0x1c1d4cu: goto label_1c1d4c;
        case 0x1c1d50u: goto label_1c1d50;
        case 0x1c1d54u: goto label_1c1d54;
        case 0x1c1d58u: goto label_1c1d58;
        case 0x1c1d5cu: goto label_1c1d5c;
        case 0x1c1d60u: goto label_1c1d60;
        case 0x1c1d64u: goto label_1c1d64;
        case 0x1c1d68u: goto label_1c1d68;
        case 0x1c1d6cu: goto label_1c1d6c;
        case 0x1c1d70u: goto label_1c1d70;
        case 0x1c1d74u: goto label_1c1d74;
        case 0x1c1d78u: goto label_1c1d78;
        case 0x1c1d7cu: goto label_1c1d7c;
        case 0x1c1d80u: goto label_1c1d80;
        case 0x1c1d84u: goto label_1c1d84;
        case 0x1c1d88u: goto label_1c1d88;
        case 0x1c1d8cu: goto label_1c1d8c;
        case 0x1c1d90u: goto label_1c1d90;
        case 0x1c1d94u: goto label_1c1d94;
        case 0x1c1d98u: goto label_1c1d98;
        case 0x1c1d9cu: goto label_1c1d9c;
        case 0x1c1da0u: goto label_1c1da0;
        case 0x1c1da4u: goto label_1c1da4;
        case 0x1c1da8u: goto label_1c1da8;
        case 0x1c1dacu: goto label_1c1dac;
        case 0x1c1db0u: goto label_1c1db0;
        case 0x1c1db4u: goto label_1c1db4;
        case 0x1c1db8u: goto label_1c1db8;
        case 0x1c1dbcu: goto label_1c1dbc;
        case 0x1c1dc0u: goto label_1c1dc0;
        case 0x1c1dc4u: goto label_1c1dc4;
        case 0x1c1dc8u: goto label_1c1dc8;
        case 0x1c1dccu: goto label_1c1dcc;
        case 0x1c1dd0u: goto label_1c1dd0;
        case 0x1c1dd4u: goto label_1c1dd4;
        case 0x1c1dd8u: goto label_1c1dd8;
        case 0x1c1ddcu: goto label_1c1ddc;
        case 0x1c1de0u: goto label_1c1de0;
        case 0x1c1de4u: goto label_1c1de4;
        case 0x1c1de8u: goto label_1c1de8;
        case 0x1c1decu: goto label_1c1dec;
        case 0x1c1df0u: goto label_1c1df0;
        case 0x1c1df4u: goto label_1c1df4;
        case 0x1c1df8u: goto label_1c1df8;
        case 0x1c1dfcu: goto label_1c1dfc;
        case 0x1c1e00u: goto label_1c1e00;
        case 0x1c1e04u: goto label_1c1e04;
        case 0x1c1e08u: goto label_1c1e08;
        case 0x1c1e0cu: goto label_1c1e0c;
        case 0x1c1e10u: goto label_1c1e10;
        case 0x1c1e14u: goto label_1c1e14;
        case 0x1c1e18u: goto label_1c1e18;
        case 0x1c1e1cu: goto label_1c1e1c;
        case 0x1c1e20u: goto label_1c1e20;
        case 0x1c1e24u: goto label_1c1e24;
        case 0x1c1e28u: goto label_1c1e28;
        case 0x1c1e2cu: goto label_1c1e2c;
        default: break;
    }

    ctx->pc = 0x1c1bf8u;

label_1c1bf8:
    // 0x1c1bf8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1c1bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1c1bfc:
    // 0x1c1bfc: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1c1bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_1c1c00:
    // 0x1c1c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c1c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c04:
    // 0x1c1c04: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x1c1c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_1c1c08:
    // 0x1c1c08: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1c1c08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_1c1c0c:
    // 0x1c1c0c: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1c1c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_1c1c10:
    // 0x1c1c10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1c1c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1c1c14:
    // 0x1c1c14: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x1c1c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_1c1c18:
    // 0x1c1c18: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x1c1c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_1c1c1c:
    // 0x1c1c1c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c1c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1c1c20:
    // 0x1c1c20: 0xc06bbe0  jal         func_1AEF80
label_1c1c24:
    if (ctx->pc == 0x1C1C24u) {
        ctx->pc = 0x1C1C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C20u;
        // 0x1c1c24: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C28u;
        goto label_1c1c28;
    }
    ctx->pc = 0x1C1C20u;
    SET_GPR_U32(ctx, 31, 0x1C1C28u);
    ctx->pc = 0x1C1C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C20u;
    // 0x1c1c24: 0x3c160034  lui         $s6, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1C1C20u, 0x1C1C28u)) {
        return;
    }
    ctx->pc = 0x1C1C28u;
label_1c1c28:
    // 0x1c1c28: 0x260402bc  addiu       $a0, $s0, 0x2BC
    ctx->pc = 0x1c1c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 700));
label_1c1c2c:
    // 0x1c1c2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c30:
    // 0x1c1c30: 0xc0c493d  jal         func_3124F4
label_1c1c34:
    if (ctx->pc == 0x1C1C34u) {
        ctx->pc = 0x1C1C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C30u;
        // 0x1c1c34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C38u;
        goto label_1c1c38;
    }
    ctx->pc = 0x1C1C30u;
    SET_GPR_U32(ctx, 31, 0x1C1C38u);
    ctx->pc = 0x1C1C34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C30u;
    // 0x1c1c34: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1C30u, 0x1C1C38u)) {
        return;
    }
    ctx->pc = 0x1C1C38u;
label_1c1c38:
    // 0x1c1c38: 0x260402c4  addiu       $a0, $s0, 0x2C4
    ctx->pc = 0x1c1c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
label_1c1c3c:
    // 0x1c1c3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c40:
    // 0x1c1c40: 0xc0c493d  jal         func_3124F4
label_1c1c44:
    if (ctx->pc == 0x1C1C44u) {
        ctx->pc = 0x1C1C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C40u;
        // 0x1c1c44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C48u;
        goto label_1c1c48;
    }
    ctx->pc = 0x1C1C40u;
    SET_GPR_U32(ctx, 31, 0x1C1C48u);
    ctx->pc = 0x1C1C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C40u;
    // 0x1c1c44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1C40u, 0x1C1C48u)) {
        return;
    }
    ctx->pc = 0x1C1C48u;
label_1c1c48:
    // 0x1c1c48: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1c1c48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
label_1c1c4c:
    // 0x1c1c4c: 0x2604027c  addiu       $a0, $s0, 0x27C
    ctx->pc = 0x1c1c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 636));
label_1c1c50:
    // 0x1c1c50: 0x8c678b2c  lw          $a3, -0x74D4($v1)
    ctx->pc = 0x1c1c50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937388)));
label_1c1c54:
    // 0x1c1c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c1c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c1c58:
    // 0x1c1c58: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x1c1c58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_1c1c5c:
    // 0x1c1c5c: 0x24e3005c  addiu       $v1, $a3, 0x5C
    ctx->pc = 0x1c1c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 92));
label_1c1c60:
    // 0x1c1c60: 0xae030260  sw          $v1, 0x260($s0)
    ctx->pc = 0x1c1c60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 608), GPR_U32(ctx, 3));
label_1c1c64:
    // 0x1c1c64: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c1c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c1c68:
    // 0x1c1c68: 0xae020264  sw          $v0, 0x264($s0)
    ctx->pc = 0x1c1c68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
label_1c1c6c:
    // 0x1c1c6c: 0x8ce3005c  lw          $v1, 0x5C($a3)
    ctx->pc = 0x1c1c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 92)));
label_1c1c70:
    // 0x1c1c70: 0xae00026c  sw          $zero, 0x26C($s0)
    ctx->pc = 0x1c1c70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 0));
label_1c1c74:
    // 0x1c1c74: 0xc0c493d  jal         func_3124F4
label_1c1c78:
    if (ctx->pc == 0x1C1C78u) {
        ctx->pc = 0x1C1C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C74u;
        // 0x1c1c78: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C7Cu;
        goto label_1c1c7c;
    }
    ctx->pc = 0x1C1C74u;
    SET_GPR_U32(ctx, 31, 0x1C1C7Cu);
    ctx->pc = 0x1C1C78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1C74u;
    // 0x1c1c78: 0xae030270  sw          $v1, 0x270($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3124F4u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3124F4u, 0x1C1C74u, 0x1C1C7Cu)) {
        return;
    }
    ctx->pc = 0x1C1C7Cu;
label_1c1c7c:
    // 0x1c1c7c: 0x8e030270  lw          $v1, 0x270($s0)
    ctx->pc = 0x1c1c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c1c80:
    // 0x1c1c80: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_1c1c84:
    if (ctx->pc == 0x1C1C84u) {
        ctx->pc = 0x1C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C80u;
        // 0x1c1c84: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C88u;
        goto label_1c1c88;
    }
    ctx->pc = 0x1C1C80u;
    {
        const bool branch_taken_0x1c1c80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C80u;
        // 0x1c1c84: 0x24140003  addiu       $s4, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c80) {
            ctx->pc = 0x1C1DA4u;
            goto label_1c1da4;
        }
    }
    ctx->pc = 0x1C1C88u;
label_1c1c88:
    // 0x1c1c88: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c1c88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
label_1c1c8c:
    // 0x1c1c8c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
label_1c1c90:
    if (ctx->pc == 0x1C1C90u) {
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1C94u;
        goto label_1c1c94;
    }
    ctx->pc = 0x1C1C8Cu;
    {
        const bool branch_taken_0x1c1c8c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1C8Cu;
        // 0x1c1c90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1c8c) {
            ctx->pc = 0x1C1CCCu;
            goto label_1c1ccc;
        }
    }
    ctx->pc = 0x1C1C94u;
label_1c1c94:
    // 0x1c1c94: 0x8e020260  lw          $v0, 0x260($s0)
    ctx->pc = 0x1c1c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
label_1c1c98:
    // 0x1c1c98: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c1c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c1c9c:
    // 0x1c1c9c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_1c1ca0:
    if (ctx->pc == 0x1C1CA0u) {
        ctx->pc = 0x1C1CA4u;
        goto label_1c1ca4;
    }
    ctx->pc = 0x1C1C9Cu;
    {
        const bool branch_taken_0x1c1c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1c9c) {
            ctx->pc = 0x1C1CCCu;
            goto label_1c1ccc;
        }
    }
    ctx->pc = 0x1C1CA4u;
label_1c1ca4:
    // 0x1c1ca4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c1ca8:
    if (ctx->pc == 0x1C1CA8u) {
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CACu;
        goto label_1c1cac;
    }
    ctx->pc = 0x1C1CA4u;
    {
        const bool branch_taken_0x1c1ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CA4u;
        // 0x1c1ca8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1ca4) {
            ctx->pc = 0x1C1CC0u;
            goto label_1c1cc0;
        }
    }
    ctx->pc = 0x1C1CACu;
label_1c1cac:
    // 0x1c1cac: 0x0  nop
    ctx->pc = 0x1c1cacu;
    // NOP
label_1c1cb0:
    // 0x1c1cb0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1c1cb0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1c1cb4:
    // 0x1c1cb4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c1cb8:
    if (ctx->pc == 0x1C1CB8u) {
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CB4u;
        // 0x1c1cb8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CBCu;
        goto label_1c1cbc;
    }
    ctx->pc = 0x1C1CB4u;
    {
        const bool branch_taken_0x1c1cb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CB4u;
        // 0x1c1cb8: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cb4) {
            ctx->pc = 0x1C1CCCu;
            goto label_1c1ccc;
        }
    }
    ctx->pc = 0x1C1CBCu;
label_1c1cbc:
    // 0x1c1cbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c1cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c1cc0:
    // 0x1c1cc0: 0x5482fffb  bnel        $a0, $v0, . + 4 + (-0x5 << 2)
label_1c1cc4:
    if (ctx->pc == 0x1C1CC4u) {
        ctx->pc = 0x1C1CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CC0u;
        // 0x1c1cc4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CC8u;
        goto label_1c1cc8;
    }
    ctx->pc = 0x1C1CC0u;
    {
        const bool branch_taken_0x1c1cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1c1cc0) {
            ctx->pc = 0x1C1CC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1CC0u;
            // 0x1c1cc4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1CB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1cb0;
        }
    }
    ctx->pc = 0x1C1CC8u;
label_1c1cc8:
    // 0x1c1cc8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ccc:
    // 0x1c1ccc: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
label_1c1cd0:
    if (ctx->pc == 0x1C1CD0u) {
        ctx->pc = 0x1C1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CCCu;
        // 0x1c1cd0: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CD4u;
        goto label_1c1cd4;
    }
    ctx->pc = 0x1C1CCCu;
    {
        const bool branch_taken_0x1c1ccc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1ccc) {
            ctx->pc = 0x1C1CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1CCCu;
            // 0x1c1cd0: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1CE0u;
            goto label_1c1ce0;
        }
    }
    ctx->pc = 0x1C1CD4u;
label_1c1cd4:
    // 0x1c1cd4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c1cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
label_1c1cd8:
    // 0x1c1cd8: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x1c1cd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c1cdc:
    // 0x1c1cdc: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c1cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c1ce0:
    // 0x1c1ce0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1c1ce0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1ce4:
    // 0x1c1ce4: 0x8e120264  lw          $s2, 0x264($s0)
    ctx->pc = 0x1c1ce4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c1ce8:
    // 0x1c1ce8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c1cec:
    // 0x1c1cec: 0x4400012  bltz        $v0, . + 4 + (0x12 << 2)
label_1c1cf0:
    if (ctx->pc == 0x1C1CF0u) {
        ctx->pc = 0x1C1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CECu;
        // 0x1c1cf0: 0x2695fffd  addiu       $s5, $s4, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1CF4u;
        goto label_1c1cf4;
    }
    ctx->pc = 0x1C1CECu;
    {
        const bool branch_taken_0x1c1cec = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1CECu;
        // 0x1c1cf0: 0x2695fffd  addiu       $s5, $s4, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1cec) {
            ctx->pc = 0x1C1D38u;
            goto label_1c1d38;
        }
    }
    ctx->pc = 0x1C1CF4u;
label_1c1cf4:
    // 0x1c1cf4: 0x26110288  addiu       $s1, $s0, 0x288
    ctx->pc = 0x1c1cf4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 648));
label_1c1cf8:
    // 0x1c1cf8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1c1cf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1c1cfc:
    // 0x1c1cfc: 0x0  nop
    ctx->pc = 0x1c1cfcu;
    // NOP
label_1c1d00:
    // 0x1c1d00: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_1c1d04:
    if (ctx->pc == 0x1C1D04u) {
        ctx->pc = 0x1C1D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D00u;
        // 0x1c1d04: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D08u;
        goto label_1c1d08;
    }
    ctx->pc = 0x1C1D00u;
    {
        const bool branch_taken_0x1c1d00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d00) {
            ctx->pc = 0x1C1D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D00u;
            // 0x1c1d04: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D18u;
            goto label_1c1d18;
        }
    }
    ctx->pc = 0x1C1D08u;
label_1c1d08:
    // 0x1c1d08: 0xc0709f2  jal         func_1C27C8
label_1c1d0c:
    if (ctx->pc == 0x1C1D0Cu) {
        ctx->pc = 0x1C1D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D08u;
        // 0x1c1d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D10u;
        goto label_1c1d10;
    }
    ctx->pc = 0x1C1D08u;
    SET_GPR_U32(ctx, 31, 0x1C1D10u);
    ctx->pc = 0x1C1D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D08u;
    // 0x1c1d0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C27C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C27C8u, 0x1C1D08u, 0x1C1D10u)) {
        return;
    }
    ctx->pc = 0x1C1D10u;
label_1c1d10:
    // 0x1c1d10: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1c1d10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1c1d14:
    // 0x1c1d14: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c1d18:
    // 0x1c1d18: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1c1d18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1c1d1c:
    // 0x1c1d1c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c1d1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1c1d20:
    // 0x1c1d20: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x1c1d20u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1c1d24:
    // 0x1c1d24: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1c1d28:
    if (ctx->pc == 0x1C1D28u) {
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D24u;
        // 0x1c1d28: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D2Cu;
        goto label_1c1d2c;
    }
    ctx->pc = 0x1C1D24u;
    {
        const bool branch_taken_0x1c1d24 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x1C1D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D24u;
        // 0x1c1d28: 0x8e520004  lw          $s2, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d24) {
            ctx->pc = 0x1C1D38u;
            goto label_1c1d38;
        }
    }
    ctx->pc = 0x1C1D2Cu;
label_1c1d2c:
    // 0x1c1d2c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1c1d2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c1d30:
    // 0x1c1d30: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
label_1c1d34:
    if (ctx->pc == 0x1C1D34u) {
        ctx->pc = 0x1C1D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D30u;
        // 0x1c1d34: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D38u;
        goto label_1c1d38;
    }
    ctx->pc = 0x1C1D30u;
    {
        const bool branch_taken_0x1c1d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c1d30) {
            ctx->pc = 0x1C1D34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D30u;
            // 0x1c1d34: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1d00;
        }
    }
    ctx->pc = 0x1C1D38u;
label_1c1d38:
    // 0x1c1d38: 0x5aa0001b  blezl       $s5, . + 4 + (0x1B << 2)
label_1c1d3c:
    if (ctx->pc == 0x1C1D3Cu) {
        ctx->pc = 0x1C1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D38u;
        // 0x1c1d3c: 0x8ec497e8  lw          $a0, -0x6818($s6) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940648)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D40u;
        goto label_1c1d40;
    }
    ctx->pc = 0x1C1D38u;
    {
        const bool branch_taken_0x1c1d38 = (GPR_S64(ctx, 21) <= 0);
        if (branch_taken_0x1c1d38) {
            ctx->pc = 0x1C1D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D38u;
            // 0x1c1d3c: 0x8ec497e8  lw          $a0, -0x6818($s6) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940648)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1DA8u;
            goto label_1c1da8;
        }
    }
    ctx->pc = 0x1C1D40u;
label_1c1d40:
    // 0x1c1d40: 0x8e020270  lw          $v0, 0x270($s0)
    ctx->pc = 0x1c1d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
label_1c1d44:
    // 0x1c1d44: 0x0  nop
    ctx->pc = 0x1c1d44u;
    // NOP
label_1c1d48:
    // 0x1c1d48: 0x8e03026c  lw          $v1, 0x26C($s0)
    ctx->pc = 0x1c1d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 620)));
label_1c1d4c:
    // 0x1c1d4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c1d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c1d50:
    // 0x1c1d50: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1c1d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1c1d54:
    // 0x1c1d54: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1c1d58:
    if (ctx->pc == 0x1C1D58u) {
        ctx->pc = 0x1C1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D54u;
        // 0x1c1d58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D5Cu;
        goto label_1c1d5c;
    }
    ctx->pc = 0x1C1D54u;
    {
        const bool branch_taken_0x1c1d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C1D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D54u;
        // 0x1c1d58: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c1d54) {
            ctx->pc = 0x1C1D98u;
            goto label_1c1d98;
        }
    }
    ctx->pc = 0x1C1D5Cu;
label_1c1d5c:
    // 0x1c1d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c1d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c1d60:
    // 0x1c1d60: 0x8e030264  lw          $v1, 0x264($s0)
    ctx->pc = 0x1c1d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
label_1c1d64:
    // 0x1c1d64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1d68:
    // 0x1c1d68: 0xae02026c  sw          $v0, 0x26C($s0)
    ctx->pc = 0x1c1d68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 620), GPR_U32(ctx, 2));
label_1c1d6c:
    // 0x1c1d6c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x1c1d6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_1c1d70:
    // 0x1c1d70: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1c1d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1c1d74:
    // 0x1c1d74: 0xc070924  jal         func_1C2490
label_1c1d78:
    if (ctx->pc == 0x1C1D78u) {
        ctx->pc = 0x1C1D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D74u;
        // 0x1c1d78: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D7Cu;
        goto label_1c1d7c;
    }
    ctx->pc = 0x1C1D74u;
    SET_GPR_U32(ctx, 31, 0x1C1D7Cu);
    ctx->pc = 0x1C1D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1D74u;
    // 0x1c1d78: 0xae020264  sw          $v0, 0x264($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1C2490u, 0x1C1D74u, 0x1C1D7Cu)) {
        return;
    }
    ctx->pc = 0x1C1D7Cu;
label_1c1d7c:
    // 0x1c1d7c: 0x8e0602b8  lw          $a2, 0x2B8($s0)
    ctx->pc = 0x1c1d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 696)));
label_1c1d80:
    // 0x1c1d80: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c1d80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c1d84:
    // 0x1c1d84: 0x8cc20258  lw          $v0, 0x258($a2)
    ctx->pc = 0x1c1d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 600)));
label_1c1d88:
    // 0x1c1d88: 0x844400f8  lh          $a0, 0xF8($v0)
    ctx->pc = 0x1c1d88u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 248)));
label_1c1d8c:
    // 0x1c1d8c: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1c1d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
label_1c1d90:
    // 0x1c1d90: 0x60f809  jalr        $v1
label_1c1d94:
    if (ctx->pc == 0x1C1D94u) {
        ctx->pc = 0x1C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D90u;
        // 0x1c1d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1D98u;
        goto label_1c1d98;
    }
    ctx->pc = 0x1C1D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1C1D98u);
        ctx->pc = 0x1C1D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D90u;
        // 0x1c1d94: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1D90u, 0x1C1D98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C1D98u;
label_1c1d98:
    // 0x1c1d98: 0x2682fffd  addiu       $v0, $s4, -0x3
    ctx->pc = 0x1c1d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967293));
label_1c1d9c:
    // 0x1c1d9c: 0x5c40ffea  bgtzl       $v0, . + 4 + (-0x16 << 2)
label_1c1da0:
    if (ctx->pc == 0x1C1DA0u) {
        ctx->pc = 0x1C1DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1D9Cu;
        // 0x1c1da0: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DA4u;
        goto label_1c1da4;
    }
    ctx->pc = 0x1C1D9Cu;
    {
        const bool branch_taken_0x1c1d9c = (GPR_S64(ctx, 2) > 0);
        if (branch_taken_0x1c1d9c) {
            ctx->pc = 0x1C1DA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C1D9Cu;
            // 0x1c1da0: 0x8e020270  lw          $v0, 0x270($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 624)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c1d48;
        }
    }
    ctx->pc = 0x1C1DA4u;
label_1c1da4:
    // 0x1c1da4: 0x8ec497e8  lw          $a0, -0x6818($s6)
    ctx->pc = 0x1c1da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294940648)));
label_1c1da8:
    // 0x1c1da8: 0xc07cd92  jal         func_1F3648
label_1c1dac:
    if (ctx->pc == 0x1C1DACu) {
        ctx->pc = 0x1C1DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DA8u;
        // 0x1c1dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DB0u;
        goto label_1c1db0;
    }
    ctx->pc = 0x1C1DA8u;
    SET_GPR_U32(ctx, 31, 0x1C1DB0u);
    ctx->pc = 0x1C1DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DA8u;
    // 0x1c1dac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F3648u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F3648u, 0x1C1DA8u, 0x1C1DB0u)) {
        return;
    }
    ctx->pc = 0x1C1DB0u;
label_1c1db0:
    // 0x1c1db0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c1db0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c1db4:
    // 0x1c1db4: 0x8e05029c  lw          $a1, 0x29C($s0)
    ctx->pc = 0x1c1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 668)));
label_1c1db8:
    // 0x1c1db8: 0xc06c97c  jal         func_1B25F0
label_1c1dbc:
    if (ctx->pc == 0x1C1DBCu) {
        ctx->pc = 0x1C1DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DB8u;
        // 0x1c1dbc: 0xae020298  sw          $v0, 0x298($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DC0u;
        goto label_1c1dc0;
    }
    ctx->pc = 0x1C1DB8u;
    SET_GPR_U32(ctx, 31, 0x1C1DC0u);
    ctx->pc = 0x1C1DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DB8u;
    // 0x1c1dbc: 0xae020298  sw          $v0, 0x298($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 664), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C1DB8u, 0x1C1DC0u)) {
        return;
    }
    ctx->pc = 0x1C1DC0u;
label_1c1dc0:
    // 0x1c1dc0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c1dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c1dc4:
    // 0x1c1dc4: 0x8e0502a0  lw          $a1, 0x2A0($s0)
    ctx->pc = 0x1c1dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 672)));
label_1c1dc8:
    // 0x1c1dc8: 0xc06c97c  jal         func_1B25F0
label_1c1dcc:
    if (ctx->pc == 0x1C1DCCu) {
        ctx->pc = 0x1C1DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DC8u;
        // 0x1c1dcc: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DD0u;
        goto label_1c1dd0;
    }
    ctx->pc = 0x1C1DC8u;
    SET_GPR_U32(ctx, 31, 0x1C1DD0u);
    ctx->pc = 0x1C1DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DC8u;
    // 0x1c1dcc: 0xae0202a4  sw          $v0, 0x2A4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C1DC8u, 0x1C1DD0u)) {
        return;
    }
    ctx->pc = 0x1C1DD0u;
label_1c1dd0:
    // 0x1c1dd0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c1dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c1dd4:
    // 0x1c1dd4: 0x8e0502ac  lw          $a1, 0x2AC($s0)
    ctx->pc = 0x1c1dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 684)));
label_1c1dd8:
    // 0x1c1dd8: 0xc06c97c  jal         func_1B25F0
label_1c1ddc:
    if (ctx->pc == 0x1C1DDCu) {
        ctx->pc = 0x1C1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DD8u;
        // 0x1c1ddc: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DE0u;
        goto label_1c1de0;
    }
    ctx->pc = 0x1C1DD8u;
    SET_GPR_U32(ctx, 31, 0x1C1DE0u);
    ctx->pc = 0x1C1DDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DD8u;
    // 0x1c1ddc: 0xae0202a8  sw          $v0, 0x2A8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 680), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C1DD8u, 0x1C1DE0u)) {
        return;
    }
    ctx->pc = 0x1C1DE0u;
label_1c1de0:
    // 0x1c1de0: 0x8e040044  lw          $a0, 0x44($s0)
    ctx->pc = 0x1c1de0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1c1de4:
    // 0x1c1de4: 0x8e0502b0  lw          $a1, 0x2B0($s0)
    ctx->pc = 0x1c1de4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 688)));
label_1c1de8:
    // 0x1c1de8: 0xc06c97c  jal         func_1B25F0
label_1c1dec:
    if (ctx->pc == 0x1C1DECu) {
        ctx->pc = 0x1C1DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1DE8u;
        // 0x1c1dec: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1DF0u;
        goto label_1c1df0;
    }
    ctx->pc = 0x1C1DE8u;
    SET_GPR_U32(ctx, 31, 0x1C1DF0u);
    ctx->pc = 0x1C1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C1DE8u;
    // 0x1c1dec: 0xae0202b4  sw          $v0, 0x2B4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B25F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B25F0u, 0x1C1DE8u, 0x1C1DF0u)) {
        return;
    }
    ctx->pc = 0x1C1DF0u;
label_1c1df0:
    // 0x1c1df0: 0xae0202b8  sw          $v0, 0x2B8($s0)
    ctx->pc = 0x1c1df0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 696), GPR_U32(ctx, 2));
label_1c1df4:
    // 0x1c1df4: 0x8e0302b4  lw          $v1, 0x2B4($s0)
    ctx->pc = 0x1c1df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
label_1c1df8:
    // 0x1c1df8: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1c1df8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1c1dfc:
    // 0x1c1dfc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x1c1dfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c1e00:
    // 0x1c1e00: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1c1e00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1c1e04:
    // 0x1c1e04: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x1c1e04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
label_1c1e08:
    // 0x1c1e08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1c1e08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1c1e0c:
    // 0x1c1e0c: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x1c1e0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c1e10:
    // 0x1c1e10: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x1c1e10u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1c1e14:
    // 0x1c1e14: 0xe60102dc  swc1        $f1, 0x2DC($s0)
    ctx->pc = 0x1c1e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
label_1c1e18:
    // 0x1c1e18: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1c1e18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1c1e1c:
    // 0x1c1e1c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x1c1e1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1c1e20:
    // 0x1c1e20: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x1c1e20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1c1e24:
    // 0x1c1e24: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c1e24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c1e28:
    // 0x1c1e28: 0x3e00008  jr          $ra
label_1c1e2c:
    if (ctx->pc == 0x1C1E2Cu) {
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E28u;
        // 0x1c1e2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C1E30u;
        goto label_fallthrough_0x1c1e28;
    }
    ctx->pc = 0x1C1E28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C1E28u;
        // 0x1c1e2c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C1E28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1c1e28:
    ctx->pc = 0x1C1E30u;
}
