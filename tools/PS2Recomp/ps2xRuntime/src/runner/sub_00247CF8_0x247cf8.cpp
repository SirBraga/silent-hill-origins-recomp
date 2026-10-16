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

// Function: sub_00247CF8
// Address: 0x247cf8 - 0x247f70
void sub_00247CF8_0x247cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00247CF8_0x247cf8");
#endif

    switch (ctx->pc) {
        case 0x247d38u: goto label_247d38;
        case 0x247d40u: goto label_247d40;
        case 0x247d58u: goto label_247d58;
        case 0x247d64u: goto label_247d64;
        case 0x247d94u: goto label_247d94;
        case 0x247db0u: goto label_247db0;
        case 0x247dbcu: goto label_247dbc;
        case 0x247de8u: goto label_247de8;
        case 0x247e18u: goto label_247e18;
        case 0x247e54u: goto label_247e54;
        case 0x247e88u: goto label_247e88;
        case 0x247f48u: goto label_247f48;
        default: break;
    }

    ctx->pc = 0x247cf8u;

    // 0x247cf8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x247cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x247cfc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x247cfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x247d00: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x247d00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x247d04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x247d04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x247d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x247d0c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x247d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247d10: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x247d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x247d14: 0x24120100  addiu       $s2, $zero, 0x100
    ctx->pc = 0x247d14u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247d1c: 0x12320004  beq         $s1, $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x247D1Cu;
    {
        const bool branch_taken_0x247d1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x247D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D1Cu;
        // 0x247d20: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d1c) {
            ctx->pc = 0x247D30u;
            goto label_247d30;
        }
    }
    ctx->pc = 0x247D24u;
    // 0x247d24: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x247d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x247d28: 0x56220088  bnel        $s1, $v0, . + 4 + (0x88 << 2)
    ctx->pc = 0x247D28u;
    {
        const bool branch_taken_0x247d28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x247d28) {
            ctx->pc = 0x247D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x247D28u;
            // 0x247d2c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x247F4Cu;
            goto label_247f4c;
        }
    }
    ctx->pc = 0x247D30u;
label_247d30:
    // 0x247d30: 0xc091e72  jal         func_2479C8
    ctx->pc = 0x247D30u;
    SET_GPR_U32(ctx, 31, 0x247D38u);
    ctx->pc = 0x2479C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2479C8u, 0x247D30u, 0x247D38u)) {
        return;
    }
    ctx->pc = 0x247D38u;
label_247d38:
    // 0x247d38: 0xc091e4c  jal         func_247930
    ctx->pc = 0x247D38u;
    SET_GPR_U32(ctx, 31, 0x247D40u);
    ctx->pc = 0x247D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D38u;
    // 0x247d3c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247930u, 0x247D38u, 0x247D40u)) {
        return;
    }
    ctx->pc = 0x247D40u;
label_247d40:
    // 0x247d40: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x247d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
    // 0x247d44: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247d44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247d48: 0x5287c  dsll32      $a1, $a1, 1
    ctx->pc = 0x247d48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 1));
    // 0x247d4c: 0x452825  or          $a1, $v0, $a1
    ctx->pc = 0x247d4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x247d50: 0xc091e66  jal         func_247998
    ctx->pc = 0x247D50u;
    SET_GPR_U32(ctx, 31, 0x247D58u);
    ctx->pc = 0x247D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D50u;
    // 0x247d54: 0x24040050  addiu       $a0, $zero, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247D50u, 0x247D58u)) {
        return;
    }
    ctx->pc = 0x247D58u;
label_247d58:
    // 0x247d58: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x247d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x247d5c: 0xc091e66  jal         func_247998
    ctx->pc = 0x247D5Cu;
    SET_GPR_U32(ctx, 31, 0x247D64u);
    ctx->pc = 0x247D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D5Cu;
    // 0x247d60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247D5Cu, 0x247D64u)) {
        return;
    }
    ctx->pc = 0x247D64u;
label_247d64:
    // 0x247d64: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x247d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x247d68: 0x12220005  beq         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x247D68u;
    {
        const bool branch_taken_0x247d68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x247d68) {
            ctx->pc = 0x247D80u;
            goto label_247d80;
        }
    }
    ctx->pc = 0x247D70u;
    // 0x247d70: 0x1232000a  beq         $s1, $s2, . + 4 + (0xA << 2)
    ctx->pc = 0x247D70u;
    {
        const bool branch_taken_0x247d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 18));
        ctx->pc = 0x247D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D70u;
        // 0x247d74: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d70) {
            ctx->pc = 0x247D9Cu;
            goto label_247d9c;
        }
    }
    ctx->pc = 0x247D78u;
    // 0x247d78: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x247D78u;
    {
        const bool branch_taken_0x247d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247d78) {
            ctx->pc = 0x247DB4u;
            goto label_247db4;
        }
    }
    ctx->pc = 0x247D80u;
label_247d80:
    // 0x247d80: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247d84: 0x52cb8  dsll        $a1, $a1, 18
    ctx->pc = 0x247d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 18);
    // 0x247d88: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x247d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
    // 0x247d8c: 0xc091e66  jal         func_247998
    ctx->pc = 0x247D8Cu;
    SET_GPR_U32(ctx, 31, 0x247D94u);
    ctx->pc = 0x247D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247D8Cu;
    // 0x247d90: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247D8Cu, 0x247D94u)) {
        return;
    }
    ctx->pc = 0x247D94u;
label_247d94:
    // 0x247d94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x247D94u;
    {
        const bool branch_taken_0x247d94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247D94u;
        // 0x247d98: 0x24040053  addiu       $a0, $zero, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247d94) {
            ctx->pc = 0x247DB4u;
            goto label_247db4;
        }
    }
    ctx->pc = 0x247D9Cu;
label_247d9c:
    // 0x247d9c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x247d9cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x247da0: 0x52d78  dsll        $a1, $a1, 21
    ctx->pc = 0x247da0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 21);
    // 0x247da4: 0x34a50010  ori         $a1, $a1, 0x10
    ctx->pc = 0x247da4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16);
    // 0x247da8: 0xc091e66  jal         func_247998
    ctx->pc = 0x247DA8u;
    SET_GPR_U32(ctx, 31, 0x247DB0u);
    ctx->pc = 0x247DACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DA8u;
    // 0x247dac: 0x24040052  addiu       $a0, $zero, 0x52 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247DA8u, 0x247DB0u)) {
        return;
    }
    ctx->pc = 0x247DB0u;
label_247db0:
    // 0x247db0: 0x24040053  addiu       $a0, $zero, 0x53
    ctx->pc = 0x247db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
label_247db4:
    // 0x247db4: 0xc091e66  jal         func_247998
    ctx->pc = 0x247DB4u;
    SET_GPR_U32(ctx, 31, 0x247DBCu);
    ctx->pc = 0x247DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DB4u;
    // 0x247db8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x247998u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x247998u, 0x247DB4u, 0x247DBCu)) {
        return;
    }
    ctx->pc = 0x247DBCu;
label_247dbc:
    // 0x247dbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x247dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x247dc0: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247DC0u;
    {
        const bool branch_taken_0x247dc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x247DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247DC0u;
        // 0x247dc4: 0x260802d  daddu       $s0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247dc0) {
            ctx->pc = 0x247DDCu;
            goto label_247ddc;
        }
    }
    ctx->pc = 0x247DC8u;
    // 0x247dc8: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x247dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x247dcc: 0x1222001e  beq         $s1, $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x247DCCu;
    {
        const bool branch_taken_0x247dcc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x247dcc) {
            ctx->pc = 0x247E48u;
            goto label_247e48;
        }
    }
    ctx->pc = 0x247DD4u;
    // 0x247dd4: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x247DD4u;
    {
        const bool branch_taken_0x247dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247dd4) {
            ctx->pc = 0x247F40u;
            goto label_247f40;
        }
    }
    ctx->pc = 0x247DDCu;
label_247ddc:
    // 0x247ddc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x247ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x247de0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x247DE0u;
    SET_GPR_U32(ctx, 31, 0x247DE8u);
    ctx->pc = 0x247DE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247DE0u;
    // 0x247de4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x247DE0u, 0x247DE8u)) {
        return;
    }
    ctx->pc = 0x247DE8u;
label_247de8:
    // 0x247de8: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x247de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x247dec: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x247decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x247df0: 0x34428004  ori         $v0, $v0, 0x8004
    ctx->pc = 0x247df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
    // 0x247df4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x247df4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247df8: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x247df8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x247dfc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247e00: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247e04: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x247e04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x247e08: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x247e0c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247e10: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247e10u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247e14: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247e18:
    // 0x247e18: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x247e18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x247e1c: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x247e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247e20: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x247e20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247e24: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x247e24u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x247e28: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x247e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x247e2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247e30: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247e34: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x247e34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x247e38: 0x4a1fff7  bgez        $a1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x247E38u;
    {
        const bool branch_taken_0x247e38 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x247E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247E38u;
        // 0x247e3c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e38) {
            ctx->pc = 0x247E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247e18;
        }
    }
    ctx->pc = 0x247E40u;
    // 0x247e40: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x247E40u;
    {
        const bool branch_taken_0x247e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e40) {
            ctx->pc = 0x247F40u;
            goto label_247f40;
        }
    }
    ctx->pc = 0x247E48u;
label_247e48:
    // 0x247e48: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x247e48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x247e4c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x247E4Cu;
    SET_GPR_U32(ctx, 31, 0x247E54u);
    ctx->pc = 0x247E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x247E4Cu;
    // 0x247e50: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x247E4Cu, 0x247E54u)) {
        return;
    }
    ctx->pc = 0x247E54u;
label_247e54:
    // 0x247e54: 0x3402c000  ori         $v0, $zero, 0xC000
    ctx->pc = 0x247e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x247e58: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x247e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x247e5c: 0x34428040  ori         $v0, $v0, 0x8040
    ctx->pc = 0x247e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32832);
    // 0x247e60: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247e64: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x247e64u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x247e68: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x247e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x247e6c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x247e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247e70: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x247e70u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x247e74: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x247e78: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247e7c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x247e7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247e80: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x247e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x247e84: 0x0  nop
    ctx->pc = 0x247e84u;
    // NOP
label_247e88:
    // 0x247e88: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x247e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x247e8c: 0x8c84412c  lw          $a0, 0x412C($a0)
    ctx->pc = 0x247e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x247e90: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x247e90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x247e94: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x247e94u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x247e98: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x247e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x247e9c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247ea0: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x247ea0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247ea4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x247ea4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x247ea8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x247ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x247eac: 0x24830010  addiu       $v1, $a0, 0x10
    ctx->pc = 0x247eacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x247eb0: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247eb4: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247eb4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247eb8: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x247eb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x247ebc: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x247ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x247ec0: 0x24830020  addiu       $v1, $a0, 0x20
    ctx->pc = 0x247ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x247ec4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247ec8: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247ec8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247ecc: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x247eccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x247ed0: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x247ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x247ed4: 0x24830030  addiu       $v1, $a0, 0x30
    ctx->pc = 0x247ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x247ed8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247ed8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247edc: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247edcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247ee0: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x247ee0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x247ee4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x247ee4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x247ee8: 0x24830040  addiu       $v1, $a0, 0x40
    ctx->pc = 0x247ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x247eec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247eecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247ef0: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247ef0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247ef4: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x247ef4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x247ef8: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x247ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x247efc: 0x24830050  addiu       $v1, $a0, 0x50
    ctx->pc = 0x247efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x247f00: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247f00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247f04: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247f04u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247f08: 0x7a020060  lq          $v0, 0x60($s0)
    ctx->pc = 0x247f08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x247f0c: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x247f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x247f10: 0x24830060  addiu       $v1, $a0, 0x60
    ctx->pc = 0x247f10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x247f14: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247f14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247f18: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x247f18u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247f1c: 0x7a020070  lq          $v0, 0x70($s0)
    ctx->pc = 0x247f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x247f20: 0x7c820060  sq          $v0, 0x60($a0)
    ctx->pc = 0x247f20u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), GPR_VEC(ctx, 2));
    // 0x247f24: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x247f24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x247f28: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x247f28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x247f2c: 0xac24412c  sw          $a0, 0x412C($at)
    ctx->pc = 0x247f2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x247f30: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x247f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x247f34: 0x4a1ffd4  bgez        $a1, . + 4 + (-0x2C << 2)
    ctx->pc = 0x247F34u;
    {
        const bool branch_taken_0x247f34 = (GPR_S64(ctx, 5) >= 0);
        ctx->pc = 0x247F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F34u;
        // 0x247f38: 0x26100080  addiu       $s0, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f34) {
            ctx->pc = 0x247E88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_247e88;
        }
    }
    ctx->pc = 0x247F3Cu;
    // 0x247f3c: 0x0  nop
    ctx->pc = 0x247f3cu;
    // NOP
label_247f40:
    // 0x247f40: 0xc091e72  jal         func_2479C8
    ctx->pc = 0x247F40u;
    SET_GPR_U32(ctx, 31, 0x247F48u);
    ctx->pc = 0x2479C8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2479C8u, 0x247F40u, 0x247F48u)) {
        return;
    }
    ctx->pc = 0x247F48u;
label_247f48:
    // 0x247f48: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x247f48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_247f4c:
    // 0x247f4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x247f4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247f50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x247f50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247f54: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x247f54u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247f58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247f58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x247F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x247F5Cu;
        // 0x247f60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247F5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247F64u;
    // 0x247f64: 0x0  nop
    ctx->pc = 0x247f64u;
    // NOP
    // 0x247f68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x247f68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x247f6c: 0x0  nop
    ctx->pc = 0x247f6cu;
    // NOP
    ctx->pc = 0x247f70u;
}
