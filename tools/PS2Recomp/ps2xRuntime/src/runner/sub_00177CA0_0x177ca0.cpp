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

// Function: sub_00177CA0
// Address: 0x177ca0 - 0x177e10
void sub_00177CA0_0x177ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177CA0_0x177ca0");
#endif

    switch (ctx->pc) {
        case 0x177cd8u: goto label_177cd8;
        case 0x177ce8u: goto label_177ce8;
        case 0x177cfcu: goto label_177cfc;
        case 0x177d04u: goto label_177d04;
        case 0x177d18u: goto label_177d18;
        case 0x177d58u: goto label_177d58;
        case 0x177d78u: goto label_177d78;
        case 0x177d84u: goto label_177d84;
        case 0x177d88u: goto label_177d88;
        case 0x177ddcu: goto label_177ddc;
        default: break;
    }

    ctx->pc = 0x177ca0u;

    // 0x177ca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x177ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x177ca4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x177ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x177ca8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x177ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x177cac: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x177cacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x177cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x177cb4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x177cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x177cb8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x177cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x177cbc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x177cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x177cc0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x177cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x177cc4: 0x8e9200a8  lw          $s2, 0xA8($s4)
    ctx->pc = 0x177cc4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 168)));
    // 0x177cc8: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
    ctx->pc = 0x177CC8u;
    {
        const bool branch_taken_0x177cc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x177CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177CC8u;
        // 0x177ccc: 0x3c020069  lui         $v0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177cc8) {
            ctx->pc = 0x177D80u;
            goto label_177d80;
        }
    }
    ctx->pc = 0x177CD0u;
    // 0x177cd0: 0x24556a48  addiu       $s5, $v0, 0x6A48
    ctx->pc = 0x177cd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 27208));
    // 0x177cd4: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x177cd4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_177cd8:
    // 0x177cd8: 0x8e530004  lw          $s3, 0x4($s2)
    ctx->pc = 0x177cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x177cdc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177ce0: 0xc081268  jal         func_2049A0
    ctx->pc = 0x177CE0u;
    SET_GPR_U32(ctx, 31, 0x177CE8u);
    ctx->pc = 0x177CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CE0u;
    // 0x177ce4: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2049A0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2049A0u, 0x177CE0u, 0x177CE8u)) {
        return;
    }
    ctx->pc = 0x177CE8u;
label_177ce8:
    // 0x177ce8: 0x12200023  beqz        $s1, . + 4 + (0x23 << 2)
    ctx->pc = 0x177CE8u;
    {
        const bool branch_taken_0x177ce8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x177ce8) {
            ctx->pc = 0x177D78u;
            goto label_177d78;
        }
    }
    ctx->pc = 0x177CF0u;
    // 0x177cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x177cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177cf4: 0xc080dd6  jal         func_203758
    ctx->pc = 0x177CF4u;
    SET_GPR_U32(ctx, 31, 0x177CFCu);
    ctx->pc = 0x177CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CF4u;
    // 0x177cf8: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x203758u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x203758u, 0x177CF4u, 0x177CFCu)) {
        return;
    }
    ctx->pc = 0x177CFCu;
label_177cfc:
    // 0x177cfc: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x177CFCu;
    SET_GPR_U32(ctx, 31, 0x177D04u);
    ctx->pc = 0x177D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177CFCu;
    // 0x177d00: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x177CFCu, 0x177D04u)) {
        return;
    }
    ctx->pc = 0x177D04u;
label_177d04:
    // 0x177d04: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177d08: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x177D08u;
    {
        const bool branch_taken_0x177d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D08u;
        // 0x177d0c: 0xae15000c  sw          $s5, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d08) {
            ctx->pc = 0x177D70u;
            goto label_177d70;
        }
    }
    ctx->pc = 0x177D10u;
    // 0x177d10: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x177d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177d14: 0x0  nop
    ctx->pc = 0x177d14u;
    // NOP
label_177d18:
    // 0x177d18: 0x50800013  beql        $a0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x177D18u;
    {
        const bool branch_taken_0x177d18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d18) {
            ctx->pc = 0x177D1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D18u;
            // 0x177d1c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177D68u;
            goto label_177d68;
        }
    }
    ctx->pc = 0x177D20u;
    // 0x177d20: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x177d20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177d24: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177D24u;
    {
        const bool branch_taken_0x177d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D24u;
        // 0x177d28: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d24) {
            ctx->pc = 0x177D34u;
            goto label_177d34;
        }
    }
    ctx->pc = 0x177D2Cu;
    // 0x177d2c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177D2Cu;
    {
        const bool branch_taken_0x177d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D2Cu;
        // 0x177d30: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d2c) {
            ctx->pc = 0x177D38u;
            goto label_177d38;
        }
    }
    ctx->pc = 0x177D34u;
label_177d34:
    // 0x177d34: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x177d34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_177d38:
    // 0x177d38: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177d3c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177D3Cu;
    {
        const bool branch_taken_0x177d3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D3Cu;
        // 0x177d40: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d3c) {
            ctx->pc = 0x177D4Cu;
            goto label_177d4c;
        }
    }
    ctx->pc = 0x177D44u;
    // 0x177d44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177D44u;
    {
        const bool branch_taken_0x177d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177D44u;
        // 0x177d48: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177d44) {
            ctx->pc = 0x177D50u;
            goto label_177d50;
        }
    }
    ctx->pc = 0x177D4Cu;
label_177d4c:
    // 0x177d4c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x177d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_177d50:
    // 0x177d50: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x177D50u;
    SET_GPR_U32(ctx, 31, 0x177D58u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x177D50u, 0x177D58u)) {
        return;
    }
    ctx->pc = 0x177D58u;
label_177d58:
    // 0x177d58: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177d5c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177d60: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x177d60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x177d64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177d68:
    // 0x177d68: 0x5440ffeb  bnel        $v0, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x177D68u;
    {
        const bool branch_taken_0x177d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x177d68) {
            ctx->pc = 0x177D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D68u;
            // 0x177d6c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177d18;
        }
    }
    ctx->pc = 0x177D70u;
label_177d70:
    // 0x177d70: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x177D70u;
    SET_GPR_U32(ctx, 31, 0x177D78u);
    ctx->pc = 0x177D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177D70u;
    // 0x177d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x177D70u, 0x177D78u)) {
        return;
    }
    ctx->pc = 0x177D78u;
label_177d78:
    // 0x177d78: 0x5660ffd7  bnel        $s3, $zero, . + 4 + (-0x29 << 2)
    ctx->pc = 0x177D78u;
    {
        const bool branch_taken_0x177d78 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x177d78) {
            ctx->pc = 0x177D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D78u;
            // 0x177d7c: 0x8e510000  lw          $s1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177CD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177cd8;
        }
    }
    ctx->pc = 0x177D80u;
label_177d80:
    // 0x177d80: 0x269000a4  addiu       $s0, $s4, 0xA4
    ctx->pc = 0x177d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 164));
label_177d84:
    // 0x177d84: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x177d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_177d88:
    // 0x177d88: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x177D88u;
    {
        const bool branch_taken_0x177d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d88) {
            ctx->pc = 0x177D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177D88u;
            // 0x177d8c: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177DECu;
            goto label_177dec;
        }
    }
    ctx->pc = 0x177D90u;
    // 0x177d90: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x177d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x177d94: 0x0  nop
    ctx->pc = 0x177d94u;
    // NOP
    // 0x177d98: 0x1080fffb  beqz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x177D98u;
    {
        const bool branch_taken_0x177d98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x177d98) {
            ctx->pc = 0x177D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177d88;
        }
    }
    ctx->pc = 0x177DA0u;
    // 0x177da0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x177da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x177da4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x177DA4u;
    {
        const bool branch_taken_0x177da4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DA4u;
        // 0x177da8: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177da4) {
            ctx->pc = 0x177DB8u;
            goto label_177db8;
        }
    }
    ctx->pc = 0x177DACu;
    // 0x177dac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x177DACu;
    {
        const bool branch_taken_0x177dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DACu;
        // 0x177db0: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dac) {
            ctx->pc = 0x177DBCu;
            goto label_177dbc;
        }
    }
    ctx->pc = 0x177DB4u;
    // 0x177db4: 0x0  nop
    ctx->pc = 0x177db4u;
    // NOP
label_177db8:
    // 0x177db8: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x177db8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_177dbc:
    // 0x177dbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x177dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x177dc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x177DC0u;
    {
        const bool branch_taken_0x177dc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x177DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DC0u;
        // 0x177dc4: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dc0) {
            ctx->pc = 0x177DD0u;
            goto label_177dd0;
        }
    }
    ctx->pc = 0x177DC8u;
    // 0x177dc8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x177DC8u;
    {
        const bool branch_taken_0x177dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DC8u;
        // 0x177dcc: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177dc8) {
            ctx->pc = 0x177DD4u;
            goto label_177dd4;
        }
    }
    ctx->pc = 0x177DD0u;
label_177dd0:
    // 0x177dd0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x177dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_177dd4:
    // 0x177dd4: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x177DD4u;
    SET_GPR_U32(ctx, 31, 0x177DDCu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x177DD4u, 0x177DDCu)) {
        return;
    }
    ctx->pc = 0x177DDCu;
label_177ddc:
    // 0x177ddc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x177ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x177de0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x177de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x177de4: 0x1000ffe7  b           . + 4 + (-0x19 << 2)
    ctx->pc = 0x177DE4u;
    {
        const bool branch_taken_0x177de4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x177DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177DE4u;
        // 0x177de8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177de4) {
            ctx->pc = 0x177D84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177d84;
        }
    }
    ctx->pc = 0x177DECu;
label_177dec:
    // 0x177dec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x177decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x177df0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x177df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x177df4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x177df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x177df8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x177df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177dfc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x177dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x177e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177e04: 0x3e00008  jr          $ra
    ctx->pc = 0x177E04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177E04u;
        // 0x177e08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177E04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177E0Cu;
    // 0x177e0c: 0x0  nop
    ctx->pc = 0x177e0cu;
    // NOP
    ctx->pc = 0x177e10u;
}
