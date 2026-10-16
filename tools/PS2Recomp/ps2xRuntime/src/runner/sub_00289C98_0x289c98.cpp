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

// Function: sub_00289C98
// Address: 0x289c98 - 0x28a320
void sub_00289C98_0x289c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00289C98_0x289c98");
#endif

    switch (ctx->pc) {
        case 0x289cd8u: goto label_289cd8;
        case 0x289ce4u: goto label_289ce4;
        case 0x289d34u: goto label_289d34;
        case 0x289d48u: goto label_289d48;
        case 0x289d50u: goto label_289d50;
        case 0x289d6cu: goto label_289d6c;
        case 0x289d80u: goto label_289d80;
        case 0x289d88u: goto label_289d88;
        case 0x289da0u: goto label_289da0;
        case 0x289db4u: goto label_289db4;
        case 0x289dbcu: goto label_289dbc;
        case 0x289dc8u: goto label_289dc8;
        case 0x289dd8u: goto label_289dd8;
        case 0x289decu: goto label_289dec;
        case 0x289df4u: goto label_289df4;
        case 0x289e04u: goto label_289e04;
        case 0x289e18u: goto label_289e18;
        case 0x289e20u: goto label_289e20;
        case 0x289e30u: goto label_289e30;
        case 0x289e44u: goto label_289e44;
        case 0x289e4cu: goto label_289e4c;
        case 0x289e5cu: goto label_289e5c;
        case 0x289e70u: goto label_289e70;
        case 0x289e78u: goto label_289e78;
        case 0x289e8cu: goto label_289e8c;
        case 0x289eb0u: goto label_289eb0;
        case 0x289eccu: goto label_289ecc;
        case 0x289ed4u: goto label_289ed4;
        case 0x289ee0u: goto label_289ee0;
        case 0x289f68u: goto label_289f68;
        case 0x289f9cu: goto label_289f9c;
        case 0x28a038u: goto label_28a038;
        case 0x28a090u: goto label_28a090;
        case 0x28a1c8u: goto label_28a1c8;
        default: break;
    }

    ctx->pc = 0x289c98u;

    // 0x289c98: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x289c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x289c9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x289c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x289ca0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x289ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x289ca4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x289ca4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ca8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x289ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x289cac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x289cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x289cb0: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x289cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x289cb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x289cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x289cb8: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x289cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x289cbc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x289cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x289cc0: 0x1040018f  beqz        $v0, . + 4 + (0x18F << 2)
    ctx->pc = 0x289CC0u;
    {
        const bool branch_taken_0x289cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CC0u;
        // 0x289cc4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cc0) {
            ctx->pc = 0x28A300u;
            goto label_28a300;
        }
    }
    ctx->pc = 0x289CC8u;
    // 0x289cc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x289ccc: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x289cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x289cd0: 0xc092858  jal         func_24A160
    ctx->pc = 0x289CD0u;
    SET_GPR_U32(ctx, 31, 0x289CD8u);
    ctx->pc = 0x289CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CD0u;
    // 0x289cd4: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x289CD0u, 0x289CD8u)) {
        return;
    }
    ctx->pc = 0x289CD8u;
label_289cd8:
    // 0x289cd8: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x289cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x289cdc: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x289CDCu;
    SET_GPR_U32(ctx, 31, 0x289CE4u);
    ctx->pc = 0x289CE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289CDCu;
    // 0x289ce0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x289CDCu, 0x289CE4u)) {
        return;
    }
    ctx->pc = 0x289CE4u;
label_289ce4:
    // 0x289ce4: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x289ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x289ce8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x289ce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289cec: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x289cecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x289cf0: 0x43a021  addu        $s4, $v0, $v1
    ctx->pc = 0x289cf0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x289cf4: 0x12340063  beq         $s1, $s4, . + 4 + (0x63 << 2)
    ctx->pc = 0x289CF4u;
    {
        const bool branch_taken_0x289cf4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x289CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289CF4u;
        // 0x289cf8: 0x2911023  subu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289cf4) {
            ctx->pc = 0x289E84u;
            goto label_289e84;
        }
    }
    ctx->pc = 0x289CFCu;
    // 0x289cfc: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x289cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x289d00: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x289D00u;
    {
        const bool branch_taken_0x289d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D00u;
        // 0x289d04: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d00) {
            ctx->pc = 0x289DC8u;
            goto label_289dc8;
        }
    }
    ctx->pc = 0x289D08u;
    // 0x289d08: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x289d08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x289d0c: 0x14400021  bnez        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x289D0Cu;
    {
        const bool branch_taken_0x289d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D0Cu;
        // 0x289d10: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d0c) {
            ctx->pc = 0x289D94u;
            goto label_289d94;
        }
    }
    ctx->pc = 0x289D14u;
    // 0x289d14: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x289d14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x289d18: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x289D18u;
    {
        const bool branch_taken_0x289d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289D18u;
        // 0x289d1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d18) {
            ctx->pc = 0x289D64u;
            goto label_289d64;
        }
    }
    ctx->pc = 0x289D20u;
    // 0x289d20: 0x2862000d  slti        $v0, $v1, 0xD
    ctx->pc = 0x289d20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
    // 0x289d24: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x289D24u;
    {
        const bool branch_taken_0x289d24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d24) {
            ctx->pc = 0x289DC8u;
            goto label_289dc8;
        }
    }
    ctx->pc = 0x289D2Cu;
    // 0x289d2c: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289D2Cu;
    SET_GPR_U32(ctx, 31, 0x289D34u);
    ctx->pc = 0x289D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D2Cu;
    // 0x289d30: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289D2Cu, 0x289D34u)) {
        return;
    }
    ctx->pc = 0x289D34u;
label_289d34:
    // 0x289d34: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x289d34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x289d38: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289D38u;
    {
        const bool branch_taken_0x289d38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d38) {
            ctx->pc = 0x289D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289D38u;
            // 0x289d3c: 0x26220004  addiu       $v0, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289D54u;
            goto label_289d54;
        }
    }
    ctx->pc = 0x289D40u;
    // 0x289d40: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289D40u;
    SET_GPR_U32(ctx, 31, 0x289D48u);
    ctx->pc = 0x289D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D40u;
    // 0x289d44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289D40u, 0x289D48u)) {
        return;
    }
    ctx->pc = 0x289D48u;
label_289d48:
    // 0x289d48: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289D48u;
    SET_GPR_U32(ctx, 31, 0x289D50u);
    ctx->pc = 0x289D4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D48u;
    // 0x289d4c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289D48u, 0x289D50u)) {
        return;
    }
    ctx->pc = 0x289D50u;
label_289d50:
    // 0x289d50: 0x26220004  addiu       $v0, $s1, 0x4
    ctx->pc = 0x289d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_289d54:
    // 0x289d54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x289d54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d58: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x289d58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d5c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x289d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_289d64:
    // 0x289d64: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289D64u;
    SET_GPR_U32(ctx, 31, 0x289D6Cu);
    ctx->pc = 0x289D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D64u;
    // 0x289d68: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289D64u, 0x289D6Cu)) {
        return;
    }
    ctx->pc = 0x289D6Cu;
label_289d6c:
    // 0x289d6c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x289d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289d70: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289D70u;
    {
        const bool branch_taken_0x289d70 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289d70) {
            ctx->pc = 0x289D74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289D70u;
            // 0x289d74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289D8Cu;
            goto label_289d8c;
        }
    }
    ctx->pc = 0x289D78u;
    // 0x289d78: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289D78u;
    SET_GPR_U32(ctx, 31, 0x289D80u);
    ctx->pc = 0x289D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D78u;
    // 0x289d7c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289D78u, 0x289D80u)) {
        return;
    }
    ctx->pc = 0x289D80u;
label_289d80:
    // 0x289d80: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289D80u;
    SET_GPR_U32(ctx, 31, 0x289D88u);
    ctx->pc = 0x289D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D80u;
    // 0x289d84: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289D80u, 0x289D88u)) {
        return;
    }
    ctx->pc = 0x289D88u;
label_289d88:
    // 0x289d88: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x289d88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_289d8c:
    // 0x289d8c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x289d8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x289d90: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_289d94:
    // 0x289d94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d98: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289D98u;
    SET_GPR_U32(ctx, 31, 0x289DA0u);
    ctx->pc = 0x289D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289D98u;
    // 0x289d9c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289D98u, 0x289DA0u)) {
        return;
    }
    ctx->pc = 0x289DA0u;
label_289da0:
    // 0x289da0: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x289da0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289da4: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289DA4u;
    {
        const bool branch_taken_0x289da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289da4) {
            ctx->pc = 0x289DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289DA4u;
            // 0x289da8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289DC0u;
            goto label_289dc0;
        }
    }
    ctx->pc = 0x289DACu;
    // 0x289dac: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289DACu;
    SET_GPR_U32(ctx, 31, 0x289DB4u);
    ctx->pc = 0x289DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DACu;
    // 0x289db0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289DACu, 0x289DB4u)) {
        return;
    }
    ctx->pc = 0x289DB4u;
label_289db4:
    // 0x289db4: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289DB4u;
    SET_GPR_U32(ctx, 31, 0x289DBCu);
    ctx->pc = 0x289DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DB4u;
    // 0x289db8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289DB4u, 0x289DBCu)) {
        return;
    }
    ctx->pc = 0x289DBCu;
label_289dbc:
    // 0x289dbc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x289dbcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_289dc0:
    // 0x289dc0: 0x12340030  beq         $s1, $s4, . + 4 + (0x30 << 2)
    ctx->pc = 0x289DC0u;
    {
        const bool branch_taken_0x289dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 20));
        ctx->pc = 0x289DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289DC0u;
        // 0x289dc4: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dc0) {
            ctx->pc = 0x289E84u;
            goto label_289e84;
        }
    }
    ctx->pc = 0x289DC8u;
label_289dc8:
    // 0x289dc8: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x289dcc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289dccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dd0: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289DD0u;
    SET_GPR_U32(ctx, 31, 0x289DD8u);
    ctx->pc = 0x289DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DD0u;
    // 0x289dd4: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289DD0u, 0x289DD8u)) {
        return;
    }
    ctx->pc = 0x289DD8u;
label_289dd8:
    // 0x289dd8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x289dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289ddc: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289DDCu;
    {
        const bool branch_taken_0x289ddc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ddc) {
            ctx->pc = 0x289DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289DDCu;
            // 0x289de0: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289DF8u;
            goto label_289df8;
        }
    }
    ctx->pc = 0x289DE4u;
    // 0x289de4: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289DE4u;
    SET_GPR_U32(ctx, 31, 0x289DECu);
    ctx->pc = 0x289DE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DE4u;
    // 0x289de8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289DE4u, 0x289DECu)) {
        return;
    }
    ctx->pc = 0x289DECu;
label_289dec:
    // 0x289dec: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289DECu;
    SET_GPR_U32(ctx, 31, 0x289DF4u);
    ctx->pc = 0x289DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DECu;
    // 0x289df0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289DECu, 0x289DF4u)) {
        return;
    }
    ctx->pc = 0x289DF4u;
label_289df4:
    // 0x289df4: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289df4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_289df8:
    // 0x289df8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289dfc: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289DFCu;
    SET_GPR_U32(ctx, 31, 0x289E04u);
    ctx->pc = 0x289E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289DFCu;
    // 0x289e00: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289DFCu, 0x289E04u)) {
        return;
    }
    ctx->pc = 0x289E04u;
label_289e04:
    // 0x289e04: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x289e04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x289e08: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289E08u;
    {
        const bool branch_taken_0x289e08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e08) {
            ctx->pc = 0x289E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289E08u;
            // 0x289e0c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289E24u;
            goto label_289e24;
        }
    }
    ctx->pc = 0x289E10u;
    // 0x289e10: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289E10u;
    SET_GPR_U32(ctx, 31, 0x289E18u);
    ctx->pc = 0x289E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E10u;
    // 0x289e14: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289E10u, 0x289E18u)) {
        return;
    }
    ctx->pc = 0x289E18u;
label_289e18:
    // 0x289e18: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289E18u;
    SET_GPR_U32(ctx, 31, 0x289E20u);
    ctx->pc = 0x289E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E18u;
    // 0x289e1c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289E18u, 0x289E20u)) {
        return;
    }
    ctx->pc = 0x289E20u;
label_289e20:
    // 0x289e20: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289e20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_289e24:
    // 0x289e24: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e28: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289E28u;
    SET_GPR_U32(ctx, 31, 0x289E30u);
    ctx->pc = 0x289E2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E28u;
    // 0x289e2c: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289E28u, 0x289E30u)) {
        return;
    }
    ctx->pc = 0x289E30u;
label_289e30:
    // 0x289e30: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x289e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x289e34: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289E34u;
    {
        const bool branch_taken_0x289e34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e34) {
            ctx->pc = 0x289E38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289E34u;
            // 0x289e38: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289E50u;
            goto label_289e50;
        }
    }
    ctx->pc = 0x289E3Cu;
    // 0x289e3c: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289E3Cu;
    SET_GPR_U32(ctx, 31, 0x289E44u);
    ctx->pc = 0x289E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E3Cu;
    // 0x289e40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289E3Cu, 0x289E44u)) {
        return;
    }
    ctx->pc = 0x289E44u;
label_289e44:
    // 0x289e44: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289E44u;
    SET_GPR_U32(ctx, 31, 0x289E4Cu);
    ctx->pc = 0x289E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E44u;
    // 0x289e48: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289E44u, 0x289E4Cu)) {
        return;
    }
    ctx->pc = 0x289E4Cu;
label_289e4c:
    // 0x289e4c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289e4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_289e50:
    // 0x289e50: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289e54: 0xc09289c  jal         func_24A270
    ctx->pc = 0x289E54u;
    SET_GPR_U32(ctx, 31, 0x289E5Cu);
    ctx->pc = 0x289E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E54u;
    // 0x289e58: 0x34a501a3  ori         $a1, $a1, 0x1A3 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)419);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A270u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A270u, 0x289E54u, 0x289E5Cu)) {
        return;
    }
    ctx->pc = 0x289E5Cu;
label_289e5c:
    // 0x289e5c: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x289e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x289e60: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x289E60u;
    {
        const bool branch_taken_0x289e60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e60) {
            ctx->pc = 0x289E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289E60u;
            // 0x289e64: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289E7Cu;
            goto label_289e7c;
        }
    }
    ctx->pc = 0x289E68u;
    // 0x289e68: 0xc0a259a  jal         func_289668
    ctx->pc = 0x289E68u;
    SET_GPR_U32(ctx, 31, 0x289E70u);
    ctx->pc = 0x289E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E68u;
    // 0x289e6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289668u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289668u, 0x289E68u, 0x289E70u)) {
        return;
    }
    ctx->pc = 0x289E70u;
label_289e70:
    // 0x289e70: 0xc0a25a6  jal         func_289698
    ctx->pc = 0x289E70u;
    SET_GPR_U32(ctx, 31, 0x289E78u);
    ctx->pc = 0x289E74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E70u;
    // 0x289e74: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x289698u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x289698u, 0x289E70u, 0x289E78u)) {
        return;
    }
    ctx->pc = 0x289E78u;
label_289e78:
    // 0x289e78: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x289e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_289e7c:
    // 0x289e7c: 0x1634ffd2  bne         $s1, $s4, . + 4 + (-0x2E << 2)
    ctx->pc = 0x289E7Cu;
    {
        const bool branch_taken_0x289e7c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 20));
        ctx->pc = 0x289E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289E7Cu;
        // 0x289e80: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e7c) {
            ctx->pc = 0x289DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289dc8;
        }
    }
    ctx->pc = 0x289E84u;
label_289e84:
    // 0x289e84: 0xc092932  jal         func_24A4C8
    ctx->pc = 0x289E84u;
    SET_GPR_U32(ctx, 31, 0x289E8Cu);
    ctx->pc = 0x289E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289E84u;
    // 0x289e88: 0x8e6400b0  lw          $a0, 0xB0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4C8u, 0x289E84u, 0x289E8Cu)) {
        return;
    }
    ctx->pc = 0x289E8Cu;
label_289e8c:
    // 0x289e8c: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x289e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x289e90: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x289e90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x289e94: 0xae7200b0  sw          $s2, 0xB0($s3)
    ctx->pc = 0x289e94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 176), GPR_U32(ctx, 18));
    // 0x289e98: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x289e98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x289e9c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289ea0: 0x34a50190  ori         $a1, $a1, 0x190
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
    // 0x289ea4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x289ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x289ea8: 0xc092858  jal         func_24A160
    ctx->pc = 0x289EA8u;
    SET_GPR_U32(ctx, 31, 0x289EB0u);
    ctx->pc = 0x289EACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EA8u;
    // 0x289eac: 0xae630008  sw          $v1, 0x8($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A160u, 0x289EA8u, 0x289EB0u)) {
        return;
    }
    ctx->pc = 0x289EB0u;
label_289eb0:
    // 0x289eb0: 0x8e6500b4  lw          $a1, 0xB4($s3)
    ctx->pc = 0x289eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x289eb4: 0x10a00111  beqz        $a1, . + 4 + (0x111 << 2)
    ctx->pc = 0x289EB4u;
    {
        const bool branch_taken_0x289eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EB4u;
        // 0x289eb8: 0xae6200b8  sw          $v0, 0xB8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289eb4) {
            ctx->pc = 0x28A2FCu;
            goto label_28a2fc;
        }
    }
    ctx->pc = 0x289EBCu;
    // 0x289ebc: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x289ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x289ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ec4: 0xc0928de  jal         func_24A378
    ctx->pc = 0x289EC4u;
    SET_GPR_U32(ctx, 31, 0x289ECCu);
    ctx->pc = 0x289EC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289EC4u;
    // 0x289ec8: 0x34c60190  ori         $a2, $a2, 0x190 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A378u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A378u, 0x289EC4u, 0x289ECCu)) {
        return;
    }
    ctx->pc = 0x289ECCu;
label_289ecc:
    // 0x289ecc: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x289ECCu;
    SET_GPR_U32(ctx, 31, 0x289ED4u);
    ctx->pc = 0x289ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289ECCu;
    // 0x289ed0: 0x8e6400b8  lw          $a0, 0xB8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x289ECCu, 0x289ED4u)) {
        return;
    }
    ctx->pc = 0x289ED4u;
label_289ed4:
    // 0x289ed4: 0x8e6400b0  lw          $a0, 0xB0($s3)
    ctx->pc = 0x289ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 176)));
    // 0x289ed8: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x289ED8u;
    SET_GPR_U32(ctx, 31, 0x289EE0u);
    ctx->pc = 0x289EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289ED8u;
    // 0x289edc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x289ED8u, 0x289EE0u)) {
        return;
    }
    ctx->pc = 0x289EE0u;
label_289ee0:
    // 0x289ee0: 0x8e6300b4  lw          $v1, 0xB4($s3)
    ctx->pc = 0x289ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x289ee4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ee8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x289eec: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x289eecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x289ef0: 0x10f00028  beq         $a3, $s0, . + 4 + (0x28 << 2)
    ctx->pc = 0x289EF0u;
    {
        const bool branch_taken_0x289ef0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 16));
        ctx->pc = 0x289EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289EF0u;
        // 0x289ef4: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ef0) {
            ctx->pc = 0x289F94u;
            goto label_289f94;
        }
    }
    ctx->pc = 0x289EF8u;
    // 0x289ef8: 0x2071023  subu        $v0, $s0, $a3
    ctx->pc = 0x289ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x289efc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x289efcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x289f00: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x289F00u;
    {
        const bool branch_taken_0x289f00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F00u;
        // 0x289f04: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f00) {
            ctx->pc = 0x289F60u;
            goto label_289f60;
        }
    }
    ctx->pc = 0x289F08u;
    // 0x289f08: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x289f08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x289f0c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x289F0Cu;
    {
        const bool branch_taken_0x289f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f0c) {
            ctx->pc = 0x289F10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289F0Cu;
            // 0x289f10: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289F50u;
            goto label_289f50;
        }
    }
    ctx->pc = 0x289F14u;
    // 0x289f14: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x289f14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x289f18: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x289F18u;
    {
        const bool branch_taken_0x289f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289f18) {
            ctx->pc = 0x289F1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289F18u;
            // 0x289f1c: 0xac860000  sw          $a2, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
            ctx->in_delay_slot = false;
            ctx->pc = 0x289F40u;
            goto label_289f40;
        }
    }
    ctx->pc = 0x289F20u;
    // 0x289f20: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x289f20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x289f24: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x289F24u;
    {
        const bool branch_taken_0x289f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F24u;
        // 0x289f28: 0x24e20008  addiu       $v0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f24) {
            ctx->pc = 0x289F60u;
            goto label_289f60;
        }
    }
    ctx->pc = 0x289F2Cu;
    // 0x289f2c: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x289f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x289f30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x289f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f34: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x289f34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x289f38: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x289f38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f3c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x289f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_289f40:
    // 0x289f40: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x289f40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x289f44: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x289f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x289f48: 0x24c60110  addiu       $a2, $a2, 0x110
    ctx->pc = 0x289f48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x289f4c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x289f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_289f50:
    // 0x289f50: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x289f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x289f54: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x289f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x289f58: 0x10f0000e  beq         $a3, $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x289F58u;
    {
        const bool branch_taken_0x289f58 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 16));
        ctx->pc = 0x289F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F58u;
        // 0x289f5c: 0x24c60110  addiu       $a2, $a2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f58) {
            ctx->pc = 0x289F94u;
            goto label_289f94;
        }
    }
    ctx->pc = 0x289F60u;
label_289f60:
    // 0x289f60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x289f60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289f64: 0x0  nop
    ctx->pc = 0x289f64u;
    // NOP
label_289f68:
    // 0x289f68: 0x24c20110  addiu       $v0, $a2, 0x110
    ctx->pc = 0x289f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 272));
    // 0x289f6c: 0x24c30220  addiu       $v1, $a2, 0x220
    ctx->pc = 0x289f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 544));
    // 0x289f70: 0x24c40330  addiu       $a0, $a2, 0x330
    ctx->pc = 0x289f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 816));
    // 0x289f74: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x289f74u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x289f78: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x289f78u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x289f7c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x289f7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x289f80: 0xaca30010  sw          $v1, 0x10($a1)
    ctx->pc = 0x289f80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
    // 0x289f84: 0x24c60440  addiu       $a2, $a2, 0x440
    ctx->pc = 0x289f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1088));
    // 0x289f88: 0xaca40018  sw          $a0, 0x18($a1)
    ctx->pc = 0x289f88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 4));
    // 0x289f8c: 0x14f0fff6  bne         $a3, $s0, . + 4 + (-0xA << 2)
    ctx->pc = 0x289F8Cu;
    {
        const bool branch_taken_0x289f8c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 16));
        ctx->pc = 0x289F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289F8Cu;
        // 0x289f90: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289f8c) {
            ctx->pc = 0x289F68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_289f68;
        }
    }
    ctx->pc = 0x289F94u;
label_289f94:
    // 0x289f94: 0xc09292a  jal         func_24A4A8
    ctx->pc = 0x289F94u;
    SET_GPR_U32(ctx, 31, 0x289F9Cu);
    ctx->pc = 0x289F98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x289F94u;
    // 0x289f98: 0x8e6400b8  lw          $a0, 0xB8($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 184)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A4A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A4A8u, 0x289F94u, 0x289F9Cu)) {
        return;
    }
    ctx->pc = 0x289F9Cu;
label_289f9c:
    // 0x289f9c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x289f9cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fa0: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x289fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x289fa4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x289fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x289fa8: 0x1625021  addu        $t2, $t3, $v0
    ctx->pc = 0x289fa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x289fac: 0x116a00d2  beq         $t3, $t2, . + 4 + (0xD2 << 2)
    ctx->pc = 0x289FACu;
    {
        const bool branch_taken_0x289fac = (GPR_U64(ctx, 11) == GPR_U64(ctx, 10));
        ctx->pc = 0x289FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FACu;
        // 0x289fb0: 0x254cfff8  addiu       $t4, $t2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fac) {
            ctx->pc = 0x28A2F8u;
            goto label_28a2f8;
        }
    }
    ctx->pc = 0x289FB4u;
    // 0x289fb4: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x289fb4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289fb8: 0x1471023  subu        $v0, $t2, $a3
    ctx->pc = 0x289fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
    // 0x289fbc: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x289fbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x289fc0: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x289FC0u;
    {
        const bool branch_taken_0x289fc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FC0u;
        // 0x289fc4: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fc0) {
            ctx->pc = 0x28A02Cu;
            goto label_28a02c;
        }
    }
    ctx->pc = 0x289FC8u;
    // 0x289fc8: 0x28620009  slti        $v0, $v1, 0x9
    ctx->pc = 0x289fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x289fcc: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x289FCCu;
    {
        const bool branch_taken_0x289fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289fcc) {
            ctx->pc = 0x289FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FCCu;
            // 0x289fd0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A018u;
            goto label_28a018;
        }
    }
    ctx->pc = 0x289FD4u;
    // 0x289fd4: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x289fd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x289fd8: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x289FD8u;
    {
        const bool branch_taken_0x289fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289fd8) {
            ctx->pc = 0x289FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x289FD8u;
            // 0x289fdc: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A004u;
            goto label_28a004;
        }
    }
    ctx->pc = 0x289FE0u;
    // 0x289fe0: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x289fe0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x289fe4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x289FE4u;
    {
        const bool branch_taken_0x289fe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x289FE4u;
        // 0x289fe8: 0x24e30008  addiu       $v1, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289fe4) {
            ctx->pc = 0x28A02Cu;
            goto label_28a02c;
        }
    }
    ctx->pc = 0x289FECu;
    // 0x289fec: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x289fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x289ff0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x289ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ff4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x289ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x289ff8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x289ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x289ffc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x289ffcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a000: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28a000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28a004:
    // 0x28a004: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28a004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28a008: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a00c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x28a010: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28a010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28a014: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_28a018:
    // 0x28a018: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x28a018u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x28a01c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a020: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x28a020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x28a024: 0x10ea0014  beq         $a3, $t2, . + 4 + (0x14 << 2)
    ctx->pc = 0x28A024u;
    {
        const bool branch_taken_0x28a024 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 10));
        ctx->pc = 0x28A028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A024u;
        // 0x28a028: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a024) {
            ctx->pc = 0x28A078u;
            goto label_28a078;
        }
    }
    ctx->pc = 0x28A02Cu;
label_28a02c:
    // 0x28a02c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x28a02cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a030: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x28a030u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a034: 0x0  nop
    ctx->pc = 0x28a034u;
    // NOP
label_28a038:
    // 0x28a038: 0x8d230000  lw          $v1, 0x0($t1)
    ctx->pc = 0x28a038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x28a03c: 0x24e70020  addiu       $a3, $a3, 0x20
    ctx->pc = 0x28a03cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32));
    // 0x28a040: 0x8d240008  lw          $a0, 0x8($t1)
    ctx->pc = 0x28a040u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x28a044: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28a044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28a048: 0x8d250010  lw          $a1, 0x10($t1)
    ctx->pc = 0x28a048u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x28a04c: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x28a04cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x28a050: 0x8d260018  lw          $a2, 0x18($t1)
    ctx->pc = 0x28a050u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x28a054: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x28a054u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a058: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x28a058u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x28a05c: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x28a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x28a060: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28a060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28a064: 0xad020014  sw          $v0, 0x14($t0)
    ctx->pc = 0x28a064u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 20), GPR_U32(ctx, 2));
    // 0x28a068: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x28a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x28a06c: 0xad03001c  sw          $v1, 0x1C($t0)
    ctx->pc = 0x28a06cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 28), GPR_U32(ctx, 3));
    // 0x28a070: 0x14eafff1  bne         $a3, $t2, . + 4 + (-0xF << 2)
    ctx->pc = 0x28A070u;
    {
        const bool branch_taken_0x28a070 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x28A074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A070u;
        // 0x28a074: 0x25080020  addiu       $t0, $t0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a070) {
            ctx->pc = 0x28A038u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a038;
        }
    }
    ctx->pc = 0x28A078u;
label_28a078:
    // 0x28a078: 0x160382d  daddu       $a3, $t3, $zero
    ctx->pc = 0x28a078u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a07c: 0xec102b  sltu        $v0, $a3, $t4
    ctx->pc = 0x28a07cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x28a080: 0x5040009e  beql        $v0, $zero, . + 4 + (0x9E << 2)
    ctx->pc = 0x28A080u;
    {
        const bool branch_taken_0x28a080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a080) {
            ctx->pc = 0x28A084u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A080u;
            // 0x28a084: 0xae6000bc  sw          $zero, 0xBC($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A2FCu;
            goto label_28a2fc;
        }
    }
    ctx->pc = 0x28A088u;
    // 0x28a088: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x28a088u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a08c: 0x24e60008  addiu       $a2, $a3, 0x8
    ctx->pc = 0x28a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_28a090:
    // 0x28a090: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a094: 0x10400094  beqz        $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x28A094u;
    {
        const bool branch_taken_0x28a094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A094u;
        // 0x28a098: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a094) {
            ctx->pc = 0x28A2E8u;
            goto label_28a2e8;
        }
    }
    ctx->pc = 0x28A09Cu;
    // 0x28a09c: 0x1481823  subu        $v1, $t2, $t0
    ctx->pc = 0x28a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x28a0a0: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x28a0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a0a4: 0x10a102a  slt         $v0, $t0, $t2
    ctx->pc = 0x28a0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x28a0a8: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x28A0A8u;
    {
        const bool branch_taken_0x28a0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0A8u;
        // 0x28a0ac: 0x3063001f  andi        $v1, $v1, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0a8) {
            ctx->pc = 0x28A174u;
            goto label_28a174;
        }
    }
    ctx->pc = 0x28A0B0u;
    // 0x28a0b0: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x28A0B0u;
    {
        const bool branch_taken_0x28a0b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0B0u;
        // 0x28a0b4: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0b0) {
            ctx->pc = 0x28A1C4u;
            goto label_28a1c4;
        }
    }
    ctx->pc = 0x28A0B8u;
    // 0x28a0b8: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x28A0B8u;
    {
        const bool branch_taken_0x28a0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a0b8) {
            ctx->pc = 0x28A0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A0B8u;
            // 0x28a0bc: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A178u;
            goto label_28a178;
        }
    }
    ctx->pc = 0x28A0C0u;
    // 0x28a0c0: 0x28620011  slti        $v0, $v1, 0x11
    ctx->pc = 0x28a0c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28a0c4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x28A0C4u;
    {
        const bool branch_taken_0x28a0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a0c4) {
            ctx->pc = 0x28A0C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A0C4u;
            // 0x28a0c8: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A12Cu;
            goto label_28a12c;
        }
    }
    ctx->pc = 0x28A0CCu;
    // 0x28a0cc: 0x28620019  slti        $v0, $v1, 0x19
    ctx->pc = 0x28a0ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
    // 0x28a0d0: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28A0D0u;
    {
        const bool branch_taken_0x28a0d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0D0u;
        // 0x28a0d4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0d0) {
            ctx->pc = 0x28A1C8u;
            goto label_28a1c8;
        }
    }
    ctx->pc = 0x28A0D8u;
    // 0x28a0d8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a0dc: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x28a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x28a0e0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a0e4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28A0E4u;
    {
        const bool branch_taken_0x28a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A0E4u;
        // 0x28a0e8: 0x24e20010  addiu       $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a0e4) {
            ctx->pc = 0x28A120u;
            goto label_28a120;
        }
    }
    ctx->pc = 0x28A0ECu;
    // 0x28a0ec: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x28a0ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a0f0: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x28a0f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a0f4: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x28a0f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a0f8: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x28a0f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a0fc: 0x68eb000f  ldl         $t3, 0xF($a3)
    ctx->pc = 0x28a0fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x28a100: 0x6ceb0008  ldr         $t3, 0x8($a3)
    ctx->pc = 0x28a100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x28a104: 0xb0eb0007  sdl         $t3, 0x7($a3)
    ctx->pc = 0x28a104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a108: 0xb4eb0000  sdr         $t3, 0x0($a3)
    ctx->pc = 0x28a108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a10c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x28a10cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28a110: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x28a110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28a114: 0xb0e4000f  sdl         $a0, 0xF($a3)
    ctx->pc = 0x28a114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a118: 0xb4e40008  sdr         $a0, 0x8($a3)
    ctx->pc = 0x28a118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a11c: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x28a11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
label_28a120:
    // 0x28a120: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28a120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a124: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x28a124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a128: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a12c:
    // 0x28a12c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28a12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a130: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a134: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A134u;
    {
        const bool branch_taken_0x28a134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a134) {
            ctx->pc = 0x28A138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A134u;
            // 0x28a138: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A170u;
            goto label_28a170;
        }
    }
    ctx->pc = 0x28A13Cu;
    // 0x28a13c: 0x68e20007  ldl         $v0, 0x7($a3)
    ctx->pc = 0x28a13cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a140: 0x6ce20000  ldr         $v0, 0x0($a3)
    ctx->pc = 0x28a140u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a144: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x28a144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a148: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x28a148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a14c: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x28a14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a150: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x28a150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a154: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a158: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a15c: 0x6bab0007  ldl         $t3, 0x7($sp)
    ctx->pc = 0x28a15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
    // 0x28a160: 0x6fab0000  ldr         $t3, 0x0($sp)
    ctx->pc = 0x28a160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
    // 0x28a164: 0xb08b0007  sdl         $t3, 0x7($a0)
    ctx->pc = 0x28a164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a168: 0xb48b0000  sdr         $t3, 0x0($a0)
    ctx->pc = 0x28a168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a16c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28a170:
    // 0x28a170: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28a170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_28a174:
    // 0x28a174: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a178:
    // 0x28a178: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x28a178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28a17c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a180: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A180u;
    {
        const bool branch_taken_0x28a180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A180u;
        // 0x28a184: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a180) {
            ctx->pc = 0x28A1B8u;
            goto label_28a1b8;
        }
    }
    ctx->pc = 0x28A188u;
    // 0x28a188: 0x68e50007  ldl         $a1, 0x7($a3)
    ctx->pc = 0x28a188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28a18c: 0x6ce50000  ldr         $a1, 0x0($a3)
    ctx->pc = 0x28a18cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28a190: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x28a190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a194: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x28a194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a198: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x28a198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28a19c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x28a19cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28a1a0: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x28a1a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1a4: 0xb4e30000  sdr         $v1, 0x0($a3)
    ctx->pc = 0x28a1a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1a8: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x28a1a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x28a1ac: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x28a1acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x28a1b0: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x28a1b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1b4: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x28a1b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a1b8:
    // 0x28a1b8: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a1b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a1bc: 0x1040004a  beqz        $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x28A1BCu;
    {
        const bool branch_taken_0x28a1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A1BCu;
        // 0x28a1c0: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a1bc) {
            ctx->pc = 0x28A2E8u;
            goto label_28a2e8;
        }
    }
    ctx->pc = 0x28A1C4u;
label_28a1c4:
    // 0x28a1c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28a1c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28a1c8:
    // 0x28a1c8: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a1cc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x28a1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x28a1d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a1d4: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x28A1D4u;
    {
        const bool branch_taken_0x28a1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a1d4) {
            ctx->pc = 0x28A1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A1D4u;
            // 0x28a1d8: 0x8ca2000c  lw          $v0, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A214u;
            goto label_28a214;
        }
    }
    ctx->pc = 0x28A1DCu;
    // 0x28a1dc: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a1dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a1e0: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a1e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a1e4: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x28a1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1e8: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x28a1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1ec: 0x688c0007  ldl         $t4, 0x7($a0)
    ctx->pc = 0x28a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a1f0: 0x6c8c0000  ldr         $t4, 0x0($a0)
    ctx->pc = 0x28a1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a1f4: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1f8: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a1fc: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x28a1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a200: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x28a200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a204: 0xb08c0007  sdl         $t4, 0x7($a0)
    ctx->pc = 0x28a204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a208: 0xb48c0000  sdr         $t4, 0x0($a0)
    ctx->pc = 0x28a208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a20c: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a20cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x28a210: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x28a210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_28a214:
    // 0x28a214: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a214u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a218: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A218u;
    {
        const bool branch_taken_0x28a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a218) {
            ctx->pc = 0x28A21Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A218u;
            // 0x28a21c: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A254u;
            goto label_28a254;
        }
    }
    ctx->pc = 0x28A220u;
    // 0x28a220: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a224: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a228: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x28a228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a22c: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x28a22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a230: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x28a230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a234: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x28a234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a238: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a23c: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a240: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x28a240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a244: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x28a244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a248: 0xb08c000f  sdl         $t4, 0xF($a0)
    ctx->pc = 0x28a248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a24c: 0xb48c0008  sdr         $t4, 0x8($a0)
    ctx->pc = 0x28a24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a250: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a254:
    // 0x28a254: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x28a254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x28a258: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a258u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a25c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28A25Cu;
    {
        const bool branch_taken_0x28a25c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28a25c) {
            ctx->pc = 0x28A260u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A25Cu;
            // 0x28a260: 0x8ce30004  lw          $v1, 0x4($a3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A298u;
            goto label_28a298;
        }
    }
    ctx->pc = 0x28A264u;
    // 0x28a264: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a268: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a26c: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x28a26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a270: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x28a270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a274: 0x688c0017  ldl         $t4, 0x17($a0)
    ctx->pc = 0x28a274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a278: 0x6c8c0010  ldr         $t4, 0x10($a0)
    ctx->pc = 0x28a278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a27c: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a280: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a284: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x28a284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a288: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x28a288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a28c: 0xb08c0017  sdl         $t4, 0x17($a0)
    ctx->pc = 0x28a28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a290: 0xb48c0010  sdr         $t4, 0x10($a0)
    ctx->pc = 0x28a290u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a294: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x28a294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_28a298:
    // 0x28a298: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x28a298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x28a29c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28a29cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28a2a0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28A2A0u;
    {
        const bool branch_taken_0x28a2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28A2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2A0u;
        // 0x28a2a4: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2a0) {
            ctx->pc = 0x28A2D8u;
            goto label_28a2d8;
        }
    }
    ctx->pc = 0x28A2A8u;
    // 0x28a2a8: 0x68ec0007  ldl         $t4, 0x7($a3)
    ctx->pc = 0x28a2a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a2ac: 0x6cec0000  ldr         $t4, 0x0($a3)
    ctx->pc = 0x28a2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a2b0: 0xb3ac0007  sdl         $t4, 0x7($sp)
    ctx->pc = 0x28a2b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a2b4: 0xb7ac0000  sdr         $t4, 0x0($sp)
    ctx->pc = 0x28a2b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a2b8: 0x688c001f  ldl         $t4, 0x1F($a0)
    ctx->pc = 0x28a2b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a2bc: 0x6c8c0018  ldr         $t4, 0x18($a0)
    ctx->pc = 0x28a2bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a2c0: 0xb0ec0007  sdl         $t4, 0x7($a3)
    ctx->pc = 0x28a2c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a2c4: 0xb4ec0000  sdr         $t4, 0x0($a3)
    ctx->pc = 0x28a2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a2c8: 0x6bac0007  ldl         $t4, 0x7($sp)
    ctx->pc = 0x28a2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
    // 0x28a2cc: 0x6fac0000  ldr         $t4, 0x0($sp)
    ctx->pc = 0x28a2ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x28a2d0: 0xb08c001f  sdl         $t4, 0x1F($a0)
    ctx->pc = 0x28a2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28a2d4: 0xb48c0018  sdr         $t4, 0x18($a0)
    ctx->pc = 0x28a2d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_28a2d8:
    // 0x28a2d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x28a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x28a2dc: 0xca102b  sltu        $v0, $a2, $t2
    ctx->pc = 0x28a2dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x28a2e0: 0x1440ffb9  bnez        $v0, . + 4 + (-0x47 << 2)
    ctx->pc = 0x28A2E0u;
    {
        const bool branch_taken_0x28a2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28A2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A2E0u;
        // 0x28a2e4: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28a2e0) {
            ctx->pc = 0x28A1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a1c8;
        }
    }
    ctx->pc = 0x28A2E8u;
label_28a2e8:
    // 0x28a2e8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x28a2e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28a2ec: 0xe9102b  sltu        $v0, $a3, $t1
    ctx->pc = 0x28a2ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x28a2f0: 0x5440ff67  bnel        $v0, $zero, . + 4 + (-0x99 << 2)
    ctx->pc = 0x28A2F0u;
    {
        const bool branch_taken_0x28a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a2f0) {
            ctx->pc = 0x28A2F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28A2F0u;
            // 0x28a2f4: 0x24e60008  addiu       $a2, $a3, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28A090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28a090;
        }
    }
    ctx->pc = 0x28A2F8u;
label_28a2f8:
    // 0x28a2f8: 0xae6000bc  sw          $zero, 0xBC($s3)
    ctx->pc = 0x28a2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 188), GPR_U32(ctx, 0));
label_28a2fc:
    // 0x28a2fc: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28a2fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28a300:
    // 0x28a300: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x28a300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28a304: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x28a304u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28a308: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x28a308u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28a30c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28a30cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28a310: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x28a310u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28a314: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28a314u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28a318: 0x3e00008  jr          $ra
    ctx->pc = 0x28A318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28A31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28A318u;
        // 0x28a31c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28A318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28A320u;
}
