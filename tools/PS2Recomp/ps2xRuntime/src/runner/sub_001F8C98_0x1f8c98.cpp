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

// Function: sub_001F8C98
// Address: 0x1f8c98 - 0x1f8fc8
void sub_001F8C98_0x1f8c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8C98_0x1f8c98");
#endif

    switch (ctx->pc) {
        case 0x1f8d00u: goto label_1f8d00;
        case 0x1f8d44u: goto label_1f8d44;
        case 0x1f8d6cu: goto label_1f8d6c;
        case 0x1f8d80u: goto label_1f8d80;
        case 0x1f8da8u: goto label_1f8da8;
        case 0x1f8e20u: goto label_1f8e20;
        case 0x1f8e44u: goto label_1f8e44;
        case 0x1f8e74u: goto label_1f8e74;
        case 0x1f8e84u: goto label_1f8e84;
        case 0x1f8eacu: goto label_1f8eac;
        case 0x1f8f00u: goto label_1f8f00;
        case 0x1f8f10u: goto label_1f8f10;
        case 0x1f8f28u: goto label_1f8f28;
        case 0x1f8f48u: goto label_1f8f48;
        case 0x1f8f64u: goto label_1f8f64;
        default: break;
    }

    ctx->pc = 0x1f8c98u;

    // 0x1f8c98: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x1f8c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
    // 0x1f8c9c: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x1f8c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
    // 0x1f8ca0: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x1f8ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
    // 0x1f8ca4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x1f8ca4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ca8: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x1f8ca8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
    // 0x1f8cac: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x1f8cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
    // 0x1f8cb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f8cb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cb4: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x1f8cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
    // 0x1f8cb8: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x1f8cb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cbc: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x1f8cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
    // 0x1f8cc0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f8cc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8cc4: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x1f8cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
    // 0x1f8cc8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1f8cc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ccc: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x1f8cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
    // 0x1f8cd0: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x1f8cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
    // 0x1f8cd4: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x1f8cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
    // 0x1f8cd8: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x1f8cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
    // 0x1f8cdc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x1f8cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f8ce0: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x1f8ce0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1f8ce4: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x1f8ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
    // 0x1f8ce8: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x1f8ce8u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f8cec: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x1f8cecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1f8cf0: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x1f8cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
    // 0x1f8cf4: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x1f8cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
    // 0x1f8cf8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x1F8CF8u;
    {
        const bool branch_taken_0x1f8cf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8CF8u;
        // 0x1f8cfc: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8cf8) {
            ctx->pc = 0x1F8E30u;
            goto label_1f8e30;
        }
    }
    ctx->pc = 0x1F8D00u;
label_1f8d00:
    // 0x1f8d00: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1f8d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f8d04: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8D04u;
    {
        const bool branch_taken_0x1f8d04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d04) {
            ctx->pc = 0x1F8D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8D04u;
            // 0x1f8d08: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8D14u;
            goto label_1f8d14;
        }
    }
    ctx->pc = 0x1F8D0Cu;
    // 0x1f8d0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8D0Cu;
    {
        const bool branch_taken_0x1f8d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D0Cu;
        // 0x1f8d10: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d0c) {
            ctx->pc = 0x1F8D24u;
            goto label_1f8d24;
        }
    }
    ctx->pc = 0x1F8D14u;
label_1f8d14:
    // 0x1f8d14: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1f8d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1f8d18: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x1f8d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x1f8d1c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1f8d1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1f8d20: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x1f8d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1f8d24:
    // 0x1f8d24: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
    ctx->pc = 0x1F8D24u;
    {
        const bool branch_taken_0x1f8d24 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D24u;
        // 0x1f8d28: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d24) {
            ctx->pc = 0x1F8D50u;
            goto label_1f8d50;
        }
    }
    ctx->pc = 0x1F8D2Cu;
    // 0x1f8d2c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1f8d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f8d30: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f8d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f8d34: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f8d34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8d38: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x1f8d38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    // 0x1f8d3c: 0xc07e26c  jal         func_1F89B0
    ctx->pc = 0x1F8D3Cu;
    SET_GPR_U32(ctx, 31, 0x1F8D44u);
    ctx->pc = 0x1F8D40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D3Cu;
    // 0x1f8d40: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F89B0u, 0x1F8D3Cu, 0x1F8D44u)) {
        return;
    }
    ctx->pc = 0x1F8D44u;
label_1f8d44:
    // 0x1f8d44: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f8d44u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d48: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1F8D48u;
    {
        const bool branch_taken_0x1f8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D48u;
        // 0x1f8d4c: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d48) {
            ctx->pc = 0x1F8D84u;
            goto label_1f8d84;
        }
    }
    ctx->pc = 0x1F8D50u;
label_1f8d50:
    // 0x1f8d50: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8D50u;
    {
        const bool branch_taken_0x1f8d50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D50u;
        // 0x1f8d54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d50) {
            ctx->pc = 0x1F8D74u;
            goto label_1f8d74;
        }
    }
    ctx->pc = 0x1F8D58u;
    // 0x1f8d58: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f8d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f8d5c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1f8d5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d60: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f8d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8d64: 0xc07e26c  jal         func_1F89B0
    ctx->pc = 0x1F8D64u;
    SET_GPR_U32(ctx, 31, 0x1F8D6Cu);
    ctx->pc = 0x1F8D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D64u;
    // 0x1f8d68: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F89B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F89B0u, 0x1F8D64u, 0x1F8D6Cu)) {
        return;
    }
    ctx->pc = 0x1F8D6Cu;
label_1f8d6c:
    // 0x1f8d6c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8D6Cu;
    {
        const bool branch_taken_0x1f8d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D6Cu;
        // 0x1f8d70: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d6c) {
            ctx->pc = 0x1F8D84u;
            goto label_1f8d84;
        }
    }
    ctx->pc = 0x1F8D74u;
label_1f8d74:
    // 0x1f8d74: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1f8d74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f8d78: 0xc07e236  jal         func_1F88D8
    ctx->pc = 0x1F8D78u;
    SET_GPR_U32(ctx, 31, 0x1F8D80u);
    ctx->pc = 0x1F8D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8D78u;
    // 0x1f8d7c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F88D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F88D8u, 0x1F8D78u, 0x1F8D80u)) {
        return;
    }
    ctx->pc = 0x1F8D80u;
label_1f8d80:
    // 0x1f8d80: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1f8d80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f8d84:
    // 0x1f8d84: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F8D84u;
    {
        const bool branch_taken_0x1f8d84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D84u;
        // 0x1f8d88: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d84) {
            ctx->pc = 0x1F8E10u;
            goto label_1f8e10;
        }
    }
    ctx->pc = 0x1F8D8Cu;
    // 0x1f8d8c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F8D8Cu;
    {
        const bool branch_taken_0x1f8d8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8D8Cu;
        // 0x1f8d90: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8d8c) {
            ctx->pc = 0x1F8E08u;
            goto label_1f8e08;
        }
    }
    ctx->pc = 0x1F8D94u;
    // 0x1f8d94: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F8D94u;
    {
        const bool branch_taken_0x1f8d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8d94) {
            ctx->pc = 0x1F8D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8D94u;
            // 0x1f8d98: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8E14u;
            goto label_1f8e14;
        }
    }
    ctx->pc = 0x1F8D9Cu;
    // 0x1f8d9c: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x1f8d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f8da0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1f8da0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8da4: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x1f8da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_1f8da8:
    // 0x1f8da8: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x1f8da8u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8dac: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x1f8dacu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f8db0: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x1f8db0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f8db4: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x1f8db4u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f8db8: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x1f8db8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x1f8dbc: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x1f8dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
    // 0x1f8dc0: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x1f8dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x1f8dc4: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x1f8dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
    // 0x1f8dc8: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f8dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f8dcc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f8dd0: 0x0  nop
    ctx->pc = 0x1f8dd0u;
    // NOP
    // 0x1f8dd4: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F8DD4u;
    {
        const bool branch_taken_0x1f8dd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f8dd4) {
            ctx->pc = 0x1F8DA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8da8;
        }
    }
    ctx->pc = 0x1F8DDCu;
    // 0x1f8ddc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f8ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8de0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f8de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f8de4: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x1f8de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
    // 0x1f8de8: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x1f8de8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
    // 0x1f8dec: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x1f8decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
    // 0x1f8df0: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x1f8df0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
    // 0x1f8df4: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x1f8df4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8df8: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x1f8df8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f8dfc: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x1f8dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x1f8e00: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8E00u;
    {
        const bool branch_taken_0x1f8e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E00u;
        // 0x1f8e04: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e00) {
            ctx->pc = 0x1F8E10u;
            goto label_1f8e10;
        }
    }
    ctx->pc = 0x1F8E08u;
label_1f8e08:
    // 0x1f8e08: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1F8E08u;
    {
        const bool branch_taken_0x1f8e08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E08u;
        // 0x1f8e0c: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e08) {
            ctx->pc = 0x1F8E50u;
            goto label_1f8e50;
        }
    }
    ctx->pc = 0x1F8E10u;
label_1f8e10:
    // 0x1f8e10: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x1f8e10u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_1f8e14:
    // 0x1f8e14: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1f8e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e18: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F8E18u;
    SET_GPR_U32(ctx, 31, 0x1F8E20u);
    ctx->pc = 0x1F8E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E18u;
    // 0x1f8e1c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8AF8u, 0x1F8E18u, 0x1F8E20u)) {
        return;
    }
    ctx->pc = 0x1F8E20u;
label_1f8e20:
    // 0x1f8e20: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f8e20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8e24: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f8e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f8e28: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f8e28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f8e2c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1f8e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1f8e30:
    // 0x1f8e30: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1f8e30u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e34: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f8e34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8e38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e3c: 0xc07e300  jal         func_1F8C00
    ctx->pc = 0x1F8E3Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E44u);
    ctx->pc = 0x1F8E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8E3Cu;
    // 0x1f8e40: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8C00u, 0x1F8E3Cu, 0x1F8E44u)) {
        return;
    }
    ctx->pc = 0x1F8E44u;
label_1f8e44:
    // 0x1f8e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8e48: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
    ctx->pc = 0x1F8E48u;
    {
        const bool branch_taken_0x1f8e48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E48u;
        // 0x1f8e4c: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e48) {
            ctx->pc = 0x1F8D00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8d00;
        }
    }
    ctx->pc = 0x1F8E50u;
label_1f8e50:
    // 0x1f8e50: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x1f8e50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
    // 0x1f8e54: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F8E54u;
    {
        const bool branch_taken_0x1f8e54 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E54u;
        // 0x1f8e58: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e54) {
            ctx->pc = 0x1F8E74u;
            goto label_1f8e74;
        }
    }
    ctx->pc = 0x1F8E5Cu;
    // 0x1f8e5c: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x1f8e5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
    // 0x1f8e60: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x1f8e60u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
    // 0x1f8e64: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8E64u;
    {
        const bool branch_taken_0x1f8e64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E64u;
        // 0x1f8e68: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e64) {
            ctx->pc = 0x1F8E74u;
            goto label_1f8e74;
        }
    }
    ctx->pc = 0x1F8E6Cu;
    // 0x1f8e6c: 0xc07e324  jal         func_1F8C90
    ctx->pc = 0x1F8E6Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E74u);
    ctx->pc = 0x1F8C90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8C90u, 0x1F8E6Cu, 0x1F8E74u)) {
        return;
    }
    ctx->pc = 0x1F8E74u;
label_1f8e74:
    // 0x1f8e74: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F8E74u;
    {
        const bool branch_taken_0x1f8e74 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f8e74) {
            ctx->pc = 0x1F8E78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8E74u;
            // 0x1f8e78: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8E88u;
            goto label_1f8e88;
        }
    }
    ctx->pc = 0x1F8E7Cu;
    // 0x1f8e7c: 0xc07e10c  jal         func_1F8430
    ctx->pc = 0x1F8E7Cu;
    SET_GPR_U32(ctx, 31, 0x1F8E84u);
    ctx->pc = 0x1F8430u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8430u, 0x1F8E7Cu, 0x1F8E84u)) {
        return;
    }
    ctx->pc = 0x1F8E84u;
label_1f8e84:
    // 0x1f8e84: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x1f8e84u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_1f8e88:
    // 0x1f8e88: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x1f8e88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x1f8e8c: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F8E8Cu;
    {
        const bool branch_taken_0x1f8e8c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x1F8E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E8Cu;
        // 0x1f8e90: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e8c) {
            ctx->pc = 0x1F8E9Cu;
            goto label_1f8e9c;
        }
    }
    ctx->pc = 0x1F8E94u;
    // 0x1f8e94: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1F8E94u;
    {
        const bool branch_taken_0x1f8e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8E94u;
        // 0x1f8e98: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8e94) {
            ctx->pc = 0x1F8F8Cu;
            goto label_1f8f8c;
        }
    }
    ctx->pc = 0x1F8E9Cu;
label_1f8e9c:
    // 0x1f8e9c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x1f8e9cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ea0: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x1f8ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x1f8ea4: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x1f8ea4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8ea8: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x1f8ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_1f8eac:
    // 0x1f8eac: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x1f8eacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8eb0: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x1f8eb0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f8eb4: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x1f8eb4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f8eb8: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x1f8eb8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1f8ebc: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1f8ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1f8ec0: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x1f8ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
    // 0x1f8ec4: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x1f8ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
    // 0x1f8ec8: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x1f8ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
    // 0x1f8ecc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x1f8eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1f8ed0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1f8ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1f8ed4: 0x0  nop
    ctx->pc = 0x1f8ed4u;
    // NOP
    // 0x1f8ed8: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F8ED8u;
    {
        const bool branch_taken_0x1f8ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f8ed8) {
            ctx->pc = 0x1F8EACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8eac;
        }
    }
    ctx->pc = 0x1F8EE0u;
    // 0x1f8ee0: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x1f8ee0u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8ee4: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x1f8ee4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f8ee8: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x1f8ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
    // 0x1f8eec: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x1f8eecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
    // 0x1f8ef0: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x1f8ef0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
    // 0x1f8ef4: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
    ctx->pc = 0x1F8EF4u;
    {
        const bool branch_taken_0x1f8ef4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x1f8ef4) {
            ctx->pc = 0x1F8EF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F8EF4u;
            // 0x1f8ef8: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F8F80u;
            goto label_1f8f80;
        }
    }
    ctx->pc = 0x1F8EFCu;
    // 0x1f8efc: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x1f8efcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f8f00:
    // 0x1f8f00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1f8f00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f04: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8f04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f08: 0xc07e300  jal         func_1F8C00
    ctx->pc = 0x1F8F08u;
    SET_GPR_U32(ctx, 31, 0x1F8F10u);
    ctx->pc = 0x1F8F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F08u;
    // 0x1f8f0c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8C00u, 0x1F8F08u, 0x1F8F10u)) {
        return;
    }
    ctx->pc = 0x1F8F10u;
label_1f8f10:
    // 0x1f8f10: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x1f8f10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f8f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f18: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f8f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f1c: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x1f8f1cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
    // 0x1f8f20: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x1f8f20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
    // 0x1f8f24: 0x0  nop
    ctx->pc = 0x1f8f24u;
    // NOP
label_1f8f28:
    // 0x1f8f28: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F8F28u;
    {
        const bool branch_taken_0x1f8f28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F8F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F28u;
        // 0x1f8f2c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f28) {
            ctx->pc = 0x1F8F4Cu;
            goto label_1f8f4c;
        }
    }
    ctx->pc = 0x1F8F30u;
    // 0x1f8f30: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x1f8f30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8f34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F8F34u;
    {
        const bool branch_taken_0x1f8f34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F34u;
        // 0x1f8f38: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f34) {
            ctx->pc = 0x1F8F4Cu;
            goto label_1f8f4c;
        }
    }
    ctx->pc = 0x1F8F3Cu;
    // 0x1f8f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f8f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f40: 0xc07e2e0  jal         func_1F8B80
    ctx->pc = 0x1F8F40u;
    SET_GPR_U32(ctx, 31, 0x1F8F48u);
    ctx->pc = 0x1F8F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F40u;
    // 0x1f8f44: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8B80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8B80u, 0x1F8F40u, 0x1F8F48u)) {
        return;
    }
    ctx->pc = 0x1F8F48u;
label_1f8f48:
    // 0x1f8f48: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x1f8f48u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_1f8f4c:
    // 0x1f8f4c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f8f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f8f50: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x1f8f50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
    // 0x1f8f54: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F8F54u;
    {
        const bool branch_taken_0x1f8f54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F8F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F54u;
        // 0x1f8f58: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f54) {
            ctx->pc = 0x1F8F28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8f28;
        }
    }
    ctx->pc = 0x1F8F5Cu;
    // 0x1f8f5c: 0xc07e2be  jal         func_1F8AF8
    ctx->pc = 0x1F8F5Cu;
    SET_GPR_U32(ctx, 31, 0x1F8F64u);
    ctx->pc = 0x1F8F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F8F5Cu;
    // 0x1f8f60: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8AF8u, 0x1F8F5Cu, 0x1F8F64u)) {
        return;
    }
    ctx->pc = 0x1F8F64u;
label_1f8f64:
    // 0x1f8f64: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x1f8f64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f8f68: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1f8f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1f8f6c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x1f8f6cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x1f8f70: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x1f8f70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f8f74: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1F8F74u;
    {
        const bool branch_taken_0x1f8f74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x1F8F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8F74u;
        // 0x1f8f78: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f8f74) {
            ctx->pc = 0x1F8F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f8f00;
        }
    }
    ctx->pc = 0x1F8F7Cu;
    // 0x1f8f7c: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x1f8f7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_1f8f80:
    // 0x1f8f80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1f8f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f8f84: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1f8f84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1f8f88: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x1f8f88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_1f8f8c:
    // 0x1f8f8c: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x1f8f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
    // 0x1f8f90: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x1f8f90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f8f94: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x1f8f94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
    // 0x1f8f98: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x1f8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
    // 0x1f8f9c: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x1f8f9cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
    // 0x1f8fa0: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x1f8fa0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
    // 0x1f8fa4: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x1f8fa4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
    // 0x1f8fa8: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x1f8fa8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
    // 0x1f8fac: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x1f8facu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
    // 0x1f8fb0: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x1f8fb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
    // 0x1f8fb4: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x1f8fb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
    // 0x1f8fb8: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x1f8fb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
    // 0x1f8fbc: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x1f8fbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
    // 0x1f8fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8FC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8FC0u;
        // 0x1f8fc4: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8FC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8FC8u;
}
