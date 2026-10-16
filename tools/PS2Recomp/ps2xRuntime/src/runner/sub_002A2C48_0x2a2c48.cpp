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

// Function: sub_002A2C48
// Address: 0x2a2c48 - 0x2a2db0
void sub_002A2C48_0x2a2c48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A2C48_0x2a2c48");
#endif

    switch (ctx->pc) {
        case 0x2a2c48u: goto label_2a2c48;
        case 0x2a2c4cu: goto label_2a2c4c;
        case 0x2a2c50u: goto label_2a2c50;
        case 0x2a2c54u: goto label_2a2c54;
        case 0x2a2c58u: goto label_2a2c58;
        case 0x2a2c5cu: goto label_2a2c5c;
        case 0x2a2c60u: goto label_2a2c60;
        case 0x2a2c64u: goto label_2a2c64;
        case 0x2a2c68u: goto label_2a2c68;
        case 0x2a2c6cu: goto label_2a2c6c;
        case 0x2a2c70u: goto label_2a2c70;
        case 0x2a2c74u: goto label_2a2c74;
        case 0x2a2c78u: goto label_2a2c78;
        case 0x2a2c7cu: goto label_2a2c7c;
        case 0x2a2c80u: goto label_2a2c80;
        case 0x2a2c84u: goto label_2a2c84;
        case 0x2a2c88u: goto label_2a2c88;
        case 0x2a2c8cu: goto label_2a2c8c;
        case 0x2a2c90u: goto label_2a2c90;
        case 0x2a2c94u: goto label_2a2c94;
        case 0x2a2c98u: goto label_2a2c98;
        case 0x2a2c9cu: goto label_2a2c9c;
        case 0x2a2ca0u: goto label_2a2ca0;
        case 0x2a2ca4u: goto label_2a2ca4;
        case 0x2a2ca8u: goto label_2a2ca8;
        case 0x2a2cacu: goto label_2a2cac;
        case 0x2a2cb0u: goto label_2a2cb0;
        case 0x2a2cb4u: goto label_2a2cb4;
        case 0x2a2cb8u: goto label_2a2cb8;
        case 0x2a2cbcu: goto label_2a2cbc;
        case 0x2a2cc0u: goto label_2a2cc0;
        case 0x2a2cc4u: goto label_2a2cc4;
        case 0x2a2cc8u: goto label_2a2cc8;
        case 0x2a2cccu: goto label_2a2ccc;
        case 0x2a2cd0u: goto label_2a2cd0;
        case 0x2a2cd4u: goto label_2a2cd4;
        case 0x2a2cd8u: goto label_2a2cd8;
        case 0x2a2cdcu: goto label_2a2cdc;
        case 0x2a2ce0u: goto label_2a2ce0;
        case 0x2a2ce4u: goto label_2a2ce4;
        case 0x2a2ce8u: goto label_2a2ce8;
        case 0x2a2cecu: goto label_2a2cec;
        case 0x2a2cf0u: goto label_2a2cf0;
        case 0x2a2cf4u: goto label_2a2cf4;
        case 0x2a2cf8u: goto label_2a2cf8;
        case 0x2a2cfcu: goto label_2a2cfc;
        case 0x2a2d00u: goto label_2a2d00;
        case 0x2a2d04u: goto label_2a2d04;
        case 0x2a2d08u: goto label_2a2d08;
        case 0x2a2d0cu: goto label_2a2d0c;
        case 0x2a2d10u: goto label_2a2d10;
        case 0x2a2d14u: goto label_2a2d14;
        case 0x2a2d18u: goto label_2a2d18;
        case 0x2a2d1cu: goto label_2a2d1c;
        case 0x2a2d20u: goto label_2a2d20;
        case 0x2a2d24u: goto label_2a2d24;
        case 0x2a2d28u: goto label_2a2d28;
        case 0x2a2d2cu: goto label_2a2d2c;
        case 0x2a2d30u: goto label_2a2d30;
        case 0x2a2d34u: goto label_2a2d34;
        case 0x2a2d38u: goto label_2a2d38;
        case 0x2a2d3cu: goto label_2a2d3c;
        case 0x2a2d40u: goto label_2a2d40;
        case 0x2a2d44u: goto label_2a2d44;
        case 0x2a2d48u: goto label_2a2d48;
        case 0x2a2d4cu: goto label_2a2d4c;
        case 0x2a2d50u: goto label_2a2d50;
        case 0x2a2d54u: goto label_2a2d54;
        case 0x2a2d58u: goto label_2a2d58;
        case 0x2a2d5cu: goto label_2a2d5c;
        case 0x2a2d60u: goto label_2a2d60;
        case 0x2a2d64u: goto label_2a2d64;
        case 0x2a2d68u: goto label_2a2d68;
        case 0x2a2d6cu: goto label_2a2d6c;
        case 0x2a2d70u: goto label_2a2d70;
        case 0x2a2d74u: goto label_2a2d74;
        case 0x2a2d78u: goto label_2a2d78;
        case 0x2a2d7cu: goto label_2a2d7c;
        case 0x2a2d80u: goto label_2a2d80;
        case 0x2a2d84u: goto label_2a2d84;
        case 0x2a2d88u: goto label_2a2d88;
        case 0x2a2d8cu: goto label_2a2d8c;
        case 0x2a2d90u: goto label_2a2d90;
        case 0x2a2d94u: goto label_2a2d94;
        case 0x2a2d98u: goto label_2a2d98;
        case 0x2a2d9cu: goto label_2a2d9c;
        case 0x2a2da0u: goto label_2a2da0;
        case 0x2a2da4u: goto label_2a2da4;
        case 0x2a2da8u: goto label_2a2da8;
        case 0x2a2dacu: goto label_2a2dac;
        default: break;
    }

    ctx->pc = 0x2a2c48u;

label_2a2c48:
    // 0x2a2c48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a2c48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a2c4c:
    // 0x2a2c4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a2c4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c50:
    // 0x2a2c50: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a2c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2a2c54:
    // 0x2a2c54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a2c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a2c58:
    // 0x2a2c58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a2c58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a2c5c:
    // 0x2a2c5c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a2c5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a2c60:
    // 0x2a2c60: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x2a2c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_2a2c64:
    // 0x2a2c64: 0x441001e  bgez        $v0, . + 4 + (0x1E << 2)
label_2a2c68:
    if (ctx->pc == 0x2A2C68u) {
        ctx->pc = 0x2A2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C64u;
        // 0x2a2c68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C6Cu;
        goto label_2a2c6c;
    }
    ctx->pc = 0x2A2C64u;
    {
        const bool branch_taken_0x2a2c64 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x2A2C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C64u;
        // 0x2a2c68: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c64) {
            ctx->pc = 0x2A2CE0u;
            goto label_2a2ce0;
        }
    }
    ctx->pc = 0x2A2C6Cu;
label_2a2c6c:
    // 0x2a2c6c: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2a2c6cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2c70:
    // 0x2a2c70: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x2a2c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_2a2c74:
    // 0x2a2c74: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2a2c78:
    if (ctx->pc == 0x2A2C78u) {
        ctx->pc = 0x2A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C74u;
        // 0x2a2c78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C7Cu;
        goto label_2a2c7c;
    }
    ctx->pc = 0x2A2C74u;
    {
        const bool branch_taken_0x2a2c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C74u;
        // 0x2a2c78: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c74) {
            ctx->pc = 0x2A2CACu;
            goto label_2a2cac;
        }
    }
    ctx->pc = 0x2A2C7Cu;
label_2a2c7c:
    // 0x2a2c7c: 0x28620073  slti        $v0, $v1, 0x73
    ctx->pc = 0x2a2c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)115) ? 1 : 0);
label_2a2c80:
    // 0x2a2c80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a2c84:
    if (ctx->pc == 0x2A2C84u) {
        ctx->pc = 0x2A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C80u;
        // 0x2a2c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C88u;
        goto label_2a2c88;
    }
    ctx->pc = 0x2A2C80u;
    {
        const bool branch_taken_0x2a2c80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C80u;
        // 0x2a2c84: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c80) {
            ctx->pc = 0x2A2C98u;
            goto label_2a2c98;
        }
    }
    ctx->pc = 0x2A2C88u;
label_2a2c88:
    // 0x2a2c88: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2a2c8c:
    if (ctx->pc == 0x2A2C8Cu) {
        ctx->pc = 0x2A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C88u;
        // 0x2a2c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2C90u;
        goto label_2a2c90;
    }
    ctx->pc = 0x2A2C88u;
    {
        const bool branch_taken_0x2a2c88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C88u;
        // 0x2a2c8c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c88) {
            ctx->pc = 0x2A2CC4u;
            goto label_2a2cc4;
        }
    }
    ctx->pc = 0x2A2C90u;
label_2a2c90:
    // 0x2a2c90: 0x1000000f  b           . + 4 + (0xF << 2)
label_2a2c94:
    if (ctx->pc == 0x2A2C94u) {
        ctx->pc = 0x2A2C98u;
        goto label_2a2c98;
    }
    ctx->pc = 0x2A2C90u;
    {
        const bool branch_taken_0x2a2c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2c90) {
            ctx->pc = 0x2A2CD0u;
            goto label_2a2cd0;
        }
    }
    ctx->pc = 0x2A2C98u;
label_2a2c98:
    // 0x2a2c98: 0x24020077  addiu       $v0, $zero, 0x77
    ctx->pc = 0x2a2c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
label_2a2c9c:
    // 0x2a2c9c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2a2ca0:
    if (ctx->pc == 0x2A2CA0u) {
        ctx->pc = 0x2A2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C9Cu;
        // 0x2a2ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CA4u;
        goto label_2a2ca4;
    }
    ctx->pc = 0x2A2C9Cu;
    {
        const bool branch_taken_0x2a2c9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A2CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2C9Cu;
        // 0x2a2ca0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2c9c) {
            ctx->pc = 0x2A2CB8u;
            goto label_2a2cb8;
        }
    }
    ctx->pc = 0x2A2CA4u;
label_2a2ca4:
    // 0x2a2ca4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a2ca8:
    if (ctx->pc == 0x2A2CA8u) {
        ctx->pc = 0x2A2CACu;
        goto label_2a2cac;
    }
    ctx->pc = 0x2A2CA4u;
    {
        const bool branch_taken_0x2a2ca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2ca4) {
            ctx->pc = 0x2A2CD0u;
            goto label_2a2cd0;
        }
    }
    ctx->pc = 0x2A2CACu;
label_2a2cac:
    // 0x2a2cac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2cb0:
    // 0x2a2cb0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2a2cb4:
    if (ctx->pc == 0x2A2CB4u) {
        ctx->pc = 0x2A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CB0u;
        // 0x2a2cb4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CB8u;
        goto label_2a2cb8;
    }
    ctx->pc = 0x2A2CB0u;
    {
        const bool branch_taken_0x2a2cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CB0u;
        // 0x2a2cb4: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cb0) {
            ctx->pc = 0x2A2CE8u;
            goto label_2a2ce8;
        }
    }
    ctx->pc = 0x2A2CB8u;
label_2a2cb8:
    // 0x2a2cb8: 0x24080600  addiu       $t0, $zero, 0x600
    ctx->pc = 0x2a2cb8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
label_2a2cbc:
    // 0x2a2cbc: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a2cc0:
    if (ctx->pc == 0x2A2CC0u) {
        ctx->pc = 0x2A2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CBCu;
        // 0x2a2cc0: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CC4u;
        goto label_2a2cc4;
    }
    ctx->pc = 0x2A2CBCu;
    {
        const bool branch_taken_0x2a2cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CBCu;
        // 0x2a2cc0: 0x24110004  addiu       $s1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cbc) {
            ctx->pc = 0x2A2CE8u;
            goto label_2a2ce8;
        }
    }
    ctx->pc = 0x2A2CC4u;
label_2a2cc4:
    // 0x2a2cc4: 0x24080208  addiu       $t0, $zero, 0x208
    ctx->pc = 0x2a2cc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
label_2a2cc8:
    // 0x2a2cc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a2ccc:
    if (ctx->pc == 0x2A2CCCu) {
        ctx->pc = 0x2A2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CC8u;
        // 0x2a2ccc: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CD0u;
        goto label_2a2cd0;
    }
    ctx->pc = 0x2A2CC8u;
    {
        const bool branch_taken_0x2a2cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CC8u;
        // 0x2a2ccc: 0x24111004  addiu       $s1, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cc8) {
            ctx->pc = 0x2A2CE8u;
            goto label_2a2ce8;
        }
    }
    ctx->pc = 0x2A2CD0u;
label_2a2cd0:
    // 0x2a2cd0: 0xc0c489a  jal         func_312268
label_2a2cd4:
    if (ctx->pc == 0x2A2CD4u) {
        ctx->pc = 0x2A2CD8u;
        goto label_2a2cd8;
    }
    ctx->pc = 0x2A2CD0u;
    SET_GPR_U32(ctx, 31, 0x2A2CD8u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A2CD0u, 0x2A2CD8u)) {
        return;
    }
    ctx->pc = 0x2A2CD8u;
label_2a2cd8:
    // 0x2a2cd8: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2a2cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_2a2cdc:
    // 0x2a2cdc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a2cdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a2ce0:
    // 0x2a2ce0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2a2ce4:
    if (ctx->pc == 0x2A2CE4u) {
        ctx->pc = 0x2A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CE0u;
        // 0x2a2ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CE8u;
        goto label_2a2ce8;
    }
    ctx->pc = 0x2A2CE0u;
    {
        const bool branch_taken_0x2a2ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CE0u;
        // 0x2a2ce4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2ce0) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2CE8u;
label_2a2ce8:
    // 0x2a2ce8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x2a2ce8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2a2cec:
    // 0x2a2cec: 0x2407002b  addiu       $a3, $zero, 0x2B
    ctx->pc = 0x2a2cecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2a2cf0:
    // 0x2a2cf0: 0x50670008  beql        $v1, $a3, . + 4 + (0x8 << 2)
label_2a2cf4:
    if (ctx->pc == 0x2A2CF4u) {
        ctx->pc = 0x2A2CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CF0u;
        // 0x2a2cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2CF8u;
        goto label_2a2cf8;
    }
    ctx->pc = 0x2A2CF0u;
    {
        const bool branch_taken_0x2a2cf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 7));
        if (branch_taken_0x2a2cf0) {
            ctx->pc = 0x2A2CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A2CF0u;
            // 0x2a2cf4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A2D14u;
            goto label_2a2d14;
        }
    }
    ctx->pc = 0x2A2CF8u;
label_2a2cf8:
    // 0x2a2cf8: 0x24020062  addiu       $v0, $zero, 0x62
    ctx->pc = 0x2a2cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
label_2a2cfc:
    // 0x2a2cfc: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2a2d00:
    if (ctx->pc == 0x2A2D00u) {
        ctx->pc = 0x2A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CFCu;
        // 0x2a2d00: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D04u;
        goto label_2a2d04;
    }
    ctx->pc = 0x2A2CFCu;
    {
        const bool branch_taken_0x2a2cfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2CFCu;
        // 0x2a2d00: 0xa82825  or          $a1, $a1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2cfc) {
            ctx->pc = 0x2A2D1Cu;
            goto label_2a2d1c;
        }
    }
    ctx->pc = 0x2A2D04u;
label_2a2d04:
    // 0x2a2d04: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x2a2d04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_2a2d08:
    // 0x2a2d08: 0x14470004  bne         $v0, $a3, . + 4 + (0x4 << 2)
label_2a2d0c:
    if (ctx->pc == 0x2A2D0Cu) {
        ctx->pc = 0x2A2D10u;
        goto label_2a2d10;
    }
    ctx->pc = 0x2A2D08u;
    {
        const bool branch_taken_0x2a2d08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x2a2d08) {
            ctx->pc = 0x2A2D1Cu;
            goto label_2a2d1c;
        }
    }
    ctx->pc = 0x2A2D10u;
label_2a2d10:
    // 0x2a2d10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2a2d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2d14:
    // 0x2a2d14: 0x32311000  andi        $s1, $s1, 0x1000
    ctx->pc = 0x2a2d14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_2a2d18:
    // 0x2a2d18: 0xa82825  or          $a1, $a1, $t0
    ctx->pc = 0x2a2d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 8));
label_2a2d1c:
    // 0x2a2d1c: 0xc0c8678  jal         func_3219E0
label_2a2d20:
    if (ctx->pc == 0x2A2D20u) {
        ctx->pc = 0x2A2D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D1Cu;
        // 0x2a2d20: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D24u;
        goto label_2a2d24;
    }
    ctx->pc = 0x2A2D1Cu;
    SET_GPR_U32(ctx, 31, 0x2A2D24u);
    ctx->pc = 0x2A2D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D1Cu;
    // 0x2a2d20: 0x240601b6  addiu       $a2, $zero, 0x1B6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 438));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3219E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3219E0u, 0x2A2D1Cu, 0x2A2D24u)) {
        return;
    }
    ctx->pc = 0x2A2D24u;
label_2a2d24:
    // 0x2a2d24: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a2d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d28:
    // 0x2a2d28: 0x480001c  bltz        $a0, . + 4 + (0x1C << 2)
label_2a2d2c:
    if (ctx->pc == 0x2A2D2Cu) {
        ctx->pc = 0x2A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D28u;
        // 0x2a2d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D30u;
        goto label_2a2d30;
    }
    ctx->pc = 0x2A2D28u;
    {
        const bool branch_taken_0x2a2d28 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x2A2D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D28u;
        // 0x2a2d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d28) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2D30u;
label_2a2d30:
    // 0x2a2d30: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a2d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2a2d34:
    // 0x2a2d34: 0x2403eff3  addiu       $v1, $zero, -0x100D
    ctx->pc = 0x2a2d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963187));
label_2a2d38:
    // 0x2a2d38: 0xae040038  sw          $a0, 0x38($s0)
    ctx->pc = 0x2a2d38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 4));
label_2a2d3c:
    // 0x2a2d3c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2a2d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2a2d40:
    // 0x2a2d40: 0x32241000  andi        $a0, $s1, 0x1000
    ctx->pc = 0x2a2d40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4096);
label_2a2d44:
    // 0x2a2d44: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x2a2d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
label_2a2d48:
    // 0x2a2d48: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_2a2d4c:
    if (ctx->pc == 0x2A2D4Cu) {
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D50u;
        goto label_2a2d50;
    }
    ctx->pc = 0x2A2D48u;
    {
        const bool branch_taken_0x2a2d48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D48u;
        // 0x2a2d4c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d48) {
            ctx->pc = 0x2A2D90u;
            goto label_2a2d90;
        }
    }
    ctx->pc = 0x2A2D50u;
label_2a2d50:
    // 0x2a2d50: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x2a2d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_2a2d54:
    // 0x2a2d54: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a2d54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d58:
    // 0x2a2d58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2a2d58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d5c:
    // 0x2a2d5c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2a2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2a2d60:
    // 0x2a2d60: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2a2d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2a2d64:
    // 0x2a2d64: 0x40f809  jalr        $v0
label_2a2d68:
    if (ctx->pc == 0x2A2D68u) {
        ctx->pc = 0x2A2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D64u;
        // 0x2a2d68: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D6Cu;
        goto label_2a2d6c;
    }
    ctx->pc = 0x2A2D64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2A2D6Cu);
        ctx->pc = 0x2A2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D64u;
        // 0x2a2d68: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2D64u, 0x2A2D6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A2D6Cu;
label_2a2d6c:
    // 0x2a2d6c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2a2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2a2d70:
    // 0x2a2d70: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
label_2a2d74:
    if (ctx->pc == 0x2A2D74u) {
        ctx->pc = 0x2A2D78u;
        goto label_2a2d78;
    }
    ctx->pc = 0x2A2D70u;
    {
        const bool branch_taken_0x2a2d70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a2d70) {
            ctx->pc = 0x2A2D90u;
            goto label_2a2d90;
        }
    }
    ctx->pc = 0x2A2D78u;
label_2a2d78:
    // 0x2a2d78: 0xc0c489a  jal         func_312268
label_2a2d7c:
    if (ctx->pc == 0x2A2D7Cu) {
        ctx->pc = 0x2A2D80u;
        goto label_2a2d80;
    }
    ctx->pc = 0x2A2D78u;
    SET_GPR_U32(ctx, 31, 0x2A2D80u);
    ctx->pc = 0x312268u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312268u, 0x2A2D78u, 0x2A2D80u)) {
        return;
    }
    ctx->pc = 0x2A2D80u;
label_2a2d80:
    // 0x2a2d80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a2d80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a2d84:
    // 0x2a2d84: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x2a2d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2a2d88:
    // 0x2a2d88: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2a2d8c:
    if (ctx->pc == 0x2A2D8Cu) {
        ctx->pc = 0x2A2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D88u;
        // 0x2a2d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D90u;
        goto label_2a2d90;
    }
    ctx->pc = 0x2A2D88u;
    {
        const bool branch_taken_0x2a2d88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A2D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D88u;
        // 0x2a2d8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2d88) {
            ctx->pc = 0x2A2D9Cu;
            goto label_2a2d9c;
        }
    }
    ctx->pc = 0x2A2D90u;
label_2a2d90:
    // 0x2a2d90: 0xc0a7188  jal         func_29C620
label_2a2d94:
    if (ctx->pc == 0x2A2D94u) {
        ctx->pc = 0x2A2D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2D90u;
        // 0x2a2d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2D98u;
        goto label_2a2d98;
    }
    ctx->pc = 0x2A2D90u;
    SET_GPR_U32(ctx, 31, 0x2A2D98u);
    ctx->pc = 0x2A2D94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A2D90u;
    // 0x2a2d94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C620u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x29C620u, 0x2A2D90u, 0x2A2D98u)) {
        return;
    }
    ctx->pc = 0x2A2D98u;
label_2a2d98:
    // 0x2a2d98: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a2d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a2d9c:
    // 0x2a2d9c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a2d9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a2da0:
    // 0x2a2da0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a2da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a2da4:
    // 0x2a2da4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a2da4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a2da8:
    // 0x2a2da8: 0x3e00008  jr          $ra
label_2a2dac:
    if (ctx->pc == 0x2A2DACu) {
        ctx->pc = 0x2A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DA8u;
        // 0x2a2dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A2DB0u;
        goto label_fallthrough_0x2a2da8;
    }
    ctx->pc = 0x2A2DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A2DA8u;
        // 0x2a2dac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A2DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2a2da8:
    ctx->pc = 0x2A2DB0u;
}
