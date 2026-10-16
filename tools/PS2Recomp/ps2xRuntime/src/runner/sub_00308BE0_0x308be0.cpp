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

// Function: sub_00308BE0
// Address: 0x308be0 - 0x308dd8
void sub_00308BE0_0x308be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308BE0_0x308be0");
#endif

    switch (ctx->pc) {
        case 0x308be0u: goto label_308be0;
        case 0x308be4u: goto label_308be4;
        case 0x308be8u: goto label_308be8;
        case 0x308becu: goto label_308bec;
        case 0x308bf0u: goto label_308bf0;
        case 0x308bf4u: goto label_308bf4;
        case 0x308bf8u: goto label_308bf8;
        case 0x308bfcu: goto label_308bfc;
        case 0x308c00u: goto label_308c00;
        case 0x308c04u: goto label_308c04;
        case 0x308c08u: goto label_308c08;
        case 0x308c0cu: goto label_308c0c;
        case 0x308c10u: goto label_308c10;
        case 0x308c14u: goto label_308c14;
        case 0x308c18u: goto label_308c18;
        case 0x308c1cu: goto label_308c1c;
        case 0x308c20u: goto label_308c20;
        case 0x308c24u: goto label_308c24;
        case 0x308c28u: goto label_308c28;
        case 0x308c2cu: goto label_308c2c;
        case 0x308c30u: goto label_308c30;
        case 0x308c34u: goto label_308c34;
        case 0x308c38u: goto label_308c38;
        case 0x308c3cu: goto label_308c3c;
        case 0x308c40u: goto label_308c40;
        case 0x308c44u: goto label_308c44;
        case 0x308c48u: goto label_308c48;
        case 0x308c4cu: goto label_308c4c;
        case 0x308c50u: goto label_308c50;
        case 0x308c54u: goto label_308c54;
        case 0x308c58u: goto label_308c58;
        case 0x308c5cu: goto label_308c5c;
        case 0x308c60u: goto label_308c60;
        case 0x308c64u: goto label_308c64;
        case 0x308c68u: goto label_308c68;
        case 0x308c6cu: goto label_308c6c;
        case 0x308c70u: goto label_308c70;
        case 0x308c74u: goto label_308c74;
        case 0x308c78u: goto label_308c78;
        case 0x308c7cu: goto label_308c7c;
        case 0x308c80u: goto label_308c80;
        case 0x308c84u: goto label_308c84;
        case 0x308c88u: goto label_308c88;
        case 0x308c8cu: goto label_308c8c;
        case 0x308c90u: goto label_308c90;
        case 0x308c94u: goto label_308c94;
        case 0x308c98u: goto label_308c98;
        case 0x308c9cu: goto label_308c9c;
        case 0x308ca0u: goto label_308ca0;
        case 0x308ca4u: goto label_308ca4;
        case 0x308ca8u: goto label_308ca8;
        case 0x308cacu: goto label_308cac;
        case 0x308cb0u: goto label_308cb0;
        case 0x308cb4u: goto label_308cb4;
        case 0x308cb8u: goto label_308cb8;
        case 0x308cbcu: goto label_308cbc;
        case 0x308cc0u: goto label_308cc0;
        case 0x308cc4u: goto label_308cc4;
        case 0x308cc8u: goto label_308cc8;
        case 0x308cccu: goto label_308ccc;
        case 0x308cd0u: goto label_308cd0;
        case 0x308cd4u: goto label_308cd4;
        case 0x308cd8u: goto label_308cd8;
        case 0x308cdcu: goto label_308cdc;
        case 0x308ce0u: goto label_308ce0;
        case 0x308ce4u: goto label_308ce4;
        case 0x308ce8u: goto label_308ce8;
        case 0x308cecu: goto label_308cec;
        case 0x308cf0u: goto label_308cf0;
        case 0x308cf4u: goto label_308cf4;
        case 0x308cf8u: goto label_308cf8;
        case 0x308cfcu: goto label_308cfc;
        case 0x308d00u: goto label_308d00;
        case 0x308d04u: goto label_308d04;
        case 0x308d08u: goto label_308d08;
        case 0x308d0cu: goto label_308d0c;
        case 0x308d10u: goto label_308d10;
        case 0x308d14u: goto label_308d14;
        case 0x308d18u: goto label_308d18;
        case 0x308d1cu: goto label_308d1c;
        case 0x308d20u: goto label_308d20;
        case 0x308d24u: goto label_308d24;
        case 0x308d28u: goto label_308d28;
        case 0x308d2cu: goto label_308d2c;
        case 0x308d30u: goto label_308d30;
        case 0x308d34u: goto label_308d34;
        case 0x308d38u: goto label_308d38;
        case 0x308d3cu: goto label_308d3c;
        case 0x308d40u: goto label_308d40;
        case 0x308d44u: goto label_308d44;
        case 0x308d48u: goto label_308d48;
        case 0x308d4cu: goto label_308d4c;
        case 0x308d50u: goto label_308d50;
        case 0x308d54u: goto label_308d54;
        case 0x308d58u: goto label_308d58;
        case 0x308d5cu: goto label_308d5c;
        case 0x308d60u: goto label_308d60;
        case 0x308d64u: goto label_308d64;
        case 0x308d68u: goto label_308d68;
        case 0x308d6cu: goto label_308d6c;
        case 0x308d70u: goto label_308d70;
        case 0x308d74u: goto label_308d74;
        case 0x308d78u: goto label_308d78;
        case 0x308d7cu: goto label_308d7c;
        case 0x308d80u: goto label_308d80;
        case 0x308d84u: goto label_308d84;
        case 0x308d88u: goto label_308d88;
        case 0x308d8cu: goto label_308d8c;
        case 0x308d90u: goto label_308d90;
        case 0x308d94u: goto label_308d94;
        case 0x308d98u: goto label_308d98;
        case 0x308d9cu: goto label_308d9c;
        case 0x308da0u: goto label_308da0;
        case 0x308da4u: goto label_308da4;
        case 0x308da8u: goto label_308da8;
        case 0x308dacu: goto label_308dac;
        case 0x308db0u: goto label_308db0;
        case 0x308db4u: goto label_308db4;
        case 0x308db8u: goto label_308db8;
        case 0x308dbcu: goto label_308dbc;
        case 0x308dc0u: goto label_308dc0;
        case 0x308dc4u: goto label_308dc4;
        case 0x308dc8u: goto label_308dc8;
        case 0x308dccu: goto label_308dcc;
        case 0x308dd0u: goto label_308dd0;
        case 0x308dd4u: goto label_308dd4;
        default: break;
    }

    ctx->pc = 0x308be0u;

label_308be0:
    // 0x308be0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x308be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_308be4:
    // 0x308be4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x308be4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_308be8:
    // 0x308be8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x308be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_308bec:
    // 0x308bec: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x308becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_308bf0:
    // 0x308bf0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x308bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_308bf4:
    // 0x308bf4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x308bf4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_308bf8:
    // 0x308bf8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x308bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_308bfc:
    // 0x308bfc: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x308bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_308c00:
    // 0x308c00: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x308c00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_308c04:
    // 0x308c04: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x308c04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_308c08:
    // 0x308c08: 0x12600067  beqz        $s3, . + 4 + (0x67 << 2)
label_308c0c:
    if (ctx->pc == 0x308C0Cu) {
        ctx->pc = 0x308C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C08u;
        // 0x308c0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C10u;
        goto label_308c10;
    }
    ctx->pc = 0x308C08u;
    {
        const bool branch_taken_0x308c08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C08u;
        // 0x308c0c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c08) {
            ctx->pc = 0x308DA8u;
            goto label_308da8;
        }
    }
    ctx->pc = 0x308C10u;
label_308c10:
    // 0x308c10: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x308c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_308c14:
    // 0x308c14: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_308c18:
    if (ctx->pc == 0x308C18u) {
        ctx->pc = 0x308C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C14u;
        // 0x308c18: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C1Cu;
        goto label_308c1c;
    }
    ctx->pc = 0x308C14u;
    {
        const bool branch_taken_0x308c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x308C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C14u;
        // 0x308c18: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c14) {
            ctx->pc = 0x308C34u;
            goto label_308c34;
        }
    }
    ctx->pc = 0x308C1Cu;
label_308c1c:
    // 0x308c1c: 0xc0a2354  jal         func_288D50
label_308c20:
    if (ctx->pc == 0x308C20u) {
        ctx->pc = 0x308C24u;
        goto label_308c24;
    }
    ctx->pc = 0x308C1Cu;
    SET_GPR_U32(ctx, 31, 0x308C24u);
    ctx->pc = 0x288D50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288D50u, 0x308C1Cu, 0x308C24u)) {
        return;
    }
    ctx->pc = 0x308C24u;
label_308c24:
    // 0x308c24: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x308c24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308c28:
    // 0x308c28: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x308c28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308c2c:
    // 0x308c2c: 0xc0a2048  jal         func_288120
label_308c30:
    if (ctx->pc == 0x308C30u) {
        ctx->pc = 0x308C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C2Cu;
        // 0x308c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C34u;
        goto label_308c34;
    }
    ctx->pc = 0x308C2Cu;
    SET_GPR_U32(ctx, 31, 0x308C34u);
    ctx->pc = 0x308C30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C2Cu;
    // 0x308c30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288120u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x288120u, 0x308C2Cu, 0x308C34u)) {
        return;
    }
    ctx->pc = 0x308C34u;
label_308c34:
    // 0x308c34: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x308c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308c38:
    // 0x308c38: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308c3c:
    // 0x308c3c: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_308c40:
    if (ctx->pc == 0x308C40u) {
        ctx->pc = 0x308C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C3Cu;
        // 0x308c40: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C44u;
        goto label_308c44;
    }
    ctx->pc = 0x308C3Cu;
    {
        const bool branch_taken_0x308c3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x308c3c) {
            ctx->pc = 0x308C40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308C3Cu;
            // 0x308c40: 0x8e150000  lw          $s5, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308C58u;
            goto label_308c58;
        }
    }
    ctx->pc = 0x308C44u;
label_308c44:
    // 0x308c44: 0xc09292a  jal         func_24A4A8
label_308c48:
    if (ctx->pc == 0x308C48u) {
        ctx->pc = 0x308C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C44u;
        // 0x308c48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C4Cu;
        goto label_308c4c;
    }
    ctx->pc = 0x308C44u;
    SET_GPR_U32(ctx, 31, 0x308C4Cu);
    ctx->pc = 0x308C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C44u;
    // 0x308c48: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x308C44u, 0x308C4Cu)) {
        return;
    }
    ctx->pc = 0x308C4Cu;
label_308c4c:
    // 0x308c4c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x308c4cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308c50:
    // 0x308c50: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x308c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_308c54:
    // 0x308c54: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x308c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_308c58:
    // 0x308c58: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_308c5c:
    if (ctx->pc == 0x308C5Cu) {
        ctx->pc = 0x308C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C58u;
        // 0x308c5c: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C60u;
        goto label_308c60;
    }
    ctx->pc = 0x308C58u;
    {
        const bool branch_taken_0x308c58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x308C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C58u;
        // 0x308c5c: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c58) {
            ctx->pc = 0x308C6Cu;
            goto label_308c6c;
        }
    }
    ctx->pc = 0x308C60u;
label_308c60:
    // 0x308c60: 0xc09294c  jal         func_24A530
label_308c64:
    if (ctx->pc == 0x308C64u) {
        ctx->pc = 0x308C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C60u;
        // 0x308c64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C68u;
        goto label_308c68;
    }
    ctx->pc = 0x308C60u;
    SET_GPR_U32(ctx, 31, 0x308C68u);
    ctx->pc = 0x308C64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308C60u;
    // 0x308c64: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x308C60u, 0x308C68u)) {
        return;
    }
    ctx->pc = 0x308C68u;
label_308c68:
    // 0x308c68: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x308c68u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308c6c:
    // 0x308c6c: 0x8ec50068  lw          $a1, 0x68($s6)
    ctx->pc = 0x308c6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 104)));
label_308c70:
    // 0x308c70: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_308c74:
    if (ctx->pc == 0x308C74u) {
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308C78u;
        goto label_308c78;
    }
    ctx->pc = 0x308C70u;
    {
        const bool branch_taken_0x308c70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x308C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308C70u;
        // 0x308c74: 0x3c120073  lui         $s2, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308c70) {
            ctx->pc = 0x308CD4u;
            goto label_308cd4;
        }
    }
    ctx->pc = 0x308C78u;
label_308c78:
    // 0x308c78: 0x8cb10050  lw          $s1, 0x50($a1)
    ctx->pc = 0x308c78u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_308c7c:
    // 0x308c7c: 0x26520fc8  addiu       $s2, $s2, 0xFC8
    ctx->pc = 0x308c7cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4040));
label_308c80:
    // 0x308c80: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x308c80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_308c84:
    // 0x308c84: 0x3223f000  andi        $v1, $s1, 0xF000
    ctx->pc = 0x308c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)61440);
label_308c88:
    // 0x308c88: 0x32300f00  andi        $s0, $s1, 0xF00
    ctx->pc = 0x308c88u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)3840);
label_308c8c:
    // 0x308c8c: 0x108202  srl         $s0, $s0, 8
    ctx->pc = 0x308c8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 8));
label_308c90:
    // 0x308c90: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x308c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
label_308c94:
    // 0x308c94: 0x2031826  xor         $v1, $s0, $v1
    ctx->pc = 0x308c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 3));
label_308c98:
    // 0x308c98: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308c9c:
    // 0x308c9c: 0x3800b  movn        $s0, $zero, $v1
    ctx->pc = 0x308c9cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_308ca0:
    // 0x308ca0: 0x323100ff  andi        $s1, $s1, 0xFF
    ctx->pc = 0x308ca0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_308ca4:
    // 0x308ca4: 0x40f809  jalr        $v0
label_308ca8:
    if (ctx->pc == 0x308CA8u) {
        ctx->pc = 0x308CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA4u;
        // 0x308ca8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CACu;
        goto label_308cac;
    }
    ctx->pc = 0x308CA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308CACu);
        ctx->pc = 0x308CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CA4u;
        // 0x308ca8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CA4u, 0x308CACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308CACu;
label_308cac:
    // 0x308cac: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308cb0:
    // 0x308cb0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x308cb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_308cb4:
    // 0x308cb4: 0x40f809  jalr        $v0
label_308cb8:
    if (ctx->pc == 0x308CB8u) {
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CBCu;
        goto label_308cbc;
    }
    ctx->pc = 0x308CB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308CBCu);
        ctx->pc = 0x308CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CB4u;
        // 0x308cb8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CB4u, 0x308CBCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308CBCu;
label_308cbc:
    // 0x308cbc: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x308cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_308cc0:
    // 0x308cc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x308cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_308cc4:
    // 0x308cc4: 0x40f809  jalr        $v0
label_308cc8:
    if (ctx->pc == 0x308CC8u) {
        ctx->pc = 0x308CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CC4u;
        // 0x308cc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CCCu;
        goto label_308ccc;
    }
    ctx->pc = 0x308CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308CCCu);
        ctx->pc = 0x308CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CC4u;
        // 0x308cc8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CC4u, 0x308CCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308CCCu;
label_308ccc:
    // 0x308ccc: 0x10000007  b           . + 4 + (0x7 << 2)
label_308cd0:
    if (ctx->pc == 0x308CD0u) {
        ctx->pc = 0x308CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CCCu;
        // 0x308cd0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CD4u;
        goto label_308cd4;
    }
    ctx->pc = 0x308CCCu;
    {
        const bool branch_taken_0x308ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CCCu;
        // 0x308cd0: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308ccc) {
            ctx->pc = 0x308CECu;
            goto label_308cec;
        }
    }
    ctx->pc = 0x308CD4u;
label_308cd4:
    // 0x308cd4: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x308cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
label_308cd8:
    // 0x308cd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x308cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_308cdc:
    // 0x308cdc: 0x8c620fe8  lw          $v0, 0xFE8($v1)
    ctx->pc = 0x308cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4072)));
label_308ce0:
    // 0x308ce0: 0x40f809  jalr        $v0
label_308ce4:
    if (ctx->pc == 0x308CE4u) {
        ctx->pc = 0x308CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE0u;
        // 0x308ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308CE8u;
        goto label_308ce8;
    }
    ctx->pc = 0x308CE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x308CE8u);
        ctx->pc = 0x308CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308CE0u;
        // 0x308ce4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308CE0u, 0x308CE8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x308CE8u;
label_308ce8:
    // 0x308ce8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x308ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_308cec:
    // 0x308cec: 0xc6610010  lwc1        $f1, 0x10($s3)
    ctx->pc = 0x308cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_308cf0:
    // 0x308cf0: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x308cf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_308cf4:
    // 0x308cf4: 0x3c100070  lui         $s0, 0x70
    ctx->pc = 0x308cf4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)112 << 16));
label_308cf8:
    // 0x308cf8: 0x261163b0  addiu       $s1, $s0, 0x63B0
    ctx->pc = 0x308cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
label_308cfc:
    // 0x308cfc: 0x751021  addu        $v0, $v1, $s5
    ctx->pc = 0x308cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_308d00:
    // 0x308d00: 0xc440fffc  lwc1        $f0, -0x4($v0)
    ctx->pc = 0x308d00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_308d04:
    // 0x308d04: 0xe6210740  swc1        $f1, 0x740($s1)
    ctx->pc = 0x308d04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1856), bits); }
label_308d08:
    // 0x308d08: 0xe6200744  swc1        $f0, 0x744($s1)
    ctx->pc = 0x308d08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1860), bits); }
label_308d0c:
    // 0x308d0c: 0xc09223e  jal         func_2488F8
label_308d10:
    if (ctx->pc == 0x308D10u) {
        ctx->pc = 0x308D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D0Cu;
        // 0x308d10: 0xae360728  sw          $s6, 0x728($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D14u;
        goto label_308d14;
    }
    ctx->pc = 0x308D0Cu;
    SET_GPR_U32(ctx, 31, 0x308D14u);
    ctx->pc = 0x308D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D0Cu;
    // 0x308d10: 0xae360728  sw          $s6, 0x728($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 1832), GPR_U32(ctx, 22));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2488F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2488F8u, 0x308D0Cu, 0x308D14u)) {
        return;
    }
    ctx->pc = 0x308D14u;
label_308d14:
    // 0x308d14: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x308d14u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_308d18:
    // 0x308d18: 0x24040027  addiu       $a0, $zero, 0x27
    ctx->pc = 0x308d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_308d1c:
    // 0x308d1c: 0x2683ffd8  addiu       $v1, $s4, -0x28
    ctx->pc = 0x308d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_308d20:
    // 0x308d20: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_308d24:
    if (ctx->pc == 0x308D24u) {
        ctx->pc = 0x308D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D20u;
        // 0x308d24: 0xae350738  sw          $s5, 0x738($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1848), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D28u;
        goto label_308d28;
    }
    ctx->pc = 0x308D20u;
    {
        const bool branch_taken_0x308d20 = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x308D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D20u;
        // 0x308d24: 0xae350738  sw          $s5, 0x738($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1848), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d20) {
            ctx->pc = 0x308D54u;
            goto label_308d54;
        }
    }
    ctx->pc = 0x308D28u;
label_308d28:
    // 0x308d28: 0x64001a  div         $zero, $v1, $a0
    ctx->pc = 0x308d28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_308d2c:
    // 0x308d2c: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_308d30:
    if (ctx->pc == 0x308D30u) {
        ctx->pc = 0x308D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D2Cu;
        // 0x308d30: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D34u;
        goto label_308d34;
    }
    ctx->pc = 0x308D2Cu;
    {
        const bool branch_taken_0x308d2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d2c) {
            ctx->pc = 0x308D30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D2Cu;
            // 0x308d30: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x308D34u;
            goto label_308d34;
        }
    }
    ctx->pc = 0x308D34u;
label_308d34:
    // 0x308d34: 0x2812  mflo        $a1
    ctx->pc = 0x308d34u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_308d38:
    // 0x308d38: 0x1810  mfhi        $v1
    ctx->pc = 0x308d38u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_308d3c:
    // 0x308d3c: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x308d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_308d40:
    // 0x308d40: 0xae220768  sw          $v0, 0x768($s1)
    ctx->pc = 0x308d40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 2));
label_308d44:
    // 0x308d44: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_308d48:
    if (ctx->pc == 0x308D48u) {
        ctx->pc = 0x308D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D44u;
        // 0x308d48: 0xae250768  sw          $a1, 0x768($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D4Cu;
        goto label_308d4c;
    }
    ctx->pc = 0x308D44u;
    {
        const bool branch_taken_0x308d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x308d44) {
            ctx->pc = 0x308D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D44u;
            // 0x308d48: 0xae250768  sw          $a1, 0x768($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308D58u;
            goto label_308d58;
        }
    }
    ctx->pc = 0x308D4Cu;
label_308d4c:
    // 0x308d4c: 0x10000003  b           . + 4 + (0x3 << 2)
label_308d50:
    if (ctx->pc == 0x308D50u) {
        ctx->pc = 0x308D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D4Cu;
        // 0x308d50: 0x260763b0  addiu       $a3, $s0, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D54u;
        goto label_308d54;
    }
    ctx->pc = 0x308D4Cu;
    {
        const bool branch_taken_0x308d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D4Cu;
        // 0x308d50: 0x260763b0  addiu       $a3, $s0, 0x63B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d4c) {
            ctx->pc = 0x308D5Cu;
            goto label_308d5c;
        }
    }
    ctx->pc = 0x308D54u;
label_308d54:
    // 0x308d54: 0xae200768  sw          $zero, 0x768($s1)
    ctx->pc = 0x308d54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1896), GPR_U32(ctx, 0));
label_308d58:
    // 0x308d58: 0x260763b0  addiu       $a3, $s0, 0x63B0
    ctx->pc = 0x308d58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 25520));
label_308d5c:
    // 0x308d5c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x308d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_308d60:
    // 0x308d60: 0x8ce20768  lw          $v0, 0x768($a3)
    ctx->pc = 0x308d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1896)));
label_308d64:
    // 0x308d64: 0x2505000c  addiu       $a1, $t0, 0xC
    ctx->pc = 0x308d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_308d68:
    // 0x308d68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x308d68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308d6c:
    // 0x308d6c: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x308d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_308d70:
    // 0x308d70: 0xace20764  sw          $v0, 0x764($a3)
    ctx->pc = 0x308d70u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1892), GPR_U32(ctx, 2));
label_308d74:
    // 0x308d74: 0x94e30764  lhu         $v1, 0x764($a3)
    ctx->pc = 0x308d74u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 1892)));
label_308d78:
    // 0x308d78: 0xa5030000  sh          $v1, 0x0($t0)
    ctx->pc = 0x308d78u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 3));
label_308d7c:
    // 0x308d7c: 0x8ce20504  lw          $v0, 0x504($a3)
    ctx->pc = 0x308d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1284)));
label_308d80:
    // 0x308d80: 0xad040008  sw          $a0, 0x8($t0)
    ctx->pc = 0x308d80u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 4));
label_308d84:
    // 0x308d84: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x308d84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_308d88:
    // 0x308d88: 0xc09240e  jal         func_249038
label_308d8c:
    if (ctx->pc == 0x308D8Cu) {
        ctx->pc = 0x308D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D88u;
        // 0x308d8c: 0x8ce407e0  lw          $a0, 0x7E0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2016)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D90u;
        goto label_308d90;
    }
    ctx->pc = 0x308D88u;
    SET_GPR_U32(ctx, 31, 0x308D90u);
    ctx->pc = 0x308D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308D88u;
    // 0x308d8c: 0x8ce407e0  lw          $a0, 0x7E0($a3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2016)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249038u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249038u, 0x308D88u, 0x308D90u)) {
        return;
    }
    ctx->pc = 0x308D90u;
label_308d90:
    // 0x308d90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_308d94:
    if (ctx->pc == 0x308D94u) {
        ctx->pc = 0x308D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D90u;
        // 0x308d94: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308D98u;
        goto label_308d98;
    }
    ctx->pc = 0x308D90u;
    {
        const bool branch_taken_0x308d90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308d90) {
            ctx->pc = 0x308D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308D90u;
            // 0x308d94: 0x8e640014  lw          $a0, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308DA0u;
            goto label_308da0;
        }
    }
    ctx->pc = 0x308D98u;
label_308d98:
    // 0x308d98: 0x10000004  b           . + 4 + (0x4 << 2)
label_308d9c:
    if (ctx->pc == 0x308D9Cu) {
        ctx->pc = 0x308D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D98u;
        // 0x308d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DA0u;
        goto label_308da0;
    }
    ctx->pc = 0x308D98u;
    {
        const bool branch_taken_0x308d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x308D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308D98u;
        // 0x308d9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x308d98) {
            ctx->pc = 0x308DACu;
            goto label_308dac;
        }
    }
    ctx->pc = 0x308DA0u;
label_308da0:
    // 0x308da0: 0xc0c22f8  jal         func_308BE0
label_308da4:
    if (ctx->pc == 0x308DA4u) {
        ctx->pc = 0x308DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DA0u;
        // 0x308da4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DA8u;
        goto label_308da8;
    }
    ctx->pc = 0x308DA0u;
    SET_GPR_U32(ctx, 31, 0x308DA8u);
    ctx->pc = 0x308DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x308DA0u;
    // 0x308da4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x308BE0u;
    goto label_308be0;
    ctx->pc = 0x308DA8u;
label_308da8:
    // 0x308da8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x308da8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_308dac:
    // 0x308dac: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x308dacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_308db0:
    // 0x308db0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x308db0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_308db4:
    // 0x308db4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x308db4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_308db8:
    // 0x308db8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x308db8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_308dbc:
    // 0x308dbc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x308dbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_308dc0:
    // 0x308dc0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x308dc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_308dc4:
    // 0x308dc4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x308dc4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_308dc8:
    // 0x308dc8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x308dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_308dcc:
    // 0x308dcc: 0x3e00008  jr          $ra
label_308dd0:
    if (ctx->pc == 0x308DD0u) {
        ctx->pc = 0x308DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DCCu;
        // 0x308dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x308DD4u;
        goto label_308dd4;
    }
    ctx->pc = 0x308DCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x308DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x308DCCu;
        // 0x308dd0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308DCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x308DD4u;
label_308dd4:
    // 0x308dd4: 0x0  nop
    ctx->pc = 0x308dd4u;
    // NOP
    ctx->pc = 0x308dd8u;
}
