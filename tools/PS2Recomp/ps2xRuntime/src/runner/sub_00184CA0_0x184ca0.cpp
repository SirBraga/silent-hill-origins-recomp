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

// Function: sub_00184CA0
// Address: 0x184ca0 - 0x184e50
void sub_00184CA0_0x184ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00184CA0_0x184ca0");
#endif

    switch (ctx->pc) {
        case 0x184d00u: goto label_184d00;
        case 0x184d38u: goto label_184d38;
        case 0x184d9cu: goto label_184d9c;
        case 0x184da4u: goto label_184da4;
        case 0x184dacu: goto label_184dac;
        case 0x184db4u: goto label_184db4;
        case 0x184dc0u: goto label_184dc0;
        case 0x184dd0u: goto label_184dd0;
        case 0x184ddcu: goto label_184ddc;
        case 0x184de8u: goto label_184de8;
        case 0x184e18u: goto label_184e18;
        default: break;
    }

    ctx->pc = 0x184ca0u;

    // 0x184ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x184ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x184ca4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x184ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x184ca8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x184ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x184cac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x184cacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x184cb0: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x184cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x184cb4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x184cb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184cb8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x184cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x184cbc: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x184cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x184cc0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x184cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184cc4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x184cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x184cc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x184cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x184ccc: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x184cccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x184cd0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x184cd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x184cd4: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x184CD4u;
    {
        const bool branch_taken_0x184cd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184cd4) {
            ctx->pc = 0x184CD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184CD4u;
            // 0x184cd8: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184CF0u;
            goto label_184cf0;
        }
    }
    ctx->pc = 0x184CDCu;
    // 0x184cdc: 0x8ea20048  lw          $v0, 0x48($s5)
    ctx->pc = 0x184cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 72)));
    // 0x184ce0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x184CE0u;
    {
        const bool branch_taken_0x184ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x184ce0) {
            ctx->pc = 0x184CE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184CE0u;
            // 0x184ce4: 0x8ea20040  lw          $v0, 0x40($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184CF0u;
            goto label_184cf0;
        }
    }
    ctx->pc = 0x184CE8u;
    // 0x184ce8: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x184CE8u;
    {
        const bool branch_taken_0x184ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CE8u;
        // 0x184cec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184ce8) {
            ctx->pc = 0x184E28u;
            goto label_184e28;
        }
    }
    ctx->pc = 0x184CF0u;
label_184cf0:
    // 0x184cf0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x184CF0u;
    {
        const bool branch_taken_0x184cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CF0u;
        // 0x184cf4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cf0) {
            ctx->pc = 0x184D14u;
            goto label_184d14;
        }
    }
    ctx->pc = 0x184CF8u;
    // 0x184cf8: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x184CF8u;
    {
        const bool branch_taken_0x184cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184CF8u;
        // 0x184cfc: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184cf8) {
            ctx->pc = 0x184E2Cu;
            goto label_184e2c;
        }
    }
    ctx->pc = 0x184D00u;
label_184d00:
    // 0x184d00: 0x8ea20038  lw          $v0, 0x38($s5)
    ctx->pc = 0x184d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x184d04: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x184d04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184d08: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x184d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x184d0c: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x184D0Cu;
    {
        const bool branch_taken_0x184d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D0Cu;
        // 0x184d10: 0xaea20038  sw          $v0, 0x38($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d0c) {
            ctx->pc = 0x184D68u;
            goto label_184d68;
        }
    }
    ctx->pc = 0x184D14u;
label_184d14:
    // 0x184d14: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x184d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x184d18: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x184D18u;
    {
        const bool branch_taken_0x184d18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D18u;
        // 0x184d1c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d18) {
            ctx->pc = 0x184E20u;
            goto label_184e20;
        }
    }
    ctx->pc = 0x184D20u;
    // 0x184d20: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x184d20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x184d24: 0x3407ff10  ori         $a3, $zero, 0xFF10
    ctx->pc = 0x184d24u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65296);
    // 0x184d28: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x184d28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x184d2c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x184D2Cu;
    {
        const bool branch_taken_0x184d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D2Cu;
        // 0x184d30: 0x8ea60008  lw          $a2, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d2c) {
            ctx->pc = 0x184D64u;
            goto label_184d64;
        }
    }
    ctx->pc = 0x184D34u;
    // 0x184d34: 0x0  nop
    ctx->pc = 0x184d34u;
    // NOP
label_184d38:
    // 0x184d38: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x184d38u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x184d3c: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x184d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x184d40: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x184d40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x184d44: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x184D44u;
    {
        const bool branch_taken_0x184d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x184d44) {
            ctx->pc = 0x184D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x184D44u;
            // 0x184d48: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x184D68u;
            goto label_184d68;
        }
    }
    ctx->pc = 0x184D4Cu;
    // 0x184d4c: 0x94c20000  lhu         $v0, 0x0($a2)
    ctx->pc = 0x184d4cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x184d50: 0x1047ffeb  beq         $v0, $a3, . + 4 + (-0x15 << 2)
    ctx->pc = 0x184D50u;
    {
        const bool branch_taken_0x184d50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x184D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D50u;
        // 0x184d54: 0xa42823  subu        $a1, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d50) {
            ctx->pc = 0x184D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184d00;
        }
    }
    ctx->pc = 0x184D58u;
    // 0x184d58: 0x28a20005  slti        $v0, $a1, 0x5
    ctx->pc = 0x184d58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x184d5c: 0x1040fff6  beqz        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x184D5Cu;
    {
        const bool branch_taken_0x184d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D5Cu;
        // 0x184d60: 0xc43021  addu        $a2, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d5c) {
            ctx->pc = 0x184D38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_184d38;
        }
    }
    ctx->pc = 0x184D64u;
label_184d64:
    // 0x184d64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x184d64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_184d68:
    // 0x184d68: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x184D68u;
    {
        const bool branch_taken_0x184d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x184D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184D68u;
        // 0x184d6c: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x184d68) {
            ctx->pc = 0x184E1Cu;
            goto label_184e1c;
        }
    }
    ctx->pc = 0x184D70u;
    // 0x184d70: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x184d70u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184d74: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x184d74u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x184d78: 0x3c100034  lui         $s0, 0x34
    ctx->pc = 0x184d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    // 0x184d7c: 0xaeb40044  sw          $s4, 0x44($s5)
    ctx->pc = 0x184d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 20));
    // 0x184d80: 0x3c120034  lui         $s2, 0x34
    ctx->pc = 0x184d80u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)52 << 16));
    // 0x184d84: 0x3c130034  lui         $s3, 0x34
    ctx->pc = 0x184d84u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)52 << 16));
    // 0x184d88: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x184d88u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x184d8c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x184d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x184d90: 0xaea20060  sw          $v0, 0x60($s5)
    ctx->pc = 0x184d90u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
    // 0x184d94: 0xc0438ec  jal         func_10E3B0
    ctx->pc = 0x184D94u;
    SET_GPR_U32(ctx, 31, 0x184D9Cu);
    ctx->pc = 0x184D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D94u;
    // 0x184d98: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E3B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10E3B0u, 0x184D94u, 0x184D9Cu)) {
        return;
    }
    ctx->pc = 0x184D9Cu;
label_184d9c:
    // 0x184d9c: 0xc04309e  jal         func_10C278
    ctx->pc = 0x184D9Cu;
    SET_GPR_U32(ctx, 31, 0x184DA4u);
    ctx->pc = 0x184DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184D9Cu;
    // 0x184da0: 0x8e0482f0  lw          $a0, -0x7D10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294935280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C278u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x10C278u, 0x184D9Cu, 0x184DA4u)) {
        return;
    }
    ctx->pc = 0x184DA4u;
label_184da4:
    // 0x184da4: 0xc0bae56  jal         func_2EB958
    ctx->pc = 0x184DA4u;
    SET_GPR_U32(ctx, 31, 0x184DACu);
    ctx->pc = 0x184DA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DA4u;
    // 0x184da8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB958u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB958u, 0x184DA4u, 0x184DACu)) {
        return;
    }
    ctx->pc = 0x184DACu;
label_184dac:
    // 0x184dac: 0xc0bae7e  jal         func_2EB9F8
    ctx->pc = 0x184DACu;
    SET_GPR_U32(ctx, 31, 0x184DB4u);
    ctx->pc = 0x184DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DACu;
    // 0x184db0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EB9F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EB9F8u, 0x184DACu, 0x184DB4u)) {
        return;
    }
    ctx->pc = 0x184DB4u;
label_184db4:
    // 0x184db4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x184db4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x184db8: 0xc0c545a  jal         func_315168
    ctx->pc = 0x184DB8u;
    SET_GPR_U32(ctx, 31, 0x184DC0u);
    ctx->pc = 0x184DBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DB8u;
    // 0x184dbc: 0x3405c000  ori         $a1, $zero, 0xC000 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x184DB8u, 0x184DC0u)) {
        return;
    }
    ctx->pc = 0x184DC0u;
label_184dc0:
    // 0x184dc0: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x184dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x184dc4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x184dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x184dc8: 0xc0c545a  jal         func_315168
    ctx->pc = 0x184DC8u;
    SET_GPR_U32(ctx, 31, 0x184DD0u);
    ctx->pc = 0x184DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DC8u;
    // 0x184dcc: 0xae428a20  sw          $v0, -0x75E0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294937120), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x315168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x315168u, 0x184DC8u, 0x184DD0u)) {
        return;
    }
    ctx->pc = 0x184DD0u;
label_184dd0:
    // 0x184dd0: 0x24046000  addiu       $a0, $zero, 0x6000
    ctx->pc = 0x184dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x184dd4: 0xc0c99ac  jal         func_3266B0
    ctx->pc = 0x184DD4u;
    SET_GPR_U32(ctx, 31, 0x184DDCu);
    ctx->pc = 0x184DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DD4u;
    // 0x184dd8: 0xae628a24  sw          $v0, -0x75DC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294937124), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3266B0u, 0x184DD4u, 0x184DDCu)) {
        return;
    }
    ctx->pc = 0x184DDCu;
label_184ddc:
    // 0x184ddc: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x184ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x184de0: 0xc0c99ac  jal         func_3266B0
    ctx->pc = 0x184DE0u;
    SET_GPR_U32(ctx, 31, 0x184DE8u);
    ctx->pc = 0x184DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184DE0u;
    // 0x184de4: 0xae228a28  sw          $v0, -0x75D8($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294937128), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3266B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3266B0u, 0x184DE0u, 0x184DE8u)) {
        return;
    }
    ctx->pc = 0x184DE8u;
label_184de8:
    // 0x184de8: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x184de8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x184dec: 0x8e458a20  lw          $a1, -0x75E0($s2)
    ctx->pc = 0x184decu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294937120)));
    // 0x184df0: 0x8e278a28  lw          $a3, -0x75D8($s1)
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294937128)));
    // 0x184df4: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x184df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x184df8: 0x8e698a24  lw          $t1, -0x75DC($s3)
    ctx->pc = 0x184df8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294937124)));
    // 0x184dfc: 0x2484bc40  addiu       $a0, $a0, -0x43C0
    ctx->pc = 0x184dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949952));
    // 0x184e00: 0xac628a2c  sw          $v0, -0x75D4($v1)
    ctx->pc = 0x184e00u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x338A2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x338A2Cu, _value); } while (0);
    // 0x184e04: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x184e04u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184e08: 0x3406c000  ori         $a2, $zero, 0xC000
    ctx->pc = 0x184e08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x184e0c: 0x24086000  addiu       $t0, $zero, 0x6000
    ctx->pc = 0x184e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    // 0x184e10: 0xc0604c8  jal         func_181320
    ctx->pc = 0x184E10u;
    SET_GPR_U32(ctx, 31, 0x184E18u);
    ctx->pc = 0x184E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x184E10u;
    // 0x184e14: 0x240b0800  addiu       $t3, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x181320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x181320u, 0x184E10u, 0x184E18u)) {
        return;
    }
    ctx->pc = 0x184E18u;
label_184e18:
    // 0x184e18: 0xaeb40068  sw          $s4, 0x68($s5)
    ctx->pc = 0x184e18u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 20));
label_184e1c:
    // 0x184e1c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x184e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_184e20:
    // 0x184e20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x184e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x184e24: 0xaea30040  sw          $v1, 0x40($s5)
    ctx->pc = 0x184e24u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 3));
label_184e28:
    // 0x184e28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x184e28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_184e2c:
    // 0x184e2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x184e2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x184e30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x184e30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x184e34: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x184e34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x184e38: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x184e38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x184e3c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x184e3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x184e40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x184e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x184e44: 0x3e00008  jr          $ra
    ctx->pc = 0x184E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x184E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x184E44u;
        // 0x184e48: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x184E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x184E4Cu;
    // 0x184e4c: 0x0  nop
    ctx->pc = 0x184e4cu;
    // NOP
    ctx->pc = 0x184e50u;
}
