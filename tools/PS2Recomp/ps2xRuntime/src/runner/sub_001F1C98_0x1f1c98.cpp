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

// Function: sub_001F1C98
// Address: 0x1f1c98 - 0x1f2280
void sub_001F1C98_0x1f1c98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1C98_0x1f1c98");
#endif

    switch (ctx->pc) {
        case 0x1f1cf0u: goto label_1f1cf0;
        case 0x1f1d18u: goto label_1f1d18;
        case 0x1f1d48u: goto label_1f1d48;
        case 0x1f1d88u: goto label_1f1d88;
        case 0x1f1da0u: goto label_1f1da0;
        case 0x1f1da8u: goto label_1f1da8;
        case 0x1f1dc8u: goto label_1f1dc8;
        case 0x1f1dd4u: goto label_1f1dd4;
        case 0x1f1df0u: goto label_1f1df0;
        case 0x1f1e00u: goto label_1f1e00;
        case 0x1f1e28u: goto label_1f1e28;
        case 0x1f1e38u: goto label_1f1e38;
        case 0x1f1e78u: goto label_1f1e78;
        case 0x1f1eb0u: goto label_1f1eb0;
        case 0x1f1ef0u: goto label_1f1ef0;
        case 0x1f1f00u: goto label_1f1f00;
        case 0x1f1f88u: goto label_1f1f88;
        case 0x1f1fc8u: goto label_1f1fc8;
        case 0x1f202cu: goto label_1f202c;
        case 0x1f2070u: goto label_1f2070;
        case 0x1f20ccu: goto label_1f20cc;
        case 0x1f2110u: goto label_1f2110;
        case 0x1f2190u: goto label_1f2190;
        case 0x1f2218u: goto label_1f2218;
        default: break;
    }

    ctx->pc = 0x1f1c98u;

    // 0x1f1c98: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1f1c98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1f1c9c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1f1c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1f1ca0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1f1ca0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1f1ca4: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1f1ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1f1ca8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f1ca8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cac: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1f1cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1f1cb0: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1f1cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1f1cb4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1f1cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1f1cb8: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1f1cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1f1cbc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f1cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f1cc0: 0x8e622720  lw          $v0, 0x2720($s3)
    ctx->pc = 0x1f1cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10016)));
    // 0x1f1cc4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1CC4u;
    {
        const bool branch_taken_0x1f1cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CC4u;
        // 0x1f1cc8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cc4) {
            ctx->pc = 0x1F1CD4u;
            goto label_1f1cd4;
        }
    }
    ctx->pc = 0x1F1CCCu;
    // 0x1f1ccc: 0x1000015e  b           . + 4 + (0x15E << 2)
    ctx->pc = 0x1F1CCCu;
    {
        const bool branch_taken_0x1f1ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CCCu;
        // 0x1f1cd0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ccc) {
            ctx->pc = 0x1F2248u;
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F1CD4u;
label_1f1cd4:
    // 0x1f1cd4: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1f1cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1f1cd8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1f1cd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cdc: 0x8c43e964  lw          $v1, -0x169C($v0)
    ctx->pc = 0x1f1cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x33E964u));
    // 0x1f1ce0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1ce0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ce4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1ce8: 0xc07c6a4  jal         func_1F1A90
    ctx->pc = 0x1F1CE8u;
    SET_GPR_U32(ctx, 31, 0x1F1CF0u);
    ctx->pc = 0x1F1CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1CE8u;
    // 0x1f1cec: 0xac43e964  sw          $v1, -0x169C($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961508), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1A90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1A90u, 0x1F1CE8u, 0x1F1CF0u)) {
        return;
    }
    ctx->pc = 0x1F1CF0u;
label_1f1cf0:
    // 0x1f1cf0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1f1cf0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1cf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f1cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1cf8: 0x10620152  beq         $v1, $v0, . + 4 + (0x152 << 2)
    ctx->pc = 0x1F1CF8u;
    {
        const bool branch_taken_0x1f1cf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F1CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1CF8u;
        // 0x1f1cfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1cf8) {
            ctx->pc = 0x1F2244u;
            goto label_1f2244;
        }
    }
    ctx->pc = 0x1F1D00u;
    // 0x1f1d00: 0x54620023  bnel        $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1F1D00u;
    {
        const bool branch_taken_0x1f1d00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f1d00) {
            ctx->pc = 0x1F1D04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D00u;
            // 0x1f1d04: 0x8e72271c  lw          $s2, 0x271C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D90u;
            goto label_1f1d90;
        }
    }
    ctx->pc = 0x1F1D08u;
    // 0x1f1d08: 0x8e622718  lw          $v0, 0x2718($s3)
    ctx->pc = 0x1f1d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
    // 0x1f1d0c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1F1D0Cu;
    {
        const bool branch_taken_0x1f1d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d0c) {
            ctx->pc = 0x1F1D80u;
            goto label_1f1d80;
        }
    }
    ctx->pc = 0x1F1D14u;
    // 0x1f1d14: 0x8e642718  lw          $a0, 0x2718($s3)
    ctx->pc = 0x1f1d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
label_1f1d18:
    // 0x1f1d18: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x1f1d18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1f1d1c: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f1d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f1d20: 0x54440004  bnel        $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1D20u;
    {
        const bool branch_taken_0x1f1d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1d20) {
            ctx->pc = 0x1F1D24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D20u;
            // 0x1f1d24: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D34u;
            goto label_1f1d34;
        }
    }
    ctx->pc = 0x1F1D28u;
    // 0x1f1d28: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f1d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f1d2c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F1D2Cu;
    {
        const bool branch_taken_0x1f1d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D2Cu;
        // 0x1f1d30: 0xac622718  sw          $v0, 0x2718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d2c) {
            ctx->pc = 0x1F1D64u;
            goto label_1f1d64;
        }
    }
    ctx->pc = 0x1F1D34u;
label_1f1d34:
    // 0x1f1d34: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d38: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1D38u;
    {
        const bool branch_taken_0x1f1d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1F1D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D38u;
        // 0x1f1d3c: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d38) {
            ctx->pc = 0x1F1D60u;
            goto label_1f1d60;
        }
    }
    ctx->pc = 0x1F1D40u;
    // 0x1f1d40: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f1d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d44: 0x0  nop
    ctx->pc = 0x1f1d44u;
    // NOP
label_1f1d48:
    // 0x1f1d48: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1d4c: 0x0  nop
    ctx->pc = 0x1f1d4cu;
    // NOP
    // 0x1f1d50: 0x0  nop
    ctx->pc = 0x1f1d50u;
    // NOP
    // 0x1f1d54: 0x0  nop
    ctx->pc = 0x1f1d54u;
    // NOP
    // 0x1f1d58: 0x5444fffb  bnel        $v0, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1D58u;
    {
        const bool branch_taken_0x1f1d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1f1d58) {
            ctx->pc = 0x1F1D5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D58u;
            // 0x1f1d5c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1d48;
        }
    }
    ctx->pc = 0x1F1D60u;
label_1f1d60:
    // 0x1f1d60: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1f1d60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1f1d64:
    // 0x1f1d64: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x1f1d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x1f1d68: 0x8c431d10  lw          $v1, 0x1D10($v0)
    ctx->pc = 0x1f1d68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7440)));
    // 0x1f1d6c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1f1d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x1f1d70: 0xac441d10  sw          $a0, 0x1D10($v0)
    ctx->pc = 0x1f1d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7440), GPR_U32(ctx, 4));
    // 0x1f1d74: 0x8e632718  lw          $v1, 0x2718($s3)
    ctx->pc = 0x1f1d74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
    // 0x1f1d78: 0x5460ffe7  bnel        $v1, $zero, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1F1D78u;
    {
        const bool branch_taken_0x1f1d78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d78) {
            ctx->pc = 0x1F1D7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D78u;
            // 0x1f1d7c: 0x8e642718  lw          $a0, 0x2718($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1d18;
        }
    }
    ctx->pc = 0x1F1D80u;
label_1f1d80:
    // 0x1f1d80: 0xc07c5da  jal         func_1F1768
    ctx->pc = 0x1F1D80u;
    SET_GPR_U32(ctx, 31, 0x1F1D88u);
    ctx->pc = 0x1F1D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1D80u;
    // 0x1f1d84: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1768u, 0x1F1D80u, 0x1F1D88u)) {
        return;
    }
    ctx->pc = 0x1F1D88u;
label_1f1d88:
    // 0x1f1d88: 0x1000012f  b           . + 4 + (0x12F << 2)
    ctx->pc = 0x1F1D88u;
    {
        const bool branch_taken_0x1f1d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1D88u;
        // 0x1f1d8c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1d88) {
            ctx->pc = 0x1F2248u;
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F1D90u;
label_1f1d90:
    // 0x1f1d90: 0x5240000a  beql        $s2, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1D90u;
    {
        const bool branch_taken_0x1f1d90 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1d90) {
            ctx->pc = 0x1F1D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1D90u;
            // 0x1f1d94: 0x8e702718  lw          $s0, 0x2718($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1DBCu;
            goto label_1f1dbc;
        }
    }
    ctx->pc = 0x1F1D98u;
    // 0x1f1d98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f1d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1d9c: 0x0  nop
    ctx->pc = 0x1f1d9cu;
    // NOP
label_1f1da0:
    // 0x1f1da0: 0xc07c476  jal         func_1F11D8
    ctx->pc = 0x1F1DA0u;
    SET_GPR_U32(ctx, 31, 0x1F1DA8u);
    ctx->pc = 0x1F1DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DA0u;
    // 0x1f1da4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F11D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F11D8u, 0x1F1DA0u, 0x1F1DA8u)) {
        return;
    }
    ctx->pc = 0x1F1DA8u;
label_1f1da8:
    // 0x1f1da8: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1f1da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1dac: 0x0  nop
    ctx->pc = 0x1f1dacu;
    // NOP
    // 0x1f1db0: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1DB0u;
    {
        const bool branch_taken_0x1f1db0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DB0u;
        // 0x1f1db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1db0) {
            ctx->pc = 0x1F1DA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1da0;
        }
    }
    ctx->pc = 0x1F1DB8u;
    // 0x1f1db8: 0x8e702718  lw          $s0, 0x2718($s3)
    ctx->pc = 0x1f1db8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
label_1f1dbc:
    // 0x1f1dbc: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1DBCu;
    {
        const bool branch_taken_0x1f1dbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DBCu;
        // 0x1f1dc0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dbc) {
            ctx->pc = 0x1F1DE8u;
            goto label_1f1de8;
        }
    }
    ctx->pc = 0x1F1DC4u;
    // 0x1f1dc4: 0x0  nop
    ctx->pc = 0x1f1dc4u;
    // NOP
label_1f1dc8:
    // 0x1f1dc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1f1dc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1dcc: 0xc07c51e  jal         func_1F1478
    ctx->pc = 0x1F1DCCu;
    SET_GPR_U32(ctx, 31, 0x1F1DD4u);
    ctx->pc = 0x1F1DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DCCu;
    // 0x1f1dd0: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1478u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1478u, 0x1F1DCCu, 0x1F1DD4u)) {
        return;
    }
    ctx->pc = 0x1F1DD4u;
label_1f1dd4:
    // 0x1f1dd4: 0x2842ff9d  slti        $v0, $v0, -0x63
    ctx->pc = 0x1f1dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967197) ? 1 : 0);
    // 0x1f1dd8: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
    ctx->pc = 0x1F1DD8u;
    {
        const bool branch_taken_0x1f1dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DD8u;
        // 0x1f1ddc: 0x2402ff9c  addiu       $v0, $zero, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967196));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1dd8) {
            ctx->pc = 0x1F2248u;
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F1DE0u;
    // 0x1f1de0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F1DE0u;
    {
        const bool branch_taken_0x1f1de0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1DE0u;
        // 0x1f1de4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1de0) {
            ctx->pc = 0x1F1DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1dc8;
        }
    }
    ctx->pc = 0x1F1DE8u;
label_1f1de8:
    // 0x1f1de8: 0xc07c5da  jal         func_1F1768
    ctx->pc = 0x1F1DE8u;
    SET_GPR_U32(ctx, 31, 0x1F1DF0u);
    ctx->pc = 0x1F1DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1DE8u;
    // 0x1f1dec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F1768u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F1768u, 0x1F1DE8u, 0x1F1DF0u)) {
        return;
    }
    ctx->pc = 0x1F1DF0u;
label_1f1df0:
    // 0x1f1df0: 0x8e72271c  lw          $s2, 0x271C($s3)
    ctx->pc = 0x1f1df0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10012)));
    // 0x1f1df4: 0x52400009  beql        $s2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1DF4u;
    {
        const bool branch_taken_0x1f1df4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1df4) {
            ctx->pc = 0x1F1DF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1DF4u;
            // 0x1f1df8: 0x8e702718  lw          $s0, 0x2718($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E1Cu;
            goto label_1f1e1c;
        }
    }
    ctx->pc = 0x1F1DFCu;
    // 0x1f1dfc: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1f1dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_1f1e00:
    // 0x1f1e00: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1f1e00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1e04: 0x0  nop
    ctx->pc = 0x1f1e04u;
    // NOP
    // 0x1f1e08: 0x0  nop
    ctx->pc = 0x1f1e08u;
    // NOP
    // 0x1f1e0c: 0x0  nop
    ctx->pc = 0x1f1e0cu;
    // NOP
    // 0x1f1e10: 0x5640fffb  bnel        $s2, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1E10u;
    {
        const bool branch_taken_0x1f1e10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e10) {
            ctx->pc = 0x1F1E14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E10u;
            // 0x1f1e14: 0xae400010  sw          $zero, 0x10($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e00;
        }
    }
    ctx->pc = 0x1F1E18u;
    // 0x1f1e18: 0x8e702718  lw          $s0, 0x2718($s3)
    ctx->pc = 0x1f1e18u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
label_1f1e1c:
    // 0x1f1e1c: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1E1Cu;
    {
        const bool branch_taken_0x1f1e1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e1c) {
            ctx->pc = 0x1F1E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E1Cu;
            // 0x1f1e20: 0x8e72271c  lw          $s2, 0x271C($s3) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10012)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E6Cu;
            goto label_1f1e6c;
        }
    }
    ctx->pc = 0x1F1E24u;
    // 0x1f1e24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1f1e28:
    // 0x1f1e28: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F1E28u;
    {
        const bool branch_taken_0x1f1e28 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x1F1E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E28u;
        // 0x1f1e2c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e28) {
            ctx->pc = 0x1F1E5Cu;
            goto label_1f1e5c;
        }
    }
    ctx->pc = 0x1F1E30u;
    // 0x1f1e30: 0x2605000c  addiu       $a1, $s0, 0xC
    ctx->pc = 0x1f1e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f1e34: 0x0  nop
    ctx->pc = 0x1f1e34u;
    // NOP
label_1f1e38:
    // 0x1f1e38: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1f1e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1f1e3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1f1e3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1f1e40: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x1f1e40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1e44: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1e48: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1f1e48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1f1e4c: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x1f1e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1e50: 0xc4202a  slt         $a0, $a2, $a0
    ctx->pc = 0x1f1e50u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f1e54: 0x1480fff8  bnez        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F1E54u;
    {
        const bool branch_taken_0x1f1e54 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E54u;
        // 0x1f1e58: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e54) {
            ctx->pc = 0x1F1E38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e38;
        }
    }
    ctx->pc = 0x1F1E5Cu;
label_1f1e5c:
    // 0x1f1e5c: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1f1e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f1e60: 0x5600fff1  bnel        $s0, $zero, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F1E60u;
    {
        const bool branch_taken_0x1f1e60 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1e60) {
            ctx->pc = 0x1F1E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1E60u;
            // 0x1f1e64: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1E28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e28;
        }
    }
    ctx->pc = 0x1F1E68u;
    // 0x1f1e68: 0x8e72271c  lw          $s2, 0x271C($s3)
    ctx->pc = 0x1f1e68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10012)));
label_1f1e6c:
    // 0x1f1e6c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1f1e6cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1e70: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1E70u;
    {
        const bool branch_taken_0x1f1e70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E70u;
        // 0x1f1e74: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e70) {
            ctx->pc = 0x1F1E90u;
            goto label_1f1e90;
        }
    }
    ctx->pc = 0x1F1E78u;
label_1f1e78:
    // 0x1f1e78: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1f1e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f1e7c: 0x26a30001  addiu       $v1, $s5, 0x1
    ctx->pc = 0x1f1e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f1e80: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1f1e80u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f1e84: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1f1e84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1f1e88: 0x1640fffb  bnez        $s2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1E88u;
    {
        const bool branch_taken_0x1f1e88 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E88u;
        // 0x1f1e8c: 0x62a80a  movz        $s5, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 21, GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e88) {
            ctx->pc = 0x1F1E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1e78;
        }
    }
    ctx->pc = 0x1F1E90u;
label_1f1e90:
    // 0x1f1e90: 0x12a000ec  beqz        $s5, . + 4 + (0xEC << 2)
    ctx->pc = 0x1F1E90u;
    {
        const bool branch_taken_0x1f1e90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E90u;
        // 0x1f1e94: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e90) {
            ctx->pc = 0x1F2244u;
            goto label_1f2244;
        }
    }
    ctx->pc = 0x1F1E98u;
    // 0x1f1e98: 0x12400011  beqz        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F1E98u;
    {
        const bool branch_taken_0x1f1e98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1E98u;
        // 0x1f1e9c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1e98) {
            ctx->pc = 0x1F1EE0u;
            goto label_1f1ee0;
        }
    }
    ctx->pc = 0x1F1EA0u;
    // 0x1f1ea0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f1ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1ea4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1f1ea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ea8: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x1f1ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1f1eac: 0x0  nop
    ctx->pc = 0x1f1eacu;
    // NOP
label_1f1eb0:
    // 0x1f1eb0: 0x54450009  bnel        $v0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F1EB0u;
    {
        const bool branch_taken_0x1f1eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x1f1eb0) {
            ctx->pc = 0x1F1EB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1EB0u;
            // 0x1f1eb4: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1ED8u;
            goto label_1f1ed8;
        }
    }
    ctx->pc = 0x1F1EB8u;
    // 0x1f1eb8: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1f1eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
    // 0x1f1ebc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1f1ebcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x1f1ec0: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1f1ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1f1ec4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1f1ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f1ec8: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x1f1ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f1ecc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1f1eccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1f1ed0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x1f1ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
    // 0x1f1ed4: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x1f1ed4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1f1ed8:
    // 0x1f1ed8: 0x5640fff5  bnel        $s2, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F1ED8u;
    {
        const bool branch_taken_0x1f1ed8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1ed8) {
            ctx->pc = 0x1F1EDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1ED8u;
            // 0x1f1edc: 0x8e420010  lw          $v0, 0x10($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1eb0;
        }
    }
    ctx->pc = 0x1F1EE0u;
label_1f1ee0:
    // 0x1f1ee0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f1ee0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ee4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f1ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1ee8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f1ee8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1eec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f1eecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f1ef0:
    // 0x1f1ef0: 0x1aa000b9  blez        $s5, . + 4 + (0xB9 << 2)
    ctx->pc = 0x1F1EF0u;
    {
        const bool branch_taken_0x1f1ef0 = (GPR_S64(ctx, 21) <= 0);
        ctx->pc = 0x1F1EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1EF0u;
        // 0x1f1ef4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1ef0) {
            ctx->pc = 0x1F21D8u;
            goto label_1f21d8;
        }
    }
    ctx->pc = 0x1F1EF8u;
    // 0x1f1ef8: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1f1ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1f1efc: 0x0  nop
    ctx->pc = 0x1f1efcu;
    // NOP
label_1f1f00:
    // 0x1f1f00: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x1f1f00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1f04: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x1f1f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1f1f08: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1f1f08u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f1f0c: 0x124000ae  beqz        $s2, . + 4 + (0xAE << 2)
    ctx->pc = 0x1F1F0Cu;
    {
        const bool branch_taken_0x1f1f0c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F0Cu;
        // 0x1f1f10: 0x60a02d  daddu       $s4, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f0c) {
            ctx->pc = 0x1F21C8u;
            goto label_1f21c8;
        }
    }
    ctx->pc = 0x1F1F14u;
    // 0x1f1f14: 0x5600003d  bnel        $s0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x1F1F14u;
    {
        const bool branch_taken_0x1f1f14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f14) {
            ctx->pc = 0x1F1F18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1F14u;
            // 0x1f1f18: 0x8e450004  lw          $a1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F200Cu;
            goto label_1f200c;
        }
    }
    ctx->pc = 0x1F1F1Cu;
    // 0x1f1f1c: 0x8e621d10  lw          $v0, 0x1D10($s3)
    ctx->pc = 0x1f1f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 7440)));
    // 0x1f1f20: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1F20u;
    {
        const bool branch_taken_0x1f1f20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F20u;
        // 0x1f1f24: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f20) {
            ctx->pc = 0x1F1F34u;
            goto label_1f1f34;
        }
    }
    ctx->pc = 0x1F1F28u;
    // 0x1f1f28: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f1f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1f1f2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1F2Cu;
    {
        const bool branch_taken_0x1f1f2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F2Cu;
        // 0x1f1f30: 0xae621d10  sw          $v0, 0x1D10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 7440), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f2c) {
            ctx->pc = 0x1F1F50u;
            goto label_1f1f50;
        }
    }
    ctx->pc = 0x1F1F34u;
label_1f1f34:
    // 0x1f1f34: 0x8e632714  lw          $v1, 0x2714($s3)
    ctx->pc = 0x1f1f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10004)));
    // 0x1f1f38: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x1f1f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1f1f3c: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1f1f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1f1f40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1f1f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1f1f44: 0xae632714  sw          $v1, 0x2714($s3)
    ctx->pc = 0x1f1f44u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10004), GPR_U32(ctx, 3));
    // 0x1f1f48: 0x24421d14  addiu       $v0, $v0, 0x1D14
    ctx->pc = 0x1f1f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7444));
    // 0x1f1f4c: 0x2628821  addu        $s1, $s3, $v0
    ctx->pc = 0x1f1f4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_1f1f50:
    // 0x1f1f50: 0xae33004c  sw          $s3, 0x4C($s1)
    ctx->pc = 0x1f1f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 19));
    // 0x1f1f54: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1f1f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f1f58: 0x24b60001  addiu       $s6, $a1, 0x1
    ctx->pc = 0x1f1f58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1f5c: 0x8e622718  lw          $v0, 0x2718($s3)
    ctx->pc = 0x1f1f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 10008)));
    // 0x1f1f60: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f1f60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f1f64: 0xae712718  sw          $s1, 0x2718($s3)
    ctx->pc = 0x1f1f64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 10008), GPR_U32(ctx, 17));
    // 0x1f1f68: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x1f1f68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x1f1f6c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1f1f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1f1f70: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1f1f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1f1f74: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1f1f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f1f78: 0x10a6001e  beq         $a1, $a2, . + 4 + (0x1E << 2)
    ctx->pc = 0x1F1F78u;
    {
        const bool branch_taken_0x1f1f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F1F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1F78u;
        // 0x1f1f7c: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1f78) {
            ctx->pc = 0x1F1FF4u;
            goto label_1f1ff4;
        }
    }
    ctx->pc = 0x1F1F80u;
    // 0x1f1f80: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F1F80u;
    SET_GPR_U32(ctx, 31, 0x1F1F88u);
    ctx->pc = 0x1F1F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F1F80u;
    // 0x1f1f84: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F1F80u, 0x1F1F88u)) {
        return;
    }
    ctx->pc = 0x1F1F88u;
label_1f1f88:
    // 0x1f1f88: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f1f88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1f8c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f1f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f1f90: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f1f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1f94: 0x8c82e960  lw          $v0, -0x16A0($a0)
    ctx->pc = 0x1f1f94u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E960u));
    // 0x1f1f98: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f1f98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f1f9c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F1F9Cu;
    {
        const bool branch_taken_0x1f1f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1f9c) {
            ctx->pc = 0x1F1FA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F1F9Cu;
            // 0x1f1fa0: 0xac83e960  sw          $v1, -0x16A0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294961504), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1FA4u;
            goto label_1f1fa4;
        }
    }
    ctx->pc = 0x1F1FA4u;
label_1f1fa4:
    // 0x1f1fa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f1fa8: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1f1fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f1fac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f1facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f1fb0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1f1fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f1fb4: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1f1fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x1f1fb8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1f1fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f1fbc: 0x10660008  beq         $v1, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1FBCu;
    {
        const bool branch_taken_0x1f1fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F1FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FBCu;
        // 0x1f1fc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fbc) {
            ctx->pc = 0x1F1FE0u;
            goto label_1f1fe0;
        }
    }
    ctx->pc = 0x1F1FC4u;
    // 0x1f1fc4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1f1fc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f1fc8:
    // 0x1f1fc8: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f1fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f1fcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f1fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f1fd0: 0x0  nop
    ctx->pc = 0x1f1fd0u;
    // NOP
    // 0x1f1fd4: 0x0  nop
    ctx->pc = 0x1f1fd4u;
    // NOP
    // 0x1f1fd8: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F1FD8u;
    {
        const bool branch_taken_0x1f1fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F1FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FD8u;
        // 0x1f1fdc: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fd8) {
            ctx->pc = 0x1F1FC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1fc8;
        }
    }
    ctx->pc = 0x1F1FE0u;
label_1f1fe0:
    // 0x1f1fe0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1f1fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f1fe4: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1FE4u;
    {
        const bool branch_taken_0x1f1fe4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1FE4u;
        // 0x1f1fe8: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1fe4) {
            ctx->pc = 0x1F1FF8u;
            goto label_1f1ff8;
        }
    }
    ctx->pc = 0x1F1FECu;
    // 0x1f1fec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1f1fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f1ff0: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1f1ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1f1ff4:
    // 0x1f1ff4: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x1f1ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_1f1ff8:
    // 0x1f1ff8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f1ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1ffc: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f1ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f2000: 0x8e470008  lw          $a3, 0x8($s2)
    ctx->pc = 0x1f2000u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f2004: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x1F2004u;
    {
        const bool branch_taken_0x1f2004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2004u;
        // 0x1f2008: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2004) {
            ctx->pc = 0x1F21C8u;
            goto label_1f21c8;
        }
    }
    ctx->pc = 0x1F200Cu;
label_1f200c:
    // 0x1f200c: 0x54a70028  bnel        $a1, $a3, . + 4 + (0x28 << 2)
    ctx->pc = 0x1F200Cu;
    {
        const bool branch_taken_0x1f200c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f200c) {
            ctx->pc = 0x1F2010u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F200Cu;
            // 0x1f2010: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20B0u;
            goto label_1f20b0;
        }
    }
    ctx->pc = 0x1F2014u;
    // 0x1f2014: 0x8e460008  lw          $a2, 0x8($s2)
    ctx->pc = 0x1f2014u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1f2018: 0x10e60021  beq         $a3, $a2, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F2018u;
    {
        const bool branch_taken_0x1f2018 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2018u;
        // 0x1f201c: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2018) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F2020u;
    // 0x1f2020: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x1f2020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f2024: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F2024u;
    SET_GPR_U32(ctx, 31, 0x1F202Cu);
    ctx->pc = 0x1F2028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F2024u;
    // 0x1f2028: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F2024u, 0x1F202Cu)) {
        return;
    }
    ctx->pc = 0x1F202Cu;
label_1f202c:
    // 0x1f202c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f202cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2030: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f2030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f2034: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f2034u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f2038: 0x8c82e960  lw          $v0, -0x16A0($a0)
    ctx->pc = 0x1f2038u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E960u));
    // 0x1f203c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f203cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f2040: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F2040u;
    {
        const bool branch_taken_0x1f2040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2040) {
            ctx->pc = 0x1F2044u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2040u;
            // 0x1f2044: 0xac83e960  sw          $v1, -0x16A0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294961504), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2048u;
            goto label_1f2048;
        }
    }
    ctx->pc = 0x1F2048u;
label_1f2048:
    // 0x1f2048: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f204c: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1f204cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f2050: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f2050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f2054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f2058: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f2058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f205c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1f205cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1f2060: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f2064: 0x10460008  beq         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2064u;
    {
        const bool branch_taken_0x1f2064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2064u;
        // 0x1f2068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2064) {
            ctx->pc = 0x1F2088u;
            goto label_1f2088;
        }
    }
    ctx->pc = 0x1F206Cu;
    // 0x1f206c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f206cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2070:
    // 0x1f2070: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f2070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f2074: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2078: 0x0  nop
    ctx->pc = 0x1f2078u;
    // NOP
    // 0x1f207c: 0x0  nop
    ctx->pc = 0x1f207cu;
    // NOP
    // 0x1f2080: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2080u;
    {
        const bool branch_taken_0x1f2080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F2084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2080u;
        // 0x1f2084: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2080) {
            ctx->pc = 0x1F2070u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2070;
        }
    }
    ctx->pc = 0x1F2088u;
label_1f2088:
    // 0x1f2088: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f208c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F208Cu;
    {
        const bool branch_taken_0x1f208c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F208Cu;
        // 0x1f2090: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f208c) {
            ctx->pc = 0x1F20A0u;
            goto label_1f20a0;
        }
    }
    ctx->pc = 0x1F2094u;
    // 0x1f2094: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f2094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f2098: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f2098u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f209c: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x1f209cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_1f20a0:
    // 0x1f20a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f20a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f20a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f20a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f20a8: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1F20A8u;
    {
        const bool branch_taken_0x1f20a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F20ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20A8u;
        // 0x1f20ac: 0x8e470008  lw          $a3, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20a8) {
            ctx->pc = 0x1F214Cu;
            goto label_1f214c;
        }
    }
    ctx->pc = 0x1F20B0u;
label_1f20b0:
    // 0x1f20b0: 0x14470026  bne         $v0, $a3, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F20B0u;
    {
        const bool branch_taken_0x1f20b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1f20b0) {
            ctx->pc = 0x1F214Cu;
            goto label_1f214c;
        }
    }
    ctx->pc = 0x1F20B8u;
    // 0x1f20b8: 0x10a70021  beq         $a1, $a3, . + 4 + (0x21 << 2)
    ctx->pc = 0x1F20B8u;
    {
        const bool branch_taken_0x1f20b8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 7));
        ctx->pc = 0x1F20BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F20B8u;
        // 0x1f20bc: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f20b8) {
            ctx->pc = 0x1F2140u;
            goto label_1f2140;
        }
    }
    ctx->pc = 0x1F20C0u;
    // 0x1f20c0: 0x8e04004c  lw          $a0, 0x4C($s0)
    ctx->pc = 0x1f20c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f20c4: 0xc07c956  jal         func_1F2558
    ctx->pc = 0x1F20C4u;
    SET_GPR_U32(ctx, 31, 0x1F20CCu);
    ctx->pc = 0x1F20C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F20C4u;
    // 0x1f20c8: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F2558u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F2558u, 0x1F20C4u, 0x1F20CCu)) {
        return;
    }
    ctx->pc = 0x1F20CCu;
label_1f20cc:
    // 0x1f20cc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f20ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20d0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x1f20d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x1f20d4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1f20d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f20d8: 0x8c82e960  lw          $v0, -0x16A0($a0)
    ctx->pc = 0x1f20d8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x33E960u));
    // 0x1f20dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1f20dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1f20e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1F20E0u;
    {
        const bool branch_taken_0x1f20e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f20e0) {
            ctx->pc = 0x1F20E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F20E0u;
            // 0x1f20e4: 0xac83e960  sw          $v1, -0x16A0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 4294961504), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F20E8u;
            goto label_1f20e8;
        }
    }
    ctx->pc = 0x1F20E8u;
label_1f20e8:
    // 0x1f20e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f20e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f20ec: 0x2603000c  addiu       $v1, $s0, 0xC
    ctx->pc = 0x1f20ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f20f0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1f20f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f20f4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1f20f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f20f8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1f20f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f20fc: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x1f20fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x1f2100: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1f2100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1f2104: 0x10460008  beq         $v0, $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2104u;
    {
        const bool branch_taken_0x1f2104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x1F2108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2104u;
        // 0x1f2108: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2104) {
            ctx->pc = 0x1F2128u;
            goto label_1f2128;
        }
    }
    ctx->pc = 0x1F210Cu;
    // 0x1f210c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1f210cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f2110:
    // 0x1f2110: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1f2110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x1f2114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2118: 0x0  nop
    ctx->pc = 0x1f2118u;
    // NOP
    // 0x1f211c: 0x0  nop
    ctx->pc = 0x1f211cu;
    // NOP
    // 0x1f2120: 0x1446fffb  bne         $v0, $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2120u;
    {
        const bool branch_taken_0x1f2120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x1F2124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2120u;
        // 0x1f2124: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2120) {
            ctx->pc = 0x1F2110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2110;
        }
    }
    ctx->pc = 0x1F2128u;
label_1f2128:
    // 0x1f2128: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f212c: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F212Cu;
    {
        const bool branch_taken_0x1f212c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F212Cu;
        // 0x1f2130: 0x3b41021  addu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f212c) {
            ctx->pc = 0x1F2140u;
            goto label_1f2140;
        }
    }
    ctx->pc = 0x1F2134u;
    // 0x1f2134: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x1f2134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f2138: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1f2138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1f213c: 0x3b41021  addu        $v0, $sp, $s4
    ctx->pc = 0x1f213cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_1f2140:
    // 0x1f2140: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f2140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2144: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1f2144u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1f2148: 0x8e470004  lw          $a3, 0x4($s2)
    ctx->pc = 0x1f2148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_1f214c:
    // 0x1f214c: 0x14f1001f  bne         $a3, $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1F214Cu;
    {
        const bool branch_taken_0x1f214c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 17));
        ctx->pc = 0x1F2150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F214Cu;
        // 0x1f2150: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f214c) {
            ctx->pc = 0x1F21CCu;
            goto label_1f21cc;
        }
    }
    ctx->pc = 0x1F2154u;
    // 0x1f2154: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f2154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f2158: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x1f2158u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1f215c: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F215Cu;
    {
        const bool branch_taken_0x1f215c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f215c) {
            ctx->pc = 0x1F2160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F215Cu;
            // 0x1f2160: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F21C4u;
            goto label_1f21c4;
        }
    }
    ctx->pc = 0x1F2164u;
    // 0x1f2164: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f2164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f2168: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f2168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f216c: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F216Cu;
    {
        const bool branch_taken_0x1f216c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f216c) {
            ctx->pc = 0x1F2170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F216Cu;
            // 0x1f2170: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2180u;
            goto label_1f2180;
        }
    }
    ctx->pc = 0x1F2174u;
    // 0x1f2174: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f2174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f2178: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1F2178u;
    {
        const bool branch_taken_0x1f2178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F217Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2178u;
        // 0x1f217c: 0xac622718  sw          $v0, 0x2718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2178) {
            ctx->pc = 0x1F21ACu;
            goto label_1f21ac;
        }
    }
    ctx->pc = 0x1F2180u;
label_1f2180:
    // 0x1f2180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2184: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F2184u;
    {
        const bool branch_taken_0x1f2184 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F2188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2184u;
        // 0x1f2188: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2184) {
            ctx->pc = 0x1F21A8u;
            goto label_1f21a8;
        }
    }
    ctx->pc = 0x1F218Cu;
    // 0x1f218c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f218cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1f2190:
    // 0x1f2190: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2194: 0x0  nop
    ctx->pc = 0x1f2194u;
    // NOP
    // 0x1f2198: 0x0  nop
    ctx->pc = 0x1f2198u;
    // NOP
    // 0x1f219c: 0x0  nop
    ctx->pc = 0x1f219cu;
    // NOP
    // 0x1f21a0: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F21A0u;
    {
        const bool branch_taken_0x1f21a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f21a0) {
            ctx->pc = 0x1F21A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21A0u;
            // 0x1f21a4: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2190u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2190;
        }
    }
    ctx->pc = 0x1F21A8u;
label_1f21a8:
    // 0x1f21a8: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f21a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f21ac:
    // 0x1f21ac: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f21acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f21b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f21b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f21b4: 0x8c621d10  lw          $v0, 0x1D10($v1)
    ctx->pc = 0x1f21b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7440)));
    // 0x1f21b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f21b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f21bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F21BCu;
    {
        const bool branch_taken_0x1f21bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21BCu;
        // 0x1f21c0: 0xac701d10  sw          $s0, 0x1D10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21bc) {
            ctx->pc = 0x1F21C8u;
            goto label_1f21c8;
        }
    }
    ctx->pc = 0x1F21C4u;
label_1f21c4:
    // 0x1f21c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1f21c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f21c8:
    // 0x1f21c8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1f21c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1f21cc:
    // 0x1f21cc: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x1f21ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1f21d0: 0x1440ff4b  bnez        $v0, . + 4 + (-0xB5 << 2)
    ctx->pc = 0x1F21D0u;
    {
        const bool branch_taken_0x1f21d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F21D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21D0u;
        // 0x1f21d4: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21d0) {
            ctx->pc = 0x1F1F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1f00;
        }
    }
    ctx->pc = 0x1F21D8u;
label_1f21d8:
    // 0x1f21d8: 0x5480ff45  bnel        $a0, $zero, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1F21D8u;
    {
        const bool branch_taken_0x1f21d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f21d8) {
            ctx->pc = 0x1F21DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21D8u;
            // 0x1f21dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F1EF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f1ef0;
        }
    }
    ctx->pc = 0x1F21E0u;
    // 0x1f21e0: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F21E0u;
    {
        const bool branch_taken_0x1f21e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F21E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21E0u;
        // 0x1f21e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21e0) {
            ctx->pc = 0x1F2248u;
            goto label_1f2248;
        }
    }
    ctx->pc = 0x1F21E8u;
    // 0x1f21e8: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f21e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f21ec: 0x8c622718  lw          $v0, 0x2718($v1)
    ctx->pc = 0x1f21ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 10008)));
    // 0x1f21f0: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F21F0u;
    {
        const bool branch_taken_0x1f21f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f21f0) {
            ctx->pc = 0x1F21F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F21F0u;
            // 0x1f21f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2204u;
            goto label_1f2204;
        }
    }
    ctx->pc = 0x1F21F8u;
    // 0x1f21f8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1f21f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1f21fc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x1F21FCu;
    {
        const bool branch_taken_0x1f21fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F21FCu;
        // 0x1f2200: 0xac622718  sw          $v0, 0x2718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 10008), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f21fc) {
            ctx->pc = 0x1F2234u;
            goto label_1f2234;
        }
    }
    ctx->pc = 0x1F2204u;
label_1f2204:
    // 0x1f2204: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2208: 0x10500009  beq         $v0, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2208u;
    {
        const bool branch_taken_0x1f2208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1F220Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2208u;
        // 0x1f220c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2208) {
            ctx->pc = 0x1F2230u;
            goto label_1f2230;
        }
    }
    ctx->pc = 0x1F2210u;
    // 0x1f2210: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f2210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2214: 0x0  nop
    ctx->pc = 0x1f2214u;
    // NOP
label_1f2218:
    // 0x1f2218: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1f2218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f221c: 0x0  nop
    ctx->pc = 0x1f221cu;
    // NOP
    // 0x1f2220: 0x0  nop
    ctx->pc = 0x1f2220u;
    // NOP
    // 0x1f2224: 0x0  nop
    ctx->pc = 0x1f2224u;
    // NOP
    // 0x1f2228: 0x5450fffb  bnel        $v0, $s0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F2228u;
    {
        const bool branch_taken_0x1f2228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x1f2228) {
            ctx->pc = 0x1F222Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F2228u;
            // 0x1f222c: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F2218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f2218;
        }
    }
    ctx->pc = 0x1F2230u;
label_1f2230:
    // 0x1f2230: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1f2230u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1f2234:
    // 0x1f2234: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x1f2234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x1f2238: 0x8c621d10  lw          $v0, 0x1D10($v1)
    ctx->pc = 0x1f2238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7440)));
    // 0x1f223c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1f223cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1f2240: 0xac701d10  sw          $s0, 0x1D10($v1)
    ctx->pc = 0x1f2240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7440), GPR_U32(ctx, 16));
label_1f2244:
    // 0x1f2244: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f2244u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2248:
    // 0x1f2248: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1f2248u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f224c: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1f224cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f2250: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1f2250u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f2254: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1f2254u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f2258: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1f2258u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f225c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1f225cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f2260: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1f2260u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f2264: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f2264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f2268: 0x3e00008  jr          $ra
    ctx->pc = 0x1F2268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F226Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F2268u;
        // 0x1f226c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F2268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F2270u;
    // 0x1f2270: 0xaca42720  sw          $a0, 0x2720($a1)
    ctx->pc = 0x1f2270u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 10016), GPR_U32(ctx, 4));
    // 0x1f2274: 0x0  nop
    ctx->pc = 0x1f2274u;
    // NOP
    // 0x1f2278: 0xaca4271c  sw          $a0, 0x271C($a1)
    ctx->pc = 0x1f2278u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 10012), GPR_U32(ctx, 4));
    // 0x1f227c: 0x0  nop
    ctx->pc = 0x1f227cu;
    // NOP
    ctx->pc = 0x1f2280u;
}
